#define OP_Offset 89
#define THREAD_CONVERT_THREAD_STATE_FROM_SELF 2
#define osMunmap ((int(*)(void*,size_t))aSyscall[23].pCurrent)
#define GET_RCV_ELEMENTS(y) (((y) >> 24) & 0xf)
#define vdbeInvokeSqllog(x) 
#define _Out_cap_(size) _SAL1_1_Source_(_Out_cap_, (size), _Pre_cap_(size) _Post_valid_impl_)
#define _Nullable 
#define _DELETE_OK (1<<12)
#define SQLITE_MALLOCSIZE(x) (_sqliteZone_ ? _sqliteZone_->size(_sqliteZone_,x) : malloc_size(x))
#define WO_NOOP 0x1000
#define TASK_EVENTS_INFO_COUNT ((mach_msg_type_number_t) (sizeof(task_events_info_data_t) / sizeof(natural_t)))
#define BTS_READ_ONLY 0x0001
#define _MCRTIMP 
#define _UINT64_T 
#define TIOCDSIMICROCODE _IO('t', 85)
#define _CRT_INTERNAL_SCANF_LEGACY_WIDE_SPECIFIERS (1ULL << 1)
#define __inner_control_entrypoint(category) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_15_0(x) 
#define __success(expr) _SAL1_1_Source_(__success, (expr), _Success_(expr))
#define __UINT_LEAST16_MAX__ 0xffff
#define OPFLAG_USESEEKRESULT 0x10
#define OP_FkIfZero 46
#define _Frees_ptr_ _SAL_L_Source_(_Frees_ptr_, (), _Pre_notnull_ _Post_ptr_invalid_ __drv_freesMem(Mem))
#define VM_MEMORY_ASSETSD 72
#define SQLITE_CONSTRAINT_ROWID (SQLITE_CONSTRAINT |(10<<8))
#define VM_MEMORY_CARBON VM_MEMORY_CORESERVICES
#define isless(x,y) ((_FPCOMPARE(x, y) & _FP_LT) != 0)
#define _SC_NGROUPS_MAX 4
#define ARM_THREAD_STATE64_COUNT ((mach_msg_type_number_t) (sizeof (arm_thread_state64_t)/sizeof(uint32_t)))
#define sa_sigaction __sigaction_u.__sa_sigaction
#define SQLITE_DEFAULT_FILE_PERMISSIONS 0644
#define SQLITE_WIN32_TEMP_DIRECTORY_TYPE 2
#define TK_BITOR 100
#define __out_bcount(size) _SAL1_Source_(__out_bcount, (size), _Out_writes_bytes_(size))
#define SQLITE_MUTEX_STATIC_VFS1 11
#define SQLITE_MUTEX_STATIC_VFS2 12
#define _PLOSS 6
#define MemSetTypeFlag(p,f) ((p)->flags = ((p)->flags&~(MEM_TypeMask|MEM_Zero))|f)
#define _WATTR_OK (1<<16)
#define _In_bytecount_c_(size) _SAL1_1_Source_(_In_bytecount_c_, (size), _Pre_bytecount_c_(size) _Deref_pre_readonly_)
#define VM_PAGE_INFO_MAX 
#define EIO 5
#define ACCESSPERMS (S_IRWXU|S_IRWXG|S_IRWXO)
#define __this_out_data_source(src_sym) _SAL_L_Source_(__this_out_data_source, (src_sym), __inner_this_data_source(#src_sym))
#define __field_bcount_part(size,init) _SAL1_Source_(__field_bcount_part, (size,init), __notnull __byte_writableTo(size) __byte_readableTo(init))
#define CPU_SUBTYPE_ARM64E ((cpu_subtype_t) 2)
#define A_SETKMASK 5
#define _SC_EXPR_NEST_MAX 14
#define MAP_MEM_4K_DATA_ADDR 0x800000
#define STAILQ_INIT(head) do { STAILQ_FIRST((head)) = NULL; (head)->stqh_last = &STAILQ_FIRST((head)); } while (0)
#define SV_RESETHAND SA_RESETHAND
#define TARGET_RT_BIG_ENDIAN 0
#define SQLITE_FCNTL_DATA_VERSION 35
#define __DARWIN_howmany(x,y) ((((x) % (y)) == 0) ? ((x) / (y)) : (((x) / (y)) + 1))
#define __DARWIN_INODE64(sym) __asm("_" __STRING(sym) __DARWIN_SUF_64_BIT_INO_T)
#define SQLITE_IOCAP_ATOMIC32K 0x00000080
#define MACH_RCV_INVALID_NAME 0x10004002
#define _SC_THREAD_SAFE_FUNCTIONS 91
#define VM_MEMORY_SHARED_PMAP 32
#define IOCPARM_LEN(x) (((x) >> 16) & IOCPARM_MASK)
#define TAILQ_INSERT_BEFORE(listelm,elm,field) do { TAILQ_CHECK_PREV(listelm, field); (elm)->field.tqe_prev = (listelm)->field.tqe_prev; TAILQ_NEXT((elm), field) = (listelm); *(listelm)->field.tqe_prev = (elm); (listelm)->field.tqe_prev = &TAILQ_NEXT((elm), field); QMD_TRACE_ELEM(&(elm)->field); QMD_TRACE_ELEM(&listelm->field); } while (0)
#define _Out_z_bytecap_(size) _SAL1_1_Source_(_Out_z_bytecap_, (size), _Pre_bytecap_(size) _Post_valid_impl_ _Post_z_)
#define ___drv_unit_internal_kernel_driver _SAL_L_Source_(__drv_unit_internal_kernel_driver, (), _SA_annotes0(SAL_internal_kernel_driver))
#define _MACH_MACHINE_KERN_RETURN_H_ 
#define _PTHREAD_COND_SIG_init 0x3CB0B1BB
#define bBatch 0
#define VFS_CTL_OSTATFS 0x00010001
#define CPU_STATE_IDLE 2
#define PAGER_CKPT_FULLFSYNC 0x10
#define CPU_SUBTYPE_X86_64_H ((cpu_subtype_t)8)
#define _FILE_DEFINED 
#define __deref_out_xcount_opt(size) _SAL1_Source_(__deref_out_xcount_opt, (size), __deref_out_xcount(size) _Post_ __deref __exceptthat __maybenull)
#define AUDIT_TRIGGER_READ_FILE 3
#define EDESTADDRREQ 109
#define __deref_opt_out_nz_opt _SAL1_Source_(__deref_opt_out_nz_opt, (), __deref_opt_out_opt)
#define __inout_z_opt _SAL1_Source_(__inout_z_opt, (), __inout_opt __pre __nullterminated __post __nullterminated)
#define CC_QUOTE2 9
#define SQLITE_MUTEX_STATIC_PRNG 5
#define _SC_XBS5_ILP32_OFF32 122
#define etRADIX 0
#define _ARM_SIGNAL_ 1
#define _PRAGMA_DETECT_MISMATCH_STRING1(s) #s
#define _MCONTEXT_T 
#define MACH_PORT_TYPE_PORT_OR_DEAD (MACH_PORT_TYPE_PORT_RIGHTS|MACH_PORT_TYPE_DEAD_NAME)
#define _USE_32BIT_TIME_T 
#define THREAD_STATE_FLAVOR_LIST_10_15 131
#define MACH_VOUCHER_ATTR_AUTO_REDEEM ((mach_voucher_attr_recipe_command_t)4)
#define DBFLAG_SchemaKnownOk 0x0010
#define WAL_NORMAL_MODE 0
#define _Notnull_impl_ 
#define __improbable(x) (x)
#define OE_Restrict 7
#define ATTR_CMN_ERROR 0x20000000
#define ITIMER_VIRTUAL 1
#define _PTHREAD_CONDATTR_T 
#define sqlite3StackAllocZero(D,N) sqlite3DbMallocZero(D,N)
#define __STDC_SECURE_LIB__ 200411L
#define __prefast_operator_new_throws 
#define MINSIGSTKSZ 32768
#define EMLINK 31
#define AUDIT_RECORD_MAGIC 0x828a0f1b
#define OP_SeekHit 119
#define PTRMAP_FREEPAGE 2
#define COLNAME_NAME 0
#define SIOCGIFADDR _IOWR('i', 33, struct ifreq)
#define SQLITE_CHECKPOINT_PASSIVE 0
#define _Pre_opt_z_bytecap_x_(size) _SAL1_1_Source_(_Pre_opt_z_bytecap_x_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre2_impl_(__zterm_impl,__bytecap_x_impl(size)) _Pre_valid_impl_)
#define __out_ecount_part_z_opt(size,length) _SAL1_Source_(__out_ecount_part_z_opt, (size,length), __out_ecount_part_opt(size,length) __post __nullterminated)
#define _U_LONG 
#define __interlocked 
#define _Deref_prepost_opt_bytecount_x_(size) _SAL1_1_Source_(_Deref_prepost_opt_bytecount_x_, (size), _Deref_pre_opt_bytecount_x_(size) _Deref_post_opt_bytecount_x_(size))
#define EXC_CRASH 10
#define _Inout_opt_bytecap_c_(size) _SAL1_1_Source_(_Inout_opt_bytecap_c_, (size), _Pre_opt_valid_bytecap_c_(size) _Post_valid_)
#define VM_PROT_ALL (VM_PROT_READ|VM_PROT_WRITE|VM_PROT_EXECUTE)
#define __FLT32X_DECIMAL_DIG__ 17
#define F_RDLCK 1
#define ATTR_CMN_FNDRINFO 0x00004000
#define SQLITE_CREATE_TABLE 2
#define TK_WITH 81
#define _Inout_updates_opt_z_(s) 
#define SPECSTRINGS_H 
#define NeXTBSD4_0 0
#define MACH_SEND_NO_BUFFER 0x1000000d
#define DIR_MNTSTATUS_TRIGGER 0x00000002
#define __enum_closed_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_closed
#define SRCHFS_SKIPINVISIBLE 0x00000020
#define EVFILT_SIGNAL (-6)
#define _Inout_opt_ptrdiff_count_(size) _SAL1_1_Source_(_Inout_opt_ptrdiff_count_, (size), _Pre_opt_ptrdiff_count_(size))
#define MEMORY_OBJECT_DATA_PURGE 0x4
#define KERN_UNRAGE_PROC 3
#define KERN_LOCK_UNSTABLE 39
#define VdbeModuleComment(X) 
#define ___POSIX_C_DEPRECATED_STARTING_199309L 
#define SCHED_RR 2
#define _Ret_maybenull_ 
#define osOpenDirectory ((int(*)(const char*,int*))aSyscall[17].pCurrent)
#define VM_BEHAVIOR_SEQUENTIAL ((vm_behavior_t) 2)
#define IN_INDEX_ROWID 1
#define OE_SetDflt 9
#define KERN_KDCPUMAP_EXT 25
#define MAP_32BIT 0x8000
#define __ILP32_OFF32 (-1)
#define CRF_NOMEMBERD 0x00000001
#define PTHREAD_MUTEX_POLICY_FIRSTFIT_NP 3
#define KERN_DUMPDEV 31
#define __DARWIN_SUF_1050 
#define _PTHREAD_FIRSTFIT_MUTEX_SIG_init 0x32AAABA3
#define __drv_typeCond 1
#define __in_ecount_z(size) _SAL1_Source_(__in_ecount_z, (size), _In_reads_z_(size))
#define EQUIV_CLASS_MAX 2
#define OP_Function 65
#define WINDOW_AGGINVERSE 2
#define VOL_CAP_INT_EXTENDED_SECURITY 0x00000400
#define SIGPROF 27
#define _Outptr_result_buffer_all_maybenull_(size) _SAL2_Source_(_Outptr_result_buffer_all_maybenull_, (size), _Out_impl_ _Deref_post2_impl_(__maybenull_impl_notref, __count_impl(size)))
#define PARSE_HDR_SZ offsetof(Parse,aTempReg)
#define __IPHONE_6_0 60000
#define OP_DecrJumpZero 49
#define bool _Bool
#define host_get_dynamic_pager_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_DYNAMIC_PAGER_PORT, (port)))
#define SQLITE_PTR_TO_INT(X) ((int)(__PTRDIFF_TYPE__)(X))
#define _SC_CPUTIME 68
#define __UINT_FAST64_MAX__ 0xffffffffffffffffULL
#define SQLITE_MAX_PAGE_SIZE 65536
#define KERN_UNOPENEVT_PROC 2
#define VOL_CAP_FMT_OPENDENYMODES 0x00001000
#define VM_REGION_EXTENDED_INFO 13
#define _Out_ptrdiff_cap_(size) _SAL1_1_Source_(_Out_ptrdiff_cap_, (size), _Pre_ptrdiff_cap_(size) _Post_valid_impl_)
#define _Deref_pre_opt_valid_bytecap_(size) _SAL1_1_Source_(_Deref_pre_opt_valid_bytecap_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre1_impl_(__bytecap_impl(size)) _Pre_valid_impl_)
#define __deref_out_ecount_full(size) _SAL1_Source_(__deref_out_ecount_full, (size), __deref_out_ecount_part(size,size))
#define ENOTTY 25
#define _Ret2_impl_(p1,p2) 
#define KERN_PROC 14
#define _Analysis_assume_lock_released_(e) 
#define __argv (*__p___argv())
#define __cold __attribute__((__cold__))
#define HOST_LOAD_INFO 1
#define __darwin_arm_thread_state64_get_lr_fptr(ts) ((void*)(uintptr_t)((ts).__lr))
#define _Deref_post_bytecap_(size) _SAL1_1_Source_(_Deref_post_bytecap_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post1_impl_(__bytecap_impl(size)))
#define MACH_RCV_INVALID_TRAILER 0x1000400f
#define MACH_SERVICE_PORT_INFO_STRING_NAME_MAX_BUF_LEN 255
#define UINT32_C(x) (x ## U)
#define SQLITE_EXTERN extern
#define UTIME_NOW -1
#define TASK_NAME_NULL ((task_name_t) 0)
#define _POSIX_THREAD_SAFE_FUNCTIONS 200112L
#define PAGER_FULLFSYNC 0x08
#define __IPHONE_12_1 120100
#define __FLT32_HAS_DENORM__ 1
#define S_ISGID 0002000
#define S_IFBLK 0060000
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_2_0(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_HType1,_HArg1,_HType2,_HArg2,_SalAttributeDst,_DstType,_Dst) __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_2_0_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName ##_s, _HType1, _HArg1, _HType2, _HArg2, _SalAttributeDst, _DstType, _Dst)
#define CIRCLEQ_CHECK_NEXT(head,elm,field) 
#define _ADDRESSOF(v) ( &(v) )
#define PragTyp_TABLE_INFO 34
#define __out_opt _SAL1_Source_(__out_opt, (), _Out_opt_)
#define _In_bytecount_(size) _SAL1_1_Source_(_In_bytecount_, (size), _Pre_bytecount_(size) _Deref_pre_readonly_)
#define _KAUTH_CRED_T 
#define PROCESSOR_CPU_STAT 0x10000003
#define _In_bytecount_x_(size) _SAL1_1_Source_(_In_bytecount_x_, (size), _Pre_bytecount_x_(size) _Deref_pre_readonly_)
#define DST_AUST 2
#define YYNOERRORRECOVERY 1
#define _WCHAR_T_DEFINED 
#define TH_FLAGS_GLOBAL_FORCED_IDLE 0x4
#define _POSIX_V7_LP64_OFF64 __LP64_OFF64
#define sqlite3IsNumericAffinity(X) ((X)>=SQLITE_AFF_NUMERIC)
#define ATTR_FILE_ALLOCSIZE 0x00000004
#define CPU_TYPE_MC88000 ((cpu_type_t) 13)
#define osMkdir ((int(*)(const char*,mode_t))aSyscall[18].pCurrent)
#define VFS_MAXTYPENUM 1
#define unixLogError(a,b,c) unixLogErrorAtLine(a,b,c,__LINE__)
#define MAC_OS_X_VERSION_10_11_3 101103
#define MACH_SEND_INVALID_REPLY 0x10000009
#define SQLITE_DBSTATUS_LOOKASIDE_MISS_FULL 6
#define VM_VOLATILE_GROUP_MASK (7 << VM_VOLATILE_GROUP_SHIFT)
#define _CS_PATH 1
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffULL
#define SQLITE_WAL_H 
#define _ERRNO_T 
#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_3_SIZE(_DeclSpec,_FuncName,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2,_TType3,_TArg3) __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_3_SIZE_EX(_DeclSpec, _FuncName, _FuncName ##_s, _DstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3)
#define __out_nz _SAL1_Source_(__out_nz, (), __post __valid __refparam)
#define sqliteHashNext(E) ((E)->next)
#define _UNALIGNED 
#define _MACH_VM_SYNC_H_ 
#define _OS_OSBYTEORDERARM_H 
#define NFDBITS __DARWIN_NFDBITS
#define _ARM_PARAM_H_ 
#define SQLITE_TESTCTRL_BENIGN_MALLOC_HOOKS 10
#define MACH_SEND_NODENAP MACH_SEND_NOIMPORTANCE
#define VM_MEMORY_IOACCELERATOR 100
#define ECONNABORTED 106
#define ATTR_DIR_LINKCOUNT 0x00000001
#define wsdStat sqlite3Stat
#define SQLITE_TCLAPI 
#define SQLITE_PREPARE_NO_VTAB 0x04
#define _Deref_pre_notnull_ _SAL1_1_Source_(_Deref_pre_notnull_, (), _Deref_pre1_impl_(__notnull_impl_notref))
#define SQLITE_TRACE_NONLEGACY_MASK 0x0f
#define _O_TRUNC 0x0200
#define TK_VARIABLE 151
#define SQLITE_TESTCTRL_PRNG_SAVE 5
#define MPO_INSERT_SEND_RIGHT 0x10
#define STAILQ_FOREACH_SAFE(var,head,field,tvar) for ((var) = STAILQ_FIRST((head)); (var) && ((tvar) = STAILQ_NEXT((var), field), 1); (var) = (tvar))
#define PragTyp_FOREIGN_KEY_LIST 14
#define MACH_PORT_STATUS_FLAG_TEMPOWNER 0x01
#define __FLT32X_NORM_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define __deref_out_ecount_z(size) _SAL1_Source_(__deref_out_ecount_z, (size), __deref_out_ecount(size) __post __deref __nullterminated)
#define _Check_return_opt_ 
#define WALINDEX_LOCK_OFFSET (sizeof(WalIndexHdr)*2+offsetof(WalCkptInfo,aLock))
#define __UINT_LEAST8_MAX__ 0xff
#define AU_IPv6 16
#define EXC_ARM_FP_DZ 2
#define IOC_DIRMASK (__uint32_t)0xe0000000
#define _SC_SYMLOOP_MAX 120
#define _DOMAIN 1
#define __out_ecount_nz(size) _SAL1_Source_(__out_ecount_nz, (size), __ecount(size) __post __valid __refparam)
#define __UINTMAX_TYPE__ long unsigned int
#define _CS_XBS5_LP64_OFF64_CFLAGS 28
#define BITVEC_MXHASH (BITVEC_NINT/2)
#define host_set_coalition_port(host,port) (host_set_special_port((host), HOST_COALITION_PORT, (port)))
#define TK_SET 126
#define thread_get_kernel_port(thread,port) (thread_get_special_port((thread), THREAD_KERNEL_PORT, (port)))
#define KERN_NOT_RECEIVER 7
#define SQLITE_VERSION "3.30.1"
#define SIOCSIFBRDADDR _IOW('i', 19, struct ifreq)
#define MACH_MSG_VM_SPACE 0x00001000
#define EXC_MASK_RPC_ALERT (1 << EXC_RPC_ALERT)
#define __drv_KMDF 
#define ExpandBlob(P) (((P)->flags&MEM_Zero)?sqlite3VdbeMemExpandBlob(P):0)
#define EXCEPTION_IDENTITY_PROTECTED 4
#define _Group_impl_(annos) 
#define _CRT_ALIGN(x) __declspec(align(x))
#define _INC_STRING 
#define host_get_iocompressionstats_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_IOCOMPRESSIONSTATS_PORT, (port)))
#define _Deref_pre_z_bytecap_c_(size) _SAL1_1_Source_(_Deref_pre_z_bytecap_c_, (size), _Deref_pre1_impl_(__notnull_impl_notref) _Deref_pre2_impl_(__zterm_impl,__bytecap_c_impl(size)) _Pre_valid_impl_)
#define TK_CTIME_KW 97
#define USER_MAXID 21
#define SQLITE_DBSTATUS_CACHE_HIT 7
#define MACH_RCV_INTERRUPT 0x00000400
#define __bool_true_false_are_defined 1
#define CPU_SUBTYPE_PENTII_M3 CPU_SUBTYPE_INTEL(6, 3)
#define CPU_SUBTYPE_PENTII_M5 CPU_SUBTYPE_INTEL(6, 5)
#define IS_BIG_INT(X) (((X)&~(i64)0xffffffff)!=0)
#define WINDOW_AGGSTEP 3
#define _Maybenull_impl_ 
#define __field_ecount(size) _SAL1_Source_(__field_ecount, (size), __notnull __elem_writableTo(size))
#define TASK_KERNELMEMORY_INFO 7
#define _Deref_pre_writeonly_ _SAL1_1_Source_(_Deref_pre_writeonly_, (), _Deref_pre1_impl_(__writeaccess_impl_notref))
#define SIGUSR1 30
#define SIGUSR2 31
#define _Deref_opt_out_ _SAL1_1_Source_(_Deref_opt_out_, (), _Out_opt_ _Deref_post_valid_)
#define EXC_ARM_FP_ID 6
#define _Ret_bytecount_(size) _SAL1_1_Source_(_Ret_bytecount_, (size), _Ret1_impl_(__notnull_impl_notref) _Ret1_impl_(__bytecount_impl(size)) _Ret_valid_impl_)
#define _TMP_MAX_S TMP_MAX
#define _Outptr_result_bytebuffer_to_maybenull_(size,count) _SAL2_Source_(_Outptr_result_bytebuffer_to_maybenull_, (size, count), _Out_impl_ _Deref_post3_impl_(__maybenull_impl_notref, __bytecap_impl(size), __bytecount_impl(count)))
#define EXC_ARM_FP_IO 1
#define _Out_writes_to_(s,c) 
#define EXC_ARM_FP_IX 5
#define TASK_ABSOLUTETIME_INFO_COUNT ((mach_msg_type_number_t) (sizeof (task_absolutetime_info_data_t) / sizeof (natural_t)))
#define SQLITE_INDEX_CONSTRAINT_MATCH 64
#define SQLITE_DIRECTONLY 0x000080000
#define VM_MEMORY_DYLD 60
#define _Out_z_capcount_(capcount) _SAL1_1_Source_(_Out_z_capcount_, (capcount), _Pre_cap_(capcount) _Post_valid_impl_ _Post_z_count_(capcount))
#define __FLT128_MIN_EXP__ (-16381)
#define OE_None 0
#define _Deref_prepost_opt_cap_(size) _SAL1_1_Source_(_Deref_prepost_opt_cap_, (size), _Deref_pre_opt_cap_(size) _Deref_post_opt_cap_(size))
#define PAGER_MJ_PGNO(x) ((Pgno)((PENDING_BYTE/((x)->pageSize))+1))
#define _Deref_inout_bound_ _SAL1_1_Source_(_Deref_inout_bound_, (), _Deref_in_bound_ _Deref_out_bound_)
#define _Deref_post_z_bytecap_c_(size) _SAL1_1_Source_(_Deref_post_z_bytecap_c_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post2_impl_(__zterm_impl,__bytecap_c_impl(size)) _Post_valid_impl_)
#define _COM_Outptr_opt_ 
#define _ACCESS_EXTENDED_MASK (_READ_OK | _WRITE_OK | _EXECUTE_OK | _DELETE_OK | _APPEND_OK | _RMFILE_OK | _REXT_OK | _WEXT_OK | _RATTR_OK | _WATTR_OK | _RPERM_OK | _WPERM_OK | _CHOWN_OK)
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0_CGETS(_ReturnType,_DeclSpec,_FuncName,_SalAttributeDst,_DstType,_Dst) _CRT_INSECURE_DEPRECATE(_FuncName ##_s) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst);
#define UINT16_C(x) (x)
#define NOTE_CHILD 0x00000004
#define OP_SeekGT 25
#define _Inout_opt_z_bytecount_c_(size) _SAL1_1_Source_(_Inout_opt_z_bytecount_c_, (size), _Prepost_z_ _Prepost_opt_bytecount_c_(size))
#define __OSX_DEPRECATED(_start,_dep,_msg) 
#define PragTyp_TEMP_STORE 35
#define WINDOWFUNCX(name,nArg,extra) { nArg, (SQLITE_UTF8|SQLITE_FUNC_WINDOW|extra), 0, 0, name ## StepFunc, name ## ValueFunc, name ## ValueFunc, noopStepFunc, name ## Name, {0} }
#define CTL_NET 4
#define _PC_PRIO_IO 19
#define EXIT_FAILURE 1
#define __out_ecount_full(size) _SAL1_Source_(__out_ecount_full, (size), _Out_writes_all_(size))
#define _Deref_prepost_valid_bytecap_(size) _SAL1_1_Source_(_Deref_prepost_valid_bytecap_, (size), _Deref_pre_valid_bytecap_(size) _Deref_post_valid_bytecap_(size))
#define __INT_LEAST16_WIDTH__ 16
#define SQLITE_IOERR 10
#define _BSD_MACHINE_PARAM_H_ 
#define testcase(X) 
#define OS_PURE __attribute__((__pure__))
#define __SCHAR_MAX__ 0x7f
#define OP_IdxDelete 133
#define THREAD_STATE_FLAVOR_LIST 0
#define OP_DropIndex 144
#define _Deref_pre_opt_bytecount_(size) _SAL1_1_Source_(_Deref_pre_opt_bytecount_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre1_impl_(__bytecount_impl(size)) _Pre_valid_impl_)
#define VM_INHERIT_COPY ((vm_inherit_t) 1)
#define __DARWIN_STRUCT_STATFS64 { uint32_t f_bsize; int32_t f_iosize; uint64_t f_blocks; uint64_t f_bfree; uint64_t f_bavail; uint64_t f_files; uint64_t f_ffree; fsid_t f_fsid; uid_t f_owner; uint32_t f_type; uint32_t f_flags; uint32_t f_fssubtype; char f_fstypename[MFSTYPENAMELEN]; char f_mntonname[MAXPATHLEN]; char f_mntfromname[MAXPATHLEN]; uint32_t f_flags_ext; uint32_t f_reserved[7]; }
#define _Out_writes_to_ptr_opt_(p) 
#define SQLITE_TESTCTRL_NEVER_CORRUPT 20
#define KERN_NODE_DOWN 47
#define _Pre_cap_c_(size) _SAL1_1_Source_(_Pre_cap_c_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__cap_c_impl(size)))
#define SA_SIGINFO 0x0040
#define SQLITE_NOTNULL 0x90
#define SQLITE_LOCK_EXCLUSIVE 4
#define __inexpressible_readableTo(size) 
#define THREAD_FLAVOR_CONTROL 0
#define EXC_ARM_FP_OF 3
#define _Deref_pre_valid_ _SAL1_1_Source_(_Deref_pre_valid_, (), _Deref_pre1_impl_(__notnull_impl_notref) _Pre_valid_impl_)
#define SQLITE_TRACE_LEGACY 0x40
#define ___drv_unit_user_code _SAL_L_Source_(___drv_unit_user_code, (), _SA_annotes0(SAL_nokernel) _SA_annotes0(SAL_nodriver))
#define ATTR_CMN_FILEID 0x02000000
#define KERN_KDGETREG 9
#define MAC_OS_X_VERSION_10_10_3 101003
#define _Deref_post_valid_bytecap_(size) _SAL1_1_Source_(_Deref_post_valid_bytecap_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post1_impl_(__bytecap_impl(size)) _Post_valid_impl_)
#define _UINTPTR_T_DEFINED 
#define VM_MEMORY_SQLITE 62
#define _SC_THREAD_THREADS_MAX 94
#define CTL_KERN 1
#define CC_GT 13
#define KERN_POSIX 58
#define OP_ResetSorter 138
#define MACH_SEND_FILTER_NONFATAL 0x00010000
#define __SIZEOF_INT__ 4
#define _MAX_ITOSTR_BASE8_COUNT (11 + 1)
#define SIOCSIFKPI _IOW('i', 134, struct ifreq)
#define SQLITE_FUNC_LIKE 0x0004
#define SQLITE_IOCAP_BATCH_ATOMIC 0x00004000
#define TK_UNIQUE 119
#define TRASHIT(x) 
#define _CRT_FUNCTIONS_REQUIRED 1
#define wsdHooksInit 
#define VM_VOLATILE_MAKE_LAST_IN_GROUP (0 << VM_VOLATILE_ORDER_SHIFT)
#define _SYS_TTYCOM_H_ 
#define __drv_nonConstant _SAL1_1_Source_(__drv_nonConstant, (), _Notliteral_)
#define OP_JournalMode 7
#define PSOCK 24
#define sqlite3Isquote(x) (sqlite3CtypeMap[(unsigned char)(x)]&0x80)
#define P_REBOOT 0x00200000
#define TK_ABORT 27
#define AT_FDCWD -2
#define OP_NotNull 51
#define SQLITE_FCNTL_PDB 30
#define __out_bcount_part(size,length) _SAL1_Source_(__out_bcount_part, (size,length), _Out_writes_bytes_to_(size,length))
#define ATTR_CMN_NAMEDATTRLIST 0x00100000
#define VQ_MOUNT 0x0008
#define __deref_opt_in_xcount_opt(size) _SAL1_Source_(__deref_opt_in_xcount_opt, (size), __deref_in_xcount_opt(size) __exceptthat __maybenull)
#define ATTR_CMN_SCRIPT 0x00000100
#define _SC_VERSION 8
#define _SC_RE_DUP_MAX 16
#define __LDBL_MAX__ 1.79769313486231570814527423731704357e+308L
#define _Pre_opt_z_cap_c_(size) _SAL1_1_Source_(_Pre_opt_z_cap_c_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre2_impl_(__zterm_impl,__cap_c_impl(size)) _Pre_valid_impl_)
#define __USER_LABEL_PREFIX__ _
#define PGHDR_DIRTY 0x002
#define OS_NOESCAPE 
#define VM_PROT_NONE ((vm_prot_t) 0x00)
#define TK_RP 23
#define _Prepost_count_c_(size) _SAL1_1_Source_(_Prepost_count_c_, (size), _Pre_count_c_(size) _Post_count_c_(size))
#define SQLITE_PushDown 0x1000
#define TK_TRUTH 170
#define KERN_RIGHT_EXISTS 21
#define _SC_RTSIG_MAX 48
#define RTLD_NODELETE 0x80
#define HAVE_GETHOSTUUID 1
#define UINT8_MAX 0xffui8
#define WAL_CKPT_LOCK 1
#define __drv_interlocked _SAL1_1_Source_(__drv_interlocked, (), _Interlocked_operand_)
#define TARGET_CPU_PPC64 0
#define SQLITE_MAX_ATTACHED 10
#define _Ret_count_c_(size) _SAL1_1_Source_(_Ret_count_c_, (size), _Ret1_impl_(__notnull_impl_notref) _Ret1_impl_(__count_c_impl(size)) _Ret_valid_impl_)
#define _Post_count_c_(size) _SAL1_1_Source_(_Post_count_c_, (size), _Post1_impl_(__count_c_impl(size)) _Post_valid_impl_)
#define __ARM_FEATURE_IDIV 1
#define OS_WEAK __attribute__((__weak__))
#define __FLT32_IS_IEC_60559__ 2
#define _Pre_cap_m_(mult,size) _SAL1_1_Source_(_Pre_cap_m_, (mult,size), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__mult_impl(mult,size)))
#define OP_SorterCompare 125
#define OP_Param 149
#define TASK_SCHED_RR_INFO 11
#define OPFLG_OUT2 0x10
#define etEXP 2
#define _Pre_opt_bytecount_(size) _SAL1_1_Source_(_Pre_opt_bytecount_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__bytecount_impl(size)) _Pre_valid_impl_)
#define _Pre_valid_cap_c_(size) _SAL1_1_Source_(_Pre_valid_cap_c_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__cap_c_impl(size)) _Pre_valid_impl_)
#define TASK_BASIC_INFO_64_COUNT TASK_BASIC_INFO_64_2_COUNT
#define SF_RESTRICTED 0x00080000
#define MS_ASYNC 0x0001
#define SQLITE_UTF16BE 3
#define CC_PLUS 20
#define _CRTIMP_ALT 
#define _Outref_result_buffer_maybenull_(s) 
#define MAP_FAILED ((void *)-1)
#define OP_Jump 16
#define MACH_PORT_INFO_EXT 7
#define KERN_INVALID_PROCESSOR_SET 26
#define PROCESSOR_SET_NULL ((processor_set_t) 0)
#define ENOLINK 121
#define RESERVED_BYTE (PENDING_BYTE+1)
#define HW_VECTORUNIT 13
#define CPU_SUBTYPE_MIPS_R2800 ((cpu_subtype_t) 3)
#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_0_EX(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SecureFuncName,_SalAttributeDst,_DstType,_Dst) _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst);
#define SIOCSIFBOND _IOW('i', 70, struct ifreq)
#define _PRAGMA_DETECT_MISMATCH(name,value) __pragma(comment(linker, "/FAILIFMISMATCH:\"" _PRAGMA_DETECT_MISMATCH_STRING0(name) "=" _PRAGMA_DETECT_MISMATCH_STRING0(value) "\""))
#define OP_Gosub 12
#define _Deref_pre_z_bytecap_x_(size) _SAL1_1_Source_(_Deref_pre_z_bytecap_x_, (size), _Deref_pre1_impl_(__notnull_impl_notref) _Deref_pre2_impl_(__zterm_impl,__bytecap_x_impl(size)) _Pre_valid_impl_)
#define TIOCMGDTRWAIT _IOR('t', 90, int)
#define VM_PURGABLE_BEHAVIOR_FIFO (0 << VM_PURGABLE_BEHAVIOR_SHIFT)
#define __inout_ecount_z(size) _SAL1_Source_(__inout_ecount_z, (size), _Inout_updates_z_(size))
#define __STDC_UTF_16__ 1
#define ARM_THREAD_STATE64 6
#define __API_AVAILABLE_GET_MACRO(...) 
#define CPU_SUBTYPE_ARM64_V8 ((cpu_subtype_t) 1)
#define __out_ecount_nz_opt(size) _SAL1_Source_(__out_ecount_nz_opt, (size), __out_ecount_opt(size) __post __nullterminated)
#define SQLITE_INTERRUPT 9
#define NOTE_MACH_CONTINUOUS_TIME 0x00000080
#define __deref_in _SAL1_Source_(__deref_in, (), __in _Pre_ __deref __deref __readonly)
#define INT_FAST64_MAX INT64_MAX
#define __drv_innerNeverHoldGlobal(kind,param) _SAL_L_Source_(__drv_innterNeverHoldGlobal, (#kind, param\t), _Pre_ _SA_annotes2(SAL_neverHoldGlobal, #kind, param\t))
#define _Pre_accessible_bytes_(context,expr) 
#define _CVTBUFSIZE (309 + 40)
#define MACH_PORT_TYPE_SPREQUEST_DELAYED 0x20000000
#define _POSIX_FSYNC 200112L
#define HW_L2SETTINGS 19
#define AT_SYMLINK_FOLLOW 0x0040
#define _Deref_ret_bound_impl_ 
#define WHERE_GROUPBY 0x0040
#define _Out_writes_bytes_(s) 
#define _Deref_post_z_bytecap_x_(size) _SAL1_1_Source_(_Deref_post_z_bytecap_x_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post2_impl_(__zterm_impl,__bytecap_x_impl(size)) _Post_valid_impl_)
#define __FLT64X_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F64x
#define _CRTIMP2_PURE_DESTRUCTOR _CRTIMP2_PURE _CRTIMP2_MEMBER_FUNCTION_CALLING_CONVENTION
#define VM_VOLATILE_MAKE_FIRST_IN_GROUP (1 << VM_VOLATILE_ORDER_SHIFT)
#define SQLITE_FCNTL_PERSIST_WAL 10
#define OP_TableLock 159
#define ATTR_CMN_CRTIME 0x00000200
#define MACH_MSG_TYPE_MOVE_RECEIVE 16
#define _CRTIMP_PURE_TYPEINFO _CRTIMP_PURE
#define __TVOS_15_0 150000
#define _IRQL_restores_ 
#define sqliteHashFirst(H) ((H)->first)
#define SQLITE_OS_OTHER 0
#define CIRCLEQ_LAST(head) ((head)->cqh_last)
#define CPU_ARCH_ABI64 0x01000000
#define MNT_CPROTECT 0x00000080
#define EVFILT_VNODE (-4)
#define __FLT32_NORM_MAX__ 3.40282346638528859811704183484516925e+38F32
#define BITVEC_SZ 512
#define F_SETBACKINGSTORE 70
#define SQLITE_OS_WIN 0
#define __INT_WIDTH__ 32
#define TH_FLAGS_SWAPPED 0x1
#define S_ISVTX 0001000
#define __PRIMOP(type,fun) 
#define HOST_KTRACE_BACKGROUND_PORT (6 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define _Ret_bound_ _SAL1_1_Source_(_Ret_bound_, (), _Ret_bound_impl_)
#define _Ret_z_bytecount_(size) _SAL1_1_Source_(_Ret_z_bytecount_, (size), _Ret1_impl_(__notnull_impl_notref) _Ret2_impl_(__zterm_impl,__bytecount_impl(size)) _Ret_valid_impl_)
#define __WATCHOS_7_3 70300
#define _Pre_cap_x_(size) _SAL1_1_Source_(_Pre_cap_x_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__cap_x_impl(size)))
#define EP_WinFunc 0x1000000
#define MACH_SEND_INTERRUPTED 0x10000007
#define __deref_opt_inout_xcount_opt(size) _SAL1_Source_(__deref_opt_inout_xcount_opt, (size), __deref_inout_xcount_opt(size) __exceptthat __maybenull)
#define __deref_opt_out_opt _SAL1_Source_(__deref_opt_out_opt, (), _Outptr_opt_result_maybenull_)
#define __DECIMAL_DIG__ 17
#define __drv_mustHoldCriticalRegion 
#define OS_REFINED_FOR_SWIFT 
#define ATTR_FORK_RESERVED 0xffffffff
#define SQLITE_UTF16LE 2
#define LOCK_EX 0x02
#define SQLITE_BLDF_UNIQUE 0x0002
#define SQLITE_WARNING_AUTOINDEX (SQLITE_WARNING | (1<<8))
#define __FLT64_EPSILON__ 2.22044604925031308084726333618164062e-16F64
#define THREAD_EXTENDED_INFO_COUNT ((mach_msg_type_number_t) (sizeof(thread_extended_info_data_t) / sizeof (natural_t)))
#define MACH_VOUCHER_SELECTOR_CURRENT ((mach_voucher_selector_t)0)
#define _LARGEFILE_SOURCE 1
#define MAX_INPUT 1024
#define F_ADDFILESIGS_FOR_DYLD_SIM 83
#define __requires_lock_held(lock) 
#define KMOD_EXPLICIT_DECL(name,version,start,stop) kmod_info_t KMOD_INFO_NAME = { 0, KMOD_INFO_VERSION, -1U, { #name }, { version }, -1, 0, 0, 0, 0, start, stop };
#define _SC_2_SW_DEV 24
#define __in_range(lb,ub) _SAL_L_Source_(__in_range, (lb,ub), _Pre_ __inner_range(lb,ub))
#define KERN_PROCARGS 38
#define __DECLARE_CPP_OVERLOAD_INLINE_NFUNC_0_2_EX(_ReturnType,_ReturnPolicy,_FuncName,_SecureFuncName,_SecureDstType,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2) _CRT_INSECURE_DEPRECATE(_SecureFuncName) __inline _ReturnType __CRTDECL _FuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2)
#define ARM_EXCEPTION_STATE64_COUNT ((mach_msg_type_number_t) (sizeof (arm_exception_state64_t)/sizeof(uint32_t)))
#define _Out_writes_bytes_opt_(s) 
#define MACH_EXCEPTION_CODES 0x80000000
#define _CRT_INSECURE_DEPRECATE_CORE(_Replacement) 
#define SQLITE_MAX_COMPOUND_SELECT 500
#define OP_Transaction 2
#define KERN_AIOMAX 46
#define KERN_VNODE 13
#define PTRDIFF_MAX INTPTR_MAX
#define SQLITE_OPEN_DELETEONCLOSE 0x00000008
#define etDECIMAL 16
#define CTL_DEBUG_NAME 0
#define _POSIX_THREAD_ATTR_STACKADDR 200112L
#define MACH_PORT_TYPE_ALL_RIGHTS (MACH_PORT_TYPE_PORT_OR_DEAD|MACH_PORT_TYPE_PORT_SET)
#define __LDBL_HAS_QUIET_NAN__ 1
#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_1_ARGLIST_EX(_ReturnType,_ReturnPolicy,_DeclSpec,_CC,_FuncName,_SecureFuncName,_VFuncName,_SecureVFuncName,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1) _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType _CC _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, ...); _CRT_INSECURE_DEPRECATE(_SecureVFuncName) _DeclSpec _ReturnType _CC _VFuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, va_list _Args);
#define HOST_GSSD_PORT (12 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define MACH_VOUCHER_ATTR_CONTROL_NULL ((mach_voucher_attr_control_t) 0)
#define _Outref_result_buffer_to_maybenull_(s,c) 
#define SIGIO 23
#define _Out_opt_z_bytecap_c_(size) _SAL1_1_Source_(_Out_opt_z_bytecap_c_, (size), _Pre_opt_bytecap_c_(size) _Post_valid_impl_ _Post_z_)
#define _CRT_STRINGIZE_(x) #x
#define NC_PartIdx 0x0002
#define _In_z_count_(size) _SAL1_1_Source_(_In_z_count_, (size), _Pre_z_ _Pre_count_(size) _Deref_pre_readonly_)
#define __field_xcount_opt(size) _SAL1_Source_(__field_xcount_opt, (size), __maybenull __inexpressible_writableTo(size))
#define SQLITE_READONLY_DBMOVED (SQLITE_READONLY | (4<<8))
#define _Pre_opt_z_cap_x_(size) _SAL1_1_Source_(_Pre_opt_z_cap_x_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre2_impl_(__zterm_impl,__cap_x_impl(size)) _Pre_valid_impl_)
#define _Deref_ret_range_impl_(min,max) 
#define __ATTR_SAL 
#define _POSIX_NO_TRUNC 200112L
#define __SPI_AVAILABLE(...) 
#define MACH_PORT_TYPE_SPREQUEST 0x40000000
#define SQLITE_CONFIG_SERIALIZED 3
#define __inout_bcount_opt(size) _SAL1_Source_(__inout_bcount_opt, (size), __inout_bcount(size) __pre_except_maybenull)
#define ATTR_BIT_MAP_COUNT 5
#define WHERE_ORDERBY_MIN 0x0001
#define _Out_writes_opt_z_(s) 
#define L_tmpnam 260
#define __DYNAMIC__ 1
#define WHERE_IPK 0x00000100
#define __GNUC__ 12
#define _ARM_WINAPI_PARTITION_DESKTOP_SDK_AVAILABLE 0
#define IOCPARM_MAX (IOCPARM_MASK + 1)
#define offsetof(s,m) __builtin_offsetof(s,m)
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3_EX(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SecureFuncName,_SecureDstType,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2,_TType3,_TArg3) _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3);
#define P4_MEM (-11)
#define _Ret_bytecap_(size) _SAL1_1_Source_(_Ret_bytecap_, (size), _Ret1_impl_(__notnull_impl_notref) _Ret1_impl_(__bytecap_impl(size)))
#define VOL_CAP_FMT_2TB_FILESIZE 0x00000800
#define SQLITE_FCNTL_CHUNK_SIZE 6
#define BTREE_WRCSR 0x00000004
#define SQLITE_MAX_WORKER_THREADS 8
#define SQLITE_IOCAP_ATOMIC2K 0x00000008
#define _Pre1_impl_(p1) 
#define __drv_Mode_impl(x) 
#define P_CONTINUED 0x00000080
#define memAboutToChange(P,M) 
#define __drv_out(annotes) _Post_ _Group_(annotes _SAL_nop_impl_)
#define MACH_MSGH_BITS_RAISEIMP 0x20000000U
#define CIRCLEQ_CHECK_PREV(head,elm,field) 
#define MACH_MSG_PRIORITY_UNSPECIFIED (mach_msg_priority_t) 0
#define _Post_count_x_(size) _SAL1_1_Source_(_Post_count_x_, (size), _Post1_impl_(__count_x_impl(size)) _Post_valid_impl_)
#define PARSE_MODE_DECLARE_VTAB 1
#define VQ_UPDATE 0x0100
#define MEMORY_OBJECT_COPY_CALL 1
#define MAP_MEM_POSTED_COMBINED_REORDERED 9
#define OP_VBegin 160
#define SQLITE_IOCAP_ATOMIC4K 0x00000010
#define COALITION_NULL ((coalition_t) 0)
#define DBFLAG_VacuumInto 0x0008
#define __drv_reportError(why) _SAL_L_Source_(__drv_reportError, (why), _Pre_ _SA_annotes1(SAL_error,why))
#define P_OWEUPC 0x00008000
#define __BIGGEST_ALIGNMENT__ 16
#define CTL_HW_NAMES { { 0, 0 }, { "machine", CTLTYPE_STRING }, { "model", CTLTYPE_STRING }, { "ncpu", CTLTYPE_INT }, { "byteorder", CTLTYPE_INT }, { "physmem", CTLTYPE_INT }, { "usermem", CTLTYPE_INT }, { "pagesize", CTLTYPE_INT }, { "disknames", CTLTYPE_STRUCT }, { "diskstats", CTLTYPE_STRUCT }, { "epoch", CTLTYPE_INT }, { "floatingpoint", CTLTYPE_INT }, { "machinearch", CTLTYPE_STRING }, { "vectorunit", CTLTYPE_INT }, { "busfrequency", CTLTYPE_INT }, { "cpufrequency", CTLTYPE_INT }, { "cachelinesize", CTLTYPE_INT }, { "l1icachesize", CTLTYPE_INT }, { "l1dcachesize", CTLTYPE_INT }, { "l2settings", CTLTYPE_INT }, { "l2cachesize", CTLTYPE_INT }, { "l3settings", CTLTYPE_INT }, { "l3cachesize", CTLTYPE_INT }, { "tbfrequency", CTLTYPE_INT }, { "memsize", CTLTYPE_QUAD }, { "availcpu", CTLTYPE_INT }, { "target", CTLTYPE_STRING }, { "product", CTLTYPE_STRING }, }
#define PTRDIFF_MIN INTPTR_MIN
#define sa_handler __sigaction_u.__sa_handler
#define LONG_MAX 2147483647L
#define _Pre_valid_cap_x_(size) _SAL1_1_Source_(_Pre_valid_cap_x_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__cap_x_impl(size)) _Pre_valid_impl_)
#define MACH_VM_MAX_ADDRESS ((mach_vm_offset_t) MACH_VM_MAX_ADDRESS_RAW)
#define VM_PURGABLE_DEBUG_SHIFT 12
#define _SC_THREAD_DESTRUCTOR_ITERATIONS 85
#define SLIST_HEAD_INITIALIZER(head) { NULL }
#define sqlite3_column_table_name16 0
#define MEMORY_OBJECT_ATTR_INFO_COUNT ((mach_msg_type_number_t) (sizeof(memory_object_attr_info_data_t)/sizeof(int)))
#define TK_SPACE 177
#define __inout_opt _SAL1_Source_(__inout_opt, (), _Inout_opt_)
#define TK_DATABASE 38
#define __INTMAX_TYPE__ long int
#define SQLITE_CONSTRAINT_PRIMARYKEY (SQLITE_CONSTRAINT | (6<<8))
#define NC_IsCheck 0x0004
#define _IN_ADDR_T 
#define VM_INHERIT_DONATE_COPY ((vm_inherit_t) 3)
#define __pure 
#define WO_GE (WO_EQ<<(TK_GE-TK_EQ))
#define MACH_EXCEPTION_MASK (MACH_EXCEPTION_CODES | MACH_EXCEPTION_ERRORS)
#define __inout_ecount_nz_opt(size) _SAL1_Source_(__inout_ecount_nz_opt, (size), __inout_ecount_opt(size))
#define SCHEMA_TABLE(x) ((!OMIT_TEMPDB)&&(x==1)?TEMP_MASTER_NAME:MASTER_NAME)
#define A_GETEXPAFTER 43
#define UNIXVFS(VFSNAME,FINDER) { 3, sizeof(unixFile), MAX_PATHNAME, 0, VFSNAME, (void*)&FINDER, unixOpen, unixDelete, unixAccess, unixFullPathname, unixDlOpen, unixDlError, unixDlSym, unixDlClose, unixRandomness, unixSleep, unixCurrentTime, unixGetLastError, unixCurrentTimeInt64, unixSetSystemCall, unixGetSystemCall, unixNextSystemCall, }
#define __FLT32_HAS_INFINITY__ 1
#define _Has_lock_kind_(n) 
#define AUDIT_CTLMODE_NORMAL ((unsigned char)1)
#define VM_MEMORY_FOUNDATION 41
#define CPF_OVERWRITE 0x0001
#define SQLITE_IOCAP_ATOMIC8K 0x00000020
#define __APPLE_API_UNSTABLE 
#define _Out_z_bytecap_c_(size) _SAL1_1_Source_(_Out_z_bytecap_c_, (size), _Pre_bytecap_c_(size) _Post_valid_impl_ _Post_z_)
#define LOCK_SH 0x01
#define _PC_XATTR_SIZE_BITS 26
#define _CS_XBS5_LPBIG_OFFBIG_CFLAGS 32
#define _CS_XBS5_ILP32_OFFBIG_CFLAGS 24
#define KERN_INVALID_MEMORY_CONTROL 34
#define MACH_RCV_IN_PROGRESS_TIMED 0x10004011
#define ATTRIBUTE_SET_INIT(a) do {(a)->commonattr = (a)->volattr = (a)->dirattr = (a)->fileattr = (a)->forkattr = 0; } while(0)
#define HOST_LOCKD_PORT (5 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define ITIMER_PROF 2
#define _PC_CHOWN_RESTRICTED 7
#define SQLITE_MUTEX_STATIC_VFS3 13
#define SQLITE_IGNORE 2
#define host_set_dynamic_pager_port(host,port) (host_set_special_port((host), HOST_DYNAMIC_PAGER_PORT, (port)))
#define _SC_SIGQUEUE_MAX 51
#define __INT64_MAX__ 0x7fffffffffffffffLL
#define OS_NOT_TAIL_CALLED 
#define SQLITE_DEFAULT_SECTOR_SIZE 4096
#define _sys_errlist (__sys_errlist())
#define __deref 
#define CPU_SUBTYPE_CELERON CPU_SUBTYPE_INTEL(7, 6)
#define HAVE_READLINK 1
#define TASK_MAX_SPECIAL_PORT TASK_RESOURCE_NOTIFY_PORT
#define sqlite3Toupper(x) ((x)&~(sqlite3CtypeMap[(unsigned char)(x)]&0x20))
#define __has_lock_property(kind) 
#define SAL_VERSION_SAL2(_A) _SAL_VERSION_SAL2(_A)
#define NOTE_FFLAGSMASK 0x00ffffff
#define SQLITE_SHM_UNLOCK 1
#define KERN_RAGEVNODE 68
#define __INTPTR_WIDTH__ 64
#define TASK_BASIC_INFO_64_2 18
#define osMremap ((void*(*)(void*,size_t,size_t,int,...))aSyscall[24].pCurrent)
#define OS_ENUM(_name,_type,...) typedef _type _name ##_t; enum { __VA_ARGS__ }
#define CURTYPE_BTREE 0
#define __deref_opt_inout_xcount_full_opt(size) _SAL1_Source_(__deref_opt_inout_scount_full_opt, (size), __deref_inout_xcount_full_opt(size) __exceptthat __maybenull)
#define __drv_unit(p) typedef int ___drv_unit_ ##p __GENSYM(__prefast_flag_kernel_driver_mode);
#define MAP_MEM_GRAB_SECLUDED 0x008000
#define LONG_MIN (-2147483647L - 1)
#define UNUSED_PARAMETER(x) (void)(x)
#define TARGET_CPU_ARM64 1
#define _Pre_writable_size_(s) _Pre_ _Writable_elements_(s)
#define _Pre_ptrdiff_cap_(ptr) _SAL1_1_Source_(_Pre_ptrdiff_cap_, (ptr), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__cap_x_impl(__ptrdiff(ptr))))
#define HOST_VM_INFO64_COUNT ((mach_msg_type_number_t) (sizeof(vm_statistics64_data_t)/sizeof(integer_t)))
#define MPG_FLAGS_MOD_REFS_PINNED_DEALLOC (0x01ull << 56)
#define TK_END 11
#define CTL_MAXNAME 12
#define host_set_io_master_port(host,port) (KERN_INVALID_ARGUMENT)
#define _XBS5_LP64_OFF64 __LP64_OFF64
#define SQLITE_CONFIG_MEMSTATUS 9
#define SQLITE_TESTCTRL_IMPOSTER 25
#define KERN_CLOCKRATE 12
#define _PC_MIN_HOLE_SIZE 27
#define HOST_VM_INFO_COUNT ((mach_msg_type_number_t) (sizeof(vm_statistics_data_t)/sizeof(integer_t)))
#define CPU_SUBTYPE_I860_ALL ((cpu_subtype_t) 0)
#define __out_ecount_part_z(size,length) _SAL1_Source_(__out_ecount_part_z, (size,length), __out_ecount_part(size,length) __post __nullterminated)
#define HAVE_FCHOWN 1
#define _Outptr_result_bytebuffer_maybenull_(s) 
#define __LDBL_HAS_DENORM__ 1
#define KERN_THALTSTACK 63
#define SQLITE_READONLY_DIRECTORY (SQLITE_READONLY | (6<<8))
#define MACH_RCV_SYNC_PEEK 0x00008000
#define OP_Close 117
#define KERN_MAXFILES 7
#define __vcrt_calloc_normal(_Count,_Size) calloc(_Count, _Size)
#define _DHUGE_EXP (int)(_DMAX * 900L / 1000)
#define __deref_inout_ecount_full(size) _SAL1_Source_(__deref_inout_ecount_full, (size), __deref_inout_ecount_part(size,size))
#define P_DIRTY_IS_DIRTY (P_DIRTY | P_DIRTY_SHUTDOWN)
#define CPU_SUBTYPE_ARM_V7EM ((cpu_subtype_t) 16)
#define _MACH_VM_ATTRIBUTES_H_ 
#define __deref_inout_ecount_z(size) _SAL1_Source_(__deref_inout_ecount_z, (size), __deref_inout_ecount(size) __pre __deref __nullterminated __post __deref __nullterminated)
#define HOST_SEMAPHORE_TRAPS 7
#define SIGABRT 6
#define __deref_opt_inout_opt _SAL1_Source_(__deref_opt_inout_opt, (), __deref_inout_opt __pre_except_maybenull)
#define AUDIT_TRIGGER_LOW_SPACE 1
#define TARGET_RT_64_BIT 1
#define NC_Complex 0x2000
#define __transfer(formal) _SAL_L_Source_(__transfer, (src_sym), _Post_ __inner_transfer(formal))
#define _Deref_prepost_opt_valid_bytecap_(size) _SAL1_1_Source_(_Deref_prepost_opt_valid_bytecap_, (size), _Deref_pre_opt_valid_bytecap_(size) _Deref_post_opt_valid_bytecap_(size))
#define __in_nz_opt _SAL1_Source_(__in_nz_opt, (), __in_opt)
#define _Deref_out_bound_impl_ 
#define __post_nullnullterminated _SAL1_Source_(__post_nullnullterminated, (), _Post_ __inexpressible_readableTo("string terminated by two nulls") _Post_ __nullterminated)
#define OP_IntCopy 80
#define _Const_ 
#define __weak 
#define _SC_IPV6 118
#define SQLITE_READONLY_CANTINIT (SQLITE_READONLY | (5<<8))
#define _SC_MONOTONIC_CLOCK 74
#define MACH_RCV_PORT_DIED 0x10004009
#define TASK_EXC_GUARD_MP_ONCE 0x20
#define _wenviron (*__p__wenviron())
#define THR_ACT_NULL ((thread_act_t) 0)
#define __FLT64_MAX__ 1.79769313486231570814527423731704357e+308F64
#define _VCRTIMP_PURE _VCRTIMP
#define _Field_size_full_opt_(s) 
#define _Out_opt_z_bytecap_x_(size) _SAL1_1_Source_(_Out_opt_z_bytecap_x_, (size), _Pre_opt_bytecap_x_(size) _Post_valid_impl_ _Post_z_)
#define _Deref_pre_opt_cap_c_(size) _SAL1_1_Source_(_Deref_pre_opt_cap_c_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre1_impl_(__cap_c_impl(size)))
#define NOTE_EXIT_MEMORY 0x00020000
#define __FLT16_DECIMAL_DIG__ 5
#define __OS_ENUM_ATTR_CLOSED 
#define OP_Delete 123
#define _SYS_STAT_H_ 
#define KEYINFO_ORDER_BIGNULL 0x02
#define sqlite3Isalpha(x) (sqlite3CtypeMap[(unsigned char)(x)]&0x02)
#define __out_z_opt _SAL1_Source_(__out_z_opt, (), __post __valid __refparam __post __nullterminated __pre_except_maybenull)
#define _Analysis_assume_lock_held_(e) 
#define host_get_chud_port(host,port) host_get_launchctl_port(host, port)
#define _O_RDWR 0x0002
#define TASK_SECURITY_TOKEN_COUNT ((mach_msg_type_number_t) (sizeof(security_token_t) / sizeof(natural_t)))
#define _Inout_opt_z_cap_c_(size) _SAL1_1_Source_(_Inout_opt_z_cap_c_, (size), _Pre_opt_z_cap_c_(size) _Post_z_)
#define SQLITE_CANTOPEN_NOTEMPDIR (SQLITE_CANTOPEN | (1<<8))
#define TK_CREATE 17
#define MACH_SEND_INVALID_DEST 0x10000003
#define _Pre_equal_to_(e) 
#define timerisset(tvp) ((tvp)->tv_sec || (tvp)->tv_usec)
#define TASK_THREAD_TIMES_INFO_COUNT ((mach_msg_type_number_t) (sizeof(task_thread_times_info_data_t) / sizeof(natural_t)))
#define EV_ONESHOT 0x0010
#define __drv_neverHold(kind) _SAL1_1_Source_(__drv_neverHold, (kind), _Requires_lock_not_held_(_Curr_))
#define VOL_CAP_FMT_VOL_GROUPS 0x01000000
#define VOL_CAP_FMT_HARDLINKS 0x00000004
#define __inner_transfer(formal) 
#define __DARWIN_C_FULL 900000L
#define MACH_MSG_GUARD_FLAGS_NONE 0x0000
#define __CLRCALL_PURE_OR_CDECL __cdecl
#define TERM_OR_OK 0x40
#define _Use_decl_annotations_ 
#define roundup(x,y) ((((x) % (y)) == 0) ? (x) : ((x) + ((y) - ((x) % (y)))))
#define _Prepost_count_(size) _SAL1_1_Source_(_Prepost_count_, (size), _Pre_count_(size) _Post_count_(size))
#define _UINT32_T 
#define _PC_PIPE_BUF 6
#define host_get_host_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_PORT, (port)))
#define _MACH_VM_INHERIT_H_ 
#define BTALLOC_ANY 0
#define _Pre_bytecap_c_(size) _SAL1_1_Source_(_Pre_bytecap_c_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__bytecap_c_impl(size)))
#define _SC_XOPEN_LEGACY 110
#define TF_HasStat1 0x0010
#define BTREE_BLOBKEY 2
#define KERN_ALREADY_IN_SET 11
#define _Post_valid_ _Post_ _Valid_
#define SQLITE_THREADS_IMPLEMENTED 1
#define LIST_INSERT_AFTER(listelm,elm,field) do { LIST_CHECK_NEXT(listelm, field); if ((LIST_NEXT((elm), field) = LIST_NEXT((listelm), field)) != NULL) LIST_NEXT((listelm), field)->field.le_prev = &LIST_NEXT((elm), field); LIST_NEXT((listelm), field) = (elm); (elm)->field.le_prev = &LIST_NEXT((listelm), field); } while (0)
#define TK_PLUS 103
#define _Acquires_nonreentrant_lock_(e) 
#define renameTokenCheckAll(x,y) 
#define MEMTYPE_HEAP 0x01
#define ATTR_FILE_DEVTYPE 0x00000020
#define __FLT64X_MANT_DIG__ 113
#define POLICY_TIMESHARE 1
#define MACH_PORT_RIGHT_NUMBER ((mach_port_right_t) 6)
#define _Out_opt_cap_post_count_(cap,count) _SAL1_1_Source_(_Out_opt_cap_post_count_, (cap,count), _Pre_opt_cap_(cap) _Post_valid_impl_ _Post_count_(count))
#define ENOTEMPTY 41
#define _FSFILCNT_T 
#define __SIZEOF_WINT_T__ 4
#define CPU_SUBTYPE_MIPS_R3000 ((cpu_subtype_t) 7)
#define PINOD 8
#define SQLITE_FUNC_MINMAX 0x1000
#define _Outref_result_bytebuffer_to_(s,c) 
#define _Deref_out_range_impl_(min,max) 
#define AUDIT_EXPIRE_OP_AND ((unsigned char)0)
#define _Deref_pre_opt_valid_bytecap_c_(size) _SAL1_1_Source_(_Deref_pre_opt_valid_bytecap_c_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre1_impl_(__bytecap_c_impl(size)) _Pre_valid_impl_)
#define EP_DblQuoted 0x000040
#define INT32_MIN (-2147483647i32 - 1)
#define __ARM_FEATURE_UNALIGNED 1
#define __LONG_LONG_WIDTH__ 64
#define _Null_terminated_ 
#define _SYS_OPEN 20
#define SQLITE_DBSTATUS_LOOKASIDE_USED 0
#define _Valid_impl_ 
#define __CRT_WIDE(_String) L ## _String
#define WO_AND 0x0400
#define VM_MEMORY_MACH_MSG 20
#define _Deref_ret_z_ _SAL1_1_Source_(_Deref_ret_z_, (), _Deref_ret1_impl_(__notnull_impl_notref) _Deref_ret1_impl_(__zterm_impl))
#define _Deref_pre_opt_bytecap_(size) _SAL1_1_Source_(_Deref_pre_opt_bytecap_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre1_impl_(__bytecap_impl(size)))
#define dbtob(db,devBlockSize) ((unsigned)(db) * devBlockSize)
#define __deref_opt_in_ecount(size) _SAL1_Source_(__deref_opt_in_ecount, (size), __deref_in_ecount(size) __exceptthat __maybenull)
#define __drv_clearDoInit(yesNo) _SAL1_1_Source_(__drv_clearDoInit, (yesNo), _Kernel_clear_do_init_(yesNo))
#define EXC_MASK_SYSCALL (1 << EXC_SYSCALL)
#define IsWindowFunc(p) ( ExprHasProperty((p), EP_WinFunc) && p->y.pWin->eFrmType!=TK_FILTER )
#define DB_SchemaLoaded 0x0001
#define SQLITE_FCNTL_FILE_POINTER 7
#define KERN_PROC_RUID 6
#define SQLITE_LoadExtFunc 0x00020000
#define _Deref_pre_opt_valid_ _SAL1_1_Source_(_Deref_pre_opt_valid_, (), _Deref_pre1_impl_(__maybenull_impl_notref) _Pre_valid_impl_)
#define isnan(_Val) (fpclassify(_Val) == FP_NAN)
#define KERN_KDEFLAGS 1
#define __IDSTRING(name,string) static const char name[] __used = string
#define _Out_opt_ 
#define CTLFLAG_MASKED 0x04000000
#define SQLITE_SOURCE_ID "2019-10-10 20:19:45 18db032d058f1436ce3dea84081f4ee5a0f2259ad97301d43c426bc7f3df1b0b"
#define _SC_XOPEN_XCU_VERSION 121
#define _CS_POSIX_V6_LPBIG_OFFBIG_LIBS 13
#define MEMORY_OBJECT_PERFORMANCE_INFO 11
#define __FLT128_HAS_INFINITY__ 1
#define _MAX_U64TOSTR_BASE2_COUNT (64 + 1)
#define __DARWIN_NULL ((void *)0)
#define OP_ShiftRight 102
#define _Deref_pre_valid_cap_(size) _SAL1_1_Source_(_Deref_pre_valid_cap_, (size), _Deref_pre1_impl_(__notnull_impl_notref) _Deref_pre1_impl_(__cap_impl(size)) _Pre_valid_impl_)
#define TK_BEFORE 33
#define KERN_HOSTNAME 10
#define _Deref_post_opt_bytecap_(size) _SAL1_1_Source_(_Deref_post_opt_bytecap_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post1_impl_(__bytecap_impl(size)))
#define F_GETOWN 5
#define TASK_BASE_THROUGHPUT_QOS_POLICY 11
#define WHERE_OR_SUBCLAUSE 0x0020
#define _Ret_range_(l,h) 
#define KERN_DENIED 53
#define p_back p_un.p_st1.__p_back
#define _Deref_prepost_bytecount_x_(size) _SAL1_1_Source_(_Deref_prepost_bytecount_x_, (size), _Deref_pre_bytecount_x_(size) _Deref_post_bytecount_x_(size))
#define PAGER_GET_NOCONTENT 0x01
#define OP_VDestroy 162
#define SQLITE_STATUS_MEMORY_USED 0
#define _Post_z_count_c_(size) _SAL1_1_Source_(_Post_z_count_c_, (size), _Post2_impl_(__zterm_impl,__count_c_impl(size)) _Post_valid_impl_)
#define _SC_XBS5_LPBIG_OFFBIG 125
#define EXC_ARM_FP_UNDEFINED 0
#define USER_EXPR_NEST_MAX 7
#define _Null_impl_ 
#define timerclear(tvp) (tvp)->tv_sec = (tvp)->tv_usec = 0
#define _Out_z_cap_c_(size) _SAL1_1_Source_(_Out_z_cap_c_, (size), _Pre_cap_c_(size) _Post_valid_impl_ _Post_z_)
#define TK_COLLATE 109
#define MNT_LOCAL 0x00001000
#define VQ_QUOTA 0x1000
#define CPUFAMILY_INTEL_IVYBRIDGE 0x1f65e835
#define SQLITE_MUTEX_STATIC_MASTER 2
#define _SYS_QOS_H 
#define NBBY __DARWIN_NBBY
#define AGGREGATE2(zName,nArg,arg,nc,xStep,xFinal,extraFlags) {nArg, SQLITE_UTF8|(nc*SQLITE_FUNC_NEEDCOLL)|extraFlags, SQLITE_INT_TO_PTR(arg), 0, xStep,xFinal,xFinal,0,#zName, {0}}
#define FASYNC O_ASYNC
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2,_TType3,_TArg3) __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName ##_s, _DstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3)
#define MAP_NOCACHE 0x0400
#define _At_(t,a) 
#define MACH_ACTIVITY_ID_COUNT_MAX 16
#define LIST_CHECK_NEXT(elm,field) 
#define __FLT64X_HAS_QUIET_NAN__ 1
#define SQLITE_TESTCTRL_RESULT_INTREAL 27
#define __RETURN_POLICY_DST(_FunctionCall) 
#define IN_INDEX_MEMBERSHIP 0x0002
#define _SC_MQ_OPEN_MAX 46
#define BTS_EXCLUSIVE 0x0040
#define sqlite3VdbeVerifyNoMallocRequired(A,B) 
#define HUGE_VAL ((double)INFINITY)
#define TK_INTO 146
#define MACH_VOUCHER_ATTR_CONTROL_FLAGS_NONE ((mach_voucher_attr_control_flags_t)0)
#define _Kernel_requires_resource_held_(k) 
#define _MACH_ARM_KERN_RETURN_H_ 
#define SQLITE_CONFIG_STMTJRNL_SPILL 26
#define _Analysis_assume_ 
#define SQLITE_CONSTRAINT_VTAB (SQLITE_CONSTRAINT | (9<<8))
#define STAILQ_HEAD_INITIALIZER(head) { NULL, &(head).stqh_first }
#define MACH_SEND_ALWAYS 0x00010000
#define SQLITE_DROP_TEMP_TRIGGER 14
#define sqlite3ParserARG_STORE 
#define CPU_TYPE_MC680x0 ((cpu_type_t) 6)
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
#define _Deref_ret1_impl_(p1) 
#define __IOS_DEPRECATED(_start,_dep,_msg) 
#define ENETRESET 117
#define A_GETCLASS 22
#define __FLT_EVAL_METHOD_C99__ 0
#define _POSIX_JOB_CONTROL 200112L
#define VOL_CAP_FMT_NO_VOLUME_SIZES 0x00008000
#define _Outptr_opt_result_buffer_all_maybenull_(size) _SAL2_Source_(_Outptr_opt_result_buffer_all_maybenull_, (size), _Out_opt_impl_ _Deref_post2_impl_(__maybenull_impl_notref, __count_impl(size)))
#define _Pre_opt_bytecount_c_(size) _SAL1_1_Source_(_Pre_opt_bytecount_c_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__bytecount_c_impl(size)) _Pre_valid_impl_)
#define __drv_arg(expr,annotes) _At_(expr,annotes)
#define LIST_HEAD_INITIALIZER(head) { NULL }
#define __FLT32X_EPSILON__ 2.22044604925031308084726333618164062e-16F32x
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_4(x) 
#define MACH_RCV_INVALID_REPLY 0x10004012
#define TRIGGER_AFTER 2
#define MACH_SEND_NOIMPORTANCE 0x00040000
#define _Deref_pre_opt_cap_x_(size) _SAL1_1_Source_(_Deref_pre_opt_cap_x_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre1_impl_(__cap_x_impl(size)))
#define _Out_z_cap_post_count_(cap,count) _SAL1_1_Source_(_Out_z_cap_post_count_, (cap,count), _Pre_cap_(cap) _Post_valid_impl_ _Post_z_count_(count))
#define S_IFREG 0100000
#define USEC_PER_SEC 1000000ull
#define __MAC_10_10 101000
#define __FLT64_MIN_EXP__ (-1021)
#define MAC_OS_X_VERSION_10_11_2 101102
#define KERN_BOOTFILE 28
#define HOST_VM_INFO64 4
#define SLIST_EMPTY(head) ((head)->slh_first == NULL)
#define __MAC_OS_X_VERSION_MIN_REQUIRED __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__
#define MEMORY_OBJECT_DATA_FLUSH 0x1
#define MEMORY_OBJECT_CONTROL_NULL ((memory_object_control_t) 0)
#define PROC_FLAG_ADAPTIVE 0x100000
#define __SWIFT_UNAVAILABLE_MSG(_msg) 
#define HOST_AUDIT_CONTROL_PORT (2 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define BTREE_AUTOVACUUM_FULL 1
#define _Deref_post_opt_valid_ _SAL1_1_Source_(_Deref_post_opt_valid_, (), _Deref_post1_impl_(__maybenull_impl_notref) _Post_valid_impl_)
#define MAXDOMNAMELEN 256
#define _Inout_opt_z_cap_x_(size) _SAL1_1_Source_(_Inout_opt_z_cap_x_, (size), _Pre_opt_z_cap_x_(size) _Post_z_)
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define _MSVCR80_FUNCTION(type) type __cdecl
#define _Out_z_cap_m_(mult,size) _SAL1_1_Source_(_Out_z_cap_m_, (mult,size), _Pre_cap_m_(mult,size) _Post_valid_impl_ _Post_z_)
#define BTREE_AUTOVACUUM_INCR 2
#define __MAC_10_14 101400
#define THREAD_THROUGHPUT_QOS_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (thread_throughput_qos_policy_data_t) / sizeof (integer_t)))
#define MSVC_VERSION 0
#define PGHDR_WAL_APPEND 0x040
#define _Deref_pre_valid_cap_c_(size) _SAL1_1_Source_(_Deref_pre_valid_cap_c_, (size), _Deref_pre1_impl_(__notnull_impl_notref) _Deref_pre1_impl_(__cap_c_impl(size)) _Pre_valid_impl_)
#define CPU_SUBTYPE_VAX8800 ((cpu_subtype_t) 11)
#define WAL_RDWR 0
#define sqlite3VdbeIncrWriteCounter(V,C) 
#define __FLT16_MIN_10_EXP__ (-4)
#define PROC_FLAG_IOS_APPLICATION PROC_FLAG_APPLICATION
#define SIOCSIFALTMTU _IOW('i', 69, struct ifreq)
#define TASK_DYLD_INFO_COUNT (sizeof(task_dyld_info_data_t) / sizeof(natural_t))
#define _GrouP_impl_(annos) 
#define ONEPASS_OFF 0
#define TASK_QOS_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (struct task_qos_policy) / sizeof (integer_t)))
#define __notvalid 
#define RE_DUP_MAX 255
#define _Deref_post_z_bytecap_(size) _SAL1_1_Source_(_Deref_post_z_bytecap_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post2_impl_(__zterm_impl,__bytecap_impl(size)) _Post_valid_impl_)
#define EP_MemToken 0x010000
#define __UINT16_MAX__ 0xffff
#define BTCF_AtLast 0x08
#define P_FSTRACE 0
#define _Pre_bytecap_x_(size) _SAL1_1_Source_(_Pre_bytecap_x_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__bytecap_x_impl(size)))
#define __cdecl 
#define EIDRM 111
#define HW_NCPU 3
#define SQLITE_DETERMINISTIC 0x000000800
#define _PC_NAME_MAX 4
#define TK_SPAN 176
#define KERN_VFSNSPACE_HANDLE_PROC 1
#define _In_opt_bytecount_(size) _SAL1_1_Source_(_In_opt_bytecount_, (size), _Pre_opt_bytecount_(size) _Deref_pre_readonly_)
#define OS_TRANSPARENT_UNION __attribute__((__transparent_union__))
#define STAILQ_REMOVE_HEAD_UNTIL(head,elm,field) do { if ((STAILQ_FIRST((head)) = STAILQ_NEXT((elm), field)) == NULL) (head)->stqh_last = &STAILQ_FIRST((head)); } while (0)
#define host_set_node_port(host,port) (host_set_special_port((host), HOST_NODE_PORT, (port)))
#define _Pre_valid_bytecap_(size) _SAL1_1_Source_(_Pre_valid_bytecap_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__bytecap_impl(size)) _Pre_valid_impl_)
#define MEMORY_OBJECT_BEHAVE_INFO_COUNT ((mach_msg_type_number_t) (sizeof(memory_object_behave_info_data_t)/sizeof(int)))
#define CLSIZE 1
#define IN_INDEX_NOOP_OK 0x0001
#define __drv_aliasesMem _SAL_L_Source_(__drv_aliasesMem, (), _Post_ _SA_annotes0(SAL_IsAliased))
#define S_ISWHT(m) (((m) & S_IFMT) == S_IFWHT)
#define sqlite3ConnectionUnlocked(x) 
#define OP_CursorHint 169
#define CC_VARNUM 6
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_SPLITPATH(_ReturnType,_FuncName,_DstType,_Src) 
#define NBPG 4096
#define isunordered(x,y) (_FPCOMPARE(x, y) == 0)
#define NBPW sizeof(int)
#define _Deref_pre_opt_valid_bytecap_x_(size) _SAL1_1_Source_(_Deref_pre_opt_valid_bytecap_x_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre1_impl_(__bytecap_x_impl(size)) _Pre_valid_impl_)
#define CBQSIZE (CBLOCK/NBBY)
#define CPU_THREADTYPE_NONE ((cpu_threadtype_t) 0)
#define P4_DYNAMIC (-7)
#define _POSIX2_PBS_MESSAGE (-1)
#define MACH_PORT_TYPE_DNREQUEST 0x80000000
#define _Inout_opt_z_bytecount_(size) _SAL1_1_Source_(_Inout_opt_z_bytecount_, (size), _Prepost_z_ _Prepost_opt_bytecount_(size))
#define _L1_C 2
#define _SC_JOB_CONTROL 6
#define _SC_REALTIME_SIGNALS 36
#define STAILQ_REMOVE_HEAD(head,field) do { if ((STAILQ_FIRST((head)) = STAILQ_NEXT(STAILQ_FIRST((head)), field)) == NULL) (head)->stqh_last = &STAILQ_FIRST((head)); } while (0)
#define WHERE_AUTO_INDEX 0x00004000
#define SIGEV_THREAD 3
#define MACH_MSGH_BITS_CIRCULAR 0x10000000U
#define __DEFINE_CPP_OVERLOAD_INLINE_NFUNC_0_3_EX(_ReturnType,_ReturnPolicy,_FuncName,_SecureFuncName,_SecureDstType,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2,_TType3,_TArg3) 
#define BYTE_SIZE 8
#define PSPIN 0x800
#define VDBE_OFFSET_LINENO(x) 0
#define SQLITE_AFF_MASK 0x47
#define TK_EXISTS 20
#define VM_MEMORY_MALLOC_MEDIUM 12
#define _IOW(g,n,t) _IOC(IOC_IN, (g), (n), sizeof(t))
#define _NullNull_terminated_ 
#define _UI32_MAX 0xffffffffui32
#define CPU_TYPE_I386 CPU_TYPE_X86
#define __UINT64_C(c) c ## ULL
#define ILL_ILLTRP 2
#define PARSE_MODE_RENAME_TABLE 3
#define SQLITE_LIMIT_EXPR_DEPTH 3
#define _CRTIMP2_FUNCTION(type) _CRTIMP2 type _CRTIMP2_CALLING_CONVENTION
#define SF_MultiValue 0x00400
#define FP_SUBNORMAL _DENORM
#define _SUSECONDS_T 
#define LLONG_MIN (-9223372036854775807i64 - 1)
#define ILL_BADSTK 8
#define OP_CreateBtree 139
#define VM_PURGABLE_ORDERING_MASK (1 << VM_PURGABLE_ORDERING_SHIFT)
#define MACH_MSG_IPC_SPACE 0x00002000
#define SQLITE_TESTCTRL_FIRST 5
#define FIOCLEX _IO('f', 1)
#define VDBE_MAGIC_RUN 0x2df20da3
#define __darwin_arm_thread_state64_get_fp(ts) ((ts).__fp)
#define SF_FIRMLINK 0x00800000
#define _Post_z_count_x_(size) _SAL1_1_Source_(_Post_z_count_x_, (size), _Post2_impl_(__zterm_impl,__count_x_impl(size)) _Post_valid_impl_)
#define OMIT_TEMPDB 0
#define _Out_bound_ _SAL1_1_Source_(_Out_bound_, (), _Out_bound_impl_)
#define SUPERPAGE_NONE 0
#define _CRT_INTERNAL_PRINTF_STANDARD_SNPRINTF_BEHAVIOR (1ULL << 1)
#define _Out_z_cap_x_(size) _SAL1_1_Source_(_Out_z_cap_x_, (size), _Pre_cap_x_(size) _Post_valid_impl_ _Post_z_)
#define VFS_CTL_UMOUNT 0x00010002
#define _Post_same_lock_(e1,e2) 
#define VM_PURGABLE_BEHAVIOR_SHIFT 6
#define MACH_VOUCHER_ATTR_KEY_ALL ((mach_voucher_attr_key_t)~0)
#define HW_AVAILCPU 25
#define DbMaskSet(M,I) (M)|=(((yDbMask)1)<<(I))
#define _CS_XBS5_LP64_OFF64_LIBS 30
#define _Post_ 
#define _CRT_INTERNAL_PRINTF_LEGACY_MSVCRT_COMPATIBILITY (1ULL << 3)
#define _Out_opt_cap_(size) _SAL1_1_Source_(_Out_opt_cap_, (size), _Pre_opt_cap_(size) _Post_valid_impl_)
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define CPUFAMILY_POWERPC_G3 0xcee41549
#define _Ret_writes_maybenull_z_(s) 
#define CPUFAMILY_POWERPC_G5 0xed76d8aa
#define SQLITE_OS_SETUP_H 
#define __DARWIN_1050ALIAS_I(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_64_BIT_INO_T __DARWIN_SUF_UNIX03)
#define AT_IPC_MSG ((unsigned char)1)
#define __deref_inout_bcount_nz(size) _SAL1_Source_(__deref_inout_bcount_nz, (size), __deref_inout_ecount(size))
#define __FLT128_MAX_EXP__ 16384
#define PCACHE1_MIGHT_USE_GROUP_MUTEX 0
#define PTHREAD_MUTEX_NORMAL 0
#define host_set_ktrace_background_port(host,port) (host_set_special_port((host), HOST_KTRACE_BACKGROUND_PORT, (port)))
#define THREAD_TIME_CONSTRAINT_POLICY 2
#define F_GETPATH 50
#define __FUNCTIONW__ _CRT_WIDE(__FUNCTION__)
#define FSOPT_ATTR_CMN_EXTENDED 0x00000020
#define pager_set_pagehash(X) 
#define MACH_RCV_INVALID_TYPE 0x1000400d
#define SQLITE_FUNC_UNLIKELY 0x0400
#define O_EXLOCK 0x00000020
#define FST_EOF (-1)
#define __deref_opt_xcount_opt(size) _SAL1_Source_(__deref_opt_xcount_opt, (size), __deref_xcount_opt(size) __exceptthat __maybenull)
#define MACH_PORT_RECEIVE_STATUS_COUNT ((natural_t) (sizeof(mach_port_status_t)/sizeof(natural_t)))
#define MACH_SEND_MSG_FILTERED 0x10000017
#define __unavailable __attribute__((__unavailable__))
#define VM_PROT_EXECUTE_ONLY (VM_PROT_EXECUTE|VM_PROT_STRIP_READ)
#define EP_Agg 0x000010
#define _Check_return_wat_ 
#define CTLTYPE_STRUCT CTLTYPE_OPAQUE
#define __darwin_arm_thread_state64_get_lr(ts) ((ts).__lr)
#define SV_NODEFER SA_NODEFER
#define MATTR_VAL_DCACHE_FLUSH 7
#define OPFLAG_P2ISREG 0x10
#define IOMETHODS(FINDER,METHOD,VERSION,CLOSE,LOCK,UNLOCK,CKLOCK,SHMMAP) static const sqlite3_io_methods METHOD = { VERSION, CLOSE, unixRead, unixWrite, unixTruncate, unixSync, unixFileSize, LOCK, UNLOCK, CKLOCK, unixFileControl, unixSectorSize, unixDeviceCharacteristics, SHMMAP, unixShmLock, unixShmBarrier, unixShmUnmap, unixFetch, unixUnfetch, }; static const sqlite3_io_methods *FINDER ##Impl(const char *z, unixFile *p){ UNUSED_PARAMETER(z); UNUSED_PARAMETER(p); return &METHOD; } static const sqlite3_io_methods *(*const FINDER)(const char*,unixFile *p) = FINDER ##Impl;
#define OP_Null 73
#define _POSIX_TRACE_INHERIT (-1)
#define OP_AggStep1 155
#define HOST_SCHED_INFO_COUNT ((mach_msg_type_number_t) (sizeof(host_sched_info_data_t)/sizeof(integer_t)))
#define SQLITE_STOREP2 0x20
#define SQLITE_DEFAULT_MMAP_SIZE 0
#define MACH_MSG_TYPE_PORT_SEND MACH_MSG_TYPE_MOVE_SEND
#define OpenCounter(X) 
#define SIOCGIFMETRIC _IOWR('i', 23, struct ifreq)
#define __PTHREAD_MUTEXATTR_SIZE__ 8
#define _SC_SEM_VALUE_MAX 50
#define OP_IfSmaller 33
#define SQLITE_FUNC_HASH_SZ 23
#define VM_MEMORY_RAWCAMERA 79
#define SQLITE_MAX_VDBE_OP 250000000
#define FFSYNC O_FSYNC
#define JT_OUTER 0x0020
#define S_IWRITE S_IWUSR
#define _Ret_opt_cap_c_(size) _SAL1_1_Source_(_Ret_opt_cap_c_, (size), _Ret1_impl_(__maybenull_impl_notref) _Ret1_impl_(__cap_c_impl(size)))
#define __darwin_arm_thread_state64_get_pc(ts) ((ts).__pc)
#define KERN_LOCK_OWNED_SELF 41
#define __FLT16_DIG__ 3
#define __deref_in_ecount_opt(size) _SAL1_Source_(__deref_in_ecount_opt, (size), __deref_in_ecount(size) _Pre_ __deref __exceptthat __maybenull)
#define F_GETPROTECTIONLEVEL 77
#define _OUT_TO_STDERR 1
#define __deref_opt_inout_bcount_part_opt(size,length) _SAL1_Source_(__deref_opt_inout_bcount_part_opt, (size,length), __deref_inout_bcount_part_opt(size,length) __pre_except_maybenull)
#define TK_COLUMN 162
#define _Pre_ptrdiff_count_(ptr) _SAL1_1_Source_(_Pre_ptrdiff_count_, (ptr), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__count_x_impl(__ptrdiff(ptr))) _Pre_valid_impl_)
#define ATTR_CMN_DEVID 0x00000002
#define CURTYPE_SORTER 1
#define SIG_UNBLOCK 2
#define SQLITE_CONSTRAINT_FOREIGNKEY (SQLITE_CONSTRAINT | (3<<8))
#define HOST_EXTMOD_INFO64_LATEST_COUNT HOST_EXTMOD_INFO64_COUNT
#define MACH_RCV_TRAILER_CTX 4
#define TK_ILLEGAL 178
#define sqlite3CodecQueryParameters(A,B,C) 0
#define HOST_INFO_MAX (1024)
#define _Inout_updates_bytes_to_(s,c) 
#define _Deref_opt_out_opt_ _SAL1_1_Source_(_Deref_opt_out_opt_, (), _Out_opt_ _Deref_post_opt_valid_)
#define _POSIX_MEMLOCK (-1)
#define USER_TZNAME_MAX 20
#define SQLITE_DBSTATUS_DEFERRED_FKS 10
#define __deref_bcount_opt(size) _SAL1_Source_(__deref_bcount_opt, (size), __deref_bcount(size) __post_deref_except_maybenull)
#define wsdPrng sqlite3Prng
#define VOL_CAP_FMT_CASE_SENSITIVE 0x00000100
#define SUB_MACH_TIMESPEC(t1,t2) do { if (((t1)->tv_nsec -= (t2)->tv_nsec) < 0) { (t1)->tv_nsec += (long) NSEC_PER_SEC; (t1)->tv_sec -= 1; } (t1)->tv_sec -= (t2)->tv_sec; } while (0)
#define __ARM_64BIT_STATE 1
#define __darwin_arm_thread_state64_get_sp(ts) ((ts).__sp)
#define SQLITE_FCNTL_TRACE 19
#define VM_MEMORY_ACCELERATE 75
#define SIOCSHIWAT _IOW('s', 0, int)
#define FTS5_TOKENIZE_DOCUMENT 0x0004
#define _Out_writes_z_(s) 
#define KERN_RPC_CONTINUE_ORPHAN 45
#define BYTE_ORDER __DARWIN_BYTE_ORDER
#define REALTIME_CLOCK 0
#define __DARWIN_NO_LONG_LONG 0
#define _Out_bytecapcount_(capcount) _SAL1_1_Source_(_Out_bytecapcount_, (capcount), _Pre_bytecap_(capcount) _Post_valid_impl_ _Post_bytecount_(capcount))
#define OPFLAG_FORDELETE 0x08
#define VM_MEMORY_SWIFT_METADATA 83
#define M16KCLBYTES (1 << M16KCLSHIFT)
#define TASK_BASIC2_INFO_32 6
#define __PTHREAD_RWLOCK_SIZE__ 192
#define CPU_SUBTYPE_X86_64_ALL ((cpu_subtype_t)3)
#define EINVAL 22
#define MNT_NODEV 0x00000010
#define _Unchanged_(e) _SAL2_Source_(_Unchanged_, (e), _At_(e, _Post_equal_to_(_Old_(e)) _Const_))
#define CPU_SUBTYPE_MULTIPLE ((cpu_subtype_t) -1)
#define arm_thread_state64_set_pc_fptr(ts,fptr) __darwin_arm_thread_state64_set_pc_fptr(ts, fptr)
#define RAND_MAX 0x7fff
#define PAGER_STAT_SPILL 3
#define WRITE_UTF8(zOut,c) { if( c<0x00080 ){ *zOut++ = (u8)(c&0xFF); } else if( c<0x00800 ){ *zOut++ = 0xC0 + (u8)((c>>6)&0x1F); *zOut++ = 0x80 + (u8)(c & 0x3F); } else if( c<0x10000 ){ *zOut++ = 0xE0 + (u8)((c>>12)&0x0F); *zOut++ = 0x80 + (u8)((c>>6) & 0x3F); *zOut++ = 0x80 + (u8)(c & 0x3F); }else{ *zOut++ = 0xF0 + (u8)((c>>18) & 0x07); *zOut++ = 0x80 + (u8)((c>>12) & 0x3F); *zOut++ = 0x80 + (u8)((c>>6) & 0x3F); *zOut++ = 0x80 + (u8)(c & 0x3F); } }
#define SQLITE_IOCAP_ATOMIC512 0x00000002
#define SS_ONSTACK 0x0001
#define _Prepost_opt_count_c_(size) _SAL1_1_Source_(_Prepost_opt_count_c_, (size), _Pre_opt_count_c_(size) _Post_count_c_(size))
#define __deref_opt_inout_ecount_z_opt(size) _SAL1_Source_(__deref_opt_inout_ecount_z_opt, (size), __deref_opt_inout_ecount_opt(size) __pre __deref __nullterminated __post __deref __nullterminated)
#define O_DP_GETRAWENCRYPTED 0x0001
#define __inout_bcount_full_opt(size) _SAL1_Source_(__inout_bcount_full_opt, (size), __inout_bcount_full(size) __pre_except_maybenull)
#define OP_BitOr 100
#define __INT16_MAX__ 0x7fff
#define __field_ecount_full(size) _SAL1_Source_(__field_ecount_full, (size), __field_ecount_part(size,size))
#define CTLFLAG_LOCKED 0x00800000
#define VFS_CTL_NEWADDR 0x00010004
#define __SIZE_TYPE__ long unsigned int
#define P_DIRTY_IDLE_EXIT_ENABLED (P_DIRTY_TRACK|P_DIRTY_ALLOW_IDLE_EXIT)
#define __UINT64_MAX__ 0xffffffffffffffffULL
#define PragFlg_SchemaReq 0x80
#define NOTE_CRITICAL 0x00000020
#define ATTR_VOL_ENCODINGSUSED 0x00010000
#define KERN_KDPIDEX 14
#define __GNUC_WIDE_EXECUTION_CHARSET_NAME "UTF-32LE"
#define SIOCGDRVSPEC _IOWR('i', 123, struct ifdrv)
#define CPU_SUBTYPE_POWERPC_ALL ((cpu_subtype_t) 0)
#define ATTR_VOL_MOUNTFLAGS 0x00004000
#define VM_PURGABLE_STATE_MASK 3
#define VQ_LOWDISK 0x0004
#define USER_POSIX2_C_DEV 12
#define VM_VOLATILE_GROUP_2 (2 << VM_VOLATILE_GROUP_SHIFT)
#define _FSIGN_C(_Val) (((_float_val *)(char*)&(_Val))->_Sh[_F0_C] & _FSIGN)
#define __deref_opt_inout_bcount(size) _SAL1_Source_(__deref_opt_inout_bcount, (size), __deref_inout_bcount(size) __pre_except_maybenull)
#define SQLITE_SCANSTAT_SELECTID 5
#define _Deref_post_opt_bytecap_c_(size) _SAL1_1_Source_(_Deref_post_opt_bytecap_c_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post1_impl_(__bytecap_c_impl(size)))
#define __DARWIN_NOCANCEL(sym) __asm("_" __STRING(sym) __DARWIN_SUF_NON_CANCELABLE)
#define SQLITE_FCNTL_WIN32_GET_HANDLE 29
#define SLOT_4_2_0 0xf01fc07f
#define OP_Variable 76
#define SQLITE_TRACE_CLOSE 0x08
#define MAXPHYSIO MAXPHYS
#define _CS_XBS5_LP64_OFF64_LINTFLAGS 31
#define POLICY_RR_LIMIT_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_rr_limit)/sizeof(integer_t)))
#define _CRTIMP2 
#define _Benign_race_end_ 
#define PAGER_JOURNALMODE_TRUNCATE 3
#define SIOCGIFPHYS _IOWR('i', 53, struct ifreq)
#define PragFlg_NeedSchema 0x01
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_1(x) 
#define _Deref_post_valid_ _SAL1_1_Source_(_Deref_post_valid_, (), _Deref_post1_impl_(__notnull_impl_notref) _Post_valid_impl_)
#define VDBE_MAGIC_DEAD 0x5606c3c8
#define VdbeCoverageAlwaysTaken(v) 
#define EVFILT_WRITE (-2)
#define __inout_bcount_nz(size) _SAL1_Source_(__inout_bcount_nz, (size), __inout_bcount(size))
#define OP_ResetCount 124
#define _CRTIMP2_PURE_CALLING_CONVENTION __cdecl
#define __APPLE_API_STANDARD 
#define OP_AddImm 83
#define SQLITE_TESTCTRL_INTERNAL_FUNCTIONS 17
#define _Pre_valid_bytecap_c_(size) _SAL1_1_Source_(_Pre_valid_bytecap_c_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__bytecap_c_impl(size)) _Pre_valid_impl_)
#define __drv_minIRQL(irql) _SAL1_1_Source_(__drv_minIRQL, (irql), _IRQL_requires_min_(irql))
#define THREAD_INFO_MAX (32)
#define __ARM_ARCH_PROFILE 65
#define __LDBL_EPSILON__ 2.22044604925031308084726333618164062e-16L
#define KEYINFO_ORDER_DESC 0x01
#define _STRUCT_ARM_THREAD_STATE64 struct __darwin_arm_thread_state64
#define _Prepost_opt_count_(size) _SAL1_1_Source_(_Prepost_opt_count_, (size), _Pre_opt_count_(size) _Post_count_(size))
#define AU_CLASS_MASK_RESERVED 0x10000000
#define __deref_opt_inout_bcount_z_opt(size) _SAL1_Source_(__deref_opt_inout_bcount_z_opt, (size), __deref_opt_inout_bcount_opt(size) __pre __deref __nullterminated __post __deref __nullterminated)
#define tkOTHER 2
#define PragTyp_KEY 41
#define SQLITE_FUNC_HASH(C,L) (((C)+(L))%SQLITE_FUNC_HASH_SZ)
#define F_FULLFSYNC 51
#define ATTR_FILE_TOTALSIZE 0x00000002
#define minor(x) ((int32_t)((x) & 0xffffff))
#define TARGET_ABI_USES_IOS_VALUES (!TARGET_CPU_X86_64 || (TARGET_OS_IPHONE && !TARGET_OS_MACCATALYST))
#define __in _SAL1_Source_(__in, (), _In_)
#define _Interlocked_ 
#define SQLITE_DBCONFIG_DEFENSIVE 1010
#define TIOCGETA _IOR('t', 19, struct termios)
#define _LOFF 4
#define SQLITE_CREATE_INDEX 1
#define __FLT32_MAX__ 3.40282346638528859811704183484516925e+38F32
#define EP_Alias 0x400000
#define KERN_OSRELDATE 26
#define __WATCHOS_DEPRECATED(_start,_dep,_msg) 
#define CPU_SUBTYPE_PENTIUM_3_XEON CPU_SUBTYPE_INTEL(8, 2)
#define SQLITE_OPEN_TEMP_JOURNAL 0x00001000
#define _POSIX_V7_LPBIG_OFFBIG __LPBIG_OFFBIG
#define host_set_atm_notification_port(host,port) (host_set_special_port((host), HOST_ATM_NOTIFICATION_PORT, (port)))
#define SQLITE_ECEL_REF 0x04
#define _SYS_PROC_H_ 
#define __requires_no_locks_held 
#define MADV_FREE 5
#define CTLTYPE_OPAQUE 5
#define THREAD_FLAVOR_INSPECT 2
#define MACH_VM_MAX_GPU_CARVEOUT_ADDRESS_RAW 0x0000007000000000ULL
#define _CRTIMP2_PURE_FUNCTION(type) _CRTIMP2_PURE type _CRTIMP2_PURE_CALLING_CONVENTION
#define TRANS_NONE 0
#define __deref_opt_out_ecount_part_opt(size,length) _SAL1_Source_(__deref_opt_out_ecount_part_opt, (size,length), __deref_out_ecount_part_opt(size,length) __pre_except_maybenull)
#define __WATCHOS_3_1_1 30101
#define TK_FOR 62
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define KERN_MAXPROC 6
#define TIOCSDTR _IO('t', 121)
#define HOST_PRIORITY_INFO_COUNT ((mach_msg_type_number_t) (sizeof(host_priority_info_data_t)/sizeof(integer_t)))
#define TARGET_OS_MAC 1
#define SQLITE_ABORT_ROLLBACK (SQLITE_ABORT | (2<<8))
#define _Out_opt_z_cap_x_(size) _SAL1_1_Source_(_Out_opt_z_cap_x_, (size), _Pre_opt_cap_x_(size) _Post_valid_impl_ _Post_z_)
#define YYMALLOCARGTYPE u64
#define VM_VOLATILE_GROUP_DEFAULT VM_VOLATILE_GROUP_0
#define AUDIT_WINDATA 0x0020
#define __deref_inout_bcount_part_opt(size,length) _SAL1_Source_(__deref_inout_bcount_part_opt, (size,length), __deref_inout_bcount_part(size,length) __pre_deref_except_maybenull __post_deref_except_maybenull)
#define PARTLY_WITHIN 1
#define _Benign_race_begin_ 
#define OE_Fail 3
#define FFDSYNC O_DSYNC
#define THREAD_PRECEDENCE_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (thread_precedence_policy_data_t) / sizeof (integer_t)))
#define __FLT_EVAL_METHOD_TS_18661_3__ 0
#define KERN_KDGETENTROPY 16
#define LATENCY_QOS_LAUNCH_DEFAULT_TIER LATENCY_QOS_TIER_3
#define OptimizationEnabled(db,mask) (((db)->dbOptFlags&(mask))==0)
#define HASHTABLE_NPAGE_ONE (HASHTABLE_NPAGE - (WALINDEX_HDR_SIZE/sizeof(u32)))
#define INT8_C(x) (x)
#define LOCATE_VIEW 0x01
#define __in_bcount_nz_opt(size) _SAL1_Source_(__in_bcount_nz_opt, (size), __in_bcount_opt(size))
#define SQLITE_CANTOPEN_ISDIR (SQLITE_CANTOPEN | (2<<8))
#define _SC_DELAYTIMER_MAX 45
#define RTLD_MAIN_ONLY ((void *) -5)
#define _Ret_valid_ 
#define _Out_capcount_(capcount) _SAL1_1_Source_(_Out_capcount_, (capcount), _Pre_cap_(capcount) _Post_valid_impl_ _Post_count_(capcount))
#define EBUSY 16
#define SQLITE_SUBTYPE 0x000100000
#define _GID_T 
#define SF_All 0x00002
#define _Pre_opt_bytecap_x_(size) _SAL1_1_Source_(_Pre_opt_bytecap_x_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__bytecap_x_impl(size)))
#define KERN_SYMFILE 37
#define BTREE_DEFAULT_CACHE_SIZE 3
#define _CRT_NOFORCE_MANIFEST 
#define __FLT64_IS_IEC_60559__ 2
#define WHERE_BTM_LIMIT 0x00000020
#define PWAIT 32
#define __FLT32X_MIN_EXP__ (-1021)
#define TK_VECTOR 172
#define WHERE_DISTINCT_NOOP 0
#define MACH_SEND_INVALID_VOUCHER 0x10000005
#define ATTR_FILE_FORKCOUNT 0x00000080
#define _SC_SAVED_IDS 7
#define _INC_VADEFS 
#define SQLITE_TESTCTRL_OPTIMIZATIONS 15
#define _CRT_INT_MAX 2147483647
#define BITVEC_NPTR (BITVEC_USIZE/sizeof(Bitvec *))
#define WO_EQ 0x0002
#define MNT_ROOTFS 0x00004000
#define _MACH_MACHINE_EXCEPTION_H_ 
#define __INT_FAST16_MAX__ 0x7fff
#define HOST_VM_INFO_REV0_COUNT ((mach_msg_type_number_t) (HOST_VM_INFO_REV1_COUNT - 2))
#define VM_BEHAVIOR_DEFAULT ((vm_behavior_t) 0)
#define SQLITE_STDCALL SQLITE_APICALL
#define P4_ADVANCE (-5)
#define SQLITE_CONFIG_SCRATCH 6
#define VM_PURGABLE_NONVOLATILE 0
#define INT_LEAST64_MIN INT64_MIN
#define _TAGLC_ID_DEFINED 
#define _daylight (*__daylight())
#define CPU_SUBTYPE_486SX CPU_SUBTYPE_INTEL(4, 8)
#define WHERE_SORTBYGROUP 0x0200
#define OP_Eq 53
#define __field_bcount_part_opt(size,init) _SAL1_Source_(__field_bcount_part_opt, (size,init), __maybenull __byte_writableTo(size) __byte_readableTo(init))
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
#define _SC_SEMAPHORES 37
#define SQLITE_CALLBACK 
#define MEM_FromBind 0x0040
#define __GCC_ASM_FLAG_OUTPUTS__ 1
#define UINTMAX_MAX UINT64_MAX
#define __drv_preferredFunction(func,why) _SAL_L_Source_(__drv_preferredFunction, (func,why), _Pre_ _SA_annotes2(SAL_preferredFunction, func, why))
#define TK_THEN 154
#define SQLITE_DBCONFIG_ENABLE_TRIGGER 1003
#define PGHDR_DONT_WRITE 0x010
#define _MACH_VOUCHER_TYPES_H_ 
#define first_valueValueFunc noopValueFunc
#define __deref_opt_out_ecount_full(size) _SAL1_Source_(__deref_opt_out_ecount_full, (size), __deref_out_ecount_full(size) __pre_except_maybenull)
#define _Inout_opt_cap_c_(size) _SAL1_1_Source_(_Inout_opt_cap_c_, (size), _Pre_opt_valid_cap_c_(size) _Post_valid_)
#define WO_IS 0x0080
#define SIOCADDMULTI _IOW('i', 49, struct ifreq)
#define _Deref_pre_maybenull_ _SAL1_1_Source_(_Deref_pre_maybenull_, (), _Deref_pre1_impl_(__maybenull_impl_notref))
#define __drv_raisesIRQL _SAL1_1_Source_(__drv_raisesIRQL, (), _IRQL_raises_)
#define SQLITE_EXPERIMENTAL 
#define CPUSUBFAMILY_UNKNOWN 0
#define _Pre_accessible_bytes_when_(context,previousContext,expr) 
#define _CS_POSIX_V6_LP64_OFF64_CFLAGS 8
#define __GNUC_EXECUTION_CHARSET_NAME "UTF-8"
#define __DARWIN_EXTSN_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_EXTSN __DARWIN_SUF_NON_CANCELABLE)
#define PROCESSOR_SET_BASIC_INFO 5
#define MAC_OS_X_VERSION_10_0 1000
#define MAC_OS_X_VERSION_10_2 1020
#define MAC_OS_X_VERSION_10_3 1030
#define MAC_OS_X_VERSION_10_4 1040
#define MAC_OS_X_VERSION_10_5 1050
#define MAC_OS_X_VERSION_10_6 1060
#define MAC_OS_X_VERSION_10_7 1070
#define MAC_OS_X_VERSION_10_8 1080
#define MAC_OS_X_VERSION_10_9 1090
#define KIPC_SOCKBUF_WASTE 2
#define OS_COMPILER_CAN_ASSUME(expr) ((void)(expr))
#define L_INCR SEEK_CUR
#define _Must_inspect_impl_ 
#define TRANS_READ 1
#define MEMORY_OBJECT_COPY_NONE 0
#define SQLITE_NOTICE_RECOVER_ROLLBACK (SQLITE_NOTICE | (2<<8))
#define fpclassify(_Val) (_CLASSIFY(_Val, _fdclass, _dclass, _ldclass))
#define _KEY_T 
#define BTCF_Multiple 0x20
#define MACH_SEND_TOO_LARGE 0x1000000e
#define SRT_Table 14
#define _Deref_post_opt_bytecap_x_(size) _SAL1_1_Source_(_Deref_post_opt_bytecap_x_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post1_impl_(__bytecap_x_impl(size)))
#define LIST_CHECK_HEAD(head,field) 
#define VFS_NUMMNTOPS 1
#define HOST_SECURITY_NULL ((host_security_t) 0)
#define WO_LT (WO_EQ<<(TK_LT-TK_EQ))
#define SRUN 2
#define CPU_SUBTYPE_ITANIUM_2 CPU_SUBTYPE_INTEL(11, 1)
#define __PRAGMA_REDEFINE_EXTNAME 1
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_1_1_EX(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SecureFuncName,_HType1,_HArg1,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1) _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_HType1 _HArg1, _SalAttributeDst _DstType *_Dst, _TType1 _TArg1);
#define SIOCSIFMAC _IOW('i', 131, struct ifreq)
#define SIGEV_NONE 0
#define EXPR_NEST_MAX 32
#define MEM_Subtype 0x8000
#define SI_MESGQ 0x10005
#define _VA_LIST_DEFINED 
#define SQLITE_FUNC_COALESCE 0x0200
#define VOL_CAP_INT_MANLOCK 0x00001000
#define __inner_encoded 
#define CTL_MAXID 9
#define __INT_LEAST16_MAX__ 0x7fff
#define VOL_CAP_FMT_HIDDEN_FILES 0x00002000
#define OP_Divide 106
#define __deref_out_bcount_z(size) _SAL1_Source_(__deref_out_bcount_z, (size), __deref_out_bcount(size) __post __deref __nullterminated)
#define __deref_opt_out_ecount_nz_opt(size) _SAL1_Source_(__deref_opt_out_ecount_nz_opt, (size), __deref_opt_out_ecount_opt(size))
#define EV_FLAG0 0x1000
#define EV_FLAG1 0x2000
#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_SIZE(_DeclSpec,_FuncName,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2) __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_SIZE_EX(_DeclSpec, _FuncName, _FuncName ##_s, _DstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2)
#define _FP_LT 1
#define WHERE_BIGNULL_SORT 0x00080000
#define VM_INHERIT_LAST_VALID VM_INHERIT_NONE
#define WO_OR 0x0200
#define __SIG_ATOMIC_WIDTH__ 32
#define _POSIX2_PBS_TRACK (-1)
#define _Pre_valid_bytecap_x_(size) _SAL1_1_Source_(_Pre_valid_bytecap_x_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__bytecap_x_impl(size)) _Pre_valid_impl_)
#define __INT_LEAST64_TYPE__ long long int
#define MACH_VOUCHER_ATTR_USER_DATA_STORE ((mach_voucher_attr_recipe_command_t)211)
#define __APPLE_API_OBSOLETE 
#define _BSM_AUDIT_H 
#define _O_TEXT 0x4000
#define _MACH_STD_TYPES_H_ 
#define VM_MEMORY_STACK 30
#define VM_MEMORY_ROSETTA_USER_LDT 235
#define _MAX_U64TOSTR_BASE8_COUNT (22 + 1)
#define SQLITE_CONFIG_LOG 16
#define STAILQ_CONCAT(head1,head2) do { if (!STAILQ_EMPTY((head2))) { *(head1)->stqh_last = (head2)->stqh_first; (head1)->stqh_last = (head2)->stqh_last; STAILQ_INIT((head2)); } } while (0)
#define WHERE_BOTH_LIMIT 0x00000030
#define MAXLOGNAME 255
#define TERM_LIKE 0x400
#define _MACHTYPES_H_ 
#define CPU_STATE_MAX 4
#define KERN_FAILURE 5
#define VM_PURGABLE_ORDERING_OBSOLETE (1 << VM_PURGABLE_ORDERING_SHIFT)
#define __deref_bcount(size) _SAL1_Source_(__deref_bcount, (size), _Notref_ __ecount(1) __post _Notref_ __elem_readableTo(1) __post _Notref_ __deref _Notref_ __notnull __post __deref __byte_writableTo(size))
#define __FLT128_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define VM_MEMORY_LIBNETWORK 89
#define __INTPTR_MAX__ 0x7fffffffffffffffL
#define get2byte(x) ((x)[0]<<8 | (x)[1])
#define LIST_HEAD(name,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct name { struct type *lh_first; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define TK_COMMIT 10
#define pager_datahash(X,Y) 0
#define CPU_SUBTYPE_LITTLE_ENDIAN ((cpu_subtype_t) 0)
#define KERN_INVALID_POLICY 28
#define ATTR_CMN_FULLPATH 0x08000000
#define _In_bound_ _SAL1_1_Source_(_In_bound_, (), _In_bound_impl_)
#define _POSIX2_PBS_CHECKPOINT (-1)
#define CIRCLEQ_INIT(head) do { (head)->cqh_first = (void *)(head); (head)->cqh_last = (void *)(head); } while (0)
#define _POSIX2_PBS (-1)
#define OP_SorterOpen 114
#define ntohl(x) __DARWIN_OSSwapInt32(x)
#define MACH_SEND_INVALID_DATA 0x10000002
#define P4_TRANSIENT 0
#define ntohs(x) __DARWIN_OSSwapInt16(x)
#define _STRUCT_ARM_DEBUG_STATE32 struct __darwin_arm_debug_state32
#define HOST_RESOURCE_SIZES_COUNT ((mach_msg_type_number_t) (sizeof(kernel_resource_sizes_data_t)/sizeof(integer_t)))
#define MACH_VOUCHER_NULL ((mach_voucher_t) 0)
#define _Analysis_mode_impl_(mode) _SAL2_Source_(_Analysis_mode_impl_, (mode), _SA_annotes1(SAL_analysisMode, #mode))
#define SIOCSIF6LOWPAN _IOW('i', 196, struct ifreq)
#define INT_FAST64_MIN INT64_MIN
#define __ecount(size) _SAL1_Source_(__ecount, (size), __notnull __elem_writableTo(size))
#define WAL_READ_LOCK(I) (3+(I))
#define _STRUCT_UCONTEXT struct __darwin_ucontext
#define AtomicLoad(PTR) (*(PTR))
#define ROUND8(x) (((x)+7)&~7)
#define __in_z_opt _SAL1_Source_(__in_z_opt, (), _In_opt_z_)
#define OP_Next 5
#define _IOLBF 0x0040
#define BTREE_AUXDELETE 0x04
#define fdatasync fsync
#define THREAD_SCHED_TIMESHARE_INFO 10
#define _Post_impl_ 
#define FPE_FLTINV 5
#define TK_OVER 160
#define MACH_MSG_TYPE_PORT_ANY_SEND(x) (((x) >= MACH_MSG_TYPE_MOVE_SEND) && ((x) <= MACH_MSG_TYPE_MAKE_SEND_ONCE))
#define F_SETLKW 9
#define __DARWIN_WCHAR_MAX __WCHAR_MAX__
#define UNIXFILE_DELETE 0x20
#define OP_IfNot 20
#define __postcond(expr) 
#define KERN_POSIX1 17
#define PragTyp_LOCK_STATUS 42
#define _Deref_pre_count_c_(size) _SAL1_1_Source_(_Deref_pre_count_c_, (size), _Deref_pre1_impl_(__notnull_impl_notref) _Deref_pre1_impl_(__count_c_impl(size)) _Pre_valid_impl_)
#define SQLITE_WindowFunc 0x0002
#define __FLT32_MIN_10_EXP__ (-37)
#define ConstFactorOk(P) ((P)->okConstFactor)
#define __lock_level_order(a,b) 
#define NOTE_LEEWAY 0x00000010
#define _CRTIMP_NOIA64 _CRTIMP
#define VM_PAGE_SIZE vm_page_size
#define O_POPUP 0x80000000
#define SQLITE_CONFIG_SORTERREF_SIZE 28
#define _Deref_pre_cap_(size) _SAL1_1_Source_(_Deref_pre_cap_, (size), _Deref_pre1_impl_(__notnull_impl_notref) _Deref_pre1_impl_(__cap_impl(size)))
#define __FLT32X_DIG__ 15
#define __deref_opt_inout_xcount(size) _SAL1_Source_(__deref_opt_inout_xcount, (size), __deref_inout_xcount(size) __exceptthat __maybenull)
#define SQLITE_MUTEX_RECURSIVE 1
#define __deref_out_bound _SAL_L_Source_(__deref_out_bound, (), _Post_ __deref __inner_bound)
#define ATTR_VOL_SPACEAVAIL 0x00000010
#define _In_z_count_c_(size) _SAL1_1_Source_(_In_z_count_c_, (size), _Pre_z_ _Pre_count_c_(size) _Deref_pre_readonly_)
#define OP_Savepoint 0
#define __PTRDIFF_WIDTH__ 64
#define USER_POSIX2_SW_DEV 17
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3_SIZE_EX(_DeclSpec,_FuncName,_SecureFuncName,_SecureDstType,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2,_TType3,_TArg3) _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec size_t __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3);
#define VM_MAP_MIN_ADDRESS VM_MIN_ADDRESS
#define ENAMETOOLONG 38
#define CPU_SUBTYPE_VAX750 ((cpu_subtype_t) 3)
#define __INT_FAST16_WIDTH__ 16
#define EDEADLOCK EDEADLK
#define __DBL_HAS_QUIET_NAN__ 1
#define OP_NoConflict 27
#define VOL_CAP_INT_RENAME_EXCL 0x00080000
#define _CALL_REPORTFAULT 0x2
#define MACH_MSGH_BITS_VOUCHER(bits) (((bits) & MACH_MSGH_BITS_VOUCHER_MASK) >> 16)
#define MACH_MSG_TYPE_COPY_RECEIVE 22
#define WALINDEX_HDR_SIZE (sizeof(WalIndexHdr)*2+sizeof(WalCkptInfo))
#define THREAD_EXTENDED_INFO 5
#define CPU_SUBTYPE_MIPS_R2000a ((cpu_subtype_t) 4)
#define ISPOWEROF2(X) (((X)&((X)-1))==0)
#define MAC_OS_X_VERSION_10_12_1 101201
#define MAC_OS_X_VERSION_10_12_2 101202
#define MAC_OS_X_VERSION_10_12_4 101204
#define __inout_ecount_part(size,length) _SAL1_Source_(__inout_ecount_part, (size,length), _Inout_updates_to_(size,length))
#define _Outptr_opt_result_bytebuffer_to_(s,c) 
#define O_NONBLOCK 0x00000004
#define TRACE_IDX_INPUTS(A) 
#define etPERCENT 7
#define __DARWIN_LITTLE_ENDIAN 1234
#define __FLT16_MANT_DIG__ 11
#define SQLITE_FCNTL_RBU 26
#define __drv_constant _SAL1_1_Source_(__drv_constant, (), _Literal_)
#define YY_NO_ACTION 1173
#define OP_EndCoroutine 67
#define __WCHAR_TYPE__ int
#define SQLITE_FUNC_SUBTYPE 0x00100000
#define __SIZEOF_FLOAT__ 4
#define A_OLDSETCOND 21
#define _MRTIMP2_CALLING_CONVENTION __cdecl
#define EP_Unlikely 0x040000
#define _Out_z_bytecap_post_bytecount_(cap,count) _SAL1_1_Source_(_Out_z_bytecap_post_bytecount_, (cap,count), _Pre_bytecap_(cap) _Post_valid_impl_ _Post_z_bytecount_(count))
#define NC_IdxExpr 0x0020
#define PRIBIO 16
#define _Deref_post_z_cap_x_(size) _SAL1_1_Source_(_Deref_post_z_cap_x_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post2_impl_(__zterm_impl,__cap_x_impl(size)) _Post_valid_impl_)
#define __pic__ 2
#define SQLITE_STMTSTATUS_SORT 2
#define _VCRT_ALLOCATOR 
#define MACH_MSGH_BITS_COMPLEX 0x80000000U
#define _Accessible_bytes_when_(previousContext,context,expr) 
#define MAP_MEM_IO 2
#define _Deref_pre_bytecount_(size) _SAL1_1_Source_(_Deref_pre_bytecount_, (size), _Deref_pre1_impl_(__notnull_impl_notref) _Deref_pre1_impl_(__bytecount_impl(size)) _Pre_valid_impl_)
#define ROWSET_SORTED 0x01
#define __ARM_ARCH_8A 1
#define TIME_ABSOLUTE 0x00
#define _Inout_opt_cap_x_(size) _SAL1_1_Source_(_Inout_opt_cap_x_, (size), _Pre_opt_valid_cap_x_(size) _Post_valid_)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_1(x) 
#define SQLITE_NoCkptOnClose 0x00000800
#define HOST_SCHED_INFO 3
#define _Deref_post_opt_cap_(size) _SAL1_1_Source_(_Deref_post_opt_cap_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post1_impl_(__cap_impl(size)))
#define _In_opt_ 
#define __API_DEPRECATED_WITH_REPLACEMENT(...) 
#define MACH_VM_MIN_GPU_CARVEOUT_ADDRESS ((mach_vm_offset_t) MACH_VM_MIN_GPU_CARVEOUT_ADDRESS_RAW)
#define P4_NOTUSED 0
#define _APALIGN(t,ap) (__alignof(t))
#define MACH_VOUCHER_ATTR_REDEEM ((mach_voucher_attr_recipe_command_t)10)
#define __FLT32_DECIMAL_DIG__ 9
#define SQLITE_FAIL 3
#define ExprAlwaysTrue(E) (((E)->flags&(EP_FromJoin|EP_IsTrue))==EP_IsTrue)
#define __INT_FAST64_MAX__ 0x7fffffffffffffffLL
#define MAP_MEM_WCOMB 4
#define OS_WEAK_IMPORT __attribute__((__weak_import__))
#define BUFSIZ 512
#define HOST_FAIRPLAYD_PORT (24 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define SIOCSIFMTU _IOW('i', 52, struct ifreq)
#define SQLITE_CREATE_TEMP_TABLE 4
#define SQLITE_BUSY_SNAPSHOT (SQLITE_BUSY | (2<<8))
#define _ACRTIMP_ALT _ACRTIMP
#define __FLT_MAX_10_EXP__ 38
#define __TVOS_DEPRECATED(_start,_dep,_msg) 
#define ATTR_FILE_RSRCALLOCSIZE 0x00002000
#define COLNAME_TABLE 3
#define SQLITE_SO_UNDEFINED -1
#define _Inout_updates_bytes_(s) 
#define _SC_2_PBS 59
#define __DECLARE_CPP_OVERLOAD_INLINE_FUNC_0_1_EX(_ReturnType,_ReturnPolicy,_FuncName,_SecureFuncName,_SecureDstType,_DstType,_Dst,_TType1,_TArg1) _CRT_INSECURE_DEPRECATE(_SecureFuncName) __inline _ReturnType __CRTDECL _FuncName(_DstType *_Dst, _TType1 _TArg1)
#define F_GETPATH_NOFIRMLINK 102
#define KERN_INVALID_SECURITY 35
#define OP_Last 32
#define OP_NullRow 129
#define _CADDR_T 
#define __MACH__ 1
#define _FTSINT_H 
#define VM_REGION_SUBMAP_INFO_V1_COUNT_64 ((mach_msg_type_number_t) (VM_REGION_SUBMAP_INFO_V1_SIZE / sizeof (natural_t)))
#define TK_INTEGER 150
#define ARM_DEBUG_STATE64_COUNT ((mach_msg_type_number_t) (sizeof (arm_debug_state64_t)/sizeof(uint32_t)))
#define __SWIFT_UNAVAILABLE 
#define __deref_opt_out_xcount_part_opt(size,length) _SAL1_Source_(__deref_opt_out_xcount_part_opt, (size,length), __deref_out_xcount_part_opt(size,length) __exceptthat __maybenull)
#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_3_SIZE_EX(_DeclSpec,_FuncName,_SecureFuncName,_SecureDstType,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2,_TType3,_TArg3) _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec size_t __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3);
#define __post_except_maybenull 
#define MNT_DONTBROWSE 0x00100000
#define _SAL_L_Source_(Name,args,annotes) _SA_annotes3(SAL_name, #Name, "", "2") _GrouP_(annotes _SAL_nop_impl_)
#define TK_CASCADE 35
#define getVarint sqlite3GetVarint
#define _LMAX ((unsigned short)0x7fff)
#define S_ISSOCK(m) (((m) & S_IFMT) == S_IFSOCK)
#define TIOCGWINSZ _IOR('t', 104, struct winsize)
#define HOST_CAN_HAS_DEBUGGER_COUNT ((mach_msg_type_number_t) (sizeof(host_can_has_debugger_info_data_t)/sizeof(integer_t)))
#define _U_INT 
#define yyTraceShift(X,Y,Z) 
#define ApplyCostMultiplier(C,T) 
#define MACH_VOUCHER_ATTR_REMOVE ((mach_voucher_attr_recipe_command_t)2)
#define _Pre_notnull_ _Pre_ _Notnull_
#define EXC_RESOURCE 11
#define ___POSIX_C_DEPRECATED_STARTING_199506L 
#define CC_NUL 28
#define ATTR_FILE_RSRCLENGTH 0x00001000
#define ExprClearProperty(E,P) (E)->flags&=~(P)
#define __FLT16_HAS_QUIET_NAN__ 1
#define VM_FLAGS_SUPERPAGE_SIZE_ANY (SUPERPAGE_SIZE_ANY << VM_FLAGS_SUPERPAGE_SHIFT)
#define KERN_MAXFILESPERPROC 29
#define AUDIT_CTLMODE_EXTERNAL ((unsigned char)2)
#define CIRCLEQ_INSERT_AFTER(head,listelm,elm,field) do { CIRCLEQ_CHECK_NEXT(head, listelm, field); (elm)->field.cqe_next = (listelm)->field.cqe_next; (elm)->field.cqe_prev = (listelm); if ((listelm)->field.cqe_next == (void *)(head)) (head)->cqh_last = (elm); else (listelm)->field.cqe_next->field.cqe_prev = (elm); (listelm)->field.cqe_next = (elm); } while (0)
#define disable_simulated_io_errors() 
#define TASK_SCHED_INFO 14
#define CORRUPT_DB (sqlite3Config.neverCorrupt==0)
#define _MACH_KERN_RETURN_H_ 
#define __ANNOTATION(fun) 
#define KERN_LOGSIGEXIT 36
#define _SC_THREAD_PRIORITY_SCHEDULING 89
#define SQLITE_DBCONFIG_WRITABLE_SCHEMA 1011
#define SQLITE_AllOpts 0xffff
#define _MACH_MACHINE_VM_PARAM_H_ 
#define _RSIZE_T 
#define __inout_bcount_z(size) _SAL1_Source_(__inout_bcount_z, (size), __inout_bcount(size) __pre __nullterminated __post __nullterminated)
#define etBUFSIZE SQLITE_PRINT_BUF_SIZE
#define ROWSET_NEXT 0x02
#define EP_xIsSelect 0x000800
#define SQLITE_QueryOnly 0x00100000
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffLL
#define PTHREAD_MUTEX_ERRORCHECK 1
#define VM_LEDGER_TAG_DEFAULT 0x00000001
#define VQ_UNMOUNT 0x0010
#define __range(lb,ub) _SAL_L_Source_(__range, (lb,ub), __inner_range(lb,ub))
#define VM_PAGE_QUERY_PAGE_COPIED 0x20
#define __TVOS_12_1 120100
#define WAL_HDRSIZE 32
#define _XBS5_ILP32_OFFBIG __ILP32_OFFBIG
#define _Inout_opt_z_bytecap_(size) _SAL1_1_Source_(_Inout_opt_z_bytecap_, (size), _Pre_opt_z_bytecap_(size) _Post_z_)
#define SIGKILL 9
#define FNDELAY O_NONBLOCK
#define KERN_CLASSIC KERN_TRANSLATE
#define __LDBL_MIN_EXP__ (-1021)
#define OP_Goto 11
#define VM_PROT_IS_MASK ((vm_prot_t) 0x40)
#define FIONCLEX _IO('f', 2)
#define SQLITE_PAGER_H 
#define IgnorableOrderby(X) ((X->eDest)<=SRT_DistQueue)
#define CPU_TYPE_ARM64 (CPU_TYPE_ARM | CPU_ARCH_ABI64)
#define THREAD_LATENCY_QOS_POLICY 7
#define MACH_MSGH_BITS_SET(remote,local,voucher,other) (MACH_MSGH_BITS_SET_PORTS((remote), (local), (voucher)) | ((other) &~ MACH_MSGH_BITS_PORTS_MASK))
#define TF_Shadow 0x0400
#define SQLITE_BIG_DBL (1e99)
#define TF_Ephemeral 0x0002
#define __AUDIT_API_DEPRECATED __API_DEPRECATED("audit is deprecated", macos(10.4, 11.0))
#define _Ret_writes_bytes_maybenull_(s) 
#define TERM_ORINFO 0x10
#define stdout (__acrt_iob_func(1))
#define SQLITE_IOERR_SHMOPEN (SQLITE_IOERR | (18<<8))
#define __LITTLE_ENDIAN__ 1
#define _Deref_pre_count_x_(size) _SAL1_1_Source_(_Deref_pre_count_x_, (size), _Deref_pre1_impl_(__notnull_impl_notref) _Deref_pre1_impl_(__count_x_impl(size)) _Pre_valid_impl_)
#define VFS_GENERIC 0
#define __INT_LEAST8_MAX__ 0x7f
#define TASK_DEBUG_CONTROL_PORT 10
#define __drv_holdsCriticalRegion() 
#define HOST_RESOURCE_NOTIFY_PORT (20 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define host_set_chud_port(host,port) host_set_launchctl_port(host, port)
#define __FLT32X_MAX_10_EXP__ 308
#define pcacheDump(X) 
#define __crt_typefix(ctype) 
#define USER_BC_STRING_MAX 5
#define pcache1 (GLOBAL(struct PCacheGlobal, pcache1_g))
#define __prefast_operator_new_null 
#define __drv_requiresIRQL(irql) _SAL1_1_Source_(__drv_requiresIRQL, (irql), _IRQL_requires_(irql))
#define MACH_SEND_TIMED_OUT 0x10000004
#define O_RDONLY 0x0000
#define __drv_dispatchType_other _SAL1_1_Source_(__drv_dispatchType_other, (), __drv_dispatchType(IRP_MJ_OTHER))
#define _SC_2_FORT_RUN 22
#define tkSEMI 0
#define VOL_CAP_FMT_PATH_FROM_ID 0x00004000
#define VM_FLAGS_4GB_CHUNK 0x0004
#define ECONNREFUSED 107
#define SQLITE_IDXTYPE_UNIQUE 1
#define KERN_LOCK_OWNED 40
#define DB_ResetWanted 0x0008
#define _SC_ATEXIT_MAX 107
#define DbMaskTest(M,I) (((M)&(((yDbMask)1)<<(I)))!=0)
#define _Pre_opt_valid_cap_c_(size) _SAL1_1_Source_(_Pre_opt_valid_cap_c_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__cap_c_impl(size)) _Pre_valid_impl_)
#define LOCK_SET_NULL ((lock_set_t) 0)
#define host_set_host_port(host,port) (KERN_INVALID_ARGUMENT)
#define __DARWIN_ALIAS(sym) __asm("_" __STRING(sym) __DARWIN_SUF_UNIX03)
#define __FLT128_MIN__ 3.36210314311209350626267781732175260e-4932F128
#define TASK_NULL ((task_t) 0)
#define _PC_ALLOC_SIZE_MIN 16
#define VM_SET_FLAGS_ALIAS(flags,alias) (flags) = (((flags) & ~VM_FLAGS_ALIAS_MASK) | (((alias) & ~VM_FLAGS_ALIAS_MASK) << 24))
#define _LP64 1
#define SQLITE_TESTCTRL_LOCALTIME_FAULT 18
#define __deref_inout_z_opt _SAL1_Source_(__deref_inout_z_opt, (), __deref_inout_opt __pre __deref __nullterminated __post __deref __nullterminated)
#define SQLITE_FUNC_CASE 0x0008
#define SQLITE_SAVEPOINT 32
#define EFBIG 27
#define __FLT64_MAX_EXP__ 1024
#define sqlite3VdbeIOTraceSql(X) 
#define OP_VOpen 163
#define __API_UNAVAILABLE(...) 
#define IOTRACE(A) 
#define __useHeader _Use_decl_anno_impl_
#define POLICY_NULL 0
#define SQLITE_INSERT 18
#define _PTHREAD_H 
#define _Check_return_ 
#define ARM_THREAD_STATE_COUNT ((mach_msg_type_number_t) (sizeof (arm_thread_state_t)/sizeof(uint32_t)))
#define TK_TIES 94
#define _PTHREAD_T 
#define SIOCGIFXMEDIA _IOWR('i', 72, struct ifmediareq)
#define USER_BC_SCALE_MAX 4
#define __deref_xcount(size) _SAL1_Source_(__deref_xcount, (size), __ecount(1) _Post_ __elem_readableTo(1) _Post_ __deref __notnull _Post_ __deref __inexpressible_writableTo(size))
#define OpHelp(X) 
#define HOST_LAUNCHCTL_PORT (9 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define SQLITE_CONFIG_GETMALLOC 5
#define _Post_readable_size_(s) _Post_ _Readable_elements_(s) _Post_ _Valid_
#define _SC_PASS_MAX 131
#define TASK_OVERRIDE_QOS_POLICY 9
#define CLOCK_NULL ((clock_t) 0)
#define __SIZE_WIDTH__ 64
#define _PTRDIFF_T_DEFINED 
#define MB_CUR_MAX ___mb_cur_max_func()
#define O_TRUNC 0x00000400
#define __DARWIN_ALIGN(p) ((__darwin_size_t)((__darwin_size_t)(p) + __DARWIN_ALIGNBYTES) &~ __DARWIN_ALIGNBYTES)
#define __drv_innerMustHoldGlobal(kind,param) _SAL_L_Source_(__drv_innerMustHoldGlobal, (#kind, param\t), _Pre_ _SA_annotes2(SAL_mustHoldGlobal, #kind, param\t))
#define F_DUPFD 0
#define TK_BITNOT 110
#define TK_PRECEDING 88
#define NOTE_EXIT_CSERROR 0x00040000
#define _getchar_nolock() _getc_nolock(stdin)
#define _Maybenull_ 
#define SQLITE_CONSTRAINT_COMMITHOOK (SQLITE_CONSTRAINT | (2<<8))
#define _SC_AIO_MAX 43
#define sqlite3Strlen30NN(C) (strlen(C)&0x3fffffff)
#define _MAX_ITOSTR_BASE2_COUNT (32 + 1)
#define SQLITE_ECEL_DUP 0x01
#define SQLITE_TESTCTRL_PRNG_RESET 7
#define SQLITE_BUSY 5
#define TARGET_OS_TV 0
#define RTLD_DEFAULT ((void *) -2)
#define KERN_SUCCESS 0
#define A_SETCOND 38
#define htons(x) __DARWIN_OSSwapInt16(x)
#define EP_Propagate (EP_Collate|EP_Subquery|EP_HasFunc)
#define VM_FLAGS_ALIAS_MASK 0xFF000000
#define MACH_MSG_TYPE_DISPOSE_SEND 25
#define __DBL_MAX_10_EXP__ 308
#define SV_NOCLDSTOP SA_NOCLDSTOP
#define _Ret_opt_bytecount_c_(size) _SAL1_1_Source_(_Ret_opt_bytecount_c_, (size), _Ret1_impl_(__maybenull_impl_notref) _Ret1_impl_(__bytecount_c_impl(size)) _Ret_valid_impl_)
#define _SC_CHILD_MAX 2
#define _POSIX_MESSAGE_PASSING (-1)
#define SQLITE_ABORT 4
#define MAP_NOEXTEND 0x0100
#define MAP_JIT 0x0800
#define OK_IF_ALWAYS_FALSE(X) (X)
#define OP_SqlExec 140
#define __FLT32_EPSILON__ 1.19209289550781250000000000000000000e-7F32
#define _Null_ 
#define INTMAX_MAX INT64_MAX
#define SQLITE_N_KEYWORD 143
#define MADV_RANDOM POSIX_MADV_RANDOM
#define PTHREAD_ONCE_INIT {_PTHREAD_ONCE_SIG_init, {0}}
#define __DBL_DECIMAL_DIG__ 17
#define msgh_kind msgh_seqno
#define OP_Pagecount 166
#define time_value_add_usec(val,micros) { if (((val)->microseconds += (micros)) >= TIME_MICROS_MAX) { (val)->microseconds -= TIME_MICROS_MAX; (val)->seconds++; } }
#define SQLITE_CONFIG_PCACHE2 18
#define SV_INTERRUPT SA_RESTART
#define _SIZE_T 
#define _SQLITE_OS_H_ 
#define CTLFLAG_NOAUTO 0x02000000
#define _SC_2_PBS_TRACK 64
#define SQLITE_IOCAP_ATOMIC64K 0x00000100
#define SQLITE_LIMIT_COLUMN 2
#define _POSIX2_SW_DEV 200112L
#define __DBL_NORM_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define __deref_opt_out_z _SAL1_Source_(__deref_opt_out_z, (), _Outptr_opt_result_z_)
#define _In_range_(l,h) 
#define PragTyp_COMPILE_OPTIONS 8
#define NOTE_FFCTRLMASK 0xc0000000
#define VOL_CAP_INT_ATTRLIST 0x00000002
#define MSIZE (1 << MSIZESHIFT)
#define MEMJOURNAL_DFLT_FILECHUNKSIZE 1024
#define COLFLAG_UNIQUE 0x0008
#define __CLRCALL_OR_CDECL __cdecl
#define CPU_SUBTYPE_POWERPC_7400 ((cpu_subtype_t) 10)
#define _Out_writes_bytes_to_opt_(s,c) 
#define SQLITE_IOCAP_SAFE_APPEND 0x00000200
#define SQLITE_DROP_TEMP_INDEX 12
#define SQLITE_NOMEM_BKPT SQLITE_NOMEM
#define IsUniqueIndex(X) ((X)->onError!=OE_None)
#define _Inout_cap_(size) _SAL1_1_Source_(_Inout_cap_, (size), _Pre_valid_cap_(size) _Post_valid_)
#define F_ADDSIGS 59
#define SQLITE_SORTER_PMASZ 250
#define _STRUCT_ARM_AMX_STATE_V1 struct __darwin_arm_amx_state_v1
#define MEMDB pPager->memDb
#define _STRUCT_ARM_DEBUG_STATE64 struct __darwin_arm_debug_state64
#define __SIZEOF_WCHAR_T__ 4
#define SQLITE_CacheSpill 0x00000020
#define PragTyp_SECURE_DELETE 30
#define MAP_MEM_ONLY 0x010000
#define __inout_ecount_opt(size) _SAL1_Source_(__inout_ecount_opt, (size), __inout_ecount(size) __pre_except_maybenull)
#define SRCHFS_VALIDOPTIONSMASK 0x800000FF
#define PENDING_BYTE sqlite3PendingByte
#define _CRTIMP2_MEMBER_FUNCTION_CALLING_CONVENTION __thiscall
#define _MAX_ULTOSTR_BASE16_COUNT (8 + 1)
#define VM_FLAGS_RETURN_4K_DATA_ADDR 0x800000
#define __ORDER_BIG_ENDIAN__ 4321
#define MINCORE_PAGED_OUT 0x20
#define EF_IS_SPARSE 0x00000010
#define THREAD_AFFINITY_POLICY 4
#define MACH_MSG_TYPE_DISPOSE_SEND_ONCE 26
#define CPUFAMILY_INTEL_6_13 0xaa33392b
#define __UINT32_C(c) c ## U
#define __GOT_SECURE_LIB__ __STDC_SECURE_LIB__
#define _MACH_THREAD_STATUS_H_ 
#define _POSIX2_VERSION 200112L
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define KMOD_MAX_NAME 64
#define ARM_DEBUG_STATE32 14
#define SQLITE_IOERR_READ (SQLITE_IOERR | (1<<8))
#define CPUFAMILY_INTEL_6_23 CPUFAMILY_INTEL_PENRYN
#define SQLITE_NOTFOUND 12
#define CPUFAMILY_INTEL_6_26 CPUFAMILY_INTEL_NEHALEM
#define EV_SET(kevp,a,b,c,d,e,f) do { struct kevent *__kevp__ = (kevp); __kevp__->ident = (a); __kevp__->filter = (b); __kevp__->flags = (c); __kevp__->fflags = (d); __kevp__->data = (e); __kevp__->udata = (f); } while(0)
#define SQLITE_RecTriggers 0x00002000
#define _CRTALLOCATOR 
#define INTMAX_MIN INT64_MIN
#define CPU_SUBTYPE_POWERPC_7450 ((cpu_subtype_t) 11)
#define PAGERID(p) (SQLITE_PTR_TO_INT(p->fd))
#define PAGER_CACHESPILL 0x20
#define PROCESSOR_BASIC_INFO 1
#define _SC_TRACE_INHERIT 99
#define EP_VarSelect 0x000020
#define HOST_SEATBELT_PORT (7 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define _FD_SET 
#define CPUFAMILY_ARM_LIGHTNING_THUNDER 0x462504d2
#define _Notliteral_impl_ 
#define __SCHED_PARAM_SIZE__ 4
#define _Deref_inout_z_cap_c_(size) _SAL1_1_Source_(_Deref_inout_z_cap_c_, (size), _Deref_pre_z_cap_c_(size) _Deref_post_z_)
#define ATTR_CMN_ACCESSMASK 0x00020000
#define MAXINTERP 64
#define SQLITE_WHEREINT_H 
#define VOL_CAP_FMT_JOURNAL 0x00000008
#define _Post_z_count_(size) _SAL1_1_Source_(_Post_z_count_, (size), _Post2_impl_(__zterm_impl,__count_impl(size)) _Post_valid_impl_)
#define sqlite3ParserCTX_STORE yypParser->pParse=pParse;
#define sqlite3VdbeVerifyNoResultRow(A) 
#define ExprHasProperty(E,P) (((E)->flags&(P))!=0)
#define _CS_POSIX_V6_LP64_OFF64_LIBS 10
#define etSRCLIST 12
#define VM_STATISTICS_TRUNCATE_TO_32_BIT(value) ((uint32_t)(((value) > UINT32_MAX ) ? UINT32_MAX : (value)))
#define FD_ISSET(n,p) __DARWIN_FD_ISSET(n, p)
#define O_NOFOLLOW 0x00000100
#define VM_MEMORY_ROSETTA_10 239
#define POLL_ERR 4
#define PTHREAD_EXPLICIT_SCHED 2
#define TIOCSETA _IOW('t', 20, struct termios)
#define __RCSID(s) __IDSTRING(rcsid,s)
#define _Releases_shared_lock_(e) 
#define ARM_DEBUG_STATE64 15
#define __drv_releasesExclusiveResourceGlobal(kind,param) 
#define _MAX_LTOSTR_BASE8_COUNT (11 + 1)
#define SQLITE_SO_DESC 1
#define __deref_out_bcount(size) _SAL1_Source_(__deref_out_bcount, (size), _Outptr_result_bytebuffer_(size))
#define SEGV_NOOP 0
#define SIOCGIFPSRCADDR _IOWR('i', 63, struct ifreq)
#define TARGET_OS_MACCATALYST 0
#define MASTER_ROOT 1
#define AQ_BUFSZ MAXAUDITDATA
#define VM_LEDGER_TAG_NETWORK 0x00000002
#define SQLITE_INDEX_CONSTRAINT_FUNCTION 150
#define AUDIT_PATH 0x0200
#define _Pre_opt_valid_cap_x_(size) _SAL1_1_Source_(_Pre_opt_valid_cap_x_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__cap_x_impl(size)) _Pre_valid_impl_)
#define MACH_MSG_SIZE_NULL (mach_msg_size_t *) 0
#define __drv_acquiresPriorityRegion 
#define _Outptr_opt_result_maybenull_z_ 
#define CPU_SUBTYPE_MIPS_ALL ((cpu_subtype_t) 0)
#define BITVEC_USIZE (((BITVEC_SZ-(3*sizeof(u32)))/sizeof(Bitvec*))*sizeof(Bitvec*))
#define OP_Yield 14
#define __out_bcount_part_opt(size,length) _SAL1_Source_(__out_bcount_part_opt, (size,length), __out_bcount_part(size,length) __pre_except_maybenull)
#define __IPHONE_7_0 70000
#define __OS_ENUM_ATTR 
#define EP_InfixFunc 0x000080
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_2(_ReturnType,_FuncName,_HType1,_HArg1,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2) 
#define invalid_policy(policy) ((policy) != POLICY_TIMESHARE && (policy) != POLICY_RR && (policy) != POLICY_FIFO)
#define __callback __inner_callback
#define MACH_MSG_TRAILER_FORMAT_0 0
#define __drv_maxFunctionIRQL(irql) _SAL1_1_Source_(__drv_maxFunctionIRQL, (irql), _IRQL_always_function_max_(irql))
#define OS_EXPECT(x,v) __builtin_expect((x), (v))
#define SYSCTL_DEF_ENABLED 
#define __bound _SAL_L_Source_(__bound, (), __inner_bound)
#define TK_DEFERRED 7
#define SQLITE_TRACE_XPROFILE 0x80
#define __out_bcount_nz(size) _SAL1_Source_(__out_bcount_nz, (size), __bcount(size) __post __valid __refparam)
#define _POSIX2_CHAR_TERM 200112L
#define OP_Prev 4
#define _SC_2_FORT_DEV 21
#define _In_reads_or_z_(s) 
#define _Translates_last_error_to_HRESULT_ _SAL2_Source_(_Translates_last_error_to_HRESULT_, (), _Always_( _Post_satisfies_(_Curr_ < 0)))
#define __deref_out_xcount_part(size,length) _SAL1_Source_(__deref_out_xcount_part, (size,length), __deref_out_xcount(size) _Post_ __deref __inexpressible_readableTo(length))
#define VM_MAP_ENTRY_MAX (256)
#define MAP_FIXED 0x0010
#define __drv_floatSaved _SAL1_1_Source_(__drv_floatSaved, (), _Kernel_float_saved_)
#define _SC_TRACE_EVENT_NAME_MAX 127
#define __SIZEOF_DOUBLE__ 8
#define CC_X 0
#define _MRTIMP_FUNCTION(type) _MRTIMP type _MRTIMP_CALLING_CONVENTION
#define OS_NONNULL10 __attribute__((__nonnull__(10)))
#define OS_NONNULL11 __attribute__((__nonnull__(11)))
#define OS_NONNULL12 __attribute__((__nonnull__(12)))
#define OS_NONNULL13 __attribute__((__nonnull__(13)))
#define OS_NONNULL14 __attribute__((__nonnull__(14)))
#define OS_NONNULL15 __attribute__((__nonnull__(15)))
#define VM_PURGABLE_NO_AGING (0x1 << VM_PURGABLE_NO_AGING_SHIFT)
#define MNT_RELOAD 0x00040000
#define __maybereadonly 
#define SQLITE_CountOfView 0x0200
#define CIRCLEQ_FOREACH(var,head,field) for((var) = (head)->cqh_first; (var) != (void *)(head); (var) = (var)->field.cqe_next)
#define EXC_EMULATION 4
#define __API_DEPRECATED_BEGIN(...) 
#define __DRIVERKIT_20_0 200000
#define TASK_EXC_GUARD_MP_DELIVER 0x10
#define osGetpid(X) (pid_t)getpid()
#define VM_PROT_WRITE ((vm_prot_t) 0x02)
#define _CRTIMP_PURE _CRTIMP
#define MAP_MEM_FLAGS_USER ( MAP_MEM_PURGABLE_KERNEL_ONLY | MAP_MEM_GRAB_SECLUDED | MAP_MEM_ONLY | MAP_MEM_NAMED_CREATE | MAP_MEM_PURGABLE | MAP_MEM_NAMED_REUSE | MAP_MEM_USE_DATA_ADDR | MAP_MEM_VM_COPY | MAP_MEM_VM_SHARE | MAP_MEM_LEDGER_TAGGED | MAP_MEM_4K_DATA_ADDR)
#define ATTR_VOL_ALLOCATIONCLUMP 0x00000040
#define OS_ASSUME_NONNULL_BEGIN 
#define _V6_LP64_OFF64 __LP64_OFF64
#define THREAD_EXTENDED_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (thread_extended_policy_data_t) / sizeof (integer_t)))
#define SQLITE_MX_JUMP_OPCODE 61
#define PTF_LEAFDATA 0x04
#define __FLT32X_HAS_QUIET_NAN__ 1
#define va_end _crt_va_end
#define __deref_out_bcount_full(size) _SAL1_Source_(__deref_out_bcount_full, (size), __deref_out_bcount_part(size,size))
#define SQLITE_CONFIG_MUTEX 10
#define TIOCSTAT _IO('t', 101)
#define EXC_TYPES_COUNT 14
#define MATTR_CACHE 1
#define _SC_TRACE_SYS_MAX 129
#define __inner_callback 
#define MAP_UNIX03 0x40000
#define __file_parser_class(typ) 
#define __kernel_dual_semantics 
#define SQLITE_EXTENSION_INIT3 
#define SWI_SYSCALL 0x80
#define _Pre_opt_ptrdiff_cap_(ptr) _SAL1_1_Source_(_Pre_opt_ptrdiff_cap_, (ptr), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__cap_x_impl(__ptrdiff(ptr))))
#define MACH_VOUCHER_ATTR_VALUE_MAX_NESTED ((mach_voucher_attr_value_handle_array_size_t)4)
#define _RATTR_OK (1<<15)
#define _POSIX2_C_DEV 200112L
#define CPU_SUBTYPE_ARM64_32_ALL ((cpu_subtype_t) 0)
#define ___drv_unit_kernel_driver _SAL_L_Source_(___drv_unit_kernel_driver, (), _SA_annotes0(SAL_kernel) _SA_annotes0(SAL_driver))
#define _SAL_VERSION_CHECK(_A) 
#define PragTyp_THREADS 37
#define __const const
#define UINT16_MAX 0xffffui16
#define PTTYBLOCK 0x200
#define ATTR_MAX_BUFFER 8192
#define _Ret_opt_bytecount_x_(size) _SAL1_1_Source_(_Ret_opt_bytecount_x_, (size), _Ret1_impl_(__maybenull_impl_notref) _Ret1_impl_(__bytecount_x_impl(size)) _Ret_valid_impl_)
#define __requires_shared_lock_held(lock) 
#define RTLD_FIRST 0x100
#define _POSIX_TRACE_LOG (-1)
#define OPFLAG_BULKCSR 0x01
#define HOST_CLOSURED_PORT (21 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define TK_EXPLAIN 2
#define __ARM_ARCH_ISA_A64 1
#define VM_MEMORY_WEBCORE_PURGEABLE_BUFFERS 69
#define __deref_inout_ecount_nz_opt(size) _SAL1_Source_(__deref_inout_ecount_nz_opt, (size), __deref_inout_ecount_opt(size))
#define MPG_FLAGS_STRICT_REPLY_INVALID_REPLY_DISP (0x01ull << 56)
#define SQLITE_DEFAULT_PCACHE_INITSZ 20
#define SIG_IGN (void (*)(int))1
#define OP_String 72
#define __STDC__ 1
#define AUC_UNSET 0
#define OK_IF_ALWAYS_TRUE(X) (X)
#define DST_CAN 6
#define SQLITE_VDBEINT_H 
#define SQLITE_DEFAULT_PROXYDIR_PERMISSIONS 0755
#define EEXIST 17
#define __PTRDIFF_TYPE__ long int
#define __deref_out_z _SAL1_Source_(__deref_out_z, (), _Outptr_result_z_)
#define _Outptr_result_z_ 
#define LIST_REMOVE(elm,field) do { LIST_CHECK_NEXT(elm, field); LIST_CHECK_PREV(elm, field); if (LIST_NEXT((elm), field) != NULL) LIST_NEXT((elm), field)->field.le_prev = (elm)->field.le_prev; *(elm)->field.le_prev = LIST_NEXT((elm), field); TRASHIT((elm)->field.le_next); TRASHIT((elm)->field.le_prev); } while (0)
#define _Ret_opt_cap_(size) _SAL1_1_Source_(_Ret_opt_cap_, (size), _Ret1_impl_(__maybenull_impl_notref) _Ret1_impl_(__cap_impl(size)))
#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_EX(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SecureFuncName,_SecureDstType,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2) _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2);
#define ATTR_VOL_SPACEFREE 0x00000008
#define HW_EPOCH 10
#define SQLITE_DEFAULT_RECURSIVE_TRIGGERS 0
#define VM_VOLATILE_GROUP_SHIFT 8
#define _MAX_I64TOSTR_BASE2_COUNT (64 + 1)
#define A_GETFSIZE 27
#define _In_reads_(s) 
#define PragTyp_CACHE_SPILL 5
#define _Outref_ 
#define __drv_releasesCancelSpinLock 
#define SQLITE_POWERSAFE_OVERWRITE 1
#define SIOCGIFDSTADDR _IOWR('i', 34, struct ifreq)
#define __ARM_PCS_AAPCS64 1
#define _MACH_ARM_VM_PARAM_H_ 
#define _IRQL_requires_max_(i) 
#define _SC_2_PBS_CHECKPOINT 61
#define VM_MEMORY_ROSETTA 230
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_16 1
#define TAILQ_INSERT_TAIL(head,elm,field) do { TAILQ_NEXT((elm), field) = NULL; (elm)->field.tqe_prev = (head)->tqh_last; *(head)->tqh_last = (elm); (head)->tqh_last = &TAILQ_NEXT((elm), field); QMD_TRACE_HEAD(head); QMD_TRACE_ELEM(&(elm)->field); } while (0)
#define SQLITE_FUNC_WINDOW 0x00010000
#define _I64_MAX 9223372036854775807i64
#define MS_DEACTIVATE 0x0008
#define LARGEST_INT64 (0xffffffff|(((i64)0x7fffffff)<<32))
#define TAILQ_ENTRY(type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct { struct type *tqe_next; struct type **tqe_prev; TRACEBUF } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define __UINTPTR_TYPE__ long unsigned int
#define SORTER_TYPE_TEXT 0x02
#define _MACH_ARM_EXCEPTION_H_ 
#define _Deref_inout_z_ _SAL1_1_Source_(_Deref_inout_z_, (), _Deref_prepost_z_)
#define __valueUndefined 
#define _Out_writes_all_(s) 
#define _UUID_T 
#define WHERE_IN_EARLYOUT 0x00040000
#define TARGET_IPHONE_SIMULATOR TARGET_OS_SIMULATOR
#define OP_LoadAnalysis 142
#define os_compiler_barrier() __asm__ __volatile__("" ::: "memory")
#define TOKEN yyminor
#define __inout_ecount_nz(size) _SAL1_Source_(__inout_ecount_nz, (size), __inout_ecount(size))
#define __LDBL_MIN_10_EXP__ (-307)
#define TK_NOTHING 147
#define LOCATE_NOERR 0x02
#define _SC_SPAWN 79
#define __out_bcount_opt(size) _SAL1_Source_(__out_bcount_opt, (size), _Out_writes_bytes_opt_(size))
#define _Deref_pre_opt_z_cap_c_(size) _SAL1_1_Source_(_Deref_pre_opt_z_cap_c_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre2_impl_(__zterm_impl,__cap_c_impl(size)) _Pre_valid_impl_)
#define SQLITE_MAX_PAGE_COUNT 1073741823
#define TK_RENAME 96
#define THREAD_AFFINITY_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (thread_affinity_policy_data_t) / sizeof (integer_t)))
#define _Ret_ 
#define osReadlink ((ssize_t(*)(const char*,char*,size_t))aSyscall[26].pCurrent)
#define __DARWIN_NON_CANCELABLE 0
#define KERN_NETBOOT 40
#define SIG_SETMASK 3
#define _At_impl_(target,annos) 
#define _INC_STDARG 
#define AUDIT_PUBLIC 0x0800
#define UF_COMPRESSED 0x00000020
#define _CHOWN_OK (1<<21)
#define A_SETEXPAFTER 44
#define _Deref_prepost_z_cap_(size) _SAL1_1_Source_(_Deref_prepost_z_cap_, (size), _Deref_pre_z_cap_(size) _Deref_post_z_cap_(size))
#define VDBE_MAGIC_HALT 0x319c2973
#define CPU_SUBTYPE_MC98601 ((cpu_subtype_t) 1)
#define _CS_DARWIN_USER_TEMP_DIR 65537
#define THREAD_BASIC_INFO_COUNT ((mach_msg_type_number_t) (sizeof(thread_basic_info_data_t) / sizeof(natural_t)))
#define EXC_ARITHMETIC 3
#define __FLT128_DECIMAL_DIG__ 36
#define __deref_out_ecount_nz(size) _SAL1_Source_(__deref_out_ecount_nz, (size), __deref_out_ecount(size))
#define _MACH_THREAD_INFO_H_ 
#define host_get_node_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_NODE_PORT, (port)))
#define TK_SELECT_COLUMN 173
#define SQLITE_ERROR_SNAPSHOT (SQLITE_ERROR | (3<<8))
#define __inner_this_out_validated(typ_raw) 
#define TERM_COPIED 0x08
#define __FLT_DECIMAL_DIG__ 9
#define _Deref_post_opt_z_cap_c_(size) _SAL1_1_Source_(_Deref_post_opt_z_cap_c_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post2_impl_(__zterm_impl,__cap_c_impl(size)) _Post_valid_impl_)
#define MNT_DEFWRITE 0x02000000
#define KERN_MEMORY_FAILURE 9
#define SQLITE_LegacyAlter 0x04000000
#define bdbtofsb(bn) ((bn) / (BLKDEV_IOSIZE/DEV_BSIZE))
#define MNT_FORCE 0x00080000
#define CPU_SUBTYPE_UVAXII ((cpu_subtype_t) 6)
#define S_ISFIFO(m) (((m) & S_IFMT) == S_IFIFO)
#define __LDBL_NORM_MAX__ 1.79769313486231570814527423731704357e+308L
#define TIOCSTOP _IO('t', 111)
#define VM_FLAGS_SUPERPAGE_SHIFT 16
#define MACH_MSG_TYPE_MAKE_SEND 20
#define PragTyp_MMAP_SIZE 25
#define _Deref_pre_opt_z_bytecap_c_(size) _SAL1_1_Source_(_Deref_pre_opt_z_bytecap_c_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre2_impl_(__zterm_impl,__bytecap_c_impl(size)) _Pre_valid_impl_)
#define MB_LEN_MAX 5
#define VM_PAGE_QUERY_PAGE_REUSABLE 0x800
#define TIOCDCDTIMESTAMP _IOR('t', 88, struct timeval)
#define MACH_PORT_TYPE_NONE ((mach_port_type_t) 0L)
#define __DARWIN_OPAQUE_ARM_THREAD_STATE64 0
#define __out_xcount_part(size,length) _SAL1_Source_(__out_xcount_part_, (size,length), __out_xcount(size) _Post_ __inexpressible_readableTo(length))
#define VOL_CAPABILITIES_FORMAT 0
#define _USECONDS_T 
#define assertCellInfo(x) 
#define ___drv_unit_kernel_code _SAL_L_Source_(___drv_unit_kernel_code, (), _SA_annotes0(SAL_kernel) _SA_annotes0(SAL_nodriver))
#define _Maybevalid_impl_ 
#define IN_INDEX_LOOP 0x0004
#define EOPNOTSUPP 130
#define VM_MEMORY_COREGRAPHICS_FRAMEBUFFERS 56
#define ATTR_CMN_OBJID 0x00000020
#define THREAD_FLAVOR_READ 1
#define _Deref_prepost_z_ _SAL1_1_Source_(_Deref_prepost_z_, (), _Deref_pre_z_ _Deref_post_z_)
#define __ATOMIC_ACQ_REL 4
#define COLNAME_DECLTYPE 1
#define __ATOMIC_RELEASE 3
#define TAILQ_HEAD_INITIALIZER(head) { NULL, &(head).tqh_first }
#define __OS_OPTIONS_ATTR 
#define MACH_PORT_STATUS_FLAG_NO_GRANT 0x80
#define INT64_MIN (-9223372036854775807i64 - 1)
#define ExprAlwaysFalse(E) (((E)->flags&(EP_FromJoin|EP_IsFalse))==EP_IsFalse)
#define __allocator _SAL_L_Source_(__allocator, (), __inner_allocator)
#define VM_PURGABLE_DEBUG_MASK (0x3 << VM_PURGABLE_DEBUG_SHIFT)
#define _Ret_opt_ _SAL1_1_Source_(_Ret_opt_, (), _Ret_opt_valid_)
#define EP_Leaf 0x800000
#define _SYS_VM_H 
#define SA_USERTRAMP 0x0100
#define ___POSIX_C_DEPRECATED_STARTING_199009L 
#define _CRT_INSECURE_DEPRECATE_MEMORY(_Replacement) 
#define MACH_VOUCHER_ATTR_VALUE_FLAGS_NONE ((mach_voucher_attr_value_flags_t)0)
#define _CRT_CONCATENATE(a,b) _CRT_CONCATENATE_(a, b)
#define __source_code_content(typ) 
#define _SC_XOPEN_UNIX 115
#define __FLT32X_MAX_EXP__ 1024
#define IPC_SPACE_NULL ((ipc_space_t) 0)
#define __out_bcount_full(size) _SAL1_Source_(__out_bcount_full, (size), _Out_writes_bytes_all_(size))
#define _Dispatch_type_(x) _SAL2_Source_(Dispatch_type_, (x), _SA_annotes1(SAL_functionClassNew, #x))
#define PROT_NONE 0x00
#define CTLTYPE_NODE 1
#define MACH_MSG_TYPE_PORT_RECEIVE MACH_MSG_TYPE_MOVE_RECEIVE
#define _QUAD_LOWWORD 0
#define MAC_OS_X_VERSION_10_13_2 101302
#define MAC_OS_X_VERSION_10_13_4 101304
#define __drv_acquiresResourceGlobal(kind,param) _SAL1_1_Source_(__drv_acquiresResourceGlobal, (kind, param), _Acquires_lock_(param))
#define PragTyp_FLAG 2
#define TASK_THREAD_TIMES_INFO 3
#define _POSIX_SHARED_MEMORY_OBJECTS (-1)
#define __unused __attribute__((__unused__))
#define BTS_SECURE_DELETE 0x0004
#define machine_ptob(x) ((x) << PAGE_SHIFT)
#define TK_LIKE_KW 47
#define TASK_POLICY_STATE 4
#define sqlite3VdbeScanStatus(a,b,c,d,e) 
#define _Pre_unknown_ 
#define ATTR_CMNEXT_VALIDMASK 0x000007fc
#define OP_OpenRead 97
#define N_SORT_BUCKET 32
#define _MACH_POLICY_H_ 
#define CPUFAMILY_ARM_11 0x8ff620d8
#define CPUFAMILY_ARM_12 0xbd1b0ae9
#define CPUFAMILY_ARM_13 0x0cc90e64
#define CPUFAMILY_ARM_14 0x96077ef1
#define CPUFAMILY_ARM_15 0xa8511bca
#define ExprSetProperty(E,P) (E)->flags|=(P)
#define _CRT_HYBRIDPATCHABLE 
#define _ARM__ENDIAN_H_ 
#define yytestcase(X) testcase(X)
#define VM_MEMORY_JAVASCRIPT_JIT_EXECUTABLE_ALLOCATOR 64
#define CLSIZELOG2 0
#define _Outptr_opt_result_bytebuffer_(s) 
#define __UINT_LEAST8_TYPE__ unsigned char
#define CC_DOLLAR 4
#define __FLT128_MIN_10_EXP__ (-4931)
#define ATTR_DIR_VALIDMASK 0x0000003f
#define DO_OS_MALLOC_TEST(x) 
#define _Deref_prepost_valid_ _SAL1_1_Source_(_Deref_prepost_valid_, (), _Deref_pre_valid_ _Deref_post_valid_)
#define WO_EQUIV 0x0800
#define SRT_Discard 4
#define MACH_MSGH_BITS_LOCAL_MASK 0x00001f00
#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_SIZE_EX(_DeclSpec,_FuncName,_SecureFuncName,_SecureDstType,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2) _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec size_t __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2);
#define MIN_AUDIT_FILE_SIZE (512 * 1024)
#define O_NDELAY O_NONBLOCK
#define _Inout_bytecount_c_(size) _SAL1_1_Source_(_Inout_bytecount_c_, (size), _Prepost_bytecount_c_(size))
#define _POSIX_PRIORITIZED_IO (-1)
#define __analysis_assume_lock_acquired(lock) 
#define __DRIVERKIT_19_0 190000
#define SQLITE_MAX_FILE_FORMAT 4
#define __deref_out_xcount(size) _SAL1_Source_(__deref_out_xcount, (size), __deref_xcount(size) _Post_ __deref __valid __refparam)
#define PAGER_STAT_WRITE 2
#define SQLITE_DESERIALIZE_FREEONCLOSE 1
#define EF_IS_PURGEABLE 0x00000008
#define __LP64_OFF64 (1)
#define _Outptr_result_buffer_to_(s,c) 
#define KERN_KDSETBUF 4
#define _fmode (*__p__fmode ())
#define TIOCEXCL _IO('t', 13)
#define sqlite3_column_database_name 0
#define SQLITE_EnableQPSG 0x00800000
#define __readableTo(extent) 
#define FP_NAN _NANCODE
#define makedev(x,y) ((dev_t)(((x) << 24) | (y)))
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_0(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_3(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_5(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_6(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_7(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_9(x) x
#define EAFNOSUPPORT 102
#define _Outptr_result_buffer_to_maybenull_(size,count) _SAL2_Source_(_Outptr_result_buffer_to_maybenull_, (size, count), _Out_impl_ _Deref_post3_impl_(__maybenull_impl_notref, __cap_impl(size), __count_impl(count)))
#define _Scanf_s_format_string_params_(x) 
#define __WATCHOS_1_0 10000
#define _Field_size_bytes_(s) 
#define VM_REGION_BASIC_INFO_COUNT ((mach_msg_type_number_t) (sizeof(vm_region_basic_info_data_t)/sizeof(int)))
#define __UINT8_MAX__ 0xff
#define _POSIX_CLOCK_SELECTION (-1)
#define _Deref_post_count_(size) _SAL1_1_Source_(_Deref_post_count_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post1_impl_(__count_impl(size)) _Post_valid_impl_)
#define _SC_TYPED_MEMORY_OBJECTS 102
#define _Inout_bytecount_(size) _SAL1_1_Source_(_Inout_bytecount_, (size), _Prepost_bytecount_(size))
#define _L3_C 0
#define OP_OpenPseudo 116
#define MAP_MEM_POSTED_REORDERED 8
#define ATTR_CMN_OBJPERMANENTID 0x00000040
#define SQLITE_DBSTATUS_LOOKASIDE_HIT 4
#define EV_SYSFLAGS 0xF000
#define _WCTYPE_T_DEFINED 
#define __FLT32_MIN_EXP__ (-125)
#define SQLITE_FCNTL_LAST_ERRNO 4
#define OS_NORETURN __attribute__((__noreturn__))
#define WAL_RETRY (-1)
#define _Inout_defensive_(a) 
#define CLD_TRAPPED 4
#define TAILQ_NEXT(elm,field) ((elm)->field.tqe_next)
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_ARGLIST(_ReturnType,_ReturnPolicy,_DeclSpec,_CC,_FuncName,_VFuncName,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2) __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_ARGLIST_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _CC, _FuncName, _VFuncName, _VFuncName ##_s, _DstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2)
#define OP_Count 93
#define PAGER_MEMORY 0x0002
#define O_NOFOLLOW_ANY 0x20000000
#define SQLITE_OPEN_MAIN_JOURNAL 0x00000800
#define MAP_RESILIENT_CODESIGN 0x2000
#define ESPIPE 29
#define CPU_STATE_SYSTEM 1
#define THREAD_READ_NULL ((thread_read_t) 0)
#define timevalcmp(l,r,cmp) timercmp(l, r, cmp)
#define MEMORY_OBJECT_NAME_NULL ((memory_object_name_t) 0)
#define HOST_COALITION_PORT (15 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define SF_APPEND 0x00040000
#define _Deref_pre_opt_z_cap_x_(size) _SAL1_1_Source_(_Deref_pre_opt_z_cap_x_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre2_impl_(__zterm_impl,__cap_x_impl(size)) _Pre_valid_impl_)
#define KERN_KDSETREG 8
#define YY_SHIFT_MAX (1908)
#define _Deref_prepost_opt_bytecap_x_(size) _SAL1_1_Source_(_Deref_prepost_opt_bytecap_x_, (size), _Deref_pre_opt_bytecap_x_(size) _Deref_post_opt_bytecap_x_(size))
#define MEMORY_OBJECT_COPY_SYNC 0x8
#define __CRTDECL __CLRCALL_PURE_OR_CDECL
#define _Outptr_result_bytebuffer_to_(s,c) 
#define _MRTIMP2_NPURE 
#define _SC_TTY_NAME_MAX 101
#define FIOASYNC _IOW('f', 125, int)
#define __CONSTANT_CFSTRINGS__ 1
#define TASK_EXC_GUARD_MP_ALL 0xf0
#define INT16_MAX 32767i16
#define CTLFLAG_KERN 0x01000000
#define _MACH_HOST_INFO_H_ 
#define TK_TRIGGER 77
#define _V6_ILP32_OFF32 __ILP32_OFF32
#define __DARWIN_FD_CLR(n,p) __darwin_fd_clr((n), (p))
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define put32bits(A,B) sqlite3Put4byte((u8*)A,B)
#define trunc_page_kernel(x) ((x) & (~vm_kernel_page_mask))
#define NOTE_NONE 0x00000080
#define SQLITE_IOERR_SHORT_READ (SQLITE_IOERR | (2<<8))
#define ATTR_VOL_UUID 0x00040000
#define __deref_volatile _SAL_L_Source_(__deref_volatile, (), __deref __volatile)
#define SQLITE_TESTCTRL_BYTEORDER 22
#define __FLT32_MAX_EXP__ 128
#define _MRTIMP2_NPURE_FUNCTION(type) _MRTIMP2_NPURE type _MRTIMP2_NPURE_CALLING_CONVENTION
#define PragTyp_DATA_STORE_DIRECTORY 9
#define _PTHREAD_ONCE_SIG_init 0x30B1BCBA
#define __FLT_EVAL_METHOD__ 0
#define EVFILT_AIO (-3)
#define _Deref_post_opt_z_cap_x_(size) _SAL1_1_Source_(_Deref_post_opt_z_cap_x_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post2_impl_(__zterm_impl,__cap_x_impl(size)) _Post_valid_impl_)
#define MACH_PORT_TYPE_DEAD_NAME MACH_PORT_TYPE(MACH_PORT_RIGHT_DEAD_NAME)
#define SQLITE_IOERR_BLOCKED (SQLITE_IOERR | (11<<8))
#define sqlite3_column_table_name 0
#define enable_simulated_io_errors() 
#define etINVALID 17
#define __elem_readableTo(size) 
#define TASK_EXC_GUARD_MP_FATAL 0x80
#define CPU_SUBTYPE_INTEL_MODEL_ALL 0
#define WHERE_SKIPSCAN 0x00008000
#define __FLT64_DECIMAL_DIG__ 17
#define __inner_this_data_source(src_raw) 
#define _Out_writes_bytes_all_opt_(s) 
#define __inout_bcount_part_opt(size,length) _SAL1_Source_(__inout_bcount_part_opt, (size,length), __inout_bcount_part(size,length) __pre_except_maybenull)
#define _Deref_pre_opt_z_bytecap_x_(size) _SAL1_1_Source_(_Deref_pre_opt_z_bytecap_x_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre2_impl_(__zterm_impl,__bytecap_x_impl(size)) _Pre_valid_impl_)
#define SIOCGIFDEVMTU _IOWR('i', 68, struct ifreq)
#define CTLFLAG_NOLOCK 0x20000000
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define CLD_STOPPED 5
#define osLstat ((int(*)(const char*,struct stat*))aSyscall[27].pCurrent)
#define sqlite3StackAllocRaw(D,N) sqlite3DbMallocRaw(D,N)
#define VM_MEMORY_COREGRAPHICS 42
#define __IPHONE_2_0 20000
#define __IPHONE_2_1 20100
#define _Deref_pre_valid_cap_x_(size) _SAL1_1_Source_(_Deref_pre_valid_cap_x_, (size), _Deref_pre1_impl_(__notnull_impl_notref) _Deref_pre1_impl_(__cap_x_impl(size)) _Pre_valid_impl_)
#define FNONBLOCK O_NONBLOCK
#define INT8_MIN (-127i8 - 1)
#define _Out_opt_bytecapcount_x_(capcount) _SAL1_1_Source_(_Out_opt_bytecapcount_x_, (capcount), _Pre_opt_bytecap_x_(capcount) _Post_valid_impl_ _Post_bytecount_x_(capcount))
#define __deref_opt_out_bcount_part(size,length) _SAL1_Source_(__deref_opt_out_bcount_part, (size,length), __deref_out_bcount_part(size,length) __pre_except_maybenull)
#define SQLITE_CONFIG_GETMUTEX 11
#define LIST_FOREACH_SAFE(var,head,field,tvar) for ((var) = LIST_FIRST((head)); (var) && ((tvar) = LIST_NEXT((var), field), 1); (var) = (tvar))
#define P_SUGID 0x00000100
#define MADV_FREE_REUSABLE 7
#define DbHasProperty(D,I,P) (((D)->aDb[I].pSchema->schemaFlags&(P))==(P))
#define READ_UTF16BE(zIn,TERM,c) { c = ((*zIn++)<<8); c += (*zIn++); if( c>=0xD800 && c<0xE000 && TERM ){ int c2 = ((*zIn++)<<8); c2 += (*zIn++); c = (c2&0x03FF) + ((c&0x003F)<<10) + (((c&0x03C0)+0x0040)<<10); } }
#define SQLITE_TESTCTRL_ISKEYWORD 16
#define OP_Move 77
#define _CRT_INTERNAL_PRINTF_LEGACY_THREE_DIGIT_EXPONENTS (1ULL << 4)
#define SRT_Mem 10
#define MBIGCLBYTES (1 << MBIGCLSHIFT)
#define DST_NONE 0
#define TESTONLY(X) 
#define EOWNERDEAD 133
#define MNT_IGNORE_OWNERSHIP 0x00200000
#define __deref_out_bcount_opt(size) _SAL1_Source_(__deref_out_bcount_opt, (size), __deref_out_bcount(size) __post_deref_except_maybenull)
#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_0_GETS(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_DstType,_Dst) _CRT_INSECURE_DEPRECATE(_FuncName ##_s) _DeclSpec _ReturnType __cdecl _FuncName(_DstType *_Dst);
#define EV_EOF 0x8000
#define _Pre_readable_byte_size_(s) _Pre_ _Readable_bytes_(s) _Pre_ _Valid_
#define codeCursorHint(A,B,C,D) 
#define EXCEPTION_STATE_IDENTITY 3
#define _Deref_post_valid_cap_x_(size) _SAL1_1_Source_(_Deref_post_valid_cap_x_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post1_impl_(__cap_x_impl(size)) _Post_valid_impl_)
#define INT16_MIN (-32767i16 - 1)
#define CLOFSET (CLSIZE*NBPG-1)
#define PURE_DATE(zName,nArg,iArg,bNC,xFunc) {nArg, SQLITE_FUNC_SLOCHNG|SQLITE_UTF8|SQLITE_FUNC_CONSTANT, (void*)&sqlite3Config, 0, xFunc, 0, 0, 0, #zName, {0} }
#define SLIST_NEXT(elm,field) ((elm)->field.sle_next)
#define SQLITE_FUNC_OFFSET 0x8000
#define CKCNSTRNT_ROWID 0x02
#define OPFLAG_NOCHNG_MAGIC 0x6d
#define _O_WTEXT 0x10000
#define arm_thread_state64_get_fp(ts) __darwin_arm_thread_state64_get_fp(ts)
#define VM_FLAGS_RESILIENT_MEDIA 0x0040
#define SQLITE_CONFIG_URI 17
#define _CRT_INTERNAL_SCANF_LEGACY_MSVCRT_COMPATIBILITY (1ULL << 2)
#define _SECURECRT_FILL_BUFFER_PATTERN 0xFE
#define _CLASS_ARG(_Val) __pragma(warning(suppress:6334))(sizeof ((_Val) + (float)0) == sizeof (float) ? 'f' : sizeof ((_Val) + (double)0) == sizeof (double) ? 'd' : 'l')
#define F_LOG2PHYS 49
#define KERN_SYSV 42
#define SQLITE_FCNTL_ROLLBACK_ATOMIC_WRITE 33
#define KERN_EXCEPTION_PROTECTED 32
#define DBFLAG_Vacuum 0x0004
#define _Out_opt_z_cap_post_count_(cap,count) _SAL1_1_Source_(_Out_opt_z_cap_post_count_, (cap,count), _Pre_opt_cap_(cap) _Post_valid_impl_ _Post_z_count_(count))
#define ERANGE 34
#define SQLITE_OPEN_SHAREDCACHE 0x00020000
#define FLAG_SIGNED 1
#define SQLITE_NULL 5
#define P4_FUNCCTX (-16)
#define _Readable_bytes_(s) 
#define A_OLDGETPOLICY 2
#define GCC_VERSION (__GNUC__*1000000+__GNUC_MINOR__*1000+__GNUC_PATCHLEVEL__)
#define SQLITE_MAX_LIKE_PATTERN_LENGTH 50000
#define __DBL_DENORM_MIN__ ((double)4.94065645841246544176568792868221372e-324L)
#define __out_has_type_adt_props(typ) 
#define TK_QUERY 3
#define TIOCM_CTS 0040
#define _POSIX_SPIN_LOCKS (-1)
#define _Requires_shared_lock_held_(e) 
#define _Pre_opt_valid_ _Pre_maybenull_ _Pre_ _Valid_
#define HOST_NOTIFY_CALENDAR_CHANGE 0
#define _Analysis_noreturn_ 
#define ETXTBSY 139
#define F_ALLOCATECONTIG 0x00000002
#define MNT_UNION 0x00000020
#define AUDIT_TRIGGER_ROTATE_KERNEL 2
#define MACH_PORT_LIMITS_INFO 1
#define WCHAR_MAX 0xffff
#define YY_REDUCE_COUNT (385)
#define EALREADY 103
#define EVFILT_SYSCOUNT 17
#define NSIG __DARWIN_NSIG
#define SQLITE_CellSizeCk 0x00200000
#define MACH_TASK_BASIC_INFO 20
#define SIOCDIFPHYADDR _IOW('i', 65, struct ifreq)
#define MACH_PORT_GUARD_INFO 8
#define MEM_Agg 0x2000
#define _Pre_z_bytecap_(size) _SAL1_1_Source_(_Pre_z_bytecap_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre2_impl_(__zterm_impl,__bytecap_impl(size)) _Pre_valid_impl_)
#define NTOHLL(x) (x) = ntohll((__uint64_t)x)
#define __deref_out_range(lb,ub) _SAL_L_Source_(__deref_out_range, (lb,ub), _Post_ __deref __inner_range(lb,ub))
#define TK_ALTER 157
#define VM_MEMORY_MALLOC_HUGE 4
#define _Deref_prepost_opt_z_cap_(size) _SAL1_1_Source_(_Deref_prepost_opt_z_cap_, (size), _Deref_pre_opt_z_cap_(size) _Deref_post_opt_z_cap_(size))
#define SQLITE_CHECKPOINT_TRUNCATE 3
#define TARGET_OS_UIKITFORMAC 0
#define _Deref_prepost_opt_count_(size) _SAL1_1_Source_(_Deref_prepost_opt_count_, (size), _Deref_pre_opt_count_(size) _Deref_post_opt_count_(size))
#define nth_valueInvFunc noopStepFunc
#define READ_UTF16LE(zIn,TERM,c) { c = (*zIn++); c += ((*zIn++)<<8); if( c>=0xD800 && c<0xE000 && TERM ){ int c2 = (*zIn++); c2 += ((*zIn++)<<8); c = (c2&0x03FF) + ((c&0x003F)<<10) + (((c&0x03C0)+0x0040)<<10); } }
#define KERN_NO_ACCESS 8
#define _COM_Outptr_result_maybenull_ 
#define __FLT64X_MAX_10_EXP__ 4932
#define SIGTTOU 22
#define _Deref_pre3_impl_(p1,p2,p3) 
#define WINDOW_RETURN_ROW 1
#define MACH_RCV_GUARDED_DESC 0x00001000
#define __IPHONE_10_0 100000
#define __IPHONE_10_1 100100
#define __IPHONE_10_2 100200
#define __IPHONE_10_3 100300
#define noopFunc versionFunc
#define _NLINK_T 
#define TRACEBUF 
#define ATTR_VOL_SIZE 0x00000004
#define _In_z_bytecount_(size) _SAL1_1_Source_(_In_z_bytecount_, (size), _Pre_z_ _Pre_bytecount_(size) _Deref_pre_readonly_)
#define _NANCODE 2
#define sigmask(m) (1 << ((m)-1))
#define TK_CONCAT 108
#define ALLPERMS (S_ISUID|S_ISGID|S_ISTXT|S_IRWXU|S_IRWXG|S_IRWXO)
#define __encoded_array _SAL_L_Source_(__encoded_array, (), __inner_encoded)
#define _POSIX_VERSION 200112L
#define CPU_SUBTYPE_INTEL(f,m) ((cpu_subtype_t) (f) + ((m) << 4))
#define SQLITE_MAX_TRIGGER_DEPTH 1000
#define KEVENT_FLAG_NONE 0x000000
#define CTL_KERN_NAMES { { 0, 0 }, { "ostype", CTLTYPE_STRING }, { "osrelease", CTLTYPE_STRING }, { "osrevision", CTLTYPE_INT }, { "version", CTLTYPE_STRING }, { "maxvnodes", CTLTYPE_INT }, { "maxproc", CTLTYPE_INT }, { "maxfiles", CTLTYPE_INT }, { "argmax", CTLTYPE_INT }, { "securelevel", CTLTYPE_INT }, { "hostname", CTLTYPE_STRING }, { "hostid", CTLTYPE_INT }, { "clockrate", CTLTYPE_STRUCT }, { "vnode", CTLTYPE_STRUCT }, { "proc", CTLTYPE_STRUCT }, { "file", CTLTYPE_STRUCT }, { "profiling", CTLTYPE_NODE }, { "posix1version", CTLTYPE_INT }, { "ngroups", CTLTYPE_INT }, { "job_control", CTLTYPE_INT }, { "saved_ids", CTLTYPE_INT }, { "boottime", CTLTYPE_STRUCT }, { "nisdomainname", CTLTYPE_STRING }, { "maxpartitions", CTLTYPE_INT }, { "kdebug", CTLTYPE_INT }, { "update", CTLTYPE_INT }, { "osreldate", CTLTYPE_INT }, { "ntp_pll", CTLTYPE_NODE }, { "bootfile", CTLTYPE_STRING }, { "maxfilesperproc", CTLTYPE_INT }, { "maxprocperuid", CTLTYPE_INT }, { "dumpdev", CTLTYPE_STRUCT }, { "ipc", CTLTYPE_NODE }, { "dummy", CTLTYPE_INT }, { "dummy", CTLTYPE_INT }, { "usrstack", CTLTYPE_INT }, { "logsigexit", CTLTYPE_INT }, { "symfile",CTLTYPE_STRING }, { "procargs",CTLTYPE_STRUCT }, { "dummy", CTLTYPE_INT }, { "netboot", CTLTYPE_INT }, { "dummy", CTLTYPE_INT }, { "sysv", CTLTYPE_NODE }, { "dummy", CTLTYPE_INT }, { "dummy", CTLTYPE_INT }, { "exec", CTLTYPE_NODE }, { "aiomax", CTLTYPE_INT }, { "aioprocmax", CTLTYPE_INT }, { "aiothreads", CTLTYPE_INT }, { "procargs2",CTLTYPE_STRUCT }, { "corefile",CTLTYPE_STRING }, { "coredump", CTLTYPE_INT }, { "sugid_coredump", CTLTYPE_INT }, { "delayterm", CTLTYPE_INT }, { "shreg_private", CTLTYPE_INT }, { "proc_low_pri_io", CTLTYPE_INT }, { "low_pri_window", CTLTYPE_INT }, { "low_pri_delay", CTLTYPE_INT }, { "posix", CTLTYPE_NODE }, { "usrstack64", CTLTYPE_QUAD }, { "nx", CTLTYPE_INT }, { "tfp", CTLTYPE_NODE }, { "procname", CTLTYPE_STRING }, { "threadsigaltstack", CTLTYPE_INT }, { "speculative_reads_disabled", CTLTYPE_INT }, { "osversion", CTLTYPE_STRING }, { "safeboot", CTLTYPE_INT }, { "dummy", CTLTYPE_INT }, { "rage_vnode", CTLTYPE_INT }, { "tty", CTLTYPE_NODE }, { "check_openevt", CTLTYPE_INT }, { "thread_name", CTLTYPE_STRING } }
#define A_SENDTRIGGER 31
#define SQLITE_TEMP_STORE 1
#define _SC_THREAD_STACK_MIN 93
#define __inner_typefix(ctype) 
#define __FLT128_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F128
#define CIRCLEQ_INSERT_BEFORE(head,listelm,elm,field) do { CIRCLEQ_CHECK_PREV(head, listelm, field); (elm)->field.cqe_next = (listelm); (elm)->field.cqe_prev = (listelm)->field.cqe_prev; if ((listelm)->field.cqe_prev == (void *)(head)) (head)->cqh_first = (elm); else (listelm)->field.cqe_prev->field.cqe_next = (elm); (listelm)->field.cqe_prev = (elm); } while (0)
#define VOL_CAP_INT_RENAME_OPENFAIL 0x00100000
#define __AVAILABILITY_INTERNAL_DEPRECATED_MSG(_msg) __attribute__((deprecated))
#define _Out_z_cap_(size) _SAL1_1_Source_(_Out_z_cap_, (size), _Pre_cap_(size) _Post_valid_impl_ _Post_z_)
#define VM_LEDGER_FLAG_NO_FOOTPRINT_FOR_DEBUG (1 << 1)
#define LIST_FIRST(head) ((head)->lh_first)
#define TK_REFERENCES 121
#define _MAX_I64TOSTR_BASE10_COUNT (1 + 19 + 1)
#define __in_ecount_or_z(c) _SAL1_Source_(__in_ecount_or_z, (c), _When_(_String_length_(_Curr_) < (c), __in_z) _When_(_String_length_(_Curr_) >= (c), __in_ecount(c)))
#define WHERE_CONSTRAINT 0x0000000f
#define __drv_mustHoldPriorityRegion 
#define _dstbias (*__dstbias())
#define CPU_SUBTYPE_ARM_ALL ((cpu_subtype_t) 0)
#define __deref_ecount_opt(size) _SAL1_Source_(__deref_ecount_opt, (size), __deref_ecount(size) __post_deref_except_maybenull)
#define WCHAR_MIN 0x0000
#define HUGE_VALF ((float)INFINITY)
#define SQLITE_MAGIC_SICK 0x4b771290
#define HUGE_VALL ((long double)INFINITY)
#define ATTR_VOL_MOUNTPOINT 0x00001000
#define __drv_callbackType(kind) _SAL1_1_Source_(__drv_callbackType, (kind), _SA_annotes1(SAL_callbackType, #kind))
#define VM_BEHAVIOR_CAN_REUSE ((vm_behavior_t) 10)
#define VOL_CAP_FMT_SEALED 0x02000000
#define _PC_AUTH_OPAQUE_NP 14
#define __STDC_WANT_SECURE_LIB__ 1
#define _Deref_post_opt_valid_bytecap_c_(size) _SAL1_1_Source_(_Deref_post_opt_valid_bytecap_c_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post1_impl_(__bytecap_c_impl(size)) _Post_valid_impl_)
#define MPG_FLAGS_IMMOVABLE_PINNED (0x01ull << 56)
#define HW_TB_FREQ 23
#define CPUFAMILY_ARM_9 0xe73283ae
#define VM_MEMORY_COREDATA_OBJECTIDS 46
#define SQLITE_DBSTATUS_CACHE_USED_SHARED 11
#define MACH_PORT_VALID(name) (((name) != MACH_PORT_NULL) && ((name) != MACH_PORT_DEAD))
#define MACH_MSGH_BITS_USER 0x801f1f1fU
#define USER_BC_BASE_MAX 2
#define PAGER_JOURNALMODE_OFF 2
#define __QUALIFIER(type,fun) 
#define _Outref_result_bytebuffer_all_(s) 
#define SQLITE_DYNAMIC ((sqlite3_destructor_type)sqlite3MallocSize)
#define FD_SETSIZE __DARWIN_FD_SETSIZE
#define __LDBL_MAX_EXP__ 1024
#define INT8_TYPE signed char
#define SQLITE_DENY 1
#define MNT_UNKNOWNPERMISSIONS MNT_IGNORE_OWNERSHIP
#define _User_always_ 
#define CPU_SUBTYPE_XEON_MP CPU_SUBTYPE_INTEL(12, 1)
#define _MACH_MACHINE_BOOLEAN_H_ 
#define _PTR_LD(x) ((unsigned char*)(&(x)->ld))
#define UINT_FAST16_MAX UINT32_MAX
#define _ARM_MACHTYPES_H_ 
#define VOL_CAP_FMT_SPARSE_FILES 0x00000040
#define __SIZEOF_SHORT__ 2
#define EPROTOTYPE 136
#define __kernel_entry _SAL_L_Source_(__kernel_entry, (), __inner_control_entrypoint(UserToKernel))
#define __pure2 __attribute__((__const__))
#define host_set_fairplayd_port(host,port) (host_set_special_port((host), HOST_FAIRPLAYD_PORT, (port)))
#define __in_ecount_z_opt(size) _SAL1_Source_(__in_ecount_z_opt, (size), __in_ecount_opt(size) __pre __nullterminated)
#define BTS_PAGESIZE_FIXED 0x0002
#define A_GETSFLAGS 39
#define NeXTBSD 1995064
#define SQLITE_PRINTF_SQLFUNC 0x02
#define ALIGN(p) __DARWIN_ALIGN(p)
#define _HUGE_ENUF 1e+300
#define host_get_sysdiagnose_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_SYSDIAGNOSE_PORT, (port)))
#define _environ (*__p__environ())
#define THREAD_MACHINE_STATE_MAX THREAD_STATE_MAX
#define __FLT32X_IS_IEC_60559__ 2
#define VM_MEMORY_IOSURFACE 88
#define SQLITE_ECEL_OMITREF 0x08
#define PGHDR_MMAP 0x020
#define htonl(x) __DARWIN_OSSwapInt32(x)
#define SQLITE_MAX_EXPR_DEPTH 1000
#define ARM_EXCEPTION_STATE 3
#define __inner_adt_transfer_prop(arg) 
#define TK_UNION 130
#define KIPC_MAX_HDR 6
#define OP_SorterInsert 131
#define KERN_PROC_SESSION 3
#define __deref_inout_xcount_part(size,length) _SAL1_Source_(__deref_inout_xcount_part, (size,length), __deref_inout_xcount(size) _Pre_ __deref __inexpressible_readableTo(length) _Post_ __deref __inexpressible_readableTo(length))
#define SQLITE_NullCallback 0x00000100
#define __result_use_check __attribute__((__warn_unused_result__))
#define _POSIX_SYNCHRONIZED_IO (-1)
#define _Post_count_(size) _SAL1_1_Source_(_Post_count_, (size), _Post1_impl_(__count_impl(size)) _Post_valid_impl_)
#define MACH_MSG_VIRTUAL_COPY 1
#define PTRMAP_BTREE 5
#define TASK_BASE_LATENCY_QOS_POLICY 10
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_15(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_16(x) x
#define __deref_opt_inout_ecount_part(size,length) _SAL1_Source_(__deref_opt_inout_ecount_part, (size,length), __deref_inout_ecount_part(size,length) __pre_except_maybenull)
#define TARGET_CPU_X86 0
#define TK_USING 140
#define _Nonnull 
#define _CS_XBS5_LP64_OFF64_LDFLAGS 29
#define PAGER_SYNCHRONOUS_EXTRA 0x04
#define _UINTPTR_T 
#define THREAD_READ_PORT 3
#define TASK_FLAGS_INFO_COUNT ((mach_msg_type_number_t) (sizeof(task_flags_info_data_t) / sizeof (natural_t)))
#define _Deref_post_opt_z_bytecap_c_(size) _SAL1_1_Source_(_Deref_post_opt_z_bytecap_c_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post2_impl_(__zterm_impl,__bytecap_c_impl(size)) _Post_valid_impl_)
#define TASK_EVENTS_INFO 2
#define MFSTYPENAMELEN 16
#define _crt_va_arg(ap,t) ( *(t *)((ap += _INTSIZEOF(t)) - _INTSIZEOF(t)) )
#define O_APPEND 0x00000008
#define _TIME_T_DEFINED 
#define _FORTIFY_SOURCE 2
#define _Outptr_result_bytebuffer_all_(size) _SAL2_Source_(_Outptr_result_bytebuffer_all_, (size), _Out_impl_ _Deref_post2_impl_(__notnull_impl_notref, __bytecount_impl(size)))
#define TARGET_OS_SIMULATOR 0
#define UNIXFILE_NOLOCK 0x80
#define TAILQ_CHECK_HEAD(head,field) 
#define MAXPATHLEN PATH_MAX
#define CC_AND 24
#define _DMAX ((unsigned short)((1 << (15 - _DOFF)) - 1))
#define TARGET_RT_MAC_MACHO 1
#define AUDIT_PERZONE 0x2000
#define VdbeCoverageNeverNull(v) 
#define VQ_SYNCEVENT 0x0400
#define ATTR_VOL_OBJCOUNT 0x00000100
#define COLL_WEIGHTS_MAX 2
#define OP_VRename 165
#define OS_STRINGIFY(s) __OS_STRINGIFY(s)
#define WHERE_MULTI_OR 0x00002000
#define __deref_inout_bcount_full(size) _SAL1_Source_(__deref_inout_bcount_full, (size), __deref_inout_bcount_part(size,size))
#define _Requires_lock_not_held_(e) 
#define _Write_guarded_by_(e) 
#define SQLITE_STATUS_MALLOC_SIZE 5
#define __in_bcount_z_opt(size) _SAL1_Source_(__in_bcount_z_opt, (size), __in_bcount_opt(size) __pre __nullterminated)
#define SQLITE_MAGIC_ZOMBIE 0x64cffc7f
#define EP_Indirect 0x40000000
#define __DRIVERKIT_21_0 210000
#define PAGER_SYNCHRONOUS_MASK 0x07
#define TIOCM_RNG 0200
#define HOST_VM_PURGABLE_COUNT ((mach_msg_type_number_t) (sizeof(host_purgable_info_data_t)/sizeof(integer_t)))
#define VM_FLAGS_PURGABLE 0x0002
#define _Post_equals_last_error_ _SAL2_Source_(_Post_equals_last_error_, (), _Post_satisfies_(_Curr_ != 0))
#define __drv_strictTypeMatch(mode) _SAL1_1_Source_(__drv_strictTypeMatch, (mode), _Pre_ _SA_annotes1(SAL_strictTypeMatch,mode))
#define OP_Remainder 107
#define _Deref_post3_impl_(p1,p2,p3) 
#define SF_ARCHIVED 0x00010000
#define USHRT_MAX 0xffff
#define SQLITE_TESTCTRL_ALWAYS 13
#define _Outptr_result_bytebuffer_all_maybenull_(size) _SAL2_Source_(_Outptr_result_bytebuffer_all_maybenull_, (size), _Out_impl_ _Deref_post2_impl_(__maybenull_impl_notref, __bytecount_impl(size)))
#define ETIMEDOUT 138
#define __IOS_PROHIBITED 
#define LEDGER_ITEM_INFINITY ((ledger_item_t) (~0))
#define _SC_AIO_LISTIO_MAX 42
#define _Outptr_opt_result_buffer_to_(s,c) 
#define NFSV2_MAX_FH_SIZE 32
#define OP_VColumn 164
#define SQLITE_ANY 5
#define __MAC_10_10_2 101002
#define __MAC_10_10_3 101003
#define _Out_opt_z_cap_(size) _SAL1_1_Source_(_Out_opt_z_cap_, (size), _Pre_opt_cap_(size) _Post_valid_impl_ _Post_z_)
#define _AGLOBAL 
#define FIODTYPE _IOR('f', 122, int)
#define KERN_KDPIDTR 11
#define _Ret_maybenull_z_ 
#define __END_DECLS 
#define task_set_task_access_port(task,port) (task_set_special_port((task), TASK_ACCESS_PORT, (port)))
#define __FLT64X_EPSILON__ 1.92592994438723585305597794258492732e-34F64x
#define _POSIX_V6_LPBIG_OFFBIG __LPBIG_OFFBIG
#define __CONCAT(x,y) x ## y
#define SQLITE_OK_LOAD_PERMANENTLY (SQLITE_OK | (1<<8))
#define P4_FREE_IF_LE (-7)
#define WHERE_COLUMN_NULL 0x00000008
#define SQLITE_API 
#define _Pre_bytecount_c_(size) _SAL1_1_Source_(_Pre_bytecount_c_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__bytecount_c_impl(size)) _Pre_valid_impl_)
#define HOST_IOCOMPRESSIONSTATS_PORT (25 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define MATTR_VAL_GET 2
#define MACH_MSG_TYPE_PORT_ANY_RIGHT(x) (((x) >= MACH_MSG_TYPE_MOVE_RECEIVE) && ((x) <= MACH_MSG_TYPE_MOVE_SEND_ONCE))
#define sqlite3ParserCTX_SDECL Parse *pParse;
#define OP_SeekRowid 30
#define __dead 
#define VM_MEMORY_AUDIO 90
#define CBSIZE (CBLOCK - sizeof(struct cblock *) - CBQSIZE)
#define VOL_CAP_INT_SNAPSHOT 0x00020000
#define _SC_2_PBS_MESSAGE 63
#define OP_IntegrityCk 146
#define _READ_OK (1<<9)
#define _Ret_bytecap_c_(size) _SAL1_1_Source_(_Ret_bytecap_c_, (size), _Ret1_impl_(__notnull_impl_notref) _Ret1_impl_(__bytecap_c_impl(size)))
#define SQLITE_DROP_TABLE 11
#define _Field_size_part_(s,c) 
#define NOTE_REVOKE 0x00000040
#define MACH_PORT_DENAP_RECEIVER 6
#define MATTR_VAL_GET_INFO 10
#define NOTE_FFCOPY 0xc0000000
#define TIOCM_RTS 0004
#define SQLITE_STATUS_PAGECACHE_USED 1
#define A_SETQCTRL 36
#define _Deref_prepost_valid_cap_(size) _SAL1_1_Source_(_Deref_prepost_valid_cap_, (size), _Deref_pre_valid_cap_(size) _Deref_post_valid_cap_(size))
#define VM_MEMORY_COLORSYNC 104
#define TARGET_RT_MAC_CFM 0
#define WINDOWFUNCNOOP(name,nArg,extra) { nArg, (SQLITE_UTF8|SQLITE_FUNC_WINDOW|extra), 0, 0, noopStepFunc, noopValueFunc, noopValueFunc, noopStepFunc, name ## Name, {0} }
#define TASK_TRACE_MEMORY_INFO_COUNT ((mach_msg_type_number_t) (sizeof(task_trace_memory_info_data_t) / sizeof(natural_t)))
#define EP_Subrtn 0x2000000
#define POLICY_TIMESHARE_LIMIT_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_timeshare_limit)/sizeof(integer_t)))
#define TIMER_ELAPSED ((sqlite_uint64)0)
#define _FE_OVERFLOW 0x08
#define SIOCSIFLLADDR _IOW('i', 60, struct ifreq)
#define _SC_TZNAME_MAX 27
#define HAVE_MREMAP 0
#define CTLFLAG_ANYBODY 0x10000000
#define _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS 12
#define COLFLAG_SORTERREF 0x0010
#define DIR_MNTSTATUS_MNTPOINT 0x00000001
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0_EX(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SecureFuncName,_SalAttributeDst,_DstType,_Dst) _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst);
#define TASK_CORPSE_FORKING_DISABLED_MEM_DIAG 0x01
#define SQLITE_TOKEN_KEYWORD 0x2
#define MACH_SEND_SYNC_BOOTSTRAP_CHECKIN 0x00800000
#define clrbit(a,i) (((unsigned char *)(a))[(i)/NBBY] &= ~(1u<<((i)%NBBY)))
#define VOL_CAP_FMT_NO_IMMUTABLE_FILES 0x00200000
#define SQLITE_OPEN_MASTER_JOURNAL 0x00004000
#define __null 
#define ARM_UNIFIED_THREAD_STATE_COUNT ((mach_msg_type_number_t) (sizeof (arm_unified_thread_state_t)/sizeof(uint32_t)))
#define _FILESEC_T 
#define INTERNAL_FUNCTION(zName,nArg,xFunc) {nArg, SQLITE_FUNC_INTERNAL|SQLITE_UTF8|SQLITE_FUNC_CONSTANT, 0, 0, xFunc, 0, 0, 0, #zName, {0} }
#define SPILLFLAG_OFF 0x01
#define VM_MEMORY_MALLOC_PROB_GUARD 13
#define CTIMEOPT_VAL(opt) CTIMEOPT_VAL_(opt)
#define host_get_lockd_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_LOCKD_PORT, (port)))
#define P_SYSTEM 0x00000200
#define _U_INT64_T 
#define _POSIX_SPAWN (-1)
#define __SHRT_WIDTH__ 16
#define __TVOS_9_0 90000
#define __TVOS_9_1 90100
#define __TVOS_9_2 90200
#define SLIST_REMOVE(head,elm,type,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH do { if (SLIST_FIRST((head)) == (elm)) { SLIST_REMOVE_HEAD((head), field); } else { struct type *curelm = SLIST_FIRST((head)); while (SLIST_NEXT(curelm, field) != (elm)) curelm = SLIST_NEXT(curelm, field); SLIST_REMOVE_AFTER(curelm, field); } TRASHIT((elm)->field.sle_next); } while (0) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define EXC_SYSCALL 7
#define SQLITE_REPLACE 5
#define _Writable_elements_(s) 
#define KERN_SUGID_COREDUMP 52
#define __inout_ecount_full_opt(size) _SAL1_Source_(__inout_ecount_full_opt, (size), __inout_ecount_full(size) __pre_except_maybenull)
#define _Enum_is_bitflag_ 
#define CMASK 022
#define __inner_range(lb,ub) 
#define KERN_INVALID_HOST 22
#define TK_VACUUM 78
#define __scanflike(fmtarg,firstvararg) __attribute__((__format__ (__scanf__, fmtarg, firstvararg)))
#define SQLITE_CONFIG_WIN32_HEAPSIZE 23
#define SQLITE_DETACH 25
#define osRead ((ssize_t(*)(int,void*,size_t))aSyscall[8].pCurrent)
#define _Pre_opt_valid_bytecap_c_(size) _SAL1_1_Source_(_Pre_opt_valid_bytecap_c_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__bytecap_c_impl(size)) _Pre_valid_impl_)
#define _Deref_post_opt_valid_bytecap_x_(size) _SAL1_1_Source_(_Deref_post_opt_valid_bytecap_x_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post1_impl_(__bytecap_x_impl(size)) _Post_valid_impl_)
#define DYNAMIC_TARGETS_ENABLED 0
#define MACH_PORT_INDEX(name) ((name) >> 8)
#define POSIX_MADV_DONTNEED 4
#define VM_MEMORY_SBRK 5
#define MASTER_NAME "sqlite_master"
#define TIOCSDRAINWAIT _IOW('t', 87, int)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14(x) x
#define VOL_CAP_FMT_DOCUMENT_ID 0x00080000
#define __API_DEPRECATED_MSG_GET_MACRO(...) 
#define ATTR_DIR_ENTRYCOUNT 0x00000002
#define _Deref2_pre1_impl_(p1) 
#define STAILQ_ENTRY(type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct { struct type *stqe_next; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define KERN_COREDUMP 51
#define _Out_opt_ptrdiff_cap_(size) _SAL1_1_Source_(_Out_opt_ptrdiff_cap_, (size), _Pre_opt_ptrdiff_cap_(size) _Post_valid_impl_)
#define VM_LEDGER_TAG_MAX 0x00000005
#define _BLKCNT_T 
#define __deref_opt_in_bcount_opt(size) _SAL1_Source_(__deref_opt_in_bcount_opt, (size), __deref_in_bcount_opt(size) __exceptthat __maybenull)
#define CPU_TYPE_POWERPC64 (CPU_TYPE_POWERPC | CPU_ARCH_ABI64)
#define SQLITE_MUTEX_STATIC_APP1 8
#define SQLITE_MUTEX_STATIC_APP2 9
#define SQLITE_LAST_ERRNO SQLITE_FCNTL_LAST_ERRNO
#define UINT64_C(x) (x ## ULL)
#define TAILQ_PREV(elm,headname,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH (*(((struct headname *)((elm)->field.tqe_prev))->tqh_last)) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define __DEQUALIFY(type,var) __CAST_AWAY_QUALIFIER(var, const volatile, type)
#define KERN_KDWRITEMAP 18
#define SIOCSIFFLAGS _IOW('i', 16, struct ifreq)
#define _Deref_post_opt_count_(size) _SAL1_1_Source_(_Deref_post_opt_count_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post1_impl_(__count_impl(size)) _Post_valid_impl_)
#define __no_competing_thread 
#define EPERM 1
#define SQLITE_FCNTL_BEGIN_ATOMIC_WRITE 31
#define CPU_SUBTYPE_PENT CPU_SUBTYPE_INTEL(5, 0)
#define DbMaskAllZero(M) (M)==0
#define NC_IsDDL 0x10000
#define _No_competing_thread_end_ 
#define MEM_Undefined 0x0080
#define SQLITE_SCANSTAT_EST 2
#define __MAC_10_5 1050
#define __has_lock_level(level) 
#define _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS 6
#define SQLITE_LOCKED_SHAREDCACHE (SQLITE_LOCKED | (1<<8))
#define __SIZEOF_LONG__ 8
#define _PC_MAX_INPUT 3
#define __DARWIN_1050INODE64(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_64_BIT_INO_T)
#define _PC_CASE_PRESERVING 12
#define SIOCGIFMEDIA _IOWR('i', 56, struct ifmediareq)
#define __DARWIN_WEOF ((__darwin_wint_t)-1)
#define _Outref_result_nullonfailure_ 
#define __APPLE__ 1
#define OP_IfPos 47
#define __UINT16_C(c) c
#define SQLITE_FORMAT 24
#define PTRMAP_ROOTPAGE 1
#define TASK_VM_INFO_COUNT ((mach_msg_type_number_t) (sizeof (task_vm_info_data_t) / sizeof (natural_t)))
#define ATTR_VOL_ATTRIBUTES 0x40000000
#define PragTyp_FOREIGN_KEY_CHECK 13
#define VOL_CAP_FMT_SYMBOLICLINKS 0x00000002
#define OP_Insert 122
#define HAS_UPDATE_HOOK(DB) ((DB)->xUpdateCallback)
#define TF_HasNotNull 0x0200
#define _SECURECRT_ERRCODE_VALUES_DEFINED 
#define HASHTABLE_HASH_1 383
#define HTONLL(x) (x) = htonll((__uint64_t)x)
#define _Out_defensive_(a) 
#define SCHEMA_ENC(db) ((db)->aDb[0].pSchema->enc)
#define _Deref_post_opt_z_bytecap_x_(size) _SAL1_1_Source_(_Deref_post_opt_z_bytecap_x_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post2_impl_(__zterm_impl,__bytecap_x_impl(size)) _Post_valid_impl_)
#define KIPC_MBSTAT 8
#define __IPHONE_4_1 40100
#define _Outref_result_maybenull_ 
#define SQLITE_CONFIG_PCACHE 14
#define _SIGSET_T 
#define MACH_VOUCHER_ATTR_SET_VALUE_HANDLE ((mach_voucher_attr_recipe_command_t)3)
#define AU_DEFAUDITID (uid_t)(-1)
#define O_WRONLY 0x0001
#define VM_REGION_SUBMAP_INFO_COUNT_64 VM_REGION_SUBMAP_INFO_V2_COUNT_64
#define __APPLE_API_STABLE 
#define KERN_SECURELVL 9
#define __INTMAX_WIDTH__ 64
#define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_MEMORY 0
#define OP_Compare 87
#define CPUFAMILY_INTEL_BROADWELL 0x582ed09c
#define TK_BITAND 99
#define A_OLDGETCOND 20
#define __deref_opt_inout_bcount_nz_opt(size) _SAL1_Source_(__deref_opt_inout_bcount_nz_opt, (size), __deref_opt_inout_bcount_opt(size))
#define SQLITE_IOERR_AUTH (SQLITE_IOERR | (28<<8))
#define _In_opt_count_c_(size) _SAL1_1_Source_(_In_opt_count_c_, (size), _Pre_opt_count_c_(size) _Deref_pre_readonly_)
#define MACH_MSG_TYPE_MAKE_SEND_ONCE 21
#define MACH_MSG_OVERWRITE 3
#define COLUMN_MASK(x) (((x)>31) ? 0xffffffff : ((u32)1<<(x)))
#define LOAD_SCALE 1000
#define CLBYTES (CLSIZE*NBPG)
#define _Inout_opt_ 
#define _timezone (*__timezone())
#define NFS_MAX_FH_SIZE NFSV4_MAX_FH_SIZE
#define TF_Readonly 0x0001
#define MAC_OS_X_VERSION_10_14_1 101401
#define MFSNAMELEN 15
#define MAC_OS_X_VERSION_10_14_4 101404
#define __FLT16_MIN_EXP__ (-13)
#define P_NOSWAP 0
#define _Pre_opt_bytecap_c_(size) _SAL1_1_Source_(_Pre_opt_bytecap_c_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__bytecap_c_impl(size)))
#define _OUT_TO_DEFAULT 0
#define MUTEX_LOGIC(X) X
#define __deref_inout_ecount_part_opt(size,length) _SAL1_Source_(__deref_inout_ecount_part_opt, (size,length), __deref_inout_ecount_part(size,length) __pre_deref_except_maybenull __post_deref_except_maybenull)
#define MAX_AUDIT_RECORD_SIZE MAXAUDITDATA
#define MAP_RESILIENT_MEDIA 0x4000
#define __API_UNAVAILABLE_GET_MACRO(...) 
#define SQLITE_IOCAP_ATOMIC1K 0x00000004
#define SQLITE_INDEX_CONSTRAINT_ISNOT 69
#define SQLITE_SYNC_FULL 0x00003
#define _Struct_size_bytes_(s) 
#define EVFILT_PROC (-5)
#define WHERE_UNQ_WANTED 0x00010000
#define UINTPTR_MAX UINT32_MAX
#define O_SYMLINK 0x00200000
#define _GrouP_(annos) _GrouP_impl_(annos _SAL_nop_impl_)
#define MPO_SERVICE_PORT 0x400
#define ARM_AMX_STATE_V1 25
#define _BSD_MACHINE_SIGNAL_H_ 
#define SQLITE_REINDEX 27
#define MPG_STRICT 0x01
#define BTS_OVERWRITE 0x0008
#define MACH_SEND_TRAILER 0x00020000
#define HOST_CPU_LOAD_INFO_COUNT ((mach_msg_type_number_t) (sizeof (host_cpu_load_info_data_t) / sizeof (integer_t)))
#define SA_ONSTACK 0x0001
#define osWrite ((ssize_t(*)(int,const void*,size_t))aSyscall[11].pCurrent)
#define CLD_NOOP 0
#define __STDC_VERSION__ 201710L
#define OPFLAG_TYPEOFARG 0x80
#define VM_MAP_READ_NULL ((vm_map_read_t) 0)
#define _Scanf_s_format_string_impl_ 
#define MNT_SNAPSHOT 0x40000000
#define FSCALE (1<<FSHIFT)
#define WHERE_ONEPASS_MULTIROW 0x0008
#define __FLT_HAS_DENORM__ 1
#define SQLITE_ResetDatabase 0x02000000
#define __compiler_barrier() __asm__ __volatile__("" ::: "memory")
#define MASKBIT(n) (((Bitmask)1)<<(n))
#define OS_ASSUME_NONNULL_END 
#define SQLITE_FSFLAGS_IS_MSDOS 0x1
#define __ecount_opt(size) _SAL1_Source_(__ecount_opt, (size), __ecount(size) __pre_except_maybenull)
#define STAILQ_REMOVE(head,elm,type,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH do { if (STAILQ_FIRST((head)) == (elm)) { STAILQ_REMOVE_HEAD((head), field); } else { struct type *curelm = STAILQ_FIRST((head)); while (STAILQ_NEXT(curelm, field) != (elm)) curelm = STAILQ_NEXT(curelm, field); STAILQ_REMOVE_AFTER(head, curelm, field); } TRASHIT((elm)->field.stqe_next); } while (0) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define UNIXFILE_URI 0x40
#define ATTR_CMN_NAMEDATTRCOUNT 0x00080000
#define _Readable_bytes_impl_(size) 
#define SQLITE_AFF_REAL 0x45
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1_ARGLIST(_ReturnType,_ReturnPolicy,_DeclSpec,_CC,_FuncName,_VFuncName,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1) __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1_ARGLIST_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _CC, _FuncName, _FuncName ##_s, _VFuncName, _VFuncName ##_s, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1)
#define WHERE_VIRTUALTABLE 0x00000400
#define _Out_range_impl_(min,max) 
#define EVFILT_USER (-10)
#define SQLITE_APICALL 
#define __FORCE_INSTANCE_CRTIMP2 _CRTIMP2
#define UF_OPAQUE 0x00000008
#define swapMixedEndianFloat(X) 
#define VM_PROT_NO_CHANGE ((vm_prot_t) 0x01000000)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_0(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_3(x) x
#define SUPERPAGE_SIZE_2MB 2
#define __field_ecount_part_opt(size,init) _SAL1_Source_(__field_ecount_part_opt, (size,init), __maybenull __elem_writableTo(size) __elem_readableTo(init))
#define __WATCHOS_2_0 20000
#define __WATCHOS_2_1 20100
#define __WATCHOS_2_2 20200
#define assertTruncateConstraint(pPager) 
#define __deref_opt_inout_bcount_opt(size) _SAL1_Source_(__deref_opt_inout_bcount_opt, (size), __deref_inout_bcount_opt(size) __pre_except_maybenull)
#define _MACH_ARM_PROCESSOR_INFO_H_ 
#define _IOB_ENTRIES 3
#define __field_bcount_full(size) _SAL1_Source_(__field_bcount_full, (size), __field_bcount_part(size,size))
#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_1_1(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_HType1,_HArg1,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1) __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_1_1_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName ##_s, _HType1, _HArg1, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1)
#define ECANCELED 105
#define _sys_nerr (*__sys_nerr())
#define SM_EMPTY 3
#define MACH_MSG_BODY_NULL ((mach_msg_body_t *) 0)
#define O_FSYNC O_SYNC
#define P4_FUNCDEF (-8)
#define MACH_MSG_STRICT_REPLY 0x00000200
#define _Deref_post_opt_z_bytecap_(size) _SAL1_1_Source_(_Deref_post_opt_z_bytecap_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post2_impl_(__zterm_impl,__bytecap_impl(size)) _Post_valid_impl_)
#define ts_64 uts.ts_64
#define __DARWIN_1050ALIAS_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_NON_CANCELABLE __DARWIN_SUF_UNIX03)
#define tkWS 1
#define CPUFAMILY_POWERPC_G4 0x77c184ae
#define MEMORY_OBJECT_COPY_INVALID 5
#define _XOPEN_VERSION 600
#define NOTE_EXIT 0x80000000
#define __DBL_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define __inout_xcount_full(size) _SAL1_Source_(__inout_xcount_full, (size), __inout_xcount_part(size,size))
#define MAP_ANON 0x1000
#define SQLITE_SHM_NLOCK 8
#define TK_UNBOUNDED 90
#define PragTyp_WAL_AUTOCHECKPOINT 38
#define MAP_MEM_NAMED_CREATE 0x020000
#define VM_MEMORY_CM_READCACHE 95
#define KERN_LOW_PRI_DELAY 57
#define KERN_KDWRITETR 17
#define CPUFAMILY_INTEL_KABYLAKE 0x0f817246
#define PragTyp_SYNCHRONOUS 33
#define BTREE_USER_VERSION 6
#define SQLITE_FactorOutConst 0x0008
#define MACH_PORT_STATUS_FLAG_IMP_DONATION 0x08
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_SIZE_EX(_DeclSpec,_FuncName,_SecureFuncName,_SecureDstType,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2) _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec size_t __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2);
#define _Releases_nonreentrant_lock_(e) 
#define MACH_VOUCHER_IMPORTANCE_ATTR_ADD_EXTERNAL 1
#define SF_FixedLimit 0x04000
#define TESTBIT(V,I) (V[I>>3]&(1<<(I&7)))!=0
#define TK_DOT 137
#define HW_DISKSTATS 9
#define _PC_2_SYMLINKS 15
#define __HAVE_SPECULATION_SAFE_VALUE 1
#define NOTE_VM_PRESSURE_SUDDEN_TERMINATE 0x20000000
#define __field_bcount_opt(size) _SAL1_Source_(__field_bcount_opt, (size), __maybenull __byte_writableTo(size))
#define __null_unspecified 
#define _SC_CLK_TCK 3
#define TK_CONSTRAINT 115
#define DOTLOCK_SUFFIX ".lock"
#define WHERE_IDX_ONLY 0x00000040
#define _Post3_impl_(p1,p2,p3) 
#define __sdv_save_adapter_context(c) 
#define IsVirtual(X) ((X)->nModuleArg)
#define __byte_writableTo(size) 
#define SIOCIFCREATE2 _IOWR('i', 122, struct ifreq)
#define _POSIX_THREAD_SPORADIC_SERVER (-1)
#define MACH_MSG_TYPE_PORT_SEND_ONCE MACH_MSG_TYPE_MOVE_SEND_ONCE
#define HOST_SYSPOLICYD_PORT (22 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define F_CHECK_LV 98
#define MACH_VOUCHER_TRAP_STACK_LIMIT 256
#define OP_Multiply 105
#define TK_INSERT 123
#define PTHREAD_CANCEL_ENABLE 0x01
#define TK_LIMIT 144
#define MS_SYNC 0x0010
#define VM_BEHAVIOR_RANDOM ((vm_behavior_t) 1)
#define SQLITE_DeferFKs 0x00080000
#define SQLITE_PTRSIZE __SIZEOF_POINTER__
#define _PC_REC_MAX_XFER_SIZE 21
#define islessgreater(x,y) ((_FPCOMPARE(x, y) & (_FP_LT | _FP_GT)) != 0)
#define __FLT32X_HAS_DENORM__ 1
#define SA_64REGSET 0x0200
#define sqlite3ParserARG_FETCH 
#define WHERE_COLUMN_EQ 0x00000001
#define PROC_FLAG_IOS_APPLEDAEMON 0x20000
#define ARM_PAGEIN_STATE_COUNT ((mach_msg_type_number_t) (sizeof (arm_pagein_state_t)/sizeof(uint32_t)))
#define __WATCHOS_UNAVAILABLE 
#define MNT_WAIT 1
#define OP_PureFunc 64
#define _SC_V6_ILP32_OFF32 103
#define TK_IMMEDIATE 8
#define SQLITE_LIMIT_ATTACHED 7
#define CC_COMMA 23
#define _POSIX_REGEXP 200112L
#define __inner_bound 
#define UINT_LEAST8_MAX UINT8_MAX
#define VFS_CTL_SERVERINFO 0x00010009
#define __IPHONE_3_0 30000
#define __IPHONE_3_1 30100
#define __IPHONE_3_2 30200
#define CTL_HW 6
#define _V6_LPBIG_OFFBIG __LPBIG_OFFBIG
#define _SC_ASYNCHRONOUS_IO 28
#define __field_encoded_array _SAL_L_Source_(__field_encoded_array, (), __inner_encoded)
#define MACH_PORT_SRIGHTS_PRESENT 1
#define _Inout_updates_to_opt_(s,c) 
#define INFINITY ((float)(_HUGE_ENUF * _HUGE_ENUF))
#define THREAD_INSPECT_PORT 2
#define IPC_SPACE_INSPECT_NULL ((ipc_space_inspect_t) 0)
#define _POSIX_MEMORY_PROTECTION 200112L
#define sqlite3MemdebugSetType(X,Y) 
#define SQLITE_DqsDML 0x40000000
#define _Deref_pre_z_cap_(size) _SAL1_1_Source_(_Deref_pre_z_cap_, (size), _Deref_pre1_impl_(__notnull_impl_notref) _Deref_pre2_impl_(__zterm_impl,__cap_impl(size)) _Pre_valid_impl_)
#define _D0_C 3
#define _In_opt_count_x_(size) _SAL1_1_Source_(_In_opt_count_x_, (size), _Pre_opt_count_x_(size) _Deref_pre_readonly_)
#define _SC_RAW_SOCKETS 119
#define AUDIT_SCNT 0x0400
#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_0(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SalAttributeDst,_DstType,_Dst) __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_0_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName ##_s, _SalAttributeDst, _DstType, _Dst)
#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2) __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName ##_s, _DstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2)
#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_3(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2,_TType3,_TArg3) __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_3_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName ##_s, _DstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3)
#define VM_FLAGS_ANYWHERE 0x0001
#define _POSIX2_LOCALEDEF 200112L
#define MACH_VOUCHER_ATTR_NOOP ((mach_voucher_attr_recipe_command_t)0)
#define CTLFLAG_RD 0x80000000
#define P4_TABLE (-6)
#define CTLFLAG_RW (CTLFLAG_RD|CTLFLAG_WR)
#define __FLT64_MIN_10_EXP__ (-307)
#define CPU_SUBTYPE_PENTPRO CPU_SUBTYPE_INTEL(6, 1)
#define F_RDAHEAD 45
#define _SC_THREAD_SPORADIC_SERVER 92
#define MEM_Zero 0x4000
#define MACH_RCV_SCATTER_SMALL 0x1000400e
#define SQLITE_OPEN_PRIVATECACHE 0x00040000
#define MAP_MEM_POSTED 6
#define TK_FLOAT 148
#define MACH_MSGH_BITS_IMPHOLDASRT 0x10000000U
#define cr_gid cr_groups[0]
#define _Ret_bound_impl_ 
#define _In_ptrdiff_count_(size) _SAL1_1_Source_(_In_ptrdiff_count_, (size), _Pre_ptrdiff_count_(size) _Deref_pre_readonly_)
#define __drv_in(annotes) _Pre_ _Group_(annotes _SAL_nop_impl_)
#define PTHREAD_RECURSIVE_MUTEX_INITIALIZER {_PTHREAD_RECURSIVE_MUTEX_SIG_init, {0}}
#define ExplainQueryPlanPop(P) sqlite3VdbeExplainPop(P)
#define S_BLKSIZE 512
#define VFS_CTL_TIMEO 0x00010005
#define ___drv_unit_user_driver _SAL_L_Source_(___drv_unit_user_driver, (), _SA_annotes0(SAL_nokernel) _SA_annotes0(SAL_driver))
#define SQLITE_FCNTL_WIN32_AV_RETRY 9
#define _STRUCT_TIMEVAL64 
#define _Writable_bytes_(s) 
#define __strfmonlike(fmtarg,firstvararg) __attribute__((__format__ (__strfmon__, fmtarg, firstvararg)))
#define TIOCM_DSR 0400
#define SEGV_MAPERR 1
#define host_set_automountd_port(host,port) (host_set_special_port((host), HOST_AUTOMOUNTD_PORT, (port)))
#define _Ret_writes_z_(s) 
#define __inout_xcount_full_opt(size) _SAL1_Source_(__inout_xcount_full_opt, (size), __inout_xcount_full(size) __exceptthat __maybenull)
#define TIOCM_DTR 0002
#define SQLITE_CORRUPT 11
#define SQLITE_FCNTL_SYNC_OMITTED 8
#define SQLITE_FCNTL_WAL_BLOCK 24
#define P5_ConstraintFK 4
#define __deref_inout_nz_opt _SAL1_Source_(__deref_inout_nz_opt, (), __deref_inout_opt)
#define SM_PRIVATE_ALIASED 6
#define _Outref_result_buffer_all_(s) 
#define CTLFLAG_WR 0x40000000
#define NOTE_EXIT_DETAIL 0x02000000
#define VM_REGION_SUBMAP_INFO_COUNT ((mach_msg_type_number_t) (sizeof(vm_region_submap_info_data_t) / sizeof(natural_t)))
#define TK_LSHIFT 101
#define MAP_MEM_VM_COPY 0x200000
#define EP_FromJoin 0x000001
#define MAN754 ((((u64)1)<<52)-1)
#define TK_ROLLBACK 12
#define _Pre_null_ _Pre_ _Null_
#define HOST_USER_NOTIFICATION_PORT (3 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define _Post_bytecap_(size) _SAL1_1_Source_(_Post_bytecap_, (size), _Post1_impl_(__bytecap_impl(size)))
#define A_GETPOLICY 33
#define __SIZEOF_SIZE_T__ 8
#define __DARWIN_ALIAS_STARTING(_mac,_iphone,x) __DARWIN_ALIAS_STARTING_MAC_ ##_mac(x)
#define EXCLUSIVE_LOCK 4
#define __offsetof(type,field) __builtin_offsetof(type, field)
#define task_set_bootstrap_port(task,port) (task_set_special_port((task), TASK_BOOTSTRAP_PORT, (port)))
#define TASK_INFO_MAX (1024)
#define NOTE_EXIT_DECRYPTFAIL 0x00010000
#define PTHREAD_MUTEX_INITIALIZER {_PTHREAD_MUTEX_SIG_init, {0}}
#define SQLITE_FREE(x) malloc_zone_free(_sqliteZone_, (x));
#define POLICY_TIMESHARE_BASE_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_timeshare_base)/sizeof(integer_t)))
#define VdbeCoverageIf(v,x) 
#define SIG_BLOCK 1
#define POLICYCLASS_FIXEDPRI (POLICY_RR | POLICY_FIFO)
#define OP_NotExists 31
#define VOL_CAP_INT_VOL_RENAME 0x00000080
#define _CRT_JIT_INTRINSIC 
#define assertParentIndex(x,y,z) 
#define __FLT64X_MIN_EXP__ (-16381)
#define __MAC_10_14_6 101406
#define ATTR_BULK_REQUIRED (ATTR_CMN_NAME | ATTR_CMN_RETURNED_ATTRS)
#define POLICY_RR 2
#define sqlite3Parser_ENGINEALWAYSONSTACK 1
#define EV_DISABLE 0x0008
#define pagerReportSize(X) 
#define NOTE_VM_PRESSURE_TERMINATE 0x40000000
#define P_DIRTY_SHUTDOWN 0x00000010
#define __IPHONE_11_0 110000
#define __IPHONE_11_1 110100
#define __IPHONE_11_2 110200
#define __IPHONE_11_3 110300
#define __IPHONE_11_4 110400
#define ATTR_VOL_SIGNATURE 0x00000002
#define USER_LINE_MAX 8
#define _POSIX2_PBS_ACCOUNTING (-1)
#define _Inout_updates_z_(s) 
#define initMaskSet(P) (P)->n=0
#define CPUFAMILY_INTEL_PENRYN 0x78ea4fbc
#define HW_CACHELINE 16
#define PAGER_SYNCHRONOUS_NORMAL 0x02
#define KERN_TFP 61
#define STAT_GET_STAT1 0
#define __pre_except_maybenull 
#define _Deref_pre_opt_bytecap_c_(size) _SAL1_1_Source_(_Deref_pre_opt_bytecap_c_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre1_impl_(__bytecap_c_impl(size)))
#define KERN_CHECKOPENEVT 70
#define _TIME64_T_DEFINED 
#define pthread_cleanup_push(func,val) { struct __darwin_pthread_handler_rec __handler; pthread_t __self = pthread_self(); __handler.__routine = func; __handler.__arg = val; __handler.__next = __self->__cleanup_stack; __self->__cleanup_stack = &__handler;
#define S_IWUSR 0000200
#define CTL_VM 2
#define _Ret_range_impl_(min,max) 
#define CPU_SUBTYPE_ARM64_PTR_AUTH_MASK 0x0f000000
#define SF_Compound 0x00100
#define STAILQ_NEXT(elm,field) ((elm)->field.stqe_next)
#define __acquires_exclusive_lock(lock) 
#define PAGE_IS_UNPINNED(p) ((p)->pLruNext!=0)
#define SQLITE_TESTCTRL_LAST 29
#define _Deref_pre_readonly_ _SAL1_1_Source_(_Deref_pre_readonly_, (), _Deref_pre1_impl_(__readaccess_impl_notref))
#define osGetcwd ((char*(*)(char*,size_t))aSyscall[3].pCurrent)
#define SQLITE_MUTEX_NREF 0
#define _VCRTIMP _CRTIMP
#define UINT_LEAST16_MAX UINT16_MAX
#define __inout_bcount_nz_opt(size) _SAL1_Source_(__inout_bcount_nz_opt, (size), __inout_bcount_opt(size))
#define F_UNLCK 2
#define __DARWIN_FD_SET(n,p) __darwin_fd_set((n), (p))
#define __checkReturn _SAL1_Source_(__checkReturn, (), _Check_return_)
#define __bcount(size) _SAL1_Source_(__bcount, (size), __notnull __byte_writableTo(size))
#define TASK_ACCESS_PORT 9
#define _Group_(a) 
#define OP_Copy 78
#define TK_INITIALLY 64
#define _PC_LINK_MAX 1
#define TK_AS 24
#define __DEFINE_CPP_OVERLOAD_INLINE_NFUNC_0_0_EX(_ReturnType,_ReturnPolicy,_FuncName,_SecureFuncName,_SecureDstType,_DstType,_Dst) 
#define SQLITE_CHECKPOINT_FULL 1
#define __data_entrypoint(category) _SAL_L_Source_(__data_entrypoint, (category), __inner_data_entrypoint(category))
#define WINDOW_NTH_VALUE_INT 2
#define _Deref_pre_count_(size) _SAL1_1_Source_(_Deref_pre_count_, (size), _Deref_pre1_impl_(__notnull_impl_notref) _Deref_pre1_impl_(__count_impl(size)) _Pre_valid_impl_)
#define _BSD_MACHINE__TYPES_H_ 
#define __swift_unavailable(_msg) 
#define MALLOC_PTR_REGION_RANGE_TYPE 2
#define SUPERPAGE_SIZE_ANY 1
#define SQLITE_IOERR_ROLLBACK_ATOMIC (SQLITE_IOERR | (31<<8))
#define _XOPEN_SHM (1)
#define EXC_MASK_MACHINE 0
#define SLOT_2_0 0x001fc07f
#define EXC_MACF_MAX 0x2FFFF
#define CPUFAMILY_ARM_CYCLONE 0x37a09642
#define PARSE_TAIL_SZ (sizeof(Parse)-PARSE_RECURSE_SZ)
#define SEGV_ACCERR 2
#define TIOCMODS _IOW('t', 4, int)
#define MACH_MSG_TYPE_INTEGER_T MACH_MSG_TYPE_INTEGER_32
#define TASK_KERNELMEMORY_INFO_COUNT ((mach_msg_type_number_t) (sizeof (task_kernelmemory_info_data_t) / sizeof (natural_t)))
#define F_GETPATH_MTMINFO 71
#define BTREE_TEXT_ENCODING 5
#define MACH_MSGH_BITS_SET_PORTS(remote,local,voucher) (((remote) & MACH_MSGH_BITS_REMOTE_MASK) | (((local) << 8) & MACH_MSGH_BITS_LOCAL_MASK) | (((voucher) << 16) & MACH_MSGH_BITS_VOUCHER_MASK))
#define OP_Destroy 136
#define HOST_LOCAL_NODE -1
#define __deref_inout_xcount_part_opt(size,length) _SAL1_Source_(__deref_inout_xcount_part_opt, (size,length), __deref_inout_xcount_part(size,length) _Pre_ __deref __exceptthat __maybenull _Post_ __deref __exceptthat __maybenull)
#define _POSIX_ADVISORY_INFO (-1)
#define _Deref_post_z_cap_(size) _SAL1_1_Source_(_Deref_post_z_cap_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post2_impl_(__zterm_impl,__cap_impl(size)) _Post_valid_impl_)
#define USER_CS_PATH 1
#define _Outref_result_bytebuffer_to_maybenull_(s,c) 
#define _Deref_out_bound_ _SAL1_1_Source_(_Deref_out_bound_, (), _Deref_out_bound_impl_)
#define F_LOCK 1
#define P_DIRTY_DEFER_ALWAYS 0x00000400
#define CPU_SUBTYPE_POWERPC_604e ((cpu_subtype_t) 7)
#define VFS_CTL_STATFS64 0x0001000B
#define _Ret_bytecount_x_(size) _SAL1_1_Source_(_Ret_bytecount_x_, (size), _Ret1_impl_(__notnull_impl_notref) _Ret1_impl_(__bytecount_x_impl(size)) _Ret_valid_impl_)
#define OP_SorterNext 3
#define KERN_INVALID_OBJECT 29
#define __ATOMIC_CONSUME 1
#define __FLT64_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F64
#define __DBL_MIN__ ((double)2.22507385850720138309023271733240406e-308L)
#define TK_EQ 53
#define MEM_Null 0x0001
#define __ARM_FP16_FORMAT_IEEE 1
#define TK_FOLLOWING 86
#define LOCK_NB 0x04
#define VM_MEMORY_COREGRAPHICS_SHARED 55
#define _MACH_MACHINE_H_ 
#define _Out_opt_bytecap_c_(size) _SAL1_1_Source_(_Out_opt_bytecap_c_, (size), _Pre_opt_bytecap_c_(size) _Post_valid_impl_)
#define isclr(a,i) ((((unsigned char *)(a))[(i)/NBBY] & (1u<<((i)%NBBY))) == 0)
#define P_TRANSLATED 0x00020000
#define __ILP32_OFFBIG (-1)
#define VOL_CAP_INT_RENAME_SWAP 0x00040000
#define MAXAUDITDATA (0x8000 - 1)
#define MACH_MSGH_KIND_NORMAL 0x00000000
#define TK_GE 57
#define _PTHREAD_QOS_H 
#define TK_GT 54
#define __not_tail_called 
#define VOL_CAP_FMT_DIR_HARDLINKS 0x00040000
#define MNT_NOUSERXATTR 0x01000000
#define CC_PIPE 10
#define _O_RDONLY 0x0000
#define TASK_DYLD_ALL_IMAGE_INFO_32 0
#define osGeteuid ((uid_t(*)(void))aSyscall[21].pCurrent)
#define TK_ID 59
#define TK_IF 18
#define WALINDEX_MAX_VERSION 3007000
#define _SYS_ATTR_H_ 
#define TK_IN 49
#define TK_IS 45
#define TK_AGG_FUNCTION 163
#define CPU_SUBTYPE_POWERPC_601 ((cpu_subtype_t) 1)
#define CPU_SUBTYPE_POWERPC_602 ((cpu_subtype_t) 2)
#define CPU_SUBTYPE_POWERPC_603 ((cpu_subtype_t) 3)
#define CPU_SUBTYPE_POWERPC_604 ((cpu_subtype_t) 6)
#define TASK_VM_INFO_PURGEABLE_ACCOUNT 27
#define __drv_typeConst 0
#define CPU_TYPE_POWERPC ((cpu_type_t) 18)
#define SIGTRAP 5
#define OPFLAG_PERMUTE 0x01
#define __nonnull 
#define SQLITE_PERM 3
#define _POSIX_THREAD_ATTR_STACKSIZE 200112L
#define P4_VTAB (-12)
#define __field_xcount_part_opt(size,init) _SAL1_Source_(__field_xcount_part_opt, (size,init), __maybenull __inexpressible_writableTo(size) __inexpressible_readableTo(init))
#define HW_CPU_FREQ 15
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10_3(x) x
#define A_GETQCTRL 35
#define O_DSYNC 0x400000
#define YY_ERROR_ACTION 1171
#define __failure(x) 
#define SIOCIFGCLONERS _IOWR('i', 129, struct if_clonereq)
#define __API_DEPRECATED_BEGIN_MSG_GET_MACRO(...) 
#define USEFETCH(x) ((x)->bUseFetch)
#define as_v1 uas.as_v1
#define TASK_DYLD_ALL_IMAGE_INFO_64 1
#define KERN_BOOTTIME 21
#define CPU_TYPE_X86_64 (CPU_TYPE_X86 | CPU_ARCH_ABI64)
#define KERN_TTY 69
#define __aarch64__ 1
#define SQLITE_LOCKED_VTAB (SQLITE_LOCKED | (2<<8))
#define __deref_opt_ecount(size) _SAL1_Source_(__deref_opt_ecount, (size), __deref_ecount(size) __pre_except_maybenull)
#define TK_LP 22
#define HOST_CPU_LOAD_INFO 3
#define __deref_in_bcount(size) _SAL1_Source_(__deref_in_bcount, (size), __deref_in _Pre_ __deref __byte_readableTo(size))
#define TARGET_OS_IPHONE 0
#define __ARM_FP16_ARGS 1
#define SIOCGIFBOND _IOWR('i', 71, struct ifreq)
#define TK_WITHOUT 25
#define P_DIRTY_TRACK 0x00000001
#define SIOCSIFMETRIC _IOW('i', 24, struct ifreq)
#define VM_REGION_BASIC_INFO 10
#define _Deref_out_opt_z_ _SAL1_1_Source_(_Deref_out_opt_z_, (), _Out_ _Deref_post_opt_z_)
#define __FLT64X_DECIMAL_DIG__ 36
#define _MACH_MACHINE_THREAD_STATUS_H_ 
#define TARGET_OS_WINDOWS 0
#define TK_NO 66
#define _CRT_BEGIN_C_HEADER __pragma(pack(push, _CRT_PACKING))
#define FUNC_PERFECT_MATCH 6
#define __FORCE_INSTANCE_EXTERN extern
#define TK_FIRST 83
#define _Inout_bytecount_x_(size) _SAL1_1_Source_(_Inout_bytecount_x_, (size), _Prepost_bytecount_x_(size))
#define MACH_MSGH_BITS_DENAPHOLDASRT MACH_MSGH_BITS_IMPHOLDASRT
#define __DBL_HAS_DENORM__ 1
#define INT_LEAST32_MAX INT32_MAX
#define OP_Blob 75
#define USER_POSIX2_VERSION 10
#define __out_bcount_full_z(size) _SAL1_Source_(__out_bcount_full_z, (size), __out_bcount_full(size) __post __nullterminated)
#define SQLITE_PROTOCOL 15
#define __MAC_10_11_2 101102
#define __MAC_10_11_3 101103
#define __MAC_10_11_4 101104
#define SQLITE_TESTCTRL_PRNG_SEED 28
#define TK_OF 68
#define TK_ON 111
#define TK_OR 43
#define PROXY_PATHINDEX (PROXY_HEADERLEN+PROXY_HOSTIDLEN)
#define OP_Function0 63
#define _CS_XBS5_ILP32_OFFBIG_LDFLAGS 25
#define SQLITE_SHM_SHARED 4
#define __OS_AVAILABILITY(_target,_availability) 
#define MACH_RCV_TRAILER_AUDIT 3
#define CKPT_SYNC_FLAGS(X) (((X)>>2)&0x03)
#define WHERE_DISTINCTBY 0x0080
#define __out_bound _SAL_L_Source_(__out_bound, (), _Post_ __inner_bound)
#define _Out_bound_impl_ 
#define TASK_BASE_QOS_POLICY 8
#define HASHTABLE_NSLOT (HASHTABLE_NPAGE*2)
#define MINCORE_REFERENCED 0x2
#define __FLT32_MIN__ 1.17549435082228750796873653722224568e-38F32
#define __UINT8_TYPE__ unsigned char
#define _SC_BC_BASE_MAX 9
#define SQLITE_FUNC_TYPEOF 0x0080
#define MACH_SEND_MSG_TOO_SMALL 0x10000008
#define EP_IntValue 0x000400
#define SF_SUPPORTED 0x009f0000
#define P_DIRTY 0x00000008
#define BTREE_APPLICATION_ID 8
#define KERN_UNRAGE_THREAD 4
#define _FE_INEXACT 0x20
#define __blocksOn(resource) _SAL_L_Source_(__blocksOn, (resource), __inner_blocksOn(resource))
#define CLOCKS_PER_SEC ((clock_t)1000)
#define SQLITE_IOERR_LOCK (SQLITE_IOERR | (15<<8))
#define ROUNDDOWN8(x) ((x)&~7)
#define __DEFINE_CPP_OVERLOAD_INLINE_FUNC_0_1_EX(_ReturnType,_ReturnPolicy,_FuncName,_SecureFuncName,_SecureDstType,_DstType,_Dst,_TType1,_TArg1) 
#define _Deref_pre_opt_bytecap_x_(size) _SAL1_1_Source_(_Deref_pre_opt_bytecap_x_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre1_impl_(__bytecap_x_impl(size)))
#define S_ISLNK(m) (((m) & S_IFMT) == S_IFLNK)
#define _IRQL_limited_to_(level) ASSERT(KeGetCurrentIrql() <= level); _Analysis_assume_(KeGetCurrentIrql() <= level);
#define MAX_CANON 1024
#define ARM_PAGEIN_STATE 27
#define _Deref_post_cap_(size) _SAL1_1_Source_(_Deref_post_cap_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post1_impl_(__cap_impl(size)))
#define _SC_TRACE_NAME_MAX 128
#define __MAC_OS_X_VERSION_MAX_ALLOWED __MAC_12_3
#define __MAC_10_11 101100
#define __MAC_10_12 101200
#define __MAC_10_13 101300
#define ILL_NOOP 0
#define FD_ZERO(p) __DARWIN_FD_ZERO(p)
#define _SYS_MOUNT_H_ 
#define PGOFSET (NBPG-1)
#define __analysis_assume_nullterminated(x) _Analysis_assume_nullterminated_(x)
#define TK_TO 15
#define _INFCODE 1
#define clrnd(i) (i)
#define BTREE_SINGLE 4
#define SLIST_FIRST(head) ((head)->slh_first)
#define _PC_CASE_SENSITIVE 11
#define POSIX_MADV_SEQUENTIAL 2
#define __darwin_arm_thread_state64_set_lr_fptr(ts,fptr) ((ts).__lr = (uintptr_t)(fptr))
#define BADSIG SIG_ERR
#define _SC_XOPEN_ENH_I18N 109
#define __GNUC_MINOR__ 2
#define VM_MEMORY_MALLOC_PGUARD 13
#define CPU_SUBTYPE_POWERPC_970 ((cpu_subtype_t) 100)
#define MINCORE_MODIFIED_OTHER 0x10
#define INT_LEAST32_MIN INT32_MIN
#define SIGEV_SIGNAL 1
#define VOL_CAP_INT_ADVLOCK 0x00000100
#define PAGER_WRITER_CACHEMOD 3
#define DST_EET 5
#define VQ_NEEDAUTH 0x0002
#define TASK_SCHED_TIMESHARE_INFO 10
#define osOpen ((int(*)(const char*,int,int))aSyscall[0].pCurrent)
#define CPUFAMILY_INTEL_SKYLAKE 0x37fc219f
#define _INC_CRTDEFS 
#define host_set_syspolicyd_port(host,port) (host_set_special_port((host), HOST_SYSPOLICYD_PORT, (port)))
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_0(_ReturnType,_FuncName,_DstType,_Dst) 
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1(_ReturnType,_FuncName,_DstType,_Dst,_TType1,_TArg1) 
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_2(_ReturnType,_FuncName,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2) 
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_3(_ReturnType,_FuncName,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2,_TType3,_TArg3) 
#define TIMER_START 
#define _DMASK ((unsigned short)(0x7fff & ~_DFRAC))
#define __inner_blocksOn(resource) 
#define TK_SEMI 1
#define ENETDOWN 116
#define VM_SWAPUSAGE 5
#define MACH_PORT_TYPE_SEND_RIGHTS (MACH_PORT_TYPE_SEND|MACH_PORT_TYPE_SEND_ONCE)
#define st_mtime st_mtimespec.tv_sec
#define TAILQ_EMPTY(head) ((head)->tqh_first == NULL)
#define KERNEL_VERSION_MAX (512)
#define TK_GROUP 142
#define SF_HasTypeInfo 0x00080
#define PROCESSOR_CPU_LOAD_INFO_COUNT ((mach_msg_type_number_t) (sizeof(processor_cpu_load_info_data_t)/sizeof(natural_t)))
#define __in_ecount(size) _SAL1_Source_(__in_ecount, (size), _In_reads_(size))
#define OP_ReopenIdx 96
#define KERN_MAXVNODES 5
#define __this_out_validated(typ_sym) _SAL_L_Source_(__this_out_validated, (src_sym), __inner_this_out_validated(#typ_sym))
#define XN_ROWID (-1)
#define SQLITE_STMTSTATUS_MEMUSED 99
#define F_NOCACHE 48
#define __deref_opt_out_xcount_opt(size) _SAL1_Source_(__deref_opt_out_xcount_opt, (size), __deref_out_xcount_opt(size) __exceptthat __maybenull)
#define _FSID_T 
#define F_ULOCK 0
#define P4_INT32 (-3)
#define EXCEPTION_CODE_MAX 2
#define _LSIGN_C(_Val) (((_ldouble_val*)(char*)&(_Val))->_Sh[_L0_C] & _LSIGN)
#define _Outptr_opt_result_bytebuffer_all_maybenull_(size) _SAL2_Source_(_Outptr_opt_result_bytebuffer_all_maybenull_, (size), _Out_opt_impl_ _Deref_post2_impl_(__maybenull_impl_notref, __bytecount_impl(size)))
#define stoc(x) (x)
#define __LDBL_DECIMAL_DIG__ 17
#define _Pre_satisfies_(e) 
#define _LHUGE_EXP (int)(_LMAX * 900L / 1000)
#define SRVAL(p) ((void*)((SorterRecord*)(p) + 1))
#define ATTR_CMNEXT_CLONEID 0x00000100
#define _Out_opt_bytecap_x_(size) _SAL1_1_Source_(_Out_opt_bytecap_x_, (size), _Pre_opt_bytecap_x_(size) _Post_valid_impl_)
#define _SC_FSYNC 38
#define _In_range_impl_(min,max) 
#define F_ADDFILESIGS_INFO 103
#define _OFF_T 
#define VQ_NEARLOWDISK 0x2000
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#define _INTSIZEOF(n) ( (sizeof(n) + sizeof(int) - 1) & ~(sizeof(int) - 1) )
#define _POSIX_THREAD_PROCESS_SHARED 200112L
#define sqlite3FileSuffix3(X,Y) 
#define __inner_data_entrypoint(category) 
#define SQLITE_GroupByOrder 0x0004
#define __inexpressible_writableTo(size) 
#define SQLITE_BYTEORDER 1234
#define __FLT16_MAX_EXP__ 16
#define TIOCUCNTL _IOW('t', 102, int)
#define _SC_2_LOCALEDEF 23
#define _CRTDATA(x) _CRTIMP x
#define __deref_out_bcount_z_opt(size) _SAL1_Source_(__deref_out_bcount_z_opt, (size), __deref_out_bcount_opt(size) __post __deref __nullterminated)
#define _Field_size_opt_(s) 
#define OP_Clear 137
#define SF_Values 0x00200
#define sqlite3StackFree(D,P) sqlite3DbFree(D,P)
#define PROCESSOR_BASIC_INFO_COUNT ((mach_msg_type_number_t) (sizeof(processor_basic_info_data_t)/sizeof(natural_t)))
#define MACH_VM_MAX_GPU_CARVEOUT_ADDRESS ((mach_vm_offset_t) MACH_VM_MAX_GPU_CARVEOUT_ADDRESS_RAW)
#define __deref_inout_ecount_opt(size) _SAL1_Source_(__deref_inout_ecount_opt, (size), __deref_inout_ecount(size) __pre_deref_except_maybenull __post_deref_except_maybenull)
#define __file_parser_library(typ) 
#define _SC_MQ_PRIO_MAX 75
#define HOST_VM_PURGABLE 9
#define __DEVOLATILE(type,var) __CAST_AWAY_QUALIFIER(var, volatile, type)
#define TK_TRUEFALSE 165
#define ATTR_CMN_OBJTYPE 0x00000008
#define P_NOSHLIB 0x10000000
#define SQLITE_COPY 0
#define SimulateIOError(A) 
#define __xcount(size) _SAL1_Source_(__xcount, (size), __notnull __inexpressible_writableTo(size))
#define EV_DISPATCH2 (EV_DISPATCH | EV_UDATA_SPECIFIC)
#define TH_STATE_WAITING 3
#define ISAUTOVACUUM (pBt->autoVacuum)
#define _Field_size_(s) 
#define MACH_PORT_QLIMIT_MAX MACH_PORT_QLIMIT_LARGE
#define host_set_user_notification_port(host,port) (host_set_special_port((host), HOST_USER_NOTIFICATION_PORT, (port)))
#define MACH_VOUCHER_ATTR_TEST_STORE MACH_VOUCHER_ATTR_USER_DATA_STORE
#define CPUFAMILY_UNKNOWN 0
#define _Requires_no_locks_held_ 
#define CIRCLEQ_NEXT(elm,field) ((elm)->field.cqe_next)
#define MAP_RESERVED0080 0x0080
#define __out_ecount_opt(size) _SAL1_Source_(__out_ecount_opt, (size), _Out_writes_opt_(size))
#define SQLITE_CORE 1
#define NC_HasWin 0x8000
#define CPUFAMILY_ARM_XSCALE 0x53b005f5
#define VM_MEMORY_UNSHARED_PMAP 35
#define _Kernel_clear_do_init_(yn) 
#define MAC_OS_X_VERSION_10_15_1 101501
#define TK_OTHERS 93
#define LIST_INIT(head) do { LIST_FIRST((head)) = NULL; } while (0)
#define __FLT128_DIG__ 33
#define __control_entrypoint(category) _SAL_L_Source_(__control_entrypoint, (category), __inner_control_entrypoint(category))
#define AUDIT_USER 0x0040
#define OP_ResultRow 81
#define __out_ecount_part_opt(size,length) _SAL1_Source_(__out_ecount_part_opt, (size,length), __out_ecount_part(size,length) __pre_except_maybenull)
#define _Out_opt_z_bytecap_post_bytecount_(cap,count) _SAL1_1_Source_(_Out_opt_z_bytecap_post_bytecount_, (cap,count), _Pre_opt_bytecap_(cap) _Post_valid_impl_ _Post_z_bytecount_(count))
#define COLFLAG_HIDDEN 0x0002
#define F_NODIRECT 62
#define MPO_CONTEXT_AS_GUARD 0x01
#define CPU_SUBTYPE_HPPA_ALL ((cpu_subtype_t) 0)
#define CPU_SUBTYPE_MC68030 ((cpu_subtype_t) 1)
#define ARM_UNIFIED_THREAD_STATE ARM_THREAD_STATE
#define CRF_MAC_ENFORCE 0x00000002
#define SQLITE_AFF_BLOB 0x41
#define _Post_invalid_ _Post_ _Deref_ _Notvalid_
#define CPU_SUBTYPE_HPPA_7100 ((cpu_subtype_t) 0)
#define _SYS_TIME_H_ 
#define EP_CanBeNull 0x100000
#define btodb(bytes,devBlockSize) ((unsigned)(bytes) / devBlockSize)
#define CPU_SUBTYPE_MC68040 ((cpu_subtype_t) 2)
#define S_IWGRP 0000020
#define OP_SequenceTest 115
#define MACH_RCV_INVALID_DATA 0x10004008
#define _Scanf_format_string_impl_ 
#define __inout_bcount_part(size,length) _SAL1_Source_(__inout_bcount_part, (size,length), _Inout_updates_bytes_to_(size,length))
#define F_OK 0
#define _PC_PATH_MAX 5
#define MACH_MSG_TRAILER_FORMAT_0_SIZE sizeof(mach_msg_format_0_trailer_t)
#define SYSTEM_CLOCK 0
#define SQLITE_MAX_SCHEMA_RETRY 50
#define PAGE_MASK vm_page_mask
#define EXC_CORPSE_NOTIFY 13
#define AUDIT_TRIGGER_INITIALIZE 7
#define OP_Column 90
#define _INT64_T 
#define PragTyp_DATABASE_LIST 10
#define TIOCDRAIN _IO('t', 94)
#define _Notnull_ 
#define MACH_RCV_PORT_CHANGED 0x10004006
#define _Literal_ 
#define TK_STAR 105
#define SQLITE_ROW 100
#define host_get_atm_notification_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_ATM_NOTIFICATION_PORT, (port)))
#define __deref_opt_bcount_opt(size) _SAL1_Source_(__deref_opt_bcount_opt, (size), __deref_bcount_opt(size) __pre_except_maybenull)
#define DELAY(n) { int N = (n); while (--N > 0); }
#define ATTR_VOL_SETMASK 0x80002000
#define TARGET_OS_EMBEDDED 0
#define _SC_TIMER_MAX 52
#define __drv_releasesResource(kind) _SAL1_1_Source_(__drv_releasesResource, (kind), _Releases_lock_(_Curr_))
#define _In_count_(size) _SAL1_1_Source_(_In_count_, (size), _Pre_count_(size) _Deref_pre_readonly_)
#define __drv_neverHoldCancelSpinLock 
#define SAVEPOINT_BEGIN 0
#define OP_DropTrigger 145
#define _Ret3_impl_(p1,p2,p3) 
#define AUDIT_TRIGGER_ROTATE_USER 6
#define _Frees_ptr_opt_ _SAL_L_Source_(_Frees_ptr_opt_, (), _Pre_maybenull_ _Post_ptr_invalid_ __drv_freesMem(Mem))
#define __DARWIN_ALIAS_STARTING_MAC___MAC_12_0(x) x
#define _PC_NO_TRUNC 8
#define F_SETOWN 6
#define KERN_DUMMY 33
#define ARM_THREAD_STATE32_COUNT ((mach_msg_type_number_t) (sizeof (arm_thread_state32_t)/sizeof(uint32_t)))
#define __WATCHOS_3_0 30000
#define __WATCHOS_3_1 30100
#define __WATCHOS_3_2 30200
#define YYNRULE 381
#define EXC_MASK_RESOURCE (1 << EXC_RESOURCE)
#define _CRT_APPEND(_Value1,_Value2) __CRT_APPEND(_Value1, _Value2)
#define VM_VOLATILE_GROUP_0 (0 << VM_VOLATILE_GROUP_SHIFT)
#define VM_VOLATILE_GROUP_1 (1 << VM_VOLATILE_GROUP_SHIFT)
#define VM_VOLATILE_GROUP_3 (3 << VM_VOLATILE_GROUP_SHIFT)
#define VM_VOLATILE_GROUP_4 (4 << VM_VOLATILE_GROUP_SHIFT)
#define VM_VOLATILE_GROUP_5 (5 << VM_VOLATILE_GROUP_SHIFT)
#define VM_VOLATILE_GROUP_6 (6 << VM_VOLATILE_GROUP_SHIFT)
#define VM_VOLATILE_GROUP_7 (7 << VM_VOLATILE_GROUP_SHIFT)
#define SIGSTKSZ 131072
#define OS_CLOSED_ENUM(_name,_type,...) __OS_ENUM_C_FALLBACK(_name, _type, ## __VA_ARGS__) __OS_ENUM_ATTR_CLOSED
#define CC_VARALPHA 5
#define HOST_KEXTD_PORT (8 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define SQLITE_OPEN_NOMUTEX 0x00008000
#define SQLITE_DROP_TEMP_VIEW 15
#define MPG_FLAGS_NONE (0x00ull)
#define SQLITE_HASH_H 
#define _Interlocked_operand_ 
#define _CLASSIFY(_Val,_FFunc,_DFunc,_LDFunc) (_CLASS_ARG(_Val) == 'f' ? _FFunc((float)(_Val)) : _CLASS_ARG(_Val) == 'd' ? _DFunc((double)(_Val)) : _LDFunc((long double)(_Val)))
#define OE_Cascade 10
#define __arm64__ 1
#define sqlite3_column_origin_name 0
#define VM_MEMORY_REALLOC 6
#define _Scanf_format_string_params_(x) 
#define _Ret_bytecap_x_(size) _SAL1_1_Source_(_Ret_bytecap_x_, (size), _Ret1_impl_(__notnull_impl_notref) _Ret1_impl_(__bytecap_x_impl(size)))
#define _Deref_out_range_(l,h) 
#define _CS_POSIX_V6_ILP32_OFF32_CFLAGS 2
#define __CAST_AWAY_QUALIFIER(variable,qualifier,type) (type) (long)(variable)
#define _IRQL_always_function_max_(i) 
#define OP_Halt 69
#define __CRT_STRINGIZE(_Value) #_Value
#define CPU_SUBTYPE_ARM64_PTR_AUTH_VERSION(x) (((x) & CPU_SUBTYPE_ARM64_PTR_AUTH_MASK) >> 24)
#define CPU_SUBTYPE_ARM_V7 ((cpu_subtype_t) 9)
#define CPU_SUBTYPE_ARM_V8 ((cpu_subtype_t) 13)
#define __deref_opt_out_bcount_full_opt(size) _SAL1_Source_(__deref_opt_out_bcount_full_opt, (size), __deref_out_bcount_full_opt(size) __pre_except_maybenull)
#define EV_ERROR 0x4000
#define SQLITE_MAX_VARIABLE_NUMBER 999
#define _Outptr_opt_result_nullonfailure_ 
#define MNT_STRICTATIME 0x80000000
#define SQLITE_ASCII 1
#define PragTyp_ENCODING 12
#define __deref_in_xcount(size) _SAL1_Source_(__deref_in_xcount, (size), __deref_in _Pre_ __deref __inexpressible_readableTo(size))
#define _FE_DIVBYZERO 0x04
#define _CS_POSIX_V6_WIDTH_RESTRICTED_ENVS 14
#define _Ret_null_ 
#define TK_AGG_COLUMN 164
#define _Outptr_result_bytebuffer_(s) 
#define MAXCOMLEN 16
#define ITIMER_REAL 0
#define __darwin_arm_thread_state64_get_pc_fptr(ts) ((void*)(uintptr_t)((ts).__pc))
#define MAP_TRANSLATED_ALLOW_EXECUTE 0x20000
#define __FLT_RADIX__ 2
#define ATTR_VOL_FSTYPE 0x00000001
#define __INT_LEAST16_TYPE__ short int
#define SQLITE_OrderByIdxJoin 0x0040
#define AQ_MAXBUFSZ 1048576
#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_ARGLIST_EX(_ReturnType,_ReturnPolicy,_DeclSpec,_CC,_FuncName,_VFuncName,_SecureDstType,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2) _CRT_INSECURE_DEPRECATE(_FuncName ##_s) _DeclSpec _ReturnType _CC _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, ...); _CRT_INSECURE_DEPRECATE(_VFuncName ##_s) _DeclSpec _ReturnType _CC _VFuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, va_list _Args);
#define MEMORY_OBJECT_NULL ((memory_object_t) 0)
#define IS_LOCK_ERROR(x) ((x != SQLITE_OK) && (x != SQLITE_BUSY))
#define KERN_INVALID_KC 55
#define EXPR_FULLSIZE sizeof(Expr)
#define _DSIGN_C(_Val) (((_double_val *)(char*)&(_Val))->_Sh[_D0_C] & _DSIGN)
#define ATTR_CMN_GRPUUID 0x01000000
#define TIOCPKT_START 0x08
#define OP_MustBeInt 15
#define __ALTDECL __cdecl
#define _IOWR(g,n,t) _IOC(IOC_INOUT, (g), (n), sizeof(t))
#define TERM_VIRTUAL 0x02
#define _U_INT32_T 
#define RTLD_LAZY 0x1
#define _Outref_result_buffer_all_maybenull_(s) 
#define IPC_VOUCHER_ATTR_MANAGER_NULL ((ipc_voucher_attr_manager_t) 0)
#define TK_PLAN 4
#define MADV_WILLNEED POSIX_MADV_WILLNEED
#define __OS_CONCAT(x,y) x ## y
#define BUS_ADRALN 1
#define SIGCONT 19
#define SQLITE_SYSTEM_MALLOC 1
#define A_GETSINFO_ADDR 32
#define SIOCSIFVLAN _IOW('i', 126, struct ifreq)
#define _Deref_pre_opt_z_ _SAL1_1_Source_(_Deref_pre_opt_z_, (), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre1_impl_(__zterm_impl) _Pre_valid_impl_)
#define _SYS_MMAN_H_ 
#define F_TEST 3
#define HOST_VM_INFO 2
#define MACH_SEND_KERNEL 0x00400000
#define _Deref_pre_valid_bytecap_c_(size) _SAL1_1_Source_(_Deref_pre_valid_bytecap_c_, (size), _Deref_pre1_impl_(__notnull_impl_notref) _Deref_pre1_impl_(__bytecap_c_impl(size)) _Pre_valid_impl_)
#define _Deref2_post1_impl_(p1) 
#define A_SETFSIZE 26
#define __drv_formatString(kind) _SAL1_1_Source_(__drv_formatString, (kind), _SA_annotes1(SAL_IsFormatString, #kind))
#define osSetPosixAdvisoryLock(h,x,t) osFcntl(h,F_SETLK,x)
#define _POSIX_TIMEOUTS (-1)
#define _MAX_U64TOSTR_BASE10_COUNT (20 + 1)
#define EOVERFLOW 132
#define CPUFAMILY_INTEL_HASWELL 0x10b282dc
#define S_IRUSR 0000400
#define SIGPIPE 13
#define UCHAR_MAX 0xff
#define __IPHONE_4_0 40000
#define mach_vm_round_page(x) (((mach_vm_offset_t)(x) + vm_page_mask) & ~((signed)vm_page_mask))
#define __IPHONE_4_2 40200
#define __IPHONE_4_3 40300
#define SHARED_SIZE 510
#define BTCURSOR_MAX_DEPTH 20
#define YYWILDCARD 98
#define SQLITE_CANTOPEN_DIRTYWAL (SQLITE_CANTOPEN | (5<<8))
#define __MISMATCH_TAGS_POP 
#define PRIMASK 0x0ff
#define VdbeNoopComment(X) 
#define FSOPT_NOINMEMUPDATE 0x00000002
#define PragTyp_INTEGRITY_CHECK 19
#define __TVOS_AVAILABLE(_vers) 
#define CPU_TYPE_ANY ((cpu_type_t) -1)
#define SQLITE_FullFSync 0x00000008
#define TK_INSTEAD 65
#define TK_AUTOINCR 122
#define host_get_kextd_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_KEXTD_PORT, (port)))
#define __DARWIN_64_BIT_INO_T 1
#define _D1_C 2
#define __deref_opt_inout_nz _SAL1_Source_(__deref_opt_inout_nz, (), __deref_opt_inout)
#define SLIST_FOREACH_PREVPTR(var,varp,head,field) for ((varp) = &SLIST_FIRST((head)); ((var) = *(varp)) != NULL; (varp) = &SLIST_NEXT((var), field))
#define PENDING_LOCK 3
#define _Inout_opt_z_bytecap_x_(size) _SAL1_1_Source_(_Inout_opt_z_bytecap_x_, (size), _Pre_opt_z_bytecap_x_(size) _Post_z_)
#define SQLITE_INDEX_CONSTRAINT_LE 8
#define __gdi_entry _SAL_L_Source_(__gdi_entry, (), __inner_control_entrypoint(GDI))
#define OPFLAG_LASTROWID 0x20
#define _Ret_writes_maybenull_(s) 
#define _Deref_post_opt_z_cap_(size) _SAL1_1_Source_(_Deref_post_opt_z_cap_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post2_impl_(__zterm_impl,__cap_impl(size)) _Post_valid_impl_)
#define W_OK (1<<1)
#define ENODEV 19
#define EXP754 (((u64)0x7ff)<<52)
#define __FLT16_IS_IEC_60559__ 2
#define SQLITE_MAGIC_OPEN 0xa029a697
#define _When_(c,a) 
#define MAC_OS_VERSION_11_0 110000
#define _Raises_SEH_exception_ 
#define KIPC_MAX_LINKHDR 4
#define CC_PERCENT 22
#define CPU_TYPE_ARM ((cpu_type_t) 12)
#define MACH_MSG_TIMEOUT_NONE ((mach_msg_timeout_t) 0)
#define VM_MEMORY_APPLICATION_SPECIFIC_16 255
#define EPROTO 134
#define CLOCK_ALARM_CURRES 3
#define MADV_ZERO_WIRED_PAGES 6
#define _EXECUTE_OK (1<<11)
#define TK_OFFSET 69
#define KERN_INVALID_LEDGER 33
#define __PTHREAD_SIZE__ 8176
#define VM_MEMORY_COREGRAPHICS_MISC VM_MEMORY_COREGRAPHICS
#define INT_MAX 2147483647
#define likely(X) (X)
#define _In_function_class_(x) _In_function_class_(#x)
#define ULLONG_MAX 0xffffffffffffffffui64
#define OID_AUTO (-1)
#define CTL_UNSPEC 0
#define _Prepost_count_x_(size) _SAL1_1_Source_(_Prepost_count_x_, (size), _Pre_count_x_(size) _Post_count_x_(size))
#define _POSIX_MONOTONIC_CLOCK (-1)
#define __GCC_CONSTRUCTIVE_SIZE 64
#define _O_OBTAIN_DIR 0x2000
#define __enum_open 
#define _Inout_z_count_c_(size) _SAL1_1_Source_(_Inout_z_count_c_, (size), _Prepost_z_ _Prepost_count_c_(size))
#define _SC_2_PBS_ACCOUNTING 60
#define SQLITE_CONSTRAINT_CHECK (SQLITE_CONSTRAINT | (1<<8))
#define SQLITE_PRINTF_MALLOCED 0x04
#define YY_MIN_SHIFTREDUCE 790
#define __deref_in_ecount(size) _SAL1_Source_(__deref_in_ecount, (size), __deref_in _Pre_ __deref __elem_readableTo(size))
#define __UINT_FAST32_MAX__ 0xffffffffU
#define __INT_FAST8_TYPE__ signed char
#define CTIMEOPT_VAL_(opt) #opt
#define CC_DIGIT 3
#define VM_SYNC_INVALIDATE ((vm_sync_t) 0x04)
#define MACH_SEND_INVALID_TRAILER 0x10000011
#define __API_DEPRECATED_WITH_REPLACEMENT_END 
#define __drv_floatRestored _SAL1_1_Source_(__drv_floatRestored, (), _Kernel_float_restored_)
#define SQLITE_UTF16_ALIGNED 8
#define _Ret_writes_bytes_to_(s,c) 
#define P_DEPENDENCY_CAPABLE 0x00100000
#define A_SETPMASK 25
#define NC_UEList 0x0080
#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_4_EX(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SecureFuncName,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2,_TType3,_TArg3,_TType4,_TArg4) _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3, _TType4 _TArg4);
#define KERN_PROF 16
#define TARGET_OS_IOS 0
#define _SC_HOST_NAME_MAX 72
#define __argc (*__p___argc())
#define __FLT64X_HAS_DENORM__ 1
#define OP_Cast 85
#define _PC_SYNC_IO 25
#define ARM_AMX_STATE_COUNT ((mach_msg_type_number_t) (sizeof(arm_amx_state_t)/sizeof(unsigned int)))
#define SIGWINCH 28
#define CPUSUBFAMILY_ARM_HP 1
#define OE_Abort 2
#define _SC_SEM_NSEMS_MAX 49
#define __deref_opt_out_ecount(size) _SAL1_Source_(__deref_opt_out_ecount, (size), __deref_out_ecount(size) __pre_except_maybenull)
#define KERN_TFP_POLICY 1
#define KEVENT_FLAG_IMMEDIATE 0x000001
#define _CS_XBS5_ILP32_OFF32_LIBS 22
#define HOST_VM_INFO64_REV0_COUNT ((mach_msg_type_number_t) (HOST_VM_INFO64_REV1_COUNT - 14))
#define _Reallocation_function_(after,before,size) _Success_((after) != NULL || (size) == 0) _At_((after), _Post_maybenull_ _Post_writable_byte_size_(size) _When_(((before) == NULL || (size) > 0), _Must_inspect_result_)) _At_((before), _Post_ptr_invalid_ __drv_freesMem(Mem))
#define MEMORY_OBJECT_RETURN_ANYTHING 3
#define TAILQ_SWAP(head1,head2,type,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH do { struct type *swap_first = (head1)->tqh_first; struct type **swap_last = (head1)->tqh_last; (head1)->tqh_first = (head2)->tqh_first; (head1)->tqh_last = (head2)->tqh_last; (head2)->tqh_first = swap_first; (head2)->tqh_last = swap_last; if ((swap_first = (head1)->tqh_first) != NULL) swap_first->field.tqe_prev = &(head1)->tqh_first; else (head1)->tqh_last = &(head1)->tqh_first; if ((swap_first = (head2)->tqh_first) != NULL) swap_first->field.tqe_prev = &(head2)->tqh_first; else (head2)->tqh_last = &(head2)->tqh_first; } while (0) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define P_DIRTY_BUSY 0x00000040
#define __darwin_arm_thread_state64_set_fp(ts,ptr) ((ts).__fp = (uintptr_t)(ptr))
#define MACH_MSG_TYPE_MOVE_SEND_ONCE 18
#define WAL_ALL_BUT_WRITE 1
#define VQ_VERYLOWDISK 0x0200
#define BTREE_OMIT_JOURNAL 1
#define SIOCGIF6LOWPAN _IOWR('i', 197, struct ifreq)
#define __IPHONE_12_0 120000
#define __IPHONE_12_2 120200
#define __IPHONE_12_3 120300
#define __IPHONE_12_4 120400
#define _Deref_prepost_opt_count_x_(size) _SAL1_1_Source_(_Deref_prepost_opt_count_x_, (size), _Deref_pre_opt_count_x_(size) _Deref_post_opt_count_x_(size))
#define ARM_THREAD_STATE_MAX (1296)
#define E2BIG 7
#define PROCESSOR_TEMPERATURE 0x10000002
#define CPU_SUBTYPE_MC88100 ((cpu_subtype_t) 1)
#define P_DIRTY_LAUNCH_IN_PROGRESS 0x00000200
#define MAP_PRIVATE 0x0002
#define _MACH_VM_PURGABLE_H_ 
#define UNIXFILE_RDONLY 0x02
#define SQLITE_MAX_SQL_LENGTH 1000000000
#define TK_BY 34
#define MATTR_VAL_CACHE_SYNC 9
#define AUDIT_TRIGGER_MIN 1
#define EXC_MASK_MACH_SYSCALL (1 << EXC_MACH_SYSCALL)
#define SQLITE_IOERR_BEGIN_ATOMIC (SQLITE_IOERR | (29<<8))
#define _CRT_GUARDOVERFLOW 
#define CPU_SUBTYPE_MC88110 ((cpu_subtype_t) 2)
#define KERN_INVALID_TASK 16
#define __FLT16_NORM_MAX__ 6.55040000000000000000000000000000000e+4F16
#define __OS_STRINGIFY(s) #s
#define SQLITE_IOCAP_ATOMIC 0x00000001
#define MACH_MSGH_BITS_HAS_LOCAL(bits) (MACH_MSGH_BITS_LOCAL(bits) != MACH_MSGH_BITS_ZERO)
#define BTREE_AUTOVACUUM_NONE 0
#define __UINT_LEAST32_MAX__ 0xffffffffU
#define __DEFINE_CPP_OVERLOAD_INLINE_FUNC_0_3_EX(_ReturnType,_ReturnPolicy,_FuncName,_SecureFuncName,_SecureDstType,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2,_TType3,_TArg3) 
#define __PTHREAD_ATTR_SIZE__ 56
#define NOT_WITHIN 0
#define _Deref_post_opt_z_ _SAL1_1_Source_(_Deref_post_opt_z_, (), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post1_impl_(__zterm_impl) _Post_valid_impl_)
#define _PC_REC_XFER_ALIGN 23
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define SQLITE_TESTCTRL_RESERVE 14
#define SQLITE_INDEX_CONSTRAINT_REGEXP 67
#define TK_VIEW 79
#define sqlite3ColumnPropertiesFromName(T,C) 
#define __drv_restoresIRQL _SAL1_1_Source_(__drv_restoresIRQL, (), _IRQL_restores_)
#define HAVE_PREAD 1
#define VM_PURGABLE_ORDERING_NORMAL (0 << VM_PURGABLE_ORDERING_SHIFT)
#define __ARM_FEATURE_CLZ 1
#define __INT_LEAST8_TYPE__ signed char
#define __in_awcount(expr,size) _SAL1_Source_(__in_awcount, (expr,size), _Pre_ __valid _Pre_ _Notref_ __deref __readonly __byte_readableTo((expr) ? (size) : (size) * 2))
#define VQ_FLAG10000 0x10000
#define VQ_ASSIST 0x0040
#define _doserrno (*__doserrno())
#define CIRCLEQ_FIRST(head) ((head)->cqh_first)
#define ENOTDIR 20
#define _FSOBJ_ID_T 
#define TIOCMODG _IOR('t', 3, int)
#define _Deref_prepost_opt_z_bytecap_(size) _SAL1_1_Source_(_Deref_prepost_opt_z_bytecap_, (size), _Deref_pre_opt_z_bytecap_(size) _Deref_post_opt_z_bytecap_(size))
#define _O_SEQUENTIAL 0x0020
#define __SIZEOF_POINTER__ 8
#define KIPC_NMBCLUSTERS 9
#define MACH_SEND_MSG 0x00000001
#define ECONNRESET 108
#define BTCF_ValidOvfl 0x04
#define __inout_xcount(size) _SAL1_Source_(__inout_xcount, (size), __out_xcount(size) _Pre_ __valid)
#define AUDIT_TRIGGER_NO_SPACE 5
#define READMARK_NOT_USED 0xffffffff
#define MACH_PORT_SRIGHTS_NONE 0
#define IN_INDEX_NOOP 5
#define etSTRING 5
#define sqlite3VdbeAssertAbortable(V) 
#define ENXIO 6
#define __out_xcount_part_opt(size,length) _SAL1_Source_(__out_xcount_part_opt, (size,length), __out_xcount_part(size,length) __exceptthat __maybenull)
#define _PC_EXTENDED_SECURITY_NP 13
#define PGHDR_CLEAN 0x001
#define KERN_SPECULATIVE_READS 64
#define __FLT64_HAS_QUIET_NAN__ 1
#define AUDIT_GROUP 0x0080
#define TRACE(X) 
#define CTLTYPE_QUAD 4
#define PDROP 0x400
#define ATTR_CMN_CHGTIME 0x00000800
#define NC_AllowWin 0x4000
#define MACH_MSGH_BITS_PORTS_MASK (MACH_MSGH_BITS_REMOTE_MASK | MACH_MSGH_BITS_LOCAL_MASK | MACH_MSGH_BITS_VOUCHER_MASK)
#define PARSE_MODE_NORMAL 0
#define TASK_SUPPRESSION_POLICY 3
#define SQLITE_IOERR_WRITE (SQLITE_IOERR | (3<<8))
#define SQLITE_SKIP_UTF8(zIn) { if( (*(zIn++))>=0xc0 ){ while( (*zIn & 0xc0)==0x80 ){ zIn++; } } }
#define L_XTND SEEK_END
#define _Outptr_opt_result_bytebuffer_to_maybenull_(size,count) _SAL2_Source_(_Outptr_opt_result_bytebuffer_to_maybenull_, (size, count), _Out_opt_impl_ _Deref_post3_impl_(__maybenull_impl_notref, __bytecap_impl(size), __bytecount_impl(count)))
#define CODEC2(P,D,N,X,E,O) O=(char*)D
#define btreeIntegrity(p) assert( p->pBt->inTransaction!=TRANS_NONE || p->pBt->nTransaction==0 ); assert( p->pBt->inTransaction>=p->inTrans );
#define HOST_ATM_NOTIFICATION_PORT (14 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define MACH_PORT_QLIMIT_LARGE (1024)
#define _Post_null_ _SAL2_Source_(_Post_null_, (), _Post1_impl_(__null_impl))
#define TK_TRANSACTION 6
#define POLICY_FIFO_BASE_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_fifo_base)/sizeof(integer_t)))
#define ___POSIX_C_DEPRECATED_STARTING_199209L 
#define _Pre_maybenull_ _Pre_ _Maybenull_
#define FAPPEND O_APPEND
#define DbSetProperty(D,I,P) (D)->aDb[I].pSchema->schemaFlags|=(P)
#define _Outptr_opt_result_bytebuffer_maybenull_(s) 
#define SM_SHARED 4
#define wsdAutoext sqlite3Autoext
#define SQLITE3_MUTEX_INITIALIZER(id) { PTHREAD_MUTEX_INITIALIZER }
#define SQLITE_OPEN_READWRITE 0x00000002
#define _UI16_MAX 0xffffui16
#define _CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES 1
#define __BEGIN_DECLS 
#define __LDBL_MANT_DIG__ 53
#define HOST_MAX_SPECIAL_KERNEL_PORT 7
#define isnormal(_Val) (fpclassify(_Val) == FP_NORMAL)
#define __darwin_arm_thread_state64_set_sp(ts,ptr) ((ts).__sp = (uintptr_t)(ptr))
#define HOST_AUTOMOUNTD_PORT (4 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define _O_WRONLY 0x0001
#define SQLITE_IOCAP_UNDELETABLE_WHEN_OPEN 0x00000800
#define __DARWIN_ONLY_64_BIT_INO_T 1
#define __FLT64_HAS_INFINITY__ 1
#define __drv_isCancelIRQL _IRQL_is_cancel_
#define MEMORY_OBJECT_RETURN_ALL 2
#define host_get_closured_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_CLOSURED_PORT, (port)))
#define _MACH_MEMORY_OBJECT_TYPES_H_ 
#define __max(a,b) (((a) > (b)) ? (a) : (b))
#define MACH_MSG_GUARD_FLAGS_UNGUARDED_ON_SEND 0x0002
#define _SYS_SYSCTL_H_ 
#define POLL_HUP 6
#define VM_INHERIT_NONE ((vm_inherit_t) 2)
#define A_SETKAUDIT 30
#define KERN_CLASSICHANDLER KERN_EXEC
#define YY_REDUCE_MAX (1590)
#define MACH_RCV_TOO_LARGE 0x10004004
#define MACH_PORT_TYPE_PORT_SET MACH_PORT_TYPE(MACH_PORT_RIGHT_PORT_SET)
#define __IPHONE_2_2 20200
#define _Pre_z_ _Pre_ _Null_terminated_
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_3(x) x
#define CPU_SUBTYPE_POWERPC_603e ((cpu_subtype_t) 4)
#define _XOPEN_REALTIME (-1)
#define THREAD_MAX_SPECIAL_PORT THREAD_READ_PORT
#define MEMORY_OBJECT_TERMINATE_IDLE 0x1
#define KEVENT_FLAG_ERROR_EVENTS 0x000002
#define FILENAME_MAX 260
#define TAILQ_INSERT_HEAD(head,elm,field) do { TAILQ_CHECK_HEAD(head, field); if ((TAILQ_NEXT((elm), field) = TAILQ_FIRST((head))) != NULL) TAILQ_FIRST((head))->field.tqe_prev = &TAILQ_NEXT((elm), field); else (head)->tqh_last = &TAILQ_NEXT((elm), field); TAILQ_FIRST((head)) = (elm); (elm)->field.tqe_prev = &TAILQ_FIRST((head)); QMD_TRACE_HEAD(head); QMD_TRACE_ELEM(&(elm)->field); } while (0)
#define NOTE_TRIGGER 0x01000000
#define OS_INLINE static __inline__
#define vdbeSorterWorkDebug(x,y) 
#define __DARWIN_OSSwapInt32(x) (__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt32(x) : _OSSwapInt32(x))
#define _Inout_count_c_(size) _SAL1_1_Source_(_Inout_count_c_, (size), _Prepost_count_c_(size))
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_SIZE(_DeclSpec,_FuncName,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2) __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_SIZE_EX(_DeclSpec, _FuncName, _FuncName ##_s, _DstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2)
#define _Deref_post_valid_cap_(size) _SAL1_1_Source_(_Deref_post_valid_cap_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post1_impl_(__cap_impl(size)) _Post_valid_impl_)
#define SQLITE_NOINLINE __attribute__((noinline))
#define TASK_POWER_INFO 21
#define MACH_RCV_HEADER_ERROR 0x1000400b
#define _SYS__PTHREAD_TYPES_H_ 
#define _Deref_prepost_opt_cap_x_(size) _SAL1_1_Source_(_Deref_prepost_opt_cap_x_, (size), _Deref_pre_opt_cap_x_(size) _Deref_post_opt_cap_x_(size))
#define SQLITE_DEFAULT_WAL_AUTOCHECKPOINT 1000
#define FALSE 0
#define _INC_STDDEF 
#define QOS_MIN_RELATIVE_PRIORITY (-15)
#define MAP_MEM_LEDGER_TAGGED 0x002000
#define __API_DEPRECATED_END 
#define thread_set_kernel_port(thread,port) (thread_set_special_port((thread), THREAD_KERNEL_PORT, (port)))
#define __deref_out_bcount_nz(size) _SAL1_Source_(__deref_out_bcount_nz, (size), __deref_out_ecount(size))
#define OP_Int64 71
#define __UINTPTR_MAX__ 0xffffffffffffffffUL
#define MNT_CMDFLAGS (MNT_UPDATE|MNT_NOBLOCK|MNT_RELOAD|MNT_FORCE)
#define SQLITE_PREPARE_PERSISTENT 0x01
#define p_forw p_un.p_st1.__p_forw
#define CPU_SUBTYPE_POWERPC_750 ((cpu_subtype_t) 9)
#define SLIPDISC 4
#define sqlite3_column_origin_name16 0
#define __DARWIN_OSSwapInt64(x) (__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt64(x) : _OSSwapInt64(x))
#define SI_ASYNCIO 0x10004
#define __MAC_10_12_1 101201
#define __MAC_10_12_2 101202
#define VM_MEMORY_MALLOC_LARGE_REUSABLE 8
#define __MAC_10_12_4 101204
#define _CLOCK_T 
#define VQ_NOTRESP 0x0001
#define SQLITE_AutoIndex 0x00008000
#define P_TRACED 0x00000800
#define PTF_ZERODATA 0x02
#define SQLITE_IOERR_TRUNCATE (SQLITE_IOERR | (6<<8))
#define _DOFF 4
#define OP_Abortable 172
#define VdbeCoverage(v) 
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define CC_RP 18
#define TK_ANALYZE 30
#define CC_SPACE 7
#define __FLT_NORM_MAX__ 3.40282346638528859811704183484516925e+38F
#define __deref_opt_inout_z _SAL1_Source_(__deref_opt_inout_z, (), __deref_opt_inout __pre __deref __nullterminated __post __deref __nullterminated)
#define findCellPastPtr(P,I) ((P)->aDataOfst + ((P)->maskPage & get2byteAligned(&(P)->aCellIdx[2*(I)])))
#define HOST_FILECOORDINATIOND_PORT (23 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define INT_FAST32_MAX INT32_MAX
#define _Deref_ret3_impl_(p1,p2,p3) 
#define SQLITE_IOCAP_IMMUTABLE 0x00002000
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_2(x) 
#define TK_FAIL 42
#define __out_validated(typ_sym) _SAL_L_Source_(__out_validated, (src_sym), __inner_out_validated(#typ_sym))
#define _Notref_ _Notref_impl_
#define __FLT64X_MAX_EXP__ 16384
#define TAILQ_CONCAT(head1,head2,field) do { if (!TAILQ_EMPTY(head2)) { *(head1)->tqh_last = (head2)->tqh_first; (head2)->tqh_first->field.tqe_prev = (head1)->tqh_last; (head1)->tqh_last = (head2)->tqh_last; TAILQ_INIT((head2)); QMD_TRACE_HEAD(head1); QMD_TRACE_HEAD(head2); } } while (0)
#define __UINT_FAST64_TYPE__ long long unsigned int
#define __min(a,b) (((a) < (b)) ? (a) : (b))
#define MACH_VM_MIN_ADDRESS ((mach_vm_offset_t) MACH_VM_MIN_ADDRESS_RAW)
#define EXC_BAD_ACCESS 1
#define PragTyp_BUSY_TIMEOUT 3
#define SQLITE_ALTER_TABLE 26
#define YY_REDUCE_MIN (-256)
#define EXIT_SUCCESS 0
#define SQLITE_LoadExtension 0x00010000
#define _When_impl_(expr,annos) 
#define __INT_MAX__ 0x7fffffff
#define __deref_opt_inout_xcount_full(size) _SAL1_Source_(__deref_opt_inout_xcount_full, (size), __deref_inout_xcount_full(size) __exceptthat __maybenull)
#define F_GETFD 1
#define GLOBAL(t,v) v
#define VM_MEMORY_CGIMAGE 52
#define VOL_CAP_FMT_SHARED_SPACE 0x00800000
#define MACH_MSG_TYPE_PORT_NAME 15
#define MACH_MSGH_BITS_VOUCHER_MASK 0x001f0000
#define _Deref_post_notnull_ _SAL1_1_Source_(_Deref_post_notnull_, (), _Deref_post1_impl_(__notnull_impl_notref))
#define STDIN_FILENO 0
#define CPU_SUBTYPE_ARM64_32_V8 ((cpu_subtype_t) 1)
#define SQLITE_FRAME_MAGIC 0x879fb71e
#define SQLITE_FUNC_DIRECT 0x00080000
#define __inner_volatile 
#define LIST_EMPTY(head) ((head)->lh_first == NULL)
#define LLONG_MAX 9223372036854775807i64
#define _Post_maybez_ _SAL_L_Source_(_Post_maybez_, (), _Post1_impl_(__maybezterm_impl))
#define SLIST_REMOVE_HEAD(head,field) do { SLIST_FIRST((head)) = SLIST_NEXT(SLIST_FIRST((head)), field); } while (0)
#define F_GETFL 3
#define OS_ANALYZER_SUPPRESS(RADAR) 
#define MNT_DOVOLFS 0x00008000
#define __INT64_TYPE__ long long int
#define SQLITE_EnableTrigger 0x00040000
#define WHERE_DISTINCT_UNIQUE 1
#define MNT_NOEXEC 0x00000004
#define TARGET_CPU_MIPS 0
#define round_page_kernel(x) trunc_page_kernel((x) + vm_kernel_page_mask)
#define _SC_AIO_PRIO_DELTA_MAX 44
#define _Return_type_success_(c) 
#define VDBE_DISPLAY_P4 1
#define HOST_RESOURCE_SIZES 4
#define BC_BASE_MAX 99
#define _SC_ADVISORY_INFO 65
#define S_IRGRP 0000040
#define CPU_SUBTYPE_CELERON_MOBILE CPU_SUBTYPE_INTEL(7, 7)
#define CMP_MACH_TIMESPEC(t1,t2) ((t1)->tv_sec > (t2)->tv_sec ? (long) +NSEC_PER_SEC : ((t1)->tv_sec < (t2)->tv_sec ? (long) -NSEC_PER_SEC : (t1)->tv_nsec - (t2)->tv_nsec))
#define TIOCPKT _IOW('t', 112, int)
#define ATTR_CMN_GEN_COUNT 0x00080000
#define SQLITE_OPEN_FULLMUTEX 0x00010000
#define TK_CURRENT 85
#define __header_inline extern __inline __attribute__((__gnu_inline__))
#define EVFILT_EXCEPT (-15)
#define SQLITE_IOERR_VNODE (SQLITE_IOERR | (27<<8))
#define OP_SeekGE 24
#define __reserved _SAL1_Source_(__reserved, (), _Reserved_)
#define SQLITE_INDEX_CONSTRAINT_NE 68
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_1(_ReturnType,_FuncName,_HType1,_HArg1,_DstType,_Dst,_TType1,_TArg1) 
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_3(_ReturnType,_FuncName,_HType1,_HArg1,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2,_TType3,_TArg3) 
#define LEDGER_LIMIT_INFINITY ((ledger_amount_t)((1ULL << 63) - 1))
#define SQLITE_MAX_MMAP_SIZE 0x7fff0000
#define _O_APPEND 0x0008
#define _POSIX_V6_ILP32_OFF32 __ILP32_OFF32
#define _Pre2_impl_(p1,p2) 
#define percent_rankFinalizeFunc percent_rankValueFunc
#define UINT16_TYPE unsigned short int
#define ATTR_FORK_SETMASK 0x00000000
#define __override __inner_override
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define host_set_iocompressionstats_port(host,port) (host_set_special_port((host), HOST_IOCOMPRESSIONSTATS_PORT, (port)))
#define WHERE_ONEROW 0x00001000
#define USER_POSIX2_FORT_RUN 15
#define _Ret_opt_bytecount_(size) _SAL1_1_Source_(_Ret_opt_bytecount_, (size), _Ret1_impl_(__maybenull_impl_notref) _Ret1_impl_(__bytecount_impl(size)) _Ret_valid_impl_)
#define __FP_FAST_FMAF32 1
#define INT_FAST32_MIN INT32_MIN
#define ATTR_CMN_NAME 0x00000001
#define SF_Expanded 0x00040
#define ATTR_CMNEXT_PRIVATESIZE 0x00000008
#define MNT_SYNCHRONOUS 0x00000002
#define STDOUT_FILENO 1
#define HOST_UNFREED_PORT (10 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define CPU_SUBTYPE_I860_860 ((cpu_subtype_t) 1)
#define TASK_BASIC_INFO_32_COUNT (sizeof(task_basic_info_32_data_t) / sizeof(natural_t))
#define KERN_OSTYPE 1
#define MACH_VOUCHER_ATTR_KEY_NONE ((mach_voucher_attr_key_t)0)
#define TABLDISC 3
#define SQLITE_SCANSTAT_NLOOP 0
#define sqlite3ParserCTX_FETCH Parse *pParse=yypParser->pParse;
#define _CRT_STRINGIZE(x) _CRT_STRINGIZE_(x)
#define __deref_opt_inout_ecount_part_opt(size,length) _SAL1_Source_(__deref_opt_inout_ecount_part_opt, (size,length), __deref_inout_ecount_part_opt(size,length) __pre_except_maybenull)
#define SHARED_FIRST (PENDING_BYTE+2)
#define WAL_MAX_VERSION 3007000
#define P_DISABLE_ASLR 0x00001000
#define CTL_DEBUG_VALUE 1
#define NOTE_LOWAT 0x00000001
#define isset(a,i) (((unsigned char *)(a))[(i)/NBBY] & (1u<<((i)%NBBY)))
#define ARM_NEON_STATE_COUNT ((mach_msg_type_number_t) (sizeof (arm_neon_state_t)/sizeof(uint32_t)))
#define STAILQ_EMPTY(head) ((head)->stqh_first == NULL)
#define BITVEC_NBIT (BITVEC_NELEM*BITVEC_SZELEM)
#define PAGER_MAX_PGNO 2147483647
#define __analysis_suppress_lock_checking(lock) 
#define SRT_Output 9
#define __internal_kernel_driver 
#define __FP_FAST_FMAF64 1
#define _POSIX_THREAD_PRIO_INHERIT (-1)
#define _MACH_ARM_BOOLEAN_H_ 
#define TK_GROUPS 92
#define AQ_HIWATER 100
#define _Deref_prepost_count_(size) _SAL1_1_Source_(_Deref_prepost_count_, (size), _Deref_pre_count_(size) _Deref_post_count_(size))
#define OP_Sequence 120
#define _RSIZE_T_DEFINED 
#define _Out_cap_c_(size) _SAL1_1_Source_(_Out_cap_c_, (size), _Pre_cap_c_(size) _Post_valid_impl_)
#define host_set_lockd_port(host,port) (host_set_special_port((host), HOST_LOCKD_PORT, (port)))
#define OP_SeekLE 23
#define TIOCM_CD TIOCM_CAR
#define _Deref_pre_bytecap_c_(size) _SAL1_1_Source_(_Deref_pre_bytecap_c_, (size), _Deref_pre1_impl_(__notnull_impl_notref) _Deref_pre1_impl_(__bytecap_c_impl(size)))
#define SIOCGIFBRDADDR _IOWR('i', 35, struct ifreq)
#define OP_SeekLT 22
#define SIGTSTP 18
#define _MACH_VM_STATISTICS_H_ 
#define _MACH_CLOCK_TYPES_H_ 
#define AUDIT_ZONENAME 0x1000
#define _Deref_post_valid_bytecap_c_(size) _SAL1_1_Source_(_Deref_post_valid_bytecap_c_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post1_impl_(__bytecap_c_impl(size)) _Post_valid_impl_)
#define F_GETLKPID 66
#define _User_always_and_needs_probe_on_(mode) 
#define _POSIX_SEMAPHORES (-1)
#define __ATOMIC_RELAXED 0
#define __inner_override 
#define _Printf_format_string_params_(x) 
#define VM_MEMORY_MALLOC_NANO 11
#define P_DIRTY_TERMINATED 0x00000020
#define OS_CONCAT(x,y) __OS_CONCAT(x, y)
#define __DBL_EPSILON__ ((double)2.22044604925031308084726333618164062e-16L)
#define THROUGHPUT_QOS_LAUNCH_DEFAULT_TIER THROUGHPUT_QOS_TIER_3
#define __in_bound _SAL_L_Source_(__in_bound, (), _Pre_ __inner_bound)
#define PTHREAD_PROCESS_PRIVATE 2
#define L_SET SEEK_SET
#define SQLITE_ForeignKeys 0x00004000
#define YYFALLBACK 1
#define _Ret_z_cap_(size) _SAL1_1_Source_(_Ret_z_cap_, (size), _Ret1_impl_(__notnull_impl_notref) _Ret2_impl_(__zterm_impl,__cap_impl(size)) _Ret_valid_impl_)
#define BC_SCALE_MAX 99
#define _I32_MAX 2147483647i32
#define ATTR_VOL_RESERVED_SIZE 0x20000000
#define __drv_acquiresResource(kind) _SAL1_1_Source_(__drv_acquiresResource, (kind), _Acquires_lock_(_Curr_))
#define SQLITE_TESTCTRL_PRNG_RESTORE 6
#define SLIST_REMOVE_AFTER(elm,field) do { SLIST_NEXT(elm, field) = SLIST_NEXT(SLIST_NEXT(elm, field), field); } while (0)
#define HOST_CONTAINERD_PORT (18 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define _INT8_T 
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_4(x) x
#define __in_z _SAL1_Source_(__in_z, (), _In_z_)
#define _At_buffer_(t,i,c,a) 
#define __INT_LEAST32_TYPE__ int
#define _Inout_count_x_(size) _SAL1_1_Source_(_Inout_count_x_, (size), _Prepost_count_x_(size))
#define _MAX_ULTOSTR_BASE10_COUNT (10 + 1)
#define CC_EQ 14
#define __pre_deref_except_maybenull 
#define __DARWIN_1050(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050)
#define TK_SAVEPOINT 13
#define PAGER_GET_READONLY 0x02
#define __deref_opt_in_ecount_opt(size) _SAL1_Source_(__deref_opt_in_ecount_opt, (size), __deref_in_ecount_opt(size) __exceptthat __maybenull)
#define ENOLCK 39
#define IPC_SPACE_READ_NULL ((ipc_space_read_t) 0)
#define _Deref_pre_opt_valid_cap_c_(size) _SAL1_1_Source_(_Deref_pre_opt_valid_cap_c_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre1_impl_(__cap_c_impl(size)) _Pre_valid_impl_)
#define UF_IMMUTABLE 0x00000002
#define osFstat ((int(*)(int,struct stat*))aSyscall[5].pCurrent)
#define _In_opt_z_count_c_(size) _SAL1_1_Source_(_In_opt_z_count_c_, (size), _Pre_opt_z_ _Pre_opt_count_c_(size) _Deref_pre_readonly_)
#define REQUESTED_TRAILER_SIZE_NATIVE(y) ((mach_msg_trailer_size_t) ((GET_RCV_ELEMENTS(y) == MACH_RCV_TRAILER_NULL) ? sizeof(mach_msg_trailer_t) : ((GET_RCV_ELEMENTS(y) == MACH_RCV_TRAILER_SEQNO) ? sizeof(mach_msg_seqno_trailer_t) : ((GET_RCV_ELEMENTS(y) == MACH_RCV_TRAILER_SENDER) ? sizeof(mach_msg_security_trailer_t) : ((GET_RCV_ELEMENTS(y) == MACH_RCV_TRAILER_AUDIT) ? sizeof(mach_msg_audit_trailer_t) : ((GET_RCV_ELEMENTS(y) == MACH_RCV_TRAILER_CTX) ? sizeof(mach_msg_context_trailer_t) : ((GET_RCV_ELEMENTS(y) == MACH_RCV_TRAILER_AV) ? sizeof(mach_msg_mac_trailer_t) : sizeof(mach_msg_max_trailer_t))))))))
#define etFLOAT 1
#define MNT_RDONLY 0x00000001
#define explainSetInteger(a,b) a = b
#define SQLITE_VDBE_H 
#define EXC_ARM_DA_DEBUG 0x102
#define __drv_fun(annotes) _At_(return,annotes _SAL_nop_impl_)
#define MACH_SEND_IN_PROGRESS 0x10000001
#define _XOPEN_UNIX (1)
#define KERN_ALREADY_WAITING 30
#define isgreaterequal(x,y) ((_FPCOMPARE(x, y) & (_FP_EQ | _FP_GT)) != 0)
#define MAX_ROWID (i64)( (((u64)0x7fffffff)<<32) | (u64)0xffffffff )
#define KERN_SEMAPHORE_DESTROYED 42
#define MACH_VOUCHER_ATTR_KEY_ATM ((mach_voucher_attr_key_t)1)
#define _SC_LOGIN_NAME_MAX 73
#define SSLEEP 3
#define MAX_AUDIT_RECORDS 20
#define __deref_opt_out_z_opt _SAL1_Source_(__deref_opt_out_z_opt, (), __post __deref __valid __refparam __pre_except_maybenull __pre_deref_except_maybenull __post_deref_except_maybenull __post __deref __nullterminated)
#define vfsList GLOBAL(sqlite3_vfs *, vfsList)
#define S_IFWHT 0160000
#define MACH_MSGH_BITS_USED 0xb01f1f1fU
#define CC_ID 2
#define _Pre_readable_size_(s) _Pre_ _Readable_elements_(s) _Pre_ _Valid_
#define WHERE_ORDERBY_LIMIT 0x0800
#define MADV_SEQUENTIAL POSIX_MADV_SEQUENTIAL
#define TK_RAISE 71
#define SQLITE_FCNTL_HAS_MOVED 20
#define TASK_VM_INFO_REV0_COUNT ((mach_msg_type_number_t) (TASK_VM_INFO_REV1_COUNT - 2))
#define TIOCM_LE 0001
#define PragTyp_SHRINK_MEMORY 31
#define MACH_MSGH_BITS_ZERO 0x00000000
#define _SYS_FCNTL_H_ 
#define CC_SLASH 16
#define _SAL2_Source_(Name,args,annotes) _SA_annotes3(SAL_name, #Name, "", "2") _Group_(annotes _SAL_nop_impl_)
#define BTREE_DATA_VERSION 15
#define _Out_cap_m_(mult,size) _SAL1_1_Source_(_Out_cap_m_, (mult,size), _Pre_cap_m_(mult,size) _Post_valid_impl_)
#define _I32_MIN (-2147483647i32 - 1)
#define OS_SENTINEL __attribute__((__sentinel__))
#define AT_REMOVEDIR 0x0080
#define SQLITE_STATUS_PAGECACHE_SIZE 7
#define _SYS_TYPES_H_ 
#define TASK_ID_TOKEN_NULL ((task_id_token_t) 0)
#define PragTyp_LOCK_PROXY_FILE 22
#define MACH_VM_MAX_ADDRESS_RAW 0x00007FFFFE000000ULL
#define CROUND (CBLOCK - 1)
#define CC_LP 17
#define ENOTSUP 129
#define CC_LT 12
#define __AVAILABILITY__ 
#define SQLITE_IOCAP_SEQUENTIAL 0x00000400
#define TK_ORDER 141
#define VM_FLAGS_OVERWRITE 0x4000
#define R_OK (1<<2)
#define __TYPES_H_ 
#define SQLITE_TESTCTRL_ASSERT 12
#define _Outptr_opt_result_buffer_all_(size) _SAL2_Source_(_Outptr_opt_result_buffer_all_, (size), _Out_opt_impl_ _Deref_post2_impl_(__notnull_impl_notref, __count_impl(size)))
#define _CRTIMP2_MEMBER_FUNCTION(type) _CRTIMP2 type _CRTIMP2_MEMBER_FUNCTION_CALLING_CONVENTION
#define MACH_PORT_RIGHT_DEAD_NAME ((mach_port_right_t) 4)
#define __WATCHOS_4_0 40000
#define __WATCHOS_4_1 40100
#define __WATCHOS_4_2 40200
#define __WATCHOS_4_3 40300
#define TIOCPKT_DOSTOP 0x20
#define CLD_DUMPED 3
#define CPU_TYPE_I860 ((cpu_type_t) 15)
#define P_THCWD 0x01000000
#define RESERVED_LOCK 2
#define tkEND 7
#define __DARWIN_VERS_1050 1
#define SQLITE_DBSTATUS_LOOKASIDE_MISS_SIZE 5
#define sqlite3VdbeVerifyAbortable(A,B) 
#define OS_NONNULL1 __attribute__((__nonnull__(1)))
#define OS_NONNULL2 __attribute__((__nonnull__(2)))
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
#define _I64_MIN (-9223372036854775807i64 - 1)
#define SQLITE_UTF16 4
#define P_NOREMOTEHANG 0x80000000
#define TIOCM_RI TIOCM_RNG
#define CPUSUBFAMILY_ARM_HG 2
#define __IPHONE_15_0 150000
#define VM_PROT_COPY ((vm_prot_t) 0x10)
#define TASK_EXC_GUARD_VM_CORPSE 0x04
#define CPUSUBFAMILY_ARM_HS 4
#define _STR2WSTR(str) __STR2WSTR(str)
#define _Out_opt_cap_c_(size) _SAL1_1_Source_(_Out_opt_cap_c_, (size), _Pre_opt_cap_c_(size) _Post_valid_impl_)
#define OpcodeRewriteTrace(D,K,P) 
#define __GCC_DESTRUCTIVE_SIZE 256
#define TIOCM_SR 0020
#define TIOCM_ST 0010
#define THREAD_AFFINITY_TAG_NULL 0
#define SQLITE3_H 
#define _POSIX_THREAD_PRIO_PROTECT (-1)
#define NOTE_VM_PRESSURE 0x80000000
#define SQLITE_STMTSTATUS_RUN 6
#define OP_ParseSchema 141
#define OP_OpenAutoindex 111
#define _CRT_SECURE_CPP_NOTHROW throw()
#define __INTMAX_MAX__ 0x7fffffffffffffffL
#define ___POSIX_C_DEPRECATED_STARTING_200112L 
#define _In_opt_bytecount_c_(size) _SAL1_1_Source_(_In_opt_bytecount_c_, (size), _Pre_opt_bytecount_c_(size) _Deref_pre_readonly_)
#define host_get_user_notification_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_USER_NOTIFICATION_PORT, (port)))
#define __deref_opt_inout_bcount_full_opt(size) _SAL1_Source_(__deref_opt_inout_bcount_full_opt, (size), __deref_inout_bcount_full_opt(size) __pre_except_maybenull)
#define _CS_XBS5_ILP32_OFF32_CFLAGS 20
#define _MAX_ITOSTR_BASE10_COUNT (1 + 10 + 1)
#define TIOCMBIC _IOW('t', 107, int)
#define CPU_SUBTYPE_UVAXIII ((cpu_subtype_t) 12)
#define _CRT_ONEXIT_T_DEFINED 
#define PROC_FLAG_IOS_IMPPROMOTION 0x80000
#define _POSIX_BARRIERS (-1)
#define TIOCMBIS _IOW('t', 108, int)
#define SIOCSIFGENERIC _IOW('i', 57, struct ifreq)
#define PSWP 0
#define _Deref_post_opt_valid_bytecap_(size) _SAL1_1_Source_(_Deref_post_opt_valid_bytecap_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post1_impl_(__bytecap_impl(size)) _Post_valid_impl_)
#define _Pre_opt_bytecount_x_(size) _SAL1_1_Source_(_Pre_opt_bytecount_x_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__bytecount_x_impl(size)) _Pre_valid_impl_)
#define _Deref_pre_bytecap_(size) _SAL1_1_Source_(_Deref_pre_bytecap_, (size), _Deref_pre1_impl_(__notnull_impl_notref) _Deref_pre1_impl_(__bytecap_impl(size)))
#define MALLOC_INTROSPECT_TBL_PTR(ptr) ptr
#define TASK_AUDIT_TOKEN 15
#define _MAX_I64TOSTR_BASE8_COUNT (22 + 1)
#define _Maybe_raises_SEH_exception_ 
#define MACH_TASK_BASIC_INFO_COUNT (sizeof(mach_task_basic_info_data_t) / sizeof(natural_t))
#define __LONG_WIDTH__ 64
#define __inout_xcount_part(size,length) _SAL1_Source_(__inout_xcount_part, (size,length), __out_xcount_part(size,length) _Pre_ __valid _Pre_ __inexpressible_readableTo(length))
#define _Out_cap_x_(size) _SAL1_1_Source_(_Out_cap_x_, (size), _Pre_cap_x_(size) _Post_valid_impl_)
#define __FLT16_HAS_INFINITY__ 1
#define PCATCH 0x100
#define __inner_adt_add_prop(adt,prop) 
#define ATTR_DIR_IOBLOCKSIZE 0x00000010
#define _Pre_opt_count_(size) _SAL1_1_Source_(_Pre_opt_count_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__count_impl(size)) _Pre_valid_impl_)
#define _Inout_updates_bytes_opt_(s) 
#define _In_opt_z_bytecount_(size) _SAL1_1_Source_(_In_opt_z_bytecount_, (size), _Pre_opt_z_ _Pre_opt_bytecount_(size) _Deref_pre_readonly_)
#define EP_Collate 0x000100
#define VM_MAKE_TAG(tag) ((tag) << 24)
#define POLICY_RR_INFO_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_rr_info)/sizeof(integer_t)))
#define __DARWIN_ALIGNBYTES (sizeof(__darwin_size_t) - 1)
#define _Deref_post_valid_bytecap_x_(size) _SAL1_1_Source_(_Deref_post_valid_bytecap_x_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post1_impl_(__bytecap_x_impl(size)) _Post_valid_impl_)
#define MATH_ERRNO 1
#define CPUFAMILY_ARM_HURRICANE 0x67ceee93
#define FUNCTION2(zName,nArg,iArg,bNC,xFunc,extraFlags) {nArg,SQLITE_FUNC_CONSTANT|SQLITE_UTF8|(bNC*SQLITE_FUNC_NEEDCOLL)|extraFlags, SQLITE_INT_TO_PTR(iArg), 0, xFunc, 0, 0, 0, #zName, {0} }
#define TIOCCONS _IOW('t', 98, int)
#define __IPHONE_5_0 50000
#define __IPHONE_5_1 50100
#define PPPDISC 5
#define _FMAX ((unsigned short)((1 << (15 - _FOFF)) - 1))
#define HOST_SYSDIAGNOSE_PORT (16 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define __drv_innerReleasesGlobal(kind,param) _SAL1_1_Source_(__drv_InnerReleasesGlobal, (#kind, param\t), _Post_ _SA_annotes2(SAL_releaseGlobal,#kind, param\t))
#define MAP_RENAME 0x0020
#define _INC_MATH 
#define OS_MALLOC __attribute__((__malloc__))
#define MEMORY_OBJECT_RESPECT_CACHE 0x2
#define _Pre_opt_cap_m_(mult,size) _SAL1_1_Source_(_Pre_opt_cap_m_, (mult,size), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__mult_impl(mult,size)))
#define EMFILE 24
#define sqlite3Isalnum(x) (sqlite3CtypeMap[(unsigned char)(x)]&0x06)
#define NFSV3_MAX_FH_SIZE 64
#define TASK_RESOURCE_NOTIFY_PORT 11
#define STAT_GET_ROWID 1
#define VM_REGION_SUBMAP_INFO_V0_COUNT_64 ((mach_msg_type_number_t) (VM_REGION_SUBMAP_INFO_V0_SIZE / sizeof (natural_t)))
#define SA_NODEFER 0x0010
#define TIOCTIMESTAMP _IOR('t', 89, struct timeval)
#define _Inout_bytecap_(size) _SAL1_1_Source_(_Inout_bytecap_, (size), _Pre_valid_bytecap_(size) _Post_valid_)
#define SQLITE_DEFAULT_LOOKASIDE 1200,100
#define MACH_VOUCHER_NAME_ARRAY_NULL ((mach_voucher_name_array_t) 0)
#define _D2_C 1
#define VOL_CAP_FMT_DECMPFS_COMPRESSION 0x00010000
#define _CRT_STDIO_IMP_ALT _CRTIMP_ALT
#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_2_0(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_HType1,_HArg1,_HType2,_HArg2,_SalAttributeDst,_DstType,_Dst) __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_2_0_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName ##_s, _HType1, _HArg1, _HType2, _HArg2, _SalAttributeDst, _DstType, _Dst)
#define WINDOW_ENDING_INT 1
#define TK_UPDATE 125
#define OP_VFilter 9
#define __FLT_MIN_10_EXP__ (-37)
#define EXC_BREAKPOINT 6
#define OP_SorterSort 34
#define __analysis_hint(hint) 
#define WO_SINGLE 0x01ff
#define __FLT_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F
#define KIPC_SOQLIMITCOMPAT 10
#define _MACH_ARM__STRUCTS_H_ 
#define _Deref_pre_opt_valid_cap_x_(size) _SAL1_1_Source_(_Deref_pre_opt_valid_cap_x_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre1_impl_(__cap_x_impl(size)) _Pre_valid_impl_)
#define AT_EACCESS 0x0010
#define __DECLARE_CPP_OVERLOAD_INLINE_NFUNC_0_1_EX(_ReturnType,_ReturnPolicy,_FuncName,_SecureFuncName,_SecureDstType,_DstType,_Dst,_TType1,_TArg1) _CRT_INSECURE_DEPRECATE(_SecureFuncName) __inline _ReturnType __CRTDECL _FuncName(_DstType *_Dst, _TType1 _TArg1)
#define SF_Converted 0x10000
#define _MAX_DIR 256
#define TAILQ_LAST(head,headname) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH (*(((struct headname *)((head)->tqh_last))->tqh_last)) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define _Outptr_result_nullonfailure_ 
#define PAGE_MIN_SHIFT 12
#define __drv_NDIS 
#define MACH_VOUCHER_ATTR_KEY_TEST ((mach_voucher_attr_key_t)8)
#define VM_FLAGS_USER_MAP (VM_FLAGS_USER_ALLOCATE | VM_FLAGS_RETURN_4K_DATA_ADDR | VM_FLAGS_RETURN_DATA_ADDR)
#define SQLITE_DEFAULT_WAL_SYNCHRONOUS SQLITE_DEFAULT_SYNCHRONOUS
#define __static_context(ctx,annotes) 
#define VM_REGION_TOP_INFO 12
#define SQLITE_CANTOPEN_BKPT sqlite3CantopenError(__LINE__)
#define WHERE_USE_LIMIT 0x4000
#define MNT_NOWAIT 2
#define S_IRWXG 0000070
#define _Inout_updates_all_opt_(s) 
#define JOURNAL_PG_SZ(pPager) ((pPager->pageSize) + 8)
#define AUDIT_TRIGGER_EXPIRE_TRAILS 8
#define FSCRED ((kauth_cred_t )-1)
#define __IPHONE_9_2 90200
#define VM_MEMORY_CM_REGWARP 101
#define VM_PAGE_QUERY_PAGE_CS_TAINTED 0x200
#define _Pre_count_c_(size) _SAL1_1_Source_(_Pre_count_c_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__count_c_impl(size)) _Pre_valid_impl_)
#define ___POSIX_C_DEPRECATED_STARTING_198808L 
#define ARM_NEON_STATE64_COUNT ((mach_msg_type_number_t) (sizeof (arm_neon_state64_t)/sizeof(uint32_t)))
#define PAGER_OPEN 0
#define _Out_writes_to_ptr_z_(p) 
#define osFcntl ((int(*)(int,int,...))aSyscall[7].pCurrent)
#define __unreachable_ok_pop _Pragma("GCC diagnostic pop")
#define INTMAX_C(x) INT64_C(x)
#define _L2_C 1
#define __drv_holdsPriorityRegion() 
#define TIOCSCONS _IO('t', 99)
#define _Field_size_bytes_part_opt_(s,c) 
#define SIOCSIFADDR _IOW('i', 12, struct ifreq)
#define TIOCSWINSZ _IOW('t', 103, struct winsize)
#define _Ret_opt_valid_ _SAL1_1_Source_(_Ret_opt_valid_, (), _Ret1_impl_(__maybenull_impl_notref) _Ret_valid_impl_)
#define __NULLABILITY_COMPLETENESS_POP 
#define SQLITE_CONFIG_GETPCACHE2 19
#define MAX_OPTIONAL_kGUARD_EXC_CODE (1u << 19)
#define A_GETPINFO 24
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_EX(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SecureFuncName,_SecureDstType,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2) _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2);
#define _Out_opt_bytecapcount_(capcount) _SAL1_1_Source_(_Out_opt_bytecapcount_, (capcount), _Pre_opt_bytecap_(capcount) _Post_valid_impl_ _Post_bytecount_(capcount))
#define MAX(A,B) ((A)>(B)?(A):(B))
#define SIOCSIFCAP _IOW('i', 90, struct ifreq)
#define _COMPLEX_DEFINED 
#define _Deref_ret2_impl_(p1,p2) 
#define ARM_EXCEPTION_STATE_COUNT ((mach_msg_type_number_t) (sizeof (arm_exception_state_t)/sizeof(uint32_t)))
#define NO_COMPETING_THREAD_BEGIN __pragma(warning(push))
#define KERN_OSRELEASE 2
#define timeradd(tvp,uvp,vvp) do { (vvp)->tv_sec = (tvp)->tv_sec + (uvp)->tv_sec; (vvp)->tv_usec = (tvp)->tv_usec + (uvp)->tv_usec; if ((vvp)->tv_usec >= 1000000) { (vvp)->tv_sec++; (vvp)->tv_usec -= 1000000; } } while (0)
#define PAGER_JOURNALMODE_MEMORY 4
#define KERN_KDSETUP 6
#define _U_SHORT 
#define SI_TIMER 0x10003
#define __deref_opt_inout_xcount_part_opt(size,length) _SAL1_Source_(__deref_inout_xcount_part_opt(size, (size,length), length) __exceptthat __maybenull)
#define _Ret_z_bytecap_(size) _SAL1_1_Source_(_Ret_z_bytecap_, (size), _Ret1_impl_(__notnull_impl_notref) _Ret2_impl_(__zterm_impl,__bytecap_impl(size)) _Ret_valid_impl_)
#define UF_SETTABLE 0x0000ffff
#define SQLITE_ALLOW_COVERING_INDEX_SCAN 1
#define KERN_SAFEBOOT 66
#define SRT_Fifo 5
#define _Notliteral_ 
#define __IPHONE_13_0 130000
#define __IPHONE_13_1 130100
#define __IPHONE_13_2 130200
#define __IPHONE_13_3 130300
#define __IPHONE_13_4 130400
#define __IPHONE_13_5 130500
#define __IPHONE_13_6 130600
#define _Inout_updates_(s) 
#define DST_USA 1
#define SQLITE_STMTSTATUS_VM_STEP 4
#define TK_KEY 67
#define _In_opt_z_count_(size) _SAL1_1_Source_(_In_opt_z_count_, (size), _Pre_opt_z_ _Pre_opt_count_(size) _Deref_pre_readonly_)
#define CPU_SUBTYPE_INTEL_FAMILY(x) ((x) & 15)
#define SQLITE_NOTICE 27
#define __deref_opt_out_bcount_full(size) _SAL1_Source_(__deref_opt_out_bcount_full, (size), __deref_out_bcount_full(size) __pre_except_maybenull)
#define HOST_MACH_MSG_TRAP 8
#define TASK_DYLD_INFO 17
#define __ATOMIC_SEQ_CST 5
#define _INT32_T 
#define SQLITE_SCANSTAT_NAME 3
#define VdbeComment(X) 
#define _CRT_UNPARENTHESIZE_(...) __VA_ARGS__
#define _Out_opt_cap_x_(size) _SAL1_1_Source_(_Out_opt_cap_x_, (size), _Pre_opt_cap_x_(size) _Post_valid_impl_)
#define __drv_dispatchType(x) _SAL1_1_Source_(__drv_displatchType, (x), _SA_annotes1(SAL_functionClassNew, #x))
#define MACH_TASK_INSPECT_H 
#define A_GETCAR 9
#define VdbeMemDynamic(X) (((X)->flags&(MEM_Agg|MEM_Dyn))!=0)
#define SQLITE_TESTCTRL_ISINIT 23
#define BYTESWAP32(x) ( (((x)&0x000000FF)<<24) + (((x)&0x0000FF00)<<8) + (((x)&0x00FF0000)>>8) + (((x)&0xFF000000)>>24) )
#define __OSX_AVAILABLE(_vers) 
#define SQLITE_MUTEX_FAST 0
#define HW_MACHINE 1
#define RTLD_GLOBAL 0x8
#define __FLT32X_MIN_10_EXP__ (-307)
#define get4byte sqlite3Get4byte
#define _Has_lock_level_(n) 
#define osPwrite64 ((ssize_t(*)(int,const void*,size_t,off64_t)) aSyscall[13].pCurrent)
#define _Outptr_result_buffer_(s) 
#define KMOD_INFO_VERSION 1
#define _Ret_opt_z_bytecount_(size) _SAL1_1_Source_(_Ret_opt_z_bytecount_, (size), _Ret1_impl_(__maybenull_impl_notref) _Ret2_impl_(__zterm_impl,__bytecount_impl(size)) _Ret_valid_impl_)
#define A_SETSMASK 15
#define SIGTERM 15
#define _Post_z_ _Post_ _Null_terminated_
#define KERN_KDCPUMAP 24
#define TERM_LIKEOPT 0x100
#define _Flt_ConnectionCookie_Outptr_ _SAL_L_Source_(_Flt_ConnectionCookie_Outptr_, (), _Outptr_result_maybenull_ _Pre_valid_ _At_(*_Curr_, _Pre_null_ _On_failure_(_Post_null_)))
#define _Deref_post_z_ _SAL1_1_Source_(_Deref_post_z_, (), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post1_impl_(__zterm_impl) _Post_valid_impl_)
#define MEM_TypeMask 0xc1bf
#define OS_NONNULL_ALL __attribute__((__nonnull__))
#define TK_NULLS 82
#define HOST_LOAD_INFO_COUNT ((mach_msg_type_number_t) (sizeof(host_load_info_data_t)/sizeof(integer_t)))
#define __drv_useCancelIRQL _SAL1_1_Source_(__drv_usesCancelIRQL, (), _IRQL_uses_cancel_)
#define _Ret_notnull_ 
#define MAP_ANONYMOUS MAP_ANON
#define _CRT_DOUBLE_DEC 
#define MIN(A,B) ((A)<(B)?(A):(B))
#define LOCK_UN 0x08
#define _Flt_CompletionContext_Outptr_ _SAL_L_Source_(_Flt_CompletionContext_Outptr_, (), _Outptr_result_maybenull_ _Pre_valid_ _At_(*_Curr_, _Pre_null_ _When_(return != FLT_PREOP_SUCCESS_WITH_CALLBACK && return != FLT_PREOP_SYNCHRONIZE, _Post_null_)))
#define TK_VIRTUAL 80
#define HOST_NODE_PORT (19 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define sqlite3ConnectionBlocked(x,y) 
#define TK_JOIN_KW 114
#define VM_MEMORY_ROSETTA_EXECUTABLE_HEAP 234
#define MNT_NOSUID 0x00000008
#define ATTR_FILE_DATALENGTH 0x00000200
#define CACHE_STALE 0
#define __DARWIN_STRUCT_STAT64 { dev_t st_dev; mode_t st_mode; nlink_t st_nlink; __darwin_ino64_t st_ino; uid_t st_uid; gid_t st_gid; dev_t st_rdev; __DARWIN_STRUCT_STAT64_TIMES off_t st_size; blkcnt_t st_blocks; blksize_t st_blksize; __uint32_t st_flags; __uint32_t st_gen; __int32_t st_lspare; __int64_t st_qspare[2]; }
#define __enum_closed 
#define UNIX_SHM_DMS (UNIX_SHM_BASE+SQLITE_SHM_NLOCK)
#define HOST_NOTIFY_TYPE_MAX 1
#define __deref_in_opt_out _SAL1_Source_(__deref_in_opt_out, (), __deref_inout _Pre_ __deref __exceptthat __maybenull _Post_ __deref __notnull)
#define WRITE_LOCK 2
#define ATTR_CMN_OBJTAG 0x00000010
#define TIOCNOTTY _IO('t', 113)
#define THREAD_BACKGROUND_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (thread_background_policy_data_t) / sizeof (integer_t)))
#define SIOCGIFCAP _IOWR('i', 91, struct ifreq)
#define _PID_T 
#define _MACH_EXCEPTION_TYPES_H_ 
#define LONGDOUBLE_TYPE long double
#define MACH_PORT_STATUS_FLAG_STRICT_GUARD 0x04
#define HOST_DEBUG_INFO_INTERNAL 10
#define MPO_FILTER_MSG 0x100
#define restoreCursorPosition(p) (p->eState>=CURSOR_REQUIRESEEK ? btreeRestoreCursorPosition(p) : SQLITE_OK)
#define IsNaN(X) (((X)&EXP754)==EXP754 && ((X)&MAN754)!=0)
#define CPU_SUBTYPE_UVAXI ((cpu_subtype_t) 5)
#define __APPLE_API_PRIVATE 
#define KERN_KDWRITETR_V3 28
#define KERN_KDSET_TYPEFILTER 22
#define MEMCELLSIZE offsetof(Mem,zMalloc)
#define __drv_innerAcquiresGlobal(kind,param) _SAL1_1_Source_(_drv_innerAcquiresGlobal, (#kind, param\t), _Post_ _SA_annotes2(SAL_acquireGlobal, #kind, param\t))
#define MACH_PORT_DNREQUESTS_SIZE 3
#define SQLITE_FLOAT 2
#define ATTR_DIR_ALLOCSIZE 0x00000008
#define NMBCLUSTERS CONFIG_NMBCLUSTERS
#define _MACH_MACHINE__STRUCTS_H_ 
#define _Success_(c) 
#define VM_FLAGS_RESILIENT_CODESIGN 0x0020
#define SIOCIFCREATE _IOWR('i', 120, struct ifreq)
#define UF_APPEND 0x00000004
#define _MACH_MACHINE_THREAD_STATE_H_ 
#define _U_INT16_T 
#define _Deref_post_bytecount_c_(size) _SAL1_1_Source_(_Deref_post_bytecount_c_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post1_impl_(__bytecount_c_impl(size)) _Post_valid_impl_)
#define TASK_FLAGS_INFO 28
#define _TIME32_T_DEFINED 
#define TERM_VARSELECT 0x1000
#define MACH_RCV_VOUCHER 0x00000800
#define __OS_BASE__ 
#define SIOCAUTOADDR _IOWR('i', 38, struct ifreq)
#define S_IFIFO 0010000
#define SQLITE_PREPARE_MASK 0x0f
#define CPF_IGNORE_MODE 0x0002
#define VM_INHERIT_SHARE ((vm_inherit_t) 0)
#define TASK_DEBUG_INFO_INTERNAL 29
#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_ARGLIST(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_VFuncName,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2) _CRT_INSECURE_DEPRECATE(_FuncName ##_s) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, ...); _CRT_INSECURE_DEPRECATE(_VFuncName ##_s) _DeclSpec _ReturnType __cdecl _VFuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, va_list _Args);
#define __analysis_assume_lock_released(lock) 
#define SQLITE_PREPARE_NORMALIZE 0x02
#define setbit(a,i) (((unsigned char *)(a))[(i)/NBBY] |= 1u<<((i)%NBBY))
#define MACH_SEND_TIMEOUT 0x00000010
#define _Inout_updates_all_(s) 
#define __sdv_retrieve_request(r) 
#define SQLITE_MISUSE 21
#define A_GETSTAT 12
#define VM_BEHAVIOR_FREE ((vm_behavior_t) 6)
#define SF_Aggregate 0x00008
#define MEM_Cleared 0x0100
#define __strftimelike(fmtarg) __attribute__((__format__ (__strftime__, fmtarg, 0)))
#define __DBL_MIN_EXP__ (-1021)
#define HOST_NOTIFY_CALENDAR_SET 1
#define __darwin_arm_thread_state64_ptrauth_strip(ts) (void)(ts)
#define NOTE_NSECONDS 0x00000004
#define _Post_satisfies_(e) 
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_4(x) x
#define _Success_impl_(expr) 
#define _POSIX_THREAD_PRIORITY_SCHEDULING (-1)
#define __FLT64X_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F64x
#define PCACHE_DIRTYLIST_FRONT 3
#define __in_nz _SAL1_Source_(__in_nz, (), __in)
#define _Pre_opt_z_bytecap_(size) _SAL1_1_Source_(_Pre_opt_z_bytecap_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre2_impl_(__zterm_impl,__bytecap_impl(size)) _Pre_valid_impl_)
#define SQLITE_FCNTL_SYNC 21
#define _INTPTR_T_DEFINED 
#define _PTHREAD_IMPL_H_ 
#define __FLT128_MAX_10_EXP__ 4932
#define F_GETPROTECTIONCLASS 63
#define PROXY_HEADERLEN 1
#define _MACH_THREAD_SPECIAL_PORTS_H_ 
#define PUSER 50
#define _Pre_count_x_(size) _SAL1_1_Source_(_Pre_count_x_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__count_x_impl(size)) _Pre_valid_impl_)
#define MEM_Dyn 0x0400
#define __deref_opt_inout_bcount_part(size,length) _SAL1_Source_(__deref_opt_inout_bcount_part, (size,length), __deref_inout_bcount_part(size,length) __pre_except_maybenull)
#define VM_MAP_INSPECT_NULL ((vm_map_inspect_t) 0)
#define _CRT_STDIO_INLINE __inline
#define YYCODETYPE unsigned short int
#define TASK_EXC_GUARD_ALL 0xff
#define PZERO 22
#define arm_thread_state64_set_fp(ts,ptr) __darwin_arm_thread_state64_set_fp(ts, ptr)
#define FD_COPY(f,t) __DARWIN_FD_COPY(f, t)
#define __DARWIN_NFDBITS (sizeof(__int32_t) * __DARWIN_NBBY)
#define _SC_SPIN_LOCKS 80
#define findCell(P,I) ((P)->aData + ((P)->maskPage & get2byteAligned(&(P)->aCellIdx[2*(I)])))
#define sqlite3StrNICmp sqlite3_strnicmp
#define CPU_SUBTYPE_HPPA_7100LC ((cpu_subtype_t) 1)
#define task_get_bootstrap_port(task,port) (task_get_special_port((task), TASK_BOOTSTRAP_PORT, (port)))
#define __inner_assume_validated_dec 
#define MEMORY_OBJECT_RELEASE_NO_OP 0x4
#define _SC_XOPEN_REALTIME 111
#define _Ret_count_(size) _SAL1_1_Source_(_Ret_count_, (size), _Ret1_impl_(__notnull_impl_notref) _Ret1_impl_(__count_impl(size)) _Ret_valid_impl_)
#define _Deref_post_opt_valid_cap_c_(size) _SAL1_1_Source_(_Deref_post_opt_valid_cap_c_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post1_impl_(__cap_c_impl(size)) _Post_valid_impl_)
#define TK_DELETE 124
#define TK_WHERE 145
#define OP_Once 17
#define __MAC_10_13_1 101301
#define __MAC_10_13_2 101302
#define _Points_to_data_ 
#define __MAC_10_13_4 101304
#define EPROC_SLEADER 0x02
#define NSEC_PER_USEC 1000ull
#define _Deref_pre_cap_c_(size) _SAL1_1_Source_(_Deref_pre_cap_c_, (size), _Deref_pre1_impl_(__notnull_impl_notref) _Deref_pre1_impl_(__cap_c_impl(size)))
#define TASK_FLAVOR_READ 1
#define SQLITE_FUNC_LENGTH 0x0040
#define SQLITE_FCNTL_POWERSAFE_OVERWRITE 13
#define SQLITE_DBSTATUS_CACHE_MISS 8
#define SIGBUS 10
#define OP_CollSeq 82
#define CPU_SUBTYPE_XEON CPU_SUBTYPE_INTEL(12, 0)
#define __enum_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_open
#define _Deref_post_bytecount_(size) _SAL1_1_Source_(_Deref_post_bytecount_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post1_impl_(__bytecount_impl(size)) _Post_valid_impl_)
#define VM_MEMORY_EAR_DECODER 102
#define _Out_writes_(s) 
#define EXC_BAD_INSTRUCTION 2
#define __deprecated_msg(_msg) __attribute__((__deprecated__(_msg)))
#define NOTE_PCTRLMASK (~NOTE_PDATAMASK)
#define SLIST_INSERT_HEAD(head,elm,field) do { SLIST_NEXT((elm), field) = SLIST_FIRST((head)); SLIST_FIRST((head)) = (elm); } while (0)
#define MACH_RCV_TRAILER_SEQNO 1
#define __range_max(a,b) _SAL_L_Source_(__range_max, (a,b), __range(==, a > b ? a : b))
#define __assume_bound(i) __inner_assume_bound(i)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_0(x) 
#define __CHAR_BIT__ 8
#define SQLITE_CONSTRAINT_UNIQUE (SQLITE_CONSTRAINT | (8<<8))
#define STAILQ_SWAP(head1,head2,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH do { struct type *swap_first = STAILQ_FIRST(head1); struct type **swap_last = (head1)->stqh_last; STAILQ_FIRST(head1) = STAILQ_FIRST(head2); (head1)->stqh_last = (head2)->stqh_last; STAILQ_FIRST(head2) = swap_first; (head2)->stqh_last = swap_last; if (STAILQ_EMPTY(head1)) (head1)->stqh_last = &STAILQ_FIRST(head1); if (STAILQ_EMPTY(head2)) (head2)->stqh_last = &STAILQ_FIRST(head2); } while (0) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define _XOPEN_CRYPT (1)
#define SAL_VERSION_CHECK(_A) _SAL_VERSION_CHECK(_A)
#define MACH_PORT_TYPE_SEND MACH_PORT_TYPE(MACH_PORT_RIGHT_SEND)
#define A_OLDSETPOLICY 3
#define SHRT_MAX 32767
#define __deref_opt_inout_ecount_z(size) _SAL1_Source_(__deref_opt_inout_ecount_z, (size), __deref_opt_inout_ecount(size) __pre __deref __nullterminated __post __deref __nullterminated)
#define _WCSTOK_DEPRECATED _CRT_DEPRECATE_TEXT( "wcstok has been changed to conform with the ISO C standard, " "adding an extra context parameter. To use the legacy Microsoft " "wcstok, define _CRT_NON_CONFORMING_WCSTOK.")
#define MPG_IMMOVABLE_RECEIVE 0x02
#define SIGTTIN 21
#define OP_Checkpoint 6
#define EACCES 13
#define SQLITE_GET_LOCKPROXYFILE SQLITE_FCNTL_GET_LOCKPROXYFILE
#define _SC_COLL_WEIGHTS_MAX 13
#define _PTHREAD_RWLOCKATTR_T 
#define VM_MAXID 6
#define _CRT_INTERNAL_NONSTDC_NAMES ( ( defined _CRT_DECLARE_NONSTDC_NAMES && _CRT_DECLARE_NONSTDC_NAMES) || (!defined _CRT_DECLARE_NONSTDC_NAMES && !__STDC__ ) )
#define TIOCMSDTRWAIT _IOW('t', 91, int)
#define KIPC_MAX_DATALEN 7
#define _Prepost_bytecount_(size) _SAL1_1_Source_(_Prepost_bytecount_, (size), _Pre_bytecount_(size) _Post_bytecount_(size))
#define CPU_SUBTYPE_MIPS_R2000 ((cpu_subtype_t) 5)
#define _CRTEXP_PURE _CRTEXP
#define KERN_FILE 15
#define THREAD_STATE_NONE 5
#define OP_Real 148
#define _Printf_format_string_impl_ 
#define __field_nullterminated _SAL1_Source_(__field_nullterminated, (), __nullterminated)
#define __deref_opt_out_xcount(size) _SAL1_Source_(__deref_opt_out_xcount, (size), __deref_out_xcount(size) __exceptthat __maybenull)
#define TIME_UTC 1
#define PIPE_BUF 512
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1_ARGLIST_EX(_ReturnType,_ReturnPolicy,_DeclSpec,_CC,_FuncName,_SecureFuncName,_VFuncName,_SecureVFuncName,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1) _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType _CC _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, ...); _CRT_INSECURE_DEPRECATE(_SecureVFuncName) _DeclSpec _ReturnType _CC _VFuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, va_list _Args);
#define __releases_lock(lock) 
#define A_GETCWD 8
#define __OSX_AVAILABLE_BUT_DEPRECATED(_osxIntro,_osxDep,_iosIntro,_iosDep) 
#define stderr (__acrt_iob_func(2))
#define osFallocate ((int(*)(int,off_t,off_t))aSyscall[15].pCurrent)
#define SQLITE_TESTCTRL_FAULT_INSTALL 9
#define MEMTYPE_PCACHE 0x04
#define SF_SYNTHETIC 0xc0000000
#define SQLITE_IOERR_DELETE_NOENT (SQLITE_IOERR | (23<<8))
#define __OSX_AVAILABLE_BUT_DEPRECATED_MSG(_osxIntro,_osxDep,_iosIntro,_iosDep,_msg) 
#define HW_L1ICACHESIZE 17
#define TASK_BOOTSTRAP_PORT 4
#define WO_ISNULL 0x0100
#define SQLITE_IOERR_SHMLOCK (SQLITE_IOERR | (20<<8))
#define va_start _crt_va_start
#define PragTyp_TEMP_STORE_DIRECTORY 36
#define WAL_SAVEPOINT_NDATA 4
#define TIOCSSIZE TIOCSWINSZ
#define SQLITE_FUNC_AFFINITY 0x4000
#define __INT32_C(c) c
#define __encoded_pointer _SAL_L_Source_(__encoded_pointer, (), __inner_encoded)
#define first_valueInvFunc noopStepFunc
#define SQLITE_IDXTYPE_PRIMARYKEY 2
#define __ORDER_LITTLE_ENDIAN__ 1234
#define OPFLAG_ISNOOP 0x40
#define SF_UsesEphemeral 0x00020
#define VM_FLAGS_FIXED 0x0000
#define KERN_RESOURCE_SHORTAGE 6
#define BLKDEV_IOSIZE 2048
#define MACH_RCV_NOTIFY 0x00000000
#define FSOPT_PACK_INVAL_ATTRS 0x00000008
#define __drv_in_deref(annotes) _Pre_ __deref _Group_(annotes _SAL_nop_impl_)
#define WAL_RECOVER_LOCK 2
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_2_0(_ReturnType,_FuncName,_HType1,_HArg1,_HType2,_HArg2,_DstType,_Dst) 
#define __DARWIN_PDP_ENDIAN 3412
#define EINTR 4
#define P_RESV11 0x08000000
#define SQLITE_BUSY_RECOVERY (SQLITE_BUSY | (1<<8))
#define KERN_TFP_POLICY_DEFAULT 2
#define _CS_XBS5_LPBIG_OFFBIG_LDFLAGS 33
#define _Analysis_assume_same_lock_(e) 
#define _Deref_pre_invalid_ _SAL1_1_Source_(_Deref_pre_invalid_, (), _Deref_pre1_impl_(__notvalid_impl))
#define _CRT_NONSTDC_NO_DEPRECATE 
#define __range_min(a,b) _SAL_L_Source_(__range_min, (a,b), __range(==, a < b ? a : b))
#define _Deref_pre_bytecount_x_(size) _SAL1_1_Source_(_Deref_pre_bytecount_x_, (size), _Deref_pre1_impl_(__notnull_impl_notref) _Deref_pre1_impl_(__bytecount_x_impl(size)) _Pre_valid_impl_)
#define _Ret_writes_to_(s,c) 
#define __nothrow 
#define SHRT_MIN (-32768)
#define _SC_SPORADIC_SERVER 81
#define _Ret_opt_z_ _SAL1_1_Source_(_Ret_opt_z_, (), _Ret2_impl_(__maybenull_impl,__zterm_impl) _Ret_valid_impl_)
#define MPO_CONNECTION_PORT 0x800
#define _SC_THREAD_PRIO_INHERIT 87
#define MPO_TEMPOWNER 0x04
#define FUNCTION(zName,nArg,iArg,bNC,xFunc) {nArg, SQLITE_FUNC_CONSTANT|SQLITE_UTF8|(bNC*SQLITE_FUNC_NEEDCOLL), SQLITE_INT_TO_PTR(iArg), 0, xFunc, 0, 0, 0, #zName, {0} }
#define SQLITE_CREATE_VTABLE 29
#define WAL_NREADER (SQLITE_SHM_NLOCK-3)
#define PragTyp_DEFAULT_CACHE_SIZE 11
#define CC_KYWD 1
#define P_SELECT 0x00000040
#define _F0_C 1
#define MACH_SEND_NO_GRANT_DEST 0x10000016
#define VM_PURGABLE_DEBUG_FAULT (0x2 << VM_PURGABLE_DEBUG_SHIFT)
#define USERMODE(x) (((x) & 3) == 3)
#define CSALCAT1(x,y) 
#define CSALCAT2(x,y) 
#define _Out_bytecapcount_x_(capcount) _SAL1_1_Source_(_Out_bytecapcount_x_, (capcount), _Pre_bytecap_x_(capcount) _Post_valid_impl_ _Post_bytecount_x_(capcount))
#define VM_BEHAVIOR_ZERO_WIRED_PAGES ((vm_behavior_t) 7)
#define __clrcall __cdecl
#define _Deref_post_bytecount_x_(size) _SAL1_1_Source_(_Deref_post_bytecount_x_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post1_impl_(__bytecount_x_impl(size)) _Post_valid_impl_)
#define _MACH_VM_PROT_H_ 
#define SF_NOUNLINK 0x00100000
#define _MAX_I64TOSTR_BASE16_COUNT (16 + 1)
#define ATTR_CMN_DATA_PROTECT_FLAGS 0x40000000
#define SQLITE_FCNTL_TEMPFILENAME 16
#define __in_xcount_opt(size) _SAL1_Source_(__in_xcount_opt, (size), __in_xcount(size) __exceptthat __maybenull)
#define ATTR_CMNEXT_RELPATH 0x00000004
#define MAC_OS_X_VERSION_10_1 1010
#define VM_BEHAVIOR_DONTNEED ((vm_behavior_t) 5)
#define TASK_SCHED_FIFO_INFO 12
#define SQLITE_CkptFullFSync 0x00000010
#define VM_BEHAVIOR_REUSABLE ((vm_behavior_t) 8)
#define PTHREAD_PROCESS_SHARED 1
#define _Deref_opt_out_opt_z_ _SAL1_1_Source_(_Deref_opt_out_opt_z_, (), _Out_opt_ _Deref_post_opt_z_)
#define arm_thread_state64_get_lr(ts) __darwin_arm_thread_state64_get_lr(ts)
#define _FE_UNDERFLOW 0x10
#define ARM_STATE_FLAVOR_IS_OTHER_VALID(_flavor_) ((_flavor_) == ARM_AMX_STATE_V1)
#define _Internal_set_lock_count_(lock,count) 
#define __SIG_ATOMIC_TYPE__ int
#define TK_REGISTER 171
#define SQLITE_CONFIG_SINGLETHREAD 1
#define EPIPE 32
#define _SAL_nop_impl_ X
#define _CRT_WIDE_(s) L ## s
#define __DBL_MIN_10_EXP__ (-307)
#define _CRT_USE_WINAPI_FAMILY_DESKTOP_APP 
#define MACH_MSG_NULL ((mach_msg_header_t *) 0)
#define A_SETSFLAGS 40
#define SQLITE_READONLY_RECOVERY (SQLITE_READONLY | (1<<8))
#define VOL_CAP_FMT_CASE_PRESERVING 0x00000200
#define _SC_MEMLOCK_RANGE 31
#define SQLITE_VERSION_NUMBER 3030001
#define SQLITE_CONSTRAINT_FUNCTION (SQLITE_CONSTRAINT | (4<<8))
#define TK_FOREIGN 128
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_4(_ReturnType,_FuncName,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2,_TType3,_TArg3,_TType4,_TArg4) 
#define VM_MEMORY_ANALYSIS_TOOL 10
#define SQLITE_OPEN_TEMP_DB 0x00000200
#define _Deref_post_cap_c_(size) _SAL1_1_Source_(_Deref_post_cap_c_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post1_impl_(__cap_c_impl(size)))
#define SQLITE_READONLY_ROLLBACK (SQLITE_READONLY | (3<<8))
#define _Inout_bytecap_c_(size) _SAL1_1_Source_(_Inout_bytecap_c_, (size), _Pre_valid_bytecap_c_(size) _Post_valid_)
#define ATTR_FILE_DATAALLOCSIZE 0x00000400
#define pcacheTrace(X) 
#define arm_thread_state64_get_pc(ts) __darwin_arm_thread_state64_get_pc(ts)
#define __GNUC_PATCHLEVEL__ 0
#define _SAL1_Source_(Name,args,annotes) _SA_annotes3(SAL_name, #Name, "", "1") _Group_(annotes _SAL_nop_impl_)
#define SQLITE_READ 20
#define SQLITE_QUERY_PLANNER_LIMIT_INCR 1000
#define host_set_filecoordinationd_port(host,port) (host_set_special_port((host), HOST_FILECOORDINATIOND_PORT, (port)))
#define _POSIX_TRACE_EVENT_FILTER (-1)
#define __drv_mustHoldGlobal(kind,param) _SAL1_1_Source_(__drv_mustHoldGlobal, (kind, param), _Requires_lock_held_(param))
#define MEM_Str 0x0002
#define __DECONST(type,var) __CAST_AWAY_QUALIFIER(var, const, type)
#define __deref_out_ecount_opt(size) _SAL1_Source_(__deref_out_ecount_opt, (size), __deref_out_ecount(size) __post_deref_except_maybenull)
#define HW_USERMEM 6
#define F_RDADVISE 44
#define TK_CONFLICT 37
#define arm_thread_state64_ptrauth_strip(ts) __darwin_arm_thread_state64_ptrauth_strip(ts)
#define __UINT_FAST8_MAX__ 0xff
#define AT_IPC_SEM ((unsigned char)2)
#define NGROUPS NGROUPS_MAX
#define ATTR_CMNEXT_NOFIRMLINKPATH 0x00000020
#define TK_NULL 117
#define SQLITE3_TEXT 3
#define WAL_SYNC_FLAGS(X) ((X)&0x03)
#define MS_KILLPAGES 0x0004
#define _Deref_post_opt_valid_cap_x_(size) _SAL1_1_Source_(_Deref_post_opt_valid_cap_x_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post1_impl_(__cap_x_impl(size)) _Post_valid_impl_)
#define SQLITE_DBCONFIG_ENABLE_QPSG 1007
#define _Deref_ret_bound_ _SAL1_1_Source_(_Deref_ret_bound_, (), _Deref_ret_bound_impl_)
#define _XOPEN_XCU_VERSION 4
#define CURTYPE_VTAB 2
#define ENOMEM 12
#define SQLITE_AFF_TEXT 0x42
#define EXC_SOFTWARE 5
#define __PTHREAD_CONDATTR_SIZE__ 8
#define _Deref_pre_cap_x_(size) _SAL1_1_Source_(_Deref_pre_cap_x_, (size), _Deref_pre1_impl_(__notnull_impl_notref) _Deref_pre1_impl_(__cap_x_impl(size)))
#define OP_ColumnsUsed 118
#define arm_thread_state64_get_sp(ts) __darwin_arm_thread_state64_get_sp(ts)
#define __INT_LEAST8_WIDTH__ 8
#define SIOCSIFNETMASK _IOW('i', 22, struct ifreq)
#define _In_reads_opt_(s) 
#define _XBS5_LPBIG_OFFBIG __LPBIG_OFFBIG
#define ExprSetVVAProperty(E,P) 
#define SQLITE_SCANSTAT_NVISIT 1
#define UNIXFILE_DIRSYNC 0x08
#define TERM_ANDINFO 0x20
#define __ARM_MCONTEXT_H_ 
#define P_ADVLOCK 0x00000001
#define _Prepost_valid_ _SAL1_1_Source_(_Prepost_valid_, (), _Pre_valid_ _Post_valid_)
#define __DARWIN_C_ANSI 010000L
#define MPO_QLIMIT 0x02
#define _Outptr_opt_result_z_ 
#define S_IXOTH 0000001
#define KERN_KDTHRMAP 12
#define __deref_in_ecount_iterator(size,incr) _SAL1_Source_(__deref_in_ecount_iterator, (size,incr), __inout _Pre_ __deref __elem_readableTo(size) __deref_out_range(==, _Old_(*_Curr_) + incr))
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_4(x) x
#define MACH_PORT_QLIMIT_MIN MACH_PORT_QLIMIT_ZERO
#define _PTHREAD_MUTEX_T 
#define __ARM_FP 14
#define __FLT64X_IS_IEC_60559__ 2
#define _Pre_cap_for_(param) _SAL1_1_Source_(_Pre_cap_for_, (param), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__cap_for_impl(param)))
#define SQLITE_NOTICE_RECOVER_WAL (SQLITE_NOTICE | (1<<8))
#define VM_MEMORY_COREUI_CACHED_IMAGE_DATA 103
#define _Outptr_result_maybenull_ 
#define __WATCHOS_5_0 50000
#define __WATCHOS_5_1 50100
#define __deref_opt_inout_ecount_opt(size) _SAL1_Source_(__deref_opt_inout_ecount_opt, (size), __deref_inout_ecount_opt(size) __pre_except_maybenull)
#define WHERE_INDEXED 0x00000200
#define SQLITE_FCNTL_SIZE_HINT 5
#define IdChar(C) ((sqlite3CtypeMap[(unsigned char)C]&0x46)!=0)
#define __out_bcount_nz_opt(size) _SAL1_Source_(__out_bcount_nz_opt, (size), __out_bcount_opt(size) __post __nullterminated)
#define howmany(x,y) __DARWIN_howmany(x, y)
#define NAME_MAX 255
#define CPU_SUBTYPE_LIB64 0x80000000
#define SQLITE_CONFIG_MULTITHREAD 2
#define __OS_AVAILABILITY_MSG(_target,_availability,_msg) 
#define ___POSIX_C_DEPRECATED_STARTING_200809L 
#define SCHAR_MAX 127
#define VM_MAX_ADDRESS ((vm_address_t) 0x0000000080000000ULL)
#define __DEFINE_CPP_OVERLOAD_INLINE_NFUNC_0_2_EX(_ReturnType,_ReturnPolicy,_FuncName,_SecureFuncName,_SecureDstType,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2) 
#define WHERE_COLUMN_RANGE 0x00000002
#define SQLITE_FCNTL_LOCKSTATE 1
#define VOL_CAP_INT_USERACCESS 0x00000800
#define USER_POSIX2_CHAR_TERM 13
#define HOST_VM_INFO_REV1_COUNT ((mach_msg_type_number_t) (HOST_VM_INFO_REV2_COUNT - 1))
#define AT_IPC_SHM ((unsigned char)3)
#define PROC_FLAG_ADAPTIVE_IMPORTANT 0x200000
#define __MKID(x,y) ___MKID(x, y)
#define SIDL 1
#define HW_MACHINE_ARCH 12
#define _POSIX_THREAD_CPUTIME (-1)
#define __drv_savesIRQL _SAL1_1_Source_(__drv_savesIRQL, (), _IRQL_saves_)
#define SQLITE_MAX_U32 ((((u64)1)<<32)-1)
#define P_TIMEOUT 0x00000400
#define TASK_AFFINITY_TAG_INFO 16
#define _SC_THREAD_PRIO_PROTECT 88
#define VQ_FREE_SPACE_CHANGE 0x8000
#define CKCNSTRNT_COLUMN 0x01
#define _Out_writes_bytes_all_(s) 
#define _VCRT_NOALIAS __declspec(noalias)
#define __out_nz_opt _SAL1_Source_(__out_nz_opt, (), __post __valid __refparam __post_except_maybenull_)
#define AUDIT_ARGE 0x0008
#define MAC_OS_X_VERSION_10_13_1 101301
#define CPUFAMILY_ARM_MONSOON_MISTRAL 0xe81e7ef6
#define VM_MEMORY_MALLOC_TINY 7
#define AUDIT_ARGV 0x0004
#define SQLITE_STMTJRNL_SPILL (64*1024)
#define SQLITE_CORRUPT_PAGE(pMemPage) SQLITE_CORRUPT_PGNO(pMemPage->pgno)
#define __UINT32_MAX__ 0xffffffffU
#define OSTRACE(X) 
#define __PTHREAD_MUTEX_SIZE__ 56
#define EXC_ARM_SWP 0x104
#define _Field_size_bytes_full_(s) 
#define _Deref_opt_out_z_ _SAL1_1_Source_(_Deref_opt_out_z_, (), _Out_opt_ _Deref_post_z_)
#define CONCURRENCYSAL_H 
#define KERN_VFSNSPACE_UNHANDLE_PROC 2
#define __inout_ecount(size) _SAL1_Source_(__inout_ecount, (size), _Inout_updates_(size))
#define TK_COMMA 26
#define OP_InitCoroutine 13
#define MINCORE_ANONYMOUS 0x80
#define __deref_opt_ecount_opt(size) _SAL1_Source_(__deref_opt_ecount_opt, (size), __deref_ecount_opt(size) __pre_except_maybenull)
#define os_prevent_tail_call_optimization() __asm__("")
#define ONE_BYTE_INT(x) ((i8)(x)[0])
#define NZERO 20
#define SQLITE_SHM_EXCLUSIVE 8
#define __API_DEPRECATED_WITH_REPLACEMENT_BEGIN(...) 
#define SA_USERSPACE_MASK (SA_ONSTACK | SA_RESTART | SA_RESETHAND | SA_NOCLDSTOP | SA_NODEFER | SA_NOCLDWAIT | SA_SIGINFO)
#define _Deref_prepost_bytecount_(size) _SAL1_1_Source_(_Deref_prepost_bytecount_, (size), _Deref_pre_bytecount_(size) _Deref_post_bytecount_(size))
#define SQLITE_MALLOC_SOFT_LIMIT 1024
#define msgh_reserved msgh_voucher_port
#define NULL ((void *)0)
#define KERN_CODESIGN_ERROR 50
#define SCHAR_MIN (-128)
#define _MACH_MACH_TYPES_H_ 
#define ENOMSG 122
#define VM_MEMORY_SCENEKIT 86
#define MAP_MEM_PURGABLE_KERNEL_ONLY 0x004000
#define dtob(x) ((x)<<DEV_BSHIFT)
#define GET_MAP_MEM(flags) ((((unsigned int)(flags)) >> 24) & 0xFF)
#define CC_QUOTE 8
#define _Out_opt_z_bytecap_(size) _SAL1_1_Source_(_Out_opt_z_bytecap_, (size), _Pre_opt_bytecap_(size) _Post_valid_impl_ _Post_z_)
#define HOST_EXPIRED_TASK_INFO 6
#define NC_MinMaxAgg 0x1000
#define SQLITE_BLDF_INDEXED 0x0001
#define VM_LEDGER_FLAG_NO_FOOTPRINT (1 << 0)
#define __deref_opt_inout_bcount_full(size) _SAL1_Source_(__deref_opt_inout_bcount_full, (size), __deref_inout_bcount_full(size) __pre_except_maybenull)
#define _CRT_SIZE_MAX ((size_t)-1)
#define __deref_opt_bcount(size) _SAL1_Source_(__deref_opt_bcount, (size), __deref_bcount(size) __pre_except_maybenull)
#define UF_TRACKED 0x00000040
#define _wpgmptr (*__p__wpgmptr())
#define __INT64_C(c) c ## LL
#define MACH_SEND_INVALID_CONTEXT 0x10000012
#define __inout_bcount_full(size) _SAL1_Source_(__inout_bcount_full, (size), _Inout_updates_bytes_all_(size))
#define __MAC_11_0 110000
#define TK_DESC 39
#define __deref_out_ecount_part_opt(size,length) _SAL1_Source_(__deref_out_ecount_part_opt, (size,length), __deref_out_ecount_part(size,length) __post_deref_except_maybenull)
#define __CHAR16_TYPE__ short unsigned int
#define MACH_PORT_STATUS_FLAG_TASKPTR 0x20
#define VM_MEMORY_IMAGEIO 70
#define EXPRDUP_REDUCE 0x0001
#define VM_PAGE_QUERY_PAGE_PAGED_OUT 0x10
#define _COM_Outptr_ 
#define CPU_TYPE_ARM64_32 (CPU_TYPE_ARM | CPU_ARCH_ABI64_32)
#define _Deref_post_cap_x_(size) _SAL1_1_Source_(_Deref_post_cap_x_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post1_impl_(__cap_x_impl(size)))
#define TIOCSTART _IO('t', 110)
#define _Inout_bytecap_x_(size) _SAL1_1_Source_(_Inout_bytecap_x_, (size), _Pre_valid_bytecap_x_(size) _Post_valid_)
#define _Pre_writable_byte_size_(s) _Pre_ _Writable_bytes_(s)
#define CPU_TYPE_HPPA ((cpu_type_t) 11)
#define THREAD_THROUGHPUT_QOS_POLICY 8
#define DEFFILEMODE (S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH|S_IWOTH)
#define VM_SYNC_DEACTIVATE ((vm_sync_t) 0x10)
#define SQLITE_USE_URI 0
#define _Points_to_data_impl_ 
#define _BLKSIZE_T 
#define SQLITE_INDEX_CONSTRAINT_LIKE 65
#define _SC_2_UPE 25
#define S_IRWXO 0000007
#define S_IRWXU 0000700
#define MACH_MSGH_BITS(remote,local) ((remote) | ((local) << 8))
#define _In_reads_to_ptr_z_(p) 
#define _IRQL_raises_(i) 
#define KERN_KDENABLE 3
#define _MACH_TASK_POLICY_H_ 
#define __declare_lock_level(level) 
#define VQ_NOTRESPLOCK 0x0080
#define MASKBIT32(n) (((unsigned int)1)<<(n))
#define SQLITE_FAULTINJECTOR_COUNT 1
#define NDEBUG 1
#define S_IFMT 0170000
#define _INC_STDIO 
#define VM_GET_FLAGS_ALIAS(flags,alias) (alias) = ((flags) & VM_FLAGS_ALIAS_MASK) >> 24
#define SQLITE_TriggerEQP 0x01000000
#define __out_awcount(expr,size) _SAL1_Source_(__out_awcount, (expr,size), _Pre_ __notnull __byte_writableTo((expr) ? (size) : (size) * 2) _Post_ __valid __refparam)
#define TK_DO 61
#define CLOCK_GET_TIME_RES 1
#define sqlite3WhereAddScanStatus(a,b,c,d) ((void)d)
#define SLIST_INSERT_AFTER(slistelm,elm,field) do { SLIST_NEXT((elm), field) = SLIST_NEXT((slistelm), field); SLIST_NEXT((slistelm), field) = (elm); } while (0)
#define MCLOFSET (MCLBYTES - 1)
#define SQLITE_DBSTATUS_SCHEMA_USED 2
#define SMALLEST_INT64 (((i64)-1) - LARGEST_INT64)
#define SQLITE_MUTEX_STATIC_OPEN 4
#define VM_REGION_SUBMAP_INFO_V1_SIZE (VM_REGION_SUBMAP_INFO_V2_SIZE - sizeof (vm_object_id_t) )
#define SQLITE_CursorHints 0x0400
#define _W64 
#define YY_NLOOKAHEAD ((int)(sizeof(yy_lookahead)/sizeof(yy_lookahead[0])))
#define AUDIT_TRIGGER_FILE ("/dev/" AUDITDEV_FILENAME)
#define SEMAPHORE_NULL ((semaphore_t) 0)
#define SQLITE_CONFIG_MMAP_SIZE 22
#define PTHREAD_CANCEL_DEFERRED 0x02
#define PARSE_TAIL(X) (((char*)(X))+PARSE_RECURSE_SZ)
#define __deref_out_ecount_part(size,length) _SAL1_Source_(__deref_out_ecount_part, (size,length), _Outptr_result_buffer_to_(size,length))
#define VOL_CAPABILITIES_RESERVED2 3
#define OP_DropTable 143
#define __DARWIN_STRUCT_STAT64_TIMES struct timespec st_atimespec; struct timespec st_mtimespec; struct timespec st_ctimespec; struct timespec st_birthtimespec;
#define WINDOW_STARTING_INT 0
#define _Memory_origin_(context) 
#define VM_INHERIT_DEFAULT VM_INHERIT_COPY
#define _Ret_z_ 
#define MCLBYTES (1 << MCLSHIFT)
#define SRT_DistQueue 8
#define FTS5_TOKEN_COLOCATED 0x0001
#define BTREE_SAVEPOSITION 0x02
#define osUnlink ((int(*)(const char*))aSyscall[16].pCurrent)
#define MACH_MSG_GUARD_FLAGS_MASK 0x0003
#define __RETURN_POLICY_VOID(_FunctionCall) 
#define round_msg(x) (((mach_msg_size_t)(x) + sizeof (natural_t) - 1) & ~(sizeof (natural_t) - 1))
#define BTREE_FILE_FORMAT 2
#define ALARM_NULL ((alarm_t) 0)
#define __ARM_ALIGN_MAX_STACK_PWR 16
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_0(x) 
#define F_GETLK 7
#define SQLITE_CONFIG_HEAP 8
#define _Deref_pre_opt_count_c_(size) _SAL1_1_Source_(_Deref_pre_opt_count_c_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre1_impl_(__count_c_impl(size)) _Pre_valid_impl_)
#define FIONREAD _IOR('f', 127, int)
#define _Field_z_ _SAL2_Source_(_Field_z_, (), _Null_terminated_)
#define SQLITE_LegacyFileFmt 0x00000002
#define TERM_VNULL 0x00
#define __PROJECT_VERSION(s) __IDSTRING(project_version,s)
#define __inner_fallthrough 
#define ATTR_FORK_VALIDMASK 0x00000003
#define _Deref_post1_impl_(p1) 
#define __specstrings 
#define VM_MEMORY_ROSETTA_RETURN_STACK 233
#define TMP_MAX _CRT_INT_MAX
#define SQLITE_PRAGMA 19
#define PROT_EXEC 0x04
#define __deref_in_opt _SAL1_Source_(__deref_in_opt, (), __deref_in _Pre_ __deref __exceptthat __maybenull)
#define ARM_AMX_STATE 24
#define __drv_isObjectPointer _SAL1_1_Source_(__drv_isObjectPointer, (), _Points_to_data_)
#define A_GETKMASK 4
#define NOTE_FORK 0x40000000
#define ARM_THREAD_STATE32 9
#define __IPHONE_14_0 140000
#define __IPHONE_14_1 140100
#define __IPHONE_14_2 140200
#define __IPHONE_14_3 140300
#define __IPHONE_14_5 140500
#define __IPHONE_14_6 140600
#define __IPHONE_14_7 140700
#define __IPHONE_14_8 140800
#define __FLT32_DIG__ 6
#define PAGE_IS_PINNED(p) ((p)->pLruNext==0)
#define PAGER_ERROR 6
#define _SC_TRACE_EVENT_FILTER 98
#define __SCCSID(s) __IDSTRING(sccsid,s)
#define __FLT_EPSILON__ 1.19209289550781250000000000000000000e-7F
#define _HAS_EXCEPTIONS 1
#define __WATCHOS_PROHIBITED 
#define SS_DISABLE 0x0004
#define IfNotOmitAV(expr) (expr)
#define KERN_TERMINATED 37
#define MEM_Ephem 0x1000
#define NOTE_USECONDS 0x00000002
#define __in_bcount(size) _SAL1_Source_(__in_bcount, (size), _In_reads_bytes_(size))
#define ILL_COPROC 7
#define MEMORY_OBJECT_COPY_SYMMETRIC 4
#define SQLITE_SERIALIZE_NOCOPY 0x001
#define WHERE_ORDERBY_NORMAL 0x0000
#define _Deref_out_opt_ _SAL1_1_Source_(_Deref_out_opt_, (), _Out_ _Deref_post_opt_valid_)
#define THREAD_IDENTIFIER_INFO_COUNT ((mach_msg_type_number_t) (sizeof(thread_identifier_info_data_t) / sizeof(natural_t)))
#define SQLITE_TRACE_STMT 0x01
#define WO_ALL 0x1fff
#define PROC_FLAG_EXT_DARWINBG 0x10000
#define __drv_releasesCriticalRegion 
#define __DBL_IS_IEC_60559__ 2
#define SQLITE_LIMIT_WORKER_THREADS 11
#define CTL_DEBUG 5
#define P_NOCLDSTOP 0x00000008
#define __abortlike __dead2 __cold __not_tail_called
#define SYNC_VOLUME_FULLSYNC 0x01
#define __field_bcount(size) _SAL1_Source_(__field_bcount, (size), __notnull __byte_writableTo(size))
#define SQLITE_DESERIALIZE_RESIZEABLE 2
#define EXPR_TOKENONLYSIZE offsetof(Expr,pLeft)
#define M16KCLSHIFT 14
#define EF_NO_XATTRS 0x00000002
#define __out_bcount_part_z(size,length) _SAL1_Source_(__out_bcount_part_z, (size,length), __out_bcount_part(size,length) __post __nullterminated)
#define SQLITE_FULL 13
#define DbClearProperty(D,I,P) (D)->aDb[I].pSchema->schemaFlags&=~(P)
#define _MAX_ULTOSTR_BASE2_COUNT (32 + 1)
#define TIOCNXCL _IO('t', 14)
#define __strong 
#define _Out_writes_to_ptr_(p) 
#define st_ctime st_ctimespec.tv_sec
#define __ARM_SIZEOF_MINIMAL_ENUM 4
#define VM_MEMORY_COREGRAPHICS_DATA 54
#define CC_BANG 15
#define ATTR_FILE_LINKCOUNT 0x00000001
#define KERN_KDBUFWAIT 23
#define FTS5_TOKENIZE_AUX 0x0008
#define __deref_opt_out_ecount_full_opt(size) _SAL1_Source_(__deref_opt_out_ecount_full_opt, (size), __deref_out_ecount_full_opt(size) __pre_except_maybenull)
#define _Ret_reallocated_bytes_(before,size) _Reallocation_function_(_Curr_, before, size)
#define SQLITE_IOERR_FSTAT (SQLITE_IOERR | (7<<8))
#define _Analysis_assume_section_unlocked_(name) 
#define _SC_MEMLOCK 30
#define _MAX_EXT 256
#define SQLITE_N_BTREE_META 16
#define __FLT32X_HAS_INFINITY__ 1
#define SQLITE_IOERR_GETTEMPPATH (SQLITE_IOERR | (25<<8))
#define SQLITE_DBCONFIG_LEGACY_ALTER_TABLE 1012
#define __INT32_MAX__ 0x7fffffff
#define osClose ((int(*)(int))aSyscall[1].pCurrent)
#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_1_ARGLIST(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_VFuncName,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1) __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_1_ARGLIST_EX(_ReturnType, _ReturnPolicy, _DeclSpec, __cdecl, _FuncName, _FuncName ##_s, _VFuncName, _VFuncName ##_s, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1)
#define _IRQL_saves_global_(k,s) 
#define __darwin_arm_thread_state64_set_pc_fptr(ts,fptr) ((ts).__pc = (uintptr_t)(fptr))
#define A_SETCLASS 23
#define PCACHE_DIRTYLIST_REMOVE 1
#define _Deref_pre_bytecap_x_(size) _SAL1_1_Source_(_Deref_pre_bytecap_x_, (size), _Deref_pre1_impl_(__notnull_impl_notref) _Deref_pre1_impl_(__bytecap_x_impl(size)))
#define MACH_RCV_TRAILER_SENDER 2
#define __deref_inout_bcount_full_opt(size) _SAL1_Source_(__deref_inout_bcount_full_opt, (size), __deref_inout_bcount_full(size) __pre_deref_except_maybenull __post_deref_except_maybenull)
#define UPDATE_MAX_BLOBSIZE(P) 
#define NOTE_EXTEND 0x00000004
#define IS_VALID_CRED(_cr) ((_cr) != NOCRED && (_cr) != FSCRED)
#define _CRT_INSECURE_DEPRECATE(_Replacement) 
#define _crt_va_end(ap) ( ap = (va_list)0 )
#define THREAD_INSPECT_NULL ((thread_inspect_t) 0)
#define MACH_MSGH_KIND_NOTIFICATION 0x00000001
#define MACH_RCV_INTERRUPTED 0x10004005
#define NOTE_TRACK 0x00000001
#define CBLOCK 64
#define SQLITE_PropagateConst 0x8000
#define _INTPTR_T 
#define invalid_memory_object_flavor(f) (f != MEMORY_OBJECT_ATTRIBUTE_INFO && f != MEMORY_OBJECT_PERFORMANCE_INFO && f != OLD_MEMORY_OBJECT_BEHAVIOR_INFO && f != MEMORY_OBJECT_BEHAVIOR_INFO && f != OLD_MEMORY_OBJECT_ATTRIBUTE_INFO)
#define ExprHasAllProperty(E,P) (((E)->flags&(P))==(P))
#define OP_Integer 70
#define VM_REGION_INFO_MAX (1024)
#define P_WEXIT 0x00002000
#define __drv_minFunctionIRQL(irql) _SAL1_1_Source_(__drv_minFunctionIRQL, (irql), _IRQL_always_function_min_(irql))
#define NOTE_VM_ERROR 0x10000000
#define IsHiddenColumn(X) (((X)->colFlags & COLFLAG_HIDDEN)!=0)
#define IsStat4 0
#define _Deref_ret_range_(lb,ub) _SAL2_Source_(_Deref_ret_range_, (lb,ub), _Deref_ret_range_impl_(lb,ub))
#define _SC_GETGR_R_SIZE_MAX 70
#define __FLT128_IS_IEC_60559__ 2
#define __drv_valueIs(arglist) _SAL1_1_Source_(__drv_valueIs, (arglist), _Post_ _SA_annotes1(SAL_return,arglist))
#define NC_HasAgg 0x0010
#define _PC_FILESIZEBITS 18
#define _WPERM_OK (1<<20)
#define VM_MEMORY_JAVASCRIPT_JIT_REGISTER_FILE 65
#define _SSIZE_T 
#define OE_Update 6
#define _NFILE _NSTREAM_
#define _CRT_WARNING(description) message("" __FILE__ "(" _CRT_STRINGIZE(__LINE__) ") : warning CRT0000 : " _CRT_STRINGIZE(description))
#define _STRUCT_MCONTEXT32 struct __darwin_mcontext32
#define ARM_DEBUG_STATE32_COUNT ((mach_msg_type_number_t) (sizeof (arm_debug_state32_t)/sizeof(uint32_t)))
#define NOTE_EXEC 0x20000000
#define SQLITE_IOERR_NOMEM_BKPT SQLITE_IOERR_NOMEM
#define _XBS5_ILP32_OFF32 __ILP32_OFF32
#define MPG_FLAGS_MOD_REFS_PINNED_COPYIN (0x04ull << 56)
#define __UINT_LEAST16_TYPE__ short unsigned int
#define WO_AUX 0x0040
#define _MACH_VM_REGION_H_ 
#define __FLT64X_MIN_10_EXP__ (-4931)
#define PAGE_MAX_SHIFT 14
#define _OUT_TO_MSGBOX 2
#define INT64_C(x) (x ## LL)
#define _CRTIMP2_PURE_MEMBER_FUNCTION(type) _CRTIMP2_PURE type _CRTIMP2_PURE_MEMBER_FUNCTION_CALLING_CONVENTION
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_4(x) x
#define _MRTIMP2_NPURE_CALLING_CONVENTION __cdecl
#define __SPI_DEPRECATED_WITH_REPLACEMENT(...) 
#define MACH_SEND_SYNC_USE_THRPRI MACH_SEND_PROPAGATE_QOS
#define KERN_PROCNAME 62
#define _Out_ 
#define MEMORY_OBJECT_DATA_NO_CHANGE 0x2
#define TARGET_OS_WATCH 0
#define AUDIT_TRIGGER_MAX 8
#define FOUR_BYTE_UINT(x) (((u32)(x)[0]<<24)|((x)[1]<<16)|((x)[2]<<8)|(x)[3])
#define CIRCLEQ_PREV(elm,field) ((elm)->field.cqe_prev)
#define __field_bcount_full_opt(size) _SAL1_Source_(__field_bcount_full_opt, (size), __field_bcount_part_opt(size,size))
#define SQLITE_INDEX_CONSTRAINT_EQ 2
#define MACH_MSG_MASK 0x00003e00
#define __out_ecount_part(size,length) _SAL1_Source_(__out_ecount_part, (size,length), _Out_writes_to_(size,length))
#define SQLITE_FCNTL_SIZE_LIMIT 36
#define _Pre_opt_z_cap_(size) _SAL1_1_Source_(_Pre_opt_z_cap_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre2_impl_(__zterm_impl,__cap_impl(size)) _Pre_valid_impl_)
#define _SC_XOPEN_VERSION 116
#define _FSBLKCNT_T 
#define SQLITE_LIMIT_SQL_LENGTH 1
#define KERN_JOB_CONTROL 19
#define _STRUCT_MCONTEXT64 struct __darwin_mcontext64
#define THREAD_STANDARD_POLICY_COUNT 0
#define NOTE_SECONDS 0x00000001
#define __drv_neverHoldGlobal(kind,param) _SAL1_1_Source_(__drv_neverHoldGlobal, (kind, param), _Requires_lock_not_held_(param))
#define __AVAILABILITY_INTERNAL_UNAVAILABLE __attribute__((unavailable))
#define INT_MIN (-2147483647 - 1)
#define __MAC_10_0 1000
#define __MAC_10_1 1010
#define __MAC_10_2 1020
#define __MAC_10_3 1030
#define __MAC_10_4 1040
#define __MAC_10_6 1060
#define __MAC_10_7 1070
#define __MAC_10_9 1090
#define HOST_PORT 1
#define F_SPECULATIVE_READ 101
#define SQLITE_INDEX_CONSTRAINT_GE 32
#define CPU_SUBTYPE_ITANIUM CPU_SUBTYPE_INTEL(11, 0)
#define SQLITE_DBCONFIG_ENABLE_FTS3_TOKENIZER 1004
#define SQLITE_CONSTRAINT_TRIGGER (SQLITE_CONSTRAINT | (7<<8))
#define F_SETPROTECTIONCLASS 64
#define SQLITE_INDEX_CONSTRAINT_GT 4
#define OP_RealAffinity 84
#define _Requires_lock_held_(e) 
#define FLAG_STRING 4
#define SQLITE_MUTEX_PTHREADS 
#define HOST_CHUD_PORT HOST_LAUNCHCTL_PORT
#define KERN_PROCARGS2 49
#define EXC_ARM_UNDEFINED 1
#define MEMORY_OBJECT_DEFAULT_NULL ((memory_object_default_t) 0)
#define _BSD_MACHINE__MCONTEXT_H_ 
#define __MAC_10_14_1 101401
#define __MAC_10_14_4 101404
#define EBADMSG 104
#define MAP_MEM_RT 7
#define MACH_SEND_OVERRIDE 0x00000020
#define MACH_PORT_TYPE_RECEIVE MACH_PORT_TYPE(MACH_PORT_RIGHT_RECEIVE)
#define SQLITE_INDEX_CONSTRAINT_IS 72
#define VOL_CAP_INT_FLOCK 0x00000200
#define READ_UTF8(zIn,zTerm,c) c = *(zIn++); if( c>=0xc0 ){ c = sqlite3Utf8Trans1[c-0xc0]; while( zIn!=zTerm && (*zIn & 0xc0)==0x80 ){ c = (c<<6) + (0x3f & *(zIn++)); } if( c<0x80 || (c&0xFFFFF800)==0xD800 || (c&0xFFFFFFFE)==0xFFFE ){ c = 0xFFFD; } }
#define COMAPT_MAXLOGNAME 12
#define SQLITE_IOERR_DIR_CLOSE (SQLITE_IOERR | (17<<8))
#define _Outptr_opt_result_maybenull_ 
#define OPFLG_INITIALIZER { 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x10, 0x00, 0x01, 0x00, 0x01, 0x01, 0x01, 0x03, 0x03, 0x01, 0x01, 0x03, 0x12, 0x03, 0x01, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x23, 0x0b, 0x26, 0x26, 0x01, 0x01, 0x03, 0x03, 0x03, 0x03, 0x03, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x08, 0x00, 0x10, 0x10, 0x10, 0x10, 0x00, 0x10, 0x10, 0x00, 0x00, 0x10, 0x10, 0x00, 0x00, 0x02, 0x02, 0x02, 0x00, 0x00, 0x12, 0x20, 0x00, 0x00, 0x00, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x26, 0x00, 0x12, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x04, 0x04, 0x00, 0x00, 0x10, 0x10, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x10, 0x10, 0x00, 0x04, 0x1a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,}
#define CPU_SUBTYPE_INTEL_MODEL(x) ((x) >> 4)
#define VM_MEMORY_DHMM 84
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_2_ARGLIST(_ReturnType,_FuncName,_VFuncName,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2) 
#define SQLITE_LOCK_SHARED 1
#define TK_MATCH 46
#define _Requires_exclusive_lock_held_(e) 
#define NOTE_WRITE 0x00000002
#define __deref_opt_xcount(size) _SAL1_Source_(__deref_opt_xcount, (size), __deref_xcount(size) __exceptthat __maybenull)
#define trunc_page(x) ((x) & (~(vm_page_size - 1)))
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_3(x) 
#define SQLITE_SYNC_NORMAL 0x00002
#define _SC_BC_STRING_MAX 12
#define MACH_VOUCHER_ATTR_MAX_RAW_RECIPE_ARRAY_SIZE 5120
#define _CRT_DEPRECATE_TEXT(_Text) __declspec(deprecated(_Text))
#define _Deref_post_opt_cap_c_(size) _SAL1_1_Source_(_Deref_post_opt_cap_c_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post1_impl_(__cap_c_impl(size)))
#define TIOCSBRK _IO('t', 123)
#define SQLITE_STATUS_PARSER_STACK 6
#define STDERR_FILENO 2
#define __DARWIN_ONLY_VERS_1050 1
#define walFrameOffset(iFrame,szPage) ( WAL_HDRSIZE + ((iFrame)-1)*(i64)((szPage)+WAL_FRAME_HDRSIZE) )
#define CTIMEOPT_VAL2(opt) CTIMEOPT_VAL2_(opt)
#define __DARWIN_1050ALIAS(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_UNIX03)
#define TK_RANGE 89
#define __FLT64_MAX_10_EXP__ 308
#define TASK_VM_INFO_REV3_COUNT ((mach_msg_type_number_t) (TASK_VM_INFO_REV4_COUNT - 2))
#define SQLITE_INDEX_CONSTRAINT_LT 16
#define _NO_SAL_2_H_ 
#define _DLFCN_H_ 
#define __COPYRIGHT(s) __IDSTRING(copyright,s)
#define MAP_COPY MAP_PRIVATE
#define OP_SetCookie 95
#define sqlite3Isxdigit(x) (sqlite3CtypeMap[(unsigned char)(x)]&0x08)
#define _CRT_V12_LEGACY_FUNCTIONALITY 
#define IN_INDEX_INDEX_ASC 3
#define MACH_PORT_TEMPOWNER 4
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_5(x) 
#define A_SETPOLICY 34
#define SI_QUEUE 0x10002
#define SQLITE_MAX_LENGTH 1000000000
#define SQLITE_DEFAULT_FILE_FORMAT 4
#define __INT_FAST32_MAX__ 0x7fffffff
#define SQLITE_CREATE_VIEW 8
#define SIOCGETVLAN SIOCGIFVLAN
#define __MAC_10_15_1 101501
#define _PTHREAD_SWIFT_IMPORTER_NULLABILITY_COMPAT defined(SWIFT_CLASS_EXTRA) && (!defined(SWIFT_SDK_OVERLAY_PTHREAD_EPOCH) || (SWIFT_SDK_OVERLAY_PTHREAD_EPOCH < 1))
#define _CRT_INSECURE_DEPRECATE_GLOBALS(_Replacement) _CRT_INSECURE_DEPRECATE(_Replacement)
#define _CRTNOALIAS 
#define __DARWIN_SUF_64_BIT_INO_T 
#define isSorter(x) ((x)->eCurType==CURTYPE_SORTER)
#define __deref_out_xcount_part_opt(size,length) _SAL1_Source_(__deref_out_xcount_part_opt, (size,length), __deref_out_xcount_part(size,length) _Post_ __deref __exceptthat __maybenull)
#define SIGQUIT 3
#define _In_bound_impl_ 
#define F_PUNCHHOLE 99
#define _SC_2_VERSION 17
#define _Pre_valid_ _Pre_notnull_ _Pre_ _Valid_
#define KERN_NTP_PLL 27
#define AGGREGATE(zName,nArg,arg,nc,xStep,xFinal,xValue) {nArg, SQLITE_UTF8|(nc*SQLITE_FUNC_NEEDCOLL), SQLITE_INT_TO_PTR(arg), 0, xStep,xFinal,xValue,0,#zName, {0}}
#define IN_DECLARE_VTAB (pParse->eParseMode==PARSE_MODE_DECLARE_VTAB)
#define TASK_KERNEL_PORT 1
#define SQLITE_IOERR_NOMEM (SQLITE_IOERR | (12<<8))
#define _INT16_T 
#define MINCORE_MODIFIED 0x4
#define KERN_MEMORY_ERROR 10
#define htonll(x) __DARWIN_OSSwapInt64(x)
#define __FLT64X_HAS_INFINITY__ 1
#define HW_L3CACHESIZE 22
#define host_set_closured_port(host,port) (host_set_special_port((host), HOST_CLOSURED_PORT, (port)))
#define __inner_adt_type_props(typ) 
#define __user_driver 
#define OP_Subtract 104
#define ADDR(X) (~(X))
#define _tzname (__tzname())
#define AQ_LOWATER 10
#define VM_MEMORY_SANITIZER 99
#define _Always_(a) 
#define CTLTYPE_INT 2
#define CURSOR_FAULT 4
#define _MACH_THREAD_POLICY_H_ 
#define TK_BETWEEN 48
#define _Inout_updates_opt_(s) 
#define _POSIX_PRIORITY_SCHEDULING (-1)
#define CPUFAMILY_ARM_SWIFT 0x1e2d6381
#define _Result_nullonfailure_ 
#define SI_USER 0x10001
#define _Pre_defensive_ 
#define KERN_PROC_ALL 0
#define _F1_C 0
#define NOTE_SIGNAL 0x08000000
#define YYACTIONTYPE unsigned short int
#define __DARWIN_SUF_NON_CANCELABLE 
#define _CRTIMP2_CALLING_CONVENTION __cdecl
#define TIOCCBRK _IO('t', 122)
#define MALLOC_VERBOSE_PRINT_LEVEL 2
#define OS_NOINLINE __attribute__((__noinline__))
#define USER_POSIX2_LOCALEDEF 16
#define UNIXFILE_PERSIST_WAL 0x04
#define _Post1_impl_(p1) 
#define MACH_PORT_RIGHT_SEND ((mach_port_right_t) 0)
#define VM_METER 1
#define PAGER_SYNCHRONOUS_FULL 0x03
#define _STRUCT_TIMEVAL struct timeval
#define __INT_LEAST32_MAX__ 0x7fffffff
#define GID_MAX 2147483647U
#define __out _SAL1_Source_(__out, (), _Out_)
#define EP_TokenOnly 0x004000
#define _Ret_writes_bytes_(s) 
#define __in_xcount(size) _SAL1_Source_(__in_xcount, (size), __in _Pre_ __inexpressible_readableTo(size))
#define SQLITE_BLOB 4
#define _INC_ERRNO 
#define __STR2WSTR(str) L ##str
#define _DEV_T 
#define __DBL_MAX_EXP__ 1024
#define MACH_SEND_PROPAGATE_QOS 0x00200000
#define __WCHAR_WIDTH__ 32
#define __DARWIN_BIG_ENDIAN 4321
#define UPL_NULL ((upl_t) 0)
#define TAILQ_FOREACH_REVERSE(var,head,headname,field) for ((var) = TAILQ_LAST((head), headname); (var); (var) = TAILQ_PREV((var), headname, field))
#define __write_guarded_by(lock) 
#define CPU_STATE_USER 0
#define MACH_MSG_TYPE_COPY_SEND 19
#define SQLITE_INDEX_CONSTRAINT_GLOB 66
#define _O_U16TEXT 0x20000
#define WALTRACE(X) 
#define TIOCIXOFF _IO('t', 128)
#define EV_SET64(kevp,a,b,c,d,e,f,g,h) do { struct kevent64_s *__kevp__ = (kevp); __kevp__->ident = (a); __kevp__->filter = (b); __kevp__->flags = (c); __kevp__->fflags = (d); __kevp__->data = (e); __kevp__->udata = (f); __kevp__->ext[0] = (g); __kevp__->ext[1] = (h); } while(0)
#define THREAD_PRECEDENCE_POLICY 3
#define __drv_savesIRQLGlobal(kind,param) _SAL1_1_Source_(__drv_savesIRQLGlobal, (kind,param), _IRQL_saves_global_(kind,param))
#define __TVOS_PROHIBITED 
#define TARGET_OS_LINUX 0
#define TAILQ_INSERT_AFTER(head,listelm,elm,field) do { TAILQ_CHECK_NEXT(listelm, field); if ((TAILQ_NEXT((elm), field) = TAILQ_NEXT((listelm), field)) != NULL) TAILQ_NEXT((elm), field)->field.tqe_prev = &TAILQ_NEXT((elm), field); else { (head)->tqh_last = &TAILQ_NEXT((elm), field); QMD_TRACE_HEAD(head); } TAILQ_NEXT((listelm), field) = (elm); (elm)->field.tqe_prev = &TAILQ_NEXT((listelm), field); QMD_TRACE_ELEM(&(elm)->field); QMD_TRACE_ELEM(&listelm->field); } while (0)
#define MAXUPRC CHILD_MAX
#define SQLITE_FCNTL_PRAGMA 14
#define host_get_telemetry_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_TELEMETRY_PORT, (port)))
#define _SYS_SIGNAL_H_ 
#define BTREE_SEEK_EQ 0x00000002
#define _POSIX2_UPE 200112L
#define A_GETKAUDIT 29
#define EVFILT_READ (-1)
#define SIOCDELMULTI _IOW('i', 50, struct ifreq)
#define __notreadonly 
#define SQLITE_DBCONFIG_DQS_DDL 1014
#define TK_VALUES 135
#define WAL_MAGIC 0x377f0682
#define _Pre_valid_cap_(size) _SAL1_1_Source_(_Pre_valid_cap_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__cap_impl(size)) _Pre_valid_impl_)
#define SQLITE_INDEX_CONSTRAINT_ISNOTNULL 70
#define CPU_SUBTYPE_ARM64_ALL ((cpu_subtype_t) 0)
#define MEMORY_OBJECT_PERF_INFO_COUNT ((mach_msg_type_number_t) (sizeof(memory_object_perf_info_data_t)/sizeof(int)))
#define FPE_FLTOVF 2
#define FD_CLOEXEC 1
#define ATTR_VOL_CAPABILITIES 0x00020000
#define EP_IsTrue 0x10000000
#define sqlite3MemdebugNoType(X,Y) 1
#define get2byteNotZero(X) (((((int)get2byte(X))-1)&0xffff)+1)
#define __format_string _SAL1_1_Source_(__format_string, (), _Printf_format_string_)
#define OPFLAG_AUXDELETE 0x04
#define __writableTo(size) 
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#define BITVEC_HASH(X) (((X)*1)%BITVEC_NINT)
#define __kpi_deprecated_arm64_macos_unavailable 
#define TK_NOTNULL 51
#define ENOPROTOOPT 123
#define O_DP_GETRAWUNENCRYPTED 0x0002
#define MAXHOSTNAMELEN 256
#define KERN_DOMAINNAME KERN_NISDOMAINNAME
#define st_atime st_atimespec.tv_sec
#define TK_LE 55
#define __SPI_DEPRECATED(...) 
#define _Deref_post_opt_cap_x_(size) _SAL1_1_Source_(_Deref_post_opt_cap_x_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post1_impl_(__cap_x_impl(size)))
#define _POSIX_CPUTIME (-1)
#define _In_z_bytecount_c_(size) _SAL1_1_Source_(_In_z_bytecount_c_, (size), _Pre_z_ _Pre_bytecount_c_(size) _Deref_pre_readonly_)
#define CPU_SUBTYPE_POWERPC_603ev ((cpu_subtype_t) 5)
#define PTHREAD_CREATE_DETACHED 2
#define __ARM_ALIGN_MAX_PWR 28
#define ATTR_CMN_EXTENDED_SECURITY 0x00400000
#define __deref_opt_out_xcount_full_opt(size) _SAL1_Source_(__deref_opt_out_scount_full_opt, (size), __deref_out_xcount_full_opt(size) __exceptthat __maybenull)
#define __WATCHOS_5_2 50200
#define _MMAP 
#define _CRTIMP2_PURE _CRTIMP2
#define IOC_VOID (__uint32_t)0x20000000
#define SQLITE_CONSTRAINT 19
#define EV_RECEIPT 0x0040
#define pagerUseWal(x) ((x)->pWal!=0)
#define AUC_AUDITING 1
#define WINT_MAX 0xffff
#define __WATCHOS_6_0 60000
#define __WATCHOS_6_2 60200
#define __DECLARE_CPP_OVERLOAD_INLINE_FUNC_0_0_EX(_ReturnType,_ReturnPolicy,_FuncName,_SecureFuncName,_SecureDstType,_DstType,_Dst) _CRT_INSECURE_DEPRECATE(_SecureFuncName) __inline _ReturnType __CRTDECL _FuncName(_DstType *_Dst)
#define POSIX_MADV_NORMAL 0
#define OP_PureFunc0 62
#define F_SETLK 8
#define TK_SELECT 134
#define _CRT_MEMCPY_S_INLINE static __inline
#define PCACHE_DIRTYLIST_ADD 2
#define __inner_nonvolatile 
#define EXC_ARM_SP_ALIGN 0x103
#define TK_LT 56
#define VM_SYNC_ASYNCHRONOUS ((vm_sync_t) 0x01)
#define _STRUCT_ARM_CPMU_STATE64 struct __darwin_arm_cpmu_state64
#define SQLITE_BTREE_H 
#define arm_thread_state64_get_lr_fptr(ts) __darwin_arm_thread_state64_get_lr_fptr(ts)
#define _Kernel_float_restored_ 
#define SIOCSLOWAT _IOW('s', 2, int)
#define _Inout_z_count_(size) _SAL1_1_Source_(_Inout_z_count_, (size), _Prepost_z_ _Prepost_count_(size))
#define SQLITE_Transitive 0x0080
#define _Out_opt_cap_m_(mult,size) _SAL1_1_Source_(_Out_opt_cap_m_, (mult,size), _Pre_opt_cap_m_(mult,size) _Post_valid_impl_)
#define __FLT_MIN_EXP__ (-125)
#define UF_NODUMP 0x00000001
#define __deref_opt_out_bcount_nz_opt(size) _SAL1_Source_(__deref_opt_out_bcount_nz_opt, (size), __deref_opt_out_bcount_opt(size))
#define SQLITE_DBCONFIG_DQS_DML 1013
#define HW_PRODUCT 27
#define MACH_VOUCHER_ATTR_VALUE_FLAGS_PERSIST ((mach_voucher_attr_value_flags_t)1)
#define PTHREAD_RWLOCK_INITIALIZER {_PTHREAD_RWLOCK_SIG_init, {0}}
#define _Deref_prepost_count_x_(size) _SAL1_1_Source_(_Deref_prepost_count_x_, (size), _Deref_pre_count_x_(size) _Deref_post_count_x_(size))
#define math_errhandling (MATH_ERRNO | MATH_ERREXCEPT)
#define __inout _SAL1_Source_(__inout, (), _Inout_)
#define powerof2(x) ((((x)-1)&(x))==0)
#define __printf0like(fmtarg,firstvararg) __attribute__((__format__ (__printf0__, fmtarg, firstvararg)))
#define UPDATE_IO_STATS(info,size) { info.count++; info.size += size; }
#define VM_PROT_READ ((vm_prot_t) 0x01)
#define MAP_MEM_INNERWBACK 5
#define __deref_opt_out _SAL1_Source_(__deref_opt_out, (), _Outptr_opt_)
#define wsdStatInit 
#define __elem_writableTo(size) 
#define _Inout_opt_bytecount_x_(size) _SAL1_1_Source_(_Inout_opt_bytecount_x_, (size), _Prepost_opt_bytecount_x_(size))
#define SQLITE_OPEN_MEMORY 0x00000080
#define MADV_CAN_REUSE 9
#define _SC_LINE_MAX 15
#define ARCADE_REG_NULL ((arcade_register_t) 0)
#define TERM_DYNAMIC 0x01
#define ATTR_VOL_FILECOUNT 0x00000200
#define SQLITE_STATUS_SCRATCH_USED 3
#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_2_0_EX(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SecureFuncName,_HType1,_HArg1,_HType2,_HArg2,_SalAttributeDst,_DstType,_Dst) _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_HType1 _HArg1, _HType2 _HArg2, _SalAttributeDst _DstType *_Dst);
#define CLEARBIT(V,I) V[I>>3] &= ~(1<<(I&7))
#define _Out_z_bytecapcount_(capcount) _SAL1_1_Source_(_Out_z_bytecapcount_, (capcount), _Pre_bytecap_(capcount) _Post_valid_impl_ _Post_z_bytecount_(capcount))
#define _MRTIMP_CALLING_CONVENTION __cdecl
#define WINDOW_ENDING_NUM 4
#define __INT_FAST64_TYPE__ long long int
#define _Field_range_impl_(min,max) 
#define VM_PURGABLE_VOLATILE 1
#define KERN_IPC 32
#define VM_PROT_EXECUTE ((vm_prot_t) 0x04)
#define PTHREAD_INHERIT_SCHED 1
#define SQLITE_MUTEX_STATIC_APP3 10
#define _putwchar_nolock(_Ch) _putwc_nolock(_Ch, stdout)
#define BTREE_HINT_RANGE 0
#define __FP_FAST_FMAF 1
#define KERN_AIOPROCMAX 47
#define __FLT128_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define __FP_FAST_FMAL 1
#define SIOCARPIPLL _IOWR('i', 40, struct ifreq)
#define _IRQL_is_cancel_ 
#define TASK_BASIC_INFO_64_2_COUNT (sizeof(task_basic_info_64_2_data_t) / sizeof(natural_t))
#define MACH_RCV_TRAILER_ELEMENTS(x) (((x) & 0xf) << 24)
#define SQLITE_DEFAULT_SYNCHRONOUS 2
#define host_get_filecoordinationd_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_FILECOORDINATIOND_PORT, (port)))
#define _countof __crt_countof
#define MEM_Real 0x0008
#define OP_Explain 171
#define P_NOCLDWAIT 0x40000000
#define KERN_INSUFFICIENT_BUFFER_SIZE 52
#define __post_ecount(size) _SAL1_Source_(__post_ecount, (size), _Post_ __elem_writableTo(size))
#define TK_FROM 138
#define TERM_LIKECOND 0x200
#define DST_WET 3
#define OS_FALLTHROUGH __attribute__((__fallthrough__))
#define SQLITE_CANTOPEN_FULLPATH (SQLITE_CANTOPEN | (3<<8))
#define __FLT16_DENORM_MIN__ 5.96046447753906250000000000000000000e-8F16
#define VOL_CAP_FMT_PERSISTENTOBJECTIDS 0x00000001
#define _Csalcat1_(x,y) 
#define _MSVCR80_FUNCTION_2(sal,type) sal type __cdecl
#define VM_MEMORY_CORESERVICES 43
#define CC_DOT 26
#define ATTR_VOL_SPACEUSED 0x00800000
#define HOST_BASIC_INFO_COUNT ((mach_msg_type_number_t) (sizeof(host_basic_info_data_t)/sizeof(integer_t)))
#define USE_PREAD 1
#define _Deref_pre_opt_z_bytecap_(size) _SAL1_1_Source_(_Deref_pre_opt_z_bytecap_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre2_impl_(__zterm_impl,__bytecap_impl(size)) _Pre_valid_impl_)
#define KERN_PROC_PID 1
#define _Csalcat2_(x,y) 
#define THREAD_SCHED_RR_INFO 11
#define P_SSTEP 0
#define _XOPEN_LEGACY (-1)
#define __IPHONE_7_1 70100
#define round_page(x) trunc_page((x) + (vm_page_size - 1))
#define TF_LP64 0x00000001
#define _MACH_KMOD_H_ 
#define HOST_DYNAMIC_PAGER_PORT (1 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define __deprecated_enum_msg(_msg) 
#define _Deref_pre_z_cap_c_(size) _SAL1_1_Source_(_Deref_pre_z_cap_c_, (size), _Deref_pre1_impl_(__notnull_impl_notref) _Deref_pre2_impl_(__zterm_impl,__cap_c_impl(size)) _Pre_valid_impl_)
#define _Deref_prepost_opt_z_ _SAL1_1_Source_(_Deref_prepost_opt_z_, (), _Deref_pre_opt_z_ _Deref_post_opt_z_)
#define __out_ecount_z(size) _SAL1_Source_(__out_ecount_z, (size), __ecount(size) __post __valid __refparam __post __nullterminated)
#define OP_SoftNull 74
#define CLD_CONTINUED 6
#define SIGINFO 29
#define _O_EXCL 0x0400
#define EOTHER 131
#define MNT_EXT_ROOT_DATA_VOL 0x00000001
#define POLICY_RR_BASE_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_rr_base)/sizeof(integer_t)))
#define TK_ELSE 155
#define MACH_PORT_NULL 0
#define MACH_MSGH_BITS_HAS_VOUCHER(bits) (MACH_MSGH_BITS_VOUCHER(bits) != MACH_MSGH_BITS_ZERO)
#define MACH_VOUCHER_NAME_NULL ((mach_voucher_name_t) 0)
#define SQLITE_FCNTL_COMMIT_PHASETWO 22
#define sqlite3Isspace(x) (sqlite3CtypeMap[(unsigned char)(x)]&0x01)
#define RTLD_LOCAL 0x4
#define ATTR_DIR_MOUNTSTATUS 0x00000004
#define MEMORY_OBJECT_INFO_MAX (1024)
#define osRmdir ((int(*)(const char*))aSyscall[19].pCurrent)
#define L_tmpnam_s L_tmpnam
#define SQLITE_Stat4 0x0800
#define PAGER_WRITER_FINISHED 5
#define BITVEC_SZELEM 8
#define _ARM_THREAD_STATUS_H_ 
#define SQLITE_STMTSTATUS_REPREPARE 5
#define CHAR_MAX SCHAR_MAX
#define _Create_lock_level_(n) 
#define YYNOCODE 307
#define FPE_INTDIV 7
#define SEEK_DATA 4
#define _STRUCT_ARM_THREAD_STATE struct __darwin_arm_thread_state
#define _Pre_opt_count_c_(size) _SAL1_1_Source_(_Pre_opt_count_c_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__count_c_impl(size)) _Pre_valid_impl_)
#define TERM_CODED 0x04
#define TASK_READ_PORT 6
#define _SYS_FILIO_H_ 
#define TASK_FLAVOR_MAX TASK_FLAVOR_NAME
#define BTALLOC_EXACT 1
#define _FOFF 7
#define __deref_inout_bcount_z(size) _SAL1_Source_(__deref_inout_bcount_z, (size), __deref_inout_bcount(size) __pre __deref __nullterminated __post __deref __nullterminated)
#define HOST_MIN_SPECIAL_PORT HOST_SECURITY_PORT
#define SQLITE_AFF_INTEGER 0x44
#define __deref_inout_ecount_part(size,length) _SAL1_Source_(__deref_inout_ecount_part, (size,length), __deref_inout_ecount(size) __pre __deref __elem_readableTo(length) __post __deref __elem_readableTo(length))
#define OP_OpenWrite 98
#define _IOC(inout,group,num,len) (inout | ((len & IOCPARM_MASK) << 16) | ((group) << 8) | (num))
#define _IOR(g,n,t) _IOC(IOC_OUT, (g), (n), sizeof(t))
#define SRT_Coroutine 13
#define F_ADDFILESUPPL 104
#define _SC_FILE_LOCKING 69
#define OP_IsNull 50
#define CPUFAMILY_ARM_TWISTER 0x92fb37c8
#define SF_Distinct 0x00001
#define SIOCSIFPHYS _IOW('i', 54, struct ifreq)
#define SQLITE_IOERR_COMMIT_ATOMIC (SQLITE_IOERR | (30<<8))
#define __REGISTER_PREFIX__ 
#define MACH_PORT_TYPE_SEND_ONCE MACH_PORT_TYPE(MACH_PORT_RIGHT_SEND_ONCE)
#define OP_Rowid 128
#define _Out_capcount_x_(capcount) _SAL1_1_Source_(_Out_capcount_x_, (capcount), _Pre_cap_x_(capcount) _Post_valid_impl_ _Post_count_x_(capcount))
#define MPO_IMPORTANCE_RECEIVER 0x08
#define YY_MIN_REDUCE 1174
#define EV_DISPATCH 0x0080
#define TIMER_END 
#define __FLT_IS_IEC_60559__ 2
#define _CS_XBS5_ILP32_OFFBIG_LIBS 26
#define _NO_CPP_INLINES 
#define NOTE_EXIT_REPARENTED ((unsigned int)eNoteExitReparentedDeprecated)
#define _CRTEXP 
#define _User_on_(expr) 
#define _Ret_cap_c_(size) _SAL1_1_Source_(_Ret_cap_c_, (size), _Ret1_impl_(__notnull_impl_notref) _Ret1_impl_(__cap_c_impl(size)))
#define TASK_EXC_GUARD_VM_ONCE 0x02
#define SQLITE_MAX_FUNCTION_ARG 127
#define _Deref_post_opt_valid_cap_(size) _SAL1_1_Source_(_Deref_post_opt_valid_cap_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post1_impl_(__cap_impl(size)) _Post_valid_impl_)
#define __drv_acquiresCancelSpinLock 
#define VOL_CAP_INT_EXCHANGEDATA 0x00000010
#define _Out_writes_to_ptr_opt_z_(p) 
#define _POSIX_V7_ILP32_OFF32 __ILP32_OFF32
#define TIMEVAL_TO_TIMESPEC(tv,ts) { (ts)->tv_sec = (tv)->tv_sec; (ts)->tv_nsec = (tv)->tv_usec * 1000; }
#define sqlite3VtabInSync(db) ((db)->nVTrans>0 && (db)->aVTrans==0)
#define _Outptr_opt_result_buffer_maybenull_(s) 
#define EMSGSIZE 115
#define EV_OOBAND EV_FLAG1
#define SQLITE_AUTH 23
#define _In_reads_to_ptr_opt_z_(p) 
#define JT_RIGHT 0x0010
#define __FLT_MANT_DIG__ 24
#define NOTE_EXIT_DETAIL_MASK 0x00070000
#define VM_LEDGER_TAG_NEURAL 0x00000005
#define CIRCLEQ_ENTRY(type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct { struct type *cqe_next; struct type *cqe_prev; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define __VERSION__ "12.2.0"
#define S_IFCHR 0020000
#define SIOCSIFPHYADDR _IOW('i', 62, struct ifaliasreq)
#define OP_ShiftLeft 101
#define _In_reads_z_(s) 
#define PragTyp_FUNCTION_LIST 15
#define _SC_XOPEN_SHM 113
#define EP_IsFalse 0x20000000
#define _MRTIMP __declspec(dllimport)
#define _Inout_z_bytecount_(size) _SAL1_1_Source_(_Inout_z_bytecount_, (size), _Prepost_z_ _Prepost_bytecount_(size))
#define VFS_CTL_STATFS VFS_CTL_STATFS64
#define _CS_DARWIN_USER_CACHE_DIR 65538
#define SQLITE_CONFIG_PCACHE_HDRSZ 24
#define TK_EXCEPT 132
#define HOST_VM_INFO_LATEST_COUNT HOST_VM_INFO_COUNT
#define MACH_PORT_TYPE(right) ((mach_port_type_t)(((mach_port_type_t) 1) << ((right) + ((mach_port_right_t) 16))))
#define THREAD_BACKGROUND_POLICY_DARWIN_BG 0x1000
#define MACH_VOUCHER_ATTR_IMPORTANCE_SELF ((mach_voucher_attr_recipe_command_t)200)
#define __field_ecount_opt(size) _SAL1_Source_(__field_ecount_opt, (size), __maybenull __elem_writableTo(size))
#define SQLITE_MISUSE_BKPT sqlite3MisuseError(__LINE__)
#define _Reserved_ _Pre_equal_to_(0) _Pre_ _Null_
#define _commode (*__p__commode())
#define ATTR_CMN_ADDEDTIME 0x10000000
#define _FILESEC_UNSET_PROPERTY ((void *)0)
#define SQLITE_MUTEX_STATIC_LRU 6
#define _FP_EQ 2
#define SQLITE_MUTEX_STATIC_MEM2 4
#define _Acquires_shared_lock_(e) 
#define P_ADOPTPERSONA 0x04000000
#define ATTR_CMN_MODTIME 0x00000400
#define KERN_OPENEVT_PROC 1
#define OS_FORMAT_PRINTF(x,y) __attribute__((__format__(printf,x,y)))
#define islessequal(x,y) ((_FPCOMPARE(x, y) & (_FP_LT | _FP_EQ)) != 0)
#define TASK_EXC_GUARD_NONE 0x00
#define VM_MEMORY_TCMALLOC 53
#define TIOCIXON _IO('t', 129)
#define __DARWIN_ONLY_UNIX_CONFORMANCE 1
#define _UNISTD_H_ 
#define PTHREAD_PRIO_INHERIT 1
#define _In_opt_z_ 
#define SQLITE_LOCK_NONE 0
#define _PC_REC_INCR_XFER_SIZE 20
#define _FP_GT 4
#define _SC_TIMERS 41
#define CPU_SUBTYPE_MC680x0_ALL ((cpu_subtype_t) 1)
#define _SYS__TYPES_H_ 
#define ENOTSOCK 128
#define __ARM_FEATURE_FMA 1
#define _CRT_BUILD_DESKTOP_APP 1
#define O_RDWR 0x0002
#define SQLITEINT_H 
#define SZOMB 5
#define MemNullNochng(X) ((X)->flags==(MEM_Null|MEM_Zero) && (X)->n==0 && (X)->u.nZero==0)
#define PragFlg_Result1 0x20
#define __inner_assume_validated(p) 
#define _SYS_SOCKIO_H_ 
#define _MAX_PATH 260
#define WEOF ((wint_t)(0xFFFF))
#define _DARWIN_FEATURE_UNIX_CONFORMANCE 3
#define SQLITE_IOERR_UNLOCK (SQLITE_IOERR | (8<<8))
#define BTREE_INCR_VACUUM 7
#define PAGE_MAX_MASK (PAGE_MAX_SIZE-1)
#define PROT_WRITE 0x02
#define THREAD_EXTENDED_POLICY 1
#define SQLITE_INDEX_SCAN_UNIQUE 1
#define CC_STAR 21
#define CTL_MACHDEP 7
#define NOTE_ABSOLUTE 0x00000008
#define SQLITE_CORRUPT_VTAB (SQLITE_CORRUPT | (1<<8))
#define _Post_bytecount_c_(size) _SAL1_1_Source_(_Post_bytecount_c_, (size), _Post1_impl_(__bytecount_c_impl(size)) _Post_valid_impl_)
#define TIOCMSET _IOW('t', 109, int)
#define timercmp(tvp,uvp,cmp) (((tvp)->tv_sec == (uvp)->tv_sec) ? ((tvp)->tv_usec cmp (uvp)->tv_usec) : ((tvp)->tv_sec cmp (uvp)->tv_sec))
#define TRAP_TRACE 2
#define OP_SCopy 79
#define __FLT32_MANT_DIG__ 24
#define SimulateDiskfullError(A) 
#define NOTE_RENAME 0x00000020
#define __out_bcount_full_opt(size) _SAL1_Source_(__out_bcount_full_opt, (size), __out_bcount_full(size) __pre_except_maybenull)
#define FSHIFT 11
#define __SIG_ATOMIC_MAX__ 0x7fffffff
#define SQLITE_DROP_TRIGGER 16
#define VM_PAGE_INFO_BASIC 1
#define _Deref_pre_z_bytecap_(size) _SAL1_1_Source_(_Deref_pre_z_bytecap_, (size), _Deref_pre1_impl_(__notnull_impl_notref) _Deref_pre2_impl_(__zterm_impl,__bytecap_impl(size)) _Pre_valid_impl_)
#define _Deref_pre_z_cap_x_(size) _SAL1_1_Source_(_Deref_pre_z_cap_x_, (size), _Deref_pre1_impl_(__notnull_impl_notref) _Deref_pre2_impl_(__zterm_impl,__cap_x_impl(size)) _Pre_valid_impl_)
#define _Inout_count_(size) _SAL1_1_Source_(_Inout_count_, (size), _Prepost_count_(size))
#define SQLITE_STAT4_SAMPLES 1
#define MNT_JOURNALED 0x00800000
#define __drv_allocatesMem(kind) _SAL_L_Source_(__drv_allocatesMem, (kind), _Post_ _SA_annotes1(SAL_NeedsRelease,__yes))
#define VM_MEMORY_WEBASSEMBLY VM_MEMORY_JAVASCRIPT_CORE
#define EFAULT 14
#define UND_SERVER_NULL ((UNDServerRef) 0)
#define MEMORY_OBJECT_DATA_SYNC 0x10
#define SQLITE_DEFAULT_MEMSTATUS 1
#define _Deref_pre_opt_cap_(size) _SAL1_1_Source_(_Deref_pre_opt_cap_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre1_impl_(__cap_impl(size)))
#define MACH_MSG_SIZE_RELIABLE ((mach_msg_size_t) 256 * 1024)
#define TK_NE 52
#define NOTE_PDATAMASK 0x000fffff
#define MACH_VOUCHER_ATTR_KEY_BANK ((mach_voucher_attr_key_t)3)
#define SQLITE_ReverseOrder 0x00001000
#define __deref_opt_inout_bcount_z(size) _SAL1_Source_(__deref_opt_inout_bcount_z, (size), __deref_opt_inout_bcount(size) __pre __deref __nullterminated __post __deref __nullterminated)
#define EXC_CORPSE_VARIANT_BIT 0x100
#define HOST_CAN_HAS_DEBUGGER 11
#define __IOS_UNAVAILABLE 
#define P4_EXPR (-10)
#define BENIGN_RACE_END __pragma(warning(pop))
#define __deref_inout_ecount(size) _SAL1_Source_(__deref_inout_ecount, (size), __deref_inout __pre __deref __elem_writableTo(size) __post _Notref_ __deref __elem_writableTo(size))
#define SQLITE_CONFIG_MALLOC 4
#define __FLT64_NORM_MAX__ 1.79769313486231570814527423731704357e+308F64
#define __drv_releasesResourceGlobal(kind,param) _SAL1_1_Source_(__drv_releasesResourceGlobal, (kind, param), _Releases_lock_(param))
#define _CS_POSIX_V6_ILP32_OFF32_LDFLAGS 3
#define CIRCLEQ_INSERT_TAIL(head,elm,field) do { (elm)->field.cqe_next = (void *)(head); (elm)->field.cqe_prev = (head)->cqh_last; if ((head)->cqh_first == (void *)(head)) (head)->cqh_first = (elm); else (head)->cqh_last->field.cqe_next = (elm); (head)->cqh_last = (elm); } while (0)
#define _O_RANDOM 0x0010
#define SQLITE_CONFIG_PAGECACHE 7
#define VM_REGION_SUBMAP_SHORT_INFO_COUNT_64 ((mach_msg_type_number_t) (sizeof (vm_region_submap_short_info_data_64_t) / sizeof (natural_t)))
#define PROCESSOR_SET_BASIC_INFO_COUNT ((mach_msg_type_number_t) (sizeof(processor_set_basic_info_data_t)/sizeof(natural_t)))
#define ELOOP 114
#define _CRT_SECURE_NO_DEPRECATE 
#define VQ_SERVEREVENT 0x0800
#define _STATIC_ASSERT(expr) typedef char __static_assert_t[(expr) != 0]
#define sqlite3Tolower(x) (sqlite3UpperToLower[(unsigned char)(x)])
#define _Pre_opt_count_x_(size) _SAL1_1_Source_(_Pre_opt_count_x_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__count_x_impl(size)) _Pre_valid_impl_)
#define IN_INDEX_INDEX_DESC 4
#define etSQLESCAPE 9
#define NOTE_EXITSTATUS 0x04000000
#define __FLT128_HAS_DENORM__ 1
#define F_SETFD 2
#define F_SETFL 4
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_1(x) x
#define YYSTACKDEPTH 100
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_4(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_5(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_6(x) x
#define SQLITE_INTEGER 1
#define _ACRTIMP _CRTIMP
#define SM_COW 1
#define SQLITE_DBCONFIG_NO_CKPT_ON_CLOSE 1006
#define __deref_out_ecount(size) _SAL1_Source_(__deref_out_ecount, (size), _Outptr_result_buffer_(size))
#define TAILQ_FIRST(head) ((head)->tqh_first)
#define __ORDER_PDP_ENDIAN__ 3412
#define _POSIX_TIMERS (-1)
#define _MAX_U64TOSTR_BASE16_COUNT (16 + 1)
#define SIOCGIFFUNCTIONALTYPE _IOWR('i', 173, struct ifreq)
#define CTL_VFS 3
#define SQLITE_IDXTYPE_IPK 3
#define TIOCM_CAR 0100
#define CTLTYPE_STRING 3
#define __DARWIN_UNIX03 1
#define _Null_unspecified 
#define cume_distFinalizeFunc cume_distValueFunc
#define OP_VUpdate 10
#define __MAC_11_1 110100
#define __MAC_11_3 110300
#define __MAC_11_4 110400
#define __MAC_11_5 110500
#define SQLITE_TOOBIG 18
#define UINT64_MAX 0xffffffffffffffffui64
#define __PTHREAD_RWLOCKATTR_SIZE__ 16
#define SQLITE_IOERR_SHMMAP (SQLITE_IOERR | (21<<8))
#define EP_Win 0x008000
#define _Ret_cap_x_(size) _SAL1_1_Source_(_Ret_cap_x_, (size), _Ret1_impl_(__notnull_impl_notref) _Ret1_impl_(__cap_x_impl(size)))
#define __INT_FAST8_MAX__ 0x7f
#define ACCESSX_MAX_TABLESIZE (16 * 1024)
#define BENIGN_RACE_BEGIN __pragma(warning(push))
#define OP_VCreate 161
#define __MAC_10_15_4 101504
#define P4_REAL (-13)
#define SQLITE_FullColNames 0x00000004
#define CPU_SUBTYPE_X86_ALL ((cpu_subtype_t)3)
#define PROCESSOR_CPU_LOAD_INFO 2
#define __drv_defined(x) _Macro_defined_( #x )
#define VM_PURGABLE_BEHAVIOR_LIFO (1 << VM_PURGABLE_BEHAVIOR_SHIFT)
#define VFUNCTION(zName,nArg,iArg,bNC,xFunc) {nArg, SQLITE_UTF8|(bNC*SQLITE_FUNC_NEEDCOLL), SQLITE_INT_TO_PTR(iArg), 0, xFunc, 0, 0, 0, #zName, {0} }
#define TASK_INSPECT_PORT 5
#define PAGER_LOCKINGMODE_EXCLUSIVE 1
#define _MAX_LTOSTR_BASE10_COUNT (1 + 10 + 1)
#define __deref_out_xcount_full_opt(size) _SAL1_Source_(__deref_out_xcount_full_opt, (size), __deref_out_xcount_full(size) _Post_ __deref __exceptthat __maybenull)
#define _Kernel_releases_resource_(k) 
#define MACH_PORT_RIGHT_PORT_SET ((mach_port_right_t) 3)
#define EPROC_CTTY 0x01
#define _VCRT_JIT_INTRINSIC 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_1(x) 
#define ArraySize(X) ((int)(sizeof(X)/sizeof(X[0])))
#define _Pre_opt_z_bytecap_c_(size) _SAL1_1_Source_(_Pre_opt_z_bytecap_c_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre2_impl_(__zterm_impl,__bytecap_c_impl(size)) _Pre_valid_impl_)
#define SQLITE_TRANSIENT ((sqlite3_destructor_type)-1)
#define __INT8_TYPE__ signed char
#define _IRQL_inout_ _IRQL_saves_ _IRQL_restores_
#define _SQLITE3RTREE_H_ 
#define PTHREAD_PRIO_PROTECT 2
#define _UCRT 
#define FWRITE 0x00000002
#define GUARD_TYPE_MACH_PORT 0x1
#define MACH_PORT_RIGHT_LABELH ((mach_port_right_t) 5)
#define SQLITE_DBCONFIG_ENABLE_VIEW 1015
#define O_SYNC 0x0080
#define CPU_SUBTYPE_VAX8600 ((cpu_subtype_t) 9)
#define sqlite3ParseToplevel(p) ((p)->pToplevel ? (p)->pToplevel : (p))
#define _CRT_ALTERNATIVE_INLINES 
#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_1_EX(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SecureFuncName,_SecureDstType,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1) _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1);
#define MAP_MEM_VM_SHARE 0x400000
#define EVFILT_TIMER (-7)
#define _SC_V6_ILP32_OFFBIG 104
#define TK_STRING 113
#define _SC_TRACE_LOG 100
#define _Accessible_bytes_(context,expr) 
#define TK_INDEXED 112
#define UNKNOWN_LOCK (EXCLUSIVE_LOCK+1)
#define ATTR_FORK_ALLOCSIZE 0x00000002
#define WO_LE (WO_EQ<<(TK_LE-TK_EQ))
#define VM_MEMORY_OS_ALLOC_ONCE 73
#define CPUSUBFAMILY_ARM_M 3
#define TIOCSIG _IO('t', 95)
#define _Analysis_suppress_lock_checking_(e) 
#define CURTYPE_PSEUDO 3
#define sqlite3ParserCTX_PDECL ,Parse *pParse
#define __API_AVAILABLE_BEGIN_GET_MACRO(...) 
#define PROCESSOR_SET_INFO_MAX (1024)
#define _SC_PRIORITIZED_IO 34
#define __drv_strictType(typename,mode) _SAL1_1_Source_(__drv_strictType, (typename,mode), _Pre_ _SA_annotes2(SAL_strictType, typename, mode))
#define _FILESEC_REMOVE_ACL ((void *)1)
#define P4_DYNBLOB (-17)
#define _In_ 
#define _DCRTIMP _CRTIMP
#define SQLITE_INTEGRITY_CHECK_ERROR_MAX 100
#define _Outptr_opt_result_buffer_(s) 
#define PragFlg_SchemaOpt 0x40
#define ntileFinalizeFunc ntileValueFunc
#define _Ret1_impl_(p1) 
#define _Ret_opt_count_c_(size) _SAL1_1_Source_(_Ret_opt_count_c_, (size), _Ret1_impl_(__maybenull_impl_notref) _Ret1_impl_(__count_c_impl(size)) _Ret_valid_impl_)
#define P4_INTARRAY (-15)
#define INTPTR_MAX INT32_MAX
#define _Deref_post_maybenull_ _SAL1_1_Source_(_Deref_post_maybenull_, (), _Deref_post1_impl_(__maybenull_impl_notref))
#define __UINTMAX_C(c) c ## UL
#define MACH_MSG_DESCRIPTOR_NULL ((mach_msg_descriptor_t *) 0)
#define SIGIOT SIGABRT
#define TARGET_OS_DRIVERKIT 0
#define PragTyp_SOFT_HEAP_LIMIT 32
#define __out_xcount_opt(size) _SAL1_Source_(__out_xcount_opt, (size), __out_xcount(size) __exceptthat __maybenull)
#define __inner_allocator 
#define MACH_MSGH_BITS_REMOTE_MASK 0x0000001f
#define INCRINIT_TASK 1
#define TF_HasPrimaryKey 0x0004
#define VFS_CTL_NSTATUS 0x0001000A
#define _Post_writable_byte_size_(s) _Post_ _Writable_bytes_(s)
#define SQLITE_FCNTL_LOCK_TIMEOUT 34
#define isOpen(pFd) ((pFd)->pMethods!=0)
#define VM_MEMORY_DYLIB 33
#define _Post_bytecount_x_(size) _SAL1_1_Source_(_Post_bytecount_x_, (size), _Post1_impl_(__bytecount_x_impl(size)) _Post_valid_impl_)
#define __DEFINE_CPP_OVERLOAD_INLINE_FUNC_0_0_EX(_ReturnType,_ReturnPolicy,_FuncName,_SecureFuncName,_SecureDstType,_DstType,_Dst) 
#define NOTE_FFNOP 0x00000000
#define __deref_realloc_bcount(insize,outsize) _SAL1_Source_(__deref_realloc_bcount, (insize,outsize), __inout _Pre_ __deref __byte_readableTo(insize) _Post_ __deref __byte_writableTo(outsize))
#define _SC_PRIORITY_SCHEDULING 35
#define __API_TO_BE_DEPRECATED 100000
#define task_get_host_port(task,port) (task_get_special_port((task), TASK_HOST_PORT, (port)))
#define OP_NewRowid 121
#define ATTR_CMN_PARENTID 0x04000000
#define O_CLOEXEC 0x01000000
#define __inout_ecount_full(size) _SAL1_Source_(__inout_ecount_full, (size), _Inout_updates_all_(size))
#define _SC_2_CHAR_TERM 20
#define __pre 
#define SQLITE_MAX_SYMLINKS 100
#define MATTR_VAL_ON 1
#define VM_MEMORY_ASL 81
#define __in_ecount_nz(size) _SAL1_Source_(__in_ecount_nz, (size), __in_ecount(size))
#define SQLITE_MAX_COLUMN 2000
#define UINT8_TYPE unsigned char
#define IOC_OUT (__uint32_t)0x40000000
#define _Writes_and_advances_ptr_(size) _SAL2_Source_(_Writes_and_advances_ptr_, (size), _At_((void*)_Curr_, _Inout_) _At_(_Curr_, _Pre_writable_size_(size) _Post_writable_size_(size) _Post_satisfies_(_Curr_ - _Old_(_Curr_) == _Old_(size) - size)) _At_(_Old_(_Curr_), _Post_readable_size_(_Old_(size) - size)))
#define JT_ERROR 0x0040
#define PragTyp_INDEX_LIST 18
#define __DECLARE_CPP_OVERLOAD_INLINE_FUNC_0_3_EX(_ReturnType,_ReturnPolicy,_FuncName,_SecureFuncName,_SecureDstType,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2,_TType3,_TArg3) _CRT_INSECURE_DEPRECATE(_SecureFuncName) __inline _ReturnType __CRTDECL _FuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3)
#define _STRUCT_ARM_EXCEPTION_STATE64 struct __darwin_arm_exception_state64
#define TK_DISTINCT 136
#define _Prepost_opt_z_ _SAL1_1_Source_(_Prepost_opt_z_, (), _Pre_opt_z_ _Post_z_)
#define MEM_AffMask 0x003f
#define _ID_T 
#define VM_MEMORY_MALLOC_LARGE 3
#define TH_USAGE_SCALE 1000
#define sqlite3ParserARG_PARAM 
#define _CRT_SECURE_NO_DEPRECATE_CORE 
#define __AVAILABILITY_VERSIONS__ 
#define __DECLARE_CPP_OVERLOAD_INLINE_NFUNC_0_3_EX(_ReturnType,_ReturnPolicy,_FuncName,_SecureFuncName,_SecureDstType,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2,_TType3,_TArg3) _CRT_INSECURE_DEPRECATE(_SecureFuncName) __inline _ReturnType __CRTDECL _FuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3)
#define P4_SUBPROGRAM (-4)
#define osPread ((ssize_t(*)(int,void*,size_t,off_t))aSyscall[9].pCurrent)
#define ATTR_VOL_QUOTA_SIZE 0x10000000
#define __xcount_opt(size) _SAL1_Source_(__xcount_opt, (size), __xcount(size) __exceptthat __maybenull)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_8(x) x
#define NC_UUpsert 0x0200
#define OP_Concat 108
#define SQLITE_READONLY 8
#define TK_ACTION 28
#define INTPTR_MIN INT32_MIN
#define __TARGETCONDITIONALS__ 
#define _WRITE_OK (1<<10)
#define KERN_OSVERSION 65
#define _CLASSIFY2(_Val1,_Val2,_FFunc,_DFunc,_LDFunc) (_CLASS_ARG((_Val1) + (_Val2)) == 'f' ? _FFunc((float)(_Val1), (float)(_Val2)) : _CLASS_ARG((_Val1) + (_Val2)) == 'd' ? _DFunc((double)(_Val1), (double)(_Val2)) : _LDFunc((long double)(_Val1), (long double)(_Val2)))
#define _IONBF 0x0004
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_3(x) 
#define TRAP_BRKPT 1
#define VM_LEDGER_TAG_MEDIA 0x00000003
#define F_GLOBAL_NOCACHE 55
#define BASEPRI(x) (((x) & (255 << 8)) == 0)
#define __nullable 
#define _POSIX_ASYNCHRONOUS_IO (-1)
#define __inner_exceptthat 
#define _Deref_pre1_impl_(p1) 
#define _MAX_DRIVE 3
#define __AARCH64EL__ 1
#define SQLITE_IOERR_SEEK (SQLITE_IOERR | (22<<8))
#define SQLITE_SET_LOCKPROXYFILE SQLITE_FCNTL_SET_LOCKPROXYFILE
#define VM_SYNC_KILLPAGES ((vm_sync_t) 0x08)
#define __releases_exclusive_lock(lock) 
#define SQLITE_DEFAULT_AUTOVACUUM 0
#define putVarint sqlite3PutVarint
#define VM_PROT_NO_CHANGE_LEGACY ((vm_prot_t) 0x08)
#define _CS_XBS5_ILP32_OFF32_LINTFLAGS 23
#define SORTER_TYPE_INTEGER 0x01
#define SRCHFS_NEGATEPARAMS 0x80000000
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_4_EX(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SecureFuncName,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2,_TType3,_TArg3,_TType4,_TArg4) _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3, _TType4 _TArg4);
#define ATTR_CMNEXT_EXT_FLAGS 0x00000200
#define _Use_decl_anno_impl_ 
#define PAGE_SHIFT vm_page_shift
#define STAT_GET_NEQ 2
#define _VCRT_RESTRICT __declspec(restrict)
#define F_SETNOSIGPIPE 73
#define TK_SLASH 106
#define SIOCSPGRP _IOW('s', 8, int)
#define sqlite3MemdebugHasType(X,Y) 1
#define MACH_VM_MIN_GPU_CARVEOUT_ADDRESS_RAW 0x0000001000000000ULL
#define POLICY_FIFO 4
#define __SYS_APPLEAPIOPTS_H__ 
#define CPU_SUBTYPE_MIPS_R3000a ((cpu_subtype_t) 6)
#define CLOFF CLOFSET
#define osGetpagesize ((int(*)(void))aSyscall[25].pCurrent)
#define KERN_MEMORY_DATA_MOVED 24
#define INT32_C(x) (x)
#define _SC_XOPEN_CRYPT 108
#define FP_ZERO 0
#define _Deref_prepost_cap_(size) _SAL1_1_Source_(_Deref_prepost_cap_, (size), _Deref_pre_cap_(size) _Deref_post_cap_(size))
#define IPC_EVENTLINK_NULL ((ipc_eventlink_t) 0)
#define MACH_PORT_GEN(name) (((name) & 0xff) << 24)
#define KERN_RAGE_PROC 1
#define SQLITE_PRIVATE static
#define __LONG_MAX__ 0x7fffffffffffffffL
#define __IOS_EXTENSION_UNAVAILABLE(_msg) 
#define VM_MEMORY_COREUIFILE 77
#define CPU_SUBTYPE_MASK 0xff000000
#define KERN_COREFILE 50
#define _Pre_opt_cap_for_(param) _SAL1_1_Source_(_Pre_opt_cap_for_, (param), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__cap_for_impl(param)))
#define SQLITE_AFF_NONE 0x40
#define time_value_add(result,addend) { (result)->microseconds += (addend)->microseconds; (result)->seconds += (addend)->seconds; if ((result)->microseconds >= TIME_MICROS_MAX) { (result)->microseconds -= TIME_MICROS_MAX; (result)->seconds++; } }
#define _In_opt_count_(size) _SAL1_1_Source_(_In_opt_count_, (size), _Pre_opt_count_(size) _Deref_pre_readonly_)
#define task_set_task_debug_control_port(task,port) (task_set_special_port((task), TASK_DEBUG_CONTROL_PORT, (port)))
#define SRT_EphemTab 12
#define sqlite3ParserTOKENTYPE Token
#define task_get_kernel_port(task,port) (task_get_special_port((task), TASK_KERNEL_PORT, (port)))
#define SQLITE_CountRows 0x00000080
#define __kpi_deprecated(_msg) 
#define __UINT_FAST16_TYPE__ short unsigned int
#define SQLITE_IOERR_CLOSE (SQLITE_IOERR | (16<<8))
#define VM_MEMORY_OPENCL 67
#define OP_ReadCookie 94
#define __field_ecount_part(size,init) _SAL1_Source_(__field_ecount_part, (size,init), __notnull __elem_writableTo(size) __elem_readableTo(init))
#define _POSIX_RAW_SOCKETS (-1)
#define __post 
#define SHARED_LOCK 1
#define _Deref_pre_valid_bytecap_x_(size) _SAL1_1_Source_(_Deref_pre_valid_bytecap_x_, (size), _Deref_pre1_impl_(__notnull_impl_notref) _Deref_pre1_impl_(__bytecap_x_impl(size)) _Pre_valid_impl_)
#define __SPECSTRINGS_STRICT_LEVEL 1
#define __WATCHOS_7_0 70000
#define __WATCHOS_7_1 70100
#define __WATCHOS_7_2 70200
#define __WATCHOS_7_4 70400
#define __WATCHOS_7_5 70500
#define __WATCHOS_7_6 70600
#define KERN_INVALID_VALUE 18
#define MACH_MSG_TRAILER_MINIMUM_SIZE sizeof(mach_msg_trailer_t)
#define sqlite3GlobalConfig sqlite3Config
#define MACH_SEND_SYNC_OVERRIDE 0x00100000
#define OP_AutoCommit 1
#define pthread_cleanup_pop(execute) __self->__cleanup_stack = __handler.__next; if (execute) (__handler.__routine)(__handler.__arg); }
#define ExplainQueryPlan(P) sqlite3VdbeExplain P
#define _DARWIN_FEATURE_ONLY_UNIX_CONFORMANCE 1
#define EDEADLK 36
#define SQLITE_SCHEMA 17
#define _Format_string_impl_(kind,where) _SA_annotes2(SAL_IsFormatString2, kind, where)
#define TASK_TRACE_MEMORY_INFO 24
#define __FLT32_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F32
#define ATTR_CMN_RETURNED_ATTRS 0x80000000
#define _Prepost_opt_bytecount_(size) _SAL1_1_Source_(_Prepost_opt_bytecount_, (size), _Pre_opt_bytecount_(size) _Post_bytecount_(size))
#define VM_MEMORY_CM_MEMORYPOOL 94
#define _Ret_opt_count_x_(size) _SAL1_1_Source_(_Ret_opt_count_x_, (size), _Ret1_impl_(__maybenull_impl_notref) _Ret1_impl_(__count_x_impl(size)) _Ret_valid_impl_)
#define __MISMATCH_TAGS_PUSH 
#define _SC_THREAD_KEYS_MAX 86
#define INT64_MAX 9223372036854775807i64
#define SIGCHLD 20
#define __INT16_TYPE__ short int
#define __UINT_FAST8_TYPE__ unsigned char
#define FULLY_WITHIN 2
#define __drv_notInTry _SAL_L_Source_(__drv_notInTry, (), _Pre_ _SA_annotes1(SAL_inTry,__no))
#define _MACH_ARM_VM_TYPES_H_ 
#define SQLITE_OPEN_CREATE 0x00000004
#define CURSOR_VALID 0
#define __deref_opt_out_xcount_part(size,length) _SAL1_Source_(__deref_opt_out_xcount_part, (size,length), __deref_out_xcount_part(size,length) __exceptthat __maybenull)
#define _MACH_BOOLEAN_H_ 
#define _WEXT_OK (1<<18)
#define YY_MAX_REDUCE 1554
#define MACH_VOUCHER_IMPORTANCE_ATTR_DROP_EXTERNAL 2
#define __EMPTY_DECLSPEC 
#define __drv_functionClass(x) _SAL1_Source_(__drv_functionClass, (x), _Function_class_(x))
#define CPU_SUBTYPE_VAX730 ((cpu_subtype_t) 4)
#define F_WRLCK 3
#define TAILQ_FOREACH(var,head,field) for ((var) = TAILQ_FIRST((head)); (var); (var) = TAILQ_NEXT((var), field))
#define _Inout_opt_z_count_c_(size) _SAL1_1_Source_(_Inout_opt_z_count_c_, (size), _Prepost_z_ _Prepost_opt_count_c_(size))
#define MEM_Blob 0x0010
#define AT_REALDEV 0x0200
#define _Deref_in_bound_ _SAL1_1_Source_(_Deref_in_bound_, (), _Deref_in_bound_impl_)
#define host_get_host_priv_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_PRIV_PORT, (port)))
#define MEMORY_OBJECT_DATA_FLUSH_ALL 0x40
#define SQLITE_CONFIG_PMASZ 25
#define MAX_PATHNAME 512
#define SIGSYS 12
#define SQLITE_CORRUPT_BKPT sqlite3CorruptError(__LINE__)
#define __TVOS_13_2 130200
#define _Pre_readonly_ _SAL1_1_Source_(_Pre_readonly_, (), _Pre1_impl_(__readaccess_impl_notref))
#define BITVEC_NINT (BITVEC_USIZE/sizeof(u32))
#define NOTE_LINK 0x00000010
#define SA_NOCLDSTOP 0x0008
#define __swift_compiler_version_at_least(...) 1
#define __field_encoded_pointer _SAL_L_Source_(__field_encoded_pointer, (), __inner_encoded)
#define _Valid_ 
#define _Inout_opt_bytecap_x_(size) _SAL1_1_Source_(_Inout_opt_bytecap_x_, (size), _Pre_opt_valid_bytecap_x_(size) _Post_valid_)
#define MACH_PORT_RECEIVE_STATUS 2
#define threadid pthread_self()
#define ILL_PRVREG 6
#define KERN_RETURN_MAX 0x100
#define host_get_audit_control_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_AUDIT_CONTROL_PORT, (port)))
#define SQLITE_FUNC_INTERNAL 0x00040000
#define _SC_THREAD_CPUTIME 84
#define TASK_EXC_GUARD_MP_CORPSE 0x40
#define BITVEC_TELEM u8
#define MPG_FLAGS_STRICT_REPLY_NO_BANK_ATTR (0x08ull << 56)
#define O_LARGEFILE 0
#define TASK_BASIC_INFO_64 TASK_BASIC_INFO_64_2
#define _MACH_HOST_SPECIAL_PORTS_H_ 
#define _BSD_MACHINE_ENDIAN_H_ 
#define __deref_opt_inout_nz_opt _SAL1_Source_(__deref_opt_inout_nz_opt, (), __deref_opt_inout_opt)
#define SQLITE_LIMIT_LENGTH 0
#define _No_competing_thread_ 
#define MATTR_MIGRATE 2
#define VM_REGION_SUBMAP_INFO_V0_SIZE (VM_REGION_SUBMAP_INFO_V1_SIZE - sizeof (unsigned int) )
#define CPU_SUBTYPE_VAX780 ((cpu_subtype_t) 1)
#define HOST_PREFERRED_USER_ARCH 12
#define CPU_SUBTYPE_VAX785 ((cpu_subtype_t) 2)
#define _Ret_opt_count_(size) _SAL1_1_Source_(_Ret_opt_count_, (size), _Ret1_impl_(__maybenull_impl_notref) _Ret1_impl_(__count_impl(size)) _Ret_valid_impl_)
#define NTOHS(x) (x) = ntohs((__uint16_t)x)
#define MACH_MSG_VM_KERNEL 0x00000400
#define SRCHFS_MATCHFILES 0x00000008
#define __IPHONE_8_0 80000
#define __IPHONE_8_1 80100
#define __IPHONE_8_2 80200
#define __IPHONE_8_3 80300
#define __IPHONE_8_4 80400
#define _Post_readable_byte_size_(s) _Post_ _Readable_bytes_(s) _Post_ _Valid_
#define PragFlg_NoColumns 0x02
#define _PC_REC_MIN_XFER_SIZE 22
#define __requires_lock_not_held(lock) 
#define COLFLAG_PRIMKEY 0x0001
#define _PTHREAD_MUTEX_SIG_init 0x32AAABA7
#define MAP_HASSEMAPHORE 0x0200
#define SQLITE_ReadUncommit 0x00000400
#define _Out_bytecap_post_bytecount_(cap,count) _SAL1_1_Source_(_Out_bytecap_post_bytecount_, (cap,count), _Pre_bytecap_(cap) _Post_valid_impl_ _Post_bytecount_(count))
#define SQLITE_MUTEX_STATIC_MEM 3
#define host_get_gssd_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_GSSD_PORT, (port)))
#define SQLITE_JUMPIFNULL 0x10
#define TK_CASE 152
#define OP_SorterData 126
#define etDYNSTRING 6
#define SRT_Set 11
#define TK_CAST 36
#define MACH_PORT_QLIMIT_BASIC (5)
#define REOPEN_AS_MEMDB(db) (0)
#define vdbeSorterPopulateDebug(x,y) 
#define ATTR_VOL_MOUNTEDDEVICE 0x00008000
#define WHERE_IN_ABLE 0x00000800
#define AUDIT_HARD_LIMIT_FREE_BLOCKS 4
#define _Inout_opt_count_x_(size) _SAL1_1_Source_(_Inout_opt_count_x_, (size), _Prepost_opt_count_x_(size))
#define OP_Rewind 36
#define SQLITE_TEMP_FILE_PREFIX "etilqs_"
#define BUS_ADRERR 2
#define PAGER_LOCKINGMODE_NORMAL 0
#define _O_SHORT_LIVED 0x1000
#define OPFLG_OUT3 0x20
#define __PTRDIFF_MAX__ 0x7fffffffffffffffL
#define VOL_CAP_INT_NAMEDSTREAMS 0x00002000
#define host_get_amfid_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_AMFID_PORT, (port)))
#define ATTR_FILE_FORKLIST 0x00000100
#define _Out_writes_all_opt_(s) 
#define __DARWIN_WCHAR_MIN (-0x7fffffff - 1)
#define INTERFACE 1
#define _WRITE_ABORT_MSG 0x1
#define _Pre_writeonly_ _SAL1_1_Source_(_Pre_writeonly_, (), _Pre1_impl_(__writeaccess_impl_notref))
#define __mb_cur_max (___mb_cur_max_func())
#define __INTPTR_TYPE__ long int
#define CPU_TYPE_MC98000 ((cpu_type_t) 10)
#define host_get_syspolicyd_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_SYSPOLICYD_PORT, (port)))
#define host_get_container_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_CONTAINERD_PORT, (port)))
#define MNT_ASYNC 0x00000040
#define _DARWIN_FEATURE_ONLY_64_BIT_INODE 1
#define SF_NestedFrom 0x00800
#define __API_UNAVAILABLE_END 
#define put4byte sqlite3Put4byte
#define XUCRED_VERSION 0
#define __in_ecount_nz_opt(size) _SAL1_Source_(__in_ecount_nz_opt, (size), __in_ecount_opt(size))
#define mem0 GLOBAL(struct Mem0Global, mem0)
#define S_ISBLK(m) (((m) & S_IFMT) == S_IFBLK)
#define SQLITE_DBCONFIG_MAINDBNAME 1000
#define SQLITE_TRACE_PROFILE 0x02
#define P4_STATIC (-1)
#define __sdv_save_request(r) 
#define ALLBITS ((Bitmask)-1)
#define __acquires_shared_lock(lock) 
#define VM_LEDGER_TAG_NONE 0x00000000
#define memJM 0
#define __STDC_WANT_LIB_EXT1__ 1
#define _CRTRESTRICT __declspec(restrict)
#define TK_FUNCTION 167
#define _CRTIMP2_PURE_CONSTRUCTOR _CRTIMP2_PURE _CRTIMP2_MEMBER_FUNCTION_CALLING_CONVENTION
#define SQLITE_OS_UNIX 1
#define __on_failure(annotes) _SAL1_1_Source_(__on_failure, (annotes), _On_failure_impl_(annotes _SAL_nop_impl_))
#define OP_AggStep 154
#define SQLITE_DBCONFIG_ENABLE_FKEY 1002
#define _CRT_INTERNAL_PRINTF_LEGACY_WIDE_SPECIFIERS (1ULL << 2)
#define _Pre_satisfies_impl_(expr) 
#define KERN_PS_STRINGS 34
#define OP_Expire 158
#define JT_CROSS 0x0002
#define OPFLAG_NCHANGE 0x01
#define _PC_NAME_CHARS_MAX 10
#define MBIGCLSHIFT 12
#define MACH_MSG_PORT_DESCRIPTOR 0
#define SYNC_VOLUME_WAIT 0x02
#define KERN_ARGMAX 8
#define MAP_SHARED 0x0001
#define SQLITE_DBSTATUS_CACHE_USED 1
#define _Pre_opt_ptrdiff_count_(ptr) _SAL1_1_Source_(_Pre_opt_ptrdiff_count_, (ptr), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__count_x_impl(__ptrdiff(ptr))) _Pre_valid_impl_)
#define VM_BEHAVIOR_RSEQNTL ((vm_behavior_t) 3)
#define P_FORCEQUOTA 0x20000000
#define MACH_MSG_GUARDED_PORT_DESCRIPTOR 4
#define _Deref_prepost_opt_bytecap_(size) _SAL1_1_Source_(_Deref_prepost_opt_bytecap_, (size), _Deref_pre_opt_bytecap_(size) _Deref_post_opt_bytecap_(size))
#define VQ_DEAD 0x0020
#define STAILQ_INSERT_TAIL(head,elm,field) do { STAILQ_NEXT((elm), field) = NULL; *(head)->stqh_last = (elm); (head)->stqh_last = &STAILQ_NEXT((elm), field); } while (0)
#define task_set_kernel_port(task,port) (task_set_special_port((task), TASK_KERNEL_PORT, (port)))
#define __deref_opt_out_bcount_opt(size) _SAL1_Source_(__deref_opt_out_bcount_opt, (size), __deref_out_bcount_opt(size) __pre_except_maybenull)
#define PTRMAP_ISPAGE(pBt,pgno) (PTRMAP_PAGENO((pBt),(pgno))==(pgno))
#define _Printf_format_string_ 
#define VM_SYNC_CONTIGUOUS ((vm_sync_t) 0x20)
#define SQLITE_EMPTY 16
#define __LPBIG_OFFBIG (1)
#define BTCURSOR_FIRST_UNINIT pBt
#define SQLITE_ROLLBACK 1
#define EPROTONOSUPPORT 135
#define UINT_MAX 0xffffffff
#define CPU_SUBTYPE_MC98000_ALL ((cpu_subtype_t) 0)
#define _Outptr_opt_result_buffer_to_maybenull_(size,count) _SAL2_Source_(_Outptr_opt_result_buffer_to_maybenull_, (size, count), _Out_opt_impl_ _Deref_post3_impl_(__maybenull_impl_notref, __cap_impl(size), __count_impl(count)))
#define MEMORY_OBJECT_RETURN_DIRTY 1
#define COLNAME_COLUMN 4
#define TF_OOOHidden 0x0080
#define __drv_inTry _SAL_L_Source_(__drv_inTry, (), _Pre_ _SA_annotes1(SAL_inTry,__yes))
#define CPUFAMILY_INTEL_COMETLAKE 0x1cf8a03e
#define EP_HasFunc 0x000004
#define PAGER_FLAGS_MASK 0x38
#define O_SHLOCK 0x00000010
#define KERN_RAGE_THREAD 2
#define KERN_MAXID 72
#define _MRTIMP2_FUNCTION(type) _MRTIMP2 type _MRTIMP2_CALLING_CONVENTION
#define IOCGROUP(x) (((x) >> 8) & 0xff)
#define __FLT_MAX_EXP__ 128
#define __deref_opt_out_ecount_part(size,length) _SAL1_Source_(__deref_opt_out_ecount_part, (size,length), __deref_out_ecount_part(size,length) __pre_except_maybenull)
#define TIOCPKT_FLUSHWRITE 0x02
#define _SYS_FILE_H_ 
#define SQLITE_ECEL_FACTOR 0x02
#define _PTHREAD_MUTEXATTR_T 
#define MACH_MSGH_BITS_HOLDS_IMPORTANCE_ASSERTION(bits) (((bits) & MACH_MSGH_BITS_IMPHOLDASRT) != MACH_MSGH_BITS_ZERO)
#define POLICY_FIFO_LIMIT_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_fifo_limit)/sizeof(integer_t)))
#define host_get_unfreed_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_UNFREED_PORT, (port)))
#define CC_MINUS 11
#define __DBL_MANT_DIG__ 53
#define IOCBASECMD(x) ((x) & ~(IOCPARM_MASK << 16))
#define FSOPT_RETURN_REALDEV 0x00000200
#define SQLITE_Fts3Tokenizer 0x00400000
#define _POSIX_REALTIME_SIGNALS (-1)
#define _POSIX_V6_LP64_OFF64 __LP64_OFF64
#define MNT_UPDATE 0x00010000
#define _CRTIMP2_PURE_MEMBER_FUNCTION_CALLING_CONVENTION __thiscall
#define ROWSET_ALLOCATION_SIZE 1024
#define UINT_FAST64_MAX UINT64_MAX
#define MACH_RCV_MSG 0x00000002
#define host_set_gssd_port(host,port) (host_set_special_port((host), HOST_GSSD_PORT, (port)))
#define MPG_FLAGS_STRICT_REPLY_MISMATCHED_PERSONA (0x10ull << 56)
#define MACH_RCV_INVALID_NOTIFY 0x10004007
#define __APPLE_API_EVOLVING 
#define SF_ComplexResult 0x40000
#define EXC_ARM_BREAKPOINT 1
#define OPFLAG_SAVEPOSITION 0x02
#define __deref_out_xcount_full(size) _SAL1_Source_(__deref_out_xcount_full, (size), __deref_out_xcount_part(size,size))
#define KERN_RPC_SERVER_TERMINATED 43
#define __deref_inout_z _SAL1_Source_(__deref_inout_z, (), __deref_inout __pre __deref __nullterminated __post _Notref_ __deref __nullterminated)
#define WHERE_ONEPASS_DESIRED 0x0004
#define _CS_XBS5_ILP32_OFFBIG_LINTFLAGS 27
#define _Result_zeroonfailure_ 
#define _VM_PAGE_SIZE_H_ 
#define KERN_PROC_LCID 7
#define _Deref_prepost_bytecap_(size) _SAL1_1_Source_(_Deref_prepost_bytecap_, (size), _Deref_pre_bytecap_(size) _Deref_post_bytecap_(size))
#define _MALLOC_MALLOC_H_ 
#define __out_ecount_z_opt(size) _SAL1_Source_(__out_ecount_z_opt, (size), __out_ecount_opt(size) __post __nullterminated)
#define _POSIX_VDISABLE ((unsigned char)'\377')
#define UNUSED_PARAMETER2(x,y) UNUSED_PARAMETER(x),UNUSED_PARAMETER(y)
#define EXC_MASK_ARITHMETIC (1 << EXC_ARITHMETIC)
#define etTOKEN 11
#define _APPEND_OK (1<<13)
#define SQLITE_TESTCTRL_EXTRA_SCHEMA_CHECKS 29
#define CPU_SUBTYPE_ARM_V4T ((cpu_subtype_t) 5)
#define SLIST_INIT(head) do { SLIST_FIRST((head)) = NULL; } while (0)
#define KERN_PROTECTION_FAILURE 2
#define __WINT_WIDTH__ 32
#define _Out_writes_to_opt_(s,c) 
#define MAP_MEM_NOOP 0
#define EP_ConstFunc 0x080000
#define __DARWIN_SUF_EXTSN "$DARWIN_EXTSN"
#define VM_PAGE_QUERY_PAGE_PRESENT 0x1
#define _Releases_lock_(e) 
#define SRCHFS_SKIPPACKAGES 0x00000040
#define SV_SIGINFO SA_SIGINFO
#define TK_IGNORE 63
#define CPU_SUBTYPE_ARM_V6M ((cpu_subtype_t) 14)
#define __GENSYM(x) __MKID(x, __COUNTER__)
#define MATTR_VAL_CACHE_FLUSH 6
#define VM_MEMORY_SKYWALK 87
#define TAILQ_HEAD(name,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct name { struct type *tqh_first; struct type **tqh_last; TRACEBUF } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define _IRQL_requires_(i) 
#define YYNSTATE 543
#define CPU_SUBTYPE_ARM_V7F ((cpu_subtype_t) 10)
#define __signed signed
#define CPU_SUBTYPE_ARM_V7K ((cpu_subtype_t) 12)
#define CPU_SUBTYPE_ARM_V7M ((cpu_subtype_t) 15)
#define MACH_MSG_TYPE_MOVE_SEND 17
#define CPU_SUBTYPE_ARM_V7S ((cpu_subtype_t) 11)
#define TK_NOT 19
#define TASK_VM_INFO_REV2_COUNT ((mach_msg_type_number_t) (TASK_VM_INFO_REV3_COUNT - 42))
#define _THREADLOCALEINFO 
#define KIPC_MAX_PROTOHDR 5
#define VFS_CTL_VERS1 0x01
#define KERNEL_BOOT_INFO_MAX (4096)
#define OS_UNUSED __attribute__((__unused__))
#define CPU_SUBTYPE_ARM_V8M ((cpu_subtype_t) 17)
#define SIGEMT 7
#define _Deref_pre_opt_bytecount_c_(size) _SAL1_1_Source_(_Deref_pre_opt_bytecount_c_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre1_impl_(__bytecount_c_impl(size)) _Pre_valid_impl_)
#define VM_FLAGS_USER_REMAP (VM_FLAGS_FIXED | VM_FLAGS_ANYWHERE | VM_FLAGS_RANDOM_ADDR | VM_FLAGS_OVERWRITE| VM_FLAGS_RETURN_DATA_ADDR | VM_FLAGS_RESILIENT_CODESIGN | VM_FLAGS_RESILIENT_MEDIA)
#define __UINT8_C(c) c
#define THREAD_SCHED_FIFO_INFO 12
#define SQLITE_MUTEX_STATIC_PMEM 7
#define MACH_SERVICE_PORT_INFO_COUNT ((char) (sizeof(mach_service_port_info_data_t)/sizeof(char)))
#define TIOCPKT_DATA 0x00
#define __deref_opt_in_xcount(size) _SAL1_Source_(__deref_opt_in_xcount, (size), __deref_in_xcount(size) __exceptthat __maybenull)
#define __precond(expr) 
#define CTIMEOPT_VAL2_(opt1,opt2) #opt1 "," #opt2
#define TIOCEXT _IOW('t', 96, int)
#define _MAX_ITOSTR_BASE16_COUNT (8 + 1)
#define __out_bcount_z_opt(size) _SAL1_Source_(__out_bcount_z_opt, (size), __out_bcount_opt(size) __post __nullterminated)
#define TK_PRAGMA 70
#define YY_MAX_SHIFT 542
#define __UINT64_TYPE__ long long unsigned int
#define _Post_defensive_ 
#define __has_feature(x) 0
#define VM_MACHFACTOR 4
#define OP_Found 29
#define _Inout_z_bytecap_(size) _SAL1_1_Source_(_Inout_z_bytecap_, (size), _Pre_z_bytecap_(size) _Post_z_)
#define __ARM_NEON 1
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_15_1(x) x
#define ARM_CPMU_STATE64 18
#define VM_MEMORY_CORPSEINFO 80
#define THREAD_BACKGROUND_POLICY 5
#define SQLITE_TESTCTRL_VDBE_COVERAGE 21
#define CIRCLEQ_REMOVE(head,elm,field) do { CIRCLEQ_CHECK_NEXT(head, elm, field); CIRCLEQ_CHECK_PREV(head, elm, field); if ((elm)->field.cqe_next == (void *)(head)) (head)->cqh_last = (elm)->field.cqe_prev; else (elm)->field.cqe_next->field.cqe_prev = (elm)->field.cqe_prev; if ((elm)->field.cqe_prev == (void *)(head)) (head)->cqh_first = (elm)->field.cqe_next; else (elm)->field.cqe_prev->field.cqe_next = (elm)->field.cqe_next; } while (0)
#define SQLITE_Defensive 0x10000000
#define SIOCGIFASYNCMAP _IOWR('i', 124, struct ifreq)
#define _Notref_impl_ 
#define __deref_inout_bcount_nz_opt(size) _SAL1_Source_(__deref_inout_bcount_nz_opt, (size), __deref_inout_bcount_opt(size))
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3_SIZE(_DeclSpec,_FuncName,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2,_TType3,_TArg3) __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3_SIZE_EX(_DeclSpec, _FuncName, _FuncName ##_s, _DstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3)
#define _POSIX_MAPPED_FILES 200112L
#define __deref_inout_ecount_iterator(size,incr) _SAL1_Source_(__deref_inout_ecount_iterator, (size,incr), __inout _Pre_ __deref __elem_readableTo(size) _Pre_ __deref __elem_writableTo(size) __deref_out_range(==, _Old_(*_Curr_) + incr))
#define SIGXCPU 24
#define __FLT128_HAS_QUIET_NAN__ 1
#define VM_MEMORY_COREDATA 45
#define VM_MEMORY_COREIMAGE 68
#define THREAD_STANDARD_POLICY 1
#define SQLITE_DEFAULT_PAGE_SIZE 4096
#define SQLITE_LIMIT_VDBE_OP 5
#define UINT32_TYPE unsigned int
#define _MACH_VM_BEHAVIOR_H_ 
#define EXPR_REDUCEDSIZE offsetof(Expr,iTable)
#define STAILQ_FIRST(head) ((head)->stqh_first)
#define _SC_MAPPED_FILES 47
#define SQLITE_ShortColNames 0x00000040
#define NEVER(X) (X)
#define STAT_GET_NLT 3
#define P_DELAYIDLESLEEP 0x00040000
#define QMD_TRACE_ELEM(elem) 
#define JT_INNER 0x0001
#define EF_IS_SYNC_ROOT 0x00000004
#define PROC_FLAG_IMPORTANCE_DONOR 0x400000
#define __FLT64X_MIN__ 3.36210314311209350626267781732175260e-4932F64x
#define PAGE_SIZE vm_page_size
#define INT8_MAX 127i8
#define SQLITE_ATTACH 24
#define VM_MEMORY_COREPROFILE 71
#define _PC_MAX_CANON 2
#define etSIZE 4
#define ATTR_VOL_INFO 0x80000000
#define TASK_AUDIT_TOKEN_COUNT (sizeof(audit_token_t) / sizeof(natural_t))
#define TERM_IS 0x800
#define _Ret_opt_bytecap_c_(size) _SAL1_1_Source_(_Ret_opt_bytecap_c_, (size), _Ret1_impl_(__maybenull_impl_notref) _Ret1_impl_(__bytecap_c_impl(size)))
#define CTL_VM_NAMES { { 0, 0 }, { "vmmeter", CTLTYPE_STRUCT }, { "loadavg", CTLTYPE_STRUCT }, { 0, 0 }, { "dummy", CTLTYPE_INT }, { "swapusage", CTLTYPE_STRUCT } }
#define _Outref_result_buffer_(s) 
#define PTHREAD_CREATE_JOINABLE 1
#define _BSD_MACHINE_TYPES_H_ 
#define __GNUC_STDC_INLINE__ 1
#define UINT_LEAST64_MAX UINT64_MAX
#define _Translates_Win32_to_HRESULT_(errorCode) _SAL2_Source_(_Translates_Win32_to_HRESULT_, (errorCode), _Always_( _When_((HRESULT)errorCode <= 0, _At_(_Curr_, _Post_equal_to_((HRESULT)errorCode))) _When_((HRESULT)errorCode > 0, _At_(_Curr_, _Post_equal_to_((HRESULT)((errorCode & 0x0000FFFF) | (FACILITY_WIN32 << 16) | 0x80000000))))))
#define MACH_PORT_QLIMIT_SMALL (16)
#define ExplainQueryPlanParent(P) sqlite3VdbeExplainParent(P)
#define P5_ConstraintCheck 3
#define __FLT64_HAS_DENORM__ 1
#define WAL_HEAPMEMORY_MODE 2
#define SLIST_HEAD(name,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct name { struct type *slh_first; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define sqlite3ExplainBreakpoint(A,B) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_1(x) 
#define UF_DATAVAULT 0x00000080
#define OP_BitAnd 99
#define _COM_Outptr_opt_result_maybenull_ 
#define __in_bcount_z(size) _SAL1_Source_(__in_bcount_z, (size), __in_bcount(size) __pre __nullterminated)
#define etCHARX 8
#define __inout_ecount_z_opt(size) _SAL1_Source_(__inout_ecount_z_opt, (size), __inout_ecount_opt(size) __pre __nullterminated __post __nullterminated)
#define MEMORY_OBJECT_COPY_TEMPORARY 3
#define ATTR_CMN_PAROBJID 0x00000080
#define __DEC_EVAL_METHOD__ 2
#define MACH_MSG_GUARD_FLAGS_IMMOVABLE_RECEIVE 0x0001
#define MACH_RCV_LARGE 0x00000004
#define __options_closed_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_closed __enum_options
#define ARM_DEBUG_STATE_COUNT ((mach_msg_type_number_t) (sizeof (arm_debug_state_t)/sizeof(uint32_t)))
#define _Deref_in_range_(l,h) 
#define CPU_SUBTYPE_INTEL_FAMILY_MAX 15
#define _Deref_prepost_valid_bytecap_x_(size) _SAL1_1_Source_(_Deref_prepost_valid_bytecap_x_, (size), _Deref_pre_valid_bytecap_x_(size) _Deref_post_valid_bytecap_x_(size))
#define _Analysis_assume_lock_acquired_(e) 
#define SQLITE_INT_TO_PTR(X) ((void*)(__PTRDIFF_TYPE__)(X))
#define CPU_SUBTYPE_VAX8200 ((cpu_subtype_t) 7)
#define CPU_SUBTYPE_MIPS_R2300 ((cpu_subtype_t) 1)
#define _Range_impl_(min,max) 
#define __drv_neverHoldCriticalRegion 
#define __inner_assume_bound_dec 
#define VM_PURGABLE_BEHAVIOR_MASK (1 << VM_PURGABLE_BEHAVIOR_SHIFT)
#define __DARWIN_OSSwapConstInt64(x) ((__uint64_t)((((__uint64_t)(x) & 0xff00000000000000ULL) >> 56) | (((__uint64_t)(x) & 0x00ff000000000000ULL) >> 40) | (((__uint64_t)(x) & 0x0000ff0000000000ULL) >> 24) | (((__uint64_t)(x) & 0x000000ff00000000ULL) >> 8) | (((__uint64_t)(x) & 0x00000000ff000000ULL) << 8) | (((__uint64_t)(x) & 0x0000000000ff0000ULL) << 24) | (((__uint64_t)(x) & 0x000000000000ff00ULL) << 40) | (((__uint64_t)(x) & 0x00000000000000ffULL) << 56)))
#define SELECTTRACE(K,P,S,X) 
#define VM_FLAGS_USER_ALLOCATE (VM_FLAGS_FIXED | VM_FLAGS_ANYWHERE | VM_FLAGS_PURGABLE | VM_FLAGS_4GB_CHUNK | VM_FLAGS_RANDOM_ADDR | VM_FLAGS_NO_CACHE | VM_FLAGS_PERMANENT | VM_FLAGS_OVERWRITE | VM_FLAGS_SUPERPAGE_MASK | VM_FLAGS_ALIAS_MASK)
#define _Pre_opt_valid_bytecap_(size) _SAL1_1_Source_(_Pre_opt_valid_bytecap_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__bytecap_impl(size)) _Pre_valid_impl_)
#define VOL_CAP_FMT_ZERO_RUNS 0x00000080
#define MAX_SECTOR_SIZE 0x10000
#define OP_IfNotZero 48
#define __drv_typeExpr 3
#define SET_MAP_MEM(caching,flags) ((flags) = ((((unsigned int)(caching)) << 24) & 0xFF000000) | ((flags) & 0xFFFFFF));
#define charMap(X) sqlite3UpperToLower[(unsigned char)X]
#define _FILE_OFFSET_BITS 64
#define AUDIT_TRAIL 0x0100
#define __out_xcount_full(size) _SAL1_Source_(__out_xcount_full, (size), __out_xcount_part(size,size))
#define _NullNull_terminated_impl_ 
#define _STRUCT_TIMESPEC struct timespec
#define MALLOC_INTROSPECT_FN_PTR(fn) fn
#define _C2 1
#define _Outref_result_bytebuffer_maybenull_(s) 
#define os_is_compile_time_constant(expr) __builtin_constant_p(expr)
#define VM_SYNC_REUSABLEPAGES ((vm_sync_t) 0x40)
#define DB_UnresetViews 0x0002
#define O_EXCL 0x00000800
#define SQLITE_LITTLEENDIAN 1
#define WHERE_SEEK_UNIQ_TABLE 0x1000
#define EISCONN 113
#define SIOCRSLVMULTI _IOWR('i', 59, struct rslvmulti_req)
#define PragFlg_ReadOnly 0x08
#define VDBE_MAGIC_INIT 0x16bceaa5
#define __readonly 
#define __drv_freesMem(kind) _SAL_L_Source_(__drv_freesMem, (kind), _Post_ _SA_annotes1(SAL_NeedsRelease,__no))
#define ARM_THREAD_STATE 1
#define SQLITE_OPEN_URI 0x00000040
#define __TVOS_10_0 100000
#define __TVOS_10_1 100100
#define __TVOS_10_2 100200
#define KERN_KDREADCURTHRMAP 21
#define _SA_annotes0(n) 
#define _SA_annotes2(n,pp1,pp2) 
#define _SA_annotes3(n,pp1,pp2,pp3) 
#define PAGE_MAX_SIZE (1 << PAGE_MAX_SHIFT)
#define SF_Recursive 0x02000
#define VM_PURGABLE_SET_STATE_FROM_KERNEL ((vm_purgable_t) 3)
#define osFchmod ((int(*)(int,mode_t))aSyscall[14].pCurrent)
#define MACH_MSGH_BITS_OTHER(bits) ((bits) &~ MACH_MSGH_BITS_PORTS_MASK)
#define __inout_bcount_z_opt(size) _SAL1_Source_(__inout_bcount_z_opt, (size), __inout_bcount_opt(size))
#define osPwrite ((ssize_t(*)(int,const void*,size_t,off_t)) aSyscall[12].pCurrent)
#define TWO_BYTE_INT(x) (256*(i8)((x)[0])|(x)[1])
#define SLIST_FOREACH_SAFE(var,head,field,tvar) for ((var) = SLIST_FIRST((head)); (var) && ((tvar) = SLIST_NEXT((var), field), 1); (var) = (tvar))
#define MACH_RCV_TRAILER_LABELS 8
#define F_FINDSIGS 78
#define put2byte(p,v) ((p)[0] = (u8)((v)>>8), (p)[1] = (u8)(v))
#define __INT8_MAX__ 0x7f
#define INT_FAST16_MAX INT32_MAX
#define SQLITE_VTAB_CONSTRAINT_SUPPORT 1
#define __PIC__ 2
#define _Acquires_lock_(e) 
#define ATTR_CMN_OWNERID 0x00008000
#define KERN_HOSTID 11
#define __UINT_FAST32_TYPE__ unsigned int
#define _SC_PAGE_SIZE _SC_PAGESIZE
#define SRT_Queue 7
#define KERN_INVALID_ADDRESS 1
#define EV_POLL EV_FLAG0
#define HW_BUS_FREQ 14
#define WALINDEX_PGSZ ( sizeof(ht_slot)*HASHTABLE_NSLOT + HASHTABLE_NPAGE*sizeof(u32) )
#define _Pre_cap_(size) _SAL1_1_Source_(_Pre_cap_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__cap_impl(size)))
#define _Notvalid_impl_ 
#define TK_TABLE 16
#define SQLITE_FUNC_CONSTANT 0x0800
#define __FLT_MAX__ 3.40282346638528859811704183484516925e+38F
#define INITFLAG_AlterTable 0x0001
#define CPU_ARCH_MASK 0xff000000
#define __failureDefault(x) 
#define SQLITE_DROP_TEMP_TABLE 13
#define MACH_MSG_OOL_PORTS_DESCRIPTOR 2
#define CPU_SUBTYPE_X86_ARCH1 ((cpu_subtype_t)4)
#define TIOCGDRAINWAIT _IOR('t', 86, int)
#define SQLITE_RECURSIVE 33
#define CHECK_PAGE(x) 
#define _IO(g,n) _IOC(IOC_VOID, (g), (n), 0)
#define __FP_FAST_FMA 1
#define PragTyp_INCREMENTAL_VACUUM 16
#define _Deref_out_ _SAL1_1_Source_(_Deref_out_, (), _Out_ _Deref_post_valid_)
#define _Deref_pre_opt_bytecount_x_(size) _SAL1_1_Source_(_Deref_pre_opt_bytecount_x_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre1_impl_(__bytecount_x_impl(size)) _Pre_valid_impl_)
#define EXC_ARM_DA_ALIGN 0x101
#define SA_NOCLDWAIT 0x0020
#define KERN_NOT_WAITING 48
#define _Notvalid_ 
#define TK_DEFAULT 116
#define __struct_bcount(size) _SAL1_Source_(__struct_bcount, (size), __byte_writableTo(size))
#define KERN_INVALID_ARGUMENT 4
#define _Writable_elements_impl_(size) 
#define EXC_MASK_ALL (EXC_MASK_BAD_ACCESS | EXC_MASK_BAD_INSTRUCTION | EXC_MASK_ARITHMETIC | EXC_MASK_EMULATION | EXC_MASK_SOFTWARE | EXC_MASK_BREAKPOINT | EXC_MASK_SYSCALL | EXC_MASK_MACH_SYSCALL | EXC_MASK_RPC_ALERT | EXC_MASK_RESOURCE | EXC_MASK_GUARD | EXC_MASK_MACHINE)
#define TIOCCDTR _IO('t', 120)
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1_ARGLIST(_ReturnType,_FuncName,_VFuncName,_DstType,_Dst,_TType1,_TArg1) 
#define PTHREAD_MUTEX_RECURSIVE 2
#define __ARM_FEATURE_NUMERIC_MAXMIN 1
#define __API_AVAILABLE_BEGIN(...) 
#define SQLITE_TEXT 3
#define __INT32_TYPE__ int
#define _FTS5_H 
#define NFSV4_MAX_FH_SIZE 128
#define __deref_inout_ecount_full_opt(size) _SAL1_Source_(__deref_inout_ecount_full_opt, (size), __deref_inout_ecount_full(size) __pre_deref_except_maybenull __post_deref_except_maybenull)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_3(x) 
#define VM_PAGE_QUERY_PAGE_EXTERNAL 0x80
#define PAGER_STAT_MISS 1
#define _LFRAC ((unsigned short)(-1))
#define __INT_LEAST32_WIDTH__ 32
#define _Analysis_mode_(m) 
#define MCL_CURRENT 0x0001
#define __volatile volatile
#define __deref_in_xcount_opt(size) _SAL1_Source_(__deref_in_xcount_opt, (size), __deref_in_xcount(size) _Pre_ __deref __exceptthat __maybenull)
#define KERN_MEMORY_PRESENT 23
#define CPU_SUBTYPE_ARM_XSCALE ((cpu_subtype_t) 8)
#define _QUAD_HIGHWORD 1
#define _Out_writes_bytes_to_(s,c) 
#define PragTyp_JOURNAL_SIZE_LIMIT 21
#define UINT8_C(x) (x)
#define TH_STATE_HALTED 5
#define COLNAME_N 2
#define _Deref_post_count_c_(size) _SAL1_1_Source_(_Deref_post_count_c_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post1_impl_(__count_c_impl(size)) _Post_valid_impl_)
#define _Deref_pre_valid_bytecap_(size) _SAL1_1_Source_(_Deref_pre_valid_bytecap_, (size), _Deref_pre1_impl_(__notnull_impl_notref) _Deref_pre1_impl_(__bytecap_impl(size)) _Pre_valid_impl_)
#define MACH_SEND_INVALID_HEADER 0x10000010
#define SQLITE_MATCH 0
#define PROCESSOR_SET_LOAD_INFO_COUNT ((mach_msg_type_number_t) (sizeof(processor_set_load_info_data_t)/sizeof(natural_t)))
#define _POSIX2_C_BIND 200112L
#define POLL_IN 1
#define WAL_EXCLUSIVE_MODE 1
#define EV_UDATA_SPECIFIC 0x0100
#define etSQLESCAPE2 10
#define etSQLESCAPE3 14
#define STATUS_WORD(rpl,ipl) (((ipl) << 8) | (rpl))
#define _Kernel_IoGetDmaAdapter_ 
#define __UINTMAX_MAX__ 0xffffffffffffffffUL
#define SQLITE_FCNTL_WIN32_SET_HANDLE 23
#define SQLITE_SHM_LOCK 2
#define _Inout_z_cap_(size) _SAL1_1_Source_(_Inout_z_cap_, (size), _Pre_z_cap_(size) _Post_z_)
#define _POSIX_V7_ILP32_OFFBIG __ILP32_OFFBIG
#define MAP_MEM_WTHRU 3
#define USER_ADDR_NULL ((user_addr_t) 0)
#define TIOCGSIZE TIOCGWINSZ
#define _Releases_exclusive_lock_(e) 
#define SQLITE_RANGE 25
#define __drv_at(expr,annotes) _At_(expr, annotes _SAL_nop_impl_)
#define _Scanf_format_string_ 
#define SQLITE_DBSTATUS_STMT_USED 3
#define MACH_SEND_INVALID_NOTIFY 0x1000000b
#define __WATCHOS_5_3 50300
#define EAGAIN 11
#define _Ret_opt_bytecap_x_(size) _SAL1_1_Source_(_Ret_opt_bytecap_x_, (size), _Ret1_impl_(__maybenull_impl_notref) _Ret1_impl_(__bytecap_x_impl(size)))
#define __drv_typeBitset 2
#define VM_PURGABLE_STATE_MAX 3
#define host_get_automountd_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_AUTOMOUNTD_PORT, (port)))
#define TIMESPEC_TO_TIMEVAL(tv,ts) { (tv)->tv_sec = (ts)->tv_sec; (tv)->tv_usec = (ts)->tv_nsec / 1000; }
#define __internal_lock_level_order(a,b) 
#define setDefaultSyncFlag(pBt,safety_level) 
#define __LDBL_DENORM_MIN__ 4.94065645841246544176568792868221372e-324L
#define LIST_NEXT(elm,field) ((elm)->field.le_next)
#define _O_CREAT 0x0100
#define PROC_FLAG_DARWINBG 0x8000
#define O_ALERT 0x20000000
#define __INT16_C(c) c
#define __field_ecount_full_opt(size) _SAL1_Source_(__field_ecount_full_opt, (size), __field_ecount_part_opt(size,size))
#define _CTERMID_H_ 
#define TRACE_IDX_OUTPUTS(A) 
#define __in_opt _SAL1_Source_(__in_opt, (), _In_opt_)
#define SQLITE_FAULTINJECTOR_MALLOC 0
#define MS_INVALIDATE 0x0002
#define _SC_THREADS 96
#define FD_CLR(n,p) __DARWIN_FD_CLR(n, p)
#define STRUNCATE 80
#define timersub(tvp,uvp,vvp) do { (vvp)->tv_sec = (tvp)->tv_sec - (uvp)->tv_sec; (vvp)->tv_usec = (tvp)->tv_usec - (uvp)->tv_usec; if ((vvp)->tv_usec < 0) { (vvp)->tv_sec--; (vvp)->tv_usec += 1000000; } } while (0)
#define PragTyp_LOCKING_MODE 23
#define VOL_CAP_FMT_NO_ROOT_TIMES 0x00000020
#define errno (*_errno())
#define __guarded_by(lock) 
#define _Internal_lock_level_order_(a,b) 
#define _Deref_prepost_cap_x_(size) _SAL1_1_Source_(_Deref_prepost_cap_x_, (size), _Deref_pre_cap_x_(size) _Deref_post_cap_x_(size))
#define _Ret_valid_impl_ 
#define _O_U8TEXT 0x40000
#define host_set_audit_control_port(host,port) (host_set_special_port((host), HOST_AUDIT_CONTROL_PORT, (port)))
#define NOTE_TRACKERR 0x00000002
#define __deref_nonvolatile _SAL_L_Source_(__deref_nonvolatile, (), __deref __nonvolatile)
#define DbMaskZero(M) (M)=0
#define SF_DATALESS 0x40000000
#define _Pre_opt_cap_c_(size) _SAL1_1_Source_(_Pre_opt_cap_c_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__cap_c_impl(size)))
#define NC_UAggInfo 0x0100
#define CLOCK_ALARM_MINRES 4
#define A_GETCTLMODE 41
#define TASK_EXC_GUARD_VM_FATAL 0x08
#define __WATCHOS_8_0 80000
#define __PTHREAD_COND_SIZE__ 40
#define CPUSUBFAMILY_ARM_HC_HD 5
#define VM_PURGABLE_GET_STATE ((vm_purgable_t) 1)
#define _Outptr_ 
#define F_LOG2PHYS_EXT 65
#define PragFlg_NoColumns1 0x04
#define _OS_COMMON_H_ 
#define SQLITE_FCNTL_VFSNAME 12
#define F_GETNOSIGPIPE 74
#define MNT_QUARANTINE 0x00000400
#define MACH_PORT_QLIMIT_ZERO (0)
#define TK_UPLUS 169
#define BC_STRING_MAX 1000
#define SQLITE_FCNTL_VFS_POINTER 27
#define __deref_opt_out_bcount(size) _SAL1_Source_(__deref_opt_out_bcount, (size), __deref_out_bcount(size) __pre_except_maybenull)
#define TARGET_CPU_X86_64 0
#define CLD_KILLED 2
#define OP_Return 66
#define _Deref_prepost_opt_valid_cap_(size) _SAL1_1_Source_(_Deref_prepost_opt_valid_cap_, (size), _Deref_pre_opt_valid_cap_(size) _Deref_post_opt_valid_cap_(size))
#define SQLITE_TRACE_ROW 0x04
#define host_get_fairplayd_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_FAIRPLAYD_PORT, (port)))
#define __exceptthat 
#define USER_STREAM_MAX 19
#define _Outref_result_buffer_to_(s,c) 
#define __unreachable_ok_push _Pragma("GCC diagnostic push") _Pragma("GCC diagnostic ignored \"-Wunreachable-code\"")
#define __INT8_C(c) c
#define MACH_PORT_TYPE_LABELH MACH_PORT_TYPE(MACH_PORT_RIGHT_LABELH)
#define DBFLAG_PreferBuiltin 0x0002
#define SQLITE_DEPRECATED 
#define VM_PURGABLE_STATE_MIN 0
#define SQLITE_MAX_PMASZ (1<<29)
#define KERN_THREADNAME 71
#define __requires_exclusive_lock_held(lock) 
#define _SAL1_2_Source_(Name,args,annotes) _SA_annotes3(SAL_name, #Name, "", "1.2") _Group_(annotes _SAL_nop_impl_)
#define SQLITE_FUNC_NEEDCOLL 0x0020
#define VM_REGION_TOP_INFO_COUNT ((mach_msg_type_number_t) (sizeof(vm_region_top_info_data_t) / sizeof(natural_t)))
#define A_GETCOND 37
#define _OVERFLOW 3
#define EXC_MASK_CORPSE_NOTIFY (1 << EXC_CORPSE_NOTIFY)
#define BMS ((int)(sizeof(Bitmask)*8))
#define MALLOC_ZONE_FN_PTR(fn) fn
#define btoc(x) (((unsigned)(x)+(NBPG-1))>>PGSHIFT)
#define SQLITE_UTF16NATIVE SQLITE_UTF16LE
#define CODEC1(P,D,N,X,E) 
#define _LMASK ((unsigned short)0x7fff)
#define EP_Reduced 0x002000
#define BTALLOC_LE 2
#define STAT_GET_NDLT 4
#define VM_MEMORY_CM_RPC 93
#define TK_AFTER 29
#define __GCC_ATOMIC_LLONG_LOCK_FREE 2
#define __drv_WDM 
#define DBFLAG_SchemaChange 0x0001
#define CPU_SUBTYPE_VAX_ALL ((cpu_subtype_t) 0)
#define VOL_CAP_INT_READDIRATTR 0x00000008
#define _On_failure_impl_(annos) 
#define PAGER_JOURNALMODE_DELETE 0
#define VM_PAGE_QUERY_PAGE_CS_NX 0x400
#define XN_EXPR (-2)
#define __POSIX_C_DEPRECATED(ver) ___POSIX_C_DEPRECATED_STARTING_ ##ver
#define _ERRCODE_DEFINED 
#define __MAC_10_15 101500
#define _MACH_MACHINE_PROCESSOR_INFO_H_ 
#define TARGET_CPU_ARM 0
#define TIOCGETD _IOR('t', 26, int)
#define SQLITE_KEEPNULL 0x08
#define __MAC_10_16 101600
#define EXCEPTION_STATE 2
#define PragTyp_CASE_SENSITIVE_LIKE 6
#define etPOINTER 13
#define __out_data_source(src_sym) _SAL_L_Source_(__out_data_source, (src_sym), _Post_ __inner_data_source(#src_sym))
#define PENDING_BYTE_PAGE(pBt) PAGER_MJ_PGNO(pBt)
#define columnType(A,B,C,D,E) columnTypeImpl(A,B)
#define VM_MAP_NULL ((vm_map_t) 0)
#define VOL_CAP_INT_ALLOCATE 0x00000040
#define __inout_bcount(size) _SAL1_Source_(__inout_bcount, (size), _Inout_updates_bytes_(size))
#define __INT_LEAST64_WIDTH__ 64
#define SQLITE_SkipScan 0x4000
#define __WCHAR_MAX__ 0x7fffffff
#define INT_LEAST16_MAX INT16_MAX
#define _In_reads_or_z_opt_(size) _SAL2_Source_(_In_reads_or_z_opt_, (size), _In_opt_ _When_(_String_length_(_Curr_) < (size), _Pre_z_) _When_(_String_length_(_Curr_) >= (size), _Pre1_impl_(__count_impl(size))))
#define _CS_POSIX_V6_ILP32_OFF32_LIBS 4
#define PTRMAP_PTROFFSET(pgptrmap,pgno) (5*(pgno-pgptrmap-1))
#define _I8_MAX 127i8
#define EP_Distinct 0x000002
#define _GNU_SOURCE 
#define _POSIX_SAVED_IDS 200112L
#define SQLITE_CONFIG_MEMDB_MAXSIZE 29
#define CTLFLAG_EXPERIMENT 0x00100000
#define _REPORT_ERRMODE 3
#define CPU_SUBTYPE_ANY ((cpu_subtype_t) -1)
#define __P(protos) protos
#define TK_WINDOW 159
#define _SC_IOV_MAX 56
#define TARGET_OS_RTKIT 0
#define _RMFILE_OK (1<<14)
#define KERN_PROCDELAYTERM 53
#define __deref_opt_inout_ecount_nz(size) _SAL1_Source_(__deref_opt_inout_ecount_nz, (size), __deref_opt_inout_ecount(size))
#define NOCRED ((kauth_cred_t )0)
#define SQLITE_LOCK_RESERVED 2
#define P_DIRTY_MARKED 0x00000080
#define __DARWIN_SUF_UNIX03 
#define __IPHONE_9_0 90000
#define __IPHONE_9_1 90100
#define __IPHONE_9_3 90300
#define SPILLFLAG_NOSYNC 0x04
#define OID_AUTO_START 100
#define CC_ILLEGAL 27
#define pcache1EnterMutex(X) assert((X)->mutex==0)
#define SM_SHARED_ALIASED 7
#define O_BINARY 0
#define KERN_KDREMOVE 7
#define __out_bcount_z(size) _SAL1_Source_(__out_bcount_z, (size), __bcount(size) __post __valid __refparam __post __nullterminated)
#define EXC_MACF_MIN 0x20000
#define PAGER_LOCKINGMODE_QUERY -1
#define TK_BEGIN 5
#define __deref_inout_bcount_opt(size) _SAL1_Source_(__deref_inout_bcount_opt, (size), __deref_inout_bcount(size) __pre_deref_except_maybenull __post_deref_except_maybenull)
#define SQLITE_PRINT_BUF_SIZE 70
#define HW_MODEL 2
#define VM_LOADAVG 2
#define S_ISCHR(m) (((m) & S_IFMT) == S_IFCHR)
#define _Inout_opt_bytecount_(size) _SAL1_1_Source_(_Inout_opt_bytecount_, (size), _Prepost_opt_bytecount_(size))
#define FTS5_TOKENIZE_QUERY 0x0001
#define _CS_POSIX_V6_ILP32_OFFBIG_LIBS 7
#define VM_PAGE_QUERY_PAGE_SPECULATIVE 0x40
#define _CONST_RETURN 
#define HOST_PRIV_PORT 2
#define _PC_VDISABLE 9
#define O_NOCTTY 0x00020000
#define SET_FULLSYNC(x,y) 
#define FIONBIO _IOW('f', 126, int)
#define _Deref_post_count_x_(size) _SAL1_1_Source_(_Deref_post_count_x_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post1_impl_(__count_x_impl(size)) _Post_valid_impl_)
#define AT_FDONLY 0x0400
#define __ARM_SIZEOF_WCHAR_T 4
#define _Deref_post_opt_bytecount_c_(size) _SAL1_1_Source_(_Deref_post_opt_bytecount_c_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post1_impl_(__bytecount_c_impl(size)) _Post_valid_impl_)
#define __ATOMIC_ACQUIRE 2
#define __inout_z _SAL1_Source_(__inout_z, (), _Inout_z_)
#define _Out_opt_capcount_(capcount) _SAL1_1_Source_(_Out_opt_capcount_, (capcount), _Pre_opt_cap_(capcount) _Post_valid_impl_ _Post_count_(capcount))
#define TIOCPTYGNAME _IOC(IOC_OUT, 't', 83, 128)
#define HOST_VM_INFO64_LATEST_COUNT HOST_VM_INFO64_COUNT
#define MACHINE_THREAD_STATE_COUNT ARM_UNIFIED_THREAD_STATE_COUNT
#define __deref_opt_inout_z_opt _SAL1_Source_(__deref_opt_inout_z_opt, (), __deref_opt_inout_opt __pre __deref __nullterminated __post __deref __nullterminated)
#define SEARCHFS_MAX_SEARCHPARMS 4096
#define __drv_ret(annotes) _At_(return,annotes _SAL_nop_impl_)
#define __FLT_MIN__ 1.17549435082228750796873653722224568e-38F
#define __GCC_IEC_559_COMPLEX 2
#define task_set_host_port(task,port) (task_set_special_port((task), TASK_HOST_PORT, (port)))
#define MACH_PORT_TYPE_PORT_RIGHTS (MACH_PORT_TYPE_SEND_RIGHTS|MACH_PORT_TYPE_RECEIVE)
#define SQLITE_THREADSAFE 1
#define TF_StatsUsed 0x0100
#define RTLD_NOW 0x2
#define MPO_DENAP_RECEIVER 0x40
#define AUDITDEV_FILENAME "audit"
#define _SC_TIMEOUTS 95
#define MACH_PORT_STATUS_FLAG_REVIVE 0x10
#define _Ret_opt_z_count_(size) _SAL1_1_Source_(_Ret_opt_z_count_, (size), _Ret1_impl_(__maybenull_impl_notref) _Ret2_impl_(__zterm_impl,__count_impl(size)) _Ret_valid_impl_)
#define FCNTL_FS_SPECIFIC_BASE 0x00010000
#define HasRowid(X) (((X)->tabFlags & TF_WithoutRowid)==0)
#define INT_LEAST16_MIN INT16_MIN
#define HOST_CALENDAR_CHANGED_REPLYID 950
#define _LBIAS 0x3fe
#define _I8_MIN (-127i8 - 1)
#define TK_JOIN 139
#define _Readable_elements_(s) 
#define SIOCSDRVSPEC _IOW('i', 123, struct ifdrv)
#define PROCESSOR_PM_REGS_INFO 0x10000001
#define __deref_out_nz_opt _SAL1_Source_(__deref_out_nz_opt, (), __deref_out_opt)
#define TASK_BASIC_INFO_32 4
#define CPU_SUBTYPE_MC88000_ALL ((cpu_subtype_t) 0)
#define VM_REGION_EXTENDED_INFO_COUNT ((mach_msg_type_number_t) (sizeof (vm_region_extended_info_data_t) / sizeof (natural_t)))
#define __INTMAX_C(c) c ## L
#define SIOCGIFKPI _IOWR('i', 135, struct ifreq)
#define _Analysis_assume_lock_not_held_(e) 
#define PTHREAD_SCOPE_PROCESS 2
#define PTHREAD_CANCELED ((void *) 1)
#define O_ACCMODE 0x0003
#define TIME_RELATIVE 0x01
#define P_CLASSIC P_TRANSLATED
#define TRUE 1
#define SIG_HOLD (void (*)(int))5
#define TIOCPKT_IOCTL 0x40
#define FIOGETOWN _IOR('f', 123, int)
#define KERN_NOT_SUPPORTED 46
#define WAL_WRITE_LOCK 0
#define NAN ((float)(INFINITY * 0.0F))
#define SQLITE_STATIC ((sqlite3_destructor_type)0)
#define SQLITE_STMTSTATUS_FULLSCAN_STEP 1
#define SRCHFS_MATCHDIRS 0x00000004
#define __out_range(lb,ub) _SAL_L_Source_(__out_range, (lb,ub), _Post_ __inner_range(lb,ub))
#define __DARWIN_C_LEVEL __DARWIN_C_FULL
#define BTS_NO_WAL 0x0020
#define __struct_xcount(size) _SAL1_Source_(__struct_xcount, (size), __inexpressible_writableTo(size))
#define host_get_launchctl_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_LAUNCHCTL_PORT, (port)))
#define _POSIX_TYPED_MEMORY_OBJECTS (-1)
#define CPUFAMILY_INTEL_WESTMERE 0x573b5eec
#define _Pre_opt_cap_x_(size) _SAL1_1_Source_(_Pre_opt_cap_x_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__cap_x_impl(size)))
#define MNT_VISFLAGMASK (MNT_RDONLY | MNT_SYNCHRONOUS | MNT_NOEXEC | MNT_NOSUID | MNT_NODEV | MNT_UNION | MNT_ASYNC | MNT_EXPORTED | MNT_QUARANTINE | MNT_LOCAL | MNT_QUOTA | MNT_REMOVABLE | MNT_ROOTFS | MNT_DOVOLFS | MNT_DONTBROWSE | MNT_IGNORE_OWNERSHIP | MNT_AUTOMOUNTED | MNT_JOURNALED | MNT_NOUSERXATTR | MNT_DEFWRITE | MNT_MULTILABEL | MNT_NOATIME | MNT_STRICTATIME | MNT_SNAPSHOT | MNT_CPROTECT)
#define N_OR_COST 3
#define USER_COLL_WEIGHTS_MAX 6
#define LEDGER_NULL ((ledger_t) 0)
#define THREAD_STATE_FLAVOR_LIST_10_9 129
#define INT16_C(x) (x)
#define _CRT_NONSTDC_DEPRECATE(_NewName) 
#define __WINT_MAX__ 0x7fffffff
#define __deref_out_bcount_part(size,length) _SAL1_Source_(__deref_out_bcount_part, (size,length), _Outptr_result_bytebuffer_to_(size,length))
#define _SC_2_C_DEV 19
#define SRT_Exists 3
#define _SC_BARRIERS 66
#define __inner_data_source(src_raw) 
#define BTS_PENDING 0x0080
#define __assume_validated(p) __inner_assume_validated(p)
#define CPU_SUBTYPE_ARM_V5TEJ ((cpu_subtype_t) 7)
#define NO_COMPETING_THREAD_END __pragma(warning(pop))
#define NOTE_FFAND 0x40000000
#define SM_PRIVATE 2
#define PROCESSOR_NULL ((processor_t) 0)
#define _CDEFS_H_ 
#define _Kernel_float_saved_ 
#define REQUESTED_TRAILER_SIZE(y) REQUESTED_TRAILER_SIZE_NATIVE(y)
#define HOST_TELEMETRY_PORT (13 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define S_TYPEISSEM(buf) (0)
#define EILSEQ 42
#define __deallocate_opt(kind) _SAL_L_Source_(__deallocate_opt, (kind), _Pre_ __maybenull __post_invalid)
#define SIOCSIFDSTADDR _IOW('i', 14, struct ifreq)
#define MATTR_VAL_ICACHE_FLUSH 8
#define CIRCLEQ_EMPTY(head) ((head)->cqh_first == (void *)(head))
#define SELECTTRACE_ENABLED 0
#define SQLITE_DBCONFIG_ENABLE_LOAD_EXTENSION 1005
#define __SIZE_MAX__ 0xffffffffffffffffUL
#define __drv_acquiresExclusiveResourceGlobal(kind,param) 
#define __exported_push _Pragma("GCC visibility push(default)")
#define _MACH_VM_TYPES_H_ 
#define __user_code 
#define __deref_inout_xcount_full(size) _SAL1_Source_(__deref_inout_xcount_full, (size), __deref_inout_xcount_part(size,size))
#define SQLITE_FUNC_EPHEM 0x0010
#define afpfsByteRangeLock2FSCTL _IOWR('z', 23, struct ByteRangeLockPB2)
#define FILEHANDLEID(fd) (SQLITE_PTR_TO_INT(fd))
#define KERN_AFFINITY 43
#define MACH_SEND_INVALID_RIGHT 0x1000000a
#define SIOCGIFWAKEFLAGS _IOWR('i', 136, struct ifreq)
#define fileChunkSize(nChunkSize) (sizeof(FileChunk) + ((nChunkSize)-8))
#define SQLITE_STATUS_SCRATCH_SIZE 8
#define __deref_inout_xcount_full_opt(size) _SAL1_Source_(__deref_inout_xcount_full_opt, (size), __deref_inout_xcount_full(size) _Pre_ __deref __exceptthat __maybenull _Post_ __deref __exceptthat __maybenull)
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define O_EVTONLY 0x00008000
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8 1
#define EHOSTUNREACH 110
#define __deref_opt_inout_ecount_full(size) _SAL1_Source_(__deref_opt_inout_ecount_full, (size), __deref_inout_ecount_full(size) __pre_except_maybenull)
#define SORTER_MAX_MERGE_COUNT 16
#define _TLOSS 5
#define S_TYPEISSHM(buf) (0)
#define _SC_OPEN_MAX 5
#define _Post_notnull_ _SAL2_Source_(_Post_notnull_, (), _Post1_impl_(__notnull_impl))
#define SQLITE_ACCESS_READ 2
#define _Analysis_assume_nullterminated_(s) 
#define __GCC_IEC_559 2
#define ATTR_CMNEXT_REALDEVID 0x00000040
#define CPU_SUBTYPE_386 CPU_SUBTYPE_INTEL(3, 0)
#define SIOCSIFMEDIA _IOWR('i', 55, struct ifreq)
#define _In_opt_ptrdiff_count_(size) _SAL1_1_Source_(_In_opt_ptrdiff_count_, (size), _Pre_opt_ptrdiff_count_(size) _Deref_pre_readonly_)
#define _Deref_pre_z_ _SAL1_1_Source_(_Deref_pre_z_, (), _Deref_pre1_impl_(__notnull_impl_notref) _Deref_pre1_impl_(__zterm_impl) _Pre_valid_impl_)
#define _IOFBF 0x0000
#define TK_RESTRICT 74
#define SQLITE_MAGIC_CLOSED 0x9f3c2d33
#define arm_thread_state64_set_lr_fptr(ts,fptr) __darwin_arm_thread_state64_set_lr_fptr(ts, fptr)
#define _SC_NPROCESSORS_CONF 57
#define MACH_MSG_IPC_KERNEL 0x00000800
#define P_PHYSIO 0
#define _FE_INVALID 0x01
#define P_PPWAIT 0x00000010
#define SQLITE_FUNC_ENCMASK 0x0003
#define host_set_kextd_port(host,port) (host_set_special_port((host), HOST_KEXTD_PORT, (port)))
#define VM_BEHAVIOR_REUSE ((vm_behavior_t) 9)
#define _SC_XOPEN_STREAMS 114
#define dtoc(x) ((x)>>(PGSHIFT-DEV_BSHIFT))
#define VM_PAGE_QUERY_PAGE_FICTITIOUS 0x2
#define BTREE_MEMORY 2
#define F_ADDFILESIGS_RETURN 97
#define UNIX_SHM_BASE ((22+SQLITE_SHM_NLOCK)*4)
#define OP_MaxPgcnt 167
#define _Deref_prepost_opt_valid_cap_x_(size) _SAL1_1_Source_(_Deref_prepost_opt_valid_cap_x_, (size), _Deref_pre_opt_valid_cap_x_(size) _Deref_post_opt_valid_cap_x_(size))
#define INT_464269060799999 ((((i64)0x1a640)<<32)|0x1072fdff)
#define HOST_LAST_SPECIAL_KERNEL_PORT HOST_IO_MASTER_PORT
#define KERN_NISDOMAINNAME 22
#define SQLITE_FCNTL_DB_UNCHANGED 0xca093fa0
#define SIOCSETVLAN SIOCSIFVLAN
#define host_set_sysdiagnose_port(host,port) (host_set_special_port((host), HOST_SYSDIAGNOSE_PORT, (port)))
#define _Post_equal_to_(e) 
#define LINK_MAX 32767
#define PTHREAD_MUTEX_DEFAULT PTHREAD_MUTEX_NORMAL
#define KERN_USRSTACK KERN_USRSTACK64
#define PROXY_CONCHVERSION 2
#define KERN_DEFAULT_SET 31
#define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES 0
#define _SC_TRACE_USER_EVENT_MAX 130
#define OP_MakeRecord 92
#define SQLITE_ERROR 1
#define SM_TRUESHARED 5
#define PragTyp_COLLATION_LIST 7
#define OS_NOTHROW __attribute__((__nothrow__))
#define MAC_OS_X_VERSION_10_14_6 101406
#define TH_STATE_UNINTERRUPTIBLE 4
#define CPUFAMILY_INTEL_SANDYBRIDGE 0x5490b78c
#define VM_PAGE_QUERY_PAGE_CS_VALIDATED 0x100
#define F_ALLOCATEALL 0x00000004
#define __field_xcount_full_opt(size) _SAL1_Source_(__field_xcount_full_opt, (size), __field_xcount_part_opt(size,size))
#define SQLITE_MAGIC_ERROR 0xb5357930
#define CAST_USER_ADDR_T(a_ptr) ((user_addr_t)((uintptr_t)(a_ptr)))
#define ATTR_FORK_TOTALSIZE 0x00000001
#define OPFLAG_EPHEM 0x01
#define POLL_MSG 3
#define MAP_MEM_COPYBACK 1
#define _CRT_INTERNAL_LOCAL_PRINTF_OPTIONS (*__local_stdio_printf_options())
#define MACH_MSG_OPTION_NONE 0x00000000
#define _Pre_cap_c_one_ _SAL1_1_Source_(_Pre_cap_c_one_, (), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__cap_c_one_notref_impl))
#define _Out_writes_opt_(s) 
#define __FINITE_MATH_ONLY__ 0
#define MACH_SEND_INTERRUPT 0x00000040
#define TIME_MICROS_MAX (1000000)
#define isinf(_Val) (fpclassify(_Val) == FP_INFINITE)
#define SQLITE_FCNTL_ZIPVFS 25
#define OS_CLOSED_OPTIONS(_name,_type,...) __OS_ENUM_C_FALLBACK(_name, _type, ## __VA_ARGS__) __OS_ENUM_ATTR_CLOSED __OS_OPTIONS_ATTR
#define JOURNAL_HDR_SZ(pPager) (pPager->sectorSize)
#define OP_Not 19
#define __drv_maxIRQL(irql) _SAL1_1_Source_(__drv_maxIRQL, (irql), _IRQL_requires_max_(irql))
#define TK_DROP 129
#define SIGALRM 14
#define _Deref_post_opt_bytecount_x_(size) _SAL1_1_Source_(_Deref_post_opt_bytecount_x_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post1_impl_(__bytecount_x_impl(size)) _Post_valid_impl_)
#define EBADF 9
#define _SC_XBS5_ILP32_OFFBIG 123
#define VM_PURGABLE_DEBUG_EMPTY (0x1 << VM_PURGABLE_DEBUG_SHIFT)
#define PragTyp_OPTIMIZE 27
#define SQLITE_WARNING 28
#define __IPHONE_13_7 130700
#define _STRUCT_MCONTEXT _STRUCT_MCONTEXT64
#define MACH_VOUCHER_ATTR_KEY_USER_DATA ((mach_voucher_attr_key_t)7)
#define _SC_SHARED_MEMORY_OBJECTS 39
#define ATTR_VOL_NAME 0x00002000
#define _DENORM (-2)
#define _Pre_bytecap_(size) _SAL1_1_Source_(_Pre_bytecap_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__bytecap_impl(size)))
#define _SYS_LOCK_H_ 
#define SimulateIOErrorBenign(X) 
#define _Always_impl_(annos) 
#define SIGFPE 8
#define KERN_OPERATION_TIMED_OUT 49
#define _LARGE_FILE 1
#define _Deref_in_range_impl_(min,max) 
#define _VCRUNTIME_H 
#define TASK_CATEGORY_POLICY 1
#define KERN_KDEBUG 24
#define MNAMELEN MAXPATHLEN
#define _IRQL_requires_min_(i) 
#define __deref_inout_ecount_z_opt(size) _SAL1_Source_(__deref_inout_ecount_z_opt, (size), __deref_inout_ecount_opt(size) __pre __deref __nullterminated __post __deref __nullterminated)
#define __kernel_data_semantics 
#define VFS_CTL_NOLOCKS 0x00010006
#define THREAD_FLAVOR_MAX THREAD_FLAVOR_INSPECT
#define UNIXFILE_EXCL 0x01
#define F_CHKCLEAN 41
#define __inner_possibly_notnullterminated 
#define LIST_CHECK_PREV(elm,field) 
#define SQLITE_PRINTF_INTERNAL 0x01
#define KERN_MISSING_KC 54
#define _INC_STDLIB 
#define _Ret_opt_z_cap_(size) _SAL1_1_Source_(_Ret_opt_z_cap_, (size), _Ret1_impl_(__maybenull_impl_notref) _Ret2_impl_(__zterm_impl,__cap_impl(size)) _Ret_valid_impl_)
#define __MAC_12_0 120000
#define _CRT_OBSOLETE(_NewItem) _CRT_DEPRECATE_TEXT("This function or variable has been superceded by newer library or operating system functionality. Consider using " #_NewItem " instead. See online help for details.")
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_4(x) 
#define CPU_SUBTYPE_PENTIUM_3_M CPU_SUBTYPE_INTEL(8, 1)
#define OP_HaltIfNull 68
#define _Literal_impl_ 
#define PROCESSOR_INFO_MAX (1024)
#define MAP_MEM_PURGABLE 0x040000
#define SQLITE_ACCESS_EXISTS 0
#define _CS_DARWIN_USER_DIR 65536
#define KERN_SAVED_IDS 20
#define ACCESSX_MAX_DESCRIPTORS 100
#define _LSIGN ((unsigned short)0x8000)
#define SIOCAIFADDR _IOW('i', 26, struct ifaliasreq)
#define _Pre_count_(size) _SAL1_1_Source_(_Pre_count_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__count_impl(size)) _Pre_valid_impl_)
#define __deref_in_range(lb,ub) _SAL_L_Source_(__deref_in_range, (lb,ub), _Pre_ __deref __inner_range(lb,ub))
#define __restrict restrict
#define PAGER_OMIT_JOURNAL 0x0001
#define _SC_BC_SCALE_MAX 11
#define _Field_size_bytes_full_opt_(s) 
#define FTS5_TOKENIZE_PREFIX 0x0002
#define CPU_STATE_NICE 3
#define __SHRT_MAX__ 0x7fff
#define CPU_SUBTYPE_MC68030_ONLY ((cpu_subtype_t) 3)
#define SQLITE_FCNTL_GET_LOCKPROXYFILE 2
#define __DECLARE_CPP_OVERLOAD_INLINE_FUNC_0_2_EX(_ReturnType,_ReturnPolicy,_FuncName,_SecureFuncName,_SecureDstType,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2) _CRT_INSECURE_DEPRECATE(_SecureFuncName) __inline _ReturnType __CRTDECL _FuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2)
#define SQLITE_MAX_DEFAULT_PAGE_SIZE 8192
#define _MAX_FNAME 256
#define ILL_ILLOPC 1
#define ILL_ILLOPN 4
#define _In_defensive_(a) 
#define _Writes_bytes_and_advances_ptr_(size) _SAL2_Source_(_Writes_bytes_and_advances_ptr, (size), _At_((void*)_Curr_, _Inout_) _At_(_Curr_, _Pre_writable_byte_size_(size) _Post_writable_byte_size_(size) _Post_satisfies_(((char*)_Curr_) - ((char*)_Old_(_Curr_)) == _Old_(size) - size)) _At_(_Old_(_Curr_), _Post_readable_byte_size_(_Old_(size) - size)))
#define VdbeCoverageNeverNullIf(v,x) 
#define P5_ConstraintNotNull 1
#define EXC_RPC_ALERT 9
#define __in_bcount_opt(size) _SAL1_Source_(__in_bcount_opt, (size), _In_reads_bytes_opt_(size))
#define _pgmptr (*__p__pgmptr ())
#define __LDBL_IS_IEC_60559__ 2
#define P_CONTROLT 0x00000002
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_1(x) 
#define _Analysis_assume_section_locked_(name) 
#define OP_MemMax 151
#define __IPHONE_6_1 60100
#define SQLITE_CREATE_TEMP_INDEX 3
#define SQLITE_TESTCTRL_SORTER_MMAP 24
#define MACH_PORT_LIMITS_INFO_COUNT ((natural_t) (sizeof(mach_port_limits_t)/sizeof(natural_t)))
#define VOL_CAPABILITIES_INTERFACES 1
#define EP_NoReduce 0x020000
#define NOGROUP 65535
#define SAVEPOINT_RELEASE 1
#define __deref_inout_bcount_z_opt(size) _SAL1_Source_(__deref_inout_bcount_z_opt, (size), __deref_inout_bcount_opt(size) __pre __deref __nullterminated __post __deref __nullterminated)
#define MACH_PORT_GUARD_INFO_COUNT ((natural_t) (sizeof(mach_port_guard_info_t)/sizeof(natural_t)))
#define MACH_VOUCHER_ATTR_KEY_PTHPRIORITY ((mach_voucher_attr_key_t)4)
#define __alloc_size(...) __attribute__((alloc_size(__VA_ARGS__)))
#define VdbeCoverageEqNe(v) 
#define SRT_Except 2
#define TARGET_CPU_SPARC 0
#define TASK_POWER_INFO_V2 26
#define STAILQ_REMOVE_AFTER(head,elm,field) do { if ((STAILQ_NEXT(elm, field) = STAILQ_NEXT(STAILQ_NEXT(elm, field), field)) == NULL) (head)->stqh_last = &STAILQ_NEXT((elm), field); } while (0)
#define SQLITE_AFF_NUMERIC 0x43
#define _SC_V6_LP64_OFF64 105
#define OS_VXWORKS 0
#define LIST_FOREACH(var,head,field) for ((var) = LIST_FIRST((head)); (var); (var) = LIST_NEXT((var), field))
#define FPE_FLTRES 4
#define __APPLE_CC__ 1
#define EINPROGRESS 112
#define PragTyp_HEADER_VALUE 0
#define EP_Quoted 0x4000000
#define _Inout_z_ 
#define _PC_ASYNC_IO 17
#define INT_FAST8_MIN INT8_MIN
#define OP_IfNoHope 26
#define SQLITE_IOERR_SHMSIZE (SQLITE_IOERR | (19<<8))
#define NC_VarSelect 0x0040
#define EVFILT_THREADMARKER EVFILT_SYSCOUNT
#define ATTR_CMN_FLAGS 0x00040000
#define P_EXEC 0x00004000
#define SQLITE_CDECL 
#define __SAL_H_VERSION 180000000
#define ARM_AMX_STATE_V1_COUNT ((mach_msg_type_number_t) (sizeof(arm_amx_state_v1_t)/sizeof(unsigned int)))
#define _SYS_IOCCOM_H_ 
#define RTLD_SELF ((void *) -3)
#define MACH_SEND_IMPORTANCE 0x00080000
#define _Guarded_by_(e) 
#define __DARWIN_OSSwapInt16(x) ((__uint16_t)(__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt16(x) : _OSSwapInt16(x)))
#define _MACH_HOST_NOTIFY_H_ 
#define MAC_OS_VERSION_12_0 120000
#define OP_Or 43
#define __post_bcount(size) _SAL1_Source_(__post_bcount, (size), _Post_ __byte_writableTo(size))
#define MEMORY_OBJECT_RETURN_NONE 0
#define _POSIX_READER_WRITER_LOCKS 200112L
#define __deref_opt_inout _SAL1_Source_(__deref_opt_inout, (), _Inout_opt_)
#define BITVEC_NELEM (BITVEC_USIZE/sizeof(BITVEC_TELEM))
#define _MACH_TASK_INFO_H_ 
#define __AARCH64_CMODEL_SMALL__ 1
#define SQLITE_SimplifyJoin 0x2000
#define __deref_inout_nz _SAL1_Source_(__deref_inout_nz, (), __deref_inout)
#define OP_ElseNotEq 58
#define __deref_out_bcount_full_opt(size) _SAL1_Source_(__deref_out_bcount_full_opt, (size), __deref_out_bcount_full(size) __post_deref_except_maybenull)
#define PAGER_JOURNALMODE_PERSIST 1
#define IPC_VOUCHER_NULL ((ipc_voucher_t) 0)
#define __printflike(fmtarg,firstvararg) __attribute__((__format__ (__printf__, fmtarg, firstvararg)))
#define __TVOS_11_0 110000
#define __TVOS_11_1 110100
#define __TVOS_11_2 110200
#define __TVOS_11_3 110300
#define __TVOS_11_4 110400
#define HOST_VM_INFO64_REV1_COUNT HOST_VM_INFO64_LATEST_COUNT
#define OP_Program 45
#define __WINT_MIN__ (-__WINT_MAX__ - 1)
#define ONLY_IF_REALLOC_STRESS(X) (0)
#define _In_opt_z_bytecount_c_(size) _SAL1_1_Source_(_In_opt_z_bytecount_c_, (size), _Pre_opt_z_ _Pre_opt_bytecount_c_(size) _Deref_pre_readonly_)
#define F_ADDFILESIGS 61
#define NO_LOCK 0
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_2(x) 
#define _SC_SHELL 78
#define __TVOS_UNAVAILABLE 
#define CPUFAMILY_ARM_TYPHOON 0x2c91a47e
#define MACH_MSG_TYPE_DISPOSE_RECEIVE 24
#define TK_BLOB 149
#define PragTyp_CACHE_SIZE 4
#define NCARGS ARG_MAX
#define tkTEMP 5
#define _SYS_UNISTD_H_ 
#define _CRT_SECURE_NO_WARNINGS 
#define _Out_opt_bytecap_post_bytecount_(cap,count) _SAL1_1_Source_(_Out_opt_bytecap_post_bytecount_, (cap,count), _Pre_opt_bytecap_(cap) _Post_valid_impl_ _Post_bytecount_(count))
#define TK_INTERSECT 133
#define KERN_KDSETRTCDEC 15
#define MACH_MSG_FILTER_POLICY_ALLOW (mach_msg_filter_id)0
#define OE_Ignore 4
#define __AVAILABILITY_INTERNAL_WEAK_IMPORT __attribute__((weak_import))
#define _SYS_PARAM_H_ 
#define __DARWIN_NBBY 8
#define __FLT128_MANT_DIG__ 113
#define STAILQ_HEAD(name,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct name { struct type *stqh_first; struct type **stqh_last; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define INT_LEAST64_MAX INT64_MAX
#define _Inout_updates_bytes_to_opt_(s,c) 
#define IOC_INOUT (IOC_IN|IOC_OUT)
#define _INC_TIME 
#define __WCHAR_MIN__ (-__WCHAR_MAX__ - 1)
#define SRT_Union 1
#define KERN_LOCK_SET_DESTROYED 38
#define AUDIT_TRIGGER_CLOSE_AND_DIE 4
#define HW_DISKNAMES 8
#define __field_xcount_full(size) _SAL1_Source_(__field_xcount_full, (size), __field_xcount_part(size,size))
#define SQLITE_FUNC_SLOCHNG 0x2000
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define SQLITE_DBSTATUS_CACHE_SPILL 12
#define PAGER_READER 1
#define DFUNCTION(zName,nArg,iArg,bNC,xFunc) {nArg, SQLITE_FUNC_SLOCHNG|SQLITE_UTF8, 0, 0, xFunc, 0, 0, 0, #zName, {0} }
#define PragTyp_PAGE_COUNT 24
#define SQLITE_WriteSchema 0x00000001
#define _Field_size_part_opt_(s,c) 
#define P_LP64 0x00000004
#define SRCHFS_SKIPLINKS 0x00000010
#define MACH_VOUCHER_ATTR_KEY_IMPORTANCE ((mach_voucher_attr_key_t)2)
#define HTONL(x) (x) = htonl((__uint32_t)x)
#define SF_IMMUTABLE 0x00020000
#define OP_RowData 127
#define HTONS(x) (x) = htons((__uint16_t)x)
#define _Inout_opt_z_ 
#define _Inout_updates_to_(s,c) 
#define SQLITE_DROP_INDEX 10
#define FP_NORMAL _FINITE
#define PGSHIFT 12
#define VOL_CAP_INT_SEARCHFS 0x00000001
#define AU_FS_MINFREE 20
#define VM_MEMORY_QUICKLOOK_THUMBNAILS 97
#define SORTFLAG_UseSorter 0x01
#define _Outref_result_bytebuffer_all_maybenull_(s) 
#define _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS 5
#define _SC_2_C_BIND 18
#define IN_RENAME_OBJECT (pParse->eParseMode>=PARSE_MODE_RENAME_COLUMN)
#define __out_ecount_full_opt(size) _SAL1_Source_(__out_ecount_full_opt, (size), __out_ecount_full(size) __pre_except_maybenull)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_4(x) 
#define _RPERM_OK (1<<19)
#define __MAC_10_8 1080
#define VM_MEMORY_CM_CRABS 96
#define NSEC_PER_SEC 1000000000ull
#define __deref_out_ecount_z_opt(size) _SAL1_Source_(__deref_out_ecount_z_opt, (size), __deref_out_ecount_opt(size) __post __deref __nullterminated)
#define NTOHL(x) (x) = ntohl((__uint32_t)x)
#define _Post_satisfies_impl_(expr) 
#define SQLITE_DROP_VTABLE 30
#define OS_SWIFT_NAME(_name) 
#define _Deref_post_valid_cap_c_(size) _SAL1_1_Source_(_Deref_post_valid_cap_c_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post1_impl_(__cap_c_impl(size)) _Post_valid_impl_)
#define TASK_NAME_PORT 3
#define __inout_nz _SAL1_Source_(__inout_nz, (), __inout)
#define SQLITE_LOCKED 6
#define HOST_NULL ((host_t) 0)
#define __FLT32X_MANT_DIG__ 53
#define __inner_adt_prop(adt,prop) 
#define _XOPEN_REALTIME_THREADS (-1)
#define SQLITE_NULLEQ 0x80
#define _Prepost_opt_bytecount_c_(size) _SAL1_1_Source_(_Prepost_opt_bytecount_c_, (size), _Pre_opt_bytecount_c_(size) _Post_bytecount_c_(size))
#define WHERE_DISTINCT_UNORDERED 3
#define __options_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_open __enum_options
#define _Pre_ 
#define SQLITE_MISMATCH 20
#define SCHED_OTHER 1
#define __deref_inout_xcount_opt(size) _SAL1_Source_(__deref_inout_xcount_opt, (size), __deref_inout_xcount(size) _Pre_ __deref __exceptthat __maybenull _Post_ __deref __exceptthat __maybenull)
#define OS_OPTIONS(_name,_type,...) __OS_ENUM_C_FALLBACK(_name, _type, ## __VA_ARGS__) __OS_ENUM_ATTR __OS_OPTIONS_ATTR
#define HOST_MAX_SPECIAL_PORT HOST_IOCOMPRESSIONSTATS_PORT
#define P_PROFIL 0x00000020
#define ENODATA 120
#define MNT_NOATIME 0x10000000
#define VM_BEHAVIOR_WILLNEED ((vm_behavior_t) 4)
#define __deref_out _SAL1_Source_(__deref_out, (), _Outptr_)
#define VM_PURGABLE_ORDERING_SHIFT 5
#define _Pre_z_cap_(size) _SAL1_1_Source_(_Pre_z_cap_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre2_impl_(__zterm_impl,__cap_impl(size)) _Pre_valid_impl_)
#define _Satisfies_impl_(expr) 
#define SQLITE_TESTCTRL_SCRATCHMALLOC 17
#define TK_ADD 158
#define SQLITE3EXT_H 
#define VM_MEMORY_ROSETTA_INDIRECT_BRANCH_MAP 232
#define FP_ILOGB0 (-0x7fffffff - _C2)
#define PTHREAD_COND_INITIALIZER {_PTHREAD_COND_SIG_init, {0}}
#define ALIGNBYTES __DARWIN_ALIGNBYTES
#define _Ret_count_x_(size) _SAL1_1_Source_(_Ret_count_x_, (size), _Ret1_impl_(__notnull_impl_notref) _Ret1_impl_(__count_x_impl(size)) _Ret_valid_impl_)
#define __SAL_H_FULL_VER 140050727
#define WHERE_PARTIALIDX 0x00020000
#define __kernel_code 
#define BTREE_SCHEMA_VERSION 1
#define F_PEOFPOSMODE 3
#define OP_Sort 35
#define __STDC_HOSTED__ 1
#define _SC_GETPW_R_SIZE_MAX 71
#define HOST_PRIORITY_INFO 5
#define VM_REGION_BASIC_INFO_64 9
#define _CRT_CONCATENATE_(a,b) a ## b
#define _Ret_bytecount_c_(size) _SAL1_1_Source_(_Ret_bytecount_c_, (size), _Ret1_impl_(__notnull_impl_notref) _Ret1_impl_(__bytecount_c_impl(size)) _Ret_valid_impl_)
#define CPU_SUBTYPE_BIG_ENDIAN ((cpu_subtype_t) 1)
#define _Deref_out_z_cap_c_(size) _SAL1_1_Source_(_Deref_out_z_cap_c_, (size), _Deref_pre_cap_c_(size) _Deref_post_z_)
#define TIOCSPGRP _IOW('t', 118, int)
#define _Out_z_bytecap_x_(size) _SAL1_1_Source_(_Out_z_bytecap_x_, (size), _Pre_bytecap_x_(size) _Post_valid_impl_ _Post_z_)
#define UID_MAX 2147483647U
#define MACH_VM_MIN_ADDRESS_RAW 0x0ULL
#define FOUR_BYTE_INT(x) (16777216*(i8)((x)[0])|((x)[1]<<16)|((x)[2]<<8)|(x)[3])
#define POSIX_MADV_WILLNEED 3
#define PragTyp_JOURNAL_MODE 20
#define HOST_CALENDAR_SET_REPLYID 951
#define _In_z_ 
#define TAILQ_FOREACH_SAFE(var,head,field,tvar) for ((var) = TAILQ_FIRST((head)); (var) && ((tvar) = TAILQ_NEXT((var), field), 1); (var) = (tvar))
#define __crt_countof(_Array) (sizeof(_Array) / sizeof(_Array[0]))
#define MACH_PORT_STATUS_FLAG_GUARDED 0x02
#define LIST_INSERT_BEFORE(listelm,elm,field) do { LIST_CHECK_PREV(listelm, field); (elm)->field.le_prev = (listelm)->field.le_prev; LIST_NEXT((elm), field) = (listelm); *(listelm)->field.le_prev = (elm); (listelm)->field.le_prev = &LIST_NEXT((elm), field); } while (0)
#define ALRMTYPE 0xff
#define OE_Default 11
#define __post_deref_except_maybenull 
#define ATTR_CMNEXT_LINKID 0x00000010
#define _Out_opt_z_capcount_(capcount) _SAL1_1_Source_(_Out_opt_z_capcount_, (capcount), _Pre_opt_cap_(capcount) _Post_valid_impl_ _Post_z_count_(capcount))
#define SIGURG 16
#define checkProfileCallback(DB,P) if( ((P)->startTime)>0 ){ invokeProfileCallback(DB,P); }
#define ATTR_VOL_MINALLOCATION 0x00000020
#define MEM_Term 0x0200
#define __DBL_DIG__ 15
#define CPU_SUBTYPE_POWERPC_620 ((cpu_subtype_t) 8)
#define WO_IN 0x0001
#define MACH_RCV_TRAILER_AV 7
#define _STDINT 
#define _Translates_NTSTATUS_to_HRESULT_(status) _SAL2_Source_(_Translates_NTSTATUS_to_HRESULT_, (status), _Always_( _Post_equal_to_((HRESULT)(status | FACILITY_NT_BIT))))
#define _SAL1_1_Source_(Name,args,annotes) _SA_annotes3(SAL_name, #Name, "", "1.1") _Group_(annotes _SAL_nop_impl_)
#define SQLITE_CORRUPT_SEQUENCE (SQLITE_CORRUPT | (2<<8))
#define SQLITE_STATUS_SCRATCH_OVERFLOW 4
#define __nullterminated _SAL1_Source_(__nullterminated, (), _Null_terminated_)
#define PATH_MAX 1024
#define MEMTYPE_LOOKASIDE 0x02
#define SQLITE_OmitNoopJoin 0x0100
#define VM_MEMORY_ATS 50
#define OE_SetNull 8
#define PAGER_INCR(v) 
#define KERN_NO_SPACE 3
#define SQLITE_SYSAPI 
#define VM_MEMORY_LIBDISPATCH 74
#define _Function_class_(n) 
#define SIOCAUTONETMASK _IOW('i', 39, struct ifreq)
#define F_THAW_FS 54
#define PTHREAD_CANCEL_ASYNCHRONOUS 0x00
#define putVarint32(A,B) (u8)(((u32)(B)<(u32)0x80)?(*(A)=(unsigned char)(B)),1: sqlite3PutVarint((A),(B)))
#define _MACH_PROCESSOR_INFO_H_ 
#define OP_AggInverse 153
#define PGHDR_WRITEABLE 0x004
#define MALLOC_ZONE_SPECIFIC_FLAGS 0xff00
#define OP_OpenEphemeral 112
#define WAL_RDONLY 1
#define ENOTCONN 126
#define _Ret_writes_bytes_to_maybenull_(s,c) 
#define ILL_ILLADR 5
#define TK_ALL 131
#define SRT_DistFifo 6
#define __LDBL_MIN__ 2.22507385850720138309023271733240406e-308L
#define TK_DEFERRABLE 127
#define SQLITE_DBCONFIG_RESET_DATABASE 1009
#define TIOCMGET _IOR('t', 106, int)
#define tkEXPLAIN 3
#define __inout_xcount_opt(size) _SAL1_Source_(__inout_xcount_opt, (size), __inout_xcount(size) __exceptthat __maybenull)
#define OP_String8 113
#define _CRT_SECURE_INVALID_PARAMETER(expr) ::_invalid_parameter_noinfo_noreturn()
#define _ARM_ARCH_H 
#define OP_IfNullRow 21
#define __analysis_noreturn 
#define TK_AND 44
#define _REXT_OK (1<<17)
#define MACH_PORT_DEAD ((mach_port_name_t) ~0)
#define _Deref_post_opt_count_c_(size) _SAL1_1_Source_(_Deref_post_opt_count_c_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post1_impl_(__count_c_impl(size)) _Post_valid_impl_)
#define TK_ANY 98
#define _BSD_ARM__TYPES_H_ 
#define __drv_deref(annotes) __deref _Group_(annotes _SAL_nop_impl_)
#define KERN_LOW_PRI_WINDOW 56
#define SQLITE_WSD 
#define MACH_MSGH_BITS_HAS_REMOTE(bits) (MACH_MSGH_BITS_REMOTE(bits) != MACH_MSGH_BITS_ZERO)
#define _Out_bytecap_(size) _SAL1_1_Source_(_Out_bytecap_, (size), _Pre_bytecap_(size) _Post_valid_impl_)
#define MACH_PORT_TYPE_SEND_RECEIVE (MACH_PORT_TYPE_SEND|MACH_PORT_TYPE_RECEIVE)
#define _In_reads_to_ptr_opt_(p) 
#define __DARWIN_BYTE_ORDER __DARWIN_LITTLE_ENDIAN
#define ATTR_VOL_MAXOBJCOUNT 0x00000800
#define OP_SeekEnd 130
#define _CRT_UNUSED(x) (void)x
#define __inner_out_validated(typ_raw) 
#define host_set_telemetry_port(host,port) (host_set_special_port((host), HOST_TELEMETRY_PORT, (port)))
#define __deref_inout_bcount(size) _SAL1_Source_(__deref_inout_bcount, (size), __deref_inout __pre __deref __byte_writableTo(size) __post _Notref_ __deref __byte_writableTo(size))
#define FSOPT_NOFOLLOW 0x00000001
#define SQLITE_DROP_VIEW 17
#define _O_NOINHERIT 0x0080
#define MACH_MSG_PHYSICAL_COPY 0
#define PROXY_HOSTIDLEN 16
#define STAILQ_FOREACH(var,head,field) for((var) = STAILQ_FIRST((head)); (var); (var) = STAILQ_NEXT((var), field))
#define __AVAILABILITY_INTERNAL_REGULAR 
#define CURSOR_SKIPNEXT 2
#define _PTHREAD_KEY_T 
#define SQLITE_EXTENSION_INIT1 
#define SQLITE_EXTENSION_INIT2(v) (void)v;
#define VM_PROT_DEFAULT (VM_PROT_READ|VM_PROT_WRITE)
#define VM_MEMORY_VIDEOBITSTREAM 91
#define DEV_BSIZE 512
#define MPG_FLAGS_STRICT_REPLY_MASK (0xffull << 56)
#define _SLOTSIZEOF(t) (sizeof(t))
#define sqlite3MutexWarnOnContention(x) 
#define host_get_coalition_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_COALITION_PORT, (port)))
#define TASK_VM_INFO_REV5_COUNT TASK_VM_INFO_COUNT
#define SQLITE_DistinctOpt 0x0010
#define IN_SPECIAL_PARSE (pParse->eParseMode!=PARSE_MODE_NORMAL)
#define __DARWIN_ALIAS_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_NON_CANCELABLE __DARWIN_SUF_UNIX03)
#define __drv_floatUsed _SAL1_1_Source_(__drv_floatUsed, (), _Kernel_float_used_)
#define KIPC_SOMAXCONN 3
#define MEMORY_OBJECT_ATTRIBUTE_INFO 14
#define MACH_PORT_RIGHT_SEND_ONCE ((mach_port_right_t) 2)
#define MADV_PAGEOUT 10
#define __class_code_content(typ) 
#define TK_ASC 31
#define __drv_completionType(kindlist) _SAL1_1_Source_(__drv_completionType, (kindlist), _SA_annotes1(SAL_completionType, #kindlist))
#define ATTR_VOL_DIRCOUNT 0x00000400
#define _In_reads_opt_z_(s) 
#define sqlite3Isdigit(x) (sqlite3CtypeMap[(unsigned char)(x)]&0x04)
#define _MACH_DEBUG_IPC_INFO_H_ 
#define EVFILT_MACHPORT (-8)
#define CPF_MASK (CPF_OVERWRITE|CPF_IGNORE_MODE)
#define _FMASK ((unsigned short)(0x7fff & ~_FFRAC))
#define SQLITE_FCNTL_COMMIT_ATOMIC_WRITE 32
#define Utf8Read(A) (A[0]<0x80?*(A++):sqlite3Utf8Read(&A))
#define VM_MEMORY_IOKIT 21
#define __inner_assume_bound(i) 
#define _FPCOMPARE(_Val1,_Val2) (_CLASSIFY2(_Val1, _Val2, _fdpcomp, _dpcomp, _ldpcomp))
#define VM_MAP_MAX_ADDRESS VM_MAX_ADDRESS
#define THREAD_BASIC_INFO 3
#define NOTE_OOB 0x00000002
#define arm_thread_state64_set_sp(ts,ptr) __darwin_arm_thread_state64_set_sp(ts, ptr)
#define _Pre_invalid_ _SAL2_Source_(_Pre_invalid_, (), _Deref_pre1_impl_(__notvalid_impl))
#define _Pre_opt_valid_cap_(size) _SAL1_1_Source_(_Pre_opt_valid_cap_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__cap_impl(size)) _Pre_valid_impl_)
#define clbase(i) (i)
#define JT_LEFT 0x0008
#define _Pre3_impl_(p1,p2,p3) 
#define HOST_EXTMOD_INFO64_COUNT ((mach_msg_type_number_t) (sizeof(vm_extmod_statistics_data_t)/sizeof(integer_t)))
#define KERN_KDTEST 19
#define __out_ecount_full_z(size) _SAL1_Source_(__out_ecount_full_z, (size), __out_ecount_full(size) __post __nullterminated)
#define TIOCGPGRP _IOR('t', 119, int)
#define SQLITE_NOWILDCARDMATCH 2
#define ARG_MAX (1024 * 1024)
#define __NULLABILITY_COMPLETENESS_PUSH 
#define PPAUSE 40
#define ENOSR 124
#define S_ISDIR(m) (((m) & S_IFMT) == S_IFDIR)
#define MADV_NORMAL POSIX_MADV_NORMAL
#define EP_Skip 0x001000
#define TASK_POWER_INFO_V2_COUNT ((mach_msg_type_number_t) (sizeof (task_power_info_v2_data_t) / sizeof (natural_t)))
#define WINDOWFUNCALL(name,nArg,extra) { nArg, (SQLITE_UTF8|SQLITE_FUNC_WINDOW|extra), 0, 0, name ## StepFunc, name ## FinalizeFunc, name ## ValueFunc, name ## InvFunc, name ## Name, {0} }
#define _V6_ILP32_OFFBIG __ILP32_OFFBIG
#define __FLT64_MANT_DIG__ 53
#define ARM_NEON_STATE 16
#define _Prepost_opt_bytecount_x_(size) _SAL1_1_Source_(_Prepost_opt_bytecount_x_, (size), _Pre_opt_bytecount_x_(size) _Post_bytecount_x_(size))
#define PragTyp_STATS 43
#define __post_invalid _SAL1_Source_(__post_invalid, (), _Post_ __notvalid)
#define VM_PAGE_QUERY_PAGE_REF 0x4
#define HOST_PREFERRED_USER_ARCH_COUNT ((mach_msg_type_number_t) (sizeof(host_preferred_user_arch_data_t)/sizeof(integer_t)))
#define ntohll(x) __DARWIN_OSSwapInt64(x)
#define HOST_XPC_EXCEPTION_PORT (17 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define __TVOS_14_1 140100
#define ROWSET_ENTRY_PER_CHUNK ((ROWSET_ALLOCATION_SIZE-8)/sizeof(struct RowSetEntry))
#define SQLITE_IOERR_MMAP (SQLITE_IOERR | (24<<8))
#define SF_IncludeHidden 0x20000
#define __CRT_APPEND(_Value1,_Value2) _Value1 ## _Value2
#define _Deref_inout_range_(l,h) 
#define __file_parser(typ) 
#define OS_CONST __attribute__((__const__))
#define __DARWIN_ALIAS_I(sym) __asm("_" __STRING(sym) __DARWIN_SUF_64_BIT_INO_T __DARWIN_SUF_UNIX03)
#define __TVOS_14_2 140200
#define TK_ASTERISK 175
#define SQLITE_STATUS_MALLOC_COUNT 9
#define CLD_EXITED 1
#define _INO_T 
#define TIOCPKT_NOSTOP 0x10
#define KMOD_DECL(name,version) static kmod_start_func_t name ## _module_start; static kmod_stop_func_t name ## _module_stop; kmod_info_t KMOD_INFO_NAME = { 0, KMOD_INFO_VERSION, -1U, { #name }, { version }, -1, 0, 0, 0, 0, name ## _module_start, name ## _module_stop };
#define __drv_sameIRQL _SAL1_1_Source_(__drv_sameIRQL, (), _IRQL_requires_same_)
#define MACH_RCV_TRAILER_NULL 0
#define A_SETUMASK 14
#define ARM_VFP_STATE_COUNT ((mach_msg_type_number_t) (sizeof (arm_vfp_state_t)/sizeof(uint32_t)))
#define TK_EXCLUDE 91
#define FD_SET(n,p) __DARWIN_FD_SET(n, p)
#define __SIZEOF_LONG_DOUBLE__ 8
#define VM_REGION_SUBMAP_INFO_V2_SIZE (sizeof (vm_region_submap_info_data_64_t))
#define _Deref2_pre_readonly_ _SAL1_1_Source_(_Deref2_pre_readonly_, (), _Deref2_pre1_impl_(__readaccess_impl_notref))
#define __field_data_source(src_sym) _SAL_L_Source_(__field_data_source, (lb,ub), __inner_data_source(#src_sym))
#define TK_RELEASE 14
#define SQLITE_MEMDB_DEFAULT_MAXSIZE 1073741824
#define _Outptr_result_buffer_maybenull_(s) 
#define IO_NUM_PRIORITIES 4
#define _SC_ARG_MAX 1
#define VM_FLAGS_SUPERPAGE_NONE (SUPERPAGE_NONE << VM_FLAGS_SUPERPAGE_SHIFT)
#define _Kernel_entry_ 
#define BTREE_FREE_PAGE_COUNT 0
#define _Memory_origin_when_(previousContext,context) 
#define __deref_inout_bcount_part(size,length) _SAL1_Source_(__deref_inout_bcount_part, (size,length), __deref_inout_bcount(size) __pre __deref __byte_readableTo(length) __post __deref __byte_readableTo(length))
#define PTF_LEAF 0x08
#define SQLITE_IOCAP_POWERSAFE_OVERWRITE 0x00001000
#define _D3_C 0
#define SEEK_CUR 1
#define SQLITE_DQS 3
#define _Deref_pre_opt_count_(size) _SAL1_1_Source_(_Deref_pre_opt_count_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre1_impl_(__count_impl(size)) _Pre_valid_impl_)
#define MACH_RCV_IN_SET 0x1000400a
#define _SYS__ENDIAN_H_ 
#define _Deref_prepost_bytecap_x_(size) _SAL1_1_Source_(_Deref_prepost_bytecap_x_, (size), _Deref_pre_bytecap_x_(size) _Deref_post_bytecap_x_(size))
#define host_set_amfid_port(host,port) (host_set_special_port((host), HOST_AMFID_PORT, (port)))
#define _threadid (__threadid())
#define _POSIX_CHOWN_RESTRICTED 200112L
#define CHAR_MIN SCHAR_MIN
#define OP_Affinity 91
#define _TIME_T 
#define P_RESV7 0x00800000
#define P_RESV9 0x02000000
#define KERN_KDDFLAGS 2
#define __FLT16_MAX_10_EXP__ 4
#define S_IFLNK 0120000
#define claligned(x) ((((int)(x))&CLOFSET)==0)
#define _SC_XOPEN_REALTIME_THREADS 112
#define SQLITE_LIMIT_COMPOUND_SELECT 4
#define ATTR_FILE_IOBLOCKSIZE 0x00000008
#define _Deref_pre_opt_count_x_(size) _SAL1_1_Source_(_Deref_pre_opt_count_x_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre1_impl_(__count_x_impl(size)) _Pre_valid_impl_)
#define _Inout_opt_z_count_(size) _SAL1_1_Source_(_Inout_opt_z_count_, (size), _Prepost_z_ _Prepost_opt_count_(size))
#define ATTR_CMN_VALIDMASK 0xFFFFFFFF
#define _Prepost_bytecount_c_(size) _SAL1_1_Source_(_Prepost_bytecount_c_, (size), _Pre_bytecount_c_(size) _Post_bytecount_c_(size))
#define TARGET_RT_LITTLE_ENDIAN 1
#define __RETURN_POLICY_SAME(_FunctionCall) 
#define MAXBSIZE (256 * 4096)
#define TARGET_OS_OSX 1
#define PAGER_JOURNALMODE_WAL 5
#define __DBL_HAS_INFINITY__ 1
#define CIRCLEQ_INSERT_HEAD(head,elm,field) do { CIRCLEQ_CHECK_HEAD(head, field); (elm)->field.cqe_next = (head)->cqh_first; (elm)->field.cqe_prev = (void *)(head); if ((head)->cqh_last == (void *)(head)) (head)->cqh_last = (elm); else (head)->cqh_first->field.cqe_prev = (elm); (head)->cqh_first = (elm); } while (0)
#define _PC_SYMLINK_MAX 24
#define TASK_WAIT_STATE_INFO 25
#define SQLITE_SCANSTAT_EXPLAIN 4
#define KERN_POLICY_STATIC 51
#define RSIZE_MAX SIZE_MAX
#define __OS_ENUM_C_FALLBACK(_name,_type,...) typedef _type _name ##_t; enum _name { __VA_ARGS__ }
#define _Kernel_float_used_ 
#define OP_Init 61
#define ONEPASS_MULTI 2
#define IsPowerOfTwo(X) (((X)&((X)-1))==0)
#define TIOCSCTTY _IO('t', 97)
#define __DEFINE_CPP_OVERLOAD_INLINE_FUNC_0_2_EX(_ReturnType,_ReturnPolicy,_FuncName,_SecureFuncName,_SecureDstType,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2) 
#define HOST_AMFID_PORT (11 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define _I16_MAX 32767i16
#define __DARWIN_OS_INLINE static inline
#define __WATCHOS_6_1 60100
#define stdin (__acrt_iob_func(0))
#define __DARWIN_FD_ISSET(n,p) __darwin_fd_isset((n), (p))
#define BTS_FAST_SECURE 0x000c
#define ATTR_CMN_GRPID 0x00010000
#define VFS_CTL_QUERY 0x00010003
#define YY_ACCEPT_ACTION 1172
#define F_SINGLE_WRITER 76
#define _Post_writable_size_(s) _Post_ _Writable_elements_(s)
#define _Deref_post_opt_count_x_(size) _SAL1_1_Source_(_Deref_post_opt_count_x_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post1_impl_(__count_x_impl(size)) _Post_valid_impl_)
#define SQLITE_AMALGAMATION 1
#define TARGET_OS_NANO TARGET_OS_WATCH
#define SCHED_FIFO 4
#define __out_xcount_full_opt(size) _SAL1_Source_(__out_xcount_full_opt, (size), __out_xcount_full(size) __exceptthat __maybenull)
#define MACH_RCV_TRAILER_TYPE(x) (((x) & 0xf) << 28)
#define sqlite3ConnectionClosed(x) 
#define __disable_tail_calls 
#define wsdHooks sqlite3Hooks
#define TASK_INSPECT_BASIC_COUNTS_COUNT (sizeof(struct task_inspect_basic_counts) / sizeof(natural_t))
#define CPU_SUBTYPE_486 CPU_SUBTYPE_INTEL(4, 0)
#define BUS_NOOP 0
#define P4_KEYINFO (-9)
#define SQLITE_DEFAULT_JOURNAL_SIZE_LIMIT -1
#define PARSE_MODE_RENAME_COLUMN 2
#define tkCREATE 4
#define MEM_Int 0x0004
#define THREAD_STATE_MAX 1296
#define OP_IdxGE 40
#define KERN_UPDATEINTERVAL 25
#define __inner_adt_remove_prop(adt,prop) 
#define VM_PURGABLE_PURGE_ALL ((vm_purgable_t) 2)
#define PAGER_WRITER_LOCKED 2
#define HASHTABLE_NPAGE 4096
#define F_PATHPKG_CHECK 52
#define NOTE_MACHTIME 0x00000100
#define WAL_FRAME_HDRSIZE 24
#define __INT_FAST16_TYPE__ short int
#define SQLITE_OPEN_SUBJOURNAL 0x00002000
#define _SIZE_T_DEFINED 
#define TID_NULL ((uint64_t) 0)
#define TK_HAVING 143
#define EXC_GUARD 12
#define MACH_VOUCHER_ATTR_BITS_STORE MACH_VOUCHER_ATTR_USER_DATA_STORE
#define TASK_EXTMOD_INFO 19
#define wsdAutoextInit 
#define PragTyp_INDEX_INFO 17
#define TIOCSETD _IOW('t', 27, int)
#define ECHILD 10
#define OP_Trace 168
#define _Pre_bytecount_x_(size) _SAL1_1_Source_(_Pre_bytecount_x_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__bytecount_x_impl(size)) _Pre_valid_impl_)
#define EF_MAY_SHARE_BLOCKS 0x00000001
#define WAL_SHM_RDONLY 2
#define _Outptr_result_buffer_all_(size) _SAL2_Source_(_Outptr_result_buffer_all_, (size), _Out_impl_ _Deref_post2_impl_(__notnull_impl_notref, __count_impl(size)))
#define __deref_opt_out_ecount_opt(size) _SAL1_Source_(__deref_opt_out_ecount_opt, (size), __deref_out_ecount_opt(size) __pre_except_maybenull)
#define MINCORE_INCORE 0x1
#define CPU_SUBTYPE_PTRAUTH_ABI 0x80000000
#define MAC_OS_X_VERSION_10_10_2 101002
#define __out_bcount_full_z_opt(size) _SAL1_Source_(__out_bcount_full_z_opt, (size), __out_bcount_full_opt(size) __post __nullterminated)
#define _FFRAC ((unsigned short)((1 << _FOFF) - 1))
#define MNT_DWAIT 4
#define MACH_PORT_STATUS_FLAG_GUARD_IMMOVABLE_RECEIVE 0x40
#define _STRUCT_ARM_VFP_STATE struct __darwin_arm_vfp_state
#define _POSIX_SPORADIC_SERVER (-1)
#define OS_USED __attribute__((__used__))
#define S_TYPEISTMO(buf) (0)
#define OP_OpenDup 109
#define EXC_MASK_BAD_INSTRUCTION (1 << EXC_BAD_INSTRUCTION)
#define SQLITE_ACCESS_READWRITE 1
#define CURSOR_REQUIRESEEK 3
#define true 1
#define OP_IdxLE 37
#define SA_RESETHAND 0x0004
#define _Unreferenced_parameter_ _SAL2_Source_(_Unreferenced_parameter_, (), _Const_)
#define __TVOS_10_0_1 100001
#define _I16_MIN (-32767i16 - 1)
#define SQLITE_OPEN_WAL 0x00080000
#define OP_IdxLT 39
#define _XOPEN_ENH_I18N (1)
#define tkTRIGGER 6
#define __OS_EXTENSION_UNAVAILABLE(_msg) __OSX_EXTENSION_UNAVAILABLE(_msg) __IOS_EXTENSION_UNAVAILABLE(_msg)
#define _Deref_in_bound_impl_ 
#define TIOCPKT_STOP 0x04
#define SWAP(TYPE,A,B) {TYPE t=A; A=B; B=t;}
#define _FINITE (-1)
#define KERN_INVALID_RIGHT 17
#define __deref_opt_out_xcount_full(size) _SAL1_Source_(__deref_opt_out_xcount_full, (size), __deref_out_xcount_full(size) __exceptthat __maybenull)
#define SQLITE_ERROR_RETRY (SQLITE_ERROR | (2<<8))
#define _PTHREAD_RECURSIVE_MUTEX_SIG_init 0x32AAABA2
#define __drv_releasesPriorityRegion 
#define SQLITE_PREPARE_SAVESQL 0x80
#define CTLTYPE 0xf
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_ARGLIST_EX(_ReturnType,_ReturnPolicy,_DeclSpec,_CC,_FuncName,_VFuncName,_SecureVFuncName,_SecureDstType,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2) _CRT_INSECURE_DEPRECATE(_FuncName ##_s) _DeclSpec _ReturnType _CC _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, ...); _CRT_INSECURE_DEPRECATE(_SecureVFuncName) _DeclSpec _ReturnType _CC _VFuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, va_list _Args);
#define __kpi_unavailable 
#define TASK_READ_NULL ((task_read_t) 0)
#define BTS_INITIALLY_EMPTY 0x0010
#define HW_TARGET 26
#define TRANS_WRITE 2
#define PDP_ENDIAN __DARWIN_PDP_ENDIAN
#define __drv_mustHold(kind) _SAL_L_Source_(_drv_mustHold, (kind), _When_(!_Arg_comp_(#kind,"Memory"), _Requires_lock_held_(_Curr_)) _When_(_Arg_comp_(#kind,"Memory"), _Kernel_requires_resource_held_(kind)))
#define SQLITE_MUTEX_STATIC_LRU2 7
#define AUC_DISABLED -1
#define _SC_STREAM_MAX 26
#define __vcrt_malloc_normal(_Size) malloc(_Size)
#define TARGET_OS_UNIX 0
#define POLICY_TIMESHARE_INFO_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_timeshare_info)/sizeof(integer_t)))
#define VM_VOLATILE_ORDER_MASK (1 << VM_VOLATILE_ORDER_SHIFT)
#define MACH_MSG_ALLOCATE 2
#define TK_EACH 41
#define BUS_OBJERR 3
#define WHERE_TOP_LIMIT 0x00000010
#define BTREE_INTKEY 1
#define __maybevalid 
#define KIPC_MAXSOCKBUF 1
#define _In_reads_to_ptr_(p) 
#define MACH_MSG_OOL_DESCRIPTOR 1
#define __PTHREAD_ONCE_SIZE__ 8
#define VM_REGION_BASIC_INFO_COUNT_64 ((mach_msg_type_number_t) (sizeof(vm_region_basic_info_data_64_t)/sizeof(int)))
#define _Pre_z_bytecap_c_(size) _SAL1_1_Source_(_Pre_z_bytecap_c_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre2_impl_(__zterm_impl,__bytecap_c_impl(size)) _Pre_valid_impl_)
#define __deref_opt_inout_ecount_nz_opt(size) _SAL1_Source_(__deref_opt_inout_ecount_nz_opt, (size), __deref_opt_inout_ecount_opt(size))
#define __deref_opt_in _SAL1_Source_(__deref_opt_in, (), __deref_in __exceptthat __maybenull)
#define _Inout_opt_bytecount_c_(size) _SAL1_1_Source_(_Inout_opt_bytecount_c_, (size), _Prepost_opt_bytecount_c_(size))
#define TRIGGER_BEFORE 1
#define _Published_ _SAL2_Source_(_Published_, (), _SA_annotes0(SAL_externalIntf))
#define KERN_TRANSLATE 44
#define _SC_2_PBS_LOCATE 62
#define _CRT_STDIO_IMP _CRTIMP
#define KERN_PROC_PGRP 2
#define _Deref_pre_null_ _SAL1_1_Source_(_Deref_pre_null_, (), _Deref_pre1_impl_(__null_impl_notref))
#define _UI8_MAX 0xffui8
#define _Out_opt_bytecap_(size) _SAL1_1_Source_(_Out_opt_bytecap_, (size), _Pre_opt_bytecap_(size) _Post_valid_impl_)
#define __deref_inout_xcount(size) _SAL1_Source_(__deref_inout_xcount, (size), __deref_inout _Pre_ __deref __inexpressible_writableTo(size) _Post_ __deref __inexpressible_writableTo(size))
#define __in_bcount_nz(size) _SAL1_Source_(__in_bcount_nz, (size), __in_bcount(size))
#define _Ret_writes_to_ptr_z_(p) 
#define __FLT32_HAS_QUIET_NAN__ 1
#define __analysis_assert(e) 
#define VM_MEMORY_ROSETTA_ARENA 236
#define CPU_SUBTYPE_PENTIUM_4_M CPU_SUBTYPE_INTEL(10, 1)
#define _POSIX_MEMLOCK_RANGE (-1)
#define _UNDERFLOW 4
#define P_AFFINITY 0x00010000
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_0(x) 
#define TK_PARTITION 87
#define EXC_MACH_SYSCALL 8
#define SQLITE_REALLOC(x,y) malloc_zone_realloc(_sqliteZone_, (x), (y))
#define SQLITE_N_LIMIT (SQLITE_LIMIT_WORKER_THREADS+1)
#define KERN_NOT_IN_SET 12
#define _Out_bytecap_x_(size) _SAL1_1_Source_(_Out_bytecap_x_, (size), _Pre_bytecap_x_(size) _Post_valid_impl_)
#define OPFLG_JUMP 0x01
#define _UI64_MAX 0xffffffffffffffffui64
#define __drv_when(cond,annotes) _When_(cond, annotes _SAL_nop_impl_)
#define PragTyp_PAGE_SIZE 28
#define OP_IdxGT 38
#define SSTOP 4
#define __DARWIN_FD_ZERO(p) __builtin_bzero(p, sizeof(*(p)))
#define YY_MAX_SHIFTREDUCE 1170
#define PROCESSOR_CPU_STAT64 0x10000004
#define MACH_PORT_QLIMIT_KERNEL (65534)
#define _SYS_SELECT_H_ 
#define MACH_PORT_DNREQUESTS_SIZE_COUNT 1
#define SIZE_MAX UINT_MAX
#define __deref_out_nz _SAL1_Source_(__deref_out_nz, (), __deref_out)
#define VFS_CONF 2
#define ALWAYS(X) (X)
#define WHERETRACE(K,X) 
#define SIOCGHIWAT _IOR('s', 1, int)
#define _Deref_pre_opt_valid_cap_(size) _SAL1_1_Source_(_Deref_pre_opt_valid_cap_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre1_impl_(__cap_impl(size)) _Pre_valid_impl_)
#define KERN_OSREV 3
#define VM_PROT_STRIP_READ ((vm_prot_t) 0x80)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_3(x) 
#define _PTHREAD_ERRORCHECK_MUTEX_SIG_init 0x32AAABA1
#define VdbeFrameMem(p) ((Mem *)&((u8 *)p)[ROUND8(sizeof(VdbeFrame))])
#define PragTyp_PRAGMA_LIST 29
#define _SWPRINTFS_DEPRECATED _CRT_DEPRECATE_TEXT( "function has been changed to conform with the ISO C standard, " "adding an extra character count parameter. To use the traditional " "Microsoft version, set _CRT_NON_CONFORMING_SWPRINTFS.")
#define MACH_PORT_MAKE(index,gen) (((index) << 8) | (gen) >> 24)
#define MATTR_VAL_OFF 0
#define _Out_opt_z_bytecapcount_(capcount) _SAL1_1_Source_(_Out_opt_z_bytecapcount_, (capcount), _Pre_opt_bytecap_(capcount) _Post_valid_impl_ _Post_z_bytecount_(capcount))
#define _Prepost_bytecount_x_(size) _SAL1_1_Source_(_Prepost_bytecount_x_, (size), _Pre_bytecount_x_(size) _Post_bytecount_x_(size))
#define _DARWIN_FEATURE_64_BIT_INODE 1
#define VM_64_BIT_DATA_OBJECTS 
#define _Ret_writes_(s) 
#define valueFromFunction(a,b,c,d,e,f) SQLITE_OK
#define OptimizationDisabled(db,mask) (((db)->dbOptFlags&(mask))!=0)
#define SIOCATMARK _IOR('s', 7, int)
#define RTLD_NEXT ((void *) -1)
#define CC_SEMI 19
#define OP_Noop 170
#define PROXY_MAXCONCHLEN (PROXY_HEADERLEN+PROXY_HOSTIDLEN+MAXPATHLEN)
#define _VCRT_ALIGN(x) __declspec(align(x))
#define ADD_MACH_TIMESPEC(t1,t2) do { if (((t1)->tv_nsec += (t2)->tv_nsec) >= (long) NSEC_PER_SEC) { (t1)->tv_nsec -= (long) NSEC_PER_SEC; (t1)->tv_sec += 1; } (t1)->tv_sec += (t2)->tv_sec; } while (0)
#define __GXX_ABI_VERSION 1017
#define _Field_size_full_(s) 
#define host_get_ktrace_background_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_KTRACE_BACKGROUND_PORT, (port)))
#define _SC_PAGESIZE 29
#define SQLITE_CREATE_TRIGGER 7
#define Deephemeralize(P) if( ((P)->flags&MEM_Ephem)!=0 && sqlite3VdbeMemMakeWriteable(P) ){ goto no_mem;}
#define _SAL_VERSION_SAL2(_A) 
#define vdbeSorterBlockDebug(x,y,z) 
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_2_0_EX(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SecureFuncName,_HType1,_HArg1,_HType2,_HArg2,_SalAttributeDst,_DstType,_Dst) _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_HType1 _HArg1, _HType2 _HArg2, _SalAttributeDst _DstType *_Dst);
#define _SC_READER_WRITER_LOCKS 76
#define BTREE_APPEND 0x08
#define TAILQ_FOREACH_REVERSE_SAFE(var,head,headname,field,tvar) for ((var) = TAILQ_LAST((head), headname); (var) && ((tvar) = TAILQ_PREV((var), headname, field), 1); (var) = (tvar))
#define VM_NAMED_ENTRY_NULL ((vm_named_entry_t) 0)
#define PragTyp_WAL_CHECKPOINT 39
#define SUID_CRED_NULL ((suid_cred_t) 0)
#define UINT32_MAX 0xffffffffui32
#define _STRUCT_ARM_PAGEIN_STATE struct __arm_pagein_state
#define _POSIX_SHELL 200112L
#define __API_UNAVAILABLE_BEGIN_GET_MACRO(...) 
#define VOL_CAP_FMT_FAST_STATFS 0x00000400
#define UpperToLower sqlite3UpperToLower
#define ARM_EXCEPTION_STATE64 7
#define SQLITE_NoSchemaError 0x08000000
#define MACH_RCV_OVERWRITE 0x00000000
#define __deref_opt_inout_ecount_full_opt(size) _SAL1_Source_(__deref_opt_inout_ecount_full_opt, (size), __deref_inout_ecount_full_opt(size) __pre_except_maybenull)
#define MACH_MSGH_BITS_REMOTE(bits) ((bits) & MACH_MSGH_BITS_REMOTE_MASK)
#define SQLITE_FUNCTION 31
#define VM_PAGE_QUERY_PAGE_DIRTY 0x8
#define _Inout_z_bytecount_c_(size) _SAL1_1_Source_(_Inout_z_bytecount_c_, (size), _Prepost_z_ _Prepost_bytecount_c_(size))
#define TARGET_OS_WIN32 0
#define AUDIT_AHLT 0x0002
#define AUDIT_CNT 0x0001
#define MCL_FUTURE 0x0002
#define VM_FLAGS_NO_CACHE 0x0010
#define __TVOS_12_0 120000
#define __TVOS_12_2 120200
#define __TVOS_12_3 120300
#define __TVOS_12_4 120400
#define SQLITE_LIMIT_LIKE_PATTERN_LENGTH 8
#define TK_ISNOT 166
#define SQLITE_UPDATE 23
#define _CRT_UNPARENTHESIZE(...) _CRT_UNPARENTHESIZE_ __VA_ARGS__
#define sqliteHashData(E) ((E)->data)
#define _POSIX2_FORT_RUN 200112L
#define VM_PURGABLE_NO_AGING_SHIFT 16
#define SQLITE_DEFAULT_SORTERREF_SIZE 0x7fffffff
#define _XOPEN_STREAMS (-1)
#define CLSHIFT (PGSHIFT+CLSIZELOG2)
#define KERN_NAME_EXISTS 13
#define _Deref_prepost_valid_cap_x_(size) _SAL1_1_Source_(_Deref_prepost_valid_cap_x_, (size), _Deref_pre_valid_cap_x_(size) _Deref_post_valid_cap_x_(size))
#define PTHREAD_ERRORCHECK_MUTEX_INITIALIZER {_PTHREAD_ERRORCHECK_MUTEX_SIG_init, {0}}
#define osPread64 ((ssize_t(*)(int,void*,size_t,off64_t))aSyscall[10].pCurrent)
#define __field_xcount_part(size,init) _SAL1_Source_(__field_xcount_part, (size,init), __notnull __inexpressible_writableTo(size) __inexpressible_readableTo(init))
#define EADDRINUSE 100
#define TF_WithoutRowid 0x0020
#define TASK_EXC_GUARD_VM_DELIVER 0x01
#define MACH_VOUCHER_ATTR_COPY ((mach_voucher_attr_recipe_command_t)1)
#define _matherrl _matherr
#define VM_VOLATILE_ORDER_SHIFT 4
#define osAccess ((int(*)(const char*,int))aSyscall[2].pCurrent)
#define SIOCGIFFLAGS _IOWR('i', 17, struct ifreq)
#define __nullnullterminated _SAL1_Source_(__nullnullterminated, (), __inexpressible_readableTo("string terminated by two nulls") __nullterminated)
#define TK_REPLACE 73
#define EV_VANISHED 0x0200
#define invalidateOverflowCache(pCur) (pCur->curFlags &= ~BTCF_ValidOvfl)
#define STAILQ_INSERT_AFTER(head,tqelm,elm,field) do { if ((STAILQ_NEXT((elm), field) = STAILQ_NEXT((tqelm), field)) == NULL) (head)->stqh_last = &STAILQ_NEXT((elm), field); STAILQ_NEXT((tqelm), field) = (elm); } while (0)
#define SQLITE_DqsDDL 0x20000000
#define KERN_SHREG_PRIVATIZABLE 54
#define THREAD_KERNEL_PORT 1
#define SQLITE_IOERR_DIR_FSYNC (SQLITE_IOERR | (5<<8))
#define VOL_CAP_FMT_JOURNAL_ACTIVE 0x00000010
#define KMOD_RETURN_FAILURE KERN_FAILURE
#define F_TRIM_ACTIVE_FILE 100
#define osFtruncate ((int(*)(int,off_t))aSyscall[6].pCurrent)
#define EISDIR 21
#define _In_opt_bytecount_x_(size) _SAL1_1_Source_(_In_opt_bytecount_x_, (size), _Pre_opt_bytecount_x_(size) _Deref_pre_readonly_)
#define MX_CELL_SIZE(pBt) ((int)(pBt->pageSize-8))
#define SQLITE_STATUS_PAGECACHE_OVERFLOW 2
#define _Kernel_requires_resource_not_held_(k) 
#define THREE_BYTE_INT(x) (65536*(i8)((x)[0])|((x)[1]<<8)|(x)[2])
#define SQLITE_MSVC_H 
#define OP_FkCounter 150
#define _FBIAS 0x7e
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_4(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_6(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_7(x) 
#define KERN_VERSION 4
#define host_set_unfreed_port(host,port) (host_set_special_port((host), HOST_UNFREED_PORT, (port)))
#define INT_LEAST8_MAX INT8_MAX
#define _MACH_MACHINE_VM_TYPES_H_ 
#define SF_MaybeConvert 0x08000
#define host_get_io_master_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_IO_MASTER_PORT, (port)))
#define HOST_BASIC_INFO 1
#define MAP_NORESERVE 0x0040
#define _USE_ATTRIBUTES_FOR_SAL 0
#define _Pre_z_bytecap_x_(size) _SAL1_1_Source_(_Pre_z_bytecap_x_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre2_impl_(__zterm_impl,__bytecap_x_impl(size)) _Pre_valid_impl_)
#define __header_always_inline __header_inline __attribute__ ((__always_inline__))
#define osFchown ((int(*)(int,uid_t,gid_t))aSyscall[20].pCurrent)
#define KERN_TFP_POLICY_DENY 0
#define VOL_CAP_FMT_NO_PERMISSIONS 0x00400000
#define __has_extension(x) 0
#define MEMORY_OBJECT_BEHAVIOR_INFO 15
#define __rpc_entry _SAL_L_Source_(__rpc_entry, (formal), __inner_control_entrypoint(RPC))
#define ULONG_MAX 0xffffffffUL
#define VM_MEMORY_COREGRAPHICS_BACKINGSTORES 57
#define PAGE_MIN_MASK (PAGE_MIN_SIZE-1)
#define PragFlg_Result0 0x10
#define OP_AggValue 156
#define _Inout_z_cap_c_(size) _SAL1_1_Source_(_Inout_z_cap_c_, (size), _Pre_z_cap_c_(size) _Post_z_)
#define DEV_BSHIFT 9
#define OPFLAG_APPEND 0x08
#define VM_LEDGER_TAG_GRAPHICS 0x00000004
#define EXC_ARM_PAC_FAIL 0x105
#define __API_AVAILABLE_END 
#define SQLITE_NOTADB 26
#define _IRQL_uses_cancel_ 
#define HW_L2CACHESIZE 20
#define PROCESSOR_CPU_STAT_COUNT ((mach_msg_type_number_t) (sizeof(processor_cpu_stat_data_t) / sizeof(natural_t)))
#define MACH_MSG_TYPE_PORT_ANY(x) (((x) >= MACH_MSG_TYPE_MOVE_RECEIVE) && ((x) <= MACH_MSG_TYPE_MAKE_SEND_ONCE))
#define GETSIGSINFO_PLATFORM_BINARY 1
#define DbHasAnyProperty(D,I,P) (((D)->aDb[I].pSchema->schemaFlags&(P))!=0)
#define FPE_FLTSUB 6
#define SQLITE_ERROR_MISSING_COLLSEQ (SQLITE_ERROR | (1<<8))
#define OP_IncrVacuum 59
#define __deref_out_bcount_part_opt(size,length) _SAL1_Source_(__deref_out_bcount_part_opt, (size,length), __deref_out_bcount_part(size,length) __post_deref_except_maybenull)
#define CHAR_BIT 8
#define SQLITE_TESTCTRL_PARSER_COVERAGE 26
#define TASK_INSPECT_NULL ((task_inspect_t) 0)
#define SQLITE_INTERNAL 2
#define _Outptr_opt_ 
#define HW_PHYSMEM 5
#define TK_UMINUS 168
#define NSEC_PER_MSEC 1000000ull
#define __FLT64X_MAX__ 1.18973149535723176508575932662800702e+4932F64x
#define __NO_INLINE__ 1
#define MACH_RCV_TRAILER_MASK ((0xf << 24))
#define OP_Add 103
#define SIOCSIFASYNCMAP _IOW('i', 125, struct ifreq)
#define EXC_MASK_GUARD (1 << EXC_GUARD)
#define YY_SHIFT_MIN (0)
#define A_SETCTLMODE 42
#define _MRTIMP2 
#define SQLITE_LIMIT_TRIGGER_DEPTH 10
#define OP_IdxInsert 132
#define MACH_MSG_TYPE_PORT_NONE 0
#define __enum_options 
#define VOL_CAP_FMT_64BIT_OBJECT_IDS 0x00020000
#define _MAX_ULTOSTR_BASE8_COUNT (11 + 1)
#define INT_LEAST8_MIN INT8_MIN
#define sqlite3PagerResetLockTimeout(X) 
#define ATTR_CMN_SETMASK 0x51C7FF00
#define _SC_NPROCESSORS_ONLN 58
#define VVA_ONLY(X) 
#define TASK_BASIC_INFO TASK_BASIC_INFO_64
#define HW_MAXID 28
#define _SING 2
#define MAXFRAG 8
#define _Post_cap_(size) _SAL1_1_Source_(_Post_cap_, (size), _Post1_impl_(__cap_impl(size)))
#define EVFILT_FS (-9)
#define __used __attribute__((__used__))
#define TK_REINDEX 95
#define SQLITE_IOCAP_ATOMIC16K 0x00000040
#define _DFRAC ((unsigned short)((1 << _DOFF) - 1))
#define SQLITE_IOERR_ACCESS (SQLITE_IOERR | (13<<8))
#define IPC_VOUCHER_ATTR_CONTROL_NULL ((ipc_voucher_attr_control_t) 0)
#define S_IFDIR 0040000
#define MACH_PORT_IMPORTANCE_RECEIVER 5
#define _PTHREAD_RWLOCK_T 
#define EV_ENABLE 0x0004
#define A_GETPINFO_ADDR 28
#define ts_32 uts.ts_32
#define _SCHED_H_ 
#define __out_ecount_full_z_opt(size) _SAL1_Source_(__out_ecount_full_z_opt, (size), __out_ecount_full_opt(size) __post __nullterminated)
#define __function_ignore_lock_checking(lock) 
#define ARM_NEON_STATE64 17
#define MACH_VOUCHER_ATTR_KEY_NUM_WELL_KNOWN MACH_VOUCHER_ATTR_KEY_TEST
#define _Deref_prepost_opt_valid_bytecap_x_(size) _SAL1_1_Source_(_Deref_prepost_opt_valid_bytecap_x_, (size), _Deref_pre_opt_valid_bytecap_x_(size) _Deref_post_opt_valid_bytecap_x_(size))
#define _putchar_nolock(_Ch) _putc_nolock(_Ch, stdout)
#define VM_PURGABLE_DENY 3
#define _IN_PORT_T 
#define _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS 11
#define __stateful_pure __attribute__((__pure__))
#define TASK_WAIT_STATE_INFO_COUNT ((mach_msg_type_number_t) (sizeof(task_wait_state_info_data_t) / sizeof(natural_t)))
#define __deref_xcount_opt(size) _SAL1_Source_(__deref_xcount_opt, (size), __deref_xcount(size) _Post_ __deref __exceptthat __maybenull)
#define SQLITE_CANTOPEN_CONVPATH (SQLITE_CANTOPEN | (4<<8))
#define PROCESSOR_CPU_STAT64_COUNT ((mach_msg_type_number_t) (sizeof(processor_cpu_stat64_data_t) / sizeof(integer_t)))
#define VM_MEMORY_GENEALOGY 78
#define NOTE_BACKGROUND 0x00000040
#define KERN_INVALID_NAME 15
#define _INC_LIMITS 
#define SIOCGIFMAC _IOWR('i', 130, struct ifreq)
#define __drv_acquiresExclusiveResource(kind) 
#define LINE_MAX 2048
#define __STRING(x) #x
#define FP_INFINITE _INFCODE
#define NGROUPS_MAX 16
#define _MAX_LTOSTR_BASE16_COUNT (8 + 1)
#define _DARWIN_FEATURE_ONLY_VERS_1050 1
#define USER_POSIX2_UPE 18
#define SIGVTALRM 26
#define KERNEL_AUDIT_TOKEN_VALUE { {0, 0, 0, 0, 0, 0, 0, 0} }
#define _Deref_post_opt_bytecount_(size) _SAL1_1_Source_(_Deref_post_opt_bytecount_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post1_impl_(__bytecount_impl(size)) _Post_valid_impl_)
#define __drv_holdsCancelSpinLock() 
#define PGHDR_NEED_SYNC 0x008
#define __drv_mustHoldCancelSpinLock 
#define __wargv (*__p___wargv())
#define PVFS 20
#define IsPrimaryKeyIndex(X) ((X)->idxType==SQLITE_IDXTYPE_PRIMARYKEY)
#define PTHREAD_JIT_WRITE_ALLOW_CALLBACKS_NP(...) __attribute__((__used__, __section__("__DATA_CONST,__pth_jit_func"))) static const pthread_jit_write_callback_t __pthread_jit_write_callback_allowlist[] = { __VA_ARGS__, NULL }
#define SQLITE_BIGENDIAN 0
#define F_SETLKWTIMEOUT 10
#define CTLFLAG_OID2 0x00400000
#define MACH_SEND_NOTIFY 0x00000080
#define _IRQL_requires_same_ 
#define TEMP_MASTER_NAME "sqlite_temp_master"
#define PROCESSOR_SET_LOAD_INFO 4
#define _SC_TRACE 97
#define MPG_FLAGS_MOD_REFS_PINNED_DESTROY (0x02ull << 56)
#define TH_STATE_RUNNING 1
#define OP_And 44
#define __inout_xcount_part_opt(size,length) _SAL1_Source_(__inout_xcount_part_opt, (size, length), __inout_xcount_part(size,length) __exceptthat __maybenull)
#define __API_DEPRECATED(...) 
#define __drv_releasesExclusiveResource(kind) 
#define _CRTIMP 
#define WHERE_WANT_DISTINCT 0x0100
#define TASK_FLAVOR_INSPECT 2
#define CPUFAMILY_ARM_FIRESTORM_ICESTORM 0x1b588bb3
#define _POSIX2_FORT_DEV (-1)
#define SQLITE_LIMIT_FUNCTION_ARG 6
#define SIOCGPGRP _IOR('s', 9, int)
#define _In_NLS_string_(size) _SAL_L_Source_(_In_NLS_string_, (size), _When_((size) < 0, _In_z_) _When_((size) >= 0, _In_reads_(size)))
#define SQLITE_TESTCTRL_ONCE_RESET_THRESHOLD 19
#define CPU_THREADTYPE_INTEL_HTT ((cpu_threadtype_t) 1)
#define vdbeSorterRewindDebug(y) 
#define USER_RE_DUP_MAX 9
#define SIG_ATOMIC_MAX INT32_MAX
#define __refparam 
#define F_FREEZE_FS 53
#define etORDINAL 15
#define HOST_EXTMOD_INFO64 5
#define __FBSDID(s) 
#define LIKEFUNC(zName,nArg,arg,flags) {nArg, SQLITE_FUNC_CONSTANT|SQLITE_UTF8|flags, (void *)arg, 0, likeFunc, 0, 0, 0, #zName, {0} }
#define HW_PAGESIZE 7
#define __kernel_driver 
#define SIOCGIFALTMTU _IOWR('i', 72, struct ifreq)
#define TK_FILTER 161
#define CTL_USER 8
#define LIST_ENTRY(type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct { struct type *le_next; struct type **le_prev; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define A_OLDSETQCTRL 7
#define SQLITE_DELETE 9
#define STAILQ_INSERT_HEAD(head,elm,field) do { if ((STAILQ_NEXT((elm), field) = STAILQ_FIRST((head))) == NULL) (head)->stqh_last = &STAILQ_NEXT((elm), field); STAILQ_FIRST((head)) = (elm); } while (0)
#define SQLITE_ANALYZE 28
#define _Out_bytecap_c_(size) _SAL1_1_Source_(_Out_bytecap_c_, (size), _Pre_bytecap_c_(size) _Post_valid_impl_)
#define SQLITE_OPEN_MAIN_DB 0x00000100
#define INT32_MAX 2147483647i32
#define VM_MAX_PAGE_ADDRESS MACH_VM_MAX_ADDRESS
#define FIOSETOWN _IOW('f', 124, int)
#define _Deref2_ret1_impl_(p1) 
#define _U_INT8_T 
#define _SC_THREAD_ATTR_STACKSIZE 83
#define OP_VNext 60
#define _On_failure_(a) 
#define SIOCGIFGENERIC _IOWR('i', 58, struct ifreq)
#define SQLITE_OPEN_READONLY 0x00000001
#define TK_ISNULL 50
#define TIOCSTI _IOW('t', 114, char)
#define SQLITE_SO_ASC 0
#define _PGLOBAL 
#define TARGET_CPU_PPC 0
#define __deref_inout_opt _SAL1_Source_(__deref_inout_opt, (), __deref_inout __pre_deref_except_maybenull __post_deref_except_maybenull)
#define TK_IF_NULL_ROW 174
#define SQLITE_CONFIG_GETPCACHE 15
#define TASK_FLAVOR_NAME 3
#define SQLITE_QUERY_PLANNER_LIMIT 20000
#define THREAD_NULL ((thread_t) 0)
#define ATTR_CMNEXT_RECURSIVE_GENCOUNT 0x00000400
#define _STRUCT_ARM_NEON_STATE64 struct __darwin_arm_neon_state64
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SalAttributeDst,_DstType,_Dst) __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName ##_s, _SalAttributeDst, _DstType, _Dst)
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1) __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName ##_s, _DstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1)
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2) __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName ##_s, _DstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2)
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_4(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2,_TType3,_TArg3,_TType4,_TArg4) __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_4_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName ##_s, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3, _TType4, _TArg4)
#define SIOCGIFPDSTADDR _IOWR('i', 64, struct ifreq)
#define AU_ASSIGN_ASID -1
#define FPE_INTOVF 8
#define _FSIGN ((unsigned short)0x8000)
#define __OSX_UNAVAILABLE 
#define __SCHAR_WIDTH__ 8
#define LIST_INSERT_HEAD(head,elm,field) do { LIST_CHECK_HEAD((head), field); if ((LIST_NEXT((elm), field) = LIST_FIRST((head))) != NULL) LIST_FIRST((head))->field.le_prev = &LIST_NEXT((elm), field); LIST_FIRST((head)) = (elm); (elm)->field.le_prev = &LIST_FIRST((head)); } while (0)
#define _PRAGMA_DETECT_MISMATCH_STRING0(s) _PRAGMA_DETECT_MISMATCH_STRING1(s)
#define SF_HasAgg 0x00010
#define BTCF_ValidNKey 0x02
#define CPU_ARCH_ABI64_32 0x02000000
#define _Inout_z_cap_x_(size) _SAL1_1_Source_(_Inout_z_cap_x_, (size), _Pre_z_cap_x_(size) _Post_z_)
#define __DECLARE_CPP_OVERLOAD_INLINE_NFUNC_0_0_EX(_ReturnType,_ReturnPolicy,_FuncName,_SecureFuncName,_SecureDstType,_DstType,_Dst) _CRT_INSECURE_DEPRECATE(_SecureFuncName) __inline _ReturnType __CRTDECL _FuncName(_DstType *_Dst)
#define _Inout_z_bytecap_c_(size) _SAL1_1_Source_(_Inout_z_bytecap_c_, (size), _Pre_z_bytecap_c_(size) _Post_z_)
#define OS_WARN_RESULT __attribute__((__warn_unused_result__))
#define LIST_SWAP(head1,head2,type,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH do { struct type *swap_tmp = LIST_FIRST((head1)); LIST_FIRST((head1)) = LIST_FIRST((head2)); LIST_FIRST((head2)) = swap_tmp; if ((swap_tmp = LIST_FIRST((head1))) != NULL) swap_tmp->field.le_prev = &LIST_FIRST((head1)); if ((swap_tmp = LIST_FIRST((head2))) != NULL) swap_tmp->field.le_prev = &LIST_FIRST((head2)); } while (0) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define _CRT_MANAGED_HEAP_DEPRECATE 
#define __FLT32_MAX_10_EXP__ 38
#define TASK_HOST_PORT 2
#define MACHINE_THREAD_STATE ARM_THREAD_STATE
#define TF_Autoincrement 0x0008
#define FILESEC_GUID FILESEC_UUID
#define __VM_LEDGER_ACCOUNTING_POSTMARK 2019032600
#define SIGSEGV 11
#define FP_ILOGBNAN 0x7fffffff
#define REGISTER_TRACE(R,M) 
#define VM_PROT_WANTS_COPY ((vm_prot_t) 0x10)
#define _Inout_opt_cap_(size) _SAL1_1_Source_(_Inout_opt_cap_, (size), _Pre_opt_valid_cap_(size) _Post_valid_)
#define _SC_MESSAGE_PASSING 33
#define EVFILT_VM (-12)
#define _Deref_post_null_ _SAL1_1_Source_(_Deref_post_null_, (), _Deref_post1_impl_(__null_impl_notref))
#define __INT_FAST32_TYPE__ int
#define _Function_ignore_lock_checking_(e) 
#define MNT_QUOTA 0x00002000
#define VdbeCoverageNeverTaken(v) 
#define VM_PROT_ALLEXEC (VM_PROT_EXECUTE)
#define SIG_DFL (void (*)(int))0
#define _Lock_level_order_(n1,n2) 
#define PAGER_JOURNALMODE_QUERY (-1)
#define SIG_ATOMIC_MIN INT32_MIN
#define _Field_range_(l,h) 
#define MACH_EVENTLINK_NULL ((mach_eventlink_t) 0)
#define THREAD_CONVERT_THREAD_STATE_TO_SELF 1
#define NOTE_ATTRIB 0x00000008
#define SQLITE_TESTCTRL_PENDING_BYTE 11
#define TASK_BASIC_INFO_COUNT (sizeof(task_basic_info_data_t) / sizeof(natural_t))
#define SQLITE_CHECKPOINT_RESTART 2
#define _MACH_TIME_VALUE_H_ 
#define EXC_MASK_EMULATION (1 << EXC_EMULATION)
#define EADDRNOTAVAIL 101
#define _Inout_updates_bytes_all_opt_(s) 
#define _Ret_opt_z_bytecap_(size) _SAL1_1_Source_(_Ret_opt_z_bytecap_, (size), _Ret1_impl_(__maybenull_impl_notref) _Ret2_impl_(__zterm_impl,__bytecap_impl(size)) _Ret_valid_impl_)
#define EIGHT_BYTE_ALIGNMENT(X) ((((char*)(X) - (char*)0)&7)==0)
#define MACH_MSG_TYPE_POLYMORPHIC ((mach_msg_type_name_t) -1)
#define CPU_SUBTYPE_PENTIUM_3 CPU_SUBTYPE_INTEL(8, 0)
#define CPU_SUBTYPE_PENTIUM_4 CPU_SUBTYPE_INTEL(10, 0)
#define VM_MEMORY_MALLOC 1
#define host_set_host_priv_port(host,port) (KERN_INVALID_ARGUMENT)
#define EP_Subquery 0x200000
#define __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ 120000
#define CTL_NAMES { { 0, 0 }, { "kern", CTLTYPE_NODE }, { "vm", CTLTYPE_NODE }, { "vfs", CTLTYPE_NODE }, { "net", CTLTYPE_NODE }, { "debug", CTLTYPE_NODE }, { "hw", CTLTYPE_NODE }, { "machdep", CTLTYPE_NODE }, { "user", CTLTYPE_NODE }, }
#define STAILQ_LAST(head,type,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH (STAILQ_EMPTY((head)) ? NULL : ((struct type *)(void *) ((char *)((head)->stqh_last) - __offsetof(struct type, field))))__NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define CPU_SUBTYPE_PENTIUM_M CPU_SUBTYPE_INTEL(9, 0)
#define WHERE_DUPLICATES_OK 0x0010
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1_EX(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SecureFuncName,_SecureDstType,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1) _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1);
#define BAD_MACH_TIMESPEC(t) ((t)->tv_nsec < 0 || (t)->tv_nsec >= (long)NSEC_PER_SEC)
#define _CRTIMP_TYPEINFO _CRTIMP
#define __deref_out_ecount_nz_opt(size) _SAL1_Source_(__deref_out_ecount_nz_opt, (size), __deref_out_ecount_opt(size))
#define _POSIX_THREADS 200112L
#define F_PREALLOCATE 42
#define AUDIT_EXPIRE_OP_OR ((unsigned char)1)
#define TTYDISC 0
#define _MACH_PORT_H_ 
#define OP_Vacuum 8
#define __FLT64X_DIG__ 33
#define UF_HIDDEN 0x00008000
#define PAGER_STAT_HIT 0
#define VM_FLAGS_SUPERPAGE_MASK 0x70000
#define NOTE_DELETE 0x00000001
#define VM_MIN_ADDRESS ((vm_address_t) 0x0000000000000000ULL)
#define SIOCDIFADDR _IOW('i', 25, struct ifreq)
#define YYPARSEFREENEVERNULL 1
#define KERN_PROC_TTY 4
#define BTREE_FORDELETE 0x00000008
#define get2byteAligned(x) __builtin_bswap16(*(u16*)(x))
#define ONEPASS_SINGLE 1
#define SQLITE_MINIMUM_FILE_DESCRIPTOR 3
#define OPEN_MAX 10240
#define FSOPT_REPORT_FULLSIZE 0x00000004
#define HW_MEMSIZE 24
#define CPU_TYPE_SPARC ((cpu_type_t) 14)
#define TK_MINUS 104
#define TK_INDEX 156
#define SIOCGIFMTU _IOWR('i', 51, struct ifreq)
#define THREAD_STATE_FLAVOR_LIST_10_13 130
#define _IRQL_restores_global_(k,s) 
#define _MACH_PORT_T 
#define OPFLAG_ISUPDATE 0x04
#define _Inout_cap_c_(size) _SAL1_1_Source_(_Inout_cap_c_, (size), _Pre_valid_cap_c_(size) _Post_valid_)
#define SETBIT(V,I) V[I>>3] |= (1<<(I&7))
#define F_TLOCK 2
#define KERN_AIOTHREADS 48
#define OP_Ge 57
#define TF_NoVisibleRowid 0x0040
#define _ARM__PARAM_H_ 
#define OP_Gt 54
#define CALENDAR_CLOCK 1
#define _Null_terminated_impl_ 
#define SQLITE_DBCONFIG_LOOKASIDE 1001
#define SQLITE_IDXTYPE_APPDEF 0
#define KERN_NGROUPS 18
#define __vcrt_free_normal(_Memory) free(_Memory)
#define _Inout_opt_count_(size) _SAL1_1_Source_(_Inout_opt_count_, (size), _Prepost_opt_count_(size))
#define __inout_ecount_part_opt(size,length) _SAL1_Source_(__inout_ecount_part_opt, (size,length), __inout_ecount_part(size,length) __pre_except_maybenull)
#define _O_BINARY 0x8000
#define _Inout_opt_count_c_(size) _SAL1_1_Source_(_Inout_opt_count_c_, (size), _Prepost_opt_count_c_(size))
#define _Pre_valid_impl_ 
#define IOC_IN (__uint32_t)0x80000000
#define SQLITE_MALLOC(x) malloc_zone_malloc(_sqliteZone_, (x))
#define KMOD_RETURN_SUCCESS KERN_SUCCESS
#define __deref_inout _SAL1_Source_(__deref_inout, (), _Notref_ __notnull _Notref_ __elem_readableTo(1) __pre __deref __valid __post _Notref_ __deref __valid __refparam)
#define KERN_MEMORY_RESTART_COPY 25
#define OP_If 18
#define _DBIAS 0x3fe
#define TH_FLAGS_IDLE 0x2
#define _In_count_c_(size) _SAL1_1_Source_(_In_count_c_, (size), _Pre_count_c_(size) _Deref_pre_readonly_)
#define PVM 4
#define SRCHFS_MATCHPARTIALNAMES 0x00000002
#define VM_MEMORY_SWIFT_RUNTIME 82
#define CPU_SUBTYPE_586 CPU_SUBTYPE_INTEL(5, 0)
#define MNT_EXPORTED 0x00000100
#define KERN_UREFS_OVERFLOW 19
#define MEMORY_OBJECT_COPY_DELAY 2
#define p_starttime p_un.__p_starttime
#define OE_Replace 5
#define __deref_out_z_opt _SAL1_Source_(__deref_out_z_opt, (), _Outptr_result_maybenull_z_)
#define CPUFAMILY_ARM_VORTEX_TEMPEST 0x07d34b9f
#define VM_MEMORY_APPLICATION_SPECIFIC_1 240
#define __QOS_CLASS_AVAILABLE(...) 
#define _Post_ptr_invalid_ _Post_ _Notvalid_
#define _UID_T 
#define _Ret_cap_(size) _SAL1_1_Source_(_Ret_cap_, (size), _Ret1_impl_(__notnull_impl_notref) _Ret1_impl_(__cap_impl(size)))
#define MALLOC_ADMIN_REGION_RANGE_TYPE 4
#define __deref_ecount(size) _SAL1_Source_(__deref_ecount, (size), _Notref_ __ecount(1) __post _Notref_ __elem_readableTo(1) __post _Notref_ __deref _Notref_ __notnull __post __deref __elem_writableTo(size))
#define host_set_container_port(host,port) (host_set_special_port((host), HOST_CONTAINERD_PORT, (port)))
#define _MACH_MESSAGE_H_ 
#define OS_OVERLOADABLE 
#define __in_data_source(src_sym) _SAL_L_Source_(__in_data_source, (src_sym), _Pre_ __inner_data_source(#src_sym))
#define OP_Le 55
#define OP_Lt 56
#define TAILQ_CHECK_PREV(elm,field) 
#define __NEW_SCHEDULING_FRAMEWORK__ 
#define MAP_MEM_FLAGS_ALL ( MAP_MEM_FLAGS_USER)
#define HOST_IO_MASTER_PORT 3
#define SQLITE_CONSTRAINT_NOTNULL (SQLITE_CONSTRAINT | (5<<8))
#define MACH_VOUCHER_SELECTOR_EFFECTIVE ((mach_voucher_selector_t)1)
#define _Post_valid_impl_ 
#define _SC_THREAD_PROCESS_SHARED 90
#define __SIZEOF_PTRDIFF_T__ 8
#define _O_RAW _O_BINARY
#define _Outptr_opt_result_bytebuffer_all_(size) _SAL2_Source_(_Outptr_opt_result_bytebuffer_all_, (size), _Out_opt_impl_ _Deref_post2_impl_(__notnull_impl_notref, __bytecount_impl(size)))
#define SQLITE_DESERIALIZE_READONLY 4
#define SEEK_SET 0
#define SQLITE_INDEX_CONSTRAINT_ISNULL 71
#define UNALIGNED 
#define MX_CELL(pBt) ((pBt->pageSize-8)/6)
#define isMalloced(X) (((X)->printfFlags & SQLITE_PRINTF_MALLOCED)!=0)
#define P_DIRTY_ALLOW_IDLE_EXIT 0x00000002
#define IOCPARM_MASK 0x1fff
#define __arm64 1
#define OPFLG_IN1 0x02
#define OPFLG_IN2 0x04
#define OPFLG_IN3 0x08
#define OP_Ne 52
#define VM_REGION_SUBMAP_INFO_V2_COUNT_64 ((mach_msg_type_number_t) (VM_REGION_SUBMAP_INFO_V2_SIZE / sizeof (natural_t)))
#define HOST_VM_INFO_REV2_COUNT HOST_VM_INFO_LATEST_COUNT
#define NOFILE 256
#define MPG_FLAGS_STRICT_REPLY_INVALID_REPLY_PORT (0x02ull << 56)
#define OS_ALWAYS_INLINE __attribute__((__always_inline__))
#define YYNTOKEN 179
#define MADV_DONTNEED POSIX_MADV_DONTNEED
#define __TVOS_14_0 140000
#define _Outref_result_bytebuffer_(s) 
#define ATTR_FILE_RSRCEXTENTS 0x00004000
#define SQLITE_DBSTATUS_CACHE_WRITE 9
#define __FILEW__ _CRT_WIDE(__FILE__)
#define _In_reads_bytes_opt_(s) 
#define SQLITE_CREATE_TEMP_TRIGGER 5
#define _POSIX_IPV6 200112L
#define SQLITE_WIN32_DATA_DIRECTORY_TYPE 1
#define _Deref_pre2_impl_(p1,p2) 
#define SQLITE_DBCONFIG_MAX 1015
#define checkActiveVdbeCnt(x) 
#define _Deref_pre_bytecount_c_(size) _SAL1_1_Source_(_Deref_pre_bytecount_c_, (size), _Deref_pre1_impl_(__notnull_impl_notref) _Deref_pre1_impl_(__bytecount_c_impl(size)) _Pre_valid_impl_)
#define OP_BitNot 110
#define USER_POSIX2_C_BIND 11
#define _Post_z_bytecount_(size) _SAL1_1_Source_(_Post_z_bytecount_, (size), _Post2_impl_(__zterm_impl,__bytecount_impl(size)) _Post_valid_impl_)
#define KERN_USRSTACK32 35
#define _Pre_opt_bytecap_(size) _SAL1_1_Source_(_Pre_opt_bytecap_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__bytecap_impl(size)))
#define _Post_z_bytecount_c_(size) _SAL1_1_Source_(_Post_z_bytecount_c_, (size), _Post2_impl_(__zterm_impl,__bytecount_c_impl(size)) _Post_valid_impl_)
#define THREAD_TIME_CONSTRAINT_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (thread_time_constraint_policy_data_t) / sizeof (integer_t)))
#define MAXTHREADNAMESIZE 64
#define WINDOW_STARTING_NUM 3
#define __LDBL_DIG__ 15
#define PROT_READ 0x01
#define osMmap ((void*(*)(void*,size_t,int,int,int,off_t))aSyscall[22].pCurrent)
#define EV_CLEAR 0x0020
#define EP_Static 0x8000000
#define MINCORE_COPIED 0x40
#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_4(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2,_TType3,_TArg3,_TType4,_TArg4) __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_4_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName ##_s, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3, _TType4, _TArg4)
#define UINT_FAST32_MAX UINT32_MAX
#define O_CREAT 0x00000200
#define _SYS_SYSLIMITS_H_ 
#define _Inout_z_bytecap_x_(size) _SAL1_1_Source_(_Inout_z_bytecap_x_, (size), _Pre_z_bytecap_x_(size) _Post_z_)
#define POLL_OUT 2
#define CPU_SUBTYPE_VAX8500 ((cpu_subtype_t) 8)
#define VM_FLAGS_RANDOM_ADDR 0x0008
#define SF_Resolved 0x00004
#define __deprecated __attribute__((__deprecated__))
#define KERN_USRSTACK64 59
#define P_INMEM 0
#define VOL_CAP_FMT_WRITE_GENERATION_COUNT 0x00100000
#define P4_INT64 (-14)
#define _Ret_writes_to_ptr_(p) 
#define CC_TILDA 25
#define __notnull 
#define ILL_PRVOPC 3
#define TK_PRIMARY 118
#define TK_COLUMNKW 60
#define _SC_XBS5_LP64_OFF64 124
#define __UINT_LEAST64_TYPE__ long long unsigned int
#define __FLT16_EPSILON__ 9.76562500000000000000000000000000000e-4F16
#define WRC_Abort 2
#define THREAD_STATE_FLAVOR_LIST_NEW 128
#define __FLT_HAS_QUIET_NAN__ 1
#define OP_RowSetRead 41
#define SQLITE_QueryFlattener 0x0001
#define _SC_THREAD_ATTR_STACKADDR 82
#define SQLITE_DBSTATUS_MAX 12
#define __deref_opt_inout_bcount_nz(size) _SAL1_Source_(__deref_opt_inout_bcount_nz, (size), __deref_opt_inout_bcount(size))
#define _Pre_z_cap_c_(size) _SAL1_1_Source_(_Pre_z_cap_c_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre2_impl_(__zterm_impl,__cap_c_impl(size)) _Pre_valid_impl_)
#define TMP_MAX_S TMP_MAX
#define nth_valueValueFunc noopValueFunc
#define __dead2 __attribute__((__noreturn__))
#define __FLT_HAS_INFINITY__ 1
#define TAILQ_INIT(head) do { TAILQ_FIRST((head)) = NULL; (head)->tqh_last = &TAILQ_FIRST((head)); QMD_TRACE_HEAD(head); } while (0)
#define BTCF_Incrblob 0x10
#define TASK_EXTMOD_INFO_COUNT (sizeof(task_extmod_info_data_t) / sizeof(natural_t))
#define TK_EXCLUSIVE 9
#define P5_ConstraintUnique 2
#define __ENABLE_LEGACY_MAC_AVAILABILITY 1
#define MATTR_REPLICATE 4
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
#define _NSTREAM_ 512
#define PTRMAP_PAGENO(pBt,pgno) ptrmapPageno(pBt, pgno)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_3(x) 
#define OS_SWIFT_UNAVAILABLE(_msg) 
#define AT_SYMLINK_NOFOLLOW 0x0020
#define BIG_ENDIAN __DARWIN_BIG_ENDIAN
#define OP_DeferredSeek 134
#define O_ASYNC 0x00000040
#define __bcount_opt(size) _SAL1_Source_(__bcount_opt, (size), __bcount(size) __pre_except_maybenull)
#define _Inout_cap_x_(size) _SAL1_1_Source_(_Inout_cap_x_, (size), _Pre_valid_cap_x_(size) _Post_valid_)
#define sqlite3ParserARG_PDECL 
#define _CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES_MEMORY 0
#define KERN_MAXPARTITIONS 23
#define _Deref_inout_z_bytecap_c_(size) _SAL1_1_Source_(_Deref_inout_z_bytecap_c_, (size), _Deref_pre_z_bytecap_c_(size) _Deref_post_z_)
#define _CS_XBS5_ILP32_OFF32_LDFLAGS 21
#define SQLITE_READONLY_CANTLOCK (SQLITE_READONLY | (2<<8))
#define CPU_SUBTYPE_MIPS_R2600 ((cpu_subtype_t) 2)
#define PAGERTRACE(X) 
#define KERN_RPC_TERMINATE_ORPHAN 44
#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_1_1_EX(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SecureFuncName,_HType1,_HArg1,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1) _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_HType1 _HArg1, _SalAttributeDst _DstType *_Dst, _TType1 _TArg1);
#define F_SETSIZE 43
#define SQLITE_OPEN_AUTOPROXY 0x00000020
#define EP_FixedCol 0x000008
#define _SC_MEMORY_PROTECTION 32
#define _SYS_QUEUE_H_ 
#define __UINT_LEAST32_TYPE__ unsigned int
#define MACH_MSG_OOL_VOLATILE_DESCRIPTOR 3
#define INT16_TYPE short int
#define __FLT16_MAX__ 6.55040000000000000000000000000000000e+4F16
#define __deref_opt_in_bcount(size) _SAL1_Source_(__deref_opt_in_bcount, (size), __deref_in_bcount(size) __exceptthat __maybenull)
#define KERN_KDREADTR 10
#define VM_MEMORY_OBJC_DISPATCHERS 34
#define ATTR_CMN_VOLSETMASK 0x00006700
#define _In_count_x_(size) _SAL1_1_Source_(_In_count_x_, (size), _Pre_count_x_(size) _Deref_pre_readonly_)
#define CTL_DEBUG_MAXID 20
#define PLOCK 36
#define MPG_FLAGS_STRICT_REPLY_INVALID_VOUCHER (0x04ull << 56)
#define SEEK_HOLE 3
#define VM_MEMORY_GLSL 66
#define _IRQL_saves_ 
#define POLICY_FIFO_INFO_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_fifo_info)/sizeof(integer_t)))
#define __ARM_ARCH 8
#define UINTMAX_C(x) UINT64_C(x)
#define OPFLAG_SEEKEQ 0x02
#define __deref_opt_in_opt _SAL1_Source_(__deref_opt_in_opt, (), __deref_in_opt __exceptthat __maybenull)
#define NOTE_REAP ((unsigned int)eNoteReapDeprecated )
#define _Kernel_entry_always_ 
#define __inout_nz_opt _SAL1_Source_(__inout_nz_opt, (), __inout_opt)
#define _getwchar_nolock() _getwc_nolock(stdin)
#define DST_MET 4
#define _Deref_pre_opt_z_cap_(size) _SAL1_1_Source_(_Deref_pre_opt_z_cap_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre2_impl_(__zterm_impl,__cap_impl(size)) _Pre_valid_impl_)
#define _DSIGN ((unsigned short)0x8000)
#define osStat ((int(*)(const char*,struct stat*))aSyscall[4].pCurrent)
#define SRCHFS_SKIPINAPPROPRIATE 0x00000080
#define SIGSTOP 17
#define __TVOS_13_0 130000
#define __TVOS_13_3 130300
#define __TVOS_13_4 130400
#define TIOCPKT_FLUSHREAD 0x01
#define _MACH_ARM_THREAD_STATE_H_ 
#define READ_LOCK 1
#define ATTR_CMN_BKUPTIME 0x00002000
#define OS_EXPORT extern __attribute__((__visibility__("default")))
#define __API_DEPRECATED_REP_GET_MACRO(...) 
#define TASK_VM_INFO 22
#define __drv_neverHoldPriorityRegion 
#define _Deref_post2_impl_(p1,p2) 
#define VM_MEMORY_LAYERKIT 51
#define ATTR_CMN_ACCTIME 0x00001000
#define _Pre_opt_valid_bytecap_x_(size) _SAL1_1_Source_(_Pre_opt_valid_bytecap_x_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__bytecap_x_impl(size)) _Pre_valid_impl_)
#define TARGET_CPU_ALPHA 0
#define _MODE_T 
#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_3_EX(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SecureFuncName,_SecureDstType,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2,_TType3,_TArg3) _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3);
#define VFS_CTL_SADDR 0x00010007
#define isfinite(_Val) (fpclassify(_Val) <= 0)
#define WHERE_ORDERBY_MAX 0x0002
#define __in_ecount_opt(size) _SAL1_Source_(__in_ecount_opt, (size), _In_reads_opt_(size))
#define _Prepost_z_ _Pre_z_ _Post_z_
#define SQLITE_CONFIG_LOOKASIDE 13
#define EXC_ARM_FP_UF 4
#define _CRT_INTERNAL_SCANF_SECURECRT (1ULL << 0)
#define SQLITE_CREATE_TEMP_VIEW 6
#define WHERE_COLUMN_IN 0x00000004
#define KMOD_INFO_NAME kmod_info
#define TK_DETACH 40
#define UNIXFILE_PSOW 0x10
#define MACH_RCV_TIMEOUT 0x00000100
#define UIOCCMD(n) _IO('u', n)
#define __out_xcount(size) _SAL1_Source_(__out_xcount, (size), __xcount(size) _Post_ __valid __refparam)
#define _Ret_writes_to_maybenull_(s,c) 
#define _POSIX2_PBS_LOCATE (-1)
#define KERN_ABORTED 14
#define VM_LEDGER_FLAGS (VM_LEDGER_FLAG_NO_FOOTPRINT | VM_LEDGER_FLAG_NO_FOOTPRINT_FOR_DEBUG)
#define TASK_FLAVOR_CONTROL 0
#define signbit(_Val) (_CLASSIFY(_Val, _fdsign, _dsign, _ldsign))
#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_1(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1) __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_1_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName ##_s, _SalAttributeDst, _DstType, _DstType, _Dst, _TType1, _TArg1)
#define SQLITE_FCNTL_JOURNAL_POINTER 28
#define S_IFSOCK 0140000
#define _Post_z_bytecount_x_(size) _SAL1_1_Source_(_Post_z_bytecount_x_, (size), _Post2_impl_(__zterm_impl,__bytecount_x_impl(size)) _Post_valid_impl_)
#define YY_SHIFT_COUNT (542)
#define TASK_VM_INFO_PURGEABLE 23
#define MAXPHYS (64 * 1024)
#define SQLITE_WITHIN(P,S,E) (((uptr)(P)>=(uptr)(S))&&((uptr)(P)<(uptr)(E)))
#define OPFLAG_LENGTHARG 0x40
#define MAP_FILE 0x0000
#define MACH_PORT_QLIMIT_DEFAULT MACH_PORT_QLIMIT_BASIC
#define _Deref_ 
#define S_ISTXT S_ISVTX
#define F_GETCODEDIR 72
#define _Post_maybenull_ _SAL2_Source_(_Post_maybenull_, (), _Post1_impl_(__maybenull_impl))
#define _Writable_bytes_impl_(size) 
#define SQLITE_MAGIC_BUSY 0xf03b7906
#define SQLITE_TRANSACTION 22
#define false 0
#define __inner_fallthrough_dec 
#define _SYS_UCRED_H_ 
#define VM_MEMORY_MALLOC_LARGE_REUSED 9
#define AU_DEFAUDITSID 0
#define TK_WHEN 153
#define SQLITE_FCNTL_SET_LOCKPROXYFILE 3
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#define __OSX_EXTENSION_UNAVAILABLE(_msg) 
#define SQLITE_FCNTL_MMAP_SIZE 18
#define WRC_Continue 0
#define ATTR_FILE_VALIDMASK 0x000037FF
#define F_BARRIERFSYNC 85
#define assert(expression) ((void)0)
#define _Out_opt_capcount_x_(capcount) _SAL1_1_Source_(_Out_opt_capcount_x_, (capcount), _Pre_opt_cap_x_(capcount) _Post_valid_impl_ _Post_count_x_(capcount))
#define _User_ 
#define P4_COLLSEQ (-2)
#define __deref_out_ecount_iterator(size,incr) _SAL1_Source_(__deref_out_ecount_iterator, (size,incr), __inout _Pre_ __deref __elem_writableTo(size) __deref_out_range(==, _Old_(*_Curr_) + incr))
#define VdbeBranchTaken(I,M) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_5(x) 
#define SIOCGIFVLAN _IOWR('i', 127, struct ifreq)
#define SM_LARGE_PAGE 8
#define OS_ALIGNED(n) __attribute__((__aligned__((n))))
#define _WConst_return _CONST_RETURN
#define __field_xcount(size) _SAL1_Source_(__field_xcount, (size), __notnull __inexpressible_writableTo(size))
#define SQLITE_NOMATCH 1
#define WMESGLEN 7
#define NC_InAggFunc 0x0008
#define __UINT16_TYPE__ short unsigned int
#define VOL_CAPABILITIES_RESERVED1 2
#define HW_L1DCACHESIZE 18
#define _ARGMAX 100
#define BTREE_BULKLOAD 0x00000001
#define __kernel_ptr_semantics 
#define CTL_USER_NAMES { { 0, 0 }, { "cs_path", CTLTYPE_STRING }, { "bc_base_max", CTLTYPE_INT }, { "bc_dim_max", CTLTYPE_INT }, { "bc_scale_max", CTLTYPE_INT }, { "bc_string_max", CTLTYPE_INT }, { "coll_weights_max", CTLTYPE_INT }, { "expr_nest_max", CTLTYPE_INT }, { "line_max", CTLTYPE_INT }, { "re_dup_max", CTLTYPE_INT }, { "posix2_version", CTLTYPE_INT }, { "posix2_c_bind", CTLTYPE_INT }, { "posix2_c_dev", CTLTYPE_INT }, { "posix2_char_term", CTLTYPE_INT }, { "posix2_fort_dev", CTLTYPE_INT }, { "posix2_fort_run", CTLTYPE_INT }, { "posix2_localedef", CTLTYPE_INT }, { "posix2_sw_dev", CTLTYPE_INT }, { "posix2_upe", CTLTYPE_INT }, { "stream_max", CTLTYPE_INT }, { "tzname_max", CTLTYPE_INT } }
#define S_IEXEC S_IXUSR
#define _Out_range_(l,h) 
#define SQLITE_EnableView 0x80000000
#define NOTE_FFOR 0x80000000
#define _IRQL_always_function_min_(i) 
#define _Deref_post_bytecap_c_(size) _SAL1_1_Source_(_Deref_post_bytecap_c_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post1_impl_(__bytecap_c_impl(size)))
#define SQLITE_ENABLE_LOCKING_STYLE 1
#define __INT_FAST64_WIDTH__ 64
#define SQLITE_IgnoreChecks 0x00000200
#define SQLITE_UTF8 1
#define _Out_cap_post_count_(cap,count) _SAL1_1_Source_(_Out_cap_post_count_, (cap,count), _Pre_cap_(cap) _Post_valid_impl_ _Post_count_(count))
#define _Pre_z_cap_x_(size) _SAL1_1_Source_(_Pre_z_cap_x_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre2_impl_(__zterm_impl,__cap_x_impl(size)) _Pre_valid_impl_)
#define __analysis_assume(expr) 
#define JT_NATURAL 0x0004
#define _SC_CLOCK_SELECTION 67
#define OP_RowSetAdd 147
#define sqlite3SetMakeRecordP5(A,B) 
#define MAP_MEM_NAMED_REUSE 0x080000
#define _Called_from_function_class_(x) _In_function_class_(x)
#define PragTyp_MODULE_LIST 26
#define __deref_inout_ecount_nz(size) _SAL1_Source_(__deref_inout_ecount_nz, (size), __deref_inout_ecount(size))
#define ATTR_CMN_UUID 0x00800000
#define SQLITE_TESTCTRL_BITVEC_TEST 8
#define __out_z _SAL1_Source_(__out_z, (), __post __valid __refparam __post __nullterminated)
#define USER_POSIX2_FORT_DEV 14
#define ETIME 137
#define _Pre_opt_cap_(size) _SAL1_1_Source_(_Pre_opt_cap_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__cap_impl(size)))
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define SQLITE_TESTCTRL_EXPLAIN_STMT 19
#define VM_MEMORY_ROSETTA_THREAD_CONTEXT 231
#define major(x) ((int32_t)(((u_int32_t)(x) >> 24) & 0xff))
#define __FLT_DIG__ 6
#define _STRUCT_SIGALTSTACK struct __darwin_sigaltstack
#define _SYS_EVENT_H_ 
#define _SC_SS_REPL_MAX 126
#define MACH_SEND_INVALID_MEMORY 0x1000000c
#define MACH_RCV_LARGE_IDENTITY 0x00000008
#define __releases_shared_lock(lock) 
#define TIOCFLUSH _IOW('t', 16, int)
#define DbMaskNonZero(M) (M)!=0
#define VM_MEMORY_MALLOC_SMALL 2
#define TASK_AFFINITY_TAG_INFO_COUNT (sizeof(task_affinity_tag_info_data_t) / sizeof(natural_t))
#define _Pre_opt_z_ _SAL1_1_Source_(_Pre_opt_z_, (), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__zterm_impl) _Pre_valid_impl_)
#define S_IXUSR 0000100
#define _Inout_updates_bytes_all_(s) 
#define VM_MEMORY_JAVA 44
#define S_TYPEISMQ(buf) (0)
#define VM_MEMORY_COREGRAPHICS_XALLOC 58
#define S_IWOTH 0000002
#define SRCHFS_START 0x00000001
#define HAVE_PWRITE 1
#define TK_ESCAPE 58
#define FPE_FLTDIV 1
#define MAC_OS_X_VERSION_10_11_4 101104
#define SQLITE_OPEN_TRANSIENT_DB 0x00000400
#define NOTE_FUNLOCK 0x00000100
#define __drv_acquiresCriticalRegion 
#define ENOTRECOVERABLE 127
#define UINT_FAST8_MAX UINT8_MAX
#define FIRST_EXCEPTION 1
#define VM_MEMORY_ACCOUNTS 98
#define _Ret_opt_bytecap_(size) _SAL1_1_Source_(_Ret_opt_bytecap_, (size), _Ret1_impl_(__maybenull_impl_notref) _Ret1_impl_(__bytecap_impl(size)))
#define TIOCPTYUNLK _IO('t', 82)
#define AUDIT_SEQ 0x0010
#define SQLITE_CONFIG_COVERING_INDEX_SCAN 20
#define sqlite3ParserCTX_PARAM ,pParse
#define SIOCGIFNETMASK _IOWR('i', 37, struct ifreq)
#define __DEFINE_CPP_OVERLOAD_INLINE_NFUNC_0_1_EX(_ReturnType,_ReturnPolicy,_FuncName,_SecureFuncName,_SecureDstType,_DstType,_Dst,_TType1,_TArg1) 
#define DRIVERSPECS_H 
#define ENETUNREACH 118
#define EXDEV 18
#define __out_ecount(size) _SAL1_Source_(__out_ecount, (size), _Out_writes_(size))
#define _SC_PHYS_PAGES 200
#define BSD4_3 1
#define BSD4_4 1
#define S_IREAD S_IRUSR
#define CTLFLAG_SECURE 0x08000000
#define MATH_ERREXCEPT 2
#define __acquires_lock(lock) 
#define AU_IPv4 4
#define THREAD_LATENCY_QOS_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (thread_latency_qos_policy_data_t) / sizeof (integer_t)))
#define VM_MEMORY_DYLD_MALLOC 61
#define sqlite3IsToplevel(p) ((p)->pToplevel==0)
#define _crt_va_start(ap,v) ( ap = (va_list)_ADDRESSOF(v) + _INTSIZEOF(v) )
#define CPUFAMILY_INTEL_NEHALEM 0x6b5a4cd2
#define VFS_CTL_DISC 0x00010008
#define SQLITE_LIMIT_VARIABLE_NUMBER 9
#define _POSIX_TRACE (-1)
#define KERNEL_SECURITY_TOKEN_VALUE { {0, 1} }
#define F_TRANSCODEKEY 75
#define __WINT_TYPE__ int
#define SIOCGLOWAT _IOR('s', 3, int)
#define EXC_MASK_SOFTWARE (1 << EXC_SOFTWARE)
#define P_DIRTY_DEFER 0x00000004
#define __drv_notPointer _SAL1_1_Source_(__drv_notPointer, (), _Pre_ _SA_annotes1(SAL_mayBePointer,__no))
#define _FRND 1
#define MINCORE_REFERENCED_OTHER 0x8
#define BC_DIM_MAX 2048
#define __drv_restoresIRQLGlobal(kind,param) _SAL1_1_Source_(__drv_restoresIRQLGlobal, (kind,param), _IRQL_restores_global_(kind,param))
#define _Ret_z_count_(size) _SAL1_1_Source_(_Ret_z_count_, (size), _Ret1_impl_(__notnull_impl_notref) _Ret2_impl_(__zterm_impl,__count_impl(size)) _Ret_valid_impl_)
#define ENC(db) ((db)->enc)
#define _STRUCT_ARM_LEGACY_DEBUG_STATE struct __arm_legacy_debug_state
#define ENOSPC 28
#define _MACH_DYLIB_INFO_H_ 
#define ENOEXEC 8
#define KERN_MAXPROCPERUID 30
#define FPE_NOOP 0
#define VALID_THREAD_STATE_FLAVOR(x) ((x == ARM_THREAD_STATE) || (x == ARM_VFP_STATE) || (x == ARM_EXCEPTION_STATE) || (x == ARM_DEBUG_STATE) || (x == THREAD_STATE_NONE) || (x == ARM_THREAD_STATE32) || (x == ARM_THREAD_STATE64) || (x == ARM_EXCEPTION_STATE64) || (x == ARM_NEON_STATE) || (x == ARM_NEON_STATE64) || (x == ARM_DEBUG_STATE32) || (x == ARM_DEBUG_STATE64) || (x == ARM_PAGEIN_STATE) || (ARM_STATE_FLAVOR_IS_OTHER_VALID(x)))
#define EOF (-1)
#define _Scanf_s_format_string_ 
#define WO_GT (WO_EQ<<(TK_GT-TK_EQ))
#define ATTR_DIR_DATALENGTH 0x00000020
#define KERN_EXEC 45
#define SPILLFLAG_ROLLBACK 0x02
#define S_ISREG(m) (((m) & S_IFMT) == S_IFREG)
#define MACH_PORT_RIGHT_RECEIVE ((mach_port_right_t) 1)
#define COLFLAG_HASTYPE 0x0004
#define MNT_AUTOMOUNTED 0x00400000
#define TASK_EXC_GUARD_VM_ALL 0x0f
#define SV_ONSTACK SA_ONSTACK
#define __maybenull 
#define TAILQ_CHECK_NEXT(elm,field) 
#define _Post_bytecount_(size) _SAL1_1_Source_(_Post_bytecount_, (size), _Post1_impl_(__bytecount_impl(size)) _Post_valid_impl_)
#define __SIZEOF_INT128__ 16
#define VM_MEMORY_CM_XPC 92
#define __FLT16_MIN__ 6.10351562500000000000000000000000000e-5F16
#define SQLITE_STMTSTATUS_AUTOINDEX 3
#define CPU_SUBTYPE_I386_ALL CPU_SUBTYPE_INTEL(3, 0)
#define __deref_out_ecount_full_opt(size) _SAL1_Source_(__deref_out_ecount_full_opt, (size), __deref_out_ecount_full(size) __post_deref_except_maybenull)
#define __LDBL_MAX_10_EXP__ 308
#define TASK_POWER_INFO_V2_COUNT_OLD ((mach_msg_type_number_t) (sizeof (task_power_info_v2_data_t) - sizeof(uint64_t)*2) / sizeof (natural_t))
#define SQLITE_IOERR_CHECKRESERVEDLOCK (SQLITE_IOERR | (14<<8))
#define _MAX_ENV 32767
#define ctob(x) ((x)<<PGSHIFT)
#define ctod(x) ((x)<<(PGSHIFT-DEV_BSHIFT))
#define PAGER_SYNCHRONOUS_OFF 0x01
#define VOL_CAP_INT_EXTENDED_ATTR 0x00004000
#define ctos(x) (x)
#define _Out_opt_z_cap_m_(mult,size) _SAL1_1_Source_(_Out_opt_z_cap_m_, (mult,size), _Pre_opt_cap_m_(mult,size) _Post_valid_impl_ _Post_z_)
#define MNT_REMOVABLE 0x00000200
#define EDOM 33
#define KERN_PROC_UID 5
#define _PTHREAD_ATTR_T 
#define _SYS__SELECT_H_ 
#define isgreater(x,y) ((_FPCOMPARE(x, y) & _FP_GT) != 0)
#define _Inout_opt_bytecap_(size) _SAL1_1_Source_(_Inout_opt_bytecap_, (size), _Pre_opt_valid_bytecap_(size) _Post_valid_)
#define ENOSTR 125
#define __CLR_OR_THIS_CALL 
#define KERN_POLICY_LIMIT 27
#define P_CHECKOPENEVT 0x00080000
#define YY_ACTTAB_COUNT (1913)
#define USER_BC_DIM_MAX 3
#define __deref_opt_out_ecount_z_opt(size) _SAL1_Source_(__deref_opt_out_ecount_z_opt, (size), __deref_opt_out_ecount_opt(size) __post __deref __nullterminated)
#define _Prepost_opt_valid_ _SAL1_1_Source_(_Prepost_opt_valid_, (), _Pre_opt_valid_ _Post_valid_)
#define TERM_NOPARTIDX 0x2000
#define __API_AVAILABLE(...) 
#define CTL_VFS_NAMES { { "vfsconf", CTLTYPE_STRUCT } }
#define FREAD 0x00000001
#define ESRCH 3
#define SQLITE_CORRUPT_PGNO(P) sqlite3CorruptError(__LINE__)
#define WRITE_UTF16BE(zOut,c) { if( c<=0xFFFF ){ *zOut++ = (u8)((c>>8)&0x00FF); *zOut++ = (u8)(c&0x00FF); }else{ *zOut++ = (u8)(0x00D8 + (((c-0x10000)>>18)&0x03)); *zOut++ = (u8)(((c>>10)&0x003F) + (((c-0x10000)>>10)&0x00C0)); *zOut++ = (u8)(0x00DC + ((c>>8)&0x03)); *zOut++ = (u8)(c&0x00FF); } }
#define SLIST_FOREACH(var,head,field) for ((var) = SLIST_FIRST((head)); (var); (var) = SLIST_NEXT((var), field))
#define _SC_REGEXP 77
#define PPNUM_MAX UINT32_MAX
#define _NLSCMPERROR _CRT_INT_MAX
#define VOL_CAP_INT_CLONE 0x00010000
#define ___MKID(x,y) x ## y
#define SIOCIFDESTROY _IOW('i', 121, struct ifreq)
#define SQLITE_AUTH_USER (SQLITE_AUTH | (1<<8))
#define BAD_ALRMTYPE(t) (((t) &~ TIME_RELATIVE) != 0)
#define __deallocate(kind) _SAL_L_Source_(__deallocate, (kind), _Pre_ __notnull __post_invalid)
#define SIOCGIFCONF _IOWR('i', 36, struct ifconf)
#define SEEK_END 2
#define ATTR_FILE_SETMASK 0x00000020
#define ARM_VFP_STATE 2
#define MPO_STRICT 0x20
#define MAXPHYSIO_WIRED (16 * 1024 * 1024)
#define EXC_MASK_BAD_ACCESS (1 << EXC_BAD_ACCESS)
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_1_1(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_HType1,_HArg1,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1) __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_1_1_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName ##_s, _HType1, _HArg1, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1)
#define MACH_MSGH_BITS_PORTS(bits) ((bits) & MACH_MSGH_BITS_PORTS_MASK)
#define DIRECT_MODE 0
#define OP_IsTrue 88
#define HI(X) ((u64)(X)<<32)
#define ENFILE 23
#define SQLITE_LOCK_PENDING 3
#define SF_WhereBegin 0x80000
#define TASK_ABSOLUTETIME_INFO 1
#define WHERE_LOOP_XFER_SZ offsetof(WhereLoop,nLSlot)
#define _Deref_post_bytecap_x_(size) _SAL1_1_Source_(_Deref_post_bytecap_x_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post1_impl_(__bytecap_x_impl(size)))
#define IN_INDEX_EPH 2
#define _SAL_VERSION 20
#define __DARWIN_OSSwapConstInt16(x) ((__uint16_t)((((__uint16_t)(x) & 0xff00U) >> 8) | (((__uint16_t)(x) & 0x00ffU) << 8)))
#define __DYLDDL_DRIVERKIT_UNAVAILABLE __API_UNAVAILABLE(driverkit)
#define CPU_SUBTYPE_ARM_V6 ((cpu_subtype_t) 6)
#define MACH_RCV_IN_PROGRESS 0x10004001
#define VM_MEMORY_COREUI 76
#define PAGE_MIN_SIZE (1 << PAGE_MIN_SHIFT)
#define TK_ROWS 76
#define SIOCGIFSTATUS _IOWR('i', 61, struct ifstat)
#define SQLITE_OPEN_EXCLUSIVE 0x00000010
#define ENOSYS 40
#define SA_RESTART 0x0002
#define HW_L3SETTINGS 21
#define CPU_TYPE_X86 ((cpu_type_t) 7)
#define KERN_NOT_DEPRESSED 36
#define __DARWIN_OSSwapConstInt32(x) ((__uint32_t)((((__uint32_t)(x) & 0xff000000U) >> 24) | (((__uint32_t)(x) & 0x00ff0000U) >> 8) | (((__uint32_t)(x) & 0x0000ff00U) << 8) | (((__uint32_t)(x) & 0x000000ffU) << 24)))
#define _STDBOOL 
#define _STRUCT_ARM_NEON_STATE struct __darwin_arm_neon_state
#define _FHUGE_EXP (int)(_FMAX * 900L / 1000)
#define VM_PURGABLE_ALL_MASKS (VM_PURGABLE_STATE_MASK | VM_VOLATILE_ORDER_MASK | VM_PURGABLE_ORDERING_MASK | VM_PURGABLE_BEHAVIOR_MASK | VM_VOLATILE_GROUP_MASK | VM_PURGABLE_DEBUG_MASK | VM_PURGABLE_NO_AGING_MASK)
#define __DARWIN_FD_SETSIZE 1024
#define CHARCLASS_NAME_MAX 14
#define _MACH_TASK_SPECIAL_PORTS_H_ 
#define _Post2_impl_(p1,p2) 
#define va_arg _crt_va_arg
#define __LDBL_HAS_INFINITY__ 1
#define SQLITE_MAX_SRCLIST 200
#define __deref_opt_out_bcount_z_opt(size) _SAL1_Source_(__deref_opt_out_bcount_z_opt, (size), __deref_opt_out_bcount_opt(size) __post __deref __nullterminated)
#define CIRCLEQ_HEAD(name,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct name { struct type *cqh_first; struct type *cqh_last; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define ATTR_CMN_FSID 0x00000004
#define WHERE_DISTINCT_ORDERED 2
#define EV_DELETE 0x0002
#define MACH_SEND_INVALID_RT_OOL_SIZE 0x10000015
#define _STRUCT_ARM_EXCEPTION_STATE struct __darwin_arm_exception_state
#define __GETHOSTUUID_H 
#define TIOCOUTQ _IOR('t', 115, int)
#define NB 3
#define TASK_POWER_INFO_COUNT ((mach_msg_type_number_t) (sizeof (task_power_info_data_t) / sizeof (natural_t)))
#define PTHREAD_SCOPE_SYSTEM 1
#define PAGER_WRITER_DBMOD 4
#define EXC_SOFT_SIGNAL 0x10003
#define NN 1
#define CPUFAMILY_INTEL_ICELAKE 0x38435547
#define HAVE_FULLFSYNC 1
#define PTHREAD_PRIO_NONE 0
#define __FP_FAST_FMAF32x 1
#define __DARWIN_ALIGNBYTES32 (sizeof(__uint32_t) - 1)
#define _Pre_impl_ 
#define __FLT16_HAS_DENORM__ 1
#define __DARWIN_NSIG 32
#define __STDC_UTF_32__ 1
#define __INT_FAST8_WIDTH__ 8
#define PROC_FLAG_APPLICATION 0x1000000
#define ATTR_CMN_DOCUMENT_ID 0x00100000
#define SQLITE_TOKEN_QUOTED 0x1
#define VM_SYNC_SYNCHRONOUS ((vm_sync_t) 0x02)
#define OS_COLD __attribute__((__cold__))
#define __FLT32X_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define KERN_NX_PROTECTION 60
#define _INC_FCNTL 
#define _USE_DECLSPECS_FOR_SAL 0
#define ATTR_FILE_CLUMPSIZE 0x00000010
#define SQLITE_IOERR_DELETE (SQLITE_IOERR | (10<<8))
#define BSD 199506
#define EXC_MASK_CRASH (1 << EXC_CRASH)
#define _Maybevalid_ _Maybevalid_impl_
#define WRITE_UTF16LE(zOut,c) { if( c<=0xFFFF ){ *zOut++ = (u8)(c&0x00FF); *zOut++ = (u8)((c>>8)&0x00FF); }else{ *zOut++ = (u8)(((c>>10)&0x003F) + (((c-0x10000)>>10)&0x00C0)); *zOut++ = (u8)(0x00D8 + (((c-0x10000)>>18)&0x03)); *zOut++ = (u8)(c&0x00FF); *zOut++ = (u8)(0x00DC + ((c>>8)&0x03)); } }
#define UTIME_OMIT -2
#define TARGET_CPU_68K 0
#define PTHREAD_MUTEX_POLICY_FAIRSHARE_NP 1
#define FOPEN_MAX 20
#define _Ret_opt_cap_x_(size) _SAL1_1_Source_(_Ret_opt_cap_x_, (size), _Ret1_impl_(__maybenull_impl_notref) _Ret1_impl_(__cap_x_impl(size)))
#define OP_Permutation 86
#define MSIZESHIFT 8
#define __CRTDECL_STDCALL __stdcall
#define VDBE_MAGIC_RESET 0x48fa9f76
#define KERN_KDGETBUF 5
#define ATTR_VOL_VALIDMASK 0xF087FFFF
#define MACH_SEND_INVALID_TYPE 0x1000000f
#define VM_PURGABLE_EMPTY 2
#define TK_REM 107
#define PROC_FLAG_SUPPRESSED 0x800000
#define MEM_IntReal 0x0020
#define MALLOC_PTR_IN_USE_RANGE_TYPE 1
#define PragTyp_ACTIVATE_EXTENSIONS 40
#define _Check_return_impl_ 
#define __deref_out_bcount_nz_opt(size) _SAL1_Source_(__deref_out_bcount_nz_opt, (size), __deref_out_bcount_opt(size))
#define MACH_PORT_INFO_EXT_COUNT ((natural_t) (sizeof(mach_port_info_ext_t)/sizeof(natural_t)))
#define __fallthrough __inner_fallthrough
#define SQLITE_FCNTL_BUSYHANDLER 15
#define TK_TEMP 21
#define _Kernel_acquires_resource_(k) 
#define pcache1LeaveMutex(X) assert((X)->mutex==0)
#define _TRUNCATE ((size_t)-1)
#define _Deref_post_z_cap_c_(size) _SAL1_1_Source_(_Deref_post_z_cap_c_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post2_impl_(__zterm_impl,__cap_c_impl(size)) _Post_valid_impl_)
#define EF_IS_SYNTHETIC 0x00000020
#define etGENERIC 3
#define VOL_CAP_INT_NFSEXPORT 0x00000004
#define MNT_NOBLOCK 0x00020000
#define __deref_opt_inout_ecount(size) _SAL1_Source_(__deref_opt_inout_ecount, (size), __deref_inout_ecount(size) __pre_except_maybenull)
#define LSCALE 1000
#define GUARD_TYPE_VIRT_MEMORY 0x5
#define A_SETSTAT 13
#define VM_FLAGS_RETURN_DATA_ADDR 0x100000
#define TASK_CATEGORY_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (task_category_policy_data_t) / sizeof (integer_t)))
#define THREAD_IDENTIFIER_INFO 4
#define OP_NotFound 28
#define _POSIX_V6_ILP32_OFFBIG __ILP32_OFFBIG
#define __deref_opt_inout_xcount_part(size,length) _SAL1_Source_(__deref_opt_inout_xcount_part, (size,length), __deref_inout_xcount_part(size,length) __exceptthat __maybenull)
#define __typefix(ctype) _SAL1_Source_(__typefix, (ctype), __inner_typefix(ctype))
#define task_get_task_access_port(task,port) (task_get_special_port((task), TASK_ACCESS_PORT, (port)))
#define ATTR_FILE_DATAEXTENTS 0x00000800
#define BTCF_WriteFlag 0x01
#define __DARWIN_ALIGN32(p) ((__darwin_size_t)((__darwin_size_t)(p) + __DARWIN_ALIGNBYTES32) &~ __DARWIN_ALIGNBYTES32)
#define __IOS_AVAILABLE(_vers) 
#define MPO_IMMOVABLE_RECEIVE 0x80
#define HOST_SECURITY_PORT 0
#define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT 0
#define MCLSHIFT 11
#define VM_PURGABLE_SET_STATE ((vm_purgable_t) 0)
#define _SC_SYNCHRONIZED_IO 40
#define VM_BEHAVIOR_PAGEOUT ((vm_behavior_t) 11)
#define __deref_out_opt _SAL1_Source_(__deref_out_opt, (), __deref_out __post_deref_except_maybenull)
#define MACH_VOUCHER_ATTR_KEY_BITS MACH_VOUCHER_ATTR_KEY_USER_DATA
#define _CS_XBS5_LPBIG_OFFBIG_LIBS 34
#define USER_FSIGNATURES_CDHASH_LEN 20
#define ATTR_DIR_SETMASK 0x00000000
#define __API_UNAVAILABLE_BEGIN(...) 
#define SIG_ERR ((void (*)(int))-1)
#define SQLITE_DBCONFIG_TRIGGER_EQP 1008
#define CHILD_MAX 266
#define _At_buffer_impl_(target,iter,bound,annos) 
#define SQLITE_DONE 101
#define __DARWIN_EXTSN(sym) __asm("_" __STRING(sym) __DARWIN_SUF_EXTSN)
#define BTREE_UNORDERED 8
#define __drv_out_deref(annotes) _Post_ __deref _Group_(annotes _SAL_nop_impl_)
#define __CHAR32_TYPE__ unsigned int
#define SQLITE_CONFIG_SMALL_MALLOC 27
#define _Deref_out_z_bytecap_c_(size) _SAL1_1_Source_(_Deref_out_z_bytecap_c_, (size), _Deref_pre_bytecap_c_(size) _Deref_post_z_)
#define KERN_NOT_FOUND 56
#define AQ_MAXHIGH 10000
#define THREAD_DEBUG_INFO_INTERNAL 6
#define TK_ATTACH 32
#define ATTR_VOL_IOBLOCKSIZE 0x00000080
#define AUC_NOAUDIT 2
#define _PTHREAD_RWLOCK_SIG_init 0x2DA8B3B4
#define __exported __attribute__((__visibility__("default")))
#define WINT_MIN 0x0000
#define COLNAME_DATABASE 2
#define TASK_SECURITY_TOKEN 13
#define WRC_Prune 1
#define UINT_LEAST32_MAX UINT32_MAX
#define MADV_FREE_REUSE 8
#define _CRT_INTERNAL_PRINTF_LEGACY_VSPRINTF_NULL_TERMINATION (1ULL << 0)
#define __AVAILABILITY_INTERNAL_DEPRECATED __attribute__((deprecated))
#define _Must_inspect_result_ 
#define SLIST_ENTRY(type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct { struct type *sle_next; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define __out_bcount_part_z_opt(size,length) _SAL1_Source_(__out_bcount_part_z_opt, (size,length), __out_bcount_part_opt(size,length) __post __nullterminated)
#define st_birthtime st_birthtimespec.tv_sec
#define RTLD_NOLOAD 0x10
#define __drv_setsIRQL(irql) 
#define POLL_PRI 5
#define NODEV (dev_t)(-1)
#define HW_FLOATINGPT 11
#define ATTR_FILE_FILETYPE 0x00000040
#define SIGILL 4
#define TK_ROW 75
#define TK_RECURSIVE 72
#define sqlite3_column_database_name16 0
#define ATTR_CMNEXT_SETMASK 0x00000000
#define _Deref_prepost_opt_bytecount_(size) _SAL1_1_Source_(_Deref_prepost_opt_bytecount_, (size), _Deref_pre_opt_bytecount_(size) _Deref_post_opt_bytecount_(size))
#define MACH_MSGH_BITS_IS_COMPLEX(bits) (((bits) & MACH_MSGH_BITS_COMPLEX) != MACH_MSGH_BITS_ZERO)
#define __OSX_AVAILABLE_STARTING(_osx,_ios) 
#define VM_FLAGS_PERMANENT 0x0080
#define _CRT_WIDE(s) _CRT_WIDE_(s)
#define PTHREAD_CANCEL_DISABLE 0x00
#define HOST_PRIV_NULL ((host_priv_t) 0)
#define ENOBUFS 119
#define vdbeAssertFieldCountWithinLimits(A,B,C) 
#define MNT_MULTILABEL 0x04000000
#define _CRT_INTERNAL_LOCAL_SCANF_OPTIONS (*__local_stdio_scanf_options ())
#define __DARWIN_FD_COPY(f,t) bcopy(f, t, sizeof(*(f)))
#define __FLT64_MIN__ 2.22507385850720138309023271733240406e-308F64
#define _O_TEMPORARY 0x0040
#define host_set_launchctl_port(host,port) (host_set_special_port((host), HOST_LAUNCHCTL_PORT, (port)))
#define __AVAILABILITY_INTERNAL__ 
#define SIGINT 2
#define arm_thread_state64_get_pc_fptr(ts) __darwin_arm_thread_state64_get_pc_fptr(ts)
#define O_DIRECTORY 0x00100000
#define UPDATE_IO_STATS_ATOMIC(info,io_size) { OSIncrementAtomic64((SInt64 *)&(info.count)); OSAddAtomic64(io_size, (SInt64 *)&(info.size)); }
#define _Deref_ret_opt_z_ _SAL1_1_Source_(_Deref_ret_opt_z_, (), _Deref_ret1_impl_(__maybenull_impl_notref) _Ret1_impl_(__zterm_impl))
#define _SC_V6_LPBIG_OFFBIG 106
#define VM_MEMORY_JAVASCRIPT_CORE 63
#define task_get_debug_control_port(task,port) (task_get_special_port((task), TASK_DEBUG_CONTROL_PORT, (port)))
#define _Inout_ 
#define __deref_inout_range(lb,ub) _SAL_L_Source_(__deref_inout_range, (lb,ub), __deref_in_range(lb,ub) __deref_out_range(lb,ub))
#define PTRMAP_OVERFLOW1 3
#define PTRMAP_OVERFLOW2 4
#define SQLITE_FILE_HEADER "SQLite format 3"
#define EWOULDBLOCK 140
#define MAP_MEM_FLAGS_MASK 0x00FFFF00
#define _Prepost_opt_count_x_(size) _SAL1_1_Source_(_Prepost_opt_count_x_, (size), _Pre_opt_count_x_(size) _Post_count_x_(size))
#define _No_competing_thread_begin_ 
#define MACH_RCV_SYNC_WAIT 0x00004000
#define KERN_INVALID_CAPABILITY 20
#define S_IXGRP 0000010
#define INCRINIT_NORMAL 0
#define MACH_EXCEPTION_ERRORS 0x40000000
#define __field_range(lb,ub) _SAL_L_Source_(__field_range, (lb,ub), __range(lb,ub))
#define MAXPRI 127
#define VQ_DESIRED_DISK 0x4000
#define MACH_MSGH_BITS_RAISED_IMPORTANCE(bits) (((bits) & MACH_MSGH_BITS_RAISEIMP) != MACH_MSGH_BITS_ZERO)
#define SQLITE_SELECT 21
#define sqlite3ParserARG_SDECL 
#define CURSOR_INVALID 1
#define _U_CHAR 
#define LITTLE_ENDIAN __DARWIN_LITTLE_ENDIAN
#define _PTHREAD_COND_T 
#define __FLT32X_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F32x
#define VisibleRowid(X) (((X)->tabFlags & TF_NoVisibleRowid)==0)
#define __API_DEPRECATED_BEGIN_REP_GET_MACRO 
#define _Outptr_result_maybenull_z_ 
#define MEMORY_OBJECT_IO_SYNC 0x20
#define SQLITE_FCNTL_OVERWRITE 11
#define MACH_MSGH_BITS_LOCAL(bits) (((bits) & MACH_MSGH_BITS_LOCAL_MASK) >> 8)
#define MPO_TG_BLOCK_TRACKING 0x200
#define STR_FUNCTION(zName,nArg,pArg,bNC,xFunc) {nArg, SQLITE_FUNC_SLOCHNG|SQLITE_UTF8|(bNC*SQLITE_FUNC_NEEDCOLL), pArg, 0, xFunc, 0, 0, 0, #zName, }
#define WAGGREGATE(zName,nArg,arg,nc,xStep,xFinal,xValue,xInverse,f) {nArg, SQLITE_UTF8|(nc*SQLITE_FUNC_NEEDCOLL)|f, SQLITE_INT_TO_PTR(arg), 0, xStep,xFinal,xValue,xInverse,#zName, {0}}
#define _L0_C 3
#define _Inout_opt_z_bytecap_c_(size) _SAL1_1_Source_(_Inout_opt_z_bytecap_c_, (size), _Pre_opt_z_bytecap_c_(size) _Post_z_)
#define _SA_annotes1(n,pp1) 
#define SQLITE_DEFAULT_CACHE_SIZE -2000
#define S_ISUID 0004000
#define _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS 35
#define _CRT_NONSTDC_NO_WARNINGS 
#define F_FLUSH_DATA 40
#define _INO64_T 
#define CPU_SUBTYPE_VAX8650 ((cpu_subtype_t) 10)
#define SQLITE_NOMEM 7
#define TK_LAST 84
#define VM_FLAGS_SUPERPAGE_SIZE_2MB (SUPERPAGE_SIZE_2MB<<VM_FLAGS_SUPERPAGE_SHIFT)
#define _Deref_prepost_opt_valid_ _SAL1_1_Source_(_Deref_prepost_opt_valid_, (), _Deref_pre_opt_valid_ _Deref_post_opt_valid_)
#define _Deref_out_z_ _SAL1_1_Source_(_Deref_out_z_, (), _Out_ _Deref_post_z_)
#define BTREE_LARGEST_ROOT_PAGE 4
#define _Acquires_exclusive_lock_(e) 
#define CPU_SUBTYPE_SPARC_ALL ((cpu_subtype_t) 0)
#define EV_ADD 0x0001
#define OP_OffsetLimit 152
#define _CRT_END_C_HEADER __pragma(pack(pop))
#define _Out_opt_z_cap_c_(size) _SAL1_1_Source_(_Out_opt_z_cap_c_, (size), _Pre_opt_cap_c_(size) _Post_valid_impl_ _Post_z_)
#define SQLITE_SYNC_DATAONLY 0x00010
#define OE_Rollback 1
#define sv_onstack sv_flags
#define CPU_TYPE_VAX ((cpu_type_t) 1)
#define _Deref_prepost_z_bytecap_(size) _SAL1_1_Source_(_Deref_prepost_z_bytecap_, (size), _Deref_pre_z_bytecap_(size) _Deref_post_z_bytecap_(size))
#define pager_pagehash(X) 0
#define ARM_DEBUG_STATE 4
#define F_DUPFD_CLOEXEC 67
#define SF_MinMaxAgg 0x01000
#define __WATCHOS_AVAILABLE(_vers) 
#define SQLITE_CONFIG_SQLLOG 21
#define __valid 
#define _Field_size_bytes_part_(s,c) 
#define ENOENT 2
#define _MAX_LTOSTR_BASE2_COUNT (32 + 1)
#define _SYS_IOCTL_H_ 
#define _Strict_type_match_ 
#define HW_BYTEORDER 4
#define MEM_Static 0x0800
#define __UINT32_TYPE__ unsigned int
#define _Pre_bytecount_(size) _SAL1_1_Source_(_Pre_bytecount_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__bytecount_impl(size)) _Pre_valid_impl_)
#define getVarint32(A,B) (u8)((*(A)<(u8)0x80)?((B)=(u32)*(A)),1:sqlite3GetVarint32((A),(u32 *)&(B)))
#define PTF_INTKEY 0x01
#define DB_Empty 0x0004
#define TAILQ_REMOVE(head,elm,field) do { TAILQ_CHECK_NEXT(elm, field); TAILQ_CHECK_PREV(elm, field); if ((TAILQ_NEXT((elm), field)) != NULL) TAILQ_NEXT((elm), field)->field.tqe_prev = (elm)->field.tqe_prev; else { (head)->tqh_last = (elm)->field.tqe_prev; QMD_TRACE_HEAD(head); } *(elm)->field.tqe_prev = TAILQ_NEXT((elm), field); TRASHIT((elm)->field.tqe_next); TRASHIT((elm)->field.tqe_prev); QMD_TRACE_ELEM(&(elm)->field); } while (0)
#define _Readable_elements_impl_(size) 
#define MACH_MSG_SIZE_MAX ((mach_msg_size_t) ~0)
#define MACH_MSGH_BITS_DENAP MACH_MSGH_BITS_RAISEIMP
#define SQLITE_IOERR_RDLOCK (SQLITE_IOERR | (9<<8))
#define SQLITE_CANTOPEN 14
#define TIOCSETAF _IOW('t', 22, struct termios)
#define INT_FAST16_MIN INT32_MIN
#define TIOCSETAW _IOW('t', 21, struct termios)
#define MACH_RCV_BODY_ERROR 0x1000400c
#define P_DIRTY_AGING_IN_PROGRESS 0x00000100
#define __deref_opt_out_bcount_part_opt(size,length) _SAL1_Source_(__deref_opt_out_bcount_part_opt, (size,length), __deref_out_bcount_part_opt(size,length) __pre_except_maybenull)
#define __deref_in_bcount_opt(size) _SAL1_Source_(__deref_in_bcount_opt_, (size), __deref_in_bcount(size) _Pre_ __deref __exceptthat __maybenull)
#define mach_vm_trunc_page(x) ((mach_vm_offset_t)(x) & ~((signed)vm_page_mask))
#define _In_reads_bytes_(s) 
#define TK_RSHIFT 102
#define OP_AggFinal 157
#define SQLITE_DEFAULT_WORKER_THREADS 0
#define __FLT128_EPSILON__ 1.92592994438723585305597794258492732e-34F128
#define _Field_size_bytes_opt_(s) 
#define IsOrdinaryHiddenColumn(X) 0
#define MAP_MEM_USE_DATA_ADDR 0x100000
#define TK_CHECK 120
#define A_OLDGETQCTRL 6
#define __SIZEOF_LONG_LONG__ 8
#define EXCEPTION_DEFAULT 1
#define PragTyp_AUTO_VACUUM 1
#define MAX_TRAILER_SIZE ((mach_msg_size_t)sizeof(mach_msg_max_trailer_t))
#define __XNU_PRIVATE_EXTERN __attribute__((visibility("hidden")))
#define _POSIX_THREAD_KEYS_MAX 128
#define VOL_CAP_INT_COPYFILE 0x00000020
#define __FLT32X_MIN__ 2.22507385850720138309023271733240406e-308F32x
#define _PTHREAD_ONCE_T 
#define MACH_VOUCHER_ATTR_MANAGER_NULL ((mach_voucher_attr_manager_t) 0)
#define TF_64B_DATA 0x00000002
#define QMD_TRACE_HEAD(head) 
#define __TVOS_14_3 140300
#define __TVOS_14_5 140500
#define __TVOS_14_6 140600
#define __TVOS_14_7 140700
#define F_GETSIGSINFO 105
#define EXC_MASK_BREAKPOINT (1 << EXC_BREAKPOINT)
#define __byte_readableTo(size) 
#define __UINT_FAST16_MAX__ 0xffff
#define ATTR_CMN_USERACCESS 0x00200000
#define S_IROTH 0000004
#define OPFLAG_NOCHNG 0x01
#define INT_FAST8_MAX INT8_MAX
#define mach_msg_kind_t mach_port_seqno_t
#define POSIX_MADV_RANDOM 1
#define _Pre_opt_cap_c_one_ _SAL1_1_Source_(_Pre_opt_cap_c_one_, (), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__cap_c_one_notref_impl))
#define _SC_BC_DIM_MAX 10
#define __drv_IoGetDmaAdapter _SAL1_1_Source_(__drv_IoGetDmaAdapter, (), _Kernel_IoGetDmaAdapter_)
#define _OS__OSBYTEORDER_H 
#define VM_PAGE_INFO_BASIC_COUNT ((mach_msg_type_number_t) (sizeof(vm_page_info_basic_data_t)/sizeof(int)))
#define VM_MEMORY_GUARD 31
#define TH_STATE_STOPPED 2
#define MAXSYMLINKS 32
#define WHERE_SEEK_TABLE 0x0400
#define ATTR_CMNEXT_REALFSID 0x00000080
#define _Inout_ptrdiff_count_(size) _SAL1_1_Source_(_Inout_ptrdiff_count_, (size), _Pre_ptrdiff_count_(size))
#define _Inout_opt_z_cap_(size) _SAL1_1_Source_(_Inout_opt_z_cap_, (size), _Pre_opt_z_cap_(size) _Post_z_)
#define INCRINIT_ROOT 2
#define CLOCK_ALARM_MAXRES 5
#define TASK_VM_INFO_REV1_COUNT ((mach_msg_type_number_t) (TASK_VM_INFO_REV2_COUNT - 4))
#define FPE_FLTUND 3
#define SF_SETTABLE 0x3fff0000
#define X_OK (1<<0)
