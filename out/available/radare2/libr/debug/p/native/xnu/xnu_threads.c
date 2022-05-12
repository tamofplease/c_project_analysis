#define THREAD_CONVERT_THREAD_STATE_FROM_SELF 2
#define sa_sigaction __sigaction_u.__sa_sigaction
#define TCP_KEEPCNT 0x102
#define setbit(a,i) (((unsigned char *)(a))[(i)/NBBY] |= 1u<<((i)%NBBY))
#define MACH_SEND_TIMEOUT 0x00000010
#define GET_RCV_ELEMENTS(y) (((y) >> 24) & 0xf)
#define HW_AVAILCPU 25
#define CPU_STATE_IDLE 2
#define A_GETSTAT 12
#define _Nullable 
#define VM_BEHAVIOR_FREE ((vm_behavior_t) 6)
#define EFL_VIP 0x00100000
#define _CS_POSIX_V6_LP64_OFF64_CFLAGS 8
#define SEG_OBJC "__OBJC"
#define __strftimelike(fmtarg) __attribute__((__format__ (__strftime__, fmtarg, 0)))
#define __DBL_MIN_EXP__ (-1021)
#define __ILP32_OFFBIG (-1)
#define TCPOPT_SACK_PERMITTED 4
#define HOST_NOTIFY_CALENDAR_SET 1
#define EXPORT_SYMBOL_FLAGS_STUB_AND_RESOLVER 0x10
#define PROC_DIRTY_ALLOWS_IDLE_EXIT 0x2
#define LC_UNIXTHREAD 0x5
#define AU_ASSIGN_ASID -1
#define PROC_PIDTASKALLINFO_SIZE (sizeof(struct proc_taskallinfo))
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_4(x) x
#define _UINT64_T 
#define AF_MAX 41
#define _POSIX_THREAD_PRIORITY_SCHEDULING (-1)
#define PF_RESERVED_36 AF_RESERVED_36
#define MH_TWOLEVEL 0x80
#define PRIO_MIN -20
#define __UINT_LEAST16_MAX__ 0xffff
#define _MACH_VM_SYNC_H_ 
#define F_GETLK 7
#define MAX_SECT 255
#define _XOPEN_STREAMS (-1)
#define HW_PRODUCT 27
#define VOL_CAP_INT_RENAME_SWAP 0x00040000
#define CMSG_NXTHDR(mhdr,cmsg) ((char *)(cmsg) == (char *)0L ? CMSG_FIRSTHDR(mhdr) : ((((unsigned char *)(cmsg) + __DARWIN_ALIGN32((__uint32_t)(cmsg)->cmsg_len) + __DARWIN_ALIGN32(sizeof(struct cmsghdr))) > ((unsigned char *)(mhdr)->msg_control + (mhdr)->msg_controllen)) ? (struct cmsghdr *)0L : (struct cmsghdr *)(void *)((unsigned char *)(cmsg) + __DARWIN_ALIGN32((__uint32_t)(cmsg)->cmsg_len))))
#define __RequestUnion__mach_port_subsystem__defined 
#define __FLT128_MAX_10_EXP__ 4932
#define RE_DUP_MAX 255
#define VM_MEMORY_ASSETSD 72
#define x86_DEBUG_STATE32_COUNT ((mach_msg_type_number_t) ( sizeof (x86_debug_state32_t) / sizeof (int) ))
#define VM_MEMORY_CARBON VM_MEMORY_CORESERVICES
#define IN_LINKLOCAL(i) (((u_int32_t)(i) & IN_CLASSB_NET) == IN_LINKLOCALNETNUM)
#define PUSER 50
#define _SC_NGROUPS_MAX 4
#define VM_MAP_INSPECT_NULL ((vm_map_inspect_t) 0)
#define API_DEPRECATED_BEGIN(...) 
#define HAVE_SIGACTION 0
#define IN6ADDR_MULTICAST_PREFIX IN6MASK8
#define TASK_EXC_GUARD_ALL 0xff
#define APPLE_IF_FAM_SLIP 3
#define PZERO 22
#define FD_COPY(f,t) __DARWIN_FD_COPY(f, t)
#define __DARWIN_NFDBITS (sizeof(__int32_t) * __DARWIN_NBBY)
#define _SC_SPIN_LOCKS 80
#define TAILQ_INSERT_BEFORE(listelm,elm,field) do { TAILQ_CHECK_PREV(listelm, field); (elm)->field.tqe_prev = (listelm)->field.tqe_prev; TAILQ_NEXT((elm), field) = (listelm); *(listelm)->field.tqe_prev = (elm); (listelm)->field.tqe_prev = &TAILQ_NEXT((elm), field); QMD_TRACE_ELEM(&(elm)->field); QMD_TRACE_ELEM(&listelm->field); } while (0)
#define KERN_CLASSICHANDLER KERN_EXEC
#define CPU_SUBTYPE_HPPA_7100LC ((cpu_subtype_t) 1)
#define _WATTR_OK (1<<16)
#define task_get_bootstrap_port(task,port) (task_get_special_port((task), TASK_BOOTSTRAP_PORT, (port)))
#define PROC_FLAG_SYSTEM 1
#define _SC_IPV6 118
#define KERN_TFP_POLICY 1
#define MEMORY_OBJECT_RELEASE_NO_OP 0x4
#define time_value_add(result,addend) { (result)->microseconds += (addend)->microseconds; (result)->seconds += (addend)->seconds; if ((result)->microseconds >= TIME_MICROS_MAX) { (result)->microseconds -= TIME_MICROS_MAX; (result)->seconds++; } }
#define VM_PAGE_INFO_MAX 
#define MAC_OS_X_VERSION_10_3 1030
#define OSSwapHostToLittleConstInt64(x) ((uint64_t)(x))
#define ACCESSPERMS (S_IRWXU|S_IRWXG|S_IRWXO)
#define __MAC_10_13_1 101301
#define __MAC_10_13_2 101302
#define __MAC_10_13_4 101304
#define HEADER_SIZE 0x1000
#define IP_TOS 3
#define __INT_FAST8_TYPE__ signed char
#define __IPHONE_14_3 140300
#define BIND_OPCODE_SET_DYLIB_SPECIAL_IMM 0x30
#define KERN_KDREADCURTHRMAP 21
#define VM_PURGABLE_DEBUG_MASK (0x3 << VM_PURGABLE_DEBUG_SHIFT)
#define A_SETKMASK 5
#define _SC_EXPR_NEST_MAX 14
#define IPPROTO_SEP 33
#define EXC_SYSCALL 7
#define SIGBUS 10
#define STAILQ_INIT(head) do { STAILQ_FIRST((head)) = NULL; (head)->stqh_last = &STAILQ_FIRST((head)); } while (0)
#define TASK_BASIC_INFO_64_COUNT (sizeof(task_basic_info_64_data_t) / sizeof(natural_t))
#define NL_NMAX 1
#define ATTR_CMN_ACCESSMASK 0x00020000
#define HAVE_LIBUV 1
#define __enum_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_open
#define VM_MEMORY_EAR_DECODER 102
#define IPPROTO_IDPR 35
#define IPPROTO_NVPII 11
#define EXC_BAD_INSTRUCTION 2
#define AT_EACCESS 0x0010
#define subsystem_to_name_map_task { "task_create", 3400 }, { "task_terminate", 3401 }, { "task_threads", 3402 }, { "mach_ports_register", 3403 }, { "mach_ports_lookup", 3404 }, { "task_info", 3405 }, { "task_set_info", 3406 }, { "task_suspend", 3407 }, { "task_resume", 3408 }, { "task_get_special_port", 3409 }, { "task_set_special_port", 3410 }, { "thread_create", 3411 }, { "thread_create_running", 3412 }, { "task_set_exception_ports", 3413 }, { "task_get_exception_ports", 3414 }, { "task_swap_exception_ports", 3415 }, { "lock_set_create", 3416 }, { "lock_set_destroy", 3417 }, { "semaphore_create", 3418 }, { "semaphore_destroy", 3419 }, { "task_policy_set", 3420 }, { "task_policy_get", 3421 }, { "task_sample", 3422 }, { "task_policy", 3423 }, { "task_set_emulation", 3424 }, { "task_get_emulation_vector", 3425 }, { "task_set_emulation_vector", 3426 }, { "task_set_ras_pc", 3427 }, { "task_zone_info", 3428 }, { "task_assign", 3429 }, { "task_assign_default", 3430 }, { "task_get_assignment", 3431 }, { "task_set_policy", 3432 }, { "task_get_state", 3433 }, { "task_set_state", 3434 }, { "task_set_phys_footprint_limit", 3435 }, { "task_suspend2", 3436 }, { "task_resume2", 3437 }, { "task_purgable_info", 3438 }, { "task_get_mach_voucher", 3439 }, { "task_set_mach_voucher", 3440 }, { "task_swap_mach_voucher", 3441 }, { "task_generate_corpse", 3442 }, { "task_map_corpse_info", 3443 }, { "task_register_dyld_image_infos", 3444 }, { "task_unregister_dyld_image_infos", 3445 }, { "task_get_dyld_image_infos", 3446 }, { "task_register_dyld_shared_cache_image_info", 3447 }, { "task_register_dyld_set_dyld_state", 3448 }, { "task_register_dyld_get_process_state", 3449 }, { "task_map_corpse_info_64", 3450 }, { "task_inspect", 3451 }, { "task_get_exc_guard_behavior", 3452 }, { "task_set_exc_guard_behavior", 3453 }, { "task_create_suid_cred", 3454 }, { "task_dyld_process_info_notify_register", 3456 }, { "task_create_identity_token", 3457 }, { "task_identity_token_get_task_port", 3458 }, { "task_dyld_process_info_notify_deregister", 3459 }, { "task_get_exception_ports_info", 3460 }
#define __deprecated_msg(_msg) __attribute__((__deprecated__(_msg)))
#define __DARWIN_howmany(x,y) ((((x) % (y)) == 0) ? ((x) / (y)) : (((x) / (y)) + 1))
#define NOTE_PCTRLMASK (~NOTE_PDATAMASK)
#define __DARWIN_INODE64(sym) __asm("_" __STRING(sym) __DARWIN_SUF_64_BIT_INO_T)
#define SLIST_INSERT_HEAD(head,elm,field) do { SLIST_NEXT((elm), field) = SLIST_FIRST((head)); SLIST_FIRST((head)) = (elm); } while (0)
#define MACH_RCV_TRAILER_SEQNO 1
#define HAVE_JEMALLOC 1
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_0(x) 
#define __CHAR_BIT__ 8
#define MNT_UNION 0x00000020
#define STAILQ_SWAP(head1,head2,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH do { struct type *swap_first = STAILQ_FIRST(head1); struct type **swap_last = (head1)->stqh_last; STAILQ_FIRST(head1) = STAILQ_FIRST(head2); (head1)->stqh_last = (head2)->stqh_last; STAILQ_FIRST(head2) = swap_first; (head2)->stqh_last = swap_last; if (STAILQ_EMPTY(head1)) (head1)->stqh_last = &STAILQ_FIRST(head1); if (STAILQ_EMPTY(head2)) (head2)->stqh_last = &STAILQ_FIRST(head2); } while (0) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define RTV_SPIPE 0x10
#define ENOTSOCK 38
#define VQ_DEAD 0x0020
#define MACH_PORT_TYPE_SEND MACH_PORT_TYPE(MACH_PORT_RIGHT_SEND)
#define PROC_PIDFDVNODEPATHINFO_SIZE (sizeof(struct vnode_fdinfowithpath))
#define PROC_PIDREGIONINFO 7
#define _TIME_H_ 
#define A_OLDSETPOLICY 3
#define _SC_THREAD_SAFE_FUNCTIONS 91
#define VM_MEMORY_SHARED_PMAP 32
#define EWOULDBLOCK EAGAIN
#define SHRT_MAX __SHRT_MAX__
#define IPPROTO_IPCOMP 108
#define MPG_IMMOVABLE_RECEIVE 0x02
#define SIGTTIN 21
#define VFS_CTL_OSTATFS 0x00010001
#define PT_FIRSTMACH 32
#define IOPOL_VFS_STATFS_NO_DATA_VOLUME_DEFAULT 0
#define IPPROTO_IDRP 45
#define _SC_COLL_WEIGHTS_MAX 13
#define _PTHREAD_RWLOCKATTR_T 
#define IFF_ALLMULTI 0x200
#define SOCK_RAW 3
#define XUCRED_VERSION 0
#define CPU_SUBTYPE_X86_64_H ((cpu_subtype_t)8)
#define KIPC_MAX_DATALEN 7
#define AUDIT_TRIGGER_READ_FILE 3
#define EDESTADDRREQ 39
#define CPU_SUBTYPE_MIPS_R2000 ((cpu_subtype_t) 5)
#define LIST_INSERT_HEAD(head,elm,field) do { LIST_CHECK_HEAD((head), field); if ((LIST_NEXT((elm), field) = LIST_FIRST((head))) != NULL) LIST_FIRST((head))->field.le_prev = &LIST_NEXT((elm), field); LIST_FIRST((head)) = (elm); (elm)->field.le_prev = &LIST_FIRST((head)); } while (0)
#define _SC_XBS5_ILP32_OFF32 122
#define PIPE_BUF 512
#define CTLTYPE_INT 2
#define IP_TTL 4
#define NET_RT_TRASH 5
#define IN_CLASSB_MAX 65536
#define CTL_HW_NAMES { { 0, 0 }, { "machine", CTLTYPE_STRING }, { "model", CTLTYPE_STRING }, { "ncpu", CTLTYPE_INT }, { "byteorder", CTLTYPE_INT }, { "physmem", CTLTYPE_INT }, { "usermem", CTLTYPE_INT }, { "pagesize", CTLTYPE_INT }, { "disknames", CTLTYPE_STRUCT }, { "diskstats", CTLTYPE_STRUCT }, { "epoch", CTLTYPE_INT }, { "floatingpoint", CTLTYPE_INT }, { "machinearch", CTLTYPE_STRING }, { "vectorunit", CTLTYPE_INT }, { "busfrequency", CTLTYPE_INT }, { "cpufrequency", CTLTYPE_INT }, { "cachelinesize", CTLTYPE_INT }, { "l1icachesize", CTLTYPE_INT }, { "l1dcachesize", CTLTYPE_INT }, { "l2settings", CTLTYPE_INT }, { "l2cachesize", CTLTYPE_INT }, { "l3settings", CTLTYPE_INT }, { "l3cachesize", CTLTYPE_INT }, { "tbfrequency", CTLTYPE_INT }, { "memsize", CTLTYPE_QUAD }, { "availcpu", CTLTYPE_INT }, { "target", CTLTYPE_STRING }, { "product", CTLTYPE_STRING }, }
#define A_GETCWD 8
#define MACH_PORT_TYPE_PORT_OR_DEAD (MACH_PORT_TYPE_PORT_RIGHTS|MACH_PORT_TYPE_DEAD_NAME)
#define __OSX_AVAILABLE_BUT_DEPRECATED(_osxIntro,_osxDep,_iosIntro,_iosDep) 
#define R2_VERSION "5.5.4"
#define MACH_MSG_TYPE_DISPOSE_SEND_ONCE 26
#define SF_SYNTHETIC 0xc0000000
#define LC_LOAD_WEAK_DYLIB (0x18 | LC_REQ_DYLD)
#define HW_L1ICACHESIZE 17
#define TASK_BOOTSTRAP_PORT 4
#define __improbable(x) (x)
#define va_start(v,l) __builtin_va_start(v,l)
#define _PC_CASE_PRESERVING 12
#define R2_VERSION_COMMIT 27746
#define SOCK_RDM 4
#define TH_CWR 0x80
#define ITIMER_VIRTUAL 1
#define RLIM_NLIMITS 9
#define _PTHREAD_CONDATTR_T 
#define PF_DECnet AF_DECnet
#define MH_NO_REEXPORTED_DYLIBS 0x100000
#define IPPROTO_VISA 70
#define IPV6_CHECKSUM 26
#define EMLINK 31
#define __ORDER_LITTLE_ENDIAN__ 1234
#define IP_MAX_MEMBERSHIPS 4095
#define AUDIT_RECORD_MAGIC 0x828a0f1b
#define _SC_TIMER_MAX 52
#define HAVE_LIB_SSL 0
#define IPV6CTL_AUTO_FLOWLABEL 17
#define VM_FLAGS_FIXED 0x0000
#define KERN_RESOURCE_SHORTAGE 6
#define LC_REEXPORT_DYLIB (0x1f | LC_REQ_DYLD)
#define MACH_RCV_NOTIFY 0x00000000
#define USER_POSIX2_FORT_RUN 15
#define _POSIX_FSYNC 200112L
#define KERN_RAGEVNODE 68
#define __DARWIN_PDP_ENDIAN 3412
#define P_RESV11 0x08000000
#define __DBL_DENORM_MIN__ ((double)4.94065645841246544176568792868221372e-324L)
#define PROC_PIDFDPIPEINFO 6
#define __IPHONE_7_0 70000
#define PROC_PIDVNODEPATHINFO 9
#define PCATCH 0x100
#define host_priv_MSG_COUNT 26
#define ifr_broadaddr ifr_ifru.ifru_broadaddr
#define IOPOL_TYPE_VFS_IGNORE_CONTENT_PROTECTION 6
#define MCAST_LEAVE_SOURCE_GROUP 83
#define VM_PROT_ALL (VM_PROT_READ|VM_PROT_WRITE|VM_PROT_EXECUTE)
#define _CS_DARWIN_USER_DIR 65536
#define TSI_S_LAST_ACK 8
#define __FLT32X_DECIMAL_DIG__ 17
#define F_RDLCK 1
#define ATTR_CMN_FNDRINFO 0x00004000
#define EXC_I386_STKFLT 12
#define __IOS_PROHIBITED 
#define x86_AVX_STATE_COUNT ((mach_msg_type_number_t) (sizeof(x86_avx_state_t)/sizeof(unsigned int)))
#define REFERENCED_DYNAMICALLY 0x0010
#define EXC_MASK_BAD_INSTRUCTION (1 << EXC_BAD_INSTRUCTION)
#define NeXTBSD4_0 0
#define SHRT_MIN (-SHRT_MAX - 1)
#define KERN_NOT_SUPPORTED 46
#define LC_DYLD_INFO_ONLY (0x22|LC_REQ_DYLD)
#define MACH_SEND_NO_BUFFER 0x1000000d
#define N_STAB 0xe0
#define _MACH_NOTIFY_H_ 
#define SRCHFS_SKIPINVISIBLE 0x00000020
#define S_ATTR_PURE_INSTRUCTIONS 0x80000000
#define EVFILT_SIGNAL (-6)
#define R2_THEMES R_JOIN_4_PATHS ("share", "radare2", R2_VERSION, "cons")
#define MPO_TEMPOWNER 0x04
#define MEMORY_OBJECT_DATA_PURGE 0x4
#define IP_FW_GET 44
#define API_UNAVAILABLE_END 
#define _XOPEN_VERSION 600
#define OSSwapHostToLittleInt16(x) ((uint16_t)(x))
#define EVFILT_TIMER (-7)
#define ___POSIX_C_DEPRECATED_STARTING_199309L 
#define TH_USAGE_SCALE 1000
#define _LIMITS_H_ 
#define OSSwapHostToLittleConstInt16(x) ((uint16_t)(x))
#define VM_BEHAVIOR_SEQUENTIAL ((vm_behavior_t) 2)
#define MACH_SEND_NO_GRANT_DEST 0x10000016
#define VM_PURGABLE_DEBUG_FAULT (0x2 << VM_PURGABLE_DEBUG_SHIFT)
#define MEMORY_OBJECT_COPY_NONE 0
#define HW_MEMSIZE 24
#define _MACH_SEMAPHORE_H_ 
#define w_termsig w_T.w_Termsig
#define MH_ALLOW_STACK_EXECUTION 0x20000
#define R2_HOME_BIN R_JOIN_3_PATHS (R2_HOME_DATADIR, "prefix", "bin")
#define CRF_NOMEMBERD 0x00000001
#define _MACH_VM_PROT_H_ 
#define __x86_64 1
#define PROC_FI_GUARD_DUP (1u << 1)
#define MACH_MSGH_KIND_NORMAL 0x00000000
#define ATTR_CMN_DATA_PROTECT_FLAGS 0x40000000
#define KERN_DUMPDEV 31
#define __DARWIN_SUF_1050 "$1050"
#define _OS__OSBYTEORDERI386_H 
#define ATTR_CMNEXT_RELPATH 0x00000004
#define RTAX_IFP 4
#define KERN_HOSTID 11
#define INDIRECT_SYMBOL_ABS 0x40000000
#define EQUIV_CLASS_MAX 2
#define IPPROTO_XNET 15
#define TSI_S_CLOSING 7
#define VM_BEHAVIOR_REUSABLE ((vm_behavior_t) 8)
#define BSD4_4 1
#define VOL_CAP_INT_EXTENDED_SECURITY 0x00000400
#define RTA_BRD 0x80
#define SIGPROF 27
#define IFF_MULTICAST 0x8000
#define IPV6_MAX_SOCK_SRC_FILTER 128
#define EV_DISPATCH2 (EV_DISPATCH | EV_UDATA_SPECIFIC)
#define CIRCLEQ_NEXT(elm,field) ((elm)->field.cqe_next)
#define NOTE_NSECONDS 0x00000004
#define host_get_dynamic_pager_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_DYNAMIC_PAGER_PORT, (port)))
#define FPC_UE 0x0010
#define AUDIT_TRIGGER_ROTATE_USER 6
#define __UINT_FAST64_MAX__ 0xffffffffffffffffULL
#define KERN_UNOPENEVT_PROC 2
#define __SIG_ATOMIC_TYPE__ int
#define VOL_CAP_FMT_OPENDENYMODES 0x00001000
#define ATTR_VOL_FSTYPE 0x00000001
#define N_SYMBOL_RESOLVER 0x0100
#define MACH_MEMORY_INFO_NAME_MAX_LEN 80
#define A_GETSINFO_ADDR 32
#define PROX_FDTYPE_VNODE 1
#define CTLFLAG_SECURE 0x08000000
#define PF_CCITT AF_CCITT
#define __DBL_MIN_10_EXP__ (-307)
#define ENOTTY 25
#define MH_PRELOAD 0x5
#define R2_HOME_DATADIR R_JOIN_3_PATHS (".local", "share", "radare2")
#define KERN_PROF 16
#define BIND_TYPE_TEXT_ABSOLUTE32 2
#define SYNC_POLICY_MAX 0x7
#define _SC_MQ_PRIO_MAX 75
#define SIGXFSZ 25
#define _SC_PAGE_SIZE _SC_PAGESIZE
#define MACH_MSG_NULL (mach_msg_header_t *) 0
#define OSSwapConstInt16(x) __DARWIN_OSSwapConstInt16(x)
#define A_SETSFLAGS 40
#define IOPOL_TYPE_VFS_STATFS_NO_DATA_VOLUME 4
#define __cold __attribute__((__cold__))
#define HOST_LOAD_INFO 1
#define R2_HOME_CACHEDIR R_JOIN_2_PATHS (".cache", "radare2")
#define KOBJECT_DESCRIPTION_LENGTH 512
#define _SC_MEMLOCK_RANGE 31
#define VM_INHERIT_NONE ((vm_inherit_t) 2)
#define EXC_I386_DIVERR 0
#define LC_FVMFILE 0x9
#define PLATFORM_BRIDGEOS 5
#define i386_THREAD_STATE_COUNT ((mach_msg_type_number_t) ( sizeof (i386_thread_state_t) / sizeof (int) ))
#define MACH_RCV_INVALID_TRAILER 0x1000400f
#define VM_MEMORY_APPKIT 40
#define VM_MEMORY_ANALYSIS_TOOL 10
#define LIST_EMPTY(head) ((head)->lh_first == NULL)
#define IPPROTO_TRUNK1 23
#define IPPROTO_TRUNK2 24
#define TASK_NAME_NULL ((task_name_t) 0)
#define __FLT32_HAS_DENORM__ 1
#define OSSwapConstInt32(x) __DARWIN_OSSwapConstInt32(x)
#define S_ISGID 0002000
#define S_IFBLK 0060000
#define _POSIX_SYMLINK_MAX 255
#define host_set_filecoordinationd_port(host,port) (host_set_special_port((host), HOST_FILECOORDINATIOND_PORT, (port)))
#define CIRCLEQ_CHECK_NEXT(head,elm,field) 
#define MSG_DONTWAIT 0x80
#define __DECONST(type,var) __CAST_AWAY_QUALIFIER(var, const, type)
#define PROC_DIRTY_LAUNCH_IS_IN_PROGRESS 0x8
#define _CHOWN_OK (1<<21)
#define IPV6CTL_HDRNESTLIMIT 15
#define F_RDADVISE 44
#define __UINT_FAST8_MAX__ 0xff
#define MSG_NOSIGNAL 0x80000
#define AT_IPC_SEM ((unsigned char)2)
#define SYSTEM_CLOCK 0
#define NGROUPS NGROUPS_MAX
#define _LIMITS_H___ 
#define ATTR_CMNEXT_NOFIRMLINKPATH 0x00000020
#define DST_AUST 2
#define KERN_SUCCESS 0
#define TH_FLAGS_GLOBAL_FORCED_IDLE 0x4
#define _POSIX_V7_LP64_OFF64 __LP64_OFF64
#define _XOPEN_XCU_VERSION 4
#define ATTR_FILE_ALLOCSIZE 0x00000004
#define CPU_TYPE_MC88000 ((cpu_type_t) 13)
#define SIGHUP 1
#define HOST_MAX_SPECIAL_PORT HOST_IOCOMPRESSIONSTATS_PORT
#define ENOMEM 12
#define PROCESSOR_SET_NULL ((processor_set_t) 0)
#define IPPROTO_MUX 18
#define VFS_MAXTYPENUM 1
#define EPROC_SLEADER 0x02
#define VM_FLAGS_OVERWRITE 0x4000
#define EXC_I386_BOUND 7
#define __pic__ 2
#define MACH_SEND_INVALID_REPLY 0x10000009
#define __OSX_AVAILABLE_BUT_DEPRECATED_MSG(_osxIntro,_osxDep,_iosIntro,_iosDep,_msg) 
#define OSSwapConstInt64(x) __DARWIN_OSSwapConstInt64(x)
#define EXC_I386_PGFLT 14
#define HAVE_DECL_ADDR_NO_RANDOMIZE 0
#define VM_VOLATILE_GROUP_MASK (7 << VM_VOLATILE_GROUP_SHIFT)
#define KEV_DL_WAKEFLAGS_CHANGED 17
#define __INT_LEAST8_WIDTH__ 8
#define _CS_PATH 1
#define MACHINE_THREAD_STATE x86_THREAD_STATE
#define __header_inline extern __inline __attribute__((__gnu_inline__))
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffULL
#define IPV6_MULTICAST_IF 9
#define _ERRNO_T 
#define DICE_KIND_DATA 0x0001
#define F_GETFL 3
#define PROC_FLAG_PC_THROTTLE 0x200
#define _CS_POSIX_V6_ILP32_OFFBIG_LIBS 7
#define AT_IPC_SHM ((unsigned char)3)
#define _XBS5_LPBIG_OFFBIG __LPBIG_OFFBIG
#define IN_CLASSB_NSHIFT 16
#define R_VERSION_H 1
#define __DARWIN_IPPORT_RESERVED 1024
#define CPUFAMILY_POWERPC_G3 0xcee41549
#define PROC_LISTPIDSPATH_PATH_IS_VOLUME 1
#define RTF_ROUTER 0x10000000
#define IPV6CTL_KAME_VERSION 20
#define _MACH_MACH_TYPES_H_ 
#define APPLE_IF_FAM_FAITH 11
#define KERN_BOOTFILE 28
#define __UINT_FAST16_TYPE__ short unsigned int
#define __SCCSID(s) __IDSTRING(sccsid,s)
#define __DARWIN_C_ANSI 010000L
#define LC_LINKER_OPTIMIZATION_HINT 0x2E
#define MPO_QLIMIT 0x02
#define S_IXOTH 0000001
#define KERN_KDTHRMAP 12
#define LC_PREPAGE 0xa
#define RTM_VERSION 5
#define LOCAL_PEEREPID 0x003
#define ATTR_DIR_LINKCOUNT 0x00000001
#define RTM_NEWMADDR2 0x13
#define MACH_PORT_QLIMIT_MIN MACH_PORT_QLIMIT_ZERO
#define _PTHREAD_MUTEX_T 
#define IPV6_PORTRANGE 14
#define PROC_DIRTY_LAUNCH_IN_PROGRESS 0x8
#define VOL_CAP_INT_USERACCESS 0x00000800
#define VM_MEMORY_COREUI_CACHED_IMAGE_DATA 103
#define MPO_INSERT_SEND_RIGHT 0x10
#define STAILQ_FOREACH_SAFE(var,head,field,tvar) for ((var) = STAILQ_FIRST((head)); (var) && ((tvar) = STAILQ_NEXT((var), field), 1); (var) = (tvar))
#define __WATCHOS_5_1 50100
#define __WATCHOS_5_3 50300
#define _SC_AIO_LISTIO_MAX 42
#define ERR_SUCCESS (mach_error_t)0
#define MAP_MEM_INNERWBACK 5
#define FAPPEND O_APPEND
#define howmany(x,y) __DARWIN_howmany(x, y)
#define MACH_PORT_STATUS_FLAG_TEMPOWNER 0x01
#define NAME_MAX 255
#define CPU_SUBTYPE_LIB64 0x80000000
#define ___POSIX_C_DEPRECATED_STARTING_200809L 
#define SCHAR_MAX __SCHAR_MAX__
#define __UINT_LEAST8_MAX__ 0xff
#define IPV6_2292HOPOPTS 22
#define VM_MAX_ADDRESS ((vm_offset_t) 0xFFE00000)
#define KEV_DL_LOW_POWER_MODE_CHANGED 30
#define PF_SIP AF_SIP
#define EXC_I386_EXTOVR 4
#define _CS_XBS5_LPBIG_OFFBIG_LIBS 34
#define _POSIX_PRIORITY_SCHEDULING (-1)
#define F_VOLPOSMODE 4
#define HOST_VM_INFO_REV1_COUNT ((mach_msg_type_number_t) (HOST_VM_INFO_REV2_COUNT - 1))
#define NETSVC_MRKNG_LVL_L2 1
#define VM_PURGABLE_BEHAVIOR_MASK (1 << VM_PURGABLE_BEHAVIOR_SHIFT)
#define PROC_FLAG_ADAPTIVE_IMPORTANT 0x200000
#define THREAD_BASIC_INFO 3
#define __UINTMAX_TYPE__ long unsigned int
#define _CS_XBS5_LP64_OFF64_CFLAGS 28
#define host_set_coalition_port(host,port) (host_set_special_port((host), HOST_COALITION_PORT, (port)))
#define SIDL 1
#define HOST_CAN_HAS_DEBUGGER 11
#define P_CLASSIC P_TRANSLATED
#define _DELETE_OK (1<<12)
#define PRIO_USER 2
#define _POSIX_THREAD_CPUTIME (-1)
#define EV_POLL EV_FLAG0
#define KERN_NOT_RECEIVER 7
#define HOST_PRIV_PORT 2
#define P_TIMEOUT 0x00000400
#define IOPOL_APPLICATION IOPOL_STANDARD
#define TASK_AFFINITY_TAG_INFO 16
#define _SC_THREAD_PRIO_PROTECT 88
#define X86_DEBUG_STATE64_COUNT x86_DEBUG_STATE64_COUNT
#define MACH_MSG_VM_SPACE 0x00001000
#define REBASE_OPCODE_DO_REBASE_IMM_TIMES 0x50
#define __unavailable 
#define _UUID_UUID_H 
#define PLATFORM_TVOSSIMULATOR 8
#define ULONG_LONG_MAX (LONG_LONG_MAX * 2ULL + 1ULL)
#define _RSIZE_T 
#define THREAD_READ_PORT 3
#define CTLTYPE_STRING 3
#define AUDIT_ARGE 0x0008
#define task_get_kernel_port(task,port) (task_get_special_port((task), TASK_KERNEL_PORT, (port)))
#define CPUFAMILY_ARM_MONSOON_MISTRAL 0xe81e7ef6
#define VM_MEMORY_MALLOC_TINY 7
#define AUDIT_ARGV 0x0004
#define host_get_iocompressionstats_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_IOCOMPRESSIONSTATS_PORT, (port)))
#define IPV6_BOUND_IF 125
#define PROX_FDTYPE_KQUEUE 5
#define USER_MAXID 21
#define __UINT32_MAX__ 0xffffffffU
#define MACH_RCV_INTERRUPT 0x00000400
#define __bool_true_false_are_defined 1
#define CPU_SUBTYPE_PENTII_M3 CPU_SUBTYPE_INTEL(6, 3)
#define __PTHREAD_MUTEX_SIZE__ 56
#define EXCEPTION_STATE_IDENTITY 3
#define PROC_PIDREGIONPATHINFO_SIZE (sizeof(struct proc_regionwithpathinfo))
#define MACH_VOUCHER_ATTR_CONTROL_FLAGS_NONE ((mach_voucher_attr_control_flags_t)0)
#define KERN_TFP_POLICY_DENY 0
#define _POSIX_PIPE_BUF 512
#define TASK_KERNELMEMORY_INFO 7
#define SIGUSR1 30
#define RLIMIT_DATA 2
#define VFS_NUMMNTOPS 1
#define SEG_ICON "__ICON"
#define PF_SNA AF_SNA
#define MACH_VOUCHER_TRAP_STACK_LIMIT 256
#define __TVOS_9_2 90200
#define VM_MEMORY_DYLD 60
#define KERN_VFSNSPACE_UNHANDLE_PROC 2
#define PT_DENY_ATTACH 31
#define __FLT128_MIN_EXP__ (-16381)
#define _POSIX_SYMLOOP_MAX 8
#define IOPOL_PASSIVE 2
#define CTLTYPE_OPAQUE 5
#define BIND_SUBOPCODE_THREADED_SET_BIND_ORDINAL_TABLE_SIZE_ULEB 0x00
#define ifr_addr ifr_ifru.ifru_addr
#define WUNTRACED 0x00000002
#define os_prevent_tail_call_optimization() __asm__("")
#define NZERO 20
#define _MACH_MESSAGE_H_ 
#define __API_DEPRECATED_WITH_REPLACEMENT_BEGIN(...) 
#define IF_NAMESIZE 16
#define VM_MEMORY_CGIMAGE 52
#define UINT16_C(v) (v)
#define _XOPEN_REALTIME (-1)
#define IPV6CTL_V6ONLY 24
#define VM_MEMORY_CM_RPC 93
#define NOTE_CHILD 0x00000004
#define MACH_NOTIFY_DEAD_NAME (MACH_NOTIFY_FIRST + 010)
#define msgh_reserved msgh_voucher_port
#define IP_MULTICAST_VIF 14
#define IOPOL_VFS_IGNORE_PERMISSIONS_OFF 0
#define __OSX_DEPRECATED(_start,_dep,_msg) 
#define CTL_NET 4
#define SCHAR_MIN (-SCHAR_MAX - 1)
#define ENOMSG 91
#define _PC_PRIO_IO 19
#define VM_MEMORY_SCENEKIT 86
#define HOST_TELEMETRY_PORT (13 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define IN6ADDR_ANY_INIT {{{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}}
#define __INT_LEAST16_WIDTH__ 16
#define dtob(x) ((x)<<DEV_BSHIFT)
#define dtoc(x) ((x)>>(PGSHIFT-DEV_BSHIFT))
#define HOST_EXPIRED_TASK_INFO 6
#define ENOTDIR 20
#define _STRUCT_MCONTEXT _STRUCT_MCONTEXT64
#define OS_PURE __attribute__((__pure__))
#define __SCHAR_MAX__ 0x7f
#define SECT_BSS "__bss"
#define VM_LEDGER_FLAG_NO_FOOTPRINT 0x00000001
#define __IPHONE_6_0 60000
#define __IPHONE_6_1 60100
#define AF_ECMA 8
#define NFDBITS __DARWIN_NFDBITS
#define PROX_FDTYPE_FSEVENTS 7
#define __Reply__clock_priv_subsystem__defined 
#define KEV_INET6_CHANGED_ADDR 2
#define VM_INHERIT_COPY ((vm_inherit_t) 1)
#define __DARWIN_STRUCT_STATFS64 { uint32_t f_bsize; int32_t f_iosize; uint64_t f_blocks; uint64_t f_bfree; uint64_t f_bavail; uint64_t f_files; uint64_t f_ffree; fsid_t f_fsid; uid_t f_owner; uint32_t f_type; uint32_t f_flags; uint32_t f_fssubtype; char f_fstypename[MFSTYPENAMELEN]; char f_mntonname[MAXPATHLEN]; char f_mntfromname[MAXPATHLEN]; uint32_t f_flags_ext; uint32_t f_reserved[7]; }
#define __INT64_C(c) c ## LL
#define KERN_NODE_DOWN 47
#define MACH_SEND_INVALID_CONTEXT 0x10000012
#define MH_DYLIB 0x6
#define SA_SIGINFO 0x0040
#define BIND_OPCODE_THREADED 0xD0
#define ADDR "%16lx"
#define __CHAR16_TYPE__ short unsigned int
#define IPCTL_FORWARDING 1
#define REALTIME_CLOCK 0
#define __LASTBRANCH_MAX 32
#define MACH_PORT_STATUS_FLAG_TASKPTR 0x20
#define AUC_AUDITING 1
#define VM_PAGE_QUERY_PAGE_PAGED_OUT 0x10
#define VM_MEMORY_MALLOC_HUGE 4
#define __MAC_11_3 110300
#define __Request__processor_subsystem__defined 
#define MH_DYLDLINK 0x4
#define CPU_TYPE_ARM64_32 (CPU_TYPE_ARM | CPU_ARCH_ABI64_32)
#define NSEC_PER_USEC 1000ull
#define ATTR_CMN_FILEID 0x02000000
#define IPV6PROTO_MAXID (IPPROTO_PIM + 1)
#define R2_HOME_RC R_JOIN_2_PATHS (R2_HOME_CONFIGDIR, "radare2rc")
#define MAC_OS_X_VERSION_10_10_2 101002
#define MAC_OS_X_VERSION_10_10_3 101003
#define CPU_TYPE_HPPA ((cpu_type_t) 11)
#define PF_LAT AF_LAT
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_1(x) 
#define VM_MEMORY_SQLITE 62
#define MSG_NEEDSA 0x10000
#define TCP_NOTSENT_LOWAT 0x201
#define DEFFILEMODE (S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH|S_IWOTH)
#define VM_SYNC_DEACTIVATE ((vm_sync_t) 0x10)
#define REBASE_OPCODE_DO_REBASE_ULEB_TIMES 0x60
#define KERN_SAFEBOOT 66
#define _SC_THREAD_THREADS_MAX 94
#define CTL_KERN 1
#define _BLKSIZE_T 
#define IN6_IS_ADDR_UNSPECIFIED(a) ((*(const __uint32_t *)(const void *)(&(a)->s6_addr[0]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[4]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[8]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[12]) == 0))
#define _SC_2_PBS_TRACK 64
#define EMULTIHOP 95
#define MPG_FLAGS_STRICT_REPLY_MASK (0xffull << 56)
#define __API_UNAVAILABLE_BEGIN_GET_MACRO(...) 
#define KERN_POSIX 58
#define TCP_RXT_FINDROP 0x100
#define __SIZEOF_INT__ 4
#define S_IRWXO 0000007
#define RTM_CHANGE 0x3
#define PROC_DIRTY_DEFER 0x4
#define S_IRWXU 0000700
#define MNT_EXT_ROOT_DATA_VOL 0x00000001
#define PROC_PIDFDSOCKETINFO_SIZE (sizeof(struct socket_fdinfo))
#define __PRAGMA_REDEFINE_EXTNAME 1
#define MACH_MSGH_BITS(remote,local) ((remote) | ((local) << 8))
#define KERN_KDENABLE 3
#define TRASHIT(x) 
#define _MACH_TASK_POLICY_H_ 
#define A_SETCTLMODE 42
#define _MACH_I386_PROCESSOR_INFO_H_ 
#define REG_SP (7)
#define VM_VOLATILE_MAKE_LAST_IN_GROUP (0 << VM_VOLATILE_ORDER_SHIFT)
#define VQ_NOTRESPLOCK 0x0080
#define CPU_SUBTYPE_MC68030_ONLY ((cpu_subtype_t) 3)
#define AT_FDONLY 0x0400
#define S_IFMT 0170000
#define P_REBOOT 0x00200000
#define R2_PLUGINS "lib/radare2/" R2_VERSION
#define CLOCK_REALTIME _CLOCK_REALTIME
#define IPCTL_INTRQMAXLEN 10
#define VQ_MOUNT 0x0008
#define ATTR_CMN_SCRIPT 0x00000100
#define TH_ACCEPT (TH_FIN|TH_SYN|TH_RST|TH_ACK)
#define HAVE_ARC4RANDOM_UNIFORM 0
#define CLOCK_GET_TIME_RES 1
#define BIND_OPCODE_SET_TYPE_IMM 0x50
#define SLIST_INSERT_AFTER(slistelm,elm,field) do { SLIST_NEXT((elm), field) = SLIST_NEXT((slistelm), field); SLIST_NEXT((slistelm), field) = (elm); } while (0)
#define _WEXT_OK (1<<18)
#define IPPROTO_EGP 8
#define __USER_LABEL_PREFIX__ _
#define MCLOFSET (MCLBYTES - 1)
#define EXC_I386_ENOEXTFLT 32
#define CMSG_LEN(l) (__DARWIN_ALIGN32(sizeof(struct cmsghdr)) + (l))
#define FPS_ES 0x0080
#define IPV6_FAITH 29
#define OS_NOESCAPE 
#define VM_REGION_SUBMAP_INFO_V1_SIZE (VM_REGION_SUBMAP_INFO_V2_SIZE - sizeof (vm_object_id_t) )
#define ENEEDAUTH 81
#define NTOHLL(x) (x) = ntohll((__uint64_t)x)
#define _SYS_QUEUE_H_ 
#define NET_SERVICE_TYPE_RD 8
#define AUDIT_TRIGGER_FILE ("/dev/" AUDITDEV_FILENAME)
#define SEMAPHORE_NULL ((semaphore_t) 0)
#define AT_SYMLINK_NOFOLLOW 0x0020
#define err_us err_system(0x1)
#define IN_BADCLASS(i) (((u_int32_t)(i) & 0xf0000000) == 0xf0000000)
#define TSI_T_NTIMERS 4
#define R2_FLAGS R_JOIN_4_PATHS ("share", "radare2", R2_VERSION, "flag")
#define KERN_RIGHT_EXISTS 21
#define WCONTINUED 0x00000010
#define OSWriteBigInt16(base,byteOffset,data) OSWriteSwapInt16(base, byteOffset, data)
#define LC_VERSION_MIN_IPHONEOS 0x25
#define VM_MAKE_TAG(tag) ((tag) << 24)
#define HOST_USER_NOTIFICATION_PORT (3 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define ILL_ILLOPC 1
#define VM_INHERIT_DEFAULT VM_INHERIT_COPY
#define CPU_SUBTYPE_MIPS_R2800 ((cpu_subtype_t) 3)
#define TSI_T_2MSL 3
#define MNT_DOVOLFS 0x00008000
#define IFQ_UPDATE_INTERVAL (100ULL * 1000 * 1000)
#define round_msg(x) (((mach_msg_size_t)(x) + sizeof (natural_t) - 1) & ~(sizeof (natural_t) - 1))
#define R2_SDB_OPCODES R_JOIN_2_PATHS (R2_SDB, "opcodes")
#define USE_LIB_MAGIC 0
#define _UINT8_T 
#define TCPOLEN_SIGNATURE 18
#define ifr_media ifr_ifru.ifru_media
#define IFCAP_CSUM_ZERO_INVERT 0x04000
#define x86_THREAD_FULL_STATE64_COUNT ((mach_msg_type_number_t) ( sizeof (x86_thread_full_state64_t) / sizeof (int) ))
#define TASK_POLICY_STATE 4
#define OSWriteBigInt32(base,byteOffset,data) OSWriteSwapInt32(base, byteOffset, data)
#define _MACH_THREAD_POLICY_H_ 
#define ATTR_FORK_VALIDMASK 0x00000003
#define OSSwapHostToLittleConstInt32(x) ((uint32_t)(x))
#define OS_WEAK __attribute__((__weak__))
#define IPPROTO_ETHERIP 97
#define SEG_TEXT "__TEXT"
#define _PC_PIPE_BUF 6
#define RTF_PINNED 0x100000
#define ATTR_CMN_VALIDMASK 0xFFFFFFFF
#define PROX_FDTYPE_SOCKET 2
#define TASK_SCHED_RR_INFO 11
#define A_GETKMASK 4
#define RETURN_ON_MACH_ERROR(msg,retval) if (kr != KERN_SUCCESS) {mach_error (msg, kr); return ((retval));}
#define NOTE_FORK 0x40000000
#define __IPHONE_14_0 140000
#define __IPHONE_14_1 140100
#define __IPHONE_14_2 140200
#define CPU_SUBTYPE_ARM64E ((cpu_subtype_t) 2)
#define __IPHONE_14_5 140500
#define SF_RESTRICTED 0x00080000
#define _SYS__ENDIAN_H_ 
#define _host_priv_user_ 
#define __FLT32_DIG__ 6
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_4(x) x
#define MACH_PORT_INFO_EXT 7
#define __FLT_EPSILON__ 1.19209289550781250000000000000000000e-7F
#define KERN_INVALID_PROCESSOR_SET 26
#define __WATCHOS_PROHIBITED 
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_5(x) x
#define SS_DISABLE 0x0004
#define ENOLINK 97
#define PROC_FLAG_PC_MASK 0x600
#define KEV_INET_PORTINUSE 8
#define __scanflike(fmtarg,firstvararg) __attribute__((__format__ (__scanf__, fmtarg, firstvararg)))
#define __GNUC__ 11
#define OSWriteBigInt64(base,byteOffset,data) OSWriteSwapInt64(base, byteOffset, data)
#define HW_VECTORUNIT 13
#define MAX_LIBRARY_ORDINAL 0xfd
#define SOI_S_ISCONNECTED 0x0002
#define MEMORY_OBJECT_COPY_SYMMETRIC 4
#define _STRUCT_MCONTEXT64_FULL struct __darwin_mcontext64_full
#define IPPROTO_EON 80
#define SO_BROADCAST 0x0020
#define PROX_FDTYPE_PSEM 4
#define x86_PAGEIN_STATE 22
#define __Request__vm_map_subsystem__defined 
#define PROC_PIDFILEPORTVNODEPATHINFO 2
#define THREAD_IDENTIFIER_INFO_COUNT ((mach_msg_type_number_t) (sizeof(thread_identifier_info_data_t) / sizeof(natural_t)))
#define SOI_S_ASYNC 0x0200
#define TCP_CONNECTIONTIMEOUT 0x20
#define VM_PURGABLE_BEHAVIOR_FIFO (0 << VM_PURGABLE_BEHAVIOR_SHIFT)
#define SIGIO 23
#define TCPOPT_WINDOW 3
#define IN_ANY_LOCAL(i) (IN_LINKLOCAL(i) || IN_LOCAL_GROUP(i))
#define IF_MINMTU 72
#define _MACH_DEBUG_MACH_DEBUG_TYPES_H_ 
#define IPPROTO_ENCAP 98
#define __STDC_UTF_16__ 1
#define LC_ID_DYLIB 0xd
#define __DBL_IS_IEC_60559__ 2
#define API_AVAILABLE_BEGIN(...) 
#define _SC_HOST_NAME_MAX 72
#define __UINT_LEAST32_TYPE__ unsigned int
#define __API_AVAILABLE_GET_MACRO(...) 
#define S_IFREG 0100000
#define CPU_SUBTYPE_ARM64_V8 ((cpu_subtype_t) 1)
#define IPPROTO_AHIP 61
#define VM_MEMORY_IOACCELERATOR 100
#define P_NOCLDSTOP 0x00000008
#define __abortlike __dead2 __cold __not_tail_called
#define PROC_PIDPATHINFO_MAXSIZE (4*MAXPATHLEN)
#define __APPLE_API_EVOLVING 
#define M16KCLSHIFT 14
#define EF_NO_XATTRS 0x00000002
#define CONNECT_RESUME_ON_READ_WRITE 0x1
#define AUDIT_EXPIRE_OP_AND ((unsigned char)0)
#define MACH_PORT_TYPE_SPREQUEST_DELAYED 0x20000000
#define _POSIX_NAME_MAX 14
#define _host_security_user_ 
#define HW_L2SETTINGS 19
#define __strong 
#define AF_CNT 21
#define st_ctime st_ctimespec.tv_sec
#define F_SPECULATIVE_READ 101
#define VM_MEMORY_COREGRAPHICS_DATA 54
#define IPV6PORT_RESERVEDMIN 600
#define SEG_PAGEZERO "__PAGEZERO"
#define MH_DEAD_STRIPPABLE_DYLIB 0x400000
#define IPPROTO_ESP 50
#define LC_PREBOUND_DYLIB 0x10
#define MATTR_VAL_CACHE_SYNC 9
#define LC_LOADFVMLIB 0x6
#define VM_VOLATILE_MAKE_FIRST_IN_GROUP (1 << VM_VOLATILE_ORDER_SHIFT)
#define O_EXLOCK 0x00000020
#define KEV_INET_SUBCLASS 1
#define _SC_MEMLOCK 30
#define ATTR_CMN_CRTIME 0x00000200
#define __FLT32X_HAS_INFINITY__ 1
#define MACH_MSG_TYPE_MOVE_RECEIVE 16
#define APPLE_IF_FAM_6LOWPAN 16
#define SO_ACCEPTCONN 0x0002
#define __INT32_MAX__ 0x7fffffff
#define R2_HOME_ZIGNS R_JOIN_2_PATHS (R2_HOME_DATADIR, "zigns")
#define CIRCLEQ_LAST(head) ((head)->cqh_last)
#define CPU_ARCH_ABI64 0x01000000
#define EVFILT_VNODE (-4)
#define KEV_INET_ADDR_DELETED 3
#define A_SETCLASS 23
#define STDOUT_FILENO 1
#define F_SETBACKINGSTORE 70
#define __INT_WIDTH__ 32
#define MACH_RCV_TRAILER_SENDER 2
#define O_NDELAY O_NONBLOCK
#define TH_FLAGS_SWAPPED 0x1
#define TSI_S_ESTABLISHED 4
#define HW_CPU_FREQ 15
#define __SIZE_WIDTH__ 64
#define S_ISVTX 0001000
#define err_get_code(err) ((err)&0x3fff)
#define __ReplyUnion__thread_act_subsystem__defined 
#define _MACH_THREAD_SPECIAL_PORTS_H_ 
#define NOTE_EXTEND 0x00000004
#define SIGEV_NONE 0
#define SO_TYPE 0x1008
#define IS_VALID_CRED(_cr) ((_cr) != NOCRED && (_cr) != FSCRED)
#define subsystem_to_name_map_clock_priv { "clock_set_time", 1200 }, { "clock_set_attributes", 1201 }
#define HOST_KTRACE_BACKGROUND_PORT (6 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define EMFILE 24
#define ATTR_VOL_SPACEAVAIL 0x00000010
#define SCM_RIGHTS 0x01
#define THREAD_INSPECT_NULL ((thread_inspect_t) 0)
#define ru_first ru_ixrss
#define MAP_MEM_IO 2
#define MACH_RCV_INTERRUPTED 0x10004005
#define NOTE_TRACK 0x00000001
#define MACH_SEND_INTERRUPTED 0x10000007
#define w_retcode w_T.w_Retcode
#define CBLOCK 64
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10_3(x) x
#define invalid_memory_object_flavor(f) (f != MEMORY_OBJECT_ATTRIBUTE_INFO && f != MEMORY_OBJECT_PERFORMANCE_INFO && f != OLD_MEMORY_OBJECT_BEHAVIOR_INFO && f != MEMORY_OBJECT_BEHAVIOR_INFO && f != OLD_MEMORY_OBJECT_ATTRIBUTE_INFO)
#define __DECIMAL_DIG__ 21
#define VM_PAGE_QUERY_PAGE_COPIED 0x20
#define OS_REFINED_FOR_SWIFT 
#define ATTR_FORK_RESERVED 0xffffffff
#define THREAD_LATENCY_QOS_POLICY 7
#define BIND_TYPE_POINTER 1
#define _XBS5_ILP32_OFFBIG __ILP32_OFFBIG
#define subsystem_to_name_map_mach_port { "mach_port_names", 3200 }, { "mach_port_type", 3201 }, { "mach_port_rename", 3202 }, { "mach_port_allocate_name", 3203 }, { "mach_port_allocate", 3204 }, { "mach_port_destroy", 3205 }, { "mach_port_deallocate", 3206 }, { "mach_port_get_refs", 3207 }, { "mach_port_mod_refs", 3208 }, { "mach_port_peek", 3209 }, { "mach_port_set_mscount", 3210 }, { "mach_port_get_set_status", 3211 }, { "mach_port_move_member", 3212 }, { "mach_port_request_notification", 3213 }, { "mach_port_insert_right", 3214 }, { "mach_port_extract_right", 3215 }, { "mach_port_set_seqno", 3216 }, { "mach_port_get_attributes", 3217 }, { "mach_port_set_attributes", 3218 }, { "mach_port_allocate_qos", 3219 }, { "mach_port_allocate_full", 3220 }, { "task_set_port_space", 3221 }, { "mach_port_get_srights", 3222 }, { "mach_port_space_info", 3223 }, { "mach_port_dnrequest_info", 3224 }, { "mach_port_kernel_object", 3225 }, { "mach_port_insert_member", 3226 }, { "mach_port_extract_member", 3227 }, { "mach_port_get_context", 3228 }, { "mach_port_set_context", 3229 }, { "mach_port_kobject", 3230 }, { "mach_port_construct", 3231 }, { "mach_port_destruct", 3232 }, { "mach_port_guard", 3233 }, { "mach_port_unguard", 3234 }, { "mach_port_space_basic_info", 3235 }, { "mach_port_guard_with_flags", 3237 }, { "mach_port_swap_guard", 3238 }, { "mach_port_kobject_description", 3239 }
#define IFRTYPE_FUNCTIONAL_LOOPBACK 1
#define P_WEXIT 0x00002000
#define __RequestUnion__host_priv_subsystem__defined 
#define MH_HAS_TLV_DESCRIPTORS 0x800000
#define EXECUTABLE_ORDINAL 0xff
#define NOTE_VM_ERROR 0x10000000
#define __FLT64_EPSILON__ 2.22044604925031308084726333618164062e-16F64
#define MACH_MSGH_BITS_REMOTE(bits) ((bits) & MACH_MSGH_BITS_REMOTE_MASK)
#define MACH_VOUCHER_SELECTOR_CURRENT ((mach_voucher_selector_t)0)
#define OSSwapHostToBigConstInt64(x) OSSwapConstInt64(x)
#define MAX_INPUT 1024
#define _SC_GETGR_R_SIZE_MAX 70
#define F_ADDFILESIGS_FOR_DYLD_SIM 83
#define __FLT128_IS_IEC_60559__ 2
#define KERN_INVALID_VALUE 18
#define KMOD_EXPLICIT_DECL(name,version,start,stop) kmod_info_t KMOD_INFO_NAME = { 0, KMOD_INFO_VERSION, -1U, { #name }, { version }, -1, 0, 0, 0, 0, start, stop };
#define ESTALE 70
#define LC_IDENT 0x8
#define ENVIRONMENT_SLOT 1
#define _SC_2_SW_DEV 24
#define KEVENT_FLAG_ERROR_EVENTS 0x000002
#define _SYS_ERRNO_H_ 
#define API_DEPRECATED_WITH_REPLACEMENT_BEGIN(...) 
#define _PC_FILESIZEBITS 18
#define KERN_PROCARGS 38
#define _WPERM_OK (1<<20)
#define VM_MEMORY_JAVASCRIPT_JIT_REGISTER_FILE 65
#define AUC_UNSET 0
#define KEV_DL_IF_DETACHING 10
#define IFCAP_VALID (IFCAP_HWCSUM | IFCAP_TSO | IFCAP_LRO | IFCAP_VLAN_MTU | IFCAP_VLAN_HWTAGGING | IFCAP_JUMBO_MTU | IFCAP_AV | IFCAP_TXSTATUS | IFCAP_SKYWALK | IFCAP_SW_TIMESTAMP | IFCAP_HW_TIMESTAMP | IFCAP_CSUM_PARTIAL | IFCAP_CSUM_ZERO_INVERT)
#define TCPOPT_SACK_PERMIT_HDR (TCPOPT_NOP<<24|TCPOPT_NOP<<16|TCPOPT_SACK_PERMITTED<<8|TCPOLEN_SACK_PERMITTED)
#define IN_CLASSA_HOST 0x00ffffff
#define _POSIX_LOGIN_NAME_MAX 9
#define KERN_AIOMAX 46
#define KERN_VNODE 13
#define PTRDIFF_MAX INTMAX_MAX
#define BIND_SPECIAL_DYLIB_SELF 0
#define NOTE_EXEC 0x20000000
#define CTL_DEBUG_NAME 0
#define _XBS5_ILP32_OFF32 __ILP32_OFF32
#define HW_TB_FREQ 23
#define __UINT_LEAST16_TYPE__ short unsigned int
#define FNDELAY O_NONBLOCK
#define _MACH_VM_REGION_H_ 
#define __FLT64X_MIN_10_EXP__ (-4931)
#define QUAD_MAX LLONG_MAX
#define PAGE_MAX_SHIFT 14
#define F_OK 0
#define MACH_PORT_TYPE_ALL_RIGHTS (MACH_PORT_TYPE_PORT_OR_DEAD|MACH_PORT_TYPE_PORT_SET)
#define __LDBL_HAS_QUIET_NAN__ 1
#define INT64_C(v) (v ## LL)
#define MNT_WAIT 1
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_4(x) x
#define RTM_OLDDEL 0xa
#define __SPI_DEPRECATED_WITH_REPLACEMENT(...) 
#define MACH_VOUCHER_ATTR_CONTROL_NULL ((mach_voucher_attr_control_t) 0)
#define WITH_GPL 1
#define MEMORY_OBJECT_DATA_NO_CHANGE 0x2
#define AUDIT_TRIGGER_MAX 8
#define CIRCLEQ_PREV(elm,field) ((elm)->field.cqe_prev)
#define FP_NO 0
#define _SYS_UCONTEXT_H_ 
#define MACH_MSG_MASK 0x00003e00
#define PROC_SELFSET_THREADNAME_SIZE (MAXTHREADNAMESIZE -1)
#define _SC_XOPEN_VERSION 116
#define TSI_S_LISTEN 1
#define MAC_OS_X_VERSION_10_11_3 101103
#define _FSBLKCNT_T 
#define _POSIX_NO_TRUNC 200112L
#define CPUFAMILY_ARM_11 0x8ff620d8
#define IPPROTO_LARP 91
#define AF_RESERVED_36 36
#define KERN_JOB_CONTROL 19
#define MACH_PORT_TYPE_SPREQUEST 0x40000000
#define TSI_S_SYN_RECEIVED 3
#define _STRUCT_MCONTEXT64 struct __darwin_mcontext64
#define THREAD_STANDARD_POLICY_COUNT 0
#define DEFAULT_COREFILE_DEST "core.%u"
#define ATTR_BIT_MAP_COUNT 5
#define KERN_NOT_WAITING 48
#define __DYNAMIC__ 1
#define WIFCONTINUED(x) (_WSTATUS(x) == _WSTOPPED && WSTOPSIG(x) == 0x13)
#define __MAC_10_0 1000
#define __MAC_10_1 1010
#define __MAC_10_2 1020
#define __MAC_10_3 1030
#define __MAC_10_4 1040
#define __MAC_10_6 1060
#define __MAC_10_7 1070
#define __MAC_10_8 1080
#define __MAC_10_9 1090
#define err_none (mach_error_t)0
#define HOST_PORT 1
#define VM_REGION_SUBMAP_INFO_COUNT_64 VM_REGION_SUBMAP_INFO_V2_COUNT_64
#define CPU_SUBTYPE_ITANIUM CPU_SUBTYPE_INTEL(11, 0)
#define IPPROTO_TCF 87
#define KERN_PROC_ALL 0
#define RTF_DEAD 0x20000000
#define __MMX__ 1
#define IPPROTO_TCP 6
#define R2_HOME_RC_DIR R_JOIN_2_PATHS (R2_HOME_CONFIGDIR, "radare2rc.d")
#define THREAD_CONVERT_THREAD_STATE_TO_SELF 1
#define VOL_CAP_FMT_2TB_FILESIZE 0x00000800
#define KERN_PROCARGS2 49
#define MEMORY_OBJECT_DEFAULT_NULL ((memory_object_default_t) 0)
#define NDR_INT_BIG_ENDIAN 0
#define MFSTYPENAMELEN 16
#define TCPOPT_FASTOPEN 34
#define OSWriteLittleInt16(base,byteOffset,data) _OSWriteInt16(base, byteOffset, data)
#define __MAC_10_14_1 101401
#define __MAC_10_14_4 101404
#define __MAC_10_14_6 101406
#define KEV_DL_ISSUES 24
#define TASK_SCHED_FIFO_INFO 12
#define EBADMSG 94
#define MAP_MEM_RT 7
#define MACH_SEND_OVERRIDE 0x00000020
#define MACH_PORT_TYPE_RECEIVE MACH_PORT_TYPE(MACH_PORT_RIGHT_RECEIVE)
#define THREAD_TIME_CONSTRAINT_POLICY 2
#define EXC_MASK_MACHINE 0
#define SO_LINGER_SEC 0x1080
#define MACH_MSGH_BITS_RAISEIMP 0x20000000U
#define CIRCLEQ_CHECK_PREV(head,elm,field) 
#define LOCK_NB 0x04
#define COMAPT_MAXLOGNAME 12
#define VQ_UPDATE 0x0100
#define CPU_SUBTYPE_INTEL_MODEL(x) ((x) >> 4)
#define MEMORY_OBJECT_COPY_CALL 1
#define MSG_CTRUNC 0x20
#define VM_MEMORY_DHMM 84
#define MAP_MEM_POSTED_COMBINED_REORDERED 9
#define NOTE_WRITE 0x00000002
#define CPU_SUBTYPE_POWERPC_970 ((cpu_subtype_t) 100)
#define AT_REALDEV 0x0200
#define trunc_page(x) ((x) & (~(vm_page_size - 1)))
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_3(x) 
#define LC_DYLIB_CODE_SIGN_DRS 0x2B
#define __BIGGEST_ALIGNMENT__ 16
#define _SC_BC_STRING_MAX 12
#define MACH_VOUCHER_ATTR_MAX_RAW_RECIPE_ARRAY_SIZE 5120
#define _MCONTEXT_T 
#define PROC_PIDFDPSEMINFO 4
#define PTRDIFF_MIN INTMAX_MIN
#define sa_handler __sigaction_u.__sa_handler
#define LONG_MAX __LONG_MAX__
#define STDERR_FILENO 2
#define MACH_VM_MAX_ADDRESS ((mach_vm_offset_t) VM_MAX_PAGE_ADDRESS)
#define CHILD_MAX 266
#define KEV_CTL_DEREGISTERED 2
#define MEMORY_OBJECT_CONTROL_NULL ((memory_object_control_t) 0)
#define __DARWIN_1050ALIAS(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_UNIX03)
#define VM_PURGABLE_DEBUG_SHIFT 12
#define TCP_RXT_CONNDROPTIME 0x80
#define __FLT64_MAX_10_EXP__ 308
#define TASK_VM_INFO_REV3_COUNT ((mach_msg_type_number_t) (TASK_VM_INFO_REV4_COUNT - 2))
#define SLIST_HEAD_INITIALIZER(head) { NULL }
#define PROC_PIDTHREADINFO_SIZE (sizeof(struct proc_threadinfo))
#define MEMORY_OBJECT_ATTR_INFO_COUNT ((mach_msg_type_number_t) (sizeof(memory_object_attr_info_data_t)/sizeof(int)))
#define MAX_TSTATE_FLAVORS 10
#define ATTR_CMN_OBJPERMANENTID 0x00000040
#define _IN_ADDR_T 
#define __COPYRIGHT(s) __IDSTRING(copyright,s)
#define VM_INHERIT_DONATE_COPY ((vm_inherit_t) 3)
#define __pure 
#define __IPV6_ADDR_SCOPE_SITELOCAL 0x05
#define WTERMSIG(x) (_WSTATUS(x))
#define MACH_EXCEPTION_MASK (MACH_EXCEPTION_CODES | MACH_EXCEPTION_ERRORS)
#define MACH_PORT_TEMPOWNER 4
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_5(x) 
#define P_ADVLOCK 0x00000001
#define _POSIX_REGEXP 200112L
#define TASK_BASIC_INFO_COUNT (sizeof(task_basic_info_data_t) / sizeof(natural_t))
#define A_GETEXPAFTER 43
#define IPPROTO_RCCMON 10
#define x86_DEBUG_STATE_COUNT ((mach_msg_type_number_t) (sizeof(x86_debug_state_t)/sizeof(unsigned int)))
#define __FLT32_HAS_INFINITY__ 1
#define mach_task_self() mach_task_self_
#define A_SETPOLICY 34
#define AUDIT_CTLMODE_NORMAL ((unsigned char)1)
#define VM_MEMORY_FOUNDATION 41
#define PROC_PIDTASKINFO_SIZE (sizeof(struct proc_taskinfo))
#define PT_CONTINUE 7
#define CPF_OVERWRITE 0x0001
#define SI_QUEUE 0x10002
#define __APPLE_API_UNSTABLE 
#define _POSIX_SIGQUEUE_MAX 32
#define MH_DSYM 0xa
#define LOCK_SH 0x01
#define _PC_XATTR_SIZE_BITS 26
#define PROC_PIDT_SHORTBSDINFO_SIZE (sizeof(struct proc_bsdshortinfo))
#define st_birthtime st_birthtimespec.tv_sec
#define AF_LINK 18
#define __INT_FAST32_MAX__ 0x7fffffff
#define __LDBL_HAS_DENORM__ 1
#define _CS_XBS5_ILP32_OFFBIG_CFLAGS 24
#define RTF_IFREF 0x4000000
#define __MAC_10_15_1 101501
#define TASK_INFO_MAX (1024)
#define _PC_NO_TRUNC 8
#define HOST_LOCKD_PORT (5 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define ITIMER_PROF 2
#define _CS_XBS5_ILP32_OFF32_CFLAGS 20
#define IPV6CTL_MAXIFPREFIXES 47
#define SEG_LINKEDIT "__LINKEDIT"
#define host_set_dynamic_pager_port(host,port) (host_set_special_port((host), HOST_DYNAMIC_PAGER_PORT, (port)))
#define EFL_ID 0x00200000
#define __DARWIN_SUF_64_BIT_INO_T "$INODE64"
#define OS_NOT_TAIL_CALLED 
#define __enum_open 
#define IFRTYPE_FUNCTIONAL_WIFI_AWDL 4
#define TASK_MAX_SPECIAL_PORT TASK_RESOURCE_NOTIFY_PORT
#define LOCK_UN 0x08
#define w_stopsig w_S.w_Stopsig
#define __Reply__processor_set_subsystem__defined 
#define F_PUNCHHOLE 99
#define NL_LANGMAX 14
#define NOTE_FFLAGSMASK 0x00ffffff
#define KERN_NTP_PLL 27
#define _SC_AIO_PRIO_DELTA_MAX 44
#define TASK_KERNEL_PORT 1
#define _WSTOPPED 0177
#define _INT16_T 
#define _POSIX_MQ_OPEN_MAX 8
#define __INTPTR_WIDTH__ 64
#define HW_L3CACHESIZE 22
#define EPIPE 32
#define host_set_closured_port(host,port) (host_set_special_port((host), HOST_CLOSURED_PORT, (port)))
#define OS_ENUM(_name,_type,...) typedef _type _name ##_t; enum { __VA_ARGS__ }
#define TCP_MSS 512
#define INADDR_MAX_LOCAL_GROUP (u_int32_t)0xe00000ff
#define FP_STATE_BYTES 512
#define x86_DEBUG_STATE32 10
#define LONG_MIN (-LONG_MAX - 1L)
#define HOST_VM_INFO64_COUNT ((mach_msg_type_number_t) (sizeof(vm_statistics64_data_t)/sizeof(integer_t)))
#define __IPV6_ADDR_SCOPE_INTFACELOCAL 0x01
#define KERN_CODE_SELECTOR 0x0008
#define MPG_FLAGS_MOD_REFS_PINNED_DEALLOC (0x01ull << 56)
#define _WRITE_OK (1<<10)
#define IN6_IS_ADDR_MC_NODELOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && (__IPV6_ADDR_MC_SCOPE(a) == __IPV6_ADDR_SCOPE_NODELOCAL))
#define host_set_io_master_port(host,port) (KERN_INVALID_ARGUMENT)
#define KERN_THALTSTACK 63
#define IP_NAT__XXX 55
#define AQ_LOWATER 10
#define VM_MEMORY_SANITIZER 99
#define RTA_AUTHOR 0x40
#define INET_ADDRSTRLEN 16
#define _XBS5_LP64_OFF64 __LP64_OFF64
#define _RATTR_OK (1<<15)
#define ETIMEDOUT 60
#define IPPROTO_KRYPTOLAN 65
#define KERN_OSVERSION 65
#define SI_USER 0x10001
#define IPPROTO_DIVERT 254
#define KERN_CLOCKRATE 12
#define _PC_MIN_HOLE_SIZE 27
#define HOST_VM_INFO_COUNT ((mach_msg_type_number_t) (sizeof(vm_statistics_data_t)/sizeof(integer_t)))
#define NOTE_SIGNAL 0x08000000
#define CPU_SUBTYPE_I860_ALL ((cpu_subtype_t) 0)
#define WAIT_MYPGRP 0
#define __DARWIN_SUF_NON_CANCELABLE 
#define VOL_CAP_FMT_ZERO_RUNS 0x00000080
#define htonll(x) __DARWIN_OSSwapInt64(x)
#define SO_WANTMORE 0x4000
#define x86_DEBUG_STATE64 11
#define MACH_RCV_SYNC_PEEK 0x00008000
#define KERN_MAXFILES 7
#define P_DIRTY_IS_DIRTY (P_DIRTY | P_DIRTY_SHUTDOWN)
#define OS_NOINLINE __attribute__((__noinline__))
#define KERN_PROTECTION_FAILURE 2
#define APPLE_IF_FAM_CELLULAR 15
#define ATTR_CMN_EXTENDED_SECURITY 0x00400000
#define _SC_DELAYTIMER_MAX 45
#define _MACH_VM_ATTRIBUTES_H_ 
#define VM_SYNC_ASYNCHRONOUS ((vm_sync_t) 0x01)
#define RTM_MISS 0x7
#define _STRUCT_TIMEVAL struct timeval
#define GID_MAX 2147483647U
#define SIGABRT 6
#define _GCC_WRAP_STDINT_H 
#define CLD_CONTINUED 6
#define VM_FLAGS_SUPERPAGE_MASK 0x70000
#define IFF_SIMPLEX 0x800
#define KERN_LOCK_OWNED_SELF 41
#define SIGSTKSZ 131072
#define PROC_FLAG_EXT_DARWINBG 0x10000
#define _SC_XOPEN_CRYPT 108
#define LC_SEGMENT_64 0x19
#define HW_FLOATINGPT 11
#define __weak 
#define PF_DATAKIT AF_DATAKIT
#define KERN_PROC 14
#define host_get_gssd_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_GSSD_PORT, (port)))
#define _DEV_T 
#define IPPROTO_TTP 84
#define CTL_VFS 3
#define _SC_MONOTONIC_CLOCK 74
#define SO_DONTROUTE 0x0010
#define MACH_RCV_PORT_DIED 0x10004009
#define __DBL_MAX_EXP__ 1024
#define MACH_SEND_PROPAGATE_QOS 0x00200000
#define TCPCI_FLAG_LOSSRECOVERY 0x00000001
#define __WCHAR_WIDTH__ 32
#define __DARWIN_BIG_ENDIAN 4321
#define __FLT64_MAX__ 1.79769313486231570814527423731704357e+308F64
#define SYNC_VOLUME_FULLSYNC 0x01
#define __Request__processor_set_subsystem__defined 
#define ATTR_VOL_SIZE 0x00000004
#define UPL_NULL ((upl_t) 0)
#define KEV_CTL_REGISTERED 1
#define KEV_INET6_NEW_LL_ADDR 4
#define MACH_MSG_TYPE_COPY_SEND 19
#define __FLT_DECIMAL_DIG__ 9
#define IPPROTO_CMTP 38
#define MH_CIGAM 0xcefaedfe
#define NOTE_EXIT_MEMORY 0x00020000
#define _MACH_I386_BOOLEAN_H_ 
#define __SSE2_MATH__ 1
#define __ATOMIC_HLE_RELEASE 131072
#define S_THREAD_LOCAL_ZEROFILL 0x12
#define THREAD_PRECEDENCE_POLICY 3
#define __OS_ENUM_ATTR_CLOSED 
#define _VA_LIST_ 
#define i386_EXCEPTION_STATE 3
#define NET_RT_IFLIST2 6
#define __PTRDIFF_MAX__ 0x7fffffffffffffffL
#define __TVOS_PROHIBITED 
#define IPPROTO_GMTP 100
#define ETOOMANYREFS 59
#define F_GETSIGSINFO 105
#define _SYS_STAT_H_ 
#define TAILQ_INSERT_AFTER(head,listelm,elm,field) do { TAILQ_CHECK_NEXT(listelm, field); if ((TAILQ_NEXT((elm), field) = TAILQ_NEXT((listelm), field)) != NULL) TAILQ_NEXT((elm), field)->field.tqe_prev = &TAILQ_NEXT((elm), field); else { (head)->tqh_last = &TAILQ_NEXT((elm), field); QMD_TRACE_HEAD(head); } TAILQ_NEXT((listelm), field) = (elm); (elm)->field.tqe_prev = &TAILQ_NEXT((listelm), field); QMD_TRACE_ELEM(&(elm)->field); QMD_TRACE_ELEM(&listelm->field); } while (0)
#define _POSIX_TZNAME_MAX 6
#define IPV6CTL_MRTPROTO 8
#define _POSIX_SSIZE_MAX 32767
#define MAXUPRC CHILD_MAX
#define CIRCLEQ_INSERT_HEAD(head,elm,field) do { CIRCLEQ_CHECK_HEAD(head, field); (elm)->field.cqe_next = (head)->cqh_first; (elm)->field.cqe_prev = (void *)(head); if ((head)->cqh_last == (void *)(head)) (head)->cqh_last = (elm); else (head)->cqh_first->field.cqe_prev = (elm); (head)->cqh_first = (elm); } while (0)
#define host_get_telemetry_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_TELEMETRY_PORT, (port)))
#define MSG_EOF 0x100
#define host_get_chud_port(host,port) host_get_launchctl_port(host, port)
#define MCAST_INCLUDE 1
#define _SYS_SIGNAL_H_ 
#define TASK_SECURITY_TOKEN_COUNT ((mach_msg_type_number_t) (sizeof(security_token_t) / sizeof(natural_t)))
#define EXC_I386_NMIFLT 2
#define DICE_KIND_JUMP_TABLE8 0x0002
#define _SC_ASYNCHRONOUS_IO 28
#define _POSIX_MAX_CANON 255
#define IPV6_UNICAST_HOPS 4
#define IPPROTO_BRSATMON 76
#define _MACH_DEBUG_ZONE_INFO_H_ 
#define timerisset(tvp) ((tvp)->tv_sec || (tvp)->tv_usec)
#define EVFILT_READ (-1)
#define TASK_THREAD_TIMES_INFO_COUNT ((mach_msg_type_number_t) (sizeof(task_thread_times_info_data_t) / sizeof(natural_t)))
#define EV_ONESHOT 0x0010
#define MH_ALLMODSBOUND 0x1000
#define IFQ_MAXLEN 128
#define err_local err_system(0x3e)
#define IFCAP_SW_TIMESTAMP 0x01000
#define VOL_CAP_FMT_VOL_GROUPS 0x01000000
#define VOL_CAP_FMT_HARDLINKS 0x00000004
#define MACH_MSG_GUARD_FLAGS_NONE 0x0000
#define timerclear(tvp) (tvp)->tv_sec = (tvp)->tv_usec = 0
#define CPU_SUBTYPE_ARM_V7EM ((cpu_subtype_t) 16)
#define __tune_core2__ 1
#define CPU_SUBTYPE_ARM64_ALL ((cpu_subtype_t) 0)
#define P_RESV6 0x00400000
#define FPE_FLTOVF 2
#define FD_CLOEXEC 1
#define roundup(x,y) ((((x) % (y)) == 0) ? (x) : ((x) + ((y) - ((x) % (y)))))
#define __exported_push _Pragma("GCC visibility push(default)")
#define __ATOMIC_HLE_ACQUIRE 65536
#define ATTR_VOL_CAPABILITIES 0x00020000
#define TASK_EXTMOD_INFO_COUNT (sizeof(task_extmod_info_data_t) / sizeof(natural_t))
#define __NDR_convert__int_rep__ __NDR_convert__
#define _MACH_I386_THREAD_STATUS_H_ 
#define RTF_PROXY 0x8000000
#define MNT_VISFLAGMASK (MNT_RDONLY | MNT_SYNCHRONOUS | MNT_NOEXEC | MNT_NOSUID | MNT_NODEV | MNT_UNION | MNT_ASYNC | MNT_EXPORTED | MNT_QUARANTINE | MNT_LOCAL | MNT_QUOTA | MNT_REMOVABLE | MNT_ROOTFS | MNT_DOVOLFS | MNT_DONTBROWSE | MNT_IGNORE_OWNERSHIP | MNT_AUTOMOUNTED | MNT_JOURNALED | MNT_NOUSERXATTR | MNT_DEFWRITE | MNT_MULTILABEL | MNT_NOATIME | MNT_STRICTATIME | MNT_SNAPSHOT | MNT_CPROTECT)
#define _UINT32_T 
#define host_get_host_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_PORT, (port)))
#define _PC_VDISABLE 9
#define __API_AVAILABLE_BEGIN(...) 
#define _MACH_VM_INHERIT_H_ 
#define x86_THREAD_STATE64_COUNT ((mach_msg_type_number_t) ( sizeof (x86_thread_state64_t) / sizeof (int) ))
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#define IP_DUMMYNET_FLUSH 62
#define __kpi_deprecated_arm64_macos_unavailable 
#define FCNTL_FS_SPECIFIC_BASE 0x00010000
#define _SC_BARRIERS 66
#define KEVENT_FLAG_IMMEDIATE 0x000001
#define ENOPROTOOPT 42
#define KERN_ALREADY_IN_SET 11
#define O_DP_GETRAWUNENCRYPTED 0x0002
#define MAXHOSTNAMELEN 256
#define __IPV6_ADDR_MC_SCOPE(a) ((a)->s6_addr[1] & 0x0f)
#define KERN_DOMAINNAME KERN_NISDOMAINNAME
#define LIST_INSERT_AFTER(listelm,elm,field) do { LIST_CHECK_NEXT(listelm, field); if ((LIST_NEXT((elm), field) = LIST_NEXT((listelm), field)) != NULL) LIST_NEXT((listelm), field)->field.le_prev = &LIST_NEXT((elm), field); LIST_NEXT((listelm), field) = (elm); (elm)->field.le_prev = &LIST_NEXT((listelm), field); } while (0)
#define st_atime st_atimespec.tv_sec
#define SO_NETSVC_MARKING_LEVEL 0x1119
#define PROC_PIDTHREADINFO 5
#define MNAMELEN MAXPATHLEN
#define __SPI_DEPRECATED(...) 
#define __dead 
#define IF_MAXMTU 65535
#define __FLT64X_MANT_DIG__ 64
#define POLICY_TIMESHARE 1
#define MACH_NOTIFY_SEND_ONCE (MACH_NOTIFY_FIRST + 007)
#define MACH_PORT_RIGHT_NUMBER ((mach_port_right_t) 6)
#define WAKEMON_ENABLE 0x01
#define __WATCHOS_5_0 50000
#define WAKEMON_SET_DEFAULTS 0x08
#define IPPROTO_VINES 83
#define MACH_MSG_FILTER_POLICY_ALLOW (mach_msg_filter_id)0
#define __SIZEOF_WINT_T__ 4
#define _STRUCT_YMM_REG struct __darwin_ymm_reg
#define CPU_SUBTYPE_MIPS_R3000 ((cpu_subtype_t) 7)
#define PINOD 8
#define ifr_flags ifr_ifru.ifru_flags
#define IN6_IS_ADDR_UNIQUE_LOCAL(a) (((a)->s6_addr[0] == 0xfc) || ((a)->s6_addr[0] == 0xfd))
#define R2_INCDIR "/usr/local/include/libr"
#define TCP_ENABLE_ECN 0x104
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_3(x) 
#define __LONG_LONG_WIDTH__ 64
#define ATTR_VOL_DIRCOUNT 0x00000400
#define VM_MEMORY_IOKIT 21
#define EV_RECEIPT 0x0040
#define O_DP_GETRAWENCRYPTED 0x0001
#define CLD_EXITED 1
#define VM_MEMORY_MACH_MSG 20
#define WINT_MAX INT32_MAX
#define __WATCHOS_6_0 60000
#define __WATCHOS_6_1 60100
#define __WATCHOS_6_2 60200
#define ENOSPC 28
#define SUN_LEN(su) (sizeof(*(su)) - sizeof((su)->sun_path) + strlen((su)->sun_path))
#define dbtob(db,devBlockSize) ((unsigned)(db) * devBlockSize)
#define AF_CHAOS 5
#define F_SETLK 8
#define EPROCUNAVAIL 76
#define LC_SEGMENT 0x1
#define EXC_MASK_SYSCALL (1 << EXC_SYSCALL)
#define KERN_INVALID_RIGHT 17
#define __MigPackStructs 1
#define UINTPTR_MAX 18446744073709551615UL
#define _X86_INSTRUCTION_STATE_CACHELINE_SIZE 64
#define _SC_THREAD_KEYS_MAX 86
#define REFERENCE_TYPE 0x7
#define P_DIRTY_TRACK 0x00000001
#define P_SUGID 0x00000100
#define IFRTYPE_FUNCTIONAL_WIRED 2
#define __IDSTRING(name,string) static const char name[] __used = string
#define __header_always_inline __header_inline __attribute__ ((__always_inline__))
#define CTLFLAG_MASKED 0x04000000
#define MSG_HAVEMORE 0x2000
#define __IPV6_ADDR_SCOPE_ORGLOCAL 0x08
#define _SC_XOPEN_XCU_VERSION 121
#define _CS_POSIX_V6_LPBIG_OFFBIG_LIBS 13
#define MEMORY_OBJECT_PERFORMANCE_INFO 11
#define EPFNOSUPPORT 46
#define __FLT_MIN_EXP__ (-125)
#define __DARWIN_NULL ((void *)0)
#define UF_NODUMP 0x00000001
#define API_UNAVAILABLE_BEGIN(...) 
#define KERN_HOSTNAME 10
#define WEXITED 0x00000004
#define F_GETOWN 5
#define IPV6_V6ONLY 27
#define VM_METER 1
#define IPCTL_DEFTTL 3
#define KERN_DENIED 53
#define PLATFORM_WATCHOSSIMULATOR 9
#define EBADF 9
#define p_back p_un.p_st1.__p_back
#define O_WRONLY 0x0001
#define powerof2(x) ((((x)-1)&(x))==0)
#define IP_FW_ADD 40
#define __printf0like(fmtarg,firstvararg) __attribute__((__format__ (__printf0__, fmtarg, firstvararg)))
#define UPDATE_IO_STATS(info,size) { info.count++; info.size += size; }
#define _SC_XBS5_ILP32_OFFBIG 123
#define VM_PROT_READ ((vm_prot_t) 0x01)
#define __INT16_MAX__ 0x7fff
#define PROC_PIDVNODEPATHINFO_SIZE (sizeof(struct proc_vnodepathinfo))
#define KERN_LOW_PRI_DELAY 57
#define MNT_LOCAL 0x00001000
#define VQ_QUOTA 0x1000
#define CPUFAMILY_INTEL_IVYBRIDGE 0x1f65e835
#define ATTR_VOL_FILECOUNT 0x00000200
#define MAXPHYS (128 * 1024)
#define _STRUCT_MMST_REG struct __darwin_mmst_reg
#define strcat(dest,...) __builtin___strcat_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define IPV6CTL_RTMINEXPIRE 26
#define ifr_mtu ifr_ifru.ifru_mtu
#define MACH_ACTIVITY_ID_COUNT_MAX 16
#define __FLT64X_HAS_QUIET_NAN__ 1
#define __INT_FAST64_TYPE__ long long int
#define PROX_FDTYPE_PSHM 3
#define __DARWIN_OSSwapConstInt32(x) ((__uint32_t)((((__uint32_t)(x) & 0xff000000U) >> 24) | (((__uint32_t)(x) & 0x00ff0000U) >> 8) | (((__uint32_t)(x) & 0x0000ff00U) << 8) | (((__uint32_t)(x) & 0x000000ffU) << 24)))
#define KERN_IPC 32
#define _MACH_MACH_TRAPS_H_ 
#define IPCTL_INTRQDROPS 11
#define _SC_MQ_OPEN_MAX 46
#define _GID_T 
#define KERN_AIOPROCMAX 47
#define IPV6_RECVTCLASS 35
#define IPV6CTL_TEMPPLTIME 33
#define __INT_LEAST32_MAX__ 0x7fffffff
#define host_get_filecoordinationd_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_FILECOORDINATIOND_PORT, (port)))
#define PROC_FLAG_SUPPRESSED 0x800000
#define __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ 110500
#define TCP_NOOPT 0x08
#define IN_CLASSC_HOST 0x000000ff
#define MPO_TG_BLOCK_TRACKING 0x200
#define KERN_INSUFFICIENT_BUFFER_SIZE 52
#define DST_WET 3
#define MACH_SEND_ALWAYS 0x00010000
#define OS_FALLTHROUGH __attribute__((__fallthrough__))
#define VOL_CAP_FMT_PERSISTENTOBJECTIDS 0x00000001
#define TH_SYN 0x02
#define TH_STATE_STOPPED 2
#define CPU_TYPE_MC680x0 ((cpu_type_t) 6)
#define VM_MEMORY_CORESERVICES 43
#define SO_RCVLOWAT 0x1004
#define RTV_HOPCOUNT 0x2
#define x86_DEBUG_STATE64_COUNT ((mach_msg_type_number_t) ( sizeof (x86_debug_state64_t) / sizeof (int) ))
#define HOST_BASIC_INFO_COUNT ((mach_msg_type_number_t) (sizeof(host_basic_info_data_t)/sizeof(integer_t)))
#define OSSwapBigToHostInt16(x) OSSwapInt16(x)
#define __SIZE_TYPE__ long unsigned int
#define IPPROTO_MTP 92
#define PLATFORM_IOSSIMULATOR 7
#define _CS_POSIX_V6_LP64_OFF64_LDFLAGS 9
#define EXC_I386_BOUNDFLT 5
#define MIG_REMOTE_ERROR -302
#define FSOPT_PACK_INVAL_ATTRS 0x00000008
#define THREAD_SCHED_RR_INFO 11
#define _XOPEN_LEGACY (-1)
#define HOST_XPC_EXCEPTION_PORT (17 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define __IPHONE_7_1 70100
#define round_page(x) trunc_page((x) + (vm_page_size - 1))
#define PF_ISDN AF_ISDN
#define _MACH_KMOD_H_ 
#define _POSIX_THREAD_PRIO_INHERIT (-1)
#define UTIME_NOW -1
#define HOST_DYNAMIC_PAGER_PORT (1 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define VFS_GENERIC 0
#define TOOL_LD 3
#define __deprecated_enum_msg(_msg) 
#define __IOS_DEPRECATED(_start,_dep,_msg) 
#define ENETRESET 52
#define A_GETCLASS 22
#define THROUGHPUT_QOS_LAUNCH_DEFAULT_TIER THROUGHPUT_QOS_TIER_3
#define _POSIX_JOB_CONTROL 200112L
#define IPPROTO_CFTP 62
#define VOL_CAP_FMT_NO_VOLUME_SIZES 0x00008000
#define IPCTL_SOURCEROUTE 8
#define SIGINFO 29
#define __FLT32X_EPSILON__ 2.22044604925031308084726333618164062e-16F32x
#define OSSwapBigToHostInt32(x) OSSwapInt32(x)
#define SG_READ_ONLY 0x10
#define EVFILT_EXCEPT (-15)
#define MACH_RCV_INVALID_REPLY 0x10004012
#define MACH_SEND_NOIMPORTANCE 0x00040000
#define IP_DUMMYNET_GET 64
#define MACH_PORT_RIGHT_SEND ((mach_port_right_t) 0)
#define __OS_AVAILABILITY_MSG(_target,_availability,_msg) 
#define F_GETPROTECTIONCLASS 63
#define MACH_MSGH_BITS_HAS_VOUCHER(bits) (MACH_MSGH_BITS_VOUCHER(bits) != MACH_MSGH_BITS_ZERO)
#define MACH_VOUCHER_NAME_NULL ((mach_voucher_name_t) 0)
#define AUDIT_TRIGGER_LOW_SPACE 1
#define _vm_map_user_ 
#define LC_NOTE 0x31
#define IFF_RUNNING 0x40
#define TASK_WAIT_STATE_INFO 25
#define USEC_PER_SEC 1000000ull
#define ATTR_DIR_MOUNTSTATUS 0x00000004
#define __FLT64_MIN_EXP__ (-1021)
#define MEMORY_OBJECT_INFO_MAX (1024)
#define MAC_OS_X_VERSION_10_11_2 101102
#define __SPI_AVAILABLE(...) 
#define LC_SOURCE_VERSION 0x2A
#define __MSFILTERREQ_DEFINED 
#define HOST_VM_INFO64 4
#define SLIST_EMPTY(head) ((head)->slh_first == NULL)
#define __MAC_OS_X_VERSION_MIN_REQUIRED __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__
#define PF_MAX AF_MAX
#define MEMORY_OBJECT_DATA_FLUSH 0x1
#define PROC_FLAG_ADAPTIVE 0x100000
#define CHAR_MAX SCHAR_MAX
#define __SWIFT_UNAVAILABLE_MSG(_msg) 
#define HOST_AUDIT_CONTROL_PORT (2 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define FPE_INTDIV 7
#define SEEK_DATA 4
#define KERN_SYSV 42
#define R2_HOME_SDB_FCNSIGN R_JOIN_2_PATHS (R2_HOME_DATADIR, "fcnsign")
#define EFL_IOPL_KERNEL 0x00000000
#define MAXDOMNAMELEN 256
#define IP_RECVTOS 27
#define __LDBL_NORM_MAX__ 1.18973149535723176502126385303097021e+4932L
#define OSSwapBigToHostInt64(x) OSSwapInt64(x)
#define KERN_KDTEST 19
#define TASK_READ_PORT 6
#define S_COALESCED 0xb
#define THREAD_THROUGHPUT_QOS_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (thread_throughput_qos_policy_data_t) / sizeof (integer_t)))
#define VQ_ASSIST 0x0040
#define PROC_PIDFDATALKINFO_SIZE (sizeof(struct appletalk_fdinfo))
#define i386_EXCEPTION_STATE_COUNT ((mach_msg_type_number_t) ( sizeof (i386_exception_state_t) / sizeof (int) ))
#define HOST_MIN_SPECIAL_PORT HOST_SECURITY_PORT
#define S_ATTR_EXT_RELOC 0x00000200
#define CPU_SUBTYPE_VAX8800 ((cpu_subtype_t) 11)
#define CLOCK_UPTIME_RAW _CLOCK_UPTIME_RAW
#define F_ADDFILESUPPL 104
#define _SC_FILE_LOCKING 69
#define PROC_FLAG_IOS_APPLICATION PROC_FLAG_APPLICATION
#define IPV6PORT_RESERVED 1024
#define TASK_DYLD_INFO_COUNT (sizeof(task_dyld_info_data_t) / sizeof(natural_t))
#define ATTR_DIR_DATALENGTH 0x00000020
#define PROCESSOR_BASIC_INFO_COUNT ((mach_msg_type_number_t) (sizeof(processor_basic_info_data_t)/sizeof(natural_t)))
#define TASK_QOS_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (struct task_qos_policy) / sizeof (integer_t)))
#define pseudo_AF_PIP 25
#define PROC_LISTPIDSPATH_EXCLUDE_EVTONLY 2
#define SYNC_POLICY_REVERSED 0x2
#define ifr_data ifr_ifru.ifru_data
#define __REGISTER_PREFIX__ 
#define __UINT16_MAX__ 0xffff
#define IFRTYPE_FUNCTIONAL_INTCOPROC 6
#define IOPOL_ATIME_UPDATES_OFF 1
#define __WATCHOS_AVAILABLE(_vers) 
#define F_WRLCK 3
#define MACH_PORT_TYPE_SEND_ONCE MACH_PORT_TYPE(MACH_PORT_RIGHT_SEND_ONCE)
#define HW_NCPU 3
#define TASK_OVERRIDE_QOS_POLICY 9
#define MPO_IMPORTANCE_RECEIVER 0x08
#define TCP6_MSS 1024
#define EV_DISPATCH 0x0080
#define __FLT_IS_IEC_60559__ 2
#define _CS_XBS5_ILP32_OFFBIG_LIBS 26
#define KERN_VFSNSPACE_HANDLE_PROC 1
#define OS_TRANSPARENT_UNION __attribute__((__transparent_union__))
#define NOTE_EXIT_REPARENTED ((unsigned int)eNoteExitReparentedDeprecated)
#define STAILQ_REMOVE_HEAD_UNTIL(head,elm,field) do { if ((STAILQ_FIRST((head)) = STAILQ_NEXT((elm), field)) == NULL) (head)->stqh_last = &STAILQ_FIRST((head)); } while (0)
#define host_set_node_port(host,port) (host_set_special_port((host), HOST_NODE_PORT, (port)))
#define _PC_MAX_CANON 2
#define PF_INET6 AF_INET6
#define MEMORY_OBJECT_BEHAVE_INFO_COUNT ((mach_msg_type_number_t) (sizeof(memory_object_behave_info_data_t)/sizeof(int)))
#define MH_NOMULTIDEFS 0x200
#define S_ISWHT(m) (((m) & S_IFMT) == S_IFWHT)
#define TASK_EXC_GUARD_VM_ONCE 0x02
#define EDEVERR 83
#define host_set_fairplayd_port(host,port) (host_set_special_port((host), HOST_FAIRPLAYD_PORT, (port)))
#define IP_RECVTTL 24
#define IPPROTO_INLSP 52
#define TASK_POWER_INFO_V2 26
#define NBPG 4096
#define _SC_SHARED_MEMORY_OBJECTS 39
#define RTM_OLDADD 0x9
#define _ARCHITECTURE_BYTE_ORDER_H_ 
#define NBPW sizeof(int)
#define IPV6CTL_LOG_INTERVAL 14
#define VOL_CAP_INT_EXCHANGEDATA 0x00000010
#define SEG_DATA "__DATA"
#define DEBUGGER 1
#define ATTR_FILE_LINKCOUNT 0x00000001
#define IPPROTO_ARGUS 13
#define _POSIX_V7_ILP32_OFF32 __ILP32_OFF32
#define MACH_PORT_TYPE_DNREQUEST 0x80000000
#define NDR_FLOAT_CRAY 2
#define TCPOLEN_FASTOPEN_REQ 2
#define _SIZEOF_ADDR_IFREQ(ifr) ((ifr).ifr_addr.sa_len > sizeof (struct sockaddr) ? (sizeof (struct ifreq) - sizeof (struct sockaddr) + (ifr).ifr_addr.sa_len) : sizeof (struct ifreq))
#define TSI_S_CLOSED 0
#define _SC_JOB_CONTROL 6
#define _SC_REALTIME_SIGNALS 36
#define _SC_THREAD_PRIO_INHERIT 87
#define STAILQ_REMOVE_HEAD(head,field) do { if ((STAILQ_FIRST((head)) = STAILQ_NEXT(STAILQ_FIRST((head)), field)) == NULL) (head)->stqh_last = &STAILQ_FIRST((head)); } while (0)
#define SIGEV_THREAD 3
#define MACH_MSGH_BITS_CIRCULAR 0x10000000U
#define IPV6_2292PKTINFO 19
#define _STRUCT_X86_THREAD_FULL_STATE64 struct __darwin_x86_thread_full_state64
#define BYTE_SIZE 8
#define __NDR_convert__mig_reply_error_t__defined 
#define PSPIN 0x800
#define CHAR_MIN SCHAR_MIN
#define __DBL_NORM_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define __FLT_MANT_DIG__ 24
#define NOTE_EXIT_DETAIL_MASK 0x00070000
#define KERN_KDBUFWAIT 23
#define AUDIT_SCNT 0x0400
#define VM_LEDGER_TAG_NEURAL 0x00000005
#define OFF_MIN LLONG_MIN
#define CIRCLEQ_ENTRY(type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct { struct type *cqe_next; struct type *cqe_prev; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define KIPC_SOQLIMITCOMPAT 10
#define __VERSION__ "11.2.0"
#define SUID_CRED_NULL ((suid_cred_t) 0)
#define F_GETPATH_MTMINFO 71
#define MAX_KCTL_NAME 96
#define __FLT64X_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951F64x
#define _SC_XOPEN_SHM 113
#define IP_PKTINFO 26
#define __UINT64_C(c) c ## ULL
#define _XOPEN_PATH_MAX 1024
#define ATTR_CMN_VOLSETMASK 0x00006700
#define VFS_CTL_STATFS VFS_CTL_STATFS64
#define _CS_DARWIN_USER_CACHE_DIR 65538
#define VM_MEMORY_COREGRAPHICS_BACKINGSTORES 57
#define HOST_VM_INFO_LATEST_COUNT HOST_VM_INFO_COUNT
#define MSG_WAITSTREAM 0x200
#define MACH_CORE_FILEHEADER_MAXFILES 16
#define MACH_PORT_TYPE(right) ((mach_port_type_t)(((mach_port_type_t) 1) << ((right) + ((mach_port_right_t) 16))))
#define THREAD_BACKGROUND_POLICY_DARWIN_BG 0x1000
#define MACH_VOUCHER_ATTR_IMPORTANCE_SELF ((mach_voucher_attr_recipe_command_t)200)
#define _MACH_PORT_T 
#define timevalcmp(l,r,cmp) timercmp(l, r, cmp)
#define NOTE_CRITICAL 0x00000020
#define SF_APPEND 0x00040000
#define IPV6CTL_USE_DEFAULTZONE 39
#define ATTR_VOL_ENCODINGSUSED 0x00010000
#define ATTR_CMN_ADDEDTIME 0x10000000
#define _SUSECONDS_T 
#define ILL_BADSTK 8
#define ATTR_CMN_MODTIME 0x00000400
#define NET_RT_STAT 4
#define CTL_USER_NAMES { { 0, 0 }, { "cs_path", CTLTYPE_STRING }, { "bc_base_max", CTLTYPE_INT }, { "bc_dim_max", CTLTYPE_INT }, { "bc_scale_max", CTLTYPE_INT }, { "bc_string_max", CTLTYPE_INT }, { "coll_weights_max", CTLTYPE_INT }, { "expr_nest_max", CTLTYPE_INT }, { "line_max", CTLTYPE_INT }, { "re_dup_max", CTLTYPE_INT }, { "posix2_version", CTLTYPE_INT }, { "posix2_c_bind", CTLTYPE_INT }, { "posix2_c_dev", CTLTYPE_INT }, { "posix2_char_term", CTLTYPE_INT }, { "posix2_fort_dev", CTLTYPE_INT }, { "posix2_fort_run", CTLTYPE_INT }, { "posix2_localedef", CTLTYPE_INT }, { "posix2_sw_dev", CTLTYPE_INT }, { "posix2_upe", CTLTYPE_INT }, { "stream_max", CTLTYPE_INT }, { "tzname_max", CTLTYPE_INT } }
#define _XOPEN_NAME_MAX 255
#define _POSIX_VERSION 200112L
#define VM_PURGABLE_ORDERING_MASK (1 << VM_PURGABLE_ORDERING_SHIFT)
#define TCP_MAX_WINSHIFT 14
#define IN6_IS_ADDR_MC_ORGLOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && (__IPV6_ADDR_MC_SCOPE(a) == __IPV6_ADDR_SCOPE_ORGLOCAL))
#define KERN_OPENEVT_PROC 1
#define KERN_DUMMY 33
#define IPV6_2292DSTOPTS 23
#define SF_FIRMLINK 0x00800000
#define VM_MEMORY_TCMALLOC 53
#define VQ_SYNCEVENT 0x0400
#define F_PREALLOCATE 42
#define TASK_FLAVOR_READ 1
#define __DARWIN_ONLY_UNIX_CONFORMANCE 1
#define _UNISTD_H_ 
#define SUPERPAGE_NONE 0
#define p_starttime p_un.__p_starttime
#define SOCK_DGRAM 2
#define VFS_CTL_UMOUNT 0x00010002
#define _PC_REC_INCR_XFER_SIZE 20
#define VM_PURGABLE_BEHAVIOR_SHIFT 6
#define TCPCI_OPT_WSCALE 0x00000004
#define MACH_VOUCHER_ATTR_KEY_ALL ((mach_voucher_attr_key_t)~0)
#define CPU_SUBTYPE_MC680x0_ALL ((cpu_subtype_t) 1)
#define _CS_XBS5_LP64_OFF64_LIBS 30
#define LC_DYLD_ENVIRONMENT 0x27
#define SZOMB 5
#define _POSIX_STREAM_MAX 8
#define TH_ECE 0x40
#define CPUFAMILY_POWERPC_G4 0x77c184ae
#define CPUFAMILY_POWERPC_G5 0xed76d8aa
#define __DARWIN_1050ALIAS_I(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_64_BIT_INO_T __DARWIN_SUF_UNIX03)
#define ifc_buf ifc_ifcu.ifcu_buf
#define IFF_NOTRAILERS 0x20
#define AT_IPC_MSG ((unsigned char)1)
#define TCP_NOPUSH 0x04
#define S_IWRITE S_IWUSR
#define _MACH_MIG_H_ 
#define _STRUCT_MCONTEXT_AVX512_64_FULL struct __darwin_mcontext_avx512_64_full
#define __FLT128_MAX_EXP__ 16384
#define APPLE_IF_FAM_GIF 10
#define _DARWIN_FEATURE_UNIX_CONFORMANCE 3
#define ZONE_NAME_MAX_LEN 80
#define PF_ECMA AF_ECMA
#define _CS_XBS5_LPBIG_OFFBIG_LDFLAGS 33
#define host_set_ktrace_background_port(host,port) (host_set_special_port((host), HOST_KTRACE_BACKGROUND_PORT, (port)))
#define PAGE_MAX_MASK (PAGE_MAX_SIZE-1)
#define _NET_ROUTE_H_ 
#define F_GETPATH 50
#define THREAD_EXTENDED_POLICY 1
#define EXPORT_SYMBOL_FLAGS_KIND_MASK 0x03
#define MPO_FILTER_MSG 0x100
#define VM_REGION_EXTENDED_INFO_COUNT ((mach_msg_type_number_t) (sizeof (vm_region_extended_info_data_t) / sizeof (natural_t)))
#define KEV_INET_ARPRTRALIVE 10
#define USER_POSIX2_VERSION 10
#define FSOPT_ATTR_CMN_EXTENDED 0x00000020
#define CTL_MACHDEP 7
#define __TVOS_11_4 110400
#define timercmp(tvp,uvp,cmp) (((tvp)->tv_sec == (uvp)->tv_sec) ? ((tvp)->tv_usec cmp (uvp)->tv_usec) : ((tvp)->tv_sec cmp (uvp)->tv_sec))
#define IPPROTO_AX25 93
#define TRAP_TRACE 2
#define SV_SIGINFO SA_SIGINFO
#define __FLT32_MANT_DIG__ 24
#define FST_EOF (-1)
#define IPV6_MULTICAST_HOPS 10
#define MACH_PORT_RECEIVE_STATUS_COUNT ((natural_t) (sizeof(mach_port_status_t)/sizeof(natural_t)))
#define NET_MAXID AF_MAX
#define MACH_SEND_MSG_FILTERED 0x10000017
#define FWRITE 0x00000002
#define RLIMIT_NPROC 7
#define __LP64_OFF64 (1)
#define FPS_BUSY 0x8000
#define __WATCHOS_3_0 30000
#define RUSAGE_SELF 0
#define RTM_RTTUNIT 1000000
#define SV_NODEFER SA_NODEFER
#define VM_PAGE_INFO_BASIC 1
#define __PROJECT_VERSION(s) __IDSTRING(project_version,s)
#define CLOCK_ALARM_CURRES 3
#define P_TRANSLATED 0x00020000
#define KERN_KDEFLAGS 1
#define RTF_HOST 0x4
#define _INTMAX_T 
#define HOST_SCHED_INFO_COUNT ((mach_msg_type_number_t) (sizeof(host_sched_info_data_t)/sizeof(integer_t)))
#define CPU_SUBTYPE_PENT CPU_SUBTYPE_INTEL(5, 0)
#define OSReadLittleInt(x,y) OSReadLittleInt32(x, y)
#define VM_MEMORY_WEBASSEMBLY VM_MEMORY_JAVASCRIPT_CORE
#define MACH_MSG_TYPE_PORT_SEND MACH_MSG_TYPE_MOVE_SEND
#define EFAULT 14
#define UND_SERVER_NULL ((UNDServerRef) 0)
#define _MACH_PORT_H_ 
#define IPPORT_RESERVED __DARWIN_IPPORT_RESERVED
#define SEEK_HOLE 3
#define EFL_AC 0x00040000
#define TASK_EXC_GUARD_MP_DELIVER 0x10
#define EFL_AF 0x00000010
#define MEMORY_OBJECT_DATA_SYNC 0x10
#define RTF_LLDATA 0x400
#define __PTHREAD_MUTEXATTR_SIZE__ 8
#define CPU_SUBTYPE_CELERON_MOBILE CPU_SUBTYPE_INTEL(7, 7)
#define __ReplyUnion__host_priv_subsystem__defined 
#define VM_MEMORY_RAWCAMERA 79
#define EXC_CORPSE_VARIANT_BIT 0x100
#define HW_MACHINE_ARCH 12
#define __IOS_UNAVAILABLE 
#define KEV_DL_DELMULTI 8
#define MACH_VOUCHER_ATTR_KEY_ATM ((mach_voucher_attr_key_t)1)
#define FFSYNC O_FSYNC
#define IPV6CTL_FORWSRCRT 5
#define _CS_POSIX_V6_ILP32_OFF32_LDFLAGS 3
#define _MACH_I386_KERN_RETURN_H_ 
#define CIRCLEQ_INSERT_TAIL(head,elm,field) do { (elm)->field.cqe_next = (void *)(head); (elm)->field.cqe_prev = (head)->cqh_last; if ((head)->cqh_first == (void *)(head)) (head)->cqh_first = (elm); else (head)->cqh_last->field.cqe_next = (elm); (head)->cqh_last = (elm); } while (0)
#define TCPOPT_SACK_HDR (TCPOPT_NOP<<24|TCPOPT_NOP<<16|TCPOPT_SACK<<8)
#define LC_FILESET_ENTRY (0x35 | LC_REQ_DYLD)
#define R2_SDB_FCNSIGN R_JOIN_2_PATHS (R2_SDB, "fcnsign")
#define EFL_CF 0x00000001
#define CPU_STATE_MAX 4
#define VQ_LOWDISK 0x0004
#define CPUFAMILY_ARM_HURRICANE 0x67ceee93
#define PROCESSOR_SET_BASIC_INFO_COUNT ((mach_msg_type_number_t) (sizeof(processor_set_basic_info_data_t)/sizeof(natural_t)))
#define NL_TEXTMAX 2048
#define ELOOP 62
#define TASK_VM_INFO_COUNT ((mach_msg_type_number_t) (sizeof (task_vm_info_data_t) / sizeof (natural_t)))
#define VQ_SERVEREVENT 0x0800
#define F_GETPROTECTIONLEVEL 77
#define _PC_ASYNC_IO 17
#define UF_HIDDEN 0x00008000
#define PROC_SETPC_THROTTLEMEM 1
#define SO_REUSESHAREUID 0x1025
#define ATTR_CMN_DEVID 0x00000002
#define ILL_NOOP 0
#define __FLT128_HAS_DENORM__ 1
#define IPCTL_FASTFORWARDING 14
#define EFL_DF 0x00000400
#define F_SETFL 4
#define SIG_UNBLOCK 2
#define _POSIX_RTSIG_MAX 8
#define x86_THREAD_STATE_COUNT ((mach_msg_type_number_t) ( sizeof (x86_thread_state_t) / sizeof (int) ))
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_5(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_6(x) x
#define SM_COW 1
#define HOST_INFO_MAX (1024)
#define IP_MULTICAST_IFINDEX 66
#define TAILQ_FIRST(head) ((head)->tqh_first)
#define IPPROTO_CPHB 73
#define __ORDER_PDP_ENDIAN__ 3412
#define WANT_THREADS 1
#define SIG_SETMASK 3
#define S_LAZY_SYMBOL_POINTERS 0x7
#define __MigTypeCheck 1
#define _POSIX_MEMLOCK (-1)
#define USER_TZNAME_MAX 20
#define _STRUCT_LAST_BRANCH_STATE struct __last_branch_state
#define i386_FLOAT_STATE_COUNT ((mach_msg_type_number_t) (sizeof(i386_float_state_t)/sizeof(unsigned int)))
#define VOL_CAP_FMT_CASE_SENSITIVE 0x00000100
#define SUB_MACH_TIMESPEC(t1,t2) do { if (((t1)->tv_nsec -= (t2)->tv_nsec) < 0) { (t1)->tv_nsec += (long) NSEC_PER_SEC; (t1)->tv_sec -= 1; } (t1)->tv_sec -= (t2)->tv_sec; } while (0)
#define __Request__host_priv_subsystem__defined 
#define x86_DEBUG_STATE 12
#define IPPROTO_MHRP 48
#define VM_MEMORY_ACCELERATE 75
#define ATTR_VOL_MAXOBJCOUNT 0x00000800
#define __DARWIN_UNIX03 1
#define _Null_unspecified 
#define ZOP_ALLOC 1
#define BYTE_ORDER __DARWIN_BYTE_ORDER
#define s6_addr __u6_addr.__u6_addr8
#define PF_ROUTE AF_ROUTE
#define __MAC_11_0 110000
#define __MAC_11_1 110100
#define IN6ADDR_LINKLOCAL_ALLNODES_INIT {{{ 0xff, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01 }}}
#define RTM_LOSING 0x5
#define VOL_CAP_INT_CLONE 0x00010000
#define IN_CLASSD_NET 0xf0000000
#define LC_UUID 0x1b
#define __DARWIN_NO_LONG_LONG 0
#define UINT64_MAX 18446744073709551615ULL
#define KERN_UNRAGE_PROC 3
#define VM_MEMORY_SWIFT_METADATA 83
#define CTLIOCGCOUNT _IOR('N', 2, int)
#define M16KCLBYTES (1 << M16KCLSHIFT)
#define __PTHREAD_RWLOCKATTR_SIZE__ 16
#define TASK_BASIC2_INFO_32 6
#define ILL_COPROC 7
#define __DARWIN_OSSwapInt16(x) ((__uint16_t)(__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt16(x) : _OSSwapInt16(x)))
#define __PTHREAD_RWLOCK_SIZE__ 192
#define _SYS_UN_H_ 
#define CPU_SUBTYPE_X86_64_ALL ((cpu_subtype_t)3)
#define __INT_FAST8_MAX__ 0x7f
#define ACCESSX_MAX_TABLESIZE (16 * 1024)
#define EINVAL 22
#define _ANSI_STDARG_H_ 
#define WSTOPSIG(x) (_W_INT(x) >> 8)
#define _WSTATUS(x) (_W_INT(x) & 0177)
#define O_ACCMODE 0x0003
#define MNT_NODEV 0x00000010
#define CPU_SUBTYPE_MULTIPLE ((cpu_subtype_t) -1)
#define IPPROTO_UDP 17
#define ATTR_FILE_DEVTYPE 0x00000020
#define EXC_CRASH 10
#define GUARD_TYPE_MACH_PORT 0x1
#define TIME_RELATIVE 0x01
#define BIND_SPECIAL_DYLIB_MAIN_EXECUTABLE -1
#define __MAC_10_15_4 101504
#define EFL_IF 0x00000200
#define __FLT64X_HAS_INFINITY__ 1
#define IPV6_FW_ADD 30
#define P_FSTRACE 0
#define CPU_SUBTYPE_X86_ALL ((cpu_subtype_t)3)
#define SS_ONSTACK 0x0001
#define PROCESSOR_CPU_LOAD_INFO 2
#define PF_NDRV AF_NDRV
#define MEMORY_OBJECT_PERF_INFO_COUNT ((mach_msg_type_number_t) (sizeof(memory_object_perf_info_data_t)/sizeof(int)))
#define _POSIX_TRACE_SYS_MAX 8
#define TASK_INSPECT_PORT 5
#define IN_CLASSA_NSHIFT 24
#define _SC_2_FORT_RUN 22
#define IN6ADDR_LINKLOCAL_ALLROUTERS_INIT {{{ 0xff, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02 }}}
#define MACH_PORT_RIGHT_PORT_SET ((mach_port_right_t) 3)
#define CTLFLAG_LOCKED 0x00800000
#define VFS_CTL_NEWADDR 0x00010004
#define AF_UTUN 38
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_1(x) 
#define __UINT64_MAX__ 0xffffffffffffffffULL
#define EXC_I386_INTO 2
#define KERN_LOCK_UNSTABLE 39
#define SOL_SOCKET 0xffff
#define IN_CLASSA(i) (((u_int32_t)(i) & 0x80000000) == 0)
#define IN_CLASSB(i) (((u_int32_t)(i) & 0xc0000000) == 0x80000000)
#define IN_CLASSC(i) (((u_int32_t)(i) & 0xe0000000) == 0xc0000000)
#define IN_CLASSD(i) (((u_int32_t)(i) & 0xf0000000) == 0xe0000000)
#define IPV6CTL_KEEPFAITH 13
#define INADDR_ALLHOSTS_GROUP (u_int32_t)0xe0000001
#define N_NO_DEAD_STRIP 0x0020
#define __GNUC_WIDE_EXECUTION_CHARSET_NAME "UTF-32LE"
#define CPU_SUBTYPE_POWERPC_ALL ((cpu_subtype_t) 0)
#define MACH_PORT_RIGHT_LABELH ((mach_port_right_t) 5)
#define AF_INET 2
#define ATTR_VOL_MOUNTFLAGS 0x00004000
#define VM_PURGABLE_STATE_MASK 3
#define IP_DONTFRAG 28
#define thread_get_kernel_port(thread,port) (thread_get_special_port((thread), THREAD_KERNEL_PORT, (port)))
#define USER_POSIX2_C_DEV 12
#define VM_VOLATILE_GROUP_2 (2 << VM_VOLATILE_GROUP_SHIFT)
#define FPS_TOS_SHIFT 11
#define VM_VOLATILE_GROUP_3 (3 << VM_VOLATILE_GROUP_SHIFT)
#define _SC_PRIORITIZED_IO 34
#define IP_PORTRANGE_HIGH 1
#define task_get_host_port(task,port) (task_get_special_port((task), TASK_HOST_PORT, (port)))
#define WQ_EXCEEDED_CONSTRAINED_THREAD_LIMIT 0x1
#define __DARWIN_NOCANCEL(sym) __asm("_" __STRING(sym) __DARWIN_SUF_NON_CANCELABLE)
#define F_GLOBAL_NOCACHE 55
#define MPG_FLAGS_STRICT_REPLY_NO_BANK_ATTR (0x08ull << 56)
#define CLOCK_THREAD_CPUTIME_ID _CLOCK_THREAD_CPUTIME_ID
#define MAXPHYSIO MAXPHYS
#define TCPOLEN_TSTAMP_APPA (TCPOLEN_TIMESTAMP+2)
#define SELF_LIBRARY_ORDINAL 0x0
#define host_set_telemetry_port(host,port) (host_set_special_port((host), HOST_TELEMETRY_PORT, (port)))
#define _SC_V6_ILP32_OFFBIG 104
#define _SC_THREAD_SPORADIC_SERVER 92
#define POLICY_RR_LIMIT_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_rr_limit)/sizeof(integer_t)))
#define SO_NOADDRERR 0x1023
#define EFL_NT 0x00004000
#define ATTR_FORK_ALLOCSIZE 0x00000002
#define MACH_PORT_TYPE_LABELH MACH_PORT_TYPE(MACH_PORT_RIGHT_LABELH)
#define VM_MEMORY_OS_ALLOC_ONCE 73
#define _SYS_SOCKET_H_ 
#define CPUSUBFAMILY_ARM_M 3
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_1(x) 
#define TCPOLEN_TIMESTAMP 10
#define __API_AVAILABLE_BEGIN_GET_MACRO(...) 
#define PROCESSOR_SET_INFO_MAX (1024)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_2(x) 
#define PROC_SELFSET_THREADNAME 2
#define _CS_XBS5_LP64_OFF64_LINTFLAGS 31
#define EFL_OF 0x00000800
#define err_ipc_compat err_system(0x3f)
#define MPG_FLAGS_STRICT_REPLY_MISMATCHED_PERSONA (0x10ull << 56)
#define CIRCLEQ_INSERT_AFTER(head,listelm,elm,field) do { CIRCLEQ_CHECK_NEXT(head, listelm, field); (elm)->field.cqe_next = (listelm)->field.cqe_next; (elm)->field.cqe_prev = (listelm); if ((listelm)->field.cqe_next == (void *)(head)) (head)->cqh_last = (elm); else (listelm)->field.cqe_next->field.cqe_prev = (elm); (listelm)->field.cqe_next = (elm); } while (0)
#define PT_READ_D 2
#define IPC_SPACE_NULL ((ipc_space_t) 0)
#define PT_READ_I 1
#define MPO_DENAP_RECEIVER 0x40
#define KERN_PROC_TTY 4
#define mach_port_MSG_COUNT 40
#define PT_READ_U 3
#define LC_ROUTINES_64 0x1a
#define IOV_MAX 1024
#define MEMORY_OBJECT_COPY_SYNC 0x8
#define EFL_IOPL_USER 0x00003000
#define PROC_FLAG_IMPORTANCE_DONOR 0x400000
#define EFL_PF 0x00000004
#define _lock_set_user_ 
#define __RequestUnion__host_security_subsystem__defined 
#define KERN_DATA_SELECTOR 0x0010
#define __LDBL_EPSILON__ 1.08420217248550443400745280086994171e-19L
#define os_is_compile_time_constant(expr) __builtin_constant_p(expr)
#define __UINTMAX_C(c) c ## UL
#define O_SYNC 0x0080
#define MACH_MSG_DESCRIPTOR_NULL (mach_msg_descriptor_t *) 0
#define ATTR_FILE_TOTALSIZE 0x00000002
#define minor(x) ((int32_t)((x) & 0xffffff))
#define NFSV4_MAX_FH_SIZE 128
#define IP_MULTICAST_IF 9
#define IP_DROP_MEMBERSHIP 13
#define host_get_automountd_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_AUTOMOUNTD_PORT, (port)))
#define MACH_MSGH_BITS_REMOTE_MASK 0x0000001f
#define WQ_FLAGS_AVAILABLE 0x4
#define PTHREAD_STACK_MIN 8192
#define VFS_CTL_NSTATUS 0x0001000A
#define IN6_IS_ADDR_V4MAPPED(a) ((*(const __uint32_t *)(const void *)(&(a)->s6_addr[0]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[4]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[8]) == ntohl(0x0000ffff)))
#define __SSE_MATH__ 1
#define EFL_RF 0x00010000
#define __Reply__host_security_subsystem__defined 
#define IFCAP_TXSTATUS 0x00200
#define TOOL_CLANG 1
#define __k8 1
#define MH_NOUNDEFS 0x1
#define __WATCHOS_DEPRECATED(_start,_dep,_msg) 
#define CLOCK_MONOTONIC_RAW_APPROX _CLOCK_MONOTONIC_RAW_APPROX
#define CPU_SUBTYPE_PENTIUM_3_XEON CPU_SUBTYPE_INTEL(8, 2)
#define __FLT32X_NORM_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define NOTE_FFNOP 0x00000000
#define EFL_SF 0x00000080
#define API_AVAILABLE(...) 
#define _SC_PRIORITY_SCHEDULING 35
#define __API_TO_BE_DEPRECATED 100000
#define KEV_DL_IF_ATTACHED 9
#define host_set_atm_notification_port(host,port) (host_set_special_port((host), HOST_ATM_NOTIFICATION_PORT, (port)))
#define _SYS_PTRACE_H_ 
#define _SYS_PROC_H_ 
#define SIGCONT 19
#define ATTR_CMN_PARENTID 0x04000000
#define O_CLOEXEC 0x01000000
#define KEV_CTL_SUBCLASS 2
#define LC_DYLD_CHAINED_FIXUPS (0x34 | LC_REQ_DYLD)
#define VM_MEMORY_APPLICATION_SPECIFIC_16 255
#define _PC_NAME_MAX 4
#define EFL_TF 0x00000100
#define MATTR_VAL_ON 1
#define VM_MEMORY_ASL 81
#define INT_LEAST64_MAX INT64_MAX
#define SRCHFS_VALIDOPTIONSMASK 0x800000FF
#define __WATCHOS_3_1_1 30101
#define TH_RST 0x04
#define ATTR_CMN_OWNERID 0x00008000
#define MACH_VOUCHER_NAME_ARRAY_NULL ((mach_voucher_name_array_t) 0)
#define PROC_PIDTASKINFO 4
#define KERN_MAXPROC 6
#define HOST_PRIORITY_INFO_COUNT ((mach_msg_type_number_t) (sizeof(host_priority_info_data_t)/sizeof(integer_t)))
#define VM_REGION_BASIC_INFO_64 9
#define VQ_FREE_SPACE_CHANGE 0x8000
#define VM_MEMORY_ATS 50
#define SO_TIMESTAMP_MONOTONIC 0x0800
#define PROC_PIDTBSDINFO 3
#define ENETUNREACH 51
#define R2_FORTUNES R_JOIN_3_PATHS ("share", "doc", "radare2")
#define TAILQ_FOREACH_REVERSE(var,head,headname,field) for ((var) = TAILQ_LAST((head), headname); (var); (var) = TAILQ_PREV((var), headname, field))
#define TSI_S__CLOSE_WAIT 5
#define PROC_PIDWORKQUEUEINFO 12
#define IP_OLD_FW_DEL 51
#define PROC_FP_CLEXEC 2
#define CONNECT_DATA_IDEMPOTENT 0x2
#define _W_INT(w) (*(int *)&(w))
#define OSWriteBigInt(x,y,z) OSWriteBigInt32(x, y, z)
#define EFL_VM 0x00020000
#define KEV_INET6_ADDR_DELETED 3
#define _SC_SIGQUEUE_MAX 51
#define _ID_T 
#define _POSIX2_PBS_CHECKPOINT (-1)
#define IPPORT_USERRESERVED 5000
#define AF_OSI AF_ISO
#define VM_MEMORY_MALLOC_LARGE 3
#define SYNC_VOLUME_WAIT 0x02
#define IPPORT_HIFIRSTAUTO 49152
#define REFERENCE_FLAG_PRIVATE_DEFINED 3
#define SAE_CONNID_ALL ((sae_connid_t)(-1ULL))
#define IN_CLASSA_MAX 128
#define MPG_FLAGS_NONE (0x00ull)
#define IN_PRIVATE(i) ((((u_int32_t)(i) & 0xff000000) == 0x0a000000) || (((u_int32_t)(i) & 0xfff00000) == 0xac100000) || (((u_int32_t)(i) & 0xffff0000) == 0xc0a80000))
#define TCP_CONNECTION_INFO 0x106
#define THREAD_PRECEDENCE_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (thread_precedence_policy_data_t) / sizeof (integer_t)))
#define ATTR_VOL_QUOTA_SIZE 0x10000000
#define R2_LIBDIR "/usr/local/lib"
#define S_IFCHR 0020000
#define KERN_KDGETENTROPY 16
#define LATENCY_QOS_LAUNCH_DEFAULT_TIER LATENCY_QOS_TIER_3
#define MACH_MSG_PHYSICAL_COPY 0
#define PROC_PIDFILEPORTSOCKETINFO_SIZE PROC_PIDFDSOCKETINFO_SIZE
#define INTPTR_MIN (-INTPTR_MAX-1)
#define TCPOPT_CC_HDR(ccopt) (TCPOPT_NOP<<24|TCPOPT_NOP<<16|(ccopt)<<8|TCPOLEN_CC)
#define VOL_CAP_FMT_NO_PERMISSIONS 0x00400000
#define EAFNOSUPPORT 47
#define FP_CHOP 3
#define host_set_user_notification_port(host,port) (host_set_special_port((host), HOST_USER_NOTIFICATION_PORT, (port)))
#define MACH_MSGH_BITS_HAS_LOCAL(bits) (MACH_MSGH_BITS_LOCAL(bits) != MACH_MSGH_BITS_ZERO)
#define RTA_DST 0x1
#define ifr_intval ifr_ifru.ifru_intval
#define NOTE_RENAME 0x00000020
#define ATTR_CMN_SETMASK 0x51C7FF00
#define S_IFDIR 0040000
#define F_CHKCLEAN 41
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_2(x) 
#define PVFS 20
#define IPPROTO_MAX 256
#define SAE_CONNID_ANY 0
#define TRAP_BRKPT 1
#define BASEPRI(x) (((x) & (255 << 8)) == 0)
#define KERN_SYMFILE 37
#define IN6_IS_ADDR_LOOPBACK(a) ((*(const __uint32_t *)(const void *)(&(a)->s6_addr[0]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[4]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[8]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[12]) == ntohl(1)))
#define __nullable 
#define _POSIX_ASYNCHRONOUS_IO (-1)
#define __FLT64_IS_IEC_60559__ 2
#define ZOP_FREE 0
#define EFL_ZF 0x00000040
#define PWAIT 32
#define __FLT32X_MIN_EXP__ (-1021)
#define TH_FLAGS_IDLE 0x2
#define KERNEL_LOWER 0xffffff8000000000
#define MACH_SEND_INVALID_VOUCHER 0x10000005
#define ATTR_FILE_FORKCOUNT 0x00000080
#define MACH_MSGH_BITS_IMPHOLDASRT 0x10000000U
#define MNT_ROOTFS 0x00004000
#define R2_VERSION_NUMBER 50504
#define _MACH_MACHINE_EXCEPTION_H_ 
#define _V6_LP64_OFF64 __LP64_OFF64
#define __INT_FAST16_MAX__ 0x7fff
#define HOST_VM_INFO_REV0_COUNT ((mach_msg_type_number_t) (HOST_VM_INFO_REV1_COUNT - 2))
#define VM_BEHAVIOR_DEFAULT ((vm_behavior_t) 0)
#define PROC_PIDPATHINFO_SIZE (MAXPATHLEN)
#define MSG_OOB 0x1
#define CPU_STATE_USER 0
#define _CS_XBS5_ILP32_OFF32_LINTFLAGS 23
#define __RequestUnion__vm_map_subsystem__defined 
#define ATTR_CMNEXT_EXT_FLAGS 0x00000200
#define major(x) ((int32_t)(((u_int32_t)(x) >> 24) & 0xff))
#define PAGE_SHIFT vm_page_shift
#define RTV_RPIPE 0x8
#define _SC_PHYS_PAGES 200
#define VOL_CAP_INT_EXTENDED_ATTR 0x00004000
#define CPU_SUBTYPE_486SX CPU_SUBTYPE_INTEL(4, 8)
#define F_SETNOSIGPIPE 73
#define OSSwapHostToBigConstInt32(x) OSSwapConstInt32(x)
#define LC_SYMSEG 0x3
#define CTLIOCGINFO _IOWR('N', 3, struct ctl_info)
#define SO_NOTIFYCONFLICT 0x1026
#define __FLT64_DIG__ 15
#define CPU_SUBTYPE_I386_ALL CPU_SUBTYPE_INTEL(3, 0)
#define EROFS 30
#define IN_EXPERIMENTAL(i) (((u_int32_t)(i) & 0xf0000000) == 0xf0000000)
#define WANT_CAPSTONE 1
#define MAC_OS_X_VERSION_10_10 101000
#define MAC_OS_X_VERSION_10_11 101100
#define MAC_OS_X_VERSION_10_12 101200
#define MAC_OS_X_VERSION_10_13 101300
#define MAC_OS_X_VERSION_10_14 101400
#define MAC_OS_X_VERSION_10_15 101500
#define MAC_OS_X_VERSION_10_16 101600
#define __SYS_APPLEAPIOPTS_H__ 
#define _SC_SEMAPHORES 37
#define TASK_POWER_INFO_COUNT ((mach_msg_type_number_t) (sizeof (task_power_info_data_t) / sizeof (natural_t)))
#define CPU_SUBTYPE_MIPS_R3000a ((cpu_subtype_t) 6)
#define _MACH_MACHINE_KERN_RETURN_H_ 
#define CLOFF CLOFSET
#define PROX_FDTYPE_NETPOLICY 9
#define UINTMAX_MAX UINTMAX_C(18446744073709551615)
#define x86_LAST_BRANCH_STATE 25
#define MNT_MULTILABEL 0x04000000
#define _MACH_VOUCHER_TYPES_H_ 
#define IPC_EVENTLINK_NULL ((ipc_eventlink_t) 0)
#define MACH_PORT_GEN(name) (((name) & 0xff) << 24)
#define VM_FLAGS_SUPERPAGE_SIZE_2MB (SUPERPAGE_SIZE_2MB<<VM_FLAGS_SUPERPAGE_SHIFT)
#define KERN_RAGE_PROC 1
#define F_DUPFD_CLOEXEC 67
#define __LONG_MAX__ 0x7fffffffffffffffL
#define __IOS_EXTENSION_UNAVAILABLE(_msg) 
#define PLATFORM_MACOS 1
#define PROCESSOR_SET_LOAD_INFO_COUNT ((mach_msg_type_number_t) (sizeof(processor_set_load_info_data_t)/sizeof(natural_t)))
#define __WATCHOS_5_2 50200
#define KERN_COREFILE 50
#define CPUSUBFAMILY_UNKNOWN 0
#define EXC_I386_BPTFLT 3
#define VM_MEMORY_CM_READCACHE 95
#define __GNUC_EXECUTION_CHARSET_NAME "UTF-8"
#define __DARWIN_EXTSN_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_EXTSN __DARWIN_SUF_NON_CANCELABLE)
#define PROCESSOR_SET_BASIC_INFO 5
#define MAC_OS_X_VERSION_10_0 1000
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
#define task_set_task_debug_control_port(task,port) (task_set_special_port((task), TASK_DEBUG_CONTROL_PORT, (port)))
#define MACH_NOTIFY_SEND_POSSIBLE (MACH_NOTIFY_FIRST + 002)
#define MCAST_UNBLOCK_SOURCE 85
#define PROC_PIDPATHINFO 11
#define USERMODE(x) (((x) & 3) == 3)
#define PF_LINK AF_LINK
#define IPV6_TCLASS 36
#define AF_SNA 11
#define IPV6CTL_NEIGHBORGCTHRESH 46
#define __kpi_deprecated(_msg) 
#define _KEY_T 
#define MACH_PORT_SRIGHTS_NONE 0
#define EBADEXEC 85
#define MACH_SEND_TOO_LARGE 0x1000000e
#define IOPOL_VFS_TRIGGER_RESOLVE_DEFAULT 0
#define IOPOL_UTILITY 4
#define VM_MEMORY_OPENCL 67
#define WIFSTOPPED(x) (_WSTATUS(x) == _WSTOPPED && WSTOPSIG(x) != 0x13)
#define LIST_CHECK_HEAD(head,field) 
#define TASK_ABSOLUTETIME_INFO_COUNT ((mach_msg_type_number_t) (sizeof (task_absolutetime_info_data_t) / sizeof (natural_t)))
#define _POSIX_RAW_SOCKETS (-1)
#define HOST_SECURITY_NULL ((host_security_t) 0)
#define __AVAILABILITY_INTERNAL_UNAVAILABLE __attribute__((unavailable))
#define _SS_ALIGNSIZE (sizeof(__int64_t))
#define CPU_SUBTYPE_ITANIUM_2 CPU_SUBTYPE_INTEL(11, 1)
#define x86_AVX_STATE32 16
#define MACH_SEND_IMPORTANCE 0x00080000
#define IP_RECVIF 20
#define EFTYPE 79
#define S_TYPEISMQ(buf) (0)
#define EXPR_NEST_MAX 32
#define SRUN 2
#define SI_MESGQ 0x10005
#define _VA_LIST_DEFINED 
#define __WATCHOS_7_0 70000
#define __WATCHOS_7_1 70100
#define __WATCHOS_7_2 70200
#define __WATCHOS_7_4 70400
#define IOPOL_MATERIALIZE_DATALESS_FILES_OFF 1
#define MACH_MSG_TRAILER_MINIMUM_SIZE sizeof(mach_msg_trailer_t)
#define __SEG_FS 1
#define err_dipc err_system(0x7)
#define CTL_MAXID 9
#define __INT_LEAST16_MAX__ 0x7fff
#define MACH_SEND_SYNC_OVERRIDE 0x00100000
#define _SC_CLK_TCK 3
#define VOL_CAP_FMT_HIDDEN_FILES 0x00002000
#define N_WEAK_REF 0x0040
#define _SC_THREAD_DESTRUCTOR_ITERATIONS 85
#define TASK_READ_NULL ((task_read_t) 0)
#define _SC_2_UPE 25
#define KERNEL_BOOT_INFO_MAX (4096)
#define _DARWIN_FEATURE_ONLY_UNIX_CONFORMANCE 1
#define EDEADLK 11
#define ifr_devmtu ifr_ifru.ifru_devmtu
#define _FD_SET 
#define SRCHFS_SKIPINAPPROPRIATE 0x00000080
#define __SEG_GS 1
#define TASK_TRACE_MEMORY_INFO 24
#define __FLT32_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F32
#define ATTR_CMN_RETURNED_ATTRS 0x80000000
#define EV_FLAG0 0x1000
#define EV_FLAG1 0x2000
#define MACH_SEND_INVALID_DEST 0x10000003
#define CLSIZE 1
#define VM_INHERIT_LAST_VALID VM_INHERIT_NONE
#define P_EXEC 0x00004000
#define __SIG_ATOMIC_WIDTH__ 32
#define _POSIX2_PBS_TRACK (-1)
#define __DARWIN_ALIAS(sym) __asm("_" __STRING(sym) __DARWIN_SUF_UNIX03)
#define __MISMATCH_TAGS_PUSH 
#define _STRUCT_X86_DEBUG_STATE32 struct __darwin_x86_debug_state32
#define HW_TARGET 26
#define x86_AVX_STATE64 (x86_AVX_STATE32 + 1)
#define TAILQ_NEXT(elm,field) ((elm)->field.tqe_next)
#define __INT_LEAST64_TYPE__ long long int
#define IFSTATMAX 800
#define INT64_MAX 9223372036854775807LL
#define SIGCHLD 20
#define MACH_VOUCHER_ATTR_USER_DATA_STORE ((mach_voucher_attr_recipe_command_t)211)
#define __APPLE_API_OBSOLETE 
#define _BSM_AUDIT_H 
#define __INT16_TYPE__ short int
#define _MACH_STD_TYPES_H_ 
#define VM_MEMORY_STACK 30
#define OS_NONNULL1 __attribute__((__nonnull__(1)))
#define VM_MEMORY_ROSETTA_USER_LDT 235
#define PROC_KQUEUE_32 0x08
#define R2_VERSION_MINOR 5
#define HOST_VM_INFO_REV2_COUNT HOST_VM_INFO_LATEST_COUNT
#define IPV6_MAX_GROUP_SRC_FILTER 512
#define STAILQ_CONCAT(head1,head2) do { if (!STAILQ_EMPTY((head2))) { *(head1)->stqh_last = (head2)->stqh_first; (head1)->stqh_last = (head2)->stqh_last; STAILQ_INIT((head2)); } } while (0)
#define EACCES 13
#define MAXLOGNAME 255
#define CPUMON_MAKE_FATAL 0x1000
#define SECT_OBJC_SYMBOLS "__symbol_table"
#define __TVOS_13_0 130000
#define _I386_EFLAGS_H_ 
#define _MACHTYPES_H_ 
#define MACH_VOUCHER_IMPORTANCE_ATTR_DROP_EXTERNAL 2
#define KERN_FAILURE 5
#define __CAST_AWAY_QUALIFIER(variable,qualifier,type) (type) (long)(variable)
#define TH_FIN 0x01
#define VM_PURGABLE_ORDERING_OBSOLETE (1 << VM_PURGABLE_ORDERING_SHIFT)
#define REBASE_OPCODE_ADD_ADDR_ULEB 0x30
#define MACH_PORT_VALID(name) (((name) != MACH_PORT_NULL) && ((name) != MACH_PORT_DEAD))
#define CPU_SUBTYPE_VAX730 ((cpu_subtype_t) 4)
#define TCP_MAXSEG 0x02
#define __FLT128_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define __INTPTR_MAX__ 0x7fffffffffffffffL
#define TAILQ_FOREACH(var,head,field) for ((var) = TAILQ_FIRST((head)); (var); (var) = TAILQ_NEXT((var), field))
#define IFQ_TARGET_DELAY (10ULL * 1000 * 1000)
#define LIST_HEAD(name,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct name { struct type *lh_first; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define ifr_phys ifr_ifru.ifru_phys
#define P_DIRTY_ALLOW_IDLE_EXIT 0x00000002
#define KEV_DL_RRC_STATE_CHANGED 28
#define _POSIX_CLOCK_SELECTION (-1)
#define EXC_I386_SSEEXTERR 8
#define VM_VOLATILE_GROUP_DEFAULT VM_VOLATILE_GROUP_0
#define _STRUCT_X86_DEBUG_STATE64 struct __darwin_x86_debug_state64
#define host_get_host_priv_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_PRIV_PORT, (port)))
#define MEMORY_OBJECT_DATA_FLUSH_ALL 0x40
#define CPU_SUBTYPE_LITTLE_ENDIAN ((cpu_subtype_t) 0)
#define KERN_INVALID_POLICY 28
#define ATTR_CMN_FULLPATH 0x08000000
#define SIGSYS 12
#define IP_OLD_FW_FLUSH 52
#define EV_SET64(kevp,a,b,c,d,e,f,g,h) do { struct kevent64_s *__kevp__ = (kevp); __kevp__->ident = (a); __kevp__->filter = (b); __kevp__->flags = (c); __kevp__->fflags = (d); __kevp__->data = (e); __kevp__->udata = (f); __kevp__->ext[0] = (g); __kevp__->ext[1] = (h); } while(0)
#define PT_ATTACH ePtAttachDeprecated
#define __TVOS_13_2 130200
#define CIRCLEQ_INIT(head) do { (head)->cqh_first = (void *)(head); (head)->cqh_last = (void *)(head); } while (0)
#define NOTE_LINK 0x00000010
#define PROC_KQUEUE_64 0x10
#define _POSIX2_PBS (-1)
#define ntohl(x) __DARWIN_OSSwapInt32(x)
#define THREAD_STATE_FLAVOR_LIST_10_13 130
#define SA_NOCLDSTOP 0x0008
#define CPU_SUBTYPE_ARM_V8M ((cpu_subtype_t) 17)
#define _XOPEN_IOV_MAX 16
#define ntohs(x) __DARWIN_OSSwapInt16(x)
#define __swift_compiler_version_at_least(...) 1
#define HOST_RESOURCE_SIZES_COUNT ((mach_msg_type_number_t) (sizeof(kernel_resource_sizes_data_t)/sizeof(integer_t)))
#define MACH_VOUCHER_NULL ((mach_voucher_t) 0)
#define __DARWIN_LITTLE_ENDIAN 1234
#define LC_FUNCTION_STARTS 0x26
#define _I386_PARAM_H_ 
#define __SWIFT_UNAVAILABLE 
#define PROC_FLAG_EXEC 0x4000
#define _PC_ALLOC_SIZE_MIN 16
#define PF_DLI AF_DLI
#define THREAD_SCHED_TIMESHARE_INFO 10
#define ILL_PRVREG 6
#define ENAMETOOLONG 63
#define KERN_RETURN_MAX 0x100
#define host_get_audit_control_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_AUDIT_CONTROL_PORT, (port)))
#define FPE_FLTINV 5
#define pseudo_AF_XTP 19
#define __LITTLE_ENDIAN__ 1
#define VM_PAGE_QUERY_PAGE_CS_TAINTED 0x200
#define IN_LOOPBACK(i) (((u_int32_t)(i) & 0xff000000) == 0x7f000000)
#define MACH_MSG_TYPE_PORT_ANY_SEND(x) (((x) >= MACH_MSG_TYPE_MOVE_SEND) && ((x) <= MACH_MSG_TYPE_MAKE_SEND_ONCE))
#define TASK_EXC_GUARD_MP_CORPSE 0x40
#define F_SETLKW 9
#define USER_STREAM_MAX 19
#define __DARWIN_WCHAR_MAX __WCHAR_MAX__
#define TASK_BASIC_INFO_64 5
#define PROC_PIDWORKQUEUEINFO_SIZE (sizeof(struct proc_workqueueinfo))
#define BIND_SYMBOL_FLAGS_NON_WEAK_DEFINITION 0x8
#define CPU_SUBTYPE_ARM64_PTR_AUTH_VERSION(x) (((x) & CPU_SUBTYPE_ARM64_PTR_AUTH_MASK) >> 24)
#define VM_MAXID 6
#define PROC_DIRTYCONTROL_CLEAR 4
#define HW_PHYSMEM 5
#define IPPROTO_NSP 31
#define _MACH_HOST_SPECIAL_PORTS_H_ 
#define _BSD_MACHINE_ENDIAN_H_ 
#define __FLT32_MIN_10_EXP__ (-37)
#define CPUFAMILY_ARM_9 0xe73283ae
#define VM_LIB64_SHR_TEXT ((user_addr_t) 0x00007FFF80000000ULL)
#define NOTE_LEEWAY 0x00000010
#define __GNUC_MINOR__ 2
#define _SC_OPEN_MAX 5
#define MATTR_MIGRATE 2
#define __FLT32X_DIG__ 15
#define HOST_PREFERRED_USER_ARCH 12
#define CPU_SUBTYPE_VAX785 ((cpu_subtype_t) 2)
#define NTOHL(x) (x) = ntohl((__uint32_t)x)
#define BIND_TYPE_TEXT_PCREL32 3
#define NTOHS(x) (x) = ntohs((__uint16_t)x)
#define EV_ERROR 0x4000
#define __WORDSIZE 64
#define RTM_DELMADDR 0x10
#define SRCHFS_MATCHFILES 0x00000008
#define MEMORY_OBJECT_RETURN_NONE 0
#define AT_REMOVEDIR 0x0080
#define __IPHONE_8_1 80100
#define __IPHONE_8_3 80300
#define TAILQ_HEAD_INITIALIZER(head) { NULL, &(head).tqh_first }
#define INT64_MIN (-INT64_MAX-1)
#define BIND_OPCODE_DO_BIND_ULEB_TIMES_SKIPPING_ULEB 0xC0
#define _PC_REC_MIN_XFER_SIZE 22
#define USER_POSIX2_SW_DEV 17
#define _SC_TYPED_MEMORY_OBJECTS 102
#define KERN_SPECULATIVE_READS 64
#define _MACH_I386_EXCEPTION_H_ 
#define __CONSTANT_CFSTRINGS__ 1
#define __INT_FAST16_WIDTH__ 16
#define PROC_FI_GUARD_CLOSE (1u << 0)
#define CLD_STOPPED 5
#define SOI_S_ISDISCONNECTED 0x2000
#define __DBL_HAS_QUIET_NAN__ 1
#define VOL_CAP_INT_RENAME_EXCL 0x00080000
#define __FLT64X_MAX__ 1.18973149535723176502126385303097021e+4932F64x
#define EXPORT_SYMBOL_FLAGS_KIND_REGULAR 0x00
#define FPC_IC_AFF 0x1000
#define MACH_MSGH_BITS_VOUCHER(bits) (((bits) & MACH_MSGH_BITS_VOUCHER_MASK) >> 16)
#define MACH_MSG_TYPE_COPY_RECEIVE 22
#define IPV6CTL_FORWARDING 1
#define MACH_PORT_QLIMIT_BASIC (5)
#define UUID_DEFINE(name,u0,u1,u2,u3,u4,u5,u6,u7,u8,u9,u10,u11,u12,u13,u14,u15) static const uuid_t name __attribute__ ((unused)) = {u0,u1,u2,u3,u4,u5,u6,u7,u8,u9,u10,u11,u12,u13,u14,u15}
#define ATTR_VOL_MOUNTEDDEVICE 0x00008000
#define SYNC_POLICY_FIXED_PRIORITY 0x1
#define AUDIT_HARD_LIMIT_FREE_BLOCKS 4
#define PROC_FI_GUARD_SOCKET_IPC (1u << 2)
#define MNT_UNKNOWNPERMISSIONS MNT_IGNORE_OWNERSHIP
#define THREAD_EXTENDED_INFO 5
#define VM_PROT_EXECUTE ((vm_prot_t) 0x04)
#define AF_VSOCK 40
#define BUS_ADRERR 2
#define LC_VERSION_MIN_TVOS 0x2F
#define __code_model_small__ 1
#define AF_COIP 20
#define MH_KEXT_BUNDLE 0xb
#define MAC_OS_X_VERSION_10_12_1 101201
#define MAC_OS_X_VERSION_10_12_2 101202
#define MAC_OS_X_VERSION_10_12_4 101204
#define VOL_CAP_INT_NAMEDSTREAMS 0x00002000
#define _POSIX_V7_ILP32_OFFBIG __ILP32_OFFBIG
#define R2_HOME_HISTORY R_JOIN_2_PATHS (R2_HOME_CACHEDIR, "history")
#define host_get_amfid_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_AMFID_PORT, (port)))
#define _MACH_ERROR_H_ 
#define ATTR_FILE_FORKLIST 0x00000100
#define MACH_VOUCHER_ATTR_VALUE_FLAGS_PERSIST ((mach_voucher_attr_value_flags_t)1)
#define OSWriteLittleInt(x,y,z) OSWriteLittleInt32(x, y, z)
#define __DARWIN_WCHAR_MIN (-0x7fffffff - 1)
#define LC_SUB_LIBRARY 0x15
#define MNT_SNAPSHOT 0x40000000
#define ESOCKTNOSUPPORT 44
#define PROC_KQUEUE_QOS 0x20
#define AF_LOCAL AF_UNIX
#define __INTPTR_TYPE__ long int
#define __API_DEPRECATED_REP_GET_MACRO(...) 
#define CPUFAMILY_ARM_TWISTER 0x92fb37c8
#define host_get_syspolicyd_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_SYSPOLICYD_PORT, (port)))
#define LC_PREBIND_CKSUM 0x17
#define __SIZEOF_FLOAT__ 4
#define host_get_container_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_CONTAINERD_PORT, (port)))
#define F_ALLOCATECONTIG 0x00000002
#define MNT_ASYNC 0x00000040
#define host_get_coalition_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_COALITION_PORT, (port)))
#define _POSIX_TRACE_NAME_MAX 8
#define PF_BOND ((uint32_t)0x626f6e64)
#define _STRUCT_TIMEVAL64 
#define S_CSTRING_LITERALS 0x2
#define __API_UNAVAILABLE_END 
#define VM_REGION_SUBMAP_INFO_COUNT ((mach_msg_type_number_t) (sizeof(vm_region_submap_info_data_t) / sizeof(natural_t)))
#define CPU_SUBTYPE_VAX750 ((cpu_subtype_t) 3)
#define EREMOTE 71
#define PRIBIO 16
#define S_ISBLK(m) (((m) & S_IFMT) == S_IFBLK)
#define KERN_INVALID_OBJECT 29
#define MACH_MSGH_BITS_COMPLEX 0x80000000U
#define TSI_S_SYN_SENT 2
#define VM_BEHAVIOR_ZERO_WIRED_PAGES ((vm_behavior_t) 7)
#define TIME_ABSOLUTE 0x00
#define NET_RT_MAXID 11
#define LOCAL_PEERPID 0x002
#define IPPROTO_GGP 3
#define VM_LEDGER_TAG_NONE 0x00000000
#define HOST_SCHED_INFO 3
#define __STDC_WANT_LIB_EXT1__ 1
#define FP_RND_DOWN 1
#define PROCESSOR_CPU_LOAD_INFO_COUNT ((mach_msg_type_number_t) (sizeof(processor_cpu_load_info_data_t)/sizeof(natural_t)))
#define MACH_VOUCHER_ATTR_REDEEM ((mach_voucher_attr_recipe_command_t)10)
#define MACH_MSGH_KIND_NOTIFICATION 0x00000001
#define __FLT32_DECIMAL_DIG__ 9
#define P_OWEUPC 0x00008000
#define RTF_BITS "\020\1UP\2GATEWAY\3HOST\4REJECT\5DYNAMIC\6MODIFIED\7DONE" "\10DELCLONE\11CLONING\12XRESOLVE\13LLINFO\14STATIC\15BLACKHOLE" "\16NOIFREF\17PROTO2\20PROTO1\21PRCLONING\22WASCLONED\23PROTO3" "\25PINNED\26LOCAL\27BROADCAST\30MULTICAST\31IFSCOPE\32CONDEMNED" "\33IFREF\34PROXY\35ROUTER\37GLOBAL"
#define TCPOLEN_MAXSEG 4
#define MAP_MEM_WCOMB 4
#define OS_WEAK_IMPORT __attribute__((__weak_import__))
#define IN6ADDR_LOOPBACK_INIT {{{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01 }}}
#define HOST_FAIRPLAYD_PORT (24 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define API_DEPRECATED(...) 
#define KERN_PS_STRINGS 34
#define LC_LOAD_DYLINKER 0xe
#define SO_LABEL 0x1010
#define __TVOS_DEPRECATED(_start,_dep,_msg) 
#define PROC_UDATA_INFO_SET 2
#define _PC_NAME_CHARS_MAX 10
#define KEV_INET6_DEFROUTER 6
#define x86_AVX512_STATE32_COUNT ((mach_msg_type_number_t) (sizeof(x86_avx512_state32_t)/sizeof(unsigned int)))
#define VM_FLAGS_4GB_CHUNK 0x0004
#define MBIGCLSHIFT 12
#define ATTR_FILE_RSRCALLOCSIZE 0x00002000
#define WNOWAIT 0x00000020
#define R2_PREFIX "/usr/local"
#define AUDIT_GROUP 0x0080
#define MAP_MEM_GRAB_SECLUDED 0x008000
#define thread_set_kernel_port(thread,port) (thread_set_special_port((thread), THREAD_KERNEL_PORT, (port)))
#define VM_BEHAVIOR_RSEQNTL ((vm_behavior_t) 3)
#define P_FORCEQUOTA 0x20000000
#define MACH_MSG_GUARDED_PORT_DESCRIPTOR 4
#define _SC_2_PBS 59
#define RTAX_DST 0
#define MACH_MSG_STRICT_REPLY 0x00000200
#define SECT_ICON_TIFF "__tiff"
#define F_GETPATH_NOFIRMLINK 102
#define KERN_INVALID_SECURITY 35
#define IP_PORTRANGE 19
#define __ILP32_OFF32 (-1)
#define _CADDR_T 
#define STAILQ_INSERT_TAIL(head,elm,field) do { STAILQ_NEXT((elm), field) = NULL; *(head)->stqh_last = (elm); (head)->stqh_last = &STAILQ_NEXT((elm), field); } while (0)
#define __MACH__ 1
#define __amd64__ 1
#define SCM_CREDS 0x03
#define VM_REGION_SUBMAP_INFO_V1_COUNT_64 ((mach_msg_type_number_t) (VM_REGION_SUBMAP_INFO_V1_SIZE / sizeof (natural_t)))
#define F_GETNOSIGPIPE 74
#define __DBL_MAX_10_EXP__ 308
#define task_set_kernel_port(task,port) (task_set_special_port((task), TASK_KERNEL_PORT, (port)))
#define S_IREAD S_IRUSR
#define MNT_DONTBROWSE 0x00100000
#define _UINT16_T 
#define IPPROTO_FRAGMENT 44
#define PROC_SETPC_TERMINATE 3
#define VM_SYNC_CONTIGUOUS ((vm_sync_t) 0x20)
#define __LPBIG_OFFBIG (1)
#define _I386__PARAM_H_ 
#define AF_NETBIOS 33
#define __API_AVAILABLE(...) 
#define UINT_MAX (INT_MAX * 2U + 1U)
#define CPU_SUBTYPE_MC98000_ALL ((cpu_subtype_t) 0)
#define S_ISSOCK(m) (((m) & S_IFMT) == S_IFSOCK)
#define _U_INT 
#define MEMORY_OBJECT_RETURN_DIRTY 1
#define RTPRF_OURS RTF_PROTO3
#define TCP_MAXHLEN (0xf<<2)
#define IPV6_MAX_MEMBERSHIPS 4095
#define IN_CLASSC_NET 0xffffff00
#define CPUFAMILY_INTEL_COMETLAKE 0x1cf8a03e
#define IPV6_ADDR_MC_FLAGS_TRANSIENT 0x10
#define ___POSIX_C_DEPRECATED_STARTING_199506L 
#define VM_MEMORY_QUICKLOOK_THUMBNAILS 97
#define ATTR_FILE_RSRCLENGTH 0x00001000
#define O_SHLOCK 0x00000010
#define KERN_RAGE_THREAD 2
#define VM_FLAGS_SUPERPAGE_SIZE_ANY (SUPERPAGE_SIZE_ANY << VM_FLAGS_SUPERPAGE_SHIFT)
#define KERN_MAXFILESPERPROC 29
#define __FLT_MAX_EXP__ 128
#define AUDIT_CTLMODE_EXTERNAL ((unsigned char)2)
#define CTLTYPE_QUAD 4
#define CPUFAMILY_INTEL_KABYLAKE 0x0f817246
#define IPPROTO_IPCV 71
#define IN_LOOPBACKNET 127
#define _SC_XOPEN_REALTIME 111
#define KERN_PROCDELAYTERM 53
#define _PTHREAD_MUTEXATTR_T 
#define TASK_SCHED_INFO 14
#define KERN_KDCPUMAP 24
#define _MACH_KERN_RETURN_H_ 
#define MACH_MSGH_BITS_HOLDS_IMPORTANCE_ASSERTION(bits) (((bits) & MACH_MSGH_BITS_IMPHOLDASRT) != MACH_MSGH_BITS_ZERO)
#define __swift_unavailable(_msg) 
#define POLICY_FIFO_LIMIT_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_fifo_limit)/sizeof(integer_t)))
#define KERN_LOGSIGEXIT 36
#define _SC_THREAD_PRIORITY_SCHEDULING 89
#define TCPOLEN_SACK 8
#define FSOPT_RETURN_REALDEV 0x00000200
#define _POSIX2_EXPR_NEST_MAX 32
#define _POSIX_REALTIME_SIGNALS (-1)
#define IOPOL_ATIME_UPDATES_DEFAULT 0
#define _POSIX_V6_LP64_OFF64 __LP64_OFF64
#define MNT_UPDATE 0x00010000
#define EBADRPC 72
#define APPLE_IF_FAM_BOND 14
#define N_ABS 0x2
#define __SIZEOF_FLOAT128__ 16
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffLL
#define _STRUCT_X86_EXCEPTION_STATE32 struct __darwin_i386_exception_state
#define VM_LEDGER_TAG_DEFAULT 0x00000001
#define VQ_UNMOUNT 0x0010
#define UINT_FAST64_MAX UINT64_MAX
#define _POSIX_SEM_VALUE_MAX 32767
#define I386_PGSHIFT 12
#define MACH_RCV_MSG 0x00000002
#define MH_NLIST_OUTOFSYNC_WITH_DYLDINFO 0x04000000
#define host_set_gssd_port(host,port) (host_set_special_port((host), HOST_GSSD_PORT, (port)))
#define KERN_MAXPARTITIONS 23
#define MACH_PORT_RIGHT_SEND_ONCE ((mach_port_right_t) 2)
#define MACH_RCV_INVALID_NOTIFY 0x10004007
#define __SSE__ 1
#define IPPROTO_GRE 47
#define MACH_SEND_SYNC_USE_THRPRI MACH_SEND_PROPAGATE_QOS
#define IF_WAKE_ON_MAGIC_PACKET 0x01
#define KERN_CLASSIC KERN_TRANSLATE
#define __LDBL_MIN_EXP__ (-16381)
#define KERN_RPC_SERVER_TERMINATED 43
#define NOTE_TRIGGER 0x01000000
#define VM_PROT_IS_MASK ((vm_prot_t) 0x40)
#define _MACH_ERROR_ 1
#define _CS_XBS5_ILP32_OFFBIG_LINTFLAGS 27
#define S_MOD_TERM_FUNC_POINTERS 0xa
#define _VM_PAGE_SIZE_H_ 
#define REBASE_OPCODE_MASK 0xF0
#define IPPROTO_VMTP 81
#define KERN_PROC_LCID 7
#define _MACH_I386__STRUCTS_H_ 
#define CPU_TYPE_ARM64 (CPU_TYPE_ARM | CPU_ARCH_ABI64)
#define IPPROTO_TPXX 39
#define IPPROTO_MAXID (IPPROTO_AH + 1)
#define MACH_MSGH_BITS_SET(remote,local,voucher,other) (MACH_MSGH_BITS_SET_PORTS((remote), (local), (voucher)) | ((other) &~ MACH_MSGH_BITS_PORTS_MASK))
#define __AUDIT_API_DEPRECATED __API_DEPRECATED("audit is deprecated", macos(10.4, 11.0))
#define LOAD_SCALE 1000
#define A_GETKAUDIT 29
#define FD_SETSIZE __DARWIN_FD_SETSIZE
#define TASK_EXC_GUARD_MP_ONCE 0x20
#define IOPOL_TYPE_DISK 0
#define __Reply__vm_map_subsystem__defined 
#define _STRUCT_X86_EXCEPTION_STATE64 struct __darwin_x86_exception_state64
#define CPU_SUBTYPE_ARM_V4T ((cpu_subtype_t) 5)
#define IP_OPTIONS 1
#define MACH_MSGH_BITS_PORTS_MASK (MACH_MSGH_BITS_REMOTE_MASK | MACH_MSGH_BITS_LOCAL_MASK | MACH_MSGH_BITS_VOUCHER_MASK)
#define NL_SETMAX 255
#define USER_POSIX2_LOCALEDEF 16
#define __WINT_WIDTH__ 32
#define OSSwapHostToLittleInt64(x) ((uint64_t)(x))
#define MAP_MEM_NOOP 0
#define IN6_IS_ADDR_MC_GLOBAL(a) (IN6_IS_ADDR_MULTICAST(a) && (__IPV6_ADDR_MC_SCOPE(a) == __IPV6_ADDR_SCOPE_GLOBAL))
#define __INT_LEAST8_MAX__ 0x7f
#define LOCK_EX 0x02
#define TASK_DEBUG_CONTROL_PORT 10
#define SIGUSR2 31
#define host_set_chud_port(host,port) host_set_launchctl_port(host, port)
#define __FLT32X_MAX_10_EXP__ 308
#define RTF_REJECT 0x8
#define __DARWIN_SUF_EXTSN "$DARWIN_EXTSN"
#define IFCAP_TXCSUM 0x00002
#define USER_BC_STRING_MAX 5
#define VM_PAGE_QUERY_PAGE_PRESENT 0x1
#define NOTE_USECONDS 0x00000002
#define EFL_CLR 0xfff88028
#define SRCHFS_SKIPPACKAGES 0x00000040
#define SO_WANTOOBFLAG 0x8000
#define _STRUCT_UCONTEXT struct __darwin_ucontext
#define CPU_SUBTYPE_ARM_V6M ((cpu_subtype_t) 14)
#define MACH_SEND_TIMED_OUT 0x10000004
#define O_RDONLY 0x0000
#define MATTR_VAL_CACHE_FLUSH 6
#define PPAUSE 40
#define TCP_FASTOPEN 0x105
#define __FLT64X_IS_IEC_60559__ 2
#define VOL_CAPABILITIES_RESERVED1 2
#define VM_MEMORY_SKYWALK 87
#define TAILQ_HEAD(name,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct name { struct type *tqh_first; struct type **tqh_last; TRACEBUF } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define IPV6CTL_SOURCECHECK 10
#define THREAD_THROUGHPUT_QOS_POLICY 8
#define USER_BC_DIM_MAX 3
#define PROC_PIDLISTFILEPORTS 14
#define CPU_SUBTYPE_ARM_V7F ((cpu_subtype_t) 10)
#define EXC_I386_EMERR 6
#define __signed signed
#define CPU_SUBTYPE_ARM_V7K ((cpu_subtype_t) 12)
#define CPU_SUBTYPE_ARM_V7M ((cpu_subtype_t) 15)
#define APPLE_IF_FAM_LOOPBACK 1
#define MACH_MSG_TYPE_MOVE_SEND 17
#define CPU_SUBTYPE_ARM_V7S ((cpu_subtype_t) 11)
#define RTA_NETMASK 0x4
#define KERN_LOCK_OWNED 40
#define _CS_XBS5_ILP32_OFF32_LIBS 22
#define EMSGSIZE 40
#define _CS_POSIX_V6_LP64_OFF64_LIBS 10
#define _SC_ATEXIT_MAX 107
#define KIPC_MAXSOCKBUF 1
#define __INT_LEAST32_TYPE__ int
#define LOCK_SET_NULL ((lock_set_t) 0)
#define KIPC_MAX_PROTOHDR 5
#define VFS_CTL_VERS1 0x01
#define host_set_host_port(host,port) (KERN_INVALID_ARGUMENT)
#define EIDRM 90
#define __FLT128_MIN__ 3.36210314311209350626267781732175260e-4932F128
#define OS_UNUSED __attribute__((__unused__))
#define TASK_NULL ((task_t) 0)
#define VM_SET_FLAGS_ALIAS(flags,alias) (flags) = (((flags) & ~VM_FLAGS_ALIAS_MASK) | (((alias) & ~VM_FLAGS_ALIAS_MASK) << 24))
#define _LP64 1
#define MACH_MSG_VM_KERNEL 0x00000400
#define MACH_MSGH_BITS_LOCAL(bits) (((bits) & MACH_MSGH_BITS_LOCAL_MASK) >> 8)
#define SIGEMT 7
#define KEV_INET_SIFNETMASK 6
#define TCP_KEEPINTVL 0x101
#define VM_FLAGS_USER_REMAP (VM_FLAGS_FIXED | VM_FLAGS_ANYWHERE | VM_FLAGS_RANDOM_ADDR | VM_FLAGS_OVERWRITE| VM_FLAGS_RETURN_DATA_ADDR | VM_FLAGS_RESILIENT_CODESIGN | VM_FLAGS_RESILIENT_MEDIA)
#define APPLE_IF_FAM_FIREWIRE 13
#define __UINT8_C(c) c
#define THREAD_SCHED_FIFO_INFO 12
#define EFBIG 27
#define HW_DISKSTATS 9
#define __FLT64_MAX_EXP__ 1024
#define IPPROTO_NONE 59
#define IFRTYPE_FUNCTIONAL_WIFI_INFRA 3
#define PLATFORM_MACCATALYST 6
#define SLIST_FOREACH(var,head,field) for ((var) = SLIST_FIRST((head)); (var); (var) = SLIST_NEXT((var), field))
#define TASK_VM_INFO_REV2_COUNT ((mach_msg_type_number_t) (TASK_VM_INFO_REV3_COUNT - 42))
#define KIPC_SOMAXCONN 3
#define TIMEVAL_TO_TIMESPEC(tv,ts) { (ts)->tv_sec = (tv)->tv_sec; (ts)->tv_nsec = (tv)->tv_usec * 1000; }
#define RTA_GENMASK 0x8
#define __API_UNAVAILABLE(...) 
#define R2_WWWROOT R2_DATDIR "/radare2/" R2_VERSION "/www"
#define CPU_SUBTYPE_VAX8200 ((cpu_subtype_t) 7)
#define LC_REQ_DYLD 0x80000000
#define POLICY_NULL 0
#define __UINT64_TYPE__ long long unsigned int
#define MACH_NOTIFY_LAST (MACH_NOTIFY_FIRST + 015)
#define __has_feature(x) 0
#define USING_MIG_STRNCPY_ZEROFILL 
#define _FILESEC_UNSET_PROPERTY ((void *)0)
#define SEARCHFS_MAX_SEARCHPARMS 4096
#define USER_BC_SCALE_MAX 4
#define R2_HUD R_JOIN_4_PATHS ("share", "radare2", R2_VERSION, "hud")
#define KEV_DL_ADDMULTI 7
#define VM_MEMORY_CORPSEINFO 80
#define HOST_LAUNCHCTL_PORT (9 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define _SYS_PROC_INFO_H 
#define AF_IEEE80211 37
#define THREAD_BACKGROUND_POLICY 5
#define R2_BINDINGS "lib/radare2-bindings/" R2_VERSION
#define RTAX_MAX 8
#define CIRCLEQ_REMOVE(head,elm,field) do { CIRCLEQ_CHECK_NEXT(head, elm, field); CIRCLEQ_CHECK_PREV(head, elm, field); if ((elm)->field.cqe_next == (void *)(head)) (head)->cqh_last = (elm)->field.cqe_prev; else (elm)->field.cqe_next->field.cqe_prev = (elm)->field.cqe_prev; if ((elm)->field.cqe_prev == (void *)(head)) (head)->cqh_first = (elm)->field.cqe_next; else (elm)->field.cqe_prev->field.cqe_next = (elm)->field.cqe_next; } while (0)
#define _SC_IOV_MAX 56
#define _SC_PASS_MAX 131
#define mach_msg_kind_t mach_port_seqno_t
#define W_STOPCODE(sig) ((sig) << 8 | _WSTOPPED)
#define USER_CS_PATH 1
#define IFCAP_TSO (IFCAP_TSO4 | IFCAP_TSO6)
#define PROC_PIDFDPSEMINFO_SIZE (sizeof(struct psem_fdinfo))
#define AF_CCITT 10
#define CPUFAMILY_ARM_12 0xbd1b0ae9
#define host_set_automountd_port(host,port) (host_set_special_port((host), HOST_AUTOMOUNTD_PORT, (port)))
#define ATTR_MAX_BUFFER 8192
#define CLOCK_NULL ((clock_t) 0)
#define O_ASYNC 0x00000040
#define NET_SERVICE_TYPE_SIG 2
#define _POSIX_MAPPED_FILES 200112L
#define P_PPWAIT 0x00000010
#define SIGXCPU 24
#define __FLT128_HAS_QUIET_NAN__ 1
#define O_TRUNC 0x00000400
#define ifc_req ifc_ifcu.ifcu_req
#define VM_MEMORY_COREDATA 45
#define VM_MEMORY_COREIMAGE 68
#define GET_MZI_COLLECTABLE_FLAG(val) ((val) & 1)
#define THREAD_STANDARD_POLICY 1
#define GET_MZI_COLLECTABLE_BYTES(val) ((val) >> 1)
#define __DARWIN_ALIGN(p) ((__darwin_size_t)((__darwin_size_t)(p) + __DARWIN_ALIGNBYTES) &~ __DARWIN_ALIGNBYTES)
#define MH_SUBSECTIONS_VIA_SYMBOLS 0x2000
#define REBASE_OPCODE_DO_REBASE_ULEB_TIMES_SKIPPING_ULEB 0x80
#define F_DUPFD 0
#define EV_OOBAND EV_FLAG1
#define BIND_SUBOPCODE_THREADED_APPLY 0x01
#define STAILQ_FIRST(head) ((head)->stqh_first)
#define IPV6CTL_MAXID 51
#define NETSVC_MRKNG_UNKNOWN 0
#define _SC_MAPPED_FILES 47
#define IOPOL_SCOPE_DARWIN_BG 2
#define __TVOS_11_3 110300
#define NOTE_EXIT_CSERROR 0x00040000
#define KERN_NGROUPS 18
#define OSReadBigInt16(base,byteOffset) OSReadSwapInt16(base, byteOffset)
#define P_DELAYIDLESLEEP 0x00040000
#define QMD_TRACE_ELEM(elem) 
#define CPU_SUBTYPE_XEON_MP CPU_SUBTYPE_INTEL(12, 1)
#define _STRUCT_LAST_BRANCH_RECORD struct __last_branch_record
#define SRCHFS_SKIPLINKS 0x00000010
#define EF_IS_SYNC_ROOT 0x00000004
#define VOL_CAP_INT_SEARCHFS 0x00000001
#define WMESGLEN 7
#define AT_SYMLINK_FOLLOW 0x0040
#define TCPOPT_MAXSEG 2
#define _POSIX_SHARED_MEMORY_OBJECTS (-1)
#define x86_FLOAT_STATE64 5
#define __FLT64X_MIN__ 3.36210314311209350626267781732175260e-4932F64x
#define _SC_AIO_MAX 43
#define IP_ADD_SOURCE_MEMBERSHIP 70
#define INT8_MAX 127
#define EBADARCH 86
#define WIFSIGNALED(x) (_WSTATUS(x) != _WSTOPPED && _WSTATUS(x) != 0)
#define MH_CANONICAL 0x4000
#define ENOTCONN 57
#define KEV_INET_SIFBRDADDR 5
#define VM_MEMORY_COREPROFILE 71
#define RTF_PROTO1 0x8000
#define THREAD_EXTENDED_INFO_COUNT ((mach_msg_type_number_t) (sizeof(thread_extended_info_data_t) / sizeof (natural_t)))
#define __Request__thread_act_subsystem__defined 
#define A_SETCOND 38
#define IP_FW_FLUSH 42
#define ATTR_VOL_INFO 0x80000000
#define TASK_AUDIT_TOKEN_COUNT (sizeof(audit_token_t) / sizeof(natural_t))
#define CTL_VM_NAMES { { 0, 0 }, { "vmmeter", CTLTYPE_STRUCT }, { "loadavg", CTLTYPE_STRUCT }, { 0, 0 }, { "dummy", CTLTYPE_INT }, { "swapusage", CTLTYPE_STRUCT } }
#define VM_FLAGS_ALIAS_MASK 0xFF000000
#define _BSD_MACHINE_TYPES_H_ 
#define MACH_MSG_TYPE_DISPOSE_SEND 25
#define S_IFLNK 0120000
#define CPU_SUBTYPE_ARM_V5TEJ ((cpu_subtype_t) 7)
#define RUSAGE_INFO_V1 1
#define MACH_PORT_QLIMIT_SMALL (16)
#define MEMORY_OBJECT_NAME_NULL ((memory_object_name_t) 0)
#define SV_NOCLDSTOP SA_NOCLDSTOP
#define FP_SOFT 1
#define _POSIX_MESSAGE_PASSING (-1)
#define KERN_KDGETREG 9
#define LC_SUB_FRAMEWORK 0x12
#define _STRUCT_IOVEC 
#define SLIST_HEAD(name,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct name { struct type *slh_first; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define _SC_RTSIG_MAX 48
#define __FLT32_EPSILON__ 1.19209289550781250000000000000000000e-7F32
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_1(x) 
#define IPV6_PORTRANGE_DEFAULT 0
#define _I386_FP_SAVE_H_ 
#define INADDR_LOOPBACK (u_int32_t)0x7f000001
#define __MIG_STRNCPY_ZEROFILL_FORWARD_TYPE_DECLS__ 
#define host_get_ktrace_background_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_KTRACE_BACKGROUND_PORT, (port)))
#define _POSIX2_BC_BASE_MAX 99
#define UF_DATAVAULT 0x00000080
#define L_XTND SEEK_END
#define __DBL_DECIMAL_DIG__ 17
#define msgh_kind msgh_seqno
#define _POSIX_THREAD_SPORADIC_SERVER (-1)
#define time_value_add_usec(val,micros) { if (((val)->microseconds += (micros)) >= TIME_MICROS_MAX) { (val)->microseconds -= TIME_MICROS_MAX; (val)->seconds++; } }
#define _POSIX_MQ_PRIO_MAX 32
#define SV_INTERRUPT SA_RESTART
#define MEMORY_OBJECT_COPY_TEMPORARY 3
#define ATTR_CMN_PAROBJID 0x00000080
#define __DEC_EVAL_METHOD__ 2
#define IPPROTO_IGRP 88
#define _SIZE_T 
#define MACH_RCV_LARGE 0x00000004
#define MACH_PORT_RECEIVE_STATUS 2
#define __options_closed_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_closed __enum_options
#define NET_RT_FLAGS_PRIV 10
#define REBASE_TYPE_POINTER 1
#define CPU_SUBTYPE_INTEL_FAMILY_MAX 15
#define _POSIX2_SW_DEV 200112L
#define CPU_SUBTYPE_MIPS_R2300 ((cpu_subtype_t) 1)
#define NOTE_FFCTRLMASK 0xc0000000
#define SOCK_STREAM 1
#define VOL_CAP_INT_ATTRLIST 0x00000002
#define MSIZE (1 << MSIZESHIFT)
#define MH_BINDS_TO_WEAK 0x10000
#define NOTE_FFAND 0x40000000
#define OPEN_MAX 10240
#define x86_AVX_STATE64_COUNT ((mach_msg_type_number_t) (sizeof(x86_avx_state64_t)/sizeof(unsigned int)))
#define VM_FLAGS_USER_ALLOCATE (VM_FLAGS_FIXED | VM_FLAGS_ANYWHERE | VM_FLAGS_PURGABLE | VM_FLAGS_4GB_CHUNK | VM_FLAGS_RANDOM_ADDR | VM_FLAGS_NO_CACHE | VM_FLAGS_PERMANENT | VM_FLAGS_OVERWRITE | VM_FLAGS_SUPERPAGE_MASK | VM_FLAGS_ALIAS_MASK)
#define CPU_SUBTYPE_POWERPC_7400 ((cpu_subtype_t) 10)
#define N_INDR 0xa
#define PROC_PIDFILEPORTPSHMINFO_SIZE PROC_PIDFDPSHMINFO_SIZE
#define IPPROTO_ICMPV6 58
#define MPG_FLAGS_STRICT_REPLY_INVALID_REPLY_PORT (0x02ull << 56)
#define IFF_UP 0x1
#define APPLE_IF_FAM_IPSEC 18
#define lock_set_MSG_COUNT 6
#define BIND_OPCODE_SET_DYLIB_ORDINAL_IMM 0x10
#define IOPOL_TYPE_VFS_TRIGGER_RESOLVE 5
#define F_ADDSIGS 59
#define LC_DATA_IN_CODE 0x29
#define SET_MAP_MEM(caching,flags) ((flags) = ((((unsigned int)(caching)) << 24) & 0xFF000000) | ((flags) & 0xFFFFFF));
#define AF_NATM 31
#define _SC_THREAD_PROCESS_SHARED 90
#define x86_EXCEPTION_STATE32 3
#define ATTR_FILE_SETMASK 0x00000020
#define PROCESSOR_NULL ((processor_t) 0)
#define EVFILT_MACHPORT (-8)
#define AUDIT_TRAIL 0x0100
#define host_get_kextd_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_KEXTD_PORT, (port)))
#define IP_MAX_SOCK_MUTE_FILTER 128
#define err_mach_ipc err_system(0x4)
#define _STRUCT_TIMESPEC struct timespec
#define __INTMAX_WIDTH__ 64
#define MAP_MEM_ONLY 0x010000
#define _SA_FAMILY_T 
#define RTM_ADD 0x1
#define CPF_MASK (CPF_OVERWRITE|CPF_IGNORE_MODE)
#define MIG_BAD_ID -303
#define VM_FLAGS_RETURN_4K_DATA_ADDR 0x800000
#define __ORDER_BIG_ENDIAN__ 4321
#define _POSIX2_UPE 200112L
#define __DARWIN_ONLY_VERS_1050 0
#define INT32_MIN (-INT32_MAX-1)
#define IFF_DEBUG 0x4
#define INTPTR_MAX 9223372036854775807L
#define RLIMIT_MEMLOCK 6
#define VM_SYNC_REUSABLEPAGES ((vm_sync_t) 0x40)
#define EF_IS_SPARSE 0x00000010
#define PTTYBLOCK 0x200
#define THREAD_AFFINITY_POLICY 4
#define PF_IMPLINK AF_IMPLINK
#define O_EXCL 0x00000800
#define P_CONTINUED 0x00000080
#define NET_RT_FLAGS 2
#define __UINT32_C(c) c ## U
#define _MACH_THREAD_STATUS_H_ 
#define _POSIX2_VERSION 200112L
#define IP_RSVP_VIF_ON 17
#define EISCONN 56
#define clock_priv_MSG_COUNT 2
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define MPO_STRICT 0x20
#define KMOD_MAX_NAME 64
#define __TVOS_10_0 100000
#define __TVOS_10_1 100100
#define __TVOS_10_2 100200
#define x86_EXCEPTION_STATE64 6
#define EV_SET(kevp,a,b,c,d,e,f) do { struct kevent *__kevp__ = (kevp); __kevp__->ident = (a); __kevp__->filter = (b); __kevp__->flags = (c); __kevp__->fflags = (d); __kevp__->data = (e); __kevp__->udata = (f); } while(0)
#define MEMORY_OBJECT_IO_SYNC 0x20
#define PAGE_MAX_SIZE (1 << PAGE_MAX_SHIFT)
#define VM_PURGABLE_SET_STATE_FROM_KERNEL ((vm_purgable_t) 3)
#define PT_FORCEQUOTA 30
#define MACH_MSGH_BITS_OTHER(bits) ((bits) &~ MACH_MSGH_BITS_PORTS_MASK)
#define INTMAX_MIN (-INTMAX_MAX-1)
#define CPU_SUBTYPE_POWERPC_7450 ((cpu_subtype_t) 11)
#define INADDR_BROADCAST (u_int32_t)0xffffffff
#define AF_UNIX 1
#define PROCESSOR_BASIC_INFO 1
#define _SC_TRACE_INHERIT 99
#define VM_MEMORY_APPLICATION_SPECIFIC_1 240
#define SLIST_FOREACH_SAFE(var,head,field,tvar) for ((var) = SLIST_FIRST((head)); (var) && ((tvar) = SLIST_NEXT((var), field), 1); (var) = (tvar))
#define IP_RECVRETOPTS 6
#define HOST_SEATBELT_PORT (7 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define IPPROTO_SVMTP 82
#define CPUFAMILY_ARM_LIGHTNING_THUNDER 0x462504d2
#define MACH_RCV_TRAILER_LABELS 8
#define PROC_FI_GUARD_FILEPORT (1u << 3)
#define F_FINDSIGS 78
#define EUSERS 68
#define F_SETPROTECTIONCLASS 64
#define MAXINTERP 64
#define _VA_LIST_T_H 
#define __INT8_MAX__ 0x7f
#define AF_PPP 34
#define INT_FAST16_MAX INT16_MAX
#define MACH_RCV_TRAILER_CTX 4
#define TSI_T_KEEP 2
#define VOL_CAP_FMT_JOURNAL 0x00000008
#define _SC_SYMLOOP_MAX 120
#define __PIC__ 2
#define system_emask (err_system(0x3f))
#define EXC_I386_NOEXT 3
#define MACH_RCV_TRAILER_ELEMENTS(x) (((x) & 0xf) << 24)
#define MACH_VOUCHER_ATTR_AUTO_REDEEM ((mach_voucher_attr_recipe_command_t)4)
#define _SIGSET_T 
#define VM_STATISTICS_TRUNCATE_TO_32_BIT(value) ((uint32_t)(((value) > UINT32_MAX ) ? UINT32_MAX : (value)))
#define __UINT_FAST32_TYPE__ unsigned int
#define FD_ISSET(n,p) __DARWIN_FD_ISSET(n, p)
#define O_NOFOLLOW 0x00000100
#define VM_MEMORY_ROSETTA_10 239
#define STAILQ_REMOVE(head,elm,type,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH do { if (STAILQ_FIRST((head)) == (elm)) { STAILQ_REMOVE_HEAD((head), field); } else { struct type *curelm = STAILQ_FIRST((head)); while (STAILQ_NEXT(curelm, field) != (elm)) curelm = STAILQ_NEXT(curelm, field); STAILQ_REMOVE_AFTER(head, curelm, field); } TRASHIT((elm)->field.stqe_next); } while (0) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define FP_RND_NEAR 0
#define TCPCI_OPT_TIMESTAMPS 0x00000001
#define _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS 35
#define BIND_OPCODE_SET_SEGMENT_AND_OFFSET_ULEB 0x70
#define POLL_ERR 4
#define __RCSID(s) __IDSTRING(rcsid,s)
#define P_NOCLDWAIT 0x40000000
#define KERN_INVALID_ADDRESS 1
#define task_set_bootstrap_port(task,port) (task_set_special_port((task), TASK_BOOTSTRAP_PORT, (port)))
#define HW_BUS_FREQ 14
#define TASK_POWER_INFO_V2_COUNT ((mach_msg_type_number_t) (sizeof (task_power_info_v2_data_t) / sizeof (natural_t)))
#define I386_EXCEPTION_STATE_COUNT i386_EXCEPTION_STATE_COUNT
#define NETSVC_MRKNG_LVL_L3L2_BK 3
#define AQ_BUFSZ MAXAUDITDATA
#define __FLT_MAX__ 3.40282346638528859811704183484516925e+38F
#define POLICY_FIFO_BASE_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_fifo_base)/sizeof(integer_t)))
#define VM_LEDGER_TAG_NETWORK 0x00000002
#define MAX(a,b) (((a)>(b))?(a):(b))
#define CPU_SUBTYPE_X86_ARCH1 ((cpu_subtype_t)4)
#define AUDIT_PATH 0x0200
#define __enum_options 
#define MACH_MSG_SIZE_NULL (mach_msg_size_t *) 0
#define N_SECT 0xe
#define NOTE_MACH_CONTINUOUS_TIME 0x00000080
#define INT_FAST64_MAX INT64_MAX
#define CPU_SUBTYPE_MIPS_ALL ((cpu_subtype_t) 0)
#define _MACH_I386_VM_TYPES_H_ 
#define __OS_ENUM_ATTR 
#define FP_PREC_64B 3
#define SA_NOCLDWAIT 0x0020
#define __va_list__ 
#define invalid_policy(policy) ((policy) != POLICY_TIMESHARE && (policy) != POLICY_RR && (policy) != POLICY_FIFO)
#define host_set_sysdiagnose_port(host,port) (host_set_special_port((host), HOST_SYSDIAGNOSE_PORT, (port)))
#define SO_SNDLOWAT 0x1003
#define MACH_MSG_TRAILER_FORMAT_0 0
#define COALITION_NULL ((coalition_t) 0)
#define OS_EXPECT(x,v) __builtin_expect((x), (v))
#define SYSCTL_DEF_ENABLED 
#define KERN_INVALID_ARGUMENT 4
#define _POSIX2_CHAR_TERM 200112L
#define __SSE2__ 1
#define OID_AUTO_START 100
#define SO_ERROR 0x1007
#define EXC_RESOURCE 11
#define _PTHREAD_T 
#define _SYS_WAIT_H_ 
#define PROC_PPID_ONLY 6
#define _SC_2_FORT_DEV 21
#define __IPHONE_4_1 40100
#define PROC_KQUEUE_SLEEP 0x02
#define AF_PUP 4
#define _POSIX_TRACE_EVENT_NAME_MAX 30
#define __INT32_TYPE__ int
#define VM_MAP_ENTRY_MAX (256)
#define _SC_TRACE_EVENT_NAME_MAX 127
#define LIST_CHECK_NEXT(elm,field) 
#define SECT_OBJC_STRINGS "__selector_strs"
#define MACH_MSG_SIZE_MAX ((mach_msg_size_t) ~0)
#define __SIZEOF_DOUBLE__ 8
#define APPLE_IF_FAM_STF 12
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_2(x) 
#define LIST_HEAD_INITIALIZER(head) { NULL }
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_4(x) 
#define OS_NONNULL10 __attribute__((__nonnull__(10)))
#define OS_NONNULL11 __attribute__((__nonnull__(11)))
#define OS_NONNULL12 __attribute__((__nonnull__(12)))
#define OS_NONNULL13 __attribute__((__nonnull__(13)))
#define OS_NONNULL14 __attribute__((__nonnull__(14)))
#define OS_NONNULL15 __attribute__((__nonnull__(15)))
#define RUSAGE_INFO_CURRENT RUSAGE_INFO_V5
#define VM_PAGE_QUERY_PAGE_EXTERNAL 0x80
#define EILSEQ 92
#define VM_PURGABLE_NO_AGING (0x1 << VM_PURGABLE_NO_AGING_SHIFT)
#define __INT_LEAST32_WIDTH__ 32
#define PF_APPLETALK AF_APPLETALK
#define CMSG_FIRSTHDR(mhdr) ((mhdr)->msg_controllen >= sizeof(struct cmsghdr) ? (struct cmsghdr *)(mhdr)->msg_control : (struct cmsghdr *)0L)
#define MNT_RELOAD 0x00040000
#define subsystem_to_name_map_host_security { "host_security_create_task_token", 600 }, { "host_security_set_task_token", 601 }
#define CIRCLEQ_FOREACH(var,head,field) for((var) = (head)->cqh_first; (var) != (void *)(head); (var) = (var)->field.cqe_next)
#define __API_DEPRECATED_BEGIN(...) 
#define __DRIVERKIT_20_0 200000
#define THREAD_LATENCY_QOS_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (thread_latency_qos_policy_data_t) / sizeof (integer_t)))
#define LC_VERSION_MIN_WATCHOS 0x30
#define IPPROTO_NHRP 54
#define VM_PROT_WRITE ((vm_prot_t) 0x02)
#define MCAST_BLOCK_SOURCE 84
#define _V6_ILP32_OFFBIG __ILP32_OFFBIG
#define KERN_MEMORY_PRESENT 23
#define IN_CLASSA_NET 0xff000000
#define CPU_SUBTYPE_ARM_XSCALE ((cpu_subtype_t) 8)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_15_1(x) x
#define _QUAD_HIGHWORD 1
#define NO_SECT 0
#define UINT8_C(v) (v)
#define __ReplyUnion__lock_set_subsystem__defined 
#define TH_STATE_HALTED 5
#define OS_ASSUME_NONNULL_BEGIN 
#define MACH_SEND_INVALID_HEADER 0x10000010
#define THREAD_EXTENDED_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (thread_extended_policy_data_t) / sizeof (integer_t)))
#define _POSIX2_C_BIND 200112L
#define va_end(v) __builtin_va_end(v)
#define PF_UTUN AF_UTUN
#define EV_UDATA_SPECIFIC 0x0100
#define HW_BYTEORDER 4
#define ATTR_CMN_ERROR 0x20000000
#define STATUS_WORD(rpl,ipl) (((ipl) << 8) | (rpl))
#define EXC_TYPES_COUNT 14
#define __UINTMAX_MAX__ 0xffffffffffffffffUL
#define LC_THREAD 0x4
#define MATTR_CACHE 1
#define _SC_TRACE_SYS_MAX 129
#define VM_PAGE_QUERY_PAGE_REF 0x4
#define MAP_MEM_WTHRU 3
#define USER_ADDR_NULL ((user_addr_t) 0)
#define PROC_SELFSET_PCONTROL 1
#define O_POPUP 0x80000000
#define IPPROTO_SWIPE 53
#define SIZE_T_MAX ULONG_MAX
#define PF_INET AF_INET
#define MACH_VOUCHER_ATTR_VALUE_MAX_NESTED ((mach_voucher_attr_value_handle_array_size_t)4)
#define ENOPOLICY 103
#define MACH_SEND_INVALID_NOTIFY 0x1000000b
#define ECONNREFUSED 61
#define INT_LEAST8_MIN INT8_MIN
#define VM_MEMORY_LIBNETWORK 89
#define INT_FAST64_MIN INT64_MIN
#define _POSIX2_C_DEV 200112L
#define CPU_SUBTYPE_ARM64_32_ALL ((cpu_subtype_t) 0)
#define EAGAIN 35
#define VM_PURGABLE_STATE_MAX 3
#define KERN_MEMORY_RESTART_COPY 25
#define TIMESPEC_TO_TIMEVAL(tv,ts) { (tv)->tv_sec = (ts)->tv_sec; (tv)->tv_usec = (ts)->tv_nsec / 1000; }
#define VM_MAX_USER_PAGE_ADDRESS ((user_addr_t)0x00007FFFFFFFF000ULL)
#define __const const
#define UINT16_MAX 65535
#define __LDBL_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951L
#define LIST_NEXT(elm,field) ((elm)->field.le_next)
#define _MACH_DEBUG_LOCKGROUP_INFO_H_ 
#define VM_MEMORY_MALLOC_MEDIUM 12
#define PROC_FLAG_DARWINBG 0x8000
#define EALREADY 37
#define _FILESEC_REMOVE_ACL ((void *)1)
#define _POSIX_TRACE_LOG (-1)
#define CTLFLAG_WR 0x40000000
#define __INT16_C(c) c
#define ATTR_VOL_ALLOCATIONCLUMP 0x00000040
#define RTF_MULTICAST 0x800000
#define HOST_CLOSURED_PORT (21 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define _CTERMID_H_ 
#define IPPROTO_SATEXPAK 64
#define RTV_RTT 0x40
#define VM_MEMORY_WEBCORE_PURGEABLE_BUFFERS 69
#define MACH_MSG_TYPE_PORT_RECEIVE MACH_MSG_TYPE_MOVE_RECEIVE
#define _ACCESS_EXTENDED_MASK (_READ_OK | _WRITE_OK | _EXECUTE_OK | _DELETE_OK | _APPEND_OK | _RMFILE_OK | _REXT_OK | _WEXT_OK | _RATTR_OK | _WATTR_OK | _RPERM_OK | _WPERM_OK | _CHOWN_OK)
#define __OS_OPTIONS_ATTR 
#define _SC_THREADS 96
#define MPG_FLAGS_STRICT_REPLY_INVALID_REPLY_DISP (0x01ull << 56)
#define _SYS_SELECT_H_ 
#define _STRUCT_OPMASK_REG struct __darwin_opmask_reg
#define FD_CLR(n,p) __DARWIN_FD_CLR(n, p)
#define SIG_IGN (void (*)(int))1
#define timersub(tvp,uvp,vvp) do { (vvp)->tv_sec = (tvp)->tv_sec - (uvp)->tv_sec; (vvp)->tv_usec = (tvp)->tv_usec - (uvp)->tv_usec; if ((vvp)->tv_usec < 0) { (vvp)->tv_sec--; (vvp)->tv_usec += 1000000; } } while (0)
#define __STDC__ 1
#define IN_LOCAL_GROUP(i) (((u_int32_t)(i) & 0xffffff00) == 0xe0000000)
#define DST_CAN 6
#define EF_IS_PURGEABLE 0x00000008
#define CPU_SUBTYPE_VAX780 ((cpu_subtype_t) 1)
#define IPV6CTL_DEFMCASTHLIM 18
#define INADDR_CARP_GROUP (u_int32_t)0xe0000012
#define CPUFAMILY_ARM_TYPHOON 0x2c91a47e
#define LIST_REMOVE(elm,field) do { LIST_CHECK_NEXT(elm, field); LIST_CHECK_PREV(elm, field); if (LIST_NEXT((elm), field) != NULL) LIST_NEXT((elm), field)->field.le_prev = (elm)->field.le_prev; *(elm)->field.le_prev = LIST_NEXT((elm), field); TRASHIT((elm)->field.le_next); TRASHIT((elm)->field.le_prev); } while (0)
#define VOL_CAP_FMT_NO_ROOT_TIMES 0x00000020
#define ATTR_VOL_SPACEFREE 0x00000008
#define API_AVAILABLE_END 
#define __I386_MCONTEXT_H_ 
#define HW_EPOCH 10
#define VM_VOLATILE_GROUP_SHIFT 8
#define KERN_NO_ACCESS 8
#define EPROGMISMATCH 75
#define A_GETFSIZE 27
#define PROC_FLAG_SLEADER 0x20
#define TCPOPT_CCNEW 12
#define SF_DATALESS 0x40000000
#define _POSIX2_PBS_ACCOUNTING (-1)
#define CLOCK_ALARM_MINRES 4
#define TASK_EXC_GUARD_VM_FATAL 0x08
#define F_CHECK_LV 98
#define PROC_FLAG_LP64 0x10
#define CPUSUBFAMILY_ARM_HC_HD 5
#define AF_SIP 24
#define _SC_2_PBS_CHECKPOINT 61
#define TCP_MINMSS 216
#define VM_MEMORY_ROSETTA 230
#define VM_PURGABLE_GET_STATE ((vm_purgable_t) 1)
#define NOTE_BACKGROUND 0x00000040
#define ENOBUFS 55
#define PROC_PIDLISTFD_SIZE (sizeof(struct proc_fdinfo))
#define S_MOD_INIT_FUNC_POINTERS 0x9
#define MNT_QUARANTINE 0x00000400
#define MACH_PORT_QLIMIT_ZERO (0)
#define TASK_EXC_GUARD_VM_CORPSE 0x04
#define BC_STRING_MAX 1000
#define TAILQ_ENTRY(type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct { struct type *tqe_next; struct type **tqe_prev; TRACEBUF } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define x86_AVX512_STATE32 19
#define IPV6_2292NEXTHOP 21
#define __UINTPTR_TYPE__ long unsigned int
#define RTAX_NETMASK 2
#define TH_URG 0x20
#define NOTE_VM_PRESSURE_SUDDEN_TERMINATE 0x20000000
#define CLD_KILLED 2
#define _SSIZE_T 
#define MACH_DEBUG_PAGE_INFO_H 
#define KEV_DL_SIFMETRICS 2
#define __FLT128_DIG__ 33
#define VFS_CTL_TIMEO 0x00010005
#define IPCTL_RTMAXCACHE 7
#define _MACH_NDR_H_ 
#define SHUT_RD 0
#define os_compiler_barrier() __asm__ __volatile__("" ::: "memory")
#define OSReadBigInt64(base,byteOffset) OSReadSwapInt64(base, byteOffset)
#define __unreachable_ok_push _Pragma("GCC diagnostic push") _Pragma("GCC diagnostic ignored \"-Wunreachable-code\"")
#define __LDBL_MIN_10_EXP__ (-4931)
#define S_ATTR_LIVE_SUPPORT 0x08000000
#define MACH_PORT_LIMITS_INFO 1
#define IFF_LINK0 0x1000
#define IFF_LINK2 0x4000
#define __NDR_convert__char_rep__ 0
#define _MACH_SYNC_POLICY_H_ 
#define VM_PURGABLE_STATE_MIN 0
#define PROC_PIDFDKQUEUEINFO 7
#define IPV6CTL_MCAST_PMTU 44
#define EXC_MACF_MAX 0x2FFFF
#define _SC_SPAWN 79
#define THREAD_AFFINITY_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (thread_affinity_policy_data_t) / sizeof (integer_t)))
#define HOST_CPU_LOAD_INFO 3
#define A_GETCOND 37
#define __DARWIN_NON_CANCELABLE 0
#define APPLE_IF_FAM_UTUN 17
#define RTAX_GENMASK 3
#define IOPOL_THROTTLE 3
#define R2_SDB_MAGIC R_JOIN_2_PATHS (R2_SDB, "magic")
#define EXC_MASK_CORPSE_NOTIFY (1 << EXC_CORPSE_NOTIFY)
#define RTM_NEWMADDR 0xf
#define x86_AVX512_STATE64 (x86_AVX512_STATE32 + 1)
#define AUDIT_PUBLIC 0x0800
#define PROC_DIRTYCONTROL_SET 2
#define A_SETEXPAFTER 44
#define CPU_TYPE_POWERPC ((cpu_type_t) 18)
#define MACH_PORT_QLIMIT_MAX MACH_PORT_QLIMIT_LARGE
#define _POSIX_OPEN_MAX 20
#define SCM_TIMESTAMP_MONOTONIC 0x04
#define CPU_SUBTYPE_MC98601 ((cpu_subtype_t) 1)
#define _POSIX2_PBS_LOCATE (-1)
#define THREAD_BASIC_INFO_COUNT ((mach_msg_type_number_t) (sizeof(thread_basic_info_data_t) / sizeof(natural_t)))
#define EXC_ARITHMETIC 3
#define _SC_TRACE_LOG 100
#define R2_BIRTH "2022-04-30__12:15:59"
#define R2_CONFIGURE_H 
#define __GCC_ATOMIC_LLONG_LOCK_FREE 2
#define KERN_KDREMOVE 7
#define __MAC_10_10 101000
#define IFCAP_SKYWALK 0x00400
#define CPU_SUBTYPE_VAX_ALL ((cpu_subtype_t) 0)
#define _MACH_THREAD_INFO_H_ 
#define host_get_node_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_NODE_PORT, (port)))
#define SA_USERSPACE_MASK (SA_ONSTACK | SA_RESTART | SA_RESETHAND | SA_NOCLDSTOP | SA_NODEFER | SA_NOCLDWAIT | SA_SIGINFO)
#define USE_LIB_XXHASH 0
#define BIND_OPCODE_ADD_ADDR_ULEB 0x80
#define _STDARG_H 
#define VM_PAGE_QUERY_PAGE_CS_NX 0x400
#define SLIST_REMOVE_HEAD(head,field) do { SLIST_FIRST((head)) = SLIST_NEXT(SLIST_FIRST((head)), field); } while (0)
#define MAXFRAG 8
#define MNT_DEFWRITE 0x02000000
#define N_PEXT 0x10
#define EFL_IOPL 0x00003000
#define KERN_MEMORY_FAILURE 9
#define MNT_FORCE 0x00080000
#define CPU_SUBTYPE_UVAXII ((cpu_subtype_t) 6)
#define __MAC_10_15 101500
#define _MACH_MACHINE_PROCESSOR_INFO_H_ 
#define PATH_MAX 1024
#define AF_ISO 7
#define _OS_OSBYTEORDER_H 
#define FD_ZERO(p) __DARWIN_FD_ZERO(p)
#define EXCEPTION_STATE 2
#define EXC_I386_INVOPFLT 6
#define VM_FLAGS_SUPERPAGE_SHIFT 16
#define EXC_I386_EXTOVRFLT 9
#define MACH_MSG_TYPE_MAKE_SEND 20
#define FASYNC O_ASYNC
#define _SC_TTY_NAME_MAX 101
#define VOL_CAP_FMT_SHARED_SPACE 0x00800000
#define SHUT_WR 1
#define CTL_KERN_NAMES { { 0, 0 }, { "ostype", CTLTYPE_STRING }, { "osrelease", CTLTYPE_STRING }, { "osrevision", CTLTYPE_INT }, { "version", CTLTYPE_STRING }, { "maxvnodes", CTLTYPE_INT }, { "maxproc", CTLTYPE_INT }, { "maxfiles", CTLTYPE_INT }, { "argmax", CTLTYPE_INT }, { "securelevel", CTLTYPE_INT }, { "hostname", CTLTYPE_STRING }, { "hostid", CTLTYPE_INT }, { "clockrate", CTLTYPE_STRUCT }, { "vnode", CTLTYPE_STRUCT }, { "proc", CTLTYPE_STRUCT }, { "file", CTLTYPE_STRUCT }, { "profiling", CTLTYPE_NODE }, { "posix1version", CTLTYPE_INT }, { "ngroups", CTLTYPE_INT }, { "job_control", CTLTYPE_INT }, { "saved_ids", CTLTYPE_INT }, { "boottime", CTLTYPE_STRUCT }, { "nisdomainname", CTLTYPE_STRING }, { "maxpartitions", CTLTYPE_INT }, { "kdebug", CTLTYPE_INT }, { "update", CTLTYPE_INT }, { "osreldate", CTLTYPE_INT }, { "ntp_pll", CTLTYPE_NODE }, { "bootfile", CTLTYPE_STRING }, { "maxfilesperproc", CTLTYPE_INT }, { "maxprocperuid", CTLTYPE_INT }, { "dumpdev", CTLTYPE_STRUCT }, { "ipc", CTLTYPE_NODE }, { "dummy", CTLTYPE_INT }, { "dummy", CTLTYPE_INT }, { "usrstack", CTLTYPE_INT }, { "logsigexit", CTLTYPE_INT }, { "symfile",CTLTYPE_STRING }, { "procargs",CTLTYPE_STRUCT }, { "dummy", CTLTYPE_INT }, { "netboot", CTLTYPE_INT }, { "dummy", CTLTYPE_INT }, { "sysv", CTLTYPE_NODE }, { "dummy", CTLTYPE_INT }, { "dummy", CTLTYPE_INT }, { "exec", CTLTYPE_NODE }, { "aiomax", CTLTYPE_INT }, { "aioprocmax", CTLTYPE_INT }, { "aiothreads", CTLTYPE_INT }, { "procargs2",CTLTYPE_STRUCT }, { "corefile",CTLTYPE_STRING }, { "coredump", CTLTYPE_INT }, { "sugid_coredump", CTLTYPE_INT }, { "delayterm", CTLTYPE_INT }, { "shreg_private", CTLTYPE_INT }, { "proc_low_pri_io", CTLTYPE_INT }, { "low_pri_window", CTLTYPE_INT }, { "low_pri_delay", CTLTYPE_INT }, { "posix", CTLTYPE_NODE }, { "usrstack64", CTLTYPE_QUAD }, { "nx", CTLTYPE_INT }, { "tfp", CTLTYPE_NODE }, { "procname", CTLTYPE_STRING }, { "threadsigaltstack", CTLTYPE_INT }, { "speculative_reads_disabled", CTLTYPE_INT }, { "osversion", CTLTYPE_STRING }, { "safeboot", CTLTYPE_INT }, { "dummy", CTLTYPE_INT }, { "rage_vnode", CTLTYPE_INT }, { "tty", CTLTYPE_NODE }, { "check_openevt", CTLTYPE_INT }, { "thread_name", CTLTYPE_STRING } }
#define VM_MAP_NULL ((vm_map_t) 0)
#define MIG_NO_REPLY -305
#define IFNET_SLOWHZ 1
#define LEDGER_LIMIT_INFINITY ((ledger_amount_t)((1ULL << 63) - 1))
#define VOL_CAP_INT_ALLOCATE 0x00000040
#define VM_PAGE_QUERY_PAGE_REUSABLE 0x800
#define _POSIX_THREAD_ATTR_STACKADDR 200112L
#define MAX_ZTRACE_DEPTH 15
#define MACH_PORT_TYPE_NONE ((mach_port_type_t) 0L)
#define __INT_LEAST64_WIDTH__ 64
#define x86_FLOAT_STATE32 2
#define VOL_CAPABILITIES_FORMAT 0
#define IOPOL_MATERIALIZE_DATALESS_FILES_ON 2
#define _USECONDS_T 
#define INT_LEAST16_MAX INT16_MAX
#define LC_VERSION_MIN_MACOSX 0x24
#define __SSE3__ 1
#define __UINT_FAST8_TYPE__ unsigned char
#define EOPNOTSUPP 102
#define _POSIX_SAVED_IDS 200112L
#define CPU_SUBTYPE_ANY ((cpu_subtype_t) -1)
#define SO_RCVTIMEO 0x1006
#define __P(protos) protos
#define VM_MEMORY_COREGRAPHICS_FRAMEBUFFERS 56
#define MH_DYLIB_STUB 0x9
#define __IPHONE_8_0 80000
#define _RMFILE_OK (1<<14)
#define IOPOL_TYPE_VFS_ATIME_UPDATES 2
#define _POSIX_BARRIERS (-1)
#define NOCRED ((kauth_cred_t )0)
#define IPV6CTL_SOURCECHECK_LOGINT 11
#define N_ALT_ENTRY 0x0200
#define EXC_I386_BPT 2
#define THREAD_FLAVOR_READ 1
#define P_DIRTY_MARKED 0x00000080
#define __DARWIN_SUF_UNIX03 
#define __IPHONE_8_2 80200
#define __IPHONE_9_0 90000
#define __IPHONE_9_1 90100
#define __IPHONE_9_2 90200
#define __IPHONE_9_3 90300
#define IF_DATA_TIMEVAL timeval32
#define __ATOMIC_ACQ_REL 4
#define ifr_reqcap ifr_ifru.ifru_cap[0]
#define __ATOMIC_RELEASE 3
#define KERN_KDSETUP 6
#define CPUFAMILY_ARM_SWIFT 0x1e2d6381
#define PROC_FLAG_TRACED 2
#define __IPHONE_8_4 80400
#define MACH_PORT_STATUS_FLAG_NO_GRANT 0x80
#define S_ATTR_LOC_RELOC 0x00000100
#define _STRUCT_X86_AVX_STATE32 struct __darwin_i386_avx_state
#define SM_SHARED_ALIASED 7
#define __DARWIN_CLK_TCK 100
#define NMBCLUSTERS ((1024 * 1024) / MCLBYTES)
#define SAE_ASSOCID_ALL ((sae_associd_t)(-1ULL))
#define EXC_MACF_MIN 0x20000
#define IN6ADDR_LINKLOCAL_ALLV2ROUTERS_INIT {{{ 0xff, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16 }}}
#define LC_SUB_CLIENT 0x14
#define PROC_SETPC_NONE 0
#define RTV_RTTVAR 0x80
#define IP_UNBLOCK_SOURCE 73
#define IPV6_RTHDR_TYPE_0 0
#define __BEGIN_DECLS 
#define _SC_2_CHAR_TERM 20
#define _SYS_VM_H 
#define HW_MODEL 2
#define SA_USERTRAMP 0x0100
#define ___POSIX_C_DEPRECATED_STARTING_199009L 
#define VM_LOADAVG 2
#define S_ISCHR(m) (((m) & S_IFMT) == S_IFCHR)
#define MH_SIM_SUPPORT 0x08000000
#define EVFILT_FS (-9)
#define RTM_REDIRECT 0x6
#define _SC_XOPEN_UNIX 115
#define BUS_ADRALN 1
#define __FLT32X_MAX_EXP__ 1024
#define PLATFORM_IOS 2
#define CTLTYPE_NODE 1
#define VM_PAGE_QUERY_PAGE_SPECULATIVE 0x40
#define MIG_TYPE_ERROR -300
#define _QUAD_LOWWORD 0
#define MAC_OS_X_VERSION_10_13_1 101301
#define MAC_OS_X_VERSION_10_13_2 101302
#define MAC_OS_X_VERSION_10_13_4 101304
#define TASK_THREAD_TIMES_INFO 3
#define SAE_ASSOCID_ANY 0
#define __unused __attribute__((__unused__))
#define PF_VLAN ((uint32_t)0x766c616e)
#define _STRUCT_X86_AVX_STATE64 struct __darwin_x86_avx_state64
#define __ATOMIC_ACQUIRE 2
#define _POSIX2_BC_SCALE_MAX 99
#define __WCHAR_MAX__ 0x7fffffff
#define OSReadLittleInt64(base,byteOffset) _OSReadInt64(base, byteOffset)
#define _SECURE__STRINGS_H_ 
#define HOST_VM_INFO64_LATEST_COUNT HOST_VM_INFO64_COUNT
#define KEV_DL_PROTO_DETACHED 15
#define MACHINE_THREAD_STATE_COUNT x86_THREAD_STATE_COUNT
#define IP_DEFAULT_MULTICAST_TTL 1
#define __Reply__thread_act_subsystem__defined 
#define ATTR_CMNEXT_VALIDMASK 0x000007fc
#define _SC_2_C_DEV 19
#define _MACH_POLICY_H_ 
#define __FLT_MIN__ 1.17549435082228750796873653722224568e-38F
#define CPUFAMILY_ARM_13 0x0cc90e64
#define CPUFAMILY_ARM_14 0x96077ef1
#define __GCC_IEC_559_COMPLEX 2
#define task_set_host_port(task,port) (task_set_special_port((task), TASK_HOST_PORT, (port)))
#define MACH_PORT_TYPE_PORT_RIGHTS (MACH_PORT_TYPE_SEND_RIGHTS|MACH_PORT_TYPE_RECEIVE)
#define KERN_OSRELEASE 2
#define APPLE_IF_FAM_PPP 6
#define PROC_PIDREGIONINFO_SIZE (sizeof(struct proc_regioninfo))
#define IPV6CTL_TEMPVLTIME 34
#define _NET_IF_H_ 
#define AUDITDEV_FILENAME "audit"
#define CLSIZELOG2 0
#define UF_COMPRESSED 0x00000020
#define _SC_TIMEOUTS 95
#define __FLT128_MIN_10_EXP__ (-4931)
#define __UINT_LEAST8_TYPE__ unsigned char
#define MACH_MSG_OVERWRITE 3
#define __SIZEOF_FLOAT80__ 16
#define MACH_NOTIFY_PORT_DESTROYED (MACH_NOTIFY_FIRST + 005)
#define MACH_PORT_STATUS_FLAG_REVIVE 0x10
#define _I386__ENDIAN_H_ 
#define NDR_CHAR_EBCDIC 1
#define INT_LEAST16_MIN INT16_MIN
#define HOST_CALENDAR_CHANGED_REPLYID 950
#define __Reply__host_priv_subsystem__defined 
#define KEV_DL_LINK_QUALITY_METRIC_CHANGED 20
#define _SC_LINE_MAX 15
#define IPPROTO_CPNX 72
#define MACH_MSGH_BITS_LOCAL_MASK 0x00001f00
#define __API_UNAVAILABLE_GET_MACRO(...) 
#define IPCTL_GIF_TTL 16
#define I386_THREAD_STATE_MAX (614)
#define MIN_AUDIT_FILE_SIZE (512 * 1024)
#define KERN_CODESIGN_ERROR 50
#define _POSIX_PRIORITIZED_IO (-1)
#define PROCESSOR_PM_REGS_INFO 0x10000001
#define TASK_BASIC_INFO_32 4
#define __DRIVERKIT_19_0 190000
#define bzero(dest,...) __builtin___memset_chk (dest, 0, __VA_ARGS__, __darwin_obsz0 (dest))
#define _SECURE__STRING_H_ 
#define _SECURE__COMMON_H_ 
#define CPU_SUBTYPE_MC88000_ALL ((cpu_subtype_t) 0)
#define KEV_INET6_REQUEST_NAT64_PREFIX 7
#define MSG_HOLD 0x800
#define __INTMAX_C(c) c ## L
#define R2_GITTIP "1703da75e247871e6fa22d3308551a291dad8f01"
#define EPROTONOSUPPORT 43
#define KERN_KDSETBUF 4
#define SG_NORELOC 0x4
#define MIG_ARRAY_TOO_LARGE -307
#define USER_POSIX2_UPE 18
#define ILL_ILLTRP 2
#define IFF_OACTIVE 0x400
#define TRUE 1
#define SIG_HOLD (void (*)(int))5
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
#define TSI_T_REXMT 0
#define MACH_SEND_NODENAP MACH_SEND_NOIMPORTANCE
#define IPV6CTL_MRTSTATS 7
#define IPV6CTL_RTEXPIRE 25
#define API_UNAVAILABLE(...) 
#define IPV6_SOCKOPT_RESERVED1 3
#define __WATCHOS_1_0 10000
#define VM_MACHFACTOR 4
#define __DARWIN_C_LEVEL __DARWIN_C_FULL
#define EEXIST 17
#define KERN_UREFS_OVERFLOW 19
#define VM_REGION_BASIC_INFO_COUNT ((mach_msg_type_number_t) (sizeof(vm_region_basic_info_data_t)/sizeof(int)))
#define __API_DEPRECATED_WITH_REPLACEMENT(...) 
#define __UINT8_MAX__ 0xff
#define SG_HIGHVM 0x1
#define host_get_launchctl_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_LAUNCHCTL_PORT, (port)))
#define _POSIX_TYPED_MEMORY_OBJECTS (-1)
#define CPUFAMILY_INTEL_WESTMERE 0x573b5eec
#define __NULLABILITY_COMPLETENESS_PUSH 
#define USER_COLL_WEIGHTS_MAX 6
#define LEDGER_NULL ((ledger_t) 0)
#define _XOPEN_UNIX (1)
#define SET_LIBRARY_ORDINAL(n_desc,ordinal) (n_desc) = (((n_desc) & 0x00ff) | (((ordinal) & 0xff) << 8))
#define APPLE_IF_FAM_PVC 7
#define KERN_BOOTTIME 21
#define THREAD_STATE_FLAVOR_LIST_10_9 129
#define OSSwapLittleToHostInt16(x) ((uint16_t)(x))
#define MACH_ZONE_NAME_MAX_LEN 80
#define INT16_C(v) (v)
#define __WINT_MAX__ 0x7fffffff
#define BLKDEV_IOSIZE 2048
#define EV_SYSFLAGS 0xF000
#define IPPROTO_SCTP 132
#define EXC_MASK_ARITHMETIC (1 << EXC_ARITHMETIC)
#define IPV6CTL_MAXFRAGS 41
#define MH_DYLINKER 0x7
#define __PTHREAD_ATTR_SIZE__ 56
#define __FLT32_MIN_EXP__ (-125)
#define R_REG_T x86_thread_state_t
#define _POSIX_SPIN_LOCKS (-1)
#define OS_NORETURN __attribute__((__noreturn__))
#define _SC_XOPEN_LEGACY 110
#define CLD_TRAPPED 4
#define UINT_LEAST64_MAX UINT64_MAX
#define processor_MSG_COUNT 6
#define OSSwapLittleToHostConstInt64(x) ((uint64_t)(x))
#define IPPROTO_HMP 20
#define IPV6_FW_FLUSH 32
#define SO_NOSIGPIPE 0x1022
#define _CDEFS_H_ 
#define REQUESTED_TRAILER_SIZE(y) REQUESTED_TRAILER_SIZE_NATIVE(y)
#define OSSwapLittleToHostInt32(x) ((uint32_t)(x))
#define _POSIX2_BC_DIM_MAX 2048
#define S_TYPEISSEM(buf) (0)
#define O_NOFOLLOW_ANY 0x20000000
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define ESPIPE 29
#define MATTR_VAL_ICACHE_FLUSH 8
#define CIRCLEQ_EMPTY(head) ((head)->cqh_first == (void *)(head))
#define VM_MEMORY_DYLIB 33
#define THREAD_READ_NULL ((thread_read_t) 0)
#define _POSIX_TTY_NAME_MAX 9
#define __PTRDIFF_TYPE__ long int
#define HOST_COALITION_PORT (15 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define __SIZE_MAX__ 0xffffffffffffffffUL
#define APPLE_IF_FAM_VLAN 5
#define KEV_DL_AWDL_UNRESTRICTED 27
#define FPC_IM FPC_IE
#define _MACH_VM_TYPES_H_ 
#define IN_MULTICAST(i) IN_CLASSD(i)
#define KERN_OSREV 3
#define AF_APPLETALK 16
#define MACH_NOTIFY_FIRST 0100
#define x86_EXCEPTION_STATE_COUNT ((mach_msg_type_number_t) (sizeof(x86_exception_state_t)/sizeof(unsigned int)))
#define VOL_CAP_INT_MANLOCK 0x00001000
#define TASK_EXC_GUARD_MP_ALL 0xf0
#define INT16_MAX 32767
#define CTLFLAG_KERN 0x01000000
#define MACH_SEND_INVALID_RIGHT 0x1000000a
#define RLIMIT_AS 5
#define WIFEXITED(x) (_WSTATUS(x) == 0)
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8 1
#define KERN_SHREG_PRIVATIZABLE 54
#define __DARWIN_FD_CLR(n,p) __darwin_fd_clr((n), (p))
#define EHOSTUNREACH 65
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define BIND_OPCODE_SET_DYLIB_ORDINAL_ULEB 0x20
#define OSSwapLittleToHostInt64(x) ((uint64_t)(x))
#define BIND_OPCODE_SET_SYMBOL_TRAILING_FLAGS_IMM 0x40
#define VM_PROT_STRIP_READ ((vm_prot_t) 0x80)
#define S_TYPEISSHM(buf) (0)
#define STAILQ_REMOVE_AFTER(head,elm,field) do { if ((STAILQ_NEXT(elm, field) = STAILQ_NEXT(STAILQ_NEXT(elm, field), field)) == NULL) (head)->stqh_last = &STAILQ_NEXT((elm), field); } while (0)
#define NOTE_NONE 0x00000080
#define TAILQ_FOREACH_SAFE(var,head,field,tvar) for ((var) = TAILQ_FIRST((head)); (var) && ((tvar) = TAILQ_NEXT((var), field), 1); (var) = (tvar))
#define __GCC_IEC_559 2
#define ATTR_CMNEXT_REALDEVID 0x00000040
#define ATTR_VOL_UUID 0x00040000
#define CPU_SUBTYPE_386 CPU_SUBTYPE_INTEL(3, 0)
#define EXC_I386_ENDPERR 33
#define IP_FW_RESETLOG 45
#define HAS_LIBPROC 
#define INDIRECT_SYMBOL_LOCAL 0x80000000
#define _STRUCT_X86_CPMU_STATE64 struct __darwin_x86_cpmu_state64
#define _POSIX2_BC_STRING_MAX 1000
#define LC_DYSYMTAB 0xb
#define IFCAP_HWCSUM (IFCAP_RXCSUM | IFCAP_TXCSUM)
#define KERN_DEFAULT_SET 31
#define __FLT_EVAL_METHOD__ 0
#define EVFILT_AIO (-3)
#define _SC_NPROCESSORS_CONF 57
#define MACH_MSG_IPC_KERNEL 0x00000800
#define P_PHYSIO 0
#define __NDR_convert__float_rep__ 0
#define MACH_PORT_TYPE_DEAD_NAME MACH_PORT_TYPE(MACH_PORT_RIGHT_DEAD_NAME)
#define EPROGUNAVAIL 74
#define KERN_AFFINITY 43
#define host_set_kextd_port(host,port) (host_set_special_port((host), HOST_KEXTD_PORT, (port)))
#define VM_BEHAVIOR_REUSE ((vm_behavior_t) 9)
#define TASK_EXC_GUARD_MP_FATAL 0x80
#define CPU_SUBTYPE_INTEL_MODEL_ALL 0
#define HOST_EXTMOD_INFO64_COUNT ((mach_msg_type_number_t) (sizeof(vm_extmod_statistics_data_t)/sizeof(integer_t)))
#define __FXSR__ 1
#define _BSD_MACHINE_PARAM_H_ 
#define __FLT64_DECIMAL_DIG__ 17
#define VM_PAGE_QUERY_PAGE_FICTITIOUS 0x2
#define HOST_GSSD_PORT (12 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define _POSIX_SS_REPL_MAX 4
#define _SC_CPUTIME 68
#define __disable_tail_calls 
#define SIN6_LEN 
#define HOST_LAST_SPECIAL_KERNEL_PORT HOST_IO_MASTER_PORT
#define KERN_NISDOMAINNAME 22
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define _POSIX_DELAYTIMER_MAX 32
#define F_PATHPKG_CHECK 52
#define LINK_MAX 32767
#define VM_MEMORY_COREGRAPHICS 42
#define __IPHONE_2_1 20100
#define __IPHONE_2_2 20200
#define IPV6CTL_RIP6STATS 36
#define FNONBLOCK O_NONBLOCK
#define INT8_MIN -128
#define _SOCKLEN_T 
#define AF_NS 6
#define PF_COIP AF_COIP
#define __AVAILABILITY_INTERNAL_WEAK_IMPORT __attribute__((weak_import))
#define _POSIX_TRACE_USER_EVENT_MAX 32
#define EXC_I386_ALIGNFLT 17
#define PF_OSI AF_ISO
#define _SC_TRACE_USER_EVENT_MAX 130
#define KERN_PROCNAME 62
#define thread_act_MSG_COUNT 31
#define VM_PURGABLE_DENY 3
#define SM_TRUESHARED 5
#define MIG_SUBSYSTEM_NULL ((mig_subsystem_t)0)
#define OS_NOTHROW __attribute__((__nothrow__))
#define MBIGCLBYTES (1 << MBIGCLSHIFT)
#define DST_NONE 0
#define TH_STATE_UNINTERRUPTIBLE 4
#define F_GETCODEDIR 72
#define EOWNERDEAD 105
#define CPUFAMILY_INTEL_SANDYBRIDGE 0x5490b78c
#define VM_PAGE_QUERY_PAGE_CS_VALIDATED 0x100
#define F_ALLOCATEALL 0x00000004
#define RTF_DONE 0x40
#define ENOSYS 78
#define IPV6_ADDR_MC_FLAGS_UNICAST_BASED (IPV6_ADDR_MC_FLAGS_TRANSIENT | IPV6_ADDR_MC_FLAGS_PREFIX)
#define MNT_IGNORE_OWNERSHIP 0x00200000
#define TH_FLAGS (TH_FIN|TH_SYN|TH_RST|TH_ACK|TH_URG|TH_ECE|TH_CWR)
#define CAST_USER_ADDR_T(a_ptr) ((user_addr_t)((uintptr_t)(a_ptr)))
#define EV_EOF 0x8000
#define TASK_SEATBELT_PORT 7
#define POLL_MSG 3
#define MAP_MEM_COPYBACK 1
#define MACH_MSG_OPTION_NONE 0x00000000
#define INT16_MIN -32768
#define TCPCI_OPT_SACK 0x00000002
#define SLIST_NEXT(elm,field) ((elm)->field.sle_next)
#define __FINITE_MATH_ONLY__ 0
#define PT_DETACH 11
#define MACH_SEND_INTERRUPT 0x00000040
#define __IPHONE_5_0 50000
#define IPV6_DEFAULT_MULTICAST_LOOP 1
#define TIME_MICROS_MAX (1000000)
#define RTA_GATEWAY 0x2
#define WQ_EXCEEDED_TOTAL_THREAD_LIMIT 0x2
#define VM_FLAGS_RESILIENT_MEDIA 0x0040
#define OS_CLOSED_OPTIONS(_name,_type,...) __OS_ENUM_C_FALLBACK(_name, _type, ## __VA_ARGS__) __OS_ENUM_ATTR_CLOSED __OS_OPTIONS_ATTR
#define VM_PURGABLE_DEBUG_EMPTY (0x1 << VM_PURGABLE_DEBUG_SHIFT)
#define _X86_INSTRUCTION_STATE_MAX_INSN_BYTES (2448 - 64 - 4)
#define F_LOG2PHYS 49
#define RUSAGE_CHILDREN -1
#define err_get_sub(err) (((err)>>14)&0xfff)
#define KERN_EXCEPTION_PROTECTED 32
#define O_FSYNC O_SYNC
#define ATTR_VOL_NAME 0x00002000
#define X86_PAGEIN_STATE_COUNT x86_PAGEIN_STATE_COUNT
#define ECANCELED 89
#define SIGFPE 8
#define KERN_OPERATION_TIMED_OUT 49
#define CPU_SUBTYPE_MASK 0xff000000
#define A_OLDGETPOLICY 2
#define KERN_PROC_PGRP 2
#define VM_REGION_SUBMAP_INFO_V0_SIZE (VM_REGION_SUBMAP_INFO_V1_SIZE - sizeof (unsigned int) )
#define IPV6CTL_DEFHLIM 3
#define KERN_KDEBUG 24
#define processor_set_MSG_COUNT 11
#define VFS_CTL_NOLOCKS 0x00010006
#define REG_FL ((dbg->bits == R_SYS_BITS_64) ? 17 : 9)
#define CBQSIZE (CBLOCK/NBBY)
#define MACH_RCV_BODY_ERROR 0x1000400c
#define HOST_NOTIFY_CALENDAR_CHANGE 0
#define INT_FAST8_MAX INT8_MAX
#define CLOCK_ALARM_MAXRES 5
#define CPU_THREADTYPE_INTEL_HTT ((cpu_threadtype_t) 1)
#define HAVE_PTRACE 1
#define LIST_CHECK_PREV(elm,field) 
#define ETXTBSY 26
#define KERN_MISSING_KC 54
#define _V6_ILP32_OFF32 __ILP32_OFF32
#define MACH_RCV_INVALID_NAME 0x10004002
#define AUDIT_TRIGGER_ROTATE_KERNEL 2
#define __INT8_C(c) c
#define WCHAR_MAX __WCHAR_MAX__
#define _U_LONG 
#define I386_PGBYTES 4096
#define EVFILT_SYSCOUNT 17
#define CPU_SUBTYPE_PENTIUM_3_M CPU_SUBTYPE_INTEL(8, 1)
#define __LDBL_HAS_INFINITY__ 1
#define MAX_SACK_BLKS 6
#define NSIG __DARWIN_NSIG
#define PROCESSOR_INFO_MAX (1024)
#define MAP_MEM_PURGABLE 0x040000
#define MACH_TASK_BASIC_INFO 20
#define VM_REGION_EXTENDED_INFO 13
#define KERN_SAVED_IDS 20
#define ACCESSX_MAX_DESCRIPTORS 100
#define MSG_PEEK 0x2
#define IPPROTO_ROUTING 43
#define WAKEMON_GET_PARAMS 0x04
#define __restrict restrict
#define RTM_GET2 0x14
#define _SC_BC_SCALE_MAX 11
#define RTV_SSTHRESH 0x20
#define __OS_AVAILABILITY__ 
#define CPU_STATE_NICE 3
#define __SHRT_MAX__ 0x7fff
#define PROC_FLAG_PA_THROTTLE 0x800
#define S_THREAD_LOCAL_INIT_FUNCTION_POINTERS 0x15
#define w_stopval w_S.w_Stopval
#define __LDBL_MAX__ 1.18973149535723176502126385303097021e+4932L
#define PRIO_PGRP 1
#define ILL_ILLOPN 4
#define TOOL_SWIFT 2
#define ifr_route_refcnt ifr_ifru.ifru_route_refcnt
#define __FLT64X_MAX_10_EXP__ 4932
#define IPPROTO_IGMP 2
#define PROC_DIRTY_TRACK 0x1
#define NOTE_EXIT_DETAIL 0x02000000
#define PROC_PGRP_ONLY 2
#define SIGTTOU 22
#define FP_FXSR 4
#define MACH_RCV_GUARDED_DESC 0x00001000
#define IP_OLD_FW_RESETLOG 56
#define __IPHONE_10_0 100000
#define __IPHONE_10_1 100100
#define __IPHONE_10_2 100200
#define __IPHONE_10_3 100300
#define EXC_RPC_ALERT 9
#define __FLT64_NORM_MAX__ 1.79769313486231570814527423731704357e+308F64
#define _POSIX_SYNCHRONIZED_IO (-1)
#define __LDBL_IS_IEC_60559__ 2
#define P_CONTROLT 0x00000002
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_1(x) 
#define KERN_TFP_POLICY_DEFAULT 2
#define _NLINK_T 
#define TRACEBUF 
#define RTM_DELETE 0x2
#define __NDR_convert__ 0
#define SET_MZI_COLLECTABLE_FLAG(val,flag) (val) = (flag) ? ((val) | 1) : (val)
#define sigmask(m) (1 << ((m)-1))
#define MH_PREBINDABLE 0x800
#define IPPROTO_ADFS 68
#define ALLPERMS (S_ISUID|S_ISGID|S_ISTXT|S_IRWXU|S_IRWXG|S_IRWXO)
#define VOL_CAPABILITIES_INTERFACES 1
#define RTF_IFSCOPE 0x1000000
#define EXPORT_SYMBOL_FLAGS_KIND_ABSOLUTE 0x02
#define NOGROUP 65535
#define S_IFWHT 0160000
#define CPU_SUBTYPE_INTEL(f,m) ((cpu_subtype_t) (f) + ((m) << 4))
#define KEVENT_FLAG_NONE 0x000000
#define THREAD_FLAVOR_INSPECT 2
#define VM_MEMORY_MALLOC_LARGE_REUSED 9
#define MACH_VOUCHER_ATTR_KEY_PTHPRIORITY ((mach_voucher_attr_key_t)4)
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define __alloc_size(...) __attribute__((alloc_size(__VA_ARGS__)))
#define IFNAMSIZ 16
#define _SC_THREAD_STACK_MIN 93
#define __FLT128_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F128
#define CIRCLEQ_INSERT_BEFORE(head,listelm,elm,field) do { CIRCLEQ_CHECK_PREV(head, listelm, field); (elm)->field.cqe_next = (listelm); (elm)->field.cqe_prev = (listelm)->field.cqe_prev; if ((listelm)->field.cqe_prev == (void *)(head)) (head)->cqh_first = (elm); else (listelm)->field.cqe_prev->field.cqe_next = (elm); (listelm)->field.cqe_prev = (elm); } while (0)
#define VOL_CAP_INT_RENAME_OPENFAIL 0x00100000
#define _SC_V6_LP64_OFF64 105
#define __AVAILABILITY_INTERNAL_DEPRECATED_MSG(_msg) __attribute__((deprecated))
#define LIST_FOREACH(var,head,field) for ((var) = LIST_FIRST((head)); (var); (var) = LIST_NEXT((var), field))
#define FPE_FLTRES 4
#define __APPLE_CC__ 1
#define EINPROGRESS 36
#define LIST_FIRST(head) ((head)->lh_first)
#define _MACH_HOST_INFO_H_ 
#define NET_RT_IFLIST 3
#define _SC_SEM_VALUE_MAX 50
#define MACH_MSG_IPC_SPACE 0x00002000
#define __WCHAR_MIN__ (-__WCHAR_MAX__ - 1)
#define INT_FAST8_MIN INT8_MIN
#define CTL_DEBUG 5
#define MACH_VOUCHER_ATTR_VALUE_FLAGS_NONE ((mach_voucher_attr_value_flags_t)0)
#define bdbtofsb(bn) ((bn) / (BLKDEV_IOSIZE/DEV_BSIZE))
#define KERN_KDPIDEX 14
#define TSI_S_RESERVED 11
#define __APPLE_API_STANDARD 
#define AU_CLASS_MASK_RESERVED 0x10000000
#define EVFILT_THREADMARKER EVFILT_SYSCOUNT
#define CPU_SUBTYPE_ARM_ALL ((cpu_subtype_t) 0)
#define ATTR_CMN_FLAGS 0x00040000
#define WCHAR_MIN (-WCHAR_MAX-1)
#define IPV6CTL_RR_PRUNE 22
#define IN_ARE_ADDR_EQUAL(a,b) (bcmp(&(a)->s_addr, &(b)->s_addr, sizeof (struct in_addr)) == 0)
#define __FLT_EVAL_METHOD_TS_18661_3__ 0
#define VOL_CAP_INT_VOL_RENAME 0x00000080
#define ATTR_VOL_MOUNTPOINT 0x00001000
#define S_LITERAL_POINTERS 0x5
#define KEV_INET_NEW_ADDR 1
#define EAUTH 80
#define VM_BEHAVIOR_CAN_REUSE ((vm_behavior_t) 10)
#define VOL_CAP_FMT_SEALED 0x02000000
#define AF_E164 AF_ISDN
#define PF_KEY pseudo_AF_KEY
#define _PC_AUTH_OPAQUE_NP 14
#define TASK_EXC_GUARD_VM_ALL 0x0f
#define _MACH_HOST_NOTIFY_H_ 
#define MPG_FLAGS_IMMOVABLE_PINNED (0x01ull << 56)
#define PROC_PIDTHREADPATHINFO 10
#define _POSIX_READER_WRITER_LOCKS 200112L
#define VM_MEMORY_COREDATA_OBJECTIDS 46
#define N_UNDF 0x0
#define S_ATTR_SELF_MODIFYING_CODE 0x04000000
#define A_OLDSETCOND 21
#define USER_BC_BASE_MAX 2
#define _MACH_TASK_INFO_H_ 
#define _STRUCT_TIMEVAL32 struct timeval32
#define PROC_PIDFILEPORTPSHMINFO 5
#define _POSIX_AIO_MAX 1
#define O_RDWR 0x0002
#define _POSIX_TIMERS (-1)
#define LC_LOAD_UPWARD_DYLIB (0x23 | LC_REQ_DYLD)
#define __LDBL_MAX_EXP__ 16384
#define RU_PROC_RUNS_RESLIDE 0x00000001
#define IPC_VOUCHER_NULL ((ipc_voucher_t) 0)
#define err_server err_system(0x2)
#define __printflike(fmtarg,firstvararg) __attribute__((__format__ (__printf__, fmtarg, firstvararg)))
#define R2_EXTRAS "lib/radare2-extras/" R2_VERSION
#define LC_TWOLEVEL_HINTS 0x16
#define ENOTEMPTY 66
#define __TVOS_11_0 110000
#define __TVOS_11_1 110100
#define __TVOS_11_2 110200
#define _MACH_MACHINE_BOOLEAN_H_ 
#define UINT_FAST16_MAX UINT16_MAX
#define HOST_VM_INFO64_REV1_COUNT HOST_VM_INFO64_LATEST_COUNT
#define ENOTBLK 15
#define __WINT_MIN__ (-__WINT_MAX__ - 1)
#define ELAST 106
#define VOL_CAP_FMT_SPARSE_FILES 0x00000040
#define O_DIRECTORY 0x00100000
#define F_ADDFILESIGS 61
#define __SIZEOF_SHORT__ 2
#define _MACH_TIME_VALUE_H_ 
#define EPROTOTYPE 41
#define EFL_SET 0x00000002
#define EVFILT_WRITE (-2)
#define KERN_POSIX1 17
#define _SC_SHELL 78
#define __pure2 __attribute__((__const__))
#define __TVOS_UNAVAILABLE 
#define VM_PURGABLE_ALL_MASKS (VM_PURGABLE_STATE_MASK | VM_VOLATILE_ORDER_MASK | VM_PURGABLE_ORDERING_MASK | VM_PURGABLE_BEHAVIOR_MASK | VM_VOLATILE_GROUP_MASK | VM_PURGABLE_DEBUG_MASK | VM_PURGABLE_NO_AGING_MASK)
#define A_GETSFLAGS 39
#define PROC_FLAG_IOS_APPLEDAEMON 0x20000
#define _PTHREAD_COND_T 
#define NeXTBSD 1995064
#define MACH_MSG_TYPE_DISPOSE_RECEIVE 24
#define ALIGN(p) __DARWIN_ALIGN(p)
#define IFCAP_AV 0x00100
#define IN6ADDR_V4MAPPED_INIT {{{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00 }}}
#define host_get_sysdiagnose_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_SYSDIAGNOSE_PORT, (port)))
#define NCARGS ARG_MAX
#define __FLT32X_IS_IEC_60559__ 2
#define VM_MEMORY_IOSURFACE 88
#define _SYS_UNISTD_H_ 
#define OS_FORMAT_PRINTF(x,y) __attribute__((__format__(printf,x,y)))
#define htonl(x) __DARWIN_OSSwapInt32(x)
#define htons(x) __DARWIN_OSSwapInt16(x)
#define ERPCMISMATCH 73
#define _POSIX_AIO_LISTIO_MAX 2
#define KERN_KDSETRTCDEC 15
#define KEV_DL_SUBCLASS 2
#define KIPC_MAX_HDR 6
#define _SYS_PARAM_H_ 
#define __DARWIN_NBBY 8
#define __FLT128_MANT_DIG__ 113
#define STAILQ_HEAD(name,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct name { struct type *stqh_first; struct type **stqh_last; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define HAVE_LIB_MAGIC 0
#define KERN_PROC_SESSION 3
#define IPV6CTL_GIF_HLIM 19
#define SO_REUSEADDR 0x0004
#define __result_use_check __attribute__((__warn_unused_result__))
#define BIND_OPCODE_DONE 0x00
#define MCAST_JOIN_GROUP 80
#define _MACHO_NLIST_H_ 
#define HAVE_LIB_XXHASH 0
#define INI_IPV6 0x2
#define KERN_LOCK_SET_DESTROYED 38
#define MACH_MSG_VIRTUAL_COPY 1
#define FP_PREC_24B 0
#define TASK_BASE_LATENCY_QOS_POLICY 10
#define ERR_ROUTINE_NIL (mach_error_fn_t)0
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10(x) x
#define INI_IPV4 0x1
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_15(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_16(x) x
#define AUDIT_TRIGGER_CLOSE_AND_DIE 4
#define _SC_TIMERS 41
#define S_THREAD_LOCAL_VARIABLE_POINTERS 0x14
#define SO_USELOOPBACK 0x0040
#define _Nonnull 
#define _CS_XBS5_LP64_OFF64_LDFLAGS 29
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_7(x) 
#define HW_DISKNAMES 8
#define _UINTPTR_T 
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define ATTR_BULK_REQUIRED (ATTR_CMN_NAME | ATTR_CMN_RETURNED_ATTRS)
#define TCPOLEN_CC 6
#define PT_ATTACHEXC 14
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#define __PTRDIFF_WIDTH__ 64
#define IPPROTO_WSN 74
#define _STRUCT_X86_FLOAT_STATE32 struct __darwin_i386_float_state
#define _POSIX_THREAD_THREADS_MAX 64
#define __RequestUnion__task_subsystem__defined 
#define RTF_GLOBAL 0x40000000
#define _STRUCT_X86_THREAD_STATE32 struct __darwin_i386_thread_state
#define O_APPEND 0x00000008
#define _STRUCT_X86_INSTRUCTION_STATE struct __x86_instruction_state
#define _POSIX_TIMEOUTS (-1)
#define MACH_VOUCHER_ATTR_KEY_IMPORTANCE ((mach_voucher_attr_key_t)2)
#define HTONL(x) (x) = htonl((__uint32_t)x)
#define SF_IMMUTABLE 0x00020000
#define ATTR_CMN_OBJTYPE 0x00000008
#define HTONS(x) (x) = htons((__uint16_t)x)
#define _FORTIFY_SOURCE 2
#define S_NON_LAZY_SYMBOL_POINTERS 0x6
#define PGSHIFT 12
#define NOTE_EXIT_DECRYPTFAIL 0x00010000
#define TAILQ_CHECK_HEAD(head,field) 
#define MAXPATHLEN PATH_MAX
#define AU_FS_MINFREE 20
#define _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS 5
#define _SC_2_C_BIND 18
#define _POSIX_LINK_MAX 8
#define AUDIT_PERZONE 0x2000
#define PROC_CSM_TECS 0x0004
#define INADDR_PFSYNC_GROUP (u_int32_t)0xe00000f0
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_4(x) 
#define COLL_WEIGHTS_MAX 2
#define OS_STRINGIFY(s) __OS_STRINGIFY(s)
#define R_CHECKS_LEVEL 2
#define _RPERM_OK (1<<19)
#define PT_SIGEXC 12
#define IOPOL_TYPE_VFS_IGNORE_PERMISSIONS 7
#define CHARCLASS_NAME_MAX 14
#define VM_MEMORY_CM_CRABS 96
#define NSEC_PER_SEC 1000000000ull
#define _XOPEN_CRYPT (1)
#define _STRUCT_SIGALTSTACK struct __darwin_sigaltstack
#define NAME_SERVER_SLOT 0
#define APPLE_IF_FAM_TUN 4
#define __IPV6_ADDR_SCOPE_GLOBAL 0x0e
#define IPV6_IPSEC_POLICY 28
#define HOST_VM_PURGABLE_COUNT ((mach_msg_type_number_t) (sizeof(host_purgable_info_data_t)/sizeof(integer_t)))
#define _STRUCT_X86_FLOAT_STATE64 struct __darwin_x86_float_state64
#define PROC_PIDFILEPORTSOCKETINFO 3
#define NET_SERVICE_TYPE_AV 6
#define VM_FLAGS_PURGABLE 0x0002
#define O_EVTONLY 0x00008000
#define TASK_NAME_PORT 3
#define PRIO_PROCESS 0
#define __PTHREAD_COND_SIZE__ 40
#define IN6_IS_ADDR_MULTICAST(a) ((a)->s6_addr[0] == 0xff)
#define HOST_NULL ((host_t) 0)
#define NET_SERVICE_TYPE_BE 0
#define NOTE_SECONDS 0x00000001
#define NET_SERVICE_TYPE_BK 1
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define _XOPEN_REALTIME_THREADS (-1)
#define SF_ARCHIVED 0x00010000
#define USHRT_MAX (SHRT_MAX * 2 + 1)
#define _POSIX_CHILD_MAX 25
#define __Request__mach_port_subsystem__defined 
#define __NEW_SCHEDULING_FRAMEWORK__ 
#define REBASE_TYPE_TEXT_ABSOLUTE32 2
#define LEDGER_ITEM_INFINITY ((ledger_item_t) (~0))
#define __options_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_open __enum_options
#define trunc_page_kernel(x) ((x) & (~vm_kernel_page_mask))
#define PROC_PIDFDSOCKETINFO 3
#define F_SETLKWTIMEOUT 10
#define MACH_MSGH_BITS_ZERO 0x00000000
#define NFSV2_MAX_FH_SIZE 32
#define SF_NOUNLINK 0x00100000
#define OS_OPTIONS(_name,_type,...) __OS_ENUM_C_FALLBACK(_name, _type, ## __VA_ARGS__) __OS_ENUM_ATTR __OS_OPTIONS_ATTR
#define P_PROFIL 0x00000020
#define __MAC_10_10_2 101002
#define MNT_NOATIME 0x10000000
#define IPV6PORT_RESERVEDMAX (IPV6PORT_RESERVED-1)
#define VM_BEHAVIOR_WILLNEED ((vm_behavior_t) 4)
#define P_DIRTY_LAUNCH_IN_PROGRESS 0x00000200
#define KERN_KDPIDTR 11
#define VM_PURGABLE_ORDERING_SHIFT 5
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11(x) x
#define F_BARRIERFSYNC 85
#define OSSwapHostToBigInt(x) OSSwapHostToBigInt32(x)
#define __END_DECLS 
#define task_MSG_COUNT 61
#define API_DEPRECATED_WITH_REPLACEMENT_END 
#define __FLT64X_EPSILON__ 1.08420217248550443400745280086994171e-19F64x
#define OSSwapHostToLittleInt(x) OSSwapHostToLittleInt32(x)
#define __CONCAT(x,y) x ## y
#define ntohll(x) __DARWIN_OSSwapInt64(x)
#define ALIGNBYTES __DARWIN_ALIGNBYTES
#define PLATFORM_TVOS 3
#define F_PEOFPOSMODE 3
#define __STDC_HOSTED__ 1
#define HOST_PRIORITY_INFO 5
#define LOCAL_PEERUUID 0x004
#define R2_VERSION_PATCH 4
#define S_THREAD_LOCAL_REGULAR 0x11
#define HOST_IOCOMPRESSIONSTATS_PORT (25 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define MATTR_VAL_GET 2
#define MACH_MSG_TYPE_PORT_ANY_RIGHT(x) (((x) >= MACH_MSG_TYPE_MOVE_RECEIVE) && ((x) <= MACH_MSG_TYPE_MOVE_SEND_ONCE))
#define CPUFAMILY_INTEL_HASWELL 0x10b282dc
#define CPU_SUBTYPE_BIG_ENDIAN ((cpu_subtype_t) 1)
#define SPI_DEPRECATED_WITH_REPLACEMENT(...) 
#define KEV_DL_SIFGENERIC 6
#define RLIM_SAVED_CUR RLIM_INFINITY
#define VM_MEMORY_AUDIO 90
#define __FLT32_IS_IEC_60559__ 2
#define CBSIZE (CBLOCK - sizeof(struct cblock *) - CBQSIZE)
#define VOL_CAP_INT_SNAPSHOT 0x00020000
#define IPPROTO_PGM 113
#define memmove(dest,...) __builtin___memmove_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define UID_MAX 2147483647U
#define THREAD_AFFINITY_TAG_NULL 0
#define _SC_2_PBS_MESSAGE 63
#define HOST_CALENDAR_SET_REPLYID 951
#define IFCAP_TSO6 0x00040
#define TSI_S_TIME_WAIT 10
#define _READ_OK (1<<9)
#define NOTE_REVOKE 0x00000040
#define MACH_PORT_DENAP_RECEIVER 6
#define MACH_VOUCHER_ATTR_KEY_TEST ((mach_voucher_attr_key_t)8)
#define MATTR_VAL_GET_INFO 10
#define SO_NUMRCVPKT 0x1112
#define _XOPEN_ENH_I18N (1)
#define KEV_DL_MASTER_ELECTED 23
#define REFERENCE_FLAG_PRIVATE_UNDEFINED_NON_LAZY 4
#define MACH_PORT_STATUS_FLAG_GUARDED 0x02
#define A_SETQCTRL 36
#define LIST_INSERT_BEFORE(listelm,elm,field) do { LIST_CHECK_PREV(listelm, field); (elm)->field.le_prev = (listelm)->field.le_prev; LIST_NEXT((elm), field) = (listelm); *(listelm)->field.le_prev = (elm); (listelm)->field.le_prev = &LIST_NEXT((elm), field); } while (0)
#define TCPOLEN_SACK_PERMITTED 2
#define ALRMTYPE 0xff
#define TASK_TRACE_MEMORY_INFO_COUNT ((mach_msg_type_number_t) (sizeof(task_trace_memory_info_data_t) / sizeof(natural_t)))
#define POLICY_TIMESHARE_LIMIT_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_timeshare_limit)/sizeof(integer_t)))
#define ATTR_CMNEXT_LINKID 0x00000010
#define KEV_DL_QOS_MODE_CHANGED 29
#define MH_ROOT_SAFE 0x40000
#define SIGURG 16
#define _SC_TZNAME_MAX 27
#define IP_IPSEC_POLICY 21
#define IP_RSVP_OFF 16
#define REBASE_OPCODE_SET_SEGMENT_AND_OFFSET_ULEB 0x20
#define _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS 12
#define IPPROTO_PIM 103
#define memcpy(dest,...) __builtin___memcpy_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define ATTR_VOL_MINALLOCATION 0x00000020
#define DIR_MNTSTATUS_MNTPOINT 0x00000001
#define EFL_USER_SET (EFL_IF)
#define __DBL_DIG__ 15
#define TIME_UTC 1
#define MACH_SEND_SYNC_BOOTSTRAP_CHECKIN 0x00800000
#define clrbit(a,i) (((unsigned char *)(a))[(i)/NBBY] &= ~(1u<<((i)%NBBY)))
#define strncat(dest,...) __builtin___strncat_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define VOL_CAP_FMT_NO_IMMUTABLE_FILES 0x00200000
#define MACH_RCV_TRAILER_AV 7
#define EINTR 4
#define x86_THREAD_FULL_STATE64 23
#define AF_INET6 30
#define VM_BEHAVIOR_DONTNEED ((vm_behavior_t) 5)
#define S_SYMBOL_STUBS 0x8
#define KEV_DL_SIFMTU 3
#define _FILESEC_T 
#define KEV_DL_SIFMEDIA 5
#define _SC_SPORADIC_SERVER 81
#define host_get_lockd_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_LOCKD_PORT, (port)))
#define P_SYSTEM 0x00000200
#define _U_INT64_T 
#define THREAD_STATE_FLAVOR_LIST 0
#define ECHILD 10
#define _POSIX_SPAWN (-1)
#define __SHRT_WIDTH__ 16
#define __TVOS_9_0 90000
#define __TVOS_9_1 90100
#define KERN_NO_SPACE 3
#define SLIST_REMOVE(head,elm,type,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH do { if (SLIST_FIRST((head)) == (elm)) { SLIST_REMOVE_HEAD((head), field); } else { struct type *curelm = SLIST_FIRST((head)); while (SLIST_NEXT(curelm, field) != (elm)) curelm = SLIST_NEXT(curelm, field); SLIST_REMOVE_AFTER(curelm, field); } TRASHIT((elm)->field.sle_next); } while (0) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define IOPOL_IMPORTANT 1
#define VM_MEMORY_LIBDISPATCH 74
#define SO_LINGER 0x0080
#define VM_MEMORY_IMAGEIO 70
#define KERN_SUGID_COREDUMP 52
#define CMASK 022
#define KERN_INVALID_HOST 22
#define F_THAW_FS 54
#define PF_UNIX PF_LOCAL
#define MH_APP_EXTENSION_SAFE 0x02000000
#define _MACH_PROCESSOR_INFO_H_ 
#define __KAME_VERSION "2009/apple-darwin"
#define F_LOG2PHYS_EXT 65
#define SA_ONSTACK 0x0001
#define ifr_dstaddr ifr_ifru.ifru_dstaddr
#define _APPEND_OK (1<<13)
#define MACH_PORT_INDEX(name) ((name) >> 8)
#define ILL_ILLADR 5
#define VM_MEMORY_SBRK 5
#define __LDBL_MIN__ 3.36210314311209350626267781732175260e-4932L
#define AF_UNSPEC 0
#define VOL_CAP_FMT_DOCUMENT_ID 0x00080000
#define __API_DEPRECATED_MSG_GET_MACRO(...) 
#define SIGQUIT 3
#define IPPROTO_IPEIP 94
#define ATTR_DIR_ENTRYCOUNT 0x00000002
#define TASK_DYLD_ALL_IMAGE_INFO_64 1
#define RLIMIT_STACK 3
#define PROC_DIRTY_IS_DIRTY 0x4
#define WAKEMON_DISABLE 0x02
#define KERN_COREDUMP 51
#define RTAX_GATEWAY 1
#define _BLKCNT_T 
#define PROC_KDBG_ONLY 7
#define DELAY(n) { int N = (n); while (--N > 0); }
#define CPU_TYPE_POWERPC64 (CPU_TYPE_POWERPC | CPU_ARCH_ABI64)
#define VM_PURGABLE_VOLATILE 1
#define KERN_TFP 61
#define TAILQ_PREV(elm,headname,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH (*(((struct headname *)((elm)->field.tqe_prev))->tqh_last)) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define SOI_S_CANTSENDMORE 0x0010
#define _REXT_OK (1<<17)
#define MACH_PORT_DEAD ((mach_port_name_t) ~0)
#define KERN_KDWRITEMAP 18
#define MACH_PORT_NULL 0
#define DIR_MNTSTATUS_TRIGGER 0x00000002
#define VQ_FLAG10000 0x10000
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_3(x) 
#define SO_NET_SERVICE_TYPE 0x1116
#define KERN_LOW_PRI_WINDOW 56
#define IPPROTO_DONE 257
#define IP_FW_DEL 41
#define MACH_CORE_FILEHEADER_NAMELEN 16
#define MACH_MSGH_BITS_HAS_REMOTE(bits) (MACH_MSGH_BITS_REMOTE(bits) != MACH_MSGH_BITS_ZERO)
#define EPERM 1
#define N_DESC_DISCARDED 0x0020
#define MACH_PORT_TYPE_SEND_RECEIVE (MACH_PORT_TYPE_SEND|MACH_PORT_TYPE_RECEIVE)
#define FSHIFT 11
#define MACH_MSG_SIZE_RELIABLE ((mach_msg_size_t) 256 * 1024)
#define __DARWIN_BYTE_ORDER __DARWIN_LITTLE_ENDIAN
#define INADDR_ALLRTRS_GROUP (u_int32_t)0xe0000002
#define __enum_closed_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_closed
#define x86_EXCEPTION_STATE32_COUNT ((mach_msg_type_number_t) ( sizeof (x86_exception_state32_t) / sizeof (int) ))
#define __MAC_10_5 1050
#define _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS 6
#define x86_EXCEPTION_STATE 9
#define FSOPT_NOFOLLOW 0x00000001
#define __AVAILABILITY_VERSIONS__ 
#define PROC_DIRTY_DEFER_ALWAYS 0x10
#define __SIZEOF_LONG__ 8
#define _PC_MAX_INPUT 3
#define __DARWIN_1050INODE64(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_64_BIT_INO_T)
#define _SC_V6_ILP32_OFF32 103
#define REBASE_TYPE_TEXT_PCREL32 3
#define STAILQ_FOREACH(var,head,field) for((var) = STAILQ_FIRST((head)); (var); (var) = STAILQ_NEXT((var), field))
#define KEV_INET_ARPRTRFAILURE 9
#define __AVAILABILITY_INTERNAL_REGULAR 
#define IPPROTO_PRM 21
#define S_REGULAR 0x0
#define __DARWIN_WEOF ((__darwin_wint_t)-1)
#define _SYS__TYPES_H_ 
#define VM_PROT_DEFAULT (VM_PROT_READ|VM_PROT_WRITE)
#define VM_MEMORY_VIDEOBITSTREAM 91
#define MSG_RCVMORE 0x4000
#define DEV_BSIZE 512
#define __APPLE__ 1
#define __UINT16_C(c) c
#define IP_TRAFFIC_MGT_BACKGROUND 65
#define TAILQ_INSERT_HEAD(head,elm,field) do { TAILQ_CHECK_HEAD(head, field); if ((TAILQ_NEXT((elm), field) = TAILQ_FIRST((head))) != NULL) TAILQ_FIRST((head))->field.tqe_prev = &TAILQ_NEXT((elm), field); else (head)->tqh_last = &TAILQ_NEXT((elm), field); TAILQ_FIRST((head)) = (elm); (elm)->field.tqe_prev = &TAILQ_FIRST((head)); QMD_TRACE_HEAD(head); QMD_TRACE_ELEM(&(elm)->field); } while (0)
#define TASK_EVENTS_INFO 2
#define IPPROTO_ST 7
#define NET_SERVICE_TYPE_RV 5
#define IP_MULTICAST_LOOP 11
#define __DARWIN_ALIAS_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_NON_CANCELABLE __DARWIN_SUF_UNIX03)
#define VOL_CAP_FMT_SYMBOLICLINKS 0x00000002
#define SO_DONTTRUNC 0x2000
#define _POSIX2_RE_DUP_MAX 255
#define HTONLL(x) (x) = htonll((__uint64_t)x)
#define THREAD_FLAVOR_CONTROL 0
#define x86_INSTRUCTION_STATE 24
#define KIPC_MBSTAT 8
#define x86_FLOAT_STATE32_COUNT ((mach_msg_type_number_t) (sizeof(x86_float_state32_t)/sizeof(unsigned int)))
#define MACH_VOUCHER_ATTR_SET_VALUE_HANDLE ((mach_voucher_attr_recipe_command_t)3)
#define IN_CLASSB_NET 0xffff0000
#define AU_DEFAUDITID (uid_t)(-1)
#define _MACH_DEBUG_IPC_INFO_H_ 
#define __APPLE_API_STABLE 
#define KERN_SECURELVL 9
#define TAILQ_INSERT_TAIL(head,elm,field) do { TAILQ_NEXT((elm), field) = NULL; (elm)->field.tqe_prev = (head)->tqh_last; *(head)->tqh_last = (elm); (head)->tqh_last = &TAILQ_NEXT((elm), field); QMD_TRACE_HEAD(head); QMD_TRACE_ELEM(&(elm)->field); } while (0)
#define SEEK_SET 0
#define CPU_THREADTYPE_NONE ((cpu_threadtype_t) 0)
#define IPPROTO_PUP 12
#define USER_EXPR_NEST_MAX 7
#define CIRCLEQ_HEAD(name,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct name { struct type *cqh_first; struct type *cqh_last; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define CPUFAMILY_INTEL_BROADWELL 0x582ed09c
#define TCP_MAXOLEN (TCP_MAXHLEN - sizeof(struct tcphdr))
#define KERN_CHECKOPENEVT 70
#define A_OLDGETCOND 20
#define NOTE_OOB 0x00000002
#define NOTE_TRACKERR 0x00000002
#define IPPROTO_PVP 75
#define OSReadBigInt32(base,byteOffset) OSReadSwapInt32(base, byteOffset)
#define P_SSTEP 0
#define clbase(i) (i)
#define _SC_CLOCK_SELECTION 67
#define MACH_MSG_TYPE_MAKE_SEND_ONCE 21
#define IPV6_PORTRANGE_HIGH 1
#define NET_SERVICE_TYPE_VI 3
#define ARG_MAX (1024 * 1024)
#define NET_SERVICE_TYPE_VO 4
#define CTL_VM 2
#define ATTR_CMN_FSID 0x00000004
#define ENOSR 98
#define KERN_INVALID_NAME 15
#define S_ISDIR(m) (((m) & S_IFMT) == S_IFDIR)
#define err_sub(x) (((x)&0xfff)<<14)
#define NFS_MAX_FH_SIZE NFSV4_MAX_FH_SIZE
#define MAC_OS_X_VERSION_10_14_1 101401
#define MFSNAMELEN 15
#define MAC_OS_X_VERSION_10_14_4 101404
#define MAC_OS_X_VERSION_10_14_6 101406
#define P_NOSWAP 0
#define MAX_AUDIT_RECORD_SIZE MAXAUDITDATA
#define __FLT64_MANT_DIG__ 53
#define IPPROTO_IDP 22
#define VM_DYLD64 ((user_addr_t) 0x00007FFF5FC00000ULL)
#define EVFILT_PROC (-5)
#define strncpy(dest,...) __builtin___strncpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define EXC_I386_DBLFLT 8
#define __ReplyUnion__clock_priv_subsystem__defined 
#define O_SYMLINK 0x00200000
#define HOST_PREFERRED_USER_ARCH_COUNT ((mach_msg_type_number_t) (sizeof(host_preferred_user_arch_data_t)/sizeof(integer_t)))
#define O_NOCTTY 0x00020000
#define _BSD_MACHINE_SIGNAL_H_ 
#define DYNAMIC_LOOKUP_ORDINAL 0xfe
#define IPPROTO_IPIP IPPROTO_IPV4
#define MPG_STRICT 0x01
#define LC_ENCRYPTION_INFO_64 0x2C
#define WCOREDUMP(x) (_W_INT(x) & WCOREFLAG)
#define WORD_BIT 32
#define MACH_SEND_TRAILER 0x00020000
#define TASK_VM_INFO_REV5_COUNT TASK_VM_INFO_COUNT
#define OS_CONST __attribute__((__const__))
#define HOST_CPU_LOAD_INFO_COUNT ((mach_msg_type_number_t) (sizeof (host_cpu_load_info_data_t) / sizeof (integer_t)))
#define __DARWIN_ALIAS_I(sym) __asm("_" __STRING(sym) __DARWIN_SUF_64_BIT_INO_T __DARWIN_SUF_UNIX03)
#define host_set_audit_control_port(host,port) (host_set_special_port((host), HOST_AUDIT_CONTROL_PORT, (port)))
#define IPV6_MIN_MEMBERSHIPS 31
#define _INO_T 
#define CIRCLEQ_FIRST(head) ((head)->cqh_first)
#define IPV6_2292PKTOPTIONS 25
#define CLD_NOOP 0
#define KMOD_DECL(name,version) static kmod_start_func_t name ## _module_start; static kmod_stop_func_t name ## _module_stop; kmod_info_t KMOD_INFO_NAME = { 0, KMOD_INFO_VERSION, -1U, { #name }, { version }, -1, 0, 0, 0, 0, name ## _module_start, name ## _module_stop };
#define __TVOS_14_3 140300
#define IN6_IS_ADDR_LINKLOCAL(a) (((a)->s6_addr[0] == 0xfe) && (((a)->s6_addr[1] & 0xc0) == 0x80))
#define MACH_RCV_TRAILER_NULL 0
#define A_SETUMASK 14
#define VM_MAP_READ_NULL ((vm_map_read_t) 0)
#define IPPROTO_IGP 85
#define EFL_USER_CLEAR (EFL_IOPL|EFL_NT|EFL_RF)
#define FSCALE (1<<FSHIFT)
#define CTLTYPE 0xf
#define HAVE_FORK 1
#define FD_SET(n,p) __DARWIN_FD_SET(n, p)
#define __FLT_HAS_DENORM__ 1
#define __SIZEOF_LONG_DOUBLE__ 16
#define _SS_PAD2SIZE (_SS_MAXSIZE - sizeof(__uint8_t) - sizeof(sa_family_t) - _SS_PAD1SIZE - _SS_ALIGNSIZE)
#define PROC_PIDLISTTHREADS_SIZE (2* sizeof(uint32_t))
#define __compiler_barrier() __asm__ __volatile__("" ::: "memory")
#define LINE_MAX 2048
#define VM_REGION_SUBMAP_INFO_V2_SIZE (sizeof (vm_region_submap_info_data_64_t))
#define OS_ASSUME_NONNULL_END 
#define MIG_ROUTINE_ARG_DESCRIPTOR_NULL ((mig_routine_arg_descriptor_t)0)
#define USER_CODE_SELECTOR 0x0017
#define AUDIT_WINDATA 0x0020
#define IO_NUM_PRIORITIES 4
#define P_ADOPTPERSONA 0x04000000
#define CPUFAMILY_INTEL_ICELAKE 0x38435547
#define IP_RSVP_ON 15
#define ATTR_CMN_NAMEDATTRCOUNT 0x00080000
#define THREAD_KERNEL_PORT 1
#define _SC_ARG_MAX 1
#define VM_FLAGS_SUPERPAGE_NONE (SUPERPAGE_NONE << VM_FLAGS_SUPERPAGE_SHIFT)
#define INT_FAST16_MIN INT16_MIN
#define _UUID_STRING_T 
#define P_DEPENDENCY_CAPABLE 0x00100000
#define MH_BINDATLOAD 0x8
#define IPPROTO_3PC 34
#define EVFILT_USER (-10)
#define SSIZE_MAX LONG_MAX
#define KEV_DL_IF_IDLE_ROUTE_REFCNT 18
#define CPU_SUBTYPE_PENTII_M5 CPU_SUBTYPE_INTEL(6, 5)
#define IFF_ALTPHYS IFF_LINK2
#define UF_OPAQUE 0x00000008
#define SEEK_CUR 1
#define VM_PROT_NO_CHANGE ((vm_prot_t) 0x08)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_0(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_3(x) x
#define AF_ROUTE 17
#define __darwin_obsz(object) __builtin_object_size (object, _USE_FORTIFY_LEVEL > 1 ? 1 : 0)
#define SUPERPAGE_SIZE_2MB 2
#define IP_PORTRANGE_LOW 2
#define MACH_RCV_IN_SET 0x1000400a
#define _NETINET_IN_H_ 
#define __WATCHOS_2_0 20000
#define __WATCHOS_2_1 20100
#define __WATCHOS_2_2 20200
#define SO_UPCALLCLOSEWAIT 0x1027
#define SO_OOBINLINE 0x0100
#define _POSIX_HOST_NAME_MAX 255
#define EQFULL 106
#define PRIO_DARWIN_PROCESS 4
#define SM_EMPTY 3
#define _POSIX_CHOWN_RESTRICTED 200112L
#define VOL_CAP_FMT_WRITE_GENERATION_COUNT 0x00100000
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define MACH_MSG_BODY_NULL (mach_msg_body_t *) 0
#define _TIME_T 
#define P_RESV7 0x00800000
#define P_RESV9 0x02000000
#define PF_PIP pseudo_AF_PIP
#define __UINT16_TYPE__ short unsigned int
#define MSG_DONTROUTE 0x4
#define _I386_SIGNAL_H_ 1
#define IPPROTO_HELLO 63
#define REBASE_OPCODE_ADD_ADDR_IMM_SCALED 0x40
#define PRIMASK 0x0ff
#define __GNUC_STDC_INLINE__ 1
#define claligned(x) ((((int)(x))&CLOFSET)==0)
#define IPPROTO_IPPC 67
#define __WCHAR_TYPE__ int
#define R2_HOME_CONFIGDIR R_JOIN_2_PATHS (".config", "radare2")
#define IPPROTO_OSPFIGP 89
#define __DARWIN_1050ALIAS_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_NON_CANCELABLE __DARWIN_SUF_UNIX03)
#define _SC_XOPEN_REALTIME_THREADS 112
#define SECT_TEXT "__text"
#define ATTR_FILE_IOBLOCKSIZE 0x00000008
#define MEMORY_OBJECT_COPY_INVALID 5
#define TASK_AFFINITY_TAG_INFO_COUNT (sizeof(task_affinity_tag_info_data_t) / sizeof(natural_t))
#define SOI_S_PRIV 0x0080
#define FPE_FLTDIV 1
#define NOTE_EXIT 0x80000000
#define __IPHONE_3_2 30200
#define __KAME__ 
#define MAXBSIZE (256 * 4096)
#define VOL_CAP_FMT_PATH_FROM_ID 0x00004000
#define CPU_SUBTYPE_CELERON CPU_SUBTYPE_INTEL(7, 6)
#define __DBL_HAS_INFINITY__ 1
#define MAP_MEM_NAMED_CREATE 0x020000
#define IOPOL_SCOPE_PROCESS 0
#define IPPROTO_INP 32
#define _PC_SYMLINK_MAX 24
#define KERN_KDWRITETR 17
#define W_EXITCODE(ret,sig) ((ret) << 8 | (sig))
#define MSG_FLUSH 0x400
#define KERN_POLICY_STATIC 51
#define LONG_BIT 64
#define MACH_PORT_STATUS_FLAG_IMP_DONATION 0x08
#define _POSIX_NGROUPS_MAX 8
#define RSIZE_MAX (SIZE_MAX >> 1)
#define __OS_ENUM_C_FALLBACK(_name,_type,...) typedef _type _name ##_t; enum _name { __VA_ARGS__ }
#define _SYS_FCNTL_H_ 
#define IP_STRIPHDR 23
#define IP_RSVP_VIF_OFF 18
#define HAVE_CLOCK_NANOSLEEP 0
#define MACH_VOUCHER_IMPORTANCE_ATTR_ADD_EXTERNAL 1
#define __DARWIN_OS_INLINE static inline
#define CPU_TYPE_VAX ((cpu_type_t) 1)
#define ATTR_CMN_GRPID 0x00010000
#define __HAVE_SPECULATION_SAFE_VALUE 1
#define __XNU_PRIVATE_EXTERN __attribute__((visibility("hidden")))
#define __null_unspecified 
#define F_SINGLE_WRITER 76
#define TASK_VM_INFO_REV1_COUNT ((mach_msg_type_number_t) (TASK_VM_INFO_REV2_COUNT - 4))
#define _POSIX_V7_LPBIG_OFFBIG __LPBIG_OFFBIG
#define PROC_CSM_ALL 0x0001
#define NDR_INT_LITTLE_ENDIAN 1
#define IP_FAITH 22
#define BIND_SYMBOL_FLAGS_WEAK_IMPORT 0x1
#define BIND_OPCODE_MASK 0xF0
#define _KAUTH_CRED_T 
#define AF_SYSTEM 32
#define MH_FORCE_FLAT 0x100
#define _POSIX_PATH_MAX 256
#define __ReplyUnion__processor_set_subsystem__defined 
#define TASK_INSPECT_BASIC_COUNTS_COUNT (sizeof(struct task_inspect_basic_counts) / sizeof(natural_t))
#define CPU_SUBTYPE_486 CPU_SUBTYPE_INTEL(4, 0)
#define BUS_NOOP 0
#define MACH_MSG_TYPE_PORT_SEND_ONCE MACH_MSG_TYPE_MOVE_SEND_ONCE
#define ENOATTR 93
#define SOI_S_ISCONNECTING 0x0004
#define HOST_SYSPOLICYD_PORT (22 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define N_WEAK_DEF 0x0080
#define THREAD_STATE_MAX I386_THREAD_STATE_MAX
#define PROC_FLAG_CONTROLT 0x80
#define CTL_HW 6
#define IN6_IS_ADDR_MC_SITELOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && (__IPV6_ADDR_MC_SCOPE(a) == __IPV6_ADDR_SCOPE_SITELOCAL))
#define IPPROTO_IPV4 4
#define IPPROTO_IPV6 41
#define KERN_UPDATEINTERVAL 25
#define PLATFORM_DRIVERKIT 10
#define HOST_CHUD_PORT HOST_LAUNCHCTL_PORT
#define VM_BEHAVIOR_RANDOM ((vm_behavior_t) 1)
#define PF_PPP AF_PPP
#define VM_PURGABLE_PURGE_ALL ((vm_purgable_t) 2)
#define RLIM_INFINITY (((__uint64_t)1 << 63) - 1)
#define _PC_REC_MAX_XFER_SIZE 21
#define __FLT32X_HAS_DENORM__ 1
#define NOTE_MACHTIME 0x00000100
#define __INT_FAST16_TYPE__ short int
#define SA_64REGSET 0x0200
#define TID_NULL ((uint64_t) 0)
#define PROC_PIDTHREADPATHINFO_SIZE (sizeof(struct proc_threadwithpathinfo))
#define EXC_GUARD 12
#define MACH_VOUCHER_ATTR_BITS_STORE MACH_VOUCHER_ATTR_USER_DATA_STORE
#define TASK_EXTMOD_INFO 19
#define __MMX_WITH_SSE__ 1
#define _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS 11
#define __WATCHOS_UNAVAILABLE 
#define KERN_PROC_UID 5
#define IPV6CTL_ADDRCTLPOLICY 38
#define EF_MAY_SHARE_BLOCKS 0x00000001
#define __FLT64_HAS_DENORM__ 1
#define UINT_LEAST8_MAX UINT8_MAX
#define VFS_CTL_SERVERINFO 0x00010009
#define __IPHONE_3_0 30000
#define __IPHONE_3_1 30100
#define CPU_SUBTYPE_PTRAUTH_ABI 0x80000000
#define MACH_PORTS_SLOTS_USED 3
#define _POSIX_RE_DUP_MAX _POSIX2_RE_DUP_MAX
#define S_ATTR_NO_TOC 0x40000000
#define MNT_DWAIT 4
#define CTL_DEBUG_MAXID 20
#define MACH_PORT_STATUS_FLAG_GUARD_IMMOVABLE_RECEIVE 0x40
#define TASK_ID_TOKEN_NULL ((task_id_token_t) 0)
#define _POSIX_SPORADIC_SERVER (-1)
#define __FLT128_HAS_INFINITY__ 1
#define MACH_PORT_SRIGHTS_PRESENT 1
#define OS_USED __attribute__((__used__))
#define SECT_DATA "__data"
#define S_TYPEISTMO(buf) (0)
#define MAP_MEM_FLAGS_MASK 0x00FFFF00
#define THREAD_INSPECT_PORT 2
#define IPC_SPACE_INSPECT_NULL ((ipc_space_inspect_t) 0)
#define IP_RECVPKTINFO IP_PKTINFO
#define MIG_ROUTINE_DESCRIPTOR_NULL ((mig_routine_descriptor_t)0)
#define BIND_OPCODE_DO_BIND_ADD_ADDR_IMM_SCALED 0xB0
#define _thread_act_user_ 
#define _POSIX_MEMORY_PROTECTION 200112L
#define IPPROTO_SCCSP 96
#define MAP_MEM_POSTED 6
#define true 1
#define SA_RESETHAND 0x0004
#define OSSwapBigToHostInt(x) OSSwapBigToHostInt32(x)
#define WINT_MIN INT32_MIN
#define __TVOS_10_0_1 100001
#define RTAX_AUTHOR 6
#define _SC_RAW_SOCKETS 119
#define __OS_EXTENSION_UNAVAILABLE(_msg) __OSX_EXTENSION_UNAVAILABLE(_msg) __IOS_EXTENSION_UNAVAILABLE(_msg)
#define RTF_BROADCAST 0x400000
#define VM_FLAGS_ANYWHERE 0x0001
#define _POSIX2_LOCALEDEF 200112L
#define MACH_VOUCHER_ATTR_NOOP ((mach_voucher_attr_recipe_command_t)0)
#define CTLFLAG_RD 0x80000000
#define PF_PUP AF_PUP
#define MACH_CORE_FILEHEADER_SIGNATURE 0x0063614d20646152ULL
#define S_ATTR_SOME_INSTRUCTIONS 0x00000400
#define CTLFLAG_RW (CTLFLAG_RD|CTLFLAG_WR)
#define __RequestUnion__processor_set_subsystem__defined 
#define P_SELECT 0x00000040
#define CPU_SUBTYPE_PENTPRO CPU_SUBTYPE_INTEL(6, 1)
#define F_RDAHEAD 45
#define x86_AVX_STATE (x86_AVX_STATE32 + 2)
#define MACH_RCV_SCATTER_SMALL 0x1000400e
#define __FLT32_MAX__ 3.40282346638528859811704183484516925e+38F32
#define x86_PAGEIN_STATE_COUNT ((mach_msg_type_number_t)(sizeof(x86_pagein_state_t) / sizeof(int)))
#define EXC_EMULATION 4
#define cr_gid cr_groups[0]
#define FFDSYNC O_DSYNC
#define __kpi_unavailable 
#define SOI_S_INCOMP 0x0800
#define LC_LOAD_DYLIB 0xc
#define BC_BASE_MAX 99
#define _SS_PAD1SIZE (_SS_ALIGNSIZE - sizeof(__uint8_t) - sizeof(sa_family_t))
#define PDP_ENDIAN __DARWIN_PDP_ENDIAN
#define IN_CLASSB_HOST 0x0000ffff
#define OFF_MAX LLONG_MAX
#define S_BLKSIZE 512
#define host_get_fairplayd_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_FAIRPLAYD_PORT, (port)))
#define AUC_DISABLED -1
#define _SC_STREAM_MAX 26
#define KERN_KDGETBUF 5
#define __amd64 1
#define POLICY_TIMESHARE_INFO_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_timeshare_info)/sizeof(integer_t)))
#define VM_VOLATILE_ORDER_MASK (1 << VM_VOLATILE_ORDER_SHIFT)
#define MACH_MSG_ALLOCATE 2
#define BUS_OBJERR 3
#define __strfmonlike(fmtarg,firstvararg) __attribute__((__format__ (__strfmon__, fmtarg, firstvararg)))
#define _POSIX_V6_LPBIG_OFFBIG __LPBIG_OFFBIG
#define _STDBOOL_H 
#define IPPROTO_RSVP 46
#define REFERENCE_FLAG_UNDEFINED_LAZY 1
#define SEGV_MAPERR 1
#define IOPOL_VFS_CONTENT_PROTECTION_DEFAULT 0
#define __PTHREAD_ONCE_SIZE__ 8
#define VM_REGION_BASIC_INFO_COUNT_64 ((mach_msg_type_number_t) (sizeof(vm_region_basic_info_data_64_t)/sizeof(int)))
#define SECT_OBJC_MODULES "__module_info"
#define EXC_I386_EXTERR 5
#define IPPROTO_BHA 49
#define KERN_TRANSLATE 44
#define _SC_2_PBS_LOCATE 62
#define SECTION_ATTRIBUTES_SYS 0x00ffff00
#define SM_PRIVATE_ALIASED 6
#define BIND_IMMEDIATE_MASK 0x0F
#define MAP_MEM_VM_COPY 0x200000
#define KEV_INET_ARPCOLLISION 7
#define err_ipc err_system(0x3)
#define ifr_metric ifr_ifru.ifru_metric
#define _CS_DARWIN_USER_TEMP_DIR 65537
#define __FLT32_HAS_QUIET_NAN__ 1
#define MCAST_EXCLUDE 2
#define VM_MEMORY_ROSETTA_ARENA 236
#define _NETINET6_IN6_H_ 
#define ATTR_CMN_OBJID 0x00000020
#define CPU_SUBTYPE_PENTIUM_4_M CPU_SUBTYPE_INTEL(10, 1)
#define _POSIX_TRACE_EVENT_FILTER (-1)
#define _SC_2_VERSION 17
#define IFF_POINTOPOINT 0x10
#define PROC_SELFSET_DELAYIDLESLEEP 4
#define ECONNABORTED 53
#define RTF_DELCLONE 0x80
#define IPPROTO_AH 51
#define A_GETPOLICY 33
#define __SIZEOF_SIZE_T__ 8
#define __DARWIN_ALIAS_STARTING(_mac,_iphone,x) __DARWIN_ALIAS_STARTING_MAC_ ##_mac(x)
#define __offsetof(type,field) __builtin_offsetof(type, field)
#define EXC_MACH_SYSCALL 8
#define MACH_RCV_LARGE_IDENTITY 0x00000008
#define RTF_WASCLONED 0x20000
#define O_NONBLOCK 0x00000004
#define MIG_BAD_ARGUMENTS -304
#define KERN_NOT_IN_SET 12
#define RTF_CONDEMNED 0x2000000
#define S_IROTH 0000004
#define WAKEMON_MAKE_FATAL 0x10
#define POLICY_TIMESHARE_BASE_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_timeshare_base)/sizeof(integer_t)))
#define SSTOP 4
#define SIG_BLOCK 1
#define __DARWIN_FD_ZERO(p) __builtin_bzero(p, sizeof(*(p)))
#define POLICYCLASS_FIXEDPRI (POLICY_RR | POLICY_FIFO)
#define CPUFAMILY_ARM_15 0xa8511bca
#define USER_POSIX2_FORT_DEV 14
#define MACH_PORT_QLIMIT_KERNEL (65534)
#define __IPHONE_13_7 130700
#define __FLT64X_MIN_EXP__ (-16381)
#define MACH_PORT_DNREQUESTS_SIZE_COUNT 1
#define INTMAX_MAX INTMAX_C(9223372036854775807)
#define SIZE_MAX UINTPTR_MAX
#define P_NOREMOTEHANG 0x80000000
#define PRIO_DARWIN_THREAD 3
#define TASK_FLAGS_INFO_COUNT ((mach_msg_type_number_t) (sizeof(task_flags_info_data_t) / sizeof (natural_t)))
#define POLICY_RR 2
#define _processor_user_ 
#define IPPROTO_BLT 30
#define EV_DISABLE 0x0008
#define PROX_FDTYPE_ATALK 0
#define VFS_CONF 2
#define NOTE_VM_PRESSURE_TERMINATE 0x40000000
#define IPV6_FW_DEL 31
#define P_DIRTY_SHUTDOWN 0x00000010
#define __IPHONE_11_0 110000
#define __IPHONE_11_1 110100
#define __IPHONE_11_2 110200
#define __IPHONE_11_3 110300
#define __IPHONE_11_4 110400
#define ATTR_VOL_SIGNATURE 0x00000002
#define USER_LINE_MAX 8
#define PF_UNSPEC AF_UNSPEC
#define PT_THUPDATE 13
#define UINT64_C(v) (v ## ULL)
#define IPCTL_MAXID 17
#define __IPHONE_2_0 20000
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_4(x) 
#define CPUFAMILY_INTEL_PENRYN 0x78ea4fbc
#define SOI_S_CANTRCVMORE 0x0020
#define TCPOPT_SACK 5
#define A_GETCTLMODE 41
#define F_GETLKPID 66
#define MACH_PORT_MAKE(index,gen) (((index) << 8) | (gen) >> 24)
#define HW_CACHELINE 16
#define MH_BUNDLE 0x8
#define __FLT32_MAX_EXP__ 128
#define SO_NKE 0x1021
#define MATTR_VAL_OFF 0
#define IFF_LINK1 0x2000
#define CPU_SUBTYPE_MIPS_R2000a ((cpu_subtype_t) 4)
#define HOST_DEBUG_INFO_INTERNAL 10
#define RTF_NOIFREF 0x2000
#define x86_INSTRUCTION_STATE_COUNT ((mach_msg_type_number_t)(sizeof(x86_instruction_state_t) / sizeof(int)))
#define IPPORT_RESERVEDSTART 600
#define S_IWUSR 0000200
#define KERN_MAXVNODES 5
#define _DARWIN_FEATURE_64_BIT_INODE 1
#define x86_AVX512_STATE_COUNT ((mach_msg_type_number_t) (sizeof(x86_avx512_state_t)/sizeof(unsigned int)))
#define VM_64_BIT_DATA_OBJECTS 
#define CONNECT_DATA_AUTHENTICATED 0x4
#define _MACH_VM_BEHAVIOR_H_ 
#define CPU_SUBTYPE_ARM64_PTR_AUTH_MASK 0x0f000000
#define STAILQ_NEXT(elm,field) ((elm)->field.stqe_next)
#define SEGV_NOOP 0
#define KEV_DL_SIFFLAGS 1
#define OSSwapLittleToHostConstInt16(x) ((uint16_t)(x))
#define _STRUCT_MCONTEXT_AVX64_FULL struct __darwin_mcontext_avx64_full
#define FPS_C0 0x0100
#define FPS_C1 0x0200
#define FPS_C2 0x0400
#define FPS_C3 0x4000
#define __GXX_ABI_VERSION 1016
#define A_GETQCTRL 35
#define _SYS_MOUNT_H_ 
#define R_OK (1<<2)
#define __DARWIN_FD_SET(n,p) __darwin_fd_set((n), (p))
#define IP_MIN_MEMBERSHIPS 31
#define LOCKGROUP_MAX_NAME 64
#define INADDR_ANY (u_int32_t)0x00000000
#define FPS_DE 0x0002
#define __DEVOLATILE(type,var) __CAST_AWAY_QUALIFIER(var, volatile, type)
#define pseudo_AF_RTIP 22
#define R2_HOME_WWWROOT R_JOIN_2_PATHS (R2_HOME_DATADIR, "www")
#define _SC_READER_WRITER_LOCKS 76
#define TAILQ_FOREACH_REVERSE_SAFE(var,head,headname,field,tvar) for ((var) = TAILQ_LAST((head), headname); (var) && ((tvar) = TAILQ_PREV((var), headname, field), 1); (var) = (tvar))
#define VM_NAMED_ENTRY_NULL ((vm_named_entry_t) 0)
#define TH_ACK 0x10
#define ITIMER_REAL 0
#define _BSD_I386__TYPES_H_ 
#define TAILQ_CHECK_NEXT(elm,field) 
#define IPPROTO_IL 40
#define APPLE_IF_FAM_MDECAP 9
#define IPPROTO_IP 0
#define UINT32_MAX 4294967295U
#define WNOHANG 0x00000001
#define VOL_CAP_FMT_FAST_STATFS 0x00000400
#define _BSD_MACHINE__TYPES_H_ 
#define SUPERPAGE_SIZE_ANY 1
#define MACH_RCV_OVERWRITE 0x00000000
#define PF_IPX AF_IPX
#define IFRTYPE_FUNCTIONAL_COMPANIONLINK 7
#define SEGV_ACCERR 2
#define VM_PAGE_QUERY_PAGE_DIRTY 0x8
#define HOST_ATM_NOTIFICATION_PORT (14 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define MACH_MSG_TYPE_INTEGER_T MACH_MSG_TYPE_INTEGER_32
#define TASK_KERNELMEMORY_INFO_COUNT ((mach_msg_type_number_t) (sizeof (task_kernelmemory_info_data_t) / sizeof (natural_t)))
#define KERN_USRSTACK KERN_USRSTACK64
#define IPCTL_SENDREDIRECTS 2
#define CPU_SUBTYPE_POWERPC_603e ((cpu_subtype_t) 4)
#define __PTHREAD_CONDATTR_SIZE__ 8
#define MACH_MSGH_BITS_SET_PORTS(remote,local,voucher) (((remote) & MACH_MSGH_BITS_REMOTE_MASK) | (((local) << 8) & MACH_MSGH_BITS_LOCAL_MASK) | (((voucher) << 16) & MACH_MSGH_BITS_VOUCHER_MASK))
#define AUDIT_CNT 0x0001
#define MH_CORE 0x4
#define HOST_LOCAL_NODE -1
#define _POSIX_ADVISORY_INFO (-1)
#define VM_FLAGS_NO_CACHE 0x0010
#define __TVOS_12_0 120000
#define __TVOS_12_1 120100
#define __TVOS_12_2 120200
#define __TVOS_12_3 120300
#define __TVOS_12_4 120400
#define IFF_NOARP 0x80
#define L_INCR SEEK_CUR
#define stpncpy(dest,...) __builtin___stpncpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define F_LOCK 1
#define P_DIRTY_DEFER_ALWAYS 0x00000400
#define IPPROTO_WBMON 78
#define CPU_SUBTYPE_POWERPC_604e ((cpu_subtype_t) 7)
#define VFS_CTL_STATFS64 0x0001000B
#define EXC_I386_SGLSTP 1
#define _POSIX2_FORT_RUN 200112L
#define IN6ADDR_NODELOCAL_ALLNODES_INIT {{{ 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01 }}}
#define PROC_PIDFDATALKINFO 8
#define MACH_NOTIFY_NO_SENDERS (MACH_NOTIFY_FIRST + 006)
#define CLSHIFT (PGSHIFT+CLSIZELOG2)
#define S_IRWXG 0000070
#define KEV_DL_IFDELEGATE_CHANGED 25
#define IP_PORTRANGE_DEFAULT 0
#define IPPROTO_SRPC 90
#define __FLT64_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F64
#define SECTION_TYPE 0x000000ff
#define PF_ISO AF_ISO
#define __DBL_MIN__ ((double)2.22507385850720138309023271733240406e-308L)
#define BAD_ALRMTYPE(t) (((t) &~ TIME_RELATIVE) != 0)
#define FPS_IE 0x0001
#define EADDRINUSE 48
#define _VA_LIST 
#define TASK_EXC_GUARD_VM_DELIVER 0x01
#define ADD_MACH_TIMESPEC(t1,t2) do { if (((t1)->tv_nsec += (t2)->tv_nsec) >= (long) NSEC_PER_SEC) { (t1)->tv_nsec -= (long) NSEC_PER_SEC; (t1)->tv_sec += 1; } (t1)->tv_sec += (t2)->tv_sec; } while (0)
#define MACH_VOUCHER_ATTR_COPY ((mach_voucher_attr_recipe_command_t)1)
#define VOL_CAP_INT_FLOCK 0x00000200
#define _POSIX_VDISABLE ((unsigned char)'\377')
#define UF_SETTABLE 0x0000ffff
#define __OSX_AVAILABLE(_vers) 
#define DICE_KIND_ABS_JUMP_TABLE32 0x0005
#define A_SETSMASK 15
#define IN6_ARE_ADDR_EQUAL(a,b) (memcmp(&(a)->s6_addr[0], &(b)->s6_addr[0], sizeof (struct in6_addr)) == 0)
#define RLIMIT_WAKEUPS_MONITOR 0x1
#define VM_MEMORY_COREGRAPHICS_SHARED 55
#define USE_PTRACE_WRAP 0
#define _MACH_MACHINE_H_ 
#define IFF_BROADCAST 0x2
#define isclr(a,i) ((((unsigned char *)(a))[(i)/NBBY] & (1u<<((i)%NBBY))) == 0)
#define RTM_GET 0x4
#define __ReplyUnion__processor_subsystem__defined 
#define SG_FVMLIB 0x2
#define EV_VANISHED 0x0200
#define __FLT64X_NORM_MAX__ 1.18973149535723176502126385303097021e+4932F64x
#define STAILQ_INSERT_AFTER(head,tqelm,elm,field) do { if ((STAILQ_NEXT((elm), field) = STAILQ_NEXT((tqelm), field)) == NULL) (head)->stqh_last = &STAILQ_NEXT((elm), field); STAILQ_NEXT((tqelm), field) = (elm); } while (0)
#define PROC_SELFSET_VMRSRCOWNER 3
#define MAXAUDITDATA (0x8000 - 1)
#define MACH_MSG_TYPE_PORT_ANY(x) (((x) >= MACH_MSG_TYPE_MOVE_RECEIVE) && ((x) <= MACH_MSG_TYPE_MAKE_SEND_ONCE))
#define EXPORT_SYMBOL_FLAGS_WEAK_DEFINITION 0x04
#define MH_SETUID_SAFE 0x80000
#define FSCRED ((kauth_cred_t )-1)
#define __not_tail_called 
#define PROC_TTY_ONLY 3
#define VOL_CAP_FMT_DIR_HARDLINKS 0x00040000
#define MNT_NOUSERXATTR 0x01000000
#define RTAX_IFA 5
#define TSI_S_FIN_WAIT_1 6
#define TSI_S_FIN_WAIT_2 9
#define IP_OLD_FW_GET 54
#define KERN_THREADNAME 71
#define TASK_DYLD_ALL_IMAGE_INFO_32 0
#define IPV6_ADDR_MC_FLAGS(a) ((a)->s6_addr[1] & 0xf0)
#define VOL_CAP_FMT_JOURNAL_ACTIVE 0x00000010
#define R2_HOME_THEMES R_JOIN_2_PATHS (R2_HOME_DATADIR, "cons")
#define SO_SNDTIMEO 0x1005
#define UF_TRACKED 0x00000040
#define MACH_MSG_OOL_PORTS_DESCRIPTOR 2
#define _SYS_ATTR_H_ 
#define KMOD_RETURN_FAILURE KERN_FAILURE
#define F_TRIM_ACTIVE_FILE 100
#define CPU_SUBTYPE_POWERPC_601 ((cpu_subtype_t) 1)
#define CPU_SUBTYPE_POWERPC_602 ((cpu_subtype_t) 2)
#define CPU_SUBTYPE_POWERPC_603 ((cpu_subtype_t) 3)
#define CPU_SUBTYPE_POWERPC_604 ((cpu_subtype_t) 6)
#define TASK_VM_INFO_PURGEABLE_ACCOUNT 27
#define UQUAD_MAX ULLONG_MAX
#define btoc(x) (((unsigned)(x)+(NBPG-1))>>PGSHIFT)
#define SIGTRAP 5
#define EISDIR 21
#define PROC_PIDLISTFDS 1
#define __nonnull 
#define _POSIX_THREAD_ATTR_STACKSIZE 200112L
#define PROC_PIDTHREADID64INFO 15
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10_2(x) x
#define _INTPTR_T 
#define SHUT_RDWR 2
#define KEV_DL_LINK_ON 13
#define IPPROTO_XTP 36
#define SO_NREAD 0x1020
#define O_DSYNC 0x400000
#define vm_map_MSG_COUNT 33
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_4(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_6(x) 
#define FPS_OE 0x0008
#define KERN_VERSION 4
#define __API_DEPRECATED_BEGIN_MSG_GET_MACRO(...) 
#define CPU_SUBTYPE_POWERPC_620 ((cpu_subtype_t) 8)
#define host_set_unfreed_port(host,port) (host_set_special_port((host), HOST_UNFREED_PORT, (port)))
#define NL_ARGMAX 9
#define INT_LEAST8_MAX INT8_MAX
#define CPU_TYPE_X86_64 (CPU_TYPE_X86 | CPU_ARCH_ABI64)
#define KERN_TTY 69
#define _MACH_MACHINE_VM_TYPES_H_ 
#define FPC_IC_PROJ 0x0000
#define host_get_io_master_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_IO_MASTER_PORT, (port)))
#define HOST_BASIC_INFO 1
#define LIST_FOREACH_SAFE(var,head,field,tvar) for ((var) = LIST_FIRST((head)); (var) && ((tvar) = LIST_NEXT((var), field), 1); (var) = (tvar))
#define FPS_PE 0x0020
#define TCPOPT_EOL 0
#define __FLT64_MIN_10_EXP__ (-307)
#define ARCADE_REG_NULL ((arcade_register_t) 0)
#define IPPROTO_TP 29
#define INT8_C(v) (v)
#define __has_extension(x) 0
#define MEMORY_OBJECT_BEHAVIOR_INFO 15
#define CPU_TYPE_I386 CPU_TYPE_X86
#define STAILQ_HEAD_INITIALIZER(head) { NULL, &(head).stqh_first }
#define _OS_OSBYTEORDERI386_H 
#define ULONG_MAX (LONG_MAX * 2UL + 1UL)
#define PROC_UDATA_INFO_GET 1
#define S_4BYTE_LITERALS 0x3
#define VM_REGION_BASIC_INFO 10
#define PAGE_MIN_MASK (PAGE_MIN_SIZE-1)
#define __FLT64X_DECIMAL_DIG__ 21
#define DEV_BSHIFT 9
#define IP_MSFILTER 74
#define LC_SUB_UMBRELLA 0x13
#define _MACH_MACHINE_THREAD_STATUS_H_ 
#define _SC_PAGESIZE 29
#define VM_LEDGER_TAG_GRAPHICS 0x00000004
#define __API_AVAILABLE_END 
#define P_INMEM 0
#define MACH_MSGH_BITS_DENAPHOLDASRT MACH_MSGH_BITS_IMPHOLDASRT
#define __DBL_HAS_DENORM__ 1
#define INT_LEAST32_MAX INT32_MAX
#define HW_L2CACHESIZE 20
#define _NET_NETKEV_H_ 
#define REFERENCE_FLAG_DEFINED 2
#define GETSIGSINFO_PLATFORM_BINARY 1
#define __MAC_10_11_3 101103
#define __MAC_10_11_4 101104
#define FPE_FLTSUB 6
#define NOTE_REAP ((unsigned int)eNoteReapDeprecated )
#define FPS_SF 0x0040
#define IPV6CTL_MAXFRAGPACKETS 9
#define R2_SDB_FORMAT R_JOIN_2_PATHS (R2_SDB, "format")
#define _CS_XBS5_ILP32_OFFBIG_LDFLAGS 25
#define IPV6CTL_SENDREDIRECTS 2
#define DICE_KIND_JUMP_TABLE16 0x0003
#define CHAR_BIT __CHAR_BIT__
#define __OS_AVAILABILITY(_target,_availability) 
#define MACH_RCV_TRAILER_AUDIT 3
#define _SC_XOPEN_STREAMS 114
#define PROC_RUID_ONLY 5
#define TASK_INSPECT_NULL ((task_inspect_t) 0)
#define TASK_BASE_QOS_POLICY 8
#define MH_LAZY_INIT 0x40
#define __FLT32_MIN__ 1.17549435082228750796873653722224568e-38F32
#define __UINT8_TYPE__ unsigned char
#define RTF_LOCAL 0x200000
#define _SC_BC_BASE_MAX 9
#define MACH_SEND_MSG_TOO_SMALL 0x10000008
#define IFCAP_LRO 0x00080
#define NSEC_PER_MSEC 1000000ull
#define SF_SUPPORTED 0x009f0000
#define CLD_DUMPED 3
#define __NO_INLINE__ 1
#define MACH_RCV_TRAILER_MASK ((0xf << 24))
#define FPS_UE 0x0010
#define P_DIRTY 0x00000008
#define WANT_DYLINK 1
#define KERN_UNRAGE_THREAD 4
#define DICE_KIND_JUMP_TABLE32 0x0004
#define CLOCKS_PER_SEC 1000000
#define EXC_MASK_GUARD (1 << EXC_GUARD)
#define N_ARM_THUMB_DEF 0x0008
#define LONG_LONG_MAX __LONG_LONG_MAX__
#define OSSwapLittleToHostInt(x) OSSwapLittleToHostInt32(x)
#define FPC_RC_CHOP 0x0c00
#define NOTE_ABSOLUTE 0x00000008
#define KERN_NETBOOT 40
#define MACH_MSG_GUARD_FLAGS_IMMOVABLE_RECEIVE 0x0001
#define IPCTL_STATS 12
#define _SC_TRACE 97
#define _MACH_MACHINE_VM_PARAM_H_ 
#define S_ISLNK(m) (((m) & S_IFMT) == S_IFLNK)
#define LC_LAZY_LOAD_DYLIB 0x20
#define MACH_MSG_TYPE_PORT_NONE 0
#define __RequestUnion__lock_set_subsystem__defined 
#define KIPC_NMBCLUSTERS 9
#define SOI_S_NOFDREF 0x0001
#define MAX_CANON 1024
#define NDR_PROTOCOL_2_0 0
#define R2_HOME_PLUGINS R_JOIN_2_PATHS (R2_HOME_DATADIR, "plugins")
#define OS_SWIFT_NAME(_name) 
#define VOL_CAP_FMT_64BIT_OBJECT_IDS 0x00020000
#define _MACH_VM_STATISTICS_H_ 
#define subsystem_to_name_map_processor { "processor_start", 3000 }, { "processor_exit", 3001 }, { "processor_info", 3002 }, { "processor_control", 3003 }, { "processor_assign", 3004 }, { "processor_get_assignment", 3005 }
#define errno (*__error())
#define _SC_NPROCESSORS_ONLN 58
#define _SC_TRACE_NAME_MAX 128
#define TASK_BASIC_INFO TASK_BASIC_INFO_64
#define HW_MAXID 28
#define __MAC_OS_X_VERSION_MAX_ALLOWED __MAC_11_3
#define __MAC_10_11 101100
#define __MAC_10_12 101200
#define __MAC_10_13 101300
#define __MAC_10_14 101400
#define TCPOLEN_WINDOW 3
#define __MAC_10_16 101600
#define UINT_LEAST16_MAX UINT16_MAX
#define PGOFSET (NBPG-1)
#define clrnd(i) (i)
#define PF_SYSTEM AF_SYSTEM
#define IPPROTO_APES 99
#define __used __attribute__((__used__))
#define SO_KEEPALIVE 0x0008
#define CTLFLAG_NOAUTO 0x02000000
#define __DBL_MANT_DIG__ 53
#define SRCHFS_MATCHDIRS 0x00000004
#define err_system(x) ((signed)((((unsigned)(x))&0x3f)<<26))
#define SM_PRIVATE 2
#define MACH_PORT_IMPORTANCE_RECEIVER 5
#define SLIST_FIRST(head) ((head)->slh_first)
#define _PC_CASE_SENSITIVE 11
#define _PTHREAD_RWLOCK_T 
#define R_REG_STATE_SZ MACHINE_THREAD_STATE_COUNT
#define PT_STEP 9
#define IS_DIRECT_HOSTROUTE(rt) (((rt)->rt_flags & (RTF_HOST | RTF_GATEWAY)) == RTF_HOST)
#define EV_ENABLE 0x0004
#define BADSIG SIG_ERR
#define A_GETPINFO_ADDR 28
#define _FSFILCNT_T 
#define TASK_CATEGORY_POLICY 1
#define VM_MEMORY_MALLOC_PGUARD 13
#define SV_RESETHAND SA_RESETHAND
#define FPS_ZE 0x0004
#define INT_LEAST32_MIN INT32_MIN
#define KEV_DL_AWDL_RESTRICTED 26
#define VOL_CAP_INT_ADVLOCK 0x00000100
#define MACH_VOUCHER_ATTR_KEY_NUM_WELL_KNOWN MACH_VOUCHER_ATTR_KEY_TEST
#define DST_EET 5
#define F_UNLCK 2
#define VQ_NEEDAUTH 0x0002
#define TASK_SCHED_TIMESHARE_INFO 10
#define _IN_PORT_T 
#define _STRUCT_X86_THREAD_STATE64 struct __darwin_x86_thread_state64
#define _NETINET_TCP_H_ 
#define CPUFAMILY_INTEL_SKYLAKE 0x37fc219f
#define host_set_syspolicyd_port(host,port) (host_set_special_port((host), HOST_SYSPOLICYD_PORT, (port)))
#define MH_NO_HEAP_EXECUTION 0x1000000
#define IPV6CTL_RTMAXCACHE 27
#define TASK_WAIT_STATE_INFO_COUNT ((mach_msg_type_number_t) (sizeof(task_wait_state_info_data_t) / sizeof(natural_t)))
#define EXC_I386_DIV 1
#define ENETDOWN 50
#define VM_SWAPUSAGE 5
#define MACH_PORT_TYPE_SEND_RIGHTS (MACH_PORT_TYPE_SEND|MACH_PORT_TYPE_SEND_ONCE)
#define st_mtime st_mtimespec.tv_sec
#define GET_COMM_ALIGN(n_desc) (((n_desc) >> 8) & 0x0f)
#define RTM_RESOLVE 0xb
#define TAILQ_EMPTY(head) ((head)->tqh_first == NULL)
#define __STRING(x) #x
#define NGROUPS_MAX 16
#define SIGVTALRM 26
#define KERNEL_AUDIT_TOKEN_VALUE { {0, 0, 0, 0, 0, 0, 0, 0} }
#define TCP_MAX_SACK 4
#define KERNEL_VERSION_MAX (512)
#define EBUSY 16
#define THR_ACT_NULL ((thread_act_t) 0)
#define __RequestUnion__thread_act_subsystem__defined 
#define RLIMIT_CPU 0
#define EXC_I386_INVOP 1
#define EPROCLIM 67
#define LONG_LONG_MIN (-LONG_LONG_MAX - 1LL)
#define F_NOCACHE 48
#define PSOCK 24
#define _FSID_T 
#define CTLFLAG_OID2 0x00400000
#define F_ULOCK 0
#define MACH_SEND_NOTIFY 0x00000080
#define INADDR_UNSPEC_GROUP (u_int32_t)0xe0000000
#define EXCEPTION_CODE_MAX 2
#define AF_IPX 23
#define PROCESSOR_SET_LOAD_INFO 4
#define OSWriteLittleInt32(base,byteOffset,data) _OSWriteInt32(base, byteOffset, data)
#define stoc(x) (x)
#define __LDBL_DECIMAL_DIG__ 21
#define RTV_EXPIRE 0x4
#define IOPOL_TYPE_VFS_SKIP_MTIME_UPDATE 8
#define TH_STATE_RUNNING 1
#define ATTR_CMNEXT_CLONEID 0x00000100
#define IN6_IS_ADDR_V4COMPAT(a) ((*(const __uint32_t *)(const void *)(&(a)->s6_addr[0]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[4]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[8]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[12]) != 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[12]) != ntohl(1)))
#define _SC_FSYNC 38
#define __MAC_10_12_1 101201
#define __API_DEPRECATED(...) 
#define VM_MAX_PAGE_ADDRESS ((user_addr_t) 0x00007FFFFFE00000ULL)
#define __MAC_10_12_2 101202
#define FPE_INTOVF 8
#define F_ADDFILESIGS_INFO 103
#define VM_MEMORY_SWIFT_RUNTIME 82
#define _OFF_T 
#define TASK_FLAVOR_INSPECT 2
#define CPUFAMILY_ARM_FIRESTORM_ICESTORM 0x1b588bb3
#define KEV_DL_NODE_PRESENCE 21
#define KEV_INET6_NEW_RTADV_ADDR 5
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#define MCAST_LEAVE_GROUP 81
#define _POSIX_THREAD_PROCESS_SHARED 200112L
#define R2_DATDIR_R2 R_JOIN_2_PATHS ("share", "radare2")
#define PROC_PIDTHREADID64INFO_SIZE (sizeof(struct proc_threadinfo))
#define IP_MAX_SOCK_SRC_FILTER 128
#define subsystem_to_name_map_thread_act { "thread_terminate", 3600 }, { "act_get_state", 3601 }, { "act_set_state", 3602 }, { "thread_get_state", 3603 }, { "thread_set_state", 3604 }, { "thread_suspend", 3605 }, { "thread_resume", 3606 }, { "thread_abort", 3607 }, { "thread_abort_safely", 3608 }, { "thread_depress_abort", 3609 }, { "thread_get_special_port", 3610 }, { "thread_set_special_port", 3611 }, { "thread_info", 3612 }, { "thread_set_exception_ports", 3613 }, { "thread_get_exception_ports", 3614 }, { "thread_swap_exception_ports", 3615 }, { "thread_policy", 3616 }, { "thread_policy_set", 3617 }, { "thread_policy_get", 3618 }, { "thread_sample", 3619 }, { "etap_trace_thread", 3620 }, { "thread_assign", 3621 }, { "thread_assign_default", 3622 }, { "thread_get_assignment", 3623 }, { "thread_set_policy", 3624 }, { "thread_get_mach_voucher", 3625 }, { "thread_set_mach_voucher", 3626 }, { "thread_swap_mach_voucher", 3627 }, { "thread_convert_thread_state", 3628 }, { "thread_get_exception_ports_info", 3630 }
#define _SC_SS_REPL_MAX 126
#define NOTE_DELETE 0x00000001
#define PROX_FDTYPE_PIPE 6
#define USER_RE_DUP_MAX 9
#define SIG_ATOMIC_MAX INT32_MAX
#define TASK_ACCESS_PORT 9
#define ATTR_CMN_ACCTIME 0x00001000
#define F_FREEZE_FS 53
#define FPC_RC_RD 0x0400
#define __FBSDID(s) 
#define P_TRACED 0x00000800
#define HW_PAGESIZE 7
#define FPC_RC_RN 0x0000
#define FPC_RC_RU 0x0800
#define _clock_priv_user_ 
#define CTL_USER 8
#define MH_FVMLIB 0x3
#define LIST_ENTRY(type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct { struct type *le_next; struct type **le_prev; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define A_OLDSETQCTRL 7
#define IN6_IS_ADDR_UNICAST_BASED_MULTICAST(a) (IN6_IS_ADDR_MULTICAST(a) && (IPV6_ADDR_MC_FLAGS(a) == IPV6_ADDR_MC_FLAGS_UNICAST_BASED))
#define STAILQ_INSERT_HEAD(head,elm,field) do { if ((STAILQ_NEXT((elm), field) = STAILQ_FIRST((head))) == NULL) (head)->stqh_last = &STAILQ_NEXT((elm), field); STAILQ_FIRST((head)) = (elm); } while (0)
#define AT_FDCWD -2
#define NDR_FLOAT_VAX 1
#define VM_USRSTACK64 ((user_addr_t) 0x00007FFEEFC00000ULL)
#define HOST_VM_PURGABLE 9
#define INT32_MAX 2147483647
#define LC_SEGMENT_SPLIT_INFO 0x1e
#define __INT32_C(c) c
#define bcopy(src,dest,...) __builtin___memmove_chk (dest, src, __VA_ARGS__, __darwin_obsz0 (dest))
#define LC_DYLD_INFO 0x22
#define P_NOSHLIB 0x10000000
#define _SC_THREAD_ATTR_STACKSIZE 83
#define HAVE_EXPLICIT_MEMSET 0
#define TH_STATE_WAITING 3
#define CPU_TYPE_MC98000 ((cpu_type_t) 10)
#define err_kern err_system(0x0)
#define IOPOL_MATERIALIZE_DATALESS_FILES_DEFAULT 0
#define MACH_VOUCHER_ATTR_TEST_STORE MACH_VOUCHER_ATTR_USER_DATA_STORE
#define PRIO_DARWIN_BG 0x1000
#define PROC_REGION_SHARED 2
#define KERN_OSTYPE 1
#define PF_XTP pseudo_AF_XTP
#define EXC_MASK_CRASH (1 << EXC_CRASH)
#define THREAD_NULL ((thread_t) 0)
#define ATTR_CMNEXT_RECURSIVE_GENCOUNT 0x00000400
#define CPUFAMILY_ARM_XSCALE 0x53b005f5
#define VM_MEMORY_UNSHARED_PMAP 35
#define TASK_EVENTS_INFO_COUNT ((mach_msg_type_number_t) (sizeof(task_events_info_data_t) / sizeof(natural_t)))
#define FPC_PC_24 0x0000
#define MAC_OS_X_VERSION_10_15_1 101501
#define VM_GET_FLAGS_ALIAS(flags,alias) (alias) = ((flags) & VM_FLAGS_ALIAS_MASK) >> 24
#define LIST_INIT(head) do { LIST_FIRST((head)) = NULL; } while (0)
#define TCPCI_FLAG_REORDERING_DETECTED 0x00000002
#define R2_GLOBAL_RC R_JOIN_2_PATHS (R2_DATDIR_R2, "radare2rc")
#define AUDIT_USER 0x0040
#define __OSX_UNAVAILABLE 
#define __SCHAR_WIDTH__ 8
#define OSReadLittleInt16(base,byteOffset) _OSReadInt16(base, byteOffset)
#define CPU_ARCH_ABI64_32 0x02000000
#define TH_PUSH 0x08
#define OS_WARN_RESULT __attribute__((__warn_unused_result__))
#define LIST_SWAP(head1,head2,type,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH do { struct type *swap_tmp = LIST_FIRST((head1)); LIST_FIRST((head1)) = LIST_FIRST((head2)); LIST_FIRST((head2)) = swap_tmp; if ((swap_tmp = LIST_FIRST((head1))) != NULL) swap_tmp->field.le_prev = &LIST_FIRST((head1)); if ((swap_tmp = LIST_FIRST((head2))) != NULL) swap_tmp->field.le_prev = &LIST_FIRST((head2)); } while (0) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define SECT_ICON_HEADER "__header"
#define IP_ADD_MEMBERSHIP 12
#define F_NODIRECT 62
#define __FLT32_MAX_10_EXP__ 38
#define memset(dest,...) __builtin___memset_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define TASK_HOST_PORT 2
#define MPO_CONTEXT_AS_GUARD 0x01
#define FILESEC_GUID FILESEC_UUID
#define TCPOPT_TIMESTAMP 8
#define IN_CLASSD_NSHIFT 28
#define __va_copy(d,s) __builtin_va_copy(d,s)
#define __VM_LEDGER_ACCOUNTING_POSTMARK 2019032600
#define subsystem_to_name_map_vm_map { "vm_region", 3800 }, { "vm_allocate", 3801 }, { "vm_deallocate", 3802 }, { "vm_protect", 3803 }, { "vm_inherit", 3804 }, { "vm_read", 3805 }, { "vm_read_list", 3806 }, { "vm_write", 3807 }, { "vm_copy", 3808 }, { "vm_read_overwrite", 3809 }, { "vm_msync", 3810 }, { "vm_behavior_set", 3811 }, { "vm_map", 3812 }, { "vm_machine_attribute", 3813 }, { "vm_remap", 3814 }, { "task_wire", 3815 }, { "mach_make_memory_entry", 3816 }, { "vm_map_page_query", 3817 }, { "mach_vm_region_info", 3818 }, { "vm_mapped_pages_info", 3819 }, { "vm_region_recurse", 3821 }, { "vm_region_recurse_64", 3822 }, { "mach_vm_region_info_64", 3823 }, { "vm_region_64", 3824 }, { "mach_make_memory_entry_64", 3825 }, { "vm_map_64", 3826 }, { "vm_purgable_control", 3830 }, { "vm_map_exec_lockdown", 3831 }, { "vm_remap_new", 3832 }
#define SIGSEGV 11
#define CPU_SUBTYPE_HPPA_ALL ((cpu_subtype_t) 0)
#define NET_RT_DUMP2 7
#define CPU_SUBTYPE_MC68030 ((cpu_subtype_t) 1)
#define VM_LEDGER_TAG_MAX 0x00000005
#define VM_PROT_WANTS_COPY ((vm_prot_t) 0x10)
#define CRF_MAC_ENFORCE 0x00000002
#define CMSG_DATA(cmsg) ((unsigned char *)(cmsg) + __DARWIN_ALIGN32(sizeof(struct cmsghdr)))
#define CPU_SUBTYPE_HPPA_7100 ((cpu_subtype_t) 0)
#define _SC_MESSAGE_PASSING 33
#define _SYS_TIME_H_ 
#define IOPOL_STANDARD 5
#define LOCAL_PEEREUUID 0x005
#define EVFILT_VM (-12)
#define __INT_FAST32_TYPE__ int
#define LC_MAIN (0x28|LC_REQ_DYLD)
#define IN_CLASSD_HOST 0x0fffffff
#define ifr_wake_flags ifr_ifru.ifru_wake_flags
#define bool _Bool
#define btodb(bytes,devBlockSize) ((unsigned)(bytes) / devBlockSize)
#define OSReadLittleInt32(base,byteOffset) _OSReadInt32(base, byteOffset)
#define CPU_SUBTYPE_MC68040 ((cpu_subtype_t) 2)
#define _SYS_RESOURCE_H_ 
#define TCPOPT_SIGNATURE 19
#define FPC_PC_53 0x0200
#define IOPOL_VFS_STATFS_FORCE_NO_DATA_VOLUME 1
#define S_IWGRP 0000020
#define MNT_QUOTA 0x00002000
#define LOCAL_PEERTOKEN 0x006
#define MH_NOFIXPREBINDING 0x400
#define SIG_DFL (void (*)(int))0
#define MACH_RCV_INVALID_DATA 0x10004008
#define REBASE_OPCODE_SET_TYPE_IMM 0x10
#define SIG_ATOMIC_MIN INT32_MIN
#define RTV_MTU 0x1
#define _PC_PATH_MAX 5
#define MACH_MSG_TRAILER_FORMAT_0_SIZE sizeof(mach_msg_format_0_trailer_t)
#define MACH_EVENTLINK_NULL ((mach_eventlink_t) 0)
#define PROC_REGION_SUBMAP 1
#define NOTE_ATTRIB 0x00000008
#define FPC_PC_64 0x0300
#define PAGE_MASK vm_page_mask
#define EXC_CORPSE_NOTIFY 13
#define AUDIT_TRIGGER_INITIALIZE 7
#define RTF_PRCLONING 0x10000
#define subsystem_to_name_map_processor_set { "processor_set_statistics", 4000 }, { "processor_set_destroy", 4001 }, { "processor_set_max_priority", 4002 }, { "processor_set_policy_enable", 4003 }, { "processor_set_policy_disable", 4004 }, { "processor_set_tasks", 4005 }, { "processor_set_threads", 4006 }, { "processor_set_policy_control", 4007 }, { "processor_set_stack_usage", 4008 }, { "processor_set_info", 4009 }, { "processor_set_tasks_with_flavor", 4010 }
#define MSG_SEND 0x1000
#define _INT64_T 
#define MACH_RCV_PORT_CHANGED 0x10004006
#define _POSIX_MAX_INPUT 255
#define host_get_atm_notification_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_ATM_NOTIFICATION_PORT, (port)))
#define R2_ETCDIR "/etc"
#define __DARWIN_STRUCT_STAT64 { dev_t st_dev; mode_t st_mode; nlink_t st_nlink; __darwin_ino64_t st_ino; uid_t st_uid; gid_t st_gid; dev_t st_rdev; __DARWIN_STRUCT_STAT64_TIMES off_t st_size; blkcnt_t st_blocks; blksize_t st_blksize; __uint32_t st_flags; __uint32_t st_gen; __int32_t st_lspare; __int64_t st_qspare[2]; }
#define _PC_LINK_MAX 1
#define EDOM 33
#define EXC_MASK_EMULATION (1 << EXC_EMULATION)
#define EADDRNOTAVAIL 49
#define ESHUTDOWN 58
#define ATTR_VOL_SETMASK 0x80002000
#define BIND_OPCODE_DO_BIND 0x90
#define RTM_LOCK 0x8
#define MACH_MSG_TYPE_POLYMORPHIC ((mach_msg_type_name_t) -1)
#define CPU_SUBTYPE_PENTIUM_3 CPU_SUBTYPE_INTEL(8, 0)
#define CPU_SUBTYPE_PENTIUM_4 CPU_SUBTYPE_INTEL(10, 0)
#define IOPOL_TYPE_VFS_MATERIALIZE_DATALESS_FILES 3
#define VM_MEMORY_MALLOC 1
#define host_set_host_priv_port(host,port) (KERN_INVALID_ARGUMENT)
#define MH_MAGIC 0xfeedface
#define TASK_BASE_THROUGHPUT_QOS_POLICY 11
#define CTL_NAMES { { 0, 0 }, { "kern", CTLTYPE_NODE }, { "vm", CTLTYPE_NODE }, { "vfs", CTLTYPE_NODE }, { "net", CTLTYPE_NODE }, { "debug", CTLTYPE_NODE }, { "hw", CTLTYPE_NODE }, { "machdep", CTLTYPE_NODE }, { "user", CTLTYPE_NODE }, }
#define STAILQ_LAST(head,type,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH (STAILQ_EMPTY((head)) ? NULL : ((struct type *)(void *) ((char *)((head)->stqh_last) - __offsetof(struct type, field))))__NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define CPU_SUBTYPE_PENTIUM_M CPU_SUBTYPE_INTEL(9, 0)
#define __enum_closed 
#define BAD_MACH_TIMESPEC(t) ((t)->tv_nsec < 0 || (t)->tv_nsec >= (long)NSEC_PER_SEC)
#define IN6ADDR_INTFACELOCAL_ALLNODES_INIT {{{ 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01 }}}
#define _POSIX_THREADS 200112L
#define F_ADDFILESIGS_RETURN 97
#define host_security_MSG_COUNT 2
#define PROC_DIRTY_TRACKED 0x1
#define F_SETOWN 6
#define PROC_FP_SHARED 1
#define __INT_FAST64_MAX__ 0x7fffffffffffffffLL
#define AUDIT_EXPIRE_OP_OR ((unsigned char)1)
#define __INT8_TYPE__ signed char
#define __WATCHOS_3_1 30100
#define __WATCHOS_3_2 30200
#define EXC_MASK_RESOURCE (1 << EXC_RESOURCE)
#define __FLT64X_DIG__ 18
#define MH_OBJECT 0x1
#define AF_DLI 13
#define VM_MIN_ADDRESS ((vm_offset_t) 0)
#define ICMPV6CTL_ND6_ONLINKNSRFC4861 50
#define S_16BYTE_LITERALS 0xe
#define VM_VOLATILE_GROUP_0 (0 << VM_VOLATILE_GROUP_SHIFT)
#define VM_VOLATILE_GROUP_1 (1 << VM_VOLATILE_GROUP_SHIFT)
#define _UINTMAX_T 
#define VM_VOLATILE_GROUP_4 (4 << VM_VOLATILE_GROUP_SHIFT)
#define VM_VOLATILE_GROUP_5 (5 << VM_VOLATILE_GROUP_SHIFT)
#define VM_VOLATILE_GROUP_6 (6 << VM_VOLATILE_GROUP_SHIFT)
#define VM_VOLATILE_GROUP_7 (7 << VM_VOLATILE_GROUP_SHIFT)
#define KERN_OSRELDATE 26
#define MSIZESHIFT 8
#define OS_CLOSED_ENUM(_name,_type,...) __OS_ENUM_C_FALLBACK(_name, _type, ## __VA_ARGS__) __OS_ENUM_ATTR_CLOSED
#define HOST_KEXTD_PORT (8 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define EPWROFF 82
#define FSOPT_REPORT_FULLSIZE 0x00000004
#define _SC_SAVED_IDS 7
#define __GCC_ASM_FLAG_OUTPUTS__ 1
#define _MACH_I386_VM_PARAM_H_ 
#define CPU_TYPE_SPARC ((cpu_type_t) 14)
#define VM_MEMORY_REALLOC 6
#define pseudo_AF_KEY 29
#define _SC_XOPEN_ENH_I18N 109
#define _CS_POSIX_V6_ILP32_OFF32_CFLAGS 2
#define VALID_THREAD_STATE_FLAVOR(x) ((x == x86_THREAD_STATE32) || (x == x86_FLOAT_STATE32) || (x == x86_EXCEPTION_STATE32) || (x == x86_DEBUG_STATE32) || (x == x86_THREAD_STATE64) || (x == x86_THREAD_FULL_STATE64) || (x == x86_FLOAT_STATE64) || (x == x86_EXCEPTION_STATE64) || (x == x86_DEBUG_STATE64) || (x == x86_THREAD_STATE) || (x == x86_FLOAT_STATE) || (x == x86_EXCEPTION_STATE) || (x == x86_DEBUG_STATE) || (x == x86_AVX_STATE32) || (x == x86_AVX_STATE64) || (x == x86_AVX_STATE) || (x == x86_AVX512_STATE32) || (x == x86_AVX512_STATE64) || (x == x86_AVX512_STATE) || (x == x86_PAGEIN_STATE) || (x == x86_INSTRUCTION_STATE) || (x == x86_LAST_BRANCH_STATE) || (x == THREAD_STATE_NONE))
#define MACH_SEND_INVALID_DATA 0x10000002
#define THREAD_STATE_FLAVOR_LIST_10_15 131
#define CPU_SUBTYPE_ARM_V6 ((cpu_subtype_t) 6)
#define CPU_SUBTYPE_ARM_V7 ((cpu_subtype_t) 9)
#define CPU_SUBTYPE_ARM_V8 ((cpu_subtype_t) 13)
#define __FLT128_DECIMAL_DIG__ 36
#define VQ_NEARLOWDISK 0x2000
#define S_GB_ZEROFILL 0xc
#define strcpy(dest,...) __builtin___strcpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define _SC_VERSION 8
#define MH_PREBOUND 0x10
#define SERVICE_SLOT 2
#define MNT_STRICTATIME 0x80000000
#define KEV_DL_IFCAP_CHANGED 19
#define tcp6hdr tcphdr
#define F_TLOCK 2
#define KERN_AIOTHREADS 48
#define FP_387 3
#define PROC_PIDFDPSHMINFO 5
#define _CS_POSIX_V6_WIDTH_RESTRICTED_ENVS 14
#define SECT_OBJC_REFS "__selector_refs"
#define MAXCOMLEN 16
#define __FLT_RADIX__ 2
#define SO_REUSEPORT 0x0200
#define RTF_PROTO2 0x4000
#define RTF_PROTO3 0x40000
#define _STRUCT_FP_CONTROL struct __darwin_fp_control
#define __INT_LEAST16_TYPE__ short int
#define AQ_MAXBUFSZ 1048576
#define _POSIX2_FORT_DEV (-1)
#define RTF_MODIFIED 0x20
#define __Request__host_security_subsystem__defined 
#define EDQUOT 69
#define KMOD_RETURN_SUCCESS KERN_SUCCESS
#define MEMORY_OBJECT_NULL ((memory_object_t) 0)
#define KERN_INVALID_KC 55
#define ATTR_CMN_GRPUUID 0x01000000
#define IPPROTO_SDRP 42
#define _U_INT32_T 
#define _POSIX_ARG_MAX 4096
#define IPC_VOUCHER_ATTR_MANAGER_NULL ((ipc_voucher_attr_manager_t) 0)
#define SRCHFS_MATCHPARTIALNAMES 0x00000002
#define __OS_CONCAT(x,y) x ## y
#define _POSIX_THREAD_DESTRUCTOR_ITERATIONS 4
#define CPU_SUBTYPE_586 CPU_SUBTYPE_INTEL(5, 0)
#define ATTR_DIR_VALIDMASK 0x0000003f
#define MNT_EXPORTED 0x00000100
#define REBASE_OPCODE_DONE 0x00
#define IP_FW_ZERO 43
#define IN_ZERONET(i) (((u_int32_t)(i) & 0xff000000) == 0)
#define KIPC_MAX_LINKHDR 4
#define MEMORY_OBJECT_COPY_DELAY 2
#define CPU_STATE_SYSTEM 1
#define CLOCK_MONOTONIC_RAW _CLOCK_MONOTONIC_RAW
#define PROC_PIDTBSDINFO_SIZE (sizeof(struct proc_bsdinfo))
#define IP_DEFAULT_MULTICAST_LOOP 1
#define PROC_PIDFILEPORTPIPEINFO 6
#define MSG_TRUNC 0x10
#define CPUFAMILY_ARM_VORTEX_TEMPEST 0x07d34b9f
#define EXC_I386_SGL 1
#define FPS_TOS 0x3800
#define REBASE_IMMEDIATE_MASK 0x0F
#define CLOFSET (CLSIZE*NBPG-1)
#define F_TEST 3
#define HOST_VM_INFO 2
#define _UID_T 
#define AF_NDRV 27
#define MACH_SEND_KERNEL 0x00400000
#define TCPOPT_CC 11
#define host_set_container_port(host,port) (host_set_special_port((host), HOST_CONTAINERD_PORT, (port)))
#define MIG_SERVER_ROUTINE 
#define OS_OVERLOADABLE 
#define A_SETFSIZE 26
#define PROC_FP_CLFORK 8
#define x86_THREAD_STATE 7
#define TAILQ_CHECK_PREV(elm,field) 
#define ATTR_FORK_TOTALSIZE 0x00000001
#define SPI_DEPRECATED(...) 
#define MAP_MEM_FLAGS_ALL ( MAP_MEM_FLAGS_USER)
#define task_set_task_access_port(task,port) (task_set_special_port((task), TASK_ACCESS_PORT, (port)))
#define HOST_IO_MASTER_PORT 3
#define EOVERFLOW 84
#define PERSIST_TIMEOUT 0x40
#define S_IRUSR 0000400
#define MACH_VOUCHER_SELECTOR_EFFECTIVE ((mach_voucher_selector_t)1)
#define SIGPIPE 13
#define MAP_MEM_POSTED_REORDERED 8
#define UCHAR_MAX (SCHAR_MAX * 2 + 1)
#define __SIZEOF_PTRDIFF_T__ 8
#define _SYS_SYSLIMITS_H_ 
#define __IPHONE_4_0 40000
#define mach_vm_round_page(x) (((mach_vm_offset_t)(x) + vm_page_mask) & ~((signed)vm_page_mask))
#define __IPHONE_4_2 40200
#define __IPHONE_4_3 40300
#define _PTHREAD_ONCE_T 
#define RLIMIT_CORE 4
#define CLBYTES (CLSIZE*NBPG)
#define __Request__lock_set_subsystem__defined 
#define PROC_FLAG_PPWAIT 8
#define VM_REGION_SUBMAP_INFO_V2_COUNT_64 ((mach_msg_type_number_t) (VM_REGION_SUBMAP_INFO_V2_SIZE / sizeof (natural_t)))
#define __MISMATCH_TAGS_POP 
#define NOFILE 256
#define FSOPT_NOINMEMUPDATE 0x00000002
#define OS_ALWAYS_INLINE __attribute__((__always_inline__))
#define __TVOS_AVAILABLE(_vers) 
#define CPU_TYPE_ANY ((cpu_type_t) -1)
#define PROC_PIDFILEPORTVNODEPATHINFO_SIZE PROC_PIDFDVNODEPATHINFO_SIZE
#define SO_TIMESTAMP 0x0400
#define IPV6CTL_MAXDYNROUTES 49
#define __DARWIN_64_BIT_INO_T 1
#define IP_DUMMYNET_DEL 61
#define IPPROTO_SATMON 69
#define __TVOS_14_0 140000
#define __FLT32X_MANT_DIG__ 53
#define PROC_FLAG_THCWD 0x100
#define ATTR_FILE_RSRCEXTENTS 0x00004000
#define KERN_PROC_PID 1
#define LC_DYLD_EXPORTS_TRIE (0x33 | LC_REQ_DYLD)
#define _POSIX_IPV6 200112L
#define PROC_PIDFDPIPEINFO_SIZE (sizeof(struct pipe_fdinfo))
#define SLIST_FOREACH_PREVPTR(var,varp,head,field) for ((varp) = &SLIST_FIRST((head)); ((var) = *(varp)) != NULL; (varp) = &SLIST_NEXT((var), field))
#define USER_POSIX2_C_BIND 11
#define KERN_USRSTACK32 35
#define _POSIX_SHELL 200112L
#define THREAD_TIME_CONSTRAINT_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (thread_time_constraint_policy_data_t) / sizeof (integer_t)))
#define MAXTHREADNAMESIZE 64
#define _GCC_LIMITS_H_ 
#define VOL_CAP_INT_READDIRATTR 0x00000008
#define _SC_XBS5_LPBIG_OFFBIG 125
#define IP_BLOCK_SOURCE 72
#define _POSIX2_EQUIV_CLASS_MAX 2
#define W_OK (1<<1)
#define ENODEV 19
#define __x86_64__ 1
#define OSSwapHostToLittleInt32(x) ((uint32_t)(x))
#define _POSIX2_COLL_WEIGHTS_MAX 2
#define RLIMIT_RSS RLIMIT_AS
#define MAC_OS_VERSION_11_0 110000
#define UINT_FAST32_MAX UINT32_MAX
#define __ReplyUnion__host_security_subsystem__defined 
#define O_CREAT 0x00000200
#define CPU_TYPE_ARM ((cpu_type_t) 12)
#define MIG_TRAILER_ERROR -309
#define MACH_MSG_TIMEOUT_NONE ((mach_msg_timeout_t) 0)
#define IP_RETOPTS 8
#define EPROTO 100
#define _USE_FORTIFY_LEVEL 2
#define CPU_SUBTYPE_VAX8500 ((cpu_subtype_t) 8)
#define _EXECUTE_OK (1<<11)
#define VM_MEMORY_JAVASCRIPT_JIT_EXECUTABLE_ALLOCATOR 64
#define KERN_INVALID_LEDGER 33
#define __PTHREAD_SIZE__ 8176
#define VM_MEMORY_COREGRAPHICS_MISC VM_MEMORY_COREGRAPHICS
#define INT_MAX __INT_MAX__
#define __deprecated __attribute__((__deprecated__))
#define KERN_USRSTACK64 59
#define i386_FLOAT_STATE 2
#define ULLONG_MAX (LLONG_MAX * 2ULL + 1ULL)
#define EXPORT_SYMBOL_FLAGS_KIND_THREAD_LOCAL 0x01
#define OID_AUTO (-1)
#define POLL_OUT 2
#define VQ_NOTRESP 0x0001
#define MH_DYLIB_IN_CACHE 0x80000000
#define _POSIX_MONOTONIC_CLOCK (-1)
#define _SC_TRACE_EVENT_FILTER 98
#define MACH_MSG_TYPE_PORT_NAME 15
#define _SC_2_PBS_ACCOUNTING 60
#define MIG_REPLY_MISMATCH -301
#define _SC_XBS5_LP64_OFF64 124
#define MAP_MEM_FLAGS_USER ( MAP_MEM_PURGABLE_KERNEL_ONLY | MAP_MEM_GRAB_SECLUDED | MAP_MEM_ONLY | MAP_MEM_NAMED_CREATE | MAP_MEM_PURGABLE | MAP_MEM_NAMED_REUSE | MAP_MEM_USE_DATA_ADDR | MAP_MEM_VM_COPY | MAP_MEM_VM_SHARE | MAP_MEM_LEDGER_TAGGED | MAP_MEM_4K_DATA_ADDR)
#define PTHREAD_DESTRUCTOR_ITERATIONS 4
#define __UINT_FAST32_MAX__ 0xffffffffU
#define PROC_FLAG_PA_SUSP 0x1000
#define VM_SYNC_INVALIDATE ((vm_sync_t) 0x04)
#define MINSIGSTKSZ 32768
#define MACH_SEND_INVALID_TRAILER 0x10000011
#define __API_DEPRECATED_WITH_REPLACEMENT_END 
#define FP_RND_UP 2
#define VM_USRSTACK32 ((vm_offset_t) 0xC0000000)
#define KPI_KERN_CONTROL_H 
#define THREAD_STATE_FLAVOR_LIST_NEW 128
#define __FLT_HAS_QUIET_NAN__ 1
#define IP_RECVOPTS 5
#define _SC_THREAD_ATTR_STACKADDR 82
#define _POSIX_TRACE_INHERIT (-1)
#define __FLT_MAX_10_EXP__ 38
#define PT_KILL 8
#define MH_MAGIC_64 0xfeedfacf
#define A_SETPMASK 25
#define _mach_port_user_ 
#define LC_RPATH (0x1c | LC_REQ_DYLD)
#define CLOCK_UPTIME_RAW_APPROX _CLOCK_UPTIME_RAW_APPROX
#define PF_CHAOS AF_CHAOS
#define VM_FLAGS_RANDOM_ADDR 0x0008
#define IP_MULTICAST_TTL 10
#define _PC_SYNC_IO 25
#define __dead2 __attribute__((__noreturn__))
#define va_copy(d,s) __builtin_va_copy(d,s)
#define _XOPEN_SHM (1)
#define _SC_SEM_NSEMS_MAX 49
#define HAVE_GPERF 1
#define __FLT_HAS_INFINITY__ 1
#define TAILQ_INIT(head) do { TAILQ_FIRST((head)) = NULL; (head)->tqh_last = &TAILQ_FIRST((head)); QMD_TRACE_HEAD(head); } while (0)
#define ENODATA 96
#define _SS_MAXSIZE 128
#define SO_SNDBUF 0x1001
#define __MAC_10_10_3 101003
#define __ENABLE_LEGACY_MAC_AVAILABILITY 1
#define HOST_VM_INFO64_REV0_COUNT ((mach_msg_type_number_t) (HOST_VM_INFO64_REV1_COUNT - 14))
#define IPV6_DEFAULT_MULTICAST_HOPS 1
#define MATTR_REPLICATE 4
#define S_IFSOCK 0140000
#define MEMORY_OBJECT_RETURN_ANYTHING 3
#define _I386_LIMITS_H_ 
#define TAILQ_SWAP(head1,head2,type,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH do { struct type *swap_first = (head1)->tqh_first; struct type **swap_last = (head1)->tqh_last; (head1)->tqh_first = (head2)->tqh_first; (head1)->tqh_last = (head2)->tqh_last; (head2)->tqh_first = swap_first; (head2)->tqh_last = swap_last; if ((swap_first = (head1)->tqh_first) != NULL) swap_first->field.tqe_prev = &(head1)->tqh_first; else (head1)->tqh_last = &(head1)->tqh_first; if ((swap_first = (head2)->tqh_first) != NULL) swap_first->field.tqe_prev = &(head2)->tqh_first; else (head2)->tqh_last = &(head2)->tqh_first; } while (0) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define PROC_FLAG_CTTY 0x40
#define P_DIRTY_BUSY 0x00000040
#define MACH_MSG_TYPE_MOVE_SEND_ONCE 18
#define IPPROTO_MEAS 19
#define MCAST_JOIN_SOURCE_GROUP 82
#define MACH_VOUCHER_ATTR_KEY_BANK ((mach_voucher_attr_key_t)3)
#define VM_REGION_SUBMAP_SHORT_INFO_COUNT_64 ((mach_msg_type_number_t) (sizeof (vm_region_submap_short_info_data_64_t) / sizeof (natural_t)))
#define SOI_S_ISDISCONNECTING 0x0008
#define _processor_set_user_ 
#define __exported_pop _Pragma("GCC visibility pop")
#define VQ_VERYLOWDISK 0x0200
#define USER_POSIX2_CHAR_TERM 13
#define MACH_MSG_SUCCESS 0x00000000
#define MACH_VOUCHER_ATTR_SEND_PREPROCESS ((mach_voucher_attr_recipe_command_t)5)
#define VM_PURGABLE_NO_AGING_MASK (0x1 << VM_PURGABLE_NO_AGING_SHIFT)
#define __INT_FAST32_WIDTH__ 32
#define __IPHONE_12_0 120000
#define __IPHONE_12_1 120100
#define __IPHONE_12_2 120200
#define __IPHONE_12_3 120300
#define __IPHONE_12_4 120400
#define TCP_KEEPALIVE 0x10
#define NULL __DARWIN_NULL
#define IPV6CTL_AUTO_LINKLOCAL 35
#define _POSIX2_CHARCLASS_NAME_MAX 14
#define SO_DEBUG 0x0001
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_3(x) 
#define _POSIX_SEM_NSEMS_MAX 256
#define PROC_FLAG_PC_KILL 0x600
#define OS_SWIFT_UNAVAILABLE(_msg) 
#define E2BIG 7
#define PROCESSOR_TEMPERATURE 0x10000002
#define BIG_ENDIAN __DARWIN_BIG_ENDIAN
#define CPU_SUBTYPE_MC88100 ((cpu_subtype_t) 1)
#define _MACH_VM_PURGABLE_H_ 
#define AUDIT_TRIGGER_MIN 1
#define _SC_2_LOCALEDEF 23
#define API_DEPRECATED_WITH_REPLACEMENT(...) 
#define PROC_PIDFDVNODEINFO 1
#define EXC_MASK_MACH_SYSCALL (1 << EXC_MACH_SYSCALL)
#define VM_PROT_EXECUTE_ONLY (VM_PROT_EXECUTE|VM_PROT_STRIP_READ)
#define TAILQ_CONCAT(head1,head2,field) do { if (!TAILQ_EMPTY(head2)) { *(head1)->tqh_last = (head2)->tqh_first; (head2)->tqh_first->field.tqe_prev = (head1)->tqh_last; (head1)->tqh_last = (head2)->tqh_last; TAILQ_INIT((head2)); QMD_TRACE_HEAD(head1); QMD_TRACE_HEAD(head2); } } while (0)
#define INT_MIN (-INT_MAX - 1)
#define HW_USERMEM 6
#define CPU_SUBTYPE_MC88110 ((cpu_subtype_t) 2)
#define KERN_INVALID_TASK 16
#define _STRUCT_FP_STATUS struct __darwin_fp_status
#define EXC_I386_NOEXTFLT 7
#define TCP_SENDMOREACKS 0x103
#define __OS_STRINGIFY(s) #s
#define _CS_XBS5_ILP32_OFF32_LDFLAGS 21
#define x86_EXCEPTION_STATE64_COUNT ((mach_msg_type_number_t) ( sizeof (x86_exception_state64_t) / sizeof (int) ))
#define __UINT_LEAST32_MAX__ 0xffffffffU
#define _STRUCT_MCONTEXT32 struct __darwin_mcontext32
#define CPU_SUBTYPE_MIPS_R2600 ((cpu_subtype_t) 2)
#define PROC_DIRTYCONTROL_GET 3
#define _PC_REC_XFER_ALIGN 23
#define KERN_RPC_TERMINATE_ORPHAN 44
#define IPPROTO_HOPOPTS 0
#define OSSwapInt16(x) __DARWIN_OSSwapInt16(x)
#define BIND_SPECIAL_DYLIB_FLAT_LOOKUP -2
#define CPU_SUBTYPE_POWERPC_603ev ((cpu_subtype_t) 5)
#define F_SETSIZE 43
#define _SC_MEMORY_PROTECTION 32
#define EXC_I386_EXTERRFLT 16
#define IP_DUMMYNET_CONFIGURE 60
#define MACH_MSG_OOL_VOLATILE_DESCRIPTOR 3
#define TF_LP64 0x00000001
#define ICMP6_FILTER 18
#define VM_PURGABLE_ORDERING_NORMAL (0 << VM_PURGABLE_ORDERING_SHIFT)
#define PT_WRITE_D 5
#define __INT_LEAST8_TYPE__ signed char
#define KEV_INET6_SUBCLASS 6
#define __RequestUnion__processor_subsystem__defined 
#define IPV6CTL_STATS 6
#define KERN_KDREADTR 10
#define __darwin_obsz0(object) __builtin_object_size (object, 0)
#define N_PBUD 0xc
#define __STDC_VERSION__ 201710L
#define SOL_LOCAL 0
#define USER_DATA_SELECTOR 0x001f
#define VM_MEMORY_OBJC_DISPATCHERS 34
#define MACH_MSG_PORT_DESCRIPTOR 0
#define PF_NETBIOS AF_NETBIOS
#define R_REG_STATE_T MACHINE_THREAD_STATE
#define _STRINGS_H_ 
#define _FSOBJ_ID_T 
#define SO_PEERLABEL 0x1011
#define OSSwapInt32(x) __DARWIN_OSSwapInt32(x)
#define PLOCK 36
#define MPG_FLAGS_STRICT_REPLY_INVALID_VOUCHER (0x04ull << 56)
#define VM_MEMORY_GLSL 66
#define API_TO_BE_DEPRECATED 100000
#define POLICY_FIFO_INFO_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_fifo_info)/sizeof(integer_t)))
#define x86_FLOAT_STATE64_COUNT ((mach_msg_type_number_t) (sizeof(x86_float_state64_t)/sizeof(unsigned int)))
#define UINTMAX_C(v) (v ## UL)
#define KERN_ARGMAX 8
#define __SIZEOF_POINTER__ 8
#define PROC_ALL_PIDS 1
#define IFF_LOOPBACK 0x8
#define __POSIX_C_DEPRECATED(ver) ___POSIX_C_DEPRECATED_STARTING_ ##ver
#define MACH_SEND_MSG 0x00000001
#define IPV6_2292RTHDR 24
#define KERN_FILE 15
#define RTM_IFINFO 0xe
#define KERN_KDDFLAGS 2
#define ECONNRESET 54
#define IOPOL_NORMAL IOPOL_IMPORTANT
#define DST_MET 4
#define P_AFFINITY 0x00010000
#define VM_SYNC_KILLPAGES ((vm_sync_t) 0x08)
#define AUDIT_TRIGGER_NO_SPACE 5
#define EBADMACHO 88
#define X86_INSTRUCTION_STATE_COUNT x86_INSTRUCTION_STATE_COUNT
#define IPV6_ADDR_MC_FLAGS_PREFIX 0x20
#define PROC_DIRTY_ALLOW_IDLE_EXIT 0x2
#define FPC_DE 0x0002
#define S_THREAD_LOCAL_VARIABLES 0x13
#define FPC_DM FPC_DE
#define SIGSTOP 17
#define ENXIO 6
#define __TVOS_13_3 130300
#define __TVOS_13_4 130400
#define _SC_THREAD_CPUTIME 84
#define _PC_EXTENDED_SECURITY_NP 13
#define CLOCK_MONOTONIC _CLOCK_MONOTONIC
#define ATTR_CMN_BKUPTIME 0x00002000
#define OS_EXPORT extern __attribute__((__visibility__("default")))
#define TASK_VM_INFO 22
#define NET_SERVICE_TYPE_OAM 7
#define x86_AVX_STATE32_COUNT ((mach_msg_type_number_t) (sizeof(x86_avx_state32_t)/sizeof(unsigned int)))
#define OSSwapInt64(x) __DARWIN_OSSwapInt64(x)
#define VOL_CAP_FMT_CASE_PRESERVING 0x00000200
#define VM_MEMORY_LAYERKIT 51
#define __FLT64_HAS_QUIET_NAN__ 1
#define IPV6_FW_ZERO 33
#define PDROP 0x400
#define ATTR_CMN_CHGTIME 0x00000800
#define SLIST_INIT(head) do { SLIST_FIRST((head)) = NULL; } while (0)
#define VFS_CTL_SADDR 0x00010007
#define subsystem_to_name_map_lock_set { "lock_acquire", 617000 }, { "lock_release", 617001 }, { "lock_try", 617002 }, { "lock_make_stable", 617003 }, { "lock_handoff", 617004 }, { "lock_handoff_accept", 617005 }
#define TASK_SUPPRESSION_POLICY 3
#define _MACH_MACHINE_THREAD_STATE_H_ 
#define X86_DEBUG_STATE32_COUNT x86_DEBUG_STATE32_COUNT
#define RLIMIT_FOOTPRINT_INTERVAL 0x4
#define KMOD_INFO_NAME kmod_info
#define EXC_SOFTWARE 5
#define RTF_UP 0x1
#define INET6_ADDRSTRLEN 46
#define MACH_PORT_QLIMIT_LARGE (1024)
#define IPPROTO_WBEXPAK 79
#define MACH_MSG_PRIORITY_UNSPECIFIED (mach_msg_priority_t) 0
#define ___POSIX_C_DEPRECATED_STARTING_199209L 
#define KEV_DL_LINK_OFF 12
#define MACH_RCV_TIMEOUT 0x00000100
#define IPV6CTL_ACCEPT_RTADV 12
#define RTF_CLONING 0x100
#define O_ALERT 0x20000000
#define SOCK_MAXADDRLEN 255
#define KEV_DL_IF_DETACHED 11
#define SM_SHARED 4
#define S_8BYTE_LITERALS 0x4
#define __MAC_10_11_2 101102
#define IFCAP_JUMBO_MTU 0x00010
#define TTCP_CLIENT_SND_WND 4096
#define TCPCI_OPT_ECN 0x00000008
#define KERN_ABORTED 14
#define VM_LEDGER_FLAGS (VM_LEDGER_FLAG_NO_FOOTPRINT)
#define __LDBL_MANT_DIG__ 64
#define TASK_FLAVOR_CONTROL 0
#define IPPORT_HILASTAUTO 65535
#define HOST_MAX_SPECIAL_KERNEL_PORT 7
#define RTF_STATIC 0x800
#define BIND_OPCODE_DO_BIND_ADD_ADDR_ULEB 0xA0
#define FPC_IC 0x1000
#define FPC_IE 0x0001
#define TASK_VM_INFO_PURGEABLE 23
#define HOST_AUTOMOUNTD_PORT (4 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define LC_LINKER_OPTION 0x2D
#define _V6_LPBIG_OFFBIG __LPBIG_OFFBIG
#define MACH_PORT_QLIMIT_DEFAULT MACH_PORT_QLIMIT_BASIC
#define S_ISTXT S_ISVTX
#define __DARWIN_ONLY_64_BIT_INO_T 0
#define IFRTYPE_FUNCTIONAL_UNKNOWN 0
#define __FLT64_HAS_INFINITY__ 1
#define MEMORY_OBJECT_RETURN_ALL 2
#define host_get_closured_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_CLOSURED_PORT, (port)))
#define _MACH_MEMORY_OBJECT_TYPES_H_ 
#define _SC_BC_DIM_MAX 10
#define MACH_MSG_GUARD_FLAGS_UNGUARDED_ON_SEND 0x0002
#define SET_COMM_ALIGN(n_desc,align) (n_desc) = (((n_desc) & 0xf0ff) | (((align) & 0x0f) << 8))
#define false 0
#define IPV6_JOIN_GROUP 12
#define POLL_HUP 6
#define A_SETKAUDIT 30
#define __ReplyUnion__vm_map_subsystem__defined 
#define _SYS_UCRED_H_ 
#define ifr_curcap ifr_ifru.ifru_cap[1]
#define TSI_T_PERSIST 1
#define __GNUC_VA_LIST 
#define AU_DEFAUDITSID 0
#define MAP_MEM_VM_SHARE 0x400000
#define SECT_FVMLIB_INIT0 "__fvmlib_init0"
#define SECT_FVMLIB_INIT1 "__fvmlib_init1"
#define MACH_RCV_TOO_LARGE 0x10004004
#define RLIMIT_NOFILE 8
#define MACH_PORT_TYPE_PORT_SET MACH_PORT_TYPE(MACH_PORT_RIGHT_PORT_SET)
#define WSTOPPED 0x00000008
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_3(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_4(x) x
#define _STRUCT_X86_PAGEIN_STATE struct __x86_pagein_state
#define __OSX_EXTENSION_UNAVAILABLE(_msg) 
#define AF_LAT 14
#define ATTR_FILE_VALIDMASK 0x000037FF
#define PROC_PID_RUSAGE_SIZE 0
#define THREAD_MAX_SPECIAL_PORT THREAD_READ_PORT
#define MEMORY_OBJECT_TERMINATE_IDLE 0x1
#define AUDIT_AHLT 0x0002
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_5(x) 
#define x86_FLOAT_STATE 8
#define CTL_VFS_NAMES { { "vfsconf", CTLTYPE_STRUCT } }
#define SM_LARGE_PAGE 8
#define MEMORY_OBJECT_ATTRIBUTE_INFO 14
#define OS_INLINE static __inline__
#define OS_ALIGNED(n) __attribute__((__aligned__((n))))
#define SONPX_SETOPTSHUT 0x000000001
#define __DARWIN_OSSwapInt32(x) (__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt32(x) : _OSSwapInt32(x))
#define A_OLDGETQCTRL 6
#define IPPROTO_RAW 255
#define __k8__ 1
#define IP_DROP_SOURCE_MEMBERSHIP 71
#define IPCTL_KEEPFAITH 15
#define CTL_UNSPEC 0
#define sub_emask (err_sub(0xfff))
#define TASK_POWER_INFO 21
#define MACH_RCV_HEADER_ERROR 0x1000400b
#define _SYS__PTHREAD_TYPES_H_ 
#define IPCTL_RTMINEXPIRE 6
#define NOTE_EXITSTATUS 0x04000000
#define NBBY __DARWIN_NBBY
#define SRCHFS_NEGATEPARAMS 0x80000000
#define FALSE 0
#define HW_L1DCACHESIZE 18
#define VOL_CAPABILITIES_RESERVED2 3
#define IFRTYPE_FUNCTIONAL_LAST 7
#define _POSIX_MEMLOCK_RANGE (-1)
#define VM_MEMORY_CM_MEMORYPOOL 94
#define __LP64__ 1
#define MAP_MEM_LEDGER_TAGGED 0x002000
#define IPPROTO_ICMP 1
#define S_IEXEC S_IXUSR
#define P_LP64 0x00000004
#define __API_DEPRECATED_END 
#define IPV6CTL_PREFER_TEMPADDR 37
#define NOTE_FFOR 0x80000000
#define EXC_I386_INTOFLT 4
#define __UINTPTR_MAX__ 0xffffffffffffffffUL
#define MNT_CMDFLAGS (MNT_UPDATE|MNT_NOBLOCK|MNT_RELOAD|MNT_FORCE)
#define __INT_FAST64_WIDTH__ 64
#define __volatile volatile
#define p_forw p_un.p_st1.__p_forw
#define FPC_OE 0x0008
#define MAX_TCPOPTLEN 40
#define __IPV6_ADDR_SCOPE_LINKLOCAL 0x02
#define CPU_SUBTYPE_POWERPC_750 ((cpu_subtype_t) 9)
#define FPC_OM FPC_OE
#define SIGALRM 14
#define OSWriteLittleInt64(base,byteOffset,data) _OSWriteInt64(base, byteOffset, data)
#define ATTR_VOL_ATTRIBUTES 0x40000000
#define IPPROTO_RDP 27
#define VM_MEMORY_GENEALOGY 78
#define __DARWIN_OSSwapInt64(x) (__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt64(x) : _OSSwapInt64(x))
#define INT_LEAST64_MIN INT64_MIN
#define SI_ASYNCIO 0x10004
#define OSSwapHostToBigInt16(x) OSSwapInt16(x)
#define PRIO_DARWIN_NONUI 0x1001
#define VM_MEMORY_MALLOC_LARGE_REUSABLE 8
#define __MAC_10_12_4 101204
#define _CLOCK_T 
#define MAP_MEM_NAMED_REUSE 0x080000
#define IOPOL_VFS_SKIP_MTIME_UPDATE_OFF 0
#define IPPROTO_CHAOS 16
#define KEV_INET_SIFDSTADDR 4
#define FPC_PC 0x0300
#define FPC_PE 0x0020
#define ATTR_CMN_UUID 0x00800000
#define ETIME 101
#define NOTE_PDATAMASK 0x000fffff
#define KERN_MAXID 72
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define VM_MEMORY_ROSETTA_THREAD_CONTEXT 231
#define __FLT_DIG__ 6
#define REG_PC ((dbg->bits == R_SYS_BITS_64) ? 16 : 10)
#define __FLT_NORM_MAX__ 3.40282346638528859811704183484516925e+38F
#define HOST_FILECOORDINATIOND_PORT (23 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define KEV_INET6_NEW_USER_ADDR 1
#define INT_FAST32_MAX INT32_MAX
#define PROC_PIDLISTFILEPORTS_SIZE (sizeof(struct proc_fileportinfo))
#define _SYS_EVENT_H_ 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_2(x) 
#define OSSwapHostToBigInt32(x) OSSwapInt32(x)
#define __FLT64X_MAX_EXP__ 16384
#define MH_EXECUTE 0x2
#define __UINT_FAST64_TYPE__ long long unsigned int
#define _OS__OSBYTEORDER_H 
#define MACH_VM_MIN_ADDRESS ((mach_vm_offset_t) 0)
#define IPV6_RTHDR_LOOSE 0
#define EXC_BAD_ACCESS 1
#define FPC_RC 0x0c00
#define MACH_SEND_INVALID_MEMORY 0x1000000c
#define OSReadBigInt(x,y) OSReadBigInt32(x, y)
#define _STRUCT_MCONTEXT_AVX512_32 struct __darwin_mcontext_avx512_32
#define PROC_DIRTYCONTROL_TRACK 1
#define VM_MEMORY_COREGRAPHICS_XALLOC 58
#define __DARWIN_STRUCT_STAT64_TIMES struct timespec st_atimespec; struct timespec st_mtimespec; struct timespec st_ctimespec; struct timespec st_birthtimespec;
#define UINT_FAST8_MAX UINT8_MAX
#define _LIBPROC_H_ 
#define VM_MEMORY_MALLOC_SMALL 2
#define __INT_MAX__ 0x7fffffff
#define S_IXUSR 0000100
#define KERNEL_SECURITY_TOKEN_VALUE { {0, 1} }
#define F_GETFD 1
#define KERN_EXEC 45
#define PPNUM_MAX UINT32_MAX
#define STDIN_FILENO 0
#define S_ATTR_NO_DEAD_STRIP 0x10000000
#define UINT8_MAX 255
#define SRCHFS_START 0x00000001
#define S_ZEROFILL 0x1
#define IPV6CTL_MAXIFDEFROUTERS 48
#define FREAD 0x00000001
#define HOST_SECURITY_PORT 0
#define R2_HOME_HUD R_JOIN_2_PATHS (R2_HOME_DATADIR, "hud")
#define _POSIX_CLOCKRES_MIN 20000000
#define OSSwapHostToBigInt64(x) OSSwapInt64(x)
#define TASK_SECURITY_TOKEN 13
#define NOTE_FUNLOCK 0x00000100
#define R2_SDB R_JOIN_3_PATHS ("share", "radare2", R2_VERSION)
#define PROC_PID_RUSAGE 16
#define MACH_RCV_SYNC_WAIT 0x00004000
#define LLONG_MAX __LONG_LONG_MAX__
#define PF_CNT AF_CNT
#define ENOTRECOVERABLE 104
#define HAVE_EXPLICIT_BZERO 0
#define FIRST_EXCEPTION 1
#define IFCAP_CSUM_PARTIAL 0x02000
#define VM_MEMORY_ACCOUNTS 98
#define SYNC_POLICY_FIFO 0x0
#define _STRUCT_MCONTEXT_AVX512_64 struct __darwin_mcontext_avx512_64
#define AUDIT_SEQ 0x0010
#define SG_PROTECTED_VERSION_1 0x8
#define stpcpy(dest,...) __builtin___stpcpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define IFF_PROMISC 0x100
#define __INT64_TYPE__ long long int
#define EIO 5
#define A_SETSTAT 13
#define MNT_NOEXEC 0x00000004
#define CLOCK_PROCESS_CPUTIME_ID _CLOCK_PROCESS_CPUTIME_ID
#define SOI_S_RCVATMARK 0x0040
#define round_page_kernel(x) trunc_page_kernel((x) + vm_kernel_page_mask)
#define A_SENDTRIGGER 31
#define EXDEV 18
#define HOST_RESOURCE_SIZES 4
#define BSD4_3 1
#define _SC_ADVISORY_INFO 65
#define IPV6PORT_ANONMAX 65535
#define S_IRGRP 0000040
#define UINT32_C(v) (v ## U)
#define CMP_MACH_TIMESPEC(t1,t2) ((t1)->tv_sec > (t2)->tv_sec ? (long) +NSEC_PER_SEC : ((t1)->tv_sec < (t2)->tv_sec ? (long) -NSEC_PER_SEC : (t1)->tv_nsec - (t2)->tv_nsec))
#define ATTR_CMN_GEN_COUNT 0x00080000
#define _task_user_ 
#define __DBL_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define AU_IPv4 4
#define AU_IPv6 16
#define EXC_MASK_RPC_ALERT (1 << EXC_RPC_ALERT)
#define CPUFAMILY_INTEL_NEHALEM 0x6b5a4cd2
#define RTF_XRESOLVE 0x200
#define _POSIX_V6_ILP32_OFF32 __ILP32_OFF32
#define MNT_CPROTECT 0x00000080
#define PROC_FLAG_PSUGID 0x2000
#define ATTR_FORK_SETMASK 0x00000000
#define VFS_CTL_DISC 0x00010008
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define host_set_iocompressionstats_port(host,port) (host_set_special_port((host), HOST_IOCOMPRESSIONSTATS_PORT, (port)))
#define VM_PROT_NONE ((vm_prot_t) 0x00)
#define _POSIX_TRACE (-1)
#define MACH_VOUCHER_ATTR_KEY_USER_DATA ((mach_voucher_attr_key_t)7)
#define _MACHO_LOADER_H_ 
#define F_FULLFSYNC 51
#define BIND_SPECIAL_DYLIB_WEAK_LOOKUP -3
#define F_TRANSCODEKEY 75
#define INT_FAST32_MIN INT32_MIN
#define S_INIT_FUNC_OFFSETS 0x16
#define ATTR_CMN_NAME 0x00000001
#define __Reply__lock_set_subsystem__defined 
#define __WINT_TYPE__ int
#define MB_LEN_MAX 6
#define ATTR_CMNEXT_PRIVATESIZE 0x00000008
#define MNT_SYNCHRONOUS 0x00000002
#define __FLT32_NORM_MAX__ 3.40282346638528859811704183484516925e+38F32
#define HOST_UNFREED_PORT (10 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define CPU_SUBTYPE_I860_860 ((cpu_subtype_t) 1)
#define TASK_BASIC_INFO_32_COUNT (sizeof(task_basic_info_32_data_t) / sizeof(natural_t))
#define VM_MEMORY_ROSETTA_INDIRECT_BRANCH_MAP 232
#define EXC_MASK_SOFTWARE (1 << EXC_SOFTWARE)
#define MACH_VOUCHER_ATTR_KEY_NONE ((mach_voucher_attr_key_t)0)
#define _SC_GETPW_R_SIZE_MAX 71
#define P_DIRTY_DEFER 0x00000004
#define _STRUCT_X86_AVX512_STATE64 struct __darwin_x86_avx512_state64
#define FPC_ZE 0x0004
#define AF_HYLINK 15
#define FPC_ZM FPC_ZE
#define MH_SPLIT_SEGS 0x20
#define HOST_SEMAPHORE_TRAPS 7
#define EXC_MASK_ALL (EXC_MASK_BAD_ACCESS | EXC_MASK_BAD_INSTRUCTION | EXC_MASK_ARITHMETIC | EXC_MASK_EMULATION | EXC_MASK_SOFTWARE | EXC_MASK_BREAKPOINT | EXC_MASK_SYSCALL | EXC_MASK_MACH_SYSCALL | EXC_MASK_RPC_ALERT | EXC_MASK_RESOURCE | EXC_MASK_GUARD | EXC_MASK_MACHINE)
#define P_DISABLE_ASLR 0x00001000
#define BC_DIM_MAX 2048
#define IMAGE_OFFSET 0x2000
#define CTL_DEBUG_VALUE 1
#define NOTE_LOWAT 0x00000001
#define isset(a,i) (((unsigned char *)(a))[(i)/NBBY] & (1u<<((i)%NBBY)))
#define __DARWIN_C_FULL 900000L
#define STAILQ_EMPTY(head) ((head)->stqh_first == NULL)
#define FOOTPRINT_INTERVAL_RESET 0x1
#define EXPORT_SYMBOL_FLAGS_REEXPORT 0x08
#define LC_CODE_SIGNATURE 0x1d
#define IP_OLD_FW_ADD 50
#define unix_err(errno) (err_kern|err_sub(3)|errno)
#define __Reply__processor_subsystem__defined 
#define MH_PIE 0x200000
#define MACH_EXCEPTION_CODES 0x80000000
#define _MACH_DYLIB_INFO_H_ 
#define IPCTL_ACCEPTSOURCEROUTE 13
#define ENOEXEC 8
#define KERN_MAXPROCPERUID 30
#define FPE_NOOP 0
#define TASK_VM_INFO_REV4_COUNT ((mach_msg_type_number_t) (TASK_VM_INFO_REV5_COUNT - 1))
#define NOTE_VM_PRESSURE 0x80000000
#define IOPOL_VFS_SKIP_MTIME_UPDATE_ON 1
#define AQ_HIWATER 100
#define SO_RCVBUF 0x1002
#define _POSIX2_PBS_MESSAGE (-1)
#define RLIMIT_CPU_USAGE_MONITOR 0x2
#define VM_MEMORY_DYLD_MALLOC 61
#define LLONG_MIN (-LLONG_MAX - 1LL)
#define host_set_lockd_port(host,port) (host_set_special_port((host), HOST_LOCKD_PORT, (port)))
#define S_ISREG(m) (((m) & S_IFMT) == S_IFREG)
#define MACH_PORT_RIGHT_RECEIVE ((mach_port_right_t) 1)
#define _MACH_MACHINE__STRUCTS_H_ 
#define MNT_AUTOMOUNTED 0x00400000
#define PF_RTIP pseudo_AF_RTIP
#define ATTR_FILE_DATAALLOCSIZE 0x00000400
#define CTLTYPE_STRUCT CTLTYPE_OPAQUE
#define SEG_IMPORT "__IMPORT"
#define CALENDAR_CLOCK 1
#define SV_ONSTACK SA_ONSTACK
#define SIGTSTP 18
#define IFRTYPE_FUNCTIONAL_CELLULAR 5
#define KERN_RPC_CONTINUE_ORPHAN 45
#define __SIZEOF_INT128__ 16
#define VM_MEMORY_CM_XPC 92
#define __ReplyUnion__mach_port_subsystem__defined 
#define NDR_FLOAT_IEEE 0
#define _MACH_CLOCK_TYPES_H_ 
#define AUDIT_ZONENAME 0x1000
#define EXC_I386_INVTSSFLT 10
#define RTF_BLACKHOLE 0x1000
#define __ReplyUnion__task_subsystem__defined 
#define TCP_MAXWIN 65535
#define __LDBL_MAX_10_EXP__ 4932
#define TASK_POWER_INFO_V2_COUNT_OLD ((mach_msg_type_number_t) (sizeof (task_power_info_v2_data_t) - sizeof(uint64_t)*2) / sizeof (natural_t))
#define RTAX_BRD 7
#define _POSIX_SEMAPHORES (-1)
#define __ATOMIC_RELAXED 0
#define _STRUCT_XMM_REG struct __darwin_xmm_reg
#define RLIMIT_FSIZE 1
#define ctob(x) ((x)<<PGSHIFT)
#define VM_MEMORY_MALLOC_NANO 11
#define ctod(x) ((x)<<(PGSHIFT-DEV_BSHIFT))
#define P_DIRTY_TERMINATED 0x00000020
#define OS_CONCAT(x,y) __OS_CONCAT(x, y)
#define __DBL_EPSILON__ ((double)2.22044604925031308084726333618164062e-16L)
#define KEV_DL_LINK_ADDRESS_CHANGED 16
#define ctos(x) (x)
#define L_SET SEEK_SET
#define IPV6PORT_ANONMIN 49152
#define MCLBYTES (1 << MCLSHIFT)
#define MNT_REMOVABLE 0x00000200
#define R2_ZIGNS R_JOIN_4_PATHS ("share", "radare2", R2_VERSION, "zigns")
#define BC_SCALE_MAX 99
#define RTF_GATEWAY 0x2
#define IOPOL_SCOPE_THREAD 1
#define _PTHREAD_ATTR_T 
#define _SYS__SELECT_H_ 
#define ATTR_VOL_RESERVED_SIZE 0x20000000
#define ENOSTR 99
#define KERN_KDWRITEMAP_V3 27
#define MACH_MSG_TYPE_LAST 22
#define KERN_POLICY_LIMIT 27
#define SLIST_REMOVE_AFTER(elm,field) do { SLIST_NEXT(elm, field) = SLIST_NEXT(SLIST_NEXT(elm, field), field); } while (0)
#define OSSwapHostToBigConstInt16(x) OSSwapConstInt16(x)
#define P_CHECKOPENEVT 0x00080000
#define x86_THREAD_STATE32 1
#define CPUFAMILY_ARM_CYCLONE 0x37a09642
#define VM_PURGABLE_NO_AGING_SHIFT 16
#define INADDR_NONE 0xffffffff
#define IP_OLD_FW_ZERO 53
#define CMSG_SPACE(l) (__DARWIN_ALIGN32(sizeof(struct cmsghdr)) + __DARWIN_ALIGN32(l))
#define IFCAP_HW_TIMESTAMP 0x00800
#define x86_FLOAT_STATE_COUNT ((mach_msg_type_number_t) (sizeof(x86_float_state_t)/sizeof(unsigned int)))
#define PLATFORM_WATCHOS 4
#define HOST_CONTAINERD_PORT (18 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define _INT8_T 
#define SIGKILL 9
#define _SC_RE_DUP_MAX 16
#define SECTION_ATTRIBUTES_USR 0xff000000
#define ESRCH 3
#define _CS_XBS5_LPBIG_OFFBIG_CFLAGS 32
#define IPV6_FW_GET 34
#define IPPROTO_DSTOPTS 60
#define MH_WEAK_DEFINES 0x8000
#define IPPROTO_RVD 66
#define _SC_REGEXP 77
#define KERN_MEMORY_ERROR 10
#define EHOSTDOWN 64
#define IN6_IS_ADDR_6TO4(x) (ntohs((x)->s6_addr16[0]) == 0x2002)
#define OSSwapLittleToHostConstInt32(x) ((uint32_t)(x))
#define _INCLUDE_XNU_THREADS_H_ 
#define MH_FILESET 0xc
#define ERANGE 34
#define SEEK_END 2
#define __SIZEOF_WCHAR_T__ 4
#define THREAD_MACHINE_STATE_MAX THREAD_STATE_MAX
#define MAXPHYSIO_WIRED (16 * 1024 * 1024)
#define PROC_PIDT_SHORTBSDINFO 13
#define _POSIX2_LINE_MAX 2048
#define __GNUC_PATCHLEVEL__ 0
#define __DARWIN_1050(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050)
#define S_IWOTH 0000002
#define EXC_MASK_BAD_ACCESS (1 << EXC_BAD_ACCESS)
#define MACH_MSGH_BITS_PORTS(bits) ((bits) & MACH_MSGH_BITS_PORTS_MASK)
#define ENOLCK 77
#define MACH_MSG_GUARD_FLAGS_MASK 0x0003
#define ENFILE 23
#define TASK_ABSOLUTETIME_INFO 1
#define IPC_SPACE_READ_NULL ((ipc_space_read_t) 0)
#define R2_HOME_PROJECTS R_JOIN_2_PATHS (R2_HOME_DATADIR, "projects")
#define UF_IMMUTABLE 0x00000002
#define _UUID_T 
#define x86_THREAD_STATE64 4
#define __FLT128_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define REQUESTED_TRAILER_SIZE_NATIVE(y) ((mach_msg_trailer_size_t) ((GET_RCV_ELEMENTS(y) == MACH_RCV_TRAILER_NULL) ? sizeof(mach_msg_trailer_t) : ((GET_RCV_ELEMENTS(y) == MACH_RCV_TRAILER_SEQNO) ? sizeof(mach_msg_seqno_trailer_t) : ((GET_RCV_ELEMENTS(y) == MACH_RCV_TRAILER_SENDER) ? sizeof(mach_msg_security_trailer_t) : ((GET_RCV_ELEMENTS(y) == MACH_RCV_TRAILER_AUDIT) ? sizeof(mach_msg_audit_trailer_t) : ((GET_RCV_ELEMENTS(y) == MACH_RCV_TRAILER_CTX) ? sizeof(mach_msg_context_trailer_t) : ((GET_RCV_ELEMENTS(y) == MACH_RCV_TRAILER_AV) ? sizeof(mach_msg_mac_trailer_t) : sizeof(mach_msg_max_trailer_t))))))))
#define RTF_LLINFO 0x400
#define __DARWIN_OSSwapConstInt16(x) ((__uint16_t)((((__uint16_t)(x) & 0xff00U) >> 8) | (((__uint16_t)(x) & 0x00ffU) << 8)))
#define HOST_AMFID_PORT (11 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define POLICY_FIFO 4
#define MNT_RDONLY 0x00000001
#define MAP_MEM_4K_DATA_ADDR 0x800000
#define TCPOPT_TSTAMP_HDR (TCPOPT_NOP<<24|TCPOPT_NOP<<16|TCPOPT_TIMESTAMP<<8|TCPOLEN_TIMESTAMP)
#define MATTR_VAL_DCACHE_FLUSH 7
#define VM_PURGABLE_NONVOLATILE 0
#define MACH_RCV_IN_PROGRESS 0x10004001
#define MACH_SEND_IN_PROGRESS 0x10000001
#define VM_MEMORY_JAVA 44
#define VM_MEMORY_COREUI 76
#define PAGE_MIN_SIZE (1 << PAGE_MIN_SHIFT)
#define KERN_ALREADY_WAITING 30
#define KERN_SEMAPHORE_DESTROYED 42
#define CLK_TCK __DARWIN_CLK_TCK
#define FP_287 2
#define _CS_POSIX_V6_ILP32_OFF32_LIBS 4
#define KERN_NAME_EXISTS 13
#define _SC_LOGIN_NAME_MAX 73
#define _SYS_LOCK_H_ 
#define SSLEEP 3
#define MAX_AUDIT_RECORDS 20
#define SA_RESTART 0x0002
#define REFERENCE_FLAG_UNDEFINED_NON_LAZY 0
#define CPU_TYPE_X86 ((cpu_type_t) 7)
#define CTL_MAXNAME 12
#define KERN_NOT_DEPRESSED 36
#define MACH_MSGH_BITS_USED 0xb01f1f1fU
#define MACH_MSGH_BITS_USER 0x801f1f1fU
#define __UINT_LEAST64_TYPE__ long long unsigned int
#define PROC_UID_ONLY 4
#define _STRUCT_X86_AVX512_STATE32 struct __darwin_i386_avx512_state
#define _POSIX_CPUTIME (-1)
#define __DARWIN_FD_SETSIZE 1024
#define TASK_VM_INFO_REV0_COUNT ((mach_msg_type_number_t) (TASK_VM_INFO_REV1_COUNT - 2))
#define MACH_RCV_INVALID_TYPE 0x1000400d
#define _MACH_DEBUG_VM_INFO_H_ 
#define _MACH_TASK_SPECIAL_PORTS_H_ 
#define REBASE_OPCODE_DO_REBASE_ADD_ADDR_ULEB 0x70
#define IFCAP_TSO4 0x00020
#define CPUFAMILY_INTEL_6_13 0xaa33392b
#define LC_BUILD_VERSION 0x32
#define __WATCHOS_7_3 70300
#define KERN_INVALID_MEMORY_CONTROL 34
#define __DEQUALIFY(type,var) __CAST_AWAY_QUALIFIER(var, const volatile, type)
#define va_arg(v,l) __builtin_va_arg(v,l)
#define NETSVC_MRKNG_LVL_L3L2_ALL 2
#define MCAST_UNDEFINED 0
#define OS_SENTINEL __attribute__((__sentinel__))
#define EV_DELETE 0x0002
#define MACH_SEND_INVALID_RT_OOL_SIZE 0x10000015
#define WAIT_ANY (-1)
#define _SC_CHILD_MAX 2
#define MACH_MSGH_BITS_VOUCHER_MASK 0x001f0000
#define STAILQ_ENTRY(type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct { struct type *stqe_next; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define MACH_RCV_IN_PROGRESS_TIMED 0x10004011
#define LC_ID_DYLINKER 0xf
#define __GETHOSTUUID_H 
#define VM_MIN_ADDRESS64 ((user_addr_t) 0x0000000000000000ULL)
#define _SYS_TYPES_H_ 
#define PROC_FLAG_PC_SUSP 0x400
#define RUSAGE_INFO_V0 0
#define RUSAGE_INFO_V2 2
#define RUSAGE_INFO_V3 3
#define RUSAGE_INFO_V4 4
#define RUSAGE_INFO_V5 5
#define __DARWIN_OSSwapConstInt64(x) ((__uint64_t)((((__uint64_t)(x) & 0xff00000000000000ULL) >> 56) | (((__uint64_t)(x) & 0x00ff000000000000ULL) >> 40) | (((__uint64_t)(x) & 0x0000ff0000000000ULL) >> 24) | (((__uint64_t)(x) & 0x000000ff00000000ULL) >> 8) | (((__uint64_t)(x) & 0x00000000ff000000ULL) << 8) | (((__uint64_t)(x) & 0x0000000000ff0000ULL) << 24) | (((__uint64_t)(x) & 0x000000000000ff00ULL) << 40) | (((__uint64_t)(x) & 0x00000000000000ffULL) << 56)))
#define CROUND (CBLOCK - 1)
#define CTLFLAG_EXPERIMENT 0x00100000
#define VM_REGION_INFO_MAX (1024)
#define ENOTSUP 45
#define code_emask (0x3fff)
#define __AVAILABILITY__ 
#define EXC_SOFT_SIGNAL 0x10003
#define IFCAP_VLAN_MTU 0x00004
#define PROC_PIDFDKQUEUEINFO_SIZE (sizeof(struct kqueue_fdinfo))
#define SOCK_SEQPACKET 5
#define LOCKGROUP_ATTR_STAT 0x01ULL
#define __DARWIN_ALIGNBYTES32 (sizeof(__uint32_t) - 1)
#define __TYPES_H_ 
#define S_INTERPOSING 0xd
#define _U_INT16_T 
#define __DARWIN_NSIG 32
#define MACH_PORT_RIGHT_DEAD_NAME ((mach_port_right_t) 4)
#define __STDC_UTF_32__ 1
#define N_TYPE 0x0e
#define AF_DATAKIT 9
#define IPV6_PORTRANGE_LOW 2
#define __INT_FAST8_WIDTH__ 8
#define w_coredump w_T.w_Coredump
#define __WATCHOS_4_0 40000
#define __WATCHOS_4_1 40100
#define __WATCHOS_4_2 40200
#define __WATCHOS_4_3 40300
#define HOST_RESOURCE_NOTIFY_PORT (20 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define PROC_PIDFDVNODEINFO_SIZE (sizeof(struct vnode_fdinfo))
#define PROC_FLAG_APPLICATION 0x1000000
#define ATTR_CMN_DOCUMENT_ID 0x00100000
#define CPU_TYPE_I860 ((cpu_type_t) 15)
#define VM_SYNC_SYNCHRONOUS ((vm_sync_t) 0x02)
#define P_THCWD 0x01000000
#define OS_COLD __attribute__((__cold__))
#define __FLT32X_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define SIGEV_SIGNAL 1
#define KERN_NX_PROTECTION 60
#define WEXITSTATUS(x) ((_W_INT(x) >> 8) & 0x000000ff)
#define __DARWIN_VERS_1050 1
#define LC_IDFVMLIB 0x7
#define ATTR_FILE_CLUMPSIZE 0x00000010
#define PT_TRACE_ME 0
#define IN6_IS_ADDR_SITELOCAL(a) (((a)->s6_addr[0] == 0xfe) && (((a)->s6_addr[1] & 0xc0) == 0xc0))
#define IPPROTO_PIGP 9
#define CPUFAMILY_UNKNOWN 0
#define QUAD_MIN LLONG_MIN
#define _U_INT8_T 
#define UTIME_OMIT -2
#define PROC_KQUEUE_SELECT 0x01
#define OS_NONNULL2 __attribute__((__nonnull__(2)))
#define OS_NONNULL3 __attribute__((__nonnull__(3)))
#define OS_NONNULL4 __attribute__((__nonnull__(4)))
#define OS_NONNULL5 __attribute__((__nonnull__(5)))
#define OS_NONNULL6 __attribute__((__nonnull__(6)))
#define OS_NONNULL7 __attribute__((__nonnull__(7)))
#define OS_NONNULL8 __attribute__((__nonnull__(8)))
#define OS_NONNULL9 __attribute__((__nonnull__(9)))
#define CIRCLEQ_CHECK_HEAD(head,field) 
#define ALARM_NULL ((alarm_t) 0)
#define MACH_RCV_TIMED_OUT 0x10004003
#define MAX_FATAL_kGUARD_EXC_CODE (1u << 7)
#define ifr_kpi ifr_ifru.ifru_kpi
#define NDR_CHAR_ASCII 0
#define ATTR_VOL_VALIDMASK 0xF007FFFF
#define MACH_SEND_INVALID_TYPE 0x1000000f
#define VM_PURGABLE_EMPTY 2
#define KEV_INET_CHANGED_ADDR 2
#define CPUSUBFAMILY_ARM_HG 2
#define VM_PROT_COPY ((vm_prot_t) 0x10)
#define CPUSUBFAMILY_ARM_HP 1
#define CPUSUBFAMILY_ARM_HS 4
#define MACH_PORT_INFO_EXT_COUNT ((natural_t) (sizeof(mach_port_info_ext_t)/sizeof(natural_t)))
#define __Reply__task_subsystem__defined 
#define SOI_S_COMP 0x1000
#define RLIM_SAVED_MAX RLIM_INFINITY
#define IP_MAX_GROUP_SRC_FILTER 512
#define PASS_MAX 128
#define PROC_PIDLISTTHREADS 6
#define IPV6CTL_USE_DEPRECATED 21
#define _SYS_SYSCTL_H_ 
#define X86_LAST_BRANCH_STATE_COUNT x86_LAST_BRANCH_STATE_COUNT
#define EF_IS_SYNTHETIC 0x00000020
#define _STRING_H_ 
#define VOL_CAP_INT_NFSEXPORT 0x00000004
#define _RLIMIT_POSIX_FLAG 0x1000
#define _POSIX_THREAD_PRIO_PROTECT (-1)
#define MNT_NOBLOCK 0x00020000
#define ___POSIX_C_DEPRECATED_STARTING_200112L 
#define SECTION_ATTRIBUTES 0xffffff00
#define PROC_CSM_NOSMT 0x0002
#define APPLE_IF_FAM_DISC 8
#define LSCALE 1000
#define GUARD_TYPE_VIRT_MEMORY 0x5
#define MACH_NOTIFY_PORT_DELETED (MACH_NOTIFY_FIRST + 001)
#define SET_MZI_COLLECTABLE_BYTES(val,size) (val) = ((val) & 1) | ((size) << 1)
#define API_DEPRECATED_END 
#define VM_FLAGS_RETURN_DATA_ADDR 0x100000
#define _MACH_INTERFACE_H_ 
#define TASK_CATEGORY_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (task_category_policy_data_t) / sizeof (integer_t)))
#define __INTMAX_MAX__ 0x7fffffffffffffffL
#define THREAD_IDENTIFIER_INFO 4
#define _POSIX_V6_ILP32_OFFBIG __ILP32_OFFBIG
#define CTLFLAG_ANYBODY 0x10000000
#define ESHLIBVERS 87
#define task_get_task_access_port(task,port) (task_get_special_port((task), TASK_ACCESS_PORT, (port)))
#define ATTR_FILE_DATAEXTENTS 0x00000800
#define CPU_SUBTYPE_SPARC_ALL ((cpu_subtype_t) 0)
#define __DARWIN_ALIGN32(p) ((__darwin_size_t)((__darwin_size_t)(p) + __DARWIN_ALIGNBYTES32) &~ __DARWIN_ALIGNBYTES32)
#define PROC_FP_GUARDED 4
#define __IOS_AVAILABLE(_vers) 
#define MPO_IMMOVABLE_RECEIVE 0x80
#define tcp6_seq tcp_seq
#define CPU_SUBTYPE_UVAXIII ((cpu_subtype_t) 12)
#define _PC_CHOWN_RESTRICTED 7
#define PROC_FLAG_IOS_IMPPROMOTION 0x80000
#define VM_PURGABLE_SET_STATE ((vm_purgable_t) 0)
#define _SC_SYNCHRONIZED_IO 40
#define PSWP 0
#define VM_BEHAVIOR_PAGEOUT ((vm_behavior_t) 11)
#define LC_ROUTINES 0x11
#define _STRUCT_ZMM_REG struct __darwin_zmm_reg
#define TASK_AUDIT_TOKEN 15
#define pseudo_AF_HDRCMPLT 35
#define IPPROTO_IRTP 28
#define MACH_VOUCHER_ATTR_KEY_BITS MACH_VOUCHER_ATTR_KEY_USER_DATA
#define VM_LIB64_SHR_DATA ((user_addr_t) 0x00007FFF60000000ULL)
#define USER_FSIGNATURES_CDHASH_LEN 20
#define CPU_SUBTYPE_ARM64_32_V8 ((cpu_subtype_t) 1)
#define _NET_IF_VAR_H_ 
#define ATTR_DIR_SETMASK 0x00000000
#define __API_UNAVAILABLE_BEGIN(...) 
#define AF_DECnet 12
#define MACH_TASK_BASIC_INFO_COUNT (sizeof(mach_task_basic_info_data_t) / sizeof(natural_t))
#define THREAD_STATE_NONE 13
#define __LONG_WIDTH__ 64
#define PROC_PIDFILEPORTPIPEINFO_SIZE PROC_PIDFDPIPEINFO_SIZE
#define SO_NWRITE 0x1024
#define _STDINT_H_ 
#define SIG_ERR ((void (*)(int))-1)
#define MIG_SERVER_DIED -308
#define R2_HOME_PDB R_JOIN_2_PATHS (R2_HOME_DATADIR, "pdb")
#define F_FLUSH_DATA 40
#define ATTR_DIR_IOBLOCKSIZE 0x00000010
#define IPV6_BINDV6ONLY IPV6_V6ONLY
#define POLICY_RR_INFO_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_rr_info)/sizeof(integer_t)))
#define __DARWIN_EXTSN(sym) __asm("_" __STRING(sym) __DARWIN_SUF_EXTSN)
#define __DARWIN_ALIGNBYTES (sizeof(__darwin_size_t) - 1)
#define __CHAR32_TYPE__ unsigned int
#define REFERENCE_FLAG_PRIVATE_UNDEFINED_LAZY 5
#define KERN_PROC_RUID 6
#define N_COLD_FUNC 0x0400
#define AQ_MAXHIGH 10000
#define IPCTL_DIRECTEDBROADCAST 9
#define THREAD_DEBUG_INFO_INTERNAL 6
#define ATTR_VOL_IOBLOCKSIZE 0x00000080
#define FP_PREC_53B 2
#define EPROC_CTTY 0x01
#define AUC_NOAUDIT 2
#define SOI_S_DRAINING 0x4000
#define __IPHONE_5_1 50100
#define N_REF_TO_WEAK 0x0080
#define __exported __attribute__((__visibility__("default")))
#define EXC_I386_SEGNPFLT 11
#define HOST_SYSDIAGNOSE_PORT (16 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define OS_MALLOC __attribute__((__malloc__))
#define KERN_TERMINATED 37
#define MEMORY_OBJECT_RESPECT_CACHE 0x2
#define __IPV6_ADDR_SCOPE_NODELOCAL 0x01
#define THREAD_INFO_MAX (32)
#define UINT_LEAST32_MAX UINT32_MAX
#define ATTR_CMN_NAMEDATTRLIST 0x00100000
#define NFSV3_MAX_FH_SIZE 64
#define subsystem_to_name_map_host_priv { "host_get_boot_info", 400 }, { "host_reboot", 401 }, { "host_priv_statistics", 402 }, { "host_default_memory_manager", 403 }, { "vm_wire", 404 }, { "thread_wire", 405 }, { "vm_allocate_cpm", 406 }, { "host_processors", 407 }, { "host_get_clock_control", 408 }, { "kmod_create", 409 }, { "kmod_destroy", 410 }, { "kmod_control", 411 }, { "host_get_special_port", 412 }, { "host_set_special_port", 413 }, { "host_set_exception_ports", 414 }, { "host_get_exception_ports", 415 }, { "host_swap_exception_ports", 416 }, { "mach_vm_wire", 418 }, { "host_processor_sets", 419 }, { "host_processor_set_priv", 420 }, { "host_set_UNDServer", 423 }, { "host_get_UNDServer", 424 }, { "kext_request", 425 }
#define INT32_C(v) (v)
#define TASK_RESOURCE_NOTIFY_PORT 11
#define VM_REGION_SUBMAP_INFO_V0_COUNT_64 ((mach_msg_type_number_t) (VM_REGION_SUBMAP_INFO_V0_SIZE / sizeof (natural_t)))
#define __AVAILABILITY_INTERNAL_DEPRECATED __attribute__((deprecated))
#define RTM_IFINFO2 0x12
#define SLIST_ENTRY(type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct { struct type *sle_next; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define __RequestUnion__clock_priv_subsystem__defined 
#define SA_NODEFER 0x0010
#define RTM_DELADDR 0xd
#define MACH_RCV_TRAILER_TYPE(x) (((x) & 0xf) << 28)
#define POLL_PRI 5
#define i386_THREAD_STATE 1
#define NODEV (dev_t)(-1)
#define KEV_DL_PROTO_ATTACHED 14
#define ATTR_FILE_FILETYPE 0x00000040
#define SIGILL 4
#define VOL_CAP_FMT_DECMPFS_COMPRESSION 0x00010000
#define INADDR_ALLRPTS_GROUP (u_int32_t)0xe0000016
#define ATTR_CMNEXT_SETMASK 0x00000000
#define SYNC_POLICY_ORDER_MASK 0x3
#define MSG_EOR 0x8
#define MACH_MSGH_BITS_IS_COMPLEX(bits) (((bits) & MACH_MSGH_BITS_COMPLEX) != MACH_MSGH_BITS_ZERO)
#define __OSX_AVAILABLE_STARTING(_osx,_ios) 
#define VM_FLAGS_PERMANENT 0x0080
#define HOST_PRIV_NULL ((host_priv_t) 0)
#define LC_ENCRYPTION_INFO 0x21
#define IPC_VOUCHER_ATTR_CONTROL_NULL ((ipc_voucher_attr_control_t) 0)
#define __FLT_MIN_10_EXP__ (-37)
#define EXC_BREAKPOINT 6
#define POLICY_RR_BASE_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_rr_base)/sizeof(integer_t)))
#define IN_LINKLOCALNETNUM (u_int32_t)0xA9FE0000
#define IPPROTO_DDP 37
#define __DARWIN_FD_COPY(f,t) bcopy(f, t, sizeof(*(f)))
#define __FLT64_MIN__ 2.22507385850720138309023271733240406e-308F64
#define IOPOL_VFS_IGNORE_PERMISSIONS_ON 1
#define __FLT_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F
#define host_set_launchctl_port(host,port) (host_set_special_port((host), HOST_LAUNCHCTL_PORT, (port)))
#define PROC_PIDTASKALLINFO 2
#define SPI_AVAILABLE(...) 
#define __AVAILABILITY_INTERNAL__ 
#define __INTMAX_TYPE__ long int
#define TAILQ_LAST(head,headname) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH (*(((struct headname *)((head)->tqh_last))->tqh_last)) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define BIND_OPCODE_SET_ADDEND_SLEB 0x60
#define PAGE_MIN_SHIFT 12
#define SIGINT 2
#define SYNC_POLICY_LIFO (SYNC_POLICY_FIFO|SYNC_POLICY_REVERSED)
#define PF_LOCAL AF_LOCAL
#define PF_NATM AF_NATM
#define R2_HOME_SDB_FORMAT R_JOIN_2_PATHS (R2_HOME_DATADIR, "format")
#define UPDATE_IO_STATS_ATOMIC(info,io_size) { OSIncrementAtomic64((SInt64 *)&(info.count)); OSAddAtomic64(io_size, (SInt64 *)&(info.size)); }
#define CPUFAMILY_INTEL_6_23 CPUFAMILY_INTEL_PENRYN
#define VM_FLAGS_USER_MAP (VM_FLAGS_USER_ALLOCATE | VM_FLAGS_RETURN_4K_DATA_ADDR | VM_FLAGS_RETURN_DATA_ADDR)
#define HOST_CAN_HAS_DEBUGGER_COUNT ((mach_msg_type_number_t) (sizeof(host_can_has_debugger_info_data_t)/sizeof(integer_t)))
#define _SC_V6_LPBIG_OFFBIG 106
#define host_get_user_notification_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_USER_NOTIFICATION_PORT, (port)))
#define HOST_EXTMOD_INFO64 5
#define R_DEBUG_REASON_MACH_RCV_INTERRUPTED -2
#define VM_MEMORY_JAVASCRIPT_CORE 63
#define VM_PURGABLE_BEHAVIOR_LIFO (1 << VM_PURGABLE_BEHAVIOR_SHIFT)
#define VM_REGION_TOP_INFO 12
#define task_get_debug_control_port(task,port) (task_get_special_port((task), TASK_DEBUG_CONTROL_PORT, (port)))
#define CPU_SUBTYPE_VAX8600 ((cpu_subtype_t) 9)
#define err_get_system(err) (((err)>>26)&0x3f)
#define SECT_COMMON "__common"
#define CPUFAMILY_INTEL_6_26 CPUFAMILY_INTEL_NEHALEM
#define SIGIOT SIGABRT
#define R2_VERSION_MAJOR 5
#define MNT_NOWAIT 2
#define _POSIX_TIMER_MAX 32
#define NOTE_FFCOPY 0xc0000000
#define VM_LEDGER_TAG_MEDIA 0x00000003
#define S_ATTR_DEBUG 0x02000000
#define PROC_PIDREGIONPATHINFO 8
#define __FLT32X_HAS_QUIET_NAN__ 1
#define KERN_MEMORY_DATA_MOVED 24
#define KERN_INVALID_CAPABILITY 20
#define S_IXGRP 0000010
#define VM_MEMORY_COREUIFILE 77
#define S_LAZY_DYLIB_SYMBOL_POINTERS 0x10
#define MACH_EXCEPTION_ERRORS 0x40000000
#define __ATOMIC_CONSUME 1
#define AUDIT_TRIGGER_EXPIRE_TRAILS 8
#define IPPROTO_DGP 86
#define MAXPRI 127
#define VQ_DESIRED_DISK 0x4000
#define _MACH_BOOLEAN_H_ 
#define VM_MEMORY_CM_REGWARP 101
#define MACH_MSGH_BITS_RAISED_IMPORTANCE(bits) (((bits) & MACH_MSGH_BITS_RAISEIMP) != MACH_MSGH_BITS_ZERO)
#define ___POSIX_C_DEPRECATED_STARTING_198808L 
#define MH_CIGAM_64 0xcffaedfe
#define _U_CHAR 
#define x86_LAST_BRANCH_STATE_COUNT ((mach_msg_type_number_t)(sizeof(last_branch_state_t) / sizeof(int)))
#define LITTLE_ENDIAN __DARWIN_LITTLE_ENDIAN
#define _STRUCT_MCONTEXT_AVX32 struct __darwin_mcontext_avx32
#define __FLT32X_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F32x
#define SEG_UNIXSTACK "__UNIXSTACK"
#define __API_DEPRECATED_BEGIN_REP_GET_MACRO 
#define __unreachable_ok_pop _Pragma("GCC diagnostic pop")
#define INTMAX_C(v) (v ## L)
#define host_get_unfreed_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_UNFREED_PORT, (port)))
#define ILL_PRVOPC 3
#define TCPOPT_NOP 1
#define INADDR_ALLMDNS_GROUP (u_int32_t)0xe00000fb
#define IN6_IS_ADDR_MC_LINKLOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && (IPV6_ADDR_MC_FLAGS(a) != IPV6_ADDR_MC_FLAGS_UNICAST_BASED) && (__IPV6_ADDR_MC_SCOPE(a) == __IPV6_ADDR_SCOPE_LINKLOCAL))
#define PAGE_SIZE vm_page_size
#define TCPOLEN_CC_APPA (TCPOLEN_CC+2)
#define IP_HDRINCL 2
#define IN_CLASSC_NSHIFT 8
#define IPV6CTL_USETEMPADDR 32
#define __NULLABILITY_COMPLETENESS_POP 
#define x86_AVX512_STATE (x86_AVX512_STATE32 + 2)
#define LC_SYMTAB 0x2
#define WCOREFLAG 0200
#define SO_NP_EXTENSIONS 0x1083
#define A_GETPINFO 24
#define IOPOL_DEFAULT 0
#define S_ISUID 0004000
#define R2_GITTAP "5.5.4"
#define CPU_ARCH_MASK 0xff000000
#define IPPROTO_EMCON 14
#define host_set_amfid_port(host,port) (host_set_special_port((host), HOST_AMFID_PORT, (port)))
#define _INO64_T 
#define POLL_IN 1
#define R2_DATDIR "/usr/local/share"
#define SCM_TIMESTAMP 0x02
#define CTLFLAG_NOLOCK 0x20000000
#define CPU_SUBTYPE_VAX8650 ((cpu_subtype_t) 10)
#define MSG_WAITALL 0x40
#define _STRUCT_MCONTEXT_AVX64 struct __darwin_mcontext_avx64
#define IFCAP_VLAN_HWTAGGING 0x00008
#define timeradd(tvp,uvp,vvp) do { (vvp)->tv_sec = (tvp)->tv_sec + (uvp)->tv_sec; (vvp)->tv_usec = (tvp)->tv_usec + (uvp)->tv_usec; if ((vvp)->tv_usec >= 1000000) { (vvp)->tv_sec++; (vvp)->tv_usec -= 1000000; } } while (0)
#define MAC_OS_X_VERSION_10_11_4 101104
#define R2_HOME_BINRC R_JOIN_2_PATHS (R2_HOME_DATADIR, "rc.d")
#define _U_SHORT 
#define SI_TIMER 0x10003
#define LOCAL_PEERCRED 0x001
#define IPV6CTL_DAD_COUNT 16
#define VM_VOLATILE_ORDER_SHIFT 4
#define _POSIX_THREAD_SAFE_FUNCTIONS 200112L
#define GET_LIBRARY_ORDINAL(n_desc) (((n_desc) >> 8) & 0xff)
#define CPU_SUBTYPE_XEON CPU_SUBTYPE_INTEL(12, 0)
#define P_DIRTY_IDLE_EXIT_ENABLED (P_DIRTY_TRACK|P_DIRTY_ALLOW_IDLE_EXIT)
#define EV_ADD 0x0001
#define _I386__LIMITS_H_ 
#define SOMAXCONN 128
#define __IPHONE_13_0 130000
#define __IPHONE_13_1 130100
#define __IPHONE_13_2 130200
#define __IPHONE_13_3 130300
#define __IPHONE_13_4 130400
#define __IPHONE_13_5 130500
#define __IPHONE_13_6 130600
#define IP_BOUND_IF 25
#define DST_USA 1
#define sv_onstack sv_flags
#define IOPOL_VFS_CONTENT_PROTECTION_IGNORE 1
#define _MACH_MIG_ERRORS_H_ 
#define AF_ISDN 28
#define MACH_VOUCHER_ATTR_REMOVE ((mach_voucher_attr_recipe_command_t)2)
#define MACH_PORT_LIMITS_INFO_COUNT ((natural_t) (sizeof(mach_port_limits_t)/sizeof(natural_t)))
#define CPU_SUBTYPE_INTEL_FAMILY(x) ((x) & 15)
#define err_max_system 0x3f
#define BSD 199506
#define HOST_MACH_MSG_TRAP 8
#define x86_AVX512_STATE64_COUNT ((mach_msg_type_number_t) (sizeof(x86_avx512_state64_t)/sizeof(unsigned int)))
#define RTA_IFA 0x20
#define APPLE_IF_FAM_ETHERNET 2
#define TASK_DYLD_INFO 17
#define IPV6_MULTICAST_LOOP 11
#define __ATOMIC_SEQ_CST 5
#define RTA_IFP 0x10
#define _INT32_T 
#define S_ISFIFO(m) (((m) & S_IFMT) == S_IFIFO)
#define TASK_FLAVOR_NAME 3
#define IPV6_2292HOPLIMIT 20
#define _MACH_INIT_ 1
#define AF_IMPLINK 3
#define ENOENT 2
#define MACH_TASK_INSPECT_H 
#define PF_HYLINK AF_HYLINK
#define MIG_EXCEPTION -306
#define A_GETCAR 9
#define NL_MSGMAX 32767
#define HW_MACHINE 1
#define _PTHREAD_KEY_T 
#define x86_THREAD_STATE32_COUNT ((mach_msg_type_number_t) ( sizeof (x86_thread_state32_t) / sizeof (int) ))
#define F_SETFD 2
#define __UINT32_TYPE__ unsigned int
#define __Reply__mach_port_subsystem__defined 
#define __FLT32X_MIN_10_EXP__ (-307)
#define TAILQ_REMOVE(head,elm,field) do { TAILQ_CHECK_NEXT(elm, field); TAILQ_CHECK_PREV(elm, field); if ((TAILQ_NEXT((elm), field)) != NULL) TAILQ_NEXT((elm), field)->field.tqe_prev = (elm)->field.tqe_prev; else { (head)->tqh_last = (elm)->field.tqe_prev; QMD_TRACE_HEAD(head); } *(elm)->field.tqe_prev = TAILQ_NEXT((elm), field); TRASHIT((elm)->field.tqe_next); TRASHIT((elm)->field.tqe_prev); QMD_TRACE_ELEM(&(elm)->field); } while (0)
#define VM_MEMORY_ROSETTA_RETURN_STACK 233
#define IFCAP_RXCSUM 0x00001
#define KMOD_INFO_VERSION 1
#define MACH_MSGH_BITS_DENAP MACH_MSGH_BITS_RAISEIMP
#define __DARWIN_FD_ISSET(n,p) __darwin_fd_isset((n), (p))
#define PROC_SETPC_SUSPEND 2
#define SIGTERM 15
#define IPPROTO_MICP 95
#define PTHREAD_KEYS_MAX 512
#define P_DIRTY_AGING_IN_PROGRESS 0x00000100
#define _PC_2_SYMLINKS 15
#define mach_vm_trunc_page(x) ((mach_vm_offset_t)(x) & ~((signed)vm_page_mask))
#define _MACH_I386_THREAD_STATE_H_ 
#define S_ATTR_STRIP_STATIC_SYMS 0x20000000
#define OS_NONNULL_ALL __attribute__((__nonnull__))
#define __FLT64X_HAS_DENORM__ 1
#define OSSwapBigToHostConstInt16(x) OSSwapConstInt16(x)
#define HOST_LOAD_INFO_COUNT ((mach_msg_type_number_t) (sizeof(host_load_info_data_t)/sizeof(integer_t)))
#define IPV6_RTHDR_STRICT 1
#define __FLT128_EPSILON__ 1.92592994438723585305597794258492732e-34F128
#define PROC_FLAG_INEXIT 4
#define MCLSHIFT 11
#define MAP_MEM_USE_DATA_ADDR 0x100000
#define __Request__task_subsystem__defined 
#define MIN(a,b) (((a)<(b))?(a):(b))
#define X_OK (1<<0)
#define __SIZEOF_LONG_LONG__ 8
#define HOST_NODE_PORT (19 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define __INT64_MAX__ 0x7fffffffffffffffLL
#define EXCEPTION_DEFAULT 1
#define __Request__clock_priv_subsystem__defined 
#define VM_MEMORY_ROSETTA_EXECUTABLE_HEAP 234
#define RTF_DYNAMIC 0x10
#define MNT_NOSUID 0x00000008
#define N_EXT 0x01
#define ATTR_FILE_DATALENGTH 0x00000200
#define MAXSYMLINKS 32
#define MAX_TRAILER_SIZE ((mach_msg_size_t)sizeof(mach_msg_max_trailer_t))
#define S_DTRACE_DOF 0xf
#define OSSwapBigToHostConstInt32(x) OSSwapConstInt32(x)
#define VFS_CTL_QUERY 0x00010003
#define PRIO_MAX 20
#define _POSIX_THREAD_KEYS_MAX 128
#define HOST_NOTIFY_TYPE_MAX 1
#define VOL_CAP_INT_COPYFILE 0x00000020
#define IPPROTO_ND 77
#define __FLT32X_MIN__ 2.22507385850720138309023271733240406e-308F32x
#define IPCTL_RTEXPIRE 5
#define MACH_VOUCHER_ATTR_MANAGER_NULL ((mach_voucher_attr_manager_t) 0)
#define TF_64B_DATA 0x00000002
#define SIGWINCH 28
#define ATTR_CMN_OBJTAG 0x00000010
#define QMD_TRACE_HEAD(head) 
#define __TVOS_14_1 140100
#define __TVOS_14_2 140200
#define ATTR_VOL_OBJCOUNT 0x00000100
#define __TVOS_14_5 140500
#define __LDBL_DIG__ 18
#define EV_CLEAR 0x0020
#define X86_EXCEPTION_STATE64_COUNT x86_EXCEPTION_STATE64_COUNT
#define PROC_PIDFDVNODEPATHINFO 2
#define THREAD_BACKGROUND_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (thread_background_policy_data_t) / sizeof (integer_t)))
#define VM_REGION_TOP_INFO_COUNT ((mach_msg_type_number_t) (sizeof(vm_region_top_info_data_t) / sizeof(natural_t)))
#define HOST_EXTMOD_INFO64_LATEST_COUNT HOST_EXTMOD_INFO64_COUNT
#define EXC_MASK_BREAKPOINT (1 << EXC_BREAKPOINT)
#define __UINT_FAST16_MAX__ 0xffff
#define ATTR_CMN_USERACCESS 0x00200000
#define _PID_T 
#define CPF_IGNORE_MODE 0x0002
#define PF_NS AF_NS
#define _MACH_EXCEPTION_TYPES_H_ 
#define KERN_KDSETREG 8
#define MACH_PORT_STATUS_FLAG_STRICT_GUARD 0x04
#define PT_WRITE_I 4
#define IPPROTO_LEAF1 25
#define IPPROTO_LEAF2 26
#define SO_RANDOMPORT 0x1082
#define PT_WRITE_U 6
#define _MODE_T 
#define current_task() mach_task_self()
#define CPU_SUBTYPE_UVAXI ((cpu_subtype_t) 5)
#define __APPLE_API_PRIVATE 
#define KERN_KDWRITETR_V3 28
#define NDR_FLOAT_IBM 3
#define MH_INCRLINK 0x2
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define KERN_KDSET_TYPEFILTER 22
#define KEV_DL_NODE_ABSENCE 22
#define EXC_I386_GPFLT 13
#define RLIMIT_THREAD_CPULIMITS 0x3
#define GET_MAP_MEM(flags) ((((unsigned int)(flags)) >> 24) & 0xFF)
#define PF_VSOCK AF_VSOCK
#define MACH_PORT_DNREQUESTS_SIZE 3
#define VM_PAGE_INFO_BASIC_COUNT ((mach_msg_type_number_t) (sizeof(vm_page_info_basic_data_t)/sizeof(int)))
#define OSSwapBigToHostConstInt64(x) OSSwapConstInt64(x)
#define ATTR_DIR_ALLOCSIZE 0x00000008
#define VM_MEMORY_GUARD 31
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_1(x) x
#define VM_FLAGS_RESILIENT_CODESIGN 0x0020
#define HW_L3SETTINGS 21
#define UF_APPEND 0x00000004
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_3(x) 
#define __SIG_ATOMIC_MAX__ 0x7fffffff
#define PVM 4
#define IOPOL_VFS_TRIGGER_RESOLVE_OFF 1
#define _MACH_DEBUG_HASH_INFO_H_ 
#define ATTR_CMNEXT_REALFSID 0x00000080
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_4(x) x
#define TASK_FLAGS_INFO 28
#define NET_RT_DUMP 1
#define _XNU_DEBUG_H 
#define MACH_RCV_VOUCHER 0x00000800
#define __OS_BASE__ 
#define S_IFIFO 0010000
#define SOI_S_NBIO 0x0100
#define TCP_NODELAY 0x01
#define MAP_MEM_PURGABLE_KERNEL_ONLY 0x004000
#define FPE_FLTUND 3
#define TCPOPT_CCECHO 13
#define PROC_PIDFDPSHMINFO_SIZE (sizeof(struct pshm_fdinfo))
#define SF_SETTABLE 0x3fff0000
#define KEV_DL_SIFPHYS 4
#define VM_INHERIT_SHARE ((vm_inherit_t) 0)
#define MACH_ERROR_STRING(ret) (mach_error_string (ret) ? r_str_getf (mach_error_string (ret)) : "(unknown)")
#define TASK_DEBUG_INFO_INTERNAL 29
#define EFL_VIF 0x00080000
#define MNT_JOURNALED 0x00800000
#define RTM_NEWADDR 0xc
