#define sa_sigaction __sigaction_u.__sa_sigaction
#define TCP_KEEPCNT 0x102
#define MACH_SEND_TIMEOUT 0x00000010
#define CPU_STATE_IDLE 2
#define MACH_SEND_MSG_TOO_SMALL 0x10000008
#define x86_DEBUG_STATE64_COUNT ((mach_msg_type_number_t) ( sizeof (x86_debug_state64_t) / sizeof (int) ))
#define _Nullable 
#define VM_BEHAVIOR_FREE ((vm_behavior_t) 6)
#define __strftimelike(fmtarg) __attribute__((__format__ (__strftime__, fmtarg, 0)))
#define __DBL_MIN_EXP__ (-1021)
#define HAVE_PTY __UNIX__ && LIBC_HAVE_FORK && !__sun
#define TCPOPT_SACK_PERMITTED 4
#define HOST_NOTIFY_CALENDAR_SET 1
#define EMULTIHOP 95
#define EXC_MACF_MIN 0x20000
#define ut64 unsigned long long
#define EAI_BADHINTS 12
#define ut8p_ld(x) ((x)[3]|((x)[2]<<8)|((x)[1]<<16)|((x)[0]<<24))
#define EFL_VIP 0x00100000
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_2(x) x
#define _MACH_KERN_RETURN_H_ 
#define _UINT64_T 
#define TIOCDSIMICROCODE _IO('t', 85)
#define _POSIX_THREAD_PRIORITY_SCHEDULING (-1)
#define PF_RESERVED_36 AF_RESERVED_36
#define HOST_BASIC_INFO_COUNT ((mach_msg_type_number_t) (sizeof(host_basic_info_data_t)/sizeof(integer_t)))
#define PRIO_MIN -20
#define IS_WHITECHAR(x) ((x) == ' ' || (x)=='\t' || (x) == '\n' || (x) == '\r')
#define __UINT_LEAST16_MAX__ 0xffff
#define FPC_PC_24 0x0000
#define CPU_SUBTYPE_SPARC_ALL ((cpu_subtype_t) 0)
#define KERN_TERMINATED 37
#define tcp6_seq tcp_seq
#define host_get_kextd_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_KEXTD_PORT, (port)))
#define _PTHREAD_IMPL_H_ 
#define host_set_io_master_port(host,port) (KERN_INVALID_ARGUMENT)
#define THREAD_CONVERT_THREAD_STATE_FROM_SELF 2
#define R_LIB_SYMFUNC "radare_plugin_function"
#define CMSG_NXTHDR(mhdr,cmsg) ((char *)(cmsg) == (char *)0L ? CMSG_FIRSTHDR(mhdr) : ((((unsigned char *)(cmsg) + __DARWIN_ALIGN32((__uint32_t)(cmsg)->cmsg_len) + __DARWIN_ALIGN32(sizeof(struct cmsghdr))) > ((unsigned char *)(mhdr)->msg_control + (mhdr)->msg_controllen)) ? (struct cmsghdr *)0L : (struct cmsghdr *)(void *)((unsigned char *)(cmsg) + __DARWIN_ALIGN32((__uint32_t)(cmsg)->cmsg_len))))
#define Color_BBGCYAN "\x1b[106m"
#define _POSIX2_SW_DEV 200112L
#define MACH_MSG_PHYSICAL_COPY 0
#define __FLT128_MAX_10_EXP__ 4932
#define F_GETPROTECTIONCLASS 63
#define ST64_ADD_OVFCHK(a,x) ((((x) > 0) && ((a) > ST64_MAX - (x))) || (((x) < 0) && (a) < ST64_MIN - (x)))
#define RE_DUP_MAX 255
#define x86_DEBUG_STATE32_COUNT ((mach_msg_type_number_t) ( sizeof (x86_debug_state32_t) / sizeof (int) ))
#define VM_MEMORY_CARBON VM_MEMORY_CORESERVICES
#define IN_LINKLOCAL(i) (((u_int32_t)(i) & IN_CLASSB_NET) == IN_LINKLOCALNETNUM)
#define _SC_NGROUPS_MAX 4
#define VM_MAP_INSPECT_NULL ((vm_map_inspect_t) 0)
#define CALENDAR_CLOCK 1
#define HAVE_SIGACTION 0
#define IN6ADDR_MULTICAST_PREFIX IN6MASK8
#define TASK_EXC_GUARD_ALL 0xff
#define r_io_submap_from(sm) (r_io_map_begin (sm))
#define HOST_EXPIRED_TASK_INFO 6
#define FD_COPY(f,t) __DARWIN_FD_COPY(f, t)
#define __DARWIN_NFDBITS (sizeof(__int32_t) * __DARWIN_NBBY)
#define _SC_SPIN_LOCKS 80
#define _PC_MAX_INPUT 3
#define _WATTR_OK (1<<16)
#define task_get_bootstrap_port(task,port) (task_get_special_port((task), TASK_BOOTSTRAP_PORT, (port)))
#define _T_WCHAR_ 
#define _SC_IPV6 118
#define R_BIG_FORMAT_STR_LEN 9
#define MCAST_JOIN_GROUP 80
#define NI_MAXSERV 32
#define MACH_MSG_GUARD_FLAGS_IMMOVABLE_RECEIVE 0x0001
#define MACH_VOUCHER_ATTR_KEY_TEST ((mach_voucher_attr_key_t)8)
#define _SC_XOPEN_REALTIME 111
#define _GCC_MAX_ALIGN_T 
#define __UINTPTR_TYPE__ long unsigned int
#define R_NONNULL 
#define _SYS_QOS_H 
#define OSSwapHostToLittleConstInt64(x) ((uint64_t)(x))
#define R_REGEX_ERANGE 11
#define __MAC_10_13_1 101301
#define __MAC_10_13_2 101302
#define __MAC_10_13_4 101304
#define RUNE_CORNER_TL "┌"
#define CPU_SUBTYPE_ARM64E ((cpu_subtype_t) 2)
#define VM_FLAGS_OVERWRITE 0x4000
#define _SC_EXPR_NEST_MAX 14
#define GET_RCV_ELEMENTS(y) (((y) >> 24) & 0xf)
#define IPPROTO_SEP 33
#define SIGBUS 10
#define PENDIN 0x20000000
#define NL_NMAX 1
#define HAVE_LIBUV 1
#define __enum_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_open
#define VM_MEMORY_EAR_DECODER 102
#define IPPROTO_IDPR 35
#define IPPROTO_NVPII 11
#define EXC_BAD_INSTRUCTION 2
#define TASK_SECURITY_TOKEN 13
#define __deprecated_msg(_msg) __attribute__((__deprecated__(_msg)))
#define r_rbtree_iter_has(it) ((it)->len)
#define __DARWIN_howmany(x,y) ((((x) % (y)) == 0) ? ((x) / (y)) : (((x) / (y)) + 1))
#define __DARWIN_INODE64(sym) __asm("_" __STRING(sym) __DARWIN_SUF_64_BIT_INO_T)
#define HAVE_JEMALLOC 1
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_0(x) 
#define __CHAR_BIT__ 8
#define UT32_MAX 0xFFFFFFFFU
#define _XOPEN_CRYPT (1)
#define _MACH_NDR_H_ 
#define MACH_PORT_TYPE_SEND MACH_PORT_TYPE(MACH_PORT_RIGHT_SEND)
#define _TIME_H_ 
#define VM_MEMORY_SHARED_PMAP 32
#define IOCPARM_LEN(x) (((x) >> 16) & IOCPARM_MASK)
#define SHRT_MAX __SHRT_MAX__
#define IPPROTO_IPCOMP 108
#define _PTHREAD_COND_SIG_init 0x3CB0B1BB
#define MPG_IMMOVABLE_RECEIVE 0x02
#define SIGTTIN 21
#define __INT8_MAX__ 0x7f
#define PT_FIRSTMACH 32
#define IOPOL_VFS_STATFS_NO_DATA_VOLUME_DEFAULT 0
#define EACCES 13
#define FF0 0x00000000
#define FF1 0x00004000
#define _SC_COLL_WEIGHTS_MAX 13
#define _PTHREAD_RWLOCKATTR_T 
#define TIOCMSDTRWAIT _IOW('t', 91, int)
#define MACH_TASK_BASIC_INFO_COUNT (sizeof(mach_task_basic_info_data_t) / sizeof(natural_t))
#define CREAD 0x00000800
#define EDESTADDRREQ 39
#define CPU_SUBTYPE_MIPS_R2000 ((cpu_subtype_t) 5)
#define R_MALLOC_WRAPPER 0
#define _SC_XBS5_ILP32_OFF32 122
#define __Reply__vm_map_subsystem__defined 
#define PARENB 0x00001000
#define PIPE_BUF 512
#define IP_TTL 4
#define MACH_SEND_INVALID_REPLY 0x10000009
#define NET_RT_TRASH 5
#define MACH_PORT_TYPE_PORT_OR_DEAD (MACH_PORT_TYPE_PORT_RIGHTS|MACH_PORT_TYPE_DEAD_NAME)
#define R_MODE_RADARE 0x001
#define EXC_MASK_GUARD (1 << EXC_GUARD)
#define __OSX_AVAILABLE_BUT_DEPRECATED(_osxIntro,_osxDep,_iosIntro,_iosDep) 
#define stderr __stderrp
#define MACH_SEND_SYNC_BOOTSTRAP_CHECKIN 0x00800000
#define MACH_MSG_TYPE_DISPOSE_SEND_ONCE 26
#define SIOCGIFPSRCADDR _IOWR('i', 63, struct ifreq)
#define B10100 20
#define TASK_BASIC_INFO_COUNT (sizeof(task_basic_info_data_t) / sizeof(natural_t))
#define TASK_BOOTSTRAP_PORT 4
#define va_start(v,l) __builtin_va_start(v,l)
#define R2_VERSION_COMMIT 27746
#define PRIiLEAST8 PRIi8
#define SOCK_RDM 4
#define TH_CWR 0x80
#define TIOCSSIZE TIOCSWINSZ
#define ITIMER_VIRTUAL 1
#define __INT32_C(c) c
#define DT_LNK 10
#define MACH_MSG_TYPE_POLYMORPHIC ((mach_msg_type_name_t) -1)
#define RTLD_NOLOAD 0x10
#define _PTHREAD_CONDATTR_T 
#define KMOD_RETURN_FAILURE KERN_FAILURE
#define PF_DECnet AF_DECnet
#define MACH_NOTIFY_SEND_POSSIBLE (MACH_NOTIFY_FIRST + 002)
#define MINSIGSTKSZ 32768
#define IPPROTO_VISA 70
#define host_get_node_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_NODE_PORT, (port)))
#define IPV6_CHECKSUM 26
#define EMLINK 31
#define __ORDER_LITTLE_ENDIAN__ 1234
#define MCAST_UNBLOCK_SOURCE 85
#define IP_MAX_MEMBERSHIPS 4095
#define AI_NUMERICSERV 0x00001000
#define HAVE_LIB_SSL 0
#define IPV6CTL_AUTO_FLOWLABEL 17
#define VALUE_TYPE void *
#define KERN_RESOURCE_SHORTAGE 6
#define SIOCGIFADDR _IOWR('i', 33, struct ifreq)
#define UPDATE_IO_STATS(info,size) { info.count++; info.size += size; }
#define R_JOIN_2_PATHS(p1,p2) p1 R_SYS_DIR p2
#define R_PROTOBUF_H 
#define SIOCGIFDEVMTU _IOWR('i', 68, struct ifreq)
#define __DARWIN_PDP_ENDIAN 3412
#define MATTR_REPLICATE 4
#define __DBL_DENORM_MIN__ ((double)4.94065645841246544176568792868221372e-324L)
#define CLASS_PRIVATE 0xC0
#define NDR_FLOAT_VAX 1
#define _SYS_PTRACE_H_ 
#define r_vector_enumerate(vec,it,i) if (!r_vector_empty (vec)) for (it = (void *)(vec)->a, i = 0; i < (vec)->len; it = (void *)((char *)it + (vec)->elem_size), i++)
#define Color_BBGGREEN "\x1b[102m"
#define IOPOL_TYPE_VFS_IGNORE_CONTENT_PROTECTION 6
#define RColor_BGBLACK RCOLOR(ALPHA_BG, 12, 12, 12, 0x00, 0x00, 0x00, 0)
#define VM_PROT_ALL (VM_PROT_READ|VM_PROT_WRITE|VM_PROT_EXECUTE)
#define UT32_MIN 0U
#define __FLT32X_DECIMAL_DIG__ 17
#define F_RDLCK 1
#define TIOCSBRK _IO('t', 123)
#define __IOS_PROHIBITED 
#define x86_AVX_STATE_COUNT ((mach_msg_type_number_t) (sizeof(x86_avx_state_t)/sizeof(unsigned int)))
#define EXC_MASK_BAD_INSTRUCTION (1 << EXC_BAD_INSTRUCTION)
#define CPU_SUBTYPE_PENTIUM_3_M CPU_SUBTYPE_INTEL(8, 1)
#define TTYDEF_IFLAG (BRKINT | ICRNL | IMAXBEL | IXON | IXANY)
#define SHRT_MIN (-SHRT_MAX - 1)
#define _SC_SPORADIC_SERVER 81
#define MACH_SEND_NO_BUFFER 0x1000000d
#define __sfeof(p) (((p)->_flags & __SEOF) != 0)
#define R_NEW(x) (x*)malloc(sizeof(x))
#define CPU_SUBTYPE_MIPS_R2000a ((cpu_subtype_t) 4)
#define ut8p_bd(x) ((x)[0]|((x)[1]<<8)|((x)[2]<<16)|((x)[3]<<24))
#define R2_THEMES R_JOIN_4_PATHS ("share", "radare2", R2_VERSION, "cons")
#define IPPROTO_WBEXPAK 79
#define R_REGEX_INVARG 16
#define _SC_THREAD_PRIO_INHERIT 87
#define MPO_TEMPOWNER 0x04
#define ut8p_bq(x) ((x)[0]|((x)[1]<<8)|((x)[2]<<16)|((x)[3]<<24)|((x)[4]<<32)|((x)[5]<<40)|((x)[6]<<48)|((x)[7]<<56))
#define TAG_UTCTIME 0x17
#define ut8p_bw(x) ((x)[0]|((x)[1]<<8))
#define PROC_FLAG_IOS_APPLEDAEMON 0x20000
#define _SC_PHYS_PAGES 200
#define MEMORY_OBJECT_DATA_PURGE 0x4
#define Color_HLDELETE Color_BGDELETE Color_DELETE
#define IP_FW_GET 44
#define IPPROTO_FRAGMENT 44
#define _XOPEN_VERSION 600
#define r_vector_foreach(vec,it) if (!r_vector_empty (vec)) for (it = (void *)(vec)->a; (char *)it != (char *)(vec)->a + ((vec)->len * (vec)->elem_size); it = (void *)((char *)it + (vec)->elem_size))
#define OSSwapHostToLittleInt16(x) ((uint16_t)(x))
#define IPPORT_HIFIRSTAUTO 49152
#define r_vector_upper_bound(vec,x,i,cmp) do { size_t h = (vec)->len, m; for (i = 0; i < h; ) { m = i + ((h - i) >> 1); if ((cmp (x, ((char *)(vec)->a + (vec)->elem_size * m))) < 0) { h = m; } else { i = m + 1; } } } while (0)
#define IPC_SPACE_READ_NULL ((ipc_space_read_t) 0)
#define ___POSIX_C_DEPRECATED_STARTING_199309L 
#define _CTYPE_SW0 0x20000000L
#define _CTYPE_SW1 0x40000000L
#define _CTYPE_SW2 0x80000000L
#define _CTYPE_SW3 0xc0000000L
#define _LIMITS_H_ 
#define R_LINE_BUFSIZE 4096
#define VM_BEHAVIOR_SEQUENTIAL ((vm_behavior_t) 2)
#define MACH_SEND_NO_GRANT_DEST 0x10000016
#define SDB_OPTION_SYNC (1 << 0)
#define _POSIX_PATH_MAX 256
#define _CTYPE_SWM 0xe0000000L
#define _CTYPE_SWS 30
#define __MigTypeCheck 1
#define w_termsig w_T.w_Termsig
#define __ILP32_OFF32 (-1)
#define R2_HOME_BIN R_JOIN_3_PATHS (R2_HOME_DATADIR, "prefix", "bin")
#define __x86_64 1
#define PTHREAD_MUTEX_POLICY_FIRSTFIT_NP 3
#define __DARWIN_SUF_1050 "$1050"
#define _OS__OSBYTEORDERI386_H 
#define VM_BEHAVIOR_ZERO_WIRED_PAGES ((vm_behavior_t) 7)
#define HOST_RESOURCE_SIZES 4
#define EQUIV_CLASS_MAX 2
#define IPPROTO_XNET 15
#define TASK_SCHED_FIFO_INFO 12
#define VM_BEHAVIOR_REUSABLE ((vm_behavior_t) 8)
#define PTHREAD_PROCESS_SHARED 1
#define TASK_KERNELMEMORY_INFO 7
#define __INTPTR_WIDTH__ 64
#define SIGPROF 27
#define R_BORROW 
#define time_value_add(result,addend) { (result)->microseconds += (addend)->microseconds; (result)->seconds += (addend)->seconds; if ((result)->microseconds >= TIME_MICROS_MAX) { (result)->microseconds -= TIME_MICROS_MAX; (result)->seconds++; } }
#define IPV6_MAX_SOCK_SRC_FILTER 128
#define r_return_if_fail(expr) do { if (!(expr)) { H_LOG_ (R_LOGLVL_WARN, "%s: assertion '%s' failed (line %d)\n", R_FUNCTION, #expr, __LINE__); return; } } while (0)
#define bool _Bool
#define host_get_dynamic_pager_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_DYNAMIC_PAGER_PORT, (port)))
#define _SC_CPUTIME 68
#define __UINT_FAST64_MAX__ 0xffffffffffffffffULL
#define __SIG_ATOMIC_TYPE__ int
#define FPS_OE 0x0008
#define ls_foreach_safe(list,it,tmp,pos) if ((list)) for (it = list->head; it && (pos = it->data) && ((tmp = it->n) || 1); it = tmp)
#define __DBL_MIN_10_EXP__ (-307)
#define R2_HOME_DATADIR R_JOIN_3_PATHS (".local", "share", "radare2")
#define SYNC_POLICY_MAX 0x7
#define SV_INTERRUPT SA_RESTART
#define VM_USRSTACK64 ((user_addr_t) 0x00007FFEEFC00000ULL)
#define IPPROTO_MEAS 19
#define MACH_MSG_NULL (mach_msg_header_t *) 0
#define PRIi32 "i"
#define __cold __attribute__((__cold__))
#define VM_SYNC_REUSABLEPAGES ((vm_sync_t) 0x40)
#define R2_HOME_CACHEDIR R_JOIN_2_PATHS (".cache", "radare2")
#define KOBJECT_DESCRIPTION_LENGTH 512
#define _SC_MEMLOCK_RANGE 31
#define VM_INHERIT_NONE ((vm_inherit_t) 2)
#define EXC_I386_DIVERR 0
#define DIRSEP '/'
#define __SIG_ATOMIC_WIDTH__ 32
#define IPCTL_INTRQDROPS 11
#define VM_PAGE_QUERY_PAGE_CS_NX 0x400
#define i386_THREAD_STATE_COUNT ((mach_msg_type_number_t) ( sizeof (i386_thread_state_t) / sizeof (int) ))
#define MACH_RCV_INVALID_TRAILER 0x1000400f
#define KEV_DL_SIFMTU 3
#define VM_MEMORY_ANALYSIS_TOOL 10
#define SDB_OPTION_NOSTAMP (1 << 1)
#define IPPROTO_TRUNK1 23
#define IPPROTO_TRUNK2 24
#define TASK_NAME_NULL ((task_name_t) 0)
#define INLCR 0x00000040
#define _MACH_INTERFACE_H_ 
#define __FLT32_HAS_DENORM__ 1
#define S_ISGID 0002000
#define R_SELWIDGET_MAXH 15
#define S_IFBLK 0060000
#define B1110 14
#define host_set_filecoordinationd_port(host,port) (host_set_special_port((host), HOST_FILECOORDINATIOND_PORT, (port)))
#define _POSIX_TRACE_EVENT_FILTER (-1)
#define CSTART CTRL('q')
#define __swift_unavailable(_msg) 
#define __DECONST(type,var) __CAST_AWAY_QUALIFIER(var, const, type)
#define err_dipc err_system(0x7)
#define F_RDADVISE 44
#define __UINT_FAST8_MAX__ 0xff
#define MSG_NOSIGNAL 0x80000
#define SYSTEM_CLOCK 0
#define VM_MEMORY_MALLOC 1
#define r_flist_foreach(it,pos) r_flist_rewind(it); while (r_flist_next (it) && (pos = r_flist_get (it)))
#define h_addr h_addr_list[0]
#define _LIMITS_H___ 
#define MSG_WAITALL 0x40
#define DST_AUST 2
#define __kpi_deprecated(_msg) 
#define R_TIME_PROFILE_BEGIN do{}while(0)
#define SCNdLEAST8 SCNd8
#define KERN_SUCCESS 0
#define mach_task_self() mach_task_self_
#define HOST_EXTMOD_INFO64 5
#define _WCHAR_T_DEFINED 
#define R_LOG(lvl,tag,fmtstr,...) r_log (MACRO_LOG_FUNC, __FILE__, __LINE__, lvl, tag, fmtstr, ##__VA_ARGS__);
#define _POSIX_V7_LP64_OFF64 __LP64_OFF64
#define _XOPEN_XCU_VERSION 4
#define TH_ECE 0x40
#define CPU_TYPE_MC88000 ((cpu_type_t) 13)
#define HOST_MAX_SPECIAL_PORT HOST_IOCOMPRESSIONSTATS_PORT
#define TASK_HOST_PORT 2
#define ENOMEM 12
#define ut8p_lq(x) ((x)[7]|((x)[6]<<8)|((x)[5]<<16)|((x)[4]<<24)|((x)[3]<<32)|((x)[2]<<40)|((x)[1]<<48)|((x)[0]<<56))
#define IPPROTO_MUX 18
#define ut8p_lw(x) ((x)[1]|((x)[0]<<8))
#define __pic__ 2
#define __OSX_AVAILABLE_BUT_DEPRECATED_MSG(_osxIntro,_osxDep,_iosIntro,_iosDep,_msg) 
#define B10101 21
#define R_STR_DUP(x) ((x) ? strdup ((x)) : NULL)
#define OSSwapConstInt64(x) __DARWIN_OSSwapConstInt64(x)
#define EXC_I386_PGFLT 14
#define _ASSERT_H_ 
#define VM_VOLATILE_GROUP_MASK (7 << VM_VOLATILE_GROUP_SHIFT)
#define NOKERNINFO 0x02000000
#define KEV_DL_WAKEFLAGS_CHANGED 17
#define __INT_LEAST8_WIDTH__ 8
#define _CS_PATH 1
#define MACHINE_THREAD_STATE x86_THREAD_STATE
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffULL
#define r_oflist_free(x) r_oflist_deserialize (x), r_list_free (x)
#define IPPROTO_IPPC 67
#define __INT_LEAST8_MAX__ 0x7f
#define _ERRNO_T 
#define SIOCSIFNETMASK _IOW('i', 22, struct ifreq)
#define B10110 22
#define err_none (mach_error_t)0
#define TASK_AUDIT_TOKEN 15
#define _processor_set_user_ 
#define R_PTR_ALIGN(v,t) ((char *)(((size_t)(v) ) & ~(t - 1)))
#define _XBS5_LPBIG_OFFBIG __LPBIG_OFFBIG
#define IN_CLASSB_NSHIFT 16
#define R_VERSION_H 1
#define __DARWIN_IPPORT_RESERVED 1024
#define CPUFAMILY_POWERPC_G3 0xcee41549
#define KEV_DL_SIFMEDIA 5
#define __deprecated_enum_msg(_msg) 
#define _MACH_MACH_TYPES_H_ 
#define RUNE_ARROW_RIGHT ">"
#define R_SYS_ENDIAN_LITTLE 1
#define PT_FORCEQUOTA 30
#define __RCSID(s) __IDSTRING(rcsid,s)
#define R_LOG_SILLY(fmtstr,...) r_log (MACRO_LOG_FUNC, __FILE__, __LINE__, R_LOGLVL_SILLY, NULL, fmtstr, ##__VA_ARGS__);
#define __SCCSID(s) __IDSTRING(sccsid,s)
#define MPO_QLIMIT 0x02
#define IPPROTO_IGRP 88
#define S_IXOTH 0000001
#define TCPOPT_TIMESTAMP 8
#define KERN_INVALID_OBJECT 29
#define R2_SKIP_LIST_H 
#define LOCAL_PEEREPID 0x003
#define ECHOCTL 0x00000040
#define __ReplyUnion__processor_set_subsystem__defined 
#define MACH_PORT_QLIMIT_MIN MACH_PORT_QLIMIT_ZERO
#define _PTHREAD_MUTEX_T 
#define VWERASE 4
#define __FLT64X_IS_IEC_60559__ 2
#define IPV6_PORTRANGE 14
#define KERN_MEMORY_DATA_MOVED 24
#define B10111 23
#define TIOCIXOFF _IO('t', 128)
#define _POSIX2_UPE 200112L
#define __WATCHOS_5_0 50000
#define __WATCHOS_5_1 50100
#define __WATCHOS_5_3 50300
#define ERR_SUCCESS (mach_error_t)0
#define SSZT_SUB_OVFCHK(a,b) SSZT_ADD_OVFCHK(a,-(b))
#define FIRST_EXCEPTION 1
#define SCNd16 "hd"
#define MAP_MEM_INNERWBACK 5
#define static_assert _Static_assert
#define howmany(x,y) __DARWIN_howmany(x, y)
#define MACH_PORT_STATUS_FLAG_TEMPOWNER 0x01
#define NAME_MAX 255
#define MACH_VOUCHER_ATTR_KEY_BITS MACH_VOUCHER_ATTR_KEY_USER_DATA
#define CPU_SUBTYPE_LIB64 0x80000000
#define ___POSIX_C_DEPRECATED_STARTING_200809L 
#define SCHAR_MAX __SCHAR_MAX__
#define __UINT_LEAST8_MAX__ 0xff
#define IPV6_2292HOPOPTS 22
#define VM_MAX_ADDRESS ((vm_offset_t) 0xFFE00000)
#define IPPROTO_MHRP 48
#define KEV_DL_LOW_POWER_MODE_CHANGED 30
#define EXC_I386_EXTOVR 4
#define VM_LIB64_SHR_DATA ((user_addr_t) 0x00007FFF60000000ULL)
#define __options_closed_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_closed __enum_options
#define R_MODE_ARRAY 0x010
#define IOC_DIRMASK (__uint32_t)0xe0000000
#define MACH_SEND_TOO_LARGE 0x1000000e
#define HOST_VM_INFO_REV1_COUNT ((mach_msg_type_number_t) (HOST_VM_INFO_REV2_COUNT - 1))
#define NETSVC_MRKNG_LVL_L2 1
#define PROC_FLAG_ADAPTIVE_IMPORTANT 0x200000
#define FUNC_ATTR_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#define _SC_SYMLOOP_MAX 120
#define __UINTMAX_TYPE__ long unsigned int
#define _CS_XBS5_LP64_OFF64_CFLAGS 28
#define host_set_coalition_port(host,port) (host_set_special_port((host), HOST_COALITION_PORT, (port)))
#define HOST_CAN_HAS_DEBUGGER 11
#define R_REGEX_EMPTY 14
#define R_REGEX_ILLSEQ 17
#define TODO(x) eprintf(__func__"  " x)
#define SCNd32 "d"
#define sprintf(str,...) __builtin___sprintf_chk (str, 0, __darwin_obsz(str), __VA_ARGS__)
#define _DELETE_OK (1<<12)
#define R_CONS_GREP_WORDS 10
#define PRIO_USER 2
#define _POSIX_THREAD_CPUTIME (-1)
#define Color_BLACK "\x1b[30m"
#define KERN_NOT_RECEIVER 7
#define IOPOL_APPLICATION IOPOL_STANDARD
#define IPV6_ADDR_MC_FLAGS(a) ((a)->s6_addr[1] & 0xf0)
#define _SC_THREAD_PRIO_PROTECT 88
#define SIOCSIFBRDADDR _IOW('i', 19, struct ifreq)
#define X86_DEBUG_STATE64_COUNT x86_DEBUG_STATE64_COUNT
#define MACH_MSG_VM_SPACE 0x00001000
#define ULONG_LONG_MAX (LONG_LONG_MAX * 2ULL + 1ULL)
#define TIOCEXCL _IO('t', 13)
#define AI_ADDRCONFIG 0x00000400
#define OSSwapHostToLittleConstInt16(x) ((uint16_t)(x))
#define THREAD_READ_PORT 3
#define B0001 1
#define CPUFAMILY_ARM_MONSOON_MISTRAL 0xe81e7ef6
#define F_BARRIERFSYNC 85
#define IPV6_BOUND_IF 125
#define R_PERM_RW (R_PERM_R|R_PERM_W)
#define R_PERM_RX (R_PERM_R|R_PERM_X)
#define __UINT32_MAX__ 0xffffffffU
#define OSWriteBigInt64(base,byteOffset,data) OSWriteSwapInt64(base, byteOffset, data)
#define __bool_true_false_are_defined 1
#define MACH_VOUCHER_ATTR_SEND_PREPROCESS ((mach_voucher_attr_recipe_command_t)5)
#define __PTHREAD_MUTEX_SIZE__ 56
#define B0010 2
#define B0011 3
#define R_MIN_DEFINED 
#define __SIZE_T 
#define OSReadLittleInt64(base,byteOffset) _OSReadInt64(base, byteOffset)
#define SCNd64 __SCN_64_LENGTH_MODIFIER__ "d"
#define _POSIX_PIPE_BUF 512
#define __I386_MCONTEXT_H_ 
#define SIGUSR1 30
#define USE_MONOTONIC_CLOCK 0
#define MACH_VOUCHER_TRAP_STACK_LIMIT 256
#define __TVOS_9_2 90200
#define UT8_MAX 0xFFU
#define host_set_host_port(host,port) (KERN_INVALID_ARGUMENT)
#define R_REGEX_EXTENDED 0001
#define VM_MEMORY_DYLD 60
#define PT_DENY_ATTACH 31
#define __FLT128_MIN_EXP__ (-16381)
#define RUNECODE_CURVE_CORNER_BL 0xd5
#define R_IO_UNDOS 64
#define RUNECODE_CURVE_CORNER_BR 0xd4
#define IOPOL_PASSIVE 2
#define VM_MEMORY_APPLICATION_SPECIFIC_16 255
#define MEMORY_OBJECT_CONTROL_NULL ((memory_object_control_t) 0)
#define VEOF 0
#define VEOL 1
#define WUNTRACED 0x00000002
#define KERN_CODE_SELECTOR 0x0008
#define NZERO 20
#define __IPHONE_12_4 120400
#define __API_DEPRECATED_WITH_REPLACEMENT_BEGIN(...) 
#define CPU_SUBTYPE_HPPA_7100 ((cpu_subtype_t) 0)
#define UINT16_C(v) (v)
#define IPV6CTL_V6ONLY 24
#define TCP_KEEPALIVE 0x10
#define IP_MULTICAST_VIF 14
#define IOPOL_VFS_IGNORE_PERMISSIONS_OFF 0
#define TRY_AGAIN 2
#define __OSX_DEPRECATED(_start,_dep,_msg) 
#define SCHAR_MIN (-SCHAR_MAX - 1)
#define R_BIG_DTYPE_TMP ut64
#define _SYS_TIME_H_ 
#define _PC_PRIO_IO 19
#define EXIT_FAILURE 1
#define IN6ADDR_ANY_INIT {{{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}}
#define SIOCGIFWAKEFLAGS _IOWR('i', 136, struct ifreq)
#define R_PERM_WX (R_PERM_W|R_PERM_X)
#define _SIZE_T_DEFINED_ 
#define IPV6CTL_AUTO_LINKLOCAL 35
#define ls_iter_cur(x) x->p
#define R_IO_SEEK_CUR 1
#define _STRUCT_MCONTEXT _STRUCT_MCONTEXT64
#define __SCHAR_MAX__ 0x7f
#define err_server err_system(0x2)
#define VM_LEDGER_FLAG_NO_FOOTPRINT 0x00000001
#define __IPHONE_6_0 60000
#define __IPHONE_6_1 60100
#define HOST_RESOURCE_NOTIFY_PORT (20 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define AF_ECMA 8
#define NFDBITS __DARWIN_NFDBITS
#define _FSOBJ_ID_T 
#define __FLT32X_HAS_QUIET_NAN__ 1
#define AI_V4MAPPED_CFG 0x00000200
#define KEV_INET6_CHANGED_ADDR 2
#define CPU_SUBTYPE_PENTIUM_M CPU_SUBTYPE_INTEL(9, 0)
#define R_SYS_BITS (R_SYS_BITS_32 | R_SYS_BITS_64)
#define IPPROTO_EON 80
#define __INT64_C(c) c ## LL
#define KERN_NODE_DOWN 47
#define MACH_SEND_INVALID_CONTEXT 0x10000012
#define SCNuLEAST64 SCNu64
#define SA_SIGINFO 0x0040
#define R_REGEX_ITOA 0400
#define r_skiplist_length(list) (list->size)
#define __FLT_MAX__ 3.40282346638528859811704183484516925e+38F
#define IPCTL_FORWARDING 1
#define MACH_PORT_STATUS_FLAG_TASKPTR 0x20
#define VM_FLAGS_ALIAS_MASK 0xFF000000
#define MACH_MSG_OPTION_NONE 0x00000000
#define __MAC_11_3 110300
#define __Request__processor_subsystem__defined 
#define R_CONS_CURSOR_DOWN "\x1b[B"
#define NSEC_PER_USEC 1000ull
#define _SYS_TERMIOS_H_ 
#define TIOCSTART _IO('t', 110)
#define IPV6PROTO_MAXID (IPPROTO_PIM + 1)
#define R2_HOME_RC R_JOIN_2_PATHS (R2_HOME_CONFIGDIR, "radare2rc")
#define MAC_OS_X_VERSION_10_10_2 101002
#define MAC_OS_X_VERSION_10_10_3 101003
#define CPU_TYPE_HPPA ((cpu_type_t) 11)
#define MACH_VOUCHER_ATTR_REMOVE ((mach_voucher_attr_recipe_command_t)2)
#define PF_LAT AF_LAT
#define VM_MEMORY_SQLITE 62
#define MSG_NEEDSA 0x10000
#define TCP_NOTSENT_LOWAT 0x201
#define DEFFILEMODE (S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH|S_IWOTH)
#define _SC_THREAD_THREADS_MAX 94
#define NO_ADDRESS NO_DATA
#define SI_USER 0x10001
#define __API_UNAVAILABLE_BEGIN_GET_MACRO(...) 
#define _SC_2_UPE 25
#define __SIZEOF_INT__ 4
#define S_IRWXO 0000007
#define S_IRWXU 0000700
#define SIOCSIFKPI _IOW('i', 134, struct ifreq)
#define VSTATUS 18
#define Color_BGWHITE "\x1b[47m"
#define Color_BLUE "\x1b[34m"
#define _MACH_TASK_POLICY_H_ 
#define _MACH_I386_PROCESSOR_INFO_H_ 
#define IPPROTO_SCTP 132
#define VM_VOLATILE_MAKE_LAST_IN_GROUP (0 << VM_VOLATILE_ORDER_SHIFT)
#define _SYS_TTYCOM_H_ 
#define CPU_SUBTYPE_MC68030_ONLY ((cpu_subtype_t) 3)
#define PF_VLAN ((uint32_t)0x766c616e)
#define SCNxFAST64 SCNx64
#define S_IFMT 0170000
#define ALTWERASE 0x00000200
#define B11000 24
#define B11001 25
#define PT_READ_D 2
#define CLOCK_REALTIME _CLOCK_REALTIME
#define IPCTL_INTRQMAXLEN 10
#define __IPHONE_5_1 50100
#define TH_ACCEPT (TH_FIN|TH_SYN|TH_RST|TH_ACK)
#define Color_RESET_TERMINAL "\x1b" "c\x1b(K\x1b[0m\x1b[J\x1b[?25h"
#define SCNd8 __PRI_8_LENGTH_MODIFIER__ "d"
#define HAVE_ARC4RANDOM_UNIFORM 0
#define PRIuFAST16 PRIu16
#define _SC_VERSION 8
#define _SC_RE_DUP_MAX 16
#define IPPROTO_EGP 8
#define B11010 26
#define B11011 27
#define __USER_LABEL_PREFIX__ _
#define CPU_SUBTYPE_POWERPC_604 ((cpu_subtype_t) 6)
#define EXC_I386_ENOEXTFLT 32
#define CMSG_LEN(l) (__DARWIN_ALIGN32(sizeof(struct cmsghdr)) + (l))
#define UT32_ALIGN(x) (x + (x - (x % sizeof (ut32))))
#define VM_REGION_SUBMAP_INFO_V1_SIZE (VM_REGION_SUBMAP_INFO_V2_SIZE - sizeof (vm_object_id_t) )
#define VM_PROT_NONE ((vm_prot_t) 0x00)
#define ENEEDAUTH 81
#define SCNx8 __PRI_8_LENGTH_MODIFIER__ "x"
#define SEMAPHORE_NULL ((semaphore_t) 0)
#define MACH_SEND_IMPORTANCE 0x00080000
#define MAP_MEM_POSTED_REORDERED 8
#define err_us err_system(0x1)
#define PTHREAD_CANCEL_DEFERRED 0x02
#define IN_BADCLASS(i) (((u_int32_t)(i) & 0xf0000000) == 0xf0000000)
#define MACRO_WEAK_SYM __attribute__ ((weak))
#define R2_FLAGS R_JOIN_4_PATHS ("share", "radare2", R2_VERSION, "flag")
#define KERN_RIGHT_EXISTS 21
#define RTLD_NODELETE 0x80
#define CREPRINT CTRL('r')
#define WCONTINUED 0x00000010
#define VM_MAKE_TAG(tag) ((tag) << 24)
#define __assert(e,file,line) __assert_rtn ((const char *)-1L, file, line, e)
#define IP_RECVIF 20
#define ILL_ILLOPC 1
#define VM_INHERIT_DEFAULT VM_INHERIT_COPY
#define NAN (0.0f/0.0f)
#define __Reply__processor_subsystem__defined 
#define TASK_BASE_THROUGHPUT_QOS_POLICY 11
#define __LDBL_HAS_INFINITY__ 1
#define CPU_SUBTYPE_XEON_MP CPU_SUBTYPE_INTEL(12, 1)
#define ALARM_NULL ((alarm_t) 0)
#define R2_SDB_OPCODES R_JOIN_2_PATHS (R2_SDB, "opcodes")
#define r_socket_connect_unix(a,b) r_socket_connect (a, b, b, R_SOCKET_PROTO_UNIX, 0)
#define OSReadLittleInt32(base,byteOffset) _OSReadInt32(base, byteOffset)
#define USE_LIB_MAGIC 0
#define IS_DIGIT(x) ((x) >= '0' && (x) <= '9')
#define KERN_INVALID_HOST 22
#define PROCESSOR_TEMPERATURE 0x10000002
#define R_SYS_ARCH "x86"
#define _UINT8_T 
#define TCPOLEN_SIGNATURE 18
#define r_pvector_foreach_prev(vec,it) for (it = ((vec)->v.len == 0 ? NULL : (void **)(vec)->v.a + (vec)->v.len - 1); it != NULL && it != (void **)(vec)->v.a - 1; it--)
#define x86_THREAD_FULL_STATE64_COUNT ((mach_msg_type_number_t) ( sizeof (x86_thread_full_state64_t) / sizeof (int) ))
#define R_SYS_ENDIAN_BI 3
#define OSWriteBigInt32(base,byteOffset,data) OSWriteSwapInt32(base, byteOffset, data)
#define _MACH_THREAD_POLICY_H_ 
#define OSSwapHostToLittleConstInt32(x) ((uint32_t)(x))
#define MACH_MSGH_KIND_NOTIFICATION 0x00000001
#define IPPROTO_ETHERIP 97
#define Color_BBGBLUE "\x1b[104m"
#define IS_WHITESPACE(x) ((x) == ' ' || (x) == '\t')
#define _SYS_RESOURCE_H_ 
#define HOST_LOAD_INFO_COUNT ((mach_msg_type_number_t) (sizeof(host_load_info_data_t)/sizeof(integer_t)))
#define POLLSTANDARD (POLLIN|POLLPRI|POLLOUT|POLLRDNORM|POLLRDBAND| POLLWRBAND|POLLERR|POLLHUP|POLLNVAL)
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
#define R_TH_LOCK_T pthread_mutex_t
#define MACH_VOUCHER_ATTR_MANAGER_NULL ((mach_voucher_attr_manager_t) 0)
#define _SC_TRACE_EVENT_FILTER 98
#define MACH_PORT_INFO_EXT 7
#define __FLT_EPSILON__ 1.19209289550781250000000000000000000e-7F
#define r_sys_mkdir_failed() (errno != EEXIST)
#define _POSIX_TRACE_SYS_MAX 8
#define __WATCHOS_PROHIBITED 
#define MEMORY_OBJECT_RETURN_DIRTY 1
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_5(x) x
#define SS_DISABLE 0x0004
#define ENOLINK 97
#define R_HIDDEN __attribute__((visibility("hidden")))
#define IPV6CTL_KAME_VERSION 20
#define __scanflike(fmtarg,firstvararg) __attribute__((__format__ (__scanf__, fmtarg, firstvararg)))
#define r_socket_connect_udp(a,b,c,d) r_socket_connect (a, b, c, R_SOCKET_PROTO_UDP, d)
#define FPC_PC_53 0x0200
#define RUNECODE_LINE_UP 0xd1
#define TTCP_CLIENT_SND_WND 4096
#define _MACH_VM_PURGABLE_H_ 
#define Color_BGGREEN "\x1b[42m"
#define TASK_BASIC2_INFO_32 6
#define MEMORY_OBJECT_COPY_SYMMETRIC 4
#define _STRUCT_MCONTEXT64_FULL struct __darwin_mcontext64_full
#define HOST_SEATBELT_PORT (7 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define RUNECODE_CURVE_CORNER_TL 0xd2
#define __DARWIN_C_ANSI 010000L
#define RUNECODE_CURVE_CORNER_TR 0xd3
#define SO_BROADCAST 0x0020
#define CPU_SUBTYPE_MIPS_R2800 ((cpu_subtype_t) 3)
#define x86_PAGEIN_STATE 22
#define R_SYS_ENDIAN 0
#define MACH_MSGH_BITS_HAS_VOUCHER(bits) (MACH_MSGH_BITS_VOUCHER(bits) != MACH_MSGH_BITS_ZERO)
#define THREAD_IDENTIFIER_INFO_COUNT ((mach_msg_type_number_t) (sizeof(thread_identifier_info_data_t) / sizeof(natural_t)))
#define TIOCMGDTRWAIT _IOR('t', 90, int)
#define F_SETBACKINGSTORE 70
#define TCP_CONNECTIONTIMEOUT 0x20
#define VM_PURGABLE_BEHAVIOR_FIFO (0 << VM_PURGABLE_BEHAVIOR_SHIFT)
#define SIGIO 23
#define TCPOPT_WINDOW 3
#define TCOON 2
#define IN_ANY_LOCAL(i) (IN_LINKLOCAL(i) || IN_LOCAL_GROUP(i))
#define PROC_FLAG_EXT_DARWINBG 0x10000
#define _MACH_DEBUG_MACH_DEBUG_TYPES_H_ 
#define IPPROTO_ENCAP 98
#define R_SOCKET_PROTO_TCP IPPROTO_TCP
#define __STDC_UTF_16__ 1
#define __DBL_IS_IEC_60559__ 2
#define _SC_HOST_NAME_MAX 72
#define __UINT_LEAST32_TYPE__ unsigned int
#define __API_AVAILABLE_GET_MACRO(...) 
#define CPU_SUBTYPE_ARM64_V8 ((cpu_subtype_t) 1)
#define IPPROTO_AHIP 61
#define r_warn_if_reached() do { r_assert_log (R_LOGLVL_WARN, "(%s:%d):%s%s code should not be reached\n", __FILE__, __LINE__, R_FUNCTION, R_FUNCTION[0] ? ":" : ""); } while (0)
#define _POSIX_PRIORITY_SCHEDULING (-1)
#define SYNC_VOLUME_FULLSYNC 0x01
#define MACH_MSGH_BITS_COMPLEX 0x80000000U
#define EF_NO_XATTRS 0x00000002
#define BSDLY 0x00008000
#define MACH_PORT_TYPE_SPREQUEST_DELAYED 0x20000000
#define _POSIX_NAME_MAX 14
#define SIOCSIF6LOWPAN _IOW('i', 196, struct ifreq)
#define VM_MEMORY_CM_REGWARP 101
#define R2_LIST_H 
#define r_rbtree_iter_while_prev(it,data,struc,rb) for (; r_rbtree_iter_has(&it) && (data = r_rbtree_iter_get (&it, struc, rb)); r_rbtree_iter_prev (&(it)))
#define _host_security_user_ 
#define TIOCNXCL _IO('t', 14)
#define R_UTF8_LEFT_POINTING_MAGNIFYING_GLASS "🔍"
#define __strong 
#define AF_CNT 21
#define st_ctime st_ctimespec.tv_sec
#define r_io_range_new() R_NEW0(RIORange)
#define _ALLOCA_H_ 
#define VM_MEMORY_COREGRAPHICS_DATA 54
#define R2_FLIST_H 
#define __SIZEOF_SHORT__ 2
#define R_BIT_CHK(x,y) (*(x) & (1<<(y)))
#define IP_BOUND_IF 25
#define KERN_MEMORY_PRESENT 23
#define RUNECODESTR_LINE_HORIZ "\xce"
#define FORM_CONSTRUCTED 0x20
#define __FLT64X_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951F64x
#define MATTR_VAL_CACHE_SYNC 9
#define VM_VOLATILE_MAKE_FIRST_IN_GROUP (1 << VM_VOLATILE_ORDER_SHIFT)
#define O_EXLOCK 0x00000020
#define SV_SIGINFO SA_SIGINFO
#define KEV_INET_SUBCLASS 1
#define IP_MULTICAST_LOOP 11
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_4(x) x
#define _SC_MEMLOCK 30
#define __FLT32X_HAS_INFINITY__ 1
#define MACH_MSG_TYPE_MOVE_RECEIVE 16
#define SO_ACCEPTCONN 0x0002
#define RBitword ut64
#define __INT32_MAX__ 0x7fffffff
#define R2_HOME_ZIGNS R_JOIN_2_PATHS (R2_HOME_DATADIR, "zigns")
#define CPU_SUBTYPE_ARM_XSCALE ((cpu_subtype_t) 8)
#define NL1 0x00000100
#define NL2 0x00000200
#define NL3 0x00000300
#define EXC_GUARD 12
#define r_socket_connect_tcp(a,b,c,d) r_socket_connect (a, b, c, R_SOCKET_PROTO_TCP, d)
#define _POSIX_V7_LPBIG_OFFBIG __LPBIG_OFFBIG
#define KEV_INET_ADDR_DELETED 3
#define Color_GREEN "\x1b[32m"
#define __FLT32_NORM_MAX__ 3.40282346638528859811704183484516925e+38F32
#define __INT_WIDTH__ 32
#define MACH_RCV_TRAILER_SENDER 2
#define O_NDELAY O_NONBLOCK
#define __SIZE_WIDTH__ 64
#define S_ISVTX 0001000
#define err_get_code(err) ((err)&0x3fff)
#define __ReplyUnion__thread_act_subsystem__defined 
#define _MACH_THREAD_SPECIAL_PORTS_H_ 
#define SIGEV_NONE 0
#define SO_TYPE 0x1008
#define subsystem_to_name_map_clock_priv { "clock_set_time", 1200 }, { "clock_set_attributes", 1201 }
#define HOST_KTRACE_BACKGROUND_PORT (6 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define VM_MEMORY_ROSETTA_USER_LDT 235
#define RTLD_LOCAL 0x4
#define SCM_RIGHTS 0x01
#define SCNu16 "hu"
#define _MACH_DEBUG_ZONE_INFO_H_ 
#define ru_first ru_ixrss
#define __WATCHOS_7_3 70300
#define Color_MAGENTA "\x1b[35m"
#define MACH_SEND_INTERRUPTED 0x10000007
#define w_retcode w_T.w_Retcode
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10_3(x) x
#define RBTREE_H 
#define invalid_memory_object_flavor(f) (f != MEMORY_OBJECT_ATTRIBUTE_INFO && f != MEMORY_OBJECT_PERFORMANCE_INFO && f != OLD_MEMORY_OBJECT_BEHAVIOR_INFO && f != MEMORY_OBJECT_BEHAVIOR_INFO && f != OLD_MEMORY_OBJECT_ATTRIBUTE_INFO)
#define __DECIMAL_DIG__ 21
#define TASK_VM_INFO_REV3_COUNT ((mach_msg_type_number_t) (TASK_VM_INFO_REV4_COUNT - 2))
#define VM_PAGE_QUERY_PAGE_COPIED 0x20
#define THREAD_LATENCY_QOS_POLICY 7
#define Color_YELLOW "\x1b[33m"
#define LOCK_EX 0x02
#define subsystem_to_name_map_mach_port { "mach_port_names", 3200 }, { "mach_port_type", 3201 }, { "mach_port_rename", 3202 }, { "mach_port_allocate_name", 3203 }, { "mach_port_allocate", 3204 }, { "mach_port_destroy", 3205 }, { "mach_port_deallocate", 3206 }, { "mach_port_get_refs", 3207 }, { "mach_port_mod_refs", 3208 }, { "mach_port_peek", 3209 }, { "mach_port_set_mscount", 3210 }, { "mach_port_get_set_status", 3211 }, { "mach_port_move_member", 3212 }, { "mach_port_request_notification", 3213 }, { "mach_port_insert_right", 3214 }, { "mach_port_extract_right", 3215 }, { "mach_port_set_seqno", 3216 }, { "mach_port_get_attributes", 3217 }, { "mach_port_set_attributes", 3218 }, { "mach_port_allocate_qos", 3219 }, { "mach_port_allocate_full", 3220 }, { "task_set_port_space", 3221 }, { "mach_port_get_srights", 3222 }, { "mach_port_space_info", 3223 }, { "mach_port_dnrequest_info", 3224 }, { "mach_port_kernel_object", 3225 }, { "mach_port_insert_member", 3226 }, { "mach_port_extract_member", 3227 }, { "mach_port_get_context", 3228 }, { "mach_port_set_context", 3229 }, { "mach_port_kobject", 3230 }, { "mach_port_construct", 3231 }, { "mach_port_destruct", 3232 }, { "mach_port_guard", 3233 }, { "mach_port_unguard", 3234 }, { "mach_port_space_basic_info", 3235 }, { "mach_port_guard_with_flags", 3237 }, { "mach_port_swap_guard", 3238 }, { "mach_port_kobject_description", 3239 }
#define F_DUPFD 0
#define __FLT64_EPSILON__ 2.22044604925031308084726333618164062e-16F64
#define MACH_MSGH_BITS_REMOTE(bits) ((bits) & MACH_MSGH_BITS_REMOTE_MASK)
#define FPE_INTDIV 7
#define SCNuLEAST8 SCNu8
#define MACH_VOUCHER_SELECTOR_CURRENT ((mach_voucher_selector_t)0)
#define OSSwapHostToBigConstInt64(x) OSSwapConstInt64(x)
#define MAX_INPUT 1024
#define _SC_GETGR_R_SIZE_MAX 70
#define F_ADDFILESIGS_FOR_DYLD_SIM 83
#define __FLT128_IS_IEC_60559__ 2
#define __SCHED_PARAM_SIZE__ 4
#define KERN_INVALID_VALUE 18
#define ENETDOWN 50
#define KMOD_EXPLICIT_DECL(name,version,start,stop) kmod_info_t KMOD_INFO_NAME = { 0, KMOD_INFO_VERSION, -1U, { #name }, { version }, -1, 0, 0, 0, 0, start, stop };
#define ESTALE 70
#define IN6ADDR_INTFACELOCAL_ALLNODES_INIT {{{ 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01 }}}
#define FP_PREC_64B 3
#define ENVIRONMENT_SLOT 1
#define _SC_2_SW_DEV 24
#define _SYS_ERRNO_H_ 
#define _PC_FILESIZEBITS 18
#define HAVE_REGEXP 1
#define r_interval_tree_foreach_prev(tree,it,dat) if ((tree)->root) for ((it) = r_rbtree_last (&(tree)->root->node); r_rbtree_iter_has (&it) && (dat = r_rbtree_iter_get (&it, RIntervalNode, node)->data); r_rbtree_iter_prev (&(it)))
#define TASK_BASIC_INFO_32_COUNT (sizeof(task_basic_info_32_data_t) / sizeof(natural_t))
#define _WPERM_OK (1<<20)
#define VM_MEMORY_JAVASCRIPT_JIT_REGISTER_FILE 65
#define MONOTONIC_APPLE (__APPLE__ && CLOCK_MONOTONIC_RAW)
#define SHUT_RDWR 2
#define KEV_DL_IF_DETACHING 10
#define MACH_CORE_FILEHEADER_NAMELEN 16
#define TCPOPT_SACK_PERMIT_HDR (TCPOPT_NOP<<24|TCPOPT_NOP<<16|TCPOPT_SACK_PERMITTED<<8|TCPOLEN_SACK_PERMITTED)
#define IN_CLASSA_HOST 0x00ffffff
#define TAG_INTEGER 0x02
#define MACH_MSG_TRAILER_MINIMUM_SIZE sizeof(mach_msg_trailer_t)
#define _POSIX_LOGIN_NAME_MAX 9
#define PTRDIFF_MAX INTMAX_MAX
#define MCAST_LEAVE_SOURCE_GROUP 83
#define _XBS5_ILP32_OFF32 __ILP32_OFF32
#define __UINT_LEAST16_TYPE__ short unsigned int
#define IPPROTO_XTP 36
#define PRIX8 __PRI_8_LENGTH_MODIFIER__ "X"
#define __FLT64X_MIN_10_EXP__ (-4931)
#define QUAD_MAX LLONG_MAX
#define _POSIX_THREAD_ATTR_STACKADDR 200112L
#define MACH_PORT_TYPE_ALL_RIGHTS (MACH_PORT_TYPE_PORT_OR_DEAD|MACH_PORT_TYPE_PORT_SET)
#define __LDBL_HAS_QUIET_NAN__ 1
#define INT64_C(v) (v ## LL)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_4(x) x
#define code_emask (0x3fff)
#define __SPI_DEPRECATED_WITH_REPLACEMENT(...) 
#define CPUFAMILY_ARM_9 0xe73283ae
#define _CTYPE_R 0x00040000L
#define MACH_VOUCHER_ATTR_TEST_STORE MACH_VOUCHER_ATTR_USER_DATA_STORE
#define __DARWIN_MAXNAMLEN 255
#define WINT_MIN INT32_MIN
#define ROFList_Parent RList
#define FP_NO 0
#define MACH_MSG_MASK 0x00003e00
#define EAUTH 80
#define _MACH_THREAD_INFO_H_ 
#define EFL_IOPL_KERNEL 0x00000000
#define _SC_XOPEN_VERSION 116
#define _FSBLKCNT_T 
#define Color_BGDELETE "\x1b[48;5;52m"
#define MAC_OS_X_VERSION_10_11_4 101104
#define R_MODE_JSON 0x008
#define MACH_PORT_TYPE_SPREQUEST 0x40000000
#define CPUFAMILY_ARM_12 0xbd1b0ae9
#define _STRUCT_MCONTEXT64 struct __darwin_mcontext64
#define THREAD_STANDARD_POLICY_COUNT 0
#define IEXTEN 0x00000400
#define invalid_policy(policy) ((policy) != POLICY_TIMESHARE && (policy) != POLICY_RR && (policy) != POLICY_FIFO)
#define L_tmpnam 1024
#define ___int_wchar_t_h 
#define __DYNAMIC__ 1
#define CPUFAMILY_ARM_14 0x96077ef1
#define EXC_I386_INTO 2
#define WIFCONTINUED(x) (_WSTATUS(x) == _WSTOPPED && WSTOPSIG(x) == 0x13)
#define __MAC_10_0 1000
#define __MAC_10_2 1020
#define __MAC_10_3 1030
#define __MAC_10_4 1040
#define __MAC_10_6 1060
#define __MAC_10_8 1080
#define __MAC_10_9 1090
#define HOST_PORT 1
#define F_SPECULATIVE_READ 101
#define EXCEPTION_STATE 2
#define IPPROTO_TCF 87
#define IOCPARM_MAX (IOCPARM_MASK + 1)
#define MACH_EVENTLINK_NULL ((mach_eventlink_t) 0)
#define __MMX__ 1
#define IPPROTO_TCP 6
#define R_PRINTF_CHECK(fmt,dots) __attribute__ ((format (printf, fmt, dots)))
#define CPU_SUBTYPE_MC88110 ((cpu_subtype_t) 2)
#define TAB0 0x00000000
#define TAB1 0x00000400
#define TAB2 0x00000800
#define TAB3 0x00000004
#define IPV6_SOCKOPT_RESERVED1 3
#define PTHREAD_CANCEL_ENABLE 0x01
#define SD_SEND 1
#define SDB_VSZ 0xffffff
#define MEMORY_OBJECT_DEFAULT_NULL ((memory_object_default_t) 0)
#define NDR_INT_BIG_ENDIAN 0
#define RUNE_LONG_LINE_HORIZ "―"
#define TCPOPT_FASTOPEN 34
#define __MAC_10_14_1 101401
#define __MAC_10_14_4 101404
#define __MAC_10_14_6 101406
#define __MAC_OS_X_VERSION_MIN_REQUIRED __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__
#define R_REGEX_STARTEND 00004
#define MAP_MEM_RT 7
#define MACH_SEND_OVERRIDE 0x00000020
#define MACH_PORT_TYPE_RECEIVE MACH_PORT_TYPE(MACH_PORT_RIGHT_RECEIVE)
#define MACH_PORT_TYPE_PORT_RIGHTS (MACH_PORT_TYPE_SEND_RIGHTS|MACH_PORT_TYPE_RECEIVE)
#define EXC_MASK_MACHINE 0
#define SO_LINGER_SEC 0x1080
#define PRIoLEAST32 PRIo32
#define MACH_MSGH_BITS_RAISEIMP 0x20000000U
#define R_UNUSED __attribute__((__unused__))
#define LOCK_NB 0x04
#define __AVAILABILITY_INTERNAL_DEPRECATED __attribute__((deprecated))
#define MEMORY_OBJECT_COPY_CALL 1
#define CPU_SUBTYPE_MULTIPLE ((cpu_subtype_t) -1)
#define EAI_MEMORY 6
#define EAI_MAX 15
#define PRIdLEAST16 PRId16
#define MEMORY_OBJECT_DATA_FLUSH 0x1
#define F_NOCACHE 48
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_3(x) 
#define r_list_foreach_safe(list,it,tmp,pos) if (list) for (it = list->head; it && (pos = it->data, tmp = it->n, 1); it = tmp)
#define TIOCSDRAINWAIT _IOW('t', 87, int)
#define TASK_CATEGORY_POLICY 1
#define __BIGGEST_ALIGNMENT__ 16
#define _SC_BC_STRING_MAX 12
#define MACH_VOUCHER_ATTR_MAX_RAW_RECIPE_ARRAY_SIZE 5120
#define _MCONTEXT_T 
#define sa_handler __sigaction_u.__sa_handler
#define LONG_MAX __LONG_MAX__
#define CPU_SUBTYPE_ARM_V6M ((cpu_subtype_t) 14)
#define IOPOL_TYPE_VFS_MATERIALIZE_DATALESS_FILES 3
#define STDERR_FILENO 2
#define EXC_MASK_SYSCALL (1 << EXC_SYSCALL)
#define __DARWIN_ONLY_VERS_1050 0
#define __sfileno(p) ((p)->_file)
#define VM_PURGABLE_DEBUG_SHIFT 12
#define _SC_THREAD_DESTRUCTOR_ITERATIONS 85
#define TCP_RXT_CONNDROPTIME 0x80
#define __FLT64_MAX_10_EXP__ 308
#define __sferror(p) (((p)->_flags & __SERR) != 0)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_0(x) 
#define PRIoLEAST64 PRIo64
#define MEMORY_OBJECT_ATTR_INFO_COUNT ((mach_msg_type_number_t) (sizeof(memory_object_attr_info_data_t)/sizeof(int)))
#define _DLFCN_H_ 
#define _IN_ADDR_T 
#define __COPYRIGHT(s) __IDSTRING(copyright,s)
#define MACH_PORT_RIGHT_SEND_ONCE ((mach_port_right_t) 2)
#define __pure 
#define R_INVALID_SOCKET -1
#define __IPV6_ADDR_SCOPE_SITELOCAL 0x05
#define WTERMSIG(x) (_WSTATUS(x))
#define MACH_EXCEPTION_MASK (MACH_EXCEPTION_CODES | MACH_EXCEPTION_ERRORS)
#define CR3 0x00003000
#define CPU_SUBTYPE_INTEL_FAMILY(x) ((x) & 15)
#define QOS_MIN_RELATIVE_PRIORITY (-15)
#define EF_MAY_SHARE_BLOCKS 0x00000001
#define OSWriteLittleInt64(base,byteOffset,data) _OSWriteInt64(base, byteOffset, data)
#define LINE_CROSS 1
#define FIONCLEX _IO('f', 2)
#define x86_DEBUG_STATE_COUNT ((mach_msg_type_number_t) (sizeof(x86_debug_state_t)/sizeof(unsigned int)))
#define __FLT32_HAS_INFINITY__ 1
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_6(x) 
#define EXIT_SUCCESS 0
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_7(x) 
#define PT_CONTINUE 7
#define PRIiFAST16 PRIi16
#define SI_QUEUE 0x10002
#define __APPLE_API_UNSTABLE 
#define UINT_LEAST8_MAX UINT8_MAX
#define _POSIX_SIGQUEUE_MAX 32
#define R_LOG_ERROR(fmtstr,...) r_log (MACRO_LOG_FUNC, __FILE__, __LINE__, R_LOGLVL_ERROR, NULL, fmtstr, ##__VA_ARGS__);
#define LOCK_SH 0x01
#define _PC_XATTR_SIZE_BITS 26
#define _CS_XBS5_LPBIG_OFFBIG_CFLAGS 32
#define AF_LINK 18
#define __INT_FAST32_MAX__ 0x7fffffff
#define __LDBL_HAS_DENORM__ 1
#define _CS_XBS5_ILP32_OFFBIG_CFLAGS 24
#define SIOCGETVLAN SIOCGIFVLAN
#define MACH_VOUCHER_ATTR_REDEEM ((mach_voucher_attr_recipe_command_t)10)
#define KERN_INVALID_MEMORY_CONTROL 34
#define __MAC_10_15_1 101501
#define RUNECODESTR_LINE_VERT "\xc8"
#define _PTHREAD_SWIFT_IMPORTER_NULLABILITY_COMPAT defined(SWIFT_CLASS_EXTRA) && (!defined(SWIFT_SDK_OVERLAY_PTHREAD_EPOCH) || (SWIFT_SDK_OVERLAY_PTHREAD_EPOCH < 1))
#define TASK_INFO_MAX (1024)
#define _MACH_SYNC_POLICY_H_ 
#define PRIdLEAST64 PRId64
#define _RLIMIT_POSIX_FLAG 0x1000
#define HOST_LOCKD_PORT (5 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define VM_PURGABLE_STATE_MIN 0
#define SO_NREAD 0x1020
#define snprintf(str,len,...) __builtin___snprintf_chk (str, len, 0, __darwin_obsz(str), __VA_ARGS__)
#define _SC_SIGQUEUE_MAX 51
#define CDSUSP CTRL('y')
#define EFL_ID 0x00200000
#define PRId8 __PRI_8_LENGTH_MODIFIER__ "d"
#define VMIN 16
#define PRIiFAST32 PRIi32
#define EFL_IF 0x00000200
#define TIOCMGET _IOR('t', 106, int)
#define THREAD_STATE_FLAVOR_LIST_NEW 128
#define TASK_MAX_SPECIAL_PORT TASK_RESOURCE_NOTIFY_PORT
#define _MACH_I386__STRUCTS_H_ 
#define LOCK_UN 0x08
#define w_stopsig w_S.w_Stopsig
#define __TERMIOS_H__ 
#define F_PUNCHHOLE 99
#define r_list_iter_cur(x) (x)->p
#define NL_LANGMAX 14
#define R_CONS_CLEAR_FROM_CURSOR_TO_END "\x1b[0J\r"
#define RColor_BLACK RCOLOR(ALPHA_FG, 12, 12, 12, 0x00, 0x00, 0x00, 0)
#define _SC_2_VERSION 17
#define TASK_KERNEL_PORT 1
#define _WSTOPPED 0177
#define _INT16_T 
#define KERN_MEMORY_ERROR 10
#define putchar_unlocked(x) putc_unlocked(x, stdout)
#define htonll(x) __DARWIN_OSSwapInt64(x)
#define EPIPE 32
#define host_set_closured_port(host,port) (host_set_special_port((host), HOST_CLOSURED_PORT, (port)))
#define TCP_MSS 512
#define INADDR_MAX_LOCAL_GROUP (u_int32_t)0xe00000ff
#define FP_STATE_BYTES 512
#define x86_DEBUG_STATE32 10
#define IP_RECVOPTS 5
#define LONG_MIN (-LONG_MAX - 1L)
#define HOST_VM_INFO64_COUNT ((mach_msg_type_number_t) (sizeof(vm_statistics64_data_t)/sizeof(integer_t)))
#define R_CONS_CURSOR_RESTORE "\x1b[u"
#define __IPV6_ADDR_SCOPE_INTFACELOCAL 0x01
#define PRIiFAST64 PRIi64
#define TERMUX_PREFIX "/data/data/com.termux/files/usr"
#define MPG_FLAGS_MOD_REFS_PINNED_DEALLOC (0x01ull << 56)
#define CDB_H 
#define SOCK_MAXADDRLEN 255
#define IP_NAT__XXX 55
#define ASN1_OID_LEN 64
#define VM_MEMORY_SANITIZER 99
#define IPPROTO_MAXID (IPPROTO_AH + 1)
#define INET_ADDRSTRLEN 16
#define _RUNE_MAGIC_A "RuneMagA"
#define _XBS5_LP64_OFF64 __LP64_OFF64
#define IPPROTO_KRYPTOLAN 65
#define IPPROTO_SDRP 42
#define FP_SOFT 1
#define x86_DEBUG_STATE64 11
#define MACH_MSG_TYPE_COPY_SEND 19
#define _BLKSIZE_T 
#define SUID_CRED_NULL ((suid_cred_t) 0)
#define PRIi8 __PRI_8_LENGTH_MODIFIER__ "i"
#define _PC_MIN_HOLE_SIZE 27
#define HOST_VM_INFO_COUNT ((mach_msg_type_number_t) (sizeof(vm_statistics_data_t)/sizeof(integer_t)))
#define r_oflist_deserialize(x) free (x->array - 1), x->array = 0
#define EBADMSG 94
#define CPU_SUBTYPE_I860_ALL ((cpu_subtype_t) 0)
#define __DARWIN_SUF_NON_CANCELABLE 
#define MACH_RCV_PORT_CHANGED 0x10004006
#define TIOCCBRK _IO('t', 122)
#define SO_WANTMORE 0x4000
#define MACH_RCV_SYNC_PEEK 0x00008000
#define SCNiLEAST16 SCNi16
#define KERN_PROTECTION_FAILURE 2
#define CPU_SUBTYPE_ARM_V7EM ((cpu_subtype_t) 16)
#define R2_IO_H 
#define FPS_IE 0x0001
#define _MACH_VM_ATTRIBUTES_H_ 
#define VM_SYNC_ASYNCHRONOUS ((vm_sync_t) 0x01)
#define _STRUCT_TIMEVAL struct timeval
#define NI_NOFQDN 0x00000001
#define GID_MAX 2147483647U
#define SIGABRT 6
#define _GCC_WRAP_STDINT_H 
#define CLD_CONTINUED 6
#define SCNoLEAST64 SCNo64
#define FUNC_ATTR_PURE __attribute__ ((pure))
#define KERN_LOCK_OWNED_SELF 41
#define VM_MEMORY_IOACCELERATOR 100
#define MAP_MEM_FLAGS_ALL ( MAP_MEM_FLAGS_USER)
#define VM_MEMORY_SKYWALK 87
#define i386_EXCEPTION_STATE_COUNT ((mach_msg_type_number_t) ( sizeof (i386_exception_state_t) / sizeof (int) ))
#define _SYS_WAIT_H_ 
#define VM_REGION_SUBMAP_INFO_V2_COUNT_64 ((mach_msg_type_number_t) (VM_REGION_SUBMAP_INFO_V2_SIZE / sizeof (natural_t)))
#define SCNiLEAST32 SCNi32
#define IPV6CTL_USE_DEFAULTZONE 39
#define _SC_XOPEN_CRYPT 108
#define _U_INT32_T 
#define __weak 
#define PROCESSOR_CPU_LOAD_INFO 2
#define host_get_gssd_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_GSSD_PORT, (port)))
#define _DEV_T 
#define IPPROTO_TTP 84
#define B14400 14400
#define host_get_atm_notification_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_ATM_NOTIFICATION_PORT, (port)))
#define R_TH_COND_T pthread_cond_t
#define __abortlike __dead2 __cold __not_tail_called
#define UT32_GT0 0x80000000U
#define _SC_MONOTONIC_CLOCK 74
#define SO_DONTROUTE 0x0010
#define R2_TH_H 
#define MACH_RCV_PORT_DIED 0x10004009
#define __DBL_MAX_EXP__ 1024
#define MACH_SEND_PROPAGATE_QOS 0x00200000
#define r_return_val_if_fail(expr,val) do { if (!(expr)) { H_LOG_ (R_LOGLVL_WARN, "%s: assertion '%s' failed (line %d)\n", R_FUNCTION, #expr, __LINE__); return (val); } } while (0)
#define TCPCI_FLAG_LOSSRECOVERY 0x00000001
#define __WCHAR_WIDTH__ 32
#define __DARWIN_BIG_ENDIAN 4321
#define __FLT64_MAX__ 1.79769313486231570814527423731704357e+308F64
#define UPL_NULL ((upl_t) 0)
#define KEV_INET6_NEW_LL_ADDR 4
#define R_REF_NAME refcount
#define RUNECODE_LINE_VERT 0xc8
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define POLLATTRIB 0x0400
#define IPPROTO_CMTP 38
#define _MACH_I386_BOOLEAN_H_ 
#define __SSE2_MATH__ 1
#define __Request__lock_set_subsystem__defined 
#define KERN_RPC_TERMINATE_ORPHAN 44
#define __ATOMIC_HLE_RELEASE 131072
#define TASK_VM_INFO_PURGEABLE 23
#define _MACH_SEMAPHORE_H_ 
#define THREAD_PRECEDENCE_POLICY 3
#define _SC_OPEN_MAX 5
#define _VA_LIST_ 
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
#define MAP_MEM_VM_COPY 0x200000
#define mips mips
#define _POSIX_TZNAME_MAX 6
#define IPPROTO_HOPOPTS 0
#define IPV6CTL_MRTPROTO 8
#define _POSIX_SSIZE_MAX 32767
#define host_get_telemetry_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_TELEMETRY_PORT, (port)))
#define FUNC_ATTR_ALWAYS_INLINE __attribute__((always_inline))
#define _MACH_MACHINE_VM_TYPES_H_ 
#define host_get_chud_port(host,port) host_get_launchctl_port(host, port)
#define _SYS_SIGNAL_H_ 
#define TASK_SECURITY_TOKEN_COUNT ((mach_msg_type_number_t) (sizeof(security_token_t) / sizeof(natural_t)))
#define INADDR_ALLRPTS_GROUP (u_int32_t)0xe0000016
#define _SC_ASYNCHRONOUS_IO 28
#define SCNdFAST16 SCNd16
#define IPV6_UNICAST_HOPS 4
#define IPPROTO_BRSATMON 76
#define timerisset(tvp) ((tvp)->tv_sec || (tvp)->tv_usec)
#define SIOCDELMULTI _IOW('i', 50, struct ifreq)
#define TASK_THREAD_TIMES_INFO_COUNT ((mach_msg_type_number_t) (sizeof(task_thread_times_info_data_t) / sizeof(natural_t)))
#define MPO_INSERT_SEND_RIGHT 0x10
#define R_ROUND(x,y) ((x)%(y))?(x)+((y)-((x)%(y))):(x)
#define R_BIG_DTYPE ut32
#define OSSwapInt16(x) __DARWIN_OSSwapInt16(x)
#define THREAD_EXTENDED_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (thread_extended_policy_data_t) / sizeof (integer_t)))
#define r_flist_rewind(it) while(it!=*it) it--; it++;
#define LIBC_HAVE_PTRACE 1
#define MACH_MSG_GUARD_FLAGS_NONE 0x0000
#define THREAD_THROUGHPUT_QOS_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (thread_throughput_qos_policy_data_t) / sizeof (integer_t)))
#define __tune_core2__ 1
#define CPU_SUBTYPE_ARM64_ALL ((cpu_subtype_t) 0)
#define FPE_FLTOVF 2
#define FD_CLOEXEC 1
#define KEV_DL_SIFMETRICS 2
#define FPC_IM FPC_IE
#define __ATOMIC_HLE_ACQUIRE 65536
#define _PTRDIFF_T 
#define TASK_EXTMOD_INFO_COUNT (sizeof(task_extmod_info_data_t) / sizeof(natural_t))
#define __NDR_convert__int_rep__ __NDR_convert__
#define SCNdFAST32 SCNd32
#define _MACH_I386_THREAD_STATUS_H_ 
#define HOST_CHUD_PORT HOST_LAUNCHCTL_PORT
#define _UINT32_T 
#define _PC_PIPE_BUF 6
#define VM_REGION_BASIC_INFO_64 9
#define host_get_host_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_PORT, (port)))
#define _PC_VDISABLE 9
#define _MACH_VM_INHERIT_H_ 
#define x86_THREAD_STATE64_COUNT ((mach_msg_type_number_t) ( sizeof (x86_thread_state64_t) / sizeof (int) ))
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#define SIOCSDRVSPEC _IOW('i', 123, struct ifdrv)
#define IP_DUMMYNET_FLUSH 62
#define __kpi_deprecated_arm64_macos_unavailable 
#define TAG_SET 0x11
#define FCNTL_FS_SPECIFIC_BASE 0x00010000
#define _SC_BARRIERS 66
#define _SC_XOPEN_LEGACY 110
#define KERN_ALREADY_IN_SET 11
#define O_DP_GETRAWUNENCRYPTED 0x0002
#define __IPV6_ADDR_MC_SCOPE(a) ((a)->s6_addr[1] & 0x0f)
#define THREAD_STATE_FLAVOR_LIST 0
#define st_atime st_atimespec.tv_sec
#define SO_NETSVC_MARKING_LEVEL 0x1119
#define RUNE_LINE_CROSS "┼"
#define __SPI_DEPRECATED(...) 
#define _POSIX_CPUTIME (-1)
#define CPU_SUBTYPE_POWERPC_603ev ((cpu_subtype_t) 5)
#define __FLT64X_MANT_DIG__ 64
#define PTHREAD_CREATE_DETACHED 2
#define POLICY_TIMESHARE 1
#define MACH_NOTIFY_SEND_ONCE (MACH_NOTIFY_FIRST + 007)
#define MACH_PORT_RIGHT_NUMBER ((mach_port_right_t) 6)
#define FUNC_ATTR_ALLOC_SIZE_PROD(x,y) __attribute__((alloc_size(x,y)))
#define ALLPERMS (S_ISUID|S_ISGID|S_ISTXT|S_IRWXU|S_IRWXG|S_IRWXO)
#define WAKEMON_SET_DEFAULTS 0x08
#define AI_MASK (AI_PASSIVE | AI_CANONNAME | AI_NUMERICHOST | AI_NUMERICSERV | AI_ADDRCONFIG)
#define __SIZEOF_WINT_T__ 4
#define _STRUCT_YMM_REG struct __darwin_ymm_reg
#define PRIxLEAST8 PRIx8
#define ferror_unlocked(p) __sferror(p)
#define ST32_MAX 0x7FFFFFFF
#define __WATCHOS_5_2 50200
#define SDB_KEYSIZE 32
#define SCNdFAST64 SCNd64
#define TIOCSPGRP _IOW('t', 118, int)
#define IOC_VOID (__uint32_t)0x20000000
#define R2_INCDIR "/usr/local/include/libr"
#define TCP_ENABLE_ECN 0x104
#define __LONG_LONG_WIDTH__ 64
#define R_STATIC_ASSERT(x) switch (0) { case 0: case (x):; }
#define VM_MEMORY_IOKIT 21
#define PROCESSOR_SET_LOAD_INFO_COUNT ((mach_msg_type_number_t) (sizeof(processor_set_load_info_data_t)/sizeof(natural_t)))
#define O_DP_GETRAWENCRYPTED 0x0001
#define CLD_EXITED 1
#define TIOCPKT_NOSTOP 0x10
#define VM_PAGE_QUERY_PAGE_PAGED_OUT 0x10
#define __WATCHOS_6_0 60000
#define __WATCHOS_6_1 60100
#define __WATCHOS_6_2 60200
#define unix_err(errno) (err_kern|err_sub(3)|errno)
#define SUN_LEN(su) (sizeof(*(su)) - sizeof((su)->sun_path) + strlen((su)->sun_path))
#define AF_CHAOS 5
#define S_IRGRP 0000040
#define TASK_INSPECT_PORT 5
#define R_OUT 
#define THREAD_BASIC_INFO 3
#define UINTPTR_MAX 18446744073709551615UL
#define _X86_INSTRUCTION_STATE_CACHELINE_SIZE 64
#define _STRUCT_X86_DEBUG_STATE32 struct __darwin_x86_debug_state32
#define MACH_MSG_SIZE_RELIABLE ((mach_msg_size_t) 256 * 1024)
#define __ATOMIC_SEQ_CST 5
#define VM_MEMORY_ROSETTA_RETURN_STACK 233
#define NETDB_INTERNAL -1
#define RColor_BRED RCOLOR(ALPHA_FG, 231, 72, 86, 0x00, 0x00, 0x00, 9)
#define HOST_IOCOMPRESSIONSTATS_PORT (25 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define VM_MEMORY_QUICKLOOK_THUMBNAILS 97
#define SIOCSLOWAT _IOW('s', 2, int)
#define IPV6CTL_RTMAXCACHE 27
#define __IDSTRING(name,string) static const char name[] __used = string
#define MACH_PORTS_SLOTS_USED 3
#define __header_always_inline __header_inline __attribute__ ((__always_inline__))
#define RColor_BBGBLACK RCOLOR(ALPHA_BG, 118, 118, 118, 0x00, 0x00, 0x00, 8)
#define R_CONS_CURSOR_SAVE "\x1b[s"
#define MSG_HAVEMORE 0x2000
#define _SC_XOPEN_XCU_VERSION 121
#define _CS_POSIX_V6_LPBIG_OFFBIG_LIBS 13
#define MEMORY_OBJECT_PERFORMANCE_INFO 11
#define IPPROTO_APES 99
#define R_OWN 
#define R_CONS_INVERT(x,y) (y? (x?Color_INVERT: Color_INVERT_RESET): (x?"[":"]"))
#define __FLT_MIN_EXP__ (-125)
#define __DARWIN_NULL ((void *)0)
#define CPUFAMILY_INTEL_KABYLAKE 0x0f817246
#define UF_NODUMP 0x00000001
#define R_HEAP 
#define WEXITED 0x00000004
#define F_GETOWN 5
#define PTHREAD_RWLOCK_INITIALIZER {_PTHREAD_RWLOCK_SIG_init, {0}}
#define subsystem_to_name_map_task { "task_create", 3400 }, { "task_terminate", 3401 }, { "task_threads", 3402 }, { "mach_ports_register", 3403 }, { "mach_ports_lookup", 3404 }, { "task_info", 3405 }, { "task_set_info", 3406 }, { "task_suspend", 3407 }, { "task_resume", 3408 }, { "task_get_special_port", 3409 }, { "task_set_special_port", 3410 }, { "thread_create", 3411 }, { "thread_create_running", 3412 }, { "task_set_exception_ports", 3413 }, { "task_get_exception_ports", 3414 }, { "task_swap_exception_ports", 3415 }, { "lock_set_create", 3416 }, { "lock_set_destroy", 3417 }, { "semaphore_create", 3418 }, { "semaphore_destroy", 3419 }, { "task_policy_set", 3420 }, { "task_policy_get", 3421 }, { "task_sample", 3422 }, { "task_policy", 3423 }, { "task_set_emulation", 3424 }, { "task_get_emulation_vector", 3425 }, { "task_set_emulation_vector", 3426 }, { "task_set_ras_pc", 3427 }, { "task_zone_info", 3428 }, { "task_assign", 3429 }, { "task_assign_default", 3430 }, { "task_get_assignment", 3431 }, { "task_set_policy", 3432 }, { "task_get_state", 3433 }, { "task_set_state", 3434 }, { "task_set_phys_footprint_limit", 3435 }, { "task_suspend2", 3436 }, { "task_resume2", 3437 }, { "task_purgable_info", 3438 }, { "task_get_mach_voucher", 3439 }, { "task_set_mach_voucher", 3440 }, { "task_swap_mach_voucher", 3441 }, { "task_generate_corpse", 3442 }, { "task_map_corpse_info", 3443 }, { "task_register_dyld_image_infos", 3444 }, { "task_unregister_dyld_image_infos", 3445 }, { "task_get_dyld_image_infos", 3446 }, { "task_register_dyld_shared_cache_image_info", 3447 }, { "task_register_dyld_set_dyld_state", 3448 }, { "task_register_dyld_get_process_state", 3449 }, { "task_map_corpse_info_64", 3450 }, { "task_inspect", 3451 }, { "task_get_exc_guard_behavior", 3452 }, { "task_set_exc_guard_behavior", 3453 }, { "task_create_suid_cred", 3454 }, { "task_dyld_process_info_notify_register", 3456 }, { "task_create_identity_token", 3457 }, { "task_identity_token_get_task_port", 3458 }, { "task_dyld_process_info_notify_deregister", 3459 }, { "task_get_exception_ports_info", 3460 }
#define IPCTL_DEFTTL 3
#define KERN_DENIED 53
#define B0100 4
#define B0101 5
#define MONOTONIC_LINUX (__linux__ && _POSIX_C_SOURCE >= 199309L)
#define SDB_KSZ 0xff
#define R_UTIL_TABLE_H 
#define IP_FW_ADD 40
#define host_set_host_priv_port(host,port) (KERN_INVALID_ARGUMENT)
#define __printf0like(fmtarg,firstvararg) __attribute__((__format__ (__printf0__, fmtarg, firstvararg)))
#define CPU_SUBTYPE_586 CPU_SUBTYPE_INTEL(5, 0)
#define VM_PROT_READ ((vm_prot_t) 0x01)
#define _SC_XBS5_LPBIG_OFFBIG 125
#define alloca(size) __alloca(size)
#define _USE_FORTIFY_LEVEL 2
#define __INT16_MAX__ 0x7fff
#define MACH_RCV_INVALID_REPLY 0x10004012
#define B0111 7
#define err_kern err_system(0x0)
#define IN6ADDR_LINKLOCAL_ALLROUTERS_INIT {{{ 0xff, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02 }}}
#define R_IO_SEEK_END 2
#define RColor_BBGYELLOW RCOLOR(ALPHA_BG, 249, 241, 165, 0x00, 0x00, 0x00, 11)
#define _SYS_DIRENT_H 
#define HOST_PRIV_NULL ((host_priv_t) 0)
#define MACH_DEBUG_PAGE_INFO_H 
#define NBBY __DARWIN_NBBY
#define _STRUCT_MMST_REG struct __darwin_mmst_reg
#define strcat(dest,...) __builtin___strcat_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define ST32_MIN (-ST32_MAX-1)
#define AF_MAX 41
#define VM_PURGABLE_ORDERING_OBSOLETE (1 << VM_PURGABLE_ORDERING_SHIFT)
#define MACH_ACTIVITY_ID_COUNT_MAX 16
#define __FLT64X_HAS_QUIET_NAN__ 1
#define __INT_FAST64_TYPE__ long long int
#define _SYS_POLL_H_ 
#define MACH_MSGH_BITS_USED 0xb01f1f1fU
#define SDB_HT_PP_H 
#define PTHREAD_INHERIT_SCHED 1
#define CDSR_OFLOW 0x00080000
#define VLNEXT 14
#define R_HEX_H 
#define _SC_MQ_OPEN_MAX 46
#define IPV6CTL_KEEPFAITH 13
#define VM_MEMORY_MALLOC_HUGE 4
#define CORNER_BL 5
#define IPV6_RECVTCLASS 35
#define _ANSI_STDDEF_H 
#define IPV6CTL_TEMPPLTIME 33
#define AI_DEFAULT (AI_V4MAPPED_CFG | AI_ADDRCONFIG)
#define CPU_SUBTYPE_INTEL(f,m) ((cpu_subtype_t) (f) + ((m) << 4))
#define __INT_LEAST32_MAX__ 0x7fffffff
#define TABDLY 0x00000c04
#define NI_WITHSCOPEID 0x00000020
#define VM_PURGABLE_ORDERING_NORMAL (0 << VM_PURGABLE_ORDERING_SHIFT)
#define MACH_MSG_SIZE_MAX ((mach_msg_size_t) ~0)
#define __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ 110500
#define PTHREAD_CANCEL_DISABLE 0x00
#define __APPLE_API_OBSOLETE 
#define MPO_TG_BLOCK_TRACKING 0x200
#define IPV6_DEFAULT_MULTICAST_HOPS 1
#define IOPOL_DEFAULT 0
#define THREAD_INSPECT_PORT 2
#define __KFBSD__ 0
#define DST_WET 3
#define MACH_SEND_ALWAYS 0x00010000
#define IPC_SPACE_INSPECT_NULL ((ipc_space_inspect_t) 0)
#define TTYDEF_CFLAG (CREAD | CS8 | HUPCL)
#define MAP_MEM_NOOP 0
#define __IOS_AVAILABLE(_vers) 
#define TH_STATE_STOPPED 2
#define CPU_TYPE_MC680x0 ((cpu_type_t) 6)
#define SO_RCVLOWAT 0x1004
#define OSSwapBigToHostInt16(x) OSSwapInt16(x)
#define __SIZE_TYPE__ long unsigned int
#define IPPROTO_MTP 92
#define __signed signed
#define IMAXBEL 0x00002000
#define __sgetc(p) (--(p)->_r < 0 ? __srget(p) : (int)(*(p)->_p++))
#define TIOCPTYGRANT _IO('t', 84)
#define _CS_POSIX_V6_LP64_OFF64_LDFLAGS 9
#define EXC_I386_BOUNDFLT 5
#define MIG_REMOTE_ERROR -302
#define THREAD_SCHED_RR_INFO 11
#define ls_length(x) x->length
#define _XOPEN_LEGACY (-1)
#define __IPHONE_7_0 70000
#define __IPHONE_7_1 70100
#define PF_ISDN AF_ISDN
#define __header_inline extern __inline __attribute__((__gnu_inline__))
#define MACH_PORT_DEAD ((mach_port_name_t) ~0)
#define HOST_MIN_SPECIAL_PORT HOST_SECURITY_PORT
#define UT64_ADD_OVFCHK(x,y) ((UT64_MAX - (x)) < (y))
#define VM_MEMORY_APPKIT 40
#define UTIME_NOW -1
#define HOST_DYNAMIC_PAGER_PORT (1 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define HAVE_CAPSICUM 0
#define __IOS_DEPRECATED(_start,_dep,_msg) 
#define ENETRESET 52
#define _MACH_VOUCHER_TYPES_H_ 
#define RColor_BGYELLOW RCOLOR(ALPHA_BG, 193, 156, 0, 0x00, 0x00, 0x00, 3)
#define _POSIX_JOB_CONTROL 200112L
#define IPPROTO_CFTP 62
#define IPCTL_SOURCEROUTE 8
#define R_ULEB128_H 
#define __RequestUnion__processor_subsystem__defined 
#define SIGINFO 29
#define __FLT32X_EPSILON__ 2.22044604925031308084726333618164062e-16F32x
#define OSSwapBigToHostInt32(x) OSSwapInt32(x)
#define __DARWIN_CTYPE_inline __header_inline
#define CPU_SUBTYPE_VAX8800 ((cpu_subtype_t) 11)
#define MAP_MEM_USE_DATA_ADDR 0x100000
#define sigismember(set,signo) ((*(set) & __sigbits(signo)) != 0)
#define MACH_SEND_NOIMPORTANCE 0x00040000
#define EOF (-1)
#define IP_DUMMYNET_GET 64
#define MACH_PORT_RIGHT_SEND ((mach_port_right_t) 0)
#define __OS_AVAILABILITY_MSG(_target,_availability,_msg) 
#define __Request__vm_map_subsystem__defined 
#define MACH_VOUCHER_NAME_NULL ((mach_voucher_name_t) 0)
#define S_IFREG 0100000
#define ACCESSPERMS (S_IRWXU|S_IRWXG|S_IRWXO)
#define fwopen(cookie,fn) funopen(cookie, 0, fn, 0, 0)
#define R_SANDBOX_H 
#define _MACH_DEBUG_IPC_INFO_H_ 
#define __FLT64_MIN_EXP__ (-1021)
#define MEMORY_OBJECT_INFO_MAX (1024)
#define MAC_OS_X_VERSION_10_11_2 101102
#define MAC_OS_X_VERSION_10_11_3 101103
#define __SPI_AVAILABLE(...) 
#define R2_HOME_RC_DIR R_JOIN_2_PATHS (R2_HOME_CONFIGDIR, "radare2rc.d")
#define _CACHED_RUNES (1 <<8 )
#define CRTS_IFLOW 0x00020000
#define MACH_MSG_TYPE_MOVE_SEND 17
#define PF_MAX AF_MAX
#define DT_SOCK 12
#define PROC_FLAG_ADAPTIVE 0x100000
#define CHAR_MAX SCHAR_MAX
#define __SWIFT_UNAVAILABLE_MSG(_msg) 
#define HOST_AUDIT_CONTROL_PORT (2 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define VM_MEMORY_LIBNETWORK 89
#define IPC_EVENTLINK_NULL ((ipc_eventlink_t) 0)
#define SEEK_DATA 4
#define CPU_SUBTYPE_ARM_V7S ((cpu_subtype_t) 11)
#define IP_RECVTOS 27
#define OSSwapBigToHostInt64(x) OSSwapInt64(x)
#define TCP_MAXSEG 0x02
#define TASK_READ_PORT 6
#define _SYS_FILIO_H_ 
#define timerclear(tvp) (tvp)->tv_sec = (tvp)->tv_usec = 0
#define R_REGEX_NOTEOL 00002
#define POLLWRBAND 0x0100
#define OSSwapLittleToHostConstInt64(x) ((uint64_t)(x))
#define IN_CLASSC_HOST 0x000000ff
#define R_CONS_GREP_COUNT 10
#define B11100 28
#define B11101 29
#define _IOR(g,n,t) _IOC(IOC_OUT, (g), (n), sizeof(t))
#define _IOW(g,n,t) _IOC(IOC_IN, (g), (n), sizeof(t))
#define F_ADDFILESUPPL 104
#define B_EVEN(x) (((x) & 1) == 0)
#define IP_TOS 3
#define _SC_FILE_LOCKING 69
#define PROC_FLAG_IOS_APPLICATION PROC_FLAG_APPLICATION
#define PF_SIP AF_SIP
#define SIOCSIFALTMTU _IOW('i', 69, struct ifreq)
#define IPV6PORT_RESERVED 1024
#define TASK_DYLD_INFO_COUNT (sizeof(task_dyld_info_data_t) / sizeof(natural_t))
#define ZONE_NAME_MAX_LEN 80
#define pseudo_AF_PIP 25
#define TAG_BOOLEAN 0x01
#define _IOC(inout,group,num,len) (inout | ((len & IOCPARM_MASK) << 16) | ((group) << 8) | (num))
#define B11110 30
#define B11111 31
#define r_list_iter_free(x) (x)
#define __REGISTER_PREFIX__ 
#define __UINT16_MAX__ 0xffff
#define IN_ZERONET(i) (((u_int32_t)(i) & 0xff000000) == 0)
#define err_get_sub(err) (((err)>>14)&0xfff)
#define IOPOL_ATIME_UPDATES_OFF 1
#define R_UTF8_CIRCLE "\u25EF"
#define __INTPTR_MAX__ 0x7fffffffffffffffL
#define EIDRM 90
#define VTDLY 0x00010000
#define MACH_PORT_STATUS_FLAG_IMP_DONATION 0x08
#define RENAME_SWAP 0x00000002
#define TASK_OVERRIDE_QOS_POLICY 9
#define _PC_NAME_MAX 4
#define Color_BBGWHITE "\x1b[107m"
#define TCP6_MSS 1024
#define CLOCK_UPTIME_RAW _CLOCK_UPTIME_RAW
#define NOFLSH 0x80000000
#define IPPROTO_SCCSP 96
#define __FLT_IS_IEC_60559__ 2
#define _CS_XBS5_ILP32_OFFBIG_LIBS 26
#define VT1 0x00010000
#define MACH_ZONE_NAME_MAX_LEN 80
#define host_set_node_port(host,port) (host_set_special_port((host), HOST_NODE_PORT, (port)))
#define MEMORY_OBJECT_RETURN_ALL 2
#define _PC_MAX_CANON 2
#define PF_INET6 AF_INET6
#define HOST_FAIRPLAYD_PORT (24 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define S_ISWHT(m) (((m) & S_IFMT) == S_IFWHT)
#define ONOCR 0x00000020
#define RUNE_LINE_VERT "│"
#define IP_RECVTTL 24
#define VM_REGION_TOP_INFO_COUNT ((mach_msg_type_number_t) (sizeof(vm_region_top_info_data_t) / sizeof(natural_t)))
#define SIOCSIFMETRIC _IOW('i', 24, struct ifreq)
#define R_BUF_CUR 1
#define DEBUGGER 1
#define CPU_THREADTYPE_NONE ((cpu_threadtype_t) 0)
#define _POSIX_V7_ILP32_OFF32 __ILP32_OFF32
#define IGNBRK 0x00000001
#define R_IO_SEEK_SET 0
#define _SC_V6_LP64_OFF64 105
#define host_set_chud_port(host,port) host_set_launchctl_port(host, port)
#define LS_H 
#define __DARWIN_SUF_UNIX03 
#define MACH_PORT_TYPE_DNREQUEST 0x80000000
#define NDR_FLOAT_CRAY 2
#define TCPOLEN_FASTOPEN_REQ 2
#define RLIMIT_CPU_USAGE_MONITOR 0x2
#define strcpy(dest,...) __builtin___strcpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define __AVAILABILITY_INTERNAL_DEPRECATED_MSG(_msg) __attribute__((deprecated(_msg)))
#define _SC_REALTIME_SIGNALS 36
#define KEV_INET_CHANGED_ADDR 2
#define CPU_TYPE_POWERPC ((cpu_type_t) 18)
#define SCNiMAX __SCN_MAX_LENGTH_MODIFIER__ "i"
#define MACH_MSGH_BITS_CIRCULAR 0x10000000U
#define IPV6_2292PKTINFO 19
#define _STRUCT_X86_THREAD_FULL_STATE64 struct __darwin_x86_thread_full_state64
#define BYTE_SIZE 8
#define CHAR_MIN SCHAR_MIN
#define __STDC_VERSION__ 201710L
#define __DBL_NORM_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define __FLT_MANT_DIG__ 24
#define R_ABS(x) (((x)<0)?-(x):(x))
#define I386_PGSHIFT 12
#define VM_LEDGER_TAG_NEURAL 0x00000005
#define __IPHONE_5_0 50000
#define S_IFCHR 0020000
#define R_SOCKET_PROTO_DEFAULT R_SOCKET_PROTO_TCP
#define MACH_MSG_TRAILER_FORMAT_0 0
#define F_GETPATH_MTMINFO 71
#define RColor_BGRED RCOLOR(ALPHA_BG, 197, 15, 31, 0x00, 0x00, 0x00, 1)
#define PRIuPTR "lu"
#define S_ISFIFO(m) (((m) & S_IFMT) == S_IFIFO)
#define THREAD_STATE_NONE 13
#define __UINT64_C(c) c ## ULL
#define _XOPEN_PATH_MAX 1024
#define IS_NULLSTR(x) (!(x) || !*(x))
#define PRIXLEAST16 PRIX16
#define RUNECODE_ARROW_LEFT 0xcd
#define MACH_MSG_OVERWRITE 3
#define VM_MEMORY_COREGRAPHICS_BACKINGSTORES 57
#define HOST_VM_INFO_LATEST_COUNT HOST_VM_INFO_COUNT
#define R_REGEX_EESCAPE 5
#define MSG_WAITSTREAM 0x200
#define IPPROTO_ESP 50
#define MACH_VOUCHER_ATTR_IMPORTANCE_SELF ((mach_voucher_attr_recipe_command_t)200)
#define timevalcmp(l,r,cmp) timercmp(l, r, cmp)
#define SF_APPEND 0x00040000
#define VM_PURGABLE_STATE_MASK 3
#define _SUSECONDS_T 
#define AT_EACCESS 0x0010
#define B1000 8
#define B1001 9
#define KEV_DL_ISSUES 24
#define EXC_MASK_RPC_ALERT (1 << EXC_RPC_ALERT)
#define NET_RT_STAT 4
#define VM_FLAGS_SUPERPAGE_SHIFT 16
#define MIG_ROUTINE_ARG_DESCRIPTOR_NULL ((mig_routine_arg_descriptor_t)0)
#define MACH_MSG_GUARD_FLAGS_UNGUARDED_ON_SEND 0x0002
#define _POSIX_VERSION 200112L
#define OSWriteBigInt16(base,byteOffset,data) OSWriteSwapInt16(base, byteOffset, data)
#define PRIXLEAST32 PRIX32
#define SF_FIRMLINK 0x00800000
#define B1010 10
#define B1011 11
#define __INT_WCHAR_T_H 
#define ASN1_CLASS 0xC0
#define VTIME 17
#define VDISCARD 15
#define __DARWIN_ONLY_UNIX_CONFORMANCE 1
#define MACH_MSGH_BITS_HAS_REMOTE(bits) (MACH_MSGH_BITS_REMOTE(bits) != MACH_MSGH_BITS_ZERO)
#define _UNISTD_H_ 
#define SUPERPAGE_NONE 0
#define PTHREAD_PRIO_INHERIT 1
#define _PC_REC_INCR_XFER_SIZE 20
#define VM_PURGABLE_BEHAVIOR_SHIFT 6
#define MACH_VOUCHER_ATTR_KEY_ALL ((mach_voucher_attr_key_t)~0)
#define SDB_KT ut32
#define _SYS__TYPES_H_ 
#define EXC_I386_DIV 1
#define _CS_XBS5_LP64_OFF64_LIBS 30
#define ENOTSOCK 38
#define O_RDWR 0x0002
#define MACH_MSG_TYPE_MAKE_SEND 20
#define _SYS_SOCKIO_H_ 
#define __DARWIN_1050ALIAS_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_NON_CANCELABLE __DARWIN_SUF_UNIX03)
#define CPUFAMILY_POWERPC_G5 0xed76d8aa
#define _T_PTRDIFF_ 
#define WEOF __DARWIN_WEOF
#define MSG_FLUSH 0x400
#define EPERM 1
#define TCP_NOPUSH 0x04
#define EFL_ZF 0x00000040
#define __SSTR 0x0200
#define __FLT128_MAX_EXP__ 16384
#define ENOTDIR 20
#define PRIXLEAST64 PRIX64
#define subsystem_to_name_map_host_security { "host_security_create_task_token", 600 }, { "host_security_set_task_token", 601 }
#define err_ipc err_system(0x3)
#define PTHREAD_MUTEX_NORMAL 0
#define _DARWIN_FEATURE_UNIX_CONFORMANCE 3
#define EXC_TYPES_COUNT 14
#define PF_ECMA AF_ECMA
#define host_set_ktrace_background_port(host,port) (host_set_special_port((host), HOST_KTRACE_BACKGROUND_PORT, (port)))
#define THREAD_TIME_CONSTRAINT_POLICY 2
#define R_BIG_SSCANF_FORMAT_STR "%8x"
#define F_GETPATH 50
#define RColor_GREEN RCOLOR(ALPHA_FG, 19, 161, 14, 0x00, 0x00, 0x00, 2)
#define TCPOPT_TSTAMP_HDR (TCPOPT_NOP<<24|TCPOPT_NOP<<16|TCPOPT_TIMESTAMP<<8|TCPOLEN_TIMESTAMP)
#define MACH_PORT_STATUS_FLAG_GUARD_IMMOVABLE_RECEIVE 0x40
#define MAXTHREADNAMESIZE 64
#define KEV_INET_ARPRTRALIVE 10
#define DTF_REWIND 0x0004
#define UT16_ALIGN(x) (x + (x - (x % sizeof (ut16))))
#define KERN_INVALID_POLICY 28
#define PF_CHAOS AF_CHAOS
#define R_JOIN_5_PATHS(p1,p2,p3,p4,p5) p1 R_SYS_DIR p2 R_SYS_DIR p3 R_SYS_DIR p4 R_SYS_DIR p5
#define __SLBF 0x0001
#define TIOCMSET _IOW('t', 109, int)
#define timercmp(tvp,uvp,cmp) (((tvp)->tv_sec == (uvp)->tv_sec) ? ((tvp)->tv_usec cmp (uvp)->tv_usec) : ((tvp)->tv_sec cmp (uvp)->tv_sec))
#define _POSIX_STREAM_MAX 8
#define TRAP_TRACE 2
#define RENAME_SECLUDE 0x00000001
#define R_BUF_SET 0
#define __FLT32_MANT_DIG__ 24
#define IPV6_MULTICAST_HOPS 10
#define _SYS_SIZE_T_H 
#define _FSTDIO 
#define MACH_PORT_RECEIVE_STATUS_COUNT ((natural_t) (sizeof(mach_port_status_t)/sizeof(natural_t)))
#define NET_MAXID AF_MAX
#define MACH_SEND_MSG_FILTERED 0x10000017
#define TASK_VM_INFO_REV0_COUNT ((mach_msg_type_number_t) (TASK_VM_INFO_REV1_COUNT - 2))
#define RLIMIT_NPROC 7
#define __LP64_OFF64 (1)
#define __API_DEPRECATED_BEGIN(...) 
#define IPV6_PORTRANGE_HIGH 1
#define _STDDEF_H 
#define __SIG_ATOMIC_MAX__ 0x7fffffff
#define _MACH_DEBUG_VM_INFO_H_ 
#define LIBC_HAVE_PRIV_SET 0
#define FPS_BUSY 0x8000
#define __WATCHOS_3_0 30000
#define KEV_DL_RRC_STATE_CHANGED 28
#define SV_NODEFER SA_NODEFER
#define VM_PAGE_INFO_BASIC 1
#define sigdelset(set,signo) (*(set) &= ~__sigbits(signo), 0)
#define R_CONS_KEY_ESC 0x1b
#define R_NULLABLE 
#define __SIZE_T__ 
#define PAGE_MASK vm_page_mask
#define _INTMAX_T 
#define MPG_FLAGS_STRICT_REPLY_INVALID_VOUCHER (0x04ull << 56)
#define HOST_SCHED_INFO_COUNT ((mach_msg_type_number_t) (sizeof(host_sched_info_data_t)/sizeof(integer_t)))
#define OSReadLittleInt(x,y) OSReadLittleInt32(x, y)
#define VM_MEMORY_WEBASSEMBLY VM_MEMORY_JAVASCRIPT_CORE
#define MACH_MSG_TYPE_PORT_SEND MACH_MSG_TYPE_MOVE_SEND
#define O_DIRECTORY 0x00100000
#define UND_SERVER_NULL ((UNDServerRef) 0)
#define __SRD 0x0004
#define IPPORT_RESERVED __DARWIN_IPPORT_RESERVED
#define EFL_AC 0x00040000
#define THREAD_LATENCY_QOS_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (thread_latency_qos_policy_data_t) / sizeof (integer_t)))
#define SIOCGIFMETRIC _IOWR('i', 23, struct ifreq)
#define EFL_AF 0x00000010
#define MEMORY_OBJECT_DATA_SYNC 0x10
#define __SRW 0x0010
#define TAG_BMPSTRING 0x1E
#define __PTHREAD_MUTEXATTR_SIZE__ 8
#define _SC_SEM_VALUE_MAX 50
#define __ReplyUnion__host_priv_subsystem__defined 
#define VM_MEMORY_RAWCAMERA 79
#define R_RUN_PROFILE_NARGS 512
#define __IOS_UNAVAILABLE 
#define KEV_DL_DELMULTI 8
#define Color_CYAN "\x1b[36m"
#define __FLT64_NORM_MAX__ 1.79769313486231570814527423731704357e+308F64
#define SDB_SS ","
#define FFSYNC O_FSYNC
#define CPUFAMILY_ARM_SWIFT 0x1e2d6381
#define IPV6CTL_FORWSRCRT 5
#define _CS_POSIX_V6_ILP32_OFF32_LDFLAGS 3
#define _MACH_I386_KERN_RETURN_H_ 
#define TCPOPT_SACK_HDR (TCPOPT_NOP<<24|TCPOPT_NOP<<16|TCPOPT_SACK<<8)
#define __FLT64X_DIG__ 18
#define CPUFAMILY_ARM_VORTEX_TEMPEST 0x07d34b9f
#define r_crbtree_foreach(tree,iter,stuff) for (iter = tree? r_crbtree_first_node (tree): NULL, stuff = iter? iter->data: NULL; iter; iter = r_rbnode_next (iter), stuff = iter? iter->data: NULL)
#define R2_SDB_FCNSIGN R_JOIN_2_PATHS (R2_SDB, "fcnsign")
#define EFL_CF 0x00000001
#define IPV6_BINDV6ONLY IPV6_V6ONLY
#define CPUFAMILY_ARM_HURRICANE 0x67ceee93
#define PROCESSOR_SET_BASIC_INFO_COUNT ((mach_msg_type_number_t) (sizeof(processor_set_basic_info_data_t)/sizeof(natural_t)))
#define NL_TEXTMAX 2048
#define ELOOP 62
#define MACH_RCV_TRAILER_TYPE(x) (((x) & 0xf) << 28)
#define F_GETPROTECTIONLEVEL 77
#define MEMORY_OBJECT_NAME_NULL ((memory_object_name_t) 0)
#define MACH_VOUCHER_ATTR_NOOP ((mach_voucher_attr_recipe_command_t)0)
#define PT_ATTACH ePtAttachDeprecated
#define UF_HIDDEN 0x00008000
#define KERN_FAILURE 5
#define R_API __attribute__((visibility("default")))
#define CDTR_IFLOW 0x00040000
#define SO_REUSESHAREUID 0x1025
#define __FLT128_HAS_DENORM__ 1
#define NL_MSGMAX 32767
#define F_SETFD 2
#define F_SETFL 4
#define VM_VOLATILE_GROUP_DEFAULT VM_VOLATILE_GROUP_0
#define Color_BGBLACK "\x1b[40m"
#define SIG_UNBLOCK 2
#define VM_FLAGS_USER_MAP (VM_FLAGS_USER_ALLOCATE | VM_FLAGS_RETURN_4K_DATA_ADDR | VM_FLAGS_RETURN_DATA_ADDR)
#define _POSIX_RTSIG_MAX 8
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_4(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_5(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_6(x) x
#define VM_PURGABLE_DEBUG_FAULT (0x2 << VM_PURGABLE_DEBUG_SHIFT)
#define SM_COW 1
#define st8 signed char
#define TIOCPKT_STOP 0x04
#define IN_CLASSB_MAX 65536
#define R_MAX_DEFINED 
#define IPPROTO_CPHB 73
#define __ORDER_PDP_ENDIAN__ 3412
#define WANT_THREADS 1
#define RUNECODESTR_CURVE_CORNER_BL "\xd5"
#define _POSIX_MEMLOCK (-1)
#define RUNECODESTR_CURVE_CORNER_BR "\xd4"
#define _STRUCT_LAST_BRANCH_STATE struct __last_branch_state
#define SUB_MACH_TIMESPEC(t1,t2) do { if (((t1)->tv_nsec -= (t2)->tv_nsec) < 0) { (t1)->tv_nsec += (long) NSEC_PER_SEC; (t1)->tv_sec -= 1; } (t1)->tv_sec -= (t2)->tv_sec; } while (0)
#define __SWR 0x0008
#define SIOCGIFFUNCTIONALTYPE _IOWR('i', 173, struct ifreq)
#define x86_DEBUG_STATE 12
#define VM_MEMORY_ACCELERATE 75
#define SIOCSHIWAT _IOW('s', 0, int)
#define __DARWIN_UNIX03 1
#define _Null_unspecified 
#define R_ENDIAN_H 
#define BYTE_ORDER __DARWIN_BYTE_ORDER
#define s6_addr __u6_addr.__u6_addr8
#define USE_MMAN HAVE_MMAN
#define err_mach_ipc err_system(0x4)
#define PF_ROUTE AF_ROUTE
#define __MAC_11_0 110000
#define __MAC_11_1 110100
#define IOPOL_VFS_SKIP_MTIME_UPDATE_ON 1
#define R_REGEX_PEND 0040
#define MACH_SEND_INVALID_NOTIFY 0x1000000b
#define CBRK CEOL
#define CSTOP CTRL('s')
#define POLICY_RR_INFO_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_rr_info)/sizeof(integer_t)))
#define host_get_host_priv_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_PRIV_PORT, (port)))
#define __DARWIN_NO_LONG_LONG 0
#define CONS_BUFSZ 0x4f00
#define UINT64_MAX 18446744073709551615ULL
#define VM_MEMORY_SWIFT_METADATA 83
#define KEV_INET_PORTINUSE 8
#define __PTHREAD_RWLOCKATTR_SIZE__ 16
#define ILL_COPROC 7
#define __DARWIN_OSSwapInt16(x) ((__uint16_t)(__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt16(x) : _OSSwapInt16(x)))
#define __PTHREAD_RWLOCK_SIZE__ 192
#define RTLD_GLOBAL 0x8
#define _SYS_UN_H_ 
#define CPU_SUBTYPE_X86_64_ALL ((cpu_subtype_t)3)
#define __INT_FAST8_MAX__ 0x7f
#define NO_RECOVERY 3
#define ACCESSX_MAX_TABLESIZE (16 * 1024)
#define EINVAL 22
#define _ANSI_STDARG_H_ 
#define WSTOPSIG(x) (_W_INT(x) >> 8)
#define _WSTATUS(x) (_W_INT(x) & 0177)
#define _STRUCT_TIMESPEC struct timespec
#define KERN_EXCEPTION_PROTECTED 32
#define IP_MULTICAST_TTL 10
#define IPPROTO_UDP 17
#define VM_MAP_NULL ((vm_map_t) 0)
#define EXC_CRASH 10
#define TIME_RELATIVE 0x01
#define __MAC_10_15_4 101504
#define RAND_MAX 0x7fffffff
#define __FLT64X_HAS_INFINITY__ 1
#define IPV6CTL_MAXFRAGS 41
#define IPV6_FW_ADD 30
#define __DTF_ATEND 0x0020
#define VM_MEMORY_JAVASCRIPT_CORE 63
#define CPU_SUBTYPE_X86_ALL ((cpu_subtype_t)3)
#define SS_ONSTACK 0x0001
#define PF_DATAKIT AF_DATAKIT
#define CPU_TYPE_VAX ((cpu_type_t) 1)
#define PF_NDRV AF_NDRV
#define MEMORY_OBJECT_PERF_INFO_COUNT ((mach_msg_type_number_t) (sizeof(memory_object_perf_info_data_t)/sizeof(int)))
#define MACH_NOTIFY_DEAD_NAME (MACH_NOTIFY_FIRST + 010)
#define F_SETLK 8
#define MACH_MSG_PRIORITY_UNSPECIFIED (mach_msg_priority_t) 0
#define _SC_2_FORT_RUN 22
#define _BSD_SIZE_T_ 
#define MACH_PORT_RIGHT_PORT_SET ((mach_port_right_t) 3)
#define VM_VOLATILE_GROUP_1 (1 << VM_VOLATILE_GROUP_SHIFT)
#define x86_EXCEPTION_STATE32_COUNT ((mach_msg_type_number_t) ( sizeof (x86_exception_state32_t) / sizeof (int) ))
#define AF_UTUN 38
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_1(x) 
#define __UINT64_MAX__ 0xffffffffffffffffULL
#define BUFFER_H 
#define KERN_LOCK_UNSTABLE 39
#define IPV6CTL_RIP6STATS 36
#define IN_CLASSA(i) (((u_int32_t)(i) & 0x80000000) == 0)
#define IN_CLASSB(i) (((u_int32_t)(i) & 0xc0000000) == 0x80000000)
#define IN_CLASSC(i) (((u_int32_t)(i) & 0xe0000000) == 0xc0000000)
#define IN_CLASSD(i) (((u_int32_t)(i) & 0xf0000000) == 0xe0000000)
#define INADDR_ALLHOSTS_GROUP (u_int32_t)0xe0000001
#define __GNUC_WIDE_EXECUTION_CHARSET_NAME "UTF-32LE"
#define FPS_TOS_SHIFT 11
#define SIOCGDRVSPEC _IOWR('i', 123, struct ifdrv)
#define CPU_SUBTYPE_POWERPC_ALL ((cpu_subtype_t) 0)
#define MACH_PORT_RIGHT_LABELH ((mach_port_right_t) 5)
#define NI_NUMERICSERV 0x00000008
#define AF_INET 2
#define PTHREAD_PRIO_PROTECT 2
#define Color_RESET "\x1b[0m"
#define FWRITE 0x00000002
#define IP_DONTFRAG 28
#define ZOP_ALLOC 1
#define TAG_ENUMERATED 0x0A
#define GUARD_TYPE_MACH_PORT 0x1
#define _CS_XBS5_LP64_OFF64_LINTFLAGS 31
#define SIOCDIFADDR _IOW('i', 25, struct ifreq)
#define _SC_PRIORITIZED_IO 34
#define F_RDAHEAD 45
#define UT8_GT0 0x80U
#define SIOCSIFPHYS _IOW('i', 54, struct ifreq)
#define CPU_SUBTYPE_VAX8600 ((cpu_subtype_t) 9)
#define IP_RECVPKTINFO IP_PKTINFO
#define __DARWIN_NOCANCEL(sym) __asm("_" __STRING(sym) __DARWIN_SUF_NON_CANCELABLE)
#define MACH_RCV_TRAILER_SEQNO 1
#define F_GLOBAL_NOCACHE 55
#define MPG_FLAGS_STRICT_REPLY_NO_BANK_ATTR (0x08ull << 56)
#define CLOCK_THREAD_CPUTIME_ID _CLOCK_THREAD_CPUTIME_ID
#define _QUAD_HIGHWORD 1
#define TCPOLEN_TSTAMP_APPA (TCPOLEN_TIMESTAMP+2)
#define host_set_telemetry_port(host,port) (host_set_special_port((host), HOST_TELEMETRY_PORT, (port)))
#define _SC_V6_ILP32_OFFBIG 104
#define _SC_TRACE_LOG 100
#define POLICY_RR_LIMIT_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_rr_limit)/sizeof(integer_t)))
#define TCION 4
#define SO_NOADDRERR 0x1023
#define TAG_EOC 0x00
#define MACH_SEND_INVALID_VOUCHER 0x10000005
#define EFL_NT 0x00004000
#define _SYS_SOCKET_H_ 
#define _toupper(c) __toupper(c)
#define SIOCGIFPHYS _IOWR('i', 53, struct ifreq)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_1(x) 
#define NL0 0x00000000
#define __API_AVAILABLE_BEGIN_GET_MACRO(...) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_2(x) 
#define TAG_UTF8STRING 0x0C
#define MACH_PORT_IMPORTANCE_RECEIVER 5
#define EFL_OF 0x00000800
#define err_ipc_compat err_system(0x3f)
#define MPG_FLAGS_STRICT_REPLY_MISMATCHED_PERSONA (0x10ull << 56)
#define B600 600
#define IPC_SPACE_NULL ((ipc_space_t) 0)
#define _RUNE_T 
#define MPO_DENAP_RECEIVER 0x40
#define IP_OLD_FW_FLUSH 52
#define PT_READ_U 3
#define __MAC_10_11_4 101104
#define IOV_MAX 1024
#define R_BIG_MAX_VAL (R_BIG_DTYPE_TMP) UT32_MAX
#define MEMORY_OBJECT_COPY_SYNC 0x8
#define EFL_IOPL_USER 0x00003000
#define PROC_FLAG_IMPORTANCE_DONOR 0x400000
#define EFL_PF 0x00000004
#define PRIdLEAST8 PRId8
#define OSSwapLittleToHostInt32(x) ((uint32_t)(x))
#define THREAD_THROUGHPUT_QOS_POLICY 8
#define __RequestUnion__host_security_subsystem__defined 
#define _r_calloc r_calloc
#define THREAD_INFO_MAX (32)
#define __LDBL_EPSILON__ 1.08420217248550443400745280086994171e-19L
#define INTPTR_MAX 9223372036854775807L
#define __UINTMAX_C(c) c ## UL
#define MACH_RCV_TOO_LARGE 0x10004004
#define O_SYNC 0x0080
#define F_FULLFSYNC 51
#define minor(x) ((int32_t)((x) & 0xffffff))
#define r_unref(x,f) { assert (x->R_REF_NAME> 0); if (!--(x->R_REF_NAME)) { f(x); } }
#define IP_DROP_MEMBERSHIP 13
#define host_get_automountd_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_AUTOMOUNTD_PORT, (port)))
#define MACH_MSGH_BITS_REMOTE_MASK 0x0000001f
#define CPU_ARCH_ABI64 0x01000000
#define UINT_LEAST32_MAX UINT32_MAX
#define PTHREAD_STACK_MIN 8192
#define SYNC_POLICY_REVERSED 0x2
#define __SSE_MATH__ 1
#define R2_BIRTH "2022-04-30__12:15:59"
#define _V6_LPBIG_OFFBIG __LPBIG_OFFBIG
#define B_SET(x,n) ((x) |= (1ULL << (n)))
#define EFL_RF 0x00010000
#define _SC_THREADS 96
#define __k8 1
#define __WATCHOS_DEPRECATED(_start,_dep,_msg) 
#define CLOCK_MONOTONIC_RAW_APPROX _CLOCK_MONOTONIC_RAW_APPROX
#define R_SELWIDGET_DIR_UP 0
#define SIGSYS 12
#define R_MODE_CLASSDUMP 0x040
#define EFL_SF 0x00000080
#define _SC_PRIORITY_SCHEDULING 35
#define __API_TO_BE_DEPRECATED 100000
#define KEV_DL_IF_ATTACHED 9
#define host_set_atm_notification_port(host,port) (host_set_special_port((host), HOST_ATM_NOTIFICATION_PORT, (port)))
#define task_get_host_port(task,port) (task_get_special_port((task), TASK_HOST_PORT, (port)))
#define va_copy(d,s) __builtin_va_copy(d,s)
#define TASK_POWER_INFO_V2_COUNT_OLD ((mach_msg_type_number_t) (sizeof (task_power_info_v2_data_t) - sizeof(uint64_t)*2) / sizeof (natural_t))
#define O_CLOEXEC 0x01000000
#define MACH_MSGH_BITS_VOUCHER_MASK 0x001f0000
#define PRIu16 "hu"
#define MATTR_VAL_ON 1
#define VM_MEMORY_ASL 81
#define r_malloc(x) malloc((x))
#define R_BIT_SET(x,y) (((ut8*)x)[y>>4] |= (1<<(y&0xf)))
#define INT_LEAST64_MAX INT64_MAX
#define OFDEL 0x00020000
#define _PATH_SERVICES "/etc/services"
#define __WATCHOS_3_1_1 30101
#define IOC_OUT (__uint32_t)0x40000000
#define TASK_VM_INFO_COUNT ((mach_msg_type_number_t) (sizeof (task_vm_info_data_t) / sizeof (natural_t)))
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define TIOCSDTR _IO('t', 121)
#define VM_MEMORY_ATS 50
#define SO_TIMESTAMP_MONOTONIC 0x0800
#define MACH_PORT_TYPE_PORT_SET MACH_PORT_TYPE(MACH_PORT_RIGHT_PORT_SET)
#define VM_REGION_TOP_INFO 12
#define R_EMPTY { 0 }
#define TCSAFLUSH 2
#define HUD_BUF_SIZE 512
#define CONNECT_DATA_IDEMPOTENT 0x2
#define _W_INT(w) (*(int *)&(w))
#define IPV6_MIN_MEMBERSHIPS 31
#define KEV_INET6_ADDR_DELETED 3
#define _POSIX_TIMER_MAX 32
#define _ID_T 
#define EXC_I386_EMERR 6
#define IPPORT_USERRESERVED 5000
#define AF_OSI AF_ISO
#define VM_MEMORY_MALLOC_LARGE 3
#define TH_USAGE_SCALE 1000
#define IPV6CTL_RR_PRUNE 22
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_4(x) x
#define MACH_MSGH_BITS_ZERO 0x00000000
#define SAE_CONNID_ALL ((sae_connid_t)(-1ULL))
#define IN_CLASSA_MAX 128
#define MPG_FLAGS_NONE (0x00ull)
#define IN_PRIVATE(i) ((((u_int32_t)(i) & 0xff000000) == 0x0a000000) || (((u_int32_t)(i) & 0xfff00000) == 0xac100000) || (((u_int32_t)(i) & 0xffff0000) == 0xc0a80000))
#define TAG_VISIBLESTRING 0x1A
#define TCP_CONNECTION_INFO 0x106
#define UT64_ALIGN(x) (x + (x - (x % sizeof (ut64))))
#define R2_LIBDIR "/usr/local/lib"
#define RUNECODESTR_CURVE_CORNER_TL "\xd2"
#define RUNECODESTR_CURVE_CORNER_TR "\xd3"
#define IPPROTO_VINES 83
#define LATENCY_QOS_LAUNCH_DEFAULT_TIER LATENCY_QOS_TIER_3
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_8(x) x
#define SCNoMAX __SCN_MAX_LENGTH_MODIFIER__ "o"
#define EAI_AGAIN 2
#define INTPTR_MIN (-INTPTR_MAX-1)
#define TCPOPT_CC_HDR(ccopt) (TCPOPT_NOP<<24|TCPOPT_NOP<<16|(ccopt)<<8|TCPOLEN_CC)
#define RColor_MAGENTA RCOLOR(ALPHA_FG, 136, 23, 152, 0x00, 0x00, 0x00, 5)
#define INT8_C(v) (v)
#define FP_CHOP 3
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
#define _GID_T 
#define TIOCSTI _IOW('t', 114, char)
#define R_BIG_ARRAY_SIZE (512 / R_BIG_WORD_SIZE)
#define IN6_IS_ADDR_LOOPBACK(a) ((*(const __uint32_t *)(const void *)(&(a)->s6_addr[0]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[4]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[8]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[12]) == ntohl(1)))
#define __nullable 
#define _POSIX_ASYNCHRONOUS_IO (-1)
#define __FLT64_IS_IEC_60559__ 2
#define ZOP_FREE 0
#define __FLT32X_MIN_EXP__ (-1021)
#define TH_FLAGS_IDLE 0x2
#define __SDB_HT_H 
#define _SC_SAVED_IDS 7
#define TH_FLAGS_SWAPPED 0x1
#define MACH_MSGH_BITS_IMPHOLDASRT 0x10000000U
#define HT_(name) HtUP ##name
#define PRIxLEAST16 PRIx16
#define CPUFAMILY_ARM_11 0x8ff620d8
#define R2_VERSION_NUMBER 50504
#define PFMT32d "d"
#define TASK_QOS_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (struct task_qos_policy) / sizeof (integer_t)))
#define MACH_SEND_INVALID_HEADER 0x10000010
#define __INT_FAST16_MAX__ 0x7fff
#define HOST_VM_INFO_REV0_COUNT ((mach_msg_type_number_t) (HOST_VM_INFO_REV1_COUNT - 2))
#define VM_BEHAVIOR_DEFAULT ((vm_behavior_t) 0)
#define CONFIG_H 
#define err_sub(x) (((x)&0xfff)<<14)
#define CPU_STATE_USER 0
#define _CS_XBS5_ILP32_OFF32_LINTFLAGS 23
#define __RequestUnion__vm_map_subsystem__defined 
#define R_NEWS(x,y) (x*)malloc(sizeof(x)*(y))
#define VM_PURGABLE_NONVOLATILE 0
#define RColor_BYELLOW RCOLOR(ALPHA_FG, 249, 241, 165, 0x00, 0x00, 0x00, 11)
#define INT_LEAST64_MIN INT64_MIN
#define PAGE_SHIFT vm_page_shift
#define __DTF_SKIPREAD 0x0010
#define DOT_STYLE_NORMAL 0
#define HOST_VM_PURGABLE 9
#define F_SETNOSIGPIPE 73
#define PRIxLEAST32 PRIx32
#define CPU_SUBTYPE_ARM_V5TEJ ((cpu_subtype_t) 7)
#define SO_NOTIFYCONFLICT 0x1026
#define __FLT64_DIG__ 15
#define CPU_SUBTYPE_I386_ALL CPU_SUBTYPE_INTEL(3, 0)
#define EROFS 30
#define SIOCSPGRP _IOW('s', 8, int)
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
#define SCNi16 "hi"
#define _SC_SEMAPHORES 37
#define TASK_POWER_INFO_COUNT ((mach_msg_type_number_t) (sizeof (task_power_info_data_t) / sizeof (natural_t)))
#define CPU_SUBTYPE_MIPS_R3000a ((cpu_subtype_t) 6)
#define TH_FLAGS_GLOBAL_FORCED_IDLE 0x4
#define UINTMAX_MAX UINTMAX_C(18446744073709551615)
#define R_REGEX_DUMP 0200
#define KERN_INVALID_CAPABILITY 20
#define MACH_PORT_GEN(name) (((name) & 0xff) << 24)
#define r_oflist_array(x) x->array? x->array: (x->array = r_oflist_serialize (x)), x->array
#define __SEOF 0x0020
#define F_DUPFD_CLOEXEC 67
#define __LONG_MAX__ 0x7fffffffffffffffL
#define __IOS_EXTENSION_UNAVAILABLE(_msg) 
#define __WCHAR_T__ 
#define VM_MEMORY_COREUIFILE 77
#define IPPROTO_SWIPE 53
#define _POSIX2_PBS_CHECKPOINT (-1)
#define CPUSUBFAMILY_UNKNOWN 0
#define EXC_I386_BPTFLT 3
#define CPU_TYPE_SPARC ((cpu_type_t) 14)
#define _CS_POSIX_V6_LP64_OFF64_CFLAGS 8
#define __GNUC_EXECUTION_CHARSET_NAME "UTF-8"
#define __DARWIN_EXTSN_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_EXTSN __DARWIN_SUF_NON_CANCELABLE)
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
#define FPC_RC_RU 0x0800
#define NI_DGRAM 0x00000010
#define PRIxFAST16 PRIx16
#define R2_VERSION "5.5.4"
#define L_INCR SEEK_CUR
#define R_CONS_KEY_F10 0xfa
#define R_CONS_KEY_F12 0xfc
#define B0000 0
#define VM_REGION_SUBMAP_INFO_COUNT ((mach_msg_type_number_t) (sizeof(vm_region_submap_info_data_t) / sizeof(natural_t)))
#define IP_HDRINCL 2
#define __Reply__lock_set_subsystem__defined 
#define PF_LINK AF_LINK
#define IPV6_TCLASS 36
#define Color_WHITE "\x1b[37m"
#define RColor_CYAN RCOLOR(ALPHA_FG, 58, 150, 221, 0x00, 0x00, 0x00, 6)
#define CPUFAMILY_ARM_15 0xa8511bca
#define IPV6CTL_NEIGHBORGCTHRESH 46
#define PRIX16 "hX"
#define CTS(x,y,z,t,v) {t* _=(t*)CTA(x,y,z);*_=v;}
#define MACH_EXCEPTION_ERRORS 0x40000000
#define ST16_SUB_OVFCHK(a,b) ST16_ADD_OVFCHK(a,-(b))
#define IOPOL_VFS_TRIGGER_RESOLVE_DEFAULT 0
#define WIFSTOPPED(x) (_WSTATUS(x) == _WSTOPPED && WSTOPSIG(x) != 0x13)
#define R_BIT_UNSET(x,y) (((ut8*)x)[y>>4] &= ~(1<<(y&0xf)))
#define TASK_ABSOLUTETIME_INFO_COUNT ((mach_msg_type_number_t) (sizeof (task_absolutetime_info_data_t) / sizeof (natural_t)))
#define _POSIX_RAW_SOCKETS (-1)
#define _SS_ALIGNSIZE (sizeof(__int64_t))
#define __SERR 0x0040
#define CPU_SUBTYPE_ITANIUM_2 CPU_SUBTYPE_INTEL(11, 1)
#define PRIxFAST32 PRIx32
#define x86_AVX_STATE32 16
#define __PRAGMA_REDEFINE_EXTNAME 1
#define MACH_VOUCHER_ATTR_VALUE_MAX_NESTED ((mach_voucher_attr_value_handle_array_size_t)4)
#define CSTATUS CTRL('t')
#define va_end(v) __builtin_va_end(v)
#define S_TYPEISMQ(buf) (0)
#define OFILL 0x00000080
#define EXPR_NEST_MAX 32
#define SI_MESGQ 0x10005
#define _VA_LIST_DEFINED 
#define PRIX32 "X"
#define __WATCHOS_7_0 70000
#define __WATCHOS_7_1 70100
#define __WATCHOS_7_2 70200
#define __WATCHOS_7_4 70400
#define __SEG_FS 1
#define __INT_LEAST16_MAX__ 0x7fff
#define MACH_SEND_SYNC_OVERRIDE 0x00100000
#define NDR_INT_LITTLE_ENDIAN 1
#define CKILL CTRL('u')
#define container_of(ptr,type,member) ((type *)((char *)(__typeof__(((type *)0)->member) *){ptr} - offsetof(type, member)))
#define IGNCR 0x00000080
#define pthread_cleanup_pop(execute) __self->__cleanup_stack = __handler.__next; if (execute) (__handler.__routine)(__handler.__arg); }
#define TCP_RXT_FINDROP 0x100
#define R2_ZIGNS R_JOIN_4_PATHS ("share", "radare2", R2_VERSION, "zigns")
#define __INT64_MAX__ 0x7fffffffffffffffLL
#define _DARWIN_FEATURE_ONLY_UNIX_CONFORMANCE 1
#define EDEADLK 11
#define CPU_SUBTYPE_HPPA_7100LC ((cpu_subtype_t) 1)
#define _FD_SET 
#define __SEG_GS 1
#define __FLT32_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F32
#define VM_FLAGS_RETURN_4K_DATA_ADDR 0x800000
#define FPC_DM FPC_DE
#define VM_INHERIT_LAST_VALID VM_INHERIT_NONE
#define _POSIX2_PBS_TRACK (-1)
#define _SC_THREAD_KEYS_MAX 86
#define PRIxFAST64 PRIx64
#define x86_AVX_STATE64 (x86_AVX_STATE32 + 1)
#define __INT_LEAST64_TYPE__ long long int
#define INT64_MAX 9223372036854775807LL
#define DOT_STYLE_CONDITIONAL 1
#define R2_REGEX_H 
#define SIGCHLD 20
#define MACH_VOUCHER_ATTR_USER_DATA_STORE ((mach_voucher_attr_recipe_command_t)211)
#define MAXNAMLEN __DARWIN_MAXNAMLEN
#define __INT16_TYPE__ short int
#define _MACH_STD_TYPES_H_ 
#define VM_MEMORY_STACK 30
#define PRIX64 __PRI_64_LENGTH_MODIFIER__ "X"
#define R2_VERSION_MINOR 5
#define Color_BGGRAY "\x1b[100m"
#define IPV6_MAX_GROUP_SRC_FILTER 512
#define CPUMON_MAKE_FATAL 0x1000
#define R_CONS_GREP_WORD_SIZE 64
#define R_NUM_H 
#define _WEXT_OK (1<<18)
#define DT_UNKNOWN 0
#define R_LOG_WARN(fmtstr,...) r_log (MACRO_LOG_FUNC, __FILE__, __LINE__, R_LOGLVL_WARN, NULL, fmtstr, ##__VA_ARGS__);
#define _I386_EFLAGS_H_ 
#define _MACHTYPES_H_ 
#define B1800 1800
#define TH_FIN 0x01
#define IPPROTO_IDRP 45
#define PFMT32x "x"
#define _POSIX_FSYNC 200112L
#define MIG_NO_REPLY -305
#define CPU_SUBTYPE_VAX730 ((cpu_subtype_t) 4)
#define __FLT128_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define F_WRLCK 3
#define VM_SYNC_DEACTIVATE ((vm_sync_t) 0x10)
#define cdb_datapos(c) ((c)->dpos)
#define CLASS_UNIVERSAL 0x00
#define IPPROTO_NONE 59
#define EXC_I386_SSEEXTERR 8
#define R_REGEX_BACKR 02000
#define AT_REALDEV 0x0200
#define _STRUCT_X86_DEBUG_STATE64 struct __darwin_x86_debug_state64
#define IN_CLASSD_NET 0xf0000000
#define MEMORY_OBJECT_DATA_FLUSH_ALL 0x40
#define CPU_SUBTYPE_LITTLE_ENDIAN ((cpu_subtype_t) 0)
#define __TVOS_13_0 130000
#define _OS_OSBYTEORDERI386_H 
#define IXANY 0x00000800
#define EFL_TF 0x00000100
#define MSG_RCVMORE 0x4000
#define __TVOS_13_2 130200
#define r_utf16_to_utf8(wc) r_utf16_to_utf8_l ((wchar_t *)wc, -1)
#define PFMT32o "o"
#define PFMT32u "u"
#define CPUFAMILY_INTEL_WESTMERE 0x573b5eec
#define RUNE_CORNER_BL "└"
#define POLLWRITE 0x1000
#define _POSIX2_PBS (-1)
#define RUNE_CORNER_BR "┘"
#define ntohl(x) __DARWIN_OSSwapInt32(x)
#define THREAD_STATE_FLAVOR_LIST_10_13 130
#define SA_NOCLDSTOP 0x0008
#define CPU_SUBTYPE_ARM_V8M ((cpu_subtype_t) 17)
#define _XOPEN_IOV_MAX 16
#define ntohs(x) __DARWIN_OSSwapInt16(x)
#define __swift_compiler_version_at_least(...) 1
#define IPV6_FW_ZERO 33
#define HOST_RESOURCE_SIZES_COUNT ((mach_msg_type_number_t) (sizeof(kernel_resource_sizes_data_t)/sizeof(integer_t)))
#define _MALLOC_UNDERSCORE_MALLOC_H_ 
#define VM_MEMORY_ASSETSD 72
#define NCCS 20
#define SCNdMAX __SCN_MAX_LENGTH_MODIFIER__ "d"
#define MACH_RCV_INTERRUPT 0x00000400
#define EDEVERR 83
#define __SWIFT_UNAVAILABLE 
#define THREAD_SCHED_TIMESHARE_INFO 10
#define ILL_PRVREG 6
#define r_free(x) free((x))
#define KERN_RETURN_MAX 0x100
#define FPE_FLTINV 5
#define R_NSEC_PER_USEC 1000ULL
#define __LITTLE_ENDIAN__ 1
#define VQUIT 9
#define IN_CLASSB_HOST 0x0000ffff
#define IPPROTO_SRPC 90
#define _MACH_TIME_VALUE_H_ 
#define MACH_MSG_TYPE_PORT_ANY_SEND(x) (((x) >= MACH_MSG_TYPE_MOVE_SEND) && ((x) <= MACH_MSG_TYPE_MAKE_SEND_ONCE))
#define TASK_EXC_GUARD_MP_CORPSE 0x40
#define F_SETLKW 9
#define SIOCGIFDSTADDR _IOWR('i', 34, struct ifreq)
#define __DARWIN_WCHAR_MAX __WCHAR_MAX__
#define WIFSIGNALED(x) (_WSTATUS(x) != _WSTOPPED && _WSTATUS(x) != 0)
#define RUNECODE_ARROW_RIGHT 0xcc
#define TASK_BASIC_INFO_64 5
#define R_REGEX_BADBR 10
#define CPU_SUBTYPE_ARM_V6 ((cpu_subtype_t) 6)
#define MACH_MSG_FILTER_POLICY_ALLOW (mach_msg_filter_id)0
#define FP_FXSR 4
#define IPPROTO_NSP 31
#define _MACH_HOST_SPECIAL_PORTS_H_ 
#define _BSD_MACHINE_ENDIAN_H_ 
#define __FLT32_MIN_10_EXP__ (-37)
#define ls_tail(x) x->tail
#define VM_LIB64_SHR_TEXT ((user_addr_t) 0x00007FFF80000000ULL)
#define __GNUC_MINOR__ 2
#define O_POPUP 0x80000000
#define VM_REGION_SUBMAP_INFO_V0_SIZE (VM_REGION_SUBMAP_INFO_V1_SIZE - sizeof (unsigned int) )
#define __FLT32X_DIG__ 15
#define INADDR_CARP_GROUP (u_int32_t)0xe0000012
#define CPU_SUBTYPE_VAX785 ((cpu_subtype_t) 2)
#define NTOHL(x) (x) = ntohl((__uint32_t)x)
#define NTOHS(x) (x) = ntohs((__uint16_t)x)
#define __WORDSIZE 64
#define MEMORY_OBJECT_RETURN_NONE 0
#define __IPHONE_8_0 80000
#define __IPHONE_8_1 80100
#define __IPHONE_8_3 80300
#define __IPHONE_8_4 80400
#define INT64_MIN (-INT64_MAX-1)
#define r_warn_if_fail(expr) do { if (!(expr)) { r_assert_log (R_LOGLVL_WARN, "WARNING (%s:%d):%s%s runtime check failed: (%s)\n", __FILE__, __LINE__, R_FUNCTION, R_FUNCTION[0] ? ":" : "", #expr); } } while (0)
#define CPU_SUBTYPE_ARM64_32_ALL ((cpu_subtype_t) 0)
#define SDB_OPTION_ALL 0xff
#define _PC_REC_MIN_XFER_SIZE 22
#define VM_PROT_STRIP_READ ((vm_prot_t) 0x80)
#define LEDGER_NULL ((ledger_t) 0)
#define CIGNORE 0x00000001
#define _PTHREAD_MUTEX_SIG_init 0x32AAABA7
#define IXON 0x00000200
#define PRIXLEAST8 PRIX8
#define THREAD_INSPECT_NULL ((thread_inspect_t) 0)
#define ENAMETOOLONG 63
#define _MACH_I386_EXCEPTION_H_ 
#define __CONSTANT_CFSTRINGS__ 1
#define VM_MEMORY_COREDATA_OBJECTIDS 46
#define R_REF_FUNCTIONS(s,n) static inline void n ##_ref(s *x) { x->R_REF_NAME++; } static inline void n ##_unref(s *x) { r_unref (x, n ##_free); }
#define Color_RESET_NOBG "\x1b[27;22;24;25;28;39m"
#define CLD_STOPPED 5
#define __SCN_MAX_LENGTH_MODIFIER__ "j"
#define CRTSCTS (CCTS_OFLOW | CRTS_IFLOW)
#define __DBL_HAS_QUIET_NAN__ 1
#define NDR_CHAR_ASCII 0
#define __FLT64X_MAX__ 1.18973149535723176502126385303097021e+4932F64x
#define FPC_IC_AFF 0x1000
#define MACH_MSGH_BITS_VOUCHER(bits) (((bits) & MACH_MSGH_BITS_VOUCHER_MASK) >> 16)
#define Color_BCYAN "\x1b[96m"
#define EXTPROC 0x00000800
#define HAS_CLOCK_NANOSLEEP 0
#define __Request__host_priv_subsystem__defined 
#define MACH_PORT_QLIMIT_BASIC (5)
#define SYNC_POLICY_FIXED_PRIORITY 0x1
#define ELAST 106
#define AF_VSOCK 40
#define VM_PROT_EXECUTE_ONLY (VM_PROT_EXECUTE|VM_PROT_STRIP_READ)
#define __code_model_small__ 1
#define MACH_VOUCHER_NULL ((mach_voucher_t) 0)
#define AF_COIP 20
#define VREPRINT 6
#define AT_SYMLINK_NOFOLLOW 0x0020
#define SIGNED_MUL_OVERFLOW_CHECK(overflow_name,type_base,type_min,type_max) static inline bool overflow_name(type_base a, type_base b) { if (a > 0) { if (b > 0) { return a > type_max / b; } return b < type_min / a; } if (b > 0) { return a < type_min / b; } return a && b < type_max / a; }
#define MAC_OS_X_VERSION_10_12_1 101201
#define MAC_OS_X_VERSION_10_12_2 101202
#define MAC_OS_X_VERSION_10_12_4 101204
#define R2_HOME_HISTORY R_JOIN_2_PATHS (R2_HOME_CACHEDIR, "history")
#define host_get_amfid_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_AMFID_PORT, (port)))
#define ASN1_LENSHORT 0x7F
#define MACH_VOUCHER_ATTR_VALUE_FLAGS_PERSIST ((mach_voucher_attr_value_flags_t)1)
#define TIOCSIG _IO('t', 95)
#define __DARWIN_WCHAR_MIN (-0x7fffffff - 1)
#define ESOCKTNOSUPPORT 44
#define Color_BBLACK Color_GRAY
#define AF_LOCAL AF_UNIX
#define __INTPTR_TYPE__ long int
#define __API_DEPRECATED_REP_GET_MACRO(...) 
#define host_get_syspolicyd_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_SYSPOLICYD_PORT, (port)))
#define __SIZEOF_FLOAT__ 4
#define host_get_container_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_CONTAINERD_PORT, (port)))
#define F_ALLOCATECONTIG 0x00000002
#define x86_LAST_BRANCH_STATE_COUNT ((mach_msg_type_number_t)(sizeof(last_branch_state_t) / sizeof(int)))
#define _SC_XOPEN_ENH_I18N 109
#define TCP_KEEPINTVL 0x101
#define TASK_WAIT_STATE_INFO_COUNT ((mach_msg_type_number_t) (sizeof(task_wait_state_info_data_t) / sizeof(natural_t)))
#define USER_ADDR_NULL ((user_addr_t) 0)
#define _POSIX_TRACE_NAME_MAX 8
#define PF_BOND ((uint32_t)0x626f6e64)
#define _STRUCT_TIMEVAL64 
#define __API_UNAVAILABLE_END 
#define PARODD 0x00002000
#define R_IPI 
#define IPV6_V6ONLY 27
#define R_LOG_FATAL(fmtstr,...) r_log (MACRO_LOG_FUNC, __FILE__, __LINE__, R_LOGLVL_FATAL, NULL, fmtstr, ##__VA_ARGS__);
#define OPOST 0x00000001
#define S_ISBLK(m) (((m) & S_IFMT) == S_IFBLK)
#define MAP_MEM_IO 2
#define R_MODE_SIMPLEST 0x020
#define TIME_ABSOLUTE 0x00
#define NET_RT_MAXID 11
#define LOCAL_PEERPID 0x002
#define R_SYS_BITS_27 16
#define IPPROTO_GGP 3
#define BRKINT 0x00000002
#define VM_LEDGER_TAG_NONE 0x00000000
#define SCNxPTR "lx"
#define HOST_SCHED_INFO 3
#define _SECURE__STRINGS_H_ 
#define __API_DEPRECATED_WITH_REPLACEMENT(...) 
#define FP_RND_DOWN 1
#define PROCESSOR_CPU_LOAD_INFO_COUNT ((mach_msg_type_number_t) (sizeof(processor_cpu_load_info_data_t)/sizeof(natural_t)))
#define R_NEW0(x) (x*)calloc(1,sizeof(x))
#define __FLT32_DECIMAL_DIG__ 9
#define NDR_CHAR_EBCDIC 1
#define R_EVENT_H 
#define MAP_MEM_WCOMB 4
#define IN6ADDR_LOOPBACK_INIT {{{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01 }}}
#define BUFSIZ 1024
#define SIOCSIFMTU _IOW('i', 52, struct ifreq)
#define MACH_RCV_INTERRUPTED 0x10004005
#define OSSwapLittleToHostInt16(x) ((uint16_t)(x))
#define TAG_VIDEOTEXSTRING 0x15
#define KEV_INET6_DEFROUTER 6
#define _WCHAR_T_DECLARED 
#define MACH_MSG_PORT_DESCRIPTOR 0
#define TASK_FLAVOR_NAME 3
#define R_REGEX_ENOSYS (-1)
#define PRIXFAST8 PRIX8
#define CPU_SUBTYPE_VAX750 ((cpu_subtype_t) 3)
#define THREAD_SCHED_FIFO_INFO 12
#define VM_BEHAVIOR_RSEQNTL ((vm_behavior_t) 3)
#define CEOF CTRL('d')
#define INADDR_NONE 0xffffffff
#define _SC_2_PBS 59
#define TIOCGPGRP _IOR('t', 119, int)
#define MACH_MSG_STRICT_REPLY 0x00000200
#define R_SIGNAL_H 
#define F_GETPATH_NOFIRMLINK 102
#define IP_OLD_FW_ZERO 53
#define KERN_INVALID_SECURITY 35
#define IP_PORTRANGE 19
#define __MACH__ 1
#define __amd64__ 1
#define SCM_CREDS 0x03
#define VM_REGION_SUBMAP_INFO_V1_COUNT_64 ((mach_msg_type_number_t) (VM_REGION_SUBMAP_INFO_V1_SIZE / sizeof (natural_t)))
#define R_PTR_ALIGN_NEXT(v,t) ((char *)(((size_t)(v) + (t - 1)) & ~(t - 1)))
#define F_GETNOSIGPIPE 74
#define __DARWIN_LITTLE_ENDIAN 1234
#define SCNoFAST16 SCNo16
#define task_set_kernel_port(task,port) (task_set_special_port((task), TASK_KERNEL_PORT, (port)))
#define R2_TIME_H 
#define R_PJ_H 1
#define R_USEC_PER_MSEC 1000ULL
#define F_GETSIGSINFO 105
#define _UINT16_T 
#define __LPBIG_OFFBIG (1)
#define ICANON 0x00000100
#define _I386__PARAM_H_ 
#define PRIXMAX __PRI_MAX_LENGTH_MODIFIER__ "X"
#define AF_NETBIOS 33
#define EPROTONOSUPPORT 43
#define UINT_MAX (INT_MAX * 2U + 1U)
#define _MACH_VM_PROT_H_ 
#define S_ISSOCK(m) (((m) & S_IFMT) == S_IFSOCK)
#define _U_INT 
#define OSSwapHostToBigConstInt16(x) OSSwapConstInt16(x)
#define TCP_MAXHLEN (0xf<<2)
#define IPV6_MAX_MEMBERSHIPS 4095
#define __DARWIN_STRUCT_STAT64 { dev_t st_dev; mode_t st_mode; nlink_t st_nlink; __darwin_ino64_t st_ino; uid_t st_uid; gid_t st_gid; dev_t st_rdev; __DARWIN_STRUCT_STAT64_TIMES off_t st_size; blkcnt_t st_blocks; blksize_t st_blksize; __uint32_t st_flags; __uint32_t st_gen; __int32_t st_lspare; __int64_t st_qspare[2]; }
#define CPUFAMILY_INTEL_COMETLAKE 0x1cf8a03e
#define POLLIN 0x0001
#define SCNoFAST32 SCNo32
#define IPPROTO_MICP 95
#define _IOLBF 1
#define ___POSIX_C_DEPRECATED_STARTING_199506L 
#define SIOCGIFCAP _IOWR('i', 91, struct ifreq)
#define Ht_(name) ht_up_ ##name
#define O_SHLOCK 0x00000010
#define SCNuMAX __SCN_MAX_LENGTH_MODIFIER__ "u"
#define IOCGROUP(x) (((x) >> 8) & 0xff)
#define __FLT_MAX_EXP__ 128
#define B1100 12
#define B1101 13
#define RUNE_CORNER_TR "┐"
#define TIOCPKT_FLUSHWRITE 0x02
#define IPPROTO_IPCV 71
#define __DARWIN_WCTYPE_TOP_inline __header_inline
#define IN_LOOPBACKNET 127
#define _PTHREAD_RECURSIVE_MUTEX_SIG_init 0x32AAABA2
#define r_flist_get(it) *(it++)
#define _PTHREAD_MUTEXATTR_T 
#define TASK_SCHED_INFO 14
#define ST32_SUB_OVFCHK(a,b) ST32_ADD_OVFCHK(a,-(b))
#define MACH_MSGH_BITS_HOLDS_IMPORTANCE_ASSERTION(bits) (((bits) & MACH_MSGH_BITS_IMPHOLDASRT) != MACH_MSGH_BITS_ZERO)
#define B1111 15
#define POLICY_FIFO_LIMIT_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_fifo_limit)/sizeof(integer_t)))
#define _SC_THREAD_PRIORITY_SCHEDULING 89
#define R_CONS_GET_CURSOR_POSITION "\x1b[6n"
#define TCPOLEN_SACK 8
#define ___int_size_t_h 
#define _RSIZE_T 
#define _POSIX2_EXPR_NEST_MAX 32
#define _POSIX_REALTIME_SIGNALS (-1)
#define IOPOL_ATIME_UPDATES_DEFAULT 0
#define _POSIX_V6_LP64_OFF64 __LP64_OFF64
#define CCEQ(val,c) ((c) == (val) ? (val) != _POSIX_VDISABLE : 0)
#define IPV6_RTHDR_LOOSE 0
#define __LASTBRANCH_MAX 32
#define SCNoFAST64 SCNo64
#define __SIZEOF_FLOAT128__ 16
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffLL
#define _STRUCT_X86_EXCEPTION_STATE32 struct __darwin_i386_exception_state
#define PTHREAD_MUTEX_ERRORCHECK 1
#define SO_UPCALLCLOSEWAIT 0x1027
#define UINT_FAST64_MAX UINT64_MAX
#define _POSIX_SEM_VALUE_MAX 32767
#define OSSwapHostToLittleInt32(x) ((uint32_t)(x))
#define MACH_RCV_MSG 0x00000002
#define host_set_gssd_port(host,port) (host_set_special_port((host), HOST_GSSD_PORT, (port)))
#define r_io_submap_to(sm) (r_io_map_to (sm))
#define VM_LEDGER_TAG_MEDIA 0x00000003
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
#define _MACH_ERROR_ 1
#define _CS_XBS5_ILP32_OFFBIG_LINTFLAGS 27
#define _VM_PAGE_SIZE_H_ 
#define IPPROTO_VMTP 81
#define TASK_VM_INFO_REV2_COUNT ((mach_msg_type_number_t) (TASK_VM_INFO_REV3_COUNT - 42))
#define IS_OCTAL(x) ((x) >= '0' && (x) <= '7')
#define CPU_TYPE_ARM64 (CPU_TYPE_ARM | CPU_ARCH_ABI64)
#define IPPROTO_TPXX 39
#define MACH_MSGH_BITS_SET(remote,local,voucher,other) (MACH_MSGH_BITS_SET_PORTS((remote), (local), (voucher)) | ((other) &~ MACH_MSGH_BITS_PORTS_MASK))
#define ARROW_RIGHT 8
#define _POSIX_VDISABLE ((unsigned char)'\377')
#define _POSIX_MAX_CANON 255
#define FD_SETSIZE __DARWIN_FD_SETSIZE
#define Colors_PLAIN { Color_BLACK, Color_RED, Color_WHITE, Color_GREEN, Color_MAGENTA, Color_YELLOW, Color_CYAN, Color_BLUE, Color_GRAY}
#define pseudo_AF_XTP 19
#define SCNu32 "u"
#define TASK_EXC_GUARD_MP_ONCE 0x20
#define _APPEND_OK (1<<13)
#define stdout __stdoutp
#define _STRUCT_X86_EXCEPTION_STATE64 struct __darwin_x86_exception_state64
#define CPU_SUBTYPE_ARM_V4T ((cpu_subtype_t) 5)
#define IP_OPTIONS 1
#define MACH_MSGH_BITS_PORTS_MASK (MACH_MSGH_BITS_REMOTE_MASK | MACH_MSGH_BITS_LOCAL_MASK | MACH_MSGH_BITS_VOUCHER_MASK)
#define NL_SETMAX 255
#define __WINT_WIDTH__ 32
#define OSSwapHostToLittleInt64(x) ((uint64_t)(x))
#define __SMBF 0x0080
#define CPUFAMILY_INTEL_HASWELL 0x10b282dc
#define IN6_IS_ADDR_MC_GLOBAL(a) (IN6_IS_ADDR_MULTICAST(a) && (__IPV6_ADDR_MC_SCOPE(a) == __IPV6_ADDR_SCOPE_GLOBAL))
#define LINE_UP 3
#define IUTF8 0x00004000
#define r_cons_print(x) r_cons_strcat (x)
#define TASK_DEBUG_CONTROL_PORT 10
#define R_RBTREE_MAX_HEIGHT 62
#define SIGUSR2 31
#define IN6_ARE_ADDR_EQUAL(a,b) (memcmp(&(a)->s6_addr[0], &(b)->s6_addr[0], sizeof (struct in6_addr)) == 0)
#define __FLT32X_MAX_10_EXP__ 308
#define EXC_CORPSE_VARIANT_BIT 0x100
#define __DARWIN_SUF_EXTSN "$DARWIN_EXTSN"
#define RLIMIT_DATA 2
#define VM_PAGE_QUERY_PAGE_PRESENT 0x1
#define EFL_CLR 0xfff88028
#define SO_WANTOOBFLAG 0x8000
#define _STRUCT_UCONTEXT struct __darwin_ucontext
#define ls_push(x,y) ls_append(x,y)
#define MACH_SEND_TIMED_OUT 0x10000004
#define CDB_HPLIST 1000
#define R_UTF8_DOOR "🚪"
#define O_RDONLY 0x0000
#define MATTR_VAL_CACHE_FLUSH 6
#define TCP_FASTOPEN 0x105
#define r_pvector_lower_bound(vec,x,i,cmp) do { size_t h = (vec)->v.len, m; for (i = 0; i < h; ) { m = i + ((h - i) >> 1); if ((cmp ((x), ((void **)(vec)->v.a)[m])) > 0) { i = m + 1; } else { h = m; } } } while (0)
#define VM_FLAGS_4GB_CHUNK 0x0004
#define _PTHREAD_RWLOCK_T 
#define CPU_SUBTYPE_ARM_V7F ((cpu_subtype_t) 10)
#define SCNu64 __SCN_64_LENGTH_MODIFIER__ "u"
#define CPU_SUBTYPE_ARM_V7K ((cpu_subtype_t) 12)
#define CPU_SUBTYPE_ARM_V7M ((cpu_subtype_t) 15)
#define R2_HOME_SDB_FCNSIGN R_JOIN_2_PATHS (R2_HOME_DATADIR, "fcnsign")
#define KERN_LOCK_OWNED 40
#define __ENABLE_LEGACY_MAC_AVAILABILITY 1
#define EMSGSIZE 40
#define VM_FLAGS_SUPERPAGE_MASK 0x70000
#define x86_FLOAT_STATE32_COUNT ((mach_msg_type_number_t) (sizeof(x86_float_state32_t)/sizeof(unsigned int)))
#define _SC_ATEXIT_MAX 107
#define MACH_MSG_TYPE_DISPOSE_RECEIVE 24
#define IPPROTO_DSTOPTS 60
#define _tolower(c) __tolower(c)
#define LOCK_SET_NULL ((lock_set_t) 0)
#define B28800 28800
#define KERNEL_BOOT_INFO_MAX (4096)
#define __DARWIN_ALIAS(sym) __asm("_" __STRING(sym) __DARWIN_SUF_UNIX03)
#define MACH_PORT_TYPE_SEND_ONCE MACH_PORT_TYPE(MACH_PORT_RIGHT_SEND_ONCE)
#define __FLT128_MIN__ 3.36210314311209350626267781732175260e-4932F128
#define _SIZET_ 
#define TASK_NULL ((task_t) 0)
#define MCAST_INCLUDE 1
#define _PC_ALLOC_SIZE_MIN 16
#define VM_SET_FLAGS_ALIAS(flags,alias) (flags) = (((flags) & ~VM_FLAGS_ALIAS_MASK) | (((alias) & ~VM_FLAGS_ALIAS_MASK) << 24))
#define _LP64 1
#define IN_LOOPBACK(i) (((u_int32_t)(i) & 0xff000000) == 0x7f000000)
#define MACH_MSG_VM_KERNEL 0x00000400
#define ___WCTYPE_H_ 
#define SIGEMT 7
#define KEV_INET_SIFNETMASK 6
#define VM_FLAGS_USER_REMAP (VM_FLAGS_FIXED | VM_FLAGS_ANYWHERE | VM_FLAGS_RANDOM_ADDR | VM_FLAGS_OVERWRITE| VM_FLAGS_RETURN_DATA_ADDR | VM_FLAGS_RESILIENT_CODESIGN | VM_FLAGS_RESILIENT_MEDIA)
#define __UINT8_C(c) c
#define EFBIG 27
#define __FLT64_MAX_EXP__ 1024
#define INT_FAST64_MIN INT64_MIN
#define TIOCPKT_DATA 0x00
#define IPPROTO_RSVP 46
#define _MBSTATE_T 
#define r_io_bind_init(x) memset(&x,0,sizeof(x))
#define R_SYS_HOME "HOME"
#define IPPROTO_RVD 66
#define TIOCEXT _IOW('t', 96, int)
#define TIMEVAL_TO_TIMESPEC(tv,ts) { (ts)->tv_sec = (tv)->tv_sec; (ts)->tv_nsec = (tv)->tv_usec * 1000; }
#define __API_UNAVAILABLE(...) 
#define R2_WWWROOT R2_DATDIR "/radare2/" R2_VERSION "/www"
#define fropen(cookie,fn) funopen(cookie, fn, 0, 0, 0)
#define PF_SNA AF_SNA
#define _PTHREAD_ERRORCHECK_MUTEX_SIG_init 0x32AAABA1
#define Color_INSERT Color_BGREEN
#define CPU_SUBTYPE_VAX8200 ((cpu_subtype_t) 7)
#define __UINT64_TYPE__ long long unsigned int
#define EXC_SYSCALL 7
#define CPU_SUBTYPE_X86_ARCH1 ((cpu_subtype_t)4)
#define R_PERM_PRIV 16
#define EAI_ADDRFAMILY 1
#define __has_feature(x) 0
#define _PTHREAD_H 
#define USING_MIG_STRNCPY_ZEROFILL 
#define _PTHREAD_T 
#define SIOCGIFXMEDIA _IOWR('i', 72, struct ifmediareq)
#define NO_DATA 4
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_15_1(x) x
#define R2_HUD R_JOIN_4_PATHS ("share", "radare2", R2_VERSION, "hud")
#define KEV_DL_ADDMULTI 7
#define VM_MEMORY_CORPSEINFO 80
#define _SC_REGEXP 77
#define AF_IEEE80211 37
#define THREAD_BACKGROUND_POLICY 5
#define R2_BINDINGS "lib/radare2-bindings/" R2_VERSION
#define EXC_I386_NMIFLT 2
#define EAGAIN 35
#define _XOPEN_NAME_MAX 255
#define _SC_IOV_MAX 56
#define _SC_PASS_MAX 131
#define RColor_BLUE RCOLOR(ALPHA_FG, 0, 55, 218, 0x00, 0x00, 0x00, 4)
#define W_STOPCODE(sig) ((sig) << 8 | _WSTOPPED)
#define W32DBG_WRAP 
#define MIG_SUBSYSTEM_NULL ((mig_subsystem_t)0)
#define SCNiFAST8 SCNi8
#define SIOCGIFASYNCMAP _IOWR('i', 124, struct ifreq)
#define AF_CCITT 10
#define OXTABS 0x00000004
#define ONLRET 0x00000040
#define NET_SERVICE_TYPE_SIG 2
#define _POSIX_MAPPED_FILES 200112L
#define MB_CUR_MAX __mb_cur_max
#define SIGXCPU 24
#define __FLT128_HAS_QUIET_NAN__ 1
#define O_TRUNC 0x00000400
#define TASK_AFFINITY_TAG_INFO 16
#define GET_MZI_COLLECTABLE_FLAG(val) ((val) & 1)
#define sdb_json_format_free(x) free ((x)->buf)
#define GET_MZI_COLLECTABLE_BYTES(val) ((val) >> 1)
#define __DARWIN_ALIGN(p) ((__darwin_size_t)((__darwin_size_t)(p) + __DARWIN_ALIGNBYTES) &~ __DARWIN_ALIGNBYTES)
#define R_INTERVAL_H 
#define R_NEWCOPY(x,y) (x*)r_new_copy(sizeof(x), y)
#define NETSVC_MRKNG_UNKNOWN 0
#define _SC_MAPPED_FILES 47
#define EXC_I386_NOEXTFLT 7
#define IOPOL_SCOPE_DARWIN_BG 2
#define __TVOS_11_3 110300
#define feof_unlocked(p) __sfeof(p)
#define RColor_BBGMAGENTA RCOLOR(ALPHA_BG, 180, 0, 158, 0x00, 0x00, 0x00, 13)
#define PRIiMAX __PRI_MAX_LENGTH_MODIFIER__ "i"
#define MACH_PORT_TYPE_LABELH MACH_PORT_TYPE(MACH_PORT_RIGHT_LABELH)
#define R_BTW(x,y,z) (((x)>=(y))&&((y)<=(z)))?y:x
#define __TVOS_11_4 110400
#define _STRUCT_LAST_BRANCH_RECORD struct __last_branch_record
#define EF_IS_SYNC_ROOT 0x00000004
#define _MACH_MACHINE_BOOLEAN_H_ 
#define AT_SYMLINK_FOLLOW 0x0040
#define x86_FLOAT_STATE64 5
#define __FLT64X_MIN__ 3.36210314311209350626267781732175260e-4932F64x
#define PAGE_SIZE vm_page_size
#define VM_MEMORY_OS_ALLOC_ONCE 73
#define _SC_AIO_MAX 43
#define INT8_MAX 127
#define O_WRONLY 0x0001
#define ENOTCONN 57
#define KEV_INET_SIFBRDADDR 5
#define SCNuLEAST16 SCNu16
#define IP_FW_FLUSH 42
#define IS_SEPARATOR(x) ((x) == ' ' || (x)=='\t' || (x) == '\n' || (x) == '\r' || (x) == ' '|| (x) == ',' || (x) == ';' || (x) == ':' || (x) == '[' || (x) == ']' || (x) == '(' || (x) == ')' || (x) == '{' || (x) == '}')
#define SIOCIFCREATE2 _IOWR('i', 122, struct ifreq)
#define CONNECT_RESUME_ON_READ_WRITE 0x1
#define PTHREAD_CREATE_JOINABLE 1
#define _BSD_MACHINE_TYPES_H_ 
#define MACH_MSG_TYPE_DISPOSE_SEND 25
#define S_IFLNK 0120000
#define R_REGEX_BASIC 0000
#define MACH_PORT_QLIMIT_SMALL (16)
#define ULLFMT "ll"
#define SV_NOCLDSTOP SA_NOCLDSTOP
#define _SC_CHILD_MAX 2
#define _POSIX_MESSAGE_PASSING (-1)
#define SDB_MAX_PATH 256
#define POLLERR 0x0008
#define EPFNOSUPPORT 46
#define _lock_set_user_ 
#define __FLT32_EPSILON__ 1.19209289550781250000000000000000000e-7F32
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_1(x) 
#define __SMOD 0x2000
#define PROC_FLAG_DARWINBG 0x8000
#define INTMAX_MAX INTMAX_C(9223372036854775807)
#define _I386_FP_SAVE_H_ 
#define INADDR_LOOPBACK (u_int32_t)0x7f000001
#define host_get_ktrace_background_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_KTRACE_BACKGROUND_PORT, (port)))
#define CSUSP CTRL('z')
#define processor_MSG_COUNT 6
#define _POSIX2_BC_BASE_MAX 99
#define UF_DATAVAULT 0x00000080
#define PTHREAD_ONCE_INIT {_PTHREAD_ONCE_SIG_init, {0}}
#define _XOPEN_STREAMS (-1)
#define msgh_kind msgh_seqno
#define TASK_ID_TOKEN_NULL ((task_id_token_t) 0)
#define time_value_add_usec(val,micros) { if (((val)->microseconds += (micros)) >= TIME_MICROS_MAX) { (val)->microseconds -= TIME_MICROS_MAX; (val)->seconds++; } }
#define _POSIX_MQ_PRIO_MAX 32
#define x86_AVX512_STATE (x86_AVX512_STATE32 + 2)
#define major(x) ((int32_t)(((u_int32_t)(x) >> 24) & 0xff))
#define MEMORY_OBJECT_COPY_TEMPORARY 3
#define __DEC_EVAL_METHOD__ 2
#define ECONNABORTED 53
#define _SIZE_T 
#define MACH_RCV_LARGE 0x00000004
#define MACH_PORT_RECEIVE_STATUS 2
#define NET_RT_FLAGS_PRIV 10
#define _WCTYPE_T 
#define R_MODE_SET 0x002
#define CPU_SUBTYPE_INTEL_FAMILY_MAX 15
#define _SC_2_PBS_TRACK 64
#define CPU_SUBTYPE_MIPS_R2300 ((cpu_subtype_t) 1)
#define _CRMASK (~(_CACHED_RUNES - 1))
#define SOCK_STREAM 1
#define r_flist_next(it) *it!=0
#define OPEN_MAX 10240
#define x86_AVX_STATE64_COUNT ((mach_msg_type_number_t) (sizeof(x86_avx_state64_t)/sizeof(unsigned int)))
#define VM_FLAGS_USER_ALLOCATE (VM_FLAGS_FIXED | VM_FLAGS_ANYWHERE | VM_FLAGS_PURGABLE | VM_FLAGS_4GB_CHUNK | VM_FLAGS_RANDOM_ADDR | VM_FLAGS_NO_CACHE | VM_FLAGS_PERMANENT | VM_FLAGS_OVERWRITE | VM_FLAGS_SUPERPAGE_MASK | VM_FLAGS_ALIAS_MASK)
#define CPU_SUBTYPE_POWERPC_7400 ((cpu_subtype_t) 10)
#define __APPLE_API_STABLE 
#define IPPROTO_ICMPV6 58
#define R_PERM_R 4
#define R_PERM_W 2
#define R_PERM_X 1
#define IOPOL_TYPE_VFS_TRIGGER_RESOLVE 5
#define __Reply__processor_set_subsystem__defined 
#define F_ADDSIGS 59
#define TASK_SCHED_TIMESHARE_INFO 10
#define HOST_VM_INFO64_REV1_COUNT HOST_VM_INFO64_LATEST_COUNT
#define SET_MAP_MEM(caching,flags) ((flags) = ((((unsigned int)(caching)) << 24) & 0xFF000000) | ((flags) & 0xFFFFFF));
#define AF_NATM 31
#define SZT_ADD_OVFCHK(x,y) ((SIZE_MAX - (x)) < (y))
#define _SC_THREAD_PROCESS_SHARED 90
#define MACH_VM_MAX_ADDRESS ((mach_vm_offset_t) VM_MAX_PAGE_ADDRESS)
#define OFF_MIN LLONG_MIN
#define _FILE_OFFSET_BITS 64
#define x86_EXCEPTION_STATE32 3
#define PROCESSOR_NULL ((processor_t) 0)
#define IP_MAX_SOCK_MUTE_FILTER 128
#define SDB_PRINTF_CHECK(fmt,dots) __attribute__ ((format (printf, fmt, dots)))
#define B50 50
#define __INTMAX_WIDTH__ 64
#define __ATOMIC_ACQ_REL 4
#define _SA_FAMILY_T 
#define MIG_BAD_ID -303
#define host_get_audit_control_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_AUDIT_CONTROL_PORT, (port)))
#define __ORDER_BIG_ENDIAN__ 4321
#define r_oflist_append(x,y) r_oflist_deserialize (x), r_list_append (x, y)
#define CPUSUBFAMILY_ARM_M 3
#define KVLSZ 4
#define POLICY_NULL 0
#define SDB_VERSION "1.8.3"
#define RLIMIT_MEMLOCK 6
#define EF_IS_SPARSE 0x00000010
#define THREAD_AFFINITY_POLICY 4
#define PF_IMPLINK AF_IMPLINK
#define O_EXCL 0x00000800
#define CPUFAMILY_INTEL_6_13 0xaa33392b
#define NET_RT_FLAGS 2
#define __UINT32_C(c) c ## U
#define IPPROTO_BHA 49
#define PTHREAD_SCOPE_SYSTEM 1
#define PRIdFAST32 PRId32
#define _POSIX2_VERSION 200112L
#define EISCONN 56
#define clock_priv_MSG_COUNT 2
#define SIOCRSLVMULTI _IOWR('i', 59, struct rslvmulti_req)
#define B75 75
#define UNSIGNED_MUL_OVERFLOW_CHECK(overflow_name,type_base,type_min,type_max) static inline bool overflow_name(type_base a, type_base b) { return (a > 0 && b > 0 && a > type_max / b); }
#define x86_EXCEPTION_STATE 9
#define __TVOS_10_0 100000
#define __TVOS_10_1 100100
#define __TVOS_10_2 100200
#define SIGEV_THREAD 3
#define MACH_PORT_QLIMIT_LARGE (1024)
#define MEMORY_OBJECT_IO_SYNC 0x20
#define OSReadBigInt64(base,byteOffset) OSReadSwapInt64(base, byteOffset)
#define PAGE_MAX_SIZE (1 << PAGE_MAX_SHIFT)
#define r_list_foreach(list,it,pos) if (list) for (it = list->head; it && (pos = it->data, 1); it = it->n)
#define VM_PURGABLE_SET_STATE_FROM_KERNEL ((vm_purgable_t) 3)
#define IP_DROP_SOURCE_MEMBERSHIP 71
#define INTMAX_MIN (-INTMAX_MAX-1)
#define CPU_SUBTYPE_POWERPC_7450 ((cpu_subtype_t) 11)
#define INADDR_BROADCAST (u_int32_t)0xffffffff
#define AF_UNIX 1
#define PROCESSOR_BASIC_INFO 1
#define _SC_TRACE_INHERIT 99
#define VM_MEMORY_APPLICATION_SPECIFIC_1 240
#define IP_RECVRETOPTS 6
#define SF_SYNTHETIC 0xc0000000
#define _STDLIB_H_ 
#define IPPROTO_SVMTP 82
#define CPUFAMILY_ARM_LIGHTNING_THUNDER 0x462504d2
#define MACH_RCV_TRAILER_LABELS 8
#define TASK_SCHED_RR_INFO 11
#define CPU_SUBTYPE_486SX CPU_SUBTYPE_INTEL(4, 8)
#define F_FINDSIGS 78
#define EUSERS 68
#define _VA_LIST_T_H 
#define AF_PPP 34
#define INT_FAST16_MAX INT16_MAX
#define Color_BBLUE "\x1b[94m"
#define __PIC__ 2
#define RUNECODESTR_CORNER_BL "\xcb"
#define EXC_I386_NOEXT 3
#define RUNECODESTR_CORNER_BR "\xca"
#define _CS_POSIX_V6_LP64_OFF64_LIBS 10
#define PRIdFAST64 PRId64
#define VM_STATISTICS_TRUNCATE_TO_32_BIT(value) ((uint32_t)(((value) > UINT32_MAX ) ? UINT32_MAX : (value)))
#define __UINT_FAST32_TYPE__ unsigned int
#define FD_ISSET(n,p) __DARWIN_FD_ISSET(n, p)
#define O_NOFOLLOW 0x00000100
#define _SC_PAGE_SIZE _SC_PAGESIZE
#define FP_RND_NEAR 0
#define TCPCI_OPT_TIMESTAMPS 0x00000001
#define _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS 35
#define POLL_ERR 4
#define PTHREAD_EXPLICIT_SCHED 2
#define TIOCSETA _IOW('t', 20, struct termios)
#define TIOCSETD _IOW('t', 27, int)
#define __FLT32X_NORM_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define task_set_bootstrap_port(task,port) (task_set_special_port((task), TASK_BOOTSTRAP_PORT, (port)))
#define TASK_POWER_INFO_V2_COUNT ((mach_msg_type_number_t) (sizeof (task_power_info_v2_data_t) / sizeof (natural_t)))
#define I386_EXCEPTION_STATE_COUNT i386_EXCEPTION_STATE_COUNT
#define MAP_MEM_NAMED_REUSE 0x080000
#define SEGV_NOOP 0
#define NETSVC_MRKNG_LVL_L3L2_BK 3
#define HT_NULL_VALUE 0
#define r_flist_unref(x) x
#define UF_TRACKED 0x00000040
#define VM_MEMORY_ROSETTA_10 239
#define EQFULL 106
#define POLICY_FIFO_BASE_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_fifo_base)/sizeof(integer_t)))
#define VM_LEDGER_TAG_NETWORK 0x00000002
#define CPU_ARCH_MASK 0xff000000
#define R2_PLUGINS "lib/radare2/" R2_VERSION
#define __NDR_convert__mig_reply_error_t__defined 
#define __alloca(size) __builtin_alloca(size)
#define TIOCGDRAINWAIT _IOR('t', 86, int)
#define R_GETOPT_H 1
#define MACH_MSG_SIZE_NULL (mach_msg_size_t *) 0
#define INT_FAST64_MAX INT64_MAX
#define CPU_SUBTYPE_MIPS_ALL ((cpu_subtype_t) 0)
#define _IO(g,n) _IOC(IOC_VOID, (g), (n), 0)
#define _MACH_I386_VM_TYPES_H_ 
#define S_IWGRP 0000020
#define __CAST_AWAY_QUALIFIER(variable,qualifier,type) (type) (long)(variable)
#define RUNECODESTR_LINE_CROSS "\xc9"
#define SA_NOCLDWAIT 0x0020
#define __va_list__ 
#define I386_PGBYTES 4096
#define err_local err_system(0x3e)
#define KERN_NOT_WAITING 48
#define ASN1_LENLONG 0x80
#define r_str_cat(x,y) memmove ((x) + strlen (x), (y), strlen (y) + 1);
#define SO_SNDLOWAT 0x1003
#define R2_PREFIX "/usr/local"
#define KERN_INVALID_ARGUMENT 4
#define _POSIX2_CHAR_TERM 200112L
#define __SSE2__ 1
#define __PRI_8_LENGTH_MODIFIER__ "hh"
#define SO_ERROR 0x1007
#define EXC_RESOURCE 11
#define TIOCCDTR _IO('t', 120)
#define _STRUCT_XMM_REG struct __darwin_xmm_reg
#define _SC_2_FORT_DEV 21
#define mach_vm_round_page(x) (((mach_vm_offset_t)(x) + vm_page_mask) & ~((signed)vm_page_mask))
#define PTHREAD_MUTEX_RECURSIVE 2
#define __API_AVAILABLE_BEGIN(...) 
#define AF_PUP 4
#define _POSIX_TRACE_EVENT_NAME_MAX 30
#define __INT32_TYPE__ int
#define _POSIX_THREAD_DESTRUCTOR_ITERATIONS 4
#define VM_MAP_ENTRY_MAX (256)
#define HAVE_EPRINTF 1
#define sub_emask (err_sub(0xfff))
#define r_oflist_length(x,y) r_list_length (x, y)
#define _SC_TRACE_EVENT_NAME_MAX 127
#define FASYNC O_ASYNC
#define __SIZEOF_DOUBLE__ 8
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_4(x) 
#define RUSAGE_INFO_CURRENT RUSAGE_INFO_V5
#define VM_PAGE_QUERY_PAGE_EXTERNAL 0x80
#define VM_GET_FLAGS_ALIAS(flags,alias) (alias) = ((flags) & VM_FLAGS_ALIAS_MASK) >> 24
#define VM_PURGABLE_NO_AGING (0x1 << VM_PURGABLE_NO_AGING_SHIFT)
#define __INT_LEAST32_WIDTH__ 32
#define PF_APPLETALK AF_APPLETALK
#define __unavailable 
#define __DRIVERKIT_20_0 200000
#define TASK_EXC_GUARD_MP_DELIVER 0x10
#define IPPROTO_NHRP 54
#define VM_PROT_WRITE ((vm_prot_t) 0x02)
#define MCAST_BLOCK_SOURCE 84
#define R_TH_SEM_T sem_t *
#define FIXINC_WRAP_STDIO_H_STDIO_STDARG_H 1
#define IN_CLASSA_NET 0xff000000
#define SEM_FAILED ((sem_t *)-1)
#define _T_SIZE 
#define TCPOPT_CC 11
#define UINT8_C(v) (v)
#define IP_MULTICAST_IF 9
#define __ReplyUnion__lock_set_subsystem__defined 
#define POLLEXTEND 0x0200
#define __INT16_C(c) c
#define TH_STATE_HALTED 5
#define R_SYS_ENDIAN_NONE 0
#define _V6_LP64_OFF64 __LP64_OFF64
#define RColor_BGGRAY RColor_BBGBLACK
#define DTTOIF(dirtype) ((dirtype) << 12)
#define _POSIX2_C_BIND 200112L
#define FAPPEND O_APPEND
#define POLL_IN 1
#define R_LOG_H 
#define r_utf8_to_utf16(cstring) r_utf8_to_utf16_l ((char *)cstring, -1)
#define __IPV6_ADDR_SCOPE_ORGLOCAL 0x08
#define PF_UTUN AF_UTUN
#define __VM_LEDGER_ACCOUNTING_POSTMARK 2019032600
#define _R_UTIL_ALLOC_H_ 1
#define TIOCSTAT _IO('t', 101)
#define __INT_FAST16_WIDTH__ 16
#define __UINTMAX_MAX__ 0xffffffffffffffffUL
#define HOST_INFO_MAX (1024)
#define MATTR_CACHE 1
#define _SC_TRACE_SYS_MAX 129
#define _POSIX_V7_ILP32_OFFBIG __ILP32_OFFBIG
#define VM_PAGE_QUERY_PAGE_REF 0x4
#define ONOEOT 0x00000008
#define R_SPACES_H 
#define TIOCGSIZE TIOCGWINSZ
#define BITWORD_BITS_SHIFT 6
#define SIZE_T_MAX ULONG_MAX
#define PF_INET AF_INET
#define _CTERMID_H_ 
#define ENOPOLICY 103
#define ECONNREFUSED 61
#define _MACH_VM_STATISTICS_H_ 
#define _RATTR_OK (1<<15)
#define ASN1_FORM 0x20
#define _POSIX2_C_DEV 200112L
#define __Request__mach_port_subsystem__defined 
#define R_REGEX_ICASE 0002
#define VM_PURGABLE_STATE_MAX 3
#define TIMESPEC_TO_TIMEVAL(tv,ts) { (tv)->tv_sec = (ts)->tv_sec; (tv)->tv_usec = (ts)->tv_nsec / 1000; }
#define __DBL_MAX_10_EXP__ 308
#define NI_NUMERICHOST 0x00000002
#define LOCKGROUP_ATTR_STAT 0x01ULL
#define RUNECODE_CORNER_BL 0xcb
#define CPU_SUBTYPE_PENTIUM_4 CPU_SUBTYPE_INTEL(10, 0)
#define __const const
#define UINT16_MAX 65535
#define __LDBL_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951L
#define RUNECODE_CORNER_BR 0xca
#define R_LIB_SYMNAME "radare_plugin"
#define RTLD_FIRST 0x100
#define _FILESEC_REMOVE_ACL ((void *)1)
#define _POSIX_TRACE_LOG (-1)
#define system_emask (err_system(0x3f))
#define HOST_CLOSURED_PORT (21 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define IPPROTO_SATEXPAK 64
#define VM_MEMORY_WEBCORE_PURGEABLE_BUFFERS 69
#define TTYDEF_SPEED (B9600)
#define _ACCESS_EXTENDED_MASK (_READ_OK | _WRITE_OK | _EXECUTE_OK | _DELETE_OK | _APPEND_OK | _RMFILE_OK | _REXT_OK | _WEXT_OK | _RATTR_OK | _WATTR_OK | _RPERM_OK | _WPERM_OK | _CHOWN_OK)
#define Color_BGRED "\x1b[41m"
#define R_MODE_EQUAL 0x080
#define MPG_FLAGS_STRICT_REPLY_INVALID_REPLY_DISP (0x01ull << 56)
#define SDB_MIN_KEY 1
#define _STRUCT_OPMASK_REG struct __darwin_opmask_reg
#define RCOLOR(a,r,g,b,bgr,bgg,bgb,id16) (RColor) {0, a, r, g, b, bgr, bgg, bgb, id16}
#define FD_CLR(n,p) __DARWIN_FD_CLR(n, p)
#define SIG_IGN (void (*)(int))1
#define VSTART 12
#define timersub(tvp,uvp,vvp) do { (vvp)->tv_sec = (tvp)->tv_sec - (uvp)->tv_sec; (vvp)->tv_usec = (tvp)->tv_usec - (uvp)->tv_usec; if ((vvp)->tv_usec < 0) { (vvp)->tv_sec--; (vvp)->tv_usec += 1000000; } } while (0)
#define IN_LOCAL_GROUP(i) (((u_int32_t)(i) & 0xffffff00) == 0xe0000000)
#define DST_CAN 6
#define EF_IS_PURGEABLE 0x00000008
#define r_ref_init(x) x->R_REF_NAME = 1
#define TAG_NULL 0x05
#define EEXIST 17
#define __PTRDIFF_TYPE__ long int
#define CPUFAMILY_ARM_TYPHOON 0x2c91a47e
#define UT8_SUB_OVFCHK(a,b) UT8_ADD_OVFCHK(a,-(b))
#define __FLT64_MANT_DIG__ 53
#define host_set_audit_control_port(host,port) (host_set_special_port((host), HOST_AUDIT_CONTROL_PORT, (port)))
#define EPROGMISMATCH 75
#define _MACH_ERROR_H_ 
#define _USER_SIGNAL_H 
#define TCPOPT_CCNEW 12
#define SF_DATALESS 0x40000000
#define SIOCSIFPHYADDR _IOW('i', 62, struct ifaliasreq)
#define x86_EXCEPTION_STATE64 6
#define CPU_SUBTYPE_ARM64_PTR_AUTH_VERSION(x) (((x) & CPU_SUBTYPE_ARM64_PTR_AUTH_MASK) >> 24)
#define TASK_EXC_GUARD_VM_FATAL 0x08
#define CPUSUBFAMILY_ARM_HC_HD 5
#define _SC_2_PBS_CHECKPOINT 61
#define TCP_MINMSS 216
#define VM_MEMORY_ROSETTA 230
#define HAVE_PTHREAD_NP 1
#define F_LOG2PHYS_EXT 65
#define TASK_VM_INFO_PURGEABLE_ACCOUNT 27
#define R_REGEX_ECTYPE 4
#define MACH_MSG_TYPE_PORT_RECEIVE MACH_MSG_TYPE_MOVE_RECEIVE
#define MACH_PORT_QLIMIT_ZERO (0)
#define TASK_EXC_GUARD_VM_CORPSE 0x04
#define BC_STRING_MAX 1000
#define x86_AVX512_STATE32 19
#define SM_SHARED_ALIASED 7
#define IPV6_2292NEXTHOP 21
#define IP_RSVP_VIF_OFF 18
#define UF_IMMUTABLE 0x00000002
#define CLD_KILLED 2
#define _SSIZE_T 
#define _IOWR(g,n,t) _IOC(IOC_INOUT, (g), (n), sizeof(t))
#define __FLT128_DIG__ 33
#define SHUT_RD 0
#define __unreachable_ok_push _Pragma("GCC diagnostic push") _Pragma("GCC diagnostic ignored \"-Wunreachable-code\"")
#define RUNECODESTR_CORNER_TR "\xd0"
#define r_str_cpy(x,y) memmove ((x), (y), strlen (y) + 1);
#define MACH_PORT_LIMITS_INFO 1
#define RColor_YELLOW RCOLOR(ALPHA_FG, 193, 156, 0, 0x00, 0x00, 0x00, 3)
#define __NDR_convert__char_rep__ 0
#define S_IREAD S_IRUSR
#define buffer_PEEK(s) ( (s)->x + (s)->n )
#define KERNEL_AUDIT_TOKEN_VALUE { {0, 0, 0, 0, 0, 0, 0, 0} }
#define IPV6CTL_MCAST_PMTU 44
#define CTRL(x) (x&037)
#define EXC_MACF_MAX 0x2FFFF
#define _SC_SPAWN 79
#define IN6_IS_ADDR_V4MAPPED(a) ((*(const __uint32_t *)(const void *)(&(a)->s6_addr[0]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[4]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[8]) == ntohl(0x0000ffff)))
#define CTO(y,z) ((size_t) &((y*)0)->z)
#define HOST_CPU_LOAD_INFO 3
#define __PRI_MAX_LENGTH_MODIFIER__ "j"
#define __DARWIN_NON_CANCELABLE 0
#define ILL_NOOP 0
#define SIG_SETMASK 3
#define _VA_LIST_T 
#define IOPOL_THROTTLE 3
#define R2_SDB_MAGIC R_JOIN_2_PATHS (R2_SDB, "magic")
#define EXC_MASK_CORPSE_NOTIFY (1 << EXC_CORPSE_NOTIFY)
#define AF_IPX 23
#define R_STRPOOL_INC 1024
#define _CHOWN_OK (1<<21)
#define MONOTONIC_FREEBSD (__FreeBSD__ && __FreeBSD_version >= 1101000)
#define PRIo16 "ho"
#define SCM_TIMESTAMP_MONOTONIC 0x04
#define CPU_SUBTYPE_MC98601 ((cpu_subtype_t) 1)
#define R_AXML_H 
#define THREAD_BASIC_INFO_COUNT ((mach_msg_type_number_t) (sizeof(thread_basic_info_data_t) / sizeof(natural_t)))
#define EXC_ARITHMETIC 3
#define VM_MEMORY_CM_RPC 93
#define SSZT_ADD_OVFCHK(a,x) ((((x) > 0) && ((a) > SSIZE_MAX - (x))) || (((x) < 0) && (a) < SSIZE_MIN - (x)))
#define R2_CONFIGURE_H 
#define __GCC_ATOMIC_LLONG_LOCK_FREE 2
#define UT64_LT0 0x7FFFFFFFFFFFFFFFULL
#define __MAC_10_10 101000
#define CPU_SUBTYPE_VAX_ALL ((cpu_subtype_t) 0)
#define MACH_TASK_BASIC_INFO 20
#define SA_USERSPACE_MASK (SA_ONSTACK | SA_RESTART | SA_RESETHAND | SA_NOCLDSTOP | SA_NODEFER | SA_NOCLDWAIT | SA_SIGINFO)
#define __enum_open 
#define __IPV6_ADDR_SCOPE_LINKLOCAL 0x02
#define __MAC_10_12 101200
#define EXC_EMULATION 4
#define PRIo32 "o"
#define R_MEM_H 
#define __POSIX_C_DEPRECATED(ver) ___POSIX_C_DEPRECATED_STARTING_ ##ver
#define DTF_NODUP 0x0002
#define CPU_SUBTYPE_UVAXII ((cpu_subtype_t) 6)
#define __LDBL_NORM_MAX__ 1.18973149535723176502126385303097021e+4932L
#define PATH_MAX 1024
#define AF_ISO 7
#define _OS_OSBYTEORDER_H 
#define OSReadBigInt32(base,byteOffset) OSReadSwapInt32(base, byteOffset)
#define PRIoMAX __PRI_MAX_LENGTH_MODIFIER__ "o"
#define TIOCSTOP _IO('t', 111)
#define EXC_I386_INVOPFLT 6
#define EXC_I386_EXTOVRFLT 9
#define TCP_NOOPT 0x08
#define RColor_BMAGENTA RCOLOR(ALPHA_FG, 180, 0, 158, 0x00, 0x00, 0x00, 13)
#define RTLD_LAZY 0x1
#define SHUT_WR 1
#define BC_BASE_MAX 99
#define LEDGER_LIMIT_INFINITY ((ledger_amount_t)((1ULL << 63) - 1))
#define MB_LEN_MAX 6
#define VM_REGION_SUBMAP_SHORT_INFO_COUNT_64 ((mach_msg_type_number_t) (sizeof (vm_region_submap_short_info_data_64_t) / sizeof (natural_t)))
#define MAX_ZTRACE_DEPTH 15
#define TIOCDCDTIMESTAMP _IOR('t', 88, struct timeval)
#define MACH_PORT_TYPE_NONE ((mach_port_type_t) 0L)
#define __INT_LEAST64_WIDTH__ 64
#define ECHOKE 0x00000001
#define Color_BGMAGENTA "\x1b[45m"
#define VM_MEMORY_ROSETTA_ARENA 236
#define x86_FLOAT_STATE32 2
#define IOPOL_MATERIALIZE_DATALESS_FILES_ON 2
#define _USECONDS_T 
#define INT_LEAST16_MAX INT16_MAX
#define PRIoLEAST8 PRIo8
#define _CS_POSIX_V6_ILP32_OFF32_LIBS 4
#define __SSE3__ 1
#define __UINT_FAST8_TYPE__ unsigned char
#define EOPNOTSUPP 102
#define _GNU_SOURCE 
#define SCNuLEAST32 SCNu32
#define _POSIX_SAVED_IDS 200112L
#define CPU_SUBTYPE_ANY ((cpu_subtype_t) -1)
#define SCNi8 __PRI_8_LENGTH_MODIFIER__ "i"
#define IPPROTO_BLT 30
#define R2_DIFF_H 
#define __P(protos) protos
#define TASK_FLAVOR_READ 1
#define _RMFILE_OK (1<<14)
#define IOPOL_TYPE_VFS_ATIME_UPDATES 2
#define IPV6CTL_SOURCECHECK_LOGINT 11
#define PRIo64 __PRI_64_LENGTH_MODIFIER__ "o"
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
#define msgh_reserved msgh_voucher_port
#define SDB_RS ','
#define _STRUCT_X86_AVX_STATE32 struct __darwin_i386_avx_state
#define __DARWIN_CLK_TCK 100
#define RUNECODE_MAX 0xd6
#define FUNC_ATTR_ALLOC_SIZE(x) __attribute__((alloc_size(x)))
#define _T_WCHAR 
#define SAE_ASSOCID_ALL ((sae_associd_t)(-1ULL))
#define IN6ADDR_LINKLOCAL_ALLV2ROUTERS_INIT {{{ 0xff, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16 }}}
#define VM_PURGABLE_DEBUG_MASK (0x3 << VM_PURGABLE_DEBUG_SHIFT)
#define IP_UNBLOCK_SOURCE 73
#define ECHONL 0x00000010
#define IPV6_RTHDR_TYPE_0 0
#define VM_LEDGER_FLAGS (VM_LEDGER_FLAG_NO_FOOTPRINT)
#define host_get_sysdiagnose_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_SYSDIAGNOSE_PORT, (port)))
#define SA_USERTRAMP 0x0100
#define ___POSIX_C_DEPRECATED_STARTING_199009L 
#define MACH_MSGH_BITS_LOCAL(bits) (((bits) & MACH_MSGH_BITS_LOCAL_MASK) >> 8)
#define S_ISCHR(m) (((m) & S_IFMT) == S_IFCHR)
#define _SC_XOPEN_UNIX 115
#define BUS_ADRALN 1
#define __FLT32X_MAX_EXP__ 1024
#define B9600 9600
#define _CS_POSIX_V6_ILP32_OFFBIG_LIBS 7
#define R_BUF_END 2
#define VM_PAGE_QUERY_PAGE_SPECULATIVE 0x40
#define MIG_TYPE_ERROR -300
#define _QUAD_LOWWORD 0
#define MAC_OS_X_VERSION_10_13_1 101301
#define MAC_OS_X_VERSION_10_13_2 101302
#define MAC_OS_X_VERSION_10_13_4 101304
#define TASK_THREAD_TIMES_INFO 3
#define SAE_ASSOCID_ANY 0
#define _POSIX_SHARED_MEMORY_OBJECTS (-1)
#define __unused __attribute__((__unused__))
#define FIONBIO _IOW('f', 126, int)
#define RUNECODE_CORNER_TL 0xcf
#define _STDBOOL_H 
#define AT_FDONLY 0x0400
#define _STRUCT_X86_AVX_STATE64 struct __darwin_x86_avx_state64
#define host_get_launchctl_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_LAUNCHCTL_PORT, (port)))
#define ls_unref(x) x
#define host_priv_MSG_COUNT 26
#define __ATOMIC_ACQUIRE 2
#define _POSIX2_BC_SCALE_MAX 99
#define MACH_VOUCHER_ATTR_CONTROL_FLAGS_NONE ((mach_voucher_attr_control_flags_t)0)
#define __STDC_WANT_LIB_EXT1__ 1
#define TIOCPTYGNAME _IOC(IOC_OUT, 't', 83, 128)
#define HOST_VM_INFO64_LATEST_COUNT HOST_VM_INFO64_COUNT
#define KEV_DL_PROTO_DETACHED 15
#define MACHINE_THREAD_STATE_COUNT x86_THREAD_STATE_COUNT
#define IP_DEFAULT_MULTICAST_TTL 1
#define __Reply__thread_act_subsystem__defined 
#define R_REGEX_NEWLINE 0010
#define _MACH_POLICY_H_ 
#define PRIXFAST64 PRIX64
#define __FLT_MIN__ 1.17549435082228750796873653722224568e-38F
#define CPUFAMILY_ARM_13 0x0cc90e64
#define __GCC_IEC_559_COMPLEX 2
#define task_set_host_port(task,port) (task_set_special_port((task), TASK_HOST_PORT, (port)))
#define R_LOG_VERBOSE(fmtstr,...) r_log (MACRO_LOG_FUNC, __FILE__, __LINE__, R_LOGLVL_VERBOSE, NULL, fmtstr, ##__VA_ARGS__);
#define IPV6CTL_TEMPVLTIME 34
#define RTLD_NOW 0x2
#define MACH_RCV_NOTIFY 0x00000000
#define VM_MEMORY_JAVASCRIPT_JIT_EXECUTABLE_ALLOCATOR 64
#define UF_COMPRESSED 0x00000020
#define _SC_TIMEOUTS 95
#define KEY_TO_HASH(x) ((ut32)(x))
#define __UINT_LEAST8_TYPE__ unsigned char
#define __SIZEOF_FLOAT80__ 16
#define SDB_H 
#define MACH_NOTIFY_PORT_DESTROYED (MACH_NOTIFY_FIRST + 005)
#define ls_iter_next(x) (x?1:0)
#define _I386__ENDIAN_H_ 
#define INT_LEAST16_MIN INT16_MIN
#define HOST_CALENDAR_CHANGED_REPLYID 950
#define R_REGEX_NOSUB 0004
#define VM_PURGABLE_ORDERING_MASK (1 << VM_PURGABLE_ORDERING_SHIFT)
#define RUNE_ARROW_LEFT "<"
#define __UINT_FAST16_TYPE__ short unsigned int
#define TCSASOFT 0x10
#define KEV_DL_LINK_QUALITY_METRIC_CHANGED 20
#define _SC_LINE_MAX 15
#define IPPROTO_CPNX 72
#define MACH_MSGH_BITS_LOCAL_MASK 0x00001f00
#define __API_UNAVAILABLE_GET_MACRO(...) 
#define IPCTL_GIF_TTL 16
#define I386_THREAD_STATE_MAX (614)
#define PROC_FLAG_SUPPRESSED 0x800000
#define KERN_CODESIGN_ERROR 50
#define _POSIX_PRIORITIZED_IO (-1)
#define PROCESSOR_PM_REGS_INFO 0x10000001
#define TASK_BASIC_INFO_32 4
#define __DRIVERKIT_19_0 190000
#define bzero(dest,...) __builtin___memset_chk (dest, 0, __VA_ARGS__, __darwin_obsz0 (dest))
#define _SECURE__STRING_H_ 
#define CPU_SUBTYPE_MC88000_ALL ((cpu_subtype_t) 0)
#define KEV_INET6_REQUEST_NAT64_PREFIX 7
#define MSG_HOLD 0x800
#define __INTMAX_C(c) c ## L
#define R2_GITTIP "1703da75e247871e6fa22d3308551a291dad8f01"
#define PTHREAD_SCOPE_PROCESS 2
#define VM_PROT_EXECUTE ((vm_prot_t) 0x04)
#define VM_FLAGS_FIXED 0x0000
#define PTHREAD_CANCELED ((void *) 1)
#define thread_get_kernel_port(thread,port) (thread_get_special_port((thread), THREAD_KERNEL_PORT, (port)))
#define MIG_ARRAY_TOO_LARGE -307
#define RColor_BGGREEN RCOLOR(ALPHA_BG, 19, 161, 14, 0x00, 0x00, 0x00, 2)
#define TIOCM_CAR 0100
#define RUNECODE_MIN 0xc8
#define MACH_PORT_MAKE(index,gen) (((index) << 8) | (gen) >> 24)
#define O_ACCMODE 0x0003
#define ILL_ILLTRP 2
#define TRUE 1
#define MAX_SACK_BLKS 6
#define SIG_HOLD (void (*)(int))5
#define TIOCPKT_IOCTL 0x40
#define IPV6_LEAVE_GROUP 13
#define ru_last ru_nivcsw
#define makedev(x,y) ((dev_t)(((x) << 24) | (y)))
#define FIOGETOWN _IOR('f', 123, int)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_0(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_3(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_6(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_7(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_9(x) x
#define EAFNOSUPPORT 47
#define IPV6CTL_MRTSTATS 7
#define VM_BEHAVIOR_RANDOM ((vm_behavior_t) 1)
#define MACH_SEND_IN_PROGRESS 0x10000001
#define IPV6CTL_RTEXPIRE 25
#define TCIFLUSH 1
#define R_LIB_ENV "R2_LIBR_PLUGINS"
#define AF_APPLETALK 16
#define __WATCHOS_1_0 10000
#define R_PERM_ACCESS 32
#define __DARWIN_C_LEVEL __DARWIN_C_FULL
#define CPU_SUBTYPE_PENTIUM_3_XEON CPU_SUBTYPE_INTEL(8, 2)
#define VM_REGION_BASIC_INFO_COUNT ((mach_msg_type_number_t) (sizeof(vm_region_basic_info_data_t)/sizeof(int)))
#define MACH_EXCEPTION_CODES 0x80000000
#define R_JOIN_4_PATHS(p1,p2,p3,p4) p1 R_SYS_DIR p2 R_SYS_DIR p3 R_SYS_DIR p4
#define __UINT8_MAX__ 0xff
#define _POSIX_CLOCK_SELECTION (-1)
#define _POSIX_TYPED_MEMORY_OBJECTS (-1)
#define VM_MEMORY_COREUI 76
#define LOAD_SCALE 1000
#define NLDLY 0x00000300
#define _SC_TYPED_MEMORY_OBJECTS 102
#define PAGE_MIN_SIZE (1 << PAGE_MIN_SHIFT)
#define THREAD_BACKGROUND_POLICY_DARWIN_BG 0x1000
#define ENOMSG 91
#define PRIiLEAST16 PRIi16
#define DT_WHT 14
#define INT16_C(v) (v)
#define __WINT_MAX__ 0x7fffffff
#define SD_BOTH 2
#define _SC_2_C_DEV 19
#define VM_PURGABLE_PURGE_ALL ((vm_purgable_t) 2)
#define EXC_MASK_ARITHMETIC (1 << EXC_ARITHMETIC)
#define __FLT32_MIN_EXP__ (-125)
#define _SYS_UNISTD_H_ 
#define R_CONS_CLEAR_SCREEN "\x1b[2J\r"
#define r_io_map_set_size(map,new_size) do { map->itv.size = new_size; } while (0)
#define MACH_MSGH_BITS_OTHER(bits) ((bits) &~ MACH_MSGH_BITS_PORTS_MASK)
#define PROCESSOR_INFO_MAX (1024)
#define CLD_TRAPPED 4
#define UINT_LEAST64_MAX UINT64_MAX
#define IPPROTO_HMP 20
#define VM_MEMORY_SCENEKIT 86
#define R_DEPRECATE 
#define SM_PRIVATE 2
#define IPV6_FW_FLUSH 32
#define SO_NOSIGPIPE 0x1022
#define _CDEFS_H_ 
#define vsnprintf(str,len,format,ap) __builtin___vsnprintf_chk (str, len, 0, __darwin_obsz(str), format, ap)
#define REQUESTED_TRAILER_SIZE(y) REQUESTED_TRAILER_SIZE_NATIVE(y)
#define HOST_TELEMETRY_PORT (13 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define _POSIX2_BC_DIM_MAX 2048
#define MACH_PORT_STATUS_FLAG_REVIVE 0x10
#define S_TYPEISSEM(buf) (0)
#define EILSEQ 92
#define O_NOFOLLOW_ANY 0x20000000
#define SIOCSIFDSTADDR _IOW('i', 14, struct ifreq)
#define OSSwapHostToBigConstInt32(x) OSSwapConstInt32(x)
#define typeof(arg) __typeof__(arg)
#define ESPIPE 29
#define MATTR_VAL_ICACHE_FLUSH 8
#define VM_MEMORY_DYLIB 33
#define THREAD_READ_NULL ((thread_read_t) 0)
#define _POSIX_TTY_NAME_MAX 9
#define EXC_I386_DBLFLT 8
#define B1200 1200
#define _NETDB_H_ 
#define HOST_COALITION_PORT (15 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define __SIZE_MAX__ 0xffffffffffffffffUL
#define KEV_DL_AWDL_UNRESTRICTED 27
#define _MACH_VM_TYPES_H_ 
#define IN_MULTICAST(i) IN_CLASSD(i)
#define CONS_PALETTE_SIZE 22
#define PRIdMAX __PRI_MAX_LENGTH_MODIFIER__ "d"
#define __WCHAR_MAX__ 0x7fffffff
#define EXC_MACH_SYSCALL 8
#define _SC_TTY_NAME_MAX 101
#define FIOASYNC _IOW('f', 125, int)
#define x86_EXCEPTION_STATE_COUNT ((mach_msg_type_number_t) (sizeof(x86_exception_state_t)/sizeof(unsigned int)))
#define CPU_TYPE_ANY ((cpu_type_t) -1)
#define TASK_EXC_GUARD_MP_ALL 0xf0
#define INT16_MAX 32767
#define __INT_LEAST16_WIDTH__ 16
#define RLIMIT_AS 5
#define __STDC__ 1
#define WIFEXITED(x) (_WSTATUS(x) == 0)
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8 1
#define TASK_RESOURCE_NOTIFY_PORT 11
#define _V6_ILP32_OFF32 __ILP32_OFF32
#define CMP_MACH_TIMESPEC(t1,t2) ((t1)->tv_sec > (t2)->tv_sec ? (long) +NSEC_PER_SEC : ((t1)->tv_sec < (t2)->tv_sec ? (long) -NSEC_PER_SEC : (t1)->tv_nsec - (t2)->tv_nsec))
#define __DARWIN_FD_CLR(n,p) __darwin_fd_clr((n), (p))
#define PROCESSOR_SET_INFO_MAX (1024)
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define OSSwapLittleToHostInt64(x) ((uint64_t)(x))
#define R_SYS_H 
#define S_TYPEISSHM(buf) (0)
#define R_SOCKET_PROTO_CAN 0xc42b05
#define R_LIB_VERSION_HEADER(x) R_API const char *x ##_version(void)
#define __GCC_IEC_559 2
#define MACH_MSG_GUARD_FLAGS_MASK 0x0003
#define MPO_FILTER_MSG 0x100
#define SCNiFAST32 SCNi32
#define EXC_I386_ENDPERR 33
#define EXC_CORPSE_NOTIFY 13
#define _IOFBF 0
#define _STRUCT_X86_CPMU_STATE64 struct __darwin_x86_cpmu_state64
#define _POSIX2_BC_STRING_MAX 1000
#define KERN_DEFAULT_SET 31
#define _PTHREAD_ONCE_SIG_init 0x30B1BCBA
#define __FLT_EVAL_METHOD__ 0
#define R_UTF8_WHITE_HEAVY_CHECK_MARK "✅"
#define _SC_NPROCESSORS_CONF 57
#define MACH_MSG_IPC_KERNEL 0x00000800
#define __KAME_VERSION "2009/apple-darwin"
#define putc_unlocked(x,fp) __sputc(x, fp)
#define EPROGUNAVAIL 74
#define R_INOUT 
#define VM_BEHAVIOR_REUSE ((vm_behavior_t) 9)
#define TASK_EXC_GUARD_MP_FATAL 0x80
#define CPU_SUBTYPE_INTEL_MODEL_ALL 0
#define _SC_XOPEN_STREAMS 114
#define PT_STEP 9
#define __FXSR__ 1
#define R_ASCII_TABLE_H 
#define __FLT64_DECIMAL_DIG__ 17
#define _WINT_T 
#define r_io_submap_contain(sm,addr) r_io_map_contain (sm, addr)
#define VM_PAGE_QUERY_PAGE_FICTITIOUS 0x2
#define HOST_GSSD_PORT (12 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define F_ADDFILESIGS_RETURN 97
#define _POSIX_SS_REPL_MAX 4
#define KEV_DL_SUBCLASS 2
#define KERN_NOT_IN_SET 12
#define __disable_tail_calls 
#define Color_BBGRED "\x1b[101m"
#define Color_BGREEN "\x1b[92m"
#define HOST_LAST_SPECIAL_KERNEL_PORT HOST_IO_MASTER_PORT
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define _POSIX_DELAYTIMER_MAX 32
#define IOPOL_UTILITY 4
#define host_set_sysdiagnose_port(host,port) (host_set_special_port((host), HOST_SYSDIAGNOSE_PORT, (port)))
#define FORM_PRIMITIVE 0x00
#define LINK_MAX 32767
#define VM_MEMORY_COREGRAPHICS 42
#define __IPHONE_2_1 20100
#define __IPHONE_2_2 20200
#define FNONBLOCK O_NONBLOCK
#define INT8_MIN -128
#define PTHREAD_MUTEX_DEFAULT PTHREAD_MUTEX_NORMAL
#define AF_NS 6
#define PF_COIP AF_COIP
#define __AVAILABILITY_INTERNAL_WEAK_IMPORT __attribute__((weak_import))
#define _POSIX_TRACE_USER_EVENT_MAX 32
#define PF_OSI AF_ISO
#define _SC_TRACE_USER_EVENT_MAX 130
#define EXC_I386_SGL 1
#define thread_act_MSG_COUNT 31
#define __DARWIN_ONLY_64_BIT_INO_T 0
#define R_REGEX_NOSPEC 0020
#define SM_TRUESHARED 5
#define TCIOFLUSH 3
#define DST_NONE 0
#define KERN_NO_SPACE 3
#define SCNuFAST64 SCNu64
#define EOWNERDEAD 105
#define _MACH_DEBUG_LOCKGROUP_INFO_H_ 
#define CPUFAMILY_INTEL_SANDYBRIDGE 0x5490b78c
#define VM_PAGE_QUERY_PAGE_CS_VALIDATED 0x100
#define F_ALLOCATEALL 0x00000004
#define IPV6_ADDR_MC_FLAGS_UNICAST_BASED (IPV6_ADDR_MC_FLAGS_TRANSIENT | IPV6_ADDR_MC_FLAGS_PREFIX)
#define TH_FLAGS (TH_FIN|TH_SYN|TH_RST|TH_ACK|TH_URG|TH_ECE|TH_CWR)
#define __AVAILABILITY_INTERNAL__ 
#define CAST_USER_ADDR_T(a_ptr) ((user_addr_t)((uintptr_t)(a_ptr)))
#define R_LOG_DEBUG(fmtstr,...) r_log (MACRO_LOG_FUNC, __FILE__, __LINE__, R_LOGLVL_DEBUG, NULL, fmtstr, ##__VA_ARGS__);
#define IOC_IN (__uint32_t)0x80000000
#define HAVE_PTHREAD 1
#define POLL_MSG 3
#define MAP_MEM_COPYBACK 1
#define WITH_GPL 1
#define INT16_MIN -32768
#define _CTYPE_H_ 
#define VM_MEMORY_COREDATA 45
#define TCPCI_OPT_SACK 0x00000002
#define ls_foreach(list,it,pos) if ((list)) for (it = (list)->head; it && (pos = it->data); it = it->n)
#define VM_REGION_INFO_MAX (1024)
#define __FINITE_MATH_ONLY__ 0
#define __IPHONE_13_1 130100
#define PT_DETACH 11
#define MACH_SEND_INTERRUPT 0x00000040
#define SD_RECEIVE 0
#define IPV6_DEFAULT_MULTICAST_LOOP 1
#define TIME_MICROS_MAX (1000000)
#define VM_MEMORY_COREIMAGE 68
#define R_SOCKET_PROTO_NONE 0
#define __Request__processor_set_subsystem__defined 
#define TH_RST 0x04
#define EBADF 9
#define _SC_XBS5_ILP32_OFFBIG 123
#define VM_PURGABLE_DEBUG_EMPTY (0x1 << VM_PURGABLE_DEBUG_SHIFT)
#define _X86_INSTRUCTION_STATE_MAX_INSN_BYTES (2448 - 64 - 4)
#define F_LOG2PHYS 49
#define RUSAGE_CHILDREN -1
#define TAG_GENERALSTRING 0x1B
#define _SC_SHARED_MEMORY_OBJECTS 39
#define THREAD_STANDARD_POLICY 1
#define MACH_SEND_INVALID_RIGHT 0x1000000a
#define IXOFF 0x00000400
#define X86_PAGEIN_STATE_COUNT x86_PAGEIN_STATE_COUNT
#define ERANGE 34
#define TASK_AFFINITY_TAG_INFO_COUNT (sizeof(task_affinity_tag_info_data_t) / sizeof(natural_t))
#define _PATH_HEQUIV "/etc/hosts.equiv"
#define ILL_BADSTK 8
#define _INCLUDE_R_LIST_HEAD_H_ 
#define SIGFPE 8
#define KERN_OPERATION_TIMED_OUT 49
#define CPU_SUBTYPE_MASK 0xff000000
#define ut8 unsigned char
#define OFF_MAX LLONG_MAX
#define O_EVTONLY 0x00008000
#define IPV6CTL_DEFHLIM 3
#define R_TH_TID pthread_t
#define processor_set_MSG_COUNT 11
#define R_UTF8_KEYBOARD "⌨"
#define HOST_CONTAINERD_PORT (18 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define SA_RESTART 0x0002
#define __size_t 
#define TIOCM_CTS 0040
#define CLOCK_ALARM_MAXRES 5
#define UT16_SUB_OVFCHK(a,b) UT16_ADD_OVFCHK(a,-(b))
#define CPU_THREADTYPE_INTEL_HTT ((cpu_threadtype_t) 1)
#define _MACH_MEMORY_OBJECT_TYPES_H_ 
#define ETXTBSY 26
#define KERN_MISSING_KC 54
#define MACH_RCV_INVALID_NAME 0x10004002
#define __INT8_C(c) c
#define WCHAR_MAX __WCHAR_MAX__
#define SCNxLEAST32 SCNx32
#define _U_LONG 
#define SIGCONT 19
#define R_IO_DESC_CACHE_SIZE (sizeof(ut64) * 8)
#define NSIG __DARWIN_NSIG
#define PRIXFAST32 PRIX32
#define MAP_MEM_PURGABLE 0x040000
#define TAG_GENERALIZEDTIME 0x18
#define _CS_DARWIN_USER_DIR 65536
#define __UNIX__ 1
#define VM_REGION_EXTENDED_INFO 13
#define ACCESSX_MAX_DESCRIPTORS 100
#define HAVE_DECL_ADDR_NO_RANDOMIZE 0
#define R_SELWIDGET_MAXW 30
#define MSG_PEEK 0x2
#define IPPROTO_ROUTING 43
#define WAKEMON_GET_PARAMS 0x04
#define CPU_TYPE_I860 ((cpu_type_t) 15)
#define SIOCAIFADDR _IOW('i', 26, struct ifaliasreq)
#define __restrict restrict
#define R_NUMCALC_STRSZ 1024
#define _SC_BC_SCALE_MAX 11
#define R2_SOCKET_H 
#define __RequestUnion__host_priv_subsystem__defined 
#define CPU_STATE_NICE 3
#define __SHRT_MAX__ 0x7fff
#define POLLRDBAND 0x0080
#define w_stopval w_S.w_Stopval
#define VM_VOLATILE_GROUP_SHIFT 8
#define __LDBL_MAX__ 1.18973149535723176502126385303097021e+4932L
#define PRIO_PGRP 1
#define ILL_ILLOPN 4
#define host_set_container_port(host,port) (host_set_special_port((host), HOST_CONTAINERD_PORT, (port)))
#define __FLT64X_MAX_10_EXP__ 4932
#define R_PERM_SHAR 8
#define SIGTTOU 22
#define VM_MEMORY_COREUI_CACHED_IMAGE_DATA 103
#define MACH_MSG_TYPE_COPY_RECEIVE 22
#define MEMORY_OBJECT_RELEASE_NO_OP 0x4
#define MACH_RCV_GUARDED_DESC 0x00001000
#define IP_OLD_FW_RESETLOG 56
#define __IPHONE_10_0 100000
#define __IPHONE_10_1 100100
#define __IPHONE_10_2 100200
#define __IPHONE_10_3 100300
#define R_STR_CONSTPOOL_H 
#define PRIuMAX __PRI_MAX_LENGTH_MODIFIER__ "u"
#define __LDBL_IS_IEC_60559__ 2
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_1(x) 
#define r_spaces_foreach(sp,it,s) r_crbtree_foreach ((sp)->spaces, (it), (s))
#define _NLINK_T 
#define IPPROTO_DIVERT 254
#define SIGSTKSZ 131072
#define x86_INSTRUCTION_STATE_COUNT ((mach_msg_type_number_t)(sizeof(x86_instruction_state_t) / sizeof(int)))
#define SET_MZI_COLLECTABLE_FLAG(val,flag) (val) = (flag) ? ((val) | 1) : (val)
#define sigmask(m) (1 << ((m)-1))
#define KERN_NOT_DEPRESSED 36
#define IPPROTO_ADFS 68
#define IPV6CTL_FORWARDING 1
#define IS_HEXCHAR(x) (((x) >= '0' && (x) <= '9') || ((x) >= 'a' && (x) <= 'f') || ((x) >= 'A' && (x) <= 'F'))
#define _MACH_MESSAGE_H_ 
#define __SNPT 0x0800
#define S_IFWHT 0160000
#define MACH_VOUCHER_ATTR_KEY_PTHPRIORITY ((mach_voucher_attr_key_t)4)
#define TASK_EXC_GUARD_VM_ONCE 0x02
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define __alloc_size(...) __attribute__((alloc_size(__VA_ARGS__)))
#define _SC_THREAD_STACK_MIN 93
#define RENAME_EXCL 0x00000004
#define __FLT128_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F128
#define TASK_POWER_INFO_V2 26
#define IPPROTO_ARGUS 13
#define R_PERM_CREAT 64
#define _SC_JOB_CONTROL 6
#define FPE_FLTRES 4
#define __APPLE_CC__ 1
#define EINPROGRESS 36
#define _MACH_HOST_INFO_H_ 
#define NET_RT_IFLIST 3
#define R_STR_ISNOTEMPTY(x) ((x) && *(x))
#define _PC_ASYNC_IO 17
#define __WCHAR_MIN__ (-__WCHAR_MAX__ - 1)
#define INT_FAST8_MIN INT8_MIN
#define MACH_RCV_INVALID_NOTIFY 0x10004007
#define MATTR_MIGRATE 2
#define _SYS_STAT_H_ 
#define __APPLE_API_STANDARD 
#define CPU_SUBTYPE_ARM_ALL ((cpu_subtype_t) 0)
#define WCHAR_MIN (-WCHAR_MAX-1)
#define SOL_LOCAL 0
#define IN_ARE_ADDR_EQUAL(a,b) (bcmp(&(a)->s_addr, &(b)->s_addr, sizeof (struct in_addr)) == 0)
#define __FLT_EVAL_METHOD_TS_18661_3__ 0
#define KEV_INET_NEW_ADDR 1
#define _SYS_IOCCOM_H_ 
#define VM_BEHAVIOR_CAN_REUSE ((vm_behavior_t) 10)
#define RTLD_SELF ((void *) -3)
#define R_CONS_CURSOR_LEFT "\x1b[D"
#define x86_LAST_BRANCH_STATE 25
#define SCNo16 "ho"
#define AF_E164 AF_ISDN
#define R_PACKED(__Declaration__) __Declaration__ __attribute__((__packed__))
#define _PC_AUTH_OPAQUE_NP 14
#define ST16_ADD_OVFCHK(a,b) ((((b) > 0) && ((a) > ST16_MAX - (b))) || (((b) < 0) && ((a) < ST16_MIN - (b))))
#define TASK_EXC_GUARD_VM_ALL 0x0f
#define _MACH_HOST_NOTIFY_H_ 
#define MPG_FLAGS_IMMOVABLE_PINNED (0x01ull << 56)
#define _POSIX_READER_WRITER_LOCKS 200112L
#define R_PKCS7_H 
#define i386_FLOAT_STATE_COUNT ((mach_msg_type_number_t) (sizeof(i386_float_state_t)/sizeof(unsigned int)))
#define MACH_PORT_VALID(name) (((name) != MACH_PORT_NULL) && ((name) != MACH_PORT_DEAD))
#define _MACH_TASK_INFO_H_ 
#define _POSIX_AIO_MAX 1
#define FLUSHO 0x00800000
#define CPU_SUBTYPE_386 CPU_SUBTYPE_INTEL(3, 0)
#define NETDB_SUCCESS 0
#define INT_LEAST32_MIN INT32_MIN
#define HOST_MACH_MSG_TRAP 8
#define SCNo32 "o"
#define HOST_SECURITY_NULL ((host_security_t) 0)
#define SIGEV_SIGNAL 1
#define __printflike(fmtarg,firstvararg) __attribute__((__format__ (__printf__, fmtarg, firstvararg)))
#define R2_EXTRAS "lib/radare2-extras/" R2_VERSION
#define ENOTEMPTY 66
#define __TVOS_11_0 110000
#define __TVOS_11_1 110100
#define __TVOS_11_2 110200
#define SIOCSIFMEDIA _IOWR('i', 55, struct ifreq)
#define UINT_FAST16_MAX UINT16_MAX
#define F_SETPROTECTIONCLASS 64
#define ENOTBLK 15
#define strncpy(dest,...) __builtin___strncpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define __WINT_MIN__ (-__WINT_MAX__ - 1)
#define THREAD_EXTENDED_INFO 5
#define ARROW_LEFT 9
#define R_SYS_OS "darwin"
#define F_ADDFILESIGS 61
#define TAG_IA5STRING 0x16
#define EPROTOTYPE 41
#define EFL_SET 0x00000002
#define r_io_range_free(x) free(x)
#define _SC_SHELL 78
#define r_vector_foreach_prev(vec,it) if (!r_vector_empty (vec)) for (it = (void *)((char *)(vec)->a + (((vec)->len - 1)* (vec)->elem_size)); (char *)it != (char *)(vec)->a; it = (void *)((char *)it - (vec)->elem_size))
#define __pure2 __attribute__((__const__))
#define __TVOS_UNAVAILABLE 
#define VM_PURGABLE_ALL_MASKS (VM_PURGABLE_STATE_MASK | VM_VOLATILE_ORDER_MASK | VM_PURGABLE_ORDERING_MASK | VM_PURGABLE_BEHAVIOR_MASK | VM_VOLATILE_GROUP_MASK | VM_PURGABLE_DEBUG_MASK | VM_PURGABLE_NO_AGING_MASK)
#define _PTHREAD_COND_T 
#define LIBC_HAVE_PLEDGE 0
#define PRIu8 __PRI_8_LENGTH_MODIFIER__ "u"
#define IN6ADDR_V4MAPPED_INIT {{{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00 }}}
#define EXC_I386_SEGNPFLT 11
#define _BSD_SEMAPHORE_H 
#define __FLT128_MIN_10_EXP__ (-4931)
#define MONOTONIC_UNIX (MONOTONIC_APPLE || MONOTONIC_LINUX || MONOTONIC_FREEBSD || MONOTONIC_NETBSD)
#define VDSUSP 11
#define __FLT32X_IS_IEC_60559__ 2
#define VM_MEMORY_IOSURFACE 88
#define SCNo64 __SCN_64_LENGTH_MODIFIER__ "o"
#define B_ODD(x) (!B_EVEN((x)))
#define SCNxFAST16 SCNx16
#define TCPOPT_SACK 5
#define htonl(x) __DARWIN_OSSwapInt32(x)
#define htons(x) __DARWIN_OSSwapInt16(x)
#define ERPCMISMATCH 73
#define EAI_NONAME 8
#define _POSIX_AIO_LISTIO_MAX 2
#define __FLT64X_MIN_EXP__ (-16381)
#define HHXFMT "hhx"
#define CORNER_TR 6
#define __DARWIN_NBBY 8
#define _POSIX_SPIN_LOCKS (-1)
#define __FLT128_MANT_DIG__ 113
#define EALREADY 37
#define HAVE_LIB_MAGIC 0
#define IOC_INOUT (IOC_IN|IOC_OUT)
#define IPV6CTL_GIF_HLIM 19
#define SO_REUSEADDR 0x0004
#define __result_use_check __attribute__((__warn_unused_result__))
#define X86_DEBUG_STATE32_COUNT x86_DEBUG_STATE32_COUNT
#define CONS_MAX_ATTR_SZ 16
#define HOST_PREFERRED_USER_ARCH 12
#define _POSIX_SYNCHRONIZED_IO (-1)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_5(x) 
#define VSTOP 13
#define HAVE_LIB_XXHASH 0
#define lock_set_MSG_COUNT 6
#define KERN_LOCK_SET_DESTROYED 38
#define CLOCK_ALARM_MINRES 4
#define FP_PREC_24B 0
#define PTHREAD_COND_INITIALIZER {_PTHREAD_COND_SIG_init, {0}}
#define VM_PAGE_INFO_MAX 
#define TASK_BASE_LATENCY_QOS_POLICY 10
#define UT64_MAX 0xFFFFFFFFFFFFFFFFULL
#define O_SYMLINK 0x00200000
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_15(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_16(x) x
#define MPO_IMPORTANCE_RECEIVER 0x08
#define __DARWIN_FD_SETSIZE 1024
#define PF_CCITT AF_CCITT
#define SO_USELOOPBACK 0x0040
#define ST8_MAX 0x7F
#define _Nonnull 
#define _CS_XBS5_LP64_OFF64_LDFLAGS 29
#define HOST_PREFERRED_USER_ARCH_COUNT ((mach_msg_type_number_t) (sizeof(host_preferred_user_arch_data_t)/sizeof(integer_t)))
#define _UINTPTR_T 
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define TCPOLEN_CC 6
#define PT_ATTACHEXC 14
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#define __PTRDIFF_WIDTH__ 64
#define IPPROTO_WSN 74
#define _STRUCT_X86_FLOAT_STATE32 struct __darwin_i386_float_state
#define _POSIX_THREAD_THREADS_MAX 64
#define Color_BGCYAN "\x1b[46m"
#define _STRUCT_X86_THREAD_STATE32 struct __darwin_i386_thread_state
#define O_APPEND 0x00000008
#define IPPROTO_MAX 256
#define _STRUCT_X86_INSTRUCTION_STATE struct __x86_instruction_state
#define x86_FLOAT_STATE64_COUNT ((mach_msg_type_number_t) (sizeof(x86_float_state64_t)/sizeof(unsigned int)))
#define Color_BBGBLACK Color_BGGRAY
#define MACH_VOUCHER_ATTR_KEY_IMPORTANCE ((mach_voucher_attr_key_t)2)
#define HTONL(x) (x) = htonl((__uint32_t)x)
#define SF_IMMUTABLE 0x00020000
#define SYNC_POLICY_ORDER_MASK 0x3
#define HTONS(x) (x) = htons((__uint16_t)x)
#define _FORTIFY_SOURCE 2
#define EXC_I386_STKFLT 12
#define SDB_NUM_BUFSZ 64
#define CPU_SUBTYPE_MIPS_R3000 ((cpu_subtype_t) 7)
#define _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS 5
#define IPPROTO_LARP 91
#define _SC_2_C_BIND 18
#define R_PUNYCODE_H 
#define _POSIX_LINK_MAX 8
#define MACH_MSG_VIRTUAL_COPY 1
#define OSWriteLittleInt32(base,byteOffset,data) _OSWriteInt32(base, byteOffset, data)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_4(x) 
#define COLL_WEIGHTS_MAX 2
#define R_CHECKS_LEVEL 2
#define _RPERM_OK (1<<19)
#define VM_INHERIT_COPY ((vm_inherit_t) 1)
#define R_CTYPES_H 
#define PAGE_MAX_MASK (PAGE_MAX_SIZE-1)
#define IOPOL_TYPE_VFS_IGNORE_PERMISSIONS 7
#define VM_SYNC_CONTIGUOUS ((vm_sync_t) 0x20)
#define CHARCLASS_NAME_MAX 14
#define __CHAR16_TYPE__ short unsigned int
#define R_X509_H 
#define B10010 18
#define AF_RESERVED_36 36
#define SIOCIFGCLONERS _IOWR('i', 129, struct if_clonereq)
#define B10011 19
#define _STRUCT_SIGALTSTACK struct __darwin_sigaltstack
#define __sclearerr(p) ((void)((p)->_flags &= ~(__SERR|__SEOF)))
#define NAME_SERVER_SLOT 0
#define TIOCM_RNG 0200
#define IPV6_IPSEC_POLICY 28
#define HOST_VM_PURGABLE_COUNT ((mach_msg_type_number_t) (sizeof(host_purgable_info_data_t)/sizeof(integer_t)))
#define _STRUCT_X86_FLOAT_STATE64 struct __darwin_x86_float_state64
#define NET_SERVICE_TYPE_AV 6
#define _STRUCT_X86_THREAD_STATE64 struct __darwin_x86_thread_state64
#define task_get_kernel_port(task,port) (task_get_special_port((task), TASK_KERNEL_PORT, (port)))
#define R_UTF8_BLOCK "\u2588"
#define B7200 7200
#define getchar_unlocked() getc_unlocked(stdin)
#define INPCK 0x00000010
#define PRIO_PROCESS 0
#define ERR_ROUTINE_NIL (mach_error_fn_t)0
#define IN6_IS_ADDR_MULTICAST(a) ((a)->s6_addr[0] == 0xff)
#define R_SYS_ENVSEP ":"
#define R_GRAPH_H 
#define NET_SERVICE_TYPE_BE 0
#define NET_SERVICE_TYPE_BK 1
#define _XOPEN_REALTIME_THREADS (-1)
#define SF_ARCHIVED 0x00010000
#define USHRT_MAX (SHRT_MAX * 2 + 1)
#define _POSIX_CHILD_MAX 25
#define SSZT_MAX ST64_MAX
#define ETIMEDOUT 60
#define __NEW_SCHEDULING_FRAMEWORK__ 
#define LEDGER_ITEM_INFINITY ((ledger_item_t) (~0))
#define _WCHAR_H_ 
#define _SC_AIO_LISTIO_MAX 42
#define __options_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_open __enum_options
#define SCHED_OTHER 1
#define ls_iter_get(x) x->data; x=x->n
#define MACH_SEND_TRAILER 0x00020000
#define __MAC_10_10_2 101002
#define __MAC_10_10_3 101003
#define IPV6PORT_RESERVEDMAX (IPV6PORT_RESERVED-1)
#define FIODTYPE _IOR('f', 122, int)
#define PRIuLEAST32 PRIu32
#define VM_BEHAVIOR_WILLNEED ((vm_behavior_t) 4)
#define VM_PURGABLE_ORDERING_SHIFT 5
#define R_ASSERT_H 
#define VM_MEMORY_MALLOC_TINY 7
#define _MACH_MACHINE_PROCESSOR_INFO_H_ 
#define __END_DECLS 
#define task_MSG_COUNT 61
#define __FLT64X_EPSILON__ 1.08420217248550443400745280086994171e-19F64x
#define HOST_PRIORITY_INFO_COUNT ((mach_msg_type_number_t) (sizeof(host_priority_info_data_t)/sizeof(integer_t)))
#define _POSIX_V6_LPBIG_OFFBIG __LPBIG_OFFBIG
#define __CONCAT(x,y) x ## y
#define _BSD_MACHINE_SIGNAL_H_ 
#define CPUFAMILY_INTEL_SKYLAKE 0x37fc219f
#define UT64_MIN 0ULL
#define F_PEOFPOSMODE 3
#define __STDC_HOSTED__ 1
#define _SC_GETPW_R_SIZE_MAX 71
#define HOST_PRIORITY_INFO 5
#define LOCAL_PEERUUID 0x004
#define ST8_MIN (-ST8_MAX - 1)
#define R2_VERSION_PATCH 4
#define MATTR_VAL_GET 2
#define TAG_SEQUENCE 0x10
#define MACH_MSG_TYPE_PORT_ANY_RIGHT(x) (((x) >= MACH_MSG_TYPE_MOVE_RECEIVE) && ((x) <= MACH_MSG_TYPE_MOVE_SEND_ONCE))
#define CPU_SUBTYPE_BIG_ENDIAN ((cpu_subtype_t) 1)
#define AF_LAT 14
#define r_flist_t void**
#define __PRI_64_LENGTH_MODIFIER__ "ll"
#define RLIM_SAVED_CUR RLIM_INFINITY
#define _STDIO_H_ 
#define __FLT32_IS_IEC_60559__ 2
#define IOPOL_MATERIALIZE_DATALESS_FILES_OFF 1
#define PT_READ_I 1
#define memmove(dest,...) __builtin___memmove_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define UID_MAX 2147483647U
#define THREAD_AFFINITY_TAG_NULL 0
#define R_UTF8_H 
#define _SC_2_PBS_MESSAGE 63
#define HOST_CALENDAR_SET_REPLYID 951
#define DTF_HIDEW 0x0001
#define _SYS_FCNTL_H_ 
#define _READ_OK (1<<9)
#define PRIuLEAST64 PRIu64
#define IPV6_2292HOPLIMIT 20
#define VM_PURGABLE_DENY 3
#define RUNECODE_LINE_HORIZ 0xce
#define _T_PTRDIFF 
#define PF_NATM AF_NATM
#define MATTR_VAL_GET_INFO 10
#define SO_NUMRCVPKT 0x1112
#define _XOPEN_ENH_I18N (1)
#define B230400 230400
#define TIOCM_RTS 0004
#define MACH_PORT_STATUS_FLAG_GUARDED 0x02
#define SCOPE_DELIMITER '%'
#define UT32_SUB_OVFCHK(a,b) UT32_ADD_OVFCHK(a,-(b))
#define TCPOLEN_SACK_PERMITTED 2
#define Color_BGYELLOW "\x1b[43m"
#define ALRMTYPE 0xff
#define TASK_TRACE_MEMORY_INFO_COUNT ((mach_msg_type_number_t) (sizeof(task_trace_memory_info_data_t) / sizeof(natural_t)))
#define POLICY_TIMESHARE_LIMIT_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_timeshare_limit)/sizeof(integer_t)))
#define KEV_DL_QOS_MODE_CHANGED 29
#define SIGURG 16
#define _SC_TZNAME_MAX 27
#define IP_MULTICAST_IFINDEX 66
#define IP_RSVP_OFF 16
#define _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS 12
#define IPPROTO_PIM 103
#define memcpy(dest,...) __builtin___memcpy_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define VM_PURGABLE_GET_STATE ((vm_purgable_t) 1)
#define ENOTTY 25
#define R_ASN1_H 
#define _r_malloc r_malloc
#define __DBL_DIG__ 15
#define TIME_UTC 1
#define strncat(dest,...) __builtin___strncat_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define VM_FLAGS_SUPERPAGE_SIZE_2MB (SUPERPAGE_SIZE_2MB<<VM_FLAGS_SUPERPAGE_SHIFT)
#define MACH_RCV_TRAILER_AV 7
#define EINTR 4
#define x86_THREAD_FULL_STATE64 23
#define AF_INET6 30
#define VM_BEHAVIOR_DONTNEED ((vm_behavior_t) 5)
#define IP_ADD_SOURCE_MEMBERSHIP 70
#define RLIM_NLIMITS 9
#define r_return_if_reached() do { H_LOG_ (R_LOGLVL_ERROR, "file %s: line %d (%s): should not be reached\n", __FILE__, __LINE__, R_FUNCTION); return; } while (0)
#define vsprintf(str,format,ap) __builtin___vsprintf_chk (str, 0, __darwin_obsz(str), format, ap)
#define _FILESEC_T 
#define __FLT128_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define EBADARCH 86
#define KERN_NOT_SUPPORTED 46
#define host_get_lockd_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_LOCKD_PORT, (port)))
#define _U_INT64_T 
#define IPV6CTL_ADDRCTLPOLICY 38
#define VM_PURGABLE_BEHAVIOR_MASK (1 << VM_PURGABLE_BEHAVIOR_SHIFT)
#define _POSIX_SPAWN (-1)
#define __NDR_convert__float_rep__ 0
#define __SHRT_WIDTH__ 16
#define SOCK_DGRAM 2
#define __TVOS_9_0 90000
#define __TVOS_9_1 90100
#define SSZT_MIN ST64_MIN
#define IOPOL_IMPORTANT 1
#define VM_PURGABLE_BEHAVIOR_LIFO (1 << VM_PURGABLE_BEHAVIOR_SHIFT)
#define VM_MEMORY_LIBDISPATCH 74
#define SO_LINGER 0x0080
#define VM_MEMORY_IMAGEIO 70
#define SIOCAUTONETMASK _IOW('i', 39, struct ifreq)
#define TMP_MAX 308915776
#define THREAD_EXTENDED_POLICY 1
#define F_THAW_FS 54
#define PF_UNIX PF_LOCAL
#define PTHREAD_CANCEL_ASYNCHRONOUS 0x00
#define R2_RBTREE_H 
#define _MACH_PROCESSOR_INFO_H_ 
#define MEMORY_OBJECT_TERMINATE_IDLE 0x1
#define EAI_SERVICE 9
#define SA_ONSTACK 0x0001
#define __GNU 
#define IOPOL_TYPE_DISK 0
#define host_set_unfreed_port(host,port) (host_set_special_port((host), HOST_UNFREED_PORT, (port)))
#define MACH_PORT_INDEX(name) ((name) >> 8)
#define R_LINE_HISTSIZE 256
#define r_list_push(x,y) r_list_append ((x), (y))
#define MACH_TASK_INSPECT_H 
#define VM_MEMORY_FOUNDATION 41
#define ILL_ILLADR 5
#define VM_MEMORY_SBRK 5
#define __LDBL_MIN__ 3.36210314311209350626267781732175260e-4932L
#define AF_UNSPEC 0
#define RUNE_CURVE_CORNER_BL "╰"
#define UT16_GT0 0x8000U
#define RUNE_CURVE_CORNER_BR "╯"
#define __API_DEPRECATED_MSG_GET_MACRO(...) 
#define SIGQUIT 3
#define r_sys_perror(x) r_sys_perror_str(x);
#define MACH_VOUCHER_ATTR_KEY_USER_DATA ((mach_voucher_attr_key_t)7)
#define IPPROTO_IPEIP 94
#define TASK_DYLD_ALL_IMAGE_INFO_64 1
#define IPV6CTL_STATS 6
#define CPU_SUBTYPE_POWERPC_750 ((cpu_subtype_t) 9)
#define CPU_SUBTYPE_ITANIUM CPU_SUBTYPE_INTEL(11, 0)
#define WAKEMON_DISABLE 0x02
#define R_CONS_CURSOR_RIGHT "\x1b[C"
#define SHELL_PATH "/bin/sh"
#define _BLKCNT_T 
#define TCPCI_OPT_WSCALE 0x00000004
#define CPU_TYPE_POWERPC64 (CPU_TYPE_POWERPC | CPU_ARCH_ABI64)
#define VM_PURGABLE_VOLATILE 1
#define _REXT_OK (1<<17)
#define SIOCSIFFLAGS _IOW('i', 16, struct ifreq)
#define MACH_PORT_NULL 0
#define _WCHAR_T_ 
#define SO_NET_SERVICE_TYPE 0x1116
#define IPPROTO_DONE 257
#define __MAC_10_1 1010
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_5(x) 
#define SIOCGLOWAT _IOR('s', 3, int)
#define MACH_PORT_TYPE_SEND_RECEIVE (MACH_PORT_TYPE_SEND|MACH_PORT_TYPE_RECEIVE)
#define KEV_DL_LINK_ADDRESS_CHANGED 16
#define EAI_FAMILY 5
#define TAG_PRINTABLESTRING 0x13
#define CPU_SUBTYPE_PENT CPU_SUBTYPE_INTEL(5, 0)
#define IPCTL_RTEXPIRE 5
#define __DARWIN_BYTE_ORDER __DARWIN_LITTLE_ENDIAN
#define INADDR_ALLRTRS_GROUP (u_int32_t)0xe0000002
#define _POSIX2_PBS_ACCOUNTING (-1)
#define __enum_closed_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_closed
#define __MAC_10_5 1050
#define MACH_RCV_TRAILER_ELEMENTS(x) (((x) & 0xf) << 24)
#define _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS 6
#define SCNoLEAST16 SCNo16
#define CPU_SUBTYPE_PENTIUM_3 CPU_SUBTYPE_INTEL(8, 0)
#define EXCEPTION_DEFAULT 1
#define HAVE_MMAN 1
#define EXC_MASK_SOFTWARE (1 << EXC_SOFTWARE)
#define __MAC_10_7 1070
#define __AVAILABILITY_VERSIONS__ 
#define __SIZEOF_LONG__ 8
#define _IONBF 2
#define VM_MEMORY_COREPROFILE 71
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
#define VM_FLAGS_SUPERPAGE_SIZE_ANY (SUPERPAGE_SIZE_ANY << VM_FLAGS_SUPERPAGE_SHIFT)
#define VM_PROT_DEFAULT (VM_PROT_READ|VM_PROT_WRITE)
#define IPV6PORT_RESERVEDMIN 600
#define PRIoFAST16 PRIo16
#define VM_MEMORY_VIDEOBITSTREAM 91
#define __GNUC__ 11
#define __APPLE__ 1
#define R_MODE_PRINT 0x000
#define __UINT16_C(c) c
#define IP_TRAFFIC_MGT_BACKGROUND 65
#define NET_SERVICE_TYPE_RD 8
#define IPPROTO_ST 7
#define host_get_coalition_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_COALITION_PORT, (port)))
#define TASK_VM_INFO_REV5_COUNT TASK_VM_INFO_COUNT
#define SCNoLEAST32 SCNo32
#define NET_SERVICE_TYPE_RV 5
#define R_MEM_ALIGN(x) ((void *)(size_t)(((ut64)(size_t)x) & 0xfffffffffffff000LL))
#define NI_NAMEREQD 0x00000004
#define SO_DONTTRUNC 0x2000
#define _POSIX2_RE_DUP_MAX 255
#define CR0 0x00000000
#define CR1 0x00001000
#define HTONLL(x) (x) = htonll((__uint64_t)x)
#define x86_INSTRUCTION_STATE 24
#define SCNdLEAST16 SCNd16
#define _SIGSET_T 
#define MACH_VOUCHER_ATTR_SET_VALUE_HANDLE ((mach_voucher_attr_recipe_command_t)3)
#define PRIoFAST32 PRIo32
#define OSReadBigInt16(base,byteOffset) OSReadSwapInt16(base, byteOffset)
#define R_NSEC_PER_SEC 1000000000ULL
#define VM_REGION_SUBMAP_INFO_COUNT_64 VM_REGION_SUBMAP_INFO_V2_COUNT_64
#define IPPROTO_INLSP 52
#define CS6 0x00000100
#define CS7 0x00000200
#define CS8 0x00000300
#define CPF_MASK (CPF_OVERWRITE|CPF_IGNORE_MODE)
#define st16 short
#define R_FILE_H 
#define IPPROTO_PUP 12
#define subsystem_to_name_map_vm_map { "vm_region", 3800 }, { "vm_allocate", 3801 }, { "vm_deallocate", 3802 }, { "vm_protect", 3803 }, { "vm_inherit", 3804 }, { "vm_read", 3805 }, { "vm_read_list", 3806 }, { "vm_write", 3807 }, { "vm_copy", 3808 }, { "vm_read_overwrite", 3809 }, { "vm_msync", 3810 }, { "vm_behavior_set", 3811 }, { "vm_map", 3812 }, { "vm_machine_attribute", 3813 }, { "vm_remap", 3814 }, { "task_wire", 3815 }, { "mach_make_memory_entry", 3816 }, { "vm_map_page_query", 3817 }, { "mach_vm_region_info", 3818 }, { "vm_mapped_pages_info", 3819 }, { "vm_region_recurse", 3821 }, { "vm_region_recurse_64", 3822 }, { "mach_vm_region_info_64", 3823 }, { "vm_region_64", 3824 }, { "mach_make_memory_entry_64", 3825 }, { "vm_map_64", 3826 }, { "vm_purgable_control", 3830 }, { "vm_map_exec_lockdown", 3831 }, { "vm_remap_new", 3832 }
#define B_IS_SET(x,n) (((x) & (1ULL << (n)))? 1: 0)
#define CPUFAMILY_INTEL_BROADWELL 0x582ed09c
#define CTA(x,y,z) (x+CTO(y,z))
#define CTI(x,y,z) (*((size_t*)(CTA(x,y,z))))
#define SCNdLEAST32 SCNd32
#define IPPROTO_PVP 75
#define __Request__thread_act_subsystem__defined 
#define CPUFAMILY_INTEL_PENRYN 0x78ea4fbc
#define VM_MEMORY_GENEALOGY 78
#define MACH_MSG_TYPE_MAKE_SEND_ONCE 21
#define st32 int
#define NET_SERVICE_TYPE_VI 3
#define ARG_MAX (1024 * 1024)
#define NET_SERVICE_TYPE_VO 4
#define KERN_INVALID_RIGHT 17
#define ENOSR 98
#define PRIoFAST64 PRIo64
#define KERN_INVALID_NAME 15
#define S_ISDIR(m) (((m) & S_IFMT) == S_IFDIR)
#define IP_OLD_FW_DEL 51
#define r_list_iter_next(x) ((x)? 1: 0)
#define MACH_VOUCHER_ATTR_VALUE_FLAGS_NONE ((mach_voucher_attr_value_flags_t)0)
#define MAC_OS_X_VERSION_10_14_1 101401
#define MAC_OS_X_VERSION_10_14_4 101404
#define MAC_OS_X_VERSION_10_14_6 101406
#define R_FREE(x) { free((void *)x); x = NULL; }
#define VM_MEMORY_MALLOC_LARGE_REUSABLE 8
#define _V6_ILP32_OFFBIG __ILP32_OFFBIG
#define _MACH_VM_REGION_H_ 
#define _SC_NPROCESSORS_ONLN 58
#define R_ALIGNED(x) __attribute__((aligned(x)))
#define IPPROTO_IDP 22
#define CPU_SUBTYPE_HPPA_ALL ((cpu_subtype_t) 0)
#define TASK_AUDIT_TOKEN_COUNT (sizeof(audit_token_t) / sizeof(natural_t))
#define eprintf(...) fprintf(stderr,__VA_ARGS__)
#define VM_DYLD64 ((user_addr_t) 0x00007FFF5FC00000ULL)
#define PRIoLEAST16 PRIo16
#define IPV6CTL_SOURCECHECK 10
#define SCNxFAST8 SCNx8
#define AI_V4MAPPED 0x00000800
#define FUNC_ATTR_MALLOC __attribute__((malloc))
#define SCNdLEAST64 SCNd64
#define O_NOCTTY 0x00020000
#define ntohll(x) __DARWIN_OSSwapInt64(x)
#define HOST_XPC_EXCEPTION_PORT (17 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define IPPROTO_IPIP IPPROTO_IPV4
#define MPG_STRICT 0x01
#define IN6_IS_ADDR_UNIQUE_LOCAL(a) (((a)->s6_addr[0] == 0xfc) || ((a)->s6_addr[0] == 0xfd))
#define SONPX_SETOPTSHUT 0x000000001
#define WORD_BIT 32
#define st64 long long
#define IOCPARM_MASK 0x1fff
#define __DARWIN_ALIAS_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_NON_CANCELABLE __DARWIN_SUF_UNIX03)
#define VKILL 5
#define HOST_CPU_LOAD_INFO_COUNT ((mach_msg_type_number_t) (sizeof (host_cpu_load_info_data_t) / sizeof (integer_t)))
#define __DARWIN_ALIAS_I(sym) __asm("_" __STRING(sym) __DARWIN_SUF_64_BIT_INO_T __DARWIN_SUF_UNIX03)
#define _INO_T 
#define USER_DATA_SELECTOR 0x001f
#define IPV6_2292PKTOPTIONS 25
#define CLD_NOOP 0
#define EFL_VM 0x00020000
#define MACH_RCV_TRAILER_NULL 0
#define RColor_BBGGREEN RCOLOR(ALPHA_BG, 22, 198, 12, 0x00, 0x00, 0x00, 10)
#define HOST_LAUNCHCTL_PORT (9 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define VM_MAP_READ_NULL ((vm_map_read_t) 0)
#define L_ctermid 1024
#define CDB_MAX_VALUE 0xffffff
#define IPPROTO_IGP 85
#define ls_iter_unref(x) x
#define host_get_filecoordinationd_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_FILECOORDINATIOND_PORT, (port)))
#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
#define HAVE_FORK 1
#define FD_SET(n,p) __DARWIN_FD_SET(n, p)
#define __FLT_HAS_DENORM__ 1
#define __SIZEOF_LONG_DOUBLE__ 16
#define _SS_PAD2SIZE (_SS_MAXSIZE - sizeof(__uint8_t) - sizeof(sa_family_t) - _SS_PAD1SIZE - _SS_ALIGNSIZE)
#define VM_REGION_SUBMAP_INFO_V2_SIZE (sizeof (vm_region_submap_info_data_64_t))
#define R_REGEX_BADRPT 13
#define OSSwapConstInt32(x) __DARWIN_OSSwapConstInt32(x)
#define IO_NUM_PRIORITIES 4
#define CPU_SUBTYPE_PENTII_M3 CPU_SUBTYPE_INTEL(6, 3)
#define IP_RSVP_ON 15
#define VM_MEMORY_MACH_MSG 20
#define IOPOL_TYPE_VFS_STATFS_NO_DATA_VOLUME 4
#define _SC_ARG_MAX 1
#define VM_FLAGS_SUPERPAGE_NONE (SUPERPAGE_NONE << VM_FLAGS_SUPERPAGE_SHIFT)
#define ZERO_FILL(x) memset (&x, 0, sizeof (x))
#define INT_FAST16_MIN INT16_MIN
#define DT_BLK 6
#define SIGTSTP 18
#define IPPROTO_3PC 34
#define ISTRIP 0x00000020
#define __GETHOSTUUID_H 
#define KEV_DL_IF_IDLE_ROUTE_REFCNT 18
#define CPU_SUBTYPE_PENTII_M5 CPU_SUBTYPE_INTEL(6, 5)
#define UF_OPAQUE 0x00000008
#define SEEK_CUR 1
#define EAI_FAIL 4
#define CLOCAL 0x00008000
#define VM_PROT_NO_CHANGE ((vm_prot_t) 0x08)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_0(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_1(x) x
#define FFDLY 0x00004000
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_3(x) x
#define AF_ROUTE 17
#define PAGE_MAX_SHIFT 14
#define CLK_TCK __DARWIN_CLK_TCK
#define SUPERPAGE_SIZE_2MB 2
#define IP_PORTRANGE_LOW 2
#define MACH_RCV_IN_SET 0x1000400a
#define KMOD_DECL(name,version) static kmod_start_func_t name ## _module_start; static kmod_stop_func_t name ## _module_stop; kmod_info_t KMOD_INFO_NAME = { 0, KMOD_INFO_VERSION, -1U, { #name }, { version }, -1, 0, 0, 0, 0, name ## _module_start, name ## _module_stop };
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
#define SM_EMPTY 3
#define _POSIX_CHOWN_RESTRICTED 200112L
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define MACH_MSG_BODY_NULL (mach_msg_body_t *) 0
#define EXC_SOFTWARE 5
#define _TIME_T 
#define PF_PIP pseudo_AF_PIP
#define IPCTL_KEEPFAITH 15
#define R_STR_UTIL_H 
#define MSG_DONTROUTE 0x4
#define EXTA 19200
#define EXTB 38400
#define _I386_SIGNAL_H_ 1
#define IPPROTO_HELLO 63
#define R_UTF8_VS16 "\xef\xb8\x8f"
#define HOST_VM_INFO_REV2_COUNT HOST_VM_INFO_LATEST_COUNT
#define r_io_map_to(map) ( r_itv_end (map->itv) - 1 )
#define R_STACK_H 
#define __IPHONE_3_0 30000
#define __WCHAR_TYPE__ int
#define R2_HOME_CONFIGDIR R_JOIN_2_PATHS (".config", "radare2")
#define IPPROTO_OSPFIGP 89
#define _SC_XOPEN_REALTIME_THREADS 112
#define CPUFAMILY_POWERPC_G4 0x77c184ae
#define KERN_RPC_CONTINUE_ORPHAN 45
#define MEMORY_OBJECT_COPY_INVALID 5
#define FPE_FLTDIV 1
#define WINT_MAX INT32_MAX
#define KEY_TYPE ut64
#define R_REGEX_ATOI 255
#define CPU_SUBTYPE_CELERON CPU_SUBTYPE_INTEL(7, 6)
#define IN6_IS_ADDR_LINKLOCAL(a) (((a)->s6_addr[0] == 0xfe) && (((a)->s6_addr[1] & 0xc0) == 0x80))
#define FP_287 2
#define __DBL_HAS_INFINITY__ 1
#define VM_MEMORY_CM_READCACHE 95
#define IOPOL_SCOPE_PROCESS 0
#define IPPROTO_INP 32
#define _PC_SYMLINK_MAX 24
#define TASK_VM_INFO_REV1_COUNT ((mach_msg_type_number_t) (TASK_VM_INFO_REV2_COUNT - 4))
#define PASS_MAX 128
#define W_EXITCODE(ret,sig) ((ret) << 8 | (sig))
#define TASK_WAIT_STATE_INFO 25
#define KERN_POLICY_STATIC 51
#define _POSIX_NGROUPS_MAX 8
#define RSIZE_MAX (SIZE_MAX >> 1)
#define Color_RESET_ALL "\x1b[0m\x1b[49m"
#define IP_STRIPHDR 23
#define TH_URG 0x20
#define TIOCSCTTY _IO('t', 97)
#define HAVE_CLOCK_NANOSLEEP 0
#define __DTF_READALL 0x0008
#define MACH_VOUCHER_IMPORTANCE_ATTR_ADD_EXTERNAL 1
#define ISIG 0x00000080
#define __DARWIN_OS_INLINE static inline
#define R_USEC_PER_SEC 1000000ULL
#define stdin __stdinp
#define PRIi16 "hi"
#define _PC_2_SYMLINKS 15
#define __HAVE_SPECULATION_SAFE_VALUE 1
#define __XNU_PRIVATE_EXTERN __attribute__((visibility("hidden")))
#define __null_unspecified 
#define F_SINGLE_WRITER 76
#define CPU_TYPE_ARM64_32 (CPU_TYPE_ARM | CPU_ARCH_ABI64_32)
#define _SC_CLK_TCK 3
#define Color_DELETE Color_BRED
#define TASK_FLAGS_INFO 28
#define IP_FAITH 22
#define SCHED_FIFO 4
#define _MACH_MIG_H_ 
#define Color_RESET_BG "\x1b[49m"
#define AF_SYSTEM 32
#define IPV6CTL_DAD_COUNT 16
#define TASK_INSPECT_BASIC_COUNTS_COUNT (sizeof(struct task_inspect_basic_counts) / sizeof(natural_t))
#define P_tmpdir "/var/tmp/"
#define CPU_SUBTYPE_486 CPU_SUBTYPE_INTEL(4, 0)
#define _POSIX_THREAD_SPORADIC_SERVER (-1)
#define BUS_NOOP 0
#define MACH_MSG_TYPE_PORT_SEND_ONCE MACH_MSG_TYPE_MOVE_SEND_ONCE
#define ENOATTR 93
#define HOST_SYSPOLICYD_PORT (22 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define ls_empty(x) (!x || !x->length)
#define THREAD_STATE_MAX I386_THREAD_STATE_MAX
#define IN6_IS_ADDR_MC_SITELOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && (__IPV6_ADDR_MC_SCOPE(a) == __IPV6_ADDR_SCOPE_SITELOCAL))
#define IPPROTO_IPV4 4
#define IPPROTO_IPV6 41
#define F_CHECK_LV 98
#define __Reply__host_security_subsystem__defined 
#define IPCTL_RTMINEXPIRE 6
#define R_STR_H 
#define __TVOS_AVAILABLE(_vers) 
#define IN6_IS_ADDR_UNSPECIFIED(a) ((*(const __uint32_t *)(const void *)(&(a)->s6_addr[0]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[4]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[8]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[12]) == 0))
#define PF_PPP AF_PPP
#define RLIM_INFINITY (((__uint64_t)1 << 63) - 1)
#define Color_BGBLUE "\x1b[44m"
#define _PC_REC_MAX_XFER_SIZE 21
#define __FLT32X_HAS_DENORM__ 1
#define CPU_SUBTYPE_INTEL_MODEL(x) ((x) >> 4)
#define __INT_FAST16_TYPE__ short int
#define R_DIM(x,y,z) (((x)<(y))?(y):((x)>(z))?(z):(x))
#define EAI_PROTOCOL 13
#define SA_64REGSET 0x0200
#define SIOCSIFBOND _IOW('i', 70, struct ifreq)
#define _SIZE_T_DEFINED 
#define EFL_USER_CLEAR (EFL_IOPL|EFL_NT|EFL_RF)
#define TID_NULL ((uint64_t) 0)
#define MACH_VOUCHER_ATTR_BITS_STORE MACH_VOUCHER_ATTR_USER_DATA_STORE
#define TASK_EXTMOD_INFO 19
#define __MMX_WITH_SSE__ 1
#define _WCHAR_T_DEFINED_ 
#define _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS 11
#define PROCESSOR_SET_LOAD_INFO 4
#define __WATCHOS_UNAVAILABLE 
#define SCHED_RR 2
#define _POSIX_NO_TRUNC 200112L
#define ECHILD 10
#define SCNdFAST8 SCNd8
#define _SC_V6_ILP32_OFF32 103
#define PRIi64 __PRI_64_LENGTH_MODIFIER__ "i"
#define _POSIX_REGEXP 200112L
#define __FLT64_HAS_DENORM__ 1
#define __IPHONE_3_1 30100
#define __IPHONE_3_2 30200
#define CPU_SUBTYPE_PTRAUTH_ABI 0x80000000
#define TIOCGETA _IOR('t', 19, struct termios)
#define _POSIX_RE_DUP_MAX _POSIX2_RE_DUP_MAX
#define RUSAGE_INFO_V4 4
#define _POSIX_SPORADIC_SERVER (-1)
#define __FLT128_HAS_INFINITY__ 1
#define MACH_PORT_SRIGHTS_PRESENT 1
#define S_TYPEISTMO(buf) (0)
#define PRIdFAST8 PRId8
#define INFINITY (1.0f/0.0f)
#define TASK_EVENTS_INFO_COUNT ((mach_msg_type_number_t) (sizeof(task_events_info_data_t) / sizeof(natural_t)))
#define MIG_ROUTINE_DESCRIPTOR_NULL ((mig_routine_descriptor_t)0)
#define _DARWIN_FEATURE_64_BIT_INODE 1
#define _POSIX_MEMORY_PROTECTION 200112L
#define TIOCGETD _IOR('t', 26, int)
#define MAP_MEM_POSTED 6
#define RColor_BGWHITE RCOLOR(ALPHA_BG, 204, 204, 204, 0x00, 0x00, 0x00, 7)
#define true 1
#define SA_RESETHAND 0x0004
#define __TVOS_10_0_1 100001
#define EAI_SOCKTYPE 10
#define SIN6_LEN 
#define _SC_RAW_SOCKETS 119
#define IPCTL_FASTFORWARDING 14
#define __OS_EXTENSION_UNAVAILABLE(_msg) __OSX_EXTENSION_UNAVAILABLE(_msg) __IOS_EXTENSION_UNAVAILABLE(_msg)
#define VM_FLAGS_ANYWHERE 0x0001
#define _POSIX2_LOCALEDEF 200112L
#define r_list_iter_get(x) (x)->data; (x)=(x)->n
#define PF_PUP AF_PUP
#define __DARWIN_CTYPE_TOP_inline __header_inline
#define MACH_CORE_FILEHEADER_SIGNATURE 0x0063614d20646152ULL
#define __RequestUnion__processor_set_subsystem__defined 
#define SOL_SOCKET 0xffff
#define CPU_SUBTYPE_PENTPRO CPU_SUBTYPE_INTEL(6, 1)
#define x86_AVX_STATE (x86_AVX_STATE32 + 2)
#define _SC_THREAD_SPORADIC_SERVER 92
#define __SOFF 0x1000
#define MACH_RCV_SCATTER_SMALL 0x1000400e
#define __FLT32_MAX__ 3.40282346638528859811704183484516925e+38F32
#define _FSID_T 
#define __MigPackStructs 1
#define R_UTF32_H 
#define x86_PAGEIN_STATE_COUNT ((mach_msg_type_number_t)(sizeof(x86_pagein_state_t) / sizeof(int)))
#define Color_BBGYELLOW "\x1b[103m"
#define _STRUCT_MCONTEXT_AVX512_64_FULL struct __darwin_mcontext_avx512_64_full
#define buffer_SEEK(s,len) ( ( (s)->p -= (len) ) , ( (s)->n += (len) ) )
#define FFDSYNC O_DSYNC
#define __Reply__host_priv_subsystem__defined 
#define __kpi_unavailable 
#define R_SYS_BITS_16 2
#define r_realloc(x,y) realloc((x),(y))
#define TASK_READ_NULL ((task_read_t) 0)
#define EFL_DF 0x00000400
#define CINTR CTRL('c')
#define PTHREAD_RECURSIVE_MUTEX_INITIALIZER {_PTHREAD_RECURSIVE_MUTEX_SIG_init, {0}}
#define _SS_PAD1SIZE (_SS_ALIGNSIZE - sizeof(__uint8_t) - sizeof(sa_family_t))
#define PDP_ENDIAN __DARWIN_PDP_ENDIAN
#define S_BLKSIZE 512
#define host_get_fairplayd_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_FAIRPLAYD_PORT, (port)))
#define IPV6CTL_LOG_INTERVAL 14
#define _SC_STREAM_MAX 26
#define _STRUCT_IOVEC 
#define MACH_RCV_IN_PROGRESS_TIMED 0x10004011
#define __amd64 1
#define CEOL 0xff
#define POLICY_TIMESHARE_INFO_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_timeshare_info)/sizeof(integer_t)))
#define VM_VOLATILE_ORDER_MASK (1 << VM_VOLATILE_ORDER_SHIFT)
#define CEOT CEOF
#define MACH_MSG_ALLOCATE 2
#define CPU_SUBTYPE_ARM64_PTR_AUTH_MASK 0x0f000000
#define BUS_OBJERR 3
#define __strfmonlike(fmtarg,firstvararg) __attribute__((__format__ (__strfmon__, fmtarg, firstvararg)))
#define PFMTDPTR "td"
#define r_list_foreach_prev_safe(list,it,tmp,pos) for (it = list->tail; it && (pos = it->data, tmp = it->p, 1); it = tmp)
#define R_SYS_BITS_32 4
#define TASK_TRACE_MEMORY_INFO 24
#define TIOCM_DSR 0400
#define MACH_MSG_OOL_DESCRIPTOR 1
#define SEGV_MAPERR 1
#define SDB_MAX_GPERF_KEYS 15000
#define IOPOL_VFS_CONTENT_PROTECTION_DEFAULT 0
#define __PTHREAD_ONCE_SIZE__ 8
#define PF_DLI AF_DLI
#define RUNECODE_CORNER_TR 0xd0
#define VM_MEMORY_MALLOC_MEDIUM 12
#define VM_REGION_BASIC_INFO_COUNT_64 ((mach_msg_type_number_t) (sizeof(vm_region_basic_info_data_64_t)/sizeof(int)))
#define EXC_I386_EXTERR 5
#define THREAD_PRECEDENCE_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (thread_precedence_policy_data_t) / sizeof (integer_t)))
#define _PTRDIFF_T_DECLARED 
#define TIOCM_DTR 0002
#define MAC_OS_X_VERSION_10_5 1050
#define _SC_2_PBS_LOCATE 62
#define __SCN_64_LENGTH_MODIFIER__ "ll"
#define OSWriteLittleInt16(base,byteOffset,data) _OSWriteInt16(base, byteOffset, data)
#define sigemptyset(set) (*(set) = 0, 0)
#define B_UNSET(x,n) ((x) &= ~(1ULL << (n)))
#define SM_PRIVATE_ALIASED 6
#define R_UTF8_SKULL_AND_CROSSBONES "☠"
#define PRIx8 __PRI_8_LENGTH_MODIFIER__ "x"
#define KEV_INET_ARPCOLLISION 7
#define HOST_USER_NOTIFICATION_PORT (3 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define __RequestUnion__task_subsystem__defined 
#define _CS_DARWIN_USER_TEMP_DIR 65537
#define __FLT32_HAS_QUIET_NAN__ 1
#define MCAST_EXCLUDE 2
#define _NETINET6_IN6_H_ 
#define CPU_SUBTYPE_PENTIUM_4_M CPU_SUBTYPE_INTEL(10, 1)
#define THREAD_TIME_CONSTRAINT_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (thread_time_constraint_policy_data_t) / sizeof (integer_t)))
#define CRPRNT CREPRINT
#define VM_PURGABLE_EMPTY 2
#define IPPROTO_AH 51
#define __SIZEOF_SIZE_T__ 8
#define __DARWIN_ALIAS_STARTING(_mac,_iphone,x) __DARWIN_ALIAS_STARTING_MAC_ ##_mac(x)
#define R_SYS_BITS_64 8
#define __offsetof(type,field) __builtin_offsetof(type, field)
#define MACH_NOTIFY_FIRST 0100
#define MACH_RCV_LARGE_IDENTITY 0x00000008
#define _WCHAR_T 
#define O_NONBLOCK 0x00000004
#define MIG_BAD_ARGUMENTS -304
#define SCNiPTR "li"
#define __compiler_barrier() __asm__ __volatile__("" ::: "memory")
#define R_VLOG(lvl,tag,fmtstr,args) r_vlog (MACRO_LOG_FUNC, __FILE__, __LINE__, lvl, tag, fmtstr, args);
#define PTHREAD_MUTEX_INITIALIZER {_PTHREAD_MUTEX_SIG_init, {0}}
#define WAKEMON_MAKE_FATAL 0x10
#define R_EMPTY2 {{ 0 }}
#define TCSADRAIN 1
#define POLICY_TIMESHARE_BASE_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_timeshare_base)/sizeof(integer_t)))
#define SIG_BLOCK 1
#define __DARWIN_FD_ZERO(p) __builtin_bzero(p, sizeof(*(p)))
#define POLICYCLASS_FIXEDPRI (POLICY_RR | POLICY_FIFO)
#define SDB_NUM_BASE 16
#define MACH_PORT_QLIMIT_KERNEL (65534)
#define R_W32_H 
#define _SYS_SELECT_H_ 
#define MACH_PORT_DNREQUESTS_SIZE_COUNT 1
#define r_oflist_destroy(x) r_oflist_deserialize (x)
#define SIZE_MAX UINTPTR_MAX
#define IP_MAX_GROUP_SRC_FILTER 512
#define KERN_DATA_SELECTOR 0x0010
#define PRIO_DARWIN_THREAD 3
#define TASK_FLAGS_INFO_COUNT ((mach_msg_type_number_t) (sizeof(task_flags_info_data_t) / sizeof (natural_t)))
#define POLICY_RR 2
#define r_io_map_set_begin(map,new_addr) do { map->itv.addr = new_addr; } while (0)
#define PRIiLEAST32 PRIi32
#define _processor_user_ 
#define ASN1_JSON_EMPTY "{}"
#define CPU_SUBTYPE_VAX780 ((cpu_subtype_t) 1)
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
#define TCPOLEN_TIMESTAMP 10
#define R_MIN(x,y) (((x)>(y))?(y):(x))
#define _GCC_WCHAR_T 
#define __FLT32_MAX_EXP__ 128
#define trunc_page_kernel(x) ((x) & (~vm_kernel_page_mask))
#define SO_NKE 0x1021
#define MATTR_VAL_OFF 0
#define IP_DUMMYNET_DEL 61
#define HOST_DEBUG_INFO_INTERNAL 10
#define __SOPT 0x0400
#define pthread_cleanup_push(func,val) { struct __darwin_pthread_handler_rec __handler; pthread_t __self = pthread_self(); __handler.__routine = func; __handler.__arg = val; __handler.__next = __self->__cleanup_stack; __self->__cleanup_stack = &__handler;
#define IPPORT_RESERVEDSTART 600
#define S_IWUSR 0000200
#define PRIiFAST8 PRIi8
#define x86_AVX512_STATE_COUNT ((mach_msg_type_number_t) (sizeof(x86_avx512_state_t)/sizeof(unsigned int)))
#define VM_64_BIT_DATA_OBJECTS 
#define CONNECT_DATA_AUTHENTICATED 0x4
#define IPPROTO_IGMP 2
#define __ReplyUnion__task_subsystem__defined 
#define SCNoLEAST8 SCNo8
#define EXC_I386_INVTSSFLT 10
#define TAG_NUMERICSTRING 0x12
#define PRIiLEAST64 PRIi64
#define SIOCATMARK _IOR('s', 7, int)
#define KEV_DL_SIFFLAGS 1
#define POLLNVAL 0x0020
#define RTLD_NEXT ((void *) -1)
#define OSSwapLittleToHostConstInt16(x) ((uint16_t)(x))
#define FPS_C0 0x0100
#define FPS_C1 0x0200
#define FPS_C2 0x0400
#define ADD_MACH_TIMESPEC(t1,t2) do { if (((t1)->tv_nsec += (t2)->tv_nsec) >= (long) NSEC_PER_SEC) { (t1)->tv_nsec -= (long) NSEC_PER_SEC; (t1)->tv_sec += 1; } (t1)->tv_sec += (t2)->tv_sec; } while (0)
#define __GXX_ABI_VERSION 1016
#define UT32_HI(x) ((ut32)(((ut64)(x))>>32)&UT32_MAX)
#define R_CONS_KEY_F3 0xf3
#define R_CONS_KEY_F8 0xf8
#define R_CONS_KEY_F9 0xf9
#define _SC_PAGESIZE 29
#define UINT_LEAST16_MAX UINT16_MAX
#define __DARWIN_ALIGNBYTES32 (sizeof(__uint32_t) - 1)
#define F_UNLCK 2
#define __DARWIN_FD_SET(n,p) __darwin_fd_set((n), (p))
#define IP_MIN_MEMBERSHIPS 31
#define LOCKGROUP_MAX_NAME 64
#define ECHOE 0x00000002
#define INADDR_ANY (u_int32_t)0x00000000
#define ECHOK 0x00000004
#define FPS_DE 0x0002
#define TASK_ACCESS_PORT 9
#define __DEVOLATILE(type,var) __CAST_AWAY_QUALIFIER(var, volatile, type)
#define pseudo_AF_RTIP 22
#define R2_HOME_WWWROOT R_JOIN_2_PATHS (R2_HOME_DATADIR, "www")
#define _PC_LINK_MAX 1
#define OSSwapLittleToHostConstInt32(x) ((uint32_t)(x))
#define TH_ACK 0x10
#define ITIMER_REAL 0
#define _BSD_I386__TYPES_H_ 
#define FPS_ES 0x0080
#define IPPROTO_IL 40
#define B134 134
#define buffer_PUTC(s,c) ( ((s)->n != (s)->p) ? ( (s)->x[(s)->p++] = (c), 0 ) : buffer_put((s),&(c),1) )
#define IPPROTO_IP 0
#define UINT32_MAX 4294967295U
#define _POSIX_SHELL 200112L
#define WNOHANG 0x00000001
#define _BSD_MACHINE__TYPES_H_ 
#define SUPERPAGE_SIZE_ANY 1
#define _XOPEN_SHM (1)
#define MACH_RCV_OVERWRITE 0x00000000
#define TASK_EVENTS_INFO 2
#define PF_IPX AF_IPX
#define host_set_kextd_port(host,port) (host_set_special_port((host), HOST_KEXTD_PORT, (port)))
#define THREAD_EXTENDED_INFO_COUNT ((mach_msg_type_number_t) (sizeof(thread_extended_info_data_t) / sizeof (natural_t)))
#define TIOCMODG _IOR('t', 3, int)
#define CPUFAMILY_ARM_CYCLONE 0x37a09642
#define SEGV_ACCERR 2
#define TIOCMODS _IOW('t', 4, int)
#define VM_PAGE_QUERY_PAGE_DIRTY 0x8
#define __PTRDIFF_T 
#define HOST_ATM_NOTIFICATION_PORT (14 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define MACH_MSG_TYPE_INTEGER_T MACH_MSG_TYPE_INTEGER_32
#define x86_THREAD_STATE_COUNT ((mach_msg_type_number_t) ( sizeof (x86_thread_state_t) / sizeof (int) ))
#define __packed __attribute__((__packed__))
#define IPCTL_SENDREDIRECTS 2
#define CPU_SUBTYPE_POWERPC_603e ((cpu_subtype_t) 4)
#define __PTHREAD_CONDATTR_SIZE__ 8
#define EREMOTE 71
#define i386_EXCEPTION_STATE 3
#define UT32_LO(x) ((ut32)((x)&UT32_MAX))
#define B150 150
#define _POSIX_ADVISORY_INFO (-1)
#define VM_FLAGS_NO_CACHE 0x0010
#define __TVOS_12_0 120000
#define __TVOS_12_1 120100
#define __TVOS_12_2 120200
#define __TVOS_12_3 120300
#define F_GETFL 3
#define stpncpy(dest,...) __builtin___stpncpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define F_LOCK 1
#define IPPROTO_WBMON 78
#define EXC_I386_SGLSTP 1
#define _POSIX2_FORT_RUN 200112L
#define UT8_MIN 0x00U
#define IN6ADDR_NODELOCAL_ALLNODES_INIT {{{ 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01 }}}
#define task_set_task_debug_control_port(task,port) (task_set_special_port((task), TASK_DEBUG_CONTROL_PORT, (port)))
#define __DBL_DECIMAL_DIG__ 17
#define S_IRWXG 0000070
#define KERN_NAME_EXISTS 13
#define FPS_C3 0x4000
#define TAG_OBJDESCRIPTOR 0x07
#define THREAD_FLAVOR_CONTROL 0
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
#define fileno_unlocked(p) __sfileno(p)
#define R_BASE64_H 
#define MAP_MEM_ONLY 0x010000
#define TASK_EXC_GUARD_VM_DELIVER 0x01
#define R_STRBUF_SAFEGET(sb) (r_strbuf_get (sb) ? r_strbuf_get (sb) : "")
#define MACH_VOUCHER_ATTR_COPY ((mach_voucher_attr_recipe_command_t)1)
#define PRIx16 "hx"
#define IN_CLASSA_NSHIFT 24
#define TCPOLEN_WINDOW 3
#define UF_SETTABLE 0x0000ffff
#define _vm_map_user_ 
#define __OSX_AVAILABLE(_vers) 
#define RLIMIT_WAKEUPS_MONITOR 0x1
#define VM_MEMORY_COREGRAPHICS_SHARED 55
#define USE_PTRACE_WRAP 0
#define IPPROTO_ND 77
#define MAP_MEM_4K_DATA_ADDR 0x800000
#define CPUSUBFAMILY_ARM_HG 2
#define __ReplyUnion__processor_subsystem__defined 
#define NI_NUMERICSCOPE 0x00000100
#define __ILP32_OFFBIG (-1)
#define __FLT64X_NORM_MAX__ 1.18973149535723176502126385303097021e+4932F64x
#define PRIuFAST64 PRIu64
#define FD_ZERO(p) __DARWIN_FD_ZERO(p)
#define __SIZEOF_POINTER__ 8
#define MACH_MSGH_KIND_NORMAL 0x00000000
#define MACH_RCV_TRAILER_CTX 4
#define _PTHREAD_QOS_H 
#define __not_tail_called 
#define VM_MEMORY_CM_CRABS 96
#define _CS_XBS5_LPBIG_OFFBIG_LDFLAGS 33
#define UNUSED __attribute__((__unused__))
#define PRIx32 "x"
#define NSEC_PER_SEC 1000000000ull
#define IP_OLD_FW_GET 54
#define SCNu8 __PRI_8_LENGTH_MODIFIER__ "u"
#define ST32_ADD_OVFCHK(a,x) ((((x) > 0) && ((a) > ST32_MAX - (x))) || (((x) < 0) && (a) < ST32_MIN - (x)))
#define IPV6_MULTICAST_IF 9
#define RColor_BGCYAN RCOLOR(ALPHA_BG, 58, 150, 221, 0x00, 0x00, 0x00, 6)
#define TASK_DYLD_ALL_IMAGE_INFO_32 0
#define R_CONS_KEY_F4 0xf4
#define mach_port_MSG_COUNT 40
#define MAP_MEM_VM_SHARE 0x400000
#define R2_HOME_THEMES R_JOIN_2_PATHS (R2_HOME_DATADIR, "cons")
#define _POSIX_SYMLOOP_MAX 8
#define SO_SNDTIMEO 0x1005
#define MACH_MSG_OOL_PORTS_DESCRIPTOR 2
#define F_TRIM_ACTIVE_FILE 100
#define CPU_SUBTYPE_POWERPC_601 ((cpu_subtype_t) 1)
#define CPU_SUBTYPE_POWERPC_602 ((cpu_subtype_t) 2)
#define CPU_SUBTYPE_POWERPC_603 ((cpu_subtype_t) 3)
#define UQUAD_MAX ULLONG_MAX
#define F_GETLK 7
#define RUNECODESTR_MIN 0xc8
#define SIGTRAP 5
#define EISDIR 21
#define _CS_DARWIN_USER_CACHE_DIR 65538
#define __nonnull 
#define _POSIX_THREAD_ATTR_STACKSIZE 200112L
#define _PTHREAD_FIRSTFIT_MUTEX_SIG_init 0x32AAABA3
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10_2(x) x
#define _INTPTR_T 
#define KEV_DL_LINK_ON 13
#define IGNPAR 0x00000004
#define PRIx64 __PRI_64_LENGTH_MODIFIER__ "x"
#define UT64_16U 0xFFFFFFFFFFFF0000ULL
#define O_DSYNC 0x400000
#define vm_map_MSG_COUNT 33
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_4(x) 
#define __API_DEPRECATED_BEGIN_MSG_GET_MACRO(...) 
#define CPU_SUBTYPE_POWERPC_620 ((cpu_subtype_t) 8)
#define WAIT_MYPGRP 0
#define NL_ARGMAX 9
#define ut8p_b(x) ((x)[0])
#define INT_LEAST8_MAX INT8_MAX
#define CPU_TYPE_X86_64 (CPU_TYPE_X86 | CPU_ARCH_ABI64)
#define TAG_BITSTRING 0x03
#define FPC_IC_PROJ 0x0000
#define host_get_io_master_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_IO_MASTER_PORT, (port)))
#define TAG_T61STRING 0x14
#define HOST_BASIC_INFO 1
#define VSUSP 10
#define __WATCHOS_4_1 40100
#define FPS_PE 0x0020
#define TCPOPT_EOL 0
#define AI_UNUSABLE 0x10000000
#define __FLT64_MIN_10_EXP__ (-307)
#define ARCADE_REG_NULL ((arcade_register_t) 0)
#define TARGET_OS_IPHONE 0
#define IPPROTO_TP 29
#define IFTODT(mode) (((mode) & 0170000) >> 12)
#define SIOCGIFBOND _IOWR('i', 71, struct ifreq)
#define __has_extension(x) 0
#define R_BITMAP_H 
#define R_TREE_H 
#define SOCK_RAW 3
#define MEMORY_OBJECT_BEHAVIOR_INFO 15
#define CPU_TYPE_I386 CPU_TYPE_X86
#define KERN_NO_ACCESS 8
#define BUFFER_OUTSIZE 8192
#define ULONG_MAX (LONG_MAX * 2UL + 1UL)
#define VM_REGION_BASIC_INFO 10
#define PAGE_MIN_MASK (PAGE_MIN_SIZE-1)
#define USEC_PER_SEC 1000000ull
#define __FLT64X_DECIMAL_DIG__ 21
#define host_set_dynamic_pager_port(host,port) (host_set_special_port((host), HOST_DYNAMIC_PAGER_PORT, (port)))
#define MACH_MSGH_BITS(remote,local) ((remote) | ((local) << 8))
#define R_UTF8_POLICE_CARS_REVOLVING_LIGHT "🚨"
#define _MACH_MACHINE_THREAD_STATUS_H_ 
#define R2_TYPES_BASE_H 
#define VM_LEDGER_TAG_GRAPHICS 0x00000004
#define EXC_RPC_ALERT 9
#define __API_AVAILABLE_END 
#define MACH_MSGH_BITS_DENAPHOLDASRT MACH_MSGH_BITS_IMPHOLDASRT
#define __DBL_HAS_DENORM__ 1
#define R_SYS_DIR "/"
#define INT_LEAST32_MAX INT32_MAX
#define _NET_NETKEV_H_ 
#define MACH_MSG_TYPE_PORT_ANY(x) (((x) >= MACH_MSG_TYPE_MOVE_RECEIVE) && ((x) <= MACH_MSG_TYPE_MAKE_SEND_ONCE))
#define GETSIGSINFO_PLATFORM_BINARY 1
#define __MAC_10_11_2 101102
#define __MAC_10_11_3 101103
#define FPE_FLTSUB 6
#define SCNoFAST8 SCNo8
#define DOT_STYLE_BACKEDGE 2
#define FPS_SF 0x0040
#define IPV6CTL_MAXFRAGPACKETS 9
#define R2_SDB_FORMAT R_JOIN_2_PATHS (R2_SDB, "format")
#define _CS_XBS5_ILP32_OFFBIG_LDFLAGS 25
#define IPV6CTL_SENDREDIRECTS 2
#define CHAR_BIT __CHAR_BIT__
#define PARMRK 0x00000008
#define __OS_AVAILABILITY(_target,_availability) 
#define MACH_RCV_TRAILER_AUDIT 3
#define R_BIG_WORD_SIZE 4
#define TASK_BASE_QOS_POLICY 8
#define R_CONS_KEY_F1 0xf1
#define __FLT32_MIN__ 1.17549435082228750796873653722224568e-38F32
#define __UINT8_TYPE__ unsigned char
#define IPV6CTL_HDRNESTLIMIT 15
#define IP_FW_RESETLOG 45
#define _SC_BC_BASE_MAX 9
#define MSG_CTRUNC 0x20
#define R_CONS_KEY_F2 0xf2
#define SDB_OPTION_FS (1 << 2)
#define NSEC_PER_MSEC 1000000ull
#define SF_SUPPORTED 0x009f0000
#define __NO_INLINE__ 1
#define MACH_RCV_TRAILER_MASK ((0xf << 24))
#define FPS_UE 0x0010
#define Color_BBGMAGENTA "\x1b[105m"
#define WANT_DYLINK 1
#define CORNER_BR 4
#define __IPV6_ADDR_SCOPE_GLOBAL 0x0e
#define SIOCSIFASYNCMAP _IOW('i', 125, struct ifreq)
#define Color_BWHITE "\x1b[97m"
#define _WRITE_OK (1<<10)
#define LONG_LONG_MAX __LONG_LONG_MAX__
#define OSSwapLittleToHostInt(x) OSSwapLittleToHostInt32(x)
#define FPC_RC_CHOP 0x0c00
#define R_CONS_KEY_F5 0xf5
#define IPCTL_STATS 12
#define R_DEFAULT_LOGLVL R_LOGLVL_WARN
#define _MACH_MACHINE_VM_PARAM_H_ 
#define S_ISLNK(m) (((m) & S_IFMT) == S_IFLNK)
#define IP_PKTINFO 26
#define MACH_MSG_TYPE_PORT_NONE 0
#define __RequestUnion__lock_set_subsystem__defined 
#define CPU_SUBTYPE_MC680x0_ALL ((cpu_subtype_t) 1)
#define ls_head(x) x->head
#define R_CONS_KEY_F6 0xf6
#define __enum_options 
#define MAX_CANON 1024
#define EXC_MASK_RESOURCE (1 << EXC_RESOURCE)
#define NDR_PROTOCOL_2_0 0
#define R2_HOME_PLUGINS R_JOIN_2_PATHS (R2_HOME_DATADIR, "plugins")
#define THROUGHPUT_QOS_LAUNCH_DEFAULT_TIER THROUGHPUT_QOS_TIER_3
#define INT_LEAST8_MIN INT8_MIN
#define R_CONS_KEY_F7 0xf7
#define r_flist_iterator(x) x
#define subsystem_to_name_map_processor { "processor_start", 3000 }, { "processor_exit", 3001 }, { "processor_info", 3002 }, { "processor_control", 3003 }, { "processor_assign", 3004 }, { "processor_get_assignment", 3005 }
#define errno (*__error())
#define _SC_TRACE_NAME_MAX 128
#define MEMORY_OBJECT_ATTRIBUTE_INFO 14
#define _host_priv_user_ 
#define TASK_BASIC_INFO TASK_BASIC_INFO_64
#define FPC_UE 0x0010
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
#define MAP_MEM_POSTED_COMBINED_REORDERED 9
#define R_PRINT_JSON_DEPTH_LIMIT 128
#define SO_KEEPALIVE 0x0008
#define __DBL_MANT_DIG__ 53
#define err_system(x) ((signed)((((unsigned)(x))&0x3f)<<26))
#define _PC_CASE_SENSITIVE 11
#define r_skiplist_islast(list,el) (el->forward[0] == list->head)
#define _SOCKLEN_T 
#define BADSIG SIG_ERR
#define _FSFILCNT_T 
#define VM_MEMORY_DHMM 84
#define B115200 115200
#define CPU_SUBTYPE_UVAXI ((cpu_subtype_t) 5)
#define MAP_MEM_FLAGS_MASK 0x00FFFF00
#define VM_MEMORY_MALLOC_PGUARD 13
#define CPU_SUBTYPE_POWERPC_970 ((cpu_subtype_t) 100)
#define SV_RESETHAND SA_RESETHAND
#define FPS_ZE 0x0004
#define HOST_NODE_PORT (19 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define KEV_DL_AWDL_RESTRICTED 26
#define MACH_VOUCHER_ATTR_KEY_NUM_WELL_KNOWN MACH_VOUCHER_ATTR_KEY_TEST
#define DST_EET 5
#define _IN_PORT_T 
#define VM_FLAGS_PURGABLE 0x0002
#define CERASE 0177
#define _NETINET_TCP_H_ 
#define CMSG_FIRSTHDR(mhdr) ((mhdr)->msg_controllen >= sizeof(struct cmsghdr) ? (struct cmsghdr *)(mhdr)->msg_control : (struct cmsghdr *)0L)
#define host_set_syspolicyd_port(host,port) (host_set_special_port((host), HOST_SYSPOLICYD_PORT, (port)))
#define SCNi32 "i"
#define RColor_RED RCOLOR(ALPHA_FG, 197, 15, 31, 0x00, 0x00, 0x00, 1)
#define SDB_LIST_UNSORTED 0
#define VM_REGION_EXTENDED_INFO_COUNT ((mach_msg_type_number_t) (sizeof (vm_region_extended_info_data_t) / sizeof (natural_t)))
#define ECHO 0x00000008
#define MACH_PORT_TYPE_SEND_RIGHTS (MACH_PORT_TYPE_SEND|MACH_PORT_TYPE_SEND_ONCE)
#define __DARWIN_OSSwapInt64(x) (__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt64(x) : _OSSwapInt64(x))
#define st_mtime st_mtimespec.tv_sec
#define SIOCGIFMAC _IOWR('i', 130, struct ifreq)
#define sigfillset(set) (*(set) = ~(sigset_t)0, 0)
#define LINE_MAX 2048
#define MACH_VOUCHER_IMPORTANCE_ATTR_DROP_EXTERNAL 2
#define __STRING(x) #x
#define SO_OOBINLINE 0x0100
#define NGROUPS_MAX 16
#define SIGVTALRM 26
#define TCP_MAX_SACK 4
#define ls_iterator(x) (x)?(x)->head:NULL
#define KERNEL_VERSION_MAX (512)
#define OSSwapBigToHostInt(x) OSSwapBigToHostInt32(x)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_2(x) 
#define THR_ACT_NULL ((thread_act_t) 0)
#define __RequestUnion__thread_act_subsystem__defined 
#define RLIMIT_CPU 0
#define B110 110
#define EXC_I386_INVOP 1
#define IPPROTO_AX25 93
#define LONG_LONG_MIN (-LONG_LONG_MAX - 1LL)
#define trunc_page(x) ((x) & (~(vm_page_size - 1)))
#define LIBC_HAVE_FORK 1
#define F_SETLKWTIMEOUT 10
#define SCNi64 __SCN_64_LENGTH_MODIFIER__ "i"
#define F_ULOCK 0
#define MACH_SEND_NOTIFY 0x00000080
#define SI_ASYNCIO 0x10004
#define __DARWIN_STRUCT_DIRENTRY { __uint64_t d_ino; __uint64_t d_seekoff; __uint16_t d_reclen; __uint16_t d_namlen; __uint8_t d_type; char d_name[__DARWIN_MAXPATHLEN]; }
#define INADDR_UNSPEC_GROUP (u_int32_t)0xe0000000
#define EXCEPTION_CODE_MAX 2
#define _SC_TRACE 97
#define __LDBL_DECIMAL_DIG__ 21
#define CPU_SUBTYPE_X86_64_H ((cpu_subtype_t)8)
#define IOPOL_TYPE_VFS_SKIP_MTIME_UPDATE 8
#define TH_STATE_RUNNING 1
#define KMOD_INFO_NAME kmod_info
#define IN6_IS_ADDR_V4COMPAT(a) ((*(const __uint32_t *)(const void *)(&(a)->s6_addr[0]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[4]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[8]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[12]) != 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[12]) != ntohl(1)))
#define _SC_FSYNC 38
#define R_LIB_SEPARATOR "."
#define TASK_NAME_PORT 3
#define __API_DEPRECATED(...) 
#define __MAC_10_12_2 101202
#define FPE_INTOVF 8
#define F_ADDFILESIGS_INFO 103
#define TIOCPKT_START 0x08
#define VM_MEMORY_SWIFT_RUNTIME 82
#define x86_AVX512_STATE64 (x86_AVX512_STATE32 + 1)
#define _OFF_T 
#define __SDB_WINDOWS__ 0
#define RUNECODESTR_ARROW_LEFT "\xcd"
#define clearerr_unlocked(p) __sclearerr(p)
#define TASK_FLAVOR_INSPECT 2
#define CPUFAMILY_ARM_FIRESTORM_ICESTORM 0x1b588bb3
#define KEV_DL_NODE_PRESENCE 21
#define _POSIX2_FORT_DEV (-1)
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#define MCAST_LEAVE_GROUP 81
#define SIOCGPGRP _IOR('s', 9, int)
#define PFMT64o "llo"
#define _POSIX_THREAD_PROCESS_SHARED 200112L
#define R2_DATDIR_R2 R_JOIN_2_PATHS ("share", "radare2")
#define PFMT64x "llx"
#define EFL_USER_SET (EFL_IF)
#define IP_MAX_SOCK_SRC_FILTER 128
#define subsystem_to_name_map_thread_act { "thread_terminate", 3600 }, { "act_get_state", 3601 }, { "act_set_state", 3602 }, { "thread_get_state", 3603 }, { "thread_set_state", 3604 }, { "thread_suspend", 3605 }, { "thread_resume", 3606 }, { "thread_abort", 3607 }, { "thread_abort_safely", 3608 }, { "thread_depress_abort", 3609 }, { "thread_get_special_port", 3610 }, { "thread_set_special_port", 3611 }, { "thread_info", 3612 }, { "thread_set_exception_ports", 3613 }, { "thread_get_exception_ports", 3614 }, { "thread_swap_exception_ports", 3615 }, { "thread_policy", 3616 }, { "thread_policy_set", 3617 }, { "thread_policy_get", 3618 }, { "thread_sample", 3619 }, { "etap_trace_thread", 3620 }, { "thread_assign", 3621 }, { "thread_assign_default", 3622 }, { "thread_get_assignment", 3623 }, { "thread_set_policy", 3624 }, { "thread_get_mach_voucher", 3625 }, { "thread_set_mach_voucher", 3626 }, { "thread_swap_mach_voucher", 3627 }, { "thread_convert_thread_state", 3628 }, { "thread_get_exception_ports_info", 3630 }
#define SIOCGIFKPI _IOWR('i', 135, struct ifreq)
#define ST64_SUB_OVFCHK(a,b) ST64_ADD_OVFCHK(a,-(b))
#define TIOCUCNTL _IOW('t', 102, int)
#define _SC_2_LOCALEDEF 23
#define _STRINGS_H_ 
#define SIG_ATOMIC_MAX INT32_MAX
#define R2_LIB_H 
#define MACH_SEND_INVALID_MEMORY 0x1000000c
#define R_BETWEEN(x,y,z) (((y)>=(x)) && ((y)<=(z)))
#define F_FREEZE_FS 53
#define SSIZE_MAX LONG_MAX
#define TH_STATE_UNINTERRUPTIBLE 4
#define Color_GRAY "\x1b[90m"
#define __FBSDID(s) 
#define FPC_RC_RN 0x0000
#define SIOCGIFALTMTU _IOWR('i', 72, struct ifreq)
#define _clock_priv_user_ 
#define PROCESSOR_BASIC_INFO_COUNT ((mach_msg_type_number_t) (sizeof(processor_basic_info_data_t)/sizeof(natural_t)))
#define R_CONS_CLEAR_LINE "\x1b[2K\r"
#define FUNC_ATTR_USED __attribute__((used))
#define ST64_MAX ((st64)0x7FFFFFFFFFFFFFFFULL)
#define CMIN 1
#define IN6_IS_ADDR_UNICAST_BASED_MULTICAST(a) (IN6_IS_ADDR_MULTICAST(a) && (IPV6_ADDR_MC_FLAGS(a) == IPV6_ADDR_MC_FLAGS_UNICAST_BASED))
#define R_TYPES_OVERFLOW_H 
#define AT_FDCWD -2
#define VM_MEMORY_CORESERVICES 43
#define _SC_MQ_PRIO_MAX 75
#define INT32_MAX 2147483647
#define FIOSETOWN _IOW('f', 124, int)
#define UT16_MAX 0xFFFFU
#define _U_INT8_T 
#define _SC_THREAD_ATTR_STACKSIZE 83
#define R_JOIN_3_PATHS(p1,p2,p3) p1 R_SYS_DIR p2 R_SYS_DIR p3
#define RColor_NULL RCOLOR(0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, -1)
#define HAVE_EXPLICIT_MEMSET 0
#define TH_STATE_WAITING 3
#define _PATH_PROTOCOLS "/etc/protocols"
#define R2_UTIL_H 
#define CPU_TYPE_MC98000 ((cpu_type_t) 10)
#define err_max_system 0x3f
#define MACH_PORT_QLIMIT_MAX MACH_PORT_QLIMIT_LARGE
#define IOPOL_MATERIALIZE_DATALESS_FILES_DEFAULT 0
#define _ARPA_INET_H_ 
#define PRIO_DARWIN_BG 0x1000
#define NI_MAXHOST 1025
#define PF_XTP pseudo_AF_XTP
#define HOST_NULL ((host_t) 0)
#define EXC_MASK_CRASH (1 << EXC_CRASH)
#define FPC_DE 0x0002
#define _POSIX2_EQUIV_CLASS_MAX 2
#define THREAD_NULL ((thread_t) 0)
#define r_io_submap_overlap(bd,sm) r_itv_overlap(bd->itv, sm->itv)
#define __SALC 0x4000
#define CPUFAMILY_ARM_XSCALE 0x53b005f5
#define VM_MEMORY_UNSHARED_PMAP 35
#define IP_IPSEC_POLICY 21
#define HOST_PRIV_PORT 2
#define MAC_OS_X_VERSION_10_15_1 101501
#define _SC_READER_WRITER_LOCKS 76
#define TCPCI_FLAG_REORDERING_DETECTED 0x00000002
#define R2_GLOBAL_RC R_JOIN_2_PATHS (R2_DATDIR_R2, "radare2rc")
#define __OSX_UNAVAILABLE 
#define __SCHAR_WIDTH__ 8
#define SCNiLEAST8 SCNi8
#define PTRDIFF_MIN INTMAX_MIN
#define OSReadLittleInt16(base,byteOffset) _OSReadInt16(base, byteOffset)
#define CPU_ARCH_ABI64_32 0x02000000
#define TH_PUSH 0x08
#define FPC_PC 0x0300
#define _STRUCT_MCONTEXT_AVX32 struct __darwin_mcontext_avx32
#define _POSIX_OPEN_MAX 20
#define MAC_OS_VERSION_11_0 110000
#define IP_ADD_MEMBERSHIP 12
#define F_NODIRECT 62
#define __FLT32_MAX_10_EXP__ 38
#define memset(dest,...) __builtin___memset_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define MPO_CONTEXT_AS_GUARD 0x01
#define FILESEC_GUID FILESEC_UUID
#define FPC_PE 0x0020
#define DT_CHR 2
#define __va_copy(d,s) __builtin_va_copy(d,s)
#define SIGSEGV 11
#define cdb_datalen(c) ((c)->dlen)
#define NET_RT_DUMP2 7
#define CPU_SUBTYPE_MC68030 ((cpu_subtype_t) 1)
#define VM_PROT_WANTS_COPY ((vm_prot_t) 0x10)
#define CMSG_DATA(cmsg) ((unsigned char *)(cmsg) + __DARWIN_ALIGN32(sizeof(struct cmsghdr)))
#define r_oflist_prepend(x,y) r_oflist_deserialize (x), r_list_prepend (x, y)
#define R_TIME_PROFILE_END do{}while(0)
#define TTYDEF_OFLAG (OPOST | ONLCR)
#define _SC_MESSAGE_PASSING 33
#define IOPOL_STANDARD 5
#define LOCAL_PEEREUUID 0x005
#define CPU_TYPE_ARM ((cpu_type_t) 12)
#define __INT_FAST32_TYPE__ int
#define getc_unlocked(fp) __sgetc(fp)
#define _SYS_TTYDEFAULTS_H_ 
#define IN_CLASSD_HOST 0x0fffffff
#define CQUIT 034
#define CPU_SUBTYPE_MC68040 ((cpu_subtype_t) 2)
#define BUFFER_INIT(op,fd,buf,len) { (buf), 0, (len), (fd), (op) }
#define TCPOPT_SIGNATURE 19
#define R_FUNCTION ((const char*) (__func__))
#define RColor_BBGCYAN RCOLOR(ALPHA_BG, 97, 214, 214, 0x00, 0x00, 0x00, 14)
#define IOPOL_VFS_STATFS_FORCE_NO_DATA_VOLUME 1
#define r_oflist_delete(x,y) r_oflist_deserialize (x), r_list_delete (x, y)
#define LOCAL_PEERTOKEN 0x006
#define SIG_DFL (void (*)(int))0
#define MACH_RCV_INVALID_DATA 0x10004008
#define MACH_PORT_TYPE_DEAD_NAME MACH_PORT_TYPE(MACH_PORT_RIGHT_DEAD_NAME)
#define SIG_ATOMIC_MIN INT32_MIN
#define F_OK 0
#define INADDR_PFSYNC_GROUP (u_int32_t)0xe00000f0
#define _PC_PATH_MAX 5
#define MACH_MSG_TRAILER_FORMAT_0_SIZE sizeof(mach_msg_format_0_trailer_t)
#define THREAD_CONVERT_THREAD_STATE_TO_SELF 1
#define __SAPP 0x0100
#define R_REGEX_ASSERT 15
#define FPC_PC_64 0x0300
#define _GCC_PTRDIFF_T 
#define _KEY_T 
#define subsystem_to_name_map_processor_set { "processor_set_statistics", 4000 }, { "processor_set_destroy", 4001 }, { "processor_set_max_priority", 4002 }, { "processor_set_policy_enable", 4003 }, { "processor_set_policy_disable", 4004 }, { "processor_set_tasks", 4005 }, { "processor_set_threads", 4006 }, { "processor_set_policy_control", 4007 }, { "processor_set_stack_usage", 4008 }, { "processor_set_info", 4009 }, { "processor_set_tasks_with_flavor", 4010 }
#define R_REGEX_BADPAT 2
#define _INT64_T 
#define __darwin_obsz(object) __builtin_object_size (object, _USE_FORTIFY_LEVEL > 1 ? 1 : 0)
#define TIOCDRAIN _IO('t', 94)
#define SIOCDIFPHYADDR _IOW('i', 65, struct ifreq)
#define _POSIX_MAX_INPUT 255
#define r_vector_lower_bound(vec,x,i,cmp) do { size_t h = (vec)->len, m; for (i = 0; i < h; ) { m = i + ((h - i) >> 1); if ((cmp (x, ((char *)(vec)->a + (vec)->elem_size * m))) > 0) { i = m + 1; } else { h = m; } } } while (0)
#define ST64_MIN ((st64)(-ST64_MAX-1))
#define _STDARG_H 
#define R2_ETCDIR "/etc"
#define RColor_BGBLUE RCOLOR(ALPHA_BG, 0, 55, 218, 0x00, 0x00, 0x00, 4)
#define EXC_MASK_EMULATION (1 << EXC_EMULATION)
#define MACH_PORT_TYPE(right) ((mach_port_type_t)(((mach_port_type_t) 1) << ((right) + ((mach_port_right_t) 16))))
#define ESHUTDOWN 58
#define VM_MAX_PAGE_ADDRESS ((user_addr_t) 0x00007FFFFFE00000ULL)
#define __dead 
#define INT32_MIN (-INT32_MAX-1)
#define _SC_TIMER_MAX 52
#define THREAD_IDENTIFIER_INFO 4
#define R2_TYPES_H 
#define R2_FORTUNES R_JOIN_3_PATHS ("share", "doc", "radare2")
#define UT16_MIN 0U
#define SDB_MAX_VALUE 0xffffff
#define __enum_closed 
#define _SIZE_T_DECLARED 
#define _POSIX_THREADS 200112L
#define host_security_MSG_COUNT 2
#define _PC_NO_TRUNC 8
#define F_SETOWN 6
#define F_PREALLOCATE 42
#define TAG_OID 0x06
#define __CTYPE_H_ 
#define __INT_FAST64_MAX__ 0x7fffffffffffffffLL
#define __INT8_TYPE__ signed char
#define __WATCHOS_3_1 30100
#define __WATCHOS_3_2 30200
#define _MACH_PORT_H_ 
#define AF_DLI 13
#define UT16_ADD_OVFCHK(x,y) ((UT16_MAX - (x)) < (y))
#define VM_VOLATILE_GROUP_2 (2 << VM_VOLATILE_GROUP_SHIFT)
#define VM_MIN_ADDRESS ((vm_offset_t) 0)
#define ICMPV6CTL_ND6_ONLINKNSRFC4861 50
#define VM_VOLATILE_GROUP_0 (0 << VM_VOLATILE_GROUP_SHIFT)
#define TTYDISC 0
#define _UINTMAX_T 
#define VM_VOLATILE_GROUP_4 (4 << VM_VOLATILE_GROUP_SHIFT)
#define VM_VOLATILE_GROUP_6 (6 << VM_VOLATILE_GROUP_SHIFT)
#define VM_VOLATILE_GROUP_7 (7 << VM_VOLATILE_GROUP_SHIFT)
#define VM_VOLATILE_GROUP_3 (3 << VM_VOLATILE_GROUP_SHIFT)
#define HOST_KEXTD_PORT (8 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define EPWROFF 82
#define TCPOLEN_MAXSEG 4
#define MACH_RCV_TIMED_OUT 0x10004003
#define __GCC_ASM_FLAG_OUTPUTS__ 1
#define _MACH_I386_VM_PARAM_H_ 
#define pseudo_AF_KEY 29
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define _CS_POSIX_V6_ILP32_OFF32_CFLAGS 2
#define CLNEXT CTRL('v')
#define VALID_THREAD_STATE_FLAVOR(x) ((x == x86_THREAD_STATE32) || (x == x86_FLOAT_STATE32) || (x == x86_EXCEPTION_STATE32) || (x == x86_DEBUG_STATE32) || (x == x86_THREAD_STATE64) || (x == x86_THREAD_FULL_STATE64) || (x == x86_FLOAT_STATE64) || (x == x86_EXCEPTION_STATE64) || (x == x86_DEBUG_STATE64) || (x == x86_THREAD_STATE) || (x == x86_FLOAT_STATE) || (x == x86_EXCEPTION_STATE) || (x == x86_DEBUG_STATE) || (x == x86_AVX_STATE32) || (x == x86_AVX_STATE64) || (x == x86_AVX_STATE) || (x == x86_AVX512_STATE32) || (x == x86_AVX512_STATE64) || (x == x86_AVX512_STATE) || (x == x86_PAGEIN_STATE) || (x == x86_INSTRUCTION_STATE) || (x == x86_LAST_BRANCH_STATE) || (x == THREAD_STATE_NONE))
#define SIOCGIFMTU _IOWR('i', 51, struct ifreq)
#define MACH_SEND_INVALID_DATA 0x10000002
#define THREAD_STATE_FLAVOR_LIST_10_15 131
#define CPU_SUBTYPE_ARM_V7 ((cpu_subtype_t) 9)
#define CPU_SUBTYPE_ARM_V8 ((cpu_subtype_t) 13)
#define RColor_BGMAGENTA RCOLOR(ALPHA_BG, 136, 23, 152, 0x00, 0x00, 0x00, 5)
#define __FLT128_DECIMAL_DIG__ 36
#define PRIxMAX __PRI_MAX_LENGTH_MODIFIER__ "x"
#define _MACH_PORT_T 
#define OSWriteLittleInt(x,y,z) OSWriteLittleInt32(x, y, z)
#define VM_SYNC_KILLPAGES ((vm_sync_t) 0x08)
#define CSIZE 0x00000300
#define CLOCK_GET_TIME_RES 1
#define SERVICE_SLOT 2
#define KEV_DL_IFCAP_CHANGED 19
#define tcp6hdr tcphdr
#define F_TLOCK 2
#define OCRNL 0x00000010
#define VM_VOLATILE_GROUP_5 (5 << VM_VOLATILE_GROUP_SHIFT)
#define UNUSED_FUNCTION(x) __attribute__((__unused__)) UNUSED_ ## x
#define _CS_POSIX_V6_WIDTH_RESTRICTED_ENVS 14
#define __NDR_convert__ 0
#define B19200 19200
#define __FLT_RADIX__ 2
#define IPV6CTL_MAXID 51
#define SO_REUSEPORT 0x0200
#define _STRUCT_FP_CONTROL struct __darwin_fp_control
#define __INT_LEAST16_TYPE__ short int
#define HEAPTYPE(x) static x* x ##_new(x n) { x *m = malloc(sizeof (x)); return m? *m = n, m: m; }
#define __Request__host_security_subsystem__defined 
#define Color_BGINSERT "\x1b[48;5;22m"
#define KMOD_RETURN_SUCCESS KERN_SUCCESS
#define POLLOUT 0x0004
#define MEMORY_OBJECT_NULL ((memory_object_t) 0)
#define KERN_INVALID_KC 55
#define SCNdPTR "ld"
#define KERN_MEMORY_RESTART_COPY 25
#define r_io_map_end(map) r_itv_end (map->itv)
#define EAI_BADFLAGS 3
#define UT64_GT0 0x8000000000000000ULL
#define MACH_CORE_FILEHEADER_MAXFILES 16
#define SCNxLEAST16 SCNx16
#define _POSIX_ARG_MAX 4096
#define IPC_VOUCHER_ATTR_MANAGER_NULL ((ipc_voucher_attr_manager_t) 0)
#define R_REGEX_NOMATCH 1
#define _SC_SS_REPL_MAX 126
#define MACH_MEMORY_INFO_NAME_MAX_LEN 80
#define VM_MEMORY_OPENCL 67
#define __DARWIN_1050ALIAS(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_UNIX03)
#define IP_OLD_FW_ADD 50
#define Color_BLINK "\x1b[5m"
#define TASK_SEATBELT_PORT 7
#define VM_LEDGER_TAG_DEFAULT 0x00000001
#define KERN_UREFS_OVERFLOW 19
#define IP_FW_ZERO 43
#define MEMORY_OBJECT_COPY_DELAY 2
#define IP_RETOPTS 8
#define SIOCSIFVLAN _IOW('i', 126, struct ifreq)
#define SCNx16 "hx"
#define CLOCK_MONOTONIC_RAW _CLOCK_MONOTONIC_RAW
#define IP_DEFAULT_MULTICAST_LOOP 1
#define MSG_TRUNC 0x10
#define __QOS_CLASS_AVAILABLE(...) 
#define F_TEST 3
#define HOST_VM_INFO 2
#define _UID_T 
#define MACH_SEND_KERNEL 0x00400000
#define TCOFLUSH 2
#define RUSAGE_SELF 0
#define MIG_SERVER_ROUTINE 
#define IPV6_2292DSTOPTS 23
#define _POSIX_TIMEOUTS (-1)
#define EXCEPTION_STATE_IDENTITY 3
#define SCNx32 "x"
#define task_set_task_access_port(task,port) (task_set_special_port((task), TASK_ACCESS_PORT, (port)))
#define HOST_IO_MASTER_PORT 3
#define EOVERFLOW 84
#define PERSIST_TIMEOUT 0x40
#define sigaddset(set,signo) (*(set) |= __sigbits(signo), 0)
#define S_IRUSR 0000400
#define MACH_VOUCHER_SELECTOR_EFFECTIVE ((mach_voucher_selector_t)1)
#define SIGPIPE 13
#define MACH_VM_MIN_ADDRESS ((mach_vm_offset_t) 0)
#define BUS_ADRERR 2
#define r_io_map_begin(map) r_itv_begin (map->itv)
#define UCHAR_MAX (SCHAR_MAX * 2 + 1)
#define __SIZEOF_PTRDIFF_T__ 8
#define _WCHAR_T_H 
#define __IPHONE_4_0 40000
#define __IPHONE_4_1 40100
#define __IPHONE_4_2 40200
#define __IPHONE_4_3 40300
#define SEEK_SET 0
#define RLIMIT_CORE 4
#define __ReplyUnion__clock_priv_subsystem__defined 
#define KMOD_MAX_NAME 64
#define EAI_NODATA 7
#define MACH_SEND_INVALID_TYPE 0x1000000f
#define MPG_FLAGS_STRICT_REPLY_INVALID_REPLY_PORT (0x02ull << 56)
#define r_list_empty(x) (!(x) || !(x)->length)
#define SCNxLEAST64 SCNx64
#define RColor_WHITE RCOLOR(ALPHA_FG, 204, 204, 204, 0x00, 0x00, 0x00, 7)
#define TF_64B_DATA 0x00000002
#define SO_TIMESTAMP 0x0400
#define __DARWIN_64_BIT_INO_T 1
#define IPPROTO_SATMON 69
#define __TVOS_14_0 140000
#define __FLT32X_MANT_DIG__ 53
#define SCNx64 __SCN_64_LENGTH_MODIFIER__ "x"
#define __TVOS_14_1 140100
#define PFMTSZd "zd"
#define x86_EXCEPTION_STATE64_COUNT ((mach_msg_type_number_t) ( sizeof (x86_exception_state64_t) / sizeof (int) ))
#define PFMTSZo "zo"
#define _POSIX_IPV6 200112L
#define __TVOS_14_2 140200
#define PFMTSZu "zu"
#define PFMTSZx "zx"
#define IPV6CTL_MAXIFPREFIXES 47
#define PFMT64u "llu"
#define IP_MSFILTER 74
#define EAI_OVERFLOW 14
#define SIOCSETVLAN SIOCSIFVLAN
#define SCNoPTR "lo"
#define _GCC_LIMITS_H_ 
#define SF_NOUNLINK 0x00100000
#define IP_BLOCK_SOURCE 72
#define TASK_BASIC_INFO_64_COUNT (sizeof(task_basic_info_64_data_t) / sizeof(natural_t))
#define W_OK (1<<1)
#define _thread_act_user_ 
#define __x86_64__ 1
#define _SIZE_T_ 
#define _POSIX2_COLL_WEIGHTS_MAX 2
#define RLIMIT_RSS RLIMIT_AS
#define R_BIG_H 
#define H_LOG_(loglevel,fmt,...) r_assert_log (loglevel, fmt, __VA_ARGS__)
#define UINT_FAST32_MAX UINT32_MAX
#define __ReplyUnion__host_security_subsystem__defined 
#define O_CREAT 0x00000200
#define _SYS_SYSLIMITS_H_ 
#define MIG_TRAILER_ERROR -309
#define MACH_MSG_TIMEOUT_NONE ((mach_msg_timeout_t) 0)
#define B38400 38400
#define EPROTO 100
#define R_REGEX_NOTBOL 00001
#define ENODEV 19
#define CLOCK_ALARM_CURRES 3
#define RUNECODESTR_MAX 0xd5
#define CPU_SUBTYPE_VAX8500 ((cpu_subtype_t) 8)
#define _EXECUTE_OK (1<<11)
#define PRIdLEAST32 PRId32
#define __GNUC_STDC_INLINE__ 1
#define KEV_INET6_SUBCLASS 6
#define KERN_INVALID_LEDGER 33
#define __PTHREAD_SIZE__ 8176
#define VM_MEMORY_COREGRAPHICS_MISC VM_MEMORY_COREGRAPHICS
#define INT_MAX __INT_MAX__
#define __deprecated __attribute__((__deprecated__))
#define PERROR_WITH_FILELINE 0
#define r_calloc(x,y) calloc((x),(y))
#define IPV6_FAITH 29
#define POLL_OUT 2
#define IS_LOWER(c) ((c) >= 'a' && (c) <= 'z')
#define THREAD_FLAVOR_INSPECT 2
#define _POSIX_MONOTONIC_CLOCK (-1)
#define MPG_FLAGS_STRICT_REPLY_MASK (0xffull << 56)
#define TAG_GRAPHICSTRING 0x19
#define _SC_2_PBS_ACCOUNTING 60
#define R_BUF_H 
#define MIG_REPLY_MISMATCH -301
#define _SC_XBS5_LP64_OFF64 124
#define R_ID_STORAGE_H 
#define __UINT_FAST32_MAX__ 0xffffffffU
#define r_io_map_size(map) r_itv_size (map->itv)
#define __UINT_LEAST64_TYPE__ long long unsigned int
#define VM_SYNC_INVALIDATE ((vm_sync_t) 0x04)
#define MACH_SEND_INVALID_TRAILER 0x10000011
#define DT_REG 8
#define __API_DEPRECATED_WITH_REPLACEMENT_END 
#define FP_RND_UP 2
#define __FLT_HAS_QUIET_NAN__ 1
#define CS5 0x00000000
#define _SC_THREAD_ATTR_STACKADDR 82
#define _POSIX_TRACE_INHERIT (-1)
#define __FLT_MAX_10_EXP__ 38
#define PT_KILL 8
#define NTOHLL(x) (x) = ntohll((__uint64_t)x)
#define ONLCR 0x00000002
#define TAG_UNIVERSALSTRING 0x1C
#define _mach_port_user_ 
#define CLOCK_UPTIME_RAW_APPROX _CLOCK_UPTIME_RAW_APPROX
#define R_SYS_BITS_8 1
#define LINE_HORIZ 2
#define USE_LIB_XXHASH 0
#define VM_FLAGS_RANDOM_ADDR 0x0008
#define CPU_STATE_MAX 4
#define __FLT64X_HAS_DENORM__ 1
#define _PC_SYNC_IO 25
#define __dead2 __attribute__((__noreturn__))
#define _FILESEC_UNSET_PROPERTY ((void *)0)
#define _SC_SEM_NSEMS_MAX 49
#define __TVOS_DEPRECATED(_start,_dep,_msg) 
#define __FLT_HAS_INFINITY__ 1
#define ENODATA 96
#define SO_SNDBUF 0x1001
#define __SNBF 0x0002
#define R_NEW_COPY(x,y) x=(void*)malloc(sizeof(y));memcpy(x,y,sizeof(y))
#define _CS_XBS5_ILP32_OFF32_LIBS 22
#define HOST_VM_INFO64_REV0_COUNT ((mach_msg_type_number_t) (HOST_VM_INFO64_REV1_COUNT - 14))
#define __WCTYPE_H_ 
#define SDB_API __attribute__ ((visibility ("default")))
#define S_IFSOCK 0140000
#define MEMORY_OBJECT_RETURN_ANYTHING 3
#define _I386_LIMITS_H_ 
#define R_NEWS0(x,y) (x*)calloc(y,sizeof(x))
#define _BSD_PTRDIFF_T_ 
#define ASCTIME_BUF_MINLEN (26)
#define PRIXPTR "lX"
#define OSSwapHostToBigInt32(x) OSSwapInt32(x)
#define RColor_BBLACK RCOLOR(ALPHA_FG, 118, 118, 118, 0x00, 0x00, 0x00, 8)
#define MACH_MSG_TYPE_MOVE_SEND_ONCE 18
#define SIGXFSZ 25
#define MCAST_JOIN_SOURCE_GROUP 82
#define O_FSYNC O_SYNC
#define MACH_VOUCHER_ATTR_KEY_BANK ((mach_voucher_attr_key_t)3)
#define F_PATHPKG_CHECK 52
#define SIGHUP 1
#define __exported_pop _Pragma("GCC visibility pop")
#define ls_foreach_prev(list,it,pos) if ((list)) for (it = list->tail; it && (pos = it->data); it = it->p)
#define F_VOLPOSMODE 4
#define MACH_MSG_SUCCESS 0x00000000
#define B0110 6
#define VM_PURGABLE_NO_AGING_MASK (0x1 << VM_PURGABLE_NO_AGING_SHIFT)
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
#define __FLT64X_MAX_EXP__ 16384
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_3(x) 
#define _POSIX_SEM_NSEMS_MAX 256
#define SCNuPTR "lu"
#define E2BIG 7
#define sdb_aforeach_next(x) if (!next) break; *(next-1) = ','; x = next; } }
#define BIG_ENDIAN __DARWIN_BIG_ENDIAN
#define CPU_SUBTYPE_MC88100 ((cpu_subtype_t) 1)
#define OSReadBigInt(x,y) OSReadBigInt32(x, y)
#define __PTHREAD_COND_SIZE__ 40
#define r_list_iterator(x) (x)? (x)->head: NULL
#define O_ASYNC 0x00000040
#define CFLUSH CDISCARD
#define ECHOPRT 0x00000020
#define EXC_MASK_MACH_SYSCALL (1 << EXC_MACH_SYSCALL)
#define R_LIB_VERSION(x) R_API const char *x ##_version(void) { return "" R2_GITTAP; }
#define INT_MIN (-INT_MAX - 1)
#define KERN_INVALID_TASK 16
#define _STRUCT_FP_STATUS struct __darwin_fp_status
#define IPV6CTL_DEFMCASTHLIM 18
#define round_page(x) trunc_page((x) + (vm_page_size - 1))
#define TCP_SENDMOREACKS 0x103
#define AF_SIP 24
#define B200 200
#define AF_NDRV 27
#define _CS_XBS5_ILP32_OFF32_LDFLAGS 21
#define MACH_MSGH_BITS_HAS_LOCAL(bits) (MACH_MSGH_BITS_LOCAL(bits) != MACH_MSGH_BITS_ZERO)
#define __UINT_LEAST32_MAX__ 0xffffffffU
#define IN6_IS_ADDR_MC_NODELOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && (__IPV6_ADDR_MC_SCOPE(a) == __IPV6_ADDR_SCOPE_NODELOCAL))
#define _STRUCT_MCONTEXT32 struct __darwin_mcontext32
#define CPU_SUBTYPE_MIPS_R2600 ((cpu_subtype_t) 2)
#define FPC_IC 0x1000
#define _PC_REC_XFER_ALIGN 23
#define HOST_NOT_FOUND 1
#define POLLHUP 0x0010
#define RColor_BCYAN RCOLOR(ALPHA_FG, 97, 214, 214, 0x00, 0x00, 0x00, 14)
#define _MACH_EXCEPTION_TYPES_H_ 
#define CLOCK_NULL ((clock_t) 0)
#define R_REGEX_EBRACE 9
#define F_SETSIZE 43
#define R_REGEX_EBRACK 7
#define R_BASE91_H 
#define _SC_MEMORY_PROTECTION 32
#define EXC_I386_EXTERRFLT 16
#define IN_CLASSB_NET 0xffff0000
#define R_REGEX_TRACE 00400
#define VM_INHERIT_DONATE_COPY ((vm_inherit_t) 3)
#define IP_DUMMYNET_CONFIGURE 60
#define x86_AVX512_STATE32_COUNT ((mach_msg_type_number_t) (sizeof(x86_avx512_state32_t)/sizeof(unsigned int)))
#define MACH_MSG_OOL_VOLATILE_DESCRIPTOR 3
#define TF_LP64 0x00000001
#define ICMP6_FILTER 18
#define B57600 57600
#define HOST_EXTMOD_INFO64_COUNT ((mach_msg_type_number_t) (sizeof(vm_extmod_statistics_data_t)/sizeof(integer_t)))
#define MACH_PORT_STATUS_FLAG_STRICT_GUARD 0x04
#define __INT_LEAST8_TYPE__ signed char
#define MSG_OOB 0x1
#define OSSwapConstInt16(x) __DARWIN_OSSwapConstInt16(x)
#define __darwin_obsz0(object) __builtin_object_size (object, 0)
#define R_BIG_SPRINTF_FORMAT_STR "%.08x"
#define _MACH_VM_BEHAVIOR_H_ 
#define VM_MEMORY_OBJC_DISPATCHERS 34
#define PF_NETBIOS AF_NETBIOS
#define R_MALLOC_GLOBAL 0
#define UT32_ADD_OVFCHK(x,y) ((UT32_MAX - (x)) < (y))
#define SYNC_VOLUME_WAIT 0x02
#define SO_PEERLABEL 0x1011
#define OSSwapInt32(x) __DARWIN_OSSwapInt32(x)
#define SO_DEBUG 0x0001
#define SEEK_HOLE 3
#define _MACH_KMOD_H_ 
#define VM_MEMORY_GLSL 66
#define POLICY_FIFO_INFO_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_fifo_info)/sizeof(integer_t)))
#define UINTMAX_C(v) (v ## UL)
#define X86_LAST_BRANCH_STATE_COUNT x86_LAST_BRANCH_STATE_COUNT
#define EFL_IOPL 0x00003000
#define x86_AVX512_STATE64_COUNT ((mach_msg_type_number_t) (sizeof(x86_avx512_state64_t)/sizeof(unsigned int)))
#define KERN_MEMORY_FAILURE 9
#define R_SOCKET_PROTO_UDP IPPROTO_UDP
#define CPUFAMILY_INTEL_IVYBRIDGE 0x1f65e835
#define MACH_SEND_MSG 0x00000001
#define IPV6_2292RTHDR 24
#define _RUNETYPE_H_ 
#define ECONNRESET 54
#define TAG_OCTETSTRING 0x04
#define _SYS_STDIO_H_ 
#define DST_MET 4
#define MEMORY_OBJECT_BEHAVE_INFO_COUNT ((mach_msg_type_number_t) (sizeof(memory_object_behave_info_data_t)/sizeof(int)))
#define EBADMACHO 88
#define X86_INSTRUCTION_STATE_COUNT x86_INSTRUCTION_STATE_COUNT
#define IPV6_ADDR_MC_FLAGS_PREFIX 0x20
#define AF_SNA 11
#define R_CONS_CMD_DEPTH 100
#define FUNC_ATTR_CONST __attribute__((const))
#define HAVE_GPERF 1
#define SIGSTOP 17
#define MACH_PORT_SRIGHTS_NONE 0
#define __TVOS_13_3 130300
#define IOPOL_NORMAL IOPOL_IMPORTANT
#define ENXIO 6
#define __TVOS_13_4 130400
#define COALITION_NULL ((coalition_t) 0)
#define _SC_THREAD_CPUTIME 84
#define TIOCPKT_FLUSHREAD 0x01
#define _PC_EXTENDED_SECURITY_NP 13
#define SCNuFAST16 SCNu16
#define CLOCK_MONOTONIC _CLOCK_MONOTONIC
#define R_STR_ISEMPTY(x) (!(x) || !*(x))
#define __STDIO_H_ 
#define HOST_LOAD_INFO 1
#define NET_SERVICE_TYPE_OAM 7
#define x86_AVX_STATE32_COUNT ((mach_msg_type_number_t) (sizeof(x86_avx_state32_t)/sizeof(unsigned int)))
#define VM_MEMORY_LAYERKIT 51
#define __FLT64_HAS_QUIET_NAN__ 1
#define _SECURE__STDIO_H_ 
#define WNOWAIT 0x00000020
#define VM_MAX_USER_PAGE_ADDRESS ((user_addr_t)0x00007FFFFFFFF000ULL)
#define IOCBASECMD(x) ((x) & ~(IOCPARM_MASK << 16))
#define RColor_BBGWHITE RCOLOR(ALPHA_BG, 242, 242, 242, 0x00, 0x00, 0x00, 15)
#define SZT_MAX UT64_MAX
#define subsystem_to_name_map_lock_set { "lock_acquire", 617000 }, { "lock_release", 617001 }, { "lock_try", 617002 }, { "lock_make_stable", 617003 }, { "lock_handoff", 617004 }, { "lock_handoff_accept", 617005 }
#define R_RANGE_H 
#define R_LIB_EXT "dylib"
#define _MACH_MACHINE_THREAD_STATE_H_ 
#define L_XTND SEEK_END
#define SCNuFAST32 SCNu32
#define PRIdFAST16 PRId16
#define RLIMIT_FOOTPRINT_INTERVAL 0x4
#define RColor_BBGRED RCOLOR(ALPHA_BG, 231, 72, 86, 0x00, 0x00, 0x00, 9)
#define OSSwapHostToBigInt(x) OSSwapHostToBigInt32(x)
#define INET6_ADDRSTRLEN 46
#define R_SKYLINE_H 
#define ___POSIX_C_DEPRECATED_STARTING_199209L 
#define KEV_DL_LINK_OFF 12
#define MACH_RCV_TIMEOUT 0x00000100
#define IPV6CTL_ACCEPT_RTADV 12
#define UIOCCMD(n) _IO('u', n)
#define O_ALERT 0x20000000
#define TAG_REAL 0x09
#define __Reply__clock_priv_subsystem__defined 
#define KEV_DL_IF_DETACHED 11
#define POLLWRNORM POLLOUT
#define SM_SHARED 4
#define VM_FLAGS_RESILIENT_MEDIA 0x0040
#define RColor_GRAY RColor_BBLACK
#define _POSIX2_PBS_LOCATE (-1)
#define TCPCI_OPT_ECN 0x00000008
#define KERN_ABORTED 14
#define RColor_BWHITE RCOLOR(ALPHA_FG, 242, 242, 242, 0x00, 0x00, 0x00, 15)
#define TASK_KERNELMEMORY_INFO_COUNT ((mach_msg_type_number_t) (sizeof (task_kernelmemory_info_data_t) / sizeof (natural_t)))
#define __BEGIN_DECLS 
#define __LDBL_MANT_DIG__ 64
#define TASK_FLAVOR_CONTROL 0
#define IPPORT_HILASTAUTO 65535
#define r_ref(x) x->R_REF_NAME++;
#define Color_INVERT "\x1b[7m"
#define HOST_MAX_SPECIAL_KERNEL_PORT 7
#define _MACH_MACHINE_EXCEPTION_H_ 
#define __PTHREAD_ATTR_SIZE__ 56
#define FPC_IE 0x0001
#define __exported_push _Pragma("GCC visibility push(default)")
#define HOST_AUTOMOUNTD_PORT (4 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define MACH_PORT_QLIMIT_DEFAULT MACH_PORT_QLIMIT_BASIC
#define MACH_SEND_SYNC_USE_THRPRI MACH_SEND_PROPAGATE_QOS
#define S_ISTXT S_ISVTX
#define F_GETCODEDIR 72
#define __SIGN 0x8000
#define __FLT64_HAS_INFINITY__ 1
#define host_get_closured_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_CLOSURED_PORT, (port)))
#define HAVE_PTRACE 1
#define false 0
#define IPV6_JOIN_GROUP 12
#define POLL_HUP 6
#define __ReplyUnion__vm_map_subsystem__defined 
#define VM_MEMORY_MALLOC_LARGE_REUSED 9
#define R_REGEX_ESPACE 12
#define RColor_BBGBLUE RCOLOR(ALPHA_BG, 59, 120, 255, 0x00, 0x00, 0x00, 12)
#define __GNUC_VA_LIST 
#define MACH_PORT_TEMPOWNER 4
#define RLIMIT_NOFILE 8
#define WSTOPPED 0x00000008
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_3(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_4(x) x
#define _STRUCT_X86_PAGEIN_STATE struct __x86_pagein_state
#define __OSX_EXTENSION_UNAVAILABLE(_msg) 
#define _XOPEN_REALTIME (-1)
#define KEV_DL_SIFGENERIC 6
#define assert(e) (__builtin_expect(!(e), 0) ? __assert_rtn(__func__, __FILE__, __LINE__, #e) : (void)0)
#define THREAD_MAX_SPECIAL_PORT THREAD_READ_PORT
#define B76800 76800
#define SIOCSIFMAC _IOW('i', 131, struct ifreq)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_3(x) 
#define SIOCGIFVLAN _IOWR('i', 127, struct ifreq)
#define MACH_VOUCHER_ATTR_AUTO_REDEEM ((mach_voucher_attr_recipe_command_t)4)
#define SM_LARGE_PAGE 8
#define OS_INLINE static inline
#define MACH_NOTIFY_LAST (MACH_NOTIFY_FIRST + 015)
#define WCOREDUMP(x) (_W_INT(x) & WCOREFLAG)
#define __DARWIN_OSSwapInt32(x) (__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt32(x) : _OSSwapInt32(x))
#define PRIuFAST32 PRIu32
#define IPPROTO_RAW 255
#define RUNE_LINE_HORIZ "─"
#define __k8__ 1
#define __UINT16_TYPE__ short unsigned int
#define TASK_POWER_INFO 21
#define MACH_RCV_HEADER_ERROR 0x1000400b
#define _SYS__PTHREAD_TYPES_H_ 
#define _CTYPE_C 0x00000200L
#define PRIiPTR "li"
#define R_SOCKET_PROTO_UNIX 0x1337
#define SIGNED_DIV_OVERFLOW_CHECK(overflow_name,type_base,type_mid,type_max) static inline bool overflow_name(type_base a, type_base b) { return (!b || (a == type_mid && b == type_max)); }
#define FALSE 0
#define SZT_MIN UT64_MIN
#define _POSIX_MEMLOCK_RANGE (-1)
#define VM_MEMORY_CM_MEMORYPOOL 94
#define __LP64__ 1
#define MAP_MEM_LEDGER_TAGGED 0x002000
#define IPPROTO_ICMP 1
#define S_IEXEC S_IXUSR
#define R_PANELS_H 
#define __API_DEPRECATED_END 
#define thread_set_kernel_port(thread,port) (thread_set_special_port((thread), THREAD_KERNEL_PORT, (port)))
#define IPV6CTL_PREFER_TEMPADDR 37
#define EXC_I386_INTOFLT 4
#define KEV_INET6_NEW_RTADV_ADDR 5
#define TAG_EXTERNAL 0x08
#define R_SYS_ENDIAN_BIG 2
#define __DARWIN_1050ALIAS_I(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_64_BIT_INO_T __DARWIN_SUF_UNIX03)
#define __UINTPTR_MAX__ 0xffffffffffffffffUL
#define RFList void**
#define host_set_automountd_port(host,port) (host_set_special_port((host), HOST_AUTOMOUNTD_PORT, (port)))
#define PROCESSOR_SET_BASIC_INFO 5
#define _POSIX_MQ_OPEN_MAX 8
#define __INT_FAST64_WIDTH__ 64
#define __volatile volatile
#define R_UTF16_H 
#define FPC_OE 0x0008
#define MAX_TCPOPTLEN 40
#define MACH_MSGH_BITS_SET_PORTS(remote,local,voucher) (((remote) & MACH_MSGH_BITS_REMOTE_MASK) | (((local) << 8) & MACH_MSGH_BITS_LOCAL_MASK) | (((voucher) << 16) & MACH_MSGH_BITS_VOUCHER_MASK))
#define FPC_OM FPC_OE
#define SIGALRM 14
#define SLIPDISC 4
#define IPPROTO_RDP 27
#define _SC_CLOCK_SELECTION 67
#define OSSwapHostToBigInt16(x) OSSwapInt16(x)
#define __MAC_10_12_1 101201
#define PRIO_DARWIN_NONUI 0x1001
#define __LDBL_MAX_EXP__ 16384
#define __MAC_10_12_4 101204
#define _CLOCK_T 
#define IOPOL_VFS_SKIP_MTIME_UPDATE_OFF 0
#define IPPROTO_CHAOS 16
#define KEV_INET_SIFDSTADDR 4
#define IN_CLASSD_NSHIFT 28
#define EADDRNOTAVAIL 49
#define ETIME 101
#define IPPROTO_RCCMON 10
#define Color_BMAGENTA "\x1b[95m"
#define AF_DATAKIT 9
#define VM_MEMORY_REALLOC 6
#define RColor_BGREEN RCOLOR(ALPHA_FG, 22, 198, 12, 0x00, 0x00, 0x00, 10)
#define _MACH_NOTIFY_H_ 
#define VM_MEMORY_ROSETTA_THREAD_CONTEXT 231
#define __FLT_DIG__ 6
#define MACH_MSG_GUARDED_PORT_DESCRIPTOR 4
#define _SC_RTSIG_MAX 48
#define __FLT_NORM_MAX__ 3.40282346638528859811704183484516925e+38F
#define HOST_FILECOORDINATIOND_PORT (23 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define KEV_INET6_NEW_USER_ADDR 1
#define INT_FAST32_MAX INT32_MAX
#define IPV6CTL_RTMINEXPIRE 26
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_2(x) 
#define HOST_LOCAL_NODE -1
#define R_PTR_MOVE(d,s) d=s;s=NULL;
#define r_offsetof(type,member) offsetof(type, member)
#define __UINT_FAST64_TYPE__ long long unsigned int
#define _OS__OSBYTEORDER_H 
#define IP_FW_DEL 41
#define EBADRPC 72
#define R_STRBUF_H 
#define EXC_BAD_ACCESS 1
#define FPC_RC 0x0c00
#define __BSD__ 0
#define TIOCFLUSH _IOW('t', 16, int)
#define _STRUCT_MCONTEXT_AVX512_32 struct __darwin_mcontext_avx512_32
#define STDIN_FILENO 0
#define __DARWIN_STRUCT_STAT64_TIMES struct timespec st_atimespec; struct timespec st_mtimespec; struct timespec st_ctimespec; struct timespec st_birthtimespec;
#define UINT_FAST8_MAX UINT8_MAX
#define VM_MEMORY_AUDIO 90
#define VM_MEMORY_MALLOC_SMALL 2
#define __INT_MAX__ 0x7fffffff
#define S_IXUSR 0000100
#define MACH_SEND_INVALID_DEST 0x10000003
#define KERNEL_SECURITY_TOKEN_VALUE { {0, 1} }
#define F_GETFD 1
#define _CT_RUNE_T 
#define PPNUM_MAX UINT32_MAX
#define VM_MEMORY_COREGRAPHICS_XALLOC 58
#define UINT8_MAX 255
#define HUPCL 0x00004000
#define VM_MEMORY_CGIMAGE 52
#define CONS_MAX_USER 102400
#define IPV6CTL_MAXIFDEFROUTERS 48
#define Color_BRED "\x1b[91m"
#define TCP_MAX_WINSHIFT 14
#define HOST_SECURITY_PORT 0
#define R2_HOME_HUD R_JOIN_2_PATHS (R2_HOME_DATADIR, "hud")
#define _POSIX_CLOCKRES_MIN 20000000
#define Color_INVERT_RESET "\x1b[27m"
#define host_get_iocompressionstats_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_IOCOMPRESSIONSTATS_PORT, (port)))
#define _T_SIZE_ 
#define R2_SDB R_JOIN_3_PATHS ("share", "radare2", R2_VERSION)
#define R_TIME_PROFILE_ENABLED 0
#define MACH_RCV_SYNC_WAIT 0x00004000
#define LLONG_MAX __LONG_LONG_MAX__
#define PF_CNT AF_CNT
#define ENOTRECOVERABLE 104
#define r_rbtree_iter_get(it,struc,rb) (container_of ((it)->path[(it)->len-1], struc, rb))
#define R_LOG_INFO(fmtstr,...) r_log (MACRO_LOG_FUNC, __FILE__, __LINE__, R_LOGLVL_INFO, NULL, fmtstr, ##__VA_ARGS__);
#define __TVOS_12_4 120400
#define HAVE_EXPLICIT_BZERO 0
#define MACH_MSG_IPC_SPACE 0x00002000
#define VM_MEMORY_ACCOUNTS 98
#define TAG_EMBEDDED_PDV 0x0B
#define _STRUCT_MCONTEXT_AVX512_64 struct __darwin_mcontext_avx512_64
#define TIOCPTYUNLK _IO('t', 82)
#define stpcpy(dest,...) __builtin___stpcpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define __INT64_TYPE__ long long int
#define TCIOFF 3
#define EIO 5
#define SIOCGIFNETMASK _IOWR('i', 37, struct ifreq)
#define R_MAX(x,y) (((x)>(y))?(x):(y))
#define CLOCK_PROCESS_CPUTIME_ID _CLOCK_PROCESS_CPUTIME_ID
#define TASK_VM_INFO 22
#define round_page_kernel(x) trunc_page_kernel((x) + vm_kernel_page_mask)
#define _SC_AIO_PRIO_DELTA_MAX 44
#define ENETUNREACH 51
#define EXDEV 18
#define r_io_map_contain(map,addr) r_itv_contain (map->itv, addr)
#define _SC_ADVISORY_INFO 65
#define IPV6PORT_ANONMAX 65535
#define PRIxPTR "lx"
#define UINT32_C(v) (v ## U)
#define CPU_SUBTYPE_CELERON_MOBILE CPU_SUBTYPE_INTEL(7, 7)
#define _POSIX_SYMLINK_MAX 255
#define TIOCPKT _IOW('t', 112, int)
#define _task_user_ 
#define TTYDEF_LFLAG (ECHO | ICANON | ISIG | IEXTEN | ECHOE|ECHOKE|ECHOCTL)
#define __DBL_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define VM_USRSTACK32 ((vm_offset_t) 0xC0000000)
#define PFMT64d "lld"
#define MACH_PORT_DNREQUESTS_SIZE 3
#define CPUFAMILY_INTEL_NEHALEM 0x6b5a4cd2
#define _POSIX_V6_ILP32_OFF32 __ILP32_OFF32
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define host_set_iocompressionstats_port(host,port) (host_set_special_port((host), HOST_IOCOMPRESSIONSTATS_PORT, (port)))
#define OSSwapInt64(x) __DARWIN_OSSwapInt64(x)
#define _POSIX_TRACE (-1)
#define MACH_MSG_DESCRIPTOR_NULL (mach_msg_descriptor_t *) 0
#define CLASS_APPLICATION 0x40
#define INT_FAST32_MIN INT32_MIN
#define __WINT_TYPE__ int
#define EDQUOT 69
#define STDOUT_FILENO 1
#define PT_SIGEXC 12
#define SEM_VALUE_MAX 32767
#define HOST_UNFREED_PORT (10 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define CPU_SUBTYPE_I860_860 ((cpu_subtype_t) 1)
#define IPCTL_RTMAXCACHE 7
#define VM_MEMORY_ROSETTA_INDIRECT_BRANCH_MAP 232
#define MACH_VOUCHER_ATTR_KEY_NONE ((mach_voucher_attr_key_t)0)
#define TYPES_H 
#define R_REF_TYPE RRef R_REF_NAME
#define _STRUCT_X86_AVX512_STATE64 struct __darwin_x86_avx512_state64
#define FPC_ZE 0x0004
#define TABLDISC 3
#define AF_HYLINK 15
#define FPC_ZM FPC_ZE
#define VM_PAGE_QUERY_PAGE_REUSABLE 0x800
#define IP_RECVDSTADDR 7
#define _CADDR_T 
#define CPF_OVERWRITE 0x0001
#define HOST_SEMAPHORE_TRAPS 7
#define EXC_MASK_ALL (EXC_MASK_BAD_ACCESS | EXC_MASK_BAD_INSTRUCTION | EXC_MASK_ARITHMETIC | EXC_MASK_EMULATION | EXC_MASK_SOFTWARE | EXC_MASK_BREAKPOINT | EXC_MASK_SYSCALL | EXC_MASK_MACH_SYSCALL | EXC_MASK_RPC_ALERT | EXC_MASK_RESOURCE | EXC_MASK_GUARD | EXC_MASK_MACHINE)
#define BC_DIM_MAX 2048
#define __KAME__ 
#define ASCII_MAX 127
#define __DARWIN_C_FULL 900000L
#define FOOTPRINT_INTERVAL_RESET 0x1
#define RUNECODESTR_ARROW_RIGHT "\xcc"
#define EXC_I386_BOUND 7
#define B_TOGGLE(x,n) ((x) ^= (1ULL << (n)))
#define ENOSPC 28
#define EPROCUNAVAIL 76
#define _MACH_DYLIB_INFO_H_ 
#define IPCTL_ACCEPTSOURCEROUTE 13
#define ENOEXEC 8
#define CONS_COLORS_SIZE 21
#define FPE_NOOP 0
#define ULLONG_MAX (LLONG_MAX * 2ULL + 1ULL)
#define R_IFNULL(x) 
#define TASK_VM_INFO_REV4_COUNT ((mach_msg_type_number_t) (TASK_VM_INFO_REV5_COUNT - 1))
#define _POSIX_THREAD_PRIO_INHERIT (-1)
#define IN6ADDR_LINKLOCAL_ALLNODES_INIT {{{ 0xff, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01 }}}
#define B0 0
#define B4(a,b,c,d) ((a<<12)|(b<<8)|(c<<4)|(d))
#define SO_RCVBUF 0x1002
#define _POSIX2_PBS_MESSAGE (-1)
#define LLONG_MIN (-LLONG_MAX - 1LL)
#define host_set_lockd_port(host,port) (host_set_special_port((host), HOST_LOCKD_PORT, (port)))
#define FIOCLEX _IO('f', 1)
#define MACH_PORT_RIGHT_RECEIVE ((mach_port_right_t) 1)
#define _MACH_MACHINE__STRUCTS_H_ 
#define CPU_SUBTYPE_POWERPC_604e ((cpu_subtype_t) 7)
#define PF_RTIP pseudo_AF_RTIP
#define ASN1_TAG 0x1F
#define R_NAME_H 
#define SV_ONSTACK SA_ONSTACK
#define FPS_TOS 0x3800
#define __SIZEOF_INT128__ 16
#define VM_MEMORY_CM_XPC 92
#define __ReplyUnion__mach_port_subsystem__defined 
#define MACRO_LOG_FUNC __func__
#define NDR_FLOAT_IEEE 0
#define _MACH_MACH_TRAPS_H_ 
#define _MACH_CLOCK_TYPES_H_ 
#define IPC_VOUCHER_NULL ((ipc_voucher_t) 0)
#define F_GETLKPID 66
#define TCP_MAXWIN 65535
#define __LDBL_MAX_10_EXP__ 4932
#define _POSIX_SEMAPHORES (-1)
#define __ATOMIC_RELAXED 0
#define AI_ALL 0x00000100
#define RLIMIT_FSIZE 1
#define VM_MEMORY_MALLOC_NANO 11
#define CRDLY 0x00003000
#define __DBL_EPSILON__ ((double)2.22044604925031308084726333618164062e-16L)
#define LDBLFMT "Lf"
#define buffer_GETC(s,c) ( ((s)->p > 0) ? ( *(c) = (s)->x[(s)->n], buffer_SEEK((s),1), 1 ) : buffer_get((s),(c),1) )
#define PTHREAD_PROCESS_PRIVATE 2
#define MAP_MEM_FLAGS_USER ( MAP_MEM_PURGABLE_KERNEL_ONLY | MAP_MEM_GRAB_SECLUDED | MAP_MEM_ONLY | MAP_MEM_NAMED_CREATE | MAP_MEM_PURGABLE | MAP_MEM_NAMED_REUSE | MAP_MEM_USE_DATA_ADDR | MAP_MEM_VM_COPY | MAP_MEM_VM_SHARE | MAP_MEM_LEDGER_TAGGED | MAP_MEM_4K_DATA_ADDR)
#define IPV6PORT_ANONMIN 49152
#define EFTYPE 79
#define boolt int
#define PTHREAD_DESTRUCTOR_ITERATIONS 4
#define BC_SCALE_MAX 99
#define EDOM 33
#define IOPOL_SCOPE_THREAD 1
#define _PTHREAD_ATTR_T 
#define _SYS__SELECT_H_ 
#define _MACH_THREAD_STATUS_H_ 
#define ENOSTR 99
#define MACH_MSG_TYPE_LAST 22
#define KERN_RPC_SERVER_TERMINATED 43
#define KERN_POLICY_LIMIT 27
#define x86_FLOAT_STATE 8
#define x86_THREAD_STATE32 1
#define IN6_IS_ADDR_MC_ORGLOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && (__IPV6_ADDR_MC_SCOPE(a) == __IPV6_ADDR_SCOPE_ORGLOCAL))
#define VM_PURGABLE_NO_AGING_SHIFT 16
#define FUNC_ATTR_ALLOC_ALIGN(x) __attribute__((alloc_align(x)))
#define CMSG_SPACE(l) (__DARWIN_ALIGN32(sizeof(struct cmsghdr)) + __DARWIN_ALIGN32(l))
#define CORNER_TL 6
#define __API_AVAILABLE(...) 
#define r_rbtree_foreach_prev(root,it,data,struc,rb) for ((it) = r_rbtree_last (root); r_rbtree_iter_has(&it) && (data = r_rbtree_iter_get (&it, struc, rb)); r_rbtree_iter_prev (&(it)))
#define x86_FLOAT_STATE_COUNT ((mach_msg_type_number_t) (sizeof(x86_float_state_t)/sizeof(unsigned int)))
#define _INT8_T 
#define SIGKILL 9
#define FREAD 0x00000001
#define FS "/"
#define ESRCH 3
#define RUNECODESTR_CORNER_TL "\xcf"
#define IPV6_FW_GET 34
#define __INT_LEAST32_TYPE__ int
#define CWERASE CTRL('w')
#define EHOSTDOWN 64
#define MAP_MEM_PURGABLE_KERNEL_ONLY 0x004000
#define MACH_NOTIFY_NO_SENDERS (MACH_NOTIFY_FIRST + 006)
#define IN6_IS_ADDR_6TO4(x) (ntohs((x)->s6_addr16[0]) == 0x2002)
#define __wchar_t__ 
#define SIOCIFDESTROY _IOW('i', 121, struct ifreq)
#define VM_MEMORY_DYLD_MALLOC 61
#define BAD_ALRMTYPE(t) (((t) &~ TIME_RELATIVE) != 0)
#define SIOCGIFCONF _IOWR('i', 36, struct ifconf)
#define SEEK_END 2
#define __SIZEOF_WCHAR_T__ 4
#define THREAD_MACHINE_STATE_MAX THREAD_STATE_MAX
#define _POSIX2_LINE_MAX 2048
#define r_skiplist_foreach(list,it,pos) if (list) for (it = list->head->forward[0]; it != list->head && ((pos = it->data) || 1); it = it->forward[0])
#define __GNUC_PATCHLEVEL__ 0
#define __DARWIN_1050(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050)
#define S_IWOTH 0000002
#define EXC_MASK_BAD_ACCESS (1 << EXC_BAD_ACCESS)
#define VM_PROT_IS_MASK ((vm_prot_t) 0x40)
#define SCNiFAST16 SCNi16
#define MACH_MSGH_BITS_PORTS(bits) ((bits) & MACH_MSGH_BITS_PORTS_MASK)
#define ENOLCK 77
#define ENFILE 23
#define THREAD_STATE_FLAVOR_LIST_10_9 129
#define TASK_ABSOLUTETIME_INFO 1
#define ASCII_MIN 32
#define R2_HOME_PROJECTS R_JOIN_2_PATHS (R2_HOME_DATADIR, "projects")
#define r_sys_breakpoint() __builtin_trap()
#define _UUID_T 
#define MSG_DONTWAIT 0x80
#define x86_THREAD_STATE64 4
#define R_IN 
#define REQUESTED_TRAILER_SIZE_NATIVE(y) ((mach_msg_trailer_size_t) ((GET_RCV_ELEMENTS(y) == MACH_RCV_TRAILER_NULL) ? sizeof(mach_msg_trailer_t) : ((GET_RCV_ELEMENTS(y) == MACH_RCV_TRAILER_SEQNO) ? sizeof(mach_msg_seqno_trailer_t) : ((GET_RCV_ELEMENTS(y) == MACH_RCV_TRAILER_SENDER) ? sizeof(mach_msg_security_trailer_t) : ((GET_RCV_ELEMENTS(y) == MACH_RCV_TRAILER_AUDIT) ? sizeof(mach_msg_audit_trailer_t) : ((GET_RCV_ELEMENTS(y) == MACH_RCV_TRAILER_CTX) ? sizeof(mach_msg_context_trailer_t) : ((GET_RCV_ELEMENTS(y) == MACH_RCV_TRAILER_AV) ? sizeof(mach_msg_mac_trailer_t) : sizeof(mach_msg_max_trailer_t))))))))
#define USER_CODE_SELECTOR 0x0017
#define __DARWIN_OSSwapConstInt16(x) ((__uint16_t)((((__uint16_t)(x) & 0xff00U) >> 8) | (((__uint16_t)(x) & 0x00ffU) << 8)))
#define HOST_AMFID_PORT (11 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define POLICY_FIFO 4
#define __DYLDDL_DRIVERKIT_UNAVAILABLE __API_UNAVAILABLE(driverkit)
#define MATTR_VAL_DCACHE_FLUSH 7
#define TASK_POLICY_STATE 4
#define UT32_LT0 0x7FFFFFFFU
#define MACH_RCV_IN_PROGRESS 0x10004001
#define _STDDEF_H_ 
#define VM_MEMORY_JAVA 44
#define _XOPEN_UNIX (1)
#define KERN_ALREADY_WAITING 30
#define B4800 4800
#define SIOCGIFSTATUS _IOWR('i', 61, struct ifstat)
#define KERN_SEMAPHORE_DESTROYED 42
#define R_REGEX_LARGE 01000
#define ENOSYS 78
#define MACH_VOUCHER_ATTR_KEY_ATM ((mach_voucher_attr_key_t)1)
#define _SC_LOGIN_NAME_MAX 73
#define ECANCELED 89
#define _STRUCT_MCONTEXT_AVX64_FULL struct __darwin_mcontext_avx64_full
#define CPU_TYPE_X86 ((cpu_type_t) 7)
#define B10000 16
#define B10001 17
#define AI_PASSIVE 0x00000001
#define DT_DIR 4
#define __DARWIN_OSSwapConstInt32(x) ((__uint32_t)((((__uint32_t)(x) & 0xff000000U) >> 24) | (((__uint32_t)(x) & 0x00ff0000U) >> 8) | (((__uint32_t)(x) & 0x0000ff00U) << 8) | (((__uint32_t)(x) & 0x000000ffU) << 24)))
#define MACH_MSGH_BITS_USER 0x801f1f1fU
#define MACH_RCV_VOUCHER 0x00000800
#define __INT_FAST8_TYPE__ signed char
#define host_set_fairplayd_port(host,port) (host_set_special_port((host), HOST_FAIRPLAYD_PORT, (port)))
#define _STRUCT_X86_AVX512_STATE32 struct __darwin_i386_avx512_state
#define bcopy(src,dest,...) __builtin___memmove_chk (dest, src, __VA_ARGS__, __darwin_obsz0 (dest))
#define _SC_TIMERS 41
#define LIBC_HAVE_SYSTEM 1
#define MACH_RCV_INVALID_TYPE 0x1000400d
#define UT64_8U 0xFFFFFFFFFFFFFF00ULL
#define TIOCM_LE 0001
#define S_IWRITE S_IWUSR
#define DIRBLKSIZ 1024
#define CCAR_OFLOW 0x00100000
#define _MACH_TASK_SPECIAL_PORTS_H_ 
#define __DEQUALIFY(type,var) __CAST_AWAY_QUALIFIER(var, const volatile, type)
#define va_arg(v,l) __builtin_va_arg(v,l)
#define MCAST_UNDEFINED 0
#define VM_MEMORY_TCMALLOC 53
#define AT_REMOVEDIR 0x0080
#define SCNiFAST64 SCNi64
#define MACH_SEND_INVALID_RT_OOL_SIZE 0x10000015
#define WAIT_ANY (-1)
#define _SC_2_CHAR_TERM 20
#define RColor_BBLUE RCOLOR(ALPHA_FG, 59, 120, 255, 0x00, 0x00, 0x00, 12)
#define SCNxMAX __SCN_MAX_LENGTH_MODIFIER__ "x"
#define SCNo8 __PRI_8_LENGTH_MODIFIER__ "o"
#define VM_MIN_ADDRESS64 ((user_addr_t) 0x0000000000000000ULL)
#define _SYS_TYPES_H_ 
#define TIOCOUTQ _IOR('t', 115, int)
#define RUSAGE_INFO_V0 0
#define RUSAGE_INFO_V1 1
#define RUSAGE_INFO_V2 2
#define RUSAGE_INFO_V3 3
#define SDB_MODE 0644
#define RUSAGE_INFO_V5 5
#define KERN_INVALID_ADDRESS 1
#define __DARWIN_OSSwapConstInt64(x) ((__uint64_t)((((__uint64_t)(x) & 0xff00000000000000ULL) >> 56) | (((__uint64_t)(x) & 0x00ff000000000000ULL) >> 40) | (((__uint64_t)(x) & 0x0000ff0000000000ULL) >> 24) | (((__uint64_t)(x) & 0x000000ff00000000ULL) >> 8) | (((__uint64_t)(x) & 0x00000000ff000000ULL) << 8) | (((__uint64_t)(x) & 0x0000000000ff0000ULL) << 24) | (((__uint64_t)(x) & 0x000000000000ff00ULL) << 40) | (((__uint64_t)(x) & 0x00000000000000ffULL) << 56)))
#define round_msg(x) (((mach_msg_size_t)(x) + sizeof (natural_t) - 1) & ~(sizeof (natural_t) - 1))
#define SDB_LIST_SORTED 1
#define R_NSEC_PER_MSEC 1000000ULL
#define ENOTSUP 45
#define __AVAILABILITY__ 
#define EXC_SOFT_SIGNAL 0x10003
#define CPUFAMILY_INTEL_ICELAKE 0x38435547
#define MONOTONIC_NETBSD (__NetBSD__ && __NetBSD_Version__ >= 700000000)
#define EXC_I386_ALIGNFLT 17
#define SOCK_SEQPACKET 5
#define PTHREAD_PRIO_NONE 0
#define R_OK (1<<2)
#define __TYPES_H_ 
#define MAP_MEM_NAMED_CREATE 0x020000
#define __DARWIN_NSIG 32
#define MACH_PORT_RIGHT_DEAD_NAME ((mach_port_right_t) 4)
#define __STDC_UTF_32__ 1
#define R_MODE_SIMPLE 0x004
#define IPV6_PORTRANGE_LOW 2
#define __INT_FAST8_WIDTH__ 8
#define CCTS_OFLOW 0x00010000
#define __MIG_STRNCPY_ZEROFILL_FORWARD_TYPE_DECLS__ 
#define __WATCHOS_4_0 40000
#define __WATCHOS_4_2 40200
#define __WATCHOS_4_3 40300
#define IP_PORTRANGE_DEFAULT 0
#define PROC_FLAG_APPLICATION 0x1000000
#define CLD_DUMPED 3
#define CLOCKS_PER_SEC 1000000
#define VM_SYNC_SYNCHRONOUS ((vm_sync_t) 0x02)
#define TIOCREMOTE _IOW('t', 105, int)
#define ICRNL 0x00000100
#define __FLT32X_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define r_interval_tree_foreach(tree,it,dat) if ((tree)->root) for ((it) = r_rbtree_first (&(tree)->root->node); r_rbtree_iter_has (&it) && (dat = r_interval_tree_iter_get (&it)->data); r_rbtree_iter_next (&(it)))
#define SO_RCVTIMEO 0x1006
#define PRIxFAST8 PRIx8
#define WEXITSTATUS(x) ((_W_INT(x) >> 8) & 0x000000ff)
#define SDB_IPI __attribute__ ((visibility ("hidden")))
#define __DARWIN_VERS_1050 1
#define PT_TRACE_ME 0
#define IN6_IS_ADDR_SITELOCAL(a) (((a)->s6_addr[0] == 0xfe) && (((a)->s6_addr[1] & 0xc0) == 0xc0))
#define IPPROTO_PIGP 9
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
#define MAX_FATAL_kGUARD_EXC_CODE (1u << 7)
#define POLLPRI 0x0002
#define LINE_VERT 0
#define TIOCM_RI TIOCM_RNG
#define VM_PROT_COPY ((vm_prot_t) 0x10)
#define CPUSUBFAMILY_ARM_HP 1
#define _MACH_DEBUG_HASH_INFO_H_ 
#define CPUSUBFAMILY_ARM_HS 4
#define MACH_PORT_INFO_EXT_COUNT ((natural_t) (sizeof(mach_port_info_ext_t)/sizeof(natural_t)))
#define __Reply__task_subsystem__defined 
#define RLIM_SAVED_MAX RLIM_INFINITY
#define __DARWIN_MAXPATHLEN 1024
#define RUNECODE_LINE_CROSS 0xc9
#define TIOCM_SR 0020
#define TIOCM_ST 0010
#define IPV6CTL_USE_DEPRECATED 21
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define EF_IS_SYNTHETIC 0x00000020
#define _STRING_H_ 
#define R2_CONS_H 
#define VM_MEMORY_COREGRAPHICS_FRAMEBUFFERS 56
#define _GCC_SIZE_T 
#define R_SYS_TMP "TMPDIR"
#define x86_THREAD_STATE 7
#define ST8_ADD_OVFCHK(a,x) ((((x) > 0) && ((a) > ST8_MAX - (x))) || ((x) < 0 && (a) < ST8_MIN - (x)))
#define _POSIX_THREAD_PRIO_PROTECT (-1)
#define CDB_HASHSTART 5381
#define L_SET SEEK_SET
#define TOSTOP 0x00400000
#define GUARD_TYPE_VIRT_MEMORY 0x5
#define MACH_NOTIFY_PORT_DELETED (MACH_NOTIFY_FIRST + 001)
#define SET_MZI_COLLECTABLE_BYTES(val,size) (val) = ((val) & 1) | ((size) << 1)
#define VM_FLAGS_RETURN_DATA_ADDR 0x100000
#define TASK_CATEGORY_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (task_category_policy_data_t) / sizeof (integer_t)))
#define __INTMAX_MAX__ 0x7fffffffffffffffL
#define r_rbtree_foreach(root,it,data,struc,rb) for ((it) = r_rbtree_first (root); r_rbtree_iter_has(&it) && (data = r_rbtree_iter_get (&it, struc, rb)); r_rbtree_iter_next (&(it)))
#define REALTIME_CLOCK 0
#define _POSIX_V6_ILP32_OFFBIG __ILP32_OFFBIG
#define ___POSIX_C_DEPRECATED_STARTING_200112L 
#define ITIMER_PROF 2
#define MACH_VOUCHER_ATTR_CONTROL_NULL ((mach_voucher_attr_control_t) 0)
#define __size_t__ 
#define VM_LEDGER_TAG_MAX 0x00000005
#define task_get_task_access_port(task,port) (task_get_special_port((task), TASK_ACCESS_PORT, (port)))
#define __FLT_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F
#define __DARWIN_ALIGN32(p) ((__darwin_size_t)((__darwin_size_t)(p) + __DARWIN_ALIGNBYTES32) &~ __DARWIN_ALIGNBYTES32)
#define R_EDGES_X_INC 4
#define PRIoPTR "lo"
#define _CS_XBS5_ILP32_OFF32_CFLAGS 20
#define TIOCMBIC _IOW('t', 107, int)
#define CPU_SUBTYPE_UVAXIII ((cpu_subtype_t) 12)
#define _PC_CHOWN_RESTRICTED 7
#define SIOCGIFGENERIC _IOWR('i', 58, struct ifreq)
#define _POSIX_BARRIERS (-1)
#define VM_NAMED_ENTRY_NULL ((vm_named_entry_t) 0)
#define SIOCSIFGENERIC _IOW('i', 57, struct ifreq)
#define MACH_MSG_TYPE_PORT_NAME 15
#define _STRUCT_ZMM_REG struct __darwin_zmm_reg
#define THREAD_KERNEL_PORT 1
#define pseudo_AF_HDRCMPLT 35
#define _CS_XBS5_LPBIG_OFFBIG_LIBS 34
#define USER_FSIGNATURES_CDHASH_LEN 20
#define CPU_SUBTYPE_ARM64_32_V8 ((cpu_subtype_t) 1)
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
#define MIG_SERVER_DIED -308
#define AI_NUMERICHOST 0x00000004
#define R2_HOME_PDB R_JOIN_2_PATHS (R2_HOME_DATADIR, "pdb")
#define _r_free r_free
#define WAKEMON_ENABLE 0x01
#define OSSwapHostToBigInt64(x) OSSwapInt64(x)
#define CHILD_MAX 266
#define BUFFER_INSIZE 8192
#define CPUFAMILY_ARM_TWISTER 0x92fb37c8
#define R_INTERVALTREE_H 
#define __DARWIN_EXTSN(sym) __asm("_" __STRING(sym) __DARWIN_SUF_EXTSN)
#define CDB_MAX_KEY 0xff
#define cut8 const unsigned char
#define __DARWIN_ALIGNBYTES (sizeof(__darwin_size_t) - 1)
#define __CHAR32_TYPE__ unsigned int
#define ENOPROTOOPT 42
#define IPCTL_DIRECTEDBROADCAST 9
#define TIOCCONS _IOW('t', 98, int)
#define THREAD_DEBUG_INFO_INTERNAL 6
#define LONG_BIT 64
#define MSG_SEND 0x1000
#define _PTHREAD_RWLOCK_SIG_init 0x2DA8B3B4
#define PPPDISC 5
#define __exported __attribute__((__visibility__("default")))
#define CTIME 0
#define __PROJECT_VERSION(s) __IDSTRING(project_version,s)
#define HOST_SYSDIAGNOSE_PORT (16 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define MEMORY_OBJECT_DATA_NO_CHANGE 0x2
#define TASK_INSPECT_NULL ((task_inspect_t) 0)
#define _MACH_VM_SYNC_H_ 
#define MEMORY_OBJECT_RESPECT_CACHE 0x2
#define MHTNO 0
#define FIONREAD _IOR('f', 127, int)
#define __IPV6_ADDR_SCOPE_NODELOCAL 0x01
#define EMFILE 24
#define _INTTYPES_H_ 
#define HAS_CLOCK_MONOTONIC 0
#define _MACH_MACHINE_KERN_RETURN_H_ 
#define w_coredump w_T.w_Coredump
#define INT32_C(v) (v)
#define __AVAILABILITY_INTERNAL_UNAVAILABLE __attribute__((unavailable))
#define VM_REGION_SUBMAP_INFO_V0_COUNT_64 ((mach_msg_type_number_t) (VM_REGION_SUBMAP_INFO_V0_SIZE / sizeof (natural_t)))
#define SCNxLEAST8 SCNx8
#define __RequestUnion__clock_priv_subsystem__defined 
#define SA_NODEFER 0x0010
#define TIOCTIMESTAMP _IOR('t', 89, struct timeval)
#define st_birthtime st_birthtimespec.tv_sec
#define __DARWIN_SUF_64_BIT_INO_T "$INODE64"
#define MACH_VOUCHER_NAME_ARRAY_NULL ((mach_voucher_name_array_t) 0)
#define POLL_PRI 5
#define i386_THREAD_STATE 1
#define MACH_PORT_DENAP_RECEIVER 6
#define KEV_DL_PROTO_ATTACHED 14
#define R_SELWIDGET_DIR_DOWN 1
#define SIGILL 4
#define IPPROTO_IRTP 28
#define MSG_EOF 0x100
#define r_oflist_serialize(x) x->array = r_flist_new (r_list_length (x)), { int idx = 0; void *ptr; RListIter *iter; r_list_foreach (x, iter, ptr) r_flist_set (x->array, idx++, ptr); } x->array;
#define HtName_(name) name ##UP
#define MSG_EOR 0x8
#define r_pvector_foreach(vec,it) for (it = (void **)(vec)->v.a; it != (void **)(vec)->v.a + (vec)->v.len; it++)
#define MACH_MSGH_BITS_IS_COMPLEX(bits) (((bits) & MACH_MSGH_BITS_COMPLEX) != MACH_MSGH_BITS_ZERO)
#define __OSX_AVAILABLE_STARTING(_osx,_ios) 
#define VM_FLAGS_PERMANENT 0x0080
#define CPU_SUBTYPE_MC98000_ALL ((cpu_subtype_t) 0)
#define ST16_MAX 0x7FFF
#define host_set_user_notification_port(host,port) (host_set_special_port((host), HOST_USER_NOTIFICATION_PORT, (port)))
#define ENOBUFS 55
#define IPC_VOUCHER_ATTR_CONTROL_NULL ((ipc_voucher_attr_control_t) 0)
#define __FLT_MIN_10_EXP__ (-37)
#define EXC_BREAKPOINT 6
#define POLICY_RR_BASE_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_rr_base)/sizeof(integer_t)))
#define EXC_I386_BPT 2
#define IPPROTO_DDP 37
#define __DARWIN_FD_COPY(f,t) bcopy(f, t, sizeof(*(f)))
#define POLLNLINK 0x0800
#define __FLT64_MIN__ 2.22507385850720138309023271733240406e-308F64
#define IOPOL_VFS_IGNORE_PERMISSIONS_ON 1
#define host_set_launchctl_port(host,port) (host_set_special_port((host), HOST_LAUNCHCTL_PORT, (port)))
#define TIOCGWINSZ _IOR('t', 104, struct winsize)
#define THREAD_FLAVOR_READ 1
#define _SS_MAXSIZE 128
#define __INTMAX_TYPE__ long int
#define MACH_PORT_STATUS_FLAG_NO_GRANT 0x80
#define PAGE_MIN_SHIFT 12
#define SIGINT 2
#define SYNC_POLICY_LIFO (SYNC_POLICY_FIFO|SYNC_POLICY_REVERSED)
#define EFAULT 14
#define R2_HOME_SDB_FORMAT R_JOIN_2_PATHS (R2_HOME_DATADIR, "format")
#define UPDATE_IO_STATS_ATOMIC(info,io_size) { OSIncrementAtomic64((SInt64 *)&(info.count)); OSAddAtomic64(io_size, (SInt64 *)&(info.size)); }
#define CPUFAMILY_INTEL_6_23 CPUFAMILY_INTEL_PENRYN
#define HOST_CAN_HAS_DEBUGGER_COUNT ((mach_msg_type_number_t) (sizeof(host_can_has_debugger_info_data_t)/sizeof(integer_t)))
#define SO_LABEL 0x1010
#define _SC_V6_LPBIG_OFFBIG 106
#define host_get_user_notification_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_USER_NOTIFICATION_PORT, (port)))
#define IS_UPPER(c) ((c) >= 'A' && (c) <= 'Z')
#define SDB_OPTION_NONE 0
#define R_CONS_CURSOR_UP "\x1b[A"
#define task_get_debug_control_port(task,port) (task_get_special_port((task), TASK_DEBUG_CONTROL_PORT, (port)))
#define TCOOFF 1
#define err_get_system(err) (((err)>>26)&0x3f)
#define __RequestUnion__mach_port_subsystem__defined 
#define SIGIOT SIGABRT
#define R2_VERSION_MAJOR 5
#define MHTSZ 32
#define EWOULDBLOCK EAGAIN
#define S_ISREG(m) (((m) & S_IFMT) == S_IFREG)
#define PRIu32 "u"
#define NETSVC_MRKNG_LVL_L3L2_ALL 2
#define __IPHONE_9_0 90000
#define S_IXGRP 0000010
#define R_QUEUE_H 
#define EBADEXEC 85
#define TCP_MAXOLEN (TCP_MAXHLEN - sizeof(struct tcphdr))
#define __ATOMIC_CONSUME 1
#define IPPROTO_DGP 86
#define _MACH_BOOLEAN_H_ 
#define MACH_MSGH_BITS_RAISED_IMPORTANCE(bits) (((bits) & MACH_MSGH_BITS_RAISEIMP) != MACH_MSGH_BITS_ZERO)
#define VM_PAGE_QUERY_PAGE_CS_TAINTED 0x200
#define CPU_STATE_SYSTEM 1
#define ___POSIX_C_DEPRECATED_STARTING_198808L 
#define PRIuLEAST8 PRIu8
#define PF_KEY pseudo_AF_KEY
#define _U_CHAR 
#define LITTLE_ENDIAN __DARWIN_LITTLE_ENDIAN
#define CSTOPB 0x00000400
#define __FLT32X_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F32x
#define __API_DEPRECATED_BEGIN_REP_GET_MACRO 
#define __unreachable_ok_pop _Pragma("GCC diagnostic pop")
#define INTMAX_C(v) (v ## L)
#define host_get_unfreed_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_UNFREED_PORT, (port)))
#define ILL_PRVOPC 3
#define _PATH_NETWORKS "/etc/networks"
#define TCPOPT_NOP 1
#define INADDR_ALLMDNS_GROUP (u_int32_t)0xe00000fb
#define IN6_IS_ADDR_MC_LINKLOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && (IPV6_ADDR_MC_FLAGS(a) != IPV6_ADDR_MC_FLAGS_UNICAST_BASED) && (__IPV6_ADDR_MC_SCOPE(a) == __IPV6_ADDR_SCOPE_LINKLOCAL))
#define TIOCSCONS _IO('t', 99)
#define ESHLIBVERS 87
#define OSSwapHostToLittleInt(x) OSSwapHostToLittleInt32(x)
#define SIOCSIFADDR _IOW('i', 12, struct ifreq)
#define TIOCSWINSZ _IOW('t', 103, struct winsize)
#define TCPOLEN_CC_APPA (TCPOLEN_CC+2)
#define IN_CLASSC_NSHIFT 8
#define IPV6CTL_USETEMPADDR 32
#define R_ARRAY_SIZE(x) (sizeof (x) / sizeof ((x)[0]))
#define WCOREFLAG 0200
#define SO_NP_EXTENSIONS 0x1083
#define MPO_STRICT 0x20
#define KERN_INSUFFICIENT_BUFFER_SIZE 52
#define MPO_IMMOVABLE_RECEIVE 0x80
#define S_ISUID 0004000
#define KEV_DL_MASTER_ELECTED 23
#define r_list_foreach_iter(list,it) if (list) for (it = list->head; it; it = it->n)
#define SZT_SUB_OVFCHK(a,b) SZT_ADD_OVFCHK(a,-(b))
#define SIOCSIFCAP _IOW('i', 90, struct ifreq)
#define IPPROTO_EMCON 14
#define host_set_amfid_port(host,port) (host_set_special_port((host), HOST_AMFID_PORT, (port)))
#define F_FLUSH_DATA 40
#define i386_FLOAT_STATE 2
#define _INO64_T 
#define RUNECODESTR_LINE_UP "\xd1"
#define R2_DATDIR "/usr/local/share"
#define SCM_TIMESTAMP 0x02
#define FP_387 3
#define IPV6_PORTRANGE_DEFAULT 0
#define CPU_SUBTYPE_VAX8650 ((cpu_subtype_t) 10)
#define _STRUCT_MCONTEXT_AVX64 struct __darwin_mcontext_avx64
#define timeradd(tvp,uvp,vvp) do { (vvp)->tv_sec = (tvp)->tv_sec + (uvp)->tv_sec; (vvp)->tv_usec = (tvp)->tv_usec + (uvp)->tv_usec; if ((vvp)->tv_usec >= 1000000) { (vvp)->tv_sec++; (vvp)->tv_usec -= 1000000; } } while (0)
#define R2_BIND_H 
#define R2_HOME_BINRC R_JOIN_2_PATHS (R2_HOME_DATADIR, "rc.d")
#define _U_SHORT 
#define SI_TIMER 0x10003
#define LOCAL_PEERCRED 0x001
#define ST16_MIN (-ST16_MAX-1)
#define TCP_NODELAY 0x01
#define VM_VOLATILE_ORDER_SHIFT 4
#define _POSIX_THREAD_SAFE_FUNCTIONS 200112L
#define MACH_SEND_NODENAP MACH_SEND_NOIMPORTANCE
#define CPU_SUBTYPE_XEON CPU_SUBTYPE_INTEL(12, 0)
#define _I386__LIMITS_H_ 
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
#define subsystem_to_name_map_host_priv { "host_get_boot_info", 400 }, { "host_reboot", 401 }, { "host_priv_statistics", 402 }, { "host_default_memory_manager", 403 }, { "vm_wire", 404 }, { "thread_wire", 405 }, { "vm_allocate_cpm", 406 }, { "host_processors", 407 }, { "host_get_clock_control", 408 }, { "kmod_create", 409 }, { "kmod_destroy", 410 }, { "kmod_control", 411 }, { "host_get_special_port", 412 }, { "host_set_special_port", 413 }, { "host_set_exception_ports", 414 }, { "host_get_exception_ports", 415 }, { "host_swap_exception_ports", 416 }, { "mach_vm_wire", 418 }, { "host_processor_sets", 419 }, { "host_processor_set_priv", 420 }, { "host_set_UNDServer", 423 }, { "host_get_UNDServer", 424 }, { "kext_request", 425 }
#define sv_onstack sv_flags
#define IOPOL_VFS_CONTENT_PROTECTION_IGNORE 1
#define _MACH_MIG_ERRORS_H_ 
#define AF_ISDN 28
#define IN_CLASSC_NET 0xffffff00
#define MACH_PORT_LIMITS_INFO_COUNT ((natural_t) (sizeof(mach_port_limits_t)/sizeof(natural_t)))
#define TCSANOW 0
#define RU_PROC_RUNS_RESLIDE 0x00000001
#define r_return_val_if_reached(val) do { H_LOG_ (R_LOGLVL_ERROR, "file %s: line %d (%s): should not be reached\n", __FILE__, __LINE__, R_FUNCTION); return (val); } while (0)
#define TASK_DYLD_INFO 17
#define IPV6_MULTICAST_LOOP 11
#define IPV6CTL_MAXDYNROUTES 49
#define _INT32_T 
#define TASK_SUPPRESSION_POLICY 3
#define MDMBUF 0x00100000
#define OSWriteBigInt(x,y,z) OSWriteBigInt32(x, y, z)
#define __WATCHOS_AVAILABLE(_vers) 
#define PRIdPTR "ld"
#define Color_HLINSERT Color_BGINSERT Color_INSERT
#define FPC_RC_RD 0x0400
#define _MACH_INIT_ 1
#define AF_IMPLINK 3
#define ENOENT 2
#define THREAD_AFFINITY_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (thread_affinity_policy_data_t) / sizeof (integer_t)))
#define PF_HYLINK AF_HYLINK
#define _SYS_IOCTL_H_ 
#define MIG_EXCEPTION -306
#define B2400 2400
#define R_DEBRUIJN_H 
#define B300 300
#define x86_THREAD_STATE32_COUNT ((mach_msg_type_number_t) ( sizeof (x86_thread_state32_t) / sizeof (int) ))
#define __UINT32_TYPE__ unsigned int
#define __Reply__mach_port_subsystem__defined 
#define __FLT32X_MIN_10_EXP__ (-307)
#define Color_BYELLOW "\x1b[93m"
#define PRId16 "hd"
#define ASN1_JSON_NULL "null"
#define RUNE_LINE_UP "↑"
#define PROC_FLAG_IOS_IMPPROMOTION 0x80000
#define KMOD_INFO_VERSION 1
#define __MSFILTERREQ_DEFINED 
#define MACH_MSGH_BITS_DENAP MACH_MSGH_BITS_RAISEIMP
#define __DARWIN_FD_ISSET(n,p) __darwin_fd_isset((n), (p))
#define SIOCGIFFLAGS _IOWR('i', 17, struct ifreq)
#define TIOCSETAF _IOW('t', 22, struct termios)
#define SIGTERM 15
#define IPV6_ADDR_MC_FLAGS_TRANSIENT 0x10
#define _POSIX_TIMERS (-1)
#define PTHREAD_KEYS_MAX 512
#define TIOCSETAW _IOW('t', 21, struct termios)
#define TIOCMBIS _IOW('t', 108, int)
#define MACH_RCV_BODY_ERROR 0x1000400c
#define HOST_VM_INFO64 4
#define mach_vm_trunc_page(x) ((mach_vm_offset_t)(x) & ~((signed)vm_page_mask))
#define _MACH_I386_THREAD_STATE_H_ 
#define SYNC_POLICY_FIFO 0x0
#define AI_CANONNAME 0x00000002
#define R_REGEX_ESUBREG 6
#define MEMORY_OBJECT_COPY_NONE 0
#define OSSwapBigToHostConstInt16(x) OSSwapConstInt16(x)
#define KERN_INVALID_PROCESSOR_SET 26
#define r_list_tail(x) ((x)? (x)->tail: NULL)
#define PRId32 "d"
#define IPV6_RTHDR_STRICT 1
#define __FLT128_EPSILON__ 1.92592994438723585305597794258492732e-34F128
#define __Request__task_subsystem__defined 
#define VM_PURGABLE_SET_STATE ((vm_purgable_t) 0)
#define TIOCM_CD TIOCM_CAR
#define VM_INHERIT_SHARE ((vm_inherit_t) 0)
#define __SIZEOF_LONG_LONG__ 8
#define UT8_ADD_OVFCHK(x,y) ((UT8_MAX - (x)) < (y))
#define _SC_SYNCHRONIZED_IO 40
#define EHOSTUNREACH 65
#define __Request__clock_priv_subsystem__defined 
#define VM_MEMORY_ROSETTA_EXECUTABLE_HEAP 234
#define DT_FIFO 1
#define UT64_SUB_OVFCHK(a,b) UT64_ADD_OVFCHK(a,-(b))
#define MAP_MEM_GRAB_SECLUDED 0x008000
#define MAX_TRAILER_SIZE ((mach_msg_size_t)sizeof(mach_msg_max_trailer_t))
#define OSSwapBigToHostConstInt32(x) OSSwapConstInt32(x)
#define RLIMIT_STACK 3
#define r_list_head(x) ((x)? (x)->head: NULL)
#define PRIO_MAX 20
#define SDB_MIN_VALUE 1
#define SIOCADDMULTI _IOW('i', 49, struct ifreq)
#define _POSIX_THREAD_KEYS_MAX 128
#define HOST_NOTIFY_TYPE_MAX 1
#define IS_PRINTABLE(x) ((x) >=' ' && (x) <= '~')
#define _MACH_MACHINE_H_ 
#define __FLT32X_MIN__ 2.22507385850720138309023271733240406e-308F32x
#define VM_BEHAVIOR_PAGEOUT ((vm_behavior_t) 11)
#define _PTHREAD_ONCE_T 
#define MAP_MEM_WTHRU 3
#define SIGWINCH 28
#define _DIRENT_H_ 
#define __TVOS_14_3 140300
#define __TVOS_14_5 140500
#define __LDBL_DIG__ 18
#define TIOCNOTTY _IO('t', 113)
#define X86_EXCEPTION_STATE64_COUNT x86_EXCEPTION_STATE64_COUNT
#define THREAD_BACKGROUND_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (thread_background_policy_data_t) / sizeof (integer_t)))
#define R_SYS_BASE ((ut64)0x100000000)
#define PRId64 __PRI_64_LENGTH_MODIFIER__ "d"
#define HOST_EXTMOD_INFO64_LATEST_COUNT HOST_EXTMOD_INFO64_COUNT
#define EXC_MASK_BREAKPOINT (1 << EXC_BREAKPOINT)
#define VINTR 8
#define HOST_NOTIFY_CALENDAR_CHANGE 0
#define __UINT_FAST16_MAX__ 0xffff
#define _PID_T 
#define CPF_IGNORE_MODE 0x0002
#define PF_NS AF_NS
#define S_IROTH 0000004
#define PT_WRITE_D 5
#define INT_FAST8_MAX INT8_MAX
#define mach_msg_kind_t mach_port_seqno_t
#define PT_WRITE_I 4
#define IPPROTO_LEAF1 25
#define IPPROTO_LEAF2 26
#define SO_RANDOMPORT 0x1082
#define PT_WRITE_U 6
#define _MODE_T 
#define ___int_ptrdiff_t_h 
#define _SC_BC_DIM_MAX 10
#define EFL_VIF 0x00080000
#define R_PERM_RWX (R_PERM_R|R_PERM_W|R_PERM_X)
#define ut16 unsigned short
#define current_task() mach_task_self()
#define __APPLE_API_PRIVATE 
#define NDR_FLOAT_IBM 3
#define CDISCARD CTRL('o')
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define CDB_MAKE_H 
#define KEV_DL_NODE_ABSENCE 22
#define CPUFAMILY_UNKNOWN 0
#define EXC_I386_GPFLT 13
#define RLIMIT_THREAD_CPULIMITS 0x3
#define GET_MAP_MEM(flags) ((((unsigned int)(flags)) >> 24) & 0xFF)
#define O_BINARY 0
#define PF_VSOCK AF_VSOCK
#define TH_SYN 0x02
#define VM_PAGE_INFO_BASIC_COUNT ((mach_msg_type_number_t) (sizeof(vm_page_info_basic_data_t)/sizeof(int)))
#define OSSwapBigToHostConstInt64(x) OSSwapConstInt64(x)
#define VM_MEMORY_GUARD 31
#define PRIoFAST8 PRIo8
#define VM_FLAGS_RESILIENT_CODESIGN 0x0020
#define SIOCIFCREATE _IOWR('i', 120, struct ifreq)
#define PRIuFAST8 PRIu8
#define BITS2BYTES(x) (((x)/8)+(((x)%8)?1:0))
#define TASK_DEBUG_INFO_INTERNAL 29
#define UF_APPEND 0x00000004
#define BAD_MACH_TIMESPEC(t) ((t)->tv_nsec < 0 || (t)->tv_nsec >= (long)NSEC_PER_SEC)
#define _U_INT16_T 
#define UT64_32U 0xFFFFFFFF00000000ULL
#define IOPOL_VFS_TRIGGER_RESOLVE_OFF 1
#define F_CHKCLEAN 41
#define ut32 unsigned int
#define SIOCSIFLLADDR _IOW('i', 60, struct ifreq)
#define NET_RT_DUMP 1
#define FP_PREC_53B 2
#define PF_LOCAL AF_LOCAL
#define PROCESSOR_SET_NULL ((processor_set_t) 0)
#define SIOCAUTOADDR _IOWR('i', 38, struct ifreq)
#define S_IFIFO 0010000
#define SCNuFAST8 SCNu8
#define __WCHAR_T 
#define TCPOPT_MAXSEG 2
#define r_skiplist_foreach_safe(list,it,tmp,pos) if (list) for (it = list->head->forward[0]; it != list->head && ((pos = it->data) || 1) && ((tmp = it->forward[0]) || 1); it = tmp)
#define FPE_FLTUND 3
#define TCPOPT_CCECHO 13
#define CPUFAMILY_INTEL_6_26 CPUFAMILY_INTEL_NEHALEM
#define R_CONS_GREP_TOKENS 64
#define SF_SETTABLE 0x3fff0000
#define KEV_DL_SIFPHYS 4
#define X_OK (1<<0)
#define SIOCGIFPDSTADDR _IOWR('i', 64, struct ifreq)
