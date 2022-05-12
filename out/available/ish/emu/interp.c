#define BTR(bit,val,z) BT(bit, val,z); set(val, get(val,z) & ~msk(bit,z),z)
#define BTS(bit,val,z) BT(bit, val,z); set(val, get(val,z) | msk(bit,z),z)
#define SI_TIMER 0x10003
#define ___POSIX_C_DEPRECATED_STARTING_199009L 
#define _Nullable 
#define INT_BOUND 5
#define __strftimelike(fmtarg) __attribute__((__format__ (__strftime__, fmtarg, 0)))
#define __DBL_MIN_EXP__ (-1021)
#define FDIVR(src,dst) dst = f80_div(src, dst)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_4(x) x
#define _QUAD_LOWWORD 0
#define MAC_OS_X_VERSION_10_13_1 101301
#define MAC_OS_X_VERSION_10_13_2 101302
#define MAC_OS_X_VERSION_10_13_4 101304
#define DEBUG_debug DEBUG_all
#define PRIO_MIN -20
#define XOR(src,dst,z) set(dst, get(dst,z) ^ get(src,z),z); cpu->cf = cpu->of = cpu->af = cpu->af_ops = 0; SETRES(get(dst,z),z)
#define __unused __attribute__((__unused__))
#define __UINT_LEAST16_MAX__ 0xffff
#define _STDBOOL_H 
#define _STRUCT_X86_AVX_STATE64 struct __darwin_x86_avx_state64
#define set_reg_di(to,size) *(uint(size) *) &cpu->edi = to
#define __ATOMIC_ACQUIRE 2
#define __FLT128_MAX_10_EXP__ 4932
#define ty(x) ty_ ##x
#define sa_sigaction __sigaction_u.__sa_sigaction
#define __FLT_MIN__ 1.17549435082228750796873653722224568e-38F
#define __GCC_IEC_559_COMPLEX 2
#define FD_COPY(f,t) __DARWIN_FD_COPY(f, t)
#define __DARWIN_NFDBITS (sizeof(__int32_t) * __DARWIN_NBBY)
#define _REGX(n) union { dword_t e ##n ##x; word_t n ##x; struct { byte_t n ##l; byte_t n ##h; }; }
#define __UINT_LEAST8_TYPE__ unsigned char
#define __SIZEOF_FLOAT80__ 16
#define _T_WCHAR_ 
#define _I386__ENDIAN_H_ 
#define INT_LEAST16_MIN INT16_MIN
#define _ASSERT_H_ 
#define f80_to_float80(x) x
#define RLIM_SAVED_MAX RLIM_INFINITY
#define BTC(bit,val,z) BT(bit, val,z); set(val, get(val,z) ^ msk(bit,z),z)
#define __IPHONE_14_2 140200
#define __MAC_10_13_1 101301
#define __MAC_10_13_2 101302
#define __MAC_10_13_4 101304
#define PUSHF() collapse_flags(cpu); PUSH(eflags,oz)
#define twice(x) glue(twice_, x)
#define __DRIVERKIT_19_0 190000
#define bzero(dest,...) __builtin___memset_chk (dest, 0, __VA_ARGS__, __darwin_obsz0 (dest))
#define SIGBUS 10
#define __INTMAX_C(c) c ## L
#define mem_read_ts(addr,type,size) ({ type val; if (!tlb_read(tlb, addr, &val, size/8)) { cpu->eip = saved_ip; cpu->segfault_addr = addr; return INT_GPF; } val; })
#define __enum_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_open
#define SV_RESETHAND SA_RESETHAND
#define __deprecated_msg(_msg) __attribute__((__deprecated__(_msg)))
#define __DARWIN_howmany(x,y) ((((x) % (y)) == 0) ? ((x) / (y)) : (((x) / (y)) + 1))
#define __DARWIN_INODE64(sym) __asm("_" __STRING(sym) __DARWIN_SUF_64_BIT_INO_T)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_0(x) 
#define __CHAR_BIT__ 8
#define __WATCHOS_DEPRECATED(_start,_dep,_msg) 
#define ru_last ru_nivcsw
#define makedev(x,y) ((dev_t)(((x) << 24) | (y)))
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_0(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_3(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_6(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_7(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_8(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_9(x) x
#define F_COMPARE(x) cpu->c0 = f80_lt(ST(0), x); cpu->c1 = 0; cpu->c2 = 0; cpu->c3 = f80_eq(ST(0), x)
#define IOPOL_VFS_IGNORE_PERMISSIONS_ON 1
#define __WATCHOS_1_0 10000
#define __DARWIN_C_LEVEL __DARWIN_C_FULL
#define IOPOL_VFS_STATFS_NO_DATA_VOLUME_DEFAULT 0
#define _U_INT64_T 
#define __UINT8_MAX__ 0xff
#define __SCHAR_WIDTH__ 8
#define _PTHREAD_RWLOCKATTR_T 
#define WCHAR_MAX __WCHAR_MAX__
#define INT16_C(v) (v)
#define __WINT_MAX__ 0x7fffffff
#define __FLT32_MIN_EXP__ (-125)
#define str_stos(z) mem_write(cpu->edi, get(reg_a,z),z); BUMP_DI(z)
#define INT8_MAX 127
#define CLD_TRAPPED 4
#define UINT_LEAST64_MAX UINT64_MAX
#define MISC_H 
#define _CDEFS_H_ 
#define vsnprintf(str,len,format,ap) __builtin___vsnprintf_chk (str, len, 0, __darwin_obsz(str), format, ap)
#define __OSX_AVAILABLE_BUT_DEPRECATED_MSG(_osxIntro,_osxDep,_iosIntro,_iosDep,_msg) 
#define READIMM16 READIMM_(imm, 16)
#define _PTHREAD_CONDATTR_T 
#define CVTE REG_VAL(cpu, REG_ID(eax), HALF_OP_SIZE) = (sint(OP_SIZE)) REG_VAL(cpu, REG_ID(ax), OP_SIZE)
#define __TVOS_AVAILABLE(_vers) 
#define __ORDER_LITTLE_ENDIAN__ 1234
#define __SIZE_MAX__ 0xffffffffffffffffUL
#define __WCHAR_MAX__ 0x7fffffff
#define forceinline inline __attribute__((always_inline))
#define INT16_MAX 32767
#define RLIMIT_AS 5
#define BUMP_SI(size) if (!cpu->df) cpu->esi += sz(size)/8; else cpu->esi -= sz(size)/8
#define __DARWIN_PDP_ENDIAN 3412
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define __DBL_DENORM_MIN__ ((double)4.94065645841246544176568792868221372e-324L)
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8 1
#define __DARWIN_FD_CLR(n,p) __darwin_fd_clr((n), (p))
#define __OS_EXTENSION_UNAVAILABLE(_msg) __OSX_EXTENSION_UNAVAILABLE(_msg) __IOS_EXTENSION_UNAVAILABLE(_msg)
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define __IPHONE_11_4 110400
#define htons(x) __DARWIN_OSSwapInt16(x)
#define __GCC_IEC_559 2
#define UNUSED(x) UNUSED_ ##x __attribute__((unused))
#define FLD() FPUSH(ST_i)
#define IOPOL_TYPE_VFS_IGNORE_CONTENT_PROTECTION 6
#define __FLT32X_DECIMAL_DIG__ 17
#define _IOFBF 0
#define _STRUCT_X86_CPMU_STATE64 struct __darwin_x86_cpmu_state64
#define __IOS_PROHIBITED 
#define f80_to_float(x,z) f80_to_float ##z(x)
#define INT_GPF 13
#define __FLT_EVAL_METHOD__ 0
#define putc_unlocked(x,fp) __sputc(x, fp)
#define _PTHREAD_T 
#define MB_CUR_MAX __mb_cur_max
#define __WATCHOS_4_0 40000
#define __FLT64_DECIMAL_DIG__ 17
#define ty_32 uint32_t
#define __disable_tail_calls 
#define FPE_NOOP 0
#define glue(a,b) _glue(a, b)
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define mem_read_real(addr,size) mem_read_ts(addr, ty_real(size), size)
#define CLD_STOPPED 5
#define NSIG __DARWIN_NSIG
#define __IPHONE_2_0 20000
#define __IPHONE_2_1 20100
#define __IPHONE_2_2 20200
#define w_termsig w_T.w_Termsig
#define INT_DOUBLE 8
#define __DARWIN_SUF_1050 "$1050"
#define _OS__OSBYTEORDERI386_H 
#define _SUSECONDS_T 
#define signed_overflow(what,a,b,res,z) ({ int ov = __builtin_ ##what ##_overflow((sint(z)) (a), (sint(z)) (b), (sint(z) *) &res); res = (sint(z)) res; ov; })
#define MAC_OS_X_VERSION_10_14_4 101404
#define SIGPROF 27
#define ATOMIC_ADC ADC
#define bool _Bool
#define __UINT_FAST64_MAX__ 0xffffffffffffffffULL
#define __SIG_ATOMIC_TYPE__ int
#define CAST_USER_ADDR_T(a_ptr) ((user_addr_t)((uintptr_t)(a_ptr)))
#define POLL_MSG 3
#define __DBL_MIN_10_EXP__ (-307)
#define INT16_MIN -32768
#define TRACE__NOP(msg,...) use(__VA_ARGS__)
#define __FINITE_MATH_ONLY__ 0
#define __cold __attribute__((__cold__))
#define set_reg_bp(to,size) *(uint(size) *) &cpu->ebp = to
#define __FLT32X_MAX_EXP__ 1024
#define __DARWIN_NBBY 8
#define _X86_INSTRUCTION_STATE_MAX_INSN_BYTES (2448 - 64 - 4)
#define RUSAGE_CHILDREN -1
#define WIFEXITED(x) (_WSTATUS(x) == 0)
#define BUS_NOOP 0
#define PGOFFSET(addr) ((addr) & (PAGE_SIZE - 1))
#define __FLT32_HAS_DENORM__ 1
#define ILL_BADSTK 8
#define _ALLOCA_H_ 
#define sz_8 8
#define SIGFPE 8
#define __DECONST(type,var) __CAST_AWAY_QUALIFIER(var, const, type)
#define __UINT_FAST8_MAX__ 0xff
#define READADDR READIMM_(addr_offset, 32); addr += addr_offset
#define __WATCHOS_PROHIBITED 
#define DEBUG_memory DEBUG_all
#define SA_RESTART 0x0002
#define __size_t 
#define __FLT32_MAX_10_EXP__ 38
#define _WCHAR_T_DEFINED 
#define SIGHUP 1
#define __INT8_C(c) c
#define _U_LONG 
#define SIGCONT 19
#define TRACE_strace TRACE__NOP
#define __INT_LEAST8_WIDTH__ 8
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffULL
#define DEBUG_strace DEBUG_all
#define _ERRNO_T 
#define FICOM(val,z) UNDEFINED
#define is_memory_modrm_reg 0
#define HALF_OP_SIZE glue(HALF_, OP_SIZE)
#define _STDLIB_H_ 
#define WAKEMON_GET_PARAMS 0x04
#define ferror_unlocked(p) __sferror(p)
#define __restrict restrict
#define REG_ID(reg) offsetof(struct cpu_state, reg)
#define NFDBITS __DARWIN_NFDBITS
#define IOPOL_VFS_CONTENT_PROTECTION_IGNORE 1
#define __SHRT_MAX__ 0x7fff
#define w_stopval w_S.w_Stopval
#define __LDBL_MAX__ 1.18973149535723176502126385303097021e+4932L
#define PRIO_PGRP 1
#define __exported_pop _Pragma("GCC visibility pop")
#define __SCCSID(s) __IDSTRING(sccsid,s)
#define __DARWIN_C_ANSI 010000L
#define ERR_PTR(err) (void *) (intptr_t) (err)
#define __FLT64X_MAX_10_EXP__ 4932
#define __DARWIN_EXTSN(sym) __asm("_" __STRING(sym) __DARWIN_SUF_EXTSN)
#define SIGTTOU 22
#define __MAC_10_1 1010
#define __IPHONE_10_0 100000
#define __IPHONE_10_1 100100
#define __IPHONE_10_2 100200
#define __IPHONE_10_3 100300
#define _BSD_MACHINE_SIGNAL_H_ 
#define __LDBL_IS_IEC_60559__ 2
#define _PTHREAD_MUTEX_T 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_1(x) 
#define str_lods(z) set(reg_a, mem_read(cpu->esi, z),z); BUMP_SI(z)
#define __FLT64X_HAS_QUIET_NAN__ 1
#define __WATCHOS_5_1 50100
#define __WATCHOS_5_3 50300
#define __SNPT 0x0800
#define howmany(x,y) __DARWIN_howmany(x, y)
#define ___POSIX_C_DEPRECATED_STARTING_200809L 
#define __UINT_LEAST8_MAX__ 0xff
#define READMODRM_MEM READMODRM; if (modrm.type == modrm_reg) UNDEFINED
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define __alloc_size(...) __attribute__((alloc_size(__VA_ARGS__)))
#define RENAME_EXCL 0x00000004
#define SF_RES (1 << 2)
#define __FLT128_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F128
#define bcopy(src,dest,...) __builtin___memmove_chk (dest, src, __VA_ARGS__, __darwin_obsz0 (dest))
#define __APPLE_CC__ 1
#define __UINTMAX_TYPE__ long unsigned int
#define __result_use_check __attribute__((__warn_unused_result__))
#define TODO(msg,...) die("TODO: " msg, ##__VA_ARGS__)
#define BUMP_SI_DI(size) BUMP_SI(size); BUMP_DI(size)
#define sprintf(str,...) __builtin___sprintf_chk (str, 0, __darwin_obsz(str), __VA_ARGS__)
#define flatten __attribute__((flatten))
#define PRIO_USER 2
#define __APPLE_API_STANDARD 
#define IOPOL_APPLICATION IOPOL_STANDARD
#define WCHAR_MIN (-WCHAR_MAX-1)
#define __API_DEPRECATED_BEGIN(...) 
#define SA_USERTRAMP 0x0100
#define __FLT_EVAL_METHOD_TS_18661_3__ 0
#define FDIV(src,dst) dst = f80_div(dst, src)
#define get_bit(bit,val,z) ((is_memory(val) ? mem_read(addr + get(bit,z) / z * (z/8), z) : get(val,z)) & (1 << (get(bit,z) % z))) ? 1 : 0
#define __UINT32_MAX__ 0xffffffffU
#define __bool_true_false_are_defined 1
#define __PTHREAD_MUTEX_SIZE__ 56
#define __DARWIN_UNIX03 1
#define __SIZE_T 
#define SIGUSR1 30
#define get_gs(size) cpu->gs
#define SIGEV_SIGNAL 1
#define __printflike(fmtarg,firstvararg) __attribute__((__format__ (__printf__, fmtarg, firstvararg)))
#define SIGINFO 29
#define __TVOS_11_0 110000
#define __TVOS_11_1 110100
#define __TVOS_11_2 110200
#define UINT_FAST16_MAX UINT16_MAX
#define __FLT128_MIN_EXP__ (-16381)
#define get_addr(size) addr
#define IOPOL_PASSIVE 2
#define IOPOL_ATIME_UPDATES_DEFAULT 0
#define __WINT_MIN__ (-__WINT_MAX__ - 1)
#define WUNTRACED 0x00000002
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_2(x) 
#define __pure2 __attribute__((__const__))
#define printk ish_printk
#define UINT16_C(v) (v)
#define INT_UNDEFINED 6
#define JMP(loc) cpu->eip = get(loc,); FIX_EIP;
#define __FLT128_MIN_10_EXP__ (-4931)
#define IOPOL_VFS_IGNORE_PERMISSIONS_OFF 0
#define __OSX_DEPRECATED(_start,_dep,_msg) 
#define __FLT32X_IS_IEC_60559__ 2
#define _STRUCT_MCONTEXT_AVX512_64 struct __darwin_mcontext_avx512_64
#define FIDIVR(val,z) ST(0) = f80_div(f80_from_int((sint(z)) get(val,z)), ST(0))
#define EXIT_FAILURE 1
#define htonl(x) __DARWIN_OSSwapInt32(x)
#define __INT_LEAST16_WIDTH__ 16
#define _SIZE_T_DEFINED_ 
#define __AVAILABILITY_INTERNAL_WEAK_IMPORT __attribute__((weak_import))
#define set_modrm_val(to,size) if (modrm.type == modrm_reg) { REGISTER(modrm_base, size) = to; } else { mem_write(addr, to, size); }(void)0
#define _STRUCT_MCONTEXT _STRUCT_MCONTEXT64
#define __SCHAR_MAX__ 0x7f
#define __FLT128_MANT_DIG__ 113
#define __IPHONE_6_0 60000
#define __IPHONE_6_1 60100
#define __WCHAR_MIN__ (-__WCHAR_MAX__ - 1)
#define FP_PREC_24B 0
#define _STRUCT_YMM_REG struct __darwin_ymm_reg
#define __INT64_C(c) c ## LL
#define XADD(src,dst,z) XCHG(src, dst,z); ADD(src, dst,z)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_15(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_16(x) x
#define FINISH return -1
#define SA_SIGINFO 0x0040
#define FYL2X() UNDEFINED
#define ty_real(x) ty_real_ ##x
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define _STRUCT_LAST_BRANCH_RECORD struct __last_branch_record
#define __INT_WCHAR_T_H 
#define WSTOPPED 0x00000008
#define _STRUCT_X86_FLOAT_STATE32 struct __darwin_i386_float_state
#define __MAC_11_1 110100
#define CLD_EXITED 1
#define _STRUCT_X86_THREAD_STATE32 struct __darwin_i386_thread_state
#define _STRUCT_X86_INSTRUCTION_STATE struct __x86_instruction_state
#define FISUBR(val,z) ST(0) = f80_sub(f80_from_int((sint(z)) get(val,z)), ST(0))
#define HTONL(x) (x) = htonl((__uint32_t)x)
#define HTONS(x) (x) = htons((__uint16_t)x)
#define _FORTIFY_SOURCE 2
#define IOPOL_VFS_SKIP_MTIME_UPDATE_ON 1
#define sz_80 80
#define MAC_OS_X_VERSION_10_10_2 101002
#define MAC_OS_X_VERSION_10_10_3 101003
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_4(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_2(x) 
#define SI_USER 0x10001
#define __API_UNAVAILABLE_BEGIN_GET_MACRO(...) 
#define IOPOL_TYPE_VFS_IGNORE_PERMISSIONS 7
#define get_1(size) 1
#define _INT32_T 
#define TLB_SIZE (1 << TLB_BITS)
#define FCOM() F_COMPARE(ST_i)
#define _STRUCT_SIGALTSTACK struct __darwin_sigaltstack
#define __sclearerr(p) ((void)((p)->_flags &= ~(__SERR|__SEOF)))
#define _STRUCT_MCONTEXT64_FULL struct __darwin_mcontext64_full
#define TRACEIP() TRACE("%d %08x\t", current_pid(), state->ip)
#define _STRUCT_X86_THREAD_STATE64 struct __darwin_x86_thread_state64
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_2(x) x
#define getchar_unlocked() getc_unlocked(stdin)
#define __DARWIN_ONLY_UNIX_CONFORMANCE 1
#define __FLT32X_MANT_DIG__ 53
#define is_memory_modrm_val (modrm.type != modrm_reg)
#define __USER_LABEL_PREFIX__ _
#define RLIM_INFINITY (((__uint64_t)1 << 63) - 1)
#define NTOHLL(x) (x) = ntohll((__uint64_t)x)
#define TLB_H 
#define __MAC_10_10_2 101002
#define __MAC_10_10_3 101003
#define ATOMIC_DEC DEC
#define __SWR 0x0008
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11(x) x
#define __END_DECLS 
#define __FLT64X_EPSILON__ 1.08420217248550443400745280086994171e-19F64x
#define __CONCAT(x,y) x ## y
#define ntohll(x) __DARWIN_OSSwapInt64(x)
#define WCONTINUED 0x00000010
#define EMU_CPU_MEM_H 
#define TRACE_verbose TRACE__NOP
#define __STDC_HOSTED__ 1
#define __assert(e,file,line) __assert_rtn ((const char *)-1L, file, line, e)
#define WAKEMON_DISABLE 0x02
#define get(what,size) get_ ##what(sz(size))
#define ILL_ILLOPC 1
#define CPU_OFFSET(field) offsetof(struct cpu_state, field)
#define RLIM_SAVED_CUR RLIM_INFINITY
#define _STDIO_H_ 
#define memmove(dest,...) __builtin___memmove_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define BT(bit,val,z) cpu->cf = get_bit(bit, val,z);
#define __alloca(size) __builtin_alloca(size)
#define MAC_OS_X_VERSION_10_12_1 101201
#define INT_DIV 0
#define MAC_OS_X_VERSION_10_12_4 101204
#define PRIO_PROCESS 0
#define _SYS_RESOURCE_H_ 
#define IDIV(val,z) do { if (get(val,z) == 0) return INT_DIV; sint(twice(z)) dividend = get(reg_a,z) | ((sint(twice(z))) get(reg_d,z) << z); set(reg_d, dividend % get(val,z),z); set(reg_a, dividend / get(val,z),z); } while (0)
#define TMP_MAX 308915776
#define FPE_FLTDIV 1
#define SIGURG 16
#define DEBUG_all 0
#define __options_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_open __enum_options
#define memcpy(dest,...) __builtin___memcpy_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define __IPHONE_14_0 140000
#define __IPHONE_14_1 140100
#define __IPHONE_14_3 140300
#define __IPHONE_14_5 140500
#define _BSD_SIZE_T_DEFINED_ 
#define __DBL_DIG__ 15
#define _SYS__ENDIAN_H_ 
#define uint(size) glue3(uint,size,_t)
#define strncat(dest,...) __builtin___strncat_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define __FLT32_DIG__ 6
#define __SWIFT_UNAVAILABLE_MSG(_msg) 
#define __FLT_EPSILON__ 1.19209289550781250000000000000000000e-7F
#define INT32_MIN (-INT32_MAX-1)
#define vsprintf(str,format,ap) __builtin___vsprintf_chk (str, 0, __darwin_obsz(str), format, ap)
#define SS_DISABLE 0x0004
#define __scanflike(fmtarg,firstvararg) __attribute__((__format__ (__scanf__, fmtarg, firstvararg)))
#define __SHRT_WIDTH__ 16
#define __TVOS_9_0 90000
#define __TVOS_9_1 90100
#define __TVOS_9_2 90200
#define _Nonnull 
#define IOPOL_IMPORTANT 1
#define MUL18(val) cpu->ax = cpu->al * val
#define __FLT32_IS_IEC_60559__ 2
#define __PTHREAD_RWLOCK_SIZE__ 192
#define set_reg_b(to,size) *(uint(size) *) &cpu->ebx = to
#define set_reg_c(to,size) *(uint(size) *) &cpu->ecx = to
#define set_reg_d(to,size) *(uint(size) *) &cpu->edx = to
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13(x) x
#define ILL_ILLADR 5
#define __LDBL_MIN__ 3.36210314311209350626267781732175260e-4932L
#define __STDC_UTF_16__ 1
#define __DBL_IS_IEC_60559__ 2
#define __API_DEPRECATED_MSG_GET_MACRO(...) 
#define SIGQUIT 3
#define __API_AVAILABLE_GET_MACRO(...) 
#define _SIZE_T_DEFINED 
#define __sfeof(p) (((p)->_flags & __SEOF) != 0)
#define __APPLE_API_EVOLVING 
#define IMUL2(val,reg,z) cpu->cf = cpu->of = signed_overflow(mul, get(reg,z), get(val,z), cpu->res,z); set(reg, cpu->res,z); SETRESFLAGS
#define IMUL3(imm,src,dst,z) cpu->cf = cpu->of = signed_overflow(mul, get(src,z), get(imm,z), cpu->res,z); set(dst, cpu->res,z); cpu->pf_res = 1; cpu->zf = cpu->sf = cpu->zf_res = cpu->sf_res = 0
#define _BLKCNT_T 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_1(x) 
#define __strong 
#define CMP(src,dst,z) SETAF(src, dst,z); cpu->cf = unsigned_overflow(sub, get(dst,z), get(src,z), cpu->res,z); cpu->of = signed_overflow(sub, get(dst,z), get(src,z), cpu->res,z); SETRESFLAGS
#define FDIVM(val,z) ST(0) = f80_div(ST(0), f80_from_float(get(val,z),z))
#define _WCHAR_T_ 
#define __FLT64X_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951F64x
#define _STDDEF_H 
#define _READIMM(name,size) name = mem_read(cpu->eip, size); cpu->eip += size/8
#define __DARWIN_BYTE_ORDER __DARWIN_LITTLE_ENDIAN
#define __MAC_10_3 1030
#define __FLT32X_HAS_INFINITY__ 1
#define __enum_closed_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_closed
#define mem_write(addr,val,size) mem_write_ts(addr, val, ty(size), size)
#define __INT32_MAX__ 0x7fffffff
#define __MAC_10_5 1050
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_1(x) 
#define __AVAILABILITY_VERSIONS__ 
#define __INT_WIDTH__ 32
#define __SIZEOF_LONG__ 8
#define __DARWIN_1050INODE64(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_64_BIT_INO_T)
#define __AVAILABILITY_INTERNAL_REGULAR 
#define SIG_ERR ((void (*)(int))-1)
#define SIGEV_NONE 0
#define __DARWIN_WEOF ((__darwin_wint_t)-1)
#define __APPLE__ 1
#define __UINT16_C(c) c
#define __WATCHOS_7_2 70200
#define ru_first ru_ixrss
#define set_reg_a(to,size) *(uint(size) *) &cpu->eax = to
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10_2(x) x
#define _INTPTR_T 
#define __DECIMAL_DIG__ 21
#define HTONLL(x) (x) = htonll((__uint64_t)x)
#define ST_i ST(modrm.rm_opcode)
#define J_REL(cond,offset) if (cond) { cpu->eip += get(offset,); FIX_EIP; }
#define __FLT64_EPSILON__ 2.22044604925031308084726333618164062e-16F64
#define NOT(val,z) set(val, ~get(val,z),z)
#define __APPLE_API_STABLE 
#define __FLT128_IS_IEC_60559__ 2
#define INT_DEBUG 1
#define ATOMIC_SUB SUB
#define SIG_ATOMIC_MIN INT32_MIN
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_1(x) 
#define SI_QUEUE 0x10002
#define __FLT64X_MIN_10_EXP__ (-4931)
#define RLIMIT_CORE 4
#define get_eflags(size) cpu->eflags
#define __LDBL_HAS_QUIET_NAN__ 1
#define INT64_C(v) (v ## LL)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_4(x) x
#define REPZ(op,z) while (cpu->ecx != 0) { STR(op, z); cpu->ecx--; if (!ZF) break; }
#define CMOVN(cond,dst,src,z) if (!cond) MOV(dst, src,z)
#define SV_ONSTACK SA_ONSTACK
#define ATOMIC_XADD XADD
#define __SPI_DEPRECATED_WITH_REPLACEMENT(...) 
#define MAC_OS_X_VERSION_10_14_1 101401
#define MAC_OS_X_VERSION_10_14_6 101406
#define SETRES(result,z) cpu->res = (int32_t) (sint(z)) (result); SETRESFLAGS
#define SIGIO 23
#define __FLT64_MANT_DIG__ 53
#define __API_UNAVAILABLE_GET_MACRO(...) 
#define strncpy(dest,...) __builtin___strncpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define _FSBLKCNT_T 
#define __SPI_AVAILABLE(...) 
#define _STRUCT_MCONTEXT64 struct __darwin_mcontext64
#define __FLT64X_MANT_DIG__ 64
#define set_eip(to,size) cpu->eip = to
#define L_tmpnam 1024
#define ___int_wchar_t_h 
#define __DYNAMIC__ 1
#define WCOREDUMP(x) (_W_INT(x) & WCOREFLAG)
#define WIFCONTINUED(x) (_WSTATUS(x) == _WSTOPPED && WSTOPSIG(x) == 0x13)
#define __MAC_10_0 1000
#define __MAC_10_2 1020
#define __MAC_10_4 1040
#define _T_PTRDIFF 
#define __MAC_10_6 1060
#define __MAC_10_7 1070
#define __MAC_10_8 1080
#define __MAC_10_9 1090
#define __GNUC__ 11
#define __DARWIN_ALIAS_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_NON_CANCELABLE __DARWIN_SUF_UNIX03)
#define __DARWIN_ALIAS_I(sym) __asm("_" __STRING(sym) __DARWIN_SUF_64_BIT_INO_T __DARWIN_SUF_UNIX03)
#define SA_ONSTACK 0x0001
#define UINT_LEAST8_MAX UINT8_MAX
#define _INO_T 
#define __MMX__ 1
#define RDTSC imm = rdtsc(); cpu->eax = imm & 0xffffffff; cpu->edx = imm >> 32
#define PF_FLAG (1 << 2)
#define L_ctermid 1024
#define ty_64 uint64_t
#define has_feature __has_feature
#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
#define FSTCW(dst) set(dst, cpu->fcw,16)
#define XCHG(src,dst,z) do { dword_t tmp = get(src,z); set(src, get(dst,z),z); set(dst, tmp,z); } while (0)
#define FD_SET(n,p) __DARWIN_FD_SET(n, p)
#define __FLT_HAS_DENORM__ 1
#define __SIZEOF_LONG_DOUBLE__ 16
#define __compiler_barrier() __asm__ __volatile__("" ::: "memory")
#define __MAC_10_14_4 101404
#define __MAC_10_14_6 101406
#define FST() ST_i = ST(0)
#define ATOMIC_SBB SBB
#define fileno_unlocked(p) __sfileno(p)
#define INT_FAST16_MIN INT16_MIN
#define FSUBRM(val,z) ST(0) = f80_sub(f80_from_float(get(val,z),z), ST(0))
#define FADD(src,dst) dst = f80_add(dst, src)
#define get_reg_b(size) ((uint(size)) cpu->ebx)
#define get_reg_c(size) ((uint(size)) cpu->ecx)
#define get_reg_d(size) ((uint(size)) cpu->edx)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_1(x) 
#define SEEK_CUR 1
#define __BIGGEST_ALIGNMENT__ 16
#define _MCONTEXT_T 
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_0(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_3(x) x
#define sa_handler __sigaction_u.__sa_handler
#define __darwin_obsz(object) __builtin_object_size (object, _USE_FORTIFY_LEVEL > 1 ? 1 : 0)
#define PRIO_DARWIN_NONUI 0x1001
#define __DARWIN_ONLY_VERS_1050 0
#define sz_128 128
#define __WATCHOS_2_0 20000
#define __WATCHOS_2_1 20100
#define __WATCHOS_2_2 20200
#define __DARWIN_1050ALIAS(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_UNIX03)
#define __FLT64_MAX_10_EXP__ 308
#define __sferror(p) (((p)->_flags & __SERR) != 0)
#define UNDEFINED { cpu->eip = saved_ip; return INT_UNDEFINED; }
#define PRIO_DARWIN_PROCESS 4
#define _STRUCT_MMST_REG struct __darwin_mmst_reg
#define _TIME_T 
#define _IN_ADDR_T 
#define __COPYRIGHT(s) __IDSTRING(copyright,s)
#define _I386_SIGNAL_H_ 1
#define RCL(count,val,z) UNDEFINED
#define __pure 
#define RCR(count,val,z) UNDEFINED
#define WTERMSIG(x) (_WSTATUS(x))
#define reg_ah reg_sp
#define FDIVRM(val,z) ST(0) = f80_div(f80_from_float(get(val,z),z), ST(0))
#define MUL1(val,z) do { uint64_t tmp = get(reg_a,z) * (uint64_t) get(val,z); set(reg_a, tmp,z); set(reg_d, tmp >> z,z);; cpu->cf = cpu->of = (tmp != (uint32_t) tmp); ZEROAF; cpu->zf = cpu->sf = cpu->pf = cpu->zf_res = cpu->sf_res = cpu->pf_res = 0; } while (0)
#define CLD_NOOP 0
#define _GCC_WCHAR_T 
#define FLDM(val,z) FPUSH(f80_from_float(get(val,z),z))
#define __DBL_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define __APPLE_API_UNSTABLE 
#define FRNDINT() UNDEFINED
#define __INT_FAST32_MAX__ 0x7fffffff
#define htonll(x) __DARWIN_OSSwapInt64(x)
#define REP(op,z) while (cpu->ecx != 0) { STR(op, z); cpu->ecx--; }
#define __DBL_HAS_INFINITY__ 1
#define __MAC_10_15_1 101501
#define __DARWIN_1050ALIAS_I(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_64_BIT_INO_T __DARWIN_SUF_UNIX03)
#define _SYS_TYPES_H_ 
#define W_EXITCODE(ret,sig) ((ret) << 8 | (sig))
#define snprintf(str,len,...) __builtin___snprintf_chk (str, len, 0, __darwin_obsz(str), __VA_ARGS__)
#define UINT8_MAX 255
#define __SIZEOF_FLOAT__ 4
#define _DARWIN_FEATURE_ONLY_UNIX_CONFORMANCE 1
#define SIGVTALRM 26
#define str_scas(z) CMP(reg_a, mem_di,z); BUMP_DI(z)
#define __HAVE_SPECULATION_SAFE_VALUE 1
#define __XNU_PRIVATE_EXTERN __attribute__((visibility("hidden")))
#define __null_unspecified 
#define w_stopsig w_S.w_Stopsig
#define FTST() F_COMPARE(fpu_consts[fconst_zero])
#define _WSTOPPED 0177
#define _INT16_T 
#define __IPHONE_3_2 30200
#define ___POSIX_C_DEPRECATED_STARTING_199309L 
#define DECLARE_LOCALS dword_t addr_offset = 0; dword_t saved_ip = cpu->eip; struct regptr modrm_regptr, modrm_base; dword_t addr = 0; union xmm_reg xmm_src; union xmm_reg xmm_dst; float80 ftmp;
#define putchar_unlocked(x) putc_unlocked(x, stdout)
#define __INTPTR_WIDTH__ 64
#define SETAF(a,b,z) cpu->op1 = get(a,z); cpu->op2 = get(b,z); cpu->af_ops = 1
#define __FLT64X_HAS_INFINITY__ 1
#define TLB_INDEX(addr) (((addr >> PAGE_BITS) & (TLB_SIZE - 1)) ^ (addr >> (PAGE_BITS + TLB_BITS)))
#define __UINT_LEAST32_MAX__ 0xffffffffU
#define FP_STATE_BYTES 512
#define fallthrough __attribute__((fallthrough))
#define REG(byte) ((byte & 0b00111000) >> 3)
#define CLD_KILLED 2
#define __FLT32X_HAS_DENORM__ 1
#define __INT_FAST16_TYPE__ short int
#define SA_64REGSET 0x0200
#define FLOAT80_H 
#define TRACE_debug TRACE__NOP
#define _BLKSIZE_T 
#define __MMX_WITH_SSE__ 1
#define _WCHAR_T_DEFINED_ 
#define __WATCHOS_UNAVAILABLE 
#define __DARWIN_SUF_NON_CANCELABLE 
#define RUSAGE_INFO_V0 0
#define __IPHONE_3_0 30000
#define __IPHONE_3_1 30100
#define __LDBL_HAS_DENORM__ 1
#define MEM_WRITE_PTRACE 2
#define ty_real_32 float
#define fpu_ucomi fpu_comi
#define must_check __attribute__((warn_unused_result))
#define __FLT128_HAS_INFINITY__ 1
#define _STRUCT_TIMEVAL struct timeval
#define SIGABRT 6
#define _GCC_WRAP_STDINT_H 
#define CLD_CONTINUED 6
#define READIMM8 READIMM_(imm, 8); imm = (int8_t) (uint8_t) imm
#define SIGSTKSZ 131072
#define _STRUCT_X86_AVX512_STATE32 struct __darwin_i386_avx512_state
#define true 1
#define SA_RESETHAND 0x0004
#define SIGTERM 15
#define pun(type,x) (((union {typeof(x) _; type a;}) (x)).a)
#define __weak 
#define _DEV_T 
#define __abortlike __dead2 __cold __not_tail_called
#define ROL(count,val,z) if (get(count,8) % z != 0) { int cnt = get(count,8) % z; set(val, get(val,z) << cnt | get(val,z) >> (z - cnt),z); cpu->cf = get(val,z) & 1; if (cnt == 1) { cpu->of = cpu->cf ^ (get(val,z) >> (OP_SIZE - 1)); } }
#define __DBL_MAX_EXP__ 1024
#define __WCHAR_WIDTH__ 32
#define __DARWIN_BIG_ENDIAN 4321
#define __FLT32_MAX__ 3.40282346638528859811704183484516925e+38F32
#define ty_real_64 double
#define FIDIV(val,z) ST(0) = f80_div(ST(0), f80_from_int((sint(z)) get(val,z)))
#define _STRUCT_MCONTEXT_AVX512_64_FULL struct __darwin_mcontext_avx512_64_full
#define unsigned_overflow(what,a,b,res,z) ({ int ov = __builtin_ ##what ##_overflow((uint(z)) (a), (uint(z)) (b), (uint(z) *) &res); res = (sint(z)) res; ov; })
#define __kpi_unavailable 
#define CPUID_H 
#define __SSE2_MATH__ 1
#define __ATOMIC_HLE_RELEASE 131072
#define PDP_ENDIAN __DARWIN_PDP_ENDIAN
#define __PTRDIFF_MAX__ 0x7fffffffffffffffL
#define __TVOS_PROHIBITED 
#define ty_real_80 float80
#define __amd64 1
#define BUS_OBJERR 3
#define __strfmonlike(fmtarg,firstvararg) __attribute__((__format__ (__strfmon__, fmtarg, firstvararg)))
#define ATOMIC_ADD ADD
#define CALL(loc) PUSH(eip,oz); JMP(loc)
#define _SYS_SIGNAL_H_ 
#define FABS() ST(0) = f80_abs(ST(0))
#define SEGV_MAPERR 1
#define __PTHREAD_ONCE_SIZE__ 8
#define set_modrm_reg(to,size) REGISTER(modrm_regptr, size) = to
#define _PTRDIFF_T_DECLARED 
#define SAR(count,val,z) if (get(count,8) % z != 0) { int cnt = get(count,8) % z; cpu->cf = (get(val,z) >> (cnt - 1)) & 1; cpu->of = 0; set(val, ((sint(z)) get(val,z)) >> cnt,z); SETRES(get(val,z),z); ZEROAF; }
#define _str(x) #x
#define __AVAILABILITY__ 
#define __tune_core2__ 1
#define FPE_FLTOVF 2
#define __ATOMIC_HLE_ACQUIRE 65536
#define _UINT32_T 
#define _T_WCHAR 
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#define __SIZEOF_SIZE_T__ 8
#define __DARWIN_ALIAS_STARTING(_mac,_iphone,x) __DARWIN_ALIAS_STARTING_MAC_ ##_mac(x)
#define __kpi_deprecated_arm64_macos_unavailable 
#define __offsetof(type,field) __builtin_offsetof(type, field)
#define _glue(a,b) a ##b
#define _WCHAR_T 
#define __MAC_10_14_1 101401
#define WAKEMON_MAKE_FATAL 0x10
#define IOPOL_SCOPE_PROCESS 0
#define __SPI_DEPRECATED(...) 
#define __dead 
#define SIG_BLOCK 1
#define __DARWIN_FD_ZERO(p) __builtin_bzero(p, sizeof(*(p)))
#define __WATCHOS_5_0 50000
#define WAKEMON_SET_DEFAULTS 0x08
#define __FLT64X_MIN_EXP__ (-16381)
#define SIZE_MAX UINTPTR_MAX
#define BUS_ADRALN 1
#define __SIZEOF_WINT_T__ 4
#define __WATCHOS_5_2 50200
#define _SECURE__COMMON_H_ 
#define IMUL1(val,z) do { int64_t tmp = (int64_t) (sint(z)) get(reg_a,z) * (sint(z)) get(val,z); set(reg_a, tmp,z); set(reg_d, tmp >> z,z); cpu->cf = cpu->of = (tmp != (int32_t) tmp); cpu->zf = cpu->sf = cpu->pf = cpu->zf_res = cpu->sf_res = cpu->pf_res = 0; } while (0)
#define mem_write_ts(addr,val,type,size) ({ type _val = val; if (!tlb_write(tlb, addr, &_val, size/8)) { cpu->eip = saved_ip; cpu->segfault_addr = addr; return INT_GPF; } })
#define __IPHONE_11_0 110000
#define __IPHONE_11_1 110100
#define __IPHONE_11_2 110200
#define __IPHONE_11_3 110300
#define UINT64_C(v) (v ## ULL)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_0(x) 
#define __LONG_LONG_WIDTH__ 64
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_4(x) 
#define BSWAP(dst) set(dst, __builtin_bswap32(get(dst,32)),32)
#define __FLT32_MAX_EXP__ 128
#define WINT_MAX INT32_MAX
#define __WATCHOS_6_0 60000
#define __WATCHOS_6_1 60100
#define __WATCHOS_6_2 60200
#define ZEROAF cpu->af = cpu->af_ops = 0
#define __API_DEPRECATED_END 
#define __SOPT 0x0400
#define _DARWIN_FEATURE_64_BIT_INODE 1
#define UINTPTR_MAX 18446744073709551615UL
#define _X86_INSTRUCTION_STATE_CACHELINE_SIZE 64
#define reg_bh reg_di
#define stdout __stdoutp
#define _PTRDIFF_T 
#define TRACE_memory TRACE__NOP
#define __GXX_ABI_VERSION 1016
#define __IDSTRING(name,string) static const char name[] __used = string
#define FLDCW(dst) cpu->fcw = get(dst,16)
#define __header_always_inline __header_inline __attribute__ ((__always_inline__))
#define UINT_LEAST16_MAX UINT16_MAX
#define __DARWIN_FD_SET(n,p) __darwin_fd_set((n), (p))
#define __FLT_MIN_EXP__ (-125)
#define __DARWIN_NULL ((void *)0)
#define PUSH(thing,z) mem_write(cpu->esp - OP_SIZE/8, get(thing,z),z); cpu->esp -= OP_SIZE/8
#define str_cmps(z) CMP(mem_di, mem_si,z); BUMP_SI_DI(z)
#define DF_FLAG (1 << 10)
#define ATOMIC_AND AND
#define _UINT64_T 
#define __DEVOLATILE(type,var) __CAST_AWAY_QUALIFIER(var, volatile, type)
#define INT64_MAX 9223372036854775807LL
#define _BSD_I386__TYPES_H_ 
#define UINT32_MAX 4294967295U
#define INT8_MIN -128
#define __printf0like(fmtarg,firstvararg) __attribute__((__format__ (__printf0__, fmtarg, firstvararg)))
#define ILL_ILLOPN 4
#define WNOHANG 0x00000001
#define alloca(size) __alloca(size)
#define __INT16_MAX__ 0x7fff
#define _BSD_MACHINE__TYPES_H_ 
#define __x86_64 1
#define SEGV_ACCERR 2
#define __PTRDIFF_T 
#define __SALC 0x4000
#define FSCALE() UNDEFINED
#define __PTHREAD_CONDATTR_SIZE__ 8
#define NBBY __DARWIN_NBBY
#define ZF_FLAG (1 << 6)
#define _BSD_SIZE_T_ 
#define strcat(dest,...) __builtin___strcat_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_4(x) x
#define __TVOS_12_0 120000
#define __TVOS_12_1 120100
#define __TVOS_12_2 120200
#define __TVOS_12_3 120300
#define __TVOS_12_4 120400
#define __INT_FAST64_TYPE__ long long int
#define stpncpy(dest,...) __builtin___stpncpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define PAGE_ROUND_UP(bytes) (PAGE((bytes) + PAGE_SIZE - 1))
#define F80_INF ((float80) {.signif = 0x8000000000000000, .exp = 0x7fff, .sign = 0})
#define _ANSI_STDDEF_H 
#define __FLT64_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F64
#define __DBL_MIN__ ((double)2.22507385850720138309023271733240406e-308L)
#define get_0(size) 0
#define __SMBF 0x0080
#define ty_16 uint16_t
#define IOPOL_DEFAULT 0
#define __OSX_AVAILABLE(_vers) 
#define TLB_PAGE_EMPTY 1
#define RLIMIT_WAKEUPS_MONITOR 0x1
#define FD_SETSIZE __DARWIN_FD_SETSIZE
#define __FLT128_EPSILON__ 1.92592994438723585305597794258492732e-34F128
#define __FLT64X_NORM_MAX__ 1.18973149535723176502126385303097021e+4932F64x
#define __SIZEOF_POINTER__ 8
#define __SIZE_TYPE__ long unsigned int
#define __sgetc(p) (--(p)->_r < 0 ? __srget(p) : (int)(*(p)->_p++))
#define __not_tail_called 
#define __IPHONE_7_0 70000
#define __IPHONE_7_1 70100
#define __LP64__ 1
#define unlikely(x) __builtin_expect((x), 0)
#define __deprecated_enum_msg(_msg) 
#define __DBL_HAS_QUIET_NAN__ 1
#define __IOS_DEPRECATED(_start,_dep,_msg) 
#define OF (cpu->of)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_3(x) 
#define get_mem_addr_real(size) mem_read_real(addr, size)
#define __FLT32X_EPSILON__ 2.22044604925031308084726333618164062e-16F32x
#define SIGUSR2 31
#define AH_FLAG_MASK 0b11010101
#define IOPOL_TYPE_DISK 0
#define EOF (-1)
#define __OS_AVAILABILITY_MSG(_target,_availability,_msg) 
#define SIGTRAP 5
#define __nonnull 
#define FISUB(val,z) ST(0) = f80_sub(ST(0), f80_from_int((sint(z)) get(val,z)))
#define fwopen(cookie,fn) funopen(cookie, 0, fn, 0, 0)
#define st_0 ST(0)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10_3(x) x
#define __FLT64_MIN_EXP__ (-1021)
#define MAC_OS_X_VERSION_10_11_2 101102
#define MAC_OS_X_VERSION_10_11_3 101103
#define MAC_OS_X_VERSION_10_11_4 101104
#define __MAC_OS_X_VERSION_MIN_REQUIRED __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__
#define FPOP cpu->top++
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_4(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_5(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_6(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_7(x) 
#define st_i ST(modrm.rm_opcode)
#define __API_DEPRECATED_BEGIN_MSG_GET_MACRO(...) 
#define WAIT_MYPGRP 0
#define TEST(src,dst,z) SETRES(get(dst,z) & get(src,z),z); cpu->cf = cpu->of = cpu->af = cpu->af_ops = 0
#define reg_ch reg_bp
#define INT_LEAST8_MAX INT8_MAX
#define FPE_INTDIV 7
#define FMULM(val,z) ST(0) = f80_mul(ST(0), f80_from_float(get(val,z),z))
#define __WATCHOS_4_1 40100
#define READIMM_(name,size) _READIMM(name, size); TRACE("imm %llx ", (long long) name)
#define __FLT64_MIN_10_EXP__ (-307)
#define INT8_C(v) (v)
#define __WATCHOS_4_3 40300
#define __has_extension(x) 0
#define FSTM(dst,z) set(dst, f80_to_float(ST(0),z),z)
#define __MAC_OS_X_VERSION_MAX_ALLOWED __MAC_11_3
#define STRACE(msg,...) TRACE_(strace, msg, ##__VA_ARGS__)
#define SHLD(count,extra,dst,z) if (get(count,8) % z != 0) { int cnt = get(count,8) % z; cpu->res = get(dst,z) << cnt | get(extra,z) >> (z - cnt); set(dst, cpu->res,z); SETRESFLAGS; }
#define __FLT64X_DECIMAL_DIG__ 21
#define __REGISTER_PREFIX__ 
#define __UINT16_MAX__ 0xffff
#define __API_AVAILABLE_END 
#define IOPOL_ATIME_UPDATES_OFF 1
#define __DBL_HAS_DENORM__ 1
#define INT_LEAST32_MAX INT32_MAX
#define REGISTER(regptr,size) (*(ty(size) *) (((char *) cpu) + (regptr).reg ##size ##_id))
#define __MAC_10_11_3 101103
#define __MAC_10_11_4 101104
#define FPE_FLTSUB 6
#define INT_TIMER 32
#define ty_128 union xmm_reg
#define __LDBL_HAS_INFINITY__ 1
#define __OS_AVAILABILITY(_target,_availability) 
#define _FD_SET 
#define __FLT32_MIN__ 1.17549435082228750796873653722224568e-38F32
#define __UINT8_TYPE__ unsigned char
#define DECODER_RET int
#define __FLT_DIG__ 6
#define __NO_INLINE__ 1
#define DEC(val,z) do { int tmp = cpu->cf; SUB(1, val,z); cpu->cf = tmp; } while (0)
#define __DARWIN_NON_CANCELABLE 0
#define get_eip(size) cpu->eip
#define __DEC_EVAL_METHOD__ 2
#define strcpy(dest,...) __builtin___strcpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define __AVAILABILITY_INTERNAL_DEPRECATED_MSG(_msg) __attribute__((deprecated))
#define _STRUCT_X86_THREAD_FULL_STATE64 struct __darwin_x86_thread_full_state64
#define __enum_options 
#define __FLT_MANT_DIG__ 24
#define __LDBL_DECIMAL_DIG__ 21
#define CLD cpu->df = 0
#define INT_LEAST8_MIN INT8_MIN
#define __VERSION__ "11.2.0"
#define _STRUCT_X86_FLOAT_STATE64 struct __darwin_x86_float_state64
#define __MAC_10_10 101000
#define __MAC_10_11 101100
#define __MAC_10_12 101200
#define __MAC_10_13 101300
#define __MAC_10_14 101400
#define __MAC_10_15 101500
#define __MAC_10_16 101600
#define set(what,to,size) set_ ##what(to, sz(size))
#define __DARWIN_SUF_UNIX03 
#define __UINT64_C(c) c ## ULL
#define _PTRDIFF_T_ 
#define __used __attribute__((__used__))
#define ILL_ILLTRP 2
#define _SECURE__STRINGS_H_ 
#define BADSIG SIG_ERR
#define set_mem_di(size) mem_write(cpu->esi, size)
#define DIV(val,z) do { if (get(val,z) == 0) return INT_DIV; uint(twice(z)) dividend = get(reg_a,z) | ((uint(twice(z))) get(reg_d,z) << z); set(reg_d, dividend % get(val,z),z); set(reg_a, dividend / get(val,z),z); } while (0)
#define IOPOL_TYPE_VFS_SKIP_MTIME_UPDATE 8
#define get_reg_di(size) ((uint(size)) cpu->edi)
#define INT_LEAST32_MIN INT32_MIN
#define get_mem_addr(size) mem_read(addr, size)
#define sz_ OP_SIZE
#define sint(size) glue3(int,size,_t)
#define INT_FAST16_MAX INT16_MAX
#define __APPLE_API_PRIVATE 
#define _SECURE__STRING_H_ 
#define _IN_PORT_T 
#define _SYS__TYPES_H_ 
#define __INT_LEAST32_MAX__ 0x7fffffff
#define get_reg_a(size) ((uint(size)) cpu->eax)
#define __STRING(x) #x
#define get_reg_bp(size) ((uint(size)) cpu->ebp)
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define __DARWIN_1050ALIAS_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_NON_CANCELABLE __DARWIN_SUF_UNIX03)
#define _T_PTRDIFF_ 
#define TRAP_TRACE 2
#define __SSTR 0x0200
#define _UINTPTR_T 
#define __FLT128_MAX_EXP__ 16384
#define RLIMIT_CPU 0
#define _DARWIN_FEATURE_UNIX_CONFORMANCE 3
#define __no_instrument __attribute__((no_sanitize("address", "thread", "undefined", "leak"))) __no_instrument_msan
#define ty_8 uint8_t
#define FIADD(val,z) ST(0) = f80_add(ST(0), f80_from_int((sint(z)) get(val,z)))
#define PF (cpu->pf_res ? !__builtin_parity(cpu->res & 0xff) : cpu->pf)
#define RENAME_SECLUDE 0x00000001
#define __SLBF 0x0001
#define __TVOS_11_4 110400
#define RLIMIT_RSS RLIMIT_AS
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_2(x) 
#define __FLT32_MANT_DIG__ 24
#define _SYS_SIZE_T_H 
#define _FSTDIO 
#define clearerr_unlocked(p) __sclearerr(p)
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#define _CLOCK_T 
#define __SIZE_T__ 
#define _INTMAX_T 
#define reg_dh reg_si
#define _GID_T 
#define __IPHONE_13_5 130500
#define _STRINGS_H_ 
#define SIG_ATOMIC_MAX INT32_MAX
#define MEM_READ 0
#define IOPOL_VFS_SKIP_MTIME_UPDATE_OFF 0
#define __SRD 0x0004
#define DEBUG_instr DEBUG_all
#define __SRW 0x0010
#define __FBSDID(s) 
#define __PTHREAD_MUTEXATTR_SIZE__ 8
#define JMP_REL(offset) cpu->eip += get(offset,); FIX_EIP;
#define POLL_ERR 4
#define __IOS_UNAVAILABLE 
#define __API_DEPRECATED(...) 
#define INT32_MAX 2147483647
#define FSTSW(dst) set(dst, cpu->fsw,16)
#define _U_INT8_T 
#define _U_CHAR 
#define IOPOL_MATERIALIZE_DATALESS_FILES_DEFAULT 0
#define PRIO_DARWIN_BG 0x1000
#define _STDNORETURN_H 
#define FILD(val,z) FPUSH(f80_from_int((sint(z)) get(val,z)))
#define __FLT128_HAS_DENORM__ 1
#define SIG_UNBLOCK 2
#define __FLT32_DECIMAL_DIG__ 9
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_5(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_6(x) x
#define FPE_INTOVF 8
#define MAC_OS_X_VERSION_10_15_1 101501
#define __FLT128_DIG__ 33
#define __OSX_UNAVAILABLE 
#define __INT32_C(c) c
#define __ORDER_PDP_ENDIAN__ 3412
#define FIST(dst,z) set(dst, f80_to_int(ST(0)),z)
#define _STRUCT_LAST_BRANCH_STATE struct __last_branch_state
#define str(x) _str(x)
#define MODRM_H 
#define WEXITED 0x00000004
#define INT_FAST8_MIN INT8_MIN
#define memset(dest,...) __builtin___memset_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define FIX_EIP if (OP_SIZE == 16) cpu->eip &= 0xffff
#define SIGSEGV 11
#define _Null_unspecified 
#define BYTE_ORDER __DARWIN_BYTE_ORDER
#define IOPOL_STANDARD 5
#define FPUSH(val) ftmp = val; cpu->top--; ST(0) = ftmp
#define __MAC_11_0 110000
#define __INT_FAST32_TYPE__ int
#define READIMMoz READIMM
#define __MAC_11_3 110300
#define set_mem_si(size) mem_write(cpu->esi, size)
#define getc_unlocked(fp) __sgetc(fp)
#define __DARWIN_NO_LONG_LONG 0
#define FSUBM(val,z) ST(0) = f80_sub(ST(0), f80_from_float(get(val,z),z))
#define FOOTPRINT_INTERVAL_RESET 0x1
#define UINT64_MAX 18446744073709551615ULL
#define FSUBR(src,dst) dst = f80_sub(src, dst)
#define __PTHREAD_RWLOCKATTR_SIZE__ 16
#define ILL_COPROC 7
#define IOPOL_VFS_STATFS_FORCE_NO_DATA_VOLUME 1
#define CF (cpu->cf)
#define get_reg_si(size) ((uint(size)) cpu->esi)
#define SIG_DFL (void (*)(int))0
#define get_reg_sp(size) ((uint(size)) cpu->esp)
#define WSTOPSIG(x) (_W_INT(x) >> 8)
#define _UINT8_T 
#define __UINT_LEAST16_TYPE__ short unsigned int
#define __SAPP 0x0100
#define _KEY_T 
#define __MAC_10_15_4 101504
#define RAND_MAX 0x7fffffff
#define _INT64_T 
#define SS_ONSTACK 0x0001
#define __LASTBRANCH_MAX 32
#define IOPOL_TYPE_VFS_MATERIALIZE_DATALESS_FILES 3
#define _OFF_T 
#define __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ 110500
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_1(x) 
#define __UINT64_MAX__ 0xffffffffffffffffULL
#define FCOMI FUCOMI
#define _SIZE_T_DECLARED 
#define ROR(count,val,z) if (get(count,8) % z != 0) { int cnt = get(count,8) % z; set(val, get(val,z) >> cnt | get(val,z) << (z - cnt),z); cpu->cf = get(val,z) >> (OP_SIZE - 1); if (cnt == 1) { cpu->of = cpu->cf ^ (get(val,z) & 1); } }
#define __FLT_IS_IEC_60559__ 2
#define typecheck(type,x) ({type _x = x; x;})
#define READMODRM if (!modrm_compute(cpu, tlb, &addr, &modrm, &modrm_regptr, &modrm_base)) { cpu->segfault_addr = cpu->eip; cpu->eip = saved_ip; return INT_GPF; }
#define EMU_REGID_H 
#define __GNUC_WIDE_EXECUTION_CHARSET_NAME "UTF-32LE"
#define FIXINC_WRAP_STDIO_H_STDIO_STDARG_H 1
#define __WATCHOS_3_0 30000
#define __WATCHOS_3_1 30100
#define __WATCHOS_3_2 30200
#define SBB(src,dst,z) SETAF(src, dst,z); cpu->of = signed_overflow(sub, get(dst,z), get(src,z) + cpu->cf, cpu->res,z) || (cpu->cf && get(src,z) == ((uint(z)) -1) / 2); cpu->cf = unsigned_overflow(sub, get(dst,z), get(src,z) + cpu->cf, cpu->res,z) || (cpu->cf && get(src,z) == (uint(z)) -1); set(dst, cpu->res,z); SETRESFLAGS
#define __FLT64X_DIG__ 18
#define TRACEI(msg,...) TRACE(msg "\t", ##__VA_ARGS__)
#define __INT8_TYPE__ signed char
#define _UINTMAX_T 
#define INT_BREAKPOINT 3
#define __DARWIN_NOCANCEL(sym) __asm("_" __STRING(sym) __DARWIN_SUF_NON_CANCELABLE)
#define __GCC_ASM_FLAG_OUTPUTS__ 1
#define __CAST_AWAY_QUALIFIER(variable,qualifier,type) (type) (long)(variable)
#define __UINT32_TYPE__ unsigned int
#define _REG(n) union { dword_t e ##n; word_t n; }
#define FXAM() UNDEFINED
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_1(x) 
#define __API_AVAILABLE_BEGIN_GET_MACRO(...) 
#define RLIMIT_NPROC 7
#define __SOFF 0x1000
#define __FLT_RADIX__ 2
#define _STRUCT_FP_CONTROL struct __darwin_fp_control
#define __INT_LEAST16_TYPE__ short int
#define SIG_HOLD (void (*)(int))5
#define REG_VAL(cpu,reg_id,size) (*((uint(size) *) (((char *) (cpu)) + reg_id)))
#define __LDBL_EPSILON__ 1.08420217248550443400745280086994171e-19L
#define INTPTR_MAX 9223372036854775807L
#define __UINTMAX_C(c) c ## UL
#define minor(x) ((int32_t)((x) & 0xffffff))
#define __SSE_MATH__ 1
#define _U_INT32_T 
#define ATOMIC_INC INC
#define TRACE_(chan,msg,...) glue(TRACE_, chan)(msg, ##__VA_ARGS__)
#define __k8 1
#define BUFSIZ 1024
#define _FSFILCNT_T 
#define __FLT32X_MIN__ 2.22507385850720138309023271733240406e-308F32x
#define __SIG_ATOMIC_MAX__ 0x7fffffff
#define __API_TO_BE_DEPRECATED 100000
#define EMU_H 
#define _UID_T 
#define AF_OPS (1 << 3)
#define INT_LEAST64_MAX INT64_MAX
#define __WATCHOS_3_1_1 30101
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define SV_NODEFER SA_NODEFER
#define SIGPIPE 13
#define HALF_16 8
#define __SIZEOF_PTRDIFF_T__ 8
#define __IPHONE_4_0 40000
#define __IPHONE_4_1 40100
#define __IPHONE_4_2 40200
#define __IPHONE_4_3 40300
#define SEEK_SET 0
#define _W_INT(w) (*(int *)&(w))
#define _ID_T 
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_4(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_5(x) x
#define MEM_WRITE 1
#define __DARWIN_64_BIT_INO_T 1
#define _STRUCT_X86_DEBUG_STATE64 struct __darwin_x86_debug_state64
#define FLDC(what) FPUSH(fpu_consts[fconst_ ##what])
#define __TVOS_14_0 140000
#define __TVOS_14_2 140200
#define INTPTR_MIN (-INTPTR_MAX-1)
#define FP_CHOP 3
#define set_mem_addr(to,size) mem_write(addr, to, size)
#define get_modrm_val(size) (modrm.type == modrm_reg ? REGISTER(modrm_base, size) : mem_read(addr, size))
#define __TVOS_14_5 140500
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_3(x) 
#define TRAP_BRKPT 1
#define __LDBL_DIG__ 18
#define __nullable 
#define __FLT64_IS_IEC_60559__ 2
#define __x86_64__ 1
#define _SIZE_T_ 
#define __FLT32X_MIN_EXP__ (-1021)
#define MAC_OS_VERSION_11_0 110000
#define UINT_FAST32_MAX UINT32_MAX
#define _WCHAR_T_H 
#define DEBUG_verbose DEBUG_all
#define MOD(byte) ((byte & 0b11000000) >> 6)
#define ATOMIC_CMPXCHG CMPXCHG
#define _USE_FORTIFY_LEVEL 2
#define F2XM1() UNDEFINED
#define __INT_FAST16_MAX__ 0x7fff
#define __PTHREAD_SIZE__ 8176
#define __deprecated __attribute__((__deprecated__))
#define INT_LEAST64_MIN INT64_MIN
#define major(x) ((int32_t)(((u_int32_t)(x) >> 24) & 0xff))
#define REPNZ(op,z) while (cpu->ecx != 0) { STR(op, z); cpu->ecx--; if (ZF) break; }
#define __FLT64_DIG__ 15
#define __UINT_FAST32_MAX__ 0xffffffffU
#define MAC_OS_X_VERSION_10_11 101100
#define MAC_OS_X_VERSION_10_13 101300
#define MAC_OS_X_VERSION_10_14 101400
#define MAC_OS_X_VERSION_10_16 101600
#define __UINT_LEAST64_TYPE__ long long unsigned int
#define __SYS_APPLEAPIOPTS_H__ 
#define NULL ((void *)0)
#define STD cpu->df = 1
#define __API_DEPRECATED_WITH_REPLACEMENT_END 
#define FP_RND_UP 2
#define __FLT_HAS_QUIET_NAN__ 1
#define UINTMAX_MAX UINTMAX_C(18446744073709551615)
#define _STDINT_H_ 
#define INT32_C(v) (v)
#define __FLT_MAX_10_EXP__ 38
#define POLL_OUT 2
#define ADC(src,dst,z) SETAF(src, dst,z); cpu->of = signed_overflow(add, get(dst,z), get(src,z) + cpu->cf, cpu->res,z) || (cpu->cf && get(src,z) == ((uint(z)) -1) / 2); cpu->cf = unsigned_overflow(add, get(dst,z), get(src,z) + cpu->cf, cpu->res,z) || (cpu->cf && get(src,z) == (uint(z)) -1); set(dst, cpu->res,z); SETRESFLAGS
#define ADD(src,dst,z) SETAF(src, dst,z); cpu->cf = unsigned_overflow(add, get(dst,z), get(src,z), cpu->res,z); cpu->of = signed_overflow(add, get(dst,z), get(src,z), cpu->res,z); set(dst, cpu->res,z); SETRESFLAGS
#define SUB(src,dst,z) SETAF(src, dst,z); cpu->of = signed_overflow(sub, get(dst,z), get(src,z), cpu->res,z); cpu->cf = unsigned_overflow(sub, get(dst,z), get(src,z), cpu->res,z); set(dst, cpu->res,z); SETRESFLAGS
#define __SEOF 0x0020
#define sz(x) sz_ ##x
#define __LONG_MAX__ 0x7fffffffffffffffL
#define __IOS_EXTENSION_UNAVAILABLE(_msg) 
#define __WCHAR_T__ 
#define __FLT64X_HAS_DENORM__ 1
#define __dead2 __attribute__((__noreturn__))
#define __FLT_HAS_INFINITY__ 1
#define __GNUC_EXECUTION_CHARSET_NAME "UTF-8"
#define __DARWIN_EXTSN_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_EXTSN __DARWIN_SUF_NON_CANCELABLE)
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
#define READMODRM_NOMEM READMODRM; if (modrm.type != modrm_reg) UNDEFINED
#define __ENABLE_LEGACY_MAC_AVAILABILITY 1
#define INT_NMI 2
#define _BSD_PTRDIFF_T_ 
#define SIGXFSZ 25
#define __kpi_deprecated(_msg) 
#define __UINT_FAST16_TYPE__ short unsigned int
#define IOPOL_VFS_TRIGGER_RESOLVE_DEFAULT 0
#define IOPOL_UTILITY 4
#define FSQRT() UNDEFINED
#define WIFSTOPPED(x) (_WSTATUS(x) == _WSTOPPED && WSTOPSIG(x) != 0x13)
#define FUCOM FCOM
#define __INT_FAST32_WIDTH__ 32
#define __IPHONE_12_0 120000
#define __IPHONE_12_1 120100
#define __IPHONE_12_2 120200
#define __IPHONE_12_3 120300
#define __IPHONE_12_4 120400
#define __SERR 0x0040
#define __CHAR16_TYPE__ short unsigned int
#define SIGTTIN 21
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_3(x) 
#define __PRAGMA_REDEFINE_EXTNAME 1
#define OR(src,dst,z) set(dst, get(dst,z) | get(src,z),z); cpu->cf = cpu->of = cpu->af = cpu->af_ops = 0; SETRES(get(dst,z),z)
#define BIG_ENDIAN __DARWIN_BIG_ENDIAN
#define JN_REL(cond,offset) if (!cond) { cpu->eip += get(offset,); FIX_EIP; }
#define __no_instrument_msan 
#define SI_MESGQ 0x10005
#define __SIZE_WIDTH__ 64
#define str_movs(z) mem_write(cpu->edi, mem_read(cpu->esi, z), z); BUMP_SI_DI(z)
#define __WATCHOS_7_0 70000
#define __WATCHOS_7_1 70100
#define __WATCHOS_7_3 70300
#define __WATCHOS_7_4 70400
#define IOPOL_MATERIALIZE_DATALESS_FILES_OFF 1
#define __SEG_FS 1
#define __INT_LEAST16_MAX__ 0x7fff
#define _STRUCT_FP_STATUS struct __darwin_fp_status
#define __OSX_AVAILABLE_BUT_DEPRECATED(_osxIntro,_osxDep,_iosIntro,_iosDep) 
#define container_of(ptr,type,member) ((type *) ((char *) (ptr) - offsetof(type, member)))
#define PTR_ERR(ptr) (intptr_t) (ptr)
#define __INT64_MAX__ 0x7fffffffffffffffLL
#define _STRUCT_MCONTEXT32 struct __darwin_mcontext32
#define __SEG_GS 1
#define FPREM() ST(0) = f80_mod(ST(0), ST(1))
#define __FLT32_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F32
#define __SIG_ATOMIC_WIDTH__ 32
#define __DARWIN_ALIAS(sym) __asm("_" __STRING(sym) __DARWIN_SUF_UNIX03)
#define _STRUCT_X86_DEBUG_STATE32 struct __darwin_x86_debug_state32
#define __INT_LEAST64_TYPE__ long long int
#define VLOAD(src,dst,z) UNDEFINED
#define SIGCHLD 20
#define __APPLE_API_OBSOLETE 
#define __INT16_TYPE__ short int
#define __INT_LEAST8_TYPE__ signed char
#define MAKE_REGPTR(r32,r16,r8,xmm) ((struct regptr) { .reg32_id = REG_ID(r32), .reg16_id = REG_ID(r16), .reg8_id = REG_ID(r8), .reg128_id = REG_ID(xmm), })
#define __darwin_obsz0(object) __builtin_object_size (object, 0)
#define __STDC_VERSION__ 201710L
#define CPUMON_MAKE_FATAL 0x1000
#define __SIZEOF_INT__ 4
#define CMPXCHG(src,dst,z) CMP(reg_a, dst,z); if (E) { MOV(src, dst,z); } else MOV(dst, reg_a,z)
#define SETRESFLAGS cpu->zf_res = cpu->sf_res = cpu->pf_res = 1
#define _PTHREAD_COND_T 
#define IOPOL_NORMAL IOPOL_IMPORTANT
#define _MACHTYPES_H_ 
#define array_size(arr) (sizeof(arr)/sizeof((arr)[0]))
#define __INT_FAST8_MAX__ 0x7f
#define UINTMAX_C(v) (v ## UL)
#define JCXZ_REL(offset) J_REL(get(reg_c,oz) == 0, offset)
#define DEFAULT_CHANNEL instr
#define __FLT128_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define __INTPTR_MAX__ 0x7fffffffffffffffL
#define sz_32 32
#define RUSAGE_SELF 0
#define _SYS_STDIO_H_ 
#define AND(src,dst,z) set(dst, get(dst,z) & get(src,z),z); cpu->cf = cpu->of = cpu->af = cpu->af_ops = 0; SETRES(get(dst,z),z)
#define SIGSYS 12
#define GRP38(val) switch (modrm.opcode) { case 0: case 1: TRACE("test imm"); READIMM8; TEST(imm, val); break; case 2: TRACE("not"); return INT_UNDEFINED; case 3: TRACE("neg"); return INT_UNDEFINED; case 4: TRACE("mul"); return INT_UNDEFINED; case 5: TRACE("imul"); return INT_UNDEFINED; case 6: TRACE("div"); DIV(cpu->al, modrm_val8, cpu->ah); break; case 7: TRACE("idiv"); IDIV(oax, modrm_val, odx); break; default: TRACE("undefined"); return INT_UNDEFINED; }
#define SIGSTOP 17
#define __TVOS_13_0 130000
#define __TVOS_13_2 130200
#define __TVOS_13_3 130300
#define __TVOS_13_4 130400
#define ntohl(x) __DARWIN_OSSwapInt32(x)
#define SA_NOCLDSTOP 0x0008
#define ntohs(x) __DARWIN_OSSwapInt16(x)
#define __swift_compiler_version_at_least(...) 1
#define _MALLOC_UNDERSCORE_MALLOC_H_ 
#define __DARWIN_LITTLE_ENDIAN 1234
#define __FLT64_HAS_QUIET_NAN__ 1
#define IS_ERR(ptr) ((uintptr_t) (ptr) > (uintptr_t) -0xfff)
#define __SWIFT_UNAVAILABLE 
#define _SECURE__STDIO_H_ 
#define _IOLBF 1
#define __TVOS_UNAVAILABLE 
#define ILL_PRVREG 6
#define __LITTLE_ENDIAN__ 1
#define __DARWIN_WCHAR_MAX __WCHAR_MAX__
#define WIFSIGNALED(x) (_WSTATUS(x) != _WSTOPPED && _WSTATUS(x) != 0)
#define RLIMIT_FOOTPRINT_INTERVAL 0x4
#define noreturn _Noreturn
#define _BSD_MACHINE_ENDIAN_H_ 
#define __FLT32_MIN_10_EXP__ (-37)
#define ___POSIX_C_DEPRECATED_STARTING_199209L 
#define ATOMIC_BTC BTC
#define ATOMIC_BTS BTS
#define __FLT32X_DIG__ 15
#define NTOHL(x) (x) = ntohl((__uint32_t)x)
#define NTOHS(x) (x) = ntohs((__uint16_t)x)
#define __WORDSIZE 64
#define __IPHONE_8_0 80000
#define __IPHONE_8_1 80100
#define __PTRDIFF_WIDTH__ 64
#define __IPHONE_8_3 80300
#define __IPHONE_8_4 80400
#define INT64_MIN (-INT64_MAX-1)
#define __BEGIN_DECLS 
#define __LDBL_MANT_DIG__ 64
#define __PTHREAD_ATTR_SIZE__ 56
#define __exported_push _Pragma("GCC visibility push(default)")
#define __CONSTANT_CFSTRINGS__ 1
#define ATOMIC_XOR XOR
#define __DARWIN_ONLY_64_BIT_INO_T 0
#define __SIGN 0x8000
#define __FLT64_HAS_INFINITY__ 1
#define __FLT64X_MAX__ 1.18973149535723176502126385303097021e+4932F64x
#define false 0
#define POLL_HUP 6
#define get_mem_si(size) mem_read(cpu->esi, size)
#define __DARWIN_OSSwapInt16(x) ((__uint16_t)(__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt16(x) : _OSSwapInt16(x)))
#define __GNUC_VA_LIST 
#define _GCC_MAX_ALIGN_T 
#define RLIMIT_NOFILE 8
#define BUS_ADRERR 2
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#define __code_model_small__ 1
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_3(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_4(x) x
#define _STRUCT_X86_PAGEIN_STATE struct __x86_pagein_state
#define __OSX_EXTENSION_UNAVAILABLE(_msg) 
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define MAC_OS_X_VERSION_10_12_2 101202
#define assert(e) (__builtin_expect(!(e), 0) ? __assert_rtn(__func__, __FILE__, __LINE__, #e) : (void)0)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_5(x) 
#define FILENAME_MAX 1024
#define oz OP_SIZE
#define __DARWIN_WCHAR_MIN (-0x7fffffff - 1)
#define __DARWIN_OSSwapInt32(x) (__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt32(x) : _OSSwapInt32(x))
#define __k8__ 1
#define __INTPTR_TYPE__ long int
#define __UINT16_TYPE__ short unsigned int
#define __WCHAR_TYPE__ int
#define _SYS__PTHREAD_TYPES_H_ 
#define set_eflags(to,size) cpu->eflags = to
#define __API_UNAVAILABLE_END 
#define CPUID() do_cpuid(&cpu->eax, &cpu->ebx, &cpu->ecx, &cpu->edx)
#define __STDIO_H_ 
#define __pic__ 2
#define f80_to_float64 f80_to_double
#define f80_from_float(x,z) f80_from_float ##z(x)
#define __UINTPTR_MAX__ 0xffffffffffffffffUL
#define INT_SYSCALL 0x80
#define __INT_FAST64_WIDTH__ 64
#define __volatile volatile
#define TRACE__(msg,...) printk(msg, ##__VA_ARGS__)
#define SIGALRM 14
#define __STDC_WANT_LIB_EXT1__ 1
#define __API_DEPRECATED_WITH_REPLACEMENT(...) 
#define __DARWIN_OSSwapInt64(x) (__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt64(x) : _OSSwapInt64(x))
#define FP_RND_DOWN 1
#define SI_ASYNCIO 0x10004
#define __MAC_10_12_1 101201
#define __MAC_10_12_2 101202
#define __MAC_10_12_4 101204
#define _NLINK_T 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_3(x) 
#define __INT_FAST64_MAX__ 0x7fffffffffffffffLL
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define bitfield unsigned int
#define __FLT_NORM_MAX__ 3.40282346638528859811704183484516925e+38F
#define __FLT32_HAS_INFINITY__ 1
#define INT_FAST32_MAX INT32_MAX
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_2(x) 
#define __TVOS_DEPRECATED(_start,_dep,_msg) 
#define __FLT64X_MAX_EXP__ 16384
#define _WCHAR_T_DECLARED 
#define __UINT_FAST64_TYPE__ long long unsigned int
#define WNOWAIT 0x00000020
#define twice_8 16
#define POPF() POP(eflags,32); expand_flags(cpu)
#define EXIT_SUCCESS 0
#define _STRUCT_MCONTEXT_AVX512_32 struct __darwin_mcontext_avx512_32
#define READINSN _READIMM(insn, 8); TRACE("%02x ", insn)
#define UINT_FAST8_MAX UINT8_MAX
#define __INT_MAX__ 0x7fffffff
#define w_retcode w_T.w_Retcode
#define HALF_32 16
#define _CADDR_T 
#define f80_from_float32 f80_from_double
#define _CT_RUNE_T 
#define _UINT16_T 
#define __API_DEPRECATED_REP_GET_MACRO(...) 
#define _T_SIZE_ 
#define _U_INT 
#define TRACE(msg,...) TRACE_(DEFAULT_CHANNEL, msg, ##__VA_ARGS__)
#define ___POSIX_C_DEPRECATED_STARTING_199506L 
#define stpcpy(dest,...) __builtin___stpcpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define SAHF cpu->eflags &= 0xffffff00 | ~AH_FLAG_MASK; cpu->eflags |= cpu->ah & AH_FLAG_MASK; expand_flags(cpu)
#define __INT64_TYPE__ long long int
#define f80_from_float64 f80_from_double
#define VSTORE(src,dst,z) UNDEFINED
#define __FLT_MAX_EXP__ 128
#define SET(cond,val) set(val, (cond ? 1 : 0),8)
#define _PTHREAD_MUTEXATTR_T 
#define UINT32_C(v) (v ## U)
#define __swift_unavailable(_msg) 
#define __ORDER_BIG_ENDIAN__ 4321
#define __header_inline extern __inline __attribute__((__gnu_inline__))
#define _IONBF 2
#define __DBL_MANT_DIG__ 53
#define ___int_size_t_h 
#define _RSIZE_T 
#define f80_from_float80(x) x
#define mem_read(addr,size) mem_read_ts(addr, ty(size), size)
#define SF_FLAG (1 << 7)
#define INT_OVERFLOW 4
#define __SIZEOF_FLOAT128__ 16
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffLL
#define _STRUCT_X86_EXCEPTION_STATE32 struct __darwin_i386_exception_state
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define UINT_FAST64_MAX UINT64_MAX
#define INT_FPU 7
#define INT_FAST32_MIN INT32_MIN
#define __WINT_TYPE__ int
#define __UINT_LEAST32_TYPE__ unsigned int
#define __SIZEOF_SHORT__ 2
#define __FLT32_NORM_MAX__ 3.40282346638528859811704183484516925e+38F32
#define __SSE__ 1
#define POLL_PRI 5
#define _STRUCT_X86_AVX512_STATE64 struct __darwin_x86_avx512_state64
#define __LDBL_MIN_EXP__ (-16381)
#define zero_init(type) ((type[1]){}[0])
#define FPE_FLTINV 5
#define __FLT64_MAX__ 1.79769313486231570814527423731704357e+308F64
#define mem_write_real(addr,val,size) mem_write_ts(addr, val, ty_real(size), size)
#define __DARWIN_C_FULL 900000L
#define __MACH__ 1
#define _STRUCT_X86_EXCEPTION_STATE64 struct __darwin_x86_exception_state64
#define __amd64__ 1
#define FADDM(val,z) ST(0) = f80_add(ST(0), f80_from_float(get(val,z),z))
#define AF (cpu->af_ops ? ((cpu->op1 ^ cpu->op2 ^ cpu->res) >> 4) & 1 : cpu->af)
#define __WINT_WIDTH__ 32
#define __INT_LEAST8_MAX__ 0x7f
#define __INT_LEAST64_WIDTH__ 64
#define __LDBL_MAX_EXP__ 16384
#define RLIMIT_CPU_USAGE_MONITOR 0x2
#define __FLT32X_MAX_10_EXP__ 308
#define BE (CF | ZF)
#define __DARWIN_SUF_EXTSN "$DARWIN_EXTSN"
#define RLIMIT_DATA 2
#define _RUNE_T 
#define SV_SIGINFO SA_SIGINFO
#define set_mem_addr_real(to,size) mem_write_real(addr, to, size)
#define _STRUCT_UCONTEXT struct __darwin_ucontext
#define SIGTSTP 18
#define __SIZEOF_INT128__ 16
#define PTRDIFF_MIN INTMAX_MIN
#define __FLT64X_IS_IEC_60559__ 2
#define fpu_ucom fpu_com
#define __LDBL_MAX_10_EXP__ 4932
#define FMUL(src,dst) dst = f80_mul(dst, src)
#define _PTHREAD_RWLOCK_T 
#define __ATOMIC_RELAXED 0
#define __signed signed
#define _STRUCT_XMM_REG struct __darwin_xmm_reg
#define INT_NONE -1
#define RLIMIT_FSIZE 1
#define __DBL_EPSILON__ ((double)2.22044604925031308084726333618164062e-16L)
#define glue4(a,b,c,d) glue(a, glue3(b, c, d))
#define ZF_RES (1 << 1)
#define __FLT128_MIN__ 3.36210314311209350626267781732175260e-4932F128
#define _SIZET_ 
#define IOPOL_SCOPE_THREAD 1
#define _PTHREAD_ATTR_T 
#define POP(thing,z) set(thing, mem_read(cpu->esp, z),z); cpu->esp += OP_SIZE/8
#define _LP64 1
#define SIGEMT 7
#define __UINT8_C(c) c
#define RLIMIT_MEMLOCK 6
#define __API_AVAILABLE(...) 
#define __FLT64_MAX_EXP__ 1024
#define _INT8_T 
#define SIGKILL 9
#define __INT_LEAST32_TYPE__ int
#define __API_UNAVAILABLE(...) 
#define fropen(cookie,fn) funopen(cookie, fn, 0, 0, 0)
#define __wchar_t__ 
#define SEEK_END 2
#define __SIZEOF_WCHAR_T__ 4
#define __UINT64_TYPE__ long long unsigned int
#define __has_feature(x) 0
#define BAD_PAGE 0x10000
#define debugger __asm__("int3")
#define __GNUC_PATCHLEVEL__ 0
#define __DARWIN_1050(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_15_1(x) x
#define MAC_OS_X_VERSION_10_10 101000
#define IOPOL_VFS_CONTENT_PROTECTION_DEFAULT 0
#define get_mem_di(size) mem_read(cpu->edi, size)
#define MAKE_OP(x,OP,op) case x+0x0: TRACEI(op " reg8, modrm8"); READMODRM; OP(modrm_reg, modrm_val,8); break; case x+0x1: TRACEI(op " reg, modrm"); READMODRM; OP(modrm_reg, modrm_val,oz); break; case x+0x2: TRACEI(op " modrm8, reg8"); READMODRM; OP(modrm_val, modrm_reg,8); break; case x+0x3: TRACEI(op " modrm, reg"); READMODRM; OP(modrm_val, modrm_reg,oz); break; case x+0x4: TRACEI(op " imm8, al\t"); READIMM8; OP(imm, reg_a,8); break; case x+0x5: TRACEI(op " imm, oax\t"); READIMM; OP(imm, reg_a,oz); break
#define __FLT128_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define MAC_OS_X_VERSION_10_12 101200
#define __DARWIN_OSSwapConstInt16(x) ((__uint16_t)((((__uint16_t)(x) & 0xff00U) >> 8) | (((__uint16_t)(x) & 0x00ffU) << 8)))
#define W_STOPCODE(sig) ((sig) << 8 | _WSTOPPED)
#define DECODER_PASS_ARGS cpu, tlb
#define _STDDEF_H_ 
#define MAC_OS_X_VERSION_10_15 101500
#define TLB_PAGE(addr) (addr & 0xfffff000)
#define __FLT64_NORM_MAX__ 1.79769313486231570814527423731704357e+308F64
#define SIGXCPU 24
#define __FLT128_HAS_QUIET_NAN__ 1
#define __INTMAX_MAX__ 0x7fffffffffffffffL
#define twice_16 32
#define _STRUCT_MCONTEXT_AVX64_FULL struct __darwin_mcontext_avx64_full
#define __DARWIN_OSSwapConstInt32(x) ((__uint32_t)((((__uint32_t)(x) & 0xff000000U) >> 24) | (((__uint32_t)(x) & 0x00ff0000U) >> 8) | (((__uint32_t)(x) & 0x0000ff00U) << 8) | (((__uint32_t)(x) & 0x000000ffU) << 24)))
#define PAGE_BITS 12
#define EMU_FPU_H 
#define __MAC_10_11_2 101102
#define IOPOL_SCOPE_DARWIN_BG 2
#define __INT_FAST8_TYPE__ signed char
#define feof_unlocked(p) __sfeof(p)
#define __DARWIN_FD_SETSIZE 1024
#define __FLT64X_MIN__ 3.36210314311209350626267781732175260e-4932F64x
#define LE (L | ZF)
#define __DEQUALIFY(type,var) __CAST_AWAY_QUALIFIER(var, const volatile, type)
#define PF_RES (1 << 0)
#define WAIT_ANY (-1)
#define TRACE_instr TRACE__NOP
#define _BSD_MACHINE_TYPES_H_ 
#define RUSAGE_INFO_V1 1
#define __GNUC_STDC_INLINE__ 1
#define P_tmpdir "/var/tmp/"
#define SV_NOCLDSTOP SA_NOCLDSTOP
#define __FLT64_HAS_DENORM__ 1
#define RUSAGE_INFO_V2 2
#define is_gcc(version) (__GNUC__ >= version)
#define RUSAGE_INFO_V4 4
#define RUSAGE_INFO_V5 5
#define __DARWIN_OSSwapConstInt64(x) ((__uint64_t)((((__uint64_t)(x) & 0xff00000000000000ULL) >> 56) | (((__uint64_t)(x) & 0x00ff000000000000ULL) >> 40) | (((__uint64_t)(x) & 0x0000ff0000000000ULL) >> 24) | (((__uint64_t)(x) & 0x000000ff00000000ULL) >> 8) | (((__uint64_t)(x) & 0x00000000ff000000ULL) << 8) | (((__uint64_t)(x) & 0x0000000000ff0000ULL) << 24) | (((__uint64_t)(x) & 0x000000000000ff00ULL) << 40) | (((__uint64_t)(x) & 0x00000000000000ffULL) << 56)))
#define __FLT32_EPSILON__ 1.19209289550781250000000000000000000e-7F32
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_1(x) 
#define __SMOD 0x2000
#define RENAME_SWAP 0x00000002
#define INTMAX_MAX INTMAX_C(9223372036854775807)
#define RUSAGE_INFO_V3 3
#define MINSIGSTKSZ 32768
#define __TYPES_H_ 
#define __DARWIN_NSIG 32
#define __DBL_DECIMAL_DIG__ 17
#define __STDC_UTF_32__ 1
#define __INT_FAST8_WIDTH__ 8
#define w_coredump w_T.w_Coredump
#define __FXSR__ 1
#define __WATCHOS_4_2 40200
#define SV_INTERRUPT SA_RESTART
#define CLD_DUMPED 3
#define _SIZE_T 
#define __options_closed_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_closed __enum_options
#define __FLT32X_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define WEXITSTATUS(x) ((_W_INT(x) >> 8) & 0x000000ff)
#define __DARWIN_VERS_1050 1
#define __DBL_NORM_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define use(...) __use(0, ##__VA_ARGS__)
#define IOPOL_VFS_TRIGGER_RESOLVE_OFF 1
#define UTIL_DEBUG_H 
#define FOPEN_MAX 20
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define _MACH_I386__STRUCTS_H_ 
#define FIXME(msg,...) printk("FIXME " msg "\n", ##__VA_ARGS__)
#define WCOREFLAG 0200
#define IOPOL_TYPE_VFS_TRIGGER_RESOLVE 5
#define stderr __stderrp
#define ATOMIC_OR OR
#define sz_16 16
#define FXCH() float80 ftmp = ST(0); ST(0) = ST_i; ST_i = ftmp
#define RM(byte) ((byte & 0b00000111) >> 0)
#define FCHS() ST(0) = f80_neg(ST(0))
#define __INTMAX_WIDTH__ 64
#define posit assert
#define SF (cpu->sf_res ? (int32_t) cpu->res < 0 : cpu->sf)
#define RET_NEAR(imm) POP(eip,32); FIX_EIP; cpu->esp += get(imm,16)
#define _STRING_H_ 
#define ST(i) cpu->fp[cpu->top + i]
#define _GCC_SIZE_T 
#define _RLIMIT_POSIX_FLAG 0x1000
#define RLIM_NLIMITS 9
#define has_attribute __has_attribute
#define __UINT32_C(c) c ## U
#define STR(op,z) str_ ##op(z)
#define ___POSIX_C_DEPRECATED_STARTING_200112L 
#define FIMUL(val,z) ST(0) = f80_mul(ST(0), f80_from_int((sint(z)) get(val,z)))
#define __size_t__ 
#define __TVOS_10_0 100000
#define __TVOS_10_1 100100
#define __TVOS_10_2 100200
#define __FLT_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F
#define SIGEV_THREAD 3
#define __IOS_AVAILABLE(_vers) 
#define INTMAX_MIN (-INTMAX_MAX-1)
#define READIMM READIMM_(imm, OP_SIZE)
#define _STRUCT_ZMM_REG struct __darwin_zmm_reg
#define PAGE(addr) ((addr) >> PAGE_BITS)
#define sigmask(m) (1 << ((m)-1))
#define __API_UNAVAILABLE_BEGIN(...) 
#define __INT8_MAX__ 0x7f
#define sz_64 64
#define __LONG_WIDTH__ 64
#define __PIC__ 2
#define _SIGSET_T 
#define __UINT_FAST32_TYPE__ unsigned int
#define FD_ISSET(n,p) __DARWIN_FD_ISSET(n, p)
#define WAKEMON_ENABLE 0x01
#define FP_RND_NEAR 0
#define TLB_BITS 10
#define INC(val,z) do { int tmp = cpu->cf; ADD(1, val,z); cpu->cf = tmp; } while (0)
#define __sfileno(p) ((p)->_file)
#define __TVOS_11_3 110300
#define __RCSID(s) __IDSTRING(rcsid,s)
#define INT(code) return get(code,8)
#define FPE_FLTRES 4
#define __FLT32X_NORM_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define __CHAR32_TYPE__ unsigned int
#define SEGV_NOOP 0
#define __FLT_MAX__ 3.40282346638528859811704183484516925e+38F
#define POLL_IN 1
#define __IPHONE_5_0 50000
#define __IPHONE_5_1 50100
#define __exported __attribute__((__visibility__("default")))
#define WINT_MIN INT32_MIN
#define __PROJECT_VERSION(s) __IDSTRING(project_version,s)
#define is_memory(what) is_memory_ ##what
#define GRP5_ATOMIC(val,z) switch (modrm.opcode) { case 0: TRACE("lock inc"); ATOMIC_INC(val,z); break; case 1: TRACE("lock dec"); ATOMIC_DEC(val,z); break; default: TRACE("undefined"); UNDEFINED; }
#define INT_FAST64_MAX INT64_MAX
#define UINT_LEAST32_MAX UINT32_MAX
#define ZF (cpu->zf_res ? cpu->res == 0 : cpu->zf)
#define FP_PREC_64B 3
#define SA_NOCLDWAIT 0x0020
#define __AVAILABILITY_INTERNAL_UNAVAILABLE __attribute__((unavailable))
#define CMOV(cond,dst,src,z) if (cond) MOV(dst, src,z)
#define __AVAILABILITY_INTERNAL_DEPRECATED __attribute__((deprecated))
#define SA_NODEFER 0x0010
#define IOPOL_TYPE_VFS_STATFS_NO_DATA_VOLUME 4
#define __DARWIN_SUF_64_BIT_INO_T "$INODE64"
#define set_reg_si(to,size) *(uint(size) *) &cpu->esi = to
#define __SSE2__ 1
#define set_reg_sp(to,size) *(uint(size) *) &cpu->esp = to
#define _SYS_WAIT_H_ 
#define FCOMM(val,z) F_COMPARE(f80_from_float(get(val,z),z))
#define SIGILL 4
#define __API_AVAILABLE_BEGIN(...) 
#define RSIZE_MAX (SIZE_MAX >> 1)
#define __OSX_AVAILABLE_STARTING(_osx,_ios) 
#define __INT32_TYPE__ int
#define msk(bit,z) (1 << (get(bit,z) % z))
#define __SIZEOF_DOUBLE__ 8
#define __FLT_MIN_10_EXP__ (-37)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_4(x) 
#define RUSAGE_INFO_CURRENT RUSAGE_INFO_V5
#define __DARWIN_FD_COPY(f,t) bcopy(f, t, sizeof(*(f)))
#define __FLT64_MIN__ 2.22507385850720138309023271733240406e-308F64
#define __INT_LEAST32_WIDTH__ 32
#define ERRNO_DIE(msg) { perror(msg); abort(); }
#define __AVAILABILITY_INTERNAL__ 
#define __INTMAX_TYPE__ long int
#define __unavailable 
#define __DRIVERKIT_20_0 200000
#define _QUAD_HIGHWORD 1
#define _T_SIZE 
#define SIGIOT SIGABRT
#define f80_to_float32 f80_to_double
#define SHRD(count,extra,dst,z) if (get(count,8) % z != 0) { int cnt = get(count,8) % z; cpu->cf = (get(dst,z) >> (cnt - 1)) & 1; cpu->res = get(dst,z) >> cnt | get(extra,z) << (z - cnt); set(dst, cpu->res,z); SETRESFLAGS; }
#define CALL_REL(offset) PUSH(eip,oz); JMP_REL(offset)
#define __FLT32X_HAS_QUIET_NAN__ 1
#define __ATOMIC_CONSUME 1
#define MOV(src,dst,z) set(dst, get(src,z),z)
#define __GNUC_MINOR__ 2
#define ___POSIX_C_DEPRECATED_STARTING_198808L 
#define __strncpy_safe __attribute__((nonstring))
#define __INT_FAST16_WIDTH__ 16
#define __UINTMAX_MAX__ 0xffffffffffffffffUL
#define USER_ADDR_NULL ((user_addr_t) 0)
#define LITTLE_ENDIAN __DARWIN_LITTLE_ENDIAN
#define _STRUCT_MCONTEXT_AVX32 struct __darwin_mcontext_avx32
#define __FLT32X_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F32x
#define SEG_GS() addr += cpu->tls_ptr
#define __API_DEPRECATED_BEGIN_REP_GET_MACRO 
#define ATOMIC_BTR BTR
#define __unreachable_ok_pop _Pragma("GCC diagnostic pop")
#define INTMAX_C(v) (v ## L)
#define ILL_PRVOPC 3
#define INT_FAST64_MIN INT64_MIN
#define get_imm(size) ((uint(size)) imm)
#define PAGE_SIZE (1 << PAGE_BITS)
#define __DBL_MAX_10_EXP__ 308
#define __const const
#define UINT16_MAX 65535
#define __LDBL_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951L
#define S SF
#define __DARWIN_OS_INLINE static inline
#define __INT16_C(c) c
#define _INO64_T 
#define _CTERMID_H_ 
#define SETRES_RAW(result,z) 
#define _STRUCT_MCONTEXT_AVX64 struct __darwin_mcontext_avx64
#define DECODER_ARGS struct cpu_state *cpu, struct tlb *tlb
#define _STRUCT_OPMASK_REG struct __darwin_opmask_reg
#define _U_SHORT 
#define __STDC__ 1
#define RESTORE_IP cpu->eip = saved_ip
#define static_assert _Static_assert
#define __PTRDIFF_TYPE__ long int
#define AF_FLAG (1 << 4)
#define __IPHONE_13_0 130000
#define __IPHONE_13_1 130100
#define __IPHONE_13_2 130200
#define __IPHONE_13_3 130300
#define __IPHONE_13_4 130400
#define __IPHONE_13_6 130600
#define __IPHONE_13_7 130700
#define stdin __stdinp
#define __I386_MCONTEXT_H_ 
#define sv_onstack sv_flags
#define DECODER_NAME cpu_step
#define RU_PROC_RUNS_RESLIDE 0x00000001
#define __ATOMIC_SEQ_CST 5
#define __PTHREAD_COND_SIZE__ 40
#define get_modrm_reg(size) REGISTER(modrm_regptr, size)
#define PRIO_DARWIN_THREAD 3
#define __WATCHOS_AVAILABLE(_vers) 
#define F80_NAN ((float80) {.signif = 0xc000000000000000, .exp = 0x7fff, .sign = 0})
#define _PTHREAD_KEY_T 
#define __FLT32X_MIN_10_EXP__ (-307)
#define L (SF ^ OF)
#define CVT set(reg_d, get(reg_a,oz) & (1 << (oz - 1)) ? (uint(oz)) -1 : 0, oz)
#define __UINTPTR_TYPE__ long unsigned int
#define __DARWIN_FD_ISSET(n,p) __darwin_fd_isset((n), (p))
#define _SSIZE_T 
#define __SNBF 0x0002
#define __TVOS_10_0_1 100001
#define FPATAN() ST(1) = f80_from_double(atan2(f80_to_double(ST(1)), f80_to_double(ST(0)))); FPOP
#define __unreachable_ok_push _Pragma("GCC diagnostic push") _Pragma("GCC diagnostic ignored \"-Wunreachable-code\"")
#define __LDBL_MIN_10_EXP__ (-4931)
#define __API_DEPRECATED_WITH_REPLACEMENT_BEGIN(...) 
#define MOVSX(src,dst,zs,zd) set(dst, (uint(sz(zd))) (sint(sz(zs))) get(src,zs),zd)
#define ILL_NOOP 0
#define SIG_SETMASK 3
#define _VA_LIST_T 
#define __SIZEOF_LONG_LONG__ 8
#define IOPOL_THROTTLE 3
#define UINT8_C(v) (v)
#define _STRUCT_X86_AVX_STATE32 struct __darwin_i386_avx_state
#define _GCC_PTRDIFF_T 
#define RLIMIT_STACK 3
#define __enum_closed 
#define PRIO_MAX 20
#define FSUB(src,dst) dst = f80_sub(dst, src)
#define __FLT128_DECIMAL_DIG__ 36
#define BUMP_DI(size) if (!cpu->df) cpu->edi += sz(size)/8; else cpu->edi -= sz(size)/8
#define __GCC_ATOMIC_LLONG_LOCK_FREE 2
#define _PTHREAD_ONCE_T 
#define SIGWINCH 28
#define __TVOS_14_1 140100
#define __TVOS_14_3 140300
#define SA_USERSPACE_MASK (SA_ONSTACK | SA_RESTART | SA_RESETHAND | SA_NOCLDSTOP | SA_NODEFER | SA_NOCLDWAIT | SA_SIGINFO)
#define __enum_open 
#define PTRDIFF_MAX INTMAX_MAX
#define twice_32 64
#define __FLT32_HAS_QUIET_NAN__ 1
#define __FLT_DECIMAL_DIG__ 9
#define __UINT_FAST16_MAX__ 0xffff
#define _PID_T 
#define _WSTATUS(x) (_W_INT(x) & 0177)
#define INT_FAST8_MAX INT8_MAX
#define __POSIX_C_DEPRECATED(ver) ___POSIX_C_DEPRECATED_STARTING_ ##ver
#define _MODE_T 
#define ___int_ptrdiff_t_h 
#define __LDBL_NORM_MAX__ 1.18973149535723176502126385303097021e+4932L
#define NEG(val,z) SETAF(0, val,z); cpu->of = signed_overflow(sub, 0, get(val,z), cpu->res,z); cpu->cf = unsigned_overflow(sub, 0, get(val,z), cpu->res,z); set(val, cpu->res,z); SETRESFLAGS; break;
#define FD_ZERO(p) __DARWIN_FD_ZERO(p)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_0(x) 
#define rdtsc() ({ uint32_t low, high; __asm__ volatile("rdtsc" : "=a" (high), "=d" (low)); ((uint64_t) high) << 32 | low; })
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define _OS__OSBYTEORDER_H 
#define FD_CLR(n,p) __DARWIN_FD_CLR(n, p)
#define RLIMIT_THREAD_CPULIMITS 0x3
#define SIGINT 2
#define set_gs(to,size) cpu->gs = to
#define _MACH_MACHINE__STRUCTS_H_ 
#define SIG_IGN (void (*)(int))1
#define glue3(a,b,c) glue(a, glue(b, c))
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_1(x) x
#define IOPOL_MATERIALIZE_DATALESS_FILES_ON 2
#define _USECONDS_T 
#define INT_LEAST16_MAX INT16_MAX
#define SETN(cond,val) set(val, (cond ? 0 : 1),8)
#define __SSE3__ 1
#define __UINT_FAST8_TYPE__ unsigned char
#define FUCOMI() cpu->zf = f80_eq(ST(0), ST_i); cpu->cf = f80_lt(ST(0), ST_i); cpu->pf = 0; cpu->pf_res = 0
#define SHL(count,val,z) if (get(count,8) % z != 0) { int cnt = get(count,8) % z; cpu->cf = (get(val,z) << (cnt - 1)) >> (z - 1); cpu->of = cpu->cf ^ (get(val,z) >> (z - 1)); set(val, get(val,z) << cnt,z); SETRES(get(val,z),z); ZEROAF; }
#define _U_INT16_T 
#define __P(protos) protos
#define MOVZX(src,dst,zs,zd) set(dst, get(src,zs),zd)
#define IOPOL_TYPE_VFS_ATIME_UPDATES 2
#define FP_PREC_53B 2
#define __IPHONE_8_2 80200
#define __IPHONE_9_0 90000
#define __IPHONE_9_1 90100
#define __IPHONE_9_2 90200
#define __IPHONE_9_3 90300
#define __ATOMIC_ACQ_REL 4
#define __WCHAR_T 
#define __ATOMIC_RELEASE 3
#define B CF
#define E ZF
#define BSF(src,dst,z) cpu->zf = get(src,z) == 0; cpu->zf_res = 0; if (!cpu->zf) set(dst, __builtin_ctz(get(src,z)),z)
#define FPE_FLTUND 3
#define O OF
#define P PF
#define BSR(src,dst,z) cpu->zf = get(src,z) == 0; cpu->zf_res = 0; if (!cpu->zf) set(dst, z - __builtin_clz(get(src,z)),z)
#define SHR(count,val,z) if (get(count,8) % z != 0) { int cnt = get(count,8) % z; cpu->cf = (get(val,z) >> (cnt - 1)) & 1; cpu->of = get(val,z) >> (z - 1); set(val, get(val,z) >> cnt,z); SETRES(get(val,z),z); ZEROAF; }
