#define __allocator _SAL_L_Source_(__allocator, (), __inner_allocator)
#define __out_bcount_z(size) _SAL1_Source_(__out_bcount_z, (size), __bcount(size) __post __valid __refparam __post __nullterminated)
#define __analysis_assume_lock_released(lock) 
#define _Deref_post_opt_count_x_(size) _SAL1_1_Source_(_Deref_post_opt_count_x_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post1_impl_(__count_x_impl(size)) _Post_valid_impl_)
#define _Post_readable_byte_size_(s) _Post_ _Readable_bytes_(s) _Post_ _Valid_
#define __inner_possibly_notnullterminated 
#define SQLITE_FCNTL_POWERSAFE_OVERWRITE 13
#define _Inout_updates_all_(s) 
#define __sdv_retrieve_request(r) 
#define SQLITE_MISUSE 21
#define _Out_cap_(size) _SAL1_1_Source_(_Out_cap_, (size), _Pre_cap_(size) _Post_valid_impl_)
#define _CRT_INSECURE_DEPRECATE_MEMORY(_Replacement) 
#define __DBL_MIN_EXP__ (-1021)
#define _Inout_opt_bytecount_(size) _SAL1_1_Source_(_Inout_opt_bytecount_, (size), _Prepost_opt_bytecount_(size))
#define _Deref_post_valid_cap_c_(size) _SAL1_1_Source_(_Deref_post_valid_cap_c_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post1_impl_(__cap_c_impl(size)) _Post_valid_impl_)
#define __LDBL_MANT_DIG__ 53
#define _Dispatch_type_(x) _SAL2_Source_(Dispatch_type_, (x), _SA_annotes1(SAL_functionClassNew, #x))
#define _Null_ 
#define FTS5_TOKENIZE_QUERY 0x0001
#define __deref_opt_inout_xcount_part_opt(size,length) _SAL1_Source_(__deref_inout_xcount_part_opt(size, (size,length), length) __exceptthat __maybenull)
#define _MCRTIMP 
#define _CONST_RETURN 
#define _Success_impl_(expr) 
#define __drv_acquiresResourceGlobal(kind,param) _SAL1_1_Source_(__drv_acquiresResourceGlobal, (kind, param), _Acquires_lock_(param))
#define _Inout_z_bytecount_(size) _SAL1_1_Source_(_Inout_z_bytecount_, (size), _Prepost_z_ _Prepost_bytecount_(size))
#define __inner_control_entrypoint(category) 
#define __success(expr) _SAL1_1_Source_(__success, (expr), _Success_(expr))
#define _Deref_post_count_x_(size) _SAL1_1_Source_(_Deref_post_count_x_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post1_impl_(__count_x_impl(size)) _Post_valid_impl_)
#define __UINT_LEAST16_MAX__ 0xffff
#define __declare_lock_level(level) 
#define __ARM_SIZEOF_WCHAR_T 4
#define _Pre_opt_z_bytecap_(size) _SAL1_1_Source_(_Pre_opt_z_bytecap_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre2_impl_(__zterm_impl,__bytecap_impl(size)) _Pre_valid_impl_)
#define SQLITE_FCNTL_SYNC 21
#define _INTPTR_T_DEFINED 
#define __ATOMIC_ACQUIRE 2
#define __writableTo(size) 
#define __FLT128_MAX_10_EXP__ 4932
#define _Pre_unknown_ 
#define SQLITE_CONSTRAINT_ROWID (SQLITE_CONSTRAINT |(10<<8))
#define __deref_opt_inout_z_opt _SAL1_Source_(__deref_opt_inout_z_opt, (), __deref_opt_inout_opt __pre __deref __nullterminated __post __deref __nullterminated)
#define SQLITE_PREPARE_NORMALIZE 0x02
#define __FLT_MIN__ 1.17549435082228750796873653722224568e-38F
#define __RETURN_POLICY_VOID(_FunctionCall) 
#define __GCC_IEC_559_COMPLEX 2
#define SQLITE_WIN32_TEMP_DIRECTORY_TYPE 2
#define __out_bcount(size) _SAL1_Source_(__out_bcount, (size), _Out_writes_bytes_(size))
#define SQLITE_MUTEX_STATIC_VFS2 12
#define _Out_bytecap_c_(size) _SAL1_1_Source_(_Out_bytecap_c_, (size), _Pre_bytecap_c_(size) _Post_valid_impl_)
#define __notnull 
#define __UINT_LEAST8_TYPE__ unsigned char
#define _Deref_prepost_valid_ _SAL1_1_Source_(_Deref_prepost_valid_, (), _Deref_pre_valid_ _Deref_post_valid_)
#define __inner_assume_validated_dec 
#define _Ret_opt_z_count_(size) _SAL1_1_Source_(_Ret_opt_z_count_, (size), _Ret1_impl_(__maybenull_impl_notref) _Ret2_impl_(__zterm_impl,__count_impl(size)) _Ret_valid_impl_)
#define _In_bytecount_c_(size) _SAL1_1_Source_(_In_bytecount_c_, (size), _Pre_bytecount_c_(size) _Deref_pre_readonly_)
#define __data_entrypoint(category) _SAL_L_Source_(__data_entrypoint, (category), __inner_data_entrypoint(category))
#define _Readable_elements_(s) 
#define SQLITE_DBCONFIG_NO_CKPT_ON_CLOSE 1006
#define _Points_to_data_ 
#define __this_out_data_source(src_sym) _SAL_L_Source_(__this_out_data_source, (src_sym), __inner_this_data_source(#src_sym))
#define __deref_out_nz_opt _SAL1_Source_(__deref_out_nz_opt, (), __deref_out_opt)
#define __analysis_assume_lock_acquired(lock) 
#define SQLITE_CANTOPEN 14
#define _Deref_pre_cap_c_(size) _SAL1_1_Source_(_Deref_pre_cap_c_, (size), _Deref_pre1_impl_(__notnull_impl_notref) _Deref_pre1_impl_(__cap_c_impl(size)))
#define __deref_out_xcount(size) _SAL1_Source_(__deref_out_xcount, (size), __deref_xcount(size) _Post_ __deref __valid __refparam)
#define _Ret_opt_ _SAL1_1_Source_(_Ret_opt_, (), _Ret_opt_valid_)
#define SQLITE_DBSTATUS_CACHE_MISS 8
#define __INTMAX_C(c) c ## L
#define __drv_ret(annotes) _At_(return,annotes _SAL_nop_impl_)
#define _Analysis_assume_lock_not_held_(e) 
#define _SIZE_T_DEFINED 
#define _Out_writes_(s) 
#define SQLITE_IOERR_ACCESS (SQLITE_IOERR | (13<<8))
#define SQLITE_FCNTL_DATA_VERSION 35
#define SQLITE_IOCAP_ATOMIC32K 0x00000080
#define __assume_bound(i) __inner_assume_bound(i)
#define __CHAR_BIT__ 8
#define SQLITE_CONSTRAINT_UNIQUE (SQLITE_CONSTRAINT | (8<<8))
#define __readableTo(extent) 
#define SAL_VERSION_CHECK(_A) _SAL_VERSION_CHECK(_A)
#define _Prepost_opt_z_ _SAL1_1_Source_(_Prepost_opt_z_, (), _Pre_opt_z_ _Post_z_)
#define SQLITE_STATIC ((sqlite3_destructor_type)0)
#define SQLITE_STMTSTATUS_FULLSCAN_STEP 1
#define _Outptr_result_buffer_to_maybenull_(size,count) _SAL2_Source_(_Outptr_result_buffer_to_maybenull_, (size, count), _Out_impl_ _Deref_post3_impl_(__maybenull_impl_notref, __cap_impl(size), __count_impl(count)))
#define _Out_z_bytecap_(size) _SAL1_1_Source_(_Out_z_bytecap_, (size), _Pre_bytecap_(size) _Post_valid_impl_ _Post_z_)
#define ___drv_unit_internal_kernel_driver _SAL_L_Source_(__drv_unit_internal_kernel_driver, (), _SA_annotes0(SAL_internal_kernel_driver))
#define __deref_opt_inout_ecount_z(size) _SAL1_Source_(__deref_opt_inout_ecount_z, (size), __deref_opt_inout_ecount(size) __pre __deref __nullterminated __post __deref __nullterminated)
#define _Field_size_bytes_(s) 
#define __struct_xcount(size) _SAL1_Source_(__struct_xcount, (size), __inexpressible_writableTo(size))
#define __UINT8_MAX__ 0xff
#define SQLITE_DESERIALIZE_RESIZEABLE 2
#define _Pre_opt_cap_x_(size) _SAL1_1_Source_(_Pre_opt_cap_x_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__cap_x_impl(size)))
#define SQLITE_INDEX_CONSTRAINT_ISNOTNULL 70
#define _Deref_post_count_(size) _SAL1_1_Source_(_Deref_post_count_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post1_impl_(__count_impl(size)) _Post_valid_impl_)
#define _Inout_bytecount_(size) _SAL1_1_Source_(_Inout_bytecount_, (size), _Prepost_bytecount_(size))
#define _Inout_updates_bytes_to_(s,c) 
#define __deref_out_xcount_opt(size) _SAL1_Source_(__deref_out_xcount_opt, (size), __deref_out_xcount(size) _Post_ __deref __exceptthat __maybenull)
#define _Prepost_bytecount_(size) _SAL1_1_Source_(_Prepost_bytecount_, (size), _Pre_bytecount_(size) _Post_bytecount_(size))
#define _CRTEXP_PURE _CRTEXP
#define _In_opt_bytecount_(size) _SAL1_1_Source_(_In_opt_bytecount_, (size), _Pre_opt_bytecount_(size) _Deref_pre_readonly_)
#define _In_bound_impl_ 
#define __USER_LABEL_PREFIX__ _
#define __inout_z_opt _SAL1_Source_(__inout_z_opt, (), __inout_opt __pre __nullterminated __post __nullterminated)
#define __WINT_MAX__ 0x7fffffff
#define __deref_out_bcount_part(size,length) _SAL1_Source_(__deref_out_bcount_part, (size,length), _Outptr_result_bytebuffer_to_(size,length))
#define SQLITE_MUTEX_STATIC_PRNG 5
#define _Printf_format_string_impl_ 
#define __field_nullterminated _SAL1_Source_(__field_nullterminated, (), __nullterminated)
#define __deref_inout_bcount_opt(size) _SAL1_Source_(__deref_inout_bcount_opt, (size), __deref_inout_bcount(size) __pre_deref_except_maybenull __post_deref_except_maybenull)
#define __deref_opt_out_xcount(size) _SAL1_Source_(__deref_opt_out_xcount, (size), __deref_out_xcount(size) __exceptthat __maybenull)
#define _WCTYPE_T_DEFINED 
#define __inner_data_source(src_raw) 
#define SQLITE_FCNTL_LAST_ERRNO 4
#define NO_COMPETING_THREAD_END __pragma(warning(pop))
#define __inout_bcount_z_opt(size) _SAL1_Source_(__inout_bcount_z_opt, (size), __inout_bcount_opt(size))
#define _USE_32BIT_TIME_T 
#define SQLITE_TESTCTRL_FAULT_INSTALL 9
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_ARGLIST(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_VFuncName,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2) __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_ARGLIST_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _VFuncName, _VFuncName ##_s, _DstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2)
#define __out_ecount_full(size) _SAL1_Source_(__out_ecount_full, (size), _Out_writes_all_(size))
#define SQLITE_IOERR_DELETE_NOENT (SQLITE_IOERR | (23<<8))
#define __deref_in_ecount_iterator(size,incr) _SAL1_Source_(__deref_in_ecount_iterator, (size,incr), __inout _Pre_ __deref __elem_readableTo(size) __deref_out_range(==, _Old_(*_Curr_) + incr))
#define _Notnull_impl_ 
#define __deallocate_opt(kind) _SAL_L_Source_(__deallocate_opt, (kind), _Pre_ __maybenull __post_invalid)
#define __encoded_pointer _SAL_L_Source_(__encoded_pointer, (), __inner_encoded)
#define _Post_bytecount_x_(size) _SAL1_1_Source_(_Post_bytecount_x_, (size), _Post1_impl_(__bytecount_x_impl(size)) _Post_valid_impl_)
#define __prefast_operator_new_throws 
#define SQLITE_DBCONFIG_ENABLE_LOAD_EXTENSION 1005
#define _Deref_pre_opt_z_cap_x_(size) _SAL1_1_Source_(_Deref_pre_opt_z_cap_x_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre2_impl_(__zterm_impl,__cap_x_impl(size)) _Pre_valid_impl_)
#define __drv_acquiresExclusiveResourceGlobal(kind,param) 
#define _Deref_prepost_opt_bytecap_x_(size) _SAL1_1_Source_(_Deref_prepost_opt_bytecap_x_, (size), _Deref_pre_opt_bytecap_x_(size) _Deref_post_opt_bytecap_x_(size))
#define _PTRDIFF_T_DEFINED 
#define __user_code 
#define SQLITE_MUTEX_STATIC_MEM 3
#define __deref_inout_xcount_full(size) _SAL1_Source_(__deref_inout_xcount_full, (size), __deref_inout_xcount_part(size,size))
#define __WCHAR_MAX__ 0x7fffffff
#define _Outptr_result_bytebuffer_to_(s,c) 
#define _MRTIMP2_NPURE 
#define _Inout_defensive_(a) 
#define SQLITE_CHECKPOINT_PASSIVE 0
#define __CONSTANT_CFSTRINGS__ 1
#define _Pre_opt_z_bytecap_x_(size) _SAL1_1_Source_(_Pre_opt_z_bytecap_x_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre2_impl_(__zterm_impl,__bytecap_x_impl(size)) _Pre_valid_impl_)
#define __out_ecount_part_z_opt(size,length) _SAL1_Source_(__out_ecount_part_z_opt, (size,length), __out_ecount_part_opt(size,length) __post __nullterminated)
#define __drv_in_deref(annotes) _Pre_ __deref _Group_(annotes _SAL_nop_impl_)
#define SQLITE_STATUS_SCRATCH_SIZE 8
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_2_0(_ReturnType,_FuncName,_HType1,_HArg1,_HType2,_HArg2,_DstType,_Dst) 
#define __deref_inout_xcount_full_opt(size) _SAL1_Source_(__deref_inout_xcount_full_opt, (size), __deref_inout_xcount_full(size) _Pre_ __deref __exceptthat __maybenull _Post_ __deref __exceptthat __maybenull)
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8 1
#define __interlocked 
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define _Deref_prepost_opt_bytecount_x_(size) _SAL1_1_Source_(_Deref_prepost_opt_bytecount_x_, (size), _Deref_pre_opt_bytecount_x_(size) _Deref_post_opt_bytecount_x_(size))
#define _Post_notnull_ _SAL2_Source_(_Post_notnull_, (), _Post1_impl_(__notnull_impl))
#define _Analysis_assume_same_lock_(e) 
#define _Analysis_assume_nullterminated_(s) 
#define __GCC_IEC_559 2
#define _Deref_pre_invalid_ _SAL1_1_Source_(_Deref_pre_invalid_, (), _Deref_pre1_impl_(__notvalid_impl))
#define __deref_volatile _SAL_L_Source_(__deref_volatile, (), __deref __volatile)
#define _Inout_opt_bytecap_c_(size) _SAL1_1_Source_(_Inout_opt_bytecap_c_, (size), _Pre_opt_valid_bytecap_c_(size) _Post_valid_)
#define SQLITE_TESTCTRL_BYTEORDER 22
#define _Deref_pre_z_ _SAL1_1_Source_(_Deref_pre_z_, (), _Deref_pre1_impl_(__notnull_impl_notref) _Deref_pre1_impl_(__zterm_impl) _Pre_valid_impl_)
#define __range_min(a,b) _SAL_L_Source_(__range_min, (a,b), __range(==, a < b ? a : b))
#define __FLT32X_DECIMAL_DIG__ 17
#define _Deref_pre_bytecount_x_(size) _SAL1_1_Source_(_Deref_pre_bytecount_x_, (size), _Deref_pre1_impl_(__notnull_impl_notref) _Deref_pre1_impl_(__bytecount_x_impl(size)) _Pre_valid_impl_)
#define _MRTIMP2_NPURE_FUNCTION(type) _MRTIMP2_NPURE type _MRTIMP2_NPURE_CALLING_CONVENTION
#define __range(lb,ub) _SAL_L_Source_(__range, (lb,ub), __inner_range(lb,ub))
#define __inner_adt_add_prop(adt,prop) 
#define _Inout_updates_opt_z_(s) 
#define __FLT_EVAL_METHOD__ 0
#define SPECSTRINGS_H 
#define _Deref_post_opt_z_cap_x_(size) _SAL1_1_Source_(_Deref_post_opt_z_cap_x_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post2_impl_(__zterm_impl,__cap_x_impl(size)) _Post_valid_impl_)
#define __deref_inout_ecount_iterator(size,incr) _SAL1_Source_(__deref_inout_ecount_iterator, (size,incr), __inout _Pre_ __deref __elem_readableTo(size) _Pre_ __deref __elem_writableTo(size) __deref_out_range(==, _Old_(*_Curr_) + incr))
#define SQLITE_IOERR_BLOCKED (SQLITE_IOERR | (11<<8))
#define _Ret_opt_z_ _SAL1_1_Source_(_Ret_opt_z_, (), _Ret2_impl_(__maybenull_impl,__zterm_impl) _Ret_valid_impl_)
#define _Inout_opt_ptrdiff_count_(size) _SAL1_1_Source_(_Inout_opt_ptrdiff_count_, (size), _Pre_opt_ptrdiff_count_(size))
#define SQLITE_CREATE_VTABLE 29
#define __FLT64_DECIMAL_DIG__ 17
#define _Out_writes_bytes_all_opt_(s) 
#define __drv_restoresIRQLGlobal(kind,param) _SAL1_1_Source_(__drv_restoresIRQLGlobal, (kind,param), _IRQL_restores_global_(kind,param))
#define _Deref_pre_opt_z_bytecap_x_(size) _SAL1_1_Source_(_Deref_pre_opt_z_bytecap_x_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre2_impl_(__zterm_impl,__bytecap_x_impl(size)) _Pre_valid_impl_)
#define _Ret_maybenull_ 
#define _Deref_prepost_opt_valid_cap_x_(size) _SAL1_1_Source_(_Deref_prepost_opt_valid_cap_x_, (size), _Deref_pre_opt_valid_cap_x_(size) _Deref_post_opt_valid_cap_x_(size))
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define CSALCAT1(x,y) 
#define __deref_ecount_opt(size) _SAL1_Source_(__deref_ecount_opt, (size), __deref_ecount(size) __post_deref_except_maybenull)
#define __source_code_content(typ) 
#define _Out_opt_z_bytecapcount_(capcount) _SAL1_1_Source_(_Out_opt_z_bytecapcount_, (capcount), _Pre_opt_bytecap_(capcount) _Post_valid_impl_ _Post_z_bytecount_(capcount))
#define _Out_bytecapcount_x_(capcount) _SAL1_1_Source_(_Out_bytecapcount_x_, (capcount), _Pre_bytecap_x_(capcount) _Post_valid_impl_ _Post_bytecount_x_(capcount))
#define __clrcall __cdecl
#define _Deref_post_bytecount_x_(size) _SAL1_1_Source_(_Deref_post_bytecount_x_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post1_impl_(__bytecount_x_impl(size)) _Post_valid_impl_)
#define __inner_encoded 
#define SQLITE_FCNTL_TEMPFILENAME 16
#define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES 0
#define SQLITE_TESTCTRL_ISKEYWORD 16
#define SQLITE_ERROR 1
#define _Deref_opt_out_opt_z_ _SAL1_1_Source_(_Deref_opt_out_opt_z_, (), _Out_opt_ _Deref_post_opt_z_)
#define __UINT_FAST32_TYPE__ unsigned int
#define _Outptr_result_buffer_all_maybenull_(size) _SAL2_Source_(_Outptr_result_buffer_all_maybenull_, (size), _Out_impl_ _Deref_post2_impl_(__maybenull_impl_notref, __count_impl(size)))
#define _Post_maybenull_ _SAL2_Source_(_Post_maybenull_, (), _Post1_impl_(__maybenull_impl))
#define _INC_STDARG 
#define __deref_out_bcount_opt(size) _SAL1_Source_(__deref_out_bcount_opt, (size), __deref_out_bcount(size) __post_deref_except_maybenull)
#define __UINT_FAST64_MAX__ 0xffffffffffffffffULL
#define __SIG_ATOMIC_TYPE__ int
#define __field_xcount_full_opt(size) _SAL1_Source_(__field_xcount_full_opt, (size), __field_xcount_part_opt(size,size))
#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_0_GETS(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_DstType,_Dst) _CRT_INSECURE_DEPRECATE(_FuncName ##_s) _DeclSpec _ReturnType __cdecl _FuncName(_DstType *_Dst);
#define SQLITE_CONFIG_SINGLETHREAD 1
#define _Out_ptrdiff_cap_(size) _SAL1_1_Source_(_Out_ptrdiff_cap_, (size), _Pre_ptrdiff_cap_(size) _Post_valid_impl_)
#define _SAL_nop_impl_ X
#define _Deref_pre_opt_bytecount_(size) _SAL1_1_Source_(_Deref_pre_opt_bytecount_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre1_impl_(__bytecount_impl(size)) _Pre_valid_impl_)
#define __DBL_MIN_10_EXP__ (-307)
#define SQLITE_CORRUPT_SEQUENCE (SQLITE_CORRUPT | (2<<8))
#define _Deref_post_valid_cap_x_(size) _SAL1_1_Source_(_Deref_post_valid_cap_x_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post1_impl_(__cap_x_impl(size)) _Post_valid_impl_)
#define _Pre_cap_c_one_ _SAL1_1_Source_(_Pre_cap_c_one_, (), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__cap_c_one_notref_impl))
#define _Out_writes_opt_(s) 
#define __FINITE_MATH_ONLY__ 0
#define SQLITE_CONSTRAINT 19
#define SQLITE_READONLY_RECOVERY (SQLITE_READONLY | (1<<8))
#define SQLITE_CONFIG_URI 17
#define SQLITE_CONSTRAINT_FUNCTION (SQLITE_CONSTRAINT | (4<<8))
#define __FLT32X_MAX_EXP__ 1024
#define __guarded_by(lock) 
#define _Deref_post_opt_bytecount_x_(size) _SAL1_1_Source_(_Deref_post_opt_bytecount_x_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post1_impl_(__bytecount_x_impl(size)) _Post_valid_impl_)
#define _SECURECRT_FILL_BUFFER_PATTERN 0xFE
#define _Deref_post_bytecap_(size) _SAL1_1_Source_(_Deref_post_bytecap_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post1_impl_(__bytecap_impl(size)))
#define __nullterminated _SAL1_Source_(__nullterminated, (), _Null_terminated_)
#define __deref_inout_ecount_part_opt(size,length) _SAL1_Source_(__deref_inout_ecount_part_opt, (size,length), __deref_inout_ecount_part(size,length) __pre_deref_except_maybenull __post_deref_except_maybenull)
#define SQLITE_FCNTL_ROLLBACK_ATOMIC_WRITE 33
#define _Deref_prepost_cap_x_(size) _SAL1_1_Source_(_Deref_prepost_cap_x_, (size), _Deref_pre_cap_x_(size) _Deref_post_cap_x_(size))
#define SQLITE_EXTERN extern
#define SQLITE_READONLY_ROLLBACK (SQLITE_READONLY | (3<<8))
#define _Inout_bytecap_c_(size) _SAL1_1_Source_(_Inout_bytecap_c_, (size), _Pre_valid_bytecap_c_(size) _Post_valid_)
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __GNUC_PATCHLEVEL__ 0
#define SQLITE_OPEN_SHAREDCACHE 0x00020000
#define _SAL1_Source_(Name,args,annotes) _SA_annotes3(SAL_name, #Name, "", "1") _Group_(annotes _SAL_nop_impl_)
#define __FLT32_HAS_DENORM__ 1
#define SQLITE_READ 20
#define _Always_impl_(annos) 
#define _Pre_valid_bytecap_c_(size) _SAL1_1_Source_(_Pre_valid_bytecap_c_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__bytecap_c_impl(size)) _Pre_valid_impl_)
#define __drv_mustHoldGlobal(kind,param) _SAL1_1_Source_(__drv_mustHoldGlobal, (kind, param), _Requires_lock_held_(param))
#define _ADDRESSOF(v) ( &(v) )
#define __deref_out_ecount_opt(size) _SAL1_Source_(__deref_out_ecount_opt, (size), __deref_out_ecount(size) __post_deref_except_maybenull)
#define _Deref_in_range_impl_(min,max) 
#define SQLITE_STMTSTATUS_VM_STEP 4
#define _In_bytecount_(size) _SAL1_1_Source_(_In_bytecount_, (size), _Pre_bytecount_(size) _Deref_pre_readonly_)
#define __UINT_FAST8_MAX__ 0xff
#define _IRQL_requires_min_(i) 
#define __deref_inout_ecount_z_opt(size) _SAL1_Source_(__deref_inout_ecount_z_opt, (size), __deref_inout_ecount_opt(size) __pre __deref __nullterminated __post __deref __nullterminated)
#define _In_bytecount_x_(size) _SAL1_1_Source_(_In_bytecount_x_, (size), _Pre_bytecount_x_(size) _Deref_pre_readonly_)
#define SQLITE3_TEXT 3
#define _Requires_shared_lock_held_(e) 
#define _Pre_opt_valid_ _Pre_maybenull_ _Pre_ _Valid_
#define __FLT32_MAX_10_EXP__ 38
#define SQLITE_DBCONFIG_ENABLE_QPSG 1007
#define _Deref_ret_bound_ _SAL1_1_Source_(_Deref_ret_bound_, (), _Deref_ret_bound_impl_)
#define _WCHAR_T_DEFINED 
#define _Analysis_noreturn_ 
#define __deref_opt_inout_bcount_full_opt(size) _SAL1_Source_(__deref_opt_inout_bcount_full_opt, (size), __deref_inout_bcount_full_opt(size) __pre_except_maybenull)
#define _Post_satisfies_(e) 
#define SQLITE_OPEN_FULLMUTEX 0x00010000
#define __INT8_C(c) c
#define _CRT_OBSOLETE(_NewItem) _CRT_DEPRECATE_TEXT("This function or variable has been superceded by newer library or operating system functionality. Consider using " #_NewItem " instead. See online help for details.")
#define _Deref_pre_cap_x_(size) _SAL1_1_Source_(_Deref_pre_cap_x_, (size), _Deref_pre1_impl_(__notnull_impl_notref) _Deref_pre1_impl_(__cap_x_impl(size)))
#define SQLITE_DBSTATUS_LOOKASIDE_MISS_FULL 6
#define __INT_LEAST8_WIDTH__ 8
#define SQLITE_OPEN_AUTOPROXY 0x00000020
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffULL
#define SQLITE_ACCESS_EXISTS 0
#define _In_reads_opt_(s) 
#define __out_nz _SAL1_Source_(__out_nz, (), __post __valid __refparam)
#define _Scanf_format_string_params_(x) 
#define _Pre_count_(size) _SAL1_1_Source_(_Pre_count_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__count_impl(size)) _Pre_valid_impl_)
#define _Pre_z_bytecap_(size) _SAL1_1_Source_(_Pre_z_bytecap_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre2_impl_(__zterm_impl,__bytecap_impl(size)) _Pre_valid_impl_)
#define __requires_no_locks_held 
#define _Field_size_bytes_full_opt_(s) 
#define SQLITE_SCANSTAT_NVISIT 1
#define __out_bound _SAL_L_Source_(__out_bound, (), _Post_ __inner_bound)
#define _Deref_pre_z_cap_c_(size) _SAL1_1_Source_(_Deref_pre_z_cap_c_, (size), _Deref_pre1_impl_(__notnull_impl_notref) _Deref_pre2_impl_(__zterm_impl,__cap_c_impl(size)) _Pre_valid_impl_)
#define __SHRT_MAX__ 0x7fff
#define SQLITE_CHECKPOINT_TRUNCATE 3
#define _Ret_writes_maybenull_z_(s) 
#define SQLITE_FCNTL_GET_LOCKPROXYFILE 2
#define __out_bcount_part(size,length) _SAL1_Source_(__out_bcount_part, (size,length), _Out_writes_bytes_to_(size,length))
#define _Deref_prepost_opt_count_(size) _SAL1_1_Source_(_Deref_prepost_opt_count_, (size), _Deref_pre_opt_count_(size) _Deref_post_opt_count_(size))
#define _Deref_prepost_opt_z_ _SAL1_1_Source_(_Deref_prepost_opt_z_, (), _Deref_pre_opt_z_ _Deref_post_opt_z_)
#define __LDBL_MAX__ 1.79769313486231570814527423731704357e+308L
#define __ARM_FEATURE_IDIV 1
#define _In_defensive_(a) 
#define SQLITE_TESTCTRL_BENIGN_MALLOC_HOOKS 10
#define __FLT64X_MAX_10_EXP__ 4932
#define _Outptr_opt_result_z_ 
#define __DEFINE_CPP_OVERLOAD_INLINE_NFUNC_0_2_EX(_ReturnType,_ReturnPolicy,_FuncName,_SecureFuncName,_SecureDstType,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2) 
#define _Writes_bytes_and_advances_ptr_(size) _SAL2_Source_(_Writes_bytes_and_advances_ptr, (size), _At_((void*)_Curr_, _Inout_) _At_(_Curr_, _Pre_writable_byte_size_(size) _Post_writable_byte_size_(size) _Post_satisfies_(((char*)_Curr_) - ((char*)_Old_(_Curr_)) == _Old_(size) - size)) _At_(_Old_(_Curr_), _Post_readable_byte_size_(_Old_(size) - size)))
#define __out_ecount_z(size) _SAL1_Source_(__out_ecount_z, (size), __ecount(size) __post __valid __refparam __post __nullterminated)
#define _Deref_pre3_impl_(p1,p2,p3) 
#define __FLT64_NORM_MAX__ 1.79769313486231570814527423731704357e+308F64
#define __in_bcount_opt(size) _SAL1_Source_(__in_bcount_opt, (size), _In_reads_bytes_opt_(size))
#define __deref_out_bcount_full_opt(size) _SAL1_Source_(__deref_out_bcount_full_opt, (size), __deref_out_bcount_full(size) __post_deref_except_maybenull)
#define __LDBL_IS_IEC_60559__ 2
#define __deref_inout_xcount_part(size,length) _SAL1_Source_(__deref_inout_xcount_part, (size,length), __deref_inout_xcount(size) _Pre_ __deref __inexpressible_readableTo(length) _Post_ __deref __inexpressible_readableTo(length))
#define _Out_z_bytecap_c_(size) _SAL1_1_Source_(_Out_z_bytecap_c_, (size), _Pre_bytecap_c_(size) _Post_valid_impl_ _Post_z_)
#define __ARM_FP 14
#define __drv_valueIs(arglist) _SAL1_1_Source_(__drv_valueIs, (arglist), _Post_ _SA_annotes1(SAL_return,arglist))
#define __FLT64X_IS_IEC_60559__ 2
#define _Pre_cap_for_(param) _SAL1_1_Source_(_Pre_cap_for_, (param), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__cap_for_impl(param)))
#define SQLITE_CREATE_TEMP_INDEX 3
#define SQLITE_TESTCTRL_SORTER_MMAP 24
#define _Outptr_result_maybenull_ 
#define __FLT64X_HAS_QUIET_NAN__ 1
#define __out_bcount_nz_opt(size) _SAL1_Source_(__out_bcount_nz_opt, (size), __out_bcount_opt(size) __post __nullterminated)
#define __deref_out_ecount_z(size) _SAL1_Source_(__deref_out_ecount_z, (size), __deref_out_ecount(size) __post __deref __nullterminated)
#define __WINT_TYPE__ int
#define _Check_return_opt_ 
#define SQLITE_CONFIG_MULTITHREAD 2
#define __inout_bcount_opt(size) _SAL1_Source_(__inout_bcount_opt, (size), __inout_bcount(size) __pre_except_maybenull)
#define __UINT_LEAST8_MAX__ 0xff
#define __FLT128_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F128
#define SQLITE_FCNTL_LOCKSTATE 1
#define SQLITE_ACCESS_READ 2
#define __field_xcount_opt(size) _SAL1_Source_(__field_xcount_opt, (size), __maybenull __inexpressible_writableTo(size))
#define __APPLE_CC__ 1
#define __out_ecount_nz(size) _SAL1_Source_(__out_ecount_nz, (size), __ecount(size) __post __valid __refparam)
#define __UINTMAX_TYPE__ long unsigned int
#define _Inout_z_ 
#define __in_ecount_or_z(c) _SAL1_Source_(__in_ecount_or_z, (c), _When_(_String_length_(_Curr_) < (c), __in_z) _When_(_String_length_(_Curr_) >= (c), __in_ecount(c)))
#define __deref_opt_inout_bcount_part_opt(size,length) _SAL1_Source_(__deref_opt_inout_bcount_part_opt, (size,length), __deref_inout_bcount_part_opt(size,length) __pre_except_maybenull)
#define __inout_bcount_nz(size) _SAL1_Source_(__inout_bcount_nz, (size), __inout_bcount(size))
#define SQLITE_ERROR_SNAPSHOT (SQLITE_ERROR | (3<<8))
#define __drv_savesIRQL _SAL1_1_Source_(__drv_savesIRQL, (), _IRQL_saves_)
#define SQLITE_VERSION "3.30.1"
#define SQLITE_LIMIT_EXPR_DEPTH 3
#define __FLT_EVAL_METHOD_TS_18661_3__ 0
#define _Out_writes_bytes_all_(s) 
#define __drv_KMDF 
#define __SAL_H_VERSION 180000000
#define __drv_callbackType(kind) _SAL1_1_Source_(__drv_callbackType, (kind), _SA_annotes1(SAL_callbackType, #kind))
#define __out_nz_opt _SAL1_Source_(__out_nz_opt, (), __post __valid __refparam __post_except_maybenull_)
#define _Guarded_by_(e) 
#define _Deref_pre_z_bytecap_c_(size) _SAL1_1_Source_(_Deref_pre_z_bytecap_c_, (size), _Deref_pre1_impl_(__notnull_impl_notref) _Deref_pre2_impl_(__zterm_impl,__bytecap_c_impl(size)) _Pre_valid_impl_)
#define __STDC_WANT_SECURE_LIB__ 1
#define _Deref_post_opt_valid_bytecap_c_(size) _SAL1_1_Source_(_Deref_post_opt_valid_bytecap_c_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post1_impl_(__bytecap_c_impl(size)) _Post_valid_impl_)
#define __UINT32_MAX__ 0xffffffffU
#define _Inout_opt_bytecap_x_(size) _SAL1_1_Source_(_Inout_opt_bytecap_x_, (size), _Pre_opt_valid_bytecap_x_(size) _Post_valid_)
#define __post_bcount(size) _SAL1_Source_(__post_bcount, (size), _Post_ __byte_writableTo(size))
#define _Inout_opt_count_x_(size) _SAL1_1_Source_(_Inout_opt_count_x_, (size), _Prepost_opt_count_x_(size))
#define __lock_level_order(a,b) 
#define __DBL_DENORM_MIN__ ((double)4.94065645841246544176568792868221372e-324L)
#define __field_ecount_part_opt(size,init) _SAL1_Source_(__field_ecount_part_opt, (size,init), __maybenull __elem_writableTo(size) __elem_readableTo(init))
#define SQLITE_DBSTATUS_CACHE_USED_SHARED 11
#define _ERRCODE_DEFINED 
#define __AARCH64_CMODEL_SMALL__ 1
#define SQLITE_BUSY_RECOVERY (SQLITE_BUSY | (1<<8))
#define __QUALIFIER(type,fun) 
#define _CRT_NONSTDC_NO_DEPRECATE 
#define __range_max(a,b) _SAL_L_Source_(__range_max, (a,b), __range(==, a > b ? a : b))
#define _CRT_INSECURE_DEPRECATE(_Replacement) 
#define _Outref_result_bytebuffer_all_(s) 
#define _Field_size_bytes_full_(s) 
#define __deref_inout_nz _SAL1_Source_(__deref_inout_nz, (), __deref_inout)
#define _Deref_opt_out_z_ _SAL1_1_Source_(_Deref_opt_out_z_, (), _Out_opt_ _Deref_post_z_)
#define _Maybenull_impl_ 
#define __field_ecount(size) _SAL1_Source_(__field_ecount, (size), __notnull __elem_writableTo(size))
#define __LDBL_MAX_EXP__ 1024
#define _Deref_opt_out_ _SAL1_1_Source_(_Deref_opt_out_, (), _Out_opt_ _Deref_post_valid_)
#define SQLITE_DENY 1
#define _Ret_bytecount_(size) _SAL1_1_Source_(_Ret_bytecount_, (size), _Ret1_impl_(__notnull_impl_notref) _Ret1_impl_(__bytecount_impl(size)) _Ret_valid_impl_)
#define _User_always_ 
#define __INT_FAST32_WIDTH__ 32
#define _Post_invalid_ _Post_ _Deref_ _Notvalid_
#define _Function_class_(n) 
#define __in_ecount_nz(size) _SAL1_Source_(__in_ecount_nz, (size), __in_ecount(size))
#define _Out_z_capcount_(capcount) _SAL1_1_Source_(_Out_z_capcount_, (capcount), _Pre_cap_(capcount) _Post_valid_impl_ _Post_z_count_(capcount))
#define _Deref_post_maybenull_ _SAL1_1_Source_(_Deref_post_maybenull_, (), _Deref_post1_impl_(__maybenull_impl_notref))
#define __FLT128_MIN_EXP__ (-16381)
#define SQLITE_IOERR_GETTEMPPATH (SQLITE_IOERR | (25<<8))
#define _Inout_opt_z_count_c_(size) _SAL1_1_Source_(_Inout_opt_z_count_c_, (size), _Prepost_z_ _Prepost_opt_count_c_(size))
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_3(_ReturnType,_FuncName,_HType1,_HArg1,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2,_TType3,_TArg3) 
#define _In_opt_z_bytecount_c_(size) _SAL1_1_Source_(_In_opt_z_bytecount_c_, (size), _Pre_opt_z_ _Pre_opt_bytecount_c_(size) _Deref_pre_readonly_)
#define _In_opt_ptrdiff_count_(size) _SAL1_1_Source_(_In_opt_ptrdiff_count_, (size), _Pre_opt_ptrdiff_count_(size) _Deref_pre_readonly_)
#define _Deref_prepost_opt_cap_(size) _SAL1_1_Source_(_Deref_prepost_opt_cap_, (size), _Deref_pre_opt_cap_(size) _Deref_post_opt_cap_(size))
#define __deref_opt_ecount_opt(size) _SAL1_Source_(__deref_opt_ecount_opt, (size), __deref_ecount_opt(size) __pre_except_maybenull)
#define SQLITE_CONFIG_SORTERREF_SIZE 28
#define _Deref_inout_bound_ _SAL1_1_Source_(_Deref_inout_bound_, (), _Deref_in_bound_ _Deref_out_bound_)
#define __kernel_entry _SAL_L_Source_(__kernel_entry, (), __inner_control_entrypoint(UserToKernel))
#define _Deref_post_z_bytecap_c_(size) _SAL1_1_Source_(_Deref_post_z_bytecap_c_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post2_impl_(__zterm_impl,__bytecap_c_impl(size)) _Post_valid_impl_)
#define _COM_Outptr_opt_ 
#define _In_reads_(s) 
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SalAttributeDst,_DstType,_Dst) __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName ##_s, _SalAttributeDst, _DstType, _Dst)
#define _Deref_prepost_bytecount_(size) _SAL1_1_Source_(_Deref_prepost_bytecount_, (size), _Deref_pre_bytecount_(size) _Deref_post_bytecount_(size))
#define _Inout_opt_z_bytecount_c_(size) _SAL1_1_Source_(_Inout_opt_z_bytecount_c_, (size), _Prepost_z_ _Prepost_opt_bytecount_c_(size))
#define _Pre_opt_cap_c_(size) _SAL1_1_Source_(_Pre_opt_cap_c_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__cap_c_impl(size)))
#define __FLT128_MIN_10_EXP__ (-4931)
#define __FLT32X_IS_IEC_60559__ 2
#define _CRTIMP2_PURE_FUNCTION(type) _CRTIMP2_PURE type _CRTIMP2_PURE_CALLING_CONVENTION
#define _Deref_prepost_valid_bytecap_(size) _SAL1_1_Source_(_Deref_prepost_valid_bytecap_, (size), _Deref_pre_valid_bytecap_(size) _Deref_post_valid_bytecap_(size))
#define __INT_LEAST16_WIDTH__ 16
#define _Out_opt_bytecap_post_bytecount_(cap,count) _SAL1_1_Source_(_Out_opt_bytecap_post_bytecount_, (cap,count), _Pre_opt_bytecap_(cap) _Post_valid_impl_ _Post_bytecount_(count))
#define SQLITE_IOERR 10
#define __inner_adt_transfer_prop(arg) 
#define __drv_releasesCancelSpinLock 
#define _Out_opt_z_bytecap_(size) _SAL1_1_Source_(_Out_opt_z_bytecap_, (size), _Pre_opt_bytecap_(size) _Post_valid_impl_ _Post_z_)
#define __SCHAR_MAX__ 0x7f
#define __FLT128_MANT_DIG__ 113
#define _Inout_opt_z_bytecap_x_(size) _SAL1_1_Source_(_Inout_opt_z_bytecap_x_, (size), _Pre_opt_z_bytecap_x_(size) _Post_z_)
#define __DBL_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define _Inout_updates_bytes_to_opt_(s,c) 
#define _COM_Outptr_result_maybenull_ 
#define __deref_opt_inout_bcount_full(size) _SAL1_Source_(__deref_opt_inout_bcount_full, (size), __deref_inout_bcount_full(size) __pre_except_maybenull)
#define FTS5_TOKENIZE_PREFIX 0x0002
#define __WCHAR_MIN__ (-__WCHAR_MAX__ - 1)
#define __deref_opt_bcount(size) _SAL1_Source_(__deref_opt_bcount, (size), __deref_bcount(size) __pre_except_maybenull)
#define __deref_out_nz _SAL1_Source_(__deref_out_nz, (), __deref_out)
#define _Post_count_(size) _SAL1_1_Source_(_Post_count_, (size), _Post1_impl_(__count_impl(size)) _Post_valid_impl_)
#define _Out_writes_to_ptr_opt_(p) 
#define SQLITE_TESTCTRL_NEVER_CORRUPT 20
#define __deref_opt_inout_xcount(size) _SAL1_Source_(__deref_opt_inout_xcount, (size), __deref_inout_xcount(size) __exceptthat __maybenull)
#define __INT64_C(c) c ## LL
#define _Pre_cap_c_(size) _SAL1_1_Source_(_Pre_cap_c_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__cap_c_impl(size)))
#define SQLITE_LOCK_EXCLUSIVE 4
#define __inexpressible_readableTo(size) 
#define __field_xcount_full(size) _SAL1_Source_(__field_xcount_full, (size), __field_xcount_part(size,size))
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define SQLITE_DBSTATUS_CACHE_SPILL 12
#define __deref_opt_inout_ecount_full(size) _SAL1_Source_(__deref_opt_inout_ecount_full, (size), __deref_inout_ecount_full(size) __pre_except_maybenull)
#define _Deref_post_opt_z_bytecap_c_(size) _SAL1_1_Source_(_Deref_post_opt_z_bytecap_c_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post2_impl_(__zterm_impl,__bytecap_c_impl(size)) _Post_valid_impl_)
#define __deref_out_ecount_part_opt(size,length) _SAL1_Source_(__deref_out_ecount_part_opt, (size,length), __deref_out_ecount_part(size,length) __post_deref_except_maybenull)
#define __FLT_MAX__ 3.40282346638528859811704183484516925e+38F
#define _Field_size_part_opt_(s,c) 
#define _crt_va_arg(ap,t) ( *(t *)((ap += _INTSIZEOF(t)) - _INTSIZEOF(t)) )
#define _Deref_pre_valid_ _SAL1_1_Source_(_Deref_pre_valid_, (), _Deref_pre1_impl_(__notnull_impl_notref) _Pre_valid_impl_)
#define _TIME_T_DEFINED 
#define _Inout_opt_z_ 
#define _Outptr_result_bytebuffer_all_(size) _SAL2_Source_(_Outptr_result_bytebuffer_all_, (size), _Out_impl_ _Deref_post2_impl_(__notnull_impl_notref, __bytecount_impl(size)))
#define _COM_Outptr_ 
#define SQLITE_TESTCTRL_IMPOSTER 25
#define _Deref_post_cap_x_(size) _SAL1_1_Source_(_Deref_post_cap_x_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post1_impl_(__cap_x_impl(size)))
#define ___drv_unit_user_code _SAL_L_Source_(___drv_unit_user_code, (), _SA_annotes0(SAL_nokernel) _SA_annotes0(SAL_nodriver))
#define _Pre_writable_byte_size_(s) _Pre_ _Writable_bytes_(s)
#define __drv_innerReleasesGlobal(kind,param) _SAL1_1_Source_(__drv_InnerReleasesGlobal, (#kind, param\t), _Post_ _SA_annotes2(SAL_releaseGlobal,#kind, param\t))
#define _Outref_result_bytebuffer_all_maybenull_(s) 
#define _Maybe_raises_SEH_exception_ 
#define __drv_clearDoInit(yesNo) _SAL1_1_Source_(__drv_clearDoInit, (yesNo), _Kernel_clear_do_init_(yesNo))
#define __deref_out_ecount(size) _SAL1_Source_(__deref_out_ecount, (size), _Outptr_result_buffer_(size))
#define SQLITE_CREATE_INDEX 1
#define _Null_terminated_impl_ 
#define _Points_to_data_impl_ 
#define __deref_inout_bcount_full(size) _SAL1_Source_(__deref_inout_bcount_full, (size), __deref_inout_bcount_part(size,size))
#define _Requires_lock_not_held_(e) 
#define _Write_guarded_by_(e) 
#define __SIZEOF_INT__ 4
#define __override __inner_override
#define SQLITE_MUTEX_RECURSIVE 1
#define __post 
#define _Post_satisfies_impl_(expr) 
#define _In_reads_to_ptr_z_(p) 
#define _IRQL_raises_(i) 
#define SQLITE_SCANSTAT_NAME 3
#define __drv_nonConstant _SAL1_1_Source_(__drv_nonConstant, (), _Notliteral_)
#define SQLITE_DROP_TEMP_TABLE 13
#define __out_bcount_full(size) _SAL1_Source_(__out_bcount_full, (size), _Out_writes_bytes_all_(size))
#define __drv_preferredFunction(func,why) _SAL_L_Source_(__drv_preferredFunction, (func,why), _Pre_ _SA_annotes2(SAL_preferredFunction, func, why))
#define SQLITE_FCNTL_PDB 30
#define __DECLARE_CPP_OVERLOAD_INLINE_FUNC_0_2_EX(_ReturnType,_ReturnPolicy,_FuncName,_SecureFuncName,_SecureDstType,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2) _CRT_INSECURE_DEPRECATE(_SecureFuncName) __inline _ReturnType __CRTDECL _FuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2)
#define _Post_equals_last_error_ _SAL2_Source_(_Post_equals_last_error_, (), _Post_satisfies_(_Curr_ != 0))
#define __FLT32X_MANT_DIG__ 53
#define __in_nz _SAL1_Source_(__in_nz, (), __in)
#define __inner_adt_prop(adt,prop) 
#define __drv_strictTypeMatch(mode) _SAL1_1_Source_(__drv_strictTypeMatch, (mode), _Pre_ _SA_annotes1(SAL_strictTypeMatch,mode))
#define __deref_opt_in_xcount_opt(size) _SAL1_Source_(__deref_opt_in_xcount_opt, (size), __deref_in_xcount_opt(size) __exceptthat __maybenull)
#define SQLITE_TESTCTRL_ALWAYS 13
#define _Ret_writes_to_(s,c) 
#define _Outptr_opt_result_buffer_to_(s,c) 
#define _Pre_opt_z_cap_c_(size) _SAL1_1_Source_(_Pre_opt_z_cap_c_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre2_impl_(__zterm_impl,__cap_c_impl(size)) _Pre_valid_impl_)
#define SQLITE_MISMATCH 20
#define SQLITE_DBSTATUS_SCHEMA_USED 2
#define SQLITE_CDECL 
#define SQLITE_SERIALIZE_NOCOPY 0x001
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_1_1_EX(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SecureFuncName,_HType1,_HArg1,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1) _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_HType1 _HArg1, _SalAttributeDst _DstType *_Dst, _TType1 _TArg1);
#define __deref_opt_out_ecount(size) _SAL1_Source_(__deref_opt_out_ecount, (size), __deref_out_ecount(size) __pre_except_maybenull)
#define _Out_opt_z_cap_(size) _SAL1_1_Source_(_Out_opt_z_cap_, (size), _Pre_opt_cap_(size) _Post_valid_impl_ _Post_z_)
#define _AGLOBAL 
#define __deref_out _SAL1_Source_(__deref_out, (), _Outptr_)
#define _Ret_maybenull_z_ 
#define __nothrow 
#define _Pre_z_cap_(size) _SAL1_1_Source_(_Pre_z_cap_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre2_impl_(__zterm_impl,__cap_impl(size)) _Pre_valid_impl_)
#define _Satisfies_impl_(expr) 
#define SQLITE_TESTCTRL_SCRATCHMALLOC 17
#define SQLITE_CONFIG_MMAP_SIZE 22
#define __deref_out_ecount_part(size,length) _SAL1_Source_(__deref_out_ecount_part, (size,length), _Outptr_result_buffer_to_(size,length))
#define __FLT64X_EPSILON__ 1.92592994438723585305597794258492732e-34F64x
#define __deref_in_range(lb,ub) _SAL_L_Source_(__deref_in_range, (lb,ub), _Pre_ __deref __inner_range(lb,ub))
#define _Ret_count_x_(size) _SAL1_1_Source_(_Ret_count_x_, (size), _Ret1_impl_(__notnull_impl_notref) _Ret1_impl_(__count_x_impl(size)) _Ret_valid_impl_)
#define __drv_NDIS 
#define SQLITE_REINDEX 27
#define __kernel_code 
#define _Out_opt_z_cap_c_(size) _SAL1_1_Source_(_Out_opt_z_cap_c_, (size), _Pre_opt_cap_c_(size) _Post_valid_impl_ _Post_z_)
#define __drv_interlocked _SAL1_1_Source_(__drv_interlocked, (), _Interlocked_operand_)
#define __STDC_HOSTED__ 1
#define SQLITE_API 
#define _Memory_origin_(context) 
#define _IRQL_requires_max_(i) 
#define _Pre_bytecount_c_(size) _SAL1_1_Source_(_Pre_bytecount_c_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__bytecount_c_impl(size)) _Pre_valid_impl_)
#define FTS5_TOKEN_COLOCATED 0x0001
#define _Deref_out_z_cap_c_(size) _SAL1_1_Source_(_Deref_out_z_cap_c_, (size), _Deref_pre_cap_c_(size) _Deref_post_z_)
#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_0_EX(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SecureFuncName,_SalAttributeDst,_DstType,_Dst) _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst);
#define _Out_z_bytecap_x_(size) _SAL1_1_Source_(_Out_z_bytecap_x_, (size), _Pre_bytecap_x_(size) _Post_valid_impl_ _Post_z_)
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1_EX(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SecureFuncName,_SecureDstType,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1) _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1);
#define _Out_opt_z_cap_x_(size) _SAL1_1_Source_(_Out_opt_z_cap_x_, (size), _Pre_opt_cap_x_(size) _Post_valid_impl_ _Post_z_)
#define _Post_count_c_(size) _SAL1_1_Source_(_Post_count_c_, (size), _Post1_impl_(__count_c_impl(size)) _Post_valid_impl_)
#define _In_z_ 
#define SQLITE_DROP_TABLE 11
#define _Field_size_part_(s,c) 
#define _Field_z_ _SAL2_Source_(_Field_z_, (), _Null_terminated_)
#define __deref_opt_inout_ecount_part(size,length) _SAL1_Source_(__deref_opt_inout_ecount_part, (size,length), __deref_inout_ecount_part(size,length) __pre_except_maybenull)
#define __inner_fallthrough 
#define _Deref_post1_impl_(p1) 
#define SQLITE_STATUS_PAGECACHE_USED 1
#define __specstrings 
#define _Pre_cap_m_(mult,size) _SAL1_1_Source_(_Pre_cap_m_, (mult,size), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__mult_impl(mult,size)))
#define __inout_z _SAL1_Source_(__inout_z, (), _Inout_z_)
#define __post_deref_except_maybenull 
#define _WConst_return _CONST_RETURN
#define _Out_opt_z_capcount_(capcount) _SAL1_1_Source_(_Out_opt_z_capcount_, (capcount), _Pre_opt_cap_(capcount) _Post_valid_impl_ _Post_z_count_(capcount))
#define SQLITE_PRAGMA 19
#define __deref_opt_out_nz_opt _SAL1_Source_(__deref_opt_out_nz_opt, (), __deref_opt_out_opt)
#define __deref_in_opt _SAL1_Source_(__deref_in_opt, (), __deref_in _Pre_ __deref __exceptthat __maybenull)
#define __drv_isObjectPointer _SAL1_1_Source_(__drv_isObjectPointer, (), _Points_to_data_)
#define _Pre_opt_bytecount_(size) _SAL1_1_Source_(_Pre_opt_bytecount_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__bytecount_impl(size)) _Pre_valid_impl_)
#define _Pre_valid_cap_c_(size) _SAL1_1_Source_(_Pre_valid_cap_c_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__cap_c_impl(size)) _Pre_valid_impl_)
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0_EX(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SecureFuncName,_SalAttributeDst,_DstType,_Dst) _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst);
#define __DBL_DIG__ 15
#define __FLT32_DIG__ 6
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_0(_ReturnType,_FuncName,_DstType,_Dst) 
#define SQLITE_UTF16BE 3
#define _Translates_NTSTATUS_to_HRESULT_(status) _SAL2_Source_(_Translates_NTSTATUS_to_HRESULT_, (status), _Always_( _Post_equal_to_((HRESULT)(status | FACILITY_NT_BIT))))
#define _SAL1_1_Source_(Name,args,annotes) _SA_annotes3(SAL_name, #Name, "", "1.1") _Group_(annotes _SAL_nop_impl_)
#define _CRTIMP_ALT 
#define _Outref_result_buffer_maybenull_(s) 
#define _SAL2_Source_(Name,args,annotes) _SA_annotes3(SAL_name, #Name, "", "2") _Group_(annotes _SAL_nop_impl_)
#define SQLITE_OPEN_MASTER_JOURNAL 0x00004000
#define __FLT_EPSILON__ 1.19209289550781250000000000000000000e-7F
#define SQLITE_FLOAT 2
#define __SHRT_WIDTH__ 16
#define __in_bcount(size) _SAL1_Source_(__in_bcount, (size), _In_reads_bytes_(size))
#define CONCURRENCYSAL_H 
#define SQLITE_REPLACE 5
#define _Writable_elements_(s) 
#define __deref_opt_inout_bcount_nz(size) _SAL1_Source_(__deref_opt_inout_bcount_nz, (size), __deref_opt_inout_bcount(size))
#define __inout_ecount_full_opt(size) _SAL1_Source_(__inout_ecount_full_opt, (size), __inout_ecount_full(size) __pre_except_maybenull)
#define __out_z_opt _SAL1_Source_(__out_z_opt, (), __post __valid __refparam __post __nullterminated __pre_except_maybenull)
#define __inner_range(lb,ub) 
#define _Deref_pre_opt_count_c_(size) _SAL1_1_Source_(_Deref_pre_opt_count_c_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre1_impl_(__count_c_impl(size)) _Pre_valid_impl_)
#define _Ret_z_ 
#define __FLT32_IS_IEC_60559__ 2
#define SQLITE_CONFIG_WIN32_HEAPSIZE 23
#define _PRAGMA_DETECT_MISMATCH(name,value) __pragma(comment(linker, "/FAILIFMISMATCH:\"" _PRAGMA_DETECT_MISMATCH_STRING0(name) "=" _PRAGMA_DETECT_MISMATCH_STRING0(value) "\""))
#define SQLITE_DETACH 25
#define _Deref_out_opt_ _SAL1_1_Source_(_Deref_out_opt_, (), _Out_ _Deref_post_opt_valid_)
#define _Writes_and_advances_ptr_(size) _SAL2_Source_(_Writes_and_advances_ptr_, (size), _At_((void*)_Curr_, _Inout_) _At_(_Curr_, _Pre_writable_size_(size) _Post_writable_size_(size) _Post_satisfies_(_Curr_ - _Old_(_Curr_) == _Old_(size) - size)) _At_(_Old_(_Curr_), _Post_readable_size_(_Old_(size) - size)))
#define SQLITE_TRACE_STMT 0x01
#define _Deref_post_opt_valid_bytecap_x_(size) _SAL1_1_Source_(_Deref_post_opt_valid_bytecap_x_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post1_impl_(__bytecap_x_impl(size)) _Post_valid_impl_)
#define __inout_ecount_z(size) _SAL1_Source_(__inout_ecount_z, (size), _Inout_updates_z_(size))
#define _Ret_writes_bytes_to_maybenull_(s,c) 
#define __file_parser_library(typ) 
#define __LDBL_MIN__ 2.22507385850720138309023271733240406e-308L
#define __STDC_UTF_16__ 1
#define _Deref_pre_z_bytecap_x_(size) _SAL1_1_Source_(_Deref_pre_z_bytecap_x_, (size), _Deref_pre1_impl_(__notnull_impl_notref) _Deref_pre2_impl_(__zterm_impl,__bytecap_x_impl(size)) _Pre_valid_impl_)
#define SQLITE_DBCONFIG_RESET_DATABASE 1009
#define __DBL_IS_IEC_60559__ 2
#define __out_ecount_nz_opt(size) _SAL1_Source_(__out_ecount_nz_opt, (size), __out_ecount_opt(size) __post __nullterminated)
#define _Deref_out_opt_z_ _SAL1_1_Source_(_Deref_out_opt_z_, (), _Out_ _Deref_post_opt_z_)
#define _Deref2_pre1_impl_(p1) 
#define __field_bcount(size) _SAL1_Source_(__field_bcount, (size), __notnull __byte_writableTo(size))
#define __FLT16_HAS_QUIET_NAN__ 1
#define __drv_innerNeverHoldGlobal(kind,param) _SAL_L_Source_(__drv_innterNeverHoldGlobal, (#kind, param\t), _Pre_ _SA_annotes2(SAL_neverHoldGlobal, #kind, param\t))
#define _Pre_accessible_bytes_(context,expr) 
#define __out_bcount_part_z(size,length) _SAL1_Source_(__out_bcount_part_z, (size,length), __out_bcount_part(size,length) __post __nullterminated)
#define SQLITE_FCNTL_COMMIT_PHASETWO 22
#define _Out_opt_ptrdiff_cap_(size) _SAL1_1_Source_(_Out_opt_ptrdiff_cap_, (size), _Pre_opt_ptrdiff_cap_(size) _Post_valid_impl_)
#define __deref_opt_in_bcount_opt(size) _SAL1_Source_(__deref_opt_in_bcount_opt, (size), __deref_in_bcount_opt(size) __exceptthat __maybenull)
#define _Post_valid_impl_ 
#define SQLITE_FULL 13
#define SQLITE_MUTEX_STATIC_APP1 8
#define SQLITE_LAST_ERRNO SQLITE_FCNTL_LAST_ERRNO
#define __analysis_noreturn 
#define __strong 
#define _Out_writes_to_ptr_(p) 
#define _Deref_ret_bound_impl_ 
#define _Deref_post_opt_count_c_(size) _SAL1_1_Source_(_Deref_post_opt_count_c_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post1_impl_(__count_c_impl(size)) _Post_valid_impl_)
#define __ARM_SIZEOF_MINIMAL_ENUM 4
#define SQLITE_CONFIG_HEAP 8
#define _Out_writes_bytes_(s) 
#define SQLITE_IOERR_COMMIT_ATOMIC (SQLITE_IOERR | (30<<8))
#define _Pre_maybenull_ _Pre_ _Maybenull_
#define _Out_capcount_(capcount) _SAL1_1_Source_(_Out_capcount_, (capcount), _Pre_cap_(capcount) _Post_valid_impl_ _Post_count_(capcount))
#define _Deref_post_opt_count_(size) _SAL1_1_Source_(_Deref_post_opt_count_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post1_impl_(__count_impl(size)) _Post_valid_impl_)
#define __FLT64X_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F64x
#define FTS5_TOKENIZE_AUX 0x0008
#define __deref_opt_out_ecount_full_opt(size) _SAL1_Source_(__deref_opt_out_ecount_full_opt, (size), __deref_out_ecount_full_opt(size) __pre_except_maybenull)
#define __FP_FAST_FMA 1
#define _Out_bytecap_(size) _SAL1_1_Source_(_Out_bytecap_, (size), _Pre_bytecap_(size) _Post_valid_impl_)
#define _CRTIMP2_PURE_DESTRUCTOR _CRTIMP2_PURE _CRTIMP2_MEMBER_FUNCTION_CALLING_CONVENTION
#define SQLITE_INDEX_CONSTRAINT_NE 68
#define _Ret_reallocated_bytes_(before,size) _Reallocation_function_(_Curr_, before, size)
#define SQLITE_IOERR_FSTAT (SQLITE_IOERR | (7<<8))
#define _In_reads_to_ptr_opt_(p) 
#define _VA_LIST_DEFINED 
#define __FLT32X_HAS_INFINITY__ 1
#define _CRTIMP_PURE_TYPEINFO _CRTIMP_PURE
#define __INT32_MAX__ 0x7fffffff
#define _CRT_UNUSED(x) (void)x
#define SQLITE_SCANSTAT_EST 2
#define _IRQL_restores_ 
#define __out_ecount(size) _SAL1_Source_(__out_ecount, (size), _Out_writes_(size))
#define __inner_out_validated(typ_raw) 
#define __has_lock_level(level) 
#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_1_ARGLIST(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_VFuncName,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1) __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_1_ARGLIST_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName ##_s, _VFuncName, _VFuncName ##_s, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1)
#define __deref_inout_bcount(size) _SAL1_Source_(__deref_inout_bcount, (size), __deref_inout __pre __deref __byte_writableTo(size) __post _Notref_ __deref __byte_writableTo(size))
#define _IRQL_saves_global_(k,s) 
#define __FLT16_DIG__ 3
#define SQLITE_OPEN_READWRITE 0x00000002
#define SQLITE_LOCKED_SHAREDCACHE (SQLITE_LOCKED | (1<<8))
#define __INT_WIDTH__ 32
#define __SIZEOF_LONG__ 8
#define _Inout_updates_z_(s) 
#define __deref_inout_bcount_full_opt(size) _SAL1_Source_(__deref_inout_bcount_full_opt, (size), __deref_inout_bcount_full(size) __pre_deref_except_maybenull __post_deref_except_maybenull)
#define SQLITE_IOERR_SEEK (SQLITE_IOERR | (22<<8))
#define __PRIMOP(type,fun) 
#define _Ret_bound_ _SAL1_1_Source_(_Ret_bound_, (), _Ret_bound_impl_)
#define __APPLE__ 1
#define _crt_va_end(ap) ( ap = (va_list)0 )
#define __UINT16_C(c) c
#define SQLITE_FORMAT 24
#define SQLITE_TRACE_PROFILE 0x02
#define _Ret_z_bytecount_(size) _SAL1_1_Source_(_Ret_z_bytecount_, (size), _Ret1_impl_(__notnull_impl_notref) _Ret2_impl_(__zterm_impl,__bytecount_impl(size)) _Ret_valid_impl_)
#define _Pre_cap_x_(size) _SAL1_1_Source_(_Pre_cap_x_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__cap_x_impl(size)))
#define SQLITE_DIRECTONLY 0x000080000
#define __DECIMAL_DIG__ 17
#define _Out_defensive_(a) 
#define SQLITE_UTF16LE 2
#define __class_code_content(typ) 
#define _Deref_post_opt_z_bytecap_x_(size) _SAL1_1_Source_(_Deref_post_opt_z_bytecap_x_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post2_impl_(__zterm_impl,__bytecap_x_impl(size)) _Post_valid_impl_)
#define _Outref_result_maybenull_ 
#define SQLITE_CONFIG_PCACHE 14
#define __drv_completionType(kindlist) _SAL1_1_Source_(__drv_completionType, (kindlist), _SA_annotes1(SAL_completionType, #kindlist))
#define _MRTIMP2_FUNCTION(type) _MRTIMP2 type _MRTIMP2_CALLING_CONVENTION
#define SQLITE_WARNING_AUTOINDEX (SQLITE_WARNING | (1<<8))
#define __FLT64_EPSILON__ 2.22044604925031308084726333618164062e-16F64
#define SQLITE_IOCAP_ATOMIC1K 0x00000004
#define _In_reads_opt_z_(s) 
#define _Deref_prepost_z_ _SAL1_1_Source_(_Deref_prepost_z_, (), _Deref_pre_z_ _Deref_post_z_)
#define __INT16_MAX__ 0x7fff
#define _Deref_ret_range_(lb,ub) _SAL2_Source_(_Deref_ret_range_, (lb,ub), _Deref_ret_range_impl_(lb,ub))
#define __FLT128_IS_IEC_60559__ 2
#define _Notvalid_impl_ 
#define __inner_assume_bound(i) 
#define __DECLARE_CPP_OVERLOAD_INLINE_NFUNC_0_2_EX(_ReturnType,_ReturnPolicy,_FuncName,_SecureFuncName,_SecureDstType,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2) _CRT_INSECURE_DEPRECATE(_SecureFuncName) __inline _ReturnType __CRTDECL _FuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2)
#define __DECLARE_CPP_OVERLOAD_INLINE_FUNC_0_0_EX(_ReturnType,_ReturnPolicy,_FuncName,_SecureFuncName,_SecureDstType,_DstType,_Dst) _CRT_INSECURE_DEPRECATE(_SecureFuncName) __inline _ReturnType __CRTDECL _FuncName(_DstType *_Dst)
#define _Out_writes_bytes_opt_(s) 
#define _Outptr_ 
#define SQLITE_DBSTATUS_LOOKASIDE_HIT 4
#define _CRT_INSECURE_DEPRECATE_CORE(_Replacement) 
#define _In_opt_count_c_(size) _SAL1_1_Source_(_In_opt_count_c_, (size), _Pre_opt_count_c_(size) _Deref_pre_readonly_)
#define _On_failure_impl_(annos) 
#define _Pre_invalid_ _SAL2_Source_(_Pre_invalid_, (), _Deref_pre1_impl_(__notvalid_impl))
#define SQLITE_OPEN_DELETEONCLOSE 0x00000008
#define _Pre3_impl_(p1,p2,p3) 
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3_SIZE(_DeclSpec,_FuncName,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2,_TType3,_TArg3) __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3_SIZE_EX(_DeclSpec, _FuncName, _FuncName ##_s, _DstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3)
#define __FLT64X_MIN_10_EXP__ (-4931)
#define __EMPTY_DECLSPEC 
#define __LDBL_HAS_QUIET_NAN__ 1
#define _CRTIMP2_PURE_MEMBER_FUNCTION(type) _CRTIMP2_PURE type _CRTIMP2_PURE_MEMBER_FUNCTION_CALLING_CONVENTION
#define _Ret_bytecount_c_(size) _SAL1_1_Source_(_Ret_bytecount_c_, (size), _Ret1_impl_(__notnull_impl_notref) _Ret1_impl_(__bytecount_c_impl(size)) _Ret_valid_impl_)
#define _Inout_opt_ 
#define _Out_writes_all_opt_(s) 
#define _MRTIMP2_NPURE_CALLING_CONVENTION __cdecl
#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_1_ARGLIST_EX(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SecureFuncName,_VFuncName,_SecureVFuncName,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1) _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, ...); _CRT_INSECURE_DEPRECATE(_SecureVFuncName) _DeclSpec _ReturnType __cdecl _VFuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, va_list _Args);
#define __FLT16_MIN_EXP__ (-13)
#define _Out_ 
#define _Outref_result_buffer_to_maybenull_(s,c) 
#define _Pre_opt_bytecap_c_(size) _SAL1_1_Source_(_Pre_opt_bytecap_c_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__bytecap_c_impl(size)))
#define SQLITE_CONSTRAINT_TRIGGER (SQLITE_CONSTRAINT | (7<<8))
#define _Out_opt_z_bytecap_c_(size) _SAL1_1_Source_(_Out_opt_z_bytecap_c_, (size), _Pre_opt_bytecap_c_(size) _Post_valid_impl_ _Post_z_)
#define __FLT64_MANT_DIG__ 53
#define _Prepost_opt_bytecount_x_(size) _SAL1_1_Source_(_Prepost_opt_bytecount_x_, (size), _Pre_opt_bytecount_x_(size) _Post_bytecount_x_(size))
#define _In_z_count_(size) _SAL1_1_Source_(_In_z_count_, (size), _Pre_z_ _Pre_count_(size) _Deref_pre_readonly_)
#define __field_bcount_full_opt(size) _SAL1_Source_(__field_bcount_full_opt, (size), __field_bcount_part_opt(size,size))
#define SQLITE_INDEX_CONSTRAINT_EQ 2
#define SQLITE_INDEX_CONSTRAINT_ISNOT 69
#define SQLITE_SYNC_FULL 0x00003
#define __out_ecount_part(size,length) _SAL1_Source_(__out_ecount_part, (size,length), _Out_writes_to_(size,length))
#define _Struct_size_bytes_(s) 
#define __post_invalid _SAL1_Source_(__post_invalid, (), _Post_ __notvalid)
#define SQLITE_FCNTL_SIZE_LIMIT 36
#define SQLITE_READONLY_DBMOVED (SQLITE_READONLY | (4<<8))
#define _Pre_opt_z_cap_(size) _SAL1_1_Source_(_Pre_opt_z_cap_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre2_impl_(__zterm_impl,__cap_impl(size)) _Pre_valid_impl_)
#define _Pre_opt_z_cap_x_(size) _SAL1_1_Source_(_Pre_opt_z_cap_x_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre2_impl_(__zterm_impl,__cap_x_impl(size)) _Pre_valid_impl_)
#define _Deref_ret_range_impl_(min,max) 
#define __ATTR_SAL 
#define SQLITE_INDEX_CONSTRAINT_GT 4
#define _GrouP_(annos) _GrouP_impl_(annos _SAL_nop_impl_)
#define _Inout_cap_x_(size) _SAL1_1_Source_(_Inout_cap_x_, (size), _Pre_valid_cap_x_(size) _Post_valid_)
#define SQLITE_LIMIT_SQL_LENGTH 1
#define SQLITE_CONFIG_SERIALIZED 3
#define __FLT64X_MANT_DIG__ 113
#define _Out_writes_opt_z_(s) 
#define __drv_neverHoldGlobal(kind,param) _SAL1_1_Source_(__drv_neverHoldGlobal, (kind, param), _Requires_lock_not_held_(param))
#define __DYNAMIC__ 1
#define SQLITE_IOERR_MMAP (SQLITE_IOERR | (24<<8))
#define _Notvalid_ 
#define __GNUC__ 12
#define __file_parser(typ) 
#define _Ret_opt_cap_c_(size) _SAL1_1_Source_(_Ret_opt_cap_c_, (size), _Ret1_impl_(__maybenull_impl_notref) _Ret1_impl_(__cap_c_impl(size)))
#define SQLITE_INDEX_CONSTRAINT_GE 32
#define SQLITE_DBCONFIG_ENABLE_FTS3_TOKENIZER 1004
#define _Pre_opt_count_(size) _SAL1_1_Source_(_Pre_opt_count_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__count_impl(size)) _Pre_valid_impl_)
#define __inner_this_data_source(src_raw) 
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3_EX(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SecureFuncName,_SecureDstType,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2,_TType3,_TArg3) _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3);
#define __drv_sameIRQL _SAL1_1_Source_(__drv_sameIRQL, (), _IRQL_requires_same_)
#define _Ret_bytecap_(size) _SAL1_1_Source_(_Ret_bytecap_, (size), _Ret1_impl_(__notnull_impl_notref) _Ret1_impl_(__bytecap_impl(size)))
#define _Scanf_s_format_string_impl_ 
#define SQLITE_FCNTL_CHUNK_SIZE 6
#define __FLT16_DECIMAL_DIG__ 5
#define _THREADLOCALEINFO 
#define SQLITE_IOCAP_ATOMIC2K 0x00000008
#define _Pre1_impl_(p1) 
#define __drv_requiresIRQL(irql) _SAL1_1_Source_(__drv_requiresIRQL, (irql), _IRQL_requires_(irql))
#define __FLT_HAS_DENORM__ 1
#define __SIZEOF_LONG_DOUBLE__ 8
#define _Deref2_pre_readonly_ _SAL1_1_Source_(_Deref2_pre_readonly_, (), _Deref2_pre1_impl_(__readaccess_impl_notref))
#define __field_data_source(src_sym) _SAL_L_Source_(__field_data_source, (lb,ub), __inner_data_source(#src_sym))
#define __ecount_opt(size) _SAL1_Source_(__ecount_opt, (size), __ecount(size) __pre_except_maybenull)
#define __drv_out(annotes) _Post_ _Group_(annotes _SAL_nop_impl_)
#define _Post_count_x_(size) _SAL1_1_Source_(_Post_count_x_, (size), _Post1_impl_(__count_x_impl(size)) _Post_valid_impl_)
#define _Readable_bytes_impl_(size) 
#define _Outptr_opt_result_maybenull_ 
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1_ARGLIST(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_VFuncName,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1) __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1_ARGLIST_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName ##_s, _VFuncName, _VFuncName ##_s, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1)
#define _Readable_elements_impl_(size) 
#define __RETURN_POLICY_SAME(_FunctionCall) 
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_2_ARGLIST(_ReturnType,_FuncName,_VFuncName,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2) 
#define SQLITE_LOCK_SHARED 1
#define _Requires_exclusive_lock_held_(e) 
#define SQLITE_IOCAP_ATOMIC4K 0x00000010
#define __function_ignore_lock_checking(lock) 
#define __deref_inout_bcount_part(size,length) _SAL1_Source_(__deref_inout_bcount_part, (size,length), __deref_inout_bcount(size) __pre __deref __byte_readableTo(length) __post __deref __byte_readableTo(length))
#define __FORCE_INSTANCE_CRTIMP2 _CRTIMP2
#define __deref_opt_xcount(size) _SAL1_Source_(__deref_opt_xcount, (size), __deref_xcount(size) __exceptthat __maybenull)
#define SQLITE_IOCAP_POWERSAFE_OVERWRITE 0x00001000
#define __postcond(expr) 
#define SQLITE_SYNC_NORMAL 0x00002
#define _Out_opt_cap_(size) _SAL1_1_Source_(_Out_opt_cap_, (size), _Pre_opt_cap_(size) _Post_valid_impl_)
#define _Ret_count_c_(size) _SAL1_1_Source_(_Ret_count_c_, (size), _Ret1_impl_(__notnull_impl_notref) _Ret1_impl_(__count_c_impl(size)) _Ret_valid_impl_)
#define _Deref_post_opt_cap_c_(size) _SAL1_1_Source_(_Deref_post_opt_cap_c_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post1_impl_(__cap_c_impl(size)))
#define _Pre_valid_cap_x_(size) _SAL1_1_Source_(_Pre_valid_cap_x_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__cap_x_impl(size)) _Pre_valid_impl_)
#define SQLITE_STATUS_PARSER_STACK 6
#define _Deref_pre_opt_count_(size) _SAL1_1_Source_(_Deref_pre_opt_count_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre1_impl_(__count_impl(size)) _Pre_valid_impl_)
#define __deref_opt_inout_bcount_opt(size) _SAL1_Source_(__deref_opt_inout_bcount_opt, (size), __deref_inout_bcount_opt(size) __pre_except_maybenull)
#define __FLT64_MAX_10_EXP__ 308
#define SQLITE_INDEX_CONSTRAINT_LT 16
#define _NO_SAL_2_H_ 
#define SQLITE_CONSTRAINT_PRIMARYKEY (SQLITE_CONSTRAINT | (6<<8))
#define __FLT16_MAX_10_EXP__ 4
#define __inout_ecount_nz_opt(size) _SAL1_Source_(__inout_ecount_nz_opt, (size), __inout_ecount_opt(size))
#define SQLITE_LIMIT_COMPOUND_SELECT 4
#define SQLITE_IOERR_SHORT_READ (SQLITE_IOERR | (2<<8))
#define _Deref_pre_opt_count_x_(size) _SAL1_1_Source_(_Deref_pre_opt_count_x_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre1_impl_(__count_x_impl(size)) _Pre_valid_impl_)
#define _Inout_opt_z_count_(size) _SAL1_1_Source_(_Inout_opt_z_count_, (size), _Prepost_z_ _Prepost_opt_count_(size))
#define __SAL_H_FULL_VER 140050727
#define SQLITE_IOCAP_ATOMIC 0x00000001
#define __inout_xcount_full(size) _SAL1_Source_(__inout_xcount_full, (size), __inout_xcount_part(size,size))
#define SQLITE_IOCAP_ATOMIC8K 0x00000020
#define __deref_opt_ecount(size) _SAL1_Source_(__deref_opt_ecount, (size), __deref_ecount(size) __pre_except_maybenull)
#define SQLITE_SHM_NLOCK 8
#define __CRT_STRINGIZE(_Value) #_Value
#define __INT_FAST32_MAX__ 0x7fffffff
#define _Outptr_result_buffer_all_(size) _SAL2_Source_(_Outptr_result_buffer_all_, (size), _Out_impl_ _Deref_post2_impl_(__notnull_impl_notref, __count_impl(size)))
#define SQLITE_CREATE_VIEW 8
#define __GENSYM(x) __MKID(x, __COUNTER__)
#define _Analysis_assume_section_locked_(name) 
#define __DBL_HAS_INFINITY__ 1
#define __field_bcount_part(size,init) _SAL1_Source_(__field_bcount_part, (size,init), __notnull __byte_writableTo(size) __byte_readableTo(init))
#define SQLITE_MUTEX_STATIC_VFS1 11
#define _CRT_INSECURE_DEPRECATE_GLOBALS(_Replacement) _CRT_INSECURE_DEPRECATE(_Replacement)
#define __struct_bcount(size) _SAL1_Source_(__struct_bcount, (size), __byte_writableTo(size))
#define SQLITE_MUTEX_STATIC_VFS3 13
#define SQLITE_DROP_INDEX 10
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_SIZE_EX(_DeclSpec,_FuncName,_SecureFuncName,_SecureDstType,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2) _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec size_t __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2);
#define __INT64_MAX__ 0x7fffffffffffffffLL
#define __pre_except_maybenull 
#define _Releases_nonreentrant_lock_(e) 
#define __deref_out_xcount_part_opt(size,length) _SAL1_Source_(__deref_out_xcount_part_opt, (size,length), __deref_out_xcount_part(size,length) _Post_ __deref __exceptthat __maybenull)
#define _Ret_opt_z_bytecount_(size) _SAL1_1_Source_(_Ret_opt_z_bytecount_, (size), _Ret1_impl_(__maybenull_impl_notref) _Ret2_impl_(__zterm_impl,__bytecount_impl(size)) _Ret_valid_impl_)
#define __deref 
#define _Pre_bytecount_(size) _SAL1_1_Source_(_Pre_bytecount_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__bytecount_impl(size)) _Pre_valid_impl_)
#define __HAVE_SPECULATION_SAFE_VALUE 1
#define SQLITE_READONLY_CANTLOCK (SQLITE_READONLY | (2<<8))
#define SAL_VERSION_SAL2(_A) _SAL_VERSION_SAL2(_A)
#define _Post_writable_size_(s) _Post_ _Writable_elements_(s)
#define _Pre_valid_ _Pre_notnull_ _Pre_ _Valid_
#define SQLITE_SHM_UNLOCK 1
#define _Post3_impl_(p1,p2,p3) 
#define __sdv_save_adapter_context(c) 
#define __out_xcount_full_opt(size) _SAL1_Source_(__out_xcount_full_opt, (size), __out_xcount_full(size) __exceptthat __maybenull)
#define SQLITE_IOERR_NOMEM (SQLITE_IOERR | (12<<8))
#define __byte_writableTo(size) 
#define _Outptr_opt_result_bytebuffer_(s) 
#define _Create_lock_level_(n) 
#define __INTPTR_WIDTH__ 64
#define __FLT64X_HAS_INFINITY__ 1
#define __inner_adt_type_props(typ) 
#define _Kernel_requires_resource_held_(k) 
#define __user_driver 
#define __drv_notPointer _SAL1_1_Source_(__drv_notPointer, (), _Pre_ _SA_annotes1(SAL_mayBePointer,__no))
#define __drv_unit(p) typedef int ___drv_unit_ ##p __GENSYM(__prefast_flag_kernel_driver_mode);
#define _Pre_writable_size_(s) _Pre_ _Writable_elements_(s)
#define _Pre_ptrdiff_cap_(ptr) _SAL1_1_Source_(_Pre_ptrdiff_cap_, (ptr), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__cap_x_impl(__ptrdiff(ptr))))
#define _Prepost_opt_bytecount_c_(size) _SAL1_1_Source_(_Prepost_opt_bytecount_c_, (size), _Pre_opt_bytecount_c_(size) _Post_bytecount_c_(size))
#define __inner_adt_remove_prop(adt,prop) 
#define _Always_(a) 
#define __valueUndefined 
#define _CRTIMP2_CALLING_CONVENTION __cdecl
#define __FLT32X_HAS_DENORM__ 1
#define __INT_FAST16_TYPE__ short int
#define SQLITE_OPEN_SUBJOURNAL 0x00002000
#define SQLITE_INTERNAL 2
#define _No_competing_thread_ 
#define _Inout_updates_opt_(s) 
#define __drv_holdsCancelSpinLock() 
#define _Result_nullonfailure_ 
#define SQLITE_CONFIG_MEMSTATUS 9
#define _Pre_defensive_ 
#define SQLITE_READONLY_DIRECTORY (SQLITE_READONLY | (6<<8))
#define _Outptr_result_bytebuffer_maybenull_(s) 
#define __deref_opt_out_ecount_opt(size) _SAL1_Source_(__deref_opt_out_ecount_opt, (size), __deref_out_ecount_opt(size) __pre_except_maybenull)
#define __out_ecount_part_z(size,length) _SAL1_Source_(__out_ecount_part_z, (size,length), __out_ecount_part(size,length) __post __nullterminated)
#define SQLITE_LIMIT_ATTACHED 7
#define __inner_bound 
#define _Releases_shared_lock_(e) 
#define __LDBL_HAS_DENORM__ 1
#define __deref_inout_ecount_full(size) _SAL1_Source_(__deref_inout_ecount_full, (size), __deref_inout_ecount_part(size,size))
#define NOT_WITHIN 0
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_2_0(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_HType1,_HArg1,_HType2,_HArg2,_SalAttributeDst,_DstType,_Dst) __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_2_0_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName ##_s, _HType1, _HArg1, _HType2, _HArg2, _SalAttributeDst, _DstType, _Dst)
#define _Pre_equal_to_(e) 
#define SQLITE_INTERRUPT 9
#define _Format_string_impl_(kind,where) _SA_annotes2(SAL_IsFormatString2, kind, where)
#define __field_encoded_array _SAL_L_Source_(__field_encoded_array, (), __inner_encoded)
#define _Post1_impl_(p1) 
#define __FLT128_HAS_INFINITY__ 1
#define __deref_inout_ecount_z(size) _SAL1_Source_(__deref_inout_ecount_z, (size), __deref_inout_ecount(size) __pre __deref __nullterminated __post __deref __nullterminated)
#define __out _SAL1_Source_(__out, (), _Out_)
#define _Deref_post_bytecount_(size) _SAL1_1_Source_(_Deref_post_bytecount_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post1_impl_(__bytecount_impl(size)) _Post_valid_impl_)
#define __deref_opt_inout_opt _SAL1_Source_(__deref_opt_inout_opt, (), __deref_inout_opt __pre_except_maybenull)
#define SQLITE_ACCESS_READWRITE 1
#define _Ret_writes_bytes_(s) 
#define __transfer(formal) _SAL_L_Source_(__transfer, (src_sym), _Post_ __inner_transfer(formal))
#define _Deref_prepost_opt_valid_bytecap_(size) _SAL1_1_Source_(_Deref_prepost_opt_valid_bytecap_, (size), _Deref_pre_opt_valid_bytecap_(size) _Deref_post_opt_valid_bytecap_(size))
#define __in_nz_opt _SAL1_Source_(__in_nz_opt, (), __in_opt)
#define _Deref_pre_z_cap_(size) _SAL1_1_Source_(_Deref_pre_z_cap_, (size), _Deref_pre1_impl_(__notnull_impl_notref) _Deref_pre2_impl_(__zterm_impl,__cap_impl(size)) _Pre_valid_impl_)
#define _Deref_out_bound_impl_ 
#define __in_xcount(size) _SAL1_Source_(__in_xcount, (size), __in _Pre_ __inexpressible_readableTo(size))
#define _In_opt_count_x_(size) _SAL1_1_Source_(_In_opt_count_x_, (size), _Pre_opt_count_x_(size) _Deref_pre_readonly_)
#define _Const_ 
#define __weak 
#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_0(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SalAttributeDst,_DstType,_Dst) __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_0_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName ##_s, _SalAttributeDst, _DstType, _Dst)
#define __STR2WSTR(str) L ##str
#define SQLITE_READONLY_CANTINIT (SQLITE_READONLY | (5<<8))
#define __out_bcount_opt(size) _SAL1_Source_(__out_bcount_opt, (size), _Out_writes_bytes_opt_(size))
#define __DBL_MAX_EXP__ 1024
#define __out_range(lb,ub) _SAL_L_Source_(__out_range, (lb,ub), _Post_ __inner_range(lb,ub))
#define __WCHAR_WIDTH__ 32
#define __deref_opt_out_xcount_full(size) _SAL1_Source_(__deref_opt_out_xcount_full, (size), __deref_out_xcount_full(size) __exceptthat __maybenull)
#define SQLITE_ERROR_RETRY (SQLITE_ERROR | (2<<8))
#define __FLT32_MAX__ 3.40282346638528859811704183484516925e+38F32
#define SQLITE_NOTICE_RECOVER_WAL (SQLITE_NOTICE | (1<<8))
#define _Field_size_full_opt_(s) 
#define __drv_releasesPriorityRegion 
#define _Ret3_impl_(p1,p2,p3) 
#define __write_guarded_by(lock) 
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define _Out_opt_z_bytecap_x_(size) _SAL1_1_Source_(_Out_opt_z_bytecap_x_, (size), _Pre_opt_bytecap_x_(size) _Post_valid_impl_ _Post_z_)
#define _Deref_pre_opt_cap_c_(size) _SAL1_1_Source_(_Deref_pre_opt_cap_c_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre1_impl_(__cap_c_impl(size)))
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_ARGLIST_EX(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_VFuncName,_SecureVFuncName,_SecureDstType,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2) _CRT_INSECURE_DEPRECATE(_FuncName ##_s) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, ...); _CRT_INSECURE_DEPRECATE(_SecureVFuncName) _DeclSpec _ReturnType __cdecl _VFuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, va_list _Args);
#define __inout_xcount_opt(size) _SAL1_Source_(__inout_xcount_opt, (size), __inout_xcount(size) __exceptthat __maybenull)
#define _Deref_post_opt_valid_ _SAL1_1_Source_(_Deref_post_opt_valid_, (), _Deref_post1_impl_(__maybenull_impl_notref) _Post_valid_impl_)
#define _Deref_pre_cap_(size) _SAL1_1_Source_(_Deref_pre_cap_, (size), _Deref_pre1_impl_(__notnull_impl_notref) _Deref_pre1_impl_(__cap_impl(size)))
#define __drv_mustHold(kind) _SAL_L_Source_(_drv_mustHold, (kind), _When_(!_Arg_comp_(#kind,"Memory"), _Requires_lock_held_(_Curr_)) _When_(_Arg_comp_(#kind,"Memory"), _Kernel_requires_resource_held_(kind)))
#define SQLITE_CONFIG_MEMDB_MAXSIZE 29
#define SQLITE_LIMIT_LENGTH 0
#define __requires_lock_not_held(lock) 
#define SQLITE_FCNTL_WIN32_AV_RETRY 9
#define __failureDefault(x) 
#define _SAL_L_Source_(Name,args,annotes) _SA_annotes3(SAL_name, #Name, "", "2") _GrouP_(annotes _SAL_nop_impl_)
#define _Writable_bytes_(s) 
#define _Ret_z_count_(size) _SAL1_1_Source_(_Ret_z_count_, (size), _Ret1_impl_(__notnull_impl_notref) _Ret2_impl_(__zterm_impl,__count_impl(size)) _Ret_valid_impl_)
#define _In_z_bytecount_(size) _SAL1_1_Source_(_In_z_bytecount_, (size), _Pre_z_ _Pre_bytecount_(size) _Deref_pre_readonly_)
#define SQLITE_FCNTL_PRAGMA 14
#define _Analysis_assume_lock_held_(e) 
#define _In_reads_to_ptr_(p) 
#define _Inout_opt_z_cap_c_(size) _SAL1_1_Source_(_Inout_opt_z_cap_c_, (size), _Pre_opt_z_cap_c_(size) _Post_z_)
#define _Maybenull_ 
#define _Out_z_bytecap_post_bytecount_(cap,count) _SAL1_1_Source_(_Out_z_bytecap_post_bytecount_, (cap,count), _Pre_bytecap_(cap) _Post_valid_impl_ _Post_z_bytecount_(count))
#define _Analysis_assume_lock_released_(e) 
#define _Pre_z_bytecap_c_(size) _SAL1_1_Source_(_Pre_z_bytecap_c_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre2_impl_(__zterm_impl,__bytecap_c_impl(size)) _Pre_valid_impl_)
#define __inout_xcount_full_opt(size) _SAL1_Source_(__inout_xcount_full_opt, (size), __inout_xcount_full(size) __exceptthat __maybenull)
#define __deref_opt_inout_ecount_nz_opt(size) _SAL1_Source_(__deref_opt_inout_ecount_nz_opt, (size), __deref_opt_inout_ecount_opt(size))
#define __deref_opt_in _SAL1_Source_(__deref_opt_in, (), __deref_in __exceptthat __maybenull)
#define SQLITE_DBSTATUS_CACHE_HIT 7
#define _Inout_opt_bytecount_c_(size) _SAL1_1_Source_(_Inout_opt_bytecount_c_, (size), _Prepost_opt_bytecount_c_(size))
#define _Published_ _SAL2_Source_(_Published_, (), _SA_annotes0(SAL_externalIntf))
#define SQLITE_CORRUPT 11
#define SQLITE_DBCONFIG_DQS_DDL 1014
#define _CRT_STDIO_IMP _CRTIMP
#define SQLITE_FCNTL_SYNC_OMITTED 8
#define __inner_transfer(formal) 
#define _Pre_valid_cap_(size) _SAL1_1_Source_(_Pre_valid_cap_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__cap_impl(size)) _Pre_valid_impl_)
#define __deref_in_bcount(size) _SAL1_Source_(__deref_in_bcount, (size), __deref_in _Pre_ __deref __byte_readableTo(size))
#define __deref_inout_nz_opt _SAL1_Source_(__deref_inout_nz_opt, (), __deref_inout_opt)
#define _Deref_pre_null_ _SAL1_1_Source_(_Deref_pre_null_, (), _Deref_pre1_impl_(__null_impl_notref))
#define _Outref_result_buffer_all_(s) 
#define __drv_maxIRQL(irql) _SAL1_1_Source_(__drv_maxIRQL, (irql), _IRQL_requires_max_(irql))
#define __out_bcount_full_z_opt(size) _SAL1_Source_(__out_bcount_full_z_opt, (size), __out_bcount_full_opt(size) __post __nullterminated)
#define _Out_opt_bytecap_(size) _SAL1_1_Source_(_Out_opt_bytecap_, (size), _Pre_opt_bytecap_(size) _Post_valid_impl_)
#define _Use_decl_annotations_ 
#define __drv_releasesCriticalRegion 
#define __FLT32_HAS_QUIET_NAN__ 1
#define _Prepost_count_(size) _SAL1_1_Source_(_Prepost_count_, (size), _Pre_count_(size) _Post_count_(size))
#define __exceptthat 
#define _Post_bytecap_(size) _SAL1_1_Source_(_Post_bytecap_, (size), _Post1_impl_(__bytecap_impl(size)))
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#define _Inout_bytecount_c_(size) _SAL1_1_Source_(_Inout_bytecount_c_, (size), _Prepost_bytecount_c_(size))
#define __SIZEOF_SIZE_T__ 8
#define _Pre_bytecap_c_(size) _SAL1_1_Source_(_Pre_bytecap_c_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__bytecap_c_impl(size)))
#define __internal_kernel_driver 
#define _Post_valid_ _Post_ _Valid_
#define __SIG_ATOMIC_WIDTH__ 32
#define _Out_bytecap_x_(size) _SAL1_1_Source_(_Out_bytecap_x_, (size), _Pre_bytecap_x_(size) _Post_valid_impl_)
#define _Acquires_nonreentrant_lock_(e) 
#define __drv_when(cond,annotes) _When_(cond, annotes _SAL_nop_impl_)
#define _Deref_post_opt_cap_x_(size) _SAL1_1_Source_(_Deref_post_opt_cap_x_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post1_impl_(__cap_x_impl(size)))
#define _In_z_bytecount_c_(size) _SAL1_1_Source_(_In_z_bytecount_c_, (size), _Pre_z_ _Pre_bytecount_c_(size) _Deref_pre_readonly_)
#define __ARM_ALIGN_MAX_PWR 28
#define SQLITE_IOERR_UNLOCK (SQLITE_IOERR | (8<<8))
#define _Out_opt_cap_post_count_(cap,count) _SAL1_1_Source_(_Out_opt_cap_post_count_, (cap,count), _Pre_opt_cap_(cap) _Post_valid_impl_ _Post_count_(count))
#define _CRT_JIT_INTRINSIC 
#define SQLITE_DBSTATUS_MAX 12
#define __deref_opt_out_xcount_full_opt(size) _SAL1_Source_(__deref_opt_out_scount_full_opt, (size), __deref_out_xcount_full_opt(size) __exceptthat __maybenull)
#define __SIZEOF_WINT_T__ 4
#define __deref_out_xcount_part(size,length) _SAL1_Source_(__deref_out_xcount_part, (size,length), __deref_out_xcount(size) _Post_ __deref __inexpressible_readableTo(length))
#define _Deref_post_opt_bytecount_c_(size) _SAL1_1_Source_(_Deref_post_opt_bytecount_c_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post1_impl_(__bytecount_c_impl(size)) _Post_valid_impl_)
#define _Outref_result_bytebuffer_to_(s,c) 
#define _Deref_out_range_impl_(min,max) 
#define _CRTIMP2_PURE _CRTIMP2
#define _Internal_set_lock_count_(lock,count) 
#define _Deref_pre_opt_valid_cap_(size) _SAL1_1_Source_(_Deref_pre_opt_valid_cap_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre1_impl_(__cap_impl(size)) _Pre_valid_impl_)
#define _Deref_pre_opt_valid_bytecap_c_(size) _SAL1_1_Source_(_Deref_pre_opt_valid_bytecap_c_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre1_impl_(__bytecap_c_impl(size)) _Pre_valid_impl_)
#define SQLITE_TEXT 3
#define __LONG_LONG_WIDTH__ 64
#define _Null_terminated_ 
#define _In_reads_bytes_(s) 
#define _Pre_bytecount_x_(size) _SAL1_1_Source_(_Pre_bytecount_x_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__bytecount_x_impl(size)) _Pre_valid_impl_)
#define SQLITE_DBSTATUS_LOOKASIDE_USED 0
#define _Valid_impl_ 
#define __CRT_WIDE(_String) L ## _String
#define _Ret_opt_count_x_(size) _SAL1_1_Source_(_Ret_opt_count_x_, (size), _Ret1_impl_(__maybenull_impl_notref) _Ret1_impl_(__count_x_impl(size)) _Ret_valid_impl_)
#define __FLT32_MAX_EXP__ 128
#define _Deref_ret_z_ _SAL1_1_Source_(_Deref_ret_z_, (), _Deref_ret1_impl_(__notnull_impl_notref) _Deref_ret1_impl_(__zterm_impl))
#define _Deref_pre_opt_bytecap_(size) _SAL1_1_Source_(_Deref_pre_opt_bytecap_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre1_impl_(__bytecap_impl(size)))
#define _Deref_pre_valid_cap_x_(size) _SAL1_1_Source_(_Deref_pre_valid_cap_x_, (size), _Deref_pre1_impl_(__notnull_impl_notref) _Deref_pre1_impl_(__cap_x_impl(size)) _Pre_valid_impl_)
#define _Deref_pre_opt_bytecap_c_(size) _SAL1_1_Source_(_Deref_pre_opt_bytecap_c_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre1_impl_(__bytecap_c_impl(size)))
#define _Prepost_bytecount_x_(size) _SAL1_1_Source_(_Prepost_bytecount_x_, (size), _Pre_bytecount_x_(size) _Post_bytecount_x_(size))
#define _TIME64_T_DEFINED 
#define __analysis_suppress_lock_checking(lock) 
#define __inner_nonvolatile 
#define _Ret_range_impl_(min,max) 
#define _Ret_writes_(s) 
#define _Outptr_result_maybenull_z_ 
#define SQLITE_FCNTL_FILE_POINTER 7
#define _Pre_cap_(size) _SAL1_1_Source_(_Pre_cap_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__cap_impl(size)))
#define __acquires_exclusive_lock(lock) 
#define SQLITE_TESTCTRL_LAST 29
#define __ARM_FP16_FORMAT_IEEE 1
#define _Out_opt_ 
#define __drv_minIRQL(irql) _SAL1_1_Source_(__drv_minIRQL, (irql), _IRQL_requires_min_(irql))
#define __encoded_array _SAL_L_Source_(__encoded_array, (), __inner_encoded)
#define __FP_FAST_FMAF32x 1
#define SQLITE_SOURCE_ID "2019-10-10 20:19:45 18db032d058f1436ce3dea84081f4ee5a0f2259ad97301d43c426bc7f3df1b0b"
#define __drv_restoresIRQL _SAL1_1_Source_(__drv_restoresIRQL, (), _IRQL_restores_)
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_2_0_EX(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SecureFuncName,_HType1,_HArg1,_HType2,_HArg2,_SalAttributeDst,_DstType,_Dst) _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_HType1 _HArg1, _HType2 _HArg2, _SalAttributeDst _DstType *_Dst);
#define __checkReturn _SAL1_Source_(__checkReturn, (), _Check_return_)
#define __FLT_MIN_EXP__ (-125)
#define __drv_releasesResource(kind) _SAL1_1_Source_(__drv_releasesResource, (kind), _Releases_lock_(_Curr_))
#define SQLITE_LIMIT_WORKER_THREADS 11
#define _Outref_result_bytebuffer_(s) 
#define __deref_opt_out_bcount_nz_opt(size) _SAL1_Source_(__deref_opt_out_bcount_nz_opt, (size), __deref_opt_out_bcount_opt(size))
#define SQLITE_DBCONFIG_DQS_DML 1013
#define __drv_floatSaved _SAL1_1_Source_(__drv_floatSaved, (), _Kernel_float_saved_)
#define _Deref_prepost_count_x_(size) _SAL1_1_Source_(_Deref_prepost_count_x_, (size), _Deref_pre_count_x_(size) _Deref_post_count_x_(size))
#define _Ret_range_(l,h) 
#define __DEFINE_CPP_OVERLOAD_INLINE_NFUNC_0_0_EX(_ReturnType,_ReturnPolicy,_FuncName,_SecureFuncName,_SecureDstType,_DstType,_Dst) 
#define __inout _SAL1_Source_(__inout, (), _Inout_)
#define _Deref_prepost_bytecount_x_(size) _SAL1_1_Source_(_Deref_prepost_bytecount_x_, (size), _Deref_pre_bytecount_x_(size) _Deref_post_bytecount_x_(size))
#define SQLITE_STATUS_MEMORY_USED 0
#define _Post_z_count_c_(size) _SAL1_1_Source_(_Post_z_count_c_, (size), _Post2_impl_(__zterm_impl,__count_c_impl(size)) _Post_valid_impl_)
#define SQLITE_INDEX_CONSTRAINT_LIKE 65
#define __deref_opt_out _SAL1_Source_(__deref_opt_out, (), _Outptr_opt_)
#define _Null_impl_ 
#define __elem_writableTo(size) 
#define __deref_opt_inout_ecount_full_opt(size) _SAL1_Source_(__deref_opt_inout_ecount_full_opt, (size), __deref_inout_ecount_full_opt(size) __pre_except_maybenull)
#define _Inout_opt_bytecount_x_(size) _SAL1_1_Source_(_Inout_opt_bytecount_x_, (size), _Prepost_opt_bytecount_x_(size))
#define _Out_z_cap_c_(size) _SAL1_1_Source_(_Out_z_cap_c_, (size), _Pre_cap_c_(size) _Post_valid_impl_ _Post_z_)
#define SQLITE_OPEN_MEMORY 0x00000080
#define SQLITE_FUNCTION 31
#define SQLITE_CREATE_TABLE 2
#define SQLITE_STATUS_SCRATCH_USED 3
#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_2_0_EX(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SecureFuncName,_HType1,_HArg1,_HType2,_HArg2,_SalAttributeDst,_DstType,_Dst) _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_HType1 _HArg1, _HType2 _HArg2, _SalAttributeDst _DstType *_Dst);
#define _Inout_z_bytecount_c_(size) _SAL1_1_Source_(_Inout_z_bytecount_c_, (size), _Prepost_z_ _Prepost_bytecount_c_(size))
#define _Deref_post_opt_valid_cap_c_(size) _SAL1_1_Source_(_Deref_post_opt_valid_cap_c_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post1_impl_(__cap_c_impl(size)) _Post_valid_impl_)
#define _Out_z_bytecapcount_(capcount) _SAL1_1_Source_(_Out_z_bytecapcount_, (capcount), _Pre_bytecap_(capcount) _Post_valid_impl_ _Post_z_bytecount_(capcount))
#define SQLITE_IOERR_TRUNCATE (SQLITE_IOERR | (6<<8))
#define __FLT32X_MIN_EXP__ (-1021)
#define _Deref_ret3_impl_(p1,p2,p3) 
#define __deref_ecount(size) _SAL1_Source_(__deref_ecount, (size), _Notref_ __ecount(1) __post _Notref_ __elem_readableTo(1) __post _Notref_ __deref _Notref_ __notnull __post __deref __elem_writableTo(size))
#define _At_(t,a) 
#define _Deref_pre_readonly_ _SAL1_1_Source_(_Deref_pre_readonly_, (), _Deref_pre1_impl_(__readaccess_impl_notref))
#define __INT_FAST64_TYPE__ long long int
#define _Outref_result_bytebuffer_to_maybenull_(s,c) 
#define SQLITE_UPDATE 23
#define _Field_range_impl_(min,max) 
#define SQLITE_TESTCTRL_RESULT_INTREAL 27
#define __RETURN_POLICY_DST(_FunctionCall) 
#define _Deref_out_bound_ _SAL1_1_Source_(_Deref_out_bound_, (), _Deref_out_bound_impl_)
#define __ARM_FP16_ARGS 1
#define _Inout_updates_to_opt_(s,c) 
#define SQLITE_MUTEX_STATIC_APP3 10
#define _Enum_is_bitflag_ 
#define __DBL_DECIMAL_DIG__ 17
#define __drv_WDM 
#define __FP_FAST_FMAF 1
#define __FLT128_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define __FP_FAST_FMAL 1
#define _IRQL_is_cancel_ 
#define _Deref_prepost_valid_cap_x_(size) _SAL1_1_Source_(_Deref_prepost_valid_cap_x_, (size), _Deref_pre_valid_cap_x_(size) _Deref_post_valid_cap_x_(size))
#define __deref_opt_out_bcount(size) _SAL1_Source_(__deref_opt_out_bcount, (size), __deref_out_bcount(size) __pre_except_maybenull)
#define _Requires_lock_held_(e) 
#define _Out_bound_ _SAL1_1_Source_(_Out_bound_, (), _Out_bound_impl_)
#define __field_xcount_part(size,init) _SAL1_Source_(__field_xcount_part, (size,init), __notnull __inexpressible_writableTo(size) __inexpressible_readableTo(init))
#define _Outptr_opt_result_bytebuffer_all_maybenull_(size) _SAL2_Source_(_Outptr_opt_result_bytebuffer_all_maybenull_, (size), _Out_opt_impl_ _Deref_post2_impl_(__maybenull_impl_notref, __bytecount_impl(size)))
#define __FLT64_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F64
#define __DBL_MIN__ ((double)2.22507385850720138309023271733240406e-308L)
#define __deref_inout_bcount_z_opt(size) _SAL1_Source_(__deref_inout_bcount_z_opt, (size), __deref_inout_bcount_opt(size) __pre __deref __nullterminated __post __deref __nullterminated)
#define _Analysis_assume_ 
#define SQLITE_CONSTRAINT_VTAB (SQLITE_CONSTRAINT | (9<<8))
#define NO_COMPETING_THREAD_BEGIN __pragma(warning(push))
#define __ARM_FEATURE_CLZ 1
#define SQLITE_CANTOPEN_FULLPATH (SQLITE_CANTOPEN | (3<<8))
#define __FLT16_DENORM_MIN__ 5.96046447753906250000000000000000000e-8F16
#define SQLITE_DROP_TEMP_TRIGGER 14
#define _Csalcat1_(x,y) 
#define _MSVCR80_FUNCTION_2(sal,type) sal type __cdecl
#define SQLITE_LIMIT_LIKE_PATTERN_LENGTH 8
#define _Kernel_clear_do_init_(yn) 
#define SQLITE_FCNTL_ZIPVFS 25
#define SQLITE_FCNTL_BUSYHANDLER 15
#define __FLT64X_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F64x
#define __SIZEOF_POINTER__ 8
#define _Kernel_float_restored_ 
#define _Deref_pre_opt_z_bytecap_(size) _SAL1_1_Source_(_Deref_pre_opt_z_bytecap_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre2_impl_(__zterm_impl,__bytecap_impl(size)) _Pre_valid_impl_)
#define __SIZE_TYPE__ long unsigned int
#define SQLITE_READONLY 8
#define _Csalcat2_(x,y) 
#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_SIZE_EX(_DeclSpec,_FuncName,_SecureFuncName,_SecureDstType,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2) _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec size_t __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2);
#define SQLITE_IOERR_SHMLOCK (SQLITE_IOERR | (20<<8))
#define _Accessible_bytes_when_(previousContext,context,expr) 
#define SQLITE_LIMIT_VARIABLE_NUMBER 9
#define __LP64__ 1
#define SQLITE_IOERR_CONVPATH (SQLITE_IOERR | (26<<8))
#define __elem_readableTo(size) 
#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_3_SIZE(_DeclSpec,_FuncName,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2,_TType3,_TArg3) __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_3_SIZE_EX(_DeclSpec, _FuncName, _FuncName ##_s, _DstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3)
#define __DBL_HAS_QUIET_NAN__ 1
#define _Deref_ret1_impl_(p1) 
#define SQLITE_TESTCTRL_PRNG_SAVE 5
#define __FLT_EVAL_METHOD_C99__ 0
#define _Outptr_opt_result_buffer_all_maybenull_(size) _SAL2_Source_(_Outptr_opt_result_buffer_all_maybenull_, (size), _Out_opt_impl_ _Deref_post2_impl_(__maybenull_impl_notref, __count_impl(size)))
#define __drv_arg(expr,annotes) _At_(expr,annotes)
#define __FLT32X_EPSILON__ 2.22044604925031308084726333618164062e-16F32x
#define __inout_bcount_full(size) _SAL1_Source_(__inout_bcount_full, (size), _Inout_updates_bytes_all_(size))
#define __sdv_save_request(r) 
#define __drv_typeConst 0
#define _Out_z_cap_post_count_(cap,count) _SAL1_1_Source_(_Out_z_cap_post_count_, (cap,count), _Pre_cap_(cap) _Post_valid_impl_ _Post_z_count_(count))
#define __inout_ecount(size) _SAL1_Source_(__inout_ecount, (size), _Inout_updates_(size))
#define SQLITE_PERM 3
#define SQLITE_STATUS_PAGECACHE_OVERFLOW 2
#define _Prepost_opt_bytecount_(size) _SAL1_1_Source_(_Prepost_opt_bytecount_, (size), _Pre_opt_bytecount_(size) _Post_bytecount_(size))
#define __field_xcount_part_opt(size,init) _SAL1_Source_(__field_xcount_part_opt, (size,init), __maybenull __inexpressible_writableTo(size) __inexpressible_readableTo(init))
#define _Kernel_requires_resource_not_held_(k) 
#define __FLT64_MIN_EXP__ (-1021)
#define _Field_size_full_(s) 
#define SQLITE_FCNTL_WAL_BLOCK 24
#define __deref_inout_ecount_part(size,length) _SAL1_Source_(__deref_inout_ecount_part, (size,length), __deref_inout_ecount(size) __pre __deref __elem_readableTo(length) __post __deref __elem_readableTo(length))
#define SQLITE_STMTSTATUS_REPREPARE 5
#define __failure(x) 
#define __in_xcount_opt(size) _SAL1_Source_(__in_xcount_opt, (size), __in_xcount(size) __exceptthat __maybenull)
#define __LDBL_DECIMAL_DIG__ 17
#define __drv_typeCond 1
#define __aarch64__ 1
#define SQLITE_LOCKED_VTAB (SQLITE_LOCKED | (2<<8))
#define __drv_neverHold(kind) _SAL1_1_Source_(__drv_neverHold, (kind), _Requires_lock_not_held_(_Curr_))
#define _Pre_opt_count_c_(size) _SAL1_1_Source_(_Pre_opt_count_c_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__count_c_impl(size)) _Pre_valid_impl_)
#define _Inout_opt_z_cap_x_(size) _SAL1_1_Source_(_Inout_opt_z_cap_x_, (size), _Pre_opt_z_cap_x_(size) _Post_z_)
#define _MSVCR80_FUNCTION(type) type __cdecl
#define _USE_ATTRIBUTES_FOR_SAL 0
#define _Pre_z_bytecap_x_(size) _SAL1_1_Source_(_Pre_z_bytecap_x_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre2_impl_(__zterm_impl,__bytecap_x_impl(size)) _Pre_valid_impl_)
#define _Out_z_cap_m_(mult,size) _SAL1_1_Source_(_Out_z_cap_m_, (mult,size), _Pre_cap_m_(mult,size) _Post_valid_impl_ _Post_z_)
#define __FLT64_MIN_10_EXP__ (-307)
#define SQLITE_CHECKPOINT_FULL 1
#define __drv_typeExpr 3
#define __drv_savesIRQLGlobal(kind,param) _SAL1_1_Source_(__drv_savesIRQLGlobal, (kind,param), _IRQL_saves_global_(kind,param))
#define _Deref_pre_opt_valid_ _SAL1_1_Source_(_Deref_pre_opt_valid_, (), _Deref_pre1_impl_(__maybenull_impl_notref) _Pre_valid_impl_)
#define SQLITE_IGNORE 2
#define __INT_FAST64_WIDTH__ 64
#define __rpc_entry _SAL_L_Source_(__rpc_entry, (formal), __inner_control_entrypoint(RPC))
#define _Ret_opt_cap_(size) _SAL1_1_Source_(_Ret_opt_cap_, (size), _Ret1_impl_(__maybenull_impl_notref) _Ret1_impl_(__cap_impl(size)))
#define __deref_opt_in_opt _SAL1_Source_(__deref_opt_in_opt, (), __deref_in_opt __exceptthat __maybenull)
#define __FLT64X_DECIMAL_DIG__ 36
#define _GrouP_impl_(annos) 
#define _Inout_z_cap_c_(size) _SAL1_1_Source_(_Inout_z_cap_c_, (size), _Pre_z_cap_c_(size) _Post_z_)
#define __notvalid 
#define _Frees_ptr_ _SAL_L_Source_(_Frees_ptr_, (), _Pre_notnull_ _Post_ptr_invalid_ __drv_freesMem(Mem))
#define _Deref_post_z_bytecap_(size) _SAL1_1_Source_(_Deref_post_z_bytecap_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post2_impl_(__zterm_impl,__bytecap_impl(size)) _Post_valid_impl_)
#define __drv_releasesResourceGlobal(kind,param) _SAL1_1_Source_(__drv_releasesResourceGlobal, (kind, param), _Releases_lock_(param))
#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_1_1(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_HType1,_HArg1,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1) __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_1_1_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName ##_s, _HType1, _HArg1, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1)
#define _On_failure_(a) 
#define __REGISTER_PREFIX__ 
#define __UINT16_MAX__ 0xffff
#define SQLITE_NOTADB 26
#define _IRQL_uses_cancel_ 
#define __INTMAX_WIDTH__ 64
#define _Pre_bytecap_x_(size) _SAL1_1_Source_(_Pre_bytecap_x_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__bytecap_x_impl(size)))
#define __cdecl 
#define __out_bcount_full_z(size) _SAL1_Source_(__out_bcount_full_z, (size), __out_bcount_full(size) __post __nullterminated)
#define __GXX_ABI_VERSION 1017
#define __AARCH64EL__ 1
#define _Deref_post_z_bytecap_x_(size) _SAL1_1_Source_(_Deref_post_z_bytecap_x_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post2_impl_(__zterm_impl,__bytecap_x_impl(size)) _Post_valid_impl_)
#define SQLITE_TESTCTRL_PRNG_SEED 28
#define _Pre_ 
#define _Inout_opt_cap_x_(size) _SAL1_1_Source_(_Inout_opt_cap_x_, (size), _Pre_opt_valid_cap_x_(size) _Post_valid_)
#define __DECLARE_CPP_OVERLOAD_INLINE_FUNC_0_3_EX(_ReturnType,_ReturnPolicy,_FuncName,_SecureFuncName,_SecureDstType,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2,_TType3,_TArg3) _CRT_INSECURE_DEPRECATE(_SecureFuncName) __inline _ReturnType __CRTDECL _FuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3)
#define _CRTEXP 
#define __LDBL_HAS_INFINITY__ 1
#define _Kernel_entry_always_ 
#define _User_on_(expr) 
#define _Readable_bytes_(s) 
#define SQLITE_TESTCTRL_PARSER_COVERAGE 26
#define _Pre_valid_bytecap_(size) _SAL1_1_Source_(_Pre_valid_bytecap_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__bytecap_impl(size)) _Pre_valid_impl_)
#define _Ret_cap_c_(size) _SAL1_1_Source_(_Ret_cap_c_, (size), _Ret1_impl_(__notnull_impl_notref) _Ret1_impl_(__cap_c_impl(size)))
#define _Out_bound_impl_ 
#define __UINT8_TYPE__ unsigned char
#define __on_failure(annotes) _SAL1_1_Source_(__on_failure, (annotes), _On_failure_impl_(annotes _SAL_nop_impl_))
#define _Deref_post_opt_valid_cap_(size) _SAL1_1_Source_(_Deref_post_opt_valid_cap_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post1_impl_(__cap_impl(size)) _Post_valid_impl_)
#define __FLT_DIG__ 6
#define __analysis_assume_nullterminated(x) _Analysis_assume_nullterminated_(x)
#define __NO_INLINE__ 1
#define __drv_acquiresCancelSpinLock 
#define _Ret_writes_z_(s) 
#define _Deref_pre_opt_valid_bytecap_x_(size) _SAL1_1_Source_(_Deref_pre_opt_valid_bytecap_x_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre1_impl_(__bytecap_x_impl(size)) _Pre_valid_impl_)
#define _Out_writes_to_ptr_opt_z_(p) 
#define SQLITE_IOERR_LOCK (SQLITE_IOERR | (15<<8))
#define _CRTNOALIAS 
#define _Outptr_opt_result_buffer_maybenull_(s) 
#define __DEC_EVAL_METHOD__ 2
#define _Inout_opt_z_bytecount_(size) _SAL1_1_Source_(_Inout_opt_z_bytecount_, (size), _Prepost_z_ _Prepost_opt_bytecount_(size))
#define __DEFINE_CPP_OVERLOAD_INLINE_FUNC_0_1_EX(_ReturnType,_ReturnPolicy,_FuncName,_SecureFuncName,_SecureDstType,_DstType,_Dst,_TType1,_TArg1) 
#define SQLITE_AUTH 23
#define _In_reads_to_ptr_opt_z_(p) 
#define SQLITE_LIMIT_TRIGGER_DEPTH 10
#define __DEFINE_CPP_OVERLOAD_INLINE_NFUNC_0_3_EX(_ReturnType,_ReturnPolicy,_FuncName,_SecureFuncName,_SecureDstType,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2,_TType3,_TArg3) 
#define _IRQL_limited_to_(level) ASSERT(KeGetCurrentIrql() <= level); _Analysis_assume_(KeGetCurrentIrql() <= level);
#define __FLT_MANT_DIG__ 24
#define _Flt_CompletionContext_Outptr_ _SAL_L_Source_(_Flt_CompletionContext_Outptr_, (), _Outptr_result_maybenull_ _Pre_valid_ _At_(*_Curr_, _Pre_null_ _When_(return != FLT_PREOP_SUCCESS_WITH_CALLBACK && return != FLT_PREOP_SYNCHRONIZE, _Post_null_)))
#define _Out_z_cap_(size) _SAL1_1_Source_(_Out_z_cap_, (size), _Pre_cap_(size) _Post_valid_impl_ _Post_z_)
#define __FLT16_MIN_10_EXP__ (-4)
#define __VERSION__ "12.2.0"
#define _Deref_post_cap_(size) _SAL1_1_Source_(_Deref_post_cap_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post1_impl_(__cap_impl(size)))
#define SQLITE_INDEX_CONSTRAINT_GLOB 66
#define __no_competing_thread 
#define __deref_opt_out_bcount_full(size) _SAL1_Source_(__deref_opt_out_bcount_full, (size), __deref_out_bcount_full(size) __pre_except_maybenull)
#define _In_reads_z_(s) 
#define _Post_cap_(size) _SAL1_1_Source_(_Post_cap_, (size), _Post1_impl_(__cap_impl(size)))
#define __UINT64_C(c) c ## ULL
#define _MRTIMP __declspec(dllimport)
#define _Inout_z_count_(size) _SAL1_1_Source_(_Inout_z_count_, (size), _Prepost_z_ _Prepost_count_(size))
#define SQLITE_IOCAP_ATOMIC16K 0x00000040
#define __field_ecount_opt(size) _SAL1_Source_(__field_ecount_opt, (size), __maybenull __elem_writableTo(size))
#define _CRTIMP2_FUNCTION(type) _CRTIMP2 type _CRTIMP2_CALLING_CONVENTION
#define _Reserved_ _Pre_equal_to_(0) _Pre_ _Null_
#define SQLITE_MUTEX_STATIC_LRU 6
#define _Out_cap_c_(size) _SAL1_1_Source_(_Out_cap_c_, (size), _Pre_cap_c_(size) _Post_valid_impl_)
#define SQLITE_MUTEX_STATIC_MEM2 4
#define _Acquires_shared_lock_(e) 
#define __out_ecount_full_z_opt(size) _SAL1_Source_(__out_ecount_full_z_opt, (size), __out_ecount_full_opt(size) __post __nullterminated)
#define __analysis_assume(expr) 
#define __post_nullnullterminated _SAL1_Source_(__post_nullnullterminated, (), _Post_ __inexpressible_readableTo("string terminated by two nulls") _Post_ __nullterminated)
#define SQLITE_TESTCTRL_FIRST 5
#define _Deref_prepost_bytecap_(size) _SAL1_1_Source_(_Deref_prepost_bytecap_, (size), _Deref_pre_bytecap_(size) _Deref_post_bytecap_(size))
#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_3_EX(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SecureFuncName,_SecureDstType,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2,_TType3,_TArg3) _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3);
#define _Deref_prepost_opt_valid_bytecap_x_(size) _SAL1_1_Source_(_Deref_prepost_opt_valid_bytecap_x_, (size), _Deref_pre_opt_valid_bytecap_x_(size) _Deref_post_opt_valid_bytecap_x_(size))
#define __deref_out_ecount_z_opt(size) _SAL1_Source_(__deref_out_ecount_z_opt, (size), __deref_out_ecount_opt(size) __post __deref __nullterminated)
#define _Deref_prepost_opt_z_cap_(size) _SAL1_1_Source_(_Deref_prepost_opt_z_cap_, (size), _Deref_pre_opt_z_cap_(size) _Deref_post_opt_z_cap_(size))
#define _INC_CRTDEFS 
#define _In_opt_z_ 
#define _Out_z_cap_x_(size) _SAL1_1_Source_(_Out_z_cap_x_, (size), _Pre_cap_x_(size) _Post_valid_impl_ _Post_z_)
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1(_ReturnType,_FuncName,_DstType,_Dst,_TType1,_TArg1) 
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_2(_ReturnType,_FuncName,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2) 
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_3(_ReturnType,_FuncName,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2,_TType3,_TArg3) 
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_4(_ReturnType,_FuncName,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2,_TType3,_TArg3,_TType4,_TArg4) 
#define _Post_same_lock_(e1,e2) 
#define SQLITE_LOCK_NONE 0
#define _SAL_VERSION_SAL2(_A) 
#define __inner_blocksOn(resource) 
#define SQLITE_CANTOPEN_CONVPATH (SQLITE_CANTOPEN | (4<<8))
#define __drv_acquiresExclusiveResource(kind) 
#define __INT_LEAST32_MAX__ 0x7fffffff
#define _Post_ 
#define __inner_assume_validated(p) 
#define _Pre_count_x_(size) _SAL1_1_Source_(_Pre_count_x_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__count_x_impl(size)) _Pre_valid_impl_)
#define _Deref_in_range_(l,h) 
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define __inner_typefix(ctype) 
#define SQLITE_SCANSTAT_EXPLAIN 4
#define __deref_realloc_bcount(insize,outsize) _SAL1_Source_(__deref_realloc_bcount, (insize,outsize), __inout _Pre_ __deref __byte_readableTo(insize) _Post_ __deref __byte_writableTo(outsize))
#define _Kernel_IoGetDmaAdapter_ 
#define __bcount(size) _SAL1_Source_(__bcount, (size), __notnull __byte_writableTo(size))
#define SQLITE_OK_LOAD_PERMANENTLY (SQLITE_OK | (1<<8))
#define __deref_inout_bcount_nz(size) _SAL1_Source_(__deref_inout_bcount_nz, (size), __deref_inout_ecount(size))
#define _Post_z_count_x_(size) _SAL1_1_Source_(_Post_z_count_x_, (size), _Post2_impl_(__zterm_impl,__count_x_impl(size)) _Post_valid_impl_)
#define __FLT128_MAX_EXP__ 16384
#define __in_ecount(size) _SAL1_Source_(__in_ecount, (size), _In_reads_(size))
#define SQLITE_UTF16 4
#define SQLITE_STMTSTATUS_MEMUSED 99
#define _Out_opt_bytecap_c_(size) _SAL1_1_Source_(_Out_opt_bytecap_c_, (size), _Pre_opt_bytecap_c_(size) _Post_valid_impl_)
#define _Deref_post_opt_bytecount_(size) _SAL1_1_Source_(_Deref_post_opt_bytecount_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post1_impl_(__bytecount_impl(size)) _Post_valid_impl_)
#define SQLITE_INDEX_SCAN_UNIQUE 1
#define __FUNCTIONW__ _STR2WSTR(__FUNCTION__)
#define __deref_opt_inout_bcount_part(size,length) _SAL1_Source_(__deref_opt_inout_bcount_part, (size,length), __deref_inout_bcount_part(size,length) __pre_except_maybenull)
#define __deref_out_bcount_part_opt(size,length) _SAL1_Source_(__deref_out_bcount_part_opt, (size,length), __deref_out_bcount_part(size,length) __post_deref_except_maybenull)
#define SQLITE_CORRUPT_VTAB (SQLITE_CORRUPT | (1<<8))
#define _Post_bytecount_c_(size) _SAL1_1_Source_(_Post_bytecount_c_, (size), _Post1_impl_(__bytecount_c_impl(size)) _Post_valid_impl_)
#define _Pre_satisfies_(e) 
#define SQLITE_FCNTL_PERSIST_WAL 10
#define __this_out_validated(typ_sym) _SAL_L_Source_(__this_out_validated, (src_sym), __inner_this_out_validated(#typ_sym))
#define _Out_opt_bytecap_x_(size) _SAL1_1_Source_(_Out_opt_bytecap_x_, (size), _Pre_opt_bytecap_x_(size) _Post_valid_impl_)
#define __FLT32_MANT_DIG__ 24
#define __drv_releasesExclusiveResource(kind) 
#define _Check_return_wat_ 
#define __out_bcount_full_opt(size) _SAL1_Source_(__out_bcount_full_opt, (size), __out_bcount_full(size) __pre_except_maybenull)
#define SQLITE_DROP_TRIGGER 16
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#define _INTSIZEOF(n) ( (sizeof(n) + sizeof(int) - 1) & ~(sizeof(int) - 1) )
#define SQLITE_LIMIT_FUNCTION_ARG 6
#define SQLITE_CREATE_TEMP_TRIGGER 5
#define __inner_data_entrypoint(category) 
#define _In_NLS_string_(size) _SAL_L_Source_(_In_NLS_string_, (size), _When_((size) < 0, _In_z_) _When_((size) >= 0, _In_reads_(size)))
#define __inexpressible_writableTo(size) 
#define _Deref_pre_z_cap_x_(size) _SAL1_1_Source_(_Deref_pre_z_cap_x_, (size), _Deref_pre1_impl_(__notnull_impl_notref) _Deref_pre2_impl_(__zterm_impl,__cap_x_impl(size)) _Pre_valid_impl_)
#define _Inout_count_(size) _SAL1_1_Source_(_Inout_count_, (size), _Prepost_count_(size))
#define __FLT16_MAX_EXP__ 16
#define SQLITE_TESTCTRL_ONCE_RESET_THRESHOLD 19
#define __deref_out_bcount_z_opt(size) _SAL1_Source_(__deref_out_bcount_z_opt, (size), __deref_out_bcount_opt(size) __post __deref __nullterminated)
#define __drv_allocatesMem(kind) _SAL_L_Source_(__drv_allocatesMem, (kind), _Post_ _SA_annotes1(SAL_NeedsRelease,__yes))
#define __refparam 
#define _Outptr_result_buffer_to_(s,c) 
#define _Field_size_opt_(s) 
#define _Out_opt_capcount_x_(capcount) _SAL1_1_Source_(_Out_opt_capcount_x_, (capcount), _Pre_opt_cap_x_(capcount) _Post_valid_impl_ _Post_count_x_(capcount))
#define _Deref_pre_opt_cap_(size) _SAL1_1_Source_(_Deref_pre_opt_cap_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre1_impl_(__cap_impl(size)))
#define _Group_(a) 
#define __kernel_driver 
#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_1(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1) __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_1_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName ##_s, _SalAttributeDst, _DstType, _DstType, _Dst, _TType1, _TArg1)
#define _Pre_opt_valid_cap_x_(size) _SAL1_1_Source_(_Pre_opt_valid_cap_x_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__cap_x_impl(size)) _Pre_valid_impl_)
#define SQLITE_DELETE 9
#define __deref_opt_out_bcount_part(size,length) _SAL1_Source_(__deref_opt_out_bcount_part, (size,length), __deref_out_bcount_part(size,length) __pre_except_maybenull)
#define SQLITE_IOCAP_SEQUENTIAL 0x00000400
#define _Deref_prepost_z_cap_(size) _SAL1_1_Source_(_Deref_prepost_z_cap_, (size), _Deref_pre_z_cap_(size) _Deref_post_z_cap_(size))
#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2) __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName ##_s, _DstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2)
#define __BIGGEST_ALIGNMENT__ 16
#define _Kernel_float_saved_ 
#define SQLITE_OPEN_MAIN_DB 0x00000100
#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_3(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2,_TType3,_TArg3) __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_3_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName ##_s, _DstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3)
#define BENIGN_RACE_END __pragma(warning(pop))
#define __deref_inout_ecount(size) _SAL1_Source_(__deref_inout_ecount, (size), __deref_inout __pre __deref __elem_writableTo(size) __post _Notref_ __deref __elem_writableTo(size))
#define SQLITE_CONFIG_MALLOC 4
#define __INT32_C(c) c
#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_4(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2,_TType3,_TArg3,_TType4,_TArg4) __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_4_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName ##_s, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3, _TType4, _TArg4)
#define _Deref2_ret1_impl_(p1) 
#define SQLITE_COPY 0
#define _CRT_APPEND(_Value1,_Value2) __CRT_APPEND(_Value1, _Value2)
#define _Deref_opt_out_opt_ _SAL1_1_Source_(_Deref_opt_out_opt_, (), _Out_opt_ _Deref_post_opt_valid_)
#define __xcount(size) _SAL1_Source_(__xcount, (size), __notnull __inexpressible_writableTo(size))
#define SQLITE_OPEN_READONLY 0x00000001
#define _Field_size_(s) 
#define _CRT_SECURE_NO_DEPRECATE 
#define _PGLOBAL 
#define _Requires_no_locks_held_ 
#define _Pre_ptrdiff_count_(ptr) _SAL1_1_Source_(_Pre_ptrdiff_count_, (ptr), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__count_x_impl(__ptrdiff(ptr))) _Pre_valid_impl_)
#define _Pre_opt_count_x_(size) _SAL1_1_Source_(_Pre_opt_count_x_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__count_x_impl(size)) _Pre_valid_impl_)
#define __deref_inout_opt _SAL1_Source_(__deref_inout_opt, (), __deref_inout __pre_deref_except_maybenull __post_deref_except_maybenull)
#define _Inout_opt_z_bytecap_c_(size) _SAL1_1_Source_(_Inout_opt_z_bytecap_c_, (size), _Pre_opt_z_bytecap_c_(size) _Post_z_)
#define _Notliteral_ 
#define __FLT128_HAS_DENORM__ 1
#define SQLITE_MUTEX_FAST 0
#define __out_ecount_opt(size) _SAL1_Source_(__out_ecount_opt, (size), _Out_writes_opt_(size))
#define SQLITE_CONSTRAINT_FOREIGNKEY (SQLITE_CONSTRAINT | (3<<8))
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1) __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName ##_s, _DstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1)
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2) __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName ##_s, _DstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2)
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_4(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2,_TType3,_TArg3,_TType4,_TArg4) __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_4_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName ##_s, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3, _TType4, _TArg4)
#define __deref_opt_xcount_opt(size) _SAL1_Source_(__deref_opt_xcount_opt, (size), __deref_xcount_opt(size) __exceptthat __maybenull)
#define SQLITE_INTEGER 1
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0_CGETS(_ReturnType,_DeclSpec,_FuncName,_SalAttributeDst,_DstType,_Dst) _CRT_INSECURE_DEPRECATE(_FuncName ##_s) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst);
#define _CRT_DEPRECATE_TEXT(_Text) __declspec(deprecated)
#define __FLT128_DIG__ 33
#define __SCHAR_WIDTH__ 8
#define _IRQL_requires_same_ 
#define __out_ecount_part_opt(size,length) _SAL1_Source_(__out_ecount_part_opt, (size,length), __out_ecount_part(size,length) __pre_except_maybenull)
#define _PRAGMA_DETECT_MISMATCH_STRING0(s) _PRAGMA_DETECT_MISMATCH_STRING1(s)
#define _PRAGMA_DETECT_MISMATCH_STRING1(s) #s
#define _UINTPTR_T_DEFINED 
#define __ORDER_PDP_ENDIAN__ 3412
#define _Out_opt_z_bytecap_post_bytecount_(cap,count) _SAL1_1_Source_(_Out_opt_z_bytecap_post_bytecount_, (cap,count), _Pre_opt_bytecap_(cap) _Post_valid_impl_ _Post_z_bytecount_(count))
#define __out_awcount(expr,size) _SAL1_Source_(__out_awcount, (expr,size), _Pre_ __notnull __byte_writableTo((expr) ? (size) : (size) * 2) _Post_ __valid __refparam)
#define _Inout_z_cap_x_(size) _SAL1_1_Source_(_Inout_z_cap_x_, (size), _Pre_z_cap_x_(size) _Post_z_)
#define __DECLARE_CPP_OVERLOAD_INLINE_NFUNC_0_0_EX(_ReturnType,_ReturnPolicy,_FuncName,_SecureFuncName,_SecureDstType,_DstType,_Dst) _CRT_INSECURE_DEPRECATE(_SecureFuncName) __inline _ReturnType __CRTDECL _FuncName(_DstType *_Dst)
#define _Inout_z_bytecap_c_(size) _SAL1_1_Source_(_Inout_z_bytecap_c_, (size), _Pre_z_bytecap_c_(size) _Post_z_)
#define SQLITE_DBSTATUS_DEFERRED_FKS 10
#define __deref_bcount_opt(size) _SAL1_Source_(__deref_bcount_opt, (size), __deref_bcount(size) __post_deref_except_maybenull)
#define _CRT_MANAGED_HEAP_DEPRECATE 
#define __ARM_64BIT_STATE 1
#define _Deref_pre_notnull_ _SAL1_1_Source_(_Deref_pre_notnull_, (), _Deref_pre1_impl_(__notnull_impl_notref))
#define SQLITE_FCNTL_TRACE 19
#define _Post_bytecount_(size) _SAL1_1_Source_(_Post_bytecount_, (size), _Post1_impl_(__bytecount_impl(size)) _Post_valid_impl_)
#define _Outptr_result_buffer_maybenull_(s) 
#define FTS5_TOKENIZE_DOCUMENT 0x0004
#define _Out_writes_z_(s) 
#define _Inout_opt_cap_(size) _SAL1_1_Source_(_Inout_opt_cap_, (size), _Pre_opt_valid_cap_(size) _Post_valid_)
#define _Deref_post_null_ _SAL1_1_Source_(_Deref_post_null_, (), _Deref_post1_impl_(__null_impl_notref))
#define __INT_FAST32_TYPE__ int
#define SQLITE_INDEX_CONSTRAINT_IS 72
#define SQLITE_IOCAP_BATCH_ATOMIC 0x00004000
#define SQLITE_TOOBIG 18
#define __in_ecount_z(size) _SAL1_Source_(__in_ecount_z, (size), _In_reads_z_(size))
#define _Prepost_count_c_(size) _SAL1_1_Source_(_Prepost_count_c_, (size), _Pre_count_c_(size) _Post_count_c_(size))
#define _Out_bytecapcount_(capcount) _SAL1_1_Source_(_Out_bytecapcount_, (capcount), _Pre_bytecap_(capcount) _Post_valid_impl_ _Post_bytecount_(capcount))
#define _Function_ignore_lock_checking_(e) 
#define SQLITE_IOERR_SHMMAP (SQLITE_IOERR | (21<<8))
#define _Ret_cap_x_(size) _SAL1_1_Source_(_Ret_cap_x_, (size), _Ret1_impl_(__notnull_impl_notref) _Ret1_impl_(__cap_x_impl(size)))
#define SQLITE_CREATE_TRIGGER 7
#define __FORCE_INSTANCE_EXTERN extern
#define _Deref_post3_impl_(p1,p2,p3) 
#define __FLT128_MIN__ 3.36210314311209350626267781732175260e-4932F128
#define _Scanf_format_string_impl_ 
#define __inout_bcount_part(size,length) _SAL1_Source_(__inout_bcount_part, (size,length), _Inout_updates_bytes_to_(size,length))
#define BENIGN_RACE_BEGIN __pragma(warning(push))
#define __UINT_LEAST16_TYPE__ short unsigned int
#define __inout_bcount(size) _SAL1_Source_(__inout_bcount, (size), _Inout_updates_bytes_(size))
#define SQLITE_STMTSTATUS_AUTOINDEX 3
#define _CRTIMP 
#define _Field_range_(l,h) 
#define SQLITE_TESTCTRL_PENDING_BYTE 11
#define _Unchanged_(e) _SAL2_Source_(_Unchanged_, (e), _At_(e, _Post_equal_to_(_Old_(e)) _Const_))
#define _Notnull_ 
#define SQLITE_ROW 100
#define __drv_defined(x) _Macro_defined_( #x )
#define _Prepost_opt_count_c_(size) _SAL1_1_Source_(_Prepost_opt_count_c_, (size), _Pre_opt_count_c_(size) _Post_count_c_(size))
#define __deref_opt_inout_ecount_z_opt(size) _SAL1_Source_(__deref_opt_inout_ecount_z_opt, (size), __deref_opt_inout_ecount_opt(size) __pre __deref __nullterminated __post __deref __nullterminated)
#define __deref_opt_bcount_opt(size) _SAL1_Source_(__deref_opt_bcount_opt, (size), __deref_bcount_opt(size) __pre_except_maybenull)
#define _Inout_updates_bytes_all_opt_(s) 
#define _Ret_opt_z_bytecap_(size) _SAL1_1_Source_(_Ret_opt_z_bytecap_, (size), _Ret1_impl_(__maybenull_impl_notref) _Ret2_impl_(__zterm_impl,__bytecap_impl(size)) _Ret_valid_impl_)
#define __null 
#define __field_ecount_full(size) _SAL1_Source_(__field_ecount_full, (size), __field_ecount_part(size,size))
#define _Kernel_releases_resource_(k) 
#define _In_count_(size) _SAL1_1_Source_(_In_count_, (size), _Pre_count_(size) _Deref_pre_readonly_)
#define __drv_neverHoldCancelSpinLock 
#define __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ 120000
#define _Outptr_result_bytebuffer_all_maybenull_(size) _SAL2_Source_(_Outptr_result_bytebuffer_all_maybenull_, (size), _Out_impl_ _Deref_post2_impl_(__maybenull_impl_notref, __bytecount_impl(size)))
#define __UINT64_MAX__ 0xffffffffffffffffULL
#define _CRTIMP_TYPEINFO _CRTIMP
#define __FLT_IS_IEC_60559__ 2
#define _Frees_ptr_opt_ _SAL_L_Source_(_Frees_ptr_opt_, (), _Pre_maybenull_ _Post_ptr_invalid_ __drv_freesMem(Mem))
#define SQLITE_TRANSIENT ((sqlite3_destructor_type)-1)
#define __out_ecount_full_z(size) _SAL1_Source_(__out_ecount_full_z, (size), __out_ecount_full(size) __post __nullterminated)
#define _IRQL_inout_ _IRQL_saves_ _IRQL_restores_
#define __GNUC_WIDE_EXECUTION_CHARSET_NAME "UTF-32LE"
#define _SQLITE3RTREE_H_ 
#define SQLITE_SHM_LOCK 2
#define SQLITE_CANTOPEN_ISDIR (SQLITE_CANTOPEN | (2<<8))
#define __deref_opt_inout_bcount_z(size) _SAL1_Source_(__deref_opt_inout_bcount_z, (size), __deref_opt_inout_bcount(size) __pre __deref __nullterminated __post __deref __nullterminated)
#define __FLT64X_DIG__ 33
#define __ARM_FEATURE_FMA 1
#define __deref_inout_ecount_opt(size) _SAL1_Source_(__deref_inout_ecount_opt, (size), __deref_inout_ecount(size) __pre_deref_except_maybenull __post_deref_except_maybenull)
#define __drv_mustHoldPriorityRegion 
#define _Ret_bytecap_c_(size) _SAL1_1_Source_(_Ret_bytecap_c_, (size), _Ret1_impl_(__notnull_impl_notref) _Ret1_impl_(__bytecap_c_impl(size)))
#define __INT8_TYPE__ signed char
#define __deref_opt_inout_bcount(size) _SAL1_Source_(__deref_opt_inout_bcount, (size), __deref_inout_bcount(size) __pre_except_maybenull)
#define SQLITE_SCANSTAT_SELECTID 5
#define _Deref_post_opt_bytecap_c_(size) _SAL1_1_Source_(_Deref_post_opt_bytecap_c_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post1_impl_(__bytecap_c_impl(size)))
#define SQLITE_OPEN_TEMP_JOURNAL 0x00001000
#define SQLITE_CONFIG_PMASZ 25
#define SQLITE_DROP_TEMP_VIEW 15
#define SQLITE_FCNTL_WIN32_GET_HANDLE 29
#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_1_EX(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SecureFuncName,_SecureDstType,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1) _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1);
#define SQLITE_TRACE_CLOSE 0x08
#define __GCC_ASM_FLAG_OUTPUTS__ 1
#define __arm64__ 1
#define __inner_allocator 
#define _Pre_accessible_bytes_when_(context,previousContext,expr) 
#define __field_ecount_part(size,init) _SAL1_Source_(__field_ecount_part, (size,init), __notnull __elem_writableTo(size) __elem_readableTo(init))
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define _Ret_bytecap_x_(size) _SAL1_1_Source_(_Ret_bytecap_x_, (size), _Ret1_impl_(__notnull_impl_notref) _Ret1_impl_(__bytecap_x_impl(size)))
#define _Accessible_bytes_(context,expr) 
#define _IRQL_restores_global_(k,s) 
#define __inner_assume_bound_dec 
#define __inout_ecount_opt(size) _SAL1_Source_(__inout_ecount_opt, (size), __inout_ecount(size) __pre_except_maybenull)
#define _Outptr_opt_result_nullonfailure_ 
#define _Inout_cap_c_(size) _SAL1_1_Source_(_Inout_cap_c_, (size), _Pre_valid_cap_c_(size) _Post_valid_)
#define _Analysis_suppress_lock_checking_(e) 
#define _IRQL_requires_(i) 
#define __drv_strictType(typename,mode) _SAL1_1_Source_(__drv_strictType, (typename,mode), _Pre_ _SA_annotes2(SAL_strictType, typename, mode))
#define __deref_in_xcount(size) _SAL1_Source_(__deref_in_xcount, (size), __deref_in _Pre_ __deref __inexpressible_readableTo(size))
#define SQLITE_IOERR_DIR_FSYNC (SQLITE_IOERR | (5<<8))
#define _Outptr_opt_result_buffer_(s) 
#define _Ret_null_ 
#define _Outptr_result_bytebuffer_(s) 
#define SQLITE_DBCONFIG_LOOKASIDE 1001
#define SQLITE_TESTCTRL_INTERNAL_FUNCTIONS 17
#define __FLT_RADIX__ 2
#define _Ret1_impl_(p1) 
#define __INT_LEAST16_TYPE__ short int
#define _Inout_opt_count_(size) _SAL1_1_Source_(_Inout_opt_count_, (size), _Prepost_opt_count_(size))
#define __deref_out_ecount_nz(size) _SAL1_Source_(__deref_out_ecount_nz, (size), __deref_out_ecount(size))
#define _Prepost_valid_ _SAL1_1_Source_(_Prepost_valid_, (), _Pre_valid_ _Post_valid_)
#define __ARM_ARCH_PROFILE 65
#define __LDBL_EPSILON__ 2.22044604925031308084726333618164062e-16L
#define __UINTMAX_C(c) c ## UL
#define _Pre_valid_impl_ 
#define _Pre_readable_byte_size_(s) _Pre_ _Readable_bytes_(s) _Pre_ _Valid_
#define _Deref_prepost_bytecap_x_(size) _SAL1_1_Source_(_Deref_prepost_bytecap_x_, (size), _Deref_pre_bytecap_x_(size) _Deref_post_bytecap_x_(size))
#define __ARM_PCS_AAPCS64 1
#define _In_count_c_(size) _SAL1_1_Source_(_In_count_c_, (size), _Pre_count_c_(size) _Deref_pre_readonly_)
#define _Post_writable_byte_size_(s) _Post_ _Writable_bytes_(s)
#define _Out_writes_bytes_to_opt_(s,c) 
#define ___drv_unit_kernel_code _SAL_L_Source_(___drv_unit_kernel_code, (), _SA_annotes0(SAL_kernel) _SA_annotes0(SAL_nodriver))
#define _Out_opt_capcount_(capcount) _SAL1_1_Source_(_Out_opt_capcount_, (capcount), _Pre_opt_cap_(capcount) _Post_valid_impl_ _Post_count_(capcount))
#define SQLITE_DETERMINISTIC 0x000000800
#define _Out_capcount_x_(capcount) _SAL1_1_Source_(_Out_capcount_x_, (capcount), _Pre_cap_x_(capcount) _Post_valid_impl_ _Post_count_x_(capcount))
#define __DEFINE_CPP_OVERLOAD_INLINE_FUNC_0_0_EX(_ReturnType,_ReturnPolicy,_FuncName,_SecureFuncName,_SecureDstType,_DstType,_Dst) 
#define _Deref_pre_opt_z_ _SAL1_1_Source_(_Deref_pre_opt_z_, (), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre1_impl_(__zterm_impl) _Pre_valid_impl_)
#define __SIG_ATOMIC_MAX__ 0x7fffffff
#define _Post_equal_to_(e) 
#define __deref_out_z_opt _SAL1_Source_(__deref_out_z_opt, (), _Outptr_result_maybenull_z_)
#define _Post_ptr_invalid_ _Post_ _Notvalid_
#define __has_lock_property(kind) 
#define _Ret_cap_(size) _SAL1_1_Source_(_Ret_cap_, (size), _Ret1_impl_(__notnull_impl_notref) _Ret1_impl_(__cap_impl(size)))
#define __inout_ecount_full(size) _SAL1_Source_(__inout_ecount_full, (size), _Inout_updates_all_(size))
#define _Deref2_post1_impl_(p1) 
#define __pre 
#define SQLITE_MUTEX_STATIC_APP2 9
#define __INT_LEAST64_WIDTH__ 64
#define __deref_opt_out_ecount_part_opt(size,length) _SAL1_Source_(__deref_opt_out_ecount_part_opt, (size,length), __deref_out_ecount_part_opt(size,length) __pre_except_maybenull)
#define _Inout_updates_to_(s,c) 
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1_ARGLIST_EX(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SecureFuncName,_VFuncName,_SecureVFuncName,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1) _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, ...); _CRT_INSECURE_DEPRECATE(_SecureVFuncName) _DeclSpec _ReturnType __cdecl _VFuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, va_list _Args);
#define _Deref_pre_opt_valid_bytecap_(size) _SAL1_1_Source_(_Deref_pre_opt_valid_bytecap_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre1_impl_(__bytecap_impl(size)) _Pre_valid_impl_)
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define SQLITE_CONSTRAINT_NOTNULL (SQLITE_CONSTRAINT | (5<<8))
#define _Ret_count_(size) _SAL1_1_Source_(_Ret_count_, (size), _Ret1_impl_(__notnull_impl_notref) _Ret1_impl_(__count_impl(size)) _Ret_valid_impl_)
#define SQLITE_OPEN_NOMUTEX 0x00008000
#define _Pre_opt_valid_bytecap_c_(size) _SAL1_1_Source_(_Pre_opt_valid_bytecap_c_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__bytecap_c_impl(size)) _Pre_valid_impl_)
#define _Deref_in_bound_ _SAL1_1_Source_(_Deref_in_bound_, (), _Deref_in_bound_impl_)
#define SQLITE_ABORT_ROLLBACK (SQLITE_ABORT | (2<<8))
#define __SIZEOF_PTRDIFF_T__ 8
#define _Outptr_opt_result_bytebuffer_all_(size) _SAL2_Source_(_Outptr_opt_result_bytebuffer_all_, (size), _Out_opt_impl_ _Deref_post2_impl_(__notnull_impl_notref, __bytecount_impl(size)))
#define SQLITE_DESERIALIZE_READONLY 4
#define SQLITE_INDEX_CONSTRAINT_ISNULL 71
#define UNALIGNED 
#define __arm64 1
#define SQLITE_CANTOPEN_DIRTYWAL (SQLITE_CANTOPEN | (5<<8))
#define __ATOMIC_RELAXED 0
#define SQLITE_EXPERIMENTAL 
#define PARTLY_WITHIN 1
#define _Benign_race_begin_ 
#define _CRT_SECURE_NO_DEPRECATE_CORE 
#define _Has_lock_level_(n) 
#define __DECLARE_CPP_OVERLOAD_INLINE_NFUNC_0_3_EX(_ReturnType,_ReturnPolicy,_FuncName,_SecureFuncName,_SecureDstType,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2,_TType3,_TArg3) _CRT_INSECURE_DEPRECATE(_SecureFuncName) __inline _ReturnType __CRTDECL _FuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3)
#define _Kernel_entry_ 
#define __xcount_opt(size) _SAL1_Source_(__xcount_opt, (size), __xcount(size) __exceptthat __maybenull)
#define SQLITE_DBSTATUS_CACHE_WRITE 9
#define __deref_out_ecount_full(size) _SAL1_Source_(__deref_out_ecount_full, (size), __deref_out_ecount_part(size,size))
#define _Post_impl_ 
#define __deref_opt_inout_nz _SAL1_Source_(__deref_opt_inout_nz, (), __deref_opt_inout)
#define SQLITE_WIN32_DATA_DIRECTORY_TYPE 1
#define SQLITE_IOERR_SHMSIZE (SQLITE_IOERR | (19<<8))
#define _Deref_pre2_impl_(p1,p2) 
#define SQLITE_DBCONFIG_MAX 1015
#define SQLITE_ERROR_MISSING_COLLSEQ (SQLITE_ERROR | (1<<8))
#define __in_bcount_nz_opt(size) _SAL1_Source_(__in_bcount_nz_opt, (size), __in_bcount_opt(size))
#define __deref_opt_inout_xcount_full_opt(size) _SAL1_Source_(__deref_opt_inout_scount_full_opt, (size), __deref_inout_xcount_full_opt(size) __exceptthat __maybenull)
#define _Post_z_bytecount_(size) _SAL1_1_Source_(_Post_z_bytecount_, (size), _Post2_impl_(__zterm_impl,__bytecount_impl(size)) _Post_valid_impl_)
#define _Pre_opt_bytecap_(size) _SAL1_1_Source_(_Pre_opt_bytecap_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__bytecap_impl(size)))
#define _Ret_valid_ 
#define _Post_z_bytecount_c_(size) _SAL1_1_Source_(_Post_z_bytecount_c_, (size), _Post2_impl_(__zterm_impl,__bytecount_c_impl(size)) _Post_valid_impl_)
#define SQLITE_INDEX_CONSTRAINT_LE 8
#define __LDBL_DIG__ 15
#define SQLITE_SUBTYPE 0x000100000
#define _Out_opt_z_cap_m_(mult,size) _SAL1_1_Source_(_Out_opt_z_cap_m_, (mult,size), _Pre_opt_cap_m_(mult,size) _Post_valid_impl_ _Post_z_)
#define _Ret_writes_maybenull_(s) 
#define _Deref_post_opt_z_cap_(size) _SAL1_1_Source_(_Deref_post_opt_z_cap_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post2_impl_(__zterm_impl,__cap_impl(size)) _Post_valid_impl_)
#define _CRT_NOFORCE_MANIFEST 
#define __FLT64_IS_IEC_60559__ 2
#define __inner_exceptthat 
#define _Deref_pre1_impl_(p1) 
#define __FLT16_IS_IEC_60559__ 2
#define _When_(c,a) 
#define _Inout_opt_count_c_(size) _SAL1_1_Source_(_Inout_opt_count_c_, (size), _Prepost_opt_count_c_(size))
#define _Raises_SEH_exception_ 
#define _Inout_z_bytecap_x_(size) _SAL1_1_Source_(_Inout_z_bytecap_x_, (size), _Pre_z_bytecap_x_(size) _Post_z_)
#define SQLITE_TESTCTRL_OPTIMIZATIONS 15
#define SQLITE_TESTCTRL_LOCALTIME_FAULT 18
#define SQLITE_MUTEX_STATIC_OPEN 4
#define _Deref_pre_valid_bytecap_c_(size) _SAL1_1_Source_(_Deref_pre_valid_bytecap_c_, (size), _Deref_pre1_impl_(__notnull_impl_notref) _Deref_pre1_impl_(__bytecap_c_impl(size)) _Pre_valid_impl_)
#define SQLITE_SET_LOCKPROXYFILE SQLITE_FCNTL_SET_LOCKPROXYFILE
#define __INT_FAST16_MAX__ 0x7fff
#define _Interlocked_operand_ 
#define SQLITE_TESTCTRL_PRNG_RESTORE 6
#define _Group_impl_(annos) 
#define SQLITE_ATTACH 24
#define _CRT_ALTERNATIVE_INLINES 
#define SQLITE_CONFIG_SCRATCH 6
#define SQLITE_PREPARE_PERSISTENT 0x01
#define _Ret_writes_to_ptr_(p) 
#define _Use_decl_anno_impl_ 
#define _TAGLC_ID_DEFINED 
#define __GCC_CONSTRUCTIVE_SIZE 64
#define _Unreferenced_parameter_ _SAL2_Source_(_Unreferenced_parameter_, (), _Const_)
#define _Inout_z_count_c_(size) _SAL1_1_Source_(_Inout_z_count_c_, (size), _Prepost_z_ _Prepost_count_c_(size))
#define __field_bcount_part_opt(size,init) _SAL1_Source_(__field_bcount_part_opt, (size,init), __maybenull __byte_writableTo(size) __byte_readableTo(init))
#define SQLITE_CONSTRAINT_CHECK (SQLITE_CONSTRAINT | (1<<8))
#define __FLT64_DIG__ 15
#define __UINT_FAST32_MAX__ 0xffffffffU
#define _In_opt_z_count_c_(size) _SAL1_1_Source_(_In_opt_z_count_c_, (size), _Pre_opt_z_ _Pre_opt_count_c_(size) _Deref_pre_readonly_)
#define _Deref_pre_opt_bytecap_x_(size) _SAL1_1_Source_(_Deref_pre_opt_bytecap_x_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre1_impl_(__bytecap_x_impl(size)))
#define __UINT_LEAST64_TYPE__ long long unsigned int
#define SQLITE_CALLBACK 
#define __FLT16_EPSILON__ 9.76562500000000000000000000000000000e-4F16
#define __inout_opt _SAL1_Source_(__inout_opt, (), _Inout_opt_)
#define _Scanf_s_format_string_params_(x) 
#define _Deref_post_z_cap_c_(size) _SAL1_1_Source_(_Deref_post_z_cap_c_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post2_impl_(__zterm_impl,__cap_c_impl(size)) _Post_valid_impl_)
#define __FLT_HAS_QUIET_NAN__ 1
#define _Ret_writes_bytes_to_(s,c) 
#define SQLITE_CONFIG_LOG 16
#define SQLITE_DBCONFIG_ENABLE_TRIGGER 1003
#define __notreadonly 
#define __FLT_MAX_10_EXP__ 38
#define _Prepost_opt_count_x_(size) _SAL1_1_Source_(_Prepost_opt_count_x_, (size), _Pre_opt_count_x_(size) _Post_count_x_(size))
#define _Deref_prepost_cap_(size) _SAL1_1_Source_(_Deref_prepost_cap_, (size), _Deref_pre_cap_(size) _Deref_post_cap_(size))
#define __deref_opt_out_ecount_full(size) _SAL1_Source_(__deref_opt_out_ecount_full, (size), __deref_out_ecount_full(size) __pre_except_maybenull)
#define _W64 
#define _Inout_opt_cap_c_(size) _SAL1_1_Source_(_Inout_opt_cap_c_, (size), _Pre_opt_valid_cap_c_(size) _Post_valid_)
#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_4_EX(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SecureFuncName,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2,_TType3,_TArg3,_TType4,_TArg4) _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3, _TType4 _TArg4);
#define SQLITE_ANY 5
#define SQLITE_NOTICE 27
#define _Pre_z_cap_c_(size) _SAL1_1_Source_(_Pre_z_cap_c_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre2_impl_(__zterm_impl,__cap_c_impl(size)) _Pre_valid_impl_)
#define _Inout_bytecap_x_(size) _SAL1_1_Source_(_Inout_bytecap_x_, (size), _Pre_valid_bytecap_x_(size) _Post_valid_)
#define __LONG_MAX__ 0x7fffffffffffffffL
#define __FLT64X_HAS_DENORM__ 1
#define SQLITE_SHM_SHARED 4
#define _Deref_pre_maybenull_ _SAL1_1_Source_(_Deref_pre_maybenull_, (), _Deref_pre1_impl_(__maybenull_impl_notref))
#define __drv_raisesIRQL _SAL1_1_Source_(__drv_raisesIRQL, (), _IRQL_raises_)
#define _Inout_bytecount_x_(size) _SAL1_1_Source_(_Inout_bytecount_x_, (size), _Prepost_bytecount_x_(size))
#define __FLT_HAS_INFINITY__ 1
#define __GNUC_EXECUTION_CHARSET_NAME "UTF-8"
#define _Pre_opt_cap_for_(param) _SAL1_1_Source_(_Pre_opt_cap_for_, (param), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__cap_for_impl(param)))
#define _In_ptrdiff_count_(size) _SAL1_1_Source_(_In_ptrdiff_count_, (size), _Pre_ptrdiff_count_(size) _Deref_pre_readonly_)
#define SQLITE_DROP_VIEW 17
#define _Ret_writes_to_ptr_z_(p) 
#define _In_opt_count_(size) _SAL1_1_Source_(_In_opt_count_, (size), _Pre_opt_count_(size) _Deref_pre_readonly_)
#define __inner_this_out_validated(typ_raw) 
#define _Must_inspect_impl_ 
#define _Reallocation_function_(after,before,size) _Success_((after) != NULL || (size) == 0) _At_((after), _Post_maybenull_ _Post_writable_byte_size_(size) _When_(((before) == NULL || (size) > 0), _Must_inspect_result_)) _At_((before), _Post_ptr_invalid_ __drv_freesMem(Mem))
#define __ALTDECL __cdecl
#define __out_xcount(size) _SAL1_Source_(__out_xcount, (size), __xcount(size) _Post_ __valid __refparam)
#define SQLITE_NOTICE_RECOVER_ROLLBACK (SQLITE_NOTICE | (2<<8))
#define SQLITE_NOLFS 22
#define __DBL_HAS_DENORM__ 1
#define __UINT_FAST16_TYPE__ short unsigned int
#define SQLITE_IOERR_FSYNC (SQLITE_IOERR | (4<<8))
#define SQLITE_IOERR_CLOSE (SQLITE_IOERR | (16<<8))
#define _Deref_post_opt_bytecap_x_(size) _SAL1_1_Source_(_Deref_post_opt_bytecap_x_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post1_impl_(__bytecap_x_impl(size)))
#define SQLITE_SHM_EXCLUSIVE 8
#define _Notref_ _Notref_impl_
#define __FLT32X_HAS_QUIET_NAN__ 1
#define SQLITE_OPEN_WAL 0x00080000
#define __CHAR16_TYPE__ short unsigned int
#define __PRAGMA_REDEFINE_EXTNAME 1
#define __maybevalid 
#define _Deref_prepost_opt_count_x_(size) _SAL1_1_Source_(_Deref_prepost_opt_count_x_, (size), _Deref_pre_opt_count_x_(size) _Deref_post_opt_count_x_(size))
#define _CRT_ALIGN(x) __declspec(align(x))
#define SQLITE_LOCKED 6
#define __deref_in _SAL1_Source_(__deref_in, (), __in _Pre_ __deref __deref __readonly)
#define __SPECSTRINGS_STRICT_LEVEL 1
#define __SIZE_WIDTH__ 64
#define __bcount_opt(size) _SAL1_Source_(__bcount_opt, (size), __bcount(size) __pre_except_maybenull)
#define SQLITE_IOERR_BEGIN_ATOMIC (SQLITE_IOERR | (29<<8))
#define __INT_LEAST16_MAX__ 0x7fff
#define __in_data_source(src_sym) _SAL_L_Source_(__in_data_source, (src_sym), _Pre_ __inner_data_source(#src_sym))
#define __FLT16_NORM_MAX__ 6.55040000000000000000000000000000000e+4F16
#define SQLITE_CONFIG_PCACHE_HDRSZ 24
#define SQLITE_IOCAP_ATOMIC512 0x00000002
#define _Deref_inout_z_bytecap_c_(size) _SAL1_1_Source_(_Deref_inout_z_bytecap_c_, (size), _Deref_pre_z_bytecap_c_(size) _Deref_post_z_)
#define __deref_out_bcount_z(size) _SAL1_Source_(__deref_out_bcount_z, (size), __deref_out_bcount(size) __post __deref __nullterminated)
#define __deref_opt_out_ecount_nz_opt(size) _SAL1_Source_(__deref_opt_out_ecount_nz_opt, (size), __deref_opt_out_ecount_opt(size))
#define SQLITE_SCHEMA 17
#define __DEFINE_CPP_OVERLOAD_INLINE_FUNC_0_3_EX(_ReturnType,_ReturnPolicy,_FuncName,_SecureFuncName,_SecureDstType,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2,_TType3,_TArg3) 
#define _Deref_post_opt_z_ _SAL1_1_Source_(_Deref_post_opt_z_, (), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post1_impl_(__zterm_impl) _Post_valid_impl_)
#define __FLT32_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F32
#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_SIZE(_DeclSpec,_FuncName,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2) __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_SIZE_EX(_DeclSpec, _FuncName, _FuncName ##_s, _DstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2)
#define SQLITE_TESTCTRL_RESERVE 14
#define SQLITE_INDEX_CONSTRAINT_REGEXP 67
#define _Pre_valid_bytecap_x_(size) _SAL1_1_Source_(_Pre_valid_bytecap_x_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__bytecap_x_impl(size)) _Pre_valid_impl_)
#define __INT_LEAST64_TYPE__ long long int
#define __field_range(lb,ub) _SAL_L_Source_(__field_range, (lb,ub), __range(lb,ub))
#define __INT16_TYPE__ short int
#define __INT_LEAST8_TYPE__ signed char
#define __in_awcount(expr,size) _SAL1_Source_(__in_awcount, (expr,size), _Pre_ __valid _Pre_ _Notref_ __deref __readonly __byte_readableTo((expr) ? (size) : (size) * 2))
#define _Writable_bytes_impl_(size) 
#define __FLT16_MAX__ 6.55040000000000000000000000000000000e+4F16
#define __deref_opt_in_bcount(size) _SAL1_Source_(__deref_opt_in_bcount, (size), __deref_in_bcount(size) __exceptthat __maybenull)
#define FULLY_WITHIN 2
#define __drv_notInTry _SAL_L_Source_(__drv_notInTry, (), _Pre_ _SA_annotes1(SAL_inTry,__no))
#define SQLITE_CONFIG_MUTEX 10
#define SQLITE_STATUS_MALLOC_COUNT 9
#define __STDC_VERSION__ 201710L
#define SQLITE_STATUS_MALLOC_SIZE 5
#define _In_count_x_(size) _SAL1_1_Source_(_In_count_x_, (size), _Pre_count_x_(size) _Deref_pre_readonly_)
#define SQLITE_FCNTL_SIZE_HINT 5
#define _Outref_result_nullonfailure_ 
#define __deref_opt_out_xcount_part(size,length) _SAL1_Source_(__deref_opt_out_xcount_part, (size,length), __deref_out_xcount_part(size,length) __exceptthat __maybenull)
#define __in_range(lb,ub) _SAL_L_Source_(__in_range, (lb,ub), _Pre_ __inner_range(lb,ub))
#define SQLITE_GET_LOCKPROXYFILE SQLITE_FCNTL_GET_LOCKPROXYFILE
#define _IRQL_saves_ 
#define SQLITE_OPEN_MAIN_JOURNAL 0x00000800
#define __drv_functionClass(x) _SAL1_Source_(__drv_functionClass, (x), _Function_class_(x))
#define __INT_FAST8_MAX__ 0x7f
#define __ARM_ARCH 8
#define __deref_bcount(size) _SAL1_Source_(__deref_bcount, (size), _Notref_ __ecount(1) __post _Notref_ __elem_readableTo(1) __post _Notref_ __deref _Notref_ __notnull __post __deref __byte_writableTo(size))
#define _Deref_prepost_opt_z_bytecap_(size) _SAL1_1_Source_(_Deref_prepost_opt_z_bytecap_, (size), _Deref_pre_opt_z_bytecap_(size) _Deref_post_opt_z_bytecap_(size))
#define __FLT128_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define __INTPTR_MAX__ 0x7fffffffffffffffL
#define __inout_nz_opt _SAL1_Source_(__inout_nz_opt, (), __inout_opt)
#define _CRTIMP2 
#define __inout_xcount(size) _SAL1_Source_(__inout_xcount, (size), __out_xcount(size) _Pre_ __valid)
#define _INC_VADEFS 
#define _Deref_pre_opt_z_cap_(size) _SAL1_1_Source_(_Deref_pre_opt_z_cap_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre2_impl_(__zterm_impl,__cap_impl(size)) _Pre_valid_impl_)
#define _In_bound_ _SAL1_1_Source_(_In_bound_, (), _In_bound_impl_)
#define __out_opt _SAL1_Source_(__out_opt, (), _Out_opt_)
#define _Deref_pre_valid_bytecap_x_(size) _SAL1_1_Source_(_Deref_pre_valid_bytecap_x_, (size), _Deref_pre1_impl_(__notnull_impl_notref) _Deref_pre1_impl_(__bytecap_x_impl(size)) _Pre_valid_impl_)
#define SQLITE_APICALL 
#define _Pre_readonly_ _SAL1_1_Source_(_Pre_readonly_, (), _Pre1_impl_(__readaccess_impl_notref))
#define _IRQL_always_function_max_(i) 
#define SQLITE_PROTOCOL 15
#define _Deref_post_opt_z_bytecap_(size) _SAL1_1_Source_(_Deref_post_opt_z_bytecap_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post2_impl_(__zterm_impl,__bytecap_impl(size)) _Post_valid_impl_)
#define __field_encoded_pointer _SAL_L_Source_(__field_encoded_pointer, (), __inner_encoded)
#define _Valid_ 
#define __ecount(size) _SAL1_Source_(__ecount, (size), __notnull __elem_writableTo(size))
#define _Deref_post2_impl_(p1,p2) 
#define __FLT64_HAS_QUIET_NAN__ 1
#define __in_z_opt _SAL1_Source_(__in_z_opt, (), _In_opt_z_)
#define _Pre_opt_valid_bytecap_x_(size) _SAL1_1_Source_(_Pre_opt_valid_bytecap_x_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__bytecap_x_impl(size)) _Pre_valid_impl_)
#define SQLITE_BLOB 4
#define __out_xcount_part_opt(size,length) _SAL1_Source_(__out_xcount_part_opt, (size,length), __out_xcount_part(size,length) __exceptthat __maybenull)
#define __in_bcount_z_opt(size) _SAL1_Source_(__in_bcount_z_opt, (size), __in_bcount_opt(size) __pre __nullterminated)
#define __drv_maxFunctionIRQL(irql) _SAL1_1_Source_(__drv_maxFunctionIRQL, (irql), _IRQL_always_function_max_(irql))
#define SQLITE_IOERR_WRITE (SQLITE_IOERR | (3<<8))
#define SQLITE_CREATE_TEMP_VIEW 6
#define SQLITE_IOERR_RDLOCK (SQLITE_IOERR | (9<<8))
#define _Deref_post_opt_bytecap_(size) _SAL1_1_Source_(_Deref_post_opt_bytecap_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post1_impl_(__bytecap_impl(size)))
#define _Outptr_opt_result_bytebuffer_to_maybenull_(size,count) _SAL2_Source_(_Outptr_opt_result_bytebuffer_to_maybenull_, (size, count), _Out_opt_impl_ _Deref_post3_impl_(__maybenull_impl_notref, __bytecap_impl(size), __bytecount_impl(count)))
#define _Deref_in_bound_impl_ 
#define __INTMAX_TYPE__ long int
#define __FLT64X_MIN_EXP__ (-16381)
#define _Post_null_ _SAL2_Source_(_Post_null_, (), _Post1_impl_(__null_impl))
#define __FLT32_MIN_10_EXP__ (-37)
#define _CRTIMP_NOIA64 _CRTIMP
#define __deref_opt_inout_nz_opt _SAL1_Source_(__deref_opt_inout_nz_opt, (), __deref_opt_inout_opt)
#define _SAL_VERSION_CHECK(_A) 
#define __FLT32X_DIG__ 15
#define __deref_out_bound _SAL_L_Source_(__deref_out_bound, (), _Post_ __deref __inner_bound)
#define _Ret_writes_to_maybenull_(s,c) 
#define _In_z_count_c_(size) _SAL1_1_Source_(_In_z_count_c_, (size), _Pre_z_ _Pre_count_c_(size) _Deref_pre_readonly_)
#define __deref_opt_out_xcount_opt(size) _SAL1_Source_(__deref_opt_out_xcount_opt, (size), __deref_out_xcount_opt(size) __exceptthat __maybenull)
#define __PTRDIFF_WIDTH__ 64
#define _CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES 1
#define CSALCAT2(x,y) 
#define __inout_bcount_full_opt(size) _SAL1_Source_(__inout_bcount_full_opt, (size), __inout_bcount_full(size) __pre_except_maybenull)
#define SQLITE_FCNTL_JOURNAL_POINTER 28
#define _CRT_SECURE_NO_WARNINGS 
#define _Out_bytecap_post_bytecount_(cap,count) _SAL1_1_Source_(_Out_bytecap_post_bytecount_, (cap,count), _Pre_bytecap_(cap) _Post_valid_impl_ _Post_bytecount_(count))
#define _Post_z_bytecount_x_(size) _SAL1_1_Source_(_Post_z_bytecount_x_, (size), _Post2_impl_(__zterm_impl,__bytecount_x_impl(size)) _Post_valid_impl_)
#define _Deref_post_z_ _SAL1_1_Source_(_Deref_post_z_, (), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post1_impl_(__zterm_impl) _Post_valid_impl_)
#define SQLITE_IOCAP_UNDELETABLE_WHEN_OPEN 0x00000800
#define _Out_opt_bytecapcount_x_(capcount) _SAL1_1_Source_(_Out_opt_bytecapcount_x_, (capcount), _Pre_opt_bytecap_x_(capcount) _Post_valid_impl_ _Post_bytecount_x_(capcount))
#define __FLT64_HAS_INFINITY__ 1
#define _CRTIMP2_MEMBER_FUNCTION(type) _CRTIMP2 type _CRTIMP2_MEMBER_FUNCTION_CALLING_CONVENTION
#define __FLT64X_MAX__ 1.18973149535723176508575932662800702e+4932F64x
#define SQLITE_TRANSACTION 22
#define _Literal_impl_ 
#define __FLT16_HAS_INFINITY__ 1
#define __drv_mustHoldCancelSpinLock 
#define __inner_fallthrough_dec 
#define SQLITE_VERSION_NUMBER 3030001
#define _SLOTSIZEOF(t) (sizeof(t))
#define __drv_formatString(kind) _SAL1_1_Source_(__drv_formatString, (kind), _SA_annotes1(SAL_IsFormatString, #kind))
#define SQLITE_FCNTL_SET_LOCKPROXYFILE 3
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#define _Pre_z_ _Pre_ _Null_terminated_
#define __inout_nz _SAL1_Source_(__inout_nz, (), __inout)
#define SQLITE_FCNTL_MMAP_SIZE 18
#define __inout_ecount_part(size,length) _SAL1_Source_(__inout_ecount_part, (size,length), _Inout_updates_to_(size,length))
#define __PTRDIFF_MAX__ 0x7fffffffffffffffL
#define _User_ 
#define __deref_out_ecount_iterator(size,incr) _SAL1_Source_(__deref_out_ecount_iterator, (size,incr), __inout _Pre_ __deref __elem_writableTo(size) __deref_out_range(==, _Old_(*_Curr_) + incr))
#define _Outptr_opt_result_bytebuffer_to_(s,c) 
#define SQLITE_MUTEX_STATIC_PMEM 7
#define __FLT16_MANT_DIG__ 11
#define __field_xcount(size) _SAL1_Source_(__field_xcount, (size), __notnull __inexpressible_writableTo(size))
#define SQLITE_FCNTL_RBU 26
#define __drv_constant _SAL1_1_Source_(__drv_constant, (), _Literal_)
#define _Analysis_mode_impl_(mode) _SAL2_Source_(_Analysis_mode_impl_, (mode), _SA_annotes1(SAL_analysisMode, #mode))
#define _Inout_count_c_(size) _SAL1_1_Source_(_Inout_count_c_, (size), _Prepost_count_c_(size))
#define _Pre_writeonly_ _SAL1_1_Source_(_Pre_writeonly_, (), _Pre1_impl_(__writeaccess_impl_notref))
#define _Memory_origin_when_(previousContext,context) 
#define SQLITE_CANTOPEN_NOTEMPDIR (SQLITE_CANTOPEN | (1<<8))
#define __INTPTR_TYPE__ long int
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_SIZE(_DeclSpec,_FuncName,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2) __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_SIZE_EX(_DeclSpec, _FuncName, _FuncName ##_s, _DstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2)
#define __UINT16_TYPE__ short unsigned int
#define __WCHAR_TYPE__ int
#define __drv_typeBitset 2
#define _Deref_post_valid_cap_(size) _SAL1_1_Source_(_Deref_post_valid_cap_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post1_impl_(__cap_impl(size)) _Post_valid_impl_)
#define _Deref_prepost_opt_cap_x_(size) _SAL1_1_Source_(_Deref_prepost_opt_cap_x_, (size), _Deref_pre_opt_cap_x_(size) _Deref_post_opt_cap_x_(size))
#define _MRTIMP2_CALLING_CONVENTION __cdecl
#define _ARGMAX 100
#define SQLITE_MUTEX_STATIC_LRU2 7
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_4_EX(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SecureFuncName,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2,_TType3,_TArg3,_TType4,_TArg4) _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3, _TType4 _TArg4);
#define _Deref_pre_z_bytecap_(size) _SAL1_1_Source_(_Deref_pre_z_bytecap_, (size), _Deref_pre1_impl_(__notnull_impl_notref) _Deref_pre2_impl_(__zterm_impl,__bytecap_impl(size)) _Pre_valid_impl_)
#define _Out_range_(l,h) 
#define __in_ecount_nz_opt(size) _SAL1_Source_(__in_ecount_nz_opt, (size), __in_ecount_opt(size))
#define __deref_out_bcount_nz(size) _SAL1_Source_(__deref_out_bcount_nz, (size), __deref_out_ecount(size))
#define _Deref_post_z_cap_x_(size) _SAL1_1_Source_(_Deref_post_z_cap_x_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post2_impl_(__zterm_impl,__cap_x_impl(size)) _Post_valid_impl_)
#define _IRQL_always_function_min_(i) 
#define __pic__ 2
#define _Deref_post_bytecap_c_(size) _SAL1_1_Source_(_Deref_post_bytecap_c_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post1_impl_(__bytecap_c_impl(size)))
#define __UINTPTR_MAX__ 0xffffffffffffffffUL
#define _Deref_pre_bytecount_(size) _SAL1_1_Source_(_Deref_pre_bytecount_, (size), _Deref_pre1_impl_(__notnull_impl_notref) _Deref_pre1_impl_(__bytecount_impl(size)) _Pre_valid_impl_)
#define __ARM_ARCH_8A 1
#define _MRTIMP_CALLING_CONVENTION __cdecl
#define SQLITE_UTF8 1
#define _Out_cap_post_count_(cap,count) _SAL1_1_Source_(_Out_cap_post_count_, (cap,count), _Pre_cap_(cap) _Post_valid_impl_ _Post_count_(count))
#define _Pre_z_cap_x_(size) _SAL1_1_Source_(_Pre_z_cap_x_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre2_impl_(__zterm_impl,__cap_x_impl(size)) _Pre_valid_impl_)
#define __ARM_FEATURE_UNALIGNED 1
#define _Deref_post_opt_cap_(size) _SAL1_1_Source_(_Deref_post_opt_cap_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post1_impl_(__cap_impl(size)))
#define _CRTRESTRICT 
#define _In_opt_ 
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_SPLITPATH(_ReturnType,_FuncName,_DstType,_Src) 
#define _CRTIMP2_PURE_CONSTRUCTOR _CRTIMP2_PURE _CRTIMP2_MEMBER_FUNCTION_CALLING_CONVENTION
#define __inout_xcount_part_opt(size,length) _SAL1_Source_(__inout_xcount_part_opt, (size, length), __inout_xcount_part(size,length) __exceptthat __maybenull)
#define _APALIGN(t,ap) (__alignof(t))
#define _Called_from_function_class_(x) _In_function_class_(x)
#define __deref_inout_ecount_nz(size) _SAL1_Source_(__deref_inout_ecount_nz, (size), __deref_inout_ecount(size))
#define __releases_exclusive_lock(lock) 
#define __FLT32_DECIMAL_DIG__ 9
#define _Prepost_count_x_(size) _SAL1_1_Source_(_Prepost_count_x_, (size), _Pre_count_x_(size) _Post_count_x_(size))
#define SQLITE_TESTCTRL_BITVEC_TEST 8
#define SQLITE_FAIL 3
#define _Pre_opt_cap_(size) _SAL1_1_Source_(_Pre_opt_cap_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__cap_impl(size)))
#define __INT_FAST64_MAX__ 0x7fffffffffffffffLL
#define SQLITE_TESTCTRL_EXPLAIN_STMT 19
#define __CRT_APPEND(_Value1,_Value2) _Value1 ## _Value2
#define SQLITE_DBCONFIG_ENABLE_FKEY 1002
#define _Outptr_opt_ 
#define SQLITE_CREATE_TEMP_TABLE 4
#define _Pre_satisfies_impl_(expr) 
#define __FLT_NORM_MAX__ 3.40282346638528859811704183484516925e+38F
#define __FILEW__ _STR2WSTR(__FILE__)
#define __deref_opt_inout_z _SAL1_Source_(__deref_opt_inout_z, (), __deref_opt_inout __pre __deref __nullterminated __post __deref __nullterminated)
#define __FLT32_HAS_INFINITY__ 1
#define SQLITE_BUSY_SNAPSHOT (SQLITE_BUSY | (2<<8))
#define SQLITE_IOCAP_IMMUTABLE 0x00002000
#define __deref_in_ecount(size) _SAL1_Source_(__deref_in_ecount, (size), __deref_in _Pre_ __deref __elem_readableTo(size))
#define SQLITE_UTF16_ALIGNED 8
#define __out_bcount_nz(size) _SAL1_Source_(__out_bcount_nz, (size), __bcount(size) __post __valid __refparam)
#define __out_ecount_full_opt(size) _SAL1_Source_(__out_ecount_full_opt, (size), __out_ecount_full(size) __pre_except_maybenull)
#define __FLT64X_MAX_EXP__ 16384
#define __UINT_FAST64_TYPE__ long long unsigned int
#define SQLITE_ALTER_TABLE 26
#define _Has_lock_kind_(n) 
#define SQLITE_DBSTATUS_CACHE_USED 1
#define __releases_shared_lock(lock) 
#define SQLITE_STDCALL SQLITE_APICALL
#define __out_z _SAL1_Source_(__out_z, (), __post __valid __refparam __post __nullterminated)
#define _Inout_updates_bytes_(s) 
#define _When_impl_(expr,annos) 
#define __DECLARE_CPP_OVERLOAD_INLINE_FUNC_0_1_EX(_ReturnType,_ReturnPolicy,_FuncName,_SecureFuncName,_SecureDstType,_DstType,_Dst,_TType1,_TArg1) _CRT_INSECURE_DEPRECATE(_SecureFuncName) __inline _ReturnType __CRTDECL _FuncName(_DstType *_Dst, _TType1 _TArg1)
#define _Deref_prepost_opt_bytecap_(size) _SAL1_1_Source_(_Deref_prepost_opt_bytecap_, (size), _Deref_pre_opt_bytecap_(size) _Deref_post_opt_bytecap_(size))
#define __deref_inout_xcount_part_opt(size,length) _SAL1_Source_(__deref_inout_xcount_part_opt, (size,length), __deref_inout_xcount_part(size,length) _Pre_ __deref __exceptthat __maybenull _Post_ __deref __exceptthat __maybenull)
#define SQLITE_DROP_VTABLE 30
#define SQLITE_WARNING 28
#define __INT_MAX__ 0x7fffffff
#define __deref_opt_inout_xcount_full(size) _SAL1_Source_(__deref_opt_inout_xcount_full, (size), __deref_inout_xcount_full(size) __exceptthat __maybenull)
#define __drv_mustHoldCriticalRegion 
#define __deref_opt_out_bcount_opt(size) _SAL1_Source_(__deref_opt_out_bcount_opt, (size), __deref_out_bcount_opt(size) __pre_except_maybenull)
#define __deref_opt_out_xcount_part_opt(size,length) _SAL1_Source_(__deref_opt_out_xcount_part_opt, (size,length), __deref_out_xcount_part_opt(size,length) __exceptthat __maybenull)
#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_3_SIZE_EX(_DeclSpec,_FuncName,_SecureFuncName,_SecureDstType,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2,_TType3,_TArg3) _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec size_t __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3);
#define _Outptr_opt_result_buffer_all_(size) _SAL2_Source_(_Outptr_opt_result_buffer_all_, (size), _Out_opt_impl_ _Deref_post2_impl_(__notnull_impl_notref, __count_impl(size)))
#define _Ret_opt_z_cap_(size) _SAL1_1_Source_(_Ret_opt_z_cap_, (size), _Ret1_impl_(__maybenull_impl_notref) _Ret2_impl_(__zterm_impl,__cap_impl(size)) _Ret_valid_impl_)
#define __post_except_maybenull 
#define _Printf_format_string_ 
#define __deref_opt_inout_xcount_opt(size) _SAL1_Source_(__deref_opt_inout_xcount_opt, (size), __deref_inout_xcount_opt(size) __exceptthat __maybenull)
#define SQLITE_IOERR_DIR_CLOSE (SQLITE_IOERR | (17<<8))
#define _Deref_post_notnull_ _SAL1_1_Source_(_Deref_post_notnull_, (), _Deref_post1_impl_(__notnull_impl_notref))
#define __blocksOn(resource) _SAL_L_Source_(__blocksOn, (resource), __inner_blocksOn(resource))
#define SQLITE_OPEN_TRANSIENT_DB 0x00000400
#define _Outptr_opt_result_buffer_to_maybenull_(size,count) _SAL2_Source_(_Outptr_opt_result_buffer_to_maybenull_, (size, count), _Out_opt_impl_ _Deref_post3_impl_(__maybenull_impl_notref, __cap_impl(size), __count_impl(count)))
#define _Deref_ 
#define _Pre_notnull_ _Pre_ _Notnull_
#define _Ret_opt_bytecap_(size) _SAL1_1_Source_(_Ret_opt_bytecap_, (size), _Ret1_impl_(__maybenull_impl_notref) _Ret1_impl_(__bytecap_impl(size)))
#define SQLITE3_H 
#define SQLITE_STATUS_PAGECACHE_SIZE 7
#define _CRT_NONSTDC_DEPRECATE(_NewName) 
#define SQLITE_CONFIG_COVERING_INDEX_SCAN 20
#define __INT64_TYPE__ long long int
#define __FLT_MAX_EXP__ 128
#define __deref_opt_out_ecount_part(size,length) _SAL1_Source_(__deref_opt_out_ecount_part, (size,length), __deref_out_ecount_part(size,length) __pre_except_maybenull)
#define _CRTIMP2_MEMBER_FUNCTION_CALLING_CONVENTION __thiscall
#define __DEFINE_CPP_OVERLOAD_INLINE_NFUNC_0_1_EX(_ReturnType,_ReturnPolicy,_FuncName,_SecureFuncName,_SecureDstType,_DstType,_Dst,_TType1,_TArg1) 
#define DRIVERSPECS_H 
#define _Deref_post_z_cap_(size) _SAL1_1_Source_(_Deref_post_z_cap_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post2_impl_(__zterm_impl,__cap_impl(size)) _Post_valid_impl_)
#define SQLITE_OPEN_TEMP_DB 0x00000200
#define __acquires_lock(lock) 
#define __ANNOTATION(fun) 
#define __ORDER_BIG_ENDIAN__ 4321
#define SQLITE_DBCONFIG_WRITABLE_SCHEMA 1011
#define _Inout_updates_bytes_all_(s) 
#define __DBL_MANT_DIG__ 53
#define __reserved _SAL1_Source_(__reserved, (), _Reserved_)
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_2(_ReturnType,_FuncName,_HType1,_HArg1,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2) 
#define __inout_bcount_z(size) _SAL1_Source_(__inout_bcount_z, (size), __inout_bcount(size) __pre __nullterminated __post __nullterminated)
#define _In_ 
#define _Pre2_impl_(p1,p2) 
#define _Deref_post_valid_bytecap_(size) _SAL1_1_Source_(_Deref_post_valid_bytecap_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post1_impl_(__bytecap_impl(size)) _Post_valid_impl_)
#define _CRTIMP2_PURE_MEMBER_FUNCTION_CALLING_CONVENTION __thiscall
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffLL
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define _Ret_opt_bytecount_(size) _SAL1_1_Source_(_Ret_opt_bytecount_, (size), _Ret1_impl_(__maybenull_impl_notref) _Ret1_impl_(__bytecount_impl(size)) _Ret_valid_impl_)
#define __FP_FAST_FMAF32 1
#define __deref_out_ecount_nz_opt(size) _SAL1_Source_(__deref_out_ecount_nz_opt, (size), __deref_out_ecount_opt(size))
#define _Deref_post_cap_c_(size) _SAL1_1_Source_(_Deref_post_cap_c_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post1_impl_(__cap_c_impl(size)))
#define __UINT_LEAST32_TYPE__ unsigned int
#define __SIZEOF_SHORT__ 2
#define __FLT32_NORM_MAX__ 3.40282346638528859811704183484516925e+38F32
#define _Ret2_impl_(p1,p2) 
#define SQLITE_FCNTL_BEGIN_ATOMIC_WRITE 31
#define _Inout_opt_z_bytecap_(size) _SAL1_1_Source_(_Inout_opt_z_bytecap_, (size), _Pre_opt_z_bytecap_(size) _Post_z_)
#define SQLITE_CHECKPOINT_RESTART 2
#define _Deref_pre_count_(size) _SAL1_1_Source_(_Deref_pre_count_, (size), _Deref_pre1_impl_(__notnull_impl_notref) _Deref_pre1_impl_(__count_impl(size)) _Pre_valid_impl_)
#define SQLITE_ANALYZE 28
#define __LDBL_MIN_EXP__ (-1021)
#define __deref_out_xcount_full(size) _SAL1_Source_(__deref_out_xcount_full, (size), __deref_out_xcount_part(size,size))
#define SQLITE_SCANSTAT_NLOOP 0
#define __deref_inout_z _SAL1_Source_(__deref_inout_z, (), __deref_inout __pre __deref __nullterminated __post _Notref_ __deref __nullterminated)
#define _Result_zeroonfailure_ 
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define _CRT_STRINGIZE(_Value) __CRT_STRINGIZE(_Value)
#define __deref_opt_inout_ecount_part_opt(size,length) _SAL1_Source_(__deref_opt_inout_ecount_part_opt, (size,length), __deref_inout_ecount_part_opt(size,length) __pre_except_maybenull)
#define SQLITE_DBCONFIG_MAINDBNAME 1000
#define __out_ecount_z_opt(size) _SAL1_Source_(__out_ecount_z_opt, (size), __out_ecount_opt(size) __post __nullterminated)
#define __FLT64_MAX__ 1.79769313486231570814527423731704357e+308F64
#define __in_z _SAL1_Source_(__in_z, (), _In_z_)
#define _Ret_writes_bytes_maybenull_(s) 
#define _Deref_pre_writeonly_ _SAL1_1_Source_(_Deref_pre_writeonly_, (), _Deref_pre1_impl_(__writeaccess_impl_notref))
#define _Prepost_bytecount_c_(size) _SAL1_1_Source_(_Prepost_bytecount_c_, (size), _Pre_bytecount_c_(size) _Post_bytecount_c_(size))
#define __MACH__ 1
#define _In_function_class_(x) _In_function_class_(#x)
#define SQLITE_DBSTATUS_STMT_USED 3
#define SQLITE_TESTCTRL_EXTRA_SCHEMA_CHECKS 29
#define SQLITE_IOERR_SHMOPEN (SQLITE_IOERR | (18<<8))
#define _Deref_pre_valid_cap_(size) _SAL1_1_Source_(_Deref_pre_valid_cap_, (size), _Deref_pre1_impl_(__notnull_impl_notref) _Deref_pre1_impl_(__cap_impl(size)) _Pre_valid_impl_)
#define _Pre_opt_z_ _SAL1_1_Source_(_Pre_opt_z_, (), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__zterm_impl) _Pre_valid_impl_)
#define __LITTLE_ENDIAN__ 1
#define __WINT_WIDTH__ 32
#define _Deref_pre_count_x_(size) _SAL1_1_Source_(_Deref_pre_count_x_, (size), _Deref_pre1_impl_(__notnull_impl_notref) _Deref_pre1_impl_(__count_x_impl(size)) _Pre_valid_impl_)
#define _Out_writes_to_opt_(s,c) 
#define __FP_FAST_FMAF64 1
#define _Pre_opt_bytecount_c_(size) _SAL1_1_Source_(_Pre_opt_bytecount_c_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__bytecount_c_impl(size)) _Pre_valid_impl_)
#define __INT_LEAST8_MAX__ 0x7f
#define _Deref_prepost_count_(size) _SAL1_1_Source_(_Deref_prepost_count_, (size), _Deref_pre_count_(size) _Deref_post_count_(size))
#define _RSIZE_T_DEFINED 
#define __drv_holdsCriticalRegion() 
#define __FLT32X_MAX_10_EXP__ 308
#define __crt_typefix(ctype) 
#define _CRTIMP2_PURE_CALLING_CONVENTION __cdecl
#define _Releases_lock_(e) 
#define __prefast_operator_new_null 
#define _Deref_pre_bytecap_c_(size) _SAL1_1_Source_(_Deref_pre_bytecap_c_, (size), _Deref_pre1_impl_(__notnull_impl_notref) _Deref_pre1_impl_(__bytecap_c_impl(size)))
#define _Deref_inout_range_(l,h) 
#define __maybenull 
#define __SIZEOF_INT128__ 16
#define __FLT16_MIN__ 6.10351562500000000000000000000000000e-5F16
#define __drv_dispatchType_other _SAL1_1_Source_(__drv_dispatchType_other, (), __drv_dispatchType(IRP_MJ_OTHER))
#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_1_1_EX(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SecureFuncName,_HType1,_HArg1,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1) _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_HType1 _HArg1, _SalAttributeDst _DstType *_Dst, _TType1 _TArg1);
#define __deref_out_ecount_full_opt(size) _SAL1_Source_(__deref_out_ecount_full_opt, (size), __deref_out_ecount_full(size) __post_deref_except_maybenull)
#define _Deref_post_valid_bytecap_c_(size) _SAL1_1_Source_(_Deref_post_valid_bytecap_c_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post1_impl_(__bytecap_c_impl(size)) _Post_valid_impl_)
#define _User_always_and_needs_probe_on_(mode) 
#define __LDBL_MAX_10_EXP__ 308
#define SQLITE_IOERR_CHECKRESERVEDLOCK (SQLITE_IOERR | (14<<8))
#define __inner_override 
#define _Printf_format_string_params_(x) 
#define __DBL_EPSILON__ ((double)2.22044604925031308084726333618164062e-16L)
#define __assume_validated(p) __inner_assume_validated(p)
#define __inout_bcount_nz_opt(size) _SAL1_Source_(__inout_bcount_nz_opt, (size), __inout_bcount_opt(size))
#define __in_bound _SAL_L_Source_(__in_bound, (), _Pre_ __inner_bound)
#define __FLT32_MIN_EXP__ (-125)
#define _Pre_opt_valid_cap_c_(size) _SAL1_1_Source_(_Pre_opt_valid_cap_c_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__cap_c_impl(size)) _Pre_valid_impl_)
#define _Ret_z_cap_(size) _SAL1_1_Source_(_Ret_z_cap_, (size), _Ret1_impl_(__notnull_impl_notref) _Ret2_impl_(__zterm_impl,__cap_impl(size)) _Ret_valid_impl_)
#define _Inout_opt_bytecap_(size) _SAL1_1_Source_(_Inout_opt_bytecap_, (size), _Pre_opt_valid_bytecap_(size) _Post_valid_)
#define _LP64 1
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3_SIZE_EX(_DeclSpec,_FuncName,_SecureFuncName,_SecureDstType,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2,_TType3,_TArg3) _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec size_t __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3);
#define __drv_acquiresResource(kind) _SAL1_1_Source_(__drv_acquiresResource, (kind), _Acquires_lock_(_Curr_))
#define __CLR_OR_THIS_CALL 
#define _Deref_pre_opt_bytecount_c_(size) _SAL1_1_Source_(_Deref_pre_opt_bytecount_c_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre1_impl_(__bytecount_c_impl(size)) _Pre_valid_impl_)
#define __deref_inout_z_opt _SAL1_Source_(__deref_inout_z_opt, (), __deref_inout_opt __pre __deref __nullterminated __post __deref __nullterminated)
#define __acquires_shared_lock(lock) 
#define __UINT8_C(c) c
#define __deref_opt_out_ecount_z_opt(size) _SAL1_Source_(__deref_opt_out_ecount_z_opt, (size), __deref_opt_out_ecount_opt(size) __post __deref __nullterminated)
#define _Prepost_opt_valid_ _SAL1_1_Source_(_Prepost_opt_valid_, (), _Pre_opt_valid_ _Post_valid_)
#define SQLITE_SAVEPOINT 32
#define __deref_opt_in_xcount(size) _SAL1_Source_(__deref_opt_in_xcount, (size), __deref_in_xcount(size) __exceptthat __maybenull)
#define __FLT64_MAX_EXP__ 1024
#define SQLITE_OPEN_CREATE 0x00000004
#define __precond(expr) 
#define _At_buffer_(t,i,c,a) 
#define __INT_LEAST32_TYPE__ int
#define _Inout_count_x_(size) _SAL1_1_Source_(_Inout_count_x_, (size), _Prepost_count_x_(size))
#define ___MKID(x,y) x ## y
#define __in_ecount_opt(size) _SAL1_Source_(__in_ecount_opt, (size), _In_reads_opt_(size))
#define __deallocate(kind) _SAL_L_Source_(__deallocate, (kind), _Pre_ __notnull __post_invalid)
#define __SIZEOF_WCHAR_T__ 4
#define __useHeader _Use_decl_anno_impl_
#define __UINT64_TYPE__ long long unsigned int
#define _Ret_bytecount_x_(size) _SAL1_1_Source_(_Ret_bytecount_x_, (size), _Ret1_impl_(__notnull_impl_notref) _Ret1_impl_(__bytecount_x_impl(size)) _Ret_valid_impl_)
#define __pre_deref_except_maybenull 
#define SQLITE_INSERT 18
#define _Check_return_ 
#define __drv_minFunctionIRQL(irql) _SAL1_1_Source_(__drv_minFunctionIRQL, (irql), _IRQL_always_function_min_(irql))
#define __ARM_NEON 1
#define SQLITE_STMTSTATUS_SORT 2
#define SQLITE_STATUS_SCRATCH_OVERFLOW 4
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_1_1(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_HType1,_HArg1,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1) __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_1_1_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName ##_s, _HType1, _HArg1, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1)
#define __deref_xcount(size) _SAL1_Source_(__deref_xcount, (size), __ecount(1) _Post_ __elem_readableTo(1) _Post_ __deref __notnull _Post_ __deref __inexpressible_writableTo(size))
#define __deref_opt_in_ecount_opt(size) _SAL1_Source_(__deref_opt_in_ecount_opt, (size), __deref_in_ecount_opt(size) __exceptthat __maybenull)
#define SQLITE_LOCK_PENDING 3
#define _Outref_ 
#define _Deref_pre_opt_valid_cap_c_(size) _SAL1_1_Source_(_Deref_pre_opt_valid_cap_c_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre1_impl_(__cap_c_impl(size)) _Pre_valid_impl_)
#define SQLITE_CONFIG_GETMALLOC 5
#define __inout_ecount_nz(size) _SAL1_Source_(__inout_ecount_nz, (size), __inout_ecount(size))
#define _Deref_post_bytecap_x_(size) _SAL1_1_Source_(_Deref_post_bytecap_x_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post1_impl_(__bytecap_x_impl(size)))
#define _Pre_bytecap_(size) _SAL1_1_Source_(_Pre_bytecap_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__bytecap_impl(size)))
#define __CRTDECL __cdecl
#define _Post_readable_size_(s) _Post_ _Readable_elements_(s) _Post_ _Valid_
#define __CRTDECL_STDCALL __stdcall
#define __releases_lock(lock) 
#define __drv_fun(annotes) _At_(return,annotes _SAL_nop_impl_)
#define _Notref_impl_ 
#define __deref_inout_bcount_nz_opt(size) _SAL1_Source_(__deref_inout_bcount_nz_opt, (size), __deref_inout_bcount_opt(size))
#define _Outptr_result_bytebuffer_to_maybenull_(size,count) _SAL2_Source_(_Outptr_result_bytebuffer_to_maybenull_, (size, count), _Out_impl_ _Deref_post3_impl_(__maybenull_impl_notref, __bytecap_impl(size), __bytecount_impl(count)))
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_EX(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SecureFuncName,_SecureDstType,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2) _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2);
#define __FLT128_HAS_QUIET_NAN__ 1
#define SQLITE_CONFIG_LOOKASIDE 13
#define SQLITE_OPEN_EXCLUSIVE 0x00000010
#define __INTMAX_MAX__ 0x7fffffffffffffffL
#define __out_has_type_adt_props(typ) 
#define SQLITE_NULL 5
#define __deref_opt_out_z_opt _SAL1_Source_(__deref_opt_out_z_opt, (), __post __deref __valid __refparam __pre_except_maybenull __pre_deref_except_maybenull __post_deref_except_maybenull __post __deref __nullterminated)
#define SQLITE_LIMIT_VDBE_OP 5
#define __drv_innerMustHoldGlobal(kind,param) _SAL_L_Source_(__drv_innerMustHoldGlobal, (#kind, param\t), _Pre_ _SA_annotes2(SAL_mustHoldGlobal, #kind, param\t))
#define ___drv_unit_kernel_driver _SAL_L_Source_(___drv_unit_kernel_driver, (), _SA_annotes0(SAL_kernel) _SA_annotes0(SAL_driver))
#define _Pre_readable_size_(s) _Pre_ _Readable_elements_(s) _Pre_ _Valid_
#define _CRTDATA(x) _CRTIMP x
#define __UINT_FAST8_TYPE__ unsigned char
#define __INT_FAST8_TYPE__ signed char
#define SQLITE_FCNTL_HAS_MOVED 20
#define __deref_opt_out_bcount_full_opt(size) _SAL1_Source_(__deref_opt_out_bcount_full_opt, (size), __deref_out_bcount_full_opt(size) __pre_except_maybenull)
#define SQLITE_CONSTRAINT_COMMITHOOK (SQLITE_CONSTRAINT | (2<<8))
#define SQLITE_DBCONFIG_LEGACY_ALTER_TABLE 1012
#define __FLT64X_MIN__ 3.36210314311209350626267781732175260e-4932F64x
#define _Kernel_float_used_ 
#define _Post2_impl_(p1,p2) 
#define SQLITE_TESTCTRL_PRNG_RESET 7
#define _Out_cap_m_(mult,size) _SAL1_1_Source_(_Out_cap_m_, (mult,size), _Pre_cap_m_(mult,size) _Post_valid_impl_)
#define SQLITE_BUSY 5
#define va_arg _crt_va_arg
#define __drv_isCancelIRQL _IRQL_is_cancel_
#define __deref_opt_out_bcount_z_opt(size) _SAL1_Source_(__deref_opt_out_bcount_z_opt, (size), __deref_opt_out_bcount_opt(size) __post __deref __nullterminated)
#define _Benign_race_end_ 
#define __deref_opt_inout_ecount_nz(size) _SAL1_Source_(__deref_opt_inout_ecount_nz, (size), __deref_opt_inout_ecount(size))
#define _Ret_opt_bytecap_c_(size) _SAL1_1_Source_(_Ret_opt_bytecap_c_, (size), _Ret1_impl_(__maybenull_impl_notref) _Ret1_impl_(__bytecap_c_impl(size)))
#define _Pre_opt_ptrdiff_count_(ptr) _SAL1_1_Source_(_Pre_opt_ptrdiff_count_, (ptr), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__count_x_impl(__ptrdiff(ptr))) _Pre_valid_impl_)
#define _Outref_result_buffer_(s) 
#define __GNUC_STDC_INLINE__ 1
#define __deref_opt_out_opt _SAL1_Source_(__deref_opt_out_opt, (), _Outptr_opt_result_maybenull_)
#define _Translates_Win32_to_HRESULT_(errorCode) _SAL2_Source_(_Translates_Win32_to_HRESULT_, (errorCode), _Always_( _When_((HRESULT)errorCode <= 0, _At_(_Curr_, _Post_equal_to_((HRESULT)errorCode))) _When_((HRESULT)errorCode > 0, _At_(_Curr_, _Post_equal_to_((HRESULT)((errorCode & 0x0000FFFF) | (FACILITY_WIN32 << 16) | 0x80000000))))))
#define _Ret_opt_bytecount_c_(size) _SAL1_1_Source_(_Ret_opt_bytecount_c_, (size), _Ret1_impl_(__maybenull_impl_notref) _Ret1_impl_(__bytecount_c_impl(size)) _Ret_valid_impl_)
#define __FLT64_HAS_DENORM__ 1
#define SQLITE_ABORT 4
#define SQLITE_OPEN_PRIVATECACHE 0x00040000
#define SQLITE_DESERIALIZE_FREEONCLOSE 1
#define __FLT32_EPSILON__ 1.19209289550781250000000000000000000e-7F32
#define SQLITE_AUTH_USER (SQLITE_AUTH | (1<<8))
#define __FLT16_HAS_DENORM__ 1
#define __STDC_UTF_32__ 1
#define _COM_Outptr_opt_result_maybenull_ 
#define __in_bcount_z(size) _SAL1_Source_(__in_bcount_z, (size), __in_bcount(size) __pre __nullterminated)
#define __INT_FAST8_WIDTH__ 8
#define __inout_ecount_z_opt(size) _SAL1_Source_(__inout_ecount_z_opt, (size), __inout_ecount_opt(size) __pre __nullterminated __post __nullterminated)
#define _CRT_NONSTDC_NO_WARNINGS 
#define SQLITE_CONFIG_PCACHE2 18
#define _Ret_opt_count_c_(size) _SAL1_1_Source_(_Ret_opt_count_c_, (size), _Ret1_impl_(__maybenull_impl_notref) _Ret1_impl_(__count_c_impl(size)) _Ret_valid_impl_)
#define __gdi_entry _SAL_L_Source_(__gdi_entry, (), __inner_control_entrypoint(GDI))
#define __FLT32X_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define _Deref_pre_valid_cap_c_(size) _SAL1_1_Source_(_Deref_pre_valid_cap_c_, (size), _Deref_pre1_impl_(__notnull_impl_notref) _Deref_pre1_impl_(__cap_c_impl(size)) _Pre_valid_impl_)
#define _USE_DECLSPECS_FOR_SAL 0
#define SQLITE_DBSTATUS_LOOKASIDE_MISS_SIZE 5
#define SQLITE_IOCAP_ATOMIC64K 0x00000100
#define SQLITE_LIMIT_COLUMN 2
#define _Deref_prepost_valid_bytecap_x_(size) _SAL1_1_Source_(_Deref_prepost_valid_bytecap_x_, (size), _Deref_pre_valid_bytecap_x_(size) _Deref_post_valid_bytecap_x_(size))
#define _Analysis_assume_lock_acquired_(e) 
#define SQLITE_IOERR_DELETE (SQLITE_IOERR | (10<<8))
#define __inout_ecount_part_opt(size,length) _SAL1_Source_(__inout_ecount_part_opt, (size,length), __inout_ecount_part(size,length) __pre_except_maybenull)
#define __DBL_NORM_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define __deref_opt_out_z _SAL1_Source_(__deref_opt_out_z, (), _Outptr_opt_result_z_)
#define _Range_impl_(min,max) 
#define _Maybevalid_ _Maybevalid_impl_
#define __drv_neverHoldCriticalRegion 
#define _Ret_opt_cap_x_(size) _SAL1_1_Source_(_Ret_opt_cap_x_, (size), _Ret1_impl_(__maybenull_impl_notref) _Ret1_impl_(__cap_x_impl(size)))
#define _MRTIMP2 
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define SQLITE_OK 0
#define _Pre_opt_valid_bytecap_(size) _SAL1_1_Source_(_Pre_opt_valid_bytecap_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__bytecap_impl(size)) _Pre_valid_impl_)
#define __CLRCALL_OR_CDECL __cdecl
#define __ARM_ALIGN_MAX_STACK_PWR 16
#define SQLITE_IOCAP_SAFE_APPEND 0x00000200
#define SQLITE_DROP_TEMP_INDEX 12
#define _Check_return_impl_ 
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2,_TType3,_TArg3) __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName ##_s, _DstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3)
#define _Inout_cap_(size) _SAL1_1_Source_(_Inout_cap_, (size), _Pre_valid_cap_(size) _Post_valid_)
#define __LDBL_DENORM_MIN__ 4.94065645841246544176568792868221372e-324L
#define __out_bcount_z_opt(size) _SAL1_Source_(__out_bcount_z_opt, (size), __out_bcount_opt(size) __post __nullterminated)
#define _Out_range_impl_(min,max) 
#define __deref_out_bcount_nz_opt(size) _SAL1_Source_(__deref_out_bcount_nz_opt, (size), __deref_out_bcount_opt(size))
#define _STR2WSTR(str) __STR2WSTR(str)
#define __fallthrough __inner_fallthrough
#define _Out_opt_cap_c_(size) _SAL1_1_Source_(_Out_opt_cap_c_, (size), _Pre_opt_cap_c_(size) _Post_valid_impl_)
#define __deref_opt_inout _SAL1_Source_(__deref_opt_inout, (), _Inout_opt_)
#define __GCC_DESTRUCTIVE_SIZE 256
#define _Deref_out_range_(l,h) 
#define _Prepost_z_ _Pre_z_ _Post_z_
#define __out_xcount_full(size) _SAL1_Source_(__out_xcount_full, (size), __out_xcount_part(size,size))
#define _NullNull_terminated_impl_ 
#define _TRUNCATE ((size_t)-1)
#define __drv_floatRestored _SAL1_1_Source_(__drv_floatRestored, (), _Kernel_float_restored_)
#define __STDC_SECURE_LIB__ 200411L
#define __drv_useCancelIRQL _SAL1_1_Source_(__drv_usesCancelIRQL, (), _IRQL_uses_cancel_)
#define _Outref_result_bytebuffer_maybenull_(s) 
#define SQLITE_STMTSTATUS_RUN 6
#define __deref_opt_inout_ecount(size) _SAL1_Source_(__deref_opt_inout_ecount, (size), __deref_inout_ecount(size) __pre_except_maybenull)
#define __UINT32_C(c) c ## U
#define __GOT_SECURE_LIB__ __STDC_SECURE_LIB__
#define _Kernel_acquires_resource_(k) 
#define _Prepost_opt_count_(size) _SAL1_1_Source_(_Prepost_opt_count_, (size), _Pre_opt_count_(size) _Post_count_(size))
#define __readonly 
#define __FLT32X_MIN__ 2.22507385850720138309023271733240406e-308F32x
#define __typefix(ctype) _SAL1_Source_(__typefix, (ctype), __inner_typefix(ctype))
#define SQLITE_OPEN_URI 0x00000040
#define _In_opt_bytecount_c_(size) _SAL1_1_Source_(_In_opt_bytecount_c_, (size), _Pre_opt_bytecount_c_(size) _Deref_pre_readonly_)
#define _Post_defensive_ 
#define SQLITE_NOTFOUND 12
#define _SA_annotes0(n) 
#define _SA_annotes2(n,pp1,pp2) 
#define _SA_annotes3(n,pp1,pp2,pp3) 
#define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT 0
#define __WINT_MIN__ (-__WINT_MAX__ - 1)
#define __deref_opt_inout_xcount_part(size,length) _SAL1_Source_(__deref_opt_inout_xcount_part, (size,length), __deref_inout_xcount_part(size,length) __exceptthat __maybenull)
#define SQLITE_CONFIG_PAGECACHE 7
#define __requires_lock_held(lock) 
#define _Deref_pre_count_c_(size) _SAL1_1_Source_(_Deref_pre_count_c_, (size), _Deref_pre1_impl_(__notnull_impl_notref) _Deref_pre1_impl_(__count_c_impl(size)) _Pre_valid_impl_)
#define _Deref_post_opt_valid_bytecap_(size) _SAL1_1_Source_(_Deref_post_opt_valid_bytecap_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post1_impl_(__bytecap_impl(size)) _Post_valid_impl_)
#define __deref_out_opt _SAL1_Source_(__deref_out_opt, (), __deref_out __post_deref_except_maybenull)
#define _Pre_opt_bytecount_x_(size) _SAL1_1_Source_(_Pre_opt_bytecount_x_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__bytecount_x_impl(size)) _Pre_valid_impl_)
#define _Deref_pre_bytecap_(size) _SAL1_1_Source_(_Deref_pre_bytecap_, (size), _Deref_pre1_impl_(__notnull_impl_notref) _Deref_pre1_impl_(__bytecap_impl(size)))
#define SQLITE_FCNTL_COMMIT_ATOMIC_WRITE 32
#define _Notliteral_impl_ 
#define _Deref_inout_z_cap_c_(size) _SAL1_1_Source_(_Deref_inout_z_cap_c_, (size), _Deref_pre_z_cap_c_(size) _Deref_post_z_)
#define __deref_opt_inout_bcount_z_opt(size) _SAL1_Source_(__deref_opt_inout_bcount_z_opt, (size), __deref_opt_inout_bcount_opt(size) __pre __deref __nullterminated __post __deref __nullterminated)
#define __INT8_MAX__ 0x7f
#define SQLITE_VTAB_CONSTRAINT_SUPPORT 1
#define __LONG_WIDTH__ 64
#define __inout_xcount_part(size,length) _SAL1_Source_(__inout_xcount_part, (size,length), __out_xcount_part(size,length) _Pre_ __valid _Pre_ __inexpressible_readableTo(length))
#define _Out_cap_x_(size) _SAL1_1_Source_(_Out_cap_x_, (size), _Pre_cap_x_(size) _Post_valid_impl_)
#define _Post_z_count_(size) _SAL1_1_Source_(_Post_z_count_, (size), _Post2_impl_(__zterm_impl,__count_impl(size)) _Post_valid_impl_)
#define _TIME32_T_DEFINED 
#define __PIC__ 2
#define _Acquires_lock_(e) 
#define _Deref_pre_bytecap_x_(size) _SAL1_1_Source_(_Deref_pre_bytecap_x_, (size), _Deref_pre1_impl_(__notnull_impl_notref) _Deref_pre1_impl_(__bytecap_x_impl(size)))
#define _No_competing_thread_end_ 
#define _Inout_updates_bytes_opt_(s) 
#define SQLITE_DBCONFIG_TRIGGER_EQP 1008
#define _In_opt_z_bytecount_(size) _SAL1_1_Source_(_In_opt_z_bytecount_, (size), _Pre_opt_z_ _Pre_opt_bytecount_(size) _Deref_pre_readonly_)
#define _At_buffer_impl_(target,iter,bound,annos) 
#define _Out_writes_to_(s,c) 
#define SQLITE_DONE 101
#define SQLITE_PREPARE_NO_VTAB 0x04
#define __deref_opt_inout_ecount_opt(size) _SAL1_Source_(__deref_opt_inout_ecount_opt, (size), __deref_inout_ecount_opt(size) __pre_except_maybenull)
#define __drv_releasesExclusiveResourceGlobal(kind,param) 
#define __FLT32X_NORM_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define SQLITE_ROLLBACK 1
#define __drv_out_deref(annotes) _Post_ __deref _Group_(annotes _SAL_nop_impl_)
#define __deref_out_bcount(size) _SAL1_Source_(__deref_out_bcount, (size), _Outptr_result_bytebuffer_(size))
#define __CHAR32_TYPE__ unsigned int
#define __deref_out_range(lb,ub) _SAL_L_Source_(__deref_out_range, (lb,ub), _Post_ __deref __inner_range(lb,ub))
#define _Deref_post_valid_bytecap_x_(size) _SAL1_1_Source_(_Deref_post_valid_bytecap_x_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post1_impl_(__bytecap_x_impl(size)) _Post_valid_impl_)
#define _Deref_out_z_bytecap_c_(size) _SAL1_1_Source_(_Deref_out_z_bytecap_c_, (size), _Deref_pre_bytecap_c_(size) _Deref_post_z_)
#define __requires_shared_lock_held(lock) 
#define SQLITE_IOERR_ROLLBACK_ATOMIC (SQLITE_IOERR | (31<<8))
#define SQLITE_INDEX_CONSTRAINT_FUNCTION 150
#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_ARGLIST_EX(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_VFuncName,_SecureDstType,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2) _CRT_INSECURE_DEPRECATE(_FuncName ##_s) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, ...); _CRT_INSECURE_DEPRECATE(_VFuncName ##_s) _DeclSpec _ReturnType __cdecl _VFuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, va_list _Args);
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_1(_ReturnType,_FuncName,_HType1,_HArg1,_DstType,_Dst,_TType1,_TArg1) 
#define SQLITE_RECURSIVE 33
#define __drv_acquiresPriorityRegion 
#define _Outptr_opt_result_maybenull_z_ 
#define __MKID(x,y) ___MKID(x, y)
#define _Analysis_assume_section_unlocked_(name) 
#define __out_bcount_part_opt(size,length) _SAL1_Source_(__out_bcount_part_opt, (size,length), __out_bcount_part(size,length) __pre_except_maybenull)
#define _Deref_out_ _SAL1_1_Source_(_Deref_out_, (), _Out_ _Deref_post_valid_)
#define _Deref_pre_opt_bytecount_x_(size) _SAL1_1_Source_(_Deref_pre_opt_bytecount_x_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre1_impl_(__bytecount_x_impl(size)) _Pre_valid_impl_)
#define _SAL_VERSION 20
#define __callback __inner_callback
#define __deref_inout_bcount_z(size) _SAL1_Source_(__deref_inout_bcount_z, (size), __deref_inout_bcount(size) __pre __deref __nullterminated __post __deref __nullterminated)
#define __drv_Mode_impl(x) 
#define _Must_inspect_result_ 
#define __bound _SAL_L_Source_(__bound, (), __inner_bound)
#define __out_bcount_part_z_opt(size,length) _SAL1_Source_(__out_bcount_part_z_opt, (size,length), __out_bcount_part_opt(size,length) __post __nullterminated)
#define ___drv_unit_user_driver _SAL_L_Source_(___drv_unit_user_driver, (), _SA_annotes0(SAL_nokernel) _SA_annotes0(SAL_driver))
#define _Literal_ 
#define _Writable_elements_impl_(size) 
#define __drv_setsIRQL(irql) 
#define _Inout_z_bytecap_(size) _SAL1_1_Source_(_Inout_z_bytecap_, (size), _Pre_z_bytecap_(size) _Post_z_)
#define __inner_volatile 
#define _In_reads_or_z_(s) 
#define __ARM_FEATURE_NUMERIC_MAXMIN 1
#define _Translates_last_error_to_HRESULT_ _SAL2_Source_(_Translates_last_error_to_HRESULT_, (), _Always_( _Post_satisfies_(_Curr_ < 0)))
#define _CRT_STDIO_IMP_ALT _CRTIMP_ALT
#define _Deref_prepost_opt_bytecount_(size) _SAL1_1_Source_(_Deref_prepost_opt_bytecount_, (size), _Deref_pre_opt_bytecount_(size) _Deref_post_opt_bytecount_(size))
#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_2_0(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_HType1,_HArg1,_HType2,_HArg2,_SalAttributeDst,_DstType,_Dst) __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_2_0_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName ##_s, _HType1, _HArg1, _HType2, _HArg2, _SalAttributeDst, _DstType, _Dst)
#define _Inout_bytecap_(size) _SAL1_1_Source_(_Inout_bytecap_, (size), _Pre_valid_bytecap_(size) _Post_valid_)
#define __INT32_TYPE__ int
#define _Out_opt_cap_m_(mult,size) _SAL1_1_Source_(_Out_opt_cap_m_, (mult,size), _Pre_opt_cap_m_(mult,size) _Post_valid_impl_)
#define _CRT_WIDE(_String) __CRT_WIDE(_String)
#define __deref_inout_ecount_full_opt(size) _SAL1_Source_(__deref_inout_ecount_full_opt, (size), __deref_inout_ecount_full(size) __pre_deref_except_maybenull __post_deref_except_maybenull)
#define __SIZEOF_DOUBLE__ 8
#define _Pre_opt_bytecap_x_(size) _SAL1_1_Source_(_Pre_opt_bytecap_x_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__bytecap_x_impl(size)))
#define _crt_va_start(ap,v) ( ap = (va_list)_ADDRESSOF(v) + _INTSIZEOF(v) )
#define _MRTIMP_FUNCTION(type) _MRTIMP type _MRTIMP_CALLING_CONVENTION
#define __analysis_hint(hint) 
#define __drv_aliasesMem _SAL_L_Source_(__drv_aliasesMem, (), _Post_ _SA_annotes0(SAL_IsAliased))
#define __FLT64_MIN__ 2.22507385850720138309023271733240406e-308F64
#define __FLT_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F
#define __INT_LEAST32_WIDTH__ 32
#define va_start _crt_va_start
#define _Analysis_mode_(m) 
#define __maybereadonly 
#define _Deref_pre_opt_valid_cap_x_(size) _SAL1_1_Source_(_Deref_pre_opt_valid_cap_x_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre1_impl_(__cap_x_impl(size)) _Pre_valid_impl_)
#define __DECLARE_CPP_OVERLOAD_INLINE_NFUNC_0_1_EX(_ReturnType,_ReturnPolicy,_FuncName,_SecureFuncName,_SecureDstType,_DstType,_Dst,_TType1,_TArg1) _CRT_INSECURE_DEPRECATE(_SecureFuncName) __inline _ReturnType __CRTDECL _FuncName(_DstType *_Dst, _TType1 _TArg1)
#define _Outptr_result_nullonfailure_ 
#define SQLITE_IOERR_READ (SQLITE_IOERR | (1<<8))
#define __SIZEOF_FLOAT__ 4
#define __deref_in_xcount_opt(size) _SAL1_Source_(__deref_in_xcount_opt, (size), __deref_in_xcount(size) _Pre_ __deref __exceptthat __maybenull)
#define _Deref_ret_opt_z_ _SAL1_1_Source_(_Deref_ret_opt_z_, (), _Deref_ret1_impl_(__maybenull_impl_notref) _Ret1_impl_(__zterm_impl))
#define SQLITE_TESTCTRL_ASSERT 12
#define __static_context(ctx,annotes) 
#define __deref_inout _SAL1_Source_(__deref_inout, (), _Notref_ __notnull _Notref_ __elem_readableTo(1) __pre __deref __valid __post _Notref_ __deref __valid __refparam)
#define __DEFINE_CPP_OVERLOAD_INLINE_FUNC_0_2_EX(_ReturnType,_ReturnPolicy,_FuncName,_SecureFuncName,_SecureDstType,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2) 
#define __drv_acquiresCriticalRegion 
#define SQLITE_SYSAPI 
#define SQLITE_DBCONFIG_ENABLE_VIEW 1015
#define _Inout_ 
#define _Out_writes_bytes_to_(s,c) 
#define __deref_inout_range(lb,ub) _SAL_L_Source_(__deref_inout_range, (lb,ub), __deref_in_range(lb,ub) __deref_out_range(lb,ub))
#define __out_xcount_opt(size) _SAL1_Source_(__out_xcount_opt, (size), __out_xcount(size) __exceptthat __maybenull)
#define _CRTIMP_PURE _CRTIMP
#define _Field_size_bytes_opt_(s) 
#define _Deref_post_count_c_(size) _SAL1_1_Source_(_Deref_post_count_c_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post1_impl_(__count_c_impl(size)) _Post_valid_impl_)
#define _Deref_pre_valid_bytecap_(size) _SAL1_1_Source_(_Deref_pre_valid_bytecap_, (size), _Deref_pre1_impl_(__notnull_impl_notref) _Deref_pre1_impl_(__bytecap_impl(size)) _Pre_valid_impl_)
#define _No_competing_thread_begin_ 
#define SQLITE_CONFIG_SMALL_MALLOC 27
#define _In_range_(l,h) 
#define va_end _crt_va_end
#define _Inout_updates_all_opt_(s) 
#define __ATOMIC_CONSUME 1
#define __deref_out_bcount_full(size) _SAL1_Source_(__deref_out_bcount_full, (size), __deref_out_bcount_part(size,size))
#define SQLITE_SELECT 21
#define _FTS5_H 
#define __GNUC_MINOR__ 2
#define _Pre_count_c_(size) _SAL1_1_Source_(_Pre_count_c_, (size), _Pre1_impl_(__notnull_impl_notref) _Pre1_impl_(__count_c_impl(size)) _Pre_valid_impl_)
#define __INT_FAST16_WIDTH__ 16
#define __UINTMAX_MAX__ 0xffffffffffffffffUL
#define SQLITE_FCNTL_WIN32_SET_HANDLE 23
#define __inner_callback 
#define _Inout_z_cap_(size) _SAL1_1_Source_(_Inout_z_cap_, (size), _Pre_z_cap_(size) _Post_z_)
#define __file_parser_class(typ) 
#define _Out_writes_to_ptr_z_(p) 
#define __FLT32X_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F32x
#define _Releases_exclusive_lock_(e) 
#define __drv_inTry _SAL_L_Source_(__drv_inTry, (), _Pre_ _SA_annotes1(SAL_inTry,__yes))
#define SQLITE_RANGE 25
#define _In_reads_bytes_opt_(s) 
#define __drv_at(expr,annotes) _At_(expr, annotes _SAL_nop_impl_)
#define SQLITE_FCNTL_OVERWRITE 11
#define _Scanf_format_string_ 
#define _Pre_opt_ptrdiff_cap_(ptr) _SAL1_1_Source_(_Pre_opt_ptrdiff_cap_, (ptr), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__cap_x_impl(__ptrdiff(ptr))))
#define __drv_holdsPriorityRegion() 
#define _Field_size_bytes_part_opt_(s,c) 
#define __in _SAL1_Source_(__in, (), _In_)
#define _Ret_opt_bytecap_x_(size) _SAL1_1_Source_(_Ret_opt_bytecap_x_, (size), _Ret1_impl_(__maybenull_impl_notref) _Ret1_impl_(__bytecap_x_impl(size)))
#define _Ret_opt_valid_ _SAL1_1_Source_(_Ret_opt_valid_, (), _Ret1_impl_(__maybenull_impl_notref) _Ret_valid_impl_)
#define _Post_maybez_ _SAL_L_Source_(_Post_maybez_, (), _Post1_impl_(__maybezterm_impl))
#define __DBL_MAX_10_EXP__ 308
#define __internal_lock_level_order(a,b) 
#define SQLITE_IOERR_VNODE (SQLITE_IOERR | (27<<8))
#define SQLITE_CONFIG_GETPCACHE2 19
#define _SA_annotes1(n,pp1) 
#define __drv_freesMem(kind) _SAL_L_Source_(__drv_freesMem, (kind), _Post_ _SA_annotes1(SAL_NeedsRelease,__no))
#define _Deref_post_valid_ _SAL1_1_Source_(_Deref_post_valid_, (), _Deref_post1_impl_(__notnull_impl_notref) _Post_valid_impl_)
#define _Out_opt_bytecapcount_(capcount) _SAL1_1_Source_(_Out_opt_bytecapcount_, (capcount), _Pre_opt_bytecap_(capcount) _Post_valid_impl_ _Post_bytecount_(capcount))
#define _Ret_opt_bytecount_x_(size) _SAL1_1_Source_(_Ret_opt_bytecount_x_, (size), _Ret1_impl_(__maybenull_impl_notref) _Ret1_impl_(__bytecount_x_impl(size)) _Ret_valid_impl_)
#define _Ret_bound_impl_ 
#define __INT16_C(c) c
#define __field_ecount_full_opt(size) _SAL1_Source_(__field_ecount_full_opt, (size), __field_ecount_part_opt(size,size))
#define _Deref_ret2_impl_(p1,p2) 
#define __ARM_ARCH_ISA_A64 1
#define __in_opt _SAL1_Source_(__in_opt, (), _In_opt_)
#define __deref_inout_ecount_nz_opt(size) _SAL1_Source_(__deref_inout_ecount_nz_opt, (size), __deref_inout_ecount_opt(size))
#define SQLITE_NOMEM 7
#define __in_ecount_z_opt(size) _SAL1_Source_(__in_ecount_z_opt, (size), __in_ecount_opt(size) __pre __nullterminated)
#define __post_ecount(size) _SAL1_Source_(__post_ecount, (size), _Post_ __elem_writableTo(size))
#define _Deref_prepost_opt_valid_ _SAL1_1_Source_(_Deref_prepost_opt_valid_, (), _Deref_pre_opt_valid_ _Deref_post_opt_valid_)
#define __STDC__ 1
#define _In_opt_bytecount_x_(size) _SAL1_1_Source_(_In_opt_bytecount_x_, (size), _Pre_opt_bytecount_x_(size) _Deref_pre_readonly_)
#define __deref_opt_inout_bcount_nz_opt(size) _SAL1_Source_(__deref_opt_inout_bcount_nz_opt, (size), __deref_opt_inout_bcount_opt(size))
#define _Ret_z_bytecap_(size) _SAL1_1_Source_(_Ret_z_bytecap_, (size), _Ret1_impl_(__notnull_impl_notref) _Ret2_impl_(__zterm_impl,__bytecap_impl(size)) _Ret_valid_impl_)
#define _Deref_out_z_ _SAL1_1_Source_(_Deref_out_z_, (), _Out_ _Deref_post_z_)
#define _Acquires_exclusive_lock_(e) 
#define __PTRDIFF_TYPE__ long int
#define __deref_out_z _SAL1_Source_(__deref_out_z, (), _Outptr_result_z_)
#define _Outptr_result_z_ 
#define __inout_bcount_part_opt(size,length) _SAL1_Source_(__inout_bcount_part_opt, (size,length), __inout_bcount_part(size,length) __pre_except_maybenull)
#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_EX(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SecureFuncName,_SecureDstType,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2) _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2);
#define SQLITE_CONFIG_GETPCACHE 15
#define _NullNull_terminated_ 
#define SQLITE_SYNC_DATAONLY 0x00010
#define _Internal_lock_level_order_(a,b) 
#define _Inout_updates_(s) 
#define __out_validated(typ_sym) _SAL_L_Source_(__out_validated, (src_sym), __inner_out_validated(#typ_sym))
#define _Ret_valid_impl_ 
#define __field_bcount_full(size) _SAL1_Source_(__field_bcount_full, (size), __field_bcount_part(size,size))
#define _Deref_prepost_valid_cap_(size) _SAL1_1_Source_(_Deref_prepost_valid_cap_, (size), _Deref_pre_valid_cap_(size) _Deref_post_valid_cap_(size))
#define SQLITE_IOERR_AUTH (SQLITE_IOERR | (28<<8))
#define _In_opt_z_count_(size) _SAL1_1_Source_(_In_opt_z_count_, (size), _Pre_opt_z_ _Pre_opt_count_(size) _Deref_pre_readonly_)
#define __drv_deref(annotes) __deref _Group_(annotes _SAL_nop_impl_)
#define __deref_nonvolatile _SAL_L_Source_(__deref_nonvolatile, (), __deref __nonvolatile)
#define __FLT32_MIN__ 1.17549435082228750796873653722224568e-38F32
#define _Deref_prepost_z_bytecap_(size) _SAL1_1_Source_(_Deref_prepost_z_bytecap_, (size), _Deref_pre_z_bytecap_(size) _Deref_post_z_bytecap_(size))
#define __ATOMIC_SEQ_CST 5
#define __deref_inout_xcount_opt(size) _SAL1_Source_(__deref_inout_xcount_opt, (size), __deref_inout_xcount(size) _Pre_ __deref __exceptthat __maybenull _Post_ __deref __exceptthat __maybenull)
#define _Outptr_opt_result_bytebuffer_maybenull_(s) 
#define SQLITE_CONFIG_SQLLOG 21
#define _Out_opt_cap_x_(size) _SAL1_1_Source_(_Out_opt_cap_x_, (size), _Pre_opt_cap_x_(size) _Post_valid_impl_)
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_16 1
#define __drv_dispatchType(x) _SAL1_1_Source_(__drv_displatchType, (x), _SA_annotes1(SAL_functionClassNew, #x))
#define __valid 
#define _Field_size_bytes_part_(s,c) 
#define SQLITE_TESTCTRL_ISINIT 23
#define SQLITE_FCNTL_VFSNAME 12
#define _Strict_type_match_ 
#define __deref_inout_xcount(size) _SAL1_Source_(__deref_inout_xcount, (size), __deref_inout _Pre_ __deref __inexpressible_writableTo(size) _Post_ __deref __inexpressible_writableTo(size))
#define __deref_out_xcount_full_opt(size) _SAL1_Source_(__deref_out_xcount_full_opt, (size), __deref_out_xcount_full(size) _Post_ __deref __exceptthat __maybenull)
#define SQLITE_FCNTL_VFS_POINTER 27
#define __UINT32_TYPE__ unsigned int
#define _Interlocked_ 
#define __FLT32X_MIN_10_EXP__ (-307)
#define SQLITE_FCNTL_LOCK_TIMEOUT 34
#define __UINTPTR_TYPE__ long unsigned int
#define _Deref_pre_opt_cap_x_(size) _SAL1_1_Source_(_Deref_pre_opt_cap_x_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre1_impl_(__cap_x_impl(size)))
#define _NO_CPP_INLINES 
#define _Outptr_result_buffer_(s) 
#define SQLITE_INDEX_CONSTRAINT_MATCH 64
#define _Deref_inout_z_ _SAL1_1_Source_(_Deref_inout_z_, (), _Deref_prepost_z_)
#define SQLITE_CONFIG_STMTJRNL_SPILL 26
#define _Ret_opt_count_(size) _SAL1_1_Source_(_Ret_opt_count_, (size), _Ret1_impl_(__maybenull_impl_notref) _Ret1_impl_(__count_impl(size)) _Ret_valid_impl_)
#define __format_string _SAL1_1_Source_(__format_string, (), _Printf_format_string_)
#define _Out_writes_all_(s) 
#define _Deref_prepost_opt_valid_cap_(size) _SAL1_1_Source_(_Deref_prepost_opt_valid_cap_, (size), _Deref_pre_opt_valid_cap_(size) _Deref_post_opt_valid_cap_(size))
#define SQLITE_TRACE_ROW 0x04
#define _Post_z_ _Post_ _Null_terminated_
#define __drv_in(annotes) _Pre_ _Group_(annotes _SAL_nop_impl_)
#define _Flt_ConnectionCookie_Outptr_ _SAL_L_Source_(_Flt_ConnectionCookie_Outptr_, (), _Outptr_result_maybenull_ _Pre_valid_ _At_(*_Curr_, _Pre_null_ _On_failure_(_Post_null_)))
#define __deref_opt_out_bcount_part_opt(size,length) _SAL1_Source_(__deref_opt_out_bcount_part_opt, (size,length), __deref_out_bcount_part_opt(size,length) __pre_except_maybenull)
#define __deref_in_bcount_opt(size) _SAL1_Source_(__deref_in_bcount_opt_, (size), __deref_in_bcount(size) _Pre_ __deref __exceptthat __maybenull)
#define _Outref_result_buffer_to_(s,c) 
#define __LDBL_MIN_10_EXP__ (-307)
#define SQLITE_DEPRECATED 
#define _Pre_null_ _Pre_ _Null_
#define __FLT128_EPSILON__ 1.92592994438723585305597794258492732e-34F128
#define _Deref_pre_opt_z_cap_c_(size) _SAL1_1_Source_(_Deref_pre_opt_z_cap_c_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre2_impl_(__zterm_impl,__cap_c_impl(size)) _Pre_valid_impl_)
#define _Ret_notnull_ 
#define _Out_opt_z_cap_post_count_(cap,count) _SAL1_1_Source_(_Out_opt_z_cap_post_count_, (cap,count), _Pre_opt_cap_(cap) _Post_valid_impl_ _Post_z_count_(count))
#define __requires_exclusive_lock_held(lock) 
#define _SAL1_2_Source_(Name,args,annotes) _SA_annotes3(SAL_name, #Name, "", "1.2") _Group_(annotes _SAL_nop_impl_)
#define _Ret_ 
#define __control_entrypoint(category) _SAL_L_Source_(__control_entrypoint, (category), __inner_control_entrypoint(category))
#define __in_bcount_nz(size) _SAL1_Source_(__in_bcount_nz, (size), __in_bcount(size))
#define _At_impl_(target,annos) 
#define __SIZEOF_LONG_LONG__ 8
#define _Pre_opt_z_bytecap_c_(size) _SAL1_1_Source_(_Pre_opt_z_bytecap_c_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre2_impl_(__zterm_impl,__bytecap_c_impl(size)) _Pre_valid_impl_)
#define __drv_reportError(why) _SAL_L_Source_(__drv_reportError, (why), _Pre_ _SA_annotes1(SAL_error,why))
#define SQLITE_MUTEX_STATIC_MASTER 2
#define _Deref_post_opt_valid_cap_x_(size) _SAL1_1_Source_(_Deref_post_opt_valid_cap_x_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post1_impl_(__cap_x_impl(size)) _Post_valid_impl_)
#define _Lock_level_order_(n1,n2) 
#define SQLITE_CONFIG_GETMUTEX 11
#define __nullnullterminated _SAL1_Source_(__nullnullterminated, (), __inexpressible_readableTo("string terminated by two nulls") __nullterminated)
#define __FLT128_DECIMAL_DIG__ 36
#define __GCC_ATOMIC_LLONG_LOCK_FREE 2
#define __drv_floatUsed _SAL1_1_Source_(__drv_floatUsed, (), _Kernel_float_used_)
#define __deref_in_opt_out _SAL1_Source_(__deref_in_opt_out, (), __deref_inout _Pre_ __deref __exceptthat __maybenull _Post_ __deref __notnull)
#define _Deref_pre_bytecount_c_(size) _SAL1_1_Source_(_Deref_pre_bytecount_c_, (size), _Deref_pre1_impl_(__notnull_impl_notref) _Deref_pre1_impl_(__bytecount_c_impl(size)) _Pre_valid_impl_)
#define SQLITE_DBCONFIG_DEFENSIVE 1010
#define __field_bcount_opt(size) _SAL1_Source_(__field_bcount_opt, (size), __maybenull __byte_writableTo(size))
#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_ARGLIST(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_VFuncName,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2) _CRT_INSECURE_DEPRECATE(_FuncName ##_s) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, ...); _CRT_INSECURE_DEPRECATE(_VFuncName ##_s) _DeclSpec _ReturnType __cdecl _VFuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, va_list _Args);
#define __byte_readableTo(size) 
#define __FLT_DECIMAL_DIG__ 9
#define __UINT_FAST16_MAX__ 0xffff
#define _Deref_post_opt_z_cap_c_(size) _SAL1_1_Source_(_Deref_post_opt_z_cap_c_, (size), _Deref_post1_impl_(__maybenull_impl_notref) _Deref_post2_impl_(__zterm_impl,__cap_c_impl(size)) _Post_valid_impl_)
#define __deref_in_ecount_opt(size) _SAL1_Source_(__deref_in_ecount_opt, (size), __deref_in_ecount(size) _Pre_ __deref __exceptthat __maybenull)
#define __deref_xcount_opt(size) _SAL1_Source_(__deref_xcount_opt, (size), __deref_xcount(size) _Post_ __deref __exceptthat __maybenull)
#define __deref_opt_in_ecount(size) _SAL1_Source_(__deref_opt_in_ecount, (size), __deref_in_ecount(size) __exceptthat __maybenull)
#define _Pre_opt_cap_c_one_ _SAL1_1_Source_(_Pre_opt_cap_c_one_, (), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__cap_c_one_notref_impl))
#define __analysis_assert(e) 
#define SQLITE_TESTCTRL_VDBE_COVERAGE 21
#define _Pre_opt_valid_cap_(size) _SAL1_1_Source_(_Pre_opt_valid_cap_, (size), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__cap_impl(size)) _Pre_valid_impl_)
#define __LDBL_NORM_MAX__ 1.79769313486231570814527423731704357e+308L
#define __drv_IoGetDmaAdapter _SAL1_1_Source_(__drv_IoGetDmaAdapter, (), _Kernel_IoGetDmaAdapter_)
#define __FLT_MIN_10_EXP__ (-37)
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define _In_range_impl_(min,max) 
#define __out_data_source(src_sym) _SAL_L_Source_(__out_data_source, (src_sym), _Post_ __inner_data_source(#src_sym))
#define __drv_innerAcquiresGlobal(kind,param) _SAL1_1_Source_(_drv_innerAcquiresGlobal, (#kind, param\t), _Post_ _SA_annotes2(SAL_acquireGlobal, #kind, param\t))
#define _Return_type_success_(c) 
#define _Deref_pre_opt_z_bytecap_c_(size) _SAL1_1_Source_(_Deref_pre_opt_z_bytecap_c_, (size), _Deref_pre1_impl_(__maybenull_impl_notref) _Deref_pre2_impl_(__zterm_impl,__bytecap_c_impl(size)) _Pre_valid_impl_)
#define _Outref_result_buffer_all_maybenull_(s) 
#define _Scanf_s_format_string_ 
#define SQLITE_EMPTY 16
#define __out_xcount_part(size,length) _SAL1_Source_(__out_xcount_part_, (size,length), __out_xcount(size) _Post_ __inexpressible_readableTo(length))
#define __ORDER_LITTLE_ENDIAN__ 1234
#define _Success_(c) 
#define __deref_inout_bcount_part_opt(size,length) _SAL1_Source_(__deref_inout_bcount_part_opt, (size,length), __deref_inout_bcount_part(size,length) __pre_deref_except_maybenull __post_deref_except_maybenull)
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1_ARGLIST(_ReturnType,_FuncName,_VFuncName,_DstType,_Dst,_TType1,_TArg1) 
#define _In_reads_or_z_opt_(size) _SAL2_Source_(_In_reads_or_z_opt_, (size), _In_opt_ _When_(_String_length_(_Curr_) < (size), _Pre_z_) _When_(_String_length_(_Curr_) >= (size), _Pre1_impl_(__count_impl(size))))
#define __SIZE_MAX__ 0xffffffffffffffffUL
#define _Maybevalid_impl_ 
#define _Pre_impl_ 
#define _Deref_post_bytecount_c_(size) _SAL1_1_Source_(_Deref_post_bytecount_c_, (size), _Deref_post1_impl_(__notnull_impl_notref) _Deref_post1_impl_(__bytecount_c_impl(size)) _Post_valid_impl_)
#define __UINT_LEAST32_MAX__ 0xffffffffU
#define __drv_neverHoldPriorityRegion 
#define _Pre_opt_cap_m_(mult,size) _SAL1_1_Source_(_Pre_opt_cap_m_, (mult,size), _Pre1_impl_(__maybenull_impl_notref) _Pre1_impl_(__mult_impl(mult,size)))
#define _Inout_ptrdiff_count_(size) _SAL1_1_Source_(_Inout_ptrdiff_count_, (size), _Pre_ptrdiff_count_(size))
#define SQLITE_LOCK_RESERVED 2
#define _Inout_opt_z_cap_(size) _SAL1_1_Source_(_Inout_opt_z_cap_, (size), _Pre_opt_z_cap_(size) _Post_z_)
#define __ATOMIC_ACQ_REL 4
#define __ATOMIC_RELEASE 3
