#define THREAD_CONVERT_THREAD_STATE_FROM_SELF 2
#define sa_sigaction __sigaction_u.__sa_sigaction
#define TCP_KEEPCNT 0x102
#define SQLITE_ERROR_MISSING_COLLSEQ (SQLITE_ERROR | (1<<8))
#define MACH_SEND_TIMEOUT 0x00000010
#define GET_RCV_ELEMENTS(y) (((y) >> 24) & 0xf)
#define CPU_STATE_IDLE 2
#define IN_CLASSB_MAX 65536
#define SQLITE_MISUSE 21
#define NETSVC_MRKNG_LVL_L3L2_ALL 2
#define _Nullable 
#define VM_BEHAVIOR_FREE ((vm_behavior_t) 6)
#define EFL_VIP 0x00100000
#define __strftimelike(fmtarg) __attribute__((__format__ (__strftime__, fmtarg, 0)))
#define __DBL_MIN_EXP__ (-1021)
#define IPPROTO_SVMTP 82
#define HOST_NOTIFY_CALENDAR_SET 1
#define PF_BOND ((uint32_t)0x626f6e64)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_4(x) x
#define _UINT64_T 
#define pseudo_AF_HDRCMPLT 35
#define AF_MAX 41
#define PF_RESERVED_36 AF_RESERVED_36
#define PRIO_MIN -20
#define SIG_UNBLOCK_ 1
#define MACH_RCV_TRAILER_LABELS 8
#define __UINT_LEAST16_MAX__ 0xffff
#define FPC_PC_24 0x0000
#define IPV6CTL_KAME_VERSION 20
#define _ETIME -62
#define SQLITE_FCNTL_SYNC 21
#define _PTHREAD_IMPL_H_ 
#define __DBL_DECIMAL_DIG__ 17
#define OSSwapHostToLittleConstInt32(x) ((uint32_t)(x))
#define CMSG_NXTHDR(mhdr,cmsg) ((char *)(cmsg) == (char *)0L ? CMSG_FIRSTHDR(mhdr) : ((((unsigned char *)(cmsg) + __DARWIN_ALIGN32((__uint32_t)(cmsg)->cmsg_len) + __DARWIN_ALIGN32(sizeof(struct cmsghdr))) > ((unsigned char *)(mhdr)->msg_control + (mhdr)->msg_controllen)) ? (struct cmsghdr *)0L : (struct cmsghdr *)(void *)((unsigned char *)(cmsg) + __DARWIN_ALIGN32((__uint32_t)(cmsg)->cmsg_len))))
#define __RequestUnion__mach_port_subsystem__defined 
#define __FLT128_MAX_10_EXP__ 4932
#define __Request__vm_map_subsystem__defined 
#define RE_DUP_MAX 255
#define VM_MEMORY_ASSETSD 72
#define SQLITE_CONSTRAINT_ROWID (SQLITE_CONSTRAINT |(10<<8))
#define x86_DEBUG_STATE32_COUNT ((mach_msg_type_number_t) ( sizeof (x86_debug_state32_t) / sizeof (int) ))
#define VM_MEMORY_CARBON VM_MEMORY_CORESERVICES
#define _MACH_THREAD_SPECIAL_PORTS_H_ 
#define _SC_NGROUPS_MAX 4
#define VM_MAP_INSPECT_NULL ((vm_map_inspect_t) 0)
#define SQLITE_PREPARE_NORMALIZE 0x02
#define IN6ADDR_MULTICAST_PREFIX IN6MASK8
#define TASK_EXC_GUARD_ALL 0xff
#define atomic_is_lock_free(OBJ) __atomic_is_lock_free (sizeof (*(OBJ)), (OBJ))
#define __DARWIN_NFDBITS (sizeof(__int32_t) * __DARWIN_NBBY)
#define SQLITE_MUTEX_STATIC_VFS3 13
#define _REGX(n) union { dword_t e ##n ##x; word_t n ##x; struct { byte_t n ##l; byte_t n ##h; }; }
#define CALLS_H 
#define _SC_SPIN_LOCKS 80
#define MSG_HOLD 0x800
#define CPU_SUBTYPE_HPPA_7100LC ((cpu_subtype_t) 1)
#define _WATTR_OK (1<<16)
#define task_get_bootstrap_port(task,port) (task_get_special_port((task), TASK_BOOTSTRAP_PORT, (port)))
#define _T_WCHAR_ 
#define atomic_fetch_or(PTR,VAL) __atomic_fetch_or ((PTR), (VAL), __ATOMIC_SEQ_CST)
#define MEMORY_OBJECT_RELEASE_NO_OP 0x4
#define FIONBIO_ 0x5421
#define MAC_OS_X_VERSION_10_2 1020
#define VM_PAGE_INFO_MAX 
#define IPPROTO_LEAF2 26
#define MAC_OS_X_VERSION_10_3 1030
#define CMSG_FIRSTHDR(mhdr) ((mhdr)->msg_controllen >= sizeof(struct cmsghdr) ? (struct cmsghdr *)(mhdr)->msg_control : (struct cmsghdr *)0L)
#define _SYS_QOS_H 
#define OSSwapHostToLittleConstInt64(x) ((uint64_t)(x))
#define __MAC_10_13_1 101301
#define __MAC_10_13_2 101302
#define __MAC_10_13_4 101304
#define IP_TOS 3
#define __IPHONE_14_3 140300
#define SQLITE_VTAB_DIRECTONLY 3
#define SIGWINCH_ 28
#define _SC_EXPR_NEST_MAX 14
#define SQLITE_FCNTL_POWERSAFE_OVERWRITE 13
#define MAP_MEM_4K_DATA_ADDR 0x800000
#define EXC_SYSCALL 7
#define SIGBUS 10
#define IPPROTO_MTP 92
#define NL_NMAX 1
#define __enum_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_open
#define VM_MEMORY_EAR_DECODER 102
#define IPPROTO_IDPR 35
#define IPPROTO_NVPII 11
#define EXC_BAD_INSTRUCTION 2
#define __deprecated_msg(_msg) __attribute__((__deprecated__(_msg)))
#define SQLITE_FCNTL_DATA_VERSION 35
#define __DARWIN_howmany(x,y) ((((x) % (y)) == 0) ? ((x) / (y)) : (((x) / (y)) + 1))
#define __DARWIN_INODE64(sym) __asm("_" __STRING(sym) __DARWIN_SUF_64_BIT_INO_T)
#define SQLITE_IOCAP_ATOMIC32K 0x00000080
#define MACH_RCV_TRAILER_SEQNO 1
#define POLICY_RR_LIMIT_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_rr_limit)/sizeof(integer_t)))
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_0(x) 
#define __CHAR_BIT__ 8
#define SQLITE_CONSTRAINT_UNIQUE (SQLITE_CONSTRAINT | (8<<8))
#define SQLITE_IOERR_SHMOPEN (SQLITE_IOERR | (18<<8))
#define SQLITE_CREATE_INDEX 1
#define _XOPEN_CRYPT (1)
#define VM_MEMORY_ROSETTA_INDIRECT_BRANCH_MAP 232
#define MACH_PORT_TYPE_SEND MACH_PORT_TYPE(MACH_PORT_RIGHT_SEND)
#define _TIME_H_ 
#define __sgetc(p) (--(p)->_r < 0 ? __srget(p) : (int)(*(p)->_p++))
#define _SC_THREAD_SAFE_FUNCTIONS 91
#define VM_MEMORY_SHARED_PMAP 32
#define EWOULDBLOCK EAGAIN
#define SHRT_MAX __SHRT_MAX__
#define IPPROTO_IPCOMP 108
#define MPG_IMMOVABLE_RECEIVE 0x02
#define SIGTTIN 21
#define _ESRMNT -69
#define _MACH_STD_TYPES_H_ 
#define IOPOL_VFS_STATFS_NO_DATA_VOLUME_DEFAULT 0
#define EACCES 13
#define SQLITE_GET_LOCKPROXYFILE SQLITE_FCNTL_GET_LOCKPROXYFILE
#define _SC_COLL_WEIGHTS_MAX 13
#define _PTHREAD_RWLOCKATTR_T 
#define SOCK_RAW 3
#define CPU_SUBTYPE_X86_64_H ((cpu_subtype_t)8)
#define atomic_fetch_or_explicit(PTR,VAL,MO) __atomic_fetch_or ((PTR), (VAL), (MO))
#define PTRACE_SINGLESTEP_ 9
#define CPU_SUBTYPE_MIPS_R2000 ((cpu_subtype_t) 5)
#define _SC_XOPEN_SHM 113
#define SQLITE_MUTEX_STATIC_PRNG 5
#define _SC_XBS5_ILP32_OFF32 122
#define __Reply__vm_map_subsystem__defined 
#define PIPE_BUF 512
#define IP_TTL 4
#define NET_RT_TRASH 5
#define MACH_PORT_TYPE_PORT_OR_DEAD (MACH_PORT_TYPE_PORT_RIGHTS|MACH_PORT_TYPE_DEAD_NAME)
#define MISC_H 
#define __OSX_AVAILABLE_BUT_DEPRECATED(_osxIntro,_osxDep,_iosIntro,_iosDep) 
#define stderr __stderrp
#define SQLITE_TESTCTRL_FAULT_INSTALL 9
#define MS_SILENT_ (1 << 15)
#define MACH_MSG_TYPE_DISPOSE_SEND_ONCE 26
#define MACH_VOUCHER_ATTR_AUTO_REDEEM ((mach_voucher_attr_recipe_command_t)4)
#define IN_CLASSB_HOST 0x0000ffff
#define TASK_BOOTSTRAP_PORT 4
#define PF_DLI AF_DLI
#define va_start(v,l) __builtin_va_start(v,l)
#define TH_CWR 0x80
#define RLIM_NLIMITS 9
#define _PTHREAD_CONDATTR_T 
#define PF_DECnet AF_DECnet
#define host_get_node_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_NODE_PORT, (port)))
#define IPV6_CHECKSUM 26
#define EMLINK 31
#define __ORDER_LITTLE_ENDIAN__ 1234
#define IPV6_DEFAULT_MULTICAST_HOPS 1
#define IP_MAX_MEMBERSHIPS 4095
#define SIGHUP_ 1
#define MS_READONLY_ (1 << 0)
#define IPV6CTL_AUTO_FLOWLABEL 17
#define VM_FLAGS_FIXED 0x0000
#define AF_LOCAL_ PF_LOCAL_
#define MACH_RCV_NOTIFY 0x00000000
#define _SC_AIO_PRIO_DELTA_MAX 44
#define SQLITE_CHECKPOINT_PASSIVE 0
#define forceinline inline __attribute__((always_inline))
#define EREMOTE 71
#define SQLITE_DBSTATUS_SCHEMA_USED 2
#define SQLITE_IOERR_BLOCKED (SQLITE_IOERR | (11<<8))
#define __DARWIN_PDP_ENDIAN 3412
#define __DBL_DENORM_MIN__ ((double)4.94065645841246544176568792868221372e-324L)
#define SQLITE_BUSY_RECOVERY (SQLITE_BUSY | (1<<8))
#define __IPHONE_7_0 70000
#define IOPOL_TYPE_VFS_IGNORE_CONTENT_PROTECTION 6
#define VM_PROT_ALL (VM_PROT_READ|VM_PROT_WRITE|VM_PROT_EXECUTE)
#define __FLT32X_DECIMAL_DIG__ 17
#define EXC_I386_STKFLT 12
#define __PIC__ 2
#define _ENOPROTOOPT -92
#define __IOS_PROHIBITED 
#define x86_AVX_STATE_COUNT ((mach_msg_type_number_t) (sizeof(x86_avx_state_t)/sizeof(unsigned int)))
#define SQLITE_CONFIG_MMAP_SIZE 22
#define SHRT_MIN (-SHRT_MAX - 1)
#define KERN_NOT_SUPPORTED 46
#define MACH_SEND_NO_BUFFER 0x1000000d
#define __sfeof(p) (((p)->_flags & __SEOF) != 0)
#define AF_INET6 30
#define _ESHUTDOWN -108
#define BUS_ADRERR 2
#define _SC_THREAD_PRIO_INHERIT 87
#define MPO_TEMPOWNER 0x04
#define SQLITE_CREATE_VTABLE 29
#define OSReadLittleInt16(base,byteOffset) _OSReadInt16(base, byteOffset)
#define MEMORY_OBJECT_DATA_PURGE 0x4
#define SIGXCPU_ 24
#define IP_FW_GET 44
#define _XOPEN_VERSION 600
#define _EUSERS -87
#define IPPORT_HIFIRSTAUTO 49152
#define IPV6_MAX_GROUP_SRC_FILTER 512
#define ___POSIX_C_DEPRECATED_STARTING_199309L 
#define _PTHREAD_RECURSIVE_MUTEX_SIG_init 0x32AAABA2
#define TH_USAGE_SCALE 1000
#define _LIMITS_H_ 
#define OSSwapHostToLittleConstInt16(x) ((uint16_t)(x))
#define VM_BEHAVIOR_SEQUENTIAL ((vm_behavior_t) 2)
#define MACH_SEND_NO_GRANT_DEST 0x10000016
#define MEMORY_OBJECT_COPY_NONE 0
#define _MACH_SEMAPHORE_H_ 
#define w_termsig w_T.w_Termsig
#define VM_BEHAVIOR_ZERO_WIRED_PAGES ((vm_behavior_t) 7)
#define __ILP32_OFF32 (-1)
#define _ESRCH -3
#define _MACH_VM_PROT_H_ 
#define __x86_64 1
#define VM_VOLATILE_GROUP_MASK (7 << VM_VOLATILE_GROUP_SHIFT)
#define SO_LINGER 0x0080
#define PTHREAD_MUTEX_POLICY_FIRSTFIT_NP 3
#define MACH_MSGH_KIND_NORMAL 0x00000000
#define __DARWIN_SUF_1050 "$1050"
#define _OS__OSBYTEORDERI386_H 
#define EQUIV_CLASS_MAX 2
#define IPPROTO_XNET 15
#define TASK_SCHED_FIFO_INFO 12
#define IPV6_TCLASS 36
#define VM_BEHAVIOR_REUSABLE ((vm_behavior_t) 8)
#define RLIMIT_RSS_ 5
#define SIGPROF 27
#define _ENAMETOOLONG -36
#define IPV6_MAX_SOCK_SRC_FILTER 128
#define bool _Bool
#define host_get_dynamic_pager_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_DYNAMIC_PAGER_PORT, (port)))
#define _SC_CPUTIME 68
#define __UINT_FAST64_MAX__ 0xffffffffffffffffULL
#define __SIG_ATOMIC_TYPE__ int
#define VM_REGION_EXTENDED_INFO 13
#define MACH_MEMORY_INFO_NAME_MAX_LEN 80
#define SQLITE_CANTOPEN_DIRTYWAL (SQLITE_CANTOPEN | (5<<8))
#define PF_CCITT AF_CCITT
#define __DBL_MIN_10_EXP__ (-307)
#define SQLITE_CORRUPT_SEQUENCE (SQLITE_CORRUPT | (2<<8))
#define ENOTTY 25
#define TRACE__NOP(msg,...) use(__VA_ARGS__)
#define NUM_SIGS 64
#define SYNC_POLICY_MAX 0x7
#define IPPROTO_MEAS 19
#define MACH_MSG_NULL (mach_msg_header_t *) 0
#define USER_DATA_SELECTOR 0x001f
#define IOPOL_TYPE_VFS_STATFS_NO_DATA_VOLUME 4
#define SQLITE_READONLY_RECOVERY (SQLITE_READONLY | (1<<8))
#define __cold __attribute__((__cold__))
#define HOST_LOAD_INFO 1
#define MAX_GROUPS 32
#define VM_MEMORY_ROSETTA_10 239
#define _SC_MEMLOCK_RANGE 31
#define VM_INHERIT_NONE ((vm_inherit_t) 2)
#define SQLITE_CONSTRAINT_FUNCTION (SQLITE_CONSTRAINT | (4<<8))
#define EXC_I386_DIVERR 0
#define pseudo_AF_KEY 29
#define i386_THREAD_STATE_COUNT ((mach_msg_type_number_t) ( sizeof (i386_thread_state_t) / sizeof (int) ))
#define EMULTIHOP 95
#define MACH_RCV_INVALID_TRAILER 0x1000400f
#define VM_MEMORY_APPKIT 40
#define VM_MEMORY_ANALYSIS_TOOL 10
#define _POSIX_THREAD_SPORADIC_SERVER (-1)
#define SQLITE_OPEN_TEMP_DB 0x00000200
#define MACH_TASK_BASIC_INFO 20
#define SQLITE_EXTERN extern
#define IPPROTO_TRUNK1 23
#define SQLITE_READONLY_ROLLBACK (SQLITE_READONLY | (3<<8))
#define TASK_NAME_NULL ((task_name_t) 0)
#define __FLT32_HAS_DENORM__ 1
#define OSSwapConstInt32(x) __DARWIN_OSSwapConstInt32(x)
#define _POSIX_SYMLINK_MAX 255
#define host_set_filecoordinationd_port(host,port) (host_set_special_port((host), HOST_FILECOORDINATIOND_PORT, (port)))
#define _POSIX_TRACE_EVENT_FILTER (-1)
#define MSG_DONTWAIT 0x80
#define __DECONST(type,var) __CAST_AWAY_QUALIFIER(var, const, type)
#define err_dipc err_system(0x7)
#define TCP_MSS 512
#define __UINT_FAST8_MAX__ 0xff
#define DEV_H 
#define PATH_MAX 1024
#define DEBUG_memory DEBUG_all
#define _LIMITS_H___ 
#define MSG_WAITALL 0x40
#define SQLITE3_TEXT 3
#define SQLITE_DBCONFIG_ENABLE_QPSG 1007
#define _WCHAR_T_DEFINED 
#define TH_FLAGS_GLOBAL_FORCED_IDLE 0x4
#define _POSIX_V7_LP64_OFF64 __LP64_OFF64
#define _XOPEN_XCU_VERSION 4
#define CPU_TYPE_MC88000 ((cpu_type_t) 13)
#define ENOMEM 12
#define SS_DISABLE 0x0004
#define VM_FLAGS_OVERWRITE 0x4000
#define CPU_SUBTYPE_XEON CPU_SUBTYPE_INTEL(12, 0)
#define err_max_system 0x3f
#define __pic__ 2
#define MACH_SEND_INVALID_REPLY 0x10000009
#define __OSX_AVAILABLE_BUT_DEPRECATED_MSG(_osxIntro,_osxDep,_iosIntro,_iosDep,_msg) 
#define OSSwapConstInt64(x) __DARWIN_OSSwapConstInt64(x)
#define EXC_I386_PGFLT 14
#define TRACE_strace TRACE__NOP
#define FTS5_TOKENIZE_QUERY 0x0001
#define _EOVERFLOW -75
#define KEV_DL_WAKEFLAGS_CHANGED 17
#define __INT_LEAST8_WIDTH__ 8
#define _CS_PATH 1
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffULL
#define DEBUG_strace DEBUG_all
#define IPV6_MULTICAST_IF 9
#define _ERRNO_T 
#define _ENOTCONN -107
#define _EAGAIN -11
#define _processor_set_user_ 
#define _XBS5_LPBIG_OFFBIG __LPBIG_OFFBIG
#define IN_CLASSB_NSHIFT 16
#define __DARWIN_IPPORT_RESERVED 1024
#define CPUFAMILY_POWERPC_G3 0xcee41549
#define KERN_TERMINATED 37
#define _MACH_MACH_TYPES_H_ 
#define NFDBITS __DARWIN_NFDBITS
#define _EDQUOT -122
#define O_CREAT_ (1 << 6)
#define IN6ADDR_LINKLOCAL_ALLROUTERS_INIT {{{ 0xff, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02 }}}
#define __UINT_FAST16_TYPE__ short unsigned int
#define __SCCSID(s) __IDSTRING(sccsid,s)
#define SQLITE_TESTCTRL_BENIGN_MALLOC_HOOKS 10
#define __DARWIN_C_ANSI 010000L
#define VM_MEMORY_IOACCELERATOR 100
#define MPO_QLIMIT 0x02
#define PF_NATM AF_NATM
#define __IOS_DEPRECATED(_start,_dep,_msg) 
#define IP_TOS_ 1
#define IPV6_TCLASS_ 67
#define SQLITE_PREPARE_NO_VTAB 0x04
#define _PTHREAD_MUTEX_T 
#define SQLITE_IOERR_FSYNC (SQLITE_IOERR | (4<<8))
#define _EEXIST -17
#define __FLT64X_IS_IEC_60559__ 2
#define __va_copy(d,s) __builtin_va_copy(d,s)
#define KERN_PROTECTION_FAILURE 2
#define TIME_H 
#define SQLITE_NOTICE_RECOVER_WAL (SQLITE_NOTICE | (1<<8))
#define SQLITE_FCNTL_TRACE 19
#define VM_MEMORY_COREUI_CACHED_IMAGE_DATA 103
#define MPO_INSERT_SEND_RIGHT 0x10
#define atomic_fetch_and_explicit(PTR,VAL,MO) __atomic_fetch_and ((PTR), (VAL), (MO))
#define __WATCHOS_5_1 50100
#define __WATCHOS_5_3 50300
#define ERR_SUCCESS (mach_error_t)0
#define MAP_MEM_INNERWBACK 5
#define ITIMER_VIRTUAL_ 1
#define howmany(x,y) __DARWIN_howmany(x, y)
#define MACH_PORT_STATUS_FLAG_TEMPOWNER 0x01
#define NAME_MAX 255
#define CPU_SUBTYPE_LIB64 0x80000000
#define WAKEMON_GET_PARAMS 0x04
#define ___POSIX_C_DEPRECATED_STARTING_200809L 
#define SCHAR_MAX __SCHAR_MAX__
#define __UINT_LEAST8_MAX__ 0xff
#define IPV6_2292HOPOPTS 22
#define VM_MAX_ADDRESS ((vm_offset_t) 0xFFE00000)
#define IPPROTO_MHRP 48
#define KEV_DL_LOW_POWER_MODE_CHANGED 30
#define PF_SIP AF_SIP
#define EXC_I386_EXTOVR 4
#define VM_LIB64_SHR_DATA ((user_addr_t) 0x00007FFF60000000ULL)
#define __options_closed_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_closed __enum_options
#define HOST_VM_INFO_REV1_COUNT ((mach_msg_type_number_t) (HOST_VM_INFO_REV2_COUNT - 1))
#define NETSVC_MRKNG_LVL_L2 1
#define VM_PURGABLE_BEHAVIOR_MASK (1 << VM_PURGABLE_BEHAVIOR_SHIFT)
#define PROC_FLAG_ADAPTIVE_IMPORTANT 0x200000
#define __UINTMAX_TYPE__ long unsigned int
#define _CS_XBS5_LP64_OFF64_CFLAGS 28
#define host_set_coalition_port(host,port) (host_set_special_port((host), HOST_COALITION_PORT, (port)))
#define HOST_CAN_HAS_DEBUGGER 11
#define IN6_IS_ADDR_MC_SITELOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && (__IPV6_ADDR_MC_SCOPE(a) == __IPV6_ADDR_SCOPE_SITELOCAL))
#define NET_RT_DUMP2 7
#define IPCTL_SOURCEROUTE 8
#define IOPOL_UTILITY 4
#define sprintf(str,...) __builtin___sprintf_chk (str, 0, __darwin_obsz(str), __VA_ARGS__)
#define PRIO_USER 2
#define _POSIX_THREAD_CPUTIME (-1)
#define KERN_NOT_RECEIVER 7
#define SQLITE_VERSION "3.32.3"
#define HOST_PRIV_PORT 2
#define IOPOL_APPLICATION IOPOL_STANDARD
#define TASK_AFFINITY_TAG_INFO 16
#define _SC_THREAD_PRIO_PROTECT 88
#define MACH_MSG_VM_SPACE 0x00001000
#define _QUAD_LOWWORD 0
#define _ETXTBSY -26
#define ULONG_LONG_MAX (LONG_LONG_MAX * 2ULL + 1ULL)
#define THREAD_READ_PORT 3
#define task_get_kernel_port(task,port) (task_get_special_port((task), TASK_KERNEL_PORT, (port)))
#define CPUFAMILY_ARM_MONSOON_MISTRAL 0xe81e7ef6
#define VM_MEMORY_MALLOC_TINY 7
#define host_get_iocompressionstats_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_IOCOMPRESSIONSTATS_PORT, (port)))
#define __UINT32_MAX__ 0xffffffffU
#define MACH_RCV_INTERRUPT 0x00000400
#define __bool_true_false_are_defined 1
#define CPU_SUBTYPE_PENTII_M3 CPU_SUBTYPE_INTEL(6, 3)
#define __PTHREAD_MUTEX_SIZE__ 56
#define _POSIX_PIPE_BUF 512
#define SIGUSR1 30
#define VOUCHER_MACH_MSG_STATE_UNCHANGED ((voucher_mach_msg_state_t)~0ul)
#define ATOMIC_CHAR_LOCK_FREE __GCC_ATOMIC_CHAR_LOCK_FREE
#define PF_SNA AF_SNA
#define MACH_VOUCHER_TRAP_STACK_LIMIT 256
#define _EOPNOTSUPP -95
#define KERN_NO_SPACE 3
#define SQLITE_INDEX_CONSTRAINT_MATCH 64
#define VM_MEMORY_DYLD 60
#define __FLT128_MIN_EXP__ (-16381)
#define IOPOL_PASSIVE 2
#define IOPOL_ATIME_UPDATES_DEFAULT 0
#define SQLITE_CONFIG_SORTERREF_SIZE 28
#define WUNTRACED 0x00000002
#define SIGTTOU_ 22
#define TASK_EXC_GUARD_MP_DELIVER 0x10
#define NZERO 20
#define SQLITE_SHM_EXCLUSIVE 8
#define __API_DEPRECATED_WITH_REPLACEMENT_BEGIN(...) 
#define FS_FIX_PATH_H 
#define VM_MEMORY_CGIMAGE 52
#define UINT16_C(v) (v)
#define IPV6CTL_V6ONLY 24
#define VM_MEMORY_CM_RPC 93
#define SA_USERSPACE_MASK (SA_ONSTACK | SA_RESTART | SA_RESETHAND | SA_NOCLDSTOP | SA_NODEFER | SA_NOCLDWAIT | SA_SIGINFO)
#define TCP_KEEPALIVE 0x10
#define msgh_reserved msgh_voucher_port
#define MSG_NEEDSA 0x10000
#define IP_MULTICAST_VIF 14
#define IOPOL_VFS_IGNORE_PERMISSIONS_OFF 0
#define IPV6_FW_FLUSH 32
#define KERN_CODESIGN_ERROR 50
#define SCHAR_MIN (-SCHAR_MAX - 1)
#define SQLITE_SCANSTAT_NVISIT 1
#define ENOMSG 91
#define _PC_PRIO_IO 19
#define EXIT_FAILURE 1
#define VM_MEMORY_SCENEKIT 86
#define HOST_TELEMETRY_PORT (13 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define IN6ADDR_ANY_INIT {{{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}}
#define __INT_LEAST16_WIDTH__ 16
#define IPV6CTL_AUTO_LINKLOCAL 35
#define HOST_EXPIRED_TASK_INFO 6
#define _STRUCT_MCONTEXT _STRUCT_MCONTEXT64
#define __SCHAR_MAX__ 0x7f
#define IPCTL_FASTFORWARDING 14
#define VM_LEDGER_FLAG_NO_FOOTPRINT 0x00000001
#define __IPHONE_6_0 60000
#define __IPHONE_6_1 60100
#define IPPROTO_ROUTING 43
#define THREAD_STATE_FLAVOR_LIST 0
#define __FLT32X_HAS_QUIET_NAN__ 1
#define KEV_INET6_CHANGED_ADDR 2
#define AF_UTUN 38
#define VM_INHERIT_COPY ((vm_inherit_t) 1)
#define __SERR 0x0040
#define _BSD_SETJMP_H 
#define SQLITE_TESTCTRL_NEVER_CORRUPT 20
#define __INT64_C(c) c ## LL
#define KERN_NODE_DOWN 47
#define MACH_SEND_INVALID_CONTEXT 0x10000012
#define SA_SIGINFO 0x0040
#define IPV6_V6ONLY_ 26
#define SQLITE_LOCK_EXCLUSIVE 4
#define AC_W 2
#define AC_X 1
#define THREAD_FLAVOR_CONTROL 0
#define EQFULL 106
#define IPCTL_FORWARDING 1
#define REALTIME_CLOCK 0
#define MACH_PORT_STATUS_FLAG_TASKPTR 0x20
#define VM_PAGE_QUERY_PAGE_PAGED_OUT 0x10
#define VM_MEMORY_MALLOC_HUGE 4
#define SIGSEGV_ 11
#define IOPOL_VFS_SKIP_MTIME_UPDATE_ON 1
#define CPU_TYPE_ARM64_32 (CPU_TYPE_ARM | CPU_ARCH_ABI64_32)
#define NSEC_PER_USEC 1000ull
#define IPV6PROTO_MAXID (IPPROTO_PIM + 1)
#define MAC_OS_X_VERSION_10_10_2 101002
#define MACH_PORT_STATUS_FLAG_GUARD_IMMOVABLE_RECEIVE 0x40
#define CPU_TYPE_HPPA ((cpu_type_t) 11)
#define _MACH_RPC_H_ 
#define VM_MEMORY_SQLITE 62
#define TCP_NOTSENT_LOWAT 0x201
#define VM_SYNC_DEACTIVATE ((vm_sync_t) 0x10)
#define SQLITE_VTAB_INNOCUOUS 2
#define _SC_THREAD_THREADS_MAX 94
#define SI_USER 0x10001
#define SIGTTOU 22
#define __API_UNAVAILABLE_BEGIN_GET_MACRO(...) 
#define _SC_2_UPE 25
#define __SIZEOF_INT__ 4
#define __PRAGMA_REDEFINE_EXTNAME 1
#define MACH_MSGH_BITS(remote,local) ((remote) | ((local) << 8))
#define SQLITE_IOCAP_BATCH_ATOMIC 0x00004000
#define EXC_MASK_BAD_INSTRUCTION (1 << EXC_BAD_INSTRUCTION)
#define _MACH_TASK_POLICY_H_ 
#define _MACH_I386_PROCESSOR_INFO_H_ 
#define IPPROTO_SCTP 132
#define VM_VOLATILE_MAKE_LAST_IN_GROUP (0 << VM_VOLATILE_ORDER_SHIFT)
#define CPU_SUBTYPE_MC68030_ONLY ((cpu_subtype_t) 3)
#define SQLITE_FCNTL_GET_LOCKPROXYFILE 2
#define CLOCK_REALTIME _CLOCK_REALTIME
#define IPCTL_INTRQMAXLEN 10
#define __IPHONE_5_1 50100
#define TH_ACCEPT (TH_FIN|TH_SYN|TH_RST|TH_ACK)
#define SO_DOMAIN_ 39
#define CLOCK_GET_TIME_RES 1
#define IPPROTO_EGP 8
#define __USER_LABEL_PREFIX__ _
#define _ESTALE -116
#define SO_DEBUG 0x0001
#define VM_LEDGER_TAG_MAX 0x00000005
#define CMSG_LEN(l) (__DARWIN_ALIGN32(sizeof(struct cmsghdr)) + (l))
#define SQLITE_MUTEX_STATIC_OPEN 4
#define IPV6_FAITH 29
#define VM_REGION_SUBMAP_INFO_V1_SIZE (VM_REGION_SUBMAP_INFO_V2_SIZE - sizeof (vm_object_id_t) )
#define ENEEDAUTH 81
#define SQLITE_LIMIT_COLUMN 2
#define NET_SERVICE_TYPE_RD 8
#define _ELIBEXEC -83
#define IPPROTO_EON 80
#define SEMAPHORE_NULL ((semaphore_t) 0)
#define err_us err_system(0x1)
#define IPCTL_RTMAXCACHE 7
#define PTHREAD_CANCEL_DEFERRED 0x02
#define IN_BADCLASS(i) (((u_int32_t)(i) & 0xf0000000) == 0xf0000000)
#define KERN_RIGHT_EXISTS 21
#define WCONTINUED 0x00000010
#define _SYS_ERRNO_H_ 
#define OSWriteBigInt16(base,byteOffset,data) OSWriteSwapInt16(base, byteOffset, data)
#define __TVOS_11_3 110300
#define __assert(e,file,line) __assert_rtn ((const char *)-1L, file, line, e)
#define ILL_ILLOPC 1
#define VM_INHERIT_DEFAULT VM_INHERIT_COPY
#define CPUFAMILY_ARM_CYCLONE 0x37a09642
#define MACH_MSG_GUARD_FLAGS_MASK 0x0003
#define LOCK_DEBUG 0
#define __LDBL_HAS_INFINITY__ 1
#define round_msg(x) (((mach_msg_size_t)(x) + sizeof (natural_t) - 1) & ~(sizeof (natural_t) - 1))
#define _EPFNOSUPPORT -96
#define SOCK_MAXADDRLEN 255
#define ALARM_NULL ((alarm_t) 0)
#define SIGSTOP_ 19
#define SQLITE_CANTOPEN_SYMLINK (SQLITE_CANTOPEN | (6<<8))
#define _UINT8_T 
#define SOCK_RAW_ 3
#define TCPOLEN_SIGNATURE 18
#define x86_THREAD_FULL_STATE64_COUNT ((mach_msg_type_number_t) ( sizeof (x86_thread_full_state64_t) / sizeof (int) ))
#define __MAC_10_5 1050
#define __PROJECT_VERSION(s) __IDSTRING(project_version,s)
#define OSWriteBigInt32(base,byteOffset,data) OSWriteSwapInt32(base, byteOffset, data)
#define _MACH_THREAD_POLICY_H_ 
#define IPPROTO_ETHERIP 97
#define _SYS_RESOURCE_H_ 
#define _ECONNABORTED -103
#define SQLITE_PRAGMA 19
#define TASK_SCHED_RR_INFO 11
#define PF_UNIX PF_LOCAL
#define CALENDAR_CLOCK 1
#define __IPHONE_14_0 140000
#define __IPHONE_14_1 140100
#define __IPHONE_14_2 140200
#define CPU_SUBTYPE_ARM64E ((cpu_subtype_t) 2)
#define IPV6_ADDR_MC_FLAGS(a) ((a)->s6_addr[1] & 0xf0)
#define __IPHONE_14_5 140500
#define TASK_BASIC_INFO_64_COUNT (sizeof(task_basic_info_64_data_t) / sizeof(natural_t))
#define _ELIBBAD -80
#define _SYS__ENDIAN_H_ 
#define _host_priv_user_ 
#define X86_LAST_BRANCH_STATE_COUNT x86_LAST_BRANCH_STATE_COUNT
#define __FLT32_DIG__ 6
#define __RequestUnion__clock_priv_subsystem__defined 
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_4(x) x
#define SIGTRAP 5
#define _SC_TRACE_EVENT_FILTER 98
#define MACH_PORT_INFO_EXT 7
#define __FLT_EPSILON__ 1.19209289550781250000000000000000000e-7F
#define KERN_INVALID_PROCESSOR_SET 26
#define _POSIX_TRACE_SYS_MAX 8
#define __WATCHOS_PROHIBITED 
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_5(x) x
#define PROCESSOR_SET_NULL ((processor_set_t) 0)
#define ENOLINK 97
#define _MACH_VM_SYNC_H_ 
#define LOCK_NB_ 4
#define SIGCHLD_ 17
#define __FLT32_IS_IEC_60559__ 2
#define OSWriteBigInt64(base,byteOffset,data) OSWriteSwapInt64(base, byteOffset, data)
#define SIGPROF_ 27
#define MEMORY_OBJECT_COPY_SYMMETRIC 4
#define _STRUCT_MCONTEXT64_FULL struct __darwin_mcontext64_full
#define SO_BROADCAST 0x0020
#define CPU_SUBTYPE_MIPS_R2800 ((cpu_subtype_t) 3)
#define _EILSEQ -84
#define x86_PAGEIN_STATE 22
#define THREAD_IDENTIFIER_INFO_COUNT ((mach_msg_type_number_t) (sizeof(thread_identifier_info_data_t) / sizeof(natural_t)))
#define SQLITE_TRACE_STMT 0x01
#define SQLITE_RECURSIVE 33
#define SIGIO 23
#define TCPOPT_WINDOW 3
#define IN_ANY_LOCAL(i) (IN_LINKLOCAL(i) || IN_LOCAL_GROUP(i))
#define FD_H 
#define PROC_FLAG_EXT_DARWINBG 0x10000
#define __STDC_UTF_16__ 1
#define _ESPIPE -29
#define __DBL_IS_IEC_60559__ 2
#define SQLITE_STATUS_PAGECACHE_SIZE 7
#define SQLITE_NOTICE 27
#define __UINT_LEAST32_TYPE__ unsigned int
#define __API_AVAILABLE_GET_MACRO(...) 
#define CPU_SUBTYPE_ARM64_V8 ((cpu_subtype_t) 1)
#define IPPROTO_AHIP 61
#define SQLITE_INTERRUPT 9
#define __abortlike __dead2 __cold __not_tail_called
#define SYNC_VOLUME_FULLSYNC 0x01
#define SQLITE_DESERIALIZE_RESIZEABLE 2
#define INT_FAST64_MAX INT64_MAX
#define ERR_PTR(err) (void *) (intptr_t) (err)
#define MACH_PORT_TYPE_SPREQUEST_DELAYED 0x20000000
#define _POSIX_NAME_MAX 14
#define SQLITE_FULL 13
#define _host_security_user_ 
#define IPPROTO_KRYPTOLAN 65
#define __strong 
#define _ALLOCA_H_ 
#define TRACE_debug TRACE__NOP
#define VM_MEMORY_COREGRAPHICS_DATA 54
#define _ENFILE -23
#define IP_BOUND_IF 25
#define KERN_MEMORY_PRESENT 23
#define __FLT64X_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951F64x
#define VM_VOLATILE_MAKE_FIRST_IN_GROUP (1 << VM_VOLATILE_ORDER_SHIFT)
#define SQLITE_FCNTL_PERSIST_WAL 10
#define KEV_INET_SUBCLASS 1
#define RLIMIT_RTTIME_ 15
#define _SC_MEMLOCK 30
#define SQLITE_STATUS_PAGECACHE_OVERFLOW 2
#define __WATCHOS_6_1 60100
#define __FLT32X_HAS_INFINITY__ 1
#define MACH_MSG_TYPE_MOVE_RECEIVE 16
#define SQLITE_IOERR_GETTEMPPATH (SQLITE_IOERR | (25<<8))
#define SI_TIMER_ -2
#define IN6_IS_ADDR_MC_LINKLOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && (IPV6_ADDR_MC_FLAGS(a) != IPV6_ADDR_MC_FLAGS_UNICAST_BASED) && (__IPV6_ADDR_MC_SCOPE(a) == __IPV6_ADDR_SCOPE_LINKLOCAL))
#define __INT32_MAX__ 0x7fffffff
#define EXC_GUARD 12
#define CPU_ARCH_ABI64 0x01000000
#define _POSIX_V7_LPBIG_OFFBIG __LPBIG_OFFBIG
#define KEV_INET_ADDR_DELETED 3
#define SQLITE_CONFIG_MEMSTATUS 9
#define __FLT32_NORM_MAX__ 3.40282346638528859811704183484516925e+38F32
#define __INT_WIDTH__ 32
#define MACH_RCV_TRAILER_SENDER 2
#define TH_FLAGS_SWAPPED 0x1
#define IN_LINKLOCAL(i) (((u_int32_t)(i) & IN_CLASSB_NET) == IN_LINKLOCALNETNUM)
#define atomic_flag_test_and_set(PTR) __atomic_test_and_set ((PTR), __ATOMIC_SEQ_CST)
#define OSSwapHostToBigConstInt32(x) OSSwapConstInt32(x)
#define err_get_code(err) ((err)&0x3fff)
#define FS_PROC_H 
#define SIGEV_NONE 0
#define SO_TYPE 0x1008
#define subsystem_to_name_map_clock_priv { "clock_set_time", 1200 }, { "clock_set_attributes", 1201 }
#define HOST_KTRACE_BACKGROUND_PORT (6 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define SQLITE_STMTSTATUS_VM_STEP 4
#define EMFILE 24
#define KERNEL_PTRACE_H 
#define THREAD_INSPECT_NULL ((thread_inspect_t) 0)
#define ru_first ru_ixrss
#define MAP_MEM_IO 2
#define MACH_SEND_INTERRUPTED 0x10000007
#define w_retcode w_T.w_Retcode
#define SQLITE_DIRECTONLY 0x000080000
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10_3(x) x
#define invalid_memory_object_flavor(f) (f != MEMORY_OBJECT_ATTRIBUTE_INFO && f != MEMORY_OBJECT_PERFORMANCE_INFO && f != OLD_MEMORY_OBJECT_BEHAVIOR_INFO && f != MEMORY_OBJECT_BEHAVIOR_INFO && f != OLD_MEMORY_OBJECT_ATTRIBUTE_INFO)
#define __DECIMAL_DIG__ 21
#define VM_PAGE_QUERY_PAGE_COPIED 0x20
#define THREAD_LATENCY_QOS_POLICY 7
#define SQLITE_UTF16LE 2
#define SQLITE_DBCONFIG_ENABLE_FTS3_TOKENIZER 1004
#define AT_FDCWD_ -100
#define BYTES_ROUND_UP(bytes) (PAGE_ROUND_UP(bytes) << PAGE_BITS)
#define IP_RETOPTS_ 7
#define __FLT64_EPSILON__ 2.22044604925031308084726333618164062e-16F64
#define MACH_MSGH_BITS_REMOTE(bits) ((bits) & MACH_MSGH_BITS_REMOTE_MASK)
#define MACH_VOUCHER_SELECTOR_CURRENT ((mach_voucher_selector_t)0)
#define OSSwapHostToBigConstInt64(x) OSSwapConstInt64(x)
#define MAX_INPUT 1024
#define _SC_GETGR_R_SIZE_MAX 70
#define __FLT128_IS_IEC_60559__ 2
#define __SCHED_PARAM_SIZE__ 4
#define KMOD_EXPLICIT_DECL(name,version,start,stop) kmod_info_t KMOD_INFO_NAME = { 0, KMOD_INFO_VERSION, -1U, { #name }, { version }, -1, 0, 0, 0, 0, start, stop };
#define ESTALE 70
#define _MACH_I386_VM_TYPES_H_ 
#define FP_PREC_64B 3
#define ENVIRONMENT_SLOT 1
#define _SC_2_SW_DEV 24
#define _WCHAR_T_DEFINED_ 
#define _PC_FILESIZEBITS 18
#define _WPERM_OK (1<<20)
#define VM_MEMORY_JAVASCRIPT_JIT_REGISTER_FILE 65
#define KEV_DL_IF_DETACHING 10
#define IN_CLASSA_HOST 0x00ffffff
#define MACH_MSG_TRAILER_MINIMUM_SIZE sizeof(mach_msg_trailer_t)
#define _POSIX_LOGIN_NAME_MAX 9
#define _STRUCT_MCONTEXT32 struct __darwin_mcontext32
#define SQLITE_OPEN_DELETEONCLOSE 0x00000008
#define _XBS5_ILP32_OFF32 __ILP32_OFF32
#define __UINT_LEAST16_TYPE__ short unsigned int
#define _MACH_VM_REGION_H_ 
#define __FLT64X_MIN_10_EXP__ (-4931)
#define PF_ECMA AF_ECMA
#define PAGE_MAX_SHIFT 14
#define _POSIX_THREAD_ATTR_STACKADDR 200112L
#define MACH_PORT_TYPE_ALL_RIGHTS (MACH_PORT_TYPE_PORT_OR_DEAD|MACH_PORT_TYPE_PORT_SET)
#define __LDBL_HAS_QUIET_NAN__ 1
#define INT64_C(v) (v ## LL)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_4(x) x
#define code_emask (0x3fff)
#define __SPI_DEPRECATED_WITH_REPLACEMENT(...) 
#define _DELETE_OK (1<<12)
#define MEMORY_OBJECT_DATA_NO_CHANGE 0x2
#define __DARWIN_MAXNAMLEN 255
#define IPV6_PORTRANGE_HIGH 1
#define SQLITE_INNOCUOUS 0x000200000
#define _EPROTOTYPE -91
#define FP_NO 0
#define SQLITE_INDEX_CONSTRAINT_EQ 2
#define MACH_MSG_MASK 0x00003e00
#define EAUTH 80
#define SQLITE_FCNTL_SIZE_LIMIT 36
#define SQLITE_READONLY_DBMOVED (SQLITE_READONLY | (4<<8))
#define _SC_XOPEN_VERSION 116
#define MAC_OS_X_VERSION_10_11_3 101103
#define _FSBLKCNT_T 
#define SQLITE_LIMIT_SQL_LENGTH 1
#define __LDBL_MANT_DIG__ 64
#define MACH_PORT_TYPE_SPREQUEST 0x40000000
#define CPUFAMILY_ARM_12 0xbd1b0ae9
#define _STRUCT_MCONTEXT64 struct __darwin_mcontext64
#define CLOCK_MONOTONIC_ 1
#define THREAD_STANDARD_POLICY_COUNT 0
#define ECHILD 10
#define _ENOEXEC -8
#define TASK_RESOURCE_NOTIFY_PORT 11
#define L_tmpnam 1024
#define TCP_CONNECTIONTIMEOUT 0x20
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
#define HOST_PORT 1
#define VM_REGION_SUBMAP_INFO_COUNT_64 VM_REGION_SUBMAP_INFO_V2_COUNT_64
#define SQLITE_IOCAP_ATOMIC1K 0x00000004
#define QUAD_MAX LLONG_MAX
#define SQLITE_INDEX_CONSTRAINT_GT 4
#define __MMX__ 1
#define __MSFILTERREQ_DEFINED 
#define host_set_sysdiagnose_port(host,port) (host_set_special_port((host), HOST_SYSDIAGNOSE_PORT, (port)))
#define SQLITE_BUSY_TIMEOUT (SQLITE_BUSY | (3<<8))
#define IPV6_SOCKOPT_RESERVED1 3
#define HOST_CHUD_PORT HOST_LAUNCHCTL_PORT
#define SQLITE_FCNTL_CHUNK_SIZE 6
#define ATOMIC_LLONG_LOCK_FREE __GCC_ATOMIC_LLONG_LOCK_FREE
#define SQLITE_IOCAP_ATOMIC2K 0x00000008
#define MEMORY_OBJECT_DEFAULT_NULL ((memory_object_default_t) 0)
#define __LDBL_MIN_EXP__ (-16381)
#define TCPOPT_FASTOPEN 34
#define OSWriteLittleInt16(base,byteOffset,data) _OSWriteInt16(base, byteOffset, data)
#define __MAC_10_14_1 101401
#define __MAC_10_14_4 101404
#define __MAC_10_14_6 101406
#define __MAC_OS_X_VERSION_MIN_REQUIRED __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__
#define MAP_MEM_RT 7
#define MACH_SEND_OVERRIDE 0x00000020
#define MACH_PORT_TYPE_RECEIVE MACH_PORT_TYPE(MACH_PORT_RIGHT_RECEIVE)
#define EXC_MASK_MACHINE 0
#define SO_LINGER_SEC 0x1080
#define SQLITE_INDEX_CONSTRAINT_IS 72
#define MACH_MSGH_BITS_RAISEIMP 0x20000000U
#define MACH_MSG_PRIORITY_UNSPECIFIED (mach_msg_priority_t) 0
#define IP_HDRINCL 2
#define SQLITE_IOERR_DIR_CLOSE (SQLITE_IOERR | (17<<8))
#define MEMORY_OBJECT_COPY_CALL 1
#define MSG_CTRUNC 0x20
#define IPPROTO_ENCAP 98
#define MAP_MEM_POSTED_COMBINED_REORDERED 9
#define SQLITE_LOCK_SHARED 1
#define SQLITE_IOCAP_ATOMIC4K 0x00000010
#define trunc_page(x) ((x) & (~(vm_page_size - 1)))
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_3(x) 
#define SQLITE_SYNC_NORMAL 0x00002
#define __BIGGEST_ALIGNMENT__ 16
#define _SC_BC_STRING_MAX 12
#define MACH_VOUCHER_ATTR_MAX_RAW_RECIPE_ARRAY_SIZE 5120
#define PTRDIFF_MIN INTMAX_MIN
#define sa_handler __sigaction_u.__sa_handler
#define LONG_MAX __LONG_MAX__
#define _POSIX_THREAD_PRIORITY_SCHEDULING (-1)
#define IOPOL_TYPE_VFS_MATERIALIZE_DATALESS_FILES 3
#define SQLITE_STATUS_PARSER_STACK 6
#define STDERR_FILENO 2
#define MACH_VM_MAX_ADDRESS ((mach_vm_offset_t) VM_MAX_PAGE_ADDRESS)
#define __DARWIN_ONLY_VERS_1050 0
#define __sfileno(p) ((p)->_file)
#define __DARWIN_1050ALIAS(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_UNIX03)
#define DEV_BLOCK 0
#define VM_PURGABLE_DEBUG_SHIFT 12
#define _SC_THREAD_DESTRUCTOR_ITERATIONS 85
#define TCP_RXT_CONNDROPTIME 0x80
#define __FLT64_MAX_10_EXP__ 308
#define __sferror(p) (((p)->_flags & __SERR) != 0)
#define MEMORY_H 
#define SQLITE_INDEX_CONSTRAINT_LE 8
#define MEMORY_OBJECT_ATTR_INFO_COUNT ((mach_msg_type_number_t) (sizeof(memory_object_attr_info_data_t)/sizeof(int)))
#define SQLITE_INDEX_CONSTRAINT_LT 16
#define TCPOPT_SACK_PERMIT_HDR (TCPOPT_NOP<<24|TCPOPT_NOP<<16|TCPOPT_SACK_PERMITTED<<8|TCPOLEN_SACK_PERMITTED)
#define SWITCH_OPTION_NONE 0
#define SQLITE_CONSTRAINT_PRIMARYKEY (SQLITE_CONSTRAINT | (6<<8))
#define _IN_ADDR_T 
#define __COPYRIGHT(s) __IDSTRING(copyright,s)
#define VM_INHERIT_DONATE_COPY ((vm_inherit_t) 3)
#define __pure 
#define __IPV6_ADDR_SCOPE_SITELOCAL 0x05
#define WTERMSIG(x) (_WSTATUS(x))
#define MACH_EXCEPTION_MASK (MACH_EXCEPTION_CODES | MACH_EXCEPTION_ERRORS)
#define MACH_PORT_TEMPOWNER 4
#define list_for_each_safe(list,item,tmp) for (item = (list)->next, tmp = item->next; item != (list); item = tmp, tmp = item->next)
#define QOS_MIN_RELATIVE_PRIORITY (-15)
#define _EIO -5
#define OSWriteLittleInt64(base,byteOffset,data) _OSWriteInt64(base, byteOffset, data)
#define IPPROTO_RCCMON 10
#define x86_DEBUG_STATE_COUNT ((mach_msg_type_number_t) (sizeof(x86_debug_state_t)/sizeof(unsigned int)))
#define __FLT32_HAS_INFINITY__ 1
#define AF_SIP 24
#define EXIT_SUCCESS 0
#define mach_task_self() mach_task_self_
#define FD_COPY(f,t) __DARWIN_FD_COPY(f, t)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_7(x) 
#define SQLITE_IOCAP_ATOMIC 0x00000001
#define SQLITE_INDEX_CONSTRAINT_NE 68
#define SI_QUEUE 0x10002
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
#define TASK_INFO_MAX (1024)
#define SQLITE_MUTEX_STATIC_VFS2 12
#define _RLIMIT_POSIX_FLAG 0x1000
#define HOST_LOCKD_PORT (5 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define _CS_XBS5_ILP32_OFF32_CFLAGS 20
#define SO_NREAD 0x1020
#define SQLITE_IGNORE 2
#define snprintf(str,len,...) __builtin___snprintf_chk (str, len, 0, __darwin_obsz(str), __VA_ARGS__)
#define EFL_ID 0x00200000
#define MCAST_JOIN_GROUP 80
#define __DARWIN_SUF_64_BIT_INO_T "$INODE64"
#define __enum_open 
#define SQLITE_LIMIT_WORKER_THREADS 11
#define TASK_MAX_SPECIAL_PORT TASK_RESOURCE_NOTIFY_PORT
#define _MACH_I386__STRUCTS_H_ 
#define SQLITE_FCNTL_CKPT_START 39
#define w_stopsig w_S.w_Stopsig
#define SQLITE_OPEN_FILEPROTECTION_COMPLETEUNTILFIRSTUSERAUTHENTICATION 0x00300000
#define NL_LANGMAX 14
#define _SC_2_VERSION 17
#define SQLITE_SHM_UNLOCK 1
#define TASK_KERNEL_PORT 1
#define SQLITE_IOERR_NOMEM (SQLITE_IOERR | (12<<8))
#define MMAP_ANONYMOUS 0x20
#define _WSTOPPED 0177
#define _INT16_T 
#define EDEADLK 11
#define KERN_MEMORY_ERROR 10
#define putchar_unlocked(x) putc_unlocked(x, stdout)
#define __INTPTR_WIDTH__ 64
#define MIG_SUBSYSTEM_NULL ((mig_subsystem_t)0)
#define EPIPE 32
#define IPV6CTL_MAXFRAGPACKETS 9
#define FP_STATE_BYTES 512
#define x86_DEBUG_STATE32 10
#define SQLITE_DONE 101
#define LONG_MIN (-LONG_MAX - 1L)
#define SIGKILL_ 9
#define HOST_VM_INFO64_COUNT ((mach_msg_type_number_t) (sizeof(vm_statistics64_data_t)/sizeof(integer_t)))
#define FS_STAT_H 
#define __IPV6_ADDR_SCOPE_INTFACELOCAL 0x01
#define KERN_CODE_SELECTOR 0x0008
#define MPG_FLAGS_MOD_REFS_PINNED_DEALLOC (0x01ull << 56)
#define EXC_MASK_GUARD (1 << EXC_GUARD)
#define IN6_IS_ADDR_MC_NODELOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && (__IPV6_ADDR_MC_SCOPE(a) == __IPV6_ADDR_SCOPE_NODELOCAL))
#define host_set_io_master_port(host,port) (KERN_INVALID_ARGUMENT)
#define IP_NAT__XXX 55
#define VM_MEMORY_SANITIZER 99
#define EXC_I386_ENOEXTFLT 32
#define IPPROTO_MAXID (IPPROTO_AH + 1)
#define INET_ADDRSTRLEN 16
#define _XBS5_LP64_OFF64 __LP64_OFF64
#define FLOAT80_H 
#define _POSIX_PRIORITY_SCHEDULING (-1)
#define ETIMEDOUT 60
#define IPPROTO_SDRP 42
#define SQLITE_TESTCTRL_IMPOSTER 25
#define _BLKSIZE_T 
#define FS_H 
#define IPV6_PORTRANGE 14
#define _PC_MIN_HOLE_SIZE 27
#define HOST_VM_INFO_COUNT ((mach_msg_type_number_t) (sizeof(vm_statistics_data_t)/sizeof(integer_t)))
#define EBADMSG 94
#define CPU_SUBTYPE_I860_ALL ((cpu_subtype_t) 0)
#define WAIT_MYPGRP 0
#define __DARWIN_SUF_NON_CANCELABLE 
#define htonll(x) __DARWIN_OSSwapInt64(x)
#define SO_WANTMORE 0x4000
#define SQLITE_IOCAP_ATOMIC512 0x00000002
#define x86_DEBUG_STATE64 11
#define SQLITE_READONLY_DIRECTORY (SQLITE_READONLY | (6<<8))
#define MACH_RCV_SYNC_PEEK 0x00008000
#define TASK_DYLD_ALL_IMAGE_INFO_64 1
#define CPU_SUBTYPE_ARM_V7EM ((cpu_subtype_t) 16)
#define _JBLEN ((9 * 2) + 3 + 16)
#define MACH_PORT_RIGHT_SEND ((mach_port_right_t) 0)
#define _MACH_VM_ATTRIBUTES_H_ 
#define VM_SYNC_ASYNCHRONOUS ((vm_sync_t) 0x01)
#define must_check __attribute__((warn_unused_result))
#define GID_MAX 2147483647U
#define SIGABRT 6
#define _GCC_WRAP_STDINT_H 
#define CLD_CONTINUED 6
#define VM_FLAGS_SUPERPAGE_MASK 0x70000
#define TASK_OVERRIDE_QOS_POLICY 9
#define SIG_ERR_ -1
#define _SC_XOPEN_CRYPT 108
#define SEGV_MAPERR_ 1
#define SQLITE_MUTEX_STATIC_PMEM 7
#define __weak 
#define PF_DATAKIT AF_DATAKIT
#define host_get_gssd_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_GSSD_PORT, (port)))
#define IPPROTO_TTP 84
#define IPPROTO_PVP 75
#define _SC_MONOTONIC_CLOCK 74
#define SO_DONTROUTE 0x0010
#define MACH_RCV_PORT_DIED 0x10004009
#define __DBL_MAX_EXP__ 1024
#define MACH_SEND_PROPAGATE_QOS 0x00200000
#define RLIMIT_FSIZE_ 1
#define __WCHAR_WIDTH__ 32
#define __DARWIN_BIG_ENDIAN 4321
#define BC_DIM_MAX 2048
#define SI_KERNEL_ 128
#define __Request__processor_set_subsystem__defined 
#define UPL_NULL ((upl_t) 0)
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define MACH_MSG_TYPE_COPY_SEND 19
#define __FLT_DECIMAL_DIG__ 9
#define IPPROTO_CMTP 38
#define _MACH_I386_BOOLEAN_H_ 
#define __SSE2_MATH__ 1
#define __ATOMIC_HLE_RELEASE 131072
#define _MACH_VM_STATISTICS_H_ 
#define THREAD_PRECEDENCE_POLICY 3
#define _SC_OPEN_MAX 5
#define _VA_LIST_ 
#define i386_EXCEPTION_STATE 3
#define NET_RT_IFLIST2 6
#define __PTRDIFF_MAX__ 0x7fffffffffffffffL
#define __TVOS_PROHIBITED 
#define ETOOMANYREFS 59
#define _PC_NAME_CHARS_MAX 10
#define _POSIX_TZNAME_MAX 6
#define IPPROTO_HOPOPTS 0
#define IPV6CTL_MRTPROTO 8
#define _POSIX_SSIZE_MAX 32767
#define MSG_CTRUNC_ 0x8
#define SQLITE_FCNTL_PRAGMA 14
#define host_get_telemetry_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_TELEMETRY_PORT, (port)))
#define host_get_chud_port(host,port) host_get_launchctl_port(host, port)
#define _SYS_SIGNAL_H_ 
#define TASK_SECURITY_TOKEN_COUNT ((mach_msg_type_number_t) (sizeof(security_token_t) / sizeof(natural_t)))
#define EXC_I386_NMIFLT 2
#define _SC_ASYNCHRONOUS_IO 28
#define SQLITE_CANTOPEN_NOTEMPDIR (SQLITE_CANTOPEN | (1<<8))
#define IPV6_UNICAST_HOPS 4
#define IPPROTO_BRSATMON 76
#define _MACH_DEBUG_ZONE_INFO_H_ 
#define RESOURCE_H 
#define TASK_THREAD_TIMES_INFO_COUNT ((mach_msg_type_number_t) (sizeof(task_thread_times_info_data_t) / sizeof(natural_t)))
#define SQLITE_TESTCTRL_RESERVE 14
#define THREAD_EXTENDED_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (thread_extended_policy_data_t) / sizeof (integer_t)))
#define SQLITE_DBCONFIG_DQS_DDL 1014
#define err_local err_system(0x3e)
#define _str(x) #x
#define MACH_MSG_GUARD_FLAGS_NONE 0x0000
#define __tune_core2__ 1
#define SOCK_STREAM_ 1
#define CPU_SUBTYPE_ARM64_ALL ((cpu_subtype_t) 0)
#define FPE_FLTOVF 2
#define KEV_DL_SIFMETRICS 2
#define __exported_push _Pragma("GCC visibility push(default)")
#define __ATOMIC_HLE_ACQUIRE 65536
#define __NDR_convert__int_rep__ __NDR_convert__
#define ATOMIC_WCHAR_T_LOCK_FREE __GCC_ATOMIC_WCHAR_T_LOCK_FREE
#define _STDARG_H 
#define _MACH_I386_THREAD_STATUS_H_ 
#define _UINT32_T 
#define _PC_PIPE_BUF 6
#define host_get_host_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_PORT, (port)))
#define _PC_VDISABLE 9
#define LEAK_DEBUG 0
#define x86_THREAD_STATE64_COUNT ((mach_msg_type_number_t) ( sizeof (x86_thread_state64_t) / sizeof (int) ))
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#define VM_MEMORY_QUICKLOOK_THUMBNAILS 97
#define IP_DUMMYNET_FLUSH 62
#define __kpi_deprecated_arm64_macos_unavailable 
#define _ENOSYS -38
#define _SC_BARRIERS 66
#define _SC_XOPEN_LEGACY 110
#define ENOPROTOOPT 42
#define _glue(a,b) a ##b
#define KERN_ALREADY_IN_SET 11
#define RLIMIT_MSGQUEUE_ 12
#define SO_NETSVC_MARKING_LEVEL 0x1119
#define HOST_CONTAINERD_PORT (18 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define _POSIX_CPUTIME (-1)
#define _EAFNOSUPPORT -97
#define CPU_SUBTYPE_POWERPC_603ev ((cpu_subtype_t) 5)
#define __FLT64X_MANT_DIG__ 64
#define PTHREAD_CREATE_DETACHED 2
#define POLICY_TIMESHARE 1
#define MACH_NOTIFY_SEND_ONCE (MACH_NOTIFY_FIRST + 007)
#define MACH_PORT_RIGHT_NUMBER ((mach_port_right_t) 6)
#define SQLITE_IOERR_SHMSIZE (SQLITE_IOERR | (19<<8))
#define __WATCHOS_5_0 50000
#define WAKEMON_SET_DEFAULTS 0x08
#define MACH_MSG_FILTER_POLICY_ALLOW (mach_msg_filter_id)0
#define __SIZEOF_WINT_T__ 4
#define _STRUCT_YMM_REG struct __darwin_ymm_reg
#define RLIMIT_DATA_ 2
#define CPU_SUBTYPE_MIPS_R3000 ((cpu_subtype_t) 7)
#define __WATCHOS_5_2 50200
#define TASK_READ_PORT 6
#define list_first_entry(list,type,member) list_entry((list)->next, type, member)
#define _SC_XOPEN_REALTIME 111
#define TCP_ENABLE_ECN 0x104
#define SQLITE_CONSTRAINT 19
#define VM_MEMORY_IOKIT 21
#define VM_MEMORY_MACH_MSG 20
#define WINT_MAX INT32_MAX
#define __WATCHOS_6_0 60000
#define __WATCHOS_6_2 60200
#define ENOSPC 28
#define __ReplyUnion__processor_set_subsystem__defined 
#define AF_PUP 4
#define EXC_MASK_SYSCALL (1 << EXC_SYSCALL)
#define KERN_INVALID_RIGHT 17
#define __MigPackStructs 1
#define UINTPTR_MAX 18446744073709551615UL
#define _X86_INSTRUCTION_STATE_CACHELINE_SIZE 64
#define _STRUCT_X86_DEBUG_STATE32 struct __darwin_x86_debug_state32
#define SQLITE_TESTCTRL_EXTRA_SCHEMA_CHECKS 29
#define SQLITE_FCNTL_FILE_POINTER 7
#define SIGUSR2_ 12
#define subsystem_to_name_map_mach_host { "host_info", 200 }, { "host_kernel_version", 201 }, { "_host_page_size", 202 }, { "mach_memory_object_memory_entry", 203 }, { "host_processor_info", 204 }, { "host_get_io_master", 205 }, { "host_get_clock_service", 206 }, { "kmod_get_info", 207 }, { "host_virtual_physical_table_info", 209 }, { "processor_set_default", 213 }, { "processor_set_create", 214 }, { "mach_memory_object_memory_entry_64", 215 }, { "host_statistics", 216 }, { "host_request_notification", 217 }, { "host_lockgroup_info", 218 }, { "host_statistics64", 219 }, { "mach_zone_info", 220 }, { "host_create_mach_voucher", 222 }, { "host_register_mach_voucher_attr_manager", 223 }, { "host_register_well_known_mach_voucher_attr_manager", 224 }, { "host_set_atm_diagnostic_flag", 225 }, { "host_get_atm_diagnostic_flag", 226 }, { "mach_memory_info", 227 }, { "host_set_multiuser_config_flags", 228 }, { "host_get_multiuser_config_flags", 229 }, { "host_check_multiuser_mode", 230 }, { "mach_zone_info_for_zone", 231 }
#define TRACE_memory TRACE__NOP
#define __IDSTRING(name,string) static const char name[] __used = string
#define O_TRUNC_ (1 << 9)
#define __header_always_inline __header_inline __attribute__ ((__always_inline__))
#define PTRACE_POKEDATA_ 5
#define SQLITE_SOURCE_ID "2020-06-18 14:16:19 02c344aceaea0d177dd42e62c8541e3cab4a26c757ba33b3a31a43ccc7d4aapl"
#define MSG_HAVEMORE 0x2000
#define __IPV6_ADDR_SCOPE_ORGLOCAL 0x08
#define _SC_XOPEN_XCU_VERSION 121
#define _CS_POSIX_V6_LPBIG_OFFBIG_LIBS 13
#define MEMORY_OBJECT_PERFORMANCE_INFO 11
#define CPU_SUBTYPE_PENTIUM_3 CPU_SUBTYPE_INTEL(8, 0)
#define _STRUCT_IOVEC 
#define __FLT_MIN_EXP__ (-125)
#define __DARWIN_NULL ((void *)0)
#define IPCTL_ACCEPTSOURCEROUTE 13
#define SQLITE_DBCONFIG_DQS_DML 1013
#define ATOMIC_VAR_INIT(VALUE) (VALUE)
#define PTHREAD_RWLOCK_INITIALIZER {_PTHREAD_RWLOCK_SIG_init, {0}}
#define IPCTL_DEFTTL 3
#define KERN_DENIED 53
#define EBADF 9
#define IP_OPTIONS 1
#define IP_FW_ADD 40
#define __printf0like(fmtarg,firstvararg) __attribute__((__format__ (__printf0__, fmtarg, firstvararg)))
#define UPDATE_IO_STATS(info,size) { info.count++; info.size += size; }
#define VM_PROT_READ ((vm_prot_t) 0x01)
#define _SC_XBS5_LPBIG_OFFBIG 125
#define alloca(size) __alloca(size)
#define _USE_FORTIFY_LEVEL 2
#define __INT16_MAX__ 0x7fff
#define IN_CLASSC_HOST 0x000000ff
#define SQLITE_OPEN_MEMORY 0x00000080
#define CPUFAMILY_INTEL_IVYBRIDGE 0x1f65e835
#define SQLITE_MUTEX_STATIC_MASTER 2
#define _STRUCT_TIMEVAL struct timeval
#define _SYS_DIRENT_H 
#define SQLITE_STATUS_SCRATCH_USED 3
#define _STRUCT_MMST_REG struct __darwin_mmst_reg
#define strcat(dest,...) __builtin___strcat_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define AT_SYMLINK_NOFOLLOW_ 0x100
#define MCAST_LEAVE_GROUP 81
#define IP_RECVRETOPTS 6
#define SQLITE_MUTEX_STATIC_APP1 8
#define MACH_ACTIVITY_ID_COUNT_MAX 16
#define __FLT64X_HAS_QUIET_NAN__ 1
#define __INT_FAST64_TYPE__ long long int
#define SQLITE_MUTEX_STATIC_APP2 9
#define MACH_MSGH_BITS_USED 0xb01f1f1fU
#define _MACH_MACH_TRAPS_H_ 
#define PTHREAD_INHERIT_SCHED 1
#define __Request__mach_host_subsystem__defined 
#define _SC_MQ_OPEN_MAX 46
#define ENOBUFS 55
#define _ANSI_STDDEF_H 
#define IPV6CTL_TEMPPLTIME 33
#define __INT_LEAST32_MAX__ 0x7fffffff
#define host_get_filecoordinationd_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_FILECOORDINATIOND_PORT, (port)))
#define PROC_FLAG_SUPPRESSED 0x800000
#define _POSIX2_SW_DEV 200112L
#define PTHREAD_CANCEL_DISABLE 0x00
#define MAXNAMLEN __DARWIN_MAXNAMLEN
#define SQLITE_CONFIG_STMTJRNL_SPILL 26
#define __SMBF 0x0080
#define MPO_TG_BLOCK_TRACKING 0x200
#define SQLITE_CONSTRAINT_VTAB (SQLITE_CONSTRAINT | (9<<8))
#define KERN_INSUFFICIENT_BUFFER_SIZE 52
#define MACH_SEND_ALWAYS 0x00010000
#define SQLITE_CANTOPEN_FULLPATH (SQLITE_CANTOPEN | (3<<8))
#define SQLITE_FCNTL_SYNC_OMITTED 8
#define TH_SYN 0x02
#define TH_STATE_STOPPED 2
#define CPU_TYPE_MC680x0 ((cpu_type_t) 6)
#define VM_MEMORY_CORESERVICES 43
#define SO_RCVLOWAT 0x1004
#define x86_DEBUG_STATE64_COUNT ((mach_msg_type_number_t) ( sizeof (x86_debug_state64_t) / sizeof (int) ))
#define HOST_BASIC_INFO_COUNT ((mach_msg_type_number_t) (sizeof(host_basic_info_data_t)/sizeof(integer_t)))
#define OSSwapBigToHostInt16(x) OSSwapInt16(x)
#define _CS_POSIX_V6_LP64_OFF64_LDFLAGS 9
#define MIG_REMOTE_ERROR -302
#define THREAD_SCHED_RR_INFO 11
#define _XOPEN_LEGACY (-1)
#define HOST_XPC_EXCEPTION_PORT (17 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define __IPHONE_7_1 70100
#define round_page(x) trunc_page((x) + (vm_page_size - 1))
#define TF_LP64 0x00000001
#define __header_inline extern __inline __attribute__((__gnu_inline__))
#define _MACH_KMOD_H_ 
#define __LP64__ 1
#define unlikely(x) __builtin_expect((x), 0)
#define HOST_DYNAMIC_PAGER_PORT (1 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define SQLITE_IOERR_CONVPATH (SQLITE_IOERR | (26<<8))
#define SQLITE_DBSTATUS_LOOKASIDE_MISS_FULL 6
#define __deprecated_enum_msg(_msg) 
#define ENETRESET 52
#define SQLITE_TESTCTRL_PRNG_SAVE 5
#define THROUGHPUT_QOS_LAUNCH_DEFAULT_TIER THROUGHPUT_QOS_TIER_3
#define KERN_INVALID_CAPABILITY 20
#define _ENOTBLK -15
#define IPPROTO_CFTP 62
#define _ETIMEDOUT -110
#define SIGINFO 29
#define SQLITE_CONFIG_MULTITHREAD 2
#define __FLT32X_EPSILON__ 2.22044604925031308084726333618164062e-16F32x
#define OSSwapBigToHostInt32(x) OSSwapInt32(x)
#define MACH_RCV_INVALID_REPLY 0x10004012
#define ATOMIC_FLAG_INIT { 0 }
#define MACH_SEND_NOIMPORTANCE 0x00040000
#define IP_DUMMYNET_GET 64
#define MACH_MSGH_BITS_HAS_VOUCHER(bits) (MACH_MSGH_BITS_VOUCHER(bits) != MACH_MSGH_BITS_ZERO)
#define MACH_VOUCHER_NAME_NULL ((mach_voucher_name_t) 0)
#define SCHED_OTHER_ 0
#define fwopen(cookie,fn) funopen(cookie, 0, fn, 0, 0)
#define USEC_PER_SEC 1000000ull
#define __FLT64_MIN_EXP__ (-1021)
#define MEMORY_OBJECT_INFO_MAX (1024)
#define PF_UTUN AF_UTUN
#define MAC_OS_X_VERSION_10_11_2 101102
#define __SPI_AVAILABLE(...) 
#define HOST_VM_INFO64 4
#define PF_MAX AF_MAX
#define MEMORY_OBJECT_DATA_FLUSH 0x1
#define MEMORY_OBJECT_CONTROL_NULL ((memory_object_control_t) 0)
#define PROC_FLAG_ADAPTIVE 0x100000
#define CHAR_MAX SCHAR_MAX
#define BAD_MACH_TIMESPEC(t) ((t)->tv_nsec < 0 || (t)->tv_nsec >= (long)NSEC_PER_SEC)
#define __SWIFT_UNAVAILABLE_MSG(_msg) 
#define HOST_AUDIT_CONTROL_PORT (2 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define VM_MEMORY_LIBNETWORK 89
#define FPE_INTDIV 7
#define SEEK_DATA 4
#define EFL_IOPL_KERNEL 0x00000000
#define IP_RECVTOS 27
#define __LDBL_NORM_MAX__ 1.18973149535723176502126385303097021e+4932L
#define OSSwapBigToHostInt64(x) OSSwapInt64(x)
#define IPPROTO_DDP 37
#define SQLITE_FCNTL_ROLLBACK_ATOMIC_WRITE 33
#define err_none (mach_error_t)0
#define AF_COIP 20
#define THREAD_THROUGHPUT_QOS_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (thread_throughput_qos_policy_data_t) / sizeof (integer_t)))
#define VM_PAGE_QUERY_PAGE_EXTERNAL 0x80
#define i386_EXCEPTION_STATE_COUNT ((mach_msg_type_number_t) ( sizeof (i386_exception_state_t) / sizeof (int) ))
#define HOST_MIN_SPECIAL_PORT HOST_SECURITY_PORT
#define CPU_SUBTYPE_VAX8800 ((cpu_subtype_t) 11)
#define CLOCK_UPTIME_RAW _CLOCK_UPTIME_RAW
#define FULLY_WITHIN 2
#define _SC_FILE_LOCKING 69
#define PROC_FLAG_IOS_APPLICATION PROC_FLAG_APPLICATION
#define IPV6PORT_RESERVED 1024
#define TASK_DYLD_INFO_COUNT (sizeof(task_dyld_info_data_t) / sizeof(natural_t))
#define ZONE_NAME_MAX_LEN 80
#define TASK_QOS_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (struct task_qos_policy) / sizeof (integer_t)))
#define pseudo_AF_PIP 25
#define SYNC_POLICY_REVERSED 0x2
#define __REGISTER_PREFIX__ 
#define __UINT16_MAX__ 0xffff
#define IOPOL_ATIME_UPDATES_OFF 1
#define MACH_PORT_TYPE_SEND_ONCE MACH_PORT_TYPE(MACH_PORT_RIGHT_SEND_ONCE)
#define SQLITE_DETERMINISTIC 0x000000800
#define _PC_NAME_MAX 4
#define TCP6_MSS 1024
#define __FLT_IS_IEC_60559__ 2
#define _CS_XBS5_ILP32_OFFBIG_LIBS 26
#define host_set_node_port(host,port) (host_set_special_port((host), HOST_NODE_PORT, (port)))
#define _PC_MAX_CANON 2
#define PF_INET6 AF_INET6
#define _FD_SET 
#define TASK_EXC_GUARD_VM_ONCE 0x02
#define EDEVERR 83
#define host_set_fairplayd_port(host,port) (host_set_special_port((host), HOST_FAIRPLAYD_PORT, (port)))
#define PF_INET_ 2
#define IP_RECVTTL 24
#define IPPROTO_INLSP 52
#define SQLITE_FCNTL_LOCKSTATE 1
#define NDR_CHAR_EBCDIC 1
#define IPV6CTL_LOG_INTERVAL 14
#define _POSIX_V7_ILP32_OFF32 __ILP32_OFF32
#define MACH_PORT_TYPE_DNREQUEST 0x80000000
#define TCPOLEN_FASTOPEN_REQ 2
#define FIONREAD_ 0x541b
#define strcpy(dest,...) __builtin___strcpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define __AVAILABILITY_INTERNAL_DEPRECATED_MSG(_msg) __attribute__((deprecated))
#define _SC_REALTIME_SIGNALS 36
#define KEV_INET_CHANGED_ADDR 2
#define SIGEV_THREAD 3
#define MACH_MSGH_BITS_CIRCULAR 0x10000000U
#define IPV6_2292PKTINFO 19
#define _STRUCT_X86_THREAD_FULL_STATE64 struct __darwin_x86_thread_full_state64
#define BYTE_SIZE 8
#define FTS5_TOKENIZE_PREFIX 0x0002
#define CHAR_MIN SCHAR_MIN
#define __DBL_NORM_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define IN6ADDR_LOOPBACK_INIT {{{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01 }}}
#define __FLT_MANT_DIG__ 24
#define FS_SOCKRESTART_H 
#define I386_PGSHIFT 12
#define __VERSION__ "11.2.0"
#define SUID_CRED_NULL ((suid_cred_t) 0)
#define _EMULTIHOP -72
#define atomic_compare_exchange_weak_explicit(PTR,VAL,DES,SUC,FAIL) __extension__ ({ __auto_type __atomic_compare_exchange_ptr = (PTR); __typeof__ ((void)0, *__atomic_compare_exchange_ptr) __atomic_compare_exchange_tmp = (DES); __atomic_compare_exchange (__atomic_compare_exchange_ptr, (VAL), &__atomic_compare_exchange_tmp, 1, (SUC), (FAIL)); })
#define __UINT64_C(c) c ## ULL
#define _XOPEN_PATH_MAX 1024
#define _SS_MAXSIZE 128
#define _CS_DARWIN_USER_CACHE_DIR 65538
#define VM_MEMORY_COREGRAPHICS_BACKINGSTORES 57
#define ILL_ILLTRP 2
#define MACH_PORT_TYPE(right) ((mach_port_type_t)(((mach_port_type_t) 1) << ((right) + ((mach_port_right_t) 16))))
#define IPPROTO_ESP 50
#define THREAD_BACKGROUND_POLICY_DARWIN_BG 0x1000
#define MACH_VOUCHER_ATTR_IMPORTANCE_SELF ((mach_voucher_attr_recipe_command_t)200)
#define _MACH_PORT_T 
#define SQLITE_LIMIT_EXPR_DEPTH 3
#define SQLITE_OPEN_MAIN_JOURNAL 0x00000800
#define TASK_H 
#define IN_CLASSB(i) (((u_int32_t)(i) & 0xc0000000) == 0x80000000)
#define _SUSECONDS_T 
#define CPUMON_MAKE_FATAL 0x1000
#define SQLITE_MUTEX_STATIC_LRU 6
#define SQLITE_MUTEX_STATIC_MEM2 4
#define ILL_BADSTK 8
#define KEV_DL_ISSUES 24
#define NET_RT_STAT 4
#define MACH_CORE_FILEHEADER_NAMELEN 16
#define _POSIX_VERSION 200112L
#define VM_PURGABLE_ORDERING_MASK (1 << VM_PURGABLE_ORDERING_SHIFT)
#define IN6_IS_ADDR_MC_ORGLOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && (__IPV6_ADDR_MC_SCOPE(a) == __IPV6_ADDR_SCOPE_ORGLOCAL))
#define SQLITE_TESTCTRL_RESULT_INTREAL 27
#define THREAD_MACHINE_STATE_MAX THREAD_STATE_MAX
#define IPV6CTL_KEEPFAITH 13
#define VM_MEMORY_TCMALLOC 53
#define __INT_WCHAR_T_H 
#define ATOMIC_CHAR32_T_LOCK_FREE __GCC_ATOMIC_CHAR32_T_LOCK_FREE
#define sint(size) glue3(int,size,_t)
#define TASK_FLAVOR_READ 1
#define __DARWIN_ONLY_UNIX_CONFORMANCE 1
#define _UNISTD_H_ 
#define SUPERPAGE_NONE 0
#define task_MSG_COUNT 61
#define PTHREAD_PRIO_INHERIT 1
#define SS_ONSTACK_ 1
#define SQLITE_LOCK_NONE 0
#define _PC_REC_INCR_XFER_SIZE 20
#define VM_PURGABLE_BEHAVIOR_SHIFT 6
#define MACH_VOUCHER_ATTR_KEY_ALL ((mach_voucher_attr_key_t)~0)
#define SYNC_POLICY_FIXED_PRIORITY 0x1
#define CPU_SUBTYPE_MC680x0_ALL ((cpu_subtype_t) 1)
#define _CS_XBS5_LP64_OFF64_LIBS 30
#define _SC_SYMLOOP_MAX 120
#define IPPROTO_SEP 33
#define IPPROTO_AX25 93
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define CPUFAMILY_POWERPC_G4 0x77c184ae
#define CPUFAMILY_POWERPC_G5 0xed76d8aa
#define __DARWIN_1050ALIAS_I(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_64_BIT_INO_T __DARWIN_SUF_UNIX03)
#define MSG_FLUSH 0x400
#define TCP_NOPUSH 0x04
#define O_DIRECTORY_ (1 << 16)
#define EFL_ZF 0x00000040
#define _STRUCT_MCONTEXT_AVX512_64_FULL struct __darwin_mcontext_avx512_64_full
#define __FLT128_MAX_EXP__ 16384
#define ENOTDIR 20
#define err_ipc err_system(0x3)
#define PTHREAD_MUTEX_NORMAL 0
#define PF_HYLINK AF_HYLINK
#define _DARWIN_FEATURE_UNIX_CONFORMANCE 3
#define SQLITE_IOERR_UNLOCK (SQLITE_IOERR | (8<<8))
#define _FSOBJ_ID_T 
#define SOCKADDR_DATA_MAX 108
#define host_set_ktrace_background_port(host,port) (host_set_special_port((host), HOST_KTRACE_BACKGROUND_PORT, (port)))
#define PAGE_MAX_MASK (PAGE_MAX_SIZE-1)
#define THREAD_EXTENDED_POLICY 1
#define TCPOPT_TSTAMP_HDR (TCPOPT_NOP<<24|TCPOPT_NOP<<16|TCPOPT_TIMESTAMP<<8|TCPOLEN_TIMESTAMP)
#define MPO_FILTER_MSG 0x100
#define VM_REGION_EXTENDED_INFO_COUNT ((mach_msg_type_number_t) (sizeof (vm_region_extended_info_data_t) / sizeof (natural_t)))
#define SQLITE_INDEX_SCAN_UNIQUE 1
#define atomic_store(PTR,VAL) atomic_store_explicit (PTR, VAL, __ATOMIC_SEQ_CST)
#define KEV_INET_ARPRTRALIVE 10
#define DTF_REWIND 0x0004
#define _ENOTUNIQ -76
#define SQLITE_CORRUPT_VTAB (SQLITE_CORRUPT | (1<<8))
#define PF_CHAOS AF_CHAOS
#define __SLBF 0x0001
#define __TVOS_11_4 110400
#define _POSIX_STREAM_MAX 8
#define TRAP_TRACE 2
#define RENAME_SECLUDE 0x00000001
#define SO_WANTOOBFLAG 0x8000
#define __FLT32_MANT_DIG__ 24
#define IPV6_MULTICAST_HOPS 10
#define MACH_PORT_RECEIVE_STATUS_COUNT ((natural_t) (sizeof(mach_port_status_t)/sizeof(natural_t)))
#define NET_MAXID AF_MAX
#define MACH_SEND_MSG_FILTERED 0x10000017
#define __LP64_OFF64 (1)
#define VM_PROT_EXECUTE_ONLY (VM_PROT_EXECUTE|VM_PROT_STRIP_READ)
#define _STDDEF_H 
#define FPS_BUSY 0x8000
#define __WATCHOS_3_0 30000
#define RUSAGE_SELF 0
#define SIG_DFL_ 0
#define SV_NODEFER SA_NODEFER
#define VM_PAGE_INFO_BASIC 1
#define CLOCK_ALARM_CURRES 3
#define SO_KEEPALIVE_ 9
#define SQLITE_BLOB 4
#define _INTMAX_T 
#define HOST_SCHED_INFO_COUNT ((mach_msg_type_number_t) (sizeof(host_sched_info_data_t)/sizeof(integer_t)))
#define OSReadLittleInt(x,y) OSReadLittleInt32(x, y)
#define VM_MEMORY_WEBASSEMBLY VM_MEMORY_JAVASCRIPT_CORE
#define MACH_MSG_TYPE_PORT_SEND MACH_MSG_TYPE_MOVE_SEND
#define EFAULT 14
#define UND_SERVER_NULL ((UNDServerRef) 0)
#define _MACH_PORT_H_ 
#define IPPORT_RESERVED __DARWIN_IPPORT_RESERVED
#define EFL_AC 0x00040000
#define EFL_AF 0x00000010
#define MEMORY_OBJECT_DATA_SYNC 0x10
#define __I386_MCONTEXT_H_ 
#define __SRW 0x0010
#define __PTHREAD_MUTEXATTR_SIZE__ 8
#define CPU_SUBTYPE_CELERON_MOBILE CPU_SUBTYPE_INTEL(7, 7)
#define __IOS_UNAVAILABLE 
#define SQLITE_FCNTL_ZIPVFS 25
#define KEV_DL_DELMULTI 8
#define __FLT64_NORM_MAX__ 1.79769313486231570814527423731704357e+308F64
#define MACH_VOUCHER_ATTR_KEY_ATM ((mach_voucher_attr_key_t)1)
#define SQLITE_VERSION_NUMBER 3032003
#define CONNECT_RESUME_ON_READ_WRITE 0x1
#define IPV6CTL_FORWSRCRT 5
#define _CS_POSIX_V6_ILP32_OFF32_LDFLAGS 3
#define _MACH_I386_KERN_RETURN_H_ 
#define _DEV_T 
#define EFL_CF 0x00000001
#define CPU_STATE_MAX 4
#define KERN_LOCK_OWNED_SELF 41
#define CPUFAMILY_ARM_HURRICANE 0x67ceee93
#define VM_REGION_SUBMAP_SHORT_INFO_COUNT_64 ((mach_msg_type_number_t) (sizeof (vm_region_submap_short_info_data_64_t) / sizeof (natural_t)))
#define PROCESSOR_SET_BASIC_INFO_COUNT ((mach_msg_type_number_t) (sizeof(processor_set_basic_info_data_t)/sizeof(natural_t)))
#define NL_TEXTMAX 2048
#define TASK_VM_INFO_COUNT ((mach_msg_type_number_t) (sizeof (task_vm_info_data_t) / sizeof (natural_t)))
#define _PC_ASYNC_IO 17
#define _ENOPKG -65
#define SO_REUSESHAREUID 0x1025
#define __FLT128_HAS_DENORM__ 1
#define NL_MSGMAX 32767
#define EFL_DF 0x00000400
#define SQLITE_EXPERIMENTAL 
#define MMAP_PRIVATE 0x2
#define SIG_UNBLOCK 2
#define SQLITE_CONSTRAINT_FOREIGNKEY (SQLITE_CONSTRAINT | (3<<8))
#define _POSIX_RTSIG_MAX 8
#define x86_THREAD_STATE_COUNT ((mach_msg_type_number_t) ( sizeof (x86_thread_state_t) / sizeof (int) ))
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_4(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_5(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_6(x) x
#define MACH_RCV_TRAILER_CTX 4
#define AF_DLI 13
#define SM_COW 1
#define SQLITE_DBCONFIG_NO_CKPT_ON_CLOSE 1006
#define IP_MULTICAST_IFINDEX 66
#define IPPROTO_CPHB 73
#define __ORDER_PDP_ENDIAN__ 3412
#define __MigTypeCheck 1
#define _POSIX_MEMLOCK (-1)
#define _STRUCT_LAST_BRANCH_STATE struct __last_branch_state
#define str(x) _str(x)
#define SUB_MACH_TIMESPEC(t1,t2) do { if (((t1)->tv_nsec -= (t2)->tv_nsec) < 0) { (t1)->tv_nsec += (long) NSEC_PER_SEC; (t1)->tv_sec -= 1; } (t1)->tv_sec -= (t2)->tv_sec; } while (0)
#define __SWR 0x0008
#define __API_AVAILABLE_END 
#define x86_DEBUG_STATE 12
#define VM_MEMORY_ACCELERATE 75
#define MS_NOEXEC_ (1 << 3)
#define FTS5_TOKENIZE_DOCUMENT 0x0004
#define __DARWIN_UNIX03 1
#define _Null_unspecified 
#define ZOP_ALLOC 1
#define BYTE_ORDER __DARWIN_BYTE_ORDER
#define SO_ACCEPTCONN 0x0002
#define PF_ROUTE AF_ROUTE
#define __MAC_11_0 110000
#define __MAC_11_1 110100
#define __MAC_11_3 110300
#define SQLITE_TOOBIG 18
#define IN_CLASSD_NET 0xf0000000
#define __DARWIN_NO_LONG_LONG 0
#define SQLITE_READONLY_CANTINIT (SQLITE_READONLY | (5<<8))
#define UINT64_MAX 18446744073709551615ULL
#define VM_MEMORY_SWIFT_METADATA 83
#define KEV_INET_PORTINUSE 8
#define __PTHREAD_RWLOCKATTR_SIZE__ 16
#define TASK_BASIC2_INFO_32 6
#define ILL_COPROC 7
#define __PTHREAD_RWLOCK_SIZE__ 192
#define CPU_SUBTYPE_X86_64_ALL ((cpu_subtype_t)3)
#define x86_FLOAT_STATE64_COUNT ((mach_msg_type_number_t) (sizeof(x86_float_state64_t)/sizeof(unsigned int)))
#define _CT_RUNE_T 
#define MCAST_BLOCK_SOURCE 84
#define ACCESSX_MAX_TABLESIZE (16 * 1024)
#define MCAST_INCLUDE 1
#define EINVAL 22
#define _ANSI_STDARG_H_ 
#define WSTOPSIG(x) (_W_INT(x) >> 8)
#define _WSTATUS(x) (_W_INT(x) & 0177)
#define SI_TKILL_ -6
#define SQLITE_OPEN_FILEPROTECTION_COMPLETEUNLESSOPEN 0x00200000
#define CPU_SUBTYPE_MULTIPLE ((cpu_subtype_t) -1)
#define TCPOPT_MAXSEG 2
#define EXC_CRASH 10
#define GUARD_TYPE_MACH_PORT 0x1
#define __MAC_10_15_4 101504
#define RAND_MAX 0x7fffffff
#define EFL_IF 0x00000200
#define __FLT64X_HAS_INFINITY__ 1
#define IPV6CTL_MAXFRAGS 41
#define IPV6_FW_ADD 30
#define __DTF_ATEND 0x0020
#define VM_MEMORY_JAVASCRIPT_CORE 63
#define CPU_SUBTYPE_X86_ALL ((cpu_subtype_t)3)
#define SS_ONSTACK 0x0001
#define PROCESSOR_CPU_LOAD_INFO 2
#define ECANCELED 89
#define VM_PURGABLE_BEHAVIOR_LIFO (1 << VM_PURGABLE_BEHAVIOR_SHIFT)
#define TCP_FASTOPEN 0x105
#define PF_NDRV AF_NDRV
#define MEMORY_OBJECT_PERF_INFO_COUNT ((mach_msg_type_number_t) (sizeof(memory_object_perf_info_data_t)/sizeof(int)))
#define __need___va_list 
#define TASK_INSPECT_PORT 5
#define MACH_PORT_RIGHT_PORT_SET ((mach_port_right_t) 3)
#define x86_EXCEPTION_STATE32_COUNT ((mach_msg_type_number_t) ( sizeof (x86_exception_state32_t) / sizeof (int) ))
#define __SIZE_TYPE__ long unsigned int
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_1(x) 
#define __UINT64_MAX__ 0xffffffffffffffffULL
#define EXC_I386_INTO 2
#define TCP_MAXSEG 0x02
#define SQLITE_TRANSIENT ((sqlite3_destructor_type)-1)
#define TASK_EXC_GUARD_MP_ONCE 0x20
#define IN_CLASSA(i) (((u_int32_t)(i) & 0x80000000) == 0)
#define IN_CLASSC(i) (((u_int32_t)(i) & 0xe0000000) == 0xc0000000)
#define IN_CLASSD(i) (((u_int32_t)(i) & 0xf0000000) == 0xe0000000)
#define UTIL_TIMER_H 
#define INADDR_ALLHOSTS_GROUP (u_int32_t)0xe0000001
#define __GNUC_WIDE_EXECUTION_CHARSET_NAME "UTF-32LE"
#define _SQLITE3RTREE_H_ 
#define CPU_SUBTYPE_POWERPC_ALL ((cpu_subtype_t) 0)
#define VM_MEMORY_SKYWALK 87
#define AF_INET 2
#define PTHREAD_PRIO_PROTECT 2
#define VM_PURGABLE_STATE_MASK 3
#define IPV6_BINDV6ONLY IPV6_V6ONLY
#define IP_DONTFRAG 28
#define thread_get_kernel_port(thread,port) (thread_get_special_port((thread), THREAD_KERNEL_PORT, (port)))
#define MACH_PORT_RIGHT_LABELH ((mach_port_right_t) 5)
#define _mach_host_user_ 
#define FPS_TOS_SHIFT 11
#define _CS_XBS5_LP64_OFF64_LINTFLAGS 31
#define SQLITE_SCANSTAT_SELECTID 5
#define _SC_PRIORITIZED_IO 34
#define __DARWIN_NOCANCEL(sym) __asm("_" __STRING(sym) __DARWIN_SUF_NON_CANCELABLE)
#define SQLITE_FCNTL_WIN32_GET_HANDLE 29
#define array_size(arr) (sizeof(arr)/sizeof((arr)[0]))
#define MPG_FLAGS_STRICT_REPLY_NO_BANK_ATTR (0x08ull << 56)
#define SQLITE_TRACE_CLOSE 0x08
#define CLOCK_THREAD_CPUTIME_ID _CLOCK_THREAD_CPUTIME_ID
#define _MACH_ERROR_H_ 
#define TCPOLEN_TSTAMP_APPA (TCPOLEN_TIMESTAMP+2)
#define _SC_V6_ILP32_OFFBIG 104
#define _SC_TRACE_LOG 100
#define SO_NOADDRERR 0x1023
#define _EPIPE -32
#define EFL_NT 0x00004000
#define MACH_PORT_RIGHT_DEAD_NAME ((mach_port_right_t) 4)
#define VM_MEMORY_OS_ALLOC_ONCE 73
#define _SYS_SOCKET_H_ 
#define CPUSUBFAMILY_ARM_M 3
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_1(x) 
#define TCPOLEN_TIMESTAMP 10
#define __API_AVAILABLE_BEGIN_GET_MACRO(...) 
#define THR_ACT_NULL ((thread_act_t) 0)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_2(x) 
#define EFL_OF 0x00000800
#define err_ipc_compat err_system(0x3f)
#define MPG_FLAGS_STRICT_REPLY_MISMATCHED_PERSONA (0x10ull << 56)
#define IPC_SPACE_NULL ((ipc_space_t) 0)
#define _RUNE_T 
#define __APPLE_API_STANDARD 
#define MPO_DENAP_RECEIVER 0x40
#define mach_port_MSG_COUNT 40
#define IOV_MAX 1024
#define MEMORY_OBJECT_COPY_SYNC 0x8
#define SQLITE_TESTCTRL_INTERNAL_FUNCTIONS 17
#define EFL_IOPL_USER 0x00003000
#define PROC_FLAG_IMPORTANCE_DONOR 0x400000
#define EFL_PF 0x00000004
#define _lock_set_user_ 
#define __RequestUnion__host_security_subsystem__defined 
#define KERN_DATA_SELECTOR 0x0010
#define __LDBL_EPSILON__ 1.08420217248550443400745280086994171e-19L
#define INTPTR_MAX 9223372036854775807L
#define __UINTMAX_C(c) c ## UL
#define MACH_MSG_DESCRIPTOR_NULL (mach_msg_descriptor_t *) 0
#define minor(x) ((int32_t)((x) & 0xffffff))
#define IP_DROP_MEMBERSHIP 13
#define host_get_automountd_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_AUTOMOUNTD_PORT, (port)))
#define PTHREAD_STACK_MIN 8192
#define IN6_IS_ADDR_V4MAPPED(a) ((*(const __uint32_t *)(const void *)(&(a)->s6_addr[0]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[4]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[8]) == ntohl(0x0000ffff)))
#define __SSE_MATH__ 1
#define _V6_LPBIG_OFFBIG __LPBIG_OFFBIG
#define EFL_RF 0x00010000
#define ru_last ru_nivcsw
#define SQLITE_OPEN_FILEPROTECTION_NONE 0x00400000
#define __k8 1
#define __WATCHOS_DEPRECATED(_start,_dep,_msg) 
#define CLOCK_MONOTONIC_RAW_APPROX _CLOCK_MONOTONIC_RAW_APPROX
#define CPU_SUBTYPE_PENTIUM_3_XEON CPU_SUBTYPE_INTEL(8, 2)
#define VM_MEMORY_DYLIB 33
#define EFL_SF 0x00000080
#define _SC_PRIORITY_SCHEDULING 35
#define __API_TO_BE_DEPRECATED 100000
#define KEV_DL_IF_ATTACHED 9
#define host_set_atm_notification_port(host,port) (host_set_special_port((host), HOST_ATM_NOTIFICATION_PORT, (port)))
#define task_get_host_port(task,port) (task_get_special_port((task), TASK_HOST_PORT, (port)))
#define EMU_H 
#define AF_OPS (1 << 3)
#define SIGCONT 19
#define VM_MEMORY_APPLICATION_SPECIFIC_16 255
#define THREAD_FLAVOR_INSPECT 2
#define MPO_IMPORTANCE_RECEIVER 0x08
#define EFL_TF 0x00000100
#define MATTR_VAL_ON 1
#define VM_MEMORY_ASL 81
#define atomic_init(PTR,VAL) atomic_store_explicit (PTR, VAL, __ATOMIC_RELAXED)
#define _EBUSY -16
#define INT_LEAST64_MAX INT64_MAX
#define __WATCHOS_3_1_1 30101
#define TCP_NOOPT 0x08
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define HOST_PRIORITY_INFO_COUNT ((mach_msg_type_number_t) (sizeof(host_priority_info_data_t)/sizeof(integer_t)))
#define MACH_MSG_VM_KERNEL 0x00000400
#define X86_DEBUG_STATE64_COUNT x86_DEBUG_STATE64_COUNT
#define VM_MEMORY_ATS 50
#define SQLITE_FCNTL_SET_LOCKPROXYFILE 3
#define SQLITE_ABORT_ROLLBACK (SQLITE_ABORT | (2<<8))
#define IP_OLD_FW_DEL 51
#define CONNECT_DATA_IDEMPOTENT 0x2
#define _W_INT(w) (*(int *)&(w))
#define IPV6_MIN_MEMBERSHIPS 31
#define _MACH_I386_RPC_H_ 
#define OSWriteBigInt(x,y,z) OSWriteBigInt32(x, y, z)
#define EFL_VM 0x00020000
#define _ID_T 
#define TASK_POLICY_STATE 4
#define IPPORT_USERRESERVED 5000
#define PARTLY_WITHIN 1
#define AF_OSI AF_ISO
#define EPWROFF 82
#define VM_MEMORY_MALLOC_LARGE 3
#define SQLITE_LOCKED_SHAREDCACHE (SQLITE_LOCKED | (1<<8))
#define CMSG_NEXT_(cmsg) ((uint8_t *)(cmsg) + CMSG_LEN_(cmsg))
#define IN_CLASSA_MAX 128
#define MPG_FLAGS_NONE (0x00ull)
#define IN_PRIVATE(i) ((((u_int32_t)(i) & 0xff000000) == 0x0a000000) || (((u_int32_t)(i) & 0xfff00000) == 0xac100000) || (((u_int32_t)(i) & 0xffff0000) == 0xc0a80000))
#define AF_IPX 23
#define TCP_CONNECTION_INFO 0x106
#define THREAD_PRECEDENCE_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (thread_precedence_policy_data_t) / sizeof (integer_t)))
#define SQLITE_MUTEX_STATIC_VFS1 11
#define IPPROTO_VINES 83
#define EXC_I386_SEGNPFLT 11
#define LATENCY_QOS_LAUNCH_DEFAULT_TIER LATENCY_QOS_TIER_3
#define IP_OLD_FW_FLUSH 52
#define SQLITE_READONLY 8
#define INTPTR_MIN (-INTPTR_MAX-1)
#define TCPOPT_CC_HDR(ccopt) (TCPOPT_NOP<<24|TCPOPT_NOP<<16|(ccopt)<<8|TCPOLEN_CC)
#define FP_CHOP 3
#define SO_REUSEADDR_ 2
#define MACH_MSGH_BITS_HAS_LOCAL(bits) (MACH_MSGH_BITS_LOCAL(bits) != MACH_MSGH_BITS_ZERO)
#define IP_PORTRANGE_HIGH 1
#define SQLITE_STATIC ((sqlite3_destructor_type)0)
#define _WRITE_OK (1<<10)
#define SQLITE_CANTOPEN_ISDIR (SQLITE_CANTOPEN | (2<<8))
#define _SC_DELAYTIMER_MAX 45
#define _SCHED_H_ 
#define _IONBF 2
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_3(x) 
#define TRAP_BRKPT 1
#define _EISDIR -21
#define F80_INF ((float80) {.signif = 0x8000000000000000, .exp = 0x7fff, .sign = 0})
#define KEV_INET6_NEW_LL_ADDR 4
#define LIST_INITIALIZER(x) {.prev = &x, .next = &x}
#define __nullable 
#define _POSIX_ASYNCHRONOUS_IO (-1)
#define __FLT64_IS_IEC_60559__ 2
#define ZOP_FREE 0
#define _MACH_MIG_H_ 
#define __FLT32X_MIN_EXP__ (-1021)
#define MACH_CORE_FILEHEADER_MAXFILES 16
#define MACH_SEND_INVALID_VOUCHER 0x10000005
#define _SC_SAVED_IDS 7
#define DEBUG_verbose DEBUG_all
#define IPV6CTL_USE_DEFAULTZONE 39
#define SQLITE_TESTCTRL_OPTIMIZATIONS 15
#define _MACH_MACHINE_EXCEPTION_H_ 
#define _MACH_MESSAGE_H_ 
#define MACH_SEND_INVALID_HEADER 0x10000010
#define SQLITE_SET_LOCKPROXYFILE SQLITE_FCNTL_SET_LOCKPROXYFILE
#define __INT_FAST16_MAX__ 0x7fff
#define HOST_VM_INFO_REV0_COUNT ((mach_msg_type_number_t) (HOST_VM_INFO_REV1_COUNT - 2))
#define VM_BEHAVIOR_DEFAULT ((vm_behavior_t) 0)
#define MSG_OOB 0x1
#define VM_SYNC_KILLPAGES ((vm_sync_t) 0x08)
#define CPU_STATE_USER 0
#define _CS_XBS5_ILP32_OFF32_LINTFLAGS 23
#define __RequestUnion__vm_map_subsystem__defined 
#define VM_PURGABLE_NONVOLATILE 0
#define IPV6CTL_SENDREDIRECTS 2
#define major(x) ((int32_t)(((u_int32_t)(x) >> 24) & 0xff))
#define PAGE_SHIFT vm_page_shift
#define CPU_SUBTYPE_486SX CPU_SUBTYPE_INTEL(4, 8)
#define IPPROTO_IGRP 88
#define SQLITE_IOERR_SHMLOCK (SQLITE_IOERR | (20<<8))
#define _PC_CASE_PRESERVING 12
#define SO_NOTIFYCONFLICT 0x1026
#define __FLT64_DIG__ 15
#define EROFS 30
#define MACH_MSG_TYPE_LAST 22
#define _POSIX2_LINE_MAX 2048
#define MAC_OS_X_VERSION_10_10 101000
#define MAC_OS_X_VERSION_10_11 101100
#define MAC_OS_X_VERSION_10_12 101200
#define MAC_OS_X_VERSION_10_13 101300
#define MAC_OS_X_VERSION_10_14 101400
#define MAC_OS_X_VERSION_10_15 101500
#define __SYS_APPLEAPIOPTS_H__ 
#define BADSIG SIG_ERR
#define _SC_SEMAPHORES 37
#define TASK_POWER_INFO_COUNT ((mach_msg_type_number_t) (sizeof (task_power_info_data_t) / sizeof (natural_t)))
#define CPU_SUBTYPE_MIPS_R3000a ((cpu_subtype_t) 6)
#define _MACH_MACHINE_KERN_RETURN_H_ 
#define UINTMAX_MAX UINTMAX_C(18446744073709551615)
#define IPV6_RECVTCLASS 35
#define INT32_C(v) (v)
#define _MACH_VOUCHER_TYPES_H_ 
#define IPC_EVENTLINK_NULL ((ipc_eventlink_t) 0)
#define MACH_PORT_GEN(name) (((name) & 0xff) << 24)
#define __SEOF 0x0020
#define MSG_DONTWAIT_ 0x40
#define __LONG_MAX__ 0x7fffffffffffffffL
#define __IOS_EXTENSION_UNAVAILABLE(_msg) 
#define __WCHAR_T__ 
#define VM_MEMORY_COREUIFILE 77
#define IPPROTO_SWIPE 53
#define _EREMOTE -66
#define CPUSUBFAMILY_UNKNOWN 0
#define VM_MEMORY_CM_READCACHE 95
#define CPU_TYPE_SPARC ((cpu_type_t) 14)
#define _CS_POSIX_V6_LP64_OFF64_CFLAGS 8
#define __GNUC_EXECUTION_CHARSET_NAME "UTF-8"
#define __DARWIN_EXTSN_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_EXTSN __DARWIN_SUF_NON_CANCELABLE)
#define _POSIX_TIMERS (-1)
#define MAC_OS_X_VERSION_10_0 1000
#define MAC_OS_X_VERSION_10_1 1010
#define time_value_add(result,addend) { (result)->microseconds += (addend)->microseconds; (result)->seconds += (addend)->seconds; if ((result)->microseconds >= TIME_MICROS_MAX) { (result)->microseconds -= TIME_MICROS_MAX; (result)->seconds++; } }
#define MACH_MSG_OOL_DESCRIPTOR 1
#define MAC_OS_X_VERSION_10_4 1040
#define MAC_OS_X_VERSION_10_5 1050
#define MAC_OS_X_VERSION_10_6 1060
#define MAC_OS_X_VERSION_10_7 1070
#define MAC_OS_X_VERSION_10_8 1080
#define MAC_OS_X_VERSION_10_9 1090
#define L_INCR SEEK_CUR
#define task_set_task_debug_control_port(task,port) (task_set_special_port((task), TASK_DEBUG_CONTROL_PORT, (port)))
#define MACH_NOTIFY_SEND_POSSIBLE (MACH_NOTIFY_FIRST + 002)
#define MCAST_UNBLOCK_SOURCE 85
#define SOL_SOCKET 0xffff
#define MCAST_UNDEFINED 0
#define IPV6CTL_NEIGHBORGCTHRESH 46
#define __kpi_deprecated(_msg) 
#define err_kern err_system(0x0)
#define SQLITE_NOTICE_RECOVER_ROLLBACK (SQLITE_NOTICE | (2<<8))
#define _KEY_T 
#define EBADEXEC 85
#define SQLITE_IOERR_CLOSE (SQLITE_IOERR | (16<<8))
#define MACH_SEND_TOO_LARGE 0x1000000e
#define IOPOL_VFS_TRIGGER_RESOLVE_DEFAULT 0
#define VM_MEMORY_OPENCL 67
#define WIFSTOPPED(x) (_WSTATUS(x) == _WSTOPPED && WSTOPSIG(x) != 0x13)
#define TASK_ABSOLUTETIME_INFO_COUNT ((mach_msg_type_number_t) (sizeof (task_absolutetime_info_data_t) / sizeof (natural_t)))
#define MACH_RCV_TRAILER_AUDIT 3
#define _POSIX_RAW_SOCKETS (-1)
#define HOST_SECURITY_NULL ((host_security_t) 0)
#define _SS_ALIGNSIZE (sizeof(__int64_t))
#define CPU_SUBTYPE_ITANIUM_2 CPU_SUBTYPE_INTEL(11, 1)
#define UTIL_SYNC_H 
#define x86_AVX_STATE32 16
#define MACH_SEND_IMPORTANCE 0x00080000
#define __FXSR__ 1
#define _EINTR -4
#define IP_RECVIF 20
#define EXPR_NEST_MAX 32
#define SI_MESGQ 0x10005
#define SIGFPE_ 8
#define _VA_LIST_DEFINED 
#define _EHOSTUNREACH -113
#define __WATCHOS_7_0 70000
#define __WATCHOS_7_1 70100
#define __WATCHOS_7_2 70200
#define __WATCHOS_7_3 70300
#define __WATCHOS_7_4 70400
#define KERN_INVALID_VALUE 18
#define __SEG_FS 1
#define __INT_LEAST16_MAX__ 0x7fff
#define MACH_SEND_SYNC_OVERRIDE 0x00100000
#define _SC_CLK_TCK 3
#define SQLITE_CONFIG_PCACHE_HDRSZ 24
#define container_of(ptr,type,member) ((type *) ((char *) (ptr) - offsetof(type, member)))
#define pthread_cleanup_pop(execute) __self->__cleanup_stack = __handler.__next; if (execute) (__handler.__routine)(__handler.__arg); }
#define PTR_ERR(ptr) (intptr_t) (ptr)
#define SQLITE_CHECKPOINT_RESTART 2
#define KERNEL_BOOT_INFO_MAX (4096)
#define trylock(lock) trylock(lock, __FILE__, __LINE__)
#define __INT64_MAX__ 0x7fffffffffffffffLL
#define _DARWIN_FEATURE_ONLY_UNIX_CONFORMANCE 1
#define SQLITE_SCHEMA 17
#define SQLITE_DBSTATUS_CACHE_USED 1
#define __SEG_GS 1
#define TASK_TRACE_MEMORY_INFO 24
#define __FLT32_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F32
#define PTRACE_TRACEME_ 0
#define MACH_SEND_INVALID_DEST 0x10000003
#define VM_INHERIT_LAST_VALID VM_INHERIT_NONE
#define __SIG_ATOMIC_WIDTH__ 32
#define _POSIX2_PBS_TRACK (-1)
#define _SC_THREAD_KEYS_MAX 86
#define x86_AVX_STATE64 (x86_AVX_STATE32 + 1)
#define __INT_LEAST64_TYPE__ long long int
#define IOPOL_NORMAL IOPOL_IMPORTANT
#define INT64_MAX 9223372036854775807LL
#define SIGCHLD 20
#define MACH_VOUCHER_ATTR_USER_DATA_STORE ((mach_voucher_attr_recipe_command_t)211)
#define __APPLE_API_OBSOLETE 
#define __INT16_TYPE__ short int
#define IPV6_BOUND_IF 125
#define __MACH30__ 
#define AF_LAT 14
#define VM_MEMORY_STACK 30
#define VM_MEMORY_ROSETTA_USER_LDT 235
#define SQLITE_CONFIG_LOG 16
#define MACH_PORT_SRIGHTS_NONE 0
#define SQLITE_FCNTL_SIZE_HINT 5
#define __TVOS_13_0 130000
#define _WEXT_OK (1<<18)
#define DT_UNKNOWN 0
#define _I386_EFLAGS_H_ 
#define _MACH_DEBUG_MACH_DEBUG_TYPES_H_ 
#define _MACHTYPES_H_ 
#define MACH_VOUCHER_IMPORTANCE_ATTR_DROP_EXTERNAL 2
#define KERN_FAILURE 5
#define __CAST_AWAY_QUALIFIER(variable,qualifier,type) (type) (long)(variable)
#define TH_FIN 0x01
#define IPPROTO_IDRP 45
#define VM_PURGABLE_ORDERING_OBSOLETE (1 << VM_PURGABLE_ORDERING_SHIFT)
#define MACH_PORT_VALID(name) (((name) != MACH_PORT_NULL) && ((name) != MACH_PORT_DEAD))
#define CPU_SUBTYPE_VAX730 ((cpu_subtype_t) 4)
#define DEFAULT_CHANNEL verbose
#define __FLT128_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define __INTPTR_MAX__ 0x7fffffffffffffffL
#define MACH_MSGH_BITS_VOUCHER(bits) (((bits) & MACH_MSGH_BITS_VOUCHER_MASK) >> 16)
#define VM_MEMORY_CM_REGWARP 101
#define KEV_DL_RRC_STATE_CHANGED 28
#define host_get_launchctl_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_LAUNCHCTL_PORT, (port)))
#define EXC_I386_SSEEXTERR 8
#define VM_VOLATILE_GROUP_DEFAULT VM_VOLATILE_GROUP_0
#define _STRUCT_X86_DEBUG_STATE64 struct __darwin_x86_debug_state64
#define host_get_host_priv_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_PRIV_PORT, (port)))
#define MEMORY_OBJECT_DATA_FLUSH_ALL 0x40
#define CPU_SUBTYPE_LITTLE_ENDIAN ((cpu_subtype_t) 0)
#define KERN_INVALID_POLICY 28
#define SQLITE_CONFIG_PMASZ 25
#define EIDRM 90
#define SIGSYS 12
#define _SQLITE3_H_ 
#define _POSIX2_PBS_CHECKPOINT (-1)
#define MSG_RCVMORE 0x4000
#define __SIZEOF_SHORT__ 2
#define BYTES_ROUND_DOWN(bytes) (PAGE(bytes) << PAGE_BITS)
#define _POSIX2_PBS (-1)
#define ntohl(x) __DARWIN_OSSwapInt32(x)
#define THREAD_STATE_FLAVOR_LIST_10_13 130
#define SA_NOCLDSTOP 0x0008
#define _XOPEN_IOV_MAX 16
#define __swift_compiler_version_at_least(...) 1
#define _SC_IPV6 118
#define HOST_RESOURCE_SIZES_COUNT ((mach_msg_type_number_t) (sizeof(kernel_resource_sizes_data_t)/sizeof(integer_t)))
#define _MALLOC_UNDERSCORE_MALLOC_H_ 
#define MACH_VOUCHER_NULL ((mach_voucher_t) 0)
#define __DARWIN_LITTLE_ENDIAN 1234
#define MACH_PORT_RECEIVE_STATUS 2
#define VM_FLAGS_4GB_CHUNK 0x0004
#define __SWIFT_UNAVAILABLE 
#define EXC_RESOURCE 11
#define THREAD_SCHED_TIMESHARE_INFO 10
#define IPV6_FW_ZERO 33
#define KERN_RETURN_MAX 0x100
#define host_get_audit_control_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_AUDIT_CONTROL_PORT, (port)))
#define FPE_FLTINV 5
#define pseudo_AF_XTP 19
#define __LITTLE_ENDIAN__ 1
#define VM_PAGE_QUERY_PAGE_CS_TAINTED 0x200
#define IPPROTO_SRPC 90
#define MACH_IPC_FLAVOR UNTYPED
#define MACH_MSG_TYPE_PORT_ANY_SEND(x) (((x) >= MACH_MSG_TYPE_MOVE_SEND) && ((x) <= MACH_MSG_TYPE_MAKE_SEND_ONCE))
#define TASK_EXC_GUARD_MP_CORPSE 0x40
#define __DARWIN_WCHAR_MAX __WCHAR_MAX__
#define WIFSIGNALED(x) (_WSTATUS(x) != _WSTOPPED && _WSTATUS(x) != 0)
#define list_for_each_entry_safe(list,item,tmp,member) for (item = list_first_entry(list, typeof(*(item)), member), tmp = list_next_entry(item, member); &item->member != (list); item = tmp, tmp = list_next_entry(item, member))
#define TASK_BASIC_INFO_64 5
#define CPU_SUBTYPE_ARM64_PTR_AUTH_VERSION(x) (((x) & CPU_SUBTYPE_ARM64_PTR_AUTH_MASK) >> 24)
#define IPPROTO_NSP 31
#define _MACH_HOST_SPECIAL_PORTS_H_ 
#define _BSD_MACHINE_ENDIAN_H_ 
#define __FLT32_MIN_10_EXP__ (-37)
#define VM_LIB64_SHR_TEXT ((user_addr_t) 0x00007FFF80000000ULL)
#define ntohs(x) __DARWIN_OSSwapInt16(x)
#define __GNUC_MINOR__ 2
#define SQLITE_LIMIT_LENGTH 0
#define MATTR_MIGRATE 2
#define _ECONNRESET -104
#define __FLT32X_DIG__ 15
#define HOST_PREFERRED_USER_ARCH 12
#define IPPROTO_SCCSP 96
#define CPU_SUBTYPE_VAX785 ((cpu_subtype_t) 2)
#define SQLITE_SAVEPOINT 32
#define NTOHL(x) (x) = ntohl((__uint32_t)x)
#define atomic_thread_fence(MO) __atomic_thread_fence (MO)
#define NTOHS(x) (x) = ntohs((__uint16_t)x)
#define __WORDSIZE 64
#define __IPHONE_8_0 80000
#define __IPHONE_8_1 80100
#define __IPHONE_8_3 80300
#define __IPHONE_8_4 80400
#define INT64_MIN (-INT64_MAX-1)
#define _ETOOMANYREFS -109
#define BITS_H 
#define _PC_REC_MIN_XFER_SIZE 22
#define _SC_TYPED_MEMORY_OBJECTS 102
#define _PTHREAD_MUTEX_SIG_init 0x32AAABA7
#define _MACH_I386_EXCEPTION_H_ 
#define __INT_FAST16_WIDTH__ 16
#define MPG_FLAGS_STRICT_REPLY_MASK (0xffull << 56)
#define CLD_STOPPED 5
#define __DBL_HAS_QUIET_NAN__ 1
#define __FLT64X_MAX__ 1.18973149535723176502126385303097021e+4932F64x
#define FPC_IC_AFF 0x1000
#define CPU_SUBTYPE_PENTII_M5 CPU_SUBTYPE_INTEL(6, 5)
#define OSReadLittleInt64(base,byteOffset) _OSReadInt64(base, byteOffset)
#define FP_FXSR 4
#define MACH_PORT_QLIMIT_BASIC (5)
#define SO_RCVTIMEO 0x1006
#define THREAD_EXTENDED_INFO 5
#define VM_PROT_EXECUTE ((vm_prot_t) 0x04)
#define AF_VSOCK 40
#define SIGALRM_ 14
#define list_entry(item,type,member) container_of(item, type, member)
#define __code_model_small__ 1
#define _SC_AIO_LISTIO_MAX 42
#define MAC_OS_X_VERSION_10_12_1 101201
#define MAC_OS_X_VERSION_10_12_2 101202
#define SIGSTKFLT_ 16
#define MAC_OS_X_VERSION_10_12_4 101204
#define SIGPIPE_ 13
#define host_get_amfid_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_AMFID_PORT, (port)))
#define MACH_VOUCHER_ATTR_VALUE_FLAGS_PERSIST ((mach_voucher_attr_value_flags_t)1)
#define SQLITE_FCNTL_RBU 26
#define OSWriteLittleInt(x,y,z) OSWriteLittleInt32(x, y, z)
#define __DARWIN_WCHAR_MIN (-0x7fffffff - 1)
#define ESOCKTNOSUPPORT 44
#define __INTPTR_TYPE__ long int
#define __API_DEPRECATED_REP_GET_MACRO(...) 
#define CPUFAMILY_ARM_TWISTER 0x92fb37c8
#define host_get_syspolicyd_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_SYSPOLICYD_PORT, (port)))
#define SOCK_NONBLOCK_ 0x800
#define __SIZEOF_FLOAT__ 4
#define _SC_XOPEN_ENH_I18N 109
#define host_get_coalition_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_COALITION_PORT, (port)))
#define _POSIX_TRACE_NAME_MAX 8
#define __API_UNAVAILABLE_END 
#define VM_REGION_SUBMAP_INFO_COUNT ((mach_msg_type_number_t) (sizeof(vm_region_submap_info_data_t) / sizeof(natural_t)))
#define CPU_SUBTYPE_VAX750 ((cpu_subtype_t) 3)
#define IPV6_V6ONLY 27
#define __PTHREAD_CONDATTR_SIZE__ 8
#define SQLITE_TRACE_PROFILE 0x02
#define KERN_INVALID_OBJECT 29
#define MACH_MSGH_BITS_COMPLEX 0x80000000U
#define TIME_ABSOLUTE 0x00
#define IPPROTO_GGP 3
#define VM_LEDGER_TAG_NONE 0x00000000
#define HOST_SCHED_INFO 3
#define _SECURE__STRINGS_H_ 
#define MACH_EXCEPTION_CODES 0x80000000
#define FP_RND_DOWN 1
#define PROCESSOR_CPU_LOAD_INFO_COUNT ((mach_msg_type_number_t) (sizeof(processor_cpu_load_info_data_t)/sizeof(natural_t)))
#define MACH_VOUCHER_ATTR_REDEEM ((mach_voucher_attr_recipe_command_t)10)
#define PROCESSOR_SET_INFO_MAX (1024)
#define MACH_MSGH_KIND_NOTIFICATION 0x00000001
#define __FLT32_DECIMAL_DIG__ 9
#define EDESTADDRREQ 39
#define SQLITE_FAIL 3
#define TCPOLEN_MAXSEG 4
#define bitfield unsigned int
#define SQLITE_DBCONFIG_ENABLE_FKEY 1002
#define HOST_FAIRPLAYD_PORT (24 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define MACH_RCV_INTERRUPTED 0x10004005
#define SQLITE_BUSY_SNAPSHOT (SQLITE_BUSY | (2<<8))
#define IP_MULTICAST_LOOP 11
#define SQLITE_UTF16_ALIGNED 8
#define __TVOS_DEPRECATED(_start,_dep,_msg) 
#define KEV_INET6_DEFROUTER 6
#define _WCHAR_T_DECLARED 
#define x86_AVX512_STATE32_COUNT ((mach_msg_type_number_t) (sizeof(x86_avx512_state32_t)/sizeof(unsigned int)))
#define RLIMIT_MEMLOCK 6
#define thread_set_kernel_port(thread,port) (thread_set_special_port((thread), THREAD_KERNEL_PORT, (port)))
#define VM_BEHAVIOR_RSEQNTL ((vm_behavior_t) 3)
#define MACH_MSG_GUARDED_PORT_DESCRIPTOR 4
#define INADDR_NONE 0xffffffff
#define _SC_2_PBS 59
#define PF_PIP pseudo_AF_PIP
#define FTS5_TOKENIZE_AUX 0x0008
#define IP_OLD_FW_ZERO 53
#define KERN_INVALID_SECURITY 35
#define IP_PORTRANGE 19
#define _CADDR_T 
#define __MACH__ 1
#define __amd64__ 1
#define SCM_CREDS 0x03
#define VM_REGION_SUBMAP_INFO_V1_COUNT_64 ((mach_msg_type_number_t) (VM_REGION_SUBMAP_INFO_V1_SIZE / sizeof (natural_t)))
#define task_set_kernel_port(task,port) (task_set_special_port((task), TASK_KERNEL_PORT, (port)))
#define IP_RECVTOS_ 13
#define _UINT16_T 
#define IPPROTO_FRAGMENT 44
#define __LPBIG_OFFBIG (1)
#define MIG_SERVER_DIED -308
#define SQLITE_ROLLBACK 1
#define AF_NETBIOS 33
#define LSEEK_CUR 1
#define UINT_MAX (INT_MAX * 2U + 1U)
#define CPU_SUBTYPE_MC98000_ALL ((cpu_subtype_t) 0)
#define _U_INT 
#define OSSwapHostToBigConstInt16(x) OSSwapConstInt16(x)
#define MEMORY_OBJECT_RETURN_DIRTY 1
#define TCP_MAXHLEN (0xf<<2)
#define IPV6_MAX_MEMBERSHIPS 4095
#define MACH_VOUCHER_ATTR_REMOVE ((mach_voucher_attr_recipe_command_t)2)
#define CPUFAMILY_INTEL_COMETLAKE 0x1cf8a03e
#define IPPROTO_MICP 95
#define _IOLBF 1
#define ___POSIX_C_DEPRECATED_STARTING_199506L 
#define VM_FLAGS_SUPERPAGE_SIZE_ANY (SUPERPAGE_SIZE_ANY << VM_FLAGS_SUPERPAGE_SHIFT)
#define __FLT_MAX_EXP__ 128
#define CPUFAMILY_INTEL_KABYLAKE 0x0f817246
#define MAP_MEM_FLAGS_ALL ( MAP_MEM_FLAGS_USER)
#define IPPROTO_IPCV 71
#define OSSwapHostToLittleInt16(x) ((uint16_t)(x))
#define _PTHREAD_MUTEXATTR_T 
#define TASK_SCHED_INFO 14
#define _MACH_KERN_RETURN_H_ 
#define MACH_MSGH_BITS_HOLDS_IMPORTANCE_ASSERTION(bits) (((bits) & MACH_MSGH_BITS_IMPHOLDASRT) != MACH_MSGH_BITS_ZERO)
#define __swift_unavailable(_msg) 
#define POLICY_FIFO_LIMIT_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_fifo_limit)/sizeof(integer_t)))
#define _SC_THREAD_PRIORITY_SCHEDULING 89
#define SQLITE_DBCONFIG_WRITABLE_SCHEMA 1011
#define SIGIOT_ 6
#define _MACH_MACHINE_VM_PARAM_H_ 
#define _RSIZE_T 
#define _POSIX2_EXPR_NEST_MAX 32
#define _POSIX_REALTIME_SIGNALS (-1)
#define _POSIX_V6_LP64_OFF64 __LP64_OFF64
#define SQLITE_DBSTATUS_LOOKASIDE_HIT 4
#define __LASTBRANCH_MAX 32
#define __SIZEOF_FLOAT128__ 16
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffLL
#define _STRUCT_X86_EXCEPTION_STATE32 struct __darwin_i386_exception_state
#define PTHREAD_MUTEX_ERRORCHECK 1
#define VM_LEDGER_TAG_DEFAULT 0x00000001
#define MAP_MEM_POSTED_REORDERED 8
#define UINT_FAST64_MAX UINT64_MAX
#define _POSIX_SEM_VALUE_MAX 32767
#define OSSwapHostToLittleInt32(x) ((uint32_t)(x))
#define MACH_RCV_MSG 0x00000002
#define host_set_gssd_port(host,port) (host_set_special_port((host), HOST_GSSD_PORT, (port)))
#define HTONLL(x) (x) = htonll((__uint64_t)x)
#define MACH_RCV_INVALID_NOTIFY 0x10004007
#define __APPLE_API_EVOLVING 
#define _POSIX_CLOCKRES_MIN 20000000
#define __SSE__ 1
#define _XBS5_ILP32_OFFBIG __ILP32_OFFBIG
#define IPPROTO_GRE 47
#define MACH_SEND_SYNC_USE_THRPRI MACH_SEND_PROPAGATE_QOS
#define PF_ISO AF_ISO
#define KERN_RPC_SERVER_TERMINATED 43
#define VM_PROT_IS_MASK ((vm_prot_t) 0x40)
#define _MACH_ERROR_ 1
#define _CS_XBS5_ILP32_OFFBIG_LINTFLAGS 27
#define _VM_PAGE_SIZE_H_ 
#define MMAP_SHARED 0x1
#define CPU_TYPE_ARM64 (CPU_TYPE_ARM | CPU_ARCH_ABI64)
#define IPPROTO_TPXX 39
#define CPUFAMILY_ARM_SWIFT 0x1e2d6381
#define P_ANONYMOUS (1 << 6)
#define MACH_MSGH_BITS_SET(remote,local,voucher,other) (MACH_MSGH_BITS_SET_PORTS((remote), (local), (voucher)) | ((other) &~ MACH_MSGH_BITS_PORTS_MASK))
#define _EDOTDOT -73
#define TASK_KERNELMEMORY_INFO 7
#define _POSIX_MAX_CANON 255
#define _APPEND_OK (1<<13)
#define stdout __stdoutp
#define _STRUCT_X86_EXCEPTION_STATE64 struct __darwin_x86_exception_state64
#define CPU_SUBTYPE_ARM_V4T ((cpu_subtype_t) 5)
#define NET_SERVICE_TYPE_VO 4
#define NL_SETMAX 255
#define __WINT_WIDTH__ 32
#define SIGSYS_ 31
#define OSSwapHostToLittleInt64(x) ((uint64_t)(x))
#define MAP_MEM_NOOP 0
#define IN6_IS_ADDR_MC_GLOBAL(a) (IN6_IS_ADDR_MULTICAST(a) && (__IPV6_ADDR_MC_SCOPE(a) == __IPV6_ADDR_SCOPE_GLOBAL))
#define __INT_LEAST8_MAX__ 0x7f
#define STRACE(msg,...) TRACE_(strace, msg, ##__VA_ARGS__)
#define TASK_DEBUG_CONTROL_PORT 10
#define SIGUSR2 31
#define HOST_RESOURCE_NOTIFY_PORT (20 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define host_set_chud_port(host,port) host_set_launchctl_port(host, port)
#define __FLT32X_MAX_10_EXP__ 308
#define __DARWIN_SUF_EXTSN "$DARWIN_EXTSN"
#define RLIMIT_DATA 2
#define VM_PAGE_QUERY_PAGE_PRESENT 0x1
#define EFL_CLR 0xfff88028
#define _ELOOP -40
#define SV_SIGINFO SA_SIGINFO
#define _STRUCT_UCONTEXT struct __darwin_ucontext
#define _MACH_I386_VM_PARAM_H_ 
#define CPU_SUBTYPE_ARM_V6M ((cpu_subtype_t) 14)
#define MACH_SEND_TIMED_OUT 0x10000004
#define CMSG_NXTHDR_(cmsg,mhdr_end) ((cmsg)->len < sizeof (struct cmsghdr_) || CMSG_LEN_(cmsg) + sizeof(struct cmsghdr_) >= (size_t) (mhdr_end - (uint8_t *)(cmsg)) ? NULL : (struct cmsghdr_ *)CMSG_NEXT_(cmsg))
#define MATTR_VAL_CACHE_FLUSH 6
#define SQLITE_MUTEX_STATIC_APP3 10
#define _SC_2_FORT_RUN 22
#define THREAD_THROUGHPUT_QOS_POLICY 8
#define SQLITE_IOERR_FSTAT (SQLITE_IOERR | (7<<8))
#define ZF_FLAG (1 << 6)
#define CPU_SUBTYPE_ARM_V7F ((cpu_subtype_t) 10)
#define EXC_I386_EMERR 6
#define __signed signed
#define CPU_SUBTYPE_ARM_V7K ((cpu_subtype_t) 12)
#define CPU_SUBTYPE_ARM_V7M ((cpu_subtype_t) 15)
#define _EADV -68
#define MACH_MSG_TYPE_MOVE_SEND 17
#define MSG_TRUNC_ 0x20
#define CPU_SUBTYPE_ARM_V7S ((cpu_subtype_t) 11)
#define _EBADFD -77
#define KERN_LOCK_OWNED 40
#define __ENABLE_LEGACY_MAC_AVAILABILITY 1
#define EMSGSIZE 40
#define _SC_ATEXIT_MAX 107
#define IPPROTO_DSTOPTS 60
#define LOCK_SET_NULL ((lock_set_t) 0)
#define host_set_host_port(host,port) (KERN_INVALID_ARGUMENT)
#define ZF_RES (1 << 1)
#define __DARWIN_ALIAS(sym) __asm("_" __STRING(sym) __DARWIN_SUF_UNIX03)
#define __FLT128_MIN__ 3.36210314311209350626267781732175260e-4932F128
#define TASK_NULL ((task_t) 0)
#define CPU_SUBTYPE_ARM_V8M ((cpu_subtype_t) 17)
#define _PC_ALLOC_SIZE_MIN 16
#define VM_SET_FLAGS_ALIAS(flags,alias) (flags) = (((flags) & ~VM_FLAGS_ALIAS_MASK) | (((alias) & ~VM_FLAGS_ALIAS_MASK) << 24))
#define _LP64 1
#define IN_LOOPBACK(i) (((u_int32_t)(i) & 0xff000000) == 0x7f000000)
#define MACH_MSGH_BITS_LOCAL(bits) (((bits) & MACH_MSGH_BITS_LOCAL_MASK) >> 8)
#define SIGEMT 7
#define SQLITE_TESTCTRL_LOCALTIME_FAULT 18
#define KEV_INET_SIFNETMASK 6
#define TCP_KEEPINTVL 0x101
#define VM_FLAGS_USER_REMAP (VM_FLAGS_FIXED | VM_FLAGS_ANYWHERE | VM_FLAGS_RANDOM_ADDR | VM_FLAGS_OVERWRITE| VM_FLAGS_RETURN_DATA_ADDR | VM_FLAGS_RESILIENT_CODESIGN | VM_FLAGS_RESILIENT_MEDIA)
#define KEV_DL_PROTO_ATTACHED 14
#define __UINT8_C(c) c
#define THREAD_SCHED_FIFO_INFO 12
#define EFBIG 27
#define _MACH_I386_THREAD_STATE_H_ 
#define __FLT64_MAX_EXP__ 1024
#define IPPROTO_NONE 59
#define IPPROTO_RSVP 46
#define P_WRITABLE(flags) (flags & P_WRITE && !(flags & P_COW))
#define PTRACE_CONT_ 7
#define TASK_VM_INFO_REV2_COUNT ((mach_msg_type_number_t) (TASK_VM_INFO_REV3_COUNT - 42))
#define __API_UNAVAILABLE(...) 
#define fropen(cookie,fn) funopen(cookie, fn, 0, 0, 0)
#define POLICY_NULL 0
#define __UINT64_TYPE__ long long unsigned int
#define SQLITE_INDEX_CONSTRAINT_FUNCTION 150
#define MACH_NOTIFY_LAST (MACH_NOTIFY_FIRST + 015)
#define __has_feature(x) 0
#define _PTHREAD_H 
#define USING_MIG_STRNCPY_ZEROFILL 
#define MAX_ZTRACE_DEPTH 15
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_15_1(x) x
#define RLIMIT_MEMLOCK_ 8
#define KEV_DL_ADDMULTI 7
#define VM_MEMORY_CORPSEINFO 80
#define _ENODEV -19
#define HOST_LAUNCHCTL_PORT (9 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define SQLITE_FCNTL_LAST_ERRNO 4
#define THREAD_BACKGROUND_POLICY 5
#define SQLITE_CONFIG_GETMALLOC 5
#define x86_FLOAT_STATE32 2
#define _SC_IOV_MAX 56
#define _ERESTART -85
#define _SC_PASS_MAX 131
#define W_STOPCODE(sig) ((sig) << 8 | _WSTOPPED)
#define AF_CCITT 10
#define host_set_automountd_port(host,port) (host_set_special_port((host), HOST_AUTOMOUNTD_PORT, (port)))
#define CLOCK_NULL ((clock_t) 0)
#define NET_SERVICE_TYPE_SIG 2
#define _POSIX_MAPPED_FILES 200112L
#define SQLITE_FCNTL_TEMPFILENAME 16
#define MB_CUR_MAX __mb_cur_max
#define SIGXCPU 24
#define __FLT128_HAS_QUIET_NAN__ 1
#define VM_MEMORY_COREIMAGE 68
#define THREAD_STANDARD_POLICY 1
#define OFF_MAX LLONG_MAX
#define SQLITE_LOCK_RESERVED 2
#define GET_MZI_COLLECTABLE_BYTES(val) ((val) >> 1)
#define SQLITE_LIMIT_VDBE_OP 5
#define _MACH_VM_BEHAVIOR_H_ 
#define IPV6CTL_MAXID 51
#define NETSVC_MRKNG_UNKNOWN 0
#define _SC_MAPPED_FILES 47
#define IPV6CTL_DEFMCASTHLIM 18
#define IOPOL_SCOPE_DARWIN_BG 2
#define VM_MAKE_TAG(tag) ((tag) << 24)
#define feof_unlocked(p) __sfeof(p)
#define _MACH_MACHINE_RPC_H_ 
#define VM_PURGABLE_STATE_MAX 3
#define MACH_PORT_TYPE_LABELH MACH_PORT_TYPE(MACH_PORT_RIGHT_LABELH)
#define CPU_SUBTYPE_XEON_MP CPU_SUBTYPE_INTEL(12, 1)
#define _STRUCT_LAST_BRANCH_RECORD struct __last_branch_record
#define SQLITE_DEPRECATED_WITH_REPLACEMENT __API_DEPRECATED_WITH_REPLACEMENT
#define CPUFAMILY_ARM_15 0xa8511bca
#define P_WRITE (1 << 1)
#define SQLITE_CONSTRAINT_COMMITHOOK (SQLITE_CONSTRAINT | (2<<8))
#define x86_FLOAT_STATE64 5
#define __FLT64X_MIN__ 3.36210314311209350626267781732175260e-4932F64x
#define _SC_AIO_MAX 43
#define EBADARCH 86
#define ENOTCONN 57
#define SQLITE_TESTCTRL_PRNG_RESET 7
#define SQLITE_BUSY 5
#define KEV_INET_SIFBRDADDR 5
#define SQLITE_ATTACH 24
#define SO_RCVBUF_ 8
#define __Request__thread_act_subsystem__defined 
#define IP_FW_FLUSH 42
#define TRACE_instr TRACE__NOP
#define VM_FLAGS_ALIAS_MASK 0xFF000000
#define PTHREAD_CREATE_JOINABLE 1
#define _BSD_MACHINE_TYPES_H_ 
#define MACH_MSG_TYPE_DISPOSE_SEND 25
#define __GNUC_STDC_INLINE__ 1
#define CPU_SUBTYPE_ARM_V5TEJ ((cpu_subtype_t) 7)
#define SQLITE_CREATE_TEMP_VIEW 6
#define MACH_PORT_QLIMIT_SMALL (16)
#define P_tmpdir "/var/tmp/"
#define SV_NOCLDSTOP SA_NOCLDSTOP
#define TCPOPT_SIGNATURE 19
#define FP_SOFT 1
#define _POSIX_MESSAGE_PASSING (-1)
#define SQLITE_ABORT 4
#define __FLT32_EPSILON__ 1.19209289550781250000000000000000000e-7F32
#define list_for_each_entry(list,item,member) for (item = list_entry((list)->next, typeof(*item), member); &item->member != (list); item = list_entry(item->member.next, typeof(*item), member))
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_1(x) 
#define __SMOD 0x2000
#define INTMAX_MAX INTMAX_C(9223372036854775807)
#define _I386_FP_SAVE_H_ 
#define __MIG_STRNCPY_ZEROFILL_FORWARD_TYPE_DECLS__ 
#define host_get_ktrace_background_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_KTRACE_BACKGROUND_PORT, (port)))
#define _POSIX2_BC_BASE_MAX 99
#define PTHREAD_ONCE_INIT {_PTHREAD_ONCE_SIG_init, {0}}
#define ILL_PRVREG 6
#define _XOPEN_STREAMS (-1)
#define msgh_kind msgh_seqno
#define TASK_ID_TOKEN_NULL ((task_id_token_t) 0)
#define time_value_add_usec(val,micros) { if (((val)->microseconds += (micros)) >= TIME_MICROS_MAX) { (val)->microseconds -= TIME_MICROS_MAX; (val)->seconds++; } }
#define _POSIX_MQ_PRIO_MAX 32
#define SQLITE_CONFIG_PCACHE2 18
#define SV_INTERRUPT SA_RESTART
#define MEMORY_OBJECT_COPY_TEMPORARY 3
#define __DEC_EVAL_METHOD__ 2
#define MACH_MSG_GUARD_FLAGS_IMMOVABLE_RECEIVE 0x0001
#define _SIZE_T 
#define MACH_RCV_LARGE 0x00000004
#define NET_RT_FLAGS_PRIV 10
#define SQLITE_INSERT 18
#define CPU_SUBTYPE_INTEL_FAMILY_MAX 15
#define _SC_2_PBS_TRACK 64
#define CPU_SUBTYPE_VAX8200 ((cpu_subtype_t) 7)
#define CPU_SUBTYPE_MIPS_R2300 ((cpu_subtype_t) 1)
#define THREAD_NULL ((thread_t) 0)
#define SIGILL_ 4
#define SOCK_STREAM 1
#define uint(size) glue3(uint,size,_t)
#define SQLITE_IOERR_DATA (SQLITE_IOERR | (32<<8))
#define x86_AVX_STATE64_COUNT ((mach_msg_type_number_t) (sizeof(x86_avx_state64_t)/sizeof(unsigned int)))
#define VM_FLAGS_USER_ALLOCATE (VM_FLAGS_FIXED | VM_FLAGS_ANYWHERE | VM_FLAGS_PURGABLE | VM_FLAGS_4GB_CHUNK | VM_FLAGS_RANDOM_ADDR | VM_FLAGS_NO_CACHE | VM_FLAGS_PERMANENT | VM_FLAGS_OVERWRITE | VM_FLAGS_SUPERPAGE_MASK | VM_FLAGS_ALIAS_MASK)
#define CPU_SUBTYPE_POWERPC_7400 ((cpu_subtype_t) 10)
#define SQLITE_IOCAP_SAFE_APPEND 0x00000200
#define SQLITE_DROP_TEMP_INDEX 12
#define IPPROTO_ICMPV6 58
#define MPG_FLAGS_STRICT_REPLY_INVALID_REPLY_PORT (0x02ull << 56)
#define IN6_IS_ADDR_SITELOCAL(a) (((a)->s6_addr[0] == 0xfe) && (((a)->s6_addr[1] & 0xc0) == 0xc0))
#define lock_set_MSG_COUNT 6
#define IOPOL_TYPE_VFS_TRIGGER_RESOLVE 5
#define SQLITE_AUTH 23
#define SET_MAP_MEM(caching,flags) ((flags) = ((((unsigned int)(caching)) << 24) & 0xFF000000) | ((flags) & 0xFFFFFF));
#define AF_NATM 31
#define OFF_MIN LLONG_MIN
#define MSG_PEEK_ 0x2
#define x86_EXCEPTION_STATE32 3
#define host_get_kextd_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_KEXTD_PORT, (port)))
#define __ReplyUnion__host_priv_subsystem__defined 
#define IP_MAX_SOCK_MUTE_FILTER 128
#define SO_NP_EXTENSIONS 0x1083
#define err_mach_ipc err_system(0x4)
#define _STRUCT_TIMESPEC struct timespec
#define __INTMAX_WIDTH__ 64
#define MAP_MEM_ONLY 0x010000
#define LOCK_UN_ 8
#define _POSIX_JOB_CONTROL 200112L
#define _SA_FAMILY_T 
#define IP_MULTICAST_TTL 10
#define MIG_BAD_ID -303
#define _ENETDOWN -100
#define VM_FLAGS_RETURN_4K_DATA_ADDR 0x800000
#define __ORDER_BIG_ENDIAN__ 4321
#define _POSIX2_UPE 200112L
#define THREAD_AFFINITY_POLICY 4
#define PF_IMPLINK AF_IMPLINK
#define NET_RT_FLAGS 2
#define __UINT32_C(c) c ## U
#define IPPROTO_BHA 49
#define PTHREAD_SCOPE_SYSTEM 1
#define _MACH_THREAD_STATUS_H_ 
#define _POSIX2_VERSION 200112L
#define EISCONN 56
#define clock_priv_MSG_COUNT 2
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define __DTF_SKIPREAD 0x0010
#define KMOD_MAX_NAME 64
#define __TVOS_10_0 100000
#define __TVOS_10_1 100100
#define __TVOS_10_2 100200
#define TCPOLEN_SACK 8
#define MEMORY_OBJECT_IO_SYNC 0x20
#define PAGE_MAX_SIZE (1 << PAGE_MAX_SHIFT)
#define VM_PURGABLE_SET_STATE_FROM_KERNEL ((vm_purgable_t) 3)
#define IP_DROP_SOURCE_MEMBERSHIP 71
#define MACH_MSGH_BITS_OTHER(bits) ((bits) &~ MACH_MSGH_BITS_PORTS_MASK)
#define INTMAX_MIN (-INTMAX_MAX-1)
#define CPU_SUBTYPE_POWERPC_7450 ((cpu_subtype_t) 11)
#define INADDR_BROADCAST (u_int32_t)0xffffffff
#define AF_UNIX 1
#define PROCESSOR_BASIC_INFO 1
#define _SC_TRACE_INHERIT 99
#define VM_MEMORY_APPLICATION_SPECIFIC_1 240
#define _STDLIB_H_ 
#define MEMORY_OBJECT_BEHAVE_INFO_COUNT ((mach_msg_type_number_t) (sizeof(memory_object_behave_info_data_t)/sizeof(int)))
#define CPUFAMILY_ARM_LIGHTNING_THUNDER 0x462504d2
#define PAGE(addr) ((addr) >> PAGE_BITS)
#define _EADDRNOTAVAIL -99
#define EUSERS 68
#define SQLITE_CREATE_TEMP_INDEX 3
#define _ENOTEMPTY -39
#define _ELIBSCN -81
#define _VA_LIST_T_H 
#define AF_PPP 34
#define INT_FAST16_MAX INT16_MAX
#define IPCTL_KEEPFAITH 15
#define PTRACE_SETFPREGS_ 15
#define EXC_I386_NOEXT 3
#define MACH_RCV_TRAILER_ELEMENTS(x) (((x) & 0xf) << 24)
#define _CS_POSIX_V6_LP64_OFF64_LIBS 10
#define _SIGSET_T 
#define VM_STATISTICS_TRUNCATE_TO_32_BIT(value) ((uint32_t)(((value) > UINT32_MAX ) ? UINT32_MAX : (value)))
#define __UINT_FAST32_TYPE__ unsigned int
#define FD_ISSET(n,p) __DARWIN_FD_ISSET(n, p)
#define _SC_PAGE_SIZE _SC_PAGESIZE
#define FP_RND_NEAR 0
#define POLL_ERR 4
#define PTHREAD_EXPLICIT_SCHED 2
#define EINTR 4
#define __RCSID(s) __IDSTRING(rcsid,s)
#define _REG(n) union { dword_t e ##n; word_t n; }
#define KERN_INVALID_ADDRESS 1
#define task_set_bootstrap_port(task,port) (task_set_special_port((task), TASK_BOOTSTRAP_PORT, (port)))
#define I386_EXCEPTION_STATE_COUNT i386_EXCEPTION_STATE_COUNT
#define SEGV_NOOP 0
#define NETSVC_MRKNG_LVL_L3L2_BK 3
#define COND_INITIALIZER ((cond_t) {PTHREAD_COND_INITIALIZER})
#define __FLT_MAX__ 3.40282346638528859811704183484516925e+38F
#define POLICY_FIFO_BASE_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_fifo_base)/sizeof(integer_t)))
#define VM_LEDGER_TAG_NETWORK 0x00000002
#define SQLITE_DROP_TEMP_TABLE 13
#define __NDR_convert__mig_reply_error_t__defined 
#define CPU_SUBTYPE_X86_ARCH1 ((cpu_subtype_t)4)
#define __alloca(size) __builtin_alloca(size)
#define MACH_MSG_SIZE_NULL (mach_msg_size_t *) 0
#define CPU_SUBTYPE_MIPS_ALL ((cpu_subtype_t) 0)
#define SA_NOCLDWAIT 0x0020
#define __va_list__ 
#define invalid_policy(policy) ((policy) != POLICY_TIMESHARE && (policy) != POLICY_RR && (policy) != POLICY_FIFO)
#define NDR_INT_BIG_ENDIAN 0
#define MACH_MSG_TRAILER_FORMAT_0 0
#define IPPROTO_EMCON 14
#define COALITION_NULL ((coalition_t) 0)
#define VM_FLAGS_PERMANENT 0x0080
#define KERN_INVALID_ARGUMENT 4
#define _POSIX2_CHAR_TERM 200112L
#define _POSIX2_BC_DIM_MAX 2048
#define __SSE2__ 1
#define SO_ERROR 0x1007
#define _PTHREAD_T 
#define _SYS_WAIT_H_ 
#define _SC_2_FORT_DEV 21
#define mach_vm_round_page(x) (((mach_vm_offset_t)(x) + vm_page_mask) & ~((signed)vm_page_mask))
#define PTHREAD_MUTEX_RECURSIVE 2
#define __API_AVAILABLE_BEGIN(...) 
#define SQLITE_TEXT 3
#define _POSIX_TRACE_EVENT_NAME_MAX 30
#define __INT32_TYPE__ int
#define VM_MAP_ENTRY_MAX (256)
#define _FTS5_H 
#define MEMORY_OBJECT_RESPECT_CACHE 0x2
#define _SC_TRACE_EVENT_NAME_MAX 127
#define _EROFS -30
#define MACH_MSG_SIZE_MAX ((mach_msg_size_t) ~0)
#define __SIZEOF_DOUBLE__ 8
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_3(x) 
#define RUSAGE_INFO_CURRENT RUSAGE_INFO_V5
#define VM_PURGABLE_NO_AGING (0x1 << VM_PURGABLE_NO_AGING_SHIFT)
#define __INT_LEAST32_WIDTH__ 32
#define PF_APPLETALK AF_APPLETALK
#define subsystem_to_name_map_host_security { "host_security_create_task_token", 600 }, { "host_security_set_task_token", 601 }
#define __API_DEPRECATED_BEGIN(...) 
#define SQLITE_DBSTATUS_CACHE_HIT 7
#define __DRIVERKIT_20_0 200000
#define THREAD_LATENCY_QOS_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (thread_latency_qos_policy_data_t) / sizeof (integer_t)))
#define IPPROTO_NHRP 54
#define VM_PROT_WRITE ((vm_prot_t) 0x02)
#define SQLITE_AVAILABLE __API_AVAILABLE
#define FIXINC_WRAP_STDIO_H_STDIO_STDARG_H 1
#define IN_CLASSA_NET 0xff000000
#define CPU_SUBTYPE_ARM_XSCALE ((cpu_subtype_t) 8)
#define __ReplyUnion__thread_act_subsystem__defined 
#define _QUAD_HIGHWORD 1
#define UINT8_C(v) (v)
#define IP_MULTICAST_IF 9
#define __ReplyUnion__lock_set_subsystem__defined 
#define __INT16_C(c) c
#define TH_STATE_HALTED 5
#define _V6_LP64_OFF64 __LP64_OFF64
#define __Reply__mach_host_subsystem__defined 
#define CPUFAMILY_UNKNOWN 0
#define DTTOIF(dirtype) ((dirtype) << 12)
#define PROCESSOR_SET_LOAD_INFO_COUNT ((mach_msg_type_number_t) (sizeof(processor_set_load_info_data_t)/sizeof(natural_t)))
#define EXC_I386_BPTFLT 3
#define _POSIX2_C_BIND 200112L
#define va_end(v) __builtin_va_end(v)
#define SQLITE_CONFIG_MUTEX 10
#define SQLITE_IOERR_COMMIT_ATOMIC (SQLITE_IOERR | (30<<8))
#define _EUCLEAN -117
#define EXC_TYPES_COUNT 14
#define __UINTMAX_MAX__ 0xffffffffffffffffUL
#define SQLITE_FCNTL_WIN32_SET_HANDLE 23
#define MATTR_CACHE 1
#define _SC_TRACE_SYS_MAX 129
#define SQLITE_SHM_LOCK 2
#define _POSIX_V7_ILP32_OFFBIG __ILP32_OFFBIG
#define IPV6CTL_SOURCECHECK 10
#define MAP_MEM_WTHRU 3
#define USER_ADDR_NULL ((user_addr_t) 0)
#define SQLITE_RANGE 25
#define SIZE_T_MAX ULONG_MAX
#define SIGTERM_ 15
#define PF_INET AF_INET
#define SQLITE_DBSTATUS_STMT_USED 3
#define MACH_VOUCHER_ATTR_VALUE_MAX_NESTED ((mach_voucher_attr_value_handle_array_size_t)4)
#define ENOPOLICY 103
#define MACH_SEND_INVALID_NOTIFY 0x1000000b
#define ECONNREFUSED 61
#define _RATTR_OK (1<<15)
#define INT_FAST64_MIN INT64_MIN
#define _POSIX2_C_DEV 200112L
#define CPU_SUBTYPE_ARM64_32_ALL ((cpu_subtype_t) 0)
#define EAGAIN 35
#define _ENODATA -61
#define KERN_MEMORY_RESTART_COPY 25
#define __DBL_MAX_10_EXP__ 308
#define VM_LEDGER_TAG_NEURAL 0x00000005
#define VM_MAX_USER_PAGE_ADDRESS ((user_addr_t)0x00007FFFFFFFF000ULL)
#define SQLITE_INDEX_CONSTRAINT_ISNOTNULL 70
#define __const const
#define UINT16_MAX 65535
#define __LDBL_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951L
#define MACH_MSGH_BITS_REMOTE_MASK 0x0000001f
#define VM_MEMORY_MALLOC_MEDIUM 12
#define PROC_FLAG_DARWINBG 0x8000
#define _POSIX_TRACE_LOG (-1)
#define RLIMIT_CORE_ 4
#define system_emask (err_system(0x3f))
#define HOST_CLOSURED_PORT (21 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define _CTERMID_H_ 
#define IPPROTO_SATEXPAK 64
#define VM_MEMORY_WEBCORE_PURGEABLE_BUFFERS 69
#define _ACCESS_EXTENDED_MASK (_READ_OK | _WRITE_OK | _EXECUTE_OK | _DELETE_OK | _APPEND_OK | _RMFILE_OK | _REXT_OK | _WEXT_OK | _RATTR_OK | _WATTR_OK | _RPERM_OK | _WPERM_OK | _CHOWN_OK)
#define _SC_THREADS 96
#define MPG_FLAGS_STRICT_REPLY_INVALID_REPLY_DISP (0x01ull << 56)
#define P_RWX (P_READ | P_WRITE | P_EXEC)
#define FD_CLR(n,p) __DARWIN_FD_CLR(n, p)
#define SIG_IGN (void (*)(int))1
#define _ENETRESET -102
#define __STDC__ 1
#define IN_LOCAL_GROUP(i) (((u_int32_t)(i) & 0xffffff00) == 0xe0000000)
#define SQLITE_LOCK_PENDING 3
#define _STRUCT_MCONTEXT_AVX64_FULL struct __darwin_mcontext_avx64_full
#define CPU_SUBTYPE_VAX780 ((cpu_subtype_t) 1)
#define __PTRDIFF_TYPE__ long int
#define SQLITE_DBSTATUS_LOOKASIDE_USED 0
#define CPUFAMILY_ARM_TYPHOON 0x2c91a47e
#define DT_LNK 10
#define AF_FLAG (1 << 4)
#define VM_VOLATILE_GROUP_SHIFT 8
#define KERN_NO_ACCESS 8
#define EPROGMISMATCH 75
#define SQLITE_IOERR_AUTH (SQLITE_IOERR | (28<<8))
#define _POSIX_TTY_NAME_MAX 9
#define CLOCK_ALARM_MINRES 4
#define TASK_EXC_GUARD_VM_FATAL 0x08
#define AF_IEEE80211 37
#define CPUSUBFAMILY_ARM_HC_HD 5
#define SQLITE_MUTEX_RECURSIVE 1
#define _SC_2_PBS_CHECKPOINT 61
#define TCP_MINMSS 216
#define VM_MEMORY_ROSETTA 230
#define VM_PURGABLE_GET_STATE ((vm_purgable_t) 1)
#define SQLITE_FCNTL_VFSNAME 12
#define SQLITE_NOTFOUND 12
#define MACH_MSG_TYPE_PORT_RECEIVE MACH_MSG_TYPE_MOVE_RECEIVE
#define MACH_PORT_QLIMIT_ZERO (0)
#define TASK_EXC_GUARD_VM_CORPSE 0x04
#define SQLITE_API 
#define BC_STRING_MAX 1000
#define SQLITE_FCNTL_VFS_POINTER 27
#define ERPCMISMATCH 73
#define x86_AVX512_STATE32 19
#define IPV6_2292NEXTHOP 21
#define __UINTPTR_TYPE__ long unsigned int
#define CLD_KILLED 2
#define _SSIZE_T 
#define SQLITE_TRACE_ROW 0x04
#define host_get_fairplayd_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_FAIRPLAYD_PORT, (port)))
#define SHUT_RD 0
#define ntohll(x) __DARWIN_OSSwapInt64(x)
#define __unreachable_ok_push _Pragma("GCC diagnostic push") _Pragma("GCC diagnostic ignored \"-Wunreachable-code\"")
#define __LDBL_MIN_10_EXP__ (-4931)
#define MACH_PORT_LIMITS_INFO 1
#define __NDR_convert__char_rep__ 0
#define _MACH_SYNC_POLICY_H_ 
#define IPV6CTL_MCAST_PMTU 44
#define EXC_MACF_MAX 0x2FFFF
#define SQLITE_NOMEM 7
#define _SC_SPAWN 79
#define _STDNORETURN_H 
#define THREAD_AFFINITY_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (thread_affinity_policy_data_t) / sizeof (integer_t)))
#define HOST_CPU_LOAD_INFO 3
#define VM_REGION_TOP_INFO_COUNT ((mach_msg_type_number_t) (sizeof(vm_region_top_info_data_t) / sizeof(natural_t)))
#define __DARWIN_NON_CANCELABLE 0
#define ILL_NOOP 0
#define SIG_SETMASK 3
#define _VA_LIST_T 
#define SO_SNDBUF_ 7
#define IPC_VOUCHER_ATTR_CONTROL_NULL ((ipc_voucher_attr_control_t) 0)
#define IOPOL_THROTTLE 3
#define EXC_MASK_CORPSE_NOTIFY (1 << EXC_CORPSE_NOTIFY)
#define x86_AVX512_STATE64 (x86_AVX512_STATE32 + 1)
#define _CHOWN_OK (1<<21)
#define MACH_PORT_QLIMIT_MAX MACH_PORT_QLIMIT_LARGE
#define SOCK_CLOEXEC_ 0x80000
#define _POSIX_OPEN_MAX 20
#define SCM_TIMESTAMP_MONOTONIC 0x04
#define CPU_SUBTYPE_MC98601 ((cpu_subtype_t) 1)
#define TTCP_CLIENT_SND_WND 4096
#define THREAD_BASIC_INFO_COUNT ((mach_msg_type_number_t) (sizeof(thread_basic_info_data_t) / sizeof(natural_t)))
#define EXC_ARITHMETIC 3
#define __GCC_ATOMIC_LLONG_LOCK_FREE 2
#define IPPROTO_VISA 70
#define __MAC_10_10 101000
#define CPU_SUBTYPE_VAX_ALL ((cpu_subtype_t) 0)
#define _MACH_THREAD_INFO_H_ 
#define VM_SYNC_CONTIGUOUS ((vm_sync_t) 0x20)
#define SQLITE_ERROR_SNAPSHOT (SQLITE_ERROR | (3<<8))
#define EFL_IOPL 0x00003000
#define KERN_MEMORY_FAILURE 9
#define _ENOSPC -28
#define SQLITE_TESTCTRL_VDBE_COVERAGE 21
#define DTF_NODUP 0x0002
#define CPU_SUBTYPE_UVAXII ((cpu_subtype_t) 6)
#define CPU_TYPE_I386 CPU_TYPE_X86
#define _MACH_MACHINE_PROCESSOR_INFO_H_ 
#define AF_ISO 7
#define _OS_OSBYTEORDER_H 
#define __MAC_10_16 101600
#define EXCEPTION_STATE 2
#define EXC_I386_INVOPFLT 6
#define VM_FLAGS_SUPERPAGE_SHIFT 16
#define VM_MEMORY_MALLOC_LARGE_REUSABLE 8
#define RLIMIT_AS_ 9
#define SHUT_WR 1
#define VM_MAP_NULL ((vm_map_t) 0)
#define BC_BASE_MAX 99
#define LEDGER_LIMIT_INFINITY ((ledger_amount_t)((1ULL << 63) - 1))
#define _ENOTDIR -20
#define MB_LEN_MAX 6
#define VM_PAGE_QUERY_PAGE_REUSABLE 0x800
#define MACH_PORT_TYPE_NONE ((mach_port_type_t) 0L)
#define __INT_LEAST64_WIDTH__ 64
#define SQLITE_EMPTY 16
#define IOPOL_MATERIALIZE_DATALESS_FILES_ON 2
#define _USECONDS_T 
#define INT_LEAST16_MAX INT16_MAX
#define _CS_POSIX_V6_ILP32_OFF32_LIBS 4
#define __SSE3__ 1
#define __UINT_FAST8_TYPE__ unsigned char
#define _POSIX_SAVED_IDS 200112L
#define SQLITE_CONFIG_MEMDB_MAXSIZE 29
#define CPU_SUBTYPE_ANY ((cpu_subtype_t) -1)
#define __P(protos) protos
#define VM_MEMORY_COREGRAPHICS_FRAMEBUFFERS 56
#define _RMFILE_OK (1<<14)
#define IOPOL_TYPE_VFS_ATIME_UPDATES 2
#define _POSIX_BARRIERS (-1)
#define EXC_I386_BPT 2
#define THREAD_FLAVOR_READ 1
#define __DARWIN_SUF_UNIX03 
#define __IPHONE_9_1 90100
#define __IPHONE_9_2 90200
#define __IPHONE_9_3 90300
#define SA_NODEFER_ 0x40000000
#define __ATOMIC_ACQ_REL 4
#define IP_PKTINFO 26
#define __ATOMIC_RELEASE 3
#define HOST_AMFID_PORT (11 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define _STRUCT_X86_AVX_STATE32 struct __darwin_i386_avx_state
#define SM_SHARED_ALIASED 7
#define __DARWIN_CLK_TCK 100
#define _T_WCHAR 
#define AF_INET_ PF_INET_
#define SAE_ASSOCID_ALL ((sae_associd_t)(-1ULL))
#define EXC_MACF_MIN 0x20000
#define IN6ADDR_LINKLOCAL_ALLV2ROUTERS_INIT {{{ 0xff, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16 }}}
#define _ENOSTR -60
#define VM_PURGABLE_DEBUG_MASK (0x3 << VM_PURGABLE_DEBUG_SHIFT)
#define IPV6_RTHDR_TYPE_0 0
#define __BEGIN_DECLS 
#define SQLITE_IOERR_DELETE_NOENT (SQLITE_IOERR | (23<<8))
#define SA_USERTRAMP 0x0100
#define ___POSIX_C_DEPRECATED_STARTING_199009L 
#define _SC_XOPEN_UNIX 115
#define O_WRONLY_ (1 << 0)
#define BUS_ADRALN 1
#define __FLT32X_MAX_EXP__ 1024
#define _CS_POSIX_V6_ILP32_OFFBIG_LIBS 7
#define MACH_PORT_QLIMIT_MIN MACH_PORT_QLIMIT_ZERO
#define VM_PAGE_QUERY_PAGE_SPECULATIVE 0x40
#define MIG_TYPE_ERROR -300
#define SQLITE_DBSTATUS_CACHE_WRITE 9
#define MAC_OS_X_VERSION_10_13_1 101301
#define MAC_OS_X_VERSION_10_13_2 101302
#define MAC_OS_X_VERSION_10_13_4 101304
#define TASK_THREAD_TIMES_INFO 3
#define SAE_ASSOCID_ANY 0
#define _POSIX_SHARED_MEMORY_OBJECTS (-1)
#define __unused __attribute__((__unused__))
#define TIMERS_MAX 16
#define _STDBOOL_H 
#define PF_VLAN ((uint32_t)0x766c616e)
#define _STRUCT_X86_AVX_STATE64 struct __darwin_x86_avx_state64
#define _MACH_VM_INHERIT_H_ 
#define __ATOMIC_ACQUIRE 2
#define _POSIX2_BC_SCALE_MAX 99
#define __WCHAR_MAX__ 0x7fffffff
#define _STDATOMIC_H 
#define _MACH_VM_TYPES_H_ 
#define HOST_VM_INFO64_LATEST_COUNT HOST_VM_INFO64_COUNT
#define KEV_DL_PROTO_DETACHED 15
#define _ENOLCK -37
#define MACHINE_THREAD_STATE_COUNT x86_THREAD_STATE_COUNT
#define IP_DEFAULT_MULTICAST_TTL 1
#define __Reply__thread_act_subsystem__defined 
#define _MACH_POLICY_H_ 
#define SO_ERROR_ 4
#define CPUFAMILY_ARM_11 0x8ff620d8
#define __FLT_MIN__ 1.17549435082228750796873653722224568e-38F
#define CPUFAMILY_ARM_13 0x0cc90e64
#define CPUFAMILY_ARM_14 0x96077ef1
#define __GCC_IEC_559_COMPLEX 2
#define task_set_host_port(task,port) (task_set_special_port((task), TASK_HOST_PORT, (port)))
#define MACH_PORT_TYPE_PORT_RIGHTS (MACH_PORT_TYPE_SEND_RIGHTS|MACH_PORT_TYPE_RECEIVE)
#define atomic_flag_clear_explicit(PTR,MO) __atomic_clear ((PTR), (MO))
#define VM_MEMORY_JAVASCRIPT_JIT_EXECUTABLE_ALLOCATOR 64
#define _SC_TIMEOUTS 95
#define __UINT_LEAST8_TYPE__ unsigned char
#define __SIZEOF_FLOAT80__ 16
#define atomic_fetch_sub(PTR,VAL) __atomic_fetch_sub ((PTR), (VAL), __ATOMIC_SEQ_CST)
#define SQLITE_CONFIG_URI 17
#define MACH_NOTIFY_PORT_DESTROYED (MACH_NOTIFY_FIRST + 005)
#define MACH_PORT_STATUS_FLAG_REVIVE 0x10
#define _I386__ENDIAN_H_ 
#define INT_LEAST16_MIN INT16_MIN
#define HOST_CALENDAR_CHANGED_REPLYID 950
#define __RequestUnion__mach_host_subsystem__defined 
#define __Reply__host_priv_subsystem__defined 
#define KEV_DL_LINK_QUALITY_METRIC_CHANGED 20
#define _SC_LINE_MAX 15
#define RLIM_SAVED_MAX RLIM_INFINITY
#define IPPROTO_CPNX 72
#define MACH_MSGH_BITS_LOCAL_MASK 0x00001f00
#define __API_UNAVAILABLE_GET_MACRO(...) 
#define IPCTL_GIF_TTL 16
#define I386_THREAD_STATE_MAX (614)
#define HOST_VM_INFO_LATEST_COUNT HOST_VM_INFO_COUNT
#define __OSX_DEPRECATED(_start,_dep,_msg) 
#define _POSIX_PRIORITIZED_IO (-1)
#define PROCESSOR_PM_REGS_INFO 0x10000001
#define OSSwapLittleToHostConstInt16(x) ((uint16_t)(x))
#define TASK_BASIC_INFO_32 4
#define __DRIVERKIT_19_0 190000
#define SQLITE_CANTOPEN 14
#define bzero(dest,...) __builtin___memset_chk (dest, 0, __VA_ARGS__, __darwin_obsz0 (dest))
#define _SECURE__STRING_H_ 
#define CPU_SUBTYPE_MC88000_ALL ((cpu_subtype_t) 0)
#define KEV_INET6_REQUEST_NAT64_PREFIX 7
#define __INTMAX_C(c) c ## L
#define EPROTONOSUPPORT 43
#define PTHREAD_SCOPE_PROCESS 2
#define PTHREAD_CANCELED ((void *) 1)
#define MIG_ARRAY_TOO_LARGE -307
#define TIME_RELATIVE 0x01
#define TRUE 1
#define SIG_HOLD (void (*)(int))5
#define SIGNAL_H 
#define KERN_RESOURCE_SHORTAGE 6
#define IPV6_LEAVE_GROUP 13
#define __Reply__host_security_subsystem__defined 
#define NET_SERVICE_TYPE_VI 3
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
#define MACH_SEND_NODENAP MACH_SEND_NOIMPORTANCE
#define IPV6CTL_MRTSTATS 7
#define IN6_IS_ADDR_UNSPECIFIED(a) ((*(const __uint32_t *)(const void *)(&(a)->s6_addr[0]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[4]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[8]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[12]) == 0))
#define SQLITE_STMTSTATUS_FULLSCAN_STEP 1
#define IPV6CTL_RTEXPIRE 25
#define atomic_compare_exchange_strong_explicit(PTR,VAL,DES,SUC,FAIL) __extension__ ({ __auto_type __atomic_compare_exchange_ptr = (PTR); __typeof__ ((void)0, *__atomic_compare_exchange_ptr) __atomic_compare_exchange_tmp = (DES); __atomic_compare_exchange (__atomic_compare_exchange_ptr, (VAL), &__atomic_compare_exchange_tmp, 0, (SUC), (FAIL)); })
#define IOPOL_VFS_IGNORE_PERMISSIONS_ON 1
#define __WATCHOS_1_0 10000
#define __DARWIN_C_LEVEL __DARWIN_C_FULL
#define EEXIST 17
#define VM_REGION_BASIC_INFO_COUNT ((mach_msg_type_number_t) (sizeof(vm_region_basic_info_data_t)/sizeof(int)))
#define atomic_flag_clear(PTR) __atomic_clear ((PTR), __ATOMIC_SEQ_CST)
#define __UINT8_MAX__ 0xff
#define _POSIX_CLOCK_SELECTION (-1)
#define _POSIX_TYPED_MEMORY_OBJECTS (-1)
#define CPUFAMILY_INTEL_WESTMERE 0x573b5eec
#define LEDGER_NULL ((ledger_t) 0)
#define _XOPEN_UNIX (1)
#define VM_MEMORY_CM_MEMORYPOOL 94
#define _POSIX_THREAD_ATTR_STACKSIZE 200112L
#define THREAD_STATE_FLAVOR_LIST_10_9 129
#define PF_PPP AF_PPP
#define OSSwapLittleToHostInt16(x) ((uint16_t)(x))
#define MACH_ZONE_NAME_MAX_LEN 80
#define DT_WHT 14
#define INT16_C(v) (v)
#define MACH_RCV_TIMED_OUT 0x10004003
#define __WINT_MAX__ 0x7fffffff
#define _SC_2_C_DEV 19
#define EXC_MASK_ARITHMETIC (1 << EXC_ARITHMETIC)
#define __DARWIN_OSSwapInt64(x) (__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt64(x) : _OSSwapInt64(x))
#define RLIMIT_LOCKS_ 10
#define __PTHREAD_ATTR_SIZE__ 56
#define __FLT32_MIN_EXP__ (-125)
#define _SYS_UNISTD_H_ 
#define _POSIX_SPIN_LOCKS (-1)
#define PROCESSOR_INFO_MAX (1024)
#define ENOEXEC 8
#define INT8_MAX 127
#define CLD_TRAPPED 4
#define UINT_LEAST64_MAX UINT64_MAX
#define processor_MSG_COUNT 6
#define OSSwapLittleToHostConstInt64(x) ((uint64_t)(x))
#define IPPROTO_HMP 20
#define PROCESSOR_NULL ((processor_t) 0)
#define SO_NOSIGPIPE 0x1022
#define _CDEFS_H_ 
#define vsnprintf(str,len,format,ap) __builtin___vsnprintf_chk (str, len, 0, __darwin_obsz(str), format, ap)
#define REQUESTED_TRAILER_SIZE(y) REQUESTED_TRAILER_SIZE_NATIVE(y)
#define OSSwapLittleToHostInt32(x) ((uint32_t)(x))
#define EILSEQ 92
#define MEMORY_OBJECT_COPY_DELAY 2
#define ESPIPE 29
#define MATTR_VAL_ICACHE_FLUSH 8
#define THREAD_READ_NULL ((thread_read_t) 0)
#define _EPROTO -71
#define MEMORY_OBJECT_NAME_NULL ((memory_object_name_t) 0)
#define MACH_PORT_STATUS_FLAG_IMP_DONATION 0x08
#define SQLITE_DBCONFIG_ENABLE_LOAD_EXTENSION 1005
#define HOST_COALITION_PORT (15 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define __SIZE_MAX__ 0xffffffffffffffffUL
#define KEV_DL_AWDL_UNRESTRICTED 27
#define FPC_IM FPC_IE
#define IN_MULTICAST(i) IN_CLASSD(i)
#define SQLITE_MUTEX_STATIC_MEM 3
#define SQLITE_DEPRECATED_NO_REPLACEMENT __API_DEPRECATED
#define AF_APPLETALK 16
#define EXC_MACH_SYSCALL 8
#define _SC_TTY_NAME_MAX 101
#define __CONSTANT_CFSTRINGS__ 1
#define x86_EXCEPTION_STATE_COUNT ((mach_msg_type_number_t) (sizeof(x86_exception_state_t)/sizeof(unsigned int)))
#define TASK_EXC_GUARD_MP_ALL 0xf0
#define RLIM_INFINITY (((__uint64_t)1 << 63) - 1)
#define KERN_DEFAULT_SET 31
#define INT16_MAX 32767
#define MACH_SEND_INVALID_RIGHT 0x1000000a
#define RLIMIT_AS 5
#define SQLITE_STATUS_SCRATCH_SIZE 8
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8 1
#define _V6_ILP32_OFF32 __ILP32_OFF32
#define __DARWIN_FD_CLR(n,p) __darwin_fd_clr((n), (p))
#define EHOSTUNREACH 65
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define OSSwapLittleToHostInt64(x) ((uint64_t)(x))
#define VM_PROT_STRIP_READ ((vm_prot_t) 0x80)
#define trunc_page_kernel(x) ((x) & (~vm_kernel_page_mask))
#define SQLITE_IOERR 10
#define __GCC_IEC_559 2
#define SQLITE_IOERR_SHORT_READ (SQLITE_IOERR | (2<<8))
#define CPU_SUBTYPE_386 CPU_SUBTYPE_INTEL(3, 0)
#define SQLITE_TESTCTRL_BYTEORDER 22
#define EXC_I386_ENDPERR 33
#define IP_FW_RESETLOG 45
#define EXC_CORPSE_NOTIFY 13
#define _IOFBF 0
#define _STRUCT_X86_CPMU_STATE64 struct __darwin_x86_cpmu_state64
#define _POSIX2_BC_STRING_MAX 1000
#define _PTHREAD_ONCE_SIG_init 0x30B1BCBA
#define __FLT_EVAL_METHOD__ 0
#define SQLITE_FCNTL_CKPT_DONE 37
#define _SC_NPROCESSORS_CONF 57
#define MACH_MSG_IPC_KERNEL 0x00000800
#define __NDR_convert__float_rep__ 0
#define MACH_PORT_TYPE_DEAD_NAME MACH_PORT_TYPE(MACH_PORT_RIGHT_DEAD_NAME)
#define putc_unlocked(x,fp) __sputc(x, fp)
#define EPROGUNAVAIL 74
#define IPV6CTL_RTMINEXPIRE 26
#define host_set_kextd_port(host,port) (host_set_special_port((host), HOST_KEXTD_PORT, (port)))
#define VM_BEHAVIOR_REUSE ((vm_behavior_t) 9)
#define TASK_EXC_GUARD_MP_FATAL 0x80
#define CPU_SUBTYPE_INTEL_MODEL_ALL 0
#define _SC_XOPEN_STREAMS 114
#define HOST_EXTMOD_INFO64_COUNT ((mach_msg_type_number_t) (sizeof(vm_extmod_statistics_data_t)/sizeof(integer_t)))
#define __IPV6_ADDR_MC_SCOPE(a) ((a)->s6_addr[1] & 0x0f)
#define __FLT64_DECIMAL_DIG__ 17
#define VM_PAGE_QUERY_PAGE_FICTITIOUS 0x2
#define HOST_GSSD_PORT (12 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define atomic_exchange(PTR,VAL) atomic_exchange_explicit (PTR, VAL, __ATOMIC_SEQ_CST)
#define _POSIX_SS_REPL_MAX 4
#define KEV_DL_SUBCLASS 2
#define __disable_tail_calls 
#define IP_TTL_ 2
#define glue(a,b) _glue(a, b)
#define _thread_act_user_ 
#define SIN6_LEN 
#define HOST_LAST_SPECIAL_KERNEL_PORT HOST_IO_MASTER_PORT
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define _POSIX_DELAYTIMER_MAX 32
#define LINK_MAX 32767
#define VM_MEMORY_COREGRAPHICS 42
#define __IPHONE_2_1 20100
#define __IPHONE_2_2 20200
#define INT8_MIN -128
#define PTHREAD_MUTEX_DEFAULT PTHREAD_MUTEX_NORMAL
#define _SOCKLEN_T 
#define AF_NS 6
#define PF_COIP AF_COIP
#define __AVAILABILITY_INTERNAL_WEAK_IMPORT __attribute__((weak_import))
#define _POSIX_TRACE_USER_EVENT_MAX 32
#define SQLITE_CONFIG_GETMUTEX 11
#define _SC_2_CHAR_TERM 20
#define EXC_I386_ALIGNFLT 17
#define _SC_TRACE_USER_EVENT_MAX 130
#define SQLITE_TESTCTRL_ISKEYWORD 16
#define thread_act_MSG_COUNT 31
#define SQLITE_ERROR 1
#define VM_PURGABLE_DENY 3
#define SM_TRUESHARED 5
#define RLIM_INFINITY_ ((rlim_t_) -1)
#define TH_STATE_UNINTERRUPTIBLE 4
#define EOWNERDEAD 105
#define _MACH_DEBUG_LOCKGROUP_INFO_H_ 
#define CPUFAMILY_INTEL_SANDYBRIDGE 0x5490b78c
#define VM_PAGE_QUERY_PAGE_CS_VALIDATED 0x100
#define MINSIGSTKSZ_ 2048
#define IPV6_ADDR_MC_FLAGS_UNICAST_BASED (IPV6_ADDR_MC_FLAGS_TRANSIENT | IPV6_ADDR_MC_FLAGS_PREFIX)
#define TH_FLAGS (TH_FIN|TH_SYN|TH_RST|TH_ACK|TH_URG|TH_ECE|TH_CWR)
#define CAST_USER_ADDR_T(a_ptr) ((user_addr_t)((uintptr_t)(a_ptr)))
#define TASK_SEATBELT_PORT 7
#define SHUT_RDWR 2
#define SQLITE_INDEX_CONSTRAINT_REGEXP 67
#define POLL_MSG 3
#define MAP_MEM_COPYBACK 1
#define MACH_MSG_OPTION_NONE 0x00000000
#define SIGQUIT_ 3
#define INT16_MIN -32768
#define VM_MEMORY_COREDATA 45
#define TCPCI_OPT_SACK 0x00000002
#define __FINITE_MATH_ONLY__ 0
#define MACH_SEND_INTERRUPT 0x00000040
#define SQLITE_SYNC_DATAONLY 0x00010
#define IPV6_DEFAULT_MULTICAST_LOOP 1
#define TIME_MICROS_MAX (1000000)
#define KEV_DL_LINK_ADDRESS_CHANGED 16
#define VM_FLAGS_RESILIENT_MEDIA 0x0040
#define TASK_FLAVOR_CONTROL 0
#define TH_RST 0x04
#define _SC_XBS5_ILP32_OFFBIG 123
#define VM_PURGABLE_DEBUG_EMPTY (0x1 << VM_PURGABLE_DEBUG_SHIFT)
#define SQLITE_WARNING 28
#define _X86_INSTRUCTION_STATE_MAX_INSN_BYTES (2448 - 64 - 4)
#define RUSAGE_CHILDREN -1
#define err_get_sub(err) (((err)>>14)&0xfff)
#define _SC_SHARED_MEMORY_OBJECTS 39
#define KERN_EXCEPTION_PROTECTED 32
#define WIFEXITED(x) (_WSTATUS(x) == 0)
#define _MACH_HOST_INFO_H_ 
#define X86_PAGEIN_STATE_COUNT x86_PAGEIN_STATE_COUNT
#define ERANGE 34
#define PTRACE_PEEKUSER_ 3
#define SQLITE_OPEN_SHAREDCACHE 0x00020000
#define SWITCH_OPTION_DEPRESS 1
#define CLK_TCK __DARWIN_CLK_TCK
#define _EFAULT -14
#define DT_SOCK 12
#define SQLITE_NULL 5
#define use(...) __use(0, ##__VA_ARGS__)
#define SIGFPE 8
#define KERN_OPERATION_TIMED_OUT 49
#define CPU_SUBTYPE_MASK 0xff000000
#define VM_MEMORY_DHMM 84
#define VM_REGION_SUBMAP_INFO_V0_SIZE (VM_REGION_SUBMAP_INFO_V1_SIZE - sizeof (unsigned int) )
#define IPV6CTL_DEFHLIM 3
#define processor_set_MSG_COUNT 11
#define __SPI_DEPRECATED(...) 
#define MACH_RCV_BODY_ERROR 0x1000400c
#define HOST_NOTIFY_CALENDAR_CHANGE 0
#define INT_FAST8_MAX INT8_MAX
#define RLIMIT_RTPRIO_ 14
#define SOCK_DGRAM_ 2
#define CLOCK_ALARM_MAXRES 5
#define debugger __asm__("int3")
#define ETXTBSY 26
#define KERN_MISSING_KC 54
#define MACH_RCV_INVALID_NAME 0x10004002
#define __INT8_C(c) c
#define WCHAR_MAX __WCHAR_MAX__
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_4(x) 
#define _U_LONG 
#define I386_PGBYTES 4096
#define host_priv_MSG_COUNT 26
#define CPU_SUBTYPE_PENTIUM_3_M CPU_SUBTYPE_INTEL(8, 1)
#define MAX_SACK_BLKS 6
#define NSIG __DARWIN_NSIG
#define MAP_MEM_PURGABLE 0x040000
#define SQLITE_ACCESS_EXISTS 0
#define MEM_PAGES (1 << 20)
#define _CS_DARWIN_USER_DIR 65536
#define ACCESSX_MAX_DESCRIPTORS 100
#define MSG_PEEK 0x2
#define HOST_SEATBELT_PORT (7 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define CPU_TYPE_I860 ((cpu_type_t) 15)
#define __restrict restrict
#define _ENOTSOCK -88
#define _SC_BC_SCALE_MAX 11
#define __RequestUnion__host_priv_subsystem__defined 
#define TCPOPT_SACK_PERMITTED 4
#define CPU_STATE_NICE 3
#define SIG_BLOCK_ 0
#define IOPOL_VFS_CONTENT_PROTECTION_IGNORE 1
#define __SHRT_MAX__ 0x7fff
#define SQLITE_CHECKPOINT_TRUNCATE 3
#define w_stopval w_S.w_Stopval
#define __LDBL_MAX__ 1.18973149535723176502126385303097021e+4932L
#define PRIO_PGRP 1
#define ILL_ILLOPN 4
#define __FLT64X_MAX_10_EXP__ 4932
#define CLOCK_REALTIME_COARSE_ 5
#define IPPROTO_IDP 22
#define MACH_MSG_TYPE_COPY_RECEIVE 22
#define IP_UNBLOCK_SOURCE 73
#define MACH_RCV_GUARDED_DESC 0x00001000
#define IP_OLD_FW_RESETLOG 56
#define __IPHONE_10_0 100000
#define __IPHONE_10_1 100100
#define __IPHONE_10_2 100200
#define __IPHONE_10_3 100300
#define EXC_RPC_ALERT 9
#define __LDBL_IS_IEC_60559__ 2
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_1(x) 
#define IPPROTO_DIVERT 254
#define __NDR_convert__ 0
#define INT8_C(v) (v)
#define SET_MZI_COLLECTABLE_FLAG(val,flag) (val) = (flag) ? ((val) | 1) : (val)
#define sigmask(m) (1 << ((m)-1))
#define SQLITE_TESTCTRL_SORTER_MMAP 24
#define IPPROTO_ADFS 68
#define IPV6CTL_FORWARDING 1
#define MATTR_VAL_DCACHE_FLUSH 7
#define _EDOM -33
#define __SNPT 0x0800
#define CPU_SUBTYPE_INTEL(f,m) ((cpu_subtype_t) (f) + ((m) << 4))
#define VM_MEMORY_MALLOC_LARGE_REUSED 9
#define MACH_VOUCHER_ATTR_KEY_PTHPRIORITY ((mach_voucher_attr_key_t)4)
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define __alloc_size(...) __attribute__((alloc_size(__VA_ARGS__)))
#define _SC_THREAD_STACK_MIN 93
#define RENAME_EXCL 0x00000004
#define _EISCONN -106
#define SF_RES (1 << 2)
#define __FLT128_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F128
#define TASK_POWER_INFO_V2 26
#define IPPROTO_ARGUS 13
#define _SC_V6_LP64_OFF64 105
#define _SC_JOB_CONTROL 6
#define SOMAXCONN 128
#define TCP_MAX_WINSHIFT 14
#define O_EXCL_ (1 << 7)
#define FPE_FLTRES 4
#define __APPLE_CC__ 1
#define EINPROGRESS 36
#define SQLITE_INDEX_CONSTRAINT_ISNOT 69
#define NET_RT_IFLIST 3
#define _ENOENT -2
#define _SC_SEM_VALUE_MAX 50
#define MACH_MSG_IPC_SPACE 0x00002000
#define __WCHAR_MIN__ (-__WCHAR_MAX__ - 1)
#define INT_FAST8_MIN INT8_MIN
#define MACH_VOUCHER_ATTR_VALUE_FLAGS_NONE ((mach_voucher_attr_value_flags_t)0)
#define flatten __attribute__((flatten))
#define SIGTTIN_ 21
#define CPU_SUBTYPE_ARM_ALL ((cpu_subtype_t) 0)
#define WCHAR_MIN (-WCHAR_MAX-1)
#define IPV6CTL_RR_PRUNE 22
#define IN_ARE_ADDR_EQUAL(a,b) (bcmp(&(a)->s_addr, &(b)->s_addr, sizeof (struct in_addr)) == 0)
#define __FLT_EVAL_METHOD_TS_18661_3__ 0
#define P_EXEC (1 << 2)
#define SQLITE_CDECL 
#define KEV_INET_NEW_ADDR 1
#define _ENOTSUP _EOPNOTSUPP
#define VM_BEHAVIOR_CAN_REUSE ((vm_behavior_t) 10)
#define SQLITE_OPEN_WAL 0x00080000
#define IP_DUMMYNET_CONFIGURE 60
#define AF_E164 AF_ISDN
#define PF_KEY pseudo_AF_KEY
#define _PC_AUTH_OPAQUE_NP 14
#define TASK_EXC_GUARD_VM_ALL 0x0f
#define _MACH_HOST_NOTIFY_H_ 
#define MPG_FLAGS_IMMOVABLE_PINNED (0x01ull << 56)
#define CPUFAMILY_ARM_9 0xe73283ae
#define MEMORY_OBJECT_RETURN_NONE 0
#define _POSIX_READER_WRITER_LOCKS 200112L
#define SQLITE_FCNTL_BUSYHANDLER 15
#define VM_MEMORY_COREDATA_OBJECTIDS 46
#define SQLITE_DBSTATUS_CACHE_USED_SHARED 11
#define EDQUOT 69
#define _MACH_TASK_INFO_H_ 
#define AF_ECMA 8
#define _POSIX_AIO_MAX 1
#define LOCKGROUP_ATTR_STAT 0x01ULL
#define SIGTSTP_ 20
#define FD_SETSIZE __DARWIN_FD_SETSIZE
#define __LDBL_MAX_EXP__ 16384
#define CLOCK_PROCESS_CPUTIME_ID_ 2
#define HOST_MACH_MSG_TRAP 8
#define IPC_VOUCHER_NULL ((ipc_voucher_t) 0)
#define SQLITE_DENY 1
#define err_server err_system(0x2)
#define __printflike(fmtarg,firstvararg) __attribute__((__format__ (__printf__, fmtarg, firstvararg)))
#define _XOPEN_NAME_MAX 255
#define ENOTEMPTY 66
#define __TVOS_11_0 110000
#define __TVOS_11_1 110100
#define __TVOS_11_2 110200
#define _MACH_MACHINE_BOOLEAN_H_ 
#define UINT_FAST16_MAX UINT16_MAX
#define HOST_VM_INFO64_REV1_COUNT HOST_VM_INFO64_LATEST_COUNT
#define ENOTBLK 15
#define TCPOPT_CCNEW 12
#define __WINT_MIN__ (-__WINT_MAX__ - 1)
#define ELAST 106
#define TCPOLEN_SACK_PERMITTED 2
#define EPROTOTYPE 41
#define EFL_SET 0x00000002
#define _SC_SHELL 78
#define __pure2 __attribute__((__const__))
#define __TVOS_UNAVAILABLE 
#define printk ish_printk
#define SA_RESETHAND_ 0x80000000
#define SQLITE_CREATE_TEMP_TABLE 4
#define make_attr(_type,thing) ((struct attr) {.type = attr_ ##_type, ._type = thing})
#define MACH_MSG_TYPE_DISPOSE_RECEIVE 24
#define _OS_OSBYTEORDERI386_H 
#define IN6ADDR_V4MAPPED_INIT {{{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00 }}}
#define host_get_sysdiagnose_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_SYSDIAGNOSE_PORT, (port)))
#define CLOCK_REALTIME_ 0
#define __FLT128_MIN_10_EXP__ (-4931)
#define __FLT32X_IS_IEC_60559__ 2
#define VM_MEMORY_IOSURFACE 88
#define KEV_DL_AWDL_RESTRICTED 26
#define TCPOPT_SACK 5
#define htonl(x) __DARWIN_OSSwapInt32(x)
#define htons(x) __DARWIN_OSSwapInt16(x)
#define MAX_NAME 256
#define _POSIX_AIO_LISTIO_MAX 2
#define _SYS_SELECT_H_ 
#define MCAST_LEAVE_SOURCE_GROUP 83
#define __DARWIN_NBBY 8
#define __FLT128_MANT_DIG__ 113
#define EALREADY 37
#define AF_CNT 21
#define SOL_SOCKET_ 1
#define IPV6CTL_GIF_HLIM 19
#define SO_REUSEADDR 0x0004
#define __result_use_check __attribute__((__warn_unused_result__))
#define INADDR_CARP_GROUP (u_int32_t)0xe0000012
#define _POSIX_SYNCHRONIZED_IO (-1)
#define KERN_LOCK_SET_DESTROYED 38
#define MACH_MSG_VIRTUAL_COPY 1
#define FP_PREC_24B 0
#define PTHREAD_COND_INITIALIZER {_PTHREAD_COND_SIG_init, {0}}
#define TASK_BASE_LATENCY_QOS_POLICY 10
#define ERR_ROUTINE_NIL (mach_error_fn_t)0
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_15(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_16(x) x
#define __DARWIN_FD_SETSIZE 1024
#define SO_USELOOPBACK 0x0040
#define IP_RECVTTL_ 12
#define _Nonnull 
#define _CS_XBS5_LP64_OFF64_LDFLAGS 29
#define _UINTPTR_T 
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define TASK_FLAGS_INFO_COUNT ((mach_msg_type_number_t) (sizeof(task_flags_info_data_t) / sizeof (natural_t)))
#define TCPOLEN_CC 6
#define WSTOPPED 0x00000008
#define __PTRDIFF_WIDTH__ 64
#define IPPROTO_WSN 74
#define _STRUCT_X86_FLOAT_STATE32 struct __darwin_i386_float_state
#define _POSIX_THREAD_THREADS_MAX 64
#define __RequestUnion__task_subsystem__defined 
#define _STRUCT_X86_THREAD_STATE32 struct __darwin_i386_thread_state
#define IPPROTO_MAX 256
#define _STRUCT_X86_INSTRUCTION_STATE struct __x86_instruction_state
#define _POSIX_TIMEOUTS (-1)
#define MACH_VOUCHER_ATTR_KEY_IMPORTANCE ((mach_voucher_attr_key_t)2)
#define HTONL(x) (x) = htonl((__uint32_t)x)
#define SYNC_POLICY_ORDER_MASK 0x3
#define SCM_RIGHTS 0x01
#define HTONS(x) (x) = htons((__uint16_t)x)
#define _FORTIFY_SOURCE 2
#define __INT8_MAX__ 0x7f
#define _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS 5
#define SQLITE_CREATE_TABLE 2
#define IPPROTO_LARP 91
#define IP_MTU_DISCOVER_ 10
#define _SC_2_C_BIND 18
#define x86_AVX_STATE (x86_AVX_STATE32 + 2)
#define s6_addr __u6_addr.__u6_addr8
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_4(x) 
#define ICMP6_FILTER_ 1
#define COLL_WEIGHTS_MAX 2
#define _RPERM_OK (1<<19)
#define IOPOL_TYPE_VFS_IGNORE_PERMISSIONS 7
#define CHARCLASS_NAME_MAX 14
#define VM_MEMORY_CM_CRABS 96
#define NSEC_PER_SEC 1000000000ull
#define AF_RESERVED_36 36
#define EXC_I386_EXTOVRFLT 9
#define _STRUCT_SIGALTSTACK struct __darwin_sigaltstack
#define __sclearerr(p) ((void)((p)->_flags &= ~(__SERR|__SEOF)))
#define SQLITE_DROP_VTABLE 30
#define NAME_SERVER_SLOT 0
#define __IPV6_ADDR_SCOPE_GLOBAL 0x0e
#define IPV6_IPSEC_POLICY 28
#define HOST_VM_PURGABLE_COUNT ((mach_msg_type_number_t) (sizeof(host_purgable_info_data_t)/sizeof(integer_t)))
#define _STRUCT_X86_FLOAT_STATE64 struct __darwin_x86_float_state64
#define VM_FLAGS_PURGABLE 0x0002
#define SQLITE_OPEN_FILEPROTECTION_MASK 0x00700000
#define TASK_NAME_PORT 3
#define getchar_unlocked() getc_unlocked(stdin)
#define PRIO_PROCESS 0
#define _ENOBUFS -105
#define IN6_IS_ADDR_MULTICAST(a) ((a)->s6_addr[0] == 0xff)
#define HOST_NULL ((host_t) 0)
#define SQLITE_VTAB_CONSTRAINT_SUPPORT 1
#define _XOPEN_REALTIME_THREADS (-1)
#define USHRT_MAX (SHRT_MAX * 2 + 1)
#define _POSIX_CHILD_MAX 25
#define SQLITE_TESTCTRL_ALWAYS 13
#define CPU_TYPE_VAX ((cpu_type_t) 1)
#define LEDGER_ITEM_INFINITY ((ledger_item_t) (~0))
#define __options_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_open __enum_options
#define SQLITE_MISMATCH 20
#define SCHED_OTHER 1
#define HOST_MAX_SPECIAL_PORT HOST_IOCOMPRESSIONSTATS_PORT
#define SQLITE_ANY 5
#define __MAC_10_10_2 101002
#define __MAC_10_10_3 101003
#define VM_BEHAVIOR_WILLNEED ((vm_behavior_t) 4)
#define SIGINT_ 2
#define SQLITE_TESTCTRL_SCRATCHMALLOC 17
#define PTRACE_KILL_ 8
#define mach_vm_trunc_page(x) ((mach_vm_offset_t)(x) & ~((signed)vm_page_mask))
#define __END_DECLS 
#define __FLT64X_EPSILON__ 1.08420217248550443400745280086994171e-19F64x
#define _POSIX_V6_LPBIG_OFFBIG __LPBIG_OFFBIG
#define PF_INET6_ 10
#define __CONCAT(x,y) x ## y
#define SIG_IGN_ 1
#define _BSD_MACHINE_SIGNAL_H_ 
#define EMU_CPU_MEM_H 
#define TRACE_verbose TRACE__NOP
#define O_APPEND_ (1 << 10)
#define __STDC_HOSTED__ 1
#define HOST_PRIORITY_INFO 5
#define WAKEMON_DISABLE 0x02
#define VM_REGION_BASIC_INFO_64 9
#define HOST_IOCOMPRESSIONSTATS_PORT (25 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define MATTR_VAL_GET 2
#define SQLITE_FCNTL_MMAP_SIZE 18
#define MACH_MSG_TYPE_PORT_ANY_RIGHT(x) (((x) >= MACH_MSG_TYPE_MOVE_RECEIVE) && ((x) <= MACH_MSG_TYPE_MOVE_SEND_ONCE))
#define CPU_SUBTYPE_BIG_ENDIAN ((cpu_subtype_t) 1)
#define SQLITE_ACCESS_READ 2
#define CPU_OFFSET(field) offsetof(struct cpu_state, field)
#define VM_MEMORY_AUDIO 90
#define _STDIO_H_ 
#define SOCK_SEQPACKET 5
#define IOPOL_MATERIALIZE_DATALESS_FILES_OFF 1
#define _SECURE__COMMON_H_ 
#define memmove(dest,...) __builtin___memmove_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define SQLITE_UTF16 4
#define UID_MAX 2147483647U
#define THREAD_AFFINITY_TAG_NULL 0
#define _SC_2_PBS_MESSAGE 63
#define HOST_CALENDAR_SET_REPLYID 951
#define RPC_SUBSYSTEM_NULL ((rpc_subsystem_t) 0)
#define DTF_HIDEW 0x0001
#define IN6_IS_ADDR_UNIQUE_LOCAL(a) (((a)->s6_addr[0] == 0xfc) || ((a)->s6_addr[0] == 0xfd))
#define _READ_OK (1<<9)
#define IPV6_2292HOPLIMIT 20
#define SQLITE_DROP_TABLE 11
#define MACH_PORT_DENAP_RECEIVER 6
#define MACH_VOUCHER_ATTR_KEY_TEST ((mach_voucher_attr_key_t)8)
#define MATTR_VAL_GET_INFO 10
#define SO_NUMRCVPKT 0x1112
#define _XOPEN_ENH_I18N (1)
#define KEV_DL_MASTER_ELECTED 23
#define DEV_CHAR 1
#define MACH_PORT_STATUS_FLAG_GUARDED 0x02
#define _MACH_INIT_ 1
#define ALRMTYPE 0xff
#define TASK_TRACE_MEMORY_INFO_COUNT ((mach_msg_type_number_t) (sizeof(task_trace_memory_info_data_t) / sizeof(natural_t)))
#define POLICY_TIMESHARE_LIMIT_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_timeshare_limit)/sizeof(integer_t)))
#define KEV_DL_QOS_MODE_CHANGED 29
#define SIGURG 16
#define _SC_TZNAME_MAX 27
#define _EACCES -13
#define IP_IPSEC_POLICY 21
#define AC_F 0
#define _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS 12
#define DEBUG_all 0
#define IPPROTO_PIM 103
#define ATOMIC_CHAR16_T_LOCK_FREE __GCC_ATOMIC_CHAR16_T_LOCK_FREE
#define memcpy(dest,...) __builtin___memcpy_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define SQLITE_DBSTATUS_CACHE_MISS 8
#define EFL_USER_SET (EFL_IF)
#define __DBL_DIG__ 15
#define TIME_UTC 1
#define MACH_SEND_SYNC_BOOTSTRAP_CHECKIN 0x00800000
#define strncat(dest,...) __builtin___strncat_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define MACH_RCV_TRAILER_AV 7
#define x86_THREAD_FULL_STATE64 23
#define _MACH_NOTIFY_H_ 
#define VM_BEHAVIOR_DONTNEED ((vm_behavior_t) 5)
#define IP_ADD_SOURCE_MEMBERSHIP 70
#define SQLITE_OPEN_MASTER_JOURNAL 0x00004000
#define SQLITE_STATUS_SCRATCH_OVERFLOW 4
#define KEV_DL_SIFMTU 3
#define MACH_MSG_TYPE_POLYMORPHIC ((mach_msg_type_name_t) -1)
#define vsprintf(str,format,ap) __builtin___vsprintf_chk (str, 0, __darwin_obsz(str), format, ap)
#define MEM_PGDIR_SIZE (1 << 10)
#define KEV_DL_SIFMEDIA 5
#define _SC_SPORADIC_SERVER 81
#define host_get_lockd_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_LOCKD_PORT, (port)))
#define _U_INT64_T 
#define IPV6CTL_ADDRCTLPOLICY 38
#define LOCK_SH_ 1
#define _POSIX_SPAWN (-1)
#define __SHRT_WIDTH__ 16
#define SOCK_DGRAM 2
#define __TVOS_9_0 90000
#define __TVOS_9_1 90100
#define __TVOS_9_2 90200
#define IOPOL_IMPORTANT 1
#define SQLITE_SYSAPI 
#define SQLITE_REPLACE 5
#define VM_MEMORY_LIBDISPATCH 74
#define VM_MEMORY_IMAGEIO 70
#define SO_TIMESTAMP_MONOTONIC 0x0800
#define KERN_INVALID_HOST 22
#define TMP_MAX 308915776
#define __scanflike(fmtarg,firstvararg) __attribute__((__format__ (__scanf__, fmtarg, firstvararg)))
#define SQLITE_CONFIG_WIN32_HEAPSIZE 23
#define PTHREAD_CANCEL_ASYNCHRONOUS 0x00
#define _MACH_PROCESSOR_INFO_H_ 
#define SA_ONSTACK 0x0001
#define IOPOL_TYPE_DISK 0
#define MACH_PORT_INDEX(name) ((name) >> 8)
#define _EMLINK -31
#define IPV6CTL_RTMAXCACHE 27
#define MACH_TASK_INSPECT_H 
#define VM_MEMORY_FOUNDATION 41
#define ILL_ILLADR 5
#define VM_MEMORY_SBRK 5
#define _ELIBMAX -82
#define __LDBL_MIN__ 3.36210314311209350626267781732175260e-4932L
#define AF_UNSPEC 0
#define SQLITE_DBCONFIG_RESET_DATABASE 1009
#define __API_DEPRECATED_MSG_GET_MACRO(...) 
#define SIGQUIT 3
#define IPPROTO_IPEIP 94
#define SQLITE_INDEX_CONSTRAINT_GLOB 66
#define MIG_EXCEPTION -306
#define P_COW (1 << 4)
#define CPU_SUBTYPE_ITANIUM CPU_SUBTYPE_INTEL(11, 0)
#define SO_PEERCRED_ 17
#define _BLKCNT_T 
#define SQLITE_IOERR_MMAP (SQLITE_IOERR | (24<<8))
#define TCPCI_OPT_WSCALE 0x00000004
#define CPU_TYPE_POWERPC64 (CPU_TYPE_POWERPC | CPU_ARCH_ABI64)
#define VM_PURGABLE_VOLATILE 1
#define SQLITE_LAST_ERRNO SQLITE_FCNTL_LAST_ERRNO
#define __DEQUALIFY(type,var) __CAST_AWAY_QUALIFIER(var, const volatile, type)
#define _REXT_OK (1<<17)
#define MACH_PORT_DEAD ((mach_port_name_t) ~0)
#define MACH_PORT_NULL 0
#define _SC_THREAD_PROCESS_SHARED 90
#define SQLITE_CONFIG_HEAP 8
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_3(x) 
#define _WCHAR_T_ 
#define IPV6_2292DSTOPTS 23
#define SO_NET_SERVICE_TYPE 0x1116
#define list_for_each(list,item) for (item = (list)->next; item != (list); item = item->next)
#define PF_RTIP pseudo_AF_RTIP
#define IPPROTO_DONE 257
#define IP_FW_DEL 41
#define MACH_MSGH_BITS_HAS_REMOTE(bits) (MACH_MSGH_BITS_REMOTE(bits) != MACH_MSGH_BITS_ZERO)
#define EPERM 1
#define SQLITE_FCNTL_BEGIN_ATOMIC_WRITE 31
#define MACH_PORT_TYPE_SEND_RECEIVE (MACH_PORT_TYPE_SEND|MACH_PORT_TYPE_RECEIVE)
#define CPU_SUBTYPE_PENT CPU_SUBTYPE_INTEL(5, 0)
#define MACH_MSG_SIZE_RELIABLE ((mach_msg_size_t) 256 * 1024)
#define IPCTL_RTEXPIRE 5
#define __DARWIN_BYTE_ORDER __DARWIN_LITTLE_ENDIAN
#define INADDR_ALLRTRS_GROUP (u_int32_t)0xe0000002
#define _POSIX2_PBS_ACCOUNTING (-1)
#define __enum_closed_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_closed
#define SQLITE_DETACH 25
#define SQLITE_DBCONFIG_ENABLE_VIEW 1015
#define host_set_telemetry_port(host,port) (host_set_special_port((host), HOST_TELEMETRY_PORT, (port)))
#define _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS 6
#define __LONG_LONG_WIDTH__ 64
#define __Request__lock_set_subsystem__defined 
#define SQLITE_DROP_VIEW 17
#define SQLITE_MUTEX_FAST 0
#define __MAC_10_7 1070
#define atomic_signal_fence(MO) __atomic_signal_fence (MO)
#define __AVAILABILITY_VERSIONS__ 
#define MACH_MSG_PHYSICAL_COPY 0
#define __SIZEOF_LONG__ 8
#define _PC_MAX_INPUT 3
#define __DARWIN_1050INODE64(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_64_BIT_INO_T)
#define VM_MEMORY_COREPROFILE 71
#define SQLITE_IOERR_SEEK (SQLITE_IOERR | (22<<8))
#define KEV_INET_ARPRTRFAILURE 9
#define __AVAILABILITY_INTERNAL_REGULAR 
#define IPPROTO_PRM 21
#define __DARWIN_WEOF ((__darwin_wint_t)-1)
#define _SYS__TYPES_H_ 
#define IPV6PORT_RESERVEDMIN 600
#define VM_MEMORY_VIDEOBITSTREAM 91
#define __GNUC__ 11
#define __APPLE__ 1
#define __UINT16_C(c) c
#define ELOOP 62
#define IP_TRAFFIC_MGT_BACKGROUND 65
#define TASK_EVENTS_INFO 2
#define IPPROTO_ST 7
#define TASK_VM_INFO_REV5_COUNT TASK_VM_INFO_COUNT
#define SQLITE_SERIALIZE_NOCOPY 0x001
#define NET_SERVICE_TYPE_RV 5
#define MACH_VOUCHER_NAME_ARRAY_NULL ((mach_voucher_name_array_t) 0)
#define subsystem_to_name_map_mach_port { "mach_port_names", 3200 }, { "mach_port_type", 3201 }, { "mach_port_rename", 3202 }, { "mach_port_allocate_name", 3203 }, { "mach_port_allocate", 3204 }, { "mach_port_destroy", 3205 }, { "mach_port_deallocate", 3206 }, { "mach_port_get_refs", 3207 }, { "mach_port_mod_refs", 3208 }, { "mach_port_peek", 3209 }, { "mach_port_set_mscount", 3210 }, { "mach_port_get_set_status", 3211 }, { "mach_port_move_member", 3212 }, { "mach_port_request_notification", 3213 }, { "mach_port_insert_right", 3214 }, { "mach_port_extract_right", 3215 }, { "mach_port_set_seqno", 3216 }, { "mach_port_get_attributes", 3217 }, { "mach_port_set_attributes", 3218 }, { "mach_port_allocate_qos", 3219 }, { "mach_port_allocate_full", 3220 }, { "task_set_port_space", 3221 }, { "mach_port_get_srights", 3222 }, { "mach_port_space_info", 3223 }, { "mach_port_dnrequest_info", 3224 }, { "mach_port_kernel_object", 3225 }, { "mach_port_insert_member", 3226 }, { "mach_port_extract_member", 3227 }, { "mach_port_get_context", 3228 }, { "mach_port_set_context", 3229 }, { "mach_port_kobject", 3230 }, { "mach_port_construct", 3231 }, { "mach_port_destruct", 3232 }, { "mach_port_guard", 3233 }, { "mach_port_unguard", 3234 }, { "mach_port_space_basic_info", 3235 }, { "mach_port_guard_with_flags", 3237 }, { "mach_port_swap_guard", 3238 }, { "mach_port_kobject_description", 3239 }
#define SS_DISABLE_ 2
#define IP_RSVP_OFF 16
#define SO_DONTTRUNC 0x2000
#define _POSIX2_RE_DUP_MAX 255
#define MACH_PORT_RIGHT_SEND_ONCE ((mach_port_right_t) 2)
#define x86_INSTRUCTION_STATE 24
#define SQLITE_DESERIALIZE_READONLY 4
#define FIONCLEX_ 0x5450
#define x86_FLOAT_STATE32_COUNT ((mach_msg_type_number_t) (sizeof(x86_float_state32_t)/sizeof(unsigned int)))
#define SQLITE_CONFIG_PCACHE 14
#define MACH_VOUCHER_ATTR_SET_VALUE_HANDLE ((mach_voucher_attr_recipe_command_t)3)
#define superuser() (current != NULL && current->euid == 0)
#define _ENETUNREACH -101
#define KERN_SUCCESS 0
#define OSReadBigInt16(base,byteOffset) OSReadSwapInt16(base, byteOffset)
#define __IPHONE_8_2 80200
#define _MACH_DEBUG_IPC_INFO_H_ 
#define __APPLE_API_STABLE 
#define VM_SYNC_REUSABLEPAGES ((vm_sync_t) 0x40)
#define CPU_THREADTYPE_NONE ((cpu_threadtype_t) 0)
#define SQLITE_INDEX_CONSTRAINT_GE 32
#define SQLITE_FCNTL_COMMIT_ATOMIC_WRITE 32
#define IPPROTO_PUP 12
#define CPUFAMILY_INTEL_BROADWELL 0x582ed09c
#define TCP_MAXOLEN (TCP_MAXHLEN - sizeof(struct tcphdr))
#define atomic_fetch_sub_explicit(PTR,VAL,MO) __atomic_fetch_sub ((PTR), (VAL), (MO))
#define ENOTSOCK 38
#define _ENOTTY -25
#define OSReadBigInt32(base,byteOffset) OSReadSwapInt32(base, byteOffset)
#define MIG_NO_REPLY -305
#define MACH_MSG_TYPE_MAKE_SEND_ONCE 21
#define MACH_MSG_OVERWRITE 3
#define RLIMIT_CORE 4
#define ARG_MAX (1024 * 1024)
#define LOAD_SCALE 1000
#define ENOSR 98
#define err_sub(x) (((x)&0xfff)<<14)
#define IPPROTO_TCF 87
#define MAC_OS_X_VERSION_10_14_1 101401
#define MAC_OS_X_VERSION_10_14_4 101404
#define MAC_OS_X_VERSION_10_14_6 101406
#define TASK_POWER_INFO_V2_COUNT ((mach_msg_type_number_t) (sizeof (task_power_info_v2_data_t) / sizeof (natural_t)))
#define SQLITE_CONSTRAINT_TRIGGER (SQLITE_CONSTRAINT | (7<<8))
#define _V6_ILP32_OFFBIG __ILP32_OFFBIG
#define __FLT64_MANT_DIG__ 53
#define TASK_AUDIT_TOKEN_COUNT (sizeof(audit_token_t) / sizeof(natural_t))
#define VM_DYLD64 ((user_addr_t) 0x00007FFF5FC00000ULL)
#define SQLITE_SYNC_FULL 0x00003
#define SQLITE_FCNTL_LOCK_TIMEOUT 34
#define strncpy(dest,...) __builtin___strncpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define VM_PAGE_QUERY_PAGE_REF 0x4
#define EXC_I386_DBLFLT 8
#define HOST_PREFERRED_USER_ARCH_COUNT ((mach_msg_type_number_t) (sizeof(host_preferred_user_arch_data_t)/sizeof(integer_t)))
#define OSReadBigInt64(base,byteOffset) OSReadSwapInt64(base, byteOffset)
#define SQLITE_REINDEX 27
#define IPPROTO_IPIP IPPROTO_IPV4
#define MPG_STRICT 0x01
#define LSEEK_END 2
#define SONPX_SETOPTSHUT 0x000000001
#define _T_PTRDIFF 
#define MACH_SEND_TRAILER 0x00020000
#define __DARWIN_ALIAS_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_NON_CANCELABLE __DARWIN_SUF_UNIX03)
#define HOST_CPU_LOAD_INFO_COUNT ((mach_msg_type_number_t) (sizeof (host_cpu_load_info_data_t) / sizeof (integer_t)))
#define __DARWIN_ALIAS_I(sym) __asm("_" __STRING(sym) __DARWIN_SUF_64_BIT_INO_T __DARWIN_SUF_UNIX03)
#define atomic_store_explicit(PTR,VAL,MO) __extension__ ({ __auto_type __atomic_store_ptr = (PTR); __typeof__ ((void)0, *__atomic_store_ptr) __atomic_store_tmp = (VAL); __atomic_store (__atomic_store_ptr, &__atomic_store_tmp, (MO)); })
#define host_set_audit_control_port(host,port) (host_set_special_port((host), HOST_AUDIT_CONTROL_PORT, (port)))
#define CLD_EXITED 1
#define UINT_LEAST8_MAX UINT8_MAX
#define _INO_T 
#define IPV6_2292PKTOPTIONS 25
#define CLD_NOOP 0
#define KMOD_DECL(name,version) static kmod_start_func_t name ## _module_start; static kmod_stop_func_t name ## _module_stop; kmod_info_t KMOD_INFO_NAME = { 0, KMOD_INFO_VERSION, -1U, { #name }, { version }, -1, 0, 0, 0, 0, name ## _module_start, name ## _module_stop };
#define __STDC_VERSION__ 201710L
#define _ENOMEM -12
#define IN6_IS_ADDR_LINKLOCAL(a) (((a)->s6_addr[0] == 0xfe) && (((a)->s6_addr[1] & 0xc0) == 0x80))
#define MACH_RCV_TRAILER_NULL 0
#define SO_TIMESTAMP_ 29
#define PF_FLAG (1 << 2)
#define VM_MAP_READ_NULL ((vm_map_read_t) 0)
#define L_ctermid 1024
#define IPPROTO_IGP 85
#define EFL_USER_CLEAR (EFL_IOPL|EFL_NT|EFL_RF)
#define has_feature __has_feature
#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
#define FD_SET(n,p) __DARWIN_FD_SET(n, p)
#define __FLT_HAS_DENORM__ 1
#define __SIZEOF_LONG_DOUBLE__ 16
#define _SS_PAD2SIZE (_SS_MAXSIZE - sizeof(__uint8_t) - sizeof(sa_family_t) - _SS_PAD1SIZE - _SS_ALIGNSIZE)
#define __TVOS_14_5 140500
#define MACH_RCV_LARGE_IDENTITY 0x00000008
#define __compiler_barrier() __asm__ __volatile__("" ::: "memory")
#define VM_REGION_SUBMAP_INFO_V2_SIZE (sizeof (vm_region_submap_info_data_64_t))
#define IPPROTO_TCP 6
#define IO_NUM_PRIORITIES 4
#define CPUFAMILY_INTEL_ICELAKE 0x38435547
#define IP_RSVP_ON 15
#define THREAD_KERNEL_PORT 1
#define _SC_ARG_MAX 1
#define VM_FLAGS_SUPERPAGE_NONE (SUPERPAGE_NONE << VM_FLAGS_SUPERPAGE_SHIFT)
#define INT_FAST16_MIN INT16_MIN
#define SI_USER_ 0
#define DT_BLK 6
#define IPPROTO_3PC 34
#define ATOMIC_SHORT_LOCK_FREE __GCC_ATOMIC_SHORT_LOCK_FREE
#define ATOMIC_BOOL_LOCK_FREE __GCC_ATOMIC_BOOL_LOCK_FREE
#define SQLITE_APICALL 
#define SSIZE_MAX LONG_MAX
#define KEV_DL_IF_IDLE_ROUTE_REFCNT 18
#define SQLITE_IOCAP_POWERSAFE_OVERWRITE 0x00001000
#define SEEK_CUR 1
#define AF_LOCAL AF_UNIX
#define VM_PROT_NO_CHANGE ((vm_prot_t) 0x08)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_0(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_3(x) x
#define AF_ROUTE 17
#define PTRACE_EVENT_FORK_ 1
#define __darwin_obsz(object) __builtin_object_size (object, _USE_FORTIFY_LEVEL > 1 ? 1 : 0)
#define _EINPROGRESS -115
#define SUPERPAGE_SIZE_2MB 2
#define IP_PORTRANGE_LOW 2
#define MACH_RCV_IN_SET 0x1000400a
#define TCPCI_OPT_TIMESTAMPS 0x00000001
#define _ECONNREFUSED -111
#define _NETINET_IN_H_ 
#define __WATCHOS_2_0 20000
#define __WATCHOS_2_1 20100
#define __WATCHOS_2_2 20200
#define SO_UPCALLCLOSEWAIT 0x1027
#define _POSIX_HOST_NAME_MAX 255
#define PRIO_DARWIN_PROCESS 4
#define _POSIX_CHOWN_RESTRICTED 200112L
#define TH_ECE 0x40
#define KEV_INET6_ADDR_DELETED 3
#define EXC_SOFTWARE 5
#define _TIME_T 
#define MACH_MSG_STRICT_REPLY 0x00000200
#define MSG_DONTROUTE 0x4
#define _I386_SIGNAL_H_ 1
#define IPPROTO_HELLO 63
#define IPPROTO_IPPC 67
#define __WCHAR_TYPE__ int
#define PTRACE_PEEKTEXT_ 1
#define IPPROTO_OSPFIGP 89
#define __DARWIN_1050ALIAS_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_NON_CANCELABLE __DARWIN_SUF_UNIX03)
#define _SC_XOPEN_REALTIME_THREADS 112
#define MEMORY_OBJECT_COPY_INVALID 5
#define TASK_AFFINITY_TAG_INFO_COUNT (sizeof(task_affinity_tag_info_data_t) / sizeof(natural_t))
#define FPE_FLTDIV 1
#define __IPHONE_3_2 30200
#define SIGUSR1_ 10
#define MSG_WAITALL_ 0x100
#define CONNECT_DATA_AUTHENTICATED 0x4
#define SQLITE_SHM_NLOCK 8
#define CPU_SUBTYPE_CELERON CPU_SUBTYPE_INTEL(7, 6)
#define FP_287 2
#define __DBL_HAS_INFINITY__ 1
#define _T_PTRDIFF_ 
#define MAP_MEM_NAMED_CREATE 0x020000
#define IOPOL_SCOPE_PROCESS 0
#define IPPROTO_INP 32
#define SEGV_ACCERR_ 2
#define _PC_SYMLINK_MAX 24
#define W_EXITCODE(ret,sig) ((ret) << 8 | (sig))
#define TASK_WAIT_STATE_INFO 25
#define SQLITE_SCANSTAT_EXPLAIN 4
#define KERN_POLICY_STATIC 51
#define KERN_LOCK_UNSTABLE 39
#define RSIZE_MAX (SIZE_MAX >> 1)
#define IP_STRIPHDR 23
#define TASK_POWER_INFO 21
#define IP_RSVP_VIF_OFF 18
#define _EREMCHG -78
#define __DTF_READALL 0x0008
#define MACH_VOUCHER_IMPORTANCE_ATTR_ADD_EXTERNAL 1
#define __DARWIN_OS_INLINE static inline
#define stdin __stdinp
#define _PC_2_SYMLINKS 15
#define EXCEPTION_DEFAULT 1
#define __HAVE_SPECULATION_SAFE_VALUE 1
#define __XNU_PRIVATE_EXTERN __attribute__((visibility("hidden")))
#define __null_unspecified 
#define TASK_VM_INFO_REV1_COUNT ((mach_msg_type_number_t) (TASK_VM_INFO_REV2_COUNT - 4))
#define NDR_INT_LITTLE_ENDIAN 1
#define SQLITE_DBSTATUS_CACHE_SPILL 12
#define IP_FAITH 22
#define SCHED_FIFO 4
#define AF_SYSTEM 32
#define SQLITE_STMTSTATUS_MEMUSED 99
#define _POSIX_PATH_MAX 256
#define TASK_INSPECT_BASIC_COUNTS_COUNT (sizeof(struct task_inspect_basic_counts) / sizeof(natural_t))
#define CPU_SUBTYPE_486 CPU_SUBTYPE_INTEL(4, 0)
#define KOBJECT_DESCRIPTION_LENGTH 512
#define BUS_NOOP 0
#define MACH_MSG_TYPE_PORT_SEND_ONCE MACH_MSG_TYPE_MOVE_SEND_ONCE
#define ENOATTR 93
#define HOST_SYSPOLICYD_PORT (22 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define THREAD_STATE_MAX I386_THREAD_STATE_MAX
#define AF_CHAOS 5
#define IPPROTO_IPV4 4
#define IPPROTO_IPV6 41
#define MS_NODEV_ (1 << 2)
#define PTHREAD_CANCEL_ENABLE 0x01
#define SIGCONT_ 18
#define VM_BEHAVIOR_RANDOM ((vm_behavior_t) 1)
#define VM_PURGABLE_PURGE_ALL ((vm_purgable_t) 2)
#define _PC_REC_MAX_XFER_SIZE 21
#define __FLT32X_HAS_DENORM__ 1
#define IN6_IS_ADDR_6TO4(x) (ntohs((x)->s6_addr16[0]) == 0x2002)
#define __INT_FAST16_TYPE__ short int
#define SQLITE_OPEN_SUBJOURNAL 0x00002000
#define SA_64REGSET 0x0200
#define TID_NULL ((uint64_t) 0)
#define PROC_FLAG_IOS_APPLEDAEMON 0x20000
#define _EISNAM -120
#define MACH_VOUCHER_ATTR_BITS_STORE MACH_VOUCHER_ATTR_USER_DATA_STORE
#define TASK_EXTMOD_INFO 19
#define __MMX_WITH_SSE__ 1
#define _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS 11
#define __WATCHOS_UNAVAILABLE 
#define SCHED_RR 2
#define _POSIX_NO_TRUNC 200112L
#define _SC_V6_ILP32_OFF32 103
#define SQLITE_LIMIT_ATTACHED 7
#define atomic_fetch_xor_explicit(PTR,VAL,MO) __atomic_fetch_xor ((PTR), (VAL), (MO))
#define _POSIX_REGEXP 200112L
#define _SC_CHILD_MAX 2
#define SQLITE_DBCONFIG_DEFENSIVE 1010
#define __IPHONE_3_0 30000
#define __IPHONE_3_1 30100
#define DEBUG_debug DEBUG_all
#define RUSAGE_INFO_V1 1
#define x86_INSTRUCTION_STATE_COUNT ((mach_msg_type_number_t)(sizeof(x86_instruction_state_t) / sizeof(int)))
#define MEM_WRITE_PTRACE 2
#define CPU_SUBTYPE_PTRAUTH_ABI 0x80000000
#define MSG_EOR 0x8
#define VM_PAGE_QUERY_PAGE_CS_NX 0x400
#define MACH_PORTS_SLOTS_USED 3
#define _EBADF -9
#define _POSIX_RE_DUP_MAX _POSIX2_RE_DUP_MAX
#define SO_PROTOCOL_ 38
#define MAC_OS_X_VERSION_10_10_3 101003
#define _POSIX_SPORADIC_SERVER (-1)
#define __FLT128_HAS_INFINITY__ 1
#define MACH_PORT_SRIGHTS_PRESENT 1
#define VM_LEDGER_TAG_MEDIA 0x00000003
#define THREAD_INSPECT_PORT 2
#define IPC_SPACE_INSPECT_NULL ((ipc_space_inspect_t) 0)
#define IP_RECVPKTINFO IP_PKTINFO
#define MIG_ROUTINE_DESCRIPTOR_NULL ((mig_routine_descriptor_t)0)
#define SQLITE_ACCESS_READWRITE 1
#define _POSIX_MEMORY_PROTECTION 200112L
#define O_CLOEXEC_ (1 << 19)
#define MAP_MEM_POSTED 6
#define _STRUCT_X86_AVX512_STATE32 struct __darwin_i386_avx512_state
#define true 1
#define SA_RESETHAND 0x0004
#define __TVOS_10_0_1 100001
#define _SC_RAW_SOCKETS 119
#define _FSTDIO 
#define __OS_EXTENSION_UNAVAILABLE(_msg) __OSX_EXTENSION_UNAVAILABLE(_msg) __IOS_EXTENSION_UNAVAILABLE(_msg)
#define VM_FLAGS_ANYWHERE 0x0001
#define _POSIX2_LOCALEDEF 200112L
#define MACH_VOUCHER_ATTR_NOOP ((mach_voucher_attr_recipe_command_t)0)
#define PF_PUP AF_PUP
#define MACH_CORE_FILEHEADER_SIGNATURE 0x0063614d20646152ULL
#define IN_LOOPBACKNET 127
#define __RequestUnion__processor_set_subsystem__defined 
#define CPU_SUBTYPE_PENTPRO CPU_SUBTYPE_INTEL(6, 1)
#define _POSIX_LINK_MAX 8
#define _SC_THREAD_SPORADIC_SERVER 92
#define __SOFF 0x1000
#define SQLITE_ERROR_RETRY (SQLITE_ERROR | (2<<8))
#define MACH_RCV_SCATTER_SMALL 0x1000400e
#define __FLT32_MAX__ 3.40282346638528859811704183484516925e+38F32
#define x86_PAGEIN_STATE_COUNT ((mach_msg_type_number_t)(sizeof(x86_pagein_state_t) / sizeof(int)))
#define __SSTR 0x0200
#define MACH_MSGH_BITS_IMPHOLDASRT 0x10000000U
#define EXC_EMULATION 4
#define __kpi_unavailable 
#define TASK_READ_NULL ((task_read_t) 0)
#define __Request__processor_subsystem__defined 
#define MACH_NOTIFY_DEAD_NAME (MACH_NOTIFY_FIRST + 010)
#define __SNBF 0x0002
#define PTHREAD_RECURSIVE_MUTEX_INITIALIZER {_PTHREAD_RECURSIVE_MUTEX_SIG_init, {0}}
#define _SS_PAD1SIZE (_SS_ALIGNSIZE - sizeof(__uint8_t) - sizeof(sa_family_t))
#define PDP_ENDIAN __DARWIN_PDP_ENDIAN
#define HOST_INFO_MAX (1024)
#define PF_ISDN AF_ISDN
#define SQLITE_MUTEX_STATIC_LRU2 7
#define __unavailable 
#define _SC_STREAM_MAX 26
#define SQLITE_FCNTL_WIN32_AV_RETRY 9
#define __amd64 1
#define POLICY_TIMESHARE_INFO_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_timeshare_info)/sizeof(integer_t)))
#define VM_VOLATILE_ORDER_MASK (1 << VM_VOLATILE_ORDER_SHIFT)
#define MACH_MSG_ALLOCATE 2
#define BUS_OBJERR 3
#define __strfmonlike(fmtarg,firstvararg) __attribute__((__format__ (__strfmon__, fmtarg, firstvararg)))
#define SEGV_MAPERR 1
#define IOPOL_VFS_CONTENT_PROTECTION_DEFAULT 0
#define __PTHREAD_ONCE_SIZE__ 8
#define VM_REGION_BASIC_INFO_COUNT_64 ((mach_msg_type_number_t) (sizeof(vm_region_basic_info_data_64_t)/sizeof(int)))
#define EXC_I386_EXTERR 5
#define _PTRDIFF_T_DECLARED 
#define SQLITE_CORRUPT 11
#define _SC_2_PBS_LOCATE 62
#define SQLITE_STATUS_PAGECACHE_USED 1
#define SQLITE_FCNTL_WAL_BLOCK 24
#define __strncpy_safe __attribute__((nonstring))
#define SM_PRIVATE_ALIASED 6
#define MAP_MEM_VM_COPY 0x200000
#define ENAMETOOLONG 63
#define HOST_USER_NOTIFICATION_PORT (3 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define _CS_DARWIN_USER_TEMP_DIR 65537
#define __FLT32_HAS_QUIET_NAN__ 1
#define MCAST_EXCLUDE 2
#define VM_MEMORY_ROSETTA_ARENA 236
#define _NETINET6_IN6_H_ 
#define CPU_SUBTYPE_PENTIUM_4_M CPU_SUBTYPE_INTEL(10, 1)
#define SIGBUS_ 7
#define ECONNABORTED 53
#define IPPROTO_AH 51
#define __SIZEOF_SIZE_T__ 8
#define __DARWIN_ALIAS_STARTING(_mac,_iphone,x) __DARWIN_ALIAS_STARTING_MAC_ ##_mac(x)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_0(x) 
#define __offsetof(type,field) __builtin_offsetof(type, field)
#define MACH_NOTIFY_FIRST 0100
#define _WCHAR_T 
#define MIG_BAD_ARGUMENTS -304
#define KERN_NOT_IN_SET 12
#define PTHREAD_MUTEX_INITIALIZER {_PTHREAD_MUTEX_SIG_init, {0}}
#define NET_SERVICE_TYPE_BK 1
#define WAKEMON_MAKE_FATAL 0x10
#define POLICY_TIMESHARE_BASE_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_timeshare_base)/sizeof(integer_t)))
#define TODO(msg,...) die("TODO: " msg, ##__VA_ARGS__)
#define SIG_BLOCK 1
#define P_READ (1 << 0)
#define __DARWIN_FD_ZERO(p) __builtin_bzero(p, sizeof(*(p)))
#define POLICYCLASS_FIXEDPRI (POLICY_RR | POLICY_FIFO)
#define MACH_PORT_QLIMIT_KERNEL (65534)
#define __FLT64X_MIN_EXP__ (-16381)
#define MACH_PORT_DNREQUESTS_SIZE_COUNT 1
#define IPV6_PORTRANGE_DEFAULT 0
#define SIZE_MAX UINTPTR_MAX
#define PRIO_DARWIN_THREAD 3
#define POLICY_RR 2
#define _PTRDIFF_T 
#define _processor_user_ 
#define IPPROTO_BLT 30
#define IPV6_FW_DEL 31
#define __IPHONE_11_0 110000
#define __IPHONE_11_1 110100
#define __IPHONE_11_2 110200
#define __IPHONE_11_3 110300
#define __IPHONE_11_4 110400
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
#define CPUFAMILY_INTEL_PENRYN 0x78ea4fbc
#define KERNEL_MM_H 
#define INADDR_LOOPBACK (u_int32_t)0x7f000001
#define MACH_PORT_MAKE(index,gen) (((index) << 8) | (gen) >> 24)
#define _GCC_WCHAR_T 
#define __FLT32_MAX_EXP__ 128
#define SO_NKE 0x1021
#define MATTR_VAL_OFF 0
#define IP_DUMMYNET_DEL 61
#define IPV6_UNICAST_HOPS_ 16
#define HOST_EXTMOD_INFO64_LATEST_COUNT HOST_EXTMOD_INFO64_COUNT
#define mach_msg_kind_t mach_port_seqno_t
#define __SOPT 0x0400
#define pthread_cleanup_push(func,val) { struct __darwin_pthread_handler_rec __handler; pthread_t __self = pthread_self(); __handler.__routine = func; __handler.__arg = val; __handler.__next = __self->__cleanup_stack; __self->__cleanup_stack = &__handler;
#define IPPORT_RESERVEDSTART 600
#define _DARWIN_FEATURE_64_BIT_INODE 1
#define x86_AVX512_STATE_COUNT ((mach_msg_type_number_t) (sizeof(x86_avx512_state_t)/sizeof(unsigned int)))
#define VM_64_BIT_DATA_OBJECTS 
#define TRAP_TRACE_ 2
#define __DARWIN_ALIGN(p) ((__darwin_size_t)((__darwin_size_t)(p) + __DARWIN_ALIGNBYTES) &~ __DARWIN_ALIGNBYTES)
#define CPU_SUBTYPE_ARM64_PTR_AUTH_MASK 0x0f000000
#define PTRACE_GETFPREGS_ 14
#define IPV6CTL_PREFER_TEMPADDR 37
#define MSG_SEND 0x1000
#define KEV_DL_SIFFLAGS 1
#define THREAD_TIME_CONSTRAINT_POLICY 2
#define SQLITE_TESTCTRL_LAST 29
#define FPS_C0 0x0100
#define FPS_C1 0x0200
#define FPS_C2 0x0400
#define FPS_C3 0x4000
#define ADD_MACH_TIMESPEC(t1,t2) do { if (((t1)->tv_nsec += (t2)->tv_nsec) >= (long) NSEC_PER_SEC) { (t1)->tv_nsec -= (long) NSEC_PER_SEC; (t1)->tv_sec += 1; } (t1)->tv_sec += (t2)->tv_sec; } while (0)
#define __GXX_ABI_VERSION 1016
#define IFTODT(mode) (((mode) & 0170000) >> 12)
#define _SC_PAGESIZE 29
#define UINT_LEAST16_MAX UINT16_MAX
#define __OS_AVAILABILITY_MSG(_target,_availability,_msg) 
#define __DARWIN_FD_SET(n,p) __darwin_fd_set((n), (p))
#define IP_MIN_MEMBERSHIPS 31
#define LOCKGROUP_MAX_NAME 64
#define atomic_exchange_explicit(PTR,VAL,MO) __extension__ ({ __auto_type __atomic_exchange_ptr = (PTR); __typeof__ ((void)0, *__atomic_exchange_ptr) __atomic_exchange_val = (VAL); __typeof__ ((void)0, *__atomic_exchange_ptr) __atomic_exchange_tmp; __atomic_exchange (__atomic_exchange_ptr, &__atomic_exchange_val, &__atomic_exchange_tmp, (MO)); __atomic_exchange_tmp; })
#define SQLITE_DEPRECATED 
#define FPS_DE 0x0002
#define _EMSGSIZE -90
#define SQLITE_WARNING_AUTOINDEX (SQLITE_WARNING | (1<<8))
#define TASK_ACCESS_PORT 9
#define DF_FLAG (1 << 10)
#define __DEVOLATILE(type,var) __CAST_AWAY_QUALIFIER(var, volatile, type)
#define pseudo_AF_RTIP 22
#define _SC_READER_WRITER_LOCKS 76
#define SO_TYPE_ 3
#define VM_NAMED_ENTRY_NULL ((vm_named_entry_t) 0)
#define TH_ACK 0x10
#define _BSD_I386__TYPES_H_ 
#define FPS_TOS 0x3800
#define EXC_I386_INTOFLT 4
#define IPPROTO_IL 40
#define SQLITE_CHECKPOINT_FULL 1
#define IPPROTO_IP 0
#define UINT32_MAX 4294967295U
#define _MACH_H_ 
#define _POSIX_SHELL 200112L
#define SQLITE_INDEX_CONSTRAINT_LIKE 65
#define WNOHANG 0x00000001
#define _BSD_MACHINE__TYPES_H_ 
#define OSSwapBigToHostConstInt16(x) OSSwapConstInt16(x)
#define SUPERPAGE_SIZE_ANY 1
#define SQLITE_IOERR_ROLLBACK_ATOMIC (SQLITE_IOERR | (31<<8))
#define MACH_RCV_OVERWRITE 0x00000000
#define RLIMIT_SIGPENDING_ 11
#define SQLITE_ALTER_TABLE 26
#define THREAD_EXTENDED_INFO_COUNT ((mach_msg_type_number_t) (sizeof(thread_extended_info_data_t) / sizeof (natural_t)))
#define SQLITE_FUNCTION 31
#define atomic_fetch_add(PTR,VAL) __atomic_fetch_add ((PTR), (VAL), __ATOMIC_SEQ_CST)
#define VM_PAGE_QUERY_PAGE_DIRTY 0x8
#define __PTRDIFF_T 
#define HOST_ATM_NOTIFICATION_PORT (14 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define MACH_MSG_TYPE_INTEGER_T MACH_MSG_TYPE_INTEGER_32
#define TASK_KERNELMEMORY_INFO_COUNT ((mach_msg_type_number_t) (sizeof (task_kernelmemory_info_data_t) / sizeof (natural_t)))
#define IPCTL_SENDREDIRECTS 2
#define CPU_SUBTYPE_POWERPC_603e ((cpu_subtype_t) 4)
#define HOST_LOCAL_NODE -1
#define SQLITE_FCNTL_RESERVE_BYTES 38
#define _POSIX_ADVISORY_INFO (-1)
#define VM_FLAGS_NO_CACHE 0x0010
#define __TVOS_12_0 120000
#define __TVOS_12_1 120100
#define __TVOS_12_2 120200
#define __TVOS_12_3 120300
#define __TVOS_12_4 120400
#define TCP_INFO_ 11
#define SQLITE_UPDATE 23
#define stpncpy(dest,...) __builtin___stpncpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define PAGE_ROUND_UP(bytes) (PAGE((bytes) + PAGE_SIZE - 1))
#define F_LOCK 1
#define IPPROTO_WBMON 78
#define CPU_SUBTYPE_POWERPC_604e ((cpu_subtype_t) 7)
#define PTRACE_SETOPTIONS_ 0x4200
#define EXC_I386_SGLSTP 1
#define _POSIX2_FORT_RUN 200112L
#define VM_PURGABLE_NO_AGING_SHIFT 16
#define MACH_NOTIFY_NO_SENDERS (MACH_NOTIFY_FIRST + 006)
#define KERN_NAME_EXISTS 13
#define KEV_DL_IFDELEGATE_CHANGED 25
#define PTHREAD_ERRORCHECK_MUTEX_INITIALIZER {_PTHREAD_ERRORCHECK_MUTEX_SIG_init, {0}}
#define NDR_CHAR_ASCII 0
#define __FLT64_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F64
#define __DBL_MIN__ ((double)2.22507385850720138309023271733240406e-308L)
#define IP_DEFAULT_MULTICAST_LOOP 1
#define FPS_IE 0x0001
#define _VA_LIST 
#define fileno_unlocked(p) __sfileno(p)
#define TASK_EXC_GUARD_VM_DELIVER 0x01
#define P_GROWSDOWN (1 << 3)
#define MACH_VOUCHER_ATTR_COPY ((mach_voucher_attr_recipe_command_t)1)
#define __INT_FAST8_MAX__ 0x7f
#define SQLITE_STMTSTATUS_SORT 2
#define _POSIX_VDISABLE ((unsigned char)'\377')
#define VM_VOLATILE_ORDER_SHIFT 4
#define _vm_map_user_ 
#define SQLITE_INTEGER 1
#define _ESOCKTNOSUPPORT -94
#define __OSX_AVAILABLE(_vers) 
#define IN6_ARE_ADDR_EQUAL(a,b) (memcmp(&(a)->s6_addr[0], &(b)->s6_addr[0], sizeof (struct in6_addr)) == 0)
#define RLIMIT_WAKEUPS_MONITOR 0x1
#define VM_MEMORY_COREGRAPHICS_SHARED 55
#define SQLITE_STATUS_MALLOC_SIZE 5
#define _MACH_MACHINE_H_ 
#define __ReplyUnion__processor_subsystem__defined 
#define __ILP32_OFFBIG (-1)
#define RPC_DESCR_SIZE(x) ((x)->descr_count * sizeof(struct rpc_routine_arg_descriptor))
#define __FLT64X_NORM_MAX__ 1.18973149535723176502126385303097021e+4932F64x
#define VM_MEMORY_ROSETTA_RETURN_STACK 233
#define __SIZEOF_POINTER__ 8
#define MACH_MSG_TYPE_PORT_ANY(x) (((x) >= MACH_MSG_TYPE_MOVE_RECEIVE) && ((x) <= MACH_MSG_TYPE_MAKE_SEND_ONCE))
#define _PTHREAD_QOS_H 
#define __not_tail_called 
#define _CS_XBS5_LPBIG_OFFBIG_LDFLAGS 33
#define UNUSED(x) UNUSED_ ##x __attribute__((unused))
#define IP_OLD_FW_GET 54
#define SQLITE_IOERR_DIR_FSYNC (SQLITE_IOERR | (5<<8))
#define TASK_DYLD_ALL_IMAGE_INFO_32 0
#define __INT_FAST8_WIDTH__ 8
#define MAP_MEM_VM_SHARE 0x400000
#define IP_HDRINCL_ 3
#define _POSIX_SYMLOOP_MAX 8
#define SO_SNDTIMEO 0x1005
#define MACH_MSG_OOL_PORTS_DESCRIPTOR 2
#define KMOD_RETURN_FAILURE KERN_FAILURE
#define CPU_SUBTYPE_POWERPC_601 ((cpu_subtype_t) 1)
#define CPU_SUBTYPE_POWERPC_602 ((cpu_subtype_t) 2)
#define CPU_SUBTYPE_POWERPC_603 ((cpu_subtype_t) 3)
#define CPU_SUBTYPE_POWERPC_604 ((cpu_subtype_t) 6)
#define TASK_VM_INFO_PURGEABLE_ACCOUNT 27
#define UQUAD_MAX ULLONG_MAX
#define CPU_TYPE_POWERPC ((cpu_type_t) 18)
#define user_put(addr,var) user_write(addr, &(var), sizeof(var))
#define _ECOMM -70
#define EISDIR 21
#define __nonnull 
#define SQLITE_PERM 3
#define SQLITE_DBCONFIG_LEGACY_ALTER_TABLE 1012
#define _PTHREAD_FIRSTFIT_MUTEX_SIG_init 0x32AAABA3
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10_2(x) x
#define _INTPTR_T 
#define atomic_flag_test_and_set_explicit(PTR,MO) __atomic_test_and_set ((PTR), (MO))
#define KEV_DL_LINK_ON 13
#define IPPROTO_XTP 36
#define SQLITE_DBCONFIG_TRUSTED_SCHEMA 1017
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_4(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_5(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_6(x) 
#define _PTHREAD_COND_T 
#define FPS_OE 0x0008
#define __API_DEPRECATED_BEGIN_MSG_GET_MACRO(...) 
#define CPU_SUBTYPE_POWERPC_620 ((cpu_subtype_t) 8)
#define host_set_unfreed_port(host,port) (host_set_special_port((host), HOST_UNFREED_PORT, (port)))
#define NL_ARGMAX 9
#define INT_LEAST8_MAX INT8_MAX
#define CPU_TYPE_X86_64 (CPU_TYPE_X86 | CPU_ARCH_ABI64)
#define _MACH_MACHINE_VM_TYPES_H_ 
#define SQLITE_LOCKED_VTAB (SQLITE_LOCKED | (2<<8))
#define FPC_IC_PROJ 0x0000
#define host_get_io_master_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_IO_MASTER_PORT, (port)))
#define HOST_BASIC_INFO 1
#define IPV6CTL_ACCEPT_RTADV 12
#define FPS_PE 0x0020
#define TCPOPT_EOL 0
#define __FLT64_MIN_10_EXP__ (-307)
#define __WATCHOS_4_2 40200
#define ARCADE_REG_NULL ((arcade_register_t) 0)
#define IPPROTO_TP 29
#define atomic_fetch_and(PTR,VAL) __atomic_fetch_and ((PTR), (VAL), __ATOMIC_SEQ_CST)
#define SIGPWR_ 30
#define __has_extension(x) 0
#define MEMORY_OBJECT_BEHAVIOR_INFO 15
#define SQLITE_DROP_INDEX 10
#define ULONG_MAX (LONG_MAX * 2UL + 1UL)
#define VM_REGION_BASIC_INFO 10
#define PAGE_MIN_MASK (PAGE_MIN_SIZE-1)
#define __FLT64X_DECIMAL_DIG__ 21
#define KEV_INET_ARPCOLLISION 7
#define _MACH_MACHINE_THREAD_STATUS_H_ 
#define PF_LINK AF_LINK
#define _EPROTONOSUPPORT -93
#define VM_LEDGER_TAG_GRAPHICS 0x00000004
#define SQLITE_SCANSTAT_EST 2
#define SQLITE_NOTADB 26
#define MACH_MSGH_BITS_DENAPHOLDASRT MACH_MSGH_BITS_IMPHOLDASRT
#define __DBL_HAS_DENORM__ 1
#define INT_LEAST32_MAX INT32_MAX
#define _NET_NETKEV_H_ 
#define SYS_ERRNO_H 
#define __MAC_10_11_3 101103
#define __MAC_10_11_4 101104
#define _SC_SIGQUEUE_MAX 51
#define NET_RT_MAXID 11
#define SQLITE_TESTCTRL_PRNG_SEED 28
#define FPE_FLTSUB 6
#define MS_NOSUID_ (1 << 1)
#define FPS_SF 0x0040
#define SQLITE_TESTCTRL_PRNG_RESTORE 6
#define _CS_XBS5_ILP32_OFFBIG_LDFLAGS 25
#define SQLITE_DBCONFIG_MAINDBNAME 1000
#define CHAR_BIT __CHAR_BIT__
#define SQLITE_SHM_SHARED 4
#define __OS_AVAILABILITY(_target,_availability) 
#define SQLITE_TESTCTRL_PARSER_COVERAGE 26
#define SO_LINGER_ 13
#define list_next_entry(item,member) list_entry((item)->member.next, typeof(*(item)), member)
#define TASK_INSPECT_NULL ((task_inspect_t) 0)
#define TASK_BASE_QOS_POLICY 8
#define __FLT32_MIN__ 1.17549435082228750796873653722224568e-38F32
#define __UINT8_TYPE__ unsigned char
#define _SC_BC_BASE_MAX 9
#define MACH_SEND_MSG_TOO_SMALL 0x10000008
#define NSEC_PER_MSEC 1000000ull
#define __NO_INLINE__ 1
#define MACH_RCV_TRAILER_MASK ((0xf << 24))
#define FPS_UE 0x0010
#define MSG_OOB_ 0x1
#define SQLITE_IOERR_LOCK (SQLITE_IOERR | (15<<8))
#define LONG_LONG_MAX __LONG_LONG_MAX__
#define OSSwapLittleToHostInt(x) OSSwapLittleToHostInt32(x)
#define FPC_RC_CHOP 0x0c00
#define IPCTL_STATS 12
#define SQLITE_LIMIT_TRIGGER_DEPTH 10
#define MACH_MSG_TYPE_PORT_NONE 0
#define __RequestUnion__lock_set_subsystem__defined 
#define CMSG_LEN_(cmsg) (((cmsg)->len + sizeof(dword_t) - 1) & ~(dword_t)(sizeof(dword_t) - 1))
#define __enum_options 
#define MAX_CANON 1024
#define NDR_PROTOCOL_2_0 0
#define INT_LEAST8_MIN INT8_MIN
#define CPU_SUBTYPE_POWERPC_750 ((cpu_subtype_t) 9)
#define subsystem_to_name_map_processor { "processor_start", 3000 }, { "processor_exit", 3001 }, { "processor_info", 3002 }, { "processor_control", 3003 }, { "processor_assign", 3004 }, { "processor_get_assignment", 3005 }
#define P_SHARED (1 << 7)
#define errno (*__error())
#define _SC_NPROCESSORS_ONLN 58
#define _SC_TRACE_NAME_MAX 128
#define MACH_DEBUG_PAGE_INFO_H 
#define TASK_BASIC_INFO TASK_BASIC_INFO_64
#define __MAC_OS_X_VERSION_MAX_ALLOWED __MAC_11_3
#define __MAC_10_11 101100
#define __MAC_10_12 101200
#define __MAC_10_13 101300
#define __MAC_10_14 101400
#define __MAC_10_15 101500
#define FD_ZERO(p) __DARWIN_FD_ZERO(p)
#define PF_SYSTEM AF_SYSTEM
#define IPPROTO_APES 99
#define _PTRDIFF_T_ 
#define __used __attribute__((__used__))
#define SQLITE_IOCAP_ATOMIC16K 0x00000040
#define SO_KEEPALIVE 0x0008
#define write_wrlock(lock) __write_wrlock(lock, __FILE__, __LINE__)
#define SQLITE_IOERR_ACCESS (SQLITE_IOERR | (13<<8))
#define __DBL_MANT_DIG__ 53
#define err_system(x) ((signed)((((unsigned)(x))&0x3f)<<26))
#define NET_SERVICE_TYPE_AV 6
#define SM_PRIVATE 2
#define MACH_PORT_IMPORTANCE_RECEIVER 5
#define PTHREAD_PROCESS_SHARED 1
#define _PC_CASE_SENSITIVE 11
#define _PTHREAD_RWLOCK_T 
#define __STDC_WANT_LIB_EXT1__ 1
#define VM_REGION_INFO_MAX (1024)
#define _FSFILCNT_T 
#define TASK_CATEGORY_POLICY 1
#define IOPOL_TYPE_VFS_SKIP_MTIME_UPDATE 8
#define VM_MEMORY_MALLOC_PGUARD 13
#define CPU_SUBTYPE_POWERPC_970 ((cpu_subtype_t) 100)
#define _EPERM -1
#define SV_RESETHAND SA_RESETHAND
#define FPS_ZE 0x0004
#define INT_LEAST32_MIN INT32_MIN
#define MACH_VOUCHER_ATTR_KEY_NUM_WELL_KNOWN MACH_VOUCHER_ATTR_KEY_TEST
#define TASK_SCHED_TIMESHARE_INFO 10
#define _IN_PORT_T 
#define _STRUCT_X86_THREAD_STATE64 struct __darwin_x86_thread_state64
#define _NETINET_TCP_H_ 
#define CPUFAMILY_INTEL_SKYLAKE 0x37fc219f
#define host_set_syspolicyd_port(host,port) (host_set_special_port((host), HOST_SYSPOLICYD_PORT, (port)))
#define __API_DEPRECATED_WITH_REPLACEMENT(...) 
#define TASK_WAIT_STATE_INFO_COUNT ((mach_msg_type_number_t) (sizeof(task_wait_state_info_data_t) / sizeof(natural_t)))
#define SQLITE_CANTOPEN_CONVPATH (SQLITE_CANTOPEN | (4<<8))
#define VM_MEMORY_GENEALOGY 78
#define EXC_I386_DIV 1
#define ENETDOWN 50
#define MACH_PORT_TYPE_SEND_RIGHTS (MACH_PORT_TYPE_SEND|MACH_PORT_TYPE_SEND_ONCE)
#define KERN_INVALID_NAME 15
#define MAXTHREADNAMESIZE 64
#define __DARWIN_VERS_1050 1
#define SQLITE_CORRUPT_INDEX (SQLITE_CORRUPT | (3<<8))
#define LINE_MAX 2048
#define __STRING(x) #x
#define SO_OOBINLINE 0x0100
#define NGROUPS_MAX 16
#define SIGVTALRM 26
#define KERNEL_AUDIT_TOKEN_VALUE { {0, 0, 0, 0, 0, 0, 0, 0} }
#define O_NOCTTY_ (1 << 8)
#define TCP_MAX_SACK 4
#define KERNEL_VERSION_MAX (512)
#define OSSwapBigToHostInt(x) OSSwapBigToHostInt32(x)
#define INADDR_ANY (u_int32_t)0x00000000
#define SQLITE_OK_LOAD_PERMANENTLY (SQLITE_OK | (1<<8))
#define EBUSY 16
#define TCPCI_FLAG_LOSSRECOVERY 0x00000001
#define __RequestUnion__thread_act_subsystem__defined 
#define _ENOLINK -67
#define RLIMIT_CPU 0
#define EXC_I386_INVOP 1
#define user_get_task(task,addr,var) user_read_task(task, addr, &(var), sizeof(var))
#define EPROCLIM 67
#define LONG_LONG_MIN (-LONG_LONG_MAX - 1LL)
#define __no_instrument __attribute__((no_sanitize("address", "thread", "undefined", "leak"))) __no_instrument_msan
#define SAE_CONNID_ANY 0
#define _FSID_T 
#define F_ULOCK 0
#define MACH_SEND_NOTIFY 0x00000080
#define __DARWIN_STRUCT_DIRENTRY { __uint64_t d_ino; __uint64_t d_seekoff; __uint16_t d_reclen; __uint16_t d_namlen; __uint8_t d_type; char d_name[__DARWIN_MAXPATHLEN]; }
#define INADDR_UNSPEC_GROUP (u_int32_t)0xe0000000
#define EXCEPTION_CODE_MAX 2
#define PROCESSOR_SET_LOAD_INFO 4
#define OSWriteLittleInt32(base,byteOffset,data) _OSWriteInt32(base, byteOffset, data)
#define _SC_TRACE 97
#define __LDBL_DECIMAL_DIG__ 21
#define TH_STATE_RUNNING 1
#define IN6_IS_ADDR_V4COMPAT(a) ((*(const __uint32_t *)(const void *)(&(a)->s6_addr[0]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[4]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[8]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[12]) != 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[12]) != ntohl(1)))
#define _SC_FSYNC 38
#define __API_DEPRECATED(...) 
#define VM_MAX_PAGE_ADDRESS ((user_addr_t) 0x00007FFFFFE00000ULL)
#define __MAC_10_12_2 101202
#define FPE_INTOVF 8
#define VM_MEMORY_SWIFT_RUNTIME 82
#define _OFF_T 
#define SQLITE_IOCAP_ATOMIC64K 0x00000100
#define clearerr_unlocked(p) __sclearerr(p)
#define TASK_FLAVOR_INSPECT 2
#define CPUFAMILY_ARM_FIRESTORM_ICESTORM 0x1b588bb3
#define KEV_DL_NODE_PRESENCE 21
#define _POSIX2_FORT_DEV (-1)
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#define SQLITE_LIMIT_FUNCTION_ARG 6
#define _POSIX_THREAD_PROCESS_SHARED 200112L
#define SQLITE_CREATE_TEMP_TRIGGER 5
#define IP_MAX_SOCK_SRC_FILTER 128
#define subsystem_to_name_map_thread_act { "thread_terminate", 3600 }, { "act_get_state", 3601 }, { "act_set_state", 3602 }, { "thread_get_state", 3603 }, { "thread_set_state", 3604 }, { "thread_suspend", 3605 }, { "thread_resume", 3606 }, { "thread_abort", 3607 }, { "thread_abort_safely", 3608 }, { "thread_depress_abort", 3609 }, { "thread_get_special_port", 3610 }, { "thread_set_special_port", 3611 }, { "thread_info", 3612 }, { "thread_set_exception_ports", 3613 }, { "thread_get_exception_ports", 3614 }, { "thread_swap_exception_ports", 3615 }, { "thread_policy", 3616 }, { "thread_policy_set", 3617 }, { "thread_policy_get", 3618 }, { "thread_sample", 3619 }, { "etap_trace_thread", 3620 }, { "thread_assign", 3621 }, { "thread_assign_default", 3622 }, { "thread_get_assignment", 3623 }, { "thread_set_policy", 3624 }, { "thread_get_mach_voucher", 3625 }, { "thread_set_mach_voucher", 3626 }, { "thread_swap_mach_voucher", 3627 }, { "thread_convert_thread_state", 3628 }, { "thread_get_exception_ports_info", 3630 }
#define _ESTRPIPE -86
#define SQLITE_TESTCTRL_ONCE_RESET_THRESHOLD 19
#define _SC_2_LOCALEDEF 23
#define _GID_T 
#define CPU_THREADTYPE_INTEL_HTT ((cpu_threadtype_t) 1)
#define _STRINGS_H_ 
#define SIG_ATOMIC_MAX INT32_MAX
#define MEM_READ 0
#define IOPOL_VFS_SKIP_MTIME_UPDATE_OFF 0
#define mach_host_MSG_COUNT 35
#define HOST_EXTMOD_INFO64 5
#define LOCK_INITIALIZER {PTHREAD_MUTEX_INITIALIZER, 0}
#define FPC_RC_RD 0x0400
#define __FBSDID(s) 
#define EFTYPE 79
#define FPC_RC_RN 0x0000
#define FPC_RC_RU 0x0800
#define _clock_priv_user_ 
#define PROCESSOR_BASIC_INFO_COUNT ((mach_msg_type_number_t) (sizeof(processor_basic_info_data_t)/sizeof(natural_t)))
#define SQLITE_DELETE 9
#define SQLITE_ANALYZE 28
#define NDR_FLOAT_VAX 1
#define _SC_MQ_PRIO_MAX 75
#define SQLITE_OPEN_MAIN_DB 0x00000100
#define INT32_MAX 2147483647
#define FIOCLEX_ 0x5451
#define __INT32_C(c) c
#define bcopy(src,dest,...) __builtin___memmove_chk (dest, src, __VA_ARGS__, __darwin_obsz0 (dest))
#define SQLITE_FCNTL_PDB 30
#define SQLITE_COPY 0
#define _U_INT8_T 
#define _SC_THREAD_ATTR_STACKSIZE 83
#define TH_STATE_WAITING 3
#define _U_CHAR 
#define host_set_user_notification_port(host,port) (host_set_special_port((host), HOST_USER_NOTIFICATION_PORT, (port)))
#define MACH_VOUCHER_ATTR_TEST_STORE MACH_VOUCHER_ATTR_USER_DATA_STORE
#define RUSAGE_CHILDREN_ -1
#define PRIO_DARWIN_BG 0x1000
#define RUSAGE_SELF_ 0
#define SQLITE_PROTOCOL 15
#define MAP_MEM_GRAB_SECLUDED 0x008000
#define RLIMIT_NPROC_ 6
#define SQLITE_CONFIG_GETPCACHE 15
#define IPV6_ADDR_MC_FLAGS_PREFIX 0x20
#define _MCONTEXT_T 
#define __SALC 0x4000
#define CPUFAMILY_ARM_XSCALE 0x53b005f5
#define VM_MEMORY_UNSHARED_PMAP 35
#define TASK_EVENTS_INFO_COUNT ((mach_msg_type_number_t) (sizeof(task_events_info_data_t) / sizeof(natural_t)))
#define MAC_OS_X_VERSION_10_15_1 101501
#define VM_GET_FLAGS_ALIAS(flags,alias) (alias) = ((flags) & VM_FLAGS_ALIAS_MASK) >> 24
#define IP_MAX_GROUP_SRC_FILTER 512
#define TCPCI_FLAG_REORDERING_DETECTED 0x00000002
#define __FLT128_DIG__ 33
#define NET_SERVICE_TYPE_BE 0
#define __OSX_UNAVAILABLE 
#define __SCHAR_WIDTH__ 8
#define SAE_CONNID_ALL ((sae_connid_t)(-1ULL))
#define CPU_ARCH_ABI64_32 0x02000000
#define IN6_IS_ADDR_LOOPBACK(a) ((*(const __uint32_t *)(const void *)(&(a)->s6_addr[0]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[4]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[8]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[12]) == ntohl(1)))
#define TH_PUSH 0x08
#define FPC_PC 0x0300
#define WEXITED 0x00000004
#define __DARWIN_MAXPATHLEN 1024
#define PGOFFSET(addr) ((addr) & (PAGE_SIZE - 1))
#define IP_ADD_MEMBERSHIP 12
#define __FLT32_MAX_10_EXP__ 38
#define memset(dest,...) __builtin___memset_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define TASK_HOST_PORT 2
#define MSG_WAITSTREAM 0x200
#define MACHINE_THREAD_STATE x86_THREAD_STATE
#define MPO_CONTEXT_AS_GUARD 0x01
#define TCP_DEFER_ACCEPT_ 9
#define TCPOPT_TIMESTAMP 8
#define IN_CLASSD_NSHIFT 28
#define __VM_LEDGER_ACCOUNTING_POSTMARK 2019032600
#define subsystem_to_name_map_vm_map { "vm_region", 3800 }, { "vm_allocate", 3801 }, { "vm_deallocate", 3802 }, { "vm_protect", 3803 }, { "vm_inherit", 3804 }, { "vm_read", 3805 }, { "vm_read_list", 3806 }, { "vm_write", 3807 }, { "vm_copy", 3808 }, { "vm_read_overwrite", 3809 }, { "vm_msync", 3810 }, { "vm_behavior_set", 3811 }, { "vm_map", 3812 }, { "vm_machine_attribute", 3813 }, { "vm_remap", 3814 }, { "task_wire", 3815 }, { "mach_make_memory_entry", 3816 }, { "vm_map_page_query", 3817 }, { "mach_vm_region_info", 3818 }, { "vm_mapped_pages_info", 3819 }, { "vm_region_recurse", 3821 }, { "vm_region_recurse_64", 3822 }, { "mach_vm_region_info_64", 3823 }, { "vm_region_64", 3824 }, { "mach_make_memory_entry_64", 3825 }, { "vm_map_64", 3826 }, { "vm_purgable_control", 3830 }, { "vm_map_exec_lockdown", 3831 }, { "vm_remap_new", 3832 }
#define SIGSEGV 11
#define CPU_SUBTYPE_HPPA_ALL ((cpu_subtype_t) 0)
#define CPU_SUBTYPE_MC68030 ((cpu_subtype_t) 1)
#define VM_PROT_WANTS_COPY ((vm_prot_t) 0x10)
#define CMSG_DATA(cmsg) ((unsigned char *)(cmsg) + __DARWIN_ALIGN32(sizeof(struct cmsghdr)))
#define CPU_SUBTYPE_HPPA_7100 ((cpu_subtype_t) 0)
#define RLIMIT_NPROC 7
#define _SC_MESSAGE_PASSING 33
#define IOPOL_STANDARD 5
#define _EMFILE -24
#define __INT_FAST32_TYPE__ int
#define getc_unlocked(fp) __sgetc(fp)
#define IN_CLASSD_HOST 0x0fffffff
#define OSReadLittleInt32(base,byteOffset) _OSReadInt32(base, byteOffset)
#define CPU_SUBTYPE_MC68040 ((cpu_subtype_t) 2)
#define FPC_PC_53 0x0200
#define IOPOL_VFS_STATFS_FORCE_NO_DATA_VOLUME 1
#define SQLITE_CREATE_TRIGGER 7
#define SQLITE_READ 20
#define SIG_DFL (void (*)(int))0
#define _ENONET -64
#define MACH_RCV_INVALID_DATA 0x10004008
#define __KAME_VERSION "2009/apple-darwin"
#define SIG_ATOMIC_MIN INT32_MIN
#define IN6_IS_ADDR_UNICAST_BASED_MULTICAST(a) (IN6_IS_ADDR_MULTICAST(a) && (IPV6_ADDR_MC_FLAGS(a) == IPV6_ADDR_MC_FLAGS_UNICAST_BASED))
#define F_OK 0
#define INADDR_PFSYNC_GROUP (u_int32_t)0xe00000f0
#define _PC_PATH_MAX 5
#define MACH_MSG_TRAILER_FORMAT_0_SIZE sizeof(mach_msg_format_0_trailer_t)
#define OSSwapHostToLittleInt(x) OSSwapHostToLittleInt32(x)
#define MACH_EVENTLINK_NULL ((mach_eventlink_t) 0)
#define THREAD_CONVERT_THREAD_STATE_TO_SELF 1
#define PTHREAD_MUTEX_POLICY_FAIRSHARE_NP 1
#define SQLITE_TESTCTRL_PENDING_BYTE 11
#define __SAPP 0x0100
#define FPC_PC_64 0x0300
#define PAGE_MASK vm_page_mask
#define TASK_BASIC_INFO_COUNT (sizeof(task_basic_info_data_t) / sizeof(natural_t))
#define subsystem_to_name_map_processor_set { "processor_set_statistics", 4000 }, { "processor_set_destroy", 4001 }, { "processor_set_max_priority", 4002 }, { "processor_set_policy_enable", 4003 }, { "processor_set_policy_disable", 4004 }, { "processor_set_tasks", 4005 }, { "processor_set_threads", 4006 }, { "processor_set_policy_control", 4007 }, { "processor_set_stack_usage", 4008 }, { "processor_set_info", 4009 }, { "processor_set_tasks_with_flavor", 4010 }
#define SQLITE_UTF16BE 3
#define _INT64_T 
#define MACH_RCV_PORT_CHANGED 0x10004006
#define _POSIX_MAX_INPUT 255
#define host_get_atm_notification_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_ATM_NOTIFICATION_PORT, (port)))
#define _MACH_TIME_VALUE_H_ 
#define _PC_LINK_MAX 1
#define EDOM 33
#define EXC_MASK_EMULATION (1 << EXC_EMULATION)
#define EADDRNOTAVAIL 49
#define ESHUTDOWN 58
#define __dead 
#define INT32_MIN (-INT32_MAX-1)
#define _SC_TIMER_MAX 52
#define CPU_SUBTYPE_PENTIUM_4 CPU_SUBTYPE_INTEL(10, 0)
#define VM_MEMORY_MALLOC 1
#define host_set_host_priv_port(host,port) (KERN_INVALID_ARGUMENT)
#define TASK_BASE_THROUGHPUT_QOS_POLICY 11
#define MACH_VOUCHER_ATTR_CONTROL_FLAGS_NONE ((mach_voucher_attr_control_flags_t)0)
#define CPU_SUBTYPE_PENTIUM_M CPU_SUBTYPE_INTEL(9, 0)
#define __enum_closed 
#define IN6ADDR_INTFACELOCAL_ALLNODES_INIT {{{ 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01 }}}
#define _POSIX_THREADS 200112L
#define typecheck(type,x) ({type _x = x; x;})
#define _PC_NO_TRUNC 8
#define SQLITE_TESTCTRL_FIRST 5
#define __INT_FAST64_MAX__ 0x7fffffffffffffffLL
#define __INT8_TYPE__ signed char
#define __WATCHOS_3_1 30100
#define __WATCHOS_3_2 30200
#define EXC_MASK_RESOURCE (1 << EXC_RESOURCE)
#define CPU_TYPE_ARM ((cpu_type_t) 12)
#define __FLT64X_DIG__ 18
#define RLIMIT_RSS RLIMIT_AS
#define SQLITE_OPEN_FILEPROTECTION_COMPLETE 0x00100000
#define VM_MIN_ADDRESS ((vm_offset_t) 0)
#define ICMPV6CTL_ND6_ONLINKNSRFC4861 50
#define VM_VOLATILE_GROUP_0 (0 << VM_VOLATILE_GROUP_SHIFT)
#define VM_VOLATILE_GROUP_1 (1 << VM_VOLATILE_GROUP_SHIFT)
#define VM_VOLATILE_GROUP_2 (2 << VM_VOLATILE_GROUP_SHIFT)
#define _UINTMAX_T 
#define VM_VOLATILE_GROUP_4 (4 << VM_VOLATILE_GROUP_SHIFT)
#define VM_VOLATILE_GROUP_5 (5 << VM_VOLATILE_GROUP_SHIFT)
#define VM_VOLATILE_GROUP_6 (6 << VM_VOLATILE_GROUP_SHIFT)
#define VM_VOLATILE_GROUP_7 (7 << VM_VOLATILE_GROUP_SHIFT)
#define SIGSTKSZ 131072
#define VM_VOLATILE_GROUP_3 (3 << VM_VOLATILE_GROUP_SHIFT)
#define SQLITE_OPEN_TEMP_JOURNAL 0x00001000
#define HOST_KEXTD_PORT (8 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define SQLITE_OPEN_NOMUTEX 0x00008000
#define SQLITE_DROP_TEMP_VIEW 15
#define OPEN_MAX 10240
#define __GCC_ASM_FLAG_OUTPUTS__ 1
#define VM_MEMORY_REALLOC 6
#define _ECHILD -10
#define _CS_POSIX_V6_ILP32_OFF32_CFLAGS 2
#define ATOMIC_INT_LOCK_FREE __GCC_ATOMIC_INT_LOCK_FREE
#define __Reply__processor_subsystem__defined 
#define VALID_THREAD_STATE_FLAVOR(x) ((x == x86_THREAD_STATE32) || (x == x86_FLOAT_STATE32) || (x == x86_EXCEPTION_STATE32) || (x == x86_DEBUG_STATE32) || (x == x86_THREAD_STATE64) || (x == x86_THREAD_FULL_STATE64) || (x == x86_FLOAT_STATE64) || (x == x86_EXCEPTION_STATE64) || (x == x86_DEBUG_STATE64) || (x == x86_THREAD_STATE) || (x == x86_FLOAT_STATE) || (x == x86_EXCEPTION_STATE) || (x == x86_DEBUG_STATE) || (x == x86_AVX_STATE32) || (x == x86_AVX_STATE64) || (x == x86_AVX_STATE) || (x == x86_AVX512_STATE32) || (x == x86_AVX512_STATE64) || (x == x86_AVX512_STATE) || (x == x86_PAGEIN_STATE) || (x == x86_INSTRUCTION_STATE) || (x == x86_LAST_BRANCH_STATE) || (x == THREAD_STATE_NONE))
#define MACH_SEND_INVALID_DATA 0x10000002
#define THREAD_STATE_FLAVOR_LIST_10_15 131
#define _ECANCELED -125
#define CPU_SUBTYPE_ARM_V6 ((cpu_subtype_t) 6)
#define CPU_SUBTYPE_ARM_V7 ((cpu_subtype_t) 9)
#define CPU_SUBTYPE_ARM_V8 ((cpu_subtype_t) 13)
#define __FLT128_DECIMAL_DIG__ 36
#define O_RDONLY_ 0
#define VM_USRSTACK32 ((vm_offset_t) 0xC0000000)
#define _SC_VERSION 8
#define SERVICE_SLOT 2
#define KEV_DL_IFCAP_CHANGED 19
#define tcp6hdr tcphdr
#define F_TLOCK 2
#define FP_387 3
#define _CS_POSIX_V6_WIDTH_RESTRICTED_ENVS 14
#define SQLITE_DBCONFIG_LOOKASIDE 1001
#define __FLT_RADIX__ 2
#define SO_REUSEPORT 0x0200
#define _STRUCT_FP_CONTROL struct __darwin_fp_control
#define __INT_LEAST16_TYPE__ short int
#define SQLITE_DROP_TRIGGER 16
#define KEV_INET6_NEW_RTADV_ADDR 5
#define __Request__host_security_subsystem__defined 
#define O_ACCMODE_ 3
#define _SYS_SYSLIMITS_H_ 
#define KMOD_RETURN_SUCCESS KERN_SUCCESS
#define MEMORY_OBJECT_NULL ((memory_object_t) 0)
#define KERN_INVALID_KC 55
#define LIST_H 
#define lock(lock) __lock(lock, __FILE__, __LINE__)
#define TH_FLAGS_IDLE 0x2
#define _U_INT32_T 
#define _POSIX_ARG_MAX 4096
#define IPC_VOUCHER_ATTR_MANAGER_NULL ((ipc_voucher_attr_manager_t) 0)
#define SQLITE_CONFIG_SINGLETHREAD 1
#define TRACE_(chan,msg,...) glue(TRACE_, chan)(msg, ##__VA_ARGS__)
#define _POSIX_THREAD_DESTRUCTOR_ITERATIONS 4
#define IP_OLD_FW_ADD 50
#define CPU_SUBTYPE_586 CPU_SUBTYPE_INTEL(5, 0)
#define SO_BROADCAST_ 6
#define BUFSIZ 1024
#define KERN_UREFS_OVERFLOW 19
#define IP_FW_ZERO 43
#define IN_ZERONET(i) (((u_int32_t)(i) & 0xff000000) == 0)
#define CPU_STATE_SYSTEM 1
#define CLOCK_MONOTONIC_RAW _CLOCK_MONOTONIC_RAW
#define SQLITE_DBSTATUS_DEFERRED_FKS 10
#define IPV6CTL_TEMPVLTIME 34
#define MSG_TRUNC 0x10
#define CPUFAMILY_ARM_VORTEX_TEMPEST 0x07d34b9f
#define EXC_I386_SGL 1
#define __QOS_CLASS_AVAILABLE(...) 
#define F_TEST 3
#define HOST_VM_INFO 2
#define _UID_T 
#define MACH_SEND_KERNEL 0x00400000
#define TCPOPT_CC 11
#define host_set_container_port(host,port) (host_set_special_port((host), HOST_CONTAINERD_PORT, (port)))
#define MIG_SERVER_ROUTINE 
#define i386_FLOAT_STATE_COUNT ((mach_msg_type_number_t) (sizeof(i386_float_state_t)/sizeof(unsigned int)))
#define x86_THREAD_STATE 7
#define EXCEPTION_STATE_IDENTITY 3
#define FS_FAKEFS_API_H 
#define __NEW_SCHEDULING_FRAMEWORK__ 
#define task_set_task_access_port(task,port) (task_set_special_port((task), TASK_ACCESS_PORT, (port)))
#define HOST_IO_MASTER_PORT 3
#define EOVERFLOW 84
#define PERSIST_TIMEOUT 0x40
#define CPUFAMILY_INTEL_HASWELL 0x10b282dc
#define SQLITE_CONSTRAINT_NOTNULL (SQLITE_CONSTRAINT | (5<<8))
#define MACH_VOUCHER_SELECTOR_EFFECTIVE ((mach_voucher_selector_t)1)
#define SIGPIPE 13
#define GET_MZI_COLLECTABLE_FLAG(val) ((val) & 1)
#define CPU_SUBTYPE_MIPS_R2000a ((cpu_subtype_t) 4)
#define UCHAR_MAX (SCHAR_MAX * 2 + 1)
#define __SIZEOF_PTRDIFF_T__ 8
#define _WCHAR_T_H 
#define __IPHONE_4_0 40000
#define __IPHONE_4_1 40100
#define __IPHONE_4_2 40200
#define __IPHONE_4_3 40300
#define SEEK_SET 0
#define SQLITE_INDEX_CONSTRAINT_ISNULL 71
#define SQLITE_FORMAT 24
#define __ReplyUnion__clock_priv_subsystem__defined 
#define x86_EXCEPTION_STATE 9
#define VM_REGION_SUBMAP_INFO_V2_COUNT_64 ((mach_msg_type_number_t) (VM_REGION_SUBMAP_INFO_V2_SIZE / sizeof (natural_t)))
#define HOST_VM_INFO_REV2_COUNT HOST_VM_INFO_LATEST_COUNT
#define __TVOS_AVAILABLE(_vers) 
#define CPU_TYPE_ANY ((cpu_type_t) -1)
#define TASK_VM_INFO_REV3_COUNT ((mach_msg_type_number_t) (TASK_VM_INFO_REV4_COUNT - 2))
#define RLIMIT_STACK_ 3
#define SO_TIMESTAMP 0x0400
#define MEM_WRITE 1
#define SYS_SOCK_H 
#define __DARWIN_64_BIT_INO_T 1
#define LSEEK_SET 0
#define IPPROTO_SATMON 69
#define _DIRENT_H_ 
#define __FLT32X_MANT_DIG__ 53
#define x86_EXCEPTION_STATE64_COUNT ((mach_msg_type_number_t) ( sizeof (x86_exception_state64_t) / sizeof (int) ))
#define _POSIX_IPV6 200112L
#define __TVOS_14_2 140200
#define IPV6CTL_MAXIFPREFIXES 47
#define SQLITE_DBCONFIG_MAX 1017
#define IP_MSFILTER 74
#define THREAD_TIME_CONSTRAINT_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (thread_time_constraint_policy_data_t) / sizeof (integer_t)))
#define _MACH_THREAD_SWITCH_H_ 
#define _GCC_LIMITS_H_ 
#define IP_BLOCK_SOURCE 72
#define _POSIX2_EQUIV_CLASS_MAX 2
#define W_OK (1<<1)
#define _EBADMSG -74
#define __x86_64__ 1
#define _POSIX2_COLL_WEIGHTS_MAX 2
#define host_security_MSG_COUNT 2
#define MAC_OS_VERSION_11_0 110000
#define UINT_FAST32_MAX UINT32_MAX
#define __ReplyUnion__host_security_subsystem__defined 
#define EXC_I386_BOUNDFLT 5
#define MIG_TRAILER_ERROR -309
#define MACH_MSG_TIMEOUT_NONE ((mach_msg_timeout_t) 0)
#define IP_RETOPTS 8
#define EPROTO 100
#define ENODEV 19
#define SM_EMPTY 3
#define CPU_SUBTYPE_VAX8500 ((cpu_subtype_t) 8)
#define _EXECUTE_OK (1<<11)
#define VM_FLAGS_RANDOM_ADDR 0x0008
#define KEV_INET6_SUBCLASS 6
#define KERN_INVALID_LEDGER 33
#define __PTHREAD_SIZE__ 8176
#define VM_MEMORY_COREGRAPHICS_MISC VM_MEMORY_COREGRAPHICS
#define INT_MAX __INT_MAX__
#define __deprecated __attribute__((__deprecated__))
#define i386_FLOAT_STATE 2
#define ULLONG_MAX (LLONG_MAX * 2ULL + 1ULL)
#define POLL_OUT 2
#define THREAD_BASIC_INFO 3
#define _POSIX_MONOTONIC_CLOCK (-1)
#define MACH_MSG_TYPE_PORT_NAME 15
#define _SC_2_PBS_ACCOUNTING 60
#define SQLITE_CONSTRAINT_CHECK (SQLITE_CONSTRAINT | (1<<8))
#define MIG_REPLY_MISMATCH -301
#define SQLITE_IOCAP_IMMUTABLE 0x00002000
#define _SC_XBS5_LP64_OFF64 124
#define MAP_MEM_FLAGS_USER ( MAP_MEM_PURGABLE_KERNEL_ONLY | MAP_MEM_GRAB_SECLUDED | MAP_MEM_ONLY | MAP_MEM_NAMED_CREATE | MAP_MEM_PURGABLE | MAP_MEM_NAMED_REUSE | MAP_MEM_USE_DATA_ADDR | MAP_MEM_VM_COPY | MAP_MEM_VM_SHARE | MAP_MEM_LEDGER_TAGGED | MAP_MEM_4K_DATA_ADDR)
#define PTHREAD_DESTRUCTOR_ITERATIONS 4
#define __UINT_FAST32_MAX__ 0xffffffffU
#define __UINT_LEAST64_TYPE__ long long unsigned int
#define VM_SYNC_INVALIDATE ((vm_sync_t) 0x04)
#define PTRACE_SETREGS_ 13
#define MINSIGSTKSZ 32768
#define MACH_SEND_INVALID_TRAILER 0x10000011
#define DT_REG 8
#define __API_DEPRECATED_WITH_REPLACEMENT_END 
#define FP_RND_UP 2
#define _MACH_INTERFACE_H_ 
#define THREAD_STATE_FLAVOR_LIST_NEW 128
#define __FLT_HAS_QUIET_NAN__ 1
#define IP_RECVOPTS 5
#define _STDINT_H_ 
#define _SC_THREAD_ATTR_STACKADDR 82
#define _POSIX_TRACE_INHERIT (-1)
#define __FLT_MAX_10_EXP__ 38
#define NTOHLL(x) (x) = ntohll((__uint64_t)x)
#define MACH_MSG_BODY_NULL (mach_msg_body_t *) 0
#define _mach_port_user_ 
#define CLOCK_UPTIME_RAW_APPROX _CLOCK_UPTIME_RAW_APPROX
#define _SC_HOST_NAME_MAX 72
#define PF_LOCAL_ 1
#define __FLT64X_HAS_DENORM__ 1
#define _PC_SYNC_IO 25
#define SIGWINCH 28
#define _XOPEN_SHM (1)
#define _SC_SEM_NSEMS_MAX 49
#define __FLT_HAS_INFINITY__ 1
#define SQLITE_FCNTL_JOURNAL_POINTER 28
#define ENODATA 96
#define SO_SNDBUF 0x1001
#define TASK_EXTMOD_INFO_COUNT (sizeof(task_extmod_info_data_t) / sizeof(natural_t))
#define _CS_XBS5_ILP32_OFF32_LIBS 22
#define HOST_VM_INFO64_REV0_COUNT ((mach_msg_type_number_t) (HOST_VM_INFO64_REV1_COUNT - 14))
#define MATTR_REPLICATE 4
#define IPV6PORT_RESERVEDMAX (IPV6PORT_RESERVED-1)
#define MEMORY_OBJECT_RETURN_ANYTHING 3
#define _I386_LIMITS_H_ 
#define TCP_RXT_FINDROP 0x100
#define _BSD_PTRDIFF_T_ 
#define MACH_MSG_TYPE_MOVE_SEND_ONCE 18
#define SIGXFSZ 25
#define MCAST_JOIN_SOURCE_GROUP 82
#define MACH_VOUCHER_ATTR_KEY_BANK ((mach_voucher_attr_key_t)3)
#define SIGHUP 1
#define SQLITE_NOLFS 22
#define __exported_pop _Pragma("GCC visibility pop")
#define SWITCH_OPTION_WAIT 2
#define MACH_MSG_SUCCESS 0x00000000
#define MACH_VOUCHER_ATTR_SEND_PREPROCESS ((mach_voucher_attr_recipe_command_t)5)
#define RPC_SIGBUF_SIZE 8
#define VM_PURGABLE_NO_AGING_MASK (0x1 << VM_PURGABLE_NO_AGING_SHIFT)
#define __INT_FAST32_WIDTH__ 32
#define __IPHONE_12_0 120000
#define __IPHONE_12_1 120100
#define __IPHONE_12_2 120200
#define __IPHONE_12_3 120300
#define __IPHONE_12_4 120400
#define NULL ((void *)0)
#define KERN_NOT_WAITING 48
#define _POSIX2_CHARCLASS_NAME_MAX 14
#define __CHAR16_TYPE__ short unsigned int
#define _ENOSR -63
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_3(x) 
#define _POSIX_SEM_NSEMS_MAX 256
#define E2BIG 7
#define PROCESSOR_TEMPERATURE 0x10000002
#define BIG_ENDIAN __DARWIN_BIG_ENDIAN
#define CPU_SUBTYPE_MC88100 ((cpu_subtype_t) 1)
#define ATOMIC_POINTER_LOCK_FREE __GCC_ATOMIC_POINTER_LOCK_FREE
#define _MACH_VM_PURGABLE_H_ 
#define __PTHREAD_COND_SIZE__ 40
#define __no_instrument_msan 
#define MATTR_VAL_CACHE_SYNC 9
#define __SIZE_WIDTH__ 64
#define EXC_MASK_MACH_SYSCALL (1 << EXC_MACH_SYSCALL)
#define SQLITE_IOERR_BEGIN_ATOMIC (SQLITE_IOERR | (29<<8))
#define INT_MIN (-INT_MAX - 1)
#define CPU_SUBTYPE_MC88110 ((cpu_subtype_t) 2)
#define KERN_INVALID_TASK 16
#define _STRUCT_FP_STATUS struct __darwin_fp_status
#define EXC_I386_NOEXTFLT 7
#define TCP_SENDMOREACKS 0x103
#define AF_NDRV 27
#define _CS_XBS5_ILP32_OFF32_LDFLAGS 21
#define SQLITE_READONLY_CANTLOCK (SQLITE_READONLY | (2<<8))
#define __UINT_LEAST32_MAX__ 0xffffffffU
#define CPU_SUBTYPE_MIPS_R2600 ((cpu_subtype_t) 2)
#define NOT_WITHIN 0
#define _PC_REC_XFER_ALIGN 23
#define KERN_RPC_TERMINATE_ORPHAN 44
#define OSSwapInt16(x) __DARWIN_OSSwapInt16(x)
#define SQLITE_OPEN_AUTOPROXY 0x00000020
#define _SC_MEMORY_PROTECTION 32
#define EXC_I386_EXTERRFLT 16
#define IN_CLASSB_NET 0xffff0000
#define x86_THREAD_STATE32 1
#define MACH_MSG_OOL_VOLATILE_DESCRIPTOR 3
#define ICMP6_FILTER 18
#define VM_PURGABLE_ORDERING_NORMAL (0 << VM_PURGABLE_ORDERING_SHIFT)
#define VM_PURGABLE_ORDERING_SHIFT 5
#define IPV6CTL_HDRNESTLIMIT 15
#define __INT_LEAST8_TYPE__ signed char
#define __RequestUnion__processor_subsystem__defined 
#define OSSwapConstInt16(x) __DARWIN_OSSwapConstInt16(x)
#define IPV6CTL_STATS 6
#define __darwin_obsz0(object) __builtin_object_size (object, 0)
#define SIGVTALRM_ 26
#define SQLITE_STATUS_MALLOC_COUNT 9
#define VM_MEMORY_OBJC_DISPATCHERS 34
#define MACH_MSG_PORT_DESCRIPTOR 0
#define TH_URG 0x20
#define PF_NETBIOS AF_NETBIOS
#define _ENOTNAM -118
#define SYNC_VOLUME_WAIT 0x02
#define SO_PEERLABEL 0x1011
#define OSSwapInt32(x) __DARWIN_OSSwapInt32(x)
#define MPG_FLAGS_STRICT_REPLY_INVALID_VOUCHER (0x04ull << 56)
#define SEEK_HOLE 3
#define MIG_ROUTINE_ARG_DESCRIPTOR_NULL ((mig_routine_arg_descriptor_t)0)
#define VM_MEMORY_GLSL 66
#define POLICY_FIFO_INFO_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_fifo_info)/sizeof(integer_t)))
#define UINTMAX_C(v) (v ## UL)
#define SCM_RIGHTS_ 1
#define x86_AVX512_STATE64_COUNT ((mach_msg_type_number_t) (sizeof(x86_avx512_state64_t)/sizeof(unsigned int)))
#define SO_SNDLOWAT 0x1003
#define __POSIX_C_DEPRECATED(ver) ___POSIX_C_DEPRECATED_STARTING_ ##ver
#define MACH_SEND_MSG 0x00000001
#define IPV6_2292RTHDR 24
#define ECONNRESET 54
#define _SYS_STDIO_H_ 
#define IPPROTO_LEAF1 25
#define EBADMACHO 88
#define X86_INSTRUCTION_STATE_COUNT x86_INSTRUCTION_STATE_COUNT
#define __TVOS_13_2 130200
#define RLIMIT_NLIMITS_ 16
#define SEGV_ACCERR 2
#define AF_SNA 11
#define FPC_DE 0x0002
#define _EFBIG -27
#define FPC_DM FPC_DE
#define SIGSTOP 17
#define ENXIO 6
#define VOUCHER_MACH_MSG_API_VERSION 20140205
#define __TVOS_13_3 130300
#define __TVOS_13_4 130400
#define _SC_THREAD_CPUTIME 84
#define _PC_EXTENDED_SECURITY_NP 13
#define _EHOSTDOWN -112
#define CLOCK_MONOTONIC _CLOCK_MONOTONIC
#define __STDIO_H_ 
#define EBADRPC 72
#define TASK_VM_INFO 22
#define NET_SERVICE_TYPE_OAM 7
#define x86_AVX_STATE32_COUNT ((mach_msg_type_number_t) (sizeof(x86_avx_state32_t)/sizeof(unsigned int)))
#define OSSwapInt64(x) __DARWIN_OSSwapInt64(x)
#define VM_MEMORY_LAYERKIT 51
#define __FLT64_HAS_QUIET_NAN__ 1
#define IS_ERR(ptr) ((uintptr_t) (ptr) > (uintptr_t) -0xfff)
#define _SECURE__STDIO_H_ 
#define TRACE(msg,...) TRACE_(DEFAULT_CHANNEL, msg, ##__VA_ARGS__)
#define WNOWAIT 0x00000020
#define MSG_EOR_ 0x80
#define MACH_MSGH_BITS_PORTS_MASK (MACH_MSGH_BITS_REMOTE_MASK | MACH_MSGH_BITS_LOCAL_MASK | MACH_MSGH_BITS_VOUCHER_MASK)
#define ITIMER_REAL_ 0
#define subsystem_to_name_map_lock_set { "lock_acquire", 617000 }, { "lock_release", 617001 }, { "lock_try", 617002 }, { "lock_make_stable", 617003 }, { "lock_handoff", 617004 }, { "lock_handoff_accept", 617005 }
#define TASK_SUPPRESSION_POLICY 3
#define SQLITE_CONFIG_LOOKASIDE 13
#define SQLITE_IOERR_WRITE (SQLITE_IOERR | (3<<8))
#define user_put_task(task,addr,var) user_write_task(task, addr, &(var), sizeof(var))
#define _MACH_MACHINE_THREAD_STATE_H_ 
#define L_XTND SEEK_END
#define X86_DEBUG_STATE32_COUNT x86_DEBUG_STATE32_COUNT
#define SIGTRAP_ 5
#define RLIMIT_FOOTPRINT_INTERVAL 0x4
#define KMOD_INFO_NAME kmod_info
#define OSSwapHostToBigInt(x) OSSwapHostToBigInt32(x)
#define INET6_ADDRSTRLEN 46
#define MACH_PORT_QLIMIT_LARGE (1024)
#define noreturn _Noreturn
#define IN_CLASSC_NET 0xffffff00
#define IPPROTO_WBEXPAK 79
#define IN_CLASSA_NSHIFT 24
#define ___POSIX_C_DEPRECATED_STARTING_199209L 
#define KEV_DL_LINK_OFF 12
#define MACH_SEND_INVALID_MEMORY 0x1000000c
#define MACH_RCV_TIMEOUT 0x00000100
#define IPPROTO_VMTP 81
#define __Reply__clock_priv_subsystem__defined 
#define KEV_DL_IF_DETACHED 11
#define SM_SHARED 4
#define __MAC_10_11_2 101102
#define _POSIX2_PBS_LOCATE (-1)
#define TCPCI_OPT_ECN 0x00000008
#define KERN_ABORTED 14
#define SQLITE_OPEN_READWRITE 0x00000002
#define VM_LEDGER_FLAGS (VM_LEDGER_FLAG_NO_FOOTPRINT)
#define _STRUCT_OPMASK_REG struct __darwin_opmask_reg
#define IPPORT_HILASTAUTO 65535
#define MSG_NOSIGNAL 0x80000
#define HOST_MAX_SPECIAL_KERNEL_PORT 7
#define atomic_compare_exchange_strong(PTR,VAL,DES) atomic_compare_exchange_strong_explicit (PTR, VAL, DES, __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST)
#define FPC_IC 0x1000
#define PF_LAT AF_LAT
#define FPC_IE 0x0001
#define TASK_VM_INFO_PURGEABLE 23
#define HOST_AUTOMOUNTD_PORT (4 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define __SRD 0x0004
#define MACH_PORT_QLIMIT_DEFAULT MACH_PORT_QLIMIT_BASIC
#define SQLITE_IOCAP_UNDELETABLE_WHEN_OPEN 0x00000800
#define __DARWIN_ONLY_64_BIT_INO_T 0
#define __SIGN 0x8000
#define __FLT64_HAS_INFINITY__ 1
#define MEMORY_OBJECT_RETURN_ALL 2
#define host_get_closured_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_CLOSURED_PORT, (port)))
#define _MACH_MEMORY_OBJECT_TYPES_H_ 
#define SQLITE_TRANSACTION 22
#define MACH_MSG_GUARD_FLAGS_UNGUARDED_ON_SEND 0x0002
#define false 0
#define IPV6_JOIN_GROUP 12
#define POLL_HUP 6
#define __ReplyUnion__vm_map_subsystem__defined 
#define __DARWIN_OSSwapInt16(x) ((__uint16_t)(__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt16(x) : _OSSwapInt16(x)))
#define __GNUC_VA_LIST 
#define _GCC_MAX_ALIGN_T 
#define MACH_RCV_TOO_LARGE 0x10004004
#define RLIMIT_NOFILE 8
#define MACH_PORT_TYPE_PORT_SET MACH_PORT_TYPE(MACH_PORT_RIGHT_PORT_SET)
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_3(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_4(x) x
#define _STRUCT_X86_PAGEIN_STATE struct __x86_pagein_state
#define SQLITE_CONFIG_SCRATCH 6
#define __OSX_EXTENSION_UNAVAILABLE(_msg) 
#define _XOPEN_REALTIME (-1)
#define KEV_DL_SIFGENERIC 6
#define assert(e) (__builtin_expect(!(e), 0) ? __assert_rtn(__func__, __FILE__, __LINE__, #e) : (void)0)
#define THREAD_MAX_SPECIAL_PORT THREAD_READ_PORT
#define MEMORY_OBJECT_TERMINATE_IDLE 0x1
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_5(x) 
#define x86_FLOAT_STATE 8
#define FILENAME_MAX 1024
#define SQLITE_OPEN_CREATE 0x00000004
#define SM_LARGE_PAGE 8
#define MEMORY_OBJECT_ATTRIBUTE_INFO 14
#define OS_INLINE static inline
#define WCOREDUMP(x) (_W_INT(x) & WCOREFLAG)
#define __DARWIN_OSSwapInt32(x) (__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt32(x) : _OSSwapInt32(x))
#define IPPROTO_RAW 255
#define __k8__ 1
#define __UINT16_TYPE__ short unsigned int
#define sub_emask (err_sub(0xfff))
#define DEBUG_instr DEBUG_all
#define MACH_RCV_HEADER_ERROR 0x1000400b
#define _SYS__PTHREAD_TYPES_H_ 
#define IPCTL_RTMINEXPIRE 6
#define NBBY __DARWIN_NBBY
#define err_get_system(err) (((err)>>26)&0x3f)
#define pun(type,x) (((union {typeof(x) _; type a;}) (x)).a)
#define FALSE 0
#define _POSIX_MEMLOCK_RANGE (-1)
#define VM_PROT_DEFAULT (VM_PROT_READ|VM_PROT_WRITE)
#define MAP_MEM_LEDGER_TAGGED 0x002000
#define IPPROTO_ICMP 1
#define __API_DEPRECATED_END 
#define __UINTPTR_MAX__ 0xffffffffffffffffUL
#define _POSIX_MQ_OPEN_MAX 8
#define __INT_FAST64_WIDTH__ 64
#define __volatile volatile
#define TRACE__(msg,...) printk(msg, ##__VA_ARGS__)
#define SQLITE_UTF8 1
#define SQLITE_PREPARE_PERSISTENT 0x01
#define SQLITE_LIMIT_COMPOUND_SELECT 4
#define FPC_OE 0x0008
#define MAX_TCPOPTLEN 40
#define __IPV6_ADDR_SCOPE_LINKLOCAL 0x02
#define MACH_MSGH_BITS_SET_PORTS(remote,local,voucher) (((remote) & MACH_MSGH_BITS_REMOTE_MASK) | (((local) << 8) & MACH_MSGH_BITS_LOCAL_MASK) | (((voucher) << 16) & MACH_MSGH_BITS_VOUCHER_MASK))
#define FPC_OM FPC_OE
#define SIGALRM 14
#define TCP_NODELAY_ 1
#define IPPROTO_RDP 27
#define _SC_CLOCK_SELECTION 67
#define INT_LEAST64_MIN INT64_MIN
#define SI_ASYNCIO 0x10004
#define OSSwapHostToBigInt16(x) OSSwapInt16(x)
#define __MAC_10_12_1 101201
#define PRIO_DARWIN_NONUI 0x1001
#define MACH_MSG_TYPE_MAKE_SEND 20
#define __MAC_10_12_4 101204
#define _CLOCK_T 
#define MAP_MEM_NAMED_REUSE 0x080000
#define _NLINK_T 
#define IPPROTO_CHAOS 16
#define KEV_INET_SIFDSTADDR 4
#define SQLITE_CONSTRAINT_PINNED (SQLITE_CONSTRAINT |(11<<8))
#define SQLITE_IOERR_TRUNCATE (SQLITE_IOERR | (6<<8))
#define FPC_PE 0x0020
#define SQLITE_TESTCTRL_BITVEC_TEST 8
#define _EINVAL -22
#define _EADDRINUSE -98
#define ETIME 101
#define SIGXFSZ_ 25
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define SQLITE_TESTCTRL_EXPLAIN_STMT 19
#define VM_MEMORY_ROSETTA_THREAD_CONTEXT 231
#define __FLT_DIG__ 6
#define _SC_RTSIG_MAX 48
#define __FLT_NORM_MAX__ 3.40282346638528859811704183484516925e+38F
#define HOST_FILECOORDINATIOND_PORT (23 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define KEV_INET6_NEW_USER_ADDR 1
#define INT_FAST32_MAX INT32_MAX
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_2(x) 
#define OSSwapHostToBigInt32(x) OSSwapInt32(x)
#define __FLT64X_MAX_EXP__ 16384
#define _SC_SS_REPL_MAX 126
#define __UINT_FAST64_TYPE__ long long unsigned int
#define KEV_DL_NODE_ABSENCE 22
#define MACH_VM_MIN_ADDRESS ((mach_vm_offset_t) 0)
#define IPV6_RTHDR_LOOSE 0
#define SQLITE_CONFIG_SERIALIZED 3
#define EXC_BAD_ACCESS 1
#define FPC_RC 0x0c00
#define OSReadBigInt(x,y) OSReadBigInt32(x, y)
#define SQLITE_STDCALL SQLITE_APICALL
#define _STRUCT_MCONTEXT_AVX512_32 struct __darwin_mcontext_avx512_32
#define VM_MEMORY_COREGRAPHICS_XALLOC 58
#define UINT_FAST8_MAX UINT8_MAX
#define SIG_SETMASK_ 2
#define VM_MEMORY_MALLOC_SMALL 2
#define __INT_MAX__ 0x7fffffff
#define VM_MEMORY_DYLD_MALLOC 61
#define SF_FLAG (1 << 7)
#define KERNEL_SECURITY_TOKEN_VALUE { {0, 1} }
#define PPNUM_MAX UINT32_MAX
#define STDIN_FILENO 0
#define IP_RSVP_VIF_ON 17
#define UINT8_MAX 255
#define NDR_FLOAT_CRAY 2
#define INADDR_ALLMDNS_GROUP (u_int32_t)0xe00000fb
#define IPV6CTL_MAXIFDEFROUTERS 48
#define HOST_SECURITY_PORT 0
#define CPU_SUBTYPE_ARM64_32_V8 ((cpu_subtype_t) 1)
#define OSSwapHostToBigInt64(x) OSSwapInt64(x)
#define SQLITE_OPEN_TRANSIENT_DB 0x00000400
#define TASK_SECURITY_TOKEN 13
#define MACH_RCV_SYNC_WAIT 0x00004000
#define IPPROTO_UDP 17
#define LLONG_MAX __LONG_LONG_MAX__
#define IPPROTO_MUX 18
#define ENOTRECOVERABLE 104
#define FIRST_EXCEPTION 1
#define atomic_fetch_xor(PTR,VAL) __atomic_fetch_xor ((PTR), (VAL), __ATOMIC_SEQ_CST)
#define VM_MEMORY_ACCOUNTS 98
#define SYNC_POLICY_FIFO 0x0
#define _EALREADY -114
#define stpcpy(dest,...) __builtin___stpcpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define VM_PURGABLE_BEHAVIOR_FIFO (0 << VM_PURGABLE_BEHAVIOR_SHIFT)
#define SQLITE_CONFIG_COVERING_INDEX_SCAN 20
#define __INT64_TYPE__ long long int
#define EIO 5
#define CLOCK_PROCESS_CPUTIME_ID _CLOCK_PROCESS_CPUTIME_ID
#define round_page_kernel(x) trunc_page_kernel((x) + vm_kernel_page_mask)
#define ENETUNREACH 51
#define EXDEV 18
#define _SC_PHYS_PAGES 200
#define HOST_RESOURCE_SIZES 4
#define _SC_ADVISORY_INFO 65
#define IPV6PORT_ANONMAX 65535
#define __Request__host_priv_subsystem__defined 
#define UINT32_C(v) (v ## U)
#define CMP_MACH_TIMESPEC(t1,t2) ((t1)->tv_sec > (t2)->tv_sec ? (long) +NSEC_PER_SEC : ((t1)->tv_sec < (t2)->tv_sec ? (long) -NSEC_PER_SEC : (t1)->tv_nsec - (t2)->tv_nsec))
#define _task_user_ 
#define SQLITE_OPEN_FULLMUTEX 0x00010000
#define __DBL_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define SQLITE_IOERR_VNODE (SQLITE_IOERR | (27<<8))
#define EXC_MASK_RPC_ALERT (1 << EXC_RPC_ALERT)
#define SQLITE_SUBTYPE 0x000100000
#define TCP_CONGESTION_ 13
#define CPUFAMILY_INTEL_NEHALEM 0x6b5a4cd2
#define _POSIX_V6_ILP32_OFF32 __ILP32_OFF32
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define host_set_iocompressionstats_port(host,port) (host_set_special_port((host), HOST_IOCOMPRESSIONSTATS_PORT, (port)))
#define VM_PROT_NONE ((vm_prot_t) 0x00)
#define SQLITE_LIMIT_VARIABLE_NUMBER 9
#define _POSIX_TRACE (-1)
#define MACH_VOUCHER_ATTR_KEY_USER_DATA ((mach_voucher_attr_key_t)7)
#define INT_FAST32_MIN INT32_MIN
#define __Reply__lock_set_subsystem__defined 
#define __WINT_TYPE__ int
#define _POSIX_FSYNC 200112L
#define STDOUT_FILENO 1
#define VM_MEMORY_RAWCAMERA 79
#define PTRACE_GETSIGINFO_ 0x4202
#define HOST_UNFREED_PORT (10 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define CPU_SUBTYPE_I860_860 ((cpu_subtype_t) 1)
#define TASK_BASIC_INFO_32_COUNT (sizeof(task_basic_info_32_data_t) / sizeof(natural_t))
#define _MACH_NDR_H_ 
#define EXC_MASK_SOFTWARE (1 << EXC_SOFTWARE)
#define MACH_VOUCHER_ATTR_KEY_NONE ((mach_voucher_attr_key_t)0)
#define _SC_GETPW_R_SIZE_MAX 71
#define _STRUCT_X86_AVX512_STATE64 struct __darwin_x86_avx512_state64
#define FPC_ZE 0x0004
#define AF_HYLINK 15
#define SQLITE_SCANSTAT_NLOOP 0
#define FPC_ZM FPC_ZE
#define IPPROTO_TRUNK2 24
#define user_get(addr,var) user_read(addr, &(var), sizeof(var))
#define __Reply__processor_set_subsystem__defined 
#define EXC_CORPSE_VARIANT_BIT 0x100
#define MAP_MEM_WCOMB 4
#define HOST_SEMAPHORE_TRAPS 7
#define EXC_MASK_ALL (EXC_MASK_BAD_ACCESS | EXC_MASK_BAD_INSTRUCTION | EXC_MASK_ARITHMETIC | EXC_MASK_EMULATION | EXC_MASK_SOFTWARE | EXC_MASK_BREAKPOINT | EXC_MASK_SYSCALL | EXC_MASK_MACH_SYSCALL | EXC_MASK_RPC_ALERT | EXC_MASK_RESOURCE | EXC_MASK_GUARD | EXC_MASK_MACHINE)
#define __FLT64_MAX__ 1.79769313486231570814527423731704357e+308F64
#define IPPROTO_GMTP 100
#define __KAME__ 
#define SQLITE_FLOAT 2
#define __DARWIN_C_FULL 900000L
#define PTRDIFF_MAX INTMAX_MAX
#define unix_err(errno) (err_kern|err_sub(3)|errno)
#define EPROCUNAVAIL 76
#define SQLITE_IOCAP_ATOMIC8K 0x00000020
#define _MACH_DYLIB_INFO_H_ 
#define VM_MEMORY_JAVA 44
#define AF (cpu->af_ops ? ((cpu->op1 ^ cpu->op2 ^ cpu->res) >> 4) & 1 : cpu->af)
#define SQLITE_STATUS_MEMORY_USED 0
#define FPE_NOOP 0
#define SQLITE_DROP_TEMP_TRIGGER 14
#define TASK_VM_INFO_REV4_COUNT ((mach_msg_type_number_t) (TASK_VM_INFO_REV5_COUNT - 1))
#define _POSIX_THREAD_PRIO_INHERIT (-1)
#define IN6ADDR_LINKLOCAL_ALLNODES_INIT {{{ 0xff, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01 }}}
#define EOF (-1)
#define SO_RCVBUF 0x1002
#define _POSIX2_PBS_MESSAGE (-1)
#define RLIMIT_CPU_USAGE_MONITOR 0x2
#define LLONG_MIN (-LLONG_MAX - 1LL)
#define host_set_lockd_port(host,port) (host_set_special_port((host), HOST_LOCKD_PORT, (port)))
#define MACH_PORT_RIGHT_RECEIVE ((mach_port_right_t) 1)
#define _MACH_MACHINE__STRUCTS_H_ 
#define SV_ONSTACK SA_ONSTACK
#define SIGTSTP 18
#define KERN_RPC_CONTINUE_ORPHAN 45
#define __SIZEOF_INT128__ 16
#define VM_MEMORY_CM_XPC 92
#define CF (cpu->cf)
#define SQLITE_STMTSTATUS_AUTOINDEX 3
#define __ReplyUnion__mach_port_subsystem__defined 
#define _EBFONT -59
#define NDR_FLOAT_IEEE 0
#define CPU_SUBTYPE_I386_ALL CPU_SUBTYPE_INTEL(3, 0)
#define _MACH_CLOCK_TYPES_H_ 
#define EXC_I386_INVTSSFLT 10
#define __ReplyUnion__task_subsystem__defined 
#define TCP_MAXWIN 65535
#define __LDBL_MAX_10_EXP__ 4932
#define TASK_POWER_INFO_V2_COUNT_OLD ((mach_msg_type_number_t) (sizeof (task_power_info_v2_data_t) - sizeof(uint64_t)*2) / sizeof (natural_t))
#define SQLITE_IOERR_CHECKRESERVEDLOCK (SQLITE_IOERR | (14<<8))
#define _POSIX_SEMAPHORES (-1)
#define SQLITE_OK_SYMLINK (SQLITE_OK | (2<<8))
#define __ATOMIC_RELAXED 0
#define FPS_ES 0x0080
#define _STRUCT_XMM_REG struct __darwin_xmm_reg
#define subsystem_to_name_map_host_priv { "host_get_boot_info", 400 }, { "host_reboot", 401 }, { "host_priv_statistics", 402 }, { "host_default_memory_manager", 403 }, { "vm_wire", 404 }, { "thread_wire", 405 }, { "vm_allocate_cpm", 406 }, { "host_processors", 407 }, { "host_get_clock_control", 408 }, { "kmod_create", 409 }, { "kmod_destroy", 410 }, { "kmod_control", 411 }, { "host_get_special_port", 412 }, { "host_set_special_port", 413 }, { "host_set_exception_ports", 414 }, { "host_get_exception_ports", 415 }, { "host_swap_exception_ports", 416 }, { "mach_vm_wire", 418 }, { "host_processor_sets", 419 }, { "host_processor_set_priv", 420 }, { "host_set_UNDServer", 423 }, { "host_get_UNDServer", 424 }, { "kext_request", 425 }
#define VM_MEMORY_MALLOC_NANO 11
#define __DBL_EPSILON__ ((double)2.22044604925031308084726333618164062e-16L)
#define glue4(a,b,c,d) glue(a, glue3(b, c, d))
#define IPCTL_INTRQDROPS 11
#define PTHREAD_PROCESS_PRIVATE 2
#define IPV6PORT_ANONMIN 49152
#define BC_SCALE_MAX 99
#define SQLITE_FCNTL_COMMIT_PHASETWO 22
#define IOPOL_SCOPE_THREAD 1
#define _PTHREAD_ATTR_T 
#define _SYS__SELECT_H_ 
#define ENOSTR 99
#define KERN_POLICY_LIMIT 27
#define VM_USRSTACK64 ((user_addr_t) 0x00007FFEEFC00000ULL)
#define IN6ADDR_NODELOCAL_ALLNODES_INIT {{{ 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01 }}}
#define SOCK_RDM 4
#define CMSG_SPACE(l) (__DARWIN_ALIGN32(sizeof(struct cmsghdr)) + __DARWIN_ALIGN32(l))
#define __API_AVAILABLE(...) 
#define x86_FLOAT_STATE_COUNT ((mach_msg_type_number_t) (sizeof(x86_float_state_t)/sizeof(unsigned int)))
#define IN_EXPERIMENTAL(i) (((u_int32_t)(i) & 0xf0000000) == 0xf0000000)
#define _INT8_T 
#define SIGKILL 9
#define _SC_RE_DUP_MAX 16
#define ESRCH 3
#define HOST_VM_PURGABLE 9
#define IPV6_FW_GET 34
#define __INT_LEAST32_TYPE__ int
#define IPPROTO_RVD 66
#define _SC_REGEXP 77
#define EHOSTDOWN 64
#define FTS5_TOKEN_COLOCATED 0x0001
#define CPU_SUBTYPE_INTEL_MODEL(x) ((x) >> 4)
#define OSSwapLittleToHostConstInt32(x) ((uint32_t)(x))
#define SQLITE_AUTH_USER (SQLITE_AUTH | (1<<8))
#define BAD_ALRMTYPE(t) (((t) &~ TIME_RELATIVE) != 0)
#define SEEK_END 2
#define __SIZEOF_WCHAR_T__ 4
#define MPO_STRICT 0x20
#define SQLITE_DBCONFIG_LEGACY_FILE_FORMAT 1016
#define __GNUC_PATCHLEVEL__ 0
#define __DARWIN_1050(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050)
#define EXC_MASK_BAD_ACCESS (1 << EXC_BAD_ACCESS)
#define MACH_MSGH_BITS_PORTS(bits) ((bits) & MACH_MSGH_BITS_PORTS_MASK)
#define DT_CHR 2
#define ENOLCK 77
#define ENFILE 23
#define TASK_ABSOLUTETIME_INFO 1
#define IPC_SPACE_READ_NULL ((ipc_space_read_t) 0)
#define IPV6CTL_RIP6STATS 36
#define _UUID_T 
#define x86_THREAD_STATE64 4
#define __FLT128_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define REQUESTED_TRAILER_SIZE_NATIVE(y) ((mach_msg_trailer_size_t) ((GET_RCV_ELEMENTS(y) == MACH_RCV_TRAILER_NULL) ? sizeof(mach_msg_trailer_t) : ((GET_RCV_ELEMENTS(y) == MACH_RCV_TRAILER_SEQNO) ? sizeof(mach_msg_seqno_trailer_t) : ((GET_RCV_ELEMENTS(y) == MACH_RCV_TRAILER_SENDER) ? sizeof(mach_msg_security_trailer_t) : ((GET_RCV_ELEMENTS(y) == MACH_RCV_TRAILER_AUDIT) ? sizeof(mach_msg_audit_trailer_t) : ((GET_RCV_ELEMENTS(y) == MACH_RCV_TRAILER_CTX) ? sizeof(mach_msg_context_trailer_t) : ((GET_RCV_ELEMENTS(y) == MACH_RCV_TRAILER_AV) ? sizeof(mach_msg_mac_trailer_t) : sizeof(mach_msg_max_trailer_t))))))))
#define USER_CODE_SELECTOR 0x0017
#define SQLITE_CONFIG_MALLOC 4
#define __DARWIN_OSSwapConstInt16(x) ((__uint16_t)((((__uint16_t)(x) & 0xff00U) >> 8) | (((__uint16_t)(x) & 0x00ffU) << 8)))
#define POLICY_FIFO 4
#define MACH_RCV_IN_PROGRESS 0x10004001
#define MACH_SEND_IN_PROGRESS 0x10000001
#define _STDDEF_H_ 
#define VM_MEMORY_COREUI 76
#define PAGE_MIN_SIZE (1 << PAGE_MIN_SHIFT)
#define KERN_ALREADY_WAITING 30
#define MAC_OS_X_VERSION_10_16 101600
#define zero_init(type) ((type[1]){}[0])
#define SQLITE_OPEN_EXCLUSIVE 0x00000010
#define KERN_SEMAPHORE_DESTROYED 42
#define ENOSYS 78
#define _SC_LOGIN_NAME_MAX 73
#define SA_RESTART 0x0002
#define SIGURG_ 23
#define CPU_TYPE_X86 ((cpu_type_t) 7)
#define ferror_unlocked(p) __sferror(p)
#define KERN_NOT_DEPRESSED 36
#define DT_DIR 4
#define __DARWIN_OSSwapConstInt32(x) ((__uint32_t)((((__uint32_t)(x) & 0xff000000U) >> 24) | (((__uint32_t)(x) & 0x00ff0000U) >> 8) | (((__uint32_t)(x) & 0x0000ff00U) << 8) | (((__uint32_t)(x) & 0x000000ffU) << 24)))
#define PAGE_BITS 12
#define MACH_MSGH_BITS_USER 0x801f1f1fU
#define PF_LOCAL AF_LOCAL
#define __INT_FAST8_TYPE__ signed char
#define SQLITE_FCNTL_HAS_MOVED 20
#define VM_PURGABLE_ALL_MASKS (VM_PURGABLE_STATE_MASK | VM_VOLATILE_ORDER_MASK | VM_PURGABLE_ORDERING_MASK | VM_PURGABLE_BEHAVIOR_MASK | VM_VOLATILE_GROUP_MASK | VM_PURGABLE_DEBUG_MASK | VM_PURGABLE_NO_AGING_MASK)
#define EOPNOTSUPP 102
#define _SC_TIMERS 41
#define TASK_VM_INFO_REV0_COUNT ((mach_msg_type_number_t) (TASK_VM_INFO_REV1_COUNT - 2))
#define MACH_RCV_INVALID_TYPE 0x1000400d
#define _MACH_DEBUG_VM_INFO_H_ 
#define DIRBLKSIZ 1024
#define MACH_MSGH_BITS_ZERO 0x00000000
#define _MACH_TASK_SPECIAL_PORTS_H_ 
#define host_set_closured_port(host,port) (host_set_special_port((host), HOST_CLOSURED_PORT, (port)))
#define CPUFAMILY_INTEL_6_13 0xaa33392b
#define PTRACE_POKETEXT_ 4
#define KERN_INVALID_MEMORY_CONTROL 34
#define va_arg(v,l) __builtin_va_arg(v,l)
#define PF_RES (1 << 0)
#define ITIMER_PROF_ 2
#define MACH_SEND_INVALID_RT_OOL_SIZE 0x10000015
#define WAIT_ANY (-1)
#define __FLT64_HAS_DENORM__ 1
#define MACH_MSGH_BITS_VOUCHER_MASK 0x001f0000
#define MACH_RCV_IN_PROGRESS_TIMED 0x10004011
#define __GETHOSTUUID_H 
#define RLIM_SAVED_CUR RLIM_INFINITY
#define VM_MIN_ADDRESS64 ((user_addr_t) 0x0000000000000000ULL)
#define _SYS_TYPES_H_ 
#define RUSAGE_INFO_V0 0
#define RUSAGE_INFO_V2 2
#define RUSAGE_INFO_V3 3
#define RUSAGE_INFO_V4 4
#define RUSAGE_INFO_V5 5
#define __FLT32X_NORM_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define __DARWIN_OSSwapConstInt64(x) ((__uint64_t)((((__uint64_t)(x) & 0xff00000000000000ULL) >> 56) | (((__uint64_t)(x) & 0x00ff000000000000ULL) >> 40) | (((__uint64_t)(x) & 0x0000ff0000000000ULL) >> 24) | (((__uint64_t)(x) & 0x000000ff00000000ULL) >> 8) | (((__uint64_t)(x) & 0x00000000ff000000ULL) << 8) | (((__uint64_t)(x) & 0x0000000000ff0000ULL) << 24) | (((__uint64_t)(x) & 0x000000000000ff00ULL) << 40) | (((__uint64_t)(x) & 0x00000000000000ffULL) << 56)))
#define LOCK_EX_ 2
#define PTRACE_GETREGS_ 12
#define SQLITE_OPEN_PRIVATECACHE 0x00040000
#define SQLITE_DESERIALIZE_FREEONCLOSE 1
#define SQLITE_CALLBACK 
#define ENOTSUP 45
#define __AVAILABILITY__ 
#define EXC_SOFT_SIGNAL 0x10003
#define SQLITE_IOCAP_SEQUENTIAL 0x00000400
#define RENAME_SWAP 0x00000002
#define ATOMIC_LONG_LOCK_FREE __GCC_ATOMIC_LONG_LOCK_FREE
#define PTHREAD_PRIO_NONE 0
#define R_OK (1<<2)
#define __TYPES_H_ 
#define SQLITE_TESTCTRL_ASSERT 12
#define _U_INT16_T 
#define __DARWIN_NSIG 32
#define __STDC_UTF_32__ 1
#define AF_DATAKIT 9
#define IPV6_PORTRANGE_LOW 2
#define OF (cpu->of)
#define RLIMIT_FSIZE 1
#define is_gcc(version) (__GNUC__ >= version)
#define __WATCHOS_4_0 40000
#define __WATCHOS_4_1 40100
#define __WATCHOS_4_3 40300
#define IP_PORTRANGE_DEFAULT 0
#define PROC_FLAG_APPLICATION 0x1000000
#define CLD_DUMPED 3
#define CLOCKS_PER_SEC 1000000
#define VM_SYNC_SYNCHRONOUS ((vm_sync_t) 0x02)
#define TCPOPT_SACK_HDR (TCPOPT_NOP<<24|TCPOPT_NOP<<16|TCPOPT_SACK<<8)
#define __FLT32X_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define SIGEV_SIGNAL 1
#define WEXITSTATUS(x) ((_W_INT(x) >> 8) & 0x000000ff)
#define SQLITE_DBSTATUS_LOOKASIDE_MISS_SIZE 5
#define PF (cpu->pf_res ? !__builtin_parity(cpu->res & 0xff) : cpu->pf)
#define FIXME(msg,...) printk("FIXME " msg "\n", ##__VA_ARGS__)
#define O_NONBLOCK_ (1 << 11)
#define SQLITE_IOERR_DELETE (SQLITE_IOERR | (10<<8))
#define IPPROTO_PIGP 9
#define EXC_MASK_CRASH (1 << EXC_CRASH)
#define QUAD_MIN LLONG_MIN
#define UTIL_DEBUG_H 
#define IPPROTO_PGM 113
#define SYSTEM_CLOCK 0
#define SQLITE_ROW 100
#define kill_dependency(Y) __extension__ ({ __auto_type __kill_dependency_tmp = (Y); __kill_dependency_tmp; })
#define FOPEN_MAX 20
#define MAX_FATAL_kGUARD_EXC_CODE (1u << 7)
#define SQLITE_OK 0
#define PF_OSI AF_ISO
#define MACH_SEND_INVALID_TYPE 0x1000000f
#define VM_PURGABLE_EMPTY 2
#define CPUSUBFAMILY_ARM_HG 2
#define VM_PROT_COPY ((vm_prot_t) 0x10)
#define CPUSUBFAMILY_ARM_HP 1
#define CPUSUBFAMILY_ARM_HS 4
#define MACH_PORT_INFO_EXT_COUNT ((natural_t) (sizeof(mach_port_info_ext_t)/sizeof(natural_t)))
#define __Reply__task_subsystem__defined 
#define __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ 110500
#define PASS_MAX 128
#define __wchar_t__ 
#define IPV6CTL_USE_DEPRECATED 21
#define VM_PURGABLE_STATE_MIN 0
#define posit assert
#define SF (cpu->sf_res ? (int32_t) cpu->res < 0 : cpu->sf)
#define SQLITE_STMTSTATUS_RUN 6
#define _STRING_H_ 
#define _POSIX_THREAD_PRIO_PROTECT (-1)
#define ___POSIX_C_DEPRECATED_STARTING_200112L 
#define L_SET SEEK_SET
#define GUARD_TYPE_VIRT_MEMORY 0x5
#define MACH_NOTIFY_PORT_DELETED (MACH_NOTIFY_FIRST + 001)
#define SET_MZI_COLLECTABLE_BYTES(val,size) (val) = ((val) & 1) | ((size) << 1)
#define has_attribute __has_attribute
#define VM_FLAGS_RETURN_DATA_ADDR 0x100000
#define TASK_CATEGORY_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (task_category_policy_data_t) / sizeof (integer_t)))
#define __INTMAX_MAX__ 0x7fffffffffffffffL
#define THREAD_IDENTIFIER_INFO 4
#define _POSIX_V6_ILP32_OFFBIG __ILP32_OFFBIG
#define MACH_VOUCHER_ATTR_CONTROL_NULL ((mach_voucher_attr_control_t) 0)
#define TASK_FLAGS_INFO 28
#define ESHLIBVERS 87
#define task_get_task_access_port(task,port) (task_get_special_port((task), TASK_ACCESS_PORT, (port)))
#define __FLT_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F
#define host_get_user_notification_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_USER_NOTIFICATION_PORT, (port)))
#define __IOS_AVAILABLE(_vers) 
#define MPO_IMMOVABLE_RECEIVE 0x80
#define CPU_SUBTYPE_UVAXIII ((cpu_subtype_t) 12)
#define _PC_CHOWN_RESTRICTED 7
#define SQLITE_CONFIG_PAGECACHE 7
#define PTRACE_PEEKDATA_ 2
#define PROC_FLAG_IOS_IMPPROMOTION 0x80000
#define VM_PURGABLE_SET_STATE ((vm_purgable_t) 0)
#define _SC_SYNCHRONIZED_IO 40
#define VM_BEHAVIOR_PAGEOUT ((vm_behavior_t) 11)
#define SQLITE_OPEN_READONLY 0x00000001
#define INADDR_MAX_LOCAL_GROUP (u_int32_t)0xe00000ff
#define _STRUCT_ZMM_REG struct __darwin_zmm_reg
#define TASK_AUDIT_TOKEN 15
#define IPPROTO_IRTP 28
#define MACH_VOUCHER_ATTR_KEY_BITS MACH_VOUCHER_ATTR_KEY_USER_DATA
#define _CS_XBS5_LPBIG_OFFBIG_LIBS 34
#define RLIMIT_NICE_ 13
#define __API_UNAVAILABLE_BEGIN(...) 
#define AF_DECnet 12
#define MACH_TASK_BASIC_INFO_COUNT (sizeof(mach_task_basic_info_data_t) / sizeof(natural_t))
#define THREAD_STATE_NONE 13
#define __LONG_WIDTH__ 64
#define SO_NWRITE 0x1024
#define SIG_ERR ((void (*)(int))-1)
#define _I386__PARAM_H_ 
#define WAKEMON_ENABLE 0x01
#define SQLITE_DBCONFIG_TRIGGER_EQP 1008
#define CHILD_MAX 266
#define POLICY_RR_INFO_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_rr_info)/sizeof(integer_t)))
#define __DARWIN_EXTSN(sym) __asm("_" __STRING(sym) __DARWIN_SUF_EXTSN)
#define __DARWIN_ALIGNBYTES (sizeof(__darwin_size_t) - 1)
#define EPFNOSUPPORT 46
#define __CHAR32_TYPE__ unsigned int
#define SQLITE_CONFIG_SMALL_MALLOC 27
#define MMAP_FIXED 0x10
#define IPCTL_DIRECTEDBROADCAST 9
#define THREAD_DEBUG_INFO_INTERNAL 6
#define SQLITE_DBCONFIG_ENABLE_TRIGGER 1003
#define FP_PREC_53B 2
#define LONG_BIT 64
#define __IPHONE_5_0 50000
#define _PTHREAD_RWLOCK_SIG_init 0x2DA8B3B4
#define __exported __attribute__((__visibility__("default")))
#define WINT_MIN INT32_MIN
#define host_set_dynamic_pager_port(host,port) (host_set_special_port((host), HOST_DYNAMIC_PAGER_PORT, (port)))
#define HOST_SYSDIAGNOSE_PORT (16 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define __DARWIN_ALIGNBYTES32 (sizeof(__uint32_t) - 1)
#define subsystem_to_name_map_task { "task_create", 3400 }, { "task_terminate", 3401 }, { "task_threads", 3402 }, { "mach_ports_register", 3403 }, { "mach_ports_lookup", 3404 }, { "task_info", 3405 }, { "task_set_info", 3406 }, { "task_suspend", 3407 }, { "task_resume", 3408 }, { "task_get_special_port", 3409 }, { "task_set_special_port", 3410 }, { "thread_create", 3411 }, { "thread_create_running", 3412 }, { "task_set_exception_ports", 3413 }, { "task_get_exception_ports", 3414 }, { "task_swap_exception_ports", 3415 }, { "lock_set_create", 3416 }, { "lock_set_destroy", 3417 }, { "semaphore_create", 3418 }, { "semaphore_destroy", 3419 }, { "task_policy_set", 3420 }, { "task_policy_get", 3421 }, { "task_sample", 3422 }, { "task_policy", 3423 }, { "task_set_emulation", 3424 }, { "task_get_emulation_vector", 3425 }, { "task_set_emulation_vector", 3426 }, { "task_set_ras_pc", 3427 }, { "task_zone_info", 3428 }, { "task_assign", 3429 }, { "task_assign_default", 3430 }, { "task_get_assignment", 3431 }, { "task_set_policy", 3432 }, { "task_get_state", 3433 }, { "task_set_state", 3434 }, { "task_set_phys_footprint_limit", 3435 }, { "task_suspend2", 3436 }, { "task_resume2", 3437 }, { "task_purgable_info", 3438 }, { "task_get_mach_voucher", 3439 }, { "task_set_mach_voucher", 3440 }, { "task_swap_mach_voucher", 3441 }, { "task_generate_corpse", 3442 }, { "task_map_corpse_info", 3443 }, { "task_register_dyld_image_infos", 3444 }, { "task_unregister_dyld_image_infos", 3445 }, { "task_get_dyld_image_infos", 3446 }, { "task_register_dyld_shared_cache_image_info", 3447 }, { "task_register_dyld_set_dyld_state", 3448 }, { "task_register_dyld_get_process_state", 3449 }, { "task_map_corpse_info_64", 3450 }, { "task_inspect", 3451 }, { "task_get_exc_guard_behavior", 3452 }, { "task_set_exc_guard_behavior", 3453 }, { "task_create_suid_cred", 3454 }, { "task_dyld_process_info_notify_register", 3456 }, { "task_create_identity_token", 3457 }, { "task_identity_token_get_task_port", 3458 }, { "task_dyld_process_info_notify_deregister", 3459 }, { "task_get_exception_ports_info", 3460 }
#define __IPV6_ADDR_SCOPE_NODELOCAL 0x01
#define THREAD_INFO_MAX (32)
#define UINT_LEAST32_MAX UINT32_MAX
#define SQLITE_IOERR_SHMMAP (SQLITE_IOERR | (21<<8))
#define ZF (cpu->zf_res ? cpu->res == 0 : cpu->zf)
#define SQLITE_OPEN_URI 0x00000040
#define _EXDEV -18
#define w_coredump w_T.w_Coredump
#define _ENAVAIL -119
#define x86_LAST_BRANCH_STATE 25
#define __AVAILABILITY_INTERNAL_UNAVAILABLE __attribute__((unavailable))
#define O_RDWR_ (1 << 1)
#define VM_REGION_SUBMAP_INFO_V0_COUNT_64 ((mach_msg_type_number_t) (VM_REGION_SUBMAP_INFO_V0_SIZE / sizeof (natural_t)))
#define IPV6CTL_SOURCECHECK_LOGINT 11
#define __AVAILABILITY_INTERNAL_DEPRECATED __attribute__((deprecated))
#define atomic_fetch_add_explicit(PTR,VAL,MO) __atomic_fetch_add ((PTR), (VAL), (MO))
#define SA_NODEFER 0x0010
#define SQLITE_DBSTATUS_MAX 12
#define _PTHREAD_COND_SIG_init 0x3CB0B1BB
#define MACH_RCV_TRAILER_TYPE(x) (((x) & 0xf) << 28)
#define POLL_PRI 5
#define _POSIX_NGROUPS_MAX 8
#define i386_THREAD_STATE 1
#define SIGILL 4
#define MSG_EOF 0x100
#define INADDR_ALLRPTS_GROUP (u_int32_t)0xe0000016
#define MACH_MSGH_BITS_IS_COMPLEX(bits) (((bits) & MACH_MSGH_BITS_COMPLEX) != MACH_MSGH_BITS_ZERO)
#define __OSX_AVAILABLE_STARTING(_osx,_ios) 
#define MAX_PID (1 << 15)
#define HOST_PRIV_NULL ((host_priv_t) 0)
#define AF_INET6_ PF_INET6_
#define IOPOL_MATERIALIZE_DATALESS_FILES_DEFAULT 0
#define MAX_PATH 4096
#define __FLT_MIN_10_EXP__ (-37)
#define EXC_BREAKPOINT 6
#define POLICY_RR_BASE_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_rr_base)/sizeof(integer_t)))
#define IN_LINKLOCALNETNUM (u_int32_t)0xA9FE0000
#define RLIMIT_CPU_ 0
#define SQLITE_INTERNAL 2
#define __DARWIN_FD_COPY(f,t) bcopy(f, t, sizeof(*(f)))
#define __FLT64_MIN__ 2.22507385850720138309023271733240406e-308F64
#define CPU_SUBTYPE_SPARC_ALL ((cpu_subtype_t) 0)
#define host_set_launchctl_port(host,port) (host_set_special_port((host), HOST_LAUNCHCTL_PORT, (port)))
#define ERRNO_DIE(msg) { perror(msg); abort(); }
#define __AVAILABILITY_INTERNAL__ 
#define __DARWIN_ALIGN32(p) ((__darwin_size_t)((__darwin_size_t)(p) + __DARWIN_ALIGNBYTES32) &~ __DARWIN_ALIGNBYTES32)
#define __INTMAX_TYPE__ long int
#define SQLITE_IOERR_READ (SQLITE_IOERR | (1<<8))
#define PAGE_MIN_SHIFT 12
#define SIGINT 2
#define SYNC_POLICY_LIFO (SYNC_POLICY_FIFO|SYNC_POLICY_REVERSED)
#define MACH_RCV_VOUCHER 0x00000800
#define UPDATE_IO_STATS_ATOMIC(info,io_size) { OSIncrementAtomic64((SInt64 *)&(info.count)); OSAddAtomic64(io_size, (SInt64 *)&(info.size)); }
#define CPUFAMILY_INTEL_6_23 CPUFAMILY_INTEL_PENRYN
#define VM_FLAGS_USER_MAP (VM_FLAGS_USER_ALLOCATE | VM_FLAGS_RETURN_4K_DATA_ADDR | VM_FLAGS_RETURN_DATA_ADDR)
#define HOST_CAN_HAS_DEBUGGER_COUNT ((mach_msg_type_number_t) (sizeof(host_can_has_debugger_info_data_t)/sizeof(integer_t)))
#define SO_LABEL 0x1010
#define _SC_V6_LPBIG_OFFBIG 106
#define VM_REGION_TOP_INFO 12
#define task_get_debug_control_port(task,port) (task_get_special_port((task), TASK_DEBUG_CONTROL_PORT, (port)))
#define CPU_SUBTYPE_VAX8600 ((cpu_subtype_t) 9)
#define CPUFAMILY_INTEL_6_26 CPUFAMILY_INTEL_NEHALEM
#define SIGIOT SIGABRT
#define WORD_BIT 32
#define SIGIO_ 29
#define _POSIX_TIMER_MAX 32
#define MAP_MEM_FLAGS_MASK 0x00FFFF00
#define FOOTPRINT_INTERVAL_RESET 0x1
#define __IPHONE_9_0 90000
#define KERN_MEMORY_DATA_MOVED 24
#define MACH_EXCEPTION_ERRORS 0x40000000
#define SQLITE_LIMIT_LIKE_PATTERN_LENGTH 8
#define __ATOMIC_CONSUME 1
#define IPPROTO_DGP 86
#define host_get_container_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_CONTAINERD_PORT, (port)))
#define TCPOPT_CCECHO 13
#define _MACH_BOOLEAN_H_ 
#define MACH_MSGH_BITS_RAISED_IMPORTANCE(bits) (((bits) & MACH_MSGH_BITS_RAISEIMP) != MACH_MSGH_BITS_ZERO)
#define SQLITE_SELECT 21
#define ___POSIX_C_DEPRECATED_STARTING_198808L 
#define d_fileno d_ino
#define CPU_TYPE_MC98000 ((cpu_type_t) 10)
#define x86_LAST_BRANCH_STATE_COUNT ((mach_msg_type_number_t)(sizeof(last_branch_state_t) / sizeof(int)))
#define LITTLE_ENDIAN __DARWIN_LITTLE_ENDIAN
#define _STRUCT_MCONTEXT_AVX32 struct __darwin_mcontext_avx32
#define __FLT32X_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F32x
#define FPC_UE 0x0010
#define __API_DEPRECATED_BEGIN_REP_GET_MACRO 
#define __unreachable_ok_pop _Pragma("GCC diagnostic pop")
#define atomic_load(PTR) atomic_load_explicit (PTR, __ATOMIC_SEQ_CST)
#define INTMAX_C(v) (v ## L)
#define PF_IPX AF_IPX
#define host_get_unfreed_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_UNFREED_PORT, (port)))
#define SQLITE_FCNTL_OVERWRITE 11
#define ILL_PRVOPC 3
#define TCPOPT_NOP 1
#define EADDRINUSE 48
#define BAD_PAGE 0x10000
#define _E2BIG -7
#define PAGE_SIZE (1 << PAGE_BITS)
#define TCPOLEN_CC_APPA (TCPOLEN_CC+2)
#define IN_CLASSC_NSHIFT 8
#define IPV6CTL_USETEMPADDR 32
#define x86_AVX512_STATE (x86_AVX512_STATE32 + 2)
#define SQLITE_CONFIG_GETPCACHE2 19
#define WCOREFLAG 0200
#define PF_CNT AF_CNT
#define fallthrough __attribute__((fallthrough))
#define IOPOL_DEFAULT 0
#define _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS 35
#define CPU_ARCH_MASK 0xff000000
#define host_set_amfid_port(host,port) (host_set_special_port((host), HOST_AMFID_PORT, (port)))
#define UNAME_LENGTH 65
#define _INO64_T 
#define POLL_IN 1
#define SCM_TIMESTAMP 0x02
#define PF_XTP pseudo_AF_XTP
#define CPU_SUBTYPE_VAX8650 ((cpu_subtype_t) 10)
#define SIGABRT_ 6
#define _STRUCT_MCONTEXT_AVX64 struct __darwin_mcontext_avx64
#define MAC_OS_X_VERSION_10_11_4 101104
#define VM_FLAGS_SUPERPAGE_SIZE_2MB (SUPERPAGE_SIZE_2MB<<VM_FLAGS_SUPERPAGE_SHIFT)
#define _U_SHORT 
#define SI_TIMER 0x10003
#define IPV6CTL_DAD_COUNT 16
#define TCP_NODELAY 0x01
#define _POSIX_THREAD_SAFE_FUNCTIONS 200112L
#define static_assert _Static_assert
#define _I386__LIMITS_H_ 
#define SA_SIGINFO_ 4
#define tcp6_seq tcp_seq
#define __IPHONE_13_0 130000
#define __IPHONE_13_1 130100
#define __IPHONE_13_2 130200
#define __IPHONE_13_3 130300
#define __IPHONE_13_4 130400
#define __IPHONE_13_5 130500
#define __IPHONE_13_6 130600
#define __IPHONE_13_7 130700
#define __ReplyUnion__mach_host_subsystem__defined 
#define sv_onstack sv_flags
#define _MACH_MIG_ERRORS_H_ 
#define AF_ISDN 28
#define MACH_PORT_LIMITS_INFO_COUNT ((natural_t) (sizeof(mach_port_limits_t)/sizeof(natural_t)))
#define CPU_SUBTYPE_INTEL_FAMILY(x) ((x) & 15)
#define RU_PROC_RUNS_RESLIDE 0x00000001
#define __Request__mach_port_subsystem__defined 
#define TASK_DYLD_INFO 17
#define IPV6_MULTICAST_LOOP 11
#define IPV6CTL_MAXDYNROUTES 49
#define __ATOMIC_SEQ_CST 5
#define _INT32_T 
#define SQLITE_SCANSTAT_NAME 3
#define SQLITE_LOCKED 6
#define TCPOLEN_WINDOW 3
#define TASK_FLAVOR_NAME 3
#define SQLITE_STMTSTATUS_REPREPARE 5
#define EXC_I386_BOUND 7
#define __WATCHOS_AVAILABLE(_vers) 
#define SQLITE_CONFIG_SQLLOG 21
#define AF_IMPLINK 3
#define ENOENT 2
#define atomic_load_explicit(PTR,MO) __extension__ ({ __auto_type __atomic_load_ptr = (PTR); __typeof__ ((void)0, *__atomic_load_ptr) __atomic_load_tmp; __atomic_load (__atomic_load_ptr, &__atomic_load_tmp, (MO)); __atomic_load_tmp; })
#define _ELIBACC -79
#define SQLITE_TESTCTRL_ISINIT 23
#define F80_NAN ((float80) {.signif = 0xc000000000000000, .exp = 0x7fff, .sign = 0})
#define _PTHREAD_KEY_T 
#define x86_THREAD_STATE32_COUNT ((mach_msg_type_number_t) ( sizeof (x86_thread_state32_t) / sizeof (int) ))
#define __UINT32_TYPE__ unsigned int
#define __Reply__mach_port_subsystem__defined 
#define __FLT32X_MIN_10_EXP__ (-307)
#define KMOD_INFO_VERSION 1
#define _ENXIO -6
#define MACH_MSGH_BITS_DENAP MACH_MSGH_BITS_RAISEIMP
#define __DARWIN_FD_ISSET(n,p) __darwin_fd_isset((n), (p))
#define SQLITE_IOERR_RDLOCK (SQLITE_IOERR | (9<<8))
#define VM_PURGABLE_DEBUG_FAULT (0x2 << VM_PURGABLE_DEBUG_SHIFT)
#define SIGTERM 15
#define IPV6_ADDR_MC_FLAGS_TRANSIENT 0x10
#define PROCESSOR_SET_BASIC_INFO 5
#define PTHREAD_KEYS_MAX 512
#define RLIMIT_NOFILE_ 7
#define HOST_LOAD_INFO_COUNT ((mach_msg_type_number_t) (sizeof(host_load_info_data_t)/sizeof(integer_t)))
#define IPV6_RTHDR_STRICT 1
#define __FLT128_EPSILON__ 1.92592994438723585305597794258492732e-34F128
#define vm_map_MSG_COUNT 33
#define MAP_MEM_USE_DATA_ADDR 0x100000
#define __Request__task_subsystem__defined 
#define MACH_PORT_STATUS_FLAG_NO_GRANT 0x80
#define VM_INHERIT_SHARE ((vm_inherit_t) 0)
#define _STRUCT_MCONTEXT_AVX512_64 struct __darwin_mcontext_avx512_64
#define __SIZEOF_LONG_LONG__ 8
#define HOST_NODE_PORT (19 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define __Request__clock_priv_subsystem__defined 
#define VM_MEMORY_ROSETTA_EXECUTABLE_HEAP 234
#define DT_FIFO 1
#define _ERANGE -34
#define TASK_DEBUG_INFO_INTERNAL 29
#define MAX_TRAILER_SIZE ((mach_msg_size_t)sizeof(mach_msg_max_trailer_t))
#define OSSwapBigToHostConstInt32(x) OSSwapConstInt32(x)
#define _GCC_PTRDIFF_T 
#define _ASSERT_H_ 
#define RLIMIT_STACK 3
#define PRIO_MAX 20
#define _POSIX_THREAD_KEYS_MAX 128
#define HOST_NOTIFY_TYPE_MAX 1
#define _EDEADLK -35
#define IPPROTO_ND 77
#define __FLT32X_MIN__ 2.22507385850720138309023271733240406e-308F32x
#define IPPROTO_IGMP 2
#define _PTHREAD_ONCE_T 
#define MACH_VOUCHER_ATTR_MANAGER_NULL ((mach_voucher_attr_manager_t) 0)
#define TF_64B_DATA 0x00000002
#define __dead2 __attribute__((__noreturn__))
#define __TVOS_14_0 140000
#define __TVOS_14_1 140100
#define __TVOS_14_3 140300
#define __LDBL_DIG__ 18
#define X86_EXCEPTION_STATE64_COUNT x86_EXCEPTION_STATE64_COUNT
#define THREAD_BACKGROUND_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (thread_background_policy_data_t) / sizeof (integer_t)))
#define EXC_MASK_BREAKPOINT (1 << EXC_BREAKPOINT)
#define __UINT_FAST16_MAX__ 0xffff
#define _PID_T 
#define PF_NS AF_NS
#define _MACH_EXCEPTION_TYPES_H_ 
#define va_copy(d,s) __builtin_va_copy(d,s)
#define MACH_PORT_STATUS_FLAG_STRICT_GUARD 0x04
#define HOST_DEBUG_INFO_INTERNAL 10
#define SO_RANDOMPORT 0x1082
#define _MODE_T 
#define ___int_ptrdiff_t_h 
#define _SC_BC_DIM_MAX 10
#define EFL_VIF 0x00080000
#define current_task() mach_task_self()
#define valid_switch_option(opt) (0 <= (opt) && (opt) <= 5)
#define CPU_SUBTYPE_UVAXI ((cpu_subtype_t) 5)
#define __APPLE_API_PRIVATE 
#define NDR_FLOAT_IBM 3
#define rdtsc() ({ uint32_t low, high; __asm__ volatile("rdtsc" : "=a" (high), "=d" (low)); ((uint64_t) high) << 32 | low; })
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define _OS__OSBYTEORDER_H 
#define EXC_I386_GPFLT 13
#define RLIMIT_THREAD_CPULIMITS 0x3
#define GET_MAP_MEM(flags) ((((unsigned int)(flags)) >> 24) & 0xFF)
#define PF_VSOCK AF_VSOCK
#define MACH_PORT_DNREQUESTS_SIZE 3
#define VM_PAGE_INFO_BASIC_COUNT ((mach_msg_type_number_t) (sizeof(vm_page_info_basic_data_t)/sizeof(int)))
#define OSSwapBigToHostConstInt64(x) OSSwapConstInt64(x)
#define x86_EXCEPTION_STATE64 6
#define VM_MEMORY_GUARD 31
#define glue3(a,b,c) glue(a, glue(b, c))
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_1(x) x
#define BITS_SIZE(bits) ((((bits) - 1) / 8) + 1)
#define VM_FLAGS_RESILIENT_CODESIGN 0x0020
#define __SIG_ATOMIC_MAX__ 0x7fffffff
#define IOPOL_VFS_TRIGGER_RESOLVE_OFF 1
#define _MACH_DEBUG_HASH_INFO_H_ 
#define NET_RT_DUMP 1
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_4(x) 
#define atomic_compare_exchange_weak(PTR,VAL,DES) atomic_compare_exchange_weak_explicit (PTR, VAL, DES, __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST)
#define __WCHAR_T 
#define MAP_MEM_PURGABLE_KERNEL_ONLY 0x004000
#define FPE_FLTUND 3
#define KEV_DL_SIFPHYS 4
#define X_OK (1<<0)
