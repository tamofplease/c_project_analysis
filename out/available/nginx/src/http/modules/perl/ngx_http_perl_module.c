#define TCP_KEEPCNT 0x102
#define filter_read(a,b,c) Perl_filter_read(aTHX_ a,b,c)
#define LONG_DOUBLE_IS_X86_80_BIT_LITTLE_ENDIAN 3
#define GET_RCV_ELEMENTS(y) (((y) >> 24) & 0xf)
#define task_get_task_access_port(task,port) (task_get_special_port((task), TASK_ACCESS_PORT, (port)))
#define OS_NONNULL11 __attribute__((__nonnull__(11)))
#define _Nullable 
#define I_EXECINFO 
#define _DELETE_OK (1<<12)
#define UNICODE_IS_32_CONTIGUOUS_NONCHARS(uv) UNLIKELY((UV) (uv) >= 0xFDD0 && (UV) (uv) <= 0xFDEF)
#define CXt_WHEN 1
#define sv_vsetpvfn(a,b,c,d,e,f,g) Perl_sv_vsetpvfn(aTHX_ a,b,c,d,e,f,g)
#define NGX_ESCAPE_ARGS 1
#define HAS_VFORK 
#define HAS_SIGNBIT 
#define _JBLEN ((9 * 2) + 3 + 16)
#define ngx_close_file_n "close()"
#define PERL_ARGS_ASSERT_MG_SIZE assert(sv)
#define CALLREG_NUMBUF_LENGTH(rx,sv,paren) RX_ENGINE(rx)->numbered_buff_LENGTH(aTHX_ (rx),(sv),(paren))
#define _UINT64_T 
#define AF_MAX 41
#define PF_RESERVED_36 AF_RESERVED_36
#define _SMP_DB "spwd.db"
#define PERL_ARGS_ASSERT_SV_ONLY_TAINT_GMAGIC assert(sv)
#define ZAPHOD32_WARN2(pat,v0,v1) 
#define ZAPHOD32_WARN3(pat,v0,v1,v2) 
#define ZAPHOD32_WARN4(pat,v0,v1,v2,v3) 
#define ZAPHOD32_WARN5(pat,v0,v1,v2,v3,v4) 
#define DEBUG_Pv(a) 
#define __UINT_LEAST16_MAX__ 0xffff
#define OPf_LIST OPf_WANT_LIST
#define _MACH_VM_SYNC_H_ 
#define DEBUG_p_TEST_ UNLIKELY(PL_debug & DEBUG_p_FLAG)
#define OS_NONNULL15 __attribute__((__nonnull__(15)))
#define CX_DEBUG(cx,action) DEBUG_l( Perl_deb(aTHX_ "CX %ld %s %s (scope %ld,%ld) (save %ld,%ld) at %s:%d\n", (long)cxstack_ix, action, PL_block_type[CxTYPE(cx)], (long)PL_scopestack_ix, (long)(cx->blk_oldscopesp), (long)PL_savestack_ix, (long)(cx->blk_oldsaveix), __FILE__, __LINE__));
#define CvANON_on(cv) (CvFLAGS(cv) |= CVf_ANON)
#define CMSG_NXTHDR(mhdr,cmsg) ((char *)(cmsg) == (char *)0L ? CMSG_FIRSTHDR(mhdr) : ((((unsigned char *)(cmsg) + __DARWIN_ALIGN32((__uint32_t)(cmsg)->cmsg_len) + __DARWIN_ALIGN32(sizeof(struct cmsghdr))) > ((unsigned char *)(mhdr)->msg_control + (mhdr)->msg_controllen)) ? (struct cmsghdr *)0L : (struct cmsghdr *)(void *)((unsigned char *)(cmsg) + __DARWIN_ALIGN32((__uint32_t)(cmsg)->cmsg_len))))
#define runops_standard() Perl_runops_standard(aTHX)
#define perl_call_pv(a,b) call_pv(a,b)
#define OPpLVAL_INTRO 0x80
#define RE_DUP_MAX 255
#define SIOCSIF6LOWPAN _IOW('i', 196, struct ifreq)
#define isIDFIRST_A(c) _generic_isCC_A(c, _CC_IDFIRST)
#define toTITLE(c) toUPPER(c)
#define IN_LINKLOCAL(i) (((u_int32_t)(i) & IN_CLASSB_NET) == IN_LINKLOCALNETNUM)
#define CPUFAMILY_ARM_VORTEX_TEMPEST 0x07d34b9f
#define _SC_NGROUPS_MAX 4
#define NOTE_FORK 0x40000000
#define HAS_ERFC 
#define OutCopFILE(c) CopFILE(c)
#define SAVEt_IV 37
#define my_vsnprintf(buffer,max,...) ({ int len = vsnprintf(buffer, max, __VA_ARGS__); PERL_SNPRINTF_CHECK(len, max, vsnprintf); len; })
#define SAVEt_ITEM 36
#define IN6ADDR_MULTICAST_PREFIX IN6MASK8
#define __SIZEOF_LONG__ 8
#define is_MULTI_CHAR_FOLD_utf8_safe_part3_(s,e) ( ((e)-(s) > 2) ? ( ( ( ((const U8*)s)[0] & 0xDF ) == 'A' ) ? ( ( ( 0xCA == ((const U8*)s)[1] ) && ( 0xBE == ((const U8*)s)[2] ) ) ? 3 : 0 ) : ( ( ((const U8*)s)[0] & 0xDF ) == 'F' ) ? ( ( ( ((const U8*)s)[1] & 0xDF ) == 'F' ) ? ( ( ( ( ((const U8*)s)[2] & 0xDF ) == 'I' ) || ( ( ((const U8*)s)[2] & 0xDF ) == 'L' ) ) ? 3 : 2 ) : ( ( ( ((const U8*)s)[1] & 0xDF ) == 'I' ) || ( ( ((const U8*)s)[1] & 0xDF ) == 'L' ) ) ? 2 : 0 ) : ( ( ((const U8*)s)[0] & 0xDF ) == 'H' ) ? ( ( ( 0xCC == ((const U8*)s)[1] ) && ( 0xB1 == ((const U8*)s)[2] ) ) ? 3 : 0 ) : ( ( ((const U8*)s)[0] & 0xDF ) == 'I' ) ? ( ( ( 0xCC == ((const U8*)s)[1] ) && ( 0x87 == ((const U8*)s)[2] ) ) ? 3 : 0 ) : ( ( ((const U8*)s)[0] & 0xDF ) == 'J' ) ? ( ( ( 0xCC == ((const U8*)s)[1] ) && ( 0x8C == ((const U8*)s)[2] ) ) ? 3 : 0 ) : ( ( ((const U8*)s)[0] & 0xDF ) == 'S' ) ? ( ( inRANGE_helper_(U8, ((const U8*)s)[1], 'S', 'T') || inRANGE_helper_(U8, ((const U8*)s)[1], 's', 't') ) ? 2 : ( ( 0xC5 == ((const U8*)s)[1] ) && ( 0xBF == ((const U8*)s)[2] ) ) ? 3 : 0 ) : ( ( ((const U8*)s)[0] & 0xDF ) == 'T' ) ? ( ( ( 0xCC == ((const U8*)s)[1] ) && ( 0x88 == ((const U8*)s)[2] ) ) ? 3 : 0 ) : ( ( ( ((const U8*)s)[0] & 0xDF ) == 'W' ) || ( ( ((const U8*)s)[0] & 0xDF ) == 'Y' ) ) ? ( ( ( 0xCC == ((const U8*)s)[1] ) && ( 0x8A == ((const U8*)s)[2] ) ) ? 3 : 0 ) : ( 0xC5 == ((const U8*)s)[0] ) ? ( ( ( 0xBF == ((const U8*)s)[1] ) && ( inRANGE_helper_(U8, ((const U8*)s)[2], 'S', 'T') || inRANGE_helper_(U8, ((const U8*)s)[2], 's', 't') ) ) ? 3 : 0 ) : ( ( ( 0xCA == ((const U8*)s)[0] ) && ( 0xBC == ((const U8*)s)[1] ) ) && ( ( ((const U8*)s)[2] & 0xDF ) == 'N' ) ) ? 3 : 0 ): ((e)-(s) > 1) ? ( ( ( ((const U8*)s)[0] & 0xDF ) == 'F' ) ? ( ( ( ( ((const U8*)s)[1] & 0xDF ) == 'F' ) || ( ( ((const U8*)s)[1] & 0xDF ) == 'I' ) || ( ( ((const U8*)s)[1] & 0xDF ) == 'L' ) ) ? 2 : 0 ) : ( ( ( ((const U8*)s)[0] & 0xDF ) == 'S' ) && ( inRANGE_helper_(U8, ((const U8*)s)[1], 'S', 'T') || inRANGE_helper_(U8, ((const U8*)s)[1], 's', 't') ) ) ? 2 : 0 ): 0 )
#define PERL_TSA_GUARDED_BY(x) PERL_TSA__(guarded_by(x))
#define AUDIT_CTLMODE_NORMAL ((unsigned char)1)
#define _PC_MAX_INPUT 3
#define _WATTR_OK (1<<16)
#define aMY_CXT_ aMY_CXT,
#define PERL_ARGS_ASSERT_MY_STRTOD assert(s)
#define SSPOPLONG (PL_savestack[--PL_savestack_ix].any_long)
#define __DARWIN_1050INODE64(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_64_BIT_INO_T)
#define UNICODE_DOT_VERSION 0
#define NI_MAXSERV 32
#define PERL_ARGS_ASSERT_HV_PLACEHOLDERS_SET assert(hv)
#define SvPVutf8_nolen(sv) (SvPOK_utf8_nog(sv) ? SvPVX(sv) : sv_2pvutf8(sv, 0))
#define REENTRANT_PROTO_I_CIISD 15
#define HAS_GETITIMER 
#define PERL_ARGS_ASSERT_OP_LINKLIST assert(o)
#define TCPCI_FLAG_REORDERING_DETECTED 0x00000002
#define HAS_SBRK_PROTO 
#define NGX_LOG_NOTICE 6
#define ACCESSPERMS (S_IRWXU|S_IRWXG|S_IRWXO)
#define PerlLIO_chown(file,owner,grp) chown((file), (owner), (grp))
#define UTF8_DISALLOW_ABOVE_31_BIT UTF8_DISALLOW_PERL_EXTENDED
#define PerlEnv_get_childenv() get_childenv()
#define PERL_ARGS_ASSERT_GET_RE_ARG 
#define CPU_SUBTYPE_ARM64E ((cpu_subtype_t) 2)
#define PERL_MAGIC_tiedscalar 'q'
#define av_count(a) Perl_av_count(aTHX_ a)
#define IP_FAITH 22
#define PRIuPTR "lu"
#define A_SETKMASK 5
#define PCRE2_DFA_SHORTEST 0x00000080u
#define SETp(p,l) STMT_START { sv_setpvn(TARG, (p), (l)); SETTARG; } STMT_END
#define _SC_EXPR_NEST_MAX 14
#define IPPROTO_SEP 33
#define PERL_ARGS_ASSERT_SETDEFOUT assert(gv)
#define HeKEY_hek(he) (he)->hent_hek
#define Uid_t uid_t
#define UTF8_ALLOW_DEFAULT UTF8_ALLOW_ANYUV
#define STAILQ_INIT(head) do { STAILQ_FIRST((head)) = NULL; (head)->stqh_last = &STAILQ_FIRST((head)); } while (0)
#define NL_NMAX 1
#define HAS_MSYNC 
#define av_extend(a,b) Perl_av_extend(aTHX_ a,b)
#define SV_RESETHAND SA_RESETHAND
#define isALPHANUMERIC(c) isALPHANUMERIC_A(c)
#define MAXINTERP 64
#define case_242_SBOX32(hash,state,key) 
#define IPPROTO_NVPII 11
#define PERL_ARGS_ASSERT_PERLIO_CLEARERR 
#define __DARWIN_howmany(x,y) ((((x) % (y)) == 0) ? ((x) / (y)) : (((x) / (y)) + 1))
#define __DARWIN_INODE64(sym) __asm("_" __STRING(sym) __DARWIN_SUF_64_BIT_INO_T)
#define PERL_ARGS_ASSERT_SAVE_VPTR assert(ptr)
#define CLOCK_THREAD_CPUTIME_ID _CLOCK_THREAD_CPUTIME_ID
#define isC9_STRICT_UTF8_CHAR Perl_isC9_STRICT_UTF8_CHAR
#define ngx_file_fs_size(sb) (((sb)->st_blocks * 512 > (sb)->st_size && (sb)->st_blocks * 512 < (sb)->st_size + 8 * (sb)->st_blksize) ? (sb)->st_blocks * 512 : (sb)->st_size)
#define _SC_THREAD_SAFE_FUNCTIONS 91
#define SvREFCNT_inc_simple(sv) SvREFCNT_inc(sv)
#define USE_LOCALE_CTYPE 
#define IOCPARM_LEN(x) (((x) >> 16) & IOCPARM_MASK)
#define _POSIX_TIMER_MAX 32
#define SCHED_FIFO 4
#define TAILQ_INSERT_BEFORE(listelm,elm,field) do { TAILQ_CHECK_PREV(listelm, field); (elm)->field.tqe_prev = (listelm)->field.tqe_prev; TAILQ_NEXT((elm), field) = (listelm); *(listelm)->field.tqe_prev = (elm); (listelm)->field.tqe_prev = &TAILQ_NEXT((elm), field); QMD_TRACE_ELEM(&(elm)->field); QMD_TRACE_ELEM(&listelm->field); } while (0)
#define IPPROTO_IPCOMP 108
#define _MACH_MACHINE_KERN_RETURN_H_ 
#define _PTHREAD_COND_SIG_init 0x3CB0B1BB
#define PERL_ARGS_ASSERT_CLOSEST_COP assert(cop)
#define I16_MAX INT16_MAX
#define HAS_SETPRIORITY 
#define pcre2_substring_list_get PCRE2_SUFFIX(pcre2_substring_list_get_)
#define TIOCPTYGRANT _IO('t', 84)
#define VFS_CTL_OSTATFS 0x00010001
#define UNI_DISPLAY_REGEX (UNI_DISPLAY_ISPRINT|UNI_DISPLAY_BACKSLASH)
#define IOPOL_VFS_STATFS_NO_DATA_VOLUME_DEFAULT 0
#define __SCHAR_WIDTH__ 8
#define _toTITLE_utf8_flags(p,e,s,l,f) _to_utf8_title_flags(p,e,s,l,f)
#define SOCK_RAW 3
#define SvNOK_nogthink(sv) ((SvFLAGS(sv) & (SVf_NOK|SVf_THINKFIRST|SVs_GMG)) == SVf_NOK)
#define CPU_SUBTYPE_X86_64_H ((cpu_subtype_t)8)
#define UNICODE_WARN_SURROGATE 0x0001
#define WCHAR_MAX __WCHAR_MAX__
#define PERL_PV_PRETTY_REGPROP PERL_PV_PRETTY_ELLIPSES|PERL_PV_PRETTY_LTGT|PERL_PV_ESCAPE_RE|PERL_PV_ESCAPE_NONASCII
#define AUDIT_TRIGGER_READ_FILE 3
#define PMf_CODELIST_PRIVATE (1U<<(PMf_BASE_SHIFT+14))
#define _SYS__ENDIAN_H_ 
#define CLEAR_ARGARRAY(ary) STMT_START { AvMAX(ary) += AvARRAY(ary) - AvALLOC(ary); AvARRAY(ary) = AvALLOC(ary); AvFILLp(ary) = -1; } STMT_END
#define LIST_INSERT_HEAD(head,elm,field) do { LIST_CHECK_HEAD((head), field); if ((LIST_NEXT((elm), field) = LIST_FIRST((head))) != NULL) LIST_FIRST((head))->field.le_prev = &LIST_NEXT((elm), field); LIST_FIRST((head)) = (elm); (elm)->field.le_prev = &LIST_FIRST((head)); } while (0)
#define PL_psig_pend (vTHX->Ipsig_pend)
#define DEBUG_T_FLAG 0x00020000
#define PL_vtbl_sigelem PL_magic_vtables[want_vtbl_sigelem]
#define PL_dowarn (vTHX->Idowarn)
#define NGX_HTTP_LINGERING_BUFFER_SIZE 4096
#define save_aptr(a) Perl_save_aptr(aTHX_ a)
#define UTF8_ACCUMULATE(old,new) (__ASSERT_(FITS_IN_8_BITS(new)) ((old) << UTF_ACCUMULATION_SHIFT) | ((NATIVE_UTF8_TO_I8(new)) & UTF_CONTINUATION_MASK))
#define _SC_XBS5_ILP32_OFF32 122
#define NOOP (void)0
#define U8TO32_LE(ptr) (_shifted_octet(U32,(ptr),0, 0)| _shifted_octet(U32,(ptr),1, 8)| _shifted_octet(U32,(ptr),2,16)| _shifted_octet(U32,(ptr),3,24))
#define Strtod my_strtod
#define THREAD_CONVERT_THREAD_STATE_FROM_SELF 2
#define IoDIRP(sv) ((XPVIO*) SvANY(sv))->xio_dirp
#define NET_RT_TRASH 5
#define _MCONTEXT_T 
#define MACH_PORT_TYPE_PORT_OR_DEAD (MACH_PORT_TYPE_PORT_RIGHTS|MACH_PORT_TYPE_DEAD_NAME)
#define __XLOCALE_H_ 
#define HAS_MSG 
#define pcre2_compile_context_free PCRE2_SUFFIX(pcre2_compile_context_free_)
#define ngx_http_upstream_rr_peer_lock(peers,peer) if (peers->shpool) { ngx_rwlock_wlock(&peer->lock); }
#define WARN_SYSCALLS 57
#define sv_setsv_flags(a,b,c) Perl_sv_setsv_flags(aTHX_ a,b,c)
#define SIOCGIFPSRCADDR _IOWR('i', 63, struct ifreq)
#define SIOCGIFFLAGS _IOWR('i', 17, struct ifreq)
#define __improbable(x) (x)
#define L_INCR SEEK_CUR
#define NOT_IN_PAD ((PADOFFSET) -1)
#define _aDEPTH 
#define ATTR_CMN_ERROR 0x20000000
#define SOCK_RDM 4
#define ITIMER_VIRTUAL 1
#define PERLDB_SUBLINE (PL_perldb & PERLDBf_SUBLINE)
#define _STRUCT_MCONTEXT_AVX64_FULL struct __darwin_mcontext_avx64_full
#define NV_INF PL_inf.nv
#define IoTYPE_CLOSED ' '
#define HAS_IOCTL 
#define _PTHREAD_CONDATTR_T 
#define VM_PROT_NO_CHANGE ((vm_prot_t) 0x08)
#define OFFUNI_IS_INVARIANT(c) (((WIDEST_UTYPE)(c)) < UTF_CONTINUATION_MARK)
#define IPV6_CHECKSUM 26
#define EMLINK 31
#define THREAD_SCHED_RR_INFO 11
#define IP_MAX_MEMBERSHIPS 4095
#define parse_stmtseq(a) Perl_parse_stmtseq(aTHX_ a)
#define PERL_ARGS_ASSERT_CK_SELECT assert(o)
#define AUDIT_RECORD_MAGIC 0x828a0f1b
#define PerlProc_abort() abort()
#define eval_pv(a,b) Perl_eval_pv(aTHX_ a,b)
#define PERL_ARGS_ASSERT_CK_LISTIOB assert(o)
#define rvpv_dup(a,b,c) Perl_rvpv_dup(aTHX_ a,b,c)
#define SAVEt_TMPSFLOOR 4
#define P_SSTEP 0
#define SIOCGIFADDR _IOWR('i', 33, struct ifreq)
#define TOPMARK Perl_TOPMARK(aTHX)
#define PCRE2_NEWLINE_CR 1
#define MS_ASYNC 0x0001
#define HAS_SIGSETJMP 
#define SSNEWat(n,t,align) SSNEWa((n)*sizeof(t), align)
#define _U_LONG 
#define HAS_SETPROTOENT 
#define PERL_ARGS_ASSERT_PERLLIO_OPEN3_CLOEXEC assert(file)
#define HAS_NANOSLEEP 
#define __DBL_DENORM_MIN__ ((double)4.94065645841246544176568792868221372e-324L)
#define PerlEnv_ENVgetenv_len(str,l) PerlEnv_getenv_len((str), (l))
#define SvPOK_off(sv) (SvFLAGS(sv) &= ~(SVf_POK|SVp_POK))
#define IPPROTO_ROUTING 43
#define MSG_SEND 0x1000
#define RXf_MATCH_UTF8 (1U<<(RXf_BASE_SHIFT+6))
#define CvXSUBANY(sv) ((XPVCV*)MUTABLE_PTR(SvANY(sv)))->xcv_start_u.xcv_xsubany
#define _EXTEND_NEEDS_GROW(p,n) ((n) < 0 || PL_stack_max - (p) < (n))
#define ngx_string(str) { sizeof(str) - 1, (u_char *) str }
#define MCAST_LEAVE_SOURCE_GROUP 83
#define VM_PROT_ALL (VM_PROT_READ|VM_PROT_WRITE|VM_PROT_EXECUTE)
#define NGX_MAX_INT_T_VALUE 9223372036854775807
#define __FLT32X_DECIMAL_DIG__ 17
#define F_RDLCK 1
#define ATTR_CMN_FNDRINFO 0x00004000
#define EXC_I386_STKFLT 12
#define TIOCSBRK _IO('t', 123)
#define round_page(x) trunc_page((x) + (vm_page_size - 1))
#define PERL_ARGS_ASSERT_DO_SHMIO assert(mark); assert(sp)
#define SS_ADD_DXPTR(p) ((ssp++)->any_dxptr = (p))
#define sv_vcatpvfn(a,b,c,d,e,f,g) Perl_sv_vcatpvfn(aTHX_ a,b,c,d,e,f,g)
#define x86_AVX_STATE_COUNT ((mach_msg_type_number_t) (sizeof(x86_avx_state_t)/sizeof(unsigned int)))
#define case_216_SBOX32(hash,state,key) 
#define CPU_SUBTYPE_PENTIUM_3_M CPU_SUBTYPE_INTEL(8, 1)
#define NeXTBSD4_0 0
#define XORSHIFT96_set(r,x,y,z,t) STMT_START { t = (x ^ ( x << 10 ) ); x = y; y = z; r = z = (z ^ ( z >> 26 ) ) ^ ( t ^ ( t >> 5 ) ); } STMT_END
#define KERN_NOT_SUPPORTED 46
#define SvSMAGICAL(sv) (SvFLAGS(sv) & SVs_SMG)
#define GV_AUTOLOAD 0x100
#define MACH_SEND_NO_BUFFER 0x1000000d
#define SVf_OK (SVf_IOK|SVf_NOK|SVf_POK|SVf_ROK| SVp_IOK|SVp_NOK|SVp_POK|SVpgv_GP)
#define __sfeof(p) (((p)->_flags & __SEOF) != 0)
#define DIR_MNTSTATUS_TRIGGER 0x00000002
#define __enum_closed_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_closed
#define SRCHFS_SKIPINVISIBLE 0x00000020
#define JMPENV_POP STMT_START { DEBUG_l({ int i = -1; JMPENV *p = PL_top_env; while (p) { i++; p = p->je_prev; } Perl_deb(aTHX_ "JUMPENV_POP level=%d at %s:%d\n", i, __FILE__, __LINE__);}) assert(PL_top_env == &cur_env); PL_delaymagic = cur_env.je_old_delaymagic; PL_top_env = cur_env.je_prev; } STMT_END
#define IPV6_2292HOPOPTS 22
#define assert_not_ROK(sv) assert_(!SvROK(sv) || !SvRV(sv))
#define EVFILT_SIGNAL (-6)
#define WARN_ALL 0
#define PERL_ARGS_ASSERT_SVREFCNT_DEC 
#define toLOWER_utf8(p,e,s,l) toLOWER_utf8_safe(p,e,s,l)
#define PCRE2_NO_START_OPTIMIZE 0x00010000u
#define HAS_READDIR 
#define HAS_UNLINKAT 
#define MEMORY_OBJECT_DATA_PURGE 0x4
#define PL_sawampersand (SAWAMPERSAND_LEFT|SAWAMPERSAND_MIDDLE|SAWAMPERSAND_RIGHT)
#define cx_pushformat(a,b,c,d) Perl_cx_pushformat(aTHX_ a,b,c,d)
#define FPS_UE 0x0010
#define EXC_I386_NOEXT 3
#define PERL_ARGS_ASSERT_SAVE_DESTRUCTOR_X 
#define MAXFLOAT 0x1.fffffep+127f
#define _XOPEN_VERSION 600
#define CX_CUR() (&cxstack[cxstack_ix])
#define HAS_GETPROTOBYNAME 
#define EVFILT_TIMER (-7)
#define ___POSIX_C_DEPRECATED_STARTING_199309L 
#define LC_CTYPE_MASK (1 << 1)
#define SCHED_RR 2
#define RX_MATCH_TAINTED(rx_sv) (RX_EXTFLAGS(rx_sv) & RXf_TAINTED_SEEN)
#define TH_USAGE_SCALE 1000
#define _LIMITS_H_ 
#define STATUS_NATIVE_CHILD_SET(n) STMT_START { PL_statusvalue_posix = (n); if (PL_statusvalue_posix == -1) PL_statusvalue = -1; else { PL_statusvalue = (WIFEXITED(PL_statusvalue_posix) ? (WEXITSTATUS(PL_statusvalue_posix) << 8) : 0) | (WIFSIGNALED(PL_statusvalue_posix) ? (WTERMSIG(PL_statusvalue_posix) & 0x7F) : 0) | (WIFSIGNALED(PL_statusvalue_posix) && WCOREDUMP(PL_statusvalue_posix) ? 0x80 : 0); } } STMT_END
#define VM_BEHAVIOR_SEQUENTIAL ((vm_behavior_t) 2)
#define _is_uni_perl_idcont(a) Perl__is_uni_perl_idcont(aTHX_ a)
#define PERL_ARGS_ASSERT_SV_UTF8_DOWNGRADE_NOMG 
#define PERL_ARGS_ASSERT_SVTRUE 
#define SSPUSHBOOL(p) (PL_savestack[PL_savestack_ix++].any_bool = (p))
#define PERL_ARGS_ASSERT_MAGIC_FREEOVRLD assert(sv); assert(mg)
#define _CS_POSIX_V6_LP64_OFF64_LIBS 10
#define sv_free(a) Perl_sv_free(aTHX_ a)
#define __FLT_RADIX__ 2
#define PERL_ARGS_ASSERT_DIE_UNWIND assert(msv)
#define case_91_SBOX32(hash,state,key) 
#define pad_alloc(a,b) Perl_pad_alloc(aTHX_ a,b)
#define MAP_32BIT 0x8000
#define toLOWER_A(c) toLOWER(c)
#define GvIMPORTED_CV_on(gv) (GvFLAGS(gv) |= GVf_IMPORTED_CV)
#define __ILP32_OFF32 (-1)
#define SIOCGIFMEDIA _IOWR('i', 56, struct ifmediareq)
#define CRF_NOMEMBERD 0x00000001
#define NGX_HTTP_UPSTREAM_IGN_EXPIRES 0x00000008
#define PERL_ARGS_ASSERT_PV_ESCAPE assert(str)
#define PTHREAD_MUTEX_POLICY_FIRSTFIT_NP 3
#define _CC_DIGIT 1
#define KERN_DUMPDEV 31
#define __DARWIN_SUF_1050 "$1050"
#define _PTHREAD_FIRSTFIT_MUTEX_SIG_init 0x32AAABA3
#define is_utf8_valid_partial_char_flags Perl_is_utf8_valid_partial_char_flags
#define HOST_RESOURCE_SIZES 4
#define EQUIV_CLASS_MAX 2
#define IPPROTO_XNET 15
#define gv_add_by_type(a,b) Perl_gv_add_by_type(aTHX_ a,b)
#define VM_STATISTICS_TRUNCATE_TO_32_BIT(value) ((uint32_t)(((value) > UINT32_MAX ) ? UINT32_MAX : (value)))
#define hv_ksplit(a,b) Perl_hv_ksplit(aTHX_ a,b)
#define PL_sv_immortals (vTHX->Isv_immortals)
#define CXp_FOR_PAD 0x80
#define VOL_CAP_INT_EXTENDED_SECURITY 0x00000400
#define SIGPROF 27
#define EXEC_ARGV_CAST(x) (char **)x
#define HeSVKEY_force(he) (HeKEY(he) ? ((HeKLEN(he) == HEf_SVKEY) ? HeKEY_sv(he) : newSVpvn_flags(HeKEY(he), HeKLEN(he), SVs_TEMP | ( HeKUTF8(he) ? SVf_UTF8 : 0 ))) : &PL_sv_undef)
#define NGX_HTTP_SERVER_TOKENS_BUILD 2
#define IPV6_MAX_SOCK_SRC_FILTER 128
#define dTOPss SV *sv = TOPs
#define NGX_LOG_DEBUG_EVENT 0x080
#define OS_WARN_RESULT __attribute__((__warn_unused_result__))
#define SAVECOPFILE(c) SAVEPPTR(CopFILE(c))
#define bool _Bool
#define ngx_http_conf_get_module_main_conf(cf,module) ((ngx_http_conf_ctx_t *) cf->ctx)->main_conf[module.ctx_index]
#define _SC_CPUTIME 68
#define is_MULTI_CHAR_FOLD_utf8_safe_part0_(s,e) ( ( ( ((const U8*)s)[1] & 0xDF ) == 'F' ) ? ( ( ( ( ((const U8*)s)[2] & 0xDF ) == 'I' ) || ( ( ((const U8*)s)[2] & 0xDF ) == 'L' ) ) ? 3 : 2 ) : ( ( ( ((const U8*)s)[1] & 0xDF ) == 'I' ) || ( ( ((const U8*)s)[1] & 0xDF ) == 'L' ) ) ? 2 : 0 )
#define __UINT_FAST64_MAX__ 0xffffffffffffffffULL
#define KERN_UNOPENEVT_PROC 2
#define OP_GIMME(op,dfl) (((op)->op_flags & OPf_WANT) ? ((op)->op_flags & OPf_WANT) : dfl)
#define VOL_CAP_FMT_OPENDENYMODES 0x00001000
#define ATTR_VOL_FSTYPE 0x00000001
#define ASCIIish 
#define SCOPE_SAVES_SIGNAL_MASK 0
#define A_GETSINFO_ADDR 32
#define _PERL_HASH_WITH_STATE(state,str,len) (LIKELY(len <= SBOX32_MAX_LEN) ? sbox32_hash_with_state((state + __PERL_HASH_STATE_BYTES),(U8*)(str),(len)) : __PERL_HASH_WITH_STATE((state),(str),(len)))
#define PERL_ARGS_ASSERT_REG_NUMBERED_BUFF_STORE assert(rx)
#define NGX_HTTP_PERL_SSI_SUB 0
#define ENOTTY 25
#define KERN_PROC 14
#define KERN_PROF 16
#define case_49_SBOX32(hash,state,key) 
#define ngx_unlock(lock) *(lock) = 0
#define NGX_HTTP_HEAD 0x00000004
#define _SC_ADVISORY_INFO 65
#define VM_USRSTACK64 ((user_addr_t) 0x00007FFEEFC00000ULL)
#define DOUBLE_LITTLE_ENDIAN 
#define CIRCLEQ_FIRST(head) ((head)->cqh_first)
#define _NGX_SOCKET_H_INCLUDED_ 
#define NGX_HAVE_IPV6_RECVPKTINFO 1
#define __cold __attribute__((__cold__))
#define HOST_LOAD_INFO 1
#define UVxf "lx"
#define S_IRGRP 0000040
#define PERL_FPU_POST_EXEC rsignal_restore(SIGFPE, &xfpe); }
#define ngx_setaffinity(cpu_affinity,log) 
#define _is_uni_perl_idstart(a) Perl__is_uni_perl_idstart(aTHX_ a)
#define OP_CHECK_MUTEX_UNLOCK MUTEX_UNLOCK(&PL_check_mutex)
#define EXC_I386_DIVERR 0
#define CxTRYBLOCK(c) CxEVALBLOCK(c)
#define INT_PAT_MODS STD_PAT_MODS KEEPCOPY_PAT_MODS
#define ngx_path_separator(c) ((c) == '/')
#define _XLOCALE__INTTYPES_H_ 
#define __PERL_HASH_FUNC "SIPHASH_1_3"
#define case_40_SBOX32(hash,state,key) 
#define P_ADOPTPERSONA 0x04000000
#define LIST_EMPTY(head) ((head)->lh_first == NULL)
#define share_hek_hek(hek) (++(((struct shared_he *)(((char *)hek) - STRUCT_OFFSET(struct shared_he, shared_he_hek))) ->shared_he_he.he_valu.hent_refcount), hek)
#define UINT32_C(v) (v ## U)
#define NGX_PROCESS_MASTER 1
#define sv_setpvf_mg_nocontext Perl_sv_setpvf_mg_nocontext
#define FP_RND_NEAR 0
#define _CS_DARWIN_USER_DIR 65536
#define UTF8_IS_START_base(c) (__ASSERT_(FITS_IN_8_BITS(c)) (NATIVE_UTF8_TO_I8(c) >= UTF_MIN_START_BYTE))
#define UTIME_NOW -1
#define NGX_PEER_FAILED 4
#define OS_CONCAT(x,y) __OS_CONCAT(x, y)
#define Nullhek Null(HEK*)
#define lex_stuff_pvn(a,b,c) Perl_lex_stuff_pvn(aTHX_ a,b,c)
#define lex_stuff_pvs(pv,flags) Perl_lex_stuff_pvn(aTHX_ STR_WITH_LEN(pv), flags)
#define PL_utf8_foldclosures (vTHX->Iutf8_foldclosures)
#define __FLT32_HAS_DENORM__ 1
#define RX_ZERO_LEN(rx_sv) (RXp_ZERO_LEN(ReANY(rx_sv)))
#define PERLDB_INTER (PL_perldb & PERLDBf_INTER)
#define IPC_M 010000
#define S_ISGID 0002000
#define S_IFBLK 0060000
#define CMP_MACH_TIMESPEC(t1,t2) ((t1)->tv_sec > (t2)->tv_sec ? (long) +NSEC_PER_SEC : ((t1)->tv_sec < (t2)->tv_sec ? (long) -NSEC_PER_SEC : (t1)->tv_nsec - (t2)->tv_nsec))
#define PERL_ARGS_ASSERT_SAVE_PUSHPTRPTR 
#define SAVEt_I32 34
#define CIRCLEQ_CHECK_NEXT(head,elm,field) 
#define NGX_RESOLVER_MAX_RECURSION 50
#define Nullch Null(char*)
#define PCRE2_ERROR_VERB_NAME_TOO_LONG 176
#define PERL_PADSEQ_INTRO U32_MAX
#define sync_locale Perl_sync_locale
#define ngx_get_conf(conf_ctx,module) conf_ctx[module.index]
#define NV_NAN_PAYLOAD_PERM_IEEE_754_128_LE NV_NAN_PAYLOAD_PERM_0_TO_7, 0x8, 0x9, 0xa, 0xb, 0xc, 0xd, 0xFF, 0xFF
#define PERL_ARGS_ASSERT_SCAN_BIN assert(start); assert(retlen)
#define PERL_ARGS_ASSERT_NEWLOOPEX assert(label)
#define DEBUG_r_TEST (0)
#define SV_SAVED_COPY SV *saved_copy;
#define sv_2io(a) Perl_sv_2io(aTHX_ a)
#define PERL_ARGS_ASSERT_ATFORK_UNLOCK 
#define _KAUTH_CRED_T 
#define NGX_DIRECT_CONF 0x00010000
#define sv_2iv(sv) sv_2iv_flags(sv, SV_GMAGIC)
#define PERL_ARGS_ASSERT_SVAMAGIC_OFF assert(sv)
#define REENTRANT_PROTO_S_CBI 53
#define PERL_ARGS_ASSERT_START_SUBPARSE 
#define IOf_ARGV 1
#define PERL_ARGS_ASSERT_PREGFREE 
#define QUADKIND 2
#define THREAD_STATE_FLAVOR_LIST_NEW 128
#define PERL_ARGS_ASSERT_REFCOUNTED_HE_NEW_PVN assert(keypv)
#define _LIMITS_H___ 
#define MSG_WAITALL 0x40
#define DST_AUST 2
#define PL_efloatsize (vTHX->Iefloatsize)
#define CvAUTOLOAD(cv) (CvFLAGS(cv) & CVf_AUTOLOAD)
#define PERL_ARGS_ASSERT_TAINT_PROPER assert(s)
#define __FLT32_MAX_10_EXP__ 38
#define TH_FLAGS_GLOBAL_FORCED_IDLE 0x4
#define _POSIX_V7_LP64_OFF64 __LP64_OFF64
#define ATTR_FILE_ALLOCSIZE 0x00000004
#define CPU_TYPE_MC88000 ((cpu_type_t) 13)
#define PRIX16 "hX"
#define HOST_MAX_SPECIAL_PORT HOST_IOCOMPRESSIONSTATS_PORT
#define PERL_MAGIC_overload_table 'c'
#define VFS_MAXTYPENUM 1
#define EPROC_SLEADER 0x02
#define VM_FLAGS_OVERWRITE 0x4000
#define CPU_SUBTYPE_XEON CPU_SUBTYPE_INTEL(12, 0)
#define sv_collxfrm_flags(a,b,c) Perl_sv_collxfrm_flags(aTHX_ a,b,c)
#define PERL_ARGS_ASSERT_DOWANTARRAY 
#define CALLREG_PACKAGE(rx) RX_ENGINE(rx)->qr_package(aTHX_ (rx))
#define PERL_ARGS_ASSERT_TO_UNI_TITLE assert(p); assert(lenp)
#define __TVOS_12_2 120200
#define PERL_MAGIC_defelem 'y'
#define _ASSERT_H_ 
#define PCRE2_ERROR_NO_SURROGATES_IN_UTF16 191
#define ENOLINK 97
#define _generic_LC_non_invlist_utf8_safe(classnum,above_latin1,p,e) _generic_LC_utf8_safe(classnum, p, e, (UNLIKELY((e) - (p) < UTF8SKIP(p)) ? (_force_out_malformed_utf8_message( (U8 *) (p), (U8 *) (e), 0, 1), 0) : above_latin1(p)))
#define NGX_HTTP_UPSTREAM_FT_BUSY_LOCK 0x00001000
#define _CS_PATH 1
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffULL
#define PERL_ARGS_ASSERT_IS_SAFE_SYSCALL assert(pv); assert(what); assert(op_name)
#define Nullfp Null(PerlIO*)
#define __INT_LEAST8_MAX__ 0x7f
#define utf8_hop_safe Perl_utf8_hop_safe
#define _ERRNO_T 
#define IPC_R 000400
#define SAVEt_STRLEN 43
#define HvAMAGIC(hv) (SvFLAGS(hv) & SVf_AMAGIC)
#define case_92_SBOX32(hash,state,key) 
#define IN_CLASSB_NSHIFT 16
#define PERL_REVISION 5
#define LOC_SED "/usr/bin/sed"
#define sv_setuv_mg(a,b) Perl_sv_setuv_mg(aTHX_ a,b)
#define NFDBITS __DARWIN_NFDBITS
#define vtohs(x) ((x)&0xFFFF)
#define PERL_PADNAME_MINIMAL 
#define withinCOUNT_KNOWN_VALID_(c,l,n) (((WIDEST_UTYPE) (((c)) - ((l) | 0))) <= (((WIDEST_UTYPE) ((n) | 0))))
#define SCNd8 __PRI_8_LENGTH_MODIFIER__ "d"
#define LONG_DOUBLE_IS_DOUBLEDOUBLE_128_BIT_BIG_ENDIAN LONG_DOUBLE_IS_DOUBLEDOUBLE_128_BIT_BE_BE
#define TIOCSETD _IOW('t', 27, int)
#define sv_pvn(a,b) Perl_sv_pvn(aTHX_ a,b)
#define PERL_MAGIC_checkcall ']'
#define SvGROW_mutable(sv,len) (SvLEN(sv) < (len) ? sv_grow(sv,len) : SvPVX_mutable(sv))
#define FP_SUPERNORMAL 6
#define Nullhe Null(HE*)
#define VM_MEMORY_IOACCELERATOR 100
#define SAVEt_APTR 48
#define IPPROTO_IGRP 88
#define ngx_http_cycle_get_module_main_conf(cycle,module) (cycle->conf_ctx[ngx_http_module.index] ? ((ngx_http_conf_ctx_t *) cycle->conf_ctx[ngx_http_module.index]) ->main_conf[module.ctx_index]: NULL)
#define TCPOPT_TIMESTAMP 8
#define PERL_ARGS_ASSERT_SV_CLEAR assert(orig_sv)
#define OPpTRANS_ALL (OPpTRANS_USE_SVOP|OPpTRANS_CAN_FORCE_UTF8|OPpTRANS_IDENTICAL|OPpTRANS_SQUASH|OPpTRANS_COMPLEMENT|OPpTRANS_GROWS|OPpTRANS_DELETE)
#define case_79_SBOX32(hash,state,key) 
#define PERL_ARGS_ASSERT_PV_DISPLAY assert(dsv); assert(pv)
#define ATTR_DIR_LINKCOUNT 0x00000001
#define pcre2_set_callout PCRE2_SUFFIX(pcre2_set_callout_)
#define ngx_timezone(isdst) (- (isdst ? timezone + 3600 : timezone) / 60)
#define pcre2_set_substitute_callout PCRE2_SUFFIX(pcre2_set_substitute_callout_)
#define NGX_HTTP_SEE_OTHER 303
#define PERL_ARGS_ASSERT_DUMP_PACKSUBS assert(stash)
#define DT_CHR 2
#define TASK_DYLD_ALL_IMAGE_INFO_64 1
#define PERL_OBJECT_THIS_ 
#define PERL_MAGIC_vstring 'V'
#define ENODATA 96
#define PerlSock_socket(a,t,p) socket(a, t, p)
#define KERN_MEMORY_DATA_MOVED 24
#define NGX_CONF_BLOCK 0x00000100
#define VOL_CAP_INT_USERACCESS 0x00000800
#define isALPHA_A(c) inRANGE((~('A' ^ 'a') & (c)), 'A', 'Z')
#define TIOCIXOFF _IO('t', 128)
#define A_GETCLASS 22
#define MPO_INSERT_SEND_RIGHT 0x10
#define isGRAPH_L1(c) _generic_isCC(c, _CC_GRAPH)
#define isSTRICT_UTF8_CHAR Perl_isSTRICT_UTF8_CHAR
#define PCRE2_ERROR_INTERNAL_UNKNOWN_NEWLINE 156
#define STAILQ_FOREACH_SAFE(var,head,field,tvar) for ((var) = STAILQ_FIRST((head)); (var) && ((tvar) = STAILQ_NEXT((var), field), 1); (var) = (tvar))
#define to_uni_lower(a,b,c) Perl_to_uni_lower(aTHX_ a,b,c)
#define THROUGHPUT_QOS_LAUNCH_DEFAULT_TIER THROUGHPUT_QOS_TIER_3
#define isGRAPH_LC(c) _generic_LC(c, _CC_GRAPH, isgraph)
#define WARN_UNPACK 42
#define ngx_realpath_n "realpath()"
#define unpack_str(a,b,c,d,e,f,g,h) Perl_unpack_str(aTHX_ a,b,c,d,e,f,g,h)
#define SCNd16 "hd"
#define MAP_MEM_INNERWBACK 5
#define PL_HASH_RAND_BITS_ENABLED PL_hash_rand_bits_enabled
#define NGX_LINEFEED_SIZE 1
#define MACH_PORT_STATUS_FLAG_TEMPOWNER 0x01
#define KERN_INVALID_ADDRESS 1
#define PCRE2_SUBSTITUTE_LITERAL 0x00008000u
#define SAVEt_COMPILE_WARNINGS 6
#define PERL_ARGS_ASSERT_SAVE_OP 
#define vload_module(a,b,c,d) Perl_vload_module(aTHX_ a,b,c,d)
#define __UINT_LEAST8_MAX__ 0xff
#define PERL_ARGS_ASSERT_NEWSVPV_SHARE 
#define KEV_DL_LOW_POWER_MODE_CHANGED 30
#define EXC_I386_EXTOVR 4
#define cv_get_call_checker(a,b,c) Perl_cv_get_call_checker(aTHX_ a,b,c)
#define toUPPER_uni(c,s,l) toUPPER_uvchr(c,s,l)
#define IOC_DIRMASK (__uint32_t)0xe0000000
#define NETSVC_MRKNG_LVL_L2 1
#define GvIN_PAD_on(gv) NOOP
#define __MAC_OS_X_VERSION_MIN_REQUIRED __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__
#define case_5_SBOX32(hash,state,key) _SBOX32_CASE(5,hash,state,key)
#define _SC_SYMLOOP_MAX 120
#define case_207_SBOX32(hash,state,key) 
#define __UINTMAX_TYPE__ long unsigned int
#define _CS_XBS5_LP64_OFF64_CFLAGS 28
#define host_set_coalition_port(host,port) (host_set_special_port((host), HOST_COALITION_PORT, (port)))
#define PERLSI_WARNHOOK 7
#define UVCHR_SKIP(uv) ( UVCHR_IS_INVARIANT(uv) ? 1 : __BASE_UNI_SKIP(uv))
#define case_250_SBOX32(hash,state,key) 
#define IN_LOCALE_COMPILETIME cBOOL(PL_hints & HINT_LOCALE)
#define SCNd32 "d"
#define SCNi8 __PRI_8_LENGTH_MODIFIER__ "i"
#define sprintf(str,...) __builtin___sprintf_chk (str, 0, __darwin_obsz(str), __VA_ARGS__)
#define PERL_REENTR_API 0
#define PCRE2_ERROR_INTERNAL (-44)
#define PRIO_USER 2
#define thread_get_kernel_port(thread,port) (thread_get_special_port((thread), THREAD_KERNEL_PORT, (port)))
#define OP_IS_SOCKET(op) ((op) >= OP_SEND && (op) <= OP_GETPEERNAME)
#define task_set_bootstrap_port(task,port) (task_set_special_port((task), TASK_BOOTSTRAP_PORT, (port)))
#define KERN_NOT_RECEIVER 7
#define SS_ADD_LONG(i) ((ssp++)->any_long = (long)(i))
#define newGVREF(a,b) Perl_newGVREF(aTHX_ a,b)
#define IOPOL_APPLICATION IOPOL_STANDARD
#define SIOCSIFBRDADDR _IOW('i', 19, struct ifreq)
#define NV_LITTLE_ENDIAN 
#define X86_DEBUG_STATE64_COUNT x86_DEBUG_STATE64_COUNT
#define ngx_tm_gmtoff tm_gmtoff
#define _UUID_UUID_H 
#define case_182_SBOX32(hash,state,key) 
#define isPUNCT_uvchr(c) _generic_invlist_uvchr(_CC_PUNCT, c)
#define AI_ADDRCONFIG 0x00000400
#define perl_pthread_mutex_lock(m) pthread_mutex_lock(m)
#define NGX_ENOSPC ENOSPC
#define THREAD_READ_PORT 3
#define PL_hash_seed ((U8 *)PL_hash_seed_w)
#define HAS_GETNET_PROTOS 
#define NGX_WRITE_SHUTDOWN SHUT_WR
#define TIOCDSIMICROCODE _IO('t', 85)
#define IPV6_BOUND_IF 125
#define USER_MAXID 21
#define GvIN_PAD(gv) 0
#define MACH_RCV_INTERRUPT 0x00000400
#define DOUBLE_HAS_SUBNORMALS 
#define __bool_true_false_are_defined 1
#define OPpCOREARGS_PUSHMARK 0x80
#define CRF_MAC_ENFORCE 0x00000002
#define PCRE2_ERROR_DFA_UITEM (-42)
#define PERL_API_VERSION_STRING STRINGIFY(PERL_API_REVISION) "." STRINGIFY(PERL_API_VERSION) "." STRINGIFY(PERL_API_SUBVERSION)
#define mg_free_type(a,b) Perl_mg_free_type(aTHX_ a,b)
#define PERL_ARGS_ASSERT_MY_MKOSTEMP assert(templte)
#define Nullop ((OP*)NULL)
#define HAS_SIGINFO_SI_ERRNO 
#define PL_maxo MAXO
#define SCNd64 __SCN_64_LENGTH_MODIFIER__ "d"
#define LDBL_MANT_DIG __LDBL_MANT_DIG__
#define LATIN_SMALL_LIGATURE_ST 0xFB06
#define sv_2uv(sv) sv_2uv_flags(sv, SV_GMAGIC)
#define _NGX_CONFIG_H_INCLUDED_ 
#define SIGUSR2 31
#define DEBUG_f_FLAG 0x00000100
#define cop_hints_fetch_pvn(cop,keypv,keylen,hash,flags) cophh_fetch_pvn(CopHINTHASH_get(cop), keypv, keylen, hash, flags)
#define cop_hints_fetch_pvs(cop,key,flags) cophh_fetch_pvs(CopHINTHASH_get(cop), key, flags)
#define HvSHAREKEYS_off(hv) (SvFLAGS(hv) &= ~SVphv_SHAREKEYS)
#define SvRMAGICAL_on(sv) (SvFLAGS(sv) |= SVs_RMG)
#define JMPENV_JUMP(v) STMT_START { DEBUG_l({ int i = -1; JMPENV *p = PL_top_env; while (p) { i++; p = p->je_prev; } Perl_deb(aTHX_ "JUMPENV_JUMP(%d) level=%d at %s:%d\n", (int)v, i, __FILE__, __LINE__);}) if (PL_top_env->je_prev) PerlProc_longjmp(PL_top_env->je_buf, (v)); if ((v) == 2) PerlProc_exit(STATUS_EXIT); PerlIO_printf(PerlIO_stderr(), "panic: top_env, v=%d\n", (int)v); PerlProc_exit(1); } STMT_END
#define isLOWER_uni(c) isLOWER_uvchr(c)
#define SvPOKp_on(sv) (assert_not_ROK(sv) assert_not_glob(sv) SvFLAGS(sv) |= SVp_POK)
#define HAS_DUPLOCALE 
#define is_QUOTEMETA_high(s) ( ( 0xCD == ((const U8*)s)[0] ) ? ( ( 0x8F == ((const U8*)s)[1] ) ? 2 : 0 ) : ( 0xD8 == ((const U8*)s)[0] ) ? ( ( 0x9C == ((const U8*)s)[1] ) ? 2 : 0 ) : ( 0xE1 == ((const U8*)s)[0] ) ? ( ( 0x85 == ((const U8*)s)[1] ) ? ( ( inRANGE_helper_(U8, ((const U8*)s)[2], 0x9F, 0xA0) ) ? 3 : 0 ) : ( 0x9A == ((const U8*)s)[1] ) ? ( ( 0x80 == ((const U8*)s)[2] ) ? 3 : 0 ) : ( 0x9E == ((const U8*)s)[1] ) ? ( ( inRANGE_helper_(U8, ((const U8*)s)[2], 0xB4, 0xB5) ) ? 3 : 0 ) : ( ( 0xA0 == ((const U8*)s)[1] ) && ( inRANGE_helper_(U8, ((const U8*)s)[2], 0x8B, 0x8E) ) ) ? 3 : 0 ): ( 0xE2 == ((const U8*)s)[0] ) ? ( ( 0x80 == ((const U8*)s)[1] ) ? ( ( inRANGE_helper_(U8, ((const U8*)s)[2], 0x80, 0xBE) ) ? 3 : 0 ) : ( 0x81 == ((const U8*)s)[1] ) ? ( ( inRANGE_helper_(U8, ((const U8*)s)[2], 0x81, 0x93) || inRANGE_helper_(U8, ((const U8*)s)[2], 0x95, 0xAF) ) ? 3 : 0 ) : ( 0x86 == ((const U8*)s)[1] ) ? ( ( inRANGE_helper_(U8, ((const U8*)s)[2], 0x90, 0xBF) ) ? 3 : 0 ) : ( inRANGE_helper_(U8, ((const U8*)s)[1], 0x87, 0x90) || inRANGE_helper_(U8, ((const U8*)s)[1], 0x94, 0x9C) || inRANGE_helper_(U8, ((const U8*)s)[1], 0x9F, 0xAF) || inRANGE_helper_(U8, ((const U8*)s)[1], 0xB8, 0xB9) ) ? 3 : ( 0x91 == ((const U8*)s)[1] ) ? ( ( inRANGE_helper_(U8, ((const U8*)s)[2], 0x80, 0x9F) ) ? 3 : 0 ) : ( 0x9D == ((const U8*)s)[1] ) ? ( ( inRANGE_helper_(U8, ((const U8*)s)[2], 0x80, 0xB5) ) ? 3 : 0 ) : ( ( 0x9E == ((const U8*)s)[1] ) && ( inRANGE_helper_(U8, ((const U8*)s)[2], 0x94, 0xBF) ) ) ? 3 : 0 ): ( 0xE3 == ((const U8*)s)[0] ) ? ( ( 0x80 == ((const U8*)s)[1] ) ? ( ( inRANGE_helper_(U8, ((const U8*)s)[2], 0x80, 0x83) || inRANGE_helper_(U8, ((const U8*)s)[2], 0x88, 0xA0) || 0xB0 == ((const U8*)s)[2] ) ? 3 : 0 ) : ( ( 0x85 == ((const U8*)s)[1] ) && ( 0xA4 == ((const U8*)s)[2] ) ) ? 3 : 0 ): ( 0xEF == ((const U8*)s)[0] ) ? ( ( 0xB4 == ((const U8*)s)[1] ) ? ( ( inRANGE_helper_(U8, ((const U8*)s)[2], 0xBE, 0xBF) ) ? 3 : 0 ) : ( 0xB8 == ((const U8*)s)[1] ) ? ( ( inRANGE_helper_(U8, ((const U8*)s)[2], 0x80, 0x8F) ) ? 3 : 0 ) : ( 0xB9 == ((const U8*)s)[1] ) ? ( ( inRANGE_helper_(U8, ((const U8*)s)[2], 0x85, 0x86) ) ? 3 : 0 ) : ( 0xBB == ((const U8*)s)[1] ) ? ( ( 0xBF == ((const U8*)s)[2] ) ? 3 : 0 ) : ( 0xBE == ((const U8*)s)[1] ) ? ( ( 0xA0 == ((const U8*)s)[2] ) ? 3 : 0 ) : ( ( 0xBF == ((const U8*)s)[1] ) && ( inRANGE_helper_(U8, ((const U8*)s)[2], 0xB0, 0xB8) ) ) ? 3 : 0 ): ( 0xF0 == ((const U8*)s)[0] ) ? ( ( 0x9B == ((const U8*)s)[1] ) ? ( ( ( 0xB2 == ((const U8*)s)[2] ) && ( inRANGE_helper_(U8, ((const U8*)s)[3], 0xA0, 0xA3) ) ) ? 4 : 0 ) : ( ( ( 0x9D == ((const U8*)s)[1] ) && ( 0x85 == ((const U8*)s)[2] ) ) && ( inRANGE_helper_(U8, ((const U8*)s)[3], 0xB3, 0xBA) ) ) ? 4 : 0 ): ( ( 0xF3 == ((const U8*)s)[0] ) && ( 0xA0 == ((const U8*)s)[1] ) ) ? 4 : 0 )
#define cx_dup(a,b,c,d) Perl_cx_dup(aTHX_ a,b,c,d)
#define OP_REFCNT_LOCK op_refcnt_lock()
#define dump_sub(a) Perl_dump_sub(aTHX_ a)
#define case_195_SBOX32(hash,state,key) 
#define __FLT128_MIN_EXP__ (-16381)
#define HAS_BOOL 1
#define PERL_ARGS_ASSERT_REGDUMP assert(r)
#define cophh_copy(cophh) Perl_refcounted_he_inc(aTHX_ cophh)
#define PL_beginav_save (vTHX->Ibeginav_save)
#define VM_MEMORY_APPLICATION_SPECIFIC_16 255
#define PerlMemParse_free_lock() 
#define SvPOK_utf8_nog(sv) ((SvFLAGS(sv) & (SVf_POK|SVf_UTF8|SVs_GMG)) == (SVf_POK|SVf_UTF8))
#define PERL_ARGS_ASSERT_HV_PLACEHOLDERS_P assert(hv)
#define is_MULTI_CHAR_FOLD_utf8_safe_part1_(s,e) ( ( ( ((const U8*)s)[0] & 0xDF ) == 'H' ) ? ( ( ( 0xCC == ((const U8*)s)[1] ) && ( 0xB1 == ((const U8*)s)[2] ) ) ? 3 : 0 ) : ( ( ((const U8*)s)[0] & 0xDF ) == 'I' ) ? ( ( ( 0xCC == ((const U8*)s)[1] ) && ( 0x87 == ((const U8*)s)[2] ) ) ? 3 : 0 ) : ( ( ((const U8*)s)[0] & 0xDF ) == 'J' ) ? ( ( ( 0xCC == ((const U8*)s)[1] ) && ( 0x8C == ((const U8*)s)[2] ) ) ? 3 : 0 ) : ( ( ((const U8*)s)[0] & 0xDF ) == 'S' ) ? ( ( inRANGE_helper_(U8, ((const U8*)s)[1], 'S', 'T') || inRANGE_helper_(U8, ((const U8*)s)[1], 's', 't') ) ? 2 : ( ( 0xC5 == ((const U8*)s)[1] ) && ( 0xBF == ((const U8*)s)[2] ) ) ? 3 : 0 ) : ( ( ((const U8*)s)[0] & 0xDF ) == 'T' ) ? ( ( ( 0xCC == ((const U8*)s)[1] ) && ( 0x88 == ((const U8*)s)[2] ) ) ? 3 : 0 ) : ( ( ( ((const U8*)s)[0] & 0xDF ) == 'W' ) || ( ( ((const U8*)s)[0] & 0xDF ) == 'Y' ) ) ? ( ( ( 0xCC == ((const U8*)s)[1] ) && ( 0x8A == ((const U8*)s)[2] ) ) ? 3 : 0 ) : ( 0xC5 == ((const U8*)s)[0] ) ? ( ( 0xBF == ((const U8*)s)[1] ) ? ( ( inRANGE_helper_(U8, ((const U8*)s)[2], 'S', 'T') || inRANGE_helper_(U8, ((const U8*)s)[2], 's', 't') ) ? 3 : ( ( 0xC5 == ((const U8*)s)[2] ) && ( 0xBF == ((const U8*)s)[3] ) ) ? 4 : 0 ) : 0 ) : ( 0xCA == ((const U8*)s)[0] ) ? ( ( ( 0xBC == ((const U8*)s)[1] ) && ( ( ((const U8*)s)[2] & 0xDF ) == 'N' ) ) ? 3 : 0 ) : ( 0xCE == ((const U8*)s)[0] ) ? ( ( ( ((const U8*)s)[1] & 0xFD ) == 0xAC ) ? ( ( ( 0xCE == ((const U8*)s)[2] ) && ( 0xB9 == ((const U8*)s)[3] ) ) ? 4 : 0 ) : ( 0xB1 == ((const U8*)s)[1] || 0xB7 == ((const U8*)s)[1] ) ? ( ( 0xCD == ((const U8*)s)[2] ) ? ( ( 0x82 == ((const U8*)s)[3] ) ? ( ( ( 0xCE == ((const U8*)s)[4] ) && ( 0xB9 == ((const U8*)s)[5] ) ) ? 6 : 4 ) : 0 ) : ( ( 0xCE == ((const U8*)s)[2] ) && ( 0xB9 == ((const U8*)s)[3] ) ) ? 4 : 0 ) : ( 0xB9 == ((const U8*)s)[1] ) ? ( ( 0xCC == ((const U8*)s)[2] ) ? ( ( 0x88 == ((const U8*)s)[3] ) ? ( ( 0xCC == ((const U8*)s)[4] ) ? ( ( inRANGE_helper_(U8, ((const U8*)s)[5], 0x80, 0x81) ) ? 6 : 0 ) : ( ( 0xCD == ((const U8*)s)[4] ) && ( 0x82 == ((const U8*)s)[5] ) ) ? 6 : 0 ) : 0 ) : ( ( 0xCD == ((const U8*)s)[2] ) && ( 0x82 == ((const U8*)s)[3] ) ) ? 4 : 0 ) : 0 ) : ( 0xCF == ((const U8*)s)[0] ) ? ( ( 0x81 == ((const U8*)s)[1] ) ? ( ( ( 0xCC == ((const U8*)s)[2] ) && ( 0x93 == ((const U8*)s)[3] ) ) ? 4 : 0 ) : ( 0x85 == ((const U8*)s)[1] ) ? ( ( 0xCC == ((const U8*)s)[2] ) ? ( ( 0x88 == ((const U8*)s)[3] ) ? ( ( 0xCC == ((const U8*)s)[4] ) ? ( ( inRANGE_helper_(U8, ((const U8*)s)[5], 0x80, 0x81) ) ? 6 : 0 ) : ( ( 0xCD == ((const U8*)s)[4] ) && ( 0x82 == ((const U8*)s)[5] ) ) ? 6 : 0 ) : ( 0x93 == ((const U8*)s)[3] ) ? ( ( 0xCC == ((const U8*)s)[4] ) ? ( ( inRANGE_helper_(U8, ((const U8*)s)[5], 0x80, 0x81) ) ? 6 : 4 ) : ( ( 0xCD == ((const U8*)s)[4] ) && ( 0x82 == ((const U8*)s)[5] ) ) ? 6 : 4 ) : 0 ) : ( ( 0xCD == ((const U8*)s)[2] ) && ( 0x82 == ((const U8*)s)[3] ) ) ? 4 : 0 ) : ( 0x89 == ((const U8*)s)[1] ) ? ( ( 0xCD == ((const U8*)s)[2] ) ? ( ( 0x82 == ((const U8*)s)[3] ) ? ( ( ( 0xCE == ((const U8*)s)[4] ) && ( 0xB9 == ((const U8*)s)[5] ) ) ? 6 : 4 ) : 0 ) : ( ( 0xCE == ((const U8*)s)[2] ) && ( 0xB9 == ((const U8*)s)[3] ) ) ? 4 : 0 ) : ( ( ( 0x8E == ((const U8*)s)[1] ) && ( 0xCE == ((const U8*)s)[2] ) ) && ( 0xB9 == ((const U8*)s)[3] ) ) ? 4 : 0 ) : ( 0xD5 == ((const U8*)s)[0] ) ? ( ( 0xA5 == ((const U8*)s)[1] ) ? ( ( ( 0xD6 == ((const U8*)s)[2] ) && ( 0x82 == ((const U8*)s)[3] ) ) ? 4 : 0 ) : ( 0xB4 == ((const U8*)s)[1] ) ? ( ( ( 0xD5 == ((const U8*)s)[2] ) && ( ( ( ((const U8*)s)[3] & 0xF7 ) == 0xA5 ) || ((const U8*)s)[3] == 0xAB || ((const U8*)s)[3] == 0xB6 ) ) ? 4 : 0 ) : ( ( ( 0xBE == ((const U8*)s)[1] ) && ( 0xD5 == ((const U8*)s)[2] ) ) && ( 0xB6 == ((const U8*)s)[3] ) ) ? 4 : 0 ) : ( 0xE1 == ((const U8*)s)[0] ) ? ( ( 0xBC == ((const U8*)s)[1] ) ? ( ( ( ( ( ((const U8*)s)[2] & 0xD8 ) == 0x80 ) && ( 0xCE == ((const U8*)s)[3] ) ) && ( 0xB9 == ((const U8*)s)[4] ) ) ? 5 : 0 ) : ( ( ( ( 0xBD == ((const U8*)s)[1] ) && ( ( ( ((const U8*)s)[2] & 0xF8 ) == 0xA0 ) || ( ( ((const U8*)s)[2] & 0xFB ) == 0xB0 ) || ((const U8*)s)[2] == 0xBC ) ) && ( 0xCE == ((const U8*)s)[3] ) ) && ( 0xB9 == ((const U8*)s)[4] ) ) ? 5 : 0 ) : 0 )
#define LOCK_DOLLARZERO_MUTEX MUTEX_LOCK(&PL_dollarzero_mutex)
#define CPPRUN "cc  -E"
#define PROC_FLAG_SUPPRESSED 0x800000
#define _SC_BC_SCALE_MAX 11
#define SvMAGICAL_on(sv) (SvFLAGS(sv) |= (SVs_GMG|SVs_SMG|SVs_RMG))
#define _ACCESS_EXTENDED_MASK (_READ_OK | _WRITE_OK | _EXECUTE_OK | _DELETE_OK | _APPEND_OK | _RMFILE_OK | _REXT_OK | _WEXT_OK | _RATTR_OK | _WATTR_OK | _RPERM_OK | _WPERM_OK | _CHOWN_OK)
#define SvSetSV_nosteal(dst,src) SvSetSV_nosteal_and(dst,src, ;)
#define PERL_ARGS_ASSERT_DELETE_EVAL_SCOPE 
#define NGX_HTTP_REQUEST_URI_TOO_LARGE 414
#define HAS_MALLOC_GOOD_SIZE 
#define isCNTRL_utf8(p,e) isCNTRL_utf8_safe(p, e)
#define UINT16_C(v) (v)
#define PL_hv_fetch_ent_mh (vTHX->Ihv_fetch_ent_mh)
#define pcre2_pattern_info PCRE2_SUFFIX(pcre2_pattern_info_)
#define NOTE_CHILD 0x00000004
#define WARN_BAREWORD 30
#define VM_PURGABLE_ORDERING_OBSOLETE (1 << VM_PURGABLE_ORDERING_SHIFT)
#define PerlSock_getpeername(s,n,l) getpeername(s, n, l)
#define IN_LC(category) (IN_LC_COMPILETIME(category) || IN_LC_RUNTIME(category))
#define FIXINC_WRAP_MATH_H_MATH_EXCEPTION 1
#define isPSXSPC_utf8(p,e) isPSXSPC_utf8_safe(p, e)
#define MgPV_nolen_const(mg) (((((int)(mg)->mg_len)) == HEf_SVKEY) ? SvPV_nolen_const(MUTABLE_SV((mg)->mg_ptr)) : (const char*)(mg)->mg_ptr)
#define SvLOCK(sv) PL_lockhook(aTHX_ sv)
#define PERL_ARGS_ASSERT_SV_SETPVF_MG_NOCONTEXT assert(sv); assert(pat)
#define SCNo8 __PRI_8_LENGTH_MODIFIER__ "o"
#define IOPOL_VFS_IGNORE_PERMISSIONS_OFF 0
#define __OSX_DEPRECATED(_start,_dep,_msg) 
#define CTL_NET 4
#define _PC_PRIO_IO 19
#define EXIT_FAILURE 1
#define PERL_ARGS_ASSERT_SV_MORTALCOPY_FLAGS 
#define SIOCGIFWAKEFLAGS _IOWR('i', 136, struct ifreq)
#define gp_free(a) Perl_gp_free(aTHX_ a)
#define Nullsv Null(SV*)
#define PL_Mem (vTHX->IMem)
#define NGX_ALIGNMENT sizeof(unsigned long)
#define PERL_ARGS_ASSERT_SAVE_ITEM assert(item)
#define SAVEt_AELEM 53
#define PERL_ARGS_ASSERT_MY_STRERROR 
#define IN_BYTES UNLIKELY(CopHINTS_get(PL_curcop) & HINT_BYTES)
#define hv_iterval(a,b) Perl_hv_iterval(aTHX_ a,b)
#define OS_PURE __attribute__((__pure__))
#define NGX_PROCESS_JUST_SPAWN -2
#define PERL_ARGS_ASSERT_SV_2PV_NOLEN assert(sv)
#define LOCAL_PEEREUUID 0x005
#define vdeb(a,b) Perl_vdeb(aTHX_ a,b)
#define SVphv_CLONEABLE SVp_SCREAM
#define SvSMAGICAL_on(sv) (SvFLAGS(sv) |= SVs_SMG)
#define HOST_RESOURCE_NOTIFY_PORT (20 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define SvPOK_byte_pure_nogthink(sv) ((SvFLAGS(sv) & (SVf_POK|SVf_UTF8|SVf_IOK|SVf_NOK|SVf_ROK|SVpgv_GP|SVf_THINKFIRST|SVs_GMG)) == SVf_POK)
#define NV_NAN_PAYLOAD_MASK_IEEE_754_128_BE 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
#define PERL_ARGS_ASSERT_UTF8N_TO_UVCHR_ERROR assert(s)
#define NGX_HTTP_SERVER_TOKENS_ON 1
#define toFOLD_A(c) toFOLD(c)
#define SCNxFAST16 SCNx16
#define AI_V4MAPPED_CFG 0x00000200
#define AMGf_numeric 0x10
#define case_224_SBOX32(hash,state,key) 
#define __DARWIN_STRUCT_STATFS64 { uint32_t f_bsize; int32_t f_iosize; uint64_t f_blocks; uint64_t f_bfree; uint64_t f_bavail; uint64_t f_files; uint64_t f_ffree; fsid_t f_fsid; uid_t f_owner; uint32_t f_type; uint32_t f_flags; uint32_t f_fssubtype; char f_fstypename[MFSTYPENAMELEN]; char f_mntonname[MAXPATHLEN]; char f_mntfromname[MAXPATHLEN]; uint32_t f_flags_ext; uint32_t f_reserved[7]; }
#define PL_origenviron (vTHX->Iorigenviron)
#define NGX_ENFILE ENFILE
#define VM_PURGABLE_ORDERING_SHIFT 5
#define KERN_NODE_DOWN 47
#define gv_fetchfile_flags(a,b,c) Perl_gv_fetchfile_flags(aTHX_ a,b,c)
#define cop_fetch_label(a,b,c) Perl_cop_fetch_label(aTHX_ a,b,c)
#define NGX_ANY_CONF 0xFF000000
#define SA_SIGINFO 0x0040
#define MULTIPLICITY 
#define ngx_is_exec(sb) (((sb)->st_mode & S_IXUSR) == S_IXUSR)
#define PCRE2_EXTENDED_MORE 0x01000000u
#define OPpMAYBE_TRUEBOOL 0x10
#define THREAD_FLAVOR_CONTROL 0
#define fseek fseeko
#define PERL_FILTER_EXISTS(i) (PL_parser && PL_parser->rsfp_filters && (Size_t) (i) < av_count(PL_parser->rsfp_filters))
#define NGX_HTTP_NOT_IMPLEMENTED 501
#define CvFILEGV(sv) (gv_fetchfile(CvFILE(sv)))
#define _NGX_CRC_H_INCLUDED_ 
#define PCRE2_ERROR_INVALID_AFTER_PARENS_QUERY 111
#define PERL_ARGS_ASSERT_SAVESHAREDPV 
#define NGX_ENOSYS ENOSYS
#define CXp_TRY 0x80
#define IPV6PROTO_MAXID (IPPROTO_PIM + 1)
#define MAC_OS_X_VERSION_10_10_2 101002
#define MAC_OS_X_VERSION_10_10_3 101003
#define PF_LAT AF_LAT
#define NGX_MAX_ERROR_STR 2048
#define VM_MEMORY_SQLITE 62
#define TCP_NOTSENT_LOWAT 0x201
#define PRIxFAST32 PRIx32
#define KERN_SAFEBOOT 66
#define _SC_THREAD_THREADS_MAX 94
#define CTL_KERN 1
#define PL_XPosix_ptrs (vTHX->IXPosix_ptrs)
#define SIGTTOU 22
#define RX_EXTFLAGS(rx_sv) RXp_EXTFLAGS(ReANY(rx_sv))
#define IN6_IS_ADDR_UNSPECIFIED(a) ((*(const __uint32_t *)(const void *)(&(a)->s6_addr[0]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[4]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[8]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[12]) == 0))
#define HAS_SOCKET 
#define _PASSWORD_NOUID 0x01
#define isVERTWS_uvchr(c) _generic_uvchr(_CC_VERTSPACE, is_VERTWS_cp_high, c)
#define PAD_SV(po) (PL_curpad[po])
#define HAS_MBRLEN 
#define KERN_POSIX 58
#define TCP_RXT_FINDROP 0x100
#define __SIZEOF_INT__ 4
#define x86_AVX_STATE32 16
#define SCNu8 __PRI_8_LENGTH_MODIFIER__ "u"
#define SIOCSIFKPI _IOW('i', 134, struct ifreq)
#define gv_init(gv,stash,name,len,multi) gv_init_pvn(gv,stash,name,len,GV_ADDMULTI*!!(multi))
#define isALPHANUMERIC_utf8_safe(p,e) _generic_invlist_utf8_safe(_CC_ALPHANUMERIC, p, e)
#define PERL_ARGS_ASSERT_INIT_I18NL10N 
#define PERL_ARGS_ASSERT_UTF8N_TO_UVUNI assert(s)
#define PERL_ARGS_ASSERT_GROK_INFNAN assert(sp); assert(send)
#define _STRUCT_MCONTEXT64_FULL struct __darwin_mcontext64_full
#define TRASHIT(x) 
#define HvFILL(hv) Perl_hv_fill(aTHX_ MUTABLE_HV(hv))
#define NGX_DEBUG_POINTS_ABORT 2
#define IPPROTO_SCTP 132
#define VM_VOLATILE_MAKE_LAST_IN_GROUP (0 << VM_VOLATILE_ORDER_SHIFT)
#define _SYS_TTYCOM_H_ 
#define is_utf8_fixed_width_buf_loclen_flags Perl_is_utf8_fixed_width_buf_loclen_flags
#define PSOCK 24
#define PL_main_cv (vTHX->Imain_cv)
#define SCNxFAST64 SCNx64
#define SAVEFREEPADNAME(s) save_pushptr((void *)(s), SAVEt_FREEPADNAME)
#define PL_delaymagic_uid (vTHX->Idelaymagic_uid)
#define P_REBOOT 0x00200000
#define AT_FDCWD -2
#define FIOSETOWN _IOW('f', 124, int)
#define NGX_HAVE_CASELESS_FILESYSTEM 1
#define case_179_SBOX32(hash,state,key) 
#define get_op_names() Perl_get_op_names(aTHX)
#define VQ_MOUNT 0x0008
#define ATTR_CMN_SCRIPT 0x00000100
#define sv_isa_sv(a,b) Perl_sv_isa_sv(aTHX_ a,b)
#define PRIuFAST16 PRIu16
#define _SC_VERSION 8
#define SBOX32_WARN5(pat,v0,v1,v2,v3,v4) 
#define _SC_RE_DUP_MAX 16
#define RXf_PMf_MULTILINE (1U << (RXf_PMf_STD_PMMOD_SHIFT+0))
#define PL_signals (vTHX->Isignals)
#define IPPROTO_EGP 8
#define __USER_LABEL_PREFIX__ _
#define HOST_XPC_EXCEPTION_PORT (17 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define PL_curpm_under (vTHX->Icurpm_under)
#define RLIM_INFINITY (((__uint64_t)1 << 63) - 1)
#define CMSG_LEN(l) (__DARWIN_ALIGN32(sizeof(struct cmsghdr)) + (l))
#define ngx_conf_init_msec_value(conf,default) if (conf == NGX_CONF_UNSET_MSEC) { conf = default; }
#define NGX_IO_SENDFILE 1
#define SIOCSETVLAN SIOCSIFVLAN
#define pad_add_name_pvn(a,b,c,d,e) Perl_pad_add_name_pvn(aTHX_ a,b,c,d,e)
#define PERL_ARGS_ASSERT_GP_FREE 
#define PerlLIO_symlink(oldname,newname) symlink((oldname), (newname))
#define IPV6_FAITH 29
#define FmLINES(sv) ((XPVIV*) SvANY(sv))->xiv_iv
#define OS_NOESCAPE 
#define sv_setpvs_mg(sv,str) Perl_sv_setpvn_mg(aTHX_ sv, STR_WITH_LEN(str))
#define ENEEDAUTH 81
#define HS_KEY(setxsubfn,popmark,apiver,xsver) HS_KEYp(sizeof(PerlInterpreter), TRUE, setxsubfn, popmark, sizeof("" apiver "")-1, sizeof("" xsver "")-1)
#define PERL_ARGS_ASSERT__IS_UTF8_PERL_IDCONT assert(p); assert(e)
#define SCNx8 __PRI_8_LENGTH_MODIFIER__ "x"
#define sv_pvutf8n_force(a,b) Perl_sv_pvutf8n_force(aTHX_ a,b)
#define __TVOS_11_1 110100
#define PL_Private_Use (vTHX->IPrivate_Use)
#define PL_an (vTHX->Ian)
#define UTF8_ALLOW_ANYUV 0
#define PERLSI_REGCOMP 11
#define PERL_ARGS_ASSERT_VCMP assert(lhv); assert(rhv)
#define deb_nocontext Perl_deb_nocontext
#define save_hdelete(a,b) Perl_save_hdelete(aTHX_ a,b)
#define PL_main_root (vTHX->Imain_root)
#define KERN_RIGHT_EXISTS 21
#define _SC_RTSIG_MAX 48
#define RTLD_NODELETE 0x80
#define WCONTINUED 0x00000010
#define UINT8_MAX 255
#define PL_hash_state ((U8 *)PL_hash_state_w)
#define NGX_HAVE_SC_NPROCESSORS_ONLN 1
#define VM_MAKE_TAG(tag) ((tag) << 24)
#define CvLEXICAL(cv) (CvFLAGS(cv) & CVf_LEXICAL)
#define IoTYPE_WRONLY '>'
#define EXC_I386_INVTSSFLT 10
#define __DARWIN_1050ALIAS(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_UNIX03)
#define LOCALE_LOCK_ STMT_START { DEBUG_Lv(PerlIO_printf(Perl_debug_log, "%s: %d: locking locale\n", __FILE__, __LINE__)); MUTEX_LOCK(&PL_locale_mutex); } STMT_END
#define scan_num(a,b) Perl_scan_num(aTHX_ a,b)
#define __MAC_10_3 1030
#define UTF8_WARN_ILLEGAL_INTERCHANGE (UTF8_WARN_ILLEGAL_C9_INTERCHANGE|UTF8_WARN_NONCHAR)
#define __LDBL_HAS_INFINITY__ 1
#define CPU_SUBTYPE_XEON_MP CPU_SUBTYPE_INTEL(12, 1)
#define REENTRANT_PROTO_I_IISD 31
#define PERL_PV_ESCAPE_NOCLEAR 0x004000
#define PERL_ARGS_ASSERT_WRITE_TO_STDERR assert(msv)
#define FOLD_FLAGS_LOCALE 0x1
#define PERL_ARGS_ASSERT_NEWAVREF assert(o)
#define SAVEt_INT 35
#define __FLT32X_HAS_DENORM__ 1
#define OP_DESC(o) ((o)->op_type == OP_CUSTOM ? XopENTRYCUSTOM(o, xop_desc) : PL_op_desc[(o)->op_type])
#define NGX_CMD_OPEN_CHANNEL 1
#define PERL_ARGS_ASSERT__TO_UTF8_TITLE_FLAGS assert(p); assert(ustrp)
#define PAD_FAKELEX_ANON 1
#define NGX_CONF_UNSET_PTR (void *) -1
#define PerlIO_error(a) Perl_PerlIO_error(aTHX_ a)
#define NGX_CONF_PATH "conf/nginx.conf"
#define NGX_GROUP "nobody"
#define FPC_RC_RU 0x0800
#define sv_dump(a) Perl_sv_dump(aTHX_ a)
#define PERL_ARGS_ASSERT_GROK_BIN_OCT_HEX assert(start); assert(len_p); assert(flags)
#define _NGX_EVENT_CONNECT_H_INCLUDED_ 
#define OS_WEAK __attribute__((__weak__))
#define IPPROTO_ETHERIP 97
#define case_173_SBOX32(hash,state,key) 
#define _PC_PIPE_BUF 6
#define _is_utf8_FOO(a,b,c) Perl__is_utf8_FOO(aTHX_ a,b,c)
#define PUTBACK PL_stack_sp = sp
#define PERL_ARGS_ASSERT_HV_CLEAR_PLACEHOLDERS assert(hv)
#define __MAC_10_7 1070
#define MDEREF_AV_gvsv_vivify_rv2av_aelem 2
#define save_helem(hv,key,sptr) save_helem_flags(hv,key,sptr,SAVEf_SETMAGIC)
#define kPADOP cPADOPx(kid)
#define TASK_SCHED_RR_INFO 11
#define PERLSI_UNKNOWN -1
#define S_TYPEISMQ(buf) (0)
#define IPV6_FW_GET 34
#define TASK_BASIC_INFO_64_COUNT (sizeof(task_basic_info_64_data_t) / sizeof(natural_t))
#define SF_RESTRICTED 0x00080000
#define KERN_LOW_PRI_DELAY 57
#define HVhek_FREEKEY 0x100
#define GvIMPORTED_AV_on(gv) (GvFLAGS(gv) |= GVf_IMPORTED_AV)
#define PERL_MAGIC_lvref '\\'
#define HAS_RINT 
#define NGX_LOG_DEBUG_MAIL 0x200
#define JE_OLD_STACK_HWM_zero NOOP
#define HAS_GETPWUID_R 
#define MAP_FAILED ((void *)-1)
#define MACH_PORT_INFO_EXT 7
#define PERL_ARGS_ASSERT_DO_UNIPROP_MATCH assert(key)
#define KERN_INVALID_PROCESSOR_SET 26
#define I_PTHREAD 
#define cx_pushblock(a,b,c,d) Perl_cx_pushblock(aTHX_ a,b,c,d)
#define PROCESSOR_SET_NULL ((processor_set_t) 0)
#define HvENAMEUTF8(hv) ((SvOOK(hv) && HvAUX(hv)->xhv_name_u.xhvnameu_name && HvAUX(hv)->xhv_name_count != -1) ? HEK_UTF8(HvENAME_HEK_NN(hv)) : 0)
#define MGf_DUP 0x10
#define DEBUG_J_TEST (0)
#define PCRE2_SUFFIX(a) PCRE2_GLUE(a, PCRE2_CODE_UNIT_WIDTH)
#define pad_tidy(a) Perl_pad_tidy(aTHX_ a)
#define HW_VECTORUNIT 13
#define __COMMON_UNI_SKIP(uv) (UV) (uv) < (32 * (1U << ( UTF_ACCUMULATION_SHIFT))) ? 2 : (UV) (uv) < (16 * (1U << (2 * UTF_ACCUMULATION_SHIFT))) ? 3 : (UV) (uv) < ( 8 * (1U << (3 * UTF_ACCUMULATION_SHIFT))) ? 4 : (UV) (uv) < ( 4 * (1U << (4 * UTF_ACCUMULATION_SHIFT))) ? 5 : (UV) (uv) < ( 2 * (1U << (5 * UTF_ACCUMULATION_SHIFT))) ? 6 :
#define XTENDED_PAT_MOD 'x'
#define SvPOK_utf8_nogthink(sv) ((SvFLAGS(sv) & (SVf_POK|SVf_UTF8|SVf_THINKFIRST|SVs_GMG)) == (SVf_POK|SVf_UTF8))
#define die_nocontext Perl_die_nocontext
#define DEBUG_Xv_TEST_ DEBUG_BOTH_FLAGS_TEST_(DEBUG_X_FLAG, DEBUG_v_FLAG)
#define PL_tmps_ix (vTHX->Itmps_ix)
#define WARN_MISC 12
#define IPPROTO_EON 80
#define SO_BROADCAST 0x0020
#define PCRE2_EXTRA_ALLOW_LOOKAROUND_BSK 0x00000040u
#define CPU_SUBTYPE_MIPS_R2800 ((cpu_subtype_t) 3)
#define PERL_ARGS_ASSERT_LOAD_MODULE assert(name)
#define isALPHA_LC_uvchr(c) _generic_LC_invlist_uvchr(isALPHA_LC, _CC_ALPHA, c)
#define PL_sighandler1p (vTHX->Isighandler1p)
#define PL_utf8_totitle (vTHX->Iutf8_totitle)
#define is_MULTI_CHAR_FOLD_utf8_safe_part2_(s,e) ( ( ( ((const U8*)s)[0] & 0xDF ) == 'A' ) ? ( ( ( 0xCA == ((const U8*)s)[1] ) && ( 0xBE == ((const U8*)s)[2] ) ) ? 3 : 0 ) : ( ( ((const U8*)s)[0] & 0xDF ) == 'F' ) ? ( ( ( ((const U8*)s)[1] & 0xDF ) == 'F' ) ? ( ( ( ( ((const U8*)s)[2] & 0xDF ) == 'I' ) || ( ( ((const U8*)s)[2] & 0xDF ) == 'L' ) ) ? 3 : 2 ) : ( ( ( ((const U8*)s)[1] & 0xDF ) == 'I' ) || ( ( ((const U8*)s)[1] & 0xDF ) == 'L' ) ) ? 2 : 0 ) : ( ( ((const U8*)s)[0] & 0xDF ) == 'H' ) ? ( ( ( 0xCC == ((const U8*)s)[1] ) && ( 0xB1 == ((const U8*)s)[2] ) ) ? 3 : 0 ) : ( ( ((const U8*)s)[0] & 0xDF ) == 'I' ) ? ( ( ( 0xCC == ((const U8*)s)[1] ) && ( 0x87 == ((const U8*)s)[2] ) ) ? 3 : 0 ) : ( ( ((const U8*)s)[0] & 0xDF ) == 'J' ) ? ( ( ( 0xCC == ((const U8*)s)[1] ) && ( 0x8C == ((const U8*)s)[2] ) ) ? 3 : 0 ) : ( ( ((const U8*)s)[0] & 0xDF ) == 'S' ) ? ( ( inRANGE_helper_(U8, ((const U8*)s)[1], 'S', 'T') || inRANGE_helper_(U8, ((const U8*)s)[1], 's', 't') ) ? 2 : ( ( 0xC5 == ((const U8*)s)[1] ) && ( 0xBF == ((const U8*)s)[2] ) ) ? 3 : 0 ) : ( ( ((const U8*)s)[0] & 0xDF ) == 'T' ) ? ( ( ( 0xCC == ((const U8*)s)[1] ) && ( 0x88 == ((const U8*)s)[2] ) ) ? 3 : 0 ) : ( ( ( ((const U8*)s)[0] & 0xDF ) == 'W' ) || ( ( ((const U8*)s)[0] & 0xDF ) == 'Y' ) ) ? ( ( ( 0xCC == ((const U8*)s)[1] ) && ( 0x8A == ((const U8*)s)[2] ) ) ? 3 : 0 ) : ( 0xC5 == ((const U8*)s)[0] ) ? ( ( 0xBF == ((const U8*)s)[1] ) ? ( ( inRANGE_helper_(U8, ((const U8*)s)[2], 'S', 'T') || inRANGE_helper_(U8, ((const U8*)s)[2], 's', 't') ) ? 3 : ( ( 0xC5 == ((const U8*)s)[2] ) && ( 0xBF == ((const U8*)s)[3] ) ) ? 4 : 0 ) : 0 ) : ( 0xCA == ((const U8*)s)[0] ) ? ( ( ( 0xBC == ((const U8*)s)[1] ) && ( ( ((const U8*)s)[2] & 0xDF ) == 'N' ) ) ? 3 : 0 ) : ( 0xCE == ((const U8*)s)[0] ) ? ( ( ( ((const U8*)s)[1] & 0xFD ) == 0xAC ) ? ( ( ( 0xCE == ((const U8*)s)[2] ) && ( 0xB9 == ((const U8*)s)[3] ) ) ? 4 : 0 ) : ( 0xB1 == ((const U8*)s)[1] || 0xB7 == ((const U8*)s)[1] ) ? ( ( 0xCD == ((const U8*)s)[2] ) ? ( ( 0x82 == ((const U8*)s)[3] ) ? 4 : 0 ) : ( ( 0xCE == ((const U8*)s)[2] ) && ( 0xB9 == ((const U8*)s)[3] ) ) ? 4 : 0 ) : ( ( ( 0xB9 == ((const U8*)s)[1] ) && ( 0xCD == ((const U8*)s)[2] ) ) && ( 0x82 == ((const U8*)s)[3] ) ) ? 4 : 0 ) : ( 0xCF == ((const U8*)s)[0] ) ? ( ( 0x81 == ((const U8*)s)[1] ) ? ( ( ( 0xCC == ((const U8*)s)[2] ) && ( 0x93 == ((const U8*)s)[3] ) ) ? 4 : 0 ) : ( 0x85 == ((const U8*)s)[1] ) ? ( ( 0xCC == ((const U8*)s)[2] ) ? ( ( 0x93 == ((const U8*)s)[3] ) ? 4 : 0 ) : ( ( 0xCD == ((const U8*)s)[2] ) && ( 0x82 == ((const U8*)s)[3] ) ) ? 4 : 0 ) : ( 0x89 == ((const U8*)s)[1] ) ? ( ( 0xCD == ((const U8*)s)[2] ) ? ( ( 0x82 == ((const U8*)s)[3] ) ? 4 : 0 ) : ( ( 0xCE == ((const U8*)s)[2] ) && ( 0xB9 == ((const U8*)s)[3] ) ) ? 4 : 0 ) : ( ( ( 0x8E == ((const U8*)s)[1] ) && ( 0xCE == ((const U8*)s)[2] ) ) && ( 0xB9 == ((const U8*)s)[3] ) ) ? 4 : 0 ) : ( 0xD5 == ((const U8*)s)[0] ) ? ( ( 0xA5 == ((const U8*)s)[1] ) ? ( ( ( 0xD6 == ((const U8*)s)[2] ) && ( 0x82 == ((const U8*)s)[3] ) ) ? 4 : 0 ) : ( 0xB4 == ((const U8*)s)[1] ) ? ( ( ( 0xD5 == ((const U8*)s)[2] ) && ( ( ( ((const U8*)s)[3] & 0xF7 ) == 0xA5 ) || ((const U8*)s)[3] == 0xAB || ((const U8*)s)[3] == 0xB6 ) ) ? 4 : 0 ) : ( ( ( 0xBE == ((const U8*)s)[1] ) && ( 0xD5 == ((const U8*)s)[2] ) ) && ( 0xB6 == ((const U8*)s)[3] ) ) ? 4 : 0 ) : 0 )
#define MACH_MSGH_BITS_HAS_VOUCHER(bits) (MACH_MSGH_BITS_VOUCHER(bits) != MACH_MSGH_BITS_ZERO)
#define NGX_MAX_UINT32_VALUE (uint32_t) 0xffffffff
#define __IPHONE_13_1 130100
#define GvEGVx(gv) (isGV_with_GP(gv) ? GvEGV(gv) : NULL)
#define TIOCMGDTRWAIT _IOR('t', 90, int)
#define F_SETBACKINGSTORE 70
#define case_87_SBOX32(hash,state,key) 
#define VM_PURGABLE_BEHAVIOR_FIFO (0 << VM_PURGABLE_BEHAVIOR_SHIFT)
#define EAI_MAX 15
#define av_len(a) Perl_av_len(aTHX_ a)
#define PERL_ARGS_ASSERT_EVAL_SV assert(sv)
#define SIGIO 23
#define _PC_AUTH_OPAQUE_NP 14
#define PCRE2_ERROR_LOOKBEHIND_INVALID_BACKSLASH_C 136
#define IN_ANY_LOCAL(i) (IN_LINKLOCAL(i) || IN_LOCAL_GROUP(i))
#define DBL_HAS_SUBNORM __DBL_HAS_DENORM__
#define PERL_ARGS_ASSERT_HV_DELAYFREE_ENT assert(hv)
#define EAFNOSUPPORT 47
#define IPPROTO_ENCAP 98
#define __STDC_UTF_16__ 1
#define NGX_HTTP_CACHE_ETAG_LEN 128
#define IPPROTO_VINES 83
#define MACH_MSG_TYPE_DISPOSE_SEND 25
#define PERL_ARGS_ASSERT__IS_UTF8_FOO assert(p); assert(e)
#define PERL_MULTICONCAT_IX_PLAIN_PV 1
#define NGX_PROXY_PROTOCOL_MAX_HEADER 107
#define __API_AVAILABLE_GET_MACRO(...) 
#define dPOPTOPiirl_ul_nomg dPOPXiirl_ul_nomg(TOP)
#define IPPROTO_AHIP 61
#define PERL_ARGS_ASSERT_SAVESHAREDPVN 
#define PERL_ARGS_ASSERT_NEWBINOP 
#define host_get_host_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_PORT, (port)))
#define PL_sighandler3p (vTHX->Isighandler3p)
#define x86_PAGEIN_STATE_COUNT ((mach_msg_type_number_t)(sizeof(x86_pagein_state_t) / sizeof(int)))
#define PL_reentrant_retint (vTHX->Ireentrant_retint)
#define AUDIT_EXPIRE_OP_AND ((unsigned char)0)
#define MACH_PORT_TYPE_SPREQUEST_DELAYED 0x20000000
#define MACH_PORT_VALID(name) (((name) != MACH_PORT_NULL) && ((name) != MACH_PORT_DEAD))
#define VM_MEMORY_ASSETSD 72
#define DEBUG_X_TEST_ UNLIKELY(PL_debug & DEBUG_X_FLAG)
#define IoTYPE_PIPE '|'
#define PERL_OP_PARENT 
#define HW_L2SETTINGS 19
#define AT_SYMLINK_FOLLOW 0x0040
#define VM_REGION_SUBMAP_INFO_COUNT_64 VM_REGION_SUBMAP_INFO_V2_COUNT_64
#define _ALLOCA_H_ 
#define ngx_tm_hour_t int
#define HAS_NAN 
#define IP_BOUND_IF 25
#define SvPVutf8_or_null_nomg(sv,len) (SvPOK_utf8_nog(sv) ? ((len = SvCUR(sv)), SvPVX(sv)) : SvOK(sv) ? sv_2pvutf8_flags(sv, &len, 0) : ((len = 0), NULL))
#define PerlProc_pause() Pause()
#define REENTRANT_PROTO_I_BW 11
#define __FLT64X_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951F64x
#define IPPROTO_ESP 50
#define SvNOK(sv) (SvFLAGS(sv) & SVf_NOK)
#define GLOB_NOSORT 0x0020
#define GMTIME_MIN -62167219200
#define ngx_http_clear_content_length(r) r->headers_out.content_length_n = -1; if (r->headers_out.content_length) { r->headers_out.content_length->hash = 0; r->headers_out.content_length = NULL; }
#define USE_HASH_SEED 
#define SvRMAGICAL(sv) (SvFLAGS(sv) & SVs_RMG)
#define isless(x,y) __builtin_isless((x),(y))
#define KEV_INET_SUBCLASS 1
#define PERL_ARGS_ASSERT_SS_DUP assert(proto_perl); assert(param)
#define I_NETINET_IN 
#define OPpSORT_REVERSE 0x04
#define U_I(what) ((unsigned int)U_32(what))
#define vcroak(a,b) Perl_vcroak(aTHX_ a,b)
#define ATTR_CMN_CRTIME 0x00000200
#define U_L(what) U_32(what)
#define U_S(what) ((U16)U_32(what))
#define EXT_PAT_MODS ONCE_PAT_MODS KEEPCOPY_PAT_MODS NOCAPTURE_PAT_MODS
#define PERL_ARGS_ASSERT_PERLIO_STDERR 
#define CvHASEVAL(cv) (CvFLAGS(cv) & CVf_HASEVAL)
#define PERL_UNUSED_CONTEXT PERL_UNUSED_ARG(my_perl)
#define case_147_SBOX32(hash,state,key) 
#define CIRCLEQ_LAST(head) ((head)->cqh_last)
#define PERL_ARGS_ASSERT_STR_TO_VERSION assert(sv)
#define CPU_ARCH_ABI64 0x01000000
#define _POSIX_V7_LPBIG_OFFBIG __LPBIG_OFFBIG
#define KEV_INET_ADDR_DELETED 3
#define mg_find Perl_mg_find
#define case_190_SBOX32(hash,state,key) 
#define STDOUT_FILENO 1
#define __INT_WIDTH__ 32
#define O_NDELAY O_NONBLOCK
#define S_ISVTX 0001000
#define PL_origargc (vTHX->Iorigargc)
#define PCRE2_INFO_EXTRAOPTIONS 26
#define pad_findmy_pvn(a,b,c) Perl_pad_findmy_pvn(aTHX_ a,b,c)
#define SIG_ERR ((void (*)(int))-1)
#define setdefout(a) Perl_setdefout(aTHX_ a)
#define G_METHOD_NAMED 0x1000
#define PL_origargv (vTHX->Iorigargv)
#define SO_TYPE 0x1008
#define CXt_SUBST 12
#define HOST_KTRACE_BACKGROUND_PORT (6 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define hv_iternextsv(a,b,c) Perl_hv_iternextsv(aTHX_ a,b,c)
#define cv_set_call_checker_flags(a,b,c,d) Perl_cv_set_call_checker_flags(aTHX_ a,b,c,d)
#define PL_op (vTHX->Iop)
#define PERL_ARGS_ASSERT_MG_FINDEXT 
#define SCM_RIGHTS 0x01
#define PCRE2_JOIN(a,b) a ## b
#define PERL_UNUSED_RESULT(v) STMT_START { __typeof__(v) z = (v); (void)sizeof(z); } STMT_END
#define __WATCHOS_7_2 70200
#define M_2_PI 0.636619772367581343075535053490057448
#define MAX_UTF8_TWO_BYTE (32 * (1U << UTF_ACCUMULATION_SHIFT) - 1)
#define sv_pvbyten(a,b) Perl_sv_pvbyten(aTHX_ a,b)
#define MACH_SEND_INTERRUPTED 0x10000007
#define IPV6_MAX_MEMBERSHIPS 4095
#define __DECIMAL_DIG__ 21
#define TASK_VM_INFO_REV3_COUNT ((mach_msg_type_number_t) (TASK_VM_INFO_REV4_COUNT - 2))
#define VM_PAGE_QUERY_PAGE_COPIED 0x20
#define OS_REFINED_FOR_SWIFT 
#define ATTR_FORK_RESERVED 0xffffffff
#define LOCK_EX 0x02
#define MgPV(mg,lp) ((((int)(lp = (mg)->mg_len)) == HEf_SVKEY) ? SvPV(MUTABLE_SV((mg)->mg_ptr),lp) : (mg)->mg_ptr)
#define ngx_dlclose(handle) dlclose(handle)
#define NGX_FLUSH_EVENT EV_ERROR
#define _CPERLarg 
#define __FLT64_EPSILON__ 2.22044604925031308084726333618164062e-16F64
#define PERL_ARGS_ASSERT_MAGIC_SETARYLEN assert(sv); assert(mg)
#define NGX_HTTP_LOCK 0x00001000
#define G_WRITING_TO_STDERR 0x400
#define PL_tmps_floor (vTHX->Itmps_floor)
#define PCRE2_SIZE_MAX SIZE_MAX
#define PadMAX(pad) AvFILLp(pad)
#define PERL_ARGS_ASSERT_SCAN_STR assert(start)
#define PCRE2_CONVERT_UTF 0x00000001u
#define F_ADDFILESIGS_FOR_DYLD_SIM 83
#define __Inc__IPerl___ 
#define KERN_INVALID_VALUE 18
#define ENETDOWN 50
#define SvUV_set(sv,val) STMT_START { assert(PL_valid_types_IV_set[SvTYPE(sv) & SVt_MASK]); assert(!isGV_with_GP(sv)); (((XPVUV*)SvANY(sv))->xuv_uv = (val)); } STMT_END
#define ESTALE 70
#define is_STRICT_VERSION(a,b) (a != Perl_prescan_version(aTHX_ a, TRUE, b, NULL, NULL, NULL, NULL))
#define hv_fetch_ent(hv,keysv,lval,hash) ((HE *) hv_common((hv), (keysv), NULL, 0, 0, ((lval) ? HV_FETCH_LVALUE : 0), NULL, (hash)))
#define NV_NAN_PAYLOAD_MASK NV_NAN_PAYLOAD_MASK_IEEE_754_64_LE
#define _SC_2_SW_DEV 24
#define _SYS_ERRNO_H_ 
#define LC_TIME 5
#define FF_LINEGLOB 11
#define isALPHANUMERIC_utf8(p,e) isALPHANUMERIC_utf8_safe(p, e)
#define KERN_PROCARGS 38
#define rninstr Perl_rninstr
#define TASK_BASIC_INFO_32_COUNT (sizeof(task_basic_info_32_data_t) / sizeof(natural_t))
#define AUC_UNSET 0
#define PCRE2_CONFIG_MATCHLIMIT 4
#define PCRE2_EXP_DECL extern
#define OPpSORT_INPLACE 0x08
#define KEV_DL_IF_DETACHING 10
#define PCRE2_ERROR_UNAVAILABLE (-54)
#define MACH_EXCEPTION_CODES 0x80000000
#define CPU_SUBTYPE_VAX_ALL ((cpu_subtype_t) 0)
#define TCPOPT_SACK_PERMIT_HDR (TCPOPT_NOP<<24|TCPOPT_NOP<<16|TCPOPT_SACK_PERMITTED<<8|TCPOLEN_SACK_PERMITTED)
#define IPV6CTL_MCAST_PMTU 44
#define MACH_MSG_TRAILER_MINIMUM_SIZE sizeof(mach_msg_trailer_t)
#define KERN_AIOMAX 46
#define KERN_VNODE 13
#define PERL_BISON_VERSION 30003
#define block_end(a,b) Perl_block_end(aTHX_ a,b)
#define AvREAL_on(av) (SvFLAGS(av) |= SVpav_REAL)
#define PERLSI_REQUIRE 9
#define PERL_ARGS_ASSERT_FILTER_DEL assert(funcp)
#define isCNTRL_uni(c) isCNTRL_uvchr(c)
#define CTL_DEBUG_NAME 0
#define HAS_GETFSSTAT 
#define sv_utf8_encode(a) Perl_sv_utf8_encode(aTHX_ a)
#define SvCOMPILED_off(sv) 
#define PERL_ARGS_ASSERT_DUMP_ALL_PERL 
#define PERLDB_GOTO (PL_perldb & PERLDBf_GOTO)
#define I_WCTYPE 
#define PERL_ARGS_ASSERT_AV_CREATE_AND_UNSHIFT_ONE assert(avp); assert(val)
#define PRIX8 __PRI_8_LENGTH_MODIFIER__ "X"
#define pcre2_convert_context_free PCRE2_SUFFIX(pcre2_convert_context_free_)
#define SvNVX(sv) ((XPVNV*) SvANY(sv))->xnv_u.xnv_nv
#define PERL_ARGS_ASSERT_SAVE_APTR assert(aptr)
#define IPV6CTL_MAXFRAGS 41
#define MACH_PORT_TYPE_ALL_RIGHTS (MACH_PORT_TYPE_PORT_OR_DEAD|MACH_PORT_TYPE_PORT_SET)
#define __LDBL_HAS_QUIET_NAN__ 1
#define IPV6_DSTOPTS IPV6_3542DSTOPTS
#define SvNV_nomg(sv) (SvNOK(sv) ? SvNVX(sv) : sv_2nv_flags(sv, 0))
#define SvNVx(sv) ({SV *_sv = MUTABLE_SV(sv); SvNV(_sv); })
#define PCRE2_CONFIG_HEAPLIMIT 12
#define PERL_ARGS_ASSERT_SAVE_DELETE assert(hv); assert(key)
#define leave_adjust_stacks(a,b,c,d) Perl_leave_adjust_stacks(aTHX_ a,b,c,d)
#define MACH_VOUCHER_ATTR_KEY_NONE ((mach_voucher_attr_key_t)0)
#define PerlMemParse_get_lock() 
#define PL_markstack (vTHX->Imarkstack)
#define __DARWIN_MAXNAMLEN 255
#define case_249_SBOX32(hash,state,key) 
#define PERLDBf_NOOPT 0x04
#define isUTF8_POSSIBLY_PROBLEMATIC(c) (__ASSERT_(FITS_IN_8_BITS(c)) (U8) c >= 0xED)
#define save_hptr(a) Perl_save_hptr(aTHX_ a)
#define HAS_SIGPROCMASK 
#define UNICODE_IS_REPLACEMENT(uv) UNLIKELY((UV) (uv) == UNICODE_REPLACEMENT)
#define ckWARN3(w1,w2,w3) Perl_ckwarn(aTHX_ packWARN3(w1,w2,w3))
#define _PC_PATH_MAX 5
#define PERL_ARGS_ASSERT_SAVE_LIST assert(sarg)
#define NGX_EBUSY EBUSY
#define PERL_ARGS_ASSERT_REG_NAMED_BUFF assert(rx)
#define _POSIX_NO_TRUNC 200112L
#define PERL_ARGS_ASSERT_UTF8_TO_UVCHR assert(s)
#define PERL_ARGS_ASSERT_REENTRANT_FREE 
#define PERL_ARGS_ASSERT_CX_PUSHLOOP_FOR assert(cx); assert(itervarp)
#define IPPROTO_LARP 91
#define MACH_PORT_TYPE_SPREQUEST 0x40000000
#define PERL_ARGS_ASSERT_NEWGP assert(gv)
#define OPpSORT_NUMERIC 0x01
#define NGX_RESOLVE_NOTIMP 4
#define STMT_END )
#define IPV6CTL_ADDRCTLPOLICY 38
#define PERL_ARGS_ASSERT_REG_NAMED_BUFF_ITER assert(rx)
#define ATTR_BIT_MAP_COUNT 5
#define PL_Env (vTHX->IEnv)
#define NOTE3(pat,v0,v1,v2) 
#define _NGX_CYCLE_H_INCLUDED_ 
#define OPpCONST_SHORTCIRCUIT 0x04
#define L_tmpnam 1024
#define __DYNAMIC__ 1
#define I_LANGINFO 
#define DEBUG_SBOX32_HASH 0
#define WIFCONTINUED(x) (_WSTATUS(x) == _WSTOPPED && WSTOPSIG(x) == 0x13)
#define PERL_ARGS_ASSERT_MY_ATOF assert(s)
#define SAVEDELETE(h,k,l) save_delete(MUTABLE_HV(h), (char*)(k), (I32)(l))
#define __GNUC__ 11
#define MACH_SEND_SYNC_OVERRIDE 0x00100000
#define dPOPXiirl_ul_nomg(X) IV right = (sp--, SvIV_nomg(TOPp1s)); SV *leftsv = CAT2(X,s); IV left = USE_LEFT(leftsv) ? SvIV_nomg(leftsv) : 0
#define NGX_HTTP_CACHE_BYPASS 2
#define PRIoLEAST16 PRIo16
#define IPPROTO_TCF 87
#define IOCPARM_MAX (IOCPARM_MASK + 1)
#define __MMX__ 1
#define CXp_REAL 0x20
#define IPPROTO_TCP 6
#define PERL_ARGS_ASSERT_MY_STAT_FLAGS 
#define PCRE2_NO_UTF_CHECK 0x40000000u
#define HOST_VM_INFO64 4
#define DEBUG_U_TEST (0)
#define av_make(a,b) Perl_av_make(aTHX_ a,b)
#define PERL_ARGS_ASSERT_SV_LEN 
#define THREAD_CONVERT_THREAD_STATE_TO_SELF 1
#define VOL_CAP_FMT_2TB_FILESIZE 0x00000800
#define hv_common_key_len(a,b,c,d,e,f) Perl_hv_common_key_len(aTHX_ a,b,c,d,e,f)
#define PERL_HV_ALLOC_AUX_SIZE (1 << 9)
#define CvDYNFILE_off(cv) (CvFLAGS(cv) &= ~CVf_DYNFILE)
#define P_CONTINUED 0x00000080
#define NGX_INVALID_PID -1
#define __SAPP 0x0100
#define isALNUM_LC_uvchr(c) isWORDCHAR_LC_uvchr(c)
#define isIDFIRST_uvchr(c) _generic_uvchr(_CC_IDFIRST, _is_uni_perl_idstart, c)
#define EXC_MASK_MACHINE 0
#define SO_LINGER_SEC 0x1080
#define PRIoLEAST32 PRIo32
#define SvPV_flags_const(sv,len,flags) (SvPOK_nog(sv) ? ((len = SvCUR(sv)), SvPVX_const(sv)) : (const char*) sv_2pv_flags(sv, &len, (flags|SV_CONST_RETURN)))
#define CIRCLEQ_CHECK_PREV(head,elm,field) 
#define fileno_unlocked(p) __sfileno(p)
#define LOCK_NB 0x04
#define cophh_delete_pvn(cophh,keypv,keylen,hash,flags) Perl_refcounted_he_new_pvn(aTHX_ cophh, keypv, keylen, hash, (SV *)NULL, flags)
#define NGX_CPU_CACHE_LINE 64
#define WARN_ALLstring "\125\125\125\125\125\125\125\125\125\125\125\125\125\125\125\125\125\125\125"
#define HAS_READLINK 
#define VQ_UPDATE 0x0100
#define SvPV_nomg_const(sv,len) SvPV_flags_const(sv, len, 0)
#define IN6_IS_ADDR_6TO4(x) (ntohs((x)->s6_addr16[0]) == 0x2002)
#define MEMORY_OBJECT_COPY_CALL 1
#define NGX_ENOENT ENOENT
#define SBOX32_MAX_LEN 24
#define PCRE2_ERROR_BADOFFSETLIMIT (-56)
#define MAP_MEM_POSTED_COMBINED_REORDERED 9
#define PERL_ARGS_ASSERT_PARSE_FULLSTMT 
#define EAI_MEMORY 6
#define PerlIO_set_ptrcnt(a,b,c) Perl_PerlIO_set_ptrcnt(aTHX_ a,b,c)
#define PERL_ARGS_ASSERT_SV_SETSV_COW assert(ssv)
#define CvANON(cv) (CvFLAGS(cv) & CVf_ANON)
#define DEBUG_Lv_TEST (0)
#define DOUBLE_IS_IEEE_754_64_BIT_BIG_ENDIAN 4
#define P_OWEUPC 0x00008000
#define sv_collxfrm(sv,nxp) sv_collxfrm_flags(sv, nxp, SV_GMAGIC)
#define __BIGGEST_ALIGNMENT__ 16
#define RX_MINLEN(rx_sv) (RXp_MINLEN(ReANY(rx_sv)))
#define OP_IS_INFIX_BIT(op) ((op) >= OP_BIT_AND && (op) <= OP_SBIT_OR)
#define PTRDIFF_MIN INTMAX_MIN
#define DEBUG_u_FLAG 0x00000800
#define sa_handler __sigaction_u.__sa_handler
#define LONG_MAX __LONG_MAX__
#define IPV6_RECVHOPOPTS 39
#define case_78_SBOX32(hash,state,key) 
#define ck_entersub_args_list(a) Perl_ck_entersub_args_list(aTHX_ a)
#define SV_DO_COW_SVSETSV 0
#define PERL_ARGS_ASSERT_SYS_TERM 
#define HvNAME_HEK(hv) (SvOOK(hv) && HvAUX(hv)->xhv_name_u.xhvnameu_name ? HvNAME_HEK_NN(hv) : NULL)
#define NGX_ESCAPE_MEMCACHED 5
#define MEMORY_OBJECT_CONTROL_NULL ((memory_object_control_t) 0)
#define __sfileno(p) ((p)->_file)
#define PL_vtbl_arylen_p PL_magic_vtables[want_vtbl_arylen_p]
#define PRIuMAX __PRI_MAX_LENGTH_MODIFIER__ "u"
#define _POSIX_THREAD_DESTRUCTOR_ITERATIONS 4
#define TCPOPT_CC 11
#define sv_setpv_mg(a,b) Perl_sv_setpv_mg(aTHX_ a,b)
#define VM_PURGABLE_DEBUG_SHIFT 12
#define PCRE2_ERROR_BACKSLASH_N_IN_CLASS 171
#define OS_EXPECT(x,v) __builtin_expect((x), (v))
#define SLIST_HEAD_INITIALIZER(head) { NULL }
#define pcre2_real_code PCRE2_SUFFIX(pcre2_real_code_)
#define re_dup_guts(a,b,c) Perl_re_dup_guts(aTHX_ a,b,c)
#define dSP SV **sp = PL_stack_sp
#define PRIoLEAST64 PRIo64
#define PERL_ARGS_ASSERT_CV_SET_CALL_CHECKER_FLAGS assert(cv); assert(ckfun); assert(ckobj)
#define ZAPHOD32_MIX(v0,v1,v2,text) STMT_START { ZAPHOD32_WARN4("v0=%08x v1=%08x v2=%08x - ZAPHOD32 %s MIX\n", (unsigned int)v0,(unsigned int)v1,(unsigned int)v2, text ); v0 = ROTL32(v0,16) - v2; v1 = ROTR32(v1,13) ^ v2; v2 = ROTL32(v2,17) + v1; v0 = ROTR32(v0, 2) + v1; v1 = ROTR32(v1,17) - v0; v2 = ROTR32(v2, 7) ^ v0; } STMT_END
#define CR_NATIVE 0x0D
#define DEBUG_i_FLAG 0x08000000
#define _IN_ADDR_T 
#define isGRAPH_uni(c) isGRAPH_uvchr(c)
#define __pure 
#define WTERMSIG(x) (_WSTATUS(x))
#define MACH_EXCEPTION_MASK (MACH_EXCEPTION_CODES | MACH_EXCEPTION_ERRORS)
#define PRIi64 __PRI_64_LENGTH_MODIFIER__ "i"
#define NGX_HTTP_SUBREQUEST_IN_MEMORY 2
#define PERL_ARGS_ASSERT_PERLIO_STDOUT 
#define PCRE2_INFO_ARGOPTIONS 1
#define NGX_HTTP_GZIP_PROXIED_NO_ETAG 0x0080
#define REENTRANT_PROTO_I_SB 36
#define REENTRANT_PROTO_I_SD 43
#define PERL_ARGS_ASSERT__IS_UTF8_PERL_IDSTART assert(p); assert(e)
#define ngx_cdecl 
#define QOS_MIN_RELATIVE_PRIORITY (-15)
#define PERL_MULTICONCAT_IX_NARGS 0
#define TASK_BASIC_INFO_COUNT (sizeof(task_basic_info_data_t) / sizeof(natural_t))
#define A_GETEXPAFTER 43
#define IPPROTO_RCCMON 10
#define x86_DEBUG_STATE_COUNT ((mach_msg_type_number_t) (sizeof(x86_debug_state_t)/sizeof(unsigned int)))
#define __FLT32_HAS_INFINITY__ 1
#define EXIT_SUCCESS 0
#define PERL_ARGS_ASSERT_PAD_ADD_NAME_PVN assert(namepv)
#define PCRE2_CONFIG_LINKSIZE 3
#define UNICODE_PAT_MOD 'u'
#define ROTR64(x,r) ( ( (U64)(x) << ( 64 - (r) ) ) | ( (U64)(x) >> (r) ) )
#define CPF_OVERWRITE 0x0001
#define case_4_SBOX32(hash,state,key) _SBOX32_CASE(4,hash,state,key)
#define __APPLE_API_UNSTABLE 
#define newFORM(a,b,c) Perl_newFORM(aTHX_ a,b,c)
#define _POSIX_SIGQUEUE_MAX 32
#define LOCK_SH 0x01
#define _PC_XATTR_SIZE_BITS 26
#define _CS_XBS5_LPBIG_OFFBIG_CFLAGS 32
#define LEX_STUFF_UTF8 0x00000001
#define AF_LINK 18
#define PERL_ARGS_ASSERT_SV_USEPVN_FLAGS assert(sv)
#define _CS_XBS5_ILP32_OFFBIG_CFLAGS 24
#define PERL_ARGS_ASSERT_WHICHSIG_PVN assert(sig)
#define KERN_INVALID_MEMORY_CONTROL 34
#define MACH_RCV_IN_PROGRESS_TIMED 0x10004011
#define NGX_USE_TIMER_EVENT 0x00000800
#define isWORDCHAR_lazy_if_safe(p,e,UTF) ((IN_BYTES || !UTF) ? isWORDCHAR(*(p)) : isWORDCHAR_utf8_safe((U8 *) p, (U8 *) e))
#define PCRE2_SPTR PCRE2_SUFFIX(PCRE2_SPTR)
#define HOST_LOCKD_PORT (5 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define PL_known_layers (vTHX->Iknown_layers)
#define pWARN_ALL (STRLEN *) &PL_WARN_ALL
#define PCRE2_ERROR_BACKSLASH_G_SYNTAX 157
#define PerlMem_calloc(num,size) calloc((num), (size))
#define PERL_ARGS_ASSERT_VIVIFY_DEFELEM assert(sv)
#define PL_vtbl_lvref PL_magic_vtables[want_vtbl_lvref]
#define snprintf(str,len,...) __builtin___snprintf_chk (str, len, 0, __darwin_obsz(str), __VA_ARGS__)
#define _SC_SIGQUEUE_MAX 51
#define FF_SPACE 7
#define ngx_queue_sentinel(h) (h)
#define LATIN1_TO_NATIVE(ch) (__ASSERT_(FITS_IN_8_BITS(ch)) ((U8) ((ch) | 0)))
#define PRId8 __PRI_8_LENGTH_MODIFIER__ "d"
#define OS_NOT_TAIL_CALLED 
#define PCRE2_NO_AUTO_POSSESS 0x00004000u
#define case_181_SBOX32(hash,state,key) 
#define _NGX_LIST_H_INCLUDED_ 
#define PERL_ARGS_ASSERT_NEWSV_TYPE 
#define savesvpv(a) Perl_savesvpv(aTHX_ a)
#define case_184_SBOX32(hash,state,key) 
#define TASK_MAX_SPECIAL_PORT TASK_RESOURCE_NOTIFY_PORT
#define XOPf_xop_desc 0x02
#define LOCK_UN 0x08
#define MEMORY_OBJECT_ATTR_INFO_COUNT ((mach_msg_type_number_t) (sizeof(memory_object_attr_info_data_t)/sizeof(int)))
#define HAS_RECVMSG 
#define NL_LANGMAX 14
#define NOTE_FFLAGSMASK 0x00ffffff
#define _generic_toLOWER_LC(c,function,cast) (! FITS_IN_8_BITS(c) ? (c) : (IN_UTF8_CTYPE_LOCALE) ? PL_latin1_lc[ (U8) (c) ] : (cast)function((cast)(c)))
#define PERL_ARGS_ASSERT_PARSE_BARESTMT 
#define ngx_add_timer ngx_event_add_timer
#define PERL_ARGS_ASSERT_SHARE_HEK assert(str)
#define SAVELONG(l) save_long((long*)&(l))
#define PL_savestack_ix (vTHX->Isavestack_ix)
#define what_MULTI_CHAR_FOLD_utf8_safe_part0_(s,e) ( ( 0x81 == ((const U8*)s)[1] ) ? ( ( ( 0xCC == ((const U8*)s)[2] ) && ( 0x93 == ((const U8*)s)[3] ) ) ? 0x1FE4 : 0 ) : ( 0x85 == ((const U8*)s)[1] ) ? ( ( 0xCC == ((const U8*)s)[2] ) ? ( ( 0x88 == ((const U8*)s)[3] ) ? ( ( 0xCC == ((const U8*)s)[4] ) ? ( ( 0x80 == ((const U8*)s)[5] ) ? 0x1FE2 : ( 0x81 == ((const U8*)s)[5] ) ? 0x3B0 : 0 ) : ( ( 0xCD == ((const U8*)s)[4] ) && ( 0x82 == ((const U8*)s)[5] ) ) ? 0x1FE7 : 0 ) : ( 0x93 == ((const U8*)s)[3] ) ? ( ( 0xCC == ((const U8*)s)[4] ) ? ( ( 0x80 == ((const U8*)s)[5] ) ? 0x1F52 : ( 0x81 == ((const U8*)s)[5] ) ? 0x1F54 : 0x1F50 ) : ( ( 0xCD == ((const U8*)s)[4] ) && ( 0x82 == ((const U8*)s)[5] ) ) ? 0x1F56 : 0x1F50 ) : 0 ) : ( ( 0xCD == ((const U8*)s)[2] ) && ( 0x82 == ((const U8*)s)[3] ) ) ? 0x1FE6 : 0 ) : ( 0x89 == ((const U8*)s)[1] ) ? ( ( 0xCD == ((const U8*)s)[2] ) ? ( ( 0x82 == ((const U8*)s)[3] ) ? ( ( ( 0xCE == ((const U8*)s)[4] ) && ( 0xB9 == ((const U8*)s)[5] ) ) ? 0x1FF7 : 0x1FF6 ) : 0 ) : ( ( 0xCE == ((const U8*)s)[2] ) && ( 0xB9 == ((const U8*)s)[3] ) ) ? 0x1FF3 : 0 ) : ( ( ( 0x8E == ((const U8*)s)[1] ) && ( 0xCE == ((const U8*)s)[2] ) ) && ( 0xB9 == ((const U8*)s)[3] ) ) ? 0x1FF4 : 0 )
#define PCRE2_ERROR_BAD_OPTIONS 117
#define HAS_SOCKADDR_SA_LEN 
#define KERN_RAGEVNODE 68
#define _WSTOPPED 0177
#define SVf_NOK 0x00000200
#define OP_REFCNT_TERM MUTEX_DESTROY(&PL_op_mutex)
#define NGX_CONF_TAKE2 0x00000004
#define L_R_TZSET 
#define ZAPHOD32_WARN6(pat,v0,v1,v2,v3,v4,v5) 
#define Perl_debug_log PerlIO_stderr()
#define putchar_unlocked(x) putc_unlocked(x, stdout)
#define __INTPTR_WIDTH__ 64
#define SvREFCNT_inc_simple_NN(sv) (++(SvREFCNT(sv)),MUTABLE_SV(sv))
#define PERL_ARGS_ASSERT_FOLDEQ_UTF8_FLAGS assert(s1); assert(s2)
#define OS_ENUM(_name,_type,...) typedef _type _name ##_t; enum { __VA_ARGS__ }
#define LATIN_SMALL_LETTER_LONG_S 0x017F
#define ngx_conf_init_ptr_value(conf,default) if (conf == NGX_CONF_UNSET_PTR) { conf = default; }
#define XOPd_xop_name PL_op_name[OP_CUSTOM]
#define INADDR_MAX_LOCAL_GROUP (u_int32_t)0xe00000ff
#define FP_STATE_BYTES 512
#define what_MULTI_CHAR_FOLD_utf8_safe_part1_(s,e) ( ( 0xD5 == ((const U8*)s)[0] ) ? ( ( 0xA5 == ((const U8*)s)[1] ) ? ( ( ( 0xD6 == ((const U8*)s)[2] ) && ( 0x82 == ((const U8*)s)[3] ) ) ? 0x587 : 0 ) : ( 0xB4 == ((const U8*)s)[1] ) ? ( ( 0xD5 == ((const U8*)s)[2] ) ? ( ( 0xA5 == ((const U8*)s)[3] ) ? 0xFB14 : ( 0xAB == ((const U8*)s)[3] ) ? 0xFB15 : ( 0xAD == ((const U8*)s)[3] ) ? 0xFB17 : ( 0xB6 == ((const U8*)s)[3] ) ? 0xFB13 : 0 ) : 0 ) : ( ( ( 0xBE == ((const U8*)s)[1] ) && ( 0xD5 == ((const U8*)s)[2] ) ) && ( 0xB6 == ((const U8*)s)[3] ) ) ? 0xFB16 : 0 ) : ( 0xE1 == ((const U8*)s)[0] ) ? ( ( 0xBC == ((const U8*)s)[1] ) ? ( ( 0x80 == ((const U8*)s)[2] ) ? ( ( ( 0xCE == ((const U8*)s)[3] ) && ( 0xB9 == ((const U8*)s)[4] ) ) ? 0x1F80 : 0 ) : ( 0x81 == ((const U8*)s)[2] ) ? ( ( ( 0xCE == ((const U8*)s)[3] ) && ( 0xB9 == ((const U8*)s)[4] ) ) ? 0x1F81 : 0 ) : ( 0x82 == ((const U8*)s)[2] ) ? ( ( ( 0xCE == ((const U8*)s)[3] ) && ( 0xB9 == ((const U8*)s)[4] ) ) ? 0x1F82 : 0 ) : ( 0x83 == ((const U8*)s)[2] ) ? ( ( ( 0xCE == ((const U8*)s)[3] ) && ( 0xB9 == ((const U8*)s)[4] ) ) ? 0x1F83 : 0 ) : ( 0x84 == ((const U8*)s)[2] ) ? ( ( ( 0xCE == ((const U8*)s)[3] ) && ( 0xB9 == ((const U8*)s)[4] ) ) ? 0x1F84 : 0 ) : ( 0x85 == ((const U8*)s)[2] ) ? ( ( ( 0xCE == ((const U8*)s)[3] ) && ( 0xB9 == ((const U8*)s)[4] ) ) ? 0x1F85 : 0 ) : ( 0x86 == ((const U8*)s)[2] ) ? ( ( ( 0xCE == ((const U8*)s)[3] ) && ( 0xB9 == ((const U8*)s)[4] ) ) ? 0x1F86 : 0 ) : ( 0x87 == ((const U8*)s)[2] ) ? ( ( ( 0xCE == ((const U8*)s)[3] ) && ( 0xB9 == ((const U8*)s)[4] ) ) ? 0x1F87 : 0 ) : ( 0xA0 == ((const U8*)s)[2] ) ? ( ( ( 0xCE == ((const U8*)s)[3] ) && ( 0xB9 == ((const U8*)s)[4] ) ) ? 0x1F90 : 0 ) : ( 0xA1 == ((const U8*)s)[2] ) ? ( ( ( 0xCE == ((const U8*)s)[3] ) && ( 0xB9 == ((const U8*)s)[4] ) ) ? 0x1F91 : 0 ) : ( 0xA2 == ((const U8*)s)[2] ) ? ( ( ( 0xCE == ((const U8*)s)[3] ) && ( 0xB9 == ((const U8*)s)[4] ) ) ? 0x1F92 : 0 ) : ( 0xA3 == ((const U8*)s)[2] ) ? ( ( ( 0xCE == ((const U8*)s)[3] ) && ( 0xB9 == ((const U8*)s)[4] ) ) ? 0x1F93 : 0 ) : ( 0xA4 == ((const U8*)s)[2] ) ? ( ( ( 0xCE == ((const U8*)s)[3] ) && ( 0xB9 == ((const U8*)s)[4] ) ) ? 0x1F94 : 0 ) : ( 0xA5 == ((const U8*)s)[2] ) ? ( ( ( 0xCE == ((const U8*)s)[3] ) && ( 0xB9 == ((const U8*)s)[4] ) ) ? 0x1F95 : 0 ) : ( 0xA6 == ((const U8*)s)[2] ) ? ( ( ( 0xCE == ((const U8*)s)[3] ) && ( 0xB9 == ((const U8*)s)[4] ) ) ? 0x1F96 : 0 ) : ( ( ( 0xA7 == ((const U8*)s)[2] ) && ( 0xCE == ((const U8*)s)[3] ) ) && ( 0xB9 == ((const U8*)s)[4] ) ) ? 0x1F97 : 0 ) : ( 0xBD == ((const U8*)s)[1] ) ? ( ( 0xA0 == ((const U8*)s)[2] ) ? ( ( ( 0xCE == ((const U8*)s)[3] ) && ( 0xB9 == ((const U8*)s)[4] ) ) ? 0x1FA0 : 0 ) : ( 0xA1 == ((const U8*)s)[2] ) ? ( ( ( 0xCE == ((const U8*)s)[3] ) && ( 0xB9 == ((const U8*)s)[4] ) ) ? 0x1FA1 : 0 ) : ( 0xA2 == ((const U8*)s)[2] ) ? ( ( ( 0xCE == ((const U8*)s)[3] ) && ( 0xB9 == ((const U8*)s)[4] ) ) ? 0x1FA2 : 0 ) : ( 0xA3 == ((const U8*)s)[2] ) ? ( ( ( 0xCE == ((const U8*)s)[3] ) && ( 0xB9 == ((const U8*)s)[4] ) ) ? 0x1FA3 : 0 ) : ( 0xA4 == ((const U8*)s)[2] ) ? ( ( ( 0xCE == ((const U8*)s)[3] ) && ( 0xB9 == ((const U8*)s)[4] ) ) ? 0x1FA4 : 0 ) : ( 0xA5 == ((const U8*)s)[2] ) ? ( ( ( 0xCE == ((const U8*)s)[3] ) && ( 0xB9 == ((const U8*)s)[4] ) ) ? 0x1FA5 : 0 ) : ( 0xA6 == ((const U8*)s)[2] ) ? ( ( ( 0xCE == ((const U8*)s)[3] ) && ( 0xB9 == ((const U8*)s)[4] ) ) ? 0x1FA6 : 0 ) : ( 0xA7 == ((const U8*)s)[2] ) ? ( ( ( 0xCE == ((const U8*)s)[3] ) && ( 0xB9 == ((const U8*)s)[4] ) ) ? 0x1FA7 : 0 ) : ( 0xB0 == ((const U8*)s)[2] ) ? ( ( ( 0xCE == ((const U8*)s)[3] ) && ( 0xB9 == ((const U8*)s)[4] ) ) ? 0x1FB2 : 0 ) : ( 0xB4 == ((const U8*)s)[2] ) ? ( ( ( 0xCE == ((const U8*)s)[3] ) && ( 0xB9 == ((const U8*)s)[4] ) ) ? 0x1FC2 : 0 ) : ( ( ( 0xBC == ((const U8*)s)[2] ) && ( 0xCE == ((const U8*)s)[3] ) ) && ( 0xB9 == ((const U8*)s)[4] ) ) ? 0x1FF2 : 0 ) : 0 ) : 0 )
#define CvOUTSIDE_SEQ(sv) ((XPVCV*)MUTABLE_PTR(SvANY(sv)))->xcv_outside_seq
#define MAP_MEM_GRAB_SECLUDED 0x008000
#define LONG_MIN (-LONG_MAX - 1L)
#define NGX_INT_T_LEN NGX_INT64_LEN
#define get_cvn_flags(a,b,c) Perl_get_cvn_flags(aTHX_ a,b,c)
#define HOST_VM_INFO64_COUNT ((mach_msg_type_number_t) (sizeof(vm_statistics64_data_t)/sizeof(integer_t)))
#define KERN_CODE_SELECTOR 0x0008
#define GIMME (PL_op->op_flags & OPf_WANT ? ((PL_op->op_flags & OPf_WANT) == OPf_WANT_LIST ? G_ARRAY : G_SCALAR) : dowantarray())
#define PL_vtbl_checkcall PL_magic_vtables[want_vtbl_checkcall]
#define MPG_FLAGS_MOD_REFS_PINNED_DEALLOC (0x01ull << 56)
#define CTL_MAXNAME 12
#define _BSD_SETJMP_H 
#define IP_NAT__XXX 55
#define PERL_ARGS_ASSERT_SEED 
#define _NGX_SHMTX_H_INCLUDED_ 
#define what_MULTI_CHAR_FOLD_utf8_safe_part2_(s,e) ( ( 0x81 == ((const U8*)s)[1] ) ? ( ( ( 0xCC == ((const U8*)s)[2] ) && ( 0x93 == ((const U8*)s)[3] ) ) ? 0x1FE4 : 0 ) : ( 0x85 == ((const U8*)s)[1] ) ? ( ( 0xCC == ((const U8*)s)[2] ) ? ( ( 0x93 == ((const U8*)s)[3] ) ? 0x1F50 : 0 ) : ( ( 0xCD == ((const U8*)s)[2] ) && ( 0x82 == ((const U8*)s)[3] ) ) ? 0x1FE6 : 0 ) : ( 0x89 == ((const U8*)s)[1] ) ? ( ( 0xCD == ((const U8*)s)[2] ) ? ( ( 0x82 == ((const U8*)s)[3] ) ? 0x1FF6 : 0 ) : ( ( 0xCE == ((const U8*)s)[2] ) && ( 0xB9 == ((const U8*)s)[3] ) ) ? 0x1FF3 : 0 ) : ( ( ( 0x8E == ((const U8*)s)[1] ) && ( 0xCE == ((const U8*)s)[2] ) ) && ( 0xB9 == ((const U8*)s)[3] ) ) ? 0x1FF4 : 0 )
#define PERL_ARGS_ASSERT_RE_COMPILE assert(pattern)
#define REENTRANT_PROTO_I_CSD 20
#define CxFOREACH(c) ( CxTYPE(cx) >= CXt_LOOP_ARY && CxTYPE(cx) <= CXt_LOOP_LIST)
#define my_pclose(a) Perl_my_pclose(aTHX_ a)
#define INET_ADDRSTRLEN 16
#define NOTE_EXIT 0x80000000
#define _XBS5_LP64_OFF64 __LP64_OFF64
#define ANGSTROM_SIGN 0x212B
#define SvIMMORTAL(sv) ( SvREADONLY(sv) && (SvIMMORTAL_INTERP(sv) || (sv) == &PL_sv_placeholder))
#define case_95_SBOX32(hash,state,key) 
#define PERL_ARGS_ASSERT_CK_WARNER assert(pat)
#define IPPROTO_SDRP 42
#define COND_DESTROY(c) STMT_START { int _eC_; if ((_eC_ = pthread_cond_destroy((c)))) Perl_croak_nocontext("panic: COND_DESTROY (%d) [%s:%d]", _eC_, __FILE__, __LINE__); } STMT_END
#define FP_SOFT 1
#define what_MULTI_CHAR_FOLD_utf8_safe_part3_(s,e) ( ( 0xD5 == ((const U8*)s)[0] ) ? ( ( 0xA5 == ((const U8*)s)[1] ) ? ( ( ( 0xD6 == ((const U8*)s)[2] ) && ( 0x82 == ((const U8*)s)[3] ) ) ? 0x587 : 0 ) : ( 0xB4 == ((const U8*)s)[1] ) ? ( ( 0xD5 == ((const U8*)s)[2] ) ? ( ( 0xA5 == ((const U8*)s)[3] ) ? 0xFB14 : ( 0xAB == ((const U8*)s)[3] ) ? 0xFB15 : ( 0xAD == ((const U8*)s)[3] ) ? 0xFB17 : ( 0xB6 == ((const U8*)s)[3] ) ? 0xFB13 : 0 ) : 0 ) : ( ( ( 0xBE == ((const U8*)s)[1] ) && ( 0xD5 == ((const U8*)s)[2] ) ) && ( 0xB6 == ((const U8*)s)[3] ) ) ? 0xFB16 : 0 ) : ( 0xE1 == ((const U8*)s)[0] ) ? ( ( 0xBC == ((const U8*)s)[1] ) ? ( ( 0x80 == ((const U8*)s)[2] ) ? ( ( ( 0xCE == ((const U8*)s)[3] ) && ( 0xB9 == ((const U8*)s)[4] ) ) ? 0x1F80 : 0 ) : ( 0x81 == ((const U8*)s)[2] ) ? ( ( ( 0xCE == ((const U8*)s)[3] ) && ( 0xB9 == ((const U8*)s)[4] ) ) ? 0x1F81 : 0 ) : ( 0x82 == ((const U8*)s)[2] ) ? ( ( ( 0xCE == ((const U8*)s)[3] ) && ( 0xB9 == ((const U8*)s)[4] ) ) ? 0x1F82 : 0 ) : ( 0x83 == ((const U8*)s)[2] ) ? ( ( ( 0xCE == ((const U8*)s)[3] ) && ( 0xB9 == ((const U8*)s)[4] ) ) ? 0x1F83 : 0 ) : ( 0x84 == ((const U8*)s)[2] ) ? ( ( ( 0xCE == ((const U8*)s)[3] ) && ( 0xB9 == ((const U8*)s)[4] ) ) ? 0x1F84 : 0 ) : ( 0x85 == ((const U8*)s)[2] ) ? ( ( ( 0xCE == ((const U8*)s)[3] ) && ( 0xB9 == ((const U8*)s)[4] ) ) ? 0x1F85 : 0 ) : ( 0x86 == ((const U8*)s)[2] ) ? ( ( ( 0xCE == ((const U8*)s)[3] ) && ( 0xB9 == ((const U8*)s)[4] ) ) ? 0x1F86 : 0 ) : ( 0x87 == ((const U8*)s)[2] ) ? ( ( ( 0xCE == ((const U8*)s)[3] ) && ( 0xB9 == ((const U8*)s)[4] ) ) ? 0x1F87 : 0 ) : ( 0xA0 == ((const U8*)s)[2] ) ? ( ( ( 0xCE == ((const U8*)s)[3] ) && ( 0xB9 == ((const U8*)s)[4] ) ) ? 0x1F90 : 0 ) : ( 0xA1 == ((const U8*)s)[2] ) ? ( ( ( 0xCE == ((const U8*)s)[3] ) && ( 0xB9 == ((const U8*)s)[4] ) ) ? 0x1F91 : 0 ) : ( 0xA2 == ((const U8*)s)[2] ) ? ( ( ( 0xCE == ((const U8*)s)[3] ) && ( 0xB9 == ((const U8*)s)[4] ) ) ? 0x1F92 : 0 ) : ( 0xA3 == ((const U8*)s)[2] ) ? ( ( ( 0xCE == ((const U8*)s)[3] ) && ( 0xB9 == ((const U8*)s)[4] ) ) ? 0x1F93 : 0 ) : ( 0xA4 == ((const U8*)s)[2] ) ? ( ( ( 0xCE == ((const U8*)s)[3] ) && ( 0xB9 == ((const U8*)s)[4] ) ) ? 0x1F94 : 0 ) : ( 0xA5 == ((const U8*)s)[2] ) ? ( ( ( 0xCE == ((const U8*)s)[3] ) && ( 0xB9 == ((const U8*)s)[4] ) ) ? 0x1F95 : 0 ) : ( 0xA6 == ((const U8*)s)[2] ) ? ( ( ( 0xCE == ((const U8*)s)[3] ) && ( 0xB9 == ((const U8*)s)[4] ) ) ? 0x1F96 : 0 ) : ( ( ( 0xA7 == ((const U8*)s)[2] ) && ( 0xCE == ((const U8*)s)[3] ) ) && ( 0xB9 == ((const U8*)s)[4] ) ) ? 0x1F97 : 0 ) : ( 0xBD == ((const U8*)s)[1] ) ? ( ( 0xA0 == ((const U8*)s)[2] ) ? ( ( ( 0xCE == ((const U8*)s)[3] ) && ( 0xB9 == ((const U8*)s)[4] ) ) ? 0x1FA0 : 0 ) : ( 0xA1 == ((const U8*)s)[2] ) ? ( ( ( 0xCE == ((const U8*)s)[3] ) && ( 0xB9 == ((const U8*)s)[4] ) ) ? 0x1FA1 : 0 ) : ( 0xA2 == ((const U8*)s)[2] ) ? ( ( ( 0xCE == ((const U8*)s)[3] ) && ( 0xB9 == ((const U8*)s)[4] ) ) ? 0x1FA2 : 0 ) : ( 0xA3 == ((const U8*)s)[2] ) ? ( ( ( 0xCE == ((const U8*)s)[3] ) && ( 0xB9 == ((const U8*)s)[4] ) ) ? 0x1FA3 : 0 ) : ( 0xA4 == ((const U8*)s)[2] ) ? ( ( ( 0xCE == ((const U8*)s)[3] ) && ( 0xB9 == ((const U8*)s)[4] ) ) ? 0x1FA4 : 0 ) : ( 0xA5 == ((const U8*)s)[2] ) ? ( ( ( 0xCE == ((const U8*)s)[3] ) && ( 0xB9 == ((const U8*)s)[4] ) ) ? 0x1FA5 : 0 ) : ( 0xA6 == ((const U8*)s)[2] ) ? ( ( ( 0xCE == ((const U8*)s)[3] ) && ( 0xB9 == ((const U8*)s)[4] ) ) ? 0x1FA6 : 0 ) : ( 0xA7 == ((const U8*)s)[2] ) ? ( ( ( 0xCE == ((const U8*)s)[3] ) && ( 0xB9 == ((const U8*)s)[4] ) ) ? 0x1FA7 : 0 ) : ( 0xB0 == ((const U8*)s)[2] ) ? ( ( ( 0xCE == ((const U8*)s)[3] ) && ( 0xB9 == ((const U8*)s)[4] ) ) ? 0x1FB2 : 0 ) : ( 0xB4 == ((const U8*)s)[2] ) ? ( ( ( 0xCE == ((const U8*)s)[3] ) && ( 0xB9 == ((const U8*)s)[4] ) ) ? 0x1FC2 : 0 ) : ( ( ( 0xBC == ((const U8*)s)[2] ) && ( 0xCE == ((const U8*)s)[3] ) ) && ( 0xB9 == ((const U8*)s)[4] ) ) ? 0x1FF2 : 0 ) : 0 ) : 0 )
#define SBOX32_WARN2(pat,v0,v1) 
#define SBOX32_WARN3(pat,v0,v1,v2) 
#define SBOX32_WARN4(pat,v0,v1,v2,v3) 
#define SBOX32_WARN6(pat,v0,v1,v2,v3,v4,v5) 
#define PRIi8 __PRI_8_LENGTH_MODIFIER__ "i"
#define KERN_CLOCKRATE 12
#define _PC_MIN_HOLE_SIZE 27
#define ngx_http_upstream_rr_peers_rlock(peers) if (peers->shpool) { ngx_rwlock_rlock(&peers->rwlock); }
#define HOST_VM_INFO_COUNT ((mach_msg_type_number_t) (sizeof(vm_statistics_data_t)/sizeof(integer_t)))
#define NGX_MAX_PATH PATH_MAX
#define USE_ITHREADS 
#define x86_AVX512_STATE32 19
#define MACH_RCV_PORT_CHANGED 0x10004006
#define PERL_ARGS_ASSERT_REENTRANT_RETRY assert(f)
#define isDIGIT_utf8_safe(p,e) _generic_utf8_safe_no_upper_latin1(_CC_DIGIT, p, e, _is_utf8_FOO(_CC_DIGIT, p, e))
#define CALL_CHECKER_REQUIRE_GV MGf_REQUIRE_GV
#define SO_WANTMORE 0x4000
#define what_MULTI_CHAR_FOLD_utf8_safe_part4_(s,e) ( ( ( ((const U8*)s)[0] & 0xDF ) == 'A' ) ? ( ( ( 0xCA == ((const U8*)s)[1] ) && ( 0xBE == ((const U8*)s)[2] ) ) ? 0x1E9A : 0 ) : ( ( ((const U8*)s)[0] & 0xDF ) == 'F' ) ? ( ( ( ((const U8*)s)[1] & 0xDF ) == 'F' ) ? ( ( ( ((const U8*)s)[2] & 0xDF ) == 'I' ) ? 0xFB03 : ( ( ((const U8*)s)[2] & 0xDF ) == 'L' ) ? 0xFB04 : 0xFB00 ) : ( ( ((const U8*)s)[1] & 0xDF ) == 'I' ) ? 0xFB01 : ( ( ((const U8*)s)[1] & 0xDF ) == 'L' ) ? 0xFB02 : 0 ) : ( ( ((const U8*)s)[0] & 0xDF ) == 'H' ) ? ( ( ( 0xCC == ((const U8*)s)[1] ) && ( 0xB1 == ((const U8*)s)[2] ) ) ? 0x1E96 : 0 ) : ( ( ((const U8*)s)[0] & 0xDF ) == 'I' ) ? ( ( ( 0xCC == ((const U8*)s)[1] ) && ( 0x87 == ((const U8*)s)[2] ) ) ? 0x130 : 0 ) : ( ( ((const U8*)s)[0] & 0xDF ) == 'J' ) ? ( ( ( 0xCC == ((const U8*)s)[1] ) && ( 0x8C == ((const U8*)s)[2] ) ) ? 0x1F0 : 0 ) : ( ( ((const U8*)s)[0] & 0xDF ) == 'S' ) ? ( ( ( ((const U8*)s)[1] & 0xDF ) == 'S' ) ? 0xDF : ( ( ((const U8*)s)[1] & 0xDF ) == 'T' ) ? 0xFB05 : ( ( 0xC5 == ((const U8*)s)[1] ) && ( 0xBF == ((const U8*)s)[2] ) ) ? 0xDF : 0 ) : ( ( ((const U8*)s)[0] & 0xDF ) == 'T' ) ? ( ( ( 0xCC == ((const U8*)s)[1] ) && ( 0x88 == ((const U8*)s)[2] ) ) ? 0x1E97 : 0 ) : ( ( ((const U8*)s)[0] & 0xDF ) == 'W' ) ? ( ( ( 0xCC == ((const U8*)s)[1] ) && ( 0x8A == ((const U8*)s)[2] ) ) ? 0x1E98 : 0 ) : ( ( ((const U8*)s)[0] & 0xDF ) == 'Y' ) ? ( ( ( 0xCC == ((const U8*)s)[1] ) && ( 0x8A == ((const U8*)s)[2] ) ) ? 0x1E99 : 0 ) : ( 0xC5 == ((const U8*)s)[0] ) ? ( ( 0xBF == ((const U8*)s)[1] ) ? ( ( ( ((const U8*)s)[2] & 0xDF ) == 'S' ) ? 0xDF : ( ( ((const U8*)s)[2] & 0xDF ) == 'T' ) ? 0xFB05 : ( ( 0xC5 == ((const U8*)s)[2] ) && ( 0xBF == ((const U8*)s)[3] ) ) ? 0xDF : 0 ) : 0 ) : ( 0xCA == ((const U8*)s)[0] ) ? ( ( ( 0xBC == ((const U8*)s)[1] ) && ( ( ((const U8*)s)[2] & 0xDF ) == 'N' ) ) ? 0x149 : 0 ) : ( 0xCE == ((const U8*)s)[0] ) ? ( ( 0xAC == ((const U8*)s)[1] ) ? ( ( ( 0xCE == ((const U8*)s)[2] ) && ( 0xB9 == ((const U8*)s)[3] ) ) ? 0x1FB4 : 0 ) : ( 0xAE == ((const U8*)s)[1] ) ? ( ( ( 0xCE == ((const U8*)s)[2] ) && ( 0xB9 == ((const U8*)s)[3] ) ) ? 0x1FC4 : 0 ) : ( 0xB1 == ((const U8*)s)[1] ) ? ( ( 0xCD == ((const U8*)s)[2] ) ? ( ( 0x82 == ((const U8*)s)[3] ) ? 0x1FB6 : 0 ) : ( ( 0xCE == ((const U8*)s)[2] ) && ( 0xB9 == ((const U8*)s)[3] ) ) ? 0x1FB3 : 0 ) : ( 0xB7 == ((const U8*)s)[1] ) ? ( ( 0xCD == ((const U8*)s)[2] ) ? ( ( 0x82 == ((const U8*)s)[3] ) ? 0x1FC6 : 0 ) : ( ( 0xCE == ((const U8*)s)[2] ) && ( 0xB9 == ((const U8*)s)[3] ) ) ? 0x1FC3 : 0 ) : ( ( ( 0xB9 == ((const U8*)s)[1] ) && ( 0xCD == ((const U8*)s)[2] ) ) && ( 0x82 == ((const U8*)s)[3] ) ) ? 0x1FD6 : 0 ) : ( 0xCF == ((const U8*)s)[0] ) ? ( ( 0x81 == ((const U8*)s)[1] ) ? ( ( ( 0xCC == ((const U8*)s)[2] ) && ( 0x93 == ((const U8*)s)[3] ) ) ? 0x1FE4 : 0 ) : ( 0x85 == ((const U8*)s)[1] ) ? ( ( 0xCC == ((const U8*)s)[2] ) ? ( ( 0x93 == ((const U8*)s)[3] ) ? 0x1F50 : 0 ) : ( ( 0xCD == ((const U8*)s)[2] ) && ( 0x82 == ((const U8*)s)[3] ) ) ? 0x1FE6 : 0 ) : ( 0x89 == ((const U8*)s)[1] ) ? ( ( 0xCD == ((const U8*)s)[2] ) ? ( ( 0x82 == ((const U8*)s)[3] ) ? 0x1FF6 : 0 ) : ( ( 0xCE == ((const U8*)s)[2] ) && ( 0xB9 == ((const U8*)s)[3] ) ) ? 0x1FF3 : 0 ) : ( ( ( 0x8E == ((const U8*)s)[1] ) && ( 0xCE == ((const U8*)s)[2] ) ) && ( 0xB9 == ((const U8*)s)[3] ) ) ? 0x1FF4 : 0 ) : ( 0xD5 == ((const U8*)s)[0] ) ? ( ( 0xA5 == ((const U8*)s)[1] ) ? ( ( ( 0xD6 == ((const U8*)s)[2] ) && ( 0x82 == ((const U8*)s)[3] ) ) ? 0x587 : 0 ) : ( 0xB4 == ((const U8*)s)[1] ) ? ( ( 0xD5 == ((const U8*)s)[2] ) ? ( ( 0xA5 == ((const U8*)s)[3] ) ? 0xFB14 : ( 0xAB == ((const U8*)s)[3] ) ? 0xFB15 : ( 0xAD == ((const U8*)s)[3] ) ? 0xFB17 : ( 0xB6 == ((const U8*)s)[3] ) ? 0xFB13 : 0 ) : 0 ) : ( ( ( 0xBE == ((const U8*)s)[1] ) && ( 0xD5 == ((const U8*)s)[2] ) ) && ( 0xB6 == ((const U8*)s)[3] ) ) ? 0xFB16 : 0 ) : 0 )
#define PERL_ARGS_ASSERT_UTF8_LENGTH assert(s); assert(e)
#define KERN_THALTSTACK 63
#define MACH_RCV_SYNC_PEEK 0x00008000
#define KERN_MAXFILES 7
#define SCNiLEAST16 SCNi16
#define RXp_SUBBEG(prog) (prog->subbeg)
#define P_DIRTY_IS_DIRTY (P_DIRTY | P_DIRTY_SHUTDOWN)
#define _PASSWORD_NOGID 0x02
#define _NGX_CRC32_H_INCLUDED_ 
#define SING 2
#define PERL_ARGS_ASSERT_SV_CATSV_FLAGS assert(dsv)
#define LC_TIME_MASK (1 << 5)
#define _MACH_VM_ATTRIBUTES_H_ 
#define PERL_ARGS_ASSERT_SV_UTF8_DECODE assert(sv)
#define ngx_strcmp(s1,s2) strcmp((const char *) s1, (const char *) s2)
#define VM_SYNC_ASYNCHRONOUS ((vm_sync_t) 0x01)
#define HvLASTRAND_get(hv) (SvOOK(hv) ? HvAUX(hv)->xhv_last_rand : 0)
#define what_MULTI_CHAR_FOLD_utf8_safe_part5_(s,e) ( ((e)-(s) > 2) ? ( ( ( ((const U8*)s)[0] & 0xDF ) == 'A' ) ? ( ( ( 0xCA == ((const U8*)s)[1] ) && ( 0xBE == ((const U8*)s)[2] ) ) ? 0x1E9A : 0 ) : ( ( ((const U8*)s)[0] & 0xDF ) == 'F' ) ? ( ( ( ((const U8*)s)[1] & 0xDF ) == 'F' ) ? ( ( ( ((const U8*)s)[2] & 0xDF ) == 'I' ) ? 0xFB03 : ( ( ((const U8*)s)[2] & 0xDF ) == 'L' ) ? 0xFB04 : 0xFB00 ) : ( ( ((const U8*)s)[1] & 0xDF ) == 'I' ) ? 0xFB01 : ( ( ((const U8*)s)[1] & 0xDF ) == 'L' ) ? 0xFB02 : 0 ) : ( ( ((const U8*)s)[0] & 0xDF ) == 'H' ) ? ( ( ( 0xCC == ((const U8*)s)[1] ) && ( 0xB1 == ((const U8*)s)[2] ) ) ? 0x1E96 : 0 ) : ( ( ((const U8*)s)[0] & 0xDF ) == 'I' ) ? ( ( ( 0xCC == ((const U8*)s)[1] ) && ( 0x87 == ((const U8*)s)[2] ) ) ? 0x130 : 0 ) : ( ( ((const U8*)s)[0] & 0xDF ) == 'J' ) ? ( ( ( 0xCC == ((const U8*)s)[1] ) && ( 0x8C == ((const U8*)s)[2] ) ) ? 0x1F0 : 0 ) : ( ( ((const U8*)s)[0] & 0xDF ) == 'S' ) ? ( ( ( ((const U8*)s)[1] & 0xDF ) == 'S' ) ? 0xDF : ( ( ((const U8*)s)[1] & 0xDF ) == 'T' ) ? 0xFB05 : ( ( 0xC5 == ((const U8*)s)[1] ) && ( 0xBF == ((const U8*)s)[2] ) ) ? 0xDF : 0 ) : ( ( ((const U8*)s)[0] & 0xDF ) == 'T' ) ? ( ( ( 0xCC == ((const U8*)s)[1] ) && ( 0x88 == ((const U8*)s)[2] ) ) ? 0x1E97 : 0 ) : ( ( ((const U8*)s)[0] & 0xDF ) == 'W' ) ? ( ( ( 0xCC == ((const U8*)s)[1] ) && ( 0x8A == ((const U8*)s)[2] ) ) ? 0x1E98 : 0 ) : ( ( ((const U8*)s)[0] & 0xDF ) == 'Y' ) ? ( ( ( 0xCC == ((const U8*)s)[1] ) && ( 0x8A == ((const U8*)s)[2] ) ) ? 0x1E99 : 0 ) : ( 0xC5 == ((const U8*)s)[0] ) ? ( ( 0xBF == ((const U8*)s)[1] ) ? ( ( ( ((const U8*)s)[2] & 0xDF ) == 'S' ) ? 0xDF : ( ( ((const U8*)s)[2] & 0xDF ) == 'T' ) ? 0xFB05 : 0 ) : 0 ) : ( ( ( 0xCA == ((const U8*)s)[0] ) && ( 0xBC == ((const U8*)s)[1] ) ) && ( ( ((const U8*)s)[2] & 0xDF ) == 'N' ) ) ? 0x149 : 0 ): ((e)-(s) > 1) ? ( ( ( ((const U8*)s)[0] & 0xDF ) == 'F' ) ? ( ( ( ((const U8*)s)[1] & 0xDF ) == 'F' ) ? 0xFB00 : ( ( ((const U8*)s)[1] & 0xDF ) == 'I' ) ? 0xFB01 : ( ( ((const U8*)s)[1] & 0xDF ) == 'L' ) ? 0xFB02 : 0 ) : ( ( ((const U8*)s)[0] & 0xDF ) == 'S' ) ? ( ( ( ((const U8*)s)[1] & 0xDF ) == 'S' ) ? 0xDF : ( ( ((const U8*)s)[1] & 0xDF ) == 'T' ) ? 0xFB05 : 0 ) : 0 ) : 0 )
#define ngx_set_file_time_n "utimes()"
#define PERL_ARGS_ASSERT_MY_SNPRINTF assert(buffer); assert(format)
#define HAS_SYSCALL_PROTO 
#define PL_dump_re_max_len (vTHX->Idump_re_max_len)
#define PL_psig_ptr (vTHX->Ipsig_ptr)
#define NGX_HAVE_IP_RECVDSTADDR 1
#define SIGABRT 6
#define _GCC_WRAP_STDINT_H 
#define TASK_FLAVOR_NAME 3
#define I_SYSLOG 
#define AUDIT_TRIGGER_LOW_SPACE 1
#define TOPp1s (*(sp+1))
#define KERN_LOCK_OWNED_SELF 41
#define Perl_isinf(x) isinf(x)
#define case_223_SBOX32(hash,state,key) 
#define ngx_read_file_n "pread()"
#define _SYS_WAIT_H_ 
#define RXf_NULL (1U<<(RXf_BASE_SHIFT+17))
#define SCNiLEAST32 SCNi32
#define IPV6CTL_USE_DEFAULTZONE 39
#define PERL_ARGS_ASSERT_AV_FETCH assert(av)
#define PL_numeric_radix_sv (vTHX->Inumeric_radix_sv)
#define PERL_ARGS_ASSERT_MY_SETENV 
#define PERL_ARGS_ASSERT_MRO_GET_LINEAR_ISA assert(stash)
#define __weak 
#define hv_store_ent(hv,keysv,val,hash) ((HE *) hv_common((hv), (keysv), NULL, 0, 0, HV_FETCH_ISSTORE, (val), (hash)))
#define IPPROTO_TTP 84
#define RTLD_LAZY 0x1
#define what_MULTI_CHAR_FOLD_utf8_safe_part7_(s,e) ( ((e)-(s) > 4) ? ( ( ( ((const U8*)s)[0] & 0xDF ) == 'A' ) ? ( ( ( 0xCA == ((const U8*)s)[1] ) && ( 0xBE == ((const U8*)s)[2] ) ) ? 0x1E9A : 0 ) : ( ( ((const U8*)s)[0] & 0xDF ) == 'F' ) ? ( ( ( ((const U8*)s)[1] & 0xDF ) == 'F' ) ? ( ( ( ((const U8*)s)[2] & 0xDF ) == 'I' ) ? 0xFB03 : ( ( ((const U8*)s)[2] & 0xDF ) == 'L' ) ? 0xFB04 : 0xFB00 ) : ( ( ((const U8*)s)[1] & 0xDF ) == 'I' ) ? 0xFB01 : ( ( ((const U8*)s)[1] & 0xDF ) == 'L' ) ? 0xFB02 : 0 ) : ( ( ((const U8*)s)[0] & 0xDF ) == 'H' ) ? ( ( ( 0xCC == ((const U8*)s)[1] ) && ( 0xB1 == ((const U8*)s)[2] ) ) ? 0x1E96 : 0 ) : ( ( ((const U8*)s)[0] & 0xDF ) == 'I' ) ? ( ( ( 0xCC == ((const U8*)s)[1] ) && ( 0x87 == ((const U8*)s)[2] ) ) ? 0x130 : 0 ) : ( ( ((const U8*)s)[0] & 0xDF ) == 'J' ) ? ( ( ( 0xCC == ((const U8*)s)[1] ) && ( 0x8C == ((const U8*)s)[2] ) ) ? 0x1F0 : 0 ) : ( ( ((const U8*)s)[0] & 0xDF ) == 'S' ) ? ( ( ( ((const U8*)s)[1] & 0xDF ) == 'S' ) ? 0xDF : ( ( ((const U8*)s)[1] & 0xDF ) == 'T' ) ? 0xFB05 : ( ( 0xC5 == ((const U8*)s)[1] ) && ( 0xBF == ((const U8*)s)[2] ) ) ? 0xDF : 0 ) : ( ( ((const U8*)s)[0] & 0xDF ) == 'T' ) ? ( ( ( 0xCC == ((const U8*)s)[1] ) && ( 0x88 == ((const U8*)s)[2] ) ) ? 0x1E97 : 0 ) : ( ( ((const U8*)s)[0] & 0xDF ) == 'W' ) ? ( ( ( 0xCC == ((const U8*)s)[1] ) && ( 0x8A == ((const U8*)s)[2] ) ) ? 0x1E98 : 0 ) : ( ( ((const U8*)s)[0] & 0xDF ) == 'Y' ) ? ( ( ( 0xCC == ((const U8*)s)[1] ) && ( 0x8A == ((const U8*)s)[2] ) ) ? 0x1E99 : 0 ) : ( 0xC5 == ((const U8*)s)[0] ) ? ( ( 0xBF == ((const U8*)s)[1] ) ? ( ( ( ((const U8*)s)[2] & 0xDF ) == 'S' ) ? 0xDF : ( ( ((const U8*)s)[2] & 0xDF ) == 'T' ) ? 0xFB05 : ( ( 0xC5 == ((const U8*)s)[2] ) && ( 0xBF == ((const U8*)s)[3] ) ) ? 0xDF : 0 ) : 0 ) : ( 0xCA == ((const U8*)s)[0] ) ? ( ( ( 0xBC == ((const U8*)s)[1] ) && ( ( ((const U8*)s)[2] & 0xDF ) == 'N' ) ) ? 0x149 : 0 ) : ( 0xCE == ((const U8*)s)[0] ) ? ( ( 0xAC == ((const U8*)s)[1] ) ? ( ( ( 0xCE == ((const U8*)s)[2] ) && ( 0xB9 == ((const U8*)s)[3] ) ) ? 0x1FB4 : 0 ) : ( 0xAE == ((const U8*)s)[1] ) ? ( ( ( 0xCE == ((const U8*)s)[2] ) && ( 0xB9 == ((const U8*)s)[3] ) ) ? 0x1FC4 : 0 ) : ( 0xB1 == ((const U8*)s)[1] ) ? ( ( 0xCD == ((const U8*)s)[2] ) ? ( ( 0x82 == ((const U8*)s)[3] ) ? 0x1FB6 : 0 ) : ( ( 0xCE == ((const U8*)s)[2] ) && ( 0xB9 == ((const U8*)s)[3] ) ) ? 0x1FB3 : 0 ) : ( 0xB7 == ((const U8*)s)[1] ) ? ( ( 0xCD == ((const U8*)s)[2] ) ? ( ( 0x82 == ((const U8*)s)[3] ) ? 0x1FC6 : 0 ) : ( ( 0xCE == ((const U8*)s)[2] ) && ( 0xB9 == ((const U8*)s)[3] ) ) ? 0x1FC3 : 0 ) : ( ( ( 0xB9 == ((const U8*)s)[1] ) && ( 0xCD == ((const U8*)s)[2] ) ) && ( 0x82 == ((const U8*)s)[3] ) ) ? 0x1FD6 : 0 ) : ( 0xCF == ((const U8*)s)[0] ) ? what_MULTI_CHAR_FOLD_utf8_safe_part2_(s,e) : what_MULTI_CHAR_FOLD_utf8_safe_part3_(s,e) ): ((e)-(s) > 3) ? what_MULTI_CHAR_FOLD_utf8_safe_part4_(s,e) : what_MULTI_CHAR_FOLD_utf8_safe_part5_(s,e) )
#define ngx_rbtree_init(tree,s,i) ngx_rbtree_sentinel_init(s); (tree)->root = s; (tree)->sentinel = s; (tree)->insert = i
#define DEBUG_M_FLAG 0x01000000
#define _SC_MONOTONIC_CLOCK 74
#define SO_DONTROUTE 0x0010
#define MACH_RCV_PORT_DIED 0x10004009
#define TASK_EXC_GUARD_MP_ONCE 0x20
#define is_utf8_string(s,len) is_utf8_string_loclen(s, len, NULL, NULL)
#define PL_in_load_module (vTHX->Iin_load_module)
#define I_STDARG 
#define TCPCI_FLAG_LOSSRECOVERY 0x00000001
#define WARN_EXPERIMENTAL__SMARTMATCH 54
#define NBSP_UTF8 "\xC2\xA0"
#define PL_DBsub (vTHX->IDBsub)
#define CvWEAKOUTSIDE_on(cv) (CvFLAGS(cv) |= CVf_WEAKOUTSIDE)
#define fbm_compile(a,b) Perl_fbm_compile(aTHX_ a,b)
#define NGX_HTTP_SSI_MAX_PARAMS 16
#define MAX_MATCHES (MAX_FOLD_FROMS + 1 + 2)
#define PL_vtbl_env PL_magic_vtables[want_vtbl_env]
#define IPC_VOUCHER_ATTR_MANAGER_NULL ((ipc_voucher_attr_manager_t) 0)
#define PL_multideref_pc (vTHX->Imultideref_pc)
#define KEV_INET6_NEW_LL_ADDR 4
#define PERL_ARGS_ASSERT_NEWHV 
#define EV_FLAG1 0x2000
#define OPpARGELEM_MASK 0x06
#define PerlSock_setsockopt(s,l,n,v,len) setsockopt(s, l, n, v, len)
#define ck_entersub_args_proto(a,b,c) Perl_ck_entersub_args_proto(aTHX_ a,b,c)
#define INTSIZE 4
#define OPpEVAL_BYTES 0x08
#define NOTE_EXIT_MEMORY 0x00020000
#define PL_tmps_stack (vTHX->Itmps_stack)
#define PERL_ARGS_ASSERT_CK_ENTERSUB_ARGS_PROTO_OR_LIST assert(entersubop); assert(namegv); assert(protosv)
#define MAP_MEM_POSTED 6
#define pTHX_VALUE_ (void *)my_perl,
#define _PATH_MASTERPASSWD "/etc/master.passwd"
#define NGX_IOVS_PREALLOCATE 64
#define NGX_HAVE_TCP_FASTOPEN 1
#define PERL_ARGS_ASSERT_CK_SUBR assert(o)
#define case_149_SBOX32(hash,state,key) 
#define __OS_ENUM_ATTR_CLOSED 
#define _VA_LIST_ 
#define CTL_DEBUG_VALUE 1
#define PRIo8 __PRI_8_LENGTH_MODIFIER__ "o"
#define SCNiLEAST64 SCNi64
#define PL_in_clean_objs (vTHX->Iin_clean_objs)
#define __PTRDIFF_MAX__ 0x7fffffffffffffffL
#define WARN_INPLACE 23
#define LONGDBLINFBYTES 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
#define _SYS_STAT_H_ 
#define _STRUCT_MCONTEXT_AVX32 struct __darwin_mcontext_avx32
#define MAP_MEM_VM_COPY 0x200000
#define UTF8_IS_NEXT_CHAR_DOWNGRADEABLE(s,e) ( UTF8_IS_DOWNGRADEABLE_START(*(s)) && ( (e) - (s) > 1) && UTF8_IS_CONTINUATION(*((s)+1)))
#define PoisonPADLIST(sv) NOOP
#define IPV6CTL_MRTPROTO 8
#define isALNUMC_A(c) isALPHANUMERIC_A(c)
#define sv_pvn_nomg(a,b) Perl_sv_pvn_nomg(aTHX_ a,b)
#define PERL_ARGS_ASSERT_BLOCK_END 
#define GV_SUPER 0x1000
#define HAS_GETNETENT 
#define host_get_chud_port(host,port) host_get_launchctl_port(host, port)
#define HINTS_REFCNT_INIT MUTEX_INIT(&PL_hints_mutex)
#define TASK_SECURITY_TOKEN_COUNT ((mach_msg_type_number_t) (sizeof(security_token_t) / sizeof(natural_t)))
#define PERL_ARGS_ASSERT_SV_COPYPV_FLAGS assert(dsv); assert(ssv)
#define sv_copypv(dsv,ssv) sv_copypv_flags(dsv, ssv, SV_GMAGIC)
#define PERL_ARGS_ASSERT_CK_REPEAT assert(o)
#define EXC_I386_NMIFLT 2
#define _SC_ASYNCHRONOUS_IO 28
#define AMGfallNEVER 1
#define PERL_ARGS_ASSERT_HV_DELETE assert(key)
#define MACH_SEND_INVALID_DEST 0x10000003
#define _I386_FP_SAVE_H_ 
#define SvEND_set(sv,val) STMT_START { assert(SvTYPE(sv) >= SVt_PV); SvCUR_set(sv, (val) - SvPVX(sv)); } STMT_END
#define PERL_ARGS_ASSERT_SV_RESET assert(s)
#define REENTRANT_PROTO_V_D 71
#define timerisset(tvp) ((tvp)->tv_sec || (tvp)->tv_usec)
#define SETPWENT_R_PROTO 0
#define EV_ONESHOT 0x0010
#define PERLDBf_SAVESRC_INVALID 0x1000
#define case_69_SBOX32(hash,state,key) 
#define dTARGET SV * GETTARGET
#define RX_LASTCLOSEPAREN(rx_sv) (ReANY(rx_sv)->lastcloseparen)
#define VOL_CAP_FMT_VOL_GROUPS 0x01000000
#define VOL_CAP_FMT_HARDLINKS 0x00000004
#define ROTL_UV(x,r) ROTL64(x,r)
#define __DARWIN_C_FULL 900000L
#define MACH_MSG_GUARD_FLAGS_NONE 0x0000
#define PERL_ARGS_ASSERT_SV_UNMAGICEXT assert(sv)
#define THREAD_THROUGHPUT_QOS_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (thread_throughput_qos_policy_data_t) / sizeof (integer_t)))
#define PERL_ARGS_ASSERT_CK_DEFINED assert(o)
#define SAVEHDELETE(h,s) save_hdelete(MUTABLE_HV(h), (s))
#define _generic_func_utf8_safe(classnum,above_latin1,p,e) _generic_utf8_safe(classnum, p, e, above_latin1(p, e))
#define P_RESV6 0x00400000
#define PERL_ARGS_ASSERT_CK_ENTERSUB_ARGS_LIST assert(entersubop)
#define roundup(x,y) ((((x) % (y)) == 0) ? (x) : ((x) + ((y) - ((x) % (y)))))
#define VM_INHERIT_LAST_VALID VM_INHERIT_NONE
#define __ATOMIC_HLE_ACQUIRE 65536
#define REENTRANT_PROTO_B_CCD 4
#define I64SIZE 8
#define _STDARG_H 
#define _MACH_I386_THREAD_STATUS_H_ 
#define deb Perl_deb_nocontext
#define PL_delaymagic (vTHX->Idelaymagic)
#define _UINT32_T 
#define SV_IMMEDIATE_UNREF 1
#define _PC_VDISABLE 9
#define _MACH_VM_INHERIT_H_ 
#define CALLRUNOPS PL_runops
#define PCRE2_ERROR_UCP_IS_DISABLED 175
#define U8TYPE unsigned char
#define EAI_AGAIN 2
#define PL_internal_random_state (vTHX->Iinternal_random_state)
#define sv_catpvn(dsv,sstr,slen) sv_catpvn_flags(dsv, sstr, slen, SV_GMAGIC)
#define IP_DUMMYNET_FLUSH 62
#define sv_catpvs(sv,str) Perl_sv_catpvn_flags(aTHX_ sv, STR_WITH_LEN(str), SV_GMAGIC)
#define SVf_UTF8 0x20000000
#define _SC_XOPEN_LEGACY 110
#define _PATH_PASSWD "/etc/passwd"
#define KERN_ALREADY_IN_SET 11
#define SvSetMagicSV(dst,src) SvSetSV_and(dst,src,SvSETMAGIC(dst))
#define LDBL_MAX __LDBL_MAX__
#define LIST_INSERT_AFTER(listelm,elm,field) do { LIST_CHECK_NEXT(listelm, field); if ((LIST_NEXT((elm), field) = LIST_NEXT((listelm), field)) != NULL) LIST_NEXT((listelm), field)->field.le_prev = &LIST_NEXT((elm), field); LIST_NEXT((listelm), field) = (elm); (elm)->field.le_prev = &LIST_NEXT((listelm), field); } while (0)
#define SO_NETSVC_MARKING_LEVEL 0x1119
#define isLOWER_utf8(p,e) isLOWER_utf8_safe(p, e)
#define CPERLscope(x) x
#define CVf_DYNFILE 0x1000
#define PCRE2_CONFIG_VERSION 11
#define PERL_ARGS_ASSERT_MAGIC_GETTAINT assert(sv); assert(mg)
#define cast_iv Perl_cast_iv
#define HOST_CONTAINERD_PORT (18 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define PUSHSTACK PUSHSTACKi(PERLSI_UNKNOWN)
#define NGX_LOG_STDERR 0
#define NGX_HTTP_NOT_FOUND 404
#define MACH_PORT_RIGHT_NUMBER ((mach_port_right_t) 6)
#define NGX_HTTPS_NO_CERT 496
#define WAKEMON_ENABLE 0x01
#define CTLFLAG_SECURE 0x08000000
#define case_240_SBOX32(hash,state,key) 
#define PeRl_StGiFy(a) #a
#define ENOTEMPTY 66
#define PERL_ARGS_ASSERT_VALIDATE_PROTO assert(name)
#define _FSFILCNT_T 
#define PRIu8 __PRI_8_LENGTH_MODIFIER__ "u"
#define TWO_BYTE_UTF8_TO_UNI(HI,LO) NATIVE_TO_UNI(TWO_BYTE_UTF8_TO_NATIVE(HI, LO))
#define PERL_UNICODE_MAX 0x10FFFF
#define isDIGIT(c) isDIGIT_A(c)
#define __SIZEOF_WINT_T__ 4
#define CPPSTDIN "cc  -E"
#define PRIxLEAST8 PRIx8
#define ferror_unlocked(p) __sferror(p)
#define CPU_SUBTYPE_MIPS_R3000 ((cpu_subtype_t) 7)
#define PINOD 8
#define NOT_REACHED ASSUME(!"UNREACHABLE")
#define HAS_GETPROTOBYNUMBER 
#define PL_minus_n (vTHX->Iminus_n)
#define scan_vstring(a,b,c) Perl_scan_vstring(aTHX_ a,b,c)
#define NGX_UNESCAPE_REDIRECT 2
#define INT32_MIN (-INT32_MAX-1)
#define __LONG_LONG_WIDTH__ 64
#define PERL_ARGS_ASSERT_CK_ENTERSUB_ARGS_CORE assert(entersubop); assert(namegv); assert(protosv)
#define PERL_SYS_INIT3_BODY(argvp,argcp,envp) PERL_SYS_INIT_BODY(argvp,argcp)
#define pcre2_real_jit_stack PCRE2_SUFFIX(pcre2_real_jit_stack_)
#define REENTRANT_PROTO_B_CCS 5
#define VM_MEMORY_IOKIT 21
#define _SC_TIMER_MAX 52
#define IP_OLD_FW_ADD 50
#define PERL_ARGS_ASSERT_SYS_INIT assert(argc); assert(argv)
#define PERL_ARGS_ASSERT_DO_TRANS assert(sv)
#define PMf_CONST (1U<<(PMf_BASE_SHIFT+7))
#define hv_iterinit(a) Perl_hv_iterinit(aTHX_ a)
#define PadnameIsSTATE(pn) (PadnameFLAGS(pn) & PADNAMEt_STATE)
#define SUN_LEN(su) (sizeof(*(su)) - sizeof((su)->sun_path) + strlen((su)->sun_path))
#define dbtob(db,devBlockSize) ((unsigned)(db) * devBlockSize)
#define NGX_DISABLE_SYMLINKS_NOTOWNER 2
#define sv_setref_iv(a,b,c) Perl_sv_setref_iv(aTHX_ a,b,c)
#define EXC_MASK_SYSCALL (1 << EXC_SYSCALL)
#define _X86_INSTRUCTION_STATE_CACHELINE_SIZE 64
#define uvchr_to_utf8(a,b) uvchr_to_utf8_flags(a,b,0)
#define PRIx8 __PRI_8_LENGTH_MODIFIER__ "x"
#define PERL_ARGS_ASSERT_GV_INIT_PV assert(gv); assert(name)
#define PL_evalseq (vTHX->Ievalseq)
#define PERL_PV_PRETTY_ELLIPSES 0x000002
#define _PTRDIFF_T 
#define PERL_ARGS_ASSERT_HV_STORE_FLAGS 
#define padnew_SAVE 2
#define isnan(x) ( sizeof(x) == sizeof(float) ? __inline_isnanf((float)(x)) : sizeof(x) == sizeof(double) ? __inline_isnand((double)(x)) : __inline_isnanl((long double)(x)))
#define PERL_ARGS_ASSERT_FOLDEQ_LATIN1 assert(a); assert(b)
#define CHECK_MALLOC_TOO_LATE_FOR(ch) ((void)0)
#define hv_store_flags(hv,key,klen,val,hash,flags) ((SV**) hv_common((hv), NULL, (key), (klen), (flags), (HV_FETCH_ISSTORE|HV_FETCH_JUST_SV), (val), (hash)))
#define __IDSTRING(name,string) static const char name[] __used = string
#define PERL_ARGS_ASSERT_PARSE_FULLEXPR 
#define __header_always_inline __header_inline __attribute__ ((__always_inline__))
#define PERL_ARGS_ASSERT_SV_DUP_INC assert(param)
#define CTLFLAG_MASKED 0x04000000
#define PERL_ARGS_ASSERT_HV_ENAME_ADD assert(hv); assert(name)
#define PERL_ARGS_ASSERT_SV_VSETPVF assert(sv); assert(pat)
#define MSG_HAVEMORE 0x2000
#define isPUNCT(c) isPUNCT_A(c)
#define _SC_XOPEN_XCU_VERSION 121
#define _CS_POSIX_V6_LPBIG_OFFBIG_LIBS 13
#define PAD_COMPNAME(po) PAD_COMPNAME_SV(po)
#define MEMORY_OBJECT_PERFORMANCE_INFO 11
#define __FLT128_HAS_INFINITY__ 1
#define PCRE2_GLUE(a,b) PCRE2_JOIN(a,b)
#define __DARWIN_NULL ((void *)0)
#define VM_MAP_ENTRY_MAX (256)
#define CvHASGV(cv) cBOOL(SvANY(cv)->xcv_gv_u.xcv_gv)
#define case_86_SBOX32(hash,state,key) 
#define KERN_HOSTNAME 10
#define PL_watchok (vTHX->Iwatchok)
#define PERL_ARGS_ASSERT_MULTICONCAT_STRINGIFY assert(o)
#define PERL_ARGS_ASSERT_PERLIO_SET_CNT 
#define F_GETOWN 5
#define TASK_BASE_THROUGHPUT_QOS_POLICY 11
#define IPCTL_DEFTTL 3
#define KERN_DENIED 53
#define p_back p_un.p_st1.__p_back
#define PadnamelistARRAY(pnl) (pnl)->xpadnl_alloc
#define ngx_set_socket_errno(err) errno = err
#define dORIGMARK const I32 origmark = (I32)(mark - PL_stack_base)
#define IP_FW_ADD 40
#define hv_scalar(a) Perl_hv_scalar(aTHX_ a)
#define PERL_ARGS_ASSERT_UTF16_TO_UTF8 assert(p); assert(d); assert(newlen)
#define _SC_XBS5_LPBIG_OFFBIG 125
#define alloca(size) __alloca(size)
#define HAS_LOCALTIME_R 
#define _USE_FORTIFY_LEVEL 2
#define LDBL_MIN __LDBL_MIN__
#define PERL_PV_PRETTY_EXACTSIZE 0x000008
#define PERL_ARGS_ASSERT_CK_RFUN assert(o)
#define NGX_USE_CLEAR_EVENT 0x00000004
#define DEBUG_p_FLAG 0x00000001
#define MNT_LOCAL 0x00001000
#define VQ_QUOTA 0x1000
#define REENTRANT_PROTO_I_CCSD 13
#define _SYS_DIRENT_H 
#define PERL_SCAN_TRAILING 0x10
#define HAS_MKFIFO 
#define CXt_EVAL 11
#define S_IFWHT 0160000
#define MAXPHYS (128 * 1024)
#define save_hash(a) Perl_save_hash(aTHX_ a)
#define _SC_TRACE_EVENT_NAME_MAX 127
#define NBBY __DARWIN_NBBY
#define CopSTASH_set(c,hv) ((c)->cop_stashoff = (hv) ? alloccopstash(hv) : 0)
#define DEBUG_X_FLAG 0x00004000
#define PCRE2_ERROR_UNKNOWN_ESCAPE 103
#define MAP_NOCACHE 0x0400
#define CPU_SUBTYPE_ARM64_V8 ((cpu_subtype_t) 1)
#define IPV6_RECVHOPLIMIT 37
#define MEMBER_TO_FPTR(name) name
#define ngx_conf_init_size_value(conf,default) if (conf == NGX_CONF_UNSET_SIZE) { conf = default; }
#define MACH_ACTIVITY_ID_COUNT_MAX 16
#define __FLT64X_HAS_QUIET_NAN__ 1
#define pcre2_convert_context_copy PCRE2_SUFFIX(pcre2_convert_context_copy_)
#define case_214_SBOX32(hash,state,key) 
#define DPTR2FPTR(t,p) ((t)PTR2nat(p))
#define U32_MIN PERL_UINT_MIN
#define PERL_ARGS_ASSERT_SV_CATPVN_FLAGS assert(dsv); assert(sstr)
#define cop_hints_fetch_sv(cop,key,hash,flags) cophh_fetch_sv(CopHINTHASH_get(cop), key, hash, flags)
#define DOUBLE_IS_IBM_SINGLE_32_BIT 12
#define USE_PERLIO 
#define _SC_MQ_OPEN_MAX 46
#define PERL_ARGS_ASSERT_SVREFCNT_INC_NN assert(sv)
#define PERL_ARGS_ASSERT_TO_UNI_UPPER assert(p); assert(lenp)
#define HAS_PTRDIFF_T 
#define IPV6_RECVTCLASS 35
#define S_PAT_MODS M_PAT_MODS EXEC_PAT_MODS NONDESTRUCT_PAT_MODS
#define IPV6CTL_TEMPPLTIME 33
#define ngx_tcp_push_n "setsockopt(!TCP_NOPUSH)"
#define PCRE2_ERROR_CONDITION_ASSERTION_EXPECTED 128
#define PERL_ARGS_ASSERT__BYTE_DUMP_STRING assert(start)
#define AMGf_numarg 0x80
#define _POSIX2_SW_DEV 200112L
#define case_146_SBOX32(hash,state,key) 
#define CLANG_DIAG_IGNORE(w) 
#define HAS_BUILTIN_ADD_OVERFLOW 
#define PERL_ARGS_ASSERT_UTF8_TO_UVCHR_BUF_HELPER assert(s); assert(send)
#define PL_stack_sp (vTHX->Istack_sp)
#define PERL_ARGS_ASSERT_INIT_CONSTANTS 
#define lex_grow_linestr(a) Perl_lex_grow_linestr(aTHX_ a)
#define NGX_CONF_BLOCK_START 1
#define IOPOL_DEFAULT 0
#define MgTAINTEDDIR(mg) (mg->mg_flags & MGf_TAINTEDDIR)
#define STAILQ_HEAD_INITIALIZER(head) { NULL, &(head).stqh_first }
#define PERL_ARGS_ASSERT_PAD_FINDMY_PV assert(name)
#define MACH_SEND_ALWAYS 0x00010000
#define HeKUTF8(he) HEK_UTF8(HeKEY_hek(he))
#define KEYWORD_PLUGIN_DECLINE 0
#define __attribute__pure__ __attribute__((pure))
#define TH_STATE_STOPPED 2
#define case_236_SBOX32(hash,state,key) 
#define ngx_read_ahead(fd,n) 0
#define case_74_SBOX32(hash,state,key) 
#define SO_RCVLOWAT 0x1004
#define x86_DEBUG_STATE64_COUNT ((mach_msg_type_number_t) ( sizeof (x86_debug_state64_t) / sizeof (int) ))
#define PERL_ARGS_ASSERT_SV_CATPV_FLAGS assert(dsv); assert(sstr)
#define AMG_CALLun(sv,meth) AMG_CALLunary(sv, CAT2(meth,_amg))
#define MDEREF_HV_padsv_vivify_rv2hv_helem 10
#define NGX_HTTP_FASTCGI_TEMP_PATH "fastcgi_temp"
#define XOPf_xop_name 0x01
#define Perl_sinh sinh
#define _CS_POSIX_V6_LP64_OFF64_LDFLAGS 9
#define newAVREF(a) Perl_newAVREF(aTHX_ a)
#define PERL_ARGS_ASSERT_IS_UTF8_STRING_LOCLEN assert(s)
#define mg_freeext(a,b,c) Perl_mg_freeext(aTHX_ a,b,c)
#define CTL_MACHDEP 7
#define PERL_ARGS_ASSERT_DO_OP_DUMP assert(file)
#define PERL_EXIT_DESTRUCT_END 0x02
#define __LP64__ 1
#define VM_MEMORY_APPKIT 40
#define SAVEt_OP 18
#define I_XLOCALE 
#define __IOS_DEPRECATED(_start,_dep,_msg) 
#define isPUNCT_L1(c) _generic_isCC(c, _CC_PUNCT)
#define ENETRESET 52
#define _utf8_safe_assert(p,e) ((e) > (p))
#define ngx_conf_merge_uint_value(conf,prev,default) if (conf == NGX_CONF_UNSET_UINT) { conf = (prev == NGX_CONF_UNSET_UINT) ? default : prev; }
#define _POSIX_JOB_CONTROL 200112L
#define IPPROTO_CFTP 62
#define VOL_CAP_FMT_NO_VOLUME_SIZES 0x00008000
#define padnamelist_fetch Perl_padnamelist_fetch
#define isPUNCT_LC(c) _generic_LC(c, _CC_PUNCT, ispunct)
#define SS_ADD_INT(i) ((ssp++)->any_i32 = (I32)(i))
#define THREAD_RET_TYPE void *
#define __FLT32X_EPSILON__ 2.22044604925031308084726333618164062e-16F32x
#define PERLDBf_SUBLINE 0x10
#define PERL_ARGS_ASSERT_SV_UTF8_UPGRADE_FLAGS_GROW assert(sv)
#define UNICODE_WARN_ILLEGAL_INTERCHANGE (UNICODE_WARN_ILLEGAL_C9_INTERCHANGE|UNICODE_WARN_NONCHAR)
#define PERL_ARGS_ASSERT_PAD_FINDMY_SV assert(name)
#define is_THREE_CHAR_FOLD_utf8_safe(s,e) ( ((e)-(s) > 5) ? ( ( ( ((const U8*)s)[0] & 0xDF ) == 'F' ) ? ( ( ( ( ((const U8*)s)[1] & 0xDF ) == 'F' ) && ( ( ( ((const U8*)s)[2] & 0xDF ) == 'I' ) || ( ( ((const U8*)s)[2] & 0xDF ) == 'L' ) ) ) ? 3 : 0 ) : ( 0xCE == ((const U8*)s)[0] ) ? ( ( 0xB1 == ((const U8*)s)[1] || 0xB7 == ((const U8*)s)[1] ) ? ( ( ( ( ( 0xCD == ((const U8*)s)[2] ) && ( 0x82 == ((const U8*)s)[3] ) ) && ( 0xCE == ((const U8*)s)[4] ) ) && ( 0xB9 == ((const U8*)s)[5] ) ) ? 6 : 0 ) : ( ( ( 0xB9 == ((const U8*)s)[1] ) && ( 0xCC == ((const U8*)s)[2] ) ) && ( 0x88 == ((const U8*)s)[3] ) ) ? ( ( 0xCC == ((const U8*)s)[4] ) ? ( ( inRANGE_helper_(U8, ((const U8*)s)[5], 0x80, 0x81) ) ? 6 : 0 ) : ( ( 0xCD == ((const U8*)s)[4] ) && ( 0x82 == ((const U8*)s)[5] ) ) ? 6 : 0 ) : 0 ) : ( 0xCF == ((const U8*)s)[0] ) ? ( ( 0x85 == ((const U8*)s)[1] ) ? ( ( ( 0xCC == ((const U8*)s)[2] ) && ( 0x88 == ((const U8*)s)[3] || 0x93 == ((const U8*)s)[3] ) ) ? ( ( 0xCC == ((const U8*)s)[4] ) ? ( ( inRANGE_helper_(U8, ((const U8*)s)[5], 0x80, 0x81) ) ? 6 : 0 ) : ( ( 0xCD == ((const U8*)s)[4] ) && ( 0x82 == ((const U8*)s)[5] ) ) ? 6 : 0 ) : 0 ) : ( ( ( ( ( 0x89 == ((const U8*)s)[1] ) && ( 0xCD == ((const U8*)s)[2] ) ) && ( 0x82 == ((const U8*)s)[3] ) ) && ( 0xCE == ((const U8*)s)[4] ) ) && ( 0xB9 == ((const U8*)s)[5] ) ) ? 6 : 0 ) : 0 ) : ( ( ( ((e)-(s) > 2) && ( ( ((const U8*)s)[0] & 0xDF ) == 'F' ) ) && ( ( ((const U8*)s)[1] & 0xDF ) == 'F' ) ) && ( ( ( ((const U8*)s)[2] & 0xDF ) == 'I' ) || ( ( ((const U8*)s)[2] & 0xDF ) == 'L' ) ) ) ? 3 : 0 )
#define get_hv(a,b) Perl_get_hv(aTHX_ a,b)
#define MACH_RCV_INVALID_REPLY 0x10004012
#define ngx_file_info(file,sb) stat((const char *) file, sb)
#define MACH_SEND_NOIMPORTANCE 0x00040000
#define PERL_ARGS_ASSERT_GV_FETCHMETH 
#define GETSERVBYPORT_R_PROTO 0
#define free_and_set_cop_warnings(cmp,w) STMT_START { if (!specialWARN((cmp)->cop_warnings)) PerlMemShared_free((cmp)->cop_warnings); (cmp)->cop_warnings = w; } STMT_END
#define S_IFREG 0100000
#define PERL_MAGIC_bm 'B'
#define sv_setnv_mg(a,b) Perl_sv_setnv_mg(aTHX_ a,b)
#define PL_DBsignal (vTHX->IDBsignal)
#define USEC_PER_SEC 1000000ull
#define AQ_HIWATER 100
#define NGINX_VAR "NGINX"
#define __FLT64_MIN_EXP__ (-1021)
#define TASK_VM_INFO_PURGEABLE_ACCOUNT 27
#define MDEREF_INDEX_none 0x00
#define MAC_OS_X_VERSION_10_11_2 101102
#define MAC_OS_X_VERSION_10_11_3 101103
#define __SPI_AVAILABLE(...) 
#define KERN_BOOTFILE 28
#define __MSFILTERREQ_DEFINED 
#define _CACHED_RUNES (1 <<8 )
#define SLIST_EMPTY(head) ((head)->slh_first == NULL)
#define PF_MAX AF_MAX
#define MEMORY_OBJECT_DATA_FLUSH 0x1
#define PROC_FLAG_ADAPTIVE 0x100000
#define PERL_ARGS_ASSERT_REG_NAMED_BUFF_NEXTKEY assert(rx)
#define __SWIFT_UNAVAILABLE_MSG(_msg) 
#define HOST_AUDIT_CONTROL_PORT (2 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define SvMAGICAL(sv) (SvFLAGS(sv) & (SVs_GMG|SVs_SMG|SVs_RMG))
#define SvREFCNT_dec(sv) Perl_SvREFCNT_dec(aTHX_ MUTABLE_SV(sv))
#define PERL_ARGS_ASSERT_SV_SETUV_MG assert(sv)
#define MAXDOMNAMELEN 256
#define __APPLE_API_STABLE 
#define LATIN_CAPITAL_LETTER_SHARP_S_UTF8 "\xE1\xBA\x9E"
#define PERL_SHORT_MIN ((short)SHRT_MIN)
#define ngx_fd_info_n "fstat()"
#define PIPESOCK_MODE 
#define OpREFCNT_inc(o) ((o) ? (++(o)->op_targ, (o)) : NULL)
#define PerlLIO_stat(name,buf) Stat((name), (buf))
#define UNICODE_PAT_MODS "u"
#define timerclear(tvp) (tvp)->tv_sec = (tvp)->tv_usec = 0
#define DEPENDS_PAT_MOD 'd'
#define VM_PAGE_QUERY_PAGE_EXTERNAL 0x80
#define PERL_MAGIC_tiedelem 'p'
#define SITELIB_STEM "/usr/local/Cellar/perl/5.34.0/lib/perl5/site_perl"
#define CPU_SUBTYPE_VAX8800 ((cpu_subtype_t) 11)
#define GETHOSTBYNAME_R_PROTO 0
#define DEBUG_s_TEST_ UNLIKELY(PL_debug & DEBUG_s_FLAG)
#define case_231_SBOX32(hash,state,key) 
#define CLOCK_UPTIME_RAW _CLOCK_UPTIME_RAW
#define UTF8_GOT_OVERFLOW UTF8_ALLOW_OVERFLOW
#define LvTARGOFF(sv) ((XPVLV*) SvANY(sv))->xlv_targoff
#define pcre2_set_glob_separator PCRE2_SUFFIX(pcre2_set_glob_separator_)
#define PCRE2_ERROR_MISSING_OCTAL_OR_HEX_DIGITS 178
#define isXDIGIT_uni(c) isXDIGIT_uvchr(c)
#define NGX_USE_FD_EVENT 0x00000400
#define SIOCSIFALTMTU _IOW('i', 69, struct ifreq)
#define PL_in_utf8_CTYPE_locale (vTHX->Iin_utf8_CTYPE_locale)
#define TASK_QOS_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (struct task_qos_policy) / sizeof (integer_t)))
#define PERL_MAGIC_fm 'f'
#define cGVOPo_gv cGVOPx_gv(o)
#define HAS_ACOSH 
#define __UINT16_MAX__ 0xffff
#define NGINX_VER "nginx/" NGINX_VERSION
#define IOPOL_ATIME_UPDATES_OFF 1
#define PERL_ARGS_ASSERT_CX_POPWHEN assert(cx)
#define P_FSTRACE 0
#define SO_RCVBUF 0x1002
#define PerlLIO_write(fd,buf,count) write((fd), (buf), (count))
#define PERL_ARGS_ASSERT_MRO_SET_MRO assert(meta); assert(name)
#define VM_MEMORY_ROSETTA_USER_LDT 235
#define EIDRM 90
#define RENAME_EXCL 0x00000004
#define OPpALLOW_FAKE 0x40
#define HW_NCPU 3
#define PERL_ARGS_ASSERT_DO_EOF assert(gv)
#define FBMcf_TAIL_DOLLARM 2
#define REXEC_IGNOREPOS 0x08
#define PERL_TSA_ACQUIRE(x) PERL_TSA__(acquire_capability(x))
#define CopHINTS_set(c,h) STMT_START { (c)->cop_hints = (h); } STMT_END
#define PROC_FLAG_IOS_APPLICATION PROC_FLAG_APPLICATION
#define _PC_NAME_MAX 4
#define NGX_ETIMEDOUT ETIMEDOUT
#define _CC_IS_IN_SOME_FOLD 22
#define INT2PTR(any,d) (any)(d)
#define KERN_VFSNSPACE_HANDLE_PROC 1
#define REENTRANT_PROTO_I_BI 10
#define NGX_HTTP_MAX_SUBREQUESTS 50
#define OS_TRANSPARENT_UNION __attribute__((__transparent_union__))
#define sv_unref_flags(a,b) Perl_sv_unref_flags(aTHX_ a,b)
#define STAILQ_REMOVE_HEAD_UNTIL(head,elm,field) do { if ((STAILQ_FIRST((head)) = STAILQ_NEXT((elm), field)) == NULL) (head)->stqh_last = &STAILQ_FIRST((head)); } while (0)
#define host_set_node_port(host,port) (host_set_special_port((host), HOST_NODE_PORT, (port)))
#define _POSIX_THREADS 200112L
#define PERL_ARGS_ASSERT_GV_INIT_SV assert(gv); assert(namesv)
#define newLOOPOP(a,b,c,d) Perl_newLOOPOP(aTHX_ a,b,c,d)
#define ngx_link_info(file,sb) lstat((const char *) file, sb)
#define PerlLIO_lseek(fd,offset,mode) lseek((fd), (offset), (mode))
#define _FD_SET 
#define CLSIZE 1
#define S_ISWHT(m) (((m) & S_IFMT) == S_IFWHT)
#define UNICODE_GOT_NONCHAR UNICODE_DISALLOW_NONCHAR
#define HAS_SELECT 
#define EDEVERR 83
#define ngx_tm_year_t int
#define NGX_EISDIR EISDIR
#define VM_MEMORY_CARBON VM_MEMORY_CORESERVICES
#define cophh_store_pvn(cophh,keypv,keylen,hash,value,flags) Perl_refcounted_he_new_pvn(aTHX_ cophh, keypv, keylen, hash, value, flags)
#define isLEXWARN_on cBOOL(PL_curcop && PL_curcop->cop_warnings != pWARN_STD)
#define cophh_store_pvs(cophh,key,value,flags) Perl_refcounted_he_new_pvn(aTHX_ cophh, STR_WITH_LEN(key), 0, value, flags)
#define sv_pos_b2u_flags(a,b,c) Perl_sv_pos_b2u_flags(aTHX_ a,b,c)
#define NBPG 4096
#define isunordered(x,y) __builtin_isunordered((x),(y))
#define NBPW sizeof(int)
#define isGRAPH_LC_utf8(p,e) isGRAPH_LC_utf8_safe(p, e)
#define isWORDCHAR_uni(c) isWORDCHAR_uvchr(c)
#define IPV6CTL_LOG_INTERVAL 14
#define CBQSIZE (CBLOCK/NBBY)
#define PERL_ARGS_ASSERT_PADNAMELIST_DUP assert(srcpad); assert(param)
#define CPU_THREADTYPE_NONE ((cpu_threadtype_t) 0)
#define sv_utf8_downgrade_nomg(sv,fail_ok) sv_utf8_downgrade_flags(sv, fail_ok, 0)
#define SvTRUE_common(a,b) Perl_SvTRUE_common(aTHX_ a,b)
#define PerlSIO_feof(f) feof(f)
#define MACH_PORT_TYPE_DNREQUEST 0x80000000
#define TCPOLEN_FASTOPEN_REQ 2
#define PERL_ARGS_ASSERT_MRO_ISA_CHANGED_IN assert(stash)
#define DEBUG_v_TEST (0)
#define case_77_SBOX32(hash,state,key) 
#define case_136_SBOX32(hash,state,key) 
#define __AVAILABILITY_INTERNAL_DEPRECATED_MSG(_msg) __attribute__((deprecated))
#define _SC_REALTIME_SIGNALS 36
#define IPV6_AUTOFLOWLABEL 59
#define PERL_ARGS_ASSERT_GV_FETCHMETH_PVN assert(name)
#define STAILQ_REMOVE_HEAD(head,field) do { if ((STAILQ_FIRST((head)) = STAILQ_NEXT(STAILQ_FIRST((head)), field)) == NULL) (head)->stqh_last = &STAILQ_FIRST((head)); } while (0)
#define PCRE2_ERROR_BADREPLACEMENT (-35)
#define SCNiMAX __SCN_MAX_LENGTH_MODIFIER__ "i"
#define MACH_MSGH_BITS_CIRCULAR 0x10000000U
#define IPV6_2292PKTINFO 19
#define _STRUCT_X86_THREAD_FULL_STATE64 struct __darwin_x86_thread_full_state64
#define HAS_CRYPT 
#define BYTE_SIZE 8
#define PSPIN 0x800
#define PERL_ARGS_ASSERT_FORM assert(pat)
#define SWITCHSTACK(f,t) STMT_START { AvFILLp(f) = sp - PL_stack_base; PL_stack_base = AvARRAY(t); PL_stack_max = PL_stack_base + AvMAX(t); sp = PL_stack_sp = PL_stack_base + AvFILLp(t); PL_curstack = t; } STMT_END
#define IoTYPE_NUMERIC '#'
#define DEBUG_c_FLAG 0x00000020
#define AUDIT_SCNT 0x0400
#define GV_CROAK 0x200
#define WARN_LAYER 8
#define NGX_MAX_ALLOC_FROM_POOL (ngx_pagesize - 1)
#define PL_cv_has_eval (vTHX->Icv_has_eval)
#define F_GETPATH_MTMINFO 71
#define SOCK_SEQPACKET 5
#define PERL_ARGS_ASSERT_MAGIC_CLEARPACK assert(sv); assert(mg)
#define NGX_CONF_TAKE1234 (NGX_CONF_TAKE1|NGX_CONF_TAKE2|NGX_CONF_TAKE3 |NGX_CONF_TAKE4)
#define ngx_crc32_init(crc) crc = 0xffffffff
#define NV_NAN_QS_BYTE_OFFSET 6
#define S_ISFIFO(m) (((m) & S_IFMT) == S_IFIFO)
#define PERL_ARGS_ASSERT_CVGV_FROM_HEK assert(cv)
#define __UINT64_C(c) c ## ULL
#define _generic_toUPPER_LC(c,function,cast) (! FITS_IN_8_BITS(c) ? (c) : ((! IN_UTF8_CTYPE_LOCALE) ? (cast)function((cast)(c)) : ((((U8)(c)) == MICRO_SIGN) ? GREEK_CAPITAL_LETTER_MU : ((((U8)(c)) == LATIN_SMALL_LETTER_Y_WITH_DIAERESIS) ? LATIN_CAPITAL_LETTER_Y_WITH_DIAERESIS : ((((U8)(c)) == LATIN_SMALL_LETTER_SHARP_S) ? (__ASSERT_(0) (c)) : PL_mod_latin1_uc[ (U8) (c) ])))))
#define _XOPEN_PATH_MAX 1024
#define save_sptr(a) Perl_save_sptr(aTHX_ a)
#define NGX_HTTP_LAST 1
#define pTHX__FORMAT ", Perl interpreter: 0x%p"
#define MULTIARCH 
#define PRIXLEAST16 PRIX16
#define CLANG_DIAG_IGNORE_STMT(x) CLANG_DIAG_IGNORE(x) NOOP
#define isALNUM_LC_utf8_safe(p,e) isWORDCHAR_LC_utf8_safe(p,e)
#define ILL_ILLTRP 2
#define PCRE2_ERROR_BADOFFSET (-33)
#define SV_NOSTEAL 16
#define MAXLOGNAME 255
#define PerlSIO_fputc(c,f) fputc(c,f)
#define CvWEAKOUTSIDE_off(cv) (CvFLAGS(cv) &= ~CVf_WEAKOUTSIDE)
#define FP_SUBNORMAL 5
#define _pDEPTH 
#define U32_MAX_P1 (4.0 * (1 + ((U32_MAX) >> 2)))
#define _SUSECONDS_T 
#define PerlSIO_fputs(s,f) fputs(s,f)
#define EXTCONST extern const
#define do_pmop_dump(a,b,c) Perl_do_pmop_dump(aTHX_ a,b,c)
#define ILL_BADSTK 8
#define NGX_INVALID_FILE -1
#define PadnameOUTER(pn) (PadnameFLAGS(pn) & PADNAMEt_OUTER)
#define PERL_ARGS_ASSERT_MORTAL_GETENV assert(str)
#define PL_ptr_table (vTHX->Iptr_table)
#define save_I16(a) Perl_save_I16(aTHX_ a)
#define NGX_HTTP_PARSE_INVALID_HEADER 14
#define TCP_MAX_WINSHIFT 14
#define ALLOC_THREAD_KEY STMT_START { if (pthread_key_create(&PL_thr_key, 0)) { PERL_UNUSED_RESULT(write(2, STR_WITH_LEN("panic: pthread_key_create failed\n"))); exit(1); } } STMT_END
#define PRIXLEAST32 PRIX32
#define THREAD_MACHINE_STATE_MAX THREAD_STATE_MAX
#define SF_FIRMLINK 0x00800000
#define INFNAN_NV_U8_DECL EXTCONST union { NV nv; U8 u8[NVSIZE]; }
#define HAS_WAIT4 
#define SvOKp(sv) (SvFLAGS(sv) & (SVp_IOK|SVp_NOK|SVp_POK))
#define PERL_PV_ESCAPE_FIRSTCHAR 0x000800
#define NGX_HTTP_DELETE 0x00000020
#define PL_curstack (vTHX->Icurstack)
#define SUPERPAGE_NONE 0
#define CvDEPTHunsafe(sv) ((XPVCV*)MUTABLE_PTR(SvANY(sv)))->xcv_depth
#define PL_beginav (vTHX->Ibeginav)
#define PERL_GPROF_MONCONTROL(x) 
#define PL_locale_utf8ness (vTHX->Ilocale_utf8ness)
#define SOCK_DGRAM 2
#define VFS_CTL_UMOUNT 0x00010002
#define VM_PURGABLE_BEHAVIOR_SHIFT 6
#define withinCOUNT(c,l,n) (__ASSERT_((NV) (l) >= 0) __ASSERT_((NV) (n) >= 0) withinCOUNT_KNOWN_VALID_((c), (l), (n)))
#define Gid_t_sign 1
#define CxEVAL_TXT_REFCNTED(cx) (((cx)->blk_u16) & 0x40)
#define HW_AVAILCPU 25
#define _CS_XBS5_LP64_OFF64_LIBS 30
#define PUSHp(p,l) STMT_START { sv_setpvn(TARG, (p), (l)); PUSHTARG; } STMT_END
#define EAI_SOCKTYPE 10
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define CPUFAMILY_POWERPC_G4 0x77c184ae
#define CPUFAMILY_POWERPC_G5 0xed76d8aa
#define HAS_ATOLL 
#define ngx_buf_sync_only(b) ((b)->sync && !ngx_buf_in_memory(b) && !(b)->in_file && !(b)->flush && !(b)->last_buf)
#define OP_TYPE_IS(o,type) ((o) && (o)->op_type == (type))
#define load_module_nocontext Perl_load_module_nocontext
#define TASK_DYLD_INFO_COUNT (sizeof(task_dyld_info_data_t) / sizeof(natural_t))
#define AT_IPC_MSG ((unsigned char)1)
#define PERL_ARGS_ASSERT_HV_FETCH_ENT assert(keysv)
#define PL_argvout_stack (vTHX->Iargvout_stack)
#define HvAUXf_NO_DEREF 0x2
#define isPUNCT_utf8_safe(p,e) _generic_invlist_utf8_safe(_CC_PUNCT, p, e)
#define NGX_EINVAL EINVAL
#define reg_named_buff_scalar(a,b) Perl_reg_named_buff_scalar(aTHX_ a,b)
#define _STRUCT_MCONTEXT_AVX512_64_FULL struct __darwin_mcontext_avx512_64_full
#define __FLT128_MAX_EXP__ 16384
#define PCRE2_ERROR_DUPLICATE_SUBPATTERN_NAME 143
#define PRIXLEAST64 PRIX64
#define COP_SEQMAX_INC (PL_cop_seqmax++, (void)(PL_cop_seqmax == PERL_PADSEQ_INTRO && PL_cop_seqmax++))
#define PERL_ARGS_ASSERT_NEWANONLIST 
#define PTHREAD_MUTEX_NORMAL 0
#define PF_ECMA AF_ECMA
#define NGX_COMPILER "clang 13.0.0 (clang-1300.0.29.30)"
#define THREAD_TIME_CONSTRAINT_POLICY 2
#define mess_sv(a,b) Perl_mess_sv(aTHX_ a,b)
#define F_GETPATH 50
#define SvOOK(sv) (SvFLAGS(sv) & SVf_OOK)
#define HAS_ASINH 
#define dMARK SV **mark = PL_stack_base + POPMARK
#define DBVARMG_SIGNAL 2
#define KEV_INET_ARPRTRALIVE 10
#define I_32(what) (cast_i32((NV)(what)))
#define USER_POSIX2_VERSION 10
#define DTF_REWIND 0x0004
#define FSOPT_ATTR_CMN_EXTENDED 0x00000020
#define NGX_LOG_DEBUG_CORE 0x010
#define pcre2_set_recursion_limit PCRE2_SUFFIX(pcre2_set_recursion_limit_)
#define PERL_MAGIC_sv '\0'
#define __SLBF 0x0001
#define RXf_TAINTED_SEEN (1U<<(RXf_BASE_SHIFT+12))
#define IPPROTO_AX25 93
#define RENAME_SECLUDE 0x00000001
#define FST_EOF (-1)
#define IPV6_MULTICAST_HOPS 10
#define PERL_ARGS_ASSERT_CROAK_SV assert(baseex)
#define MACH_PORT_RECEIVE_STATUS_COUNT ((natural_t) (sizeof(mach_port_status_t)/sizeof(natural_t)))
#define NET_MAXID AF_MAX
#define EXC_EMULATION 4
#define MACH_SEND_MSG_FILTERED 0x10000017
#define PERL_ARGS_ASSERT_PARSE_LISTEXPR 
#define looks_like_number(a) Perl_looks_like_number(aTHX_ a)
#define PERL_ARGS_ASSERT_SV_RVWEAKEN assert(sv)
#define WARN_EXPERIMENTAL__REGEX_SETS 53
#define SIOCSIFPHYS _IOW('i', 54, struct ifreq)
#define save_mortalizesv(op) save_pushptr((void *)(op), SAVEt_MORTALIZESV)
#define REENTRANT_PROTO_S_CSBIE 57
#define PERL_ARGS_ASSERT_VDEB assert(pat)
#define FPS_BUSY 0x8000
#define CTLTYPE_STRUCT CTLTYPE_OPAQUE
#define KEV_DL_RRC_STATE_CHANGED 28
#define SSPUSHIV(i) (PL_savestack[PL_savestack_ix++].any_iv = (IV)(i))
#define SvPVutf8(sv,len) (SvPOK_utf8_nog(sv) ? ((len = SvCUR(sv)), SvPVX(sv)) : sv_2pvutf8(sv, &len))
#define SV_NODEFER SA_NODEFER
#define __WATCHOS_3_1 30100
#define RETPUSHNO RETURNX(PUSHs(&PL_sv_no))
#define CLOCK_ALARM_CURRES 3
#define HOST_SCHED_INFO_COUNT ((mach_msg_type_number_t) (sizeof(host_sched_info_data_t)/sizeof(integer_t)))
#define PERLDBf_NONAME 0x40
#define PL_warnhook (vTHX->Iwarnhook)
#define MACH_MSG_TYPE_PORT_SEND MACH_MSG_TYPE_MOVE_SEND
#define IS_PADCONST(v) (v && (SvREADONLY(v) || (SvIsCOW(v) && !SvLEN(v))))
#define Renewc(v,n,t,c) (v = (MEM_WRAP_CHECK_(n,t) (c*)MEM_LOG_REALLOC(n,t,v,saferealloc((Malloc_t)(v),(MEM_SIZE)((n)*sizeof(t))))))
#define EXC_MASK_RESOURCE (1 << EXC_RESOURCE)
#define PCRE2_PARTIAL_HARD 0x00000020u
#define PERL_FILE_IS_ABSOLUTE(f) (*(f) == '/')
#define EFL_AC 0x00040000
#define THREAD_LATENCY_QOS_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (thread_latency_qos_policy_data_t) / sizeof (integer_t)))
#define SIOCGIFMETRIC _IOWR('i', 23, struct ifreq)
#define EFL_AF 0x00000010
#define NGX_HTTP_GZIP_PROXIED_NO_STORE 0x0010
#define WARN_ONCE 14
#define __PTHREAD_MUTEXATTR_SIZE__ 8
#define PERL_ARGS_ASSERT_ALLOCCOPSTASH assert(hv)
#define PL_breakable_sub_gen (vTHX->Ibreakable_sub_gen)
#define PERL_PV_ESCAPE_QUOTE 0x000001
#define PERL_ARGS_ASSERT_NEWANONSUB 
#define case_222_SBOX32(hash,state,key) 
#define CPU_SUBTYPE_CELERON_MOBILE CPU_SUBTYPE_INTEL(7, 7)
#define SEM_R 0400
#define VM_MEMORY_RAWCAMERA 79
#define specialWARN(x) ((x) == pWARN_STD || (x) == pWARN_ALL || (x) == pWARN_NONE)
#define RXp_OFFS(prog) (prog->offs)
#define HAS_GETSERVBYPORT 
#define PerlSock_getprotoent getprotoent
#define PL_Assigned_invlist (vTHX->IAssigned_invlist)
#define IPV6_3542NEXTHOP 48
#define MACH_VOUCHER_ATTR_KEY_ATM ((mach_voucher_attr_key_t)1)
#define FFSYNC O_FSYNC
#define IPV6CTL_FORWSRCRT 5
#define _MACH_I386_KERN_RETURN_H_ 
#define TCPOPT_SACK_HDR (TCPOPT_NOP<<24|TCPOPT_NOP<<16|TCPOPT_SACK<<8)
#define S_IWRITE S_IWUSR
#define PERL_MAGIC_READONLY_ACCEPTABLE 0x40
#define PERL_ARGS_ASSERT_CMPCHAIN_FINISH assert(ch)
#define BHKf_bhk_start 0x01
#define EFL_CF 0x00000001
#define IPV6_BINDV6ONLY IPV6_V6ONLY
#define intro_my() Perl_intro_my(aTHX)
#define PERL_ARGS_ASSERT_REENTRANT_SIZE 
#define PL_vtbl_pack PL_magic_vtables[want_vtbl_pack]
#define F_GETPROTECTIONLEVEL 77
#define sv_pvbyte(sv) SvPVbyte_nolen(sv)
#define UF_HIDDEN 0x00008000
#define PERL_ARGS_ASSERT_SIGHANDLER1 
#define PERL_ARGS_ASSERT_SIGHANDLER3 
#define foldEQ Perl_foldEQ
#define PERL_ARGS_ASSERT_MY_DIRFD 
#define SO_REUSESHAREUID 0x1025
#define my_atof2(a,b) my_atof3(a,b,0)
#define my_atof3(a,b,c) Perl_my_atof3(aTHX_ a,b,c)
#define PERL_ARGS_ASSERT_AV_LEN assert(av)
#define ATTR_CMN_DEVID 0x00000002
#define PL_vtbl_isaelem PL_magic_vtables[want_vtbl_isaelem]
#define VM_SWAPUSAGE 5
#define FLT_DIG __FLT_DIG__
#define DEBUG_B(a) 
#define DEBUG_C(a) 
#define DEBUG_D(a) 
#define MALLOC_CHECK_TAINT(argc,argv,env) 
#define NGX_HTTP_SRV_CONF_OFFSET offsetof(ngx_http_conf_ctx_t, srv_conf)
#define PERL_ARGS_ASSERT_PERLIO_CLOSE 
#define DEBUG_L(a) 
#define DEBUG_M(a) 
#define SIG_UNBLOCK 2
#define DEBUG_P(a) 
#define DEBUG_R(a) 
#define DEBUG_S(a) 
#define DEBUG_T(a) 
#define DEBUG_U(a) 
#define DEBUG_X(a) 
#define PERL_ARGS_ASSERT_MFREE 
#define MACH_RCV_TRAILER_CTX 4
#define DEBUG_f(a) 
#define HAS_ISLESS 
#define DEBUG_i(a) 
#define DEBUG_m(a) 
#define DEBUG_o(a) 
#define DEBUG_r(a) 
#define DEBUG_s(a) 
#define DEBUG_t(a) 
#define DEBUG_u(a) 
#define AF_DLI 13
#define DEBUG_y(a) 
#define NGX_USE_KQUEUE_EVENT 0x00000008
#define PERL_ARGS_ASSERT_SV_MAGICEXT_MGLOB assert(sv)
#define case_163_SBOX32(hash,state,key) 
#define KEV_INET_CHANGED_ADDR 2
#define PerlIO_set_cnt(a,b) Perl_PerlIO_set_cnt(aTHX_ a,b)
#define FPC_UE 0x0010
#define FP_SNAN FP_NAN
#define isXDIGIT_LC_utf8(p,e) isXDIGIT_LC_utf8_safe(p, e)
#define HOST_INFO_MAX (1024)
#define GETNETBYADDR_R_PROTO 0
#define MACH_MSGH_BITS_ZERO 0x00000000
#define U_V(what) (cast_uv((NV)(what)))
#define _POSIX_MEMLOCK (-1)
#define USER_TZNAME_MAX 20
#define i386_FLOAT_STATE_COUNT ((mach_msg_type_number_t) (sizeof(i386_float_state_t)/sizeof(unsigned int)))
#define regfree_internal(a) Perl_regfree_internal(aTHX_ a)
#define VOL_CAP_FMT_CASE_SENSITIVE 0x00000100
#define SUB_MACH_TIMESPEC(t1,t2) do { if (((t1)->tv_nsec -= (t2)->tv_nsec) < 0) { (t1)->tv_nsec += (long) NSEC_PER_SEC; (t1)->tv_sec -= 1; } (t1)->tv_sec -= (t2)->tv_sec; } while (0)
#define MACH_MSG_TYPE_MOVE_RECEIVE 16
#define PCRE2_SUBSTITUTE_UNSET_EMPTY 0x00000400u
#define PERL_ARGS_ASSERT_SV_CMP 
#define PERL_ARGS_ASSERT_SV_UNI_DISPLAY assert(dsv); assert(ssv)
#define WARN_REDUNDANT 65
#define x86_DEBUG_STATE 12
#define VM_MEMORY_ACCELERATE 75
#define SIOCSHIWAT _IOW('s', 0, int)
#define UTF8_ALLOW_FFFF 0
#define case_13_SBOX32(hash,state,key) _SBOX32_CASE(13,hash,state,key)
#define HAS_GETHOSTBYADDR 
#define PERL_ARGS_ASSERT__INVERSE_FOLDS assert(first_folds_to); assert(remaining_folds_to)
#define KERN_RPC_CONTINUE_ORPHAN 45
#define BYTE_ORDER __DARWIN_BYTE_ORDER
#define PerlProc_times(t) times((t))
#define LIKELY(cond) EXPECT(cBOOL(cond),TRUE)
#define IPPROTO_NHRP 54
#define case_68_SBOX32(hash,state,key) 
#define REALTIME_CLOCK 0
#define IN6ADDR_LINKLOCAL_ALLNODES_INIT {{{ 0xff, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01 }}}
#define HAS_UNION_SEMUN 
#define NGX_HTTP_SSI 1
#define VOL_CAP_INT_CLONE 0x00010000
#define PERL_MAGIC_utf8 'w'
#define __SIZEOF_INT128__ 16
#define PERL_ARGS_ASSERT_MAGIC_GETPOS assert(sv); assert(mg)
#define __DARWIN_NO_LONG_LONG 0
#define PERL_ARGS_ASSERT_UNSHARE_HEK 
#define LATIN_SMALL_LIGATURE_LONG_S_T 0xFB05
#define PUSHmortal PUSHs(sv_newmortal())
#define VM_MEMORY_SWIFT_METADATA 83
#define M16KCLBYTES (1 << M16KCLSHIFT)
#define TASK_BASIC2_INFO_32 6
#define ILL_COPROC 7
#define IPV6_HOPLIMIT IPV6_3542HOPLIMIT
#define RTLD_GLOBAL 0x8
#define NGX_FILE_DIRECTORY O_DIRECTORY
#define HAS_FREXPL 
#define RXp_MATCH_COPIED_off(prog) (RXp_EXTFLAGS(prog) &= ~RXf_COPY_DONE)
#define PERL_ARGS_ASSERT_DIE 
#define NGX_HTTP_CONNECT 0x00010000
#define PCRE2_ERROR_JIT_BADOPTION (-45)
#define EINVAL 22
#define PERL_ARGS_ASSERT_GV_FETCHPVN_FLAGS assert(name)
#define PERL_ARGS_ASSERT_REG_NAMED_BUFF_FIRSTKEY assert(rx)
#define WSTOPSIG(x) (_W_INT(x) >> 8)
#define __UINT_LEAST16_TYPE__ short unsigned int
#define TYPE_DIGITS(T) BIT_DIGITS(sizeof(T) * 8)
#define PERL_ARGS_ASSERT_SAVE_SET_SVFLAGS assert(sv)
#define UNI_IS_INVARIANT(cp) UVCHR_IS_INVARIANT(cp)
#define PERL_ARGS_ASSERT_HV_COMMON 
#define safesysfree Perl_safesysfree
#define MNT_NODEV 0x00000010
#define IPPROTO_UDP 17
#define EXC_CRASH 10
#define EFL_ID 0x00200000
#define RAND_MAX 0x7fffffff
#define HAS_ISASCII 
#define DBVARMG_SINGLE 0
#define Uid_t_sign 1
#define PF_DATAKIT AF_DATAKIT
#define PerlLIO_lstat(name,buf) lstat((name), (buf))
#define _SYS_LOCK_H_ 
#define blk_oldmarksp cx_u.cx_blk.blku_oldmarksp
#define __need___va_list 
#define NGX_HAVE_LITTLE_ENDIAN 1
#define isALPHANUMERIC_uni(c) isALPHANUMERIC_uvchr(c)
#define O_DP_GETRAWENCRYPTED 0x0001
#define op_linklist(a) Perl_op_linklist(aTHX_ a)
#define PERL_ARGS_ASSERT_DO_TELL assert(gv)
#define cophh_new_empty() ((COPHH *)NULL)
#define __INT16_MAX__ 0x7fff
#define PERL_MAGIC_isa 'I'
#define CTLFLAG_LOCKED 0x00800000
#define VM_VOLATILE_GROUP_1 (1 << VM_VOLATILE_GROUP_SHIFT)
#define PCRE2_ERROR_INTERNAL_MISSING_SUBPATTERN 153
#define __SIZE_TYPE__ long unsigned int
#define P_DIRTY_IDLE_EXIT_ENABLED (P_DIRTY_TRACK|P_DIRTY_ALLOW_IDLE_EXIT)
#define GETPID 4
#define HvAMAGIC_on(hv) (SvFLAGS(hv) |= SVf_AMAGIC)
#define HAS_FTELLO 
#define PERL_ARGS_ASSERT_SV_POS_B2U_FLAGS assert(sv)
#define Gid_t gid_t
#define VM_MEMORY_LIBNETWORK 89
#define PL_DBgv (vTHX->IDBgv)
#define SvTIED_obj(sv,mg) ((mg)->mg_obj ? (mg)->mg_obj : sv_2mortal(newRV(sv)))
#define _NGX_HTTP_CACHE_H_INCLUDED_ 
#define PERL_ARGS_ASSERT_PERL_ALLOC 
#define MDEREF_reload 0
#define PERL_POISON_EXPR(x) 
#define MALLOC_TERM 
#define PL_exitlist (vTHX->Iexitlist)
#define Netdb_host_t char *
#define SSPUSHUV(u) (PL_savestack[PL_savestack_ix++].any_uv = (UV)(u))
#define NOTE_CRITICAL 0x00000020
#define ATTR_VOL_ENCODINGSUSED 0x00010000
#define PERL_ARGS_ASSERT_UNSHAREPVN 
#define case_128_SBOX32(hash,state,key) 
#define __GNUC_WIDE_EXECUTION_CHARSET_NAME "UTF-32LE"
#define NGX_FILE_RDONLY O_RDONLY
#define OPpARGELEM_AV 0x02
#define MACH_MSGH_BITS_LOCAL(bits) (((bits) & MACH_MSGH_BITS_LOCAL_MASK) >> 8)
#define PERL_MAGIC_dbfile 'L'
#define SIOCGDRVSPEC _IOWR('i', 123, struct ifdrv)
#define case_171_SBOX32(hash,state,key) 
#define __INT8_TYPE__ signed char
#define ATTR_VOL_MOUNTFLAGS 0x00004000
#define VM_PURGABLE_STATE_MASK 3
#define pcre2_substring_get_bynumber PCRE2_SUFFIX(pcre2_substring_get_bynumber_)
#define OPpLVREF_CV 0x30
#define PL_tmps_max (vTHX->Itmps_max)
#define PL_cop_seqmax (vTHX->Icop_seqmax)
#define _CS_XBS5_LP64_OFF64_LINTFLAGS 31
#define _SC_PRIORITIZED_IO 34
#define PERL_REGCHARCLASS_H_ 
#define PERL_ARGS_ASSERT_PERLLIO_OPEN_CLOEXEC assert(file)
#define PERL_ARGS_ASSERT_IS_UTF8_FIXED_WIDTH_BUF_FLAGS 
#define HAS_SENDMSG 
#define LC_NUMERIC 4
#define __DARWIN_NOCANCEL(sym) __asm("_" __STRING(sym) __DARWIN_SUF_NON_CANCELABLE)
#define PERL_ARGS_ASSERT_CROAK_MEMORY_WRAP 
#define PerlMemShared_free_lock() 
#define MACH_RCV_TRAILER_SEQNO 1
#define F_GLOBAL_NOCACHE 55
#define Gid_t_size 4
#define MAXPHYSIO MAXPHYS
#define EXEC_PAT_MODS "e"
#define IS_NUMBER_NEG 0x08
#define VM_VOLATILE_GROUP_7 (7 << VM_VOLATILE_GROUP_SHIFT)
#define PERL_ARGS_ASSERT_REGFREE_INTERNAL assert(rx)
#define PERL_ARGS_ASSERT_MAGIC_SETVEC assert(sv); assert(mg)
#define NGX_HTTP_CACHE_VARY_LEN 128
#define ENTER push_scope()
#define is_utf8_valid_partial_char(s,e) is_utf8_valid_partial_char_flags(s, e, 0)
#define SvNV_set(sv,val) STMT_START { assert(PL_valid_types_NV_set[SvTYPE(sv) & SVt_MASK]); assert(!isGV_with_GP(sv)); (((XPVNV*)SvANY(sv))->xnv_u.xnv_nv = (val)); } STMT_END
#define NGX_RESOLVE_TXT 16
#define MULTICALL STMT_START { PL_op = multicall_cop; CALLRUNOPS(aTHX); } STMT_END
#define ngx_rbt_is_red(node) ((node)->color)
#define HAS_FGETPOS 
#define SO_NOADDRERR 0x1023
#define SH_PATH "/bin/sh"
#define EFL_NT 0x00004000
#define HAS_UNSETENV 
#define MACH_PORT_TYPE_LABELH MACH_PORT_TYPE(MACH_PORT_RIGHT_LABELH)
#define LIST_HEAD(name,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct name { struct type *lh_first; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define grok_number_flags(a,b,c,d) Perl_grok_number_flags(aTHX_ a,b,c,d)
#define SIOCGIFPHYS _IOWR('i', 53, struct ifreq)
#define PERL_ARGS_ASSERT_OP_FREE 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_1(x) 
#define SVf_BREAK 0x04000000
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_2(x) 
#define hv_iterkeysv(a) Perl_hv_iterkeysv(aTHX_ a)
#define cLOGOPo cLOGOPx(o)
#define Perl_fp_class_denorm(x) (Perl_fp_class(x)==FP_SUBNORMAL)
#define G_WARN_ALL_OFF 4
#define cLOGOPx(o) ((LOGOP*)(o))
#define EFL_OF 0x00000800
#define gv_handler(a,b) Perl_gv_handler(aTHX_ a,b)
#define DEBUG_Xv(a) 
#define MPG_FLAGS_STRICT_REPLY_MISMATCHED_PERSONA (0x10ull << 56)
#define IPC_SPACE_NULL ((ipc_space_t) 0)
#define HeKLEN(he) HEK_LEN(HeKEY_hek(he))
#define hv_exists(hv,key,klen) cBOOL(hv_common_key_len((hv), (key), (klen), HV_FETCH_ISEXISTS, NULL, 0))
#define RX_MATCH_TAINTED_on(rx_sv) (RX_EXTFLAGS(rx_sv) |= RXf_TAINTED_SEEN)
#define sv_setpviv_mg(a,b) Perl_sv_setpviv_mg(aTHX_ a,b)
#define Perl_fp_class(x) fpclassify(x)
#define PL_hintgv (vTHX->Ihintgv)
#define EFL_IOPL_USER 0x00003000
#define PROC_FLAG_IMPORTANCE_DONOR 0x400000
#define case_85_SBOX32(hash,state,key) 
#define __FLT32X_MIN_10_EXP__ (-307)
#define HAS_SETHOSTENT 
#define THREAD_INFO_MAX (32)
#define __LDBL_EPSILON__ 1.08420217248550443400745280086994171e-19L
#define _PW_KEYBYNUM '2'
#define KEY_sigvar 0xFFFF
#define padadd_OUR 0x01
#define F_FULLFSYNC 51
#define ATTR_FILE_TOTALSIZE 0x00000002
#define DEBUG_yv_TEST_ DEBUG_BOTH_FLAGS_TEST_(DEBUG_y_FLAG, DEBUG_v_FLAG)
#define PERL_ARGS_ASSERT_SV_SETPVN_MG assert(sv); assert(ptr)
#define POLICY_TIMESHARE 1
#define sv_magicext(a,b,c,d,e,f) Perl_sv_magicext(aTHX_ a,b,c,d,e,f)
#define PERL_ARGS_ASSERT_REFCOUNTED_HE_CHAIN_2HV 
#define PERL_ARGS_ASSERT_SV_REPLACE assert(sv); assert(nsv)
#define __SSE_MATH__ 1
#define StructCopy(s,d,t) (*((t*)(d)) = *((t*)(s)))
#define TIOCGETD _IOR('t', 26, int)
#define EFL_RF 0x00010000
#define SVf_OOK 0x02000000
#define cCOP cCOPx(PL_op)
#define PERL_ARGS_ASSERT_MG_FIND_MGLOB assert(sv)
#define ATTR_CMN_FULLPATH 0x08000000
#define toFOLD(c) toLOWER(c)
#define PERL_ARGS_ASSERT_PARSE_ARITHEXPR 
#define EVAL_INEVAL 1
#define __k8 1
#define PERL_ARGS_ASSERT_SV_CMP_LOCALE_FLAGS 
#define HAS_OPEN3 
#define pcre2_set_compile_extra_options PCRE2_SUFFIX(pcre2_set_compile_extra_options_)
#define __WATCHOS_DEPRECATED(_start,_dep,_msg) 
#define MEM_WRAP_CHECK(n,t) (void)(UNLIKELY(_MEM_WRAP_WILL_WRAP(n,t)) && (croak_memory_wrap(),0))
#define EFL_SF 0x00000080
#define HAS_SCALBN 
#define EVFILT_VNODE (-4)
#define KEV_DL_IF_ATTACHED 9
#define host_set_atm_notification_port(host,port) (host_set_special_port((host), HOST_ATM_NOTIFICATION_PORT, (port)))
#define VM_REGION_INFO_MAX (1024)
#define PCRE2_ERROR_BADSERIALIZEDDATA (-62)
#define hv_delayfree_ent(a,b) Perl_hv_delayfree_ent(aTHX_ a,b)
#define _SYS_PROC_H_ 
#define PerlIO_get_bufsiz(a) Perl_PerlIO_get_bufsiz(aTHX_ a)
#define TASK_POWER_INFO_V2_COUNT_OLD ((mach_msg_type_number_t) (sizeof (task_power_info_v2_data_t) - sizeof(uint64_t)*2) / sizeof (natural_t))
#define OA_RETSCALAR 4
#define SIGCONT 19
#define _LC_LAST_MASK (1 << (_LC_NUM_MASK - 1))
#define MADV_FREE 5
#define CTLTYPE_OPAQUE 5
#define sv_2pvutf8(sv,lp) sv_2pvutf8_flags(sv, lp, SV_GMAGIC)
#define EFL_TF 0x00000100
#define LIST_SWAP(head1,head2,type,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH do { struct type *swap_tmp = LIST_FIRST((head1)); LIST_FIRST((head1)) = LIST_FIRST((head2)); LIST_FIRST((head2)) = swap_tmp; if ((swap_tmp = LIST_FIRST((head1))) != NULL) swap_tmp->field.le_prev = &LIST_FIRST((head1)); if ((swap_tmp = LIST_FIRST((head2))) != NULL) swap_tmp->field.le_prev = &LIST_FIRST((head2)); } while (0) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define OpLASTSIB_set(o,parent) ((o)->op_moresib = 0, (o)->op_sibparent = (parent))
#define PL_sharehook (vTHX->Isharehook)
#define HOST_KEXTD_PORT (8 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define INT_LEAST64_MAX INT64_MAX
#define HAS_FLOCK_PROTO 
#define __WATCHOS_3_1_1 30101
#define NGX_INET_ADDRSTRLEN (sizeof("255.255.255.255") - 1)
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define PERL_ARGS_ASSERT_CK_TELL assert(o)
#define grok_hex(s,lp,fp,rp) grok_bin_oct_hex(s, lp, fp, rp, 4, _CC_XDIGIT, 'x')
#define KERN_MAXPROC 6
#define TIOCSDTR _IO('t', 121)
#define HOST_PRIORITY_INFO_COUNT ((mach_msg_type_number_t) (sizeof(host_priority_info_data_t)/sizeof(integer_t)))
#define VM_REGION_BASIC_INFO_64 9
#define SET_THR(t) PERL_SET_THX(t)
#define PERL_ARGS_ASSERT_CK_WARNER_D assert(pat)
#define SO_TIMESTAMP_MONOTONIC 0x0800
#define HS_CXT aTHX
#define PerlSock_getservent getservent
#define SAVEt_HPTR 32
#define PL_na (vTHX->Ina)
#define PERL_WARNHOOK_FATAL (&PL_sv_placeholder)
#define GETTARGET targ = PAD_SV(PL_op->op_targ)
#define UTF8_IS_NONCHAR(s,e) UTF8_IS_NONCHAR_GIVEN_THAT_NON_SUPER_AND_GE_PROBLEMATIC(s, e)
#define DEBUG_y_FLAG 0x10000000
#define CONNECT_DATA_IDEMPOTENT 0x2
#define _W_INT(w) (*(int *)&(w))
#define PERL_ARGS_ASSERT_GV_AUTOLOAD4 
#define KEV_INET6_ADDR_DELETED 3
#define AUDIT_WINDATA 0x0020
#define PERL_ARGS_ASSERT_NEWPADNAMEPVN assert(s)
#define sv_cmp_locale(sv1,sv2) sv_cmp_locale_flags(sv1, sv2, SV_GMAGIC)
#define REENTRANT_PROTO_I_LISBI 34
#define PERL_ARGS_ASSERT_NEWCONDOP assert(first)
#define HAS_BUILTIN_MUL_OVERFLOW 
#define PerlSock_getprotobyname(n) getprotobyname(n)
#define AF_OSI AF_ISO
#define RX_MATCH_UTF8_set(rx_sv,t) (RXp_MATCH_UTF8_set(ReANY(rx_sv), t))
#define SHARP_S_SKIP 2
#define SYNC_VOLUME_WAIT 0x02
#define VM_REGION_EXTENDED_INFO 13
#define IPPORT_HIFIRSTAUTO 49152
#define PERL_ARGS_ASSERT_HV_BACKREFERENCES_P assert(hv)
#define FFDSYNC O_DSYNC
#define IN_PRIVATE(i) ((((u_int32_t)(i) & 0xff000000) == 0x0a000000) || (((u_int32_t)(i) & 0xfff00000) == 0xac100000) || (((u_int32_t)(i) & 0xffff0000) == 0xc0a80000))
#define csighandler Perl_csighandler
#define TH_STATE_HALTED 5
#define S_IFCHR 0020000
#define KERN_KDGETENTROPY 16
#define ngx_memory_barrier() __sync_synchronize()
#define U16SIZE 2
#define LATENCY_QOS_LAUNCH_DEFAULT_TIER LATENCY_QOS_TIER_3
#define NGX_HTTP_SSI_COND_IF 1
#define RETSETNO RETURNX(SETs(&PL_sv_no))
#define valid_utf8_to_uvchr Perl_valid_utf8_to_uvchr
#define PERL_ARGS_ASSERT_SV_CAT_DECODE assert(dsv); assert(encoding); assert(ssv); assert(offset); assert(tstr)
#define VOL_CAP_FMT_NO_PERMISSIONS 0x00400000
#define SAVEGENERICPV(s) save_generic_pvref((char**)&(s))
#define SvIOK_UV(sv) ((SvFLAGS(sv) & (SVf_IOK|SVf_IVisUV)) == (SVf_IOK|SVf_IVisUV))
#define MACH_MSGH_BITS_HAS_LOCAL(bits) (MACH_MSGH_BITS_LOCAL(bits) != MACH_MSGH_BITS_ZERO)
#define PL_SCX_invlist (vTHX->ISCX_invlist)
#define SvPVbyte_or_null_nomg(sv,len) (SvPOK_utf8_nog(sv) ? ((len = SvCUR(sv)), SvPVX(sv)) : SvOK(sv) ? sv_2pvbyte_flags(sv, &len, 0) : ((len = 0), NULL))
#define S_IFDIR 0040000
#define _SCHED_H_ 
#define CvPADLIST(sv) (*(assert_(!CvISXSUB((CV*)(sv))) &(((XPVCV*)MUTABLE_PTR(SvANY(sv)))->xcv_padlist_u.xcv_padlist)))
#define USER_POSIX2_UPE 18
#define EBUSY 16
#define EPROCLIM 67
#define AI_UNUSABLE 0x10000000
#define PL_cshlen (sizeof(CSH "") - 1)
#define sv_2pvutf8_nolen(sv) sv_2pvutf8(sv, 0)
#define OPpHINT_STRICT_REFS 0x02
#define VM_MEMORY_SHARED_PMAP 32
#define KERN_SYMFILE 37
#define kGVOP_gv cGVOPx_gv(kid)
#define NGX_PROCESS_DETACHED -5
#define OS_ASSUME_NONNULL_BEGIN 
#define GLOB_QUOTE 0x0400
#define PL_debug_pad (vTHX->Idebug_pad)
#define PERL_ARGS_ASSERT_PUSH_SCOPE 
#define ctob(x) ((x)<<PGSHIFT)
#define __FLT64_IS_IEC_60559__ 2
#define CPU_SUBTYPE_LITTLE_ENDIAN ((cpu_subtype_t) 0)
#define NGX_HTTP_UPSTREAM_FT_UPDATING 0x00000800
#define EFL_ZF 0x00000040
#define UNICODE_IS_SUPER(uv) UNLIKELY((UV) (uv) > PERL_UNICODE_MAX)
#define VM_MEMORY_MALLOC_NANO 11
#define __FLT32X_MIN_EXP__ (-1021)
#define pcre2_real_compile_context PCRE2_SUFFIX(pcre2_real_compile_context_)
#define PERL_ARGS_ASSERT_SAVE_I32 assert(intp)
#define NI_NUMERICSERV 0x00000008
#define KERN_AIOTHREADS 48
#define sv_utf8_upgrade_flags_grow(a,b,c) Perl_sv_utf8_upgrade_flags_grow(aTHX_ a,b,c)
#define TH_FLAGS_IDLE 0x2
#define TIOCSWINSZ _IOW('t', 103, struct winsize)
#define MACH_SEND_INVALID_VOUCHER 0x10000005
#define ATTR_FILE_FORKCOUNT 0x00000080
#define _SC_SAVED_IDS 7
#define NGX_HAVE_SYS_STATVFS_H 1
#define TH_FLAGS_SWAPPED 0x1
#define MACH_MSGH_BITS_IMPHOLDASRT 0x10000000U
#define dTOPiv IV value = TOPi
#define MNT_ROOTFS 0x00004000
#define mXPUSHi(i) STMT_START { EXTEND(sp,1); mPUSHi(i); } STMT_END
#define mXPUSHn(n) STMT_START { EXTEND(sp,1); mPUSHn(n); } STMT_END
#define mXPUSHp(p,l) STMT_START { EXTEND(sp,1); mPUSHp((p), (l)); } STMT_END
#define mXPUSHs(s) XPUSHs(sv_2mortal(s))
#define mXPUSHu(u) STMT_START { EXTEND(sp,1); mPUSHu(u); } STMT_END
#define __INT_FAST16_MAX__ 0x7fff
#define PERL_ARGS_ASSERT_CHECK_UTF8_PRINT assert(s)
#define CXt_FORMAT 10
#define HOST_VM_INFO_REV0_COUNT ((mach_msg_type_number_t) (HOST_VM_INFO_REV1_COUNT - 2))
#define VM_BEHAVIOR_DEFAULT ((vm_behavior_t) 0)
#define PL_e_script (vTHX->Ie_script)
#define SAVEGENERICSV(s) save_generic_svref((SV**)&(s))
#define MSG_OOB 0x1
#define pcre2_real_match_context PCRE2_SUFFIX(pcre2_real_match_context_)
#define kPMOP cPMOPx(kid)
#define __DBL_EPSILON__ ((double)2.22044604925031308084726333618164062e-16L)
#define DEL_NATIVE 0x7F
#define HW_DISKSTATS 9
#define MEMORY_OBJECT_NAME_NULL ((memory_object_name_t) 0)
#define isDIGIT_L1(c) isDIGIT_A(c)
#define LATIN_SMALL_LETTER_SHARP_S_UTF8 "\xC3\x9F"
#define PERL_ARGS_ASSERT_SV_ISA_SV assert(sv); assert(namesv)
#define PERL_ARGS_ASSERT_PADNAMELIST_FREE assert(pnl)
#define Uid_t_size 4
#define OPpLVREF_SV 0x00
#define INT_LEAST64_MIN INT64_MIN
#define NGX_HTTP_DISCARD_BUFFER_SIZE 4096
#define major(x) ((int32_t)(((u_int32_t)(x) >> 24) & 0xff))
#define REENTRANT_PROTO_S_TSBI 68
#define is_XDIGIT_cp_high(cp) ( inRANGE_helper_(UV, cp, 0xFF10, 0xFF19) || ( 0xFF19 < cp && ( inRANGE_helper_(UV, cp, 0xFF21, 0xFF26) || inRANGE_helper_(UV, cp, 0xFF41, 0xFF46) ) ) )
#define GLOB_NOMATCH (-3)
#define PERL_ARGS_ASSERT_DEFELEM_TARGET assert(sv)
#define CPU_SUBTYPE_486SX CPU_SUBTYPE_INTEL(4, 8)
#define ngx_queue_insert_after ngx_queue_insert_head
#define PERL_ARGS_ASSERT_CV_CLONE_INTO assert(proto); assert(target)
#define SO_NOTIFYCONFLICT 0x1026
#define __FLT64_DIG__ 15
#define PERL_ARGS_ASSERT_SAFESYSREALLOC 
#define PERL_ARGS_ASSERT_MAGIC_REGDATUM_GET assert(sv); assert(mg)
#define EROFS 30
#define ngx_value_helper(n) #n
#define IN_EXPERIMENTAL(i) (((u_int32_t)(i) & 0xf0000000) == 0xf0000000)
#define PERL_ARGS_ASSERT_CUSTOM_OP_GET_FIELD assert(o)
#define PCRE2_ERROR_INTERNAL_OVERRAN_WORKSPACE 152
#define MAC_OS_X_VERSION_10_10 101000
#define MAC_OS_X_VERSION_10_11 101100
#define MAC_OS_X_VERSION_10_12 101200
#define MAC_OS_X_VERSION_10_13 101300
#define MAC_OS_X_VERSION_10_14 101400
#define MAC_OS_X_VERSION_10_15 101500
#define MAC_OS_X_VERSION_10_16 101600
#define load_module Perl_load_module_nocontext
#define _SC_SEMAPHORES 37
#define HAS_SETEUID 
#define TASK_POWER_INFO_COUNT ((mach_msg_type_number_t) (sizeof (task_power_info_data_t) / sizeof (natural_t)))
#define ptr_table_fetch(a,b) Perl_ptr_table_fetch(aTHX_ a,b)
#define sv_pvn_force_nomg(sv,lp) sv_pvn_force_flags(sv, lp, 0)
#define lex_next_chunk(a) Perl_lex_next_chunk(aTHX_ a)
#define RTLD_SELF ((void *) -3)
#define NV_NAN PL_nan.nv
#define OPf_KIDS 4
#define UINTMAX_MAX UINTMAX_C(18446744073709551615)
#define MDEREF_MASK 0x7F
#define PL_sv_count (vTHX->Isv_count)
#define TASK_VM_INFO_REV1_COUNT ((mach_msg_type_number_t) (TASK_VM_INFO_REV2_COUNT - 4))
#define PerlProc_getuid() getuid()
#define _MACH_VOUCHER_TYPES_H_ 
#define ENV_READ_UNLOCK PERL_READ_UNLOCK(&PL_env_mutex)
#define RX_BUFF_IDX_CARET_POSTMATCH -4
#define PAGE_SIZE vm_page_size
#define foldEQ_latin1 Perl_foldEQ_latin1
#define SVpad_OUR PADNAMEt_OUR
#define PERL_ARGS_ASSERT_SV_POS_U2B assert(offsetp)
#define SIOCADDMULTI _IOW('i', 49, struct ifreq)
#define PERL_ARGS_ASSERT_SAVE_HASH assert(gv)
#define hv_delete_ent(hv,key,flags,hash) (MUTABLE_SV(hv_common((hv), (key), NULL, 0, 0, (flags) | HV_DELETE, NULL, (hash))))
#define save_iv(a) Perl_save_iv(aTHX_ a)
#define PERL_ARGS_ASSERT_PERL_PARSE assert(my_perl)
#define CPUSUBFAMILY_UNKNOWN 0
#define EXC_I386_BPTFLT 3
#define perl_call_argv(a,b,c) call_argv(a,b,c)
#define SV_COW_SHARED_HASH_KEYS 512
#define SvTAINT(sv) STMT_START { assert(TAINTING_get || !TAINT_get); if (UNLIKELY(TAINT_get)) SvTAINTED_on(sv); } STMT_END
#define _CS_POSIX_V6_LP64_OFF64_CFLAGS 8
#define SvRXOK(sv) cBOOL(Perl_get_re_arg(aTHX_ sv))
#define __GNUC_EXECUTION_CHARSET_NAME "UTF-8"
#define ngx_set_connection_log(c,l) c->log->file = l->file; c->log->next = l->next; c->log->writer = l->writer; c->log->wdata = l->wdata; if (!(c->log->log_level & NGX_LOG_DEBUG_CONNECTION)) { c->log->log_level = l->log_level; }
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
#define NGX_FILE_TRUNCATE (O_CREAT|O_TRUNC)
#define KIPC_SOCKBUF_WASTE 2
#define NI_DGRAM 0x00000010
#define PRIxFAST16 PRIx16
#define OS_COMPILER_CAN_ASSUME(expr) ((void)(expr))
#define SAVEADELETE(a,k) save_adelete(MUTABLE_AV(a), (SSize_t)(k))
#define ngx_fd_info(fd,sb) fstat(fd, sb)
#define MEMORY_OBJECT_COPY_NONE 0
#define lex_start(a,b,c) Perl_lex_start(aTHX_ a,b,c)
#define OPpEXISTS_SUB 0x40
#define SCNo16 "ho"
#define SAVEDESTRUCTOR_X(f,p) save_destructor_x((DESTRUCTORFUNC_t)(f), (void*)(p))
#define I_LOCALE 
#define sv_2bool(sv) sv_2bool_flags(sv, SV_GMAGIC)
#define IPV6CTL_NEIGHBORGCTHRESH 46
#define HAS_SOCKADDR_IN6 
#define SAVEINT(i) save_int((int*)&(i))
#define OP_IS_DIRHOP(op) ((op) >= OP_READDIR && (op) <= OP_CLOSEDIR)
#define _KEY_T 
#define MACH_SEND_TOO_LARGE 0x1000000e
#define IOPOL_VFS_TRIGGER_RESOLVE_DEFAULT 0
#define PCRE2_ERROR_DFA_UCOND (-40)
#define LIST_CHECK_HEAD(head,field) 
#define VFS_NUMMNTOPS 1
#define case_76_SBOX32(hash,state,key) 
#define HOST_SECURITY_NULL ((host_security_t) 0)
#define _SS_ALIGNSIZE (sizeof(__int64_t))
#define OA_DEFGV 128
#define CPU_SUBTYPE_ITANIUM_2 CPU_SUBTYPE_INTEL(11, 1)
#define __PRAGMA_REDEFINE_EXTNAME 1
#define CvDEPTH(sv) (*Perl_CvDEPTH((const CV *)sv))
#define isGRAPH_LC_uvchr(c) _generic_LC_invlist_uvchr(isGRAPH_LC, _CC_GRAPH, c)
#define MACH_VOUCHER_ATTR_VALUE_MAX_NESTED ((mach_voucher_attr_value_handle_array_size_t)4)
#define __WATCHOS_4_0 40000
#define SIOCSIFMAC _IOW('i', 131, struct ifreq)
#define pcre2_compile_context_create PCRE2_SUFFIX(pcre2_compile_context_create_)
#define PERL_ARGS_ASSERT_PERLIO_WRITE assert(vbuf)
#define EFTYPE 79
#define NGX_HTTP_CACHE_VERSION 5
#define EXPR_NEST_MAX 32
#define PERL_ARGS_ASSERT_SV_UTF8_ENCODE assert(sv)
#define SI_MESGQ 0x10005
#define _VA_LIST_DEFINED 
#define PERL_ARGS_ASSERT_UTF16_TO_UTF8_REVERSED assert(p); assert(d); assert(newlen)
#define PadlistMAX(pl) (pl)->xpadl_max
#define DBVARMG_TRACE 1
#define HAS_LSTAT 
#define PMf_HAS_CV (1U<<(PMf_BASE_SHIFT+13))
#define gv_fetchpvn gv_fetchpvn_flags
#define VOL_CAP_INT_MANLOCK 0x00001000
#define gv_fetchpvs(namebeg,flags,sv_type) Perl_gv_fetchpvn_flags(aTHX_ STR_WITH_LEN(namebeg), flags, sv_type)
#define ASCII_RESTRICT_PAT_MODS "a"
#define CTL_MAXID 9
#define ckWARN4(w1,w2,w3,w4) Perl_ckwarn(aTHX_ packWARN4(w1,w2,w3,w4))
#define __INT_LEAST16_MAX__ 0x7fff
#define NGX_OK 0
#define sv_derived_from(a,b) Perl_sv_derived_from(aTHX_ a,b)
#define PCRE2_ERROR_MISSING_SQUARE_BRACKET 106
#define PERL_ARGS_ASSERT_CX_POPSUB_ARGS assert(cx)
#define VOL_CAP_FMT_HIDDEN_FILES 0x00002000
#define _SC_THREAD_DESTRUCTOR_ITERATIONS 85
#define TASK_READ_NULL ((task_read_t) 0)
#define SVf_READONLY 0x08000000
#define __INT64_MAX__ 0x7fffffffffffffffLL
#define SvANY(sv) (sv)->sv_any
#define MEMORY_OBJECT_BEHAVE_INFO_COUNT ((mach_msg_type_number_t) (sizeof(memory_object_behave_info_data_t)/sizeof(int)))
#define SCOPE_DELIMITER '%'
#define OPpCONST_BARE 0x40
#define EADDRINUSE 48
#define PERL_ARGS_ASSERT_PERLIO_UNREAD assert(vbuf)
#define EV_FLAG0 0x1000
#define vwarner(a,b,c) Perl_vwarner(aTHX_ a,b,c)
#define PadnameREFCNT_dec(pn) Perl_padname_free(aTHX_ pn)
#define case_2_SBOX32(hash,state,key) _SBOX32_CASE(2,hash,state,key)
#define sv_utf8_decode(a) Perl_sv_utf8_decode(aTHX_ a)
#define __SIG_ATOMIC_WIDTH__ 32
#define MSPAGAIN STMT_START { sp = PL_stack_sp; mark = ORIGMARK; } STMT_END
#define _POSIX2_PBS_TRACK (-1)
#define NGX_HTTP_RANGE_NOT_SATISFIABLE 416
#define REENTRANT_PROTO_I_IBI 25
#define PERLDB_SUB (PL_perldb & PERLDBf_SUB)
#define PERL_ARGS_ASSERT_CX_DUP assert(param)
#define _STRUCT_X86_DEBUG_STATE32 struct __darwin_x86_debug_state32
#define PRIxFAST64 PRIx64
#define HEK_LEN(hek) (hek)->hek_len
#define HAS_SCHED_YIELD 
#define __INT_LEAST64_TYPE__ long long int
#define HAS_ATANH 
#define PERL_ARGS_ASSERT_GV_FETCHMETHOD_SV_FLAGS assert(stash); assert(namesv)
#define Perl_cosh cosh
#define MACH_VOUCHER_ATTR_USER_DATA_STORE ((mach_voucher_attr_recipe_command_t)211)
#define save_freeop(op) STMT_START { OP * const _o = (OP *)(op); assert(!_o->op_savefree); _o->op_savefree = 1; save_pushptr((void *)(_o), SAVEt_FREEOP); } STMT_END
#define __APPLE_API_OBSOLETE 
#define _BSM_AUDIT_H 
#define PL_custom_op_descs (vTHX->Icustom_op_descs)
#define PERL_ARGS_ASSERT_MESS_SV assert(basemsg)
#define gv_method_changed(gv) ( assert_(isGV_with_GP(gv)) GvREFCNT(gv) > 1 ? (void)++PL_sub_generation : mro_method_changed_in(GvSTASH(gv)) )
#define HAS_FCHDIR 
#define VM_MEMORY_STACK 30
#define PERL_ARGS_ASSERT_SV_SETPVF_NOCONTEXT assert(sv); assert(pat)
#define IPV6_MAX_GROUP_SRC_FILTER 512
#define STAILQ_CONCAT(head1,head2) do { if (!STAILQ_EMPTY((head2))) { *(head1)->stqh_last = (head2)->stqh_first; (head1)->stqh_last = (head2)->stqh_last; STAILQ_INIT((head2)); } } while (0)
#define PERL_ARGS_ASSERT_HV_UNDEF 
#define cx_popsub_common(a) Perl_cx_popsub_common(aTHX_ a)
#define CPUMON_MAKE_FATAL 0x1000
#define hv_name_set(a,b,c,d) Perl_hv_name_set(aTHX_ a,b,c,d)
#define sv_2bool_flags(a,b) Perl_sv_2bool_flags(aTHX_ a,b)
#define BIT_BUCKET "/dev/null"
#define LONG_DOUBLE_IS_IEEE_754_128_BIT_LITTLE_ENDIAN 1
#define DT_UNKNOWN 0
#define dTOPuv UV value = TOPu
#define _MACHTYPES_H_ 
#define CPU_STATE_MAX 4
#define KERN_FAILURE 5
#define REENTR_MEMZERO(a,b) 0
#define IOPOL_NORMAL IOPOL_IMPORTANT
#define TCP_MAXSEG 0x02
#define __FLT128_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define __INTPTR_MAX__ 0x7fffffffffffffffL
#define _PERL_OBJECT_THIS 
#define rsignal_state(a) Perl_rsignal_state(aTHX_ a)
#define NGX_CONF_MAX_ARGS 8
#define REENTRANT_PROTO_V_H 72
#define VM_VOLATILE_GROUP_DEFAULT VM_VOLATILE_GROUP_0
#define _STRUCT_X86_DEBUG_STATE64 struct __darwin_x86_debug_state64
#define IN_CLASSD_NET 0xf0000000
#define KERN_INVALID_POLICY 28
#define _POSIX2_PBS_CHECKPOINT (-1)
#define PERL_ARGS_ASSERT_IBCMP_LOCALE 
#define PERL_DRAND48_QUAD 
#define UNICODE_MAJOR_VERSION 13
#define REENTRANT_PROTO_I_IBW 26
#define ngx_cpymem(dst,src,n) (((u_char *) memcpy(dst, src, n)) + (n))
#define perl_call_sv(a,b) call_sv(a,b)
#define CIRCLEQ_INIT(head) do { (head)->cqh_first = (void *)(head); (head)->cqh_last = (void *)(head); } while (0)
#define NGX_HAVE_REUSEPORT 1
#define FLT_EPSILON __FLT_EPSILON__
#define _POSIX2_PBS (-1)
#define ntohl(x) __DARWIN_OSSwapInt32(x)
#define ngx_set_stderr(fd) dup2(fd, STDERR_FILENO)
#define _XOPEN_IOV_MAX 16
#define ntohs(x) __DARWIN_OSSwapInt16(x)
#define ntohi ntohl
#define pcre2_jit_stack_free PCRE2_SUFFIX(pcre2_jit_stack_free_)
#define PERL_ARGS_ASSERT_AV_TOP_INDEX 
#define MACH_VOUCHER_NULL ((mach_voucher_t) 0)
#define __DARWIN_LITTLE_ENDIAN 1234
#define _I386_PARAM_H_ 
#define SCNdMAX __SCN_MAX_LENGTH_MODIFIER__ "d"
#define __pure2 __attribute__((__const__))
#define gv_autoload4(stash,name,len,autoload) gv_autoload_pvn(stash, name, len, !!(autoload))
#define _STRUCT_UCONTEXT struct __darwin_ucontext
#define VM_FLAGS_4GB_CHUNK 0x0004
#define __SWIFT_UNAVAILABLE 
#define si_dup(a,b) Perl_si_dup(aTHX_ a,b)
#define kUNOP cUNOPx(kid)
#define _IOLBF 1
#define PL_StdIO (vTHX->IStdIO)
#define __DBL_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define PDP_ENDIAN __DARWIN_PDP_ENDIAN
#define PL_compcv (vTHX->Icompcv)
#define FPE_FLTINV 5
#define pseudo_AF_XTP 19
#define SAVEt_ALLOC 0
#define F_SETLKW 9
#define SIOCGIFDSTADDR _IOWR('i', 34, struct ifreq)
#define save_destructor_x(a,b) Perl_save_destructor_x(aTHX_ a,b)
#define __DARWIN_WCHAR_MAX __WCHAR_MAX__
#define PERL_STATIC_NO_RET STATIC
#define atfork_unlock Perl_atfork_unlock
#define WIFSIGNALED(x) (_WSTATUS(x) != _WSTOPPED && _WSTATUS(x) != 0)
#define HeUTF8(he) ((HeKLEN(he) == HEf_SVKEY) ? SvUTF8(HeKEY_sv(he)) : (U32)HeKUTF8(he))
#define KERN_POSIX1 17
#define save_pushptr(a,b) Perl_save_pushptr(aTHX_ a,b)
#define CPU_SUBTYPE_ARM_V6 ((cpu_subtype_t) 6)
#define NGX_LOG_CRIT 3
#define perl_get_cv(a,b) get_cv(a,b)
#define OPpDEREF_AV 0x10
#define EREMOTE 71
#define __FLT32_MIN_10_EXP__ (-37)
#define PERL_ARGS_ASSERT_SAFESYSCALLOC 
#define __SSE2__ 1
#define NOTE_LEEWAY 0x00000010
#define PERL_UINT_MAX ((unsigned int)UINT_MAX)
#define PERL_DEB2(a,b) b
#define SvPOK_on(sv) (assert_not_ROK(sv) assert_not_glob(sv) SvFLAGS(sv) |= (SVf_POK|SVp_POK))
#define O_POPUP 0x80000000
#define IPC_EXCL 002000
#define __FLT32X_DIG__ 15
#define INADDR_CARP_GROUP (u_int32_t)0xe0000012
#define IoOFP(sv) ((XPVIO*) SvANY(sv))->xio_ofp
#define PCRE2_INFO_MINLENGTH 16
#define __WORDSIZE 64
#define MEMORY_OBJECT_RETURN_NONE 0
#define DEBUG_R_FLAG 0x00040000
#define __PTRDIFF_WIDTH__ 64
#define PAD_SVl(po) (PL_curpad[po])
#define ngx_open_dir_n "opendir()"
#define PERL_PV_PRETTY_NOCLEAR PERL_PV_ESCAPE_NOCLEAR
#define CPU_SUBTYPE_ARM64_32_ALL ((cpu_subtype_t) 0)
#define PERL_ARGS_ASSERT_SAVE_HELEM_FLAGS assert(hv); assert(key); assert(sptr)
#define PERL_ARGS_ASSERT_SV_DEL_BACKREF assert(tsv); assert(sv)
#define USER_POSIX2_SW_DEV 17
#define MUTEX_LOCK(m) STMT_START { int _eC_; if ((_eC_ = perl_pthread_mutex_lock((m)))) Perl_croak_nocontext("panic: MUTEX_LOCK (%d) [%s:%d]", _eC_, __FILE__, __LINE__); } STMT_END
#define PERLIOBUF_DEFAULT_BUFSIZ (BUFSIZ > 8192 ? BUFSIZ : 8192)
#define TASK_TRACE_MEMORY_INFO 24
#define PRIXLEAST8 PRIX8
#define THREAD_INSPECT_NULL ((thread_inspect_t) 0)
#define _MACH_I386_EXCEPTION_H_ 
#define EXC_TYPES_COUNT 14
#define OA_DANGEROUS 64
#define case_221_SBOX32(hash,state,key) 
#define SPAGAIN sp = PL_stack_sp
#define PERL_ARGS_ASSERT_SV_DUMP 
#define NGX_PROCESS_HELPER 4
#define OPpREFCOUNTED 0x40
#define CLD_STOPPED 5
#define PmopSTASHPV(o) (PmopSTASH(o) ? HvNAME_get(PmopSTASH(o)) : NULL)
#define pcre2_set_max_pattern_length PCRE2_SUFFIX(pcre2_set_max_pattern_length_)
#define __DBL_HAS_QUIET_NAN__ 1
#define HSm_KEY_MATCH (HSm_INTRPSIZE|HSf_IMP_CXT)
#define VOL_CAP_INT_RENAME_EXCL 0x00080000
#define PerlMem_free_lock() 
#define cv_get_call_checker_flags(a,b,c,d,e) Perl_cv_get_call_checker_flags(aTHX_ a,b,c,d,e)
#define MACH_MSGH_BITS_VOUCHER(bits) (((bits) & MACH_MSGH_BITS_VOUCHER_MASK) >> 16)
#define MgTAINTEDDIR_on(mg) (mg->mg_flags |= MGf_TAINTEDDIR)
#define Perl_fp_class_nan(x) (Perl_fp_class(x)==FP_NAN)
#define MACH_MSG_TYPE_COPY_RECEIVE 22
#define IPV6CTL_FORWARDING 1
#define sv_2pv(sv,lp) sv_2pv_flags(sv, lp, SV_GMAGIC)
#define NGX_HTTP_KEEPALIVE_DISABLE_SAFARI 0x0008
#define reg_named_buff_nextkey(a,b) Perl_reg_named_buff_nextkey(aTHX_ a,b)
#define UUID_DEFINE(name,u0,u1,u2,u3,u4,u5,u6,u7,u8,u9,u10,u11,u12,u13,u14,u15) static const uuid_t name __attribute__ ((unused)) = {u0,u1,u2,u3,u4,u5,u6,u7,u8,u9,u10,u11,u12,u13,u14,u15}
#define MNT_UNKNOWNPERMISSIONS MNT_IGNORE_OWNERSHIP
#define HOST_RESOURCE_SIZES_COUNT ((mach_msg_type_number_t) (sizeof(kernel_resource_sizes_data_t)/sizeof(integer_t)))
#define case_153_SBOX32(hash,state,key) 
#define VM_PROT_EXECUTE ((vm_prot_t) 0x04)
#define AF_VSOCK 40
#define MAX_FOLD_FROMS 3
#define PCRE2_CONFIG_PARENSLIMIT 6
#define AUC_DISABLED -1
#define __code_model_small__ 1
#define PERL_ARGS_ASSERT_CV_CONST_SV 
#define Perl_custom_op_xop(x) (Perl_custom_op_get_field(x, XOPe_xop_ptr).xop_ptr)
#define PMf_MULTILINE (1U<<0)
#define PERL_DTRACE_PROBE_PHASE(phase) 
#define KERN_POLICY_LIMIT 27
#define PERL_ARGS_ASSERT_HV_PLACEHOLDERS_GET assert(hv)
#define MAC_OS_X_VERSION_10_12_1 101201
#define MAC_OS_X_VERSION_10_12_2 101202
#define MAC_OS_X_VERSION_10_12_4 101204
#define PCRE2_ERROR_BADOPTION (-34)
#define WIDEST_UTYPE U64
#define PERL_ARGS_ASSERT_YYPARSE 
#define UNICODE_IS_SURROGATE(uv) UNLIKELY(((UV) (uv) & (~0xFFFF | 0xF800)) == 0xD800)
#define NGX_EOPNOTSUPP EOPNOTSUPP
#define AMGf_noright 1
#define toTITLE_uni(c,s,l) toTITLE_uvchr(c,s,l)
#define HvKEYS(hv) HvUSEDKEYS(hv)
#define MACH_VOUCHER_ATTR_VALUE_FLAGS_PERSIST ((mach_voucher_attr_value_flags_t)1)
#define USE_64_BIT_RAWIO 
#define AF_LOCAL AF_UNIX
#define UNICODE_ALLOW_SURROGATE 0
#define pcre2_substring_copy_byname PCRE2_SUFFIX(pcre2_substring_copy_byname_)
#define PERL_ARGS_ASSERT_SV_NEWREF 
#define __WCHAR_TYPE__ int
#define SLIST_REMOVE_AFTER(elm,field) do { SLIST_NEXT(elm, field) = SLIST_NEXT(SLIST_NEXT(elm, field), field); } while (0)
#define __SIZEOF_FLOAT__ 4
#define SV_HAS_TRAILING_NUL 256
#define REENTRANT_PROTO_I_CSBI 16
#define _POSIX_TRACE_NAME_MAX 8
#define PL_utf8_perl_idstart (vTHX->Iutf8_perl_idstart)
#define PF_BOND ((uint32_t)0x626f6e64)
#define _STRUCT_TIMEVAL64 
#define KMOD_MAX_NAME 64
#define PERL_ARGS_ASSERT_SAVESVPV assert(sv)
#define PerlSIO_freopen(p,m,f) freopen(p,m,f)
#define PL_numeric_underlying (vTHX->Inumeric_underlying)
#define PRIBIO 16
#define DEBUG_l_TEST_ UNLIKELY(PL_debug & DEBUG_l_FLAG)
#define parse_label(a) Perl_parse_label(aTHX_ a)
#define __PTHREAD_CONDATTR_SIZE__ 8
#define PERL_ARGS_ASSERT_CVSTASH_SET assert(cv)
#define PERL_ARGS_ASSERT_SAVEPV 
#define PERL_ARGS_ASSERT_MAGIC_EXISTSPACK assert(sv); assert(mg)
#define MACH_MSGH_BITS_COMPLEX 0x80000000U
#define RX_WRAPPED(rx_sv) SvPVX(rx_sv)
#define VM_BEHAVIOR_ZERO_WIRED_PAGES ((vm_behavior_t) 7)
#define IPPROTO_INLSP 52
#define case_67_SBOX32(hash,state,key) 
#define TIME_ABSOLUTE 0x00
#define IPC_SET 1
#define NET_RT_MAXID 11
#define LOCAL_PEERPID 0x002
#define IPPROTO_GGP 3
#define _MACH_THREAD_SPECIAL_PORTS_H_ 
#define PERL_UINT_MIN ((unsigned int)0)
#define SCNxPTR "lx"
#define HOST_SCHED_INFO 3
#define _SECURE__STRINGS_H_ 
#define isIDCONT_uvchr(c) _generic_uvchr(_CC_WORDCHAR, _is_uni_perl_idcont, c)
#define PERL_ARGS_ASSERT_SV_PVUTF8 assert(sv)
#define PERL_ARGS_ASSERT_FIND_RUNDEFSVOFFSET 
#define __API_DEPRECATED_WITH_REPLACEMENT(...) 
#define PERL_ARGS_ASSERT_CLONE_PARAMS_DEL assert(param)
#define XopDISABLE(xop,which) ((xop)->xop_flags &= ~XOPf_ ## which)
#define sv_2mortal(a) Perl_sv_2mortal(aTHX_ a)
#define PERL_MAGIC_debugvar '*'
#define pregcomp(a,b) Perl_pregcomp(aTHX_ a,b)
#define PadnameFLAGS(pn) (pn)->xpadn_flags
#define __FLT32_DECIMAL_DIG__ 9
#define ngx_file_uniq(sb) (sb)->st_ino
#define EDESTADDRREQ 39
#define __INT_FAST64_MAX__ 0x7fffffffffffffffLL
#define Perl_va_copy(s,d) va_copy(d, s)
#define MAP_MEM_WCOMB 4
#define BUFSIZ 1024
#define PerlSIO_fread(buf,sz,count,f) fread(buf,sz,count,f)
#define PERL_ARGS_ASSERT_SAVE_INT assert(intp)
#define PCRE2_ERROR_LOOKBEHIND_TOO_LONG 187
#define SIOCSIFMTU _IOW('i', 52, struct ifreq)
#define MACH_RCV_INTERRUPTED 0x10004005
#define MgTAINTEDDIR_off(mg) (mg->mg_flags &= ~MGf_TAINTEDDIR)
#define SvNOKp(sv) (SvFLAGS(sv) & SVp_NOK)
#define NGX_HTTP_VERSION_NOT_SUPPORTED 505
#define MDEREF_AV_pop_rv2av_aelem 1
#define __TVOS_DEPRECATED(_start,_dep,_msg) 
#define MACH_PORT_RECEIVE_STATUS 2
#define SvPV_nolen_const(sv) (SvPOK_nog(sv) ? SvPVX_const(sv) : sv_2pv_flags(sv, 0, SV_GMAGIC|SV_CONST_RETURN))
#define Safefree(d) safefree(MEM_LOG_FREE((Malloc_t)(d)))
#define __FLT32X_IS_IEC_60559__ 2
#define NGX_PREFIX "/usr/local/nginx/"
#define PERL_ARGS_ASSERT_SAVE_FREEPV 
#define PERL_ARGS_ASSERT_FORM_NOCONTEXT assert(pat)
#define MACH_MSG_OVERWRITE 3
#define SvPVbytex(sv,len) ({SV *_sv = (sv); SvPVbyte(_sv, len); })
#define ATTR_FILE_RSRCALLOCSIZE 0x00002000
#define M_LN10 2.30258509299404568401799145468436421
#define PERL_ARGS_ASSERT_OP_LVALUE_FLAGS 
#define PERL_ARGS_ASSERT_UTF8N_TO_UVCHR_MSGS assert(s)
#define REENTRANT_PROTO_I_ICSBWR 28
#define GLOB_BRACE 0x0080
#define NGX_LOG_ALERT 2
#define _SC_2_PBS 59
#define PERL_ARGS_ASSERT_SV_FREE_ARENAS 
#define POPs (*sp--)
#define POPu ((UV)SvUVx(POPs))
#define SIGURG 16
#define F_GETPATH_NOFIRMLINK 102
#define GvFORM(gv) (GvGP(gv)->gp_form)
#define uvuni_to_utf8_flags(a,b,c) Perl_uvuni_to_utf8_flags(aTHX_ a,b,c)
#define _CADDR_T 
#define PERL_ARGS_ASSERT_NEWMYSUB assert(o)
#define __MACH__ 1
#define SCM_CREDS 0x03
#define case_127_SBOX32(hash,state,key) 
#define NGX_HTTP_CONFLICT 409
#define isWORDCHAR_utf8_safe(p,e) _generic_invlist_utf8_safe(_CC_WORDCHAR, p, e)
#define MACH_MSG_PHYSICAL_COPY 0
#define ngx_strstr(s1,s2) strstr((const char *) s1, (const char *) s2)
#define MACH_MSGH_BITS_DENAPHOLDASRT MACH_MSGH_BITS_IMPHOLDASRT
#define EXC_MASK_SOFTWARE (1 << EXC_SOFTWARE)
#define ngx_linefeed(p) *p++ = LF;
#define NV_NAN_BITS (NVMANTBITS - 1)
#define F_GETSIGSINFO 105
#define Perl_Warn_Off_(x) ((x) / 8)
#define MNT_DONTBROWSE 0x00100000
#define __PERL_HASH_WITH_STATE(state,str,len) S_perl_hash_siphash_1_3_with_state((state),(U8*)(str),(len))
#define _UINT16_T 
#define PERLIO_DUP_FD 2
#define PRIiFAST32 PRIi32
#define OPpREPEAT_DOLIST 0x40
#define AMGf_noleft 2
#define CVf_AUTOLOAD 0x2000
#define NGX_HTTP_SIF_CONF 0x20000000
#define ngx_log_debug(level,log,...) if ((log)->log_level & level) ngx_log_error_core(NGX_LOG_DEBUG, log, __VA_ARGS__)
#define _utf8n_to_uvchr_msgs_helper Perl__utf8n_to_uvchr_msgs_helper
#define IN_PERL_RUNTIME cBOOL(PL_curcop != &PL_compiling)
#define PCRE2_ERROR_UNICODE_PROPERTIES_UNAVAILABLE 145
#define S_ISSOCK(m) (((m) & S_IFMT) == S_IFSOCK)
#define TIOCGWINSZ _IOR('t', 104, struct winsize)
#define HOST_CAN_HAS_DEBUGGER_COUNT ((mach_msg_type_number_t) (sizeof(host_can_has_debugger_info_data_t)/sizeof(integer_t)))
#define _U_INT 
#define OP_TYPE_IS_NN(o,type) ((o)->op_type == (type))
#define IN6_IS_ADDR_MC_LINKLOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && (IPV6_ADDR_MC_FLAGS(a) != IPV6_ADDR_MC_FLAGS_UNICAST_BASED) && (__IPV6_ADDR_MC_SCOPE(a) == __IPV6_ADDR_SCOPE_LINKLOCAL))
#define CopSTASH_ne(c,hv) (!CopSTASH_eq(c,hv))
#define _CC_ASCII 14
#define UV_MAX PERL_UQUAD_MAX
#define MACH_VOUCHER_ATTR_REMOVE ((mach_voucher_attr_recipe_command_t)2)
#define sv_chop(a,b) Perl_sv_chop(aTHX_ a,b)
#define NGX_HTTP_GZIP_PROXIED_EXPIRED 0x0004
#define EXC_RESOURCE 11
#define ___POSIX_C_DEPRECATED_STARTING_199506L 
#define Perl_malloc_good_size(how_much) malloc_good_size(how_much)
#define SIOCGIFCAP _IOWR('i', 91, struct ifreq)
#define EXCEPTION_STATE 2
#define CLONEf_CLONE_HOST 4
#define VM_VOLATILE_ORDER_MASK (1 << VM_VOLATILE_ORDER_SHIFT)
#define SCNuMAX __SCN_MAX_LENGTH_MODIFIER__ "u"
#define ngx_errno errno
#define ngx_getppid getppid
#define SIZE_T_MAX ULONG_MAX
#define PERL_ARGS_ASSERT_NEWXS assert(subaddr); assert(filename)
#define AUDIT_CTLMODE_EXTERNAL ((unsigned char)2)
#define PCRE2_CONFIG_JITTARGET 2
#define NV_NAN_SET_SIGNALING(nvp) (NV_NAN_QS_QUIET ? (NV_NAN_QS_BYTE(nvp) &= ~NV_NAN_QS_BIT) : (NV_NAN_QS_BYTE(nvp) |= NV_NAN_QS_BIT))
#define CIRCLEQ_INSERT_AFTER(head,listelm,elm,field) do { CIRCLEQ_CHECK_NEXT(head, listelm, field); (elm)->field.cqe_next = (listelm)->field.cqe_next; (elm)->field.cqe_prev = (listelm); if ((listelm)->field.cqe_next == (void *)(head)) (head)->cqh_last = (elm); else (listelm)->field.cqe_next->field.cqe_prev = (elm); (listelm)->field.cqe_next = (elm); } while (0)
#define PerlLIO_fstat(fd,buf) Fstat((fd), (buf))
#define __DARWIN_WCTYPE_TOP_inline __header_inline
#define IPV6_PORTRANGE_HIGH 1
#define seed() Perl_seed(aTHX)
#define _PTHREAD_RECURSIVE_MUTEX_SIG_init 0x32AAABA2
#define PERL_ARGS_ASSERT_DO_PRINT assert(fp)
#define TASK_SCHED_INFO 14
#define newATTRSUB(f,o,p,a,b) Perl_newATTRSUB_x(aTHX_ f, o, p, a, b, FALSE)
#define PerlMemShared_malloc(size) malloc((size))
#define _SC_THREAD_PRIORITY_SCHEDULING 89
#define moreswitches(a) Perl_moreswitches(aTHX_ a)
#define LDBL_MAX_EXP __LDBL_MAX_EXP__
#define _XLOCALE__STDLIB_H_ 
#define TCPOLEN_SACK 8
#define case_84_SBOX32(hash,state,key) 
#define _RSIZE_T 
#define IPV6_DONTFRAG 62
#define PerlLIO_ioctl(fd,u,buf) ioctl((fd), (u), (buf))
#define _POSIX2_EXPR_NEST_MAX 32
#define IOPOL_ATIME_UPDATES_DEFAULT 0
#define SvPV_force_nomg_nolen(sv) SvPV_force_flags_nolen(sv, 0)
#define HAS_LONG_DOUBLE 
#define case_155_SBOX32(hash,state,key) 
#define isALPHA_utf8(p,e) isALPHA_utf8_safe(p, e)
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffLL
#define PTHREAD_MUTEX_ERRORCHECK 1
#define SO_UPCALLCLOSEWAIT 0x1027
#define OPpDEREF_SV 0x30
#define VQ_UNMOUNT 0x0010
#define PerlIO_stdout() Perl_PerlIO_stdout(aTHX)
#define XORSHIFT128_set(r,x,y,z,w,t) STMT_START { t = ( x ^ ( x << 5 ) ); x = y; y = z; z = w; r = w = ( w ^ ( w >> 29 ) ) ^ ( t ^ ( t >> 12 ) ); } STMT_END
#define JMPENV_BOOTSTRAP STMT_START { PERL_POISON_EXPR(PoisonNew(&PL_start_env, 1, JMPENV)); PL_top_env = &PL_start_env; PL_start_env.je_prev = NULL; PL_start_env.je_ret = -1; PL_start_env.je_mustcatch = TRUE; PL_start_env.je_old_delaymagic = 0; JE_OLD_STACK_HWM_zero; } STMT_END
#define SVphv_SHAREKEYS 0x20000000
#define PCRE2_ERROR_MALFORMED_UNICODE_PROPERTY 146
#define __UINT_LEAST32_TYPE__ unsigned int
#define ENDPWENT_R_PROTO 0
#define _MASTERPASSWD "master.passwd"
#define IPV6CTL_STATS 6
#define _POSIX_CLOCKRES_MIN 20000000
#define VM_PAGE_INFO_MAX 
#define _XBS5_ILP32_OFFBIG __ILP32_OFFBIG
#define FNDELAY O_NONBLOCK
#define PERL_UTF8_H_ 1
#define HAS_STRLCAT 
#define F_TRANSCODEKEY 75
#define PERL_ARGS_ASSERT_CALL_ATEXIT 
#define __LDBL_MIN_EXP__ (-16381)
#define HAS_C99_VARIADIC_MACROS 
#define gv_autoload_sv(a,b,c) Perl_gv_autoload_sv(aTHX_ a,b,c)
#define MEMORY_OBJECT_ATTRIBUTE_INFO 14
#define ngx_de_info_n "stat()"
#define REENTRANT_PROTO_S_SBIE 64
#define FIONCLEX _IO('f', 2)
#define _MACH_I386__STRUCTS_H_ 
#define _pMY_CXT ,pMY_CXT
#define PCRE2_ERROR_CALLOUT_NO_STRING_DELIMITER 181
#define PERL_ARGS_ASSERT_LEX_BUFUTF8 
#define I_DIRENT 
#define SvPOK(sv) (SvFLAGS(sv) & SVf_POK)
#define __AUDIT_API_DEPRECATED __API_DEPRECATED("audit is deprecated", macos(10.4, 11.0))
#define case_212_SBOX32(hash,state,key) 
#define _POSIX_MAX_CANON 255
#define A_GETKAUDIT 29
#define PCRE2_CONFIG_JIT 1
#define IPV6_RECVPKTINFO 61
#define RX_REFCNT(rx_sv) SvREFCNT(rx_sv)
#define PERL_ARGS_ASSERT_PERLLIO_DUP2_CLOEXEC 
#define FF_SKIP 3
#define stdout __stdoutp
#define NGX_MODULE_SIGNATURE NGX_MODULE_SIGNATURE_0 NGX_MODULE_SIGNATURE_1 NGX_MODULE_SIGNATURE_2 NGX_MODULE_SIGNATURE_3 NGX_MODULE_SIGNATURE_4 NGX_MODULE_SIGNATURE_5 NGX_MODULE_SIGNATURE_6 NGX_MODULE_SIGNATURE_7 NGX_MODULE_SIGNATURE_8 NGX_MODULE_SIGNATURE_9 NGX_MODULE_SIGNATURE_10 NGX_MODULE_SIGNATURE_11 NGX_MODULE_SIGNATURE_12 NGX_MODULE_SIGNATURE_13 NGX_MODULE_SIGNATURE_14 NGX_MODULE_SIGNATURE_15 NGX_MODULE_SIGNATURE_16 NGX_MODULE_SIGNATURE_17 NGX_MODULE_SIGNATURE_18 NGX_MODULE_SIGNATURE_19 NGX_MODULE_SIGNATURE_20 NGX_MODULE_SIGNATURE_21 NGX_MODULE_SIGNATURE_22 NGX_MODULE_SIGNATURE_23 NGX_MODULE_SIGNATURE_24 NGX_MODULE_SIGNATURE_25 NGX_MODULE_SIGNATURE_26 NGX_MODULE_SIGNATURE_27 NGX_MODULE_SIGNATURE_28 NGX_MODULE_SIGNATURE_29 NGX_MODULE_SIGNATURE_30 NGX_MODULE_SIGNATURE_31 NGX_MODULE_SIGNATURE_32 NGX_MODULE_SIGNATURE_33 NGX_MODULE_SIGNATURE_34
#define VM_VOLATILE_MAKE_FIRST_IN_GROUP (1 << VM_VOLATILE_ORDER_SHIFT)
#define NL_SETMAX 255
#define mg_length(a) Perl_mg_length(aTHX_ a)
#define FOLDEQ_LOCALE (1 << 1)
#define SvMAGICAL_off(sv) (SvFLAGS(sv) &= ~(SVs_GMG|SVs_SMG|SVs_RMG))
#define _NGX_CONF_FILE_H_INCLUDED_ 
#define newFOROP(a,b,c,d,e) Perl_newFOROP(aTHX_ a,b,c,d,e)
#define HAS_FSTATVFS 
#define VFS_GENERIC 0
#define Groups_t gid_t
#define case_144_SBOX32(hash,state,key) 
#define PL_splitstr (vTHX->Isplitstr)
#define __FLT32X_MAX_10_EXP__ 308
#define USER_BC_STRING_MAX 5
#define UV_MIN PERL_UQUAD_MIN
#define EFL_CLR 0xfff88028
#define PERL_ARGS_ASSERT_NEWLISTOP 
#define SvNOKp_on(sv) (assert_not_glob(sv) SvFLAGS(sv) |= SVp_NOK)
#define WARN_REDEFINE 19
#define CXp_FOR_DEF 0x10
#define _CC_QUOTEMETA 20
#define PMf_IS_QR (1U<<(PMf_BASE_SHIFT+15))
#define MACH_SEND_TIMED_OUT 0x10000004
#define O_RDONLY 0x0000
#define PERL_ARGS_ASSERT_MAGIC_CLEAR_ALL_ENV assert(sv); assert(mg)
#define HAS_SETSERVENT 
#define PERL_ARGS_ASSERT_MAGIC_FREEUTF8 assert(sv); assert(mg)
#define PERL_ARGS_ASSERT_RPEEP 
#define newTRYCATCHOP(a,b,c,d) Perl_newTRYCATCHOP(aTHX_ a,b,c,d)
#define HOST_TELEMETRY_PORT (13 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define HINT_FEATURE_MASK 0x3c000000
#define _to_utf8_lower_flags(a,b,c,d,e) Perl__to_utf8_lower_flags(aTHX_ a,b,c,d,e)
#define MDEREF_HV_pop_rv2hv_helem 8
#define ROTR32(x,r) (((U32)(x) << (32 - (r))) | ((U32)(x) >> (r)))
#define VOL_CAP_FMT_PATH_FROM_ID 0x00004000
#define U_32(what) (cast_ulong((NV)(what)))
#define SCAN_TR 1
#define SCNu64 __SCN_64_LENGTH_MODIFIER__ "u"
#define SvSetMagicSV_nosteal(dst,src) SvSetSV_nosteal_and(dst,src,SvSETMAGIC(dst))
#define REENTRANT_PROTO_I_TSBI 46
#define NGX_HTTP_SSI_COMMAND_LEN 32
#define my_popen_list(a,b,c) Perl_my_popen_list(aTHX_ a,b,c)
#define DEBUG_o_TEST (0)
#define _SC_ATEXIT_MAX 107
#define PL_modcount (vTHX->Imodcount)
#define _tolower(c) __tolower(c)
#define LOCK_SET_NULL ((lock_set_t) 0)
#define _POSIX_PATH_MAX 256
#define OPpCOREARGS_DEREF1 0x01
#define host_set_host_port(host,port) (KERN_INVALID_ARGUMENT)
#define HAS_MODFL 
#define __DARWIN_ALIAS(sym) __asm("_" __STRING(sym) __DARWIN_SUF_UNIX03)
#define __FLT128_MIN__ 3.36210314311209350626267781732175260e-4932F128
#define TASK_VM_INFO 22
#define sv_2nv_flags(a,b) Perl_sv_2nv_flags(aTHX_ a,b)
#define TASK_NULL ((task_t) 0)
#define NATIVE_TO_I8(ch) NATIVE_UTF8_TO_I8(ch)
#define _PC_ALLOC_SIZE_MIN 16
#define SIGPIPE 13
#define VM_SET_FLAGS_ALIAS(flags,alias) (flags) = (((flags) & ~VM_FLAGS_ALIAS_MASK) | (((alias) & ~VM_FLAGS_ALIAS_MASK) << 24))
#define CVf_NODEBUG 0x0200
#define _LP64 1
#define HAS_BACKTRACE 
#define sv_setsv_mg(a,b) Perl_sv_setsv_mg(aTHX_ a,b)
#define NGX_MODULE_SIGNATURE_10 "1"
#define NGX_MODULE_SIGNATURE_12 "1"
#define NGX_MODULE_SIGNATURE_13 "0"
#define NGX_MODULE_SIGNATURE_14 "1"
#define NGX_MODULE_SIGNATURE_15 "1"
#define NGX_MODULE_SIGNATURE_16 "1"
#define NGX_MODULE_SIGNATURE_17 "0"
#define PerlProc_execl(c,w,x,y,z) execl((c), (w), (x), (y), (z))
#define NGX_MODULE_SIGNATURE_19 "1"
#define TCP_KEEPINTVL 0x101
#define PerlProc_execv(c,a) execv((c), (a))
#define CvCLONE_off(cv) (CvFLAGS(cv) &= ~CVf_CLONE)
#define EFBIG 27
#define __FLT64_MAX_EXP__ 1024
#define IPPROTO_NONE 59
#define sv_newmortal() Perl_sv_newmortal(aTHX)
#define _CC_ALPHANUMERIC 7
#define PL_sortcop (vTHX->Isortcop)
#define NGX_MODULE_SIGNATURE_20 "1"
#define I_SYS_TIME 
#define NGX_MODULE_SIGNATURE_23 "1"
#define NGX_MODULE_SIGNATURE_24 "0"
#define HAS_CTERMID 
#define NGX_MODULE_SIGNATURE_26 "1"
#define NGX_MODULE_SIGNATURE_27 "1"
#define NGX_MODULE_SIGNATURE_28 "1"
#define NGX_MODULE_SIGNATURE_29 "0"
#define KERN_PROC_LCID 7
#define OPpCOREARGS_DEREF2 0x02
#define PERL_MAGIC_symtab ':'
#define __API_UNAVAILABLE(...) 
#define fropen(cookie,fn) funopen(cookie, fn, 0, 0, 0)
#define ngx_memzero(buf,n) (void) memset(buf, 0, n)
#define SEGV_MAPERR 1
#define op_append_list(a,b,c) Perl_op_append_list(aTHX_ a,b,c)
#define TASK_INSPECT_BASIC_COUNTS_COUNT (sizeof(struct task_inspect_basic_counts) / sizeof(natural_t))
#define NGX_MODULE_SIGNATURE_30 "0"
#define NGX_MODULE_SIGNATURE_31 "0"
#define NGX_MODULE_SIGNATURE_33 "1"
#define NGX_MODULE_SIGNATURE_34 "0"
#define EAI_ADDRFAMILY 1
#define PL_strxfrm_max_cp (vTHX->Istrxfrm_max_cp)
#define _PTHREAD_H 
#define PL_setlocale_buf (vTHX->Isetlocale_buf)
#define SvPVX(sv) ((sv)->sv_u.svu_pv)
#define THR_ACT_NULL ((thread_act_t) 0)
#define _PTHREAD_T 
#define SIOCGIFXMEDIA _IOWR('i', 72, struct ifmediareq)
#define dJMPENV JMPENV cur_env
#define PCRE2_JIT_PARTIAL_SOFT 0x00000002u
#define PERL_SUBVERSION 0
#define USER_BC_SCALE_MAX 4
#define PMf_CHARSET (7U<<7)
#define isALPHA_L1(c) _generic_isCC(c, _CC_ALPHA)
#define PERL_ARGS_ASSERT_MAGIC_SETLVREF assert(sv); assert(mg)
#define KEV_DL_ADDMULTI 7
#define IOPOL_VFS_CONTENT_PROTECTION_DEFAULT 0
#define HOST_LAUNCHCTL_PORT (9 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define AF_IEEE80211 37
#define CvCLONED_on(cv) (CvFLAGS(cv) |= CVf_CLONED)
#define PERL_ARGS_ASSERT_DO_DUMP_PAD assert(file)
#define ngx_socket_nread_n "ioctl(FIONREAD)"
#define RMS_DIR 0
#define ngx_http_conf_get_module_loc_conf(cf,module) ((ngx_http_conf_ctx_t *) cf->ctx)->loc_conf[module.ctx_index]
#define x86_FLOAT_STATE32 2
#define MDEREF_AV_gvav_aelem 6
#define sv_untaint(a) Perl_sv_untaint(aTHX_ a)
#define _SC_IOV_MAX 56
#define MEM_WRAP_CHECK_1(n,t,a) (void)(UNLIKELY(_MEM_WRAP_WILL_WRAP(n,t)) && (Perl_croak_nocontext("%s",(a)),0))
#define _SC_PASS_MAX 131
#define PCRE2_ERROR_INVALID_SUBPATTERN_NAME 144
#define WARN_NON_UNICODE 48
#define AF_CCITT 10
#define PERL_API_VERSION 34
#define DEFAULT_PAT_MOD '^'
#define pcre2_match_data_free PCRE2_SUFFIX(pcre2_match_data_free_)
#define UTF8_IS_DOWNGRADEABLE_START(c) (__ASSERT_(FITS_IN_8_BITS(c)) inRANGE(NATIVE_UTF8_TO_I8(c), UTF_MIN_START_BYTE, UTF_MIN_ABOVE_LATIN1_BYTE - 1))
#define P_PPWAIT 0x00000010
#define MB_CUR_MAX (___mb_cur_max())
#define ngx_queue_head(h) (h)->next
#define NI_MAXHOST 1025
#define __MATH__ 
#define ngx_read_fd read
#define isGRAPH_utf8_safe(p,e) _generic_invlist_utf8_safe(_CC_GRAPH, p, e)
#define OP_REFCNT_INIT MUTEX_INIT(&PL_op_mutex)
#define cophh_delete_sv(cophh,key,hash,flags) Perl_refcounted_he_new_sv(aTHX_ cophh, key, hash, (SV *)NULL, flags)
#define newLOGOP(a,b,c,d) Perl_newLOGOP(aTHX_ a,b,c,d)
#define case_118_SBOX32(hash,state,key) 
#define __DARWIN_ALIGN(p) ((__darwin_size_t)((__darwin_size_t)(p) + __DARWIN_ALIGNBYTES) &~ __DARWIN_ALIGNBYTES)
#define __PERL_HASH_WORD_SIZE sizeof(__PERL_HASH_WORD_TYPE)
#define PL_sv_serial (vTHX->Isv_serial)
#define UTF8_WARN_FE_FF UTF8_WARN_PERL_EXTENDED
#define dPOPPOPiirl dPOPXiirl(POP)
#define case_161_SBOX32(hash,state,key) 
#define OpREFCNT_dec(o) (--(o)->op_targ)
#define NETSVC_MRKNG_UNKNOWN 0
#define PL_unitcheckav (vTHX->Iunitcheckav)
#define isALPHA_uvchr(c) _generic_invlist_uvchr(_CC_ALPHA, c)
#define NOTE_EXIT_CSERROR 0x00040000
#define PERL_ARGS_ASSERT_VNUMIFY assert(vs)
#define VM_PURGABLE_STATE_MAX 3
#define _STRUCT_LAST_BRANCH_RECORD struct __last_branch_record
#define SRCHFS_SKIPLINKS 0x00000010
#define VOL_CAP_INT_SEARCHFS 0x00000001
#define NOTE_VM_ERROR 0x10000000
#define PERL_ARGS_ASSERT_VALID_UTF8_TO_UVCHR assert(s)
#define _MACH_MACHINE_BOOLEAN_H_ 
#define IOf_DIDTOP 8
#define TCPOPT_MAXSEG 2
#define HAS_VSNPRINTF 
#define SvNOK_nog(sv) ((SvFLAGS(sv) & (SVf_NOK|SVs_GMG)) == SVf_NOK)
#define _SC_AIO_MAX 43
#define PERL_ARGS_ASSERT_WHICHSIG 
#define __BASE_UNI_SKIP(uv) (__COMMON_UNI_SKIP(uv) LIKELY((UV) (uv) < ((UV) 1U << (6 * UTF_ACCUMULATION_SHIFT))) ? 7 : UTF8_MAXBYTES)
#define EBADARCH 86
#define ENOTCONN 57
#define ngx_align_ptr(p,a) (u_char *) (((uintptr_t) (p) + ((uintptr_t) a - 1)) & ~((uintptr_t) a - 1))
#define KEV_INET_SIFBRDADDR 5
#define UPDATE_IO_STATS(info,size) { info.count++; info.size += size; }
#define _MACH_MACHINE_VM_PARAM_H_ 
#define RTLD_DEFAULT ((void *) -2)
#define IN_CLASSB_NET 0xffff0000
#define _SYS_IPC_H_ 
#define A_SETCOND 38
#define PERL_COPY_ON_WRITE 
#define IP_FW_FLUSH 42
#define __PERL_HASH_SEED_STATE(seed,state) S_perl_siphash_seed_state(seed,state)
#define NGX_LINEFEED "\x0a"
#define REENTRANT_PROTO_S_SBW 65
#define PERL_ARGS_ASSERT_NATIVE_TO_NEED 
#define PAD_SETSV(po,sv) PL_curpad[po] = (sv)
#define TIMESPEC_TO_TIMEVAL(tv,ts) { (tv)->tv_sec = (ts)->tv_sec; (tv)->tv_usec = (ts)->tv_nsec / 1000; }
#define PERL_ARGS_ASSERT_CMPCHAIN_EXTEND assert(ch)
#define GETPWENT_R_PROTO 0
#define PerlIO_stdin() Perl_PerlIO_stdin(aTHX)
#define _STRUCT_FP_CONTROL struct __darwin_fp_control
#define OPf_REF 16
#define my_dirfd Perl_my_dirfd
#define P_tmpdir "/var/tmp/"
#define PERL_ARGS_ASSERT_PERLIO_READ assert(vbuf)
#define SV_NOCLDSTOP SA_NOCLDSTOP
#define case_120_SBOX32(hash,state,key) 
#define NGX_ENOPROTOOPT ENOPROTOOPT
#define _SC_CHILD_MAX 2
#define _POSIX_MESSAGE_PASSING (-1)
#define SvPVbyte_nomg(sv,len) (SvPOK_byte_nog(sv) ? ((len = SvCUR(sv)), SvPVX(sv)) : sv_2pvbyte_flags(sv, &len, 0))
#define PERL_ARGS_ASSERT_SV_UTF8_DOWNGRADE assert(sv)
#define EPFNOSUPPORT 46
#define PL_colors (vTHX->Icolors)
#define OPpEARLY_CV 0x20
#define ENDHOSTENT_R_PROTO 0
#define PERL_ARGS_ASSERT_CK_LENGTH assert(o)
#define SvPVbyte_nolen(sv) (SvPOK_byte_nog(sv) ? SvPVX(sv) : sv_2pvbyte(sv, 0))
#define NGX_MAX_CONF_ERRSTR 1024
#define __SMOD 0x2000
#define INTMAX_MAX INTMAX_C(9223372036854775807)
#define ASSERT_CURPAD_ACTIVE(label) 
#define HAS_STRLCPY 
#define SSPOPPTR (PL_savestack[--PL_savestack_ix].any_ptr)
#define PL_vtbl_regdata PL_magic_vtables[want_vtbl_regdata]
#define host_get_ktrace_background_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_KTRACE_BACKGROUND_PORT, (port)))
#define MADV_RANDOM POSIX_MADV_RANDOM
#define toFOLD_uvchr(c,s,l) to_uni_fold(c,s,l)
#define isIDFIRST_utf8(p,e) isIDFIRST_utf8_safe(p, e)
#define PTHREAD_ONCE_INIT {_PTHREAD_ONCE_SIG_init, {0}}
#define _XOPEN_STREAMS (-1)
#define msgh_kind msgh_seqno
#define case_75_SBOX32(hash,state,key) 
#define time_value_add_usec(val,micros) { if (((val)->microseconds += (micros)) >= TIME_MICROS_MAX) { (val)->microseconds -= TIME_MICROS_MAX; (val)->seconds++; } }
#define ngx_tm_sec_t int
#define __IPHONE_9_2 90200
#define SV_INTERRUPT SA_RESTART
#define _NGX_FILES_H_INCLUDED_ 
#define CTLFLAG_NOAUTO 0x02000000
#define OPpEVAL_UNICODE 0x04
#define HvNAME(hv) HvNAME_get(hv)
#define PERL_ARGS_ASSERT_ASCII_TO_NEED 
#define SAVEt_VPTR 46
#define _SC_2_PBS_TRACK 64
#define I_GRP 
#define WARN_AMBIGUOUS 29
#define _CRMASK (~(_CACHED_RUNES - 1))
#define NOTE_FFCTRLMASK 0xc0000000
#define PERL_ARGS_ASSERT_MAGIC_GETARYLEN assert(sv); assert(mg)
#define SOCK_STREAM 1
#define VOL_CAP_INT_ATTRLIST 0x00000002
#define MSIZE (1 << MSIZESHIFT)
#define TIME_UTC 1
#define OPEN_MAX 10240
#define PAGE_SHIFT vm_page_shift
#define EXC_MASK_RPC_ALERT (1 << EXC_RPC_ALERT)
#define SV_FORCE_UTF8_UPGRADE 4096
#define SIOCGIFCONF _IOWR('i', 36, struct ifconf)
#define __const const
#define PERL_ARGS_ASSERT_CALL_LIST assert(paramList)
#define savesharedpvs(str) Perl_savesharedpvn(aTHX_ STR_WITH_LEN(str))
#define LONGDBLNANBYTES 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
#define G_METHOD 0x80
#define UINT16_MAX 65535
#define isALNUM(c) isWORDCHAR(c)
#define IOPOL_TYPE_VFS_TRIGGER_RESOLVE 5
#define REENTRANT_PROTO_I_CCSBWR 12
#define mg_magical Perl_mg_magical
#define F_ADDSIGS 59
#define bytes_from_utf8(s,lenp,is_utf8p) bytes_from_utf8_loc(s, lenp, is_utf8p, 0)
#define PCRE2_EXTRA_ESCAPED_CR_IS_LF 0x00000010u
#define SHORTSIZE 2
#define M_LOG10E 0.434294481903251827651128918916605082
#define case_1_SBOX32(hash,state,key) _SBOX32_CASE(1,hash,state,key)
#define PCRE2_CONVERT_FUNCTIONS PCRE2_EXP_DECL int PCRE2_CALL_CONVENTION pcre2_pattern_convert(PCRE2_SPTR, PCRE2_SIZE, uint32_t, PCRE2_UCHAR **, PCRE2_SIZE *, pcre2_convert_context *); PCRE2_EXP_DECL void PCRE2_CALL_CONVENTION pcre2_converted_pattern_free(PCRE2_UCHAR *);
#define case_203_SBOX32(hash,state,key) 
#define PERL_ARGS_ASSERT_AV_NONELEM assert(av)
#define x86_EXCEPTION_STATE32 3
#define __SIZEOF_WCHAR_T__ 4
#define PL_comppad (vTHX->Icomppad)
#define host_get_kextd_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_KEXTD_PORT, (port)))
#define newSViv(a) Perl_newSViv(aTHX_ a)
#define ngx_buf_in_memory_only(b) (ngx_buf_in_memory(b) && !(b)->in_file)
#define HAS_GETPGID 
#define PadnameTYPE(pn) (pn)->xpadn_type_u.xpadn_typestash
#define PCRE2_EXTRA_MATCH_WORD 0x00000004u
#define MAP_MEM_ONLY 0x010000
#define toLOWER_uvchr(c,s,l) to_uni_lower(c,s,l)
#define get_ppaddr() Perl_get_ppaddr(aTHX)
#define PERL_ARGS_ASSERT_REGEXEC_FLAGS assert(rx); assert(stringarg); assert(strend); assert(strbeg); assert(sv)
#define PERL_STATIC_FORCE_INLINE_NO_RET PERL_STATIC_INLINE
#define LIST_NEXT(elm,field) ((elm)->field.le_next)
#define F_CHKCLEAN 41
#define PL_vtbl_defelem PL_magic_vtables[want_vtbl_defelem]
#define PL_vtbl_regexp PL_magic_vtables[want_vtbl_regexp]
#define PERL_ARGS_ASSERT_MAGIC_CLEARSIG assert(sv); assert(mg)
#define DEBUG_D_FLAG 0x00008000
#define HAS_GETPROTO_PROTOS 
#define LOCK_LC_NUMERIC_STANDARD() STMT_START { DEBUG_Lv(PerlIO_printf(Perl_debug_log, "%s: %d: lc_numeric_standard now locked to depth %d\n", __FILE__, __LINE__, PL_numeric_standard)); __ASSERT_(PL_numeric_standard) PL_numeric_standard++; } STMT_END
#define FLT_EVAL_METHOD __FLT_EVAL_METHOD__
#define VM_FLAGS_RETURN_4K_DATA_ADDR 0x800000
#define __ORDER_BIG_ENDIAN__ 4321
#define case_135_SBOX32(hash,state,key) 
#define MINCORE_PAGED_OUT 0x20
#define newHVhv(a) Perl_newHVhv(aTHX_ a)
#define my_stat() my_stat_flags(SV_GMAGIC)
#define LONG_DOUBLE_STYLE_IEEE 
#define PERL_ARGS_ASSERT_SV_DOES_PVN assert(sv); assert(name)
#define PERL_ARGS_ASSERT_NEWOP 
#define NGX_USE_LOWAT_EVENT 0x00000010
#define PERL_ARGS_ASSERT_SV_ISOBJECT 
#define I_SYS_SOCKIO 
#define RLIMIT_MEMLOCK 6
#define SSCHECK(need) if (UNLIKELY(PL_savestack_ix + (I32)(need) > PL_savestack_max)) savestack_grow()
#define IOf_START 2
#define THREAD_AFFINITY_POLICY 4
#define MAXSYSFD 2
#define MACH_MSG_TYPE_DISPOSE_SEND_ONCE 26
#define CPUFAMILY_INTEL_6_13 0xaa33392b
#define __UINT32_C(c) c ## U
#define _XLOCALE__TIME_H_ 
#define PTHREAD_SCOPE_SYSTEM 1
#define _MACH_THREAD_STATUS_H_ 
#define _POSIX2_VERSION 200112L
#define MAX_INPUT 1024
#define newDEFSVOP() Perl_newDEFSVOP(aTHX)
#define PADNAMEt_OUTER 1
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define EAI_SYSTEM 11
#define __attribute__malloc__ __attribute__((__malloc__))
#define MPO_STRICT 0x20
#define NGX_ONESHOT_EVENT EV_ONESHOT
#define NV_NAN_QS_BIT_OFFSET (8 * (NV_NAN_QS_BYTE_OFFSET) + (NV_NAN_QS_BIT_SHIFT))
#define REENTRANT_PROTO_I_SBIH 39
#define NGX_ECONNABORTED ECONNABORTED
#define PCRE2_ERROR_BACKSLASH_O_MISSING_BRACE 155
#define gv_efullname(a,b) Perl_gv_efullname(aTHX_ a,b)
#define GVf_IMPORTED 0xF0
#define CPUFAMILY_INTEL_6_23 CPUFAMILY_INTEL_PENRYN
#define ngx_de_is_link(dir) (((dir)->type) ? ((dir)->type == DT_LNK) : (S_ISLNK((dir)->info.st_mode)))
#define PERL_REENTR_H_ 
#define SIGEV_THREAD 3
#define EV_SET(kevp,a,b,c,d,e,f) do { struct kevent *__kevp__ = (kevp); __kevp__->ident = (a); __kevp__->filter = (b); __kevp__->flags = (c); __kevp__->fflags = (d); __kevp__->data = (e); __kevp__->udata = (f); } while(0)
#define PERL_SCAN_SILENT_ILLDIGIT 0x08
#define PL_utf8_perl_idcont (vTHX->Iutf8_perl_idcont)
#define NGX_EVENT_CONF 0x02000000
#define PERL_ARGS_ASSERT_AV_REIFY assert(av)
#define INTMAX_MIN (-INTMAX_MAX-1)
#define CPU_SUBTYPE_POWERPC_7450 ((cpu_subtype_t) 11)
#define INADDR_BROADCAST (u_int32_t)0xffffffff
#define PERL_ARGS_ASSERT_DEBPROFDUMP 
#define PCRE2_ERROR_CONVERT_SYNTAX (-64)
#define PROCESSOR_BASIC_INFO 1
#define _SC_TRACE_INHERIT 99
#define HvLAZYDEL_on(hv) (SvFLAGS(hv) |= SVphv_LAZYDEL)
#define _STDLIB_H_ 
#define IPPROTO_SVMTP 82
#define _NGX_RWLOCK_H_INCLUDED_ 
#define CPUFAMILY_ARM_LIGHTNING_THUNDER 0x462504d2
#define FLT_MANT_DIG __FLT_MANT_DIG__
#define LIST_FOREACH(var,head,field) for ((var) = LIST_FIRST((head)); (var); (var) = LIST_NEXT((var), field))
#define PERL_SYS_INIT(argc,argv) Perl_sys_init(argc, argv)
#define isASCII_LC_utf8_safe(p,e) (__ASSERT_(_utf8_safe_assert(p, e)) isASCII_LC(*(p)))
#define ATTR_CMN_ACCESSMASK 0x00020000
#define AF_PPP 34
#define HvSHAREKEYS(hv) (SvFLAGS(hv) & SVphv_SHAREKEYS)
#define VOL_CAP_FMT_JOURNAL 0x00000008
#define PCRE2_ERROR_BAD_SUBPATTERN_REFERENCE 115
#define SvIMMORTAL_INTERP(sv) ((Size_t)((sv) - &PL_sv_yes) < 4)
#define SvPV_nomg_nolen(sv) (SvPOK_nog(sv) ? SvPVX(sv) : sv_2pv_flags(sv, 0, 0))
#define FD_ISSET(n,p) __DARWIN_FD_ISSET(n, p)
#define NGX_ATOMIC_T_LEN (sizeof("-9223372036854775808") - 1)
#define O_NOFOLLOW 0x00000100
#define FP_ZERO 3
#define NGX_HTTP_UPSTREAM_IGN_XA_BUFFERING 0x00000080
#define TCPCI_OPT_TIMESTAMPS 0x00000001
#define HvHASKFLAGS_off(hv) (SvFLAGS(hv) &= ~SVphv_HASKFLAGS)
#define POLL_ERR 4
#define PL_constpadix (vTHX->Iconstpadix)
#define PTHREAD_EXPLICIT_SCHED 2
#define TIOCSETA _IOW('t', 20, struct termios)
#define ngx_rbt_is_black(node) (!ngx_rbt_is_red(node))
#define _NGX_SLAB_H_INCLUDED_ 
#define __RCSID(s) __IDSTRING(rcsid,s)
#define THREAD_BASIC_INFO 3
#define PL_MemShared (vTHX->IMemShared)
#define PERL_ARGS_ASSERT_NOTHREADHOOK 
#define SEGV_NOOP 0
#define NETSVC_MRKNG_LVL_L3L2_BK 3
#define Mkdir(path,mode) mkdir((path),(mode))
#define SVt_PVBM SVt_PVMG
#define SvPAD_OUR_on(pn) (PadnameFLAGS(pn) |= PADNAMEt_OUR)
#define AQ_BUFSZ MAXAUDITDATA
#define NGX_EPERM EPERM
#define EQFULL 106
#define POLL_IN 1
#define push_scope() Perl_push_scope(aTHX)
#define PCRE2_ERROR_VERB_ARGUMENT_NOT_ALLOWED 159
#define PERL_ARGS_ASSERT_PRINTF_NOCONTEXT assert(format)
#define AUDIT_PATH 0x0200
#define __alloca(size) __builtin_alloca(size)
#define CopSTASH(c) PL_stashpad[(c)->cop_stashoff]
#define gp_ref(a) Perl_gp_ref(aTHX_ a)
#define PERL_ARGS_ASSERT_MAGIC_SETDEFELEM assert(sv); assert(mg)
#define SvREFCNT(sv) (sv)->sv_refcnt
#define NGX_CONF_PREFIX "conf/"
#define PERL_ARGS_ASSERT_TMPS_GROW_P 
#define HINT_STRICT_SUBS 0x00000200
#define NOTE_MACH_CONTINUOUS_TIME 0x00000080
#define INT_FAST64_MAX INT64_MAX
#define CPU_SUBTYPE_MIPS_ALL ((cpu_subtype_t) 0)
#define _MACH_I386_VM_TYPES_H_ 
#define NGX_MODULE_V1 NGX_MODULE_UNSET_INDEX, NGX_MODULE_UNSET_INDEX, NULL, 0, 0, nginx_version, NGX_MODULE_SIGNATURE
#define __OS_ENUM_ATTR 
#define PERL_ARGS_ASSERT_DO_GVGV_DUMP assert(file); assert(name)
#define FP_PREC_64B 3
#define isnormal(x) ( sizeof(x) == sizeof(float) ? __inline_isnormalf((float)(x)) : sizeof(x) == sizeof(double) ? __inline_isnormald((double)(x)) : __inline_isnormall((long double)(x)))
#define PERL_LOADMOD_NOIMPORT 0x2
#define __va_list__ 
#define sv_force_normal(sv) sv_force_normal_flags(sv, 0)
#define invalid_policy(policy) ((policy) != POLICY_TIMESHARE && (policy) != POLICY_RR && (policy) != POLICY_FIFO)
#define CALLREG_NAMED_BUFF_CLEAR(rx,flags) RX_ENGINE(rx)->named_buff(aTHX_ (rx), NULL, NULL, ((flags) | RXapif_CLEAR))
#define SO_SNDLOWAT 0x1003
#define MACH_MSG_TRAILER_FORMAT_0 0
#define PERL_ARGS_ASSERT_PERLIO_SAVE_ERRNO 
#define COALITION_NULL ((coalition_t) 0)
#define cophh_delete_pvs(cophh,key,flags) Perl_refcounted_he_new_pvn(aTHX_ cophh, STR_WITH_LEN(key), 0, (SV *)NULL, flags)
#define SYSCTL_DEF_ENABLED 
#define IoTYPE_SOCKET 's'
#define _POSIX2_CHAR_TERM 200112L
#define TASK_BOOTSTRAP_PORT 4
#define LONGDOUBLE_LITTLE_ENDIAN 
#define PCRE2_ERROR_CONDITION_ATOMIC_ASSERTION_EXPECTED 198
#define __PRI_8_LENGTH_MODIFIER__ "hh"
#define pv_escape(a,b,c,d,e,f) Perl_pv_escape(aTHX_ a,b,c,d,e,f)
#define case_220_SBOX32(hash,state,key) 
#define UTF8_TWO_BYTE_LO_nocast(c) __BASE_TWO_BYTE_LO(c, NATIVE_TO_UNI)
#define _SC_2_FORT_DEV 21
#define PerlSock_endnetent endnetent
#define isIDCONT_uni(c) isIDCONT_uvchr(c)
#define DB_VERSION_MAJOR_CFG 18
#define PL_comppad_name_floor (vTHX->Icomppad_name_floor)
#define HAS_GETPGRP 
#define gv_init_pv(a,b,c,d) Perl_gv_init_pv(aTHX_ a,b,c,d)
#define HV_FETCH_LVALUE 0x10
#define AF_PUP 4
#define case_202_SBOX32(hash,state,key) 
#define Perl_pow pow
#define MAP_FIXED 0x0010
#define case_109_SBOX32(hash,state,key) 
#define sv_recode_to_utf8(a,b) Perl_sv_recode_to_utf8(aTHX_ a,b)
#define HUGE_VAL __builtin_huge_val()
#define MACH_MSG_SIZE_MAX ((mach_msg_size_t) ~0)
#define __SIZEOF_DOUBLE__ 8
#define PL_dumper_fd (vTHX->Idumper_fd)
#define _POSIX_TRACE_LOG (-1)
#define PERL_CKDEF(s) PERL_CALLCONV OP *s (pTHX_ OP *o);
#define case_152_SBOX32(hash,state,key) 
#define OS_NONNULL10 __attribute__((__nonnull__(10)))
#define OS_NONNULL12 __attribute__((__nonnull__(12)))
#define OS_NONNULL13 __attribute__((__nonnull__(13)))
#define OS_NONNULL14 __attribute__((__nonnull__(14)))
#define __SCN_64_LENGTH_MODIFIER__ "ll"
#define gimme_V() Perl_gimme_V(aTHX)
#define PERL_READ_UNLOCK(mutex) STMT_START { MUTEX_LOCK(&(mutex)->lock); (mutex)->readers_count--; if ((mutex)->readers_count <= 0) { assert((mutex)->readers_count == 0); COND_SIGNAL(&(mutex)->wakeup); (mutex)->readers_count = 0; } MUTEX_UNLOCK(&(mutex)->lock); } STMT_END
#define USE_64_BIT_ALL 
#define VM_PURGABLE_NO_AGING (0x1 << VM_PURGABLE_NO_AGING_SHIFT)
#define HAS_SETPWENT 
#define va_start(v,l) __builtin_va_start(v,l)
#define MNT_RELOAD 0x00040000
#define CopFILE_set(c,pv) ((c)->cop_file = savesharedpv(pv))
#define PERL_ARGS_ASSERT_NEWSVREF assert(o)
#define HAS_SYS_ERRLIST 
#define IoANY(sv) ((XPVIO*) SvANY(sv))->xio_any
#define RXapif_EXISTS 0x0010
#define MNT_QUOTA 0x00002000
#define __unavailable 
#define PERL_ARGS_ASSERT_SV_BACKOFF assert(sv)
#define __DRIVERKIT_20_0 200000
#define TASK_EXC_GUARD_MP_DELIVER 0x10
#define HINT_NEW_FLOAT 0x00002000
#define VM_PROT_WRITE ((vm_prot_t) 0x02)
#define PERL_ARGS_ASSERT_MY_ATOF3 assert(orig); assert(value)
#define NGX_HTTP_PRECONDITION_FAILED 412
#define PERL_LAST_5_18_0_INTERP_MEMBER Iglobhook
#define OPpFT_ACCESS 0x02
#define KERN_MISSING_KC 54
#define call_list(a,b) Perl_call_list(aTHX_ a,b)
#define dPOPiv IV value = POPi
#define gv_init_sv(a,b,c,d) Perl_gv_init_sv(aTHX_ a,b,c,d)
#define THREAD_SCHED_TIMESHARE_INFO 10
#define _NGINX_H_INCLUDED_ 
#define GV_NOINIT 0x10
#define _V6_LP64_OFF64 __LP64_OFF64
#define PF_UNSPEC AF_UNSPEC
#define isIDFIRST_L1(c) _generic_isCC(c, _CC_IDFIRST)
#define THREAD_EXTENDED_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (thread_extended_policy_data_t) / sizeof (integer_t)))
#define DTTOIF(dirtype) ((dirtype) << 12)
#define NGX_CONF_ERROR (void *) -1
#define GCC_DIAG_RESTORE_STMT GCC_DIAG_RESTORE NOOP
#define isIDFIRST_LC(c) _generic_LC_underscore(c, _CC_IDFIRST, isalpha)
#define vmess(a,b) Perl_vmess(aTHX_ a,b)
#define __FLT32X_HAS_QUIET_NAN__ 1
#define Perl_fmod fmod
#define va_end(v) __builtin_va_end(v)
#define RMS_PRV 0
#define HAS_FD_SET 
#define PERL_ARGS_ASSERT_DO_HV_DUMP assert(file); assert(name)
#define TIOCSTAT _IO('t', 101)
#define CvHASEVAL_off(cv) (CvFLAGS(cv) &= ~CVf_HASEVAL)
#define __INT_FAST16_WIDTH__ 16
#define MATTR_CACHE 1
#define _SC_TRACE_SYS_MAX 129
#define STORE_LC_NUMERIC_SET_TO_NEEDED() STORE_LC_NUMERIC_SET_TO_NEEDED_IN(IN_LC(LC_NUMERIC))
#define MAP_UNIX03 0x40000
#define LONG_DOUBLE_IS_DOUBLEDOUBLE_128_BIT_LE_BE 7
#define PL_in_clean_all (vTHX->Iin_clean_all)
#define case_66_SBOX32(hash,state,key) 
#define STDCHAR char
#define PERL_ARGS_ASSERT_INIT_DBARGS 
#define SCNdPTR "ld"
#define _CC_IDFIRST 16
#define PerlSIO_ferror(f) ferror(f)
#define sv_vsetpvf_mg(a,b,c) Perl_sv_vsetpvf_mg(aTHX_ a,b,c)
#define toLOWER_utf8_safe(p,e,s,l) _toLOWER_utf8_flags(p,e,s,l, 0)
#define PF_INET AF_INET
#define FOLD_FLAGS_NOMIX_ASCII 0x4
#define NGX_HTTP_SATISFY_ALL 0
#define ECONNREFUSED 61
#define _RATTR_OK (1<<15)
#define PERL_ARGS_ASSERT_SET_CARET_X 
#define INT_FAST64_MIN INT64_MIN
#define PWGECOS 
#define ATTR_FILE_FILETYPE 0x00000040
#define _POSIX2_C_DEV 200112L
#define HAS_TIME 
#define THREAD_NULL ((thread_t) 0)
#define BC_DIM_MAX 2048
#define ngx_http_ephemeral(r) (void *) (&r->uri_start)
#define __DBL_MAX_10_EXP__ 308
#define VM_LEDGER_TAG_NEURAL 0x00000005
#define PERL_ARGS_ASSERT_OP_REFCNT_UNLOCK 
#define HAS_STRUCT_CMSGHDR 
#define NGX_HTTP_LIF_CONF 0x40000000
#define OPpKVSLICE 0x20
#define PTTYBLOCK 0x200
#define PCRE2_INFO_ALLOPTIONS 0
#define ATTR_MAX_BUFFER 8192
#define ngx_memmove(dst,src,n) (void) memmove(dst, src, n)
#define VM_MEMORY_MALLOC_MEDIUM 12
#define PerlProc_signal(n,h) signal((n), (h))
#define RTLD_FIRST 0x100
#define CASE_STD_PMMOD_FLAGS_PARSE_SET(pmfl,x_count) case IGNORE_PAT_MOD: *(pmfl) |= RXf_PMf_FOLD; break; case MULTILINE_PAT_MOD: *(pmfl) |= RXf_PMf_MULTILINE; break; case SINGLE_PAT_MOD: *(pmfl) |= RXf_PMf_SINGLELINE; break; case XTENDED_PAT_MOD: if (x_count == 0) { *(pmfl) |= RXf_PMf_EXTENDED; *(pmfl) &= ~RXf_PMf_EXTENDED_MORE; } else { *(pmfl) |= RXf_PMf_EXTENDED |RXf_PMf_EXTENDED_MORE; } (x_count)++; break; case NOCAPTURE_PAT_MOD: *(pmfl) |= RXf_PMf_NOCAPTURE; break;
#define DEBUG_v_TEST_ UNLIKELY(PL_debug & DEBUG_v_FLAG)
#define my_snprintf(buffer,max,...) ({ int len = snprintf(buffer, max, __VA_ARGS__); PERL_SNPRINTF_CHECK(len, max, snprintf); len; })
#define IPPROTO_SATEXPAK 64
#define ATTR_VOL_ALLOCATIONCLUMP 0x00000040
#define HOST_CLOSURED_PORT (21 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define NGX_HTTP_KEEPALIVE_DISABLE_NONE 0x0002
#define utf8_hop Perl_utf8_hop
#define ngx_free free
#define NGX_HTTP_SATISFY_ANY 1
#define MPG_FLAGS_STRICT_REPLY_INVALID_REPLY_DISP (0x01ull << 56)
#define CvLEXICAL_off(cv) (CvFLAGS(cv) &= ~CVf_LEXICAL)
#define PL_sighandlerp (vTHX->Isighandlerp)
#define _NGX_DLOPEN_H_INCLUDED_ 
#define PL_vtbl_hints PL_magic_vtables[want_vtbl_hints]
#define EXTEND_SKIP(p,n) STMT_START { EXTEND_HWM_SET(p, n); assert(!_EXTEND_NEEDS_GROW(p,n)); } STMT_END
#define EVAL_WARNONLY 2
#define __STDC__ 1
#define ngx_queue_data(q,type,link) (type *) ((u_char *) q - offsetof(type, link))
#define OPpINDEX_BOOLNEG 0x40
#define PERL_INTERPRETER_SIZE_UPTO_MEMBER(member) STRUCT_OFFSET(struct interpreter, member) + sizeof(((struct interpreter*)0)->member)
#define IN_LOCAL_GROUP(i) (((u_int32_t)(i) & 0xffffff00) == 0xe0000000)
#define DST_CAN 6
#define RXp_MATCH_UTF8_on(prog) (RXp_EXTFLAGS(prog) |= RXf_MATCH_UTF8)
#define PERL_ARGS_ASSERT_VSTRINGIFY assert(vs)
#define EF_IS_PURGEABLE 0x00000008
#define sv_pvutf8(sv) SvPVutf8_nolen(sv)
#define ngx_dlopen(path) dlopen((char *) path, RTLD_NOW | RTLD_GLOBAL)
#define EEXIST 17
#define perl_init_i18nl10n(a) init_i18nl10n(a)
#define CIRCLEQ_ENTRY(type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct { struct type *cqe_next; struct type *cqe_prev; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define __PTRDIFF_TYPE__ long int
#define PERL_ARGS_ASSERT_GROK_NUMERIC_RADIX assert(sp); assert(send)
#define LIST_REMOVE(elm,field) do { LIST_CHECK_NEXT(elm, field); LIST_CHECK_PREV(elm, field); if (LIST_NEXT((elm), field) != NULL) LIST_NEXT((elm), field)->field.le_prev = (elm)->field.le_prev; *(elm)->field.le_prev = LIST_NEXT((elm), field); TRASHIT((elm)->field.le_next); TRASHIT((elm)->field.le_prev); } while (0)
#define OPpLIST_GUESSED 0x40
#define utf8n_to_uvuni(a,b,c,d) Perl_utf8n_to_uvuni(aTHX_ a,b,c,d)
#define DT_LNK 10
#define ATTR_VOL_SPACEFREE 0x00000008
#define PERL_ARGS_ASSERT_GV_FETCHPV assert(nambeg)
#define PERL_FLUSHALL_FOR_CHILD PerlIO_flush((PerlIO*)NULL)
#define HW_EPOCH 10
#define VM_VOLATILE_GROUP_SHIFT 8
#define TASK_ABSOLUTETIME_INFO 1
#define SvPADTMP_on(sv) (SvFLAGS(sv) |= SVs_PADTMP)
#define A_GETFSIZE 27
#define UTF8_IS_NONCHAR_GIVEN_THAT_NON_SUPER_AND_GE_PROBLEMATIC(s,e) cBOOL(is_NONCHAR_utf8_safe(s,e))
#define OpREFCNT_set(o,n) ((o)->op_targ = (n))
#define NGX_HTTP_CLOSE 444
#define PERL_ARGS_ASSERT_SV_PVBYTEN assert(sv); assert(lp)
#define IPC_SPACE_READ_NULL ((ipc_space_read_t) 0)
#define PERL_ARGS_ASSERT_BLOCK_START 
#define TCPOPT_CCNEW 12
#define OPpEVAL_HAS_HH 0x02
#define HINT_EXPLICIT_STRICT_SUBS 0x00000040
#define PERL_MAGIC_uvar_elem 'u'
#define SCNoLEAST8 SCNo8
#define GCC_DIAG_RESTORE _Pragma("GCC diagnostic pop")
#define PERL_ARGS_ASSERT_GV_AVADD 
#define sv_vcatpvfn_flags(a,b,c,d,e,f,g,h) Perl_sv_vcatpvfn_flags(aTHX_ a,b,c,d,e,f,g,h)
#define HINT_BLOCK_SCOPE 0x00000100
#define case_131_SBOX32(hash,state,key) 
#define USE_LOCALE 
#define HvNAME_HEK_NN(hv) ( HvAUX(hv)->xhv_name_count ? *HvAUX(hv)->xhv_name_u.xhvnameu_names : HvAUX(hv)->xhv_name_u.xhvnameu_name )
#define NGX_ENOTDIR ENOTDIR
#define NGX_HTTP_NGINX_CODES 494
#define _SC_2_PBS_CHECKPOINT 61
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_0(x) 
#define PERL_ARGS_ASSERT_SCALAR 
#define EAI_SERVICE 9
#define CPU_SUBTYPE_X86_64_ALL ((cpu_subtype_t)3)
#define NGX_FILE_APPEND (O_WRONLY|O_APPEND)
#define HINT_STRICT_REFS 0x00000002
#define MACH_MSG_TYPE_PORT_RECEIVE MACH_MSG_TYPE_MOVE_RECEIVE
#define TASK_EXC_GUARD_VM_CORPSE 0x04
#define TAILQ_INSERT_TAIL(head,elm,field) do { TAILQ_NEXT((elm), field) = NULL; (elm)->field.tqe_prev = (head)->tqh_last; *(head)->tqh_last = (elm); (head)->tqh_last = &TAILQ_NEXT((elm), field); QMD_TRACE_HEAD(head); QMD_TRACE_ELEM(&(elm)->field); } while (0)
#define SUID_CRED_NULL ((suid_cred_t) 0)
#define HS_APIVERLEN_MAX HSm_APIVERLEN
#define OP_TYPE_IS_OR_WAS_NN(o,type) ( ((o)->op_type == OP_NULL ? (o)->op_targ : (o)->op_type) == (type) )
#define MS_DEACTIVATE 0x0008
#define TAILQ_ENTRY(type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct { struct type *tqe_next; struct type **tqe_prev; TRACEBUF } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define SM_SHARED_ALIASED 7
#define PERL_ARGS_ASSERT_MY_FORK 
#define PERL_ARGS_ASSERT_CK_NULL assert(o)
#define __UINTPTR_TYPE__ long unsigned int
#define PCRE2_ZERO_TERMINATED (~(PCRE2_SIZE)0)
#define PERL_ARGS_ASSERT_GV_FETCHSV assert(name)
#define HAS_LGAMMA 
#define IP_RSVP_VIF_OFF 18
#define ngx_de_fs_size(dir) ngx_max((dir)->info.st_size, (dir)->info.st_blocks * 512)
#define NGX_HASH_LARGE_HSIZE 10007
#define _IOWR(g,n,t) _IOC(IOC_INOUT, (g), (n), sizeof(t))
#define CPU_SUBTYPE_I386_ALL CPU_SUBTYPE_INTEL(3, 0)
#define PL_inplace (vTHX->Iinplace)
#define newCONDOP(a,b,c,d) Perl_newCONDOP(aTHX_ a,b,c,d)
#define EXC_I386_SEGNPFLT 11
#define U64TYPE unsigned long
#define pcre2_set_match_limit PCRE2_SUFFIX(pcre2_set_match_limit_)
#define NORMAL PL_op->op_next
#define isIDCONT_utf8(p,e) isIDCONT_utf8_safe(p, e)
#define PERL_ARGS_ASSERT_UNPACKSTRING assert(pat); assert(patend); assert(s); assert(strend)
#define os_compiler_barrier() __asm__ __volatile__("" ::: "memory")
#define __LDBL_MIN_10_EXP__ (-4931)
#define cophh_free(cophh) Perl_refcounted_he_free(aTHX_ cophh)
#define MSG_DONTWAIT 0x80
#define gv_AVadd(gv) gv_add_by_type((gv), SVt_PVAV)
#define IN_CLASSA_HOST 0x00ffffff
#define _SC_SPAWN 79
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_4(x) 
#define PL_mbrtowc_ps (vTHX->Imbrtowc_ps)
#define CvLEXICAL_on(cv) (CvFLAGS(cv) |= CVf_LEXICAL)
#define LONG_DOUBLE_IS_DOUBLEDOUBLE_128_BIT_LE_LE 5
#define PRIiLEAST32 PRIi32
#define PMf_STRICT (1U<<10)
#define PERL_ARGS_ASSERT_GV_AMUPDATE assert(stash)
#define __DARWIN_NON_CANCELABLE 0
#define KERN_NETBOOT 40
#define re_intuit_string(a) Perl_re_intuit_string(aTHX_ a)
#define ILL_NOOP 0
#define GCC_DIAG_IGNORE(x) _Pragma("GCC diagnostic push") GCC_DIAG_PRAGMA(GCC diagnostic ignored #x)
#define _VA_LIST_T 
#define SvIOKp(sv) (SvFLAGS(sv) & SVp_IOK)
#define PERL_ARGS_ASSERT_LOCALIZE assert(o)
#define isALPHANUMERIC_LC(c) _generic_LC(c, _CC_ALPHANUMERIC, isalnum)
#define SAVEHINTS() save_hints()
#define AUDIT_PUBLIC 0x0800
#define _CHOWN_OK (1<<21)
#define A_SETEXPAFTER 44
#define NGX_HTTP_SSI_ENTITY_ENCODING 2
#define _POSIX_OPEN_MAX 20
#define CopSTASHPV_set(c,pv) CopSTASH_set((c), gv_stashpv(pv,GV_ADD))
#define SvIOK_notUV(sv) ((SvFLAGS(sv) & (SVf_IOK|SVf_IVisUV)) == SVf_IOK)
#define THREAD_BASIC_INFO_COUNT ((mach_msg_type_number_t) (sizeof(thread_basic_info_data_t) / sizeof(natural_t)))
#define EXC_ARITHMETIC 3
#define __FLT128_DECIMAL_DIG__ 36
#define PL_vtbl_utf8 PL_magic_vtables[want_vtbl_utf8]
#define ASCII_TO_NATIVE(ch) LATIN1_TO_NATIVE(ch)
#define MEMORY_OBJECT_IO_SYNC 0x20
#define SvIsCOW_on(sv) (SvFLAGS(sv) |= SVf_IsCOW)
#define _GRP_H_ 
#define PTRDIFF_MAX INTMAX_MAX
#define IoPAGE_LEN(sv) ((XPVIO*) SvANY(sv))->xio_page_len
#define ngx_rbt_copy_color(n1,n2) (n1->color = n2->color)
#define RESTORE_ERRNO (errno = saved_errno)
#define case_211_SBOX32(hash,state,key) 
#define __FLT_DECIMAL_DIG__ 9
#define UTF8_CHECK_ONLY 0x10000
#define PL_markstack_ptr (vTHX->Imarkstack_ptr)
#define RX_MATCH_UTF8_off(rx_sv) (RXp_MATCH_UTF8_off(ReANY(rx_sv))
#define MNT_DEFWRITE 0x02000000
#define EFL_IOPL 0x00003000
#define KERN_MEMORY_FAILURE 9
#define PERL_ARGS_ASSERT_SAFESYSMALLOC 
#define bdbtofsb(bn) ((bn) / (BLKDEV_IOSIZE/DEV_BSIZE))
#define HAS_FMAX 
#define MNT_FORCE 0x00080000
#define DTF_NODUP 0x0002
#define CPU_SUBTYPE_UVAXII ((cpu_subtype_t) 6)
#define uvchr_to_utf8_flags_msgs(d,uv,flags,msgs) uvoffuni_to_utf8_flags_msgs(d,NATIVE_TO_UNI(uv),flags, msgs)
#define _CC_PRINT 6
#define __LDBL_NORM_MAX__ 1.18973149535723176502126385303097021e+4932L
#define CV_NAME_NOTQUAL 1
#define CXp_SUB_RE_FAKE 0x80
#define PRIoMAX __PRI_MAX_LENGTH_MODIFIER__ "o"
#define TIOCSTOP _IO('t', 111)
#define VM_FLAGS_SUPERPAGE_SHIFT 16
#define ngx_udp_send ngx_io.udp_send
#define NGX_HTTP_SPECIAL_RESPONSE 300
#define DEBUG_x_TEST (0)
#define MACH_MSG_TYPE_MAKE_SEND 20
#define PERL_ARGS_ASSERT_AV_UNDEF assert(av)
#define newPADNAMELIST Perl_newPADNAMELIST
#define case_143_SBOX32(hash,state,key) 
#define isSPACE_utf8_safe(p,e) _generic_non_invlist_utf8_safe(_CC_SPACE, is_XPERLSPACE_high, p, e)
#define BC_BASE_MAX 99
#define MB_LEN_MAX 6
#define VM_PAGE_QUERY_PAGE_REUSABLE 0x800
#define TIOCDCDTIMESTAMP _IOR('t', 88, struct timeval)
#define MACH_PORT_TYPE_NONE ((mach_port_type_t) 0L)
#define dPOPuv UV value = POPu
#define dTHX_DEBUGGING dNOOP
#define ngx_http_null_variable { ngx_null_string, NULL, NULL, 0, 0, 0 }
#define PCRE2_ERROR_CLASS_INVALID_RANGE 150
#define VOL_CAPABILITIES_FORMAT 0
#define SAVESWITCHSTACK(f,t) STMT_START { save_pushptrptr(MUTABLE_SV(f), MUTABLE_SV(t), SAVEt_SAVESWITCHSTACK); SWITCHSTACK((f),(t)); PL_curstackinfo->si_stack = (t); } STMT_END
#define _USECONDS_T 
#define FF_BLANK 14
#define GCC_DIAG_PRAGMA(x) _Pragma (#x)
#define MACH_MSG_TYPE_DISPOSE_RECEIVE 24
#define ngx_http_clear_location(r) if (r->headers_out.location) { r->headers_out.location->hash = 0; r->headers_out.location = NULL; }
#define DOUBLEKIND 3
#define __SSE3__ 1
#define PERL_SET_INTERP(i) (PL_curinterp = (PerlInterpreter*)(i))
#define __UINT_FAST8_TYPE__ unsigned char
#define EOPNOTSUPP 102
#define SAVEt_READONLY_OFF 21
#define pcre2_jit_compile PCRE2_SUFFIX(pcre2_jit_compile_)
#define PAD_SAVE_LOCAL(opad,npad) opad = PL_comppad; PL_comppad = (npad); PL_curpad = PL_comppad ? AvARRAY(PL_comppad) : NULL; DEBUG_Xv(PerlIO_printf(Perl_debug_log, "Pad 0x%" UVxf "[0x%" UVxf "] save_local\n", PTR2UV(PL_comppad), PTR2UV(PL_curpad)));
#define DEBUG_P_TEST_ UNLIKELY(PL_debug & DEBUG_P_FLAG)
#define CLANG_DIAG_IGNORE_DECL(x) CLANG_DIAG_IGNORE(x) dNOOP
#define NGX_HTTP_CACHE_MISS 1
#define UNOP_AUX_item_sv(item) PAD_SVl((item)->pad_offset);
#define mortal_getenv Perl_mortal_getenv
#define _POSIX_BARRIERS (-1)
#define case_115_SBOX32(hash,state,key) 
#define NGX_TID_T_FMT "%d"
#define PERL_ARGS_ASSERT_REG_NUMBERED_BUFF_FETCH assert(rx)
#define IPV6CTL_SOURCECHECK_LOGINT 11
#define PRIo64 __PRI_64_LENGTH_MODIFIER__ "o"
#define REENTRANT_PROTO_B_IBI 6
#define EXC_I386_BPT 2
#define PRIXFAST16 PRIX16
#define OP_SIBLING(o) OpSIBLING(o)
#define REENTRANT_PROTO_B_IBW 7
#define d_fileno d_ino
#define __ATOMIC_ACQ_REL 4
#define IP_PKTINFO 26
#define __ATOMIC_RELEASE 3
#define PCRE2_ERROR_INVALID_HEXADECIMAL 167
#define IPV6_2292HOPLIMIT 20
#define SvPV_force_flags_mutable(sv,len,flags) (SvPOK_pure_nogthink(sv) ? ((len = SvCUR(sv)), SvPVX_mutable(sv)) : sv_pvn_force_flags(sv, &len, flags|SV_MUTABLE_RETURN))
#define NV_NAN_IS_QUIET(nvp) (NV_NAN_QS_TEST(nvp) == (NV_NAN_QS_QUIET ? NV_NAN_QS_BIT : 0))
#define PERL_ARGS_ASSERT_LIST 
#define __IPHONE_8_4 80400
#define pad_add_name_sv(a,b,c,d) Perl_pad_add_name_sv(aTHX_ a,b,c,d)
#define __OS_OPTIONS_ATTR 
#define MACH_PORT_STATUS_FLAG_NO_GRANT 0x80
#define _STRUCT_X86_AVX_STATE32 struct __darwin_i386_avx_state
#define __DARWIN_CLK_TCK 100
#define HAS_ENDHOSTENT 
#define isVERTWS_utf8_safe(p,e) _generic_non_invlist_utf8_safe(_CC_VERTSPACE, is_VERTWS_high, p, e)
#define IN6ADDR_LINKLOCAL_ALLV2ROUTERS_INIT {{{ 0xff, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16 }}}
#define VM_PURGABLE_DEBUG_MASK (0x3 << VM_PURGABLE_DEBUG_SHIFT)
#define SvPV_force_nolen(sv) SvPV_force_flags_nolen(sv, SV_GMAGIC)
#define IPV6_RTHDR_TYPE_0 0
#define MACH_MSGH_BITS_VOUCHER_MASK 0x001f0000
#define host_get_sysdiagnose_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_SYSDIAGNOSE_PORT, (port)))
#define PERLDB_SUB_NN (PL_perldb & PERLDBf_NONAME)
#define ___POSIX_C_DEPRECATED_STARTING_199009L 
#define MNT_RDONLY 0x00000001
#define CvANONCONST(cv) (CvFLAGS(cv) & CVf_ANONCONST)
#define PRIXFAST32 PRIX32
#define SAVE_TIGHT_SHIFT 6
#define PMf_SPLIT (1U<<11)
#define case_57_SBOX32(hash,state,key) 
#define OPpREVERSE_INPLACE 0x08
#define _SC_XOPEN_UNIX 115
#define DEBUG_R_TEST (0)
#define __FLT32X_MAX_EXP__ 1024
#define _PC_CHOWN_RESTRICTED 7
#define NV_MAX_EXP DBL_MAX_EXP
#define SAVEt_SAVESWITCHSTACK 40
#define PerlLIO_link(oldname,newname) link((oldname), (newname))
#define PROT_NONE 0x00
#define sv_tainted(a) Perl_sv_tainted(aTHX_ a)
#define CTLTYPE_NODE 1
#define PERL_ARGS_ASSERT_SCALARVOID assert(o)
#define PCRE2_ERROR_INTERNAL_BAD_CODE 189
#define NGX_HAVE_NONALIGNED 1
#define PERL_ARGS_ASSERT_REG_NUMBERED_BUFF_LENGTH assert(rx); assert(sv)
#define _QUAD_LOWWORD 0
#define MAC_OS_X_VERSION_10_13_1 101301
#define MAC_OS_X_VERSION_10_13_4 101304
#define HAS_PTHREAD_ATFORK 
#define M_PI_4 0.785398163397448309615660845819875721
#define PERL_ARGS_ASSERT_TAINT_ENV 
#define HAS_FPCLASSIFY 
#define op_parent Perl_op_parent
#define _POSIX_SHARED_MEMORY_OBJECTS (-1)
#define HAS_WCSCMP 
#define __unused __attribute__((__unused__))
#define SvREFCNT_dec_NN(sv) Perl_SvREFCNT_dec_NN(aTHX_ MUTABLE_SV(sv))
#define _STRUCT_X86_AVX_STATE64 struct __darwin_x86_avx_state64
#define _NGX_EVENT_POSTED_H_INCLUDED_ 
#define PCRE2_ERROR_QUANTIFIER_OUT_OF_ORDER 104
#define TASK_POLICY_STATE 4
#define TCPOPT_WINDOW 3
#define PERL_PV_ESCAPE_ALL 0x001000
#define ATTR_CMNEXT_VALIDMASK 0x000007fc
#define HAS_DIFFTIME 
#define SvPVbyte_or_null(sv,len) (SvPOK_byte_nog(sv) ? ((len = SvCUR(sv)), SvPVX(sv)) : (SvGETMAGIC(sv), SvOK(sv)) ? sv_2pvbyte_flags(sv, &len, 0) : ((len = 0), NULL))
#define _MACH_POLICY_H_ 
#define HAS_FMIN 
#define CPUFAMILY_ARM_12 0xbd1b0ae9
#define CPUFAMILY_ARM_15 0xa8511bca
#define SvGETMAGIC(x) ((void)(UNLIKELY(SvGMAGICAL(x)) && mg_get(x)))
#define gv_init_pvn(a,b,c,d,e) Perl_gv_init_pvn(aTHX_ a,b,c,d,e)
#define SvIV_please_nomg(sv) (!(SvFLAGS(sv) & (SVf_IOK|SVp_IOK)) && (SvFLAGS(sv) & (SVf_NOK|SVf_POK)) ? (sv_2iv_flags(sv, 0), SvIOK(sv)) : SvIOK(sv))
#define IPV6CTL_MAXIFPREFIXES 47
#define hv_stores(hv,key,val) hv_store((hv), ("" key ""), (sizeof(key)-1), (val), 0)
#define VM_MEMORY_JAVASCRIPT_JIT_EXECUTABLE_ALLOCATOR 64
#define CLSIZELOG2 0
#define MINCORE_MODIFIED 0x4
#define CPU_SUBTYPE_HPPA_7100LC ((cpu_subtype_t) 1)
#define NCARGS ARG_MAX
#define PERL_ARGS_ASSERT_DO_SEMOP assert(mark); assert(sp)
#define PerlSIO_fdupopen(f) (f)
#define PCRE2_ERROR_HEAP_FAILED 121
#define _MACH_I386_BOOLEAN_H_ 
#define _I386__ENDIAN_H_ 
#define LONG_DOUBLESIZE 16
#define PERL_DECIMAL_VERSION_ PERL_JNP_TO_DECIMAL_(PERL_VERSION_MAJOR, PERL_VERSION_MINOR, PERL_VERSION_PATCH)
#define do_gv_dump(a,b,c,d) Perl_do_gv_dump(aTHX_ a,b,c,d)
#define REENTRANT_PROTO_I_CWISD 22
#define SvPV_mutable(sv,len) SvPV_flags_mutable(sv, len, SV_GMAGIC)
#define Perl_sharepvn(pv,len,hash) HEK_KEY(share_hek(pv, len, hash))
#define NOTE_ATTRIB 0x00000008
#define _SC_LINE_MAX 15
#define case_160_SBOX32(hash,state,key) 
#define IPPROTO_CPNX 72
#define MACH_MSGH_BITS_LOCAL_MASK 0x00001f00
#define CvGvNAME_HEK(sv) ( CvNAMED((CV*)sv) ? ((XPVCV*)MUTABLE_PTR(SvANY((SV*)sv)))->xcv_gv_u.xcv_hek : GvNAME_HEK(CvGV( (SV*) sv)) )
#define MIN_AUDIT_FILE_SIZE (512 * 1024)
#define PERL_ARGS_ASSERT_MY_FAILURE_EXIT 
#define _POSIX_PRIORITIZED_IO (-1)
#define ngx_toupper(c) (u_char) ((c >= 'a' && c <= 'z') ? (c & ~0x20) : c)
#define A_GETPOLICY 33
#define TAINT_IF(c) if (UNLIKELY(c)) { TAINT; }
#define isCNTRL_L1(c) _generic_isCC(c, _CC_CNTRL)
#define sv_catpvs_mg(sv,str) Perl_sv_catpvn_flags(aTHX_ sv, STR_WITH_LEN(str), SV_GMAGIC|SV_SMAGIC)
#define bzero(dest,...) __builtin___memset_chk (dest, 0, __VA_ARGS__, __darwin_obsz0 (dest))
#define MEM_WRAP_CHECK_(n,t) MEM_WRAP_CHECK(n,t),
#define isCNTRL_LC(c) _generic_LC(c, _CC_CNTRL, iscntrl)
#define PadnamePV(pn) (pn)->xpadn_pv
#define PERL_ARGS_ASSERT_MY_MKOSTEMP_CLOEXEC assert(templte)
#define KEV_INET6_REQUEST_NAT64_PREFIX 7
#define NATIVE_UTF8_TO_I8(ch) (__ASSERT_(FITS_IN_8_BITS(ch)) ((U8) ((ch) | 0)))
#define SvWEAKREF(sv) ((SvFLAGS(sv) & (SVf_ROK|SVprv_WEAKREF)) == (SVf_ROK|SVprv_WEAKREF))
#define RXf_USE_INTUIT_NOML (1U<<(RXf_BASE_SHIFT+7))
#define PERL_ARGS_ASSERT_THREAD_LOCALE_INIT 
#define __LP64_OFF64 (1)
#define MUTABLE_GV(p) ((GV *)MUTABLE_PTR(p))
#define toUPPER_utf8_safe(p,e,s,l) _toUPPER_utf8_flags(p,e,s,l, 0)
#define CopLINE(c) ((c)->cop_line)
#define KERN_KDSETBUF 4
#define HvHASKFLAGS_on(hv) (SvFLAGS(hv) |= SVphv_HASKFLAGS)
#define PCRE2_ANCHORED 0x80000000u
#define cx_pushgiven(a,b) Perl_cx_pushgiven(aTHX_ a,b)
#define MALLOC_CHECK_TAINT2(argc,argv) MALLOC_CHECK_TAINT(argc,argv,NULL)
#define SV_UNDEF_RETURNS_NULL 2048
#define my_fflush_all() Perl_my_fflush_all(aTHX)
#define NGX_HTTP_UPSTREAM_FT_TIMEOUT 0x00000004
#define PERL_ARGS_ASSERT_BOOT_CORE_PERLIO 
#define IVTYPE long
#define CLANG_DIAG_RESTORE_STMT CLANG_DIAG_RESTORE NOOP
#define TIOCEXCL _IO('t', 13)
#define IPV6_LEAVE_GROUP 13
#define FP_NAN 1
#define I_SYS_POLL 
#define makedev(x,y) ((dev_t)(((x) << 24) | (y)))
#define IP_RECVDSTADDR 7
#define SIG_IGN (void (*)(int))1
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_3(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_5(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_6(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_9(x) x
#define PerlLIO_readlink(path,buf,bufsiz) readlink((path), (buf), (bufsiz))
#define PERL_ARGS_ASSERT_SV_NEWMORTAL 
#define IPV6_SOCKOPT_RESERVED1 3
#define PerlLIO_dup(fd) dup((fd))
#define __WATCHOS_1_0 10000
#define SCNo64 __SCN_64_LENGTH_MODIFIER__ "o"
#define UNLOCK_LC_NUMERIC_STANDARD() STMT_START { if (PL_numeric_standard > 1) { PL_numeric_standard--; } else { assert(0); } DEBUG_Lv(PerlIO_printf(Perl_debug_log, "%s: %d: ", __FILE__, __LINE__); if (PL_numeric_standard <= 1) PerlIO_printf(Perl_debug_log, "lc_numeric_standard now unlocked\n"); else PerlIO_printf(Perl_debug_log, "lc_numeric_standard lock decremented to depth %d\n", PL_numeric_standard);); } STMT_END
#define KERN_UREFS_OVERFLOW 19
#define VM_REGION_BASIC_INFO_COUNT ((mach_msg_type_number_t) (sizeof(vm_region_basic_info_data_t)/sizeof(int)))
#define __UINT8_MAX__ 0xff
#define PL_padname_const (vTHX->Ipadname_const)
#define _POSIX_CLOCK_SELECTION (-1)
#define sv_uv(a) Perl_sv_uv(aTHX_ a)
#define HAS_IP_MREQ 
#define _SC_TYPED_MEMORY_OBJECTS 102
#define SvIOK_on(sv) (assert_not_glob(sv) SvFLAGS(sv) |= (SVf_IOK|SVp_IOK))
#define PERL_HASH_FUNC _PERL_HASH_FUNC
#define I_ARPA_INET 
#define PerlProc_pipe(fd) pipe((fd))
#define _generic_utf8_safe(classnum,p,e,above_latin1) ((! _utf8_safe_assert(p, e)) ? (_force_out_malformed_utf8_message((U8 *) (p), (U8 *) (e), 0, 1), 0) : (UTF8_IS_INVARIANT(*(p))) ? _generic_isCC(*(p), classnum) : (UTF8_IS_DOWNGRADEABLE_START(*(p)) ? ((LIKELY((e) - (p) > 1 && UTF8_IS_CONTINUATION(*((p)+1)))) ? _generic_isCC(EIGHT_BIT_UTF8_TO_NATIVE(*(p), *((p)+1 )), classnum) : (_force_out_malformed_utf8_message( (U8 *) (p), (U8 *) (e), 0, 1), 0)) : above_latin1))
#define NGX_HTTP_SCGI_TEMP_PATH "scgi_temp"
#define SvPVx(sv,len) ({SV *_sv = (sv); SvPV(_sv, len); })
#define PERL_ARGS_ASSERT_SV_RESETPVN 
#define KEYWORD_PLUGIN_MUTEX_LOCK MUTEX_LOCK(&PL_keyword_plugin_mutex)
#define PRIiLEAST16 PRIi16
#define DT_WHT 14
#define SvPVx_force(sv,len) sv_pvn_force(sv, &len)
#define FBMcf_TAIL_DOLLAR 1
#define PERL_ARGS_ASSERT_DO_OPEN6 assert(gv); assert(oname)
#define PERL_ARGS_ASSERT_DO_OPEN9 assert(gv); assert(name); assert(svs)
#define nothreadhook() Perl_nothreadhook(aTHX)
#define PUSHMARK(p) STMT_START { I32 * mark_stack_entry; if (UNLIKELY((mark_stack_entry = ++PL_markstack_ptr) == PL_markstack_max)) mark_stack_entry = markstack_grow(); *mark_stack_entry = (I32)((p) - PL_stack_base); DEBUG_s(DEBUG_v(PerlIO_printf(Perl_debug_log, "MARK push %p %" IVdf "\n", PL_markstack_ptr, (IV)*mark_stack_entry))); } STMT_END
#define MACH_VOUCHER_ATTR_IMPORTANCE_SELF ((mach_voucher_attr_recipe_command_t)200)
#define EV_SYSFLAGS 0xF000
#define IN_ZERONET(i) (((u_int32_t)(i) & 0xff000000) == 0)
#define whichsig(pv) whichsig_pv(pv)
#define SvPVbytex_nolen(sv) ({SV *_sv = (sv); SvPVbyte_nolen(_sv); })
#define __FLT32_MIN_EXP__ (-125)
#define HINT_UTF8 0x00800000
#define PROCESSOR_INFO_MAX (1024)
#define OS_NORETURN __attribute__((__noreturn__))
#define gv_stashsv(a,b) Perl_gv_stashsv(aTHX_ a,b)
#define INT8_MAX 127
#define CLD_TRAPPED 4
#define IPPROTO_HMP 20
#define TAILQ_NEXT(elm,field) ((elm)->field.tqe_next)
#define SvPCS_IMPORTED_off(sv) (SvFLAGS(sv) &= ~(SVf_ROK|SVprv_PCS_IMPORTED))
#define pregfree2(a) Perl_pregfree2(aTHX_ a)
#define __offsetof(type,field) __builtin_offsetof(type, field)
#define case_37_SBOX32(hash,state,key) 
#define PERL_ARGS_ASSERT_SV_INSERT assert(bigstr); assert(little)
#define PERL_ARGS_ASSERT_NEWUNOP 
#define AI_DEFAULT (AI_V4MAPPED_CFG | AI_ADDRCONFIG)
#define PCRE2_ERROR_TOOMANYREPLACE (-61)
#define IPV6_PATHMTU 44
#define BASEOP OP* op_next; OP* op_sibparent; OP* (*op_ppaddr)(pTHX); PADOFFSET op_targ; PERL_BITFIELD16 op_type:9; PERL_BITFIELD16 op_opt:1; PERL_BITFIELD16 op_slabbed:1; PERL_BITFIELD16 op_savefree:1; PERL_BITFIELD16 op_static:1; PERL_BITFIELD16 op_folded:1; PERL_BITFIELD16 op_moresib:1; PERL_BITFIELD16 op_spare:1; U8 op_flags; U8 op_private;
#define MAP_RESILIENT_CODESIGN 0x2000
#define ESPIPE 29
#define toLOWER_uni(c,s,l) toLOWER_uvchr(c,s,l)
#define PERL_ARGS_ASSERT_MARKSTACK_GROW 
#define PERL_ARGS_ASSERT_SV_CLEAN_ALL 
#define MAX_FATAL_kGUARD_EXC_CODE (1u << 7)
#define THREAD_READ_NULL ((thread_read_t) 0)
#define timevalcmp(l,r,cmp) timercmp(l, r, cmp)
#define _POSIX_TTY_NAME_MAX 9
#define NGX_HTTP_X_FORWARDED_FOR 1
#define MAP_MEM_4K_DATA_ADDR 0x800000
#define PERL_ARGS_ASSERT_CK_ANONCODE assert(o)
#define PCRE2_ERROR_LOOKBEHIND_NOT_FIXED_LENGTH 125
#define RXf_USE_INTUIT_ML (1U<<(RXf_BASE_SHIFT+8))
#define PL_Sock (vTHX->ISock)
#define UNICODE_SURROGATE_LAST 0xDFFF
#define case_93_SBOX32(hash,state,key) 
#define HAS_ILOGB 
#define HOST_COALITION_PORT (15 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define HAS_LC_MONETARY_2008 
#define htonl(x) __DARWIN_OSSwapInt32(x)
#define av_delete(a,b,c) Perl_av_delete(aTHX_ a,b,c)
#define EVAL_KEEPERR 4
#define ngx_hash(key,c) ((ngx_uint_t) key * 31 + c)
#define KERN_MAXPROCPERUID 30
#define _SC_2_C_DEV 19
#define do_aexec(really,mark,sp) do_aexec5(really, mark, sp, 0, 0)
#define FIOASYNC _IOW('f', 125, int)
#define CATCH_SET(v) STMT_START { DEBUG_l( Perl_deb(aTHX_ "JUMPLEVEL set catch %d => %d (for %p) at %s:%d\n", PL_top_env->je_mustcatch, v, (void*)PL_top_env, __FILE__, __LINE__);) PL_top_env->je_mustcatch = (v); } STMT_END
#define LC_C_LOCALE ((locale_t)NULL)
#define case_142_SBOX32(hash,state,key) 
#define PCRE2_ERROR_BACKSLASH_C_SYNTAX 168
#define INT16_MAX 32767
#define CTLFLAG_KERN 0x01000000
#define ESC_NATIVE 0x1B
#define case_134_SBOX32(hash,state,key) 
#define PL_AboveLatin1 (vTHX->IAboveLatin1)
#define RLIMIT_AS 5
#define PerlSIO_fopen(x,y) fopen(x,y)
#define IPV6_NEXTHOP IPV6_3542NEXTHOP
#define PERL_ARGS_ASSERT_ISUTF8_CHAR assert(s0); assert(e)
#define RETURN return (PUTBACK, NORMAL)
#define SAVEt_PPTR 39
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define ngx_rbtree_data(node,type,link) (type *) ((u_char *) (node) - offsetof(type, link))
#define _MACH_HOST_INFO_H_ 
#define _V6_ILP32_OFF32 __ILP32_OFF32
#define __DARWIN_FD_CLR(n,p) __darwin_fd_clr((n), (p))
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define trunc_page_kernel(x) ((x) & (~vm_kernel_page_mask))
#define sv_catsv_flags(a,b,c) Perl_sv_catsv_flags(aTHX_ a,b,c)
#define HASATTRIBUTE_NORETURN 
#define NOTE_NONE 0x00000080
#define SvSHARE(sv) PL_sharehook(aTHX_ sv)
#define UNICODE_DISALLOW_ABOVE_31_BIT UNICODE_DISALLOW_PERL_EXTENDED
#define ngx_alloc_buf(pool) ngx_palloc(pool, sizeof(ngx_buf_t))
#define ATTR_VOL_UUID 0x00040000
#define NGX_HAVE_GETADDRINFO 1
#define EXC_I386_ENDPERR 33
#define IP_FW_RESETLOG 45
#define ERPCMISMATCH 73
#define PERL_ARGS_ASSERT_REG_NAMED_BUFF_ALL assert(rx)
#define case_100_SBOX32(hash,state,key) 
#define SETALL 9
#define KERN_MAXVNODES 5
#define _PTHREAD_ONCE_SIG_init 0x30B1BCBA
#define __FLT_EVAL_METHOD__ 0
#define EVFILT_AIO (-3)
#define EAI_NONAME 8
#define is_c9strict_utf8_string_loc(s,len,ep) is_c9strict_utf8_string_loclen(s, len, ep, 0)
#define SvPVx_nolen_const(sv) ({SV *_sv = (sv); SvPV_nolen_const(_sv); })
#define BHKf_bhk_post_end 0x04
#define MACH_PORT_TYPE_DEAD_NAME MACH_PORT_TYPE(MACH_PORT_RIGHT_DEAD_NAME)
#define EPROGUNAVAIL 74
#define isALNUMC_LC_uvchr(c) isALPHANUMERIC_LC_uvchr(c)
#define PL_statname (vTHX->Istatname)
#define ngx_de_size(dir) (dir)->info.st_size
#define isPSXSPC_utf8_safe(p,e) isSPACE_utf8_safe(p, e)
#define TASK_EXC_GUARD_MP_FATAL 0x80
#define HAS_SIGINFO_SI_ADDR 
#define WARN_RESERVED 37
#define CPU_SUBTYPE_INTEL_MODEL_ALL 0
#define pcre2_substring_free PCRE2_SUFFIX(pcre2_substring_free_)
#define IP_DEFAULT_MULTICAST_LOOP 1
#define atfork_lock Perl_atfork_lock
#define __FXSR__ 1
#define SCNiPTR "li"
#define SANE_ERRSV() STMT_START { SV ** const svp = &GvSV(PL_errgv); if (!*svp) { *svp = newSVpvs(""); } else if (SvREADONLY(*svp)) { SV *dupsv = newSVsv(*svp); SvREFCNT_dec_NN(*svp); *svp = dupsv; } else { SV *const errsv = *svp; if (SvMAGICAL(errsv)) { mg_free(errsv); } } } STMT_END
#define __FLT64_DECIMAL_DIG__ 17
#define _WINT_T 
#define PL_vtbl_backref PL_magic_vtables[want_vtbl_backref]
#define gv_fetchmethod_autoload(a,b,c) Perl_gv_fetchmethod_autoload(aTHX_ a,b,c)
#define ngx_close_socket close
#define __DTF_READALL 0x0008
#define HAS_GETLOGIN 
#define PERL_ARGS_ASSERT_NEWCVREF 
#define KERN_NOT_IN_SET 12
#define FPE_NOOP 0
#define FF_LINESNGL 17
#define PERL_ARGS_ASSERT_LOAD_CHARNAMES assert(char_name); assert(context); assert(error_msg)
#define PERL_SNPRINTF_CHECK(len,max,api) STMT_START { if ((max) > 0 && (Size_t)len > (max)) Perl_croak_nocontext("panic: %s buffer overflow", STRINGIFY(api)); } STMT_END
#define sv_vsetpvf(a,b,c) Perl_sv_vsetpvf(aTHX_ a,b,c)
#define IPC_NOWAIT 004000
#define SIN6_LEN 
#define CTLFLAG_NOLOCK 0x20000000
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define _POSIX_DELAYTIMER_MAX 32
#define OSVERS "20.4.0"
#define ngx_send ngx_io.send
#define case_48_SBOX32(hash,state,key) 
#define Perl_atan atan
#define P_AFFINITY 0x00010000
#define VM_MEMORY_COREGRAPHICS 42
#define NGX_ESCAPE_HTML 3
#define __IPHONE_2_0 20000
#define __IPHONE_2_2 20200
#define __WATCHOS_4_3 40300
#define IPV6CTL_RIP6STATS 36
#define hv_bucket_ratio(a) Perl_hv_bucket_ratio(aTHX_ a)
#define ngx_dlopen_n "dlopen()"
#define FNONBLOCK O_NONBLOCK
#define apply_attrs_string(a,b,c,d) Perl_apply_attrs_string(aTHX_ a,b,c,d)
#define pcre2_dfa_match PCRE2_SUFFIX(pcre2_dfa_match_)
#define HAS_UNAME 
#define PERL_ARGS_ASSERT_SAFESYSFREE 
#define GLOB_NOESCAPE 0x2000
#define AF_NS 6
#define LVf_NEG_LEN 0x2
#define PERL_ARGS_ASSERT_RUNOPS_DEBUG 
#define _POSIX_TRACE_USER_EVENT_MAX 32
#define PF_OSI AF_ISO
#define ngx_rename_file(o,n) rename((const char *) o, (const char *) n)
#define SvNOK_off(sv) (SvFLAGS(sv) &= ~(SVf_NOK|SVp_NOK))
#define MDEREF_AV_padsv_vivify_rv2av_aelem 3
#define MALLOC_INIT 
#define PERL_ARGS_ASSERT_NEWLOOPOP 
#define HeKLEN_UTF8(he) (HeKUTF8(he) ? -HeKLEN(he) : HeKLEN(he))
#define PERL_CALLCONV 
#define MBIGCLBYTES (1 << MBIGCLSHIFT)
#define DST_NONE 0
#define EOWNERDEAD 105
#define PERL_MAGIC_pos '.'
#define PADNAMEt_STATE 2
#define NGX_HTTP_GZIP_PROXIED_NO_CACHE 0x0008
#define ngx_memcmp(s1,s2,n) memcmp((const char *) s1, (const char *) s2, n)
#define SS_MAXPUSH 4
#define IPV6_ADDR_MC_FLAGS_UNICAST_BASED (IPV6_ADDR_MC_FLAGS_TRANSIENT | IPV6_ADDR_MC_FLAGS_PREFIX)
#define CvCVGV_RC_off(cv) (CvFLAGS(cv) &= ~CVf_CVGV_RC)
#define TH_FLAGS (TH_FIN|TH_SYN|TH_RST|TH_ACK|TH_URG|TH_ECE|TH_CWR)
#define NV_NAN_QS_SIGNALING (!(NV_NAN_QS_QUIET))
#define PERL_EXIT_ABORT 0x08
#define pseudo_AF_KEY 29
#define case_247_SBOX32(hash,state,key) 
#define IOC_IN (__uint32_t)0x80000000
#define GvINTRO_on(gv) (GvFLAGS(gv) |= GVf_INTRO)
#define PERL_ARGS_ASSERT_PARSE_TERMEXPR 
#define PERL_ARGS_ASSERT_DO_GV_DUMP assert(file); assert(name)
#define NGX_HTTP_KEEPALIVE_DISABLE_MSIE6 0x0004
#define PERL_ARGS_ASSERT_SAVESTACK_GROW_CNT 
#define HAS_SOCKADDR_STORAGE 
#define INT16_MIN -32768
#define CLOFSET (CLSIZE*NBPG-1)
#define TCPCI_OPT_SACK 0x00000002
#define LATIN_CAPITAL_LETTER_Y_WITH_DIAERESIS 0x0178
#define NGX_HTTP_CACHE_KEY_LEN 16
#define SV_CHECK_THINKFIRST_COW_DROP(sv) if (SvTHINKFIRST(sv)) sv_force_normal_flags(sv, SV_COW_DROP_PV)
#define PerlSIO_fgetpos(f,p) fgetpos(f,p)
#define NGX_HTTP_UPS_CONF 0x10000000
#define IPV6_DEFAULT_MULTICAST_LOOP 1
#define POPpconstx (SvPVx_nolen_const(POPs))
#define case_3_SBOX32(hash,state,key) _SBOX32_CASE(3,hash,state,key)
#define MEM_SIZE Size_t
#define xio_dirp xio_dirpu.xiou_dirp
#define RX_SUBCOFFSET(rx_sv) (ReANY(rx_sv)->subcoffset)
#define ngx_copy ngx_cpymem
#define DEBUG_Lv(a) 
#define FSHIFT 11
#define SvGROW(sv,len) (SvIsCOW(sv) || SvLEN(sv) < (len) ? sv_grow(sv,len) : SvPVX(sv))
#define case_108_SBOX32(hash,state,key) 
#define ngx_crc32_final(crc) crc ^= 0xffffffff
#define ngx_de_access(dir) (((dir)->info.st_mode) & 0777)
#define NV_MAX DBL_MAX
#define PerlSock_endprotoent endprotoent
#define __DARWIN_NBBY 8
#define STATUS_ALL_FAILURE (PL_statusvalue = 1, PL_statusvalue_posix = 1)
#define ORIGMARK (PL_stack_base + origmark)
#define PL_langinfo_buf (vTHX->Ilanginfo_buf)
#define F_LOG2PHYS 49
#define NV_IMPLICIT_BIT 
#define KERN_SYSV 42
#define ngx_memcpy(dst,src,n) (void) memcpy(dst, src, n)
#define NV_NAN_QS_BIT (1 << (NV_NAN_QS_BIT_SHIFT))
#define PERL_ARGS_ASSERT_VWARN assert(pat)
#define djSP dSP
#define PERL_ARGS_ASSERT_DO_OPEN_RAW assert(gv); assert(oname)
#define PERL_ARGS_ASSERT_MAGIC_FREECOLLXFRM assert(sv); assert(mg)
#define X86_PAGEIN_STATE_COUNT x86_PAGEIN_STATE_COUNT
#define ERANGE 34
#define OSNAME "darwin"
#define PERL_ARGS_ASSERT_SV_LEN_UTF8_NOMG assert(sv)
#define HAS_QUAD 
#define ngx_set_errno(err) errno = err
#define MUTABLE_HV(p) ((HV *)MUTABLE_PTR(p))
#define PERL_ARGS_ASSERT_NEWMETHOP_NAMED assert(const_meth)
#define PERL_ARGS_ASSERT_SV_SETREF_IV assert(rv)
#define WARN_DEPRECATED 2
#define HAS_REMQUO 
#define A_OLDGETPOLICY 2
#define PERL_ARGS_ASSERT_SV_SETPVIV assert(sv)
#define case_205_SBOX32(hash,state,key) 
#define PAD_COMPNAME_GEN_set(po,gen) (PadnamelistARRAY(PL_comppad_name)[po]->xpadn_gen = (gen))
#define MACH_MSG_VM_SPACE 0x00001000
#define get_vtbl(a) Perl_get_vtbl(aTHX_ a)
#define LDBL_DECIMAL_DIG __LDBL_DECIMAL_DIG__
#define Perl_atan2 atan2
#define MACH_SEND_KERNEL 0x00400000
#define MAX_AUDIT_RECORDS 20
#define cv_const_sv Perl_cv_const_sv
#define PL_perldb (vTHX->Iperldb)
#define UTF8_CHK_SKIP(s) (UNLIKELY(s[0] == '\0') ? 1 : MIN(UTF8SKIP(s), my_strnlen((char *) (s), UTF8SKIP(s))))
#define SAVEPADSVANDMORTALIZE(s) save_padsv_and_mortalize(s)
#define MgPV_const(mg,lp) ((((int)(lp = (mg)->mg_len)) == HEf_SVKEY) ? SvPV_const(MUTABLE_SV((mg)->mg_ptr),lp) : (const char*)(mg)->mg_ptr)
#define TIOCM_CTS 0040
#define MACH_RCV_BODY_ERROR 0x1000400c
#define MY_CXT_INDEX my_cxt_index
#define SET_NUMERIC_UNDERLYING() STMT_START { if (_NOT_IN_NUMERIC_UNDERLYING) { Perl_set_numeric_underlying(aTHX); } } STMT_END
#define ETXTBSY 26
#define PERL_WRITE_UNLOCK(mutex) STMT_START { COND_SIGNAL(&(mutex)->wakeup); MUTEX_UNLOCK(&(mutex)->lock); } STMT_END
#define sv_pos_b2u(a,b) Perl_sv_pos_b2u(aTHX_ a,b)
#define MAX_LEGAL_CP ((UV)IV_MAX)
#define SETi(i) STMT_START { TARGi(i,1); SETs(TARG); } STMT_END
#define newANONHASH(a) Perl_newANONHASH(aTHX_ a)
#define UNICODE_WARN_ABOVE_31_BIT UNICODE_WARN_PERL_EXTENDED
#define SETn(n) STMT_START { TARGn(n,1); SETs(TARG); } STMT_END
#define SETs(s) (*sp = s)
#define ss_dup(a,b) Perl_ss_dup(aTHX_ a,b)
#define MNT_UNION 0x00000020
#define kCOP cCOPx(kid)
#define AUDIT_TRIGGER_ROTATE_KERNEL 2
#define __INT8_C(c) c
#define PCRE2_NEVER_UCP 0x00000800u
#define PL_ors_sv (vTHX->Iors_sv)
#define case_65_SBOX32(hash,state,key) 
#define EALREADY 37
#define EVFILT_SYSCOUNT 17
#define NSIG __DARWIN_NSIG
#define PERL_ARGS_ASSERT_INIT_ARGV_SYMBOLS assert(argv)
#define PL_hash_rand_bits_enabled (vTHX->Ihash_rand_bits_enabled)
#define GLOB_NOMAGIC 0x0200
#define PERL_ARGS_ASSERT_GET_HASH_SEED assert(seed_buffer)
#define MACH_TASK_BASIC_INFO 20
#define UTF8_IS_CONTINUED(c) (__ASSERT_(FITS_IN_8_BITS(c)) (! UTF8_IS_INVARIANT(c)))
#define cSVOP_sv cSVOPx_sv(PL_op)
#define PerlSock_getservbyname(n,p) getservbyname(n, p)
#define case_229_SBOX32(hash,state,key) 
#define die_sv(a) Perl_die_sv(aTHX_ a)
#define PERL_ARGS_ASSERT_FOLDEQ_LOCALE assert(a); assert(b)
#define PERL_ARGS_ASSERT_INTRO_MY 
#define PL_random_state (vTHX->Irandom_state)
#define PL_in_eval (vTHX->Iin_eval)
#define PERL_HASH(hash,str,len) PERL_HASH_WITH_STATE(PL_hash_state,hash,(U8*)(str),(len))
#define PERL_ARGS_ASSERT_SV_VSETPVF_MG assert(sv); assert(pat)
#define PERL_ARGS_ASSERT_ALLOC_LOGOP 
#define TAINT_get (cBOOL(UNLIKELY(PL_tainted)))
#define PRIO_PGRP 1
#define PERL_HASH_DEFAULT_HvMAX 7
#define new_stackinfo(a,b) Perl_new_stackinfo(aTHX_ a,b)
#define PERL_ARGS_ASSERT_MALLOC 
#define KERN_NO_ACCESS 8
#define __FLT64X_MAX_10_EXP__ 4932
#define DOUBLEINFBYTES 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x7f
#define PL_generation (vTHX->Igeneration)
#define PMf_SINGLELINE (1U<<1)
#define NGX_HTTP_PROPFIND 0x00000400
#define isWORDCHAR_uvchr(c) _generic_invlist_uvchr(_CC_WORDCHAR, c)
#define FP_FXSR 4
#define MACH_RCV_GUARDED_DESC 0x00001000
#define PERL_ARGS_ASSERT_GV_CONST_SV assert(gv)
#define IP_OLD_FW_RESETLOG 56
#define __IPHONE_10_0 100000
#define __IPHONE_10_1 100100
#define __IPHONE_10_2 100200
#define __IPHONE_10_3 100300
#define _BSD_MACHINE_SIGNAL_H_ 
#define hv_iterkey(a,b) Perl_hv_iterkey(aTHX_ a,b)
#define pad_compname_type(a) Perl_pad_compname_type(aTHX_ a)
#define NV_MIN DBL_MIN
#define _NOT_IN_NUMERIC_UNDERLYING (! PL_numeric_underlying && PL_numeric_standard < 2)
#define HAS_TRUNCATE 
#define PL_perlio (vTHX->Iperlio)
#define PERL_ARGS_ASSERT_CK_FTST assert(o)
#define KERN_TFP_POLICY_DEFAULT 2
#define OA_UNOP (1 << OCSHIFT)
#define TRACEBUF 
#define PERL_ARGS_ASSERT_SAVE_GENERIC_PVREF assert(str)
#define ATTR_VOL_SIZE 0x00000004
#define INT8_C(v) (v)
#define x86_INSTRUCTION_STATE_COUNT ((mach_msg_type_number_t)(sizeof(x86_instruction_state_t) / sizeof(int)))
#define reg_named_buff_firstkey(a,b) Perl_reg_named_buff_firstkey(aTHX_ a,b)
#define HAS_LOCALECONV 
#define DEBUG_Uv(a) 
#define sigmask(m) (1 << ((m)-1))
#define TH_PUSH 0x08
#define HvUSEDKEYS(hv) (HvTOTALKEYS(hv) - HvPLACEHOLDERS_get(hv))
#define case_125_SBOX32(hash,state,key) 
#define DOUBLE_IS_IBM_DOUBLE_64_BIT 13
#define ALLPERMS (S_ISUID|S_ISGID|S_ISTXT|S_IRWXU|S_IRWXG|S_IRWXO)
#define SSPUSHDXPTR(p) (PL_savestack[PL_savestack_ix++].any_dxptr = (p))
#define Sock_size_t socklen_t
#define wrap_keyword_plugin(a,b) Perl_wrap_keyword_plugin(aTHX_ a,b)
#define __SNPT 0x0800
#define OA_UNOP_AUX (15 << OCSHIFT)
#define CPU_SUBTYPE_INTEL(f,m) ((cpu_subtype_t) (f) + ((m) << 4))
#define PERL_ARGS_ASSERT_PERL_CUSTOM_OP_XOP 
#define KEVENT_FLAG_NONE 0x000000
#define PERL_ARGS_ASSERT_WARN assert(pat)
#define A_SENDTRIGGER 31
#define PERL_ARGS_ASSERT_SV_FREE 
#define STARTPERL "#!/usr/local/opt/perl/bin/perl"
#define PCRE2_ERROR_DFA_BADRESTART (-38)
#define savesharedsvpv(a) Perl_savesharedsvpv(aTHX_ a)
#define _SC_THREAD_STACK_MIN 93
#define ngx_file_mtime(sb) (sb)->st_mtime
#define __FLT128_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F128
#define CIRCLEQ_INSERT_BEFORE(head,listelm,elm,field) do { CIRCLEQ_CHECK_PREV(head, listelm, field); (elm)->field.cqe_next = (listelm); (elm)->field.cqe_prev = (listelm)->field.cqe_prev; if ((listelm)->field.cqe_prev == (void *)(head)) (head)->cqh_first = (elm); else (listelm)->field.cqe_prev->field.cqe_next = (elm); (listelm)->field.cqe_prev = (elm); } while (0)
#define VOL_CAP_INT_RENAME_OPENFAIL 0x00100000
#define PL_reg_curpm (vTHX->Ireg_curpm)
#define is_HORIZWS_cp_high(cp) ( 0x1680 == cp || ( 0x1680 < cp && ( inRANGE_helper_(UV, cp, 0x2000, 0x200A) || ( 0x200A < cp && ( 0x202F == cp || ( 0x202F < cp && ( 0x205F == cp || 0x3000 == cp ) ) ) ) ) ) )
#define REENTRANT_PROTO_I_D 23
#define REENTRANT_PROTO_I_H 24
#define DEBUG_U_FLAG 0x00001000
#define PERL_ARGS_ASSERT_VCROAK 
#define LIST_FIRST(head) ((head)->lh_first)
#define PERL_MULTICONCAT_IX_LENGTHS 5
#define isGRAPH_uvchr(c) _generic_invlist_uvchr(_CC_GRAPH, c)
#define OS_OVERLOADABLE 
#define MACH_MSG_IPC_SPACE 0x00002000
#define _generic_uvchr(classnum,above_latin1,c) ((c) < 256 ? _generic_isCC(c, classnum) : above_latin1(c))
#define CopLABEL_len(c,len) Perl_cop_fetch_label(aTHX_ (c), len, NULL)
#define OPf_STACKED 64
#define sv_true(a) Perl_sv_true(aTHX_ a)
#define PerlProc_getlogin() getlogin()
#define OP_IS_NUMCOMPARE(op) ((op) >= OP_LT && (op) <= OP_I_NCMP)
#define OPpCONCAT_NESTED 0x40
#define KERN_KDPIDEX 14
#define _POSIX_SYNCHRONIZED_IO (-1)
#define PERL_ARGS_ASSERT_SV_SETHEK assert(sv)
#define __APPLE_API_STANDARD 
#define FLT_ROUNDS 1
#define AU_CLASS_MASK_RESERVED 0x10000000
#define CPU_SUBTYPE_ARM_ALL ((cpu_subtype_t) 0)
#define SvREFCNT_inc_simple_void_NN(sv) (void)(++SvREFCNT(MUTABLE_SV(sv)))
#define WCHAR_MIN (-WCHAR_MAX-1)
#define HUGE_VALF __builtin_huge_valf()
#define IPV6CTL_RR_PRUNE 22
#define IN_ARE_ADDR_EQUAL(a,b) (bcmp(&(a)->s_addr, &(b)->s_addr, sizeof (struct in_addr)) == 0)
#define __FLT_EVAL_METHOD_TS_18661_3__ 0
#define NV_NAN_PAYLOAD_PERM_IEEE_754_128_BE 0xFF, 0xFF, 0xd, 0xc, 0xb, 0xa, 0x9, 0x8, NV_NAN_PAYLOAD_PERM_7_TO_0
#define PERL_ARGS_ASSERT_FILTER_READ assert(buf_sv)
#define HUGE_VALL __builtin_huge_vall()
#define PERL_ARGS_ASSERT_SV_PEEK 
#define ATTR_VOL_MOUNTPOINT 0x00001000
#define IoTYPE_RDWR '+'
#define KEV_INET_NEW_ADDR 1
#define VM_BEHAVIOR_CAN_REUSE ((vm_behavior_t) 10)
#define SvPV_shrink_to_cur(sv) STMT_START { const STRLEN _lEnGtH = SvCUR(sv) + 1; SvPV_renew(sv, _lEnGtH); } STMT_END
#define cophh_exists_sv(cophh,key,hash,flags) cBOOL(Perl_refcounted_he_fetch_sv(aTHX_ cophh, key, hash, flags | COPHH_EXISTS))
#define VOL_CAP_FMT_SEALED 0x02000000
#define AF_E164 AF_ISDN
#define nBIT_MASK(n) ((UINTMAX_C(1) << (n)) - 1)
#define HVhek_WASUTF8 0x02
#define PERLIO_LAYERS 1
#define blk_old_tmpsfloor cx_u.cx_blk.blku_old_tmpsfloor
#define case_39_SBOX32(hash,state,key) 
#define TASK_EXC_GUARD_VM_ALL 0x0f
#define MPG_FLAGS_IMMOVABLE_PINNED (0x01ull << 56)
#define PERL_ARGS_ASSERT_INIT_DEBUGGER 
#define PERL_ARGS_ASSERT_CALL_PV assert(sub_name)
#define HW_TB_FREQ 23
#define CPUFAMILY_ARM_9 0xe73283ae
#define VM_PURGABLE_EMPTY 2
#define case_82_SBOX32(hash,state,key) 
#define VM_MEMORY_COREDATA_OBJECTIDS 46
#define mPUSHp(p,l) PUSHs(newSVpvn_flags((p), (l), SVs_TEMP))
#define HAS_SIN6_SCOPE_ID 
#define MACH_MSGH_BITS_USER 0x801f1f1fU
#define FF_0DECIMAL 16
#define USER_BC_BASE_MAX 2
#define CVf_UNIQUE 0x0100
#define KEYWORD_PLUGIN_STMT 1
#define U8TO16_LE(ptr) (_shifted_octet(U16,(ptr),0, 0)| _shifted_octet(U16,(ptr),1, 8))
#define PL_sv_consts (vTHX->Isv_consts)
#define _isQUOTEMETA(c) _generic_isCC(c, _CC_QUOTEMETA)
#define FD_SETSIZE __DARWIN_FD_SETSIZE
#define __LDBL_MAX_EXP__ 16384
#define ngx_add_conn ngx_event_actions.add_conn
#define PNfARG(pn) (int)1, (UV)PadnameLEN(pn), (void *)PadnamePV(pn)
#define ngx_lock_fd_n "fcntl(F_SETLKW, F_WRLCK)"
#define PERL_ARGS_ASSERT_GV_AUTOLOAD_PV assert(namepv)
#define gv_fetchsv_nomg(n,f,t) gv_fetchsv(n,(f)|GV_NO_SVGMAGIC,t)
#define hv_magic(hv,gv,how) sv_magic(MUTABLE_SV(hv), MUTABLE_SV(gv), how, NULL, 0)
#define GvASSUMECV_off(gv) (GvFLAGS(gv) &= ~GVf_ASSUMECV)
#define UINT_FAST16_MAX UINT16_MAX
#define PERL_ARGS_ASSERT_MAGIC_SETNKEYS assert(sv); assert(mg)
#define HAS_SIGINFO_SI_UID 
#define WARN_CLOSED 6
#define SCNuFAST32 SCNu32
#define DOUBLE_STYLE_IEEE 
#define ENOTBLK 15
#define PERL_TSA_CAPABILITY(x) PERL_TSA__(capability(x))
#define pad_peg(label) 
#define ngx_rbtree_sentinel_init(node) ngx_rbt_black(node)
#define VOL_CAP_FMT_SPARSE_FILES 0x00000040
#define OPpLVREF_TYPE 0x30
#define PL_strxfrm_NUL_replacement (vTHX->Istrxfrm_NUL_replacement)
#define IoPAGE(sv) ((XPVIO*) SvANY(sv))->xio_page
#define _MACH_TIME_VALUE_H_ 
#define EPROTOTYPE 41
#define EFL_SET 0x00000002
#define NGX_ERROR -1
#define PERL_ARGS_ASSERT__UTF8N_TO_UVCHR_MSGS_HELPER assert(s)
#define PERL_ARGS_ASSERT_DOREF assert(o)
#define SvVSTRING_mg(sv) (SvMAGICAL(sv) ? mg_find(sv,PERL_MAGIC_vstring) : NULL)
#define _generic_LC_invlist_uvchr(latin1,classnum,c) (c < 256 ? latin1(c) : _is_uni_FOO(classnum, c))
#define VM_PURGABLE_ALL_MASKS (VM_PURGABLE_STATE_MASK | VM_VOLATILE_ORDER_MASK | VM_PURGABLE_ORDERING_MASK | VM_PURGABLE_BEHAVIOR_MASK | VM_VOLATILE_GROUP_MASK | VM_PURGABLE_DEBUG_MASK | VM_PURGABLE_NO_AGING_MASK)
#define A_GETSFLAGS 39
#define sv_pvutf8n(a,b) Perl_sv_pvutf8n(aTHX_ a,b)
#define case_210_SBOX32(hash,state,key) 
#define S_IREAD S_IRUSR
#define PERL_ARGS_ASSERT_SV_2CV assert(st); assert(gvp)
#define NeXTBSD 1995064
#define _NGX_HTTP_PERL_MODULE_H_INCLUDED_ 
#define PL_stack_max (vTHX->Istack_max)
#define ALIGN(p) __DARWIN_ALIGN(p)
#define PERL_MAGIC_collxfrm 'o'
#define NGX_HTTP_PROXY_TEMP_PATH "proxy_temp"
#define _SYS_VM_H 
#define HAS_DIRFD 
#define PERL_ARGS_ASSERT_OP_CLEAR assert(o)
#define HAS_TRUNC 
#define CvCONST_off(cv) (CvFLAGS(cv) &= ~CVf_CONST)
#define PerlSIO_fwrite(buf,sz,count,f) fwrite(buf,sz,count,f)
#define VM_MEMORY_IOSURFACE 88
#define PERL_ARGS_ASSERT_GV_AUTOLOAD_SV assert(namesv)
#define htoni htonl
#define SvPOK_only_UTF8(sv) (assert_not_ROK(sv) assert_not_glob(sv) SvFLAGS(sv) &= ~(SVf_OK| SVf_IVisUV), SvFLAGS(sv) |= (SVf_POK|SVp_POK))
#define HAS_SCALBNL 
#define htons(x) __DARWIN_OSSwapInt16(x)
#define case_232_SBOX32(hash,state,key) 
#define PERL_ARGS_ASSERT_SV_2PVBYTE assert(sv)
#define KEV_DL_SUBCLASS 2
#define KIPC_MAX_HDR 6
#define HAS_LSEEK_PROTO 
#define SV_CATUTF8 32768
#define pad_findmy_pvs(name,flags) Perl_pad_findmy_pvn(aTHX_ STR_WITH_LEN(name), flags)
#define PERL_ARGS_ASSERT_SV_UTF8_UPGRADE_NOMG 
#define ngx_delete_dir(name) rmdir((const char *) name)
#define REENTRANT_PROTO_S_CIISBIE 55
#define lex_peek_unichar(a) Perl_lex_peek_unichar(aTHX_ a)
#define SvREFCNT_inc_void(sv) Perl_SvREFCNT_inc_void(MUTABLE_SV(sv))
#define IoBOTTOM_NAME(sv) ((XPVIO*) SvANY(sv))->xio_bottom_name
#define IPV6CTL_GIF_HLIM 19
#define PERL_ARGS_ASSERT_RXRES_SAVE assert(rsp); assert(rx)
#define SO_REUSEADDR 0x0004
#define __result_use_check __attribute__((__warn_unused_result__))
#define XPUSHTARG STMT_START { SvSETMAGIC(TARG); XPUSHs(TARG); } STMT_END
#define ngx_is_file(sb) (S_ISREG((sb)->st_mode))
#define PL_lockhook (vTHX->Ilockhook)
#define PERL_ARGS_ASSERT_GV_ADD_BY_TYPE 
#define host_get_coalition_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_COALITION_PORT, (port)))
#define MACH_MSG_VIRTUAL_COPY 1
#define FP_PREC_24B 0
#define REENTRANT_PROTO_S_SBI 63
#define TASK_BASE_LATENCY_QOS_POLICY 10
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_15(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_16(x) x
#define PM_GETRE(o) (SvTYPE(PL_regex_pad[(o)->op_pmoffset]) == SVt_REGEXP ? (REGEXP*)(PL_regex_pad[(o)->op_pmoffset]) : NULL)
#define _SC_TIMERS 41
#define SO_USELOOPBACK 0x0040
#define _Nonnull 
#define ibcmp_locale(s1,s2,len) cBOOL(! foldEQ_locale(s1, s2, len))
#define _CS_XBS5_LP64_OFF64_LDFLAGS 29
#define REXEC_FAIL_ON_UNDERFLOW 0x80
#define _UINTPTR_T 
#define sv_dec_nomg(a) Perl_sv_dec_nomg(aTHX_ a)
#define TASK_FLAGS_INFO_COUNT ((mach_msg_type_number_t) (sizeof(task_flags_info_data_t) / sizeof (natural_t)))
#define sv_set_undef(a) Perl_sv_set_undef(aTHX_ a)
#define GvIMPORTED_CV_off(gv) (GvFLAGS(gv) &= ~GVf_IMPORTED_CV)
#define PERL_ARGS_ASSERT_NEWSUB 
#define IPPROTO_WSN 74
#define MFSTYPENAMELEN 16
#define PERL_ARGS_ASSERT_CK_SHIFT assert(o)
#define PCRE2_NEVER_UTF 0x00001000u
#define _STRUCT_X86_THREAD_STATE32 struct __darwin_i386_thread_state
#define O_APPEND 0x00000008
#define IoBOTTOM_GV(sv) ((XPVIO*) SvANY(sv))->xio_bottom_gv
#define pcre2_jit_callback PCRE2_SUFFIX(pcre2_jit_callback_)
#define HAS_IP_MREQ_SOURCE 
#define _to_utf8_upper_flags(a,b,c,d,e) Perl__to_utf8_upper_flags(aTHX_ a,b,c,d,e)
#define _FORTIFY_SOURCE 2
#define PCRE2_ERROR_UTF_IS_DISABLED 174
#define LONG_DOUBLE_IS_X86_80_BIT_BIG_ENDIAN 4
#define NGX_HASH_SMALL 1
#define TAILQ_CHECK_HEAD(head,field) 
#define MAXPATHLEN PATH_MAX
#define NGX_REGEX_CASELESS 0x00000001
#define G_NODEBUG 0x40
#define PERL_ARGS_ASSERT_CK_SASSIGN assert(o)
#define SvOOK_on(sv) (SvFLAGS(sv) |= SVf_OOK)
#define SV_UTF8_NO_ENCODING 0
#define case_56_SBOX32(hash,state,key) 
#define AUDIT_PERZONE 0x2000
#define SvPV_force_mutable(sv,len) SvPV_force_flags_mutable(sv, len, SV_GMAGIC)
#define TIOCIXON _IO('t', 129)
#define ATTR_VOL_OBJCOUNT 0x00000100
#define COLL_WEIGHTS_MAX 2
#define RXp_MATCH_UTF8_set(prog,t) ((t) ? RXp_MATCH_UTF8_on(prog) : RXp_MATCH_UTF8_off(prog))
#define OS_STRINGIFY(s) __OS_STRINGIFY(s)
#define ngx_delete_posted_event(ev) (ev)->posted = 0; ngx_queue_remove(&(ev)->queue); ngx_log_debug1(NGX_LOG_DEBUG_CORE, (ev)->log, 0, "delete posted event %p", ev);
#define RX_BUFF_IDX_POSTMATCH -1
#define BmUSEFUL(sv) ((XPVIV*) SvANY(sv))->xiv_u.xivu_iv
#define HINT_NEW_INTEGER 0x00001000
#define NGX_RESOLVE_DNAME 39
#define PERL_TSA_EXCLUDES(x) PERL_TSA__(locks_excluded(x))
#define OPCODE U16
#define PERL_ARGS_ASSERT_PREGEXEC assert(prog); assert(stringarg); assert(strend); assert(strbeg); assert(screamer)
#define PTHREAD_COND_INITIALIZER {_PTHREAD_COND_SIG_init, {0}}
#define _LC_NUM_MASK 6
#define IPV6_IPSEC_POLICY 28
#define HOST_VM_PURGABLE_COUNT ((mach_msg_type_number_t) (sizeof(host_purgable_info_data_t)/sizeof(integer_t)))
#define PERL_ARGS_ASSERT_SV_VCATPVF_MG assert(sv); assert(pat)
#define _STRUCT_X86_THREAD_STATE64 struct __darwin_x86_thread_state64
#define PWCLASS 
#define newCONSTSUB(a,b,c) Perl_newCONSTSUB(aTHX_ a,b,c)
#define PCRE2_CALLOUT_STARTMATCH 0x00000001u
#define getchar_unlocked() getc_unlocked(stdin)
#define PRIO_PROCESS 0
#define IN6_IS_ADDR_MULTICAST(a) ((a)->s6_addr[0] == 0xff)
#define isIDCONT_utf8_safe(p,e) _generic_func_utf8_safe(_CC_WORDCHAR, _is_utf8_perl_idcont, p, e)
#define dEXT 
#define SF_ARCHIVED 0x00010000
#define USHRT_MAX (SHRT_MAX * 2 + 1)
#define ETIMEDOUT 60
#define PERL_TSA_NO_TSA PERL_TSA__(no_thread_safety_analysis)
#define LEDGER_ITEM_INFINITY ((ledger_item_t) (~0))
#define _WCHAR_H_ 
#define _SC_AIO_LISTIO_MAX 42
#define ptr_table_store(a,b,c) Perl_ptr_table_store(aTHX_ a,b,c)
#define NGX_INVALID_INDEX 0xd0d0d0d0
#define PerlSock_setprotoent(f) setprotoent(f)
#define HAS_NEWLOCALE 
#define REENTRANT_PROTO_I_TsISBWRE 50
#define PERL_ARGS_ASSERT_CK_METHOD assert(o)
#define DEBUG_s_TEST (0)
#define NFSV2_MAX_FH_SIZE 32
#define SF_NOUNLINK 0x00100000
#define htovl(x) vtohl(x)
#define IoTYPE(sv) ((XPVIO*) SvANY(sv))->xio_type
#define pcre2_real_general_context PCRE2_SUFFIX(pcre2_real_general_context_)
#define sv_taint(sv) sv_magic((sv), NULL, PERL_MAGIC_taint, NULL, 0)
#define pcre2_match_data_create_from_pattern PCRE2_SUFFIX(pcre2_match_data_create_from_pattern_)
#define htovs(x) vtohs(x)
#define RANDOM_R_PROTO 0
#define PL_statcache (vTHX->Istatcache)
#define __MAC_10_10_2 101002
#define __MAC_10_10_3 101003
#define FIODTYPE _IOR('f', 122, int)
#define FILTER_READ(idx,sv,len) filter_read(idx, sv, len)
#define KERN_KDPIDTR 11
#define CLANG_DIAG_RESTORE 
#define PL_basetime (vTHX->Ibasetime)
#define UTF8_ALLOW_LONG 0x0010
#define case_116_SBOX32(hash,state,key) 
#define save_list(a,b) Perl_save_list(aTHX_ a,b)
#define NGX_RESOLVE_AAAA 28
#define PERL_ARGS_ASSERT_SV_2PVBYTE_NOLEN assert(sv)
#define IV_DIG (BIT_DIGITS(IVSIZE * 8))
#define COPHH_KEY_UTF8 REFCOUNTED_HE_KEY_UTF8
#define isIDCONT_LC_utf8_safe(p,e) _generic_LC_func_utf8_safe(isIDCONT_LC, _is_utf8_perl_idcont, p, e)
#define PCRE2_USE_OFFSET_LIMIT 0x00800000u
#define CXTYPEMASK 0xf
#define TOO_LATE_FOR(ch) TOO_LATE_FOR_(ch, "")
#define __END_DECLS 
#define HAS_SETLOCALE 
#define PERL_ARGS_ASSERT_GETCWD_SV assert(sv)
#define ngx_http_clear_last_modified(r) r->headers_out.last_modified_time = -1; if (r->headers_out.last_modified) { r->headers_out.last_modified->hash = 0; r->headers_out.last_modified = NULL; }
#define PERL_ARGS_ASSERT_SV_NOSHARING 
#define PERL_ARGS_ASSERT_LEX_STUFF_PVN assert(pv)
#define HOST_IO_MASTER_PORT 3
#define _POSIX_V6_LPBIG_OFFBIG __LPBIG_OFFBIG
#define __CONCAT(x,y) x ## y
#define NGX_ZLIB 1
#define PL_top_env (vTHX->Itop_env)
#define PERSIST_TIMEOUT 0x40
#define isPUNCT_LC_utf8_safe(p,e) _generic_LC_invlist_utf8_safe(isPUNCT_LC, _CC_PUNCT, p, e)
#define SO_ERROR 0x1007
#define PERL_ARGS_ASSERT_NEWTRYCATCHOP assert(tryblock); assert(catchvar); assert(catchblock)
#define LOCAL_PEERUUID 0x004
#define WAKEMON_DISABLE 0x02
#define HOST_IOCOMPRESSIONSTATS_PORT (25 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define MATTR_VAL_GET 2
#define PERL_UNUSED_VAR(x) ((void)sizeof(x))
#define PMf_USED (1U<<(PMf_BASE_SHIFT+6))
#define CPUFAMILY_INTEL_HASWELL 0x10b282dc
#define DOUBLE_IS_IEEE_754_64_BIT_LITTLE_ENDIAN 3
#define Gv_AMupdate(a,b) Perl_Gv_AMupdate(aTHX_ a,b)
#define sv_insert_flags(a,b,c,d,e,f) Perl_sv_insert_flags(aTHX_ a,b,c,d,e,f)
#define PERL_ARGS_ASSERT_CV_CLONE assert(proto)
#define newPADNAMEpvn Perl_newPADNAMEpvn
#define CBSIZE (CBLOCK - sizeof(struct cblock *) - CBQSIZE)
#define PERL_ARGS_ASSERT_CK_FUN assert(o)
#define _SC_2_PBS_MESSAGE 63
#define PERL_ARGS_ASSERT_MY_EXIT 
#define NGX_RESOLVE_REFUSED 5
#define PERL_ARGS_ASSERT_DRAND48_INIT_R assert(random_state)
#define _READ_OK (1<<9)
#define NGX_LOG_DEBUG_MUTEX 0x040
#define NOTE_REVOKE 0x00000040
#define MACH_PORT_DENAP_RECEIVER 6
#define toTITLE_utf8(p,e,s,l) toTITLE_utf8_safe(p,e,s,l)
#define PERL_ARGS_ASSERT_WHICHSIG_SV assert(sigsv)
#define PF_NATM AF_NATM
#define MATTR_VAL_GET_INFO 10
#define NGX_PROCESS_JUST_RESPAWN -4
#define PERL_ARGS_ASSERT_SV_2PV assert(sv)
#define _XOPEN_ENH_I18N (1)
#define NV_NAN_QS_BYTE(nvp) (((U8*)(nvp))[NV_NAN_QS_BYTE_OFFSET])
#define RXf_UNBOUNDED_QUANTIFIER_SEEN (1U<<(RXf_BASE_SHIFT+4))
#define A_SETQCTRL 36
#define TCPOLEN_SACK_PERMITTED 2
#define ngx_de_is_dir(dir) (((dir)->type) ? ((dir)->type == DT_DIR) : (S_ISDIR((dir)->info.st_mode)))
#define NGX_PROCESS_WORKER 3
#define POLICY_TIMESHARE_LIMIT_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_timeshare_limit)/sizeof(integer_t)))
#define UNI_DISPLAY_QQ (UNI_DISPLAY_ISPRINT |UNI_DISPLAY_BACKSLASH |UNI_DISPLAY_BACKSPACE)
#define OA_METHOP (14 << OCSHIFT)
#define PERL_ARGS_ASSERT_APPLY assert(mark); assert(sp)
#define NGX_HTTP_GET 0x00000002
#define _SC_TZNAME_MAX 27
#define CTLFLAG_ANYBODY 0x10000000
#define IP_IPSEC_POLICY 21
#define IP_RSVP_OFF 16
#define _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS 12
#define MACH_PORT_QLIMIT_LARGE (1024)
#define DECIMAL_DIG __DECIMAL_DIG__
#define SITELIB_EXP "/usr/local/Cellar/perl/5.34.0/lib/perl5/site_perl/5.34.0"
#define DIR_MNTSTATUS_MNTPOINT 0x00000001
#define EFL_USER_SET (EFL_IF)
#define OPpASSIGN_COMMON_SCALAR 0x40
#define case_73_SBOX32(hash,state,key) 
#define QUESTION_MARK_CTRL DEL_NATIVE
#define PERL_ARGS_ASSERT_SETFD_CLOEXEC 
#define MACHINE_THREAD_STATE x86_THREAD_STATE
#define MACH_SEND_SYNC_BOOTSTRAP_CHECKIN 0x00800000
#define clrbit(a,i) (((unsigned char *)(a))[(i)/NBBY] &= ~(1u<<((i)%NBBY)))
#define strncat(dest,...) __builtin___strncat_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define VOL_CAP_FMT_NO_IMMUTABLE_FILES 0x00200000
#define PERL_ARGS_ASSERT_MY_STAT 
#define SAVETMPS Perl_savetmps(aTHX)
#define MDEREF_INDEX_const 0x10
#define AF_INET6 30
#define case_180_SBOX32(hash,state,key) 
#define ngx_conf_merge_bitmask_value(conf,prev,default) if (conf == 0) { conf = (prev == 0) ? default : prev; }
#define blk_givwhen cx_u.cx_blk.blk_u.blku_givwhen
#define BIN "/usr/local/Cellar/perl/5.34.0/bin"
#define UNICODE_DISALLOW_PERL_EXTENDED 0x0080
#define MACH_MSG_TYPE_POLYMORPHIC ((mach_msg_type_name_t) -1)
#define PadnamelistREFCNT(pnl) (pnl)->xpadnl_refcnt
#define P_SYSTEM 0x00000200
#define _U_INT64_T 
#define croak_xs_usage Perl_croak_xs_usage
#define GV_AUTOLOAD_ISMETHOD 1
#define RX_MATCH_TAINTED_set(rx_sv,t) ((t) ? RX_MATCH_TAINTED_on(rx_sv) : RX_MATCH_TAINTED_off(rx_sv))
#define _POSIX_SPAWN (-1)
#define PERL_ARGS_ASSERT_RSIGNAL_STATE 
#define __SHRT_WIDTH__ 16
#define __TVOS_9_0 90000
#define __TVOS_9_1 90100
#define __TVOS_9_2 90200
#define SLIST_REMOVE(head,elm,type,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH do { if (SLIST_FIRST((head)) == (elm)) { SLIST_REMOVE_HEAD((head), field); } else { struct type *curelm = SLIST_FIRST((head)); while (SLIST_NEXT(curelm, field) != (elm)) curelm = SLIST_NEXT(curelm, field); SLIST_REMOVE_AFTER(curelm, field); } TRASHIT((elm)->field.sle_next); } while (0) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define EXC_SYSCALL 7
#define LF (u_char) '\n'
#define PERL_ARGS_ASSERT_MG_FREE_TYPE assert(sv)
#define NGX_HASH_LARGE_ASIZE 16384
#define KERN_SUGID_COREDUMP 52
#define PERL_ARGS_ASSERT_REQUIRE_PV assert(pv)
#define PL_utf8_tosimplefold (vTHX->Iutf8_tosimplefold)
#define CMASK 022
#define MPO_CONTEXT_AS_GUARD 0x01
#define pcre2_general_context_copy PCRE2_SUFFIX(pcre2_general_context_copy_)
#define TMP_MAX 308915776
#define NGX_LOG_DEBUG 8
#define __scanflike(fmtarg,firstvararg) __attribute__((__format__ (__scanf__, fmtarg, firstvararg)))
#define PF_UNIX PF_LOCAL
#define cPMOP cPMOPx(PL_op)
#define PL_minus_p (vTHX->Iminus_p)
#define isPRINT_utf8(p,e) isPRINT_utf8_safe(p, e)
#define cMETHOPx_meth(v) cSVOPx_sv(v)
#define __FLT32_MAX_EXP__ 128
#define LATIN_CAPITAL_LETTER_I_WITH_DOT_ABOVE_UTF8 "\xC4\xB0"
#define F_LOG2PHYS_EXT 65
#define SV_COW_REFCNT_MAX nBIT_UMAX(sizeof(U8) * CHARBITS)
#define SA_ONSTACK 0x0001
#define SvPV_flags_mutable(sv,len,flags) (SvPOK_nog(sv) ? ((len = SvCUR(sv)), SvPVX_mutable(sv)) : sv_2pv_flags(sv, &len, (flags|SV_MUTABLE_RETURN)))
#define AvMAX(av) ((XPVAV*) SvANY(av))->xav_max
#define case_201_SBOX32(hash,state,key) 
#define StashHANDLER(stash,meth) gv_handler((stash),CAT2(meth,_amg))
#define MACH_PORT_INDEX(name) ((name) >> 8)
#define warner Perl_warner_nocontext
#define POSIX_MADV_DONTNEED 4
#define VM_MEMORY_SBRK 5
#define PerlProc_kill(i,a) kill((i), (a))
#define TIOCSDRAINWAIT _IOW('t', 87, int)
#define PERL_ARGS_ASSERT_GV_FETCHMETHOD_PV_FLAGS assert(stash); assert(name)
#define OPpLVALUE 0x80
#define VOL_CAP_FMT_DOCUMENT_ID 0x00080000
#define CvNAMED_off(cv) (CvFLAGS(cv) &= ~CVf_NAMED)
#define BOM_UTF8_FIRST_BYTE 0xEF
#define PERL_ARGS_ASSERT_NEWSVAVDEFELEM assert(av)
#define PL_stderrgv (vTHX->Istderrgv)
#define IPPROTO_IPEIP 94
#define MICRO_SIGN_UTF8 "\xC2\xB5"
#define ATTR_DIR_ENTRYCOUNT 0x00000002
#define HAS_SEEKDIR 
#define newRV_inc(sv) newRV(sv)
#define sv_catpvn_mg(dsv,sstr,slen) sv_catpvn_flags(dsv, sstr, slen, SV_GMAGIC|SV_SMAGIC);
#define NGX_HTTP_UPSTREAM_FT_MAX_WAITING 0x00002000
#define dTHX pTHX = PERL_GET_THX
#define I32SIZE 4
#define PERL_ARGS_ASSERT_UTF8_TO_UVUNI assert(s)
#define _UTF8_NO_CONFIDENCE_IN_CURLEN 0x20000
#define PadnameIsSTATE_on(pn) (PadnameFLAGS(pn) |= PADNAMEt_STATE)
#define case_126_SBOX32(hash,state,key) 
#define STAILQ_ENTRY(type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct { struct type *stqe_next; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define PERLDBf_NAMEEVAL 0x100
#define KERN_COREDUMP 51
#define ngx_queue_last(h) (h)->prev
#define _BLKCNT_T 
#define HvRAND_get(hv) (SvOOK(hv) ? HvAUX(hv)->xhv_rand : 0)
#define PL_CCC_non0_non230 (vTHX->ICCC_non0_non230)
#define PCRE2_PRERELEASE 
#define GvIN_PAD_off(gv) NOOP
#define VM_PURGABLE_VOLATILE 1
#define NGX_MAX_PATH_LEVEL 3
#define I16_MIN INT16_MIN
#define PERL_ARGS_ASSERT_YYERROR_PV assert(s)
#define SBOX32_STATE_WORDS (1 + (SBOX32_MAX_LEN * 256))
#define SIOCSIFFLAGS _IOW('i', 16, struct ifreq)
#define GvLINE(gv) (GvGP(gv)->gp_line)
#define PL_vtbl_fm PL_magic_vtables[want_vtbl_fm]
#define PERL_ARGS_ASSERT_NEWSTATEOP 
#define MACH_VOUCHER_ATTR_KEY_ALL ((mach_voucher_attr_key_t)~0)
#define STATUS_ALL_SUCCESS (PL_statusvalue = 0, PL_statusvalue_posix = 0)
#define Fflush(fp) fflush(fp)
#define PERL_ARGS_ASSERT_GV_OVERRIDE assert(name)
#define PERL_ARGS_ASSERT_DEBOP assert(o)
#define PERL_SET_THX(t) PERL_SET_CONTEXT(t)
#define IPPROTO_DONE 257
#define RXp_ENGINE(prog) ((prog)->engine)
#define __MAC_10_1 1010
#define PCRE2_CONFIG_UNICODE_VERSION 10
#define LONG_DOUBLE_STYLE_IEEE_EXTENDED 
#define SvPV_force(sv,len) SvPV_force_flags(sv, len, SV_GMAGIC)
#define SIOCGLOWAT _IOR('s', 3, int)
#define PERL_ARGS_ASSERT_GV_INIT 
#define GETHOSTENT_R_PROTO 0
#define CPU_SUBTYPE_PENT CPU_SUBTYPE_INTEL(5, 0)
#define HAS_TOWLOWER 
#define IPCTL_RTEXPIRE 5
#define av_tindex_skip_len_mg(av) av_top_index_skip_len_mg(av)
#define RX_MATCH_COPIED_off(rx_sv) (RX_EXTFLAGS(rx_sv) &= ~RXf_COPY_DONE)
#define PP(s) OP * Perl_ ##s(pTHX)
#define SvSetSV_and(dst,src,finally) STMT_START { if (LIKELY((dst) != (src))) { sv_setsv(dst, src); finally; } } STMT_END
#define case_215_SBOX32(hash,state,key) 
#define HAS_POSIX_2008_LOCALE 
#define RXf_PMf_STD_PMMOD_SHIFT 0
#define _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS 6
#define BhkENTRY(hk,which) ((BhkFLAGS(hk) & BHKf_ ## which) ? ((hk)->which) : NULL)
#define isLOWER_L1(c) _generic_isCC(c, _CC_LOWER)
#define PerlSIO_ungetc(c,f) ungetc(c,f)
#define CASTNEGFLOAT 
#define CPU_SUBTYPE_PENTIUM_3 CPU_SUBTYPE_INTEL(8, 0)
#define NGX_CONF_NOARGS 0x00000001
#define MACH_MSG_TYPE_PORT_ANY_SEND(x) (((x) >= MACH_MSG_TYPE_MOVE_SEND) && ((x) <= MACH_MSG_TYPE_MAKE_SEND_ONCE))
#define newSVpvn_utf8(s,len,u) newSVpvn_flags((s), (len), (u) ? SVf_UTF8 : 0)
#define HAS_ISNAN 
#define isLOWER_LC(c) _generic_LC(c, _CC_LOWER, islower)
#define DEBUG_m_FLAG 0x00000080
#define __AVAILABILITY_VERSIONS__ 
#define HvENAMELEN(hv) HvENAMELEN_get(hv)
#define FP_CHOP 3
#define PERL_ARGS_ASSERT_FBM_COMPILE assert(sv)
#define PL_diehook (vTHX->Idiehook)
#define PERL_ARGS_ASSERT_FIND_LEXICAL_CV 
#define PERL_ARGS_ASSERT__IS_UNI_PERL_IDSTART 
#define _PC_CASE_PRESERVING 12
#define case_47_SBOX32(hash,state,key) 
#define IV_IS_QUAD 
#define __DARWIN_WEOF ((__darwin_wint_t)-1)
#define _SYS__TYPES_H_ 
#define MACH_SEND_MSG_TOO_SMALL 0x10000008
#define parse_block(a) Perl_parse_block(aTHX_ a)
#define _NGX_FILE_H_INCLUDED_ 
#define PERL_VERSION_LT(j,n,p) (PERL_DECIMAL_VERSION_ < PERL_JNP_TO_DECIMAL_( (j), (n), (((p) == '*') ? 0 : p)))
#define reentrant_free() Perl_reentrant_free(aTHX)
#define SvCUR(sv) ((XPV*) SvANY(sv))->xpv_cur
#define OPpLVREF_HV 0x20
#define KEYWORD_PLUGIN_EXPR 2
#define NGX_HAVE_TIMER_EVENT 1
#define __UINT16_C(c) c
#define OA_LOOPEXOP (13 << OCSHIFT)
#define IP_TRAFFIC_MGT_BACKGROUND 65
#define TASK_EVENTS_INFO 2
#define sv_2pvbyte(sv,lp) sv_2pvbyte_flags(sv, lp, SV_GMAGIC)
#define REENTRANT_PROTO_I_CSBIR 17
#define isXDIGIT_utf8(p,e) isXDIGIT_utf8_safe(p, e)
#define GVf_ASSUMECV 0x04
#define HV_FETCH_JUST_SV 0x20
#define case_164_SBOX32(hash,state,key) 
#define isALNUMC_L1(c) isALPHANUMERIC_L1(c)
#define PerlWarnIsSet_(a,x) ((a)[Perl_Warn_Off_(x)] & Perl_Warn_Bit_(x))
#define VOL_CAP_FMT_SYMBOLICLINKS 0x00000002
#define PCRE2_NEVER_BACKSLASH_C 0x00100000u
#define NI_NAMEREQD 0x00000004
#define IPPROTO_IPCV 71
#define isALNUMC_LC(c) isALPHANUMERIC_LC(c)
#define HTONLL(x) (x) = htonll((__uint64_t)x)
#define RXapif_ONE 0x0100
#define KIPC_MBSTAT 8
#define DEBUG_C_TEST_ UNLIKELY(PL_debug & DEBUG_C_FLAG)
#define mach_vm_round_page(x) (((mach_vm_offset_t)(x) + vm_page_mask) & ~((signed)vm_page_mask))
#define SCNdLEAST16 SCNd16
#define _SIGSET_T 
#define UNICODE_DISALLOW_SURROGATE 0x0010
#define MAXTHREADNAMESIZE 64
#define MACH_VOUCHER_ATTR_SET_VALUE_HANDLE ((mach_voucher_attr_recipe_command_t)3)
#define PERL_ARGS_ASSERT_OP_REFCNT_LOCK 
#define isLOWER_LC_utf8_safe(p,e) _generic_LC_invlist_utf8_safe(isLOWER_LC, _CC_LOWER, p, e)
#define AU_DEFAUDITID (uid_t)(-1)
#define O_WRONLY 0x0001
#define CALLREG_NAMED_BUFF_EXISTS(rx,key,flags) RX_ENGINE(rx)->named_buff(aTHX_ (rx), (key), NULL, ((flags) | RXapif_EXISTS))
#define memGE(s1,s2,l) (memcmp(s1,s2,l) >= 0)
#define KERN_SECURELVL 9
#define __INTMAX_WIDTH__ 64
#define SEEK_SET 0
#define O_EXCL 0x00000800
#define PerlSIO_rewind(f) rewind(f)
#define PCRE2_CONFIG_RECURSIONLIMIT 7
#define __FLT_MAX_10_EXP__ 38
#define _MEM_WRAP_NEEDS_RUNTIME_CHECK(n,t) ( sizeof(MEM_SIZE) < sizeof(n) || sizeof(t) > ((MEM_SIZE)1 << 8*(sizeof(MEM_SIZE) - sizeof(n))))
#define PERL_ARGS_ASSERT_PARSER_FREE assert(parser)
#define PCRE2_INFO_DEPTHLIMIT 21
#define PERL_ARGS_ASSERT_PEEP 
#define case_243_SBOX32(hash,state,key) 
#define PERL_MEMORY_DEBUG_HEADER_SIZE 0
#define CPUFAMILY_INTEL_BROADWELL 0x582ed09c
#define _SC_THREADS 96
#define save_I32(a) Perl_save_I32(aTHX_ a)
#define _STRUCT_X86_FLOAT_STATE32 struct __darwin_i386_float_state
#define GCC_DIAG_IGNORE_STMT(x) GCC_DIAG_IGNORE(x) NOOP
#define SCNdLEAST32 SCNd32
#define SvDESTROYABLE(sv) PL_destroyhook(aTHX_ sv)
#define SCM_TIMESTAMP_MONOTONIC 0x04
#define NGX_HTTP_SERVICE_UNAVAILABLE 503
#define is_THREE_CHAR_FOLD_latin1_safe(s,e) ( ( ( ( ( ((e) - (s)) >= 3 ) && ( ( ((const U8*)s)[0] & 0xDF ) == 'F' ) ) && ( ( ((const U8*)s)[1] & 0xDF ) == 'F' ) ) && ( ( ( ((const U8*)s)[2] & 0xDF ) == 'I' ) || ( ( ((const U8*)s)[2] & 0xDF ) == 'L' ) ) ) ? 3 : 0 )
#define PerlSock_sethostent(f) sethostent(f)
#define CPUFAMILY_INTEL_PENRYN 0x78ea4fbc
#define MACH_MSG_TYPE_MAKE_SEND_ONCE 21
#define case_107_SBOX32(hash,state,key) 
#define IN6ADDR_LOOPBACK_INIT {{{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01 }}}
#define sv_2iv_flags(a,b) Perl_sv_2iv_flags(aTHX_ a,b)
#define CXp_FOR_GV 0x40
#define case_150_SBOX32(hash,state,key) 
#define KERN_INVALID_RIGHT 17
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_2(x) 
#define PERL_ARGS_ASSERT_AV_ARYLEN_P assert(av)
#define UNICODE_GREEK_CAPITAL_LETTER_SIGMA 0x03A3
#define PL_vtbl_hintselem PL_magic_vtables[want_vtbl_hintselem]
#define UTF8_IS_SUPER(s,e) (( ((e) > (s) + 3) && (*(U8*) (s)) >= 0xF4 && (UNLIKELY( ((*(U8*) (s)) > 0xF4) || (*((U8*) (s) + 1) >= 0x90))) && LIKELY((s) + UTF8SKIP(s) <= (e))) ? is_utf8_char_helper(s, s + UTF8SKIP(s), 0) : 0)
#define NFS_MAX_FH_SIZE NFSV4_MAX_FH_SIZE
#define sv_derived_from_pv(a,b,c) Perl_sv_derived_from_pv(aTHX_ a,b,c)
#define MACH_VOUCHER_ATTR_VALUE_FLAGS_NONE ((mach_voucher_attr_value_flags_t)0)
#define MAC_OS_X_VERSION_10_14_1 101401
#define MAC_OS_X_VERSION_10_14_4 101404
#define MAC_OS_X_VERSION_10_14_6 101406
#define P_NOSWAP 0
#define STATUS_UNIX_SET(n) STMT_START { PL_statusvalue = (n); if (PL_statusvalue != -1) PL_statusvalue &= 0xFFFF; } STMT_END
#define NATIVE_TO_UNI(ch) ((UV) ((ch) | 0))
#define UNICODE_WARN_PERL_EXTENDED 0x0008
#define _CC_OCTDIGIT 24
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_3(x) 
#define PerlLIO_mktemp(file) mktemp((file))
#define MAP_RESILIENT_MEDIA 0x4000
#define IPPROTO_IDP 22
#define PERL_ARGS_ASSERT_MAGIC_GETDEFELEM assert(sv); assert(mg)
#define PCRE2_EXTRA_MATCH_LINE 0x00000008u
#define EVFILT_PROC (-5)
#define ReREFCNT_inc(re) ({ REGEXP *const _rerefcnt_inc = (re); assert(SvTYPE(_rerefcnt_inc) == SVt_REGEXP); SvREFCNT_inc(_rerefcnt_inc); _rerefcnt_inc; })
#define PerlMemParse_malloc(size) malloc((size))
#define savestack_grow_cnt(a) Perl_savestack_grow_cnt(aTHX_ a)
#define memGT(s1,s2,l) (memcmp(s1,s2,l) > 0)
#define USE_ENVIRON_ARRAY 
#define PerlIO_fill(a) Perl_PerlIO_fill(aTHX_ a)
#define FLT_MIN_EXP __FLT_MIN_EXP__
#define cx_popblock(a) Perl_cx_popblock(aTHX_ a)
#define GvENAME(gv) GvNAME(GvEGV(gv) ? GvEGV(gv) : gv)
#define PL_stashcache (vTHX->Istashcache)
#define WARN_IO 5
#define SCNdLEAST64 SCNd64
#define UTF8_WARN_ILLEGAL_C9_INTERCHANGE (UTF8_WARN_SUPER|UTF8_WARN_SURROGATE)
#define GvMULTI(gv) (GvFLAGS(gv) & GVf_MULTI)
#define PERL_ARGS_ASSERT_WARNER_NOCONTEXT assert(pat)
#define IPPROTO_IPIP IPPROTO_IPV4
#define is_PROBLEMATIC_LOCALE_FOLDEDS_START_cp(cp) ( cp <= 0xFF || ( 0xFF < cp && ( inRANGE_helper_(UV, cp, 0x130, 0x131) || ( 0x131 < cp && ( 0x149 == cp || ( 0x149 < cp && ( 0x178 == cp || ( 0x178 < cp && ( 0x17F == cp || ( 0x17F < cp && ( 0x1F0 == cp || ( 0x1F0 < cp && ( 0x2BC == cp || ( 0x2BC < cp && ( 0x39C == cp || ( 0x39C < cp && ( 0x3BC == cp || ( 0x3BC < cp && ( inRANGE_helper_(UV, cp, 0x1E96, 0x1E9A) || ( 0x1E9A < cp && ( 0x1E9E == cp || ( 0x1E9E < cp && ( inRANGE_helper_(UV, cp, 0x212A, 0x212B) || inRANGE_helper_(UV, cp, 0xFB00, 0xFB06) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) )
#define MPG_STRICT 0x01
#define newSVhek(a) Perl_newSVhek(aTHX_ a)
#define gv_stashpv(a,b) Perl_gv_stashpv(aTHX_ a,b)
#define pWARN_STD NULL
#define PerlDir_chdir(name) chdir((name))
#define dPOPnv NV value = POPn
#define strGE(s1,s2) (strcmp(s1,s2) >= 0)
#define _T_PTRDIFF 
#define PL_statusvalue_posix (vTHX->Istatusvalue_posix)
#define IN_LOCALE (IN_PERL_COMPILETIME ? IN_LOCALE_COMPILETIME : IN_LOCALE_RUNTIME)
#define UTF8_GOT_LONG UTF8_ALLOW_LONG
#define GREEK_CAPITAL_LETTER_MU 0x039C
#define NGX_HTTP_BAD_REQUEST 400
#define NGX_EEXIST EEXIST
#define IPV6_MIN_MEMBERSHIPS 31
#define CAN_COW_FLAGS (SVp_POK|SVf_POK)
#define CLD_NOOP 0
#define PERL_ARGS_ASSERT_PV_UNI_DISPLAY assert(dsv); assert(spv)
#define newXS_flags(a,b,c,d,e) Perl_newXS_flags(aTHX_ a,b,c,d,e)
#define L_ctermid 1024
#define IPPROTO_IGP 85
#define toTITLE_A(c) toTITLE(c)
#define EAI_NODATA 7
#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
#define MNT_SNAPSHOT 0x40000000
#define FSCALE (1<<FSHIFT)
#define CTLTYPE 0xf
#define IoTYPE_IMPLICIT 'I'
#define __FLT_HAS_DENORM__ 1
#define KEV_INET_ARPCOLLISION 7
#define _SS_PAD2SIZE (_SS_MAXSIZE - sizeof(__uint8_t) - sizeof(sa_family_t) - _SS_PAD1SIZE - _SS_ALIGNSIZE)
#define __compiler_barrier() __asm__ __volatile__("" ::: "memory")
#define CvAUTOLOAD_on(cv) (CvFLAGS(cv) |= CVf_AUTOLOAD)
#define OS_ASSUME_NONNULL_END 
#define NGX_LOG_DEBUG_STREAM 0x400
#define READDIR64_R_PROTO 0
#define NGX_SUPPRESS_WARN 1
#define ngx_queue_empty(h) (h == (h)->prev)
#define ATTR_CMN_NAMEDATTRCOUNT 0x00080000
#define IOPOL_TYPE_VFS_STATFS_NO_DATA_VOLUME 4
#define SvAMAGIC_on Perl_SvAMAGIC_on
#define case_148_SBOX32(hash,state,key) 
#define _UUID_STRING_T 
#define isXDIGIT_uvchr(c) _generic_uvchr(_CC_XDIGIT, is_XDIGIT_cp_high, c)
#define P_DEPENDENCY_CAPABLE 0x00100000
#define PERLSI_MAGIC 2
#define EVFILT_USER (-10)
#define EVAL_INREQUIRE 8
#define SCNxMAX __SCN_MAX_LENGTH_MODIFIER__ "x"
#define GvIMPORTED_HV_off(gv) (GvFLAGS(gv) &= ~GVf_IMPORTED_HV)
#define CPU_SUBTYPE_PENTII_M5 CPU_SUBTYPE_INTEL(6, 5)
#define UF_OPAQUE 0x00000008
#define HAS_CSH 
#define OCSHIFT 8
#define PERL_ARGS_ASSERT_PERLIO_SET_PTRCNT 
#define SvUOK_nogthink(sv) ((SvFLAGS(sv) & (SVf_IOK|SVf_IVisUV|SVf_THINKFIRST|SVs_GMG)) == (SVf_IOK|SVf_IVisUV))
#define HAS_SETNETENT 
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_3(x) x
#define PERL_ARGS_ASSERT_DO_AEXEC assert(mark); assert(sp)
#define AF_ROUTE 17
#define __darwin_obsz(object) __builtin_object_size (object, _USE_FORTIFY_LEVEL > 1 ? 1 : 0)
#define CLK_TCK __DARWIN_CLK_TCK
#define PRIO_DARWIN_NONUI 0x1001
#define SUPERPAGE_SIZE_2MB 2
#define _NETINET_IN_H_ 
#define __WATCHOS_2_0 20000
#define __WATCHOS_2_1 20100
#define __WATCHOS_2_2 20200
#define VM_REGION_SUBMAP_INFO_V2_COUNT_64 ((mach_msg_type_number_t) (VM_REGION_SUBMAP_INFO_V2_SIZE / sizeof (natural_t)))
#define _NGX_HTTP_SCRIPT_H_INCLUDED_ 
#define _PERL_HASH_STATE_BYTES ( __PERL_HASH_STATE_BYTES + ( ( 1 + ( 256 * SBOX32_MAX_LEN ) ) * sizeof(U32) ) )
#define sv_nosharing(a) Perl_sv_nosharing(aTHX_ a)
#define isALPHA_FOLD_NE(c1,c2) (! isALPHA_FOLD_EQ((c1), (c2)))
#define sigaddset(set,signo) (*(set) |= __sigbits(signo), 0)
#define _POSIX_HOST_NAME_MAX 255
#define MACH_PORT_MAKE(index,gen) (((index) << 8) | (gen) >> 24)
#define WARN_EXPERIMENTAL__CONST_ATTR 59
#define PerlSIO_set_ptr(f,p) PerlIOProc_abort()
#define PERL_ARGS_ASSERT_INIT_NAMED_CV assert(cv); assert(nameop)
#define O_TRUNC 0x00000400
#define SM_EMPTY 3
#define PERL_ARGS_ASSERT_SV_MAGICEXT assert(sv)
#define PadlistNAMESMAX(pl) PadnamelistMAX(PadlistNAMES(pl))
#define OA_LIST 2
#define GvIMPORTED(gv) (GvFLAGS(gv) & GVf_IMPORTED)
#define EXC_SOFTWARE 5
#define O_FSYNC O_SYNC
#define PF_PIP pseudo_AF_PIP
#define case_124_SBOX32(hash,state,key) 
#define MSG_DONTROUTE 0x4
#define PERL_ARGS_ASSERT_MG_FIND 
#define NGX_CONF_ARGS_NUMBER 0x000000ff
#define _I386_SIGNAL_H_ 1
#define toUPPER(c) (isLOWER(c) ? (U8)((c) - ('a' - 'A')) : (c))
#define SvLENx(sv) SvLEN(sv)
#define XOPd_xop_desc PL_op_desc[OP_CUSTOM]
#define IPPROTO_IPPC 67
#define HAS_LRINTL 
#define PERL_ARGS_ASSERT_NEWSVOP assert(sv)
#define PERL_ARGS_ASSERT_PARSE_UNICODE_OPTS assert(popt)
#define IPPROTO_OSPFIGP 89
#define _NGX_STRING_H_INCLUDED_ 
#define __DARWIN_1050ALIAS_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_NON_CANCELABLE __DARWIN_SUF_UNIX03)
#define PERL_PRIfldbl "Lf"
#define GvMULTI_off(gv) (GvFLAGS(gv) &= ~GVf_MULTI)
#define MEMORY_OBJECT_COPY_INVALID 5
#define HAS_MODFL_PROTO 
#define KERN_UNRAGE_PROC 3
#define PL_setlocale_bufsize (vTHX->Isetlocale_bufsize)
#define SvVALID(_svvalid) ( SvPOKp(_svvalid) && SvSMAGICAL(_svvalid) && SvMAGIC(_svvalid) && (SvMAGIC(_svvalid)->mg_type == PERL_MAGIC_bm || mg_find(_svvalid, PERL_MAGIC_bm)) )
#define AF_CNT 21
#define PERL_ARGS_ASSERT_MULTIDEREF_STRINGIFY assert(o)
#define PCRE2_CONVERT_GLOB_NO_WILD_SEPARATOR 0x00000030u
#define warn_sv(a) Perl_warn_sv(aTHX_ a)
#define __KAME__ 
#define is_utf8_invariant_string_loc Perl_is_utf8_invariant_string_loc
#define VM_LEDGER_TAG_NETWORK 0x00000002
#define case_119_SBOX32(hash,state,key) 
#define PERL_ARGS_ASSERT_SAVE_AELEM_FLAGS assert(av); assert(sptr)
#define FP_287 2
#define cUNOP cUNOPx(PL_op)
#define __DARWIN_1050ALIAS_I(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_64_BIT_INO_T __DARWIN_SUF_UNIX03)
#define MAP_MEM_NAMED_CREATE 0x020000
#define IPPROTO_INP 32
#define PL_scopestack_max (vTHX->Iscopestack_max)
#define MALLOC_PTR_IN_USE_RANGE_TYPE 1
#define newANONATTRSUB(a,b,c,d) Perl_newANONATTRSUB(aTHX_ a,b,c,d)
#define CPUFAMILY_INTEL_KABYLAKE 0x0f817246
#define HAS_MADVISE 
#define PERL_IMPLICIT_CONTEXT 
#define LONG_BIT 64
#define strnEQ(s1,s2,l) (strncmp(s1,s2,l) == 0)
#define MACH_PORT_STATUS_FLAG_IMP_DONATION 0x08
#define _POSIX_NGROUPS_MAX 8
#define CXp_TRYBLOCK CXp_EVALBLOCK
#define PerlIO_seek(a,b,c) Perl_PerlIO_seek(aTHX_ a,b,c)
#define HAS_GETHOSTNAME 
#define case_191_SBOX32(hash,state,key) 
#define MACH_VOUCHER_IMPORTANCE_ATTR_ADD_EXTERNAL 1
#define cSVOPx_svp(v) (cSVOPx(v)->op_sv ? &cSVOPx(v)->op_sv : &PAD_SVl((v)->op_targ))
#define I_SYS_IOCTL 
#define DEBUG_l_TEST (0)
#define PCRE2_CONFIG_COMPILED_WIDTHS 14
#define ngx_inline inline
#define P_TRACED 0x00000800
#define _PC_2_SYMLINKS 15
#define EWOULDBLOCK EAGAIN
#define __HAVE_SPECULATION_SAFE_VALUE 1
#define NOTE_VM_PRESSURE_SUDDEN_TERMINATE 0x20000000
#define __null_unspecified 
#define TIOCOUTQ _IOR('t', 115, int)
#define Timeval struct timeval
#define GETGRNAM_R_HAS_PTR 
#define av_clear(a) Perl_av_clear(aTHX_ a)
#define CXINC (cxstack_ix < cxstack_max ? ++cxstack_ix : (cxstack_ix = cxinc()))
#define PERL_ARGS_ASSERT_VVERIFY assert(vs)
#define _SC_CLK_TCK 3
#define _CC_MNEMONIC_CNTRL 25
#define case_81_SBOX32(hash,state,key) 
#define HSm_XSVERLEN 0x0000FF00
#define HAS_MKSTEMPS 
#define DEBUG_q_FLAG 0x00800000
#define VM_FLAGS_RESILIENT_CODESIGN 0x0020
#define UTF8_IS_SURROGATE(s,e) is_SURROGATE_utf8_safe(s, e)
#define PERL_ARGS_ASSERT_SV_NOLOCKING 
#define DEBUG_r_FLAG 0x00000200
#define PerlSIO_stdout stdout
#define MAP_NORESERVE 0x0040
#define GLOB_DOOFFS 0x0002
#define SIOCIFCREATE2 _IOWR('i', 122, struct ifreq)
#define MACH_MSG_TYPE_PORT_SEND_ONCE MACH_MSG_TYPE_MOVE_SEND_ONCE
#define ENOATTR 93
#define HOST_SYSPOLICYD_PORT (22 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define reentrant_size() Perl_reentrant_size(aTHX)
#define PL_toptarget (vTHX->Itoptarget)
#define HINT_STRICT_VARS 0x00000400
#define is_lvalue_sub() Perl_is_lvalue_sub(aTHX)
#define NGX_VNODE_EVENT EVFILT_VNODE
#define ARCHNAME "darwin-thread-multi-2level"
#define IN6_IS_ADDR_MC_SITELOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && (__IPV6_ADDR_MC_SCOPE(a) == __IPV6_ADDR_SCOPE_SITELOCAL))
#define IPPROTO_IPV4 4
#define IPPROTO_IPV6 41
#define F_CHECK_LV 98
#define parse_termexpr(a) Perl_parse_termexpr(aTHX_ a)
#define TYPE_CHARS(T) (TYPE_DIGITS(T) + 2)
#define PERL_ARGS_ASSERT_WRAP_KEYWORD_PLUGIN assert(new_plugin); assert(old_plugin_p)
#define MACH_VOUCHER_TRAP_STACK_LIMIT 256
#define __TVOS_AVAILABLE(_vers) 
#define PTHREAD_CANCEL_ENABLE 0x01
#define utf8_distance(a,b) Perl_utf8_distance(aTHX_ a,b)
#define MS_SYNC 0x0010
#define GETHOSTBYADDR_R_PROTO 0
#define PF_PPP AF_PPP
#define isSPACE(c) isSPACE_A(c)
#define SIG_NAME "ZERO", "HUP", "INT", "QUIT", "ILL", "TRAP", "ABRT", "EMT", "FPE", "KILL", "BUS", "SEGV", "SYS", "PIPE", "ALRM", "TERM", "URG", "STOP", "TSTP", "CONT", "CHLD", "TTIN", "TTOU", "IO", "XCPU", "XFSZ", "VTALRM", "PROF", "WINCH", "INFO", "USR1", "USR2", "IOT", 0
#define _PC_REC_MAX_XFER_SIZE 21
#define OA_LOOP (9 << OCSHIFT)
#define HAS_FPATHCONF 
#define _MACH_STD_TYPES_H_ 
#define NGX_HTTP_UPSTREAM_FT_NON_IDEMPOTENT 0x00004000
#define SA_64REGSET 0x0200
#define PERL_ARGS_ASSERT_SV_RVUNWEAKEN assert(sv)
#define sv_get_backrefs Perl_sv_get_backrefs
#define RXapif_FIRSTKEY 0x0040
#define RX_COMPFLAGS(rx_sv) RXp_COMPFLAGS(ReANY(rx_sv))
#define PERL_SCRIPT_MODE "r"
#define PERL_ARGS_ASSERT_RE_DUP_GUTS assert(sstr); assert(dstr); assert(param)
#define PERL_ARGS_ASSERT_CK_LFUN assert(o)
#define __MMX_WITH_SSE__ 1
#define PERL_ARGS_ASSERT_HE_DUP assert(param)
#define KERN_KDSETREG 8
#define __WATCHOS_UNAVAILABLE 
#define MNT_WAIT 1
#define SSize_t ssize_t
#define is_strict_utf8_string_loc(s,len,ep) is_strict_utf8_string_loclen(s, len, ep, 0)
#define __ASSERT_(statement) 
#define SCNdFAST8 SCNd8
#define Perl_cos cos
#define _SC_V6_ILP32_OFF32 103
#define _POSIX_REGEXP 200112L
#define UINT_LEAST8_MAX UINT8_MAX
#define VFS_CTL_SERVERINFO 0x00010009
#define __IPHONE_3_0 30000
#define PAD_FAKELEX_MULTI 2
#define KEYWORD_PLUGIN_MUTEX_TERM MUTEX_DESTROY(&PL_keyword_plugin_mutex)
#define CTL_HW 6
#define pWARN_NONE (STRLEN *) &PL_WARN_NONE
#define case_141_SBOX32(hash,state,key) 
#define HAS_LROUND 
#define TIOCGETA _IOR('t', 19, struct termios)
#define _POSIX_RE_DUP_MAX _POSIX2_RE_DUP_MAX
#define SvRV_const(sv) (0 + (sv)->sv_u.svu_rv)
#define PERL_MAGIC_qr 'r'
#define NGX_HTTP_V2_BUFFERED 0x02
#define WARN_CLOSURE 1
#define MACH_PORT_SRIGHTS_PRESENT 1
#define Ctl(ch) ((ch) & 037)
#define INFINITY HUGE_VALF
#define THREAD_INSPECT_PORT 2
#define SvIOKp_on(sv) (assert_not_glob(sv) SvFLAGS(sv) |= SVp_IOK)
#define FF_FETCH 4
#define _POSIX_MEMORY_PROTECTION 200112L
#define PERL_ARGS_ASSERT_SV_EQ_FLAGS 
#define CAN_COW_MASK (SVf_POK|SVf_ROK|SVp_POK|SVf_FAKE| SVf_OOK|SVf_BREAK|SVf_READONLY|SVf_PROTECT)
#define PLOCK 36
#define PERL_ARGS_ASSERT_SV_2NUM assert(sv)
#define PERL_ARGS_ASSERT_BYTES_CMP_UTF8 assert(b); assert(u)
#define REENTRANT_PROTO_I_CSBWRE 19
#define COP_SEQ_RANGE_LOW(pn) (pn)->xpadn_low
#define isWORDCHAR_LC_utf8(p,e) isWORDCHAR_LC_utf8_safe(p, e)
#define PERL_ARGS_ASSERT_SETFD_CLOEXEC_OR_INHEXEC_BY_SYSFDNESS 
#define PERL_ARGS_ASSERT_GV_AUTOLOAD_PVN assert(name)
#define MEMORY_OBJECT_DEFAULT_NULL ((memory_object_default_t) 0)
#define _SC_RAW_SOCKETS 119
#define isALPHA(c) isALPHA_A(c)
#define NGX_HTTP_GZIP_PROXIED_OFF 0x0002
#define ngx_de_mtime(dir) (dir)->info.st_mtime
#define VM_FLAGS_ANYWHERE 0x0001
#define strnNE(s1,s2,l) (strncmp(s1,s2,l) != 0)
#define PadnameLVALUE_on(pn) (PadnameFLAGS(pn) |= PADNAMEt_LVALUE)
#define CTLFLAG_RD 0x80000000
#define PF_PUP AF_PUP
#define USE_SEMCTL_SEMUN 
#define SAVEt_SPTR 42
#define PERL_ARGS_ASSERT_SV_PVBYTEN_FORCE assert(sv)
#define NGX_HTTP_NOT_ALLOWED 405
#define CvSPECIAL_off(cv) (CvUNIQUE_off(cv),SvFAKE_off(cv))
#define PL_laststatval (vTHX->Ilaststatval)
#define CTLFLAG_RW (CTLFLAG_RD|CTLFLAG_WR)
#define SvPADSTALE_off(sv) Perl_SvPADSTALE_off(MUTABLE_SV(sv))
#define SOL_SOCKET 0xffff
#define CPU_SUBTYPE_PENTPRO CPU_SUBTYPE_INTEL(6, 1)
#define F_RDAHEAD 45
#define _SC_THREAD_SPORADIC_SERVER 92
#define PERL_ARGS_ASSERT_HV_UNDEF_FLAGS 
#define __SOFF 0x1000
#define WARN_MISSING 64
#define MACH_RCV_SCATTER_SMALL 0x1000400e
#define __FLT32_MAX__ 3.40282346638528859811704183484516925e+38F32
#define FOLDEQ_UTF8_NOMIX_ASCII (1 << 0)
#define PCRE2_ERROR_UNRECOGNIZED_AFTER_QUERY_P 141
#define PERL_ARGS_ASSERT_DO_VECGET assert(sv)
#define JE_OLD_STACK_HWM_restore(je) NOOP
#define newUNOP_AUX(a,b,c,d) Perl_newUNOP_AUX(aTHX_ a,b,c,d)
#define cr_gid cr_groups[0]
#define case_55_SBOX32(hash,state,key) 
#define HAS_SETITIMER 
#define _POSIX_TIMERS (-1)
#define MACH_SEND_NO_GRANT_DEST 0x10000016
#define blk_u16 cx_u.cx_blk.blku_u16
#define foldEQ_locale Perl_foldEQ_locale
#define PTHREAD_RECURSIVE_MUTEX_INITIALIZER {_PTHREAD_RECURSIVE_MUTEX_SIG_init, {0}}
#define isASCII_uni(c) isASCII_uvchr(c)
#define IN_CLASSB_HOST 0x0000ffff
#define PUSHSTACK_INIT_HWM(si) NOOP
#define _NGX_PROCESS_H_INCLUDED_ 
#define S_BLKSIZE 512
#define host_get_fairplayd_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_FAIRPLAYD_PORT, (port)))
#define av_pop(a) Perl_av_pop(aTHX_ a)
#define _ARPA_INET_H_ 
#define case_254_SBOX32(hash,state,key) 
#define OA_TARGLEX 16
#define MEXTEND(p,n) STMT_START { EXTEND_HWM_SET(p, n); if (UNLIKELY(_EXTEND_NEEDS_GROW(p,n))) { const SSize_t markoff = mark - PL_stack_base; sp = stack_grow(sp,p,_EXTEND_SAFE_N(n)); mark = PL_stack_base + markoff; PERL_UNUSED_VAR(sp); } } STMT_END
#define CPU_SUBTYPE_ARM64_PTR_AUTH_MASK 0x0f000000
#define NGX_HTTP_PATCH 0x00004000
#define ngx_tm_hour tm_hour
#define SvRVx(sv) SvRV(sv)
#define __strfmonlike(fmtarg,firstvararg) __attribute__((__format__ (__strfmon__, fmtarg, firstvararg)))
#define PL_defoutgv (vTHX->Idefoutgv)
#define I_V(what) (cast_iv((NV)(what)))
#define PERL_ARGS_ASSERT_MAGIC_SET assert(sv); assert(mg)
#define TIOCM_DSR 0400
#define OPpTRANS_USE_SVOP 0x02
#define WARN_EXPERIMENTAL__POSTDEREF 55
#define INADDR_PFSYNC_GROUP (u_int32_t)0xe00000f0
#define PERL_ARGS_ASSERT_NEWFOROP assert(expr)
#define _NGX_REGEX_H_INCLUDED_ 
#define host_set_automountd_port(host,port) (host_set_special_port((host), HOST_AUTOMOUNTD_PORT, (port)))
#define OPpTRANS_TO_UTF OPpTRANS_CAN_FORCE_UTF8
#define I_NETDB 
#define _CC_PUNCT 5
#define NGX_MODULE_SIGNATURE_3 "0"
#define EXC_I386_EXTERR 5
#define O_ALERT 0x20000000
#define PL_dumpindent (vTHX->Idumpindent)
#define sv_dup(a,b) Perl_sv_dup(aTHX_ a,b)
#define PERL_ARGS_ASSERT_IS_UTF8_VALID_PARTIAL_CHAR_FLAGS assert(s); assert(e)
#define RETSETTARG STMT_START { SETTARG; RETURN; } STMT_END
#define ngx_buf_special(b) (((b)->flush || (b)->last_buf || (b)->sync) && !ngx_buf_in_memory(b) && !(b)->in_file)
#define HvNAMELEN(hv) HvNAMELEN_get(hv)
#define TIOCM_DTR 0002
#define memCHRs(s1,c) ((const char *) memchr("" s1 "" , c, sizeof(s1)-1))
#define XPUSHundef STMT_START { SvOK_off(TARG); XPUSHs(TARG); } STMT_END
#define IPV6PORT_RESERVED 1024
#define SM_PRIVATE_ALIASED 6
#define EXC_SOFT_SIGNAL 0x10003
#define CTLFLAG_WR 0x40000000
#define VM_REGION_SUBMAP_INFO_COUNT ((mach_msg_type_number_t) (sizeof(vm_region_submap_info_data_t) / sizeof(natural_t)))
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_4(x) 
#define HeKWASUTF8(he) HEK_WASUTF8(HeKEY_hek(he))
#define HAS_KILLPG 
#define CvNAME_HEK_set(cv,hek) ( CvNAME_HEK((CV *)(cv)) ? unshare_hek(SvANY((CV *)(cv))->xcv_gv_u.xcv_hek) : (void)0, ((XPVCV*)MUTABLE_PTR(SvANY(cv)))->xcv_gv_u.xcv_hek = (hek), CvNAMED_on(cv) )
#define GvXPVGV(gv) ((XPVGV*)SvANY(gv))
#define sigdelset(set,signo) (*(set) &= ~__sigbits(signo), 0)
#define ARCADE_REG_NULL ((arcade_register_t) 0)
#define ENAMETOOLONG 63
#define PL_xsubfilename (vTHX->Ixsubfilename)
#define gv_fetchmeth_autoload(stash,name,len,level) gv_fetchmeth_pvn_autoload(stash, name, len, level, 0)
#define gv_name_set(a,b,c,d) Perl_gv_name_set(aTHX_ a,b,c,d)
#define _NETINET6_IN6_H_ 
#define DIE return Perl_die
#define PadnamelistREFCNT_dec(pnl) Perl_padnamelist_free(aTHX_ pnl)
#define isPUNCT_LC_uvchr(c) _generic_LC_invlist_uvchr(isPUNCT_LC, _CC_PUNCT, c)
#define NEED_VA_COPY 
#define PERL_ARGS_ASSERT_CK_REFASSIGN assert(o)
#define MACH_MSG_GUARD_FLAGS_IMMOVABLE_RECEIVE 0x0001
#define NGX_HTTP_LOG_UNSAFE 1
#define PCRE2_ERROR_DFA_UFUNC (-41)
#define IPV6_RECVPATHMTU 43
#define __SIZEOF_SIZE_T__ 8
#define __DARWIN_ALIAS_STARTING(_mac,_iphone,x) __DARWIN_ALIAS_STARTING_MAC_ ##_mac(x)
#define pcre2_callout_enumerate_block PCRE2_SUFFIX(pcre2_callout_enumerate_block_)
#define _WCHAR_T 
#define O_NONBLOCK 0x00000004
#define CALENDAR_CLOCK 1
#define Poison(d,n,t) PoisonFree(d,n,t)
#define PERL_ARGS_ASSERT_SV_PVBYTE assert(sv)
#define PTHREAD_MUTEX_INITIALIZER {_PTHREAD_MUTEX_SIG_init, {0}}
#define PadnameREFCNT(pn) (pn)->xpadn_refcnt
#define PERL_ARGS_ASSERT_OOPSAV assert(o)
#define POLICY_TIMESHARE_BASE_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_timeshare_base)/sizeof(integer_t)))
#define NO_RECOVERY 3
#define PERL_ARGS_ASSERT_OP_SCOPE 
#define SIG_BLOCK 1
#define DEBUG_C_FLAG 0x00200000
#define SvIOK_nog(sv) ((SvFLAGS(sv) & (SVf_IOK|SVs_GMG)) == SVf_IOK)
#define POLICYCLASS_FIXEDPRI (POLICY_RR | POLICY_FIFO)
#define cx_type cx_u.cx_subst.sbu_type
#define case_226_SBOX32(hash,state,key) 
#define VOL_CAP_INT_VOL_RENAME 0x00000080
#define PERL_ARGS_ASSERT_IBCMP 
#define __FLT64X_MIN_EXP__ (-16381)
#define ATTR_BULK_REQUIRED (ATTR_CMN_NAME | ATTR_CMN_RETURNED_ATTRS)
#define POLICY_RR 2
#define SvFLAGS(sv) (sv)->sv_flags
#define MACH_PORT_STATUS_FLAG_STRICT_GUARD 0x04
#define EV_DISABLE 0x0008
#define CALLREG_NAMED_BUFF_STORE(rx,key,value,flags) RX_ENGINE(rx)->named_buff(aTHX_ (rx), (key), (value), ((flags) | RXapif_STORE))
#define NOTE_VM_PRESSURE_TERMINATE 0x40000000
#define SAVESTACK_POS() STMT_START { dSS_ADD; SS_ADD_INT(PL_stack_sp - PL_stack_base); SS_ADD_UV(SAVEt_STACK_POS); SS_ADD_END(2); } STMT_END
#define P_DIRTY_SHUTDOWN 0x00000010
#define __IPHONE_11_0 110000
#define __IPHONE_11_1 110100
#define __IPHONE_11_2 110200
#define __IPHONE_11_3 110300
#define __IPHONE_11_4 110400
#define ATTR_VOL_SIGNATURE 0x00000002
#define USER_LINE_MAX 8
#define PERL_ARGS_ASSERT_SV_2IO assert(sv)
#define DEBUG_S_TEST_ UNLIKELY(PL_debug & DEBUG_S_FLAG)
#define IPCTL_MAXID 17
#define _POSIX2_PBS_ACCOUNTING (-1)
#define ngx_de_link_info_n "lstat()"
#define __KAME_VERSION "2009/apple-darwin"
#define HOST_PREFERRED_USER_ARCH 12
#define MADV_DONTNEED POSIX_MADV_DONTNEED
#define MACH_RCV_INVALID_TRAILER 0x1000400f
#define GV_NOTQUAL 0x80
#define VM_MEMORY_COREUIFILE 77
#define XHvTOTALKEYS(xhv) ((xhv)->xhv_keys)
#define sv_catpvf_nocontext Perl_sv_catpvf_nocontext
#define RETSETUNDEF RETURNX(SETs(&PL_sv_undef))
#define case_29_SBOX32(hash,state,key) 
#define PERL_ARGS_ASSERT_CORESUB_OP assert(coreargssv)
#define _RPERM_OK (1<<19)
#define DB_VERSION_MINOR_CFG 1
#define PAD_BASE_SV(padlist,po) (PadlistARRAY(padlist)[1]) ? AvARRAY(MUTABLE_AV((PadlistARRAY(padlist)[1])))[po] : NULL;
#define HW_CACHELINE 16
#define SO_NKE 0x1021
#define KERN_TFP 61
#define case_72_SBOX32(hash,state,key) 
#define TIOCM_RI TIOCM_RNG
#define PERL_ARGS_ASSERT_REFCOUNTED_HE_FETCH_SV assert(key)
#define sv_utf8_upgrade(sv) sv_utf8_upgrade_flags(sv, SV_GMAGIC)
#define host_set_ktrace_background_port(host,port) (host_set_special_port((host), HOST_KTRACE_BACKGROUND_PORT, (port)))
#define KERN_CHECKOPENEVT 70
#define x86_AVX512_STATE32_COUNT ((mach_msg_type_number_t) (sizeof(x86_avx512_state32_t)/sizeof(unsigned int)))
#define __SOPT 0x0400
#define PERL_ARGS_ASSERT_IS_UTF8_STRING_LOC assert(s); assert(ep)
#define pthread_cleanup_push(func,val) { struct __darwin_pthread_handler_rec __handler; pthread_t __self = pthread_self(); __handler.__routine = func; __handler.__arg = val; __handler.__next = __self->__cleanup_stack; __self->__cleanup_stack = &__handler;
#define IPPORT_RESERVEDSTART 600
#define S_IWUSR 0000200
#define PRIiFAST8 PRIi8
#define DEBUG_y_TEST_ UNLIKELY(PL_debug & DEBUG_y_FLAG)
#define x86_AVX512_STATE_COUNT ((mach_msg_type_number_t) (sizeof(x86_avx512_state_t)/sizeof(unsigned int)))
#define CTL_VM 2
#define what_MULTI_CHAR_FOLD_utf8_safe(s,e) ( ((e)-(s) > 5) ? what_MULTI_CHAR_FOLD_utf8_safe_part6_(s,e) : what_MULTI_CHAR_FOLD_utf8_safe_part7_(s,e) )
#define IPPROTO_SATMON 69
#define PCRE2_ERROR_PARENS_QUERY_R_MISSING_CLOSING 158
#define SAVEt_PADSV_AND_MORTALIZE 50
#define STAILQ_NEXT(elm,field) ((elm)->field.stqe_next)
#define STRUCT_OFFSET(s,m) offsetof(s,m)
#define PRIiLEAST64 PRIi64
#define KEV_DL_SIFFLAGS 1
#define PCRE2_SUBSTITUTE_MATCHED 0x00010000u
#define FPS_C0 0x0100
#define FPS_C1 0x0200
#define PCRE2_CONFIG_NEVER_BACKSLASH_C 13
#define FPS_C3 0x4000
#define BIN_EXP "/usr/local/Cellar/perl/5.34.0/bin"
#define HAS_UTIME 
#define call_argv(a,b,c) Perl_call_argv(aTHX_ a,b,c)
#define SvIsUV_off(sv) (SvFLAGS(sv) &= ~SVf_IVisUV)
#define sv_catpv(a,b) Perl_sv_catpv(aTHX_ a,b)
#define gv_fetchmethod_flags(stash,name,flags) gv_fetchmethod_pv_flags(stash, name, flags)
#define isIDFIRST_uni(c) isIDFIRST_uvchr(c)
#define UINT_LEAST16_MAX UINT16_MAX
#define PERL_ARGS_ASSERT_SV_STRING_FROM_ERRNUM 
#define F_UNLCK 2
#define __DARWIN_FD_SET(n,p) __darwin_fd_set((n), (p))
#define IP_MIN_MEMBERSHIPS 31
#define GCC_DIAG_RESTORE_DECL GCC_DIAG_RESTORE dNOOP
#define FPS_DE 0x0002
#define OPpPADHV_ISKEYS 0x01
#define TASK_ACCESS_PORT 9
#define sv_utf8_downgrade(sv,fail_ok) sv_utf8_downgrade_flags(sv, fail_ok, SV_GMAGIC)
#define PERL_ARGS_ASSERT_HV_RAND_SET assert(hv)
#define __DEVOLATILE(type,var) __CAST_AWAY_QUALIFIER(var, volatile, type)
#define PoisonFree(d,n,t) PoisonWith(d,n,t,0xEF)
#define pseudo_AF_RTIP 22
#define isCNTRL_LC_uvchr(c) (c < 256 ? isCNTRL_LC(c) : 0)
#define NGX_HAVE_FIONBIO 1
#define case_200_SBOX32(hash,state,key) 
#define form Perl_form_nocontext
#define _PC_LINK_MAX 1
#define SvIOK_nogthink(sv) ((SvFLAGS(sv) & (SVf_IOK|SVf_THINKFIRST|SVs_GMG)) == SVf_IOK)
#define SIGQUIT 3
#define isXDIGIT_LC_uvchr(c) _generic_LC_uvchr(isXDIGIT_LC, is_XDIGIT_cp_high, c)
#define HvRITER_set(hv,r) Perl_hv_riter_set(aTHX_ MUTABLE_HV(hv), r)
#define EBADEXEC 85
#define TH_ACK 0x10
#define PL_colorset (vTHX->Icolorset)
#define isUPPER_LC(c) _generic_LC(c, _CC_UPPER, isupper)
#define ITIMER_REAL 0
#define VAL_O_NONBLOCK O_NONBLOCK
#define RXapif_ALL 0x0200
#define FPS_ES 0x0080
#define PerlIO_fileno(a) Perl_PerlIO_fileno(aTHX_ a)
#define PERL_PV_ESCAPE_NOBACKSLASH 0x002000
#define SvAMAGIC_off Perl_SvAMAGIC_off
#define PERL_ARGS_ASSERT_CX_DUMP assert(cx)
#define AMGfallYES 3
#define _BSD_MACHINE__TYPES_H_ 
#define SUPERPAGE_SIZE_ANY 1
#define PERL_ARGS_ASSERT_SAVE_PUSHI32PTR 
#define NGX_SHUTDOWN_SIGNAL QUIT
#define _XOPEN_SHM (1)
#define sv_clear(a) Perl_sv_clear(aTHX_ a)
#define HOST_NOT_FOUND 1
#define SVf_AMAGIC 0x10000000
#define THREAD_EXTENDED_INFO_COUNT ((mach_msg_type_number_t) (sizeof(thread_extended_info_data_t) / sizeof (natural_t)))
#define PERL_ARGS_ASSERT_NEWANONATTRSUB 
#define PERL_ARGS_ASSERT_SETFD_CLOEXEC_FOR_NONSYSFD 
#define TIOCMODG _IOR('t', 3, int)
#define SEGV_ACCERR 2
#define PERL_ARGS_ASSERT_NEWNULLLIST 
#define TIOCMODS _IOW('t', 4, int)
#define __PTRDIFF_T 
#define MACH_MSG_TYPE_INTEGER_T MACH_MSG_TYPE_INTEGER_32
#define newIO() MUTABLE_IO(newSV_type(SVt_PVIO))
#define WARN_EXEC 7
#define PTR2IV(p) INT2PTR(IV,p)
#define PERL_ARGS_ASSERT_PADLIST_STORE assert(padlist)
#define CPU_SUBTYPE_POWERPC_603e ((cpu_subtype_t) 4)
#define __pic__ 2
#define NGX_MAXHOSTNAMELEN MAXHOSTNAMELEN
#define CXp_SUB_RE 0x40
#define MACH_MSGH_BITS_SET_PORTS(remote,local,voucher) (((remote) & MACH_MSGH_BITS_REMOTE_MASK) | (((local) << 8) & MACH_MSGH_BITS_LOCAL_MASK) | (((voucher) << 16) & MACH_MSGH_BITS_VOUCHER_MASK))
#define save_pushptrptr(a,b,c) Perl_save_pushptrptr(aTHX_ a,b,c)
#define case_83_SBOX32(hash,state,key) 
#define HOST_LOCAL_NODE -1
#define ngx_file_at_info_n "fstatat()"
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_4(x) x
#define _POSIX_ADVISORY_INFO (-1)
#define PERL_ARGS_ASSERT_SV_CATPVN_MG assert(dsv); assert(sstr)
#define PERL_ARGS_ASSERT_SV_UTF8_UPGRADE assert(sv)
#define _NGX_CORE_H_INCLUDED_ 
#define isGV_with_GP_off(sv) STMT_START { assert (SvTYPE(sv) == SVt_PVGV || SvTYPE(sv) == SVt_PVLV); assert (!SvPOKp(sv)); assert (!SvIOKp(sv)); (SvFLAGS(sv) &= ~SVpgv_GP); } STMT_END
#define USER_CS_PATH 1
#define CopLINE_set(c,l) (CopLINE(c) = (l))
#define DEBUG_M_TEST_ UNLIKELY(PL_debug & DEBUG_M_FLAG)
#define NGX_CONF_TAKE12 (NGX_CONF_TAKE1|NGX_CONF_TAKE2)
#define SVf_ROK 0x00000800
#define PERLSI_UNDEF 0
#define stpncpy(dest,...) __builtin___stpncpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define F_LOCK 1
#define P_DIRTY_DEFER_ALWAYS 0x00000400
#define newLOOPEX(a,b) Perl_newLOOPEX(aTHX_ a,b)
#define CPU_SUBTYPE_POWERPC_604e ((cpu_subtype_t) 7)
#define PERL_ARGS_ASSERT_NEWXS_LEN_FLAGS assert(subaddr)
#define VFS_CTL_STATFS64 0x0001000B
#define HV_DISABLE_UVAR_XKEY 0x01
#define EXC_I386_SGLSTP 1
#define isALNUM_uni(c) isWORDCHAR_uni(c)
#define IN6ADDR_NODELOCAL_ALLNODES_INIT {{{ 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01 }}}
#define NV_NAN_PAYLOAD_PERM_IEEE_754_64_BE 0xFF, 0x6, 0x5, 0x4, 0x3, 0x2, 0x1, 0x0
#define KERN_INVALID_OBJECT 29
#define NGX_HAVE_PREAD 1
#define IP_PORTRANGE_DEFAULT 0
#define IPPROTO_SRPC 90
#define PERL_FPU_PRE_EXEC { Sigsave_t xfpe; rsignal_save(SIGFPE, PL_sigfpe_saved, &xfpe);
#define REFCOUNTED_HE_KEY_UTF8 0x00000001
#define LATIN_SMALL_LETTER_A_WITH_RING_ABOVE_NATIVE 0xE5
#define __FLT64_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F64
#define XOPd_xop_peep ((Perl_cpeep_t)0)
#define ngx_memset(buf,c,n) (void) memset(buf, c, n)
#define SAVEt_SHARED_PVREF 41
#define FPS_IE 0x0001
#define _VA_LIST 
#define MGf_LOCAL 0x20
#define NGX_HTTP_CACHE_EXPIRED 3
#define PERL_ARGS_ASSERT_CK_JOIN assert(o)
#define IN_CLASSA_NSHIFT 24
#define TASK_KERNELMEMORY_INFO 7
#define PL_globhook (vTHX->Iglobhook)
#define CvANONCONST_on(cv) (CvFLAGS(cv) |= CVf_ANONCONST)
#define __OSX_AVAILABLE(_vers) 
#define PerlLIO_dup2(fd1,fd2) dup2((fd1), (fd2))
#define SvNOK_on(sv) (assert_not_glob(sv) SvFLAGS(sv) |= (SVf_NOK|SVp_NOK))
#define case_46_SBOX32(hash,state,key) 
#define VM_MEMORY_COREGRAPHICS_SHARED 55
#define _MACH_MACHINE_H_ 
#define NGX_HTTP_BAD_GATEWAY 502
#define MPO_FILTER_MSG 0x100
#define IN_SOME_LOCALE_FORM (IN_PERL_COMPILETIME ? IN_SOME_LOCALE_FORM_COMPILETIME : IN_SOME_LOCALE_FORM_RUNTIME)
#define LDBL_TRUE_MIN __LDBL_DENORM_MIN__
#define isclr(a,i) ((((unsigned char *)(a))[(i)/NBBY] & (1u<<((i)%NBBY))) == 0)
#define NGX_HTTP_SSI_COND_ELSE 2
#define isALPHANUMERIC_LC_uvchr(c) _generic_LC_invlist_uvchr(isALPHANUMERIC_LC, _CC_ALPHANUMERIC, c)
#define __ILP32_OFFBIG (-1)
#define PERL_ARGS_ASSERT_INIT_STACKS 
#define __FLT64X_NORM_MAX__ 1.18973149535723176502126385303097021e+4932F64x
#define VOL_CAP_INT_RENAME_SWAP 0x00040000
#define MAXAUDITDATA (0x8000 - 1)
#define MACH_MSG_TYPE_PORT_ANY(x) (((x) >= MACH_MSG_TYPE_MOVE_RECEIVE) && ((x) <= MACH_MSG_TYPE_MAKE_SEND_ONCE))
#define _PTHREAD_QOS_H 
#define isDIGIT_LC_uvchr(c) _generic_LC_invlist_uvchr(isDIGIT_LC, _CC_DIGIT, c)
#define PCRE2_INFO_SIZE 22
#define PERL_ARGS_ASSERT_GP_DUP assert(param)
#define HS_GETXSVERLEN(key) ((key) >> 8 & 0xFF)
#define HAS_ISNORMAL 
#define __not_tail_called 
#define SVs_SMG 0x00400000
#define VOL_CAP_FMT_DIR_HARDLINKS 0x00040000
#define MNT_NOUSERXATTR 0x01000000
#define NSEC_PER_SEC 1000000000ull
#define PL_comppad_name_fill (vTHX->Icomppad_name_fill)
#define CopHINTHASH_set(c,h) ((c)->cop_hints_hash = (h))
#define PERL_ARGS_ASSERT_NEWANONHASH 
#define PTR2NV(p) NUM2PTR(NV,p)
#define IPV6_MULTICAST_IF 9
#define _shifted_octet(type,ptr,idx,shift) (((type)(((U8*)(ptr))[(idx)]))<<(shift))
#define LC_MONETARY_MASK (1 << 3)
#define TASK_DYLD_ALL_IMAGE_INFO_32 0
#define PERL_ARGS_ASSERT_HV_ITERNEXTSV assert(hv); assert(key); assert(retlen)
#define OPpOPEN_OUT_RAW 0x40
#define IPV6_ADDR_MC_FLAGS(a) ((a)->s6_addr[1] & 0xf0)
#define ngx_qsort qsort
#define _POSIX_SYMLOOP_MAX 8
#define do_sprintf(a,b,c) Perl_do_sprintf(aTHX_ a,b,c)
#define UF_TRACKED 0x00000040
#define MACH_MSG_OOL_PORTS_DESCRIPTOR 2
#define _SYS_ATTR_H_ 
#define isUPPER_LC_utf8(p,e) isUPPER_LC_utf8_safe(p, e)
#define CPU_SUBTYPE_POWERPC_601 ((cpu_subtype_t) 1)
#define CPU_SUBTYPE_POWERPC_602 ((cpu_subtype_t) 2)
#define CPU_SUBTYPE_POWERPC_603 ((cpu_subtype_t) 3)
#define HAS_MKTIME 
#define btoc(x) (((unsigned)(x)+(NBPG-1))>>PGSHIFT)
#define CX_CURPAD_SV(block,po) (AvARRAY(MUTABLE_AV(((block).oldcomppad)))[po])
#define I16TYPE short
#define SIGTRAP 5
#define PERL_ARGS_ASSERT_MAGIC_SET_ALL_ENV assert(sv); assert(mg)
#define __nonnull 
#define _PASSWD "passwd"
#define G_WARN_OFF 0
#define _POSIX_THREAD_ATTR_STACKSIZE 200112L
#define PERL_ARGS_ASSERT_SV_2UV assert(sv)
#define PERL_ARGS_ASSERT_CK_PROTOTYPE assert(o)
#define NGX_RESOLVE_NXDOMAIN 3
#define _CC_GRAPH 8
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10_3(x) x
#define HV_FETCH_ISSTORE 0x04
#define SHUT_RDWR 2
#define KEV_DL_LINK_ON 13
#define IPPROTO_XTP 36
#define _force_out_malformed_utf8_message(a,b,c,d) Perl__force_out_malformed_utf8_message(aTHX_ a,b,c,d)
#define bytes_to_utf8(a,b) Perl_bytes_to_utf8(aTHX_ a,b)
#define NGX_MAX_INT32_VALUE (uint32_t) 0x7fffffff
#define PERL_DONT_CREATE_GVSV 
#define PERL_ARGS_ASSERT_SVREFCNT_INC_VOID 
#define case_106_SBOX32(hash,state,key) 
#define O_DSYNC 0x400000
#define PERL_ARGS_ASSERT_MAGIC_REGDATUM_SET assert(sv); assert(mg)
#define PERL_EXIT_WARN 0x04
#define CPU_SUBTYPE_PENTIUM_3_XEON CPU_SUBTYPE_INTEL(8, 2)
#define CPUSUBFAMILY_ARM_HP 1
#define __API_DEPRECATED_BEGIN_MSG_GET_MACRO(...) 
#define THREAD_AFFINITY_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (thread_affinity_policy_data_t) / sizeof (integer_t)))
#define KERN_BOOTTIME 21
#define CPU_TYPE_X86_64 (CPU_TYPE_X86 | CPU_ARCH_ABI64)
#define PL_numeric_name (vTHX->Inumeric_name)
#define KERN_TTY 69
#define PL_numeric_standard (vTHX->Inumeric_standard)
#define FPC_IC_PROJ 0x0000
#define SSPUSHDPTR(p) (PL_savestack[PL_savestack_ix++].any_dptr = (p))
#define PERL_ARGS_ASSERT_MAGIC_SETSIG assert(mg)
#define PERL_ARGS_ASSERT_GV_SVADD 
#define SSPOPIV (PL_savestack[--PL_savestack_ix].any_iv)
#define HAS_FEGETROUND 
#define FPS_PE 0x0020
#define TCPOPT_EOL 0
#define PL_RANDOM_STATE_TYPE perl_drand48_t
#define __WATCHOS_4_2 40200
#define PERL_ARGS_ASSERT_MAGIC_CLEARENV assert(sv); assert(mg)
#define CXp_ONCE 0x10
#define MACH_VOUCHER_SELECTOR_CURRENT ((mach_voucher_selector_t)0)
#define CAN_PROTOTYPE 
#define PERL_BITFIELD16 U16
#define NV_MIN_10_EXP DBL_MIN_10_EXP
#define SIOCGIFBOND _IOWR('i', 71, struct ifreq)
#define PERL_API_REVISION 5
#define pad_new(a) Perl_pad_new(aTHX_ a)
#define PERL_ARGS_ASSERT_MY_VSNPRINTF assert(buffer); assert(format)
#define dTARGETSTACKED SV * GETTARGETSTACKED
#define CPU_TYPE_I386 CPU_TYPE_X86
#define SIOCSIFMETRIC _IOW('i', 24, struct ifreq)
#define PERL_MAGIC_envelem 'e'
#define reentrant_retry Perl_reentrant_retry
#define HAS_SYSTEM 
#define VM_REGION_BASIC_INFO 10
#define PERL_ARGS_ASSERT_IS_INVARIANT_STRING 
#define SvPOKp(sv) (SvFLAGS(sv) & SVp_POK)
#define Off_t off_t
#define HASATTRIBUTE_ALWAYS_INLINE 
#define __FLT64X_DECIMAL_DIG__ 21
#define sv_2pvbyte_nolen(sv) sv_2pvbyte(sv, 0)
#define newGIVENOP(a,b,c) Perl_newGIVENOP(aTHX_ a,b,c)
#define IP_MSFILTER 74
#define HAS_ISBLANK 
#define _MACH_MACHINE_THREAD_STATUS_H_ 
#define LATIN_SMALL_LIGATURE_ST_UTF8 "\xEF\xAC\x86"
#define CPERLarg_ 
#define EXC_RPC_ALERT 9
#define USER_EXPR_NEST_MAX 7
#define P_INMEM 0
#define sv_rvunweaken(a) Perl_sv_rvunweaken(aTHX_ a)
#define ctod(x) ((x)<<(PGSHIFT-DEV_BSHIFT))
#define PERL_BITFIELD32 U32
#define NGX_NOACCEPT_SIGNAL WINCH
#define __DBL_HAS_DENORM__ 1
#define INT_LEAST32_MAX INT32_MAX
#define PERL_ARGS_ASSERT_ATFORK_LOCK 
#define PERL_SCAN_GREATER_THAN_UV_MAX 0x04
#define _NET_NETKEV_H_ 
#define USE_LOCALE_MESSAGES 
#define FPS_C2 0x0400
#define sv_pvn_force_flags(a,b,c) Perl_sv_pvn_force_flags(aTHX_ a,b,c)
#define __MAC_10_11_2 101102
#define __MAC_10_11_3 101103
#define aTHX_ aTHX,
#define aTHXa(a) aTHX = (tTHX)a
#define PTR2UV(p) INT2PTR(UV,p)
#define SCNoFAST8 SCNo8
#define PERL_ARGS_ASSERT_SVREFCNT_INC 
#define MAP_MEM_PURGABLE_KERNEL_ONLY 0x004000
#define aTHXo aTHX
#define aTHXx my_perl
#define G_WARN_ALL_ON 2
#define my_strftime(a,b,c,d,e,f,g,h,i,j) Perl_my_strftime(aTHX_ a,b,c,d,e,f,g,h,i,j)
#define case_63_SBOX32(hash,state,key) 
#define feof_unlocked(p) __sfeof(p)
#define sortsv(a,b,c) Perl_sortsv(aTHX_ a,b,c)
#define _CS_XBS5_ILP32_OFFBIG_LDFLAGS 25
#define IPV6CTL_SENDREDIRECTS 2
#define __OS_AVAILABILITY(_target,_availability) 
#define _NGX_HTTP_H_INCLUDED_ 
#define MACH_RCV_TRAILER_AUDIT 3
#define ROTR_UV(x,r) ROTL64(x,r)
#define HAS_MMAP 
#define TASK_BASE_QOS_POLICY 8
#define PL_errors (vTHX->Ierrors)
#define PerlSock_setservent(f) setservent(f)
#define __FLT32_MIN__ 1.17549435082228750796873653722224568e-38F32
#define __UINT8_TYPE__ unsigned char
#define MACH_RCV_LARGE_IDENTITY 0x00000008
#define save_int(a) Perl_save_int(aTHX_ a)
#define _SC_BC_BASE_MAX 9
#define boolSV(b) ((b) ? &PL_sv_yes : &PL_sv_no)
#define PCRE2_ERROR_INTERNAL_UNEXPECTED_REPEAT 110
#define isUPPER_LC_uvchr(c) _generic_LC_invlist_uvchr(isUPPER_LC, _CC_UPPER, c)
#define WARN_PRECEDENCE 33
#define SAVEt_FREEOP 9
#define PERL_ARGS_ASSERT_PERLIO_ERROR 
#define case_156_SBOX32(hash,state,key) 
#define LEAVE_with_name(name) LEAVE
#define PerlDir_open(name) opendir((name))
#define SF_SUPPORTED 0x009f0000
#define ngx_gettimeofday(tp) (void) gettimeofday(tp, NULL);
#define WARN_PRINTF 34
#define HvPLACEHOLDERS_set(hv,p) Perl_hv_placeholders_set(aTHX_ MUTABLE_HV(hv), p)
#define NGX_HAVE_STATVFS 1
#define P_DIRTY 0x00000008
#define TASK_SCHED_FIFO_INFO 12
#define ARG_MAX (1024 * 1024)
#define KERN_UNRAGE_THREAD 4
#define CPU_TYPE_I860 ((cpu_type_t) 15)
#define PL_localpatches (vTHX->Ilocalpatches)
#define PERL_ARGS_ASSERT_WARN_SV assert(baseex)
#define DEBUG_q_TEST_ UNLIKELY(PL_debug & DEBUG_q_FLAG)
#define SAVEt_FREEPV 10
#define isIDCONT_LC_utf8(p,e) isIDCONT_LC_utf8_safe(p, e)
#define SAVECOMPILEWARNINGS() save_pushptr(PL_compiling.cop_warnings, SAVEt_COMPILE_WARNINGS)
#define PCRE2_ERROR_CLASS_RANGE_ORDER 108
#define FPC_RC_CHOP 0x0c00
#define PERL_ARGS_ASSERT_CAST_I32 
#define ngx_post_event(ev,q) if (!(ev)->posted) { (ev)->posted = 1; ngx_queue_insert_tail(q, &(ev)->queue); ngx_log_debug1(NGX_LOG_DEBUG_CORE, (ev)->log, 0, "post event %p", ev); } else { ngx_log_debug1(NGX_LOG_DEBUG_CORE, (ev)->log, 0, "update posted event %p", ev); }
#define PERL_ARGS_ASSERT_NEWAV 
#define I8SIZE 1
#define MAX_CANON 1024
#define PERL_ARGS_ASSERT_SV_DERIVED_FROM_SV assert(sv); assert(namesv)
#define HAS_SHMAT_PROTOTYPE 
#define MGf_REQUIRE_GV 1
#define PTHREAD_ATFORK(prepare,parent,child) pthread_atfork(prepare,parent,child)
#define EFL_USER_CLEAR (EFL_IOPL|EFL_NT|EFL_RF)
#define PERL_ARGS_ASSERT_HV_ENAME_DELETE assert(hv); assert(name)
#define _SC_TRACE_NAME_MAX 128
#define PERL_ARGS_ASSERT_SAVE_ADELETE assert(av)
#define VM_SYNC_SYNCHRONOUS ((vm_sync_t) 0x02)
#define case_123_SBOX32(hash,state,key) 
#define isASCII(c) ((WIDEST_UTYPE)((c) | 0) < 128)
#define __MAC_10_10 101000
#define __MAC_10_11 101100
#define __MAC_10_13 101300
#define __MAC_10_14 101400
#define __MAC_10_15 101500
#define __MAC_10_16 101600
#define _SYS_MOUNT_H_ 
#define PGOFSET (NBPG-1)
#define OP_REFCNT_UNLOCK op_refcnt_unlock()
#define __DARWIN_SUF_UNIX03 
#define clrnd(i) (i)
#define PMf_WILDCARD (1U<<(PMf_BASE_SHIFT+17))
#define vnormal(a) Perl_vnormal(aTHX_ a)
#define SIG_SETMASK 3
#define PCRE2_ERROR_NULL (-51)
#define __DBL_MANT_DIG__ 53
#define SRCHFS_MATCHDIRS 0x00000004
#define NET_SERVICE_TYPE_AV 6
#define SM_PRIVATE 2
#define P_THCWD 0x01000000
#define SAVEt_FREESV 11
#define SLIST_FIRST(head) ((head)->slh_first)
#define ngx_random random
#define _PC_CASE_SENSITIVE 11
#define POSIX_MADV_SEQUENTIAL 2
#define PerlIO PerlIO
#define PL_markstack_max (vTHX->Imarkstack_max)
#define GETNETENT_R_PROTO 0
#define BADSIG SIG_ERR
#define PCRE2_ERROR_MISSING_NAME_TERMINATOR 142
#define NGX_HTTP_UNAUTHORIZED 401
#define TASK_CATEGORY_POLICY 1
#define PERL_ARGS_ASSERT_SV_RECODE_TO_UTF8 assert(sv); assert(encoding)
#define OPpMULTIDEREF_DELETE 0x20
#define __SCN_MAX_LENGTH_MODIFIER__ "j"
#define isALPHANUMERIC_L1(c) _generic_isCC(c, _CC_ALPHANUMERIC)
#define _SC_XOPEN_ENH_I18N 109
#define MAP_MEM_FLAGS_MASK 0x00FFFF00
#define VM_MEMORY_MALLOC_PGUARD 13
#define my_strnlen strnlen
#define NGX_CONF_TAKE23 (NGX_CONF_TAKE2|NGX_CONF_TAKE3)
#define MINCORE_MODIFIED_OTHER 0x10
#define FPS_ZE 0x0004
#define INT_LEAST32_MIN INT32_MIN
#define PL_vtbl_uvar PL_magic_vtables[want_vtbl_uvar]
#define KEV_DL_AWDL_RESTRICTED 26
#define VOL_CAP_INT_ADVLOCK 0x00000100
#define PERL_ARGS_ASSERT_GET_PROP_VALUES 
#define DST_EET 5
#define _NGX_THREAD_H_INCLUDED_ 
#define TASK_SCHED_TIMESHARE_INFO 10
#define VM_FLAGS_PURGABLE 0x0002
#define _NETINET_TCP_H_ 
#define PRIxFAST8 PRIx8
#define CMSG_FIRSTHDR(mhdr) ((mhdr)->msg_controllen >= sizeof(struct cmsghdr) ? (struct cmsghdr *)(mhdr)->msg_control : (struct cmsghdr *)0L)
#define DBL_DECIMAL_DIG __DBL_DECIMAL_DIG__
#define STORE_LC_NUMERIC_SET_TO_NEEDED_IN(in) STMT_START { bool _in_lc_numeric = (in); LC_NUMERIC_LOCK( ( ( _in_lc_numeric && _NOT_IN_NUMERIC_UNDERLYING) || (! _in_lc_numeric && _NOT_IN_NUMERIC_STANDARD))); if (_in_lc_numeric) { if (_NOT_IN_NUMERIC_UNDERLYING) { Perl_set_numeric_underlying(aTHX); _restore_LC_NUMERIC_function = &Perl_set_numeric_standard; } } else { if (_NOT_IN_NUMERIC_STANDARD) { Perl_set_numeric_standard(aTHX); _restore_LC_NUMERIC_function = &Perl_set_numeric_underlying; } } } STMT_END
#define newSVpv(a,b) Perl_newSVpv(aTHX_ a,b)
#define PERL_ARGS_ASSERT_GET_AV assert(name)
#define CvSTART(sv) ((XPVCV*)MUTABLE_PTR(SvANY(sv)))->xcv_start_u.xcv_start
#define PERL_ARGS_ASSERT__TO_UTF8_FOLD_FLAGS assert(p); assert(ustrp)
#define IPV6CTL_RTMAXCACHE 27
#define SvUPGRADE(sv,mt) ((void)(SvTYPE(sv) >= (mt) || (sv_upgrade(sv, mt),1)))
#define VM_REGION_EXTENDED_INFO_COUNT ((mach_msg_type_number_t) (sizeof (vm_region_extended_info_data_t) / sizeof (natural_t)))
#define PCRE2_ERROR_PATTERN_TOO_COMPLICATED 186
#define PERL_UNICODE_CONSTANTS_H_ 1
#define MACH_PORT_TYPE_SEND_RIGHTS (MACH_PORT_TYPE_SEND|MACH_PORT_TYPE_SEND_ONCE)
#define st_mtime st_mtimespec.tv_sec
#define PerlProc_gettimeofday(t,z) gettimeofday((t),(z))
#define PERL_MAGIC_nkeys 'k'
#define PerlSIO_set_cnt(f,c) PerlIOProc_abort()
#define CvSTASH(sv) (0+((XPVCV*)MUTABLE_PTR(SvANY(sv)))->xcv_stash)
#define PERL_ARGS_ASSERT_SV_SETNV_MG assert(sv)
#define PerlSIO_ftell(f) ftell(f)
#define PL_argvgv (vTHX->Iargvgv)
#define TAILQ_EMPTY(head) ((head)->tqh_first == NULL)
#define case_80_SBOX32(hash,state,key) 
#define SO_OOBINLINE 0x0100
#define IPV6_2292RTHDR 24
#define isGV(sv) (SvTYPE(sv) == SVt_PVGV)
#define PERL_ARGS_ASSERT_HV_EITER_SET assert(hv)
#define stack_grow(a,b,c) Perl_stack_grow(aTHX_ a,b,c)
#define TCP_MAX_SACK 4
#define perl_init_i18nl14n(a) init_i18nl14n(a)
#define KERNEL_VERSION_MAX (512)
#define SvCANCOW(sv) (SvIsCOW(sv) ? SvLEN(sv) ? CowREFCNT(sv) != SV_COW_REFCNT_MAX : 1 : (SvFLAGS(sv) & CAN_COW_MASK) == CAN_COW_FLAGS && SvCUR(sv)+1 < SvLEN(sv))
#define sv_derived_from_pvn(a,b,c,d) Perl_sv_derived_from_pvn(aTHX_ a,b,c,d)
#define PERL_MAGIC_vec 'v'
#define PROCESSOR_CPU_LOAD_INFO_COUNT ((mach_msg_type_number_t) (sizeof(processor_cpu_load_info_data_t)/sizeof(natural_t)))
#define PERL_SYS_FPU_INIT NOOP
#define IOf_FAKE_DIRP 64
#define EXC_I386_INVOP 1
#define _POSIX_STREAM_MAX 8
#define NGX_HTTP_UPSTREAM_FT_INVALID_HEADER 0x00000008
#define HOST_FILECOORDINATIOND_PORT (23 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define ngx_create_dir(name,access) mkdir((const char *) name, access)
#define PERL_ARGS_ASSERT_PARSE_BLOCK 
#define CLANG_DIAG_RESTORE_DECL CLANG_DIAG_RESTORE dNOOP
#define SCNi64 __SCN_64_LENGTH_MODIFIER__ "i"
#define F_ULOCK 0
#define scan_oct(a,b,c) Perl_scan_oct(aTHX_ a,b,c)
#define INADDR_UNSPEC_GROUP (u_int32_t)0xe0000000
#define EXCEPTION_CODE_MAX 2
#define SAVECOPFILE_FREE(c) SAVESHAREDPV(CopFILE(c))
#define _SYS_RESOURCE_H_ 
#define PCRE2_ERROR_POSIX_CLASS_NOT_IN_CLASS 112
#define SvSHARED_HEK_FROM_PV(pvx) ((struct hek*)(pvx - STRUCT_OFFSET(struct hek, hek_key)))
#define BHKf_bhk_eval 0x08
#define PerlDir_read(dir) readdir((dir))
#define stoc(x) (x)
#define __LDBL_DECIMAL_DIG__ 21
#define THREAD_STATE_FLAVOR_LIST_10_9 129
#define __PRI_MAX_LENGTH_MODIFIER__ "j"
#define pTHX tTHX my_perl PERL_UNUSED_DECL
#define ngx_queue_insert_tail(h,x) (x)->prev = (h)->prev; (x)->prev->next = x; (x)->next = h; (h)->prev = x
#define PERL_HASH_SEED_BYTES _PERL_HASH_SEED_roundup(_PERL_HASH_SEED_BYTES)
#define ATTR_CMNEXT_CLONEID 0x00000100
#define CVf_ISXSUB 0x0008
#define IPV6PORT_ANONMIN 49152
#define HAS_PAUSE 
#define _SC_FSYNC 38
#define SETTARG STMT_START { SvSETMAGIC(TARG); SETs(TARG); } STMT_END
#define IN6_IS_ADDR_UNICAST_BASED_MULTICAST(a) (IN6_IS_ADDR_MULTICAST(a) && (IPV6_ADDR_MC_FLAGS(a) == IPV6_ADDR_MC_FLAGS_UNICAST_BASED))
#define FPE_INTOVF 8
#define F_ADDFILESIGS_INFO 103
#define PERL_ARGS_ASSERT_MAGIC_KILLBACKREFS assert(sv); assert(mg)
#define OPpOPEN_IN_RAW 0x10
#define PerlSock_gethostbyname(n) gethostbyname(n)
#define TIOCPKT_START 0x08
#define ERRSV GvSVn(PL_errgv)
#define x86_AVX512_STATE64 (x86_AVX512_STATE32 + 1)
#define _OFF_T 
#define UNISKIP(uv) UVCHR_SKIP(uv)
#define isWARNf_on(c,x) (PerlWarnIsSet_((U8 *)(c + 1), 2*(x)+1))
#define clearerr_unlocked(p) __sclearerr(p)
#define Size_t size_t
#define isIDFIRST(c) isIDFIRST_A(c)
#define KEV_DL_NODE_PRESENCE 21
#define PERL_ARGS_ASSERT_CLEAR_DEFARRAY assert(av)
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#define MCAST_LEAVE_GROUP 81
#define case_94_SBOX32(hash,state,key) 
#define PERL_ARGS_ASSERT_NOTIFY_PARSER_THAT_CHANGED_TO_UTF8 
#define NGX_HTTP_GZIP_PROXIED_NO_LM 0x0040
#define _POSIX_THREAD_PROCESS_SHARED 200112L
#define UTF8_ALLOW_LONG_AND_ITS_VALUE (UTF8_ALLOW_LONG|0x0020)
#define case_140_SBOX32(hash,state,key) 
#define WARN_EXPERIMENTAL__ALPHA_ASSERTIONS 67
#define PERL_ARGS_ASSERT_CV_CKPROTO_LEN_FLAGS assert(cv)
#define SITELIB "/usr/local/Cellar/perl/5.34.0/lib/perl5/site_perl/5.34.0"
#define _CC_CNTRL 13
#define PERL_ARGS_ASSERT_NEWXS_DEFFILE assert(name); assert(subaddr)
#define EXPECT(expr,val) __builtin_expect(expr,val)
#define _SC_2_LOCALEDEF 23
#define MACH_VOUCHER_ATTR_REDEEM ((mach_voucher_attr_recipe_command_t)10)
#define _STRINGS_H_ 
#define PERL_ARGS_ASSERT_AV_CLEAR assert(av)
#define SvPV_flags(sv,len,flags) (SvPOK_nog(sv) ? ((len = SvCUR(sv)), SvPVX(sv)) : sv_2pv_flags(sv, &len, flags))
#define PerlIO_close(a) Perl_PerlIO_close(aTHX_ a)
#define ATTR_CMN_ACCTIME 0x00001000
#define WARN_THREADS 40
#define PERL_WAIT_FOR_CHILDREN NOOP
#define CX_CURPAD_SAVE(block) (block).oldcomppad = PL_comppad
#define PRIo16 "ho"
#define PERL_ARGS_ASSERT_CALL_SV assert(sv)
#define SV_CATBYTES 16384
#define cop_store_label(a,b,c,d) Perl_cop_store_label(aTHX_ a,b,c,d)
#define SvPVX_mutable(sv) (0 + (sv)->sv_u.svu_pv)
#define HAS_STAT 
#define MALLOC_ZONE_FN_PTR(fn) fn
#define PERL_ARGS_ASSERT_MRO_GET_FROM_NAME assert(name)
#define MARK mark
#define dMY_CXT_SV dNOOP
#define LC_MESSAGES_MASK (1 << 2)
#define cPVOP cPVOPx(PL_op)
#define PERL_ARGS_ASSERT_NEWSVRV assert(rv)
#define HOST_VM_PURGABLE 9
#define PerlIO_setlinebuf(a) Perl_PerlIO_setlinebuf(aTHX_ a)
#define OPpITER_DEF 0x08
#define MNT_REMOVABLE 0x00000200
#define PCRE2_INFO_JITSIZE 10
#define bcopy(src,dest,...) __builtin___memmove_chk (dest, src, __VA_ARGS__, __darwin_obsz0 (dest))
#define cxstack_max (PL_curstackinfo->si_cxmax)
#define P_NOSHLIB 0x10000000
#define SV_GMAGIC 2
#define sv_cmp(sv1,sv2) sv_cmp_flags(sv1, sv2, SV_GMAGIC)
#define RXp_MATCH_TAINTED_off(prog) (RXp_EXTFLAGS(prog) &= ~RXf_TAINTED_SEEN)
#define TH_STATE_WAITING 3
#define HAS_NTOHS 
#define MACH_VOUCHER_ATTR_TEST_STORE MACH_VOUCHER_ATTR_USER_DATA_STORE
#define HAS_STRUCT_STATFS 
#define _NGX_TIME_H_INCLUDED_ 
#define ngx_queue_remove(x) (x)->next->prev = (x)->prev; (x)->prev->next = (x)->next
#define SAVEt_HV 33
#define PERL_ARGS_ASSERT_CK_RETURN assert(o)
#define SOMAXCONN 128
#define HOST_NULL ((host_t) 0)
#define want_vtbl_fm want_vtbl_regexp
#define OPpEVAL_COPHH 0x10
#define EXC_MASK_CRASH (1 << EXC_CRASH)
#define MAP_RESERVED0080 0x0080
#define PerlSIO_fflush(f) Fflush(f)
#define PERL_ARGS_ASSERT_SCAN_VERSION assert(s); assert(rv)
#define SAVEt_I8 14
#define PERL_SET_PHASE(new_phase) PERL_DTRACE_PROBE_PHASE(new_phase); PL_phase = new_phase;
#define CTL_HW_NAMES { { 0, 0 }, { "machine", CTLTYPE_STRING }, { "model", CTLTYPE_STRING }, { "ncpu", CTLTYPE_INT }, { "byteorder", CTLTYPE_INT }, { "physmem", CTLTYPE_INT }, { "usermem", CTLTYPE_INT }, { "pagesize", CTLTYPE_INT }, { "disknames", CTLTYPE_STRUCT }, { "diskstats", CTLTYPE_STRUCT }, { "epoch", CTLTYPE_INT }, { "floatingpoint", CTLTYPE_INT }, { "machinearch", CTLTYPE_STRING }, { "vectorunit", CTLTYPE_INT }, { "busfrequency", CTLTYPE_INT }, { "cpufrequency", CTLTYPE_INT }, { "cachelinesize", CTLTYPE_INT }, { "l1icachesize", CTLTYPE_INT }, { "l1dcachesize", CTLTYPE_INT }, { "l2settings", CTLTYPE_INT }, { "l2cachesize", CTLTYPE_INT }, { "l3settings", CTLTYPE_INT }, { "l3cachesize", CTLTYPE_INT }, { "tbfrequency", CTLTYPE_INT }, { "memsize", CTLTYPE_QUAD }, { "availcpu", CTLTYPE_INT }, { "target", CTLTYPE_STRING }, { "product", CTLTYPE_STRING }, }
#define my_setenv(a,b) Perl_my_setenv(aTHX_ a,b)
#define MICRO_SIGN_NATIVE 0xB5
#define __SALC 0x4000
#define NGX_HTTP_MOVED_TEMPORARILY 302
#define TASK_EVENTS_INFO_COUNT ((mach_msg_type_number_t) (sizeof(task_events_info_data_t) / sizeof(natural_t)))
#define MAC_OS_X_VERSION_10_15_1 101501
#define av_tindex(av) av_top_index(av)
#define LIST_INIT(head) do { LIST_FIRST((head)) = NULL; } while (0)
#define case_213_SBOX32(hash,state,key) 
#define __FLT128_DIG__ 33
#define SCNiLEAST8 SCNi8
#define ngx_conf_merge_value(conf,prev,default) if (conf == NGX_CONF_UNSET) { conf = (prev == NGX_CONF_UNSET) ? default : prev; }
#define PERL_ARGS_ASSERT_MAGIC_SETSUBSTR assert(sv); assert(mg)
#define PERL_ARGS_ASSERT_MRO_SET_PRIVATE_DATA assert(smeta); assert(which); assert(data)
#define mg_findext Perl_mg_findext
#define OA_SCALAR 1
#define NGX_HTTP_GZIP_PROXIED_ANY 0x0200
#define IP_ADD_MEMBERSHIP 12
#define F_NODIRECT 62
#define cLOGOP cLOGOPx(PL_op)
#define CvFLAGS(sv) ((XPVCV*)MUTABLE_PTR(SvANY(sv)))->xcv_flags
#define NGX_HTTP_TEMPORARY_REDIRECT 307
#define __BEGIN_DECLS 
#define SvPV_flags_const_nolen(sv,flags) (SvPOK_nog(sv) ? SvPVX_const(sv) : (const char*) sv_2pv_flags(sv, 0, (flags|SV_CONST_RETURN)))
#define __va_copy(d,s) __builtin_va_copy(d,s)
#define CPU_SUBTYPE_HPPA_ALL ((cpu_subtype_t) 0)
#define CPU_SUBTYPE_MC68030 ((cpu_subtype_t) 1)
#define NGX_CMD_TERMINATE 4
#define PERL_ARGS_ASSERT_LEX_DISCARD_TO assert(ptr)
#define CMSG_DATA(cmsg) ((unsigned char *)(cmsg) + __DARWIN_ALIGN32(sizeof(struct cmsghdr)))
#define CPU_SUBTYPE_HPPA_7100 ((cpu_subtype_t) 0)
#define _SYS_TIME_H_ 
#define CPU_SUBTYPE_MC98601 ((cpu_subtype_t) 1)
#define IOPOL_STANDARD 5
#define PerlSock_getsockname(s,n,l) getsockname(s, n, l)
#define REENTRANT_PROTO_I_TSR 49
#define UTF8_GOT_NONCHAR UTF8_DISALLOW_NONCHAR
#define KERN_MEMORY_ERROR 10
#define btodb(bytes,devBlockSize) ((unsigned)(bytes) / devBlockSize)
#define CPU_SUBTYPE_MC68040 ((cpu_subtype_t) 2)
#define MS_KILLPAGES 0x0004
#define S_IWGRP 0000020
#define PCRE2_ERROR_INTERNAL_DUPMATCH (-65)
#define LOCAL_PEERTOKEN 0x006
#define PERL_ARGS_ASSERT_XS_HANDSHAKE assert(v_my_perl); assert(file)
#define safemalloc safesysmalloc
#define sv_peek(a) Perl_sv_peek(aTHX_ a)
#define PL_hash_rand_bits (vTHX->Ihash_rand_bits)
#define MACH_RCV_INVALID_DATA 0x10004008
#define UTF8_DISALLOW_SUPER 0x1000
#define WARN_EXPERIMENTAL__SIGNATURES 56
#define task_set_host_port(task,port) (task_set_special_port((task), TASK_HOST_PORT, (port)))
#define NGX_HTTP_INSUFFICIENT_STORAGE 507
#define PL_lastfd (vTHX->Ilastfd)
#define SSPUSHLONG(i) (PL_savestack[PL_savestack_ix++].any_long = (long)(i))
#define F_OK 0
#define PERL_ARGS_ASSERT_REG_TEMP_COPY assert(ssv)
#define _XOPEN_REALTIME_THREADS (-1)
#define DEBUG_i_TEST_ UNLIKELY(PL_debug & DEBUG_i_FLAG)
#define SYSTEM_CLOCK 0
#define host_get_dynamic_pager_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_DYNAMIC_PAGER_PORT, (port)))
#define PERL_ARGS_ASSERT_FOLDEQ assert(a); assert(b)
#define isSPACE_uni(c) isSPACE_uvchr(c)
#define PL_min_intro_pending (vTHX->Imin_intro_pending)
#define NGX_LOWLEVEL_BUFFERED 0x0f
#define EXC_CORPSE_NOTIFY 13
#define AUDIT_TRIGGER_INITIALIZE 7
#define isASCII_LC_utf8(p,e) isASCII_LC_utf8_safe(p, e)
#define CVf_WEAKOUTSIDE 0x0010
#define NGX_MODULE_V1_PADDING 0, 0, 0, 0, 0, 0, 0, 0
#define safesysmalloc Perl_safesysmalloc
#define packWARN3(a,b,c) ((a) | ((b)<<8) | ((c)<<16) )
#define PL_runops (vTHX->Irunops)
#define _INT64_T 
#define PCRE2_NOTEMPTY_ATSTART 0x00000008u
#define TIOCDRAIN _IO('t', 94)
#define PERL_ARGS_ASSERT_SAVE_DESTRUCTOR assert(p)
#define _NGX_EVENT_H_INCLUDED_ 
#define OS_NONNULL4 __attribute__((__nonnull__(4)))
#define PERL_ARGS_ASSERT_IS_STRICT_UTF8_STRING_LOCLEN assert(s)
#define host_get_atm_notification_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_ATM_NOTIFICATION_PORT, (port)))
#define PERL_ARGS_ASSERT_SAVE_PADSV_AND_MORTALIZE 
#define VM_NAMED_ENTRY_NULL ((vm_named_entry_t) 0)
#define OS_NONNULL5 __attribute__((__nonnull__(5)))
#define HAS_LLRINT 
#define ESHUTDOWN 58
#define ATTR_VOL_SETMASK 0x80002000
#define PL_vtbl_dbline PL_magic_vtables[want_vtbl_dbline]
#define EIGHT_BIT_UTF8_TO_NATIVE(HI,LO) ( __ASSERT_(UTF8_IS_DOWNGRADEABLE_START(HI)) __ASSERT_(UTF8_IS_CONTINUATION(LO)) LATIN1_TO_NATIVE(UTF8_ACCUMULATE(( NATIVE_UTF8_TO_I8(HI) & UTF_START_MASK(2)), (LO))))
#define RLIM_NLIMITS 9
#define isUPPER_L1(c) _generic_isCC(c, _CC_UPPER)
#define CvDYNFILE(cv) (CvFLAGS(cv) & CVf_DYNFILE)
#define MACH_VOUCHER_ATTR_SEND_PREPROCESS ((mach_voucher_attr_recipe_command_t)5)
#define OS_NONNULL7 __attribute__((__nonnull__(7)))
#define RXf_PMf_SINGLELINE (1U << (RXf_PMf_STD_PMMOD_SHIFT+1))
#define OS_NONNULL8 __attribute__((__nonnull__(8)))
#define OS_NONNULL9 __attribute__((__nonnull__(9)))
#define SvPOK_byte_nog(sv) ((SvFLAGS(sv) & (SVf_POK|SVf_UTF8|SVs_GMG)) == SVf_POK)
#define NGX_CORE_MODULE 0x45524F43
#define DEBUG_Xv_TEST (0)
#define __API_DEPRECATED_BEGIN_REP_GET_MACRO 
#define OP_TYPE_IS_OR_WAS(o,type) ( (o) && OP_TYPE_IS_OR_WAS_NN(o, type) )
#define IN6ADDR_INTFACELOCAL_ALLNODES_INIT {{{ 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01 }}}
#define VM_PROT_EXECUTE_ONLY (VM_PROT_EXECUTE|VM_PROT_STRIP_READ)
#define HS_GETAPIVERLEN(key) ((key) & HSm_APIVERLEN)
#define WARN_LOCALE 63
#define PCRE2_CONVERT_POSIX_BASIC 0x00000004u
#define F_SETOWN 6
#define xio_any xio_dirpu.xiou_any
#define KERN_DUMMY 33
#define isUPPER_LC_utf8_safe(p,e) _generic_LC_invlist_utf8_safe(isUPPER_LC, _CC_UPPER, p, e)
#define get_op_descs() Perl_get_op_descs(aTHX)
#define _RXf_PMf_SHIFT_COMPILETIME (RXf_PMf_STD_PMMOD_SHIFT+11)
#define __WATCHOS_3_0 30000
#define CALLREGEXEC(prog,stringarg,strend,strbeg,minend,sv,data,flags) RX_ENGINE(prog)->exec(aTHX_ (prog),(stringarg),(strend), (strbeg),(minend),(sv),(data),(flags))
#define __WATCHOS_3_2 30200
#define PERL_ARGS_ASSERT_DO_PMOP_DUMP assert(file)
#define CPU_TYPE_ARM ((cpu_type_t) 12)
#define MACH_PORT_DNREQUESTS_SIZE 3
#define PERL_ARGS_ASSERT_OP_UNSCOPE 
#define _NGX_ARRAY_H_INCLUDED_ 
#define AvREIFY_off(av) (SvFLAGS(av) &= ~SVpav_REIFY)
#define STATIC_ASSERT_DECL(COND) static_assert(COND, #COND)
#define PERL_ARGS_ASSERT_UTF8_HOP_BACK assert(s); assert(start)
#define _PATH_PWD_MKDB "/usr/sbin/pwd_mkdb"
#define SS_ADD_DPTR(p) ((ssp++)->any_dptr = (p))
#define uvuni_to_utf8(a,b) Perl_uvuni_to_utf8(aTHX_ a,b)
#define RX_UTF8(rx_sv) SvUTF8(rx_sv)
#define VM_VOLATILE_GROUP_0 (0 << VM_VOLATILE_GROUP_SHIFT)
#define VM_VOLATILE_GROUP_2 (2 << VM_VOLATILE_GROUP_SHIFT)
#define _UINTMAX_T 
#define VM_VOLATILE_GROUP_4 (4 << VM_VOLATILE_GROUP_SHIFT)
#define VM_VOLATILE_GROUP_5 (5 << VM_VOLATILE_GROUP_SHIFT)
#define VM_VOLATILE_GROUP_6 (6 << VM_VOLATILE_GROUP_SHIFT)
#define QUAD_IS___INT64 5
#define case_28_SBOX32(hash,state,key) 
#define IPV6_3542HOPOPTS 49
#define I_SYS_UN 
#define SvPADTMP(sv) (SvFLAGS(sv) & (SVs_PADTMP))
#define OS_CLOSED_ENUM(_name,_type,...) __OS_ENUM_C_FALLBACK(_name, _type, ## __VA_ARGS__) __OS_ENUM_ATTR_CLOSED
#define THREAD_EXTENDED_INFO 5
#define case_71_SBOX32(hash,state,key) 
#define EPWROFF 82
#define PERL_ARGS_ASSERT_SAVE_SHARED_PVREF assert(str)
#define MPG_FLAGS_NONE (0x00ull)
#define MACH_VM_MAX_ADDRESS ((mach_vm_offset_t) VM_MAX_PAGE_ADDRESS)
#define isIDFIRST_utf8_safe(p,e) _generic_func_utf8_safe(_CC_IDFIRST, _is_utf8_perl_idstart, (U8 *) (p), (U8 *) (e))
#define GETVAL 5
#define PerlIO_get_base(a) Perl_PerlIO_get_base(aTHX_ a)
#define PERL_ARGS_ASSERT_HV_RITER_P assert(hv)
#define __GCC_ASM_FLAG_OUTPUTS__ 1
#define MEM_SIZE_MAX ((MEM_SIZE)-1)
#define VM_MEMORY_REALLOC 6
#define SvIsCOW_off(sv) (SvFLAGS(sv) &= ~SVf_IsCOW)
#define PERL_ARGS_ASSERT_MAGIC_SETDBLINE assert(sv); assert(mg)
#define _CS_POSIX_V6_ILP32_OFF32_CFLAGS 2
#define __CAST_AWAY_QUALIFIER(variable,qualifier,type) (type) (long)(variable)
#define toTITLE_uvchr(c,s,l) to_uni_title(c,s,l)
#define RXf_PMf_EXTENDED (1U << (RXf_PMf_STD_PMMOD_SHIFT+3))
#define newSVpadname(pn) newSVpvn_utf8(PadnamePV(pn), PadnameLEN(pn), TRUE)
#define EV_ERROR 0x4000
#define PL_localizing (vTHX->Ilocalizing)
#define STATIC_ASSERT_STMT(COND) STMT_START { STATIC_ASSERT_DECL(COND); } STMT_END
#define SvNIOKp(sv) (SvFLAGS(sv) & (SVp_IOK|SVp_NOK))
#define SAVEt_I32_SMALL 13
#define PL_encoding ((SV *)NULL)
#define dSAVEDERRNO int saved_errno
#define CvSPECIAL(cv) (CvUNIQUE(cv) && SvFAKE(cv))
#define PERL_ARGS_ASSERT_SV_SET_UNDEF assert(sv)
#define isPRINT_LC_uvchr(c) _generic_LC_invlist_uvchr(isPRINT_LC, _CC_PRINT, c)
#define SAVEt_SV 44
#define PERL_ARGS_ASSERT_VWARNER assert(pat)
#define GvAVn(gv) (GvGP(gv)->gp_av ? GvGP(gv)->gp_av : GvGP(gv_AVadd(gv))->gp_av)
#define MNT_STRICTATIME 0x80000000
#define I_SYS_TYPES 
#define tcp6hdr tcphdr
#define case_105_SBOX32(hash,state,key) 
#define CvDYNFILE_on(cv) (CvFLAGS(cv) |= CVf_DYNFILE)
#define NGX_HTTP_MISDIRECTED_REQUEST 421
#define PerlIO_unread(a,b,c) Perl_PerlIO_unread(aTHX_ a,b,c)
#define gv_fetchmeth_pvn(a,b,c,d,e) Perl_gv_fetchmeth_pvn(aTHX_ a,b,c,d,e)
#define PERL_DTRACE_PROBE_FILE_LOADED(cv) 
#define DEBUG_J_FLAG 0x00080000
#define _CS_POSIX_V6_WIDTH_RESTRICTED_ENVS 14
#define HAS_FORK 
#define PERL_MAGIC_UTF8_CACHESIZE 2
#define NEWSV(x,len) newSV(len)
#define my_strlcat strlcat
#define MAXCOMLEN 16
#define COND_WAIT(c,m) STMT_START { int _eC_; if ((_eC_ = pthread_cond_wait((c), (m)))) Perl_croak_nocontext("panic: COND_WAIT (%d) [%s:%d]", _eC_, __FILE__, __LINE__); } STMT_END
#define MINCORE_COPIED 0x40
#define isBLANK_A(c) _generic_isCC_A(c, _CC_BLANK)
#define MAP_TRANSLATED_ALLOW_EXECUTE 0x20000
#define SELECT_MIN_BITS 32
#define OPpARG4_MASK 0x0f
#define __INT_LEAST16_TYPE__ short int
#define OP_IS_FILETEST(op) ((op) >= OP_FTRREAD && (op) <= OP_FTBINARY)
#define AQ_MAXBUFSZ 1048576
#define PERL_REGMATCH_SLAB_SLOTS ((4096 - 3 * sizeof (void*)) / sizeof(regmatch_state))
#define OS_WEAK_IMPORT __attribute__((__weak_import__))
#define OPpLVREF_ITER 0x08
#define OA_TARGET 8
#define HS_KEYp(interpsize,cxt,setxsubfn,popmark,apiverlen,xsverlen) (((interpsize) << 16) | ((xsverlen) > HS_XSVERLEN_MAX ? (Perl_croak_nocontext("panic: handshake overflow"), HS_XSVERLEN_MAX) : (xsverlen) << 8) | (cBOOL(setxsubfn) ? HSf_SETXSUBFN : 0) | (cBOOL(cxt) ? HSf_IMP_CXT : 0) | (cBOOL(popmark) ? HSf_POPMARK : 0) | ((apiverlen) > HS_APIVERLEN_MAX ? (Perl_croak_nocontext("panic: handshake overflow"), HS_APIVERLEN_MAX) : (apiverlen)))
#define PCRE2_CONFIG_NEWLINE 5
#define MEMORY_OBJECT_NULL ((memory_object_t) 0)
#define SETLOCALE_R_PROTO 0
#define KERN_INVALID_KC 55
#define PL_body_arenas (vTHX->Ibody_arenas)
#define HAS_C99 1
#define ATTR_CMN_GRPUUID 0x01000000
#define EAI_BADFLAGS 3
#define CRYPT_R_PROTO 0
#define SCNxLEAST16 SCNx16
#define __GCC_ATOMIC_LLONG_LOCK_FREE 2
#define HAS_LLRINTL 
#define _U_INT32_T 
#define PTR2ul(p) INT2PTR(unsigned long,p)
#define _POSIX_ARG_MAX 4096
#define PL_main_start (vTHX->Imain_start)
#define MADV_WILLNEED POSIX_MADV_WILLNEED
#define __OS_CONCAT(x,y) x ## y
#define BUS_ADRALN 1
#define sv_catpv_flags(a,b,c) Perl_sv_catpv_flags(aTHX_ a,b,c)
#define VM_MEMORY_OPENCL 67
#define SvOOK_offset(sv,offset) STMT_START { STATIC_ASSERT_STMT(sizeof(offset) == sizeof(STRLEN)); if (SvOOK(sv)) { (offset) = ((U8*)SvPVX_const(sv))[-1]; if (!(offset)) { Copy(SvPVX_const(sv) - 1 - sizeof(STRLEN), (U8*)&(offset), sizeof(STRLEN), U8); } } else { (offset) = 0; } } STMT_END
#define ATTR_DIR_VALIDMASK 0x0000003f
#define _BSD_I386__TYPES_H_ 
#define NGX_FILE_CREATE_OR_OPEN O_CREAT
#define SIOCSIFVLAN _IOW('i', 126, struct ifreq)
#define SCNx16 "hx"
#define CLOCK_MONOTONIC_RAW _CLOCK_MONOTONIC_RAW
#define PERL_OBJECT_THIS 
#define MACH_RCV_TRAILER_LABELS 8
#define EXC_I386_SGL 1
#define _SYS_MMAN_H_ 
#define F_TEST 3
#define HOST_VM_INFO 2
#define host_set_filecoordinationd_port(host,port) (host_set_special_port((host), HOST_FILECOORDINATIOND_PORT, (port)))
#define PERLDBf_NAMEANON 0x200
#define PERL_ARGS_ASSERT_HV_FILL assert(hv)
#define SCNxLEAST32 SCNx32
#define PCRE2_INFO_NAMETABLE 19
#define DOUBLENANBYTES 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff
#define DOUBLE_IS_VAX_D_FLOAT 10
#define PERL_ARGS_ASSERT_SV_SETREF_PV assert(rv)
#define HAS_TTYNAME_R 
#define sv_len_utf8(a) Perl_sv_len_utf8(aTHX_ a)
#define PERL_SEEN_HV_FUNC_H_ 
#define _POSIX_TIMEOUTS (-1)
#define Netdb_net_t in_addr_t
#define IPC_VOUCHER_ATTR_CONTROL_NULL ((ipc_voucher_attr_control_t) 0)
#define IN_LC_ALL_RUNTIME IN_LOCALE_RUNTIME
#define SCNx32 "x"
#define task_set_task_access_port(task,port) (task_set_special_port((task), TASK_ACCESS_PORT, (port)))
#define EOVERFLOW 84
#define S_IRUSR 0000400
#define ASCII_RESTRICT_PAT_MOD 'a'
#define CPU_SUBTYPE_MIPS_R2000a ((cpu_subtype_t) 4)
#define PERL_ARGS_ASSERT_SKIPSPACE_FLAGS assert(s)
#define sv_ref(a,b,c) Perl_sv_ref(aTHX_ a,b,c)
#define DBL_MAX __DBL_MAX__
#define UCHAR_MAX (SCHAR_MAX * 2 + 1)
#define case_45_SBOX32(hash,state,key) 
#define _SYS_SYSLIMITS_H_ 
#define __IPHONE_4_0 40000
#define __IPHONE_4_1 40100
#define __IPHONE_4_2 40200
#define __IPHONE_4_3 40300
#define isPSXSPC_L1(c) isSPACE_L1(c)
#define tryAMAGICunDEREF(meth) STMT_START { sv = amagic_deref_call(*sp, CAT2(meth,_amg)); SPAGAIN; } STMT_END
#define PadnameLVALUE(pn) (PadnameFLAGS(pn) & PADNAMEt_LVALUE)
#define MACH_SEND_INVALID_TYPE 0x1000000f
#define I_SYSUIO 
#define __MISMATCH_TAGS_POP 
#define IPV6_ADDR_MC_FLAGS_PREFIX 0x20
#define PRIMASK 0x0ff
#define FSOPT_NOINMEMUPDATE 0x00000002
#define PERL_ARGS_ASSERT_GET_PROP_DEFINITION 
#define PERL_ARGS_ASSERT_WARN_NOCONTEXT assert(pat)
#define SCNxLEAST64 SCNx64
#define RX_BUFF_IDX_PREMATCH -2
#define NGX_INVALID_ARRAY_INDEX 0x80000000
#define OPf_WANT_SCALAR 2
#define RXapif_CLEAR 0x0008
#define isALPHA_LC_utf8_safe(p,e) _generic_LC_invlist_utf8_safe(isALPHA_LC, _CC_ALPHA, p, e)
#define PL_wcrtomb_ps (vTHX->Iwcrtomb_ps)
#define KERN_PS_STRINGS 34
#define __DARWIN_64_BIT_INO_T 1
#define _MACH_THREAD_INFO_H_ 
#define SvIOK_off(sv) (SvFLAGS(sv) &= ~(SVf_IOK|SVp_IOK|SVf_IVisUV))
#define P_NOREMOTEHANG 0x80000000
#define IP_DUMMYNET_DEL 61
#define XPUSHmortal XPUSHs(sv_newmortal())
#define HAS_SEM 
#define SCNx64 __SCN_64_LENGTH_MODIFIER__ "x"
#define _CC_mask_A(classnum) (_CC_mask(classnum) | _CC_mask(_CC_ASCII))
#define CLONEf_COPY_STACKS 1
#define KERN_OSRELDATE 26
#define SvSetSV_nosteal_and(dst,src,finally) STMT_START { if (LIKELY((dst) != (src))) { sv_setsv_flags(dst, src, SV_GMAGIC | SV_NOSTEAL | SV_DO_COW_SVSETSV); finally; } } STMT_END
#define NGX_USE_LEVEL_EVENT 0x00000001
#define OPpMULTICONCAT_FAKE 0x20
#define SLIST_FOREACH_PREVPTR(var,varp,head,field) for ((varp) = &SLIST_FIRST((head)); ((var) = *(varp)) != NULL; (varp) = &SLIST_NEXT((var), field))
#define SETERRNO(errcode,vmserrcode) (errno = (errcode))
#define sv_vcatpvf(a,b,c) Perl_sv_vcatpvf(aTHX_ a,b,c)
#define GvNAMELEN(gv) GvNAMELEN_get(gv)
#define ngx_tm_wday tm_wday
#define CxITERVAR(c) (CxPADLOOP(c) ? (c)->blk_loop.itervar_u.svp : ((c)->cx_type & CXp_FOR_GV) ? &GvSV((c)->blk_loop.itervar_u.gv) : (SV **)&(c)->blk_loop.itervar_u.gv)
#define cx_popformat(a) Perl_cx_popformat(aTHX_ a)
#define mPUSHi(i) sv_setiv(PUSHmortal, (IV)(i))
#define mPUSHn(n) sv_setnv(PUSHmortal, (NV)(n))
#define mPUSHs(s) PUSHs(sv_2mortal(s))
#define mPUSHu(u) sv_setuv(PUSHmortal, (UV)(u))
#define ngx_shutdown_socket_n "shutdown()"
#define _POSIX2_EQUIV_CLASS_MAX 2
#define W_OK (1<<1)
#define ENODEV 19
#define _POSIX2_COLL_WEIGHTS_MAX 2
#define NGX_HTTP_SSI_NO_ENCODING 0
#define pMY_CXT my_cxt_t *my_cxtp
#define isVERTWS_uni(c) isVERTWS_uvchr(c)
#define MAC_OS_VERSION_11_0 110000
#define KIPC_MAX_LINKHDR 4
#define DEBUG_A_FLAG 0x00400000
#define HAS_LLROUND 
#define HAS_CHROOT 
#define MACH_MSG_TIMEOUT_NONE ((mach_msg_timeout_t) 0)
#define TTYNAME_R_PROTO REENTRANT_PROTO_I_IBW
#define IP_RETOPTS 8
#define EPROTO 100
#define HAS_SHM 
#define sv_setpvf Perl_sv_setpvf_nocontext
#define NGX_HTTP_MAX_URI_CHANGES 10
#define MADV_ZERO_WIRED_PAGES 6
#define sv_setpvs(sv,str) Perl_sv_setpvn(aTHX_ sv, STR_WITH_LEN(str))
#define PERL_ARGS_ASSERT_NEWPMOP 
#define _EXECUTE_OK (1<<11)
#define PERL_ARGS_ASSERT_CALL_ARGV assert(sub_name); assert(argv)
#define PRIdLEAST32 PRId32
#define PERL_ARGS_ASSERT_GV_FETCHMETHOD_PVN_FLAGS assert(stash); assert(name)
#define DEBUG_D_TEST (0)
#define _REXT_OK (1<<17)
#define KERN_INVALID_LEDGER 33
#define __PTHREAD_SIZE__ 8176
#define __API_AVAILABLE_END 
#define VM_MEMORY_COREGRAPHICS_MISC VM_MEMORY_COREGRAPHICS
#define UTF8_GOT_SHORT UTF8_ALLOW_SHORT
#define IS_PADGV(v) (v && isGV(v))
#define BOM_UTF8 "\xEF\xBB\xBF"
#define INT_MAX __INT_MAX__
#define ULLONG_MAX (LLONG_MAX * 2ULL + 1ULL)
#define ngx_socket_n "socket()"
#define POLL_OUT 2
#define CTL_UNSPEC 0
#define ENV_LOCALE_READ_LOCK ENV_LOCALE_LOCK
#define THREAD_FLAVOR_INSPECT 2
#define _POSIX_MONOTONIC_CLOCK (-1)
#define CxLABEL(c) (0 + CopLABEL((c)->blk_oldcop))
#define save_pushi32ptr(a,b,c) Perl_save_pushi32ptr(aTHX_ a,b,c)
#define newSV_type(a) Perl_newSV_type(aTHX_ a)
#define PadnameTYPE_set(pn,s) (PadnameTYPE(pn) = (s))
#define DOUBLE_IS_CRAY_SINGLE_64_BIT 14
#define _SC_2_PBS_ACCOUNTING 60
#define PERL_ARGS_ASSERT_MAGIC_FREEARYLEN_P assert(sv); assert(mg)
#define PERL_ARGS_ASSERT_PAD_FIXUP_INNER_ANONS assert(padlist); assert(old_cv); assert(new_cv)
#define dPOPss SV *sv = POPs
#define SSGROW(need) if (UNLIKELY(PL_savestack_ix + (I32)(need) > PL_savestack_max)) savestack_grow_cnt(need)
#define DBL_MIN __DBL_MIN__
#define __UINT_FAST32_MAX__ 0xffffffffU
#define PERL_ARGS_ASSERT_HV_PUSHKV assert(hv)
#define __INT_FAST8_TYPE__ signed char
#define DEBUG_o_FLAG 0x00000010
#define VM_SYNC_INVALIDATE ((vm_sync_t) 0x04)
#define CPU_SUBTYPE_VAX8500 ((cpu_subtype_t) 8)
#define ngx_recv ngx_io.recv
#define SvTYPE(sv) ((svtype)((sv)->sv_flags & SVTYPEMASK))
#define sv_mortalcopy(sv) Perl_sv_mortalcopy_flags(aTHX_ sv, SV_GMAGIC|SV_DO_COW_SVSETSV)
#define __API_DEPRECATED_WITH_REPLACEMENT_END 
#define PERL_ARGS_ASSERT_GET_CV assert(name)
#define FP_RND_UP 2
#define PCRE2_EXTENDED 0x00000080u
#define IP_RECVOPTS 5
#define HAS_USLEEP 
#define my_fork Perl_my_fork
#define str_to_version(a) Perl_str_to_version(aTHX_ a)
#define LONG_DOUBLE_IS_DOUBLEDOUBLE_128_BIT_BE_BE 6
#define CvNODEBUG_off(cv) (CvFLAGS(cv) &= ~CVf_NODEBUG)
#define SvPV_nomg(sv,len) SvPV_flags(sv, len, 0)
#define A_SETPMASK 25
#define PERL_ARGS_ASSERT_NEWSVPVN_FLAGS 
#define SSPOPDXPTR (PL_savestack[--PL_savestack_ix].any_dxptr)
#define case_62_SBOX32(hash,state,key) 
#define HAS_GETADDRINFO 
#define NGX_HAVE_F_NOCACHE 1
#define Signal_t void
#define SvRV_set(sv,val) STMT_START { assert(PL_valid_types_RV[SvTYPE(sv) & SVt_MASK]); assert(!isGV_with_GP(sv)); assert(!(SvTYPE(sv) == SVt_PVIO && !(IoFLAGS(sv) & IOf_FAKE_DIRP))); ((sv)->sv_u.svu_rv = (val)); } STMT_END
#define _SC_HOST_NAME_MAX 72
#define VM_FLAGS_RANDOM_ADDR 0x0008
#define MACH_EXCEPTION_ERRORS 0x40000000
#define IP_MULTICAST_TTL 10
#define _PC_SYNC_IO 25
#define dMY_CXT_INTERP(my_perl) my_cxt_t *my_cxtp = (my_cxt_t *)(my_perl)->Imy_cxt_list[MY_CXT_INDEX]
#define SIGWINCH 28
#define GLOB_MAGCHAR 0x0100
#define cxstack (PL_curstackinfo->si_cxstack)
#define PL_peepp (vTHX->Ipeepp)
#define PCRE2_AUTO_CALLOUT 0x00000004u
#define INCMARK STMT_START { DEBUG_s(DEBUG_v(PerlIO_printf(Perl_debug_log, "MARK inc  %p %" IVdf "\n", (PL_markstack_ptr+1), (IV)*(PL_markstack_ptr+1)))); PL_markstack_ptr++; } STMT_END
#define AF_COIP 20
#define HEK_WASUTF8_on(hek) (HEK_FLAGS(hek) |= HVhek_WASUTF8)
#define _SC_SEM_NSEMS_MAX 49
#define NGX_HTTP_PARSE_INVALID_09_METHOD 13
#define NGX_PEER_KEEPALIVE 1
#define HeKEY_sv(he) (*(SV**)HeKEY(he))
#define PERL_ARGS_ASSERT_SV_PVN_NOMG assert(sv)
#define __SNBF 0x0002
#define PERL_ARGS_ASSERT_GET_HV assert(name)
#define KEVENT_FLAG_IMMEDIATE 0x000001
#define NGX_ESCAPE_MAIL_AUTH 6
#define PCRE2_NEWLINE_CRLF 3
#define my_failure_exit() Perl_my_failure_exit(aTHX)
#define PL_in_some_fold (vTHX->Iin_some_fold)
#define _CS_XBS5_ILP32_OFF32_LIBS 22
#define HOST_VM_INFO64_REV0_COUNT ((mach_msg_type_number_t) (HOST_VM_INFO64_REV1_COUNT - 14))
#define PERL_ARGS_ASSERT_UTF8_HOP_SAFE assert(s); assert(start); assert(end)
#define CPUSUBFAMILY_ARM_HS 4
#define FSOPT_PACK_INVAL_ATTRS 0x00000008
#define IPV6PORT_RESERVEDMAX (IPV6PORT_RESERVED-1)
#define TAILQ_SWAP(head1,head2,type,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH do { struct type *swap_first = (head1)->tqh_first; struct type **swap_last = (head1)->tqh_last; (head1)->tqh_first = (head2)->tqh_first; (head1)->tqh_last = (head2)->tqh_last; (head2)->tqh_first = swap_first; (head2)->tqh_last = swap_last; if ((swap_first = (head1)->tqh_first) != NULL) swap_first->field.tqe_prev = &(head1)->tqh_first; else (head1)->tqh_last = &(head1)->tqh_first; if ((swap_first = (head2)->tqh_first) != NULL) swap_first->field.tqe_prev = &(head2)->tqh_first; else (head2)->tqh_last = &(head2)->tqh_first; } while (0) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define UTF8_GOT_EMPTY UTF8_ALLOW_EMPTY
#define P_DIRTY_BUSY 0x00000040
#define MACH_MSG_TYPE_MOVE_SEND_ONCE 18
#define MACH_VOUCHER_ATTR_KEY_BANK ((mach_voucher_attr_key_t)3)
#define PERL_ARGS_ASSERT_IS_STRICT_UTF8_STRING 
#define CxEVALBLOCK(c) (((c)->cx_type & (CXTYPEMASK|CXp_EVALBLOCK)) == (CXt_EVAL|CXp_EVALBLOCK))
#define toFOLD_uni(c,s,l) toFOLD_uvchr(c,s,l)
#define sv_rvweaken(a) Perl_sv_rvweaken(aTHX_ a)
#define SS_ADD_PTR(p) ((ssp++)->any_ptr = (void*)(p))
#define SvPAD_STATE PadnameIsSTATE
#define sv_inc_nomg(a) Perl_sv_inc_nomg(aTHX_ a)
#define IS_NUMBER_TRAILING 0x40
#define _CC_BLANK 11
#define VQ_VERYLOWDISK 0x0200
#define DEFSV GvSVn(PL_defgv)
#define REXEC_SCREAM 0x04
#define __IPHONE_12_0 120000
#define __IPHONE_12_2 120200
#define __IPHONE_12_3 120300
#define __IPHONE_12_4 120400
#define TCP_KEEPALIVE 0x10
#define sv_setpvn(a,b,c) Perl_sv_setpvn(aTHX_ a,b,c)
#define WARN_NEWLINE 9
#define INIT_THREADS NOOP
#define RXp_MINLEN(prog) (prog->minlen)
#define ngx_file_info_n "stat()"
#define Perl_isnan(x) isnan(x)
#define is_invariant_string(s,len) is_utf8_invariant_string(s, len)
#define SSPUSHPTR(p) (PL_savestack[PL_savestack_ix++].any_ptr = (void*)(p))
#define SCNuPTR "lu"
#define PERL_ARGS_ASSERT_MY_CLEARENV 
#define E2BIG 7
#define POLL_PRI 5
#define CPU_SUBTYPE_MC88100 ((cpu_subtype_t) 1)
#define toFOLD_utf8_safe(p,e,s,l) _toFOLD_utf8_flags(p,e,s,l, FOLD_FLAGS_FULL)
#define MUTABLE_CV(p) ((CV *)MUTABLE_PTR(p))
#define _MACH_VM_PURGABLE_H_ 
#define SvREADONLY_off(sv) (SvFLAGS(sv) &= ~SVf_READONLY)
#define __PTHREAD_COND_SIZE__ 40
#define save_I8(a) Perl_save_I8(aTHX_ a)
#define MATTR_VAL_CACHE_SYNC 9
#define W_STOPCODE(sig) ((sig) << 8 | _WSTOPPED)
#define newSVpvf_nocontext Perl_newSVpvf_nocontext
#define case_122_SBOX32(hash,state,key) 
#define SvPCS_IMPORTED_on(sv) (SvFLAGS(sv) |= (SVf_ROK|SVprv_PCS_IMPORTED))
#define PCRE2_ERROR_CODE_POINT_TOO_BIG 134
#define INT_MIN (-INT_MAX - 1)
#define CPU_SUBTYPE_MC88110 ((cpu_subtype_t) 2)
#define isALNUM_utf8(p,e) isWORDCHAR_utf8(p,e)
#define __attribute__always_inline__ __attribute__((always_inline))
#define IPV6CTL_DEFMCASTHLIM 18
#define DEBUG_ZAPHOD32_HASH 0
#define PRIo32 "o"
#define PL_curstash (vTHX->Icurstash)
#define NV_MAX_10_EXP DBL_MAX_10_EXP
#define __UINT_LEAST32_MAX__ 0xffffffffU
#define is_FOLDS_TO_MULTI_utf8(s) ( ( 0xC3 == ((const U8*)s)[0] ) ? ( ( 0x9F == ((const U8*)s)[1] ) ? 2 : 0 ) : ( 0xC4 == ((const U8*)s)[0] || 0xC7 == ((const U8*)s)[0] ) ? ( ( 0xB0 == ((const U8*)s)[1] ) ? 2 : 0 ) : ( 0xC5 == ((const U8*)s)[0] ) ? ( ( 0x89 == ((const U8*)s)[1] ) ? 2 : 0 ) : ( 0xCE == ((const U8*)s)[0] ) ? ( ( ( ((const U8*)s)[1] & 0xDF ) == 0x90 ) ? 2 : 0 ) : ( 0xD6 == ((const U8*)s)[0] ) ? ( ( 0x87 == ((const U8*)s)[1] ) ? 2 : 0 ) : ( 0xE1 == ((const U8*)s)[0] ) ? ( ( 0xBA == ((const U8*)s)[1] ) ? ( ( inRANGE_helper_(U8, ((const U8*)s)[2], 0x96, 0x9A) || 0x9E == ((const U8*)s)[2] ) ? 3 : 0 ) : ( 0xBD == ((const U8*)s)[1] ) ? ( ( ( ((const U8*)s)[2] & 0xF9 ) == 0x90 ) ? 3 : 0 ) : ( 0xBE == ((const U8*)s)[1] ) ? ( ( inRANGE_helper_(U8, ((const U8*)s)[2], 0x80, 0xAF) || inRANGE_helper_(U8, ((const U8*)s)[2], 0xB2, 0xB4) || inRANGE_helper_(U8, ((const U8*)s)[2], 0xB6, 0xB7) || 0xBC == ((const U8*)s)[2] ) ? 3 : 0 ) : ( ( 0xBF == ((const U8*)s)[1] ) && ( ( ( ((const U8*)s)[2] & 0xCA ) == 0x82 ) || ( ( ((const U8*)s)[2] & 0xF7 ) == 0x84 ) || ((const U8*)s)[2] == 0xA4 || ( ( ((const U8*)s)[2] & 0xF7 ) == 0xB4 ) ) ) ? 3 : 0 ): ( ( ( 0xEF == ((const U8*)s)[0] ) && ( 0xAC == ((const U8*)s)[1] ) ) && ( inRANGE_helper_(U8, ((const U8*)s)[2], 0x80, 0x86) || inRANGE_helper_(U8, ((const U8*)s)[2], 0x93, 0x97) ) ) ? 3 : 0 )
#define I_SYS_WAIT 
#define PerlSock_send(s,b,l,f) send(s, b, l, f)
#define _PC_REC_XFER_ALIGN 23
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define OPpARG1_MASK 0x01
#define RXf_PMf_COMPILETIME (RXf_PMf_MULTILINE|RXf_PMf_SINGLELINE|RXf_PMf_FOLD|RXf_PMf_EXTENDED|RXf_PMf_EXTENDED_MORE|RXf_PMf_KEEPCOPY|RXf_PMf_NOCAPTURE|RXf_PMf_CHARSET|RXf_PMf_STRICT)
#define SIG_ATOMIC_MIN INT32_MIN
#define isOCTAL_L1(c) isOCTAL_A(c)
#define cGVOPx_gv(o) ((GV*)PAD_SVl(cPADOPx(o)->op_padix))
#define NGX_SIG_ATOMIC_T_SIZE 4
#define KERN_SUCCESS 0
#define PERL_ARGS_ASSERT_AV_POP assert(av)
#define U8SIZE 1
#define IP_DUMMYNET_CONFIGURE 60
#define PERL_ARGS_ASSERT_PAD_TIDY 
#define PadARRAY(pad) AvARRAY(pad)
#define __INT_LEAST8_TYPE__ signed char
#define NGX_LOG_DEBUG_HTTP 0x100
#define MACH_RCV_INVALID_NOTIFY 0x10004007
#define VQ_ASSIST 0x0040
#define isDIGIT_LC_utf8(p,e) isDIGIT_LC_utf8_safe(p, e)
#define REENTRANT_PROTO_I_CSBWR 18
#define ngx_queue_init(q) (q)->prev = q; (q)->next = q
#define USER_DATA_SELECTOR 0x001f
#define UTF8_GOT_CONTINUATION UTF8_ALLOW_CONTINUATION
#define PF_NETBIOS AF_NETBIOS
#define isPUNCT_uni(c) isPUNCT_uvchr(c)
#define ENOTDIR 20
#define SO_PEERLABEL 0x1011
#define RXf_PMf_SPLIT (1U<<(RXf_PMf_STD_PMMOD_SHIFT+11))
#define NVMANTBITS 52
#define PERL_ARGS_ASSERT_SV_DEC_NOMG 
#define Perl_asin asin
#define PCRE2_FIRSTLINE 0x00000100u
#define toFOLD_utf8(p,e,s,l) toFOLD_utf8_safe(p,e,s,l)
#define __INT_FAST8_MAX__ 0x7f
#define case_36_SBOX32(hash,state,key) 
#define CPPMINUS "-"
#define KERN_ARGMAX 8
#define __TVOS_13_0 130000
#define HAS_EXP2 
#define PCRE2_INFO_JCHANGED 9
#define MACH_SEND_MSG 0x00000001
#define PCRE2_NEWLINE_LF 2
#define PRIuFAST8 PRIu8
#define ECONNRESET 54
#define HAS_TZNAME 
#define PAD_RESTORE_LOCAL(opad) assert(!opad || !SvIS_FREED(opad)); PL_comppad = opad; PL_curpad = PL_comppad ? AvARRAY(PL_comppad) : NULL; DEBUG_Xv(PerlIO_printf(Perl_debug_log, "Pad 0x%" UVxf "[0x%" UVxf "] restore_local\n", PTR2UV(PL_comppad), PTR2UV(PL_curpad)));
#define LONG_DOUBLE_IS_DOUBLEDOUBLE_128_BIT_BE_LE 8
#define RLIM_SAVED_MAX RLIM_INFINITY
#define PERL_MAGIC_arylen '#'
#define REENTRANT_PROTO_I_ID 30
#define is_THREE_CHAR_FOLD_HEAD_latin1_safe(s,e) ( ((e)-(s) > 1) ? ( ( ( ( ((const U8*)s)[0] & 0xDF ) == 'A' ) || ( ( ((const U8*)s)[0] & 0xDE ) == 'H' ) || ( ( ((const U8*)s)[0] & 0xDF ) == 'J' ) || ( ( ((const U8*)s)[0] & 0xDB ) == 'S' ) || ( ( ((const U8*)s)[0] & 0xDF ) == 'T' ) || ( ( ((const U8*)s)[0] & 0xDF ) == 'Y' ) ) ? 1 : ( ( ((const U8*)s)[0] & 0xDF ) == 'F' ) ? ( ( ( ((const U8*)s)[1] & 0xDF ) == 'F' ) ? 2 : 1 ) : 0 ) : ((e)-(s) > 0) ? ( ( ( ((const U8*)s)[0] & 0xDF ) == 'A' ) || ( ( ((const U8*)s)[0] & 0xDF ) == 'F' ) || ( ( ((const U8*)s)[0] & 0xDE ) == 'H' ) || ( ( ((const U8*)s)[0] & 0xDF ) == 'J' ) || ( ( ((const U8*)s)[0] & 0xDB ) == 'S' ) || ( ( ((const U8*)s)[0] & 0xDF ) == 'T' ) || ( ( ((const U8*)s)[0] & 0xDF ) == 'Y' ) ): 0 )
#define PerlProc__exit(s) _exit((s))
#define ENV_LOCALE_LOCK ENV_LOCK
#define _SYS_SEM_H_ 
#define OPpOFFBYONE 0x80
#define PERL_ARGS_ASSERT_UVUNI_TO_UTF8_FLAGS assert(d)
#define cx_pushloop_for(a,b,c) Perl_cx_pushloop_for(aTHX_ a,b,c)
#define MACH_PORT_SRIGHTS_NONE 0
#define NGX_USE_RTSIG_EVENT 0x00000080
#define SvPV_nomg_const_nolen(sv) SvPV_flags_const_nolen(sv, 0)
#define die Perl_die_nocontext
#define ENXIO 6
#define reginitcolors() Perl_reginitcolors(aTHX)
#define _SC_THREAD_CPUTIME 84
#define _PC_EXTENDED_SECURITY_NP 13
#define SvTAINTED(sv) (SvMAGICAL(sv) && sv_tainted(sv))
#define KERN_SPECULATIVE_READS 64
#define __attribute__nonnull__(a) __attribute__((nonnull(a)))
#define IPV6_RTHDR_LOOSE 0
#define SvREFCNT_inc_void_NN(sv) (void)(++SvREFCNT(MUTABLE_SV(sv)))
#define __TVOS_13_4 130400
#define NET_SERVICE_TYPE_OAM 7
#define __FLT64_HAS_QUIET_NAN__ 1
#define isCHARNAME_CONT(c) _generic_isCC(c, _CC_CHARNAME_CONT)
#define AUDIT_GROUP 0x0080
#define _SECURE__STDIO_H_ 
#define HAS_GETLOGIN_R 
#define LDBL_EPSILON __LDBL_EPSILON__
#define RXf_SKIPWHITE (1U<<(RXf_BASE_SHIFT+15))
#define CTLTYPE_QUAD 4
#define DETACH(t) STMT_START { int _eC_; if ((_eC_ = pthread_detach((t)->self))) { MUTEX_UNLOCK(&(t)->mutex); Perl_croak_nocontext("panic: DETACH (%d) [%s:%d]", _eC_, __FILE__, __LINE__); } } STMT_END
#define IOCBASECMD(x) ((x) & ~(IOCPARM_MASK << 16))
#define ATTR_CMN_CHGTIME 0x00000800
#define ngx_recv_chain ngx_io.recv_chain
#define HAS_GETCWD 
#define SSNEW(size) Perl_save_alloc(aTHX_ (size), 0)
#define PERL_ARGS_ASSERT_SV_USEPVN assert(sv)
#define NGX_FILE_NONBLOCK O_NONBLOCK
#define NGX_INT64_LEN (sizeof("-9223372036854775808") - 1)
#define NGX_HTTP_LOC_CONF_OFFSET offsetof(ngx_http_conf_ctx_t, loc_conf)
#define GvIMPORTED_HV_on(gv) (GvFLAGS(gv) |= GVf_IMPORTED_HV)
#define NGX_HTTP_ACCEPTED 202
#define Shmat_t void *
#define HAS_SQRTL 
#define L_XTND SEEK_END
#define HAS_STRTOD_L 
#define DEBUG_Uv_TEST (0)
#define X86_DEBUG_STATE32_COUNT x86_DEBUG_STATE32_COUNT
#define UTF8fARG(u,l,p) (int)cBOOL(u), (UV)(l), (void*)(p)
#define RLIMIT_FOOTPRINT_INTERVAL 0x4
#define IPPROTO_WBEXPAK 79
#define HeSVKEY(he) ((HeKEY(he) && HeKLEN(he) == HEf_SVKEY) ? HeKEY_sv(he) : NULL)
#define LATIN_SMALL_LETTER_SHARP_S LATIN_SMALL_LETTER_SHARP_S_NATIVE
#define PERL_UTIL_H_ 
#define POLICY_FIFO_BASE_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_fifo_base)/sizeof(integer_t)))
#define __DARWIN_MAXPATHLEN 1024
#define ___POSIX_C_DEPRECATED_STARTING_199209L 
#define _XLOCALE__CTYPE_H_ 
#define KEV_DL_LINK_OFF 12
#define NewOpSz(m,var,size) (var = (OP *) Perl_Slab_Alloc(aTHX_ size))
#define TASK_VM_INFO_PURGEABLE 23
#define PL_InBitmap (vTHX->IInBitmap)
#define FAPPEND O_APPEND
#define TIOCPKT_FLUSHREAD 0x01
#define sv_setpvn_mg(a,b,c) Perl_sv_setpvn_mg(aTHX_ a,b,c)
#define BIT_DIGITS(N) (((N)*146)/485 + 1)
#define KEV_DL_IF_DETACHED 11
#define PERL_ARGS_ASSERT_DEBSTACKPTRS 
#define PERL_STRLEN_EXPAND_SHIFT 2
#define SAVEt_I16 12
#define TTCP_CLIENT_SND_WND 4096
#define PL_Dir (vTHX->IDir)
#define PMf_RETAINT (1U<<(PMf_BASE_SHIFT+4))
#define TASK_KERNELMEMORY_INFO_COUNT ((mach_msg_type_number_t) (sizeof (task_kernelmemory_info_data_t) / sizeof (natural_t)))
#define CopFILE(c) ((c)->cop_file)
#define PERL_ARGS_ASSERT_SAVE_HDELETE assert(hv); assert(keysv)
#define __LDBL_MANT_DIG__ 64
#define PCRE2_INFO_FIRSTBITMAP 7
#define SVfARG(p) ((void*)(p))
#define i386_FLOAT_STATE 2
#define HOST_MAX_SPECIAL_KERNEL_PORT 7
#define PERLDBf_SAVESRC_NOSUBS 0x800
#define __PTHREAD_ATTR_SIZE__ 56
#define SvTRUE_nomg_NN(sv) SvTRUE_common(sv, TRUE)
#define HOST_AUTOMOUNTD_PORT (4 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define PERL_HASH_USE_SBOX32_ALSO 1
#define RX_SUBLEN(rx_sv) (ReANY(rx_sv)->sublen)
#define EVFILT_WRITE (-2)
#define __DARWIN_ONLY_64_BIT_INO_T 0
#define __FLT64_HAS_INFINITY__ 1
#define ngx_socket_errno errno
#define host_get_closured_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_CLOSURED_PORT, (port)))
#define _MACH_MEMORY_OBJECT_TYPES_H_ 
#define LOCALE_TERM_POSIX_2008_ STMT_START { if (PL_C_locale_obj) { uselocale(LC_GLOBAL_LOCALE); freelocale(PL_C_locale_obj); PL_C_locale_obj = (locale_t) NULL; } } STMT_END
#define isGRAPH_utf8(p,e) isGRAPH_utf8_safe(p, e)
#define HAS_GETNETBYADDR 
#define _is_utf8_perl_idstart(a,b) Perl__is_utf8_perl_idstart(aTHX_ a,b)
#define POLL_HUP 6
#define VM_INHERIT_NONE ((vm_inherit_t) 2)
#define A_SETKAUDIT 30
#define SvUV(sv) (SvUOK_nog(sv) ? SvUVX(sv) : sv_2uv(sv))
#define OP_TYPE_ISNT(o,type) ((o) && (o)->op_type != (type))
#define __DARWIN_OSSwapInt16(x) ((__uint16_t)(__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt16(x) : _OSSwapInt16(x)))
#define pTHX_FORMAT "Perl interpreter: 0x%p"
#define KERN_CLASSICHANDLER KERN_EXEC
#define RLIMIT_NOFILE 8
#define PL_DBcontrol (vTHX->IDBcontrol)
#define YYSTYPE_IS_TRIVIAL 1
#define MACH_PORT_TYPE_PORT_SET MACH_PORT_TYPE(MACH_PORT_RIGHT_PORT_SET)
#define WARN_DEBUGGING 22
#define PERL_ARGS_ASSERT_GV_EFULLNAME assert(sv); assert(gv)
#define PERL_ARGS_ASSERT_SCAN_HEX assert(start); assert(retlen)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_3(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_4(x) x
#define _STRUCT_X86_PAGEIN_STATE struct __x86_pagein_state
#define my_exit(a) Perl_my_exit(aTHX_ a)
#define newPADOP(a,b,c) Perl_newPADOP(aTHX_ a,b,c)
#define _XOPEN_REALTIME (-1)
#define WARN_SUBSTR 27
#define ROTL32(x,r) (((U32)(x) << (r)) | ((U32)(x) >> (32 - (r))))
#define av_top_index_skip_len_mg(av) (__ASSERT_(SvTYPE(av) == SVt_PVAV) AvFILLp(av))
#define PERL_ARGS_ASSERT_REPORT_WRONGWAY_FH 
#define THREAD_MAX_SPECIAL_PORT THREAD_READ_PORT
#define MEMORY_OBJECT_TERMINATE_IDLE 0x1
#define isALNUM_LC_utf8(p,e) isWORDCHAR_LC_utf8(p,e)
#define dump_eval() Perl_dump_eval(aTHX)
#define KEVENT_FLAG_ERROR_EVENTS 0x000002
#define FILENAME_MAX 1024
#define MACH_VOUCHER_ATTR_AUTO_REDEEM ((mach_voucher_attr_recipe_command_t)4)
#define TAILQ_INSERT_HEAD(head,elm,field) do { TAILQ_CHECK_HEAD(head, field); if ((TAILQ_NEXT((elm), field) = TAILQ_FIRST((head))) != NULL) TAILQ_FIRST((head))->field.tqe_prev = &TAILQ_NEXT((elm), field); else (head)->tqh_last = &TAILQ_NEXT((elm), field); TAILQ_FIRST((head)) = (elm); (elm)->field.tqe_prev = &TAILQ_FIRST((head)); QMD_TRACE_HEAD(head); QMD_TRACE_ELEM(&(elm)->field); } while (0)
#define NOTE_TRIGGER 0x01000000
#define OS_INLINE static __inline__
#define HAS_TGAMMA 
#define TASK_BASIC_INFO_64 5
#define save_item(a) Perl_save_item(aTHX_ a)
#define SONPX_SETOPTSHUT 0x000000001
#define __DARWIN_OSSwapInt32(x) (__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt32(x) : _OSSwapInt32(x))
#define A_OLDGETQCTRL 6
#define PERL_UQUAD_MAX (~(UV)0)
#define is_c9strict_utf8_string_loclen Perl_is_c9strict_utf8_string_loclen
#define PERL_ARGS_ASSERT_CREATE_EVAL_SCOPE 
#define ngx_tm_min_t int
#define _generic_LC(c,utf8_locale_classnum,non_utf8_func) _generic_LC_base(c,utf8_locale_classnum, non_utf8_func( (_LC_CAST) (c)))
#define MACH_RCV_HEADER_ERROR 0x1000400b
#define _SYS__PTHREAD_TYPES_H_ 
#define NOTE_EXITSTATUS 0x04000000
#define NGX_HTTP_REQUEST_HEADER_TOO_LARGE 494
#define _NGX_HTTP_SSI_FILTER_H_INCLUDED_ 
#define ngx_http_clear_etag(r) if (r->headers_out.etag) { r->headers_out.etag->hash = 0; r->headers_out.etag = NULL; }
#define Nullav Null(AV*)
#define FALSE (0)
#define PerlSock_shutdown(s,h) shutdown(s, h)
#define pad_add_name_pv(a,b,c,d) Perl_pad_add_name_pv(aTHX_ a,b,c,d)
#define SvPV_force_flags_nolen(sv,flags) (SvPOK_pure_nogthink(sv) ? SvPVX(sv) : sv_pvn_force_flags(sv, 0, flags))
#define _POSIX_MEMLOCK_RANGE (-1)
#define VM_MEMORY_CM_MEMORYPOOL 94
#define MAP_MEM_LEDGER_TAGGED 0x002000
#define IPPROTO_ICMP 1
#define thread_set_kernel_port(thread,port) (thread_set_special_port((thread), THREAD_KERNEL_PORT, (port)))
#define IPV6CTL_PREFER_TEMPADDR 37
#define PERL_ARGS_ASSERT_MRO_META_DUP assert(smeta); assert(param)
#define PARENT_FAKELEX_FLAGS(pn) (pn)->xpadn_high
#define PERL_ARGS_ASSERT_GV_STASHPV assert(name)
#define __I386_MCONTEXT_H_ 
#define COMBINING_GRAVE_ACCENT_UTF8 "\xCC\x80"
#define PERL_ARGS_ASSERT_PTR_TABLE_STORE assert(tbl); assert(newsv)
#define OPpAVHVSWITCH_MASK 0x03
#define ROTL64(x,r) ( ( (U64)(x) << (r) ) | ( (U64)(x) >> ( 64 - (r) ) ) )
#define cSVOPo cSVOPx(o)
#define __UINTPTR_MAX__ 0xffffffffffffffffUL
#define MNT_CMDFLAGS (MNT_UPDATE|MNT_NOBLOCK|MNT_RELOAD|MNT_FORCE)
#define PERL_ARGS_ASSERT_DUP_WARNINGS 
#define PERL_PPDEF(s) PERL_CALLCONV OP *s (pTHX);
#define HAS_RMDIR 
#define __volatile volatile
#define KERN_INVALID_ARGUMENT 4
#define p_forw p_un.p_st1.__p_forw
#define NGX_LOG_INFO 7
#define NGX_HAVE_OS_SPECIFIC_INIT 1
#define __IPV6_ADDR_SCOPE_LINKLOCAL 0x02
#define RXf_IS_ANCHORED (1U<<(RXf_BASE_SHIFT+10))
#define CPU_SUBTYPE_POWERPC_750 ((cpu_subtype_t) 9)
#define RXp_MINLENRET(prog) (prog->minlenret)
#define PERL_ARGS_ASSERT_SV_SETPVF_MG assert(sv); assert(pat)
#define MY_CXT_INIT_ARG &my_cxt_index
#define SLIPDISC 4
#define KEEPCOPY_PAT_MODS "p"
#define __DARWIN_OSSwapInt64(x) (__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt64(x) : _OSSwapInt64(x))
#define SI_ASYNCIO 0x10004
#define __MAC_10_12_1 101201
#define VM_MEMORY_MALLOC_LARGE_REUSABLE 8
#define __MAC_10_12_4 101204
#define NGX_DARWIN_ATOMIC 1
#define _CLOCK_T 
#define VQ_NOTRESP 0x0001
#define _NLINK_T 
#define SAVEt_LONG 38
#define GETGRNAM_R_PROTO REENTRANT_PROTO_I_CSBWR
#define case_113_SBOX32(hash,state,key) 
#define PERL_ULONG_MAX ((unsigned long)ULONG_MAX)
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define toLOWER_L1(c) toLOWER_LATIN1(c)
#define PERL_ARGS_ASSERT_PAD_ALLOC 
#define PL_pad_reset_pending (vTHX->Ipad_reset_pending)
#define PERL_DEB(a) 
#define toLOWER_LC(c) _generic_toLOWER_LC((c), tolower, U8)
#define MACH_MSG_TYPE_MOVE_SEND 17
#define HAS_FSETPOS 
#define MACH_MSG_GUARDED_PORT_DESCRIPTOR 4
#define REENTRANT_PROTO_I_uISBWRE 52
#define ATTR_CMN_OWNERID 0x00008000
#define ngx_http_clear_accept_ranges(r) r->allow_ranges = 0; if (r->headers_out.accept_ranges) { r->headers_out.accept_ranges->hash = 0; r->headers_out.accept_ranges = NULL; }
#define MUTEX_INIT(m) STMT_START { int _eC_; if ((_eC_ = pthread_mutex_init((m), pthread_mutexattr_default))) Perl_croak_nocontext("panic: MUTEX_INIT (%d) [%s:%d]", _eC_, __FILE__, __LINE__); } STMT_END
#define INT_FAST32_MAX INT32_MAX
#define RV2CVOPCV_MARK_EARLY 0x00000001
#define I_SYS_STAT 
#define ATTR_CMN_BKUPTIME 0x00002000
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_2(x) 
#define PERL_ARGS_ASSERT_MY_FFLUSH_ALL 
#define PCRE2_NO_JIT 0x00002000u
#define __FLT64X_MAX_EXP__ 16384
#define PCRE2_BSR_ANYCRLF 2
#define TAILQ_CONCAT(head1,head2,field) do { if (!TAILQ_EMPTY(head2)) { *(head1)->tqh_last = (head2)->tqh_first; (head2)->tqh_first->field.tqe_prev = (head1)->tqh_last; (head1)->tqh_last = (head2)->tqh_last; TAILQ_INIT((head2)); QMD_TRACE_HEAD(head1); QMD_TRACE_HEAD(head2); } } while (0)
#define PERL_ARGS_ASSERT_GROK_OCT assert(start); assert(len_p); assert(flags)
#define __UINT_FAST64_TYPE__ long long unsigned int
#define MACH_VM_MIN_ADDRESS ((mach_vm_offset_t) 0)
#define PERL_ARGS_ASSERT_NEXTARGV assert(gv)
#define EXC_BAD_ACCESS 1
#define dVAR dNOOP
#define COND_INIT(c) STMT_START { int _eC_; if ((_eC_ = pthread_cond_init((c), pthread_condattr_default))) Perl_croak_nocontext("panic: COND_INIT (%d) [%s:%d]", _eC_, __FILE__, __LINE__); } STMT_END
#define POPl ((long)SvIVx(POPs))
#define CONTINUE_PAT_MOD 'c'
#define WARN_NONCHAR 49
#define free_tmps() Perl_free_tmps(aTHX)
#define CX_POP(cx) cxstack_ix--;
#define _STRUCT_MCONTEXT_AVX512_32 struct __darwin_mcontext_avx512_32
#define PERL_ARGS_ASSERT_CX_PUSHLOOP_PLAIN assert(cx)
#define PCRE2_INFO_MAXLOOKBEHIND 15
#define PERL_ARGS_ASSERT_AMAGIC_DEREF_CALL assert(ref)
#define case_24_SBOX32(hash,state,key) _SBOX32_CASE(24,hash,state,key)
#define NGX_HTTP_POST 0x00000008
#define POPn (SvNVx(POPs))
#define UTF8_ALLOW_NON_CONTINUATION 0x0004
#define STDIN_FILENO 0
#define ZAPHOD32_SCRAMBLE32(v,prime) STMT_START { v ^= (v>>9); v ^= (v<<21); v ^= (v>>16); v *= prime; v ^= (v>>17); v ^= (v<<15); v ^= (v>>23); } STMT_END
#define __INT_MAX__ 0x7fffffff
#define VM_MEMORY_DYLD_MALLOC 61
#define NGX_NONE 1
#define PERL_ARGS_ASSERT_NEWSVUV 
#define HAS_WAITPID 
#define SvTRUEx_nomg(sv) SvTRUE_nomg(sv)
#define PERL_ARGS_ASSERT_SV_2UV_FLAGS assert(sv)
#define GCC_DIAG_IGNORE_DECL(x) GCC_DIAG_IGNORE(x) dNOOP
#define PERL_VERSION_MAJOR PERL_REVISION
#define PPNUM_MAX UINT32_MAX
#define PAD_SET_CUR_NOSAVE(padlist,nth) PL_comppad = (PAD*) (PadlistARRAY(padlist)[nth]); PL_curpad = AvARRAY(PL_comppad); DEBUG_Xv(PerlIO_printf(Perl_debug_log, "Pad 0x%" UVxf "[0x%" UVxf "] set_cur    depth=%d\n", PTR2UV(PL_comppad), PTR2UV(PL_curpad), (int)(nth)));
#define PL_checkav (vTHX->Icheckav)
#define _toLOWER_utf8_flags(p,e,s,l,f) _to_utf8_lower_flags(p,e,s,l,f)
#define INT8_MIN -128
#define case_198_SBOX32(hash,state,key) 
#define WAIT_ANY (-1)
#define NV_NAN_PAYLOAD_PERM_0_TO_7 0x0, 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7
#define INADDR_ALLMDNS_GROUP (u_int32_t)0xe00000fb
#define VM_FLAGS_NO_CACHE 0x0010
#define DBL_MAX_EXP __DBL_MAX_EXP__
#define STMT_START (void)(
#define HAS_BUILTIN_CHOOSE_EXPR 
#define HAS_NEARBYINT 
#define CATCH_GET (PL_top_env->je_mustcatch)
#define PERL_STRLEN_ROUNDUP_QUANTUM Size_t_size
#define parse_arithexpr(a) Perl_parse_arithexpr(aTHX_ a)
#define PERL_UQUAD_MIN ((UV)0)
#define __TVOS_12_1 120100
#define HvPLACEHOLDERS(hv) (*Perl_hv_placeholders_p(aTHX_ MUTABLE_HV(hv)))
#define PERL_ARGS_ASSERT_OPTIMIZE_OPTREE assert(o)
#define _CC_XDIGIT 12
#define TASK_SECURITY_TOKEN 13
#define NGX_PROCESS_NORESPAWN -1
#define GRPASSWD 
#define IoLINES_LEFT(sv) ((XPVIO*) SvANY(sv))->xio_lines_left
#define PerlDir_close(dir) closedir((dir))
#define TASK_FLAGS_INFO 28
#define UTF_MIN_ABOVE_LATIN1_BYTE ((0x100 >> UTF_ACCUMULATION_SHIFT) | UTF_START_MARK(2))
#define ngx_movemem(dst,src,n) (((u_char *) memmove(dst, src, n)) + (n))
#define F_GETFL 3
#define SS_ADD_IV(i) ((ssp++)->any_iv = (IV)(i))
#define POPp POPpx
#define _generic_invlist_uvchr(classnum,c) ((c) < 256 ? _generic_isCC(c, classnum) : _is_uni_FOO(classnum, c))
#define GLOB_NOCHECK 0x0010
#define DOUBLE_IS_IEEE_754_128_BIT_BIG_ENDIAN 6
#define PERL_ARGS_ASSERT_HV_BUCKET_RATIO assert(hv)
#define __API_DEPRECATED_WITH_REPLACEMENT_BEGIN(...) 
#define PERL_ARGS_ASSERT_NEWPADNAMEOUTER assert(outer)
#define TIOCM_RNG 0200
#define PERLDB_SAVESRC (PL_perldb & PERLDBf_SAVESRC)
#define WARN_EXPERIMENTAL__REFALIASING 61
#define PERL_LOADMOD_DENY 0x1
#define MNT_DOVOLFS 0x00008000
#define OA_PVOP_OR_SVOP (8 << OCSHIFT)
#define stpcpy(dest,...) __builtin___stpcpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define PerlSIO_get_base(f) NULL
#define __INT64_TYPE__ long long int
#define I_SYS_DIR 
#define NGX_SOCKADDRLEN sizeof(ngx_sockaddr_t)
#define PERL_ARGS_ASSERT_CLONE_PARAMS_NEW assert(from); assert(to)
#define NOLINE ((line_t) 4294967295UL)
#define MNT_NOEXEC 0x00000004
#define VM_MEMORY_FOUNDATION 41
#define newASSIGNOP(a,b,c,d) Perl_newASSIGNOP(aTHX_ a,b,c,d)
#define SvEND(sv) ((sv)->sv_u.svu_pv + ((XPV*)SvANY(sv))->xpv_cur)
#define CXt_LOOP_LAZYSV 5
#define PERL_ARGS_ASSERT_SAVE_STRLEN assert(ptr)
#define _SC_AIO_PRIO_DELTA_MAX 44
#define NewOp(m,var,c,type) (var = (type *) Perl_Slab_Alloc(aTHX_ c*sizeof(type)))
#define DEBUG_SCOPE(where) DEBUG_l( Perl_deb(aTHX_ "%s scope %ld (savestack=%ld) at %s:%d\n", where, (long)PL_scopestack_ix, (long)PL_savestack_ix, __FILE__, __LINE__));
#define PERL_ARGS_ASSERT_SV_DERIVED_FROM_PVN assert(sv); assert(name)
#define isASCII_L1(c) isASCII(c)
#define NGX_PID_PATH "logs/nginx.pid"
#define PERL_ARGS_ASSERT_IS_UTF8_INVARIANT_STRING_LOC assert(s)
#define CALLREG_NAMED_BUFF_DELETE(rx,key,flags) RX_ENGINE(rx)->named_buff(aTHX_ (rx),(key), NULL, ((flags) | RXapif_DELETE))
#define _POSIX_SYMLINK_MAX 255
#define TIOCPKT _IOW('t', 112, int)
#define PCRE2_COPY_MATCHED_SUBJECT 0x00004000u
#define ATTR_CMN_GEN_COUNT 0x00080000
#define isASCII_LC(c) (FITS_IN_8_BITS(c) && isascii( (U8) (c)))
#define __header_inline extern __inline __attribute__((__gnu_inline__))
#define NGX_HTTP_CACHE_SCARCE 8
#define EVFILT_EXCEPT (-15)
#define NGX_HTTP_VERSION_10 1000
#define NGX_HTTP_VERSION_11 1001
#define MGf_GSKIP 4
#define PL_underlying_numeric_obj (vTHX->Iunderlying_numeric_obj)
#define SAVEt_FREEPADNAME 22
#define Select_fd_set_t fd_set *
#define CXt_BLOCK 2
#define isPRINT_LC_utf8_safe(p,e) _generic_LC_invlist_utf8_safe(isPRINT_LC, _CC_PRINT, p, e)
#define x86_AVX_STATE32_COUNT ((mach_msg_type_number_t) (sizeof(x86_avx_state32_t)/sizeof(unsigned int)))
#define PERL_ULONG_MIN ((unsigned long)0L)
#define PERL_ARGS_ASSERT_IS_UTF8_CHAR_BUF assert(buf); assert(buf_end)
#define _POSIX_V6_ILP32_OFF32 __ILP32_OFF32
#define PERL_ARGS_ASSERT_MAGIC_REGDATA_CNT assert(sv); assert(mg)
#define ATTR_FORK_SETMASK 0x00000000
#define ngx_regex_exec_n "pcre2_match()"
#define hv_iternext(hv) hv_iternext_flags(hv, 0)
#define sv_dec(a) Perl_sv_dec(aTHX_ a)
#define _NGX_HTTP_CONFIG_H_INCLUDED_ 
#define PmopSTASHPV_set(o,pv) PmopSTASH_set((o), gv_stashpv(pv,GV_ADD))
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define NGX_SETPROCTITLE_PAD '\0'
#define host_set_iocompressionstats_port(host,port) (host_set_special_port((host), HOST_IOCOMPRESSIONSTATS_PORT, (port)))
#define NGX_HTTP_VERSION_20 2000
#define HvEITER(hv) (*Perl_hv_eiter_p(aTHX_ MUTABLE_HV(hv)))
#define SvOURSTASH_set PadnameOURSTASH_set
#define USER_POSIX2_FORT_RUN 15
#define op_refcnt_lock() Perl_op_refcnt_lock(aTHX)
#define TCP_NODELAY 0x01
#define FF_CHECKCHOP 6
#define PERL_ARGS_ASSERT_GV_FULLNAME3 assert(sv); assert(gv)
#define PERL_ARGS_ASSERT_GV_FULLNAME4 assert(sv); assert(gv)
#define fp_dup(a,b,c) Perl_fp_dup(aTHX_ a,b,c)
#define INT_FAST32_MIN INT32_MIN
#define ATTR_CMN_NAME 0x00000001
#define _NGX_TIMES_H_INCLUDED_ 
#define RESTORE_LC_NUMERIC() STMT_START { if (_restore_LC_NUMERIC_function) { _restore_LC_NUMERIC_function(aTHX); } LC_NUMERIC_UNLOCK; } STMT_END
#define EDQUOT 69
#define MNT_SYNCHRONOUS 0x00000002
#define FOLDEQ_S1_FOLDS_SANE (1 << 4)
#define OPpSORT_INTEGER 0x02
#define __FLT32_NORM_MAX__ 3.40282346638528859811704183484516925e+38F32
#define PeRl_CaTiFy(a,b) a ## b
#define OpSIBLING(o) (0 + (o)->op_moresib ? (o)->op_sibparent : NULL)
#define HOST_UNFREED_PORT (10 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define VM_MEMORY_ROSETTA_INDIRECT_BRANCH_MAP 232
#define lex_stuff_pv(a,b) Perl_lex_stuff_pv(aTHX_ a,b)
#define NGX_CONF_1MORE 0x00000800
#define WARN_OVERFLOW 15
#define PL_vtbl_arylen PL_magic_vtables[want_vtbl_arylen]
#define PERLIO_NOT_STDIO 0
#define TABLDISC 3
#define PERL_ARGS_ASSERT_NEWGVREF 
#define OA_CLASS_MASK (15 << OCSHIFT)
#define HINT_LOCALIZE_HH 0x00020000
#define PL_vtbl_debugvar PL_magic_vtables[want_vtbl_debugvar]
#define PERL_DEBUG_PAD_ZERO(i) (SvPVX(PERL_DEBUG_PAD(i))[0] = 0, (((XPV*) SvANY(PERL_DEBUG_PAD(i)))->xpv_cur = 0), PERL_DEBUG_PAD(i))
#define PAGE_MASK vm_page_mask
#define PERL_ARGS_ASSERT_NEW_WARNINGS_BITFIELD assert(bits)
#define cx_pushloop_plain(a) Perl_cx_pushloop_plain(aTHX_ a)
#define P_DISABLE_ASLR 0x00001000
#define NOTE_LOWAT 0x00000001
#define PERL_ARGS_ASSERT_DO_VECSET assert(sv)
#define isset(a,i) (((unsigned char *)(a))[(i)/NBBY] & (1u<<((i)%NBBY)))
#define HAS_WAIT 
#define STAILQ_EMPTY(head) ((head)->stqh_first == NULL)
#define FOOTPRINT_INTERVAL_RESET 0x1
#define HAS_MBTOWC 
#define _PERL_HASH_FUNC "SBOX32_WITH_" __PERL_HASH_FUNC
#define EPROCUNAVAIL 76
#define EXTEND_MORTAL(n) STMT_START { SSize_t eMiX = PL_tmps_ix + (n); if (UNLIKELY(eMiX >= PL_tmps_max)) (void)Perl_tmps_grow_p(aTHX_ eMiX); } STMT_END
#define __amd64__ 1
#define PeRl_INT64_C(c) CAT2(c,L)
#define OPpFT_STACKING 0x08
#define _POSIX_THREAD_PRIO_INHERIT (-1)
#define GVf_IMPORTED_AV 0x20
#define SvWEAKREF_off(sv) (SvFLAGS(sv) &= ~(SVf_ROK|SVprv_WEAKREF))
#define PerlLIO_tmpnam(str) tmpnam((str))
#define VM_REGION_SUBMAP_INFO_V1_COUNT_64 ((mach_msg_type_number_t) (VM_REGION_SUBMAP_INFO_V1_SIZE / sizeof (natural_t)))
#define ngx_base64_decoded_length(len) (((len + 3) / 4) * 3)
#define is_utf8_char Perl_is_utf8_char
#define PERL_ARGS_ASSERT_CKWARN_D 
#define lex_stuff_sv(a,b) Perl_lex_stuff_sv(aTHX_ a,b)
#define LLONG_MIN (-LLONG_MAX - 1LL)
#define PERL_ARGS_ASSERT_GET_OPARGS 
#define host_set_lockd_port(host,port) (host_set_special_port((host), HOST_LOCKD_PORT, (port)))
#define save_gp(a,b) Perl_save_gp(aTHX_ a,b)
#define PERL_ARGS_ASSERT_PAD_FINDMY_PVN assert(namepv)
#define NGX_USE_EPOLL_EVENT 0x00000040
#define PERL_ARGS_ASSERT_PERLPROC_PIPE_CLOEXEC assert(pipefd)
#define is_LAX_VERSION(a,b) (a != Perl_prescan_version(aTHX_ a, FALSE, b, NULL, NULL, NULL, NULL))
#define SIOCGIFBRDADDR _IOWR('i', 35, struct ifreq)
#define HAS_BUILTIN_SUB_OVERFLOW 
#define NOTE_EXIT_DECRYPTFAIL 0x00010000
#define GV_ADDMULTI 0x02
#define SIGTSTP 18
#define PerlSIO_stdoutf printf
#define HAS_ENDPROTOENT 
#define PERL_ARGS_ASSERT_DO_SPRINTF assert(sv); assert(sarg)
#define pcre2_set_recursion_memory_management PCRE2_SUFFIX(pcre2_set_recursion_memory_management_)
#define UTF8_TWO_BYTE_HI(c) (__ASSERT_((sizeof(c) == 1) || !(((WIDEST_UTYPE)(c)) & ~MAX_UTF8_TWO_BYTE)) (__BASE_TWO_BYTE_HI(c, NATIVE_TO_UNI)))
#define pcre2_set_offset_limit PCRE2_SUFFIX(pcre2_set_offset_limit_)
#define _is_uni_FOO(a,b) Perl__is_uni_FOO(aTHX_ a,b)
#define _MACH_CLOCK_TYPES_H_ 
#define AUDIT_ZONENAME 0x1000
#define GVf_IMPORTED_CV 0x80
#define RXp_PAREN_NAMES(rx) ((rx)->paren_names)
#define F_GETLKPID 66
#define dATARGET SV * GETATARGET
#define TCP_MAXWIN 65535
#define PERL_ARGS_ASSERT_OP_DUMP assert(o)
#define PERL_ARGS_ASSERT_OP_LVALUE 
#define _POSIX_SEMAPHORES (-1)
#define I_SYS_STATVFS 
#define __ATOMIC_RELAXED 0
#define case_206_SBOX32(hash,state,key) 
#define SAVEt_NSTAB 17
#define PWAIT 32
#define P_DIRTY_TERMINATED 0x00000020
#define PTHREAD_PROCESS_PRIVATE 2
#define _CC_NON_FINAL_FOLD 21
#define PerlMemShared_calloc(num,size) calloc((num), (size))
#define PRIVLIB "/usr/local/Cellar/perl/5.34.0/lib/perl5/5.34.0"
#define op_scope(a) Perl_op_scope(aTHX_ a)
#define BC_SCALE_MAX 99
#define NGX_HTTP_VAR_WEAK 16
#define GETGRGID_R_HAS_BUFFER 
#define PL_reentrant_buffer (vTHX->Ireentrant_buffer)
#define newSVuv(a) Perl_newSVuv(aTHX_ a)
#define PERL_ARGS_ASSERT_GV_TRY_DOWNGRADE assert(gv)
#define MACH_SEND_INVALID_DATA 0x10000002
#define ATTR_VOL_RESERVED_SIZE 0x20000000
#define ZAPHOD32_FINALIZE(v0,v1,v2) STMT_START { ZAPHOD32_WARN3("v0=%08x v1=%08x v2=%08x - ZAPHOD32 FINALIZE\n", (unsigned int)v0, (unsigned int)v1, (unsigned int)v2); v2 += v0; v1 -= v2; v1 = ROTL32(v1, 6); v2 ^= v1; v2 = ROTL32(v2, 28); v1 ^= v2; v0 += v1; v1 = ROTL32(v1, 24); v2 += v1; v2 = ROTL32(v2, 18) + v1; v0 ^= v2; v0 = ROTL32(v0, 20); v2 += v0; v1 ^= v2; v0 += v1; v0 = ROTL32(v0, 5); v2 += v0; v2 = ROTL32(v2, 22); v0 -= v1; v1 -= v2; v1 = ROTL32(v1, 17); } STMT_END
#define OA_OTHERINT 32
#define NGX_OLDPID_EXT ".oldbin"
#define PadnameUTF8(pn) 1
#define x86_FLOAT_STATE 8
#define toUPPER_A(c) toUPPER(c)
#define warn_nocontext Perl_warn_nocontext
#define PERL_ARGS_ASSERT_CX_PUSHBLOCK assert(sp)
#define U32TYPE unsigned int
#define x86_FLOAT_STATE_COUNT ((mach_msg_type_number_t) (sizeof(x86_float_state_t)/sizeof(unsigned int)))
#define ngx_open_file_n "open()"
#define cast_i32 Perl_cast_i32
#define _INT8_T 
#define SIGKILL 9
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_4(x) x
#define IPPROTO_RVD 66
#define __INT_LEAST32_TYPE__ int
#define WARN_EXITING 3
#define isIDFIRST_LC_uvchr(c) _generic_LC_uvchr(isIDFIRST_LC, _is_uni_perl_idstart, c)
#define OID_AUTO (-1)
#define PerlProc_setuid(u) setuid((u))
#define READ_XDIGIT(s) ((s)++, XDIGIT_VALUE(*((s) - 1)))
#define PL_UpperLatin1 (vTHX->IUpperLatin1)
#define isPSXSPC_uvchr(c) isSPACE_uvchr(c)
#define REENTRANT_PROTO_I_SBIE 38
#define UTF8_TWO_BYTE_LO(c) (__ASSERT_((sizeof(c) == 1) || !(((WIDEST_UTYPE)(c)) & ~MAX_UTF8_TWO_BYTE)) (__BASE_TWO_BYTE_LO(c, NATIVE_TO_UNI)))
#define NGX_DISABLE_SYMLINKS_ON 1
#define case_104_SBOX32(hash,state,key) 
#define REENTRANT_PROTO_I_SBIR 40
#define PERL_MAGIC_shared_scalar 'n'
#define __DARWIN_1050(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050)
#define PERL_ARGS_ASSERT_UTF8_HOP assert(s)
#define MAX_PORTABLE_UTF8_TWO_BYTE (32 * nBIT_UMAX(5))
#define SCNiFAST16 SCNi16
#define case_51_SBOX32(hash,state,key) 
#define task_set_kernel_port(task,port) (task_set_special_port((task), TASK_KERNEL_PORT, (port)))
#define ENOLCK 77
#define PCRE2_CONVERT_GLOB_NO_STARSTAR 0x00000050u
#define case_170_SBOX32(hash,state,key) 
#define UF_IMMUTABLE 0x00000002
#define _UUID_T 
#define GVf_IMPORTED_HV 0x40
#define CPU_SUBTYPE_BIG_ENDIAN ((cpu_subtype_t) 1)
#define REQUESTED_TRAILER_SIZE_NATIVE(y) ((mach_msg_trailer_size_t) ((GET_RCV_ELEMENTS(y) == MACH_RCV_TRAILER_NULL) ? sizeof(mach_msg_trailer_t) : ((GET_RCV_ELEMENTS(y) == MACH_RCV_TRAILER_SEQNO) ? sizeof(mach_msg_seqno_trailer_t) : ((GET_RCV_ELEMENTS(y) == MACH_RCV_TRAILER_SENDER) ? sizeof(mach_msg_security_trailer_t) : ((GET_RCV_ELEMENTS(y) == MACH_RCV_TRAILER_AUDIT) ? sizeof(mach_msg_audit_trailer_t) : ((GET_RCV_ELEMENTS(y) == MACH_RCV_TRAILER_CTX) ? sizeof(mach_msg_context_trailer_t) : ((GET_RCV_ELEMENTS(y) == MACH_RCV_TRAILER_AV) ? sizeof(mach_msg_mac_trailer_t) : sizeof(mach_msg_max_trailer_t))))))))
#define USER_CODE_SELECTOR 0x0017
#define NGX_HTTP_UPSTREAM_IGN_XA_EXPIRES 0x00000004
#define NEGATIVE_INDICES_VAR "NEGATIVE_INDICES"
#define HOST_AMFID_PORT (11 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define PL_statgv (vTHX->Istatgv)
#define PCRE2_ERROR_MIXEDTABLES (-30)
#define F_ALLOCATECONTIG 0x00000002
#define isSPACE_LC_utf8(p,e) isSPACE_LC_utf8_safe(p, e)
#define PERL_ARGS_ASSERT_CK_BITOP assert(o)
#define PL_vtbl_substr PL_magic_vtables[want_vtbl_substr]
#define sv_string_from_errnum(a,b) Perl_sv_string_from_errnum(aTHX_ a,b)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_8(x) x
#define SV_COW_DROP_PV 4
#define MACH_SEND_IN_PROGRESS 0x10000001
#define _STDDEF_H_ 
#define _XOPEN_UNIX (1)
#define KERN_ALREADY_WAITING 30
#define GLOB_NOSYS (-4)
#define isgreaterequal(x,y) __builtin_isgreaterequal((x),(y))
#define SCNiFAST32 SCNi32
#define _SC_REGEXP 77
#define IPV6_MSFILTER 74
#define __FLT64_NORM_MAX__ 1.79769313486231570814527423731704357e+308F64
#define sv_2pv_nolen(sv) sv_2pv(sv, 0)
#define KERN_SEMAPHORE_DESTROYED 42
#define __INTMAX_MAX__ 0x7fffffffffffffffL
#define save_op() save_pushptr((void *)(PL_op), SAVEt_OP)
#define _SC_LOGIN_NAME_MAX 73
#define SSLEEP 3
#define CX_PUSHSUB_GET_LVALUE_MASK(func) ( (PL_op->op_flags & OPf_WANT) ? OPpENTERSUB_LVAL_MASK : !(PL_op->op_private & OPpENTERSUB_LVAL_MASK) ? 0 : (U8)func(aTHX) )
#define PERL_ARGS_ASSERT_CALLOC 
#define hv_copy_hints_hv(a) Perl_hv_copy_hints_hv(aTHX_ a)
#define PERL_ARGS_ASSERT_LEX_NEXT_CHUNK 
#define HAS_FCNTL 
#define _XLOCALE__STDIO_H_ 
#define valid_utf8_to_uvuni(a,b) Perl_valid_utf8_to_uvuni(aTHX_ a,b)
#define PerlSock_endhostent endhostent
#define NUM_ANYOF_CODE_POINTS (1 << 8)
#define MACH_MSGH_BITS_USED 0xb01f1f1fU
#define MADV_SEQUENTIAL POSIX_MADV_SEQUENTIAL
#define G_WARN_ONCE 8
#define _STRUCT_X86_AVX512_STATE32 struct __darwin_i386_avx512_state
#define OP_CHECK_MUTEX_TERM MUTEX_DESTROY(&PL_check_mutex)
#define PERL_ARGS_ASSERT_NEWPADOP assert(sv)
#define PCRE2_ERROR_BADMODE (-32)
#define SVf_(n) "-" STRINGIFY(n) "p"
#define PL_my_cxt_list (vTHX->Imy_cxt_list)
#define PerlEnv_clearenv(str) (ENV_LOCK, (clearenv(str) ? (ENV_UNLOCK, 1) : (ENV_UNLOCK, 0)))
#define EFL_IF 0x00000200
#define MACH_RCV_INVALID_TYPE 0x1000400d
#define PL_Latin1 (vTHX->ILatin1)
#define TIOCM_LE 0001
#define debprofdump() Perl_debprofdump(aTHX)
#define case_18_SBOX32(hash,state,key) _SBOX32_CASE(18,hash,state,key)
#define NGX_HAVE_UNIX_DOMAIN 1
#define Perl_safesysmalloc_size(where) malloc_size(where)
#define _SYS_FCNTL_H_ 
#define case_61_SBOX32(hash,state,key) 
#define __PRI_64_LENGTH_MODIFIER__ "ll"
#define A_SETSTAT 13
#define isDIGIT_uvchr(c) _generic_invlist_uvchr(_CC_DIGIT, c)
#define UTF8_DISALLOW_SURROGATE 0x0100
#define NV_ZERO_IS_ALLBITS_ZERO 
#define SBOX32_STATIC_INLINE PERL_STATIC_INLINE
#define SvOBJECT_off(sv) (SvFLAGS(sv) &= ~SVs_OBJECT)
#define OS_SENTINEL __attribute__((__sentinel__))
#define AT_REMOVEDIR 0x0080
#define MGf_TAINTEDDIR 1
#define SCNiFAST64 SCNi64
#define CvGV(sv) Perl_CvGV(aTHX_ (CV *)(sv))
#define PERLDB_NAMEANON (PL_perldb & PERLDBf_NAMEANON)
#define HAS_ALARM 
#define is_utf8_string_flags Perl_is_utf8_string_flags
#define I_SYS_PARAM 
#define VM_MIN_ADDRESS64 ((user_addr_t) 0x0000000000000000ULL)
#define HAS_ERF 
#define dowantarray() Perl_dowantarray(aTHX)
#define LIST_FOREACH_SAFE(var,head,field,tvar) for ((var) = LIST_FIRST((head)); (var) && ((tvar) = LIST_NEXT((var), field), 1); (var) = (tvar))
#define KEV_DL_IFDELEGATE_CHANGED 25
#define SVs_OBJECT 0x00100000
#define filter_add(a,b) Perl_filter_add(aTHX_ a,b)
#define TASK_ID_TOKEN_NULL ((task_id_token_t) 0)
#define BYTEORDER 0x12345678
#define PL_tainting (vTHX->Itainting)
#define REENTRANT_PROTO_S_ISBI 61
#define CROUND (CBLOCK - 1)
#define CTLFLAG_EXPERIMENT 0x00100000
#define FLEXFILENAMES 
#define A_GETPINFO_ADDR 28
#define NGX_HTTP_LENGTH_REQUIRED 411
#define SVt_RV SVt_IV
#define ENOTSUP 45
#define __AVAILABILITY__ 
#define RENAME_SWAP 0x00000002
#define REENTRANT_PROTO_S_TWISBIE 70
#define PERL_ARGS_ASSERT_SV_TAINT assert(sv)
#define _SV_HEAD_DEBUG 
#define SvCUR_set(sv,val) STMT_START { assert(PL_valid_types_PVX[SvTYPE(sv) & SVt_MASK]); assert(!isGV_with_GP(sv)); assert(!(SvTYPE(sv) == SVt_PVIO && !(IoFLAGS(sv) & IOf_FAKE_DIRP))); (((XPV*) SvANY(sv))->xpv_cur = (val)); } STMT_END
#define PL_registered_mros (vTHX->Iregistered_mros)
#define R_OK (1<<2)
#define __TYPES_H_ 
#define PCRE2_ERROR_UTF8_ERR10 (-12)
#define PERL_ARGS_ASSERT_WHICHSIG_PV assert(sig)
#define PERL_ARGS_ASSERT_PAD_ADD_NAME_PV assert(name)
#define MACH_PORT_RIGHT_DEAD_NAME ((mach_port_right_t) 4)
#define AF_DATAKIT 9
#define IPV6_PORTRANGE_LOW 2
#define MACH_SEND_INVALID_TRAILER 0x10000011
#define w_coredump w_T.w_Coredump
#define CIRCLEQ_INSERT_TAIL(head,elm,field) do { (elm)->field.cqe_next = (void *)(head); (elm)->field.cqe_prev = (head)->cqh_last; if ((head)->cqh_first == (void *)(head)) (head)->cqh_first = (elm); else (head)->cqh_last->field.cqe_next = (elm); (head)->cqh_last = (elm); } while (0)
#define __WATCHOS_4_1 40100
#define PERL_ARGS_ASSERT_CK_SPAIR assert(o)
#define IPV6CTL_MAXFRAGPACKETS 9
#define PERL_ARGS_ASSERT_YYERROR assert(s)
#define CLD_DUMPED 3
#define PERL_ARGS_ASSERT_DOING_TAINT 
#define PERL_ARGS_ASSERT_ISINFNANSV assert(sv)
#define EVAL_RE_REPARSING 0x10
#define SIGEV_SIGNAL 1
#define WEXITSTATUS(x) ((_W_INT(x) >> 8) & 0x000000ff)
#define UNICODE_WARN_SUPER 0x0004
#define __DARWIN_VERS_1050 1
#define getcwd_sv(a) Perl_getcwd_sv(aTHX_ a)
#define UTF8_WARN_PERL_EXTENDED 0x8000
#define PERL_ARGS_ASSERT_VFORM assert(pat)
#define padadd_STATE 0x02
#define CPUFAMILY_UNKNOWN 0
#define case_121_SBOX32(hash,state,key) 
#define QUAD_MIN LLONG_MIN
#define OS_NONNULL1 __attribute__((__nonnull__(1)))
#define OS_NONNULL2 __attribute__((__nonnull__(2)))
#define OS_NONNULL3 __attribute__((__nonnull__(3)))
#define OS_NONNULL6 __attribute__((__nonnull__(6)))
#define PCRE2_ERROR_UTF8_ERR18 (-20)
#define PL_sv_no (vTHX->Isv_no)
#define PERL_ARGS_ASSERT_IS_UTF8_FIXED_WIDTH_BUF_LOCLEN_FLAGS assert(s)
#define CIRCLEQ_CHECK_HEAD(head,field) 
#define MACH_RCV_TIMED_OUT 0x10004003
#define SAVEt_HELEM 49
#define NGX_HTTP_UPSTREAM_IGN_XA_LIMIT_RATE 0x00000040
#define PERL_ARGS_ASSERT_SV_DEC 
#define debstackptrs() Perl_debstackptrs(aTHX)
#define NGX_TIME_T_LEN (sizeof("-9223372036854775808") - 1)
#define __API_AVAILABLE_BEGIN(...) 
#define IN_LC_PARTIAL_COMPILETIME cBOOL(PL_hints & HINT_LOCALE_PARTIAL)
#define case_154_SBOX32(hash,state,key) 
#define PERL_ARGS_ASSERT_PAD_ADD_NAME_SV assert(name)
#define CPUSUBFAMILY_ARM_HG 2
#define VM_PROT_COPY ((vm_prot_t) 0x10)
#define OP_CLASS(o) ((o)->op_type == OP_CUSTOM ? XopENTRYCUSTOM(o, xop_class) : (PL_opargs[(o)->op_type] & OA_CLASS_MASK))
#define lex_read_space(a) Perl_lex_read_space(aTHX_ a)
#define PCRE2_ERROR_BADSUBSPATTERN (-60)
#define SvREFCNT_inc(sv) Perl_SvREFCNT_inc(MUTABLE_SV(sv))
#define PERL_ARGS_ASSERT_NEWSTUB assert(gv)
#define STR_WITH_LEN(s) ("" s ""), (sizeof(s)-1)
#define HAS_STRERROR_R 
#define NGX_SSL_BUFFERED 0x01
#define isBLANK_LC_utf8_safe(p,e) _generic_LC_non_invlist_utf8_safe(isBLANK_LC, is_HORIZWS_high, p, e)
#define TIOCM_SR 0020
#define TIOCM_ST 0010
#define _SYS_SYSCTL_H_ 
#define SETu(u) STMT_START { TARGu(u,1); SETs(TARG); } STMT_END
#define PerlLIO_close(fd) close((fd))
#define WARN_IMPRECISION 46
#define SAVEFREECOPHH(h) save_pushptr((void *)(h), SAVEt_FREECOPHH)
#define VM_SYNC_CONTIGUOUS ((vm_sync_t) 0x20)
#define VM_MEMORY_COREGRAPHICS_FRAMEBUFFERS 56
#define mro_get_linear_isa(a) Perl_mro_get_linear_isa(aTHX_ a)
#define GVf_IMPORTED_SV 0x10
#define _POSIX_THREAD_PRIO_PROTECT (-1)
#define ___POSIX_C_DEPRECATED_STARTING_200112L 
#define case_233_SBOX32(hash,state,key) 
#define ngx_rename_file_n "rename()"
#define NOTE_VM_PRESSURE 0x80000000
#define _CC_NONLATIN1_SIMPLE_FOLD 19
#define PERL_ARGS_ASSERT_SV_2MORTAL 
#define L_SET SEEK_SET
#define ckWARN_d(w) Perl_ckwarn_d(aTHX_ packWARN(w))
#define PadnamelistMAX(pnl) (pnl)->xpadnl_fill
#define dump_vindent(a,b,c,d) Perl_dump_vindent(aTHX_ a,b,c,d)
#define STD_PAT_MODS "msixxn"
#define NGX_HTTP_OPTIONS 0x00000200
#define PCRE2_ERROR_UNMATCHED_CLOSING_PARENTHESIS 122
#define ngx_http_variable(v) { sizeof(v) - 1, 1, 0, 0, 0, (u_char *) v }
#define Size_t_MAX (~(Size_t)0)
#define DM_RUID 0x001
#define PERL_ARGS_ASSERT_UVOFFUNI_TO_UTF8_FLAGS_MSGS assert(d)
#define CvLVALUE_off(cv) (CvFLAGS(cv) &= ~CVf_LVALUE)
#define PerlSock_getnetent getnetent
#define case_35_SBOX32(hash,state,key) 
#define PERLIO_TERM STMT_START { PerlIO_teardown(); MUTEX_DESTROY(&PL_perlio_mutex); } STMT_END
#define case_88_SBOX32(hash,state,key) 
#define I_SYS_SELECT 
#define ITIMER_PROF 2
#define HINT_RE_TAINT 0x00100000
#define MACH_VOUCHER_ATTR_CONTROL_NULL ((mach_voucher_attr_control_t) 0)
#define PERL_ARGS_ASSERT_MAGIC_SETHINT assert(sv); assert(mg)
#define REENTRANT_PROTO_I_SBWR 41
#define PRIoPTR "lo"
#define RXf_PMf_FOLD (1U << (RXf_PMf_STD_PMMOD_SHIFT+2))
#define PERL_ARGS_ASSERT_GV_STASHPVN assert(name)
#define TIOCMBIC _IOW('t', 107, int)
#define PerlProc_geteuid() geteuid()
#define ngx_http_parse_time(value,len) ngx_parse_http_time(value, len)
#define PROC_FLAG_IOS_IMPPROMOTION 0x80000
#define TIOCMBIS _IOW('t', 108, int)
#define PCRE2_ERROR_TOO_MANY_CONDITION_BRANCHES 127
#define PL_chopset (vTHX->Ichopset)
#define SIOCSIFGENERIC _IOW('i', 57, struct ifreq)
#define PSWP 0
#define PERL_ARGS_ASSERT_PERLIO_GET_BUFSIZ 
#define MAXO 404
#define PERL_ARGS_ASSERT_UVCHR_TO_UTF8_FLAGS_MSGS 
#define case_137_SBOX32(hash,state,key) 
#define MALLOC_INTROSPECT_TBL_PTR(ptr) ptr
#define NGX_HTTP_UPSTREAM_IGN_XA_CHARSET 0x00000100
#define IPPROTO_IRTP 28
#define Nullcv Null(CV*)
#define PL_utf8locale (vTHX->Iutf8locale)
#define TOO_LATE_FOR_(ch,what) Perl_croak(aTHX_ "\"-%c\" is on the #! line, it must also be used on the command line%s", (char)(ch), what)
#define HSf_IMP_CXT 0x00000080
#define __LONG_WIDTH__ 64
#define __DBL_MIN__ ((double)2.22507385850720138309023271733240406e-308L)
#define PCRE2_UNGREEDY 0x00040000u
#define PERL_ARGS_ASSERT_DO_NCMP assert(left); assert(right)
#define CVf_CVGV_RC 0x0400
#define PCATCH 0x100
#define HEK_WASUTF8_off(hek) (HEK_FLAGS(hek) &= ~HVhek_WASUTF8)
#define TCP_NOOPT 0x08
#define MACH_PORT_LIMITS_INFO 1
#define ATTR_DIR_IOBLOCKSIZE 0x00000010
#define SO_NREAD 0x1020
#define SV_CHECK_THINKFIRST(sv) if (SvTHINKFIRST(sv)) sv_force_normal_flags(sv, 0)
#define NGX_HTTP_SSI_PARAM_LEN 32
#define NATIVE_TO_ASCII(ch) NATIVE_TO_LATIN1(ch)
#define newGVgen(pack) newGVgen_flags(pack, 0)
#define HAS_FDIM 
#define GETGRNAM_R_HAS_BUFFER 
#define PL_ofsgv (vTHX->Iofsgv)
#define __DARWIN_ALIGNBYTES (sizeof(__darwin_size_t) - 1)
#define PerlIO_eof(a) Perl_PerlIO_eof(aTHX_ a)
#define CPUFAMILY_ARM_HURRICANE 0x67ceee93
#define PERL_MAGIC_regdatum 'd'
#define TIOCCONS _IOW('t', 98, int)
#define NGX_SYS_NERR 107
#define C_ARRAY_LENGTH(a) (sizeof(a)/sizeof((a)[0]))
#define HAS_ROUND 
#define PerlDir_rewind(dir) rewinddir((dir))
#define ckWARN2_d(w1,w2) Perl_ckwarn_d(aTHX_ packWARN2(w1,w2))
#define MDEREF_INDEX_gvsv 0x30
#define __IPHONE_5_0 50000
#define __IPHONE_5_1 50100
#define PPPDISC 5
#define case_132_SBOX32(hash,state,key) 
#define thread_locale_init Perl_thread_locale_init
#define host_set_dynamic_pager_port(host,port) (host_set_special_port((host), HOST_DYNAMIC_PAGER_PORT, (port)))
#define PERL_ARGS_ASSERT_CK_OPEN assert(o)
#define HOST_SYSDIAGNOSE_PORT (16 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define MAP_RENAME 0x0020
#define LIB_INVARG 0
#define PERLDB_NAMEEVAL (PL_perldb & PERLDBf_NAMEEVAL)
#define strGT(s1,s2) (strcmp(s1,s2) > 0)
#define PERL_ARGS_ASSERT_AV_FILL assert(av)
#define OS_MALLOC __attribute__((__malloc__))
#define PERL_ARGS_ASSERT_CUSTOM_OP_NAME assert(o)
#define WARN_UNOPENED 11
#define EMFILE 24
#define _INTTYPES_H_ 
#define HAS_ASCTIME_R 
#define NFSV3_MAX_FH_SIZE 64
#define OPpPAD_STATE 0x40
#define NGX_PROCESS_SIGNALLER 2
#define VAL_EAGAIN EAGAIN
#define BhkFLAGS(hk) ((hk)->bhk_flags)
#define __AVAILABILITY_INTERNAL_UNAVAILABLE __attribute__((unavailable))
#define STATUS_UNIX PL_statusvalue
#define VM_REGION_SUBMAP_INFO_V0_COUNT_64 ((mach_msg_type_number_t) (VM_REGION_SUBMAP_INFO_V0_SIZE / sizeof (natural_t)))
#define M_1_PI 0.318309886183790671537767526745028724
#define LVf_NEG_OFF 0x1
#define SA_NODEFER 0x0010
#define LATIN_CAPITAL_LETTER_I_WITH_DOT_ABOVE 0x130
#define TIOCTIMESTAMP _IOR('t', 89, struct timeval)
#define __DARWIN_SUF_64_BIT_INO_T "$INODE64"
#define case_174_SBOX32(hash,state,key) 
#define MACH_VOUCHER_NAME_ARRAY_NULL ((mach_voucher_name_array_t) 0)
#define cSVOP cSVOPx(PL_op)
#define UNICODE_BYTE_ORDER_MARK 0xFEFF
#define NGX_HAVE_MSGHDR_MSG_CONTROL 1
#define KEV_DL_PROTO_ATTACHED 14
#define IN_LC_PARTIAL_RUNTIME (PL_curcop && CopHINTS_get(PL_curcop) & HINT_LOCALE_PARTIAL)
#define PERL_ARGS_ASSERT_SAVE_LONG assert(longp)
#define ngx_delete_dir_n "rmdir()"
#define VOL_CAP_FMT_DECMPFS_COMPRESSION 0x00010000
#define NGX_HAVE_SCHED_YIELD 1
#define PL_sv_root (vTHX->Isv_root)
#define sv_replace(a,b) Perl_sv_replace(aTHX_ a,b)
#define NGX_LOG_DEBUG_LAST NGX_LOG_DEBUG_STREAM
#define MSG_EOR 0x8
#define PTR2nat(p) (PTRV)(p)
#define HvENAMELEN_get(hv) ((SvOOK(hv) && HvAUX(hv)->xhv_name_u.xhvnameu_name && HvAUX(hv)->xhv_name_count != -1) ? HEK_LEN(HvENAME_HEK_NN(hv)) : 0)
#define _NGX_DARWIN_CONFIG_H_INCLUDED_ 
#define DEBUG_p_TEST (0)
#define UTF8_SKIP(s) UTF8SKIP(s)
#define PERL_ARGS_ASSERT_PERLIO_SEEK 
#define __UINT32_TYPE__ unsigned int
#define NGX_HASH_READONLY_KEY 2
#define to_uni_upper(a,b,c) Perl_to_uni_upper(aTHX_ a,b,c)
#define __FLT_MIN_10_EXP__ (-37)
#define PCRE2_DATE 2022-04-14
#define is_utf8_string_loc_flags(s,len,ep,flags) is_utf8_string_loclen_flags(s, len, ep, 0, flags)
#define NGX_HTTP_NO_CONTENT 204
#define IN_LINKLOCALNETNUM (u_int32_t)0xA9FE0000
#define blk_format cx_u.cx_blk.blk_u.blku_format
#define U16_MAX UINT16_MAX
#define SvNIOK_nog(sv) (SvNIOK(sv) && !(SvFLAGS(sv) & SVs_GMG))
#define sv_nolocking(a) Perl_sv_nolocking(aTHX_ a)
#define __FLT_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F
#define OPpITER_REVERSED 0x02
#define THREAD_FLAVOR_READ 1
#define _SS_MAXSIZE 128
#define NGX_HTTP_UPSTREAM_MAX_FAILS 0x0004
#define AT_EACCESS 0x0010
#define isPUNCT_A(c) _generic_isCC_A(c, _CC_PUNCT)
#define __INTMAX_TYPE__ long int
#define TAILQ_LAST(head,headname) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH (*(((struct headname *)((head)->tqh_last))->tqh_last)) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define AUDIT_USER 0x0040
#define PERL_ARGS_ASSERT_JMAYBE assert(o)
#define case_52_SBOX32(hash,state,key) 
#define DEBUG_Lv_TEST_ DEBUG_BOTH_FLAGS_TEST_(DEBUG_L_FLAG, DEBUG_v_FLAG)
#define HAS_NONLATIN1_FOLD_CLOSURE(c) ( (! cBOOL(FITS_IN_8_BITS(c))) || (PL_charclass[(U8) (c)] & _CC_mask(_CC_NONLATIN1_FOLD)))
#define Perl_sin sin
#define host_get_user_notification_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_USER_NOTIFICATION_PORT, (port)))
#define I_GDBM 
#define _RXf_PMf_CHARSET_SHIFT ((RXf_PMf_STD_PMMOD_SHIFT)+7)
#define PerlSIO_get_bufsiz(f) 0
#define NGX_FILE_ERROR -1
#define PERL_ARGS_ASSERT_PAD_BLOCK_START 
#define __attribute__format__null_ok__(x,y,z) __attribute__format__(x,y,z)
#define UTF_START_MARK(len) (UNLIKELY((len) > 7) ? 0xFF : ((U8) (0xFE << (7-(len)))))
#define toUPPER_LC(c) _generic_toUPPER_LC((c), toupper, U8)
#define ngx_buf_in_memory(b) ((b)->temporary || (b)->memory || (b)->mmap)
#define M_LN2 0.693147180559945309417232121458176568
#define WORD_BIT 32
#define Pid_t pid_t
#define MNT_NOWAIT 2
#define _NGX_CONNECTION_H_INCLUDED_ 
#define pack_cat(a,b,c,d,e,f,g) Perl_pack_cat(aTHX_ a,b,c,d,e,f,g)
#define PERL_ARGS_ASSERT_FILTER_ADD 
#define NOTE_FFCOPY 0xc0000000
#define Gid_t_f "u"
#define find_rundefsv() Perl_find_rundefsv(aTHX)
#define UTF_START_MASK(len) (UNLIKELY((len) >= 7) ? 0x00 : (0x1F >> ((len)-2)))
#define AUDIT_TRIGGER_EXPIRE_TRAILS 8
#define FSCRED ((kauth_cred_t )-1)
#define BSD_GETPGRP(pid) getpgid((pid))
#define VM_MEMORY_CM_REGWARP 101
#define ngx_tm_mon tm_mon
#define GVf_MULTI 0x02
#define VM_PAGE_QUERY_PAGE_CS_TAINTED 0x200
#define PL_vtbl_nkeys PL_magic_vtables[want_vtbl_nkeys]
#define case_185_SBOX32(hash,state,key) 
#define ___POSIX_C_DEPRECATED_STARTING_198808L 
#define sv_uni_display(a,b,c,d) Perl_sv_uni_display(aTHX_ a,b,c,d)
#define fbm_instr(a,b,c,d) Perl_fbm_instr(aTHX_ a,b,c,d)
#define CPU_TYPE_MC98000 ((cpu_type_t) 10)
#define PERL_ARGS_ASSERT_NEWRV_NOINC assert(tmpRef)
#define HAS_EXPM1 
#define NV_EPSILON DBL_EPSILON
#define INTMAX_C(v) (v ## L)
#define RETPUSHYES RETURNX(PUSHs(&PL_sv_yes))
#define ILL_PRVOPC 3
#define isPSXSPC_LC_uvchr(c) isSPACE_LC_uvchr(c)
#define PERL_ARGS_ASSERT_WATCH assert(addr)
#define SVf_IVisUV 0x80000000
#define UTF8_WARN_SURROGATE 0x0200
#define TIOCSCONS _IO('t', 99)
#define PerlEnv_putenv(str) (ENV_LOCK, (putenv(str) ? (ENV_UNLOCK, 1) : (ENV_UNLOCK, 0)))
#define RV2CVOPCV_RETURN_NAME_GV 0x00000002
#define Perl_exp exp
#define PMf_EXTENDED_MORE (1U<<4)
#define HAS_UALARM 
#define UV_IS_QUAD 
#define PERL_ARGS_ASSERT_AV_SHIFT assert(av)
#define TCPOLEN_CC_APPA (TCPOLEN_CC+2)
#define NGX_HTTP_SERVER_TOKENS_OFF 0
#define IPV6CTL_USETEMPADDR 32
#define Netdb_name_t const char *
#define gv_fetchmeth(stash,name,len,level) gv_fetchmeth_pvn(stash, name, len, level, 0)
#define WCOREFLAG 0200
#define case_112_SBOX32(hash,state,key) 
#define A_GETPINFO 24
#define NGX_EVENT_MODULE 0x544E5645
#define IPPROTO_EMCON 14
#define TIOCM_RTS 0004
#define USER_PROP_MUTEX_TERM MUTEX_DESTROY(&PL_user_prop_mutex)
#define kUNOP_AUX cUNOP_AUXx(kid)
#define SCM_TIMESTAMP 0x02
#define PERL_ARGS_ASSERT_TOPMARK 
#define MDEREF_AV_padav_aelem 5
#define custom_op_name(a) Perl_custom_op_name(aTHX_ a)
#define KERN_OSRELEASE 2
#define _STRUCT_MCONTEXT_AVX64 struct __darwin_mcontext_avx64
#define my_popen(a,b) Perl_my_popen(aTHX_ a,b)
#define my_sprintf sprintf
#define CLUMP_2UV(iv) ((iv) < 0 ? 0 : (UV)(iv))
#define timeradd(tvp,uvp,vvp) do { (vvp)->tv_sec = (tvp)->tv_sec + (uvp)->tv_sec; (vvp)->tv_usec = (tvp)->tv_usec + (uvp)->tv_usec; if ((vvp)->tv_usec >= 1000000) { (vvp)->tv_sec++; (vvp)->tv_usec -= 1000000; } } while (0)
#define PERL_ARGS_ASSERT_SV_CMP_FLAGS 
#define MACH_PORT_STATUS_FLAG_GUARDED 0x02
#define KERN_KDSETUP 6
#define SI_TIMER 0x10003
#define LOCAL_PEERCRED 0x001
#define VM_VOLATILE_ORDER_SHIFT 4
#define NGX_CONF_BITMASK_SET 1
#define HYPHEN_UTF8 "\xE2\x80\x90"
#define I_SYS_MOUNT 
#define FFLUSH_NULL 
#define PERL_ARGS_ASSERT_CX_TOPBLOCK assert(cx)
#define MACH_SEND_NODENAP MACH_SEND_NOIMPORTANCE
#define TAINTING_set(s) (PL_tainting = (s))
#define PERL_ARGS_ASSERT_VLOAD_MODULE assert(name)
#define U16_MIN PERL_USHORT_MIN
#define LONG_DOUBLE_IS_DOUBLE 0
#define HAS_BUILTIN_EXPECT 
#define RX_MATCH_COPY_FREE(rx_sv) RXp_MATCH_COPY_FREE(ReANY(rx_sv))
#define Newxc(v,n,t,c) (v = (MEM_WRAP_CHECK_(n,t) (c*)MEM_LOG_ALLOC(n,t,safemalloc((MEM_SIZE)((n)*sizeof(t))))))
#define islessgreater(x,y) __builtin_islessgreater((x),(y))
#define _I386__LIMITS_H_ 
#define PerlSock_recvfrom(s,b,l,f,from,fromlen) recvfrom(s, b, l, f, from, fromlen)
#define CVf_NAMED 0x8000
#define tcp6_seq tcp_seq
#define CHARSET_PAT_MODS ASCII_RESTRICT_PAT_MODS DEPENDS_PAT_MODS LOCALE_PAT_MODS UNICODE_PAT_MODS
#define Newxz(v,n,t) (v = (MEM_WRAP_CHECK_(n,t) (t*)MEM_LOG_ALLOC(n,t,safecalloc((n),sizeof(t)))))
#define __IPHONE_13_0 130000
#define FASYNC O_ASYNC
#define __IPHONE_13_2 130200
#define __IPHONE_13_3 130300
#define __IPHONE_13_4 130400
#define __IPHONE_13_5 130500
#define __IPHONE_13_6 130600
#define __IPHONE_13_7 130700
#define WCOREDUMP(x) (_W_INT(x) & WCOREFLAG)
#define DST_USA 1
#define Perl_tan tan
#define GvIMPORTED_AV(gv) (GvFLAGS(gv) & GVf_IMPORTED_AV)
#define PF_CHAOS AF_CHAOS
#define CopLABEL_len_flags(c,len,flags) Perl_cop_fetch_label(aTHX_ (c), len, flags)
#define BSD 199506
#define PL_delaymagic_gid (vTHX->Idelaymagic_gid)
#define RXapif_REGNAMES 0x0800
#define __SIZEOF_POINTER__ 8
#define NV_NAN_PAYLOAD_MASK_IEEE_754_64_LE 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x07, 0x00
#define ngx_read_ahead_n "ngx_read_ahead_n"
#define TASK_DYLD_INFO 17
#define IPV6_MULTICAST_LOOP 11
#define case_26_SBOX32(hash,state,key) 
#define IPV6CTL_MAXDYNROUTES 49
#define perl_assert_ptr(p) assert( ((void*)(p)) != 0 )
#define __ATOMIC_SEQ_CST 5
#define _INT32_T 
#define CPU_SUBTYPE_UVAXIII ((cpu_subtype_t) 12)
#define MDEREF_HV_gvhv_helem 13
#define CPUFAMILY_INTEL_COMETLAKE 0x1cf8a03e
#define get_context Perl_get_context
#define perl_pthread_mutex_unlock(m) pthread_mutex_unlock(m)
#define EV_CLEAR 0x0020
#define I386_PGBYTES 4096
#define HVhek_MASK 0xFF
#define HAS_LGAMMA_R 
#define PERL_ARGS_ASSERT_MAGIC_GETPACK assert(sv); assert(mg)
#define MACH_TASK_INSPECT_H 
#define PerlIO_flush(a) Perl_PerlIO_flush(aTHX_ a)
#define A_GETCAR 9
#define IPCTL_FASTFORWARDING 14
#define PERL_ARGS_ASSERT_GV_EFULLNAME3 assert(sv); assert(gv)
#define PCRE2_ERROR_PARENTHESES_STACK_CHECK 133
#define HV_NAME_SETALL 0x02
#define LDBL_DIG __LDBL_DIG__
#define pcre2_converted_pattern_free PCRE2_SUFFIX(pcre2_converted_pattern_free_)
#define GvIMPORTED_CV(gv) (GvFLAGS(gv) & GVf_IMPORTED_CV)
#define PERL_ARGS_ASSERT_ISSTRICT_UTF8_CHAR assert(s0); assert(e)
#define M_SQRT2 1.41421356237309504880168872420969808
#define PerlLIO_open(file,flag) open((file), (flag))
#define PCRE2_ERROR_MISSING_COMMENT_CLOSING 118
#define ALRMTYPE 0xff
#define MSVC_DIAG_IGNORE_STMT(x) MSVC_DIAG_IGNORE(x) NOOP
#define DEBUG_t_TEST_ UNLIKELY(PL_debug & DEBUG_t_FLAG)
#define MDEREF_INDEX_MASK 0x30
#define GETPWUID_R_HAS_PTR 
#define PERL_ARGS_ASSERT_INSTR assert(big); assert(little)
#define PRId16 "hd"
#define PERL_MAGIC_env 'E'
#define PERL_ARGS_ASSERT__TO_UNI_FOLD_FLAGS assert(p); assert(lenp)
#define ngx_signal_value(n) ngx_signal_helper(n)
#define EFL_DF 0x00000400
#define STATIC static
#define USE_SEMCTL_SEMID_DS 
#define PERL_ARGS_ASSERT_SVTRUE_NN assert(sv)
#define CALL_BLOCK_HOOKS(which,arg) STMT_START { if (PL_blockhooks) { SSize_t i; for (i = av_top_index(PL_blockhooks); i >= 0; i--) { SV *sv = AvARRAY(PL_blockhooks)[i]; BHK *hk; assert(SvIOK(sv)); if (SvUOK(sv)) hk = INT2PTR(BHK *, SvUVX(sv)); else hk = INT2PTR(BHK *, SvIVX(sv)); if (BhkENTRY(hk, which)) BhkENTRY(hk, which)(aTHX_ arg); } } } STMT_END
#define __TVOS_10_0_1 100001
#define warner_nocontext Perl_warner_nocontext
#define IPPROTO_MICP 95
#define HVhek_UTF8 0x01
#define PERL_HASH_ITER_BUCKET(iter) (((iter)->xhv_riter) ^ ((iter)->xhv_rand))
#define _MACH_I386_THREAD_STATE_H_ 
#define newRV_noinc(a) Perl_newRV_noinc(aTHX_ a)
#define NGX_HAVE_GMTOFF 1
#define TASK_TRACE_MEMORY_INFO_COUNT ((mach_msg_type_number_t) (sizeof(task_trace_memory_info_data_t) / sizeof(natural_t)))
#define PRId32 "d"
#define HAS_STRXFRM 
#define MIN(a,b) (((a)<(b))?(a):(b))
#define is_NONCHAR_utf8_safe(s,e) ( ( ( LIKELY((e) > (s)) ) && ( LIKELY(((e) - (s)) >= UTF8SKIP(s)) ) ) ? ( ( 0xEF == ((const U8*)s)[0] ) ? ( ( 0xB7 == ((const U8*)s)[1] ) ? ( ( inRANGE_helper_(U8, ((const U8*)s)[2], 0x90, 0xAF) ) ? 3 : 0 ) : ( ( 0xBF == ((const U8*)s)[1] ) && ( inRANGE_helper_(U8, ((const U8*)s)[2], 0xBE, 0xBF) ) ) ? 3 : 0 ) : ( 0xF0 == ((const U8*)s)[0] ) ? ( ( ( ( ((const U8*)s)[1] == 0x9F || ( ( ((const U8*)s)[1] & 0xEF ) == 0xAF ) ) && ( 0xBF == ((const U8*)s)[2] ) ) && ( inRANGE_helper_(U8, ((const U8*)s)[3], 0xBE, 0xBF) ) ) ? 4 : 0 ) : ( inRANGE_helper_(U8, ((const U8*)s)[0], 0xF1, 0xF3) ) ? ( ( ( ( ( ((const U8*)s)[1] & 0xCF ) == 0x8F ) && ( 0xBF == ((const U8*)s)[2] ) ) && ( inRANGE_helper_(U8, ((const U8*)s)[3], 0xBE, 0xBF) ) ) ? 4 : 0 ) : ( ( ( ( 0xF4 == ((const U8*)s)[0] ) && ( 0x8F == ((const U8*)s)[1] ) ) && ( 0xBF == ((const U8*)s)[2] ) ) && ( inRANGE_helper_(U8, ((const U8*)s)[3], 0xBE, 0xBF) ) ) ? 4 : 0 ) : 0 )
#define case_165_SBOX32(hash,state,key) 
#define VM_INHERIT_SHARE ((vm_inherit_t) 0)
#define PARSE_OPTIONAL 0x00000001
#define HOST_NODE_PORT (19 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define PERL_ARGS_ASSERT_AV_ITER_P assert(av)
#define HAS_GETHOST_PROTOS 
#define VM_MEMORY_ROSETTA_EXECUTABLE_HEAP 234
#define DT_FIFO 1
#define isBLANK_utf8_safe(p,e) _generic_non_invlist_utf8_safe(_CC_BLANK, is_HORIZWS_high, p, e)
#define ATTR_FILE_DATALENGTH 0x00000200
#define PERL_ARGS_ASSERT_SAVE_GP assert(gv)
#define PERL_ARGS_ASSERT_CVGV_SET assert(cv)
#define __DARWIN_STRUCT_STAT64 { dev_t st_dev; mode_t st_mode; nlink_t st_nlink; __darwin_ino64_t st_ino; uid_t st_uid; gid_t st_gid; dev_t st_rdev; __DARWIN_STRUCT_STAT64_TIMES off_t st_size; blkcnt_t st_blocks; blksize_t st_blksize; __uint32_t st_flags; __uint32_t st_gen; __int32_t st_lspare; __int64_t st_qspare[2]; }
#define IVSIZE 8
#define __enum_closed 
#define PRIO_MAX 20
#define I_TIME 
#define PerlSock_getprotobynumber(n) getprotobynumber(n)
#define ngx_file_access(sb) ((sb)->st_mode & 0777)
#define HOST_NOTIFY_TYPE_MAX 1
#define PERL_ARGS_ASSERT_MG_GET assert(sv)
#define PERL_ARGS_ASSERT_DEBSTACK 
#define PerlDir_rmdir(name) rmdir((name))
#define case_217_SBOX32(hash,state,key) 
#define GvIMPORTED_HV(gv) (GvFLAGS(gv) & GVf_IMPORTED_HV)
#define ATTR_CMN_OBJTAG 0x00000010
#define DEBUG_A_TEST_ UNLIKELY(PL_debug & DEBUG_A_FLAG)
#define HAS_CTERMID_R 
#define X86_EXCEPTION_STATE64_COUNT x86_EXCEPTION_STATE64_COUNT
#define RXp_MATCH_COPIED_on(prog) (RXp_EXTFLAGS(prog) |= RXf_COPY_DONE)
#define THREAD_BACKGROUND_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (thread_background_policy_data_t) / sizeof (integer_t)))
#define FF_CHECKNL 5
#define LvTYPE(sv) ((XPVLV*) SvANY(sv))->xlv_type
#define PRId64 __PRI_64_LENGTH_MODIFIER__ "d"
#define HOST_EXTMOD_INFO64_LATEST_COUNT HOST_EXTMOD_INFO64_COUNT
#define SBOX32_STATE_BYTES (SBOX32_STATE_WORDS * sizeof(U32))
#define isSPACE_uvchr(c) _generic_uvchr(_CC_SPACE, is_XPERLSPACE_cp_high, c)
#define PERL_ARGS_ASSERT_SAVE_I8 assert(bytep)
#define GMTIME_MAX 67768036191676799
#define HAS_STRUCT_STATFS_F_FLAGS 
#define _PID_T 
#define PF_NS AF_NS
#define _MACH_EXCEPTION_TYPES_H_ 
#define va_copy(d,s) __builtin_va_copy(d,s)
#define pad_add_name_pvs(name,flags,typestash,ourstash) Perl_pad_add_name_pvn(aTHX_ STR_WITH_LEN(name), flags, typestash, ourstash)
#define TASK_DEBUG_INFO_INTERNAL 29
#define HOST_DEBUG_INFO_INTERNAL 10
#define PERL_ARGS_ASSERT_SAVE_IV assert(ivp)
#define PERL_ARGS_ASSERT_REGINITCOLORS 
#define ngx_http_upstream_rr_peers_wlock(peers) if (peers->shpool) { ngx_rwlock_wlock(&peers->rwlock); }
#define HAS_GETGRENT 
#define PERL_ARGS_ASSERT_DUMP_EVAL 
#define padadd_STALEOK 0x08
#define OPpLVREF_ELEM 0x04
#define ATTR_FILE_RSRCLENGTH 0x00001000
#define ___int_ptrdiff_t_h 
#define EFL_VIF 0x00080000
#define PCRE2_EXTRA_ALLOW_SURROGATE_ESCAPES 0x00000001u
#define NGX_EPIPE EPIPE
#define ngx_directio_on(fd) fcntl(fd, F_NOCACHE, 1)
#define __APPLE_API_PRIVATE 
#define KERN_KDWRITETR_V3 28
#define ngx_conf_merge_str_value(conf,prev,default) if (conf.data == NULL) { if (prev.data) { conf.len = prev.len; conf.data = prev.data; } else { conf.len = sizeof(default) - 1; conf.data = (u_char *) default; } }
#define RXf_BASE_SHIFT (_RXf_PMf_SHIFT_NEXT + 2)
#define HAS_QUERYLOCALE 
#define EXC_I386_GPFLT 13
#define PerlSock_accept(s,a,l) accept(s, a, l)
#define _NGX_DARWIN_H_INCLUDED_ 
#define PF_VSOCK AF_VSOCK
#define NGX_HTTP_MOVED_PERMANENTLY 301
#define PERL_ARGS_ASSERT_CK_GLOB assert(o)
#define PerlProc_setgid(g) setgid((g))
#define HeHASH(he) HEK_HASH(HeKEY_hek(he))
#define ATTR_DIR_ALLOCSIZE 0x00000008
#define KERN_KDREMOVE 7
#define PERL_ARGS_ASSERT_GROK_NUMBER assert(pv)
#define _MACH_MACHINE__STRUCTS_H_ 
#define PERL_ARGS_ASSERT_GET_DEPRECATED_PROPERTY_MSG 
#define PERL_ARGS_ASSERT_CX_PUSHGIVEN assert(cx)
#define PL_vtbl_pos PL_magic_vtables[want_vtbl_pos]
#define PERL_EXIT_EXPECTED 0x01
#define SIOCIFCREATE _IOWR('i', 120, struct ifreq)
#define PCRE2_INFO_MATCHLIMIT 14
#define HAS_RENAMEAT 
#define pv_uni_display(a,b,c,d,e) Perl_pv_uni_display(aTHX_ a,b,c,d,e)
#define UF_APPEND 0x00000004
#define CopSTASHPV(c) (CopSTASH(c) ? HvNAME_get(CopSTASH(c)) : NULL)
#define case_43_SBOX32(hash,state,key) 
#define IoFMT_NAME(sv) ((XPVIO*) SvANY(sv))->xio_fmt_name
#define PERL_MAGIC_tied 'P'
#define isGV_with_GP_on(sv) STMT_START { assert (SvTYPE(sv) == SVt_PVGV || SvTYPE(sv) == SVt_PVLV); assert (!SvPOKp(sv)); assert (!SvIOKp(sv)); (SvFLAGS(sv) |= SVpgv_GP); } STMT_END
#define PERL_ARGS_ASSERT_MRO_GET_PRIVATE_DATA assert(smeta); assert(which)
#define UTF8_ALLOW_SHORT 0x0008
#define DOUBLE_IS_UNKNOWN_FORMAT -1
#define FP_PREC_53B 2
#define pad_findmy_pv(a,b) Perl_pad_findmy_pv(aTHX_ a,b)
#define WARN_EXPERIMENTAL__BITWISE 58
#define PF_LOCAL AF_LOCAL
#define PWEXPIRE 
#define NGX_EHOSTUNREACH EHOSTUNREACH
#define SIOCAUTOADDR _IOWR('i', 38, struct ifreq)
#define S_IFIFO 0010000
#define dPOPPOPnnrl dPOPXnnrl(POP)
#define PERL_ARGS_ASSERT_SET_NUMERIC_UNDERLYING 
#define TCPOPT_CCECHO 13
#define DEBUG_c(a) 
#define HEKf256 "3p"
#define CPF_IGNORE_MODE 0x0002
#define MAXSYMLINKS 32
#define NGX_HAVE_INHERITED_NONBLOCK 1
#define PERL_ARGS_ASSERT_CK_TRUNC assert(o)
#define PERL_ARGS_ASSERT_MG_LOCALIZE assert(sv); assert(nsv)
#define PerlLIO_read(fd,buf,count) read((fd), (buf), (count))
#define XOPf_xop_class 0x04
#define EFL_VIP 0x00100000
#define sa_sigaction __sigaction_u.__sa_sigaction
#define setbit(a,i) (((unsigned char *)(a))[(i)/NBBY] |= 1u<<((i)%NBBY))
#define MACH_SEND_TIMEOUT 0x00000010
#define CvUNIQUE_off(cv) (CvFLAGS(cv) &= ~CVf_UNIQUE)
#define CvNODEBUG(cv) (CvFLAGS(cv) & CVf_NODEBUG)
#define SAVEVPTR(s) save_vptr((void*)&(s))
#define sv_2pv_flags(a,b,c) Perl_sv_2pv_flags(aTHX_ a,b,c)
#define utf8n_to_uvchr_error(s,len,lenp,flags,errors) utf8n_to_uvchr_msgs(s, len, lenp, flags, errors, 0)
#define A_GETSTAT 12
#define PERL_ARGS_ASSERT_PACKAGE_VERSION assert(v)
#define VM_BEHAVIOR_FREE ((vm_behavior_t) 6)
#define PERL_ARGS_ASSERT_SAVE_CLEARSV assert(svp)
#define NI_NUMERICSCOPE 0x00000100
#define TASK_AUDIT_TOKEN 15
#define OPpASSIGN_COMMON_RC1 0x20
#define __strftimelike(fmtarg) __attribute__((__format__ (__strftime__, fmtarg, 0)))
#define __DBL_MIN_EXP__ (-1021)
#define HEK_HASH(hek) (hek)->hek_hash
#define UNICODE_WARN_ILLEGAL_C9_INTERCHANGE (UNICODE_WARN_SURROGATE|UNICODE_WARN_SUPER)
#define _CC_LOWER 3
#define HOST_NOTIFY_CALENDAR_SET 1
#define PERL_ARGS_ASSERT_SV_FORCE_NORMAL_FLAGS assert(sv)
#define EMULTIHOP 95
#define NOTE_NSECONDS 0x00000004
#define EAI_BADHINTS 12
#define UNI_DISPLAY_BACKSLASH 0x0002
#define tryAMAGICunTARGETlist(meth,jump) STMT_START { dSP; SV *tmpsv; SV *arg= *sp; U8 gimme = GIMME_V; if (UNLIKELY(SvAMAGIC(arg) && (tmpsv = amagic_call(arg, &PL_sv_undef, meth, AMGf_want_list | AMGf_noright |AMGf_unary)))) { SPAGAIN; if (gimme == G_VOID) { NOOP; } else if (gimme == G_ARRAY) { SSize_t i; SSize_t len; assert(SvTYPE(tmpsv) == SVt_PVAV); len = av_count((AV *)tmpsv); (void)POPs; EXTEND(sp, len); for (i = 0; i < len; ++i) PUSHs(av_shift((AV *)tmpsv)); } else { dATARGET; sv_setsv(TARG, tmpsv); if (PL_op->op_flags & OPf_STACKED) sp--; SETTARG; } PUTBACK; if (jump) { OP *jump_o = NORMAL->op_next; while (jump_o->op_type == OP_NULL) jump_o = jump_o->op_next; assert(jump_o->op_type == OP_ENTERSUB); (void)POPMARK; return jump_o->op_next; } return NORMAL; } } STMT_END
#define REENTRANT_PROTO_I_SBI 37
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_4(x) x
#define SvLEN_set(sv,val) STMT_START { assert(PL_valid_types_PVX[SvTYPE(sv) & SVt_MASK]); assert(!isGV_with_GP(sv)); assert(!(SvTYPE(sv) == SVt_PVIO && !(IoFLAGS(sv) & IOf_FAKE_DIRP))); (((XPV*) SvANY(sv))->xpv_len = (val)); } STMT_END
#define PERL_ARGS_ASSERT_MAGIC_GETSUBSTR assert(sv); assert(mg)
#define UNKNOWN_ERRNO_MSG "(unknown)"
#define SIPROUND STMT_START { v0 += v1; v1=ROTL64(v1,13); v1 ^= v0; v0=ROTL64(v0,32); v2 += v3; v3=ROTL64(v3,16); v3 ^= v2; v0 += v3; v3=ROTL64(v3,21); v3 ^= v0; v2 += v1; v1=ROTL64(v1,17); v1 ^= v2; v2=ROTL64(v2,32); } STMT_END
#define DEBUG_l(a) 
#define isUTF8_CHAR_flags(s,e,flags) (UNLIKELY((e) <= (s)) ? 0 : (UTF8_IS_INVARIANT(*s)) ? 1 : UNLIKELY(((e) - (s)) < UTF8SKIP(s)) ? 0 : is_utf8_char_helper(s, e, flags))
#define _POSIX_THREAD_PRIORITY_SCHEDULING (-1)
#define PCRE2_ERROR_BADUTFOFFSET (-36)
#define PERL_MAGIC_TYPE_READONLY_ACCEPTABLE(t) (PL_magic_data[(U8)(t)] & PERL_MAGIC_READONLY_ACCEPTABLE)
#define PRIO_MIN -20
#define I8_TO_NATIVE_UTF8(ch) (__ASSERT_(FITS_IN_8_BITS(ch)) ((U8) ((ch) | 0)))
#define LONG_DOUBLE_IS_VAX_H_FLOAT 9
#define EXC_I386_PGFLT 14
#define case_103_SBOX32(hash,state,key) 
#define dTARG SV *targ
#define TAILQ_INIT(head) do { TAILQ_FIRST((head)) = NULL; (head)->tqh_last = &TAILQ_FIRST((head)); QMD_TRACE_HEAD(head); } while (0)
#define SvROK(sv) (SvFLAGS(sv) & SVf_ROK)
#define _PTHREAD_IMPL_H_ 
#define HW_PRODUCT 27
#define MACH_VOUCHER_ATTR_KEY_BITS MACH_VOUCHER_ATTR_KEY_USER_DATA
#define __FLT128_MAX_10_EXP__ 4932
#define F_GETPROTECTIONCLASS 63
#define ngx_sleep(s) (void) sleep(s)
#define OA_CVREF 5
#define x86_DEBUG_STATE32_COUNT ((mach_msg_type_number_t) ( sizeof (x86_debug_state32_t) / sizeof (int) ))
#define CXt_LOOP_LIST 7
#define HAS_HTONL 
#define HAS_HTONS 
#define PUSER 50
#define USER_FSIGNATURES_CDHASH_LEN 20
#define VM_MAP_INSPECT_NULL ((vm_map_inspect_t) 0)
#define _PATH_PWD "/etc"
#define PCRE2_INFO_NAMEENTRYSIZE 18
#define PerlSIO_fsetpos(f,p) fsetpos(f,p)
#define BhkDISABLE(hk,which) STMT_START { BhkFLAGS(hk) &= ~(BHKf_ ## which); } STMT_END
#define TASK_EXC_GUARD_ALL 0xff
#define PARENT_PAD_INDEX(pn) (pn)->xpadn_low
#define PZERO 22
#define KERN_RAGE_THREAD 2
#define MACH_VOUCHER_NAME_NULL ((mach_voucher_name_t) 0)
#define utf8_hop_forward Perl_utf8_hop_forward
#define FD_COPY(f,t) __DARWIN_FD_COPY(f, t)
#define __DARWIN_NFDBITS (sizeof(__int32_t) * __DARWIN_NBBY)
#define NGX_HTTP_UNSUPPORTED_MEDIA_TYPE 415
#define NGX_HTTPS_CERT_ERROR 495
#define VM_MEMORY_ROSETTA 230
#define _SC_SPIN_LOCKS 80
#define MSG_HOLD 0x800
#define is_utf8_string_loc(s,len,ep) is_utf8_string_loclen(s, len, ep, 0)
#define _SC_2_VERSION 17
#define DEBUG_v(a) 
#define VM_FLAGS_SUPERPAGE_SIZE_ANY (SUPERPAGE_SIZE_ANY << VM_FLAGS_SUPERPAGE_SHIFT)
#define task_get_bootstrap_port(task,port) (task_get_special_port((task), TASK_BOOTSTRAP_PORT, (port)))
#define cLISTOP cLISTOPx(PL_op)
#define _SC_IPV6 118
#define PERL_ARGS_ASSERT_CXINC 
#define NGX_FILE_RDWR O_RDWR
#define MEMORY_OBJECT_RELEASE_NO_OP 0x4
#define DEBUG_x(a) 
#define KERN_MAXFILESPERPROC 29
#define _SC_XOPEN_REALTIME 111
#define MAP_MEM_VM_SHARE 0x400000
#define PCRE2_ERROR_ALPHA_ASSERTION_UNKNOWN 195
#define KERN_MAXID 72
#define PERL_ARGS_ASSERT_SV_UNMAGIC assert(sv)
#define RX_PRECOMP_const(rx_sv) (RX_WRAPPED_const(rx_sv) + ReANY(rx_sv)->pre_prefix)
#define IoTOP_NAME(sv) ((XPVIO*) SvANY(sv))->xio_top_name
#define DEBUG_TOP_FLAG 0x80000000
#define _SYS_QOS_H 
#define GvIMPORTED_SV(gv) (GvFLAGS(gv) & GVf_IMPORTED_SV)
#define SO_SNDBUF 0x1001
#define XOPf_xop_peep 0x08
#define PL_utf8_xidstart (vTHX->Iutf8_xidstart)
#define __MAC_10_13_1 101301
#define __MAC_10_13_2 101302
#define __MAC_10_13_4 101304
#define markstack_grow() Perl_markstack_grow(aTHX)
#define IP_TOS 3
#define PTHREAD_CREATE(t,a,s,d) pthread_create(t,&(a),s,d)
#define whichsig_sv(a) Perl_whichsig_sv(aTHX_ a)
#define SETPROTOENT_R_PROTO 0
#define case_17_SBOX32(hash,state,key) _SBOX32_CASE(17,hash,state,key)
#define PERL_ARGS_ASSERT_CK_RVCONST assert(o)
#define PL_incgv (vTHX->Iincgv)
#define clear_defarray(a,b) Perl_clear_defarray(aTHX_ a,b)
#define PUSHi(i) STMT_START { TARGi(i,1); PUSHs(TARG); } STMT_END
#define TASK_FLAVOR_READ 1
#define PUSHn(n) STMT_START { TARGn(n,1); PUSHs(TARG); } STMT_END
#define _NGX_EVENT_PIPE_H_INCLUDED_ 
#define PUSHu(u) STMT_START { TARGu(u,1); PUSHs(TARG); } STMT_END
#define SIGBUS 10
#define SvSCREAM_on(sv) (SvFLAGS(sv) |= SVp_SCREAM)
#define PERL_ARGS_ASSERT_SV_UV assert(sv)
#define get_sv(a,b) Perl_get_sv(aTHX_ a,b)
#define SvPV_renew(sv,n) STMT_START { SvLEN_set(sv, n); SvPV_set((sv), (MEM_WRAP_CHECK_(n,char) (char*)saferealloc((Malloc_t)SvPVX(sv), (MEM_SIZE)((n))))); } STMT_END
#define IN_LC_ALL_COMPILETIME IN_LOCALE_COMPILETIME
#define __enum_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_open
#define VM_MEMORY_EAR_DECODER 102
#define IPPROTO_IDPR 35
#define PERL_ARGS_ASSERT_HV_MAGIC assert(hv)
#define SvPOK_utf8_pure_nogthink(sv) ((SvFLAGS(sv) & (SVf_POK|SVf_UTF8|SVf_IOK|SVf_NOK|SVf_ROK|SVpgv_GP|SVf_THINKFIRST|SVs_GMG)) == (SVf_POK|SVf_UTF8))
#define PerlSock_getsockopt(s,l,n,v,i) getsockopt(s, l, n, v, i)
#define __deprecated_msg(_msg) __attribute__((__deprecated__(_msg)))
#define PL_InMultiCharFold (vTHX->IInMultiCharFold)
#define NOTE_PCTRLMASK (~NOTE_PDATAMASK)
#define fwrite1 fwrite
#define SLIST_INSERT_HEAD(head,elm,field) do { SLIST_NEXT((elm), field) = SLIST_FIRST((head)); SLIST_FIRST((head)) = (elm); } while (0)
#define PERL_ARGS_ASSERT_INIT_UNIPROPS 
#define POLICY_RR_LIMIT_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_rr_limit)/sizeof(integer_t)))
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_0(x) 
#define __CHAR_BIT__ 8
#define PERL_ARGS_ASSERT_NEWPVOP 
#define STAILQ_SWAP(head1,head2,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH do { struct type *swap_first = STAILQ_FIRST(head1); struct type **swap_last = (head1)->stqh_last; STAILQ_FIRST(head1) = STAILQ_FIRST(head2); (head1)->stqh_last = (head2)->stqh_last; STAILQ_FIRST(head2) = swap_first; (head2)->stqh_last = swap_last; if (STAILQ_EMPTY(head1)) (head1)->stqh_last = &STAILQ_FIRST(head1); if (STAILQ_EMPTY(head2)) (head2)->stqh_last = &STAILQ_FIRST(head2); } while (0) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define gv_check(a) Perl_gv_check(aTHX_ a)
#define _XOPEN_CRYPT (1)
#define MACH_PORT_TYPE_SEND MACH_PORT_TYPE(MACH_PORT_RIGHT_SEND)
#define _TIME_H_ 
#define PL_padix_floor (vTHX->Ipadix_floor)
#define A_OLDSETPOLICY 3
#define SHRT_MAX __SHRT_MAX__
#define PUSHTARG STMT_START { SvSETMAGIC(TARG); PUSHs(TARG); } STMT_END
#define IPC_CREAT 001000
#define AF_DECnet 12
#define PERL_ARGS_ASSERT_FREE_TMPS 
#define STRUCT_SV sv
#define USE_LEFT(sv) (SvOK(sv) || !(PL_op->op_flags & OPf_STACKED))
#define case_129_SBOX32(hash,state,key) 
#define MPG_IMMOVABLE_RECEIVE 0x02
#define PerlIO_stderr() Perl_PerlIO_stderr(aTHX)
#define HSm_APIVERLEN 0x0000001F
#define SIGTTIN 21
#define PCRE2_ERROR_POSIX_NO_SUPPORT_COLLATING 113
#define case_6_SBOX32(hash,state,key) _SBOX32_CASE(6,hash,state,key)
#define my_lstat() my_lstat_flags(SV_GMAGIC)
#define EACCES 13
#define IPPROTO_IDRP 45
#define _SC_COLL_WEIGHTS_MAX 13
#define PL_sv_zero (vTHX->Isv_zero)
#define _PTHREAD_RWLOCKATTR_T 
#define BOM_UTF8_TAIL "\xBB\xBF"
#define ILLEGAL_UTF8_BYTE I8_TO_NATIVE_UTF8(0xC1)
#define VM_MAXID 6
#define HAS_GMTIME_R 
#define isALNUMC_utf8(p,e) isALPHANUMERIC_utf8(p,e)
#define TIOCMSDTRWAIT _IOW('t', 91, int)
#define MACH_TASK_BASIC_INFO_COUNT (sizeof(mach_task_basic_info_data_t) / sizeof(natural_t))
#define KIPC_MAX_DATALEN 7
#define GETNCNT 3
#define NGX_ECONNRESET ECONNRESET
#define CPU_SUBTYPE_MIPS_R2000 ((cpu_subtype_t) 5)
#define HvENAME_HEK(hv) (SvOOK(hv) && HvAUX(hv)->xhv_name_u.xhvnameu_name ? HvENAME_HEK_NN(hv) : NULL)
#define save_freepv(pv) save_pushptr((void *)(pv), SAVEt_FREEPV)
#define KERN_FILE 15
#define Stat(fname,bufptr) stat((fname),(bufptr))
#define TASK_KERNEL_PORT 1
#define DOUBLE_IS_IEEE_FORMAT 
#define ngx_strchr(s1,c) strchr((const char *) s1, (int) c)
#define DM_RGID 0x010
#define OPpDEREF_HV 0x20
#define _USE_EXTENDED_LOCALES_ 
#define PIPE_BUF 512
#define DEBUG_s_FLAG 0x00000002
#define PERL_ARGS_ASSERT_SV_MAGIC assert(sv)
#define whichsig_pv(a) Perl_whichsig_pv(aTHX_ a)
#define IP_TTL 4
#define MACH_SEND_INVALID_REPLY 0x10000009
#define IN_CLASSB_MAX 65536
#define A_GETCWD 8
#define PerlSock_endservent endservent
#define __OSX_AVAILABLE_BUT_DEPRECATED(_osxIntro,_osxDep,_iosIntro,_iosDep) 
#define stderr __stderrp
#define form_nocontext Perl_form_nocontext
#define ASCTIME_R_PROTO REENTRANT_PROTO_B_SB
#define HAS_READV 
#define SF_SYNTHETIC 0xc0000000
#define uvchr_to_utf8_flags(d,uv,flags) uvchr_to_utf8_flags_msgs(d,uv,flags, 0)
#define PERL_ARGS_ASSERT_SV_POS_U2B_FLAGS assert(sv)
#define PERL_ARGS_ASSERT_HV_KSPLIT assert(hv)
#define PL_Proc (vTHX->IProc)
#define NGX_RADIX_NO_VALUE (uintptr_t) -1
#define HW_L1ICACHESIZE 17
#define WARN_UTF8 44
#define SA_USERTRAMP 0x0100
#define CxMULTICALL(c) ((c)->cx_type & CXp_MULTICALL)
#define SVf "-p"
#define RX_SAVED_COPY(rx_sv) (RXp_SAVED_COPY(ReANY(rx_sv)))
#define SETLOCALE_LOCK NOOP
#define PRIiLEAST8 PRIi8
#define TH_CWR 0x80
#define TIOCSSIZE TIOCSWINSZ
#define Atoul(s) Strtoul(s, NULL, 10)
#define KELVIN_SIGN 0x212A
#define _NGX_RADIX_TREE_H_INCLUDED_ 
#define case_70_SBOX32(hash,state,key) 
#define PERL_ARENA_ROOTS_SIZE (SVt_LAST)
#define PL_minus_l (vTHX->Iminus_l)
#define PF_DECnet AF_DECnet
#define PERL_ARGS_ASSERT_REFCOUNTED_HE_NEW_SV assert(key)
#define IPPROTO_VISA 70
#define PERL_ARGS_ASSERT_SV_VCATPVFN_FLAGS assert(sv); assert(pat)
#define __ORDER_LITTLE_ENDIAN__ 1234
#define save_freesv(op) save_pushptr((void *)(op), SAVEt_FREESV)
#define PERL_PV_ESCAPE_RE 0x008000
#define sv_catpv_mg(a,b) Perl_sv_catpv_mg(aTHX_ a,b)
#define PERL_ARGS_ASSERT_NEWASSIGNOP 
#define EXTEND(p,n) STMT_START { EXTEND_HWM_SET(p, n); if (UNLIKELY(_EXTEND_NEEDS_GROW(p,n))) { sp = stack_grow(sp,p,_EXTEND_SAFE_N(n)); PERL_UNUSED_VAR(sp); } } STMT_END
#define PL_stashpad (vTHX->Istashpad)
#define IPV6CTL_AUTO_FLOWLABEL 17
#define VM_FLAGS_FIXED 0x0000
#define KERN_RESOURCE_SHORTAGE 6
#define init_i18nl10n(a) Perl_init_i18nl10n(aTHX_ a)
#define NVff "f"
#define BLKDEV_IOSIZE 2048
#define MACH_RCV_NOTIFY 0x00000000
#define FITS_IN_8_BITS(c) ( (sizeof(c) == 1) || !(((WIDEST_UTYPE)((c) | 0)) & ~0xFF))
#define amagic_deref_call(a,b) Perl_amagic_deref_call(aTHX_ a,b)
#define gp_dup(a,b) Perl_gp_dup(aTHX_ a,b)
#define PERL_ARGS_ASSERT_DO_IPCCTL assert(mark); assert(sp)
#define SIOCGIFDEVMTU _IOWR('i', 68, struct ifreq)
#define NGX_HAVE_D_TYPE 1
#define M_E 2.71828182845904523536028747135266250
#define __DARWIN_PDP_ENDIAN 3412
#define P_RESV11 0x08000000
#define PERL_ARGS_ASSERT_PERL_DESTRUCT assert(my_perl)
#define HAS_FUTIMES 
#define NVgf "g"
#define SvFAKE(sv) (SvFLAGS(sv) & SVf_FAKE)
#define PERL_GET_CONTEXT PTHREAD_GETSPECIFIC(PL_thr_key)
#define AMG_CALLunary(sv,meth) amagic_call(sv,&PL_sv_undef, meth, AMGf_noright | AMGf_unary)
#define sharepvn(pv,len,hash) Perl_sharepvn(pv, len, hash)
#define RXp_ZERO_LEN(prog) (RXp_OFFS(prog)[0].start + (SSize_t)RXp_GOFS(prog) == RXp_OFFS(prog)[0].end)
#define case_34_SBOX32(hash,state,key) 
#define croak Perl_croak_nocontext
#define IOPOL_TYPE_VFS_IGNORE_CONTENT_PROTECTION 6
#define RXf_PMf_KEEPCOPY (1U << (RXf_PMf_STD_PMMOD_SHIFT+6))
#define _STRUCT_X86_AVX512_STATE64 struct __darwin_x86_avx512_state64
#define HAS_READDIR_R 
#define __IOS_PROHIBITED 
#define SvUNLOCK(sv) PL_unlockhook(aTHX_ sv)
#define EXC_MASK_BAD_INSTRUCTION (1 << EXC_BAD_INSTRUCTION)
#define inRANGE_helper_(cast,c,l,u) withinCOUNT_KNOWN_VALID_(((cast) (c)), (l), ((u) - (l)))
#define ngx_tm_mday tm_mday
#define SHRT_MIN (-SHRT_MAX - 1)
#define _SC_SPORADIC_SERVER 81
#define cBINOP cBINOPx(PL_op)
#define LC_GLOBAL_LOCALE ((locale_t)-1)
#define NDBM_H_USES_PROTOTYPES 
#define MEMORY_OBJECT_RETURN_ANYTHING 3
#define _SC_THREAD_PRIO_INHERIT 87
#define MPO_TEMPOWNER 0x04
#define PERL_ARGS_ASSERT_NEWGVGEN 
#define RXp_ISTAINTED(prog) (RXp_EXTFLAGS(prog) & RXf_TAINTED)
#define PERL_ARGS_ASSERT_CROAK_NO_MODIFY 
#define MNT_IGNORE_OWNERSHIP 0x00200000
#define PERL_ARGS_ASSERT_SV_2IV assert(sv)
#define IP_FW_GET 44
#define SvSCREAM(sv) ((SvFLAGS(sv) & (SVp_SCREAM|SVp_POK)) == (SVp_SCREAM|SVp_POK))
#define IN_LOOPBACKNET 127
#define NGX_EMLINK EMLINK
#define I_STDBOOL 
#define CxREALEVAL(c) (((c)->cx_type & (CXTYPEMASK|CXp_REAL)) == (CXt_EVAL|CXp_REAL))
#define init_i18nl14n(a) Perl_init_i18nl14n(aTHX_ a)
#define PL_utf8cache (vTHX->Iutf8cache)
#define _NGX_HTTP_CORE_H_INCLUDED_ 
#define instr(haystack,needle) strstr((char *) haystack, (char *) needle)
#define CPU_STATE_IDLE 2
#define M_PI 3.14159265358979323846264338327950288
#define _CTYPE_SW0 0x20000000L
#define _CTYPE_SW1 0x40000000L
#define _CTYPE_SW2 0x80000000L
#define _CTYPE_SW3 0xc0000000L
#define NGX_HAVE_POSIX_MEMALIGN 1
#define P_SELECT 0x00000040
#define USERMODE(x) (((x) & 3) == 3)
#define _CTYPE_SWM 0xe0000000L
#define _CTYPE_SWS 30
#define ngx_log_pid ngx_pid
#define CTYPE256 
#define HAS_HYPOT 
#define w_termsig w_T.w_Termsig
#define OPpENTERSUB_DB 0x40
#define IPV6_3542PKTINFO 46
#define _MACH_VM_PROT_H_ 
#define __x86_64 1
#define mess_nocontext Perl_mess_nocontext
#define PERL_ARGS_ASSERT_FINALIZE_OPTREE assert(o)
#define VM_VOLATILE_GROUP_MASK (7 << VM_VOLATILE_GROUP_SHIFT)
#define IN6_ARE_ADDR_EQUAL(a,b) (memcmp(&(a)->s6_addr[0], &(b)->s6_addr[0], sizeof (struct in6_addr)) == 0)
#define MACH_MSGH_KIND_NORMAL 0x00000000
#define ATTR_CMN_DATA_PROTECT_FLAGS 0x40000000
#define PERL_ARGS_ASSERT_OP_CONVERT_LIST 
#define _OS__OSBYTEORDERI386_H 
#define HS_GETINTERPSIZE(key) ((key) >> 16)
#define ATTR_CMNEXT_RELPATH 0x00000004
#define PL_statusvalue (vTHX->Istatusvalue)
#define HASATTRIBUTE_MALLOC 
#define NGX_HTTP_TO_HTTPS 497
#define PerlLIO_unlink(file) unlink((file))
#define HAS_LINK 
#define VM_BEHAVIOR_REUSABLE ((vm_behavior_t) 8)
#define SAVEt_SET_SVFLAGS 51
#define PTHREAD_PROCESS_SHARED 1
#define NV_NAN_QS_XOR(nvp) (NV_NAN_QS_BYTE(nvp) ^= NV_NAN_QS_BIT)
#define PERL_ARGS_ASSERT_SWITCH_TO_GLOBAL_LOCALE 
#define SvPADTMP_off(sv) (SvFLAGS(sv) &= ~SVs_PADTMP)
#define PERL_ARGS_ASSERT_MY_STRFTIME assert(fmt)
#define PERL_ARGS_ASSERT_REFCOUNTED_HE_FETCH_PV assert(key)
#define CVf_CONST 0x0004
#define __INT_LEAST8_WIDTH__ 8
#define NGX_CONFIGURE ""
#define dTOPnv NV value = TOPn
#define EV_DISPATCH2 (EV_DISPATCH | EV_UDATA_SPECIFIC)
#define HAS_FSEEKO 
#define CIRCLEQ_NEXT(elm,field) ((elm)->field.cqe_next)
#define PERL_STATIC_INLINE static __inline__
#define DOUBLE_IS_VAX_G_FLOAT 11
#define AUDIT_TRIGGER_ROTATE_USER 6
#define FOLDEQ_S2_ALREADY_FOLDED (1 << 3)
#define __SIG_ATOMIC_TYPE__ int
#define case_172_SBOX32(hash,state,key) 
#define SvOK_off_exc_UV(sv) (assert_not_ROK(sv) SvFLAGS(sv) &= ~(SVf_OK| SVf_UTF8), SvOOK_off(sv))
#define GLOB_APPEND 0x0001
#define PERL_ARGS_ASSERT_MAGIC_GET assert(sv); assert(mg)
#define PF_CCITT AF_CCITT
#define __DBL_MIN_10_EXP__ (-307)
#define PERL_ARGS_ASSERT_SV_CLEAN_OBJS 
#define newPADNAMEouter Perl_newPADNAMEouter
#define PERL_ARGS_ASSERT_AV_UNSHIFT assert(av)
#define PCRE2_NO_DOTSTAR_ANCHOR 0x00008000u
#define HINT_LEXICAL_IO_OUT 0x00080000
#define gv_autoload_pv(a,b,c) Perl_gv_autoload_pv(aTHX_ a,b,c)
#define IPPROTO_MEAS 19
#define MACH_MSG_NULL (mach_msg_header_t *) 0
#define OPpFLIP_LINENUM 0x40
#define A_SETSFLAGS 40
#define GLOB_ERR 0x0004
#define PL_E_FORMAT_PRECISION 2
#define OP_LVALUE_NO_CROAK 1
#define VOL_CAP_FMT_CASE_PRESERVING 0x00000200
#define KERN_KDWRITETR 17
#define HAS_TCSETPGRP 
#define _SC_MEMLOCK_RANGE 31
#define scan_version(a,b,c) Perl_scan_version(aTHX_ a,b,c)
#define NATIVE_TO_UTF(ch) NATIVE_UTF8_TO_I8(ch)
#define ptr_table_clear(a) Perl_ptr_table_clear(aTHX_ a)
#define NGX_EINPROGRESS EINPROGRESS
#define PMf_NONDESTRUCT (1U<<(PMf_BASE_SHIFT+12))
#define MCAST_JOIN_SOURCE_GROUP 82
#define i386_THREAD_STATE_COUNT ((mach_msg_type_number_t) ( sizeof (i386_thread_state_t) / sizeof (int) ))
#define KEV_DL_SIFMTU 3
#define Atol atol
#define VM_MEMORY_ANALYSIS_TOOL 10
#define ckWARN3_d(w1,w2,w3) Perl_ckwarn_d(aTHX_ packWARN3(w1,w2,w3))
#define MACH_MSGH_BITS_HOLDS_IMPORTANCE_ASSERTION(bits) (((bits) & MACH_MSGH_BITS_IMPHOLDASRT) != MACH_MSGH_BITS_ZERO)
#define wrap_op_checker(a,b,c) Perl_wrap_op_checker(aTHX_ a,b,c)
#define PerlEnv_uname(name) uname((name))
#define IPPROTO_TRUNK1 23
#define IPPROTO_TRUNK2 24
#define POP_MULTICALL STMT_START { PERL_CONTEXT *cx; cx = CX_CUR(); CX_LEAVE_SCOPE(cx); cx_popsub_common(cx); gimme = cx->blk_gimme; PERL_UNUSED_VAR(gimme); cx_popblock(cx); CX_POP(cx); POPSTACK; CATCH_SET(multicall_oldcatch); SPAGAIN; } STMT_END
#define RD_NODATA -1
#define DM_DELAY 0x100
#define PERL_ARGS_ASSERT_NEWHVHV 
#define PF_CNT AF_CNT
#define ATTR_FILE_DATAALLOCSIZE 0x00000400
#define __GNUC_PATCHLEVEL__ 0
#define pcre2_maketables PCRE2_SUFFIX(pcre2_maketables_)
#define DEBUG_S_TEST (0)
#define IPV6_HOPOPTS IPV6_3542HOPOPTS
#define OPpARGELEM_HV 0x04
#define CvANONCONST_off(cv) (CvFLAGS(cv) &= ~CVf_ANONCONST)
#define cBOOL(cbool) ((cbool) ? (bool)1 : (bool)0)
#define PCRE2_ERROR_UTF8_ERR11 (-13)
#define PCRE2_ERROR_UTF8_ERR12 (-14)
#define PCRE2_ERROR_UTF8_ERR13 (-15)
#define PCRE2_ERROR_UTF8_ERR14 (-16)
#define PCRE2_ERROR_UTF8_ERR15 (-17)
#define PCRE2_ERROR_UTF8_ERR16 (-18)
#define PCRE2_ERROR_UTF8_ERR17 (-19)
#define _POSIX_TRACE_EVENT_FILTER (-1)
#define PCRE2_ERROR_UTF8_ERR19 (-21)
#define USE_STAT_BLOCKS 
#define NGX_USE_GREEDY_EVENT 0x00000020
#define __DECONST(type,var) __CAST_AWAY_QUALIFIER(var, const, type)
#define HAS_FMA 
#define cGVOP_gv cGVOPx_gv(PL_op)
#define HW_USERMEM 6
#define POPpx (SvPVx_nolen(POPs))
#define CPU_SUBTYPE_SPARC_ALL ((cpu_subtype_t) 0)
#define F_RDADVISE 44
#define __UINT_FAST8_MAX__ 0xff
#define MSG_NOSIGNAL 0x80000
#define save_bool(a) Perl_save_bool(aTHX_ a)
#define AT_IPC_SEM ((unsigned char)2)
#define SAVEFREESV(s) save_freesv(MUTABLE_SV(s))
#define vsprintf(str,format,ap) __builtin___vsprintf_chk (str, 0, __darwin_obsz(str), format, ap)
#define SvAMAGIC(sv) (SvROK(sv) && SvOBJECT(SvRV(sv)) && HvAMAGIC(SvSTASH(SvRV(sv))))
#define NGROUPS NGROUPS_MAX
#define PCRE2_ERROR_UTF8_ERR20 (-22)
#define PCRE2_ERROR_UTF8_ERR21 (-23)
#define HvSHAREKEYS_on(hv) (SvFLAGS(hv) |= SVphv_SHAREKEYS)
#define ATTR_CMNEXT_NOFIRMLINKPATH 0x00000020
#define KERN_LOGSIGEXIT 36
#define newRANGE(a,b,c) Perl_newRANGE(aTHX_ a,b,c)
#define PERL_MAGIC_hints 'H'
#define SCNdLEAST8 SCNd8
#define __SWR 0x0008
#define PERL_ARGS_ASSERT_MODE_FROM_DISCIPLINE 
#define _FILESEC_T 
#define SI_USER 0x10001
#define STORE_LC_NUMERIC_SET_STANDARD() STMT_START { LC_NUMERIC_LOCK(_NOT_IN_NUMERIC_STANDARD); if (_NOT_IN_NUMERIC_STANDARD) { _restore_LC_NUMERIC_function = &Perl_set_numeric_underlying; Perl_set_numeric_standard(aTHX); } } STMT_END
#define _XOPEN_XCU_VERSION 4
#define HINT_UNI_8_BIT 0x00000800
#define MALLOC_PTR_REGION_RANGE_TYPE 2
#define ENOMEM 12
#define SIOCSIFNETMASK _IOW('i', 22, struct ifreq)
#define LONGLONGSIZE 8
#define EXC_I386_BOUND 7
#define PL_op_exec_cnt (vTHX->Iop_exec_cnt)
#define __OSX_AVAILABLE_BUT_DEPRECATED_MSG(_osxIntro,_osxDep,_iosIntro,_iosDep,_msg) 
#define tryAMAGICun_MG(method,flags) STMT_START { if ( UNLIKELY((SvFLAGS(TOPs) & (SVf_ROK|SVs_GMG))) && Perl_try_amagic_un(aTHX_ method, flags)) return NORMAL; } STMT_END
#define PERL_ARGS_ASSERT_YYERROR_PVN 
#define NGX_HTTP_CONTINUE 100
#define USE_THREAD_SAFE_LOCALE 
#define hek_dup(a,b) Perl_hek_dup(aTHX_ a,b)
#define SIOCGIFFUNCTIONALTYPE _IOWR('i', 173, struct ifreq)
#define OPpARG2_MASK 0x03
#define KEV_DL_WAKEFLAGS_CHANGED 17
#define PL_preambleav (vTHX->Ipreambleav)
#define LONG_DOUBLEKIND 3
#define RMS_FAC 0
#define isDIGIT_utf8(p,e) isDIGIT_utf8_safe(p, e)
#define h_addr h_addr_list[0]
#define NGX_HTTP_UPSTREAM_WEIGHT 0x0002
#define PERL_ARGS_ASSERT_MAGIC_GETUVAR assert(sv); assert(mg)
#define isPSXSPC_LC_utf8_safe(p,e) isSPACE_LC_utf8_safe(p, e)
#define UTF8_DISALLOW_NONCHAR 0x0400
#define AT_IPC_SHM ((unsigned char)3)
#define NUM2PTR(any,d) (any)(PTRV)(d)
#define POLICY_RR_INFO_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_rr_info)/sizeof(integer_t)))
#define _XBS5_LPBIG_OFFBIG __LPBIG_OFFBIG
#define PERL_ARGS_ASSERT_DEB_STACK_ALL 
#define __DARWIN_IPPORT_RESERVED 1024
#define GETLOGIN_R_PROTO REENTRANT_PROTO_I_BW
#define case_111_SBOX32(hash,state,key) 
#define THREAD_BACKGROUND_POLICY_DARWIN_BG 0x1000
#define UTF8_ALLOW_CONTINUATION 0x0002
#define IN_SOME_LOCALE_FORM_COMPILETIME cBOOL(PL_hints & (HINT_LOCALE|HINT_LOCALE_PARTIAL))
#define UNICODE_REPLACEMENT 0xFFFD
#define HeKEY(he) HEK_KEY(HeKEY_hek(he))
#define PadnameSV(pn) newSVpvn_flags(PadnamePV(pn), PadnameLEN(pn), SVs_TEMP|SVf_UTF8)
#define __exported_pop _Pragma("GCC visibility pop")
#define __SCCSID(s) __IDSTRING(sccsid,s)
#define __DARWIN_C_ANSI 010000L
#define _STDINT_H_ 
#define MPO_QLIMIT 0x02
#define PERL_ARGS_ASSERT_GV_STASHSV assert(sv)
#define S_IXOTH 0000001
#define RXapif_STORE 0x0002
#define __DARWIN_EXTSN(sym) __asm("_" __STRING(sym) __DARWIN_SUF_EXTSN)
#define KERN_KDTHRMAP 12
#define WARN_PACK 16
#define PERL_ARGS_ASSERT_WARNER assert(pat)
#define PERL_ARGS_ASSERT_CV_UNDEF_FLAGS assert(cv)
#define __PERL_HASH_STATE_BYTES (__PERL_HASH_WORD_SIZE * 4)
#define PERL_ARGS_ASSERT_SV_EQ 
#define LOCAL_PEEREPID 0x003
#define PERL_PV_ESCAPE_UNI_DETECT 0x000200
#define runops_debug() Perl_runops_debug(aTHX)
#define PerlProc_waitpid(p,s,f) waitpid((p), (s), (f))
#define PerlSock_getnetbyaddr(n,t) getnetbyaddr(n, t)
#define _PTHREAD_MUTEX_T 
#define SETHOSTENT_R_PROTO 0
#define PerlSIO_fclose(f) fclose(f)
#define IPV6_PORTRANGE 14
#define GLOB_LIMIT 0x1000
#define isWORDCHAR(c) isWORDCHAR_A(c)
#define PERL_ARGS_ASSERT_WRAP_OP_CHECKER assert(new_checker); assert(old_checker_p)
#define NGX_HTTP_WRITE_BUFFERED 0x10
#define WARN_EXPERIMENTAL__TRY 74
#define _POSIX2_UPE 200112L
#define AvREALISH(av) (SvFLAGS(av) & (SVpav_REAL|SVpav_REIFY))
#define __APPLE_USE_RFC_3542 
#define __WATCHOS_5_0 50000
#define __WATCHOS_5_1 50100
#define __WATCHOS_5_3 50300
#define RMS_FEX 0
#define PL_origfilename (vTHX->Iorigfilename)
#define I32_MAX_P1 (2.0 * (1 + (((U32)I32_MAX) >> 1)))
#define PERL_ARGS_ASSERT_DELIMCPY assert(to); assert(to_end); assert(from); assert(from_end); assert(retlen)
#define howmany(x,y) __DARWIN_howmany(x, y)
#define NAME_MAX 255
#define CPU_SUBTYPE_LIB64 0x80000000
#define __OS_AVAILABILITY_MSG(_target,_availability,_msg) 
#define ___POSIX_C_DEPRECATED_STARTING_200809L 
#define IPV6_3542HOPLIMIT 47
#define PCRE2_UCHAR PCRE2_SUFFIX(PCRE2_UCHAR)
#define VM_MAX_ADDRESS ((vm_offset_t) 0xFFE00000)
#define gv_dump(a) Perl_gv_dump(aTHX_ a)
#define PERL_ARGS_ASSERT_IS_UTF8_VALID_PARTIAL_CHAR 
#define case_25_SBOX32(hash,state,key) 
#define PF_SIP AF_SIP
#define _POSIX_PRIORITY_SCHEDULING (-1)
#define ngx_udp_send_chain ngx_io.udp_send_chain
#define USER_POSIX2_CHAR_TERM 13
#define HOST_VM_INFO_REV1_COUNT ((mach_msg_type_number_t) (HOST_VM_INFO_REV2_COUNT - 1))
#define CvPADLIST_set(sv,padlist) (CvPADLIST(sv) = (padlist))
#define x86_AVX_STATE64_COUNT ((mach_msg_type_number_t) (sizeof(x86_avx_state64_t)/sizeof(unsigned int)))
#define PROC_FLAG_ADAPTIVE_IMPORTANT 0x200000
#define IPV6_2292DSTOPTS 23
#define newPMOP(a,b) Perl_newPMOP(aTHX_ a,b)
#define GvIMPORTED_on(gv) (GvFLAGS(gv) |= GVf_IMPORTED)
#define PERL_ARGS_ASSERT_SV_SETPVIV_MG assert(sv)
#define SIDL 1
#define do_open9(a,b,c,d,e,f,g,h,i) Perl_do_open9(aTHX_ a,b,c,d,e,f,g,h,i)
#define HW_MACHINE_ARCH 12
#define NGX_DARWIN 1
#define GV_ADD 0x01
#define PERL_PV_ESCAPE_DWIM 0x010000
#define NET_RT_FLAGS_PRIV 10
#define REENTRANT_PROTO_I_TISD 44
#define VM_MEMORY_VIDEOBITSTREAM 91
#define _POSIX_THREAD_CPUTIME (-1)
#define PERL_ARGS_ASSERT_SV_IV assert(sv)
#define do_openn(a,b,c,d,e,f,g,h,i) Perl_do_openn(aTHX_ a,b,c,d,e,f,g,h,i)
#define ENOPROTOOPT 42
#define AvARYLEN(av) (*Perl_av_arylen_p(aTHX_ MUTABLE_AV(av)))
#define HOST_PRIV_PORT 2
#define P_TIMEOUT 0x00000400
#define TASK_AFFINITY_TAG_INFO 16
#define _SC_THREAD_PRIO_PROTECT 88
#define TH_RST 0x04
#define VQ_FREE_SPACE_CHANGE 0x8000
#define REFCOUNTED_HE_EXISTS 0x00000002
#define GvCVu(gv) (GvGP(gv)->gp_cvgen ? NULL : GvGP(gv)->gp_cv)
#define FLT_RADIX __FLT_RADIX__
#define PERL_ARGS_ASSERT_INIT_I18NL14N 
#define ULONG_LONG_MAX (LONG_LONG_MAX * 2ULL + 1ULL)
#define NGX_HAVE_D_NAMLEN 1
#define cop_hints_2hv(cop,flags) cophh_2hv(CopHINTHASH_get(cop), flags)
#define OPpARGELEM_SV 0x00
#define AUDIT_ARGE 0x0008
#define CPUFAMILY_ARM_MONSOON_MISTRAL 0xe81e7ef6
#define F_BARRIERFSYNC 85
#define AUDIT_ARGV 0x0004
#define MAC_OS_X_VERSION_10_13_2 101302
#define PERL_ARGS_ASSERT_PERL_LANGINFO 
#define case_19_SBOX32(hash,state,key) _SBOX32_CASE(19,hash,state,key)
#define __UINT32_MAX__ 0xffffffffU
#define LSEEKSIZE 8
#define HeSVKEY_set(he,sv) ((HeKLEN(he) = HEf_SVKEY), (HeKEY_sv(he) = sv))
#define AMT_AMAGIC_off(amt) ((amt)->flags &= ~AMTf_AMAGIC)
#define PERL_ARGS_ASSERT_GET_CVN_FLAGS assert(name)
#define __PTHREAD_MUTEX_SIZE__ 56
#define PL_SB_invlist (vTHX->ISB_invlist)
#define VM_PURGABLE_NO_AGING_MASK (0x1 << VM_PURGABLE_NO_AGING_SHIFT)
#define _Null_unspecified 
#define inRANGE(c,l,u) (__ASSERT_((NV) (l) >= 0) __ASSERT_((u) >= (l)) ( (sizeof(c) == sizeof(U8)) ? inRANGE_helper_(U8, (c), (l), ((u))) : (sizeof(c) == sizeof(U16)) ? inRANGE_helper_(U16,(c), (l), ((u))) : (sizeof(c) == sizeof(U32)) ? inRANGE_helper_(U32,(c), (l), ((u))) : (__ASSERT_(sizeof(c) == sizeof(WIDEST_UTYPE)) inRANGE_helper_(WIDEST_UTYPE,(c), (l), ((u))))))
#define MACH_VOUCHER_ATTR_CONTROL_FLAGS_NONE ((mach_voucher_attr_control_flags_t)0)
#define _POSIX_PIPE_BUF 512
#define OPpFT_AFTER_t 0x10
#define REENTRANT_PROTO_B_BI 2
#define RLIMIT_DATA 2
#define PF_SNA AF_SNA
#define NGX_CONF_TAKE123 (NGX_CONF_TAKE1|NGX_CONF_TAKE2|NGX_CONF_TAKE3)
#define sv_isobject(a) Perl_sv_isobject(aTHX_ a)
#define VM_MAP_NULL ((vm_map_t) 0)
#define padnew_CLONE 1
#define IPC_STAT 2
#define SCNuLEAST16 SCNu16
#define SIOCGIF6LOWPAN _IOWR('i', 197, struct ifreq)
#define __IPV6_ADDR_SCOPE_INTFACELOCAL 0x01
#define KERN_VFSNSPACE_UNHANDLE_PROC 2
#define UNI_TO_NATIVE(ch) ((UV) ((ch) | 0))
#define PmopSTASH_set(o,hv) (assert_((o)->op_pmflags & PMf_ONCE) (o)->op_pmstashstartu.op_pmstashoff = (hv) ? alloccopstash(hv) : 0)
#define CXt_NULL 0
#define LC_NUMERIC_UNLOCK NOOP
#define OA_AVREF 3
#define gv_fetchpv(a,b,c) Perl_gv_fetchpv(aTHX_ a,b,c)
#define IOPOL_PASSIVE 2
#define _POSIX_TRACE_INHERIT (-1)
#define __IPHONE_12_1 120100
#define CopHINTHASH_get(c) ((COPHH*)((c)->cop_hints_hash))
#define MINCORE_ANONYMOUS 0x80
#define SV_CONST_RETURN 32
#define LONG_DOUBLE_IS_IEEE_754_128_BIT_BIG_ENDIAN 2
#define WUNTRACED 0x00000002
#define os_prevent_tail_call_optimization() __asm__("")
#define PL_hints PL_compiling.cop_hints
#define VM_MAX_USER_PAGE_ADDRESS ((user_addr_t)0x00007FFFFFFFF000ULL)
#define NGX_FILE_OPEN 0
#define NZERO 20
#define AMGf_assign 4
#define PERL_ARGS_ASSERT_SV_NV assert(sv)
#define IPV6CTL_V6ONLY 24
#define VM_MEMORY_CM_RPC 93
#define SA_USERSPACE_MASK (SA_ONSTACK | SA_RESTART | SA_RESETHAND | SA_NOCLDSTOP | SA_NODEFER | SA_NOCLDWAIT | SA_SIGINFO)
#define unpackWARN1(x) ((x) & 0xFF)
#define unpackWARN2(x) (((x) >>8) & 0xFF)
#define __attribute__warn_unused_result__ __attribute__((warn_unused_result))
#define unpackWARN4(x) (((x) >>24) & 0xFF)
#define THREAD_DEBUG_INFO_INTERNAL 6
#define msgh_reserved msgh_voucher_port
#define NULL ((void *)0)
#define PERL_ASYNC_CHECK() if (UNLIKELY(PL_sig_pending)) PL_signalhook(aTHX)
#define IP_MULTICAST_VIF 14
#define pcre2_substring_copy_bynumber PCRE2_SUFFIX(pcre2_substring_copy_bynumber_)
#define TRY_AGAIN 2
#define KERN_CODESIGN_ERROR 50
#define parse_fullexpr(a) Perl_parse_fullexpr(aTHX_ a)
#define SvUOK(sv) SvIOK_UV(sv)
#define SCHAR_MIN (-SCHAR_MAX - 1)
#define _MACH_MACH_TYPES_H_ 
#define PERL_ARGS_ASSERT_MAGIC_GETVEC assert(sv); assert(mg)
#define ENOMSG 91
#define CvAUTOLOAD_off(cv) (CvFLAGS(cv) &= ~CVf_AUTOLOAD)
#define VM_MEMORY_SCENEKIT 86
#define RMS_FNF 0
#define IN6ADDR_ANY_INIT {{{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }}}
#define PERL_ARGS_ASSERT_SV_DUP assert(param)
#define NGX_CLOSE_EVENT EV_EOF
#define dtob(x) ((x)<<DEV_BSHIFT)
#define dtoc(x) ((x)>>(PGSHIFT-DEV_BSHIFT))
#define IPV6CTL_AUTO_LINKLOCAL 35
#define PERL_ARGS_ASSERT_AV_DELETE assert(av)
#define GET_MAP_MEM(flags) ((((unsigned int)(flags)) >> 24) & 0xFF)
#define PerlSock_connect(s,n,l) connect(s, n, l)
#define SAVEf_KEEPOLDELEM 2
#define SET_NUMERIC_STANDARD() STMT_START { DEBUG_Lv(PerlIO_printf(Perl_debug_log, "%s: %d: lc_numeric standard=%d\n", __FILE__, __LINE__, PL_numeric_standard)); Perl_set_numeric_standard(aTHX); DEBUG_Lv(PerlIO_printf(Perl_debug_log, "%s: %d: lc_numeric standard=%d\n", __FILE__, __LINE__, PL_numeric_standard)); } STMT_END
#define aTHX my_perl
#define HOST_EXPIRED_TASK_INFO 6
#define vtohl(x) ((x)&0xFFFFFFFF)
#define _STRUCT_MCONTEXT _STRUCT_MCONTEXT64
#define gv_fetchsv(a,b,c) Perl_gv_fetchsv(aTHX_ a,b,c)
#define PERL_ARGS_ASSERT_SV_PV assert(sv)
#define pcre2_code_free PCRE2_SUFFIX(pcre2_code_free_)
#define PERL_ARGS_ASSERT_SV_SETPVF assert(sv); assert(pat)
#define KERN_SAVED_IDS 20
#define PERL_MAGIC_isaelem 'i'
#define GvAV(gv) (GvGP(gv)->gp_av)
#define DEBUG_BOTH_FLAGS_TEST_(flag1,flag2) UNLIKELY((PL_debug & ((flag1)|(flag2))) == ((flag1)|(flag2)))
#define VM_LEDGER_FLAG_NO_FOOTPRINT 0x00000001
#define IPPROTO_WBMON 78
#define __IPHONE_6_0 60000
#define __IPHONE_6_1 60100
#define case_42_SBOX32(hash,state,key) 
#define PERL_MY_VSNPRINTF_GUARDED 
#define AF_ECMA 8
#define GETPWUID_R_PROTO REENTRANT_PROTO_I_TSBWR
#define PerlMemShared_get_lock() 
#define NGX_UNESCAPE_URI 1
#define KEV_INET6_CHANGED_ADDR 2
#define CPU_SUBTYPE_PENTIUM_M CPU_SUBTYPE_INTEL(9, 0)
#define PERL_ARGS_ASSERT_NEWSVHEK 
#define GETALL 6
#define host_set_io_master_port(host,port) (KERN_INVALID_ARGUMENT)
#define __INT64_C(c) c ## LL
#define FLT_TRUE_MIN __FLT_DENORM_MIN__
#define UTF8_IS_REPLACEMENT(s,send) is_REPLACEMENT_utf8_safe(s,send)
#define SCNuLEAST64 SCNu64
#define HAS_FREELOCALE 
#define PL_DBcv (vTHX->IDBcv)
#define isALNUMC(c) isALPHANUMERIC(c)
#define NGX_HTTP_VAR_PREFIX 32
#define GvCV(gv) (0+GvGP(gv)->gp_cv)
#define PERL_ARGS_ASSERT_SV_SETPVN assert(sv)
#define IPCTL_FORWARDING 1
#define HAS_GETSERV_PROTOS 
#define isALNUMU(c) isWORDCHAR_L1(c)
#define MACH_PORT_STATUS_FLAG_TASKPTR 0x20
#define __FLT64X_MANT_DIG__ 64
#define NGX_HTTP_IMS_BEFORE 2
#define VM_PAGE_QUERY_PAGE_PAGED_OUT 0x10
#define Direntry_t struct dirent
#define REENTRANT_PROTO_I_SBWRE 42
#define PERL_ARGS_ASSERT_SV_PVUTF8N assert(sv); assert(lp)
#define Nullgv Null(GV*)
#define HAS_MBSTOWCS 
#define IOPOL_VFS_SKIP_MTIME_UPDATE_ON 1
#define PERL_SYS_INIT_BODY(c,v) MALLOC_CHECK_TAINT2(*c,*v) PERL_FPU_INIT; PERLIO_INIT; MALLOC_INIT
#define TIOCSTART _IO('t', 110)
#define av_top_index(av) AvFILL(av)
#define fprintf_nocontext Perl_fprintf_nocontext
#define CPU_TYPE_HPPA ((cpu_type_t) 11)
#define ngx_conf_merge_size_value(conf,prev,default) if (conf == NGX_CONF_UNSET_SIZE) { conf = (prev == NGX_CONF_UNSET_SIZE) ? default : prev; }
#define PERL_MAGIC_rhash '%'
#define THREAD_THROUGHPUT_QOS_POLICY 8
#define sv_2bool_nomg(sv) sv_2bool_flags(sv, 0)
#define PERL_ARGS_ASSERT_MY_ATOF2 assert(orig); assert(value)
#define NGX_RECONFIGURE_SIGNAL HUP
#define kSVOP cSVOPx(kid)
#define INFNAN_U8_NV_DECL EXTCONST union { U8 u8[NVSIZE]; NV nv; }
#define HAS_FCHMODAT 
#define SAVEt_BOOL 5
#define PERLSI_MAIN 1
#define PERL_ARGS_ASSERT_SORTSV_FLAGS assert(cmp)
#define MSG_NEEDSA 0x10000
#define DEFFILEMODE (S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH|S_IWOTH)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_2(x) 
#define MAX_UNICODE_UTF8 "\xF4\x8F\xBF\xBF"
#define VM_MEMORY_SANITIZER 99
#define I_SYS_RESOURCE 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_3(x) 
#define _BLKSIZE_T 
#define __SIZEOF_FLOAT128__ 16
#define __API_UNAVAILABLE_BEGIN_GET_MACRO(...) 
#define RXf_COPY_DONE (1U<<(RXf_BASE_SHIFT+11))
#define _SC_2_UPE 25
#define S_IRWXO 0000007
#define S_IRWXU 0000700
#define HVhek_UNSHARED 0x08
#define QUAD_IS_INT64_T 4
#define pcre2_convert_context PCRE2_SUFFIX(pcre2_convert_context_)
#define PERL_ARGS_ASSERT_DO_SEEK 
#define TOPi ((IV)SvIV(TOPs))
#define MACH_MSGH_BITS(remote,local) ((remote) | ((local) << 8))
#define TOPl ((long)SvIV(TOPs))
#define case_102_SBOX32(hash,state,key) 
#define TOPn (SvNV(TOPs))
#define TOPp TOPpx
#define KERN_KDENABLE 3
#define TOPs (*sp)
#define AUC_NOAUDIT 2
#define A_SETCTLMODE 42
#define _MACH_I386_PROCESSOR_INFO_H_ 
#define parse_subsignature(a) Perl_parse_subsignature(aTHX_ a)
#define UVTYPE unsigned long
#define VQ_NOTRESPLOCK 0x0080
#define NGX_DONE -4
#define CTLTYPE_INT 2
#define AT_FDONLY 0x0400
#define NDEBUG 1
#define HAS_SETLINEBUF 
#define SSPOPINT (PL_savestack[--PL_savestack_ix].any_i32)
#define F_FREEZE_FS 53
#define TAINT_WARN_set(s) (PL_taint_warn = (s))
#define sv_dup_inc(a,b) Perl_sv_dup_inc(aTHX_ a,b)
#define CLOCK_REALTIME _CLOCK_REALTIME
#define GvGP(gv) (0+(gv)->sv_u.svu_gp)
#define IPCTL_INTRQMAXLEN 10
#define HvNAMEUTF8(hv) ((SvOOK(hv) && HvAUX(hv)->xhv_name_u.xhvnameu_name && HvNAME_HEK_NN(hv)) ? HEK_UTF8(HvNAME_HEK_NN(hv)) : 0)
#define PERL_ARGS_ASSERT_PADNAMELIST_STORE assert(pnl)
#define TH_ACCEPT (TH_FIN|TH_SYN|TH_RST|TH_ACK)
#define PERL_ARGS_ASSERT_MAGIC_SETTAINT assert(sv); assert(mg)
#define SvUVx(sv) ({SV *_sv = MUTABLE_SV(sv); SvUV(_sv); })
#define PRIxMAX __PRI_MAX_LENGTH_MODIFIER__ "x"
#define NGX_INET6_ADDRSTRLEN (sizeof("ffff:ffff:ffff:ffff:ffff:ffff:255.255.255.255") - 1)
#define HvPLACEHOLDERS_get(hv) (SvMAGIC(hv) ? Perl_hv_placeholders_get(aTHX_ (const HV *)hv) : 0)
#define UTF8f "d%" UVuf "%4p"
#define BmFLAGS(sv) (SvTAIL(sv) ? FBMcf_TAIL : 0)
#define SLIST_INSERT_AFTER(slistelm,elm,field) do { SLIST_NEXT((elm), field) = SLIST_NEXT((slistelm), field); SLIST_NEXT((slistelm), field) = (elm); } while (0)
#define isBLANK_uvchr(c) _generic_uvchr(_CC_BLANK, is_HORIZWS_cp_high, c)
#define VM_LEDGER_TAG_DEFAULT 0x00000001
#define PERL_ARGS_ASSERT_PARSE_LABEL 
#define MCLOFSET (MCLBYTES - 1)
#define PCRE2_ERROR_LOOKBEHIND_TOO_COMPLICATED 135
#define OPpMULTICONCAT_STRINGIFY 0x08
#define EXC_I386_ENOEXTFLT 32
#define PERL_ARGS_ASSERT_SV_TRUE 
#define GvHV(gv) ((GvGP(gv))->gp_hv)
#define PERL_ARGS_ASSERT_AV_EXTEND_GUTS assert(maxp); assert(allocp); assert(arrayp)
#define PERL_ARGS_ASSERT_CK_MATCH assert(o)
#define ck_entersub_args_proto_or_list(a,b,c) Perl_ck_entersub_args_proto_or_list(aTHX_ a,b,c)
#define VM_REGION_SUBMAP_INFO_V1_SIZE (VM_REGION_SUBMAP_INFO_V2_SIZE - sizeof (vm_object_id_t) )
#define NTOHLL(x) (x) = ntohll((__uint64_t)x)
#define dump_packsubs(a) Perl_dump_packsubs(aTHX_ a)
#define __exported __attribute__((__visibility__("default")))
#define RXf_START_ONLY (1U<<(RXf_BASE_SHIFT+14))
#define OA_LISTOP (4 << OCSHIFT)
#define PERL_ARGS_ASSERT_PERLIO_GET_BASE 
#define _SYS_QUEUE_H_ 
#define PCRE2_INFO_FIRSTCODEUNIT 5
#define HEK_FLAGS(hek) (*((unsigned char *)(HEK_KEY(hek))+HEK_LEN(hek)+1))
#define isWARN_ONCE (PL_dowarn & (G_WARN_ON|G_WARN_ONCE))
#define SEMAPHORE_NULL ((semaphore_t) 0)
#define MACH_SEND_IMPORTANCE 0x00080000
#define MAP_MEM_POSTED_REORDERED 8
#define PTHREAD_CANCEL_DEFERRED 0x02
#define IN_BADCLASS(i) (((u_int32_t)(i) & 0xf0000000) == 0xf0000000)
#define UTF8_ALLOW_FE_FF 0
#define CALLREGDUPE_PVT(prog,param) (prog ? RX_ENGINE(prog)->dupe(aTHX_ (prog),(param)) : (REGEXP *)NULL)
#define MAP_PRIVATE 0x0002
#define ngx_queue_split(h,q,n) (n)->prev = (h)->prev; (n)->prev->next = n; (n)->next = q; (h)->prev = (q)->prev; (h)->prev->next = h; (q)->prev = n;
#define VOL_CAPABILITIES_RESERVED2 3
#define PerlSIO_tmpfile() tmpfile()
#define HAS_ENDGRENT 
#define isALNUM_A(c) isALNUM(c)
#define __DARWIN_STRUCT_STAT64_TIMES struct timespec st_atimespec; struct timespec st_mtimespec; struct timespec st_ctimespec; struct timespec st_birthtimespec;
#define UTF8_MAXLEN UTF8_MAXBYTES
#define newCONSTSUB_flags(a,b,c,d,e) Perl_newCONSTSUB_flags(aTHX_ a,b,c,d,e)
#define UQUAD_MAX ULLONG_MAX
#define case_16_SBOX32(hash,state,key) _SBOX32_CASE(16,hash,state,key)
#define assert_(what) 
#define ngx_unlock_fd_n "fcntl(F_SETLK, F_UNLCK)"
#define HOST_USER_NOTIFICATION_PORT (3 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define sv_unmagic(a,b) Perl_sv_unmagic(aTHX_ a,b)
#define TCPOLEN_TIMESTAMP 10
#define VM_INHERIT_DEFAULT VM_INHERIT_COPY
#define MCLBYTES (1 << MCLSHIFT)
#define NL_LANGINFO_LOCK LOCALE_LOCK_
#define NAN __builtin_nanf("0x7fc00000")
#define BAD_ALRMTYPE(t) (((t) &~ TIME_RELATIVE) != 0)
#define MACH_MSG_GUARD_FLAGS_MASK 0x0003
#define PL_sv_undef (vTHX->Isv_undef)
#define HAS_LLROUNDL 
#define PL_patchlevel (vTHX->Ipatchlevel)
#define KERN_INVALID_HOST 22
#define PROCESSOR_TEMPERATURE 0x10000002
#define PL_nomemok (vTHX->Inomemok)
#define _UINT8_T 
#define save_aelem_flags(a,b,c,d) Perl_save_aelem_flags(aTHX_ a,b,c,d)
#define FIONREAD _IOR('f', 127, int)
#define HINT_EXPLICIT_STRICT_REFS 0x00000020
#define TCPOLEN_SIGNATURE 18
#define UTF8_EIGHT_BIT_HI(c) (__ASSERT_(FITS_IN_8_BITS(c)) ( __BASE_TWO_BYTE_HI(c, NATIVE_TO_LATIN1)))
#define PERL_ARGS_ASSERT_INVMAP_DUMP assert(invlist); assert(map)
#define RMS_ISI 0
#define __PROJECT_VERSION(s) __IDSTRING(project_version,s)
#define _MACH_THREAD_POLICY_H_ 
#define ATTR_FORK_VALIDMASK 0x00000003
#define CLOCK_UPTIME_RAW_APPROX _CLOCK_UPTIME_RAW_APPROX
#define PERL_ARGS_ASSERT_VNORMAL assert(vs)
#define _FLOAT_H___ 
#define PerlProc_pclose(f) my_pclose((f))
#define pcre2_match_data PCRE2_SUFFIX(pcre2_match_data_)
#define FLT_MAX_10_EXP __FLT_MAX_10_EXP__
#define ngx_msleep(ms) (void) usleep(ms * 1000)
#define PCRE2_LITERAL 0x02000000u
#define PL_endav (vTHX->Iendav)
#define BIG_ENDIAN __DARWIN_BIG_ENDIAN
#define Perl_assert(what) PERL_DEB2( ((what) ? ((void) 0) : (Perl_croak_nocontext("Assertion %s failed: file \"" __FILE__ "\", line %d", STRINGIFY(what), __LINE__), (void) 0)), ((void)0))
#define MACH_RCV_IN_PROGRESS 0x10004001
#define PROT_EXEC 0x04
#define IN_UNI_8_BIT (( ( (CopHINTS_get(PL_curcop) & HINT_UNI_8_BIT)) || ( CopHINTS_get(PL_curcop) & HINT_LOCALE_PARTIAL && _is_in_locale_category(FALSE, -1))) && (! IN_BYTES))
#define A_GETKMASK 4
#define __IPHONE_14_0 140000
#define __IPHONE_14_1 140100
#define __IPHONE_14_2 140200
#define __IPHONE_14_3 140300
#define CALLREGCOMP_ENG(prog,sv,flags) (prog)->comp(aTHX_ sv, flags)
#define __IPHONE_14_5 140500
#define PERL_ARGS_ASSERT_HV_EITER_P assert(hv)
#define PadlistREFCNT(pl) 1
#define ngx_del_conn ngx_event_actions.del_conn
#define X86_LAST_BRANCH_STATE_COUNT x86_LAST_BRANCH_STATE_COUNT
#define isPRINT_A(c) inRANGE(c, ' ', 0x7e)
#define __FLT32_DIG__ 6
#define ngx_getcwd_n "getcwd()"
#define isWORDCHAR_utf8(p,e) isWORDCHAR_utf8_safe(p, e)
#define CHECK_MALLOC_TAINT(newval) ((void)0)
#define pcre2_compile PCRE2_SUFFIX(pcre2_compile_)
#define PERL_ARGS_ASSERT_SVAMAGIC_ON assert(sv)
#define MDEREF_HV_gvsv_vivify_rv2hv_helem 9
#define _SC_TRACE_EVENT_FILTER 98
#define CPU_SUBTYPE_I860_ALL ((cpu_subtype_t) 0)
#define __FLT_EPSILON__ 1.19209289550781250000000000000000000e-7F
#define PERL_ARGS_ASSERT_FIND_RUNCV 
#define BAD_MACH_TIMESPEC(t) ((t)->tv_nsec < 0 || (t)->tv_nsec >= (long)NSEC_PER_SEC)
#define __WATCHOS_PROHIBITED 
#define HEKfARG(p) ((void*)(p))
#define SS_DISABLE 0x0004
#define F_THAW_FS 54
#define PERL_ARGS_ASSERT_LEX_STUFF_PV assert(pv)
#define IPV6CTL_KAME_VERSION 20
#define is_HANGUL_ED_utf8_safe(s,e) ( ( ( ( ( ((e) - (s)) >= 3 ) && ( 0xED == ((const U8*)s)[0] ) ) && ( inRANGE_helper_(U8, ((const U8*)s)[1], 0x80, 0x9F) ) ) && ( inRANGE_helper_(U8, ((const U8*)s)[2], 0x80, 0xBF) ) ) ? 3 : 0 )
#define SAVEt_DESTRUCTOR 25
#define PERL_API_SUBVERSION 0
#define EISDIR 21
#define PERL_ARGS_ASSERT_MORE_BODIES 
#define PCRE2_SIZE size_t
#define PERL_ARGS_ASSERT_CK_SMARTMATCH assert(o)
#define PERL_ARGS_ASSERT_MAGIC_FREEMGLOB assert(sv); assert(mg)
#define PL_WB_invlist (vTHX->IWB_invlist)
#define PERL_ARGS_ASSERT_SV_FREE2 assert(sv)
#define ATTR_CMN_FILEID 0x02000000
#define SvPVx_const(sv,len) ({SV *_sv = (sv); SvPV_const(_sv, len); })
#define MEMORY_OBJECT_COPY_SYMMETRIC 4
#define DEBUG_i_TEST (0)
#define UTF8_EIGHT_BIT_LO(c) (__ASSERT_(FITS_IN_8_BITS(c)) (__BASE_TWO_BYTE_LO(c, NATIVE_TO_LATIN1)))
#define PTHREAD_CANCEL_ASYNCHRONOUS 0x00
#define NGX_ERROR_LOG_PATH "logs/error.log"
#define HINT_ALL_STRICT HINT_STRICT_REFS | HINT_STRICT_SUBS | HINT_STRICT_VARS
#define x86_PAGEIN_STATE 22
#define SVp_IOK 0x00001000
#define PCRE2_ERROR_BAD_LITERAL_OPTIONS 192
#define THREAD_IDENTIFIER_INFO_COUNT ((mach_msg_type_number_t) (sizeof(thread_identifier_info_data_t) / sizeof(natural_t)))
#define __PTHREAD_RWLOCK_SIZE__ 192
#define PL_doswitches (vTHX->Idoswitches)
#define TCP_CONNECTIONTIMEOUT 0x20
#define Newc(x,v,n,t,c) Newxc(v,n,t,c)
#define SAVECOPLINE(c) SAVEI32(CopLINE(c))
#define Newx(v,n,t) (v = (MEM_WRAP_CHECK_(n,t) (t*)MEM_LOG_ALLOC(n,t,safemalloc((MEM_SIZE)((n)*sizeof(t))))))
#define Newz(x,v,n,t) Newxz(v,n,t)
#define PERL_VERSION_PATCH PERL_SUBVERSION
#define PERL_QUAD_MAX ((IV) (PERL_UQUAD_MAX >> 1))
#define TASK_INSPECT_PORT 5
#define UTF8_SAFE_SKIP(s,e) (__ASSERT_((e) >= (s)) UNLIKELY(((e) - (s)) <= 0) ? 0 : MIN(((e) - (s)), UTF8_SKIP(s)))
#define PERL_ARGS_ASSERT_HV_FREE_ENT assert(hv)
#define SvPVutf8_or_null(sv,len) (SvPOK_utf8_nog(sv) ? ((len = SvCUR(sv)), SvPVX(sv)) : (SvGETMAGIC(sv), SvOK(sv)) ? sv_2pvutf8_flags(sv, &len, 0) : ((len = 0), NULL))
#define __DBL_IS_IEC_60559__ 2
#define HINT_LOCALE 0x00000004
#define NGX_TERMINATE_SIGNAL TERM
#define PERL_ARGS_ASSERT_LEX_STUFF_SV assert(sv)
#define PERL_ARGS_ASSERT_HV_STORE_ENT 
#define CTL_DEBUG 5
#define PERL_ARGS_ASSERT_COP_FETCH_LABEL assert(cop)
#define SCAN_REPL 2
#define P_NOCLDSTOP 0x00000008
#define __abortlike __dead2 __cold __not_tail_called
#define SYNC_VOLUME_FULLSYNC 0x01
#define __APPLE_API_EVOLVING 
#define SvPVutf8_force(sv,len) (SvPOK_utf8_pure_nogthink(sv) ? ((len = SvCUR(sv)), SvPVX(sv)) : sv_pvutf8n_force(sv, &len))
#define UV_MAX_P1_HALF (2.0 * (1 + ((UV_MAX) >> 2)))
#define NGX_CHAIN_ERROR (ngx_chain_t *) NGX_ERROR
#define M16KCLSHIFT 14
#define EF_NO_XATTRS 0x00000002
#define CONNECT_RESUME_ON_READ_WRITE 0x1
#define PCRE2_ERROR_TOO_MANY_CAPTURES 197
#define _POSIX_NAME_MAX 14
#define ngx_vsnprintf(buf,max,fmt,args) ngx_vslprintf(buf, buf + (max), fmt, args)
#define GvREFCNT(gv) (GvGP(gv)->gp_refcnt)
#define CPUFAMILY_INTEL_IVYBRIDGE 0x1f65e835
#define USE_64_BIT_STDIO 
#define PERL_ARGS_ASSERT_NEWIO 
#define _ANSI_STDDEF_H 
#define IoTYPE_APPEND 'a'
#define TIOCNXCL _IO('t', 14)
#define GvSV(gv) (GvGP(gv)->gp_sv)
#define __strong 
#define case_33_SBOX32(hash,state,key) 
#define st_ctime st_ctimespec.tv_sec
#define av_shift(a) Perl_av_shift(aTHX_ a)
#define _FILESEC_UNSET_PROPERTY ((void *)0)
#define DT_SOCK 12
#define VM_MEMORY_COREGRAPHICS_DATA 54
#define isPSXSPC_A(c) isSPACE_A(c)
#define KERN_MEMORY_PRESENT 23
#define TAINTING_get (cBOOL(UNLIKELY(PL_tainting)))
#define PCRE2_INFO_LASTCODEUNIT 11
#define ATTR_FILE_LINKCOUNT 0x00000001
#define KERN_KDBUFWAIT 23
#define NGX_EMFILE EMFILE
#define PL_rs (vTHX->Irs)
#define O_EXLOCK 0x00000020
#define SO_WANTOOBFLAG 0x8000
#define PERL_HASH_SEED PL_hash_seed
#define _SC_MEMLOCK 30
#define WARN_INTERNAL 24
#define NGX_HTTP_SSI_PARAMS_N 4
#define cop_hints_exists_pv(cop,key,hash,flags) cophh_exists_pv(CopHINTHASH_get(cop), key, hash, flags)
#define P_ADVLOCK 0x00000001
#define __FLT32X_HAS_INFINITY__ 1
#define SO_ACCEPTCONN 0x0002
#define PERL_ARGS_ASSERT_IS_STRICT_UTF8_STRING_LOC 
#define PERL_LONG_MAX ((long)LONG_MAX)
#define __INT32_MAX__ 0x7fffffff
#define SSPUSHINT(i) (PL_savestack[PL_savestack_ix++].any_i32 = (I32)(i))
#define LvSTARGOFF(sv) ((XPVLV*) SvANY(sv))->xlv_targoff_u.xlvu_stargoff
#define PCRE2_ERROR_PATTERN_TOO_LARGE 120
#define REENTRANT_PROTO_S_TISBI 66
#define xuv_uv xuv_u.xivu_uv
#define PCRE2_PARTIAL_SOFT 0x00000010u
#define G_VOID 1
#define A_SETCLASS 23
#define pcre2_jit_free_unused_memory PCRE2_SUFFIX(pcre2_jit_free_unused_memory_)
#define MACH_RCV_TRAILER_SENDER 2
#define Nullhv Null(HV*)
#define SITEARCH_EXP "/usr/local/Cellar/perl/5.34.0/lib/perl5/site_perl/5.34.0/darwin-thread-multi-2level"
#define assert_not_glob(sv) assert_(!isGV_with_GP(sv))
#define HW_CPU_FREQ 15
#define pad_findmy_sv(a,b) Perl_pad_findmy_sv(aTHX_ a,b)
#define O_ASYNC 0x00000040
#define PERL_ARGS_ASSERT_MESS assert(pat)
#define PERL_STATIC_INLINE_NO_RET PERL_STATIC_INLINE
#define __SSE__ 1
#define NGX_HTTP_UPSTREAM_MAX_CONNS 0x0100
#define cophh_fetch_pv(cophh,key,hash,flags) Perl_refcounted_he_fetch_pv(aTHX_ cophh, key, hash, flags)
#define ngx_delete_file_n "unlink()"
#define NOTE_EXTEND 0x00000004
#define SIGEV_NONE 0
#define case_53_SBOX32(hash,state,key) 
#define IS_VALID_CRED(_cr) ((_cr) != NOCRED && (_cr) != FSCRED)
#define NGX_HTTP_UWSGI_TEMP_PATH "uwsgi_temp"
#define PERL_MAGIC_hintselem 'h'
#define hv_fetch(hv,key,klen,lval) ((SV**) hv_common_key_len((hv), (key), (klen), (lval) ? (HV_FETCH_JUST_SV | HV_FETCH_LVALUE) : HV_FETCH_JUST_SV, NULL, 0))
#define PL_curpm (vTHX->Icurpm)
#define VM_LIB64_SHR_DATA ((user_addr_t) 0x00007FFF60000000ULL)
#define ngx_tm_min tm_min
#define COPHH_EXISTS REFCOUNTED_HE_EXISTS
#define ATTR_VOL_SPACEAVAIL 0x00000010
#define SCNu16 "hu"
#define MALLOC_ZONE_SPECIFIC_FLAGS 0xff00
#define NGX_HASH_LARGE 2
#define ngx_write_console ngx_write_fd
#define GLOB_ABEND GLOB_ABORTED
#define SvGMAGICAL(sv) (SvFLAGS(sv) & SVs_GMG)
#define ru_first ru_ixrss
#define MAP_MEM_IO 2
#define KEV_DL_IFCAP_CHANGED 19
#define MACH_MSGH_KIND_NOTIFICATION 0x00000001
#define IVdf "ld"
#define WARN_NUMERIC 13
#define NOTE_TRACK 0x00000001
#define w_retcode w_T.w_Retcode
#define CBLOCK 64
#define RX_MINLENRET(rx_sv) (RXp_MINLENRET(ReANY(rx_sv)))
#define HAS_GETHOSTENT 
#define NO_DATA 4
#define invalid_memory_object_flavor(f) (f != MEMORY_OBJECT_ATTRIBUTE_INFO && f != MEMORY_OBJECT_PERFORMANCE_INFO && f != OLD_MEMORY_OBJECT_BEHAVIOR_INFO && f != MEMORY_OBJECT_BEHAVIOR_INFO && f != OLD_MEMORY_OBJECT_ATTRIBUTE_INFO)
#define PERL_MULTICONCAT_IX_UTF8_LEN 4
#define DEBUG_Pv_TEST (0)
#define PERL_ARGS_ASSERT_SAVE_I16 assert(intp)
#define PerlIO_get_ptr(a) Perl_PerlIO_get_ptr(aTHX_ a)
#define THREAD_LATENCY_QOS_POLICY 7
#define PERL_ARGS_ASSERT_GROK_ATOUV assert(pv); assert(valptr)
#define P_WEXIT 0x00002000
#define PERL_ARGS_ASSERT_REPEATCPY assert(to); assert(from)
#define F_DUPFD 0
#define CxTYPE_is_LOOP(c) ( CxTYPE(cx) >= CXt_LOOP_ARY && CxTYPE(cx) <= CXt_LOOP_PLAIN)
#define MACH_MSGH_BITS_REMOTE(bits) ((bits) & MACH_MSGH_BITS_REMOTE_MASK)
#define PERL_ARGS_ASSERT_PERLIO_TELL 
#define PERL_QUAD_MIN (-PERL_QUAD_MAX - ((3 & -1) == 3))
#define RXf_NO_INPLACE_SUBST (1U<<(RXf_BASE_SHIFT+2))
#define _SC_GETGR_R_SIZE_MAX 70
#define __FLT128_IS_IEC_60559__ 2
#define __SCHED_PARAM_SIZE__ 4
#define PERL_ARGS_ASSERT_SYS_INIT3 assert(argc); assert(argv); assert(env)
#define cophh_fetch_sv(cophh,key,hash,flags) Perl_refcounted_he_fetch_sv(aTHX_ cophh, key, hash, flags)
#define is_utf8_string_loclen Perl_is_utf8_string_loclen
#define save_hints() Perl_save_hints(aTHX)
#define vnewSVpvf(a,b) Perl_vnewSVpvf(aTHX_ a,b)
#define PERL_ARGS_ASSERT_SV_BLESS assert(sv); assert(stash)
#define PERL_ARGS_ASSERT_IBCMP_UTF8 
#define _PC_FILESIZEBITS 18
#define is_VERTWS_high(s) ( ( ( ( 0xE2 == ((const U8*)s)[0] ) && ( 0x80 == ((const U8*)s)[1] ) ) && ( inRANGE_helper_(U8, ((const U8*)s)[2], 0xA8, 0xA9) ) ) ? 3 : 0 )
#define _WPERM_OK (1<<20)
#define VM_MEMORY_JAVASCRIPT_JIT_REGISTER_FILE 65
#define host_set_user_notification_port(host,port) (host_set_special_port((host), HOST_USER_NOTIFICATION_PORT, (port)))
#define CXt_GIVEN 3
#define reg_named_buff_all(a,b) Perl_reg_named_buff_all(aTHX_ a,b)
#define __BASE_TWO_BYTE_LO(c,translate_function) (__ASSERT_(! UVCHR_IS_INVARIANT(c)) I8_TO_NATIVE_UTF8((translate_function(c) & UTF_CONTINUATION_MASK) | UTF_CONTINUATION_MARK))
#define _POSIX_LOGIN_NAME_MAX 9
#define _STRUCT_MCONTEXT32 struct __darwin_mcontext32
#define ckWARN4_d(w1,w2,w3,w4) Perl_ckwarn_d(aTHX_ packWARN4(w1,w2,w3,w4))
#define PERL_INT_MAX ((int)INT_MAX)
#define MY_CXT_INIT_INTERP(my_perl) my_cxt_t *my_cxtp = (my_cxt_t*)Perl_my_cxt_init(my_perl, MY_CXT_INIT_ARG, sizeof(my_cxt_t)); PERL_UNUSED_VAR(my_cxtp)
#define SvRMAGICAL_off(sv) (SvFLAGS(sv) &= ~SVs_RMG)
#define unsharepvn(a,b,c) Perl_unsharepvn(aTHX_ a,b,c)
#define NOTE_EXEC 0x20000000
#define PERL_ARGS_ASSERT_TRY_AMAGIC_BIN 
#define _XBS5_ILP32_OFF32 __ILP32_OFF32
#define PerlSIO_stdin stdin
#define PERL_ARGS_ASSERT_CX_POPLOOP assert(cx)
#define isBLANK_uni(c) isBLANK_uvchr(c)
#define _MACH_VM_REGION_H_ 
#define __FLT64X_MIN_10_EXP__ (-4931)
#define QUAD_MAX LLONG_MAX
#define PAGE_MAX_SHIFT 14
#define IPPROTO_GRE 47
#define PERL_ARGS_ASSERT_REENTRANT_INIT 
#define OPpENTERSUB_AMPER 0x08
#define INT64_C(v) (v ## LL)
#define OPpTRANS_DELETE 0x80
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_4(x) x
#define PERL_ARGS_ASSERT_MG_FREEEXT assert(sv)
#define ngx_tm_wday_t int
#define __SPI_DEPRECATED_WITH_REPLACEMENT(...) 
#define MACH_SEND_SYNC_USE_THRPRI MACH_SEND_PROPAGATE_QOS
#define KERN_PROCNAME 62
#define __FLT64X_EPSILON__ 1.08420217248550443400745280086994171e-19F64x
#define MEMORY_OBJECT_DATA_NO_CHANGE 0x2
#define isBLANK_LC_uni(c) isBLANK_LC_uvchr(UNI_TO_NATIVE(c))
#define FREETMPS if (PL_tmps_ix > PL_tmps_floor) free_tmps()
#define AUDIT_TRIGGER_MAX 8
#define PERL_ARGS_ASSERT_NEWRV assert(sv)
#define IoTOP_GV(sv) ((XPVIO*) SvANY(sv))->xio_top_gv
#define FBMcf_TAIL (FBMcf_TAIL_DOLLAR|FBMcf_TAIL_DOLLARM|FBMcf_TAIL_Z|FBMcf_TAIL_z)
#define CPU_STATE_NICE 3
#define case_50_SBOX32(hash,state,key) 
#define CIRCLEQ_PREV(elm,field) ((elm)->field.cqe_prev)
#define sv_2nv(sv) sv_2nv_flags(sv, SV_GMAGIC)
#define ENDPROTOENT_R_PROTO 0
#define MACH_MSG_MASK 0x00003e00
#define EAUTH 80
#define DEBUG_T_TEST_ UNLIKELY(PL_debug & DEBUG_T_FLAG)
#define PERL_LONG_MIN ((long)LONG_MIN)
#define PL_DBsingle_iv (PL_DBcontrol[DBVARMG_SINGLE])
#define _SC_XOPEN_VERSION 116
#define NGX_SOCKADDR_STRLEN NGX_UNIX_ADDRSTRLEN
#define NGX_DISABLE_SYMLINKS_OFF 0
#define PerlDir_tell(dir) telldir((dir))
#define _FSBLKCNT_T 
#define MUTABLE_IO(p) ((IO *)MUTABLE_PTR(p))
#define PERL_ARGS_ASSERT_DO_IPCGET assert(mark); assert(sp)
#define KERN_CLASSIC KERN_TRANSLATE
#define CPUFAMILY_ARM_11 0x8ff620d8
#define OPpSPLIT_IMPLIM 0x04
#define AF_RESERVED_36 36
#define KERN_JOB_CONTROL 19
#define IS_NUMBER_INFINITY 0x10
#define FF_CHOP 10
#define _STRUCT_MCONTEXT64 struct __darwin_mcontext64
#define THREAD_STANDARD_POLICY_COUNT 0
#define CPUFAMILY_ARM_13 0x0cc90e64
#define KERN_SHREG_PRIVATIZABLE 54
#define grok_bin_oct_hex(a,b,c,d,e,f,g) Perl_grok_bin_oct_hex(aTHX_ a,b,c,d,e,f,g)
#define PCRE2_ERROR_INTERNAL_BAD_CODE_AUTO_POSSESS 180
#define IOPOL_VFS_CONTENT_PROTECTION_IGNORE 1
#define EXC_I386_INTO 2
#define HvHASKFLAGS(hv) (SvFLAGS(hv) & SVphv_HASKFLAGS)
#define NGX_MODULE_UNSET_INDEX (ngx_uint_t) -1
#define __MAC_10_0 1000
#define LDBL_MIN_EXP __LDBL_MIN_EXP__
#define __MAC_10_2 1020
#define PERL_FS_VER_FMT "%d.%d.%d"
#define __MAC_10_4 1040
#define __MAC_10_5 1050
#define __MAC_10_6 1060
#define __MAC_10_8 1080
#define __MAC_10_9 1090
#define UTF8_IS_ABOVE_LATIN1(c) (__ASSERT_(FITS_IN_8_BITS(c)) (NATIVE_UTF8_TO_I8(c) >= UTF_MIN_ABOVE_LATIN1_BYTE))
#define custom_op_desc(a) Perl_custom_op_desc(aTHX_ a)
#define HOST_PORT 1
#define F_SPECULATIVE_READ 101
#define PCRE2_ERROR_UTF16_ERR1 (-24)
#define PCRE2_ERROR_UTF16_ERR2 (-25)
#define PCRE2_ERROR_UTF16_ERR3 (-26)
#define PCRE2_ERROR_SUPPORTED_ONLY_IN_UNICODE 193
#define PERLDB_SAVESRC_NOSUBS (PL_perldb & PERLDBf_SAVESRC_NOSUBS)
#define PerlMemShared_realloc(buf,size) realloc((buf), (size))
#define PERL_ARGS_ASSERT_PERLIO_EOF 
#define HAS_STRTOULL 
#define CALLREG_NAMED_BUFF_SCALAR(rx,flags) RX_ENGINE(rx)->named_buff(aTHX_ (rx), NULL, NULL, ((flags) | RXapif_SCALAR))
#define perl_require_pv(a) require_pv(a)
#define PERL_ARGS_ASSERT_FP_DUP assert(param)
#define PERL_ARGS_ASSERT_NEWPROG assert(o)
#define HOST_CHUD_PORT HOST_LAUNCHCTL_PORT
#define KERN_PROCARGS2 49
#define FOLD_FLAGS_FULL 0x2
#define KERN_INVALID_TASK 16
#define PF_ISDN AF_ISDN
#define CALLREGFREE(prog) Perl_pregfree(aTHX_ (prog))
#define DEBUG_t_TEST (0)
#define _POSIX_THREAD_THREADS_MAX 64
#define TCPOPT_FASTOPEN 34
#define AvREIFY_only(av) (AvREAL_off(av), SvFLAGS(av) |= SVpav_REIFY)
#define CAT2(a,b) PeRl_CaTiFy(a,b)
#define PERL_ARGS_ASSERT_CV_SET_CALL_CHECKER assert(cv); assert(ckfun); assert(ckobj)
#define HAS_WCRTOMB 
#define ENV_UNLOCK PERL_WRITE_UNLOCK(&PL_env_mutex)
#define CALLREG_NAMED_BUFF_NEXTKEY(rx,lastkey,flags) RX_ENGINE(rx)->named_buff_iter(aTHX_ (rx), (lastkey), ((flags) | RXapif_NEXTKEY))
#define __MAC_10_14_4 101404
#define __MAC_10_14_6 101406
#define KEV_DL_ISSUES 24
#define IN6_IS_ADDR_MC_ORGLOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && (__IPV6_ADDR_MC_SCOPE(a) == __IPV6_ADDR_SCOPE_ORGLOCAL))
#define NV_NAN_QS_TEST(nvp) (NV_NAN_QS_BYTE(nvp) & NV_NAN_QS_BIT)
#define _STRUCT_FP_STATUS struct __darwin_fp_status
#define NOTE_SIGNAL 0x08000000
#define MAP_MEM_RT 7
#define isBLANK_utf8(p,e) isBLANK_utf8_safe(p, e)
#define MACH_SEND_OVERRIDE 0x00000020
#define MACH_PORT_TYPE_RECEIVE MACH_PORT_TYPE(MACH_PORT_RIGHT_RECEIVE)
#define MACH_PORT_TYPE_PORT_RIGHTS (MACH_PORT_TYPE_SEND_RIGHTS|MACH_PORT_TYPE_RECEIVE)
#define HASATTRIBUTE_DEPRECATED 
#define PL_sortstash (vTHX->Isortstash)
#define ngx_nonblocking_n "ioctl(FIONBIO)"
#define NGX_CONF_TAKE13 (NGX_CONF_TAKE1|NGX_CONF_TAKE3)
#define VOL_CAP_INT_FLOCK 0x00000200
#define SCNxLEAST8 SCNx8
#define COMAPT_MAXLOGNAME 12
#define case_110_SBOX32(hash,state,key) 
#define PL_savestack (vTHX->Isavestack)
#define CALLREG_NAMED_BUFF_FETCH(rx,key,flags) RX_ENGINE(rx)->named_buff(aTHX_ (rx), (key), NULL, ((flags) | RXapif_FETCH))
#define pcre2_set_newline PCRE2_SUFFIX(pcre2_set_newline_)
#define SvSTASH_set(sv,val) STMT_START { assert(SvTYPE(sv) >= SVt_PVMG); (((XPVMG*) SvANY(sv))->xmg_stash = (val)); } STMT_END
#define CALLREG_NAMED_BUFF_ALL(rx,flags) RX_ENGINE(rx)->named_buff(aTHX_ (rx), NULL, NULL, flags)
#define MSG_CTRUNC 0x20
#define CPU_SUBTYPE_MULTIPLE ((cpu_subtype_t) -1)
#define op_append_elem(a,b,c) Perl_op_append_elem(aTHX_ a,b,c)
#define PRIdLEAST16 PRId16
#define NOTE_WRITE 0x00000002
#define ngx_conf_init_value(conf,default) if (conf == NGX_CONF_UNSET) { conf = default; }
#define PERL_ARGS_ASSERT_PERL_FREE assert(my_perl)
#define RXf_PMf_CHARSET (7U << (_RXf_PMf_CHARSET_SHIFT))
#define PL_envgv (vTHX->Ienvgv)
#define __IPHONE_3_2 30200
#define F_NOCACHE 48
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_3(x) 
#define HAS_INETNTOP 
#define _SC_BC_STRING_MAX 12
#define MACH_VOUCHER_ATTR_MAX_RAW_RECIPE_ARRAY_SIZE 5120
#define HAS_TRUNCL 
#define PERL_ARGS_ASSERT_SAVESTACK_GROW 
#define PERL_ARGS_ASSERT_DEB_NOCONTEXT assert(pat)
#define PERL_INT_MIN ((int)INT_MIN)
#define TIOCCBRK _IO('t', 122)
#define IOPOL_TYPE_VFS_MATERIALIZE_DATALESS_FILES 3
#define STDERR_FILENO 2
#define PUSH_MULTICALL_FLAGS(the_cv,flags) STMT_START { PERL_CONTEXT *cx; CV * const _nOnclAshIngNamE_ = the_cv; CV * const cv = _nOnclAshIngNamE_; PADLIST * const padlist = CvPADLIST(cv); multicall_oldcatch = CATCH_GET; CATCH_SET(TRUE); PUSHSTACKi(PERLSI_MULTICALL); cx = cx_pushblock((CXt_SUB|CXp_MULTICALL|flags), (U8)gimme, PL_stack_sp, PL_savestack_ix); cx_pushsub(cx, cv, NULL, 0); SAVEOP(); if (!(flags & CXp_SUB_RE_FAKE)) CvDEPTH(cv)++; if (CvDEPTH(cv) >= 2) Perl_pad_push(aTHX_ padlist, CvDEPTH(cv)); PAD_SET_CUR_NOSAVE(padlist, CvDEPTH(cv)); multicall_cop = CvSTART(cv); } STMT_END
#define __DARWIN_ONLY_VERS_1050 0
#define DM_ARRAY_ISA 0x004
#define SAVECLEARSV(sv) save_clearsv((SV**)&(sv))
#define newSVpvs_share(str) Perl_newSVpvn_share(aTHX_ STR_WITH_LEN(str), 0)
#define VM_PROT_IS_MASK ((vm_prot_t) 0x40)
#define TCP_RXT_CONNDROPTIME 0x80
#define __FLT64_MAX_10_EXP__ 308
#define __sferror(p) (((p)->_flags & __SERR) != 0)
#define PERL_ARGS_ASSERT_KEYWORD assert(name)
#define ngx_trylock(lock) (*(lock) == 0 && ngx_atomic_cmp_set(lock, 0, 1))
#define sv_backoff Perl_sv_backoff
#define PERL_ARGS_ASSERT_NEWPADNAMELIST 
#define NGX_HTTP_IMS_EXACT 1
#define TARGi(i,do_taint) STMT_START { IV TARGi_iv = i; if (LIKELY( ((SvFLAGS(TARG) & (SVTYPEMASK|SVf_THINKFIRST|SVf_IVisUV)) == SVt_IV) & (do_taint ? !TAINT_get : 1))) { assert(!(SvFLAGS(TARG) & (SVf_OOK|SVf_UTF8|(SVf_OK & ~(SVf_IOK|SVp_IOK))))); SvFLAGS(TARG) |= (SVf_IOK|SVp_IOK); TARG->sv_u.svu_iv = TARGi_iv; } else sv_setiv_mg(targ, TARGi_iv); } STMT_END
#define _DLFCN_H_ 
#define sv_setpviv(a,b) Perl_sv_setpviv(aTHX_ a,b)
#define ATTR_CMN_OBJPERMANENTID 0x00000040
#define AUDIT_TRIGGER_MIN 1
#define __COPYRIGHT(s) __IDSTRING(copyright,s)
#define TARGu(u,do_taint) STMT_START { UV TARGu_uv = u; if (LIKELY( ((SvFLAGS(TARG) & (SVTYPEMASK|SVf_THINKFIRST|SVf_IVisUV)) == SVt_IV) & (do_taint ? !TAINT_get : 1) & (TARGu_uv <= (UV)IV_MAX))) { assert(!(SvFLAGS(TARG) & (SVf_OOK|SVf_UTF8|(SVf_OK & ~(SVf_IOK|SVp_IOK))))); SvFLAGS(TARG) |= (SVf_IOK|SVp_IOK); TARG->sv_u.svu_iv = TARGu_uv; } else sv_setuv_mg(targ, TARGu_uv); } STMT_END
#define SAVEMORTALIZESV(s) save_mortalizesv(MUTABLE_SV(s))
#define MAP_COPY MAP_PRIVATE
#define PCRE2_ERROR_DFA_WSSIZE (-43)
#define sv_pos_u2b(a,b,c) Perl_sv_pos_u2b(aTHX_ a,b,c)
#define __IPV6_ADDR_SCOPE_SITELOCAL 0x05
#define POPSTACK STMT_START { dSP; PERL_SI * const prev = PL_curstackinfo->si_prev; DEBUG_l({ int i = -1; PERL_SI *p = PL_curstackinfo; while (p) { i++; p = p->si_prev; } Perl_deb(aTHX_ "pop  STACKINFO %d at %s:%d\n", i, __FILE__, __LINE__);}) if (!prev) { Perl_croak_popstack(); } SWITCHSTACK(PL_curstack,prev->si_stack); PL_curstackinfo = prev; } STMT_END
#define PerlMemParse_calloc(num,size) calloc((num), (size))
#define PERL_ARGS_ASSERT_IS_UTF8_STRING_LOCLEN_FLAGS assert(s)
#define round_page_kernel(x) trunc_page_kernel((x) + vm_kernel_page_mask)
#define MACH_PORT_TEMPOWNER 4
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_5(x) 
#define PERL_ARGS_ASSERT_MRO_PACKAGE_MOVED assert(gv)
#define AF_SIP 24
#define SSPTR(off,type) ((type) ((char*)PL_savestack + off))
#define A_SETPOLICY 34
#define KERN_KDWRITEMAP 18
#define PL_unlockhook (vTHX->Iunlockhook)
#define NGX_HTTP_CONNECTION_KEEP_ALIVE 2
#define PRIiFAST16 PRIi16
#define SI_QUEUE 0x10002
#define NGX_HAVE_DEBUG_MALLOC 1
#define NGX_FILE_WRONLY O_WRONLY
#define blk_oldcop cx_u.cx_blk.blku_oldcop
#define NGX_HAVE_CLOCK_MONOTONIC 1
#define __INT_FAST32_MAX__ 0x7fffffff
#define htonll(x) __DARWIN_OSSwapInt64(x)
#define __API_DEPRECATED_MSG_GET_MACRO(...) 
#define JMPENV_PUSH(v) STMT_START { DEBUG_l({ int i = 0; JMPENV *p = PL_top_env; while (p) { i++; p = p->je_prev; } Perl_deb(aTHX_ "JUMPENV_PUSH level=%d at %s:%d\n", i, __FILE__, __LINE__);}) cur_env.je_prev = PL_top_env; JE_OLD_STACK_HWM_save(cur_env); cur_env.je_ret = PerlProc_setjmp(cur_env.je_buf, SCOPE_SAVES_SIGNAL_MASK); JE_OLD_STACK_HWM_restore(cur_env); PL_top_env = &cur_env; cur_env.je_mustcatch = FALSE; cur_env.je_old_delaymagic = PL_delaymagic; (v) = cur_env.je_ret; } STMT_END
#define SIOCGETVLAN SIOCGIFVLAN
#define __MAC_10_15_1 101501
#define _PTHREAD_SWIFT_IMPORTER_NULLABILITY_COMPAT defined(SWIFT_CLASS_EXTRA) && (!defined(SWIFT_SDK_OVERLAY_PTHREAD_EPOCH) || (SWIFT_SDK_OVERLAY_PTHREAD_EPOCH < 1))
#define TASK_INFO_MAX (1024)
#define PRIdLEAST64 PRId64
#define _RLIMIT_POSIX_FLAG 0x1000
#define PERL_ARGS_ASSERT_MAGIC_CLEARARYLEN_P assert(sv); assert(mg)
#define GETZCNT 7
#define _CS_XBS5_ILP32_OFF32_CFLAGS 20
#define CvNAMED(cv) (CvFLAGS(cv) & CVf_NAMED)
#define semid_ds __semid_ds_new
#define Perl_Warn_Bit_(x) (1 << ((x) % 8))
#define MUTABLE_SV(p) ((SV *)MUTABLE_PTR(p))
#define cSVOPo_sv cSVOPx_sv(o)
#define PERL_ARGS_ASSERT_PACK_CAT assert(cat); assert(pat); assert(patend); assert(beglist); assert(endlist); assert(next_in_list)
#define share_hek(a,b,c) Perl_share_hek(aTHX_ a,b,c)
#define SvIOK_only_UV(sv) (assert_not_glob(sv) SvOK_off_exc_UV(sv), SvFLAGS(sv) |= (SVf_IOK|SVp_IOK))
#define case_30_SBOX32(hash,state,key) 
#define RXf_PMf_FLAGCOPYMASK (RXf_PMf_COMPILETIME|RXf_PMf_SPLIT)
#define LOCALE_INIT STMT_START { MUTEX_INIT(&PL_locale_mutex); LOCALE_INIT_LC_NUMERIC_; } STMT_END
#define HAS_SYSCONF 
#define sv_setptrobj(rv,ptr,name) sv_setref_iv(rv,name,PTR2IV(ptr))
#define PERL_ARGS_ASSERT_CX_PUSHSUB assert(cx); assert(cv)
#define w_stopsig w_S.w_Stopsig
#define F_PUNCHHOLE 99
#define delimcpy Perl_delimcpy
#define LOOP_PAT_MODS "gc"
#define PERL_ARGS_ASSERT_NEWSVPVF_NOCONTEXT assert(pat)
#define KERN_NTP_PLL 27
#define PadlistARRAY(pl) (pl)->xpadl_arr.xpadlarr_alloc
#define kLOGOP cLOGOPx(kid)
#define RTLD_NOLOAD 0x10
#define _INT16_T 
#define ngx_rbt_red(node) ((node)->color = 1)
#define UF_COMPRESSED 0x00000020
#define Rand_seed_t U32
#define __LDBL_HAS_DENORM__ 1
#define __FLT64X_HAS_INFINITY__ 1
#define HW_L3CACHESIZE 22
#define EPIPE 32
#define host_set_closured_port(host,port) (host_set_special_port((host), HOST_CLOSURED_PORT, (port)))
#define case_59_SBOX32(hash,state,key) 
#define RV2CVOPCV_FLAG_MASK 0x0000000f
#define FPS_OE 0x0008
#define is_XPERLSPACE_high(s) ( ( 0xE1 == ((const U8*)s)[0] ) ? ( ( ( 0x9A == ((const U8*)s)[1] ) && ( 0x80 == ((const U8*)s)[2] ) ) ? 3 : 0 ): ( 0xE2 == ((const U8*)s)[0] ) ? ( ( 0x80 == ((const U8*)s)[1] ) ? ( ( inRANGE_helper_(U8, ((const U8*)s)[2], 0x80, 0x8A) || inRANGE_helper_(U8, ((const U8*)s)[2], 0xA8, 0xA9) || 0xAF == ((const U8*)s)[2] ) ? 3 : 0 ) : ( ( 0x81 == ((const U8*)s)[1] ) && ( 0x9F == ((const U8*)s)[2] ) ) ? 3 : 0 ): ( ( ( 0xE3 == ((const U8*)s)[0] ) && ( 0x80 == ((const U8*)s)[1] ) ) && ( 0x80 == ((const U8*)s)[2] ) ) ? 3 : 0 )
#define TCP_MSS 512
#define PERL_ARGS_ASSERT_IO_CLOSE assert(io)
#define SvPOK_only(sv) (assert_not_ROK(sv) assert_not_glob(sv) SvFLAGS(sv) &= ~(SVf_OK| SVf_IVisUV|SVf_UTF8), SvFLAGS(sv) |= (SVf_POK|SVp_POK))
#define x86_DEBUG_STATE32 10
#define UV_DIG (BIT_DIGITS(UVSIZE * 8))
#define NGX_USE_EVENTPORT_EVENT 0x00001000
#define ngx_signal_helper(n) SIG ##n
#define HAS_SYMLINK 
#define PL_osname (vTHX->Iosname)
#define PERL_ARGS_ASSERT_GET_OP_DESCS 
#define PRIiFAST64 PRIi64
#define PERL_ARGS_ASSERT_SAVE_BOOL assert(boolp)
#define PL_mainstack (vTHX->Imainstack)
#define NGX_HTTP_NOT_MODIFIED 304
#define gv_fetchmeth_pvn_autoload(a,b,c,d,e) Perl_gv_fetchmeth_pvn_autoload(aTHX_ a,b,c,d,e)
#define x86_DEBUG_STATE64 11
#define is_safe_syscall(a,b,c,d) Perl_is_safe_syscall(aTHX_ a,b,c,d)
#define CvHASEVAL_on(cv) (CvFLAGS(cv) |= CVf_HASEVAL)
#define NSEC_PER_USEC 1000ull
#define AQ_LOWATER 10
#define PCRE2_NEWLINE_ANYCRLF 5
#define PCRE2_ERROR_PARENTHESES_NEST_TOO_DEEP 119
#define HAS_LCHOWN 
#define PERL_ARGS_ASSERT_PAD_COMPNAME_TYPE 
#define HAS_MBRTOWC 
#define VM_FLAGS_RESILIENT_MEDIA 0x0040
#define IoFMT_GV(sv) ((XPVIO*) SvANY(sv))->xio_fmt_gv
#define RX_MATCH_COPIED_set(rx_sv,t) ((t) ? RX_MATCH_COPIED_on(rx_sv) : RX_MATCH_COPIED_off(rx_sv))
#define _RUNE_MAGIC_A "RuneMagA"
#define PMf_EVAL (1U<<(PMf_BASE_SHIFT+11))
#define PAD_SAVE_SETNULLPAD() SAVECOMPPAD(); PL_comppad = NULL; PL_curpad = NULL; DEBUG_Xv(PerlIO_printf(Perl_debug_log, "Pad set_null\n"));
#define GvASSUMECV_on(gv) (GvFLAGS(gv) |= GVf_ASSUMECV)
#define IPPROTO_KRYPTOLAN 65
#define SvTHINKFIRST(sv) (SvFLAGS(sv) & SVf_THINKFIRST)
#define block_start(a) Perl_block_start(aTHX_ a)
#define PERL_ARGS_ASSERT_MAGIC_SETREGEXP assert(sv); assert(mg)
#define PERL_ARGS_ASSERT_GV_FETCHMETH_PVN_AUTOLOAD assert(name)
#define KERN_PROC_ALL 0
#define PCRE2_ALT_VERBNAMES 0x00400000u
#define EBADMSG 94
#define FLT_MIN_10_EXP __FLT_MIN_10_EXP__
#define host_set_unfreed_port(host,port) (host_set_special_port((host), HOST_UNFREED_PORT, (port)))
#define __DARWIN_SUF_NON_CANCELABLE 
#define PERL_ARGS_ASSERT_GV_FETCHMETH_PV assert(name)
#define isALPHANUMERIC_uvchr(c) _generic_invlist_uvchr(_CC_ALPHANUMERIC, c)
#define MACH_MSGH_BITS_SET(remote,local,voucher,other) (MACH_MSGH_BITS_SET_PORTS((remote), (local), (voucher)) | ((other) &~ MACH_MSGH_BITS_PORTS_MASK))
#define PadnameIsOUR(pn) (!!(pn)->xpadn_ourstash)
#define OS_NOINLINE __attribute__((__noinline__))
#define USER_POSIX2_LOCALEDEF 16
#define ngx_free_chain(pool,cl) (cl)->next = (pool)->chain; (pool)->chain = (cl)
#define __SIZEOF_FLOAT80__ 16
#define S_IFSOCK 0140000
#define HV_FETCH_ISEXISTS 0x08
#define i386_THREAD_STATE 1
#define ATTR_CMN_EXTENDED_SECURITY 0x00400000
#define PERL_ARGS_ASSERT_SV_SETREF_PVN assert(rv); assert(pv)
#define _SC_DELAYTIMER_MAX 45
#define MACH_PORT_RIGHT_SEND ((mach_port_right_t) 0)
#define _STRUCT_TIMEVAL struct timeval
#define __INT_LEAST32_MAX__ 0x7fffffff
#define GID_MAX 2147483647U
#define SS_ONSTACK 0x0001
#define PL_vtbl_taint PL_magic_vtables[want_vtbl_taint]
#define CLD_CONTINUED 6
#define newWHILEOP(a,b,c,d,e,f,g) Perl_newWHILEOP(aTHX_ a,b,c,d,e,f,g)
#define save_nogv(a) Perl_save_nogv(aTHX_ a)
#define RTLD_MAIN_ONLY ((void *) -5)
#define PERL_ARGS_ASSERT_VALID_UTF8_TO_UVUNI assert(s)
#define _NGX_QUEUE_H_INCLUDED_ 
#define PROC_FLAG_EXT_DARWINBG 0x10000
#define SvENDx(sv) ((PL_Sv = (sv)), SvEND(PL_Sv))
#define _SC_XOPEN_CRYPT 108
#define New(x,v,n,t) Newx(v,n,t)
#define PL_scopestack (vTHX->Iscopestack)
#define opASSIGN (PL_op->op_flags & OPf_STACKED)
#define WARNsize 19
#define dTHXoa(x) dTHXa(x)
#define HW_FLOATINGPT 11
#define TARG targ
#define PERL_ARGS_ASSERT_WAS_LVALUE_SUB 
#define host_get_gssd_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_GSSD_PORT, (port)))
#define _DEV_T 
#define HAS_CHOWN 
#define CTL_VFS 3
#define ngx_close_dir_n "closedir()"
#define EXC_I386_EXTOVRFLT 9
#define GLOB_NOSPACE (-1)
#define __DBL_MAX_EXP__ 1024
#define MACH_SEND_PROPAGATE_QOS 0x00200000
#define HEf_SVKEY -2
#define dTHR dNOOP
#define PERL_ARGS_ASSERT_PERLIO_FILL 
#define isBLANK_LC_uvchr(c) _generic_LC_uvchr(isBLANK_LC, is_HORIZWS_cp_high, c)
#define cMETHOPx_rclass(v) PAD_SVl(cMETHOPx(v)->op_rclass_targ)
#define PerlSock_inet_ntoa(i) inet_ntoa(i)
#define __WCHAR_WIDTH__ 32
#define __DARWIN_BIG_ENDIAN 4321
#define OVERFLOW 3
#define NGX_MAX_SIZE_T_VALUE 9223372036854775807LL
#define UPL_NULL ((upl_t) 0)
#define TAILQ_FOREACH_REVERSE(var,head,headname,field) for ((var) = TAILQ_LAST((head), headname); (var); (var) = TAILQ_PREV((var), headname, field))
#define ngx_openat_file_n "openat()"
#define OP_CHECK_MUTEX_LOCK MUTEX_LOCK(&PL_check_mutex)
#define IPPROTO_MAX 256
#define MACH_MSG_TYPE_COPY_SEND 19
#define YYEMPTY (-2)
#define IPPROTO_CMTP 38
#define case_133_SBOX32(hash,state,key) 
#define I_TERMIOS 
#define NGX_HTTP_UPSTREAM_FT_ERROR 0x00000002
#define mg_dup(a,b) Perl_mg_dup(aTHX_ a,b)
#define __SSE2_MATH__ 1
#define __ATOMIC_HLE_RELEASE 131072
#define _MACH_VM_STATISTICS_H_ 
#define EV_SET64(kevp,a,b,c,d,e,f,g,h) do { struct kevent64_s *__kevp__ = (kevp); __kevp__->ident = (a); __kevp__->filter = (b); __kevp__->flags = (c); __kevp__->fflags = (d); __kevp__->data = (e); __kevp__->udata = (f); __kevp__->ext[0] = (g); __kevp__->ext[1] = (h); } while(0)
#define ngx_is_init_cycle(cycle) (cycle->conf_ctx == NULL)
#define HAS_STRTOLD_L 
#define THREAD_PRECEDENCE_POLICY 3
#define pthread_condattr_default NULL
#define _SC_OPEN_MAX 5
#define NET_RT_IFLIST2 6
#define HASATTRIBUTE_WARN_UNUSED_RESULT 
#define __TVOS_PROHIBITED 
#define vstringify(a) Perl_vstringify(aTHX_ a)
#define KERN_TFP_POLICY 1
#define ETOOMANYREFS 59
#define CopSTASH_eq(c,hv) (CopSTASH(c) == (hv))
#define SvPOK_byte_nogthink(sv) ((SvFLAGS(sv) & (SVf_POK|SVf_UTF8|SVf_THINKFIRST|SVs_GMG)) == SVf_POK)
#define P_EXEC 0x00004000
#define PERL_ARGS_ASSERT_PMRUNTIME assert(o); assert(expr)
#define _POSIX_TZNAME_MAX 6
#define _POSIX_SSIZE_MAX 32767
#define hv_undef(hv) Perl_hv_undef_flags(aTHX_ hv, 0)
#define H_PERL 1
#define MAXUPRC CHILD_MAX
#define SA_RESTART 0x0002
#define host_get_telemetry_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_TELEMETRY_PORT, (port)))
#define MSG_EOF 0x100
#define ngx_next_time_n "mktime()"
#define _SYS_SIGNAL_H_ 
#define IPPROTO_BHA 49
#define _NGX_SETAFFINITY_H_INCLUDED_ 
#define NGX_USE_VNODE_EVENT 0x00002000
#define is_LNBREAK_safe(s,e,is_utf8) ( ((e)-(s) > 2) ? ( ( inRANGE_helper_(U8, ((const U8*)s)[0], '\n', '\f') ) ? 1 : ( '\r' == ((const U8*)s)[0] ) ? ( ( '\n' == ((const U8*)s)[1] ) ? 2 : 1 ) : ( is_utf8 ) ? ( ( 0xC2 == ((const U8*)s)[0] ) ? ( ( 0x85 == ((const U8*)s)[1] ) ? 2 : 0 ) : ( ( ( 0xE2 == ((const U8*)s)[0] ) && ( 0x80 == ((const U8*)s)[1] ) ) && ( inRANGE_helper_(U8, ((const U8*)s)[2], 0xA8, 0xA9) ) ) ? 3 : 0 ) : ( 0x85 == ((const U8*)s)[0] ) ) : ((e)-(s) > 1) ? ( ( inRANGE_helper_(U8, ((const U8*)s)[0], '\n', '\f') ) ? 1 : ( '\r' == ((const U8*)s)[0] ) ? ( ( '\n' == ((const U8*)s)[1] ) ? 2 : 1 ) : ( is_utf8 ) ? ( ( ( 0xC2 == ((const U8*)s)[0] ) && ( 0x85 == ((const U8*)s)[1] ) ) ? 2 : 0 ) : ( 0x85 == ((const U8*)s)[0] ) ) : ((e)-(s) > 0) ? ( ( inRANGE_helper_(U8, ((const U8*)s)[0], '\n', '\r') ) ? 1 : ( !( is_utf8 ) ) ? ( 0x85 == ((const U8*)s)[0] ) : 0 ) : 0 )
#define SCNdFAST16 SCNd16
#define IPV6_UNICAST_HOPS 4
#define pTHX_ pTHX,
#define IPPROTO_BRSATMON 76
#define VM_MEMORY_COREUI_CACHED_IMAGE_DATA 103
#define EVFILT_READ (-1)
#define SIOCDELMULTI _IOW('i', 50, struct ifreq)
#define PERL_ARGS_ASSERT_SV_CATSV assert(dsv)
#define USE_LOCALE_MONETARY 
#define NGX_HTTP_UPSTREAM_BACKUP 0x0020
#define IS_NUMBER_NAN 0x20
#define PERL_ARGS_ASSERT_LEX_START 
#define PERL_ARGS_ASSERT_NEWDEFSVOP 
#define PERLIO_INIT MUTEX_INIT(&PL_perlio_mutex)
#define dump_form(a) Perl_dump_form(aTHX_ a)
#define ngx_conf_merge_sec_value(conf,prev,default) if (conf == NGX_CONF_UNSET) { conf = (prev == NGX_CONF_UNSET) ? default : prev; }
#define DEBUG_p(a) 
#define NONDESTRUCT_PAT_MOD 'r'
#define NGX_HTTP_GZIP_PROXIED_AUTH 0x0100
#define isIDCONT_A(c) isWORDCHAR_A(c)
#define newUNOP(a,b,c) Perl_newUNOP(aTHX_ a,b,c)
#define blk_oldscopesp cx_u.cx_blk.blku_oldscopesp
#define MEM_LOG_ALLOC(n,t,a) (a)
#define CPU_SUBTYPE_ARM_V7EM ((cpu_subtype_t) 16)
#define __tune_core2__ 1
#define NGX_EACCES EACCES
#define SAVEt_HINTS_HH 55
#define MEMORY_OBJECT_PERF_INFO_COUNT ((mach_msg_type_number_t) (sizeof(memory_object_perf_info_data_t)/sizeof(int)))
#define FPE_FLTOVF 2
#define FD_CLOEXEC 1
#define FPC_IM FPC_IE
#define START_EXTERN_C 
#define ATTR_VOL_CAPABILITIES 0x00020000
#define SCNdFAST32 SCNd32
#define cLOOP cLOOPx(PL_op)
#define BSDish 
#define BmRARE(sv) 0
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#define SIOCSDRVSPEC _IOW('i', 123, struct ifdrv)
#define __kpi_deprecated_arm64_macos_unavailable 
#define _SC_BARRIERS 66
#define _NGX_ERRNO_H_INCLUDED_ 
#define REENTRANT_PROTO_I_TSBIR 47
#define O_DP_GETRAWUNENCRYPTED 0x0002
#define MAXHOSTNAMELEN 256
#define __IPV6_ADDR_MC_SCOPE(a) ((a)->s6_addr[1] & 0x0f)
#define KERN_DOMAINNAME KERN_NISDOMAINNAME
#define VM_PURGABLE_ORDERING_MASK (1 << VM_PURGABLE_ORDERING_SHIFT)
#define st_atime st_atimespec.tv_sec
#define IN_PERL_COMPILETIME cBOOL(PL_curcop == &PL_compiling)
#define MNAMELEN MAXPATHLEN
#define __SPI_DEPRECATED(...) 
#define PERL_ARGS_ASSERT_CV_CONST_SV_OR_AV 
#define HAS_GETGROUPS 
#define ngx_link_info_n "lstat()"
#define _POSIX_CPUTIME (-1)
#define do_close(a,b) Perl_do_close(aTHX_ a,b)
#define GvENAMELEN(gv) GvNAMELEN(GvEGV(gv) ? GvEGV(gv) : gv)
#define PERL_ARGS_ASSERT_DRAND48_R assert(random_state)
#define PTHREAD_CREATE_DETACHED 2
#define OpHAS_SIBLING(o) (cBOOL((o)->op_moresib))
#define OP_TYPE_ISNT_NN(o,type) ((o)->op_type != (type))
#define PCRE2_ERROR_DEFINE_TOO_MANY_BRANCHES 154
#define WAKEMON_SET_DEFAULTS 0x08
#define GETPROTOBYNAME_R_PROTO 0
#define _STRUCT_YMM_REG struct __darwin_ymm_reg
#define __WATCHOS_5_2 50200
#define _MMAP 
#define HvENAME_get(hv) ((SvOOK(hv) && HvAUX(hv)->xhv_name_u.xhvnameu_name && HvAUX(hv)->xhv_name_count != -1) ? HEK_KEY(HvENAME_HEK_NN(hv)) : NULL)
#define SCNdFAST64 SCNd64
#define SAVEt_STRLEN_SMALL 23
#define TIOCSPGRP _IOW('t', 118, int)
#define IN6_IS_ADDR_UNIQUE_LOCAL(a) (((a)->s6_addr[0] == 0xfc) || ((a)->s6_addr[0] == 0xfd))
#define IOC_VOID (__uint32_t)0x20000000
#define PERL_ARGS_ASSERT_HV_SCALAR assert(hv)
#define Perl_acos acos
#define AUDIT_EXPIRE_OP_OR ((unsigned char)1)
#define MACH_VOUCHER_IMPORTANCE_ATTR_DROP_EXTERNAL 2
#define ptr_table_split(a) Perl_ptr_table_split(aTHX_ a)
#define TCP_ENABLE_ECN 0x104
#define PERL_ARGS_ASSERT_SV_DOES_SV assert(sv); assert(namesv)
#define PERL_ARGS_ASSERT_PERLY_SIGHANDLER 
#define _POSIX_TRACE_SYS_MAX 8
#define PERL_ARGS_ASSERT_AMAGIC_CALL assert(left); assert(right)
#define OPpSORT_STABLE 0x40
#define isXDIGIT_L1(c) isXDIGIT_A(c)
#define ATTR_VOL_DIRCOUNT 0x00000400
#define RUNOPS_DEFAULT Perl_runops_standard
#define EV_RECEIPT 0x0040
#define PROCESSOR_SET_LOAD_INFO_COUNT ((mach_msg_type_number_t) (sizeof(processor_set_load_info_data_t)/sizeof(natural_t)))
#define isXDIGIT_LC(c) _generic_LC(c, _CC_XDIGIT, isxdigit)
#define PL_vtbl_regdatum PL_magic_vtables[want_vtbl_regdatum]
#define PerlProc_crypt(c,s) crypt((c), (s))
#define AUC_AUDITING 1
#define TIOCPKT_NOSTOP 0x10
#define SCNu32 "u"
#define PERL_ARGS_ASSERT_PADNAMELIST_FETCH assert(pnl)
#define __WATCHOS_6_0 60000
#define __WATCHOS_6_1 60100
#define __WATCHOS_6_2 60200
#define SS_ADD_BOOL(p) ((ssp++)->any_bool = (p))
#define POSIX_MADV_NORMAL 0
#define PERL_ARGS_ASSERT_PERLSOCK_SOCKETPAIR_CLOEXEC assert(pairfd)
#define case_117_SBOX32(hash,state,key) 
#define PERL_ARGS_ASSERT__IS_UNI_FOO 
#define VM_FLAGS_PERMANENT 0x0080
#define HAS_LOCALECONV_L 
#define UINTPTR_MAX 18446744073709551615UL
#define PCRE2_EXTRA_BAD_ESCAPE_IS_LITERAL 0x00000002u
#define IOPOL_TYPE_DISK 0
#define rv2cv_op_cv(a,b) Perl_rv2cv_op_cv(aTHX_ a,b)
#define op_null(a) Perl_op_null(aTHX_ a)
#define RX_MATCH_UTF8(rx_sv) (RX_EXTFLAGS(rx_sv) & RXf_MATCH_UTF8)
#define NETDB_INTERNAL -1
#define __MAC_OS_X_VERSION_MAX_ALLOWED __MAC_11_3
#define NGX_HTTP_UPSTREAM_FT_OFF 0x80000000
#define blk_loop cx_u.cx_blk.blk_u.blku_loop
#define ngx_dlsym_n "dlsym()"
#define G_KEEPERR 0x20
#define newSLICEOP(a,b,c) Perl_newSLICEOP(aTHX_ a,b,c)
#define SIOCSLOWAT _IOW('s', 2, int)
#define he_dup(a,b,c) Perl_he_dup(aTHX_ a,b,c)
#define SAWAMPERSAND_RIGHT 4
#define DEFAULT_INC_EXCLUDES_DOT 
#define LC_MONETARY 3
#define PERL_ARGS_ASSERT_LEX_PEEK_UNICHAR 
#define NGX_ESCAPE_URI_COMPONENT 2
#define PERL_ARGS_ASSERT_SORTSV assert(cmp)
#define mg_set(a) Perl_mg_set(aTHX_ a)
#define IPPROTO_APES 99
#define PERL_ARGS_ASSERT_DO_VOP assert(sv); assert(left); assert(right)
#define __FLT_MIN_EXP__ (-125)
#define NGX_HAVE_PWRITEV 1
#define eval_sv(a,b) Perl_eval_sv(aTHX_ a,b)
#define UF_NODUMP 0x00000001
#define PERL_ARGS_ASSERT_DUMP_ALL 
#define OPpLVREF_AV 0x10
#define NGX_HTTP_MAIN_CONF 0x02000000
#define NGX_SIZE_T_LEN (sizeof("-9223372036854775808") - 1)
#define PERL_ARGS_ASSERT_PTR_TABLE_NEW 
#define WEXITED 0x00000004
#define I_NDBM 
#define ngx_http_get_module_main_conf(r,module) (r)->main_conf[module.ctx_index]
#define pop_scope() Perl_pop_scope(aTHX)
#define IPV6_V6ONLY 27
#define VM_METER 1
#define math_errhandling (__math_errhandling())
#define PERLDB_SAVESRC_INVALID (PL_perldb & PERLDBf_SAVESRC_INVALID)
#define CPU_TYPE_POWERPC64 (CPU_TYPE_POWERPC | CPU_ARCH_ABI64)
#define ngx_atomic_cmp_set(lock,old,set) __sync_bool_compare_and_swap(lock, old, set)
#define powerof2(x) ((((x)-1)&(x))==0)
#define __printf0like(fmtarg,firstvararg) __attribute__((__format__ (__printf0__, fmtarg, firstvararg)))
#define DEBUG_L_TEST (0)
#define CPU_SUBTYPE_586 CPU_SUBTYPE_INTEL(5, 0)
#define VM_PROT_READ ((vm_prot_t) 0x01)
#define IPV6_RECVRTHDR 38
#define NGX_HTTP_INTERNAL_SERVER_ERROR 500
#define PERL_ARGS_ASSERT_DUMP_PACKSUBS_PERL assert(stash)
#define RsSNARF(sv) (! SvOK(sv))
#define perly_sighandler Perl_perly_sighandler
#define PERL_ARGS_ASSERT_SETFD_INHEXEC_FOR_SYSFD 
#define FF_NEWLINE 13
#define MALLOC_VERBOSE_PRINT_LEVEL 2
#define isPRINT_utf8_safe(p,e) _generic_invlist_utf8_safe(_CC_PRINT, p, e)
#define ATTR_VOL_FILECOUNT 0x00000200
#define utf8_to_bytes(a,b) Perl_utf8_to_bytes(aTHX_ a,b)
#define HOST_PRIV_NULL ((host_priv_t) 0)
#define _STRUCT_MMST_REG struct __darwin_mmst_reg
#define case_32_SBOX32(hash,state,key) 
#define strcat(dest,...) __builtin___strcat_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define IPV6CTL_RTMINEXPIRE 26
#define NGX_CMD_QUIT 3
#define PERL_ARGS_ASSERT_CVDEPTH assert(sv)
#define __INT_FAST64_TYPE__ long long int
#define WARN_EXPERIMENTAL__WIN32_PERLIO 62
#define P_DIRTY_DEFER 0x00000004
#define KERN_IPC 32
#define IN_UTF8_CTYPE_LOCALE PL_in_utf8_CTYPE_locale
#define isASCII_utf8_safe(p,e) (__ASSERT_(_utf8_safe_assert(p, e)) isASCII(*(p)))
#define utf8_hop_back Perl_utf8_hop_back
#define KERN_AIOPROCMAX 47
#define __FLT128_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define do_hv_dump(a,b,c,d) Perl_do_hv_dump(aTHX_ a,b,c,d)
#define SIOCARPIPLL _IOWR('i', 40, struct ifreq)
#define isXDIGIT(c) isXDIGIT_A(c)
#define G_RETHROW 0x2000
#define host_get_filecoordinationd_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_FILECOORDINATIOND_PORT, (port)))
#define xlv_targoff xlv_targoff_u.xlvu_targoff
#define NI_WITHSCOPEID 0x00000020
#define VM_PURGABLE_ORDERING_NORMAL (0 << VM_PURGABLE_ORDERING_SHIFT)
#define SO_NWRITE 0x1024
#define CALLREGCOMP(sv,flags) Perl_pregcomp(aTHX_ (sv),(flags))
#define WINT_MIN INT32_MIN
#define PCRE2_ERROR_INVALID_HYPHEN_IN_OPTIONS 194
#define CPUFAMILY_ARM_XSCALE 0x53b005f5
#define __SMBF 0x0080
#define PERL_ARGS_ASSERT_SV_2PVUTF8_NOLEN assert(sv)
#define LOCALE_TERM_LC_NUMERIC_ NOOP
#define P_NOCLDWAIT 0x40000000
#define SvPV_const(sv,len) SvPV_flags_const(sv, len, SV_GMAGIC)
#define perl_get_sv(a,b) get_sv(a,b)
#define TAILQ_PREV(elm,headname,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH (*(((struct headname *)((elm)->field.tqe_prev))->tqh_last)) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define VM_MEMORY_UNSHARED_PMAP 35
#define DST_WET 3
#define OS_FALLTHROUGH __attribute__((__fallthrough__))
#define RXf_PMf_NOCAPTURE (1U << (RXf_PMf_STD_PMMOD_SHIFT+5))
#define VOL_CAP_FMT_PERSISTENTOBJECTIDS 0x00000001
#define PERL_ARGS_ASSERT_CROAK 
#define TH_SYN 0x02
#define VM_MEMORY_CORESERVICES 43
#define VFS_CTL_NEWADDR 0x00010004
#define PCRE2_INFO_NEWLINE 20
#define HOST_BASIC_INFO_COUNT ((mach_msg_type_number_t) (sizeof(host_basic_info_data_t)/sizeof(integer_t)))
#define IPV6_RECVDSTOPTS 40
#define isLOWER_uvchr(c) _generic_invlist_uvchr(_CC_LOWER, c)
#define PL_regmatch_slab (vTHX->Iregmatch_slab)
#define PERL_ARGS_ASSERT_MRO_METHOD_CHANGED_IN assert(stash)
#define RUSAGE_INFO_CURRENT RUSAGE_INFO_V5
#define AF_UTUN 38
#define RXapif_DELETE 0x0004
#define IPPROTO_MTP 92
#define PERL_HASH_SEED_WORDS (PERL_HASH_SEED_BYTES/__PERL_HASH_WORD_SIZE)
#define __sgetc(p) (--(p)->_r < 0 ? __srget(p) : (int)(*(p)->_p++))
#define KERN_PROC_PID 1
#define USE_LOCALE_COLLATE 
#define EXC_I386_BOUNDFLT 5
#define PERL_ARGS_ASSERT_MAGIC_SCALARPACK assert(hv); assert(mg)
#define _XOPEN_LEGACY (-1)
#define __IPHONE_7_0 70000
#define __IPHONE_7_1 70100
#define TF_LP64 0x00000001
#define _MACH_KMOD_H_ 
#define Sigsetjmp(buf,save_mask) sigsetjmp((buf),(save_mask))
#define DEBUG_D_TEST_ UNLIKELY(PL_debug & DEBUG_D_FLAG)
#define REENTRANT_PROTO_I_TSBWR 48
#define SAVEt_CLEARPADRANGE 1
#define HOST_DYNAMIC_PAGER_PORT (1 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define PERL_ARGS_ASSERT_SV_SETIV_MG assert(sv)
#define IN6_IS_ADDR_MC_GLOBAL(a) (IN6_IS_ADDR_MULTICAST(a) && (__IPV6_ADDR_MC_SCOPE(a) == __IPV6_ADDR_SCOPE_GLOBAL))
#define IPPROTO_MUX 18
#define EXC_BREAKPOINT 6
#define __deprecated_enum_msg(_msg) 
#define CALLREGDUPE(prog,param) Perl_re_dup(aTHX_ (prog),(param))
#define MSVC_DIAG_IGNORE_DECL(x) MSVC_DIAG_IGNORE(x) dNOOP
#define IPCTL_SOURCEROUTE 8
#define WARN_NONEstring "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
#define dPOPXnnrl(X) NV right = POPn; NV left = CAT2(X,n)
#define PAD_COMPNAME_FLAGS(po) PadnameFLAGS(PAD_COMPNAME(po))
#define SIGINFO 29
#define dirp_dup(a,b) Perl_dirp_dup(aTHX_ a,b)
#define pcre2_general_context_create PCRE2_SUFFIX(pcre2_general_context_create_)
#define PL_scopestack_ix (vTHX->Iscopestack_ix)
#define __DARWIN_CTYPE_inline __header_inline
#define PUSHSTACKi(type) STMT_START { PERL_SI *next = PL_curstackinfo->si_next; DEBUG_l({ int i = 0; PERL_SI *p = PL_curstackinfo; while (p) { i++; p = p->si_prev; } Perl_deb(aTHX_ "push STACKINFO %d at %s:%d\n", i, __FILE__, __LINE__);}) if (!next) { next = new_stackinfo(32, 2048/sizeof(PERL_CONTEXT) - 1); next->si_prev = PL_curstackinfo; PL_curstackinfo->si_next = next; } next->si_type = type; next->si_cxix = -1; next->si_cxsubix = -1; PUSHSTACK_INIT_HWM(next); AvFILLp(next->si_stack) = 0; SWITCHSTACK(PL_curstack,next->si_stack); PL_curstackinfo = next; SET_MARK_OFFSET; } STMT_END
#define PCRE2_INFO_RECURSIONLIMIT 21
#define MNT_EXT_ROOT_DATA_VOL 0x00000001
#define PERL_ARGS_ASSERT_SAVE_FREEOP 
#define sigismember(set,signo) ((*(set) & __sigbits(signo)) != 0)
#define DEBUG_A_TEST (0)
#define gv_HVadd(gv) gv_add_by_type((gv), SVt_PVHV)
#define PerlEnv_getenv_len(str,l) getenv_len((str), (l))
#define IP_DUMMYNET_GET 64
#define IOf_FLUSH 4
#define PERL_ARGS_ASSERT_REG_NAMED_BUFF_SCALAR assert(rx)
#define pcre2_substitute_callout_block PCRE2_SUFFIX(pcre2_substitute_callout_block_)
#define fwopen(cookie,fn) funopen(cookie, 0, fn, 0, 0)
#define SCHAR_MAX __SCHAR_MAX__
#define RTLD_LOCAL 0x4
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_0(x) 
#define HAS_MEMMEM 
#define SAVEt_FREECOPHH 8
#define ATTR_DIR_MOUNTSTATUS 0x00000004
#define NGX_ENOMEM ENOMEM
#define PL_mem_log (vTHX->Imem_log)
#define MEMORY_OBJECT_INFO_MAX (1024)
#define PerlProc_longjmp(b,n) Siglongjmp((b), (n))
#define HOST_CPU_LOAD_INFO 3
#define ngx_max(val1,val2) ((val1 < val2) ? (val2) : (val1))
#define __TVOS_12_4 120400
#define HAS_MKDTEMP 
#define doref(a,b,c) Perl_doref(aTHX_ a,b,c)
#define __UINT64_MAX__ 0xffffffffffffffffULL
#define PERL_ARGS_ASSERT_DO_BINMODE assert(fp)
#define CHAR_MAX SCHAR_MAX
#define I_UTIME 
#define PERL_TSA_RELEASE(x) PERL_TSA__(release_capability(x))
#define CvCONST(cv) (CvFLAGS(cv) & CVf_CONST)
#define STATUS_NATIVE PL_statusvalue_posix
#define PERL_ARGS_ASSERT_BLOCK_GIMME 
#define UNICODE_DISALLOW_ILLEGAL_INTERCHANGE (UNICODE_DISALLOW_ILLEGAL_C9_INTERCHANGE|UNICODE_DISALLOW_NONCHAR)
#define FPE_INTDIV 7
#define SEEK_DATA 4
#define IP_FW_ZERO 43
#define EFL_IOPL_KERNEL 0x00000000
#define OpMORESIB_set(o,sib) ((o)->op_moresib = 1, (o)->op_sibparent = (sib))
#define IP_RECVTOS 27
#define PERL_ARGS_ASSERT_NEWSLICEOP 
#define TASK_READ_PORT 6
#define PERL_JNP_TO_DECIMAL_(maJor,miNor,Patch) (10 * ((maJor) * 1000000) + ((miNor) * 1000) + (Patch))
#define _SYS_FILIO_H_ 
#define IPC_RMID 0
#define vnumify(a) Perl_vnumify(aTHX_ a)
#define DBL_MANT_DIG __DBL_MANT_DIG__
#define CVf_LVALUE 0x0002
#define i386_EXCEPTION_STATE_COUNT ((mach_msg_type_number_t) ( sizeof (i386_exception_state_t) / sizeof (int) ))
#define PerlSock_gethostname(n,l) gethostname(n, l)
#define HOST_MIN_SPECIAL_PORT HOST_SECURITY_PORT
#define IN_CLASSC_HOST 0x000000ff
#define ngx_conf_merge_off_value(conf,prev,default) if (conf == NGX_CONF_UNSET) { conf = (prev == NGX_CONF_UNSET) ? default : prev; }
#define _IOC(inout,group,num,len) (inout | ((len & IOCPARM_MASK) << 16) | ((group) << 8) | (num))
#define NGX_RESOLVE_SERVFAIL 2
#define NGINX_VERSION "1.21.5"
#define PERL_MULTICONCAT_MAXARG 64
#define _IOR(g,n,t) _IOC(IOC_OUT, (g), (n), sizeof(t))
#define HAS_GETSERVENT 
#define PL_collation_name (vTHX->Icollation_name)
#define _toUPPER_utf8_flags(p,e,s,l,f) _to_utf8_upper_flags(p,e,s,l,f)
#define _IOW(g,n,t) _IOC(IOC_IN, (g), (n), sizeof(t))
#define F_ADDFILESUPPL 104
#define case_60_SBOX32(hash,state,key) 
#define cv_name(a,b,c) Perl_cv_name(aTHX_ a,b,c)
#define _SC_FILE_LOCKING 69
#define SVs_RMG 0x00800000
#define block_gimme() Perl_block_gimme(aTHX)
#define MULTILINE_PAT_MOD 'm'
#define pseudo_AF_PIP 25
#define CVf_METHOD 0x0001
#define op_sibling_splice Perl_op_sibling_splice
#define __REGISTER_PREFIX__ 
#define IP_MULTICAST_IFINDEX 66
#define PERL_MAGIC_regdata 'D'
#define NGX_RESOLVE_PTR 12
#define IOPOL_VFS_IGNORE_PERMISSIONS_ON 1
#define RX_MATCH_TAINTED_off(rx_sv) (RX_EXTFLAGS(rx_sv) &= ~RXf_TAINTED_SEEN)
#define PerlMemParse_is_locked() 0
#define MACH_PORT_TYPE_SEND_ONCE MACH_PORT_TYPE(MACH_PORT_RIGHT_SEND_ONCE)
#define PERLDBf_LINE 0x02
#define DEBUG_B_FLAG 0x02000000
#define MPO_IMPORTANCE_RECEIVER 0x08
#define TASK_DEBUG_CONTROL_PORT 10
#define TCP6_MSS 1024
#define EV_DISPATCH 0x0080
#define RXf_SPLIT RXf_PMf_SPLIT
#define _CS_XBS5_ILP32_OFFBIG_LIBS 26
#define X_TLOSS 1.41484755040568800000e+16
#define NOTE_EXIT_REPARENTED ((unsigned int)eNoteExitReparentedDeprecated)
#define PERL_OTHERLIBDIRS "/usr/local/lib/perl5/site_perl/5.34.0"
#define CVf_LEXICAL 0x10000
#define _PC_MAX_CANON 2
#define PF_INET6 AF_INET6
#define HOST_FAIRPLAYD_PORT (24 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define TASK_EXC_GUARD_VM_ONCE 0x02
#define CopFILE_setn(c,pv,l) ((c)->cop_file = savesharedpvn((pv),(l)))
#define SvREFCNT_IMMORTAL ((~(U32)0)/2)
#define find_runcv(a) Perl_find_runcv(aTHX_ a)
#define is_LNBREAK_utf8_safe(s,e) ( ((e)-(s) > 2) ? ( ( inRANGE_helper_(U8, ((const U8*)s)[0], '\n', '\f') ) ? 1 : ( '\r' == ((const U8*)s)[0] ) ? ( ( '\n' == ((const U8*)s)[1] ) ? 2 : 1 ) : ( 0xC2 == ((const U8*)s)[0] ) ? ( ( 0x85 == ((const U8*)s)[1] ) ? 2 : 0 ) : ( ( ( 0xE2 == ((const U8*)s)[0] ) && ( 0x80 == ((const U8*)s)[1] ) ) && ( inRANGE_helper_(U8, ((const U8*)s)[2], 0xA8, 0xA9) ) ) ? 3 : 0 ): ((e)-(s) > 1) ? ( ( inRANGE_helper_(U8, ((const U8*)s)[0], '\n', '\f') ) ? 1 : ( '\r' == ((const U8*)s)[0] ) ? ( ( '\n' == ((const U8*)s)[1] ) ? 2 : 1 ) : ( ( 0xC2 == ((const U8*)s)[0] ) && ( 0x85 == ((const U8*)s)[1] ) ) ? 2 : 0 ): ((e)-(s) > 0) ? ( inRANGE_helper_(U8, ((const U8*)s)[0], '\n', '\r') ) : 0 )
#define IP_RECVTTL 24
#define GLOB_MARK 0x0008
#define DEBUG_MASK 0x1FFFEFFF
#define PL_vtbl_nonelem PL_magic_vtables[want_vtbl_nonelem]
#define PCRE2_ENDANCHORED 0x20000000u
#define PCRE2_ERROR_SUBPATTERN_NAME_TOO_LONG 148
#define VOL_CAP_INT_EXCHANGEDATA 0x00000010
#define what_MULTI_CHAR_FOLD_utf8_safe_part6_(s,e) ( ( ( ((const U8*)s)[0] & 0xDF ) == 'A' ) ? ( ( ( 0xCA == ((const U8*)s)[1] ) && ( 0xBE == ((const U8*)s)[2] ) ) ? 0x1E9A : 0 ) : ( ( ((const U8*)s)[0] & 0xDF ) == 'F' ) ? ( ( ( ((const U8*)s)[1] & 0xDF ) == 'F' ) ? ( ( ( ((const U8*)s)[2] & 0xDF ) == 'I' ) ? 0xFB03 : ( ( ((const U8*)s)[2] & 0xDF ) == 'L' ) ? 0xFB04 : 0xFB00 ) : ( ( ((const U8*)s)[1] & 0xDF ) == 'I' ) ? 0xFB01 : ( ( ((const U8*)s)[1] & 0xDF ) == 'L' ) ? 0xFB02 : 0 ) : ( ( ((const U8*)s)[0] & 0xDF ) == 'H' ) ? ( ( ( 0xCC == ((const U8*)s)[1] ) && ( 0xB1 == ((const U8*)s)[2] ) ) ? 0x1E96 : 0 ) : ( ( ((const U8*)s)[0] & 0xDF ) == 'I' ) ? ( ( ( 0xCC == ((const U8*)s)[1] ) && ( 0x87 == ((const U8*)s)[2] ) ) ? 0x130 : 0 ) : ( ( ((const U8*)s)[0] & 0xDF ) == 'J' ) ? ( ( ( 0xCC == ((const U8*)s)[1] ) && ( 0x8C == ((const U8*)s)[2] ) ) ? 0x1F0 : 0 ) : ( ( ((const U8*)s)[0] & 0xDF ) == 'S' ) ? ( ( ( ((const U8*)s)[1] & 0xDF ) == 'S' ) ? 0xDF : ( ( ((const U8*)s)[1] & 0xDF ) == 'T' ) ? 0xFB05 : ( ( 0xC5 == ((const U8*)s)[1] ) && ( 0xBF == ((const U8*)s)[2] ) ) ? 0xDF : 0 ) : ( ( ((const U8*)s)[0] & 0xDF ) == 'T' ) ? ( ( ( 0xCC == ((const U8*)s)[1] ) && ( 0x88 == ((const U8*)s)[2] ) ) ? 0x1E97 : 0 ) : ( ( ((const U8*)s)[0] & 0xDF ) == 'W' ) ? ( ( ( 0xCC == ((const U8*)s)[1] ) && ( 0x8A == ((const U8*)s)[2] ) ) ? 0x1E98 : 0 ) : ( ( ((const U8*)s)[0] & 0xDF ) == 'Y' ) ? ( ( ( 0xCC == ((const U8*)s)[1] ) && ( 0x8A == ((const U8*)s)[2] ) ) ? 0x1E99 : 0 ) : ( 0xC5 == ((const U8*)s)[0] ) ? ( ( 0xBF == ((const U8*)s)[1] ) ? ( ( ( ((const U8*)s)[2] & 0xDF ) == 'S' ) ? 0xDF : ( ( ((const U8*)s)[2] & 0xDF ) == 'T' ) ? 0xFB05 : ( ( 0xC5 == ((const U8*)s)[2] ) && ( 0xBF == ((const U8*)s)[3] ) ) ? 0xDF : 0 ) : 0 ) : ( 0xCA == ((const U8*)s)[0] ) ? ( ( ( 0xBC == ((const U8*)s)[1] ) && ( ( ((const U8*)s)[2] & 0xDF ) == 'N' ) ) ? 0x149 : 0 ) : ( 0xCE == ((const U8*)s)[0] ) ? ( ( 0xAC == ((const U8*)s)[1] ) ? ( ( ( 0xCE == ((const U8*)s)[2] ) && ( 0xB9 == ((const U8*)s)[3] ) ) ? 0x1FB4 : 0 ) : ( 0xAE == ((const U8*)s)[1] ) ? ( ( ( 0xCE == ((const U8*)s)[2] ) && ( 0xB9 == ((const U8*)s)[3] ) ) ? 0x1FC4 : 0 ) : ( 0xB1 == ((const U8*)s)[1] ) ? ( ( 0xCD == ((const U8*)s)[2] ) ? ( ( 0x82 == ((const U8*)s)[3] ) ? ( ( ( 0xCE == ((const U8*)s)[4] ) && ( 0xB9 == ((const U8*)s)[5] ) ) ? 0x1FB7 : 0x1FB6 ) : 0 ) : ( ( 0xCE == ((const U8*)s)[2] ) && ( 0xB9 == ((const U8*)s)[3] ) ) ? 0x1FB3 : 0 ) : ( 0xB7 == ((const U8*)s)[1] ) ? ( ( 0xCD == ((const U8*)s)[2] ) ? ( ( 0x82 == ((const U8*)s)[3] ) ? ( ( ( 0xCE == ((const U8*)s)[4] ) && ( 0xB9 == ((const U8*)s)[5] ) ) ? 0x1FC7 : 0x1FC6 ) : 0 ) : ( ( 0xCE == ((const U8*)s)[2] ) && ( 0xB9 == ((const U8*)s)[3] ) ) ? 0x1FC3 : 0 ) : ( 0xB9 == ((const U8*)s)[1] ) ? ( ( 0xCC == ((const U8*)s)[2] ) ? ( ( 0x88 == ((const U8*)s)[3] ) ? ( ( 0xCC == ((const U8*)s)[4] ) ? ( ( 0x80 == ((const U8*)s)[5] ) ? 0x1FD2 : ( 0x81 == ((const U8*)s)[5] ) ? 0x390 : 0 ) : ( ( 0xCD == ((const U8*)s)[4] ) && ( 0x82 == ((const U8*)s)[5] ) ) ? 0x1FD7 : 0 ) : 0 ) : ( ( 0xCD == ((const U8*)s)[2] ) && ( 0x82 == ((const U8*)s)[3] ) ) ? 0x1FD6 : 0 ) : 0 ) : ( 0xCF == ((const U8*)s)[0] ) ? what_MULTI_CHAR_FOLD_utf8_safe_part0_(s,e) : what_MULTI_CHAR_FOLD_utf8_safe_part1_(s,e) )
#define KEYWORD_PLUGIN_MUTEX_UNLOCK MUTEX_UNLOCK(&PL_keyword_plugin_mutex)
#define NOCAPTURE_PAT_MOD 'n'
#define _POSIX_V7_ILP32_OFF32 __ILP32_OFF32
#define PERL_ARGS_ASSERT_SAVE_AELEM 
#define SO_NET_SERVICE_TYPE 0x1116
#define TIMEVAL_TO_TIMESPEC(tv,ts) { (ts)->tv_sec = (tv)->tv_sec; (ts)->tv_nsec = (tv)->tv_usec * 1000; }
#define case_11_SBOX32(hash,state,key) _SBOX32_CASE(11,hash,state,key)
#define PERL_ARGS_ASSERT_HV_CLEAR 
#define host_set_chud_port(host,port) host_set_launchctl_port(host, port)
#define EV_OOBAND EV_FLAG1
#define AvREIFY_on(av) (SvFLAGS(av) |= SVpav_REIFY)
#define PCRE2_CASELESS 0x00000008u
#define SvIV(sv) (SvIOK_nog(sv) ? SvIVX(sv) : sv_2iv(sv))
#define NGX_MAX_TIME_T_VALUE 9223372036854775807LL
#define SAVEt_ADELETE 47
#define strcpy(dest,...) __builtin___strcpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define ENV_READ_LOCK PERL_READ_LOCK(&PL_env_mutex)
#define isGV_with_GP(pwadak) (((SvFLAGS(pwadak) & (SVp_POK|SVpgv_GP)) == SVpgv_GP) && (SvTYPE(pwadak) == SVt_PVGV || SvTYPE(pwadak) == SVt_PVLV))
#define ngx_min(val1,val2) ((val1 > val2) ? (val2) : (val1))
#define pcre2_substitute PCRE2_SUFFIX(pcre2_substitute_)
#define SAVEt_DESTRUCTOR_X 26
#define PERLDB_SINGLE (PL_perldb & PERLDBf_SINGLE)
#define HAS_NEXTAFTER 
#define OPf_WANT_LIST 3
#define QR_PAT_MODS STD_PAT_MODS EXT_PAT_MODS CHARSET_PAT_MODS
#define lex_read_to(a) Perl_lex_read_to(aTHX_ a)
#define CHAR_MIN SCHAR_MIN
#define __FLT_MANT_DIG__ 24
#define newPROG(a) Perl_newPROG(aTHX_ a)
#define NOTE_EXIT_DETAIL_MASK 0x00070000
#define NGX_USE_IOCP_EVENT 0x00000200
#define MDEREF_HV_vivify_rv2hv_helem 11
#define VM_MEMORY_ROSETTA_10 239
#define KIPC_SOQLIMITCOMPAT 10
#define __VERSION__ "11.2.0"
#define SIOCSIFPHYADDR _IOW('i', 62, struct ifaliasreq)
#define PTHREAD_ATTR_SETDETACHSTATE(a,s) pthread_attr_setdetachstate(a,s)
#define _CC_NONLATIN1_FOLD 18
#define call_method(a,b) Perl_call_method(aTHX_ a,b)
#define OPpOPEN_OUT_CRLF 0x80
#define PERLDB_LINE_OR_SAVESRC (PL_perldb & (PERLDBf_LINE | PERLDBf_SAVESRC))
#define _NGX_PARSE_H_INCLUDED_ 
#define gv_fetchfile(a) Perl_gv_fetchfile(aTHX_ a)
#define UVXf "lX"
#define PERL_ARGS_ASSERT_SV_LEN_UTF8 
#define VFS_CTL_STATFS VFS_CTL_STATFS64
#define PL_regex_padav (vTHX->Iregex_padav)
#define PERL_PV_ESCAPE_UNI 0x000100
#define REENTRANT_PROTO_I_ICBI 27
#define HOST_VM_INFO_LATEST_COUNT HOST_VM_INFO_COUNT
#define MSG_WAITSTREAM 0x200
#define IN_CLASSA(i) (((u_int32_t)(i) & 0x80000000) == 0)
#define my_socketpair Perl_my_socketpair
#define isREGEXP(sv) (SvTYPE(sv) == SVt_REGEXP || (SvFLAGS(sv) & (SVTYPEMASK|SVpgv_GP|SVf_FAKE)) == (SVt_PVLV|SVf_FAKE))
#define MACH_PORT_TYPE(right) ((mach_port_type_t)(((mach_port_type_t) 1) << ((right) + ((mach_port_right_t) 16))))
#define Perl_error_log (PL_stderrgv && isGV(PL_stderrgv) && GvIOp(PL_stderrgv) && IoOFP(GvIOp(PL_stderrgv)) ? IoOFP(GvIOp(PL_stderrgv)) : PerlIO_stderr())
#define HvTOTALKEYS(hv) XHvTOTALKEYS((XPVHV*) SvANY(hv))
#define Zero(d,n,t) (MEM_WRAP_CHECK_(n,t) perl_assert_ptr(d), (void)memzero((char*)(d), (n) * sizeof(t)))
#define _MACH_PORT_T 
#define HAS_MBLEN 
#define NGX_HAVE_SYS_MOUNT_H 1
#define SF_APPEND 0x00040000
#define HvEITER_get(hv) (SvOOK(hv) ? HvAUX(hv)->xhv_eiter : NULL)
#define sv_cathek(sv,hek) STMT_START { HEK * const bmxk = hek; sv_catpvn_flags(sv, HEK_KEY(bmxk), HEK_LEN(bmxk), HEK_UTF8(bmxk) ? SV_CATUTF8 : SV_CATBYTES); } STMT_END
#define PCRE2_ERROR_MISSING_CALLOUT_CLOSING 139
#define PERL_ARGS_ASSERT_HV_COPY_HINTS_HV 
#define NV_WITHIN_IV(nv) (I_V(nv) >= IV_MIN && I_V(nv) <= IV_MAX)
#define ATTR_CMN_ADDEDTIME 0x10000000
#define CvISXSUB_off(cv) (CvFLAGS(cv) &= ~CVf_ISXSUB)
#define PERLDBf_GOTO 0x80
#define PERL_ARGS_ASSERT_SAVESHAREDSVPV assert(sv)
#define IP_FW_DEL 41
#define PERL_DEFAULT_DO_EXEC3_IMPLEMENTATION 
#define VM_FLAGS_SUPERPAGE_SIZE_2MB (SUPERPAGE_SIZE_2MB<<VM_FLAGS_SUPERPAGE_SHIFT)
#define ATTR_CMN_MODTIME 0x00000400
#define call_sv(a,b) Perl_call_sv(aTHX_ a,b)
#define PL_padname_undef (vTHX->Ipadname_undef)
#define CTL_USER_NAMES { { 0, 0 }, { "cs_path", CTLTYPE_STRING }, { "bc_base_max", CTLTYPE_INT }, { "bc_dim_max", CTLTYPE_INT }, { "bc_scale_max", CTLTYPE_INT }, { "bc_string_max", CTLTYPE_INT }, { "coll_weights_max", CTLTYPE_INT }, { "expr_nest_max", CTLTYPE_INT }, { "line_max", CTLTYPE_INT }, { "re_dup_max", CTLTYPE_INT }, { "posix2_version", CTLTYPE_INT }, { "posix2_c_bind", CTLTYPE_INT }, { "posix2_c_dev", CTLTYPE_INT }, { "posix2_char_term", CTLTYPE_INT }, { "posix2_fort_dev", CTLTYPE_INT }, { "posix2_fort_run", CTLTYPE_INT }, { "posix2_localedef", CTLTYPE_INT }, { "posix2_sw_dev", CTLTYPE_INT }, { "posix2_upe", CTLTYPE_INT }, { "stream_max", CTLTYPE_INT }, { "tzname_max", CTLTYPE_INT } }
#define _POSIX_VERSION 200112L
#define HASATTRIBUTE_NONNULL 
#define KERN_OPENEVT_PROC 1
#define PAGE_MIN_MASK (PAGE_MIN_SIZE-1)
#define OS_FORMAT_PRINTF(x,y) __attribute__((__format__(printf,x,y)))
#define islessequal(x,y) __builtin_islessequal((x),(y))
#define IPV6CTL_KEEPFAITH 13
#define KERN_PROC_SESSION 3
#define case_41_SBOX32(hash,state,key) 
#define VM_MEMORY_TCMALLOC 53
#define VQ_SYNCEVENT 0x0400
#define ngx_http_set_log_request(log,r) ((ngx_http_log_ctx_t *) log->data)->current_request = r
#define __DARWIN_ONLY_UNIX_CONFORMANCE 1
#define _UNISTD_H_ 
#define x86_EXCEPTION_STATE 9
#define PTHREAD_PRIO_INHERIT 1
#define SvNV(sv) (SvNOK_nog(sv) ? SvNVX(sv) : sv_2nv(sv))
#define ngx_close_socket_n "close() socket"
#define NV_MIN_EXP DBL_MIN_EXP
#define hv_name_sets(hv,name,flags) hv_name_set((hv),("" name ""),(sizeof(name)-1), flags)
#define NOTE_DELETE 0x00000001
#define _PC_REC_INCR_XFER_SIZE 20
#define TCPCI_OPT_WSCALE 0x00000004
#define CPU_SUBTYPE_MC680x0_ALL ((cpu_subtype_t) 1)
#define sv_gets(a,b,c) Perl_sv_gets(aTHX_ a,b,c)
#define ENOTSOCK 38
#define SvOK(sv) (SvFLAGS(sv) & SVf_OK)
#define isPRINT(c) isPRINT_A(c)
#define O_RDWR 0x0002
#define NVTYPE double
#define SZOMB 5
#define PERL_ARGS_ASSERT_PERLIO_CONTEXT_LAYERS 
#define _SYS_SOCKIO_H_ 
#define TH_ECE 0x40
#define PerlEnv_getenv(str) mortal_getenv(str)
#define _T_PTRDIFF_ 
#define WEOF __DARWIN_WEOF
#define MSG_FLUSH 0x400
#define EPERM 1
#define INIT_TRACK_MEMPOOL(header,interp) 
#define INADDR_ALLHOSTS_GROUP (u_int32_t)0xe0000001
#define TCP_NOPUSH 0x04
#define SvPV(sv,len) SvPV_flags(sv, len, SV_GMAGIC)
#define HAS_DUP2 
#define __SSTR 0x0200
#define NGX_MODULE_SIGNATURE_0 ngx_value(NGX_PTR_SIZE) "," ngx_value(NGX_SIG_ATOMIC_T_SIZE) "," ngx_value(NGX_TIME_T_SIZE) ","
#define NGX_MODULE_SIGNATURE_1 "1"
#define NGX_MODULE_SIGNATURE_2 "0"
#define NGX_MODULE_SIGNATURE_4 "0"
#define NGX_MODULE_SIGNATURE_5 "0"
#define NGX_MODULE_SIGNATURE_6 "0"
#define NGX_MODULE_SIGNATURE_7 "0"
#define NGX_MODULE_SIGNATURE_8 "1"
#define NGX_MODULE_SIGNATURE_9 "1"
#define OPpSLICEWARNING 0x04
#define _DARWIN_FEATURE_UNIX_CONFORMANCE 3
#define PCRE2_INFO_HASBACKSLASHC 23
#define _FSOBJ_ID_T 
#define NGX_MIN_POOL_SIZE ngx_align((sizeof(ngx_pool_t) + 2 * sizeof(ngx_pool_large_t)), NGX_POOL_ALIGNMENT)
#define PAGE_MAX_MASK (PAGE_MAX_SIZE-1)
#define PROT_WRITE 0x02
#define I32_MAX INT32_MAX
#define THREAD_EXTENDED_POLICY 1
#define PERL_ARGS_ASSERT_MAGIC_NEXTPACK assert(sv); assert(mg); assert(key)
#define AvREAL_off(av) (SvFLAGS(av) &= ~SVpav_REAL)
#define savepvn(a,b) Perl_savepvn(aTHX_ a,b)
#define savepvs(str) Perl_savepvn(aTHX_ STR_WITH_LEN(str))
#define ZAPHOD32_STATIC_INLINE PERL_STATIC_INLINE
#define _CC_BINDIGIT 23
#define PL_restartjmpenv (vTHX->Irestartjmpenv)
#define ngx_directio_on_n "fcntl(F_NOCACHE, 1)"
#define PERL_SIGNALS_UNSAFE_FLAG 0x0001
#define PERL_MALLOC_WRAP 
#define SvRV(sv) ((sv)->sv_u.svu_rv)
#define SvRX(sv) (Perl_get_re_arg(aTHX_ sv))
#define TIOCMSET _IOW('t', 109, int)
#define NGX_HTTP_UPSTREAM_IGN_SET_COOKIE 0x00000020
#define timercmp(tvp,uvp,cmp) (((tvp)->tv_sec == (uvp)->tv_sec) ? ((tvp)->tv_usec cmp (uvp)->tv_usec) : ((tvp)->tv_sec cmp (uvp)->tv_sec))
#define TRAP_TRACE 2
#define GvSVn(gv) (*(GvGP(gv)->gp_sv ? &(GvGP(gv)->gp_sv) : &(GvGP(gv_SVadd(gv))->gp_sv)))
#define ngx_udp_recv ngx_io.udp_recv
#define SV_SIGINFO SA_SIGINFO
#define __FLT32_MANT_DIG__ 24
#define nginx_version 1021005
#define RLIMIT_NPROC 7
#define grok_oct(s,lp,fp,rp) (*(fp) |= PERL_SCAN_DISALLOW_PREFIX, grok_bin_oct_hex(s, lp, fp, rp, 3, _CC_OCTDIGIT, '\0'))
#define SIOCGIFKPI _IOWR('i', 135, struct ifreq)
#define cop_hints_exists_pvn(cop,keypv,keylen,hash,flags) cophh_exists_pvn(CopHINTHASH_get(cop), keypv, keylen, hash, flags)
#define cop_hints_exists_pvs(cop,key,flags) cophh_exists_pvs(CopHINTHASH_get(cop), key, flags)
#define NOTE_RENAME 0x00000020
#define KEV_DL_LINK_ADDRESS_CHANGED 16
#define CvHSCXT(sv) *(assert_(CvISXSUB((CV*)(sv))) &(((XPVCV*)MUTABLE_PTR(SvANY(sv)))->xcv_padlist_u.xcv_hscxt))
#define __SIG_ATOMIC_MAX__ 0x7fffffff
#define QUAD_IS_LONG_LONG 3
#define VM_PAGE_INFO_BASIC 1
#define SvTEMP_off(sv) (SvFLAGS(sv) &= ~SVs_TEMP)
#define PERL_ARGS_ASSERT_DESPATCH_SIGNALS 
#define HAS_LOG2 
#define PCRE2_ERROR_NOSUBSTRING (-49)
#define GETPWNAM_R_HAS_BUFFER 
#define NGX_DEBUG_POINTS_STOP 1
#define _INTMAX_T 
#define newXS(a,b,c) Perl_newXS(aTHX_ a,b,c)
#define GETPWNAM_R_HAS_PTR 
#define CPU_SUBTYPE_POWERPC_ALL ((cpu_subtype_t) 0)
#define MNT_JOURNALED 0x00800000
#define PL_clocktick (vTHX->Iclocktick)
#define VM_MEMORY_WEBASSEMBLY VM_MEMORY_JAVASCRIPT_CORE
#define PCRE2_ERROR_BADREPESCAPE (-57)
#define U8TO64_LE(ptr) (_shifted_octet(U64,(ptr),0, 0)| _shifted_octet(U64,(ptr),1, 8)| _shifted_octet(U64,(ptr),2,16)| _shifted_octet(U64,(ptr),3,24)| _shifted_octet(U64,(ptr),4,32)| _shifted_octet(U64,(ptr),5,40)| _shifted_octet(U64,(ptr),6,48)| _shifted_octet(U64,(ptr),7,56))
#define PERL_ARGS_ASSERT_GV_FETCHMETH_PV_AUTOLOAD assert(name)
#define PL_sys_intern (vTHX->Isys_intern)
#define EFAULT 14
#define UND_SERVER_NULL ((UNDServerRef) 0)
#define __SRD 0x0004
#define IPPORT_RESERVED __DARWIN_IPPORT_RESERVED
#define MEMORY_OBJECT_DATA_SYNC 0x10
#define __SRW 0x0010
#define MACH_MSG_SIZE_RELIABLE ((mach_msg_size_t) 256 * 1024)
#define NOTE_PDATAMASK 0x000fffff
#define sv_does(a,b) Perl_sv_does(aTHX_ a,b)
#define isBLANK_LC_utf8(p,e) isBLANK_LC_utf8_safe(p, e)
#define PERL_ARGS_ASSERT_PERLIO_GET_CNT 
#define HAS_FSYNC 
#define I_STDINT 
#define _LC_LAST 7
#define ngx_de_link_info(name,dir) lstat((const char *) name, &(dir)->info)
#define CvUNIQUE(cv) (CvFLAGS(cv) & CVf_UNIQUE)
#define EXC_CORPSE_VARIANT_BIT 0x100
#define PTRV UV
#define __IOS_UNAVAILABLE 
#define PERL_ARGS_ASSERT_PERL_CLONE assert(proto_perl)
#define AI_ALL 0x00000100
#define SvCOMPILED_on(sv) 
#define KEV_DL_DELMULTI 8
#define PERL_ARGS_ASSERT_HV_RITER_SET assert(hv)
#define AvFILLp(av) ((XPVAV*) SvANY(av))->xav_fill
#define PERL_ALLOC_CHECK(p) NOOP
#define PERL_ARGS_ASSERT_INIT_TM assert(ptm)
#define _CS_POSIX_V6_ILP32_OFF32_LDFLAGS 3
#define P_SUGID 0x00000100
#define debop(a) Perl_debop(aTHX_ a)
#define SvPV_nolen(sv) (SvPOK_nog(sv) ? SvPVX(sv) : sv_2pv_flags(sv, 0, SV_GMAGIC))
#define case_251_SBOX32(hash,state,key) 
#define VQ_LOWDISK 0x0004
#define PROCESSOR_SET_BASIC_INFO_COUNT ((mach_msg_type_number_t) (sizeof(processor_set_basic_info_data_t)/sizeof(natural_t)))
#define NL_TEXTMAX 2048
#define ELOOP 62
#define MACH_RCV_TRAILER_TYPE(x) (((x) & 0xf) << 28)
#define VQ_SERVEREVENT 0x0800
#define PL_firstgv (vTHX->Ifirstgv)
#define mini_mktime Perl_mini_mktime
#define REENTRANT_PROTO_I_ISD 33
#define MgSV(mg) (((int)((mg)->mg_len) == HEf_SVKEY) ? MUTABLE_SV((mg)->mg_ptr) : NULL)
#define RXf_WHITE (1U<<(RXf_BASE_SHIFT+16))
#define isASCII_LC_uvchr(c) isASCII_LC(c)
#define IPV6CTL_DAD_COUNT 16
#define ngx_abort abort
#define __FLT128_HAS_DENORM__ 1
#define NATIVE_BYTE_IS_INVARIANT(c) UVCHR_IS_INVARIANT(c)
#define NL_MSGMAX 32767
#define F_SETFD 2
#define is_MULTI_CHAR_FOLD_utf8_safe(s,e) ( ((e)-(s) > 5) ? ( ( ( ((const U8*)s)[0] & 0xDF ) == 'A' ) ? ( ( ( 0xCA == ((const U8*)s)[1] ) && ( 0xBE == ((const U8*)s)[2] ) ) ? 3 : 0 ) : ( ( ((const U8*)s)[0] & 0xDF ) == 'F' ) ? is_MULTI_CHAR_FOLD_utf8_safe_part0_(s,e) : is_MULTI_CHAR_FOLD_utf8_safe_part1_(s,e) ): ((e)-(s) > 4) ? ( ( ( ((const U8*)s)[0] & 0xDF ) == 'A' ) ? ( ( ( 0xCA == ((const U8*)s)[1] ) && ( 0xBE == ((const U8*)s)[2] ) ) ? 3 : 0 ) : ( ( ((const U8*)s)[0] & 0xDF ) == 'F' ) ? ( ( ( ((const U8*)s)[1] & 0xDF ) == 'F' ) ? ( ( ( ( ((const U8*)s)[2] & 0xDF ) == 'I' ) || ( ( ((const U8*)s)[2] & 0xDF ) == 'L' ) ) ? 3 : 2 ) : ( ( ( ((const U8*)s)[1] & 0xDF ) == 'I' ) || ( ( ((const U8*)s)[1] & 0xDF ) == 'L' ) ) ? 2 : 0 ) : ( ( ((const U8*)s)[0] & 0xDF ) == 'H' ) ? ( ( ( 0xCC == ((const U8*)s)[1] ) && ( 0xB1 == ((const U8*)s)[2] ) ) ? 3 : 0 ) : ( ( ((const U8*)s)[0] & 0xDF ) == 'I' ) ? ( ( ( 0xCC == ((const U8*)s)[1] ) && ( 0x87 == ((const U8*)s)[2] ) ) ? 3 : 0 ) : ( ( ((const U8*)s)[0] & 0xDF ) == 'J' ) ? ( ( ( 0xCC == ((const U8*)s)[1] ) && ( 0x8C == ((const U8*)s)[2] ) ) ? 3 : 0 ) : ( ( ((const U8*)s)[0] & 0xDF ) == 'S' ) ? ( ( inRANGE_helper_(U8, ((const U8*)s)[1], 'S', 'T') || inRANGE_helper_(U8, ((const U8*)s)[1], 's', 't') ) ? 2 : ( ( 0xC5 == ((const U8*)s)[1] ) && ( 0xBF == ((const U8*)s)[2] ) ) ? 3 : 0 ) : ( ( ((const U8*)s)[0] & 0xDF ) == 'T' ) ? ( ( ( 0xCC == ((const U8*)s)[1] ) && ( 0x88 == ((const U8*)s)[2] ) ) ? 3 : 0 ) : ( ( ( ((const U8*)s)[0] & 0xDF ) == 'W' ) || ( ( ((const U8*)s)[0] & 0xDF ) == 'Y' ) ) ? ( ( ( 0xCC == ((const U8*)s)[1] ) && ( 0x8A == ((const U8*)s)[2] ) ) ? 3 : 0 ) : ( 0xC5 == ((const U8*)s)[0] ) ? ( ( 0xBF == ((const U8*)s)[1] ) ? ( ( inRANGE_helper_(U8, ((const U8*)s)[2], 'S', 'T') || inRANGE_helper_(U8, ((const U8*)s)[2], 's', 't') ) ? 3 : ( ( 0xC5 == ((const U8*)s)[2] ) && ( 0xBF == ((const U8*)s)[3] ) ) ? 4 : 0 ) : 0 ) : ( 0xCA == ((const U8*)s)[0] ) ? ( ( ( 0xBC == ((const U8*)s)[1] ) && ( ( ((const U8*)s)[2] & 0xDF ) == 'N' ) ) ? 3 : 0 ) : ( 0xCE == ((const U8*)s)[0] ) ? ( ( ( ((const U8*)s)[1] & 0xFD ) == 0xAC ) ? ( ( ( 0xCE == ((const U8*)s)[2] ) && ( 0xB9 == ((const U8*)s)[3] ) ) ? 4 : 0 ) : ( 0xB1 == ((const U8*)s)[1] || 0xB7 == ((const U8*)s)[1] ) ? ( ( 0xCD == ((const U8*)s)[2] ) ? ( ( 0x82 == ((const U8*)s)[3] ) ? 4 : 0 ) : ( ( 0xCE == ((const U8*)s)[2] ) && ( 0xB9 == ((const U8*)s)[3] ) ) ? 4 : 0 ) : ( ( ( 0xB9 == ((const U8*)s)[1] ) && ( 0xCD == ((const U8*)s)[2] ) ) && ( 0x82 == ((const U8*)s)[3] ) ) ? 4 : 0 ) : ( 0xCF == ((const U8*)s)[0] ) ? ( ( 0x81 == ((const U8*)s)[1] ) ? ( ( ( 0xCC == ((const U8*)s)[2] ) && ( 0x93 == ((const U8*)s)[3] ) ) ? 4 : 0 ) : ( 0x85 == ((const U8*)s)[1] ) ? ( ( 0xCC == ((const U8*)s)[2] ) ? ( ( 0x93 == ((const U8*)s)[3] ) ? 4 : 0 ) : ( ( 0xCD == ((const U8*)s)[2] ) && ( 0x82 == ((const U8*)s)[3] ) ) ? 4 : 0 ) : ( 0x89 == ((const U8*)s)[1] ) ? ( ( 0xCD == ((const U8*)s)[2] ) ? ( ( 0x82 == ((const U8*)s)[3] ) ? 4 : 0 ) : ( ( 0xCE == ((const U8*)s)[2] ) && ( 0xB9 == ((const U8*)s)[3] ) ) ? 4 : 0 ) : ( ( ( 0x8E == ((const U8*)s)[1] ) && ( 0xCE == ((const U8*)s)[2] ) ) && ( 0xB9 == ((const U8*)s)[3] ) ) ? 4 : 0 ) : ( 0xD5 == ((const U8*)s)[0] ) ? ( ( 0xA5 == ((const U8*)s)[1] ) ? ( ( ( 0xD6 == ((const U8*)s)[2] ) && ( 0x82 == ((const U8*)s)[3] ) ) ? 4 : 0 ) : ( 0xB4 == ((const U8*)s)[1] ) ? ( ( ( 0xD5 == ((const U8*)s)[2] ) && ( ( ( ((const U8*)s)[3] & 0xF7 ) == 0xA5 ) || ((const U8*)s)[3] == 0xAB || ((const U8*)s)[3] == 0xB6 ) ) ? 4 : 0 ) : ( ( ( 0xBE == ((const U8*)s)[1] ) && ( 0xD5 == ((const U8*)s)[2] ) ) && ( 0xB6 == ((const U8*)s)[3] ) ) ? 4 : 0 ) : ( 0xE1 == ((const U8*)s)[0] ) ? ( ( 0xBC == ((const U8*)s)[1] ) ? ( ( ( ( ( ((const U8*)s)[2] & 0xD8 ) == 0x80 ) && ( 0xCE == ((const U8*)s)[3] ) ) && ( 0xB9 == ((const U8*)s)[4] ) ) ? 5 : 0 ) : ( ( ( ( 0xBD == ((const U8*)s)[1] ) && ( ( ( ((const U8*)s)[2] & 0xF8 ) == 0xA0 ) || ( ( ((const U8*)s)[2] & 0xFB ) == 0xB0 ) || ((const U8*)s)[2] == 0xBC ) ) && ( 0xCE == ((const U8*)s)[3] ) ) && ( 0xB9 == ((const U8*)s)[4] ) ) ? 5 : 0 ) : 0 ) : ((e)-(s) > 3) ? is_MULTI_CHAR_FOLD_utf8_safe_part2_(s,e) : is_MULTI_CHAR_FOLD_utf8_safe_part3_(s,e) )
#define F_SETFL 4
#define UTF8_ALLOW_ANY ( UTF8_ALLOW_CONTINUATION |UTF8_ALLOW_NON_CONTINUATION |UTF8_ALLOW_SHORT |UTF8_ALLOW_LONG |UTF8_ALLOW_OVERFLOW)
#define PL_pidstatus (vTHX->Ipidstatus)
#define VM_FLAGS_USER_MAP (VM_FLAGS_USER_ALLOCATE | VM_FLAGS_RETURN_4K_DATA_ADDR | VM_FLAGS_RETURN_DATA_ADDR)
#define RXp_NPARENS(prog) (prog->nparens)
#define _POSIX_RTSIG_MAX 8
#define NGX_MODULE_SIGNATURE_11 "0"
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_1(x) x
#define x86_THREAD_STATE_COUNT ((mach_msg_type_number_t) ( sizeof (x86_thread_state_t) / sizeof (int) ))
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_5(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_6(x) x
#define Strerror(e) strerror(e)
#define PERL_ARGS_ASSERT_SV_2PVUTF8_FLAGS assert(sv)
#define I32_MIN INT32_MIN
#define SVphv_LAZYDEL 0x40000000
#define VM_LEDGER_TAG_GRAPHICS 0x00000004
#define STD_PMMOD_FLAGS_CLEAR(pmfl) *(pmfl) &= ~(RXf_PMf_FOLD|RXf_PMf_MULTILINE|RXf_PMf_SINGLELINE|RXf_PMf_EXTENDED|RXf_PMf_EXTENDED_MORE|RXf_PMf_CHARSET|RXf_PMf_NOCAPTURE)
#define SM_COW 1
#define isWARN_on(c,x) (PerlWarnIsSet_((U8 *)(c + 1), 2*(x)))
#define NV_NAN_QS_BIT_SHIFT ((NV_NAN_BITS) % 8)
#define XOPd_xop_class OA_BASEOP
#define LOAD_SCALE 1000
#define __INT32_C(c) c
#define TAILQ_FIRST(head) ((head)->tqh_first)
#define SvPVX_const(sv) ((const char*)(0 + (sv)->sv_u.svu_pv))
#define __ORDER_PDP_ENDIAN__ 3412
#define NGX_HTTP_MKCOL 0x00000040
#define _generic_invlist_utf8_safe(classnum,p,e) _generic_utf8_safe(classnum, p, e, _is_utf8_FOO(classnum, p, e))
#define NGX_CONF_UNSET -1
#define _STRUCT_LAST_BRANCH_STATE struct __last_branch_state
#define PERL_ARGS_ASSERT_CNTRL_TO_MNEMONIC 
#define PCRE2_NO_AUTO_CAPTURE 0x00002000u
#define PERL_ARGS_ASSERT_DO_EXEC3 assert(incmd)
#define PAD_COMPNAME_OURSTASH(po) (SvOURSTASH(PAD_COMPNAME_SV(po)))
#define PERL_ARGS_ASSERT_DELIMCPY_NO_ESCAPE assert(to); assert(to_end); assert(from); assert(from_end); assert(retlen)
#define ASCII_MORE_RESTRICT_PAT_MODS "aa"
#define save_long(a) Perl_save_long(aTHX_ a)
#define _RXf_PMf_SHIFT_NEXT (RXf_PMf_STD_PMMOD_SHIFT+12)
#define PCRE2_CALLOUT_BACKTRACK 0x00000002u
#define USE_GRENT_BUFFER 
#define LDBL_MIN_10_EXP __LDBL_MIN_10_EXP__
#define TIOCM_CAR 0100
#define CTLTYPE_STRING 3
#define __DARWIN_UNIX03 1
#define PERL_ARGS_ASSERT_GET_VTBL 
#define PF_ROUTE AF_ROUTE
#define __MAC_11_0 110000
#define __MAC_11_1 110100
#define __MAC_11_3 110300
#define PCRE2_MINOR 40
#define PL_globalstash (vTHX->Iglobalstash)
#define host_get_host_priv_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_PRIV_PORT, (port)))
#define AUDIT_TRIGGER_FILE ("/dev/" AUDITDEV_FILENAME)
#define _CC_CASED 9
#define LONGDBLMANTBITS 64
#define PERL_BITFIELD8 U8
#define NGX_INT32_LEN (sizeof("-2147483648") - 1)
#define UINT64_MAX 18446744073709551615ULL
#define ftell ftello
#define cBINOPo cBINOPx(o)
#define KEV_INET_PORTINUSE 8
#define __PTHREAD_RWLOCKATTR_SIZE__ 16
#define GLOB_ALTDIRFUNC 0x0040
#define kSVOP_sv cSVOPx_sv(kid)
#define cBINOPx(o) ((BINOP*)(o))
#define _SYS_UN_H_ 
#define CVf_ANON 0x0080
#define ACCESSX_MAX_TABLESIZE (16 * 1024)
#define REENTRANT_PROTO_I_ICSD 29
#define _ANSI_STDARG_H_ 
#define _WSTATUS(x) (_W_INT(x) & 0177)
#define PL_lc_numeric_mutex_depth (vTHX->Ilc_numeric_mutex_depth)
#define newANONLIST(a) Perl_newANONLIST(aTHX_ a)
#define PCRE2_ERROR_INVALID_OCTAL 164
#define SvOOK_off(sv) ((void)(SvOOK(sv) && (sv_backoff(sv),0)))
#define __FLT64X_HAS_DENORM__ 1
#define PCRE2_ERROR_SUBPATTERN_NAMES_MISMATCH 165
#define is_c9strict_utf8_string(s,len) is_c9strict_utf8_string_loclen(s, len, NULL, 0)
#define __MAC_10_15_4 101504
#define op_convert_list(a,b,c) Perl_op_convert_list(aTHX_ a,b,c)
#define USER_POSIX2_C_DEV 12
#define IPV6_FW_ADD 30
#define PERL_ARGS_ASSERT_SV_CATPVF_MG assert(sv); assert(pat)
#define __DTF_ATEND 0x0020
#define PERL_ARGS_ASSERT_SV_UTF8_DOWNGRADE_FLAGS assert(sv)
#define PERL_ARGS_ASSERT_GP_REF 
#define cophh_store_pv(cophh,key,hash,value,flags) Perl_refcounted_he_new_pv(aTHX_ cophh, key, hash, value, flags)
#define CPU_SUBTYPE_X86_ALL ((cpu_subtype_t)3)
#define cx_dump(a) Perl_cx_dump(aTHX_ a)
#define cophh_store_sv(cophh,key,hash,value,flags) Perl_refcounted_he_new_sv(aTHX_ cophh, key, hash, value, flags)
#define PROCESSOR_CPU_LOAD_INFO 2
#define case_234_SBOX32(hash,state,key) 
#define case_14_SBOX32(hash,state,key) _SBOX32_CASE(14,hash,state,key)
#define Siglongjmp(buf,retval) siglongjmp((buf),(retval))
#define VM_PURGABLE_BEHAVIOR_LIFO (1 << VM_PURGABLE_BEHAVIOR_SHIFT)
#define Null(type) ((type)NULL)
#define HAS_TELLDIR 
#define TCP_FASTOPEN 0x105
#define SvPADSTALE(sv) (SvFLAGS(sv) & (SVs_PADSTALE))
#define REENTRANT_PROTO_I_ISBWR 32
#define MRO_GET_PRIVATE_DATA(smeta,which) (((smeta)->mro_which && (which) == (smeta)->mro_which) ? (smeta)->mro_linear_current : Perl_mro_get_private_data(aTHX_ (smeta), (which)))
#define PERL_ARGS_ASSERT_CK_EXISTS assert(o)
#define SSize_t_MAX (SSize_t)(~(Size_t)0 >> 1)
#define DEBUG_J_TEST_ UNLIKELY(PL_debug & DEBUG_J_FLAG)
#define F_SETLK 8
#define _SC_2_FORT_RUN 22
#define IN6ADDR_LINKLOCAL_ALLROUTERS_INIT {{{ 0xff, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02 }}}
#define MACH_PORT_RIGHT_PORT_SET ((mach_port_right_t) 3)
#define utf8n_to_uvchr_msgs Perl_utf8n_to_uvchr_msgs
#define _PASSWORD_WARNDAYS 14
#define M_2_SQRTPI 1.12837916709551257389615890312154517
#define task_get_debug_control_port(task,port) (task_get_special_port((task), TASK_DEBUG_CONTROL_PORT, (port)))
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_1(x) 
#define CVf_BUILTIN_ATTRS (CVf_METHOD|CVf_LVALUE|CVf_ANONCONST)
#define PERL_ARGS_ASSERT_SAVE_ARY assert(gv)
#define NV_NAN_PAYLOAD_PERM_IEEE_754_64_LE 0x0, 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0xFF
#define PERLSI_SORT 3
#define PCRE2_ERROR_DFA_UINVALID_UTF (-66)
#define __FLT_IS_IEC_60559__ 2
#define re_compile(a,b) Perl_re_compile(aTHX_ a,b)
#define PCRE2_ERROR_OCTAL_BYTE_TOO_BIG 151
#define KERN_LOCK_UNSTABLE 39
#define PERL_ARGS_ASSERT_MAGIC_CLEARISA assert(mg)
#define PL_comppad_name (vTHX->Icomppad_name)
#define IPPROTO_LEAF2 26
#define hv_fetchs(hv,key,lval) hv_fetch((hv), ("" key ""), (sizeof(key)-1), (lval))
#define MAX_RECURSE_EVAL_NOCHANGE_DEPTH 10
#define IN_CLASSB(i) (((u_int32_t)(i) & 0xc0000000) == 0x80000000)
#define IN_CLASSC(i) (((u_int32_t)(i) & 0xe0000000) == 0xc0000000)
#define IN_CLASSD(i) (((u_int32_t)(i) & 0xf0000000) == 0xe0000000)
#define MATTR_VAL_ICACHE_FLUSH 8
#define CALLREG_NUMBUF_FETCH(rx,paren,usesv) RX_ENGINE(rx)->numbered_buff_FETCH(aTHX_ (rx),(paren),(usesv))
#define FPS_TOS_SHIFT 11
#define hv_deletes(hv,key,flags) hv_delete((hv), ("" key ""), (sizeof(key)-1), (flags))
#define HS_XSVERLEN_MAX 0xFF
#define MACH_PORT_RIGHT_LABELH ((mach_port_right_t) 5)
#define PERL_MAGIC_uvar 'U'
#define LEDGER_LIMIT_INFINITY ((ledger_amount_t)((1ULL << 63) - 1))
#define HvLAZYDEL(hv) (SvFLAGS(hv) & SVphv_LAZYDEL)
#define AF_INET 2
#define PTHREAD_PRIO_PROTECT 2
#define CLEAR_ERRSV() STMT_START { SV ** const svp = &GvSV(PL_errgv); if (!*svp) { *svp = newSVpvs(""); } else if (SvREADONLY(*svp)) { SvREFCNT_dec_NN(*svp); *svp = newSVpvs(""); } else { SV *const errsv = *svp; SvPVCLEAR(errsv); SvPOK_only(errsv); if (SvMAGICAL(errsv)) { mg_free(errsv); } } } STMT_END
#define RX_ISTAINTED(rx_sv) (RX_EXTFLAGS(rx_sv) & RXf_TAINTED)
#define FWRITE 0x00000002
#define IP_DONTFRAG 28
#define GUARD_TYPE_MACH_PORT 0x1
#define SS_IVCHAN 0
#define O_SYNC 0x0080
#define VM_VOLATILE_GROUP_3 (3 << VM_VOLATILE_GROUP_SHIFT)
#define IP_PORTRANGE_HIGH 1
#define gv_fetchpvn_flags(a,b,c,d) Perl_gv_fetchpvn_flags(aTHX_ a,b,c,d)
#define task_get_host_port(task,port) (task_get_special_port((task), TASK_HOST_PORT, (port)))
#define ngx_event_ident(p) ((ngx_connection_t *) (p))->fd
#define VM_MEMORY_ROSETTA_ARENA 236
#define DIRNAMLEN 
#define JOIN(t,avp) STMT_START { int _eC_; if ((_eC_ = pthread_join((t)->self, (void**)(avp)))) Perl_croak_nocontext("panic: pthread_join (%d) [%s:%d]", _eC_, __FILE__, __LINE__); } STMT_END
#define MPG_FLAGS_STRICT_REPLY_NO_BANK_ATTR (0x08ull << 56)
#define HAS_TOWUPPER 
#define NGX_CMD_REOPEN 5
#define IPV6_PKTINFO IPV6_3542PKTINFO
#define TCPOLEN_TSTAMP_APPA (TCPOLEN_TIMESTAMP+2)
#define _SC_V6_ILP32_OFFBIG 104
#define gv_fullname4(a,b,c,d) Perl_gv_fullname4(aTHX_ a,b,c,d)
#define UVof "lo"
#define PERL_ARGS_ASSERT_GV_FETCHFILE assert(name)
#define PERL_ARGS_ASSERT_CX_PUSHTRY assert(cx)
#define ATTR_FORK_ALLOCSIZE 0x00000002
#define VM_MEMORY_OS_ALLOC_ONCE 73
#define _SYS_SOCKET_H_ 
#define PERL_ARGS_ASSERT_SV_2BOOL assert(sv)
#define _toupper(c) __toupper(c)
#define isUPPER_uvchr(c) _generic_invlist_uvchr(_CC_UPPER, c)
#define PERL_ARGS_ASSERT_MAGIC_SETNONELEM assert(sv); assert(mg)
#define CPUSUBFAMILY_ARM_M 3
#define TIOCSIG _IO('t', 95)
#define REENTRANT_PROTO_I_CWISBWRE 21
#define KIPC_NMBCLUSTERS 9
#define PERL_ARGS_ASSERT_MY_PCLOSE 
#define __API_AVAILABLE_BEGIN_GET_MACRO(...) 
#define NGX_HAVE_INET6 1
#define PROCESSOR_SET_INFO_MAX (1024)
#define DOUBLE_HAS_INF 
#define _FILESEC_REMOVE_ACL ((void *)1)
#define HINT_EXPLICIT_STRICT_VARS 0x00000080
#define SvPADSTALE_on(sv) Perl_SvPADSTALE_on(MUTABLE_SV(sv))
#define NGX_FILE_OWNER_ACCESS 0600
#define PERL_ARGS_ASSERT_ISC9_STRICT_UTF8_CHAR assert(s0); assert(e)
#define _RUNE_T 
#define MPO_DENAP_RECEIVER 0x40
#define PERL_ARGS_ASSERT_FIND_SCRIPT assert(scriptname)
#define save_set_svflags(a,b,c) Perl_save_set_svflags(aTHX_ a,b,c)
#define PL_replgv (vTHX->Ireplgv)
#define safecalloc safesyscalloc
#define __MAC_10_11_4 101104
#define IOV_MAX 1024
#define AI_V4MAPPED 0x00000800
#define PERL_ARGS_ASSERT_SV_DESTROYABLE 
#define FSOPT_NOFOLLOW 0x00000001
#define ENTER_with_name(name) ENTER
#define ngx_tcp_nopush_n "setsockopt(TCP_NOPUSH)"
#define PRIdLEAST8 PRId8
#define SIG_HOLD (void (*)(int))5
#define pcre2_get_match_data_size PCRE2_SUFFIX(pcre2_get_match_data_size_)
#define KERN_DATA_SELECTOR 0x0010
#define PERL_ARGS_ASSERT_NEWWHENOP assert(block)
#define TIOCPKT_IOCTL 0x40
#define INTPTR_MAX 9223372036854775807L
#define __UINTMAX_C(c) c ## UL
#define RXp_MATCH_COPY_FREE(prog) STMT_START {if (RXp_SAVED_COPY(prog)) { SV_CHECK_THINKFIRST_COW_DROP(RXp_SAVED_COPY(prog)); } if (RXp_MATCH_COPIED(prog)) { Safefree(RXp_SUBBEG(prog)); RXp_MATCH_COPIED_off(prog); }} STMT_END
#define safesyscalloc Perl_safesyscalloc
#define _NGX_RESOLVER_H_INCLUDED_ 
#define NFSV4_MAX_FH_SIZE 128
#define OPpENTERSUB_NOPAREN 0x80
#define PL_debug (vTHX->Idebug)
#define XPUSHi(i) STMT_START { TARGi(i,1); XPUSHs(TARG); } STMT_END
#define IP_MULTICAST_IF 9
#define XPUSHn(n) STMT_START { TARGn(n,1); XPUSHs(TARG); } STMT_END
#define XPUSHp(p,l) STMT_START { sv_setpvn(TARG, (p), (l)); XPUSHTARG; } STMT_END
#define IP_DROP_MEMBERSHIP 13
#define XPUSHu(u) STMT_START { TARGu(u,1); XPUSHs(TARG); } STMT_END
#define G_UNDEF_FILL 0x200
#define newNULLLIST() Perl_newNULLLIST(aTHX)
#define PERL_ARGS_ASSERT_SV_VCATPVF assert(sv); assert(pat)
#define DEBUG_P_TEST (0)
#define U32_ALIGNMENT_REQUIRED 
#define PERL_ARGS_ASSERT_SV_2BOOL_FLAGS assert(sv)
#define FPE_FLTSUB 6
#define PTHREAD_STACK_MIN 8192
#define VFS_CTL_NSTATUS 0x0001000A
#define IN6_IS_ADDR_V4MAPPED(a) ((*(const __uint32_t *)(const void *)(&(a)->s6_addr[0]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[4]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[8]) == ntohl(0x0000ffff)))
#define SvMAGIC(sv) ((XPVMG*) SvANY(sv))->xmg_u.xmg_magic
#define SvTRUE_NN(a) Perl_SvTRUE_NN(aTHX_ a)
#define UNI_DISPLAY_ISPRINT 0x0001
#define HAS_SKIP_LOCALE_INIT 
#define DB_VERSION_PATCH_CFG 40
#define case_199_SBOX32(hash,state,key) 
#define set_context Perl_set_context
#define IPC_SPACE_INSPECT_NULL ((ipc_space_inspect_t) 0)
#define SVprv_WEAKREF 0x80000000
#define isWORDCHAR_A(c) _generic_isCC_A(c, _CC_WORDCHAR)
#define CLOCK_MONOTONIC_RAW_APPROX _CLOCK_MONOTONIC_RAW_APPROX
#define PCRE2_MAJOR 10
#define VM_MEMORY_DYLIB 33
#define PERL_ARGS_ASSERT_GV_DUMP 
#define HINT_RE_FLAGS 0x02000000
#define EXCEPTION_DEFAULT 1
#define NOTE_FFNOP 0x00000000
#define case_139_SBOX32(hash,state,key) 
#define HAS_SOCKATMARK 
#define _SC_PRIORITY_SCHEDULING 35
#define __API_TO_BE_DEPRECATED 100000
#define PL_stashpadix (vTHX->Istashpadix)
#define DEBUG_L_TEST_ UNLIKELY(PL_debug & DEBUG_L_FLAG)
#define DEBUG_l_FLAG 0x00000004
#define HAS_ILOGBL 
#define ATTR_CMN_PARENTID 0x04000000
#define WARN_PORTABLE 17
#define ngx_log_error(level,log,...) if ((log)->log_level >= level) ngx_log_error_core(level, log, __VA_ARGS__)
#define O_CLOEXEC 0x01000000
#define HAS_PTHREAD_ATTR_SETSCOPE 
#define NGX_CONF_UNSET_SIZE (size_t) -1
#define _SC_2_CHAR_TERM 20
#define PRIu16 "hu"
#define OPpENTERSUB_LVAL_MASK (OPpLVAL_INTRO|OPpENTERSUB_INARGS)
#define isLOWER_LC_uvchr(c) _generic_LC_invlist_uvchr(isLOWER_LC, _CC_LOWER, c)
#define PERL_ARGS_ASSERT_CROAK_XS_USAGE assert(cv); assert(params)
#define UVuf "lu"
#define MATTR_VAL_ON 1
#define RXf_INTUIT_TAIL (1U<<(RXf_BASE_SHIFT+9))
#define MACH_VOUCHER_ATTR_KEY_TEST ((mach_voucher_attr_key_t)8)
#define OA_SCALARREF 7
#define cxstack_ix (PL_curstackinfo->si_cxix)
#define GREEK_SMALL_LETTER_MU 0x03BC
#define DEBUG_m_TEST (0)
#define SRCHFS_VALIDOPTIONSMASK 0x800000FF
#define IOC_OUT (__uint32_t)0x40000000
#define PERL_ARGS_ASSERT_MAGIC_WIPEPACK assert(sv); assert(mg)
#define ARGTARG PL_op->op_targ
#define pcre2_set_bsr PCRE2_SUFFIX(pcre2_set_bsr_)
#define HAS_TIMES 
#define pmop_dump(a) Perl_pmop_dump(aTHX_ a)
#define NGX_HTTP_CONNECTION_CLOSE 1
#define dPOPnv_nomg NV value = (sp--, SvNV_nomg(TOPp1s))
#define VM_REGION_TOP_INFO 12
#define CPU_SUBTYPE_ARM_V7F ((cpu_subtype_t) 10)
#define isALNUM_lazy_if_safe(p,e,UTF) isWORDCHAR_lazy_if_safe(p, e, UTF)
#define sv_setpvf_mg Perl_sv_setpvf_mg_nocontext
#define IPC_PRIVATE ((key_t)0)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_0(x) x
#define PRIu32 "u"
#define ngx_http_upstream_rr_peers_unlock(peers) if (peers->shpool) { ngx_rwlock_unlock(&peers->rwlock); }
#define IP_OLD_FW_DEL 51
#define PERL_ARGS_ASSERT_SV_SETPV assert(sv)
#define VM_FLAGS_ALIAS_MASK 0xFF000000
#define PERL_ARGS_ASSERT_UNPACK_STR assert(pat); assert(patend); assert(s); assert(strend)
#define _ID_T 
#define SAVEt_MORTALIZESV 16
#define IPPORT_USERRESERVED 5000
#define SSNEWt(n,t) SSNEW((n)*sizeof(t))
#define VM_MEMORY_MALLOC_LARGE 3
#define __signed signed
#define HINT_NEW_STRING 0x00008000
#define PERL_ARGS_ASSERT_NEWSVSV_FLAGS 
#define WSTOPPED 0x00000008
#define GvEGV(gv) (GvGP(gv)->gp_egv)
#define PERL_ARGS_ASSERT_SV_COPYPV assert(dsv); assert(ssv)
#define HAS_LROUNDL 
#define PERL_ARGS_ASSERT_CROAK_POPSTACK 
#define pMY_CXT_ pMY_CXT,
#define SAE_CONNID_ALL ((sae_connid_t)(-1ULL))
#define IN_CLASSA_MAX 128
#define TCP_CONNECTION_INFO 0x106
#define ATTR_VOL_QUOTA_SIZE 0x10000000
#define sv_insert(bigstr,offset,len,little,littlelen) Perl_sv_insert_flags(aTHX_ (bigstr),(offset), (len), (little), (littlelen), SV_GMAGIC)
#define isPSXSPC_LC(c) isSPACE_LC(c)
#define PERL_ARGS_ASSERT_DOFILE assert(term)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_7(x) x
#define PL_signalhook (vTHX->Isignalhook)
#define Perl_tanh tanh
#define VOL_CAP_FMT_FAST_STATFS 0x00000400
#define sv_catpvs_nomg(sv,str) Perl_sv_catpvn_flags(aTHX_ sv, STR_WITH_LEN(str), 0)
#define IP_OLD_FW_FLUSH 52
#define sv_copypv_flags(a,b,c) Perl_sv_copypv_flags(aTHX_ a,b,c)
#define SCNoMAX __SCN_MAX_LENGTH_MODIFIER__ "o"
#define INTPTR_MIN (-INTPTR_MAX-1)
#define PIPE_OPEN_MODE PIPESOCK_MODE
#define HVhek_ENABLEHVKFLAGS (HVhek_MASK & ~(HVhek_UNSHARED))
#define PL_stashpadmax (vTHX->Istashpadmax)
#define GETENV_UNLOCK ENV_READ_UNLOCK
#define _WRITE_OK (1<<10)
#define KERN_OSVERSION 65
#define PERL_ARGS_ASSERT_CX_PUSHWHEN assert(cx)
#define PRIu64 __PRI_64_LENGTH_MODIFIER__ "u"
#define ngx_cpu_pause() __asm__ ("pause")
#define PERL_ARGS_ASSERT_SV_SETSV assert(dsv)
#define PL_errgv (vTHX->Ierrgv)
#define _IONBF 2
#define PERL_ARGS_ASSERT_SV_VCATPVFN assert(sv); assert(pat)
#define gv_stashpvn(a,b,c) Perl_gv_stashpvn(aTHX_ a,b,c)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_1(x) 
#define gv_stashpvs(str,create) Perl_gv_stashpvn(aTHX_ STR_WITH_LEN(str), create)
#define PVFS 20
#define SAE_CONNID_ANY 0
#define TRAP_BRKPT 1
#define IPV6CTL_MRTSTATS 7
#define NGX_REOPEN_SIGNAL USR1
#define OPpFT_STACKED 0x04
#define PERL_ARGS_ASSERT_SV_CATPVF assert(sv); assert(pat)
#define BASEPRI(x) (((x) & (255 << 8)) == 0)
#define TIOCSTI _IOW('t', 114, char)
#define PERL_ARGS_ASSERT_SV_FORCE_NORMAL assert(sv)
#define PerlLIO_umask(mode) umask((mode))
#define IN6_IS_ADDR_LOOPBACK(a) ((*(const __uint32_t *)(const void *)(&(a)->s6_addr[0]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[4]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[8]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[12]) == ntohl(1)))
#define __nullable 
#define _POSIX_ASYNCHRONOUS_IO (-1)
#define KERN_LOCK_OWNED 40
#define PERL_ARGS_ASSERT__IS_IN_LOCALE_CATEGORY 
#define PERL_ARGS_ASSERT_SETFD_INHEXEC 
#define PERLIO_DUP_CLONE 1
#define hv_store(hv,key,klen,val,hash) ((SV**) hv_common_key_len((hv), (key), (klen), (HV_FETCH_ISSTORE|HV_FETCH_JUST_SV), (val), (hash)))
#define UVCHR_IS_INVARIANT(cp) (OFFUNI_IS_INVARIANT(NATIVE_TO_UNI(cp)))
#define PERL_ARGS_ASSERT_MAGIC_DUMP 
#define _toFOLD_utf8_flags(p,e,s,l,f) _to_utf8_fold_flags (p,e,s,l,f)
#define SVs_PADMY 0
#define find_rundefsvoffset() Perl_find_rundefsvoffset(aTHX)
#define HAS_SIGINFO_SI_BAND 
#define _NGX_EVENT_TIMER_H_INCLUDED_ 
#define JE_OLD_STACK_HWM_save(je) NOOP
#define __attribute__noreturn__ __attribute__((noreturn))
#define PERL_ARGS_ASSERT_SV_SETUV assert(sv)
#define PRIxLEAST16 PRIx16
#define newSVpvs_flags(str,flags) Perl_newSVpvn_flags(aTHX_ STR_WITH_LEN(str), flags)
#define isCNTRL_utf8_safe(p,e) _generic_utf8_safe(_CC_CNTRL, p, e, 0)
#define PCRE2_ERROR_UNSUPPORTED_ESCAPE_SEQUENCE 137
#define __WCTYPE_H_ 
#define PCRE2_CONFIG_BSR 0
#define SAVEI32(i) save_I32((I32*)&(i))
#define _MACH_MESSAGE_H_ 
#define PerlMem_realloc(buf,size) realloc((buf), (size))
#define _aMY_CXT ,aMY_CXT
#define PERL_ARGS_ASSERT_PTR_TABLE_FETCH assert(tbl)
#define VM_SYNC_KILLPAGES ((vm_sync_t) 0x08)
#define THREAD_SCHED_FIFO_INFO 12
#define pthread_mutexattr_default NULL
#define isUPPER_uni(c) isUPPER_uvchr(c)
#define ngx_stderr STDERR_FILENO
#define CPU_STATE_USER 0
#define _CS_XBS5_ILP32_OFF32_LINTFLAGS 23
#define PERL_ARGS_ASSERT_OP_NULL assert(o)
#define sv_reset(a,b) Perl_sv_reset(aTHX_ a,b)
#define MDEREF_INDEX_padsv 0x20
#define ATTR_CMNEXT_EXT_FLAGS 0x00000200
#define PERL_GET_INTERP (PL_curinterp)
#define SRANDOM_R_PROTO 0
#define HAS_WCTOMB 
#define WARN_EXPERIMENTAL__VLB 72
#define F_SETNOSIGPIPE 73
#define PRIxLEAST32 PRIx32
#define PERL_HASH_STATE_BYTES _PERL_HASH_SEED_roundup(_PERL_HASH_STATE_BYTES)
#define _SOCKLEN_T 
#define O_NOFOLLOW_ANY 0x20000000
#define SIOCSPGRP _IOW('s', 8, int)
#define pv_pretty(a,b,c,d,e,f,g) Perl_pv_pretty(aTHX_ a,b,c,d,e,f,g)
#define HOST_GSSD_PORT (12 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define _POSIX2_LINE_MAX 2048
#define PERL_ARGS_ASSERT_ABORT_EXECUTION assert(msg); assert(name)
#define __SYS_APPLEAPIOPTS_H__ 
#define __AVAILABILITY_INTERNAL_REGULAR 
#define PERLDBf_SAVESRC 0x400
#define sv_eq(sv1,sv2) sv_eq_flags(sv1, sv2, SV_GMAGIC)
#define CxLABEL_len(c,len) (0 + CopLABEL_len((c)->blk_oldcop, len))
#define PerlSIO_printf fprintf
#define CLOFF CLOFSET
#define PCRE2_DUPNAMES 0x00000040u
#define IPV6_RTHDRDSTOPTS 57
#define PL_Sv (vTHX->ISv)
#define __IPV6_ADDR_SCOPE_NODELOCAL 0x01
#define INT32_C(v) (v)
#define X86_INSTRUCTION_STATE_COUNT x86_INSTRUCTION_STATE_COUNT
#define OA_FILEREF 6
#define NV_DIG DBL_DIG
#define KERN_INVALID_CAPABILITY 20
#define IPC_EVENTLINK_NULL ((ipc_eventlink_t) 0)
#define isXDIGIT_utf8_safe(p,e) _generic_utf8_safe_no_upper_latin1(_CC_XDIGIT, p, e, (UNLIKELY((e) - (p) < UTF8SKIP(p)) ? (_force_out_malformed_utf8_message( (U8 *) (p), (U8 *) (e), 0, 1), 0) : is_XDIGIT_high(p)))
#define MACH_PORT_GEN(name) (((name) & 0xff) << 24)
#define __SEOF 0x0020
#define pcre2_set_heap_limit PCRE2_SUFFIX(pcre2_set_heap_limit_)
#define PERL_ARGS_ASSERT_NOPERL_DIE assert(pat)
#define S_IXGRP 0000010
#define F_DUPFD_CLOEXEC 67
#define __LONG_MAX__ 0x7fffffffffffffffL
#define __IOS_EXTENSION_UNAVAILABLE(_msg) 
#define PERL_ARGS_ASSERT_REFCOUNTED_HE_INC 
#define IPPROTO_SWIPE 53
#define SETVAL 8
#define FILTER_ISREADER(idx) (PL_parser && PL_parser->rsfp_filters && idx >= AvFILLp(PL_parser->rsfp_filters))
#define KERN_COREFILE 50
#define PERL_ARGS_ASSERT_SV_REPORT_USED 
#define _CC_CHARNAME_CONT 17
#define VM_MEMORY_CM_READCACHE 95
#define GV_NOADD_NOINIT 0x20
#define PERL_HASH_RANDOMIZE_KEYS 1
#define OP_NAME(o) ((o)->op_type == OP_CUSTOM ? XopENTRYCUSTOM(o, xop_name) : PL_op_name[(o)->op_type])
#define PRIxLEAST64 PRIx64
#define time_value_add(result,addend) { (result)->microseconds += (addend)->microseconds; (result)->seconds += (addend)->seconds; if ((result)->microseconds >= TIME_MICROS_MAX) { (result)->microseconds -= TIME_MICROS_MAX; (result)->seconds++; } }
#define KERN_PROC_RUID 6
#define PAD_SET_CUR(padlist,nth) SAVECOMPPAD(); PAD_SET_CUR_NOSAVE(padlist,nth);
#define pcre2_pattern_convert PCRE2_SUFFIX(pcre2_pattern_convert_)
#define Fpos_t fpos_t
#define debstack() Perl_debstack(aTHX)
#define task_set_task_debug_control_port(task,port) (task_set_special_port((task), TASK_DEBUG_CONTROL_PORT, (port)))
#define MCAST_UNBLOCK_SOURCE 85
#define sv_catsv_nomg(dsv,ssv) sv_catsv_flags(dsv, ssv, 0)
#define Perl_isfinite(x) isfinite(x)
#define PERL_ARGS_ASSERT_GV_NAME_SET assert(gv); assert(name)
#define PF_LINK AF_LINK
#define RXp_COMPFLAGS(rx) ((rx)->compflags)
#define IPV6_TCLASS 36
#define AF_SNA 11
#define task_get_kernel_port(task,port) (task_get_special_port((task), TASK_KERNEL_PORT, (port)))
#define __kpi_deprecated(_msg) 
#define PERL_ARGS_ASSERT_SAVEPVN 
#define PERL_ARGS_ASSERT_APPEND_UTF8_FROM_NATIVE_BYTE assert(dest)
#define PERL_ARGS_ASSERT_MORESWITCHES assert(s)
#define __UINT_FAST16_TYPE__ short unsigned int
#define FPC_IC_AFF 0x1000
#define PL_my_cxt_size (vTHX->Imy_cxt_size)
#define PMf_KEEP (1U<<(PMf_BASE_SHIFT+8))
#define IOPOL_UTILITY 4
#define TAINT_PROPER(s) if (UNLIKELY(PL_tainting)) { taint_proper(NULL, s); }
#define IPPROTO_PRM 21
#define WIFSTOPPED(x) (_WSTATUS(x) == _WSTOPPED && WSTOPSIG(x) != 0x13)
#define PERL_ARGS_ASSERT_MRO_META_INIT assert(stash)
#define sv_iv(a) Perl_sv_iv(aTHX_ a)
#define do_join(a,b,c,d) Perl_do_join(aTHX_ a,b,c,d)
#define _POSIX_RAW_SOCKETS (-1)
#define XopENTRY_set(xop,which,to) STMT_START { (xop)->which = (to); (xop)->xop_flags |= XOPf_ ## which; } STMT_END
#define __SERR 0x0040
#define __DARWIN_C_LEVEL __DARWIN_C_FULL
#define newBINOP(a,b,c,d) Perl_newBINOP(aTHX_ a,b,c,d)
#define ngx_stdout STDOUT_FILENO
#define VM_MEMORY_MALLOC_TINY 7
#define PMf_EXTENDED (1U<<3)
#define SIG_NUM 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 6, 0
#define pcre2_match_context_free PCRE2_SUFFIX(pcre2_match_context_free_)
#define IP_RECVIF 20
#define NATIVE_SKIP(uv) UVCHR_SKIP(uv)
#define PerlIO_get_cnt(a) Perl_PerlIO_get_cnt(aTHX_ a)
#define NV_NAN_PAYLOAD_PERM NV_NAN_PAYLOAD_PERM_IEEE_754_64_LE
#define PRIX32 "X"
#define __WATCHOS_7_0 70000
#define __WATCHOS_7_1 70100
#define __WATCHOS_7_3 70300
#define __WATCHOS_7_4 70400
#define __ATOMIC_CONSUME 1
#define VOL_CAP_INT_SNAPSHOT 0x00020000
#define sv_grow(a,b) Perl_sv_grow(aTHX_ a,b)
#define PADNAMEt_OUR 16
#define gv_fetchmethod_pvn_flags(a,b,c,d) Perl_gv_fetchmethod_pvn_flags(aTHX_ a,b,c,d)
#define __SEG_FS 1
#define ngx_dir_access(a) (a | (a & 0444) >> 2)
#define RX_MATCH_COPIED(rx_sv) (RX_EXTFLAGS(rx_sv) & RXf_COPY_DONE)
#define PERL_ARGS_ASSERT_CK_INDEX assert(o)
#define VFS_CTL_VERS1 0x01
#define ngx_libc_cdecl 
#define NOTE_FFAND 0x40000000
#define PERL_ARGS_ASSERT_CKWARN 
#define USE_POSIX_2008_LOCALE 
#define pthread_cleanup_pop(execute) __self->__cleanup_stack = __handler.__next; if (execute) (__handler.__routine)(__handler.__arg); }
#define WARNshift 8
#define _DARWIN_FEATURE_ONLY_UNIX_CONFORMANCE 1
#define EDEADLK 11
#define mg_free(a) Perl_mg_free(aTHX_ a)
#define __SEG_GS 1
#define PERL_ARGS_ASSERT_MG_DUP assert(param)
#define __FLT32_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F32
#define ATTR_CMN_RETURNED_ATTRS 0x80000000
#define CLONEf_JOIN_IN 8
#define ReANY(re) Perl_ReANY((const REGEXP *)(re))
#define CALLREG_INTUIT_STRING(prog) RX_ENGINE(prog)->checkstr(aTHX_ (prog))
#define SvPOK_nogthink(sv) ((SvFLAGS(sv) & (SVf_POK|SVf_THINKFIRST|SVs_GMG)) == SVf_POK)
#define NGX_HTTP_UPSTREAM_IGN_VARY 0x00000200
#define PERL_PV_ESCAPE_NONASCII 0x000400
#define PERL_ARGS_ASSERT_MAGIC_METHCALL assert(sv); assert(mg); assert(meth)
#define blk_oldsp cx_u.cx_blk.blku_oldsp
#define __MISMATCH_TAGS_PUSH 
#define _SC_THREAD_KEYS_MAX 86
#define ngx_open_tempfile_n "open()"
#define x86_AVX_STATE64 (x86_AVX_STATE32 + 1)
#define _SC_TRACE_LOG 100
#define INT64_MAX 9223372036854775807LL
#define SIGCHLD 20
#define host_get_iocompressionstats_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_IOCOMPRESSIONSTATS_PORT, (port)))
#define OPpRV2HV_ISKEYS 0x01
#define ngx_dlclose_n "dlclose()"
#define MAXNAMLEN __DARWIN_MAXNAMLEN
#define OPpTRUEBOOL 0x20
#define __INT16_TYPE__ short int
#define SvPVutf8_nomg(sv,len) (SvPOK_utf8_nog(sv) ? ((len = SvCUR(sv)), SvPVX(sv)) : sv_2pvutf8_flags(sv, &len, 0))
#define AMTf_AMAGIC 1
#define PRIX64 __PRI_64_LENGTH_MODIFIER__ "X"
#define RX_MATCH_COPIED_on(rx_sv) (RX_EXTFLAGS(rx_sv) |= RXf_COPY_DONE)
#define Ptrdiff_t ptrdiff_t
#define NOCAPTURE_PAT_MODS "n"
#define PERL_ARGS_ASSERT_SAVE_RE_CONTEXT 
#define DBL_EPSILON __DBL_EPSILON__
#define sv_nv(a) Perl_sv_nv(aTHX_ a)
#define _MACH_BOOLEAN_H_ 
#define _WEXT_OK (1<<18)
#define PROCESSOR_NULL ((processor_t) 0)
#define ngx_close_file close
#define PERL_ARGS_ASSERT_HV_EXISTS_ENT assert(keysv)
#define _NGX_MURMURHASH_H_INCLUDED_ 
#define _I386_EFLAGS_H_ 
#define WARN_ILLEGALPROTO 47
#define cMETHOPx(o) ((METHOP*)(o))
#define ngx_conf_init_uint_value(conf,default) if (conf == NGX_CONF_UNSET_UINT) { conf = default; }
#define NGX_HTTP_UPSTREAM_FT_HTTP_404 0x00000200
#define PERL_ARGS_ASSERT_CX_POPGIVEN assert(cx)
#define NATIVE_TO_LATIN1(ch) (__ASSERT_(FITS_IN_8_BITS(ch)) ((U8) ((ch) | 0)))
#define _POSIX_FSYNC 200112L
#define _SYS_TYPES_H_ 
#define CPU_SUBTYPE_VAX730 ((cpu_subtype_t) 4)
#define F_WRLCK 3
#define TAILQ_FOREACH(var,head,field) for ((var) = TAILQ_FIRST((head)); (var); (var) = TAILQ_NEXT((var), field))
#define PadnamePROTOCV(pn) (pn)->xpadn_type_u.xpadn_protocv
#define PL_lastgotoprobe (vTHX->Ilastgotoprobe)
#define RUSAGE_SELF 0
#define PERL_VERSION 34
#define SvPAD_STATE_on PadnameIsSTATE_on
#define case_20_SBOX32(hash,state,key) _SBOX32_CASE(20,hash,state,key)
#define cophh_delete_pv(cophh,key,hash,flags) Perl_refcounted_he_new_pv(aTHX_ cophh, key, hash, (SV *)NULL, flags)
#define EXC_I386_SSEEXTERR 8
#define OPpENTERSUB_HASTARG 0x04
#define AT_REALDEV 0x0200
#define x86_THREAD_FULL_STATE64_COUNT ((mach_msg_type_number_t) ( sizeof (x86_thread_full_state64_t) / sizeof (int) ))
#define MEMORY_OBJECT_DATA_FLUSH_ALL 0x40
#define SIGSYS 12
#define UNICODE_DOT_DOT_VERSION 0
#define PERL_ARGS_ASSERT_HV_ITERKEYSV assert(entry)
#define HAS_SETREUID 
#define sv_pv(sv) SvPV_nolen(sv)
#define case_90_SBOX32(hash,state,key) 
#define sv_catpvn_nomg_utf8_upgrade(dsv,sstr,slen,nsv) STMT_START { if (!(nsv)) nsv = newSVpvn_flags(sstr, slen, SVs_TEMP); else sv_setpvn(nsv, sstr, slen); SvUTF8_off(nsv); sv_utf8_upgrade(nsv); sv_catsv_nomg(dsv, nsv); } STMT_END
#define NGX_HTTP_MOVE 0x00000100
#define case_130_SBOX32(hash,state,key) 
#define PL_efloatbuf (vTHX->Iefloatbuf)
#define VM_DYLD64 ((user_addr_t) 0x00007FFF5FC00000ULL)
#define RETURNX(x) return (x, PUTBACK, NORMAL)
#define SvNOK_only(sv) (SvOK_off(sv), SvFLAGS(sv) |= (SVf_NOK|SVp_NOK))
#define NOTE_LINK 0x00000010
#define SvPEEK(sv) sv_peek(sv)
#define CvNAMED_on(cv) (CvFLAGS(cv) |= CVf_NAMED)
#define SA_NOCLDSTOP 0x0008
#define CPU_SUBTYPE_ARM_V8M ((cpu_subtype_t) 17)
#define __swift_compiler_version_at_least(...) 1
#define CPU_SUBTYPE_VAX750 ((cpu_subtype_t) 3)
#define _MALLOC_UNDERSCORE_MALLOC_H_ 
#define ENV_LOCALE_READ_UNLOCK ENV_LOCALE_UNLOCK
#define HINT_NO_AMAGIC 0x01000000
#define PERL_ARGS_ASSERT_TIED_METHOD assert(methname); assert(sp); assert(sv); assert(mg)
#define PCRE2_ERROR_CALLOUT_NUMBER_TOO_BIG 138
#define PERL_ARGS_ASSERT_SAVE_SPTR assert(sptr)
#define I_WCHAR 
#define NGX_ENETDOWN ENETDOWN
#define CvFILE(sv) ((XPVCV*)MUTABLE_PTR(SvANY(sv)))->xcv_file
#define PERL_ARGS_ASSERT_AV_EXTEND assert(av)
#define SV_SMAGIC 128
#define ILL_PRVREG 6
#define my_strlcpy strlcpy
#define KERN_RETURN_MAX 0x100
#define host_get_audit_control_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_AUDIT_CONTROL_PORT, (port)))
#define __LITTLE_ENDIAN__ 1
#define PERL_ARGS_ASSERT_MAGIC_SETENV assert(sv); assert(mg)
#define PerlSock_bind(s,n,l) bind(s, n, l)
#define PerlSock_socketpair(a,t,p,f) socketpair(a, t, p, f)
#define PL_laststype (vTHX->Ilaststype)
#define IN_LOOPBACK(i) (((u_int32_t)(i) & 0xff000000) == 0x7f000000)
#define PCRE2_ALT_BSUX 0x00000002u
#define TASK_EXC_GUARD_MP_CORPSE 0x40
#define __APPLE__ 1
#define USER_STREAM_MAX 19
#define KEEPCOPY_PAT_MOD 'p'
#define POLICY_FIFO_LIMIT_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_fifo_limit)/sizeof(integer_t)))
#define MNT_VISFLAGMASK (MNT_RDONLY | MNT_SYNCHRONOUS | MNT_NOEXEC | MNT_NOSUID | MNT_NODEV | MNT_UNION | MNT_ASYNC | MNT_EXPORTED | MNT_QUARANTINE | MNT_LOCAL | MNT_QUOTA | MNT_REMOVABLE | MNT_ROOTFS | MNT_DOVOLFS | MNT_DONTBROWSE | MNT_IGNORE_OWNERSHIP | MNT_AUTOMOUNTED | MNT_JOURNALED | MNT_NOUSERXATTR | MNT_DEFWRITE | MNT_MULTILABEL | MNT_NOATIME | MNT_STRICTATIME | MNT_SNAPSHOT | MNT_CPROTECT)
#define I_SYSUTSNAME 
#define thread_locale_term Perl_thread_locale_term
#define PL_bodytarget (vTHX->Ibodytarget)
#define MINCORE_REFERENCED 0x2
#define DOUBLE_IS_IEEE_754_64_BIT_MIXED_ENDIAN_BE_LE 8
#define NGX_MAIN_CONF 0x01000000
#define IPPROTO_NSP 31
#define TASK_OVERRIDE_QOS_POLICY 9
#define _MACH_HOST_SPECIAL_PORTS_H_ 
#define _BSD_MACHINE_ENDIAN_H_ 
#define SIPHASH_SEED_STATE(key,v0,v1,v2,v3) do { v0 = v2 = U8TO64_LE(key + 0); v1 = v3 = U8TO64_LE(key + 8); v0 ^= UINT64_C(0x736f6d6570736575); v1 ^= UINT64_C(0x646f72616e646f6d); v2 ^= UINT64_C(0x6c7967656e657261); v3 ^= UINT64_C(0x7465646279746573); } while (0)
#define VM_LIB64_SHR_TEXT ((user_addr_t) 0x00007FFF80000000ULL)
#define save_helem_flags(a,b,c,d) Perl_save_helem_flags(aTHX_ a,b,c,d)
#define NV_NAN_PAYLOAD_MASK_IEEE_754_128_LE 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x00, 0x00
#define SVf_PROTECT 0x00010000
#define REXEC_COPY_SKIP_POST 0x40
#define MATTR_MIGRATE 2
#define RXp_HAS_CUTGROUP(prog) ((prog)->intflags & PREGf_CUTGROUP_SEEN)
#define do_open(g,n,l,a,rm,rp,sf) do_openn(g, n, l, a, rm, rp, sf, (SV **) NULL, 0)
#define VM_REGION_SUBMAP_INFO_V0_SIZE (VM_REGION_SUBMAP_INFO_V1_SIZE - sizeof (unsigned int) )
#define CPU_SUBTYPE_VAX780 ((cpu_subtype_t) 1)
#define UTF8_WARN_NONCHAR 0x0800
#define CPU_SUBTYPE_VAX785 ((cpu_subtype_t) 2)
#define NTOHL(x) (x) = ntohl((__uint32_t)x)
#define PERL_ARGS_ASSERT_HV_ITERNEXT_FLAGS assert(hv)
#define NTOHS(x) (x) = ntohs((__uint16_t)x)
#define sv_setpv_bufsize(a,b,c) Perl_sv_setpv_bufsize(aTHX_ a,b,c)
#define Semctl(id,num,cmd,semun) semctl(id, num, cmd, semun)
#define LOCALTIME_R_PROTO REENTRANT_PROTO_S_TS
#define SRCHFS_MATCHFILES 0x00000008
#define ENDSERVENT_R_PROTO 0
#define __IPHONE_8_0 80000
#define __IPHONE_8_1 80100
#define __IPHONE_8_3 80300
#define TAILQ_HEAD_INITIALIZER(head) { NULL, &(head).tqh_first }
#define INT64_MIN (-INT64_MAX-1)
#define GETTARGETSTACKED targ = (PL_op->op_flags & OPf_STACKED ? POPs : PAD_SV(PL_op->op_targ))
#define EXC_MACH_SYSCALL 8
#define GvCV_set(gv,cv) (GvGP(gv)->gp_cv = (cv))
#define _PC_REC_MIN_XFER_SIZE 22
#define PERL_ARGS_ASSERT_SAVE_NOGV assert(gv)
#define _SYS_TIMES_H_ 
#define PERL_ARGS_ASSERT_HEK_DUP assert(param)
#define EXC_BAD_INSTRUCTION 2
#define _PTHREAD_MUTEX_SIG_init 0x32AAABA7
#define MAP_HASSEMAPHORE 0x0200
#define PL_sig_pending (vTHX->Isig_pending)
#define HvMAX(hv) ((XPVHV*) SvANY(hv))->xhv_max
#define YIELD SCHED_YIELD
#define NGX_CONF_UNSET_MSEC (ngx_msec_t) -1
#define __CONSTANT_CFSTRINGS__ 1
#define i386_EXCEPTION_STATE 3
#define sv_cat_decode(a,b,c,d,e,f) Perl_sv_cat_decode(aTHX_ a,b,c,d,e,f)
#define NGX_HAVE_PWRITE 1
#define PmopSTASH(o) ((o)->op_pmflags & PMf_ONCE ? PL_stashpad[(o)->op_pmstashstartu.op_pmstashoff] : NULL)
#define POPSTACK_TO(s) STMT_START { while (PL_curstack != s) { dounwind(-1); POPSTACK; } } STMT_END
#define CPU_SUBTYPE_PENTII_M3 CPU_SUBTYPE_INTEL(6, 3)
#define init_stacks() Perl_init_stacks(aTHX)
#define __FLT64X_MAX__ 1.18973149535723176502126385303097021e+4932F64x
#define CopLINE_inc(c) (++CopLINE(c))
#define PERL_ARGS_ASSERT_DUMP_VINDENT assert(file); assert(pat)
#define PL_forkprocess (vTHX->Iforkprocess)
#define NGX_LOG_DEBUG_ALLOC 0x020
#define is_ascii_string(s,len) is_utf8_invariant_string(s, len)
#define MACH_PORT_QLIMIT_BASIC (5)
#define memEQ(s1,s2,l) (memcmp(((const void *) (s1)), ((const void *) (s2)), l) == 0)
#define OP_TYPE_ISNT_AND_WASNT(o,type) ( (o) && OP_TYPE_ISNT_AND_WASNT_NN(o, type) )
#define SvNVXx(sv) SvNVX(sv)
#define ATTR_VOL_MOUNTEDDEVICE 0x00008000
#define PERL_ARGS_ASSERT_GET_AND_CHECK_BACKSLASH_N_NAME assert(s); assert(e); assert(error_msg)
#define AUDIT_HARD_LIMIT_FREE_BLOCKS 4
#define PERL_ARGS_ASSERT_MG_SET assert(sv)
#define ELAST 106
#define GvIMPORTED_SV_off(gv) (GvFLAGS(gv) &= ~GVf_IMPORTED_SV)
#define LEX_NOTPARSING 11
#define LATIN_SMALL_LETTER_DOTLESS_I_UTF8 "\xC4\xB1"
#define BUS_ADRERR 2
#define NGX_HTTP_GATEWAY_TIME_OUT 504
#define NGINX_VER_BUILD NGINX_VER
#define UTF8_GOT_SUPER UTF8_DISALLOW_SUPER
#define HAS_J0 
#define ngx_de_is_file(dir) (((dir)->type) ? ((dir)->type == DT_REG) : (S_ISREG((dir)->info.st_mode)))
#define EBADRPC 72
#define MACH_MSG_OOL_DESCRIPTOR 1
#define VOL_CAP_INT_NAMEDSTREAMS 0x00002000
#define taint_proper(a,b) Perl_taint_proper(aTHX_ a,b)
#define PL_max_intro_pending (vTHX->Imax_intro_pending)
#define HvENAME_HEK_NN(hv) ( HvAUX(hv)->xhv_name_count > 0 ? HvAUX(hv)->xhv_name_u.xhvnameu_names[0] : HvAUX(hv)->xhv_name_count < -1 ? HvAUX(hv)->xhv_name_u.xhvnameu_names[1] : HvAUX(hv)->xhv_name_count == -1 ? NULL : HvAUX(hv)->xhv_name_u.xhvnameu_name )
#define PERL_MAGIC_dbline 'l'
#define host_get_amfid_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_AMFID_PORT, (port)))
#define PERL_ARGS_ASSERT_NEWATTRSUB_X 
#define NGX_ENETUNREACH ENETUNREACH
#define ATTR_FILE_FORKLIST 0x00000100
#define SvNIOK_off(sv) (SvFLAGS(sv) &= ~(SVf_IOK|SVf_NOK| SVp_IOK|SVp_NOK|SVf_IVisUV))
#define ngx_file_size(sb) (sb)->st_size
#define NGX_MODULE_SIGNATURE_18 "0"
#define __DARWIN_WCHAR_MIN (-0x7fffffff - 1)
#define MDEREF_HV_padhv_helem 12
#define reg_named_buff_exists(a,b,c) Perl_reg_named_buff_exists(aTHX_ a,b,c)
#define ESOCKTNOSUPPORT 44
#define __INTPTR_TYPE__ long int
#define OPpSUBSTR_REPL_FIRST 0x10
#define PERL_ARGS_ASSERT_RE_INTUIT_START assert(rx); assert(strbeg); assert(strpos); assert(strend)
#define SvPCS_IMPORTED(sv) ((SvFLAGS(sv) & (SVf_ROK|SVprv_PCS_IMPORTED)) == (SVf_ROK|SVprv_PCS_IMPORTED))
#define host_get_syspolicyd_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_SYSPOLICYD_PORT, (port)))
#define PCRE2_ERROR_MARK_MISSING_ARGUMENT 166
#define PCRE2_ERROR_VERSION_CONDITION_SYNTAX 179
#define _GLOB_H_ 
#define host_get_container_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_CONTAINERD_PORT, (port)))
#define G_WANT 3
#define PERL_ARGS_ASSERT_REG_NAMED_BUFF_EXISTS assert(rx); assert(key)
#define MNT_ASYNC 0x00000040
#define PERL_ARGS_ASSERT_GV_FETCHMETH_AUTOLOAD 
#define RXapif_NEXTKEY 0x0080
#define SAVEI8(i) save_I8((I8*)&(i))
#define blk_sub cx_u.cx_blk.blk_u.blku_sub
#define __API_UNAVAILABLE_END 
#define cUNOPo cUNOPx(o)
#define OP_TYPE_ISNT_AND_WASNT_NN(o,type) ( ((o)->op_type == OP_NULL ? (o)->op_targ : (o)->op_type) != (type) )
#define XUCRED_VERSION 0
#define cUNOPx(o) ((UNOP*)(o))
#define SAVEIV(i) save_iv((IV*)&(i))
#define Mmap_t void *
#define NGX_EBADF EBADF
#define S_ISBLK(m) (((m) & S_IFMT) == S_IFBLK)
#define PerlSock_select(n,r,w,e,t) select(n, r, w, e, t)
#define printf_nocontext Perl_printf_nocontext
#define save_aelem(av,idx,sptr) save_aelem_flags(av,idx,sptr,SAVEf_SETMAGIC)
#define NGX_HAVE_MAP_ANON 1
#define HAS_UMASK 
#define GvNAMELEN_get(gv) HEK_LEN(GvNAME_HEK(gv))
#define PERL_ARGS_ASSERT_CX_PUSHFORMAT assert(cx); assert(cv)
#define NGX_ENAMETOOLONG ENAMETOOLONG
#define SvIsCOW_shared_hash(sv) (SvIsCOW(sv) && SvLEN(sv) == 0)
#define VM_LEDGER_TAG_NONE 0x00000000
#define PERLSI_SIGNAL 4
#define NGX_ENOPATH ENOENT
#define __STDC_WANT_LIB_EXT1__ 1
#define HAS_SETPGID 
#define HvMROMETA(hv) (HvAUX(hv)->xhv_mro_meta ? HvAUX(hv)->xhv_mro_meta : Perl_mro_meta_init(aTHX_ hv))
#define FP_RND_DOWN 1
#define RXp_MATCH_UTF8_off(prog) (RXp_EXTFLAGS(prog) &= ~RXf_MATCH_UTF8)
#define PERL_ARGS_ASSERT_GV_FETCHMETH_SV assert(namesv)
#define HAS_NICE 
#define cPMOPo cPMOPx(o)
#define cPMOPx(o) ((PMOP*)(o))
#define ngx_conf_merge_ptr_value(conf,prev,default) if (conf == NGX_CONF_UNSET_PTR) { conf = (prev == NGX_CONF_UNSET_PTR) ? default : prev; }
#define VM_MEMORY_LAYERKIT 51
#define newSVREF(a) Perl_newSVREF(aTHX_ a)
#define POPi ((IV)SvIVx(POPs))
#define __UINT8_C(c) c
#define TCPOLEN_MAXSEG 4
#define LATIN_SMALL_LETTER_LONG_S_UTF8 "\xC5\xBF"
#define SVp_POK 0x00004000
#define OPpHUSH_VMSISH 0x20
#define PL_LB_invlist (vTHX->ILB_invlist)
#define M_PI_2 1.57079632679489661923132169163975144
#define PERL_VERSION_STRING STRINGIFY(PERL_REVISION) "." STRINGIFY(PERL_VERSION) "." STRINGIFY(PERL_SUBVERSION)
#define A_SETFSIZE 26
#define I16SIZE 2
#define PCRE2_ERROR_BACKSLASH_U_CODE_POINT_TOO_BIG 177
#define memLE(s1,s2,l) (memcmp(s1,s2,l) <= 0)
#define reg_named_buff_fetch(a,b,c) Perl_reg_named_buff_fetch(aTHX_ a,b,c)
#define memLT(s1,s2,l) (memcmp(s1,s2,l) < 0)
#define ckDEAD(x) (PL_curcop && !specialWARN(PL_curcop->cop_warnings) && (isWARNf_on(PL_curcop->cop_warnings, unpackWARN1(x)) || (unpackWARN2(x) && (isWARNf_on(PL_curcop->cop_warnings, unpackWARN2(x)) || (unpackWARN3(x) && (isWARNf_on(PL_curcop->cop_warnings, unpackWARN3(x)) || (unpackWARN4(x) && isWARNf_on(PL_curcop->cop_warnings, unpackWARN4(x)))))))))
#define NGX_TIME_T_SIZE 8
#define _PC_NAME_CHARS_MAX 10
#define NGX_HTTP_CLIENT_TEMP_PATH "client_body_temp"
#define KEV_INET6_DEFROUTER 6
#define RX_LASTPAREN(rx_sv) (ReANY(rx_sv)->lastparen)
#define NGX_HTTP_UPSTREAM_IGN_XA_REDIRECT 0x00000002
#define MBIGCLSHIFT 12
#define MACH_MSG_PORT_DESCRIPTOR 0
#define MAP_SHARED 0x0001
#define PL_curpad (vTHX->Icurpad)
#define WNOWAIT 0x00000020
#define __unreachable_ok_pop _Pragma("GCC diagnostic pop")
#define KMOD_EXPLICIT_DECL(name,version,start,stop) kmod_info_t KMOD_INFO_NAME = { 0, KMOD_INFO_VERSION, -1U, { #name }, { version }, -1, 0, 0, 0, 0, start, stop };
#define NGX_HAVE_SO_SNDLOWAT 1
#define PRIXFAST8 PRIX8
#define PCRE2_ERROR_UNKNOWN_UNICODE_PROPERTY 147
#define SAVEt_DELETE 54
#define VM_BEHAVIOR_RSEQNTL ((vm_behavior_t) 3)
#define CvSTASH_set(cv,st) Perl_cvstash_set(aTHX_ cv, st)
#define P_FORCEQUOTA 0x20000000
#define SRAND48_R_PROTO 0
#define DOUBLE_IS_VAX_F_FLOAT 9
#define MACH_MSG_STRICT_REPLY 0x00000200
#define SIOCSIFLLADDR _IOW('i', 60, struct ifreq)
#define _GCC_PTRDIFF_T 
#define Sigjmp_buf sigjmp_buf
#define IP_PORTRANGE 19
#define pTHX__VALUE ,(void *)my_perl
#define STAILQ_INSERT_TAIL(head,elm,field) do { STAILQ_NEXT((elm), field) = NULL; *(head)->stqh_last = (elm); (head)->stqh_last = &STAILQ_NEXT((elm), field); } while (0)
#define perl_call_method(a,b) call_method(a,b)
#define croak_memory_wrap Perl_croak_memory_wrap
#define PL_strxfrm_is_behaved (vTHX->Istrxfrm_is_behaved)
#define despatch_signals() Perl_despatch_signals(aTHX)
#define NGX_MODULE_SIGNATURE_21 "0"
#define F_GETNOSIGPIPE 74
#define SCNoFAST16 SCNo16
#define NGX_USE_ONESHOT_EVENT 0x00000002
#define DEBUG_v_FLAG 0x00100000
#define SAVEOP() save_op()
#define case_101_SBOX32(hash,state,key) 
#define PL_destroyhook (vTHX->Idestroyhook)
#define PERL_ARGS_ASSERT_SV_SETIV assert(sv)
#define AI_PASSIVE 0x00000001
#define CxOLD_OP_TYPE(cx) (((cx)->blk_u16) >> 7)
#define IN_LOCALE_RUNTIME (PL_curcop && CopHINTS_get(PL_curcop) & HINT_LOCALE)
#define pcre2_set_parens_nest_limit PCRE2_SUFFIX(pcre2_set_parens_nest_limit_)
#define PERL_SET_CONTEXT(t) STMT_START { int _eC_; if ((_eC_ = pthread_setspecific(PL_thr_key, (void *)(t)))) Perl_croak_nocontext("panic: pthread_setspecific (%d) [%s:%d]", _eC_, __FILE__, __LINE__); } STMT_END
#define PERL_ARGS_ASSERT_SV_INSERT_FLAGS assert(bigstr); assert(little)
#define IPPROTO_FRAGMENT 44
#define NGX_MODULE_SIGNATURE_22 "0"
#define PERL_ARGS_ASSERT_AV_PUSH assert(av); assert(val)
#define WARN_VOID 45
#define __LPBIG_OFFBIG (1)
#define _I386__PARAM_H_ 
#define MSVC_DIAG_RESTORE_STMT MSVC_DIAG_RESTORE NOOP
#define PRIXMAX __PRI_MAX_LENGTH_MODIFIER__ "X"
#define AF_NETBIOS 33
#define EPROTONOSUPPORT 43
#define UINT_MAX (INT_MAX * 2U + 1U)
#define I_DLFCN 
#define PERL_ARGS_ASSERT_NEWSVSV_NOMG 
#define MEMORY_OBJECT_RETURN_DIRTY 1
#define gv_fetchmeth_pv_autoload(a,b,c,d) Perl_gv_fetchmeth_pv_autoload(aTHX_ a,b,c,d)
#define USE_STAT_RDEV 
#define TCP_MAXHLEN (0xf<<2)
#define whichsig_pvn(a,b) Perl_whichsig_pvn(aTHX_ a,b)
#define IN_CLASSC_NET 0xffffff00
#define RXp_GOFS(prog) (prog->gofs)
#define NGX_PROCESS_SINGLE 0
#define SCNoFAST32 SCNo32
#define IPV6_ADDR_MC_FLAGS_TRANSIENT 0x10
#define HAS_GETHOSTBYNAME 
#define RXp_SUBOFFSET(prog) (prog->suboffset)
#define TASK_THREAD_TIMES_INFO 3
#define PCRE2_ERROR_ESCAPE_INVALID_IN_CLASS 107
#define SvUTF8_off(sv) (SvFLAGS(sv) &= ~(SVf_UTF8))
#define PL_body_roots (vTHX->Ibody_roots)
#define O_SHLOCK 0x00000010
#define __WINT_MAX__ 0x7fffffff
#define IOCGROUP(x) (((x) >> 8) & 0xff)
#define __FLT_MAX_EXP__ 128
#define HAS_REMAINDER 
#define LATIN_CAPITAL_LETTER_A_WITH_RING_ABOVE LATIN_CAPITAL_LETTER_A_WITH_RING_ABOVE_NATIVE
#define LDBL_MAX_10_EXP __LDBL_MAX_10_EXP__
#define PERL_ARGS_ASSERT_CK_CONCAT assert(o)
#define TIOCPKT_FLUSHWRITE 0x02
#define _SYS_FILE_H_ 
#define case_58_SBOX32(hash,state,key) 
#define MAP_MEM_FLAGS_ALL ( MAP_MEM_FLAGS_USER)
#define PL_in_utf8_COLLATE_locale (vTHX->Iin_utf8_COLLATE_locale)
#define Uid_t_f "u"
#define PL_defgv (vTHX->Idefgv)
#define _PTHREAD_MUTEXATTR_T 
#define PCRE2_ERROR_ZERO_RELATIVE_REFERENCE 126
#define gv_efullname3(sv,gv,prefix) gv_efullname4(sv,gv,prefix,TRUE)
#define gv_efullname4(a,b,c,d) Perl_gv_efullname4(aTHX_ a,b,c,d)
#define __swift_unavailable(_msg) 
#define host_get_unfreed_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_UNFREED_PORT, (port)))
#define save_re_context() Perl_save_re_context(aTHX)
#define NGX_HTTP_FLUSH 2
#define ninstr(big,bigend,little,lend) ((char *) memmem((big), (bigend) - (big), (little), (lend) - (little)))
#define RsPARA(sv) (SvPOK(sv) && ! SvCUR(sv))
#define UTF8_IS_CONTINUATION(c) (__ASSERT_(FITS_IN_8_BITS(c)) (((NATIVE_UTF8_TO_I8(c) & UTF_IS_CONTINUATION_MASK) == UTF_CONTINUATION_MARK)))
#define PERL_ARGS_ASSERT_SET_NUMERIC_STANDARD 
#define FSOPT_RETURN_REALDEV 0x00000200
#define _POSIX_REALTIME_SIGNALS (-1)
#define _POSIX_V6_LP64_OFF64 __LP64_OFF64
#define CXt_LOOP_ARY 4
#define PDROP 0x400
#define MNT_UPDATE 0x00010000
#define SvPV_set(sv,val) STMT_START { assert(PL_valid_types_PVX[SvTYPE(sv) & SVt_MASK]); assert(!isGV_with_GP(sv)); assert(!(SvTYPE(sv) == SVt_PVIO && !(IoFLAGS(sv) & IOf_FAKE_DIRP))); ((sv)->sv_u.svu_pv = (val)); } STMT_END
#define __LASTBRANCH_MAX 32
#define SCNoFAST64 SCNo64
#define vverify(a) Perl_vverify(aTHX_ a)
#define LATIN_CAPITAL_LETTER_SHARP_S 0x1E9E
#define HAS_SETPGRP 
#define _STRUCT_X86_EXCEPTION_STATE32 struct __darwin_i386_exception_state
#define ngx_strlen(s) strlen((const char *) s)
#define UINT_FAST64_MAX UINT64_MAX
#define _POSIX_SEM_VALUE_MAX 32767
#define I386_PGSHIFT 12
#define MACH_RCV_MSG 0x00000002
#define NGX_RESOLVE_FORMERR 1
#define host_set_gssd_port(host,port) (host_set_special_port((host), HOST_GSSD_PORT, (port)))
#define PERL_ARGS_ASSERT_AMAGIC_IS_ENABLED 
#define VM_LEDGER_TAG_MEDIA 0x00000003
#define LC_CTYPE 2
#define REXEC_COPY_SKIP_PRE 0x20
#define SOL_LOCAL 0
#define _MBSTATE_T 
#define NGX_HAVE_OPENAT 1
#define _CTYPE_A 0x00000100L
#define _CTYPE_B 0x00020000L
#define _CTYPE_C 0x00000200L
#define _CTYPE_D 0x00000400L
#define _CTYPE_G 0x00000800L
#define _CTYPE_I 0x00080000L
#define ngx_read_fd_n "read()"
#define _CTYPE_L 0x00001000L
#define x86_INSTRUCTION_STATE 24
#define _CTYPE_P 0x00002000L
#define _CTYPE_Q 0x00200000L
#define _CTYPE_R 0x00040000L
#define _CTYPE_S 0x00004000L
#define _CTYPE_T 0x00100000L
#define _CTYPE_U 0x00008000L
#define _CTYPE_X 0x00010000L
#define CvFILE_set_from_cop(sv,cop) (CvFILE(sv) = savepv(CopFILE(cop)), CvDYNFILE_on(sv))
#define KERN_RPC_SERVER_TERMINATED 43
#define _CS_XBS5_ILP32_OFFBIG_LINTFLAGS 27
#define _VM_PAGE_SIZE_H_ 
#define TASK_VM_INFO_REV2_COUNT ((mach_msg_type_number_t) (TASK_VM_INFO_REV3_COUNT - 42))
#define PROC_FLAG_IOS_APPLEDAEMON 0x20000
#define IPPROTO_MAXID (IPPROTO_AH + 1)
#define CPUFAMILY_ARM_SWIFT 0x1e2d6381
#define _MALLOC_MALLOC_H_ 
#define REXEC_CHECKED 0x02
#define _POSIX_VDISABLE ((unsigned char)'\377')
#define PCRE2_INFO_MATCHEMPTY 13
#define PCRE2_UTF 0x00080000u
#define dPOPTOPiirl dPOPXiirl(TOP)
#define HAS_GETPWNAM_R 
#define _APPEND_OK (1<<13)
#define _STRUCT_X86_EXCEPTION_STATE64 struct __darwin_x86_exception_state64
#define CPU_SUBTYPE_ARM_V4T ((cpu_subtype_t) 5)
#define NET_SERVICE_TYPE_VO 4
#define IP_OPTIONS 1
#define MACH_MSGH_BITS_PORTS_MASK (MACH_MSGH_BITS_REMOTE_MASK | MACH_MSGH_BITS_LOCAL_MASK | MACH_MSGH_BITS_VOUCHER_MASK)
#define KERN_PROTECTION_FAILURE 2
#define __WINT_WIDTH__ 32
#define PL_subline (vTHX->Isubline)
#define MAP_MEM_NOOP 0
#define PERL_HASH_FUNC_SIPHASH13 
#define PERL_ARGS_ASSERT_DO_OPENN assert(gv); assert(oname)
#define MSVC_DIAG_RESTORE 
#define _SC_XOPEN_SHM 113
#define SIGUSR1 30
#define ENDNETENT_R_PROTO 0
#define TCPOPT_NOP 1
#define PADNAMEt_LVALUE 4
#define HAS_SETEGID 
#define __DARWIN_SUF_EXTSN "$DARWIN_EXTSN"
#define _EXTEND_SAFE_N(n) (sizeof(n) > sizeof(SSize_t) && ((SSize_t)(n) != (n)) ? -1 : (n))
#define PERL_ARGS_ASSERT_COP_STORE_LABEL assert(cop); assert(label)
#define VM_PAGE_QUERY_PAGE_PRESENT 0x1
#define NOTE_USECONDS 0x00000002
#define SRCHFS_SKIPPACKAGES 0x00000040
#define HvNAME_get(hv) ((SvOOK(hv) && HvAUX(hv)->xhv_name_u.xhvnameu_name && HvNAME_HEK_NN(hv)) ? HEK_KEY(HvNAME_HEK_NN(hv)) : NULL)
#define KERN_KDSET_TYPEFILTER 22
#define KERN_INVALID_SECURITY 35
#define av_push(a,b) Perl_av_push(aTHX_ a,b)
#define PERL_ARGS_ASSERT_RE_INTUIT_STRING assert(r)
#define _generic_non_invlist_utf8_safe(classnum,above_latin1,p,e) _generic_utf8_safe(classnum, p, e, (UNLIKELY((e) - (p) < UTF8SKIP(p)) ? (_force_out_malformed_utf8_message( (U8 *) (p), (U8 *) (e), 0, 1), 0) : above_latin1(p)))
#define NGX_MODULE_SIGNATURE_25 "1"
#define CPU_SUBTYPE_ARM_V6M ((cpu_subtype_t) 14)
#define PCRE2_INFO_LASTCODETYPE 12
#define PERL_ARGS_ASSERT_FIND_RUNCV_WHERE 
#define MATTR_VAL_CACHE_FLUSH 6
#define NGX_HTTP_CACHE_UPDATING 5
#define DRAND48_R_PROTO 0
#define op_contextualize(a,b) Perl_op_contextualize(aTHX_ a,b)
#define VM_MEMORY_SKYWALK 87
#define PERL_ARGS_ASSERT_PV_PRETTY assert(dsv); assert(str)
#define TAILQ_HEAD(name,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct name { struct type *tqh_first; struct type **tqh_last; TRACEBUF } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define VM_PAGE_QUERY_PAGE_REF 0x4
#define CVf_CLONED 0x0040
#define isfinite(x) ( sizeof(x) == sizeof(float) ? __inline_isfinitef((float)(x)) : sizeof(x) == sizeof(double) ? __inline_isfinited((double)(x)) : __inline_isfinitel((long double)(x)))
#define HAS_GETGRGID_R 
#define PadnamelistMAXNAMED(pnl) (pnl)->xpadnl_max_named
#define PerlSock_setnetent(f) setnetent(f)
#define TIOCEXT _IOW('t', 96, int)
#define NGX_HTTP_FORBIDDEN 403
#define HePV(he,lp) ((HeKLEN(he) == HEf_SVKEY) ? SvPV(HeKEY_sv(he),lp) : ((lp = HeKLEN(he)), HeKEY(he)))
#define Perl_signbit signbit
#define dSS_ADD I32 ix = PL_savestack_ix; ANY *ssp = &PL_savestack[ix]
#define EXC_I386_EMERR 6
#define CPU_SUBTYPE_ARM_V7K ((cpu_subtype_t) 12)
#define CPU_SUBTYPE_ARM_V7M ((cpu_subtype_t) 15)
#define CPU_SUBTYPE_ARM_V7S ((cpu_subtype_t) 11)
#define EMSGSIZE 40
#define DB_Prefix_t size_t
#define VM_FLAGS_SUPERPAGE_MASK 0x70000
#define x86_FLOAT_STATE32_COUNT ((mach_msg_type_number_t) (sizeof(x86_float_state32_t)/sizeof(unsigned int)))
#define NGX_PTR_SIZE 8
#define PNf UTF8f
#define is_PROBLEMATIC_LOCALE_FOLD_utf8(s) ( ( ((const U8*)s)[0] <= 0x7F ) ? 1 : ( inRANGE_helper_(U8, ((const U8*)s)[0], 0xC2, 0xC3) ) ? 2 : ( 0xC4 == ((const U8*)s)[0] ) ? ( ( inRANGE_helper_(U8, ((const U8*)s)[1], 0xB0, 0xB1) ) ? 2 : 0 ) : ( 0xC5 == ((const U8*)s)[0] ) ? ( ( 0x89 == ((const U8*)s)[1] || 0xB8 == ((const U8*)s)[1] || 0xBF == ((const U8*)s)[1] ) ? 2 : 0 ): ( 0xC7 == ((const U8*)s)[0] ) ? ( ( 0xB0 == ((const U8*)s)[1] ) ? 2 : 0 ) : ( 0xCC == ((const U8*)s)[0] ) ? ( ( 0x87 == ((const U8*)s)[1] ) ? 2 : 0 ) : ( 0xCE == ((const U8*)s)[0] ) ? ( ( ( ((const U8*)s)[1] & 0xDF ) == 0x9C ) ? 2 : 0 ) : ( 0xE1 == ((const U8*)s)[0] ) ? ( ( ( 0xBA == ((const U8*)s)[1] ) && ( inRANGE_helper_(U8, ((const U8*)s)[2], 0x96, 0x9A) || 0x9E == ((const U8*)s)[2] ) ) ? 3 : 0 ): ( 0xE2 == ((const U8*)s)[0] ) ? ( ( ( 0x84 == ((const U8*)s)[1] ) && ( inRANGE_helper_(U8, ((const U8*)s)[2], 0xAA, 0xAB) ) ) ? 3 : 0 ): ( ( ( 0xEF == ((const U8*)s)[0] ) && ( 0xAC == ((const U8*)s)[1] ) ) && ( inRANGE_helper_(U8, ((const U8*)s)[2], 0x80, 0x86) ) ) ? 3 : 0 )
#define KIPC_MAX_PROTOHDR 5
#define KERNEL_BOOT_INFO_MAX (4096)
#define OS_UNUSED __attribute__((__unused__))
#define TH_FIN 0x01
#define MACH_MSG_VM_KERNEL 0x00000400
#define ___WCTYPE_H_ 
#define PERL_ARGS_ASSERT_PACKAGE assert(o)
#define SIGEMT 7
#define PERL_ARGS_ASSERT_LEX_READ_SPACE 
#define KEV_INET_SIFNETMASK 6
#define END_EXTERN_C 
#define VM_FLAGS_USER_REMAP (VM_FLAGS_FIXED | VM_FLAGS_ANYWHERE | VM_FLAGS_RANDOM_ADDR | VM_FLAGS_OVERWRITE| VM_FLAGS_RETURN_DATA_ADDR | VM_FLAGS_RESILIENT_CODESIGN | VM_FLAGS_RESILIENT_MEDIA)
#define parser_dup(a,b) Perl_parser_dup(aTHX_ a,b)
#define gv_fullname3(sv,gv,prefix) gv_fullname4(sv,gv,prefix,TRUE)
#define WARN_EXPERIMENTAL__LEXICAL_SUBS 52
#define XS_DYNAMIC_FILENAME 0x01
#define TIOCPKT_DATA 0x00
#define NGX_SMP 1
#define PERL_ARGS_ASSERT_SYNC_LOCALE 
#define SvPVx_nolen(sv) ({SV *_sv = (sv); SvPV_nolen(_sv); })
#define SvSETMAGIC(x) STMT_START { if (UNLIKELY(SvSMAGICAL(x))) mg_set(x); } STMT_END
#define IoFLAGS(sv) ((XPVIO*) SvANY(sv))->xio_flags
#define CVf_HASEVAL 0x4000
#define do_sv_dump(a,b,c,d,e,f,g) Perl_do_sv_dump(aTHX_ a,b,c,d,e,f,g)
#define av_fill(a,b) Perl_av_fill(aTHX_ a,b)
#define want_vtbl_bm want_vtbl_regexp
#define PERL_ARGS_ASSERT_OOPSHV assert(o)
#define pregexec(a,b,c,d,e,f,g) Perl_pregexec(aTHX_ a,b,c,d,e,f,g)
#define CPU_SUBTYPE_VAX8200 ((cpu_subtype_t) 7)
#define PL_warn_locale (vTHX->Iwarn_locale)
#define SET_MAP_MEM(caching,flags) ((flags) = ((((unsigned int)(caching)) << 24) & 0xFF000000) | ((flags) & 0xFFFFFF));
#define __UINT64_TYPE__ long long unsigned int
#define PERL_ARGS_ASSERT_CSIGHANDLER3 
#define PL_custom_op_names (vTHX->Icustom_op_names)
#define CXp_MULTICALL 0x10
#define __has_feature(x) 0
#define PerlProc_setjmp(b,n) Sigsetjmp((b), (n))
#define VM_MACHFACTOR 4
#define NGX_LOG_EMERG 1
#define SEARCHFS_MAX_SEARCHPARMS 4096
#define MEMORY_OBJECT_COPY_SYNC 0x8
#define isPRINT_uvchr(c) _generic_invlist_uvchr(_CC_PRINT, c)
#define PERL_ARGS_ASSERT_IS_UTF8_CHAR assert(s)
#define PERL_ARGS_ASSERT_GV_CHECK assert(stash)
#define NGX_LEVEL_EVENT 0
#define VM_MEMORY_CORPSEINFO 80
#define PERL_ARGS_ASSERT_UTF8_HOP_FORWARD assert(s); assert(end)
#define THREAD_BACKGROUND_POLICY 5
#define pcre2_match_context_copy PCRE2_SUFFIX(pcre2_match_context_copy_)
#define host_get_node_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_NODE_PORT, (port)))
#define CIRCLEQ_REMOVE(head,elm,field) do { CIRCLEQ_CHECK_NEXT(head, elm, field); CIRCLEQ_CHECK_PREV(head, elm, field); if ((elm)->field.cqe_next == (void *)(head)) (head)->cqh_last = (elm)->field.cqe_prev; else (elm)->field.cqe_next->field.cqe_prev = (elm)->field.cqe_prev; if ((elm)->field.cqe_prev == (void *)(head)) (head)->cqh_first = (elm)->field.cqe_next; else (elm)->field.cqe_prev->field.cqe_next = (elm)->field.cqe_next; } while (0)
#define MDEREF_SHIFT 7
#define SvWEAKREF_on(sv) (SvFLAGS(sv) |= (SVf_ROK|SVprv_WEAKREF))
#define SCNiFAST8 SCNi8
#define SIOCGIFASYNCMAP _IOWR('i', 124, struct ifreq)
#define FP_NO 0
#define ngx_sched_yield() sched_yield()
#define PERL_MULTICONCAT_IX_PLAIN_LEN 2
#define PERL_FS_VERSION PERL_VERSION_STRING
#define NET_SERVICE_TYPE_SIG 2
#define SIOCSIFADDR _IOW('i', 12, struct ifreq)
#define _POSIX_MAPPED_FILES 200112L
#define PL_Posix_ptrs (vTHX->IPosix_ptrs)
#define SIGXCPU 24
#define __FLT128_HAS_QUIET_NAN__ 1
#define PERL_ARGS_ASSERT_GET_SV assert(name)
#define isSPACE_L1(c) _generic_isCC(c, _CC_SPACE)
#define VM_MEMORY_COREDATA 45
#define VM_MEMORY_COREIMAGE 68
#define isSPACE_LC(c) _generic_LC(c, _CC_SPACE, isspace)
#define SvPAD_OUR(pn) (!!PadnameOURSTASH(pn))
#define PERL_ARGS_ASSERT_RSIGNAL_SAVE assert(save)
#define UTF8_GOT_NON_CONTINUATION UTF8_ALLOW_NON_CONTINUATION
#define IPPROTO_IGMP 2
#define PL_DBsignal_iv (PL_DBcontrol[DBVARMG_SIGNAL])
#define save_generic_svref(a) Perl_save_generic_svref(aTHX_ a)
#define DEBUG_Uv_TEST_ DEBUG_BOTH_FLAGS_TEST_(DEBUG_U_FLAG, DEBUG_v_FLAG)
#define STAILQ_FIRST(head) ((head)->stqh_first)
#define _SC_MAPPED_FILES 47
#define IOPOL_SCOPE_DARWIN_BG 2
#define P_DELAYIDLESLEEP 0x00040000
#define PRIiMAX __PRI_MAX_LENGTH_MODIFIER__ "i"
#define QMD_TRACE_ELEM(elem) 
#define PerlProc_execvp(c,a) execvp((c), (a))
#define kBINOP cBINOPx(kid)
#define EF_IS_SYNC_ROOT 0x00000004
#define save_padsv_and_mortalize(a) Perl_save_padsv_and_mortalize(aTHX_ a)
#define PL_DBtrace_iv (PL_DBcontrol[DBVARMG_TRACE])
#define NGX_AGAIN -2
#define PL_blockhooks (vTHX->Iblockhooks)
#define PERL_ARGS_ASSERT_NEWWHILEOP 
#define CopLABEL(c) Perl_cop_fetch_label(aTHX_ (c), NULL, NULL)
#define sv_does_sv(a,b,c) Perl_sv_does_sv(aTHX_ a,b,c)
#define __FLT64X_MIN__ 3.36210314311209350626267781732175260e-4932F64x
#define NGX_HTTP_PERL_SSI_ARG 1
#define PERL_ARGS_ASSERT_CROAK_NOCONTEXT 
#define IP_ADD_SOURCE_MEMBERSHIP 70
#define PCRE2_ERROR_INTERNAL_CODE_OVERFLOW 123
#define PCRE2_CONVERT_POSIX_EXTENDED 0x00000008u
#define cPVOPx(o) ((PVOP*)(o))
#define PERL_ARGS_ASSERT_MINI_MKTIME assert(ptm)
#define __attribute__unused__ __attribute__((unused))
#define dPOPTOPiirl_nomg IV right = SvIV_nomg(TOPs); IV left = (sp--, SvIV_nomg(TOPs))
#define ATTR_VOL_INFO 0x80000000
#define TASK_AUDIT_TOKEN_COUNT (sizeof(audit_token_t) / sizeof(natural_t))
#define CASTFLAGS 0
#define CTL_VM_NAMES { { 0, 0 }, { "vmmeter", CTLTYPE_STRUCT }, { "loadavg", CTLTYPE_STRUCT }, { 0, 0 }, { "dummy", CTLTYPE_INT }, { "swapusage", CTLTYPE_STRUCT } }
#define isOCTAL_A(c) (((WIDEST_UTYPE)((c) | 0) & ~7) == '0')
#define do_gvgv_dump(a,b,c,d) Perl_do_gvgv_dump(aTHX_ a,b,c,d)
#define toUPPER_utf8(p,e,s,l) toUPPER_utf8_safe(p,e,s,l)
#define _BSD_MACHINE_TYPES_H_ 
#define LONG_LONG_MAX __LONG_LONG_MAX__
#define PL_mess_sv (vTHX->Imess_sv)
#define S_IFLNK 0120000
#define MNT_CPROTECT 0x00000080
#define CPU_SUBTYPE_ARM_V5TEJ ((cpu_subtype_t) 7)
#define SS_DEVOFFLINE 0
#define MACH_PORT_QLIMIT_SMALL (16)
#define Perl_isfinitel(x) isfinite(x)
#define __FLT64_HAS_DENORM__ 1
#define HINTS_REFCNT_TERM MUTEX_DESTROY(&PL_hints_mutex)
#define PERL_ARGS_ASSERT_NEWATTRSUB 
#define CHANGE_MULTICALL_FLAGS(the_cv,flags) STMT_START { CV * const _nOnclAshIngNamE_ = the_cv; CV * const cv = _nOnclAshIngNamE_; PADLIST * const padlist = CvPADLIST(cv); PERL_CONTEXT *cx = CX_CUR(); assert(CxMULTICALL(cx)); cx_popsub_common(cx); cx->cx_type = (CXt_SUB|CXp_MULTICALL|flags); cx_pushsub(cx, cv, NULL, 0); if (!(flags & CXp_SUB_RE_FAKE)) CvDEPTH(cv)++; if (CvDEPTH(cv) >= 2) Perl_pad_push(aTHX_ padlist, CvDEPTH(cv)); PAD_SET_CUR_NOSAVE(padlist, CvDEPTH(cv)); multicall_cop = CvSTART(cv); } STMT_END
#define HOST_NOTIFY_CALENDAR_CHANGE 0
#define SLIST_HEAD(name,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct name { struct type *slh_first; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_1(x) 
#define MDEREF_AV_vivify_rv2av_aelem 4
#define IPV6_PORTRANGE_DEFAULT 0
#define INADDR_LOOPBACK (u_int32_t)0x7f000001
#define cophh_exists_pv(cophh,key,hash,flags) cBOOL(Perl_refcounted_he_fetch_pv(aTHX_ cophh, key, hash, flags | COPHH_EXISTS))
#define LINKLIST(o) ((o)->op_next ? (o)->op_next : op_linklist((OP*)o))
#define BhkENABLE(hk,which) STMT_START { BhkFLAGS(hk) |= BHKf_ ## which; assert(BhkENTRY(hk, which)); } STMT_END
#define _POSIX2_BC_BASE_MAX 99
#define UF_DATAVAULT 0x00000080
#define __NULLABILITY_COMPLETENESS_POP 
#define case_230_SBOX32(hash,state,key) 
#define _POSIX_THREAD_SPORADIC_SERVER (-1)
#define DBL_MAX_10_EXP __DBL_MAX_10_EXP__
#define DO_UTF8(sv) (SvUTF8(sv) && !IN_BYTES)
#define PERL_DTRACE_PROBE_RETURN(cv) 
#define PERL_ARGS_ASSERT_PERL_RUN assert(my_perl)
#define _POSIX_MQ_PRIO_MAX 32
#define PCRE2_ERROR_NOUNIQUESUBSTRING (-50)
#define case_145_SBOX32(hash,state,key) 
#define MEMORY_OBJECT_COPY_TEMPORARY 3
#define isPRINT_uni(c) isPRINT_uvchr(c)
#define __DEC_EVAL_METHOD__ 2
#define ECONNABORTED 53
#define MACH_RCV_LARGE 0x00000004
#define __options_closed_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_closed __enum_options
#define is_MULTI_CHAR_FOLD_latin1_safe(s,e) ( ((e)-(s) > 2) ? ( ( ( ((const U8*)s)[0] & 0xDF ) == 'F' ) ? ( ( ( ((const U8*)s)[1] & 0xDF ) == 'F' ) ? ( ( ( ( ((const U8*)s)[2] & 0xDF ) == 'I' ) || ( ( ((const U8*)s)[2] & 0xDF ) == 'L' ) ) ? 3 : 2 ) : ( ( ( ((const U8*)s)[1] & 0xDF ) == 'I' ) || ( ( ((const U8*)s)[1] & 0xDF ) == 'L' ) ) ? 2 : 0 ) : ( ( ( ((const U8*)s)[0] & 0xDF ) == 'S' ) && ( inRANGE_helper_(U8, ((const U8*)s)[1], 'S', 'T') || inRANGE_helper_(U8, ((const U8*)s)[1], 's', 't') ) ) ? 2 : 0 ): ((e)-(s) > 1) ? ( ( ( ((const U8*)s)[0] & 0xDF ) == 'F' ) ? ( ( ( ( ((const U8*)s)[1] & 0xDF ) == 'F' ) || ( ( ((const U8*)s)[1] & 0xDF ) == 'I' ) || ( ( ((const U8*)s)[1] & 0xDF ) == 'L' ) ) ? 2 : 0 ) : ( ( ( ((const U8*)s)[0] & 0xDF ) == 'S' ) && ( inRANGE_helper_(U8, ((const U8*)s)[1], 'S', 'T') || inRANGE_helper_(U8, ((const U8*)s)[1], 's', 't') ) ) ? 2 : 0 ): 0 )
#define CvPROTO(sv) ( SvPOK(sv) ? SvTYPE(sv) == SVt_PVCV && CvAUTOLOAD(sv) ? SvEND(sv)+1 : SvPVX_const(sv) : NULL )
#define VM_MEMORY_DYLD 60
#define CPU_SUBTYPE_INTEL_FAMILY_MAX 15
#define PERL_ARGS_ASSERT_SV_2NV_FLAGS assert(sv)
#define PERL_ARGS_ASSERT_MAGIC_GETDEBUGVAR assert(sv); assert(mg)
#define PERL_ARGS_ASSERT_GETENV_LEN assert(env_elem); assert(len)
#define newSVpvn_share(a,b,c) Perl_newSVpvn_share(aTHX_ a,b,c)
#define HAS_LINKAT 
#define pTHXo pTHX
#define isXDIGIT_LC_utf8_safe(p,e) _generic_LC_non_invlist_utf8_safe(isXDIGIT_LC, is_XDIGIT_high, p, e)
#define PERL_ARGS_ASSERT_SV_VSETPVFN assert(sv); assert(pat)
#define NGX_EADDRINUSE EADDRINUSE
#define EOF_NONBLOCK 
#define IS_NUMBER_GREATER_THAN_UV_MAX 0x02
#define NGX_DISABLE_EVENT EV_DISABLE
#define IoLINES(sv) ((XPVIO*) SvANY(sv))->xiv_u.xivu_iv
#define case_189_SBOX32(hash,state,key) 
#define VM_PURGABLE_BEHAVIOR_MASK (1 << VM_PURGABLE_BEHAVIOR_SHIFT)
#define PERL_MULTICONCAT_IX_UTF8_PV 3
#define do_exec(cmd) do_exec3(cmd,0,0)
#define VM_FLAGS_USER_ALLOCATE (VM_FLAGS_FIXED | VM_FLAGS_ANYWHERE | VM_FLAGS_PURGABLE | VM_FLAGS_4GB_CHUNK | VM_FLAGS_RANDOM_ADDR | VM_FLAGS_NO_CACHE | VM_FLAGS_PERMANENT | VM_FLAGS_OVERWRITE | VM_FLAGS_SUPERPAGE_MASK | VM_FLAGS_ALIAS_MASK)
#define VOL_CAP_FMT_ZERO_RUNS 0x00000080
#define Netdb_hlen_t size_t
#define HAS_SETREGID 
#define UTF8_IS_START(c) UTF8_IS_START_base(c)
#define IPPROTO_ICMPV6 58
#define MPG_FLAGS_STRICT_REPLY_INVALID_REPLY_PORT (0x02ull << 56)
#define sv_destroyable(a) Perl_sv_destroyable(aTHX_ a)
#define is_HORIZWS_high(s) ( ( 0xE1 == ((const U8*)s)[0] ) ? ( ( ( 0x9A == ((const U8*)s)[1] ) && ( 0x80 == ((const U8*)s)[2] ) ) ? 3 : 0 ): ( 0xE2 == ((const U8*)s)[0] ) ? ( ( 0x80 == ((const U8*)s)[1] ) ? ( ( inRANGE_helper_(U8, ((const U8*)s)[2], 0x80, 0x8A) || 0xAF == ((const U8*)s)[2] ) ? 3 : 0 ) : ( ( 0x81 == ((const U8*)s)[1] ) && ( 0x9F == ((const U8*)s)[2] ) ) ? 3 : 0 ): ( ( ( 0xE3 == ((const U8*)s)[0] ) && ( 0x80 == ((const U8*)s)[1] ) ) && ( 0x80 == ((const U8*)s)[2] ) ) ? 3 : 0 )
#define sv_2cv(a,b,c,d) Perl_sv_2cv(aTHX_ a,b,c,d)
#define case_21_SBOX32(hash,state,key) _SBOX32_CASE(21,hash,state,key)
#define op_prepend_elem(a,b,c) Perl_op_prepend_elem(aTHX_ a,b,c)
#define PERL_ARGS_ASSERT_BYTES_FROM_UTF8 assert(s); assert(lenp); assert(is_utf8p)
#define HAS_STATIC_INLINE 
#define _CC_UTF8_START_BYTE_IS_FOR_AT_LEAST_SURROGATE 31
#define NGX_USE_AIO_EVENT 0x00000100
#define AF_NATM 31
#define pcre2_get_mark PCRE2_SUFFIX(pcre2_get_mark_)
#define TASK_THREAD_TIMES_INFO_COUNT ((mach_msg_type_number_t) (sizeof(task_thread_times_info_data_t) / sizeof(natural_t)))
#define PerlProc_getgid() getgid()
#define EVFILT_MACHPORT (-8)
#define AUDIT_TRAIL 0x0100
#define NGX_EINTR EINTR
#define SO_NP_EXTENSIONS 0x1083
#define PCRE2_NEWLINE_NUL 6
#define PRIdFAST16 PRId16
#define _STRUCT_TIMESPEC struct timespec
#define PERL_ARGS_ASSERT_SV_CMP_LOCALE 
#define _SA_FAMILY_T 
#define NGX_PEER_NEXT 2
#define gv_fetchmeth_sv_autoload(a,b,c,d) Perl_gv_fetchmeth_sv_autoload(aTHX_ a,b,c,d)
#define IV_MAX_P1 (2.0 * (1 + (((UV)IV_MAX) >> 1)))
#define s6_addr __u6_addr.__u6_addr8
#define seedDrand01(x) Perl_drand48_init((Rand_seed_t)x)
#define PERL_MY_SNPRINTF_POST_GUARD(len,max) PERL_UNUSED_VAR(len)
#define memEQs(s1,l,s2) (((sizeof(s2)-1) == (l)) && memEQ((s1), ("" s2 ""), (sizeof(s2)-1)))
#define PERL_ARGS_ASSERT_MG_CLEAR assert(sv)
#define PERL_ARGS_ASSERT_NEWGIVENOP assert(cond); assert(block)
#define HAS_DRAND48_PROTO 
#define POLICY_NULL 0
#define hv_delete(hv,key,klen,flags) (MUTABLE_SV(hv_common_key_len((hv), (key), (klen), (flags) | HV_DELETE, NULL, 0)))
#define PERL_MAGIC_TYPE_IS_VALUE_MAGIC(t) (PL_magic_data[(U8)(t)] & PERL_MAGIC_VALUE_MAGIC)
#define os_is_compile_time_constant(expr) __builtin_constant_p(expr)
#define NGX_MODULE_SIGNATURE_32 "1"
#define SSPOPBOOL (PL_savestack[--PL_savestack_ix].any_bool)
#define VM_SYNC_REUSABLEPAGES ((vm_sync_t) 0x40)
#define NGX_CONF_BLOCK_DONE 2
#define NGX_ECANCELED ECANCELED
#define RXf_PMf_EXTENDED_MORE (1U << (RXf_PMf_STD_PMMOD_SHIFT+4))
#define PF_IMPLINK AF_IMPLINK
#define NET_RT_FLAGS 2
#define SvIOK(sv) (SvFLAGS(sv) & SVf_IOK)
#define PRIdFAST32 PRId32
#define EISCONN 56
#define DUP_WARNINGS(p) Perl_dup_warnings(aTHX_ p)
#define SIOCRSLVMULTI _IOWR('i', 59, struct rslvmulti_req)
#define S_ISLNK(m) (((m) & S_IFMT) == S_IFLNK)
#define INET6_ADDRSTRLEN 46
#define OPpMULTICONCAT_APPEND 0x40
#define RX_NPARENS(rx_sv) (RXp_NPARENS(ReANY(rx_sv)))
#define PMf_GLOBAL (1U<<(PMf_BASE_SHIFT+9))
#define __TVOS_10_0 100000
#define __TVOS_10_1 100100
#define __TVOS_10_2 100200
#define PERL_DTRACE_PROBE_ENTRY(cv) 
#define SVpav_REAL 0x40000000
#define PERL_ARGS_ASSERT_DIRP_DUP assert(param)
#define KERN_KDREADCURTHRMAP 21
#define sv_utf8_upgrade_nomg(sv) sv_utf8_upgrade_flags(sv, 0)
#define kLISTOP cLISTOPx(kid)
#define case_188_SBOX32(hash,state,key) 
#define MDEREF_FLAG_last 0x40
#define PAGE_MAX_SIZE (1 << PAGE_MAX_SHIFT)
#define isPUNCT_LC_utf8(p,e) isPUNCT_LC_utf8_safe(p, e)
#define VM_PURGABLE_SET_STATE_FROM_KERNEL ((vm_purgable_t) 3)
#define BmPREVIOUS(sv) 0
#define CAN64BITHASH 
#define _BSD_PTRDIFF_T_ 
#define MACH_MSGH_BITS_OTHER(bits) ((bits) &~ MACH_MSGH_BITS_PORTS_MASK)
#define PL_numeric_underlying_is_standard (vTHX->Inumeric_underlying_is_standard)
#define OPpASSIGN_BACKWARDS 0x40
#define SV_CONSTS_COUNT 35
#define STANDARD_C 
#define AF_UNIX 1
#define sv_setiv_mg(a,b) Perl_sv_setiv_mg(aTHX_ a,b)
#define ngx_del_event ngx_event_actions.del
#define ENV_LOCK PERL_WRITE_LOCK(&PL_env_mutex)
#define SLIST_FOREACH_SAFE(var,head,field,tvar) for ((var) = SLIST_FIRST((head)); (var) && ((tvar) = SLIST_NEXT((var), field), 1); (var) = (tvar))
#define PL_stack_base (vTHX->Istack_base)
#define TCPOPT_SACK_PERMITTED 4
#define PCRE2_INFO_FIRSTCODETYPE 6
#define to_uni_fold(c,p,lenp) _to_uni_fold_flags(c, p, lenp, FOLD_FLAGS_FULL)
#define F_FINDSIGS 78
#define EUSERS 68
#define F_SETPROTECTIONCLASS 64
#define PERL_ARGS_ASSERT_PARSER_DUP assert(param)
#define _VA_LIST_T_H 
#define _LOCALE_H_ 
#define __INT8_MAX__ 0x7f
#define __PIC__ 2
#define RX_TAINT_on(rx_sv) (RX_EXTFLAGS(rx_sv) |= RXf_TAINTED)
#define MACH_RCV_TRAILER_ELEMENTS(x) (((x) & 0xf) << 24)
#define PRIdFAST64 PRId64
#define KERN_HOSTID 11
#define HINT_NEW_RE 0x00010000
#define __UINT_FAST32_TYPE__ unsigned int
#define _SC_PAGE_SIZE _SC_PAGESIZE
#define STAILQ_REMOVE(head,elm,type,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH do { if (STAILQ_FIRST((head)) == (elm)) { STAILQ_REMOVE_HEAD((head), field); } else { struct type *curelm = STAILQ_FIRST((head)); while (STAILQ_NEXT(curelm, field) != (elm)) curelm = STAILQ_NEXT(curelm, field); STAILQ_REMOVE_AFTER(head, curelm, field); } TRASHIT((elm)->field.stqe_next); } while (0) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define PERL_ARGS_ASSERT_SVTRUE_COMMON assert(sv)
#define FreeOp(p) Perl_Slab_Free(aTHX_ p)
#define sv_force_normal_flags(a,b) Perl_sv_force_normal_flags(aTHX_ a,b)
#define LOCALTIME_MAX 67768036191676799
#define UNDERFLOW 4
#define __FLT32X_NORM_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define CX_LEAVE_SCOPE(cx) LEAVE_SCOPE(cx->blk_oldsaveix)
#define dPOPTOPssrl dPOPXssrl(TOP)
#define PERL_ARGS_ASSERT_PMOP_DUMP 
#define PERL_ARGS_ASSERT_OP_CLASS 
#define EV_POLL EV_FLAG0
#define HW_BUS_FREQ 14
#define ngx_read_dir_n "readdir()"
#define TASK_POWER_INFO_V2_COUNT ((mach_msg_type_number_t) (sizeof (task_power_info_v2_data_t) / sizeof (natural_t)))
#define PAD_COMPNAME_PV(po) PadnamePV(PAD_COMPNAME(po))
#define I386_EXCEPTION_STATE_COUNT i386_EXCEPTION_STATE_COUNT
#define IPPROTO_PUP 12
#define _NGX_SHMEM_H_INCLUDED_ 
#define __FLT_MAX__ 3.40282346638528859811704183484516925e+38F
#define MAX(a,b) (((a)>(b))?(a):(b))
#define DOUBLE_IS_IEEE_754_32_BIT_BIG_ENDIAN 2
#define isALNUMC_LC_utf8_safe(p,e) isALPHANUMERIC_LC_utf8_safe(p,e)
#define CPU_SUBTYPE_X86_ARCH1 ((cpu_subtype_t)4)
#define TIOCGDRAINWAIT _IOR('t', 86, int)
#define _POSIX_MQ_OPEN_MAX 8
#define MACH_MSG_DESCRIPTOR_NULL (mach_msg_descriptor_t *) 0
#define _PERL_HASH_SEED_STATE(seed,state) STMT_START { __PERL_HASH_SEED_STATE(seed,state); sbox32_seed_state96(seed + __PERL_HASH_SEED_BYTES, state + __PERL_HASH_STATE_BYTES); } STMT_END
#define blk_oldsaveix cx_u.cx_blk.blku_oldsaveix
#define save_destructor(a,b) Perl_save_destructor(aTHX_ a,b)
#define _IO(g,n) _IOC(IOC_VOID, (g), (n), 0)
#define PERL_ARGS_ASSERT_UVOFFUNI_TO_UTF8_FLAGS assert(d)
#define NGX_HTTP_UPSTREAM_FAIL_TIMEOUT 0x0008
#define CLUMP_2IV(uv) ((uv) > (UV)IV_MAX ? IV_MAX : (IV)(uv))
#define MEM_ALIGNBYTES 8
#define ngx_change_file_access_n "chmod()"
#define newWHENOP(a,b) Perl_newWHENOP(aTHX_ a,b)
#define is_utf8_char_buf(buf,buf_end) isUTF8_CHAR(buf, buf_end)
#define SA_NOCLDWAIT 0x0020
#define KERN_NOT_WAITING 48
#define host_set_sysdiagnose_port(host,port) (host_set_special_port((host), HOST_SYSDIAGNOSE_PORT, (port)))
#define LVf_OUT_OF_RANGE 0x4
#define NGX_LOG_DEBUG_CONNECTION 0x80000000
#define PerlSIO_fgetc(f) fgetc(f)
#define safefree safesysfree
#define PerlMemShared_is_locked() 0
#define PerlSIO_fgets(s,n,f) fgets(s,n,f)
#define VALID_THREAD_STATE_FLAVOR(x) ((x == x86_THREAD_STATE32) || (x == x86_FLOAT_STATE32) || (x == x86_EXCEPTION_STATE32) || (x == x86_DEBUG_STATE32) || (x == x86_THREAD_STATE64) || (x == x86_THREAD_FULL_STATE64) || (x == x86_FLOAT_STATE64) || (x == x86_EXCEPTION_STATE64) || (x == x86_DEBUG_STATE64) || (x == x86_THREAD_STATE) || (x == x86_FLOAT_STATE) || (x == x86_EXCEPTION_STATE) || (x == x86_DEBUG_STATE) || (x == x86_AVX_STATE32) || (x == x86_AVX_STATE64) || (x == x86_AVX_STATE) || (x == x86_AVX512_STATE32) || (x == x86_AVX512_STATE64) || (x == x86_AVX512_STATE) || (x == x86_PAGEIN_STATE) || (x == x86_INSTRUCTION_STATE) || (x == x86_LAST_BRANCH_STATE) || (x == THREAD_STATE_NONE))
#define USE_GRENT_PTR 
#define ARCHLIB "/usr/local/Cellar/perl/5.34.0/lib/perl5/5.34.0/darwin-thread-multi-2level"
#define GvIMPORTED_SV_on(gv) (GvFLAGS(gv) |= GVf_IMPORTED_SV)
#define I_LIMITS 
#define minor(x) ((int32_t)((x) & 0xffffff))
#define EXC_MASK_ALL (EXC_MASK_BAD_ACCESS | EXC_MASK_BAD_INSTRUCTION | EXC_MASK_ARITHMETIC | EXC_MASK_EMULATION | EXC_MASK_SOFTWARE | EXC_MASK_BREAKPOINT | EXC_MASK_SYSCALL | EXC_MASK_MACH_SYSCALL | EXC_MASK_RPC_ALERT | EXC_MASK_RESOURCE | EXC_MASK_GUARD | EXC_MASK_MACHINE)
#define TIOCCDTR _IO('t', 120)
#define TAINT_WARN_get (PL_taint_warn)
#define PAD_COMPNAME_SV(po) (PadnamelistARRAY(PL_comppad_name)[(po)])
#define PTHREAD_MUTEX_RECURSIVE 2
#define SvIVX(sv) ((XPVIV*) SvANY(sv))->xiv_iv
#define MSVC_DIAG_IGNORE(x) 
#define NGX_LOG_DEBUG_ALL 0x7ffffff0
#define PL_defstash (vTHX->Idefstash)
#define _POSIX_TRACE_EVENT_NAME_MAX 30
#define __INT32_TYPE__ int
#define SvIVx(sv) ({SV *_sv = MUTABLE_SV(sv); SvIV(_sv); })
#define PERL_ARGS_ASSERT_GET_PPADDR 
#define __IPV6_ADDR_SCOPE_ORGLOCAL 0x08
#define SvROK_on(sv) (SvFLAGS(sv) |= SVf_ROK)
#define HAS_STRCOLL 
#define HAS_PASSWD 
#define _SBOX32_CASE(len,hash,state,key) case len: hash ^= state[ 1 + ( 256 * ( len - 1 ) ) + key[ len - 1 ] ];
#define LIST_CHECK_NEXT(elm,field) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_4(x) 
#define leave_scope(a) Perl_leave_scope(aTHX_ a)
#define IPV6_RTHDR_STRICT 1
#define pcre2_code PCRE2_SUFFIX(pcre2_code_)
#define PCRE2_DOLLAR_ENDONLY 0x00000010u
#define SS_ADD_END(need) assert((need) <= SS_MAXPUSH); ix += (need); PL_savestack_ix = ix; assert(ix <= PL_savestack_max + SS_MAXPUSH); if (UNLIKELY(ix > PL_savestack_max)) savestack_grow(); assert(PL_savestack_ix <= PL_savestack_max);
#define __INT_LEAST32_WIDTH__ 32
#define PF_APPLETALK AF_APPLETALK
#define PERL_ARGS_ASSERT_VIVIFY_REF assert(sv)
#define PCRE2_ERROR_INTERNAL_PARSED_OVERFLOW 163
#define PERL_ARGS_ASSERT_SV_REFTYPE assert(sv)
#define PERL_VERSION_EQ(j,n,p) (((p) == '*') ? ( (j) == PERL_VERSION_MAJOR && (n) == PERL_VERSION_MINOR) : (PERL_DECIMAL_VERSION_ == PERL_JNP_TO_DECIMAL_(j,n,p)))
#define NGX_HTTP_LOG_PATH "logs/access.log"
#define __PERL_HASH_SEED_roundup(x,y) ( ( ( (x) + ( (y) - 1 ) ) / (y) ) * (y) )
#define PERL_ARGS_ASSERT_DIE_NOCONTEXT 
#define REENTRANT_PROTO_V_ID 73
#define PCRE2_ERROR_BACKSLASH_C_CALLER_DISABLED 183
#define CvISXSUB(cv) (CvFLAGS(cv) & CVf_ISXSUB)
#define RX_BUFF_IDX_CARET_FULLMATCH -3
#define PCRE2_ERROR_NOMEMORY (-48)
#define MCAST_BLOCK_SOURCE 84
#define CPUFAMILY_POWERPC_G3 0xcee41549
#define UTF8_DISALLOW_FE_FF UTF8_DISALLOW_PERL_EXTENDED
#define MUTABLE_AV(p) ((AV *)MUTABLE_PTR(p))
#define G_EVAL 0x8
#define RV2CVOPCV_RETURN_STUB 0x00000004
#define FIXINC_WRAP_STDIO_H_STDIO_STDARG_H 1
#define IN_CLASSA_NET 0xff000000
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_15_1(x) x
#define _QUAD_HIGHWORD 1
#define UINT8_C(v) (v)
#define PERL_ARGS_ASSERT_PERL_SETLOCALE 
#define MACH_SEND_INVALID_HEADER 0x10000010
#define PL_srand_called (vTHX->Isrand_called)
#define CRLF "\r\n"
#define VM_LEDGER_TAG_MAX 0x00000005
#define PERL_VERSION_GE(j,n,p) (! PERL_VERSION_LT(j,n,p))
#define LONG_DOUBLE_IS_UNKNOWN_FORMAT -1
#define PERL_MAGIC_VTABLE_MASK 0x3F
#define PERL_ARGS_ASSERT_SV_CATPV assert(dsv)
#define _POSIX2_C_BIND 200112L
#define PERL_VERSION_GT(j,n,p) (! PERL_VERSION_LE(j,n,p))
#define PERL_ARGS_ASSERT_AV_COUNT assert(av)
#define PF_UTUN AF_UTUN
#define EV_UDATA_SPECIFIC 0x0100
#define LOCALTIME_MIN -62167219125
#define pcre2_substring_nametable_scan PCRE2_SUFFIX(pcre2_substring_nametable_scan_)
#define THREAD_STATE_FLAVOR_LIST_10_13 130
#define STATUS_WORD(rpl,ipl) (((ipl) << 8) | (rpl))
#define __UINTMAX_MAX__ 0xffffffffffffffffUL
#define _POSIX_V7_ILP32_OFFBIG __ILP32_OFFBIG
#define PERL_ARGS_ASSERT_SV_SETSV_MG assert(dsv)
#define MAP_MEM_WTHRU 3
#define USER_ADDR_NULL ((user_addr_t) 0)
#define TIOCGSIZE TIOCGWINSZ
#define PerlSIO_fileno(f) fileno(f)
#define PERL_ARGS_ASSERT_YYQUIT 
#define SOCKET_OPEN_MODE PIPESOCK_MODE
#define STATUS_EXIT STATUS_UNIX
#define PL_origalen (vTHX->Iorigalen)
#define NGX_ABORT -6
#define GV_CACHE_ONLY 0x1000
#define PERL_TSA_PT_GUARDED_BY(x) PERL_TSA__(pt_guarded_by(x))
#define GETPWNAM_R_PROTO REENTRANT_PROTO_I_CSBWR
#define XPUSHs(s) STMT_START { EXTEND(sp,1); *++sp = (s); } STMT_END
#define HAS_DLERROR 
#define REENTRANT_PROTO_S_LISBI 62
#define HAS_FSTATFS 
#define ngx_is_dir(sb) (S_ISDIR((sb)->st_mode))
#define NGX_HAVE_GCC_BSWAP64 1
#define sv_catpvf_mg Perl_sv_catpvf_mg_nocontext
#define ENOPOLICY 103
#define case_248_SBOX32(hash,state,key) 
#define MACH_SEND_INVALID_NOTIFY 0x1000000b
#define NGX_NO_RESOLVER (void *) -1
#define RX_CHECK_SUBSTR(rx_sv) (ReANY(rx_sv)->check_substr)
#define EAGAIN 35
#define toCTRL(c) (__ASSERT_(FITS_IN_8_BITS(c)) toUPPER(((U8)(c))) ^ 64)
#define TOPpx (SvPV_nolen(TOPs))
#define PERL_ARGS_ASSERT_OP_SIBLING_SPLICE 
#define host_get_automountd_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_AUTOMOUNTD_PORT, (port)))
#define HAS_GETTIMEOFDAY 
#define EXC_I386_DBLFLT 8
#define unpackstring(a,b,c,d,e) Perl_unpackstring(aTHX_ a,b,c,d,e)
#define __LDBL_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951L
#define PadnameOURSTASH_set(pn,s) (PadnameOURSTASH(pn) = (s))
#define MACH_MSGH_BITS_REMOTE_MASK 0x0000001f
#define cPADOPo cPADOPx(o)
#define PROC_FLAG_DARWINBG 0x8000
#define CopFILEAV(c) (CopFILE(c) ? GvAV(gv_fetchfile(CopFILE(c))) : NULL)
#define UTF_TO_NATIVE(ch) I8_TO_NATIVE_UTF8(ch)
#define COMBINING_DOT_ABOVE_UTF8 "\xCC\x87"
#define cPADOPx(o) ((PADOP*)(o))
#define PerlSock_gethostent gethostent
#define CIRCLEQ_EMPTY(head) ((head)->cqh_first == (void *)(head))
#define ckWARN(w) Perl_ckwarn(aTHX_ packWARN(w))
#define SAVEt_REGCONTEXT 3
#define __INT16_C(c) c
#define _generic_LC_uvchr(latin1,above_latin1,c) (c < 256 ? latin1(c) : above_latin1(c))
#define GROK_NUMERIC_RADIX(sp,send) grok_numeric_radix(sp, send)
#define _CTERMID_H_ 
#define USE_NSGETEXECUTABLEPATH 
#define PWCHANGE 
#define VM_MEMORY_WEBCORE_PURGEABLE_BUFFERS 69
#define case_12_SBOX32(hash,state,key) _SBOX32_CASE(12,hash,state,key)
#define MS_INVALIDATE 0x0002
#define DEBUG_f_TEST (0)
#define A_OLDGETCOND 20
#define _PATH_SMP_DB "/etc/spwd.db"
#define NV_NAN_PAYLOAD_MASK_IEEE_754_64_BE 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
#define _DIRENT_H_ 
#define _STRUCT_OPMASK_REG struct __darwin_opmask_reg
#define FD_CLR(n,p) __DARWIN_FD_CLR(n, p)
#define _NGX_ATOMIC_H_INCLUDED_ 
#define SvIVXx(sv) SvIVX(sv)
#define timersub(tvp,uvp,vvp) do { (vvp)->tv_sec = (tvp)->tv_sec - (uvp)->tv_sec; (vvp)->tv_usec = (tvp)->tv_usec - (uvp)->tv_usec; if ((vvp)->tv_usec < 0) { (vvp)->tv_sec--; (vvp)->tv_usec += 1000000; } } while (0)
#define PERL_ARGS_ASSERT_CUSTOM_OP_DESC assert(o)
#define PERL_ARGS_ASSERT_TRY_AMAGIC_UN 
#define cv_clone(a) Perl_cv_clone(aTHX_ a)
#define DEBUG_S_FLAG 0x00010000
#define ngx_tm_isdst tm_isdst
#define PERL_VERSION_LE(j,n,p) (PERL_DECIMAL_VERSION_ < PERL_JNP_TO_DECIMAL_( (j), (((p) == '*') ? ((n)+1) : (n)), (((p) == '*') ? 0 : p)))
#define CXt_LOOP_LAZYIV 6
#define CPU_SUBTYPE_POWERPC_604 ((cpu_subtype_t) 6)
#define PCRE2_CONVERT_GLOB 0x00000010u
#define PERL_IS_SUBWORD_ADDR(x) (1 & ( PTR2nat(x) | ( PTR2nat(x) >> 1) | ( ( (PTR2nat(x) & PERL_WORD_BOUNDARY_MASK) >> 2))))
#define HOST_CAN_HAS_DEBUGGER 11
#define ngx_open_glob_n "glob()"
#define case_96_SBOX32(hash,state,key) 
#define PL_vtbl_vec PL_magic_vtables[want_vtbl_vec]
#define VOL_CAP_FMT_NO_ROOT_TIMES 0x00000020
#define WARN_EXPERIMENTAL__UNIPROP_WILDCARDS 71
#define __TVOS_14_2 140200
#define errno (*__error())
#define pcre2_serialize_get_number_of_codes PCRE2_SUFFIX(pcre2_serialize_get_number_of_codes_)
#define host_set_audit_control_port(host,port) (host_set_special_port((host), HOST_AUDIT_CONTROL_PORT, (port)))
#define EPROGMISMATCH 75
#define NOTE_TRACKERR 0x00000002
#define SvREADONLY_on(sv) (SvFLAGS(sv) |= SVf_READONLY)
#define UTF8_MAX_FOLD_CHAR_EXPAND 3
#define PL_utf8_charname_continue (vTHX->Iutf8_charname_continue)
#define PCRE2_INFO_FRAMESIZE 24
#define _USER_SIGNAL_H 
#define NGX_LOG_DEBUG_FIRST NGX_LOG_DEBUG_CORE
#define PL_watchaddr (vTHX->Iwatchaddr)
#define SF_DATALESS 0x40000000
#define MACH_RCV_INVALID_NAME 0x10004002
#define CLOCK_ALARM_MINRES 4
#define isSPACE_utf8(p,e) isSPACE_utf8_safe(p, e)
#define TASK_EXC_GUARD_VM_FATAL 0x08
#define PERL_VERSION_NE(j,n,p) (! PERL_VERSION_EQ(j,n,p))
#define isALPHA_LC(c) _generic_LC(c, _CC_ALPHA, isalpha)
#define PerlIO_read(a,b,c) Perl_PerlIO_read(aTHX_ a,b,c)
#define TOPul ((unsigned long)SvUV(TOPs))
#define CPUSUBFAMILY_ARM_HC_HD 5
#define _SYS_UIO_H_ 
#define __OS_STRINGIFY(s) #s
#define PCRE2_ERROR_DEPTHLIMIT (-53)
#define magic_dump(a) Perl_magic_dump(aTHX_ a)
#define DOMAIN 1
#define TCP_MINMSS 216
#define tTHX PerlInterpreter*
#define UTF8_IS_INVARIANT(c) UVCHR_IS_INVARIANT((c) | 0)
#define NGX_ECONNREFUSED ECONNREFUSED
#define SM_SHARED 4
#define PerlSock_ntohl(x) ntohl(x)
#define NOTE_BACKGROUND 0x00000040
#define SAVESETSVFLAGS(sv,mask,val) save_set_svflags(sv,mask,val)
#define CPU_SUBTYPE_ARM_V7 ((cpu_subtype_t) 9)
#define NGX_PCRE2 1
#define PerlSock_ntohs(x) ntohs(x)
#define RXapif_SCALAR 0x0020
#define NGX_HAVE_SYS_PARAM_H 1
#define _NGX_MODULE_H_INCLUDED_ 
#define CPU_SUBTYPE_VAX8650 ((cpu_subtype_t) 10)
#define MNT_QUARANTINE 0x00000400
#define MACH_PORT_QLIMIT_ZERO (0)
#define RMS_IFI 0
#define PERL_ARGS_ASSERT_PARSE_STMTSEQ 
#define PerlIO_clearerr(a) Perl_PerlIO_clearerr(aTHX_ a)
#define BC_STRING_MAX 1000
#define GLOB_ABORTED (-2)
#define _SC_BC_DIM_MAX 10
#define op_lvalue(op,t) Perl_op_lvalue_flags(aTHX_ op,t,0)
#define SvCOMPILED(sv) 0
#define LOCALE_TERM STMT_START { MUTEX_DESTROY(&PL_locale_mutex); LOCALE_TERM_LC_NUMERIC_; LOCALE_TERM_POSIX_2008_; } STMT_END
#define IPV6_2292NEXTHOP 21
#define PL_argvoutgv (vTHX->Iargvoutgv)
#define PERL_ARGS_ASSERT_HV_ITERVAL assert(hv); assert(entry)
#define USE_REENTRANT_API 
#define TH_URG 0x20
#define PerlEnv_free_childdir(d) free_childdir((d))
#define CopFILEGV(c) (CopFILE(c) ? gv_fetchfile(CopFILE(c)) : NULL)
#define CLD_KILLED 2
#define FF_DECIMAL 12
#define KEV_DL_SIFMETRICS 2
#define VFS_CTL_TIMEO 0x00010005
#define IPCTL_RTMAXCACHE 7
#define isIDFIRST_LC_utf8_safe(p,e) _generic_LC_func_utf8_safe(isIDFIRST_LC, _is_utf8_perl_idstart, p, e)
#define STRERROR_R_PROTO REENTRANT_PROTO_I_IBW
#define FBMrf_MULTILINE 1
#define SHUT_RD 0
#define _CT_RUNE_T 
#define __unreachable_ok_push _Pragma("GCC diagnostic push") _Pragma("GCC diagnostic ignored \"-Wunreachable-code\"")
#define isALPHA_FOLD_EQ(c1,c2) (__ASSERT_(isALPHA_A(c1) || isALPHA_A(c2)) ((c1) & ~('A' ^ 'a')) == ((c2) & ~('A' ^ 'a')))
#define SVf_IOK 0x00000100
#define PL_TR_SPECIAL_HANDLING_UTF8 (vTHX->ITR_SPECIAL_HANDLING_UTF8)
#define KEV_INET6_NEW_USER_ADDR 1
#define VM_MEMORY_CGIMAGE 52
#define HAS_CBRT 
#define VM_PURGABLE_STATE_MIN 0
#define EXC_MACF_MAX 0x2FFFF
#define I_MALLOCMALLOC 
#define PERL_ARGS_ASSERT_NEW_STACKINFO 
#define blk_gimme cx_u.cx_blk.blku_gimme
#define PERL_ARGS_ASSERT_LEX_GROW_LINESTR 
#define x86_AVX512_STATE64_COUNT ((mach_msg_type_number_t) (sizeof(x86_avx512_state64_t)/sizeof(unsigned int)))
#define KERN_THREADNAME 71
#define U8_MAX UINT8_MAX
#define DOUBLE_IS_IEEE_754_64_BIT_MIXED_ENDIAN_LE_BE 7
#define VM_REGION_TOP_INFO_COUNT ((mach_msg_type_number_t) (sizeof(vm_region_top_info_data_t) / sizeof(natural_t)))
#define A_GETCOND 37
#define csighandler1 Perl_csighandler1
#define csighandler3 Perl_csighandler3
#define save_adelete(a,b) Perl_save_adelete(aTHX_ a,b)
#define PERL_VERSION_MINOR PERL_VERSION
#define IOPOL_THROTTLE 3
#define EXC_MASK_CORPSE_NOTIFY (1 << EXC_CORPSE_NOTIFY)
#define AF_IPX 23
#define OA_OPTIONAL 8
#define HAS_GETPAGESIZE 
#define GMTIME_R_PROTO REENTRANT_PROTO_S_TS
#define PERL_ARGS_ASSERT_IS_UTF8_STRING_LOC_FLAGS 
#define CPU_TYPE_POWERPC ((cpu_type_t) 18)
#define PERL_USHORT_MAX ((unsigned short)USHRT_MAX)
#define MACH_PORT_QLIMIT_MAX MACH_PORT_QLIMIT_LARGE
#define PMf_NOCAPTURE (1U<<5)
#define is_SURROGATE_utf8_safe(s,e) ( ( ( ( ( ((e) - (s)) >= 3 ) && ( 0xED == ((const U8*)s)[0] ) ) && ( inRANGE_helper_(U8, ((const U8*)s)[1], 0xA0, 0xBF) ) ) && ( inRANGE_helper_(U8, ((const U8*)s)[2], 0x80, 0xBF) ) ) ? 3 : 0 )
#define OPpPADRANGE_COUNTMASK 0x7f
#define PMf_CONTINUE (1U<<(PMf_BASE_SHIFT+10))
#define lex_read_unichar(a) Perl_lex_read_unichar(aTHX_ a)
#define case_197_SBOX32(hash,state,key) 
#define NGX_HTTP_AIO_THREADS 2
#define ngx_http_upstream_rr_peer_unlock(peers,peer) if (peers->shpool) { ngx_rwlock_unlock(&peer->lock); }
#define PCRE2_ERROR_UTF32_ERR1 (-27)
#define OPpLVAL_DEFER 0x40
#define NGX_FILE_NOFOLLOW O_NOFOLLOW
#define MACH_MSG_TYPE_LAST 22
#define newMYSUB(a,b,c,d,e) Perl_newMYSUB(aTHX_ a,b,c,d,e)
#define NGX_OPEN_FILE_DIRECTIO_OFF NGX_MAX_OFF_T_VALUE
#define PCRE2_ERROR_UTF32_ERR2 (-28)
#define VOL_CAP_INT_READDIRATTR 0x00000008
#define EXC_GUARD 12
#define PERL_ARGS_ASSERT_MAGIC_SETISA assert(sv); assert(mg)
#define DEBUG_r_TEST_ UNLIKELY(PL_debug & DEBUG_r_FLAG)
#define PERL_ARGS_ASSERT_HV_NAME_SET assert(hv)
#define __enum_open 
#define isUPPER_utf8_safe(p,e) _generic_invlist_utf8_safe(_CC_UPPER, p, e)
#define __MAC_10_12 101200
#define _V6_LPBIG_OFFBIG __LPBIG_OFFBIG
#define SLIST_REMOVE_HEAD(head,field) do { SLIST_FIRST((head)) = SLIST_NEXT(SLIST_FIRST((head)), field); } while (0)
#define MAXFRAG 8
#define PERLDB_ALL (PERLDBf_SUB | PERLDBf_LINE | PERLDBf_NOOPT | PERLDBf_INTER | PERLDBf_SUBLINE| PERLDBf_SINGLE| PERLDBf_NAMEEVAL| PERLDBf_NAMEANON | PERLDBf_SAVESRC)
#define HAS_STRTOLD 
#define COND_BROADCAST(c) STMT_START { int _eC_; if ((_eC_ = pthread_cond_broadcast((c)))) Perl_croak_nocontext("panic: COND_BROADCAST (%d) [%s:%d]", _eC_, __FILE__, __LINE__); } STMT_END
#define HAS_STRTOLL 
#define NV_MANT_DIG DBL_MANT_DIG
#define __POSIX_C_DEPRECATED(ver) ___POSIX_C_DEPRECATED_STARTING_ ##ver
#define new_version(a) Perl_new_version(aTHX_ a)
#define SvIsUV_on(sv) (SvFLAGS(sv) |= SVf_IVisUV)
#define TCPOLEN_WINDOW 3
#define _MACH_MACHINE_PROCESSOR_INFO_H_ 
#define dounwind(a) Perl_dounwind(aTHX_ a)
#define unpackWARN3(x) (((x) >>16) & 0xFF)
#define ONCE_PAT_MODS "o"
#define AF_ISO 7
#define WARN_EXPERIMENTAL__PRIVATE_USE 70
#define RX_SUBBEG(rx_sv) (RXp_SUBBEG(ReANY(rx_sv)))
#define FD_ZERO(p) __DARWIN_FD_ZERO(p)
#define VM_PROT_DEFAULT (VM_PROT_READ|VM_PROT_WRITE)
#define EXC_I386_INVOPFLT 6
#define NGX_HTTP_VAR_INDEXED 4
#define PERL_ARGS_ASSERT_CSIGHANDLER1 
#define ngx_queue_add(h,n) (h)->prev->next = (n)->next; (n)->next->prev = (h)->prev; (h)->prev = (n)->prev; (h)->prev->next = h;
#define ngx_conf_merge_bufs_value(conf,prev,default_num,default_size) if (conf.num == 0) { if (prev.num) { conf.num = prev.num; conf.size = prev.size; } else { conf.num = default_num; conf.size = default_size; } }
#define VOL_CAP_FMT_SHARED_SPACE 0x00800000
#define SHUT_WR 1
#define FLT_MAX __FLT_MAX__
#define GvIMPORTED_AV_off(gv) (GvFLAGS(gv) &= ~GVf_IMPORTED_AV)
#define PERL_ARGS_ASSERT_UVCHR_TO_UTF8_FLAGS 
#define VOL_CAP_INT_ALLOCATE 0x00000040
#define VM_REGION_SUBMAP_SHORT_INFO_COUNT_64 ((mach_msg_type_number_t) (sizeof (vm_region_submap_short_info_data_64_t) / sizeof (natural_t)))
#define _POSIX_THREAD_ATTR_STACKADDR 200112L
#define SEM_A 0200
#define __INT_LEAST64_WIDTH__ 64
#define OPf_FOLDED (1<<16)
#define isGRAPH(c) isGRAPH_A(c)
#define IOPOL_MATERIALIZE_DATALESS_FILES_ON 2
#define HINT_RE_EVAL 0x00200000
#define INT_LEAST16_MAX INT16_MAX
#define __AVAILABILITY_INTERNAL_WEAK_IMPORT __attribute__((weak_import))
#define PRIoLEAST8 PRIo8
#define _CS_POSIX_V6_ILP32_OFF32_LIBS 4
#define pcre2_set_compile_recursion_guard PCRE2_SUFFIX(pcre2_set_compile_recursion_guard_)
#define SCNuLEAST32 SCNu32
#define _POSIX_SAVED_IDS 200112L
#define to_uni_title(a,b,c) Perl_to_uni_title(aTHX_ a,b,c)
#define sv_does_pv(a,b,c) Perl_sv_does_pv(aTHX_ a,b,c)
#define CPU_SUBTYPE_ANY ((cpu_subtype_t) -1)
#define PERL_ARGS_ASSERT_CX_POPSUB assert(cx)
#define SO_RCVTIMEO 0x1006
#define PERL_MAGIC_VALUE_MAGIC 0x80
#define WARN_MALLOC 25
#define PERL_MAGIC_substr 'x'
#define PCRE2_H_IDEMPOTENT_GUARD 
#define __P(protos) protos
#define _RMFILE_OK (1<<14)
#define IOPOL_TYPE_VFS_ATIME_UPDATES 2
#define KERN_PROCDELAYTERM 53
#define grok_bin(s,lp,fp,rp) grok_bin_oct_hex(s, lp, fp, rp, 1, _CC_BINDIGIT, 'b')
#define NOCRED ((kauth_cred_t )0)
#define P_DIRTY_MARKED 0x00000080
#define PERL_HASH_STATE_WORDS (PERL_HASH_STATE_BYTES/__PERL_HASH_WORD_SIZE)
#define __IPHONE_9_0 90000
#define __IPHONE_9_1 90100
#define dNOOP struct Perl___notused_struct
#define __IPHONE_9_3 90300
#define NGX_HAVE_SYS_FILIO_H 1
#define LATIN_CAPITAL_LETTER_A_WITH_RING_ABOVE_NATIVE 0xC5
#define HASATTRIBUTE_UNUSED 
#define ibcmp(s1,s2,len) cBOOL(! foldEQ(s1, s2, len))
#define ngx_strncmp(s1,s2,n) strncmp((const char *) s1, (const char *) s2, n)
#define OID_AUTO_START 100
#define sv_usepvn_mg(sv,p,l) sv_usepvn_flags(sv, p, l, SV_SMAGIC)
#define UNICODE_IS_NONCHAR(uv) ( UNICODE_IS_32_CONTIGUOUS_NONCHARS(uv) || ( LIKELY( ! UNICODE_IS_SUPER(uv)) && UNICODE_IS_END_PLANE_NONCHAR_GIVEN_NOT_SUPER(uv)))
#define PERL_WRITE_MSG_TO_CONSOLE(io,msg,len) PerlIO_write(io, msg, len)
#define CvCLONE_on(cv) (CvFLAGS(cv) |= CVf_CLONE)
#define PL_custom_ops (vTHX->Icustom_ops)
#define WARN_DIGIT 31
#define O_BINARY 0
#define NMBCLUSTERS ((1024 * 1024) / MCLBYTES)
#define _generic_utf8_safe_no_upper_latin1(classnum,p,e,above_latin1) (__ASSERT_(_utf8_safe_assert(p, e)) (UTF8_IS_INVARIANT(*(p))) ? _generic_isCC(*(p), classnum) : (UTF8_IS_DOWNGRADEABLE_START(*(p))) ? 0 : above_latin1)
#define NGX_HTTP_CACHE_STALE 4
#define isALPHANUMERIC_A(c) _generic_isCC_A(c, _CC_ALPHANUMERIC)
#define PCRE2_ERROR_VERB_UNKNOWN 160
#define SAE_ASSOCID_ALL ((sae_associd_t)(-1ULL))
#define EXC_MACF_MIN 0x20000
#define IN6_IS_ADDR_MC_NODELOCAL(a) (IN6_IS_ADDR_MULTICAST(a) && (__IPV6_ADDR_MC_SCOPE(a) == __IPV6_ADDR_SCOPE_NODELOCAL))
#define isWORDCHAR_L1(c) _generic_isCC(c, _CC_WORDCHAR)
#define _U_SHORT 
#define case_114_SBOX32(hash,state,key) 
#define saferealloc safesysrealloc
#define NGX_CHANGEBIN_SIGNAL USR2
#define IP_UNBLOCK_SOURCE 73
#define isWORDCHAR_LC(c) _generic_LC_underscore(c, _CC_WORDCHAR, isalnum)
#define U8_MIN PERL_UCHAR_MIN
#define SvCANEXISTDELETE(sv) (!SvRMAGICAL(sv) || !(mg = mg_find((const SV *) sv, PERL_MAGIC_tied)) || ( (stash = SvSTASH(SvRV(SvTIED_obj(MUTABLE_SV(sv), mg)))) && gv_fetchmethod_autoload(stash, "EXISTS", TRUE) && gv_fetchmethod_autoload(stash, "DELETE", TRUE) ) )
#define HW_MODEL 2
#define VM_LOADAVG 2
#define taint_env() Perl_taint_env(aTHX)
#define S_ISCHR(m) (((m) & S_IFMT) == S_IFCHR)
#define sv_setref_nv(a,b,c) Perl_sv_setref_nv(aTHX_ a,b,c)
#define EVFILT_FS (-9)
#define PERL_ARGS_ASSERT_QERROR assert(err)
#define cUNOP_AUXo cUNOP_AUXx(o)
#define NGX_HTTP_LC_HEADER_LEN 32
#define HAS_TELLDIR_PROTO 
#define _CS_POSIX_V6_ILP32_OFFBIG_LIBS 7
#define case_239_SBOX32(hash,state,key) 
#define Malloc_t void *
#define PERL_USHORT_MIN ((unsigned short)0)
#define MACH_PORT_QLIMIT_MIN MACH_PORT_QLIMIT_ZERO
#define VM_PAGE_QUERY_PAGE_SPECULATIVE 0x40
#define OPf_KNOW OPf_WANT
#define KERN_KDTEST 19
#define M_SQRT1_2 0.707106781186547524400844362104849039
#define PL_oldname (vTHX->Ioldname)
#define NGX_UPDATE_TIME 1
#define DEBUG_q_TEST (0)
#define O_NOCTTY 0x00020000
#define PERL_ARGS_ASSERT_CK_BACKTICK assert(o)
#define PCRE2_ERROR_END_BACKSLASH 101
#define SAE_ASSOCID_ANY 0
#define REENTRANT_PROTO_S_ICSBI 60
#define DM_UID (DM_RUID|DM_EUID)
#define FIONBIO _IOW('f', 126, int)
#define SINGLE_PAT_MOD 's'
#define PUSHs(s) (*++sp = (s))
#define NO_ADDRESS NO_DATA
#define _STDBOOL_H 
#define PF_VLAN ((uint32_t)0x766c616e)
#define ASSUME(x) assert(x)
#define sv_setref_pv(a,b,c) Perl_sv_setref_pv(aTHX_ a,b,c)
#define __ATOMIC_ACQUIRE 2
#define _POSIX2_BC_SCALE_MAX 99
#define CopFILESV(c) (CopFILE(c) ? GvSV(gv_fetchfile(CopFILE(c))) : NULL)
#define lex_discard_to(a) Perl_lex_discard_to(aTHX_ a)
#define NGX_LOCK_PATH "logs/nginx.lock"
#define _MACH_VM_TYPES_H_ 
#define TIOCPTYGNAME _IOC(IOC_OUT, 't', 83, 128)
#define HOST_VM_INFO64_LATEST_COUNT HOST_VM_INFO64_COUNT
#define KEV_DL_PROTO_DETACHED 15
#define TCPCI_OPT_ECN 0x00000008
#define MACHINE_THREAD_STATE_COUNT x86_THREAD_STATE_COUNT
#define IP_DEFAULT_MULTICAST_TTL 1
#define PERL_ARGS_ASSERT_MY_CXT_INIT assert(indexp)
#define SAVEFREEOP(o) save_freeop((OP*)(o))
#define cUNOP_AUXx(o) ((UNOP_AUX*)(o))
#define OPpOUR_INTRO 0x40
#define SvTEMP(sv) (SvFLAGS(sv) & SVs_TEMP)
#define PERL_ARGS_ASSERT_MESS_NOCONTEXT assert(pat)
#define sv_catpvf Perl_sv_catpvf_nocontext
#define __FLT_MIN__ 1.17549435082228750796873653722224568e-38F
#define __GCC_IEC_559_COMPLEX 2
#define LDBL_HAS_SUBNORM __LDBL_HAS_DENORM__
#define OA_BINOP (2 << OCSHIFT)
#define toUPPER_uvchr(c,s,l) to_uni_upper(c,s,l)
#define strEQ(s1,s2) (strcmp(s1,s2) == 0)
#define IPV6CTL_TEMPVLTIME 34
#define RTLD_NOW 0x2
#define __PATCHLEVEL_H_INCLUDED__ 
#define UNICODE_IS_PERL_EXTENDED(uv) UNLIKELY((UV) (uv) > 0x7FFFFFFF)
#define AUDITDEV_FILENAME "audit"
#define SVpad_TYPED PADNAMEt_TYPED
#define _SC_TIMEOUTS 95
#define SAVEFREEPV(p) save_freepv((char*)(p))
#define FLT_MIN __FLT_MIN__
#define HAS_STRTOUL 
#define MACH_PORT_STATUS_FLAG_REVIVE 0x10
#define HAS_STRTOUQ 
#define isXDIGIT_A(c) _generic_isCC(c, _CC_XDIGIT)
#define Copy(s,d,n,t) (MEM_WRAP_CHECK_(n,t) perl_assert_ptr(d), perl_assert_ptr(s), (void)memcpy((char*)(d),(const char*)(s), (n) * sizeof(t)))
#define HAS_INETPTON 
#define FCNTL_FS_SPECIFIC_BASE 0x00010000
#define INT_LEAST16_MIN INT16_MIN
#define HOST_CALENDAR_CHANGED_REPLYID 950
#define PERL_ARGS_ASSERT_SIGHANDLER 
#define _POSIX_THREAD_SAFE_FUNCTIONS 200112L
#define CvISXSUB_on(cv) (CvFLAGS(cv) |= CVf_ISXSUB)
#define KEV_DL_LINK_QUALITY_METRIC_CHANGED 20
#define PERL_ARGS_ASSERT_INVERT 
#define PERL_MAGIC_sig 'S'
#define __API_UNAVAILABLE_GET_MACRO(...) 
#define IPCTL_GIF_TTL 16
#define I386_THREAD_STATE_MAX (614)
#define PL_fdpid (vTHX->Ifdpid)
#define PROCESSOR_PM_REGS_INFO 0x10000001
#define _NGX_HTTP_REQUEST_H_INCLUDED_ 
#define TASK_BASIC_INFO_32 4
#define NET_RT_STAT 4
#define _SECURE__STRING_H_ 
#define DEBUG_yv(a) 
#define PoisonNew(d,n,t) PoisonWith(d,n,t,0xAB)
#define CPU_SUBTYPE_MC88000_ALL ((cpu_subtype_t) 0)
#define PERL_ARGS_ASSERT_SV_SETPV_BUFSIZE assert(sv)
#define LONGSIZE 8
#define RXapif_FETCH 0x0001
#define __INTMAX_C(c) c ## L
#define UTF8_TWO_BYTE_HI_nocast(c) __BASE_TWO_BYTE_HI(c, NATIVE_TO_UNI)
#define PTHREAD_SCOPE_PROCESS 2
#define PERL_ARGS_ASSERT_SAVE_ALLOC 
#define LVRET ((PL_op->op_private & OPpMAYBE_LVSUB) && is_lvalue_sub())
#define SVs_PADTMP 0x00020000
#define PTHREAD_CANCELED ((void *) 1)
#define O_ACCMODE 0x0003
#define TIME_RELATIVE 0x01
#define SvSHARED_HASH(sv) (0 + SvSHARED_HEK_FROM_PV(SvPVX_const(sv))->hek_hash)
#define sv_setref_uv(a,b,c) Perl_sv_setref_uv(aTHX_ a,b,c)
#define P_CLASSIC P_TRANSLATED
#define isALPHA_uni(c) isALPHA_uvchr(c)
#define is_utf8_fixed_width_buf_loc_flags(s,len,loc,flags) is_utf8_fixed_width_buf_loclen_flags(s, len, loc, 0, flags)
#define TRUE (1)
#define MAX_SACK_BLKS 6
#define ru_last ru_nivcsw
#define FIOGETOWN _IOR('f', 123, int)
#define MGf_BYTES 0x40
#define VM_BEHAVIOR_RANDOM ((vm_behavior_t) 1)
#define QUAD_IS_LONG 2
#define IPV6CTL_RTEXPIRE 25
#define pcre2_compile_context_copy PCRE2_SUFFIX(pcre2_compile_context_copy_)
#define AF_APPLETALK 16
#define IP_HDRINCL 2
#define av_exists(a,b) Perl_av_exists(aTHX_ a,b)
#define PERL_ARGS_ASSERT_LEAVE_SCOPE 
#define GvNAMEUTF8(gv) HEK_UTF8(GvNAME_HEK(gv))
#define UNICODE_DISALLOW_ILLEGAL_C9_INTERCHANGE (UNICODE_DISALLOW_SURROGATE|UNICODE_DISALLOW_SUPER)
#define host_get_launchctl_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_LAUNCHCTL_PORT, (port)))
#define ngx_de_name(dir) ((u_char *) (dir)->de->d_name)
#define _POSIX_TYPED_MEMORY_OBJECTS (-1)
#define CPUFAMILY_INTEL_WESTMERE 0x573b5eec
#define USER_COLL_WEIGHTS_MAX 6
#define is_PROBLEMATIC_LOCALE_FOLD_cp(cp) ( cp <= 0xFF || ( 0xFF < cp && ( inRANGE_helper_(UV, cp, 0x130, 0x131) || ( 0x131 < cp && ( 0x149 == cp || ( 0x149 < cp && ( 0x178 == cp || ( 0x178 < cp && ( 0x17F == cp || ( 0x17F < cp && ( 0x1F0 == cp || ( 0x1F0 < cp && ( 0x307 == cp || ( 0x307 < cp && ( 0x39C == cp || ( 0x39C < cp && ( 0x3BC == cp || ( 0x3BC < cp && ( inRANGE_helper_(UV, cp, 0x1E96, 0x1E9A) || ( 0x1E9A < cp && ( 0x1E9E == cp || ( 0x1E9E < cp && ( inRANGE_helper_(UV, cp, 0x212A, 0x212B) || inRANGE_helper_(UV, cp, 0xFB00, 0xFB06) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) )
#define LEDGER_NULL ((ledger_t) 0)
#define PERL_ARGS_ASSERT_SAVE_FREESV 
#define PERL_UNLOCK_HOOK Perl_sv_nounlocking
#define UTF8_GOT_PERL_EXTENDED UTF8_DISALLOW_PERL_EXTENDED
#define LOCALE_UNLOCK_ STMT_START { DEBUG_Lv(PerlIO_printf(Perl_debug_log, "%s: %d: unlocking locale\n", __FILE__, __LINE__)); MUTEX_UNLOCK(&PL_locale_mutex); } STMT_END
#define OPpSORT_UNSTABLE 0x80
#define NGX_HTTP_PERMANENT_REDIRECT 308
#define SvROK_off(sv) (SvFLAGS(sv) &= ~(SVf_ROK))
#define PERL_ARGS_ASSERT_LEAVE_ADJUST_STACKS assert(from_sp); assert(to_sp)
#define _NGX_PROCESS_CYCLE_H_INCLUDED_ 
#define PL_vtbl_envelem PL_magic_vtables[want_vtbl_envelem]
#define INT16_C(v) (v)
#define _SC_TTY_NAME_MAX 101
#define PerlMem_is_locked() 0
#define case_256_SBOX32(hash,state,key) 
#define EXC_MASK_ARITHMETIC (1 << EXC_ARITHMETIC)
#define HAS_RENAME 
#define CvEVAL_on(cv) (CvUNIQUE_on(cv),SvFAKE_off(cv))
#define FPC_IC 0x1000
#define strLE(s1,s2) (strcmp(s1,s2) <= 0)
#define OPf_PARENS 8
#define PERL_ARGS_ASSERT_CK_EOF assert(o)
#define is_utf8_string_loclen_flags Perl_is_utf8_string_loclen_flags
#define ngx_getcwd(buf,size) (getcwd((char *) buf, size) != NULL)
#define HAS_SNPRINTF 
#define strLT(s1,s2) (strcmp(s1,s2) < 0)
#define RXf_CHECK_ALL (1U<<(RXf_BASE_SHIFT+5))
#define PERL_ARGS_ASSERT_DO_MAGIC_DUMP assert(file)
#define OA_COP (10 << OCSHIFT)
#define UINT_LEAST64_MAX UINT64_MAX
#define NGX_HTTP_COPY_BUFFERED 0x04
#define isALPHA_LC_utf8(p,e) isALPHA_LC_utf8_safe(p, e)
#define OP_CHECK_MUTEX_INIT MUTEX_INIT(&PL_check_mutex)
#define hv_exists_ent(hv,keysv,hash) cBOOL(hv_common((hv), (keysv), NULL, 0, 0, HV_FETCH_ISEXISTS, 0, (hash)))
#define IPV6_FW_FLUSH 32
#define SO_NOSIGPIPE 0x1022
#define _CDEFS_H_ 
#define vsnprintf(str,len,format,ap) __builtin___vsnprintf_chk (str, len, 0, __darwin_obsz(str), format, ap)
#define CLOCK_NULL ((clock_t) 0)
#define REQUESTED_TRAILER_SIZE(y) REQUESTED_TRAILER_SIZE_NATIVE(y)
#define PL_utf8_xidcont (vTHX->Iutf8_xidcont)
#define LC_ALL 0
#define blk_eval cx_u.cx_blk.blk_u.blku_eval
#define _POSIX2_BC_DIM_MAX 2048
#define S_TYPEISSEM(buf) (0)
#define EILSEQ 92
#define SIOCSIFDSTADDR _IOW('i', 14, struct ifreq)
#define __FLT128_MANT_DIG__ 113
#define is_utf8_fixed_width_buf_flags(s,len,flags) is_utf8_fixed_width_buf_loclen_flags(s, len, 0, 0, flags)
#define PL_curstackinfo (vTHX->Icurstackinfo)
#define SCNxFAST8 SCNx8
#define PCRE2_INFO_HEAPLIMIT 25
#define CXp_FOR_LVREF 0x20
#define strNE(s1,s2) (strcmp(s1,s2) != 0)
#define ngx_str_null(str) (str)->len = 0; (str)->data = NULL
#define PERL_ARGS_ASSERT_SAVE_PUSHPTR 
#define OPpTARGET_MY 0x10
#define x86_EXCEPTION_STATE_COUNT ((mach_msg_type_number_t) (sizeof(x86_exception_state_t)/sizeof(unsigned int)))
#define _NETDB_H_ 
#define SvTAIL(_svtail) (((XPVNV*)SvANY(_svtail))->xnv_u.xnv_bm_tail)
#define __SIZE_MAX__ 0xffffffffffffffffUL
#define PERL_ARGS_ASSERT_RVPV_DUP assert(dsv); assert(ssv); assert(param)
#define KEV_DL_AWDL_UNRESTRICTED 27
#define __exported_push _Pragma("GCC visibility push(default)")
#define IN_MULTICAST(i) IN_CLASSD(i)
#define MY_CXT_INIT my_cxt_t *my_cxtp = (my_cxt_t*)Perl_my_cxt_init(aTHX_ MY_CXT_INIT_ARG, sizeof(my_cxt_t)); PERL_UNUSED_VAR(my_cxtp)
#define PRIdMAX __PRI_MAX_LENGTH_MODIFIER__ "d"
#define __WCHAR_MAX__ 0x7fffffff
#define PerlMemShared_free(buf) free((buf))
#define PERL_ARGS_ASSERT_SV_UNTAINT assert(sv)
#define EXTEND_HWM_SET(p,n) NOOP
#define Perl_atof(s) Perl_my_atof(s)
#define UTF_ACCUMULATION_SHIFT 6
#define KERN_AFFINITY 43
#define MACH_SEND_INVALID_RIGHT 0x1000000a
#define __INT_LEAST16_WIDTH__ 16
#define sv_catsv_mg(dsv,ssv) sv_catsv_flags(dsv, ssv, SV_GMAGIC|SV_SMAGIC)
#define TASK_EXC_GUARD_MP_ALL 0xf0
#define PCRE2_ERROR_REPMISSINGBRACE (-58)
#define WIFEXITED(x) (_WSTATUS(x) == 0)
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define O_EVTONLY 0x00008000
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8 1
#define TASK_RESOURCE_NOTIFY_PORT 11
#define I_SYS_TIMES 
#define PERL_ARGS_ASSERT_LEX_UNSTUFF assert(ptr)
#define ngx_rbt_black(node) ((node)->color = 0)
#define HVhek_PLACEHOLD 0x200
#define S_TYPEISSHM(buf) (0)
#define Strtoul strtoul
#define STAILQ_REMOVE_AFTER(head,elm,field) do { if ((STAILQ_NEXT(elm, field) = STAILQ_NEXT(STAILQ_NEXT(elm, field), field)) == NULL) (head)->stqh_last = &STAILQ_NEXT((elm), field); } while (0)
#define pad_add_anon(a,b) Perl_pad_add_anon(aTHX_ a,b)
#define TAILQ_FOREACH_SAFE(var,head,field,tvar) for ((var) = TAILQ_FIRST((head)); (var) && ((tvar) = TAILQ_NEXT((var), field), 1); (var) = (tvar))
#define VM_INHERIT_DONATE_COPY ((vm_inherit_t) 3)
#define __GCC_IEC_559 2
#define ATTR_CMNEXT_REALDEVID 0x00000040
#define CPU_SUBTYPE_386 CPU_SUBTYPE_INTEL(3, 0)
#define SIOCSIFMEDIA _IOWR('i', 55, struct ifreq)
#define IPPROTO_HOPOPTS 0
#define EV_ADD 0x0001
#define bytes_cmp_utf8(a,b,c,d) Perl_bytes_cmp_utf8(aTHX_ a,b,c,d)
#define _IOFBF 0
#define _STRUCT_X86_CPMU_STATE64 struct __darwin_x86_cpmu_state64
#define PERL_ARGS_ASSERT_PAD_ADD_WEAKREF assert(func)
#define _POSIX2_BC_STRING_MAX 1000
#define KERN_DEFAULT_SET 31
#define EAI_PROTOCOL 13
#define SBOX32_MIX3(v0,v1,v2,text) STMT_START { SBOX32_WARN4("v0=%08x v1=%08x v2=%08x - SBOX32_MIX3 %s\n", (unsigned int)v0,(unsigned int)v1,(unsigned int)v2, text ); v0 = ROTL32(v0,16) - v2; v1 = ROTR32(v1,13) ^ v2; v2 = ROTL32(v2,17) + v1; v0 = ROTR32(v0, 2) + v1; v1 = ROTR32(v1,17) - v0; v2 = ROTR32(v2, 7) ^ v0; } STMT_END
#define SBOX32_MIX4(v0,v1,v2,v3,text) STMT_START { SBOX32_WARN5("v0=%08x v1=%08x v2=%08x v3=%08x - SBOX32_MIX4 %s\n", (unsigned int)v0, (unsigned int)v1, (unsigned int)v2, (unsigned int)v3, text); v0 = ROTL32(v0,13) - v3; v1 ^= v2; v3 = ROTL32(v3, 9) + v1; v2 ^= v0; v0 = ROTL32(v0,14) ^ v3; v1 = ROTL32(v1,25) - v2; v3 ^= v1; v2 = ROTL32(v2, 4) - v0; } STMT_END
#define PM_SETRE(o,r) STMT_START { REGEXP *const _pm_setre = (r); assert(_pm_setre); PL_regex_pad[(o)->op_pmoffset] = MUTABLE_SV(_pm_setre); } STMT_END
#define _SC_NPROCESSORS_CONF 57
#define utf8_to_uvchr_buf(s,e,lenp) utf8_to_uvchr_buf_helper((const U8 *) (s), (const U8 *) e, lenp)
#define P_PHYSIO 0
#define putc_unlocked(x,fp) __sputc(x, fp)
#define host_set_kextd_port(host,port) (host_set_special_port((host), HOST_KEXTD_PORT, (port)))
#define START_MY_CXT static int my_cxt_index = -1;
#define MEM_WRAP_CHECK_s(n,t,a) (void)(UNLIKELY(_MEM_WRAP_WILL_WRAP(n,t)) && (Perl_croak_nocontext("" a ""),0))
#define VM_BEHAVIOR_REUSE ((vm_behavior_t) 9)
#define PL_eval_root (vTHX->Ieval_root)
#define FLT_HAS_SUBNORM __FLT_HAS_DENORM__
#define HvRITER(hv) (*Perl_hv_riter_p(aTHX_ MUTABLE_HV(hv)))
#define _SC_XOPEN_STREAMS 114
#define HOST_EXTMOD_INFO64_COUNT ((mach_msg_type_number_t) (sizeof(vm_extmod_statistics_data_t)/sizeof(integer_t)))
#define grok_infnan(a,b) Perl_grok_infnan(aTHX_ a,b)
#define PERL_ARGS_ASSERT_MAGIC_SETUVAR assert(sv); assert(mg)
#define _BSD_MACHINE_PARAM_H_ 
#define pv_display(a,b,c,d,e) Perl_pv_display(aTHX_ a,b,c,d,e)
#define aTHXo_ aTHX_
#define isinfnan Perl_isinfnan
#define sv_utf8_downgrade_flags(a,b,c) Perl_sv_utf8_downgrade_flags(aTHX_ a,b,c)
#define SSIZE_MAX LONG_MAX
#define MAP_FILE 0x0000
#define G_WARN_ON 1
#define _NGX_SETPROCTITLE_H_INCLUDED_ 
#define isLEXWARN_off cBOOL(!PL_curcop || PL_curcop->cop_warnings == pWARN_STD)
#define PERL_ARGS_ASSERT_MAGIC_SETCOLLXFRM assert(sv); assert(mg)
#define VM_PAGE_QUERY_PAGE_FICTITIOUS 0x2
#define F_ADDFILESIGS_RETURN 97
#define __disable_tail_calls 
#define HAS_SOCKATMARK_PROTO 
#define RX_WRAPPED_const(rx_sv) SvPVX_const(rx_sv)
#define ngx_queue_next(q) (q)->next
#define SvPVbyte_force(sv,len) (SvPOK_byte_pure_nogthink(sv) ? ((len = SvCUR(sv)), SvPVX(sv)) : sv_pvbyten_force(sv, &len))
#define KERN_NISDOMAINNAME 22
#define PCRE2_INFO_NAMECOUNT 17
#define CvCVGV_RC(cv) (CvFLAGS(cv) & CVf_CVGV_RC)
#define _PATH_MP_DB "/etc/pwd.db"
#define __BASE_TWO_BYTE_HI(c,translate_function) (__ASSERT_(! UVCHR_IS_INVARIANT(c)) I8_TO_NATIVE_UTF8((translate_function(c) >> UTF_ACCUMULATION_SHIFT) | UTF_START_MARK(2)))
#define PCRE2_CONVERT_NO_UTF_CHECK 0x00000002u
#define LINK_MAX 32767
#define PERL_ARGS_ASSERT_MAGIC_SETUTF8 assert(sv); assert(mg)
#define av_fetch(a,b,c) Perl_av_fetch(aTHX_ a,b,c)
#define AI_NUMERICSERV 0x00001000
#define NGX_COMPAT_END 
#define WARN_SURROGATE 50
#define PTHREAD_MUTEX_DEFAULT PTHREAD_MUTEX_NORMAL
#define isALNUMC_utf8_safe(p,e) isALPHANUMERIC_utf8_safe(p,e)
#define PF_COIP AF_COIP
#define gv_fullname(a,b) Perl_gv_fullname(aTHX_ a,b)
#define WARN_PARENTHESIS 32
#define SCNi16 "hi"
#define EXC_I386_ALIGNFLT 17
#define HV_DELETE 0x40
#define _SC_TRACE_USER_EVENT_MAX 130
#define MFSNAMELEN 15
#define PERL_ARGS_ASSERT_SCAN_WORD assert(s); assert(dest); assert(slp)
#define P_TRANSLATED 0x00020000
#define ngx_queue_insert_head(h,x) (x)->next = (h)->next; (x)->next->prev = x; (x)->prev = h; (h)->next = x
#define gv_fetchmethod_sv_flags(a,b,c) Perl_gv_fetchmethod_sv_flags(aTHX_ a,b,c)
#define PL_DBsingle (vTHX->IDBsingle)
#define xiv_iv xiv_u.xivu_iv
#define OS_NOTHROW __attribute__((__nothrow__))
#define TH_STATE_UNINTERRUPTIBLE 4
#define UTF8_ALLOW_EMPTY 0x0001
#define SCNuFAST64 SCNu64
#define PoisonWith(d,n,t,b) (MEM_WRAP_CHECK_(n,t) (void)memset((char*)(d), (U8)(b), (n) * sizeof(t)))
#define CPUFAMILY_INTEL_SANDYBRIDGE 0x5490b78c
#define NGX_HTTP_TOO_MANY_REQUESTS 429
#define VM_PAGE_QUERY_PAGE_CS_VALIDATED 0x100
#define F_ALLOCATEALL 0x00000004
#define HAS_SIGINFO_SI_STATUS 
#define I64TYPE long
#define VT_NATIVE 0x0B
#define NGX_HAVE_ATOMIC_OPS 1
#define TASK_SEATBELT_PORT 7
#define PCRE2_ERROR_JIT_STACKLIMIT (-46)
#define PERL_ARGS_ASSERT_CSIGHANDLER 
#define ATTR_FORK_TOTALSIZE 0x00000001
#define sv_cmp_locale_flags(a,b,c) Perl_sv_cmp_locale_flags(aTHX_ a,b,c)
#define POLL_MSG 3
#define PERL_MG_UFUNC(name,ix,sv) I32 name(pTHX_ IV ix, SV *sv)
#define MAP_MEM_COPYBACK 1
#define PERL_ARGS_ASSERT_SAVE_HINTS 
#define MACH_MSG_OPTION_NONE 0x00000000
#define ngx_http_get_module_loc_conf(r,module) (r)->loc_conf[module.ctx_index]
#define _CTYPE_H_ 
#define __FINITE_MATH_ONLY__ 0
#define ngx_set_stderr_n "dup2(STDERR_FILENO)"
#define MACH_SEND_INTERRUPT 0x00000040
#define SAVEt_PARSER 19
#define HAS_TM_TM_ZONE 
#define CX_POP_SAVEARRAY(cx) STMT_START { AV *cx_pop_savearray_av = GvAV(PL_defgv); GvAV(PL_defgv) = cx->blk_sub.savearray; cx->blk_sub.savearray = NULL; SvREFCNT_dec(cx_pop_savearray_av); } STMT_END
#define RXapif_REGNAME 0x0400
#define TIME_MICROS_MAX (1000000)
#define isinf(x) ( sizeof(x) == sizeof(float) ? __inline_isinff((float)(x)) : sizeof(x) == sizeof(double) ? __inline_isinfd((double)(x)) : __inline_isinfl((long double)(x)))
#define mg_copy(a,b,c,d) Perl_mg_copy(aTHX_ a,b,c,d)
#define PCRE2_UNSET (~(PCRE2_SIZE)0)
#define SOCK_MAXADDRLEN 255
#define REXEC_NOT_FIRST 0x10
#define OS_CLOSED_OPTIONS(_name,_type,...) __OS_ENUM_C_FALLBACK(_name, _type, ## __VA_ARGS__) __OS_ENUM_ATTR_CLOSED __OS_OPTIONS_ATTR
#define OA_BASEOP_OR_UNOP (11 << OCSHIFT)
#define SIGALRM 14
#define _SC_XBS5_ILP32_OFFBIG 123
#define NGX_HAVE_VARIADIC_MACROS 1
#define _X86_INSTRUCTION_STATE_MAX_INSN_BYTES (2448 - 64 - 4)
#define RUSAGE_CHILDREN -1
#define PRIxPTR "lx"
#define MACH_VOUCHER_ATTR_KEY_USER_DATA ((mach_voucher_attr_key_t)7)
#define NGX_HTTP_MAIN_CONF_OFFSET offsetof(ngx_http_conf_ctx_t, main_conf)
#define _SC_SHARED_MEMORY_OBJECTS 39
#define pcre2_compile_context PCRE2_SUFFIX(pcre2_compile_context_)
#define PERL_ARGS_ASSERT_SV_UNREF assert(sv)
#define THREAD_STANDARD_POLICY 1
#define PCRE2_ERROR_MISSING_CLOSING_PARENTHESIS 114
#define HAS_WCSTOMBS 
#define is_strict_utf8_string_loclen Perl_is_strict_utf8_string_loclen
#define WARN_UNTIE 43
#define memzero(d,l) memset(d,0,l)
#define PL_utf8_idstart (vTHX->Iutf8_idstart)
#define _PATH_HEQUIV "/etc/hosts.equiv"
#define MAX_AUDIT_RECORD_SIZE MAXAUDITDATA
#define ECANCELED 89
#define pcre2_code_copy_with_tables PCRE2_SUFFIX(pcre2_code_copy_with_tables_)
#define SIGFPE 8
#define Perl_drand48() (Perl_drand48_r(&PL_random_state))
#define NGX_HTTP_GZIP_BUFFERED 0x20
#define NGX_EHOSTDOWN EHOSTDOWN
#define FP_INFINITE 2
#define PERL_ARGS_ASSERT_SUB_CRUSH_DEPTH assert(cv)
#define __SCHAR_MAX__ 0x7f
#define PL_collation_ix (vTHX->Icollation_ix)
#define OFFUNISKIP(uv) (OFFUNI_IS_INVARIANT(uv) ? 1 : __BASE_UNI_SKIP(uv))
#define PL_vtbl_ovrld PL_magic_vtables[want_vtbl_ovrld]
#define OFF_MAX LLONG_MAX
#define IPV6CTL_DEFHLIM 3
#define Perl_floor floor
#define KERN_KDEBUG 24
#define PERL_ARGS_ASSERT_MEM_COLLXFRM assert(input_string); assert(xlen)
#define THREAD_STATE_NONE 13
#define OA_FOLDCONST 2
#define PERL_SEEN_HV_MACRO_H_ 
#define VFS_CTL_NOLOCKS 0x00010006
#define _SYS_IOCTL_H_ 
#define aTHXx_ aTHXx,
#define PERL_ARGS_ASSERT_CK_SORT assert(o)
#define SvIV_set(sv,val) STMT_START { assert(PL_valid_types_IV_set[SvTYPE(sv) & SVt_MASK]); assert(!isGV_with_GP(sv)); (((XPVIV*) SvANY(sv))->xiv_iv = (val)); } STMT_END
#define NGX_HTTP_COPY 0x00000080
#define PL_langinfo_bufsize (vTHX->Ilanginfo_bufsize)
#define ATTR_CMNEXT_REALFSID 0x00000080
#define CLOCK_ALARM_MAXRES 5
#define HAS_GETPWENT 
#define sv_onstack sv_flags
#define LIST_CHECK_PREV(elm,field) 
#define CPU_SUBTYPE_POWERPC_970 ((cpu_subtype_t) 100)
#define CIRCLEQ_FOREACH(var,head,field) for((var) = (head)->cqh_first; (var) != (void *)(head); (var) = (var)->field.cqe_next)
#define isDIGIT_uni(c) isDIGIT_uvchr(c)
#define PCRE2_NOTBOL 0x00000001u
#define Renew(v,n,t) (v = (MEM_WRAP_CHECK_(n,t) (t*)MEM_LOG_REALLOC(n,t,v,saferealloc((Malloc_t)(v),(MEM_SIZE)((n)*sizeof(t))))))
#define hv_common(a,b,c,d,e,f,g,h) Perl_hv_common(aTHX_ a,b,c,d,e,f,g,h)
#define PerlEnv_ENVgetenv(str) PerlEnv_getenv((str))
#define OASHIFT 12
#define _NGX_OPEN_FILE_CACHE_H_INCLUDED_ 
#define PL_sv_arenaroot (vTHX->Isv_arenaroot)
#define Free_t void
#define FOLDEQ_S2_FOLDS_SANE (1 << 5)
#define RETSETYES RETURNX(SETs(&PL_sv_yes))
#define MAP_MEM_PURGABLE 0x040000
#define kPVOP cPVOPx(kid)
#define PERL_PRESERVE_IVUV 
#define NGX_WRITE_EVENT EVFILT_WRITE
#define USE_64_BIT_INT 
#define ACCESSX_MAX_DESCRIPTORS 100
#define MACH_MSG_GUARD_FLAGS_UNGUARDED_ON_SEND 0x0002
#define MSG_PEEK 0x2
#define PERL_ARGS_ASSERT_CK_CMP assert(o)
#define HOST_SEATBELT_PORT (7 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define PERL_ARGS_ASSERT_HV_DELETE_ENT assert(keysv)
#define WAKEMON_GET_PARAMS 0x04
#define GETSERVENT_R_PROTO 0
#define SIOCAIFADDR _IOW('i', 26, struct ifaliasreq)
#define xpv_len xpv_len_u.xpvlenu_len
#define PERLDB_LINE (PL_perldb & PERLDBf_LINE)
#define NGX_REGEX_MULTILINE 0x00000002
#define __restrict restrict
#define PERL_ARGS_ASSERT_CK_STRINGIFY assert(o)
#define HV_ITERNEXT_WANTPLACEHOLDERS 0x01
#define ngx_http_get_module_srv_conf(r,module) (r)->srv_conf[module.ctx_index]
#define WARN_EXPERIMENTAL__ISA 73
#define HvAUXf_SCAN_STASH 0x1
#define Perl_ldexp(x,y) ldexp(x,y)
#define U32SIZE 4
#define __SHRT_MAX__ 0x7fff
#define ATTR_FILE_DEVTYPE 0x00000020
#define PF_NDRV AF_NDRV
#define NGX_REGEX_NO_MATCHED PCRE2_ERROR_NOMATCH
#define CPU_SUBTYPE_MC68030_ONLY ((cpu_subtype_t) 3)
#define w_stopval w_S.w_Stopval
#define PerlProc_fork() my_fork()
#define __LDBL_MAX__ 1.18973149535723176502126385303097021e+4932L
#define NGX_HAVE_STATFS 1
#define ILL_ILLOPC 1
#define STRINGIFY(a) PeRl_StGiFy(a)
#define __ipc_perm_new ipc_perm
#define READDIR_R_PROTO REENTRANT_PROTO_I_TSR
#define ILL_ILLOPN 4
#define utf8_to_uvuni_buf(a,b,c) Perl_utf8_to_uvuni_buf(aTHX_ a,b,c)
#define PERL_ARGS_ASSERT_CK_REQUIRE assert(o)
#define TASK_ABSOLUTETIME_INFO_COUNT ((mach_msg_type_number_t) (sizeof (task_absolutetime_info_data_t) / sizeof (natural_t)))
#define Fstat(fd,bufptr) fstat((fd),(bufptr))
#define _MACH_VM_BEHAVIOR_H_ 
#define PERL_ARGS_ASSERT_PERLIO_SETLINEBUF 
#define NOTE_EXIT_DETAIL 0x02000000
#define PERL_ARGS_ASSERT_MAGIC_SETPOS assert(sv); assert(mg)
#define IS_NUMBER_NOT_INT 0x04
#define isALPHANUMERIC_LC_utf8(p,e) isALPHANUMERIC_LC_utf8_safe(p, e)
#define LATIN_SMALL_LETTER_A_WITH_RING_ABOVE LATIN_SMALL_LETTER_A_WITH_RING_ABOVE_NATIVE
#define OPpCONST_ENTERED 0x10
#define VM_MEMORY_AUDIO 90
#define mg_get(a) Perl_mg_get(aTHX_ a)
#define LOCALE_PAT_MODS "l"
#define SvNIOK(sv) (SvFLAGS(sv) & (SVf_IOK|SVf_NOK))
#define POPpbytex (SvPVbytex_nolen(POPs))
#define __LDBL_IS_IEC_60559__ 2
#define P_CONTROLT 0x00000002
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_1(x) 
#define PL_opfreehook (vTHX->Iopfreehook)
#define PerlSIO_fseek(f,o,w) fseek(f,o,w)
#define IPPROTO_DIVERT 254
#define isIDCONT_LC_uvchr(c) _generic_LC_uvchr(isIDCONT_LC, _is_uni_perl_idcont, c)
#define SIGSTKSZ 131072
#define NGX_TIMER_INFINITE (ngx_msec_t) -1
#define IPPROTO_ADFS 68
#define isALPHA_utf8_safe(p,e) _generic_invlist_utf8_safe(_CC_ALPHA, p, e)
#define MATTR_VAL_DCACHE_FLUSH 7
#define hv_rand_set(a,b) Perl_hv_rand_set(aTHX_ a,b)
#define newHV() MUTABLE_HV(newSV_type(SVt_PVHV))
#define VOL_CAPABILITIES_INTERFACES 1
#define _NOT_IN_NUMERIC_STANDARD (! PL_numeric_standard)
#define COND_SIGNAL(c) STMT_START { int _eC_; if ((_eC_ = pthread_cond_signal((c)))) Perl_croak_nocontext("panic: COND_SIGNAL (%d) [%s:%d]", _eC_, __FILE__, __LINE__); } STMT_END
#define MY_CXT (*my_cxtp)
#define MGf_MINMATCH 1
#define NOGROUP 65535
#define PERL_ARGS_ASSERT_GV_FETCHMETHOD assert(stash); assert(name)
#define PCRE2_ERROR_BADMAGIC (-31)
#define CPU_SUBTYPE_INTEL_FAMILY(x) ((x) & 15)
#define MACH_MSGH_BITS_PORTS(bits) ((bits) & MACH_MSGH_BITS_PORTS_MASK)
#define PERL_ARGS_ASSERT_NEW_VERSION assert(ver)
#define MACH_VOUCHER_ATTR_KEY_PTHPRIORITY ((mach_voucher_attr_key_t)4)
#define MUTABLE_PTR(p) ({ void *p_ = (p); p_; })
#define PERL_ARGS_ASSERT_SV_SETNV assert(sv)
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define __alloc_size(...) __attribute__((alloc_size(__VA_ARGS__)))
#define SVphv_HASKFLAGS 0x80000000
#define TASK_POWER_INFO_V2 26
#define IPPROTO_ARGUS 13
#define _SC_V6_LP64_OFF64 105
#define _SC_JOB_CONTROL 6
#define PERL_ARGS_ASSERT__IS_UNI_PERL_IDCONT 
#define _NV_BODYLESS_UNION NV svu_nv;
#define FPE_FLTRES 4
#define __APPLE_CC__ 1
#define EINPROGRESS 36
#define newLISTOP(a,b,c,d) Perl_newLISTOP(aTHX_ a,b,c,d)
#define NET_RT_IFLIST 3
#define NGX_HTTP_GZIP_PROXIED_PRIVATE 0x0020
#define pTHX__VALUE_ ,(void *)my_perl,
#define _SC_SEM_VALUE_MAX 50
#define _PC_ASYNC_IO 17
#define IPPROTO_CPHB 73
#define ngx_http_get_module_ctx(r,module) (r)->ctx[module.ctx_index]
#define INT_FAST8_MIN INT8_MIN
#define PERL_ARGS_ASSERT_DUMP_FORM assert(gv)
#define FBMcf_TAIL_Z 4
#define DEBUG_t_FLAG 0x00000008
#define RX_PRECOMP(rx_sv) (RX_WRAPPED(rx_sv) + ReANY(rx_sv)->pre_prefix)
#define WARN_UNINITIALIZED 41
#define MGf_PERSIST 0x80
#define PERL_ARGS_ASSERT_SAWPARENS 
#define PERL_ARGS_ASSERT_NO_BAREWORD_FILEHANDLE assert(fhname)
#define PAGE_MIN_SHIFT 12
#define save_svref(a) Perl_save_svref(aTHX_ a)
#define cLISTOPo cLISTOPx(o)
#define FBMcf_TAIL_z 8
#define NGX_HTTP_MODULE 0x50545448
#define EVFILT_THREADMARKER EVFILT_SYSCOUNT
#define ATTR_CMN_FLAGS 0x00040000
#define sv_magic(a,b,c,d,e) Perl_sv_magic(aTHX_ a,b,c,d,e)
#define PerlSIO_clearerr(f) clearerr(f)
#define PERL_ARGS_ASSERT_GET_CONTEXT 
#define PERL_ARGS_ASSERT_SV_DERIVED_FROM_PV assert(sv); assert(name)
#define NGX_BUSY -3
#define case_241_SBOX32(hash,state,key) 
#define cCOPo cCOPx(o)
#define HEKf "2p"
#define cCOPx(o) ((COP*)(o))
#define PMf_KEEPCOPY (1U<<6)
#define CvMETHOD_off(cv) (CvFLAGS(cv) &= ~CVf_METHOD)
#define VM_MEMORY_ASL 81
#define sv_2pvutf8_flags(a,b,c) Perl_sv_2pvutf8_flags(aTHX_ a,b,c)
#define _MACH_HOST_NOTIFY_H_ 
#define PCRE2_ERROR_BACKSLASH_K_IN_LOOKAROUND 199
#define PERL_RELOCATABLE_INC "undef"
#define ngx_blocking_n "ioctl(!FIONBIO)"
#define _POSIX_READER_WRITER_LOCKS 200112L
#define dPOPPOPssrl dPOPXssrl(POP)
#define A_OLDSETCOND 21
#define SAVE_MASK 0x3F
#define _MACH_TASK_INFO_H_ 
#define PerlLIO_flock(fd,op) FLOCK((fd), (op))
#define SvUTF8(sv) (SvFLAGS(sv) & SVf_UTF8)
#define _POSIX_AIO_MAX 1
#define SvREFCNT_inc_simple_void(sv) STMT_START { if (sv) SvREFCNT(sv)++; } STMT_END
#define PCRE2_CONFIG_TABLES_LENGTH 15
#define PERL_ARGS_ASSERT_SV_UTF8_UPGRADE_FLAGS 
#define NGX_HAVE_DLOPEN 1
#define NETDB_SUCCESS 0
#define IPPROTO_VMTP 81
#define NGX_HTTP_REQUEST_ENTITY_TOO_LARGE 413
#define G_NOARGS 0x10
#define SCNo32 "o"
#define UTF8_IS_ABOVE_LATIN1_START(c) UTF8_IS_ABOVE_LATIN1(c)
#define IPC_VOUCHER_NULL ((ipc_voucher_t) 0)
#define LOCALE_PAT_MOD 'l'
#define isPSXSPC(c) isPSXSPC_A(c)
#define __printflike(fmtarg,firstvararg) __attribute__((__format__ (__printf__, fmtarg, firstvararg)))
#define FPS_TOS 0x3800
#define _XOPEN_NAME_MAX 255
#define __TVOS_11_0 110000
#define __TVOS_11_2 110200
#define __TVOS_11_3 110300
#define __TVOS_11_4 110400
#define RXf_EVAL_SEEN (1U<<(RXf_BASE_SHIFT+3))
#define case_196_SBOX32(hash,state,key) 
#define ngx_time() ngx_cached_time->sec
#define PERL_ARGS_ASSERT_PAD_FREE 
#define HOST_VM_INFO64_REV1_COUNT HOST_VM_INFO64_LATEST_COUNT
#define PERL_ARGS_ASSERT_PERLLIO_DUP_CLOEXEC 
#define cx_pushwhen(a) Perl_cx_pushwhen(aTHX_ a)
#define strncpy(dest,...) __builtin___strncpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define __WINT_MIN__ (-__WINT_MAX__ - 1)
#define SvPAD_TYPED_on(pn) (PadnameFLAGS(pn) |= PADNAMEt_TYPED)
#define PERL_ARGS_ASSERT_SV_PVN assert(sv); assert(lp)
#define PMf_FOLD (1U<<2)
#define F_ADDFILESIGS 61
#define sv_usepvn_flags(a,b,c,d) Perl_sv_usepvn_flags(aTHX_ a,b,c,d)
#define _generic_isCC_A(c,classnum) (FITS_IN_8_BITS(c) && ((PL_charclass[(U8) (c)] & _CC_mask_A(classnum)) == _CC_mask_A(classnum)))
#define KERN_NX_PROTECTION 60
#define vform(a,b) Perl_vform(aTHX_ a,b)
#define PERLIO_FUNCS_DECL(funcs) const PerlIO_funcs funcs
#define pcre2_code_copy PCRE2_SUFFIX(pcre2_code_copy_)
#define _SC_SHELL 78
#define MACH_MSG_TRAILER_FORMAT_0_SIZE sizeof(mach_msg_format_0_trailer_t)
#define is_PATWS_safe(s,e,is_utf8) ( ( LIKELY((e) > (s)) ) ? ( ( inRANGE_helper_(U8, ((const U8*)s)[0], '\t', '\r') || ' ' == ((const U8*)s)[0] ) ? 1 : (! is_utf8 ) ? ( 0x85 == ((const U8*)s)[0] ) : ( LIKELY(((e) - (s)) >= UTF8SKIP(s)) ) ? ( ( 0xC2 == ((const U8*)s)[0] ) ? ( ( 0x85 == ((const U8*)s)[1] ) ? 2 : 0 ) : ( ( ( 0xE2 == ((const U8*)s)[0] ) && ( 0x80 == ((const U8*)s)[1] ) ) && ( inRANGE_helper_(U8, ((const U8*)s)[2], 0x8E, 0x8F) || inRANGE_helper_(U8, ((const U8*)s)[2], 0xA8, 0xA9) ) ) ? 3 : 0 ) : 0 ) : 0 )
#define GvCVGEN(gv) (GvGP(gv)->gp_cvgen)
#define RETPUSHUNDEF RETURNX(PUSHs(&PL_sv_undef))
#define PCRE2_EXTRA_ALT_BSUX 0x00000020u
#define __TVOS_UNAVAILABLE 
#define CPUFAMILY_ARM_TYPHOON 0x2c91a47e
#define _PTHREAD_COND_T 
#define HAS_MPROTECT 
#define IS_NUMBER_IN_UV 0x01
#define IN_SOME_LOCALE_FORM_RUNTIME cBOOL(CopHINTS_get(PL_curcop) & (HINT_LOCALE|HINT_LOCALE_PARTIAL))
#define RsSIMPLE(sv) (SvOK(sv) && (! SvPOK(sv) || SvCUR(sv)))
#define sv_setptrref(rv,ptr) sv_setref_iv(rv,NULL,PTR2IV(ptr))
#define isPUNCT_utf8(p,e) isPUNCT_utf8_safe(p, e)
#define PERL_ARGS_ASSERT_SV_COLLXFRM assert(sv); assert(nxp)
#define PERL_HANDY_H_ 
#define IN6ADDR_V4MAPPED_INIT {{{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00 }}}
#define SvPADMY_on(sv) SvPADTMP_off(sv)
#define USE_PWENT_PTR 
#define PERL_ARGS_ASSERT_CALLER_CX 
#define Perl_frexp(x,y) frexp(x,y)
#define __FLT128_MIN_10_EXP__ (-4931)
#define MACH_RCV_TOO_LARGE 0x10004004
#define ALARM_NULL ((alarm_t) 0)
#define _SYS_UNISTD_H_ 
#define NGX_HTTP_UNLOCK 0x00002000
#define CxLVAL(c) (0 + ((c)->blk_u16 & 0xff))
#define HeVAL(he) (he)->he_valu.hent_val
#define sv_isa(a,b) Perl_sv_isa(aTHX_ a,b)
#define _POSIX_AIO_LISTIO_MAX 2
#define KERN_KDSETRTCDEC 15
#define MACH_MSG_FILTER_POLICY_ALLOW (mach_msg_filter_id)0
#define PERL_READ_LOCK(mutex) STMT_START { MUTEX_LOCK(&(mutex)->lock); (mutex)->readers_count++; MUTEX_UNLOCK(&(mutex)->lock); } STMT_END
#define mg_clear(a) Perl_mg_clear(aTHX_ a)
#define SvPVXtrue(sv) ( ((XPV*)SvANY((sv))) && ( ((XPV*)SvANY((sv)))->xpv_cur > 1 || ( ((XPV*)SvANY((sv)))->xpv_cur && *(sv)->sv_u.svu_pv != '0' ) ) )
#define _SYS_PARAM_H_ 
#define ngx_base64_encoded_length(len) (((len + 2) / 3) * 4)
#define isUPPER_utf8(p,e) isUPPER_utf8_safe(p, e)
#define PERL_ARGS_ASSERT_CK_ENTERSUB_ARGS_PROTO assert(entersubop); assert(namegv); assert(protosv)
#define _POSIX_SPIN_LOCKS (-1)
#define HSm_INTRPSIZE 0xFFFF0000
#define STAILQ_HEAD(name,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct name { struct type *stqh_first; struct type **stqh_last; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define WARN_QW 36
#define ngx_log_tid 0
#define IOC_INOUT (IOC_IN|IOC_OUT)
#define WARN_EXPERIMENTAL 51
#define is_LNBREAK_latin1_safe(s,e) ( ((e)-(s) > 1) ? ( ( inRANGE_helper_(U8, ((const U8*)s)[0], '\n', '\f') || 0x85 == ((const U8*)s)[0] ) ? 1 : ( '\r' == ((const U8*)s)[0] ) ? ( ( '\n' == ((const U8*)s)[1] ) ? 2 : 1 ) : 0 ) : ((e)-(s) > 0) ? ( inRANGE_helper_(U8, ((const U8*)s)[0], '\n', '\r') || 0x85 == ((const U8*)s)[0] ): 0 )
#define DM_GID (DM_RGID|DM_EGID)
#define __WCHAR_MIN__ (-__WCHAR_MAX__ - 1)
#define ngx_change_file_access(n,a) chmod((const char *) n, a)
#define REENTRANT_PROTO_S_CWISBWIE 59
#define SvFAKE_on(sv) (SvFLAGS(sv) |= SVf_FAKE)
#define toTITLE_utf8_safe(p,e,s,l) _toTITLE_utf8_flags(p,e,s,l, 0)
#define SvIMMORTAL_TRUE(sv) ((sv) == &PL_sv_yes)
#define ngx_trylock_fd_n "fcntl(F_SETLK, F_WRLCK)"
#define PERL_ARGS_ASSERT_MY_POPEN assert(cmd); assert(mode)
#define KERN_LOCK_SET_DESTROYED 38
#define ngx_abs(value) (((value) >= 0) ? (value) : - (value))
#define pcre2_get_startchar PCRE2_SUFFIX(pcre2_get_startchar_)
#define _MEM_WRAP_WILL_WRAP(n,t) ((_MEM_WRAP_NEEDS_RUNTIME_CHECK(n,t) ? (MEM_SIZE)(n) : MEM_SIZE_MAX/sizeof(t)) > MEM_SIZE_MAX/sizeof(t))
#define O_SYMLINK 0x00200000
#define ICMP6_FILTER 18
#define CPU_SUBTYPE_ITANIUM CPU_SUBTYPE_INTEL(11, 0)
#define AUDIT_TRIGGER_CLOSE_AND_DIE 4
#define _PATH_SERVICES "/etc/services"
#define SRUN 2
#define ENV_LOCALE_UNLOCK ENV_UNLOCK
#define OPpPV_IS_UTF8 0x80
#define UNICODE_GREEK_SMALL_LETTER_SIGMA 0x03C3
#define HOST_PREFERRED_USER_ARCH_COUNT ((mach_msg_type_number_t) (sizeof(host_preferred_user_arch_data_t)/sizeof(integer_t)))
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define TCPOLEN_CC 6
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#define CALLREG_INTUIT_START(prog,sv,strbeg,strpos,strend,flags,data) RX_ENGINE(prog)->intuit(aTHX_ (prog), (sv), (strbeg), (strpos), (strend),(flags),(data))
#define HvEITER_set(hv,e) Perl_hv_eiter_set(aTHX_ MUTABLE_HV(hv), e)
#define HAS_FCHMOD 
#define sv_pvn_force(sv,lp) sv_pvn_force_flags(sv, lp, SV_GMAGIC)
#define _STRUCT_X86_INSTRUCTION_STATE struct __x86_instruction_state
#define P_LP64 0x00000004
#define MACH_VOUCHER_ATTR_KEY_IMPORTANCE ((mach_voucher_attr_key_t)2)
#define HTONL(x) (x) = htonl((__uint32_t)x)
#define SF_IMMUTABLE 0x00020000
#define ATTR_CMN_OBJTYPE 0x00000008
#define HTONS(x) (x) = htons((__uint16_t)x)
#define PERL_ARGS_ASSERT_SV_NOUNLOCKING 
#define CALLREG_NUMBUF_STORE(rx,paren,value) RX_ENGINE(rx)->numbered_buff_STORE(aTHX_ (rx),(paren),(value))
#define isWORDCHAR_LC_uvchr(c) _generic_LC_invlist_uvchr(isWORDCHAR_LC, _CC_WORDCHAR, c)
#define dXSUB_SYS dNOOP
#define PERL_ARGS_ASSERT_PERLSOCK_ACCEPT_CLOEXEC 
#define FP_NORMAL 4
#define PGSHIFT 12
#define MDEREF_ACTION_MASK 0xf
#define AU_FS_MINFREE 20
#define VM_MEMORY_QUICKLOOK_THUMBNAILS 97
#define __attribute__format__(x,y,z) __attribute__((format(x,y,z)))
#define _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS 5
#define _SC_2_C_BIND 18
#define _POSIX_LINK_MAX 8
#define PERL_ARGS_ASSERT_SV_USEPVN_MG assert(sv)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_3(x) 
#define PCRE2_ERROR_TOO_MANY_NAMED_SUBPATTERNS 149
#define VQ_NEEDAUTH 0x0002
#define VM_INHERIT_COPY ((vm_inherit_t) 1)
#define USE_PERL_ATOF 
#define case_238_SBOX32(hash,state,key) 
#define IOPOL_TYPE_VFS_IGNORE_PERMISSIONS 7
#define DBL_DIG __DBL_DIG__
#define dump_all() Perl_dump_all(aTHX)
#define VM_MEMORY_CM_CRABS 96
#define SO_DEBUG 0x0001
#define HINT_SORT_STABLE 0x00000100
#define SIOCIFGCLONERS _IOWR('i', 129, struct if_clonereq)
#define sv_catpvs_flags(sv,str,flags) Perl_sv_catpvn_flags(aTHX_ sv, STR_WITH_LEN(str), flags)
#define PERL_ARGS_ASSERT_SV_SETREF_NV assert(rv)
#define _STRUCT_SIGALTSTACK struct __darwin_sigaltstack
#define __sclearerr(p) ((void)((p)->_flags &= ~(__SERR|__SEOF)))
#define ngx_delete_file(name) unlink((const char *) name)
#define __IPV6_ADDR_SCOPE_GLOBAL 0x0e
#define OS_SWIFT_NAME(_name) 
#define _STRUCT_X86_FLOAT_STATE64 struct __darwin_x86_float_state64
#define PerlProc_exit(s) exit((s))
#define NGX_HTTP_SUBREQUEST_BACKGROUND 16
#define PAD_CLONE_VARS(proto_perl,param) PL_comppad = av_dup(proto_perl->Icomppad, param); PL_curpad = PL_comppad ? AvARRAY(PL_comppad) : NULL; PL_comppad_name = padnamelist_dup(proto_perl->Icomppad_name, param); PL_comppad_name_fill = proto_perl->Icomppad_name_fill; PL_comppad_name_floor = proto_perl->Icomppad_name_floor; PL_min_intro_pending = proto_perl->Imin_intro_pending; PL_max_intro_pending = proto_perl->Imax_intro_pending; PL_padix = proto_perl->Ipadix; PL_padix_floor = proto_perl->Ipadix_floor; PL_pad_reset_pending = proto_perl->Ipad_reset_pending; PL_cop_seqmax = proto_perl->Icop_seqmax;
#define TASK_NAME_PORT 3
#define PRIuLEAST16 PRIu16
#define mess Perl_mess_nocontext
#define NET_SERVICE_TYPE_BE 0
#define NET_SERVICE_TYPE_BK 1
#define newSVpvn_flags(a,b,c) Perl_newSVpvn_flags(aTHX_ a,b,c)
#define _POSIX_CHILD_MAX 25
#define CPPLAST "-"
#define RANDBITS 48
#define DEBUG_T_TEST (0)
#define PERL_STRLEN_ROUNDUP(n) ((void)(((n) > MEM_SIZE_MAX - 2 * PERL_STRLEN_ROUNDUP_QUANTUM) ? (croak_memory_wrap(),0) : 0), _PERL_STRLEN_ROUNDUP_UNCHECKED(n))
#define cophh_exists_pvs(cophh,key,flags) cBOOL(Perl_refcounted_he_fetch_pvn(aTHX_ cophh, STR_WITH_LEN(key), 0, flags | COPHH_EXISTS))
#define HAS_SETSID 
#define NGX_HTTP_PROCESSING 102
#define OPpTRANS_COMPLEMENT 0x20
#define __options_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_open __enum_options
#define PERL_ARGS_ASSERT_NEWSV 
#define HAS_MALLOC_SIZE 
#define NGX_KQUEUE_UDATA_T (void *)
#define PERL_ARGS_ASSERT_CROAK_NO_MEM 
#define SCHED_OTHER 1
#define UNICODE_IS_END_PLANE_NONCHAR_GIVEN_NOT_SUPER(uv) UNLIKELY(((UV) (uv) & 0xFFFE) == 0xFFFE)
#define GIMME_V Perl_gimme_V(aTHX)
#define STORE_LC_NUMERIC_FORCE_TO_UNDERLYING() STMT_START { LC_NUMERIC_LOCK(_NOT_IN_NUMERIC_UNDERLYING); if (_NOT_IN_NUMERIC_UNDERLYING) { Perl_set_numeric_underlying(aTHX); _restore_LC_NUMERIC_function = &Perl_set_numeric_standard; } } STMT_END
#define lex_unstuff(a) Perl_lex_unstuff(aTHX_ a)
#define PERL_ARGS_ASSERT_BOOT_CORE_MRO 
#define OS_OPTIONS(_name,_type,...) __OS_ENUM_C_FALLBACK(_name, _type, ## __VA_ARGS__) __OS_ENUM_ATTR __OS_OPTIONS_ATTR
#define SvTEMP_on(sv) (SvFLAGS(sv) |= SVs_TEMP)
#define GETENV_PRESERVES_OTHER_THREAD 
#define P_PROFIL 0x00000020
#define MNT_NOATIME 0x10000000
#define PRIuLEAST32 PRIu32
#define VM_BEHAVIOR_WILLNEED ((vm_behavior_t) 4)
#define P_DIRTY_LAUNCH_IN_PROGRESS 0x00000200
#define isBLANK(c) isBLANK_A(c)
#define _HIGHEST_REGCOMP_DOT_H_SYNC _CC_VERTSPACE
#define KERN_OSTYPE 1
#define FPTR2DPTR(t,p) ((t)PTR2nat(p))
#define FP_ILOGB0 (-2147483647 - 1)
#define REENTRANT_PROTO_S_TSBIE 69
#define PERL_ARGS_ASSERT_WAIT4PID assert(statusp)
#define ntohll(x) __DARWIN_OSSwapInt64(x)
#define ALIGNBYTES __DARWIN_ALIGNBYTES
#define CPUFAMILY_INTEL_SKYLAKE 0x37fc219f
#define NGX_PCRE 1
#define HAS_NEXTTOWARD 
#define PCRE2_ERROR_MISSING_CONDITION_CLOSING 124
#define HAS_WCSXFRM 
#define MACH_SEND_INVALID_CONTEXT 0x10000012
#define F_PEOFPOSMODE 3
#define VM_SYNC_DEACTIVATE ((vm_sync_t) 0x10)
#define __STDC_HOSTED__ 1
#define _SC_GETPW_R_SIZE_MAX 71
#define HOST_PRIORITY_INFO 5
#define HSf_POPMARK 0x00000040
#define PERL_ARGS_ASSERT_RSIGNAL 
#define dSAVE_ERRNO int saved_errno = errno
#define NGX_ESCAPE_URI 0
#define PERL_ARGS_ASSERT_REGNEXT 
#define IOf_NOLINE 32
#define PERL_FPU_INIT PL_sigfpe_saved = (Sighandler_t) signal(SIGFPE, SIG_IGN)
#define PERL_DEBUG(a) 
#define AF_LAT 14
#define PadlistNAMESARRAY(pl) PadnamelistARRAY(PadlistNAMES(pl))
#define RLIM_SAVED_CUR RLIM_INFINITY
#define _STDIO_H_ 
#define IPPROTO_PGM 113
#define memmove(dest,...) __builtin___memmove_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define UID_MAX 2147483647U
#define THREAD_AFFINITY_TAG_NULL 0
#define ATTR_FILE_VALIDMASK 0x000037FF
#define HOST_CALENDAR_SET_REPLYID 951
#define DTF_HIDEW 0x0001
#define POSIX_MADV_WILLNEED 3
#define PRIuLEAST64 PRIu64
#define _NGX_BUF_H_INCLUDED_ 
#define PerlMem_get_lock() 
#define U32_MAX_P1_HALF (2.0 * (1 + ((U32_MAX) >> 2)))
#define SO_NUMRCVPKT 0x1112
#define REPLACEMENT_CHARACTER_UTF8 "\xEF\xBF\xBD"
#define NGX_HTTP_LOWLEVEL_BUFFERED 0xf0
#define host_set_syspolicyd_port(host,port) (host_set_special_port((host), HOST_SYSPOLICYD_PORT, (port)))
#define KEV_DL_MASTER_ELECTED 23
#define PERL_ARGS_ASSERT_CK_SUBSTR assert(o)
#define LIST_INSERT_BEFORE(listelm,elm,field) do { LIST_CHECK_PREV(listelm, field); (elm)->field.le_prev = (listelm)->field.le_prev; LIST_NEXT((elm), field) = (listelm); *(listelm)->field.le_prev = (elm); (listelm)->field.le_prev = &LIST_NEXT((elm), field); } while (0)
#define OPpCONST_NOVER 0x02
#define RX_GOFS(rx_sv) (RXp_GOFS(ReANY(rx_sv)))
#define nBIT_UMAX(n) nBIT_MASK(n)
#define ATTR_CMNEXT_LINKID 0x00000010
#define PRIdPTR "ld"
#define REENTRANT_PROTO_B_B 1
#define KEV_DL_QOS_MODE_CHANGED 29
#define PERL_ARGS_ASSERT_SV_SETREF_UV assert(rv)
#define CALLREGFREE_PVT(prog) if(prog && RX_ENGINE(prog)) RX_ENGINE(prog)->rxfree(aTHX_ (prog))
#define HEK_WASUTF8(hek) (HEK_FLAGS(hek) & HVhek_WASUTF8)
#define IPPROTO_PIM 103
#define memcpy(dest,...) __builtin___memcpy_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define ATTR_VOL_MINALLOCATION 0x00000020
#define U32_MAX UINT_MAX
#define HAS_SIGINFO_SI_VALUE 
#define SCNi32 "i"
#define PCRE2_JIT_INVALID_UTF 0x00000100u
#define PerlLIO_open3(file,flag,perm) open((file), (flag), (perm))
#define PerlSIO_get_ptr(f) NULL
#define CPU_SUBTYPE_POWERPC_620 ((cpu_subtype_t) 8)
#define ngx_null_command { ngx_null_string, 0, NULL, 0, 0, NULL }
#define MACH_RCV_TRAILER_AV 7
#define _generic_LC_invlist_utf8_safe(macro,classnum,p,e) _generic_LC_utf8_safe(macro, p, e, _is_utf8_FOO(classnum, p, e))
#define EINTR 4
#define x86_THREAD_FULL_STATE64 23
#define case_255_SBOX32(hash,state,key) 
#define isCNTRL_LC_utf8_safe(p,e) _generic_LC_utf8_safe(isCNTRL_LC, p, e, 0)
#define I8TYPE signed char
#define REENTRANT_PROTO_B_SBI 9
#define case_208_SBOX32(hash,state,key) 
#define PERL_MAGIC_arylen_p '@'
#define PATH_MAX 1024
#define PERL_ARGS_ASSERT_IS_UTF8_FIXED_WIDTH_BUF_LOC_FLAGS 
#define KEV_DL_SIFMEDIA 5
#define isCNTRL(c) isCNTRL_A(c)
#define SvUVXx(sv) SvUVX(sv)
#define is_PROBLEMATIC_LOCALE_FOLDEDS_START_utf8(s) ( ( ((const U8*)s)[0] <= 0x7F ) ? 1 : ( inRANGE_helper_(U8, ((const U8*)s)[0], 0xC2, 0xC3) ) ? 2 : ( 0xC4 == ((const U8*)s)[0] ) ? ( ( inRANGE_helper_(U8, ((const U8*)s)[1], 0xB0, 0xB1) ) ? 2 : 0 ) : ( 0xC5 == ((const U8*)s)[0] ) ? ( ( 0x89 == ((const U8*)s)[1] || 0xB8 == ((const U8*)s)[1] || 0xBF == ((const U8*)s)[1] ) ? 2 : 0 ): ( 0xC7 == ((const U8*)s)[0] ) ? ( ( 0xB0 == ((const U8*)s)[1] ) ? 2 : 0 ) : ( 0xCA == ((const U8*)s)[0] ) ? ( ( 0xBC == ((const U8*)s)[1] ) ? 2 : 0 ) : ( 0xCE == ((const U8*)s)[0] ) ? ( ( ( ((const U8*)s)[1] & 0xDF ) == 0x9C ) ? 2 : 0 ) : ( 0xE1 == ((const U8*)s)[0] ) ? ( ( ( 0xBA == ((const U8*)s)[1] ) && ( inRANGE_helper_(U8, ((const U8*)s)[2], 0x96, 0x9A) || 0x9E == ((const U8*)s)[2] ) ) ? 3 : 0 ): ( 0xE2 == ((const U8*)s)[0] ) ? ( ( ( 0x84 == ((const U8*)s)[1] ) && ( inRANGE_helper_(U8, ((const U8*)s)[2], 0xAA, 0xAB) ) ) ? 3 : 0 ): ( ( ( 0xEF == ((const U8*)s)[0] ) && ( 0xAC == ((const U8*)s)[1] ) ) && ( inRANGE_helper_(U8, ((const U8*)s)[2], 0x80, 0x86) ) ) ? 3 : 0 )
#define PL_Xpv (vTHX->IXpv)
#define VM_MEMORY_ATS 50
#define PL_MemParse (vTHX->IMemParse)
#define NGX_CRYPT 1
#define KERN_NO_SPACE 3
#define NGX_CONF_ANY 0x00000400
#define IOPOL_IMPORTANT 1
#define case_187_SBOX32(hash,state,key) 
#define VM_MEMORY_LIBDISPATCH 74
#define SO_LINGER 0x0080
#define VM_MEMORY_IMAGEIO 70
#define my_atof(a) Perl_my_atof(aTHX_ a)
#define OPpDONT_INIT_GV 0x04
#define AF_IMPLINK 3
#define SvIV_nomg(sv) (SvIOK(sv) ? SvIVX(sv) : sv_2iv_flags(sv, 0))
#define MEMORY_OBJECT_RETURN_ALL 2
#define SIOCAUTONETMASK _IOW('i', 39, struct ifreq)
#define sortsv_flags(a,b,c,d) Perl_sortsv_flags(aTHX_ a,b,c,d)
#define __FLT32_IS_IEC_60559__ 2
#define CopLABEL_alloc(pv) ((pv)?savepv(pv):NULL)
#define sv_mortalcopy_flags(a,b) Perl_sv_mortalcopy_flags(aTHX_ a,b)
#define _MACH_PROCESSOR_INFO_H_ 
#define HAS_ENDNETENT 
#define IPV6PORT_RESERVEDMIN 600
#define NGX_LOG_WARN 5
#define PCRE2_ERROR_NULL_PATTERN 116
#define savesharedpv(a) Perl_savesharedpv(aTHX_ a)
#define FREE_THREAD_KEY STMT_START { pthread_key_delete(PL_thr_key); } STMT_END
#define PL_vtbl_collxfrm PL_magic_vtables[want_vtbl_collxfrm]
#define call_pv(a,b) Perl_call_pv(aTHX_ a,b)
#define DM_EUID 0x002
#define UNICODE_DISALLOW_NONCHAR 0x0020
#define prescan_version(a,b,c,d,e,f,g) Perl_prescan_version(aTHX_ a,b,c,d,e,f,g)
#define MoveD(s,d,n,t) (MEM_WRAP_CHECK_(n,t) perl_assert_ptr(d), perl_assert_ptr(s), memmove((char*)(d),(const char*)(s), (n) * sizeof(t)))
#define ILL_ILLADR 5
#define PERL_ARGS_ASSERT_DO_MSGRCV assert(mark); assert(sp)
#define __LDBL_MIN__ 3.36210314311209350626267781732175260e-4932L
#define AF_UNSPEC 0
#define TIOCMGET _IOR('t', 106, int)
#define PERL_ARGS_ASSERT_REG_NAMED_BUFF_FETCH assert(rx); assert(namesv)
#define GETSERVBYNAME_R_PROTO 0
#define IS_UTF8_CHAR(p,n) (isUTF8_CHAR(p, (p) + (n)) == n)
#define SAVEf_SETMAGIC 1
#define NI_NOFQDN 0x00000001
#define PERL_ARGS_ASSERT_SCAN_VSTRING assert(s); assert(e); assert(sv)
#define PL_collxfrm_mult (vTHX->Icollxfrm_mult)
#define CXt_LOOP_PLAIN 8
#define NGX_POOL_ALIGNMENT 16
#define MGf_REFCOUNTED 2
#define PERL_ARGS_ASSERT_SI_DUP assert(param)
#define DELAY(n) { int N = (n); while (--N > 0); }
#define TAINT_NOT (PL_tainted = FALSE)
#define PERL_PRIgldbl "Lg"
#define ngx_tolower(c) (u_char) ((c >= 'A' && c <= 'Z') ? (c | 0x20) : c)
#define VM_MEMORY_GUARD 31
#define VM_MEMORY_MALLOC_HUGE 4
#define MACH_PORT_DEAD ((mach_port_name_t) ~0)
#define PL_debstash (vTHX->Idebstash)
#define MACH_PORT_NULL 0
#define POPul ((unsigned long)SvIVx(POPs))
#define __FLT32X_MIN__ 2.22507385850720138309023271733240406e-308F32x
#define NV_NAN_PAYLOAD_PERM_7_TO_0 0x7, 0x6, 0x5, 0x4, 0x3, 0x2, 0x1, 0x0
#define VQ_FLAG10000 0x10000
#define PCRE2_JIT_COMPLETE 0x00000001u
#define HAS_OPENAT 
#define MEMORY_OBJECT_RESPECT_CACHE 0x2
#define TIOCM_CD TIOCM_CAR
#define KERN_LOW_PRI_WINDOW 56
#define SvNIOK_nogthink(sv) (SvNIOK(sv) && !(SvFLAGS(sv) & (SVf_THINKFIRST|SVs_GMG)))
#define PERL_ARGS_ASSERT__TO_UTF8_LOWER_FLAGS assert(p); assert(ustrp)
#define MACH_MSGH_BITS_HAS_REMOTE(bits) (MACH_MSGH_BITS_REMOTE(bits) != MACH_MSGH_BITS_ZERO)
#define PERL_MAGIC_shared 'N'
#define isIDFIRST_LC_utf8(p,e) isIDFIRST_LC_utf8_safe(p, e)
#define sv_upgrade(a,b) Perl_sv_upgrade(aTHX_ a,b)
#define is_VERTWS_cp_high(cp) ( inRANGE_helper_(UV, cp, 0x2028, 0x2029) )
#define PERL_ARGS_ASSERT_NEWRANGE assert(left); assert(right)
#define MACH_PORT_TYPE_SEND_RECEIVE (MACH_PORT_TYPE_SEND|MACH_PORT_TYPE_RECEIVE)
#define _STDDEF_H 
#define EAI_FAMILY 5
#define __DARWIN_BYTE_ORDER __DARWIN_LITTLE_ENDIAN
#define PERL_ARGS_ASSERT_PERLIO_GET_PTR 
#define INADDR_ALLRTRS_GROUP (u_int32_t)0xe0000002
#define ATTR_VOL_MAXOBJCOUNT 0x00000800
#define PERL_ARGS_ASSERT_IS_UTF8_STRING_FLAGS assert(s)
#define reentrant_init() Perl_reentrant_init(aTHX)
#define MATH_ERRNO 1
#define _PASSWORD_NOCHG 0x04
#define GETPROTOENT_R_PROTO 0
#define PerlSock_sendto(s,b,l,f,t,tlen) sendto(s, b, l, f, t, tlen)
#define host_set_telemetry_port(host,port) (host_set_special_port((host), HOST_TELEMETRY_PORT, (port)))
#define PERL_ARGS_ASSERT_XS_BOOT_EPILOG 
#define NGX_HTTP_SUB_BUFFERED 0x02
#define SCNoLEAST16 SCNo16
#define NGX_TIMER_LAZY_DELAY 300
#define PERL_SYS_INIT3(argc,argv,env) Perl_sys_init3(argc, argv, env)
#define PCRE2_ERROR_UTF8_ERR1 (-3)
#define PCRE2_ERROR_UTF8_ERR2 (-4)
#define PCRE2_ERROR_UTF8_ERR3 (-5)
#define PCRE2_ERROR_UTF8_ERR4 (-6)
#define PCRE2_ERROR_UTF8_ERR5 (-7)
#define PCRE2_ERROR_UTF8_ERR6 (-8)
#define PCRE2_ERROR_UTF8_ERR7 (-9)
#define PCRE2_ERROR_UTF8_ERR8 (-10)
#define PCRE2_ERROR_UTF8_ERR9 (-11)
#define ngx_null_string { 0, NULL }
#define PerlEnv_free_childenv(e) free_childenv((e))
#define USE_DYNAMIC_LOADING 
#define PL_curcop (vTHX->Icurcop)
#define VM_MEMORY_COREPROFILE 71
#define HAS_FLOCK 
#define HW_MACHINE 1
#define STAILQ_FOREACH(var,head,field) for((var) = STAILQ_FIRST((head)); (var); (var) = STAILQ_NEXT((var), field))
#define dTHXa(a) pTHX = (tTHX)a
#define KEV_INET_ARPRTRFAILURE 9
#define Quad_t long
#define KERN_RAGE_PROC 1
#define dTHXo dTHX
#define dTHXs dNOOP
#define dTHXx dTHX
#define sv_setref_pvn(a,b,c,d) Perl_sv_setref_pvn(aTHX_ a,b,c,d)
#define PadlistNAMES(pl) *((PADNAMELIST **)PadlistARRAY(pl))
#define PRIoFAST16 PRIo16
#define PCRE2_ERROR_END_BACKSLASH_C 102
#define PERL_ARGS_ASSERT_PACKLIST assert(cat); assert(pat); assert(patend); assert(beglist); assert(endlist)
#define MSG_RCVMORE 0x4000
#define PERL_ARGS_ASSERT_OP_PARENT assert(o)
#define DEV_BSIZE 512
#define _NGX_PALLOC_H_INCLUDED_ 
#define _PERL_HASH_SEED_roundup(x) __PERL_HASH_SEED_roundup(x,__PERL_HASH_WORD_SIZE)
#define HeKFLAGS(he) HEK_FLAGS(HeKEY_hek(he))
#define MACH_SEND_TRAILER 0x00020000
#define MPG_FLAGS_STRICT_REPLY_MASK (0xffull << 56)
#define NET_SERVICE_TYPE_RD 8
#define NGX_RESOLVE_CNAME 5
#define TASK_VM_INFO_REV5_COUNT TASK_VM_INFO_COUNT
#define SCNoLEAST32 SCNo32
#define MSVC_DIAG_RESTORE_DECL MSVC_DIAG_RESTORE dNOOP
#define NET_SERVICE_TYPE_RV 5
#define IP_MULTICAST_LOOP 11
#define XDIGIT_VALUE(c) (__ASSERT_(isXDIGIT(c)) ((NATIVE_TO_LATIN1(c) >> 6) & 1) + ((NATIVE_TO_LATIN1(c) >> 3) & 8) + ((c) & 0xF))
#define PERL_ARGS_ASSERT_POPULATE_ISA assert(name)
#define OS_CONST __attribute__((__const__))
#define EXC_I386_DIV 1
#define PCRE2_ERROR_BADSUBSTITUTION (-59)
#define PERL_ARGS_ASSERT_HV_ITERINIT assert(hv)
#define KIPC_SOMAXCONN 3
#define pcre2_callout_block PCRE2_SUFFIX(pcre2_callout_block_)
#define SO_DONTTRUNC 0x2000
#define SvPVbytex_force(sv,len) sv_pvbyten_force(sv, &len)
#define _POSIX2_RE_DUP_MAX 255
#define HINT_FILETEST_ACCESS 0x00400000
#define _PATH_MASTERPASSWD_LOCK "/etc/ptmp"
#define sv_setref_pvs(rv,classname,str) Perl_sv_setref_pvn(aTHX_ rv, classname, STR_WITH_LEN(str))
#define MACH_PORT_RIGHT_SEND_ONCE ((mach_port_right_t) 2)
#define CVf_CLONE 0x0020
#define MADV_PAGEOUT 10
#define GvINTRO(gv) (GvFLAGS(gv) & GVf_INTRO)
#define M_PAT_MODS QR_PAT_MODS LOOP_PAT_MODS
#define DEBUG_L_FLAG 0x04000000
#define PERL_ARGS_ASSERT_IS_LVALUE_SUB 
#define LATIN_SMALL_LIGATURE_LONG_S_T_UTF8 "\xEF\xAC\x85"
#define PRIoFAST32 PRIo32
#define __IPHONE_8_2 80200
#define NGX_HTTP_UPSTREAM_FT_STATUS (NGX_HTTP_UPSTREAM_FT_HTTP_500 |NGX_HTTP_UPSTREAM_FT_HTTP_502 |NGX_HTTP_UPSTREAM_FT_HTTP_503 |NGX_HTTP_UPSTREAM_FT_HTTP_504 |NGX_HTTP_UPSTREAM_FT_HTTP_403 |NGX_HTTP_UPSTREAM_FT_HTTP_404 |NGX_HTTP_UPSTREAM_FT_HTTP_429)
#define PRIuFAST32 PRIu32
#define HOST_CPU_LOAD_INFO_COUNT ((mach_msg_type_number_t) (sizeof (host_cpu_load_info_data_t) / sizeof (integer_t)))
#define _MACH_DEBUG_IPC_INFO_H_ 
#define PERL_ARGS_ASSERT_FREE_TIED_HV_POOL 
#define sv_catpvn_flags(a,b,c,d) Perl_sv_catpvn_flags(aTHX_ a,b,c,d)
#define CPF_MASK (CPF_OVERWRITE|CPF_IGNORE_MODE)
#define PERL_ARGS_ASSERT_DO_SV_DUMP assert(file)
#define CSH "/bin/csh"
#define grok_number(a,b,c) Perl_grok_number(aTHX_ a,b,c)
#define INT_FAST16_MAX INT16_MAX
#define PL_utf8_tofold (vTHX->Iutf8_tofold)
#define HAS_COPYSIGNL 
#define ngx_queue_prev(q) (q)->prev
#define RXp_EXTFLAGS(rx) ((rx)->extflags)
#define SvUOK_nog(sv) ((SvFLAGS(sv) & (SVf_IOK|SVf_IVisUV|SVs_GMG)) == (SVf_IOK|SVf_IVisUV))
#define TCP_MAXOLEN (TCP_MAXHLEN - sizeof(struct tcphdr))
#define NOTE_OOB 0x00000002
#define SCNoLEAST64 SCNo64
#define GV_NO_SVGMAGIC 0x800
#define IPPROTO_PVP 75
#define DBL_MIN_EXP __DBL_MIN_EXP__
#define clbase(i) (i)
#define VM_MEMORY_GENEALOGY 78
#define PERL_ARGS_ASSERT_SV_DERIVED_FROM assert(sv); assert(name)
#define memNEs(s1,l,s2) (! memEQs(s1, l, s2))
#define TIOCGPGRP _IOR('t', 119, int)
#define NET_SERVICE_TYPE_VI 3
#define IPPROTO_TPXX 39
#define __NULLABILITY_COMPLETENESS_PUSH 
#define QUAD_IS_INT 1
#define PPAUSE 40
#define NGX_MAX_PROCESSES 1024
#define PERL_ARGS_ASSERT_SV_CATSV_MG assert(dsv)
#define PeRl_UINT64_C(c) CAT2(c,UL)
#define ENOSR 98
#define PRIoFAST64 PRIo64
#define SSPOPUV (PL_savestack[--PL_savestack_ix].any_uv)
#define PERL_PV_PRETTY_LTGT 0x000004
#define S_ISDIR(m) (((m) & S_IFMT) == S_IFDIR)
#define MADV_NORMAL POSIX_MADV_NORMAL
#define ngx_tm_year tm_year
#define CXt_SUB 9
#define savestack_grow() Perl_savestack_grow(aTHX)
#define SVf32 SVf_(32)
#define NGX_EAGAIN EAGAIN
#define IPV6_USE_MIN_MTU 42
#define PCRE2_NEWLINE_ANY 4
#define _V6_ILP32_OFFBIG __ILP32_OFFBIG
#define NGX_ENOTCONN ENOTCONN
#define U64SIZE 8
#define NGX_CONF_UNSET_UINT (ngx_uint_t) -1
#define __FLT64_MANT_DIG__ 53
#define ABORT() kill(PerlProc_getpid(),SIGABRT);
#define SIOCGIFMAC _IOWR('i', 130, struct ifreq)
#define PL_unsafe (vTHX->Iunsafe)
#define packWARN4(a,b,c,d) ((a) | ((b)<<8) | ((c)<<16) | ((d) <<24))
#define ngx_socket socket
#define isALPHAU(c) isALPHA_L1(c)
#define PerlSock_recv(s,b,l,f) recv(s, b, l, f)
#define REENTRANT_PROTO_I_LISD 35
#define HAS_SETGROUPS 
#define GV_NOEXPAND 0x40
#define BHKf_bhk_pre_end 0x02
#define PERL_ARGS_ASSERT_DO_READLINE 
#define PL_exit_flags (vTHX->Iexit_flags)
#define save_alloc(a,b) Perl_save_alloc(aTHX_ a,b)
#define IPV6CTL_SOURCECHECK 10
#define UTF_MIN_START_BYTE ((UTF_CONTINUATION_MARK >> UTF_ACCUMULATION_SHIFT) | UTF_START_MARK(2))
#define HW_DISKNAMES 8
#define safesysrealloc Perl_safesysrealloc
#define cophh_exists_pvn(cophh,keypv,keylen,hash,flags) cBOOL(Perl_refcounted_he_fetch_pvn(aTHX_ cophh, keypv, keylen, hash, flags | COPHH_EXISTS))
#define QMD_TRACE_HEAD(head) 
#define PERL_ARGS_ASSERT_PADLIST_DUP assert(srcpad); assert(param)
#define NGX_RESOLVE_TIMEDOUT NGX_ETIMEDOUT
#define HSf_SETXSUBFN 0x00000020
#define PCRE2_MULTILINE 0x00000400u
#define NGX_RESOLVE_SRV 33
#define PL_minus_a (vTHX->Iminus_a)
#define cv_undef(a) Perl_cv_undef(aTHX_ a)
#define OP_IS_STAT(op) (OP_IS_FILETEST(op) || (op) == OP_LSTAT || (op) == OP_STAT)
#define RX_SUBOFFSET(rx_sv) (RXp_SUBOFFSET(ReANY(rx_sv)))
#define PerlProc_getpid() getpid()
#define __DARWIN_ALIAS_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_NON_CANCELABLE __DARWIN_SUF_UNIX03)
#define PL_perl_destruct_level (vTHX->Iperl_destruct_level)
#define WARN_PIPE 10
#define __DARWIN_ALIAS_I(sym) __asm("_" __STRING(sym) __DARWIN_SUF_64_BIT_INO_T __DARWIN_SUF_UNIX03)
#define PerlSIO_setlinebuf(f) setlinebuf(f)
#define SV_COW_OTHER_PVS 1024
#define _INO_T 
#define SS_ACCVIO 0
#define PL_vtbl_packelem PL_magic_vtables[want_vtbl_packelem]
#define IPV6_2292PKTOPTIONS 25
#define EFL_VM 0x00020000
#define _generic_LC_underscore(c,utf8_locale_classnum,non_utf8_func) _generic_LC_base(c, utf8_locale_classnum, (non_utf8_func( (_LC_CAST) (c)) || (char)(c) == '_'))
#define SVprv_PCS_IMPORTED SVp_SCREAM
#define SVf_THINKFIRST (SVf_READONLY|SVf_PROTECT|SVf_ROK|SVf_FAKE |SVs_RMG|SVf_IsCOW)
#define LC_NUMERIC_LOCK(cond) NOOP
#define NGX_HTTP_VAR_CHANGEABLE 1
#define IN6_IS_ADDR_LINKLOCAL(a) (((a)->s6_addr[0] == 0xfe) && (((a)->s6_addr[1] & 0xc0) == 0x80))
#define isSPACE_LC_utf8_safe(p,e) _generic_LC_non_invlist_utf8_safe(isSPACE_LC, is_XPERLSPACE_high, p, e)
#define A_SETUMASK 14
#define PERL_ARGS_ASSERT_CVGV assert(sv)
#define PL_dbargs (vTHX->Idbargs)
#define aMY_CXT my_cxtp
#define cx_popeval(a) Perl_cx_popeval(aTHX_ a)
#define cx_pusheval(a,b,c) Perl_cx_pusheval(aTHX_ a,b,c)
#define PERL_ARGS_ASSERT_SAVE_HPTR assert(hptr)
#define FD_SET(n,p) __DARWIN_FD_SET(n, p)
#define PL_checkav_save (vTHX->Icheckav_save)
#define __SIZEOF_LONG_DOUBLE__ 16
#define PERL_ARGS_ASSERT_THREAD_LOCALE_TERM 
#define NV_PRESERVES_UV_BITS 53
#define PerlSock_getservbyport(port,p) getservbyport(port, p)
#define HAS_SETRUID 
#define PL_vtbl_mglob PL_magic_vtables[want_vtbl_mglob]
#define FUNCTION__ __func__
#define av_unshift(a,b) Perl_av_unshift(aTHX_ a,b)
#define pcre2_jit_match PCRE2_SUFFIX(pcre2_jit_match_)
#define CPUFAMILY_INTEL_ICELAKE 0x38435547
#define IP_RSVP_ON 15
#define MUTEX_UNLOCK(m) STMT_START { int _eC_; if ((_eC_ = perl_pthread_mutex_unlock((m)))) Perl_croak_nocontext("panic: MUTEX_UNLOCK (%d) [%s:%d]", _eC_, __FILE__, __LINE__); } STMT_END
#define VM_MEMORY_MACH_MSG 20
#define _SC_ARG_MAX 1
#define case_44_SBOX32(hash,state,key) 
#define ngx_del_timer ngx_event_del_timer
#define PUSH_MULTICALL(the_cv) PUSH_MULTICALL_FLAGS(the_cv, 0)
#define VM_FLAGS_SUPERPAGE_NONE (SUPERPAGE_NONE << VM_FLAGS_SUPERPAGE_SHIFT)
#define PERL_ARGS_ASSERT_GV_INIT_PVN assert(gv); assert(name)
#define SvPV_force_nomg(sv,len) SvPV_force_flags(sv, len, 0)
#define INT_FAST16_MIN INT16_MIN
#define DT_BLK 6
#define case_178_SBOX32(hash,state,key) 
#define PERL_ARGS_ASSERT_SV_MORTALCOPY 
#define CvSPECIAL_on(cv) (CvUNIQUE_on(cv),SvFAKE_on(cv))
#define IPPROTO_3PC 34
#define SSNEWa(size,align) Perl_save_alloc(aTHX_ (size), (I32)(align - ((size_t)((caddr_t)&PL_savestack[PL_savestack_ix]) % align)) % align)
#define PTHREAD_CREATE_JOINABLE 1
#define KEV_DL_IF_IDLE_ROUTE_REFCNT 18
#define DEBUG_R_TEST_ UNLIKELY(PL_debug & DEBUG_R_FLAG)
#define NV_NAN_PAYLOAD_PERM_SKIP_EIGHT 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
#define SEEK_CUR 1
#define NGX_HAVE_GCC_ATOMIC 1
#define KEV_DL_NODE_ABSENCE 22
#define HAS_TCGETPGRP 
#define PERL_ARGS_ASSERT_DO_SYSSEEK assert(gv)
#define REXEC_COPY_STR 0x01
#define REENTRANT_PROTO_I_TS 45
#define PERL_ARGS_ASSERT_MRO_REGISTER assert(mro)
#define XopENTRYCUSTOM(o,which) (Perl_custom_op_get_field(aTHX_ o, XOPe_ ## which).which)
#define isASCII_A(c) isASCII(c)
#define IP_PORTRANGE_LOW 2
#define MACH_RCV_IN_SET 0x1000400a
#define SAVEt_INT_SMALL 15
#define SS_NORMAL 0
#define DEPENDS_PAT_MODS "d"
#define _generic_isCC(c,classnum) cBOOL(FITS_IN_8_BITS(c) && (PL_charclass[(U8) (c)] & _CC_mask(classnum)))
#define CvPROTOLEN(sv) ( SvPOK(sv) ? SvTYPE(sv) == SVt_PVCV && CvAUTOLOAD(sv) ? SvLEN(sv)-SvCUR(sv)-2 : SvCUR(sv) : 0 )
#define GETGRGID_R_HAS_PTR 
#define SCNxFAST32 SCNx32
#define host_set_amfid_port(host,port) (host_set_special_port((host), HOST_AMFID_PORT, (port)))
#define ngx_tm_mday_t int
#define HW_BYTEORDER 4
#define IP_DROP_SOURCE_MEMBERSHIP 71
#define PRIO_DARWIN_PROCESS 4
#define PERL_ARGS_ASSERT_SV_UNREF_FLAGS assert(ref)
#define _POSIX_CHOWN_RESTRICTED 200112L
#define VOL_CAP_FMT_WRITE_GENERATION_COUNT 0x00100000
#define OPpMAYBE_LVSUB 0x08
#define uvoffuni_to_utf8_flags_msgs(a,b,c,d) Perl_uvoffuni_to_utf8_flags_msgs(aTHX_ a,b,c,d)
#define P_RESV7 0x00800000
#define OPpSPLIT_ASSIGN 0x10
#define P_RESV9 0x02000000
#define __UINT16_TYPE__ short unsigned int
#define save_delete(a,b,c) Perl_save_delete(aTHX_ a,b,c)
#define GvIMPORTED_off(gv) (GvFLAGS(gv) &= ~GVf_IMPORTED)
#define KERN_MAXPARTITIONS 23
#define HAS_SOCKETPAIR 
#define upg_version(a,b) Perl_upg_version(aTHX_ a,b)
#define IPPROTO_HELLO 63
#define KERN_KDDFLAGS 2
#define NGX_POST_EVENTS 2
#define DOUBLEMANTBITS 52
#define __GNUC_STDC_INLINE__ 1
#define PTHREAD_GETSPECIFIC(key) pthread_getspecific(key)
#define claligned(x) ((((int)(x))&CLOFSET)==0)
#define SAVEt_GENERIC_SVREF 28
#define PerlMemParse_free(buf) free((buf))
#define PERL_ARGS_ASSERT_BLOCKHOOK_REGISTER assert(hk)
#define PERL_ARGS_ASSERT_NEWUNOP_AUX 
#define PL_vtbl_isa PL_magic_vtables[want_vtbl_isa]
#define GvNAME_HEK(gv) (GvXPVGV(gv)->xiv_u.xivu_namehek)
#define _SC_XOPEN_REALTIME_THREADS 112
#define isWORDCHAR_LC_utf8_safe(p,e) _generic_LC_invlist_utf8_safe(isWORDCHAR_LC, _CC_WORDCHAR, p, e)
#define __IPHONE_3_1 30100
#define ATTR_FILE_IOBLOCKSIZE 0x00000008
#define HAS_DLADDR 
#define FPE_FLTDIV 1
#define PerlProc_wait(t) wait((t))
#define ngx_conf_merge_msec_value(conf,prev,default) if (conf == NGX_CONF_UNSET_MSEC) { conf = (prev == NGX_CONF_UNSET_MSEC) ? default : prev; }
#define PRIVSHIFT 4
#define WINT_MAX INT32_MAX
#define case_22_SBOX32(hash,state,key) _SBOX32_CASE(22,hash,state,key)
#define MAXBSIZE (256 * 4096)
#define USER_BC_DIM_MAX 3
#define PL_parser (vTHX->Iparser)
#define CPU_SUBTYPE_CELERON CPU_SUBTYPE_INTEL(7, 6)
#define Perl_fp_class_zero(x) (Perl_fp_class(x)==FP_ZERO)
#define HAS_INT64_T 
#define __DBL_HAS_INFINITY__ 1
#define NGX_HAVE_IP_PKTINFO 1
#define sv_pos_u2b_flags(a,b,c,d) Perl_sv_pos_u2b_flags(aTHX_ a,b,c,d)
#define pcre2_callout_enumerate PCRE2_SUFFIX(pcre2_callout_enumerate_)
#define PERL_ARGS_ASSERT_CV_FORGET_SLAB 
#define NGX_USER "nobody"
#define isBLANK_L1(c) _generic_isCC(c, _CC_BLANK)
#define PERL_ARGS_ASSERT_MY_MKSTEMP_CLOEXEC assert(templte)
#define ngx_is_link(sb) (S_ISLNK((sb)->st_mode))
#define PASS_MAX 128
#define PerlLIO_chsize(fd,size) ftruncate((fd), (size))
#define W_EXITCODE(ret,sig) ((ret) << 8 | (sig))
#define PMf_BASE_SHIFT (_RXf_PMf_SHIFT_NEXT+2)
#define TASK_WAIT_STATE_INFO 25
#define CowREFCNT(sv) (*(U8 *)(SvPVX(sv)+SvLEN(sv)-1))
#define RSIZE_MAX (SIZE_MAX >> 1)
#define __OS_ENUM_C_FALLBACK(_name,_type,...) typedef _type _name ##_t; enum _name { __VA_ARGS__ }
#define IP_STRIPHDR 23
#define TASK_POWER_INFO 21
#define MACH_MSGH_BITS_DENAP MACH_MSGH_BITS_RAISEIMP
#define TIOCSCTTY _IO('t', 97)
#define UNICODE_GOT_PERL_EXTENDED UNICODE_DISALLOW_PERL_EXTENDED
#define CPU_SUBTYPE_MC98000_ALL ((cpu_subtype_t) 0)
#define _POSIX_SS_REPL_MAX 4
#define __DARWIN_OS_INLINE static inline
#define STATUS_CURRENT STATUS_UNIX
#define NGX_HTTP_UNKNOWN 0x00000001
#define stdin __stdinp
#define PRIi16 "hi"
#define case_219_SBOX32(hash,state,key) 
#define sv_len(a) Perl_sv_len(aTHX_ a)
#define ATTR_CMN_GRPID 0x00010000
#define __XNU_PRIVATE_EXTERN __attribute__((visibility("hidden")))
#define PERL_ARGS_ASSERT_START_GLOB assert(tmpglob); assert(io)
#define EFL_PF 0x00000004
#define bytes_from_utf8_loc Perl_bytes_from_utf8_loc
#define PerlSock_inet_addr(c) inet_addr(c)
#define AvREAL_only(av) (AvREIFY_off(av), SvFLAGS(av) |= SVpav_REAL)
#define F_SINGLE_WRITER 76
#define DEBUG_C_TEST (0)
#define HAS_COPYSIGN 
#define CPU_TYPE_ARM64_32 (CPU_TYPE_ARM | CPU_ARCH_ABI64_32)
#define _generic_LC_func_utf8_safe(macro,above_latin1,p,e) _generic_LC_utf8_safe(macro, p, e, above_latin1(p, e))
#define ST_INO_SIGN 1
#define U16TYPE unsigned short
#define HAS_ENDPWENT 
#define PERL_ARGS_ASSERT_HV_EXISTS assert(key)
#define NGX_HAVE_MAX_PATH 1
#define AF_SYSTEM 32
#define CPU_SUBTYPE_486 CPU_SUBTYPE_INTEL(4, 0)
#define THREAD_STATE_FLAVOR_LIST 0
#define BUS_NOOP 0
#define HAS_GETPPID 
#define Drand01() Perl_drand48()
#define PERL_PV_PRETTY_DUMP PERL_PV_PRETTY_ELLIPSES|PERL_PV_PRETTY_QUOTE
#define PCRE2_ERROR_RECURSELOOP (-52)
#define THREAD_STATE_MAX I386_THREAD_STATE_MAX
#define VM_MAP_READ_NULL ((vm_map_read_t) 0)
#define SAVEBOOL(b) save_bool(&(b))
#define AF_CHAOS 5
#define CopFILE_free(c) (PerlMemShared_free(CopFILE(c)),(CopFILE(c) = NULL))
#define KERN_UPDATEINTERVAL 25
#define KMOD_DECL(name,version) static kmod_start_func_t name ## _module_start; static kmod_stop_func_t name ## _module_stop; kmod_info_t KMOD_INFO_NAME = { 0, KMOD_INFO_VERSION, -1U, { #name }, { version }, -1, 0, 0, 0, 0, name ## _module_start, name ## _module_stop };
#define PERL_ARGS_ASSERT_UVUNI_TO_UTF8 assert(d)
#define VM_PURGABLE_PURGE_ALL ((vm_purgable_t) 2)
#define PCRE2_ERROR_UNKNOWN_POSIX_CLASS 130
#define CPU_TYPE_ANY ((cpu_type_t) -1)
#define padnew_SAVESUB 4
#define PERL_ARGS_ASSERT_PAD_LEAVEMY 
#define dPOPXiirl(X) IV right = POPi; IV left = CAT2(X,i)
#define F_PATHPKG_CHECK 52
#define HINT_SORT_UNSTABLE 0x00000200
#define NOTE_MACHTIME 0x00000100
#define __INT_FAST16_TYPE__ short int
#define ENV_TERM PERL_RW_MUTEX_DESTROY(&PL_env_mutex)
#define CxPADLOOP(c) ((c)->cx_type & CXp_FOR_PAD)
#define NGX_UNIX_ADDRSTRLEN (sizeof("unix:") - 1 + sizeof(struct sockaddr_un) - offsetof(struct sockaddr_un, sun_path))
#define PERL_ARGS_ASSERT_DIE_SV assert(baseex)
#define PERL_ARGS_ASSERT_FOLDEQ_UTF8 
#define SIOCSIFBOND _IOW('i', 70, struct ifreq)
#define newANONSUB(a,b,c) Perl_newANONSUB(aTHX_ a,b,c)
#define PCRE2_ERROR_CALLOUT_BAD_STRING_DELIMITER 182
#define PERL_ARGS_ASSERT_REG_QR_PACKAGE assert(rx)
#define case_64_SBOX32(hash,state,key) 
#define TID_NULL ((uint64_t) 0)
#define isALNUMC_uni(c) isALPHANUMERIC_uni(c)
#define PerlProc_popen_list(m,n,a) my_popen_list((m),(n),(a))
#define NATIVE8_TO_UNI(ch) NATIVE_TO_LATIN1(ch)
#define MACH_VOUCHER_ATTR_BITS_STORE MACH_VOUCHER_ATTR_USER_DATA_STORE
#define DEBUG_yv_TEST (0)
#define PERL_SCAN_DISALLOW_PREFIX 0x02
#define TASK_EXTMOD_INFO 19
#define I_PWD 
#define parse_listexpr(a) Perl_parse_listexpr(aTHX_ a)
#define ECHILD 10
#define CopyD(s,d,n,t) (MEM_WRAP_CHECK_(n,t) perl_assert_ptr(d), perl_assert_ptr(s), memcpy((char*)(d),(const char*)(s), (n) * sizeof(t)))
#define EF_MAY_SHARE_BLOCKS 0x00000001
#define TCPOPT_TSTAMP_HDR (TCPOPT_NOP<<24|TCPOPT_NOP<<16|TCPOPT_TIMESTAMP<<8|TCPOLEN_TIMESTAMP)
#define FF_END 0
#define save_ary(a) Perl_save_ary(aTHX_ a)
#define KERN_KDGETREG 9
#define __DARWIN_EXTSN_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_EXTSN __DARWIN_SUF_NON_CANCELABLE)
#define MINCORE_INCORE 0x1
#define CPU_SUBTYPE_PTRAUTH_ABI 0x80000000
#define Gconvert(x,n,t,b) sprintf((b),"%.*g",(n),(x))
#define PERL_ARGS_ASSERT_MAGIC_GETNKEYS assert(sv); assert(mg)
#define MACH_RCV_TRAILER_NULL 0
#define MNT_DWAIT 4
#define OPpEVAL_RE_REPARSING 0x20
#define P_DIRTY_TRACK 0x00000001
#define MACH_PORT_STATUS_FLAG_GUARD_IMMOVABLE_RECEIVE 0x40
#define PERL_ARGS_ASSERT_UTF8N_TO_UVCHR assert(s)
#define SvSTASH(sv) ((XPVMG*) SvANY(sv))->xmg_stash
#define TIOCSETAF _IOW('t', 22, struct termios)
#define _POSIX_SPORADIC_SERVER (-1)
#define LC_MESSAGES 6
#define SAVEt_GVSLOT 52
#define OS_USED __attribute__((__used__))
#define S_TYPEISTMO(buf) (0)
#define PERL_ARGS_ASSERT_UTILIZE assert(idop)
#define PERL_ARGS_ASSERT_DEB assert(pat)
#define TOPu ((UV)SvUV(TOPs))
#define ngx_http_set_ctx(r,c,module) r->ctx[module.ctx_index] = c;
#define PERL_SCAN_ALLOW_UNDERSCORES 0x01
#define PERL_ARGS_ASSERT_NEWGVOP assert(gv)
#define SETNETENT_R_PROTO 0
#define true 1
#define SA_RESETHAND 0x0004
#define PRIiPTR "li"
#define SIGTERM 15
#define CvCONST_on(cv) (CvFLAGS(cv) |= CVf_CONST)
#define ngx_timeofday() (ngx_time_t *) ngx_cached_time
#define PERL_ARGS_ASSERT_GIMME_V 
#define _FSTDIO 
#define PERL_ARGS_ASSERT_AV_MAKE assert(strp)
#define cv_ckproto(cv,gv,p) cv_ckproto_len_flags((cv), (gv), (p), (p) ? strlen(p) : 0, 0)
#define __OS_EXTENSION_UNAVAILABLE(_msg) __OSX_EXTENSION_UNAVAILABLE(_msg) __IOS_EXTENSION_UNAVAILABLE(_msg)
#define HAS_LRINT 
#define HAS_MKSTEMP 
#define TIOCPKT_STOP 0x04
#define pTHXx PerlInterpreter *my_perl
#define __DARWIN_CTYPE_TOP_inline __header_inline
#define _NGX_PROXY_PROTOCOL_H_INCLUDED_ 
#define isUTF8_CHAR Perl_isUTF8_CHAR
#define HOST_LAST_SPECIAL_KERNEL_PORT HOST_IO_MASTER_PORT
#define OS_COLD __attribute__((__cold__))
#define PERL_ARGS_ASSERT_SV_CHOP assert(sv)
#define NGX_HTTP_LMT_CONF 0x80000000
#define PERL_ARGS_ASSERT_POP_SCOPE 
#define IoIFP(sv) (sv)->sv_u.svu_fp
#define PERL_ARGS_ASSERT_GET_NO_MODIFY 
#define HvARRAY(hv) ((hv)->sv_u.svu_hash)
#define PERL_IS_GCC 1
#define PL_unitcheckav_save (vTHX->Iunitcheckav_save)
#define DEBUG_A(a) 
#define UNI_DISPLAY_BACKSPACE 0x0004
#define __attribute__deprecated__ __attribute__((deprecated))
#define GLOBAL_PAT_MOD 'g'
#define PL_start_env (vTHX->Istart_env)
#define __kpi_unavailable 
#define PERL_DTRACE_PROBE_FILE_LOADING(cv) 
#define NGX_EEXIST_FILE EEXIST
#define MACH_MSG_IPC_KERNEL 0x00000800
#define HW_TARGET 26
#define PERLSI_DESTROY 6
#define MAP_JIT 0x0800
#define PERL_GET_THX ((PerlInterpreter *)PERL_GET_CONTEXT)
#define _SS_PAD1SIZE (_SS_ALIGNSIZE - sizeof(__uint8_t) - sizeof(sa_family_t))
#define case_237_SBOX32(hash,state,key) 
#define sv_reftype(a,b) Perl_sv_reftype(aTHX_ a,b)
#define KERN_KDCPUMAP 24
#define ngx_done_events ngx_event_actions.done
#define NV_NAN_SET_QUIET(nvp) (NV_NAN_QS_QUIET ? (NV_NAN_QS_BYTE(nvp) |= NV_NAN_QS_BIT) : (NV_NAN_QS_BYTE(nvp) &= ~NV_NAN_QS_BIT))
#define PERL_TARGETARCH ""
#define _SC_STREAM_MAX 26
#define Sv_Grow sv_grow
#define TAINT_set(s) (PL_tainted = (s))
#define SIG_SIZE 33
#define _STRUCT_IOVEC 
#define hv_free_ent(a,b) Perl_hv_free_ent(aTHX_ a,b)
#define POLICY_TIMESHARE_INFO_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_timeshare_info)/sizeof(integer_t)))
#define MACH_MSG_ALLOCATE 2
#define BUS_OBJERR 3
#define case_169_SBOX32(hash,state,key) 
#define PERL_ARGS_ASSERT_PERL_CONSTRUCT assert(my_perl)
#define PERL_ARGS_ASSERT_BYTES_TO_UTF8 assert(s); assert(lenp)
#define KIPC_MAXSOCKBUF 1
#define IPPROTO_RSVP 46
#define SVf_IsCOW 0x10000000
#define __PTHREAD_ONCE_SIZE__ 8
#define G_FAKINGEVAL 0x100
#define PF_DLI AF_DLI
#define _NGX_RBTREE_H_INCLUDED_ 
#define newAV() MUTABLE_AV(newSV_type(SVt_PVAV))
#define VM_REGION_BASIC_INFO_COUNT_64 ((mach_msg_type_number_t) (sizeof(vm_region_basic_info_data_64_t)/sizeof(int)))
#define RXf_PMf_STRICT (1U<<(RXf_PMf_STD_PMMOD_SHIFT+10))
#define THREAD_PRECEDENCE_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (thread_precedence_policy_data_t) / sizeof (integer_t)))
#define _NGX_PARSE_TIME_H_INCLUDED_ 
#define HAS_GETPRIORITY 
#define PERL_ARGS_ASSERT_NEWSVIV 
#define NGX_HTTP_UPSTREAM_IGN_CACHE_CONTROL 0x00000010
#define CxHASARGS(c) (((c)->cx_type & CXp_HASARGS) == CXp_HASARGS)
#define sv_bless(a,b) Perl_sv_bless(aTHX_ a,b)
#define _PTRDIFF_T_DECLARED 
#define KERN_TRANSLATE 44
#define _NGX_HASH_H_INCLUDED_ 
#define _SC_2_PBS_LOCATE 62
#define PCRE2_ERROR_UNICODE_DISALLOWED_CODE_POINT 173
#define sigemptyset(set) (*(set) = 0, 0)
#define _PERL_HASH_SEED_BYTES ( __PERL_HASH_SEED_BYTES + (int)( 3 * sizeof(U32)) )
#define KERN_PROC_PGRP 2
#define PL_filemode (vTHX->Ifilemode)
#define PCRE2_ERROR_CALLOUT_STRING_TOO_LONG 172
#define ngx_send_chain ngx_io.send_chain
#define sv_catpvn_nomg_maybeutf8(dsv,sstr,slen,is_utf8) sv_catpvn_flags(dsv, sstr, slen, (is_utf8)?SV_CATUTF8:SV_CATBYTES)
#define MGf_COPY 8
#define PL_vtbl_bm PL_magic_vtables[want_vtbl_bm]
#define PCRE2_ERROR_CALLOUT (-37)
#define PL_psig_name (vTHX->Ipsig_name)
#define PERL_ARGS_ASSERT_DUMP_SUB assert(gv)
#define __FLT_NORM_MAX__ 3.40282346638528859811704183484516925e+38F
#define NV_WITHIN_UV(nv) ((nv)>=0.0 && U_V(nv) >= UV_MIN && U_V(nv) <= UV_MAX)
#define _CS_DARWIN_USER_TEMP_DIR 65537
#define __FLT32_HAS_QUIET_NAN__ 1
#define PERL_ARGS_ASSERT_MAGIC_COPYCALLCHECKER assert(sv); assert(mg); assert(nsv)
#define MCAST_EXCLUDE 2
#define NGX_HAVE_LIMITS_H 1
#define NGX_CLEAR_EVENT EV_CLEAR
#define HAS_LONG_LONG 
#define ATTR_CMN_OBJID 0x00000020
#define padadd_NO_DUP_CHECK 0x04
#define CPU_SUBTYPE_PENTIUM_4_M CPU_SUBTYPE_INTEL(10, 1)
#define PERL_ARGS_ASSERT_GV_HANDLER 
#define case_218_SBOX32(hash,state,key) 
#define __FLT32_EPSILON__ 1.19209289550781250000000000000000000e-7F32
#define AMGfallNO 2
#define IPPROTO_AH 51
#define PERL_ARGS_ASSERT_REPORT_EVIL_FH 
#define ptr_table_new() Perl_ptr_table_new(aTHX)
#define newGVOP(a,b,c) Perl_newGVOP(aTHX_ a,b,c)
#define PerlSock_listen(s,b) listen(s, b)
#define PERL_PRIeldbl "Le"
#define AvREIFY(av) (SvFLAGS(av) & SVpav_REIFY)
#define OPpTRANS_CAN_FORCE_UTF8 0x01
#define newSUB(f,o,p,b) newATTRSUB((f), (o), (p), NULL, (b))
#define PERL_ARGS_ASSERT_HV_STORE 
#define BhkENTRY_set(hk,which,ptr) STMT_START { (hk)->which = ptr; BhkENABLE(hk, which); } STMT_END
#define padnamelist_store(a,b,c) Perl_padnamelist_store(aTHX_ a,b,c)
#define WAKEMON_MAKE_FATAL 0x10
#define dMULTICALL OP *multicall_cop; bool multicall_oldcatch
#define USE_PWENT_BUFFER 
#define PERL_ARGS_ASSERT_UTF8_TO_BYTES assert(s); assert(lenp)
#define _MACH_KERN_RETURN_H_ 
#define DEBUG_u_TEST (0)
#define SSTOP 4
#define DEBUG_c_TEST_ UNLIKELY(PL_debug & DEBUG_c_FLAG)
#define PerlMem_malloc(size) malloc((size))
#define __DARWIN_FD_ZERO(p) __builtin_bzero(p, sizeof(*(p)))
#define PERL_ARGS_ASSERT_KEYWORD_PLUGIN_STANDARD assert(keyword_ptr); assert(op_ptr)
#define cPVOPo cPVOPx(o)
#define PCRE2_SUBSTITUTE_UNKNOWN_UNSET 0x00000800u
#define CxOLD_IN_EVAL(cx) (((cx)->blk_u16) & 0x3F)
#define vwarn(a,b) Perl_vwarn(aTHX_ a,b)
#define _PASSWORD_LEN 128
#define MACH_PORT_QLIMIT_KERNEL (65534)
#define OPf_MOD 32
#define PERL_ARGS_ASSERT_DOUNWIND 
#define XopENABLE(xop,which) STMT_START { (xop)->xop_flags |= XOPf_ ## which; assert(XopENTRY(xop, which)); } STMT_END
#define SvSetSV(dst,src) SvSetSV_and(dst,src, ;)
#define NGX_EILSEQ EILSEQ
#define _SYS_SELECT_H_ 
#define MACH_PORT_DNREQUESTS_SIZE_COUNT 1
#define SIZE_MAX UINTPTR_MAX
#define PRIO_DARWIN_THREAD 3
#define S_IEXEC S_IXUSR
#define CvUNIQUE_on(cv) (CvFLAGS(cv) |= CVf_UNIQUE)
#define IPPROTO_BLT 30
#define ngx_file_at_info(fd,name,sb,flag) fstatat(fd, (const char *) name, sb, flag)
#define HAS_MKDIR 
#define VFS_CONF 2
#define pcre2_serialize_encode PCRE2_SUFFIX(pcre2_serialize_encode_)
#define _SECURE__COMMON_H_ 
#define save_pptr(a) Perl_save_pptr(aTHX_ a)
#define IPV6_FW_DEL 31
#define PERL_ARGS_ASSERT_SAVE_GENERIC_SVREF assert(sptr)
#define SIOCGHIWAT _IOR('s', 1, int)
#define sv_eq_flags(a,b,c) Perl_sv_eq_flags(aTHX_ a,b,c)
#define KMOD_INFO_VERSION 1
#define KERN_OSREV 3
#define gv_fetchmethod(stash,name) gv_fetchmethod_autoload(stash, name, TRUE)
#define HAS_GROUP 
#define VM_PROT_STRIP_READ ((vm_prot_t) 0x80)
#define DM_EGID 0x020
#define OP_FREED MAXO
#define UINT64_C(v) (v ## ULL)
#define PERL_ARGS_ASSERT_NEWSVNV 
#define SvOK_off(sv) (assert_not_ROK(sv) assert_not_glob(sv) SvFLAGS(sv) &= ~(SVf_OK| SVf_IVisUV|SVf_UTF8), SvOOK_off(sv))
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_3(x) 
#define _PTHREAD_ERRORCHECK_MUTEX_SIG_init 0x32AAABA1
#define __IPHONE_2_1 20100
#define I_GDBM_NDBM 
#define TCPOPT_SACK 5
#define HAS_GETPROTOENT 
#define PERL_ARGS_ASSERT_TO_UNI_FOLD 
#define __DBL_DIG__ 15
#define PL_curcopdb (vTHX->Icurcopdb)
#define MATTR_VAL_OFF 0
#define PERLIO_H_ 
#define PERL_ARGS_ASSERT_LEX_READ_UNICHAR 
#define NGX_HTTP_UPSTREAM_FT_NOLIVE 0x40000000
#define case_9_SBOX32(hash,state,key) _SBOX32_CASE(9,hash,state,key)
#define __API_DEPRECATED_END 
#define OS_NONNULL_ALL __attribute__((__nonnull__))
#define ETIME 101
#define _DARWIN_FEATURE_64_BIT_INODE 1
#define toLOWER_LATIN1(c) ((! FITS_IN_8_BITS(c)) ? (c) : PL_latin1_lc[ (U8) (c) ])
#define SVpav_REIFY 0x80000000
#define VM_64_BIT_DATA_OBJECTS 
#define CONNECT_DATA_AUTHENTICATED 0x4
#define PERL_ARGS_ASSERT_CX_PUSHEVAL assert(cx)
#define PERL_ARGS_ASSERT_MG_FREE assert(sv)
#define PERL_ARGS_ASSERT_EMULATE_COP_IO assert(c); assert(sv)
#define NGX_HTTP_UPSTREAM_ZONE 1
#define PERL_ARGS_ASSERT_NEWSVPV 
#define PL_compiling (vTHX->Icompiling)
#define ST_INO_SIZE 8
#define SIOCATMARK _IOR('s', 7, int)
#define _PC_NO_TRUNC 8
#define PCRE2_ERROR_BACKSLASH_C_LIBRARY_DISABLED 185
#define Perl_fp_class_inf(x) (Perl_fp_class(x)==FP_INFINITE)
#define NGX_OFF_T_LEN (sizeof("-9223372036854775808") - 1)
#define PERL_ARGS_ASSERT_CALL_METHOD assert(methname)
#define OPpSPLIT_LEX 0x08
#define ADD_MACH_TIMESPEC(t1,t2) do { if (((t1)->tv_nsec += (t2)->tv_nsec) >= (long) NSEC_PER_SEC) { (t1)->tv_nsec -= (long) NSEC_PER_SEC; (t1)->tv_sec += 1; } (t1)->tv_sec += (t2)->tv_sec; } while (0)
#define LvTARG(sv) ((XPVLV*) SvANY(sv))->xlv_targ
#define __GXX_ABI_VERSION 1016
#define OPpASSIGN_CV_TO_GV 0x80
#define newSVsv_nomg(sv) newSVsv_flags((sv), SV_NOSTEAL)
#define WARN_SEMICOLON 38
#define HAS_ENDSERVENT 
#define A_GETQCTRL 35
#define NGX_AT_FDCWD (ngx_fd_t) AT_FDCWD
#define IFTODT(mode) (((mode) & 0170000) >> 12)
#define case_186_SBOX32(hash,state,key) 
#define FF_LINEMARK 1
#define _SC_PAGESIZE 29
#define PERL_ABS(x) ((x) < 0 ? -(x) : (x))
#define PERL_ARGS_ASSERT_ANY_DUP assert(proto_perl)
#define INADDR_ANY (u_int32_t)0x00000000
#define MUTEX_DESTROY(m) STMT_START { int _eC_; if ((_eC_ = pthread_mutex_destroy((m)))) Perl_croak_nocontext("panic: MUTEX_DESTROY (%d) [%s:%d]", _eC_, __FILE__, __LINE__); } STMT_END
#define vcmp(a,b) Perl_vcmp(aTHX_ a,b)
#define HvNAMELEN_get(hv) ((SvOOK(hv) && HvAUX(hv)->xhv_name_u.xhvnameu_name && HvNAME_HEK_NN(hv)) ? HEK_LEN(HvNAME_HEK_NN(hv)) : 0)
#define _SC_READER_WRITER_LOCKS 76
#define PERL_ARGS_ASSERT_RUNOPS_STANDARD 
#define TAILQ_FOREACH_REVERSE_SAFE(var,head,headname,field,tvar) for ((var) = TAILQ_LAST((head), headname); (var) && ((tvar) = TAILQ_PREV((var), headname, field), 1); (var) = (tvar))
#define PerlSock_htonl(x) htonl(x)
#define PerlSock_htons(x) htons(x)
#define PL_regmatch_state (vTHX->Iregmatch_state)
#define M_LOG2E 1.44269504088896340735992468100189214
#define sv_cmp_flags(a,b,c) Perl_sv_cmp_flags(aTHX_ a,b,c)
#define NOTE_ABSOLUTE 0x00000008
#define NGX_HTTP_CACHE_HIT 7
#define PERL_ARGS_ASSERT_VARIANT_BYTE_NUMBER 
#define HINT_LEXICAL_IO_IN 0x00040000
#define HAS_GAI_STRERROR 
#define NGX_CYCLE_POOL_SIZE NGX_DEFAULT_POOL_SIZE
#define TAILQ_CHECK_NEXT(elm,field) 
#define IPPROTO_IL 40
#define IPPROTO_IP 0
#define UINT32_MAX 4294967295U
#define RTLD_NEXT ((void *) -1)
#define perl_eval_sv(a,b) eval_sv(a,b)
#define _POSIX_SHELL 200112L
#define PERL_ARGS_ASSERT_SV_INC_NOMG 
#define WNOHANG 0x00000001
#define PERL_ARGS_ASSERT_LOOKS_LIKE_NUMBER assert(sv)
#define UTF8_WARN_ABOVE_31_BIT UTF8_WARN_PERL_EXTENDED
#define hv_clear(a) Perl_hv_clear(aTHX_ a)
#define DBL_TRUE_MIN __DBL_DENORM_MIN__
#define PERL_ARGS_ASSERT_DUMP_SUB_PERL assert(gv)
#define OPpTRANS_IDENTICAL 0x04
#define PF_IPX AF_IPX
#define PCRE2_INFO_HASCRORLF 8
#define SAVEt_AV 24
#define OPpCOREARGS_SCALARMOD 0x40
#define VM_PAGE_QUERY_PAGE_DIRTY 0x8
#define NGX_EXDEV EXDEV
#define HOST_ATM_NOTIFICATION_PORT (14 + HOST_MAX_SPECIAL_KERNEL_PORT)
#define mg_size(a) Perl_mg_size(aTHX_ a)
#define PERL_ARGS_ASSERT_SV_UPGRADE assert(sv)
#define KERN_USRSTACK KERN_USRSTACK64
#define IPCTL_SENDREDIRECTS 2
#define PCRE2_ERROR_UNSET (-55)
#define HAS_USLEEP_PROTO 
#define AUDIT_AHLT 0x0002
#define PL_DBtrace (vTHX->IDBtrace)
#define AUDIT_CNT 0x0001
#define CvLVALUE_on(cv) (CvFLAGS(cv) |= CVf_LVALUE)
#define sv_setsv_nomg(dsv,ssv) sv_setsv_flags(dsv, ssv, SV_DO_COW_SVSETSV)
#define MCL_FUTURE 0x0002
#define F_GETFD 1
#define sv_2uv_flags(a,b) Perl_sv_2uv_flags(aTHX_ a,b)
#define __TVOS_12_0 120000
#define __TVOS_12_3 120300
#define NGX_CMD_CLOSE_CHANNEL 2
#define HAS_LOCKF 
#define PERL_ARGS_ASSERT_OP_APPEND_LIST 
#define PERL_ARGS_ASSERT_APPLY_ATTRS_STRING assert(stashpv); assert(cv); assert(attrstr)
#define GvESTASH(gv) GvSTASH(GvEGV(gv) ? GvEGV(gv) : gv)
#define SSPTRt(off,type) ((type*) ((char*)PL_savestack + off))
#define HOST_LOAD_INFO_COUNT ((mach_msg_type_number_t) (sizeof(host_load_info_data_t)/sizeof(integer_t)))
#define PL_savestack_max (vTHX->Isavestack_max)
#define SAVEPPTR(s) save_pptr((char**)&(s))
#define _POSIX2_FORT_RUN 200112L
#define VM_PURGABLE_NO_AGING_SHIFT 16
#define SvPAD_TYPED(pn) (!!PadnameTYPE(pn))
#define __DBL_DECIMAL_DIG__ 17
#define CLSHIFT (PGSHIFT+CLSIZELOG2)
#define PERL_ARGS_ASSERT__TO_UTF8_UPPER_FLAGS assert(p); assert(ustrp)
#define PERL_ARGS_ASSERT_REFCOUNTED_HE_NEW_PV assert(key)
#define S_IRWXG 0000070
#define KERN_NAME_EXISTS 13
#define G_ARRAY 3
#define IO_NUM_PRIORITIES 4
#define SCNuLEAST8 SCNu8
#define hv_existss(hv,key) hv_exists((hv), ("" key ""), (sizeof(key)-1))
#define TIOCPKT_DOSTOP 0x20
#define PTHREAD_ERRORCHECK_MUTEX_INITIALIZER {_PTHREAD_ERRORCHECK_MUTEX_SIG_init, {0}}
#define newOP(a,b) Perl_newOP(aTHX_ a,b)
#define pcre2_maketables_free PCRE2_SUFFIX(pcre2_maketables_free_)
#define PF_ISO AF_ISO
#define TASK_EXC_GUARD_VM_DELIVER 0x01
#define MACH_VOUCHER_ATTR_COPY ((mach_voucher_attr_recipe_command_t)1)
#define PRIx16 "hx"
#define PERL_ARGS_ASSERT_STACK_GROW assert(sp); assert(p)
#define UF_SETTABLE 0x0000ffff
#define PERL_ARGS_ASSERT_SCAN_NUM assert(s); assert(lvalp)
#define OP_IS_FILETEST_ACCESS(op) ((op) >= OP_FTRREAD && (op) <= OP_FTEEXEC)
#define PERL_ARGS_ASSERT_PAD_NEW 
#define SETGRENT_R_PROTO 0
#define A_SETSMASK 15
#define RLIMIT_WAKEUPS_MONITOR 0x1
#define WARN_RECURSION 18
#define IPPROTO_ND 77
#define IGNORE_PAT_MOD 'i'
#define SvPVXx(sv) SvPVX(sv)
#define KERN_KDEFLAGS 1
#define PerlLIO_chmod(file,mode) chmod((file), (mode))
#define EV_VANISHED 0x0200
#define VM_MEMORY_ROSETTA_RETURN_STACK 233
#define STAILQ_INSERT_AFTER(head,tqelm,elm,field) do { if ((STAILQ_NEXT((elm), field) = STAILQ_NEXT((tqelm), field)) == NULL) (head)->stqh_last = &STAILQ_NEXT((elm), field); STAILQ_NEXT((tqelm), field) = (elm); } while (0)
#define NGX_HTTP_REQUEST_TIME_OUT 408
#define case_228_SBOX32(hash,state,key) 
#define PCRE2_ERROR_PARTIAL (-2)
#define _FSID_T 
#define RX_BUFF_IDX_FULLMATCH 0
#define YYSTYPE_IS_DECLARED 1
#define PERL_ARGS_ASSERT_GV_SETREF assert(dsv); assert(ssv)
#define IPV6_3542RTHDR 51
#define HvLAZYDEL_off(hv) (SvFLAGS(hv) &= ~SVphv_LAZYDEL)
#define cPADOP cPADOPx(PL_op)
#define PCRE2_SUBSTITUTE_REPLACEMENT_ONLY 0x00020000u
#define PERL_ARGS_ASSERT_NEWFORM 
#define PERL_ARGS_ASSERT_SV_COLLXFRM_FLAGS assert(sv); assert(nxp)
#define PRIx32 "x"
#define PERL_ARGS_ASSERT_CV_UNDEF assert(cv)
#define PCRE2_ERROR_BAD_RELATIVE_REFERENCE 129
#define REENTRANT_PROTO_S_CCSBI 54
#define IP_OLD_FW_GET 54
#define THREAD_KERNEL_PORT 1
#define DEBUG_u_TEST_ UNLIKELY(PL_debug & DEBUG_u_FLAG)
#define newRV(a) Perl_newRV(aTHX_ a)
#define MACH_SEND_NOTIFY 0x00000080
#define sv_nounlocking(a) Perl_sv_nounlocking(aTHX_ a)
#define DEBUG_Pv_TEST_ DEBUG_BOTH_FLAGS_TEST_(DEBUG_P_FLAG, DEBUG_v_FLAG)
#define CALLREG_NAMED_BUFF_COUNT(rx) RX_ENGINE(rx)->named_buff(aTHX_ (rx), NULL, NULL, RXapif_REGNAMES_COUNT)
#define GvFILEGV(gv) (GvFILE_HEK(gv) ? gv_fetchfile(GvFILEx(gv)) : NULL)
#define PCRE2_ERROR_QUERY_BARJX_NEST_TOO_DEEP 184
#define VOL_CAP_FMT_JOURNAL_ACTIVE 0x00000010
#define PERL_SIPHASH_FNC(FNC,SIP_ROUNDS,SIP_FINAL_ROUNDS) PERL_STATIC_INLINE U64 FNC ## _with_state_64 (const unsigned char * const state, const unsigned char *in, const STRLEN inlen) { const int left = inlen & 7; const U8 *end = in + inlen - left; U64 b = ( ( U64 )(inlen) ) << 56; U64 m; U64 v0 = U8TO64_LE(state); U64 v1 = U8TO64_LE(state+8); U64 v2 = U8TO64_LE(state+16); U64 v3 = U8TO64_LE(state+24); for ( ; in != end; in += 8 ) { m = U8TO64_LE( in ); v3 ^= m; SIP_ROUNDS; v0 ^= m; } switch( left ) { case 7: b |= ( ( U64 )in[ 6] ) << 48; case 6: b |= ( ( U64 )in[ 5] ) << 40; case 5: b |= ( ( U64 )in[ 4] ) << 32; case 4: b |= ( ( U64 )in[ 3] ) << 24; case 3: b |= ( ( U64 )in[ 2] ) << 16; case 2: b |= ( ( U64 )in[ 1] ) << 8; case 1: b |= ( ( U64 )in[ 0] ); break; case 0: break; } v3 ^= b; SIP_ROUNDS; v0 ^= b; v2 ^= 0xff; SIP_FINAL_ROUNDS b = v0 ^ v1 ^ v2 ^ v3; return b; } PERL_STATIC_INLINE U32 FNC ## _with_state (const unsigned char * const state, const unsigned char *in, const STRLEN inlen) { union { U64 h64; U32 h32[2]; } h; h.h64= FNC ## _with_state_64(state,in,inlen); return h.h32[0] ^ h.h32[1]; } PERL_STATIC_INLINE U32 FNC (const unsigned char * const seed, const unsigned char *in, const STRLEN inlen) { U64 state[4]; SIPHASH_SEED_STATE(seed,state[0],state[1],state[2],state[3]); return FNC ## _with_state((U8*)state,in,inlen); }
#define SO_SNDTIMEO 0x1005
#define ngx_socket_nread(s,n) ioctl(s, FIONREAD, n)
#define newSV(a) Perl_newSV(aTHX_ a)
#define NGX_HTTP_SUBREQUEST_CLONE 8
#define KMOD_RETURN_FAILURE KERN_FAILURE
#define cSVOPx(o) ((SVOP*)(o))
#define F_TRIM_ACTIVE_FILE 100
#define PERL_STACK_OVERFLOW_CHECK() NOOP
#define DEBUG_B_TEST (0)
#define USE_LOCALE_NUMERIC 
#define PL_vtbl_sv PL_magic_vtables[want_vtbl_sv]
#define F_GETLK 7
#define pTHX_1 2
#define pTHX_2 3
#define pTHX_3 4
#define pTHX_4 5
#define pTHX_5 6
#define pTHX_6 7
#define pTHX_7 8
#define pTHX_8 9
#define pTHX_9 10
#define _CS_DARWIN_USER_CACHE_DIR 65538
#define HV_FETCH_EMPTY_HE 0x80
#define sv_utf8_upgrade_flags(sv,flags) sv_utf8_upgrade_flags_grow(sv, flags, 0)
#define GvFILEx(gv) HEK_KEY(GvFILE_HEK(gv))
#define OPpTRANS_SQUASH 0x08
#define cx_popwhen(a) Perl_cx_popwhen(aTHX_ a)
#define _INTPTR_T 
#define SVs_GMG 0x00200000
#define av_store(a,b,c) Perl_av_store(aTHX_ a,b,c)
#define sv_usepvn(sv,p,l) sv_usepvn_flags(sv, p, l, 0)
#define packlist(a,b,c,d,e) Perl_packlist(aTHX_ a,b,c,d,e)
#define FOLDEQ_S1_ALREADY_FOLDED (1 << 2)
#define PERL_ARGS_ASSERT_SV_POS_B2U assert(offsetp)
#define PRIx64 __PRI_64_LENGTH_MODIFIER__ "x"
#define TCPOPT_CC_HDR(ccopt) (TCPOPT_NOP<<24|TCPOPT_NOP<<16|(ccopt)<<8|TCPOLEN_CC)
#define HEK_UTF8(hek) (HEK_FLAGS(hek) & HVhek_UTF8)
#define EXC_MASK_MACH_SYSCALL (1 << EXC_MACH_SYSCALL)
#define MAP_ANONYMOUS MAP_ANON
#define isOCTAL(c) isOCTAL_A(c)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_4(x) 
#define MB_CUR_MAX_L(x) (___mb_cur_max_l(x))
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_6(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_7(x) 
#define PerlProc_killpg(i,a) killpg((i), (a))
#define KERN_VERSION 4
#define pcre2_general_context_free PCRE2_SUFFIX(pcre2_general_context_free_)
#define SvTRUE_nomg(a) Perl_SvTRUE_nomg(aTHX_ a)
#define NGX_HAVE_GCC_VARIADIC_MACROS 1
#define WAIT_MYPGRP 0
#define CXp_EVALBLOCK 0x40
#define NL_ARGMAX 9
#define INT_LEAST8_MAX INT8_MAX
#define IPPROTO_ST 7
#define MAP_MEM_USE_DATA_ADDR 0x100000
#define HAS_SETRGID 
#define _MACH_MACHINE_VM_TYPES_H_ 
#define host_get_io_master_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_IO_MASTER_PORT, (port)))
#define HOST_BASIC_INFO 1
#define SCAN_DEF 0
#define PERL_ARGS_ASSERT_SV_2PV_FLAGS assert(sv)
#define __FLT64_MIN_10_EXP__ (-307)
#define KERN_TFP_POLICY_DENY 0
#define SvPOK_pure_nogthink(sv) ((SvFLAGS(sv) & (SVf_POK|SVf_IOK|SVf_NOK|SVf_ROK|SVpgv_GP|SVf_THINKFIRST|SVs_GMG)) == SVf_POK)
#define IS_SAFE_PATHNAME(p,len,op_name) IS_SAFE_SYSCALL((p), (len), "pathname", (op_name))
#define IPPROTO_TP 29
#define __has_extension(x) 0
#define TLOSS 5
#define DEBUG_B_TEST_ UNLIKELY(PL_debug & DEBUG_B_FLAG)
#define WARN_REGEXP 20
#define NGX_ESRCH ESRCH
#define switch_to_global_locale Perl_switch_to_global_locale
#define MEMORY_OBJECT_BEHAVIOR_INFO 15
#define _PASSWORD_CHGNOW -1
#define ULONG_MAX (LONG_MAX * 2UL + 1UL)
#define DEBUG_q(a) 
#define VM_MEMORY_COREGRAPHICS_BACKINGSTORES 57
#define DEV_BSHIFT 9
#define INT_FAST8_MAX INT8_MAX
#define SETLOCALE_UNLOCK NOOP
#define SvPVutf8x_force(sv,len) sv_pvutf8n_force(sv, &len)
#define GvSTASH(gv) (GvXPVGV(gv)->xnv_u.xgv_stash)
#define PERL_DTRACE_PROBE_OP(op) 
#define HW_L2CACHESIZE 20
#define get_cvs(str,flags) Perl_get_cvn_flags(aTHX_ STR_WITH_LEN(str), (flags))
#define PERL_ARGS_ASSERT_MY_UNEXEC 
#define GETSIGSINFO_PLATFORM_BINARY 1
#define pcre2_set_depth_limit PCRE2_SUFFIX(pcre2_set_depth_limit_)
#define NGX_MAX_OFF_T_VALUE 9223372036854775807LL
#define ngx_realpath(p,r) (u_char *) realpath((char *) p, (char *) r)
#define pcre2_set_glob_escape PCRE2_SUFFIX(pcre2_set_glob_escape_)
#define EXTERN_C extern
#define PERL_ARGS_ASSERT_PREGCOMP assert(pattern)
#define OPpASSIGN_TRUEBOOL 0x04
#define PTRSIZE 8
#define PL_strtab (vTHX->Istrtab)
#define ENOBUFS 55
#define SITEARCH "/usr/local/Cellar/perl/5.34.0/lib/perl5/site_perl/5.34.0/darwin-thread-multi-2level"
#define CHAR_BIT __CHAR_BIT__
#define sv_catsv(dsv,ssv) sv_catsv_flags(dsv, ssv, SV_GMAGIC)
#define case_245_SBOX32(hash,state,key) 
#define TASK_INSPECT_NULL ((task_inspect_t) 0)
#define HEK_BASESIZE STRUCT_OFFSET(HEK, hek_key[0])
#define NGX_HTTP_UPSTREAM_FT_HTTP_403 0x00000100
#define PerlSIO_setvbuf(f,b,t,s) setvbuf(f,b,t,s)
#define HW_PHYSMEM 5
#define MADV_FREE_REUSABLE 7
#define NGX_SETPROCTITLE_USES_ENV 1
#define _PASSWORD_EFMT1 '_'
#define case_138_SBOX32(hash,state,key) 
#define NSEC_PER_MSEC 1000000ull
#define PERL_ARGS_ASSERT_GV_FETCHMETH_SV_AUTOLOAD assert(namesv)
#define __NO_INLINE__ 1
#define MACH_RCV_TRAILER_MASK ((0xf << 24))
#define dPOPTOPnnrl_nomg NV right = SvNV_nomg(TOPs); NV left = (sp--, SvNV_nomg(TOPs))
#define case_177_SBOX32(hash,state,key) 
#define utf8_length(a,b) Perl_utf8_length(aTHX_ a,b)
#define ATTR_CMN_PAROBJID 0x00000080
#define CvNODEBUG_on(cv) (CvFLAGS(cv) |= CVf_NODEBUG)
#define CXp_HASARGS 0x20
#define cx_poploop(a) Perl_cx_poploop(aTHX_ a)
#define NGX_HTTP_LINGERING_OFF 0
#define __FLT64X_IS_IEC_60559__ 2
#define SIOCSIFASYNCMAP _IOW('i', 125, struct ifreq)
#define VM_PURGABLE_GET_STATE ((vm_purgable_t) 1)
#define UTF8_WARN_SUPER 0x2000
#define ckWARN2(w1,w2) Perl_ckwarn(aTHX_ packWARN2(w1,w2))
#define _MACH_TASK_POLICY_H_ 
#define HSf_NOCHK HSm_KEY_MATCH
#define EXC_MASK_GUARD (1 << EXC_GUARD)
#define lex_bufutf8() Perl_lex_bufutf8(aTHX)
#define case_246_SBOX32(hash,state,key) 
#define MAX_TCPOPTLEN 40
#define NGX_HTTP_UPSTREAM_FT_HTTP_429 0x00000400
#define PERL_ARGS_ASSERT_AV_TINDEX 
#define pcre2_match_data_create PCRE2_SUFFIX(pcre2_match_data_create_)
#define LATIN_SMALL_LETTER_SHARP_S_NATIVE 0xDF
#define HEK_KEY(hek) (hek)->hek_key
#define IPCTL_STATS 12
#define XopENTRY(xop,which) ((XopFLAGS(xop) & XOPf_ ## which) ? (xop)->which : XOPd_ ## which)
#define MACH_MSG_TYPE_PORT_NONE 0
#define _SIZE_T 
#define isALPHANUMERIC_LC_utf8_safe(p,e) _generic_LC_invlist_utf8_safe(isALPHANUMERIC_LC, _CC_ALPHANUMERIC, p, e)
#define UVSIZE 8
#define parse_fullstmt(a) Perl_parse_fullstmt(aTHX_ a)
#define __enum_options 
#define REENTRANT_PROTO_S_CWISBIE 58
#define VOL_CAP_FMT_64BIT_OBJECT_IDS 0x00020000
#define PERL_ARGS_ASSERT_CAST_ULONG 
#define INT_LEAST8_MIN INT8_MIN
#define regdump(a) Perl_regdump(aTHX_ a)
#define ATTR_CMN_SETMASK 0x51C7FF00
#define _SC_NPROCESSORS_ONLN 58
#define PERL_ARGS_ASSERT_MAGIC_SIZEPACK assert(sv); assert(mg)
#define TASK_BASIC_INFO TASK_BASIC_INFO_64
#define HW_MAXID 28
#define PL_sub_generation (vTHX->Isub_generation)
#define VM_REGION_SUBMAP_INFO_V2_SIZE (sizeof (vm_region_submap_info_data_64_t))
#define NGX_HAVE_INTTYPES_H 1
#define PF_SYSTEM AF_SYSTEM
#define _PTRDIFF_T_ 
#define __used __attribute__((__used__))
#define SO_KEEPALIVE 0x0008
#define _CC_WORDCHAR 0
#define HvAMAGIC_off(hv) (SvFLAGS(hv) &=~ SVf_AMAGIC)
#define SVTYPEMASK 0xff
#define Perl_fp_class_norm(x) (Perl_fp_class(x)==FP_NORMAL)
#define MACH_PORT_IMPORTANCE_RECEIVER 5
#define SAVESHAREDPV(s) save_shared_pvref((char**)&(s))
#define _PTHREAD_RWLOCK_T 
#define EV_ENABLE 0x0004
#define RXp_MATCH_TAINTED(prog) (RXp_EXTFLAGS(prog) & RXf_TAINTED_SEEN)
#define PERL_ARGS_ASSERT_PERLIO_STDIN 
#define PERL_MAGIC_ext '~'
#define RXapif_REGNAMES_COUNT 0x1000
#define VM_MEMORY_DHMM 84
#define _WCTYPE_T 
#define ATTR_VOL_ATTRIBUTES 0x40000000
#define PERL_MY_SNPRINTF_GUARDED 
#define DEFSV_set(sv) (GvSV(PL_defgv) = (sv))
#define PERL_ARGS_ASSERT_CK_ISA assert(o)
#define O_TEXT 0
#define sv_unmagicext(a,b,c) Perl_sv_unmagicext(aTHX_ a,b,c)
#define StGiFy(a) PeRl_StGiFy(a)
#define UNICODE_IS_BYTE_ORDER_MARK(uv) UNLIKELY((UV) (uv) == UNICODE_BYTE_ORDER_MARK)
#define CPU_SUBTYPE_ARM64_ALL ((cpu_subtype_t) 0)
#define MACH_VOUCHER_ATTR_KEY_NUM_WELL_KNOWN MACH_VOUCHER_ATTR_KEY_TEST
#define isIDFIRST_lazy_if_safe(p,e,UTF) ((IN_BYTES || !UTF) ? isIDFIRST(*(p)) : isIDFIRST_utf8_safe(p, e))
#define PERL_ARGS_ASSERT_SV_INC 
#define NGX_HTTP_VAR_NOCACHEABLE 2
#define SvPV_force_flags(sv,len,flags) (SvPOK_pure_nogthink(sv) ? ((len = SvCUR(sv)), SvPVX(sv)) : sv_pvn_force_flags(sv, &len, flags))
#define VM_PURGABLE_DENY 3
#define NGX_LOG_ERR 4
#define _NGX_OS_H_INCLUDED_ 
#define _IN_PORT_T 
#define _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS 11
#define USE_UTF8_IN_NAMES (PL_hints & HINT_UTF8)
#define SM_TRUESHARED 5
#define init_tm(a) Perl_init_tm(aTHX_ a)
#define G_WARN_ALL_MASK (G_WARN_ALL_ON|G_WARN_ALL_OFF)
#define HUGE MAXFLOAT
#define pcre2_serialize_decode PCRE2_SUFFIX(pcre2_serialize_decode_)
#define newPVOP(a,b,c) Perl_newPVOP(aTHX_ a,b,c)
#define SvPVutf8x(sv,len) ({SV *_sv = (sv); SvPVutf8(_sv, len); })
#define NGX_HTTP_SSI_URL_ENCODING 1
#define TASK_WAIT_STATE_INFO_COUNT ((mach_msg_type_number_t) (sizeof(task_wait_state_info_data_t) / sizeof(natural_t)))
#define pcre2_get_error_message PCRE2_SUFFIX(pcre2_get_error_message_)
#define _SC_CLOCK_SELECTION 67
#define AMT_AMAGIC(amt) ((amt)->flags & AMTf_AMAGIC)
#define MALLOC_TOO_LATE_FOR(ch) TOO_LATE_FOR_(ch, " with $ENV{PERL_MALLOC_OPT}")
#define PL_rpeepp (vTHX->Irpeepp)
#define GvHVn(gv) (GvGP(gv)->gp_hv ? GvGP(gv)->gp_hv : GvGP(gv_HVadd(gv))->gp_hv)
#define IN_LC_COMPILETIME(category) ( IN_LC_ALL_COMPILETIME || ( IN_LC_PARTIAL_COMPILETIME && Perl__is_in_locale_category(aTHX_ TRUE, (category))))
#define KERN_INVALID_NAME 15
#define sigfillset(set) (*(set) = ~(sigset_t)0, 0)
#define LINE_MAX 2048
#define isDIGIT_LC_utf8_safe(p,e) _generic_LC_invlist_utf8_safe(isDIGIT_LC, _CC_DIGIT, p, e)
#define __STRING(x) #x
#define PerlProc_sleep(t) sleep((t))
#define NGROUPS_MAX 16
#define PERL_ARGS_ASSERT_CK_SVCONST assert(o)
#define PERL_ARGS_ASSERT_MAGIC_SETDEBUGVAR assert(sv); assert(mg)
#define PRIVLIB_EXP "/usr/local/Cellar/perl/5.34.0/lib/perl5/5.34.0"
#define NI_NUMERICHOST 0x00000002
#define SIGVTALRM 26
#define SvGAMAGIC(sv) (SvGMAGICAL(sv) || SvAMAGIC(sv))
#define KERNEL_AUDIT_TOKEN_VALUE { {0, 0, 0, 0, 0, 0, 0, 0} }
#define cophh_2hv(cophh,flags) Perl_refcounted_he_chain_2hv(aTHX_ cophh, flags)
#define HvAUX(hv) ((struct xpvhv_aux*)&(HvARRAY(hv)[HvMAX(hv)+1]))
#define HAS_PIPE 
#define SvGMAGICAL_on(sv) (SvFLAGS(sv) |= SVs_GMG)
#define PAD_COMPNAME_GEN(po) ((STRLEN)PadnamelistARRAY(PL_comppad_name)[po]->xpadn_gen)
#define PERL_ARGS_ASSERT_RSIGNAL_RESTORE 
#define PERL_ARGS_ASSERT_PADNAME_DUP assert(src); assert(param)
#define DEBUG_M_TEST (0)
#define gv_fetchmeth_pv(a,b,c,d) Perl_gv_fetchmeth_pv(aTHX_ a,b,c,d)
#define GvFLAGS(gv) (GvXPVGV(gv)->xpv_cur)
#define RLIMIT_CPU 0
#define USE_PERL_PERTURB_KEYS 1
#define PERL_ARGS_ASSERT_SAVE_MORTALIZESV assert(sv)
#define PL_eval_start (vTHX->Ieval_start)
#define NGX_HTTP_GZIP 1
#define LONG_LONG_MIN (-LONG_LONG_MAX - 1LL)
#define isGRAPH_A(c) inRANGE(c, ' ' + 1, 0x7e)
#define F_SETLKWTIMEOUT 10
#define TMPNAM_R_PROTO 0
#define WITH_LC_NUMERIC_SET_TO_NEEDED(block) WITH_LC_NUMERIC_SET_TO_NEEDED_IN(IN_LC(LC_NUMERIC), block)
#define CTLFLAG_OID2 0x00400000
#define pTHXo_ pTHX_
#define case_194_SBOX32(hash,state,key) 
#define __DARWIN_STRUCT_DIRENTRY { __uint64_t d_ino; __uint64_t d_seekoff; __uint16_t d_reclen; __uint16_t d_namlen; __uint8_t d_type; char d_name[__DARWIN_MAXPATHLEN]; }
#define regnext(a) Perl_regnext(aTHX_ a)
#define case_204_SBOX32(hash,state,key) 
#define MEM_LOG_FREE(a) (a)
#define PROCESSOR_SET_LOAD_INFO 4
#define TASK_NAME_NULL ((task_name_t) 0)
#define CopFILEAVx(c) (assert_(CopFILE(c)) GvAV(gv_fetchfile(CopFILE(c))))
#define PERL_ARGS_ASSERT_CX_POPSUB_COMMON assert(cx)
#define _SC_TRACE 97
#define PERL_UNUSED_ARG(x) ((void)sizeof(x))
#define PL_GCB_invlist (vTHX->IGCB_invlist)
#define IOPOL_TYPE_VFS_SKIP_MTIME_UPDATE 8
#define hv_iternext_flags(a,b) Perl_hv_iternext_flags(aTHX_ a,b)
#define TH_STATE_RUNNING 1
#define LONG_DOUBLE_IS_DOUBLEDOUBLE_128_BIT_LITTLE_ENDIAN LONG_DOUBLE_IS_DOUBLEDOUBLE_128_BIT_LE_LE
#define NV_OVERFLOWS_INTEGERS_AT (256.0*256.0*256.0*256.0*256.0*256.0*2.0*2.0*2.0*2.0*2.0)
#define KMOD_INFO_NAME kmod_info
#define IN6_IS_ADDR_V4COMPAT(a) ((*(const __uint32_t *)(const void *)(&(a)->s6_addr[0]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[4]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[8]) == 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[12]) != 0) && (*(const __uint32_t *)(const void *)(&(a)->s6_addr[12]) != ntohl(1)))
#define MNT_NOSUID 0x00000008
#define DEBUG_x_FLAG 0x00000400
#define __API_DEPRECATED(...) 
#define ngx_tm_sec tm_sec
#define Perl_modf(x,y) modf(x,y)
#define __MAC_10_12_2 101202
#define PERL_ARGS_ASSERT_IS_C9STRICT_UTF8_STRING_LOC 
#define NGX_HTTP_LINGERING_ALWAYS 2
#define DEBUG_m_TEST_ UNLIKELY(PL_debug & DEBUG_m_FLAG)
#define UNLINK PerlLIO_unlink
#define LIST_HEAD_INITIALIZER(head) { NULL }
#define VM_MEMORY_SWIFT_RUNTIME 82
#define PERL_DEBUG_PAD(i) &(PL_debug_pad.pad[i])
#define TAILQ_INSERT_AFTER(head,listelm,elm,field) do { TAILQ_CHECK_NEXT(listelm, field); if ((TAILQ_NEXT((elm), field) = TAILQ_NEXT((listelm), field)) != NULL) TAILQ_NEXT((elm), field)->field.tqe_prev = &TAILQ_NEXT((elm), field); else { (head)->tqh_last = &TAILQ_NEXT((elm), field); QMD_TRACE_HEAD(head); } TAILQ_NEXT((listelm), field) = (elm); (elm)->field.tqe_prev = &TAILQ_NEXT((listelm), field); QMD_TRACE_ELEM(&(elm)->field); QMD_TRACE_ELEM(&listelm->field); } while (0)
#define isDIGIT_A(c) inRANGE(c, '0', '9')
#define TASK_FLAVOR_INSPECT 2
#define RX_BUFF_IDX_CARET_PREMATCH -5
#define VM_USRSTACK32 ((vm_offset_t) 0xC0000000)
#define CPUFAMILY_ARM_FIRESTORM_ICESTORM 0x1b588bb3
#define _POSIX2_FORT_DEV (-1)
#define PL_tainted (vTHX->Itainted)
#define PERL_HV_ARRAY_ALLOC_BYTES(size) ((size) * sizeof(HE*))
#define PERL_HASH_WITH_SEED(seed,hash,str,len) (hash) = S_perl_hash_with_seed((const U8 *) seed, (const U8 *) str,len)
#define SIOCGPGRP _IOR('s', 9, int)
#define NGX_HTTP_SWITCHING_PROTOCOLS 101
#define PERL_ARGS_ASSERT_MAGIC_CLEARHINTS assert(sv); assert(mg)
#define HAS_SIGACTION 
#define SCNoPTR "lo"
#define GETPROTOBYNUMBER_R_PROTO 0
#define isLOWER(c) isLOWER_A(c)
#define IP_MAX_SOCK_SRC_FILTER 128
#define toLOWER(c) (isUPPER(c) ? (U8)((c) + ('a' - 'A')) : (c))
#define HEK_UTF8_on(hek) (HEK_FLAGS(hek) |= HVhek_UTF8)
#define TOPm1s (*(sp-1))
#define isIDCONT(c) isWORDCHAR(c)
#define _GID_T 
#define MAP_MEM_NAMED_REUSE 0x080000
#define NVef "e"
#define pregfree(a) Perl_pregfree(aTHX_ a)
#define USER_RE_DUP_MAX 9
#define SIG_ATOMIC_MAX INT32_MAX
#define IOPOL_VFS_SKIP_MTIME_UPDATE_OFF 0
#define WARN_TAINT 39
#define S_IFMT 0170000
#define __PERL_HASH_WORD_TYPE U64
#define USE_LARGE_FILES 
#define DBL_MIN_10_EXP __DBL_MIN_10_EXP__
#define PERL_ARGS_ASSERT_REFCOUNTED_HE_FETCH_PVN assert(keypv)
#define EAI_FAIL 4
#define __FBSDID(s) 
#define IPPROTO_CHAOS 16
#define HW_PAGESIZE 7
#define SIOCGIFALTMTU _IOWR('i', 72, struct ifreq)
#define cSVOPx_sv(v) (cSVOPx(v)->op_sv ? cSVOPx(v)->op_sv : PAD_SVl((v)->op_targ))
#define isCNTRL_uvchr(c) isCNTRL_L1(c)
#define CTL_USER 8
#define LIST_ENTRY(type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct { struct type *le_next; struct type **le_prev; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define A_OLDSETQCTRL 7
#define STAILQ_INSERT_HEAD(head,elm,field) do { if ((STAILQ_NEXT((elm), field) = STAILQ_FIRST((head))) == NULL) (head)->stqh_last = &STAILQ_NEXT((elm), field); STAILQ_FIRST((head)) = (elm); } while (0)
#define PerlSIO_stderr stderr
#define PERL_ARGS_ASSERT_GET_DB_SUB assert(cv)
#define FLT_DECIMAL_DIG __FLT_DECIMAL_DIG__
#define PerlSIO_setbuf(f,b) setbuf(f,b)
#define x86_AVX_STATE (x86_AVX_STATE32 + 2)
#define INT32_MAX 2147483647
#define PERL_ARGS_ASSERT_CK_READLINE assert(o)
#define PL_last_in_gv (vTHX->Ilast_in_gv)
#define _U_INT8_T 
#define _SC_THREAD_ATTR_STACKSIZE 83
#define PERL_SYS_TERM() Perl_sys_term()
#define PRIXFAST64 PRIX64
#define _PATH_PROTOCOLS "/etc/protocols"
#define RXp_SAVED_COPY(prog) (prog->saved_copy)
#define GvGP_set(gv,gp) ((gv)->sv_u.svu_gp = (gp))
#define MEM_LOG_REALLOC(n,t,v,a) (a)
#define USE_THREADS 
#define IOPOL_MATERIALIZE_DATALESS_FILES_DEFAULT 0
#define __amd64 1
#define PRIO_DARWIN_BG 0x1000
#define PL_dirty cBOOL(PL_phase == PERL_PHASE_DESTRUCT)
#define newSVpvf Perl_newSVpvf_nocontext
#define PF_XTP pseudo_AF_XTP
#define Move(s,d,n,t) (MEM_WRAP_CHECK_(n,t) perl_assert_ptr(d), perl_assert_ptr(s), (void)memmove((char*)(d),(const char*)(s), (n) * sizeof(t)))
#define newSVpvs(str) Perl_newSVpvn(aTHX_ STR_WITH_LEN(str))
#define do_magic_dump(a,b,c,d,e,f,g) Perl_do_magic_dump(aTHX_ a,b,c,d,e,f,g)
#define CPU_SUBTYPE_MIPS_R2300 ((cpu_subtype_t) 1)
#define NGX_HTTP_UPSTREAM_INVALID_HEADER 40
#define PERL_ARGS_ASSERT_PTR_TABLE_FREE 
#define UTF8_ALLOW_SURROGATE 0
#define PERL_ARGS_ASSERT_SV_CATPVN assert(dsv); assert(sstr)
#define ATTR_CMNEXT_RECURSIVE_GENCOUNT 0x00000400
#define sv_2pv_nomg(sv,lp) sv_2pv_flags(sv, lp, 0)
#define PERL_ARGS_ASSERT_FPRINTF_NOCONTEXT assert(stream); assert(format)
#define packWARN(a) (a )
#define AU_ASSIGN_ASID -1
#define cast_ulong Perl_cast_ulong
#define FPC_PC_24 0x0000
#define NGX_ELOOP ELOOP
#define ngx_write_fd_n "write()"
#define PERL_ARGS_ASSERT_DO_MSGSND assert(mark); assert(sp)
#define pcre2_substring_list_free PCRE2_SUFFIX(pcre2_substring_list_free_)
#define PerlLIO_utime(file,time) utime((file), (time))
#define __OSX_UNAVAILABLE 
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_0(x) x
#define C_ARRAY_END(a) ((a) + C_ARRAY_LENGTH(a))
#define RETURNOP(o) return (PUTBACK, o)
#define blk_oldpm cx_u.cx_blk.blku_oldpm
#define PERL_ARGS_ASSERT_CROAK_CALLER 
#define SvUVX(sv) ((XPVUV*) SvANY(sv))->xuv_uv
#define CPU_ARCH_ABI64_32 0x02000000
#define case_168_SBOX32(hash,state,key) 
#define NL_LANGINFO_UNLOCK LOCALE_UNLOCK_
#define memset(dest,...) __builtin___memset_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define TASK_HOST_PORT 2
#define pTHXx_ pTHXx,
#define PERL_ARGS_ASSERT_OP_CONTEXTUALIZE assert(o)
#define OPpDEREF 0x30
#define PERLDBf_SUB 0x01
#define FILESEC_GUID FILESEC_UUID
#define FPC_PE 0x0020
#define IN_LC_RUNTIME(category) (IN_LC_ALL_RUNTIME || (IN_LC_PARTIAL_RUNTIME && Perl__is_in_locale_category(aTHX_ FALSE, (category))))
#define __VM_LEDGER_ACCOUNTING_POSTMARK 2019032600
#define SIGSEGV 11
#define FP_ILOGBNAN (-2147483647 - 1)
#define SvPVbyte(sv,len) (SvPOK_byte_nog(sv) ? ((len = SvCUR(sv)), SvPVX(sv)) : sv_2pvbyte(sv, &len))
#define PERLDBf_SINGLE 0x20
#define NET_RT_DUMP2 7
#define VM_PROT_WANTS_COPY ((vm_prot_t) 0x10)
#define SVp_SCREAM 0x00008000
#define _SC_MESSAGE_PASSING 33
#define SAVECOPSTASH_FREE(c) SAVEIV((c)->cop_stashoff)
#define EVFILT_VM (-12)
#define __INT_FAST32_TYPE__ int
#define CPUFAMILY_ARM_14 0x96077ef1
#define getc_unlocked(fp) __sgetc(fp)
#define IN_CLASSD_HOST 0x0fffffff
#define PERL_ARGS_ASSERT_PARSE_SUBSIGNATURE 
#define fpclassify(x) ( sizeof(x) == sizeof(float) ? __fpclassifyf((float)(x)) : sizeof(x) == sizeof(double) ? __fpclassifyd((double)(x)) : __fpclassifyl((long double)(x)))
#define PERL_ARGS_ASSERT_AV_EXISTS assert(av)
#define PERL_ARGS_ASSERT_NEWMETHOP assert(dynamic_meth)
#define ngx_notify ngx_event_actions.notify
#define TCPOPT_SIGNATURE 19
#define ENV_INIT PERL_RW_MUTEX_INIT(&PL_env_mutex)
#define FPC_PC_53 0x0200
#define IOPOL_VFS_STATFS_FORCE_NO_DATA_VOLUME 1
#define NGX_CONF_OK NULL
#define PERL_HASH_WITH_STATE(state,hash,str,len) (hash) = _PERL_HASH_WITH_STATE((state),(U8*)(str),(len))
#define SIG_DFL (void (*)(int))0
#define _NGX_HTTP_VARIABLES_H_INCLUDED_ 
#define PERL_ARGS_ASSERT_BOOT_CORE_UNIVERSAL 
#define OPpOPEN_IN_CRLF 0x20
#define SvUTF8_on(sv) (SvFLAGS(sv) |= (SVf_UTF8))
#define MACH_MSG_SIZE_NULL (mach_msg_size_t *) 0
#define MACH_EVENTLINK_NULL ((mach_eventlink_t) 0)
#define PERL_ARGS_ASSERT_GROK_BIN assert(start); assert(len_p); assert(flags)
#define pcre2_substring_get_byname PCRE2_SUFFIX(pcre2_substring_get_byname_)
#define FPC_PC_64 0x0300
#define HEK_UTF8_off(hek) (HEK_FLAGS(hek) &= ~HVhek_UTF8)
#define HAS_SETVBUF 
#define PERL_ARGS_ASSERT_GV_EFULLNAME4 assert(sv); assert(gv)
#define PERL_ARGS_ASSERT_SV_COPYPV_NOMG 
#define SIOCDIFPHYADDR _IOW('i', 65, struct ifreq)
#define amagic_call(a,b,c,d) Perl_amagic_call(aTHX_ a,b,c,d)
#define _POSIX_MAX_INPUT 255
#define PWPASSWD 
#define PERL_ARGS_ASSERT_PERLSOCK_SOCKET_CLOEXEC 
#define EXC_MASK_EMULATION (1 << EXC_EMULATION)
#define pTHX_12 13
#define VM_MAX_PAGE_ADDRESS ((user_addr_t) 0x00007FFFFFE00000ULL)
#define __dead 
#define CHARBITS 8
#define NGX_HTTP_CACHE_REVALIDATED 6
#define PERL_ARGS_ASSERT_OP_PREPEND_ELEM 
#define SVpgv_GP SVp_SCREAM
#define CPU_SUBTYPE_PENTIUM_4 CPU_SUBTYPE_INTEL(10, 0)
#define VM_MEMORY_MALLOC 1
#define host_set_host_priv_port(host,port) (KERN_INVALID_ARGUMENT)
#define PL_utf8_mark (vTHX->Iutf8_mark)
#define HAS_CTIME_R 
#define PERL_ARGS_ASSERT_GV_FETCHMETHOD_AUTOLOAD assert(stash); assert(name)
#define __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ 110500
#define DOUBLE_HAS_NEGATIVE_ZERO 
#define CTL_NAMES { { 0, 0 }, { "kern", CTLTYPE_NODE }, { "vm", CTLTYPE_NODE }, { "vfs", CTLTYPE_NODE }, { "net", CTLTYPE_NODE }, { "debug", CTLTYPE_NODE }, { "hw", CTLTYPE_NODE }, { "machdep", CTLTYPE_NODE }, { "user", CTLTYPE_NODE }, }
#define STAILQ_LAST(head,type,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH (STAILQ_EMPTY((head)) ? NULL : ((struct type *)(void *) ((char *)((head)->stqh_last) - __offsetof(struct type, field))))__NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define __MAC_10_14_1 101401
#define PERL_ANY_COW 
#define LC_COLLATE 1
#define PCRE2_UCP 0x00020000u
#define PMf_USE_RE_EVAL (1U<<(PMf_BASE_SHIFT+16))
#define PTHREAD_RWLOCK_INITIALIZER {_PTHREAD_RWLOCK_SIG_init, {0}}
#define PCRE2_ERROR_RECURSIONLIMIT (-53)
#define NGX_CONF_FLAG 0x00000200
#define cop_hints_fetch_pv(cop,key,hash,flags) cophh_fetch_pv(CopHINTHASH_get(cop), key, hash, flags)
#define F_PREALLOCATE 42
#define __CTYPE_H_ 
#define TTYDISC 0
#define HAS_GETNETBYNAME 
#define _MACH_PORT_H_ 
#define SvPADMY(sv) !(SvFLAGS(sv) & SVs_PADTMP)
#define __FLT64X_DIG__ 18
#define PL_taint_warn (vTHX->Itaint_warn)
#define DEBUG_X_TEST (0)
#define SvREADONLY(sv) (SvFLAGS(sv) & (SVf_READONLY|SVf_PROTECT))
#define VM_MIN_ADDRESS ((vm_offset_t) 0)
#define ICMPV6CTL_ND6_ONLINKNSRFC4861 50
#define POSIX_CC_COUNT (_HIGHEST_REGCOMP_DOT_H_SYNC + 1)
#define WARN_EXPERIMENTAL__SCRIPT_RUN 68
#define PERL_ARGS_ASSERT_SV_PVN_FORCE_FLAGS assert(sv)
#define SAVE_ERRNO (saved_errno = errno)
#define PERL_ARGS_ASSERT_SLAB_ALLOC 
#define SIOCDIFADDR _IOW('i', 25, struct ifreq)
#define NGX_HASH_WILDCARD_KEY 1
#define KERN_PROC_TTY 4
#define PERL_ARGS_ASSERT_GV_FETCHFILE_FLAGS assert(name)
#define LC_NUMERIC_MASK (1 << 4)
#define NGX_HTTP_PARSE_HEADER_DONE 1
#define OPpENTERSUB_INARGS 0x01
#define case_8_SBOX32(hash,state,key) _SBOX32_CASE(8,hash,state,key)
#define PCRE2_MATCH_INVALID_UTF 0x04000000u
#define NGX_HTTP_UPSTREAM_DOWN 0x0010
#define FSOPT_REPORT_FULLSIZE 0x00000004
#define Uquad_t unsigned long
#define HW_MEMSIZE 24
#define PERL_ARGS_ASSERT_CK_GREP assert(o)
#define _MACH_I386_VM_PARAM_H_ 
#define CPU_TYPE_SPARC ((cpu_type_t) 14)
#define case_253_SBOX32(hash,state,key) 
#define UNLOCK_DOLLARZERO_MUTEX MUTEX_UNLOCK(&PL_dollarzero_mutex)
#define CAST_USER_ADDR_T(a_ptr) ((user_addr_t)((uintptr_t)(a_ptr)))
#define SvIS_FREED(sv) UNLIKELY(((sv)->sv_flags == SVTYPEMASK))
#define SvPV_free(sv) STMT_START { assert(SvTYPE(sv) >= SVt_PV); if (SvLEN(sv)) { assert(!SvROK(sv)); if(UNLIKELY(SvOOK(sv))) { STRLEN zok; SvOOK_offset(sv, zok); SvPV_set(sv, SvPVX_mutable(sv) - zok); SvFLAGS(sv) &= ~SVf_OOK; } Safefree(SvPVX(sv)); } } STMT_END
#define OA_MARK 1
#define isALNUM_utf8_safe(p,e) isWORDCHAR_utf8_safe(p,e)
#define SIOCGIFMTU _IOWR('i', 51, struct ifreq)
#define THREAD_STATE_FLAVOR_LIST_10_15 131
#define PCRE2_ERROR_BACKSLASH_K_SYNTAX 169
#define PCRE2_ALLOW_EMPTY_CLASS 0x00000001u
#define VQ_NEARLOWDISK 0x2000
#define NGX_ENOMOREFILES 0
#define CLOCK_GET_TIME_RES 1
#define isCNTRL_A(c) _generic_isCC_A(c, _CC_CNTRL)
#define NGX_HTTP_SUBREQUEST_WAITED 4
#define _to_uni_fold_flags(a,b,c,d) Perl__to_uni_fold_flags(aTHX_ a,b,c,d)
#define F_TLOCK 2
#define cLOOPx(o) ((LOOP*)(o))
#define isGRAPH_LC_utf8_safe(p,e) _generic_LC_invlist_utf8_safe(isGRAPH_LC, _CC_GRAPH, p, e)
#define MAC_OS_X_VERSION_10_11_4 101104
#define PERL_HASH_SEED_STATE(seed,state) _PERL_HASH_SEED_STATE(seed,state)
#define CvCVGV_RC_on(cv) (CvFLAGS(cv) |= CVf_CVGV_RC)
#define IPPROTO_SCCSP 96
#define PERL_ARGS_ASSERT_SV_ISA assert(name)
#define FF_HALFSPACE 8
#define isPSXSPC_LC_utf8(p,e) isPSXSPC_LC_utf8_safe(p, e)
#define PERL_ARGS_ASSERT_SV_DOES assert(sv); assert(name)
#define SvSMAGICAL_off(sv) (SvFLAGS(sv) &= ~SVs_SMG)
#define IPV6CTL_MAXID 51
#define KERN_NGROUPS 18
#define SO_REUSEPORT 0x0200
#define cast_uv Perl_cast_uv
#define AvFILL(av) ((SvRMAGICAL((const SV *) (av))) ? mg_size(MUTABLE_SV(av)) : AvFILLp(av))
#define GvFILE_HEK(gv) (GvGP(gv)->gp_file_hek)
#define EV_EOF 0x8000
#define KEV_INET6_NEW_RTADV_ADDR 5
#define NGX_HTTP_CLIENT_CLOSED_REQUEST 499
#define SVp_NOK 0x00002000
#define PL_amagic_generation PL_na
#define ATTR_CMNEXT_PRIVATESIZE 0x00000008
#define sv_unref(sv) sv_unref_flags(sv, 0)
#define KMOD_RETURN_SUCCESS KERN_SUCCESS
#define MY_CXT_CLONE my_cxt_t *my_cxtp = (my_cxt_t*)SvPVX(newSV(sizeof(my_cxt_t)-1)); void * old_my_cxtp = PL_my_cxt_list[MY_CXT_INDEX]; PL_my_cxt_list[MY_CXT_INDEX] = my_cxtp; Copy(old_my_cxtp, my_cxtp, 1, my_cxt_t);
#define VOL_CAP_INT_COPYFILE 0x00000020
#define croak_nocontext Perl_croak_nocontext
#define PERL_ARGS_ASSERT_FBM_INSTR assert(big); assert(bigend); assert(littlestr)
#define PERL_PV_PRETTY_QUOTE PERL_PV_ESCAPE_QUOTE
#define KERN_MEMORY_RESTART_COPY 25
#define PerlSIO_vprintf(f,fmt,a) vfprintf(f,fmt,a)
#define dPOPXssrl(X) SV *right = POPs; SV *left = CAT2(X,s)
#define G_DISCARD 0x4
#define LEAVE_SCOPE(old) STMT_START { if (PL_savestack_ix > old) leave_scope(old); } STMT_END
#define PERL_ARGS_ASSERT_DO_AEXEC5 assert(mark); assert(sp)
#define PCRE2_INFO_BSR 3
#define CPU_SUBTYPE_POWERPC_7400 ((cpu_subtype_t) 10)
#define sv_catpv_nomg(dsv,sstr) sv_catpv_flags(dsv, sstr, 0)
#define PVM 4
#define SRCHFS_MATCHPARTIALNAMES 0x00000002
#define PERL_ARGS_ASSERT_CV_NAME assert(cv)
#define RX_OFFS(rx_sv) (RXp_OFFS(ReANY(rx_sv)))
#define case_23_SBOX32(hash,state,key) _SBOX32_CASE(23,hash,state,key)
#define AUDIT_TRIGGER_NO_SPACE 5
#define savesharedpvn(a,b) Perl_savesharedpvn(aTHX_ a,b)
#define PERL_ARGS_ASSERT_SAVE_SCALAR assert(gv)
#define IV_MAX PERL_QUAD_MAX
#define pcre2_substring_number_from_name PCRE2_SUFFIX(pcre2_substring_number_from_name_)
#define PCRE2_ALT_CIRCUMFLEX 0x00200000u
#define MNT_EXPORTED 0x00000100
#define PERL_ARGS_ASSERT_REGDUPE_INTERNAL assert(r); assert(param)
#define ngx_atomic_fetch_add(value,add) __sync_fetch_and_add(value, add)
#define REENTRANT_PROTO_I_CII 14
#define MEMORY_OBJECT_COPY_DELAY 2
#define CPU_STATE_SYSTEM 1
#define p_starttime p_un.__p_starttime
#define case_99_SBOX32(hash,state,key) 
#define MSG_TRUNC 0x10
#define PCRE2_ERROR_HEAPLIMIT (-63)
#define VM_MEMORY_APPLICATION_SPECIFIC_1 240
#define __QOS_CLASS_AVAILABLE(...) 
#define _UID_T 
#define AF_NDRV 27
#define MALLOC_ADMIN_REGION_RANGE_TYPE 4
#define MAXPHYSIO_WIRED (16 * 1024 * 1024)
#define host_set_container_port(host,port) (host_set_special_port((host), HOST_CONTAINERD_PORT, (port)))
#define WARN_SIGNAL 26
#define WARN_SYNTAX 28
#define NONDESTRUCT_PAT_MODS "r"
#define PERL_ARGS_ASSERT_YYUNLEX 
#define PERL_ARGS_ASSERT_NEWSVPVN_SHARE 
#define SvIOK_only(sv) (SvOK_off(sv), SvFLAGS(sv) |= (SVf_IOK|SVp_IOK))
#define x86_THREAD_STATE 7
#define TAILQ_CHECK_PREV(elm,field) 
#define EXCEPTION_STATE_IDENTITY 3
#define __NEW_SCHEDULING_FRAMEWORK__ 
#define PERL_WRITE_LOCK(mutex) STMT_START { MUTEX_LOCK(&(mutex)->lock); do { if ((mutex)->readers_count <= 0) { assert((mutex)->readers_count == 0); (mutex)->readers_count = 0; break; } COND_WAIT(&(mutex)->wakeup, &(mutex)->lock); } while (1); } STMT_END
#define GLOB_MAXPATH GLOB_LIMIT
#define UV_MAX_P1 (4.0 * (1 + ((UV_MAX) >> 2)))
#define PCRE2_ERROR_INTERNAL_STUDY_ERROR 131
#define MACH_VOUCHER_SELECTOR_EFFECTIVE ((mach_voucher_selector_t)1)
#define _is_utf8_perl_idcont(a,b) Perl__is_utf8_perl_idcont(aTHX_ a,b)
#define _SC_THREAD_PROCESS_SHARED 90
#define __SIZEOF_PTRDIFF_T__ 8
#define HAS_LOG1P 
#define MICRO_SIGN MICRO_SIGN_NATIVE
#define RLIMIT_CORE 4
#define CLBYTES (CLSIZE*NBPG)
#define P_DIRTY_ALLOW_IDLE_EXIT 0x00000002
#define PERL_ARGS_ASSERT_VMESS assert(pat)
#define IOCPARM_MASK 0x1fff
#define __MATH_H__ 
#define CvCLONED_off(cv) (CvFLAGS(cv) &= ~CVf_CLONED)
#define CopHINTS_get(c) ((c)->cop_hints + 0)
#define IPV6_PREFER_TEMPADDR 63
#define PERL_ARGS_ASSERT_PREGFREE2 assert(rx)
#define case_227_SBOX32(hash,state,key) 
#define REENTRANT_PROTO_I_UISBWRE 51
#define PCRE2_ERROR_DFA_RECURSE (-39)
#define HOST_VM_INFO_REV2_COUNT HOST_VM_INFO_LATEST_COUNT
#define NOFILE 256
#define PL_padlist_generation (vTHX->Ipadlist_generation)
#define HAS_MUNMAP 
#define PERL_MAGIC_sigelem 's'
#define OS_ALWAYS_INLINE __attribute__((__always_inline__))
#define PerlDir_mkdir(name,mode) Mkdir((name), (mode))
#define OPpTRANS_GROWS 0x40
#define HAS_IPV6_MREQ 
#define SVf256 SVf_(256)
#define SO_TIMESTAMP 0x0400
#define CvCLONED(cv) (CvFLAGS(cv) & CVf_CLONED)
#define SvIV_please(sv) STMT_START {if (!SvIOKp(sv) && (SvFLAGS(sv) & (SVf_NOK|SVf_POK))) (void) SvIV(sv); } STMT_END
#define PCRE2_CONFIG_DEPTHLIMIT 7
#define VM_GET_FLAGS_ALIAS(flags,alias) (alias) = ((flags) & VM_FLAGS_ALIAS_MASK) >> 24
#define UTF8_ALLOW_OVERFLOW 0x0080
#define SBOX32_CHURN_ROUNDS 5
#define HVhek_KEYCANONICAL 0x400
#define gv_fetchmethod_pv_flags(a,b,c) Perl_gv_fetchmethod_pv_flags(aTHX_ a,b,c)
#define PERL_ARGS_ASSERT_HV_ITERNEXT assert(hv)
#define UTF8SKIP(s) PL_utf8skip[*(const U8*)(s)]
#define case_159_SBOX32(hash,state,key) 
#define NGX_HTTP_OK 200
#define __TVOS_14_0 140000
#define __FLT32X_MANT_DIG__ 53
#define PERL_ARGS_ASSERT_PADNAME_FREE assert(pn)
#define ATTR_FILE_RSRCEXTENTS 0x00004000
#define cx_popsub_args(a) Perl_cx_popsub_args(aTHX_ a)
#define PERL_USE_GCC_BRACE_GROUPS 
#define SV_SKIP_OVERLOAD 8192
#define _POSIX_IPV6 200112L
#define PCRE2_ERROR_UNICODE_NOT_SUPPORTED 132
#define pcre2_convert_context_create PCRE2_SUFFIX(pcre2_convert_context_create_)
#define PERL_ARGS_ASSERT_SAVE_PPTR assert(pptr)
#define sv_catpvf_mg_nocontext Perl_sv_catpvf_mg_nocontext
#define HAS_LDEXPL 
#define USER_POSIX2_C_BIND 11
#define PerlSIO_get_cnt(f) 0
#define KERN_USRSTACK32 35
#define HAS_GETNAMEINFO 
#define Perl_ceil ceil
#define EAI_OVERFLOW 14
#define THREAD_TIME_CONSTRAINT_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (thread_time_constraint_policy_data_t) / sizeof (integer_t)))
#define PERL_ARGS_ASSERT_CX_POPEVAL assert(cx)
#define CALL_FPTR(fptr) (*fptr)
#define PERL_ARGS_ASSERT_PERLIO_FILENO 
#define isASCII_utf8(p,e) isASCII_utf8_safe(p, e)
#define NGX_HAVE_FIONREAD 1
#define _GCC_LIMITS_H_ 
#define newCVREF(a,b) Perl_newCVREF(aTHX_ a,b)
#define PERL_MAGIC_backref '<'
#define PerlSIO_fdopen(f,s) fdopen(f,s)
#define IP_BLOCK_SOURCE 72
#define PERL_ARGS_ASSERT_SV_PVN_FORCE assert(sv)
#define PROT_READ 0x01
#define PERL_ARGS_ASSERT_SCAN_OCT assert(start); assert(retlen)
#define __x86_64__ 1
#define TIOCNOTTY _IO('t', 113)
#define RLIMIT_RSS RLIMIT_AS
#define _XLOCALE___WCTYPE_H_ 
#define x86_THREAD_STATE64_COUNT ((mach_msg_type_number_t) ( sizeof (x86_thread_state64_t) / sizeof (int) ))
#define PERL_ARGS_ASSERT_MY_LSTAT 
#define IV_MIN PERL_QUAD_MIN
#define NGX_HTTP_AIO_OFF 0
#define UINT_FAST32_MAX UINT32_MAX
#define CvCLONE(cv) (CvFLAGS(cv) & CVf_CLONE)
#define O_CREAT 0x00000200
#define HAS_STRUCT_MSGHDR 
#define PCRE2_ERROR_NOMATCH (-1)
#define LvTARGLEN(sv) ((XPVLV*) SvANY(sv))->xlv_targlen
#define PL_utf8_charname_begin (vTHX->Iutf8_charname_begin)
#define PL_modglobal (vTHX->Imodglobal)
#define sv_copypv_nomg(dsv,ssv) sv_copypv_flags(dsv, ssv, 0)
#define OA_HVREF 4
#define pTHX_VALUE (void *)my_perl
#define PERL_ARGS_ASSERT_BIND_MATCH assert(left); assert(right)
#define PL_unicode (vTHX->Iunicode)
#define KEV_INET6_SUBCLASS 6
#define ngx_log_debug1(level,log,err,fmt,arg1) 
#define ngx_log_debug2(level,log,err,fmt,arg1,arg2) 
#define ngx_log_debug3(level,log,err,fmt,arg1,arg2,arg3) 
#define ngx_log_debug4(level,log,err,fmt,arg1,arg2,arg3,arg4) 
#define ngx_log_debug5(level,log,err,fmt,arg1,arg2,arg3,arg4,arg5) 
#define ngx_log_debug6(level,log,err,fmt,arg1,arg2,arg3,arg4,arg5,arg6) 
#define ngx_log_debug7(level,log,err,fmt,arg1,arg2,arg3,arg4,arg5,arg6,arg7) 
#define ngx_log_debug8(level,log,err,fmt,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) 
#define SvMAGIC_set(sv,val) STMT_START { assert(SvTYPE(sv) >= SVt_PVMG); (((XPVMG*)SvANY(sv))->xmg_u.xmg_magic = (val)); } STMT_END
#define gv_SVadd(gv) gv_add_by_type((gv), SVt_NULL)
#define __deprecated __attribute__((__deprecated__))
#define KERN_USRSTACK64 59
#define _SSIZE_T 
#define RX_WRAPLEN(rx_sv) SvCUR(rx_sv)
#define DEBUG_c_TEST (0)
#define _SYS_IOCCOM_H_ 
#define PL_phase (vTHX->Iphase)
#define MACH_MSG_TYPE_PORT_NAME 15
#define PERL_ARGS_ASSERT_AV_CREATE_AND_PUSH assert(avp); assert(val)
#define any_dup(a,b) Perl_any_dup(aTHX_ a,b)
#define DEBUG_P_FLAG 0x00000040
#define HINTS_DEFAULT 0
#define PERL_ARGS_ASSERT_IS_UTF8_CHAR_HELPER assert(s); assert(e)
#define scan_hex(a,b,c) Perl_scan_hex(aTHX_ a,b,c)
#define MACH_MSG_TYPE_PORT_ANY_RIGHT(x) (((x) >= MACH_MSG_TYPE_MOVE_RECEIVE) && ((x) <= MACH_MSG_TYPE_MOVE_SEND_ONCE))
#define _SC_XBS5_LP64_OFF64 124
#define PERL_MULTICONCAT_HEADER_SIZE 5
#define PTHREAD_DESTRUCTOR_ITERATIONS 4
#define RXf_TAINTED (1U<<(RXf_BASE_SHIFT+13))
#define av_undef(a) Perl_av_undef(aTHX_ a)
#define PERL_ARGS_ASSERT_NEWXS_FLAGS assert(subaddr); assert(filename)
#define __UINT_LEAST64_TYPE__ long long unsigned int
#define UNICODE_GOT_SURROGATE UNICODE_DISALLOW_SURROGATE
#define MINSIGSTKSZ 32768
#define _generic_LC_base(c,utf8_locale_classnum,non_utf8) (! FITS_IN_8_BITS(c) ? 0 : IN_UTF8_CTYPE_LOCALE ? cBOOL(PL_charclass[(U8) (c)] & _CC_mask(utf8_locale_classnum)) : cBOOL(non_utf8))
#define CALLREG_NAMED_BUFF_FIRSTKEY(rx,flags) RX_ENGINE(rx)->named_buff_iter(aTHX_ (rx), NULL, ((flags) | RXapif_FIRSTKEY))
#define PERL_ARGS_ASSERT_MG_MAGICAL assert(sv)
#define DT_REG 8
#define SLIST_NEXT(elm,field) ((elm)->field.sle_next)
#define __FLT_HAS_QUIET_NAN__ 1
#define NGX_HAVE_KQUEUE 1
#define AvREAL(av) (SvFLAGS(av) & SVpav_REAL)
#define HAS_TIMEGM 
#define _SC_THREAD_ATTR_STACKADDR 82
#define ZeroD(d,n,t) (MEM_WRAP_CHECK_(n,t) perl_assert_ptr(d), memzero((char*)(d), (n) * sizeof(t)))
#define SvLEN(sv) ((XPV*) SvANY(sv))->xpv_len
#define PERL_MY_VSNPRINTF_POST_GUARD(len,max) PERL_UNUSED_VAR(len)
#define MACH_MSG_BODY_NULL (mach_msg_body_t *) 0
#define PERL_ARGS_ASSERT_MY_POPEN_LIST assert(mode); assert(args)
#define perl_eval_pv(a,b) eval_pv(a,b)
#define _MACH_MACHINE_EXCEPTION_H_ 
#define regexec_flags(a,b,c,d,e,f,g,h) Perl_regexec_flags(aTHX_ a,b,c,d,e,f,g,h)
#define CPERLarg void
#define AMGf_unary 8
#define SAVEPARSER(p) save_pushptr((p), SAVEt_PARSER)
#define PerlLIO_isatty(fd) isatty((fd))
#define PERL_ARGS_ASSERT_SV_DOES_PV assert(sv); assert(name)
#define __dead2 __attribute__((__noreturn__))
#define case_244_SBOX32(hash,state,key) 
#define PADNAMEt_TYPED 8
#define DB_Hash_t u_int32_t
#define PCRE2_ERROR_QUANTIFIER_TOO_BIG 105
#define NGX_FILE_SEARCH (O_RDONLY|NGX_FILE_DIRECTORY)
#define __FLT_HAS_INFINITY__ 1
#define pcre2_match_context PCRE2_SUFFIX(pcre2_match_context_)
#define OPf_WANT_VOID 1
#define NGX_READ_EVENT EVFILT_READ
#define PERL_ARGS_ASSERT_RE_OP_COMPILE assert(eng)
#define TASK_EXTMOD_INFO_COUNT (sizeof(task_extmod_info_data_t) / sizeof(natural_t))
#define VQ_DEAD 0x0020
#define PL_restartop (vTHX->Irestartop)
#define cv_set_call_checker(a,b,c) Perl_cv_set_call_checker(aTHX_ a,b,c)
#define __ENABLE_LEGACY_MAC_AVAILABILITY 1
#define GvGPFLAGS(gv) (GvGP(gv)->gp_flags)
#define IPV6_DEFAULT_MULTICAST_HOPS 1
#define MATTR_REPLICATE 4
#define SvOBJECT_on(sv) (SvFLAGS(sv) |= SVs_OBJECT)
#define _I386_LIMITS_H_ 
#define case_176_SBOX32(hash,state,key) 
#define vTHX aTHX
#define SAVEt_GENERIC_PVREF 27
#define PRIXPTR "lX"
#define PERL_ARGS_ASSERT_CK_DELETE assert(o)
#define LONGDOUBLE_X86_80_BIT 
#define Atof my_atof
#define PERL_ARGS_ASSERT_NINSTR assert(big); assert(bigend); assert(little); assert(lend)
#define SIGXFSZ 25
#define EVAL_NULL 0
#define _TIME_T 
#define do_binmode(a,b,c) Perl_do_binmode(aTHX_ a,b,c)
#define SIGHUP 1
#define PERL_ARGS_ASSERT_UPG_VERSION assert(ver)
#define MACH_SEND_INVALID_MEMORY 0x1000000c
#define F_VOLPOSMODE 4
#define PCRE2_ERROR_MATCHLIMIT (-47)
#define MACH_MSG_SUCCESS 0x00000000
#define PERL_ARGS_ASSERT_SVREFCNT_DEC_NN assert(sv)
#define PerlSock_gethostbyaddr(a,l,t) gethostbyaddr(a, l, t)
#define PERL_ARGS_ASSERT_RNINSTR assert(big); assert(bigend); assert(little); assert(lend)
#define G_RE_REPARSING 0x800
#define __INT_FAST32_WIDTH__ 32
#define PERLSI_DIEHOOK 8
#define SAVEDESTRUCTOR(f,p) save_destructor((DESTRUCTORFUNC_NOCONTEXT_t)(f), (void*)(p))
#define _POSIX2_CHARCLASS_NAME_MAX 14
#define __CHAR16_TYPE__ short unsigned int
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_1(x) 
#define newSVOP(a,b,c) Perl_newSVOP(aTHX_ a,b,c)
#define UNICODE_DISALLOW_SUPER 0x0040
#define _POSIX_SEM_NSEMS_MAX 256
#define OS_SWIFT_UNAVAILABLE(_msg) 
#define AT_SYMLINK_NOFOLLOW 0x0020
#define op_dump(a) Perl_op_dump(aTHX_ a)
#define FF_ITEM 9
#define cx_topblock(a) Perl_cx_topblock(aTHX_ a)
#define PERLDBf_INTER 0x08
#define __DBL_NORM_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define NGX_HTTP_UPSTREAM_CREATE 0x0001
#define PERL_ARGS_ASSERT_MAGIC_SETMGLOB assert(sv); assert(mg)
#define _PW_KEYBYUID '3'
#define PERL_ARGS_ASSERT_DUMP_INDENT assert(file); assert(pat)
#define TIOCUCNTL _IOW('t', 102, int)
#define NGX_HAVE_CLEAR_EVENT 1
#define __SIZE_WIDTH__ 64
#define ONCE_PAT_MOD 'o'
#define PERL_ARGS_ASSERT_SV_GET_BACKREFS assert(sv)
#define PL_utf8_toupper (vTHX->Iutf8_toupper)
#define PCRE2_DFA_RESTART 0x00000040u
#define OFF_MIN LLONG_MIN
#define EXC_I386_NOEXTFLT 7
#define TCP_SENDMOREACKS 0x103
#define PCRE2_ERROR_SUBPATTERN_NAME_EXPECTED 162
#define GETNETBYNAME_R_PROTO 0
#define _CS_XBS5_ILP32_OFF32_LDFLAGS 21
#define UTF8_DISALLOW_ILLEGAL_INTERCHANGE (UTF8_DISALLOW_ILLEGAL_C9_INTERCHANGE|UTF8_DISALLOW_NONCHAR)
#define FSEEKSIZE LSEEKSIZE
#define x86_EXCEPTION_STATE64_COUNT ((mach_msg_type_number_t) ( sizeof (x86_exception_state64_t) / sizeof (int) ))
#define __UINT_LEAST8_TYPE__ unsigned char
#define CPU_SUBTYPE_MIPS_R2600 ((cpu_subtype_t) 2)
#define cx_popsub(a) Perl_cx_popsub(aTHX_ a)
#define HAS_STRTOD 
#define HAS_STRTOL 
#define HAS_STRTOQ 
#define KERN_RPC_TERMINATE_ORPHAN 44
#define HAS_PATHCONF 
#define SvIsCOW(sv) (SvFLAGS(sv) & SVf_IsCOW)
#define RXf_USE_INTUIT (RXf_USE_INTUIT_NOML|RXf_USE_INTUIT_ML)
#define MADV_CAN_REUSE 9
#define RsRECORD(sv) (SvROK(sv) && (SvIV(SvRV(sv)) > 0))
#define CPU_SUBTYPE_POWERPC_603ev ((cpu_subtype_t) 5)
#define F_SETSIZE 43
#define PERL_ARGS_ASSERT_SV_CATPV_MG assert(dsv)
#define _SC_MEMORY_PROTECTION 32
#define EXC_I386_EXTERRFLT 16
#define NGX_RESOLVE_A 1
#define CvMETHOD_on(cv) (CvFLAGS(cv) |= CVf_METHOD)
#define MACH_MSG_OOL_VOLATILE_DESCRIPTOR 3
#define repeatcpy Perl_repeatcpy
#define NGX_HTTP_PARSE_INVALID_REQUEST 11
#define SAVEt_COMPPAD 7
#define NGX_HTTP_CACHE 1
#define IPV6CTL_HDRNESTLIMIT 15
#define NV_NAN_PAYLOAD_MASK_SKIP_EIGHT 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0
#define KERN_KDREADTR 10
#define isPRINT_L1(c) _generic_isCC(c, _CC_PRINT)
#define cop_hints_exists_sv(cop,key,hash,flags) cophh_exists_sv(CopHINTHASH_get(cop), key, hash, flags)
#define PERL_ARGS_ASSERT_MY_SOCKETPAIR 
#define __darwin_obsz0(object) __builtin_object_size (object, 0)
#define OPpASSIGN_COMMON_AGG 0x10
#define MCAST_INCLUDE 1
#define IPC_W 000200
#define isPRINT_LC(c) _generic_LC(c, _CC_PRINT, isprint)
#define __STDC_VERSION__ 201710L
#define utf8_to_uvchr(a,b) Perl_utf8_to_uvchr(aTHX_ a,b)
#define VM_MEMORY_OBJC_DISPATCHERS 34
#define ATTR_CMN_VOLSETMASK 0x00006700
#define SAVEI16(i) save_I16((I16*)&(i))
#define PCRE2_ERROR_ESCAPE_INVALID_IN_VERB 140
#define CTL_DEBUG_MAXID 20
#define PCRE2_ERROR_QUANTIFIER_INVALID 109
#define MPG_FLAGS_STRICT_REPLY_INVALID_VOUCHER (0x04ull << 56)
#define PERL_ARGS_ASSERT_PRESCAN_VERSION assert(s)
#define SEEK_HOLE 3
#define NGX_ECHILD ECHILD
#define OPpPADRANGE_COUNTSHIFT 0x07
#define PERL_ARGS_ASSERT_OP_APPEND_ELEM 
#define ngx_create_dir_n "mkdir()"
#define SAVEt_HINTS 31
#define HAS_LOGB 
#define PMf_HAS_ERROR (1U<<(PMf_BASE_SHIFT+3))
#define isUPPER(c) isUPPER_A(c)
#define VM_MEMORY_GLSL 66
#define POLICY_FIFO_INFO_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_fifo_info)/sizeof(integer_t)))
#define sv_setiv(a,b) Perl_sv_setiv(aTHX_ a,b)
#define FILTER_DATA(idx) (PL_parser ? AvARRAY(PL_parser->rsfp_filters)[idx] : NULL)
#define x86_FLOAT_STATE64_COUNT ((mach_msg_type_number_t) (sizeof(x86_float_state64_t)/sizeof(unsigned int)))
#define UINTMAX_C(v) (v ## UL)
#define PERL_ARGS_ASSERT_CV_GET_CALL_CHECKER_FLAGS assert(cv); assert(ckfun_p); assert(ckobj_p); assert(ckflags_p)
#define PCRE2_ERROR_INTERNAL_BAD_CODE_LOOKBEHINDS 170
#define utf8_to_uvuni(a,b) Perl_utf8_to_uvuni(aTHX_ a,b)
#define NOTE_REAP ((unsigned int)eNoteReapDeprecated )
#define NGX_HTTP_LOC_CONF 0x08000000
#define is_THREE_CHAR_FOLD_HEAD_utf8_safe(s,e) ( ((e)-(s) > 3) ? ( ( ( ( ((const U8*)s)[0] & 0xDF ) == 'A' ) || ( ( ((const U8*)s)[0] & 0xDE ) == 'H' ) || ( ( ((const U8*)s)[0] & 0xDF ) == 'J' ) || ( ( ((const U8*)s)[0] & 0xDB ) == 'S' ) || ( ( ((const U8*)s)[0] & 0xDF ) == 'T' ) || ( ( ((const U8*)s)[0] & 0xDF ) == 'Y' ) ) ? 1 : ( ( ((const U8*)s)[0] & 0xDF ) == 'F' ) ? ( ( ( ((const U8*)s)[1] & 0xDF ) == 'F' ) ? 2 : 1 ) : ( 0xC5 == ((const U8*)s)[0] ) ? ( ( 0xBF == ((const U8*)s)[1] ) ? 2 : 0 ) : ( 0xCA == ((const U8*)s)[0] ) ? ( ( 0xBC == ((const U8*)s)[1] ) ? 2 : 0 ) : ( 0xCE == ((const U8*)s)[0] ) ? ( ( ( ((const U8*)s)[1] & 0xFD ) == 0xAC ) ? 2 : ( 0xB1 == ((const U8*)s)[1] || 0xB7 == ((const U8*)s)[1] ) ? ( ( ( 0xCD == ((const U8*)s)[2] ) && ( 0x82 == ((const U8*)s)[3] ) ) ? 4 : 2 ) : ( 0xB9 == ((const U8*)s)[1] ) ? ( ( ( 0xCC == ((const U8*)s)[2] ) && ( 0x88 == ((const U8*)s)[3] ) ) ? 4 : 2 ) : 0 ) : ( 0xCF == ((const U8*)s)[0] ) ? ( ( 0x81 == ((const U8*)s)[1] || 0x8E == ((const U8*)s)[1] ) ? 2 : ( 0x85 == ((const U8*)s)[1] ) ? ( ( ( 0xCC == ((const U8*)s)[2] ) && ( 0x88 == ((const U8*)s)[3] || 0x93 == ((const U8*)s)[3] ) ) ? 4 : 2 ) : ( 0x89 == ((const U8*)s)[1] ) ? ( ( ( 0xCD == ((const U8*)s)[2] ) && ( 0x82 == ((const U8*)s)[3] ) ) ? 4 : 2 ) : 0 ) : ( 0xD5 == ((const U8*)s)[0] ) ? ( ( 0xA5 == ((const U8*)s)[1] || 0xB4 == ((const U8*)s)[1] || 0xBE == ((const U8*)s)[1] ) ? 2 : 0 ) : ( 0xE1 == ((const U8*)s)[0] ) ? ( ( 0xBC == ((const U8*)s)[1] ) ? ( ( ( ((const U8*)s)[2] & 0xD8 ) == 0x80 ) ? 3 : 0 ) : ( ( 0xBD == ((const U8*)s)[1] ) && ( ( ( ((const U8*)s)[2] & 0xF8 ) == 0xA0 ) || ( ( ((const U8*)s)[2] & 0xFB ) == 0xB0 ) || ((const U8*)s)[2] == 0xBC ) ) ? 3 : 0 ) : 0 ) : ((e)-(s) > 2) ? ( ( ( ( ((const U8*)s)[0] & 0xDF ) == 'A' ) || ( ( ((const U8*)s)[0] & 0xDE ) == 'H' ) || ( ( ((const U8*)s)[0] & 0xDF ) == 'J' ) || ( ( ((const U8*)s)[0] & 0xDB ) == 'S' ) || ( ( ((const U8*)s)[0] & 0xDF ) == 'T' ) || ( ( ((const U8*)s)[0] & 0xDF ) == 'Y' ) ) ? 1 : ( ( ((const U8*)s)[0] & 0xDF ) == 'F' ) ? ( ( ( ((const U8*)s)[1] & 0xDF ) == 'F' ) ? 2 : 1 ) : ( 0xC5 == ((const U8*)s)[0] ) ? ( ( 0xBF == ((const U8*)s)[1] ) ? 2 : 0 ) : ( 0xCA == ((const U8*)s)[0] ) ? ( ( 0xBC == ((const U8*)s)[1] ) ? 2 : 0 ) : ( 0xCE == ((const U8*)s)[0] ) ? ( ( ( ( ((const U8*)s)[1] & 0xFD ) == 0xAC ) || ( ( ((const U8*)s)[1] & 0xF7 ) == 0xB1 ) || ((const U8*)s)[1] == 0xB7 ) ? 2 : 0 ) : ( 0xCF == ((const U8*)s)[0] ) ? ( ( ( ( ((const U8*)s)[1] & 0xFB ) == 0x81 ) || ((const U8*)s)[1] == 0x89 || ((const U8*)s)[1] == 0x8E ) ? 2 : 0 ) : ( 0xD5 == ((const U8*)s)[0] ) ? ( ( 0xA5 == ((const U8*)s)[1] || 0xB4 == ((const U8*)s)[1] || 0xBE == ((const U8*)s)[1] ) ? 2 : 0 ) : ( 0xE1 == ((const U8*)s)[0] ) ? ( ( 0xBC == ((const U8*)s)[1] ) ? ( ( ( ((const U8*)s)[2] & 0xD8 ) == 0x80 ) ? 3 : 0 ) : ( ( 0xBD == ((const U8*)s)[1] ) && ( ( ( ((const U8*)s)[2] & 0xF8 ) == 0xA0 ) || ( ( ((const U8*)s)[2] & 0xFB ) == 0xB0 ) || ((const U8*)s)[2] == 0xBC ) ) ? 3 : 0 ) : 0 ) : ((e)-(s) > 1) ? ( ( ( ( ((const U8*)s)[0] & 0xDF ) == 'A' ) || ( ( ((const U8*)s)[0] & 0xDE ) == 'H' ) || ( ( ((const U8*)s)[0] & 0xDF ) == 'J' ) || ( ( ((const U8*)s)[0] & 0xDB ) == 'S' ) || ( ( ((const U8*)s)[0] & 0xDF ) == 'T' ) || ( ( ((const U8*)s)[0] & 0xDF ) == 'Y' ) ) ? 1 : ( ( ((const U8*)s)[0] & 0xDF ) == 'F' ) ? ( ( ( ((const U8*)s)[1] & 0xDF ) == 'F' ) ? 2 : 1 ) : ( 0xC5 == ((const U8*)s)[0] ) ? ( ( 0xBF == ((const U8*)s)[1] ) ? 2 : 0 ) : ( 0xCA == ((const U8*)s)[0] ) ? ( ( 0xBC == ((const U8*)s)[1] ) ? 2 : 0 ) : ( 0xCE == ((const U8*)s)[0] ) ? ( ( ( ( ((const U8*)s)[1] & 0xFD ) == 0xAC ) || ( ( ((const U8*)s)[1] & 0xF7 ) == 0xB1 ) || ((const U8*)s)[1] == 0xB7 ) ? 2 : 0 ) : ( 0xCF == ((const U8*)s)[0] ) ? ( ( ( ( ((const U8*)s)[1] & 0xFB ) == 0x81 ) || ((const U8*)s)[1] == 0x89 || ((const U8*)s)[1] == 0x8E ) ? 2 : 0 ) : ( ( 0xD5 == ((const U8*)s)[0] ) && ( 0xA5 == ((const U8*)s)[1] || 0xB4 == ((const U8*)s)[1] || 0xBE == ((const U8*)s)[1] ) ) ? 2 : 0 ): ((e)-(s) > 0) ? ( ( ( ((const U8*)s)[0] & 0xDF ) == 'A' ) || ( ( ((const U8*)s)[0] & 0xDF ) == 'F' ) || ( ( ((const U8*)s)[0] & 0xDE ) == 'H' ) || ( ( ((const U8*)s)[0] & 0xDF ) == 'J' ) || ( ( ((const U8*)s)[0] & 0xDB ) == 'S' ) || ( ( ((const U8*)s)[0] & 0xDF ) == 'T' ) || ( ( ((const U8*)s)[0] & 0xDF ) == 'Y' ) ): 0 )
#define PERL_ARGS_ASSERT_CMPCHAIN_START 
#define ASSERT_CURPAD_LEGAL(label) 
#define GvIO(gv) ( (gv) && ( SvTYPE((const SV*)(gv)) == SVt_PVGV || SvTYPE((const SV*)(gv)) == SVt_PVLV ) && GvGP(gv) ? GvIOp(gv) : NULL )
#define _SYS_STDIO_H_ 
#define DST_MET 4
#define PERL_ARGS_ASSERT_IS_C9STRICT_UTF8_STRING 
#define DECLARATION_FOR_LC_NUMERIC_MANIPULATION void (*_restore_LC_NUMERIC_function)(pTHX) = NULL
#define HeNEXT(he) (he)->hent_next
#define EBADMACHO 88
#define regdupe_internal(a,b) Perl_regdupe_internal(aTHX_ a,b)
#define FPC_DE 0x0002
#define PL_isarev (vTHX->Iisarev)
#define SRCHFS_SKIPINAPPROPRIATE 0x00000080
#define FPC_DM FPC_DE
#define NV_NAN_QS_QUIET ((NV_NAN_QS_BYTE(PL_nan.u8) & NV_NAN_QS_BIT) == NV_NAN_QS_BIT)
#define SIGSTOP 17
#define USER_PROP_MUTEX_LOCK MUTEX_LOCK(&PL_user_prop_mutex)
#define __TVOS_13_2 130200
#define __TVOS_13_3 130300
#define IPV6_FW_ZERO 33
#define NGX_LISTEN_BACKLOG -1
#define SAVESPTR(s) save_sptr((SV**)&(s))
#define PCRE2_JIT_PARTIAL_HARD 0x00000004u
#define SCNuFAST16 SCNu16
#define CLOCK_MONOTONIC _CLOCK_MONOTONIC
#define __STDIO_H_ 
#define MACH_MSGH_BITS_RAISEIMP 0x20000000U
#define OS_EXPORT extern __attribute__((__visibility__("default")))
#define __API_DEPRECATED_REP_GET_MACRO(...) 
#define case_193_SBOX32(hash,state,key) 
#define PERLSI_OVERLOAD 5
#define PCRE2_ERROR_INTERNAL_BAD_CODE_IN_SKIP 190
#define PadnameLEN(pn) (pn)->xpadn_len
#define TAINT_ENV() if (UNLIKELY(PL_tainting)) { taint_env(); }
#define IP_MAX_SOCK_MUTE_FILTER 128
#define isIDCONT_L1(c) isWORDCHAR_L1(c)
#define REENTRANT_PROTO_S_CSBI 56
#define IPPROTO_MHRP 48
#define _MODE_T 
#define SLIST_INIT(head) do { SLIST_FIRST((head)) = NULL; } while (0)
#define require_pv(a) Perl_require_pv(aTHX_ a)
#define sv_setpvf_nocontext Perl_sv_setpvf_nocontext
#define OA_BASEOP (0 << OCSHIFT)
#define VFS_CTL_SADDR 0x00010007
#define isIDCONT_LC(c) isWORDCHAR_LC(c)
#define sv_newref(a) Perl_sv_newref(aTHX_ a)
#define PERL_MAGIC_taint 't'
#define PerlLIO_setmode(fd,mode) setmode((fd), (mode))
#define PERL_ARGS_ASSERT_BYTES_FROM_UTF8_LOC assert(s); assert(lenp); assert(is_utf8p)
#define PL_maxsysfd (vTHX->Imaxsysfd)
#define PL_minus_E (vTHX->Iminus_E)
#define PL_minus_F (vTHX->Iminus_F)
#define PERL_ARGS_ASSERT_NEWGVGEN_FLAGS assert(pack)
#define PERL_ARGS_ASSERT_ISINFNAN 
#define _MACH_MACHINE_THREAD_STATE_H_ 
#define PerlIO_tell(a) Perl_PerlIO_tell(aTHX_ a)
#define PERL_ARGS_ASSERT_SV_2PVBYTE_FLAGS assert(sv)
#define SvGMAGICAL_off(sv) (SvFLAGS(sv) &= ~SVs_GMG)
#define SBOX32_SKIP_MASK 0x3
#define MCAST_JOIN_GROUP 80
#define CPU_SUBTYPE_I860_860 ((cpu_subtype_t) 1)
#define _generic_toFOLD_LC(c,function,cast) ((UNLIKELY((c) == MICRO_SIGN) && IN_UTF8_CTYPE_LOCALE) ? GREEK_SMALL_LETTER_MU : (__ASSERT_(! IN_UTF8_CTYPE_LOCALE || (c) != LATIN_SMALL_LETTER_SHARP_S) _generic_toLOWER_LC(c, function, cast)))
#define PL_minus_c (vTHX->Iminus_c)
#define MCL_CURRENT 0x0001
#define PERL_ARGS_ASSERT_PAD_PUSH assert(padlist)
#define PCRE2_SUBSTITUTE_OVERFLOW_LENGTH 0x00001000u
#define PL_regex_pad (vTHX->Iregex_pad)
#define MACH_MSG_PRIORITY_UNSPECIFIED (mach_msg_priority_t) 0
#define PL_threadhook (vTHX->Ithreadhook)
#define HAS_KILL 
#define doing_taint Perl_doing_taint
#define ngx_close_dir(d) closedir((d)->dir)
#define MACH_RCV_TIMEOUT 0x00000100
#define sv_setnv(a,b) Perl_sv_setnv(aTHX_ a,b)
#define UIOCCMD(n) _IO('u', n)
#define PAD_COMPNAME_FLAGS_isOUR(po) SvPAD_OUR(PAD_COMPNAME_SV(po))
#define _PWD_H_ 
#define NGX_CONF_2MORE 0x00001000
#define newHVREF(a) Perl_newHVREF(aTHX_ a)
#define _POSIX2_PBS_LOCATE (-1)
#define OA_PMOP (5 << OCSHIFT)
#define OpMAYBESIB_set(o,sib,parent) ((o)->op_sibparent = ((o)->op_moresib = cBOOL(sib)) ? (sib) : (parent))
#define PERL_ARGS_ASSERT_CK_SPLIT assert(o)
#define KERN_ABORTED 14
#define PERL_CALLCONV_NO_RET PERL_CALLCONV
#define PERL_ARGS_ASSERT_NEWHVREF assert(o)
#define GvMULTI_on(gv) (GvFLAGS(gv) |= GVf_MULTI)
#define VM_LEDGER_FLAGS (VM_LEDGER_FLAG_NO_FOOTPRINT)
#define TASK_FLAVOR_CONTROL 0
#define PERL_ARGS_ASSERT_CAST_IV 
#define IPPORT_HILASTAUTO 65535
#define signbit(x) ( sizeof(x) == sizeof(float) ? __inline_signbitf((float)(x)) : sizeof(x) == sizeof(double) ? __inline_signbitd((double)(x)) : __inline_signbitl((long double)(x)))
#define PL_in_utf8_turkic_locale (vTHX->Iin_utf8_turkic_locale)
#define PERL_ARGS_ASSERT_MAGIC_GETSIG assert(sv); assert(mg)
#define OPpSORT_DESCEND 0x10
#define IPV6_3542DSTOPTS 50
#define _to_utf8_title_flags(a,b,c,d,e) Perl__to_utf8_title_flags(aTHX_ a,b,c,d,e)
#define I_UNISTD 
#define SvTAINTED_off(sv) STMT_START{ if(UNLIKELY(TAINTING_get)){sv_untaint(sv);} }STMT_END
#define AvARRAY(av) ((av)->sv_u.svu_array)
#define FPC_IE 0x0001
#define NGX_DEFAULT_POOL_SIZE (16 * 1024)
#define PL_statusvalue_vms (vTHX->Istatusvalue_vms)
#define VM_PAGE_QUERY_PAGE_CS_NX 0x400
#define OPpCONST_STRICT 0x08
#define RX_PRELEN(rx_sv) (RX_WRAPLEN(rx_sv) - ReANY(rx_sv)->pre_prefix - 1)
#define MACH_PORT_QLIMIT_DEFAULT MACH_PORT_QLIMIT_BASIC
#define sv_setpv(a,b) Perl_sv_setpv(aTHX_ a,b)
#define OPf_WANT 3
#define S_ISTXT S_ISVTX
#define F_GETCODEDIR 72
#define __SIGN 0x8000
#define NGX_RESOLVE_MX 15
#define PERL_ARGS_ASSERT_UVCHR_TO_UTF8 
#define PL_profiledata (vTHX->Iprofiledata)
#define utf8_to_uvchr_buf_helper(a,b,c) Perl_utf8_to_uvchr_buf_helper(aTHX_ a,b,c)
#define false 0
#define IPV6_JOIN_GROUP 12
#define NGX_HTTP_SRV_CONF 0x04000000
#define _SYS_UCRED_H_ 
#define VM_MEMORY_MALLOC_LARGE_REUSED 9
#define PerlMem_free(buf) free((buf))
#define ngx_http_conf_upstream_srv_conf(uscf,module) uscf->srv_conf[module.ctx_index]
#define LEAVE pop_scope()
#define HOST_EXTMOD_INFO64 5
#define __GNUC_VA_LIST 
#define AU_DEFAUDITSID 0
#define _GCC_MAX_ALIGN_T 
#define PERLSI_MULTICALL 10
#define PerlEnv_get_childdir() get_childdir()
#define CvROOT(sv) ((XPVCV*)MUTABLE_PTR(SvANY(sv)))->xcv_root_u.xcv_root
#define sv_does_pvn(a,b,c,d) Perl_sv_does_pvn(aTHX_ a,b,c,d)
#define PERL_ARGS_ASSERT_SV_TAINTED assert(sv)
#define PERL_ARGS_ASSERT_IS_UTF8_STRING 
#define PMf_ONCE (1U<<(PMf_BASE_SHIFT+5))
#define PL_memory_debug_header (vTHX->Imemory_debug_header)
#define __OSX_EXTENSION_UNAVAILABLE(_msg) 
#define ngx_log_debug0(level,log,err,fmt) 
#define KEV_DL_SIFGENERIC 6
#define _NGX_ALLOC_H_INCLUDED_ 
#define assert(e) ((void)0)
#define PERL_ARGS_ASSERT_DO_JOIN assert(sv); assert(delim); assert(mark); assert(sp)
#define warn Perl_warn_nocontext
#define PERL_ARGS_ASSERT_REALLOC 
#define NEXT_LINE_CHAR NEXT_LINE_NATIVE
#define GV_ADDMG 0x400
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_5(x) 
#define UNICODE_GREEK_SMALL_LETTER_FINAL_SIGMA 0x03C2
#define _POSIX2_LOCALEDEF 200112L
#define SIOCGIFVLAN _IOWR('i', 127, struct ifreq)
#define pcre2_real_convert_context PCRE2_SUFFIX(pcre2_real_convert_context_)
#define SM_LARGE_PAGE 8
#define IOf_UNTAINT 16
#define OS_ALIGNED(n) __attribute__((__aligned__((n))))
#define HAS_ACCESS 
#define Perl_sqrt sqrt
#define PL_initav (vTHX->Iinitav)
#define LC_COLLATE_MASK (1 << 0)
#define MACH_VOUCHER_ATTR_NOOP ((mach_voucher_attr_recipe_command_t)0)
#define WMESGLEN 7
#define case_235_SBOX32(hash,state,key) 
#define SVt_MASK 0x1f
#define IPPROTO_RAW 255
#define sv_setsv(dsv,ssv) sv_setsv_flags(dsv, ssv, SV_GMAGIC|SV_DO_COW_SVSETSV)
#define __k8__ 1
#define IPCTL_KEEPFAITH 15
#define LF_NATIVE 0x0A
#define HASATTRIBUTE_FORMAT 
#define SVpad_STATE PADNAMEt_STATE
#define IPCTL_RTMINEXPIRE 6
#define GvFILE(gv) (GvFILE_HEK(gv) ? GvFILEx(gv) : NULL)
#define VOL_CAPABILITIES_RESERVED1 2
#define IP_RECVPKTINFO IP_PKTINFO
#define SRCHFS_NEGATEPARAMS 0x80000000
#define HW_L1DCACHESIZE 18
#define pcre2_set_character_tables PCRE2_SUFFIX(pcre2_set_character_tables_)
#define case_167_SBOX32(hash,state,key) 
#define isSPACE_A(c) _generic_isCC_A(c, _CC_SPACE)
#define PL_HasMultiCharFold (vTHX->IHasMultiCharFold)
#define STATUS_EXIT_SET(n) STATUS_UNIX_SET(n)
#define HAS_TM_TM_GMTOFF 
#define CxLABEL_len_flags(c,len,flags) (0 + CopLABEL_len_flags((c)->blk_oldcop, len, flags))
#define NOTE_FFOR 0x80000000
#define EXC_I386_INTOFLT 4
#define gv_fetchmeth_sv(a,b,c,d) Perl_gv_fetchmeth_sv(aTHX_ a,b,c,d)
#define EXEC_PAT_MOD 'e'
#define UTF8_GOT_SURROGATE UTF8_DISALLOW_SURROGATE
#define WITH_LC_NUMERIC_SET_TO_NEEDED_IN(in_lc_numeric,block) STMT_START { DECLARATION_FOR_LC_NUMERIC_MANIPULATION; STORE_LC_NUMERIC_SET_TO_NEEDED_IN(in_lc_numeric); block; RESTORE_LC_NUMERIC(); } STMT_END;
#define CPU_SUBTYPE_UVAXI ((cpu_subtype_t) 5)
#define GV_NOUNIVERSAL 0x2000
#define PERL_ARGS_ASSERT_REFCOUNTED_HE_FREE 
#define pcre2_substring_length_bynumber PCRE2_SUFFIX(pcre2_substring_length_bynumber_)
#define case_151_SBOX32(hash,state,key) 
#define sv_setuv(a,b) Perl_sv_setuv(aTHX_ a,b)
#define SCHED_YIELD sched_yield()
#define IOPOL_MATERIALIZE_DATALESS_FILES_OFF 1
#define SET_MARK_OFFSET NOOP
#define GLOB_TILDE 0x0800
#define DOUBLE_IS_IEEE_754_128_BIT_LITTLE_ENDIAN 5
#define __INT_FAST64_WIDTH__ 64
#define SvFAKE_off(sv) (SvFLAGS(sv) &= ~SVf_FAKE)
#define grok_numeric_radix(a,b) Perl_grok_numeric_radix(aTHX_ a,b)
#define FPC_RC_RD 0x0400
#define FPC_OE 0x0008
#define CvOUTSIDE(sv) ((XPVCV*)MUTABLE_PTR(SvANY(sv)))->xcv_outside
#define FPC_OM FPC_OE
#define REENTRANT_PROTO_B_BW 3
#define SAVECOMPPAD() save_pushptr(MUTABLE_SV(PL_comppad), SAVEt_COMPPAD)
#define IPPROTO_RDP 27
#define GDBM_NDBM_H_USES_PROTOTYPES 
#define IoTYPE_RDONLY '<'
#define SAVE_DEFSV SAVESPTR(GvSV(PL_defgv))
#define isDIGIT_LC(c) _generic_LC(c, _CC_DIGIT, isdigit)
#define CPU_THREADTYPE_INTEL_HTT ((cpu_threadtype_t) 1)
#define MALLOC_INTROSPECT_FN_PTR(fn) fn
#define KEV_INET_SIFDSTADDR 4
#define CTL_KERN_NAMES { { 0, 0 }, { "ostype", CTLTYPE_STRING }, { "osrelease", CTLTYPE_STRING }, { "osrevision", CTLTYPE_INT }, { "version", CTLTYPE_STRING }, { "maxvnodes", CTLTYPE_INT }, { "maxproc", CTLTYPE_INT }, { "maxfiles", CTLTYPE_INT }, { "argmax", CTLTYPE_INT }, { "securelevel", CTLTYPE_INT }, { "hostname", CTLTYPE_STRING }, { "hostid", CTLTYPE_INT }, { "clockrate", CTLTYPE_STRUCT }, { "vnode", CTLTYPE_STRUCT }, { "proc", CTLTYPE_STRUCT }, { "file", CTLTYPE_STRUCT }, { "profiling", CTLTYPE_NODE }, { "posix1version", CTLTYPE_INT }, { "ngroups", CTLTYPE_INT }, { "job_control", CTLTYPE_INT }, { "saved_ids", CTLTYPE_INT }, { "boottime", CTLTYPE_STRUCT }, { "nisdomainname", CTLTYPE_STRING }, { "maxpartitions", CTLTYPE_INT }, { "kdebug", CTLTYPE_INT }, { "update", CTLTYPE_INT }, { "osreldate", CTLTYPE_INT }, { "ntp_pll", CTLTYPE_NODE }, { "bootfile", CTLTYPE_STRING }, { "maxfilesperproc", CTLTYPE_INT }, { "maxprocperuid", CTLTYPE_INT }, { "dumpdev", CTLTYPE_STRUCT }, { "ipc", CTLTYPE_NODE }, { "dummy", CTLTYPE_INT }, { "dummy", CTLTYPE_INT }, { "usrstack", CTLTYPE_INT }, { "logsigexit", CTLTYPE_INT }, { "symfile",CTLTYPE_STRING }, { "procargs",CTLTYPE_STRUCT }, { "dummy", CTLTYPE_INT }, { "netboot", CTLTYPE_INT }, { "dummy", CTLTYPE_INT }, { "sysv", CTLTYPE_NODE }, { "dummy", CTLTYPE_INT }, { "dummy", CTLTYPE_INT }, { "exec", CTLTYPE_NODE }, { "aiomax", CTLTYPE_INT }, { "aioprocmax", CTLTYPE_INT }, { "aiothreads", CTLTYPE_INT }, { "procargs2",CTLTYPE_STRUCT }, { "corefile",CTLTYPE_STRING }, { "coredump", CTLTYPE_INT }, { "sugid_coredump", CTLTYPE_INT }, { "delayterm", CTLTYPE_INT }, { "shreg_private", CTLTYPE_INT }, { "proc_low_pri_io", CTLTYPE_INT }, { "low_pri_window", CTLTYPE_INT }, { "low_pri_delay", CTLTYPE_INT }, { "posix", CTLTYPE_NODE }, { "usrstack64", CTLTYPE_QUAD }, { "nx", CTLTYPE_INT }, { "tfp", CTLTYPE_NODE }, { "procname", CTLTYPE_STRING }, { "threadsigaltstack", CTLTYPE_INT }, { "speculative_reads_disabled", CTLTYPE_INT }, { "osversion", CTLTYPE_STRING }, { "safeboot", CTLTYPE_INT }, { "dummy", CTLTYPE_INT }, { "rage_vnode", CTLTYPE_INT }, { "tty", CTLTYPE_NODE }, { "check_openevt", CTLTYPE_INT }, { "thread_name", CTLTYPE_STRING } }
#define NGX_HTTP_PUT 0x00000010
#define MAP_NOEXTEND 0x0100
#define FPC_PC 0x0300
#define IN_CLASSD_NSHIFT 28
#define cxinc() Perl_cxinc(aTHX)
#define ATTR_CMN_UUID 0x00800000
#define USER_POSIX2_FORT_DEV 14
#define EADDRNOTAVAIL 49
#define pcre2_substring_length_byname PCRE2_SUFFIX(pcre2_substring_length_byname_)
#define USE_LOCALE_TIME 
#define PCRE2_CONFIG_UNICODE 9
#define PL_op_mask (vTHX->Iop_mask)
#define VM_MEMORY_ROSETTA_THREAD_CONTEXT 231
#define PCRE2_CONFIG_STACKRECURSE 8
#define __FLT_DIG__ 6
#define NGX_HTTP_UPSTREAM_FT_HTTP_500 0x00000010
#define NGX_HTTP_UPSTREAM_FT_HTTP_502 0x00000020
#define NGX_HTTP_UPSTREAM_FT_HTTP_503 0x00000040
#define NGX_HTTP_UPSTREAM_FT_HTTP_504 0x00000080
#define NGX_HTTP_CLIENT_ERROR 10
#define PL_utf8_tolower (vTHX->Iutf8_tolower)
#define cx_pushsub(a,b,c,d) Perl_cx_pushsub(aTHX_ a,b,c,d)
#define SvTAINTED_on(sv) STMT_START{ if(UNLIKELY(TAINTING_get)){sv_taint(sv);} }STMT_END
#define PL_exitlistlen (vTHX->Iexitlistlen)
#define alloccopstash(a) Perl_alloccopstash(aTHX_ a)
#define _SYS_EVENT_H_ 
#define cLOOPo cLOOPx(o)
#define case_15_SBOX32(hash,state,key) _SBOX32_CASE(15,hash,state,key)
#define PERL_ARGS_ASSERT_REPORT_UNINIT 
#define __API_DEPRECATED_BEGIN(...) 
#define EBADF 9
#define OCTAL_VALUE(c) (__ASSERT_(isOCTAL(c)) (7 & (c)))
#define _SC_SS_REPL_MAX 126
#define _OS__OSBYTEORDER_H 
#define GvIOn(gv) (GvIO(gv) ? GvIOp(gv) : GvIOp(gv_IOadd(gv)))
#define GvIOp(gv) (GvGP(gv)->gp_io)
#define SvTRUE(a) Perl_SvTRUE(aTHX_ a)
#define FPC_RC 0x0c00
#define PL_mbrlen_ps (vTHX->Imbrlen_ps)
#define PLOSS 6
#define VM_PURGABLE_DEBUG_EMPTY (0x1 << VM_PURGABLE_DEBUG_SHIFT)
#define OA_SVOP (6 << OCSHIFT)
#define newMETHOP_named(a,b,c) Perl_newMETHOP_named(aTHX_ a,b,c)
#define _RUNETYPE_H_ 
#define TIOCFLUSH _IOW('t', 16, int)
#define SvIsUV(sv) (SvFLAGS(sv) & SVf_IVisUV)
#define isVERTWS_utf8(p,e) isVERTWS_utf8_safe(p, e)
#define HAS_FCHOWN 
#define TARGn(n,do_taint) STMT_START { NV TARGn_nv = n; if (LIKELY( ((SvFLAGS(TARG) & (SVTYPEMASK|SVf_THINKFIRST)) == SVt_NV) & (do_taint ? !TAINT_get : 1))) { assert(!(SvFLAGS(TARG) & (SVf_OOK|SVf_UTF8|(SVf_OK & ~(SVf_NOK|SVp_NOK))))); SvFLAGS(TARG) |= (SVf_NOK|SVp_NOK); SvNV_set(TARG, TARGn_nv); } else sv_setnv_mg(targ, TARGn_nv); } STMT_END
#define PERL_ARGS_ASSERT_CX_POPBLOCK assert(cx)
#define PERL_ARGS_ASSERT_MY_ATTRS assert(o)
#define VM_MEMORY_MALLOC_SMALL 2
#define TASK_AFFINITY_TAG_INFO_COUNT (sizeof(task_affinity_tag_info_data_t) / sizeof(natural_t))
#define S_IXUSR 0000100
#define GvNAME(gv) GvNAME_get(gv)
#define PCRE2_ERROR_SUBPATTERN_NUMBER_TOO_BIG 161
#define VM_MEMORY_JAVA 44
#define KERN_EXEC 45
#define SBOX32_STATE_BITS (SBOX32_STATE_BYTES * 8)
#define RLIMIT_FSIZE 1
#define perl_get_av(a,b) get_av(a,b)
#define HASATTRIBUTE_PURE 
#define PL_subname (vTHX->Isubname)
#define VM_MEMORY_COREGRAPHICS_XALLOC 58
#define S_IWOTH 0000002
#define __DTF_SKIPREAD 0x0010
#define SRCHFS_START 0x00000001
#define GETENV_LOCK ENV_READ_LOCK
#define IPV6CTL_MAXIFDEFROUTERS 48
#define PerlProc_getegid() getegid()
#define case_10_SBOX32(hash,state,key) _SBOX32_CASE(10,hash,state,key)
#define ATTR_CMN_VALIDMASK 0xFFFFFFFF
#define NGX_HTTP_IMS_OFF 0
#define HOST_SECURITY_PORT 0
#define _XLOCALE__STRING_H_ 
#define GETSPNAM_R_PROTO 0
#define PERL_ARGS_ASSERT_CAST_UV 
#define SAVEt_STACK_POS 20
#define UNICODE_ALLOW_SUPER 0
#define scan_bin(a,b,c) Perl_scan_bin(aTHX_ a,b,c)
#define NOTE_FUNLOCK 0x00000100
#define PERL_ARGS_ASSERT_HV_FETCH assert(key)
#define case_7_SBOX32(hash,state,key) _SBOX32_CASE(7,hash,state,key)
#define MACH_RCV_SYNC_WAIT 0x00004000
#define case_209_SBOX32(hash,state,key) 
#define is_XDIGIT_high(s) ( ( 0xEF == ((const U8*)s)[0] ) ? ( ( 0xBC == ((const U8*)s)[1] ) ? ( ( inRANGE_helper_(U8, ((const U8*)s)[2], 0x90, 0x99) || inRANGE_helper_(U8, ((const U8*)s)[2], 0xA1, 0xA6) ) ? 3 : 0 ) : ( ( 0xBD == ((const U8*)s)[1] ) && ( inRANGE_helper_(U8, ((const U8*)s)[2], 0x81, 0x86) ) ) ? 3 : 0 ): 0 )
#define ENOTRECOVERABLE 104
#define UINT_FAST8_MAX UINT8_MAX
#define PERL_UNUSED_DECL __attribute__unused__
#define mro_method_changed_in(a) Perl_mro_method_changed_in(aTHX_ a)
#define UNICODE_WARN_NONCHAR 0x0002
#define PERLIO_FUNCS_CAST(funcs) (PerlIO_funcs*)(funcs)
#define FIRST_EXCEPTION 1
#define case_252_SBOX32(hash,state,key) 
#define PROCESSOR_BASIC_INFO_COUNT ((mach_msg_type_number_t) (sizeof(processor_basic_info_data_t)/sizeof(natural_t)))
#define DEBUG_U_TEST_ UNLIKELY(PL_debug & DEBUG_U_FLAG)
#define ngx_tm_zone tm_zone
#define SS_BUFFEROVF 0
#define AUDIT_SEQ 0x0010
#define UTF_IS_CONTINUATION_MASK ((U8) (0xFF << UTF_ACCUMULATION_SHIFT))
#define PERL_ARGS_ASSERT_DO_OPEN assert(gv); assert(name)
#define PERL_ARGS_ASSERT_TO_UNI_LOWER assert(p); assert(lenp)
#define HAS_REGCOMP 
#define EIO 5
#define SIOCGIFNETMASK _IOWR('i', 37, struct ifreq)
#define CLOCK_PROCESS_CPUTIME_ID _CLOCK_PROCESS_CPUTIME_ID
#define SAWAMPERSAND_LEFT 1
#define PL_LIO (vTHX->ILIO)
#define FLT_MAX_EXP __FLT_MAX_EXP__
#define PERL_ARGS_ASSERT_CANDO assert(statbufp)
#define ENETUNREACH 51
#define EXDEV 18
#define _SC_PHYS_PAGES 200
#define BSD4_3 1
#define BSD4_4 1
#define PERL_ARGS_ASSERT_VNEWSVPVF assert(pat)
#define DEBUG_y_TEST (0)
#define IPV6PORT_ANONMAX 65535
#define PL_formtarget (vTHX->Iformtarget)
#define MATH_ERREXCEPT 2
#define newSVpv_share(a,b) Perl_newSVpv_share(aTHX_ a,b)
#define UNICODE_ALLOW_ANY 0
#define PCRE2_ERROR_BADDATA (-29)
#define save_vptr(a) Perl_save_vptr(aTHX_ a)
#define isPRINT_LC_utf8(p,e) isPRINT_LC_utf8_safe(p, e)
#define PERL_ARGS_ASSERT_UTF8_DISTANCE assert(a); assert(b)
#define AU_IPv4 4
#define AU_IPv6 16
#define _CC_UPPER 4
#define CvWEAKOUTSIDE(cv) (CvFLAGS(cv) & CVf_WEAKOUTSIDE)
#define isCNTRL_LC_utf8(p,e) isCNTRL_LC_utf8_safe(p, e)
#define WARN_PROTOTYPE 35
#define UTF8_GOT_ABOVE_31_BIT UTF8_GOT_PERL_EXTENDED
#define PERL_ARGS_ASSERT_NEWCONSTSUB 
#define CPUFAMILY_INTEL_NEHALEM 0x6b5a4cd2
#define WARN_EXPERIMENTAL__DECLARED_REFS 66
#define HAS_USELOCALE 
#define UNLIKELY(cond) EXPECT(cBOOL(cond),FALSE)
#define VFS_CTL_DISC 0x00010008
#define FPS_SF 0x0040
#define CopLINE_dec(c) (--CopLINE(c))
#define uvoffuni_to_utf8_flags(d,uv,flags) uvoffuni_to_utf8_flags_msgs(d, uv, flags, 0)
#define HAS_SETGRENT 
#define VM_PROT_NONE ((vm_prot_t) 0x00)
#define HAS_SIGINFO_SI_PID 
#define _POSIX_TRACE (-1)
#define HINT_INTEGER 0x00000001
#define FF_MORE 15
#define KERNEL_SECURITY_TOKEN_VALUE { {0, 1} }
#define VM_PAGE_INFO_BASIC_COUNT ((mach_msg_type_number_t) (sizeof(vm_page_info_basic_data_t)/sizeof(int)))
#define LOCALE_INIT_LC_NUMERIC_ NOOP
#define __WINT_TYPE__ int
#define OPpSLICE 0x40
#define __SIZEOF_SHORT__ 2
#define OPpARG3_MASK 0x07
#define CxTRY(c) (((c)->cx_type & (CXTYPEMASK|CXp_TRY)) == (CXt_EVAL|CXp_TRY))
#define UTF8_MAXBYTES_CASE MAX(UTF8_MAXBYTES, UTF8_MAX_FOLD_CHAR_EXPAND * OFFUNISKIP(0x10FFFF))
#define re_intuit_start(a,b,c,d,e,f,g) Perl_re_intuit_start(aTHX_ a,b,c,d,e,f,g)
#define NGX_HAVE_SENDFILE 1
#define KERN_EXCEPTION_PROTECTED 32
#define VM_BEHAVIOR_DONTNEED ((vm_behavior_t) 5)
#define FPC_ZE 0x0004
#define NGX_CONF_FILE_DONE 3
#define PERL_ARGS_ASSERT_NEWCONSTSUB_FLAGS 
#define ARCHLIB_EXP "/usr/local/Cellar/perl/5.34.0/lib/perl5/5.34.0/darwin-thread-multi-2level"
#define AF_HYLINK 15
#define FPC_ZM FPC_ZE
#define PERL_SYS_TERM_BODY() HINTS_REFCNT_TERM; KEYWORD_PLUGIN_MUTEX_TERM; OP_CHECK_MUTEX_TERM; OP_REFCNT_TERM; PERLIO_TERM; MALLOC_TERM; LOCALE_TERM; USER_PROP_MUTEX_TERM; ENV_TERM;
#define toFOLD_LC(c) _generic_toFOLD_LC((c), tolower, U8)
#define perl_get_hv(a,b) get_hv(a,b)
#define NGX_CONF_TAKE1 0x00000002
#define NGX_CONF_TAKE3 0x00000008
#define NGX_CONF_TAKE4 0x00000010
#define NGX_CONF_TAKE5 0x00000020
#define NGX_CONF_TAKE6 0x00000040
#define NGX_CONF_TAKE7 0x00000080
#define CLONEf_KEEP_PTR_TABLE 2
#define HOST_SEMAPHORE_TRAPS 7
#define MINCORE_REFERENCED_OTHER 0x8
#define case_98_SBOX32(hash,state,key) 
#define pcre2_get_ovector_count PCRE2_SUFFIX(pcre2_get_ovector_count_)
#define __FLT64_MAX__ 1.79769313486231570814527423731704357e+308F64
#define IPPROTO_GMTP 100
#define GvENAME_HEK(gv) GvNAME_HEK(GvEGV(gv) ? GvEGV(gv) : gv)
#define PERL_ARGS_ASSERT_SV_GETS assert(sv); assert(fp)
#define isPSXSPC_uni(c) isPSXSPC_uvchr(c)
#define AI_MASK (AI_PASSIVE | AI_CANONNAME | AI_NUMERICHOST | AI_NUMERICSERV | AI_ADDRCONFIG)
#define ENOSPC 28
#define PL_secondgv (vTHX->Isecondgv)
#define what_MULTI_CHAR_FOLD_latin1_safe(s,e) ( ((e)-(s) > 2) ? ( ( ( ((const U8*)s)[0] & 0xDF ) == 'F' ) ? ( ( ( ((const U8*)s)[1] & 0xDF ) == 'F' ) ? ( ( ( ((const U8*)s)[2] & 0xDF ) == 'I' ) ? 0xFB03 : ( ( ((const U8*)s)[2] & 0xDF ) == 'L' ) ? 0xFB04 : 0xFB00 ) : ( ( ((const U8*)s)[1] & 0xDF ) == 'I' ) ? 0xFB01 : ( ( ((const U8*)s)[1] & 0xDF ) == 'L' ) ? 0xFB02 : 0 ) : ( ( ((const U8*)s)[0] & 0xDF ) == 'S' ) ? ( ( ( ((const U8*)s)[1] & 0xDF ) == 'S' ) ? 0xDF : ( ( ((const U8*)s)[1] & 0xDF ) == 'T' ) ? 0xFB05 : 0 ) : 0 ) : ((e)-(s) > 1) ? ( ( ( ((const U8*)s)[0] & 0xDF ) == 'F' ) ? ( ( ( ((const U8*)s)[1] & 0xDF ) == 'F' ) ? 0xFB00 : ( ( ((const U8*)s)[1] & 0xDF ) == 'I' ) ? 0xFB01 : ( ( ((const U8*)s)[1] & 0xDF ) == 'L' ) ? 0xFB02 : 0 ) : ( ( ((const U8*)s)[0] & 0xDF ) == 'S' ) ? ( ( ( ((const U8*)s)[1] & 0xDF ) == 'S' ) ? 0xDF : ( ( ((const U8*)s)[1] & 0xDF ) == 'T' ) ? 0xFB05 : 0 ) : 0 ) : 0 )
#define _MACH_DYLIB_INFO_H_ 
#define IPCTL_ACCEPTSOURCEROUTE 13
#define PERL_ARGS_ASSERT_SET_CONTEXT assert(t)
#define TWO_BYTE_UTF8_TO_NATIVE(HI,LO) (__ASSERT_(FITS_IN_8_BITS(HI)) __ASSERT_(FITS_IN_8_BITS(LO)) __ASSERT_(PL_utf8skip[HI] == 2) __ASSERT_(UTF8_IS_CONTINUATION(LO)) UNI_TO_NATIVE(UTF8_ACCUMULATE((NATIVE_UTF8_TO_I8(HI) & UTF_START_MASK(2)), (LO))))
#define ENOEXEC 8
#define PERL_ARGS_ASSERT_PTR_TABLE_CLEAR 
#define pcre2_serialize_free PCRE2_SUFFIX(pcre2_serialize_free_)
#define HINT_LOCALE_PARTIAL 0x00000010
#define TASK_VM_INFO_REV4_COUNT ((mach_msg_type_number_t) (TASK_VM_INFO_REV5_COUNT - 1))
#define EOF (-1)
#define ATTR_DIR_DATALENGTH 0x00000020
#define Pause pause
#define PL_scopestack_name (vTHX->Iscopestack_name)
#define BSD_SETPGRP(pid,pgrp) setpgid((pid), (pgrp))
#define _POSIX2_PBS_MESSAGE (-1)
#define RLIMIT_CPU_USAGE_MONITOR 0x2
#define cx_pushtry(a,b) Perl_cx_pushtry(aTHX_ a,b)
#define LEX_KEEP_PREVIOUS 0x00000002
#define Mode_t mode_t
#define FIOCLEX _IO('f', 1)
#define S_ISREG(m) (((m) & S_IFMT) == S_IFREG)
#define MACH_PORT_RIGHT_RECEIVE ((mach_port_right_t) 1)
#define newSVnv(a) Perl_newSVnv(aTHX_ a)
#define sv_report_used() Perl_sv_report_used(aTHX)
#define _CC_VERTSPACE 15
#define PERL_ARGS_ASSERT_CK_EACH assert(o)
#define MNT_AUTOMOUNTED 0x00400000
#define PF_RTIP pseudo_AF_RTIP
#define PERL_RW_MUTEX_INIT(mutex) STMT_START { MUTEX_INIT(&(mutex)->lock); COND_INIT(&(mutex)->wakeup); (mutex)->readers_count = 0; } STMT_END
#define SV_ONSTACK SA_ONSTACK
#define ngx_event_get_conf(conf_ctx,module) (*(ngx_get_conf(conf_ctx, ngx_events_module))) [module.ctx_index]
#define PCRE2_NOTEMPTY 0x00000004u
#define PERL_ARGS_ASSERT_ALLOCMY assert(name)
#define toUPPER_LATIN1_MOD(c) ((! FITS_IN_8_BITS(c)) ? (c) : PL_mod_latin1_uc[ (U8) (c) ])
#define VM_MEMORY_CM_XPC 92
#define PL_def_layerlist (vTHX->Idef_layerlist)
#define CR (u_char) '\r'
#define GETATARGET targ = (PL_op->op_flags & OPf_STACKED ? sp[-1] : PAD_SV(PL_op->op_targ))
#define rsignal(a,b) Perl_rsignal(aTHX_ a,b)
#define PERL_ARGS_ASSERT_CORE_PROTOTYPE assert(name)
#define NV_NAN_IS_SIGNALING(nvp) (NV_NAN_QS_TEST(nvp) == (NV_NAN_QS_QUIET ? 0 : NV_NAN_QS_BIT))
#define PTHREAD_INHERIT_SCHED 1
#define __LDBL_MAX_10_EXP__ 4932
#define PL_gensym (vTHX->Igensym)
#define PERL_SHORT_MAX ((short)SHRT_MAX)
#define HINT_NEW_BINARY 0x00004000
#define PERL_TSA__(x) 
#define _STRUCT_XMM_REG struct __darwin_xmm_reg
#define _CC_SPACE 10
#define _NGX_LOG_H_INCLUDED_ 
#define VOL_CAP_INT_EXTENDED_ATTR 0x00004000
#define ctos(x) (x)
#define IPCTL_INTRQDROPS 11
#define PERL_ARGS_ASSERT_NEWSVSV 
#define NGX_HTTP_LINGERING_ON 1
#define Perl_log log
#define NofAMmeth max_amg_code
#define NGX_HTTP_PARTIAL_CONTENT 206
#define ATTR_VOL_NAME 0x00002000
#define LATIN_SMALL_LETTER_Y_WITH_DIAERESIS LATIN_SMALL_LETTER_Y_WITH_DIAERESIS_NATIVE
#define NVSIZE 8
#define EDOM 33
#define case_158_SBOX32(hash,state,key) 
#define KERN_PROC_UID 5
#define IOPOL_SCOPE_THREAD 1
#define _PTHREAD_ATTR_T 
#define _SYS__SELECT_H_ 
#define isgreater(x,y) __builtin_isgreater((x),(y))
#define MAXARG (PL_op->op_private & OPpARG4_MASK)
#define HAS_LDBL_DIG 
#define NGX_CONF_MODULE 0x464E4F43
#define ENOSTR 99
#define hv_clear_placeholders(a) Perl_hv_clear_placeholders(aTHX_ a)
#define KERN_KDWRITEMAP_V3 27
#define REENTRANT_PROTO_B_SB 8
#define op_refcnt_unlock() Perl_op_refcnt_unlock(aTHX)
#define I_SYS_FILE 
#define PCRE2_ERROR_PATTERN_STRING_TOO_LONG 188
#define _CC_mask(classnum) (1U << (classnum))
#define GvINTRO_off(gv) (GvFLAGS(gv) &= ~GVf_INTRO)
#define P_CHECKOPENEVT 0x00080000
#define _SC_MQ_PRIO_MAX 75
#define x86_THREAD_STATE32 1
#define I_NETINET_TCP 
#define CPUFAMILY_ARM_CYCLONE 0x37a09642
#define INADDR_NONE 0xffffffff
#define IP_OLD_FW_ZERO 53
#define CMSG_SPACE(l) (__DARWIN_ALIGN32(sizeof(struct cmsghdr)) + __DARWIN_ALIGN32(l))
#define __API_AVAILABLE(...) 
#define HAS_STRFTIME 
#define CTL_VFS_NAMES { { "vfsconf", CTLTYPE_STRUCT } }
#define sv_catxmlpvs(dsv,str,utf8) Perl_sv_catxmlpvn(aTHX_ dsv, STR_WITH_LEN(str), utf8)
#define OP_GIMME_REVERSE(flags) ((flags) & G_WANT)
#define PL_DBline (vTHX->IDBline)
#define MAP_ANON 0x1000
#define POPMARK Perl_POPMARK(aTHX)
#define caller_cx(a,b) Perl_caller_cx(aTHX_ a,b)
#define PerlProc_popen(c,m) my_popen((c), (m))
#define FREAD 0x00000001
#define HvENAME(hv) HvENAME_get(hv)
#define ESRCH 3
#define newSVrv(a,b) Perl_newSVrv(aTHX_ a,b)
#define IPPROTO_DSTOPTS 60
#define ngx_align(d,a) (((d) + (a - 1)) & ~(a - 1))
#define SLIST_FOREACH(var,head,field) for ((var) = SLIST_FIRST((head)); (var); (var) = SLIST_NEXT((var), field))
#define EF_IS_SPARSE 0x00000010
#define ptr_table_free(a) Perl_ptr_table_free(aTHX_ a)
#define UTF8_MAXBYTES 13
#define EHOSTDOWN 64
#define CPU_SUBTYPE_INTEL_MODEL(x) ((x) >> 4)
#define SvPOK_nog(sv) ((SvFLAGS(sv) & (SVf_POK|SVs_GMG)) == SVf_POK)
#define SIOCIFDESTROY _IOW('i', 121, struct ifreq)
#define HAS_WRITEV 
#define memNE(s1,s2,l) (! memEQ(s1,s2,l))
#define VOL volatile
#define _XLOCALE__WCHAR_H_ 
#define NGX_HAVE_LOCALTIME_R 1
#define SEEK_END 2
#define ATTR_FILE_SETMASK 0x00000020
#define newSVsv(sv) newSVsv_flags((sv), SV_GMAGIC|SV_NOSTEAL)
#define PERL_ARGS_ASSERT_LEX_READ_TO assert(ptr)
#define sv_inc(a) Perl_sv_inc(aTHX_ a)
#define save_scalar(a) Perl_save_scalar(aTHX_ a)
#define EXC_MASK_BAD_ACCESS (1 << EXC_BAD_ACCESS)
#define SvTIED_mg(sv,how) (SvRMAGICAL(sv) ? mg_find((sv),(how)) : NULL)
#define _PW_KEYBYNAME '1'
#define NGX_SBIN_PATH "sbin/nginx"
#define DOUBLE_IS_IEEE_754_32_BIT_LITTLE_ENDIAN 1
#define PL_stdingv (vTHX->Istdingv)
#define ENFILE 23
#define dEXTCONST const
#define STATUS_UNIX_EXIT_SET(n) STATUS_UNIX_SET(n)
#define _CC_ALPHA 2
#define x86_THREAD_STATE64 4
#define PERL_STATIC_FORCE_INLINE PERL_STATIC_INLINE
#define OA_PADOP (7 << OCSHIFT)
#define __DARWIN_OSSwapConstInt16(x) ((__uint16_t)((((__uint16_t)(x) & 0xff00U) >> 8) | (((__uint16_t)(x) & 0x00ffU) << 8)))
#define ngx_shutdown_socket shutdown
#define POLICY_FIFO 4
#define __DYLDDL_DRIVERKIT_UNAVAILABLE __API_UNAVAILABLE(driverkit)
#define VM_PURGABLE_NONVOLATILE 0
#define CPU_SUBTYPE_ARM64_PTR_AUTH_VERSION(x) (((x) & CPU_SUBTYPE_ARM64_PTR_AUTH_MASK) >> 24)
#define PERL_ARGS_ASSERT_MAGIC_SETPACK assert(sv); assert(mg)
#define VM_MEMORY_COREUI 76
#define PAGE_MIN_SIZE (1 << PAGE_MIN_SHIFT)
#define variant_byte_number Perl_variant_byte_number
#define SvREFCNT_inc_NN(sv) Perl_SvREFCNT_inc_NN(MUTABLE_SV(sv))
#define pcre2_real_match_data PCRE2_SUFFIX(pcre2_real_match_data_)
#define Gv_AMG(stash) (HvNAME(stash) && Gv_AMupdate(stash,FALSE) ? 1 : (HvAMAGIC_off(stash), 0))
#define I_INTTYPES 
#define SIOCGIFSTATUS _IOWR('i', 61, struct ifstat)
#define SVs_PADSTALE 0x00040000
#define __PERL_HASH_SEED_BYTES (__PERL_HASH_WORD_SIZE * 2)
#define PERL_ARGS_ASSERT_CX_POPFORMAT assert(cx)
#define ENOSYS 78
#define CPU_SUBTYPE_ARM_V8 ((cpu_subtype_t) 13)
#define NGX_LOWAT_EVENT EV_FLAG1
#define sv_catpvn_nomg(dsv,sstr,slen) sv_catpvn_flags(dsv, sstr, slen, 0)
#define SVs_TEMP 0x00080000
#define CPU_TYPE_X86 ((cpu_type_t) 7)
#define PERL_ARGS_ASSERT_GET_OP_NAMES 
#define cx_popgiven(a) Perl_cx_popgiven(aTHX_ a)
#define UNICODE_SURROGATE_FIRST 0xD800
#define KERN_NOT_DEPRESSED 36
#define EXT extern
#define DT_DIR 4
#define PCRE2_INFO_CAPTURECOUNT 4
#define __DARWIN_OSSwapConstInt32(x) ((__uint32_t)((((__uint32_t)(x) & 0xff000000U) >> 24) | (((__uint32_t)(x) & 0x00ff0000U) >> 8) | (((__uint32_t)(x) & 0x0000ff00U) << 8) | (((__uint32_t)(x) & 0x000000ffU) << 24)))
#define NGX_HTTP_AIO_ON 1
#define PL_curlocales (vTHX->Icurlocales)
#define host_set_fairplayd_port(host,port) (host_set_special_port((host), HOST_FAIRPLAYD_PORT, (port)))
#define CvGV_set(cv,gv) Perl_cvgv_set(aTHX_ cv, gv)
#define PERL_ARGS_ASSERT_SV_CATPVF_MG_NOCONTEXT assert(sv); assert(pat)
#define __DARWIN_FD_SETSIZE 1024
#define NGX_HTTP_SSI_BUFFERED 0x01
#define FP_QNAN FP_NAN
#define CHARCLASS_NAME_MAX 14
#define DIRBLKSIZ 1024
#define _MACH_TASK_SPECIAL_PORTS_H_ 
#define newSTATEOP(a,b,c) Perl_newSTATEOP(aTHX_ a,b,c)
#define WARN_GLOB 4
#define PL_delaymagic_egid (vTHX->Idelaymagic_egid)
#define DEBUG_f_TEST_ UNLIKELY(PL_debug & DEBUG_f_FLAG)
#define PERL_ARGS_ASSERT_SV_PVUTF8N_FORCE assert(sv)
#define __DEQUALIFY(type,var) __CAST_AWAY_QUALIFIER(var, const volatile, type)
#define GETGRGID_R_PROTO REENTRANT_PROTO_I_TSBWR
#define va_arg(v,l) __builtin_va_arg(v,l)
#define MCAST_UNDEFINED 0
#define Perl_strtod Strtod
#define ngx_value(n) ngx_value_helper(n)
#define RXp_MATCH_COPIED(prog) (RXp_EXTFLAGS(prog) & RXf_COPY_DONE)
#define CIRCLEQ_HEAD(name,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct name { struct type *cqh_first; struct type *cqh_last; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define foldEQ_utf8_flags(a,b,c,d,e,f,g,h,i) Perl_foldEQ_utf8_flags(aTHX_ a,b,c,d,e,f,g,h,i)
#define PERL_ARGS_ASSERT_HV_COMMON_KEY_LEN assert(key)
#define ATTR_CMN_FSID 0x00000004
#define EV_DELETE 0x0002
#define MACH_SEND_INVALID_RT_OOL_SIZE 0x10000015
#define SVf_FAKE 0x01000000
#define G_SCALAR 2
#define case_162_SBOX32(hash,state,key) 
#define __GETHOSTUUID_H 
#define PERL_ARGS_ASSERT_GROK_HEX assert(start); assert(len_p); assert(flags)
#define ngx_de_namelen(dir) (dir)->de->d_namlen
#define CIRCLEQ_INSERT_HEAD(head,elm,field) do { CIRCLEQ_CHECK_HEAD(head, field); (elm)->field.cqe_next = (head)->cqh_first; (elm)->field.cqe_prev = (void *)(head); if ((head)->cqh_last == (void *)(head)) (head)->cqh_last = (elm); else (head)->cqh_first->field.cqe_prev = (elm); (head)->cqh_first = (elm); } while (0)
#define PERL_ARGS_ASSERT_DO_CLOSE 
#define ENDGRENT_R_PROTO 0
#define PERL_TSA_REQUIRES(x) PERL_TSA__(requires_capability(x))
#define LC_ALL_MASK ( LC_COLLATE_MASK | LC_CTYPE_MASK | LC_MESSAGES_MASK | LC_MONETARY_MASK | LC_NUMERIC_MASK | LC_TIME_MASK )
#define RUSAGE_INFO_V0 0
#define RUSAGE_INFO_V1 1
#define RUSAGE_INFO_V2 2
#define RUSAGE_INFO_V3 3
#define RUSAGE_INFO_V4 4
#define RUSAGE_INFO_V5 5
#define NBSP_NATIVE 0xA0
#define __DARWIN_OSSwapConstInt64(x) ((__uint64_t)((((__uint64_t)(x) & 0xff00000000000000ULL) >> 56) | (((__uint64_t)(x) & 0x00ff000000000000ULL) >> 40) | (((__uint64_t)(x) & 0x0000ff0000000000ULL) >> 24) | (((__uint64_t)(x) & 0x000000ff00000000ULL) >> 8) | (((__uint64_t)(x) & 0x00000000ff000000ULL) << 8) | (((__uint64_t)(x) & 0x0000000000ff0000ULL) << 24) | (((__uint64_t)(x) & 0x000000000000ff00ULL) << 40) | (((__uint64_t)(x) & 0x00000000000000ffULL) << 56)))
#define ngx_http_conf_get_module_srv_conf(cf,module) ((ngx_http_conf_ctx_t *) cf->ctx)->srv_conf[module.ctx_index]
#define case_175_SBOX32(hash,state,key) 
#define PCRE2_SUBSTITUTE_EXTENDED 0x00000200u
#define round_msg(x) (((mach_msg_size_t)(x) + sizeof (natural_t) - 1) & ~(sizeof (natural_t) - 1))
#define SEM_UNDO 010000
#define IoTYPE_STD '-'
#define A_GETCTLMODE 41
#define pcre2_general_context PCRE2_SUFFIX(pcre2_general_context_)
#define TASK_VM_INFO_REV0_COUNT ((mach_msg_type_number_t) (TASK_VM_INFO_REV1_COUNT - 2))
#define PTHREAD_PRIO_NONE 0
#define __DARWIN_ALIGNBYTES32 (sizeof(__uint32_t) - 1)
#define sv_derived_from_sv(a,b,c) Perl_sv_derived_from_sv(aTHX_ a,b,c)
#define _U_INT16_T 
#define __DARWIN_NSIG 32
#define __STDC_UTF_32__ 1
#define PCRE2_DOTALL 0x00000020u
#define __INT_FAST8_WIDTH__ 8
#define PERL_ARGS_ASSERT_IS_UTF8_INVARIANT_STRING 
#define DEBUG_DB_RECURSE_FLAG 0x40000000
#define savepv(a) Perl_savepv(aTHX_ a)
#define PERL_ARGS_ASSERT_IS_ASCII_STRING 
#define PL_savebegin (vTHX->Isavebegin)
#define isLOWER_LC_utf8(p,e) isLOWER_LC_utf8_safe(p, e)
#define CvLVALUE(cv) (CvFLAGS(cv) & CVf_LVALUE)
#define Perl_atof2(s,n) Perl_my_atof3(aTHX_ (s), &(n), 0)
#define IOPOL_SCOPE_PROCESS 0
#define PROC_FLAG_APPLICATION 0x1000000
#define PERL_ARGS_ASSERT_LOAD_MODULE_NOCONTEXT assert(name)
#define ATTR_CMN_DOCUMENT_ID 0x00100000
#define CLOCKS_PER_SEC 1000000
#define CPU_SUBTYPE_MIPS_R3000a ((cpu_subtype_t) 6)
#define TIOCREMOTE _IOW('t', 105, int)
#define __FLT32X_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define PERL_ARGS_ASSERT_GV_FULLNAME assert(sv); assert(gv)
#define PCRE2_SUBSTITUTE_GLOBAL 0x00000100u
#define PL_collxfrm_base (vTHX->Icollxfrm_base)
#define SAVEt_GP 29
#define ATTR_FILE_CLUMPSIZE 0x00000010
#define IN6_IS_ADDR_SITELOCAL(a) (((a)->s6_addr[0] == 0xfe) && (((a)->s6_addr[1] & 0xc0) == 0xc0))
#define is_utf8_invariant_string(s,len) is_utf8_invariant_string_loc(s, len, NULL)
#define IPPROTO_PIGP 9
#define _PATH_HOSTS "/etc/hosts"
#define UTIME_OMIT -2
#define gv_const_sv(a) Perl_gv_const_sv(aTHX_ a)
#define PTHREAD_MUTEX_POLICY_FAIRSHARE_NP 1
#define packWARN2(a,b) ((a) | ((b)<<8) )
#define CvMETHOD(cv) (CvFLAGS(cv) & CVf_METHOD)
#define IP_RSVP_VIF_ON 17
#define FOPEN_MAX 20
#define _PC_SYMLINK_MAX 24
#define pcre2_get_ovector_pointer PCRE2_SUFFIX(pcre2_get_ovector_pointer_)
#define MSIZESHIFT 8
#define pcre2_match_context_create PCRE2_SUFFIX(pcre2_match_context_create_)
#define PCRE2_MATCH_UNSET_BACKREF 0x00000200u
#define KERN_KDGETBUF 5
#define ATTR_VOL_VALIDMASK 0xF007FFFF
#define SIOCSIFCAP _IOW('i', 90, struct ifreq)
#define _PASSWORD_NOEXP 0x08
#define SvOBJECT(sv) (SvFLAGS(sv) & SVs_OBJECT)
#define KERN_OPERATION_TIMED_OUT 49
#define foldEQ_utf8(s1,pe1,l1,u1,s2,pe2,l2,u2) foldEQ_utf8_flags(s1, pe1, l1, u1, s2, pe2, l2, u2, 0)
#define PERL_ARGS_ASSERT_GV_IOADD 
#define CvEVAL(cv) (CvUNIQUE(cv) && !SvFAKE(cv))
#define dMY_CXT my_cxt_t *my_cxtp = (my_cxt_t *)PL_my_cxt_list[MY_CXT_INDEX]
#define OPpTRANS_FROM_UTF OPpTRANS_USE_SVOP
#define MACH_PORT_INFO_EXT_COUNT ((natural_t) (sizeof(mach_port_info_ext_t)/sizeof(natural_t)))
#define case_89_SBOX32(hash,state,key) 
#define SS_ADD_UV(u) ((ssp++)->any_uv = (UV)(u))
#define gv_autoload_pvn(a,b,c,d) Perl_gv_autoload_pvn(aTHX_ a,b,c,d)
#define PRIi32 "i"
#define PERL_ARGS_ASSERT_UTF8_TO_UVCHR_BUF assert(s); assert(send)
#define PCRE2_BSR_UNICODE 1
#define _PERL_STRLEN_ROUNDUP_UNCHECKED(n) (((n) - 1 + PERL_STRLEN_ROUNDUP_QUANTUM) & ~((MEM_SIZE)PERL_STRLEN_ROUNDUP_QUANTUM - 1))
#define IP_MAX_GROUP_SRC_FILTER 512
#define PERL_LOADMOD_IMPORT_OPS 0x4
#define IPV6CTL_USE_DEPRECATED 21
#define GV_ADDWARN 0x04
#define PL_delaymagic_euid (vTHX->Idelaymagic_euid)
#define ATTR_CMN_NAMEDATTRLIST 0x00100000
#define EF_IS_SYNTHETIC 0x00000020
#define PERL_ARGS_ASSERT_SV_SETSV_FLAGS assert(dsv)
#define SP sp
#define _STRING_H_ 
#define VOL_CAP_INT_NFSEXPORT 0x00000004
#define TAINT (PL_tainted = PL_tainting)
#define PERL_ARGS_ASSERT_CURRENT_RE_ENGINE 
#define SAVEt_CLEARSV 2
#define MNT_NOBLOCK 0x00020000
#define CVf_ANONCONST 0x20000
#define _XLOCALE_H_ 
#define CPU_TYPE_ARM64 (CPU_TYPE_ARM | CPU_ARCH_ABI64)
#define GvENAMEUTF8(gv) GvNAMEUTF8(GvEGV(gv) ? GvEGV(gv) : gv)
#define DEBUG_o_TEST_ UNLIKELY(PL_debug & DEBUG_o_FLAG)
#define LATIN_SMALL_LETTER_Y_WITH_DIAERESIS_NATIVE 0xFF
#define PL_collation_standard (vTHX->Icollation_standard)
#define PERL_ARGS_ASSERT_MAGIC_CLEARHINT assert(sv); assert(mg)
#define LSCALE 1000
#define PERL_ARGS_ASSERT_PERLIO_RESTORE_ERRNO 
#define ReREFCNT_dec(re) ({ REGEXP *const _rerefcnt_dec = (re); SvREFCNT_dec(_rerefcnt_dec); })
#define GUARD_TYPE_VIRT_MEMORY 0x5
#define call_atexit(a,b) Perl_call_atexit(aTHX_ a,b)
#define HAS_INET_ATON 
#define IPV6_RTHDR IPV6_3542RTHDR
#define SvPVCLEAR(sv) sv_setpv_bufsize(sv,0,0)
#define VM_FLAGS_RETURN_DATA_ADDR 0x100000
#define USER_PROP_MUTEX_UNLOCK MUTEX_UNLOCK(&PL_user_prop_mutex)
#define TASK_CATEGORY_POLICY_COUNT ((mach_msg_type_number_t) (sizeof (task_category_policy_data_t) / sizeof (integer_t)))
#define THREAD_IDENTIFIER_INFO 4
#define WARN_EXPERIMENTAL__RE_STRICT 60
#define _POSIX_V6_ILP32_OFFBIG __ILP32_OFFBIG
#define RX_ENGINE(rx_sv) (RXp_ENGINE(ReANY(rx_sv)))
#define PERL_ARGS_ASSERT_MG_LENGTH assert(sv)
#define HAS_REWINDDIR 
#define OA_LOGOP (3 << OCSHIFT)
#define ngx_tm_mon_t int
#define _NGX_HTTP_UPSTREAM_ROUND_ROBIN_H_INCLUDED_ 
#define ESHLIBVERS 87
#define ATTR_FILE_DATAEXTENTS 0x00000800
#define PAD_COMPNAME_TYPE(po) PadnameTYPE(PAD_COMPNAME(po))
#define __DARWIN_ALIGN32(p) ((__darwin_size_t)((__darwin_size_t)(p) + __DARWIN_ALIGNBYTES32) &~ __DARWIN_ALIGNBYTES32)
#define PERL_ARGS_ASSERT_PAD_SWIPE 
#define Off_t_size 8
#define THR PERL_GET_THX
#define CPU_SUBTYPE_MASK 0xff000000
#define __IOS_AVAILABLE(_vers) 
#define MPO_IMMOVABLE_RECEIVE 0x80
#define isBLANK_LC(c) _generic_LC(c, _CC_BLANK, isblank)
#define SIOCGIFGENERIC _IOWR('i', 58, struct ifreq)
#define case_27_SBOX32(hash,state,key) 
#define I_FENV 
#define MCLSHIFT 11
#define VM_PURGABLE_SET_STATE ((vm_purgable_t) 0)
#define _SC_SYNCHRONIZED_IO 40
#define case_31_SBOX32(hash,state,key) 
#define NGX_ESCAPE_REFRESH 4
#define VM_BEHAVIOR_PAGEOUT ((vm_behavior_t) 11)
#define SSPOPDPTR (PL_savestack[--PL_savestack_ix].any_dptr)
#define _NGX_INET_H_INCLUDED_ 
#define my_strtod Perl_my_strtod
#define _STRUCT_ZMM_REG struct __darwin_zmm_reg
#define GV_NOADD_MASK (SVf_UTF8|GV_NOADD_NOINIT|GV_NOEXPAND|GV_NOTQUAL|GV_ADDMG|GV_NO_SVGMAGIC)
#define pseudo_AF_HDRCMPLT 35
#define PERL_ARGS_ASSERT__FORCE_OUT_MALFORMED_UTF8_MESSAGE assert(p); assert(e)
#define LATIN_SMALL_LETTER_DOTLESS_I 0x131
#define PERL_ARGS_ASSERT_SV_REF assert(sv)
#define _CS_XBS5_LPBIG_OFFBIG_LIBS 34
#define pcre2_config PCRE2_SUFFIX(pcre2_config_)
#define CPU_SUBTYPE_ARM64_32_V8 ((cpu_subtype_t) 1)
#define ATTR_DIR_SETMASK 0x00000000
#define __API_UNAVAILABLE_BEGIN(...) 
#define case_192_SBOX32(hash,state,key) 
#define PERL_ARGS_ASSERT_EVAL_PV assert(p)
#define PERL_ARGS_ASSERT_FIND_RUNDEFSV 
#define PERL_ARGS_ASSERT_NEWSVPVF assert(pat)
#define SvSCREAM_off(sv) (SvFLAGS(sv) &= ~SVp_SCREAM)
#define AI_NUMERICHOST 0x00000004
#define WARN_SHADOW 69
#define REENTRANT_PROTO_S_TS 67
#define ngx_openat_file(fd,name,mode,create,access) openat(fd, (const char *) name, mode|create, access)
#define CHILD_MAX 266
#define CPUFAMILY_ARM_TWISTER 0x92fb37c8
#define gv_IOadd(gv) gv_add_by_type((gv), SVt_PVIO)
#define __CHAR32_TYPE__ unsigned int
#define DOUBLESIZE 8
#define KERN_POLICY_STATIC 51
#define AQ_MAXHIGH 10000
#define PERL_ARGS_ASSERT_MG_COPY assert(sv); assert(nsv)
#define IPCTL_DIRECTEDBROADCAST 9
#define WARN_SEVERE 21
#define OPf_SPECIAL 128
#define ngx_open_file(name,mode,create,access) open((const char *) name, mode|create, access)
#define ATTR_VOL_IOBLOCKSIZE 0x00000080
#define NGX_PROCESS_RESPAWN -3
#define pcre2_match PCRE2_SUFFIX(pcre2_match_)
#define Perl_drand48_init(seed) (Perl_drand48_init_r(&PL_random_state, (seed)))
#define _PTHREAD_RWLOCK_SIG_init 0x2DA8B3B4
#define XopFLAGS(xop) ((xop)->xop_flags)
#define PerlDir_seek(dir,loc) seekdir((dir), (loc))
#define KEYWORD_PLUGIN_MUTEX_INIT MUTEX_INIT(&PL_keyword_plugin_mutex)
#define PERL_ARGS_ASSERT_NEWSVPVN 
#define PERL_ARGS_ASSERT_MY_LSTAT_FLAGS 
#define save_clearsv(a) Perl_save_clearsv(aTHX_ a)
#define isUPPER_A(c) inRANGE(c, 'A', 'Z')
#define KERN_TERMINATED 37
#define PERL_MAGIC_regex_global 'g'
#define PerlLIO_access(file,mode) access((file), (mode))
#define UINT_LEAST32_MAX UINT32_MAX
#define _NGX_SYSLOG_H_INCLUDED_ 
#define do_op_dump(a,b,c) Perl_do_op_dump(aTHX_ a,b,c)
#define newMETHOP(a,b,c) Perl_newMETHOP(aTHX_ a,b,c)
#define croak_no_modify Perl_croak_no_modify
#define MADV_FREE_REUSE 8
#define x86_LAST_BRANCH_STATE 25
#define pcre2_jit_stack_create PCRE2_SUFFIX(pcre2_jit_stack_create_)
#define GVf_INTRO 0x01
#define HAS_NTOHL 
#define SAVEt_SVREF 45
#define __AVAILABILITY_INTERNAL_DEPRECATED __attribute__((deprecated))
#define SLIST_ENTRY(type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct { struct type *sle_next; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define x86_EXCEPTION_STATE32_COUNT ((mach_msg_type_number_t) ( sizeof (x86_exception_state32_t) / sizeof (int) ))
#define st_birthtime st_birthtimespec.tv_sec
#define isLOWER_utf8_safe(p,e) _generic_invlist_utf8_safe(_CC_LOWER, p, e)
#define PERL_SCNfldbl "Lf"
#define _CS_XBS5_LPBIG_OFFBIG_LDFLAGS 33
#define HAS_GETGRNAM_R 
#define SAVEt_GVSV 30
#define PERL_UCHAR_MAX ((unsigned char)UCHAR_MAX)
#define __LOCALE_H_ 
#define PERL_ARGS_ASSERT_PTR_TABLE_SPLIT assert(tbl)
#define NODEV (dev_t)(-1)
#define RXp_MATCH_UTF8(prog) (RXp_EXTFLAGS(prog) & RXf_MATCH_UTF8)
#define parse_barestmt(a) Perl_parse_barestmt(aTHX_ a)
#define Stat_t struct stat
#define SIGILL 4
#define INADDR_ALLRPTS_GROUP (u_int32_t)0xe0000016
#define ATTR_CMNEXT_SETMASK 0x00000000
#define GETGRENT_R_PROTO 0
#define Perl_log10 log10
#define MACH_MSGH_BITS_IS_COMPLEX(bits) (((bits) & MACH_MSGH_BITS_COMPLEX) != MACH_MSGH_BITS_ZERO)
#define __OSX_AVAILABLE_STARTING(_osx,_ios) 
#define HvRITER_get(hv) (SvOOK(hv) ? HvAUX(hv)->xhv_riter : -1)
#define AMT_AMAGIC_on(amt) ((amt)->flags |= AMTf_AMAGIC)
#define PTHREAD_CANCEL_DISABLE 0x00
#define HINT_BYTES 0x00000008
#define PerlIO_write(a,b,c) Perl_PerlIO_write(aTHX_ a,b,c)
#define MACH_RCV_OVERWRITE 0x00000000
#define NGX_HTTP_PARSE_INVALID_METHOD 10
#define PadnameOURSTASH(pn) (pn)->xpadn_ourstash
#define PERL_ARGS_ASSERT_AV_STORE assert(av)
#define NGX_COMPAT_BEGIN(slots) 
#define CvXSUB(sv) ((XPVCV*)MUTABLE_PTR(SvANY(sv)))->xcv_root_u.xcv_xsub
#define POLICY_RR_BASE_COUNT ((mach_msg_type_number_t) (sizeof(struct policy_rr_base)/sizeof(integer_t)))
#define UVf UVuf
#define MNT_MULTILABEL 0x04000000
#define IPPROTO_DDP 37
#define __DARWIN_FD_COPY(f,t) bcopy(f, t, sizeof(*(f)))
#define _LC_CAST U8
#define __FLT64_MIN__ 2.22507385850720138309023271733240406e-308F64
#define DOUBLE_HAS_NAN 
#define _generic_LC_utf8_safe(macro,p,e,above_latin1) (__ASSERT_(_utf8_safe_assert(p, e)) (UTF8_IS_INVARIANT(*(p))) ? macro(*(p)) : (UTF8_IS_DOWNGRADEABLE_START(*(p)) ? ((LIKELY((e) - (p) > 1 && UTF8_IS_CONTINUATION(*((p)+1)))) ? macro(EIGHT_BIT_UTF8_TO_NATIVE(*(p), *((p)+1))) : (_force_out_malformed_utf8_message( (U8 *) (p), (U8 *) (e), 0, 1), 0)) : above_latin1))
#define Strtol strtol
#define host_set_launchctl_port(host,port) (host_set_special_port((host), HOST_LAUNCHCTL_PORT, (port)))
#define _PATH_GROUP "/etc/group"
#define RXp_MATCH_TAINTED_on(prog) (RXp_EXTFLAGS(prog) |= RXf_TAINTED_SEEN)
#define __AVAILABILITY_INTERNAL__ 
#define isLOWER_A(c) inRANGE(c, 'a', 'z')
#define SIGINT 2
#define MACH_RCV_VOUCHER 0x00000800
#define O_DIRECTORY 0x00100000
#define DEBUG_x_TEST_ UNLIKELY(PL_debug & DEBUG_x_FLAG)
#define UPDATE_IO_STATS_ATOMIC(info,io_size) { OSIncrementAtomic64((SInt64 *)&(info.count)); OSAddAtomic64(io_size, (SInt64 *)&(info.size)); }
#define x86_EXCEPTION_STATE64 6
#define _NGX_USER_H_INCLUDED_ 
#define PCRE2_INFO_BACKREFMAX 2
#define PERL_ARGS_ASSERT__WARN_PROBLEMATIC_LOCALE 
#define SO_LABEL 0x1010
#define ngx_add_event ngx_event_actions.add
#define _SC_V6_LPBIG_OFFBIG 106
#define PERL_MAGIC_nonelem 'Y'
#define VM_MEMORY_JAVASCRIPT_CORE 63
#define EPROC_CTTY 0x01
#define CPU_SUBTYPE_ARM_XSCALE ((cpu_subtype_t) 8)
#define CPU_SUBTYPE_VAX8600 ((cpu_subtype_t) 9)
#define CPUFAMILY_INTEL_6_26 CPUFAMILY_INTEL_NEHALEM
#define SIGIOT SIGABRT
#define __OS_BASE__ 
#define PRIdFAST8 PRId8
#define PCRE2_ERROR_SCRIPT_RUN_NOT_AVAILABLE 196
#define NETSVC_MRKNG_LVL_L3L2_ALL 2
#define PCRE2_CALL_CONVENTION 
#define ngx_calloc_buf(pool) ngx_pcalloc(pool, sizeof(ngx_buf_t))
#define NOTE_SECONDS 0x00000001
#define SETSERVENT_R_PROTO 0
#define case_166_SBOX32(hash,state,key) 
#define IPPROTO_DGP 86
#define MAXPRI 127
#define LLONG_MAX __LONG_LONG_MAX__
#define VQ_DESIRED_DISK 0x4000
#define MACH_MSGH_BITS_RAISED_IMPORTANCE(bits) (((bits) & MACH_MSGH_BITS_RAISEIMP) != MACH_MSGH_BITS_ZERO)
#define SVf_POK 0x00000400
#define PERL_ARGS_ASSERT_UTF8_TO_UVUNI_BUF assert(s); assert(send)
#define __GNUC_MINOR__ 2
#define PRIuLEAST8 PRIu8
#define PERL_ARGS_ASSERT_CV_GET_CALL_CHECKER assert(cv); assert(ckfun_p); assert(ckobj_p)
#define PF_KEY pseudo_AF_KEY
#define op_free(a) Perl_op_free(aTHX_ a)
#define start_subparse(a,b) Perl_start_subparse(aTHX_ a,b)
#define _U_CHAR 
#define x86_LAST_BRANCH_STATE_COUNT ((mach_msg_type_number_t)(sizeof(last_branch_state_t) / sizeof(int)))
#define LITTLE_ENDIAN __DARWIN_LITTLE_ENDIAN
#define __FLT32X_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F32x
#define COP_SEQ_RANGE_HIGH(pn) (pn)->xpadn_high
#define kLOOP cLOOPx(kid)
#define AMGf_want_list 0x40
#define EXT_MGVTBL EXTCONST MGVTBL
#define PERL_ARGS_ASSERT_SAVETMPS 
#define save_generic_pvref(a) Perl_save_generic_pvref(aTHX_ a)
#define _PATH_NETWORKS "/etc/networks"
#define isASCII_uvchr(c) isASCII(c)
#define MPO_TG_BLOCK_TRACKING 0x200
#define PCRE2_NOTEOL 0x00000002u
#define SBOX32_SCRAMBLE32(v,prime) STMT_START { v ^= (v>>9); v ^= (v<<21); v ^= (v>>16); v *= prime; v ^= (v>>17); v ^= (v<<15); v ^= (v>>23); } STMT_END
#define PERL_ARGS_ASSERT_CUSTOM_OP_REGISTER assert(ppaddr); assert(xop)
#define UTF8_DISALLOW_ILLEGAL_C9_INTERCHANGE (UTF8_DISALLOW_SUPER|UTF8_DISALLOW_SURROGATE)
#define PL_padix (vTHX->Ipadix)
#define PL_sv_yes (vTHX->Isv_yes)
#define IN_CLASSC_NSHIFT 8
#define x86_AVX512_STATE (x86_AVX512_STATE32 + 2)
#define host_get_lockd_port(host,port) (host_get_special_port((host), HOST_LOCAL_NODE, HOST_LOCKD_PORT, (port)))
#define PERL_ARGS_ASSERT_RV2CV_OP_CV assert(cvop)
#define is_XPERLSPACE_cp_high(cp) ( 0x1680 == cp || ( 0x1680 < cp && ( inRANGE_helper_(UV, cp, 0x2000, 0x200A) || ( 0x200A < cp && ( inRANGE_helper_(UV, cp, 0x2028, 0x2029) || ( 0x2029 < cp && ( 0x202F == cp || ( 0x202F < cp && ( 0x205F == cp || 0x3000 == cp ) ) ) ) ) ) ) ) )
#define KERN_INSUFFICIENT_BUFFER_SIZE 52
#define PERL_ARGS_ASSERT_SV_SETPV_MG assert(sv)
#define NGX_FILE_DEFAULT_ACCESS 0644
#define perl_atexit(a,b) call_atexit(a,b)
#define S_ISUID 0004000
#define _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS 35
#define CPU_ARCH_MASK 0xff000000
#define HAS_ISINF 
#define F_FLUSH_DATA 40
#define I8_TO_NATIVE(ch) I8_TO_NATIVE_UTF8(ch)
#define PERL_UCHAR_MIN ((unsigned char)0)
#define _INO64_T 
#define RXf_PMf_STD_PMMOD (RXf_PMf_MULTILINE|RXf_PMf_SINGLELINE|RXf_PMf_FOLD|RXf_PMf_EXTENDED|RXf_PMf_EXTENDED_MORE|RXf_PMf_NOCAPTURE)
#define PERL_ARGS_ASSERT_PAD_ADD_ANON assert(func)
#define SvOURSTASH PadnameOURSTASH
#define USER_PROP_MUTEX_INIT MUTEX_INIT(&PL_user_prop_mutex)
#define PERL_ARGS_ASSERT_DO_EXEC assert(cmd)
#define FP_387 3
#define newSVpvn(a,b) Perl_newSVpvn(aTHX_ a,b)
#define NGX_HTTP_PARSE_INVALID_VERSION 12
#define PERL_RW_MUTEX_DESTROY(mutex) STMT_START { COND_DESTROY(&(mutex)->wakeup); MUTEX_DESTROY(&(mutex)->lock); } STMT_END
#define I32TYPE int
#define _to_utf8_fold_flags(a,b,c,d,e) Perl__to_utf8_fold_flags(aTHX_ a,b,c,d,e)
#define GvNAME_get(gv) HEK_KEY(GvNAME_HEK(gv))
#define static_assert _Static_assert
#define PERL_ARGS_ASSERT_REANY assert(re)
#define UTF_CONTINUATION_MARK (UTF_IS_CONTINUATION_MASK & 0xB0)
#define x86_FLOAT_STATE64 5
#define newSVsv_flags(a,b) Perl_newSVsv_flags(aTHX_ a,b)
#define NGX_HTTP_VAR_NOHASH 8
#define is_strict_utf8_string(s,len) is_strict_utf8_string_loclen(s, len, NULL, NULL)
#define NGX_HTTP_TRACE 0x00008000
#define _config_h_ 
#define NGX_DECLINED -5
#define AF_ISDN 28
#define case_54_SBOX32(hash,state,key) 
#define UTF_CONTINUATION_MASK ((U8) (nBIT_MASK(UTF_ACCUMULATION_SHIFT)))
#define MACH_PORT_LIMITS_INFO_COUNT ((natural_t) (sizeof(mach_port_limits_t)/sizeof(natural_t)))
#define PERLDB_NOOPT (PL_perldb & PERLDBf_NOOPT)
#define PERL_ARGS_ASSERT_SV_2PVUTF8 assert(sv)
#define CvEVAL_off(cv) CvUNIQUE_off(cv)
#define PERL_ARGS_ASSERT_CK_EXEC assert(o)
#define cLISTOPx(o) ((LISTOP*)(o))
#define RU_PROC_RUNS_RESLIDE 0x00000001
#define CPU_TYPE_VAX ((cpu_type_t) 1)
#define newGVgen_flags(a,b) Perl_newGVgen_flags(aTHX_ a,b)
#define HAS_ISFINITE 
#define TASK_SUPPRESSION_POLICY 3
#define dPOPTOPnnrl dPOPXnnrl(TOP)
#define save_shared_pvref(a) Perl_save_shared_pvref(aTHX_ a)
#define PERL_ARGS_ASSERT_GV_HVADD 
#define RX_MATCH_UTF8_on(rx_sv) (RXp_MATCH_UTF8_on(ReANY(rx_sv)))
#define __WATCHOS_AVAILABLE(_vers) 
#define PERL_ARGS_ASSERT_NEWLOGOP assert(first); assert(other)
#define NGX_HTTP_PROPPATCH 0x00000800
#define PERL_ARGS_ASSERT_CK_EVAL assert(o)
#define ENOENT 2
#define PF_HYLINK AF_HYLINK
#define trunc_page(x) ((x) & (~(vm_page_size - 1)))
#define DBVARMG_COUNT 3
#define _PTHREAD_KEY_T 
#define x86_THREAD_STATE32_COUNT ((mach_msg_type_number_t) ( sizeof (x86_thread_state32_t) / sizeof (int) ))
#define PL_curstname (vTHX->Icurstname)
#define CLD_EXITED 1
#define TAILQ_REMOVE(head,elm,field) do { TAILQ_CHECK_NEXT(elm, field); TAILQ_CHECK_PREV(elm, field); if ((TAILQ_NEXT((elm), field)) != NULL) TAILQ_NEXT((elm), field)->field.tqe_prev = (elm)->field.tqe_prev; else { (head)->tqh_last = (elm)->field.tqe_prev; QMD_TRACE_HEAD(head); } *(elm)->field.tqe_prev = TAILQ_NEXT((elm), field); TRASHIT((elm)->field.tqe_next); TRASHIT((elm)->field.tqe_prev); QMD_TRACE_ELEM(&(elm)->field); } while (0)
#define INIT(x) 
#define __DRIVERKIT_19_0 190000
#define PRIuFAST64 PRIu64
#define SvVOK(sv) (SvMAGICAL(sv) && mg_find(sv,PERL_MAGIC_vstring))
#define NGX_HAVE_UNISTD_H 1
#define UNICODE_GOT_SUPER UNICODE_DISALLOW_SUPER
#define croak_sv(a) Perl_croak_sv(aTHX_ a)
#define PERL_ARGS_ASSERT_SV_2IV_FLAGS assert(sv)
#define CxTYPE(c) ((c)->cx_type & CXTYPEMASK)
#define __DARWIN_FD_ISSET(n,p) __darwin_fd_isset((n), (p))
#define PERL_ARGS_ASSERT_SLAB_FREE assert(op)
#define VM_MEMORY_ACCOUNTS 98
#define case_183_SBOX32(hash,state,key) 
#define LvFLAGS(sv) ((XPVLV*) SvANY(sv))->xlv_flags
#define VM_PURGABLE_DEBUG_FAULT (0x2 << VM_PURGABLE_DEBUG_SHIFT)
#define ngx_buf_size(b) (ngx_buf_in_memory(b) ? (off_t) ((b)->last - (b)->pos): ((b)->file_last - (b)->file_pos))
#define PROCESSOR_SET_BASIC_INFO 5
#define PTHREAD_KEYS_MAX 512
#define tryAMAGICbin_MG(method,flags) STMT_START { if ( UNLIKELY(((SvFLAGS(TOPm1s)|SvFLAGS(TOPs)) & (SVf_ROK|SVs_GMG))) && Perl_try_amagic_bin(aTHX_ method, flags)) return NORMAL; } STMT_END
#define TIOCSETAW _IOW('t', 21, struct termios)
#define PERL_ARGS_ASSERT_HV_ITERKEY assert(entry); assert(retlen)
#define P_DIRTY_AGING_IN_PROGRESS 0x00000100
#define cophh_fetch_pvn(cophh,keypv,keylen,hash,flags) Perl_refcounted_he_fetch_pvn(aTHX_ cophh, keypv, keylen, hash, flags)
#define mach_vm_trunc_page(x) ((mach_vm_offset_t)(x) & ~((signed)vm_page_mask))
#define FCNTL_CAN_LOCK 
#define PADNAME_FROM_PV(s) ((PADNAME *)((s) - STRUCT_OFFSET(struct padname_with_str, xpadn_str)))
#define PERL_ARGS_ASSERT_GROK_NUMBER_FLAGS assert(pv)
#define PERL_ARGS_ASSERT_IS_C9STRICT_UTF8_STRING_LOCLEN assert(s)
#define AI_CANONNAME 0x00000002
#define NGX_HAVE_C99_VARIADIC_MACROS 1
#define FF_LITERAL 2
#define IS_SAFE_SYSCALL(p,len,what,op_name) (Perl_is_safe_syscall(aTHX_ (p), (len), (what), (op_name)))
#define pcre2_jit_stack PCRE2_SUFFIX(pcre2_jit_stack_)
#define PerlLIO_rename(old,new) rename((old), (new))
#define NGX_HTTP_VERSION_9 9
#define PERL_ARGS_ASSERT_SAVE_SVREF assert(sptr)
#define HOST_MACH_MSG_TRAP 8
#define __FLT128_EPSILON__ 1.92592994438723585305597794258492732e-34F128
#define IPV6CTL_ACCEPT_RTADV 12
#define CTIME_R_PROTO REENTRANT_PROTO_B_SB
#define ibcmp_utf8(s1,pe1,l1,u1,s2,pe2,l2,u2) cBOOL(! foldEQ_utf8(s1, pe1, l1, u1, s2, pe2, l2, u2))
#define HAS_NL_LANGINFO 
#define cophh_fetch_pvs(cophh,key,flags) Perl_refcounted_he_fetch_pvn(aTHX_ cophh, STR_WITH_LEN(key), 0, flags)
#define isALNUM_LC(c) isWORDCHAR_LC(c)
#define is_utf8_char_helper Perl_is_utf8_char_helper
#define _STRUCT_MCONTEXT_AVX512_64 struct __darwin_mcontext_avx512_64
#define PRINTF_FORMAT_NULL_OK 
#define __SIZEOF_LONG_LONG__ 8
#define MAP_MEM_FLAGS_USER ( MAP_MEM_PURGABLE_KERNEL_ONLY | MAP_MEM_GRAB_SECLUDED | MAP_MEM_ONLY | MAP_MEM_NAMED_CREATE | MAP_MEM_PURGABLE | MAP_MEM_NAMED_REUSE | MAP_MEM_USE_DATA_ADDR | MAP_MEM_VM_COPY | MAP_MEM_VM_SHARE | MAP_MEM_LEDGER_TAGGED | MAP_MEM_4K_DATA_ADDR)
#define EHOSTUNREACH 65
#define PERL_ARGS_ASSERT_YYLEX 
#define HAS_GETSERVBYNAME 
#define case_157_SBOX32(hash,state,key) 
#define MAX_TRAILER_SIZE ((mach_msg_size_t)sizeof(mach_msg_max_trailer_t))
#define CvANON_off(cv) (CvFLAGS(cv) &= ~CVf_ANON)
#define RLIMIT_STACK 3
#define PERL_ARGS_ASSERT_SV_GROW assert(sv)
#define VFS_CTL_QUERY 0x00010003
#define Size_t_size 8
#define _POSIX_THREAD_KEYS_MAX 128
#define PERL_ARGS_ASSERT_SAVE_HELEM 
#define PL_utf8_idcont (vTHX->Iutf8_idcont)
#define pcre2_jit_stack_assign PCRE2_SUFFIX(pcre2_jit_stack_assign_)
#define OPpMULTIDEREF_EXISTS 0x10
#define FPC_RC_RN 0x0000
#define PerlMemParse_realloc(buf,size) realloc((buf), (size))
#define PERL_ARGS_ASSERT_PERLIO_FLUSH 
#define TASK_VM_INFO_COUNT ((mach_msg_type_number_t) (sizeof (task_vm_info_data_t) / sizeof (natural_t)))
#define _PTHREAD_ONCE_T 
#define MACH_VOUCHER_ATTR_MANAGER_NULL ((mach_voucher_attr_manager_t) 0)
#define TF_64B_DATA 0x00000002
#define __TVOS_14_1 140100
#define __TVOS_14_3 140300
#define __TVOS_14_5 140500
#define __LDBL_DIG__ 18
#define PERL_ARGS_ASSERT_SVTRUE_NOMG 
#define SF_SETTABLE 0x3fff0000
#define case_97_SBOX32(hash,state,key) 
#define EXC_MASK_BREAKPOINT (1 << EXC_BREAKPOINT)
#define TIOCPTYUNLK _IO('t', 82)
#define CxONCE(cx) ((cx)->cx_type & CXp_ONCE)
#define sv_2pvbyte_flags(a,b,c) Perl_sv_2pvbyte_flags(aTHX_ a,b,c)
#define __UINT_FAST16_MAX__ 0xffff
#define ATTR_CMN_USERACCESS 0x00200000
#define KEV_DL_SIFPHYS 4
#define PERL_ARGS_ASSERT_POPMARK 
#define S_IROTH 0000004
#define ngx_getpid getpid
#define mach_msg_kind_t mach_port_seqno_t
#define POSIX_MADV_RANDOM 1
#define IPPROTO_LEAF1 25
#define SO_RANDOMPORT 0x1082
#define get_av(a,b) Perl_get_av(aTHX_ a,b)
#define SV_MUTABLE_RETURN 64
#define PerlSock_getnetbyname(n) getnetbyname(n)
#define CTERMID_R_PROTO REENTRANT_PROTO_B_B
#define X_OK (1<<0)
#define cUNOP_AUX cUNOP_AUXx(PL_op)
#define OA_FILESTATOP (12 << OCSHIFT)
#define Time_t time_t
#define BADVERSION(a,b,c) if (b) { *b = c; } return a;
#define PERL_ARGS_ASSERT_CK_TRYCATCH assert(o)
#define sv_vcatpvf_mg(a,b,c) Perl_sv_vcatpvf_mg(aTHX_ a,b,c)
#define RLIMIT_THREAD_CPULIMITS 0x3
#define _MP_DB "pwd.db"
#define GvASSUMECV(gv) (GvFLAGS(gv) & GVf_ASSUMECV)
#define case_38_SBOX32(hash,state,key) 
#define PRIoFAST8 PRIo8
#define HAS_STRNLEN 
#define ngx_process_events ngx_event_actions.process_events
#define SvTRUEx(sv) SvTRUE(sv)
#define HW_L3SETTINGS 21
#define CPU_TYPE_MC680x0 ((cpu_type_t) 6)
#define ngx_str_set(str,text) (str)->len = sizeof(text) - 1; (str)->data = (u_char *) text
#define PCRE2_CODE_UNIT_WIDTH 8
#define IOPOL_VFS_TRIGGER_RESOLVE_OFF 1
#define get_cv(a,b) Perl_get_cv(aTHX_ a,b)
#define NGX_HAVE_SYSVSHM 1
#define utf8n_to_uvchr(s,len,lenp,flags) utf8n_to_uvchr_error(s, len, lenp, flags, 0)
#define NGX_HTTP_CREATED 201
#define AvALLOC(av) ((XPVAV*) SvANY(av))->xav_alloc
#define NET_RT_DUMP 1
#define case_225_SBOX32(hash,state,key) 
#define SAWAMPERSAND_MIDDLE 2
#define sv_pvbyten_force(a,b) Perl_sv_pvbyten_force(aTHX_ a,b)
#define filter_del(a) Perl_filter_del(aTHX_ a)
#define _NGX_HTTP_UPSTREAM_H_INCLUDED_ 
#define op_class(a) Perl_op_class(aTHX_ a)
#define SCNuFAST8 SCNu8
#define IP_RECVRETOPTS 6
#define SvUV_nomg(sv) (SvUOK(sv) ? SvUVX(sv) : sv_2uv_flags(sv, 0))
#define ngx_dlsym(handle,symbol) dlsym(handle, symbol)
#define FPE_FLTUND 3
#define OPpMAY_RETURN_CONSTANT 0x20
#define NORETURN_FUNCTION_END NOT_REACHED;
#define PERL_ARGS_ASSERT_SV_CATPVF_NOCONTEXT assert(sv); assert(pat)
#define _(args) args
#define isSPACE_LC_uvchr(c) _generic_LC_uvchr(isSPACE_LC, is_XPERLSPACE_cp_high, c)
#define UTF8_DISALLOW_PERL_EXTENDED 0x4000
#define SIOCGIFPDSTADDR _IOWR('i', 64, struct ifreq)
#define SS_NOPRIV 0
