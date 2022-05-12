#define THREAD_CONVERT_THREAD_STATE_FROM_SELF 2
#define OP_Offset 89
#define GET_RCV_ELEMENTS(y) (((y) >> 24) & 0xf)
#define vdbeInvokeSqllog(x) 
#define _Nullable 
#define _DELETE_OK (1<<12)
#define SQLITE_MALLOCSIZE(x) (_sqliteZone_ ? _sqliteZone_->size(_sqliteZone_,x) : malloc_size(x))
#define BTS_READ_ONLY 0x0001
#define _UINT64_T 
#define TIOCDSIMICROCODE _IO('t', 85)
#define __UINT_LEAST16_MAX__ 0xffff
#define FPC_PC_24 0x0000
#define OPFLAG_USESEEKRESULT 0x10
#define OP_FkIfZero 46
#define RE_DUP_MAX 255
#define VM_MEMORY_ASSETSD 72
#define SQLITE_CONSTRAINT_ROWID (SQLITE_CONSTRAINT |(10<<8))
#define VM_MEMORY_CARBON VM_MEMORY_CORESERVICES
#define TK_OTHERS 93
#define _SC_NGROUPS_MAX 4
#define sa_sigaction __sigaction_u.__sa_sigaction
#define SQLITE_DEFAULT_FILE_PERMISSIONS 0644
#define SQLITE_WIN32_TEMP_DIRECTORY_TYPE 2
#define TK_BITOR 100
#define TK_SPACE 177
#define USE_PREAD 1
#define SQLITE_MUTEX_STATIC_VFS1 11
#define SQLITE_MUTEX_STATIC_VFS2 12
#define SQLITE_MUTEX_STATIC_VFS3 13
#define MemSetTypeFlag(p,f) ((p)->flags = ((p)->flags&~(MEM_TypeMask|MEM_Zero))|f)
#define _WATTR_OK (1<<16)
#define MAC_OS_X_VERSION_10_0 1000
#define SQLITE_CANTOPEN_NOTEMPDIR (SQLITE_CANTOPEN | (1<<8))
#define VM_PAGE_INFO_MAX 
#define MAC_OS_X_VERSION_10_3 1030
#define EIO 5
#define ACCESSPERMS (S_IRWXU|S_IRWXG|S_IRWXO)
#define CPU_SUBTYPE_ARM64E ((cpu_subtype_t) 2)
#define A_SETKMASK 5
#define _SC_EXPR_NEST_MAX 14
#define __IPHONE_14_5 140500
#define STAILQ_INIT(head) do { STAILQ_FIRST((head)) = NULL; (head)->stqh_last = &STAILQ_FIRST((head)); } while (0)
#define NL_NMAX 1
#define SV_RESETHAND SA_RESETHAND
#define TARGET_RT_BIG_ENDIAN 0
#define SQLITE_FCNTL_DATA_VERSION 35
#define __DARWIN_howmany(x,y) ((((x) % (y)) == 0) ? ((x) / (y)) : (((x) / (y)) + 1))
#define __DARWIN_INODE64(sym) __asm("_" __STRING(sym) __DARWIN_SUF_64_BIT_INO_T)
#define SQLITE_IOCAP_ATOMIC32K 0x00000080
#define CLOCK_THREAD_CPUTIME_ID _CLOCK_THREAD_CPUTIME_ID
#define _SC_THREAD_SAFE_FUNCTIONS 91
#define VM_MEMORY_SHARED_PMAP 32
#define IOCPARM_LEN(x) (((x) >> 16) & IOCPARM_MASK)
#define _POSIX_TIMER_MAX 32
#define TAILQ_INSERT_BEFORE(listelm,elm,field) do { TAILQ_CHECK_PREV(listelm, field); (elm)->field.tqe_prev = (listelm)->field.tqe_prev; TAILQ_NEXT((elm), field) = (listelm); *(listelm)->field.tqe_prev = (elm); (listelm)->field.tqe_prev = &TAILQ_NEXT((elm), field); QMD_TRACE_ELEM(&(elm)->field); QMD_TRACE_ELEM(&listelm->field); } while (0)
#define _MACH_MACHINE_KERN_RETURN_H_ 
#define _PTHREAD_COND_SIG_init 0x3CB0B1BB
#define bBatch 0
#define CPU_STATE_IDLE 2
#define IOPOL_VFS_STATFS_NO_DATA_VOLUME_DEFAULT 0
#define PAGER_CKPT_FULLFSYNC 0x10
#define CPU_SUBTYPE_X86_64_H ((cpu_subtype_t)8)
#define AUDIT_TRIGGER_READ_FILE 3
#define EDESTADDRREQ 39
#define LIST_INSERT_HEAD(head,elm,field) do { LIST_CHECK_HEAD((head), field); if ((LIST_NEXT((elm), field) = LIST_FIRST((head))) != NULL) LIST_FIRST((head))->field.le_prev = &LIST_NEXT((elm), field); LIST_FIRST((head)) = (elm); (elm)->field.le_prev = &LIST_FIRST((head)); } while (0)
#define CC_QUOTE2 9
#define SQLITE_MUTEX_STATIC_PRNG 5
#define _SC_XBS5_ILP32_OFF32 122
#define etRADIX 0
#define NC_HasWin 0x8000
#define MACH_PORT_TYPE_PORT_OR_DEAD (MACH_PORT_TYPE_PORT_RIGHTS|MACH_PORT_TYPE_DEAD_NAME)
#define THREAD_STATE_FLAVOR_LIST_10_15 131
#define MACH_MSG_TYPE_DISPOSE_SEND_ONCE 26
#define MACH_VOUCHER_ATTR_AUTO_REDEEM ((mach_voucher_attr_recipe_command_t)4)
#define DBFLAG_SchemaKnownOk 0x0010
#define WAL_NORMAL_MODE 0
#define __improbable(x) (x)
#define OE_Restrict 7
#define ATTR_CMN_ERROR 0x20000000
#define ITIMER_VIRTUAL 1
#define _PTHREAD_CONDATTR_T 
#define sqlite3StackAllocZero(D,N) sqlite3DbMallocZero(D,N)
#define EMLINK 31
#define AUDIT_RECORD_MAGIC 0x828a0f1b
#define OP_SeekHit 119
#define PTRMAP_FREEPAGE 2
#define COLNAME_NAME 0
#define P_SSTEP 0
#define TRANS_READ 1
#define SIOCGIFADDR _IOWR('i', 33, struct ifreq)
#define SQLITE_CHECKPOINT_PASSIVE 0
#define __DBL_DENORM_MIN__ ((double)4.94065645841246544176568792868221372e-324L)
#define HOST_XPC_EXCEPTION_PORT (17 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define NOTE_FUNLOCK 0x00000100
#define VM_PROT_ALL (VM_PROT_READ|VM_PROT_WRITE|VM_PROT_EXECUTE)
#define __FLT32X_DECIMAL_DIG__ 17
#define F_RDLCK 1
#define ATTR_CMN_FNDRINFO 0x00004000
#define EXC_I386_STKFLT 12
#define SQLITE_CREATE_TABLE 2
#define TIOCSBRK _IO('t', 123)
#define TK_WITH 81
#define x86_AVX_STATE_COUNT ((mach_msg_type_number_t) (sizeof(x86_avx_state_t)/sizeof(unsigned int)))
#define NeXTBSD4_0 0
#define SQLITE_SCANSTAT_EST 2
#define MACH_SEND_NO_BUFFER 0x1000000d
#define __sfeof(p) (((p)->_flags & __SEOF) != 0)
#define DIR_MNTSTATUS_TRIGGER 0x00000002
#define SRCHFS_SKIPINVISIBLE 0x00000020
#define EVFILT_SIGNAL (-6)
#define MEMORY_OBJECT_DATA_PURGE 0x4
#define MAXFLOAT 0x1.fffffep+127f
#define KERN_UNRAGE_PROC 3
#define KERN_LOCK_UNSTABLE 39
#define VdbeModuleComment(X) 
#define TK_DOT 137
#define ___POSIX_C_DEPRECATED_STARTING_199309L 
#define SCHED_RR 2
#define TH_USAGE_SCALE 1000
#define _LIMITS_H_ 
#define osOpenDirectory ((int(*)(const char*,int*))aSyscall[17].pCurrent)
#define VM_BEHAVIOR_SEQUENTIAL ((vm_behavior_t) 2)
#define IN_INDEX_ROWID 1
#define OE_SetDflt 9
#define MAP_32BIT 0x8000
#define __ILP32_OFF32 (-1)
#define CRF_NOMEMBERD 0x00000001
#define PTHREAD_MUTEX_POLICY_FIRSTFIT_NP 3
#define KERN_DUMPDEV 31
#define __DARWIN_SUF_1050 "$1050"
#define _PTHREAD_FIRSTFIT_MUTEX_SIG_init 0x32AAABA3
#define EQUIV_CLASS_MAX 2
#define OP_Function 65
#define VOL_CAP_INT_EXTENDED_SECURITY 0x00000400
#define SIGPROF 27
#define PARSE_HDR_SZ offsetof(Parse,aTempReg)
#define OP_DecrJumpZero 49
#define OS_WARN_RESULT __attribute__((__warn_unused_result__))
#define bool _Bool
#define host_get_dynamic_pager_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_DYNAMIC_PAGER_PORT, (port)))
#define SQLITE_PTR_TO_INT(X) ((int)(__PTRDIFF_TYPE__)(X))
#define _SC_CPUTIME 68
#define __UINT_FAST64_MAX__ 0xffffffffffffffffULL
#define SQLITE_MAX_PAGE_SIZE 65536
#define KERN_UNOPENEVT_PROC 2
#define VOL_CAP_FMT_OPENDENYMODES 0x00001000
#define VM_REGION_EXTENDED_INFO 13
#define CTLFLAG_SECURE 0x08000000
#define ENOTTY 25
#define KERN_PROC 14
#define KERN_PROF 16
#define SQLITE_STATUS_MALLOC_COUNT 9
#define CIRCLEQ_FIRST(head) ((head)->cqh_first)
#define __cold __attribute__((__cold__))
#define HOST_LOAD_INFO 1
#define EXC_I386_DIVERR 0
#define MACH_RCV_INVALID_TRAILER 0x1000400f
#define CC_X 0
#define UINT32_C(v) (v ## U)
#define SQLITE_EXTERN extern
#define UTIME_NOW -1
#define TASK_NAME_NULL ((task_name_t) 0)
#define PAGER_FULLFSYNC 0x08
#define __FLT32_HAS_DENORM__ 1
#define S_ISGID 0002000
#define S_IFBLK 0060000
#define _POSIX_SYMLINK_MAX 255
#define CIRCLEQ_CHECK_NEXT(head,elm,field) 
#define F_NODIRECT 62
#define PragTyp_TABLE_INFO 34
#define _LIMITS_H___ 
#define DST_AUST 2
#define YYNOERRORRECOVERY 1
#define memset(dest,...) __builtin___memset_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define _POSIX_V7_LP64_OFF64 __LP64_OFF64
#define sqlite3IsNumericAffinity(X) ((X)>=SQLITE_AFF_NUMERIC)
#define ATTR_FILE_ALLOCSIZE 0x00000004
#define CPU_TYPE_MC88000 ((cpu_type_t) 13)
#define osMkdir ((int(*)(const char*,mode_t))aSyscall[18].pCurrent)
#define VFS_MAXTYPENUM 1
#define unixLogError(a,b,c) unixLogErrorAtLine(a,b,c,__LINE__)
#define MACH_SEND_INVALID_REPLY 0x10000009
#define OP_VCreate 161
#define VM_VOLATILE_GROUP_MASK (7 << VM_VOLATILE_GROUP_SHIFT)
#define _CS_PATH 1
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffULL
#define SQLITE_WAL_H 
#define _XBS5_LP64_OFF64 __LP64_OFF64
#define _ERRNO_T 
#define sqliteHashNext(E) ((E)->next)
#define EVFILT_EXCEPT (-15)
#define NFDBITS __DARWIN_NFDBITS
#define POLL_PRI 5
#define TIOCSETD _IOW('t', 27, int)
#define SQLITE_TESTCTRL_BENIGN_MALLOC_HOOKS 10
#define MACH_SEND_NODENAP MACH_SEND_NOIMPORTANCE
#define VM_MEMORY_IOACCELERATOR 100
#define MACH_MSG_GUARD_FLAGS_IMMOVABLE_RECEIVE 0x0001
#define ATTR_DIR_LINKCOUNT 0x00000001
#define wsdStat sqlite3Stat
#define SQLITE_TCLAPI 
#define SQLITE_TRACE_NONLEGACY_MASK 0x0f
#define TK_VARIABLE 151
#define SQLITE_TESTCTRL_PRNG_SAVE 5
#define MPO_INSERT_SEND_RIGHT 0x10
#define STAILQ_FOREACH_SAFE(var,head,field,tvar) for ((var) = STAILQ_FIRST((head)); (var) && ((tvar) = STAILQ_NEXT((var), field), 1); (var) = (tvar))
#define PragTyp_FOREIGN_KEY_LIST 14
#define AU_IPv4 4
#define MACH_PORT_STATUS_FLAG_TEMPOWNER 0x01
#define __FLT32X_NORM_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define WALINDEX_LOCK_OFFSET (sizeof(WalIndexHdr)*2+offsetof(WalCkptInfo,aLock))
#define _I386__PARAM_H_ 
#define __UINT_LEAST8_MAX__ 0xff
#define AU_IPv6 16
#define EXC_I386_EXTOVR 4
#define IOC_DIRMASK (__uint32_t)0xe0000000
#define _SC_SYMLOOP_MAX 120
#define __UINTMAX_TYPE__ long unsigned int
#define _CS_XBS5_LP64_OFF64_CFLAGS 28
#define BITVEC_MXHASH (BITVEC_NINT/2)
#define host_set_coalition_port(host,port) (host_set_special_port((host), HOST_COALITION_PORT, (port)))
#define SQLITE_UPDATE 23
#define sprintf(str,...) __builtin___sprintf_chk (str, 0, __darwin_obsz(str), __VA_ARGS__)
#define TK_SET 126
#define VM_MEMORY_OPENCL 67
#define PRIO_USER 2
#define thread_get_kernel_port(thread,port) (thread_get_special_port((thread), THREAD_KERNEL_PORT, (port)))
#define KERN_NOT_RECEIVER 7
#define IOPOL_APPLICATION IOPOL_STANDARD
#define X86_DEBUG_STATE64_COUNT x86_DEBUG_STATE64_COUNT
#define MACH_MSG_VM_SPACE 0x00001000
#define EXC_MASK_RPC_ALERT (1 << EXC_RPC_ALERT)
#define __unavailable 
#define ExpandBlob(P) (((P)->flags&MEM_Zero)?sqlite3VdbeMemExpandBlob(P):0)
#define host_get_iocompressionstats_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_IOCOMPRESSIONSTATS_PORT, (port)))
#define TK_CTIME_KW 97
#define USER_MAXID 21
#define TF_HasNotNull 0x0200
#define CRF_MAC_ENFORCE 0x00000002
#define CPU_SUBTYPE_PENTII_M3 CPU_SUBTYPE_INTEL(6, 3)
#define CPU_SUBTYPE_PENTII_M5 CPU_SUBTYPE_INTEL(6, 5)
#define IS_BIG_INT(X) (((X)&~(i64)0xffffffff)!=0)
#define TASK_KERNELMEMORY_INFO 7
#define SIGUSR1 30
#define SIGUSR2 31
#define SQLITE_INDEX_CONSTRAINT_MATCH 64
#define SQLITE_DIRECTONLY 0x000080000
#define VM_MEMORY_DYLD 60
#define __FLT128_MIN_EXP__ (-16381)
#define OE_None 0
#define PAGER_MJ_PGNO(x) ((Pgno)((PENDING_BYTE/((x)->pageSize))+1))
#define TASK_EXC_GUARD_MP_DELIVER 0x10
#define _ACCESS_EXTENDED_MASK (_READ_OK | _WRITE_OK | _EXECUTE_OK | _DELETE_OK | _APPEND_OK | _RMFILE_OK | _REXT_OK | _WEXT_OK | _RATTR_OK | _WATTR_OK | _RPERM_OK | _WPERM_OK | _CHOWN_OK)
#define SQLITE_LoadExtension 0x00010000
#define UINT16_C(v) (v)
#define NOTE_CHILD 0x00000004
#define IOPOL_VFS_IGNORE_PERMISSIONS_OFF 0
#define __OSX_DEPRECATED(_start,_dep,_msg) 
#define PragTyp_TEMP_STORE 35
#define WINDOWFUNCX(name,nArg,extra) { nArg, (SQLITE_UTF8|SQLITE_FUNC_WINDOW|extra), 0, 0, name ## StepFunc, name ## ValueFunc, name ## ValueFunc, noopStepFunc, name ## Name, {0} }
#define CTL_NET 4
#define _PC_PRIO_IO 19
#define EXIT_FAILURE 1
#define __INT_LEAST16_WIDTH__ 16
#define SQLITE_IOERR 10
#define _BSD_MACHINE_PARAM_H_ 
#define testcase(X) 
#define OS_PURE __attribute__((__pure__))
#define __SCHAR_MAX__ 0x7f
#define OP_IdxDelete 133
#define CPU_STATE_NICE 3
#define OP_DropIndex 144
#define VM_INHERIT_COPY ((vm_inherit_t) 1)
#define __DARWIN_STRUCT_STATFS64 { uint32_t f_bsize; int32_t f_iosize; uint64_t f_blocks; uint64_t f_bfree; uint64_t f_bavail; uint64_t f_files; uint64_t f_ffree; fsid_t f_fsid; uid_t f_owner; uint32_t f_type; uint32_t f_flags; uint32_t f_fssubtype; char f_fstypename[MFSTYPENAMELEN]; char f_mntonname[MAXPATHLEN]; char f_mntfromname[MAXPATHLEN]; uint32_t f_flags_ext; uint32_t f_reserved[7]; }
#define SQLITE_TESTCTRL_NEVER_CORRUPT 20
#define KERN_NODE_DOWN 47
#define __API_UNAVAILABLE_BEGIN(...) 
#define SA_SIGINFO 0x0040
#define SQLITE_NOTNULL 0x90
#define SQLITE_LOCK_EXCLUSIVE 4
#define THREAD_FLAVOR_CONTROL 0
#define SQLITE_TRACE_LEGACY 0x40
#define ATTR_CMN_FILEID 0x02000000
#define KERN_KDGETREG 9
#define MAC_OS_X_VERSION_10_10_2 101002
#define MAC_OS_X_VERSION_10_10_3 101003
#define OP_OpenDup 109
#define VM_MEMORY_SQLITE 62
#define _SC_THREAD_THREADS_MAX 94
#define CTL_KERN 1
#define SIGTTOU 22
#define VM_BEHAVIOR_RANDOM ((vm_behavior_t) 1)
#define KERN_POSIX 58
#define __SIZEOF_INT__ 4
#define x86_AVX_STATE32 16
#define SIOCSIFKPI _IOW('i', 134, struct ifreq)
#define SQLITE_FUNC_LIKE 0x0004
#define SQLITE_IOCAP_BATCH_ATOMIC 0x00004000
#define TK_UNIQUE 119
#define wsdHooksInit 
#define VM_VOLATILE_MAKE_LAST_IN_GROUP (0 << VM_VOLATILE_ORDER_SHIFT)
#define _SYS_TTYCOM_H_ 
#define OP_JournalMode 7
#define TASK_WAIT_STATE_INFO_COUNT ((mach_msg_type_number_t) (sizeof(task_wait_state_info_data_t) / sizeof(natural_t)))
#define PSOCK 24
#define sqlite3Isquote(x) (sqlite3CtypeMap[(unsigned char)(x)]&0x80)
#define SQLITE_FCNTL_GET_LOCKPROXYFILE 2
#define P_REBOOT 0x00200000
#define AT_FDCWD -2
#define FIOSETOWN _IOW('f', 124, int)
#define SQLITE_FCNTL_PDB 30
#define ATTR_CMN_NAMEDATTRLIST 0x00100000
#define VQ_MOUNT 0x0008
#define ATTR_CMN_SCRIPT 0x00000100
#define _SC_VERSION 8
#define _SC_RE_DUP_MAX 16
#define __USER_LABEL_PREFIX__ _
#define PGHDR_DIRTY 0x002
#define OS_NOESCAPE 
#define ENEEDAUTH 81
#define SQLITE_LIMIT_VARIABLE_NUMBER 9
#define AUDIT_TRIGGER_EXPIRE_TRAILS 8
#define TK_RP 23
#define _PC_REC_MAX_XFER_SIZE 21
#define TK_TRUTH 170
#define KERN_RIGHT_EXISTS 21
#define _SC_RTSIG_MAX 48
#define RTLD_NODELETE 0x80
#define HAVE_GETHOSTUUID 1
#define WCONTINUED 0x00000010
#define UINT8_MAX 255
#define VM_MAKE_TAG(tag) ((tag) << 24)
#define EXC_I386_INVTSSFLT 10
#define CPU_SUBTYPE_MIPS_R2800 ((cpu_subtype_t) 3)
#define __LDBL_HAS_INFINITY__ 1
#define SQLITE_MAX_ATTACHED 10
#define HW_PRODUCT 27
#define x86_THREAD_FULL_STATE64_COUNT ((mach_msg_type_number_t) ( sizeof (x86_thread_full_state64_t) / sizeof (int) ))
#define OS_WEAK __attribute__((__weak__))
#define _SYS_RESOURCE_H_ 
#define SQLITE_OPEN_SUBJOURNAL 0x00002000
#define OP_Param 149
#define TASK_SCHED_RR_INFO 11
#define __options_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_open __enum_options
#define TASK_BASIC_INFO_64_COUNT (sizeof(task_basic_info_64_data_t) / sizeof(natural_t))
#define SF_RESTRICTED 0x00080000
#define _SYS__ENDIAN_H_ 
#define MS_ASYNC 0x0001
#define SQLITE_UTF16BE 3
#define MAP_FAILED ((void *)-1)
#define MACH_PORT_INFO_EXT 7
#define KERN_INVALID_PROCESSOR_SET 26
#define PROCESSOR_SET_NULL ((processor_set_t) 0)
#define ENOLINK 97
#define _MACH_VM_SYNC_H_ 
#define SQLITE3_MUTEX_INITIALIZER(id) { PTHREAD_MUTEX_INITIALIZER }
#define RESERVED_BYTE (PENDING_BYTE+1)
#define HW_VECTORUNIT 13
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_7(x) x
#define TK_ABORT 27
#define IOPOL_VFS_STATFS_FORCE_NO_DATA_VOLUME 1
#define SIOCSIFBOND _IOW('i', 70, struct ifreq)
#define OP_Gosub 12
#define S_IWGRP 0000020
#define TIOCMGDTRWAIT _IOR('t', 90, int)
#define F_SETBACKINGSTORE 70
#define SIGIO 23
#define __STDC_UTF_16__ 1
#define __API_AVAILABLE_GET_MACRO(...) 
#define CPU_SUBTYPE_ARM64_V8 ((cpu_subtype_t) 1)
#define SQLITE_INTERRUPT 9
#define MACH_PORT_TYPE_SPREQUEST_DELAYED 0x20000000
#define ATTR_CMNEXT_PRIVATESIZE 0x00000008
#define HW_L2SETTINGS 19
#define AT_SYMLINK_FOLLOW 0x0040
#define WHERE_GROUPBY 0x0040
#define _ALLOCA_H_ 
#define __SIZEOF_SHORT__ 2
#define __FLT64X_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951F64x
#define TK_HAVING 143
#define VM_VOLATILE_MAKE_FIRST_IN_GROUP (1 << VM_VOLATILE_ORDER_SHIFT)
#define SQLITE_FCNTL_PERSIST_WAL 10
#define OP_TableLock 159
#define ATTR_CMN_CRTIME 0x00000200
#define MACH_MSG_TYPE_MOVE_RECEIVE 16
#define FTS5_TOKENIZE_DOCUMENT 0x0004
#define sqliteHashFirst(H) ((H)->first)
#define SQLITE_OS_OTHER 0
#define CIRCLEQ_LAST(head) ((head)->cqh_last)
#define CPU_ARCH_ABI64 0x01000000
#define EVFILT_VNODE (-4)
#define __FLT32_NORM_MAX__ 3.40282346638528859811704183484516925e+38F32
#define SQLITE_OS_WIN 0
#define __INT_WIDTH__ 32
#define O_NDELAY O_NONBLOCK
#define TH_FLAGS_SWAPPED 0x1
#define S_ISVTX 0001000
#define _MACH_THREAD_SPECIAL_PORTS_H_ 
#define HOST_KTRACE_BACKGROUND_PORT (6 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define __PTRDIFF_WIDTH__ 64
#define M_2_PI 0.636619772367581343075535053490057448
#define EP_WinFunc 0x1000000
#define MACH_SEND_INTERRUPTED 0x10000007
#define __DECIMAL_DIG__ 21
#define VM_PAGE_QUERY_PAGE_COPIED 0x20
#define OS_REFINED_FOR_SWIFT 
#define ATTR_FORK_RESERVED 0xffffffff
#define SQLITE_UTF16LE 2
#define LOCK_EX 0x02
#define OP_IsTrue 88
#define SQLITE_WARNING_AUTOINDEX (SQLITE_WARNING | (1<<8))
#define MEM_Dyn 0x0400
#define __FLT64_EPSILON__ 2.22044604925031308084726333618164062e-16F64
#define THREAD_EXTENDED_INFO_COUNT ((mach_msg_type_number_t) (sizeof(thread_extended_info_data_t) / sizeof (natural_t)))
#define ATTR_DIR_MOUNTSTATUS 0x00000004
#define MACH_VOUCHER_SELECTOR_CURRENT ((mach_voucher_selector_t)0)
#define _LARGEFILE_SOURCE 1
#define MAX_INPUT 1024
#define F_ADDFILESIGS_FOR_DYLD_SIM 83
#define ENETDOWN 50
#define KMOD_EXPLICIT_DECL(name,version,start,stop) kmod_info_t KMOD_INFO_NAME = { 0, KMOD_INFO_VERSION, -1U, { #name }, { version }, -1, 0, 0, 0, 0, start, stop };
#define ESTALE 70
#define _SC_2_SW_DEV 24
#define CPU_SUBTYPE_I860_860 ((cpu_subtype_t) 1)
#define KERN_PROCARGS 38
#define AUC_UNSET 0
#define OP_Transaction 2
#define KERN_AIOMAX 46
#define KERN_VNODE 13
#define PTRDIFF_MAX INTMAX_MAX
#define SQLITE_OPEN_DELETEONCLOSE 0x00000008
#define CTL_DEBUG_NAME 0
#define F_OK 0
#define MACH_PORT_TYPE_ALL_RIGHTS (MACH_PORT_TYPE_PORT_OR_DEAD|MACH_PORT_TYPE_PORT_SET)
#define __LDBL_HAS_QUIET_NAN__ 1
#define TK_CONCAT 108
#define SQLITE_READONLY_DBMOVED (SQLITE_READONLY | (4<<8))
#define MAC_OS_X_VERSION_10_11_3 101103
#define MAC_OS_X_VERSION_10_11_4 101104
#define MACH_PORT_TYPE_SPREQUEST 0x40000000
#define SQLITE_CONFIG_SERIALIZED 3
#define SQLITE_Stat4 0x0800
#define ATTR_BIT_MAP_COUNT 5
#define WHERE_ORDERBY_MIN 0x0001
#define L_tmpnam 1024
#define __DYNAMIC__ 1
#define WIFCONTINUED(x) (_WSTATUS(x) == _WSTOPPED && WSTOPSIG(x) == 0x13)
#define WHERE_IPK 0x00000100
#define __GNUC__ 11
#define SQLITE_IOCAP_ATOMIC1K 0x00000004
#define QUAD_MAX LLONG_MAX
#define IOCPARM_MAX (IOCPARM_MASK + 1)
#define __MMX__ 1
#define P4_MEM (-11)
#define VOL_CAP_FMT_2TB_FILESIZE 0x00000800
#define SQLITE_FCNTL_CHUNK_SIZE 6
#define BTREE_WRCSR 0x00000004
#define SQLITE_MAX_WORKER_THREADS 8
#define NOTE_ATTRIB 0x00000008
#define SQLITE_IOCAP_ATOMIC2K 0x00000008
#define P_CONTINUED 0x00000080
#define memAboutToChange(P,M) 
#define EXC_MASK_MACHINE 0
#define MACH_MSGH_BITS_RAISEIMP 0x20000000U
#define CIRCLEQ_CHECK_PREV(head,elm,field) 
#define fileno_unlocked(p) __sfileno(p)
#define TK_FOLLOWING 86
#define PARSE_MODE_DECLARE_VTAB 1
#define VQ_UPDATE 0x0100
#define MEMORY_OBJECT_COPY_CALL 1
#define MAP_MEM_POSTED_COMBINED_REORDERED 9
#define OP_VBegin 160
#define SQLITE_IOCAP_ATOMIC4K 0x00000010
#define DBFLAG_VacuumInto 0x0008
#define P_OWEUPC 0x00008000
#define __BIGGEST_ALIGNMENT__ 16
#define CTL_HW_NAMES { { 0, 0 }, { "machine", CTLTYPE_STRING }, { "model", CTLTYPE_STRING }, { "ncpu", CTLTYPE_INT }, { "byteorder", CTLTYPE_INT }, { "physmem", CTLTYPE_INT }, { "usermem", CTLTYPE_INT }, { "pagesize", CTLTYPE_INT }, { "disknames", CTLTYPE_STRUCT }, { "diskstats", CTLTYPE_STRUCT }, { "epoch", CTLTYPE_INT }, { "floatingpoint", CTLTYPE_INT }, { "machinearch", CTLTYPE_STRING }, { "vectorunit", CTLTYPE_INT }, { "busfrequency", CTLTYPE_INT }, { "cpufrequency", CTLTYPE_INT }, { "cachelinesize", CTLTYPE_INT }, { "l1icachesize", CTLTYPE_INT }, { "l1dcachesize", CTLTYPE_INT }, { "l2settings", CTLTYPE_INT }, { "l2cachesize", CTLTYPE_INT }, { "l3settings", CTLTYPE_INT }, { "l3cachesize", CTLTYPE_INT }, { "tbfrequency", CTLTYPE_INT }, { "memsize", CTLTYPE_QUAD }, { "availcpu", CTLTYPE_INT }, { "target", CTLTYPE_STRING }, { "product", CTLTYPE_STRING }, }
#define PTRDIFF_MIN INTMAX_MIN
#define sa_handler __sigaction_u.__sa_handler
#define LONG_MAX __LONG_MAX__
#define MACH_VM_MAX_ADDRESS ((mach_vm_offset_t) VM_MAX_PAGE_ADDRESS)
#define MEMORY_OBJECT_CONTROL_NULL ((memory_object_control_t) 0)
#define __sfileno(p) ((p)->_file)
#define TK_PLAN 4
#define _POSIX_THREAD_DESTRUCTOR_ITERATIONS 4
#define SQLITE_MAX_SCHEMA_RETRY 50
#define VM_PURGABLE_DEBUG_SHIFT 12
#define SLIST_HEAD_INITIALIZER(head) { NULL }
#define sqlite3_column_table_name16 0
#define MEMORY_OBJECT_ATTR_INFO_COUNT ((mach_msg_type_number_t) (sizeof(memory_object_attr_info_data_t)/sizeof(int)))
#define TK_DATABASE 38
#define SQLITE_CONSTRAINT_PRIMARYKEY (SQLITE_CONSTRAINT | (6<<8))
#define NC_IsCheck 0x0004
#define _IN_ADDR_T 
#define VM_INHERIT_DONATE_COPY ((vm_inherit_t) 3)
#define __pure 
#define WTERMSIG(x) (_WSTATUS(x))
#define MACH_EXCEPTION_MASK (MACH_EXCEPTION_CODES | MACH_EXCEPTION_ERRORS)
#define SYSCTL_DEF_ENABLED 
#define CC_COMMA 23
#define SCHEMA_TABLE(x) ((!OMIT_TEMPDB)&&(x==1)?TEMP_MASTER_NAME:MASTER_NAME)
#define TASK_BASIC_INFO_COUNT (sizeof(task_basic_info_data_t) / sizeof(natural_t))
#define A_GETEXPAFTER 43
#define UNIXVFS(VFSNAME,FINDER) { 3, sizeof(unixFile), MAX_PATHNAME, 0, VFSNAME, (void*)&FINDER, unixOpen, unixDelete, unixAccess, unixFullPathname, unixDlOpen, unixDlError, unixDlSym, unixDlClose, unixRandomness, unixSleep, unixCurrentTime, unixGetLastError, unixCurrentTimeInt64, unixSetSystemCall, unixGetSystemCall, unixNextSystemCall, }
#define x86_DEBUG_STATE_COUNT ((mach_msg_type_number_t) (sizeof(x86_debug_state_t)/sizeof(unsigned int)))
#define __FLT32_HAS_INFINITY__ 1
#define AUDIT_CTLMODE_NORMAL ((unsigned char)1)
#define VM_MEMORY_FOUNDATION 41
#define CPF_OVERWRITE 0x0001
#define SQLITE_IOCAP_ATOMIC8K 0x00000020
#define __APPLE_API_UNSTABLE 
#define _POSIX_SIGQUEUE_MAX 32
#define LOCK_SH 0x01
#define _PC_XATTR_SIZE_BITS 26
#define _CS_XBS5_LPBIG_OFFBIG_CFLAGS 32
#define TK_EXCLUDE 91
#define _CS_XBS5_ILP32_OFFBIG_CFLAGS 24
#define KERN_INVALID_MEMORY_CONTROL 34
#define MACH_RCV_IN_PROGRESS_TIMED 0x10004011
#define SQLITE_N_LIMIT (SQLITE_LIMIT_WORKER_THREADS+1)
#define QUAD_MIN LLONG_MIN
#define CHAR_MAX SCHAR_MAX
#define HOST_LOCKD_PORT (5 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define ITIMER_PROF 2
#define _PC_CHOWN_RESTRICTED 7
#define SQLITE_IGNORE 2
#define host_set_dynamic_pager_port(host,port) (host_set_special_port((host), HOST_DYNAMIC_PAGER_PORT, (port)))
#define snprintf(str,len,...) __builtin___snprintf_chk (str, len, 0, __darwin_obsz(str), __VA_ARGS__)
#define _SC_SIGQUEUE_MAX 51
#define __INT64_MAX__ 0x7fffffffffffffffLL
#define OS_NOT_TAIL_CALLED 
#define SQLITE_DEFAULT_SECTOR_SIZE 4096
#define HAVE_READLINK 1
#define TASK_MAX_SPECIAL_PORT TASK_RESOURCE_NOTIFY_PORT
#define sqlite3Toupper(x) ((x)&~(sqlite3CtypeMap[(unsigned char)(x)]&0x20))
#define NL_LANGMAX 14
#define NOTE_FFLAGSMASK 0x00ffffff
#define SQLITE_SHM_UNLOCK 1
#define KERN_RAGEVNODE 68
#define _WSTOPPED 0177
#define __IPHONE_3_2 30200
#define putchar_unlocked(x) putc_unlocked(x, stdout)
#define __INTPTR_WIDTH__ 64
#define osMremap ((void*(*)(void*,size_t,size_t,int,...))aSyscall[24].pCurrent)
#define OS_ENUM(_name,_type,...) typedef _type _name ##_t; enum { __VA_ARGS__ }
#define CURTYPE_BTREE 0
#define FP_STATE_BYTES 512
#define MAP_MEM_GRAB_SECLUDED 0x008000
#define LONG_MIN (-LONG_MAX - 1L)
#define UNUSED_PARAMETER(x) (void)(x)
#define HOST_VM_INFO64_COUNT ((mach_msg_type_number_t) (sizeof(vm_statistics64_data_t)/sizeof(integer_t)))
#define KERN_CODE_SELECTOR 0x0008
#define MPG_FLAGS_MOD_REFS_PINNED_DEALLOC (0x01ull << 56)
#define TK_END 11
#define CTL_MAXNAME 12
#define host_set_io_master_port(host,port) (KERN_INVALID_ARGUMENT)
#define SQLITE_SCHEMA 17
#define SQLITE_PRAGMA 19
#define SQLITE_IOERR_GETTEMPPATH (SQLITE_IOERR | (25<<8))
#define SQLITE_CONFIG_MEMSTATUS 9
#define SQLITE_TESTCTRL_IMPOSTER 25
#define KERN_CLOCKRATE 12
#define _PC_MIN_HOLE_SIZE 27
#define HOST_VM_INFO_COUNT ((mach_msg_type_number_t) (sizeof(vm_statistics_data_t)/sizeof(integer_t)))
#define CPU_SUBTYPE_I860_ALL ((cpu_subtype_t) 0)
#define HAVE_FCHOWN 1
#define __LDBL_HAS_DENORM__ 1
#define KERN_THALTSTACK 63
#define SQLITE_READONLY_DIRECTORY (SQLITE_READONLY | (6<<8))
#define MACH_RCV_SYNC_PEEK 0x00008000
#define OP_Close 117
#define KERN_MAXFILES 7
#define EXC_MASK_ALL (EXC_MASK_BAD_ACCESS | EXC_MASK_BAD_INSTRUCTION | EXC_MASK_ARITHMETIC | EXC_MASK_EMULATION | EXC_MASK_SOFTWARE | EXC_MASK_BREAKPOINT | EXC_MASK_SYSCALL | EXC_MASK_MACH_SYSCALL | EXC_MASK_RPC_ALERT | EXC_MASK_RESOURCE | EXC_MASK_GUARD | EXC_MASK_MACHINE)
#define P_DIRTY_IS_DIRTY (P_DIRTY | P_DIRTY_SHUTDOWN)
#define CPU_SUBTYPE_ARM_V7EM ((cpu_subtype_t) 16)
#define _MACH_VM_ATTRIBUTES_H_ 
#define HOST_SEMAPHORE_TRAPS 7
#define SIGABRT 6
#define _GCC_WRAP_STDINT_H 
#define AUDIT_TRIGGER_LOW_SPACE 1
#define TARGET_RT_64_BIT 1
#define NC_Complex 0x2000
#define TASK_TRACE_MEMORY_INFO 24
#define TASK_OVERRIDE_QOS_POLICY 9
#define _STRUCT_XMM_REG struct __darwin_xmm_reg
#define OP_IntCopy 80
#define __weak 
#define SQLITE_READONLY_CANTINIT (SQLITE_READONLY | (5<<8))
#define _SC_MONOTONIC_CLOCK 74
#define MACH_RCV_PORT_DIED 0x10004009
#define TASK_EXC_GUARD_MP_ONCE 0x20
#define THR_ACT_NULL ((thread_act_t) 0)
#define BC_DIM_MAX 2048
#define P4_INTARRAY (-15)
#define EV_FLAG0 0x1000
#define __FLT_MAX_10_EXP__ 38
#define NOTE_EXIT_MEMORY 0x00020000
#define sqlite3MutexWarnOnContention(x) 
#define SQLITE_LIMIT_LENGTH 0
#define _VA_LIST_ 
#define i386_EXCEPTION_STATE 3
#define __PTRDIFF_MAX__ 0x7fffffffffffffffL
#define OP_Delete 123
#define _SYS_STAT_H_ 
#define KEYINFO_ORDER_BIGNULL 0x02
#define sqlite3ParserCTX_SDECL Parse *pParse;
#define sqlite3Isalpha(x) (sqlite3CtypeMap[(unsigned char)(x)]&0x02)
#define host_get_chud_port(host,port) host_get_launchctl_port(host, port)
#define TASK_SECURITY_TOKEN_COUNT ((mach_msg_type_number_t) (sizeof(security_token_t) / sizeof(natural_t)))
#define EXC_I386_NMIFLT 2
#define _POSIX_RE_DUP_MAX _POSIX2_RE_DUP_MAX
#define TK_CREATE 17
#define MAXDOMNAMELEN 256
#define _I386_FP_SAVE_H_ 
#define timerisset(tvp) ((tvp)->tv_sec || (tvp)->tv_usec)
#define TASK_THREAD_TIMES_INFO_COUNT ((mach_msg_type_number_t) (sizeof(task_thread_times_info_data_t) / sizeof(natural_t)))
#define EV_ONESHOT 0x0010
#define VOL_CAP_FMT_VOL_GROUPS 0x01000000
#define VOL_CAP_FMT_HARDLINKS 0x00000004
#define __DARWIN_C_FULL 900000L
#define MACH_MSG_GUARD_FLAGS_NONE 0x0000
#define timerclear(tvp) (tvp)->tv_sec = (tvp)->tv_usec = 0
#define roundup(x,y) ((((x) % (y)) == 0) ? (x) : ((x) + ((y) - ((x) % (y)))))
#define __ATOMIC_HLE_ACQUIRE 65536
#define _MACH_I386_THREAD_STATUS_H_ 
#define _UINT32_T 
#define _PC_PIPE_BUF 6
#define host_get_host_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_PORT, (port)))
#define _PC_VDISABLE 9
#define __API_AVAILABLE_BEGIN(...) 
#define _MACH_VM_INHERIT_H_ 
#define BTALLOC_ANY 0
#define _SC_XOPEN_LEGACY 110
#define TF_HasStat1 0x0010
#define BTREE_BLOBKEY 2
#define SQLITE3EXT_H 
#define KERN_ALREADY_IN_SET 11
#define SQLITE_THREADS_IMPLEMENTED 1
#define LIST_INSERT_AFTER(listelm,elm,field) do { LIST_CHECK_NEXT(listelm, field); if ((LIST_NEXT((elm), field) = LIST_NEXT((listelm), field)) != NULL) LIST_NEXT((listelm), field)->field.le_prev = &LIST_NEXT((elm), field); LIST_NEXT((listelm), field) = (elm); (elm)->field.le_prev = &LIST_NEXT((listelm), field); } while (0)
#define TK_PLUS 103
#define renameTokenCheckAll(x,y) 
#define MEMTYPE_HEAP 0x01
#define ATTR_FILE_DEVTYPE 0x00000020
#define POLICY_TIMESHARE 1
#define MACH_PORT_RIGHT_NUMBER ((mach_port_right_t) 6)
#define SQLITE_IOERR_SHMSIZE (SQLITE_IOERR | (19<<8))
#define WAKEMON_ENABLE 0x01
#define _FSFILCNT_T 
#define __SIZEOF_WINT_T__ 4
#define CPU_SUBTYPE_MIPS_R3000 ((cpu_subtype_t) 7)
#define PINOD 8
#define SQLITE_FUNC_MINMAX 0x1000
#define TK_EXCLUSIVE 9
#define AUDIT_EXPIRE_OP_AND ((unsigned char)0)
#define __LONG_LONG_WIDTH__ 64
#define VM_MEMORY_IOKIT 21
#define SQLITE_DBSTATUS_LOOKASIDE_USED 0
#define CLD_EXITED 1
#define VM_MEMORY_MACH_MSG 20
#define ENOSPC 28
#define dbtob(db,devBlockSize) ((unsigned)(db) * devBlockSize)
#define EXC_MASK_SYSCALL (1 << EXC_SYSCALL)
#define IsWindowFunc(p) ( ExprHasProperty((p), EP_WinFunc) && p->y.pWin->eFrmType!=TK_FILTER )
#define KERN_INVALID_RIGHT 17
#define _X86_INSTRUCTION_STATE_CACHELINE_SIZE 64
#define DB_SchemaLoaded 0x0001
#define SQLITE_FCNTL_FILE_POINTER 7
#define _PTRDIFF_T 
#define SQLITE_LoadExtFunc 0x00020000
#define isnan(x) ( sizeof(x) == sizeof(float) ? __inline_isnanf((float)(x)) : sizeof(x) == sizeof(double) ? __inline_isnand((double)(x)) : __inline_isnanl((long double)(x)))
#define KERN_KDEFLAGS 1
#define NO_LOCK 0
#define __IDSTRING(name,string) static const char name[] __used = string
#define __header_always_inline __header_inline __attribute__ ((__always_inline__))
#define CTLFLAG_MASKED 0x04000000
#define SQLITE_SOURCE_ID "2019-10-10 20:19:45 18db032d058f1436ce3dea84081f4ee5a0f2259ad97301d43c426bc7f3df1b0b"
#define _SC_XOPEN_XCU_VERSION 121
#define _CS_POSIX_V6_LPBIG_OFFBIG_LIBS 13
#define MEMORY_OBJECT_PERFORMANCE_INFO 11
#define CPU_SUBTYPE_PENTIUM_3 CPU_SUBTYPE_INTEL(8, 0)
#define __DARWIN_NULL ((void *)0)
#define OP_ShiftRight 102
#define TK_BEFORE 33
#define KERN_HOSTNAME 10
#define F_GETOWN 5
#define TASK_BASE_THROUGHPUT_QOS_POLICY 11
#define WHERE_OR_SUBCLAUSE 0x0020
#define KERN_DENIED 53
#define p_back p_un.p_st1.__p_back
#define PAGER_GET_NOCONTENT 0x01
#define OP_VDestroy 162
#define SQLITE_STATUS_MEMORY_USED 0
#define _SC_XBS5_LPBIG_OFFBIG 125
#define _USE_FORTIFY_LEVEL 2
#define TK_COLLATE 109
#define MNT_LOCAL 0x00001000
#define VQ_QUOTA 0x1000
#define CPUFAMILY_INTEL_IVYBRIDGE 0x1f65e835
#define SQLITE_MUTEX_STATIC_MASTER 2
#define MAXPHYS (128 * 1024)
#define NBBY __DARWIN_NBBY
#define AGGREGATE2(zName,nArg,arg,nc,xStep,xFinal,extraFlags) {nArg, SQLITE_UTF8|(nc*SQLITE_FUNC_NEEDCOLL)|extraFlags, SQLITE_INT_TO_PTR(arg), 0, xStep,xFinal,xFinal,0,#zName, {0}}
#define MAP_NOCACHE 0x0400
#define MACH_ACTIVITY_ID_COUNT_MAX 16
#define __FLT64X_HAS_QUIET_NAN__ 1
#define SQLITE_TESTCTRL_RESULT_INTREAL 27
#define SQLITE_WriteSchema 0x00000001
#define _SC_MQ_OPEN_MAX 46
#define BTS_EXCLUSIVE 0x0040
#define HUGE_VAL __builtin_huge_val()
#define MACH_VOUCHER_ATTR_USER_DATA_STORE ((mach_voucher_attr_recipe_command_t)211)
#define SQLITE_CONSTRAINT_VTAB (SQLITE_CONSTRAINT | (9<<8))
#define IOPOL_DEFAULT 0
#define STAILQ_HEAD_INITIALIZER(head) { NULL, &(head).stqh_first }
#define MACH_SEND_ALWAYS 0x00010000
#define SQLITE_DROP_TEMP_TRIGGER 14
#define sqlite3ParserARG_STORE 
#define TH_STATE_STOPPED 2
#define CPU_TYPE_MC680x0 ((cpu_type_t) 6)
#define SF_HasAgg 0x00010
#define x86_DEBUG_STATE64_COUNT ((mach_msg_type_number_t) ( sizeof (x86_debug_state64_t) / sizeof (int) ))
#define OP_IdxRowid 135
#define SQLITE_FUNC_COUNT 0x0100
#define TIOCPTYGRANT _IO('t', 84)
#define _CS_POSIX_V6_LP64_OFF64_LDFLAGS 9
#define TASK_VM_INFO_REV4_COUNT ((mach_msg_type_number_t) (TASK_VM_INFO_REV5_COUNT - 1))
#define PARSE_RECURSE_SZ offsetof(Parse,sLastToken)
#define OP_RowSetTest 42
#define __LP64__ 1
#define VM_MEMORY_APPKIT 40
#define unlikely(X) (X)
#define SQLITE_IOERR_CONVPATH (SQLITE_IOERR | (26<<8))
#define HAVE_LSTAT 1
#define __IOS_DEPRECATED(_start,_dep,_msg) 
#define ENETRESET 52
#define A_GETCLASS 22
#define _POSIX_JOB_CONTROL 200112L
#define VOL_CAP_FMT_NO_VOLUME_SIZES 0x00008000
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_3(x) 
#define __FLT32X_EPSILON__ 2.22044604925031308084726333618164062e-16F32x
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_4(x) 
#define MACH_RCV_INVALID_REPLY 0x10004012
#define _SC_SHELL 78
#define TRIGGER_AFTER 2
#define MACH_SEND_NOIMPORTANCE 0x00040000
#define S_IFREG 0100000
#define TK_GROUPS 92
#define USEC_PER_SEC 1000000ull
#define __FLT64_MIN_EXP__ (-1021)
#define MAC_OS_X_VERSION_10_11_2 101102
#define __SPI_AVAILABLE(...) 
#define KERN_BOOTFILE 28
#define HOST_VM_INFO64 4
#define SLIST_EMPTY(head) ((head)->slh_first == NULL)
#define __MAC_OS_X_VERSION_MIN_REQUIRED __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__
#define MEMORY_OBJECT_DATA_FLUSH 0x1
#define PROC_FLAG_ADAPTIVE 0x100000
#define OP_NotNull 51
#define __SWIFT_UNAVAILABLE_MSG(_msg) 
#define HOST_AUDIT_CONTROL_PORT (2 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define VM_MEMORY_LIBNETWORK 89
#define BTREE_AUTOVACUUM_FULL 1
#define __APPLE_API_STABLE 
#define OP_RealAffinity 84
#define __MAC_10_14 101400
#define THREAD_THROUGHPUT_QOS_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (thread_throughput_qos_policy_data_t) / sizeof (integer_t)))
#define MSVC_VERSION 0
#define __alloc_size(...) __attribute__((alloc_size(__VA_ARGS__)))
#define CPU_SUBTYPE_VAX8800 ((cpu_subtype_t) 11)
#define WAL_RDWR 0
#define CLOCK_UPTIME_RAW _CLOCK_UPTIME_RAW
#define sqlite3VdbeIncrWriteCounter(V,C) 
#define PROC_FLAG_IOS_APPLICATION PROC_FLAG_APPLICATION
#define _I386_LIMITS_H_ 
#define SIOCSIFALTMTU _IOW('i', 69, struct ifreq)
#define TASK_DYLD_INFO_COUNT (sizeof(task_dyld_info_data_t) / sizeof(natural_t))
#define ONEPASS_OFF 0
#define TASK_QOS_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (struct task_qos_policy) / sizeof (integer_t)))
#define __UINT16_MAX__ 0xffff
#define HOST_NOTIFY_TYPE_MAX 1
#define IOPOL_ATIME_UPDATES_OFF 1
#define BTCF_AtLast 0x08
#define P_FSTRACE 0
#define EIDRM 90
#define RENAME_EXCL 0x00000004
#define HW_NCPU 3
#define SQLITE_DETERMINISTIC 0x000000800
#define _PC_NAME_MAX 4
#define TK_SPAN 176
#define KERN_VFSNSPACE_HANDLE_PROC 1
#define PAGER_STAT_MISS 1
#define OS_TRANSPARENT_UNION __attribute__((__transparent_union__))
#define STAILQ_REMOVE_HEAD_UNTIL(head,elm,field) do { if ((STAILQ_FIRST((head)) = STAILQ_NEXT((elm), field)) == NULL) (head)->stqh_last = &STAILQ_FIRST((head)); } while (0)
#define host_set_node_port(host,port) (host_set_special_port((host), HOST_NODE_PORT, (port)))
#define _FD_SET 
#define CLSIZE 1
#define IN_INDEX_NOOP_OK 0x0001
#define S_ISWHT(m) (((m) & S_IFMT) == S_IFWHT)
#define EDEVERR 83
#define sqlite3ConnectionUnlocked(x) 
#define CC_VARNUM 6
#define NBPG 4096
#define isunordered(x,y) __builtin_isunordered((x),(y))
#define NBPW sizeof(int)
#define CBQSIZE (CBLOCK/NBBY)
#define isless(x,y) __builtin_isless((x),(y))
#define CPU_THREADTYPE_NONE ((cpu_threadtype_t) 0)
#define TK_TO 15
#define STAILQ_CONCAT(head1,head2) do { if (!STAILQ_EMPTY((head2))) { *(head1)->stqh_last = (head2)->stqh_first; (head1)->stqh_last = (head2)->stqh_last; STAILQ_INIT((head2)); } } while (0)
#define P4_DYNAMIC (-7)
#define _POSIX2_PBS_MESSAGE (-1)
#define MACH_PORT_TYPE_DNREQUEST 0x80000000
#define _SC_REALTIME_SIGNALS 36
#define STAILQ_REMOVE_HEAD(head,field) do { if ((STAILQ_FIRST((head)) = STAILQ_NEXT(STAILQ_FIRST((head)), field)) == NULL) (head)->stqh_last = &STAILQ_FIRST((head)); } while (0)
#define WHERE_AUTO_INDEX 0x00004000
#define SIGEV_THREAD 3
#define MACH_MSGH_BITS_CIRCULAR 0x10000000U
#define _STRUCT_X86_THREAD_FULL_STATE64 struct __darwin_x86_thread_full_state64
#define BYTE_SIZE 8
#define PSPIN 0x800
#define VDBE_OFFSET_LINENO(x) 0
#define SQLITE_AFF_MASK 0x47
#define AUDIT_SCNT 0x0400
#define VM_MEMORY_MALLOC_MEDIUM 12
#define _IOW(g,n,t) _IOC(IOC_IN, (g), (n), sizeof(t))
#define CPU_TYPE_I386 CPU_TYPE_X86
#define _XOPEN_PATH_MAX 1024
#define DO_OS_MALLOC_TEST(x) 
#define ILL_ILLTRP 2
#define EXCEPTION_STATE 2
#define PARSE_MODE_RENAME_TABLE 3
#define SQLITE_LIMIT_EXPR_DEPTH 3
#define SQLITE_OPEN_MAIN_JOURNAL 0x00000800
#define timevalcmp(l,r,cmp) timercmp(l, r, cmp)
#define FP_SUBNORMAL 5
#define _SUSECONDS_T 
#define FLAG_SIGNED 1
#define _NLINK_T 
#define __exported __attribute__((__visibility__("default")))
#define VM_PURGABLE_ORDERING_MASK (1 << VM_PURGABLE_ORDERING_SHIFT)
#define SQLITE_TESTCTRL_FIRST 5
#define VDBE_MAGIC_RUN 0x2df20da3
#define THREAD_MACHINE_STATE_MAX THREAD_STATE_MAX
#define SF_FIRMLINK 0x00800000
#define OMIT_TEMPDB 0
#define SUPERPAGE_NONE 0
#define VFS_CTL_UMOUNT 0x00010002
#define EXC_SOFTWARE 5
#define VM_PURGABLE_BEHAVIOR_SHIFT 6
#define MACH_VOUCHER_ATTR_KEY_ALL ((mach_voucher_attr_key_t)~0)
#define HW_AVAILCPU 25
#define DbMaskSet(M,I) (M)|=(((yDbMask)1)<<(I))
#define _CS_XBS5_LP64_OFF64_LIBS 30
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define CPUFAMILY_POWERPC_G3 0xcee41549
#define CPUFAMILY_POWERPC_G4 0x77c184ae
#define CPUFAMILY_POWERPC_G5 0xed76d8aa
#define SQLITE_OS_SETUP_H 
#define __DARWIN_1050ALIAS_I(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_64_BIT_INO_T __DARWIN_SUF_UNIX03)
#define AT_IPC_MSG ((unsigned char)1)
#define _STRUCT_MCONTEXT_AVX512_64_FULL struct __darwin_mcontext_avx512_64_full
#define __FLT128_MAX_EXP__ 16384
#define PCACHE1_MIGHT_USE_GROUP_MUTEX 0
#define PTHREAD_MUTEX_NORMAL 0
#define __DARWIN_1050ALIAS_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_NON_CANCELABLE __DARWIN_SUF_UNIX03)
#define host_set_ktrace_background_port(host,port) (host_set_special_port((host), HOST_KTRACE_BACKGROUND_PORT, (port)))
#define THREAD_TIME_CONSTRAINT_POLICY 2
#define F_GETPATH 50
#define FSOPT_ATTR_CMN_EXTENDED 0x00000020
#define MACH_RCV_INVALID_TYPE 0x1000400d
#define LIST_FIRST(head) ((head)->lh_first)
#define __SLBF 0x0001
#define SQLITE_FUNC_UNLIKELY 0x0400
#define RENAME_SECLUDE 0x00000001
#define FST_EOF (-1)
#define MACH_PORT_RECEIVE_STATUS_COUNT ((natural_t) (sizeof(mach_port_status_t)/sizeof(natural_t)))
#define EXC_EMULATION 4
#define MACH_SEND_MSG_FILTERED 0x10000017
#define EP_Agg 0x000010
#define FPS_BUSY 0x8000
#define CTLTYPE_STRUCT CTLTYPE_OPAQUE
#define RUSAGE_SELF 0
#define SQLITE_DBSTATUS_CACHE_HIT 7
#define SV_NODEFER SA_NODEFER
#define __WATCHOS_3_1 30100
#define __SPI_DEPRECATED(...) 
#define OPFLAG_P2ISREG 0x10
#define TK_REFERENCES 121
#define IOMETHODS(FINDER,METHOD,VERSION,CLOSE,LOCK,UNLOCK,CKLOCK,SHMMAP) static const sqlite3_io_methods METHOD = { VERSION, CLOSE, unixRead, unixWrite, unixTruncate, unixSync, unixFileSize, LOCK, UNLOCK, CKLOCK, unixFileControl, unixSectorSize, unixDeviceCharacteristics, SHMMAP, unixShmLock, unixShmBarrier, unixShmUnmap, unixFetch, unixUnfetch, }; static const sqlite3_io_methods *FINDER ##Impl(const char *z, unixFile *p){ UNUSED_PARAMETER(z); UNUSED_PARAMETER(p); return &METHOD; } static const sqlite3_io_methods *(*const FINDER)(const char*,unixFile *p) = FINDER ##Impl;
#define CLOCK_ALARM_CURRES 3
#define OE_Abort 2
#define OP_AggStep1 155
#define HOST_SCHED_INFO_COUNT ((mach_msg_type_number_t) (sizeof(host_sched_info_data_t)/sizeof(integer_t)))
#define SQLITE_STOREP2 0x20
#define SQLITE_DEFAULT_MMAP_SIZE 0
#define MACH_MSG_TYPE_PORT_SEND MACH_MSG_TYPE_MOVE_SEND
#define EXC_MASK_RESOURCE (1 << EXC_RESOURCE)
#define EFL_AC 0x00040000
#define SIOCGIFMETRIC _IOWR('i', 23, struct ifreq)
#define EFL_AF 0x00000010
#define __I386_MCONTEXT_H_ 
#define __PTHREAD_MUTEXATTR_SIZE__ 8
#define OP_IfSmaller 33
#define CC_ILLEGAL 27
#define VM_MEMORY_RAWCAMERA 79
#define SQLITE_MAX_VDBE_OP 250000000
#define FFSYNC O_FSYNC
#define _MACH_I386_KERN_RETURN_H_ 
#define JT_OUTER 0x0020
#define EFL_CF 0x00000001
#define EP_MemToken 0x010000
#define SQLITE_DROP_VIEW 17
#define F_GETPROTECTIONLEVEL 77
#define TK_COLUMN 162
#define ATTR_CMN_DEVID 0x00000002
#define CURTYPE_SORTER 1
#define get4byte sqlite3Get4byte
#define EFL_DF 0x00000400
#define SIG_UNBLOCK 2
#define SQLITE_CONSTRAINT_FOREIGNKEY (SQLITE_CONSTRAINT | (3<<8))
#define HOST_EXTMOD_INFO64_LATEST_COUNT HOST_EXTMOD_INFO64_COUNT
#define MACH_RCV_TRAILER_CTX 4
#define TK_ILLEGAL 178
#define FP_SNAN FP_NAN
#define PragTyp_DATA_STORE_DIRECTORY 9
#define P4_TABLE (-6)
#define _POSIX_MEMLOCK (-1)
#define USER_TZNAME_MAX 20
#define SQLITE_DBSTATUS_DEFERRED_FKS 10
#define wsdPrng sqlite3Prng
#define VOL_CAP_FMT_CASE_SENSITIVE 0x00000100
#define SUB_MACH_TIMESPEC(t1,t2) do { if (((t1)->tv_nsec -= (t2)->tv_nsec) < 0) { (t1)->tv_nsec += (long) NSEC_PER_SEC; (t1)->tv_sec -= 1; } (t1)->tv_sec -= (t2)->tv_sec; } while (0)
#define x86_DEBUG_STATE 12
#define SIOCSHIWAT _IOW('s', 0, int)
#define KERN_RPC_CONTINUE_ORPHAN 45
#define BYTE_ORDER __DARWIN_BYTE_ORDER
#define REALTIME_CLOCK 0
#define __DARWIN_NO_LONG_LONG 0
#define OPFLAG_FORDELETE 0x08
#define VM_MEMORY_SWIFT_METADATA 83
#define M16KCLBYTES (1 << M16KCLSHIFT)
#define TASK_BASIC2_INFO_32 6
#define ILL_COPROC 7
#define CPU_SUBTYPE_X86_64_ALL ((cpu_subtype_t)3)
#define EINVAL 22
#define __UINT_LEAST16_TYPE__ short unsigned int
#define MNT_NODEV 0x00000010
#define CPU_SUBTYPE_MULTIPLE ((cpu_subtype_t) -1)
#define EFL_ID 0x00200000
#define RAND_MAX 0x7fffffff
#define EFL_IF 0x00000200
#define WRITE_UTF8(zOut,c) { if( c<0x00080 ){ *zOut++ = (u8)(c&0xFF); } else if( c<0x00800 ){ *zOut++ = 0xC0 + (u8)((c>>6)&0x1F); *zOut++ = 0x80 + (u8)(c & 0x3F); } else if( c<0x10000 ){ *zOut++ = 0xE0 + (u8)((c>>12)&0x0F); *zOut++ = 0x80 + (u8)((c>>6) & 0x3F); *zOut++ = 0x80 + (u8)(c & 0x3F); }else{ *zOut++ = 0xF0 + (u8)((c>>18) & 0x07); *zOut++ = 0x80 + (u8)((c>>12) & 0x3F); *zOut++ = 0x80 + (u8)((c>>6) & 0x3F); *zOut++ = 0x80 + (u8)(c & 0x3F); } }
#define __need___va_list 
#define O_DP_GETRAWENCRYPTED 0x0001
#define OP_BitOr 100
#define __INT16_MAX__ 0x7fff
#define CTLFLAG_LOCKED 0x00800000
#define VFS_CTL_NEWADDR 0x00010004
#define P_DIRTY_IDLE_EXIT_ENABLED (P_DIRTY_TRACK|P_DIRTY_ALLOW_IDLE_EXIT)
#define __UINT64_MAX__ 0xffffffffffffffffULL
#define NOTE_CRITICAL 0x00000020
#define ATTR_VOL_ENCODINGSUSED 0x00010000
#define KERN_KDPIDEX 14
#define __GNUC_WIDE_EXECUTION_CHARSET_NAME "UTF-32LE"
#define FIXINC_WRAP_STDIO_H_STDIO_STDARG_H 1
#define MACH_MSGH_BITS_LOCAL(bits) (((bits) & MACH_MSGH_BITS_LOCAL_MASK) >> 8)
#define SIOCGDRVSPEC _IOWR('i', 123, struct ifdrv)
#define CPU_SUBTYPE_POWERPC_ALL ((cpu_subtype_t) 0)
#define __INT8_TYPE__ signed char
#define ATTR_VOL_MOUNTFLAGS 0x00004000
#define VM_PURGABLE_STATE_MASK 3
#define USER_POSIX2_C_DEV 12
#define _CS_XBS5_LP64_OFF64_LINTFLAGS 31
#define SQLITE_SCANSTAT_SELECTID 5
#define _UINTMAX_T 
#define _SC_PRIORITIZED_IO 34
#define __DARWIN_NOCANCEL(sym) __asm("_" __STRING(sym) __DARWIN_SUF_NON_CANCELABLE)
#define SQLITE_FCNTL_WIN32_GET_HANDLE 29
#define SLOT_4_2_0 0xf01fc07f
#define OP_Variable 76
#define SQLITE_TRACE_CLOSE 0x08
#define MAXPHYSIO MAXPHYS
#define __FLT_MIN_10_EXP__ (-37)
#define EFL_NT 0x00004000
#define SIOCGIFPHYS _IOWR('i', 53, struct ifreq)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_1(x) 
#define VDBE_MAGIC_DEAD 0x5606c3c8
#define VdbeCoverageAlwaysTaken(v) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_2(x) 
#define EFL_OF 0x00000800
#define MPG_FLAGS_STRICT_REPLY_MISMATCHED_PERSONA (0x10ull << 56)
#define OP_ResetCount 124
#define IPC_SPACE_NULL ((ipc_space_t) 0)
#define __APPLE_API_STANDARD 
#define OP_AddImm 83
#define SQLITE_TESTCTRL_INTERNAL_FUNCTIONS 17
#define SQLITE_Defensive 0x10000000
#define EFL_IOPL_USER 0x00003000
#define EFL_PF 0x00000004
#define MEM_Zero 0x4000
#define THREAD_INFO_MAX (32)
#define __LDBL_EPSILON__ 1.08420217248550443400745280086994171e-19L
#define tkOTHER 2
#define PragTyp_KEY 41
#define F_FULLFSYNC 51
#define ATTR_FILE_TOTALSIZE 0x00000002
#define minor(x) ((int32_t)((x) & 0xffffff))
#define TARGET_ABI_USES_IOS_VALUES (!TARGET_CPU_X86_64 || (TARGET_OS_IPHONE && !TARGET_OS_MACCATALYST))
#define __SSE_MATH__ 1
#define SQLITE_DBCONFIG_DEFENSIVE 1010
#define TIOCGETA _IOR('t', 19, struct termios)
#define EFL_RF 0x00010000
#define EP_Alias 0x400000
#define __k8 1
#define __WATCHOS_DEPRECATED(_start,_dep,_msg) 
#define _XOPEN_CRYPT (1)
#define CKPT_SYNC_FLAGS(X) (((X)>>2)&0x03)
#define SELECTTRACE_ENABLED 0
#define EFL_SF 0x00000080
#define SQLITE_OPEN_TEMP_JOURNAL 0x00001000
#define _POSIX_V7_LPBIG_OFFBIG __LPBIG_OFFBIG
#define host_set_atm_notification_port(host,port) (host_set_special_port((host), HOST_ATM_NOTIFICATION_PORT, (port)))
#define OS_CLOSED_ENUM(_name,_type,...) __OS_ENUM_C_FALLBACK(_name, _type, ## __VA_ARGS__) __OS_ENUM_ATTR_CLOSED
#define SQLITE_ECEL_REF 0x04
#define _SYS_PROC_H_ 
#define SIGCONT 19
#define MADV_FREE 5
#define CTLTYPE_OPAQUE 5
#define THREAD_FLAVOR_INSPECT 2
#define EFL_TF 0x00000100
#define SF_Resolved 0x00004
#define INT_LEAST64_MAX INT64_MAX
#define __WATCHOS_3_1_1 30101
#define P_LP64 0x00000004
#define TK_FOR 62
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define KERN_MAXPROC 6
#define TIOCSDTR _IO('t', 121)
#define HOST_PRIORITY_INFO_COUNT ((mach_msg_type_number_t) (sizeof(host_priority_info_data_t)/sizeof(integer_t)))
#define VM_REGION_BASIC_INFO_64 9
#define TARGET_OS_MAC 1
#define SQLITE_ABORT_ROLLBACK (SQLITE_ABORT | (2<<8))
#define SQLITE_ECEL_FACTOR 0x02
#define BITVEC_SZ 512
#define _W_INT(w) (*(int *)&(w))
#define EFL_VM 0x00020000
#define VM_VOLATILE_GROUP_DEFAULT VM_VOLATILE_GROUP_0
#define AUDIT_WINDATA 0x0020
#define PARTLY_WITHIN 1
#define EPWROFF 82
#define OE_Fail 3
#define TH_STATE_HALTED 5
#define KERN_KDGETENTROPY 16
#define LATENCY_QOS_LAUNCH_DEFAULT_TIER LATENCY_QOS_TIER_3
#define OptimizationEnabled(db,mask) (((db)->dbOptFlags&(mask))==0)
#define HASHTABLE_NPAGE_ONE (HASHTABLE_NPAGE - (WALINDEX_HDR_SIZE/sizeof(u32)))
#define INT8_C(v) (v)
#define TASK_POWER_INFO_COUNT ((mach_msg_type_number_t) (sizeof (task_power_info_data_t) / sizeof (natural_t)))
#define LOCATE_VIEW 0x01
#define WAL_RETRY (-1)
#define ATTR_CMN_SETMASK 0x51C7FF00
#define RTLD_MAIN_ONLY ((void *) -5)
#define S_IFDIR 0040000
#define EBUSY 16
#define EPROCLIM 67
#define SQLITE_SUBTYPE 0x000100000
#define SF_All 0x00002
#define KERN_SYMFILE 37
#define BTREE_DEFAULT_CACHE_SIZE 3
#define __FLT64_IS_IEC_60559__ 2
#define EFL_ZF 0x00000040
#define __FLT32X_MIN_EXP__ (-1021)
#define TK_VECTOR 172
#define KERN_AIOTHREADS 48
#define WHERE_DISTINCT_NOOP 0
#define MACH_SEND_INVALID_VOUCHER 0x10000005
#define ATTR_FILE_FORKCOUNT 0x00000080
#define _SC_SAVED_IDS 7
#define SQLITE_TESTCTRL_OPTIMIZATIONS 15
#define WO_EQ 0x0002
#define MNT_ROOTFS 0x00004000
#define _MACH_MACHINE_EXCEPTION_H_ 
#define P_DIRTY_TERMINATED 0x00000020
#define __INT_FAST16_MAX__ 0x7fff
#define HOST_VM_INFO_REV0_COUNT ((mach_msg_type_number_t) (HOST_VM_INFO_REV1_COUNT - 2))
#define VM_BEHAVIOR_DEFAULT ((vm_behavior_t) 0)
#define X_TLOSS 1.41484755040568800000e+16
#define SQLITE_STDCALL SQLITE_APICALL
#define _POSIX_TTY_NAME_MAX 9
#define SQLITE_CONFIG_SCRATCH 6
#define VM_PURGABLE_NONVOLATILE 0
#define INT_LEAST64_MIN INT64_MIN
#define CPU_SUBTYPE_486SX CPU_SUBTYPE_INTEL(4, 8)
#define WHERE_SORTBYGROUP 0x0200
#define OP_Eq 53
#define SAVEPOINT_ROLLBACK 2
#define __FLT64_DIG__ 15
#define AtomicStore(PTR,VAL) (*(PTR) = (VAL))
#define EROFS 30
#define MACH_MSG_TYPE_LAST 22
#define MAC_OS_X_VERSION_10_10 101000
#define MAC_OS_X_VERSION_10_11 101100
#define MAC_OS_X_VERSION_10_12 101200
#define MAC_OS_X_VERSION_10_13 101300
#define MAC_OS_X_VERSION_10_14 101400
#define MAC_OS_X_VERSION_10_15 101500
#define MAC_OS_X_VERSION_10_16 101600
#define BADSIG SIG_ERR
#define _SC_SEMAPHORES 37
#define SIGSYS 12
#define MEM_FromBind 0x0040
#define UINTMAX_MAX UINTMAX_C(18446744073709551615)
#define TK_THEN 154
#define SQLITE_DBCONFIG_ENABLE_TRIGGER 1003
#define x86_LAST_BRANCH_STATE 25
#define PGHDR_DONT_WRITE 0x010
#define _MACH_VOUCHER_TYPES_H_ 
#define first_valueValueFunc noopValueFunc
#define A_GETPOLICY 33
#define WO_IN 0x0001
#define WO_IS 0x0080
#define SIOCADDMULTI _IOW('i', 49, struct ifreq)
#define SQLITE_EXPERIMENTAL 
#define WHERE_SEEK_TABLE 0x0400
#define sqlite3_column_origin_name 0
#define _CS_POSIX_V6_LP64_OFF64_CFLAGS 8
#define __GNUC_EXECUTION_CHARSET_NAME "UTF-8"
#define __DARWIN_EXTSN_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_EXTSN __DARWIN_SUF_NON_CANCELABLE)
#define _POSIX_TIMERS (-1)
#define MAC_OS_X_VERSION_10_1 1010
#define MAC_OS_X_VERSION_10_2 1020
#define MACH_MSG_OOL_DESCRIPTOR 1
#define MAC_OS_X_VERSION_10_4 1040
#define MAC_OS_X_VERSION_10_5 1050
#define MAC_OS_X_VERSION_10_6 1060
#define MAC_OS_X_VERSION_10_7 1070
#define MAC_OS_X_VERSION_10_8 1080
#define MAC_OS_X_VERSION_10_9 1090
#define KIPC_SOCKBUF_WASTE 2
#define OS_COMPILER_CAN_ASSUME(expr) ((void)(expr))
#define L_INCR SEEK_CUR
#define SQLITE_NOTICE_RECOVER_ROLLBACK (SQLITE_NOTICE | (2<<8))
#define fpclassify(x) ( sizeof(x) == sizeof(float) ? __fpclassifyf((float)(x)) : sizeof(x) == sizeof(double) ? __fpclassifyd((double)(x)) : __fpclassifyl((long double)(x)))
#define _KEY_T 
#define BTCF_Multiple 0x20
#define MACH_SEND_TOO_LARGE 0x1000000e
#define IOPOL_VFS_TRIGGER_RESOLVE_DEFAULT 0
#define SRT_Table 14
#define LIST_CHECK_HEAD(head,field) 
#define VFS_NUMMNTOPS 1
#define TASK_ABSOLUTETIME_INFO_COUNT ((mach_msg_type_number_t) (sizeof (task_absolutetime_info_data_t) / sizeof (natural_t)))
#define HOST_SECURITY_NULL ((host_security_t) 0)
#define WO_LT (WO_EQ<<(TK_LT-TK_EQ))
#define CPU_SUBTYPE_ITANIUM_2 CPU_SUBTYPE_INTEL(11, 1)
#define __PRAGMA_REDEFINE_EXTNAME 1
#define SIOCSIFMAC _IOW('i', 131, struct ifreq)
#define S_TYPEISMQ(buf) (0)
#define EXPR_NEST_MAX 32
#define MEM_Subtype 0x8000
#define SI_MESGQ 0x10005
#define _VA_LIST_DEFINED 
#define VOL_CAP_INT_MANLOCK 0x00001000
#define CTL_MAXID 9
#define __INT_LEAST16_MAX__ 0x7fff
#define VOL_CAP_FMT_HIDDEN_FILES 0x00002000
#define OP_Divide 106
#define MEMORY_OBJECT_BEHAVE_INFO_COUNT ((mach_msg_type_number_t) (sizeof(memory_object_behave_info_data_t)/sizeof(int)))
#define __WATCHOS_4_3 40300
#define MACH_SEND_INVALID_DEST 0x10000003
#define WHERE_BIGNULL_SORT 0x00080000
#define VM_INHERIT_LAST_VALID VM_INHERIT_NONE
#define WO_OR 0x0200
#define __SIG_ATOMIC_WIDTH__ 32
#define _POSIX2_PBS_TRACK (-1)
#define _STRUCT_X86_DEBUG_STATE32 struct __darwin_x86_debug_state32
#define __INT_LEAST64_TYPE__ long long int
#define __APPLE_API_OBSOLETE 
#define _BSM_AUDIT_H 
#define _MACH_STD_TYPES_H_ 
#define VM_MEMORY_STACK 30
#define VM_MEMORY_ROSETTA_USER_LDT 235
#define SQLITE_CONFIG_LOG 16
#define WHERE_BOTH_LIMIT 0x00000030
#define MAXLOGNAME 255
#define CPUMON_MAKE_FATAL 0x1000
#define _MACHTYPES_H_ 
#define CPU_STATE_MAX 4
#define KERN_FAILURE 5
#define VM_PURGABLE_ORDERING_OBSOLETE (1 << VM_PURGABLE_ORDERING_SHIFT)
#define IOPOL_NORMAL IOPOL_IMPORTANT
#define __FLT128_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define __INTPTR_MAX__ 0x7fffffffffffffffL
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_2(x) 
#define get2byte(x) ((x)[0]<<8 | (x)[1])
#define LIST_HEAD(name,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct name { struct type *lh_first; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define TK_COMMIT 10
#define pager_datahash(X,Y) 0
#define _STRUCT_X86_DEBUG_STATE64 struct __darwin_x86_debug_state64
#define CPU_SUBTYPE_LITTLE_ENDIAN ((cpu_subtype_t) 0)
#define KERN_INVALID_POLICY 28
#define ATTR_CMN_FULLPATH 0x08000000
#define _POSIX2_PBS_CHECKPOINT (-1)
#define CIRCLEQ_INIT(head) do { (head)->cqh_first = (void *)(head); (head)->cqh_last = (void *)(head); } while (0)
#define _POSIX2_PBS (-1)
#define OP_SorterOpen 114
#define ntohl(x) __DARWIN_OSSwapInt32(x)
#define MACH_SEND_INVALID_DATA 0x10000002
#define P4_TRANSIENT 0
#define _XOPEN_IOV_MAX 16
#define ntohs(x) __DARWIN_OSSwapInt16(x)
#define HOST_RESOURCE_SIZES_COUNT ((mach_msg_type_number_t) (sizeof(kernel_resource_sizes_data_t)/sizeof(integer_t)))
#define MACH_VOUCHER_NULL ((mach_voucher_t) 0)
#define SIOCSIF6LOWPAN _IOW('i', 196, struct ifreq)
#define INT_FAST64_MIN INT64_MIN
#define _I386_PARAM_H_ 
#define WAL_READ_LOCK(I) (3+(I))
#define _STRUCT_UCONTEXT struct __darwin_ucontext
#define __SWIFT_UNAVAILABLE 
#define AtomicLoad(PTR) (*(PTR))
#define ROUND8(x) (((x)+7)&~7)
#define OP_Next 5
#define _IOLBF 1
#define BTREE_AUXDELETE 0x04
#define THREAD_SCHED_TIMESHARE_INFO 10
#define FPE_FLTINV 5
#define TK_OVER 160
#define F_SETLKW 9
#define SIOCGIFDSTADDR _IOWR('i', 34, struct ifreq)
#define __DARWIN_WCHAR_MAX __WCHAR_MAX__
#define WIFSIGNALED(x) (_WSTATUS(x) != _WSTOPPED && _WSTATUS(x) != 0)
#define UNIXFILE_DELETE 0x20
#define OP_IfNot 20
#define KERN_POSIX1 17
#define CPU_SUBTYPE_ARM_V6 ((cpu_subtype_t) 6)
#define SQLITE_WindowFunc 0x0002
#define __FLT32_MIN_10_EXP__ (-37)
#define ConstFactorOk(P) ((P)->okConstFactor)
#define __SSE2__ 1
#define NOTE_LEEWAY 0x00000010
#define O_POPUP 0x80000000
#define _POSIX2_C_DEV 200112L
#define __FLT32X_DIG__ 15
#define SQLITE_MAGIC_ZOMBIE 0x64cffc7f
#define __WORDSIZE 64
#define OP_Savepoint 0
#define CPU_SUBTYPE_ANY ((cpu_subtype_t) -1)
#define _MACH_I386_EXCEPTION_H_ 
#define EXCLUSIVE_LOCK 4
#define __INT_FAST16_WIDTH__ 16
#define OP_NoConflict 27
#define VOL_CAP_INT_RENAME_EXCL 0x00080000
#define MACH_MSGH_BITS_VOUCHER(bits) (((bits) & MACH_MSGH_BITS_VOUCHER_MASK) >> 16)
#define MACH_MSG_TYPE_COPY_RECEIVE 22
#define MNT_UNKNOWNPERMISSIONS MNT_IGNORE_OWNERSHIP
#define THREAD_EXTENDED_INFO 5
#define CPU_SUBTYPE_MIPS_R2000a ((cpu_subtype_t) 4)
#define ISPOWEROF2(X) (((X)&((X)-1))==0)
#define __code_model_small__ 1
#define MAC_OS_X_VERSION_10_12_1 101201
#define MAC_OS_X_VERSION_10_12_2 101202
#define MAC_OS_X_VERSION_10_12_4 101204
#define OP_CursorHint 169
#define O_NONBLOCK 0x00000004
#define etPERCENT 7
#define OP_EndCoroutine 67
#define __WCHAR_TYPE__ int
#define SQLITE_FUNC_SUBTYPE 0x00100000
#define __SIZEOF_FLOAT__ 4
#define _POSIX_TRACE_NAME_MAX 8
#define _STRUCT_TIMEVAL64 
#define NC_IdxExpr 0x0020
#define PRIBIO 16
#define __pic__ 2
#define ru_first ru_ixrss
#define SQLITE_STMTSTATUS_SORT 2
#define CLOCKS_PER_SEC 1000000
#define ROWSET_SORTED 0x01
#define TIME_ABSOLUTE 0x00
#define PAGER_JOURNALMODE_OFF 2
#define UNIXFILE_NOLOCK 0x80
#define SQLITE_NoCkptOnClose 0x00000800
#define HOST_SCHED_INFO 3
#define _SECURE__STRINGS_H_ 
#define __API_DEPRECATED_WITH_REPLACEMENT(...) 
#define P4_NOTUSED 0
#define MACH_VOUCHER_ATTR_REDEEM ((mach_voucher_attr_recipe_command_t)10)
#define __FLT32_DECIMAL_DIG__ 9
#define SQLITE_FAIL 3
#define ExprAlwaysTrue(E) (((E)->flags&(EP_FromJoin|EP_IsTrue))==EP_IsTrue)
#define __INT_FAST64_MAX__ 0x7fffffffffffffffLL
#define MAP_MEM_WCOMB 4
#define HOST_FAIRPLAYD_PORT (24 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define SIOCSIFMTU _IOW('i', 52, struct ifreq)
#define SQLITE_BUSY_SNAPSHOT (SQLITE_BUSY | (2<<8))
#define __TVOS_DEPRECATED(_start,_dep,_msg) 
#define VM_FLAGS_4GB_CHUNK 0x0004
#define ATTR_FILE_RSRCALLOCSIZE 0x00002000
#define M_LN10 2.30258509299404568401799145468436421
#define SQLITE_SO_UNDEFINED -1
#define _SC_2_PBS 59
#define F_GETPATH_NOFIRMLINK 102
#define KERN_INVALID_SECURITY 35
#define OP_Last 32
#define OP_NullRow 129
#define _CADDR_T 
#define __MACH__ 1
#define _FTSINT_H 
#define VM_REGION_SUBMAP_INFO_V1_COUNT_64 ((mach_msg_type_number_t) (VM_REGION_SUBMAP_INFO_V1_SIZE / sizeof (natural_t)))
#define TK_INTEGER 150
#define __DARWIN_LITTLE_ENDIAN 1234
#define __amd64 1
#define FP_387 3
#define F_GETSIGSINFO 105
#define MNT_DONTBROWSE 0x00100000
#define _UINT16_T 
#define TK_CASCADE 35
#define S_ISSOCK(m) (((m) & S_IFMT) == S_IFSOCK)
#define TIOCGWINSZ _IOR('t', 104, struct winsize)
#define HOST_CAN_HAS_DEBUGGER_COUNT ((mach_msg_type_number_t) (sizeof(host_can_has_debugger_info_data_t)/sizeof(integer_t)))
#define _U_INT 
#define yyTraceShift(X,Y,Z) 
#define MACH_VOUCHER_ATTR_REMOVE ((mach_voucher_attr_recipe_command_t)2)
#define M_SQRT2 1.41421356237309504880168872420969808
#define EXC_RESOURCE 11
#define ___POSIX_C_DEPRECATED_STARTING_199506L 
#define CC_NUL 28
#define SIOCGIFCAP _IOWR('i', 91, struct ifreq)
#define ATTR_FILE_RSRCLENGTH 0x00001000
#define ExprClearProperty(E,P) (E)->flags&=~(P)
#define fdatasync fsync
#define VM_FLAGS_SUPERPAGE_SIZE_ANY (SUPERPAGE_SIZE_ANY << VM_FLAGS_SUPERPAGE_SHIFT)
#define KERN_MAXFILESPERPROC 29
#define AUDIT_CTLMODE_EXTERNAL ((unsigned char)2)
#define CIRCLEQ_INSERT_AFTER(head,listelm,elm,field) do { CIRCLEQ_CHECK_NEXT(head, listelm, field); (elm)->field.cqe_next = (listelm)->field.cqe_next; (elm)->field.cqe_prev = (listelm); if ((listelm)->field.cqe_next == (void *)(head)) (head)->cqh_last = (elm); else (listelm)->field.cqe_next->field.cqe_prev = (elm); (listelm)->field.cqe_next = (elm); } while (0)
#define disable_simulated_io_errors() 
#define TASK_SCHED_INFO 14
#define TERM_LIKE 0x400
#define _MACH_KERN_RETURN_H_ 
#define SQLITE_READONLY_ROLLBACK (SQLITE_READONLY | (3<<8))
#define KERN_LOGSIGEXIT 36
#define _SC_THREAD_PRIORITY_SCHEDULING 89
#define SQLITE_DBCONFIG_WRITABLE_SCHEMA 1011
#define SQLITE_AllOpts 0xffff
#define _RSIZE_T 
#define _POSIX2_EXPR_NEST_MAX 32
#define IOPOL_ATIME_UPDATES_DEFAULT 0
#define ROWSET_NEXT 0x02
#define EP_xIsSelect 0x000800
#define SQLITE_QueryOnly 0x00100000
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffLL
#define PTHREAD_MUTEX_ERRORCHECK 1
#define ExprHasAllProperty(E,P) (((E)->flags&(P))==(P))
#define VQ_UNMOUNT 0x0010
#define __UINT_LEAST32_TYPE__ unsigned int
#define __TVOS_12_1 120100
#define __SSE__ 1
#define _SC_BC_STRING_MAX 12
#define WAL_HDRSIZE 32
#define SIGKILL 9
#define FNDELAY O_NONBLOCK
#define KERN_CLASSIC KERN_TRANSLATE
#define __LDBL_MIN_EXP__ (-16381)
#define OP_Goto 11
#define VM_PROT_IS_MASK ((vm_prot_t) 0x40)
#define FIONCLEX _IO('f', 2)
#define SQLITE_PAGER_H 
#define _MACH_I386__STRUCTS_H_ 
#define IgnorableOrderby(X) ((X->eDest)<=SRT_DistQueue)
#define CPU_TYPE_ARM64 (CPU_TYPE_ARM | CPU_ARCH_ABI64)
#define THREAD_LATENCY_QOS_POLICY 7
#define MACH_MSGH_BITS_SET(remote,local,voucher,other) (MACH_MSGH_BITS_SET_PORTS((remote), (local), (voucher)) | ((other) &~ MACH_MSGH_BITS_PORTS_MASK))
#define vdbeAssertFieldCountWithinLimits(A,B,C) 
#define __AUDIT_API_DEPRECATED __API_DEPRECATED("audit is deprecated", macos(10.4, 11.0))
#define _POSIX_MAX_CANON 255
#define A_GETKAUDIT 29
#define TERM_ORINFO 0x10
#define SQLITE_IOERR_SHMOPEN (SQLITE_IOERR | (18<<8))
#define NL_SETMAX 255
#define _CS_POSIX_V6_WIDTH_RESTRICTED_ENVS 14
#define __SMBF 0x0080
#define VFS_GENERIC 0
#define __INT_LEAST8_MAX__ 0x7f
#define TASK_DEBUG_CONTROL_PORT 10
#define HOST_RESOURCE_NOTIFY_PORT (20 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define host_set_chud_port(host,port) host_set_launchctl_port(host, port)
#define __FLT32X_MAX_10_EXP__ 308
#define pcacheDump(X) 
#define USER_BC_STRING_MAX 5
#define EFL_CLR 0xfff88028
#define pcache1 (GLOBAL(struct PCacheGlobal, pcache1_g))
#define MACH_SEND_TIMED_OUT 0x10000004
#define O_RDONLY 0x0000
#define _SC_2_FORT_RUN 22
#define THREAD_THROUGHPUT_QOS_POLICY 8
#define tkSEMI 0
#define VOL_CAP_FMT_PATH_FROM_ID 0x00004000
#define SQLITE_IDXTYPE_UNIQUE 1
#define KERN_LOCK_OWNED 40
#define DB_ResetWanted 0x0008
#define _SC_ATEXIT_MAX 107
#define DbMaskTest(M,I) (((M)&(((yDbMask)1)<<(I)))!=0)
#define LOCK_SET_NULL ((lock_set_t) 0)
#define host_set_host_port(host,port) (KERN_INVALID_ARGUMENT)
#define __DARWIN_ALIAS(sym) __asm("_" __STRING(sym) __DARWIN_SUF_UNIX03)
#define __FLT128_MIN__ 3.36210314311209350626267781732175260e-4932F128
#define TASK_NULL ((task_t) 0)
#define _PC_ALLOC_SIZE_MIN 16
#define VM_SET_FLAGS_ALIAS(flags,alias) (flags) = (((flags) & ~VM_FLAGS_ALIAS_MASK) | (((alias) & ~VM_FLAGS_ALIAS_MASK) << 24))
#define _LP64 1
#define SQLITE_FUNC_CASE 0x0008
#define SQLITE_SAVEPOINT 32
#define YYMALLOCARGTYPE u64
#define EFBIG 27
#define __FLT64_MAX_EXP__ 1024
#define sqlite3VdbeIOTraceSql(X) 
#define OP_VOpen 163
#define __API_UNAVAILABLE(...) 
#define fropen(cookie,fn) funopen(cookie, fn, 0, 0, 0)
#define IOTRACE(A) 
#define SEGV_MAPERR 1
#define POLICY_NULL 0
#define _PTHREAD_H 
#define TK_TIES 94
#define _PTHREAD_T 
#define SIOCGIFXMEDIA _IOWR('i', 72, struct ifmediareq)
#define USER_BC_SCALE_MAX 4
#define OpHelp(X) 
#define HOST_LAUNCHCTL_PORT (9 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define SQLITE_CONFIG_GETMALLOC 5
#define x86_FLOAT_STATE32 2
#define _SC_IOV_MAX 56
#define _SC_PASS_MAX 131
#define CLOCK_NULL ((clock_t) 0)
#define P_PPWAIT 0x00000010
#define MB_CUR_MAX __mb_cur_max
#define O_TRUNC 0x00000400
#define __MATH__ 
#define USER_STREAM_MAX 19
#define __DARWIN_ALIGN(p) ((__darwin_size_t)((__darwin_size_t)(p) + __DARWIN_ALIGNBYTES) &~ __DARWIN_ALIGNBYTES)
#define TK_BITNOT 110
#define TK_PRECEDING 88
#define NOTE_EXIT_CSERROR 0x00040000
#define _STRUCT_LAST_BRANCH_RECORD struct __last_branch_record
#define SQLITE_CONSTRAINT_COMMITHOOK (SQLITE_CONSTRAINT | (2<<8))
#define x86_FLOAT_STATE64 5
#define _SC_AIO_MAX 43
#define EBADARCH 86
#define ENOTCONN 57
#define SQLITE_TESTCTRL_PRNG_RESET 7
#define SQLITE_BUSY 5
#define SI_ASYNCIO 0x10004
#define TK_ROW 75
#define TARGET_OS_TV 0
#define KERN_SUCCESS 0
#define A_SETCOND 38
#define EP_Propagate (EP_Collate|EP_Subquery|EP_HasFunc)
#define VM_FLAGS_ALIAS_MASK 0xFF000000
#define TIMESPEC_TO_TIMEVAL(tv,ts) { (tv)->tv_sec = (ts)->tv_sec; (tv)->tv_usec = (ts)->tv_nsec / 1000; }
#define MACH_MSG_TYPE_DISPOSE_SEND 25
#define __DBL_MAX_10_EXP__ 308
#define P_tmpdir "/var/tmp/"
#define SIOCIFDESTROY _IOW('i', 121, struct ifreq)
#define SV_NOCLDSTOP SA_NOCLDSTOP
#define _SC_CHILD_MAX 2
#define _POSIX_MESSAGE_PASSING (-1)
#define SQLITE_ABORT 4
#define MAP_JIT 0x0800
#define EPFNOSUPPORT 46
#define OK_IF_ALWAYS_FALSE(X) (X)
#define RLIM_SAVED_MAX RLIM_INFINITY
#define __FLT32_EPSILON__ 1.19209289550781250000000000000000000e-7F32
#define __SMOD 0x2000
#define INTMAX_MAX INTMAX_C(9223372036854775807)
#define SQLITE_N_KEYWORD 143
#define host_get_ktrace_background_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_KTRACE_BACKGROUND_PORT, (port)))
#define MADV_RANDOM POSIX_MADV_RANDOM
#define __IPHONE_9_1 90100
#define PTHREAD_ONCE_INIT {_PTHREAD_ONCE_SIG_init, {0}}
#define __DBL_DECIMAL_DIG__ 17
#define msgh_kind msgh_seqno
#define OP_Pagecount 166
#define time_value_add_usec(val,micros) { if (((val)->microseconds += (micros)) >= TIME_MICROS_MAX) { (val)->microseconds -= TIME_MICROS_MAX; (val)->seconds++; } }
#define SQLITE_CONFIG_PCACHE2 18
#define _SIZE_T 
#define _SQLITE_OS_H_ 
#define CTLFLAG_NOAUTO 0x02000000
#define _SC_2_PBS_TRACK 64
#define osUnlink ((int(*)(const char*))aSyscall[16].pCurrent)
#define _POSIX2_SW_DEV 200112L
#define __DBL_NORM_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define EP_Static 0x8000000
#define THREAD_NULL ((thread_t) 0)
#define PragTyp_COMPILE_OPTIONS 8
#define NOTE_FFCTRLMASK 0xc0000000
#define VOL_CAP_INT_ATTRLIST 0x00000002
#define MSIZE (1 << MSIZESHIFT)
#define MEMJOURNAL_DFLT_FILECHUNKSIZE 1024
#define COLFLAG_UNIQUE 0x0008
#define TK_INDEX 156
#define SIOCGIFCONF _IOWR('i', 36, struct ifconf)
#define CPU_SUBTYPE_POWERPC_7400 ((cpu_subtype_t) 10)
#define TF_Shadow 0x0400
#define SQLITE_IOCAP_SAFE_APPEND 0x00000200
#define SQLITE_DROP_TEMP_INDEX 12
#define IOPOL_TYPE_VFS_TRIGGER_RESOLVE 5
#define SQLITE_NOMEM_BKPT SQLITE_NOMEM
#define SQLITE_AUTH 23
#define F_ADDSIGS 59
#define SQLITE_SORTER_PMASZ 250
#define M_LOG10E 0.434294481903251827651128918916605082
#define MEMDB pPager->memDb
#define x86_EXCEPTION_STATE32 3
#define __SIZEOF_WCHAR_T__ 4
#define SQLITE_CacheSpill 0x00000020
#define PragTyp_SECURE_DELETE 30
#define MAP_MEM_ONLY 0x010000
#define SRCHFS_VALIDOPTIONSMASK 0x800000FF
#define F_CHKCLEAN 41
#define AQ_MAXBUFSZ 1048576
#define VM_FLAGS_RETURN_4K_DATA_ADDR 0x800000
#define SQLITE_TEXT 3
#define __ORDER_BIG_ENDIAN__ 4321
#define MINCORE_PAGED_OUT 0x20
#define RLIMIT_MEMLOCK 6
#define THREAD_AFFINITY_POLICY 4
#define CPUFAMILY_INTEL_6_13 0xaa33392b
#define __UINT32_C(c) c ## U
#define _MACH_THREAD_STATUS_H_ 
#define _POSIX2_VERSION 200112L
#define KMOD_MAX_NAME 64
#define SQLITE_IOERR_READ (SQLITE_IOERR | (1<<8))
#define CPUFAMILY_INTEL_6_23 CPUFAMILY_INTEL_PENRYN
#define SQLITE_NOTFOUND 12
#define EV_SET(kevp,a,b,c,d,e,f) do { struct kevent *__kevp__ = (kevp); __kevp__->ident = (a); __kevp__->filter = (b); __kevp__->flags = (c); __kevp__->fflags = (d); __kevp__->data = (e); __kevp__->udata = (f); } while(0)
#define SQLITE_RecTriggers 0x00002000
#define INTMAX_MIN (-INTMAX_MAX-1)
#define CPU_SUBTYPE_POWERPC_7450 ((cpu_subtype_t) 11)
#define PAGERID(p) (SQLITE_PTR_TO_INT(p->fd))
#define PAGER_CACHESPILL 0x20
#define PROCESSOR_BASIC_INFO 1
#define _SC_TRACE_INHERIT 99
#define EP_VarSelect 0x000020
#define _STDLIB_H_ 
#define CPUFAMILY_ARM_LIGHTNING_THUNDER 0x462504d2
#define LIST_FOREACH(var,head,field) for ((var) = LIST_FIRST((head)); (var); (var) = LIST_NEXT((var), field))
#define __SCHED_PARAM_SIZE__ 4
#define ATTR_CMN_ACCESSMASK 0x00020000
#define MAXINTERP 64
#define SQLITE_WHEREINT_H 
#define VOL_CAP_FMT_JOURNAL 0x00000008
#define sqlite3ParserCTX_STORE yypParser->pParse=pParse;
#define sqlite3VdbeVerifyNoResultRow(A) 
#define ExprHasProperty(E,P) (((E)->flags&(P))!=0)
#define FPC_PC_53 0x0200
#define EXC_I386_NOEXT 3
#define _CS_POSIX_V6_LP64_OFF64_LIBS 10
#define etSRCLIST 12
#define VM_STATISTICS_TRUNCATE_TO_32_BIT(value) ((uint32_t)(((value) > UINT32_MAX ) ? UINT32_MAX : (value)))
#define FD_ISSET(n,p) __DARWIN_FD_ISSET(n, p)
#define O_NOFOLLOW 0x00000100
#define VM_MEMORY_ROSETTA_10 239
#define FP_RND_NEAR 0
#define POLL_ERR 4
#define PTHREAD_EXPLICIT_SCHED 2
#define TIOCSETA _IOW('t', 20, struct termios)
#define EINTR 4
#define WAL_SHM_RDONLY 2
#define SQLITE_PREPARE_NO_VTAB 0x04
#define THREAD_BASIC_INFO 3
#define SQLITE_SO_DESC 1
#define SEGV_NOOP 0
#define TARGET_OS_MACCATALYST 0
#define MASTER_ROOT 1
#define AQ_BUFSZ MAXAUDITDATA
#define EQFULL 106
#define VM_LEDGER_TAG_NETWORK 0x00000002
#define PragTyp_PAGE_SIZE 28
#define SQLITE_INDEX_CONSTRAINT_FUNCTION 150
#define AUDIT_PATH 0x0200
#define __alloca(size) __builtin_alloca(size)
#define MACH_MSG_SIZE_NULL (mach_msg_size_t *) 0
#define _POSIX_TRACE_EVENT_NAME_MAX 30
#define NOTE_MACH_CONTINUOUS_TIME 0x00000080
#define INT_FAST64_MAX INT64_MAX
#define CPU_SUBTYPE_MIPS_ALL ((cpu_subtype_t) 0)
#define BITVEC_USIZE (((BITVEC_SZ-(3*sizeof(u32)))/sizeof(Bitvec*))*sizeof(Bitvec*))
#define OP_Yield 14
#define _MACH_I386_VM_TYPES_H_ 
#define __OS_ENUM_ATTR 
#define isnormal(x) ( sizeof(x) == sizeof(float) ? __inline_isnormalf((float)(x)) : sizeof(x) == sizeof(double) ? __inline_isnormald((double)(x)) : __inline_isnormall((long double)(x)))
#define invalid_policy(policy) ((policy) != POLICY_TIMESHARE && (policy) != POLICY_RR && (policy) != POLICY_FIFO)
#define MACH_MSG_TRAILER_FORMAT_0 0
#define COALITION_NULL ((coalition_t) 0)
#define OS_EXPECT(x,v) __builtin_expect((x), (v))
#define TK_DEFERRED 7
#define SQLITE_TRACE_XPROFILE 0x80
#define _POSIX2_CHAR_TERM 200112L
#define OP_Prev 4
#define _SYS_WAIT_H_ 
#define _SC_2_FORT_DEV 21
#define TERM_OR_OK 0x40
#define VM_MAP_ENTRY_MAX (256)
#define MAP_FIXED 0x0010
#define _SC_TRACE_EVENT_NAME_MAX 127
#define MACH_MSG_SIZE_MAX ((mach_msg_size_t) ~0)
#define __SIZEOF_DOUBLE__ 8
#define OS_NONNULL10 __attribute__((__nonnull__(10)))
#define OS_NONNULL11 __attribute__((__nonnull__(11)))
#define OS_NONNULL12 __attribute__((__nonnull__(12)))
#define OS_NONNULL13 __attribute__((__nonnull__(13)))
#define OS_NONNULL14 __attribute__((__nonnull__(14)))
#define OS_NONNULL15 __attribute__((__nonnull__(15)))
#define VM_PURGABLE_NO_AGING (0x1 << VM_PURGABLE_NO_AGING_SHIFT)
#define MNT_RELOAD 0x00040000
#define SQLITE_CountOfView 0x0200
#define __API_DEPRECATED_BEGIN(...) 
#define _SYS_ERRNO_H_ 
#define __DRIVERKIT_20_0 200000
#define NOTE_EXIT_DETAIL_MASK 0x00070000
#define THREAD_LATENCY_QOS_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (thread_latency_qos_policy_data_t) / sizeof (integer_t)))
#define osGetpid(X) (pid_t)getpid()
#define OP_Expire 158
#define VM_PROT_WRITE ((vm_prot_t) 0x02)
#define ATTR_VOL_ALLOCATIONCLUMP 0x00000040
#define OS_ASSUME_NONNULL_BEGIN 
#define _V6_LP64_OFF64 __LP64_OFF64
#define THREAD_EXTENDED_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (thread_extended_policy_data_t) / sizeof (integer_t)))
#define SQLITE_MX_JUMP_OPCODE 61
#define __FLT32X_HAS_QUIET_NAN__ 1
#define va_end(v) __builtin_va_end(v)
#define SQLITE_CONFIG_MUTEX 10
#define TIOCSTAT _IO('t', 101)
#define EXC_TYPES_COUNT 14
#define MATTR_CACHE 1
#define _SC_TRACE_SYS_MAX 129
#define MAP_UNIX03 0x40000
#define MACH_MSG_TYPE_PORT_ANY_SEND(x) (((x) >= MACH_MSG_TYPE_MOVE_SEND) && ((x) <= MACH_MSG_TYPE_MAKE_SEND_ONCE))
#define KERN_LOCK_OWNED_SELF 41
#define MACH_MSGH_BITS_PORTS(bits) ((bits) & MACH_MSGH_BITS_PORTS_MASK)
#define getVarint sqlite3GetVarint
#define MACH_VOUCHER_ATTR_VALUE_MAX_NESTED ((mach_voucher_attr_value_handle_array_size_t)4)
#define ECONNREFUSED 61
#define _RATTR_OK (1<<15)
#define CPU_SUBTYPE_ARM64_32_ALL ((cpu_subtype_t) 0)
#define PragTyp_THREADS 37
#define __TVOS_UNAVAILABLE 
#define __const const
#define UINT16_MAX 65535
#define TK_ORDER 141
#define PTTYBLOCK 0x200
#define ATTR_MAX_BUFFER 8192
#define RTLD_FIRST 0x100
#define _POSIX_TRACE_LOG (-1)
#define OPFLAG_BULKCSR 0x01
#define HOST_CLOSURED_PORT (21 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define TK_EXPLAIN 2
#define MPG_FLAGS_STRICT_REPLY_INVALID_REPLY_DISP (0x01ull << 56)
#define SIG_IGN (void (*)(int))1
#define OP_String 72
#define __STDC__ 1
#define OK_IF_ALWAYS_TRUE(X) (X)
#define DST_CAN 6
#define _STRUCT_MCONTEXT_AVX64_FULL struct __darwin_mcontext_avx64_full
#define SQLITE_VDBEINT_H 
#define SQLITE_DEFAULT_PROXYDIR_PERMISSIONS 0755
#define EEXIST 17
#define WINDOW_STARTING_NUM 3
#define __PTRDIFF_TYPE__ long int
#define LIST_REMOVE(elm,field) do { LIST_CHECK_NEXT(elm, field); LIST_CHECK_PREV(elm, field); if (LIST_NEXT((elm), field) != NULL) LIST_NEXT((elm), field)->field.le_prev = (elm)->field.le_prev; *(elm)->field.le_prev = LIST_NEXT((elm), field); TRASHIT((elm)->field.le_next); TRASHIT((elm)->field.le_prev); } while (0)
#define ATTR_VOL_SPACEFREE 0x00000008
#define HW_EPOCH 10
#define SQLITE_DEFAULT_RECURSIVE_TRIGGERS 0
#define VM_VOLATILE_GROUP_SHIFT 8
#define TASK_ABSOLUTETIME_INFO 1
#define KERN_NO_ACCESS 8
#define A_GETFSIZE 27
#define SQLITE_POWERSAFE_OVERWRITE 1
#define SQLITE_MUTEX_RECURSIVE 1
#define _SC_2_PBS_CHECKPOINT 61
#define VM_MEMORY_ROSETTA 230
#define MACH_MSG_TYPE_PORT_RECEIVE MACH_MSG_TYPE_MOVE_RECEIVE
#define TASK_EXC_GUARD_VM_CORPSE 0x04
#define TAILQ_INSERT_TAIL(head,elm,field) do { TAILQ_NEXT((elm), field) = NULL; (elm)->field.tqe_prev = (head)->tqh_last; *(head)->tqh_last = (elm); (head)->tqh_last = &TAILQ_NEXT((elm), field); QMD_TRACE_HEAD(head); QMD_TRACE_ELEM(&(elm)->field); } while (0)
#define SQLITE_FUNC_WINDOW 0x00010000
#define SUID_CRED_NULL ((suid_cred_t) 0)
#define LARGEST_INT64 (0xffffffff|(((i64)0x7fffffff)<<32))
#define TAILQ_ENTRY(type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct { struct type *tqe_next; struct type **tqe_prev; TRACEBUF } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define COLNAME_N 2
#define __UINTPTR_TYPE__ long unsigned int
#define NOTE_VM_PRESSURE_SUDDEN_TERMINATE 0x20000000
#define _UUID_T 
#define WHERE_IN_EARLYOUT 0x00040000
#define TARGET_IPHONE_SIMULATOR TARGET_OS_SIMULATOR
#define OP_LoadAnalysis 142
#define os_compiler_barrier() __asm__ __volatile__("" ::: "memory")
#define __LDBL_MIN_10_EXP__ (-4931)
#define TK_NOTHING 147
#define LOCATE_NOERR 0x02
#define _SC_SPAWN 79
#define TK_RENAME 96
#define THREAD_AFFINITY_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (thread_affinity_policy_data_t) / sizeof (integer_t)))
#define osReadlink ((ssize_t(*)(const char*,char*,size_t))aSyscall[26].pCurrent)
#define __DARWIN_NON_CANCELABLE 0
#define SIG_SETMASK 3
#define _VA_LIST_T 
#define AUDIT_PUBLIC 0x0800
#define A_SETEXPAFTER 44
#define F_GETLK 7
#define _POSIX_OPEN_MAX 20
#define CPU_SUBTYPE_MC98601 ((cpu_subtype_t) 1)
#define THREAD_BASIC_INFO_COUNT ((mach_msg_type_number_t) (sizeof(thread_basic_info_data_t) / sizeof(natural_t)))
#define EXC_ARITHMETIC 3
#define __FLT128_DECIMAL_DIG__ 36
#define _MACH_THREAD_INFO_H_ 
#define host_get_node_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_NODE_PORT, (port)))
#define TK_SELECT_COLUMN 173
#define TERM_COPIED 0x08
#define __FLT_DECIMAL_DIG__ 9
#define MNT_DEFWRITE 0x02000000
#define EFL_IOPL 0x00003000
#define KERN_MEMORY_FAILURE 9
#define SQLITE_LegacyAlter 0x04000000
#define bdbtofsb(bn) ((bn) / (BLKDEV_IOSIZE/DEV_BSIZE))
#define MNT_FORCE 0x00080000
#define CPU_SUBTYPE_UVAXII ((cpu_subtype_t) 6)
#define S_ISFIFO(m) (((m) & S_IFMT) == S_IFIFO)
#define __LDBL_NORM_MAX__ 1.18973149535723176502126385303097021e+4932L
#define vsprintf(str,format,ap) __builtin___vsprintf_chk (str, 0, __darwin_obsz(str), format, ap)
#define TIOCSTOP _IO('t', 111)
#define VM_FLAGS_SUPERPAGE_SHIFT 16
#define MACH_MSG_TYPE_MAKE_SEND 20
#define RTLD_LAZY 0x1
#define BC_BASE_MAX 99
#define MB_LEN_MAX 6
#define VM_PAGE_QUERY_PAGE_REUSABLE 0x800
#define TIOCDCDTIMESTAMP _IOR('t', 88, struct timeval)
#define MACH_PORT_TYPE_NONE ((mach_port_type_t) 0L)
#define IPC_VOUCHER_ATTR_MANAGER_NULL ((ipc_voucher_attr_manager_t) 0)
#define VOL_CAPABILITIES_FORMAT 0
#define _USECONDS_T 
#define assertCellInfo(x) 
#define __SSE3__ 1
#define IN_INDEX_LOOP 0x0004
#define TK_RAISE 71
#define EOPNOTSUPP 102
#define VM_MEMORY_COREGRAPHICS_FRAMEBUFFERS 56
#define _POSIX_BARRIERS (-1)
#define EXC_I386_BPT 2
#define THREAD_FLAVOR_READ 1
#define __IPHONE_8_2 80200
#define __ATOMIC_ACQ_REL 4
#define COLNAME_DECLTYPE 1
#define __ATOMIC_RELEASE 3
#define __UINT64_C(c) c ## ULL
#define __IPHONE_8_4 80400
#define MACH_PORT_STATUS_FLAG_NO_GRANT 0x80
#define _STRUCT_X86_AVX_STATE32 struct __darwin_i386_avx_state
#define ExprAlwaysFalse(E) (((E)->flags&(EP_FromJoin|EP_IsFalse))==EP_IsFalse)
#define SQLITE_PREPARE_MASK 0x0f
#define VM_PURGABLE_DEBUG_MASK (0x3 << VM_PURGABLE_DEBUG_SHIFT)
#define EP_Leaf 0x800000
#define _SYS_VM_H 
#define SA_USERTRAMP 0x0100
#define ___POSIX_C_DEPRECATED_STARTING_199009L 
#define MACH_VOUCHER_ATTR_VALUE_FLAGS_NONE ((mach_voucher_attr_value_flags_t)0)
#define _SC_XOPEN_UNIX 115
#define __FLT32X_MAX_EXP__ 1024
#define TERM_ANDINFO 0x20
#define PROT_NONE 0x00
#define SQLITE_DEFAULT_PCACHE_INITSZ 20
#define CTLTYPE_NODE 1
#define _QUAD_LOWWORD 0
#define MAC_OS_X_VERSION_10_13_2 101302
#define MAC_OS_X_VERSION_10_13_4 101304
#define M_PI_2 1.57079632679489661923132169163975144
#define M_PI_4 0.785398163397448309615660845819875721
#define TASK_THREAD_TIMES_INFO 3
#define _POSIX_SHARED_MEMORY_OBJECTS (-1)
#define __unused __attribute__((__unused__))
#define BTS_SECURE_DELETE 0x0004
#define _STRUCT_X86_AVX_STATE64 struct __darwin_x86_avx_state64
#define TK_LIKE_KW 47
#define TASK_POLICY_STATE 4
#define sqlite3VdbeScanStatus(a,b,c,d,e) 
#define OP_OpenRead 97
#define _MACH_POLICY_H_ 
#define CPUFAMILY_ARM_11 0x8ff620d8
#define CPUFAMILY_ARM_12 0xbd1b0ae9
#define CPUFAMILY_ARM_13 0x0cc90e64
#define CPUFAMILY_ARM_14 0x96077ef1
#define CPUFAMILY_ARM_15 0xa8511bca
#define ExprSetProperty(E,P) (E)->flags|=(P)
#define yytestcase(X) testcase(X)
#define CPU_SUBTYPE_586 CPU_SUBTYPE_INTEL(5, 0)
#define VM_MEMORY_JAVASCRIPT_JIT_EXECUTABLE_ALLOCATOR 64
#define CLSIZELOG2 0
#define MINCORE_MODIFIED 0x4
#define __UINT_LEAST8_TYPE__ unsigned char
#define CC_DOLLAR 4
#define __FLT128_MIN_10_EXP__ (-4931)
#define ATTR_DIR_VALIDMASK 0x0000003f
#define _MACH_I386_BOOLEAN_H_ 
#define _I386__ENDIAN_H_ 
#define TK_EXCEPT 132
#define _SC_LINE_MAX 15
#define SRT_Discard 4
#define MACH_MSGH_BITS_LOCAL_MASK 0x00001f00
#define HOST_VM_INFO_LATEST_COUNT HOST_VM_INFO_COUNT
#define MIN_AUDIT_FILE_SIZE (512 * 1024)
#define _POSIX_PRIORITIZED_IO (-1)
#define PAGER_STAT_WRITE 2
#define bzero(dest,...) __builtin___memset_chk (dest, 0, __VA_ARGS__, __darwin_obsz0 (dest))
#define EF_IS_PURGEABLE 0x00000008
#define __LP64_OFF64 (1)
#define USER_POSIX2_SW_DEV 17
#define KERN_KDSETBUF 4
#define TIOCM_CAR 0100
#define TIOCEXCL _IO('t', 13)
#define sqlite3_column_database_name 0
#define SQLITE_EnableQPSG 0x00800000
#define strncpy(dest,...) __builtin___strncpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define FP_NAN 1
#define _POSIX_MEMLOCK_RANGE (-1)
#define makedev(x,y) ((dev_t)(((x) << 24) | (y)))
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_0(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_3(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_4(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_5(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_6(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_9(x) x
#define EAFNOSUPPORT 47
#define _STDDEF_H_ 
#define VM_REGION_BASIC_INFO_COUNT ((mach_msg_type_number_t) (sizeof(vm_region_basic_info_data_t)/sizeof(int)))
#define __UINT8_MAX__ 0xff
#define _POSIX_CLOCK_SELECTION (-1)
#define SQLITE_DESERIALIZE_RESIZEABLE 2
#define OPEN_MAX 10240
#define _SC_TYPED_MEMORY_OBJECTS 102
#define MAP_MEM_POSTED_REORDERED 8
#define WHERE_DISTINCT_UNIQUE 1
#define JT_CROSS 0x0002
#define SQLITE_DBSTATUS_LOOKASIDE_HIT 4
#define EV_SYSFLAGS 0xF000
#define HOST_NODE_PORT (19 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define __FLT32_MIN_EXP__ (-125)
#define OP_IdxInsert 132
#define TF_Ephemeral 0x0002
#define SQLITE_FCNTL_LAST_ERRNO 4
#define OS_NORETURN __attribute__((__noreturn__))
#define INT8_MAX 127
#define TAILQ_NEXT(elm,field) ((elm)->field.tqe_next)
#define OP_Count 93
#define PAGER_MEMORY 0x0002
#define WAL_MAX_VERSION 3007000
#define O_NOFOLLOW_ANY 0x20000000
#define MAP_RESILIENT_CODESIGN 0x2000
#define ESPIPE 29
#define THREAD_READ_NULL ((thread_read_t) 0)
#define SF_MultiValue 0x00400
#define MEMORY_OBJECT_NAME_NULL ((memory_object_name_t) 0)
#define HOST_COALITION_PORT (15 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define YY_SHIFT_MAX (1908)
#define ENAMETOOLONG 63
#define WAL_WRITE_LOCK 0
#define _SC_TTY_NAME_MAX 101
#define FIOASYNC _IOW('f', 125, int)
#define __CONSTANT_CFSTRINGS__ 1
#define x86_EXCEPTION_STATE_COUNT ((mach_msg_type_number_t) (sizeof(x86_exception_state_t)/sizeof(unsigned int)))
#define TASK_EXC_GUARD_MP_ALL 0xf0
#define INT16_MAX 32767
#define CTLFLAG_KERN 0x01000000
#define RLIMIT_AS 5
#define TK_TRIGGER 77
#define _V6_ILP32_OFF32 __ILP32_OFF32
#define __DARWIN_FD_CLR(n,p) __darwin_fd_clr((n), (p))
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define put32bits(A,B) sqlite3Put4byte((u8*)A,B)
#define __IPHONE_11_4 110400
#define trunc_page_kernel(x) ((x) & (~vm_kernel_page_mask))
#define __OS_ENUM_ATTR_CLOSED 
#define NOTE_NONE 0x00000080
#define SQLITE_IOERR_SHORT_READ (SQLITE_IOERR | (2<<8))
#define ATTR_VOL_UUID 0x00040000
#define SQLITE_TESTCTRL_BYTEORDER 22
#define EXC_I386_ENDPERR 33
#define _PTHREAD_ONCE_SIG_init 0x30B1BCBA
#define __FLT_EVAL_METHOD__ 0
#define EVFILT_AIO (-3)
#define MACH_PORT_TYPE_DEAD_NAME MACH_PORT_TYPE(MACH_PORT_RIGHT_DEAD_NAME)
#define EPROGUNAVAIL 74
#define sqlite3_column_table_name 0
#define enable_simulated_io_errors() 
#define etINVALID 17
#define TASK_EXC_GUARD_MP_FATAL 0x80
#define CPU_SUBTYPE_INTEL_MODEL_ALL 0
#define WHERE_SKIPSCAN 0x00008000
#define __WATCHOS_4_0 40000
#define _POSIX_AIO_LISTIO_MAX 2
#define __FLT64_DECIMAL_DIG__ 17
#define HOST_GSSD_PORT (12 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define _POSIX_SS_REPL_MAX 4
#define SIOCGIFDEVMTU _IOWR('i', 68, struct ifreq)
#define CTLFLAG_NOLOCK 0x20000000
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define _POSIX_DELAYTIMER_MAX 32
#define WAL_CKPT_LOCK 1
#define CLD_STOPPED 5
#define P_AFFINITY 0x00010000
#define osLstat ((int(*)(const char*,struct stat*))aSyscall[27].pCurrent)
#define sqlite3StackAllocRaw(D,N) sqlite3DbMallocRaw(D,N)
#define VM_MEMORY_COREGRAPHICS 42
#define __IPHONE_2_0 20000
#define __IPHONE_2_1 20100
#define __IPHONE_2_2 20200
#define FNONBLOCK O_NONBLOCK
#define SQLITE_MSVC_H 
#define __AVAILABILITY_INTERNAL_WEAK_IMPORT __attribute__((weak_import))
#define _POSIX_TRACE_USER_EVENT_MAX 32
#define SQLITE_CONFIG_GETMUTEX 11
#define _SC_2_CHAR_TERM 20
#define DbHasProperty(D,I,P) (((D)->aDb[I].pSchema->schemaFlags&(P))==(P))
#define READ_UTF16BE(zIn,TERM,c) { c = ((*zIn++)<<8); c += (*zIn++); if( c>=0xD800 && c<0xE000 && TERM ){ int c2 = ((*zIn++)<<8); c2 += (*zIn++); c = (c2&0x03FF) + ((c&0x003F)<<10) + (((c&0x03C0)+0x0040)<<10); } }
#define OP_Move 77
#define TEMP_MASTER_NAME "sqlite_temp_master"
#define MBIGCLBYTES (1 << MBIGCLSHIFT)
#define DST_NONE 0
#define TESTONLY(X) 
#define EOWNERDEAD 105
#define PROC_FLAG_IMPORTANCE_DONOR 0x400000
#define MNT_IGNORE_OWNERSHIP 0x00200000
#define __DBL_HAS_QUIET_NAN__ 1
#define codeCursorHint(A,B,C,D) 
#define MACH_PORT_TYPE_LABELH MACH_PORT_TYPE(MACH_PORT_RIGHT_LABELH)
#define INT16_MIN -32768
#define CLOFSET (CLSIZE*NBPG-1)
#define PURE_DATE(zName,nArg,iArg,bNC,xFunc) {nArg, SQLITE_FUNC_SLOCHNG|SQLITE_UTF8|SQLITE_FUNC_CONSTANT, (void*)&sqlite3Config, 0, xFunc, 0, 0, 0, #zName, {0} }
#define SLIST_NEXT(elm,field) ((elm)->field.sle_next)
#define F_TEST 3
#define UINTMAX_C(v) (v ## UL)
#define VM_FLAGS_RESILIENT_MEDIA 0x0040
#define SQLITE_CONFIG_URI 17
#define F_LOG2PHYS 49
#define KERN_SYSV 42
#define SQLITE_FCNTL_ROLLBACK_ATOMIC_WRITE 33
#define KERN_EXCEPTION_PROTECTED 32
#define X86_PAGEIN_STATE_COUNT x86_PAGEIN_STATE_COUNT
#define ERANGE 34
#define SQLITE_OPEN_SHAREDCACHE 0x00020000
#define SQLITE_NULL 5
#define P4_FUNCCTX (-16)
#define CPU_SUBTYPE_MASK 0xff000000
#define GCC_VERSION (__GNUC__*1000000+__GNUC_MINOR__*1000+__GNUC_PATCHLEVEL__)
#define SQLITE_MAX_LIKE_PATTERN_LENGTH 50000
#define VM_REGION_SUBMAP_INFO_V0_SIZE (VM_REGION_SUBMAP_INFO_V1_SIZE - sizeof (unsigned int) )
#define MAX_AUDIT_RECORDS 20
#define TK_QUERY 3
#define TIOCM_CTS 0040
#define _POSIX_SPIN_LOCKS (-1)
#define HOST_NOTIFY_CALENDAR_CHANGE 0
#define ETXTBSY 26
#define F_ALLOCATECONTIG 0x00000002
#define MACH_RCV_INVALID_NAME 0x10004002
#define AUDIT_TRIGGER_ROTATE_KERNEL 2
#define MACH_PORT_LIMITS_INFO 1
#define WCHAR_MAX __WCHAR_MAX__
#define YY_REDUCE_COUNT (385)
#define STAILQ_HEAD(name,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct name { struct type *stqh_first; struct type **stqh_last; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define EVFILT_SYSCOUNT 17
#define NSIG __DARWIN_NSIG
#define SQLITE_CellSizeCk 0x00200000
#define MACH_TASK_BASIC_INFO 20
#define CPU_TYPE_X86 ((cpu_type_t) 7)
#define MEM_Agg 0x2000
#define NTOHLL(x) (x) = ntohll((__uint64_t)x)
#define TK_ALTER 157
#define VM_MEMORY_MALLOC_HUGE 4
#define TARGET_OS_UIKITFORMAC 0
#define nth_valueInvFunc noopStepFunc
#define PRIO_PGRP 1
#define READ_UTF16LE(zIn,TERM,c) { c = (*zIn++); c += ((*zIn++)<<8); if( c>=0xD800 && c<0xE000 && TERM ){ int c2 = (*zIn++); c2 += ((*zIn++)<<8); c = (c2&0x03FF) + ((c&0x003F)<<10) + (((c&0x03C0)+0x0040)<<10); } }
#define __FLT64X_MAX_10_EXP__ 4932
#define MACH_PORT_MAKE(index,gen) (((index) << 8) | (gen) >> 24)
#define SQLITE_MAX_COMPOUND_SELECT 500
#define FP_FXSR 4
#define WINDOW_RETURN_ROW 1
#define MACH_RCV_GUARDED_DESC 0x00001000
#define __IPHONE_10_0 100000
#define __IPHONE_10_1 100100
#define __IPHONE_10_2 100200
#define __IPHONE_10_3 100300
#define KERN_TFP_POLICY_DEFAULT 2
#define TRACEBUF 
#define sigmask(m) (1 << ((m)-1))
#define ALLPERMS (S_ISUID|S_ISGID|S_ISTXT|S_IRWXU|S_IRWXG|S_IRWXO)
#define __SNPT 0x0800
#define _POSIX_VERSION 200112L
#define CPU_SUBTYPE_INTEL(f,m) ((cpu_subtype_t) (f) + ((m) << 4))
#define SQLITE_MAX_TRIGGER_DEPTH 1000
#define KEVENT_FLAG_NONE 0x000000
#define CTL_KERN_NAMES { { 0, 0 }, { "ostype", CTLTYPE_STRING }, { "osrelease", CTLTYPE_STRING }, { "osrevision", CTLTYPE_INT }, { "version", CTLTYPE_STRING }, { "maxvnodes", CTLTYPE_INT }, { "maxproc", CTLTYPE_INT }, { "maxfiles", CTLTYPE_INT }, { "argmax", CTLTYPE_INT }, { "securelevel", CTLTYPE_INT }, { "hostname", CTLTYPE_STRING }, { "hostid", CTLTYPE_INT }, { "clockrate", CTLTYPE_STRUCT }, { "vnode", CTLTYPE_STRUCT }, { "proc", CTLTYPE_STRUCT }, { "file", CTLTYPE_STRUCT }, { "profiling", CTLTYPE_NODE }, { "posix1version", CTLTYPE_INT }, { "ngroups", CTLTYPE_INT }, { "job_control", CTLTYPE_INT }, { "saved_ids", CTLTYPE_INT }, { "boottime", CTLTYPE_STRUCT }, { "nisdomainname", CTLTYPE_STRING }, { "maxpartitions", CTLTYPE_INT }, { "kdebug", CTLTYPE_INT }, { "update", CTLTYPE_INT }, { "osreldate", CTLTYPE_INT }, { "ntp_pll", CTLTYPE_NODE }, { "bootfile", CTLTYPE_STRING }, { "maxfilesperproc", CTLTYPE_INT }, { "maxprocperuid", CTLTYPE_INT }, { "dumpdev", CTLTYPE_STRUCT }, { "ipc", CTLTYPE_NODE }, { "dummy", CTLTYPE_INT }, { "dummy", CTLTYPE_INT }, { "usrstack", CTLTYPE_INT }, { "logsigexit", CTLTYPE_INT }, { "symfile",CTLTYPE_STRING }, { "procargs",CTLTYPE_STRUCT }, { "dummy", CTLTYPE_INT }, { "netboot", CTLTYPE_INT }, { "dummy", CTLTYPE_INT }, { "sysv", CTLTYPE_NODE }, { "dummy", CTLTYPE_INT }, { "dummy", CTLTYPE_INT }, { "exec", CTLTYPE_NODE }, { "aiomax", CTLTYPE_INT }, { "aioprocmax", CTLTYPE_INT }, { "aiothreads", CTLTYPE_INT }, { "procargs2",CTLTYPE_STRUCT }, { "corefile",CTLTYPE_STRING }, { "coredump", CTLTYPE_INT }, { "sugid_coredump", CTLTYPE_INT }, { "delayterm", CTLTYPE_INT }, { "shreg_private", CTLTYPE_INT }, { "proc_low_pri_io", CTLTYPE_INT }, { "low_pri_window", CTLTYPE_INT }, { "low_pri_delay", CTLTYPE_INT }, { "posix", CTLTYPE_NODE }, { "usrstack64", CTLTYPE_QUAD }, { "nx", CTLTYPE_INT }, { "tfp", CTLTYPE_NODE }, { "procname", CTLTYPE_STRING }, { "threadsigaltstack", CTLTYPE_INT }, { "speculative_reads_disabled", CTLTYPE_INT }, { "osversion", CTLTYPE_STRING }, { "safeboot", CTLTYPE_INT }, { "dummy", CTLTYPE_INT }, { "rage_vnode", CTLTYPE_INT }, { "tty", CTLTYPE_NODE }, { "check_openevt", CTLTYPE_INT }, { "thread_name", CTLTYPE_STRING } }
#define A_SENDTRIGGER 31
#define SQLITE_TEMP_STORE 1
#define _SC_THREAD_STACK_MIN 93
#define __FLT128_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F128
#define CIRCLEQ_INSERT_BEFORE(head,listelm,elm,field) do { CIRCLEQ_CHECK_PREV(head, listelm, field); (elm)->field.cqe_next = (listelm); (elm)->field.cqe_prev = (listelm)->field.cqe_prev; if ((listelm)->field.cqe_prev == (void *)(head)) (head)->cqh_first = (elm); else (listelm)->field.cqe_prev->field.cqe_next = (elm); (listelm)->field.cqe_prev = (elm); } while (0)
#define VOL_CAP_INT_RENAME_OPENFAIL 0x00100000
#define __AVAILABILITY_INTERNAL_DEPRECATED_MSG(_msg) __attribute__((deprecated))
#define pager_set_pagehash(X) 
#define _MACH_HOST_INFO_H_ 
#define MACH_RCV_INVALID_NOTIFY 0x10004007
#define AU_CLASS_MASK_RESERVED 0x10000000
#define CPU_SUBTYPE_ARM_ALL ((cpu_subtype_t) 0)
#define WCHAR_MIN (-WCHAR_MAX-1)
#define HUGE_VALF __builtin_huge_valf()
#define SQLITE_MAGIC_SICK 0x4b771290
#define __FLT_EVAL_METHOD_TS_18661_3__ 0
#define HUGE_VALL __builtin_huge_vall()
#define ATTR_VOL_MOUNTPOINT 0x00001000
#define VM_BEHAVIOR_CAN_REUSE ((vm_behavior_t) 10)
#define _PC_AUTH_OPAQUE_NP 14
#define TASK_EXC_GUARD_VM_ALL 0x0f
#define MPG_FLAGS_IMMOVABLE_PINNED (0x01ull << 56)
#define HW_TB_FREQ 23
#define PragTyp_LOCK_STATUS 42
#define CPUFAMILY_ARM_9 0xe73283ae
#define SQLITE_FCNTL_BUSYHANDLER 15
#define VM_MEMORY_COREDATA_OBJECTIDS 46
#define SQLITE_DBSTATUS_CACHE_USED_SHARED 11
#define _POSIX_FSYNC 200112L
#define USER_BC_BASE_MAX 2
#define SQLITE_DYNAMIC ((sqlite3_destructor_type)sqlite3MallocSize)
#define FD_SETSIZE __DARWIN_FD_SETSIZE
#define OP_Jump 16
#define __LDBL_MAX_EXP__ 16384
#define OP_Le 55
#define INT8_TYPE signed char
#define SQLITE_DENY 1
#define CPU_SUBTYPE_XEON_MP CPU_SUBTYPE_INTEL(12, 1)
#define _MACH_MACHINE_BOOLEAN_H_ 
#define UINT_FAST16_MAX UINT16_MAX
#define F_SETPROTECTIONCLASS 64
#define ENOTBLK 15
#define VOL_CAP_FMT_SPARSE_FILES 0x00000040
#define SF_FixedLimit 0x04000
#define PragTyp_CACHE_SPILL 5
#define _MACH_TIME_VALUE_H_ 
#define EPROTOTYPE 41
#define EFL_SET 0x00000002
#define __pure2 __attribute__((__const__))
#define host_set_fairplayd_port(host,port) (host_set_special_port((host), HOST_FAIRPLAYD_PORT, (port)))
#define BTS_PAGESIZE_FIXED 0x0002
#define A_GETSFLAGS 39
#define SQLITE_CREATE_TEMP_TABLE 4
#define S_IREAD S_IRUSR
#define NeXTBSD 1995064
#define SQLITE_PRINTF_SQLFUNC 0x02
#define etBUFSIZE SQLITE_PRINT_BUF_SIZE
#define ALIGN(p) __DARWIN_ALIGN(p)
#define host_get_sysdiagnose_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_SYSDIAGNOSE_PORT, (port)))
#define __FLT32X_IS_IEC_60559__ 2
#define VM_MEMORY_IOSURFACE 88
#define SQLITE_ECEL_OMITREF 0x08
#define PGHDR_MMAP 0x020
#define htonl(x) __DARWIN_OSSwapInt32(x)
#define SQLITE_MAX_EXPR_DEPTH 1000
#define htons(x) __DARWIN_OSSwapInt16(x)
#define TK_UNION 130
#define KIPC_MAX_HDR 6
#define OP_SorterInsert 131
#define KERN_PROC_SESSION 3
#define SIZE_MAX UINTPTR_MAX
#define SQLITE_NullCallback 0x00000100
#define __result_use_check __attribute__((__warn_unused_result__))
#define _POSIX_SYNCHRONIZED_IO (-1)
#define noopFunc versionFunc
#define MACH_MSG_VIRTUAL_COPY 1
#define PTRMAP_BTREE 5
#define FP_PREC_24B 0
#define TASK_BASE_LATENCY_QOS_POLICY 10
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_15(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_16(x) x
#define __DARWIN_FD_SETSIZE 1024
#define TARGET_CPU_X86 0
#define TK_USING 140
#define _Nonnull 
#define _CS_XBS5_LP64_OFF64_LDFLAGS 29
#define PAGER_SYNCHRONOUS_EXTRA 0x04
#define _UINTPTR_T 
#define THREAD_READ_PORT 3
#define TASK_FLAGS_INFO_COUNT ((mach_msg_type_number_t) (sizeof(task_flags_info_data_t) / sizeof (natural_t)))
#define MFSTYPENAMELEN 16
#define _STRUCT_X86_THREAD_STATE32 struct __darwin_i386_thread_state
#define O_APPEND 0x00000008
#define _POSIX_TIMEOUTS (-1)
#define _FORTIFY_SOURCE 2
#define TARGET_OS_SIMULATOR 0
#define TAILQ_CHECK_HEAD(head,field) 
#define MAXPATHLEN PATH_MAX
#define CC_AND 24
#define TARGET_RT_MAC_MACHO 1
#define AUDIT_PERZONE 0x2000
#define VdbeCoverageNeverNull(v) 
#define VQ_SYNCEVENT 0x0400
#define ATTR_VOL_OBJCOUNT 0x00000100
#define COLL_WEIGHTS_MAX 2
#define OS_STRINGIFY(s) __OS_STRINGIFY(s)
#define PAGER_SYNCHRONOUS_MASK 0x07
#define TIOCM_RNG 0200
#define HOST_VM_PURGABLE_COUNT ((mach_msg_type_number_t) (sizeof(host_purgable_info_data_t)/sizeof(integer_t)))
#define _STRUCT_X86_THREAD_STATE64 struct __darwin_x86_thread_state64
#define task_get_kernel_port(task,port) (task_get_special_port((task), TASK_KERNEL_PORT, (port)))
#define getchar_unlocked() getc_unlocked(stdin)
#define PRIO_PROCESS 0
#define __PTHREAD_COND_SIZE__ 40
#define OP_Remainder 107
#define USHRT_MAX (SHRT_MAX * 2 + 1)
#define SQLITE_TESTCTRL_ALWAYS 13
#define ETIMEDOUT 60
#define LEDGER_ITEM_INFINITY ((ledger_item_t) (~0))
#define _SC_AIO_LISTIO_MAX 42
#define NFSV2_MAX_FH_SIZE 32
#define OP_VColumn 164
#define SQLITE_ANY 5
#define __MAC_10_10_2 101002
#define __MAC_10_10_3 101003
#define FIODTYPE _IOR('f', 122, int)
#define KERN_KDPIDTR 11
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11(x) x
#define __END_DECLS 
#define task_set_task_access_port(task,port) (task_set_special_port((task), TASK_ACCESS_PORT, (port)))
#define __FLT64X_EPSILON__ 1.08420217248550443400745280086994171e-19F64x
#define _POSIX_V6_LPBIG_OFFBIG __LPBIG_OFFBIG
#define __CONCAT(x,y) x ## y
#define TH_FLAGS_GLOBAL_FORCED_IDLE 0x4
#define SQLITE_OK_LOAD_PERMANENTLY (SQLITE_OK | (1<<8))
#define P4_FREE_IF_LE (-7)
#define WHERE_COLUMN_NULL 0x00000008
#define SQLITE_API 
#define WAKEMON_DISABLE 0x02
#define HOST_IOCOMPRESSIONSTATS_PORT (25 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define MATTR_VAL_GET 2
#define MACH_MSG_TYPE_PORT_ANY_RIGHT(x) (((x) >= MACH_MSG_TYPE_MOVE_RECEIVE) && ((x) <= MACH_MSG_TYPE_MOVE_SEND_ONCE))
#define __dead 
#define PragTyp_SHRINK_MEMORY 31
#define VM_MEMORY_AUDIO 90
#define _SC_DELAYTIMER_MAX 45
#define __scanflike(fmtarg,firstvararg) __attribute__((__format__ (__scanf__, fmtarg, firstvararg)))
#define CBSIZE (CBLOCK - sizeof(struct cblock *) - CBQSIZE)
#define IOPOL_MATERIALIZE_DATALESS_FILES_OFF 1
#define _SC_2_PBS_MESSAGE 63
#define cume_distFinalizeFunc cume_distValueFunc
#define OP_IntegrityCk 146
#define _READ_OK (1<<9)
#define SQLITE_DROP_TABLE 11
#define NOTE_REVOKE 0x00000040
#define MACH_PORT_DENAP_RECEIVER 6
#define MATTR_VAL_GET_INFO 10
#define _XOPEN_ENH_I18N (1)
#define TIOCM_RTS 0004
#define SQLITE_STATUS_PAGECACHE_USED 1
#define TARGET_RT_MAC_CFM 0
#define WHERETRACE(K,X) 
#define SIGPIPE 13
#define TASK_TRACE_MEMORY_INFO_COUNT ((mach_msg_type_number_t) (sizeof(task_trace_memory_info_data_t) / sizeof(natural_t)))
#define POLICY_TIMESHARE_LIMIT_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_timeshare_limit)/sizeof(integer_t)))
#define TIMER_ELAPSED ((sqlite_uint64)0)
#define SIOCSIFLLADDR _IOW('i', 60, struct ifreq)
#define _SC_TZNAME_MAX 27
#define HAVE_MREMAP 0
#define CTLFLAG_ANYBODY 0x10000000
#define _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS 12
#define COLFLAG_SORTERREF 0x0010
#define DIR_MNTSTATUS_MNTPOINT 0x00000001
#define EFL_USER_SET (EFL_IF)
#define SQLITE_TOKEN_KEYWORD 0x2
#define MACH_SEND_SYNC_BOOTSTRAP_CHECKIN 0x00800000
#define clrbit(a,i) (((unsigned char *)(a))[(i)/NBBY] &= ~(1u<<((i)%NBBY)))
#define strncat(dest,...) __builtin___strncat_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define VOL_CAP_FMT_NO_IMMUTABLE_FILES 0x00200000
#define SQLITE_OPEN_MASTER_JOURNAL 0x00004000
#define INT32_MIN (-INT32_MAX-1)
#define _FILESEC_T 
#define INTERNAL_FUNCTION(zName,nArg,xFunc) {nArg, SQLITE_FUNC_INTERNAL|SQLITE_UTF8|SQLITE_FUNC_CONSTANT, 0, 0, xFunc, 0, 0, 0, #zName, {0} }
#define SPILLFLAG_OFF 0x01
#define CTIMEOPT_VAL(opt) CTIMEOPT_VAL_(opt)
#define host_get_lockd_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_LOCKD_PORT, (port)))
#define P_SYSTEM 0x00000200
#define _U_INT64_T 
#define __IPHONE_11_2 110200
#define _POSIX_SPAWN (-1)
#define __SHRT_WIDTH__ 16
#define __TVOS_9_0 90000
#define __TVOS_9_1 90100
#define __TVOS_9_2 90200
#define SLIST_REMOVE(head,elm,type,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH do { if (SLIST_FIRST((head)) == (elm)) { SLIST_REMOVE_HEAD((head), field); } else { struct type *curelm = SLIST_FIRST((head)); while (SLIST_NEXT(curelm, field) != (elm)) curelm = SLIST_NEXT(curelm, field); SLIST_REMOVE_AFTER(curelm, field); } TRASHIT((elm)->field.sle_next); } while (0) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define EXC_SYSCALL 7
#define SQLITE_REPLACE 5
#define KERN_SUGID_COREDUMP 52
#define CMASK 022
#define KERN_INVALID_HOST 22
#define TMP_MAX 308915776
#define TK_VACUUM 78
#define SQLITE_CONFIG_WIN32_HEAPSIZE 23
#define SQLITE_DETACH 25
#define osRead ((ssize_t(*)(int,void*,size_t))aSyscall[8].pCurrent)
#define F_LOG2PHYS_EXT 65
#define SA_ONSTACK 0x0001
#define DYNAMIC_TARGETS_ENABLED 0
#define WAIT_MYPGRP 0
#define MACH_PORT_INDEX(name) ((name) >> 8)
#define POSIX_MADV_DONTNEED 4
#define VM_MEMORY_SBRK 5
#define TIOCSDRAINWAIT _IOW('t', 87, int)
#define VOL_CAP_FMT_DOCUMENT_ID 0x00080000
#define __API_DEPRECATED_MSG_GET_MACRO(...) 
#define ATTR_DIR_ENTRYCOUNT 0x00000002
#define STAILQ_ENTRY(type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct { struct type *stqe_next; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define KERN_COREDUMP 51
#define VM_LEDGER_TAG_MAX 0x00000005
#define _BLKCNT_T 
#define CPU_TYPE_POWERPC64 (CPU_TYPE_POWERPC | CPU_ARCH_ABI64)
#define SQLITE_MUTEX_STATIC_APP2 9
#define SQLITE_MUTEX_STATIC_APP3 10
#define UINT64_C(v) (v ## ULL)
#define __DEQUALIFY(type,var) __CAST_AWAY_QUALIFIER(var, const volatile, type)
#define SIOCSIFFLAGS _IOW('i', 16, struct ifreq)
#define OP_ShiftLeft 101
#define EPERM 1
#define SQLITE_FCNTL_BEGIN_ATOMIC_WRITE 31
#define CPU_SUBTYPE_PENT CPU_SUBTYPE_INTEL(5, 0)
#define DbMaskAllZero(M) (M)==0
#define __enum_closed_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_closed
#define NC_IsDDL 0x10000
#define MEM_Undefined 0x0080
#define x86_EXCEPTION_STATE32_COUNT ((mach_msg_type_number_t) ( sizeof (x86_exception_state32_t) / sizeof (int) ))
#define _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS 6
#define __MAC_10_7 1070
#define __AVAILABILITY_VERSIONS__ 
#define FP_CHOP 3
#define _PC_MAX_INPUT 3
#define _IONBF 2
#define _PC_CASE_PRESERVING 12
#define CC_PLUS 20
#define SIOCGIFMEDIA _IOWR('i', 56, struct ifmediareq)
#define __DARWIN_WEOF ((__darwin_wint_t)-1)
#define _SYS__TYPES_H_ 
#define __APPLE__ 1
#define OP_IfPos 47
#define __UINT16_C(c) c
#define TASK_EVENTS_INFO 2
#define SQLITE_FORMAT 24
#define PTRMAP_ROOTPAGE 1
#define MACH_VOUCHER_NAME_ARRAY_NULL ((mach_voucher_name_array_t) 0)
#define PragTyp_FOREIGN_KEY_CHECK 13
#define VOL_CAP_FMT_SYMBOLICLINKS 0x00000002
#define OP_Insert 122
#define HAS_UPDATE_HOOK(DB) ((DB)->xUpdateCallback)
#define VFS_CTL_QUERY 0x00010003
#define HASHTABLE_HASH_1 383
#define HTONLL(x) (x) = htonll((__uint64_t)x)
#define x86_INSTRUCTION_STATE 24
#define SCHEMA_ENC(db) ((db)->aDb[0].pSchema->enc)
#define KIPC_MBSTAT 8
#define x86_FLOAT_STATE32_COUNT ((mach_msg_type_number_t) (sizeof(x86_float_state32_t)/sizeof(unsigned int)))
#define __IPHONE_4_1 40100
#define SQLITE_CONFIG_PCACHE 14
#define _SIGSET_T 
#define MACH_VOUCHER_ATTR_SET_VALUE_HANDLE ((mach_voucher_attr_recipe_command_t)3)
#define AU_DEFAUDITID (uid_t)(-1)
#define O_WRONLY 0x0001
#define F_SPECULATIVE_READ 101
#define KERN_SECURELVL 9
#define __INTMAX_WIDTH__ 64
#define SQLITE_INDEX_CONSTRAINT_GE 32
#define OP_Compare 87
#define CPUFAMILY_INTEL_BROADWELL 0x582ed09c
#define TK_BITAND 99
#define _SC_THREADS 96
#define SQLITE_IOERR_AUTH (SQLITE_IOERR | (28<<8))
#define MACH_MSG_TYPE_MAKE_SEND_ONCE 21
#define MACH_MSG_OVERWRITE 3
#define COLUMN_MASK(x) (((x)>31) ? 0xffffffff : ((u32)1<<(x)))
#define LOAD_SCALE 1000
#define CLBYTES (CLSIZE*NBPG)
#define NFS_MAX_FH_SIZE NFSV4_MAX_FH_SIZE
#define MAC_OS_X_VERSION_10_14_1 101401
#define MFSNAMELEN 15
#define MUTEX_LOGIC(X) X
#define MAX_AUDIT_RECORD_SIZE MAXAUDITDATA
#define MAP_RESILIENT_MEDIA 0x4000
#define SQLITE_FCNTL_RBU 26
#define AT_REMOVEDIR 0x0080
#define SQLITE_INDEX_CONSTRAINT_ISNOT 69
#define SQLITE_SYNC_FULL 0x00003
#define EVFILT_PROC (-5)
#define UINTPTR_MAX 18446744073709551615UL
#define O_SYMLINK 0x00200000
#define _BSD_MACHINE_SIGNAL_H_ 
#define SQLITE_REINDEX 27
#define MPG_STRICT 0x01
#define BTS_OVERWRITE 0x0008
#define _T_PTRDIFF 
#define MACH_SEND_TRAILER 0x00020000
#define HOST_CPU_LOAD_INFO_COUNT ((mach_msg_type_number_t) (sizeof (host_cpu_load_info_data_t) / sizeof (integer_t)))
#define osWrite ((ssize_t(*)(int,const void*,size_t))aSyscall[11].pCurrent)
#define CLD_NOOP 0
#define OPFLG_IN2 0x04
#define OPFLAG_TYPEOFARG 0x80
#define P4_KEYINFO (-9)
#define VM_MAP_READ_NULL ((vm_map_read_t) 0)
#define L_ctermid 1024
#define EFL_USER_CLEAR (EFL_IOPL|EFL_NT|EFL_RF)
#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
#define FSCALE (1<<FSHIFT)
#define CTLTYPE 0xf
#define WHERE_ONEPASS_MULTIROW 0x0008
#define __FLT_HAS_DENORM__ 1
#define MACH_RCV_LARGE_IDENTITY 0x00000008
#define __compiler_barrier() __asm__ __volatile__("" ::: "memory")
#define MASKBIT(n) (((Bitmask)1)<<(n))
#define OS_ASSUME_NONNULL_END 
#define SQLITE_FSFLAGS_IS_MSDOS 0x1
#define UNIXFILE_URI 0x40
#define ATTR_CMN_NAMEDATTRCOUNT 0x00080000
#define SQLITE_UTF8 1
#define SQLITE_AFF_REAL 0x45
#define OP_Ne 52
#define WHERE_VIRTUALTABLE 0x00000400
#define P_DEPENDENCY_CAPABLE 0x00100000
#define OP_RowData 127
#define EVFILT_USER (-10)
#define SQLITE_APICALL 
#define UF_OPAQUE 0x00000008
#define VM_PROT_NO_CHANGE ((vm_prot_t) 0x08)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_0(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_3(x) x
#define SUPERPAGE_SIZE_2MB 2
#define __WATCHOS_2_0 20000
#define __WATCHOS_2_1 20100
#define __WATCHOS_2_2 20200
#define assertTruncateConstraint(pPager) 
#define _POSIX_HOST_NAME_MAX 255
#define _SYS_LOCK_H_ 
#define SM_EMPTY 3
#define SQLITE_STATUS_PAGECACHE_SIZE 7
#define MACH_MSG_BODY_NULL (mach_msg_body_t *) 0
#define MCL_CURRENT 0x0001
#define O_FSYNC O_SYNC
#define P4_FUNCDEF (-8)
#define MACH_MSG_STRICT_REPLY 0x00000200
#define _I386_SIGNAL_H_ 1
#define SORTER_TYPE_TEXT 0x02
#define PRIMASK 0x0ff
#define VdbeNoopComment(X) 
#define tkWS 1
#define MEMORY_OBJECT_COPY_INVALID 5
#define VFS_CTL_OSTATFS 0x00010001
#define _XOPEN_VERSION 600
#define NOTE_EXIT 0x80000000
#define __FLT32_MAX_EXP__ 128
#define PAGER_SYNCHRONOUS_NORMAL 0x02
#define MAP_ANON 0x1000
#define SQLITE_SHM_NLOCK 8
#define FP_287 2
#define VM_MIN_ADDRESS64 ((user_addr_t) 0x0000000000000000ULL)
#define PragTyp_WAL_AUTOCHECKPOINT 38
#define MAP_MEM_NAMED_CREATE 0x020000
#define KERN_KDWRITETR 17
#define TIOCPKT_FLUSHWRITE 0x02
#define PragTyp_SYNCHRONOUS 33
#define BTREE_USER_VERSION 6
#define SQLITE_FactorOutConst 0x0008
#define MACH_PORT_STATUS_FLAG_IMP_DONATION 0x08
#define _POSIX_NGROUPS_MAX 8
#define MACH_VOUCHER_IMPORTANCE_ATTR_ADD_EXTERNAL 1
#define TESTBIT(V,I) (V[I>>3]&(1<<(I&7)))!=0
#define _PC_2_SYMLINKS 15
#define __HAVE_SPECULATION_SAFE_VALUE 1
#define __null_unspecified 
#define WO_NOOP 0x1000
#define _SC_CLK_TCK 3
#define TK_CONSTRAINT 115
#define DOTLOCK_SUFFIX ".lock"
#define WHERE_IDX_ONLY 0x00000040
#define SIOCIFCREATE2 _IOWR('i', 122, struct ifreq)
#define _POSIX_THREAD_SPORADIC_SERVER (-1)
#define SELECTTRACE(K,P,S,X) 
#define HOST_SYSPOLICYD_PORT (22 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define F_CHECK_LV 98
#define MACH_VOUCHER_TRAP_STACK_LIMIT 256
#define OP_Multiply 105
#define __TVOS_AVAILABLE(_vers) 
#define TK_INSERT 123
#define PTHREAD_CANCEL_ENABLE 0x01
#define TK_LIMIT 144
#define MS_SYNC 0x0010
#define WHERE_BTM_LIMIT 0x00000020
#define SQLITE_DeferFKs 0x00080000
#define SQLITE_PTRSIZE __SIZEOF_POINTER__
#define islessgreater(x,y) __builtin_islessgreater((x),(y))
#define __FLT32X_HAS_DENORM__ 1
#define SA_64REGSET 0x0200
#define sqlite3ParserARG_FETCH 
#define WHERE_COLUMN_EQ 0x00000001
#define PROC_FLAG_IOS_APPLEDAEMON 0x20000
#define __MMX_WITH_SSE__ 1
#define __WATCHOS_UNAVAILABLE 
#define MNT_WAIT 1
#define OP_PureFunc 64
#define _SC_V6_ILP32_OFF32 103
#define TK_IMMEDIATE 8
#define SQLITE_LIMIT_ATTACHED 7
#define _POSIX_REGEXP 200112L
#define UINT_LEAST8_MAX UINT8_MAX
#define VFS_CTL_SERVERINFO 0x00010009
#define __IPHONE_3_0 30000
#define __IPHONE_3_1 30100
#define CTL_HW 6
#define VM_PAGE_QUERY_PAGE_CS_NX 0x400
#define _SC_ASYNCHRONOUS_IO 28
#define MACH_PORT_SRIGHTS_PRESENT 1
#define INFINITY HUGE_VALF
#define THREAD_INSPECT_PORT 2
#define IPC_SPACE_INSPECT_NULL ((ipc_space_inspect_t) 0)
#define _POSIX_MEMORY_PROTECTION 200112L
#define sqlite3MemdebugSetType(X,Y) 
#define TIOCGETD _IOR('t', 26, int)
#define _SC_RAW_SOCKETS 119
#define WHERE_COLUMN_IN 0x00000004
#define TK_EXISTS 20
#define SQLITE_VERSION_NUMBER 3030001
#define MACH_VOUCHER_ATTR_NOOP ((mach_voucher_attr_recipe_command_t)0)
#define CTLFLAG_RD 0x80000000
#define CTLFLAG_RW (CTLFLAG_RD|CTLFLAG_WR)
#define CPU_SUBTYPE_PENTPRO CPU_SUBTYPE_INTEL(6, 1)
#define F_RDAHEAD 45
#define x86_AVX_STATE (x86_AVX_STATE32 + 2)
#define _SC_THREAD_SPORADIC_SERVER 92
#define __SOFF 0x1000
#define MACH_RCV_SCATTER_SMALL 0x1000400e
#define SQLITE_OPEN_PRIVATECACHE 0x00040000
#define __FLT32_MAX__ 3.40282346638528859811704183484516925e+38F32
#define MAP_MEM_POSTED 6
#define EXC_I386_SEGNPFLT 11
#define CROUND (CBLOCK - 1)
#define TK_FLOAT 148
#define MACH_MSGH_BITS_IMPHOLDASRT 0x10000000U
#define cr_gid cr_groups[0]
#define PROCESSOR_SET_BASIC_INFO 5
#define VM_PURGABLE_DEBUG_FAULT (0x2 << VM_PURGABLE_DEBUG_SHIFT)
#define PTHREAD_RECURSIVE_MUTEX_INITIALIZER {_PTHREAD_RECURSIVE_MUTEX_SIG_init, {0}}
#define ExplainQueryPlanPop(P) sqlite3VdbeExplainPop(P)
#define EREMOTE 71
#define MEMORY_OBJECT_COPY_NONE 0
#define S_BLKSIZE 512
#define SQLITE_FCNTL_WIN32_AV_RETRY 9
#define EP_Unlikely 0x040000
#define STAILQ_NEXT(elm,field) ((elm)->field.stqe_next)
#define __strfmonlike(fmtarg,firstvararg) __attribute__((__format__ (__strfmon__, fmtarg, firstvararg)))
#define TIOCM_DSR 0400
#define host_set_automountd_port(host,port) (host_set_special_port((host), HOST_AUTOMOUNTD_PORT, (port)))
#define EXC_I386_EXTERR 5
#define TIOCM_DTR 0002
#define SQLITE_CORRUPT 11
#define SQLITE_FCNTL_SYNC_OMITTED 8
#define SQLITE_FCNTL_WAL_BLOCK 24
#define P5_ConstraintFK 4
#define SM_PRIVATE_ALIASED 6
#define CTLFLAG_WR 0x40000000
#define VM_REGION_SUBMAP_INFO_COUNT ((mach_msg_type_number_t) (sizeof(vm_region_submap_info_data_t) / sizeof(natural_t)))
#define TK_LSHIFT 101
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_4(x) 
#define EP_FromJoin 0x000001
#define MAN754 ((((u64)1)<<52)-1)
#define TOKEN yyminor
#define __SIZEOF_SIZE_T__ 8
#define __DARWIN_ALIAS_STARTING(_mac,_iphone,x) __DARWIN_ALIAS_STARTING_MAC_ ##_mac(x)
#define __offsetof(type,field) __builtin_offsetof(type, field)
#define OP_Or 43
#define task_set_bootstrap_port(task,port) (task_set_special_port((task), TASK_BOOTSTRAP_PORT, (port)))
#define _WCHAR_T 
#define NOTE_EXIT_DECRYPTFAIL 0x00010000
#define PTHREAD_MUTEX_INITIALIZER {_PTHREAD_MUTEX_SIG_init, {0}}
#define SQLITE_FREE(x) malloc_zone_free(_sqliteZone_, (x));
#define POLICY_TIMESHARE_BASE_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_timeshare_base)/sizeof(integer_t)))
#define OP_Abortable 172
#define VdbeCoverageIf(v,x) 
#define SIG_BLOCK 1
#define POLICYCLASS_FIXEDPRI (POLICY_RR | POLICY_FIFO)
#define OP_NotExists 31
#define VOL_CAP_INT_VOL_RENAME 0x00000080
#define assertParentIndex(x,y,z) 
#define __FLT64X_MIN_EXP__ (-16381)
#define ATTR_BULK_REQUIRED (ATTR_CMN_NAME | ATTR_CMN_RETURNED_ATTRS)
#define POLICY_RR 2
#define sqlite3Parser_ENGINEALWAYSONSTACK 1
#define EV_DISABLE 0x0008
#define pagerReportSize(X) 
#define NOTE_VM_PRESSURE_TERMINATE 0x40000000
#define P_DIRTY_SHUTDOWN 0x00000010
#define __IPHONE_11_0 110000
#define __IPHONE_11_1 110100
#define __IPHONE_11_3 110300
#define ATTR_VOL_SIGNATURE 0x00000002
#define USER_LINE_MAX 8
#define _POSIX2_PBS_ACCOUNTING (-1)
#define initMaskSet(P) (P)->n=0
#define CPUFAMILY_INTEL_PENRYN 0x78ea4fbc
#define HW_CACHELINE 16
#define BTREE_DATA_VERSION 15
#define KERN_TFP 61
#define KERN_CHECKOPENEVT 70
#define __SOPT 0x0400
#define x86_INSTRUCTION_STATE_COUNT ((mach_msg_type_number_t)(sizeof(x86_instruction_state_t) / sizeof(int)))
#define pthread_cleanup_push(func,val) { struct __darwin_pthread_handler_rec __handler; pthread_t __self = pthread_self(); __handler.__routine = func; __handler.__arg = val; __handler.__next = __self->__cleanup_stack; __self->__cleanup_stack = &__handler;
#define S_IWUSR 0000200
#define x86_AVX512_STATE_COUNT ((mach_msg_type_number_t) (sizeof(x86_avx512_state_t)/sizeof(unsigned int)))
#define CTL_VM 2
#define CPU_SUBTYPE_ARM64_PTR_AUTH_MASK 0x0f000000
#define SF_Compound 0x00100
#define PAGE_IS_UNPINNED(p) ((p)->pLruNext!=0)
#define SQLITE_TESTCTRL_LAST 29
#define FPS_C0 0x0100
#define FPS_C1 0x0200
#define FPS_C2 0x0400
#define FPS_C3 0x4000
#define DBFLAG_PreferBuiltin 0x0002
#define osGetcwd ((char*(*)(char*,size_t))aSyscall[3].pCurrent)
#define SQLITE_MUTEX_NREF 0
#define UINT_LEAST16_MAX UINT16_MAX
#define R_OK (1<<2)
#define F_UNLCK 2
#define __DARWIN_FD_SET(n,p) __darwin_fd_set((n), (p))
#define FPS_DE 0x0002
#define TASK_ACCESS_PORT 9
#define OP_Copy 78
#define __DEVOLATILE(type,var) __CAST_AWAY_QUALIFIER(var, volatile, type)
#define TK_INITIALLY 64
#define _PC_LINK_MAX 1
#define GLOBAL(t,v) v
#define TK_AS 24
#define ITIMER_REAL 0
#define FPS_ES 0x0080
#define WINDOW_NTH_VALUE_INT 2
#define _BSD_MACHINE__TYPES_H_ 
#define MALLOC_PTR_REGION_RANGE_TYPE 2
#define SQLITE_MAX_PMASZ (1<<29)
#define SUPERPAGE_SIZE_ANY 1
#define SQLITE_IOERR_ROLLBACK_ATOMIC (SQLITE_IOERR | (31<<8))
#define _XOPEN_SHM (1)
#define SLOT_2_0 0x001fc07f
#define EXC_MACF_MAX 0x2FFFF
#define NAN __builtin_nanf("0x7fc00000")
#define PARSE_TAIL_SZ (sizeof(Parse)-PARSE_RECURSE_SZ)
#define SEGV_ACCERR 2
#define TIOCMODS _IOW('t', 4, int)
#define MACH_MSG_TYPE_INTEGER_T MACH_MSG_TYPE_INTEGER_32
#define TASK_KERNELMEMORY_INFO_COUNT ((mach_msg_type_number_t) (sizeof (task_kernelmemory_info_data_t) / sizeof (natural_t)))
#define F_GETPATH_MTMINFO 71
#define CPU_SUBTYPE_POWERPC_603e ((cpu_subtype_t) 4)
#define BTREE_TEXT_ENCODING 5
#define __PTHREAD_CONDATTR_SIZE__ 8
#define MACH_MSGH_BITS_SET_PORTS(remote,local,voucher) (((remote) & MACH_MSGH_BITS_REMOTE_MASK) | (((local) << 8) & MACH_MSGH_BITS_LOCAL_MASK) | (((voucher) << 16) & MACH_MSGH_BITS_VOUCHER_MASK))
#define OP_Destroy 136
#define HOST_LOCAL_NODE -1
#define _POSIX_ADVISORY_INFO (-1)
#define USER_CS_PATH 1
#define stpncpy(dest,...) __builtin___stpncpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define F_LOCK 1
#define CPU_SUBTYPE_POWERPC_604e ((cpu_subtype_t) 7)
#define SQLITE_INDEX_CONSTRAINT_IS 72
#define VFS_CTL_STATFS64 0x0001000B
#define KERN_INVALID_OBJECT 29
#define __FLT64_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F64
#define TK_EQ 53
#define _VA_LIST 
#define MACH_MSG_PRIORITY_UNSPECIFIED (mach_msg_priority_t) 0
#define __OSX_AVAILABLE(_vers) 
#define LOCK_NB 0x04
#define VM_MEMORY_COREGRAPHICS_SHARED 55
#define SQLITE_STATUS_MALLOC_SIZE 5
#define _MACH_MACHINE_H_ 
#define FP_SUPERNORMAL 6
#define MPO_FILTER_MSG 0x100
#define isclr(a,i) ((((unsigned char *)(a))[(i)/NBBY] & (1u<<((i)%NBBY))) == 0)
#define P_TRANSLATED 0x00020000
#define __ILP32_OFFBIG (-1)
#define VOL_CAP_INT_RENAME_SWAP 0x00040000
#define MAXAUDITDATA (0x8000 - 1)
#define MACH_MSG_TYPE_PORT_ANY(x) (((x) >= MACH_MSG_TYPE_MOVE_RECEIVE) && ((x) <= MACH_MSG_TYPE_MAKE_SEND_ONCE))
#define OP_Once 17
#define TK_GE 57
#define MACH_MSGH_BITS_COMPLEX 0x80000000U
#define _PTHREAD_QOS_H 
#define TK_GT 54
#define SQLITE_IOERR_SHMLOCK (SQLITE_IOERR | (20<<8))
#define VOL_CAP_FMT_DIR_HARDLINKS 0x00040000
#define _CS_XBS5_LPBIG_OFFBIG_LDFLAGS 33
#define CC_MINUS 11
#define CC_PIPE 10
#define TASK_DYLD_ALL_IMAGE_INFO_32 0
#define osGeteuid ((uid_t(*)(void))aSyscall[21].pCurrent)
#define _POSIX_IPV6 200112L
#define TK_ID 59
#define TK_IF 18
#define WALINDEX_MAX_VERSION 3007000
#define _SYS_ATTR_H_ 
#define TK_IN 49
#define TK_IS 45
#define TK_AGG_FUNCTION 163
#define CPU_SUBTYPE_POWERPC_601 ((cpu_subtype_t) 1)
#define CPU_SUBTYPE_POWERPC_602 ((cpu_subtype_t) 2)
#define CPU_SUBTYPE_POWERPC_604 ((cpu_subtype_t) 6)
#define TASK_VM_INFO_PURGEABLE_ACCOUNT 27
#define CPU_TYPE_POWERPC ((cpu_type_t) 18)
#define SIGTRAP 5
#define OPFLAG_PERMUTE 0x01
#define __nonnull 
#define SQLITE_PERM 3
#define _POSIX_THREAD_ATTR_STACKSIZE 200112L
#define P4_VTAB (-12)
#define HW_CPU_FREQ 15
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10_3(x) x
#define IOPOL_VFS_CONTENT_PROTECTION_IGNORE 1
#define ATTR_CMN_OWNERID 0x00008000
#define O_DSYNC 0x400000
#define YY_ERROR_ACTION 1171
#define SIOCIFGCLONERS _IOWR('i', 129, struct if_clonereq)
#define FPS_OE 0x0008
#define __API_DEPRECATED_BEGIN_MSG_GET_MACRO(...) 
#define USEFETCH(x) ((x)->bUseFetch)
#define TASK_DYLD_ALL_IMAGE_INFO_64 1
#define KERN_BOOTTIME 21
#define CPU_TYPE_X86_64 (CPU_TYPE_X86 | CPU_ARCH_ABI64)
#define KERN_TTY 69
#define SQLITE_LOCKED_VTAB (SQLITE_LOCKED | (2<<8))
#define FPC_IC_PROJ 0x0000
#define TK_LE 55
#define TK_LP 22
#define TARGET_OS_IPHONE 0
#define SIOCGIFBOND _IOWR('i', 71, struct ifreq)
#define TK_WITHOUT 25
#define OPFLAG_APPEND 0x08
#define SIOCSIFMETRIC _IOW('i', 24, struct ifreq)
#define VM_REGION_BASIC_INFO 10
#define __FLT64X_DECIMAL_DIG__ 21
#define _MACH_MACHINE_THREAD_STATUS_H_ 
#define _STRUCT_SIGALTSTACK struct __darwin_sigaltstack
#define TK_NO 66
#define USER_EXPR_NEST_MAX 7
#define P_INMEM 0
#define FUNC_PERFECT_MATCH 6
#define ctod(x) ((x)<<(PGSHIFT-DEV_BSHIFT))
#define MACH_MSGH_BITS_DENAPHOLDASRT MACH_MSGH_BITS_IMPHOLDASRT
#define __DBL_HAS_DENORM__ 1
#define INT_LEAST32_MAX INT32_MAX
#define USER_POSIX2_VERSION 10
#define __MAC_10_11_2 101102
#define __MAC_10_11_3 101103
#define __MAC_10_11_4 101104
#define SQLITE_TESTCTRL_PRNG_SEED 28
#define TK_OF 68
#define TK_ON 111
#define SQLITE_CORRUPT_BKPT sqlite3CorruptError(__LINE__)
#define TK_OR 43
#define FPS_SF 0x0040
#define PROXY_PATHINDEX (PROXY_HEADERLEN+PROXY_HOSTIDLEN)
#define OP_Function0 63
#define SQLITE_SHM_SHARED 4
#define __OS_AVAILABILITY(_target,_availability) 
#define MACH_RCV_TRAILER_AUDIT 3
#define WHERE_DISTINCTBY 0x0080
#define TASK_BASE_QOS_POLICY 8
#define ALLBITS ((Bitmask)-1)
#define HASHTABLE_NSLOT (HASHTABLE_NPAGE*2)
#define __FLT32_MIN__ 1.17549435082228750796873653722224568e-38F32
#define __UINT8_TYPE__ unsigned char
#define REOPEN_AS_MEMDB(db) (0)
#define _SC_BC_BASE_MAX 9
#define SQLITE_FUNC_TYPEOF 0x0080
#define MACH_SEND_MSG_TOO_SMALL 0x10000008
#define EP_IntValue 0x000400
#define FPS_UE 0x0010
#define P_DIRTY 0x00000008
#define KERN_UNRAGE_THREAD 4
#define SQLITE_IOERR_LOCK (SQLITE_IOERR | (15<<8))
#define ROUNDDOWN8(x) ((x)&~7)
#define FPC_RC_CHOP 0x0c00
#define NOTE_ABSOLUTE 0x00000008
#define KERN_NETBOOT 40
#define S_ISLNK(m) (((m) & S_IFMT) == S_IFLNK)
#define KERN_USRSTACK32 35
#define MAX_CANON 1024
#define _SC_TRACE_NAME_MAX 128
#define __MAC_10_11 101100
#define __MAC_10_12 101200
#define __MAC_10_13 101300
#define ILL_NOOP 0
#define __MAC_10_15 101500
#define __MAC_10_16 101600
#define _SYS_MOUNT_H_ 
#define PAGER_LOCKINGMODE_QUERY -1
#define clrnd(i) (i)
#define BTREE_SINGLE 4
#define __DBL_MANT_DIG__ 53
#define SLIST_FIRST(head) ((head)->slh_first)
#define _PC_CASE_SENSITIVE 11
#define VM_MEMORY_MALLOC_PGUARD 13
#define CPU_SUBTYPE_POWERPC_970 ((cpu_subtype_t) 100)
#define FPS_ZE 0x0004
#define INT_LEAST32_MIN INT32_MIN
#define SIGEV_SIGNAL 1
#define VOL_CAP_INT_ADVLOCK 0x00000100
#define PAGER_WRITER_CACHEMOD 3
#define DST_EET 5
#define VQ_NEEDAUTH 0x0002
#define TASK_SCHED_TIMESHARE_INFO 10
#define VM_FLAGS_PURGABLE 0x0002
#define CPUFAMILY_INTEL_SKYLAKE 0x37fc219f
#define host_set_syspolicyd_port(host,port) (host_set_special_port((host), HOST_SYSPOLICYD_PORT, (port)))
#define TIMER_START 
#define WEXITSTATUS(x) ((_W_INT(x) >> 8) & 0x000000ff)
#define TK_SEMI 1
#define EXC_I386_DIV 1
#define VM_SWAPUSAGE 5
#define MACH_PORT_TYPE_SEND_RIGHTS (MACH_PORT_TYPE_SEND|MACH_PORT_TYPE_SEND_ONCE)
#define st_mtime st_mtimespec.tv_sec
#define TAILQ_EMPTY(head) ((head)->tqh_first == NULL)
#define PTF_LEAF 0x08
#define SQLITE_SCANSTAT_EXPLAIN 4
#define KERNEL_VERSION_MAX (512)
#define SF_HasTypeInfo 0x00080
#define PROCESSOR_CPU_LOAD_INFO_COUNT ((mach_msg_type_number_t) (sizeof(processor_cpu_load_info_data_t)/sizeof(natural_t)))
#define OP_ReopenIdx 96
#define EXC_I386_INVOP 1
#define _POSIX_STREAM_MAX 8
#define XN_ROWID (-1)
#define SQLITE_STMTSTATUS_MEMUSED 99
#define _FSID_T 
#define F_ULOCK 0
#define OP_SCopy 79
#define PragTyp_FLAG 2
#define EXCEPTION_CODE_MAX 2
#define ATTR_FILE_CLUMPSIZE 0x00000010
#define stoc(x) (x)
#define __LDBL_DECIMAL_DIG__ 21
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_1(x) 
#define SRVAL(p) ((void*)((SorterRecord*)(p) + 1))
#define ATTR_CMNEXT_CLONEID 0x00000100
#define _SC_FSYNC 38
#define FPE_INTOVF 8
#define F_ADDFILESIGS_INFO 103
#define _OFF_T 
#define clearerr_unlocked(p) __sclearerr(p)
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#define _POSIX_THREAD_PROCESS_SHARED 200112L
#define sqlite3FileSuffix3(X,Y) 
#define SQLITE_CREATE_TEMP_TRIGGER 5
#define SQLITE_GroupByOrder 0x0004
#define TIOCUCNTL _IOW('t', 102, int)
#define _SC_2_LOCALEDEF 23
#define PENDING_BYTE sqlite3PendingByte
#define _STRINGS_H_ 
#define ATTR_CMN_ACCTIME 0x00001000
#define _CHOWN_OK (1<<21)
#define OP_Clear 137
#define SF_Values 0x00200
#define PROCESSOR_BASIC_INFO_COUNT ((mach_msg_type_number_t) (sizeof(processor_basic_info_data_t)/sizeof(natural_t)))
#define MALLOC_ZONE_FN_PTR(fn) fn
#define _SC_MQ_PRIO_MAX 75
#define __INT32_C(c) c
#define bcopy(src,dest,...) __builtin___memmove_chk (dest, src, __VA_ARGS__, __darwin_obsz0 (dest))
#define TK_TRUEFALSE 165
#define P_NOSHLIB 0x10000000
#define SQLITE_COPY 0
#define SimulateIOError(A) 
#define TH_STATE_WAITING 3
#define ISAUTOVACUUM (pBt->autoVacuum)
#define host_set_user_notification_port(host,port) (host_set_special_port((host), HOST_USER_NOTIFICATION_PORT, (port)))
#define MACH_VOUCHER_ATTR_TEST_STORE MACH_VOUCHER_ATTR_USER_DATA_STORE
#define CPUFAMILY_UNKNOWN 0
#define VisibleRowid(X) (((X)->tabFlags & TF_NoVisibleRowid)==0)
#define SQLITE_PROTOCOL 15
#define SQLITE_CORE 1
#define _MCONTEXT_T 
#define __SALC 0x4000
#define CPUFAMILY_ARM_XSCALE 0x53b005f5
#define VM_MEMORY_UNSHARED_PMAP 35
#define TASK_EVENTS_INFO_COUNT ((mach_msg_type_number_t) (sizeof(task_events_info_data_t) / sizeof(natural_t)))
#define MAC_OS_X_VERSION_10_15_1 101501
#define LIST_INIT(head) do { LIST_FIRST((head)) = NULL; } while (0)
#define __FLT128_DIG__ 33
#define AUDIT_USER 0x0040
#define COLFLAG_HIDDEN 0x0002
#define MPO_CONTEXT_AS_GUARD 0x01
#define __va_copy(d,s) __builtin_va_copy(d,s)
#define CPU_SUBTYPE_HPPA_ALL ((cpu_subtype_t) 0)
#define CPU_SUBTYPE_MC68030 ((cpu_subtype_t) 1)
#define VDBE_MAGIC_HALT 0x319c2973
#define SQLITE_AFF_BLOB 0x41
#define CPU_SUBTYPE_HPPA_7100 ((cpu_subtype_t) 0)
#define _SYS_TIME_H_ 
#define EP_CanBeNull 0x100000
#define NOTE_NSECONDS 0x00000004
#define KERN_MEMORY_ERROR 10
#define btodb(bytes,devBlockSize) ((unsigned)(bytes) / devBlockSize)
#define osMmap ((void*(*)(void*,size_t,int,int,int,off_t))aSyscall[22].pCurrent)
#define CPU_SUBTYPE_MC68040 ((cpu_subtype_t) 2)
#define OP_SequenceTest 115
#define MACH_RCV_INVALID_DATA 0x10004008
#define SQLITE_BLDF_UNIQUE 0x0002
#define _POSIX_THREAD_ATTR_STACKADDR 200112L
#define _PC_PATH_MAX 5
#define MACH_MSG_TRAILER_FORMAT_0_SIZE sizeof(mach_msg_format_0_trailer_t)
#define SYSTEM_CLOCK 0
#define __SAPP 0x0100
#define SF_ARCHIVED 0x00010000
#define PAGE_MASK vm_page_mask
#define OS_NONNULL2 __attribute__((__nonnull__(2)))
#define EXC_CORPSE_NOTIFY 13
#define AUDIT_TRIGGER_INITIALIZE 7
#define CHECK_PAGE(x) 
#define _INT64_T 
#define PragTyp_DATABASE_LIST 10
#define MACH_RCV_PORT_CHANGED 0x10004006
#define TK_STAR 105
#define SQLITE_ROW 100
#define host_get_atm_notification_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_ATM_NOTIFICATION_PORT, (port)))
#define ESHUTDOWN 58
#define ATTR_VOL_SETMASK 0x80002000
#define TARGET_OS_EMBEDDED 0
#define RLIM_NLIMITS 9
#define _SC_TIMER_MAX 52
#define MACH_VOUCHER_ATTR_CONTROL_FLAGS_NONE ((mach_voucher_attr_control_flags_t)0)
#define SAVEPOINT_BEGIN 0
#define OP_DropTrigger 145
#define __API_DEPRECATED_BEGIN_REP_GET_MACRO 
#define AUDIT_TRIGGER_ROTATE_USER 6
#define VM_PROT_EXECUTE_ONLY (VM_PROT_EXECUTE|VM_PROT_STRIP_READ)
#define _PC_NO_TRUNC 8
#define F_SETOWN 6
#define KERN_DUMMY 33
#define __WATCHOS_3_0 30000
#define YYNRULE 381
#define NOTE_RENAME 0x00000020
#define _SYS_SYSLIMITS_H_ 
#define VM_VOLATILE_GROUP_0 (0 << VM_VOLATILE_GROUP_SHIFT)
#define TTYDISC 0
#define VM_VOLATILE_GROUP_2 (2 << VM_VOLATILE_GROUP_SHIFT)
#define VM_VOLATILE_GROUP_3 (3 << VM_VOLATILE_GROUP_SHIFT)
#define VM_VOLATILE_GROUP_4 (4 << VM_VOLATILE_GROUP_SHIFT)
#define VM_VOLATILE_GROUP_5 (5 << VM_VOLATILE_GROUP_SHIFT)
#define VM_VOLATILE_GROUP_6 (6 << VM_VOLATILE_GROUP_SHIFT)
#define VM_VOLATILE_GROUP_7 (7 << VM_VOLATILE_GROUP_SHIFT)
#define CC_VARALPHA 5
#define HOST_KEXTD_PORT (8 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define SQLITE_OPEN_NOMUTEX 0x00008000
#define SQLITE_DROP_TEMP_VIEW 15
#define MPG_FLAGS_NONE (0x00ull)
#define SQLITE_HASH_H 
#define __GCC_ASM_FLAG_OUTPUTS__ 1
#define OE_Cascade 10
#define VM_MEMORY_REALLOC 6
#define _CS_POSIX_V6_ILP32_OFF32_CFLAGS 2
#define __CAST_AWAY_QUALIFIER(variable,qualifier,type) (type) (long)(variable)
#define VALID_THREAD_STATE_FLAVOR(x) ((x == x86_THREAD_STATE32) || (x == x86_FLOAT_STATE32) || (x == x86_EXCEPTION_STATE32) || (x == x86_DEBUG_STATE32) || (x == x86_THREAD_STATE64) || (x == x86_THREAD_FULL_STATE64) || (x == x86_FLOAT_STATE64) || (x == x86_EXCEPTION_STATE64) || (x == x86_DEBUG_STATE64) || (x == x86_THREAD_STATE) || (x == x86_FLOAT_STATE) || (x == x86_EXCEPTION_STATE) || (x == x86_DEBUG_STATE) || (x == x86_AVX_STATE32) || (x == x86_AVX_STATE64) || (x == x86_AVX_STATE) || (x == x86_AVX512_STATE32) || (x == x86_AVX512_STATE64) || (x == x86_AVX512_STATE) || (x == x86_PAGEIN_STATE) || (x == x86_INSTRUCTION_STATE) || (x == x86_LAST_BRANCH_STATE) || (x == THREAD_STATE_NONE))
#define CPU_SUBTYPE_ARM64_PTR_AUTH_VERSION(x) (((x) & CPU_SUBTYPE_ARM64_PTR_AUTH_MASK) >> 24)
#define CPU_SUBTYPE_ARM_V7 ((cpu_subtype_t) 9)
#define CPU_SUBTYPE_ARM_V8 ((cpu_subtype_t) 13)
#define EV_ERROR 0x4000
#define SQLITE_MAX_VARIABLE_NUMBER 999
#define MNT_STRICTATIME 0x80000000
#define SQLITE_ASCII 1
#define PragTyp_ENCODING 12
#define TK_AGG_COLUMN 164
#define MAXCOMLEN 16
#define MAP_TRANSLATED_ALLOW_EXECUTE 0x20000
#define __FLT_RADIX__ 2
#define _STRUCT_FP_CONTROL struct __darwin_fp_control
#define ATTR_VOL_FSTYPE 0x00000001
#define __INT_LEAST16_TYPE__ short int
#define OS_WEAK_IMPORT __attribute__((__weak_import__))
#define MEMORY_OBJECT_NULL ((memory_object_t) 0)
#define IS_LOCK_ERROR(x) ((x != SQLITE_OK) && (x != SQLITE_BUSY))
#define KERN_INVALID_KC 55
#define EXPR_FULLSIZE sizeof(Expr)
#define ATTR_CMN_GRPUUID 0x01000000
#define TIOCPKT_START 0x08
#define OP_MustBeInt 15
#define _IOWR(g,n,t) _IOC(IOC_INOUT, (g), (n), sizeof(t))
#define TERM_VIRTUAL 0x02
#define _U_INT32_T 
#define PragTyp_MMAP_SIZE 25
#define _POSIX_ARG_MAX 4096
#define MADV_WILLNEED POSIX_MADV_WILLNEED
#define __OS_CONCAT(x,y) x ## y
#define BUS_ADRALN 1
#define BUFSIZ 1024
#define _BSD_I386__TYPES_H_ 
#define SQLITE_SYSTEM_MALLOC 1
#define A_GETSINFO_ADDR 32
#define CLOCK_MONOTONIC_RAW _CLOCK_MONOTONIC_RAW
#define EXC_I386_SGL 1
#define TAILQ_CHECK_NEXT(elm,field) 
#define _SYS_MMAN_H_ 
#define HOST_VM_INFO 2
#define MACH_SEND_KERNEL 0x00400000
#define TK_RANGE 89
#define osSetPosixAdvisoryLock(h,x,t) osFcntl(h,F_SETLK,x)
#define OP_VRename 165
#define EOVERFLOW 84
#define CPUFAMILY_INTEL_HASWELL 0x10b282dc
#define S_IRUSR 0000400
#define UCHAR_MAX (SCHAR_MAX * 2 + 1)
#define __IPHONE_4_0 40000
#define mach_vm_round_page(x) (((mach_vm_offset_t)(x) + vm_page_mask) & ~((signed)vm_page_mask))
#define __IPHONE_4_2 40200
#define __IPHONE_4_3 40300
#define DBFLAG_SchemaChange 0x0001
#define SHARED_SIZE 510
#define YYWILDCARD 98
#define __MISMATCH_TAGS_POP 
#define FSOPT_NOINMEMUPDATE 0x00000002
#define CPU_TYPE_ANY ((cpu_type_t) -1)
#define __sferror(p) (((p)->_flags & __SERR) != 0)
#define SQLITE_FullFSync 0x00000008
#define TK_INSTEAD 65
#define TK_AUTOINCR 122
#define host_get_kextd_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_KEXTD_PORT, (port)))
#define __DARWIN_64_BIT_INO_T 1
#define STAT_GET_STAT1 0
#define MS_DEACTIVATE 0x0008
#define SLIST_FOREACH_PREVPTR(var,varp,head,field) for ((varp) = &SLIST_FIRST((head)); ((var) = *(varp)) != NULL; (varp) = &SLIST_NEXT((var), field))
#define PENDING_LOCK 3
#define OPFLAG_LASTROWID 0x20
#define SF_NOUNLINK 0x00100000
#define _POSIX2_EQUIV_CLASS_MAX 2
#define W_OK (1<<1)
#define EXP754 (((u64)0x7ff)<<52)
#define _POSIX2_COLL_WEIGHTS_MAX 2
#define WAL_SYNC_FLAGS(X) ((X)&0x03)
#define SQLITE_MAGIC_OPEN 0xa029a697
#define MAC_OS_VERSION_11_0 110000
#define KIPC_MAX_LINKHDR 4
#define CC_PERCENT 22
#define CPU_TYPE_ARM ((cpu_type_t) 12)
#define MACH_MSG_TIMEOUT_NONE ((mach_msg_timeout_t) 0)
#define VM_MEMORY_APPLICATION_SPECIFIC_16 255
#define EPROTO 100
#define PragTyp_INTEGRITY_CHECK 19
#define MADV_ZERO_WIRED_PAGES 6
#define _EXECUTE_OK (1<<11)
#define TK_OFFSET 69
#define KERN_INVALID_LEDGER 33
#define __PTHREAD_SIZE__ 8176
#define VM_MEMORY_COREGRAPHICS_MISC VM_MEMORY_COREGRAPHICS
#define INT_MAX __INT_MAX__
#define likely(X) (X)
#define ULLONG_MAX (LLONG_MAX * 2ULL + 1ULL)
#define OID_AUTO (-1)
#define POLL_OUT 2
#define CTL_UNSPEC 0
#define SQLITE_PREPARE_PERSISTENT 0x01
#define _POSIX_MONOTONIC_CLOCK (-1)
#define _SC_2_PBS_ACCOUNTING 60
#define SQLITE_CONSTRAINT_CHECK (SQLITE_CONSTRAINT | (1<<8))
#define SQLITE_PRINTF_MALLOCED 0x04
#define YY_MIN_SHIFTREDUCE 790
#define __UINT_FAST32_MAX__ 0xffffffffU
#define IsStat4 0
#define __INT_FAST8_TYPE__ signed char
#define VM_SYNC_INVALIDATE ((vm_sync_t) 0x04)
#define MACH_SEND_INVALID_TRAILER 0x10000011
#define __API_DEPRECATED_WITH_REPLACEMENT_END 
#define FP_RND_UP 2
#define _STDINT_H_ 
#define _POSIX_TRACE_INHERIT (-1)
#define A_SETPMASK 25
#define NC_UEList 0x0080
#define CLOCK_UPTIME_RAW_APPROX _CLOCK_UPTIME_RAW_APPROX
#define TARGET_OS_IOS 0
#define _SC_HOST_NAME_MAX 72
#define OP_Cast 85
#define _PC_SYNC_IO 25
#define SIGWINCH 28
#define _SC_SEM_NSEMS_MAX 49
#define WO_EQUIV 0x0800
#define __SNBF 0x0002
#define KEVENT_FLAG_IMMEDIATE 0x000001
#define _CS_XBS5_ILP32_OFF32_LIBS 22
#define MACH_RCV_OVERWRITE 0x00000000
#define HOST_VM_INFO64_REV0_COUNT ((mach_msg_type_number_t) (HOST_VM_INFO64_REV1_COUNT - 14))
#define FSOPT_PACK_INVAL_ATTRS 0x00000008
#define MEMORY_OBJECT_RETURN_ANYTHING 3
#define P_DIRTY_BUSY 0x00000040
#define MACH_MSG_TYPE_MOVE_SEND_ONCE 18
#define WAL_ALL_BUT_WRITE 1
#define VQ_VERYLOWDISK 0x0200
#define BTREE_OMIT_JOURNAL 1
#define SIOCGIF6LOWPAN _IOWR('i', 197, struct ifreq)
#define __IPHONE_12_2 120200
#define __IPHONE_12_3 120300
#define __IPHONE_12_4 120400
#define RTLD_DEFAULT ((void *) -2)
#define E2BIG 7
#define PROCESSOR_TEMPERATURE 0x10000002
#define CPU_SUBTYPE_MC88100 ((cpu_subtype_t) 1)
#define _MACH_VM_PURGABLE_H_ 
#define UNIXFILE_RDONLY 0x02
#define MATTR_VAL_CACHE_SYNC 9
#define W_STOPCODE(sig) ((sig) << 8 | _WSTOPPED)
#define EXC_MASK_MACH_SYSCALL (1 << EXC_MACH_SYSCALL)
#define SQLITE_IOERR_BEGIN_ATOMIC (SQLITE_IOERR | (29<<8))
#define INT_MIN (-INT_MAX - 1)
#define CPU_SUBTYPE_MC88110 ((cpu_subtype_t) 2)
#define KERN_INVALID_TASK 16
#define __OS_STRINGIFY(s) #s
#define SQLITE_IOCAP_ATOMIC 0x00000001
#define BTREE_AUTOVACUUM_NONE 0
#define __UINT_LEAST32_MAX__ 0xffffffffU
#define __PTHREAD_ATTR_SIZE__ 56
#define NOT_WITHIN 0
#define _PC_REC_XFER_ALIGN 23
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define SQLITE_TESTCTRL_RESERVE 14
#define OPFLAG_AUXDELETE 0x04
#define TK_VIEW 79
#define sqlite3ColumnPropertiesFromName(T,C) 
#define x86_AVX512_STATE32_COUNT ((mach_msg_type_number_t) (sizeof(x86_avx512_state32_t)/sizeof(unsigned int)))
#define TERM_DYNAMIC 0x01
#define HAVE_PREAD 1
#define __INT_LEAST8_TYPE__ signed char
#define CTL_DEBUG 5
#define VQ_ASSIST 0x0040
#define ENOTDIR 20
#define _FSOBJ_ID_T 
#define TIOCMODG _IOR('t', 3, int)
#define ILL_BADSTK 8
#define KERN_ARGMAX 8
#define __SIZEOF_POINTER__ 8
#define KIPC_NMBCLUSTERS 9
#define MACH_SEND_MSG 0x00000001
#define ECONNRESET 54
#define SQLITE_MAX_SYMLINKS 100
#define JT_ERROR 0x0040
#define BTCF_ValidOvfl 0x04
#define AUDIT_TRIGGER_NO_SPACE 5
#define _SC_2_VERSION 17
#define READMARK_NOT_USED 0xffffffff
#define MACH_PORT_SRIGHTS_NONE 0
#define etSTRING 5
#define sqlite3VdbeAssertAbortable(V) 
#define ENXIO 6
#define _SC_THREAD_CPUTIME 84
#define PGHDR_CLEAN 0x001
#define KERN_SPECULATIVE_READS 64
#define VOL_CAP_FMT_CASE_PRESERVING 0x00000200
#define __FLT64_HAS_QUIET_NAN__ 1
#define AUDIT_GROUP 0x0080
#define _SECURE__STDIO_H_ 
#define TRACE(X) 
#define CTLTYPE_QUAD 4
#define PDROP 0x400
#define ATTR_CMN_CHGTIME 0x00000800
#define NC_AllowWin 0x4000
#define MACH_MSGH_BITS_PORTS_MASK (MACH_MSGH_BITS_REMOTE_MASK | MACH_MSGH_BITS_LOCAL_MASK | MACH_MSGH_BITS_VOUCHER_MASK)
#define TASK_SUPPRESSION_POLICY 3
#define SQLITE_IOERR_WRITE (SQLITE_IOERR | (3<<8))
#define SQLITE_SKIP_UTF8(zIn) { if( (*(zIn++))>=0xc0 ){ while( (*zIn & 0xc0)==0x80 ){ zIn++; } } }
#define INCRINIT_ROOT 2
#define L_XTND SEEK_END
#define __PTRDIFF_T 
#define X86_DEBUG_STATE32_COUNT x86_DEBUG_STATE32_COUNT
#define CODEC2(P,D,N,X,E,O) O=(char*)D
#define btreeIntegrity(p) assert( p->pBt->inTransaction!=TRANS_NONE || p->pBt->nTransaction==0 ); assert( p->pBt->inTransaction>=p->inTrans );
#define OPFLG_OUT3 0x20
#define HOST_ATM_NOTIFICATION_PORT (14 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define MACH_PORT_QLIMIT_LARGE (1024)
#define TK_TRANSACTION 6
#define POLICY_FIFO_BASE_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_fifo_base)/sizeof(integer_t)))
#define ___POSIX_C_DEPRECATED_STARTING_199209L 
#define FAPPEND O_APPEND
#define O_ALERT 0x20000000
#define SM_SHARED 4
#define wsdAutoext sqlite3Autoext
#define TIOCM_SR 0020
#define SQLITE_OPEN_READWRITE 0x00000002
#define __BEGIN_DECLS 
#define __LDBL_MANT_DIG__ 64
#define _STRUCT_OPMASK_REG struct __darwin_opmask_reg
#define HOST_MAX_SPECIAL_KERNEL_PORT 7
#define HOST_AUTOMOUNTD_PORT (4 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define SQLITE_IOCAP_UNDELETABLE_WHEN_OPEN 0x00000800
#define __DARWIN_ONLY_64_BIT_INO_T 0
#define __FLT64_HAS_INFINITY__ 1
#define MEMORY_OBJECT_RETURN_ALL 2
#define host_get_closured_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_CLOSURED_PORT, (port)))
#define _MACH_MEMORY_OBJECT_TYPES_H_ 
#define MACH_MSG_GUARD_FLAGS_UNGUARDED_ON_SEND 0x0002
#define POLL_HUP 6
#define VM_INHERIT_NONE ((vm_inherit_t) 2)
#define A_SETKAUDIT 30
#define KERN_CLASSICHANDLER KERN_EXEC
#define YY_REDUCE_MAX (1590)
#define MACH_RCV_TOO_LARGE 0x10004004
#define RLIMIT_NOFILE 8
#define MACH_PORT_TYPE_PORT_SET MACH_PORT_TYPE(MACH_PORT_RIGHT_PORT_SET)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_3(x) x
#define _STRUCT_X86_PAGEIN_STATE struct __x86_pagein_state
#define _XOPEN_REALTIME (-1)
#define THREAD_MAX_SPECIAL_PORT THREAD_READ_PORT
#define MEMORY_OBJECT_TERMINATE_IDLE 0x1
#define AUDIT_AHLT 0x0002
#define KEVENT_FLAG_ERROR_EVENTS 0x000002
#define FILENAME_MAX 1024
#define TAILQ_INSERT_HEAD(head,elm,field) do { TAILQ_CHECK_HEAD(head, field); if ((TAILQ_NEXT((elm), field) = TAILQ_FIRST((head))) != NULL) TAILQ_FIRST((head))->field.tqe_prev = &TAILQ_NEXT((elm), field); else (head)->tqh_last = &TAILQ_NEXT((elm), field); TAILQ_FIRST((head)) = (elm); (elm)->field.tqe_prev = &TAILQ_FIRST((head)); QMD_TRACE_HEAD(head); QMD_TRACE_ELEM(&(elm)->field); } while (0)
#define MEMORY_OBJECT_ATTRIBUTE_INFO 14
#define OS_INLINE static __inline__
#define vdbeSorterWorkDebug(x,y) 
#define __DARWIN_OSSwapInt32(x) (__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt32(x) : _OSSwapInt32(x))
#define A_OLDGETQCTRL 6
#define TASK_POWER_INFO 21
#define MACH_RCV_HEADER_ERROR 0x1000400b
#define _SYS__PTHREAD_TYPES_H_ 
#define NOTE_EXITSTATUS 0x04000000
#define SQLITE_DEFAULT_WAL_AUTOCHECKPOINT 1000
#define FALSE 0
#define QOS_MIN_RELATIVE_PRIORITY (-15)
#define MAP_MEM_LEDGER_TAGGED 0x002000
#define __API_DEPRECATED_END 
#define SIOCGIFPSRCADDR _IOWR('i', 63, struct ifreq)
#define OP_Int64 71
#define __UINTPTR_MAX__ 0xffffffffffffffffUL
#define MNT_CMDFLAGS (MNT_UPDATE|MNT_NOBLOCK|MNT_RELOAD|MNT_FORCE)
#define __volatile volatile
#define p_forw p_un.p_st1.__p_forw
#define ATTR_VOL_ATTRIBUTES 0x40000000
#define SLIPDISC 4
#define sqlite3_column_origin_name16 0
#define L_SET SEEK_SET
#define __MAC_10_12_1 101201
#define __MAC_10_12_2 101202
#define VM_MEMORY_MALLOC_LARGE_REUSABLE 8
#define __MAC_10_12_4 101204
#define _CLOCK_T 
#define P_TRACED 0x00000800
#define PTF_ZERODATA 0x02
#define AUDIT_CNT 0x0001
#define VdbeCoverage(v) 
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define TK_ANALYZE 30
#define CC_SPACE 7
#define findCellPastPtr(P,I) ((P)->aDataOfst + ((P)->maskPage & get2byteAligned(&(P)->aCellIdx[2*(I)])))
#define HOST_FILECOORDINATIOND_PORT (23 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define INT_FAST32_MAX INT32_MAX
#define MCL_FUTURE 0x0002
#define SQLITE_IOCAP_IMMUTABLE 0x00002000
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_2(x) 
#define TK_FAIL 42
#define __FLT64X_MAX_EXP__ 16384
#define TAILQ_CONCAT(head1,head2,field) do { if (!TAILQ_EMPTY(head2)) { *(head1)->tqh_last = (head2)->tqh_first; (head2)->tqh_first->field.tqe_prev = (head1)->tqh_last; (head1)->tqh_last = (head2)->tqh_last; TAILQ_INIT((head2)); QMD_TRACE_HEAD(head1); QMD_TRACE_HEAD(head2); } } while (0)
#define __UINT_FAST64_TYPE__ long long unsigned int
#define MACH_VM_MIN_ADDRESS ((mach_vm_offset_t) 0)
#define EBADRPC 72
#define EXC_BAD_ACCESS 1
#define YY_REDUCE_MIN (-256)
#define EXIT_SUCCESS 0
#define _STRUCT_MCONTEXT_AVX512_32 struct __darwin_mcontext_avx512_32
#define VM_MEMORY_COREGRAPHICS_XALLOC 58
#define UINT_FAST8_MAX UINT8_MAX
#define __INT_MAX__ 0x7fffffff
#define KERNEL_SECURITY_TOKEN_VALUE { {0, 1} }
#define F_GETFD 1
#define OP_Halt 69
#define INT8_MIN -128
#define WAIT_ANY (-1)
#define VM_MEMORY_CGIMAGE 52
#define MACH_MSG_TYPE_PORT_NAME 15
#define CPU_SUBTYPE_ARM64_32_V8 ((cpu_subtype_t) 1)
#define TASK_SECURITY_TOKEN 13
#define SQLITE_FUNC_DIRECT 0x00080000
#define LIST_EMPTY(head) ((head)->lh_first == NULL)
#define OP_IdxGT 38
#define TASK_FLAGS_INFO 28
#define LLONG_MAX __LONG_LONG_MAX__
#define SLIST_REMOVE_HEAD(head,field) do { SLIST_FIRST((head)) = SLIST_NEXT(SLIST_FIRST((head)), field); } while (0)
#define F_GETFL 3
#define MACH_MSG_IPC_SPACE 0x00002000
#define _STRUCT_MCONTEXT_AVX512_64 struct __darwin_mcontext_avx512_64
#define MNT_DOVOLFS 0x00008000
#define stpcpy(dest,...) __builtin___stpcpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define __INT64_TYPE__ long long int
#define SQLITE_EnableTrigger 0x00040000
#define MNT_NOEXEC 0x00000004
#define TARGET_CPU_MIPS 0
#define SQLITE_FUNC_HASH_SZ 23
#define round_page_kernel(x) trunc_page_kernel((x) + vm_kernel_page_mask)
#define _SC_AIO_PRIO_DELTA_MAX 44
#define VDBE_DISPLAY_P4 1
#define HOST_RESOURCE_SIZES 4
#define _SC_ADVISORY_INFO 65
#define S_IRGRP 0000040
#define CPU_SUBTYPE_CELERON_MOBILE CPU_SUBTYPE_INTEL(7, 7)
#define CMP_MACH_TIMESPEC(t1,t2) ((t1)->tv_sec > (t2)->tv_sec ? (long) +NSEC_PER_SEC : ((t1)->tv_sec < (t2)->tv_sec ? (long) -NSEC_PER_SEC : (t1)->tv_nsec - (t2)->tv_nsec))
#define TIOCPKT _IOW('t', 112, int)
#define ATTR_CMN_GEN_COUNT 0x00080000
#define SQLITE_OPEN_FULLMUTEX 0x00010000
#define TK_CURRENT 85
#define __header_inline extern __inline __attribute__((__gnu_inline__))
#define KERN_KDWRITEMAP 18
#define SQLITE_IOERR_VNODE (SQLITE_IOERR | (27<<8))
#define SQLITE_VERSION "3.30.1"
#define OP_SeekGE 24
#define LEDGER_LIMIT_INFINITY ((ledger_amount_t)((1ULL << 63) - 1))
#define SQLITE_MAX_MMAP_SIZE 0x7fff0000
#define _POSIX_V6_ILP32_OFF32 __ILP32_OFF32
#define percent_rankFinalizeFunc percent_rankValueFunc
#define UINT16_TYPE unsigned short int
#define ATTR_FORK_SETMASK 0x00000000
#define PragTyp_FUNCTION_LIST 15
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define host_set_iocompressionstats_port(host,port) (host_set_special_port((host), HOST_IOCOMPRESSIONSTATS_PORT, (port)))
#define TARGET_CPU_PPC64 0
#define INT_FAST32_MIN INT32_MIN
#define ATTR_CMN_NAME 0x00000001
#define SF_Expanded 0x00040
#define EDQUOT 69
#define MNT_SYNCHRONOUS 0x00000002
#define STDOUT_FILENO 1
#define HOST_UNFREED_PORT (10 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define TASK_BASIC_INFO_32_COUNT (sizeof(task_basic_info_32_data_t) / sizeof(natural_t))
#define VM_MEMORY_ROSETTA_INDIRECT_BRANCH_MAP 232
#define MACH_VOUCHER_ATTR_KEY_NONE ((mach_voucher_attr_key_t)0)
#define TABLDISC 3
#define SQLITE_SCANSTAT_NLOOP 0
#define sqlite3ParserCTX_FETCH Parse *pParse=yypParser->pParse;
#define SHARED_FIRST (PENDING_BYTE+2)
#define P_DISABLE_ASLR 0x00001000
#define CTL_DEBUG_VALUE 1
#define NOTE_LOWAT 0x00000001
#define isset(a,i) (((unsigned char *)(a))[(i)/NBBY] & (1u<<((i)%NBBY)))
#define STAILQ_EMPTY(head) ((head)->stqh_first == NULL)
#define FOOTPRINT_INTERVAL_RESET 0x1
#define BITVEC_NBIT (BITVEC_NELEM*BITVEC_SZELEM)
#define PAGER_MAX_PGNO 2147483647
#define EPROCUNAVAIL 76
#define SRT_Output 9
#define _POSIX_THREAD_PRIO_INHERIT (-1)
#define AQ_HIWATER 100
#define OP_Sequence 120
#define LLONG_MIN (-LLONG_MAX - 1LL)
#define host_set_lockd_port(host,port) (host_set_special_port((host), HOST_LOCKD_PORT, (port)))
#define OP_SeekLE 23
#define TIOCM_CD TIOCM_CAR
#define SIOCGIFBRDADDR _IOWR('i', 35, struct ifreq)
#define OP_SeekLT 22
#define NOTE_FORK 0x40000000
#define SIGTSTP 18
#define _MACH_VM_STATISTICS_H_ 
#define _MACH_CLOCK_TYPES_H_ 
#define AUDIT_ZONENAME 0x1000
#define sqliteHashData(E) ((E)->data)
#define F_GETLKPID 66
#define _POSIX_SEMAPHORES (-1)
#define __ATOMIC_RELAXED 0
#define VM_MEMORY_MALLOC_NANO 11
#define __DBL_EPSILON__ ((double)2.22044604925031308084726333618164062e-16L)
#define _STDDEF_H 
#define CURTYPE_VTAB 2
#define PTHREAD_PROCESS_PRIVATE 2
#define MAP_MEM_FLAGS_USER ( MAP_MEM_PURGABLE_KERNEL_ONLY | MAP_MEM_GRAB_SECLUDED | MAP_MEM_ONLY | MAP_MEM_NAMED_CREATE | MAP_MEM_PURGABLE | MAP_MEM_NAMED_REUSE | MAP_MEM_USE_DATA_ADDR | MAP_MEM_VM_COPY | MAP_MEM_VM_SHARE | MAP_MEM_LEDGER_TAGGED | MAP_MEM_4K_DATA_ADDR)
#define SQLITE_ForeignKeys 0x00004000
#define EFTYPE 79
#define YYFALLBACK 1
#define BC_SCALE_MAX 99
#define TK_FILTER 161
#define TK_DO 61
#define ATTR_VOL_RESERVED_SIZE 0x20000000
#define SLIST_REMOVE_AFTER(elm,field) do { SLIST_NEXT(elm, field) = SLIST_NEXT(SLIST_NEXT(elm, field), field); } while (0)
#define SQLITE_OPEN_CREATE 0x00000004
#define x86_FLOAT_STATE_COUNT ((mach_msg_type_number_t) (sizeof(x86_float_state_t)/sizeof(unsigned int)))
#define HOST_CONTAINERD_PORT (18 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define _INT8_T 
#define SQLITE_OS_UNIX 1
#define TERM_NOPARTIDX 0x2000
#define __INT_LEAST32_TYPE__ int
#define SQLITE_DEFAULT_SORTERREF_SIZE 0x7fffffff
#define CC_EQ 14
#define osOpen ((int(*)(const char*,int,int))aSyscall[0].pCurrent)
#define __DARWIN_1050(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050)
#define TK_SAVEPOINT 13
#define PAGER_GET_READONLY 0x02
#define ENOLCK 77
#define IPC_SPACE_READ_NULL ((ipc_space_read_t) 0)
#define UF_IMMUTABLE 0x00000002
#define BTCURSOR_MAX_DEPTH 20
#define osFstat ((int(*)(int,struct stat*))aSyscall[5].pCurrent)
#define REQUESTED_TRAILER_SIZE_NATIVE(y) ((mach_msg_trailer_size_t) ((GET_RCV_ELEMENTS(y) == MACH_RCV_TRAILER_NULL) ? sizeof(mach_msg_trailer_t) : ((GET_RCV_ELEMENTS(y) == MACH_RCV_TRAILER_SEQNO) ? sizeof(mach_msg_seqno_trailer_t) : ((GET_RCV_ELEMENTS(y) == MACH_RCV_TRAILER_SENDER) ? sizeof(mach_msg_security_trailer_t) : ((GET_RCV_ELEMENTS(y) == MACH_RCV_TRAILER_AUDIT) ? sizeof(mach_msg_audit_trailer_t) : ((GET_RCV_ELEMENTS(y) == MACH_RCV_TRAILER_CTX) ? sizeof(mach_msg_context_trailer_t) : ((GET_RCV_ELEMENTS(y) == MACH_RCV_TRAILER_AV) ? sizeof(mach_msg_mac_trailer_t) : sizeof(mach_msg_max_trailer_t))))))))
#define etFLOAT 1
#define MNT_RDONLY 0x00000001
#define CC_GT 13
#define FIXINC_WRAP_MATH_H_MATH_EXCEPTION 1
#define explainSetInteger(a,b) a = b
#define SQLITE_VDBE_H 
#define MACH_SEND_IN_PROGRESS 0x10000001
#define _XOPEN_UNIX (1)
#define KERN_ALREADY_WAITING 30
#define isgreaterequal(x,y) __builtin_isgreaterequal((x),(y))
#define __FLT64_NORM_MAX__ 1.79769313486231570814527423731704357e+308F64
#define MAX_ROWID (i64)( (((u64)0x7fffffff)<<32) | (u64)0xffffffff )
#define KERN_SEMAPHORE_DESTROYED 42
#define MACH_VOUCHER_ATTR_KEY_ATM ((mach_voucher_attr_key_t)1)
#define _SC_LOGIN_NAME_MAX 73
#define SSLEEP 3
#define ferror_unlocked(p) __sferror(p)
#define vfsList GLOBAL(sqlite3_vfs *, vfsList)
#define S_IFWHT 0160000
#define MACH_MSGH_BITS_USED 0xb01f1f1fU
#define CC_ID 2
#define WHERE_ORDERBY_LIMIT 0x0800
#define MADV_SEQUENTIAL POSIX_MADV_SEQUENTIAL
#define __UINT_FAST8_TYPE__ unsigned char
#define CHAR_BIT __CHAR_BIT__
#define SQLITE_FCNTL_HAS_MOVED 20
#define _STRUCT_X86_AVX512_STATE32 struct __darwin_i386_avx512_state
#define TASK_VM_INFO_REV0_COUNT ((mach_msg_type_number_t) (TASK_VM_INFO_REV1_COUNT - 2))
#define TIOCM_LE 0001
#define MACH_MSGH_BITS_ZERO 0x00000000
#define _SYS_FCNTL_H_ 
#define CC_SLASH 16
#define A_SETSTAT 13
#define OS_SENTINEL __attribute__((__sentinel__))
#define WHERE_UNQ_WANTED 0x00010000
#define TASK_ID_TOKEN_NULL ((task_id_token_t) 0)
#define PragTyp_LOCK_PROXY_FILE 22
#define PTRMAP_ISPAGE(pBt,pgno) (PTRMAP_PAGENO((pBt),(pgno))==(pgno))
#define A_GETPINFO_ADDR 28
#define CC_LP 17
#define ENOTSUP 45
#define CC_LT 12
#define __AVAILABILITY__ 
#define SQLITE_IOCAP_SEQUENTIAL 0x00000400
#define RENAME_SWAP 0x00000002
#define VM_FLAGS_OVERWRITE 0x4000
#define __kpi_unavailable 
#define __TYPES_H_ 
#define SQLITE_TESTCTRL_ASSERT 12
#define MACH_PORT_RIGHT_DEAD_NAME ((mach_port_right_t) 4)
#define TASK_CATEGORY_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (task_category_policy_data_t) / sizeof (integer_t)))
#define __FXSR__ 1
#define __WATCHOS_4_1 40100
#define __WATCHOS_4_2 40200
#define CLD_DUMPED 3
#define CPU_TYPE_I860 ((cpu_type_t) 15)
#define P_THCWD 0x01000000
#define RESERVED_LOCK 2
#define PTHREAD_ERRORCHECK_MUTEX_INITIALIZER {_PTHREAD_ERRORCHECK_MUTEX_SIG_init, {0}}
#define __DARWIN_VERS_1050 1
#define SQLITE_DBSTATUS_LOOKASIDE_MISS_SIZE 5
#define pcacheTrace(X) 
#define ATTR_VOL_DIRCOUNT 0x00000400
#define sqlite3VdbeVerifyAbortable(A,B) 
#define OS_NONNULL1 __attribute__((__nonnull__(1)))
#define __API_UNAVAILABLE_GET_MACRO(...) 
#define OS_NONNULL3 __attribute__((__nonnull__(3)))
#define OS_NONNULL4 __attribute__((__nonnull__(4)))
#define OS_NONNULL5 __attribute__((__nonnull__(5)))
#define OS_NONNULL6 __attribute__((__nonnull__(6)))
#define OS_NONNULL7 __attribute__((__nonnull__(7)))
#define OS_NONNULL8 __attribute__((__nonnull__(8)))
#define OS_NONNULL9 __attribute__((__nonnull__(9)))
#define CIRCLEQ_CHECK_HEAD(head,field) 
#define MACH_RCV_TIMED_OUT 0x10004003
#define MAX_FATAL_kGUARD_EXC_CODE (1u << 7)
#define SQLITE_OK 0
#define SQLITE_CoverIdxScan 0x0020
#define P_NOREMOTEHANG 0x80000000
#define TIOCM_RI TIOCM_RNG
#define CPUSUBFAMILY_ARM_HG 2
#define VM_PROT_COPY ((vm_prot_t) 0x10)
#define CPUSUBFAMILY_ARM_HP 1
#define CPUSUBFAMILY_ARM_HS 4
#define TIOCM_ST 0010
#define RTLD_GLOBAL 0x8
#define _SYS_SYSCTL_H_ 
#define SQLITE_NOINLINE __attribute__((noinline))
#define SQLITE3_H 
#define _POSIX_THREAD_PRIO_PROTECT (-1)
#define NOTE_VM_PRESSURE 0x80000000
#define SQLITE_STMTSTATUS_RUN 6
#define CC_RP 18
#define OP_ParseSchema 141
#define OP_OpenAutoindex 111
#define __INTMAX_MAX__ 0x7fffffffffffffffL
#define ___POSIX_C_DEPRECATED_STARTING_200112L 
#define MACH_VOUCHER_ATTR_CONTROL_NULL ((mach_voucher_attr_control_t) 0)
#define HOST_CALENDAR_SET_REPLYID 951
#define host_get_user_notification_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_USER_NOTIFICATION_PORT, (port)))
#define TK_COLUMNKW 60
#define _CS_XBS5_ILP32_OFF32_CFLAGS 20
#define TIOCMBIC _IOW('t', 107, int)
#define MADV_FREE_REUSABLE 7
#define CPU_SUBTYPE_UVAXIII ((cpu_subtype_t) 12)
#define SQLITE_CONFIG_PAGECACHE 7
#define PROC_FLAG_IOS_IMPPROMOTION 0x80000
#define TIOCMBIS _IOW('t', 108, int)
#define SQLITE_FUNC_AFFINITY 0x4000
#define SIOCSIFGENERIC _IOW('i', 57, struct ifreq)
#define PSWP 0
#define MALLOC_INTROSPECT_TBL_PTR(ptr) ptr
#define TASK_AUDIT_TOKEN 15
#define MACH_TASK_BASIC_INFO_COUNT (sizeof(mach_task_basic_info_data_t) / sizeof(natural_t))
#define THREAD_STATE_NONE 13
#define __LONG_WIDTH__ 64
#define __DBL_MIN__ ((double)2.22507385850720138309023271733240406e-308L)
#define PCATCH 0x100
#define ATTR_DIR_IOBLOCKSIZE 0x00000010
#define SQLITE_QUERY_PLANNER_LIMIT_INCR 1000
#define VQ_LOWDISK 0x0004
#define POLICY_RR_INFO_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_rr_info)/sizeof(integer_t)))
#define __DARWIN_ALIGNBYTES (sizeof(__darwin_size_t) - 1)
#define FPS_IE 0x0001
#define CPUFAMILY_ARM_HURRICANE 0x67ceee93
#define TIOCCONS _IOW('t', 98, int)
#define EXC_I386_SGLSTP 1
#define __IPHONE_5_0 50000
#define __IPHONE_5_1 50100
#define PPPDISC 5
#define HOST_SYSDIAGNOSE_PORT (16 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define MAP_RENAME 0x0020
#define OS_MALLOC __attribute__((__malloc__))
#define MEMORY_OBJECT_RESPECT_CACHE 0x2
#define EMFILE 24
#define NFSV3_MAX_FH_SIZE 64
#define __AVAILABILITY_INTERNAL_UNAVAILABLE __attribute__((unavailable))
#define STAT_GET_ROWID 1
#define VM_REGION_SUBMAP_INFO_V0_COUNT_64 ((mach_msg_type_number_t) (VM_REGION_SUBMAP_INFO_V0_SIZE / sizeof (natural_t)))
#define M_1_PI 0.318309886183790671537767526745028724
#define SA_NODEFER 0x0010
#define TIOCTIMESTAMP _IOR('t', 89, struct timeval)
#define __DARWIN_SUF_64_BIT_INO_T "$INODE64"
#define SQLITE_DEFAULT_LOOKASIDE 1200,100
#define TASK_VM_INFO_COUNT ((mach_msg_type_number_t) (sizeof (task_vm_info_data_t) / sizeof (natural_t)))
#define i386_THREAD_STATE 1
#define VOL_CAP_FMT_DECMPFS_COMPRESSION 0x00010000
#define JT_LEFT 0x0008
#define CPU_SUBTYPE_MC98000_ALL ((cpu_subtype_t) 0)
#define WINDOW_ENDING_INT 1
#define OP_VFilter 9
#define task_get_task_access_port(task,port) (task_get_special_port((task), TASK_ACCESS_PORT, (port)))
#define _KAUTH_CRED_T 
#define OP_SorterSort 34
#define WO_SINGLE 0x01ff
#define IOPOL_VFS_IGNORE_PERMISSIONS_ON 1
#define __FLT_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F
#define EXC_I386_ENOEXTFLT 32
#define KIPC_SOQLIMITCOMPAT 10
#define AT_EACCESS 0x0010
#define SF_Converted 0x10000
#define ENOTEMPTY 66
#define TAILQ_LAST(head,headname) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH (*(((struct headname *)((head)->tqh_last))->tqh_last)) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define PAGE_MIN_SHIFT 12
#define MACH_VOUCHER_ATTR_KEY_TEST ((mach_voucher_attr_key_t)8)
#define VM_FLAGS_USER_MAP (VM_FLAGS_USER_ALLOCATE | VM_FLAGS_RETURN_4K_DATA_ADDR | VM_FLAGS_RETURN_DATA_ADDR)
#define SQLITE_DEFAULT_WAL_SYNCHRONOUS SQLITE_DEFAULT_SYNCHRONOUS
#define SQLITE_SYSAPI 
#define VM_REGION_TOP_INFO 12
#define WORD_BIT 32
#define WHERE_USE_LIMIT 0x4000
#define MNT_NOWAIT 2
#define NOTE_FFCOPY 0xc0000000
#define S_IRWXG 0000070
#define MEMORY_OBJECT_RETURN_DIRTY 1
#define VdbeFrameMem(p) ((Mem *)&((u8 *)p)[ROUND8(sizeof(VdbeFrame))])
#define SQLITE_LIMIT_LIKE_PATTERN_LENGTH 8
#define JOURNAL_PG_SZ(pPager) ((pPager->pageSize) + 8)
#define _MACH_BOOLEAN_H_ 
#define VM_PAGE_QUERY_PAGE_CS_TAINTED 0x200
#define PAGER_OPEN 0
#define CPU_TYPE_MC98000 ((cpu_type_t) 10)
#define _STRUCT_MCONTEXT_AVX32 struct __darwin_mcontext_avx32
#define osFcntl ((int(*)(int,int,...))aSyscall[7].pCurrent)
#define INTMAX_C(v) (v ## L)
#define ILL_PRVOPC 3
#define TIOCSCONS _IO('t', 99)
#define EADDRINUSE 48
#define SIOCSIFADDR _IOW('i', 12, struct ifreq)
#define TIOCSWINSZ _IOW('t', 103, struct winsize)
#define __NULLABILITY_COMPLETENESS_POP 
#define SQLITE_CONFIG_GETPCACHE2 19
#define WCOREFLAG 0200
#define TK_ROWS 76
#define MAX(A,B) ((A)>(B)?(A):(B))
#define SIOCSIFCAP _IOW('i', 90, struct ifreq)
#define POLL_IN 1
#define KERN_OSRELEASE 2
#define _STRUCT_MCONTEXT_AVX64 struct __darwin_mcontext_avx64
#define timeradd(tvp,uvp,vvp) do { (vvp)->tv_sec = (tvp)->tv_sec + (uvp)->tv_sec; (vvp)->tv_usec = (tvp)->tv_usec + (uvp)->tv_usec; if ((vvp)->tv_usec >= 1000000) { (vvp)->tv_sec++; (vvp)->tv_usec -= 1000000; } } while (0)
#define PAGER_JOURNALMODE_MEMORY 4
#define KERN_KDSETUP 6
#define SI_TIMER 0x10003
#define UF_SETTABLE 0x0000ffff
#define SQLITE_ALLOW_COVERING_INDEX_SCAN 1
#define BTS_NO_WAL 0x0020
#define _I386__LIMITS_H_ 
#define KERN_SAFEBOOT 66
#define __IPHONE_13_0 130000
#define FASYNC O_ASYNC
#define __IPHONE_13_2 130200
#define __IPHONE_13_3 130300
#define __IPHONE_13_4 130400
#define __IPHONE_13_5 130500
#define __IPHONE_13_6 130600
#define __IPHONE_13_7 130700
#define DST_USA 1
#define SQLITE_STMTSTATUS_VM_STEP 4
#define TK_KEY 67
#define OP_MemMax 151
#define CPU_SUBTYPE_INTEL_FAMILY(x) ((x) & 15)
#define SQLITE_NOTICE 27
#define HOST_MACH_MSG_TRAP 8
#define x86_AVX512_STATE64_COUNT ((mach_msg_type_number_t) (sizeof(x86_avx512_state64_t)/sizeof(unsigned int)))
#define TASK_DYLD_INFO 17
#define osAccess ((int(*)(const char*,int))aSyscall[2].pCurrent)
#define __ATOMIC_SEQ_CST 5
#define _INT32_T 
#define SQLITE_SCANSTAT_NAME 3
#define VdbeComment(X) 
#define I386_PGBYTES 4096
#define MACH_TASK_INSPECT_H 
#define VdbeMemDynamic(X) (((X)->flags&(MEM_Agg|MEM_Dyn))!=0)
#define SQLITE_TESTCTRL_ISINIT 23
#define BYTESWAP32(x) ( (((x)&0x000000FF)<<24) + (((x)&0x0000FF00)<<8) + (((x)&0x00FF0000)>>8) + (((x)&0xFF000000)>>24) )
#define SQLITE_MUTEX_FAST 0
#define HW_MACHINE 1
#define PragFlg_NeedSchema 0x01
#define __FLT32X_MIN_10_EXP__ (-307)
#define KMOD_INFO_VERSION 1
#define SIOCGIFFLAGS _IOWR('i', 17, struct ifreq)
#define __TVOS_10_0_1 100001
#define KERN_KDCPUMAP 24
#define TERM_LIKEOPT 0x100
#define _MACH_I386_THREAD_STATE_H_ 
#define MEM_TypeMask 0xc1bf
#define OS_NONNULL_ALL __attribute__((__nonnull__))
#define __FLT64X_HAS_DENORM__ 1
#define TK_NULLS 82
#define HOST_LOAD_INFO_COUNT ((mach_msg_type_number_t) (sizeof(host_load_info_data_t)/sizeof(integer_t)))
#define MAP_ANONYMOUS MAP_ANON
#define __OS_OPTIONS_ATTR 
#define RLIMIT_WAKEUPS_MONITOR 0x1
#define MIN(A,B) ((A)<(B)?(A):(B))
#define LOCK_UN 0x08
#define TK_VIRTUAL 80
#define sqlite3ConnectionBlocked(x,y) 
#define TK_JOIN_KW 114
#define VM_MEMORY_ROSETTA_EXECUTABLE_HEAP 234
#define MNT_NOSUID 0x00000008
#define MS_KILLPAGES 0x0004
#define ATTR_FILE_DATALENGTH 0x00000200
#define CACHE_STALE 0
#define __DARWIN_STRUCT_STAT64 { dev_t st_dev; mode_t st_mode; nlink_t st_nlink; __darwin_ino64_t st_ino; uid_t st_uid; gid_t st_gid; dev_t st_rdev; __DARWIN_STRUCT_STAT64_TIMES off_t st_size; blkcnt_t st_blocks; blksize_t st_blksize; __uint32_t st_flags; __uint32_t st_gen; __int32_t st_lspare; __int64_t st_qspare[2]; }
#define __enum_closed 
#define UNIX_SHM_DMS (UNIX_SHM_BASE+SQLITE_SHM_NLOCK)
#define PRIO_MAX 20
#define HAVE_FULLFSYNC 1
#define OP_Ge 57
#define WRITE_LOCK 2
#define ATTR_CMN_OBJTAG 0x00000010
#define TIOCNOTTY _IO('t', 113)
#define X86_EXCEPTION_STATE64_COUNT x86_EXCEPTION_STATE64_COUNT
#define THREAD_BACKGROUND_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (thread_background_policy_data_t) / sizeof (integer_t)))
#define TK_UNBOUNDED 90
#define VM_MEMORY_QUICKLOOK_THUMBNAILS 97
#define _PID_T 
#define _MACH_EXCEPTION_TYPES_H_ 
#define va_copy(d,s) __builtin_va_copy(d,s)
#define INT16_TYPE short int
#define MAXSYMLINKS 32
#define HOST_DEBUG_INFO_INTERNAL 10
#define NC_UUpsert 0x0200
#define restoreCursorPosition(p) (p->eState>=CURSOR_REQUIRESEEK ? btreeRestoreCursorPosition(p) : SQLITE_OK)
#define ___int_ptrdiff_t_h 
#define IsNaN(X) (((X)&EXP754)==EXP754 && ((X)&MAN754)!=0)
#define __DARWIN_CLK_TCK 100
#define CPU_SUBTYPE_UVAXI ((cpu_subtype_t) 5)
#define __APPLE_API_PRIVATE 
#define KERN_KDWRITETR_V3 28
#define EXC_I386_GPFLT 13
#define MACH_PORT_DNREQUESTS_SIZE 3
#define SQLITE_FLOAT 2
#define ATTR_DIR_ALLOCSIZE 0x00000008
#define KERN_KDREMOVE 7
#define _MACH_MACHINE__STRUCTS_H_ 
#define VM_FLAGS_RESILIENT_CODESIGN 0x0020
#define SIOCIFCREATE _IOWR('i', 120, struct ifreq)
#define UF_APPEND 0x00000004
#define _U_INT16_T 
#define LIST_HEAD_INITIALIZER(head) { NULL }
#define FP_PREC_53B 2
#define SQLITE_FCNTL_ZIPVFS 25
#define TERM_VARSELECT 0x1000
#define MACH_RCV_VOUCHER 0x00000800
#define __OS_BASE__ 
#define SIOCAUTOADDR _IOWR('i', 38, struct ifreq)
#define S_IFIFO 0010000
#define CPF_IGNORE_MODE 0x0002
#define VM_INHERIT_SHARE ((vm_inherit_t) 0)
#define TASK_DEBUG_INFO_INTERNAL 29
#define EFL_VIP 0x00100000
#define SQLITE_PREPARE_NORMALIZE 0x02
#define setbit(a,i) (((unsigned char *)(a))[(i)/NBBY] |= 1u<<((i)%NBBY))
#define MACH_SEND_TIMEOUT 0x00000010
#define SQLITE_MISUSE 21
#define A_GETSTAT 12
#define VM_BEHAVIOR_FREE ((vm_behavior_t) 6)
#define SF_Aggregate 0x00008
#define MEM_Cleared 0x0100
#define __strftimelike(fmtarg) __attribute__((__format__ (__strftime__, fmtarg, 0)))
#define __DBL_MIN_EXP__ (-1021)
#define HOST_NOTIFY_CALENDAR_SET 1
#define EMULTIHOP 95
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_4(x) x
#define _POSIX_THREAD_PRIORITY_SCHEDULING (-1)
#define __FLT64X_NORM_MAX__ 1.18973149535723176502126385303097021e+4932F64x
#define PRIO_MIN -20
#define PCACHE_DIRTYLIST_FRONT 3
#define SQLITE_FCNTL_SYNC 21
#define SQLITE_PushDown 0x1000
#define _PTHREAD_IMPL_H_ 
#define STAILQ_INSERT_AFTER(head,tqelm,elm,field) do { if ((STAILQ_NEXT((elm), field) = STAILQ_NEXT((tqelm), field)) == NULL) (head)->stqh_last = &STAILQ_NEXT((elm), field); STAILQ_NEXT((tqelm), field) = (elm); } while (0)
#define CC_DOT 26
#define __FLT128_MAX_10_EXP__ 4932
#define F_GETPROTECTIONCLASS 63
#define PROXY_HEADERLEN 1
#define x86_DEBUG_STATE32_COUNT ((mach_msg_type_number_t) ( sizeof (x86_debug_state32_t) / sizeof (int) ))
#define PUSER 50
#define VM_MAP_INSPECT_NULL ((vm_map_inspect_t) 0)
#define YYCODETYPE unsigned short int
#define TASK_EXC_GUARD_ALL 0xff
#define PZERO 22
#define FD_COPY(f,t) __DARWIN_FD_COPY(f, t)
#define __DARWIN_NFDBITS (sizeof(__int32_t) * __DARWIN_NBBY)
#define _SC_SPIN_LOCKS 80
#define findCell(P,I) ((P)->aData + ((P)->maskPage & get2byteAligned(&(P)->aCellIdx[2*(I)])))
#define CPU_SUBTYPE_HPPA_7100LC ((cpu_subtype_t) 1)
#define task_get_bootstrap_port(task,port) (task_get_special_port((task), TASK_BOOTSTRAP_PORT, (port)))
#define _SC_IPV6 118
#define KERN_TFP_POLICY 1
#define MEMORY_OBJECT_RELEASE_NO_OP 0x4
#define _SC_XOPEN_REALTIME 111
#define _GCC_MAX_ALIGN_T 
#define KERN_MAXID 72
#define _SYS_QOS_H 
#define TK_DELETE 124
#define TK_WHERE 145
#define __MAC_10_13_1 101301
#define __MAC_10_13_2 101302
#define __MAC_10_13_4 101304
#define EPROC_SLEADER 0x02
#define TASK_FLAVOR_READ 1
#define SQLITE_FUNC_LENGTH 0x0040
#define SQLITE_FCNTL_POWERSAFE_OVERWRITE 13
#define SQLITE_DBSTATUS_CACHE_MISS 8
#define SIGBUS 10
#define OP_CollSeq 82
#define CPU_SUBTYPE_XEON CPU_SUBTYPE_INTEL(12, 0)
#define __enum_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_open
#define VM_MEMORY_EAR_DECODER 102
#define EXC_BAD_INSTRUCTION 2
#define SQLITE_FRAME_MAGIC 0x879fb71e
#define __deprecated_msg(_msg) __attribute__((__deprecated__(_msg)))
#define NOTE_PCTRLMASK (~NOTE_PDATAMASK)
#define SLIST_INSERT_HEAD(head,elm,field) do { SLIST_NEXT((elm), field) = SLIST_FIRST((head)); SLIST_FIRST((head)) = (elm); } while (0)
#define MACH_RCV_TRAILER_SEQNO 1
#define POLICY_RR_LIMIT_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_rr_limit)/sizeof(integer_t)))
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_0(x) 
#define __CHAR_BIT__ 8
#define _STRUCT_X86_EXCEPTION_STATE64 struct __darwin_x86_exception_state64
#define STAILQ_SWAP(head1,head2,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH do { struct type *swap_first = STAILQ_FIRST(head1); struct type **swap_last = (head1)->stqh_last; STAILQ_FIRST(head1) = STAILQ_FIRST(head2); (head1)->stqh_last = (head2)->stqh_last; STAILQ_FIRST(head2) = swap_first; (head2)->stqh_last = swap_last; if (STAILQ_EMPTY(head1)) (head1)->stqh_last = &STAILQ_FIRST(head1); if (STAILQ_EMPTY(head2)) (head2)->stqh_last = &STAILQ_FIRST(head2); } while (0) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define SQLITE_CREATE_INDEX 1
#define KERN_OSTYPE 1
#define MACH_PORT_TYPE_SEND MACH_PORT_TYPE(MACH_PORT_RIGHT_SEND)
#define _TIME_H_ 
#define A_OLDSETPOLICY 3
#define SHRT_MAX __SHRT_MAX__
#define MPG_IMMOVABLE_RECEIVE 0x02
#define SQLITE_DQS 3
#define SIGTTIN 21
#define OP_Checkpoint 6
#define SQLITE_IOERR_SEEK (SQLITE_IOERR | (22<<8))
#define EACCES 13
#define SQLITE_GET_LOCKPROXYFILE SQLITE_FCNTL_GET_LOCKPROXYFILE
#define _SC_COLL_WEIGHTS_MAX 13
#define _PTHREAD_RWLOCKATTR_T 
#define VM_MAXID 6
#define TIOCMSDTRWAIT _IOW('t', 91, int)
#define KIPC_MAX_DATALEN 7
#define CPU_SUBTYPE_MIPS_R2000 ((cpu_subtype_t) 5)
#define KERN_FILE 15
#define OP_Real 148
#define SQLITE_BIG_DBL (1e99)
#define PIPE_BUF 512
#define A_GETCWD 8
#define __OSX_AVAILABLE_BUT_DEPRECATED(_osxIntro,_osxDep,_iosIntro,_iosDep) 
#define stderr __stderrp
#define osFallocate ((int(*)(int,off_t,off_t))aSyscall[15].pCurrent)
#define SQLITE_TESTCTRL_FAULT_INSTALL 9
#define MEMTYPE_PCACHE 0x04
#define SF_SYNTHETIC 0xc0000000
#define SQLITE_IOERR_DELETE_NOENT (SQLITE_IOERR | (23<<8))
#define HW_L1ICACHESIZE 17
#define TASK_BOOTSTRAP_PORT 4
#define WO_ISNULL 0x0100
#define __not_tail_called 
#define va_start(v,l) __builtin_va_start(v,l)
#define PragTyp_TEMP_STORE_DIRECTORY 36
#define WAL_SAVEPOINT_NDATA 4
#define TIOCSSIZE TIOCSWINSZ
#define SQLITE_IDXTYPE_PRIMARYKEY 2
#define __ORDER_LITTLE_ENDIAN__ 1234
#define OPFLAG_ISNOOP 0x40
#define SF_UsesEphemeral 0x00020
#define VM_FLAGS_FIXED 0x0000
#define KERN_RESOURCE_SHORTAGE 6
#define BLKDEV_IOSIZE 2048
#define MACH_RCV_NOTIFY 0x00000000
#define MACH_PORT_VALID(name) (((name) != MACH_PORT_NULL) && ((name) != MACH_PORT_DEAD))
#define SQLITE_IOERR_BLOCKED (SQLITE_IOERR | (11<<8))
#define WAL_RECOVER_LOCK 2
#define M_E 2.71828182845904523536028747135266250
#define __DARWIN_PDP_ENDIAN 3412
#define P_RESV11 0x08000000
#define SQLITE_BUSY_RECOVERY (SQLITE_BUSY | (1<<8))
#define IOPOL_TYPE_VFS_IGNORE_CONTENT_PROTECTION 6
#define _STRUCT_X86_AVX512_STATE64 struct __darwin_x86_avx512_state64
#define __IOS_PROHIBITED 
#define EXC_MASK_BAD_INSTRUCTION (1 << EXC_BAD_INSTRUCTION)
#define SHRT_MIN (-SHRT_MAX - 1)
#define _SC_SPORADIC_SERVER 81
#define _ASSERT_H_ 
#define _SC_THREAD_PRIO_INHERIT 87
#define MPO_TEMPOWNER 0x04
#define SQLITE_CREATE_VTABLE 29
#define WAL_NREADER (SQLITE_SHM_NLOCK-3)
#define _PTHREAD_RECURSIVE_MUTEX_SIG_init 0x32AAABA2
#define M_PI 3.14159265358979323846264338327950288
#define _STRUCT_MCONTEXT64_FULL struct __darwin_mcontext64_full
#define PragTyp_DEFAULT_CACHE_SIZE 11
#define CC_KYWD 1
#define P_SELECT 0x00000040
#define MACH_SEND_NO_GRANT_DEST 0x10000016
#define USERMODE(x) (((x) & 3) == 3)
#define w_termsig w_T.w_Termsig
#define VM_BEHAVIOR_ZERO_WIRED_PAGES ((vm_behavior_t) 7)
#define _MACH_VM_PROT_H_ 
#define __x86_64 1
#define MACH_MSGH_KIND_NORMAL 0x00000000
#define ATTR_CMN_DATA_PROTECT_FLAGS 0x40000000
#define _OS__OSBYTEORDERI386_H 
#define SQLITE_FCNTL_TEMPFILENAME 16
#define ATTR_CMNEXT_RELPATH 0x00000004
#define TASK_SCHED_FIFO_INFO 12
#define SQLITE_CkptFullFSync 0x00000010
#define VM_BEHAVIOR_REUSABLE ((vm_behavior_t) 8)
#define PTHREAD_PROCESS_SHARED 1
#define TAILQ_SWAP(head1,head2,type,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH do { struct type *swap_first = (head1)->tqh_first; struct type **swap_last = (head1)->tqh_last; (head1)->tqh_first = (head2)->tqh_first; (head1)->tqh_last = (head2)->tqh_last; (head2)->tqh_first = swap_first; (head2)->tqh_last = swap_last; if ((swap_first = (head1)->tqh_first) != NULL) swap_first->field.tqe_prev = &(head1)->tqh_first; else (head1)->tqh_last = &(head1)->tqh_first; if ((swap_first = (head2)->tqh_first) != NULL) swap_first->field.tqe_prev = &(head2)->tqh_first; else (head2)->tqh_last = &(head2)->tqh_first; } while (0) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define EV_DISPATCH2 (EV_DISPATCH | EV_UDATA_SPECIFIC)
#define CIRCLEQ_NEXT(elm,field) ((elm)->field.cqe_next)
#define __SIG_ATOMIC_TYPE__ int
#define TK_REGISTER 171
#define SQLITE_CONFIG_SINGLETHREAD 1
#define SQLITE_CANTOPEN_DIRTYWAL (SQLITE_CANTOPEN | (5<<8))
#define i386_FLOAT_STATE_COUNT ((mach_msg_type_number_t) (sizeof(i386_float_state_t)/sizeof(unsigned int)))
#define __DBL_MIN_10_EXP__ (-307)
#define MACH_MSG_NULL (mach_msg_header_t *) 0
#define A_SETSFLAGS 40
#define IOPOL_TYPE_VFS_STATFS_NO_DATA_VOLUME 4
#define SQLITE_READONLY_RECOVERY (SQLITE_READONLY | (1<<8))
#define _SC_MEMLOCK_RANGE 31
#define VM_FLAGS_ANYWHERE 0x0001
#define SQLITE_CONSTRAINT_FUNCTION (SQLITE_CONSTRAINT | (4<<8))
#define TK_FOREIGN 128
#define i386_THREAD_STATE_COUNT ((mach_msg_type_number_t) ( sizeof (i386_thread_state_t) / sizeof (int) ))
#define SQLITE_ALTER_TABLE 26
#define VM_MEMORY_ANALYSIS_TOOL 10
#define SQLITE_OPEN_TEMP_DB 0x00000200
#define WHERE_MULTI_OR 0x00002000
#define ATTR_FILE_DATAALLOCSIZE 0x00000400
#define __GNUC_PATCHLEVEL__ 0
#define SQLITE_READ 20
#define host_set_filecoordinationd_port(host,port) (host_set_special_port((host), HOST_FILECOORDINATIOND_PORT, (port)))
#define _POSIX_TRACE_EVENT_FILTER (-1)
#define MEM_Str 0x0002
#define __DECONST(type,var) __CAST_AWAY_QUALIFIER(var, const, type)
#define HW_USERMEM 6
#define F_RDADVISE 44
#define TK_CONFLICT 37
#define __UINT_FAST8_MAX__ 0xff
#define AT_IPC_SEM ((unsigned char)2)
#define NGROUPS NGROUPS_MAX
#define ATTR_CMNEXT_NOFIRMLINKPATH 0x00000020
#define MACH_VOUCHER_ATTR_KEY_BANK ((mach_voucher_attr_key_t)3)
#define TK_NULL 117
#define SQLITE3_TEXT 3
#define SQLITE_DBCONFIG_ENABLE_QPSG 1007
#define _XOPEN_XCU_VERSION 4
#define ENOMEM 12
#define SQLITE_AFF_TEXT 0x42
#define EXC_I386_BOUND 7
#define OP_ColumnsUsed 118
#define __OSX_AVAILABLE_BUT_DEPRECATED_MSG(_osxIntro,_osxDep,_iosIntro,_iosDep,_msg) 
#define first_valueInvFunc noopStepFunc
#define EXC_I386_PGFLT 14
#define FTS5_TOKENIZE_QUERY 0x0001
#define __INT_LEAST8_WIDTH__ 8
#define SIOCSIFNETMASK _IOW('i', 22, struct ifreq)
#define AT_IPC_SHM ((unsigned char)3)
#define _XBS5_LPBIG_OFFBIG __LPBIG_OFFBIG
#define ExprSetVVAProperty(E,P) 
#define SQLITE_SCANSTAT_NVISIT 1
#define UNIXFILE_DIRSYNC 0x08
#define P_ADVLOCK 0x00000001
#define __SCCSID(s) __IDSTRING(sccsid,s)
#define __DARWIN_C_ANSI 010000L
#define MPO_QLIMIT 0x02
#define S_IXOTH 0000001
#define KERN_KDTHRMAP 12
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_4(x) x
#define _PTHREAD_MUTEX_T 
#define SQLITE_NOTICE_RECOVER_WAL (SQLITE_NOTICE | (1<<8))
#define SQLITE_FCNTL_TRACE 19
#define VM_MEMORY_COREUI_CACHED_IMAGE_DATA 103
#define __WATCHOS_5_0 50000
#define __WATCHOS_5_1 50100
#define __WATCHOS_5_3 50300
#define WHERE_INDEXED 0x00000200
#define SQLITE_FCNTL_SIZE_HINT 5
#define IdChar(C) ((sqlite3CtypeMap[(unsigned char)C]&0x46)!=0)
#define howmany(x,y) __DARWIN_howmany(x, y)
#define NAME_MAX 255
#define CPU_SUBTYPE_LIB64 0x80000000
#define SQLITE_CONFIG_MULTITHREAD 2
#define __OS_AVAILABILITY_MSG(_target,_availability,_msg) 
#define ___POSIX_C_DEPRECATED_STARTING_200809L 
#define SCHAR_MAX __SCHAR_MAX__
#define VM_MAX_ADDRESS ((vm_offset_t) 0xFFE00000)
#define WHERE_COLUMN_RANGE 0x00000002
#define SQLITE_FCNTL_LOCKSTATE 1
#define VOL_CAP_INT_USERACCESS 0x00000800
#define USER_POSIX2_CHAR_TERM 13
#define HOST_VM_INFO_REV1_COUNT ((mach_msg_type_number_t) (HOST_VM_INFO_REV2_COUNT - 1))
#define x86_AVX_STATE64_COUNT ((mach_msg_type_number_t) (sizeof(x86_avx_state64_t)/sizeof(unsigned int)))
#define PROC_FLAG_ADAPTIVE_IMPORTANT 0x200000
#define SIDL 1
#define HW_MACHINE_ARCH 12
#define VM_MEMORY_ACCELERATE 75
#define _POSIX_THREAD_CPUTIME (-1)
#define ENOPROTOOPT 42
#define TARGET_CPU_ARM64 0
#define OPFLAG_LENGTHARG 0x40
#define HOST_PRIV_PORT 2
#define P_TIMEOUT 0x00000400
#define _SC_THREAD_PRIO_PROTECT 88
#define VQ_FREE_SPACE_CHANGE 0x8000
#define CKCNSTRNT_COLUMN 0x01
#define ULONG_LONG_MAX (LONG_LONG_MAX * 2ULL + 1ULL)
#define sqlite3ParserARG_PDECL 
#define CTLTYPE_STRING 3
#define AUDIT_ARGE 0x0008
#define MAC_OS_X_VERSION_10_13_1 101301
#define CPUFAMILY_ARM_MONSOON_MISTRAL 0xe81e7ef6
#define VM_MEMORY_MALLOC_TINY 7
#define AUDIT_ARGV 0x0004
#define MEMORY_OBJECT_COPY_SYMMETRIC 4
#define SQLITE_CORRUPT_PAGE(pMemPage) SQLITE_CORRUPT_PGNO(pMemPage->pgno)
#define __UINT32_MAX__ 0xffffffffU
#define OSTRACE(X) 
#define __PTHREAD_MUTEX_SIZE__ 56
#define _POSIX_PIPE_BUF 512
#define RLIMIT_DATA 2
#define SQLITE_Fts3Tokenizer 0x00400000
#define KERN_VFSNSPACE_UNHANDLE_PROC 2
#define _POSIX_SYMLOOP_MAX 8
#define TK_COMMA 26
#define IOPOL_PASSIVE 2
#define __IPHONE_12_1 120100
#define OP_InitCoroutine 13
#define MINCORE_ANONYMOUS 0x80
#define WUNTRACED 0x00000002
#define os_prevent_tail_call_optimization() __asm__("")
#define ONE_BYTE_INT(x) ((i8)(x)[0])
#define VM_MAX_USER_PAGE_ADDRESS ((user_addr_t)0x00007FFFFFFFF000ULL)
#define NZERO 20
#define SQLITE_SHM_EXCLUSIVE 8
#define __API_DEPRECATED_WITH_REPLACEMENT_BEGIN(...) 
#define VM_MEMORY_CM_RPC 93
#define SA_USERSPACE_MASK (SA_ONSTACK | SA_RESTART | SA_RESETHAND | SA_NOCLDSTOP | SA_NODEFER | SA_NOCLDWAIT | SA_SIGINFO)
#define SQLITE_MALLOC_SOFT_LIMIT 1024
#define msgh_reserved msgh_voucher_port
#define P_DIRTY_DEFER_ALWAYS 0x00000400
#define KERN_CODESIGN_ERROR 50
#define EP_InfixFunc 0x000080
#define SCHAR_MIN (-SCHAR_MAX - 1)
#define _MACH_MACH_TYPES_H_ 
#define ENOMSG 91
#define VM_MEMORY_SCENEKIT 86
#define MAP_MEM_WTHRU 3
#define PTRMAP_PAGENO(pBt,pgno) ptrmapPageno(pBt, pgno)
#define dtob(x) ((x)<<DEV_BSHIFT)
#define GET_MAP_MEM(flags) ((((unsigned int)(flags)) >> 24) & 0xFF)
#define HOST_EXPIRED_TASK_INFO 6
#define _STRUCT_MCONTEXT _STRUCT_MCONTEXT64
#define NC_MinMaxAgg 0x1000
#define SQLITE_BLDF_INDEXED 0x0001
#define KERN_SAVED_IDS 20
#define VM_LEDGER_FLAG_NO_FOOTPRINT 0x00000001
#define __IPHONE_6_0 60000
#define __IPHONE_6_1 60100
#define WINDOW_AGGSTEP 3
#define UF_TRACKED 0x00000040
#define __INT64_C(c) c ## LL
#define MACH_SEND_INVALID_CONTEXT 0x10000012
#define OP_Subtract 104
#define NC_PartIdx 0x0002
#define ADDR(X) (~(X))
#define TK_DESC 39
#define __CHAR16_TYPE__ short unsigned int
#define MACH_PORT_STATUS_FLAG_TASKPTR 0x20
#define VM_MEMORY_IMAGEIO 70
#define __FLT64X_MANT_DIG__ 64
#define EXPRDUP_REDUCE 0x0001
#define VM_PAGE_QUERY_PAGE_PAGED_OUT 0x10
#define __MAC_11_3 110300
#define CPU_TYPE_ARM64_32 (CPU_TYPE_ARM | CPU_ARCH_ABI64_32)
#define TIOCSTART _IO('t', 110)
#define CPU_TYPE_HPPA ((cpu_type_t) 11)
#define DEFFILEMODE (S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH|S_IWOTH)
#define TK_BY 34
#define VM_SYNC_DEACTIVATE ((vm_sync_t) 0x10)
#define OP_OffsetLimit 152
#define SQLITE_USE_URI 0
#define _BLKSIZE_T 
#define SQLITE_INDEX_CONSTRAINT_LIKE 65
#define _SC_2_UPE 25
#define VFS_CTL_TIMEO 0x00010005
#define S_IRWXO 0000007
#define MACH_MSGH_BITS(remote,local) ((remote) | ((local) << 8))
#define KERN_KDENABLE 3
#define _MACH_TASK_POLICY_H_ 
#define A_SETCTLMODE 42
#define _MACH_I386_PROCESSOR_INFO_H_ 
#define _STDBOOL_H 
#define VQ_NOTRESPLOCK 0x0080
#define SQLITE_FAULTINJECTOR_COUNT 1
#define NDEBUG 1
#define S_IFMT 0170000
#define CLOCK_REALTIME _CLOCK_REALTIME
#define SQLITE_TriggerEQP 0x01000000
#define _PTHREAD_RWLOCK_SIG_init 0x2DA8B3B4
#define CLOCK_GET_TIME_RES 1
#define CPU_SUBTYPE_POWERPC_603 ((cpu_subtype_t) 3)
#define SLIST_INSERT_AFTER(slistelm,elm,field) do { SLIST_NEXT((elm), field) = SLIST_NEXT((slistelm), field); SLIST_NEXT((slistelm), field) = (elm); } while (0)
#define MCLOFSET (MCLBYTES - 1)
#define SQLITE_DBSTATUS_SCHEMA_USED 2
#define SMALLEST_INT64 (((i64)-1) - LARGEST_INT64)
#define SQLITE_MUTEX_STATIC_OPEN 4
#define VM_REGION_SUBMAP_INFO_V1_SIZE (VM_REGION_SUBMAP_INFO_V2_SIZE - sizeof (vm_object_id_t) )
#define SQLITE_LIMIT_COLUMN 2
#define YY_NLOOKAHEAD ((int)(sizeof(yy_lookahead)/sizeof(yy_lookahead[0])))
#define _SYS_QUEUE_H_ 
#define AUDIT_TRIGGER_FILE ("/dev/" AUDITDEV_FILENAME)
#define SEMAPHORE_NULL ((semaphore_t) 0)
#define SQLITE_CONFIG_MMAP_SIZE 22
#define PTHREAD_CANCEL_DEFERRED 0x02
#define PARSE_TAIL(X) (((char*)(X))+PARSE_RECURSE_SZ)
#define VOL_CAPABILITIES_RESERVED1 2
#define VOL_CAPABILITIES_RESERVED2 3
#define OP_DropTable 143
#define __DARWIN_STRUCT_STAT64_TIMES struct timespec st_atimespec; struct timespec st_mtimespec; struct timespec st_ctimespec; struct timespec st_birthtimespec;
#define WINDOW_STARTING_INT 0
#define HOST_USER_NOTIFICATION_PORT (3 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define VM_INHERIT_DEFAULT VM_INHERIT_COPY
#define MCLBYTES (1 << MCLSHIFT)
#define SRT_DistQueue 8
#define FTS5_TOKEN_COLOCATED 0x0001
#define round_msg(x) (((mach_msg_size_t)(x) + sizeof (natural_t) - 1) & ~(sizeof (natural_t) - 1))
#define BTREE_FILE_FORMAT 2
#define ALARM_NULL ((alarm_t) 0)
#define btoc(x) (((unsigned)(x)+(NBPG-1))>>PGSHIFT)
#define _UINT8_T 
#define I386_PGSHIFT 12
#define FIONREAD _IOR('f', 127, int)
#define TERM_VNULL 0x00
#define __PROJECT_VERSION(s) __IDSTRING(project_version,s)
#define ATTR_FORK_VALIDMASK 0x00000003
#define VM_MEMORY_ROSETTA_RETURN_STACK 233
#define PROT_EXEC 0x04
#define _POSIX2_BC_SCALE_MAX 99
#define SQLITE_DqsDML 0x40000000
#define A_GETKMASK 4
#define __IPHONE_14_0 140000
#define __IPHONE_14_1 140100
#define __IPHONE_14_2 140200
#define __IPHONE_14_3 140300
#define MAP_MEM_4K_DATA_ADDR 0x800000
#define X86_LAST_BRANCH_STATE_COUNT x86_LAST_BRANCH_STATE_COUNT
#define __FLT32_DIG__ 6
#define PAGE_IS_PINNED(p) ((p)->pLruNext==0)
#define PAGER_ERROR 6
#define _SC_TRACE_EVENT_FILTER 98
#define WINDOW_AGGINVERSE 2
#define __FLT_EPSILON__ 1.19209289550781250000000000000000000e-7F
#define __WATCHOS_PROHIBITED 
#define SS_DISABLE 0x0004
#define IfNotOmitAV(expr) (expr)
#define KERN_TERMINATED 37
#define MEM_Ephem 0x1000
#define __FLT32_IS_IEC_60559__ 2
#define NOTE_USECONDS 0x00000002
#define DbSetProperty(D,I,P) (D)->aDb[I].pSchema->schemaFlags|=(P)
#define VOL_CAP_FMT_SEALED 0x02000000
#define WHERE_ORDERBY_NORMAL 0x0000
#define x86_PAGEIN_STATE 22
#define THREAD_IDENTIFIER_INFO_COUNT ((mach_msg_type_number_t) (sizeof(thread_identifier_info_data_t) / sizeof(natural_t)))
#define SQLITE_TRACE_STMT 0x01
#define WO_ALL 0x1fff
#define etDECIMAL 16
#define PROC_FLAG_EXT_DARWINBG 0x10000
#define __DBL_IS_IEC_60559__ 2
#define BTREE_AUTOVACUUM_INCR 2
#define SQLITE_LIMIT_WORKER_THREADS 11
#define P_NOCLDSTOP 0x00000008
#define __abortlike __dead2 __cold __not_tail_called
#define SYNC_VOLUME_FULLSYNC 0x01
#define EXPR_TOKENONLYSIZE offsetof(Expr,pLeft)
#define M16KCLSHIFT 14
#define EF_NO_XATTRS 0x00000002
#define WO_AND 0x0400
#define _POSIX_NAME_MAX 14
#define SQLITE_FULL 13
#define OP_AggInverse 153
#define _ANSI_STDDEF_H 
#define DbClearProperty(D,I,P) (D)->aDb[I].pSchema->schemaFlags&=~(P)
#define TIOCNXCL _IO('t', 14)
#define __strong 
#define st_ctime st_ctimespec.tv_sec
#define VM_MEMORY_COREGRAPHICS_DATA 54
#define CC_BANG 15
#define ATTR_FILE_LINKCOUNT 0x00000001
#define KERN_KDBUFWAIT 23
#define FTS5_TOKENIZE_AUX 0x0008
#define O_EXLOCK 0x00000020
#define SQLITE_IOERR_FSTAT (SQLITE_IOERR | (7<<8))
#define MINSIGSTKSZ 32768
#define _SC_MEMLOCK 30
#define __FLT32X_HAS_INFINITY__ 1
#define SQLITE_DBCONFIG_LEGACY_ALTER_TABLE 1012
#define __INT32_MAX__ 0x7fffffff
#define osClose ((int(*)(int))aSyscall[1].pCurrent)
#define ATTR_CMNEXT_VALIDMASK 0x000007fc
#define A_SETCLASS 23
#define PCACHE_DIRTYLIST_REMOVE 1
#define MACH_RCV_TRAILER_SENDER 2
#define UPDATE_MAX_BLOBSIZE(P) 
#define __SIZE_WIDTH__ 64
#define NOTE_EXTEND 0x00000004
#define SIGEV_NONE 0
#define IS_VALID_CRED(_cr) ((_cr) != NOCRED && (_cr) != FSCRED)
#define VM_LIB64_SHR_DATA ((user_addr_t) 0x00007FFF60000000ULL)
#define ATTR_VOL_SPACEAVAIL 0x00000010
#define THREAD_INSPECT_NULL ((thread_inspect_t) 0)
#define MAP_MEM_IO 2
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_0(x) 
#define MACH_MSGH_KIND_NOTIFICATION 0x00000001
#define MACH_RCV_INTERRUPTED 0x10004005
#define NOTE_TRACK 0x00000001
#define w_retcode w_T.w_Retcode
#define CBLOCK 64
#define SQLITE_PropagateConst 0x8000
#define THREE_BYTE_INT(x) (65536*(i8)((x)[0])|((x)[1]<<8)|(x)[2])
#define invalid_memory_object_flavor(f) (f != MEMORY_OBJECT_ATTRIBUTE_INFO && f != MEMORY_OBJECT_PERFORMANCE_INFO && f != OLD_MEMORY_OBJECT_BEHAVIOR_INFO && f != MEMORY_OBJECT_BEHAVIOR_INFO && f != OLD_MEMORY_OBJECT_ATTRIBUTE_INFO)
#define OP_Integer 70
#define SQLITE_DESERIALIZE_FREEONCLOSE 1
#define _XBS5_ILP32_OFFBIG __ILP32_OFFBIG
#define P_WEXIT 0x00002000
#define F_DUPFD 0
#define NOTE_VM_ERROR 0x10000000
#define IsHiddenColumn(X) (((X)->colFlags & COLFLAG_HIDDEN)!=0)
#define MACH_MSGH_BITS_REMOTE(bits) ((bits) & MACH_MSGH_BITS_REMOTE_MASK)
#define OP_SqlExec 140
#define _SC_GETGR_R_SIZE_MAX 70
#define __FLT128_IS_IEC_60559__ 2
#define NC_HasAgg 0x0010
#define swapMixedEndianFloat(X) 
#define _PC_FILESIZEBITS 18
#define WSTOPSIG(x) (_W_INT(x) >> 8)
#define _WPERM_OK (1<<20)
#define VM_MEMORY_JAVASCRIPT_JIT_REGISTER_FILE 65
#define OE_Update 6
#define _POSIX_LOGIN_NAME_MAX 9
#define _STRUCT_MCONTEXT32 struct __darwin_mcontext32
#define NOTE_EXEC 0x20000000
#define SQLITE_IOERR_NOMEM_BKPT SQLITE_IOERR_NOMEM
#define _XBS5_ILP32_OFF32 __ILP32_OFF32
#define _MACH_VM_REGION_H_ 
#define __FLT64X_MIN_10_EXP__ (-4931)
#define PAGE_MAX_SHIFT 14
#define VOL_CAP_INT_SNAPSHOT 0x00020000
#define INT64_C(v) (v ## LL)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_4(x) x
#define __SPI_DEPRECATED_WITH_REPLACEMENT(...) 
#define KERN_PROCNAME 62
#define MEMORY_OBJECT_DATA_NO_CHANGE 0x2
#define TARGET_OS_WATCH 0
#define AUDIT_TRIGGER_MAX 8
#define FOUR_BYTE_UINT(x) (((u32)(x)[0]<<24)|((x)[1]<<16)|((x)[2]<<8)|(x)[3])
#define CIRCLEQ_PREV(elm,field) ((elm)->field.cqe_prev)
#define FP_NO 0
#define SQLITE_INDEX_CONSTRAINT_EQ 2
#define MACH_MSG_MASK 0x00003e00
#define EAUTH 80
#define SQLITE_FCNTL_SIZE_LIMIT 36
#define _SC_XOPEN_VERSION 116
#define _FSBLKCNT_T 
#define SQLITE_LIMIT_SQL_LENGTH 1
#define KERN_JOB_CONTROL 19
#define __FLT_MIN__ 1.17549435082228750796873653722224568e-38F
#define _STRUCT_MCONTEXT64 struct __darwin_mcontext64
#define THREAD_STANDARD_POLICY_COUNT 0
#define NOTE_SECONDS 0x00000001
#define TASK_RESOURCE_NOTIFY_PORT 11
#define __MAC_10_0 1000
#define __MAC_10_1 1010
#define __MAC_10_2 1020
#define __MAC_10_3 1030
#define __MAC_10_4 1040
#define __MAC_10_5 1050
#define __MAC_10_6 1060
#define __MAC_10_8 1080
#define __MAC_10_9 1090
#define HOST_PORT 1
#define VM_REGION_SUBMAP_INFO_COUNT_64 VM_REGION_SUBMAP_INFO_V2_COUNT_64
#define CPU_SUBTYPE_ITANIUM CPU_SUBTYPE_INTEL(11, 0)
#define SQLITE_DBCONFIG_ENABLE_FTS3_TOKENIZER 1004
#define SQLITE_CONSTRAINT_TRIGGER (SQLITE_CONSTRAINT | (7<<8))
#define SQLITE_INDEX_CONSTRAINT_GT 4
#define FLAG_STRING 4
#define SQLITE_MUTEX_PTHREADS 
#define HOST_CHUD_PORT HOST_LAUNCHCTL_PORT
#define KERN_PROCARGS2 49
#define MEMORY_OBJECT_DEFAULT_NULL ((memory_object_default_t) 0)
#define _POSIX_THREAD_THREADS_MAX 64
#define __MAC_10_14_1 101401
#define __MAC_10_14_4 101404
#define __MAC_10_14_6 101406
#define NOTE_SIGNAL 0x08000000
#define MAP_MEM_RT 7
#define MACH_SEND_OVERRIDE 0x00000020
#define MACH_PORT_TYPE_RECEIVE MACH_PORT_TYPE(MACH_PORT_RIGHT_RECEIVE)
#define VOL_CAP_INT_FLOCK 0x00000200
#define READ_UTF8(zIn,zTerm,c) c = *(zIn++); if( c>=0xc0 ){ c = sqlite3Utf8Trans1[c-0xc0]; while( zIn!=zTerm && (*zIn & 0xc0)==0x80 ){ c = (c<<6) + (0x3f & *(zIn++)); } if( c<0x80 || (c&0xFFFFF800)==0xD800 || (c&0xFFFFFFFE)==0xFFFE ){ c = 0xFFFD; } }
#define COMAPT_MAXLOGNAME 12
#define SQLITE_IOERR_DIR_CLOSE (SQLITE_IOERR | (17<<8))
#define OPFLG_INITIALIZER { 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x10, 0x00, 0x01, 0x00, 0x01, 0x01, 0x01, 0x03, 0x03, 0x01, 0x01, 0x03, 0x12, 0x03, 0x01, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x23, 0x0b, 0x26, 0x26, 0x01, 0x01, 0x03, 0x03, 0x03, 0x03, 0x03, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x08, 0x00, 0x10, 0x10, 0x10, 0x10, 0x00, 0x10, 0x10, 0x00, 0x00, 0x10, 0x10, 0x00, 0x00, 0x02, 0x02, 0x02, 0x00, 0x00, 0x12, 0x20, 0x00, 0x00, 0x00, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x00, 0x12, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x04, 0x04, 0x00, 0x00, 0x10, 0x10, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x10, 0x10, 0x00, 0x04, 0x1a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,}
#define OP_Blob 75
#define SQLITE_LOCK_SHARED 1
#define TK_MATCH 46
#define NOTE_WRITE 0x00000002
#define trunc_page(x) ((x) & (~(vm_page_size - 1)))
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_3(x) 
#define SQLITE_SYNC_NORMAL 0x00002
#define MACH_VOUCHER_ATTR_MAX_RAW_RECIPE_ARRAY_SIZE 5120
#define IOPOL_TYPE_VFS_MATERIALIZE_DATALESS_FILES 3
#define SQLITE_STATUS_PARSER_STACK 6
#define STDERR_FILENO 2
#define __DARWIN_ONLY_VERS_1050 0
#define walFrameOffset(iFrame,szPage) ( WAL_HDRSIZE + ((iFrame)-1)*(i64)((szPage)+WAL_FRAME_HDRSIZE) )
#define CTIMEOPT_VAL2(opt) CTIMEOPT_VAL2_(opt)
#define __DARWIN_1050ALIAS(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_UNIX03)
#define __FLT64_MAX_10_EXP__ 308
#define TASK_VM_INFO_REV3_COUNT ((mach_msg_type_number_t) (TASK_VM_INFO_REV4_COUNT - 2))
#define SQLITE_INDEX_CONSTRAINT_LE 8
#define SQLITE_INDEX_CONSTRAINT_LT 16
#define CTIMEOPT_VAL_(opt) #opt
#define MACH_PORT_LIMITS_INFO_COUNT ((natural_t) (sizeof(mach_port_limits_t)/sizeof(natural_t)))
#define _DLFCN_H_ 
#define ATTR_CMN_OBJPERMANENTID 0x00000040
#define AUDIT_TRIGGER_MIN 1
#define __COPYRIGHT(s) __IDSTRING(copyright,s)
#define MAP_COPY MAP_PRIVATE
#define OP_SetCookie 95
#define sqlite3Isxdigit(x) (sqlite3CtypeMap[(unsigned char)(x)]&0x08)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_4(x) 
#define EXC_CRASH 10
#define A_SETPOLICY 34
#define SQLITE_INDEX_CONSTRAINT_NE 68
#define SI_QUEUE 0x10002
#define SQLITE_MAX_LENGTH 1000000000
#define SQLITE_DEFAULT_FILE_FORMAT 4
#define __INT_FAST32_MAX__ 0x7fffffff
#define SQLITE_CREATE_VIEW 8
#define SIOCGETVLAN SIOCGIFVLAN
#define __MAC_10_15_1 101501
#define _PTHREAD_SWIFT_IMPORTER_NULLABILITY_COMPAT defined(SWIFT_CLASS_EXTRA) && (!defined(SWIFT_SDK_OVERLAY_PTHREAD_EPOCH) || (SWIFT_SDK_OVERLAY_PTHREAD_EPOCH < 1))
#define TASK_INFO_MAX (1024)
#define _RLIMIT_POSIX_FLAG 0x1000
#define SIGQUIT 3
#define w_stopsig w_S.w_Stopsig
#define PAGER_STAT_SPILL 3
#define F_PUNCHHOLE 99
#define KERN_NTP_PLL 27
#define AGGREGATE(zName,nArg,arg,nc,xStep,xFinal,xValue) {nArg, SQLITE_UTF8|(nc*SQLITE_FUNC_NEEDCOLL), SQLITE_INT_TO_PTR(arg), 0, xStep,xFinal,xValue,0,#zName, {0}}
#define IN_DECLARE_VTAB (pParse->eParseMode==PARSE_MODE_DECLARE_VTAB)
#define TASK_KERNEL_PORT 1
#define SQLITE_IOERR_NOMEM (SQLITE_IOERR | (12<<8))
#define _INT16_T 
#define UF_COMPRESSED 0x00000020
#define htonll(x) __DARWIN_OSSwapInt64(x)
#define __FLT64X_HAS_INFINITY__ 1
#define HW_L3CACHESIZE 22
#define EPIPE 32
#define host_set_closured_port(host,port) (host_set_special_port((host), HOST_CLOSURED_PORT, (port)))
#define x86_DEBUG_STATE32 10
#define NSEC_PER_USEC 1000ull
#define AQ_LOWATER 10
#define VM_MEMORY_SANITIZER 99
#define CTLTYPE_INT 2
#define sqlite3WhereAddScanStatus(a,b,c,d) ((void)d)
#define CURSOR_FAULT 4
#define _MACH_THREAD_POLICY_H_ 
#define TK_BETWEEN 48
#define _POSIX_PRIORITY_SCHEDULING (-1)
#define CPUFAMILY_ARM_SWIFT 0x1e2d6381
#define _SC_XOPEN_SHM 113
#define SI_USER 0x10001
#define KERN_PROC_ALL 0
#define EBADMSG 94
#define YYACTIONTYPE unsigned short int
#define __DARWIN_SUF_NON_CANCELABLE 
#define TIOCCBRK _IO('t', 122)
#define x86_DEBUG_STATE64 11
#define MALLOC_VERBOSE_PRINT_LEVEL 2
#define OS_NOINLINE __attribute__((__noinline__))
#define USER_POSIX2_LOCALEDEF 16
#define UNIXFILE_PERSIST_WAL 0x04
#define MACH_PORT_RIGHT_SEND ((mach_port_right_t) 0)
#define INT_LEAST8_MAX INT8_MAX
#define VM_METER 1
#define PAGER_SYNCHRONOUS_FULL 0x03
#define _STRUCT_TIMEVAL struct timeval
#define __INT_LEAST32_MAX__ 0x7fffffff
#define GID_MAX 2147483647U
#define SS_ONSTACK 0x0001
#define CLD_CONTINUED 6
#define _SC_XOPEN_CRYPT 108
#define SQLITE_BLOB 4
#define host_get_gssd_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_GSSD_PORT, (port)))
#define _DEV_T 
#define CTL_VFS 3
#define EXC_I386_EXTOVRFLT 9
#define __DBL_MAX_EXP__ 1024
#define MACH_SEND_PROPAGATE_QOS 0x00200000
#define __WCHAR_WIDTH__ 32
#define __DARWIN_BIG_ENDIAN 4321
#define OVERFLOW 3
#define UPL_NULL ((upl_t) 0)
#define TAILQ_FOREACH_REVERSE(var,head,headname,field) for ((var) = TAILQ_LAST((head), headname); (var); (var) = TAILQ_PREV((var), headname, field))
#define CPU_STATE_USER 0
#define MACH_MSG_TYPE_COPY_SEND 19
#define SQLITE_INDEX_CONSTRAINT_GLOB 66
#define WALTRACE(X) 
#define __SSE2_MATH__ 1
#define __ATOMIC_HLE_RELEASE 131072
#define EV_SET64(kevp,a,b,c,d,e,f,g,h) do { struct kevent64_s *__kevp__ = (kevp); __kevp__->ident = (a); __kevp__->filter = (b); __kevp__->flags = (c); __kevp__->fflags = (d); __kevp__->data = (e); __kevp__->udata = (f); __kevp__->ext[0] = (g); __kevp__->ext[1] = (h); } while(0)
#define THREAD_PRECEDENCE_POLICY 3
#define _SC_OPEN_MAX 5
#define __TVOS_PROHIBITED 
#define TAILQ_INSERT_AFTER(head,listelm,elm,field) do { TAILQ_CHECK_NEXT(listelm, field); if ((TAILQ_NEXT((elm), field) = TAILQ_NEXT((listelm), field)) != NULL) TAILQ_NEXT((elm), field)->field.tqe_prev = &TAILQ_NEXT((elm), field); else { (head)->tqh_last = &TAILQ_NEXT((elm), field); QMD_TRACE_HEAD(head); } TAILQ_NEXT((listelm), field) = (elm); (elm)->field.tqe_prev = &TAILQ_NEXT((listelm), field); QMD_TRACE_ELEM(&(elm)->field); QMD_TRACE_ELEM(&listelm->field); } while (0)
#define _POSIX_TZNAME_MAX 6
#define _POSIX_SSIZE_MAX 32767
#define MAXUPRC CHILD_MAX
#define SQLITE_FCNTL_PRAGMA 14
#define host_get_telemetry_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_TELEMETRY_PORT, (port)))
#define _SYS_SIGNAL_H_ 
#define BTREE_SEEK_EQ 0x00000002
#define _POSIX2_UPE 200112L
#define EVFILT_READ (-1)
#define SIOCDELMULTI _IOW('i', 50, struct ifreq)
#define SQLITE_DBCONFIG_DQS_DDL 1014
#define TK_VALUES 135
#define WAL_MAGIC 0x377f0682
#define __tune_core2__ 1
#define CPU_SUBTYPE_ARM64_ALL ((cpu_subtype_t) 0)
#define MEMORY_OBJECT_PERF_INFO_COUNT ((mach_msg_type_number_t) (sizeof(memory_object_perf_info_data_t)/sizeof(int)))
#define FPE_FLTOVF 2
#define FD_CLOEXEC 1
#define __exported_push _Pragma("GCC visibility push(default)")
#define ATTR_VOL_CAPABILITIES 0x00020000
#define EP_IsTrue 0x10000000
#define sqlite3MemdebugNoType(X,Y) 1
#define get2byteNotZero(X) (((((int)get2byte(X))-1)&0xffff)+1)
#define SQLITE_INDEX_CONSTRAINT_REGEXP 67
#define x86_THREAD_STATE64_COUNT ((mach_msg_type_number_t) ( sizeof (x86_thread_state64_t) / sizeof (int) ))
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#define UNUSED_PARAMETER2(x,y) UNUSED_PARAMETER(x),UNUSED_PARAMETER(y)
#define BITVEC_HASH(X) (((X)*1)%BITVEC_NINT)
#define __kpi_deprecated_arm64_macos_unavailable 
#define TK_NOTNULL 51
#define O_DP_GETRAWUNENCRYPTED 0x0002
#define MAXHOSTNAMELEN 256
#define KERN_DOMAINNAME KERN_NISDOMAINNAME
#define st_atime st_atimespec.tv_sec
#define HasRowid(X) (((X)->tabFlags & TF_WithoutRowid)==0)
#define _POSIX_CPUTIME (-1)
#define PTHREAD_CREATE_DETACHED 2
#define WAKEMON_SET_DEFAULTS 0x08
#define MACH_MSG_FILTER_POLICY_ALLOW (mach_msg_filter_id)0
#define _STRUCT_YMM_REG struct __darwin_ymm_reg
#define __WATCHOS_5_2 50200
#define _MMAP 
#define TIOCSPGRP _IOW('t', 118, int)
#define MAP_NORESERVE 0x0040
#define _POSIX_TRACE_SYS_MAX 8
#define SQLITE_CONSTRAINT 19
#define EV_RECEIPT 0x0040
#define pagerUseWal(x) ((x)->pWal!=0)
#define AUC_AUDITING 1
#define TIOCPKT_NOSTOP 0x10
#define WINT_MAX INT32_MAX
#define __WATCHOS_6_0 60000
#define __WATCHOS_6_1 60100
#define __WATCHOS_6_2 60200
#define OP_PureFunc0 62
#define TASK_INSPECT_PORT 5
#define TK_SELECT 134
#define PCACHE_DIRTYLIST_ADD 2
#define IOPOL_TYPE_DISK 0
#define stdout __stdoutp
#define TK_LT 56
#define VM_SYNC_ASYNCHRONOUS ((vm_sync_t) 0x01)
#define SQLITE_BTREE_H 
#define FPS_PE 0x0020
#define SIOCSLOWAT _IOW('s', 2, int)
#define SQLITE_Transitive 0x0080
#define __FLT_MIN_EXP__ (-125)
#define UF_NODUMP 0x00000001
#define WEXITED 0x00000004
#define SQLITE_DBCONFIG_DQS_DML 1013
#define PTHREAD_RWLOCK_INITIALIZER {_PTHREAD_RWLOCK_SIG_init, {0}}
#define math_errhandling (__math_errhandling())
#define powerof2(x) ((((x)-1)&(x))==0)
#define __printf0like(fmtarg,firstvararg) __attribute__((__format__ (__printf0__, fmtarg, firstvararg)))
#define FUNCTION2(zName,nArg,iArg,bNC,xFunc,extraFlags) {nArg,SQLITE_FUNC_CONSTANT|SQLITE_UTF8|(bNC*SQLITE_FUNC_NEEDCOLL)|extraFlags, SQLITE_INT_TO_PTR(iArg), 0, xFunc, 0, 0, 0, #zName, {0} }
#define UPDATE_IO_STATS(info,size) { info.count++; info.size += size; }
#define VM_PROT_READ ((vm_prot_t) 0x01)
#define MAP_MEM_INNERWBACK 5
#define wsdStatInit 
#define SQLITE_OPEN_MEMORY 0x00000080
#define MADV_CAN_REUSE 9
#define ARCADE_REG_NULL ((arcade_register_t) 0)
#define ATTR_VOL_FILECOUNT 0x00000200
#define SQLITE_STATUS_SCRATCH_USED 3
#define HOST_PRIV_NULL ((host_priv_t) 0)
#define CLEARBIT(V,I) V[I>>3] &= ~(1<<(I&7))
#define _STRUCT_MMST_REG struct __darwin_mmst_reg
#define strcat(dest,...) __builtin___strcat_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define SQLITE_MUTEX_STATIC_APP1 8
#define __INT_FAST64_TYPE__ long long int
#define P_DIRTY_DEFER 0x00000004
#define KERN_IPC 32
#define VM_PROT_EXECUTE ((vm_prot_t) 0x04)
#define PTHREAD_INHERIT_SCHED 1
#define SQLITE_LAST_ERRNO SQLITE_FCNTL_LAST_ERRNO
#define KERN_AIOPROCMAX 47
#define __FLT128_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define THREAD_STATE_FLAVOR_LIST_10_9 129
#define SIOCARPIPLL _IOWR('i', 40, struct ifreq)
#define SQLITE_DEFAULT_SYNCHRONOUS 2
#define TK_UPDATE 125
#define host_get_filecoordinationd_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_FILECOORDINATIOND_PORT, (port)))
#define __WATCHOS_3_2 30200
#define VM_PURGABLE_ORDERING_NORMAL (0 << VM_PURGABLE_ORDERING_SHIFT)
#define WINT_MIN INT32_MIN
#define ATTR_CMN_EXTENDED_SECURITY 0x00400000
#define PTHREAD_CANCEL_DISABLE 0x00
#define CTLFLAG_EXPERIMENT 0x00100000
#define MEM_Real 0x0008
#define P_NOCLDWAIT 0x40000000
#define KERN_INSUFFICIENT_BUFFER_SIZE 52
#define TK_FROM 138
#define TAILQ_PREV(elm,headname,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH (*(((struct headname *)((elm)->field.tqe_prev))->tqh_last)) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define TERM_LIKECOND 0x200
#define DST_WET 3
#define OS_FALLTHROUGH __attribute__((__fallthrough__))
#define SQLITE_CANTOPEN_FULLPATH (SQLITE_CANTOPEN | (3<<8))
#define VOL_CAP_FMT_PERSISTENTOBJECTIDS 0x00000001
#define WAL_EXCLUSIVE_MODE 1
#define TK_AND 44
#define VM_MEMORY_CORESERVICES 43
#define HOST_BASIC_INFO_COUNT ((mach_msg_type_number_t) (sizeof(host_basic_info_data_t)/sizeof(integer_t)))
#define __SIZE_TYPE__ long unsigned int
#define __sgetc(p) (--(p)->_r < 0 ? __srget(p) : (int)(*(p)->_p++))
#define KERN_PROC_PID 1
#define EXC_I386_BOUNDFLT 5
#define THREAD_SCHED_RR_INFO 11
#define _XOPEN_LEGACY (-1)
#define __IPHONE_7_0 70000
#define __IPHONE_7_1 70100
#define round_page(x) trunc_page((x) + (vm_page_size - 1))
#define TF_LP64 0x00000001
#define _MACH_KMOD_H_ 
#define HOST_DYNAMIC_PAGER_PORT (1 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define SQLITE_DBSTATUS_LOOKASIDE_MISS_FULL 6
#define __deprecated_enum_msg(_msg) 
#define OP_SoftNull 74
#define EP_TokenOnly 0x004000
#define SIGINFO 29
#define MNT_EXT_ROOT_DATA_VOL 0x00000001
#define POLICY_RR_BASE_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_rr_base)/sizeof(integer_t)))
#define TK_ELSE 155
#define MACH_PORT_NULL 0
#define MACH_MSGH_BITS_HAS_VOUCHER(bits) (MACH_MSGH_BITS_VOUCHER(bits) != MACH_MSGH_BITS_ZERO)
#define MACH_VOUCHER_NAME_NULL ((mach_voucher_name_t) 0)
#define SQLITE_FCNTL_COMMIT_PHASETWO 22
#define fwopen(cookie,fn) funopen(cookie, 0, fn, 0, 0)
#define sqlite3Isspace(x) (sqlite3CtypeMap[(unsigned char)(x)]&0x01)
#define RTLD_LOCAL 0x4
#define MEMORY_OBJECT_INFO_MAX (1024)
#define osRmdir ((int(*)(const char*))aSyscall[19].pCurrent)
#define PAGER_WRITER_FINISHED 5
#define BITVEC_SZELEM 8
#define FPE_INTDIV 7
#define SEEK_DATA 4
#define EFL_IOPL_KERNEL 0x00000000
#define TASK_READ_PORT 6
#define _SYS_FILIO_H_ 
#define BTALLOC_EXACT 1
#define i386_EXCEPTION_STATE_COUNT ((mach_msg_type_number_t) ( sizeof (i386_exception_state_t) / sizeof (int) ))
#define HOST_MIN_SPECIAL_PORT HOST_SECURITY_PORT
#define SQLITE_AFF_INTEGER 0x44
#define OP_OpenWrite 98
#define _IOC(inout,group,num,len) (inout | ((len & IOCPARM_MASK) << 16) | ((group) << 8) | (num))
#define _IOR(g,n,t) _IOC(IOC_OUT, (g), (n), sizeof(t))
#define SRT_Coroutine 13
#define F_ADDFILESUPPL 104
#define _SC_FILE_LOCKING 69
#define OP_IsNull 50
#define SF_Distinct 0x00001
#define SIOCSIFPHYS _IOW('i', 54, struct ifreq)
#define SQLITE_IOERR_COMMIT_ATOMIC (SQLITE_IOERR | (30<<8))
#define __REGISTER_PREFIX__ 
#define MACH_PORT_TYPE_SEND_ONCE MACH_PORT_TYPE(MACH_PORT_RIGHT_SEND_ONCE)
#define OP_Rowid 128
#define MPO_IMPORTANCE_RECEIVER 0x08
#define YY_MIN_REDUCE 1174
#define EV_DISPATCH 0x0080
#define TIMER_END 
#define _CS_XBS5_ILP32_OFFBIG_LIBS 26
#define HW_DISKSTATS 9
#define NOTE_EXIT_REPARENTED ((unsigned int)eNoteExitReparentedDeprecated)
#define _PC_MAX_CANON 2
#define TASK_EXC_GUARD_VM_ONCE 0x02
#define SQLITE_MAX_FUNCTION_ARG 127
#define VOL_CAP_INT_EXCHANGEDATA 0x00000010
#define _POSIX_V7_ILP32_OFF32 __ILP32_OFF32
#define TIMEVAL_TO_TIMESPEC(tv,ts) { (ts)->tv_sec = (tv)->tv_sec; (ts)->tv_nsec = (tv)->tv_usec * 1000; }
#define sqlite3VtabInSync(db) ((db)->nVTrans>0 && (db)->aVTrans==0)
#define EV_OOBAND EV_FLAG1
#define strcpy(dest,...) __builtin___strcpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define JT_RIGHT 0x0010
#define __DRIVERKIT_19_0 190000
#define CHAR_MIN SCHAR_MIN
#define __FLT_MANT_DIG__ 24
#define VM_LEDGER_TAG_NEURAL 0x00000005
#define CIRCLEQ_ENTRY(type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct { struct type *cqe_next; struct type *cqe_prev; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define __VERSION__ "11.2.0"
#define S_IFCHR 0020000
#define SIOCSIFPHYADDR _IOW('i', 62, struct ifaliasreq)
#define SORTER_TYPE_INTEGER 0x01
#define EP_IsFalse 0x20000000
#define VFS_CTL_STATFS VFS_CTL_STATFS64
#define SQLITE_CONFIG_PCACHE_HDRSZ 24
#define MACH_PORT_TYPE(right) ((mach_port_type_t)(((mach_port_type_t) 1) << ((right) + ((mach_port_right_t) 16))))
#define THREAD_BACKGROUND_POLICY_DARWIN_BG 0x1000
#define MACH_VOUCHER_ATTR_IMPORTANCE_SELF ((mach_voucher_attr_recipe_command_t)200)
#define _MACH_PORT_T 
#define SF_APPEND 0x00040000
#define SQLITE_MISUSE_BKPT sqlite3MisuseError(__LINE__)
#define ATTR_CMN_ADDEDTIME 0x10000000
#define _FILESEC_UNSET_PROPERTY ((void *)0)
#define SQLITE_MUTEX_STATIC_LRU 6
#define SQLITE_MUTEX_STATIC_MEM2 4
#define STAILQ_REMOVE(head,elm,type,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH do { if (STAILQ_FIRST((head)) == (elm)) { STAILQ_REMOVE_HEAD((head), field); } else { struct type *curelm = STAILQ_FIRST((head)); while (STAILQ_NEXT(curelm, field) != (elm)) curelm = STAILQ_NEXT(curelm, field); STAILQ_REMOVE_AFTER(head, curelm, field); } TRASHIT((elm)->field.stqe_next); } while (0) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define ATTR_CMN_MODTIME 0x00000400
#define CTL_USER_NAMES { { 0, 0 }, { "cs_path", CTLTYPE_STRING }, { "bc_base_max", CTLTYPE_INT }, { "bc_dim_max", CTLTYPE_INT }, { "bc_scale_max", CTLTYPE_INT }, { "bc_string_max", CTLTYPE_INT }, { "coll_weights_max", CTLTYPE_INT }, { "expr_nest_max", CTLTYPE_INT }, { "line_max", CTLTYPE_INT }, { "re_dup_max", CTLTYPE_INT }, { "posix2_version", CTLTYPE_INT }, { "posix2_c_bind", CTLTYPE_INT }, { "posix2_c_dev", CTLTYPE_INT }, { "posix2_char_term", CTLTYPE_INT }, { "posix2_fort_dev", CTLTYPE_INT }, { "posix2_fort_run", CTLTYPE_INT }, { "posix2_localedef", CTLTYPE_INT }, { "posix2_sw_dev", CTLTYPE_INT }, { "posix2_upe", CTLTYPE_INT }, { "stream_max", CTLTYPE_INT }, { "tzname_max", CTLTYPE_INT } }
#define KERN_OPENEVT_PROC 1
#define OS_FORMAT_PRINTF(x,y) __attribute__((__format__(printf,x,y)))
#define islessequal(x,y) __builtin_islessequal((x),(y))
#define VM_MEMORY_TCMALLOC 53
#define TIOCIXON _IO('t', 129)
#define __DARWIN_ONLY_UNIX_CONFORMANCE 1
#define MACH_MSGH_BITS_HAS_REMOTE(bits) (MACH_MSGH_BITS_REMOTE(bits) != MACH_MSGH_BITS_ZERO)
#define _UNISTD_H_ 
#define x86_EXCEPTION_STATE 9
#define PTHREAD_PRIO_INHERIT 1
#define SQLITE_LOCK_NONE 0
#define _PC_REC_INCR_XFER_SIZE 20
#define CPU_SUBTYPE_MC680x0_ALL ((cpu_subtype_t) 1)
#define ENOTSOCK 38
#define O_RDWR 0x0002
#define SQLITEINT_H 
#define SZOMB 5
#define MemNullNochng(X) ((X)->flags==(MEM_Null|MEM_Zero) && (X)->n==0 && (X)->u.nZero==0)
#define __INTMAX_TYPE__ long int
#define _SYS_SOCKIO_H_ 
#define _T_PTRDIFF_ 
#define __SSTR 0x0200
#define _DARWIN_FEATURE_UNIX_CONFORMANCE 3
#define SQLITE_IOERR_UNLOCK (SQLITE_IOERR | (8<<8))
#define BTREE_INCR_VACUUM 7
#define PAGE_MAX_MASK (PAGE_MAX_SIZE-1)
#define PROT_WRITE 0x02
#define THREAD_EXTENDED_POLICY 1
#define SQLITE_INDEX_SCAN_UNIQUE 1
#define MACH_PORT_STATUS_FLAG_GUARD_IMMOVABLE_RECEIVE 0x40
#define P_DIRTY_TRACK 0x00000001
#define CTL_MACHDEP 7
#define SQLITE_CORRUPT_VTAB (SQLITE_CORRUPT | (1<<8))
#define TIOCMSET _IOW('t', 109, int)
#define timercmp(tvp,uvp,cmp) (((tvp)->tv_sec == (uvp)->tv_sec) ? ((tvp)->tv_usec cmp (uvp)->tv_usec) : ((tvp)->tv_sec cmp (uvp)->tv_sec))
#define TRAP_TRACE 2
#define __FLT32_MANT_DIG__ 24
#define SimulateDiskfullError(A) 
#define RLIMIT_NPROC 7
#define _SQLITE3RTREE_H_ 
#define SQLITE_DROP_TRIGGER 16
#define VM_PAGE_INFO_BASIC 1
#define _INTMAX_T 
#define SQLITE_STAT4_SAMPLES 1
#define MNT_JOURNALED 0x00800000
#define VM_MEMORY_WEBASSEMBLY VM_MEMORY_JAVASCRIPT_CORE
#define O_DIRECTORY 0x00100000
#define UND_SERVER_NULL ((UNDServerRef) 0)
#define __SRD 0x0004
#define MEMORY_OBJECT_DATA_SYNC 0x10
#define __SRW 0x0010
#define SQLITE_DEFAULT_MEMSTATUS 1
#define MACH_MSG_SIZE_RELIABLE ((mach_msg_size_t) 256 * 1024)
#define TK_NE 52
#define NOTE_PDATAMASK 0x000fffff
#define SQLITE_ReverseOrder 0x00001000
#define EXC_CORPSE_VARIANT_BIT 0x100
#define HOST_CAN_HAS_DEBUGGER 11
#define __IOS_UNAVAILABLE 
#define P4_EXPR (-10)
#define SQLITE_CONFIG_MALLOC 4
#define OP_SeekGT 25
#define _CS_POSIX_V6_ILP32_OFF32_LDFLAGS 3
#define CIRCLEQ_INSERT_TAIL(head,elm,field) do { (elm)->field.cqe_next = (void *)(head); (elm)->field.cqe_prev = (head)->cqh_last; if ((head)->cqh_first == (void *)(head)) (head)->cqh_first = (elm); else (head)->cqh_last->field.cqe_next = (elm); (head)->cqh_last = (elm); } while (0)
#define P_SUGID 0x00000100
#define VM_REGION_SUBMAP_SHORT_INFO_COUNT_64 ((mach_msg_type_number_t) (sizeof (vm_region_submap_short_info_data_64_t) / sizeof (natural_t)))
#define PROCESSOR_SET_BASIC_INFO_COUNT ((mach_msg_type_number_t) (sizeof(processor_set_basic_info_data_t)/sizeof(natural_t)))
#define NL_TEXTMAX 2048
#define ELOOP 62
#define MACH_RCV_TRAILER_TYPE(x) (((x) & 0xf) << 28)
#define VQ_SERVEREVENT 0x0800
#define sqlite3Tolower(x) (sqlite3UpperToLower[(unsigned char)(x)])
#define IN_INDEX_INDEX_DESC 4
#define etSQLESCAPE 9
#define __FLT128_HAS_DENORM__ 1
#define NL_MSGMAX 32767
#define F_SETFD 2
#define F_SETFL 4
#define _POSIX_RTSIG_MAX 8
#define MEMCELLSIZE offsetof(Mem,zMalloc)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_1(x) x
#define x86_THREAD_STATE_COUNT ((mach_msg_type_number_t) ( sizeof (x86_thread_state_t) / sizeof (int) ))
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_4(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_5(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_6(x) x
#define SQLITE_INTEGER 1
#define SM_COW 1
#define SQLITE_DBCONFIG_NO_CKPT_ON_CLOSE 1006
#define OP_OpenPseudo 116
#define TAILQ_FIRST(head) ((head)->tqh_first)
#define __ORDER_PDP_ENDIAN__ 3412
#define _STRUCT_LAST_BRANCH_STATE struct __last_branch_state
#define __SWR 0x0008
#define SIOCGIFFUNCTIONALTYPE _IOWR('i', 173, struct ifreq)
#define SQLITE_IDXTYPE_IPK 3
#define COLNAME_TABLE 3
#define __DARWIN_UNIX03 1
#define _Null_unspecified 
#define OP_VUpdate 10
#define __MAC_11_0 110000
#define __MAC_11_1 110100
#define IOPOL_VFS_SKIP_MTIME_UPDATE_ON 1
#define SQLITE_TOOBIG 18
#define MASKBIT32(n) (((unsigned int)1)<<(n))
#define UINT64_MAX 18446744073709551615ULL
#define __PTHREAD_RWLOCKATTR_SIZE__ 16
#define SQLITE_IOERR_SHMMAP (SQLITE_IOERR | (21<<8))
#define EP_Win 0x008000
#define MEM_Static 0x0800
#define __INT_FAST8_MAX__ 0x7f
#define ACCESSX_MAX_TABLESIZE (16 * 1024)
#define _ANSI_STDARG_H_ 
#define _WSTATUS(x) (_W_INT(x) & 0177)
#define TIME_RELATIVE 0x01
#define __MAC_10_15_4 101504
#define P4_REAL (-13)
#define SQLITE_FullColNames 0x00000004
#define CPU_SUBTYPE_X86_ALL ((cpu_subtype_t)3)
#define PROCESSOR_CPU_LOAD_INFO 2
#define VM_PURGABLE_BEHAVIOR_LIFO (1 << VM_PURGABLE_BEHAVIOR_SHIFT)
#define VFUNCTION(zName,nArg,iArg,bNC,xFunc) {nArg, SQLITE_UTF8|(bNC*SQLITE_FUNC_NEEDCOLL), SQLITE_INT_TO_PTR(iArg), 0, xFunc, 0, 0, 0, #zName, {0} }
#define F_SETLK 8
#define PAGER_LOCKINGMODE_EXCLUSIVE 1
#define SQLITE_CursorHints 0x0400
#define MACH_PORT_RIGHT_PORT_SET ((mach_port_right_t) 3)
#define M_2_SQRTPI 1.12837916709551257389615890312154517
#define task_get_debug_control_port(task,port) (task_get_special_port((task), TASK_DEBUG_CONTROL_PORT, (port)))
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_1(x) 
#define ArraySize(X) ((int)(sizeof(X)/sizeof(X[0])))
#define __FLT_IS_IEC_60559__ 2
#define EXC_I386_INTO 2
#define SQLITE_TRANSIENT ((sqlite3_destructor_type)-1)
#define PTHREAD_PRIO_PROTECT 2
#define FWRITE 0x00000002
#define MACH_PORT_RIGHT_LABELH ((mach_port_right_t) 5)
#define GUARD_TYPE_MACH_PORT 0x1
#define FPS_TOS_SHIFT 11
#define O_SYNC 0x0080
#define CPU_SUBTYPE_VAX8600 ((cpu_subtype_t) 9)
#define sqlite3ParseToplevel(p) ((p)->pToplevel ? (p)->pToplevel : (p))
#define MPG_FLAGS_STRICT_REPLY_NO_BANK_ATTR (0x08ull << 56)
#define EVFILT_TIMER (-7)
#define _SC_V6_ILP32_OFFBIG 104
#define TK_STRING 113
#define TK_INDEXED 112
#define UNKNOWN_LOCK (EXCLUSIVE_LOCK+1)
#define ATTR_FORK_ALLOCSIZE 0x00000002
#define VM_MEMORY_OS_ALLOC_ONCE 73
#define CPUSUBFAMILY_ARM_M 3
#define TIOCSIG _IO('t', 95)
#define CURTYPE_PSEUDO 3
#define sqlite3ParserCTX_PDECL ,Parse *pParse
#define __API_AVAILABLE_BEGIN_GET_MACRO(...) 
#define PROCESSOR_SET_INFO_MAX (1024)
#define _FILESEC_REMOVE_ACL ((void *)1)
#define P4_DYNBLOB (-17)
#define SQLITE_INTEGRITY_CHECK_ERROR_MAX 100
#define _RUNE_T 
#define M_LN2 0.693147180559945309417232121458176568
#define MPO_DENAP_RECEIVER 0x40
#define PragFlg_SchemaOpt 0x40
#define ntileFinalizeFunc ntileValueFunc
#define IOV_MAX 1024
#define INT_FAST8_MAX INT8_MAX
#define KERN_DATA_SELECTOR 0x0010
#define INTPTR_MAX 9223372036854775807L
#define __UINTMAX_C(c) c ## UL
#define MACH_MSG_DESCRIPTOR_NULL (mach_msg_descriptor_t *) 0
#define SIGIOT SIGABRT
#define TARGET_OS_DRIVERKIT 0
#define NFSV4_MAX_FH_SIZE 128
#define PragTyp_SOFT_HEAP_LIMIT 32
#define host_get_automountd_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_AUTOMOUNTD_PORT, (port)))
#define MACH_MSGH_BITS_REMOTE_MASK 0x0000001f
#define INCRINIT_TASK 1
#define TF_HasPrimaryKey 0x0004
#define VFS_CTL_NSTATUS 0x0001000A
#define SQLITE_FCNTL_LOCK_TIMEOUT 34
#define CLOCK_MONOTONIC_RAW_APPROX _CLOCK_MONOTONIC_RAW_APPROX
#define VM_MEMORY_DYLIB 33
#define NOTE_FFNOP 0x00000000
#define _SC_PRIORITY_SCHEDULING 35
#define __API_TO_BE_DEPRECATED 100000
#define task_get_host_port(task,port) (task_get_special_port((task), TASK_HOST_PORT, (port)))
#define ATTR_CMN_PARENTID 0x04000000
#define O_CLOEXEC 0x01000000
#define MACH_MSGH_BITS_VOUCHER_MASK 0x001f0000
#define MATTR_VAL_ON 1
#define VM_MEMORY_ASL 81
#define TAILQ_REMOVE(head,elm,field) do { TAILQ_CHECK_NEXT(elm, field); TAILQ_CHECK_PREV(elm, field); if ((TAILQ_NEXT((elm), field)) != NULL) TAILQ_NEXT((elm), field)->field.tqe_prev = (elm)->field.tqe_prev; else { (head)->tqh_last = (elm)->field.tqe_prev; QMD_TRACE_HEAD(head); } *(elm)->field.tqe_prev = TAILQ_NEXT((elm), field); TRASHIT((elm)->field.tqe_next); TRASHIT((elm)->field.tqe_prev); QMD_TRACE_ELEM(&(elm)->field); } while (0)
#define SIOCSIFBRDADDR _IOW('i', 19, struct ifreq)
#define UINT8_TYPE unsigned char
#define IOC_OUT (__uint32_t)0x40000000
#define FIOGETOWN _IOR('f', 123, int)
#define __UINT8_C(c) c
#define MEM_AffMask 0x003f
#define _ID_T 
#define SQLITE_CANTOPEN_BKPT sqlite3CantopenError(__LINE__)
#define VM_MEMORY_MALLOC_LARGE 3
#define sqlite3ParserARG_PARAM 
#define vdbeSorterBlockDebug(x,y,z) 
#define SQLITE_LOCKED_SHAREDCACHE (SQLITE_LOCKED | (1<<8))
#define P4_SUBPROGRAM (-4)
#define osPread ((ssize_t(*)(int,void*,size_t,off_t))aSyscall[9].pCurrent)
#define ATTR_VOL_QUOTA_SIZE 0x10000000
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_8(x) x
#define OP_Concat 108
#define SQLITE_READONLY 8
#define INTPTR_MIN (-INTPTR_MAX-1)
#define __SIZEOF_LONG__ 8
#define SQLITE_ERROR_MISSING_COLLSEQ (SQLITE_ERROR | (1<<8))
#define __TARGETCONDITIONALS__ 
#define _WRITE_OK (1<<10)
#define DST_MET 4
#define __DARWIN_1050INODE64(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_64_BIT_INO_T)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_1(x) 
#define PVFS 20
#define TRAP_BRKPT 1
#define VM_LEDGER_TAG_MEDIA 0x00000003
#define F_GLOBAL_NOCACHE 55
#define BASEPRI(x) (((x) & (255 << 8)) == 0)
#define TIOCSTI _IOW('t', 114, char)
#define __nullable 
#define _POSIX_ASYNCHRONOUS_IO (-1)
#define __IPHONE_12_0 120000
#define SQLITE_SET_LOCKPROXYFILE SQLITE_FCNTL_SET_LOCKPROXYFILE
#define VM_SYNC_KILLPAGES ((vm_sync_t) 0x08)
#define SQLITE_DEFAULT_AUTOVACUUM 0
#define putVarint sqlite3PutVarint
#define _CS_XBS5_ILP32_OFF32_LINTFLAGS 23
#define _CS_XBS5_ILP32_OFFBIG_LDFLAGS 25
#define SRCHFS_NEGATEPARAMS 0x80000000
#define BTREE_BULKLOAD 0x00000001
#define EMSGSIZE 40
#define ATTR_CMNEXT_EXT_FLAGS 0x00000200
#define F_SETNOSIGPIPE 73
#define TK_SLASH 106
#define CPU_SUBTYPE_I386_ALL CPU_SUBTYPE_INTEL(3, 0)
#define SIOCSPGRP _IOW('s', 8, int)
#define sqlite3MemdebugHasType(X,Y) 1
#define _POSIX2_LINE_MAX 2048
#define POLICY_FIFO 4
#define __SYS_APPLEAPIOPTS_H__ 
#define EBADMACHO 88
#define NULL ((void *)0)
#define CPU_SUBTYPE_MIPS_R3000a ((cpu_subtype_t) 6)
#define CLOFF CLOFSET
#define osGetpagesize ((int(*)(void))aSyscall[25].pCurrent)
#define INT32_C(v) (v)
#define FP_ZERO 3
#define sqlite3_column_database_name16 0
#define MNT_MULTILABEL 0x04000000
#define KERN_INVALID_CAPABILITY 20
#define IPC_EVENTLINK_NULL ((ipc_eventlink_t) 0)
#define MACH_PORT_GEN(name) (((name) & 0xff) << 24)
#define __SEOF 0x0020
#define CURSOR_SKIPNEXT 2
#define SQLITE_PRIVATE static
#define __LONG_MAX__ 0x7fffffffffffffffL
#define __IOS_EXTENSION_UNAVAILABLE(_msg) 
#define VM_MEMORY_COREUIFILE 77
#define KERN_COREFILE 50
#define VM_MEMORY_CM_READCACHE 95
#define SQLITE_AFF_NONE 0x40
#define time_value_add(result,addend) { (result)->microseconds += (addend)->microseconds; (result)->seconds += (addend)->seconds; if ((result)->microseconds >= TIME_MICROS_MAX) { (result)->microseconds -= TIME_MICROS_MAX; (result)->seconds++; } }
#define SQLITE_CONFIG_SMALL_MALLOC 27
#define task_set_task_debug_control_port(task,port) (task_set_special_port((task), TASK_DEBUG_CONTROL_PORT, (port)))
#define SRT_EphemTab 12
#define sqlite3ParserTOKENTYPE Token
#define __WATCHOS_1_0 10000
#define SQLITE_CountRows 0x00000080
#define __kpi_deprecated(_msg) 
#define __UINT_FAST16_TYPE__ short unsigned int
#define MACH_EXCEPTION_ERRORS 0x40000000
#define SQLITE_IOERR_CLOSE (SQLITE_IOERR | (16<<8))
#define IOPOL_UTILITY 4
#define WIFSTOPPED(x) (_WSTATUS(x) == _WSTOPPED && WSTOPSIG(x) != 0x13)
#define OP_ReadCookie 94
#define _POSIX_RAW_SOCKETS (-1)
#define KERN_SHREG_PRIVATIZABLE 54
#define A_OLDGETPOLICY 2
#define __SERR 0x0040
#define __DARWIN_C_LEVEL __DARWIN_C_FULL
#define F_BARRIERFSYNC 85
#define SHARED_LOCK 1
#define A_SETQCTRL 36
#define __WATCHOS_7_0 70000
#define __WATCHOS_7_1 70100
#define __WATCHOS_7_2 70200
#define __WATCHOS_7_3 70300
#define __WATCHOS_7_4 70400
#define KERN_INVALID_VALUE 18
#define MACH_MSG_TRAILER_MINIMUM_SIZE sizeof(mach_msg_trailer_t)
#define __SEG_FS 1
#define sqlite3GlobalConfig sqlite3Config
#define MACH_SEND_SYNC_OVERRIDE 0x00100000
#define OP_AutoCommit 1
#define pthread_cleanup_pop(execute) __self->__cleanup_stack = __handler.__next; if (execute) (__handler.__routine)(__handler.__arg); }
#define ExplainQueryPlan(P) sqlite3VdbeExplain P
#define _DARWIN_FEATURE_ONLY_UNIX_CONFORMANCE 1
#define EDEADLK 11
#define __SEG_GS 1
#define __FLT32_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F32
#define ATTR_CMN_RETURNED_ATTRS 0x80000000
#define FSCRED ((kauth_cred_t )-1)
#define VM_MEMORY_CM_MEMORYPOOL 94
#define __MISMATCH_TAGS_PUSH 
#define _SC_THREAD_KEYS_MAX 86
#define x86_AVX_STATE64 (x86_AVX_STATE32 + 1)
#define INT64_MAX 9223372036854775807LL
#define SIGCHLD 20
#define __INT16_TYPE__ short int
#define FULLY_WITHIN 2
#define CURSOR_VALID 0
#define _WEXT_OK (1<<18)
#define YY_MAX_REDUCE 1554
#define _I386_EFLAGS_H_ 
#define IN_INDEX_NOOP 5
#define MACH_VOUCHER_IMPORTANCE_ATTR_DROP_EXTERNAL 2
#define CPU_SUBTYPE_VAX730 ((cpu_subtype_t) 4)
#define F_WRLCK 3
#define TAILQ_FOREACH(var,head,field) for ((var) = TAILQ_FIRST((head)); (var); (var) = TAILQ_NEXT((var), field))
#define VM_MEMORY_CM_REGWARP 101
#define MEM_Blob 0x0010
#define EXC_I386_SSEEXTERR 8
#define AT_REALDEV 0x0200
#define host_get_host_priv_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_PRIV_PORT, (port)))
#define MEMORY_OBJECT_DATA_FLUSH_ALL 0x40
#define SQLITE_CONFIG_PMASZ 25
#define MAX_PATHNAME 512
#define BITVEC_NINT (BITVEC_USIZE/sizeof(u32))
#define NOTE_LINK 0x00000010
#define SA_NOCLDSTOP 0x0008
#define __swift_compiler_version_at_least(...) 1
#define CPU_SUBTYPE_VAX750 ((cpu_subtype_t) 3)
#define _MALLOC_UNDERSCORE_MALLOC_H_ 
#define MACH_RCV_INTERRUPT 0x00000400
#define MACH_PORT_RECEIVE_STATUS 2
#define threadid pthread_self()
#define ILL_PRVREG 6
#define KERN_RETURN_MAX 0x100
#define host_get_audit_control_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_AUDIT_CONTROL_PORT, (port)))
#define SQLITE_FUNC_INTERNAL 0x00040000
#define __LITTLE_ENDIAN__ 1
#define TASK_EXC_GUARD_MP_CORPSE 0x40
#define BITVEC_TELEM u8
#define __bool_true_false_are_defined 1
#define O_LARGEFILE 0
#define TASK_BASIC_INFO_64 5
#define MINCORE_REFERENCED 0x2
#define _MACH_HOST_SPECIAL_PORTS_H_ 
#define _BSD_MACHINE_ENDIAN_H_ 
#define VM_LIB64_SHR_TEXT ((user_addr_t) 0x00007FFF80000000ULL)
#define MATTR_MIGRATE 2
#define CPU_SUBTYPE_VAX780 ((cpu_subtype_t) 1)
#define HOST_PREFERRED_USER_ARCH 12
#define PAGER_JOURNALMODE_TRUNCATE 3
#define CPU_SUBTYPE_VAX785 ((cpu_subtype_t) 2)
#define NTOHL(x) (x) = ntohl((__uint32_t)x)
#define NTOHS(x) (x) = ntohs((__uint16_t)x)
#define MACH_MSG_VM_KERNEL 0x00000400
#define SRCHFS_MATCHFILES 0x00000008
#define ___POSIX_C_DEPRECATED_STARTING_198808L 
#define __IPHONE_8_0 80000
#define __IPHONE_8_1 80100
#define __IPHONE_8_3 80300
#define TAILQ_HEAD_INITIALIZER(head) { NULL, &(head).tqh_first }
#define INT64_MIN (-INT64_MAX-1)
#define PragFlg_NoColumns 0x02
#define _PC_REC_MIN_XFER_SIZE 22
#define SQLITE_MAX_FILE_FORMAT 4
#define COLFLAG_PRIMKEY 0x0001
#define _PTHREAD_MUTEX_SIG_init 0x32AAABA7
#define MAP_HASSEMAPHORE 0x0200
#define SQLITE_MUTEX_STATIC_MEM 3
#define MPG_FLAGS_STRICT_REPLY_MASK (0xffull << 56)
#define SQLITE_JUMPIFNULL 0x10
#define TK_CASE 152
#define OP_SorterData 126
#define etDYNSTRING 6
#define FPC_IC_AFF 0x1000
#define SRT_Set 11
#define TK_CAST 36
#define MACH_PORT_QLIMIT_BASIC (5)
#define vdbeSorterPopulateDebug(x,y) 
#define ATTR_VOL_MOUNTEDDEVICE 0x00008000
#define WHERE_IN_ABLE 0x00000800
#define AUDIT_HARD_LIMIT_FREE_BLOCKS 4
#define OP_Rewind 36
#define ELAST 106
#define SQLITE_TEMP_FILE_PREFIX "etilqs_"
#define BUS_ADRERR 2
#define PAGER_LOCKINGMODE_NORMAL 0
#define SQLITE_TESTCTRL_LOCALTIME_FAULT 18
#define VOL_CAP_INT_NAMEDSTREAMS 0x00002000
#define host_get_amfid_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_AMFID_PORT, (port)))
#define KERN_KDTEST 19
#define ATTR_FILE_FORKLIST 0x00000100
#define __DARWIN_WCHAR_MIN (-0x7fffffff - 1)
#define INTERFACE 1
#define ESOCKTNOSUPPORT 44
#define __INTPTR_TYPE__ long int
#define __API_DEPRECATED_REP_GET_MACRO(...) 
#define host_get_syspolicyd_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_SYSPOLICYD_PORT, (port)))
#define host_get_container_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_CONTAINERD_PORT, (port)))
#define MNT_ASYNC 0x00000040
#define SF_NestedFrom 0x00800
#define __API_UNAVAILABLE_END 
#define put4byte sqlite3Put4byte
#define XUCRED_VERSION 0
#define mem0 GLOBAL(struct Mem0Global, mem0)
#define S_ISBLK(m) (((m) & S_IFMT) == S_IFBLK)
#define SQLITE_DBCONFIG_MAINDBNAME 1000
#define SQLITE_TRACE_PROFILE 0x02
#define P4_STATIC (-1)
#define ETOOMANYREFS 59
#define SQLITE_SERIALIZE_NOCOPY 0x001
#define VM_LEDGER_TAG_NONE 0x00000000
#define memJM 0
#define __STDC_WANT_LIB_EXT1__ 1
#define FP_RND_DOWN 1
#define TK_FUNCTION 167
#define OP_AggStep 154
#define SQLITE_DBCONFIG_ENABLE_FKEY 1002
#define A_SETFSIZE 26
#define KERN_PS_STRINGS 34
#define SQLITE_UTF16_ALIGNED 8
#define OPFLAG_NCHANGE 0x01
#define _PC_NAME_CHARS_MAX 10
#define MBIGCLSHIFT 12
#define MACH_MSG_PORT_DESCRIPTOR 0
#define SYNC_VOLUME_WAIT 0x02
#define P_EXEC 0x00004000
#define MAP_SHARED 0x0001
#define WNOWAIT 0x00000020
#define __unreachable_ok_pop _Pragma("GCC diagnostic pop")
#define SQLITE_DBSTATUS_CACHE_USED 1
#define thread_set_kernel_port(thread,port) (thread_set_special_port((thread), THREAD_KERNEL_PORT, (port)))
#define VM_BEHAVIOR_RSEQNTL ((vm_behavior_t) 3)
#define P_FORCEQUOTA 0x20000000
#define MACH_MSG_GUARDED_PORT_DESCRIPTOR 4
#define STAILQ_INSERT_TAIL(head,elm,field) do { STAILQ_NEXT((elm), field) = NULL; *(head)->stqh_last = (elm); (head)->stqh_last = &STAILQ_NEXT((elm), field); } while (0)
#define __amd64__ 1
#define F_GETNOSIGPIPE 74
#define task_set_kernel_port(task,port) (task_set_special_port((task), TASK_KERNEL_PORT, (port)))
#define SF_SUPPORTED 0x009f0000
#define VM_SYNC_CONTIGUOUS ((vm_sync_t) 0x20)
#define SQLITE_EMPTY 16
#define __LPBIG_OFFBIG (1)
#define BTCURSOR_FIRST_UNINIT pBt
#define SQLITE_ROLLBACK 1
#define EPROTONOSUPPORT 43
#define UINT_MAX (INT_MAX * 2U + 1U)
#define COLNAME_COLUMN 4
#define __NO_INLINE__ 1
#define CPUFAMILY_INTEL_COMETLAKE 0x1cf8a03e
#define EP_HasFunc 0x000004
#define PAGER_FLAGS_MASK 0x38
#define KERN_PROC_LCID 7
#define O_SHLOCK 0x00000010
#define KERN_RAGE_THREAD 2
#define IOCGROUP(x) (((x) >> 8) & 0xff)
#define __FLT_MAX_EXP__ 128
#define IOPOL_STANDARD 5
#define CPUFAMILY_INTEL_KABYLAKE 0x0f817246
#define _SYS_FILE_H_ 
#define _PTHREAD_MUTEXATTR_T 
#define MACH_MSGH_BITS_HOLDS_IMPORTANCE_ASSERTION(bits) (((bits) & MACH_MSGH_BITS_IMPHOLDASRT) != MACH_MSGH_BITS_ZERO)
#define __swift_unavailable(_msg) 
#define POLICY_FIFO_LIMIT_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_fifo_limit)/sizeof(integer_t)))
#define host_get_unfreed_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_UNFREED_PORT, (port)))
#define IOCBASECMD(x) ((x) & ~(IOCPARM_MASK << 16))
#define FSOPT_RETURN_REALDEV 0x00000200
#define _POSIX_REALTIME_SIGNALS (-1)
#define _POSIX_V6_LP64_OFF64 __LP64_OFF64
#define MNT_UPDATE 0x00010000
#define __LASTBRANCH_MAX 32
#define __SIZEOF_FLOAT128__ 16
#define ROWSET_ALLOCATION_SIZE 1024
#define _STRUCT_X86_EXCEPTION_STATE32 struct __darwin_i386_exception_state
#define UINT_FAST64_MAX UINT64_MAX
#define _POSIX_SEM_VALUE_MAX 32767
#define MACH_RCV_MSG 0x00000002
#define OP_Null 73
#define host_set_gssd_port(host,port) (host_set_special_port((host), HOST_GSSD_PORT, (port)))
#define __APPLE_API_EVOLVING 
#define SF_ComplexResult 0x40000
#define OPFLAG_SAVEPOSITION 0x02
#define MACH_SEND_SYNC_USE_THRPRI MACH_SEND_PROPAGATE_QOS
#define BTREE_APPLICATION_ID 8
#define KERN_RPC_SERVER_TERMINATED 43
#define WHERE_ONEPASS_DESIRED 0x0004
#define _CS_XBS5_ILP32_OFFBIG_LINTFLAGS 27
#define _VM_PAGE_SIZE_H_ 
#define TASK_VM_INFO_REV2_COUNT ((mach_msg_type_number_t) (TASK_VM_INFO_REV3_COUNT - 42))
#define _MALLOC_MALLOC_H_ 
#define EXC_MASK_ARITHMETIC (1 << EXC_ARITHMETIC)
#define etTOKEN 11
#define _APPEND_OK (1<<13)
#define SQLITE_TESTCTRL_EXTRA_SCHEMA_CHECKS 29
#define CPU_SUBTYPE_ARM_V4T ((cpu_subtype_t) 5)
#define KERN_PROTECTION_FAILURE 2
#define __WINT_WIDTH__ 32
#define MAP_MEM_NOOP 0
#define YYNOCODE 307
#define EP_ConstFunc 0x080000
#define __DARWIN_SUF_EXTSN "$DARWIN_EXTSN"
#define VM_PAGE_QUERY_PAGE_PRESENT 0x1
#define SRCHFS_SKIPPACKAGES 0x00000040
#define SV_SIGINFO SA_SIGINFO
#define KERN_KDSET_TYPEFILTER 22
#define TK_IGNORE 63
#define CPU_SUBTYPE_ARM_V6M ((cpu_subtype_t) 14)
#define MATTR_VAL_CACHE_FLUSH 6
#define __FLT64X_IS_IEC_60559__ 2
#define VM_MEMORY_SKYWALK 87
#define TAILQ_HEAD(name,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct name { struct type *tqh_first; struct type **tqh_last; TRACEBUF } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define YYNSTATE 543
#define SQLITE_MAX_COLUMN 2000
#define CPU_SUBTYPE_ARM_V7F ((cpu_subtype_t) 10)
#define EXC_I386_EMERR 6
#define __signed signed
#define CPU_SUBTYPE_ARM_V7K ((cpu_subtype_t) 12)
#define CPU_SUBTYPE_ARM_V7M ((cpu_subtype_t) 15)
#define TK_ACTION 28
#define MACH_MSG_TYPE_MOVE_SEND 17
#define CPU_SUBTYPE_ARM_V7S ((cpu_subtype_t) 11)
#define TK_NOT 19
#define isSorter(x) ((x)->eCurType==CURTYPE_SORTER)
#define STAT_GET_NEQ 2
#define KIPC_MAX_PROTOHDR 5
#define VFS_CTL_VERS1 0x01
#define KERNEL_BOOT_INFO_MAX (4096)
#define OS_UNUSED __attribute__((__unused__))
#define CPU_SUBTYPE_ARM_V8M ((cpu_subtype_t) 17)
#define SIGEMT 7
#define VM_FLAGS_USER_REMAP (VM_FLAGS_FIXED | VM_FLAGS_ANYWHERE | VM_FLAGS_RANDOM_ADDR | VM_FLAGS_OVERWRITE| VM_FLAGS_RETURN_DATA_ADDR | VM_FLAGS_RESILIENT_CODESIGN | VM_FLAGS_RESILIENT_MEDIA)
#define THREAD_SCHED_FIFO_INFO 12
#define SQLITE_MUTEX_STATIC_PMEM 7
#define TIOCPKT_DATA 0x00
#define PARSE_MODE_NORMAL 0
#define CTIMEOPT_VAL2_(opt1,opt2) #opt1 "," #opt2
#define TIOCEXT _IOW('t', 96, int)
#define CPU_SUBTYPE_VAX8200 ((cpu_subtype_t) 7)
#define SET_MAP_MEM(caching,flags) ((flags) = ((((unsigned int)(caching)) << 24) & 0xFF000000) | ((flags) & 0xFFFFFF));
#define TK_PRAGMA 70
#define YY_MAX_SHIFT 542
#define __UINT64_TYPE__ long long unsigned int
#define __has_feature(x) 0
#define VM_MACHFACTOR 4
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_15_1(x) x
#define MEMORY_OBJECT_COPY_SYNC 0x8
#define VM_MEMORY_CORPSEINFO 80
#define THREAD_BACKGROUND_POLICY 5
#define SQLITE_TESTCTRL_VDBE_COVERAGE 21
#define CIRCLEQ_REMOVE(head,elm,field) do { CIRCLEQ_CHECK_NEXT(head, elm, field); CIRCLEQ_CHECK_PREV(head, elm, field); if ((elm)->field.cqe_next == (void *)(head)) (head)->cqh_last = (elm)->field.cqe_prev; else (elm)->field.cqe_next->field.cqe_prev = (elm)->field.cqe_prev; if ((elm)->field.cqe_prev == (void *)(head)) (head)->cqh_first = (elm)->field.cqe_next; else (elm)->field.cqe_prev->field.cqe_next = (elm)->field.cqe_next; } while (0)
#define PENDING_BYTE_PAGE(pBt) PAGER_MJ_PGNO(pBt)
#define SIOCGIFASYNCMAP _IOWR('i', 124, struct ifreq)
#define _POSIX_MAPPED_FILES 200112L
#define SIGXCPU 24
#define __FLT128_HAS_QUIET_NAN__ 1
#define VM_MEMORY_COREDATA 45
#define VM_MEMORY_COREIMAGE 68
#define THREAD_STANDARD_POLICY 1
#define OFF_MAX LLONG_MAX
#define SQLITE_DEFAULT_PAGE_SIZE 4096
#define SQLITE_LIMIT_VDBE_OP 5
#define UINT32_TYPE unsigned int
#define _MACH_VM_BEHAVIOR_H_ 
#define EXPR_REDUCEDSIZE offsetof(Expr,iTable)
#define STAILQ_FIRST(head) ((head)->stqh_first)
#define _SC_MAPPED_FILES 47
#define SQLITE_ShortColNames 0x00000040
#define IOPOL_SCOPE_DARWIN_BG 2
#define NEVER(X) (X)
#define STAT_GET_NLT 3
#define P_DELAYIDLESLEEP 0x00040000
#define QMD_TRACE_ELEM(elem) 
#define JT_INNER 0x0001
#define EF_IS_SYNC_ROOT 0x00000004
#define WCOREDUMP(x) (_W_INT(x) & WCOREFLAG)
#define __FLT64X_MIN__ 3.36210314311209350626267781732175260e-4932F64x
#define PAGE_SIZE vm_page_size
#define SQLITE_STMTJRNL_SPILL (64*1024)
#define SQLITE_ATTACH 24
#define VM_MEMORY_COREPROFILE 71
#define CLD_TRAPPED 4
#define etSIZE 4
#define TASK_AUDIT_TOKEN_COUNT (sizeof(audit_token_t) / sizeof(natural_t))
#define TERM_IS 0x800
#define CTL_VM_NAMES { { 0, 0 }, { "vmmeter", CTLTYPE_STRUCT }, { "loadavg", CTLTYPE_STRUCT }, { 0, 0 }, { "dummy", CTLTYPE_INT }, { "swapusage", CTLTYPE_STRUCT } }
#define PTHREAD_CREATE_JOINABLE 1
#define _BSD_MACHINE_TYPES_H_ 
#define __GNUC_STDC_INLINE__ 1
#define TARGET_RT_LITTLE_ENDIAN 1
#define UINT_LEAST64_MAX UINT64_MAX
#define MACH_PORT_QLIMIT_SMALL (16)
#define TIOCIXOFF _IO('t', 128)
#define ExplainQueryPlanParent(P) sqlite3VdbeExplainParent(P)
#define __FLT64_HAS_DENORM__ 1
#define WAL_HEAPMEMORY_MODE 2
#define SLIST_HEAD(name,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct name { struct type *slh_first; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define sqlite3ExplainBreakpoint(A,B) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_1(x) 
#define _POSIX2_BC_BASE_MAX 99
#define UF_DATAVAULT 0x00000080
#define OP_BitAnd 99
#define RUSAGE_INFO_V4 4
#define etCHARX 8
#define _POSIX_MQ_PRIO_MAX 32
#define MEMORY_OBJECT_COPY_TEMPORARY 3
#define ATTR_CMN_PAROBJID 0x00000080
#define __DEC_EVAL_METHOD__ 2
#define ECONNABORTED 53
#define MACH_RCV_LARGE 0x00000004
#define __options_closed_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_closed __enum_options
#define SQLITE_INSERT 18
#define CPU_SUBTYPE_INTEL_FAMILY_MAX 15
#define SQLITE_INT_TO_PTR(X) ((void*)(__PTRDIFF_TYPE__)(X))
#define CPU_SUBTYPE_MIPS_R2300 ((cpu_subtype_t) 1)
#define NOTE_FFAND 0x40000000
#define VM_PURGABLE_BEHAVIOR_MASK (1 << VM_PURGABLE_BEHAVIOR_SHIFT)
#define MACH_MSG_TYPE_PORT_SEND_ONCE MACH_MSG_TYPE_MOVE_SEND_ONCE
#define VM_FLAGS_USER_ALLOCATE (VM_FLAGS_FIXED | VM_FLAGS_ANYWHERE | VM_FLAGS_PURGABLE | VM_FLAGS_4GB_CHUNK | VM_FLAGS_RANDOM_ADDR | VM_FLAGS_NO_CACHE | VM_FLAGS_PERMANENT | VM_FLAGS_OVERWRITE | VM_FLAGS_SUPERPAGE_MASK | VM_FLAGS_ALIAS_MASK)
#define VOL_CAP_FMT_ZERO_RUNS 0x00000080
#define MPG_FLAGS_STRICT_REPLY_INVALID_REPLY_PORT (0x02ull << 56)
#define MAX_SECTOR_SIZE 0x10000
#define OP_IfNotZero 48
#define charMap(X) sqlite3UpperToLower[(unsigned char)X]
#define ENOATTR 93
#define OFF_MIN LLONG_MIN
#define _FILE_OFFSET_BITS 64
#define AUDIT_TRAIL 0x0100
#define CODEC1(P,D,N,X,E) 
#define WHERE_CONSTRAINT 0x0000000f
#define _STRUCT_TIMESPEC struct timespec
#define RLIMIT_FOOTPRINT_INTERVAL 0x4
#define OpcodeRewriteTrace(D,K,P) 
#define MALLOC_INTROSPECT_FN_PTR(fn) fn
#define os_is_compile_time_constant(expr) __builtin_constant_p(expr)
#define VM_SYNC_REUSABLEPAGES ((vm_sync_t) 0x40)
#define MAXPHYSIO_WIRED (16 * 1024 * 1024)
#define DB_UnresetViews 0x0002
#define O_EXCL 0x00000800
#define SQLITE_LITTLEENDIAN 1
#define WHERE_SEEK_UNIQ_TABLE 0x1000
#define _SC_TRACE_LOG 100
#define EISCONN 56
#define SIOCRSLVMULTI _IOWR('i', 59, struct rslvmulti_req)
#define PragFlg_ReadOnly 0x08
#define VDBE_MAGIC_INIT 0x16bceaa5
#define SQLITE_OPEN_URI 0x00000040
#define __TVOS_10_0 100000
#define __TVOS_10_1 100100
#define __TVOS_10_2 100200
#define KERN_KDREADCURTHRMAP 21
#define PAGE_MAX_SIZE (1 << PAGE_MAX_SHIFT)
#define SF_Recursive 0x02000
#define VM_PURGABLE_SET_STATE_FROM_KERNEL ((vm_purgable_t) 3)
#define osFchmod ((int(*)(int,mode_t))aSyscall[14].pCurrent)
#define MACH_MSGH_BITS_OTHER(bits) ((bits) &~ MACH_MSGH_BITS_PORTS_MASK)
#define osPwrite ((ssize_t(*)(int,const void*,size_t,off_t)) aSyscall[12].pCurrent)
#define TWO_BYTE_INT(x) (256*(i8)((x)[0])|(x)[1])
#define SLIST_FOREACH_SAFE(var,head,field,tvar) for ((var) = SLIST_FIRST((head)); (var) && ((tvar) = SLIST_NEXT((var), field), 1); (var) = (tvar))
#define MACH_RCV_TRAILER_LABELS 8
#define F_FINDSIGS 78
#define EUSERS 68
#define put2byte(p,v) ((p)[0] = (u8)((v)>>8), (p)[1] = (u8)(v))
#define _VA_LIST_T_H 
#define __INT8_MAX__ 0x7f
#define SQLITE_VTAB_CONSTRAINT_SUPPORT 1
#define __PIC__ 2
#define MACH_RCV_TRAILER_ELEMENTS(x) (((x) & 0xf) << 24)
#define KERN_HOSTID 11
#define __UINT_FAST32_TYPE__ unsigned int
#define _SC_PAGE_SIZE _SC_PAGESIZE
#define P_ADOPTPERSONA 0x04000000
#define SRT_Queue 7
#define IsVirtual(X) ((X)->nModuleArg)
#define UNDERFLOW 4
#define KERN_INVALID_ADDRESS 1
#define EV_POLL EV_FLAG0
#define HW_BUS_FREQ 14
#define WALINDEX_PGSZ ( sizeof(ht_slot)*HASHTABLE_NSLOT + HASHTABLE_NPAGE*sizeof(u32) )
#define I386_EXCEPTION_STATE_COUNT i386_EXCEPTION_STATE_COUNT
#define TK_TABLE 16
#define SQLITE_FUNC_CONSTANT 0x0800
#define __FLT_MAX__ 3.40282346638528859811704183484516925e+38F
#define SQLITE_DROP_TEMP_TABLE 13
#define MACH_MSG_OOL_PORTS_DESCRIPTOR 2
#define CPU_SUBTYPE_X86_ARCH1 ((cpu_subtype_t)4)
#define SQLITE_FUNC_HASH(C,L) (((C)+(L))%SQLITE_FUNC_HASH_SZ)
#define OP_SorterCompare 125
#define TIOCGDRAINWAIT _IOR('t', 86, int)
#define _POSIX_MQ_OPEN_MAX 8
#define SQLITE_RECURSIVE 33
#define OP_Column 90
#define _IO(g,n) _IOC(IOC_VOID, (g), (n), 0)
#define SA_NOCLDWAIT 0x0020
#define KERN_NOT_WAITING 48
#define host_set_sysdiagnose_port(host,port) (host_set_special_port((host), HOST_SYSDIAGNOSE_PORT, (port)))
#define MEM_Null 0x0001
#define OP_Found 29
#define TK_DEFAULT 116
#define KERN_INVALID_ARGUMENT 4
#define _POSIX2_BC_DIM_MAX 2048
#define TIOCCDTR _IO('t', 120)
#define PTHREAD_MUTEX_RECURSIVE 2
#define EP_DblQuoted 0x000040
#define __INT32_TYPE__ int
#define _FTS5_H 
#define LIST_CHECK_NEXT(elm,field) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_2(x) 
#define VM_PAGE_QUERY_PAGE_EXTERNAL 0x80
#define __INT_LEAST32_WIDTH__ 32
#define WO_GE (WO_EQ<<(TK_GE-TK_EQ))
#define KERN_MEMORY_PRESENT 23
#define CPU_SUBTYPE_ARM_XSCALE ((cpu_subtype_t) 8)
#define _QUAD_HIGHWORD 1
#define PragTyp_JOURNAL_SIZE_LIMIT 21
#define UINT8_C(v) (v)
#define MACH_SEND_INVALID_HEADER 0x10000010
#define SQLITE_MATCH 0
#define PROCESSOR_SET_LOAD_INFO_COUNT ((mach_msg_type_number_t) (sizeof(processor_set_load_info_data_t)/sizeof(natural_t)))
#define EXC_I386_BPTFLT 3
#define _POSIX2_C_BIND 200112L
#define EV_UDATA_SPECIFIC 0x0100
#define etSQLESCAPE2 10
#define etSQLESCAPE3 14
#define STATUS_WORD(rpl,ipl) (((ipl) << 8) | (rpl))
#define __UINTMAX_MAX__ 0xffffffffffffffffUL
#define SQLITE_FCNTL_WIN32_SET_HANDLE 23
#define SQLITE_SHM_LOCK 2
#define _POSIX_V7_ILP32_OFFBIG __ILP32_OFFBIG
#define USER_ADDR_NULL ((user_addr_t) 0)
#define TIOCGSIZE TIOCGWINSZ
#define SQLITE_RANGE 25
#define SIZE_T_MAX ULONG_MAX
#define SQLITE_DBSTATUS_STMT_USED 3
#define ENOPOLICY 103
#define MACH_SEND_INVALID_NOTIFY 0x1000000b
#define EAGAIN 35
#define VM_PURGABLE_STATE_MAX 3
#define SQLITE_INDEX_CONSTRAINT_ISNOTNULL 70
#define setDefaultSyncFlag(pBt,safety_level) 
#define __LDBL_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951L
#define LIST_NEXT(elm,field) ((elm)->field.le_next)
#define VM_BEHAVIOR_DONTNEED ((vm_behavior_t) 5)
#define PROC_FLAG_DARWINBG 0x8000
#define __INT16_C(c) c
#define _CTERMID_H_ 
#define VM_MEMORY_WEBCORE_PURGEABLE_BUFFERS 69
#define SQLITE_FAULTINJECTOR_MALLOC 0
#define MS_INVALIDATE 0x0002
#define A_OLDGETCOND 20
#define FD_CLR(n,p) __DARWIN_FD_CLR(n, p)
#define timersub(tvp,uvp,vvp) do { (vvp)->tv_sec = (tvp)->tv_sec - (uvp)->tv_sec; (vvp)->tv_usec = (tvp)->tv_usec - (uvp)->tv_usec; if ((vvp)->tv_usec < 0) { (vvp)->tv_sec--; (vvp)->tv_usec += 1000000; } } while (0)
#define PragTyp_LOCKING_MODE 23
#define VOL_CAP_FMT_NO_ROOT_TIMES 0x00000020
#define SQLITE_SO_ASC 0
#define host_set_audit_control_port(host,port) (host_set_special_port((host), HOST_AUDIT_CONTROL_PORT, (port)))
#define EPROGMISMATCH 75
#define NOTE_TRACKERR 0x00000002
#define DbMaskZero(M) (M)=0
#define SF_DATALESS 0x40000000
#define MNT_UNION 0x00000020
#define NC_UAggInfo 0x0100
#define CLOCK_ALARM_MINRES 4
#define A_GETCTLMODE 41
#define TASK_EXC_GUARD_VM_FATAL 0x08
#define CPUSUBFAMILY_ARM_HC_HD 5
#define DOMAIN 1
#define VM_PURGABLE_GET_STATE ((vm_purgable_t) 1)
#define NOTE_BACKGROUND 0x00000040
#define PragFlg_NoColumns1 0x04
#define _OS_COMMON_H_ 
#define SQLITE_FCNTL_VFSNAME 12
#define MNT_QUARANTINE 0x00000400
#define MACH_PORT_QLIMIT_ZERO (0)
#define PGHDR_WRITEABLE 0x004
#define TK_UPLUS 169
#define BC_STRING_MAX 1000
#define SQLITE_FCNTL_VFS_POINTER 27
#define CPUFAMILY_INTEL_6_26 CPUFAMILY_INTEL_NEHALEM
#define x86_AVX512_STATE32 19
#define TARGET_CPU_X86_64 1
#define PTHREAD_STACK_MIN 8192
#define CLD_KILLED 2
#define OP_Return 66
#define SQLITE_TRACE_ROW 0x04
#define host_get_fairplayd_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_FAIRPLAYD_PORT, (port)))
#define _CT_RUNE_T 
#define __unreachable_ok_push _Pragma("GCC diagnostic push") _Pragma("GCC diagnostic ignored \"-Wunreachable-code\"")
#define EP_Subquery 0x200000
#define __INT8_C(c) c
#define SQLITE_DEPRECATED 
#define VM_PURGABLE_STATE_MIN 0
#define KERN_THREADNAME 71
#define HOST_CPU_LOAD_INFO 3
#define SQLITE_FUNC_NEEDCOLL 0x0020
#define VM_REGION_TOP_INFO_COUNT ((mach_msg_type_number_t) (sizeof(vm_region_top_info_data_t) / sizeof(natural_t)))
#define A_GETCOND 37
#define IOPOL_THROTTLE 3
#define EXC_MASK_CORPSE_NOTIFY (1 << EXC_CORPSE_NOTIFY)
#define BMS ((int)(sizeof(Bitmask)*8))
#define x86_AVX512_STATE64 (x86_AVX512_STATE32 + 1)
#define MACH_PORT_QLIMIT_MAX MACH_PORT_QLIMIT_LARGE
#define SQLITE_UTF16NATIVE SQLITE_UTF16LE
#define EP_Reduced 0x002000
#define BTALLOC_LE 2
#define TK_AFTER 29
#define __GCC_ATOMIC_LLONG_LOCK_FREE 2
#define __MAC_10_10 101000
#define CPU_SUBTYPE_VAX_ALL ((cpu_subtype_t) 0)
#define VOL_CAP_INT_READDIRATTR 0x00000008
#define __enum_open 
#define PAGER_JOURNALMODE_DELETE 0
#define _STDARG_H 
#define _V6_LPBIG_OFFBIG __LPBIG_OFFBIG
#define MAXFRAG 8
#define XN_EXPR (-2)
#define __POSIX_C_DEPRECATED(ver) ___POSIX_C_DEPRECATED_STARTING_ ##ver
#define _MACH_MACHINE_PROCESSOR_INFO_H_ 
#define TARGET_CPU_ARM 0
#define SQLITE_KEEPNULL 0x08
#define FD_ZERO(p) __DARWIN_FD_ZERO(p)
#define VM_PROT_DEFAULT (VM_PROT_READ|VM_PROT_WRITE)
#define EXC_I386_INVOPFLT 6
#define PragTyp_CASE_SENSITIVE_LIKE 6
#define etPOINTER 13
#define VOL_CAP_FMT_SHARED_SPACE 0x00800000
#define columnType(A,B,C,D,E) columnTypeImpl(A,B)
#define VM_MAP_NULL ((vm_map_t) 0)
#define EXC_BREAKPOINT 6
#define VOL_CAP_INT_ALLOCATE 0x00000040
#define PGOFSET (NBPG-1)
#define __INT_LEAST64_WIDTH__ 64
#define SQLITE_SkipScan 0x4000
#define IOPOL_MATERIALIZE_DATALESS_FILES_ON 2
#define INT_LEAST16_MAX INT16_MAX
#define _CS_POSIX_V6_ILP32_OFF32_LIBS 4
#define PTRMAP_PTROFFSET(pgptrmap,pgno) (5*(pgno-pgptrmap-1))
#define EP_Distinct 0x000002
#define _GNU_SOURCE 
#define _POSIX_SAVED_IDS 200112L
#define __P(protos) protos
#define MPO_STRICT 0x20
#define TK_WINDOW 159
#define TARGET_OS_RTKIT 0
#define _RMFILE_OK (1<<14)
#define IOPOL_TYPE_VFS_ATIME_UPDATES 2
#define KERN_PROCDELAYTERM 53
#define NOCRED ((kauth_cred_t )0)
#define SQLITE_LOCK_RESERVED 2
#define P_DIRTY_MARKED 0x00000080
#define __DARWIN_SUF_UNIX03 
#define __IPHONE_9_0 90000
#define __IPHONE_9_2 90200
#define __IPHONE_9_3 90300
#define BTREE_HINT_RANGE 0
#define SPILLFLAG_NOSYNC 0x04
#define OID_AUTO_START 100
#define SQLITE_N_BTREE_META 16
#define pcache1EnterMutex(X) assert((X)->mutex==0)
#define SM_SHARED_ALIASED 7
#define O_BINARY 0
#define NMBCLUSTERS ((1024 * 1024) / MCLBYTES)
#define EXC_MACF_MIN 0x20000
#define _U_SHORT 
#define TK_BEGIN 5
#define VM_LEDGER_FLAGS (VM_LEDGER_FLAG_NO_FOOTPRINT)
#define SQLITE_PRINT_BUF_SIZE 70
#define HW_MODEL 2
#define VM_LOADAVG 2
#define S_ISCHR(m) (((m) & S_IFMT) == S_IFCHR)
#define _CS_POSIX_V6_ILP32_OFFBIG_LIBS 7
#define MACH_PORT_QLIMIT_MIN MACH_PORT_QLIMIT_ZERO
#define VM_PAGE_QUERY_PAGE_SPECULATIVE 0x40
#define M_SQRT1_2 0.707106781186547524400844362104849039
#define SQLITE_MAX_U32 ((((u64)1)<<32)-1)
#define O_NOCTTY 0x00020000
#define SET_FULLSYNC(x,y) 
#define FIONBIO _IOW('f', 126, int)
#define AT_FDONLY 0x0400
#define __ATOMIC_ACQUIRE 2
#define TIOCPTYGNAME _IOC(IOC_OUT, 't', 83, 128)
#define HOST_VM_INFO64_LATEST_COUNT HOST_VM_INFO64_COUNT
#define MACHINE_THREAD_STATE_COUNT x86_THREAD_STATE_COUNT
#define SEARCHFS_MAX_SEARCHPARMS 4096
#define __GCC_IEC_559_COMPLEX 2
#define task_set_host_port(task,port) (task_set_special_port((task), TASK_HOST_PORT, (port)))
#define MACH_PORT_TYPE_PORT_RIGHTS (MACH_PORT_TYPE_SEND_RIGHTS|MACH_PORT_TYPE_RECEIVE)
#define SQLITE_THREADSAFE 1
#define TF_StatsUsed 0x0100
#define RTLD_NOW 0x2
#define AUDITDEV_FILENAME "audit"
#define _SC_TIMEOUTS 95
#define __SIZEOF_FLOAT80__ 16
#define MACH_PORT_STATUS_FLAG_REVIVE 0x10
#define FCNTL_FS_SPECIFIC_BASE 0x00010000
#define INT_LEAST16_MIN INT16_MIN
#define HOST_CALENDAR_CHANGED_REPLYID 950
#define _POSIX_THREAD_SAFE_FUNCTIONS 200112L
#define TK_JOIN 139
#define SIOCSDRVSPEC _IOW('i', 123, struct ifdrv)
#define I386_THREAD_STATE_MAX (614)
#define YY_NO_ACTION 1173
#define PROCESSOR_PM_REGS_INFO 0x10000001
#define SQLITE_MAGIC_BUSY 0xf03b7906
#define TASK_BASIC_INFO_32 4
#define _SECURE__STRING_H_ 
#define CPU_SUBTYPE_MC88000_ALL ((cpu_subtype_t) 0)
#define VM_REGION_EXTENDED_INFO_COUNT ((mach_msg_type_number_t) (sizeof (vm_region_extended_info_data_t) / sizeof (natural_t)))
#define __INTMAX_C(c) c ## L
#define SIOCGIFKPI _IOWR('i', 135, struct ifreq)
#define PTHREAD_SCOPE_PROCESS 2
#define PTHREAD_CANCELED ((void *) 1)
#define O_ACCMODE 0x0003
#define P_CLASSIC P_TRANSLATED
#define TRUE 1
#define SIG_HOLD (void (*)(int))5
#define TIOCPKT_IOCTL 0x40
#define ru_last ru_nivcsw
#define __WCHAR_MAX__ 0x7fffffff
#define CPUFAMILY_ARM_CYCLONE 0x37a09642
#define SQLITE_STATIC ((sqlite3_destructor_type)0)
#define SQLITE_STMTSTATUS_FULLSCAN_STEP 1
#define SRCHFS_MATCHDIRS 0x00000004
#define TK_GROUP 142
#define CPU_SUBTYPE_PENTIUM_3_XEON CPU_SUBTYPE_INTEL(8, 2)
#define MACH_EXCEPTION_CODES 0x80000000
#define host_get_launchctl_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_LAUNCHCTL_PORT, (port)))
#define _POSIX_TYPED_MEMORY_OBJECTS (-1)
#define CPUFAMILY_INTEL_WESTMERE 0x573b5eec
#define MNT_VISFLAGMASK (MNT_RDONLY | MNT_SYNCHRONOUS | MNT_NOEXEC | MNT_NOSUID | MNT_NODEV | MNT_UNION | MNT_ASYNC | MNT_EXPORTED | MNT_QUARANTINE | MNT_LOCAL | MNT_QUOTA | MNT_REMOVABLE | MNT_ROOTFS | MNT_DOVOLFS | MNT_DONTBROWSE | MNT_IGNORE_OWNERSHIP | MNT_AUTOMOUNTED | MNT_JOURNALED | MNT_NOUSERXATTR | MNT_DEFWRITE | MNT_MULTILABEL | MNT_NOATIME | MNT_STRICTATIME | MNT_SNAPSHOT | MNT_CPROTECT)
#define N_OR_COST 3
#define USER_COLL_WEIGHTS_MAX 6
#define LEDGER_NULL ((ledger_t) 0)
#define INT16_C(v) (v)
#define __WINT_MAX__ 0x7fffffff
#define _SC_2_C_DEV 19
#define _SC_BARRIERS 66
#define BTS_PENDING 0x0080
#define CC_QUOTE 8
#define CPU_SUBTYPE_ARM_V5TEJ ((cpu_subtype_t) 7)
#define SM_PRIVATE 2
#define PROCESSOR_NULL ((processor_t) 0)
#define _CDEFS_H_ 
#define vsnprintf(str,len,format,ap) __builtin___vsnprintf_chk (str, len, 0, __darwin_obsz(str), format, ap)
#define REQUESTED_TRAILER_SIZE(y) REQUESTED_TRAILER_SIZE_NATIVE(y)
#define HOST_TELEMETRY_PORT (13 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define S_TYPEISSEM(buf) (0)
#define EILSEQ 92
#define SIOCSIFDSTADDR _IOW('i', 14, struct ifreq)
#define MATTR_VAL_ICACHE_FLUSH 8
#define CIRCLEQ_EMPTY(head) ((head)->cqh_first == (void *)(head))
#define SQLITE_DBCONFIG_ENABLE_LOAD_EXTENSION 1005
#define __SIZE_MAX__ 0xffffffffffffffffUL
#define FPC_IM FPC_IE
#define _MACH_VM_TYPES_H_ 
#define SQLITE_FUNC_EPHEM 0x0010
#define afpfsByteRangeLock2FSCTL _IOWR('z', 23, struct ByteRangeLockPB2)
#define FILEHANDLEID(fd) (SQLITE_PTR_TO_INT(fd))
#define SORTER_MAX_MERGE_COUNT 16
#define KERN_AFFINITY 43
#define MACH_SEND_INVALID_RIGHT 0x1000000a
#define SIOCGIFWAKEFLAGS _IOWR('i', 136, struct ifreq)
#define INT_464269060799999 ((((i64)0x1a640)<<32)|0x1072fdff)
#define fileChunkSize(nChunkSize) (sizeof(FileChunk) + ((nChunkSize)-8))
#define SQLITE_STATUS_SCRATCH_SIZE 8
#define WIFEXITED(x) (_WSTATUS(x) == 0)
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define O_EVTONLY 0x00008000
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8 1
#define EHOSTUNREACH 65
#define S_TYPEISSHM(buf) (0)
#define SQLITE_ACCESS_READ 2
#define TAILQ_FOREACH_SAFE(var,head,field,tvar) for ((var) = TAILQ_FIRST((head)); (var) && ((tvar) = TAILQ_NEXT((var), field), 1); (var) = (tvar))
#define __GCC_IEC_559 2
#define ATTR_CMNEXT_REALDEVID 0x00000040
#define CPU_SUBTYPE_386 CPU_SUBTYPE_INTEL(3, 0)
#define SIOCSIFMEDIA _IOWR('i', 55, struct ifreq)
#define RLIMIT_STACK 3
#define _IOFBF 0
#define _STRUCT_X86_CPMU_STATE64 struct __darwin_x86_cpmu_state64
#define _POSIX2_BC_STRING_MAX 1000
#define TK_RESTRICT 74
#define SQLITE_MAGIC_CLOSED 0x9f3c2d33
#define _SC_NPROCESSORS_CONF 57
#define P_PHYSIO 0
#define putc_unlocked(x,fp) __sputc(x, fp)
#define SQLITE_FUNC_ENCMASK 0x0003
#define host_set_kextd_port(host,port) (host_set_special_port((host), HOST_KEXTD_PORT, (port)))
#define VM_BEHAVIOR_REUSE ((vm_behavior_t) 9)
#define _SC_XOPEN_STREAMS 114
#define HOST_EXTMOD_INFO64_COUNT ((mach_msg_type_number_t) (sizeof(vm_extmod_statistics_data_t)/sizeof(integer_t)))
#define dtoc(x) ((x)>>(PGSHIFT-DEV_BSHIFT))
#define SSIZE_MAX LONG_MAX
#define VM_PAGE_QUERY_PAGE_FICTITIOUS 0x2
#define BTREE_MEMORY 2
#define F_ADDFILESIGS_RETURN 97
#define UNIX_SHM_BASE ((22+SQLITE_SHM_NLOCK)*4)
#define HASHTABLE_NPAGE 4096
#define OP_MaxPgcnt 167
#define HOST_LAST_SPECIAL_KERNEL_PORT HOST_IO_MASTER_PORT
#define KERN_NISDOMAINNAME 22
#define x86_PAGEIN_STATE_COUNT ((mach_msg_type_number_t)(sizeof(x86_pagein_state_t) / sizeof(int)))
#define TF_Readonly 0x0001
#define SQLITE_FCNTL_DB_UNCHANGED 0xca093fa0
#define SIOCSETVLAN SIOCSIFVLAN
#define LINK_MAX 32767
#define WINDOW_ENDING_NUM 4
#define PTHREAD_MUTEX_DEFAULT PTHREAD_MUTEX_NORMAL
#define KERN_USRSTACK KERN_USRSTACK64
#define PROXY_CONCHVERSION 2
#define EXC_I386_ALIGNFLT 17
#define KERN_DEFAULT_SET 31
#define DbHasAnyProperty(D,I,P) (((D)->aDb[I].pSchema->schemaFlags&(P))!=0)
#define OP_MakeRecord 92
#define MAC_OS_X_VERSION_10_14_4 101404
#define SQLITE_ERROR 1
#define SM_TRUESHARED 5
#define MACH_MSGH_BITS_USER 0x801f1f1fU
#define PragTyp_COLLATION_LIST 7
#define OS_NOTHROW __attribute__((__nothrow__))
#define MAC_OS_X_VERSION_10_14_6 101406
#define TH_STATE_UNINTERRUPTIBLE 4
#define CPUFAMILY_INTEL_SANDYBRIDGE 0x5490b78c
#define OP_CreateBtree 139
#define VM_PAGE_QUERY_PAGE_CS_VALIDATED 0x100
#define F_ALLOCATEALL 0x00000004
#define CAST_USER_ADDR_T(a_ptr) ((user_addr_t)((uintptr_t)(a_ptr)))
#define TASK_SEATBELT_PORT 7
#define ATTR_FORK_TOTALSIZE 0x00000001
#define OPFLAG_EPHEM 0x01
#define POLL_MSG 3
#define MAP_MEM_COPYBACK 1
#define MACH_MSG_OPTION_NONE 0x00000000
#define P_NOSWAP 0
#define __FINITE_MATH_ONLY__ 0
#define __IPHONE_13_1 130100
#define MACH_SEND_INTERRUPT 0x00000040
#define TIME_MICROS_MAX (1000000)
#define TARGET_CPU_ALPHA 0
#define isinf(x) ( sizeof(x) == sizeof(float) ? __inline_isinff((float)(x)) : sizeof(x) == sizeof(double) ? __inline_isinfd((double)(x)) : __inline_isinfl((long double)(x)))
#define TASK_FLAVOR_CONTROL 0
#define OS_CLOSED_OPTIONS(_name,_type,...) __OS_ENUM_C_FALLBACK(_name, _type, ## __VA_ARGS__) __OS_ENUM_ATTR_CLOSED __OS_OPTIONS_ATTR
#define JOURNAL_HDR_SZ(pPager) (pPager->sectorSize)
#define OP_Not 19
#define TK_DROP 129
#define SIGALRM 14
#define EBADF 9
#define _SC_XBS5_ILP32_OFFBIG 123
#define VM_PURGABLE_DEBUG_EMPTY (0x1 << VM_PURGABLE_DEBUG_SHIFT)
#define PragTyp_OPTIMIZE 27
#define SQLITE_WARNING 28
#define _X86_INSTRUCTION_STATE_MAX_INSN_BYTES (2448 - 64 - 4)
#define MACH_VOUCHER_ATTR_KEY_USER_DATA ((mach_voucher_attr_key_t)7)
#define _SC_SHARED_MEMORY_OBJECTS 39
#define ATTR_VOL_NAME 0x00002000
#define CLK_TCK __DARWIN_CLK_TCK
#define ECANCELED 89
#define SimulateIOErrorBenign(X) 
#define SIGFPE 8
#define MEM_IntReal 0x0020
#define _LARGE_FILE 1
#define VM_MEMORY_DHMM 84
#define TASK_CATEGORY_POLICY 1
#define OP_ResultRow 81
#define MNAMELEN MAXPATHLEN
#define VFS_CTL_NOLOCKS 0x00010006
#define UNIXFILE_EXCL 0x01
#define ATTR_CMNEXT_REALFSID 0x00000080
#define CLOCK_ALARM_MAXRES 5
#define LIST_CHECK_PREV(elm,field) 
#define SQLITE_PRINTF_INTERNAL 0x01
#define CIRCLEQ_FOREACH(var,head,field) for((var) = (head)->cqh_first; (var) != (void *)(head); (var) = (var)->field.cqe_next)
#define KERN_MISSING_KC 54
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_4(x) 
#define _U_LONG 
#define CPU_SUBTYPE_PENTIUM_3_M CPU_SUBTYPE_INTEL(8, 1)
#define OP_HaltIfNull 68
#define PROCESSOR_INFO_MAX (1024)
#define MAP_MEM_PURGABLE 0x040000
#define SQLITE_ACCESS_EXISTS 0
#define _CS_DARWIN_USER_DIR 65536
#define ACCESSX_MAX_DESCRIPTORS 100
#define HOST_SEATBELT_PORT (7 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define WAKEMON_GET_PARAMS 0x04
#define SQLITE_TOKEN_QUOTED 0x1
#define SIOCAIFADDR _IOW('i', 26, struct ifaliasreq)
#define __restrict restrict
#define PAGER_OMIT_JOURNAL 0x0001
#define _SC_BC_SCALE_MAX 11
#define FTS5_TOKENIZE_PREFIX 0x0002
#define THREAD_STATE_FLAVOR_LIST 0
#define __SHRT_MAX__ 0x7fff
#define CPU_SUBTYPE_MC68030_ONLY ((cpu_subtype_t) 3)
#define w_stopval w_S.w_Stopval
#define __LDBL_MAX__ 1.18973149535723176502126385303097021e+4932L
#define SQLITE_MAX_DEFAULT_PAGE_SIZE 8192
#define ILL_ILLOPC 1
#define ILL_ILLOPN 4
#define KERN_LOW_PRI_DELAY 57
#define _SC_XOPEN_ENH_I18N 109
#define NOTE_EXIT_DETAIL 0x02000000
#define VdbeCoverageNeverNullIf(v,x) 
#define P5_ConstraintNotNull 1
#define EXC_RPC_ALERT 9
#define __LDBL_IS_IEC_60559__ 2
#define P_CONTROLT 0x00000002
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_1(x) 
#define SIGSTKSZ 131072
#define SQLITE_CREATE_TEMP_INDEX 3
#define SQLITE_TESTCTRL_SORTER_MMAP 24
#define MATTR_VAL_DCACHE_FLUSH 7
#define VOL_CAPABILITIES_INTERFACES 1
#define EP_NoReduce 0x020000
#define NOGROUP 65535
#define SAVEPOINT_RELEASE 1
#define SQLITE_CONFIG_STMTJRNL_SPILL 26
#define MACH_VOUCHER_ATTR_KEY_PTHPRIORITY ((mach_voucher_attr_key_t)4)
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define PGHDR_WAL_APPEND 0x040
#define VdbeCoverageEqNe(v) 
#define SRT_Except 2
#define TARGET_CPU_SPARC 0
#define TASK_POWER_INFO_V2 26
#define SQLITE_AFF_NUMERIC 0x43
#define _SC_V6_LP64_OFF64 105
#define _SC_JOB_CONTROL 6
#define OS_VXWORKS 0
#define FPE_FLTRES 4
#define __APPLE_CC__ 1
#define EINPROGRESS 36
#define PragTyp_HEADER_VALUE 0
#define EP_Quoted 0x4000000
#define _SC_SEM_VALUE_MAX 50
#define _PC_ASYNC_IO 17
#define OP_IfNoHope 26
#define PragFlg_SchemaReq 0x80
#define NC_VarSelect 0x0040
#define SQLITE_ERROR_SNAPSHOT (SQLITE_ERROR | (3<<8))
#define EVFILT_THREADMARKER EVFILT_SYSCOUNT
#define ATTR_CMN_FLAGS 0x00040000
#define SQLITE_CDECL 
#define _SYS_IOCCOM_H_ 
#define MINCORE_MODIFIED_OTHER 0x10
#define RTLD_SELF ((void *) -3)
#define MACH_SEND_IMPORTANCE 0x00080000
#define __DARWIN_OSSwapInt16(x) ((__uint16_t)(__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt16(x) : _OSSwapInt16(x)))
#define _MACH_HOST_NOTIFY_H_ 
#define MEMORY_OBJECT_RETURN_NONE 0
#define _POSIX_READER_WRITER_LOCKS 200112L
#define BITVEC_NELEM (BITVEC_USIZE/sizeof(BITVEC_TELEM))
#define A_OLDSETCOND 21
#define _MACH_TASK_INFO_H_ 
#define SQLITE_SimplifyJoin 0x2000
#define _POSIX_AIO_MAX 1
#define OP_ElseNotEq 58
#define PAGER_JOURNALMODE_PERSIST 1
#define IPC_VOUCHER_NULL ((ipc_voucher_t) 0)
#define __printflike(fmtarg,firstvararg) __attribute__((__format__ (__printf__, fmtarg, firstvararg)))
#define _XOPEN_NAME_MAX 255
#define __TVOS_11_0 110000
#define __TVOS_11_1 110100
#define __TVOS_11_2 110200
#define __TVOS_11_3 110300
#define __TVOS_11_4 110400
#define HOST_VM_INFO64_REV1_COUNT HOST_VM_INFO64_LATEST_COUNT
#define __GNUC_VA_LIST 
#define OP_Program 45
#define __WINT_MIN__ (-__WINT_MAX__ - 1)
#define AU_DEFAUDITSID 0
#define F_ADDFILESIGS 61
#define feof_unlocked(p) __sfeof(p)
#define EVFILT_WRITE (-2)
#define CPUFAMILY_ARM_TYPHOON 0x2c91a47e
#define _PTHREAD_COND_T 
#define _MODE_T 
#define MACH_MSG_TYPE_DISPOSE_RECEIVE 24
#define NCARGS ARG_MAX
#define S_IWRITE S_IWUSR
#define tkTEMP 5
#define _SYS_UNISTD_H_ 
#define TK_INTERSECT 133
#define ERPCMISMATCH 73
#define KERN_KDSETRTCDEC 15
#define OE_Ignore 4
#define _SYS_PARAM_H_ 
#define __DARWIN_NBBY 8
#define __FLT128_MANT_DIG__ 113
#define EALREADY 37
#define __DBL_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define IOC_INOUT (IOC_IN|IOC_OUT)
#define __WCHAR_MIN__ (-__WCHAR_MAX__ - 1)
#define SRT_Union 1
#define KEYINFO_ORDER_DESC 0x01
#define F_NOCACHE 48
#define KERN_LOCK_SET_DESTROYED 38
#define PTHREAD_COND_INITIALIZER {_PTHREAD_COND_SIG_init, {0}}
#define AUDIT_TRIGGER_CLOSE_AND_DIE 4
#define SRUN 2
#define EP_Skip 0x001000
#define HW_DISKNAMES 8
#define SQLITE_FUNC_SLOCHNG 0x2000
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define SQLITE_DBSTATUS_CACHE_SPILL 12
#define WSTOPPED 0x00000008
#define PAGER_READER 1
#define DFUNCTION(zName,nArg,iArg,bNC,xFunc) {nArg, SQLITE_FUNC_SLOCHNG|SQLITE_UTF8, 0, 0, xFunc, 0, 0, 0, #zName, {0} }
#define _STRUCT_X86_FLOAT_STATE32 struct __darwin_i386_float_state
#define IN_INDEX_MEMBERSHIP 0x0002
#define _STRUCT_X86_INSTRUCTION_STATE struct __x86_instruction_state
#define SRCHFS_SKIPLINKS 0x00000010
#define MACH_VOUCHER_ATTR_KEY_IMPORTANCE ((mach_voucher_attr_key_t)2)
#define HTONL(x) (x) = htonl((__uint32_t)x)
#define SF_IMMUTABLE 0x00020000
#define WHERE_ONEROW 0x00001000
#define HTONS(x) (x) = htons((__uint16_t)x)
#define SQLITE_DROP_INDEX 10
#define FP_NORMAL 4
#define PGSHIFT 12
#define VOL_CAP_INT_SEARCHFS 0x00000001
#define AU_FS_MINFREE 20
#define SORTFLAG_UseSorter 0x01
#define _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS 5
#define _SC_2_C_BIND 18
#define _POSIX_LINK_MAX 8
#define IN_RENAME_OBJECT (pParse->eParseMode>=PARSE_MODE_RENAME_COLUMN)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_3(x) 
#define _RPERM_OK (1<<19)
#define IOPOL_TYPE_VFS_IGNORE_PERMISSIONS 7
#define VM_MEMORY_CM_CRABS 96
#define NSEC_PER_SEC 1000000000ull
#define TK_FIRST 83
#define __sclearerr(p) ((void)((p)->_flags &= ~(__SERR|__SEOF)))
#define SQLITE_DROP_VTABLE 30
#define OS_SWIFT_NAME(_name) 
#define _STRUCT_X86_FLOAT_STATE64 struct __darwin_x86_float_state64
#define TASK_NAME_PORT 3
#define SQLITE_LOCKED 6
#define HOST_NULL ((host_t) 0)
#define _XOPEN_REALTIME_THREADS (-1)
#define _POSIX_CHILD_MAX 25
#define SQLITE_NULLEQ 0x80
#define __XNU_PRIVATE_EXTERN __attribute__((visibility("hidden")))
#define WHERE_DISTINCT_UNORDERED 3
#define SQLITE_MISMATCH 20
#define SCHED_OTHER 1
#define KERN_KDSETREG 8
#define OS_OPTIONS(_name,_type,...) __OS_ENUM_C_FALLBACK(_name, _type, ## __VA_ARGS__) __OS_ENUM_ATTR __OS_OPTIONS_ATTR
#define HOST_MAX_SPECIAL_PORT HOST_IOCOMPRESSIONSTATS_PORT
#define P_PROFIL 0x00000020
#define ENODATA 96
#define MNT_NOATIME 0x10000000
#define VM_BEHAVIOR_WILLNEED ((vm_behavior_t) 4)
#define P_DIRTY_LAUNCH_IN_PROGRESS 0x00000200
#define VM_PURGABLE_ORDERING_SHIFT 5
#define SQLITE_TESTCTRL_SCRATCHMALLOC 17
#define TK_ADD 158
#define OPFLG_OUT2 0x10
#define TRANS_NONE 0
#define FP_ILOGB0 (-2147483647 - 1)
#define ALIGNBYTES __DARWIN_ALIGNBYTES
#define WHERE_PARTIALIDX 0x00020000
#define BTREE_SCHEMA_VERSION 1
#define F_PEOFPOSMODE 3
#define OP_Sort 35
#define __STDC_HOSTED__ 1
#define _SC_GETPW_R_SIZE_MAX 71
#define HOST_PRIORITY_INFO 5
#define CPU_SUBTYPE_BIG_ENDIAN ((cpu_subtype_t) 1)
#define STAILQ_REMOVE_AFTER(head,elm,field) do { if ((STAILQ_NEXT(elm, field) = STAILQ_NEXT(STAILQ_NEXT(elm, field), field)) == NULL) (head)->stqh_last = &STAILQ_NEXT((elm), field); } while (0)
#define RLIM_SAVED_CUR RLIM_INFINITY
#define _STDIO_H_ 
#define memmove(dest,...) __builtin___memmove_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define SQLITE_UTF16 4
#define UID_MAX 2147483647U
#define THREAD_AFFINITY_TAG_NULL 0
#define FOUR_BYTE_INT(x) (16777216*(i8)((x)[0])|((x)[1]<<16)|((x)[2]<<8)|(x)[3])
#define POSIX_MADV_WILLNEED 3
#define PragTyp_JOURNAL_MODE 20
#define MACH_PORT_STATUS_FLAG_GUARDED 0x02
#define MACH_MSG_IPC_KERNEL 0x00000800
#define LIST_INSERT_BEFORE(listelm,elm,field) do { LIST_CHECK_PREV(listelm, field); (elm)->field.le_prev = (listelm)->field.le_prev; LIST_NEXT((elm), field) = (listelm); *(listelm)->field.le_prev = (elm); (listelm)->field.le_prev = &LIST_NEXT((elm), field); } while (0)
#define ALRMTYPE 0xff
#define OE_Default 11
#define ATTR_CMNEXT_LINKID 0x00000010
#define SIGURG 16
#define checkProfileCallback(DB,P) if( ((P)->startTime)>0 ){ invokeProfileCallback(DB,P); }
#define sqlite3Strlen30NN(C) (strlen(C)&0x3fffffff)
#define memcpy(dest,...) __builtin___memcpy_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define ATTR_VOL_MINALLOCATION 0x00000020
#define MEM_Term 0x0200
#define __DBL_DIG__ 15
#define CPU_SUBTYPE_POWERPC_620 ((cpu_subtype_t) 8)
#define TIME_UTC 1
#define MACH_RCV_TRAILER_AV 7
#define x86_THREAD_FULL_STATE64 23
#define PragTyp_MODULE_LIST 26
#define IOC_VOID (__uint32_t)0x20000000
#define SQLITE_CORRUPT_SEQUENCE (SQLITE_CORRUPT | (2<<8))
#define SQLITE_STATUS_SCRATCH_OVERFLOW 4
#define PATH_MAX 1024
#define SQLITE_OmitNoopJoin 0x0100
#define VM_MEMORY_ATS 50
#define OE_SetNull 8
#define PAGER_INCR(v) 
#define KERN_NO_SPACE 3
#define IOPOL_IMPORTANT 1
#define VM_MEMORY_LIBDISPATCH 74
#define WALINDEX_HDR_SIZE (sizeof(WalIndexHdr)*2+sizeof(WalCkptInfo))
#define SIOCAUTONETMASK _IOW('i', 39, struct ifreq)
#define F_THAW_FS 54
#define PTHREAD_CANCEL_ASYNCHRONOUS 0x00
#define putVarint32(A,B) (u8)(((u32)(B)<(u32)0x80)?(*(A)=(unsigned char)(B)),1: sqlite3PutVarint((A),(B)))
#define _MACH_PROCESSOR_INFO_H_ 
#define MALLOC_ZONE_SPECIFIC_FLAGS 0xff00
#define OP_OpenEphemeral 112
#define __DARWIN_ALIAS_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_NON_CANCELABLE __DARWIN_SUF_UNIX03)
#define WAL_RDONLY 1
#define SQLITE_ECEL_DUP 0x01
#define ILL_ILLADR 5
#define TK_ALL 131
#define SRT_DistFifo 6
#define __LDBL_MIN__ 3.36210314311209350626267781732175260e-4932L
#define TK_DEFERRABLE 127
#define SQLITE_DBCONFIG_RESET_DATABASE 1009
#define TIOCMGET _IOR('t', 106, int)
#define tkEXPLAIN 3
#define OP_String8 113
#define A_GETCAR 9
#define DELAY(n) { int N = (n); while (--N > 0); }
#define OP_IfNullRow 21
#define _REXT_OK (1<<17)
#define MACH_PORT_DEAD ((mach_port_name_t) ~0)
#define TK_ANY 98
#define VQ_FLAG10000 0x10000
#define KERN_LOW_PRI_WINDOW 56
#define SQLITE_WSD 
#define MACH_PORT_TYPE_SEND_RECEIVE (MACH_PORT_TYPE_SEND|MACH_PORT_TYPE_RECEIVE)
#define FSHIFT 11
#define __DARWIN_BYTE_ORDER __DARWIN_LITTLE_ENDIAN
#define ATTR_VOL_MAXOBJCOUNT 0x00000800
#define OP_SeekEnd 130
#define OP_SeekRowid 30
#define MATH_ERRNO 1
#define host_set_telemetry_port(host,port) (host_set_special_port((host), HOST_TELEMETRY_PORT, (port)))
#define SQLITE_CHECKPOINT_TRUNCATE 3
#define FSOPT_NOFOLLOW 0x00000001
#define x86_FLOAT_STATE 8
#define MACH_MSG_PHYSICAL_COPY 0
#define PROXY_HOSTIDLEN 16
#define sqlite3CodecQueryParameters(A,B,C) 0
#define STAILQ_FOREACH(var,head,field) for((var) = STAILQ_FIRST((head)); (var); (var) = STAILQ_NEXT((var), field))
#define __AVAILABILITY_INTERNAL_REGULAR 
#define KERN_RAGE_PROC 1
#define _PTHREAD_KEY_T 
#define SQLITE_EXTENSION_INIT1 
#define SQLITE_EXTENSION_INIT2(v) (void)v;
#define SQLITE_EXTENSION_INIT3 
#define VM_MEMORY_VIDEOBITSTREAM 91
#define DEV_BSIZE 512
#define SM_LARGE_PAGE 8
#define MAP_PRIVATE 0x0002
#define host_get_coalition_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_COALITION_PORT, (port)))
#define TASK_VM_INFO_REV5_COUNT TASK_VM_INFO_COUNT
#define SQLITE_DistinctOpt 0x0010
#define IN_SPECIAL_PARSE (pParse->eParseMode!=PARSE_MODE_NORMAL)
#define KIPC_SOMAXCONN 3
#define _POSIX2_RE_DUP_MAX 255
#define NOTE_TRIGGER 0x01000000
#define MACH_PORT_RIGHT_SEND_ONCE ((mach_port_right_t) 2)
#define MADV_PAGEOUT 10
#define TK_ASC 31
#define EP_Indirect 0x40000000
#define SING 2
#define sqlite3Isdigit(x) (sqlite3CtypeMap[(unsigned char)(x)]&0x04)
#define _MACH_DEBUG_IPC_INFO_H_ 
#define EVFILT_MACHPORT (-8)
#define CPF_MASK (CPF_OVERWRITE|CPF_IGNORE_MODE)
#define SQLITE_FCNTL_COMMIT_ATOMIC_WRITE 32
#define INT_FAST16_MAX INT16_MAX
#define Utf8Read(A) (A[0]<0x80?*(A++):sqlite3Utf8Read(&A))
#define NOTE_OOB 0x00000002
#define clbase(i) (i)
#define TERM_CODED 0x04
#define TIOCGPGRP _IOR('t', 119, int)
#define SQLITE_NOWILDCARDMATCH 2
#define ARG_MAX (1024 * 1024)
#define __NULLABILITY_COMPLETENESS_PUSH 
#define PPAUSE 40
#define ENOSR 98
#define S_ISDIR(m) (((m) & S_IFMT) == S_IFDIR)
#define MADV_NORMAL POSIX_MADV_NORMAL
#define TASK_POWER_INFO_V2_COUNT ((mach_msg_type_number_t) (sizeof (task_power_info_v2_data_t) / sizeof (natural_t)))
#define WINDOWFUNCALL(name,nArg,extra) { nArg, (SQLITE_UTF8|SQLITE_FUNC_WINDOW|extra), 0, 0, name ## StepFunc, name ## FinalizeFunc, name ## ValueFunc, name ## InvFunc, name ## Name, {0} }
#define _V6_ILP32_OFFBIG __ILP32_OFFBIG
#define ATTR_VOL_INFO 0x80000000
#define __FLT64_MANT_DIG__ 53
#define PragTyp_STATS 43
#define VM_DYLD64 ((user_addr_t) 0x00007FFF5FC00000ULL)
#define VM_PAGE_QUERY_PAGE_REF 0x4
#define EXC_I386_DBLFLT 8
#define HOST_PREFERRED_USER_ARCH_COUNT ((mach_msg_type_number_t) (sizeof(host_preferred_user_arch_data_t)/sizeof(integer_t)))
#define ntohll(x) __DARWIN_OSSwapInt64(x)
#define ROWSET_ENTRY_PER_CHUNK ((ROWSET_ALLOCATION_SIZE-8)/sizeof(struct RowSetEntry))
#define SQLITE_IOERR_MMAP (SQLITE_IOERR | (24<<8))
#define SF_IncludeHidden 0x20000
#define OS_CONST __attribute__((__const__))
#define __DARWIN_ALIAS_I(sym) __asm("_" __STRING(sym) __DARWIN_SUF_64_BIT_INO_T __DARWIN_SUF_UNIX03)
#define __TVOS_14_2 140200
#define TK_ASTERISK 175
#define _INO_T 
#define USER_DATA_SELECTOR 0x001f
#define MACH_RCV_TRAILER_NULL 0
#define A_SETUMASK 14
#define FD_SET(n,p) __DARWIN_FD_SET(n, p)
#define __SIZEOF_LONG_DOUBLE__ 16
#define VM_REGION_SUBMAP_INFO_V2_SIZE (sizeof (vm_region_submap_info_data_64_t))
#define USER_CODE_SELECTOR 0x0017
#define Deephemeralize(P) if( ((P)->flags&MEM_Ephem)!=0 && sqlite3VdbeMemMakeWriteable(P) ){ goto no_mem;}
#define TK_RELEASE 14
#define SQLITE_MEMDB_DEFAULT_MAXSIZE 1073741824
#define IO_NUM_PRIORITIES 4
#define CPUFAMILY_INTEL_ICELAKE 0x38435547
#define _SC_ARG_MAX 1
#define VM_FLAGS_SUPERPAGE_NONE (SUPERPAGE_NONE << VM_FLAGS_SUPERPAGE_SHIFT)
#define INT_FAST16_MIN INT16_MIN
#define BTREE_FREE_PAGE_COUNT 0
#define SQLITE_IOCAP_POWERSAFE_OVERWRITE 0x00001000
#define SEEK_CUR 1
#define MACH_RCV_IN_SET 0x1000400a
#define KMOD_DECL(name,version) static kmod_start_func_t name ## _module_start; static kmod_stop_func_t name ## _module_stop; kmod_info_t KMOD_INFO_NAME = { 0, KMOD_INFO_VERSION, -1U, { #name }, { version }, -1, 0, 0, 0, 0, name ## _module_start, name ## _module_stop };
#define host_set_amfid_port(host,port) (host_set_special_port((host), HOST_AMFID_PORT, (port)))
#define HW_BYTEORDER 4
#define MSIZESHIFT 8
#define PRIO_DARWIN_PROCESS 4
#define _POSIX_CHOWN_RESTRICTED 200112L
#define OP_Affinity 91
#define _TIME_T 
#define P_RESV7 0x00800000
#define P_RESV9 0x02000000
#define KERN_MAXPARTITIONS 23
#define KERN_KDDFLAGS 2
#define S_IFLNK 0120000
#define claligned(x) ((((int)(x))&CLOFSET)==0)
#define osPwrite64 ((ssize_t(*)(int,const void*,size_t,off64_t)) aSyscall[13].pCurrent)
#define _SC_XOPEN_REALTIME_THREADS 112
#define MNT_CPROTECT 0x00000080
#define ATTR_FILE_IOBLOCKSIZE 0x00000008
#define TASK_AFFINITY_TAG_INFO_COUNT (sizeof(task_affinity_tag_info_data_t) / sizeof(natural_t))
#define sqlite3SetMakeRecordP5(A,B) 
#define FPE_FLTDIV 1
#define SQLITE_ResetDatabase 0x02000000
#define TARGET_OS_OSX 1
#define PAGER_JOURNALMODE_WAL 5
#define __DBL_HAS_INFINITY__ 1
#define CIRCLEQ_INSERT_HEAD(head,elm,field) do { CIRCLEQ_CHECK_HEAD(head, field); (elm)->field.cqe_next = (head)->cqh_first; (elm)->field.cqe_prev = (void *)(head); if ((head)->cqh_last == (void *)(head)) (head)->cqh_last = (elm); else (head)->cqh_first->field.cqe_prev = (elm); (head)->cqh_first = (elm); } while (0)
#define IOPOL_SCOPE_PROCESS 0
#define _PC_SYMLINK_MAX 24
#define PASS_MAX 128
#define W_EXITCODE(ret,sig) ((ret) << 8 | (sig))
#define TASK_WAIT_STATE_INFO 25
#define KERN_POLICY_STATIC 51
#define RSIZE_MAX (SIZE_MAX >> 1)
#define __OS_ENUM_C_FALLBACK(_name,_type,...) typedef _type _name ##_t; enum _name { __VA_ARGS__ }
#define OP_Init 61
#define ONEPASS_MULTI 2
#define IsPowerOfTwo(X) (((X)&((X)-1))==0)
#define TIOCSCTTY _IO('t', 97)
#define HOST_AMFID_PORT (11 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define stdin __stdinp
#define __DARWIN_FD_ISSET(n,p) __darwin_fd_isset((n), (p))
#define BTS_FAST_SECURE 0x000c
#define ATTR_CMN_GRPID 0x00010000
#define YY_ACCEPT_ACTION 1172
#define F_SINGLE_WRITER 76
#define TASK_VM_INFO_REV1_COUNT ((mach_msg_type_number_t) (TASK_VM_INFO_REV2_COUNT - 4))
#define OE_Replace 5
#define osMunmap ((int(*)(void*,size_t))aSyscall[23].pCurrent)
#define SQLITE_AMALGAMATION 1
#define TARGET_OS_NANO TARGET_OS_WATCH
#define SCHED_FIFO 4
#define sqlite3ConnectionClosed(x) 
#define __disable_tail_calls 
#define wsdHooks sqlite3Hooks
#define _POSIX_PATH_MAX 256
#define TASK_INSPECT_BASIC_COUNTS_COUNT (sizeof(struct task_inspect_basic_counts) / sizeof(natural_t))
#define CPU_SUBTYPE_486 CPU_SUBTYPE_INTEL(4, 0)
#define SQLITE_IOERR_RDLOCK (SQLITE_IOERR | (9<<8))
#define BUS_NOOP 0
#define SQLITE_DEFAULT_JOURNAL_SIZE_LIMIT -1
#define PARSE_MODE_RENAME_COLUMN 2
#define tkCREATE 4
#define MEM_Int 0x0004
#define THREAD_STATE_MAX I386_THREAD_STATE_MAX
#define OP_IdxGE 40
#define KERN_UPDATEINTERVAL 25
#define VM_PURGABLE_PURGE_ALL ((vm_purgable_t) 2)
#define PAGER_WRITER_LOCKED 2
#define RLIM_INFINITY (((__uint64_t)1 << 63) - 1)
#define F_PATHPKG_CHECK 52
#define NOTE_MACHTIME 0x00000100
#define WAL_FRAME_HDRSIZE 24
#define __INT_FAST16_TYPE__ short int
#define TID_NULL ((uint64_t) 0)
#define EXC_GUARD 12
#define POSIX_MADV_NORMAL 0
#define MACH_VOUCHER_ATTR_BITS_STORE MACH_VOUCHER_ATTR_USER_DATA_STORE
#define TASK_EXTMOD_INFO 19
#define wsdAutoextInit 
#define PragTyp_INDEX_INFO 17
#define P5_ConstraintCheck 3
#define __RCSID(s) __IDSTRING(rcsid,s)
#define _POSIX_NO_TRUNC 200112L
#define ECHILD 10
#define OP_Trace 168
#define EF_MAY_SHARE_BLOCKS 0x00000001
#define FP_SOFT 1
#define MINCORE_INCORE 0x1
#define CPU_SUBTYPE_PTRAUTH_ABI 0x80000000
#define MNT_DWAIT 4
#define TIOCSETAF _IOW('t', 22, struct termios)
#define _POSIX_SPORADIC_SERVER (-1)
#define __FLT128_HAS_INFINITY__ 1
#define OS_USED __attribute__((__used__))
#define S_TYPEISTMO(buf) (0)
#define SQLITE_ACCESS_READWRITE 1
#define SQLITE_ReadUncommit 0x00000400
#define CURSOR_REQUIRESEEK 3
#define true 1
#define OP_IdxLE 37
#define SA_RESETHAND 0x0004
#define SIGTERM 15
#define SQLITE_OPEN_WAL 0x00080000
#define OP_IdxLT 39
#define tkTRIGGER 6
#define _FSTDIO 
#define __OS_EXTENSION_UNAVAILABLE(_msg) __OSX_EXTENSION_UNAVAILABLE(_msg) __IOS_EXTENSION_UNAVAILABLE(_msg)
#define TIOCPKT_STOP 0x04
#define SWAP(TYPE,A,B) {TYPE t=A; A=B; B=t;}
#define SQLITE_ERROR_RETRY (SQLITE_ERROR | (2<<8))
#define TK_BLOB 149
#define SQLITE_PREPARE_SAVESQL 0x80
#define FFDSYNC O_DSYNC
#define TK_DISTINCT 136
#define TASK_READ_NULL ((task_read_t) 0)
#define BTS_INITIALLY_EMPTY 0x0010
#define HW_TARGET 26
#define TRANS_WRITE 2
#define PDP_ENDIAN __DARWIN_PDP_ENDIAN
#define HOST_INFO_MAX (1024)
#define AUC_DISABLED -1
#define _SC_STREAM_MAX 26
#define TARGET_OS_UNIX 0
#define VM_VOLATILE_ORDER_MASK (1 << VM_VOLATILE_ORDER_SHIFT)
#define MACH_MSG_ALLOCATE 2
#define TK_EACH 41
#define BUS_OBJERR 3
#define WHERE_TOP_LIMIT 0x00000010
#define BTREE_INTKEY 1
#define KIPC_MAXSOCKBUF 1
#define IOPOL_VFS_CONTENT_PROTECTION_DEFAULT 0
#define __PTHREAD_ONCE_SIZE__ 8
#define P_DIRTY_AGING_IN_PROGRESS 0x00000100
#define VM_REGION_BASIC_INFO_COUNT_64 ((mach_msg_type_number_t) (sizeof(vm_region_basic_info_data_64_t)/sizeof(int)))
#define THREAD_PRECEDENCE_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (thread_precedence_policy_data_t) / sizeof (integer_t)))
#define _PTRDIFF_T_DECLARED 
#define KERN_TRANSLATE 44
#define _SC_2_PBS_LOCATE 62
#define RUSAGE_INFO_CURRENT RUSAGE_INFO_V5
#define KERN_PROC_PGRP 2
#define _CS_DARWIN_USER_TEMP_DIR 65537
#define __FLT32_HAS_QUIET_NAN__ 1
#define VM_MEMORY_ROSETTA_ARENA 236
#define ATTR_CMN_OBJID 0x00000020
#define CPU_SUBTYPE_PENTIUM_4_M CPU_SUBTYPE_INTEL(10, 1)
#define CORRUPT_DB (sqlite3Config.neverCorrupt==0)
#define TK_PARTITION 87
#define EXC_MACH_SYSCALL 8
#define SQLITE_REALLOC(x,y) malloc_zone_realloc(_sqliteZone_, (x), (y))
#define PTF_LEAFDATA 0x04
#define KERN_NOT_IN_SET 12
#define OPFLG_JUMP 0x01
#define WAKEMON_MAKE_FATAL 0x10
#define __OSX_AVAILABLE_STARTING(_osx,_ios) 
#define SSTOP 4
#define __DARWIN_FD_ZERO(p) __builtin_bzero(p, sizeof(*(p)))
#define YY_MAX_SHIFTREDUCE 1170
#define MACH_PORT_QLIMIT_KERNEL (65534)
#define INT_FAST8_MIN INT8_MIN
#define _SYS_SELECT_H_ 
#define MACH_PORT_DNREQUESTS_SIZE_COUNT 1
#define PRIO_DARWIN_THREAD 3
#define VFS_CONF 2
#define _SECURE__COMMON_H_ 
#define ALWAYS(X) (X)
#define WINDOWFUNCNOOP(name,nArg,extra) { nArg, (SQLITE_UTF8|SQLITE_FUNC_WINDOW|extra), 0, 0, noopStepFunc, noopValueFunc, noopValueFunc, noopStepFunc, name ## Name, {0} }
#define SIOCGHIWAT _IOR('s', 1, int)
#define KERN_OSREV 3
#define VM_PROT_STRIP_READ ((vm_prot_t) 0x80)
#define MPO_TG_BLOCK_TRACKING 0x200
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_3(x) 
#define _PTHREAD_ERRORCHECK_MUTEX_SIG_init 0x32AAABA1
#define DIRECT_MODE 0
#define PragTyp_PRAGMA_LIST 29
#define SRT_Fifo 5
#define MATTR_VAL_OFF 0
#define KERN_MAXVNODES 5
#define _DARWIN_FEATURE_64_BIT_INODE 1
#define VM_64_BIT_DATA_OBJECTS 
#define valueFromFunction(a,b,c,d,e,f) SQLITE_OK
#define OptimizationDisabled(db,mask) (((db)->dbOptFlags&(mask))!=0)
#define P4_INT32 (-3)
#define SIOCATMARK _IOR('s', 7, int)
#define RTLD_NEXT ((void *) -1)
#define CC_SEMI 19
#define OP_Noop 170
#define PROXY_MAXCONCHLEN (PROXY_HEADERLEN+PROXY_HOSTIDLEN+MAXPATHLEN)
#define OP_SorterNext 3
#define ADD_MACH_TIMESPEC(t1,t2) do { if (((t1)->tv_nsec += (t2)->tv_nsec) >= (long) NSEC_PER_SEC) { (t1)->tv_nsec -= (long) NSEC_PER_SEC; (t1)->tv_sec += 1; } (t1)->tv_sec += (t2)->tv_sec; } while (0)
#define __GXX_ABI_VERSION 1016
#define A_GETQCTRL 35
#define _SC_PAGESIZE 29
#define SQLITE_CREATE_TRIGGER 7
#define _SC_READER_WRITER_LOCKS 76
#define BTREE_APPEND 0x08
#define TAILQ_FOREACH_REVERSE_SAFE(var,head,headname,field,tvar) for ((var) = TAILQ_LAST((head), headname); (var) && ((tvar) = TAILQ_PREV((var), headname, field), 1); (var) = (tvar))
#define VM_NAMED_ENTRY_NULL ((vm_named_entry_t) 0)
#define M_LOG2E 1.44269504088896340735992468100189214
#define SQLITE_OrderByIdxJoin 0x0040
#define PragTyp_WAL_CHECKPOINT 39
#define FPS_TOS 0x3800
#define UINT32_MAX 4294967295U
#define _POSIX_SHELL 200112L
#define __API_UNAVAILABLE_BEGIN_GET_MACRO(...) 
#define WNOHANG 0x00000001
#define VOL_CAP_FMT_FAST_STATFS 0x00000400
#define UpperToLower sqlite3UpperToLower
#define ATTR_CMN_OBJTYPE 0x00000008
#define SQLITE_NoSchemaError 0x08000000
#define SQLITE_FUNCTION 31
#define TK_CHECK 120
#define VM_PAGE_QUERY_PAGE_DIRTY 0x8
#define TARGET_OS_WIN32 0
#define sqlite3ParserCTX_PARAM ,pParse
#define SQLITE_IOERR_TRUNCATE (SQLITE_IOERR | (6<<8))
#define VM_FLAGS_NO_CACHE 0x0010
#define __TVOS_12_0 120000
#define _POSIX_CLOCKRES_MIN 20000000
#define __TVOS_12_2 120200
#define __TVOS_12_3 120300
#define __TVOS_12_4 120400
#define TK_ISNOT 166
#define _POSIX2_FORT_RUN 200112L
#define OP_ResetSorter 138
#define VM_PURGABLE_NO_AGING_SHIFT 16
#define SQLITE_CHECKPOINT_FULL 1
#define _XOPEN_STREAMS (-1)
#define CLSHIFT (PGSHIFT+CLSIZELOG2)
#define KERN_NAME_EXISTS 13
#define TIOCPKT_DOSTOP 0x20
#define tkEND 7
#define osPread64 ((ssize_t(*)(int,void*,size_t,off64_t))aSyscall[10].pCurrent)
#define SQLITE_MAX_SQL_LENGTH 1000000000
#define TF_WithoutRowid 0x0020
#define TASK_EXC_GUARD_VM_DELIVER 0x01
#define MACH_VOUCHER_ATTR_COPY ((mach_voucher_attr_recipe_command_t)1)
#define _POSIX_VDISABLE ((unsigned char)'\377')
#define __MAC_OS_X_VERSION_MAX_ALLOWED __MAC_11_3
#define VM_VOLATILE_ORDER_SHIFT 4
#define A_SETSMASK 15
#define TK_REPLACE 73
#define EV_VANISHED 0x0200
#define invalidateOverflowCache(pCur) (pCur->curFlags &= ~BTCF_ValidOvfl)
#define SQLITE_CONSTRAINT_UNIQUE (SQLITE_CONSTRAINT | (8<<8))
#define THREAD_KERNEL_PORT 1
#define S_IRWXU 0000700
#define SQLITE_IOERR_DIR_FSYNC (SQLITE_IOERR | (5<<8))
#define TASK_AFFINITY_TAG_INFO 16
#define VOL_CAP_FMT_JOURNAL_ACTIVE 0x00000010
#define KMOD_RETURN_FAILURE KERN_FAILURE
#define F_TRIM_ACTIVE_FILE 100
#define UQUAD_MAX ULLONG_MAX
#define osFtruncate ((int(*)(int,off_t))aSyscall[6].pCurrent)
#define EISDIR 21
#define MX_CELL_SIZE(pBt) ((int)(pBt->pageSize-8))
#define _CS_DARWIN_USER_CACHE_DIR 65538
#define SQLITE_STATUS_PAGECACHE_OVERFLOW 2
#define _INTPTR_T 
#define OP_FkCounter 150
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_5(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_6(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_7(x) 
#define KERN_VERSION 4
#define host_set_unfreed_port(host,port) (host_set_special_port((host), HOST_UNFREED_PORT, (port)))
#define NL_ARGMAX 9
#define _MACH_MACHINE_VM_TYPES_H_ 
#define SF_MaybeConvert 0x08000
#define host_get_io_master_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_IO_MASTER_PORT, (port)))
#define HOST_BASIC_INFO 1
#define TH_FLAGS_IDLE 0x2
#define LIST_FOREACH_SAFE(var,head,field,tvar) for ((var) = LIST_FIRST((head)); (var) && ((tvar) = LIST_NEXT((var), field), 1); (var) = (tvar))
#define __FLT64_MIN_10_EXP__ (-307)
#define osFchown ((int(*)(int,uid_t,gid_t))aSyscall[20].pCurrent)
#define KERN_TFP_POLICY_DENY 0
#define VOL_CAP_FMT_NO_PERMISSIONS 0x00400000
#define __has_extension(x) 0
#define TLOSS 5
#define MEMORY_OBJECT_BEHAVIOR_INFO 15
#define ULONG_MAX (LONG_MAX * 2UL + 1UL)
#define VM_MEMORY_COREGRAPHICS_BACKINGSTORES 57
#define PAGE_MIN_MASK (PAGE_MIN_SIZE-1)
#define PragFlg_Result0 0x10
#define PragFlg_Result1 0x20
#define CC_STAR 21
#define PWAIT 32
#define OP_AggValue 156
#define DEV_BSHIFT 9
#define YYSTACKDEPTH 100
#define VM_LEDGER_TAG_GRAPHICS 0x00000004
#define __API_AVAILABLE_END 
#define CC_DIGIT 3
#define SQLITE_NOTADB 26
#define SV_INTERRUPT SA_RESTART
#define HW_L2CACHESIZE 20
#define GETSIGSINFO_PLATFORM_BINARY 1
#define _SC_TRACE_USER_EVENT_MAX 130
#define FPE_FLTSUB 6
#define OP_IncrVacuum 59
#define SQLITE_TESTCTRL_PRNG_RESTORE 6
#define SQLITE_TESTCTRL_PARSER_COVERAGE 26
#define TASK_INSPECT_NULL ((task_inspect_t) 0)
#define SQLITE_INTERNAL 2
#define HW_PHYSMEM 5
#define TK_UMINUS 168
#define TRASHIT(x) 
#define isOpen(pFd) ((pFd)->pMethods!=0)
#define NSEC_PER_MSEC 1000000ull
#define __FLT_DIG__ 6
#define __FLT64X_MAX__ 1.18973149535723176502126385303097021e+4932F64x
#define MACH_RCV_TRAILER_MASK ((0xf << 24))
#define OP_Add 103
#define SIOCSIFASYNCMAP _IOW('i', 125, struct ifreq)
#define EXC_MASK_GUARD (1 << EXC_GUARD)
#define YY_SHIFT_MIN (0)
#define LONG_LONG_MAX __LONG_LONG_MAX__
#define KERN_OSVERSION 65
#define SQLITE_LIMIT_TRIGGER_DEPTH 10
#define _MACH_MACHINE_VM_PARAM_H_ 
#define MACH_MSG_TYPE_PORT_NONE 0
#define __enum_options 
#define THROUGHPUT_QOS_LAUNCH_DEFAULT_TIER THROUGHPUT_QOS_TIER_3
#define VOL_CAP_FMT_64BIT_OBJECT_IDS 0x00020000
#define INT_LEAST8_MIN INT8_MIN
#define sqlite3PagerResetLockTimeout(X) 
#define CPU_SUBTYPE_POWERPC_750 ((cpu_subtype_t) 9)
#define errno (*__error())
#define _SC_NPROCESSORS_ONLN 58
#define VVA_ONLY(X) 
#define TASK_BASIC_INFO TASK_BASIC_INFO_64
#define SQLITE_TESTCTRL_ISKEYWORD 16
#define HW_MAXID 28
#define EVFILT_FS (-9)
#define _PTRDIFF_T_ 
#define __used __attribute__((__used__))
#define TK_REINDEX 95
#define SQLITE_IOCAP_ATOMIC16K 0x00000040
#define SQLITE_IOERR_ACCESS (SQLITE_IOERR | (13<<8))
#define SRT_Exists 3
#define IPC_VOUCHER_ATTR_CONTROL_NULL ((ipc_voucher_attr_control_t) 0)
#define MACH_PORT_IMPORTANCE_RECEIVER 5
#define _PTHREAD_RWLOCK_T 
#define EV_ENABLE 0x0004
#define VM_REGION_INFO_MAX (1024)
#define _SCHED_H_ 
#define ONLY_IF_REALLOC_STRESS(X) (0)
#define MACH_VOUCHER_ATTR_KEY_NUM_WELL_KNOWN MACH_VOUCHER_ATTR_KEY_TEST
#define VM_PURGABLE_DENY 3
#define _IN_PORT_T 
#define _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS 11
#define HUGE MAXFLOAT
#define SQLITE_CANTOPEN_CONVPATH (SQLITE_CANTOPEN | (4<<8))
#define VM_MEMORY_GENEALOGY 78
#define __DARWIN_OSSwapInt64(x) (__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt64(x) : _OSSwapInt64(x))
#define KERN_INVALID_NAME 15
#define SIOCGIFMAC _IOWR('i', 130, struct ifreq)
#define LINE_MAX 2048
#define __STRING(x) #x
#define FP_INFINITE 2
#define NGROUPS_MAX 16
#define USER_POSIX2_UPE 18
#define SIGVTALRM 26
#define KERNEL_AUDIT_TOKEN_VALUE { {0, 0, 0, 0, 0, 0, 0, 0} }
#define PGHDR_NEED_SYNC 0x008
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_2(x) 
#define MEMTYPE_LOOKASIDE 0x02
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_3(x) 
#define IsPrimaryKeyIndex(X) ((X)->idxType==SQLITE_IDXTYPE_PRIMARYKEY)
#define RLIMIT_CPU 0
#define SQLITE_BIGENDIAN 0
#define LONG_LONG_MIN (-LONG_LONG_MAX - 1LL)
#define F_SETLKWTIMEOUT 10
#define CTLFLAG_OID2 0x00400000
#define MACH_SEND_NOTIFY 0x00000080
#define SRT_Mem 10
#define PROCESSOR_SET_LOAD_INFO 4
#define OS_CONCAT(x,y) __OS_CONCAT(x, y)
#define _SC_TRACE 97
#define IOPOL_TYPE_VFS_SKIP_MTIME_UPDATE 8
#define TH_STATE_RUNNING 1
#define OP_And 44
#define N_SORT_BUCKET 32
#define WHERE_WANT_DISTINCT 0x0100
#define __API_DEPRECATED(...) 
#define VM_MAX_PAGE_ADDRESS ((user_addr_t) 0x00007FFFFFE00000ULL)
#define OP_VNext 60
#define PRIO_DARWIN_NONUI 0x1001
#define VM_MEMORY_SWIFT_RUNTIME 82
#define SQLITE_IOCAP_ATOMIC64K 0x00000100
#define TASK_FLAVOR_INSPECT 2
#define VM_USRSTACK32 ((vm_offset_t) 0xC0000000)
#define CPUFAMILY_ARM_FIRESTORM_ICESTORM 0x1b588bb3
#define _POSIX2_FORT_DEV (-1)
#define SQLITE_LIMIT_FUNCTION_ARG 6
#define SIOCGPGRP _IOR('s', 9, int)
#define FP_PREC_64B 3
#define SQLITE_TESTCTRL_ONCE_RESET_THRESHOLD 19
#define _GID_T 
#define CPU_THREADTYPE_INTEL_HTT ((cpu_threadtype_t) 1)
#define vdbeSorterRewindDebug(y) 
#define SIG_ATOMIC_MAX INT32_MAX
#define SQLITE_AutoIndex 0x00008000
#define F_FREEZE_FS 53
#define etORDINAL 15
#define HOST_EXTMOD_INFO64 5
#define FPC_RC_RD 0x0400
#define __FBSDID(s) 
#define LIKEFUNC(zName,nArg,arg,flags) {nArg, SQLITE_FUNC_CONSTANT|SQLITE_UTF8|flags, (void *)arg, 0, likeFunc, 0, 0, 0, #zName, {0} }
#define HW_PAGESIZE 7
#define FPC_RC_RN 0x0000
#define FPC_RC_RU 0x0800
#define CTL_USER 8
#define A_OLDSETQCTRL 7
#define SQLITE_DELETE 9
#define STAILQ_INSERT_HEAD(head,elm,field) do { if ((STAILQ_NEXT((elm), field) = STAILQ_FIRST((head))) == NULL) (head)->stqh_last = &STAILQ_NEXT((elm), field); STAILQ_FIRST((head)) = (elm); } while (0)
#define PAGER_STAT_HIT 0
#define VM_USRSTACK64 ((user_addr_t) 0x00007FFEEFC00000ULL)
#define SQLITE_OPEN_MAIN_DB 0x00000100
#define INT32_MAX 2147483647
#define _SC_THREAD_ATTR_STACKSIZE 83
#define SIOCGIFGENERIC _IOWR('i', 58, struct ifreq)
#define SQLITE_OPEN_READONLY 0x00000001
#define TK_ISNULL 50
#define IOPOL_MATERIALIZE_DATALESS_FILES_DEFAULT 0
#define PRIO_DARWIN_BG 0x1000
#define TARGET_CPU_PPC 0
#define KERN_NOT_SUPPORTED 46
#define TK_IF_NULL_ROW 174
#define SQLITE_CONFIG_GETPCACHE 15
#define TASK_FLAVOR_NAME 3
#define SQLITE_QUERY_PLANNER_LIMIT 20000
#define ATTR_CMNEXT_RECURSIVE_GENCOUNT 0x00000400
#define SIOCGIFPDSTADDR _IOWR('i', 64, struct ifreq)
#define AU_ASSIGN_ASID -1
#define VM_GET_FLAGS_ALIAS(flags,alias) (alias) = ((flags) & VM_FLAGS_ALIAS_MASK) >> 24
#define __OSX_UNAVAILABLE 
#define __SCHAR_WIDTH__ 8
#define BTCF_ValidNKey 0x02
#define CPU_ARCH_ABI64_32 0x02000000
#define LIST_SWAP(head1,head2,type,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH do { struct type *swap_tmp = LIST_FIRST((head1)); LIST_FIRST((head1)) = LIST_FIRST((head2)); LIST_FIRST((head2)) = swap_tmp; if ((swap_tmp = LIST_FIRST((head1))) != NULL) swap_tmp->field.le_prev = &LIST_FIRST((head1)); if ((swap_tmp = LIST_FIRST((head2))) != NULL) swap_tmp->field.le_prev = &LIST_FIRST((head2)); } while (0) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define __FLT32_MAX_10_EXP__ 38
#define TASK_HOST_PORT 2
#define MACHINE_THREAD_STATE x86_THREAD_STATE
#define TF_Autoincrement 0x0008
#define FILESEC_GUID FILESEC_UUID
#define __VM_LEDGER_ACCOUNTING_POSTMARK 2019032600
#define SIGSEGV 11
#define FP_ILOGBNAN (-2147483647 - 1)
#define REGISTER_TRACE(R,M) 
#define VM_PROT_WANTS_COPY ((vm_prot_t) 0x10)
#define _SC_MESSAGE_PASSING 33
#define EVFILT_VM (-12)
#define __INT_FAST32_TYPE__ int
#define getc_unlocked(fp) __sgetc(fp)
#define MNT_QUOTA 0x00002000
#define VdbeCoverageNeverTaken(v) 
#define SIG_DFL (void (*)(int))0
#define POLICY_TIMESHARE_INFO_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_timeshare_info)/sizeof(integer_t)))
#define PAGER_JOURNALMODE_QUERY (-1)
#define SIG_ATOMIC_MIN INT32_MIN
#define MACH_EVENTLINK_NULL ((mach_eventlink_t) 0)
#define THREAD_CONVERT_THREAD_STATE_TO_SELF 1
#define SQLITE_TESTCTRL_PENDING_BYTE 11
#define FPC_PC_64 0x0300
#define __darwin_obsz(object) __builtin_object_size (object, _USE_FORTIFY_LEVEL > 1 ? 1 : 0)
#define SIOCDIFPHYADDR _IOW('i', 65, struct ifreq)
#define SQLITE_CHECKPOINT_RESTART 2
#define _POSIX_MAX_INPUT 255
#define EXC_MASK_EMULATION (1 << EXC_EMULATION)
#define EIGHT_BYTE_ALIGNMENT(X) ((((char*)(X) - (char*)0)&7)==0)
#define MACH_MSG_TYPE_POLYMORPHIC ((mach_msg_type_name_t) -1)
#define CPU_SUBTYPE_PENTIUM_4 CPU_SUBTYPE_INTEL(10, 0)
#define VM_MEMORY_MALLOC 1
#define host_set_host_priv_port(host,port) (KERN_INVALID_ARGUMENT)
#define MACH_VOUCHER_ATTR_VALUE_FLAGS_PERSIST ((mach_voucher_attr_value_flags_t)1)
#define __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ 110500
#define CTL_NAMES { { 0, 0 }, { "kern", CTLTYPE_NODE }, { "vm", CTLTYPE_NODE }, { "vfs", CTLTYPE_NODE }, { "net", CTLTYPE_NODE }, { "debug", CTLTYPE_NODE }, { "hw", CTLTYPE_NODE }, { "machdep", CTLTYPE_NODE }, { "user", CTLTYPE_NODE }, }
#define STAILQ_LAST(head,type,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH (STAILQ_EMPTY((head)) ? NULL : ((struct type *)(void *) ((char *)((head)->stqh_last) - __offsetof(struct type, field))))__NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define CPU_SUBTYPE_PENTIUM_M CPU_SUBTYPE_INTEL(9, 0)
#define WHERE_DUPLICATES_OK 0x0010
#define BAD_MACH_TIMESPEC(t) ((t)->tv_nsec < 0 || (t)->tv_nsec >= (long)NSEC_PER_SEC)
#define _POSIX_THREADS 200112L
#define F_PREALLOCATE 42
#define MAP_MEM_VM_COPY 0x200000
#define AUDIT_EXPIRE_OP_OR ((unsigned char)1)
#define VM_VOLATILE_GROUP_1 (1 << VM_VOLATILE_GROUP_SHIFT)
#define _MACH_PORT_H_ 
#define OP_Vacuum 8
#define __FLT64X_DIG__ 18
#define UF_HIDDEN 0x00008000
#define VM_FLAGS_SUPERPAGE_MASK 0x70000
#define NOTE_DELETE 0x00000001
#define VM_MIN_ADDRESS ((vm_offset_t) 0)
#define STAT_GET_NDLT 4
#define SIOCDIFADDR _IOW('i', 25, struct ifreq)
#define YYPARSEFREENEVERNULL 1
#define KERN_PROC_TTY 4
#define BTREE_FORDELETE 0x00000008
#define KERN_OSRELDATE 26
#define get2byteAligned(x) __builtin_bswap16(*(u16*)(x))
#define ONEPASS_SINGLE 1
#define SQLITE_MINIMUM_FILE_DESCRIPTOR 3
#define MACH_MSGH_BITS_HAS_LOCAL(bits) (MACH_MSGH_BITS_LOCAL(bits) != MACH_MSGH_BITS_ZERO)
#define FSOPT_REPORT_FULLSIZE 0x00000004
#define HW_MEMSIZE 24
#define SQLITE_MAGIC_ERROR 0xb5357930
#define _MACH_I386_VM_PARAM_H_ 
#define CPU_TYPE_SPARC ((cpu_type_t) 14)
#define TK_MINUS 104
#define SIOCGIFMTU _IOWR('i', 51, struct ifreq)
#define THREAD_STATE_FLAVOR_LIST_10_13 130
#define TRACE_IDX_OUTPUTS(A) 
#define SQLITE_TESTCTRL_EXPLAIN_STMT 19
#define OPFLAG_ISUPDATE 0x04
#define VQ_NEARLOWDISK 0x2000
#define SETBIT(V,I) V[I>>3] |= (1<<(I&7))
#define F_TLOCK 2
#define PragTyp_CACHE_SIZE 4
#define OP_Gt 54
#define CALENDAR_CLOCK 1
#define SQLITE_DBCONFIG_LOOKASIDE 1001
#define SQLITE_IDXTYPE_APPDEF 0
#define KERN_NGROUPS 18
#define EP_Collate 0x000100
#define ATTR_VOL_SIZE 0x00000004
#define EV_EOF 0x8000
#define SQLITE_CONFIG_SORTERREF_SIZE 28
#define IOC_IN (__uint32_t)0x80000000
#define SQLITE_MALLOC(x) malloc_zone_malloc(_sqliteZone_, (x))
#define KMOD_RETURN_SUCCESS KERN_SUCCESS
#define KERN_MEMORY_RESTART_COPY 25
#define OP_If 18
#define PVM 4
#define SRCHFS_MATCHPARTIALNAMES 0x00000002
#define WO_AUX 0x0040
#define MNT_EXPORTED 0x00000100
#define VM_LEDGER_TAG_DEFAULT 0x00000001
#define KERN_UREFS_OVERFLOW 19
#define MEMORY_OBJECT_COPY_DELAY 2
#define CPU_STATE_SYSTEM 1
#define p_starttime p_un.__p_starttime
#define __SIG_ATOMIC_MAX__ 0x7fffffff
#define CPUFAMILY_ARM_VORTEX_TEMPEST 0x07d34b9f
#define VM_MEMORY_APPLICATION_SPECIFIC_1 240
#define __QOS_CLASS_AVAILABLE(...) 
#define SQLITE_FUNC_OFFSET 0x8000
#define _UID_T 
#define MALLOC_ADMIN_REGION_RANGE_TYPE 4
#define host_set_container_port(host,port) (host_set_special_port((host), HOST_CONTAINERD_PORT, (port)))
#define _MACH_MESSAGE_H_ 
#define OS_OVERLOADABLE 
#define VM_PURGABLE_VOLATILE 1
#define OP_Lt 56
#define x86_THREAD_STATE 7
#define TAILQ_CHECK_PREV(elm,field) 
#define EXCEPTION_STATE_IDENTITY 3
#define __NEW_SCHEDULING_FRAMEWORK__ 
#define MAP_MEM_FLAGS_ALL ( MAP_MEM_FLAGS_USER)
#define HOST_IO_MASTER_PORT 3
#define SQLITE_CONSTRAINT_NOTNULL (SQLITE_CONSTRAINT | (5<<8))
#define MACH_VOUCHER_SELECTOR_EFFECTIVE ((mach_voucher_selector_t)1)
#define MASTER_NAME "sqlite_master"
#define _SC_THREAD_PROCESS_SHARED 90
#define __SIZEOF_PTRDIFF_T__ 8
#define SQLITE_DESERIALIZE_READONLY 4
#define SEEK_SET 0
#define SQLITE_INDEX_CONSTRAINT_ISNULL 71
#define RLIMIT_CORE 4
#define MX_CELL(pBt) ((pBt->pageSize-8)/6)
#define isMalloced(X) (((X)->printfFlags & SQLITE_PRINTF_MALLOCED)!=0)
#define P_DIRTY_ALLOW_IDLE_EXIT 0x00000002
#define IOCPARM_MASK 0x1fff
#define __MATH_H__ 
#define OPFLG_IN1 0x02
#define OPFLG_IN3 0x08
#define VM_REGION_SUBMAP_INFO_V2_COUNT_64 ((mach_msg_type_number_t) (VM_REGION_SUBMAP_INFO_V2_SIZE / sizeof (natural_t)))
#define HOST_VM_INFO_REV2_COUNT HOST_VM_INFO_LATEST_COUNT
#define NOFILE 256
#define OS_ALWAYS_INLINE __attribute__((__always_inline__))
#define YYNTOKEN 179
#define MADV_DONTNEED POSIX_MADV_DONTNEED
#define __FLT_NORM_MAX__ 3.40282346638528859811704183484516925e+38F
#define QMD_TRACE_HEAD(head) 
#define __FLT32X_MANT_DIG__ 53
#define ATTR_FILE_RSRCEXTENTS 0x00004000
#define SQLITE_DBSTATUS_CACHE_WRITE 9
#define WO_LE (WO_EQ<<(TK_LE-TK_EQ))
#define SQLITE_WIN32_DATA_DIRECTORY_TYPE 1
#define SQLITE_DBCONFIG_MAX 1015
#define checkActiveVdbeCnt(x) 
#define OP_BitNot 110
#define USER_POSIX2_C_BIND 11
#define THREAD_TIME_CONSTRAINT_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (thread_time_constraint_policy_data_t) / sizeof (integer_t)))
#define MAXTHREADNAMESIZE 64
#define _GCC_LIMITS_H_ 
#define PROT_READ 0x01
#define __x86_64__ 1
#define RLIMIT_RSS RLIMIT_AS
#define alloca(size) __alloca(size)
#define MINCORE_COPIED 0x40
#define UINT_FAST32_MAX UINT32_MAX
#define O_CREAT 0x00000200
#define ENODEV 19
#define CPU_SUBTYPE_VAX8500 ((cpu_subtype_t) 8)
#define IsUniqueIndex(X) ((X)->onError!=OE_None)
#define VM_FLAGS_RANDOM_ADDR 0x0008
#define __deprecated __attribute__((__deprecated__))
#define KERN_USRSTACK64 59
#define i386_FLOAT_STATE 2
#define _SSIZE_T 
#define BITVEC_NPTR (BITVEC_USIZE/sizeof(Bitvec *))
#define VOL_CAP_FMT_WRITE_GENERATION_COUNT 0x00100000
#define P4_INT64 (-14)
#define VQ_NOTRESP 0x0001
#define CC_TILDA 25
#define TK_PRIMARY 118
#define USER_POSIX2_FORT_RUN 15
#define _SC_XBS5_LP64_OFF64 124
#define PTHREAD_DESTRUCTOR_ITERATIONS 4
#define __UINT_LEAST64_TYPE__ long long unsigned int
#define WRC_Abort 2
#define TIOCDRAIN _IO('t', 94)
#define THREAD_STATE_FLAVOR_LIST_NEW 128
#define __FLT_HAS_QUIET_NAN__ 1
#define OP_RowSetRead 41
#define SQLITE_QueryFlattener 0x0001
#define _SC_THREAD_ATTR_STACKADDR 82
#define SQLITE_DBSTATUS_MAX 12
#define nth_valueValueFunc noopValueFunc
#define __dead2 __attribute__((__noreturn__))
#define SQLITE_BYTEORDER 1234
#define __FLT_HAS_INFINITY__ 1
#define TAILQ_INIT(head) do { TAILQ_FIRST((head)) = NULL; (head)->tqh_last = &TAILQ_FIRST((head)); QMD_TRACE_HEAD(head); } while (0)
#define __va_list__ 
#define BTCF_Incrblob 0x10
#define TASK_EXTMOD_INFO_COUNT (sizeof(task_extmod_info_data_t) / sizeof(natural_t))
#define VQ_DEAD 0x0020
#define P5_ConstraintUnique 2
#define __ENABLE_LEGACY_MAC_AVAILABILITY 1
#define MATTR_REPLICATE 4
#define FUNCTION(zName,nArg,iArg,bNC,xFunc) {nArg, SQLITE_FUNC_CONSTANT|SQLITE_UTF8|(bNC*SQLITE_FUNC_NEEDCOLL), SQLITE_INT_TO_PTR(iArg), 0, xFunc, 0, 0, 0, #zName, {0} }
#define _BSD_PTRDIFF_T_ 
#define SIGXFSZ 25
#define P_RESV6 0x00400000
#define SIGHUP 1
#define SQLITE_NOLFS 22
#define __exported_pop _Pragma("GCC visibility pop")
#define SQLITE_IOERR_FSYNC (SQLITE_IOERR | (4<<8))
#define F_VOLPOSMODE 4
#define MACH_MSG_SUCCESS 0x00000000
#define NC_AllowAgg 0x0001
#define MACH_VOUCHER_ATTR_SEND_PREPROCESS ((mach_voucher_attr_recipe_command_t)5)
#define VM_PURGABLE_NO_AGING_MASK (0x1 << VM_PURGABLE_NO_AGING_SHIFT)
#define __INT_FAST32_WIDTH__ 32
#define _POSIX2_CHARCLASS_NAME_MAX 14
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_3(x) 
#define _POSIX_SEM_NSEMS_MAX 256
#define OS_SWIFT_UNAVAILABLE(_msg) 
#define AT_SYMLINK_NOFOLLOW 0x0020
#define BIG_ENDIAN __DARWIN_BIG_ENDIAN
#define OP_DeferredSeek 134
#define O_ASYNC 0x00000040
#define CKCNSTRNT_ROWID 0x02
#define _STRUCT_FP_STATUS struct __darwin_fp_status
#define EXC_I386_NOEXTFLT 7
#define SQLITE_IOCAP_ATOMIC512 0x00000002
#define _CS_XBS5_ILP32_OFF32_LDFLAGS 21
#define SQLITE_READONLY_CANTLOCK (SQLITE_READONLY | (2<<8))
#define x86_EXCEPTION_STATE64_COUNT ((mach_msg_type_number_t) ( sizeof (x86_exception_state64_t) / sizeof (int) ))
#define CPU_SUBTYPE_MIPS_R2600 ((cpu_subtype_t) 2)
#define PAGERTRACE(X) 
#define KERN_RPC_TERMINATE_ORPHAN 44
#define OPFLAG_NOCHNG_MAGIC 0x6d
#define CPU_SUBTYPE_POWERPC_603ev ((cpu_subtype_t) 5)
#define F_SETSIZE 43
#define SQLITE_OPEN_AUTOPROXY 0x00000020
#define EP_FixedCol 0x000008
#define _SC_MEMORY_PROTECTION 32
#define EXC_I386_EXTERRFLT 16
#define LONGDOUBLE_TYPE long double
#define MACH_MSG_OOL_VOLATILE_DESCRIPTOR 3
#define MACH_PORT_STATUS_FLAG_STRICT_GUARD 0x04
#define SQLITE_CANTOPEN_ISDIR (SQLITE_CANTOPEN | (2<<8))
#define KERN_KDREADTR 10
#define __darwin_obsz0(object) __builtin_object_size (object, 0)
#define __STDC_VERSION__ 201710L
#define VM_MEMORY_OBJC_DISPATCHERS 34
#define ATTR_CMN_VOLSETMASK 0x00006700
#define CTL_DEBUG_MAXID 20
#define PLOCK 36
#define MPG_FLAGS_STRICT_REPLY_INVALID_VOUCHER (0x04ull << 56)
#define SEEK_HOLE 3
#define VM_MEMORY_GLSL 66
#define POLICY_FIFO_INFO_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_fifo_info)/sizeof(integer_t)))
#define x86_FLOAT_STATE64_COUNT ((mach_msg_type_number_t) (sizeof(x86_float_state64_t)/sizeof(unsigned int)))
#define OPFLAG_SEEKEQ 0x02
#define NOTE_REAP ((unsigned int)eNoteReapDeprecated )
#define _SYS_STDIO_H_ 
#define X86_INSTRUCTION_STATE_COUNT x86_INSTRUCTION_STATE_COUNT
#define osStat ((int(*)(const char*,struct stat*))aSyscall[4].pCurrent)
#define FPC_DE 0x0002
#define SRCHFS_SKIPINAPPROPRIATE 0x00000080
#define FPC_DM FPC_DE
#define SIGSTOP 17
#define __TVOS_13_0 130000
#define __TVOS_13_2 130200
#define __TVOS_13_3 130300
#define __TVOS_13_4 130400
#define TIOCPKT_FLUSHREAD 0x01
#define CLOCK_MONOTONIC _CLOCK_MONOTONIC
#define __STDIO_H_ 
#define READ_LOCK 1
#define ATTR_CMN_BKUPTIME 0x00002000
#define OS_EXPORT extern __attribute__((__visibility__("default")))
#define TASK_VM_INFO 22
#define x86_AVX_STATE32_COUNT ((mach_msg_type_number_t) (sizeof(x86_avx_state32_t)/sizeof(unsigned int)))
#define VM_MEMORY_LAYERKIT 51
#define TF_OOOHidden 0x0080
#define SLIST_INIT(head) do { SLIST_FIRST((head)) = NULL; } while (0)
#define VFS_CTL_SADDR 0x00010007
#define isfinite(x) ( sizeof(x) == sizeof(float) ? __inline_isfinitef((float)(x)) : sizeof(x) == sizeof(double) ? __inline_isfinited((double)(x)) : __inline_isfinitel((long double)(x)))
#define WHERE_ORDERBY_MAX 0x0002
#define SQLITE_CONFIG_LOOKASIDE 13
#define EP_Subrtn 0x2000000
#define SQLITE_CREATE_TEMP_VIEW 6
#define _MACH_MACHINE_THREAD_STATE_H_ 
#define KMOD_INFO_NAME kmod_info
#define TK_DETACH 40
#define INITFLAG_AlterTable 0x0001
#define UNIXFILE_PSOW 0x10
#define MACH_RCV_TIMEOUT 0x00000100
#define UIOCCMD(n) _IO('u', n)
#define _PC_EXTENDED_SECURITY_NP 13
#define _POSIX2_PBS_LOCATE (-1)
#define KERN_ABORTED 14
#define signbit(x) ( sizeof(x) == sizeof(float) ? __inline_signbitf((float)(x)) : sizeof(x) == sizeof(double) ? __inline_signbitd((double)(x)) : __inline_signbitl((long double)(x)))
#define SQLITE_FCNTL_JOURNAL_POINTER 28
#define S_IFSOCK 0140000
#define FPC_IC 0x1000
#define FPC_IE 0x0001
#define TASK_VM_INFO_PURGEABLE 23
#define P4_ADVANCE (-5)
#define SQLITE_WITHIN(P,S,E) (((uptr)(P)>=(uptr)(S))&&((uptr)(P)<(uptr)(E)))
#define MAP_FILE 0x0000
#define MACH_PORT_QLIMIT_DEFAULT MACH_PORT_QLIMIT_BASIC
#define S_ISTXT S_ISVTX
#define F_GETCODEDIR 72
#define __SIGN 0x8000
#define SQLITE_TRANSACTION 22
#define false 0
#define __DARWIN_OSSwapConstInt32(x) ((__uint32_t)((((__uint32_t)(x) & 0xff000000U) >> 24) | (((__uint32_t)(x) & 0x00ff0000U) >> 8) | (((__uint32_t)(x) & 0x0000ff00U) << 8) | (((__uint32_t)(x) & 0x000000ffU) << 24)))
#define _SYS_UCRED_H_ 
#define VM_MEMORY_MALLOC_LARGE_REUSED 9
#define sqlite3StrNICmp sqlite3_strnicmp
#define MAP_MEM_VM_SHARE 0x400000
#define TK_WHEN 153
#define SQLITE_FCNTL_SET_LOCKPROXYFILE 3
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#define __OSX_EXTENSION_UNAVAILABLE(_msg) 
#define SQLITE_FCNTL_MMAP_SIZE 18
#define WRC_Continue 0
#define EV_FLAG1 0x2000
#define ATTR_FILE_VALIDMASK 0x000037FF
#define assert(e) ((void)0)
#define sqlite3StackFree(D,P) sqlite3DbFree(D,P)
#define P4_COLLSEQ (-2)
#define VdbeBranchTaken(I,M) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_3(x) 
#define POSIX_MADV_SEQUENTIAL 2
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_5(x) 
#define _POSIX2_LOCALEDEF 200112L
#define SIOCGIFVLAN _IOWR('i', 127, struct ifreq)
#define OS_ALIGNED(n) __attribute__((__aligned__((n))))
#define SQLITE_NOMATCH 1
#define WMESGLEN 7
#define NC_InAggFunc 0x0008
#define __k8__ 1
#define __UINT16_TYPE__ short unsigned int
#define HW_L1DCACHESIZE 18
#define SQLITE_MUTEX_STATIC_LRU2 7
#define S_IEXEC S_IXUSR
#define SQLITE_EnableView 0x80000000
#define NOTE_FFOR 0x80000000
#define EXC_I386_INTOFLT 4
#define SQLITE_ENABLE_LOCKING_STYLE 1
#define __INT_FAST64_WIDTH__ 64
#define SQLITE_IgnoreChecks 0x00000200
#define SQLITE_LIMIT_COMPOUND_SELECT 4
#define FPC_OE 0x0008
#define _SYS_TYPES_H_ 
#define FPC_OM FPC_OE
#define JT_NATURAL 0x0004
#define _SC_CLOCK_SELECTION 67
#define OP_RowSetAdd 147
#define MAP_MEM_NAMED_REUSE 0x080000
#define IOPOL_VFS_SKIP_MTIME_UPDATE_OFF 0
#define MAP_NOEXTEND 0x0100
#define FPC_PC 0x0300
#define FPC_PE 0x0020
#define ATTR_CMN_UUID 0x00800000
#define SQLITE_TESTCTRL_BITVEC_TEST 8
#define SQLITE_CONFIG_MEMDB_MAXSIZE 29
#define USER_POSIX2_FORT_DEV 14
#define EADDRNOTAVAIL 49
#define ETIME 101
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define VM_MEMORY_ROSETTA_THREAD_CONTEXT 231
#define major(x) ((int32_t)(((u_int32_t)(x) >> 24) & 0xff))
#define _SYS_EVENT_H_ 
#define PAGE_SHIFT vm_page_shift
#define _SC_SS_REPL_MAX 126
#define FPC_RC 0x0c00
#define PLOSS 6
#define MACH_SEND_INVALID_MEMORY 0x1000000c
#define YY_SHIFT_COUNT (542)
#define TIOCFLUSH _IOW('t', 16, int)
#define DbMaskNonZero(M) (M)!=0
#define VM_MEMORY_MALLOC_SMALL 2
#define S_IXUSR 0000100
#define VM_MEMORY_JAVA 44
#define KERN_EXEC 45
#define RLIMIT_FSIZE 1
#define SIOCGIFALTMTU _IOWR('i', 72, struct ifreq)
#define STDIN_FILENO 0
#define S_IWOTH 0000002
#define SRCHFS_START 0x00000001
#define HAVE_PWRITE 1
#define TK_ESCAPE 58
#define ATTR_CMN_VALIDMASK 0xFFFFFFFF
#define SQLITE_OPEN_TRANSIENT_DB 0x00000400
#define FPC_UE 0x0010
#define SQLITE_DEFAULT_CACHE_SIZE -2000
#define ENOTRECOVERABLE 104
#define FIRST_EXCEPTION 1
#define VM_MEMORY_ACCOUNTS 98
#define RUSAGE_CHILDREN -1
#define TIOCPTYUNLK _IO('t', 82)
#define AUDIT_SEQ 0x0010
#define VM_PURGABLE_BEHAVIOR_FIFO (0 << VM_PURGABLE_BEHAVIOR_SHIFT)
#define SQLITE_CONFIG_COVERING_INDEX_SCAN 20
#define SIOCGIFNETMASK _IOWR('i', 37, struct ifreq)
#define CLOCK_PROCESS_CPUTIME_ID _CLOCK_PROCESS_CPUTIME_ID
#define LIST_ENTRY(type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct { struct type *le_next; struct type **le_prev; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define ENETUNREACH 51
#define EXDEV 18
#define _SC_PHYS_PAGES 200
#define BSD4_3 1
#define BSD4_4 1
#define MATH_ERREXCEPT 2
#define OpenCounter(X) 
#define VM_MEMORY_DYLD_MALLOC 61
#define sqlite3IsToplevel(p) ((p)->pToplevel==0)
#define CPUFAMILY_INTEL_NEHALEM 0x6b5a4cd2
#define VFS_CTL_DISC 0x00010008
#define VM_PROT_NONE ((vm_prot_t) 0x00)
#define _POSIX_TRACE (-1)
#define etEXP 2
#define F_TRANSCODEKEY 75
#define __WINT_TYPE__ int
#define SIOCGLOWAT _IOR('s', 3, int)
#define EXC_MASK_SOFTWARE (1 << EXC_SOFTWARE)
#define SQLITE_ANALYZE 28
#define FPC_ZE 0x0004
#define FPC_ZM FPC_ZE
#define MINCORE_REFERENCED_OTHER 0x8
#define __FLT64_MAX__ 1.79769313486231570814527423731704357e+308F64
#define ENC(db) ((db)->enc)
#define SQLITE_MAX_PAGE_COUNT 1073741823
#define _MACH_DYLIB_INFO_H_ 
#define ENOEXEC 8
#define KERN_MAXPROCPERUID 30
#define FPE_NOOP 0
#define EOF (-1)
#define WO_GT (WO_EQ<<(TK_GT-TK_EQ))
#define DBFLAG_Vacuum 0x0004
#define ATTR_DIR_DATALENGTH 0x00000020
#define RLIMIT_CPU_USAGE_MONITOR 0x2
#define SPILLFLAG_ROLLBACK 0x02
#define FIOCLEX _IO('f', 1)
#define S_ISREG(m) (((m) & S_IFMT) == S_IFREG)
#define MACH_PORT_RIGHT_RECEIVE ((mach_port_right_t) 1)
#define COLFLAG_HASTYPE 0x0004
#define MNT_AUTOMOUNTED 0x00400000
#define SV_ONSTACK SA_ONSTACK
#define TK_ROLLBACK 12
#define __SIZEOF_INT128__ 16
#define VM_MEMORY_CM_XPC 92
#define SQLITE_STMTSTATUS_AUTOINDEX 3
#define __LDBL_MAX_10_EXP__ 4932
#define TASK_POWER_INFO_V2_COUNT_OLD ((mach_msg_type_number_t) (sizeof (task_power_info_v2_data_t) - sizeof(uint64_t)*2) / sizeof (natural_t))
#define SQLITE_IOERR_CHECKRESERVEDLOCK (SQLITE_IOERR | (14<<8))
#define A_GETPINFO 24
#define w_coredump w_T.w_Coredump
#define ctob(x) ((x)<<PGSHIFT)
#define PAGER_SYNCHRONOUS_OFF 0x01
#define VOL_CAP_INT_EXTENDED_ATTR 0x00004000
#define ctos(x) (x)
#define MNT_REMOVABLE 0x00000200
#define EDOM 33
#define KERN_PROC_UID 5
#define IOPOL_SCOPE_THREAD 1
#define _PTHREAD_ATTR_T 
#define _SYS__SELECT_H_ 
#define isgreater(x,y) __builtin_isgreater((x),(y))
#define MAXBSIZE (256 * 4096)
#define ENOSTR 99
#define KERN_KDWRITEMAP_V3 27
#define KERN_POLICY_LIMIT 27
#define P_CHECKOPENEVT 0x00080000
#define YY_ACTTAB_COUNT (1913)
#define USER_BC_DIM_MAX 3
#define x86_THREAD_STATE32 1
#define __API_AVAILABLE(...) 
#define CTL_VFS_NAMES { { "vfsconf", CTLTYPE_STRUCT } }
#define FREAD 0x00000001
#define ESRCH 3
#define HOST_VM_PURGABLE 9
#define SQLITE_CORRUPT_PGNO(P) sqlite3CorruptError(__LINE__)
#define WRITE_UTF16BE(zOut,c) { if( c<=0xFFFF ){ *zOut++ = (u8)((c>>8)&0x00FF); *zOut++ = (u8)(c&0x00FF); }else{ *zOut++ = (u8)(0x00D8 + (((c-0x10000)>>18)&0x03)); *zOut++ = (u8)(((c>>10)&0x003F) + (((c-0x10000)>>10)&0x00C0)); *zOut++ = (u8)(0x00DC + ((c>>8)&0x03)); *zOut++ = (u8)(c&0x00FF); } }
#define SLIST_FOREACH(var,head,field) for ((var) = SLIST_FIRST((head)); (var); (var) = SLIST_NEXT((var), field))
#define EF_IS_SPARSE 0x00000010
#define _SC_REGEXP 77
#define PPNUM_MAX UINT32_MAX
#define EHOSTDOWN 64
#define VOL_CAP_INT_CLONE 0x00010000
#define CPU_SUBTYPE_INTEL_MODEL(x) ((x) >> 4)
#define SQLITE_AUTH_USER (SQLITE_AUTH | (1<<8))
#define BAD_ALRMTYPE(t) (((t) &~ TIME_RELATIVE) != 0)
#define SEEK_END 2
#define ATTR_FILE_SETMASK 0x00000020
#define BTREE_SAVEPOSITION 0x02
#define ApplyCostMultiplier(C,T) 
#define CPU_SUBTYPE_CELERON CPU_SUBTYPE_INTEL(7, 6)
#define EXC_MASK_BAD_ACCESS (1 << EXC_BAD_ACCESS)
#define SQLITE_FUNC_COALESCE 0x0200
#define MACH_MSG_GUARD_FLAGS_MASK 0x0003
#define HI(X) ((u64)(X)<<32)
#define ENFILE 23
#define SQLITE_LOCK_PENDING 3
#define SF_WhereBegin 0x80000
#define WHERE_LOOP_XFER_SZ offsetof(WhereLoop,nLSlot)
#define x86_THREAD_STATE64 4
#define sqlite3VdbeVerifyNoMallocRequired(A,B) 
#define IN_INDEX_EPH 2
#define __DARWIN_OSSwapConstInt16(x) ((__uint16_t)((((__uint16_t)(x) & 0xff00U) >> 8) | (((__uint16_t)(x) & 0x00ffU) << 8)))
#define __DYLDDL_DRIVERKIT_UNAVAILABLE __API_UNAVAILABLE(driverkit)
#define MACH_RCV_IN_PROGRESS 0x10004001
#define VM_MEMORY_COREUI 76
#define PAGE_MIN_SIZE (1 << PAGE_MIN_SHIFT)
#define SIOCGIFSTATUS _IOWR('i', 61, struct ifstat)
#define SQLITE_OPEN_EXCLUSIVE 0x00000010
#define ENOSYS 78
#define SA_RESTART 0x0002
#define HW_L3SETTINGS 21
#define KERN_NOT_DEPRESSED 36
#define VM_PURGABLE_ALL_MASKS (VM_PURGABLE_STATE_MASK | VM_VOLATILE_ORDER_MASK | VM_PURGABLE_ORDERING_MASK | VM_PURGABLE_BEHAVIOR_MASK | VM_VOLATILE_GROUP_MASK | VM_PURGABLE_DEBUG_MASK | VM_PURGABLE_NO_AGING_MASK)
#define _SC_TIMERS 41
#define FP_QNAN FP_NAN
#define CHARCLASS_NAME_MAX 14
#define _MACH_TASK_SPECIAL_PORTS_H_ 
#define va_arg(v,l) __builtin_va_arg(v,l)
#define SQLITE_MAX_SRCLIST 200
#define CIRCLEQ_HEAD(name,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct name { struct type *cqh_first; struct type *cqh_last; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define DB_Empty 0x0004
#define ATTR_CMN_FSID 0x00000004
#define WHERE_DISTINCT_ORDERED 2
#define EV_DELETE 0x0002
#define MACH_SEND_INVALID_RT_OOL_SIZE 0x10000015
#define __GETHOSTUUID_H 
#define TIOCOUTQ _IOR('t', 115, int)
#define RUSAGE_INFO_V0 0
#define RUSAGE_INFO_V1 1
#define RUSAGE_INFO_V2 2
#define RUSAGE_INFO_V3 3
#define RUSAGE_INFO_V5 5
#define __DARWIN_OSSwapConstInt64(x) ((__uint64_t)((((__uint64_t)(x) & 0xff00000000000000ULL) >> 56) | (((__uint64_t)(x) & 0x00ff000000000000ULL) >> 40) | (((__uint64_t)(x) & 0x0000ff0000000000ULL) >> 24) | (((__uint64_t)(x) & 0x000000ff00000000ULL) >> 8) | (((__uint64_t)(x) & 0x00000000ff000000ULL) << 8) | (((__uint64_t)(x) & 0x0000000000ff0000ULL) << 24) | (((__uint64_t)(x) & 0x000000000000ff00ULL) << 40) | (((__uint64_t)(x) & 0x00000000000000ffULL) << 56)))
#define NB 3
#define SQLITE_CALLBACK 
#define PTHREAD_SCOPE_SYSTEM 1
#define USER_RE_DUP_MAX 9
#define PAGER_WRITER_DBMOD 4
#define EXC_SOFT_SIGNAL 0x10003
#define NN 1
#define PTHREAD_PRIO_NONE 0
#define __DARWIN_ALIGNBYTES32 (sizeof(__uint32_t) - 1)
#define MNT_SNAPSHOT 0x40000000
#define __DARWIN_NSIG 32
#define __STDC_UTF_32__ 1
#define __INT_FAST8_WIDTH__ 8
#define PROC_FLAG_APPLICATION 0x1000000
#define ATTR_CMN_DOCUMENT_ID 0x00100000
#define VM_SYNC_SYNCHRONOUS ((vm_sync_t) 0x02)
#define TIOCREMOTE _IOW('t', 105, int)
#define OS_COLD __attribute__((__cold__))
#define __FLT32X_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define KERN_NX_PROTECTION 60
#define TF_NoVisibleRowid 0x0040
#define SQLITE_IOERR_DELETE (SQLITE_IOERR | (10<<8))
#define BSD 199506
#define EXC_MASK_CRASH (1 << EXC_CRASH)
#define WRITE_UTF16LE(zOut,c) { if( c<=0xFFFF ){ *zOut++ = (u8)(c&0x00FF); *zOut++ = (u8)((c>>8)&0x00FF); }else{ *zOut++ = (u8)(((c>>10)&0x003F) + (((c-0x10000)>>10)&0x00C0)); *zOut++ = (u8)(0x00D8 + (((c-0x10000)>>18)&0x03)); *zOut++ = (u8)(c&0x00FF); *zOut++ = (u8)(0x00DC + ((c>>8)&0x03)); } }
#define PragTyp_INDEX_LIST 18
#define _U_INT8_T 
#define UTIME_OMIT -2
#define TARGET_CPU_68K 0
#define PTHREAD_MUTEX_POLICY_FAIRSHARE_NP 1
#define FOPEN_MAX 20
#define OP_Permutation 86
#define VDBE_MAGIC_RESET 0x48fa9f76
#define KERN_KDGETBUF 5
#define ATTR_VOL_VALIDMASK 0xF007FFFF
#define PragTyp_INCREMENTAL_VACUUM 16
#define MACH_SEND_INVALID_TYPE 0x1000000f
#define VM_PURGABLE_EMPTY 2
#define TK_REM 107
#define PROC_FLAG_SUPPRESSED 0x800000
#define KERN_OPERATION_TIMED_OUT 49
#define MALLOC_PTR_IN_USE_RANGE_TYPE 1
#define PragTyp_ACTIVATE_EXTENSIONS 40
#define MACH_PORT_INFO_EXT_COUNT ((natural_t) (sizeof(mach_port_info_ext_t)/sizeof(natural_t)))
#define TK_TEMP 21
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define pcache1LeaveMutex(X) assert((X)->mutex==0)
#define EF_IS_SYNTHETIC 0x00000020
#define _STRING_H_ 
#define PragTyp_BUSY_TIMEOUT 3
#define etGENERIC 3
#define VOL_CAP_INT_NFSEXPORT 0x00000004
#define MNT_NOBLOCK 0x00020000
#define TK_INTO 146
#define LSCALE 1000
#define GUARD_TYPE_VIRT_MEMORY 0x5
#define VM_FLAGS_RETURN_DATA_ADDR 0x100000
#define TRIGGER_BEFORE 1
#define THREAD_IDENTIFIER_INFO 4
#define OP_NotFound 28
#define _POSIX_V6_ILP32_OFFBIG __ILP32_OFFBIG
#define sqlite3Isalnum(x) (sqlite3CtypeMap[(unsigned char)(x)]&0x06)
#define ESHLIBVERS 87
#define ATTR_FILE_DATAEXTENTS 0x00000800
#define BTCF_WriteFlag 0x01
#define __DARWIN_ALIGN32(p) ((__darwin_size_t)((__darwin_size_t)(p) + __DARWIN_ALIGNBYTES32) &~ __DARWIN_ALIGNBYTES32)
#define __IOS_AVAILABLE(_vers) 
#define MPO_IMMOVABLE_RECEIVE 0x80
#define HOST_SECURITY_PORT 0
#define MCLSHIFT 11
#define VM_PURGABLE_SET_STATE ((vm_purgable_t) 0)
#define _SC_SYNCHRONIZED_IO 40
#define VM_BEHAVIOR_PAGEOUT ((vm_behavior_t) 11)
#define _STRUCT_ZMM_REG struct __darwin_zmm_reg
#define MACH_VOUCHER_ATTR_KEY_BITS MACH_VOUCHER_ATTR_KEY_USER_DATA
#define _CS_XBS5_LPBIG_OFFBIG_LIBS 34
#define USER_FSIGNATURES_CDHASH_LEN 20
#define ATTR_DIR_SETMASK 0x00000000
#define SIG_ERR ((void (*)(int))-1)
#define SQLITE_CONFIG_HEAP 8
#define SQLITE_DBCONFIG_TRIGGER_EQP 1008
#define CHILD_MAX 266
#define SQLITE_DONE 101
#define CPUFAMILY_ARM_TWISTER 0x92fb37c8
#define __DARWIN_EXTSN(sym) __asm("_" __STRING(sym) __DARWIN_SUF_EXTSN)
#define BTREE_UNORDERED 8
#define __CHAR32_TYPE__ unsigned int
#define KERN_PROC_RUID 6
#define AQ_MAXHIGH 10000
#define THREAD_DEBUG_INFO_INTERNAL 6
#define TK_ATTACH 32
#define ATTR_VOL_IOBLOCKSIZE 0x00000080
#define AUC_NOAUDIT 2
#define LONG_BIT 64
#define COLNAME_DATABASE 2
#define WRC_Prune 1
#define UINT_LEAST32_MAX UINT32_MAX
#define __PTHREAD_RWLOCK_SIZE__ 192
#define MADV_FREE_REUSE 8
#define __AVAILABILITY_INTERNAL_DEPRECATED __attribute__((deprecated))
#define SLIST_ENTRY(type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct { struct type *sle_next; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define st_birthtime st_birthtimespec.tv_sec
#define RTLD_NOLOAD 0x10
#define MNT_NOUSERXATTR 0x01000000
#define NODEV (dev_t)(-1)
#define HW_FLOATINGPT 11
#define ATTR_FILE_FILETYPE 0x00000040
#define SIGILL 4
#define TK_RECURSIVE 72
#define ATTR_CMNEXT_SETMASK 0x00000000
#define MACH_MSGH_BITS_IS_COMPLEX(bits) (((bits) & MACH_MSGH_BITS_COMPLEX) != MACH_MSGH_BITS_ZERO)
#define VM_FLAGS_PERMANENT 0x0080
#define SQLITE_LegacyFileFmt 0x00000002
#define SQLITE_DqsDDL 0x20000000
#define ENOBUFS 55
#define __DARWIN_FD_COPY(f,t) bcopy(f, t, sizeof(*(f)))
#define __FLT64_MIN__ 2.22507385850720138309023271733240406e-308F64
#define host_set_launchctl_port(host,port) (host_set_special_port((host), HOST_LAUNCHCTL_PORT, (port)))
#define __AVAILABILITY_INTERNAL__ 
#define SIGINT 2
#define EFAULT 14
#define UPDATE_IO_STATS_ATOMIC(info,io_size) { OSIncrementAtomic64((SInt64 *)&(info.count)); OSAddAtomic64(io_size, (SInt64 *)&(info.size)); }
#define x86_EXCEPTION_STATE64 6
#define _SC_V6_LPBIG_OFFBIG 106
#define VM_MEMORY_JAVASCRIPT_CORE 63
#define EPROC_CTTY 0x01
#define TRACE_IDX_INPUTS(A) 
#define SQLITE_DBCONFIG_ENABLE_VIEW 1015
#define PTRMAP_OVERFLOW1 3
#define PTRMAP_OVERFLOW2 4
#define OP_NewRowid 121
#define SQLITE_FILE_HEADER "SQLite format 3"
#define KERN_KDEBUG 24
#define EWOULDBLOCK EAGAIN
#define MAP_MEM_FLAGS_MASK 0x00FFFF00
#define MACH_RCV_SYNC_WAIT 0x00004000
#define KERN_MEMORY_DATA_MOVED 24
#define S_IXGRP 0000010
#define INCRINIT_NORMAL 0
#define EBADEXEC 85
#define __ATOMIC_CONSUME 1
#define MAXPRI 127
#define VQ_DESIRED_DISK 0x4000
#define MACH_MSGH_BITS_RAISED_IMPORTANCE(bits) (((bits) & MACH_MSGH_BITS_RAISEIMP) != MACH_MSGH_BITS_ZERO)
#define SQLITE_SELECT 21
#define sqlite3ParserARG_SDECL 
#define __GNUC_MINOR__ 2
#define CURSOR_INVALID 1
#define _U_CHAR 
#define x86_LAST_BRANCH_STATE_COUNT ((mach_msg_type_number_t)(sizeof(last_branch_state_t) / sizeof(int)))
#define LITTLE_ENDIAN __DARWIN_LITTLE_ENDIAN
#define __FLT32X_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F32x
#define OP_Explain 171
#define MEMORY_OBJECT_IO_SYNC 0x20
#define SQLITE_FCNTL_OVERWRITE 11
#define STR_FUNCTION(zName,nArg,pArg,bNC,xFunc) {nArg, SQLITE_FUNC_SLOCHNG|SQLITE_UTF8|(bNC*SQLITE_FUNC_NEEDCOLL), pArg, 0, xFunc, 0, 0, 0, #zName, }
#define WAGGREGATE(zName,nArg,arg,nc,xStep,xFinal,xValue,xInverse,f) {nArg, SQLITE_UTF8|(nc*SQLITE_FUNC_NEEDCOLL)|f, SQLITE_INT_TO_PTR(arg), 0, xStep,xFinal,xValue,xInverse,#zName, {0}}
#define x86_AVX512_STATE (x86_AVX512_STATE32 + 2)
#define SIOCSIFVLAN _IOW('i', 126, struct ifreq)
#define S_ISUID 0004000
#define _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS 35
#define CPU_ARCH_MASK 0xff000000
#define __DARWIN_OS_INLINE static inline
#define F_FLUSH_DATA 40
#define _INO64_T 
#define _SC_THREAD_DESTRUCTOR_ITERATIONS 85
#define CPU_SUBTYPE_VAX8650 ((cpu_subtype_t) 10)
#define SQLITE_NOMEM 7
#define TK_LAST 84
#define VM_FLAGS_SUPERPAGE_SIZE_2MB (SUPERPAGE_SIZE_2MB<<VM_FLAGS_SUPERPAGE_SHIFT)
#define BTREE_LARGEST_ROOT_PAGE 4
#define static_assert _Static_assert
#define CPU_SUBTYPE_SPARC_ALL ((cpu_subtype_t) 0)
#define EV_ADD 0x0001
#define SQLITE_SYNC_DATAONLY 0x00010
#define OE_Rollback 1
#define sv_onstack sv_flags
#define RU_PROC_RUNS_RESLIDE 0x00000001
#define CPU_TYPE_VAX ((cpu_type_t) 1)
#define pager_pagehash(X) 0
#define F_DUPFD_CLOEXEC 67
#define SF_MinMaxAgg 0x01000
#define SQLITE_STMTSTATUS_REPREPARE 5
#define __WATCHOS_AVAILABLE(_vers) 
#define SQLITE_CONFIG_SQLLOG 21
#define ENOENT 2
#define _SYS_IOCTL_H_ 
#define x86_THREAD_STATE32_COUNT ((mach_msg_type_number_t) ( sizeof (x86_thread_state32_t) / sizeof (int) ))
#define __UINT32_TYPE__ unsigned int
#define getVarint32(A,B) (u8)((*(A)<(u8)0x80)?((B)=(u32)*(A)),1:sqlite3GetVarint32((A),(u32 *)&(B)))
#define PTF_INTKEY 0x01
#define IN_INDEX_INDEX_ASC 3
#define MACH_MSGH_BITS_DENAP MACH_MSGH_BITS_RAISEIMP
#define SQLITE_CANTOPEN 14
#define PTHREAD_KEYS_MAX 512
#define TIOCSETAW _IOW('t', 21, struct termios)
#define MACH_RCV_BODY_ERROR 0x1000400c
#define MAP_RESERVED0080 0x0080
#define mach_vm_trunc_page(x) ((mach_vm_offset_t)(x) & ~((signed)vm_page_mask))
#define TK_RSHIFT 102
#define OP_AggFinal 157
#define SQLITE_DEFAULT_WORKER_THREADS 0
#define __FLT128_EPSILON__ 1.92592994438723585305597794258492732e-34F128
#define IsOrdinaryHiddenColumn(X) 0
#define MAP_MEM_USE_DATA_ADDR 0x100000
#define MACH_PORT_TEMPOWNER 4
#define __SIZEOF_LONG_LONG__ 8
#define EXCEPTION_DEFAULT 1
#define PragTyp_AUTO_VACUUM 1
#define MAX_TRAILER_SIZE ((mach_msg_size_t)sizeof(mach_msg_max_trailer_t))
#define _GCC_PTRDIFF_T 
#define PragTyp_PAGE_COUNT 24
#define _POSIX_THREAD_KEYS_MAX 128
#define VOL_CAP_INT_COPYFILE 0x00000020
#define __FLT32X_MIN__ 2.22507385850720138309023271733240406e-308F32x
#define _PTHREAD_ONCE_T 
#define MACH_VOUCHER_ATTR_MANAGER_NULL ((mach_voucher_attr_manager_t) 0)
#define TF_64B_DATA 0x00000002
#define __TVOS_14_0 140000
#define __TVOS_14_1 140100
#define __TVOS_14_3 140300
#define __TVOS_14_5 140500
#define __LDBL_DIG__ 18
#define EV_CLEAR 0x0020
#define EXC_MASK_BREAKPOINT (1 << EXC_BREAKPOINT)
#define __UINT_FAST16_MAX__ 0xffff
#define ATTR_CMN_USERACCESS 0x00200000
#define S_IROTH 0000004
#define OPFLAG_NOCHNG 0x01
#define mach_msg_kind_t mach_port_seqno_t
#define POSIX_MADV_RANDOM 1
#define _SC_BC_DIM_MAX 10
#define _OS__OSBYTEORDER_H 
#define RLIMIT_THREAD_CPULIMITS 0x3
#define VM_PAGE_INFO_BASIC_COUNT ((mach_msg_type_number_t) (sizeof(vm_page_info_basic_data_t)/sizeof(int)))
#define VM_MEMORY_GUARD 31
#define CPUSUBFAMILY_UNKNOWN 0
#define EFL_VIF 0x00080000
#define IOPOL_VFS_TRIGGER_RESOLVE_OFF 1
#define MAP_MEM_PURGABLE_KERNEL_ONLY 0x004000
#define FPE_FLTUND 3
#define SF_SETTABLE 0x3fff0000
#define X_OK (1<<0)
