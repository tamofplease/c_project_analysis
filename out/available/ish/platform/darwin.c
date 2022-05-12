#define EXC_MACF_MIN 0x20000
#define FPS_TOS 0x3800
#define setbit(a,i) (((unsigned char *)(a))[(i)/NBBY] |= 1u<<((i)%NBBY))
#define MACH_SEND_TIMEOUT 0x00000010
#define VM_PURGABLE_DEBUG_MASK (0x3 << VM_PURGABLE_DEBUG_SHIFT)
#define GET_RCV_ELEMENTS(y) (((y) >> 24) & 0xf)
#define current_task() mach_task_self()
#define CPU_STATE_IDLE 2
#define VM_LEDGER_FLAGS (VM_LEDGER_FLAG_NO_FOOTPRINT)
#define SI_TIMER 0x10003
#define A_GETSTAT 12
#define HW_MODEL 2
#define ___POSIX_C_DEPRECATED_STARTING_199009L 
#define A_SENDTRIGGER 31
#define _Nullable 
#define VM_BEHAVIOR_FREE ((vm_behavior_t) 6)
#define EFL_VIP 0x00100000
#define CTL_UNSPEC 0
#define __DBL_MIN_EXP__ (-1021)
#define EVFILT_FS (-9)
#define HOST_NOTIFY_CALENDAR_SET 1
#define PRIMASK 0x0ff
#define KERN_TFP 61
#define AU_ASSIGN_ASID -1
#define __Reply__processor_subsystem__defined 
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_2(x) x
#define MACH_PORT_QLIMIT_MIN MACH_PORT_QLIMIT_ZERO
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_4(x) x
#define MIG_TYPE_ERROR -300
#define _UINT64_T 
#define MAC_OS_X_VERSION_10_13_1 101301
#define MAC_OS_X_VERSION_10_13_2 101302
#define MAC_OS_X_VERSION_10_13_4 101304
#define TASK_THREAD_TIMES_INFO 3
#define HOST_BASIC_INFO_COUNT ((mach_msg_type_number_t) (sizeof(host_basic_info_data_t)/sizeof(integer_t)))
#define __unused __attribute__((__unused__))
#define __UINT_LEAST16_MAX__ 0xffff
#define _STRUCT_X86_AVX_STATE64 struct __darwin_x86_avx_state64
#define SIGPIPE 13
#define LIST_INSERT_HEAD(head,elm,field) do { LIST_CHECK_HEAD((head), field); if ((LIST_NEXT((elm), field) = LIST_FIRST((head))) != NULL) LIST_FIRST((head))->field.le_prev = &LIST_NEXT((elm), field); LIST_FIRST((head)) = (elm); (elm)->field.le_prev = &LIST_FIRST((head)); } while (0)
#define __ATOMIC_ACQUIRE 2
#define __FLT128_MAX_10_EXP__ 4932
#define __Request__vm_map_subsystem__defined 
#define HOST_VM_INFO64_LATEST_COUNT HOST_VM_INFO64_COUNT
#define A_GETKMASK 4
#define RE_DUP_MAX 255
#define VM_MEMORY_ASSETSD 72
#define x86_DEBUG_STATE32_COUNT ((mach_msg_type_number_t) ( sizeof (x86_debug_state32_t) / sizeof (int) ))
#define MACHINE_THREAD_STATE_COUNT x86_THREAD_STATE_COUNT
#define VM_MEMORY_CARBON VM_MEMORY_CORESERVICES
#define __Reply__thread_act_subsystem__defined 
#define _MACH_THREAD_SPECIAL_PORTS_H_ 
#define CTL_DEBUG_MAXID 20
#define PUSER 50
#define EXC_I386_DIV 1
#define VM_MAP_INSPECT_NULL ((vm_map_inspect_t) 0)
#define sa_sigaction __sigaction_u.__sa_sigaction
#define CALENDAR_CLOCK 1
#define _MACH_POLICY_H_ 
#define CPUFAMILY_ARM_11 0x8ff620d8
#define __FLT_MIN__ 1.17549435082228750796873653722224568e-38F
#define CPUFAMILY_ARM_13 0x0cc90e64
#define CPUFAMILY_ARM_14 0x96077ef1
#define __GCC_IEC_559_COMPLEX 2
#define task_set_host_port(task,port) (task_set_special_port((task), TASK_HOST_PORT, (port)))
#define TASK_EXC_GUARD_ALL 0xff
#define MACH_PORT_TYPE_PORT_RIGHTS (MACH_PORT_TYPE_SEND_RIGHTS|MACH_PORT_TYPE_RECEIVE)
#define PDROP 0x400
#define _SIGSET_T 
#define PZERO 22
#define KERN_COREDUMP 51
#define timeradd(tvp,uvp,vvp) do { (vvp)->tv_sec = (tvp)->tv_sec + (uvp)->tv_sec; (vvp)->tv_usec = (tvp)->tv_usec + (uvp)->tv_usec; if ((vvp)->tv_usec >= 1000000) { (vvp)->tv_sec++; (vvp)->tv_usec -= 1000000; } } while (0)
#define EXC_I386_SGL 1
#define __DARWIN_NFDBITS (sizeof(__int32_t) * __DARWIN_NBBY)
#define SV_ONSTACK SA_ONSTACK
#define msgh_kind msgh_seqno
#define VM_MEMORY_JAVASCRIPT_JIT_EXECUTABLE_ALLOCATOR 64
#define SIGBUS 10
#define NCARGS ARG_MAX
#define NL_ARGMAX 9
#define __UINT_LEAST8_TYPE__ unsigned char
#define MACH_MSG_OVERWRITE 3
#define __SIZEOF_FLOAT80__ 16
#define HOST_MAX_SPECIAL_PORT HOST_IOCOMPRESSIONSTATS_PORT
#define MACH_NOTIFY_PORT_DESTROYED (MACH_NOTIFY_FIRST + 005)
#define MACH_PORT_STATUS_FLAG_REVIVE 0x10
#define _I386__ENDIAN_H_ 
#define NDR_CHAR_EBCDIC 1
#define INT_LEAST16_MIN INT16_MIN
#define time_value_add(result,addend) { (result)->microseconds += (addend)->microseconds; (result)->seconds += (addend)->seconds; if ((result)->microseconds >= TIME_MICROS_MAX) { (result)->microseconds -= TIME_MICROS_MAX; (result)->seconds++; } }
#define __RequestUnion__mach_host_subsystem__defined 
#define __Reply__host_priv_subsystem__defined 
#define _KEY_T 
#define MACH_MSG_OOL_DESCRIPTOR 1
#define OSSwapHostToLittleConstInt64(x) ((uint64_t)(x))
#define MACH_MSGH_BITS_LOCAL_MASK 0x00001f00
#define I386_THREAD_STATE_MAX (614)
#define SWITCH_OPTION_NONE 0
#define __IPHONE_14_2 140200
#define __MAC_10_13_1 101301
#define __MAC_10_13_2 101302
#define __MAC_10_13_4 101304
#define PROCESSOR_PM_REGS_INFO 0x10000001
#define CPU_SUBTYPE_ARM64E ((cpu_subtype_t) 2)
#define VM_FLAGS_OVERWRITE 0x4000
#define OSSwapLittleToHostConstInt16(x) ((uint16_t)(x))
#define TASK_BASIC_INFO_32 4
#define __DRIVERKIT_19_0 190000
#define TASK_EXTMOD_INFO_COUNT (sizeof(task_extmod_info_data_t) / sizeof(natural_t))
#define bzero(dest,...) __builtin___memset_chk (dest, 0, __VA_ARGS__, __darwin_obsz0 (dest))
#define CPU_SUBTYPE_MC88000_ALL ((cpu_subtype_t) 0)
#define __INTMAX_C(c) c ## L
#define EV_DELETE 0x0002
#define STAILQ_INIT(head) do { STAILQ_FIRST((head)) = NULL; (head)->stqh_last = &STAILQ_FIRST((head)); } while (0)
#define TASK_BASIC_INFO_64_COUNT (sizeof(task_basic_info_64_data_t) / sizeof(natural_t))
#define NL_NMAX 1
#define __enum_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_open
#define VM_MEMORY_EAR_DECODER 102
#define _MACH_VM_REGION_H_ 
#define SV_RESETHAND SA_RESETHAND
#define MIG_ARRAY_TOO_LARGE -307
#define USER_POSIX2_UPE 18
#define P_RESV7 0x00800000
#define EXC_BAD_INSTRUCTION 2
#define TIME_RELATIVE 0x01
#define TASK_SECURITY_TOKEN 13
#define __deprecated_msg(_msg) __attribute__((__deprecated__(_msg)))
#define __DARWIN_INODE64(sym) __asm("_" __STRING(sym) __DARWIN_SUF_64_BIT_INO_T)
#define MACH_RCV_TRAILER_SEQNO 1
#define POLICY_RR_LIMIT_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_rr_limit)/sizeof(integer_t)))
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_0(x) 
#define __CHAR_BIT__ 8
#define __WATCHOS_DEPRECATED(_start,_dep,_msg) 
#define __Reply__host_security_subsystem__defined 
#define VM_SWAPUSAGE 5
#define NSEC_PER_MSEC 1000000ull
#define VM_MEMORY_ROSETTA_INDIRECT_BRANCH_MAP 232
#define MACH_PORT_TYPE_SEND MACH_PORT_TYPE(MACH_PORT_RIGHT_SEND)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_0(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_3(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_6(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_7(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_8(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_9(x) x
#define VM_MEMORY_SHARED_PMAP 32
#define SHRT_MAX __SHRT_MAX__
#define howmany(x,y) __DARWIN_howmany(x, y)
#define __WATCHOS_1_0 10000
#define MPG_IMMOVABLE_RECEIVE 0x02
#define __DARWIN_C_LEVEL __DARWIN_C_FULL
#define CPU_SUBTYPE_PENTIUM_3_XEON CPU_SUBTYPE_INTEL(8, 2)
#define CLOCK_PROCESS_CPUTIME_ID _CLOCK_PROCESS_CPUTIME_ID
#define _MACH_STD_TYPES_H_ 
#define _U_INT64_T 
#define __UINT8_MAX__ 0xff
#define CPUFAMILY_INTEL_WESTMERE 0x573b5eec
#define __SCHAR_WIDTH__ 8
#define LOAD_SCALE 1000
#define TAILQ_INIT(head) do { TAILQ_FIRST((head)) = NULL; (head)->tqh_last = &TAILQ_FIRST((head)); QMD_TRACE_HEAD(head); } while (0)
#define NSIG __DARWIN_NSIG
#define P_DIRTY_AGING_IN_PROGRESS 0x00000100
#define USER_COLL_WEIGHTS_MAX 6
#define LEDGER_NULL ((ledger_t) 0)
#define PAGE_MIN_SIZE (1 << PAGE_MIN_SHIFT)
#define XUCRED_VERSION 0
#define CPU_SUBTYPE_X86_64_H ((cpu_subtype_t)8)
#define MACH_TASK_BASIC_INFO_COUNT (sizeof(mach_task_basic_info_data_t) / sizeof(natural_t))
#define AUDIT_AHLT 0x0002
#define WCHAR_MAX __WCHAR_MAX__
#define KMOD_INFO_VERSION 1
#define THREAD_BACKGROUND_POLICY_DARWIN_BG 0x1000
#define CPU_SUBTYPE_MIPS_R2000 ((cpu_subtype_t) 5)
#define STAILQ_HEAD_INITIALIZER(head) { NULL, &(head).stqh_first }
#define SA_NOCLDWAIT 0x0020
#define INT16_C(v) (v)
#define __WINT_MAX__ 0x7fffffff
#define THREAD_STATE_NONE 13
#define KERN_KDWRITETR_V3 28
#define EXC_MASK_ARITHMETIC (1 << EXC_ARITHMETIC)
#define MACH_MSG_TYPE_PORT_ANY_RIGHT(x) (((x) >= MACH_MSG_TYPE_MOVE_RECEIVE) && ((x) <= MACH_MSG_TYPE_MOVE_SEND_ONCE))
#define FPC_IC 0x1000
#define __FLT32_MIN_EXP__ (-125)
#define STAILQ_REMOVE_HEAD(head,field) do { if ((STAILQ_FIRST((head)) = STAILQ_NEXT(STAILQ_FIRST((head)), field)) == NULL) (head)->stqh_last = &STAILQ_FIRST((head)); } while (0)
#define CLK_TCK __DARWIN_CLK_TCK
#define MACH_MSGH_BITS_OTHER(bits) ((bits) &~ MACH_MSGH_BITS_PORTS_MASK)
#define CTLTYPE_INT 2
#define THREAD_CONVERT_THREAD_STATE_FROM_SELF 2
#define MACH_SEND_INVALID_REPLY 0x10000009
#define STAILQ_FOREACH(var,head,field) for((var) = STAILQ_FIRST((head)); (var); (var) = STAILQ_NEXT((var), field))
#define INT8_MAX 127
#define MACH_PORT_TYPE_PORT_OR_DEAD (MACH_PORT_TYPE_PORT_RIGHTS|MACH_PORT_TYPE_DEAD_NAME)
#define STAILQ_INSERT_TAIL(head,elm,field) do { STAILQ_NEXT((elm), field) = NULL; *(head)->stqh_last = (elm); (head)->stqh_last = &STAILQ_NEXT((elm), field); } while (0)
#define UINT_LEAST64_MAX UINT64_MAX
#define OSSwapLittleToHostConstInt64(x) ((uint64_t)(x))
#define MISC_H 
#define VM_MEMORY_SCENEKIT 86
#define SM_PRIVATE 2
#define MACH_SEND_SYNC_BOOTSTRAP_CHECKIN 0x00800000
#define _CDEFS_H_ 
#define MACH_MSG_TYPE_DISPOSE_SEND_ONCE 26
#define REQUESTED_TRAILER_SIZE(y) REQUESTED_TRAILER_SIZE_NATIVE(y)
#define MACH_VOUCHER_ATTR_AUTO_REDEEM ((mach_voucher_attr_recipe_command_t)4)
#define SIGUSR2 31
#define HOST_TELEMETRY_PORT (13 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define OSSwapLittleToHostInt32(x) ((uint32_t)(x))
#define __OSX_AVAILABLE_BUT_DEPRECATED_MSG(_osxIntro,_osxDep,_iosIntro,_iosDep,_msg) 
#define va_start(v,l) __builtin_va_start(v,l)
#define OSSwapHostToBigConstInt32(x) OSSwapConstInt32(x)
#define MATTR_VAL_ICACHE_FLUSH 8
#define task_set_task_debug_control_port(task,port) (task_set_special_port((task), TASK_DEBUG_CONTROL_PORT, (port)))
#define CIRCLEQ_EMPTY(head) ((head)->cqh_first == (void *)(head))
#define VM_MEMORY_DYLIB 33
#define ITIMER_VIRTUAL 1
#define THREAD_PRECEDENCE_POLICY 3
#define THREAD_READ_NULL ((thread_read_t) 0)
#define SLIST_FIRST(head) ((head)->slh_first)
#define MEMORY_OBJECT_NAME_NULL ((memory_object_name_t) 0)
#define HOST_VM_INFO64_REV0_COUNT ((mach_msg_type_number_t) (HOST_VM_INFO64_REV1_COUNT - 14))
#define _PTHREAD_CONDATTR_T 
#define MACH_PORT_QLIMIT_LARGE (1024)
#define host_get_node_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_NODE_PORT, (port)))
#define __TVOS_AVAILABLE(_vers) 
#define __ORDER_LITTLE_ENDIAN__ 1234
#define __SIZE_MAX__ 0xffffffffffffffffUL
#define NOTE_CHILD 0x00000004
#define _MACH_VM_TYPES_H_ 
#define CPU_TYPE_MC88000 ((cpu_type_t) 13)
#define VM_FLAGS_FIXED 0x0000
#define KERN_RESOURCE_SHORTAGE 6
#define __WCHAR_MAX__ 0x7fffffff
#define MACH_NOTIFY_FIRST 0100
#define BLKDEV_IOSIZE 2048
#define MACH_RCV_NOTIFY 0x00000000
#define x86_EXCEPTION_STATE_COUNT ((mach_msg_type_number_t) (sizeof(x86_exception_state_t)/sizeof(unsigned int)))
#define EXC_I386_ENOEXTFLT 32
#define TASK_EXC_GUARD_MP_ALL 0xf0
#define KERN_DEFAULT_SET 31
#define INT16_MAX 32767
#define CTLFLAG_KERN 0x01000000
#define MACH_SEND_INVALID_RIGHT 0x1000000a
#define KERN_RAGEVNODE 68
#define __DARWIN_PDP_ENDIAN 3412
#define MATTR_REPLICATE 4
#define PSWP 0
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define __DBL_DENORM_MIN__ ((double)4.94065645841246544176568792868221372e-324L)
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8 1
#define invalid_policy(policy) ((policy) != POLICY_TIMESHARE && (policy) != POLICY_RR && (policy) != POLICY_FIFO)
#define HOST_XPC_EXCEPTION_PORT (17 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define __OS_EXTENSION_UNAVAILABLE(_msg) __OSX_EXTENSION_UNAVAILABLE(_msg) __IOS_EXTENSION_UNAVAILABLE(_msg)
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define __IPHONE_11_4 110400
#define htons(x) __DARWIN_OSSwapInt16(x)
#define PCATCH 0x100
#define host_priv_MSG_COUNT 26
#define VM_INHERIT_DONATE_COPY ((vm_inherit_t) 3)
#define __GCC_IEC_559 2
#define UNUSED(x) UNUSED_ ##x __attribute__((unused))
#define MACH_MSG_GUARD_FLAGS_MASK 0x0003
#define host_set_launchctl_port(host,port) (host_set_special_port((host), HOST_LAUNCHCTL_PORT, (port)))
#define VM_PROT_ALL (VM_PROT_READ|VM_PROT_WRITE|VM_PROT_EXECUTE)
#define _VA_LIST_ 
#define __FLT32X_DECIMAL_DIG__ 17
#define EXC_I386_STKFLT 12
#define VM_MAXID 6
#define _STRUCT_X86_CPMU_STATE64 struct __darwin_x86_cpmu_state64
#define __IOS_PROHIBITED 
#define x86_AVX_STATE_COUNT ((mach_msg_type_number_t) (sizeof(x86_avx_state_t)/sizeof(unsigned int)))
#define P_FSTRACE 0
#define __FLT_EVAL_METHOD__ 0
#define CPU_SUBTYPE_PENTIUM_3_M CPU_SUBTYPE_INTEL(8, 1)
#define MACH_MSG_IPC_KERNEL 0x00000800
#define NeXTBSD4_0 0
#define KERN_NOT_SUPPORTED 46
#define __NDR_convert__float_rep__ 0
#define MACH_PORT_TYPE_DEAD_NAME MACH_PORT_TYPE(MACH_PORT_RIGHT_DEAD_NAME)
#define MACH_SEND_NO_BUFFER 0x1000000d
#define P_PPWAIT 0x00000010
#define KERN_AFFINITY 43
#define MAX_ZTRACE_DEPTH 15
#define _MACH_NOTIFY_H_ 
#define AUDIT_TRIGGER_INITIALIZE 7
#define TASK_EXC_GUARD_MP_FATAL 0x80
#define CPU_SUBTYPE_INTEL_MODEL_ALL 0
#define dtob(x) ((x)<<DEV_BSHIFT)
#define EVFILT_SIGNAL (-6)
#define TASK_TRACE_MEMORY_INFO 24
#define HOST_EXTMOD_INFO64_COUNT ((mach_msg_type_number_t) (sizeof(vm_extmod_statistics_data_t)/sizeof(integer_t)))
#define MPO_TEMPOWNER 0x04
#define TAILQ_INSERT_BEFORE(listelm,elm,field) do { TAILQ_CHECK_PREV(listelm, field); (elm)->field.tqe_prev = (listelm)->field.tqe_prev; TAILQ_NEXT((elm), field) = (listelm); *(listelm)->field.tqe_prev = (elm); (listelm)->field.tqe_prev = &TAILQ_NEXT((elm), field); QMD_TRACE_ELEM(&(elm)->field); QMD_TRACE_ELEM(&listelm->field); } while (0)
#define LIST_REMOVE(elm,field) do { LIST_CHECK_NEXT(elm, field); LIST_CHECK_PREV(elm, field); if (LIST_NEXT((elm), field) != NULL) LIST_NEXT((elm), field)->field.le_prev = (elm)->field.le_prev; *(elm)->field.le_prev = LIST_NEXT((elm), field); TRASHIT((elm)->field.le_next); TRASHIT((elm)->field.le_prev); } while (0)
#define __WATCHOS_4_0 40000
#define PROC_FLAG_IOS_APPLEDAEMON 0x20000
#define A_SETFSIZE 26
#define MEMORY_OBJECT_DATA_PURGE 0x4
#define __FLT64_DECIMAL_DIG__ 17
#define VM_PAGE_QUERY_PAGE_FICTITIOUS 0x2
#define MACH_RCV_TRAILER_ELEMENTS(x) (((x) & 0xf) << 24)
#define IPC_SPACE_READ_NULL ((ipc_space_read_t) 0)
#define __disable_tail_calls 
#define KERN_KDREADCURTHRMAP 21
#define FPE_NOOP 0
#define CPU_ARCH_ABI64_32 0x02000000
#define _STRUCT_MCONTEXT64_FULL struct __darwin_mcontext64_full
#define TH_USAGE_SCALE 1000
#define _thread_act_user_ 
#define HOST_LAST_SPECIAL_KERNEL_PORT HOST_IO_MASTER_PORT
#define KERN_NISDOMAINNAME 22
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define VM_BEHAVIOR_SEQUENTIAL ((vm_behavior_t) 2)
#define MACH_SEND_NO_GRANT_DEST 0x10000016
#define NOTE_VM_PRESSURE_TERMINATE 0x40000000
#define HW_MEMSIZE 24
#define CLD_STOPPED 5
#define LINK_MAX 32767
#define VM_MEMORY_COREGRAPHICS 42
#define __IPHONE_2_0 20000
#define __IPHONE_2_1 20100
#define __IPHONE_2_2 20200
#define INT8_MIN -128
#define CRF_NOMEMBERD 0x00000001
#define ILL_NOOP 0
#define EV_ENABLE 0x0004
#define SIG_IGN (void (*)(int))1
#define MACH_MSGH_KIND_NORMAL 0x00000000
#define KERN_DUMPDEV 31
#define __DARWIN_SUF_1050 "$1050"
#define _OS__OSBYTEORDERI386_H 
#define CPUFAMILY_ARM_VORTEX_TEMPEST 0x07d34b9f
#define WORD_BIT 32
#define STAILQ_SWAP(head1,head2,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH do { struct type *swap_first = STAILQ_FIRST(head1); struct type **swap_last = (head1)->stqh_last; STAILQ_FIRST(head1) = STAILQ_FIRST(head2); (head1)->stqh_last = (head2)->stqh_last; STAILQ_FIRST(head2) = swap_first; (head2)->stqh_last = swap_last; if (STAILQ_EMPTY(head1)) (head1)->stqh_last = &STAILQ_FIRST(head1); if (STAILQ_EMPTY(head2)) (head2)->stqh_last = &STAILQ_FIRST(head2); } while (0) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define _PID_T 
#define TAILQ_EMPTY(head) ((head)->tqh_first == NULL)
#define VM_BEHAVIOR_REUSABLE ((vm_behavior_t) 8)
#define TASK_KERNELMEMORY_INFO 7
#define VM_PURGABLE_DENY 3
#define SM_TRUESHARED 5
#define BSD4_4 1
#define MIG_SUBSYSTEM_NULL ((mig_subsystem_t)0)
#define SIGPROF 27
#define MBIGCLBYTES (1 << MBIGCLSHIFT)
#define TH_STATE_UNINTERRUPTIBLE 4
#define _MACH_DEBUG_LOCKGROUP_INFO_H_ 
#define CPUFAMILY_INTEL_SANDYBRIDGE 0x5490b78c
#define CIRCLEQ_NEXT(elm,field) ((elm)->field.cqe_next)
#define _MACH_DEBUG_MACH_DEBUG_TYPES_H_ 
#define SIGINFO 29
#define VM_PAGE_QUERY_PAGE_CS_VALIDATED 0x100
#define EFL_IF 0x00000200
#define FD_SETSIZE __DARWIN_FD_SETSIZE
#define _SYS_PARAM_H_ 
#define host_get_dynamic_pager_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_DYNAMIC_PAGER_PORT, (port)))
#define AUDIT_TRIGGER_ROTATE_USER 6
#define __UINT_FAST64_MAX__ 0xffffffffffffffffULL
#define KERN_UNOPENEVT_PROC 2
#define __SIG_ATOMIC_TYPE__ int
#define CAST_USER_ADDR_T(a_ptr) ((user_addr_t)((uintptr_t)(a_ptr)))
#define CRF_MAC_ENFORCE 0x00000002
#define _MACH_KERN_RETURN_H_ 
#define VM_REGION_EXTENDED_INFO 13
#define EV_EOF 0x8000
#define MACH_MEMORY_INFO_NAME_MAX_LEN 80
#define TASK_SEATBELT_PORT 7
#define TASK_POWER_INFO_V2_COUNT ((mach_msg_type_number_t) (sizeof (task_power_info_v2_data_t) / sizeof (natural_t)))
#define POLL_MSG 3
#define MAP_MEM_COPYBACK 1
#define MACH_MSG_OPTION_NONE 0x00000000
#define __DBL_MIN_10_EXP__ (-307)
#define KERN_RAGE_PROC 1
#define INT16_MIN -32768
#define SSTOP 4
#define SLIST_NEXT(elm,field) ((elm)->field.sle_next)
#define VM_REGION_INFO_MAX (1024)
#define __FINITE_MATH_ONLY__ 0
#define USER_STREAM_MAX 19
#define SYNC_POLICY_MAX 0x7
#define MACH_MSG_NULL (mach_msg_header_t *) 0
#define TIME_MICROS_MAX (1000000)
#define __cold __attribute__((__cold__))
#define VM_MEMORY_COREIMAGE 68
#define P_RESV11 0x08000000
#define VM_FLAGS_RESILIENT_MEDIA 0x0040
#define A_OLDSETCOND 21
#define __FLT32X_MAX_EXP__ 1024
#define __DARWIN_NBBY 8
#define i386_THREAD_STATE_COUNT ((mach_msg_type_number_t) ( sizeof (i386_thread_state_t) / sizeof (int) ))
#define MACH_RCV_INVALID_TRAILER 0x1000400f
#define STAILQ_REMOVE(head,elm,type,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH do { if (STAILQ_FIRST((head)) == (elm)) { STAILQ_REMOVE_HEAD((head), field); } else { struct type *curelm = STAILQ_FIRST((head)); while (STAILQ_NEXT(curelm, field) != (elm)) curelm = STAILQ_NEXT(curelm, field); STAILQ_REMOVE_AFTER(head, curelm, field); } TRASHIT((elm)->field.stqe_next); } while (0) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define VM_MEMORY_ANALYSIS_TOOL 10
#define _X86_INSTRUCTION_STATE_MAX_INSN_BYTES (2448 - 64 - 4)
#define MACH_MSGH_BITS_HOLDS_IMPORTANCE_ASSERTION(bits) (((bits) & MACH_MSGH_BITS_IMPHOLDASRT) != MACH_MSGH_BITS_ZERO)
#define CLSIZE 1
#define err_get_sub(err) (((err)>>14)&0xfff)
#define MACH_TASK_BASIC_INFO 20
#define KERN_EXCEPTION_PROTECTED 32
#define NOTE_LEEWAY 0x00000010
#define _MACH_HOST_INFO_H_ 
#define X86_PAGEIN_STATE_COUNT x86_PAGEIN_STATE_COUNT
#define __FLT32_HAS_DENORM__ 1
#define _SYS_LOCK_H_ 
#define KERN_KDSETUP 6
#define DST_USA 1
#define CMP_MACH_TIMESPEC(t1,t2) ((t1)->tv_sec > (t2)->tv_sec ? (long) +NSEC_PER_SEC : ((t1)->tv_sec < (t2)->tv_sec ? (long) -NSEC_PER_SEC : (t1)->tv_nsec - (t2)->tv_nsec))
#define host_set_filecoordinationd_port(host,port) (host_set_special_port((host), HOST_FILECOORDINATIOND_PORT, (port)))
#define SIGFPE 8
#define KERN_OPERATION_TIMED_OUT 49
#define KERN_JOB_CONTROL 19
#define __DECONST(type,var) __CAST_AWAY_QUALIFIER(var, const, type)
#define CPU_SUBTYPE_MASK 0xff000000
#define PTR_ERR(ptr) (intptr_t) (ptr)
#define A_OLDGETPOLICY 2
#define VOUCHER_MACH_MSG_STATE_UNCHANGED ((voucher_mach_msg_state_t)~0ul)
#define VM_REGION_SUBMAP_INFO_V0_SIZE (VM_REGION_SUBMAP_INFO_V1_SIZE - sizeof (unsigned int) )
#define __UINT_FAST8_MAX__ 0xff
#define AT_IPC_SEM ((unsigned char)2)
#define __WATCHOS_PROHIBITED 
#define KERN_KDEBUG 24
#define __RequestUnion__clock_priv_subsystem__defined 
#define NGROUPS NGROUPS_MAX
#define MACH_SEND_KERNEL 0x00400000
#define _LIMITS_H___ 
#define HOST_CONTAINERD_PORT (18 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define DST_AUST 2
#define SA_RESTART 0x0002
#define _FD_SET 
#define __FLT32_MAX_10_EXP__ 38
#define _task_user_ 
#define HOST_NOTIFY_CALENDAR_CHANGE 0
#define INT_FAST8_MAX INT8_MAX
#define CLOCK_ALARM_MAXRES 5
#define MAP_MEM_NAMED_REUSE 0x080000
#define sv_onstack sv_flags
#define TASK_HOST_PORT 2
#define VM_VOLATILE_MAKE_LAST_IN_GROUP (0 << VM_VOLATILE_ORDER_SHIFT)
#define KERN_MISSING_KC 54
#define EPROC_SLEADER 0x02
#define MACH_VOUCHER_ATTR_NOOP ((mach_voucher_attr_recipe_command_t)0)
#define CPU_SUBTYPE_XEON CPU_SUBTYPE_INTEL(12, 0)
#define err_max_system 0x3f
#define MACH_RCV_INVALID_NAME 0x10004002
#define __INT8_C(c) c
#define __PTHREAD_CONDATTR_SIZE__ 8
#define NOTE_EXEC 0x20000000
#define OSSwapConstInt64(x) __DARWIN_OSSwapConstInt64(x)
#define EXC_I386_PGFLT 14
#define EVFILT_SYSCOUNT 17
#define KEVENT_FLAG_IMMEDIATE 0x000001
#define VM_VOLATILE_GROUP_MASK (7 << VM_VOLATILE_GROUP_SHIFT)
#define PROCESSOR_INFO_MAX (1024)
#define MAP_MEM_PURGABLE 0x040000
#define __INT_LEAST8_WIDTH__ 8
#define MACHINE_THREAD_STATE x86_THREAD_STATE
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffULL
#define KERN_SAVED_IDS 20
#define GET_MZI_COLLECTABLE_BYTES(val) ((val) >> 1)
#define _ERRNO_T 
#define FPC_IC_AFF 0x1000
#define HOST_SEATBELT_PORT (7 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define AT_IPC_SHM ((unsigned char)3)
#define VM_MAX_ADDRESS ((vm_offset_t) 0xFFE00000)
#define __restrict restrict
#define EVFILT_EXCEPT (-15)
#define _MACH_VM_SYNC_H_ 
#define __RequestUnion__host_priv_subsystem__defined 
#define CPU_STATE_NICE 3
#define POLL_PRI 5
#define __SHRT_MAX__ 0x7fff
#define __LDBL_MAX__ 1.18973149535723176502126385303097021e+4932L
#define __exported_pop _Pragma("GCC visibility pop")
#define __SCCSID(s) __IDSTRING(sccsid,s)
#define OSSwapLittleToHostInt64(x) ((uint64_t)(x))
#define __DARWIN_C_ANSI 010000L
#define __FLT64X_MAX_10_EXP__ 4932
#define _MACH_VM_BEHAVIOR_H_ 
#define MPO_QLIMIT 0x02
#define NOTE_EXIT_DETAIL 0x02000000
#define POLL_HUP 6
#define __DARWIN_EXTSN(sym) __asm("_" __STRING(sym) __DARWIN_SUF_EXTSN)
#define MACH_PORT_QLIMIT_MAX MACH_PORT_QLIMIT_LARGE
#define SWITCH_OPTION_WAIT 2
#define MACH_RCV_GUARDED_DESC 0x00001000
#define CTLTYPE_NODE 1
#define __IPHONE_10_0 100000
#define __IPHONE_10_1 100100
#define __IPHONE_10_2 100200
#define __IPHONE_10_3 100300
#define EXC_RPC_ALERT 9
#define ctos(x) (x)
#define A_SETKAUDIT 30
#define __LDBL_IS_IEC_60559__ 2
#define _PTHREAD_MUTEX_T 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_1(x) 
#define KERN_USRSTACK KERN_USRSTACK64
#define __DARWIN_FD_COPY(f,t) bcopy(f, t, sizeof(*(f)))
#define TASK_DYLD_ALL_IMAGE_INFO_64 1
#define KERN_PROTECTION_FAILURE 2
#define A_GETFSIZE 27
#define __NDR_convert__ 0
#define SET_MZI_COLLECTABLE_FLAG(val,flag) (val) = (flag) ? ((val) | 1) : (val)
#define VM_MEMORY_COREUI_CACHED_IMAGE_DATA 103
#define MPO_INSERT_SEND_RIGHT 0x10
#define __ReplyUnion__vm_map_subsystem__defined 
#define __FLT64X_HAS_QUIET_NAN__ 1
#define __WATCHOS_5_1 50100
#define __WATCHOS_5_3 50300
#define ERR_SUCCESS (mach_error_t)0
#define SIGSEGV 11
#define __DARWIN_howmany(x,y) ((((x) % (y)) == 0) ? ((x) / (y)) : (((x) / (y)) + 1))
#define EV_POLL EV_FLAG0
#define MAP_MEM_INNERWBACK 5
#define NOGROUP 65535
#define _SYS_UCRED_H_ 
#define CPU_SUBTYPE_INTEL(f,m) ((cpu_subtype_t) (f) + ((m) << 4))
#define MACH_PORT_STATUS_FLAG_TEMPOWNER 0x01
#define NAME_MAX 255
#define CPU_SUBTYPE_LIB64 0x80000000
#define THREAD_FLAVOR_INSPECT 2
#define VM_PURGABLE_ORDERING_MASK (1 << VM_PURGABLE_ORDERING_SHIFT)
#define ___POSIX_C_DEPRECATED_STARTING_200809L 
#define __UINT_LEAST8_MAX__ 0xff
#define MACH_NOTIFY_SEND_ONCE (MACH_NOTIFY_FIRST + 007)
#define TASK_BASE_QOS_POLICY 8
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define CPU_SUBTYPE_HPPA_ALL ((cpu_subtype_t) 0)
#define __alloc_size(...) __attribute__((alloc_size(__VA_ARGS__)))
#define AU_IPv6 16
#define ULONG_LONG_MAX (LONG_LONG_MAX * 2ULL + 1ULL)
#define EXC_I386_EXTOVR 4
#define __FLT128_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F128
#define TASK_POWER_INFO_V2 26
#define KERN_OSTYPE 1
#define bcopy(src,dest,...) __builtin___memmove_chk (dest, src, __VA_ARGS__, __darwin_obsz0 (dest))
#define USER_POSIX2_CHAR_TERM 13
#define HOST_VM_INFO_REV1_COUNT ((mach_msg_type_number_t) (HOST_VM_INFO_REV2_COUNT - 1))
#define PROC_FLAG_ADAPTIVE_IMPORTANT 0x200000
#define __APPLE_CC__ 1
#define __UINTMAX_TYPE__ long unsigned int
#define EFL_TF 0x00000100
#define LIST_FIRST(head) ((head)->lh_first)
#define host_set_coalition_port(host,port) (host_set_special_port((host), HOST_COALITION_PORT, (port)))
#define SIDL 1
#define HOST_CAN_HAS_DEBUGGER 11
#define __result_use_check __attribute__((__warn_unused_result__))
#define INT_FAST8_MIN INT8_MIN
#define CTL_DEBUG 5
#define MACH_VOUCHER_ATTR_VALUE_FLAGS_NONE ((mach_voucher_attr_value_flags_t)0)
#define KERN_KDPIDEX 14
#define __APPLE_API_STANDARD 
#define KERN_NOT_RECEIVER 7
#define EVFILT_THREADMARKER EVFILT_SYSCOUNT
#define HW_BUS_FREQ 14
#define CPU_SUBTYPE_ARM_ALL ((cpu_subtype_t) 0)
#define WCHAR_MIN (-WCHAR_MAX-1)
#define X86_DEBUG_STATE64_COUNT x86_DEBUG_STATE64_COUNT
#define MACH_MSG_VM_SPACE 0x00001000
#define EXC_MASK_RPC_ALERT (1 << EXC_RPC_ALERT)
#define __API_DEPRECATED_BEGIN(...) 
#define __FLT_EVAL_METHOD_TS_18661_3__ 0
#define KERN_BOOTTIME 21
#define MATTR_VAL_ON 1
#define _RSIZE_T 
#define OSSwapHostToLittleConstInt16(x) ((uint16_t)(x))
#define VM_BEHAVIOR_CAN_REUSE ((vm_behavior_t) 10)
#define TIME_UTC 1
#define THREAD_READ_PORT 3
#define task_get_kernel_port(task,port) (task_get_special_port((task), TASK_KERNEL_PORT, (port)))
#define CPUFAMILY_ARM_MONSOON_MISTRAL 0xe81e7ef6
#define KERN_UPDATEINTERVAL 25
#define _PTHREAD_T 
#define host_get_iocompressionstats_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_IOCOMPRESSIONSTATS_PORT, (port)))
#define TASK_EXC_GUARD_VM_ALL 0x0f
#define _MACH_HOST_NOTIFY_H_ 
#define MPG_FLAGS_IMMOVABLE_PINNED (0x01ull << 56)
#define __UINT32_MAX__ 0xffffffffU
#define MACH_RCV_INTERRUPT 0x00000400
#define __bool_true_false_are_defined 1
#define CPUFAMILY_ARM_9 0xe73283ae
#define VM_MEMORY_COREDATA_OBJECTIDS 46
#define __PTHREAD_MUTEX_SIZE__ 56
#define CTL_VM 2
#define KIPC_MAX_DATALEN 7
#define __DARWIN_UNIX03 1
#define USER_BC_BASE_MAX 2
#define _MACH_TASK_INFO_H_ 
#define EXCEPTION_STATE_IDENTITY 3
#define _POSIX_AIO_MAX 1
#define DEV_BSIZE 512
#define host_get_io_master_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_IO_MASTER_PORT, (port)))
#define CPU_SUBTYPE_386 CPU_SUBTYPE_INTEL(3, 0)
#define _POSIX_PIPE_BUF 512
#define SIGUSR1 30
#define IPC_VOUCHER_NULL ((ipc_voucher_t) 0)
#define _POSIX2_EXPR_NEST_MAX 32
#define err_server err_system(0x2)
#define __printflike(fmtarg,firstvararg) __attribute__((__format__ (__printf__, fmtarg, firstvararg)))
#define _XOPEN_NAME_MAX 255
#define __TVOS_11_0 110000
#define __TVOS_11_1 110100
#define __TVOS_11_2 110200
#define _MACH_MACHINE_BOOLEAN_H_ 
#define __TVOS_9_2 90200
#define AUDIT_EXPIRE_OP_OR ((unsigned char)1)
#define UINT_FAST16_MAX UINT16_MAX
#define VM_LOADAVG 2
#define P_DIRTY_BUSY 0x00000040
#define __FLT128_MIN_EXP__ (-16381)
#define SLIST_REMOVE(head,elm,type,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH do { if (SLIST_FIRST((head)) == (elm)) { SLIST_REMOVE_HEAD((head), field); } else { struct type *curelm = SLIST_FIRST((head)); while (SLIST_NEXT(curelm, field) != (elm)) curelm = SLIST_NEXT(curelm, field); SLIST_REMOVE_AFTER(curelm, field); } TRASHIT((elm)->field.sle_next); } while (0) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define _POSIX_SYMLOOP_MAX 8
#define __WINT_MIN__ (-__WINT_MAX__ - 1)
#define CTLTYPE_OPAQUE 5
#define MEMORY_OBJECT_CONTROL_NULL ((memory_object_control_t) 0)
#define subsystem_to_name_map_task { "task_create", 3400 }, { "task_terminate", 3401 }, { "task_threads", 3402 }, { "mach_ports_register", 3403 }, { "mach_ports_lookup", 3404 }, { "task_info", 3405 }, { "task_set_info", 3406 }, { "task_suspend", 3407 }, { "task_resume", 3408 }, { "task_get_special_port", 3409 }, { "task_set_special_port", 3410 }, { "thread_create", 3411 }, { "thread_create_running", 3412 }, { "task_set_exception_ports", 3413 }, { "task_get_exception_ports", 3414 }, { "task_swap_exception_ports", 3415 }, { "lock_set_create", 3416 }, { "lock_set_destroy", 3417 }, { "semaphore_create", 3418 }, { "semaphore_destroy", 3419 }, { "task_policy_set", 3420 }, { "task_policy_get", 3421 }, { "task_sample", 3422 }, { "task_policy", 3423 }, { "task_set_emulation", 3424 }, { "task_get_emulation_vector", 3425 }, { "task_set_emulation_vector", 3426 }, { "task_set_ras_pc", 3427 }, { "task_zone_info", 3428 }, { "task_assign", 3429 }, { "task_assign_default", 3430 }, { "task_get_assignment", 3431 }, { "task_set_policy", 3432 }, { "task_get_state", 3433 }, { "task_set_state", 3434 }, { "task_set_phys_footprint_limit", 3435 }, { "task_suspend2", 3436 }, { "task_resume2", 3437 }, { "task_purgable_info", 3438 }, { "task_get_mach_voucher", 3439 }, { "task_set_mach_voucher", 3440 }, { "task_swap_mach_voucher", 3441 }, { "task_generate_corpse", 3442 }, { "task_map_corpse_info", 3443 }, { "task_register_dyld_image_infos", 3444 }, { "task_unregister_dyld_image_infos", 3445 }, { "task_get_dyld_image_infos", 3446 }, { "task_register_dyld_shared_cache_image_info", 3447 }, { "task_register_dyld_set_dyld_state", 3448 }, { "task_register_dyld_get_process_state", 3449 }, { "task_map_corpse_info_64", 3450 }, { "task_inspect", 3451 }, { "task_get_exc_guard_behavior", 3452 }, { "task_set_exc_guard_behavior", 3453 }, { "task_create_suid_cred", 3454 }, { "task_dyld_process_info_notify_register", 3456 }, { "task_create_identity_token", 3457 }, { "task_identity_token_get_task_port", 3458 }, { "task_dyld_process_info_notify_deregister", 3459 }, { "task_get_exception_ports_info", 3460 }
#define EFL_SET 0x00000002
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_2(x) 
#define KERN_POSIX1 17
#define __pure2 __attribute__((__const__))
#define VM_PURGABLE_ALL_MASKS (VM_PURGABLE_STATE_MASK | VM_VOLATILE_ORDER_MASK | VM_PURGABLE_ORDERING_MASK | VM_PURGABLE_BEHAVIOR_MASK | VM_VOLATILE_GROUP_MASK | VM_PURGABLE_DEBUG_MASK | VM_PURGABLE_NO_AGING_MASK)
#define NZERO 20
#define UINT16_C(v) (v)
#define VM_MEMORY_CM_RPC 93
#define CPUFAMILY_INTEL_NEHALEM 0x6b5a4cd2
#define MACH_MSG_TYPE_DISPOSE_RECEIVE 24
#define ALIGN(p) __DARWIN_ALIGN(p)
#define msgh_reserved msgh_voucher_port
#define host_get_sysdiagnose_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_SYSDIAGNOSE_PORT, (port)))
#define __FLT128_MIN_10_EXP__ (-4931)
#define HW_VECTORUNIT 13
#define KERN_CODESIGN_ERROR 50
#define __FLT32X_IS_IEC_60559__ 2
#define VM_MEMORY_IOSURFACE 88
#define _MACH_MACH_TYPES_H_ 
#define EXC_I386_ENDPERR 33
#define MAP_MEM_WTHRU 3
#define HOST_SECURITY_NULL ((host_security_t) 0)
#define _STDARG_H 
#define htonl(x) __DARWIN_OSSwapInt32(x)
#define _MACH_INIT_ 1
#define __INT_LEAST16_WIDTH__ 16
#define MACH_VOUCHER_ATTR_KEY_USER_DATA ((mach_voucher_attr_key_t)7)
#define _BSD_MACHINE_PARAM_H_ 
#define MACH_MSG_FILTER_POLICY_ALLOW (mach_msg_filter_id)0
#define __AVAILABILITY_INTERNAL_WEAK_IMPORT __attribute__((weak_import))
#define _U_SHORT 
#define HOST_EXPIRED_TASK_INFO 6
#define _STRUCT_MCONTEXT _STRUCT_MCONTEXT64
#define __SCHAR_MAX__ 0x7f
#define __FLT128_MANT_DIG__ 113
#define STAILQ_HEAD(name,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct name { struct type *stqh_first; struct type **stqh_last; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define VM_LEDGER_FLAG_NO_FOOTPRINT 0x00000001
#define KERN_PROC_SESSION 3
#define __IPHONE_6_0 60000
#define __IPHONE_6_1 60100
#define OFF_MAX LLONG_MAX
#define __WCHAR_MIN__ (-__WCHAR_MAX__ - 1)
#define HOST_RESOURCE_NOTIFY_PORT (20 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define THREAD_STATE_FLAVOR_LIST 0
#define _FSOBJ_ID_T 
#define KERN_LOCK_SET_DESTROYED 38
#define MACH_MSG_VIRTUAL_COPY 1
#define CLOCK_ALARM_MINRES 4
#define THROUGHPUT_QOS_LAUNCH_DEFAULT_TIER THROUGHPUT_QOS_TIER_3
#define FP_PREC_24B 0
#define _STRUCT_YMM_REG struct __darwin_ymm_reg
#define TASK_BASE_LATENCY_QOS_POLICY 10
#define __INT64_C(c) c ## LL
#define KERN_NODE_DOWN 47
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_15(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_16(x) x
#define AUDIT_TRIGGER_CLOSE_AND_DIE 4
#define SRUN 2
#define SA_SIGINFO 0x0040
#define HW_DISKNAMES 8
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define OSWriteLittleInt64(base,byteOffset,data) _OSWriteInt64(base, byteOffset, data)
#define _SYS_VM_H 
#define THREAD_FLAVOR_CONTROL 0
#define CPU_SUBTYPE_ITANIUM_2 CPU_SUBTYPE_INTEL(11, 1)
#define _STRUCT_X86_FLOAT_STATE32 struct __darwin_i386_float_state
#define __MAC_11_1 110100
#define MACH_PORT_STATUS_FLAG_TASKPTR 0x20
#define LITTLE_ENDIAN __DARWIN_LITTLE_ENDIAN
#define __RequestUnion__task_subsystem__defined 
#define _STRUCT_X86_THREAD_STATE32 struct __darwin_i386_thread_state
#define _STRUCT_X86_INSTRUCTION_STATE struct __x86_instruction_state
#define VM_PAGE_QUERY_PAGE_PAGED_OUT 0x10
#define MACH_VOUCHER_ATTR_KEY_IMPORTANCE ((mach_voucher_attr_key_t)2)
#define HTONS(x) (x) = htons((__uint16_t)x)
#define _FORTIFY_SOURCE 2
#define VM_MEMORY_MALLOC_HUGE 4
#define VM_PURGABLE_ORDERING_NORMAL (0 << VM_PURGABLE_ORDERING_SHIFT)
#define CPU_TYPE_ARM64_32 (CPU_TYPE_ARM | CPU_ARCH_ABI64_32)
#define MACH_RCV_INVALID_TYPE 0x1000400d
#define MAXPATHLEN PATH_MAX
#define AU_FS_MINFREE 20
#define MAC_OS_X_VERSION_10_10_2 101002
#define MACH_PORT_STATUS_FLAG_GUARD_IMMOVABLE_RECEIVE 0x40
#define CPU_TYPE_HPPA ((cpu_type_t) 11)
#define x86_AVX_STATE (x86_AVX_STATE32 + 2)
#define AUDIT_PERZONE 0x2000
#define PINOD 8
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_4(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_2(x) 
#define _MACH_DEBUG_VM_INFO_H_ 
#define _MACH_VOUCHER_TYPES_H_ 
#define AUDIT_ARGE 0x0008
#define sint(size) glue3(int,size,_t)
#define CTL_KERN 1
#define VM_INHERIT_COPY ((vm_inherit_t) 1)
#define _BLKSIZE_T 
#define _processor_user_ 
#define SIGTTOU 22
#define VM_BEHAVIOR_RANDOM ((vm_behavior_t) 1)
#define PAGE_MAX_MASK (PAGE_MAX_SIZE-1)
#define __API_UNAVAILABLE_BEGIN_GET_MACRO(...) 
#define KERN_POSIX 58
#define _INT32_T 
#define VM_MEMORY_CM_CRABS 96
#define NSEC_PER_SEC 1000000000ull
#define CMASK 022
#define USER_POSIX2_FORT_RUN 15
#define MACH_MSGH_BITS(remote,local) ((remote) | ((local) << 8))
#define _STRUCT_SIGALTSTACK struct __darwin_sigaltstack
#define KERN_KDENABLE 3
#define NAME_SERVER_SLOT 0
#define EXC_MASK_BAD_INSTRUCTION (1 << EXC_BAD_INSTRUCTION)
#define _STRUCT_LAST_BRANCH_RECORD struct __last_branch_record
#define TAILQ_CHECK_NEXT(elm,field) 
#define _MACH_I386_PROCESSOR_INFO_H_ 
#define _LIMITS_H_ 
#define VM_PURGABLE_PURGE_ALL ((vm_purgable_t) 2)
#define _POSIX2_BC_STRING_MAX 1000
#define HOST_VM_PURGABLE_COUNT ((mach_msg_type_number_t) (sizeof(host_purgable_info_data_t)/sizeof(integer_t)))
#define _STRUCT_X86_FLOAT_STATE64 struct __darwin_x86_float_state64
#define VM_FLAGS_PURGABLE 0x0002
#define CPU_SUBTYPE_MC68030_ONLY ((cpu_subtype_t) 3)
#define HOST_VM_INFO_COUNT ((mach_msg_type_number_t) (sizeof(vm_statistics_data_t)/sizeof(integer_t)))
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_2(x) x
#define TASK_NAME_PORT 3
#define __DARWIN_ONLY_UNIX_CONFORMANCE 1
#define P_REBOOT 0x00200000
#define KERN_SYSV 42
#define HOST_NULL ((host_t) 0)
#define __FLT32X_MANT_DIG__ 53
#define __NEW_SCHEDULING_FRAMEWORK__ 
#define LEDGER_ITEM_INFINITY ((ledger_item_t) (~0))
#define _POSIX_SEM_NSEMS_MAX 256
#define trunc_page_kernel(x) ((x) & (~vm_kernel_page_mask))
#define P_OWEUPC 0x00008000
#define _IN_PORT_T 
#define __USER_LABEL_PREFIX__ _
#define KERN_OSVERSION 65
#define MACH_MSGH_BITS_ZERO 0x00000000
#define CTLTYPE_QUAD 4
#define KERN_MAXPROC 6
#define VM_REGION_SUBMAP_INFO_V1_SIZE (VM_REGION_SUBMAP_INFO_V2_SIZE - sizeof (vm_object_id_t) )
#define __MAC_10_10_2 101002
#define __MAC_10_10_3 101003
#define VM_BEHAVIOR_WILLNEED ((vm_behavior_t) 4)
#define AUDIT_TRIGGER_EXPIRE_TRAILS 8
#define KERN_KDPIDTR 11
#define SERVICE_SLOT 2
#define _SYS_QUEUE_H_ 
#define VM_PURGABLE_ORDERING_SHIFT 5
#define AUDIT_TRIGGER_FILE ("/dev/" AUDITDEV_FILENAME)
#define SEMAPHORE_NULL ((semaphore_t) 0)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11(x) x
#define MACH_SEND_IMPORTANCE 0x00080000
#define err_us err_system(0x1)
#define OSSwapHostToBigInt(x) OSSwapHostToBigInt32(x)
#define __END_DECLS 
#define PAGE_MIN_SHIFT 12
#define task_MSG_COUNT 61
#define __FLT64X_EPSILON__ 1.08420217248550443400745280086994171e-19F64x
#define HOST_IO_MASTER_PORT 3
#define _STRUCT_MCONTEXT32 struct __darwin_mcontext32
#define __CONCAT(x,y) x ## y
#define OSReadBigInt64(base,byteOffset) OSReadSwapInt64(base, byteOffset)
#define CPUFAMILY_INTEL_SKYLAKE 0x37fc219f
#define MACH_SEND_INVALID_CONTEXT 0x10000012
#define VM_SYNC_DEACTIVATE ((vm_sync_t) 0x10)
#define __STDC_HOSTED__ 1
#define HOST_PRIORITY_INFO 5
#define KERN_RAGE_THREAD 2
#define VM_INHERIT_DEFAULT VM_INHERIT_COPY
#define MATTR_VAL_GET 2
#define MCLBYTES (1 << MCLSHIFT)
#define CPU_SUBTYPE_BIG_ENDIAN ((cpu_subtype_t) 1)
#define AUDIT_SEQ 0x0010
#define VM_MEMORY_AUDIO 90
#define round_msg(x) (((mach_msg_size_t)(x) + sizeof (natural_t) - 1) & ~(sizeof (natural_t) - 1))
#define ITIMER_PROF 2
#define CBSIZE (CBLOCK - sizeof(struct cblock *) - CBQSIZE)
#define ALARM_NULL ((alarm_t) 0)
#define memmove(dest,...) __builtin___memmove_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define UID_MAX 2147483647U
#define THREAD_AFFINITY_TAG_NULL 0
#define NOTE_NONE 0x00000080
#define mach_task_self() mach_task_self_
#define HOST_CALENDAR_SET_REPLYID 951
#define RPC_SUBSYSTEM_NULL ((rpc_subsystem_t) 0)
#define HW_PRODUCT 27
#define ERR_ROUTINE_NIL (mach_error_fn_t)0
#define MAC_OS_X_VERSION_10_12_1 101201
#define MACH_PORT_DENAP_RECEIVER 6
#define x86_THREAD_FULL_STATE64_COUNT ((mach_msg_type_number_t) ( sizeof (x86_thread_full_state64_t) / sizeof (int) ))
#define MACH_VOUCHER_ATTR_KEY_TEST ((mach_voucher_attr_key_t)8)
#define OSWriteBigInt32(base,byteOffset,data) OSWriteSwapInt32(base, byteOffset, data)
#define OSSwapHostToLittleConstInt32(x) ((uint32_t)(x))
#define CLOCK_UPTIME_RAW_APPROX _CLOCK_UPTIME_RAW_APPROX
#define MACH_PORT_STATUS_FLAG_GUARDED 0x02
#define MAC_OS_X_VERSION_10_12_4 101204
#define TASK_TRACE_MEMORY_INFO_COUNT ((mach_msg_type_number_t) (sizeof(task_trace_memory_info_data_t) / sizeof(natural_t)))
#define POLICY_TIMESHARE_LIMIT_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_timeshare_limit)/sizeof(integer_t)))
#define cr_gid cr_groups[0]
#define HOST_PORT 1
#define USER_EXPR_NEST_MAX 7
#define TASK_SCHED_RR_INFO 11
#define CPU_SUBTYPE_MC88100 ((cpu_subtype_t) 1)
#define processor_set_MSG_COUNT 11
#define KERN_AIOPROCMAX 47
#define MPG_STRICT 0x01
#define memcpy(dest,...) __builtin___memcpy_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define __strfmonlike(fmtarg,firstvararg) __attribute__((__format__ (__strfmon__, fmtarg, firstvararg)))
#define __IPHONE_14_0 140000
#define __IPHONE_14_1 140100
#define __IPHONE_14_3 140300
#define __IPHONE_14_5 140500
#define __DBL_DIG__ 15
#define _SYS__ENDIAN_H_ 
#define X86_LAST_BRANCH_STATE_COUNT x86_LAST_BRANCH_STATE_COUNT
#define strncat(dest,...) __builtin___strncat_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define __FLT32_DIG__ 6
#define MACH_RCV_TRAILER_AV 7
#define x86_THREAD_FULL_STATE64 23
#define SIGTRAP 5
#define VM_BEHAVIOR_DONTNEED ((vm_behavior_t) 5)
#define __SWIFT_UNAVAILABLE_MSG(_msg) 
#define EVFILT_VM (-12)
#define MACH_PORT_INFO_EXT 7
#define __FLT_EPSILON__ 1.19209289550781250000000000000000000e-7F
#define KERN_INVALID_PROCESSOR_SET 26
#define INT32_MIN (-INT32_MAX-1)
#define PROCESSOR_SET_NULL ((processor_set_t) 0)
#define _GID_T 
#define THREAD_MAX_SPECIAL_PORT THREAD_READ_PORT
#define KERN_TERMINATED 37
#define M16KCLBYTES (1 << M16KCLSHIFT)
#define host_get_lockd_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_LOCKD_PORT, (port)))
#define __scanflike(fmtarg,firstvararg) __attribute__((__format__ (__scanf__, fmtarg, firstvararg)))
#define VM_PURGABLE_BEHAVIOR_MASK (1 << VM_PURGABLE_BEHAVIOR_SHIFT)
#define NOTE_USECONDS 0x00000002
#define FPC_PC_53 0x0200
#define OSWriteBigInt64(base,byteOffset,data) OSWriteSwapInt64(base, byteOffset, data)
#define __SHRT_WIDTH__ 16
#define __TVOS_9_0 90000
#define __TVOS_9_1 90100
#define KERN_NO_SPACE 3
#define _Nonnull 
#define __DARWIN_FD_CLR(n,p) __darwin_fd_clr((n), (p))
#define VM_MEMORY_LIBDISPATCH 74
#define VM_MEMORY_IMAGEIO 70
#define KERN_SUGID_COREDUMP 52
#define MEMORY_OBJECT_COPY_SYMMETRIC 4
#define TASK_AUDIT_TOKEN 15
#define SIGTTIN 21
#define CPU_SUBTYPE_MIPS_R2800 ((cpu_subtype_t) 3)
#define KERN_INVALID_HOST 22
#define __FLT32_IS_IEC_60559__ 2
#define x86_PAGEIN_STATE 22
#define _MACH_PROCESSOR_INFO_H_ 
#define THREAD_IDENTIFIER_INFO_COUNT ((mach_msg_type_number_t) (sizeof(thread_identifier_info_data_t) / sizeof(natural_t)))
#define __PTHREAD_RWLOCK_SIZE__ 192
#define VM_PURGABLE_BEHAVIOR_FIFO (0 << VM_PURGABLE_BEHAVIOR_SHIFT)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13(x) x
#define KERN_PROC_ALL 0
#define VM_MEMORY_SBRK 5
#define __LDBL_MIN__ 3.36210314311209350626267781732175260e-4932L
#define __STDC_UTF_16__ 1
#define __DBL_IS_IEC_60559__ 2
#define mach_port_MSG_COUNT 40
#define __API_DEPRECATED_MSG_GET_MACRO(...) 
#define SIGQUIT 3
#define __API_AVAILABLE_GET_MACRO(...) 
#define CPU_SUBTYPE_ARM64_V8 ((cpu_subtype_t) 1)
#define MACH_RCV_INVALID_NOTIFY 0x10004007
#define VM_MEMORY_IOACCELERATOR 100
#define P_NOCLDSTOP 0x00000008
#define x86_INSTRUCTION_STATE_COUNT ((mach_msg_type_number_t)(sizeof(x86_instruction_state_t) / sizeof(int)))
#define EXC_MASK_CRASH (1 << EXC_CRASH)
#define __APPLE_API_EVOLVING 
#define EXC_I386_ALIGNFLT 17
#define M16KCLSHIFT 14
#define CTL_USER 8
#define AUDIT_EXPIRE_OP_AND ((unsigned char)0)
#define MACH_PORT_TYPE_SPREQUEST_DELAYED 0x20000000
#define THREAD_NULL ((thread_t) 0)
#define _POSIX_NAME_MAX 14
#define DELAY(n) { int N = (n); while (--N > 0); }
#define EXC_I386_BOUNDFLT 5
#define __options_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_open __enum_options
#define CPU_TYPE_POWERPC64 (CPU_TYPE_POWERPC | CPU_ARCH_ABI64)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_1(x) 
#define KERN_KDREADTR 10
#define TAILQ_PREV(elm,headname,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH (*(((struct headname *)((elm)->field.tqe_prev))->tqh_last)) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define VM_MACHFACTOR 4
#define __strong 
#define MACH_PORT_DEAD ((mach_port_name_t) ~0)
#define MACH_PORT_NULL 0
#define VM_MEMORY_COREGRAPHICS_DATA 54
#define __FLT64X_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951F64x
#define __MAC_10_1 1010
#define MACH_MSGH_BITS_HAS_REMOTE(bits) (MACH_MSGH_BITS_REMOTE(bits) != MACH_MSGH_BITS_ZERO)
#define HW_BYTEORDER 4
#define MATTR_VAL_CACHE_SYNC 9
#define STAILQ_FIRST(head) ((head)->stqh_first)
#define MACH_PORT_TYPE_SEND_RECEIVE (MACH_PORT_TYPE_SEND|MACH_PORT_TYPE_RECEIVE)
#define VM_VOLATILE_MAKE_FIRST_IN_GROUP (1 << VM_VOLATILE_ORDER_SHIFT)
#define SV_SIGINFO SA_SIGINFO
#define CPU_SUBTYPE_PENT CPU_SUBTYPE_INTEL(5, 0)
#define MACH_MSG_SIZE_RELIABLE ((mach_msg_size_t) 256 * 1024)
#define __MAC_10_3 1030
#define SYNC_POLICY_FIXED_PRIORITY 0x1
#define _VA_LIST_DEFINED 
#define P_CLASSIC P_TRANSLATED
#define THREAD_INFO_MAX (32)
#define HW_L1DCACHESIZE 18
#define __FLT32X_HAS_INFINITY__ 1
#define __enum_closed_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_closed
#define __INT32_MAX__ 0x7fffffff
#define CPU_SUBTYPE_ARM_XSCALE ((cpu_subtype_t) 8)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_1(x) 
#define KMOD_MAX_NAME 64
#define CIRCLEQ_LAST(head) ((head)->cqh_last)
#define EXC_GUARD 12
#define CPU_ARCH_ABI64 0x01000000
#define VM_PAGE_QUERY_PAGE_SPECULATIVE 0x40
#define HW_CPU_FREQ 15
#define A_SETCLASS 23
#define x86_FLOAT_STATE 8
#define __AVAILABILITY_VERSIONS__ 
#define __INT_WIDTH__ 32
#define MACH_MSG_PHYSICAL_COPY 0
#define __SIZEOF_LONG__ 8
#define __DARWIN_1050INODE64(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_64_BIT_INO_T)
#define CPU_SUBTYPE_PENTIUM_4 CPU_SUBTYPE_INTEL(10, 0)
#define TH_FLAGS_SWAPPED 0x1
#define HW_MACHINE 1
#define __AVAILABILITY_INTERNAL_REGULAR 
#define CPU_SUBTYPE_MC680x0_ALL ((cpu_subtype_t) 1)
#define SIG_ERR ((void (*)(int))-1)
#define KERN_PS_STRINGS 34
#define SIGEV_NONE 0
#define __DARWIN_WEOF ((__darwin_wint_t)-1)
#define EXCEPTION_STATE 2
#define IS_VALID_CRED(_cr) ((_cr) != NOCRED && (_cr) != FSCRED)
#define subsystem_to_name_map_clock_priv { "clock_set_time", 1200 }, { "clock_set_attributes", 1201 }
#define _POSIX_RTSIG_MAX 8
#define HOST_KTRACE_BACKGROUND_PORT (6 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define VM_MEMORY_VIDEOBITSTREAM 91
#define __SPI_DEPRECATED_WITH_REPLACEMENT(...) 
#define __APPLE__ 1
#define NDR_INT_BIG_ENDIAN 0
#define __UINT16_C(c) c
#define MACH_SEND_TRAILER 0x00020000
#define MPG_FLAGS_STRICT_REPLY_MASK (0xffull << 56)
#define TAILQ_INSERT_HEAD(head,elm,field) do { TAILQ_CHECK_HEAD(head, field); if ((TAILQ_NEXT((elm), field) = TAILQ_FIRST((head))) != NULL) TAILQ_FIRST((head))->field.tqe_prev = &TAILQ_NEXT((elm), field); else (head)->tqh_last = &TAILQ_NEXT((elm), field); TAILQ_FIRST((head)) = (elm); (elm)->field.tqe_prev = &TAILQ_FIRST((head)); QMD_TRACE_HEAD(head); QMD_TRACE_ELEM(&(elm)->field); } while (0)
#define KERN_TFP_POLICY_DEFAULT 2
#define __WATCHOS_7_2 70200
#define VM_MEMORY_MALLOC_TINY 7
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10_2(x) x
#define __WATCHOS_7_3 70300
#define TASK_VM_INFO_COUNT ((mach_msg_type_number_t) (sizeof (task_vm_info_data_t) / sizeof (natural_t)))
#define MACH_SEND_INTERRUPTED 0x10000007
#define CBLOCK 64
#define _INTPTR_T 
#define invalid_memory_object_flavor(f) (f != MEMORY_OBJECT_ATTRIBUTE_INFO && f != MEMORY_OBJECT_PERFORMANCE_INFO && f != OLD_MEMORY_OBJECT_BEHAVIOR_INFO && f != MEMORY_OBJECT_BEHAVIOR_INFO && f != OLD_MEMORY_OBJECT_ATTRIBUTE_INFO)
#define __DECIMAL_DIG__ 21
#define _POSIX2_RE_DUP_MAX 255
#define MEMORY_OBJECT_ATTRIBUTE_INFO 14
#define MACH_PORT_RIGHT_SEND_ONCE ((mach_port_right_t) 2)
#define x86_INSTRUCTION_STATE 24
#define THREAD_LATENCY_QOS_POLICY 7
#define subsystem_to_name_map_mach_port { "mach_port_names", 3200 }, { "mach_port_type", 3201 }, { "mach_port_rename", 3202 }, { "mach_port_allocate_name", 3203 }, { "mach_port_allocate", 3204 }, { "mach_port_destroy", 3205 }, { "mach_port_deallocate", 3206 }, { "mach_port_get_refs", 3207 }, { "mach_port_mod_refs", 3208 }, { "mach_port_peek", 3209 }, { "mach_port_set_mscount", 3210 }, { "mach_port_get_set_status", 3211 }, { "mach_port_move_member", 3212 }, { "mach_port_request_notification", 3213 }, { "mach_port_insert_right", 3214 }, { "mach_port_extract_right", 3215 }, { "mach_port_set_seqno", 3216 }, { "mach_port_get_attributes", 3217 }, { "mach_port_set_attributes", 3218 }, { "mach_port_allocate_qos", 3219 }, { "mach_port_allocate_full", 3220 }, { "task_set_port_space", 3221 }, { "mach_port_get_srights", 3222 }, { "mach_port_space_info", 3223 }, { "mach_port_dnrequest_info", 3224 }, { "mach_port_kernel_object", 3225 }, { "mach_port_insert_member", 3226 }, { "mach_port_extract_member", 3227 }, { "mach_port_get_context", 3228 }, { "mach_port_set_context", 3229 }, { "mach_port_kobject", 3230 }, { "mach_port_construct", 3231 }, { "mach_port_destruct", 3232 }, { "mach_port_guard", 3233 }, { "mach_port_unguard", 3234 }, { "mach_port_space_basic_info", 3235 }, { "mach_port_guard_with_flags", 3237 }, { "mach_port_swap_guard", 3238 }, { "mach_port_kobject_description", 3239 }
#define OS_INLINE static inline
#define MACH_PORT_INDEX(name) ((name) >> 8)
#define P_WEXIT 0x00002000
#define _MACH_THREAD_SWITCH_H_ 
#define MACH_VOUCHER_ATTR_SET_VALUE_HANDLE ((mach_voucher_attr_recipe_command_t)3)
#define TAILQ_REMOVE(head,elm,field) do { TAILQ_CHECK_NEXT(elm, field); TAILQ_CHECK_PREV(elm, field); if ((TAILQ_NEXT((elm), field)) != NULL) TAILQ_NEXT((elm), field)->field.tqe_prev = (elm)->field.tqe_prev; else { (head)->tqh_last = (elm)->field.tqe_prev; QMD_TRACE_HEAD(head); } *(elm)->field.tqe_prev = TAILQ_NEXT((elm), field); TRASHIT((elm)->field.tqe_next); TRASHIT((elm)->field.tqe_prev); QMD_TRACE_ELEM(&(elm)->field); } while (0)
#define OSReadBigInt16(base,byteOffset) OSReadSwapInt16(base, byteOffset)
#define __FLT64_EPSILON__ 2.22044604925031308084726333618164062e-16F64
#define MACH_MSGH_BITS_REMOTE(bits) ((bits) & MACH_MSGH_BITS_REMOTE_MASK)
#define KERN_TTY 69
#define VM_REGION_SUBMAP_INFO_COUNT_64 VM_REGION_SUBMAP_INFO_V2_COUNT_64
#define _MACH_DEBUG_IPC_INFO_H_ 
#define __APPLE_API_STABLE 
#define MACH_VOUCHER_SELECTOR_CURRENT ((mach_voucher_selector_t)0)
#define BC_STRING_MAX 1000
#define OSSwapHostToBigConstInt64(x) OSSwapConstInt64(x)
#define VM_SYNC_REUSABLEPAGES ((vm_sync_t) 0x40)
#define CPU_THREADTYPE_NONE ((cpu_threadtype_t) 0)
#define MAX_INPUT 1024
#define __FLT128_IS_IEC_60559__ 2
#define dbtob(db,devBlockSize) ((unsigned)(db) * devBlockSize)
#define _MACH_I386_VM_TYPES_H_ 
#define FP_PREC_64B 3
#define ENVIRONMENT_SLOT 1
#define KEVENT_FLAG_ERROR_EVENTS 0x000002
#define TAILQ_HEAD_INITIALIZER(head) { NULL, &(head).tqh_first }
#define CPUFAMILY_INTEL_BROADWELL 0x582ed09c
#define TASK_BASIC_INFO_32_COUNT (sizeof(task_basic_info_32_data_t) / sizeof(natural_t))
#define FPE_FLTRES 4
#define VM_MEMORY_JAVASCRIPT_JIT_REGISTER_FILE 65
#define AUC_UNSET 0
#define AUDIT_TRIGGER_READ_FILE 3
#define ctob(x) ((x)<<PGSHIFT)
#define SIG_ATOMIC_MIN INT32_MIN
#define OSReadBigInt32(base,byteOffset) OSReadSwapInt32(base, byteOffset)
#define MIG_NO_REPLY -305
#define EV_RECEIPT 0x0040
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_1(x) 
#define MACH_MSG_TYPE_MAKE_SEND_ONCE 21
#define CTL_DEBUG_NAME 0
#define SI_QUEUE 0x10002
#define __FLT64X_MIN_10_EXP__ (-4931)
#define QUAD_MAX LLONG_MAX
#define ARG_MAX (1024 * 1024)
#define MACH_PORT_TYPE_ALL_RIGHTS (MACH_PORT_TYPE_PORT_OR_DEAD|MACH_PORT_TYPE_PORT_SET)
#define __LDBL_HAS_QUIET_NAN__ 1
#define INT64_C(v) (v ## LL)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_4(x) x
#define code_emask (0x3fff)
#define err_sub(x) (((x)&0xfff)<<14)
#define HOST_GSSD_PORT (12 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define __strftimelike(fmtarg) __attribute__((__format__ (__strftime__, fmtarg, 0)))
#define MAC_OS_X_VERSION_10_14_1 101401
#define MAC_OS_X_VERSION_10_14_6 101406
#define MEMORY_OBJECT_DATA_NO_CHANGE 0x2
#define MAX_AUDIT_RECORD_SIZE MAXAUDITDATA
#define AUDIT_TRIGGER_MAX 8
#define SIGIO 23
#define _QUAD_LOWWORD 0
#define __FLT64_MANT_DIG__ 53
#define FP_NO 0
#define __API_UNAVAILABLE_GET_MACRO(...) 
#define VM_DYLD64 ((user_addr_t) 0x00007FFF5FC00000ULL)
#define MACH_MSG_MASK 0x00003e00
#define CHAR_BIT __CHAR_BIT__
#define EVFILT_PROC (-5)
#define _MACH_THREAD_INFO_H_ 
#define strncpy(dest,...) __builtin___strncpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define STAILQ_CONCAT(head1,head2) do { if (!STAILQ_EMPTY((head2))) { *(head1)->stqh_last = (head2)->stqh_first; (head1)->stqh_last = (head2)->stqh_last; STAILQ_INIT((head2)); } } while (0)
#define _FSBLKCNT_T 
#define VM_PAGE_QUERY_PAGE_REF 0x4
#define EXC_I386_DBLFLT 8
#define KERN_CLOCKRATE 12
#define KERN_CLASSIC KERN_TRANSLATE
#define HOST_PREFERRED_USER_ARCH_COUNT ((mach_msg_type_number_t) (sizeof(host_preferred_user_arch_data_t)/sizeof(integer_t)))
#define __SPI_AVAILABLE(...) 
#define mach_host_MSG_COUNT 35
#define EV_SYSFLAGS 0xF000
#define HOST_CALENDAR_CHANGED_REPLYID 950
#define _FSID_T 
#define MACH_PORT_TYPE_SPREQUEST 0x40000000
#define _STRUCT_MCONTEXT64 struct __darwin_mcontext64
#define THREAD_STANDARD_POLICY_COUNT 0
#define __FLT64X_MANT_DIG__ 64
#define SA_USERTRAMP 0x0100
#define NOTE_SECONDS 0x00000001
#define __AVAILABILITY_INTERNAL_UNAVAILABLE __attribute__((unavailable))
#define _INO_T 
#define __DYNAMIC__ 1
#define EVFILT_WRITE (-2)
#define UINT8_C(v) (v)
#define __MAC_10_0 1000
#define __MAC_10_2 1020
#define __MAC_10_4 1040
#define __MAC_10_5 1050
#define __MAC_10_6 1060
#define __MAC_10_7 1070
#define __MAC_10_8 1080
#define __MAC_10_9 1090
#define __GNUC__ 11
#define TASK_VM_INFO_REV5_COUNT TASK_VM_INFO_COUNT
#define __DARWIN_ALIAS_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_NON_CANCELABLE __DARWIN_SUF_UNIX03)
#define err_none (mach_error_t)0
#define HOST_CPU_LOAD_INFO_COUNT ((mach_msg_type_number_t) (sizeof (host_cpu_load_info_data_t) / sizeof (integer_t)))
#define __DARWIN_ALIAS_I(sym) __asm("_" __STRING(sym) __DARWIN_SUF_64_BIT_INO_T __DARWIN_SUF_UNIX03)
#define CPU_SUBTYPE_ITANIUM CPU_SUBTYPE_INTEL(11, 0)
#define SIGWINCH 28
#define TAILQ_CONCAT(head1,head2,field) do { if (!TAILQ_EMPTY(head2)) { *(head1)->tqh_last = (head2)->tqh_first; (head2)->tqh_first->field.tqe_prev = (head1)->tqh_last; (head1)->tqh_last = (head2)->tqh_last; TAILQ_INIT((head2)); QMD_TRACE_HEAD(head1); QMD_TRACE_HEAD(head2); } } while (0)
#define UINT_LEAST8_MAX UINT8_MAX
#define USER_DATA_SELECTOR 0x001f
#define MACH_EVENTLINK_NULL ((mach_eventlink_t) 0)
#define __MMX__ 1
#define CIRCLEQ_FIRST(head) ((head)->cqh_first)
#define TAILQ_FOREACH_SAFE(var,head,field,tvar) for ((var) = TAILQ_FIRST((head)); (var) && ((tvar) = TAILQ_NEXT((var), field), 1); (var) = (tvar))
#define KMOD_DECL(name,version) static kmod_start_func_t name ## _module_start; static kmod_stop_func_t name ## _module_stop; kmod_info_t KMOD_INFO_NAME = { 0, KMOD_INFO_VERSION, -1U, { #name }, { version }, -1, 0, 0, 0, 0, name ## _module_start, name ## _module_stop };
#define MACH_RCV_TRAILER_NULL 0
#define MACH_VOUCHER_ATTR_CONTROL_FLAGS_NONE ((mach_voucher_attr_control_flags_t)0)
#define CTL_KERN_NAMES { { 0, 0 }, { "ostype", CTLTYPE_STRING }, { "osrelease", CTLTYPE_STRING }, { "osrevision", CTLTYPE_INT }, { "version", CTLTYPE_STRING }, { "maxvnodes", CTLTYPE_INT }, { "maxproc", CTLTYPE_INT }, { "maxfiles", CTLTYPE_INT }, { "argmax", CTLTYPE_INT }, { "securelevel", CTLTYPE_INT }, { "hostname", CTLTYPE_STRING }, { "hostid", CTLTYPE_INT }, { "clockrate", CTLTYPE_STRUCT }, { "vnode", CTLTYPE_STRUCT }, { "proc", CTLTYPE_STRUCT }, { "file", CTLTYPE_STRUCT }, { "profiling", CTLTYPE_NODE }, { "posix1version", CTLTYPE_INT }, { "ngroups", CTLTYPE_INT }, { "job_control", CTLTYPE_INT }, { "saved_ids", CTLTYPE_INT }, { "boottime", CTLTYPE_STRUCT }, { "nisdomainname", CTLTYPE_STRING }, { "maxpartitions", CTLTYPE_INT }, { "kdebug", CTLTYPE_INT }, { "update", CTLTYPE_INT }, { "osreldate", CTLTYPE_INT }, { "ntp_pll", CTLTYPE_NODE }, { "bootfile", CTLTYPE_STRING }, { "maxfilesperproc", CTLTYPE_INT }, { "maxprocperuid", CTLTYPE_INT }, { "dumpdev", CTLTYPE_STRUCT }, { "ipc", CTLTYPE_NODE }, { "dummy", CTLTYPE_INT }, { "dummy", CTLTYPE_INT }, { "usrstack", CTLTYPE_INT }, { "logsigexit", CTLTYPE_INT }, { "symfile",CTLTYPE_STRING }, { "procargs",CTLTYPE_STRUCT }, { "dummy", CTLTYPE_INT }, { "netboot", CTLTYPE_INT }, { "dummy", CTLTYPE_INT }, { "sysv", CTLTYPE_NODE }, { "dummy", CTLTYPE_INT }, { "dummy", CTLTYPE_INT }, { "exec", CTLTYPE_NODE }, { "aiomax", CTLTYPE_INT }, { "aioprocmax", CTLTYPE_INT }, { "aiothreads", CTLTYPE_INT }, { "procargs2",CTLTYPE_STRUCT }, { "corefile",CTLTYPE_STRING }, { "coredump", CTLTYPE_INT }, { "sugid_coredump", CTLTYPE_INT }, { "delayterm", CTLTYPE_INT }, { "shreg_private", CTLTYPE_INT }, { "proc_low_pri_io", CTLTYPE_INT }, { "low_pri_window", CTLTYPE_INT }, { "low_pri_delay", CTLTYPE_INT }, { "posix", CTLTYPE_NODE }, { "usrstack64", CTLTYPE_QUAD }, { "nx", CTLTYPE_INT }, { "tfp", CTLTYPE_NODE }, { "procname", CTLTYPE_STRING }, { "threadsigaltstack", CTLTYPE_INT }, { "speculative_reads_disabled", CTLTYPE_INT }, { "osversion", CTLTYPE_STRING }, { "safeboot", CTLTYPE_INT }, { "dummy", CTLTYPE_INT }, { "rage_vnode", CTLTYPE_INT }, { "tty", CTLTYPE_NODE }, { "check_openevt", CTLTYPE_INT }, { "thread_name", CTLTYPE_STRING } }
#define THREAD_CONVERT_THREAD_STATE_TO_SELF 1
#define VM_MAP_READ_NULL ((vm_map_read_t) 0)
#define A_OLDGETQCTRL 6
#define HOST_CHUD_PORT HOST_LAUNCHCTL_PORT
#define AUDIT_CTLMODE_EXTERNAL ((unsigned char)2)
#define VM_REGION_SUBMAP_INFO_V0_COUNT_64 ((mach_msg_type_number_t) (VM_REGION_SUBMAP_INFO_V0_SIZE / sizeof (natural_t)))
#define NDR_CHAR_ASCII 0
#define MEMORY_OBJECT_DEFAULT_NULL ((memory_object_default_t) 0)
#define P_DIRTY_TRACK 0x00000001
#define FPC_ZE 0x0004
#define _MACH_SEMAPHORE_H_ 
#define __FLT_HAS_DENORM__ 1
#define __SIZEOF_LONG_DOUBLE__ 16
#define MAXBSIZE (256 * 4096)
#define MACH_RCV_LARGE_IDENTITY 0x00000008
#define __compiler_barrier() __asm__ __volatile__("" ::: "memory")
#define __MAC_10_14_4 101404
#define __MAC_10_14_6 101406
#define PROC_FLAG_EXT_DARWINBG 0x10000
#define TASK_SCHED_FIFO_INFO 12
#define HOST_EXTMOD_INFO64 5
#define NOTE_SIGNAL 0x08000000
#define _POSIX_SIGQUEUE_MAX 32
#define MAP_MEM_RT 7
#define MACH_SEND_OVERRIDE 0x00000020
#define MACH_PORT_TYPE_RECEIVE MACH_PORT_TYPE(MACH_PORT_RIGHT_RECEIVE)
#define THREAD_TIME_CONSTRAINT_POLICY 2
#define HTONL(x) (x) = htonl((__uint32_t)x)
#define EXC_MASK_MACHINE 0
#define IO_NUM_PRIORITIES 4
#define P_ADOPTPERSONA 0x04000000
#define MACH_MSG_PRIORITY_UNSPECIFIED (mach_msg_priority_t) 0
#define TAILQ_INSERT_AFTER(head,listelm,elm,field) do { TAILQ_CHECK_NEXT(listelm, field); if ((TAILQ_NEXT((elm), field) = TAILQ_NEXT((listelm), field)) != NULL) TAILQ_NEXT((elm), field)->field.tqe_prev = &TAILQ_NEXT((elm), field); else { (head)->tqh_last = &TAILQ_NEXT((elm), field); QMD_TRACE_HEAD(head); } TAILQ_NEXT((listelm), field) = (elm); (elm)->field.tqe_prev = &TAILQ_NEXT((listelm), field); QMD_TRACE_ELEM(&(elm)->field); QMD_TRACE_ELEM(&listelm->field); } while (0)
#define bdbtofsb(bn) ((bn) / (BLKDEV_IOSIZE/DEV_BSIZE))
#define VM_FLAGS_SUPERPAGE_NONE (SUPERPAGE_NONE << VM_FLAGS_SUPERPAGE_SHIFT)
#define INT_FAST16_MIN INT16_MIN
#define MEMORY_OBJECT_COPY_CALL 1
#define P_DEPENDENCY_CAPABLE 0x00100000
#define CPU_SUBTYPE_MULTIPLE ((cpu_subtype_t) -1)
#define MAP_MEM_POSTED_COMBINED_REORDERED 9
#define EVFILT_USER (-10)
#define NOTE_WRITE 0x00000002
#define CPU_SUBTYPE_PENTII_M5 CPU_SUBTYPE_INTEL(6, 5)
#define CIRCLEQ_CHECK_HEAD(head,field) 
#define trunc_page(x) ((x) & (~(vm_page_size - 1)))
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_1(x) 
#define KERN_CLASSICHANDLER KERN_EXEC
#define __BIGGEST_ALIGNMENT__ 16
#define MACH_VOUCHER_ATTR_MAX_RAW_RECIPE_ARRAY_SIZE 5120
#define SIGURG 16
#define _MCONTEXT_T 
#define VM_PROT_NO_CHANGE ((vm_prot_t) 0x08)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_0(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_3(x) x
#define sa_handler __sigaction_u.__sa_handler
#define __darwin_obsz(object) __builtin_object_size (object, _USE_FORTIFY_LEVEL > 1 ? 1 : 0)
#define SLIST_FOREACH_SAFE(var,head,field,tvar) for ((var) = SLIST_FIRST((head)); (var) && ((tvar) = SLIST_NEXT((var), field), 1); (var) = (tvar))
#define SUPERPAGE_SIZE_2MB 2
#define P_DIRTY_ALLOW_IDLE_EXIT 0x00000002
#define MACH_VM_MAX_ADDRESS ((mach_vm_offset_t) VM_MAX_PAGE_ADDRESS)
#define MACH_RCV_IN_SET 0x1000400a
#define CHILD_MAX 266
#define __DARWIN_ONLY_VERS_1050 0
#define __WATCHOS_2_0 20000
#define __WATCHOS_2_1 20100
#define __WATCHOS_2_2 20200
#define CPU_SUBTYPE_PENTIUM_M CPU_SUBTYPE_INTEL(9, 0)
#define __DARWIN_1050ALIAS(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_UNIX03)
#define VM_PROT_IS_MASK ((vm_prot_t) 0x40)
#define VM_PURGABLE_DEBUG_SHIFT 12
#define _POSIX_HOST_NAME_MAX 255
#define __FLT64_MAX_10_EXP__ 308
#define TASK_VM_INFO_REV3_COUNT ((mach_msg_type_number_t) (TASK_VM_INFO_REV4_COUNT - 2))
#define SLIST_HEAD_INITIALIZER(head) { NULL }
#define NGROUPS_MAX 16
#define SM_EMPTY 3
#define PAGE_MASK vm_page_mask
#define MEMORY_OBJECT_ATTR_INFO_COUNT ((mach_msg_type_number_t) (sizeof(memory_object_attr_info_data_t)/sizeof(int)))
#define flatten __attribute__((flatten))
#define MACH_MSG_BODY_NULL (mach_msg_body_t *) 0
#define _TIME_T 
#define P_RESV9 0x02000000
#define MACH_MSG_STRICT_REPLY 0x00000200
#define _IN_ADDR_T 
#define __COPYRIGHT(s) __IDSTRING(copyright,s)
#define KERN_MAXPARTITIONS 23
#define VM_PAGE_QUERY_PAGE_COPIED 0x20
#define _I386_SIGNAL_H_ 1
#define __pure 
#define MACH_EXCEPTION_MASK (MACH_EXCEPTION_CODES | MACH_EXCEPTION_ERRORS)
#define claligned(x) ((((int)(x))&CLOFSET)==0)
#define CPUFAMILY_ARM_TWISTER 0x92fb37c8
#define __NULLABILITY_COMPLETENESS_PUSH 
#define CLD_NOOP 0
#define MACH_PORT_TEMPOWNER 4
#define CPU_SUBTYPE_INTEL_FAMILY(x) ((x) & 15)
#define P_ADVLOCK 0x00000001
#define TASK_BASIC_INFO_COUNT (sizeof(task_basic_info_data_t) / sizeof(natural_t))
#define A_GETEXPAFTER 43
#define CPUFAMILY_POWERPC_G4 0x77c184ae
#define x86_DEBUG_STATE_COUNT ((mach_msg_type_number_t) (sizeof(x86_debug_state_t)/sizeof(unsigned int)))
#define MEMORY_OBJECT_COPY_INVALID 5
#define TASK_AFFINITY_TAG_INFO_COUNT (sizeof(task_affinity_tag_info_data_t) / sizeof(natural_t))
#define FPE_FLTDIV 1
#define A_SETPOLICY 34
#define __DBL_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define __APPLE_API_UNSTABLE 
#define KERN_NGROUPS 18
#define stoc(x) (x)
#define USER_BC_DIM_MAX 3
#define __INT_FAST32_MAX__ 0x7fffffff
#define htonll(x) __DARWIN_OSSwapInt64(x)
#define NOTE_TRIGGER 0x01000000
#define FP_287 2
#define MATTR_VAL_GET_INFO 10
#define CPU_THREADTYPE_INTEL_HTT ((cpu_threadtype_t) 1)
#define __DBL_HAS_INFINITY__ 1
#define __MAC_10_15_1 101501
#define VM_MEMORY_CM_READCACHE 95
#define USER_POSIX2_C_BIND 11
#define _SYS_TYPES_H_ 
#define KERN_KDWRITETR 17
#define HOST_LOCKD_PORT (5 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define SIGCHLD 20
#define TASK_WAIT_STATE_INFO 25
#define KERN_POLICY_STATIC 51
#define KERN_LOCK_UNSTABLE 39
#define P_NOSWAP 0
#define _POSIX_SS_REPL_MAX 4
#define MACH_VOUCHER_IMPORTANCE_ATTR_ADD_EXTERNAL 1
#define __SIZEOF_FLOAT__ 4
#define _DARWIN_FEATURE_ONLY_UNIX_CONFORMANCE 1
#define SIGVTALRM 26
#define TASK_MAX_SPECIAL_PORT TASK_RESOURCE_NOTIFY_PORT
#define subsystem_to_name_map_processor_set { "processor_set_statistics", 4000 }, { "processor_set_destroy", 4001 }, { "processor_set_max_priority", 4002 }, { "processor_set_policy_enable", 4003 }, { "processor_set_policy_disable", 4004 }, { "processor_set_tasks", 4005 }, { "processor_set_threads", 4006 }, { "processor_set_policy_control", 4007 }, { "processor_set_stack_usage", 4008 }, { "processor_set_info", 4009 }, { "processor_set_tasks_with_flavor", 4010 }
#define __HAVE_SPECULATION_SAFE_VALUE 1
#define __XNU_PRIVATE_EXTERN __attribute__((visibility("hidden")))
#define __null_unspecified 
#define __Reply__processor_set_subsystem__defined 
#define TASK_VM_INFO_REV1_COUNT ((mach_msg_type_number_t) (TASK_VM_INFO_REV2_COUNT - 4))
#define NDR_INT_LITTLE_ENDIAN 1
#define NOTE_FFLAGSMASK 0x00ffffff
#define KERNEL_AUDIT_TOKEN_VALUE { {0, 0, 0, 0, 0, 0, 0, 0} }
#define TASK_KERNEL_PORT 1
#define CIRCLEQ_FOREACH(var,head,field) for((var) = (head)->cqh_first; (var) != (void *)(head); (var) = (var)->field.cqe_next)
#define _POSIX_TRACE_USER_EVENT_MAX 32
#define _INT16_T 
#define __IPHONE_3_2 30200
#define ___POSIX_C_DEPRECATED_STARTING_199309L 
#define _POSIX_PATH_MAX 256
#define __ReplyUnion__processor_set_subsystem__defined 
#define KERN_MEMORY_ERROR 10
#define TASK_INSPECT_BASIC_COUNTS_COUNT (sizeof(struct task_inspect_basic_counts) / sizeof(natural_t))
#define __INTPTR_WIDTH__ 64
#define CPU_SUBTYPE_486 CPU_SUBTYPE_INTEL(4, 0)
#define __FLT64X_HAS_INFINITY__ 1
#define HW_L3CACHESIZE 22
#define KOBJECT_DESCRIPTION_LENGTH 512
#define NFDBITS __DARWIN_NFDBITS
#define BUS_NOOP 0
#define MACH_MSG_TYPE_PORT_SEND_ONCE MACH_MSG_TYPE_MOVE_SEND_ONCE
#define HOST_SYSPOLICYD_PORT (22 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define KERN_KDWRITEMAP 18
#define __UINT_LEAST32_MAX__ 0xffffffffU
#define FP_STATE_BYTES 512
#define x86_DEBUG_STATE32 10
#define THREAD_STATE_MAX I386_THREAD_STATE_MAX
#define AUDIT_PUBLIC 0x0800
#define KERN_CHECKOPENEVT 70
#define LONG_MIN (-LONG_MAX - 1L)
#define HOST_VM_INFO64_COUNT ((mach_msg_type_number_t) (sizeof(vm_statistics64_data_t)/sizeof(integer_t)))
#define KERN_CODE_SELECTOR 0x0008
#define MPG_FLAGS_MOD_REFS_PINNED_DEALLOC (0x01ull << 56)
#define host_set_io_master_port(host,port) (KERN_INVALID_ARGUMENT)
#define KERN_THALTSTACK 63
#define AQ_LOWATER 10
#define VM_MEMORY_SANITIZER 99
#define CPU_SUBTYPE_POWERPC_620 ((cpu_subtype_t) 8)
#define P_NOREMOTEHANG 0x80000000
#define __FLT32X_HAS_DENORM__ 1
#define NOTE_MACHTIME 0x00000100
#define __INT_FAST16_TYPE__ short int
#define NOTE_EXIT 0x80000000
#define SA_64REGSET 0x0200
#define CPUFAMILY_ARM_SWIFT 0x1e2d6381
#define TID_NULL ((uint64_t) 0)
#define SIGTERM 15
#define MACH_VOUCHER_ATTR_BITS_STORE MACH_VOUCHER_ATTR_USER_DATA_STORE
#define x86_DEBUG_STATE64 11
#define TASK_EXTMOD_INFO 19
#define __MMX_WITH_SSE__ 1
#define __WATCHOS_UNAVAILABLE 
#define TRACEBUF 
#define KERN_PROC_UID 5
#define KERN_USRSTACK32 35
#define CPU_SUBTYPE_I860_ALL ((cpu_subtype_t) 0)
#define __DARWIN_SUF_NON_CANCELABLE 
#define FP_SOFT 1
#define NL_LANGMAX 14
#define MACH_RCV_PORT_CHANGED 0x10004006
#define __IPHONE_3_0 30000
#define __IPHONE_3_1 30100
#define __LDBL_HAS_DENORM__ 1
#define CTL_HW 6
#define MACH_RCV_SYNC_PEEK 0x00008000
#define KERN_KDGETREG 9
#define CPU_SUBTYPE_PTRAUTH_ABI 0x80000000
#define HOST_AUDIT_CONTROL_PORT (2 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define CPU_SUBTYPE_ARM_V7EM ((cpu_subtype_t) 16)
#define task_get_bootstrap_port(task,port) (task_get_special_port((task), TASK_BOOTSTRAP_PORT, (port)))
#define MAC_OS_X_VERSION_10_10_3 101003
#define has_feature __has_feature
#define MACH_PORT_RIGHT_SEND ((mach_port_right_t) 0)
#define _MACH_VM_ATTRIBUTES_H_ 
#define VM_SYNC_ASYNCHRONOUS ((vm_sync_t) 0x01)
#define must_check __attribute__((warn_unused_result))
#define __FLT128_HAS_INFINITY__ 1
#define MACH_PORT_SRIGHTS_PRESENT 1
#define MAP_MEM_FLAGS_MASK 0x00FFFF00
#define SIGABRT 6
#define THREAD_INSPECT_PORT 2
#define IPC_SPACE_INSPECT_NULL ((ipc_space_inspect_t) 0)
#define SS_ONSTACK 0x0001
#define _GCC_WRAP_STDINT_H 
#define VM_FLAGS_SUPERPAGE_MASK 0x70000
#define KERN_MAXFILES 7
#define __I386_MCONTEXT_H_ 
#define CPU_TYPE_MC98000 ((cpu_type_t) 10)
#define TASK_OVERRIDE_QOS_POLICY 9
#define __DARWIN_OSSwapConstInt64(x) ((__uint64_t)((((__uint64_t)(x) & 0xff00000000000000ULL) >> 56) | (((__uint64_t)(x) & 0x00ff000000000000ULL) >> 40) | (((__uint64_t)(x) & 0x0000ff0000000000ULL) >> 24) | (((__uint64_t)(x) & 0x000000ff00000000ULL) >> 8) | (((__uint64_t)(x) & 0x00000000ff000000ULL) << 8) | (((__uint64_t)(x) & 0x0000000000ff0000ULL) << 24) | (((__uint64_t)(x) & 0x000000000000ff00ULL) << 40) | (((__uint64_t)(x) & 0x00000000000000ffULL) << 56)))
#define MAP_MEM_POSTED 6
#define i386_EXCEPTION_STATE_COUNT ((mach_msg_type_number_t) ( sizeof (i386_exception_state_t) / sizeof (int) ))
#define x86_FLOAT_STATE32_COUNT ((mach_msg_type_number_t) (sizeof(x86_float_state32_t)/sizeof(unsigned int)))
#define true 1
#define OSSwapBigToHostInt(x) OSSwapBigToHostInt32(x)
#define SIGALRM 14
#define pun(type,x) (((union {typeof(x) _; type a;}) (x)).a)
#define __weak 
#define AUDIT_SCNT 0x0400
#define host_get_gssd_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_GSSD_PORT, (port)))
#define CTLFLAG_RD 0x80000000
#define AUDIT_CNT 0x0001
#define __abortlike __dead2 __cold __not_tail_called
#define OSSwapHostToLittleInt16(x) ((uint16_t)(x))
#define MACH_RCV_PORT_DIED 0x10004009
#define __DBL_MAX_EXP__ 1024
#define MACH_SEND_PROPAGATE_QOS 0x00200000
#define HTONLL(x) (x) = htonll((__uint64_t)x)
#define _MACH_RPC_H_ 
#define __WCHAR_WIDTH__ 32
#define __DARWIN_BIG_ENDIAN 4321
#define MACH_RCV_SCATTER_SMALL 0x1000400e
#define __FLT32_MAX__ 3.40282346638528859811704183484516925e+38F32
#define UPL_NULL ((upl_t) 0)
#define x86_PAGEIN_STATE_COUNT ((mach_msg_type_number_t)(sizeof(x86_pagein_state_t) / sizeof(int)))
#define CROUND (CBLOCK - 1)
#define _MACH_TIME_VALUE_H_ 
#define CTLTYPE 0xf
#define _STRUCT_MCONTEXT_AVX512_64_FULL struct __darwin_mcontext_avx512_64_full
#define MACH_MSGH_BITS_IMPHOLDASRT 0x10000000U
#define MACH_MSG_TYPE_COPY_SEND 19
#define __kpi_unavailable 
#define NOTE_EXIT_MEMORY 0x00020000
#define _MACH_I386_BOOLEAN_H_ 
#define __SSE2_MATH__ 1
#define __ATOMIC_HLE_RELEASE 131072
#define EVFILT_TIMER (-7)
#define PDP_ENDIAN __DARWIN_PDP_ENDIAN
#define HOST_INFO_MAX (1024)
#define P_DIRTY_IS_DIRTY (P_DIRTY | P_DIRTY_SHUTDOWN)
#define i386_EXCEPTION_STATE 3
#define SIGINT 2
#define host_get_fairplayd_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_FAIRPLAYD_PORT, (port)))
#define AUC_DISABLED -1
#define __PTRDIFF_MAX__ 0x7fffffffffffffffL
#define MACH_PORTS_SLOTS_USED 3
#define __TVOS_PROHIBITED 
#define KERN_TFP_POLICY 1
#define NOTE_ATTRIB 0x00000008
#define __amd64 1
#define _POSIX_TZNAME_MAX 6
#define POLICY_TIMESHARE_INFO_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_timeshare_info)/sizeof(integer_t)))
#define VM_VOLATILE_ORDER_MASK (1 << VM_VOLATILE_ORDER_SHIFT)
#define MACH_MSG_ALLOCATE 2
#define MAXUPRC CHILD_MAX
#define _I386__LIMITS_H_ 
#define A_GETPINFO_ADDR 28
#define BUS_OBJERR 3
#define CIRCLEQ_INSERT_HEAD(head,elm,field) do { CIRCLEQ_CHECK_HEAD(head, field); (elm)->field.cqe_next = (head)->cqh_first; (elm)->field.cqe_prev = (void *)(head); if ((head)->cqh_last == (void *)(head)) (head)->cqh_last = (elm); else (head)->cqh_first->field.cqe_prev = (elm); (head)->cqh_first = (elm); } while (0)
#define host_get_telemetry_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_TELEMETRY_PORT, (port)))
#define _MACH_MACHINE_VM_TYPES_H_ 
#define SLIST_REMOVE_HEAD(head,field) do { SLIST_FIRST((head)) = SLIST_NEXT(SLIST_FIRST((head)), field); } while (0)
#define KERN_TFP_POLICY_DENY 0
#define host_get_chud_port(host,port) host_get_launchctl_port(host, port)
#define KIPC_MAXSOCKBUF 1
#define _SYS_SIGNAL_H_ 
#define TASK_SECURITY_TOKEN_COUNT ((mach_msg_type_number_t) (sizeof(security_token_t) / sizeof(natural_t)))
#define EXC_I386_NMIFLT 2
#define TASK_VM_INFO_PURGEABLE 23
#define __PTHREAD_ONCE_SIZE__ 8
#define AUDIT_ZONENAME 0x1000
#define _POSIX_MAX_CANON 255
#define _MACH_DEBUG_ZONE_INFO_H_ 
#define VM_REGION_BASIC_INFO_COUNT_64 ((mach_msg_type_number_t) (sizeof(vm_region_basic_info_data_64_t)/sizeof(int)))
#define P_DIRTY 0x00000008
#define timerisset(tvp) ((tvp)->tv_sec || (tvp)->tv_usec)
#define VM_MEMORY_SQLITE 62
#define TASK_THREAD_TIMES_INFO_COUNT ((mach_msg_type_number_t) (sizeof(task_thread_times_info_data_t) / sizeof(natural_t)))
#define THREAD_PRECEDENCE_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (thread_precedence_policy_data_t) / sizeof (integer_t)))
#define FD_SET(n,p) __DARWIN_FD_SET(n, p)
#define TASK_SCHED_INFO 14
#define FPC_IC_PROJ 0x0000
#define MCLSHIFT 11
#define KERN_LOGSIGEXIT 36
#define KERN_TRANSLATE 44
#define err_local err_system(0x3e)
#define __AVAILABILITY__ 
#define KMOD_EXPLICIT_DECL(name,version,start,stop) kmod_info_t KMOD_INFO_NAME = { 0, KMOD_INFO_VERSION, -1U, { #name }, { version }, -1, 0, 0, 0, 0, start, stop };
#define MACH_MSG_GUARD_FLAGS_NONE 0x0000
#define timerclear(tvp) (tvp)->tv_sec = (tvp)->tv_usec = 0
#define SM_PRIVATE_ALIASED 6
#define EXC_SOFT_SIGNAL 0x10003
#define __tune_core2__ 1
#define CTLFLAG_WR 0x40000000
#define _glue(a,b) a ##b
#define VM_REGION_SUBMAP_INFO_COUNT ((mach_msg_type_number_t) (sizeof(vm_region_submap_info_data_t) / sizeof(natural_t)))
#define CPU_SUBTYPE_ARM64_ALL ((cpu_subtype_t) 0)
#define MAP_MEM_VM_COPY 0x200000
#define P_RESV6 0x00400000
#define FPE_FLTOVF 2
#define err_ipc err_system(0x3)
#define roundup(x,y) ((((x) % (y)) == 0) ? (x) : ((x) + ((y) - ((x) % (y)))))
#define FPC_IM FPC_IE
#define __ATOMIC_HLE_ACQUIRE 65536
#define __Reply__mach_host_subsystem__defined 
#define __NDR_convert__int_rep__ __NDR_convert__
#define VM_MEMORY_ROSETTA_ARENA 236
#define SHRT_MIN (-SHRT_MAX - 1)
#define CLOCK_THREAD_CPUTIME_ID _CLOCK_THREAD_CPUTIME_ID
#define _UINT32_T 
#define CPU_SUBTYPE_PENTIUM_4_M CPU_SUBTYPE_INTEL(10, 1)
#define _MACH_I386_EXCEPTION_H_ 
#define KERN_NTP_PLL 27
#define host_get_host_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_PORT, (port)))
#define CIRCLEQ_CHECK_NEXT(head,elm,field) 
#define KERN_KDGETBUF 5
#define _MACH_VM_INHERIT_H_ 
#define x86_THREAD_STATE64_COUNT ((mach_msg_type_number_t) ( sizeof (x86_thread_state64_t) / sizeof (int) ))
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#define VM_PURGABLE_EMPTY 2
#define OSSwapBigToHostInt64(x) OSSwapInt64(x)
#define __SIZEOF_SIZE_T__ 8
#define __DARWIN_ALIAS_STARTING(_mac,_iphone,x) __DARWIN_ALIAS_STARTING_MAC_ ##_mac(x)
#define __kpi_deprecated_arm64_macos_unavailable 
#define _PTHREAD_RWLOCKATTR_T 
#define __offsetof(type,field) __builtin_offsetof(type, field)
#define task_set_bootstrap_port(task,port) (task_set_special_port((task), TASK_BOOTSTRAP_PORT, (port)))
#define SCHAR_MAX __SCHAR_MAX__
#define EXC_MACH_SYSCALL 8
#define KERN_ALREADY_IN_SET 11
#define MIG_BAD_ARGUMENTS -304
#define MAXHOSTNAMELEN 256
#define KERN_NOT_IN_SET 12
#define __MAC_10_14_1 101401
#define NOTE_PDATAMASK 0x000fffff
#define LIST_INSERT_AFTER(listelm,elm,field) do { LIST_CHECK_NEXT(listelm, field); if ((LIST_NEXT((elm), field) = LIST_NEXT((listelm), field)) != NULL) LIST_NEXT((listelm), field)->field.le_prev = &LIST_NEXT((elm), field); LIST_NEXT((listelm), field) = (elm); (elm)->field.le_prev = &LIST_NEXT((listelm), field); } while (0)
#define AQ_HIWATER 100
#define __SPI_DEPRECATED(...) 
#define _POSIX_TRACE_EVENT_NAME_MAX 30
#define __dead 
#define SIG_BLOCK 1
#define A_SETUMASK 14
#define POLICY_TIMESHARE 1
#define NeXTBSD 1995064
#define POLICYCLASS_FIXEDPRI (POLICY_RR | POLICY_FIFO)
#define MACH_PORT_RIGHT_NUMBER ((mach_port_right_t) 6)
#define CTLFLAG_SECURE 0x08000000
#define __WATCHOS_5_0 50000
#define USER_POSIX2_FORT_DEV 14
#define MACH_PORT_QLIMIT_KERNEL (65534)
#define __FLT64X_MIN_EXP__ (-16381)
#define MACH_PORT_DNREQUESTS_SIZE_COUNT 1
#define SIZE_MAX UINTPTR_MAX
#define BUS_ADRALN 1
#define __SIZEOF_WINT_T__ 4
#define TASK_FLAGS_INFO_COUNT ((mach_msg_type_number_t) (sizeof(task_flags_info_data_t) / sizeof (natural_t)))
#define POLICY_RR 2
#define CPU_SUBTYPE_MIPS_R3000 ((cpu_subtype_t) 7)
#define __WATCHOS_5_2 50200
#define VM_REGION_SUBMAP_INFO_V2_SIZE (sizeof (vm_region_submap_info_data_64_t))
#define EV_DISABLE 0x0008
#define MIG_REPLY_MISMATCH -301
#define _SECURE__COMMON_H_ 
#define FPC_UE 0x0010
#define P_DIRTY_SHUTDOWN 0x00000010
#define __IPHONE_11_0 110000
#define __IPHONE_11_1 110100
#define __IPHONE_11_2 110200
#define __IPHONE_11_3 110300
#define USER_LINE_MAX 8
#define MACH_VOUCHER_IMPORTANCE_ATTR_DROP_EXTERNAL 2
#define UINT64_C(v) (v ## ULL)
#define PVFS 20
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_0(x) 
#define __LONG_LONG_WIDTH__ 64
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_4(x) 
#define ALIGNBYTES __DARWIN_ALIGNBYTES
#define __Reply__clock_priv_subsystem__defined 
#define VM_MEMORY_IOKIT 21
#define CPUFAMILY_INTEL_PENRYN 0x78ea4fbc
#define PROCESSOR_SET_LOAD_INFO_COUNT ((mach_msg_type_number_t) (sizeof(processor_set_load_info_data_t)/sizeof(natural_t)))
#define _POSIX_RE_DUP_MAX _POSIX2_RE_DUP_MAX
#define VM_MEMORY_MACH_MSG 20
#define MACH_PORT_MAKE(index,gen) (((index) << 8) | (gen) >> 24)
#define HW_CACHELINE 16
#define __FLT32_MAX_EXP__ 128
#define WINT_MAX INT32_MAX
#define A_SETQCTRL 36
#define MATTR_VAL_OFF 0
#define SA_ONSTACK 0x0001
#define __WATCHOS_6_0 60000
#define __WATCHOS_6_1 60100
#define __WATCHOS_6_2 60200
#define unix_err(errno) (err_kern|err_sub(3)|errno)
#define VM_PAGE_INFO_MAX 
#define __API_DEPRECATED_END 
#define _POSIX2_BC_BASE_MAX 99
#define KERN_MAXVNODES 5
#define _DARWIN_FEATURE_64_BIT_INODE 1
#define EXC_MASK_SYSCALL (1 << EXC_SYSCALL)
#define x86_AVX512_STATE_COUNT ((mach_msg_type_number_t) (sizeof(x86_avx512_state_t)/sizeof(unsigned int)))
#define VM_64_BIT_DATA_OBJECTS 
#define KERN_INVALID_RIGHT 17
#define __MigPackStructs 1
#define UINTPTR_MAX 18446744073709551615UL
#define MACH_MSG_IPC_SPACE 0x00002000
#define _X86_INSTRUCTION_STATE_CACHELINE_SIZE 64
#define CPU_SUBTYPE_ARM64_PTR_AUTH_MASK 0x0f000000
#define EXC_I386_INVTSSFLT 10
#define STAILQ_NEXT(elm,field) ((elm)->field.stqe_next)
#define TRAP_BRKPT 1
#define KERN_PROC_RUID 6
#define subsystem_to_name_map_mach_host { "host_info", 200 }, { "host_kernel_version", 201 }, { "_host_page_size", 202 }, { "mach_memory_object_memory_entry", 203 }, { "host_processor_info", 204 }, { "host_get_io_master", 205 }, { "host_get_clock_service", 206 }, { "kmod_get_info", 207 }, { "host_virtual_physical_table_info", 209 }, { "processor_set_default", 213 }, { "processor_set_create", 214 }, { "mach_memory_object_memory_entry_64", 215 }, { "host_statistics", 216 }, { "host_request_notification", 217 }, { "host_lockgroup_info", 218 }, { "host_statistics64", 219 }, { "mach_zone_info", 220 }, { "host_create_mach_voucher", 222 }, { "host_register_mach_voucher_attr_manager", 223 }, { "host_register_well_known_mach_voucher_attr_manager", 224 }, { "host_set_atm_diagnostic_flag", 225 }, { "host_get_atm_diagnostic_flag", 226 }, { "mach_memory_info", 227 }, { "host_set_multiuser_config_flags", 228 }, { "host_get_multiuser_config_flags", 229 }, { "host_check_multiuser_mode", 230 }, { "mach_zone_info_for_zone", 231 }
#define powerof2(x) ((((x)-1)&(x))==0)
#define FPS_C0 0x0100
#define FPS_C1 0x0200
#define FPS_C2 0x0400
#define FPS_C3 0x4000
#define __GXX_ABI_VERSION 1016
#define __IDSTRING(name,string) static const char name[] __used = string
#define A_GETQCTRL 35
#define x86_AVX_STATE64 (x86_AVX_STATE32 + 1)
#define __header_always_inline __header_inline __attribute__ ((__always_inline__))
#define CTLFLAG_MASKED 0x04000000
#define MEMORY_OBJECT_PERFORMANCE_INFO 11
#define UINT_LEAST16_MAX UINT16_MAX
#define CPU_SUBTYPE_PENTIUM_3 CPU_SUBTYPE_INTEL(8, 0)
#define _TIME_H_ 
#define LOCKGROUP_MAX_NAME 64
#define NOTE_FFNOP 0x00000000
#define __FLT_MIN_EXP__ (-125)
#define __DARWIN_NULL ((void *)0)
#define P_DIRTY_IDLE_EXIT_ENABLED (P_DIRTY_TRACK|P_DIRTY_ALLOW_IDLE_EXIT)
#define TASK_ACCESS_PORT 9
#define HOST_PRIV_PORT 2
#define __DEVOLATILE(type,var) __CAST_AWAY_QUALIFIER(var, volatile, type)
#define CPU_SUBTYPE_ARM_V4T ((cpu_subtype_t) 5)
#define TAILQ_FOREACH_REVERSE_SAFE(var,head,headname,field,tvar) for ((var) = TAILQ_LAST((head), headname); (var) && ((tvar) = TAILQ_PREV((var), headname, field), 1); (var) = (tvar))
#define VM_NAMED_ENTRY_NULL ((vm_named_entry_t) 0)
#define INT64_MAX 9223372036854775807LL
#define host_set_host_port(host,port) (KERN_INVALID_ARGUMENT)
#define VM_MEMORY_MALLOC 1
#define AQ_MAXHIGH 10000
#define KERN_DENIED 53
#define NOTE_ABSOLUTE 0x00000008
#define ITIMER_REAL 0
#define NOTE_CRITICAL 0x00000020
#define p_back p_un.p_st1.__p_back
#define _POSIX_SYMLINK_MAX 255
#define _BSD_I386__TYPES_H_ 
#define UINT32_MAX 4294967295U
#define __printf0like(fmtarg,firstvararg) __attribute__((__format__ (__printf0__, fmtarg, firstvararg)))
#define ILL_ILLOPN 4
#define UPDATE_IO_STATS(info,size) { info.count++; info.size += size; }
#define CPU_SUBTYPE_586 CPU_SUBTYPE_INTEL(5, 0)
#define VM_PROT_READ ((vm_prot_t) 0x01)
#define __INT16_MAX__ 0x7fff
#define _BSD_MACHINE__TYPES_H_ 
#define TAILQ_ENTRY(type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct { struct type *tqe_next; struct type **tqe_prev; TRACEBUF } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define SUPERPAGE_SIZE_ANY 1
#define SYNC_POLICY_ORDER_MASK 0x3
#define VM_PURGABLE_DEBUG_EMPTY (0x1 << VM_PURGABLE_DEBUG_SHIFT)
#define host_set_kextd_port(host,port) (host_set_special_port((host), HOST_KEXTD_PORT, (port)))
#define err_kern err_system(0x0)
#define __x86_64 1
#define THREAD_EXTENDED_INFO_COUNT ((mach_msg_type_number_t) (sizeof(thread_extended_info_data_t) / sizeof (natural_t)))
#define CPUFAMILY_INTEL_IVYBRIDGE 0x1f65e835
#define SEGV_ACCERR 2
#define _STRUCT_TIMEVAL struct timeval
#define VM_PAGE_QUERY_PAGE_DIRTY 0x8
#define HOST_ATM_NOTIFICATION_PORT (14 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define MACH_MSG_TYPE_INTEGER_T MACH_MSG_TYPE_INTEGER_32
#define x86_THREAD_STATE_COUNT ((mach_msg_type_number_t) ( sizeof (x86_thread_state_t) / sizeof (int) ))
#define MAXPHYS (128 * 1024)
#define MACH_DEBUG_PAGE_INFO_H 
#define CPU_SUBTYPE_POWERPC_603e ((cpu_subtype_t) 4)
#define uint(size) glue3(uint,size,_t)
#define EPROC_CTTY 0x01
#define _STRUCT_MMST_REG struct __darwin_mmst_reg
#define MACH_MSGH_BITS_SET_PORTS(remote,local,voucher) (((remote) & MACH_MSGH_BITS_REMOTE_MASK) | (((local) << 8) & MACH_MSGH_BITS_LOCAL_MASK) | (((voucher) << 16) & MACH_MSGH_BITS_VOUCHER_MASK))
#define strcat(dest,...) __builtin___strcat_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_4(x) x
#define VM_FLAGS_NO_CACHE 0x0010
#define __TVOS_12_0 120000
#define __TVOS_12_1 120100
#define __TVOS_12_2 120200
#define __TVOS_12_3 120300
#define __TVOS_12_4 120400
#define MACH_ACTIVITY_ID_COUNT_MAX 16
#define LIST_CHECK_NEXT(elm,field) 
#define __INT_FAST64_TYPE__ long long int
#define EXC_I386_SEGNPFLT 11
#define VM_PURGABLE_VOLATILE 1
#define stpncpy(dest,...) __builtin___stpncpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define __DARWIN_OSSwapConstInt32(x) ((__uint32_t)((((__uint32_t)(x) & 0xff000000U) >> 24) | (((__uint32_t)(x) & 0x00ff0000U) >> 8) | (((__uint32_t)(x) & 0x0000ff00U) << 8) | (((__uint32_t)(x) & 0x000000ffU) << 24)))
#define KERN_IPC 32
#define _MACH_MACH_TRAPS_H_ 
#define __Request__mach_host_subsystem__defined 
#define VM_PURGABLE_NO_AGING_SHIFT 16
#define AQ_BUFSZ MAXAUDITDATA
#define MACH_NOTIFY_NO_SENDERS (MACH_NOTIFY_FIRST + 006)
#define CLSHIFT (PGSHIFT+CLSIZELOG2)
#define KERN_NAME_EXISTS 13
#define THREAD_STATE_FLAVOR_LIST_10_9 129
#define VM_REGION_TOP_INFO 12
#define KERN_PROCARGS2 49
#define MACH_MSG_SIZE_MAX ((mach_msg_size_t) ~0)
#define __FLT64_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F64
#define __DBL_MIN__ ((double)2.22507385850720138309023271733240406e-308L)
#define WINT_MIN INT32_MIN
#define _host_security_user_ 
#define _SYS_SYSCTL_H_ 
#define ADD_MACH_TIMESPEC(t1,t2) do { if (((t1)->tv_nsec += (t2)->tv_nsec) >= (long) NSEC_PER_SEC) { (t1)->tv_nsec -= (long) NSEC_PER_SEC; (t1)->tv_sec += 1; } (t1)->tv_sec += (t2)->tv_sec; } while (0)
#define MACH_VOUCHER_ATTR_COPY ((mach_voucher_attr_recipe_command_t)1)
#define CPUFAMILY_INTEL_ICELAKE 0x38435547
#define x86_FLOAT_STATE64_COUNT ((mach_msg_type_number_t) (sizeof(x86_float_state64_t)/sizeof(unsigned int)))
#define KERN_INSUFFICIENT_BUFFER_SIZE 52
#define VM_VOLATILE_ORDER_SHIFT 4
#define _vm_map_user_ 
#define DST_WET 3
#define SLIST_INSERT_AFTER(slistelm,elm,field) do { SLIST_NEXT((elm), field) = SLIST_NEXT((slistelm), field); SLIST_NEXT((slistelm), field) = (elm); } while (0)
#define __OSX_AVAILABLE(_vers) 
#define KEVENT_FLAG_NONE 0x000000
#define A_SETSMASK 15
#define VM_MEMORY_COREGRAPHICS_SHARED 55
#define isclr(a,i) ((((unsigned char *)(a))[(i)/NBBY] & (1u<<((i)%NBBY))) == 0)
#define TH_STATE_STOPPED 2
#define CPU_TYPE_MC680x0 ((cpu_type_t) 6)
#define __FLT128_EPSILON__ 1.92592994438723585305597794258492732e-34F128
#define x86_DEBUG_STATE64_COUNT ((mach_msg_type_number_t) ( sizeof (x86_debug_state64_t) / sizeof (int) ))
#define EV_VANISHED 0x0200
#define RPC_DESCR_SIZE(x) ((x)->descr_count * sizeof(struct rpc_routine_arg_descriptor))
#define MAXAUDITDATA (0x8000 - 1)
#define __FLT64X_NORM_MAX__ 1.18973149535723176502126385303097021e+4932F64x
#define __SIZEOF_POINTER__ 8
#define MACH_MSG_TYPE_PORT_ANY(x) (((x) >= MACH_MSG_TYPE_MOVE_RECEIVE) && ((x) <= MACH_MSG_TYPE_MAKE_SEND_ONCE))
#define OSSwapBigToHostInt16(x) OSSwapInt16(x)
#define __SIZE_TYPE__ long unsigned int
#define GET_MZI_COLLECTABLE_FLAG(val) ((val) & 1)
#define MACH_RCV_TRAILER_CTX 4
#define MIG_REMOTE_ERROR -302
#define __not_tail_called 
#define THREAD_SCHED_RR_INFO 11
#define __IPHONE_7_0 70000
#define __IPHONE_7_1 70100
#define LIST_EMPTY(head) ((head)->lh_first == NULL)
#define TF_LP64 0x00000001
#define AU_DEFAUDITSID 0
#define THREAD_KERNEL_PORT 1
#define __LP64__ 1
#define VM_MEMORY_APPKIT 40
#define HOST_DYNAMIC_PAGER_PORT (1 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define VM_BEHAVIOR_REUSE ((vm_behavior_t) 9)
#define EXC_BREAKPOINT 6
#define __deprecated_enum_msg(_msg) 
#define __DBL_HAS_QUIET_NAN__ 1
#define SIG_HOLD (void (*)(int))5
#define __IOS_DEPRECATED(_start,_dep,_msg) 
#define TASK_DYLD_ALL_IMAGE_INFO_32 0
#define A_GETCLASS 22
#define CLD_CONTINUED 6
#define TASK_AFFINITY_TAG_INFO 16
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_3(x) 
#define MAXINTERP 64
#define MIG_ROUTINE_DESCRIPTOR_NULL ((mig_routine_descriptor_t)0)
#define __FLT32X_EPSILON__ 2.22044604925031308084726333618164062e-16F32x
#define OSSwapBigToHostInt32(x) OSSwapInt32(x)
#define unlikely(x) __builtin_expect((x), 0)
#define MACH_MSG_OOL_PORTS_DESCRIPTOR 2
#define KMOD_RETURN_FAILURE KERN_FAILURE
#define CPU_SUBTYPE_POWERPC_601 ((cpu_subtype_t) 1)
#define CPU_SUBTYPE_POWERPC_602 ((cpu_subtype_t) 2)
#define CPU_SUBTYPE_POWERPC_603 ((cpu_subtype_t) 3)
#define CPU_SUBTYPE_POWERPC_604 ((cpu_subtype_t) 6)
#define MACH_SEND_NOIMPORTANCE 0x00040000
#define TASK_VM_INFO_PURGEABLE_ACCOUNT 27
#define UQUAD_MAX ULLONG_MAX
#define CPU_TYPE_POWERPC ((cpu_type_t) 18)
#define __OS_AVAILABILITY_MSG(_target,_availability,_msg) 
#define MACH_MSGH_BITS_HAS_VOUCHER(bits) (MACH_MSGH_BITS_VOUCHER(bits) != MACH_MSGH_BITS_ZERO)
#define MACH_VOUCHER_NAME_NULL ((mach_voucher_name_t) 0)
#define __nonnull 
#define AUDIT_TRIGGER_LOW_SPACE 1
#define MIN_AUDIT_FILE_SIZE (512 * 1024)
#define NOTE_EXIT_DETAIL_MASK 0x00070000
#define MACH_SEND_INVALID_DEST 0x10000003
#define KERN_HOSTID 11
#define USEC_PER_SEC 1000000ull
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10_3(x) x
#define __FLT64_MIN_EXP__ (-1021)
#define MEMORY_OBJECT_INFO_MAX (1024)
#define _STRUCT_X86_THREAD_STATE64 struct __darwin_x86_thread_state64
#define MAC_OS_X_VERSION_10_11_2 101102
#define MAC_OS_X_VERSION_10_11_3 101103
#define MAC_OS_X_VERSION_10_11_4 101104
#define KERN_BOOTFILE 28
#define HOST_VM_INFO64 4
#define SLIST_EMPTY(head) ((head)->slh_first == NULL)
#define __MAC_OS_X_VERSION_MIN_REQUIRED __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__
#define MEMORY_OBJECT_DATA_FLUSH 0x1
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_4(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_5(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_6(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_7(x) 
#define PROC_FLAG_ADAPTIVE 0x100000
#define CHAR_MAX SCHAR_MAX
#define FPS_OE 0x0008
#define KERN_VERSION 4
#define __API_DEPRECATED_BEGIN_MSG_GET_MACRO(...) 
#define host_set_unfreed_port(host,port) (host_set_special_port((host), HOST_UNFREED_PORT, (port)))
#define INT_LEAST8_MAX INT8_MAX
#define CPU_TYPE_X86_64 (CPU_TYPE_X86 | CPU_ARCH_ABI64)
#define FPE_INTDIV 7
#define MAP_MEM_USE_DATA_ADDR 0x100000
#define EFL_IOPL_KERNEL 0x00000000
#define MAXDOMNAMELEN 256
#define _MACH_MACHINE_PROCESSOR_INFO_H_ 
#define HOST_BASIC_INFO 1
#define __WATCHOS_4_1 40100
#define TASK_READ_PORT 6
#define _POSIX2_EQUIV_CLASS_MAX 2
#define FPS_PE 0x0020
#define __FLT64_MIN_10_EXP__ (-307)
#define THREAD_THROUGHPUT_QOS_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (thread_throughput_qos_policy_data_t) / sizeof (integer_t)))
#define ARCADE_REG_NULL ((arcade_register_t) 0)
#define __WATCHOS_4_3 40300
#define __has_extension(x) 0
#define HOST_MIN_SPECIAL_PORT HOST_SECURITY_PORT
#define CPU_SUBTYPE_VAX8800 ((cpu_subtype_t) 11)
#define MACH_RCV_INVALID_REPLY 0x10004012
#define __MAC_OS_X_VERSION_MAX_ALLOWED __MAC_11_3
#define MEMORY_OBJECT_BEHAVIOR_INFO 15
#define TIME_ABSOLUTE 0x00
#define CLOCK_UPTIME_RAW _CLOCK_UPTIME_RAW
#define HW_USERMEM 6
#define VM_REGION_BASIC_INFO 10
#define FD_ZERO(p) __DARWIN_FD_ZERO(p)
#define PROC_FLAG_IOS_APPLICATION PROC_FLAG_APPLICATION
#define LIST_CHECK_PREV(elm,field) 
#define TASK_DYLD_INFO_COUNT (sizeof(task_dyld_info_data_t) / sizeof(natural_t))
#define __FLT64X_DECIMAL_DIG__ 21
#define PROCESSOR_BASIC_INFO_COUNT ((mach_msg_type_number_t) (sizeof(processor_basic_info_data_t)/sizeof(natural_t)))
#define host_set_dynamic_pager_port(host,port) (host_set_special_port((host), HOST_DYNAMIC_PAGER_PORT, (port)))
#define PWAIT 32
#define SIZE_T_MAX ULONG_MAX
#define VM_MEMORY_ROSETTA_THREAD_CONTEXT 231
#define _MACH_MACHINE_THREAD_STATUS_H_ 
#define MACH_SEND_ALWAYS 0x00010000
#define KERN_KDEFLAGS 1
#define __REGISTER_PREFIX__ 
#define __UINT16_MAX__ 0xffff
#define __API_AVAILABLE_END 
#define P_NOSHLIB 0x10000000
#define ctod(x) ((x)<<(PGSHIFT-DEV_BSHIFT))
#define MACH_MSGH_BITS_DENAPHOLDASRT MACH_MSGH_BITS_IMPHOLDASRT
#define __DBL_HAS_DENORM__ 1
#define INT_LEAST32_MAX INT32_MAX
#define HW_L2CACHESIZE 20
#define MACH_PORT_TYPE_SEND_ONCE MACH_PORT_TYPE(MACH_PORT_RIGHT_SEND_ONCE)
#define __MAC_10_11_3 101103
#define __MAC_10_11_4 101104
#define MACH_PORT_STATUS_FLAG_IMP_DONATION 0x08
#define FPE_FLTSUB 6
#define MPO_IMPORTANCE_RECEIVER 0x08
#define _POSIX2_BC_DIM_MAX 2048
#define KERN_MAXFILESPERPROC 29
#define NOTE_REAP ((unsigned int)eNoteReapDeprecated )
#define PGSHIFT 12
#define FPS_SF 0x0040
#define KERN_VFSNSPACE_HANDLE_PROC 1
#define P_SUGID 0x00000100
#define STAILQ_REMOVE_HEAD_UNTIL(head,elm,field) do { if ((STAILQ_FIRST((head)) = STAILQ_NEXT((elm), field)) == NULL) (head)->stqh_last = &STAILQ_FIRST((head)); } while (0)
#define host_set_node_port(host,port) (host_set_special_port((host), HOST_NODE_PORT, (port)))
#define ERR_PTR(err) (void *) (intptr_t) (err)
#define __LDBL_HAS_INFINITY__ 1
#define __OS_AVAILABILITY(_target,_availability) 
#define MACH_RCV_TRAILER_AUDIT 3
#define PROCESSOR_SET_LOAD_INFO 4
#define HOST_FAIRPLAYD_PORT (24 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define TASK_INSPECT_NULL ((task_inspect_t) 0)
#define EQUIV_CLASS_MAX 2
#define TASK_EXC_GUARD_VM_ONCE 0x02
#define VM_MAX_USER_PAGE_ADDRESS ((user_addr_t)0x00007FFFFFFFF000ULL)
#define posit assert
#define PROC_FLAG_APPLICATION 0x1000000
#define __FLT32_MIN__ 1.17549435082228750796873653722224568e-38F32
#define __UINT8_TYPE__ unsigned char
#define P_PROFIL 0x00000020
#define MACH_SEND_MSG_TOO_SMALL 0x10000008
#define TRASHIT(x) 
#define VM_REGION_TOP_INFO_COUNT ((mach_msg_type_number_t) (sizeof(vm_region_top_info_data_t) / sizeof(natural_t)))
#define NBPG 4096
#define __FLT_DIG__ 6
#define NBPW sizeof(int)
#define __NO_INLINE__ 1
#define MACH_RCV_TRAILER_MASK ((0xf << 24))
#define TAILQ_CHECK_HEAD(head,field) 
#define FPS_UE 0x0010
#define ULONG_MAX (LONG_MAX * 2UL + 1UL)
#define CBQSIZE (CBLOCK/NBBY)
#define KERN_UNRAGE_THREAD 4
#define CLOCKS_PER_SEC 1000000
#define __DARWIN_NON_CANCELABLE 0
#define _MACH_TASK_POLICY_H_ 
#define CPU_STATE_SYSTEM 1
#define host_set_chud_port(host,port) host_set_launchctl_port(host, port)
#define A_SETCTLMODE 42
#define MACH_PORT_TYPE_DNREQUEST 0x80000000
#define __DEC_EVAL_METHOD__ 2
#define OSSwapLittleToHostInt(x) OSSwapLittleToHostInt32(x)
#define FPC_RC_CHOP 0x0c00
#define _POSIX_CLOCKRES_MIN 20000000
#define strcpy(dest,...) __builtin___strcpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define KERN_NETBOOT 40
#define __AVAILABILITY_INTERNAL_DEPRECATED_MSG(_msg) __attribute__((deprecated))
#define MACH_MSG_GUARD_FLAGS_IMMOVABLE_RECEIVE 0x0001
#define _MACH_MACHINE_VM_PARAM_H_ 
#define SIGEV_THREAD 3
#define MACH_MSG_TYPE_PORT_NONE 0
#define MACH_MSGH_BITS_CIRCULAR 0x10000000U
#define __RequestUnion__lock_set_subsystem__defined 
#define KIPC_NMBCLUSTERS 9
#define _STRUCT_X86_THREAD_FULL_STATE64 struct __darwin_x86_thread_full_state64
#define BYTE_SIZE 8
#define __enum_options 
#define CHAR_MIN SCHAR_MIN
#define MAX_CANON 1024
#define MEMORY_OBJECT_RELEASE_NO_OP 0x4
#define EXC_MASK_RESOURCE (1 << EXC_RESOURCE)
#define __FLT_MANT_DIG__ 24
#define NDR_PROTOCOL_2_0 0
#define __LDBL_DECIMAL_DIG__ 21
#define KERN_KDBUFWAIT 23
#define INT_LEAST8_MIN INT8_MIN
#define VM_LEDGER_TAG_NEURAL 0x00000005
#define VM_MEMORY_MALLOC_MEDIUM 12
#define P_SSTEP 0
#define subsystem_to_name_map_processor { "processor_start", 3000 }, { "processor_exit", 3001 }, { "processor_info", 3002 }, { "processor_control", 3003 }, { "processor_assign", 3004 }, { "processor_get_assignment", 3005 }
#define OFF_MIN LLONG_MIN
#define CIRCLEQ_ENTRY(type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct { struct type *cqe_next; struct type *cqe_prev; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define KIPC_SOQLIMITCOMPAT 10
#define __VERSION__ "11.2.0"
#define KERN_VNODE 13
#define SUID_CRED_NULL ((suid_cred_t) 0)
#define _host_priv_user_ 
#define TASK_BASIC_INFO TASK_BASIC_INFO_64
#define CTL_MAXNAME 12
#define __MAC_10_10 101000
#define __MAC_10_11 101100
#define __MAC_10_12 101200
#define __MAC_10_13 101300
#define __MAC_10_14 101400
#define __MAC_10_15 101500
#define __MAC_10_16 101600
#define PGOFSET (NBPG-1)
#define __DARWIN_SUF_UNIX03 
#define __UINT64_C(c) c ## ULL
#define __used __attribute__((__used__))
#define NOTE_FFAND 0x40000000
#define VM_MEMORY_COREGRAPHICS_BACKINGSTORES 57
#define HOST_VM_INFO_LATEST_COUNT HOST_VM_INFO_COUNT
#define ILL_ILLTRP 2
#define thread_act_MSG_COUNT 31
#define _POSIX_TRACE_NAME_MAX 8
#define MACH_PORT_TYPE(right) ((mach_port_type_t)(((mach_port_type_t) 1) << ((right) + ((mach_port_right_t) 16))))
#define VM_PROT_DEFAULT (VM_PROT_READ|VM_PROT_WRITE)
#define err_system(x) ((signed)((((unsigned)(x))&0x3f)<<26))
#define MACH_VOUCHER_ATTR_IMPORTANCE_SELF ((mach_voucher_attr_recipe_command_t)200)
#define _MACH_PORT_T 
#define MACH_PORT_IMPORTANCE_RECEIVER 5
#define timevalcmp(l,r,cmp) timercmp(l, r, cmp)
#define _MACH_DEBUG_HASH_INFO_H_ 
#define _PTHREAD_RWLOCK_T 
#define A_GETCTLMODE 41
#define SIGSTKSZ 131072
#define _SECURE__STRINGS_H_ 
#define SA_RESETHAND 0x0004
#define ILL_BADSTK 8
#define VM_MEMORY_DHMM 84
#define TASK_CATEGORY_POLICY 1
#define clrnd(i) (i)
#define MIG_ROUTINE_ARG_DESCRIPTOR_NULL ((mig_routine_arg_descriptor_t)0)
#define CTL_USER_NAMES { { 0, 0 }, { "cs_path", CTLTYPE_STRING }, { "bc_base_max", CTLTYPE_INT }, { "bc_dim_max", CTLTYPE_INT }, { "bc_scale_max", CTLTYPE_INT }, { "bc_string_max", CTLTYPE_INT }, { "coll_weights_max", CTLTYPE_INT }, { "expr_nest_max", CTLTYPE_INT }, { "line_max", CTLTYPE_INT }, { "re_dup_max", CTLTYPE_INT }, { "posix2_version", CTLTYPE_INT }, { "posix2_c_bind", CTLTYPE_INT }, { "posix2_c_dev", CTLTYPE_INT }, { "posix2_char_term", CTLTYPE_INT }, { "posix2_fort_dev", CTLTYPE_INT }, { "posix2_fort_run", CTLTYPE_INT }, { "posix2_localedef", CTLTYPE_INT }, { "posix2_sw_dev", CTLTYPE_INT }, { "posix2_upe", CTLTYPE_INT }, { "stream_max", CTLTYPE_INT }, { "tzname_max", CTLTYPE_INT } }
#define VM_MEMORY_MALLOC_PGUARD 13
#define CPU_SUBTYPE_POWERPC_970 ((cpu_subtype_t) 100)
#define AUDIT_TRIGGER_MIN 1
#define TASK_EVENTS_INFO 2
#define FPS_ZE 0x0004
#define KERN_DUMMY 33
#define INT_LEAST32_MIN INT32_MIN
#define TRAP_TRACE 2
#define PAGE_MIN_MASK (PAGE_MIN_SIZE-1)
#define MACH_VOUCHER_ATTR_KEY_NUM_WELL_KNOWN MACH_VOUCHER_ATTR_KEY_TEST
#define VM_MEMORY_TCMALLOC 53
#define DST_EET 5
#define QMD_TRACE_ELEM(elem) 
#define INT_FAST16_MAX INT16_MAX
#define __APPLE_API_PRIVATE 
#define TASK_FLAVOR_READ 1
#define SUPERPAGE_NONE 0
#define P_CONTROLT 0x00000002
#define DST_MET 4
#define host_set_syspolicyd_port(host,port) (host_set_special_port((host), HOST_SYSPOLICYD_PORT, (port)))
#define TH_STATE_RUNNING 1
#define USER_BC_STRING_MAX 5
#define MACH_EXCEPTION_CODES 0x80000000
#define _MACH_MACHINE_H_ 
#define TASK_WAIT_STATE_INFO_COUNT ((mach_msg_type_number_t) (sizeof(task_wait_state_info_data_t) / sizeof(natural_t)))
#define VM_PURGABLE_BEHAVIOR_SHIFT 6
#define MACH_VOUCHER_ATTR_KEY_ALL ((mach_voucher_attr_key_t)~0)
#define AUC_AUDITING 1
#define VM_MEMORY_GENEALOGY 78
#define _SYS__TYPES_H_ 
#define MACH_PORT_TYPE_SEND_RIGHTS (MACH_PORT_TYPE_SEND|MACH_PORT_TYPE_SEND_ONCE)
#define STATUS_WORD(rpl,ipl) (((ipl) << 8) | (rpl))
#define KERN_INVALID_NAME 15
#define __INT_LEAST32_MAX__ 0x7fffffff
#define CLOCK_MONOTONIC_RAW _CLOCK_MONOTONIC_RAW
#define SZOMB 5
#define KIPC_MBSTAT 8
#define LINE_MAX 2048
#define __STRING(x) #x
#define VM_MEMORY_MALLOC_LARGE_REUSABLE 8
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define __DARWIN_1050ALIAS_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_NON_CANCELABLE __DARWIN_SUF_UNIX03)
#define CPUFAMILY_POWERPC_G5 0xed76d8aa
#define __DARWIN_1050ALIAS_I(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_64_BIT_INO_T __DARWIN_SUF_UNIX03)
#define KERN_PROF 16
#define AT_IPC_MSG ((unsigned char)1)
#define KERNEL_VERSION_MAX (512)
#define _MACH_MIG_H_ 
#define __RequestUnion__thread_act_subsystem__defined 
#define _UINTPTR_T 
#define __FLT128_MAX_EXP__ 16384
#define _DARWIN_FEATURE_UNIX_CONFORMANCE 3
#define ZONE_NAME_MAX_LEN 80
#define EXC_I386_INVOP 1
#define CPUFAMILY_POWERPC_G3 0xcee41549
#define host_set_ktrace_background_port(host,port) (host_set_special_port((host), HOST_KTRACE_BACKGROUND_PORT, (port)))
#define EXC_MASK_CORPSE_NOTIFY (1 << EXC_CORPSE_NOTIFY)
#define THREAD_EXTENDED_POLICY 1
#define FP_FXSR 4
#define MPO_FILTER_MSG 0x100
#define VM_REGION_EXTENDED_INFO_COUNT ((mach_msg_type_number_t) (sizeof (vm_region_extended_info_data_t) / sizeof (natural_t)))
#define __no_instrument __attribute__((no_sanitize("address", "thread", "undefined", "leak"))) __no_instrument_msan
#define PSOCK 24
#define CTLFLAG_OID2 0x00400000
#define MACH_SEND_NOTIFY 0x00000080
#define OSSwapInt32(x) __DARWIN_OSSwapInt32(x)
#define EXCEPTION_CODE_MAX 2
#define KERN_KDWRITEMAP_V3 27
#define USER_POSIX2_VERSION 10
#define CTL_MACHDEP 7
#define KERN_PROCARGS 38
#define MATTR_CACHE 1
#define NOTE_EXTEND 0x00000004
#define OSSwapHostToBigInt16(x) OSSwapInt16(x)
#define CPU_SUBTYPE_XEON_MP CPU_SUBTYPE_INTEL(12, 1)
#define P_DIRTY_LAUNCH_IN_PROGRESS 0x00000200
#define timercmp(tvp,uvp,cmp) (((tvp)->tv_sec == (uvp)->tv_sec) ? ((tvp)->tv_usec cmp (uvp)->tv_usec) : ((tvp)->tv_sec cmp (uvp)->tv_sec))
#define _POSIX_STREAM_MAX 8
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_2(x) 
#define TASK_BASE_THROUGHPUT_QOS_POLICY 11
#define __FLT32_MANT_DIG__ 24
#define btoc(x) (((unsigned)(x)+(NBPG-1))>>PGSHIFT)
#define __API_DEPRECATED(...) 
#define VM_MAX_PAGE_ADDRESS ((user_addr_t) 0x00007FFFFFE00000ULL)
#define MACH_PORT_RECEIVE_STATUS_COUNT ((natural_t) (sizeof(mach_port_status_t)/sizeof(natural_t)))
#define MACH_SEND_MSG_FILTERED 0x10000017
#define TASK_VM_INFO_REV0_COUNT ((mach_msg_type_number_t) (TASK_VM_INFO_REV1_COUNT - 2))
#define LIST_HEAD_INITIALIZER(head) { NULL }
#define VM_MEMORY_SWIFT_RUNTIME 82
#define VM_PROT_EXECUTE_ONLY (VM_PROT_EXECUTE|VM_PROT_STRIP_READ)
#define TASK_FLAVOR_INSPECT 2
#define FPS_BUSY 0x8000
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#define USER_POSIX2_C_DEV 12
#define VM_PAGE_INFO_BASIC 1
#define _CLOCK_T 
#define SYNC_POLICY_LIFO (SYNC_POLICY_FIFO|SYNC_POLICY_REVERSED)
#define CLOCK_ALARM_CURRES 3
#define P_TRANSLATED 0x00020000
#define _INTMAX_T 
#define HOST_SCHED_INFO_COUNT ((mach_msg_type_number_t) (sizeof(host_sched_info_data_t)/sizeof(integer_t)))
#define __IPHONE_13_5 130500
#define _STRINGS_H_ 
#define USER_RE_DUP_MAX 9
#define SIG_ATOMIC_MAX INT32_MAX
#define _I386_EFLAGS_H_ 
#define SSIZE_MAX LONG_MAX
#define UND_SERVER_NULL ((UNDServerRef) 0)
#define _MACH_PORT_H_ 
#define EFL_AC 0x00040000
#define THREAD_LATENCY_QOS_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (thread_latency_qos_policy_data_t) / sizeof (integer_t)))
#define EFL_AF 0x00000010
#define MEMORY_OBJECT_DATA_SYNC 0x10
#define HW_FLOATINGPT 11
#define FPC_RC_RD 0x0400
#define __FBSDID(s) 
#define P_TRACED 0x00000800
#define SYNC_POLICY_REVERSED 0x2
#define __PTHREAD_MUTEXATTR_SIZE__ 8
#define HW_PAGESIZE 7
#define FPC_RC_RN 0x0000
#define _clock_priv_user_ 
#define LIST_CHECK_HEAD(head,field) 
#define CPU_SUBTYPE_CELERON_MOBILE CPU_SUBTYPE_INTEL(7, 7)
#define A_OLDSETQCTRL 7
#define KERN_KDSETBUF 4
#define STAILQ_INSERT_HEAD(head,elm,field) do { if ((STAILQ_NEXT((elm), field) = STAILQ_FIRST((head))) == NULL) (head)->stqh_last = &STAILQ_NEXT((elm), field); STAILQ_FIRST((head)) = (elm); } while (0)
#define __ReplyUnion__host_priv_subsystem__defined 
#define VM_MEMORY_RAWCAMERA 79
#define POLL_ERR 4
#define EXC_CORPSE_VARIANT_BIT 0x100
#define HW_MACHINE_ARCH 12
#define __IOS_UNAVAILABLE 
#define NDR_FLOAT_VAX 1
#define ILL_ILLADR 5
#define __DARWIN_BYTE_ORDER __DARWIN_LITTLE_ENDIAN
#define VM_MEMORY_CORESERVICES 43
#define VM_USRSTACK64 ((user_addr_t) 0x00007FFEEFC00000ULL)
#define INT32_MAX 2147483647
#define MACH_VOUCHER_ATTR_KEY_ATM ((mach_voucher_attr_key_t)1)
#define VM_FLAGS_ANYWHERE 0x0001
#define EFL_USER_CLEAR (EFL_IOPL|EFL_NT|EFL_RF)
#define STAILQ_ENTRY(type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct { struct type *stqe_next; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define _MACH_I386_KERN_RETURN_H_ 
#define CIRCLEQ_INSERT_TAIL(head,elm,field) do { (elm)->field.cqe_next = (void *)(head); (elm)->field.cqe_prev = (head)->cqh_last; if ((head)->cqh_first == (void *)(head)) (head)->cqh_first = (elm); else (head)->cqh_last->field.cqe_next = (elm); (head)->cqh_last = (elm); } while (0)
#define _U_INT8_T 
#define _DEV_T 
#define TH_STATE_WAITING 3
#define EFL_CF 0x00000001
#define CPU_STATE_MAX 4
#define KERN_LOCK_OWNED_SELF 41
#define CPUFAMILY_ARM_HURRICANE 0x67ceee93
#define VM_REGION_SUBMAP_SHORT_INFO_COUNT_64 ((mach_msg_type_number_t) (sizeof (vm_region_submap_short_info_data_64_t) / sizeof (natural_t)))
#define PROCESSOR_SET_BASIC_INFO_COUNT ((mach_msg_type_number_t) (sizeof(processor_set_basic_info_data_t)/sizeof(natural_t)))
#define NL_TEXTMAX 2048
#define MACH_RCV_TRAILER_TYPE(x) (((x) & 0xf) << 28)
#define __Reply__lock_set_subsystem__defined 
#define host_set_user_notification_port(host,port) (host_set_special_port((host), HOST_USER_NOTIFICATION_PORT, (port)))
#define MACH_VOUCHER_ATTR_TEST_STORE MACH_VOUCHER_ATTR_USER_DATA_STORE
#define VM_METER 1
#define KERN_SYMFILE 37
#define P_PHYSIO 0
#define makedev(x,y) ((dev_t)(((x) << 24) | (y)))
#define PAGE_MAX_SHIFT 14
#define KERN_AIOTHREADS 48
#define MAP_MEM_GRAB_SECLUDED 0x008000
#define _STDNORETURN_H 
#define __FLT128_HAS_DENORM__ 1
#define CPU_SUBTYPE_MIPS_R2300 ((cpu_subtype_t) 1)
#define EFL_DF 0x00000400
#define SIG_UNBLOCK 2
#define HOST_EXTMOD_INFO64_LATEST_COUNT HOST_EXTMOD_INFO64_COUNT
#define CTL_HW_NAMES { { 0, 0 }, { "machine", CTLTYPE_STRING }, { "model", CTLTYPE_STRING }, { "ncpu", CTLTYPE_INT }, { "byteorder", CTLTYPE_INT }, { "physmem", CTLTYPE_INT }, { "usermem", CTLTYPE_INT }, { "pagesize", CTLTYPE_INT }, { "disknames", CTLTYPE_STRUCT }, { "diskstats", CTLTYPE_STRUCT }, { "epoch", CTLTYPE_INT }, { "floatingpoint", CTLTYPE_INT }, { "machinearch", CTLTYPE_STRING }, { "vectorunit", CTLTYPE_INT }, { "busfrequency", CTLTYPE_INT }, { "cpufrequency", CTLTYPE_INT }, { "cachelinesize", CTLTYPE_INT }, { "l1icachesize", CTLTYPE_INT }, { "l1dcachesize", CTLTYPE_INT }, { "l2settings", CTLTYPE_INT }, { "l2cachesize", CTLTYPE_INT }, { "l3settings", CTLTYPE_INT }, { "l3cachesize", CTLTYPE_INT }, { "tbfrequency", CTLTYPE_INT }, { "memsize", CTLTYPE_QUAD }, { "availcpu", CTLTYPE_INT }, { "target", CTLTYPE_STRING }, { "product", CTLTYPE_STRING }, }
#define __FLT32_DECIMAL_DIG__ 9
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_5(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_6(x) x
#define CPUFAMILY_ARM_XSCALE 0x53b005f5
#define VM_MEMORY_UNSHARED_PMAP 35
#define TASK_EVENTS_INFO_COUNT ((mach_msg_type_number_t) (sizeof(task_events_info_data_t) / sizeof(natural_t)))
#define MIG_TRAILER_ERROR -309
#define FPC_PC_24 0x0000
#define MAC_OS_X_VERSION_10_15_1 101501
#define SM_COW 1
#define SIGTSTP 18
#define __FLT128_DIG__ 33
#define AUDIT_USER 0x0040
#define __OSX_UNAVAILABLE 
#define SIGEMT 7
#define __INT32_C(c) c
#define TAILQ_FIRST(head) ((head)->tqh_first)
#define __ORDER_PDP_ENDIAN__ 3412
#define OSReadLittleInt16(base,byteOffset) _OSReadInt16(base, byteOffset)
#define _SYS_EVENT_H_ 
#define __MigTypeCheck 1
#define USER_TZNAME_MAX 20
#define _STRUCT_LAST_BRANCH_STATE struct __last_branch_state
#define str(x) _str(x)
#define LIST_SWAP(head1,head2,type,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH do { struct type *swap_tmp = LIST_FIRST((head1)); LIST_FIRST((head1)) = LIST_FIRST((head2)); LIST_FIRST((head2)) = swap_tmp; if ((swap_tmp = LIST_FIRST((head1))) != NULL) swap_tmp->field.le_prev = &LIST_FIRST((head1)); if ((swap_tmp = LIST_FIRST((head2))) != NULL) swap_tmp->field.le_prev = &LIST_FIRST((head2)); } while (0) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define i386_FLOAT_STATE_COUNT ((mach_msg_type_number_t) (sizeof(i386_float_state_t)/sizeof(unsigned int)))
#define SUB_MACH_TIMESPEC(t1,t2) do { if (((t1)->tv_nsec -= (t2)->tv_nsec) < 0) { (t1)->tv_nsec += (long) NSEC_PER_SEC; (t1)->tv_sec -= 1; } (t1)->tv_sec -= (t2)->tv_sec; } while (0)
#define memset(dest,...) __builtin___memset_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define MPO_CONTEXT_AS_GUARD 0x01
#define MACH_SEND_TIMED_OUT 0x10000004
#define NOTE_EXIT_DECRYPTFAIL 0x00010000
#define _BSD_MACHINE_SIGNAL_H_ 
#define __VM_LEDGER_ACCOUNTING_POSTMARK 2019032600
#define subsystem_to_name_map_vm_map { "vm_region", 3800 }, { "vm_allocate", 3801 }, { "vm_deallocate", 3802 }, { "vm_protect", 3803 }, { "vm_inherit", 3804 }, { "vm_read", 3805 }, { "vm_read_list", 3806 }, { "vm_write", 3807 }, { "vm_copy", 3808 }, { "vm_read_overwrite", 3809 }, { "vm_msync", 3810 }, { "vm_behavior_set", 3811 }, { "vm_map", 3812 }, { "vm_machine_attribute", 3813 }, { "vm_remap", 3814 }, { "task_wire", 3815 }, { "mach_make_memory_entry", 3816 }, { "vm_map_page_query", 3817 }, { "mach_vm_region_info", 3818 }, { "vm_mapped_pages_info", 3819 }, { "vm_region_recurse", 3821 }, { "vm_region_recurse_64", 3822 }, { "mach_vm_region_info_64", 3823 }, { "vm_region_64", 3824 }, { "mach_make_memory_entry_64", 3825 }, { "vm_map_64", 3826 }, { "vm_purgable_control", 3830 }, { "vm_map_exec_lockdown", 3831 }, { "vm_remap_new", 3832 }
#define __assert(e,file,line) __assert_rtn ((const char *)-1L, file, line, e)
#define VM_MEMORY_ACCELERATE 75
#define CPU_SUBTYPE_MC68030 ((cpu_subtype_t) 1)
#define CTLTYPE_STRING 3
#define VM_PROT_WANTS_COPY ((vm_prot_t) 0x10)
#define _Null_unspecified 
#define LONG_MAX __LONG_MAX__
#define CPU_SUBTYPE_HPPA_7100 ((cpu_subtype_t) 0)
#define BYTE_ORDER __DARWIN_BYTE_ORDER
#define VM_MEMORY_DYLD 60
#define _SYS_TIME_H_ 
#define VM_PURGABLE_ORDERING_OBSOLETE (1 << VM_PURGABLE_ORDERING_SHIFT)
#define __MAC_11_0 110000
#define __INT_FAST32_TYPE__ int
#define __MAC_11_3 110300
#define NOTE_NSECONDS 0x00000004
#define __DARWIN_NO_LONG_LONG 0
#define btodb(bytes,devBlockSize) ((unsigned)(bytes) / devBlockSize)
#define OSReadLittleInt32(base,byteOffset) _OSReadInt32(base, byteOffset)
#define CPU_SUBTYPE_MC68040 ((cpu_subtype_t) 2)
#define UINT64_MAX 18446744073709551615ULL
#define KERN_UNRAGE_PROC 3
#define VM_MEMORY_SWIFT_METADATA 83
#define __PTHREAD_RWLOCKATTR_SIZE__ 16
#define TASK_BASIC2_INFO_32 6
#define ILL_COPROC 7
#define KERN_VFSNSPACE_UNHANDLE_PROC 2
#define CPU_SUBTYPE_X86_64_ALL ((cpu_subtype_t)3)
#define SWITCH_OPTION_DEPRESS 1
#define MACH_RCV_INVALID_DATA 0x10004008
#define _ANSI_STDARG_H_ 
#define _BLKCNT_T 
#define _UINT8_T 
#define __UINT_LEAST16_TYPE__ short unsigned int
#define _STRUCT_TIMESPEC struct timespec
#define MACH_MSG_TRAILER_FORMAT_0_SIZE sizeof(mach_msg_format_0_trailer_t)
#define VM_MEMORY_CGIMAGE 52
#define EXC_CRASH 10
#define EXC_CORPSE_NOTIFY 13
#define __ReplyUnion__mach_port_subsystem__defined 
#define MACH_CORE_FILEHEADER_MAXFILES 16
#define __MAC_10_15_4 101504
#define USHRT_MAX (SHRT_MAX * 2 + 1)
#define _INT64_T 
#define _POSIX_CHILD_MAX 25
#define CPU_SUBTYPE_X86_ALL ((cpu_subtype_t)3)
#define PROCESSOR_CPU_LOAD_INFO 2
#define host_get_atm_notification_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_ATM_NOTIFICATION_PORT, (port)))
#define __Request__mach_port_subsystem__defined 
#define _mach_host_user_ 
#define EXC_MASK_EMULATION (1 << EXC_EMULATION)
#define MEMORY_OBJECT_PERF_INFO_COUNT ((mach_msg_type_number_t) (sizeof(memory_object_perf_info_data_t)/sizeof(int)))
#define NL_MSGMAX 32767
#define P_AFFINITY 0x00010000
#define TASK_INSPECT_PORT 5
#define NTOHLL(x) (x) = ntohll((__uint64_t)x)
#define __RequestUnion__processor_set_subsystem__defined 
#define host_set_host_priv_port(host,port) (KERN_INVALID_ARGUMENT)
#define VM_MAKE_TAG(tag) ((tag) << 24)
#define STAILQ_INSERT_AFTER(head,tqelm,elm,field) do { if ((STAILQ_NEXT((elm), field) = STAILQ_NEXT((tqelm), field)) == NULL) (head)->stqh_last = &STAILQ_NEXT((elm), field); STAILQ_NEXT((tqelm), field) = (elm); } while (0)
#define MACH_PORT_RIGHT_PORT_SET ((mach_port_right_t) 3)
#define CTLFLAG_LOCKED 0x00800000
#define __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ 110500
#define CTL_NAMES { { 0, 0 }, { "kern", CTLTYPE_NODE }, { "vm", CTLTYPE_NODE }, { "vfs", CTLTYPE_NODE }, { "net", CTLTYPE_NODE }, { "debug", CTLTYPE_NODE }, { "hw", CTLTYPE_NODE }, { "machdep", CTLTYPE_NODE }, { "user", CTLTYPE_NODE }, }
#define STAILQ_LAST(head,type,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH (STAILQ_EMPTY((head)) ? NULL : ((struct type *)(void *) ((char *)((head)->stqh_last) - __offsetof(struct type, field))))__NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define x86_EXCEPTION_STATE32_COUNT ((mach_msg_type_number_t) ( sizeof (x86_exception_state32_t) / sizeof (int) ))
#define x86_FLOAT_STATE64 5
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_1(x) 
#define __UINT64_MAX__ 0xffffffffffffffffULL
#define BAD_MACH_TIMESPEC(t) ((t)->tv_nsec < 0 || (t)->tv_nsec >= (long)NSEC_PER_SEC)
#define NOTE_MACH_CONTINUOUS_TIME 0x00000080
#define __FLT_IS_IEC_60559__ 2
#define EXC_I386_INTO 2
#define VM_VOLATILE_GROUP_0 (0 << VM_VOLATILE_GROUP_SHIFT)
#define typecheck(type,x) ({type _x = x; x;})
#define host_security_MSG_COUNT 2
#define TASK_EXC_GUARD_MP_ONCE 0x20
#define __GNUC_WIDE_EXECUTION_CHARSET_NAME "UTF-32LE"
#define VM_VOLATILE_GROUP_1 (1 << VM_VOLATILE_GROUP_SHIFT)
#define __WATCHOS_3_0 30000
#define __WATCHOS_3_1 30100
#define __WATCHOS_3_2 30200
#define CPU_SUBTYPE_POWERPC_ALL ((cpu_subtype_t) 0)
#define VM_VOLATILE_GROUP_2 (2 << VM_VOLATILE_GROUP_SHIFT)
#define _SYS_SYSLIMITS_H_ 
#define __FLT64X_DIG__ 18
#define __ReplyUnion__host_security_subsystem__defined 
#define VM_PURGABLE_STATE_MASK 3
#define NOTE_DELETE 0x00000001
#define FPS_TOS_SHIFT 11
#define VM_MIN_ADDRESS ((vm_offset_t) 0)
#define thread_get_kernel_port(thread,port) (thread_get_special_port((thread), THREAD_KERNEL_PORT, (port)))
#define GUARD_TYPE_MACH_PORT 0x1
#define CPU_SUBTYPE_PENTPRO CPU_SUBTYPE_INTEL(6, 1)
#define MACH_PORT_RIGHT_LABELH ((mach_port_right_t) 5)
#define __INT8_TYPE__ signed char
#define VM_VOLATILE_GROUP_4 (4 << VM_VOLATILE_GROUP_SHIFT)
#define VM_VOLATILE_GROUP_5 (5 << VM_VOLATILE_GROUP_SHIFT)
#define VM_VOLATILE_GROUP_7 (7 << VM_VOLATILE_GROUP_SHIFT)
#define _UINTMAX_T 
#define VM_VOLATILE_GROUP_3 (3 << VM_VOLATILE_GROUP_SHIFT)
#define KERN_OSRELDATE 26
#define HOST_KEXTD_PORT (8 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define TASK_QOS_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (struct task_qos_policy) / sizeof (integer_t)))
#define COLL_WEIGHTS_MAX 2
#define TAILQ_FOREACH(var,head,field) for ((var) = TAILQ_FIRST((head)); (var); (var) = TAILQ_NEXT((var), field))
#define CPU_SUBTYPE_VAX8600 ((cpu_subtype_t) 9)
#define OPEN_MAX 10240
#define __DARWIN_NOCANCEL(sym) __asm("_" __STRING(sym) __DARWIN_SUF_NON_CANCELABLE)
#define _VA_LIST 
#define MPG_FLAGS_STRICT_REPLY_NO_BANK_ATTR (0x08ull << 56)
#define VM_VOLATILE_GROUP_6 (6 << VM_VOLATILE_GROUP_SHIFT)
#define __GCC_ASM_FLAG_OUTPUTS__ 1
#define MAXPHYSIO MAXPHYS
#define _QUAD_HIGHWORD 1
#define VM_MEMORY_REALLOC 6
#define host_set_telemetry_port(host,port) (host_set_special_port((host), HOST_TELEMETRY_PORT, (port)))
#define PIPE_BUF 512
#define AUDIT_TRIGGER_ROTATE_KERNEL 2
#define MB_LEN_MAX 6
#define __CAST_AWAY_QUALIFIER(variable,qualifier,type) (type) (long)(variable)
#define VALID_THREAD_STATE_FLAVOR(x) ((x == x86_THREAD_STATE32) || (x == x86_FLOAT_STATE32) || (x == x86_EXCEPTION_STATE32) || (x == x86_DEBUG_STATE32) || (x == x86_THREAD_STATE64) || (x == x86_THREAD_FULL_STATE64) || (x == x86_FLOAT_STATE64) || (x == x86_EXCEPTION_STATE64) || (x == x86_DEBUG_STATE64) || (x == x86_THREAD_STATE) || (x == x86_FLOAT_STATE) || (x == x86_EXCEPTION_STATE) || (x == x86_DEBUG_STATE) || (x == x86_AVX_STATE32) || (x == x86_AVX_STATE64) || (x == x86_AVX_STATE) || (x == x86_AVX512_STATE32) || (x == x86_AVX512_STATE64) || (x == x86_AVX512_STATE) || (x == x86_PAGEIN_STATE) || (x == x86_INSTRUCTION_STATE) || (x == x86_LAST_BRANCH_STATE) || (x == THREAD_STATE_NONE))
#define __UINT32_TYPE__ unsigned int
#define MACH_SEND_INVALID_DATA 0x10000002
#define THREAD_STATE_FLAVOR_LIST_10_15 131
#define MAX_FATAL_kGUARD_EXC_CODE (1u << 7)
#define EFL_NT 0x00004000
#define CPU_SUBTYPE_ARM_V6 ((cpu_subtype_t) 6)
#define CPU_SUBTYPE_ARM_V7 ((cpu_subtype_t) 9)
#define CPU_SUBTYPE_ARM_V8 ((cpu_subtype_t) 13)
#define TRUE 1
#define LIST_HEAD(name,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct name { struct type *lh_first; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define CPUSUBFAMILY_ARM_M 3
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_1(x) 
#define VM_SYNC_KILLPAGES ((vm_sync_t) 0x08)
#define __ReplyUnion__thread_act_subsystem__defined 
#define _POSIX_THREAD_KEYS_MAX 128
#define CLOCK_GET_TIME_RES 1
#define __API_AVAILABLE_BEGIN_GET_MACRO(...) 
#define THR_ACT_NULL ((thread_act_t) 0)
#define QMD_TRACE_HEAD(head) 
#define EFL_OF 0x00000800
#define err_ipc_compat err_system(0x3f)
#define _U_CHAR 
#define MPG_FLAGS_STRICT_REPLY_MISMATCHED_PERSONA (0x10ull << 56)
#define KERN_KDCPUMAP 24
#define _MACH_ERROR_H_ 
#define COMAPT_MAXLOGNAME 12
#define IPC_SPACE_NULL ((ipc_space_t) 0)
#define NOTE_FORK 0x40000000
#define MPO_DENAP_RECEIVER 0x40
#define MAXCOMLEN 16
#define MEMORY_OBJECT_COPY_SYNC 0x8
#define GID_MAX 2147483647U
#define EFL_IOPL_USER 0x00003000
#define __FLT_RADIX__ 2
#define PROC_FLAG_IMPORTANCE_DONOR 0x400000
#define EFL_PF 0x00000004
#define _STRUCT_FP_CONTROL struct __darwin_fp_control
#define __INT_LEAST16_TYPE__ short int
#define _lock_set_user_ 
#define __RequestUnion__host_security_subsystem__defined 
#define TASK_FLAVOR_CONTROL 0
#define KERN_DATA_SELECTOR 0x0010
#define __LDBL_EPSILON__ 1.08420217248550443400745280086994171e-19L
#define AQ_MAXBUFSZ 1048576
#define INTPTR_MAX 9223372036854775807L
#define HW_NCPU 3
#define __UINTMAX_C(c) c ## UL
#define __Request__host_security_subsystem__defined 
#define MACH_MSG_DESCRIPTOR_NULL (mach_msg_descriptor_t *) 0
#define KMOD_RETURN_SUCCESS KERN_SUCCESS
#define static_assert _Static_assert
#define FPE_INTOVF 8
#define MEMORY_OBJECT_NULL ((memory_object_t) 0)
#define CLSIZELOG2 0
#define KERN_INVALID_KC 55
#define EXC_I386_EXTOVRFLT 9
#define KERN_MEMORY_RESTART_COPY 25
#define WMESGLEN 7
#define PTHREAD_STACK_MIN 8192
#define __SSE_MATH__ 1
#define __DARWIN_FD_SET(n,p) __darwin_fd_set((n), (p))
#define VM_PAGE_QUERY_PAGE_CS_NX 0x400
#define _U_INT32_T 
#define IPC_VOUCHER_ATTR_MANAGER_NULL ((ipc_voucher_attr_manager_t) 0)
#define EFL_RF 0x00010000
#define A_OLDGETCOND 20
#define _POSIX_THREAD_DESTRUCTOR_ITERATIONS 4
#define SIGCONT 19
#define __k8 1
#define P_TIMEOUT 0x00000400
#define CLOCK_MONOTONIC_RAW_APPROX _CLOCK_MONOTONIC_RAW_APPROX
#define KERN_UREFS_OVERFLOW 19
#define __FLT32X_MIN__ 2.22507385850720138309023271733240406e-308F32x
#define TASK_DYLD_INFO 17
#define __ReplyUnion__lock_set_subsystem__defined 
#define KIPC_MAX_LINKHDR 4
#define MEMORY_OBJECT_COPY_DELAY 2
#define KERN_INVALID_ADDRESS 1
#define TAILQ_NEXT(elm,field) ((elm)->field.tqe_next)
#define EFL_SF 0x00000080
#define __SIG_ATOMIC_MAX__ 0x7fffffff
#define __API_TO_BE_DEPRECATED 100000
#define host_set_atm_notification_port(host,port) (host_set_special_port((host), HOST_ATM_NOTIFICATION_PORT, (port)))
#define CLOFSET (CLSIZE*NBPG-1)
#define HOST_VM_INFO 2
#define _UID_T 
#define _SYS_PROC_H_ 
#define TAILQ_LAST(head,headname) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH (*(((struct headname *)((head)->tqh_last))->tqh_last)) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define host_set_container_port(host,port) (host_set_special_port((host), HOST_CONTAINERD_PORT, (port)))
#define MIG_SERVER_ROUTINE 
#define VM_MEMORY_APPLICATION_SPECIFIC_16 255
#define VM_MEMORY_ASL 81
#define _POSIX_MQ_OPEN_MAX 8
#define MACH_SEND_INVALID_VOUCHER 0x10000005
#define INT_LEAST64_MAX INT64_MAX
#define __WATCHOS_3_1_1 30101
#define x86_THREAD_STATE 7
#define TAILQ_CHECK_PREV(elm,field) 
#define TASK_BOOTSTRAP_PORT 4
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define _I386__PARAM_H_ 
#define task_set_task_access_port(task,port) (task_set_special_port((task), TASK_ACCESS_PORT, (port)))
#define HOST_PRIORITY_INFO_COUNT ((mach_msg_type_number_t) (sizeof(host_priority_info_data_t)/sizeof(integer_t)))
#define VM_REGION_BASIC_INFO_64 9
#define CPUFAMILY_INTEL_HASWELL 0x10b282dc
#define MACH_VOUCHER_SELECTOR_EFFECTIVE ((mach_voucher_selector_t)1)
#define MAP_MEM_POSTED_REORDERED 8
#define VM_MEMORY_ATS 50
#define CPU_SUBTYPE_MIPS_R2000a ((cpu_subtype_t) 4)
#define UCHAR_MAX (SCHAR_MAX * 2 + 1)
#define CPU_SUBTYPE_ARM_V7F ((cpu_subtype_t) 10)
#define use(...) __use(0, ##__VA_ARGS__)
#define __SIZEOF_PTRDIFF_T__ 8
#define CPU_TYPE_ARM ((cpu_type_t) 12)
#define __IPHONE_4_0 40000
#define __IPHONE_4_1 40100
#define __IPHONE_4_2 40200
#define __IPHONE_4_3 40300
#define _PTHREAD_ONCE_T 
#define CLBYTES (CLSIZE*NBPG)
#define __ReplyUnion__clock_priv_subsystem__defined 
#define _MACH_I386_RPC_H_ 
#define OSWriteBigInt(x,y,z) OSWriteBigInt32(x, y, z)
#define CLD_KILLED 2
#define EFL_VM 0x00020000
#define __Request__lock_set_subsystem__defined 
#define VM_VOLATILE_GROUP_DEFAULT VM_VOLATILE_GROUP_0
#define _ID_T 
#define EXC_I386_EMERR 6
#define VM_REGION_SUBMAP_INFO_V2_COUNT_64 ((mach_msg_type_number_t) (VM_REGION_SUBMAP_INFO_V2_SIZE / sizeof (natural_t)))
#define __MISMATCH_TAGS_POP 
#define TASK_POLICY_STATE 4
#define HOST_VM_INFO_REV2_COUNT HOST_VM_INFO_LATEST_COUNT
#define NOFILE 256
#define MPG_FLAGS_STRICT_REPLY_INVALID_REPLY_PORT (0x02ull << 56)
#define KERN_LOW_PRI_DELAY 57
#define SIGSTOP 17
#define VM_MEMORY_MALLOC_LARGE 3
#define CPU_TYPE_ANY ((cpu_type_t) -1)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_4(x) x
#define NOTE_FFCOPY 0xc0000000
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_5(x) x
#define __DARWIN_64_BIT_INO_T 1
#define __TVOS_14_0 140000
#define _MACH_H_ 
#define LATENCY_QOS_LAUNCH_DEFAULT_TIER LATENCY_QOS_TIER_3
#define MACH_RCV_TRAILER_SENDER 2
#define CTL_NET 4
#define __TVOS_14_2 140200
#define INTPTR_MIN (-INTPTR_MAX-1)
#define KERN_ARGMAX 8
#define INT8_C(v) (v)
#define FP_CHOP 3
#define SLIST_FOREACH_PREVPTR(var,varp,head,field) for ((varp) = &SLIST_FIRST((head)); ((var) = *(varp)) != NULL; (varp) = &SLIST_NEXT((var), field))
#define MACH_MSGH_BITS_HAS_LOCAL(bits) (MACH_MSGH_BITS_LOCAL(bits) != MACH_MSGH_BITS_ZERO)
#define A_OLDSETPOLICY 3
#define EXC_MASK_GUARD (1 << EXC_GUARD)
#define NOTE_RENAME 0x00000020
#define THREAD_TIME_CONSTRAINT_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (thread_time_constraint_policy_data_t) / sizeof (integer_t)))
#define MAXTHREADNAMESIZE 64
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_3(x) 
#define OSWriteLittleInt16(base,byteOffset,data) _OSWriteInt16(base, byteOffset, data)
#define OID_AUTO_START 100
#define HW_PHYSMEM 5
#define _GCC_LIMITS_H_ 
#define __LDBL_DIG__ 18
#define _POSIX2_BC_SCALE_MAX 99
#define NULL __DARWIN_NULL
#define SIGILL 4
#define _str(x) #x
#define task_get_host_port(task,port) (task_get_special_port((task), TASK_HOST_PORT, (port)))
#define __nullable 
#define __FLT64_IS_IEC_60559__ 2
#define ZOP_FREE 0
#define __x86_64__ 1
#define OSSwapHostToLittleInt32(x) ((uint32_t)(x))
#define _POSIX2_COLL_WEIGHTS_MAX 2
#define EFL_ZF 0x00000040
#define __FLT32X_MIN_EXP__ (-1021)
#define MAC_OS_VERSION_11_0 110000
#define TH_FLAGS_IDLE 0x2
#define UINT_FAST32_MAX UINT32_MAX
#define MACH_MSG_TIMEOUT_NONE ((mach_msg_timeout_t) 0)
#define AUDIT_WINDATA 0x0020
#define _USE_FORTIFY_LEVEL 2
#define CPU_SUBTYPE_VAX8500 ((cpu_subtype_t) 8)
#define MINSIGSTKSZ 32768
#define _MACH_MACHINE_EXCEPTION_H_ 
#define VM_FLAGS_RANDOM_ADDR 0x0008
#define x86_AVX512_STATE64 (x86_AVX512_STATE32 + 1)
#define _MACH_MESSAGE_H_ 
#define __INT_FAST16_MAX__ 0x7fff
#define HOST_VM_INFO_REV0_COUNT ((mach_msg_type_number_t) (HOST_VM_INFO_REV1_COUNT - 2))
#define VM_BEHAVIOR_DEFAULT ((vm_behavior_t) 0)
#define AUDITDEV_FILENAME "audit"
#define __PTHREAD_SIZE__ 8176
#define INT_MAX __INT_MAX__
#define __deprecated __attribute__((__deprecated__))
#define i386_FLOAT_STATE 2
#define ULLONG_MAX (LLONG_MAX * 2ULL + 1ULL)
#define P_INMEM 0
#define OID_AUTO (-1)
#define INT_LEAST64_MIN INT64_MIN
#define NOTE_EXIT_REPARENTED ((unsigned int)eNoteExitReparentedDeprecated)
#define major(x) ((int32_t)(((u_int32_t)(x) >> 24) & 0xff))
#define PAGE_SHIFT vm_page_shift
#define MACH_MSG_TYPE_PORT_NAME 15
#define CPU_SUBTYPE_486SX CPU_SUBTYPE_INTEL(4, 8)
#define DEV_BSHIFT 9
#define P_SELECT 0x00000040
#define CPU_SUBTYPE_ARM_V5TEJ ((cpu_subtype_t) 7)
#define __FLT64_DIG__ 15
#define CPU_SUBTYPE_I386_ALL CPU_SUBTYPE_INTEL(3, 0)
#define MAP_MEM_FLAGS_USER ( MAP_MEM_PURGABLE_KERNEL_ONLY | MAP_MEM_GRAB_SECLUDED | MAP_MEM_ONLY | MAP_MEM_NAMED_CREATE | MAP_MEM_PURGABLE | MAP_MEM_NAMED_REUSE | MAP_MEM_USE_DATA_ADDR | MAP_MEM_VM_COPY | MAP_MEM_VM_SHARE | MAP_MEM_LEDGER_TAGGED | MAP_MEM_4K_DATA_ADDR)
#define PTHREAD_DESTRUCTOR_ITERATIONS 4
#define MACH_MSG_TYPE_LAST 22
#define _POSIX2_LINE_MAX 2048
#define __UINT_FAST32_MAX__ 0xffffffffU
#define MAC_OS_X_VERSION_10_11 101100
#define MAC_OS_X_VERSION_10_12 101200
#define MAC_OS_X_VERSION_10_13 101300
#define MAC_OS_X_VERSION_10_14 101400
#define MAC_OS_X_VERSION_10_16 101600
#define __UINT_LEAST64_TYPE__ long long unsigned int
#define __SYS_APPLEAPIOPTS_H__ 
#define err_get_code(err) ((err)&0x3fff)
#define VM_SYNC_INVALIDATE ((vm_sync_t) 0x04)
#define TASK_POWER_INFO_COUNT ((mach_msg_type_number_t) (sizeof (task_power_info_data_t) / sizeof (natural_t)))
#define MACH_SEND_INVALID_TRAILER 0x10000011
#define CPU_SUBTYPE_MIPS_R3000a ((cpu_subtype_t) 6)
#define _MACH_MACHINE_KERN_RETURN_H_ 
#define CLOFF CLOFSET
#define __API_DEPRECATED_WITH_REPLACEMENT_END 
#define TH_FLAGS_GLOBAL_FORCED_IDLE 0x4
#define FP_RND_UP 2
#define VM_USRSTACK32 ((vm_offset_t) 0xC0000000)
#define _MACH_INTERFACE_H_ 
#define THREAD_STATE_FLAVOR_LIST_NEW 128
#define __FLT_HAS_QUIET_NAN__ 1
#define UINTMAX_MAX UINTMAX_C(18446744073709551615)
#define _STDINT_H_ 
#define KERN_MEMORY_DATA_MOVED 24
#define INT32_C(v) (v)
#define __FLT_MAX_10_EXP__ 38
#define _POSIX_DELAYTIMER_MAX 32
#define A_SETPMASK 25
#define A_GETSINFO_ADDR 32
#define KERN_INVALID_CAPABILITY 20
#define IPC_EVENTLINK_NULL ((ipc_eventlink_t) 0)
#define MACH_PORT_GEN(name) (((name) & 0xff) << 24)
#define A_GETPOLICY 33
#define VM_FLAGS_SUPERPAGE_SIZE_2MB (SUPERPAGE_SIZE_2MB<<VM_FLAGS_SUPERPAGE_SHIFT)
#define __LONG_MAX__ 0x7fffffffffffffffL
#define __IOS_EXTENSION_UNAVAILABLE(_msg) 
#define __FLT64X_HAS_DENORM__ 1
#define __dead2 __attribute__((__noreturn__))
#define KERN_COREFILE 50
#define CPUSUBFAMILY_UNKNOWN 0
#define EXC_I386_BPTFLT 3
#define CPUSUBFAMILY_ARM_HP 1
#define CPU_TYPE_SPARC ((cpu_type_t) 14)
#define __FLT_HAS_INFINITY__ 1
#define __GNUC_EXECUTION_CHARSET_NAME "UTF-8"
#define __DARWIN_EXTSN_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_EXTSN __DARWIN_SUF_NON_CANCELABLE)
#define PROCESSOR_SET_BASIC_INFO 5
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
#define MACH_RCV_OVERWRITE 0x00000000
#define MACH_NOTIFY_SEND_POSSIBLE (MACH_NOTIFY_FIRST + 002)
#define RPC_SIGBUF_SIZE 8
#define MEMORY_OBJECT_COPY_NONE 0
#define MEMORY_OBJECT_RETURN_ANYTHING 3
#define _I386_LIMITS_H_ 
#define NOTE_REVOKE 0x00000040
#define CIRCLEQ_HEAD(name,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct name { struct type *cqh_first; struct type *cqh_last; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define TAILQ_SWAP(head1,head2,type,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH do { struct type *swap_first = (head1)->tqh_first; struct type **swap_last = (head1)->tqh_last; (head1)->tqh_first = (head2)->tqh_first; (head1)->tqh_last = (head2)->tqh_last; (head2)->tqh_first = swap_first; (head2)->tqh_last = swap_last; if ((swap_first = (head1)->tqh_first) != NULL) swap_first->field.tqe_prev = &(head1)->tqh_first; else (head1)->tqh_last = &(head1)->tqh_first; if ((swap_first = (head2)->tqh_first) != NULL) swap_first->field.tqe_prev = &(head2)->tqh_first; else (head2)->tqh_last = &(head2)->tqh_first; } while (0) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define MACH_MSG_TYPE_MOVE_SEND_ONCE 18
#define SIGXFSZ 25
#define P_FORCEQUOTA 0x20000000
#define MPG_FLAGS_NONE (0x00ull)
#define CPUFAMILY_ARM_15 0xa8511bca
#define MACH_VOUCHER_ATTR_KEY_BANK ((mach_voucher_attr_key_t)3)
#define __kpi_deprecated(_msg) 
#define _processor_set_user_ 
#define __UINT_FAST16_TYPE__ short unsigned int
#define MACH_SEND_TOO_LARGE 0x1000000e
#define VM_MEMORY_OPENCL 67
#define MACH_MSG_SUCCESS 0x00000000
#define MACH_VOUCHER_ATTR_SEND_PREPROCESS ((mach_voucher_attr_recipe_command_t)5)
#define VM_PURGABLE_NO_AGING_MASK (0x1 << VM_PURGABLE_NO_AGING_SHIFT)
#define __INT_FAST32_WIDTH__ 32
#define TASK_ABSOLUTETIME_INFO_COUNT ((mach_msg_type_number_t) (sizeof (task_absolutetime_info_data_t) / sizeof (natural_t)))
#define __IPHONE_12_0 120000
#define __IPHONE_12_1 120100
#define __IPHONE_12_2 120200
#define __IPHONE_12_3 120300
#define __IPHONE_12_4 120400
#define _POSIX2_CHARCLASS_NAME_MAX 14
#define dtoc(x) ((x)>>(PGSHIFT-DEV_BSHIFT))
#define __CHAR16_TYPE__ short unsigned int
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_3(x) 
#define __PRAGMA_REDEFINE_EXTNAME 1
#define p_forw p_un.p_st1.__p_forw
#define PROCESSOR_TEMPERATURE 0x10000002
#define BIG_ENDIAN __DARWIN_BIG_ENDIAN
#define FPC_DE 0x0002
#define _MACH_VM_PURGABLE_H_ 
#define EXPR_NEST_MAX 32
#define __no_instrument_msan 
#define bool _Bool
#define __SIZE_WIDTH__ 64
#define POLL_OUT 2
#define __WATCHOS_7_0 70000
#define __WATCHOS_7_1 70100
#define __WATCHOS_7_4 70400
#define KERN_INVALID_VALUE 18
#define EXC_MASK_MACH_SYSCALL (1 << EXC_MACH_SYSCALL)
#define KERN_PROCNAME 62
#define __SEG_FS 1
#define CTL_MAXID 9
#define __INT_LEAST16_MAX__ 0x7fff
#define INT_MIN (-INT_MAX - 1)
#define MACH_SEND_SYNC_OVERRIDE 0x00100000
#define CPU_SUBTYPE_MC88110 ((cpu_subtype_t) 2)
#define KERN_INVALID_TASK 16
#define _STRUCT_FP_STATUS struct __darwin_fp_status
#define __OSX_AVAILABLE_BUT_DEPRECATED(_osxIntro,_osxDep,_iosIntro,_iosDep) 
#define TASK_READ_NULL ((task_read_t) 0)
#define EXC_I386_NOEXTFLT 7
#define round_page(x) trunc_page((x) + (vm_page_size - 1))
#define KERNEL_BOOT_INFO_MAX (4096)
#define FD_COPY(f,t) __DARWIN_FD_COPY(f, t)
#define __INT64_MAX__ 0x7fffffffffffffffLL
#define CPU_SUBTYPE_HPPA_7100LC ((cpu_subtype_t) 1)
#define MEMORY_OBJECT_BEHAVE_INFO_COUNT ((mach_msg_type_number_t) (sizeof(memory_object_behave_info_data_t)/sizeof(int)))
#define STAILQ_FOREACH_SAFE(var,head,field,tvar) for ((var) = STAILQ_FIRST((head)); (var) && ((tvar) = STAILQ_NEXT((var), field), 1); (var) = (tvar))
#define CPU_SUBTYPE_MIPS_R2600 ((cpu_subtype_t) 2)
#define __SEG_GS 1
#define __FLT32_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F32
#define EV_FLAG0 0x1000
#define KERN_RPC_TERMINATE_ORPHAN 44
#define OSSwapInt16(x) __DARWIN_OSSwapInt16(x)
#define VM_INHERIT_LAST_VALID VM_INHERIT_NONE
#define P_EXEC 0x00004000
#define _POSIX_AIO_LISTIO_MAX 2
#define __SIG_ATOMIC_WIDTH__ 32
#define P_DIRTY_MARKED 0x00000080
#define CPU_SUBTYPE_POWERPC_603ev ((cpu_subtype_t) 5)
#define _POSIX_MAX_INPUT 255
#define __DARWIN_ALIAS(sym) __asm("_" __STRING(sym) __DARWIN_SUF_UNIX03)
#define KERN_HOSTNAME 10
#define EXC_I386_EXTERRFLT 16
#define __MISMATCH_TAGS_PUSH 
#define _STRUCT_X86_DEBUG_STATE32 struct __darwin_x86_debug_state32
#define x86_THREAD_STATE32 1
#define __INT_LEAST64_TYPE__ long long int
#define MACH_MSG_OOL_VOLATILE_DESCRIPTOR 3
#define MACH_VOUCHER_ATTR_USER_DATA_STORE ((mach_voucher_attr_recipe_command_t)211)
#define __APPLE_API_OBSOLETE 
#define _BSM_AUDIT_H 
#define MAXPRI 127
#define __INT16_TYPE__ short int
#define __INT_LEAST8_TYPE__ signed char
#define EFL_USER_SET (EFL_IF)
#define __RequestUnion__processor_subsystem__defined 
#define __MACH30__ 
#define OSSwapConstInt16(x) __DARWIN_OSSwapConstInt16(x)
#define MACH_VM_MIN_ADDRESS ((mach_vm_offset_t) 0)
#define VM_MEMORY_STACK 30
#define SYSTEM_CLOCK 0
#define __darwin_obsz0(object) __builtin_object_size (object, 0)
#define VM_MEMORY_ROSETTA_USER_LDT 235
#define KERN_INVALID_LEDGER 33
#define __STDC_VERSION__ 201710L
#define A_SETSFLAGS 40
#define VM_MEMORY_OBJC_DISPATCHERS 34
#define MAXLOGNAME 255
#define __SIZEOF_INT__ 4
#define HOST_DEBUG_INFO_INTERNAL 10
#define PROCESSOR_NULL ((processor_t) 0)
#define MPG_FLAGS_STRICT_REPLY_INVALID_VOUCHER (0x04ull << 56)
#define _MACHTYPES_H_ 
#define _MACH_KMOD_H_ 
#define KERN_FAILURE 5
#define VM_MEMORY_GLSL 66
#define POLICY_FIFO_INFO_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_fifo_info)/sizeof(integer_t)))
#define __va_copy(d,s) __builtin_va_copy(d,s)
#define __INT_FAST8_MAX__ 0x7f
#define host_get_coalition_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_COALITION_PORT, (port)))
#define UINTMAX_C(v) (v ## UL)
#define clbase(i) (i)
#define CPU_SUBTYPE_VAX730 ((cpu_subtype_t) 4)
#define NOTE_LINK 0x00000010
#define __FLT128_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define __INTPTR_MAX__ 0x7fffffffffffffffL
#define KERN_MEMORY_FAILURE 9
#define MACH_SEND_MSG 0x00000001
#define KERN_FILE 15
#define KERN_KDDFLAGS 2
#define host_get_launchctl_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_LAUNCHCTL_PORT, (port)))
#define EXC_I386_SSEEXTERR 8
#define VOUCHER_MACH_MSG_API_VERSION 20140205
#define SLIST_INSERT_HEAD(head,elm,field) do { SLIST_NEXT((elm), field) = SLIST_FIRST((head)); SLIST_FIRST((head)) = (elm); } while (0)
#define _STRUCT_X86_DEBUG_STATE64 struct __darwin_x86_debug_state64
#define host_get_host_priv_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_PRIV_PORT, (port)))
#define MEMORY_OBJECT_DATA_FLUSH_ALL 0x40
#define CPU_SUBTYPE_LITTLE_ENDIAN ((cpu_subtype_t) 0)
#define KERN_INVALID_POLICY 28
#define KIPC_MAX_HDR 6
#define _OS_OSBYTEORDERI386_H 
#define _POSIX_TRACE_SYS_MAX 8
#define AUDIT_TRIGGER_NO_SPACE 5
#define SIGSYS 12
#define X86_INSTRUCTION_STATE_COUNT x86_INSTRUCTION_STATE_COUNT
#define EV_SET64(kevp,a,b,c,d,e,f,g,h) do { struct kevent64_s *__kevp__ = (kevp); __kevp__->ident = (a); __kevp__->filter = (b); __kevp__->flags = (c); __kevp__->fflags = (d); __kevp__->data = (e); __kevp__->udata = (f); __kevp__->ext[0] = (g); __kevp__->ext[1] = (h); } while(0)
#define _STDBOOL_H 
#define FPC_DM FPC_DE
#define _SUSECONDS_T 
#define CIRCLEQ_INIT(head) do { (head)->cqh_first = (void *)(head); (head)->cqh_last = (void *)(head); } while (0)
#define MACH_PORT_SRIGHTS_NONE 0
#define __TVOS_13_0 130000
#define __TVOS_13_2 130200
#define __TVOS_13_3 130300
#define __TVOS_13_4 130400
#define SLIST_ENTRY(type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct { struct type *sle_next; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define THREAD_STATE_FLAVOR_LIST_10_13 130
#define SA_NOCLDSTOP 0x0008
#define _SYS__SELECT_H_ 
#define CLOCK_MONOTONIC _CLOCK_MONOTONIC
#define __swift_compiler_version_at_least(...) 1
#define MACH_MSGH_BITS_RAISEIMP 0x20000000U
#define HOST_LOAD_INFO 1
#define MACH_VOUCHER_NULL ((mach_voucher_t) 0)
#define __DARWIN_LITTLE_ENDIAN 1234
#define _I386_PARAM_H_ 
#define TASK_VM_INFO 22
#define OSSwapInt64(x) __DARWIN_OSSwapInt64(x)
#define __FLT64_HAS_QUIET_NAN__ 1
#define __SWIFT_UNAVAILABLE 
#define EXC_RESOURCE 11
#define THREAD_SCHED_TIMESHARE_INFO 10
#define __TVOS_UNAVAILABLE 
#define CIRCLEQ_CHECK_PREV(head,elm,field) 
#define KERN_RETURN_MAX 0x100
#define host_get_audit_control_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_AUDIT_CONTROL_PORT, (port)))
#define MACH_MSG_TYPE_PORT_SEND MACH_MSG_TYPE_MOVE_SEND
#define _POSIX_NGROUPS_MAX 8
#define __LITTLE_ENDIAN__ 1
#define KERN_OSREV 3
#define subsystem_to_name_map_lock_set { "lock_acquire", 617000 }, { "lock_release", 617001 }, { "lock_try", 617002 }, { "lock_make_stable", 617003 }, { "lock_handoff", 617004 }, { "lock_handoff_accept", 617005 }
#define MACH_IPC_FLAVOR UNTYPED
#define MACH_MSG_TYPE_PORT_ANY_SEND(x) (((x) >= MACH_MSG_TYPE_MOVE_SEND) && ((x) <= MACH_MSG_TYPE_MAKE_SEND_ONCE))
#define TASK_EXC_GUARD_MP_CORPSE 0x40
#define KERN_KDSET_TYPEFILTER 22
#define TASK_SUPPRESSION_POLICY 3
#define __DARWIN_WCHAR_MAX __WCHAR_MAX__
#define _MACH_MACHINE_THREAD_STATE_H_ 
#define TASK_BASIC_INFO_64 5
#define BASEPRI(x) (((x) & (255 << 8)) == 0)
#define HW_TB_FREQ 23
#define X86_DEBUG_STATE32_COUNT x86_DEBUG_STATE32_COUNT
#define VM_MEMORY_WEBASSEMBLY VM_MEMORY_JAVASCRIPT_CORE
#define EXC_SOFTWARE 5
#define _SYS_SELECT_H_ 
#define PRIBIO 16
#define noreturn _Noreturn
#define _MACH_HOST_SPECIAL_PORTS_H_ 
#define _BSD_MACHINE_ENDIAN_H_ 
#define __FLT32_MIN_10_EXP__ (-37)
#define _XOPEN_IOV_MAX 16
#define VM_LIB64_SHR_TEXT ((user_addr_t) 0x00007FFF80000000ULL)
#define ___POSIX_C_DEPRECATED_STARTING_199209L 
#define MACH_SEND_INVALID_MEMORY 0x1000000c
#define MACH_RCV_TIMEOUT 0x00000100
#define EVFILT_READ (-1)
#define KERN_OPENEVT_PROC 1
#define __FLT32X_DIG__ 15
#define HOST_PREFERRED_USER_ARCH 12
#define CPU_SUBTYPE_VAX785 ((cpu_subtype_t) 2)
#define NTOHL(x) (x) = ntohl((__uint32_t)x)
#define SM_SHARED 4
#define VM_MEMORY_OS_ALLOC_ONCE 73
#define OSReadBigInt(x,y) OSReadBigInt32(x, y)
#define __WORDSIZE 64
#define HW_AVAILCPU 25
#define MEMORY_OBJECT_RETURN_NONE 0
#define TASK_AUDIT_TOKEN_COUNT (sizeof(audit_token_t) / sizeof(natural_t))
#define KERN_ABORTED 14
#define __IPHONE_8_0 80000
#define __IPHONE_8_1 80100
#define __PTRDIFF_WIDTH__ 64
#define __IPHONE_8_3 80300
#define __IPHONE_8_4 80400
#define INT64_MIN (-INT64_MAX-1)
#define TASK_KERNELMEMORY_INFO_COUNT ((mach_msg_type_number_t) (sizeof (task_kernelmemory_info_data_t) / sizeof (natural_t)))
#define __BEGIN_DECLS 
#define __LDBL_MANT_DIG__ 64
#define HOST_MAX_SPECIAL_KERNEL_PORT 7
#define VM_PROT_STRIP_READ ((vm_prot_t) 0x80)
#define USER_POSIX2_SW_DEV 17
#define __PTHREAD_ATTR_SIZE__ 56
#define _POSIX_LINK_MAX 8
#define FPC_IE 0x0001
#define THREAD_INSPECT_NULL ((thread_inspect_t) 0)
#define __exported_push _Pragma("GCC visibility push(default)")
#define __CONSTANT_CFSTRINGS__ 1
#define EXC_TYPES_COUNT 14
#define ntohl(x) __DARWIN_OSSwapInt32(x)
#define MACH_PORT_QLIMIT_DEFAULT MACH_PORT_QLIMIT_BASIC
#define CPUFAMILY_ARM_FIRESTORM_ICESTORM 0x1b588bb3
#define __DARWIN_ONLY_64_BIT_INO_T 0
#define __FLT64_HAS_INFINITY__ 1
#define MEMORY_OBJECT_RETURN_ALL 2
#define __FLT64X_MAX__ 1.18973149535723176502126385303097021e+4932F64x
#define host_get_closured_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_CLOSURED_PORT, (port)))
#define _MACH_MEMORY_OBJECT_TYPES_H_ 
#define MACH_MSG_GUARD_FLAGS_UNGUARDED_ON_SEND 0x0002
#define false 0
#define MACH_MSGH_BITS_VOUCHER(bits) (((bits) & MACH_MSGH_BITS_VOUCHER_MASK) >> 16)
#define ntohs(x) __DARWIN_OSSwapInt16(x)
#define MACH_MSG_TYPE_COPY_RECEIVE 22
#define VM_INHERIT_NONE ((vm_inherit_t) 2)
#define MACH_PORT_QLIMIT_BASIC (5)
#define VM_MEMORY_MALLOC_LARGE_REUSED 9
#define __RequestUnion__vm_map_subsystem__defined 
#define KERN_PROC_TTY 4
#define __DARWIN_OSSwapInt16(x) ((__uint16_t)(__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt16(x) : _OSSwapInt16(x)))
#define _POSIX_OPEN_MAX 20
#define HOST_RESOURCE_SIZES_COUNT ((mach_msg_type_number_t) (sizeof(kernel_resource_sizes_data_t)/sizeof(integer_t)))
#define __GNUC_VA_LIST 
#define THREAD_EXTENDED_INFO 5
#define MAP_MEM_VM_SHARE 0x400000
#define MACH_RCV_TOO_LARGE 0x10004004
#define VM_PROT_EXECUTE ((vm_prot_t) 0x04)
#define LIST_ENTRY(type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct { struct type *le_next; struct type **le_prev; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define MACH_PORT_TYPE_PORT_SET MACH_PORT_TYPE(MACH_PORT_RIGHT_PORT_SET)
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#define __code_model_small__ 1
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_3(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_4(x) x
#define _STRUCT_X86_PAGEIN_STATE struct __x86_pagein_state
#define __OSX_EXTENSION_UNAVAILABLE(_msg) 
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define x86_AVX_STATE32 16
#define MAC_OS_X_VERSION_10_12_2 101202
#define assert(e) (__builtin_expect(!(e), 0) ? __assert_rtn(__func__, __FILE__, __LINE__, #e) : (void)0)
#define MEMORY_OBJECT_TERMINATE_IDLE 0x1
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_5(x) 
#define CTL_VFS_NAMES { { "vfsconf", CTLTYPE_STRUCT } }
#define SM_LARGE_PAGE 8
#define CLD_EXITED 1
#define __strncpy_safe __attribute__((nonstring))
#define EXC_I386_DIVERR 0
#define __DARWIN_WCHAR_MIN (-0x7fffffff - 1)
#define __DARWIN_OSSwapInt32(x) (__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt32(x) : _OSSwapInt32(x))
#define x86_FLOAT_STATE_COUNT ((mach_msg_type_number_t) (sizeof(x86_float_state_t)/sizeof(unsigned int)))
#define KIPC_MAX_PROTOHDR 5
#define NOTE_TRACK 0x00000001
#define __k8__ 1
#define __INTPTR_TYPE__ long int
#define __UINT16_TYPE__ short unsigned int
#define __WCHAR_TYPE__ int
#define host_get_syspolicyd_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_SYSPOLICYD_PORT, (port)))
#define sub_emask (err_sub(0xfff))
#define TASK_POWER_INFO 21
#define MACH_RCV_HEADER_ERROR 0x1000400b
#define host_get_container_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_CONTAINERD_PORT, (port)))
#define x86_LAST_BRANCH_STATE_COUNT ((mach_msg_type_number_t)(sizeof(last_branch_state_t) / sizeof(int)))
#define _SYS__PTHREAD_TYPES_H_ 
#define NOTE_EXITSTATUS 0x04000000
#define CLD_DUMPED 3
#define KERN_SPECULATIVE_READS 64
#define NBBY __DARWIN_NBBY
#define err_get_system(err) (((err)>>26)&0x3f)
#define FALSE 0
#define _STRUCT_TIMEVAL64 
#define __API_UNAVAILABLE_END 
#define CPU_SUBTYPE_VAX750 ((cpu_subtype_t) 3)
#define VM_MEMORY_CM_MEMORYPOOL 94
#define MAP_MEM_LEDGER_TAGGED 0x002000
#define P_LP64 0x00000004
#define NOTE_FFOR 0x80000000
#define _STRUCT_MCONTEXT_AVX32 struct __darwin_mcontext_avx32
#define EXC_I386_INTOFLT 4
#define KERN_LOW_PRI_WINDOW 56
#define __pic__ 2
#define CPU_SUBTYPE_UVAXI ((cpu_subtype_t) 5)
#define KERN_INVALID_OBJECT 29
#define MACH_MSGH_BITS_COMPLEX 0x80000000U
#define MAP_MEM_IO 2
#define VM_BEHAVIOR_ZERO_WIRED_PAGES ((vm_behavior_t) 7)
#define x86_AVX_STATE32_COUNT ((mach_msg_type_number_t) (sizeof(x86_avx_state32_t)/sizeof(unsigned int)))
#define __UINTPTR_MAX__ 0xffffffffffffffffUL
#define host_set_automountd_port(host,port) (host_set_special_port((host), HOST_AUTOMOUNTD_PORT, (port)))
#define SIGEV_SIGNAL 1
#define __INT_FAST64_WIDTH__ 64
#define __volatile volatile
#define VM_MEMORY_COREGRAPHICS_MISC VM_MEMORY_COREGRAPHICS
#define KERN_INVALID_ARGUMENT 4
#define FPC_OE 0x0008
#define VM_LEDGER_TAG_NONE 0x00000000
#define CPU_SUBTYPE_POWERPC_750 ((cpu_subtype_t) 9)
#define FPC_OM FPC_OE
#define _XOPEN_PATH_MAX 1024
#define HOST_SCHED_INFO 3
#define __STDC_WANT_LIB_EXT1__ 1
#define __API_DEPRECATED_WITH_REPLACEMENT(...) 
#define __DARWIN_OSSwapInt64(x) (__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt64(x) : _OSSwapInt64(x))
#define FP_RND_DOWN 1
#define PROCESSOR_CPU_LOAD_INFO_COUNT ((mach_msg_type_number_t) (sizeof(processor_cpu_load_info_data_t)/sizeof(natural_t)))
#define SI_ASYNCIO 0x10004
#define __MAC_10_12_1 101201
#define __MAC_10_12_2 101202
#define __MAC_10_12_4 101204
#define PROCESSOR_SET_INFO_MAX (1024)
#define MACH_MSGH_KIND_NOTIFICATION 0x00000001
#define KERN_RIGHT_EXISTS 21
#define FPC_PC 0x0300
#define FPC_PE 0x0020
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_3(x) 
#define VM_MEMORY_LAYERKIT 51
#define __INT_FAST64_MAX__ 0x7fffffffffffffffLL
#define PAGE_SIZE vm_page_size
#define KERN_MAXID 72
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define MAP_MEM_WCOMB 4
#define bitfield unsigned int
#define BC_BASE_MAX 99
#define MACH_RCV_INTERRUPTED 0x10004005
#define FSCALE (1<<FSHIFT)
#define __FLT_NORM_MAX__ 3.40282346638528859811704183484516925e+38F
#define HOST_FILECOORDINATIOND_PORT (23 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define __FLT32_HAS_INFINITY__ 1
#define OSSwapLittleToHostInt16(x) ((uint16_t)(x))
#define INT_FAST32_MAX INT32_MAX
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_2(x) 
#define __TVOS_DEPRECATED(_start,_dep,_msg) 
#define OSSwapHostToBigInt32(x) OSSwapInt32(x)
#define MACH_PORT_RECEIVE_STATUS 2
#define HOST_LOCAL_NODE -1
#define CTL_VFS 3
#define __FLT64X_MAX_EXP__ 16384
#define __UINT_FAST64_TYPE__ long long unsigned int
#define x86_AVX512_STATE32_COUNT ((mach_msg_type_number_t) (sizeof(x86_avx512_state32_t)/sizeof(unsigned int)))
#define VM_FLAGS_4GB_CHUNK 0x0004
#define MBIGCLSHIFT 12
#define MACH_MSG_PORT_DESCRIPTOR 0
#define MACH_ZONE_NAME_MAX_LEN 80
#define EXC_BAD_ACCESS 1
#define FPC_RC 0x0c00
#define KERN_DOMAINNAME KERN_NISDOMAINNAME
#define HW_L1ICACHESIZE 17
#define HOST_AUTOMOUNTD_PORT (4 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define MACH_CORE_FILEHEADER_NAMELEN 16
#define SS_DISABLE 0x0004
#define THREAD_SCHED_FIFO_INFO 12
#define thread_set_kernel_port(thread,port) (thread_set_special_port((thread), THREAD_KERNEL_PORT, (port)))
#define _STRUCT_MCONTEXT_AVX512_32 struct __darwin_mcontext_avx512_32
#define IS_ERR(ptr) ((uintptr_t) (ptr) > (uintptr_t) -0xfff)
#define VM_BEHAVIOR_RSEQNTL ((vm_behavior_t) 3)
#define MACH_MSG_GUARDED_PORT_DESCRIPTOR 4
#define VM_MEMORY_COREGRAPHICS_XALLOC 58
#define host_get_amfid_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_AMFID_PORT, (port)))
#define UINT_FAST8_MAX UINT8_MAX
#define VM_MEMORY_MALLOC_SMALL 2
#define __INT_MAX__ 0x7fffffff
#define KERN_INVALID_SECURITY 35
#define KERNEL_SECURITY_TOKEN_VALUE { {0, 1} }
#define _OFF_T 
#define VM_REGION_SUBMAP_INFO_V1_COUNT_64 ((mach_msg_type_number_t) (VM_REGION_SUBMAP_INFO_V1_SIZE / sizeof (natural_t)))
#define KERN_EXEC 45
#define __DARWIN_FD_ZERO(p) __builtin_bzero(p, sizeof(*(p)))
#define FPC_RC_RU 0x0800
#define PPNUM_MAX UINT32_MAX
#define UINT8_MAX 255
#define FP_387 3
#define THREAD_THROUGHPUT_QOS_POLICY 8
#define _UINT16_T 
#define MACH_CORE_FILEHEADER_SIGNATURE 0x0063614d20646152ULL
#define FPC_PC_64 0x0300
#define HOST_SECURITY_PORT 0
#define CPU_SUBTYPE_ARM64_32_V8 ((cpu_subtype_t) 1)
#define __API_DEPRECATED_REP_GET_MACRO(...) 
#define OSSwapHostToBigInt64(x) OSSwapInt64(x)
#define SCHAR_MIN (-SCHAR_MAX - 1)
#define CPU_SUBTYPE_MC98000_ALL ((cpu_subtype_t) 0)
#define _MACH_VM_PROT_H_ 
#define HOST_CAN_HAS_DEBUGGER_COUNT ((mach_msg_type_number_t) (sizeof(host_can_has_debugger_info_data_t)/sizeof(integer_t)))
#define MACH_RCV_SYNC_WAIT 0x00004000
#define LLONG_MAX __LONG_LONG_MAX__
#define MAXPHYSIO_WIRED (16 * 1024 * 1024)
#define LIST_INIT(head) do { LIST_FIRST((head)) = NULL; } while (0)
#define MACH_VOUCHER_ATTR_REMOVE ((mach_voucher_attr_recipe_command_t)2)
#define FIRST_EXCEPTION 1
#define CPUFAMILY_INTEL_COMETLAKE 0x1cf8a03e
#define VM_MEMORY_ACCOUNTS 98
#define CTLFLAG_ANYBODY 0x10000000
#define ___POSIX_C_DEPRECATED_STARTING_199506L 
#define VM_MEMORY_QUICKLOOK_THUMBNAILS 97
#define KIPC_SOMAXCONN 3
#define stpcpy(dest,...) __builtin___stpcpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define __INT64_TYPE__ long long int
#define MACH_VOUCHER_ATTR_KEY_PTHPRIORITY ((mach_voucher_attr_key_t)4)
#define VM_FLAGS_SUPERPAGE_SIZE_ANY (SUPERPAGE_SIZE_ANY << VM_FLAGS_SUPERPAGE_SHIFT)
#define __FLT_MAX_EXP__ 128
#define KERN_KDSETRTCDEC 15
#define SYSCTL_DEF_ENABLED 
#define VM_MEMORY_FOUNDATION 41
#define round_page_kernel(x) trunc_page_kernel((x) + vm_kernel_page_mask)
#define CPUFAMILY_INTEL_KABYLAKE 0x0f817246
#define MAP_MEM_FLAGS_ALL ( MAP_MEM_FLAGS_USER)
#define _PTHREAD_MUTEXATTR_T 
#define HOST_RESOURCE_SIZES 4
#define BSD4_3 1
#define KERN_USRSTACK64 59
#define __Request__host_priv_subsystem__defined 
#define UINT32_C(v) (v ## U)
#define __swift_unavailable(_msg) 
#define POLICY_FIFO_LIMIT_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_fifo_limit)/sizeof(integer_t)))
#define __ORDER_BIG_ENDIAN__ 4321
#define __header_inline extern __inline __attribute__((__gnu_inline__))
#define EVFILT_AIO (-3)
#define OSWriteBigInt16(base,byteOffset,data) OSWriteSwapInt16(base, byteOffset, data)
#define AU_IPv4 4
#define __DBL_MANT_DIG__ 53
#define EV_DISPATCH 0x0080
#define LEDGER_LIMIT_INFINITY ((ledger_amount_t)((1ULL << 63) - 1))
#define KERN_PROC_LCID 7
#define SET_MZI_COLLECTABLE_BYTES(val,size) (val) = ((val) & 1) | ((size) << 1)
#define __LASTBRANCH_MAX 32
#define __SIZEOF_FLOAT128__ 16
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffLL
#define _STRUCT_X86_EXCEPTION_STATE32 struct __darwin_i386_exception_state
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define _POSIX_SSIZE_MAX 32767
#define host_set_iocompressionstats_port(host,port) (host_set_special_port((host), HOST_IOCOMPRESSIONSTATS_PORT, (port)))
#define VM_LEDGER_TAG_DEFAULT 0x00000001
#define VM_PROT_NONE ((vm_prot_t) 0x00)
#define UINT_FAST64_MAX UINT64_MAX
#define KERN_SAFEBOOT 66
#define CTLFLAG_RW (CTLFLAG_RD|CTLFLAG_WR)
#define _POSIX_SEM_VALUE_MAX 32767
#define I386_PGSHIFT 12
#define MACH_RCV_MSG 0x00000002
#define host_set_gssd_port(host,port) (host_set_special_port((host), HOST_GSSD_PORT, (port)))
#define INT_FAST32_MIN INT32_MIN
#define __WINT_TYPE__ int
#define __UINT_LEAST32_TYPE__ unsigned int
#define OSSwapBigToHostConstInt64(x) OSSwapConstInt64(x)
#define MACH_PORT_VALID(name) (((name) != MACH_PORT_NULL) && ((name) != MACH_PORT_DEAD))
#define __SIZEOF_SHORT__ 2
#define __FLT32_NORM_MAX__ 3.40282346638528859811704183484516925e+38F32
#define __SSE__ 1
#define SI_USER 0x10001
#define HOST_UNFREED_PORT (10 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define NOTE_PCTRLMASK (~NOTE_PDATAMASK)
#define CPU_SUBTYPE_I860_860 ((cpu_subtype_t) 1)
#define SIGKILL 9
#define EXC_MASK_SOFTWARE (1 << EXC_SOFTWARE)
#define MACH_SEND_SYNC_USE_THRPRI MACH_SEND_PROPAGATE_QOS
#define MACH_VOUCHER_ATTR_KEY_NONE ((mach_voucher_attr_key_t)0)
#define P_DIRTY_DEFER 0x00000004
#define _STRUCT_X86_AVX512_STATE64 struct __darwin_x86_avx512_state64
#define __LDBL_MIN_EXP__ (-16381)
#define KERN_RPC_SERVER_TERMINATED 43
#define FPC_ZM FPC_ZE
#define _MACH_ERROR_ 1
#define zero_init(type) ((type[1]){}[0])
#define KERN_PROC 14
#define _VM_PAGE_SIZE_H_ 
#define CPU_TYPE_ARM64 (CPU_TYPE_ARM | CPU_ARCH_ABI64)
#define PASS_MAX 128
#define _KAUTH_CRED_T 
#define HOST_SEMAPHORE_TRAPS 7
#define EXC_MASK_ALL (EXC_MASK_BAD_ACCESS | EXC_MASK_BAD_INSTRUCTION | EXC_MASK_ARITHMETIC | EXC_MASK_EMULATION | EXC_MASK_SOFTWARE | EXC_MASK_BREAKPOINT | EXC_MASK_SYSCALL | EXC_MASK_MACH_SYSCALL | EXC_MASK_RPC_ALERT | EXC_MASK_RESOURCE | EXC_MASK_GUARD | EXC_MASK_MACHINE)
#define FPE_FLTINV 5
#define __FLT64_MAX__ 1.79769313486231570814527423731704357e+308F64
#define NOTE_LOWAT 0x00000001
#define REALTIME_CLOCK 0
#define VM_LEDGER_TAG_GRAPHICS 0x00000004
#define A_GETKAUDIT 29
#define NL_SETMAX 255
#define isset(a,i) (((unsigned char *)(a))[(i)/NBBY] & (1u<<((i)%NBBY)))
#define __DARWIN_C_FULL 900000L
#define SV_NODEFER SA_NODEFER
#define __MACH__ 1
#define P_DIRTY_DEFER_ALWAYS 0x00000400
#define __Reply__vm_map_subsystem__defined 
#define _STRUCT_X86_EXCEPTION_STATE64 struct __darwin_x86_exception_state64
#define _MACH_DYLIB_INFO_H_ 
#define __amd64__ 1
#define MACH_MSGH_BITS_PORTS_MASK (MACH_MSGH_BITS_REMOTE_MASK | MACH_MSGH_BITS_LOCAL_MASK | MACH_MSGH_BITS_VOUCHER_MASK)
#define __WINT_WIDTH__ 32
#define KERN_MAXPROCPERUID 30
#define i386_THREAD_STATE 1
#define OSSwapHostToLittleInt64(x) ((uint64_t)(x))
#define MAP_MEM_NOOP 0
#define TASK_VM_INFO_REV4_COUNT ((mach_msg_type_number_t) (TASK_VM_INFO_REV5_COUNT - 1))
#define __INT_LEAST8_MAX__ 0x7f
#define NODEV (dev_t)(-1)
#define TASK_DEBUG_CONTROL_PORT 10
#define __INT_LEAST64_WIDTH__ 64
#define __LDBL_MAX_EXP__ 16384
#define __FLT32X_MAX_10_EXP__ 308
#define VM_MEMORY_DYLD_MALLOC 61
#define __DARWIN_SUF_EXTSN "$DARWIN_EXTSN"
#define LLONG_MIN (-LLONG_MAX - 1LL)
#define CIRCLEQ_PREV(elm,field) ((elm)->field.cqe_prev)
#define host_set_lockd_port(host,port) (host_set_special_port((host), HOST_LOCKD_PORT, (port)))
#define VM_VOLATILE_GROUP_SHIFT 8
#define MACH_PORT_RIGHT_RECEIVE ((mach_port_right_t) 1)
#define VM_PAGE_QUERY_PAGE_PRESENT 0x1
#define __ReplyUnion__task_subsystem__defined 
#define EFL_CLR 0xfff88028
#define CPU_SUBTYPE_POWERPC_604e ((cpu_subtype_t) 7)
#define _STRUCT_UCONTEXT struct __darwin_ucontext
#define CPU_SUBTYPE_ARM_V6M ((cpu_subtype_t) 14)
#define KERN_RPC_CONTINUE_ORPHAN 45
#define __SIZEOF_INT128__ 16
#define VM_MEMORY_CM_XPC 92
#define PTRDIFF_MIN INTMAX_MIN
#define MATTR_VAL_CACHE_FLUSH 6
#define PPAUSE 40
#define __FLT64X_IS_IEC_60559__ 2
#define NDR_FLOAT_IEEE 0
#define VM_MEMORY_SKYWALK 87
#define TAILQ_HEAD(name,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct name { struct type *tqh_first; struct type **tqh_last; TRACEBUF } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define _MACH_CLOCK_TYPES_H_ 
#define USER_MAXID 21
#define __LDBL_MAX_10_EXP__ 4932
#define TASK_POWER_INFO_V2_COUNT_OLD ((mach_msg_type_number_t) (sizeof (task_power_info_v2_data_t) - sizeof(uint64_t)*2) / sizeof (natural_t))
#define HOST_IOCOMPRESSIONSTATS_PORT (25 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define LIST_NEXT(elm,field) ((elm)->field.le_next)
#define __ATOMIC_RELAXED 0
#define __signed signed
#define CPU_SUBTYPE_ARM_V7K ((cpu_subtype_t) 12)
#define CPU_SUBTYPE_ARM_V7M ((cpu_subtype_t) 15)
#define subsystem_to_name_map_host_priv { "host_get_boot_info", 400 }, { "host_reboot", 401 }, { "host_priv_statistics", 402 }, { "host_default_memory_manager", 403 }, { "vm_wire", 404 }, { "thread_wire", 405 }, { "vm_allocate_cpm", 406 }, { "host_processors", 407 }, { "host_get_clock_control", 408 }, { "kmod_create", 409 }, { "kmod_destroy", 410 }, { "kmod_control", 411 }, { "host_get_special_port", 412 }, { "host_set_special_port", 413 }, { "host_set_exception_ports", 414 }, { "host_get_exception_ports", 415 }, { "host_swap_exception_ports", 416 }, { "mach_vm_wire", 418 }, { "host_processor_sets", 419 }, { "host_processor_set_priv", 420 }, { "host_set_UNDServer", 423 }, { "host_get_UNDServer", 424 }, { "kext_request", 425 }
#define MACH_MSG_TYPE_MOVE_SEND 17
#define CPU_SUBTYPE_ARM_V7S ((cpu_subtype_t) 11)
#define KERN_LOCK_OWNED 40
#define VM_MEMORY_MALLOC_NANO 11
#define FPS_IE 0x0001
#define P_DIRTY_TERMINATED 0x00000020
#define TASK_NAME_NULL ((task_name_t) 0)
#define __DBL_EPSILON__ ((double)2.22044604925031308084726333618164062e-16L)
#define NDR_FLOAT_IBM 3
#define FSHIFT 11
#define SI_MESGQ 0x10005
#define VM_FLAGS_USER_ALLOCATE (VM_FLAGS_FIXED | VM_FLAGS_ANYWHERE | VM_FLAGS_PURGABLE | VM_FLAGS_4GB_CHUNK | VM_FLAGS_RANDOM_ADDR | VM_FLAGS_NO_CACHE | VM_FLAGS_PERMANENT | VM_FLAGS_OVERWRITE | VM_FLAGS_SUPERPAGE_MASK | VM_FLAGS_ALIAS_MASK)
#define LOCK_SET_NULL ((lock_set_t) 0)
#define BC_SCALE_MAX 99
#define __FLT128_MIN__ 3.36210314311209350626267781732175260e-4932F128
#define AUDIT_GROUP 0x0080
#define _PTHREAD_ATTR_T 
#define TASK_NULL ((task_t) 0)
#define CPU_SUBTYPE_ARM_V8M ((cpu_subtype_t) 17)
#define VM_SET_FLAGS_ALIAS(flags,alias) (flags) = (((flags) & ~VM_FLAGS_ALIAS_MASK) | (((alias) & ~VM_FLAGS_ALIAS_MASK) << 24))
#define _MACH_THREAD_STATUS_H_ 
#define _LP64 1
#define MACH_MSG_VM_KERNEL 0x00000400
#define MACH_MSGH_BITS_LOCAL(bits) (((bits) & MACH_MSGH_BITS_LOCAL_MASK) >> 8)
#define KERN_POLICY_LIMIT 27
#define SLIST_REMOVE_AFTER(elm,field) do { SLIST_NEXT(elm, field) = SLIST_NEXT(SLIST_NEXT(elm, field), field); } while (0)
#define VM_FLAGS_USER_REMAP (VM_FLAGS_FIXED | VM_FLAGS_ANYWHERE | VM_FLAGS_RANDOM_ADDR | VM_FLAGS_OVERWRITE| VM_FLAGS_RETURN_DATA_ADDR | VM_FLAGS_RESILIENT_CODESIGN | VM_FLAGS_RESILIENT_MEDIA)
#define OSSwapHostToBigConstInt16(x) OSSwapConstInt16(x)
#define P_CHECKOPENEVT 0x00080000
#define __UINT8_C(c) c
#define CPUFAMILY_ARM_CYCLONE 0x37a09642
#define THREAD_IDENTIFIER_INFO 4
#define __API_AVAILABLE(...) 
#define HW_DISKSTATS 9
#define __FLT64_MAX_EXP__ 1024
#define _INT8_T 
#define IOV_MAX 1024
#define HOST_VM_PURGABLE 9
#define TASK_VM_INFO_REV2_COUNT ((mach_msg_type_number_t) (TASK_VM_INFO_REV3_COUNT - 42))
#define __INT_LEAST32_TYPE__ int
#define TIMEVAL_TO_TIMESPEC(tv,ts) { (ts)->tv_sec = (tv)->tv_sec; (ts)->tv_nsec = (tv)->tv_usec * 1000; }
#define KERN_PROC_PID 1
#define SLIST_FOREACH(var,head,field) for ((var) = SLIST_FIRST((head)); (var); (var) = SLIST_NEXT((var), field))
#define __API_UNAVAILABLE(...) 
#define MAP_MEM_PURGABLE_KERNEL_ONLY 0x004000
#define CPU_SUBTYPE_INTEL_MODEL(x) ((x) >> 4)
#define OSSwapLittleToHostConstInt32(x) ((uint32_t)(x))
#define BAD_ALRMTYPE(t) (((t) &~ TIME_RELATIVE) != 0)
#define SEGV_MAPERR 1
#define AU_CLASS_MASK_RESERVED 0x10000000
#define __SIZEOF_WCHAR_T__ 4
#define VM_FLAGS_RESILIENT_CODESIGN 0x0020
#define POLICY_NULL 0
#define __UINT64_TYPE__ long long unsigned int
#define MPO_STRICT 0x20
#define THREAD_MACHINE_STATE_MAX THREAD_STATE_MAX
#define MACH_NOTIFY_LAST (MACH_NOTIFY_FIRST + 015)
#define CPU_SUBTYPE_CELERON CPU_SUBTYPE_INTEL(7, 6)
#define __has_feature(x) 0
#define USING_MIG_STRNCPY_ZEROFILL 
#define POLICY_TIMESHARE_BASE_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_timeshare_base)/sizeof(integer_t)))
#define __ReplyUnion__mach_host_subsystem__defined 
#define __GNUC_PATCHLEVEL__ 0
#define __DARWIN_1050(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050)
#define _FSFILCNT_T 
#define EXC_MASK_BAD_ACCESS (1 << EXC_BAD_ACCESS)
#define CPU_SUBTYPE_ARM64_32_ALL ((cpu_subtype_t) 0)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_15_1(x) x
#define USER_BC_SCALE_MAX 4
#define MACH_MSGH_BITS_PORTS(bits) ((bits) & MACH_MSGH_BITS_PORTS_MASK)
#define task_set_kernel_port(task,port) (task_set_special_port((task), TASK_KERNEL_PORT, (port)))
#define AUDIT_PATH 0x0200
#define VM_MEMORY_CORPSEINFO 80
#define MAC_OS_X_VERSION_10_10 101000
#define TASK_ABSOLUTETIME_INFO 1
#define THREAD_BACKGROUND_POLICY 5
#define EXC_I386_SGLSTP 1
#define _UUID_T 
#define x86_THREAD_STATE64 4
#define __FLT128_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define ILL_ILLOPC 1
#define CIRCLEQ_REMOVE(head,elm,field) do { CIRCLEQ_CHECK_NEXT(head, elm, field); CIRCLEQ_CHECK_PREV(head, elm, field); if ((elm)->field.cqe_next == (void *)(head)) (head)->cqh_last = (elm)->field.cqe_prev; else (elm)->field.cqe_next->field.cqe_prev = (elm)->field.cqe_prev; if ((elm)->field.cqe_prev == (void *)(head)) (head)->cqh_first = (elm)->field.cqe_next; else (elm)->field.cqe_prev->field.cqe_next = (elm)->field.cqe_next; } while (0)
#define REQUESTED_TRAILER_SIZE_NATIVE(y) ((mach_msg_trailer_size_t) ((GET_RCV_ELEMENTS(y) == MACH_RCV_TRAILER_NULL) ? sizeof(mach_msg_trailer_t) : ((GET_RCV_ELEMENTS(y) == MACH_RCV_TRAILER_SEQNO) ? sizeof(mach_msg_seqno_trailer_t) : ((GET_RCV_ELEMENTS(y) == MACH_RCV_TRAILER_SENDER) ? sizeof(mach_msg_security_trailer_t) : ((GET_RCV_ELEMENTS(y) == MACH_RCV_TRAILER_AUDIT) ? sizeof(mach_msg_audit_trailer_t) : ((GET_RCV_ELEMENTS(y) == MACH_RCV_TRAILER_CTX) ? sizeof(mach_msg_context_trailer_t) : ((GET_RCV_ELEMENTS(y) == MACH_RCV_TRAILER_AV) ? sizeof(mach_msg_mac_trailer_t) : sizeof(mach_msg_max_trailer_t))))))))
#define USER_CODE_SELECTOR 0x0017
#define TASK_RESOURCE_NOTIFY_PORT 11
#define __DARWIN_OSSwapConstInt16(x) ((__uint16_t)((((__uint16_t)(x) & 0xff00U) >> 8) | (((__uint16_t)(x) & 0x00ffU) << 8)))
#define HOST_AMFID_PORT (11 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define POLICY_FIFO 4
#define MAP_MEM_4K_DATA_ADDR 0x800000
#define MATTR_VAL_DCACHE_FLUSH 7
#define VM_PURGABLE_NONVOLATILE 0
#define CIRCLEQ_INSERT_BEFORE(head,listelm,elm,field) do { CIRCLEQ_CHECK_PREV(head, listelm, field); (elm)->field.cqe_next = (listelm); (elm)->field.cqe_prev = (listelm)->field.cqe_prev; if ((listelm)->field.cqe_prev == (void *)(head)) (head)->cqh_first = (elm); else (listelm)->field.cqe_prev->field.cqe_next = (elm); (listelm)->field.cqe_prev = (elm); } while (0)
#define CPU_SUBTYPE_ARM64_PTR_AUTH_VERSION(x) (((x) & CPU_SUBTYPE_ARM64_PTR_AUTH_MASK) >> 24)
#define CPUFAMILY_ARM_12 0xbd1b0ae9
#define OSSwapConstInt32(x) __DARWIN_OSSwapConstInt32(x)
#define MACH_RCV_IN_PROGRESS 0x10004001
#define MACH_SEND_IN_PROGRESS 0x10000001
#define VM_MEMORY_JAVA 44
#define VM_MEMORY_COREUI 76
#define MAC_OS_X_VERSION_10_15 101500
#define KERN_ALREADY_WAITING 30
#define CLOCK_NULL ((clock_t) 0)
#define EFL_ID 0x00200000
#define __FLT64_NORM_MAX__ 1.79769313486231570814527423731704357e+308F64
#define SIGXCPU 24
#define __FLT128_HAS_QUIET_NAN__ 1
#define KERN_SEMAPHORE_DESTROYED 42
#define x86_DEBUG_STATE 12
#define HW_L2SETTINGS 19
#define VM_MEMORY_COREDATA 45
#define __INTMAX_MAX__ 0x7fffffffffffffffL
#define THREAD_STANDARD_POLICY 1
#define MAX_AUDIT_RECORDS 20
#define AUDIT_ARGV 0x0004
#define HW_L3SETTINGS 21
#define CPU_TYPE_X86 ((cpu_type_t) 7)
#define KERN_NOT_DEPRESSED 36
#define MACH_MSGH_BITS_USED 0xb01f1f1fU
#define __MAC_10_11_2 101102
#define MACH_MSGH_BITS_USER 0x801f1f1fU
#define __INT_FAST8_TYPE__ signed char
#define NOTE_EXIT_CSERROR 0x00040000
#define host_set_fairplayd_port(host,port) (host_set_special_port((host), HOST_FAIRPLAYD_PORT, (port)))
#define _MACH_MACHINE_RPC_H_ 
#define P_DELAYIDLESLEEP 0x00040000
#define KERN_KDTEST 19
#define MACH_PORT_TYPE_LABELH MACH_PORT_TYPE(MACH_PORT_RIGHT_LABELH)
#define __DARWIN_FD_SETSIZE 1024
#define __TVOS_11_4 110400
#define __Request__processor_subsystem__defined 
#define POLL_IN 1
#define _MACH_TASK_SPECIAL_PORTS_H_ 
#define OSSwapHostToLittleInt(x) OSSwapHostToLittleInt32(x)
#define __FLT64X_MIN__ 3.36210314311209350626267781732175260e-4932F64x
#define host_set_closured_port(host,port) (host_set_special_port((host), HOST_CLOSURED_PORT, (port)))
#define EV_ERROR 0x4000
#define KERN_INVALID_MEMORY_CONTROL 34
#define __DEQUALIFY(type,var) __CAST_AWAY_QUALIFIER(var, const volatile, type)
#define va_arg(v,l) __builtin_va_arg(v,l)
#define VM_MEMORY_COREPROFILE 71
#define OSWriteLittleInt32(base,byteOffset,data) _OSWriteInt32(base, byteOffset, data)
#define CLD_TRAPPED 4
#define KERN_SUCCESS 0
#define __Request__thread_act_subsystem__defined 
#define A_SETCOND 38
#define MACH_SEND_INVALID_RT_OOL_SIZE 0x10000015
#define CTL_VM_NAMES { { 0, 0 }, { "vmmeter", CTLTYPE_STRUCT }, { "loadavg", CTLTYPE_STRUCT }, { 0, 0 }, { "dummy", CTLTYPE_INT }, { "swapusage", CTLTYPE_STRUCT } }
#define VM_FLAGS_ALIAS_MASK 0xFF000000
#define TIMESPEC_TO_TIMEVAL(tv,ts) { (tv)->tv_sec = (ts)->tv_sec; (tv)->tv_usec = (ts)->tv_nsec / 1000; }
#define MACH_SEND_INTERRUPT 0x00000040
#define MACH_MSGH_BITS_VOUCHER_MASK 0x001f0000
#define VM_FLAGS_RETURN_DATA_ADDR 0x100000
#define MACH_RCV_IN_PROGRESS_TIMED 0x10004011
#define _BSD_MACHINE_TYPES_H_ 
#define LONG_LONG_MAX __LONG_LONG_MAX__
#define MACH_MSG_TYPE_DISPOSE_SEND 25
#define __GNUC_STDC_INLINE__ 1
#define VM_MIN_ADDRESS64 ((user_addr_t) 0x0000000000000000ULL)
#define MACH_PORT_QLIMIT_SMALL (16)
#define _POSIX_TTY_NAME_MAX 9
#define OSReadLittleInt(x,y) OSReadLittleInt32(x, y)
#define I386_PGBYTES 4096
#define SV_NOCLDSTOP SA_NOCLDSTOP
#define __FLT64_HAS_DENORM__ 1
#define __MIG_STRNCPY_ZEROFILL_FORWARD_TYPE_DECLS__ 
#define TASK_ID_TOKEN_NULL ((task_id_token_t) 0)
#define A_GETCWD 8
#define __Request__processor_set_subsystem__defined 
#define CTLFLAG_EXPERIMENT 0x00100000
#define BUS_ADRERR 2
#define SLIST_HEAD(name,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct name { struct type *slh_first; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define PLOCK 36
#define __FLT32_EPSILON__ 1.19209289550781250000000000000000000e-7F32
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_1(x) 
#define INTMAX_MAX INTMAX_C(9223372036854775807)
#define _I386_FP_SAVE_H_ 
#define LOCKGROUP_ATTR_STAT 0x01ULL
#define host_get_ktrace_background_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_KTRACE_BACKGROUND_PORT, (port)))
#define __DARWIN_ALIGNBYTES32 (sizeof(__uint32_t) - 1)
#define __TYPES_H_ 
#define MAP_MEM_NAMED_CREATE 0x020000
#define LONG_LONG_MIN (-LONG_LONG_MAX - 1LL)
#define _CADDR_T 
#define CPU_SUBTYPE_ANY ((cpu_subtype_t) -1)
#define ILL_PRVREG 6
#define __DARWIN_NSIG 32
#define __DBL_DECIMAL_DIG__ 17
#define MACH_PORT_RIGHT_DEAD_NAME ((mach_port_right_t) 4)
#define __STDC_UTF_32__ 1
#define time_value_add_usec(val,micros) { if (((val)->microseconds += (micros)) >= TIME_MICROS_MAX) { (val)->microseconds -= TIME_MICROS_MAX; (val)->seconds++; } }
#define __INT_FAST8_WIDTH__ 8
#define USERMODE(x) (((x) & 3) == 3)
#define _POSIX_MQ_PRIO_MAX 32
#define is_gcc(version) (__GNUC__ >= version)
#define __FXSR__ 1
#define __WATCHOS_4_2 40200
#define MAX(a,b) (((a)>(b))?(a):(b))
#define x86_AVX512_STATE (x86_AVX512_STATE32 + 2)
#define SV_INTERRUPT SA_RESTART
#define MEMORY_OBJECT_COPY_TEMPORARY 3
#define CPU_TYPE_I860 ((cpu_type_t) 15)
#define STAILQ_EMPTY(head) ((head)->stqh_first == NULL)
#define _SIZE_T 
#define MACH_RCV_LARGE 0x00000004
#define VM_SYNC_SYNCHRONOUS ((vm_sync_t) 0x02)
#define __options_closed_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_closed __enum_options
#define CTLFLAG_NOAUTO 0x02000000
#define P_THCWD 0x01000000
#define __FLT32X_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define KERN_NX_PROTECTION 60
#define __DARWIN_VERS_1050 1
#define CPU_SUBTYPE_INTEL_FAMILY_MAX 15
#define CPU_SUBTYPE_VAX8200 ((cpu_subtype_t) 7)
#define BSD 199506
#define __DBL_NORM_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define NOTE_FFCTRLMASK 0xc0000000
#define QUAD_MIN LLONG_MIN
#define _NLINK_T 
#define SIGHUP 1
#define MSIZESHIFT 8
#define MACH_RCV_TIMED_OUT 0x10004003
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define x86_AVX_STATE64_COUNT ((mach_msg_type_number_t) (sizeof(x86_avx_state64_t)/sizeof(unsigned int)))
#define EXC_I386_EXTERR 5
#define _MACH_I386__STRUCTS_H_ 
#define CPU_SUBTYPE_POWERPC_7400 ((cpu_subtype_t) 10)
#define host_get_filecoordinationd_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_FILECOORDINATIOND_PORT, (port)))
#define MACH_SEND_INVALID_TYPE 0x1000000f
#define PROC_FLAG_SUPPRESSED 0x800000
#define lock_set_MSG_COUNT 6
#define NSEC_PER_USEC 1000ull
#define KERN_SECURELVL 9
#define TASK_SCHED_TIMESHARE_INFO 10
#define HOST_VM_INFO64_REV1_COUNT HOST_VM_INFO64_LATEST_COUNT
#define MACH_MSG_TYPE_MOVE_RECEIVE 16
#define CPUSUBFAMILY_ARM_HG 2
#define SET_MAP_MEM(caching,flags) ((flags) = ((((unsigned int)(caching)) << 24) & 0xFF000000) | ((flags) & 0xFFFFFF));
#define VM_PROT_COPY ((vm_prot_t) 0x10)
#define MACH_MSG_TRAILER_MINIMUM_SIZE sizeof(mach_msg_trailer_t)
#define CPUSUBFAMILY_ARM_HS 4
#define MACH_PORT_INFO_EXT_COUNT ((natural_t) (sizeof(mach_port_info_ext_t)/sizeof(natural_t)))
#define __Reply__task_subsystem__defined 
#define OSReadLittleInt64(base,byteOffset) _OSReadInt64(base, byteOffset)
#define x86_EXCEPTION_STATE32 3
#define EVFILT_MACHPORT (-8)
#define AUDIT_TRAIL 0x0100
#define host_get_kextd_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_KEXTD_PORT, (port)))
#define CIRCLEQ_INSERT_AFTER(head,listelm,elm,field) do { CIRCLEQ_CHECK_NEXT(head, listelm, field); (elm)->field.cqe_next = (listelm)->field.cqe_next; (elm)->field.cqe_prev = (listelm); if ((listelm)->field.cqe_next == (void *)(head)) (head)->cqh_last = (elm); else (listelm)->field.cqe_next->field.cqe_prev = (elm); (listelm)->field.cqe_next = (elm); } while (0)
#define EV_ONESHOT 0x0010
#define err_mach_ipc err_system(0x4)
#define __INTMAX_WIDTH__ 64
#define MAP_MEM_ONLY 0x010000
#define clrbit(a,i) (((unsigned char *)(a))[(i)/NBBY] &= ~(1u<<((i)%NBBY)))
#define EV_FLAG1 0x2000
#define _STRING_H_ 
#define VM_SYNC_CONTIGUOUS ((vm_sync_t) 0x20)
#define VM_MEMORY_COREGRAPHICS_FRAMEBUFFERS 56
#define MIG_BAD_ID -303
#define VM_FLAGS_RETURN_4K_DATA_ADDR 0x800000
#define CPU_SUBTYPE_PENTII_M3 CPU_SUBTYPE_INTEL(6, 3)
#define MCLOFSET (MCLBYTES - 1)
#define NOTE_VM_PRESSURE 0x80000000
#define MACH_MSG_TYPE_POLYMORPHIC ((mach_msg_type_name_t) -1)
#define KMOD_INFO_NAME kmod_info
#define _STRUCT_X86_AVX512_STATE32 struct __darwin_i386_avx512_state
#define LSCALE 1000
#define GUARD_TYPE_VIRT_MEMORY 0x5
#define MACH_NOTIFY_PORT_DELETED (MACH_NOTIFY_FIRST + 001)
#define OSWriteLittleInt(x,y,z) OSWriteLittleInt32(x, y, z)
#define THREAD_AFFINITY_POLICY 4
#define has_attribute __has_attribute
#define CPUFAMILY_INTEL_6_13 0xaa33392b
#define A_SETSTAT 13
#define __UINT32_C(c) c ## U
#define TASK_CATEGORY_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (task_category_policy_data_t) / sizeof (integer_t)))
#define _POSIX_THREAD_THREADS_MAX 64
#define _INO64_T 
#define clock_priv_MSG_COUNT 2
#define ___POSIX_C_DEPRECATED_STARTING_200112L 
#define MACH_VOUCHER_ATTR_CONTROL_NULL ((mach_voucher_attr_control_t) 0)
#define __OSX_DEPRECATED(_start,_dep,_msg) 
#define x86_EXCEPTION_STATE 9
#define TASK_FLAGS_INFO 28
#define __TVOS_10_0 100000
#define __TVOS_10_1 100100
#define __TVOS_10_2 100200
#define task_get_task_access_port(task,port) (task_get_special_port((task), TASK_ACCESS_PORT, (port)))
#define __FLT_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F
#define __DARWIN_ALIGN32(p) ((__darwin_size_t)((__darwin_size_t)(p) + __DARWIN_ALIGNBYTES32) &~ __DARWIN_ALIGNBYTES32)
#define MAC_OS_X_VERSION_10_14_4 101404
#define host_get_user_notification_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_USER_NOTIFICATION_PORT, (port)))
#define MEMORY_OBJECT_IO_SYNC 0x20
#define USER_CS_PATH 1
#define __IOS_AVAILABLE(_vers) 
#define MPO_IMMOVABLE_RECEIVE 0x80
#define PAGE_MAX_SIZE (1 << PAGE_MAX_SHIFT)
#define VM_PURGABLE_SET_STATE_FROM_KERNEL ((vm_purgable_t) 3)
#define CPU_SUBTYPE_UVAXIII ((cpu_subtype_t) 12)
#define VM_PURGABLE_SET_STATE ((vm_purgable_t) 0)
#define INTMAX_MIN (-INTMAX_MAX-1)
#define CPU_SUBTYPE_POWERPC_7450 ((cpu_subtype_t) 11)
#define VM_BEHAVIOR_PAGEOUT ((vm_behavior_t) 11)
#define glue(a,b) _glue(a, b)
#define KERN_PROCDELAYTERM 53
#define PROCESSOR_BASIC_INFO 1
#define VM_MEMORY_APPLICATION_SPECIFIC_1 240
#define STAILQ_REMOVE_AFTER(head,elm,field) do { if ((STAILQ_NEXT(elm, field) = STAILQ_NEXT(STAILQ_NEXT(elm, field), field)) == NULL) (head)->stqh_last = &STAILQ_NEXT((elm), field); } while (0)
#define _STRUCT_ZMM_REG struct __darwin_zmm_reg
#define CPUFAMILY_ARM_LIGHTNING_THUNDER 0x462504d2
#define MACH_RCV_TRAILER_LABELS 8
#define MACH_VOUCHER_ATTR_KEY_BITS MACH_VOUCHER_ATTR_KEY_USER_DATA
#define VM_LIB64_SHR_DATA ((user_addr_t) 0x00007FFF60000000ULL)
#define LIST_FOREACH(var,head,field) for ((var) = LIST_FIRST((head)); (var); (var) = LIST_NEXT((var), field))
#define sigmask(m) (1 << ((m)-1))
#define _VA_LIST_T_H 
#define __API_UNAVAILABLE_BEGIN(...) 
#define __INT8_MAX__ 0x7f
#define forceinline inline __attribute__((always_inline))
#define __LONG_WIDTH__ 64
#define SLIST_INIT(head) do { SLIST_FIRST((head)) = NULL; } while (0)
#define __PIC__ 2
#define TAILQ_INSERT_TAIL(head,elm,field) do { TAILQ_NEXT((elm), field) = NULL; (elm)->field.tqe_prev = (head)->tqh_last; *(head)->tqh_last = (elm); (head)->tqh_last = &TAILQ_NEXT((elm), field); QMD_TRACE_HEAD(head); QMD_TRACE_ELEM(&(elm)->field); } while (0)
#define EXC_I386_NOEXT 3
#define MIG_SERVER_DIED -308
#define VM_STATISTICS_TRUNCATE_TO_32_BIT(value) ((uint32_t)(((value) > UINT32_MAX ) ? UINT32_MAX : (value)))
#define __UINT_FAST32_TYPE__ unsigned int
#define FD_ISSET(n,p) __DARWIN_FD_ISSET(n, p)
#define VM_MEMORY_ROSETTA_10 239
#define FP_RND_NEAR 0
#define __TVOS_11_3 110300
#define POLICY_RR_INFO_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_rr_info)/sizeof(integer_t)))
#define __RCSID(s) __IDSTRING(rcsid,s)
#define P_NOCLDWAIT 0x40000000
#define MACH_VOUCHER_ATTR_VALUE_FLAGS_PERSIST ((mach_voucher_attr_value_flags_t)1)
#define THREAD_BASIC_INFO 3
#define __FLT32X_NORM_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define __DARWIN_ALIGNBYTES (sizeof(__darwin_size_t) - 1)
#define __CHAR32_TYPE__ unsigned int
#define I386_EXCEPTION_STATE_COUNT i386_EXCEPTION_STATE_COUNT
#define MACH_VOUCHER_ATTR_REDEEM ((mach_voucher_attr_recipe_command_t)10)
#define SEGV_NOOP 0
#define THREAD_DEBUG_INFO_INTERNAL 6
#define __FLT_MAX__ 3.40282346638528859811704183484516925e+38F
#define POLICY_FIFO_BASE_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_fifo_base)/sizeof(integer_t)))
#define VM_LEDGER_TAG_NETWORK 0x00000002
#define AUC_NOAUDIT 2
#define LONG_BIT 64
#define __IPHONE_5_0 50000
#define __IPHONE_5_1 50100
#define __NDR_convert__mig_reply_error_t__defined 
#define __exported __attribute__((__visibility__("default")))
#define CPU_SUBTYPE_X86_ARCH1 ((cpu_subtype_t)4)
#define __PROJECT_VERSION(s) __IDSTRING(project_version,s)
#define HOST_SYSDIAGNOSE_PORT (16 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define PSPIN 0x800
#define MACH_MSG_SIZE_NULL (mach_msg_size_t *) 0
#define MEMORY_OBJECT_RESPECT_CACHE 0x2
#define INT_FAST64_MAX INT64_MAX
#define CPU_SUBTYPE_MIPS_ALL ((cpu_subtype_t) 0)
#define UINT_LEAST32_MAX UINT32_MAX
#define subsystem_to_name_map_thread_act { "thread_terminate", 3600 }, { "act_get_state", 3601 }, { "act_set_state", 3602 }, { "thread_get_state", 3603 }, { "thread_set_state", 3604 }, { "thread_suspend", 3605 }, { "thread_resume", 3606 }, { "thread_abort", 3607 }, { "thread_abort_safely", 3608 }, { "thread_depress_abort", 3609 }, { "thread_get_special_port", 3610 }, { "thread_set_special_port", 3611 }, { "thread_info", 3612 }, { "thread_set_exception_ports", 3613 }, { "thread_get_exception_ports", 3614 }, { "thread_swap_exception_ports", 3615 }, { "thread_policy", 3616 }, { "thread_policy_set", 3617 }, { "thread_policy_get", 3618 }, { "thread_sample", 3619 }, { "etap_trace_thread", 3620 }, { "thread_assign", 3621 }, { "thread_assign_default", 3622 }, { "thread_get_assignment", 3623 }, { "thread_set_policy", 3624 }, { "thread_get_mach_voucher", 3625 }, { "thread_set_mach_voucher", 3626 }, { "thread_swap_mach_voucher", 3627 }, { "thread_convert_thread_state", 3628 }, { "thread_get_exception_ports_info", 3630 }
#define NOCRED ((kauth_cred_t )0)
#define DST_NONE 0
#define __va_list__ 
#define x86_LAST_BRANCH_STATE 25
#define KERN_NOT_WAITING 48
#define host_set_sysdiagnose_port(host,port) (host_set_special_port((host), HOST_SYSDIAGNOSE_PORT, (port)))
#define __AVAILABILITY_INTERNAL_DEPRECATED __attribute__((deprecated))
#define MACH_MSG_TRAILER_FORMAT_0 0
#define COALITION_NULL ((coalition_t) 0)
#define SA_NODEFER 0x0010
#define VM_FLAGS_PERMANENT 0x0080
#define __DARWIN_SUF_64_BIT_INO_T "$INODE64"
#define MACH_VOUCHER_NAME_ARRAY_NULL ((mach_voucher_name_array_t) 0)
#define UINT_MAX (INT_MAX * 2U + 1U)
#define __SSE2__ 1
#define minor(x) ((int32_t)((x) & 0xffffff))
#define CLOCK_REALTIME _CLOCK_REALTIME
#define _STRUCT_XMM_REG struct __darwin_xmm_reg
#define mach_vm_round_page(x) (((mach_vm_offset_t)(x) + vm_page_mask) & ~((signed)vm_page_mask))
#define KERN_KDSETREG 8
#define MACH_MSGH_BITS_SET(remote,local,voucher,other) (MACH_MSGH_BITS_SET_PORTS((remote), (local), (voucher)) | ((other) &~ MACH_MSGH_BITS_PORTS_MASK))
#define __API_AVAILABLE_BEGIN(...) 
#define RSIZE_MAX (SIZE_MAX >> 1)
#define MACH_MSGH_BITS_IS_COMPLEX(bits) (((bits) & MACH_MSGH_BITS_COMPLEX) != MACH_MSGH_BITS_ZERO)
#define __OSX_AVAILABLE_STARTING(_osx,_ios) 
#define __INT32_TYPE__ int
#define VM_MAP_ENTRY_MAX (256)
#define ZOP_ALLOC 1
#define HOST_PRIV_NULL ((host_priv_t) 0)
#define SSLEEP 3
#define __improbable(x) (x)
#define __SIZEOF_DOUBLE__ 8
#define IPC_VOUCHER_ATTR_CONTROL_NULL ((ipc_voucher_attr_control_t) 0)
#define __FLT_MIN_10_EXP__ (-37)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_4(x) 
#define POLICY_RR_BASE_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_rr_base)/sizeof(integer_t)))
#define TAILQ_FOREACH_REVERSE(var,head,headname,field) for ((var) = TAILQ_LAST((head), headname); (var); (var) = TAILQ_PREV((var), headname, field))
#define VM_PAGE_QUERY_PAGE_EXTERNAL 0x80
#define VM_GET_FLAGS_ALIAS(flags,alias) (alias) = ((flags) & VM_FLAGS_ALIAS_MASK) >> 24
#define __FLT64_MIN__ 2.22507385850720138309023271733240406e-308F64
#define VM_PURGABLE_NO_AGING (0x1 << VM_PURGABLE_NO_AGING_SHIFT)
#define CPU_SUBTYPE_SPARC_ALL ((cpu_subtype_t) 0)
#define __INT_LEAST32_WIDTH__ 32
#define MAXFRAG 8
#define __AVAILABILITY_INTERNAL__ 
#define KERN_SHREG_PRIVATIZABLE 54
#define __INTMAX_TYPE__ long int
#define subsystem_to_name_map_host_security { "host_security_create_task_token", 600 }, { "host_security_set_task_token", 601 }
#define __DARWIN_CLK_TCK 100
#define __unavailable 
#define NOTE_FUNLOCK 0x00000100
#define __DRIVERKIT_20_0 200000
#define TASK_EXC_GUARD_MP_DELIVER 0x10
#define TASK_EXC_GUARD_VM_DELIVER 0x01
#define UPDATE_IO_STATS_ATOMIC(info,io_size) { OSIncrementAtomic64((SInt64 *)&(info.count)); OSAddAtomic64(io_size, (SInt64 *)&(info.size)); }
#define CPUFAMILY_INTEL_6_23 CPUFAMILY_INTEL_PENRYN
#define USER_POSIX2_LOCALEDEF 16
#define VM_FLAGS_USER_MAP (VM_FLAGS_USER_ALLOCATE | VM_FLAGS_RETURN_4K_DATA_ADDR | VM_FLAGS_RETURN_DATA_ADDR)
#define VM_PROT_WRITE ((vm_prot_t) 0x02)
#define VM_MEMORY_JAVASCRIPT_CORE 63
#define VM_PURGABLE_BEHAVIOR_LIFO (1 << VM_PURGABLE_BEHAVIOR_SHIFT)
#define task_get_debug_control_port(task,port) (task_get_special_port((task), TASK_DEBUG_CONTROL_PORT, (port)))
#define KERN_MEMORY_PRESENT 23
#define _U_INT 
#define CPUFAMILY_INTEL_6_26 CPUFAMILY_INTEL_NEHALEM
#define SIGIOT SIGABRT
#define _POSIX_TIMER_MAX 32
#define PLATFORM_H 
#define TH_STATE_HALTED 5
#define VM_LEDGER_TAG_MEDIA 0x00000003
#define MACH_SEND_INVALID_HEADER 0x10000010
#define CHARCLASS_NAME_MAX 14
#define MEMORY_OBJECT_RETURN_DIRTY 1
#define THREAD_EXTENDED_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (thread_extended_policy_data_t) / sizeof (integer_t)))
#define CPUFAMILY_UNKNOWN 0
#define VM_MEMORY_COREUIFILE 77
#define VM_LEDGER_TAG_MAX 0x00000005
#define TASK_INFO_MAX (1024)
#define MACH_EXCEPTION_ERRORS 0x40000000
#define __FLT32X_HAS_QUIET_NAN__ 1
#define va_end(v) __builtin_va_end(v)
#define __ATOMIC_CONSUME 1
#define FSCRED ((kauth_cred_t )-1)
#define EV_UDATA_SPECIFIC 0x0100
#define _MACH_BOOLEAN_H_ 
#define VM_MEMORY_CM_REGWARP 101
#define MACH_MSGH_BITS_RAISED_IMPORTANCE(bits) (((bits) & MACH_MSGH_BITS_RAISEIMP) != MACH_MSGH_BITS_ZERO)
#define EV_SET(kevp,a,b,c,d,e,f) do { struct kevent *__kevp__ = (kevp); __kevp__->ident = (a); __kevp__->filter = (b); __kevp__->flags = (c); __kevp__->fflags = (d); __kevp__->data = (e); __kevp__->udata = (f); } while(0)
#define VM_PAGE_QUERY_PAGE_CS_TAINTED 0x200
#define __GNUC_MINOR__ 2
#define ___POSIX_C_DEPRECATED_STARTING_198808L 
#define KERN_PROC_PGRP 2
#define __INT_FAST16_WIDTH__ 16
#define __UINTMAX_MAX__ 0xffffffffffffffffUL
#define USER_ADDR_NULL ((user_addr_t) 0)
#define __FLT32X_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F32x
#define __API_DEPRECATED_BEGIN_REP_GET_MACRO 
#define MATTR_MIGRATE 2
#define __unreachable_ok_pop _Pragma("GCC diagnostic pop")
#define glue3(a,b,c) glue(a, glue(b, c))
#define INTMAX_C(v) (v ## L)
#define _mach_port_user_ 
#define host_get_unfreed_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_UNFREED_PORT, (port)))
#define CPU_STATE_USER 0
#define ILL_PRVOPC 3
#define HW_MAXID 28
#define LIST_FOREACH_SAFE(var,head,field,tvar) for ((var) = LIST_FIRST((head)); (var) && ((tvar) = LIST_NEXT((var), field), 1); (var) = (tvar))
#define P_DISABLE_ASLR 0x00001000
#define MACH_VOUCHER_ATTR_VALUE_MAX_NESTED ((mach_voucher_attr_value_handle_array_size_t)4)
#define MACH_SEND_INVALID_NOTIFY 0x1000000b
#define _MACH_VM_STATISTICS_H_ 
#define VM_MEMORY_LIBNETWORK 89
#define MPO_TG_BLOCK_TRACKING 0x200
#define INT_FAST64_MIN INT64_MIN
#define MSIZE (1 << MSIZESHIFT)
#define BC_DIM_MAX 2048
#define VM_PURGABLE_STATE_MAX 3
#define host_get_automountd_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_AUTOMOUNTD_PORT, (port)))
#define __DBL_MAX_10_EXP__ 308
#define container_of(ptr,type,member) ((type *) ((char *) (ptr) - offsetof(type, member)))
#define __NULLABILITY_COMPLETENESS_POP 
#define __const const
#define UINT16_MAX 65535
#define __LDBL_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951L
#define fallthrough __attribute__((fallthrough))
#define A_GETPINFO 24
#define glue4(a,b,c,d) glue(a, glue3(b, c, d))
#define PTTYBLOCK 0x200
#define EV_OOBAND EV_FLAG1
#define MACH_MSGH_BITS_REMOTE_MASK 0x0000001f
#define EV_DISPATCH2 (EV_DISPATCH | EV_UDATA_SPECIFIC)
#define PROC_FLAG_DARWINBG 0x8000
#define CPU_ARCH_MASK 0xff000000
#define __DARWIN_OS_INLINE static inline
#define host_set_amfid_port(host,port) (host_set_special_port((host), HOST_AMFID_PORT, (port)))
#define SIG_DFL (void (*)(int))0
#define P_SYSTEM 0x00000200
#define __INT16_C(c) c
#define system_emask (err_system(0x3f))
#define HOST_CLOSURED_PORT (21 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define VM_MEMORY_WEBCORE_PURGEABLE_BUFFERS 69
#define CTLFLAG_NOLOCK 0x20000000
#define _STRUCT_MCONTEXT_AVX64 struct __darwin_mcontext_avx64
#define MPG_FLAGS_STRICT_REPLY_INVALID_REPLY_DISP (0x01ull << 56)
#define _STRUCT_OPMASK_REG struct __darwin_opmask_reg
#define timersub(tvp,uvp,vvp) do { (vvp)->tv_sec = (tvp)->tv_sec - (uvp)->tv_sec; (vvp)->tv_usec = (tvp)->tv_usec - (uvp)->tv_usec; if ((vvp)->tv_usec < 0) { (vvp)->tv_sec--; (vvp)->tv_usec += 1000000; } } while (0)
#define __STDC__ 1
#define NOTE_OOB 0x00000002
#define DST_CAN 6
#define _STRUCT_MCONTEXT_AVX64_FULL struct __darwin_mcontext_avx64_full
#define __AUDIT_API_DEPRECATED __API_DEPRECATED("audit is deprecated", macos(10.4, 11.0))
#define CPU_SUBTYPE_VAX780 ((cpu_subtype_t) 1)
#define MACH_SEND_NODENAP MACH_SEND_NOIMPORTANCE
#define A_GETSFLAGS 39
#define HOST_LAUNCHCTL_PORT (9 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define __PTRDIFF_TYPE__ long int
#define CPUFAMILY_ARM_TYPHOON 0x2c91a47e
#define EV_ADD 0x0001
#define CTL_DEBUG_VALUE 1
#define err_dipc err_system(0x7)
#define __IPHONE_13_0 130000
#define __IPHONE_13_1 130100
#define __IPHONE_13_2 130200
#define __IPHONE_13_3 130300
#define __IPHONE_13_4 130400
#define __IPHONE_13_6 130600
#define __IPHONE_13_7 130700
#define HW_EPOCH 10
#define _U_LONG 
#define host_set_audit_control_port(host,port) (host_set_special_port((host), HOST_AUDIT_CONTROL_PORT, (port)))
#define _MACH_MIG_ERRORS_H_ 
#define KERN_NO_ACCESS 8
#define MACH_PORT_LIMITS_INFO_COUNT ((natural_t) (sizeof(mach_port_limits_t)/sizeof(natural_t)))
#define processor_MSG_COUNT 6
#define _MACH_I386_VM_PARAM_H_ 
#define LIST_INSERT_BEFORE(listelm,elm,field) do { LIST_CHECK_PREV(listelm, field); (elm)->field.le_prev = (listelm)->field.le_prev; LIST_NEXT((elm), field) = (listelm); *(listelm)->field.le_prev = (elm); (listelm)->field.le_prev = &LIST_NEXT((elm), field); } while (0)
#define HOST_MACH_MSG_TRAP 8
#define x86_AVX512_STATE64_COUNT ((mach_msg_type_number_t) (sizeof(x86_avx512_state64_t)/sizeof(unsigned int)))
#define vm_map_MSG_COUNT 33
#define CPU_TYPE_VAX ((cpu_type_t) 1)
#define _STRUCT_MCONTEXT_AVX512_64 struct __darwin_mcontext_avx512_64
#define x86_EXCEPTION_STATE64 6
#define TASK_EXC_GUARD_VM_FATAL 0x08
#define __ATOMIC_SEQ_CST 5
#define FPS_ES 0x0080
#define __PTHREAD_COND_SIZE__ 40
#define CPUSUBFAMILY_ARM_HC_HD 5
#define TASK_FLAVOR_NAME 3
#define EXC_I386_BOUND 7
#define __WATCHOS_AVAILABLE(_vers) 
#define VM_MEMORY_ROSETTA 230
#define VM_PURGABLE_GET_STATE ((vm_purgable_t) 1)
#define NOTE_BACKGROUND 0x00000040
#define THREAD_AFFINITY_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (thread_affinity_policy_data_t) / sizeof (integer_t)))
#define MACH_TASK_INSPECT_H 
#define MIG_EXCEPTION -306
#define A_GETCAR 9
#define KERN_KDREMOVE 7
#define valid_switch_option(opt) (0 <= (opt) && (opt) <= 5)
#define MACH_PORT_QLIMIT_ZERO (0)
#define _PTHREAD_KEY_T 
#define AUDIT_RECORD_MAGIC 0x828a0f1b
#define x86_THREAD_STATE32_COUNT ((mach_msg_type_number_t) ( sizeof (x86_thread_state32_t) / sizeof (int) ))
#define TASK_EXC_GUARD_VM_CORPSE 0x04
#define ALRMTYPE 0xff
#define __Reply__mach_port_subsystem__defined 
#define __FLT32X_MIN_10_EXP__ (-307)
#define KERN_KDGETENTROPY 16
#define p_starttime p_un.__p_starttime
#define HW_TARGET 26
#define EXC_SYSCALL 7
#define x86_AVX512_STATE32 19
#define VM_MEMORY_ROSETTA_RETURN_STACK 233
#define __UINTPTR_TYPE__ long unsigned int
#define PROC_FLAG_IOS_IMPPROMOTION 0x80000
#define MACH_MSGH_BITS_DENAP MACH_MSGH_BITS_RAISEIMP
#define __DARWIN_FD_ISSET(n,p) __darwin_fd_isset((n), (p))
#define NOTE_VM_PRESSURE_SUDDEN_TERMINATE 0x20000000
#define _SSIZE_T 
#define NDR_FLOAT_CRAY 2
#define NTOHS(x) (x) = ntohs((__uint16_t)x)
#define _MACH_THREAD_POLICY_H_ 
#define VM_PURGABLE_DEBUG_FAULT (0x2 << VM_PURGABLE_DEBUG_SHIFT)
#define array_size(arr) (sizeof(arr)/sizeof((arr)[0]))
#define __TVOS_10_0_1 100001
#define PTHREAD_KEYS_MAX 512
#define MACH_RCV_BODY_ERROR 0x1000400c
#define BADSIG SIG_ERR
#define _MACH_NDR_H_ 
#define mach_vm_trunc_page(x) ((mach_vm_offset_t)(x) & ~((signed)vm_page_mask))
#define _MACH_I386_THREAD_STATE_H_ 
#define ntohll(x) __DARWIN_OSSwapInt64(x)
#define __unreachable_ok_push _Pragma("GCC diagnostic push") _Pragma("GCC diagnostic ignored \"-Wunreachable-code\"")
#define __LDBL_MIN_10_EXP__ (-4931)
#define SYNC_POLICY_FIFO 0x0
#define MACH_PORT_LIMITS_INFO 1
#define __NDR_convert__char_rep__ 0
#define KERN_OSRELEASE 2
#define _MACH_SYNC_POLICY_H_ 
#define VM_PURGABLE_STATE_MIN 0
#define OSSwapBigToHostConstInt16(x) OSSwapConstInt16(x)
#define EXC_MACF_MAX 0x2FFFF
#define NMBCLUSTERS ((1024 * 1024) / MCLBYTES)
#define HOST_LOAD_INFO_COUNT ((mach_msg_type_number_t) (sizeof(host_load_info_data_t)/sizeof(integer_t)))
#define KERN_THREADNAME 71
#define __API_DEPRECATED_WITH_REPLACEMENT_BEGIN(...) 
#define HOST_CPU_LOAD_INFO 3
#define __Request__task_subsystem__defined 
#define MIN(a,b) (((a)<(b))?(a):(b))
#define A_GETCOND 37
#define FPS_DE 0x0002
#define VM_INHERIT_SHARE ((vm_inherit_t) 0)
#define SIG_SETMASK 3
#define __SIZEOF_LONG_LONG__ 8
#define HOST_NODE_PORT (19 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define EXCEPTION_DEFAULT 1
#define __Request__clock_priv_subsystem__defined 
#define VM_MEMORY_ROSETTA_EXECUTABLE_HEAP 234
#define MACH_VOUCHER_TRAP_STACK_LIMIT 256
#define EVFILT_VNODE (-4)
#define A_SETEXPAFTER 44
#define MAX_TRAILER_SIZE ((mach_msg_size_t)sizeof(mach_msg_max_trailer_t))
#define MACH_MSG_TYPE_PORT_RECEIVE MACH_MSG_TYPE_MOVE_RECEIVE
#define HOST_USER_NOTIFICATION_PORT (3 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define _POSIX_LOGIN_NAME_MAX 9
#define CPU_SUBTYPE_MC98601 ((cpu_subtype_t) 1)
#define _STRUCT_X86_AVX_STATE32 struct __darwin_i386_avx_state
#define KERN_KDTHRMAP 12
#define OSSwapBigToHostConstInt32(x) OSSwapConstInt32(x)
#define A_SETKMASK 5
#define _ASSERT_H_ 
#define __enum_closed 
#define THREAD_BASIC_INFO_COUNT ((mach_msg_type_number_t) (sizeof(thread_basic_info_data_t) / sizeof(natural_t)))
#define P_CONTINUED 0x00000080
#define EXC_ARITHMETIC 3
#define __FLT128_DECIMAL_DIG__ 36
#define HOST_NOTIFY_TYPE_MAX 1
#define __GCC_ATOMIC_LLONG_LOCK_FREE 2
#define __DARWIN_ALIGN(p) ((__darwin_size_t)((__darwin_size_t)(p) + __DARWIN_ALIGNBYTES) &~ __DARWIN_ALIGNBYTES)
#define KERN_AIOMAX 46
#define CPU_SUBTYPE_VAX_ALL ((cpu_subtype_t) 0)
#define MACH_VOUCHER_ATTR_MANAGER_NULL ((mach_voucher_attr_manager_t) 0)
#define TF_64B_DATA 0x00000002
#define __TVOS_14_1 140100
#define __TVOS_14_3 140300
#define __TVOS_14_5 140500
#define EV_CLEAR 0x0020
#define X86_EXCEPTION_STATE64_COUNT x86_EXCEPTION_STATE64_COUNT
#define SM_SHARED_ALIASED 7
#define THREAD_BACKGROUND_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (thread_background_policy_data_t) / sizeof (integer_t)))
#define SA_USERSPACE_MASK (SA_ONSTACK | SA_RESTART | SA_RESETHAND | SA_NOCLDSTOP | SA_NODEFER | SA_NOCLDWAIT | SA_SIGINFO)
#define VM_REGION_BASIC_INFO_COUNT ((mach_msg_type_number_t) (sizeof(vm_region_basic_info_data_t)/sizeof(int)))
#define __enum_open 
#define NOTE_TRACKERR 0x00000002
#define EXC_MASK_BREAKPOINT (1 << EXC_BREAKPOINT)
#define PTRDIFF_MAX INTMAX_MAX
#define __FLT32_HAS_QUIET_NAN__ 1
#define __FLT_DECIMAL_DIG__ 9
#define EXC_EMULATION 4
#define __UINT_FAST16_MAX__ 0xffff
#define _MACH_EXCEPTION_TYPES_H_ 
#define va_copy(d,s) __builtin_va_copy(d,s)
#define MACH_PORT_STATUS_FLAG_STRICT_GUARD 0x04
#define mach_msg_kind_t mach_port_seqno_t
#define EFL_IOPL 0x00003000
#define __POSIX_C_DEPRECATED(ver) ___POSIX_C_DEPRECATED_STARTING_ ##ver
#define _MODE_T 
#define CPU_SUBTYPE_UVAXII ((cpu_subtype_t) 6)
#define CPU_TYPE_I386 CPU_TYPE_X86
#define __LDBL_NORM_MAX__ 1.18973149535723176502126385303097021e+4932L
#define PATH_MAX 1024
#define _OS_OSBYTEORDER_H 
#define x86_EXCEPTION_STATE64_COUNT ((mach_msg_type_number_t) ( sizeof (x86_exception_state64_t) / sizeof (int) ))
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_0(x) 
#define EXC_I386_INVOPFLT 6
#define VM_FLAGS_SUPERPAGE_SHIFT 16
#define MACH_MSG_TYPE_MAKE_SEND 20
#define rdtsc() ({ uint32_t low, high; __asm__ volatile("rdtsc" : "=a" (high), "=d" (low)); ((uint64_t) high) << 32 | low; })
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define CTLTYPE_STRUCT CTLTYPE_OPAQUE
#define _OS__OSBYTEORDER_H 
#define FD_CLR(n,p) __DARWIN_FD_CLR(n, p)
#define EXC_I386_GPFLT 13
#define AUDIT_HARD_LIMIT_FREE_BLOCKS 4
#define HOST_COALITION_PORT (15 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define AUDIT_CTLMODE_NORMAL ((unsigned char)1)
#define VM_MAP_NULL ((vm_map_t) 0)
#define GET_MAP_MEM(flags) ((((unsigned int)(flags)) >> 24) & 0xFF)
#define MACH_NOTIFY_DEAD_NAME (MACH_NOTIFY_FIRST + 010)
#define MACH_PORT_DNREQUESTS_SIZE 3
#define VM_PAGE_INFO_BASIC_COUNT ((mach_msg_type_number_t) (sizeof(vm_page_info_basic_data_t)/sizeof(int)))
#define _MACH_I386_THREAD_STATUS_H_ 
#define _POSIX_ARG_MAX 4096
#define VM_PAGE_QUERY_PAGE_REUSABLE 0x800
#define MACH_PORT_TYPE_NONE ((mach_port_type_t) 0L)
#define VM_MEMORY_GUARD 31
#define _MACH_MACHINE__STRUCTS_H_ 
#define x86_FLOAT_STATE32 2
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_1(x) x
#define __RequestUnion__mach_port_subsystem__defined 
#define _USECONDS_T 
#define INT_LEAST16_MAX INT16_MAX
#define AU_DEFAUDITID (uid_t)(-1)
#define __SSE3__ 1
#define __UINT_FAST8_TYPE__ unsigned char
#define MAXSYMLINKS 32
#define CPU_SUBTYPE_VAX8650 ((cpu_subtype_t) 10)
#define __ReplyUnion__processor_subsystem__defined 
#define _U_INT16_T 
#define PVM 4
#define __P(protos) protos
#define _SECURE__STRING_H_ 
#define NOTE_VM_ERROR 0x10000000
#define FP_PREC_53B 2
#define _PTHREAD_COND_T 
#define EXC_I386_BPT 2
#define THREAD_FLAVOR_READ 1
#define MACH_RCV_VOUCHER 0x00000800
#define __IPHONE_8_2 80200
#define __IPHONE_9_0 90000
#define __IPHONE_9_1 90100
#define __IPHONE_9_2 90200
#define __IPHONE_9_3 90300
#define __ATOMIC_ACQ_REL 4
#define __ATOMIC_RELEASE 3
#define FPE_FLTUND 3
#define MACH_PORT_STATUS_FLAG_NO_GRANT 0x80
#define TASK_DEBUG_INFO_INTERNAL 29
#define EFL_VIF 0x00080000
