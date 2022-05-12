#define TAILQ_CHECK_NEXT(elm,field) 
#define TRACE_DISABLE 0x0000
#define SI_TIMER 0x10003
#define GCC_NORETURN 
#define ___POSIX_C_DEPRECATED_STARTING_199009L 
#define COLOR_YELLOW 3
#define _Nullable 
#define S_ISCHR(m) (((m) & S_IFMT) == S_IFCHR)
#define _CS_POSIX_V6_LP64_OFF64_CFLAGS 8
#define __strftimelike(fmtarg) __attribute__((__format__ (__strftime__, fmtarg, 0)))
#define __DBL_MIN_EXP__ (-1021)
#define KEY_SFIND 0605
#define __ILP32_OFFBIG (-1)
#define _PC_CHOWN_RESTRICTED 7
#define ACS_STERLING NCURSES_ACS('}')
#define _CS_POSIX_V6_ILP32_OFFBIG_LIBS 7
#define CTX_MAX 4
#define setsyx(y,x) do { if (newscr) { if ((y) == -1 && (x) == -1) leaveok(newscr, TRUE); else { leaveok(newscr, FALSE); wmove(newscr, (y), (x)); } } } while(0)
#define CURSES_H 1
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_4(x) x
#define NOTE_EXEC 0x20000000
#define UTIL_FZF 14
#define _UINT64_T 
#define _QUAD_LOWWORD 0
#define MAC_OS_X_VERSION_10_13_1 101301
#define MAC_OS_X_VERSION_10_13_2 101302
#define MAC_OS_X_VERSION_10_13_4 101304
#define _POSIX_THREAD_PRIORITY_SCHEDULING (-1)
#define _SMP_DB "spwd.db"
#define PRIO_MIN -20
#define WAIT_ANY (-1)
#define __unused __attribute__((__unused__))
#define FIONBIO _IOW('f', 126, int)
#define __UINT_LEAST16_MAX__ 0xffff
#define _STDBOOL_H 
#define AT_FDONLY 0x0400
#define _STRUCT_X86_AVX_STATE64 struct __darwin_x86_avx_state64
#define _SC_RE_DUP_MAX 16
#define mvwins_wstr(win,y,x,t) (wmove(win,y,x) == ERR ? ERR : wins_wstr(win,t))
#define MSG_CP_MV_AS 7
#define _PTHREAD_IMPL_H_ 
#define __ATOMIC_ACQUIRE 2
#define STAILQ_INSERT_AFTER(head,tqelm,elm,field) do { if ((STAILQ_NEXT((elm), field) = STAILQ_NEXT((tqelm), field)) == NULL) (head)->stqh_last = &STAILQ_NEXT((elm), field); STAILQ_NEXT((tqelm), field) = (elm); } while (0)
#define __FLT128_MAX_10_EXP__ 4932
#define _SECURE__STRINGS_H_ 
#define F_GETPROTECTIONCLASS 63
#define RE_DUP_MAX 255
#define SIOCSIF6LOWPAN _IOW('i', 196, struct ifreq)
#define add_wch(c) wadd_wch(stdscr,c)
#define _SC_NGROUPS_MAX 4
#define _PATH_PWD "/etc"
#define sa_sigaction __sigaction_u.__sa_sigaction
#define NOTE_FORK 0x40000000
#define __FLT_MIN__ 1.17549435082228750796873653722224568e-38F
#define __GCC_IEC_559_COMPLEX 2
#define __GNUC_VA_LIST 
#define F_MULTI 0x01
#define FD_COPY(f,t) __DARWIN_FD_COPY(f, t)
#define __DARWIN_NFDBITS (sizeof(__int32_t) * __DARWIN_NBBY)
#define SV_ONSTACK SA_ONSTACK
#define _SC_SPIN_LOCKS 80
#define TAILQ_INSERT_BEFORE(listelm,elm,field) do { TAILQ_CHECK_PREV(listelm, field); (elm)->field.tqe_prev = (listelm)->field.tqe_prev; TAILQ_NEXT((elm), field) = (listelm); *(listelm)->field.tqe_prev = (elm); (listelm)->field.tqe_prev = &TAILQ_NEXT((elm), field); QMD_TRACE_ELEM(&(elm)->field); QMD_TRACE_ELEM(&listelm->field); } while (0)
#define _NEWINDEX -1
#define EUSERS 68
#define _SC_2_VERSION 17
#define __UINT_LEAST8_TYPE__ unsigned char
#define __SIZEOF_FLOAT80__ 16
#define WACS_UARROW NCURSES_WACS('-')
#define A_STANDOUT NCURSES_BITS(1U,8)
#define _SC_IPV6 118
#define _I386__ENDIAN_H_ 
#define stdout __stdoutp
#define mvwdelch(win,y,x) (wmove(win,y,x) == ERR ? ERR : wdelch(win))
#define INT_LEAST16_MIN INT16_MIN
#define NCURSES_BUTTON_RELEASED 001L
#define NNN_OPENER 3
#define WACS_SSBS NCURSES_WACS('v')
#define _SC_LINE_MAX 15
#define NCURSES_EXPORT_VAR(type) NCURSES_IMPEXP type
#define __IPHONE_14_2 140200
#define __MAC_10_13_1 101301
#define __MAC_10_13_2 101302
#define __MAC_10_13_4 101304
#define _POSIX_PRIORITIZED_IO (-1)
#define ACS_S9 NCURSES_ACS('s')
#define KEY_OPEN 0560
#define __DRIVERKIT_19_0 190000
#define bzero(dest,...) __builtin___memset_chk (dest, 0, __VA_ARGS__, __darwin_obsz0 (dest))
#define TIOCSPGRP _IOW('t', 118, int)
#define SIGBUS 10
#define __INTMAX_C(c) c ## L
#define KEY_SCOMMAND 0574
#define ACS_RTEE NCURSES_ACS('u')
#define STAILQ_INIT(head) do { STAILQ_FIRST((head)) = NULL; (head)->stqh_last = &STAILQ_FIRST((head)); } while (0)
#define PTHREAD_SCOPE_PROCESS 2
#define KEVENT_FLAG_IMMEDIATE 0x000001
#define __enum_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_open
#define PTHREAD_CANCELED ((void *) 1)
#define SV_RESETHAND SA_RESETHAND
#define O_ACCMODE 0x0003
#define C_PIP (C_ORP + 1)
#define __deprecated_msg(_msg) __attribute__((__deprecated__(_msg)))
#define __DARWIN_howmany(x,y) ((((x) % (y)) == 0) ? ((x) / (y)) : (((x) / (y)) + 1))
#define __DARWIN_INODE64(sym) __asm("_" __STRING(sym) __DARWIN_SUF_64_BIT_INO_T)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_0(x) 
#define __CHAR_BIT__ 8
#define _CS_PATH 1
#define __WATCHOS_DEPRECATED(_start,_dep,_msg) 
#define STAILQ_SWAP(head1,head2,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH do { struct type *swap_first = STAILQ_FIRST(head1); struct type **swap_last = (head1)->stqh_last; STAILQ_FIRST(head1) = STAILQ_FIRST(head2); (head1)->stqh_last = (head2)->stqh_last; STAILQ_FIRST(head2) = swap_first; (head2)->stqh_last = swap_last; if (STAILQ_EMPTY(head1)) (head1)->stqh_last = &STAILQ_FIRST(head1); if (STAILQ_EMPTY(head2)) (head2)->stqh_last = &STAILQ_FIRST(head2); } while (0) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define ru_last ru_nivcsw
#define REG_ECTYPE 4
#define __LP64_OFF64 (1)
#define ENOTSOCK 38
#define ENV_SHELL 0
#define _SC_COLL_WEIGHTS_MAX 13
#define makedev(x,y) ((dev_t)(((x) << 24) | (y)))
#define _LOCALE_H_ 
#define FIOGETOWN _IOR('f', 123, int)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_0(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_3(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_6(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_7(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_8(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_9(x) x
#define EAFNOSUPPORT 47
#define RL_READLINE_VERSION 0x0402
#define IOCPARM_LEN(x) (((x) >> 16) & IOCPARM_MASK)
#define _SC_THREAD_PRIO_PROTECT 88
#define SHRT_MAX __SHRT_MAX__
#define SCHAR_MIN (-SCHAR_MAX - 1)
#define IOPOL_VFS_IGNORE_PERMISSIONS_ON 1
#define __WATCHOS_1_0 10000
#define KEY_RIGHT 0405
#define __DARWIN_C_LEVEL __DARWIN_C_FULL
#define UTIL_GIO_TRASH 19
#define KEY_RESTART 0567
#define IOPOL_VFS_STATFS_NO_DATA_VOLUME_DEFAULT 0
#define EACCES 13
#define _U_INT64_T 
#define __UINT8_MAX__ 0xff
#define __SCHAR_WIDTH__ 8
#define _PTHREAD_RWLOCKATTR_T 
#define STR_TMPFILE 2
#define _SC_TYPED_MEMORY_OBJECTS 102
#define _XOPEN_UNIX (1)
#define _POSIX_THREAD_ATTR_STACKSIZE 200112L
#define TIOCMSDTRWAIT _IOW('t', 91, int)
#define WCHAR_MAX __WCHAR_MAX__
#define INT16_C(v) (v)
#define __WINT_MAX__ 0x7fffffff
#define move(y,x) wmove(stdscr,y,x)
#define AT_SYMLINK_FOLLOW 0x0040
#define _SC_TTY_NAME_MAX 101
#define _SC_XBS5_ILP32_OFF32 122
#define _SC_BARRIERS 66
#define TIME_UTC 1
#define __FLT32_MIN_EXP__ (-125)
#define _SYS_UNISTD_H_ 
#define PIPE_BUF 512
#define _POSIX_SPIN_LOCKS (-1)
#define winsstr(w,s) winsnstr(w, s, -1)
#define STAILQ_FIRST(head) ((head)->stqh_first)
#define F_GETOWN 5
#define EXIT_FAILURE 1
#define ENOEXEC 8
#define WACS_BSBS NCURSES_WACS('q')
#define A_UNDERLINE NCURSES_BITS(1U,9)
#define INT8_MAX 127
#define CLD_TRAPPED 4
#define UINT_LEAST64_MAX UINT64_MAX
#define BUTTON_TRIPLE_CLICK(e,x) ((e) & NCURSES_MOUSE_MASK(x, 020))
#define WACS_LANTERN NCURSES_WACS('i')
#define _CDEFS_H_ 
#define vsnprintf(str,len,format,ap) __builtin___vsnprintf_chk (str, len, 0, __darwin_obsz(str), format, ap)
#define LC_ALL 0
#define SIOCGIFPSRCADDR _IOWR('i', 63, struct ifreq)
#define __OSX_AVAILABLE_BUT_DEPRECATED_MSG(_osxIntro,_osxDep,_iosIntro,_iosDep,_msg) 
#define _POSIX2_BC_DIM_MAX 2048
#define S_TYPEISSEM(buf) (0)
#define EILSEQ 92
#define va_start(v,l) __builtin_va_start(v,l)
#define O_NOFOLLOW_ANY 0x20000000
#define SIOCSIFDSTADDR _IOW('i', 14, struct ifreq)
#define _PC_CASE_PRESERVING 12
#define ACS_LEQUAL NCURSES_ACS('y')
#define CIRCLEQ_EMPTY(head) ((head)->cqh_first == (void *)(head))
#define ACS_PLMINUS NCURSES_ACS('g')
#define ITIMER_VIRTUAL 1
#define REG_TRACE 00400
#define timevalcmp(l,r,cmp) timercmp(l, r, cmp)
#define _POSIX_TTY_NAME_MAX 9
#define KEY_SELECT 0601
#define A_RIGHT NCURSES_BITS(1U,20)
#define _PTHREAD_CONDATTR_T 
#define mvwgetch(win,y,x) (wmove(win,y,x) == ERR ? ERR : wgetch(win))
#define __TVOS_AVAILABLE(_vers) 
#define EMLINK 31
#define __ORDER_LITTLE_ENDIAN__ 1234
#define __SIZE_MAX__ 0xffffffffffffffffUL
#define mvwaddnstr(win,y,x,str,n) (wmove(win,y,x) == ERR ? ERR : waddnstr(win,str,n))
#define add_wchstr(str) wadd_wchstr(stdscr,str)
#define FTW_CHDIR 0x08
#define mvwget_wch(win,y,x,c) (wmove(win,y,x) == ERR ? ERR : wget_wch(win,c))
#define saveterm() def_prog_mode()
#define __WCHAR_MAX__ 0x7fffffff
#define S_ISSOCK(m) (((m) & S_IFMT) == S_IFSOCK)
#define SIOCGIFADDR _IOWR('i', 33, struct ifreq)
#define _SC_2_C_DEV 19
#define FIOASYNC _IOW('f', 125, int)
#define timersub(tvp,uvp,vvp) do { (vvp)->tv_sec = (tvp)->tv_sec - (uvp)->tv_sec; (vvp)->tv_usec = (tvp)->tv_usec - (uvp)->tv_usec; if ((vvp)->tv_usec < 0) { (vvp)->tv_sec--; (vvp)->tv_usec += 1000000; } } while (0)
#define EREMOTE 71
#define _WRAPPED 0x40
#define ISLOWER_(ch) ((ch) >= 'a' && (ch) <= 'z')
#define ENOSR 98
#define INT16_MAX 32767
#define SIOCGIFWAKEFLAGS _IOWR('i', 136, struct ifreq)
#define RLIMIT_AS 5
#define LIST_FILES_MAX (1 << 16)
#define ACS_SBSB ACS_VLINE
#define __DARWIN_PDP_ENDIAN 3412
#define _WCHAR_T 
#define mvinchnstr(y,x,s,n) mvwinchnstr(stdscr,y,x,s,n)
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define __DBL_DENORM_MIN__ ((double)4.94065645841246544176568792868221372e-324L)
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8 1
#define _V6_ILP32_OFF32 __ILP32_OFF32
#define WA_PROTECT A_PROTECT
#define __DARWIN_FD_CLR(n,p) __darwin_fd_clr((n), (p))
#define __OS_EXTENSION_UNAVAILABLE(_msg) __OSX_EXTENSION_UNAVAILABLE(_msg) __IOS_EXTENSION_UNAVAILABLE(_msg)
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define __IPHONE_11_4 110400
#define STAILQ_REMOVE_AFTER(head,elm,field) do { if ((STAILQ_NEXT(elm, field) = STAILQ_NEXT(STAILQ_NEXT(elm, field), field)) == NULL) (head)->stqh_last = &STAILQ_NEXT((elm), field); } while (0)
#define NOTE_NONE 0x00000080
#define TAILQ_FOREACH_SAFE(var,head,field,tvar) for ((var) = TAILQ_FIRST((head)); (var) && ((tvar) = TAILQ_NEXT((var), field), 1); (var) = (tvar))
#define standend() wstandend(stdscr)
#define FTS_AGAIN 1
#define REG_ASSERT 15
#define __GCC_IEC_559 2
#define _SC_ATEXIT_MAX 107
#define hline_set(c,n) whline_set(stdscr,c,n)
#define winchstr(w,s) winchnstr(w, s, -1)
#define IOPOL_TYPE_VFS_IGNORE_CONTENT_PROTECTION 6
#define wstandout(win) (wattrset(win,A_STANDOUT))
#define _CS_DARWIN_USER_DIR 65536
#define REG_BADPAT 2
#define CLOCK_MONOTONIC_RAW _CLOCK_MONOTONIC_RAW
#define __FLT32X_DECIMAL_DIG__ 17
#define F_RDLCK 1
#define _IOFBF 0
#define _STRUCT_X86_CPMU_STATE64 struct __darwin_x86_cpmu_state64
#define _POSIX_SPAWN (-1)
#define __IOS_PROHIBITED 
#define _PATH_SMP_DB "/etc/spwd.db"
#define _PTHREAD_ONCE_SIG_init 0x30B1BCBA
#define __FLT_EVAL_METHOD__ 0
#define _SC_NPROCESSORS_CONF 57
#define TTYDEF_IFLAG (BRKINT | ICRNL | IMAXBEL | IXON | IXANY)
#define SHRT_MIN (-SHRT_MAX - 1)
#define _SC_SPORADIC_SERVER 81
#define KEY_MAX 0777
#define putc_unlocked(x,fp) __sputc(x, fp)
#define EPROGUNAVAIL 74
#define P_CPMVFMT 0
#define _T_PTRDIFF 
#define _PTHREAD_T 
#define LC_MESSAGES 6
#define MB_CUR_MAX __mb_cur_max
#define mvwadd_wchstr(win,y,x,s) (wmove(win,y,x) == ERR ? ERR : wadd_wchstr(win,s))
#define EVFILT_SIGNAL (-6)
#define _SC_XOPEN_STREAMS 114
#define _SC_THREAD_PRIO_INHERIT 87
#define TIOCMBIC _IOW('t', 107, int)
#define __WATCHOS_4_0 40000
#define _I386_LIMITS_H_ 
#define UNCTRL(c) (((c) - 'a' + 'A')|control_character_bit)
#define __FLT64_DECIMAL_DIG__ 17
#define _WINT_T 
#define _XOPEN_VERSION 600
#define __DTF_READALL 0x0008
#define _SC_CPUTIME 68
#define TRACE_DATABASE 0x0800
#define __disable_tail_calls 
#define FPE_NOOP 0
#define instr(s) winstr(stdscr,s)
#define _CTYPE_SW0 0x20000000L
#define _CTYPE_SW3 0xc0000000L
#define FTS_ROOTPARENTLEVEL -1
#define SIOCGIFDEVMTU _IOWR('i', 68, struct ifreq)
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define _POSIX_DELAYTIMER_MAX 32
#define _CTYPE_SWM 0xe0000000L
#define CLD_STOPPED 5
#define _CTYPE_SWS 30
#define NSIG __DARWIN_NSIG
#define LINK_MAX 32767
#define WA_ATTRIBUTES A_ATTRIBUTES
#define __IPHONE_2_0 20000
#define __IPHONE_2_1 20100
#define __IPHONE_2_2 20200
#define w_termsig w_T.w_Termsig
#define KEY_SHELP 0606
#define FNONBLOCK O_NONBLOCK
#define INT8_MIN -128
#define PTHREAD_MUTEX_DEFAULT PTHREAD_MUTEX_NORMAL
#define PTHREAD_MUTEX_POLICY_FIRSTFIT_NP 3
#define __DARWIN_SUF_1050 "$1050"
#define _OS__OSBYTEORDERI386_H 
#define _PATH_GROUP "/etc/group"
#define _SC_TRACE_USER_EVENT_MAX 130
#define LINE_MAX 2048
#define MAC_OS_X_VERSION_10_14_4 101404
#define PTHREAD_PROCESS_SHARED 1
#define REG_BADRPT 13
#define WACS_DARROW NCURSES_WACS('.')
#define SIGPROF 27
#define DST_NONE 0
#define mvinchstr(y,x,s) mvwinchstr(stdscr,y,x,s)
#define F_GETCODEDIR 72
#define EOWNERDEAD 105
#define EV_DISPATCH2 (EV_DISPATCH | EV_UDATA_SPECIFIC)
#define CIRCLEQ_NEXT(elm,field) ((elm)->field.cqe_next)
#define MSG_REMOTE_OPTS 30
#define _SC_XOPEN_UNIX 115
#define F_ALLOCATEALL 0x00000004
#define NOTE_NSECONDS 0x00000004
#define _SC_2_PBS_ACCOUNTING 60
#define BSD_KQUEUE 
#define DT_FIFO 1
#define __UINT_FAST64_MAX__ 0xffffffffffffffffULL
#define __SIG_ATOMIC_TYPE__ int
#define CAST_USER_ADDR_T(a_ptr) ((user_addr_t)((uintptr_t)(a_ptr)))
#define EV_EOF 0x8000
#define PTHREAD_MUTEX_INITIALIZER {_PTHREAD_MUTEX_SIG_init, {0}}
#define istopdir(path) ((path)[1] == '\0' && (path)[0] == '/')
#define __SIGN 0x8000
#define POLL_MSG 3
#define NCURSES_MOUSE_MASK(b,m) ((m) << (((b) - 1) * 6))
#define __DBL_MIN_10_EXP__ (-307)
#define INT16_MIN -32768
#define _CTYPE_H_ 
#define ENOTTY 25
#define SLIST_NEXT(elm,field) ((elm)->field.sle_next)
#define __FINITE_MATH_ONLY__ 0
#define AT_EACCESS 0x0010
#define KEY_RESUME 0570
#define _SC_PAGE_SIZE _SC_PAGESIZE
#define CIRCLEQ_FIRST(head) ((head)->cqh_first)
#define __cold __attribute__((__cold__))
#define ACS_S3 NCURSES_ACS('p')
#define _SC_MEMLOCK_RANGE 31
#define ENTRY_INCR 64
#define __FLT32X_MAX_EXP__ 1024
#define __DARWIN_NBBY 8
#define EBADF 9
#define _SC_XBS5_ILP32_OFFBIG 123
#define STAILQ_REMOVE(head,elm,type,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH do { if (STAILQ_FIRST((head)) == (elm)) { STAILQ_REMOVE_HEAD((head), field); } else { struct type *curelm = STAILQ_FIRST((head)); while (STAILQ_NEXT(curelm, field) != (elm)) curelm = STAILQ_NEXT(curelm, field); STAILQ_REMOVE_AFTER(head, curelm, field); } TRASHIT((elm)->field.stqe_next); } while (0) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define LIST_EMPTY(head) ((head)->lh_first == NULL)
#define F_LOG2PHYS 49
#define RUSAGE_CHILDREN -1
#define EV_FLAG1 0x2000
#define KEY_CLOSE 0544
#define _SC_SHARED_MEMORY_OBJECTS 39
#define WIFEXITED(x) (_WSTATUS(x) == 0)
#define NOTE_LEEWAY 0x00000010
#define ERANGE 34
#define __FLT32_HAS_DENORM__ 1
#define ECANCELED 89
#define DT_SOCK 12
#define S_ISGID 0002000
#define S_IFBLK 0060000
#define _POSIX_SYMLINK_MAX 255
#define CIRCLEQ_CHECK_NEXT(head,elm,field) 
#define CSTART CTRL('q')
#define TIOCPKT _IOW('t', 112, int)
#define __DECONST(type,var) __CAST_AWAY_QUALIFIER(var, const, type)
#define __alloca(size) __builtin_alloca(size)
#define F_RDADVISE 44
#define __UINT_FAST8_MAX__ 0xff
#define __WATCHOS_PROHIBITED 
#define NCURSES_DOUBLE_CLICKED 010L
#define KEY_MOVE 0556
#define _LIMITS_H___ 
#define DST_AUST 2
#define SA_RESTART 0x0002
#define _SYS_IOCTL_H_ 
#define ENOTRECOVERABLE 104
#define __FLT32_MAX_10_EXP__ 38
#define mvin_wch(y,x,c) mvwin_wch(stdscr,y,x,c)
#define UTIL_LOCKER 5
#define _FILESEC_T 
#define INT_FAST8_MAX INT8_MAX
#define _POSIX_V7_LP64_OFF64 __LP64_OFF64
#define _XOPEN_XCU_VERSION 4
#define mvwaddnwstr(win,y,x,wstr,n) (wmove(win,y,x) == ERR ? ERR : waddnwstr(win,wstr,n))
#define FTW_MOUNT 0x02
#define CONTROL(c) ((c) & 0x1f)
#define LIST_CHECK_PREV(elm,field) 
#define ETXTBSY 26
#define EF_IS_PURGEABLE 0x00000008
#define SIOCSIFNETMASK _IOW('i', 22, struct ifreq)
#define mvwvline(win,y,x,c,n) (wmove(win,y,x) == ERR ? ERR : wvline(win,c,n))
#define fixterm() reset_prog_mode()
#define WACS_RTEE WACS_SBSS
#define __INT8_C(c) c
#define _PW_KEYBYNAME '1'
#define ACCESSX_MAX_DESCRIPTORS 100
#define _U_LONG 
#define EVFILT_SYSCOUNT 17
#define mvinnstr(y,x,s,n) mvwinnstr(stdscr,y,x,s,n)
#define SIGCONT 19
#define __INT_LEAST8_WIDTH__ 8
#define mvwinchstr(win,y,x,s) (wmove(win,y,x) == ERR ? ERR : winchstr(win,s))
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffULL
#define FTS_CHDIRFD 0x08
#define _ERRNO_T 
#define LARGESEL 1000
#define A_PROTECT NCURSES_BITS(1U,16)
#define F_GETFL 3
#define KEY_UNDO 0630
#define _STDLIB_H_ 
#define WAKEMON_GET_PARAMS 0x04
#define SIOCAIFADDR _IOW('i', 26, struct ifaliasreq)
#define __restrict restrict
#define NFDBITS __DARWIN_NFDBITS
#define IOC_IN (__uint32_t)0x80000000
#define __SHRT_MAX__ 0x7fff
#define w_stopval w_S.w_Stopval
#define __LDBL_MAX__ 1.18973149535723176502126385303097021e+4932L
#define wdeleteln(win) winsdelln(win,-1)
#define PRIO_PGRP 1
#define __exported_pop _Pragma("GCC visibility pop")
#define BUTTON_PRESS(e,x) ((e) & NCURSES_MOUSE_MASK(x, 002))
#define __SCCSID(s) __IDSTRING(sccsid,s)
#define __DARWIN_C_ANSI 010000L
#define __FLT64X_MAX_10_EXP__ 4932
#define CIRCLEQ_PREV(elm,field) ((elm)->field.cqe_prev)
#define mvwgetnstr(win,y,x,str,n) (wmove(win,y,x) == ERR ? ERR : wgetnstr(win,str,n))
#define NOTE_EXIT_DETAIL 0x02000000
#define S_IXOTH 0000001
#define FTS_DC 2
#define __DARWIN_EXTSN(sym) __asm("_" __STRING(sym) __DARWIN_SUF_EXTSN)
#define SIGTTOU 22
#define FTS_DP 6
#define __IPHONE_10_0 100000
#define __IPHONE_10_1 100100
#define __IPHONE_10_2 100200
#define __IPHONE_10_3 100300
#define _BSD_MACHINE_SIGNAL_H_ 
#define _POSIX_SYNCHRONIZED_IO (-1)
#define __LDBL_IS_IEC_60559__ 2
#define _PTHREAD_MUTEX_T 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_1(x) 
#define TRACEBUF 
#define _SC_THREAD_KEYS_MAX 86
#define S_TYPEISSHM(buf) (0)
#define TIOCIXOFF _IO('t', 128)
#define _POSIX2_UPE 200112L
#define STAILQ_FOREACH_SAFE(var,head,field,tvar) for ((var) = STAILQ_FIRST((head)); (var) && ((tvar) = STAILQ_NEXT((var), field), 1); (var) = (tvar))
#define __FLT64X_HAS_QUIET_NAN__ 1
#define __WATCHOS_5_1 50100
#define __WATCHOS_5_3 50300
#define _SC_AIO_LISTIO_MAX 42
#define insnstr(s,n) winsnstr(stdscr,s,n)
#define __SNPT 0x0800
#define DT_DIR 4
#define _POSIX_VERSION 200112L
#define howmany(x,y) __DARWIN_howmany(x, y)
#define NAME_MAX 255
#define KEVENT_FLAG_NONE 0x000000
#define WA_DIM A_DIM
#define ___POSIX_C_DEPRECATED_STARTING_200809L 
#define __UINT_LEAST8_MAX__ 0xff
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define __alloc_size(...) __attribute__((alloc_size(__VA_ARGS__)))
#define RENAME_EXCL 0x00000004
#define __FLT128_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F128
#define CIRCLEQ_INSERT_BEFORE(head,listelm,elm,field) do { CIRCLEQ_CHECK_PREV(head, listelm, field); (elm)->field.cqe_next = (listelm); (elm)->field.cqe_prev = (listelm)->field.cqe_prev; if ((listelm)->field.cqe_prev == (void *)(head)) (head)->cqh_first = (elm); else (listelm)->field.cqe_prev->field.cqe_next = (elm); (listelm)->field.cqe_prev = (elm); } while (0)
#define _SC_V6_LP64_OFF64 105
#define bcopy(src,dest,...) __builtin___memmove_chk (dest, src, __VA_ARGS__, __darwin_obsz0 (dest))
#define FTS_COMFOLLOW 0x001
#define wattroff(win,at) wattr_off(win, NCURSES_CAST(attr_t, at), NULL)
#define _SC_SYMLOOP_MAX 120
#define USER_FSIGNATURES_CDHASH_LEN 20
#define __APPLE_CC__ 1
#define __UINTMAX_TYPE__ long unsigned int
#define EINPROGRESS 36
#define TIOCSETAF _IOW('t', 22, struct termios)
#define LIST_FIRST(head) ((head)->lh_first)
#define UUID_DEFINE(name,u0,u1,u2,u3,u4,u5,u6,u7,u8,u9,u10,u11,u12,u13,u14,u15) static const uuid_t name __attribute__ ((unused)) = {u0,u1,u2,u3,u4,u5,u6,u7,u8,u9,u10,u11,u12,u13,u14,u15}
#define __result_use_check __attribute__((__warn_unused_result__))
#define INT_FAST8_MIN INT8_MIN
#define sprintf(str,...) __builtin___sprintf_chk (str, 0, __darwin_obsz(str), __VA_ARGS__)
#define PRIO_USER 2
#define _PC_NAME_CHARS_MAX 10
#define _SC_SYNCHRONIZED_IO 40
#define ENOPROTOOPT 42
#define __APPLE_API_STANDARD 
#define EVFILT_THREADMARKER EVFILT_SYSCOUNT
#define SLIST_INSERT_HEAD(head,elm,field) do { SLIST_NEXT((elm), field) = SLIST_FIRST((head)); SLIST_FIRST((head)) = (elm); } while (0)
#define IOPOL_APPLICATION IOPOL_STANDARD
#define WCHAR_MIN (-WCHAR_MAX-1)
#define __API_DEPRECATED_BEGIN(...) 
#define SA_USERTRAMP 0x0100
#define __FLT_EVAL_METHOD_TS_18661_3__ 0
#define TAILQ_INSERT_AFTER(head,listelm,elm,field) do { TAILQ_CHECK_NEXT(listelm, field); if ((TAILQ_NEXT((elm), field) = TAILQ_NEXT((listelm), field)) != NULL) TAILQ_NEXT((elm), field)->field.tqe_prev = &TAILQ_NEXT((elm), field); else { (head)->tqh_last = &TAILQ_NEXT((elm), field); QMD_TRACE_HEAD(head); } TAILQ_NEXT((listelm), field) = (elm); (elm)->field.tqe_prev = &TAILQ_NEXT((listelm), field); QMD_TRACE_ELEM(&(elm)->field); QMD_TRACE_ELEM(&listelm->field); } while (0)
#define _UUID_UUID_H 
#define ULONG_LONG_MAX (LONG_LONG_MAX * 2ULL + 1ULL)
#define inchnstr(s,n) winchnstr(stdscr,s,n)
#define _SYS_IOCCOM_H_ 
#define _USER_SIGNAL_H 
#define ISFUNC 0
#define TRACE_MAXIMUM ((1 << TRACE_SHIFT) - 1)
#define O_NOCTTY 0x00020000
#define getn_wstr(t,n) wgetn_wstr(stdscr,t,n)
#define _PC_AUTH_OPAQUE_NP 14
#define attr_get(ap,cp,o) wattr_get(stdscr,ap,cp,o)
#define NULL ((void *)0)
#define __UINT32_MAX__ 0xffffffffU
#define NNN_PLUG 2
#define __bool_true_false_are_defined 1
#define _POSIX_READER_WRITER_LOCKS 200112L
#define __PTHREAD_MUTEX_SIZE__ 56
#define winsertln(win) winsdelln(win,1)
#define __DARWIN_UNIX03 1
#define _POSIX_AIO_MAX 1
#define mvin_wchstr(y,x,c) mvwin_wchstr(stdscr,y,x,c)
#define TRACE_CHARPUT 0x0010
#define UTIL_LAUNCH 6
#define _POSIX_PIPE_BUF 512
#define PASS_MAX 128
#define SIGUSR1 30
#define COLOR_256 256
#define MSG_APP_NAME 32
#define SIGEV_SIGNAL 1
#define __printflike(fmtarg,firstvararg) __attribute__((__format__ (__printf__, fmtarg, firstvararg)))
#define SIGINFO 29
#define ENOTEMPTY 66
#define __TVOS_11_0 110000
#define __TVOS_11_1 110100
#define __TVOS_11_2 110200
#define SIOCSIFMEDIA _IOWR('i', 55, struct ifreq)
#define EPROTONOSUPPORT 43
#define UINT_FAST16_MAX UINT16_MAX
#define _POSIX_REALTIME_SIGNALS (-1)
#define __FLT128_MIN_EXP__ (-16381)
#define SLIST_REMOVE(head,elm,type,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH do { if (SLIST_FIRST((head)) == (elm)) { SLIST_REMOVE_HEAD((head), field); } else { struct type *curelm = SLIST_FIRST((head)); while (SLIST_NEXT(curelm, field) != (elm)) curelm = SLIST_NEXT(curelm, field); SLIST_REMOVE_AFTER(curelm, field); } TRASHIT((elm)->field.sle_next); } while (0) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define NCURSES_MOUSE_VERSION 1
#define IOPOL_PASSIVE 2
#define insch(c) winsch(stdscr,c)
#define IOPOL_ATIME_UPDATES_DEFAULT 0
#define __WINT_MIN__ (-__WINT_MAX__ - 1)
#define KEY_SSUSPEND 0625
#define F_ADDFILESIGS 61
#define feof_unlocked(p) __sfeof(p)
#define WUNTRACED 0x00000002
#define EPROTOTYPE 41
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_2(x) 
#define _SC_SHELL 78
#define FTW_SLN 6
#define __pure2 __attribute__((__const__))
#define NZERO 20
#define NUM_EVENT_SLOTS 1
#define NCURSES_COLOR_T short
#define UINT16_C(v) (v)
#define BYTE_ORDER __DARWIN_BYTE_ORDER
#define SF_DATALESS 0x40000000
#define FTS_NS 10
#define KEY_CREATE 0547
#define __FLT128_MIN_10_EXP__ (-4931)
#define IOPOL_VFS_IGNORE_PERMISSIONS_OFF 0
#define WA_ALTCHARSET A_ALTCHARSET
#define __OSX_DEPRECATED(_start,_dep,_msg) 
#define _SUBWIN 0x01
#define __DARWIN_CTYPE_inline __header_inline
#define __FLT32X_IS_IEC_60559__ 2
#define _STRUCT_MCONTEXT_AVX512_64 struct __darwin_mcontext_avx512_64
#define ENOMSG 91
#define _PC_PRIO_IO 19
#define mvvline(y,x,c,n) mvwvline(stdscr,y,x,c,n)
#define CLNEXT CTRL('v')
#define SF_FIRMLINK 0x00800000
#define htonl(x) __DARWIN_OSSwapInt32(x)
#define __INT_LEAST16_WIDTH__ 16
#define htons(x) __DARWIN_OSSwapInt16(x)
#define ERPCMISMATCH 73
#define _POSIX_AIO_LISTIO_MAX 2
#define _SYS_SELECT_H_ 
#define timeout(delay) wtimeout(stdscr,delay)
#define __AVAILABILITY_INTERNAL_WEAK_IMPORT __attribute__((weak_import))
#define __DARWIN_CTYPE_TOP_inline __header_inline
#define ENOTDIR 20
#define _STRUCT_MCONTEXT _STRUCT_MCONTEXT64
#define COLOR_BLACK 0
#define __SCHAR_MAX__ 0x7f
#define __FLT128_MANT_DIG__ 113
#define STAILQ_HEAD(name,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct name { struct type *stqh_first; struct type **stqh_last; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define IOC_INOUT (IOC_IN|IOC_OUT)
#define __IPHONE_6_0 60000
#define __IPHONE_6_1 60100
#define _XBS5_LPBIG_OFFBIG __LPBIG_OFFBIG
#define __WCHAR_MIN__ (-__WCHAR_MAX__ - 1)
#define EVFILT_VM (-12)
#define FTS_SEEDOT 0x020
#define ACS_TTEE NCURSES_ACS('w')
#define _POSIX_SHARED_MEMORY_OBJECTS (-1)
#define WA_NORMAL A_NORMAL
#define _POSIX2_PBS_MESSAGE (-1)
#define FP_PREC_24B 0
#define PRIO_DARWIN_THREAD 3
#define A_INVIS NCURSES_BITS(1U,15)
#define _SC_2_UPE 25
#define __INT64_C(c) c ## LL
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_15(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_16(x) x
#define _SC_TIMERS 41
#define SA_SIGINFO 0x0040
#define REG_INVARG 16
#define UTIL_TAR 4
#define _CS_XBS5_LP64_OFF64_LDFLAGS 29
#define REG_EBRACE 9
#define inwstr(c) winwstr(stdscr,c)
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define _STRUCT_LAST_BRANCH_RECORD struct __last_branch_record
#define KEY_SMOVE 0613
#define MSG_ORDER 36
#define WSTOPPED 0x00000008
#define EQFULL 106
#define _STRUCT_X86_FLOAT_STATE32 struct __darwin_i386_float_state
#define __MAC_11_1 110100
#define _STRUCT_X86_THREAD_STATE32 struct __darwin_i386_thread_state
#define _STRUCT_X86_INSTRUCTION_STATE struct __x86_instruction_state
#define _POSIX_TIMEOUTS (-1)
#define WACS_BSSS NCURSES_WACS('w')
#define HTONL(x) (x) = htonl((__uint32_t)x)
#define SF_IMMUTABLE 0x00020000
#define WACS_SSBB NCURSES_WACS('m')
#define HTONS(x) (x) = htons((__uint16_t)x)
#define _FORTIFY_SOURCE 2
#define EF_IS_SYNC_ROOT 0x00000004
#define MSG_DIR_CHANGED 42
#define IOPOL_VFS_SKIP_MTIME_UPDATE_ON 1
#define TAILQ_CHECK_HEAD(head,field) 
#define TIOCSTART _IO('t', 110)
#define mvwinch(win,y,x) (wmove(win,y,x) == ERR ? NCURSES_CAST(chtype, ERR) : winch(win))
#define MAC_OS_X_VERSION_10_10_2 101002
#define MAC_OS_X_VERSION_10_10_3 101003
#define _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS 5
#define KEY_SRSUME 0623
#define STDOUT_FILENO 1
#define _SC_2_C_BIND 18
#define _POSIX_LINK_MAX 8
#define FTS_SL 12
#define MSG_QUIT_ALL 15
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_4(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_2(x) 
#define KEY_SUNDO 0626
#define _RPERM_OK (1<<19)
#define KEY_REFERENCE 0564
#define SI_USER 0x10001
#define _PW_KEYBYNUM '2'
#define inchstr(s) winchstr(stdscr,s)
#define EMULTIHOP 95
#define __API_UNAVAILABLE_BEGIN_GET_MACRO(...) 
#define ACS_BTEE NCURSES_ACS('v')
#define IOPOL_TYPE_VFS_IGNORE_PERMISSIONS 7
#define S_IRWXO 0000007
#define _INT32_T 
#define deleteln() winsdelln(stdscr,-1)
#define S_IRWXU 0000700
#define SIOCSIFKPI _IOW('i', 134, struct ifreq)
#define F_NONE 0x00
#define _XOPEN_CRYPT (1)
#define WACS_PLMINUS NCURSES_WACS('g')
#define SIOCIFGCLONERS _IOWR('i', 129, struct if_clonereq)
#define PTHREAD_COND_INITIALIZER {_PTHREAD_COND_SIG_init, {0}}
#define _STRUCT_SIGALTSTACK struct __darwin_sigaltstack
#define __sclearerr(p) ((void)((p)->_flags &= ~(__SERR|__SEOF)))
#define _STRUCT_MCONTEXT64_FULL struct __darwin_mcontext64_full
#define TRASHIT(x) 
#define RLIM_SAVED_MAX RLIM_INFINITY
#define _POSIX2_BC_STRING_MAX 1000
#define _STRUCT_X86_FLOAT_STATE64 struct __darwin_x86_float_state64
#define _SYS_TTYCOM_H_ 
#define _STRUCT_X86_THREAD_STATE64 struct __darwin_x86_thread_state64
#define mvins_nwstr(y,x,t,n) mvwins_nwstr(stdscr,y,x,t,n)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_2(x) x
#define getchar_unlocked() getc_unlocked(stdin)
#define CSTOP CTRL('s')
#define KEY_SCANCEL 0573
#define __DARWIN_ONLY_UNIX_CONFORMANCE 1
#define FIOSETOWN _IOW('f', 124, int)
#define CLOCK_REALTIME _CLOCK_REALTIME
#define __FLT32X_MANT_DIG__ 53
#define C_SOC (C_PIP + 1)
#define SF_ARCHIVED 0x00010000
#define mvwadd_wch(win,y,x,c) (wmove(win,y,x) == ERR ? ERR : wadd_wch(win,c))
#define ETIMEDOUT 60
#define mvaddch(y,x,ch) mvwaddch(stdscr,y,x,ch)
#define WACS_PI NCURSES_WACS('{')
#define _SC_VERSION 8
#define DIRBLKSIZ 1024
#define SLIST_INSERT_AFTER(slistelm,elm,field) do { SLIST_NEXT((elm), field) = SLIST_NEXT((slistelm), field); SLIST_NEXT((slistelm), field) = (elm); } while (0)
#define MSG_NOCHANGE 41
#define __USER_LABEL_PREFIX__ _
#define _SC_JOB_CONTROL 6
#define RLIM_INFINITY (((__uint64_t)1 << 63) - 1)
#define SIOCSETVLAN SIOCSIFVLAN
#define SF_NOUNLINK 0x00100000
#define mvadd_wch(y,x,c) mvwadd_wch(stdscr,y,x,c)
#define addnstr(str,n) waddnstr(stdscr,str,n)
#define _SC_SIGQUEUE_MAX 51
#define CHAR_BIT __CHAR_BIT__
#define ENEEDAUTH 81
#define __MAC_10_10_2 101002
#define __MAC_10_10_3 101003
#define mvwinnwstr(win,y,x,c,n) (wmove(win,y,x) == ERR ? ERR : winnwstr(win,c,n))
#define FIODTYPE _IOR('f', 122, int)
#define _UNISTD_H_ 
#define win_wchstr(w,c) win_wchnstr(w,c,-1)
#define _SYS_QUEUE_H_ 
#define __SWR 0x0008
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11(x) x
#define F_BARRIERFSYNC 85
#define _SC_BC_SCALE_MAX 11
#define PTHREAD_CANCEL_DEFERRED 0x02
#define SIOCSIFMAC _IOW('i', 131, struct ifreq)
#define __END_DECLS 
#define mvinsstr(y,x,s) mvwinsstr(stdscr,y,x,s)
#define DIR_OR_DIRLNK 0x01
#define KEY_SPREVIOUS 0616
#define __FLT64X_EPSILON__ 1.08420217248550443400745280086994171e-19F64x
#define _POSIX_V6_LPBIG_OFFBIG __LPBIG_OFFBIG
#define SIOCGIFCAP _IOWR('i', 91, struct ifreq)
#define __CONCAT(x,y) x ## y
#define ntohll(x) __DARWIN_OSSwapInt64(x)
#define CREPRINT CTRL('r')
#define WCONTINUED 0x00000010
#define __DARWIN_STRUCT_STAT64_TIMES struct timespec st_atimespec; struct timespec st_mtimespec; struct timespec st_ctimespec; struct timespec st_birthtimespec;
#define mvin_wchnstr(y,x,c,n) mvwin_wchnstr(stdscr,y,x,c,n)
#define refresh() wrefresh(stdscr)
#define bkgrndset(c) wbkgrndset(stdscr,c)
#define F_PEOFPOSMODE 3
#define WACS_S1 NCURSES_WACS('o')
#define WACS_S3 NCURSES_WACS('p')
#define __STDC_HOSTED__ 1
#define EVFILT_AIO (-3)
#define getch() wgetch(stdscr)
#define WACS_S9 NCURSES_WACS('s')
#define FIOCLEX _IO('f', 1)
#define WAKEMON_DISABLE 0x02
#define ILL_ILLOPC 1
#define _SC_2_PBS_CHECKPOINT 61
#define UTIL_ATOOL 1
#define UTIL_NMV 17
#define RLIM_SAVED_CUR RLIM_INFINITY
#define _STDIO_H_ 
#define _SECURE__COMMON_H_ 
#define memmove(dest,...) __builtin___memmove_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define UID_MAX 2147483647U
#define TRACE_TIMES 0x0001
#define _SC_2_PBS_MESSAGE 63
#define ENTSORT(pdents,ndents,entrycmpfn) qsort((pdents), (ndents), sizeof(*(pdents)), (entrycmpfn))
#define CTIME 0
#define _READ_OK (1<<9)
#define MAC_OS_X_VERSION_10_12_1 101201
#define SIOCGIFALTMTU _IOWR('i', 72, struct ifreq)
#define MSG_COPY_NAME 21
#define TIOCM_RTS 0004
#define LIST_INSERT_BEFORE(listelm,elm,field) do { LIST_CHECK_PREV(listelm, field); (elm)->field.le_prev = (listelm)->field.le_prev; LIST_NEXT((elm), field) = (listelm); *(listelm)->field.le_prev = (elm); (listelm)->field.le_prev = &LIST_NEXT((elm), field); } while (0)
#define MAC_OS_X_VERSION_10_12_4 101204
#define UINT64_MAX 18446744073709551615ULL
#define TMP_MAX 308915776
#define TIOCGDRAINWAIT _IOR('t', 86, int)
#define FNDELAY O_NONBLOCK
#define SIGURG 16
#define _SC_TZNAME_MAX 27
#define _POSIX2_BC_SCALE_MAX 99
#define _PASSWORD_NOCHG 0x04
#define _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS 12
#define __options_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_open __enum_options
#define memcpy(dest,...) __builtin___memcpy_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define S_TYPEISMQ(buf) (0)
#define __IPHONE_14_0 140000
#define __IPHONE_14_1 140100
#define __IPHONE_14_3 140300
#define ACS_ULCORNER NCURSES_ACS('l')
#define __IPHONE_14_5 140500
#define __DBL_DIG__ 15
#define _SYS__ENDIAN_H_ 
#define insertln() winsdelln(stdscr,1)
#define KEY_SIC 0610
#define strncat(dest,...) __builtin___strncat_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define __FLT32_DIG__ 6
#define _POSIX2_SW_DEV 200112L
#define EINTR 4
#define C_MIS (C_LNK + 1)
#define _TIME_H_ 
#define _SC_TRACE_EVENT_FILTER 98
#define __SWIFT_UNAVAILABLE_MSG(_msg) 
#define __FLT_EPSILON__ 1.19209289550781250000000000000000000e-7F
#define LC_COLLATE 1
#define INT32_MIN (-INT32_MAX-1)
#define vsprintf(str,format,ap) __builtin___vsprintf_chk (str, 0, __darwin_obsz(str), format, ap)
#define SS_DISABLE 0x0004
#define ENOLINK 97
#define __scanflike(fmtarg,firstvararg) __attribute__((__format__ (__scanf__, fmtarg, firstvararg)))
#define _SC_TIMER_MAX 52
#define __SHRT_WIDTH__ 16
#define __TVOS_9_0 90000
#define __TVOS_9_1 90100
#define __TVOS_9_2 90200
#define _Nonnull 
#define IOPOL_IMPORTANT 1
#define _XBS5_LP64_OFF64 __LP64_OFF64
#define UTIL_SH 13
#define MSG_RM_TMP 39
#define KEY_EIC 0514
#define FILE_MIME_OPTS "-bIL"
#define _PW_KEYBYUID '3'
#define mvwins_nwstr(win,y,x,t,n) (wmove(win,y,x) == ERR ? ERR : wins_nwstr(win,t,n))
#define SIOCAUTONETMASK _IOW('i', 39, struct ifreq)
#define F_THAW_FS 54
#define __FLT32_IS_IEC_60559__ 2
#define TIOCPTYGNAME _IOC(IOC_OUT, 't', 83, 128)
#define PTHREAD_CANCEL_ASYNCHRONOUS 0x00
#define __PTHREAD_RWLOCK_SIZE__ 192
#define F_SETBACKINGSTORE 70
#define RFILTER '\\'
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13(x) x
#define ENOTCONN 57
#define KEY_COPY 0546
#define WACS_DIAMOND NCURSES_WACS('`')
#define ILL_ILLADR 5
#define __LDBL_MIN__ 3.36210314311209350626267781732175260e-4932L
#define __STDC_UTF_16__ 1
#define __DBL_IS_IEC_60559__ 2
#define __API_DEPRECATED_MSG_GET_MACRO(...) 
#define SIGQUIT 3
#define __API_AVAILABLE_GET_MACRO(...) 
#define O_EVTONLY 0x00008000
#define MSG_0_SELECTED 3
#define NL_ARGMAX 9
#define __sfeof(p) (((p)->_flags & __SEOF) != 0)
#define SYNC_VOLUME_FULLSYNC 0x01
#define mvinsnstr(y,x,s,n) mvwinsnstr(stdscr,y,x,s,n)
#define __APPLE_API_EVOLVING 
#define _PASSWD "passwd"
#define FTW_DEPTH 0x04
#define EF_NO_XATTRS 0x00000002
#define getsyx(y,x) do { if (newscr) { if (is_leaveok(newscr)) (y) = (x) = -1; else getyx(newscr,(y), (x)); } } while(0)
#define SIOCGIFMTU _IOWR('i', 51, struct ifreq)
#define _BLKCNT_T 
#define _POSIX_NAME_MAX 14
#define WACS_VLINE WACS_SBSB
#define MSG_LAZY 37
#define scroll(win) wscrl(win,1)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_1(x) 
#define TAILQ_PREV(elm,headname,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH (*(((struct headname *)((elm)->field.tqe_prev))->tqh_last)) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define TIOCNXCL _IO('t', 14)
#define TOK_MNT 2
#define __strong 
#define _REXT_OK (1<<17)
#define _HASMOVED 0x20
#define SIOCSIFFLAGS _IOW('i', 16, struct ifreq)
#define st_ctime st_ctimespec.tv_sec
#define COLOR_BLUE 4
#define TIOCMGDTRWAIT _IOR('t', 90, int)
#define __FLT64X_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951F64x
#define slk_attr_off(a,v) ((v) ? ERR : slk_attroff(a))
#define __MAC_10_1 1010
#define EPERM 1
#define SIOCGLOWAT _IOR('s', 3, int)
#define EBADMSG 94
#define O_EXLOCK 0x00000020
#define _STDDEF_H 
#define S_IWUSR 0000200
#define _SC_MEMLOCK 30
#define __DARWIN_BYTE_ORDER __DARWIN_LITTLE_ENDIAN
#define __MAC_10_3 1030
#define KEY_END 0550
#define REG_ENOSYS (-1)
#define _VA_LIST_DEFINED 
#define WACS_SSSB NCURSES_WACS('t')
#define _POSIX2_PBS_ACCOUNTING (-1)
#define __FLT32X_HAS_INFINITY__ 1
#define NCURSES_SIZE_T short
#define __enum_closed_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_closed
#define __INT32_MAX__ 0x7fffffff
#define FILE_SCANNED 0x20
#define WACS_SSSS NCURSES_WACS('n')
#define TRACE_UPDATE 0x0004
#define _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS 6
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_1(x) 
#define CIRCLEQ_LAST(head) ((head)->cqh_last)
#define EVFILT_VNODE (-4)
#define SIOCGIFVLAN _IOWR('i', 127, struct ifreq)
#define __AVAILABILITY_VERSIONS__ 
#define KEY_EOL 0517
#define __INT_WIDTH__ 32
#define __SIZEOF_LONG__ 8
#define __DARWIN_1050INODE64(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_64_BIT_INO_T)
#define O_NDELAY O_NONBLOCK
#define O_ASYNC 0x00000040
#define DPRINTF_S(x) 
#define __AVAILABILITY_INTERNAL_REGULAR 
#define SIOCGIFMEDIA _IOWR('i', 56, struct ifmediareq)
#define SIG_ERR ((void (*)(int))-1)
#define MSG_ACCESS 24
#define SIGEV_NONE 0
#define __DARWIN_WEOF ((__darwin_wint_t)-1)
#define PTHREAD_MUTEX_NORMAL 0
#define MSG_FIRST 38
#define __SPI_DEPRECATED_WITH_REPLACEMENT(...) 
#define _CS_POSIX_V6_LP64_OFF64_LIBS 10
#define __APPLE__ 1
#define __UINT16_C(c) c
#define ELOOP 62
#define NCURSES_VERSION_PATCH 20081102
#define get_wstr(t) wget_wstr(stdscr,t)
#define __WATCHOS_7_2 70200
#define ru_first ru_ixrss
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10_2(x) x
#define CFLUSH CDISCARD
#define NOTE_TRACK 0x00000001
#define _INTPTR_T 
#define _SC_TRACE_LOG 100
#define mvget_wstr(y,x,t) mvwget_wstr(stdscr,y,x,t)
#define __DECIMAL_DIG__ 21
#define _POSIX2_RE_DUP_MAX 255
#define _PATH_MASTERPASSWD_LOCK "/etc/ptmp"
#define NOTE_TRIGGER 0x01000000
#define HTONLL(x) (x) = htonll((__uint64_t)x)
#define T_MOD 2
#define LOCK_EX 0x02
#define w_retcode w_T.w_Retcode
#define WA_TOP A_TOP
#define F_DUPFD 0
#define __FLT64_EPSILON__ 2.22044604925031308084726333618164062e-16F64
#define ACS_UARROW NCURSES_ACS('-')
#define _ANSI_STDARG_H_ 
#define __APPLE_API_STABLE 
#define TAILQ_INSERT_TAIL(head,elm,field) do { TAILQ_NEXT((elm), field) = NULL; (elm)->field.tqe_prev = (head)->tqh_last; *(head)->tqh_last = (elm); (head)->tqh_last = &TAILQ_NEXT((elm), field); QMD_TRACE_HEAD(head); QMD_TRACE_ELEM(&(elm)->field); } while (0)
#define EVFILT_MACHPORT (-8)
#define CPF_MASK (CPF_OVERWRITE|CPF_IGNORE_MODE)
#define O_EXCL 0x00000800
#define MAX_INPUT 1024
#define _SC_GETGR_R_SIZE_MAX 70
#define __FLT128_IS_IEC_60559__ 2
#define __SCHED_PARAM_SIZE__ 4
#define ACS_DEGREE NCURSES_ACS('f')
#define ESTALE 70
#define ACS_BOARD NCURSES_ACS('h')
#define _SC_2_SW_DEV 24
#define WACS_PLUS WACS_SSSS
#define _SYS_ERRNO_H_ 
#define LC_TIME 5
#define FIONREAD _IOR('f', 127, int)
#define _PC_FILESIZEBITS 18
#define ENV_PAGER 3
#define REG_ATOI 255
#define NOTE_OOB 0x00000002
#define SIG_ATOMIC_MIN INT32_MIN
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_1(x) 
#define _XBS5_ILP32_OFF32 __ILP32_OFF32
#define SI_QUEUE 0x10002
#define __FLT64X_MIN_10_EXP__ (-4931)
#define RLIMIT_CORE 4
#define ARG_MAX (1024 * 1024)
#define __LDBL_HAS_QUIET_NAN__ 1
#define BUTTON3_CLICKED NCURSES_MOUSE_MASK(3, NCURSES_BUTTON_CLICKED)
#define INT64_C(v) (v ## LL)
#define KEY_MESSAGE 0555
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_4(x) x
#define KEY_SEXIT 0604
#define S_ISDIR(m) (((m) & S_IFMT) == S_IFDIR)
#define ACS_CKBOARD NCURSES_ACS('a')
#define _DELETE_OK (1<<12)
#define MAC_OS_X_VERSION_10_14_1 101401
#define MAC_OS_X_VERSION_10_14_6 101406
#define KEY_STAB 0524
#define C_HRD (C_FIL + 1)
#define _CTYPE_R 0x00040000L
#define WA_HORIZONTAL A_HORIZONTAL
#define SIGIO 23
#define __FLT64_MANT_DIG__ 53
#define _CTYPE_S 0x00004000L
#define xerror() perror(xitoa(__LINE__))
#define EV_DELETE 0x0002
#define __API_UNAVAILABLE_GET_MACRO(...) 
#define FTS_NOSTAT 0x008
#define EAUTH 80
#define EVFILT_PROC (-5)
#define __va_list__ 
#define strncpy(dest,...) __builtin___strncpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define _SC_XOPEN_VERSION 116
#define _FSBLKCNT_T 
#define _POSIX_NO_TRUNC 200112L
#define O_SYMLINK 0x00200000
#define _POSIX_REGEXP 200112L
#define KEY_A1 0534
#define __SPI_AVAILABLE(...) 
#define IOCPARM_MAX (IOCPARM_MASK + 1)
#define WA_LOW A_LOW
#define QMD_TRACE_HEAD(head) 
#define O_RDWR 0x0002
#define _STRUCT_MCONTEXT64 struct __darwin_mcontext64
#define NOTE_REVOKE 0x00000040
#define __FLT64X_MANT_DIG__ 64
#define ECHILD 10
#define NOTE_SECONDS 0x00000001
#define TAILQ_REMOVE(head,elm,field) do { TAILQ_CHECK_NEXT(elm, field); TAILQ_CHECK_PREV(elm, field); if ((TAILQ_NEXT((elm), field)) != NULL) TAILQ_NEXT((elm), field)->field.tqe_prev = (elm)->field.tqe_prev; else { (head)->tqh_last = (elm)->field.tqe_prev; QMD_TRACE_HEAD(head); } *(elm)->field.tqe_prev = TAILQ_NEXT((elm), field); TRASHIT((elm)->field.tqe_next); TRASHIT((elm)->field.tqe_prev); QMD_TRACE_ELEM(&(elm)->field); } while (0)
#define _SC_XBS5_LPBIG_OFFBIG 125
#define L_tmpnam 1024
#define __DYNAMIC__ 1
#define REG_ERANGE 11
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
#define SA_ONSTACK 0x0001
#define _CS_XBS5_LP64_OFF64_CFLAGS 28
#define QUAD_MAX LLONG_MAX
#define _PATH_MP_DB "/etc/pwd.db"
#define UINT_LEAST8_MAX UINT8_MAX
#define _INO_T 
#define __MMX__ 1
#define chgat(n,a,c,o) wchgat(stdscr,n,a,c,o)
#define NOTE_EXIT 0x80000000
#define COLOR_CYAN 6
#define NCURSES_VERSION "5.7"
#define PTHREAD_CANCEL_ENABLE 0x01
#define NOTE_ATTRIB 0x00000008
#define COLOR_MAGENTA 5
#define _POSIX_THREAD_THREADS_MAX 64
#define FD_SET(n,p) __DARWIN_FD_SET(n, p)
#define __FLT_HAS_DENORM__ 1
#define __SIZEOF_LONG_DOUBLE__ 16
#define DT_REG 8
#define __compiler_barrier() __asm__ __volatile__("" ::: "memory")
#define __MAC_10_14_4 101404
#define __MAC_10_14_6 101406
#define CQUIT 034
#define NOTE_SIGNAL 0x08000000
#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
#define waddwstr(win,wstr) waddnwstr(win,wstr,-1)
#define T_CHANGE 1
#define LOCK_NB 0x04
#define color_set(c,o) wcolor_set(stdscr,c,o)
#define _SC_ARG_MAX 1
#define IOC_OUT (__uint32_t)0x40000000
#define INT_FAST16_MIN INT16_MIN
#define _SC_V6_ILP32_OFF32 103
#define NNN_PIPE 7
#define DT_BLK 6
#define EVFILT_USER (-10)
#define NOTE_WRITE 0x00000002
#define mvwhline_set(win,y,x,c,n) (wmove(win,y,x) == ERR ? ERR : whline_set(win,c,n))
#define __GETHOSTUUID_H 
#define CIRCLEQ_CHECK_HEAD(head,field) 
#define F_NOCACHE 48
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_1(x) 
#define UF_OPAQUE 0x00000008
#define BUTTON2_PRESSED NCURSES_MOUSE_MASK(2, NCURSES_BUTTON_PRESSED)
#define SEEK_CUR 1
#define TIOCSDRAINWAIT _IOW('t', 87, int)
#define __BIGGEST_ALIGNMENT__ 16
#define REG_EBRACK 7
#define _SC_BC_STRING_MAX 12
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_0(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_3(x) x
#define sa_handler __sigaction_u.__sa_handler
#define LONG_MAX __LONG_MAX__
#define TIOCCBRK _IO('t', 122)
#define ACS_LARROW NCURSES_ACS(',')
#define IOPOL_TYPE_VFS_MATERIALIZE_DATALESS_FILES 3
#define STDERR_FILENO 2
#define __DARWIN_ONLY_VERS_1050 0
#define vw_scanw vwscanw
#define __WATCHOS_2_0 20000
#define __WATCHOS_2_1 20100
#define __WATCHOS_2_2 20200
#define ACS_LRCORNER NCURSES_ACS('j')
#define mvwinsnstr(win,y,x,s,n) (wmove(win,y,x) == ERR ? ERR : winsnstr(win,s,n))
#define __DARWIN_1050ALIAS(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_UNIX03)
#define KEY_EOS 0516
#define sigaddset(set,signo) (*(set) |= __sigbits(signo), 0)
#define _SC_SS_REPL_MAX 126
#define _POSIX_HOST_NAME_MAX 255
#define __FLT64_MAX_10_EXP__ 308
#define _ALIGNMENT_MASK 0xF
#define __sferror(p) (((p)->_flags & __SERR) != 0)
#define SLIST_HEAD_INITIALIZER(head) { NULL }
#define NGROUPS_MAX 16
#define PRIO_DARWIN_PROCESS 4
#define _POSIX_CHOWN_RESTRICTED 200112L
#define NCURSES_DLL_H_incl 1
#define _TIME_T 
#define _POSIX_SEM_NSEMS_MAX 256
#define _IN_ADDR_T 
#define __COPYRIGHT(s) __IDSTRING(copyright,s)
#define _I386_SIGNAL_H_ 1
#define __pure 
#define TIOCPKT_IOCTL 0x40
#define WTERMSIG(x) (_WSTATUS(x))
#define S_IFLNK 0120000
#define xisdigit(c) ((unsigned int) (c) - '0' <= 9)
#define CLD_NOOP 0
#define _SC_XOPEN_REALTIME_THREADS 112
#define QOS_MIN_RELATIVE_PRIORITY (-15)
#define ACS_LTEE NCURSES_ACS('t')
#define _CS_XBS5_ILP32_OFFBIG_LINTFLAGS 27
#define addstr(str) waddnstr(stdscr,str,-1)
#define NCURSES_BUTTON_PRESSED 002L
#define EXIT_SUCCESS 0
#define NCURSES_EXPORT(type) NCURSES_IMPEXP type NCURSES_API
#define FPE_FLTDIV 1
#define _CS_XBS5_LPBIG_OFFBIG_CFLAGS 32
#define __DBL_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define KEY_CODE_YES 0400
#define __APPLE_API_UNSTABLE 
#define _POSIX_SIGQUEUE_MAX 32
#define LOCK_SH 0x01
#define _PC_XATTR_SIZE_BITS 26
#define __INT_FAST32_MAX__ 0x7fffffff
#define htonll(x) __DARWIN_OSSwapInt64(x)
#define _CS_XBS5_ILP32_OFFBIG_CFLAGS 24
#define SIOCGETVLAN SIOCGIFVLAN
#define __DBL_HAS_INFINITY__ 1
#define resetterm() reset_shell_mode()
#define __MAC_10_15_1 101501
#define CIRCLEQ_INSERT_HEAD(head,elm,field) do { CIRCLEQ_CHECK_HEAD(head, field); (elm)->field.cqe_next = (head)->cqh_first; (elm)->field.cqe_prev = (void *)(head); if ((head)->cqh_last == (void *)(head)) (head)->cqh_last = (elm); else (head)->cqh_first->field.cqe_prev = (elm); (head)->cqh_first = (elm); } while (0)
#define REG_BADBR 10
#define _ENDLINE 0x02
#define _SYS_TYPES_H_ 
#define _RLIMIT_POSIX_FLAG 0x1000
#define _FTS_H_ 
#define W_EXITCODE(ret,sig) ((ret) << 8 | (sig))
#define snprintf(str,len,...) __builtin___snprintf_chk (str, len, 0, __darwin_obsz(str), __VA_ARGS__)
#define F_ADDFILESIGS_RETURN 97
#define TIOCSCTTY _IO('t', 97)
#define _POSIX_SS_REPL_MAX 4
#define box_set(w,v,h) wborder_set(w,v,v,h,h,0,0,0,0)
#define __SIZEOF_FLOAT__ 4
#define __USE_XOPEN 
#define _DARWIN_FEATURE_ONLY_UNIX_CONFORMANCE 1
#define CASE ':'
#define SIGVTALRM 26
#define TIOCMGET _IOR('t', 106, int)
#define __DARWIN_FD_ISSET(n,p) __darwin_fd_isset((n), (p))
#define attr_set(a,c,o) wattr_set(stdscr,a,c,o)
#define _PC_2_SYMLINKS 15
#define LOCK_UN 0x08
#define CURSES 1
#define __HAVE_SPECULATION_SAFE_VALUE 1
#define __XNU_PRIVATE_EXTERN __attribute__((visibility("hidden")))
#define __null_unspecified 
#define w_stopsig w_S.w_Stopsig
#define F_SINGLE_WRITER 76
#define _PASSWORD_LEN 128
#define MSG_CLI_MODE 12
#define NL_LANGMAX 14
#define EVFILT_TIMER (-7)
#define NOTE_FFLAGSMASK 0x00ffffff
#define _POSIX2_CHAR_TERM 200112L
#define BUTTON2_CLICKED NCURSES_MOUSE_MASK(2, NCURSES_BUTTON_CLICKED)
#define ACS_RARROW NCURSES_ACS('+')
#define SCHED_FIFO 4
#define MSG_INVALID_KEY 40
#define NNN_HELP 12
#define addchnstr(str,n) waddchnstr(stdscr,str,n)
#define _WSTOPPED 0177
#define _INT16_T 
#define __IPHONE_3_2 30200
#define ___POSIX_C_DEPRECATED_STARTING_199309L 
#define NCURSES_ATTR_T int
#define UF_COMPRESSED 0x00000020
#define _POSIX_PATH_MAX 256
#define printwarn(presel) printwait(strerror(errno), presel)
#define putchar_unlocked(x) putc_unlocked(x, stdout)
#define __INTPTR_WIDTH__ 64
#define mvwadd_wchnstr(win,y,x,s,n) (wmove(win,y,x) == ERR ? ERR : wadd_wchnstr(win,s,n))
#define __FLT64X_HAS_INFINITY__ 1
#define EPIPE 32
#define _POSIX_THREAD_SPORADIC_SERVER (-1)
#define BUS_NOOP 0
#define ENOATTR 93
#define MSG_EMPTY_FILE 25
#define __UINT_LEAST32_MAX__ 0xffffffffU
#define __REGEX_H_ 
#define KEY_SRESET 0530
#define LONG_MIN (-LONG_MAX - 1L)
#define F_CHECK_LV 98
#define BUTTON1_RESERVED_EVENT NCURSES_MOUSE_MASK(1, NCURSES_RESERVED_EVENT)
#define FTW_PHYS 0x01
#define L_ctermid 1024
#define VERSION "4.4"
#define CLD_KILLED 2
#define _PC_REC_MAX_XFER_SIZE 21
#define __FLT32X_HAS_DENORM__ 1
#define NOTE_MACHTIME 0x00000100
#define __INT_FAST16_TYPE__ short int
#define _RUNE_MAGIC_A "RuneMagA"
#define SA_64REGSET 0x0200
#define SIOCSIFBOND _IOW('i', 70, struct ifreq)
#define _POSIX_PRIORITY_SCHEDULING (-1)
#define _SC_XOPEN_SHM 113
#define mvaddchnstr(y,x,str,n) mvwaddchnstr(stdscr,y,x,str,n)
#define VLEN 3
#define wstandend(win) (wattrset(win,A_NORMAL))
#define getbegyx(win,y,x) (y = getbegy(win), x = getbegx(win))
#define _BLKSIZE_T 
#define __MMX_WITH_SSE__ 1
#define delch() wdelch(stdscr)
#define _FULLWIN 0x04
#define __WATCHOS_UNAVAILABLE 
#define SCHED_RR 2
#define _PC_MIN_HOLE_SIZE 27
#define KEY_CATAB 0526
#define __DARWIN_SUF_NON_CANCELABLE 
#define EF_MAY_SHARE_BLOCKS 0x00000001
#define RUSAGE_INFO_V0 0
#define _CTYPE_SW1 0x40000000L
#define BUTTON_CLICK(e,x) ((e) & NCURSES_MOUSE_MASK(x, 004))
#define __IPHONE_3_0 30000
#define __IPHONE_3_1 30100
#define __LDBL_HAS_DENORM__ 1
#define _WATTR_OK (1<<16)
#define _V6_LPBIG_OFFBIG __LPBIG_OFFBIG
#define _PASSWORD_NOGID 0x02
#define pthread_cleanup_push(func,val) { struct __darwin_pthread_handler_rec __handler; pthread_t __self = pthread_self(); __handler.__routine = func; __handler.__arg = val; __handler.__next = __self->__cleanup_stack; __self->__cleanup_stack = &__handler;
#define _SC_DELAYTIMER_MAX 45
#define _POSIX_SPORADIC_SERVER (-1)
#define __FLT128_HAS_INFINITY__ 1
#define BUTTON4_DOUBLE_CLICKED NCURSES_MOUSE_MASK(4, NCURSES_DOUBLE_CLICKED)
#define __DARWIN_WCTYPE_TOP_inline __header_inline
#define REG_BASIC 0000
#define _STRUCT_TIMEVAL struct timeval
#define GID_MAX 2147483647U
#define SIGABRT 6
#define ISUPPER_(ch) ((ch) >= 'A' && (ch) <= 'Z')
#define SS_ONSTACK 0x0001
#define _GCC_WRAP_STDINT_H 
#define CLD_CONTINUED 6
#define _LIMITS_H_ 
#define _POSIX_MEMORY_PROTECTION 200112L
#define SIGSTKSZ 131072
#define __DARWIN_OSSwapConstInt64(x) ((__uint64_t)((((__uint64_t)(x) & 0xff00000000000000ULL) >> 56) | (((__uint64_t)(x) & 0x00ff000000000000ULL) >> 40) | (((__uint64_t)(x) & 0x0000ff0000000000ULL) >> 24) | (((__uint64_t)(x) & 0x000000ff00000000ULL) >> 8) | (((__uint64_t)(x) & 0x00000000ff000000ULL) << 8) | (((__uint64_t)(x) & 0x0000000000ff0000ULL) << 24) | (((__uint64_t)(x) & 0x000000000000ff00ULL) << 40) | (((__uint64_t)(x) & 0x00000000000000ffULL) << 56)))
#define TIOCGETD _IOR('t', 26, int)
#define ACS_PLUS NCURSES_ACS('n')
#define _STRUCT_X86_AVX512_STATE32 struct __darwin_i386_avx512_state
#define _PC_REC_XFER_ALIGN 23
#define true 1
#define SA_RESETHAND 0x0004
#define SIGTERM 15
#define _SC_XOPEN_CRYPT 108
#define _SC_RAW_SOCKETS 119
#define addch(ch) waddch(stdscr,ch)
#define __weak 
#define MSG_0_ENTRIES 1
#define _DEV_T 
#define TIOCPKT_STOP 0x04
#define __abortlike __dead2 __cold __not_tail_called
#define __DBL_MAX_EXP__ 1024
#define F_RDAHEAD 45
#define BUTTON4_RELEASED NCURSES_MOUSE_MASK(4, NCURSES_BUTTON_RELEASED)
#define __WCHAR_WIDTH__ 32
#define __DARWIN_BIG_ENDIAN 4321
#define BC_DIM_MAX 2048
#define WEOF __DARWIN_WEOF
#define _PTHREAD_RECURSIVE_MUTEX_SIG_init 0x32AAABA2
#define __FLT32_MAX__ 3.40282346638528859811704183484516925e+38F32
#define MSG_CUR_SEL_OPTS 8
#define __SSTR 0x0200
#define _POSIX_TRACE_NAME_MAX 8
#define FFDSYNC O_DSYNC
#define WA_REVERSE A_REVERSE
#define __kpi_unavailable 
#define NOTE_EXIT_MEMORY 0x00020000
#define _PATH_MASTERPASSWD "/etc/master.passwd"
#define __SSE2_MATH__ 1
#define __ATOMIC_HLE_RELEASE 131072
#define CINTR CTRL('c')
#define DT_UNKNOWN 0
#define EV_SET64(kevp,a,b,c,d,e,f,g,h) do { struct kevent64_s *__kevp__ = (kevp); __kevp__->ident = (a); __kevp__->filter = (b); __kevp__->flags = (c); __kevp__->fflags = (d); __kevp__->data = (e); __kevp__->udata = (f); __kevp__->ext[0] = (g); __kevp__->ext[1] = (h); } while(0)
#define _V6_LP64_OFF64 __LP64_OFF64
#define PDP_ENDIAN __DARWIN_PDP_ENDIAN
#define _SC_OPEN_MAX 5
#define _VA_LIST_ 
#define S_BLKSIZE 512
#define SIGINT 2
#define MSG_ARCHIVE_NAME 17
#define __PTRDIFF_MAX__ 0x7fffffffffffffffL
#define __TVOS_PROHIBITED 
#define ETOOMANYREFS 59
#define _SC_STREAM_MAX 26
#define _SCHED_H_ 
#define F_GETSIGSINFO 105
#define _X86_INSTRUCTION_STATE_CACHELINE_SIZE 64
#define NNN_ORDER 11
#define EPFNOSUPPORT 46
#define __amd64 1
#define _POSIX_TZNAME_MAX 6
#define _POSIX_SSIZE_MAX 32767
#define CEOT CEOF
#define MSG_CANCEL 4
#define BUS_OBJERR 3
#define __strfmonlike(fmtarg,firstvararg) __attribute__((__format__ (__strfmon__, fmtarg, firstvararg)))
#define RL_PROMPT_START_IGNORE '\1'
#define MSG_NEW_OPTS 11
#define SLIST_REMOVE_HEAD(head,field) do { SLIST_FIRST((head)) = SLIST_NEXT(SLIST_FIRST((head)), field); } while (0)
#define _SYS_SIGNAL_H_ 
#define TIOCM_DSR 0400
#define SEGV_MAPERR 1
#define __PTHREAD_ONCE_SIZE__ 8
#define _POSIX_MAX_CANON 255
#define timerisset(tvp) ((tvp)->tv_sec || (tvp)->tv_usec)
#define EVFILT_READ (-1)
#define SIOCDELMULTI _IOW('i', 50, struct ifreq)
#define EV_ONESHOT 0x0010
#define REG_PEND 0040
#define _PTRDIFF_T_DECLARED 
#define TIOCM_DTR 0002
#define _SC_2_PBS_LOCATE 62
#define FTS_COMFOLLOWDIR 0x400
#define __AVAILABILITY__ 
#define sigemptyset(set) (*(set) = 0, 0)
#define sigmask(m) (1 << ((m)-1))
#define __tune_core2__ 1
#define setterm(term) setupterm(term, 1, (int *)0)
#define DEFFILEMODE (S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH|S_IWOTH)
#define DPRINTF_D(x) 
#define TRACE_BITS 0x0100
#define FPE_FLTOVF 2
#define ENAMETOOLONG 63
#define __ATOMIC_HLE_ACQUIRE 65536
#define _PTRDIFF_T 
#define _CS_DARWIN_USER_TEMP_DIR 65537
#define NUM_DU_THREADS (4)
#define FTS_SKIP 4
#define _UINT32_T 
#define _PC_PIPE_BUF 6
#define ENV_NCUR 4
#define COLL_WEIGHTS_MAX 2
#define _PC_VDISABLE 9
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#define SIOCSDRVSPEC _IOW('i', 123, struct ifdrv)
#define TIOCPTYUNLK _IO('t', 82)
#define __SIZEOF_SIZE_T__ 8
#define __DARWIN_ALIAS_STARTING(_mac,_iphone,x) __DARWIN_ALIAS_STARTING_MAC_ ##_mac(x)
#define __kpi_deprecated_arm64_macos_unavailable 
#define WACS_BBSS NCURSES_WACS('k')
#define FCNTL_FS_SPECIFIC_BASE 0x00010000
#define _SC_XOPEN_LEGACY 110
#define __offsetof(type,field) __builtin_offsetof(type, field)
#define _PATH_PASSWD "/etc/passwd"
#define O_DP_GETRAWUNENCRYPTED 0x0002
#define O_NONBLOCK 0x00000004
#define __MAC_10_14_1 101401
#define LIST_INSERT_AFTER(listelm,elm,field) do { LIST_CHECK_NEXT(listelm, field); if ((LIST_NEXT((elm), field) = LIST_NEXT((listelm), field)) != NULL) LIST_NEXT((listelm), field)->field.le_prev = &LIST_NEXT((elm), field); LIST_NEXT((listelm), field) = (elm); (elm)->field.le_prev = &LIST_NEXT((listelm), field); } while (0)
#define st_atime st_atimespec.tv_sec
#define WAKEMON_MAKE_FATAL 0x10
#define WACS_ULCORNER WACS_BSSB
#define IOPOL_SCOPE_PROCESS 0
#define __SPI_DEPRECATED(...) 
#define P_ARCHIVE 2
#define __dead 
#define COLOR_PAIR(n) NCURSES_BITS(n, 0)
#define PTHREAD_CREATE_DETACHED 2
#define SIG_BLOCK 1
#define __DARWIN_FD_ZERO(p) __builtin_bzero(p, sizeof(*(p)))
#define __WATCHOS_5_0 50000
#define WAKEMON_SET_DEFAULTS 0x08
#define C_FIL (C_EXE + 1)
#define TRACE_ICALLS 0x0200
#define __FLT64X_MIN_EXP__ (-16381)
#define SIZE_MAX UINTPTR_MAX
#define BUS_ADRALN 1
#define __SIZEOF_WINT_T__ 4
#define F_TTY 0x100
#define ferror_unlocked(p) __sferror(p)
#define WACS_BTEE WACS_SSBS
#define __WATCHOS_5_2 50200
#define NCURSES_BOOL bool
#define EV_DISABLE 0x0008
#define _SC_THREAD_THREADS_MAX 94
#define NOTE_VM_PRESSURE_TERMINATE 0x40000000
#define SIOCGHIWAT _IOR('s', 1, int)
#define IOC_VOID (__uint32_t)0x20000000
#define __IPHONE_11_0 110000
#define __IPHONE_11_1 110100
#define __IPHONE_11_2 110200
#define __IPHONE_11_3 110300
#define errno (*__error())
#define _SC_XOPEN_REALTIME 111
#define UINT64_C(v) (v ## ULL)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_0(x) 
#define __LONG_LONG_WIDTH__ 64
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_4(x) 
#define _SC_ADVISORY_INFO 65
#define EV_RECEIPT 0x0040
#define _POSIX_RE_DUP_MAX _POSIX2_RE_DUP_MAX
#define TIOCPKT_NOSTOP 0x10
#define _PC_SYMLINK_MAX 24
#define __FLT32_MAX_EXP__ 128
#define WINT_MAX INT32_MAX
#define _PWD_H_ 
#define __WATCHOS_6_0 60000
#define __WATCHOS_6_1 60100
#define __WATCHOS_6_2 60200
#define __API_DEPRECATED_END 
#define KEY_SMESSAGE 0612
#define __SOPT 0x0400
#define EPROCUNAVAIL 76
#define _DARWIN_FEATURE_64_BIT_INODE 1
#define _POSIX_TRACE_EVENT_NAME_MAX 30
#define UINTPTR_MAX 18446744073709551615UL
#define RL_PROMPT_END_IGNORE '\2'
#define F_CHKRTN 0x20
#define WACS_BULLET NCURSES_WACS('~')
#define KEY_SF 0520
#define STAILQ_NEXT(elm,field) ((elm)->field.stqe_next)
#define NCURSES_BUTTON_CLICKED 004L
#define SIOCATMARK _IOR('s', 7, int)
#define _PC_NO_TRUNC 8
#define NCURSES_BITS(mask,shift) ((mask) << ((shift) + NCURSES_ATTR_SHIFT))
#define BUTTON2_RESERVED_EVENT NCURSES_MOUSE_MASK(2, NCURSES_RESERVED_EVENT)
#define SIOCSLOWAT _IOW('s', 2, int)
#define __GXX_ABI_VERSION 1016
#define __IDSTRING(name,string) static const char name[] __used = string
#define ARCHIVE_CMD_LEN 16
#define KEY_SAVE 0571
#define MSG_KEYS 34
#define __header_always_inline __header_inline __attribute__ ((__always_inline__))
#define _SC_PAGESIZE 29
#define _SC_XOPEN_XCU_VERSION 121
#define UINT_LEAST16_MAX UINT16_MAX
#define NCURSES_CONST 
#define F_UNLCK 2
#define __DARWIN_FD_SET(n,p) __darwin_fd_set((n), (p))
#define S_F 0x6
#define __FLT_MIN_EXP__ (-125)
#define __DARWIN_NULL ((void *)0)
#define NOTE_VM_ERROR 0x10000000
#define UF_NODUMP 0x00000001
#define _PASSWORD_NOUID 0x01
#define __DEVOLATILE(type,var) __CAST_AWAY_QUALIFIER(var, volatile, type)
#define _SC_READER_WRITER_LOCKS 76
#define WEXITED 0x00000004
#define mvadd_wchnstr(y,x,s,n) mvwadd_wchnstr(stdscr,y,x,s,n)
#define TAILQ_FOREACH_REVERSE_SAFE(var,head,headname,field,tvar) for ((var) = TAILQ_LAST((head), headname); (var) && ((tvar) = TAILQ_PREV((var), headname, field), 1); (var) = (tvar))
#define _PC_LINK_MAX 1
#define INT64_MAX 9223372036854775807LL
#define FILTER '/'
#define ITIMER_REAL 0
#define FTS_DNR 4
#define CSUSP CTRL('z')
#define __ILP32_OFF32 (-1)
#define O_WRONLY 0x0001
#define _BSD_I386__TYPES_H_ 
#define UINT32_MAX 4294967295U
#define _RUNE_T 
#define __printf0like(fmtarg,firstvararg) __attribute__((__format__ (__printf0__, fmtarg, firstvararg)))
#define ILL_ILLOPN 4
#define _POSIX_SHELL 200112L
#define _GRP_H_ 
#define WNOHANG 0x00000001
#define alloca(size) __alloca(size)
#define KEY_RESET 0531
#define KEY_MIN 0401
#define __INT16_MAX__ 0x7fff
#define _BSD_MACHINE__TYPES_H_ 
#define READLINE_MAX 256
#define A_ALTCHARSET NCURSES_BITS(1U,14)
#define waddchstr(win,str) waddchnstr(win,str,-1)
#define C_CHR (C_BLK + 1)
#define _POSIX2_BC_BASE_MAX 99
#define KEY_SPRINT 0617
#define FTS_DOT 5
#define UF_DATAVAULT 0x00000080
#define __x86_64 1
#define TIOCMODG _IOR('t', 3, int)
#define SEGV_ACCERR 2
#define _POSIX2_C_BIND 200112L
#define _SYS_DIRENT_H 
#define TIOCMODS _IOW('t', 4, int)
#define __PTRDIFF_T 
#define __SALC 0x4000
#define KEY_F0 0410
#define _SYS_QOS_H 
#define __PTHREAD_CONDATTR_SIZE__ 8
#define NBBY __DARWIN_NBBY
#define _STRUCT_MMST_REG struct __darwin_mmst_reg
#define mvwhline(win,y,x,c,n) (wmove(win,y,x) == ERR ? ERR : whline(win,c,n))
#define strcat(dest,...) __builtin___strcat_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define vline(ch,n) wvline(stdscr, ch, n)
#define TIOCSBRK _IO('t', 123)
#define FASYNC O_ASYNC
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_4(x) x
#define F_GETFD 1
#define ISBLANK(x) ((x) == ' ' || (x) == '\t')
#define __TVOS_12_0 120000
#define __TVOS_12_1 120100
#define __TVOS_12_2 120200
#define __TVOS_12_3 120300
#define __TVOS_12_4 120400
#define LIST_CHECK_NEXT(elm,field) 
#define L_INCR SEEK_CUR
#define __INT_FAST64_TYPE__ long long int
#define mvwgetn_wstr(win,y,x,t,n) (wmove(win,y,x) == ERR ? ERR : wgetn_wstr(win,t,n))
#define TIOCCONS _IOW('t', 98, int)
#define stpncpy(dest,...) __builtin___stpncpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define F_LOCK 1
#define ISMACR 2
#define S_TYPEISTMO(buf) (0)
#define PTHREAD_INHERIT_SCHED 1
#define _POSIX2_FORT_RUN 200112L
#define _SC_MQ_OPEN_MAX 46
#define _XOPEN_STREAMS (-1)
#define S_IRWXG 0000070
#define ENOBUFS 55
#define REG_BACKR 02000
#define _ANSI_STDDEF_H 
#define PTHREAD_ERRORCHECK_MUTEX_INITIALIZER {_PTHREAD_ERRORCHECK_MUTEX_SIG_init, {0}}
#define F_PREALLOCATE 42
#define __FLT64_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F64
#define __DBL_MIN__ ((double)2.22507385850720138309023271733240406e-308L)
#define WINT_MIN INT32_MIN
#define fileno_unlocked(p) __sfileno(p)
#define MAXNAMLEN __DARWIN_MAXNAMLEN
#define __SMBF 0x0080
#define IOPOL_DEFAULT 0
#define S_ISFIFO(m) (((m) & S_IFMT) == S_IFIFO)
#define UF_SETTABLE 0x0000ffff
#define STAILQ_HEAD_INITIALIZER(head) { NULL, &(head).stqh_first }
#define __OSX_AVAILABLE(_vers) 
#define SIOCGIFFLAGS _IOWR('i', 17, struct ifreq)
#define RLIMIT_WAKEUPS_MONITOR 0x1
#define TTYDEF_CFLAG (CREAD | CS8 | HUPCL)
#define FD_SETSIZE __DARWIN_FD_SETSIZE
#define WACS_LLCORNER WACS_SSBB
#define _CS_XBS5_ILP32_OFF32_CFLAGS 20
#define F_SETLKWTIMEOUT 10
#define SIOCGIFPDSTADDR _IOWR('i', 64, struct ifreq)
#define __FLT128_EPSILON__ 1.92592994438723585305597794258492732e-34F128
#define EV_VANISHED 0x0200
#define __FLT64X_NORM_MAX__ 1.18973149535723176502126385303097021e+4932F64x
#define __SIZEOF_POINTER__ 8
#define KEY_SR 0521
#define __SIZE_TYPE__ long unsigned int
#define _PTHREAD_QOS_H 
#define __sgetc(p) (--(p)->_r < 0 ? __srget(p) : (int)(*(p)->_p++))
#define TIOCPTYGRANT _IO('t', 84)
#define _CS_POSIX_V6_LP64_OFF64_LDFLAGS 9
#define __not_tail_called 
#define waddstr(win,str) waddnstr(win,str,-1)
#define _XOPEN_LEGACY (-1)
#define __IPHONE_7_0 70000
#define __IPHONE_7_1 70100
#define _X86_INSTRUCTION_STATE_MAX_INSN_BYTES (2448 - 64 - 4)
#define TTYDEF_LFLAG (ECHO | ICANON | ISIG | IEXTEN | ECHOE|ECHOKE|ECHOCTL)
#define REG_NOMATCH 1
#define __LP64__ 1
#define UTIME_NOW -1
#define __deprecated_enum_msg(_msg) 
#define __DBL_HAS_QUIET_NAN__ 1
#define __IOS_DEPRECATED(_start,_dep,_msg) 
#define ENETRESET 52
#define _POSIX_CLOCKRES_MIN 20000000
#define TRACE_SHIFT 13
#define _POSIX_JOB_CONTROL 200112L
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_3(x) 
#define _POSIX_SYMLOOP_MAX 8
#define __FLT32X_EPSILON__ 2.22044604925031308084726333618164062e-16F32x
#define SIGUSR2 31
#define UF_TRACKED 0x00000040
#define ins_wch(c) wins_wch(stdscr,c)
#define _SC_THREAD_PRIORITY_SCHEDULING 89
#define F_TRIM_ACTIVE_FILE 100
#define NCURSES_UNCTRL_H_incl 1
#define sigismember(set,signo) ((*(set) & __sigbits(signo)) != 0)
#define _APPEND_OK (1<<13)
#define EOF (-1)
#define UQUAD_MAX ULLONG_MAX
#define T_ACCESS 0
#define __OS_AVAILABILITY_MSG(_target,_availability,_msg) 
#define SIGTRAP 5
#define EISDIR 21
#define __nonnull 
#define S_IFREG 0100000
#define ACCESSPERMS (S_IRWXU|S_IRWXG|S_IRWXO)
#define fwopen(cookie,fn) funopen(cookie, 0, fn, 0, 0)
#define SCHAR_MAX __SCHAR_MAX__
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10_3(x) x
#define MSG_SEL_MISSING 23
#define __FLT64_MIN_EXP__ (-1021)
#define MAC_OS_X_VERSION_10_11_2 101102
#define MAC_OS_X_VERSION_10_11_3 101103
#define MAC_OS_X_VERSION_10_11_4 101104
#define _CACHED_RUNES (1 <<8 )
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
#define getbkgrnd(wch) wgetbkgrnd(stdscr,wch)
#define CHAR_MAX SCHAR_MAX
#define ACS_BSBS ACS_HLINE
#define KEY_BTAB 0541
#define __API_DEPRECATED_BEGIN_MSG_GET_MACRO(...) 
#define insdelln(n) winsdelln(stdscr,n)
#define WAIT_MYPGRP 0
#define INT_LEAST8_MAX INT8_MAX
#define FPE_INTDIV 7
#define SEEK_DATA 4
#define LC_MONETARY 3
#define BUTTON_ALT NCURSES_MOUSE_MASK(5, 0004L)
#define C_UND (C_SOC + 1)
#define __WATCHOS_4_1 40100
#define LIST_FOREACH_SAFE(var,head,field,tvar) for ((var) = LIST_FIRST((head)); (var) && ((tvar) = LIST_NEXT((var), field), 1); (var) = (tvar))
#define _SYS_FILIO_H_ 
#define settimeout() timeout(1000)
#define __FLT64_MIN_10_EXP__ (-307)
#define timerclear(tvp) (tvp)->tv_sec = (tvp)->tv_usec = 0
#define COLOR_WHITE 7
#define ABORT_CHAR CTRL('G')
#define SIOCGIFBOND _IOWR('i', 71, struct ifreq)
#define __WATCHOS_4_3 40300
#define __has_extension(x) 0
#define MSG_EXISTS 28
#define __MAC_OS_X_VERSION_MAX_ALLOWED __MAC_11_3
#define WACS_STERLING NCURSES_WACS('}')
#define _IOC(inout,group,num,len) (inout | ((len & IOCPARM_MASK) << 16) | ((group) << 8) | (num))
#define CLOCK_UPTIME_RAW _CLOCK_UPTIME_RAW
#define ULONG_MAX (LONG_MAX * 2UL + 1UL)
#define _IOR(g,n,t) _IOC(IOC_OUT, (g), (n), sizeof(t))
#define PTHREAD_PRIO_PROTECT 2
#define _IOW(g,n,t) _IOC(IOC_IN, (g), (n), sizeof(t))
#define F_ADDFILESUPPL 104
#define _SC_FILE_LOCKING 69
#define SIOCSIFALTMTU _IOW('i', 69, struct ifreq)
#define __FLT64X_DECIMAL_DIG__ 21
#define SIZE_T_MAX ULONG_MAX
#define CMD_LEN_MAX (PATH_MAX + ((NAME_MAX + 1) << 1))
#define WA_STANDOUT A_STANDOUT
#define __REGISTER_PREFIX__ 
#define __UINT16_MAX__ 0xffff
#define _FTW_H 
#define __API_AVAILABLE_END 
#define IOPOL_ATIME_UPDATES_OFF 1
#define __DBL_HAS_DENORM__ 1
#define INT_LEAST32_MAX INT32_MAX
#define F_WRLCK 3
#define EIDRM 90
#define GETSIGSINFO_PLATFORM_BINARY 1
#define REG_DUMP 0200
#define __MAC_10_11_3 101103
#define __MAC_10_11_4 101104
#define FPE_FLTSUB 6
#define REG_MINIMAL 0100
#define NCURSES_WRAPPED_VAR(type,name) extern type NCURSES_PUBLIC_VAR(name)(void)
#define _PC_NAME_MAX 4
#define EXEC_ARGS_MAX 10
#define REG_STARTEND 00004
#define _CS_XBS5_ILP32_OFFBIG_LIBS 26
#define CDSUSP CTRL('y')
#define wgetstr(w,s) wgetnstr(w, s, -1)
#define _CS_XBS5_ILP32_OFFBIG_LDFLAGS 25
#define NOTE_EXIT_REPARENTED ((unsigned int)eNoteExitReparentedDeprecated)
#define STAILQ_REMOVE_HEAD_UNTIL(head,elm,field) do { if ((STAILQ_FIRST((head)) = STAILQ_NEXT((elm), field)) == NULL) (head)->stqh_last = &STAILQ_FIRST((head)); } while (0)
#define _SC_ASYNCHRONOUS_IO 28
#define __LDBL_HAS_INFINITY__ 1
#define _PC_MAX_CANON 2
#define __OS_AVAILABILITY(_target,_availability) 
#define CSTATUS CTRL('t')
#define KEY_SEOL 0603
#define EQUIV_CLASS_MAX 2
#define S_ISWHT(m) (((m) & S_IFMT) == S_IFWHT)
#define EDEVERR 83
#define REG_NOTBOL 00001
#define __FLT32_MIN__ 1.17549435082228750796873653722224568e-38F32
#define __UINT8_TYPE__ unsigned char
#define TIOCM_RNG 0200
#define BUTTON3_TRIPLE_CLICKED NCURSES_MOUSE_MASK(3, NCURSES_TRIPLE_CLICKED)
#define _SC_BC_BASE_MAX 9
#define mvhline(y,x,c,n) mvwhline(stdscr,y,x,c,n)
#define NCURSES_IMPEXP 
#define P_CPMVRNM 1
#define _PASSWORD_EFMT1 '_'
#define __FLT_DIG__ 6
#define SF_SUPPORTED 0x009f0000
#define __NO_INLINE__ 1
#define MSG_NOT_SET 27
#define KEY_SSAVE 0624
#define SIOCSIFMETRIC _IOW('i', 24, struct ifreq)
#define BUTTON2_RELEASED NCURSES_MOUSE_MASK(2, NCURSES_BUTTON_RELEASED)
#define DEL (127)
#define _POSIX_NGROUPS_MAX 8
#define SIOCSIFASYNCMAP _IOW('i', 125, struct ifreq)
#define _POSIX_V7_ILP32_OFF32 __ILP32_OFF32
#define mvwaddch(win,y,x,ch) (wmove(win,y,x) == ERR ? ERR : waddch(win,ch))
#define __DARWIN_NON_CANCELABLE 0
#define _WRITE_OK (1<<10)
#define TMP_LEN_MAX 64
#define REG_LITERAL REG_NOSPEC
#define EV_OOBAND EV_FLAG1
#define LONG_LONG_MAX __LONG_LONG_MAX__
#define __DEC_EVAL_METHOD__ 2
#define strcpy(dest,...) __builtin___strcpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define __AVAILABILITY_INTERNAL_DEPRECATED_MSG(_msg) __attribute__((deprecated))
#define ECONNABORTED 53
#define KEY_SRIGHT 0622
#define _SC_TRACE 97
#define STAILQ_REMOVE_HEAD(head,field) do { if ((STAILQ_FIRST((head)) = STAILQ_NEXT(STAILQ_FIRST((head)), field)) == NULL) (head)->stqh_last = &STAILQ_FIRST((head)); } while (0)
#define S_ISLNK(m) (((m) & S_IFMT) == S_IFLNK)
#define SIGEV_THREAD 3
#define SIOCSIFMTU _IOW('i', 52, struct ifreq)
#define WACS_RARROW NCURSES_WACS('+')
#define NUM_EVENT_FDS 1
#define C_ORP (C_MIS + 1)
#define _STRUCT_X86_THREAD_FULL_STATE64 struct __darwin_x86_thread_full_state64
#define __enum_options 
#define MSG_HOSTNAME 16
#define untouchwin(win) wtouchln((win), 0, getmaxy(win), 0)
#define CHAR_MIN SCHAR_MIN
#define FTS_D 1
#define FTS_F 8
#define __FLT_MANT_DIG__ 24
#define __LDBL_DECIMAL_DIG__ 21
#define FTS_W 14
#define INT_LEAST8_MIN INT8_MIN
#define addchstr(str) waddchstr(stdscr,str)
#define CIRCLEQ_ENTRY(type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct { struct type *cqe_next; struct type *cqe_prev; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define __VERSION__ "11.2.0"
#define _SC_NPROCESSORS_ONLN 58
#define S_IFCHR 0020000
#define SIOCSIFPHYADDR _IOW('i', 62, struct ifaliasreq)
#define _SC_TRACE_NAME_MAX 128
#define F_ADDFILESIGS_FOR_DYLD_SIM 83
#define F_GETPATH_MTMINFO 71
#define CTRL(x) (x&037)
#define BUTTON3_DOUBLE_CLICKED NCURSES_MOUSE_MASK(3, NCURSES_DOUBLE_CLICKED)
#define _PTHREAD_RWLOCK_SIG_init 0x2DA8B3B4
#define __MAC_10_10 101000
#define __MAC_10_11 101100
#define __MAC_10_12 101200
#define __MAC_10_13 101300
#define __MAC_10_14 101400
#define __MAC_10_15 101500
#define __MAC_10_16 101600
#define __DARWIN_SUF_UNIX03 
#define __UINT64_C(c) c ## ULL
#define EVFILT_FS (-9)
#define _PTRDIFF_T_ 
#define mvaddstr(y,x,str) mvwaddstr(stdscr,y,x,str)
#define __used __attribute__((__used__))
#define _CS_DARWIN_USER_CACHE_DIR 65538
#define NOTE_FFAND 0x40000000
#define ILL_ILLTRP 2
#define O_APPEND 0x00000008
#define _MACH_PORT_T 
#define SLIST_FIRST(head) ((head)->slh_first)
#define NOTE_CRITICAL 0x00000020
#define SF_APPEND 0x00040000
#define BLK_SHIFT_512 9
#define DU_TEST (((node->fts_info & FTS_F) && (sb->st_nlink <= 1 || test_set_bit((uint_t)sb->st_ino))) || node->fts_info & FTS_DP)
#define _PC_CASE_SENSITIVE 11
#define erase() werase(stdscr)
#define _PTHREAD_RWLOCK_T 
#define NCURSES_ATTR_SHIFT 8
#define EV_ENABLE 0x0004
#define BADSIG SIG_ERR
#define setdirwatch() (cfg.filtermode ? (presel = FILTER) : (watch = TRUE))
#define ILL_BADSTK 8
#define MIN_DISPLAY_COL (CTX_MAX * 2)
#define _WCTYPE_T 
#define IOPOL_TYPE_VFS_SKIP_MTIME_UPDATE 8
#define _ALIGNMENT 0x10
#define TIOCSTAT _IO('t', 101)
#define INT_LEAST32_MIN INT32_MIN
#define DST_EET 5
#define mvinch(y,x) mvwinch(stdscr,y,x)
#define TAILQ_NEXT(elm,field) ((elm)->field.tqe_next)
#define INT_FAST16_MAX INT16_MAX
#define __APPLE_API_PRIVATE 
#define _IN_PORT_T 
#define CERASE 0177
#define PTHREAD_PRIO_INHERIT 1
#define _SC_EXPR_NEST_MAX 14
#define wget_wstr(w,t) wgetn_wstr(w,t,-1)
#define _SC_CLOCK_SELECTION 67
#define _SYS__TYPES_H_ 
#define ENETDOWN 50
#define _CS_XBS5_LP64_OFF64_LIBS 30
#define F_LOG2PHYS_EXT 65
#define REG_EPAREN 8
#define st_mtime st_mtimespec.tv_sec
#define SIOCGIFMAC _IOWR('i', 130, struct ifreq)
#define sigfillset(set) (*(set) = ~(sigset_t)0, 0)
#define __INT_LEAST32_MAX__ 0x7fffffff
#define UF_HIDDEN 0x00008000
#define TAILQ_EMPTY(head) ((head)->tqh_first == NULL)
#define KEY_SREPLACE 0621
#define MSG_SSN_NAME 6
#define __STRING(x) #x
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define __DARWIN_1050ALIAS_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_NON_CANCELABLE __DARWIN_SUF_UNIX03)
#define clrtobot() wclrtobot(stdscr)
#define __DARWIN_1050ALIAS_I(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_64_BIT_INO_T __DARWIN_SUF_UNIX03)
#define TRAP_TRACE 2
#define __CTYPE_H_ 
#define WACS_DEGREE NCURSES_WACS('f')
#define ENOSTR 99
#define EBUSY 16
#define _STRUCT_MCONTEXT_AVX512_64_FULL struct __darwin_mcontext_avx512_64_full
#define REG_ENHANCED 0400
#define _UINTPTR_T 
#define __FLT128_MAX_EXP__ 16384
#define F_NORMAL 0x08
#define RLIMIT_CPU 0
#define _DARWIN_FEATURE_UNIX_CONFORMANCE 3
#define IFTODT(mode) (((mode) & 0170000) >> 12)
#define WACS_CKBOARD NCURSES_WACS('a')
#define BUTTON2_DOUBLE_CLICKED NCURSES_MOUSE_MASK(2, NCURSES_DOUBLE_CLICKED)
#define F_GETPATH 50
#define LONG_LONG_MIN (-LONG_LONG_MAX - 1LL)
#define F_ULOCK 0
#define __DARWIN_STRUCT_DIRENTRY { __uint64_t d_ino; __uint64_t d_seekoff; __uint16_t d_reclen; __uint16_t d_namlen; __uint8_t d_type; char d_name[__DARWIN_MAXPATHLEN]; }
#define _PASSWORD_CHGNOW -1
#define NCURSES_WACS(c) (&_nc_wacs[(unsigned char)c])
#define DTF_REWIND 0x0004
#define KEY_DOWN 0402
#define WACS_SBBS NCURSES_WACS('j')
#define LIST_INSERT_HEAD(head,elm,field) do { LIST_CHECK_HEAD((head), field); if ((LIST_NEXT((elm), field) = LIST_FIRST((head))) != NULL) LIST_FIRST((head))->field.le_prev = &LIST_NEXT((elm), field); LIST_FIRST((head)) = (elm); (elm)->field.le_prev = &LIST_FIRST((head)); } while (0)
#define NOTE_ABSOLUTE 0x00000008
#define RENAME_SECLUDE 0x00000001
#define _POSIX2_EXPR_NEST_MAX 32
#define __SLBF 0x0001
#define TIOCMSET _IOW('t', 109, int)
#define NOTE_EXTEND 0x00000004
#define timercmp(tvp,uvp,cmp) (((tvp)->tv_sec == (uvp)->tv_sec) ? ((tvp)->tv_usec cmp (uvp)->tv_usec) : ((tvp)->tv_sec cmp (uvp)->tv_sec))
#define _POSIX_STREAM_MAX 8
#define MSG_NEW_PATH 19
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_2(x) 
#define _SC_FSYNC 38
#define mvinsch(y,x,c) mvwinsch(stdscr,y,x,c)
#define __FLT32_MANT_DIG__ 24
#define _ALLOCA_H_ 
#define FTS_SYMFOLLOW 0x02
#define __API_DEPRECATED(...) 
#define _FSTDIO 
#define PRIO_DARWIN_NONUI 0x1001
#define F_ADDFILESIGS_INFO 103
#define LIST_HEAD_INITIALIZER(head) { NULL }
#define FREE 0
#define TIOCPKT_START 0x08
#define SIOCGIFKPI _IOWR('i', 135, struct ifreq)
#define clearerr_unlocked(p) __sclearerr(p)
#define _POSIX2_FORT_DEV (-1)
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#define A_BOLD NCURSES_BITS(1U,13)
#define ACS_DARROW NCURSES_ACS('.')
#define _POSIX_THREAD_PROCESS_SHARED 200112L
#define _CLOCK_T 
#define sigdelset(set,signo) (*(set) &= ~__sigbits(signo), 0)
#define _SC_PRIORITY_SCHEDULING 35
#define SIOCGDRVSPEC _IOWR('i', 123, struct ifdrv)
#define A_LEFT NCURSES_BITS(1U,18)
#define _INTMAX_T 
#define _SC_2_LOCALEDEF 23
#define _GID_T 
#define WACS_HLINE WACS_BSBS
#define __IPHONE_13_5 130500
#define _STRINGS_H_ 
#define SIG_ATOMIC_MAX INT32_MAX
#define KEY_RESIZE 0632
#define _CHOWN_OK (1<<21)
#define MSG_SSN_OPTS 14
#define S_IFMT 0170000
#define EFAULT 14
#define SSIZE_MAX LONG_MAX
#define FTS_LOGICAL 0x002
#define SEEK_HOLE 3
#define SIOCGIFMETRIC _IOWR('i', 23, struct ifreq)
#define __SRW 0x0010
#define getstr(str) wgetstr(stdscr,str)
#define NL_NMAX 1
#define __FBSDID(s) 
#define __PTHREAD_MUTEXATTR_SIZE__ 8
#define EFTYPE 79
#define _SC_SEM_VALUE_MAX 50
#define FTS_XDEV 0x040
#define BUTTON2_TRIPLE_CLICKED NCURSES_MOUSE_MASK(2, NCURSES_TRIPLE_CLICKED)
#define TOUPPER(ch) (((ch) >= 'a' && (ch) <= 'z') ? ((ch) - 'a' + 'A') : (ch))
#define CMIN 1
#define STAILQ_INSERT_HEAD(head,elm,field) do { if ((STAILQ_NEXT((elm), field) = STAILQ_FIRST((head))) == NULL) (head)->stqh_last = &STAILQ_NEXT((elm), field); STAILQ_FIRST((head)) = (elm); } while (0)
#define MSG_INVALID_REG 35
#define POLL_ERR 4
#define __IOS_UNAVAILABLE 
#define _SC_MQ_PRIO_MAX 75
#define A_VERTICAL NCURSES_BITS(1U,22)
#define INT32_MAX 2147483647
#define FFSYNC O_FSYNC
#define STAILQ_ENTRY(type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct { struct type *stqe_next; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define _CS_POSIX_V6_ILP32_OFF32_LDFLAGS 3
#define UTIL_BASH 8
#define CIRCLEQ_INSERT_TAIL(head,elm,field) do { (elm)->field.cqe_next = (void *)(head); (elm)->field.cqe_prev = (head)->cqh_last; if ((head)->cqh_first == (void *)(head)) (head)->cqh_first = (elm); else (head)->cqh_last->field.cqe_next = (elm); (head)->cqh_last = (elm); } while (0)
#define _U_INT8_T 
#define TRACE_VIRTPUT 0x0040
#define _U_CHAR 
#define SIGHUP 1
#define NL_TEXTMAX 2048
#define IOPOL_MATERIALIZE_DATALESS_FILES_DEFAULT 0
#define _PC_ASYNC_IO 17
#define PRIO_DARWIN_BG 0x1000
#define WACS_LRCORNER WACS_SBBS
#define KEY_ENTER 0527
#define FTW_SL 5
#define addwstr(wstr) waddwstr(stdscr,wstr)
#define __FLT128_HAS_DENORM__ 1
#define FTS_STOP 0x200
#define F_SETFL 4
#define DTF_HIDEW 0x0001
#define SIG_UNBLOCK 2
#define _POSIX_RTSIG_MAX 8
#define _MCONTEXT_T 
#define __FLT32_DECIMAL_DIG__ 9
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_5(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_6(x) x
#define __SNBF 0x0002
#define MAC_OS_X_VERSION_10_15_1 101501
#define LIST_INIT(head) do { LIST_FIRST((head)) = NULL; } while (0)
#define __FLT128_DIG__ 33
#define WACS_LARROW NCURSES_WACS(',')
#define __OSX_UNAVAILABLE 
#define __INT32_C(c) c
#define TAILQ_FIRST(head) ((head)->tqh_first)
#define control_character_bit 0x40
#define __ORDER_PDP_ENDIAN__ 3412
#define mvwaddchstr(win,y,x,str) (wmove(win,y,x) == ERR ? ERR : waddchnstr(win,str,-1))
#define MAX_CANON 1024
#define _POSIX_MEMLOCK (-1)
#define CEOL 0xff
#define _STRUCT_LAST_BRANCH_STATE struct __last_branch_state
#define LIST_SWAP(head1,head2,type,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH do { struct type *swap_tmp = LIST_FIRST((head1)); LIST_FIRST((head1)) = LIST_FIRST((head2)); LIST_FIRST((head2)) = swap_tmp; if ((swap_tmp = LIST_FIRST((head1))) != NULL) swap_tmp->field.le_prev = &LIST_FIRST((head1)); if ((swap_tmp = LIST_FIRST((head2))) != NULL) swap_tmp->field.le_prev = &LIST_FIRST((head2)); } while (0) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define _POSIX_OPEN_MAX 20
#define __DARWIN_MAXPATHLEN 1024
#define SIOCGIFGENERIC _IOWR('i', 58, struct ifreq)
#define F_NODIRECT 62
#define REG_LARGE 01000
#define memset(dest,...) __builtin___memset_chk (dest, __VA_ARGS__, __darwin_obsz0 (dest))
#define SIOCGIFFUNCTIONALTYPE _IOWR('i', 173, struct ifreq)
#define FILESEC_GUID FILESEC_UUID
#define DT_CHR 2
#define __va_copy(d,s) __builtin_va_copy(d,s)
#define FTW_DP 3
#define SIGSEGV 11
#define TIOCM_CAR 0100
#define getyx(win,y,x) (y = getcury(win), x = getcurx(win))
#define ACS_BLOCK NCURSES_ACS('0')
#define _Null_unspecified 
#define TTYDEF_OFLAG (OPOST | ONLCR)
#define RLIMIT_NPROC 7
#define _SC_MESSAGE_PASSING 33
#define _SYS_TIME_H_ 
#define IOPOL_STANDARD 5
#define F_NOTRACE 0x04
#define __MAC_11_0 110000
#define __INT_FAST32_TYPE__ int
#define __MAC_11_3 110300
#define getc_unlocked(fp) __sgetc(fp)
#define CBRK CEOL
#define _SYS_TTYDEFAULTS_H_ 
#define vline_set(c,n) wvline_set(stdscr,c,n)
#define bool _Bool
#define WA_RIGHT A_RIGHT
#define __DARWIN_NO_LONG_LONG 0
#define KEY_SUSPEND 0627
#define FOOTPRINT_INTERVAL_RESET 0x1
#define _SYS_RESOURCE_H_ 
#define KEY_REFRESH 0565
#define MSG_FAILED 5
#define __PTHREAD_RWLOCKATTR_SIZE__ 16
#define ILL_COPROC 7
#define IOPOL_VFS_STATFS_FORCE_NO_DATA_VOLUME 1
#define ST_RDONLY 0x00000001
#define _SC_THREAD_DESTRUCTOR_ITERATIONS 85
#define _CS_POSIX_V6_LPBIG_OFFBIG_LIBS 13
#define _CT_RUNE_T 
#define SIOCSIFBRDADDR _IOW('i', 19, struct ifreq)
#define SIG_DFL (void (*)(int))0
#define O_RDONLY 0x0000
#define EINVAL 22
#define WSTOPSIG(x) (_W_INT(x) >> 8)
#define _UINT8_T 
#define __UINT_LEAST16_TYPE__ short unsigned int
#define F_OK 0
#define _PC_PATH_MAX 5
#define _XOPEN_REALTIME_THREADS (-1)
#define __SAPP 0x0100
#define S_IREAD S_IRUSR
#define IOC_DIRMASK (__uint32_t)0xe0000000
#define _KEY_T 
#define ALIGN_UP(x,A) ((((x) + (A) - 1) / (A)) * (A))
#define KEY_REPLACE 0566
#define __MAC_10_15_4 101504
#define USHRT_MAX (SHRT_MAX * 2 + 1)
#define _INT64_T 
#define CIRCLEQ_CHECK_PREV(head,elm,field) 
#define __darwin_obsz(object) __builtin_object_size (object, _USE_FORTIFY_LEVEL > 1 ? 1 : 0)
#define SIOCDIFPHYADDR _IOW('i', 65, struct ifreq)
#define _MP_DB "pwd.db"
#define _POSIX_CHILD_MAX 25
#define _POSIX_MAX_INPUT 255
#define REG_NOSPEC 0020
#define WACS_NEQUAL NCURSES_WACS('|')
#define _STDARG_H 
#define TIOCSETD _IOW('t', 27, int)
#define WACS_BLOCK NCURSES_WACS('0')
#define EADDRNOTAVAIL 49
#define ESHUTDOWN 58
#define O_DP_GETRAWENCRYPTED 0x0001
#define F_SETLK 8
#define _SC_2_FORT_RUN 22
#define wins_wstr(w,t) wins_nwstr(w,t,-1)
#define __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ 110500
#define _PASSWORD_WARNDAYS 14
#define STAILQ_LAST(head,type,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH (STAILQ_EMPTY((head)) ? NULL : ((struct type *)(void *) ((char *)((head)->stqh_last) - __offsetof(struct type, field))))__NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_1(x) 
#define __UINT64_MAX__ 0xffffffffffffffffULL
#define __FLT_IS_IEC_60559__ 2
#define _POSIX_THREADS 200112L
#define _POSIX_THREAD_CPUTIME (-1)
#define in_wchnstr(c,n) win_wchnstr(stdscr,c,n)
#define F_SETOWN 6
#define REG_BACKTRACKING_MATCHER REG_BACKR
#define _POSIX_TRACE_USER_EVENT_MAX 32
#define __GNUC_WIDE_EXECUTION_CHARSET_NAME "UTF-32LE"
#define TTYDISC 0
#define F_CONFIRM 0x10
#define FIXINC_WRAP_STDIO_H_STDIO_STDARG_H 1
#define __WATCHOS_3_0 30000
#define __WATCHOS_3_1 30100
#define __WATCHOS_3_2 30200
#define _SYS_SYSLIMITS_H_ 
#define __FLT64X_DIG__ 18
#define NNN_MCLICK 8
#define FWRITE 0x00000002
#define KEY_SCOPY 0575
#define NOTE_DELETE 0x00000001
#define _PATH_PWD_MKDB "/usr/sbin/pwd_mkdb"
#define _SYS_FCNTL_H_ 
#define __INT8_TYPE__ signed char
#define _CS_XBS5_LP64_OFF64_LINTFLAGS 31
#define _UINTMAX_T 
#define _SC_PRIORITIZED_IO 34
#define SIOCDIFADDR _IOW('i', 25, struct ifreq)
#define A_DIM NCURSES_BITS(1U,12)
#define in_wchstr(c) win_wchstr(stdscr,c)
#define TAILQ_FOREACH(var,head,field) for ((var) = TAILQ_FIRST((head)); (var); (var) = TAILQ_NEXT((var), field))
#define EPWROFF 82
#define OPEN_MAX 10240
#define __DARWIN_NOCANCEL(sym) __asm("_" __STRING(sym) __DARWIN_SUF_NON_CANCELABLE)
#define _POSIX2_PBS_CHECKPOINT (-1)
#define F_GLOBAL_NOCACHE 55
#define NNN_BMS 1
#define _SC_SAVED_IDS 7
#define CLOCK_THREAD_CPUTIME_ID _CLOCK_THREAD_CPUTIME_ID
#define __GCC_ASM_FLAG_OUTPUTS__ 1
#define attr_off(a,o) wattr_off(stdscr,a,o)
#define KEY_FIND 0552
#define _SC_XOPEN_ENH_I18N 109
#define _SC_V6_ILP32_OFFBIG 104
#define _CS_POSIX_V6_ILP32_OFF32_CFLAGS 2
#define _SC_THREAD_SPORADIC_SERVER 92
#define __CAST_AWAY_QUALIFIER(variable,qualifier,type) (type) (long)(variable)
#define __UINT32_TYPE__ unsigned int
#define WACS_SBSB NCURSES_WACS('x')
#define BUTTON_RESERVED_EVENT(e,x) ((e) & NCURSES_MOUSE_MASK(x, 040))
#define _toupper(c) __toupper(c)
#define SIOCGIFPHYS _IOWR('i', 53, struct ifreq)
#define WACS_SBSS NCURSES_WACS('u')
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_1(x) 
#define F_NOSTDIN 0x40
#define BUTTON3_RESERVED_EVENT NCURSES_MOUSE_MASK(3, NCURSES_RESERVED_EVENT)
#define __API_AVAILABLE_BEGIN_GET_MACRO(...) 
#define _DIRENT_H_ 
#define F_TLOCK 2
#define __SOFF 0x1000
#define _WCHAR_H_ 
#define copycurname() xstrsncpy(lastname, ndents ? pdents[cur].name : "\0", NAME_MAX + 1)
#define CIRCLEQ_INSERT_AFTER(head,listelm,elm,field) do { CIRCLEQ_CHECK_NEXT(head, listelm, field); (elm)->field.cqe_next = (listelm)->field.cqe_next; (elm)->field.cqe_prev = (listelm); if ((listelm)->field.cqe_next == (void *)(head)) (head)->cqh_last = (elm); else (listelm)->field.cqe_next->field.cqe_prev = (elm); (listelm)->field.cqe_next = (elm); } while (0)
#define standout() wstandout(stdscr)
#define mvinstr(y,x,s) mvwinstr(stdscr,y,x,s)
#define _CS_POSIX_V6_WIDTH_RESTRICTED_ENVS 14
#define KEY_SEND 0602
#define F_PAGE 0x80
#define cleartimeout() timeout(-1)
#define __FLT_RADIX__ 2
#define ACS_SSSB ACS_LTEE
#define _STRUCT_FP_CONTROL struct __darwin_fp_control
#define __INT_LEAST16_TYPE__ short int
#define in_wch(c) win_wch(stdscr,c)
#define SIG_HOLD (void (*)(int))5
#define ACS_SSSS ACS_PLUS
#define __LDBL_EPSILON__ 1.08420217248550443400745280086994171e-19L
#define INTPTR_MAX 9223372036854775807L
#define GENERAL_INFO "BSD 2-Clause\nhttps://github.com/jarun/nnn"
#define __UINTMAX_C(c) c ## UL
#define O_SYNC 0x0080
#define VCMP 2
#define F_FULLFSYNC 51
#define minor(x) ((int32_t)((x) & 0xffffff))
#define FPE_INTOVF 8
#define KEY_MARK 0554
#define EHOSTUNREACH 65
#define NCURSES_EXT_FUNCS 20081102
#define PTHREAD_STACK_MIN 8192
#define _IOWR(g,n,t) _IOC(IOC_INOUT, (g), (n), sizeof(t))
#define __SSE_MATH__ 1
#define border_set(l,r,t,b,tl,tr,bl,br) wborder_set(stdscr,l,r,t,b,tl,tr,bl,br)
#define TIOCGETA _IOR('t', 19, struct termios)
#define _U_INT32_T 
#define _POSIX_ARG_MAX 4096
#define SA_USERSPACE_MASK (SA_ONSTACK | SA_RESTART | SA_RESETHAND | SA_NOCLDSTOP | SA_NODEFER | SA_NOCLDWAIT | SA_SIGINFO)
#define _SC_THREADS 96
#define SCROLLOFF 3
#define __k8 1
#define CLOCK_MONOTONIC_RAW_APPROX _CLOCK_MONOTONIC_RAW_APPROX
#define BUFSIZ 1024
#define _FSFILCNT_T 
#define __FLT32X_MIN__ 2.22507385850720138309023271733240406e-308F32x
#define slk_attr_on(a,v) ((v) ? ERR : slk_attron(a))
#define SIOCSIFVLAN _IOW('i', 126, struct ifreq)
#define NOTE_FFNOP 0x00000000
#define __SIG_ATOMIC_MAX__ 0x7fffffff
#define __API_TO_BE_DEPRECATED 100000
#define touchwin(win) wtouchln((win), 0, getmaxy(win), 1)
#define __QOS_CLASS_AVAILABLE(...) 
#define F_TEST 3
#define _UID_T 
#define va_copy(d,s) __builtin_va_copy(d,s)
#define KEY_SREDO 0620
#define KEY_B2 0536
#define ACS_NEQUAL NCURSES_ACS('|')
#define O_CLOEXEC 0x01000000
#define UTIL_SH_EXEC 7
#define KEY_SBEG 0572
#define INT_LEAST64_MAX INT64_MAX
#define FTS_NOINSTR 3
#define __WATCHOS_3_1_1 30101
#define BUTTON_DOUBLE_CLICK(e,x) ((e) & NCURSES_MOUSE_MASK(x, 010))
#define TAILQ_CHECK_PREV(elm,field) 
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define AT_REALDEV 0x0200
#define TIOCSDTR _IO('t', 121)
#define EOVERFLOW 84
#define _POSIX_SEMAPHORES (-1)
#define S_IRUSR 0000400
#define SIGPIPE 13
#define _ABSSUB(N,M) (((N) <= (M)) ? ((M) - (N)) : ((N) - (M)))
#define WA_BLINK A_BLINK
#define UCHAR_MAX (SCHAR_MAX * 2 + 1)
#define exitcurses() endwin()
#define __SIZEOF_PTRDIFF_T__ 8
#define _OFF_T 
#define __IPHONE_4_0 40000
#define __IPHONE_4_1 40100
#define __IPHONE_4_2 40200
#define __IPHONE_4_3 40300
#define SEEK_SET 0
#define SIOCGPGRP _IOR('s', 9, int)
#define inch() winch(stdscr)
#define _W_INT(w) (*(int *)&(w))
#define _POSIX_TRACE_EVENT_FILTER (-1)
#define SCHED_OTHER 1
#define _POSIX_TIMER_MAX 32
#define _ID_T 
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_2(x) x
#define __MISMATCH_TAGS_POP 
#define GCC_UNUSED 
#define _CTYPE_SW2 0x80000000L
#define UTIL_VI 11
#define SYNC_VOLUME_WAIT 0x02
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_4(x) x
#define NOTE_FFCOPY 0xc0000000
#define ACS_BSSB ACS_ULCORNER
#define TRACE_MOVE 0x0008
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_5(x) x
#define DESCRIPTOR_LEN 32
#define FTS_DONTCHDIR 0x01
#define FTW_D 1
#define _XOPEN_SOURCE_EXTENDED 
#define __DARWIN_64_BIT_INO_T 1
#define REG_ILLSEQ 17
#define KEY_CANCEL 0543
#define __TVOS_14_0 140000
#define PROMPT ">>> "
#define _POSIX_IPV6 200112L
#define __TVOS_14_2 140200
#define INTPTR_MIN (-INTPTR_MAX-1)
#define TRACE_ORDINARY 0x001F
#define INT8_C(v) (v)
#define FP_CHOP 3
#define SLIST_FOREACH_PREVPTR(var,varp,head,field) for ((varp) = &SLIST_FIRST((head)); ((var) = *(varp)) != NULL; (varp) = &SLIST_NEXT((var), field))
#define NOTE_RENAME 0x00000020
#define DST_MET 4
#define S_IFDIR 0040000
#define REG_ECOLLATE 3
#define KEY_F(n) (KEY_F0+(n))
#define _SC_THREAD_SAFE_FUNCTIONS 91
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_3(x) 
#define EPROCLIM 67
#define TRAP_BRKPT 1
#define _GCC_LIMITS_H_ 
#define __LDBL_DIG__ 18
#define TIOCSTI _IOW('t', 114, char)
#define _POSIX2_EQUIV_CLASS_MAX 2
#define W_OK (1<<1)
#define UTIL_OPENER 0
#define __nullable 
#define _POSIX_ASYNCHRONOUS_IO (-1)
#define __FLT64_IS_IEC_60559__ 2
#define __x86_64__ 1
#define TIOCNOTTY _IO('t', 113)
#define TOLOWER(ch) (((ch) >= 'A' && (ch) <= 'Z') ? ((ch) - 'A' + 'a') : (ch))
#define _POSIX2_COLL_WEIGHTS_MAX 2
#define RLIMIT_RSS RLIMIT_AS
#define __FLT32X_MIN_EXP__ (-1021)
#define MAC_OS_VERSION_11_0 110000
#define UINT_FAST32_MAX UINT32_MAX
#define KEY_OPTIONS 0561
#define O_CREAT 0x00000200
#define EPROTO 100
#define ENODEV 19
#define BUTTON1_DOUBLE_CLICKED NCURSES_MOUSE_MASK(1, NCURSES_DOUBLE_CLICKED)
#define _USE_FORTIFY_LEVEL 2
#define HARD_LINK 0x02
#define _EXECUTE_OK (1<<11)
#define __WCTYPE_H_ 
#define __INT_FAST16_MAX__ 0x7fff
#define __PTHREAD_SIZE__ 8176
#define INT_MAX __INT_MAX__
#define __deprecated __attribute__((__deprecated__))
#define _CS_XBS5_ILP32_OFF32_LINTFLAGS 23
#define ULLONG_MAX (LLONG_MAX * 2ULL + 1ULL)
#define attr_on(a,o) wattr_on(stdscr,a,o)
#define mvwins_wch(win,y,x,c) (wmove(win,y,x) == ERR ? ERR : wins_wch(win,c))
#define DBLCLK_INTERVAL_NS (400000000)
#define STAILQ_FOREACH(var,head,field) for((var) = STAILQ_FIRST((head)); (var); (var) = STAILQ_NEXT((var), field))
#define INT_LEAST64_MIN INT64_MIN
#define mvwgetstr(win,y,x,str) (wmove(win,y,x) == ERR ? ERR : wgetstr(win,str))
#define major(x) ((int32_t)(((u_int32_t)(x) >> 24) & 0xff))
#define _POSIX_MONOTONIC_CLOCK (-1)
#define F_SETNOSIGPIPE 73
#define WACS_GEQUAL NCURSES_WACS('z')
#define FTS_NAMEONLY 0x100
#define C_LNK (C_HRD + 1)
#define __FLT64_DIG__ 15
#define S_ISVTX 0001000
#define _SC_XBS5_LP64_OFF64 124
#define EROFS 30
#define SIOCSPGRP _IOW('s', 8, int)
#define _POSIX2_LINE_MAX 2048
#define __UINT_FAST32_MAX__ 0xffffffffU
#define MAC_OS_X_VERSION_10_11 101100
#define MAC_OS_X_VERSION_10_12 101200
#define MAC_OS_X_VERSION_10_13 101300
#define MAC_OS_X_VERSION_10_14 101400
#define MAC_OS_X_VERSION_10_16 101600
#define __UINT_LEAST64_TYPE__ long long unsigned int
#define __SYS_APPLEAPIOPTS_H__ 
#define _SC_SEMAPHORES 37
#define EBADMACHO 88
#define _SYS_EVENT_H_ 
#define __API_DEPRECATED_WITH_REPLACEMENT_END 
#define FP_RND_UP 2
#define TIOCDRAIN _IO('t', 94)
#define WORD_BIT 32
#define _SUSECONDS_T 
#define __FLT_HAS_QUIET_NAN__ 1
#define UINTMAX_MAX UINTMAX_C(18446744073709551615)
#define bkgdset(ch) wbkgdset(stdscr,ch)
#define _STDINT_H_ 
#define _SC_THREAD_ATTR_STACKADDR 82
#define KEY_DC 0512
#define INT32_C(v) (v)
#define _POSIX_TRACE_INHERIT (-1)
#define __FLT_MAX_10_EXP__ 38
#define NTOHLL(x) (x) = ntohll((__uint64_t)x)
#define POLL_OUT 2
#define DTTOIF(dirtype) ((dirtype) << 12)
#define _SC_TIMEOUTS 95
#define bkgrnd(c) wbkgrnd(stdscr,c)
#define CLOCK_UPTIME_RAW_APPROX _CLOCK_UPTIME_RAW_APPROX
#define __SEOF 0x0020
#define F_DUPFD_CLOEXEC 67
#define __LONG_MAX__ 0x7fffffffffffffffL
#define __IOS_EXTENSION_UNAVAILABLE(_msg) 
#define PTHREAD_PROCESS_PRIVATE 2
#define __FLT64X_HAS_DENORM__ 1
#define _PC_SYNC_IO 25
#define KEY_EVENT 0633
#define __dead2 __attribute__((__noreturn__))
#define _XOPEN_SHM (1)
#define KEY_SDC 0577
#define _FILESEC_UNSET_PROPERTY ((void *)0)
#define _SC_SEM_NSEMS_MAX 49
#define __FLT_HAS_INFINITY__ 1
#define __GNUC_EXECUTION_CHARSET_NAME "UTF-8"
#define __DARWIN_EXTSN_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_EXTSN __DARWIN_SUF_NON_CANCELABLE)
#define ENODATA 96
#define mvaddwstr(y,x,wstr) mvwaddwstr(stdscr,y,x,wstr)
#define KEY_PPAGE 0523
#define _POSIX_TIMERS (-1)
#define SIOCARPIPLL _IOWR('i', 40, struct ifreq)
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
#define hline(ch,n) whline(stdscr, ch, n)
#define TRACE_TPUTS 0x0002
#define __ENABLE_LEGACY_MAC_AVAILABILITY 1
#define PAIR_NUMBER(a) (NCURSES_CAST(int,(((a) & A_COLOR) >> NCURSES_ATTR_SHIFT)))
#define _BSD_PTRDIFF_T_ 
#define mvwin_wchnstr(win,y,x,c,n) (wmove(win,y,x) == ERR ? ERR : win_wchnstr(win,c,n))
#define TAILQ_SWAP(head1,head2,type,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH do { struct type *swap_first = (head1)->tqh_first; struct type **swap_last = (head1)->tqh_last; (head1)->tqh_first = (head2)->tqh_first; (head1)->tqh_last = (head2)->tqh_last; (head2)->tqh_first = swap_first; (head2)->tqh_last = swap_last; if ((swap_first = (head1)->tqh_first) != NULL) swap_first->field.tqe_prev = &(head1)->tqh_first; else (head1)->tqh_last = &(head1)->tqh_first; if ((swap_first = (head2)->tqh_first) != NULL) swap_first->field.tqe_prev = &(head2)->tqh_first; else (head2)->tqh_last = &(head2)->tqh_first; } while (0) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define WACS_LEQUAL NCURSES_WACS('y')
#define SIGXFSZ 25
#define O_FSYNC O_SYNC
#define __kpi_deprecated(_msg) 
#define __DTF_ATEND 0x0020
#define CCHARW_MAX 5
#define __UINT_FAST16_TYPE__ short unsigned int
#define mvwinchnstr(win,y,x,s,n) (wmove(win,y,x) == ERR ? ERR : winchnstr(win,s,n))
#define _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS 11
#define tolastln() move(xlines - 1, 0)
#define F_VOLPOSMODE 4
#define IOPOL_VFS_TRIGGER_RESOLVE_DEFAULT 0
#define IOPOL_UTILITY 4
#define WIFSTOPPED(x) (_WSTATUS(x) == _WSTOPPED && WSTOPSIG(x) != 0x13)
#define LIST_CHECK_HEAD(head,field) 
#define __INT_FAST32_WIDTH__ 32
#define SIOCGIF6LOWPAN _IOWR('i', 197, struct ifreq)
#define __IPHONE_12_0 120000
#define __IPHONE_12_1 120100
#define __IPHONE_12_2 120200
#define __IPHONE_12_3 120300
#define __IPHONE_12_4 120400
#define _POSIX_RAW_SOCKETS (-1)
#define _POSIX2_CHARCLASS_NAME_MAX 14
#define BUTTON4_CLICKED NCURSES_MOUSE_MASK(4, NCURSES_BUTTON_CLICKED)
#define _tolower(c) __tolower(c)
#define __CHAR16_TYPE__ short unsigned int
#define SIGTTIN 21
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_3(x) 
#define __PRAGMA_REDEFINE_EXTNAME 1
#define FP_STATE_BYTES 512
#define BIG_ENDIAN __DARWIN_BIG_ENDIAN
#define EXPR_NEST_MAX 32
#define __SERR 0x0040
#define SI_MESGQ 0x10005
#define __SIZE_WIDTH__ 64
#define __WATCHOS_7_0 70000
#define __WATCHOS_7_1 70100
#define __WATCHOS_7_3 70300
#define __WATCHOS_7_4 70400
#define IOPOL_MATERIALIZE_DATALESS_FILES_OFF 1
#define __SEG_FS 1
#define _PID_T 
#define __INT_LEAST16_MAX__ 0x7fff
#define INT_MIN (-INT_MAX - 1)
#define _SC_CLK_TCK 3
#define CKILL CTRL('u')
#define _STRUCT_FP_STATUS struct __darwin_fp_status
#define __OSX_AVAILABLE_BUT_DEPRECATED(_osxIntro,_osxDep,_iosIntro,_iosDep) 
#define GCC_SCANFLIKE(fmt,var) 
#define NCURSES_TPARM_VARARGS 1
#define pthread_cleanup_pop(execute) __self->__cleanup_stack = __handler.__next; if (execute) (__handler.__routine)(__handler.__arg); }
#define __INT64_MAX__ 0x7fffffffffffffffLL
#define _CS_XBS5_ILP32_OFF32_LDFLAGS 21
#define EDEADLK 11
#define _STRUCT_MCONTEXT32 struct __darwin_mcontext32
#define _FD_SET 
#define __SEG_GS 1
#define EADDRINUSE 48
#define __FLT32_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F32
#define EV_FLAG0 0x1000
#define KEY_SLEFT 0611
#define NCURSES_API 
#define A_CHARTEXT (NCURSES_BITS(1U,0) - 1U)
#define __SIG_ATOMIC_WIDTH__ 32
#define NOTE_PCTRLMASK (~NOTE_PDATAMASK)
#define _POSIX2_PBS_TRACK (-1)
#define __DARWIN_ALIAS(sym) __asm("_" __STRING(sym) __DARWIN_SUF_UNIX03)
#define F_SETSIZE 43
#define ISKMAP 1
#define __MISMATCH_TAGS_PUSH 
#define _STRUCT_X86_DEBUG_STATE32 struct __darwin_x86_debug_state32
#define __INT_LEAST64_TYPE__ long long int
#define SIGCHLD 20
#define __APPLE_API_OBSOLETE 
#define __INT16_TYPE__ short int
#define __INT_LEAST8_TYPE__ signed char
#define FTS_WHITEOUT 0x080
#define PTHREAD_MUTEX_POLICY_FAIRSHARE_NP 1
#define __darwin_obsz0(object) __builtin_object_size (object, 0)
#define COLOR_GREEN 2
#define STAILQ_CONCAT(head1,head2) do { if (!STAILQ_EMPTY((head2))) { *(head1)->stqh_last = (head2)->stqh_first; (head1)->stqh_last = (head2)->stqh_last; STAILQ_INIT((head2)); } } while (0)
#define __STDC_VERSION__ 201710L
#define UTIL_RCLONE 10
#define FTS_NOSTAT_TYPE 0x800
#define CPUMON_MAKE_FATAL 0x1000
#define __SIZEOF_INT__ 4
#define _WEXT_OK (1<<18)
#define EDOM 33
#define TAILQ_INIT(head) do { TAILQ_FIRST((head)) = NULL; (head)->tqh_last = &TAILQ_FIRST((head)); QMD_TRACE_HEAD(head); } while (0)
#define _PTHREAD_COND_T 
#define IOPOL_NORMAL IOPOL_IMPORTANT
#define _MACHTYPES_H_ 
#define NNN_FCOLORS 5
#define NCURSES_INLINE inline
#define NCURSES_STATIC 
#define __INT_FAST8_MAX__ 0x7f
#define _POSIX_FSYNC 200112L
#define UINTMAX_C(v) (v ## UL)
#define NOTE_LINK 0x00000010
#define __FLT128_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define __INTPTR_MAX__ 0x7fffffffffffffffL
#define NOTE_REAP ((unsigned int)eNoteReapDeprecated )
#define LIST_HEAD(name,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct name { struct type *lh_first; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define S_Z 0x9
#define RUSAGE_SELF 0
#define ECONNRESET 54
#define _POSIX_CLOCK_SELECTION (-1)
#define _SYS_STDIO_H_ 
#define _STRUCT_X86_DEBUG_STATE64 struct __darwin_x86_debug_state64
#define _POSIX_TRACE_SYS_MAX 8
#define _POSIX_TYPED_MEMORY_OBJECTS (-1)
#define SIGSYS 12
#define PTHREAD_RECURSIVE_MUTEX_INITIALIZER {_PTHREAD_RECURSIVE_MUTEX_SIG_init, {0}}
#define TIOCEXCL _IO('t', 13)
#define S_I 0x3
#define S_N 0x0
#define ENXIO 6
#define SIGSTOP 17
#define CIRCLEQ_INIT(head) do { (head)->cqh_first = (void *)(head); (head)->cqh_last = (void *)(head); } while (0)
#define __TVOS_13_0 130000
#define __TVOS_13_2 130200
#define __TVOS_13_3 130300
#define __TVOS_13_4 130400
#define ntohl(x) __DARWIN_OSSwapInt32(x)
#define SIOCSIFPHYS _IOW('i', 54, struct ifreq)
#define SA_NOCLDSTOP 0x0008
#define _XOPEN_IOV_MAX 16
#define ntohs(x) __DARWIN_OSSwapInt16(x)
#define CLOCK_MONOTONIC _CLOCK_MONOTONIC
#define __swift_compiler_version_at_least(...) 1
#define _POSIX2_PBS (-1)
#define _MALLOC_UNDERSCORE_MALLOC_H_ 
#define EBADRPC 72
#define __DARWIN_LITTLE_ENDIAN 1234
#define __FLT64_HAS_QUIET_NAN__ 1
#define ST_NOSUID 0x00000002
#define __SWIFT_UNAVAILABLE 
#define _SECURE__STDIO_H_ 
#define _PC_ALLOC_SIZE_MIN 16
#define UTIL_TRASH_CLI 18
#define _IOLBF 1
#define __TVOS_UNAVAILABLE 
#define ILL_PRVREG 6
#define A_ATTRIBUTES NCURSES_BITS(~(1U - 1U),0)
#define __LITTLE_ENDIAN__ 1
#define SV_NODEFER SA_NODEFER
#define mvwin_wch(win,y,x,c) (wmove(win,y,x) == ERR ? ERR : win_wch(win,c))
#define ISODD(x) ((x) & 1)
#define ACS_PI NCURSES_ACS('{')
#define TIOCPKT_FLUSHREAD 0x01
#define FTS_ERR 7
#define SIOCGIFDSTADDR _IOWR('i', 34, struct ifreq)
#define BUTTON1_PRESSED NCURSES_MOUSE_MASK(1, NCURSES_BUTTON_PRESSED)
#define __DARWIN_WCHAR_MAX __WCHAR_MAX__
#define CAPACITY 1
#define WIFSIGNALED(x) (_WSTATUS(x) != _WSTOPPED && _WSTATUS(x) != 0)
#define WACS_BOARD NCURSES_WACS('h')
#define COLOR_RED 1
#define innwstr(c,n) winnwstr(stdscr,c,n)
#define TIOCDSIMICROCODE _IO('t', 85)
#define L_XTND SEEK_END
#define mvwget_wstr(win,y,x,t) (wmove(win,y,x) == ERR ? ERR : wget_wstr(win,t))
#define TRACE_CCALLS 0x0400
#define WA_VERTICAL A_VERTICAL
#define RLIMIT_FOOTPRINT_INTERVAL 0x4
#define _SC_THREAD_CPUTIME 84
#define _BSD_MACHINE_ENDIAN_H_ 
#define __FLT32_MIN_10_EXP__ (-37)
#define ___POSIX_C_DEPRECATED_STARTING_199209L 
#define FAPPEND O_APPEND
#define O_ALERT 0x20000000
#define __FLT32X_DIG__ 15
#define attrset(at) wattrset(stdscr,at)
#define insstr(s) winsstr(stdscr,s)
#define NTOHL(x) (x) = ntohl((__uint32_t)x)
#define NTOHS(x) (x) = ntohs((__uint16_t)x)
#define TRUE 1
#define EV_ERROR 0x4000
#define _PC_EXTENDED_SECURITY_NP 13
#define _POSIX2_PBS_LOCATE (-1)
#define __WORDSIZE 64
#define KEY_NPAGE 0522
#define AT_REMOVEDIR 0x0080
#define __IPHONE_8_0 80000
#define __IPHONE_8_1 80100
#define __PTRDIFF_WIDTH__ 64
#define __IPHONE_8_3 80300
#define __IPHONE_8_4 80400
#define INT64_MIN (-INT64_MAX-1)
#define __BEGIN_DECLS 
#define mvgetstr(y,x,str) mvwgetstr(stdscr,y,x,str)
#define __LDBL_MANT_DIG__ 64
#define ___WCTYPE_H_ 
#define _STRUCT_OPMASK_REG struct __darwin_opmask_reg
#define _PC_REC_MIN_XFER_SIZE 22
#define FTW_NS 4
#define _PTHREAD_MUTEX_SIG_init 0x32AAABA7
#define __PTHREAD_ATTR_SIZE__ 56
#define getparyx(win,y,x) (y = getpary(win), x = getparx(win))
#define __exported_push _Pragma("GCC visibility push(default)")
#define __CONSTANT_CFSTRINGS__ 1
#define SIOCSHIWAT _IOW('s', 0, int)
#define mvgetnstr(y,x,str,n) mvwgetnstr(stdscr,y,x,str,n)
#define __SRD 0x0004
#define EVFILT_WRITE (-2)
#define S_ISTXT S_ISVTX
#define __DARWIN_ONLY_64_BIT_INO_T 0
#define FTS_NOCHDIR 0x004
#define __FLT64_HAS_INFINITY__ 1
#define __FLT64X_MAX__ 1.18973149535723176502126385303097021e+4932F64x
#define KEY_CLEAR 0515
#define P_REPLACE 3
#define false 0
#define POLL_HUP 6
#define _SC_TRACE_SYS_MAX 129
#define MSG_LINK_PREFIX 20
#define __DARWIN_OSSwapInt16(x) ((__uint16_t)(__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt16(x) : _OSSwapInt16(x)))
#define ELAST 106
#define _GCC_MAX_ALIGN_T 
#define mvinnwstr(y,x,c,n) mvwinnwstr(stdscr,y,x,c,n)
#define mvchgat(y,x,n,a,c,o) mvwchgat(stdscr,y,x,n,a,c,o)
#define RLIMIT_NOFILE 8
#define REGEX_MAX 48
#define BUS_ADRERR 2
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#define NCURSES_PUBLIC_VAR(name) _nc_ ##name
#define __code_model_small__ 1
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_3(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_4(x) x
#define _STRUCT_X86_PAGEIN_STATE struct __x86_pagein_state
#define AT_SYMLINK_NOFOLLOW 0x0020
#define __OSX_EXTENSION_UNAVAILABLE(_msg) 
#define _XOPEN_REALTIME (-1)
#define KEY_NEXT 0557
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define MAC_OS_X_VERSION_10_12_2 101202
#define KEY_PREVIOUS 0562
#define _POSIX_V7_ILP32_OFFBIG __ILP32_OFFBIG
#define mouse_trafo(y,x,to_screen) wmouse_trafo(stdscr,y,x,to_screen)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_3(x) 
#define mvgetch(y,x) mvwgetch(stdscr,y,x)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_5(x) 
#define ACS_BSSS ACS_TTEE
#define _POSIX2_LOCALEDEF 200112L
#define FILENAME_MAX 1024
#define TAILQ_INSERT_HEAD(head,elm,field) do { TAILQ_CHECK_HEAD(head, field); if ((TAILQ_NEXT((elm), field) = TAILQ_FIRST((head))) != NULL) TAILQ_FIRST((head))->field.tqe_prev = &TAILQ_NEXT((elm), field); else (head)->tqh_last = &TAILQ_NEXT((elm), field); TAILQ_FIRST((head)) = (elm); (elm)->field.tqe_prev = &TAILQ_FIRST((head)); QMD_TRACE_HEAD(head); QMD_TRACE_ELEM(&(elm)->field); } while (0)
#define CLD_EXITED 1
#define TIOCSIG _IO('t', 95)
#define __DARWIN_WCHAR_MIN (-0x7fffffff - 1)
#define __DARWIN_OSSwapInt32(x) (__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt32(x) : _OSSwapInt32(x))
#define ESOCKTNOSUPPORT 44
#define __k8__ 1
#define __INTPTR_TYPE__ long int
#define __UINT16_TYPE__ short unsigned int
#define __WCHAR_TYPE__ int
#define FILE_MISSING 0x08
#define _SYS__PTHREAD_TYPES_H_ 
#define _CTYPE_C 0x00000200L
#define NOTE_EXITSTATUS 0x04000000
#define NCURSES_ACS(c) (acs_map[NCURSES_CAST(unsigned char,c)])
#define LC_NUMERIC 4
#define MSG_ZERO 0
#define FALSE 0
#define _STRUCT_TIMEVAL64 
#define ACS_BBSS ACS_URCORNER
#define __API_UNAVAILABLE_END 
#define _POSIX_MEMLOCK_RANGE (-1)
#define __STDIO_H_ 
#define TIOCSTOP _IO('t', 111)
#define E2BIG 7
#define S_IEXEC S_IXUSR
#define NCURSES_VERSION_MINOR 7
#define NOTE_FFOR 0x80000000
#define S_ISBLK(m) (((m) & S_IFMT) == S_IFBLK)
#define FTS_INIT 9
#define REG_NOSUB 0004
#define __pic__ 2
#define errexit() printerr(__LINE__)
#define TIOCGSIZE TIOCGWINSZ
#define _T_PTRDIFF_ 
#define mvdelch(y,x) mvwdelch(stdscr,y,x)
#define __UINTPTR_MAX__ 0xffffffffffffffffUL
#define ACS_BULLET NCURSES_ACS('~')
#define __INT_FAST64_WIDTH__ 64
#define __volatile volatile
#define WA_UNDERLINE A_UNDERLINE
#define _CTYPE_Q 0x00200000L
#define _CTYPE_G 0x00000800L
#define SIGALRM 14
#define __STDC_WANT_LIB_EXT1__ 1
#define _XOPEN_PATH_MAX 1024
#define SLIPDISC 4
#define __API_DEPRECATED_WITH_REPLACEMENT(...) 
#define __DARWIN_OSSwapInt64(x) (__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt64(x) : _OSSwapInt64(x))
#define FP_RND_DOWN 1
#define SI_ASYNCIO 0x10004
#define __MAC_10_12_1 101201
#define __MAC_10_12_2 101202
#define __MAC_10_12_4 101204
#define IOPOL_VFS_SKIP_MTIME_UPDATE_OFF 0
#define XDELAY_INTERVAL_MS (350000)
#define mvwaddchnstr(win,y,x,str,n) (wmove(win,y,x) == ERR ? ERR : waddchnstr(win,str,n))
#define EDESTADDRREQ 39
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_3(x) 
#define MSG_UNSUPPORTED 26
#define ins_nwstr(t,n) wins_nwstr(stdscr,t,n)
#define ETIME 101
#define __INT_FAST64_MAX__ 0x7fffffffffffffffLL
#define NOTE_PDATAMASK 0x000fffff
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define _SC_RTSIG_MAX 48
#define __FLT_NORM_MAX__ 3.40282346638528859811704183484516925e+38F
#define __FLT32_HAS_INFINITY__ 1
#define INT_FAST32_MAX INT32_MAX
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_2(x) 
#define __TVOS_DEPRECATED(_start,_dep,_msg) 
#define __FLT64X_MAX_EXP__ 16384
#define _SYS_STAT_H_ 
#define DOT_FILTER_LEN 7
#define TAILQ_CONCAT(head1,head2,field) do { if (!TAILQ_EMPTY(head2)) { *(head1)->tqh_last = (head2)->tqh_first; (head2)->tqh_first->field.tqe_prev = (head1)->tqh_last; (head1)->tqh_last = (head2)->tqh_last; TAILQ_INIT((head2)); QMD_TRACE_HEAD(head1); QMD_TRACE_HEAD(head2); } } while (0)
#define __UINT_FAST64_TYPE__ long long unsigned int
#define UTIL_NTFY 15
#define KEVENT_FLAG_ERROR_EVENTS 0x000002
#define NNN_COLORS 4
#define ACS_SSBS ACS_BTEE
#define WNOWAIT 0x00000020
#define _SC_2_PBS 59
#define SED "gsed"
#define _RUNETYPE_H_ 
#define TIOCFLUSH _IOW('t', 16, int)
#define _STRUCT_MCONTEXT_AVX512_32 struct __darwin_mcontext_avx512_32
#define BUTTON_CTRL NCURSES_MOUSE_MASK(5, 0001L)
#define CEOF CTRL('d')
#define STDIN_FILENO 0
#define WA_LEFT A_LEFT
#define SIOCSIFLLADDR _IOW('i', 60, struct ifreq)
#define UINT_FAST8_MAX UINT8_MAX
#define NOTE_EXIT_DETAIL_MASK 0x00070000
#define _GCC_PTRDIFF_T 
#define BUTTON4_TRIPLE_CLICKED NCURSES_MOUSE_MASK(4, NCURSES_TRIPLE_CLICKED)
#define __INT_MAX__ 0x7fffffff
#define S_IXUSR 0000100
#define _POSIX_ADVISORY_INFO (-1)
#define _CADDR_T 
#define STAILQ_INSERT_TAIL(head,elm,field) do { STAILQ_NEXT((elm), field) = NULL; *(head)->stqh_last = (elm); (head)->stqh_last = &STAILQ_NEXT((elm), field); } while (0)
#define FTW_F 0
#define DT_WHT 14
#define mvwinsstr(win,y,x,s) (wmove(win,y,x) == ERR ? ERR : winsstr(win,s))
#define TRACE_CALLS 0x0020
#define F_GETNOSIGPIPE 74
#define UTIL_RM_RF 20
#define NL_MSGMAX 32767
#define _LC_LAST 7
#define UINT8_MAX 255
#define addnwstr(wstr,n) waddnwstr(stdscr,wstr,n)
#define SESSIONS_VERSION 1
#define _UINT16_T 
#define __LPBIG_OFFBIG (1)
#define __API_DEPRECATED_REP_GET_MACRO(...) 
#define WA_BOLD A_BOLD
#define getmaxyx(win,y,x) (y = getmaxy(win), x = getmaxx(win))
#define UINT_MAX (INT_MAX * 2U + 1U)
#define _POSIX_MQ_OPEN_MAX 8
#define NOTE_FUNLOCK 0x00000100
#define _U_INT 
#define BUTTON_SHIFT NCURSES_MOUSE_MASK(5, 0002L)
#define LLONG_MAX __LONG_LONG_MAX__
#define F_GETPATH_NOFIRMLINK 102
#define KEY_DL 0510
#define MSG_LIMIT 10
#define ___POSIX_C_DEPRECATED_STARTING_199506L 
#define _CTYPE_T 0x00100000L
#define BUTTON3_RELEASED NCURSES_MOUSE_MASK(3, NCURSES_BUTTON_RELEASED)
#define stpcpy(dest,...) __builtin___stpcpy_chk (dest, __VA_ARGS__, __darwin_obsz (dest))
#define C_EXE (C_DIR + 1)
#define __INT64_TYPE__ long long int
#define O_SHLOCK 0x00000010
#define KEY_SDL 0600
#define EIO 5
#define IOCGROUP(x) (((x) >> 8) & 0xff)
#define __FLT_MAX_EXP__ 128
#define SIOCGIFNETMASK _IOWR('i', 37, struct ifreq)
#define _CTYPE_U 0x00008000L
#define CLOCK_PROCESS_CPUTIME_ID _CLOCK_PROCESS_CPUTIME_ID
#define _SC_AIO_PRIO_DELTA_MAX 44
#define _SC_MONOTONIC_CLOCK 74
#define LIST_ENTRY(type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct { struct type *le_next; struct type **le_prev; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define ENETUNREACH 51
#define EXDEV 18
#define O_DIRECTORY 0x00100000
#define _PTHREAD_MUTEXATTR_T 
#define BUTTON1_CLICKED NCURSES_MOUSE_MASK(1, NCURSES_BUTTON_CLICKED)
#define S_IRGRP 0000040
#define UINT32_C(v) (v ## U)
#define _SC_V6_LPBIG_OFFBIG 106
#define __swift_unavailable(_msg) 
#define __ORDER_BIG_ENDIAN__ 4321
#define __header_inline extern __inline __attribute__((__gnu_inline__))
#define EVFILT_EXCEPT (-15)
#define _IONBF 2
#define __DBL_MANT_DIG__ 53
#define _RSIZE_T 
#define EV_DISPATCH 0x0080
#define _POSIX_V6_LP64_OFF64 __LP64_OFF64
#define _POSIX_V6_ILP32_OFF32 __ILP32_OFF32
#define __LASTBRANCH_MAX 32
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
#define LC_CTYPE 2
#define __WINT_TYPE__ int
#define __UINT_LEAST32_TYPE__ unsigned int
#define EDQUOT 69
#define _MASTERPASSWD "master.passwd"
#define __SIZEOF_SHORT__ 2
#define __FLT32_NORM_MAX__ 3.40282346638528859811704183484516925e+38F32
#define NCURSES_VERSION_MAJOR 5
#define __SSE__ 1
#define _CTYPE_A 0x00000100L
#define _CTYPE_B 0x00020000L
#define _XBS5_ILP32_OFFBIG __ILP32_OFFBIG
#define _CTYPE_D 0x00000400L
#define _CTYPE_I 0x00080000L
#define _CTYPE_L 0x00001000L
#define _CTYPE_P 0x00002000L
#define POLL_PRI 5
#define _SC_GETPW_R_SIZE_MAX 71
#define _CTYPE_X 0x00010000L
#define _STRUCT_X86_AVX512_STATE64 struct __darwin_x86_avx512_state64
#define __LDBL_MIN_EXP__ (-16381)
#define TABLDISC 3
#define KEYMAP_SIZE 256
#define FIONCLEX _IO('f', 2)
#define WACS_S7 NCURSES_WACS('r')
#define KEY_BEG 0542
#define CPF_OVERWRITE 0x0001
#define FPE_FLTINV 5
#define __FLT64_MAX__ 1.79769313486231570814527423731704357e+308F64
#define _POSIX_VDISABLE ((unsigned char)'\377')
#define NOTE_LOWAT 0x00000001
#define ASCII_MAX 128
#define __NULLABILITY_COMPLETENESS_PUSH 
#define mvvline_set(y,x,c,n) mvwvline_set(stdscr,y,x,c,n)
#define __DARWIN_C_FULL 900000L
#define STAILQ_EMPTY(head) ((head)->stqh_first == NULL)
#define mvwinwstr(win,y,x,c) (wmove(win,y,x) == ERR ? ERR : winwstr(win,c))
#define __MACH__ 1
#define TIOCDCDTIMESTAMP _IOR('t', 88, struct timeval)
#define ENOSPC 28
#define IOPOL_TYPE_DISK 0
#define _STRUCT_X86_EXCEPTION_STATE64 struct __darwin_x86_exception_state64
#define __amd64__ 1
#define SLIST_INIT(head) do { SLIST_FIRST((head)) = NULL; } while (0)
#define __WINT_WIDTH__ 32
#define mvwaddwstr(win,y,x,wstr) (wmove(win,y,x) == ERR ? ERR : waddwstr(win,wstr))
#define _POSIX_THREAD_PRIO_INHERIT (-1)
#define NCURSES_OPAQUE 1
#define __INT_LEAST8_MAX__ 0x7f
#define __INT_LEAST64_WIDTH__ 64
#define __LDBL_MAX_EXP__ 16384
#define RLIMIT_CPU_USAGE_MONITOR 0x2
#define __FLT32X_MAX_10_EXP__ 308
#define __DARWIN_SUF_EXTSN "$DARWIN_EXTSN"
#define LLONG_MIN (-LLONG_MAX - 1LL)
#define RLIMIT_DATA 2
#define _LIBGEN_H_ 
#define S_ISREG(m) (((m) & S_IFMT) == S_IFREG)
#define NOTE_USECONDS 0x00000002
#define A_LOW NCURSES_BITS(1U,19)
#define winstr(w,s) winnstr(w, s, -1)
#define SV_SIGINFO SA_SIGINFO
#define BUTTON3_PRESSED NCURSES_MOUSE_MASK(3, NCURSES_BUTTON_PRESSED)
#define KEY_SNEXT 0614
#define NOTE_EXIT_DECRYPTFAIL 0x00010000
#define _STRUCT_UCONTEXT struct __darwin_ucontext
#define ACS_LANTERN NCURSES_ACS('i')
#define SIGTSTP 18
#define mvadd_wchstr(y,x,s) mvwadd_wchstr(stdscr,y,x,s)
#define __SIZEOF_INT128__ 16
#define PTRDIFF_MIN INTMAX_MIN
#define __FLT64X_IS_IEC_60559__ 2
#define TAILQ_HEAD(name,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct name { struct type *tqh_first; struct type **tqh_last; TRACEBUF } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define F_GETLKPID 66
#define TIOCEXT _IOW('t', 96, int)
#define __LDBL_MAX_10_EXP__ 4932
#define TIOCSCONS _IO('t', 99)
#define __ATOMIC_RELAXED 0
#define __signed signed
#define _STRUCT_XMM_REG struct __darwin_xmm_reg
#define RLIMIT_FSIZE 1
#define FTS_ISW 0x04
#define TIOCOUTQ _IOR('t', 115, int)
#define _CS_XBS5_ILP32_OFF32_LIBS 22
#define __DBL_EPSILON__ ((double)2.22044604925031308084726333618164062e-16L)
#define EMSGSIZE 40
#define UTIL_BSDTAR 2
#define L_SET SEEK_SET
#define _SC_THREAD_STACK_MIN 93
#define KEY_REDO 0563
#define ERR (-1)
#define BC_SCALE_MAX 99
#define __FLT128_MIN__ 3.36210314311209350626267781732175260e-4932F128
#define IOPOL_SCOPE_THREAD 1
#define _PTHREAD_ATTR_T 
#define _SYS__SELECT_H_ 
#define _LP64 1
#define UTIL_SSHFS 9
#define SIGEMT 7
#define _SC_THREAD_ATTR_STACKSIZE 83
#define SLIST_REMOVE_AFTER(elm,field) do { SLIST_NEXT(elm, field) = SLIST_NEXT(SLIST_NEXT(elm, field), field); } while (0)
#define ESC (27)
#define __UINT8_C(c) c
#define MAX(x,y) ((x) > (y) ? (x) : (y))
#define RLIMIT_MEMLOCK 6
#define KEY_CTAB 0525
#define __API_AVAILABLE(...) 
#define EFBIG 27
#define __FLT64_MAX_EXP__ 1024
#define TIOCPKT_DATA 0x00
#define SYM_ORPHAN 0x04
#define _INT8_T 
#define _MBSTATE_T 
#define SIGKILL 9
#define FREAD 0x00000001
#define TIOCUCNTL _IOW('t', 102, int)
#define ESRCH 3
#define IOV_MAX 1024
#define CWERASE CTRL('w')
#define _VA_LIST 
#define __INT_LEAST32_TYPE__ int
#define TIMEVAL_TO_TIMESPEC(tv,ts) { (ts)->tv_sec = (tv)->tv_sec; (ts)->tv_nsec = (tv)->tv_usec * 1000; }
#define SLIST_FOREACH(var,head,field) for ((var) = SLIST_FIRST((head)); (var); (var) = SLIST_NEXT((var), field))
#define __API_UNAVAILABLE(...) 
#define EHOSTDOWN 64
#define fropen(cookie,fn) funopen(cookie, fn, 0, 0, 0)
#define F_NOWAIT 0x02
#define SIOCIFDESTROY _IOW('i', 121, struct ifreq)
#define SIOCGIFCONF _IOWR('i', 36, struct ifconf)
#define SEEK_END 2
#define __SIZEOF_WCHAR_T__ 4
#define __UINT64_TYPE__ long long unsigned int
#define WACS_TTEE WACS_BSSS
#define __has_feature(x) 0
#define wattron(win,at) wattr_on(win, NCURSES_CAST(attr_t, at), NULL)
#define PTHREAD_SCOPE_SYSTEM 1
#define __GNUC_PATCHLEVEL__ 0
#define __DARWIN_1050(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050)
#define S_IWOTH 0000002
#define MSG_OVERWRITE 13
#define NCURSES_TRIPLE_CLICKED 020L
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_15_1(x) x
#define ENV_EDITOR 2
#define ENOLCK 77
#define MAC_OS_X_VERSION_10_10 101000
#define IOPOL_VFS_CONTENT_PROTECTION_DEFAULT 0
#define ENFILE 23
#define _SCROLLWIN 0x08
#define F_SETLKW 9
#define UF_IMMUTABLE 0x00000002
#define _UUID_T 
#define __FLT128_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define _XOPEN_NAME_MAX 255
#define CIRCLEQ_REMOVE(head,elm,field) do { CIRCLEQ_CHECK_NEXT(head, elm, field); CIRCLEQ_CHECK_PREV(head, elm, field); if ((elm)->field.cqe_next == (void *)(head)) (head)->cqh_last = (elm)->field.cqe_prev; else (elm)->field.cqe_next->field.cqe_prev = (elm)->field.cqe_prev; if ((elm)->field.cqe_prev == (void *)(head)) (head)->cqh_first = (elm)->field.cqe_next; else (elm)->field.cqe_prev->field.cqe_next = (elm)->field.cqe_next; } while (0)
#define _SC_IOV_MAX 56
#define __DARWIN_OSSwapConstInt16(x) ((__uint16_t)((((__uint16_t)(x) & 0xff00U) >> 8) | (((__uint16_t)(x) & 0x00ffU) << 8)))
#define mvwaddstr(win,y,x,str) (wmove(win,y,x) == ERR ? ERR : waddnstr(win,str,-1))
#define _SC_PASS_MAX 131
#define W_STOPCODE(sig) ((sig) << 8 | _WSTOPPED)
#define SIOCGIFASYNCMAP _IOWR('i', 124, struct ifreq)
#define FTS_NSOK 11
#define _STDDEF_H_ 
#define MAC_OS_X_VERSION_10_15 101500
#define _SC_MEMORY_PROTECTION 32
#define echochar(c) wechochar(stdscr,c)
#define _POSIX_MAPPED_FILES 200112L
#define mvwinstr(win,y,x,s) (wmove(win,y,x) == ERR ? ERR : winstr(win,s))
#define KEY_A3 0535
#define _PTHREAD_FIRSTFIT_MUTEX_SIG_init 0x32AAABA3
#define __FLT64_NORM_MAX__ 1.79769313486231570814527423731704357e+308F64
#define DPRINTF_P(x) 
#define SIGXCPU 24
#define SIOCGIFSTATUS _IOWR('i', 61, struct ifstat)
#define __FLT128_HAS_QUIET_NAN__ 1
#define O_TRUNC 0x00000400
#define DPRINTF_U(x) 
#define CLK_TCK __DARWIN_CLK_TCK
#define ENOSYS 78
#define _CS_POSIX_V6_ILP32_OFF32_LIBS 4
#define __INTMAX_MAX__ 0x7fffffffffffffffL
#define _SC_LOGIN_NAME_MAX 73
#define OFF_MAX LLONG_MAX
#define RAND_MAX 0x7fffffff
#define S_IFWHT 0160000
#define __DARWIN_OSSwapConstInt32(x) ((__uint32_t)((((__uint32_t)(x) & 0xff000000U) >> 24) | (((__uint32_t)(x) & 0x00ff0000U) >> 8) | (((__uint32_t)(x) & 0x0000ff00U) << 8) | (((__uint32_t)(x) & 0x000000ffU) << 24)))
#define NNN_TRASH 13
#define __MAC_10_11_2 101102
#define _SC_MAPPED_FILES 47
#define IOPOL_SCOPE_DARWIN_BG 2
#define SF_RESTRICTED 0x00080000
#define __INT_FAST8_TYPE__ signed char
#define NOTE_EXIT_CSERROR 0x00040000
#define mvhline_set(y,x,c,n) mvwhline_set(stdscr,y,x,c,n)
#define _POSIX_CPUTIME (-1)
#define QMD_TRACE_ELEM(elem) 
#define __DARWIN_FD_SETSIZE 1024
#define __TVOS_11_4 110400
#define TIOCM_LE 0001
#define S_IWRITE S_IWUSR
#define KEY_C1 0537
#define KEY_C3 0540
#define __FLT64X_MIN__ 3.36210314311209350626267781732175260e-4932F64x
#define _SC_AIO_MAX 43
#define EBADARCH 86
#define FTS_DEFAULT 3
#define __DEQUALIFY(type,var) __CAST_AWAY_QUALIFIER(var, const volatile, type)
#define va_arg(v,l) __builtin_va_arg(v,l)
#define A_REVERSE NCURSES_BITS(1U,10)
#define _REGEX_H_ 
#define REG_EXTENDED 0001
#define CIRCLEQ_HEAD(name,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct name { struct type *cqh_first; struct type *cqh_last; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define MSG_RCLONE_DELAY 31
#define _SC_CHILD_MAX 2
#define SIOCIFCREATE2 _IOWR('i', 122, struct ifreq)
#define TIMESPEC_TO_TIMEVAL(tv,ts) { (tv)->tv_sec = (ts)->tv_sec; (tv)->tv_usec = (ts)->tv_nsec / 1000; }
#define _SC_2_CHAR_TERM 20
#define PTHREAD_CREATE_JOINABLE 1
#define _BSD_MACHINE_TYPES_H_ 
#define RUSAGE_INFO_V1 1
#define __GNUC_STDC_INLINE__ 1
#define nocrmode() nocbreak()
#define P_tmpdir "/var/tmp/"
#define SV_NOCLDSTOP SA_NOCLDSTOP
#define __FLT64_HAS_DENORM__ 1
#define RUSAGE_INFO_V2 2
#define RUSAGE_INFO_V3 3
#define RUSAGE_INFO_V4 4
#define RUSAGE_INFO_V5 5
#define filterset() (g_ctx[cfg.curctx].c_fltr[1])
#define KEY_SHOME 0607
#define BUTTON4_PRESSED NCURSES_MOUSE_MASK(4, NCURSES_BUTTON_PRESSED)
#define ENOTSUP 45
#define SLIST_HEAD(name,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct name { struct type *slh_first; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define _PTHREAD_SWIFT_IMPORTER_NULLABILITY_COMPAT defined(SWIFT_CLASS_EXTRA) && (!defined(SWIFT_SDK_OVERLAY_PTHREAD_EPOCH) || (SWIFT_SDK_OVERLAY_PTHREAD_EPOCH < 1))
#define __FLT32_EPSILON__ 1.19209289550781250000000000000000000e-7F32
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_1(x) 
#define __SMOD 0x2000
#define RENAME_SWAP 0x00000002
#define INTMAX_MAX INTMAX_C(9223372036854775807)
#define SELECT ' '
#define WA_INVIS A_INVIS
#define _POSIX_MESSAGE_PASSING (-1)
#define mvwvline_set(win,y,x,c,n) (wmove(win,y,x) == ERR ? ERR : wvline_set(win,c,n))
#define PTHREAD_PRIO_NONE 0
#define MINSIGSTKSZ 32768
#define _SC_REGEXP 77
#define __TYPES_H_ 
#define PTHREAD_ONCE_INIT {_PTHREAD_ONCE_SIG_init, {0}}
#define TRACE_ATTRS 0x1000
#define __DARWIN_NSIG 32
#define __DBL_DECIMAL_DIG__ 17
#define __STDC_UTF_32__ 1
#define __INT_FAST8_WIDTH__ 8
#define OK (0)
#define w_coredump w_T.w_Coredump
#define _POSIX_MQ_PRIO_MAX 32
#define __FXSR__ 1
#define __WATCHOS_4_2 40200
#define TIOCPKT_DOSTOP 0x20
#define SV_INTERRUPT SA_RESTART
#define CLD_DUMPED 3
#define CLOCKS_PER_SEC 1000000
#define _SIZE_T 
#define _POSIX2_VERSION 200112L
#define __options_closed_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_closed __enum_options
#define TIOCREMOTE _IOW('t', 105, int)
#define __FLT32X_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define IOCBASECMD(x) ((x) & ~(IOCPARM_MASK << 16))
#define WEXITSTATUS(x) ((_W_INT(x) >> 8) & 0x000000ff)
#define __DARWIN_VERS_1050 1
#define _SC_2_PBS_TRACK 64
#define WACS_BSSB NCURSES_WACS('l')
#define __DBL_NORM_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define _CRMASK (~(_CACHED_RUNES - 1))
#define NOTE_FFCTRLMASK 0xc0000000
#define QUAD_MIN LLONG_MIN
#define UTIME_OMIT -2
#define REPORT_MOUSE_POSITION NCURSES_MOUSE_MASK(5, 0010L)
#define TIOCIXON _IO('t', 129)
#define FOPEN_MAX 20
#define REG_EMPTY 14
#define BUTTON4_RESERVED_EVENT NCURSES_MOUSE_MASK(4, NCURSES_RESERVED_EVENT)
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define mvwinsch(win,y,x,c) (wmove(win,y,x) == ERR ? ERR : winsch(win,c))
#define _MACH_I386__STRUCTS_H_ 
#define REG_EESCAPE 5
#define A_BLINK NCURSES_BITS(1U,11)
#define SIGFPE 8
#define _PASSWORD_NOEXP 0x08
#define WCOREFLAG 0200
#define TIOCM_RI TIOCM_RNG
#define IOPOL_TYPE_VFS_TRIGGER_RESOLVE 5
#define FTS_OPTIONMASK 0xcff
#define F_ADDSIGS 59
#define KEY_PRINT 0532
#define ACS_LLCORNER NCURSES_ACS('m')
#define REG_UNGREEDY REG_MINIMAL
#define stderr __stderrp
#define touchline(win,s,c) wtouchln((win), s, c, 1)
#define KEY_IC 0513
#define ENOTBLK 15
#define _SC_THREAD_PROCESS_SHARED 90
#define _POSIX_V6_ILP32_OFFBIG __ILP32_OFFBIG
#define KEY_IL 0511
#define OFF_MIN LLONG_MIN
#define _SC_REALTIME_SIGNALS 36
#define _NOCHANGE -1
#define TIOCPKT_FLUSHWRITE 0x02
#define TIOCM_SR 0020
#define _STRUCT_TIMESPEC struct timespec
#define TIOCM_ST 0010
#define __INTMAX_WIDTH__ 64
#define EF_IS_SYNTHETIC 0x00000020
#define _STRING_H_ 
#define ELEMENTS(x) (sizeof(x) / sizeof(*(x)))
#define ACS_SBBS ACS_LRCORNER
#define FTS_FOLLOW 2
#define _POSIX_THREAD_PRIO_PROTECT (-1)
#define FILE_SELECTED 0x10
#define NOTE_VM_PRESSURE 0x80000000
#define RLIM_NLIMITS 9
#define UTIL_LESS 12
#define get_wch(c) wget_wch(stdscr,c)
#define PRIO_PROCESS 0
#define ALL_MOUSE_EVENTS (REPORT_MOUSE_POSITION - 1)
#define EF_IS_SPARSE 0x00000010
#define _UUID_STRING_T 
#define attron(at) wattron(stdscr,at)
#define __UINT32_C(c) c ## U
#define TOK_PLG 3
#define EISCONN 56
#define SIOCRSLVMULTI _IOWR('i', 59, struct rslvmulti_req)
#define KEY_SCREATE 0576
#define ___POSIX_C_DEPRECATED_STARTING_200112L 
#define ITIMER_PROF 2
#define F_SILENT (F_CLI | F_NOTRACE)
#define scrl(n) wscrl(stdscr,n)
#define ACS_SSBB ACS_LLCORNER
#define box(win,v,h) wborder(win, v, v, h, h, 0, 0, 0, 0)
#define BUTTON1_TRIPLE_CLICKED NCURSES_MOUSE_MASK(1, NCURSES_TRIPLE_CLICKED)
#define F_FREEZE_FS 53
#define __DTF_SKIPREAD 0x0010
#define border(ls,rs,ts,bs,tl,tr,bl,br) wborder(stdscr, ls, rs, ts, bs, tl, tr, bl, br)
#define TAILQ_FOREACH_REVERSE(var,head,headname,field) for ((var) = TAILQ_LAST((head), headname); (var); (var) = TAILQ_PREV((var), headname, field))
#define __TVOS_10_0 100000
#define __TVOS_10_1 100100
#define __TVOS_10_2 100200
#define __FLT_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F
#define CHARCLASS_NAME_MAX 14
#define __IOS_AVAILABLE(_vers) 
#define FTS_SLNONE 13
#define TOK_SSN 1
#define _POSIX_BARRIERS (-1)
#define TIOCMBIS _IOW('t', 108, int)
#define SIOCSIFGENERIC _IOW('i', 57, struct ifreq)
#define INTMAX_MIN (-INTMAX_MAX-1)
#define _SC_TRACE_INHERIT 99
#define SLIST_FOREACH_SAFE(var,head,field,tvar) for ((var) = SLIST_FIRST((head)); (var) && ((tvar) = SLIST_NEXT((var), field), 1); (var) = (tvar))
#define SF_SYNTHETIC 0xc0000000
#define ACS_DIAMOND NCURSES_ACS('`')
#define echo_wchar(c) wecho_wchar(stdscr,c)
#define getnstr(s,n) wgetnstr(stdscr, s, n)
#define control_character_threshold 0x20
#define _CS_XBS5_LPBIG_OFFBIG_LIBS 34
#define LIST_FOREACH(var,head,field) for ((var) = LIST_FIRST((head)); (var); (var) = LIST_NEXT((var), field))
#define F_FINDSIGS 78
#define F_SETPROTECTIONCLASS 64
#define _VA_LIST_T_H 
#define __API_UNAVAILABLE_BEGIN(...) 
#define __INT8_MAX__ 0x7f
#define __LONG_WIDTH__ 64
#define AT_FDCWD -2
#define __PIC__ 2
#define BC_STRING_MAX 1000
#define _SIGSET_T 
#define __UINT_FAST32_TYPE__ unsigned int
#define FD_ISSET(n,p) __DARWIN_FD_ISSET(n, p)
#define O_NOFOLLOW 0x00000100
#define WAKEMON_ENABLE 0x01
#define FP_RND_NEAR 0
#define CHILD_MAX 266
#define __sfileno(p) ((p)->_file)
#define __TVOS_11_3 110300
#define _PTHREAD_H 
#define PTHREAD_EXPLICIT_SCHED 2
#define TIOCSETA _IOW('t', 20, struct termios)
#define __RCSID(s) __IDSTRING(rcsid,s)
#define _INO64_T 
#define FPE_FLTRES 4
#define __FLT32X_NORM_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define NNN_OPTS 0
#define __CHAR32_TYPE__ unsigned int
#define EV_POLL EV_FLAG0
#define SEGV_NOOP 0
#define ENV_VISUAL 1
#define __FLT_MAX__ 3.40282346638528859811704183484516925e+38F
#define LONG_BIT 64
#define KEY_SOPTIONS 0615
#define __IPHONE_5_0 50000
#define __IPHONE_5_1 50100
#define PPPDISC 5
#define __exported __attribute__((__visibility__("default")))
#define mvgetn_wstr(y,x,t,n) mvwgetn_wstr(stdscr,y,x,t,n)
#define _I386__LIMITS_H_ 
#define __PROJECT_VERSION(s) __IDSTRING(project_version,s)
#define KEY_LL 0533
#define R_OK (1<<2)
#define MSG_ARCHIVE_OPTS 33
#define NOTE_MACH_CONTINUOUS_TIME 0x00000080
#define INT_FAST64_MAX INT64_MAX
#define _IO(g,n) _IOC(IOC_VOID, (g), (n), 0)
#define UINT_LEAST32_MAX UINT32_MAX
#define S_IWGRP 0000020
#define EMFILE 24
#define SIOCSIFCAP _IOW('i', 90, struct ifreq)
#define FP_PREC_64B 3
#define _SYS_SOCKIO_H_ 
#define SA_NOCLDWAIT 0x0020
#define NCURSES_CH_T cchar_t
#define __AVAILABILITY_INTERNAL_UNAVAILABLE __attribute__((unavailable))
#define WACS_URCORNER WACS_BBSS
#define __AVAILABILITY_INTERNAL_DEPRECATED __attribute__((deprecated))
#define SLIST_ENTRY(type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct { struct type *sle_next; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define PTHREAD_RWLOCK_INITIALIZER {_PTHREAD_RWLOCK_SIG_init, {0}}
#define SA_NODEFER 0x0010
#define wadd_wchstr(win,str) wadd_wchnstr(win,str,-1)
#define TIOCTIMESTAMP _IOR('t', 89, struct timeval)
#define KEY_BACKSPACE 0407
#define CRPRNT CREPRINT
#define st_birthtime st_birthtimespec.tv_sec
#define IOPOL_TYPE_VFS_STATFS_NO_DATA_VOLUME 4
#define __DARWIN_SUF_64_BIT_INO_T "$INODE64"
#define _PTHREAD_COND_SIG_init 0x3CB0B1BB
#define C_BLK (CTX_MAX + 1)
#define _CS_XBS5_LPBIG_OFFBIG_LDFLAGS 33
#define __SSE2__ 1
#define A_TOP NCURSES_BITS(1U,21)
#define xstrcmp(a,b) (*(a) != *(b) ? -1 : strcmp((a), (b)))
#define __LOCALE_H_ 
#define TIOCCDTR _IO('t', 120)
#define _SYS_WAIT_H_ 
#define _SC_2_FORT_DEV 21
#define ESHLIBVERS 87
#define PTHREAD_MUTEX_RECURSIVE 2
#define SIGILL 4
#define __API_AVAILABLE_BEGIN(...) 
#define RSIZE_MAX (SIZE_MAX >> 1)
#define mvins_wch(y,x,c) mvwins_wch(stdscr,y,x,c)
#define __OSX_AVAILABLE_STARTING(_osx,_ios) 
#define FTS_ROOTLEVEL 0
#define __INT32_TYPE__ int
#define F_GETPROTECTIONLEVEL 77
#define _POSIX_THREAD_DESTRUCTOR_ITERATIONS 4
#define PTHREAD_CANCEL_DISABLE 0x00
#define _SC_TRACE_EVENT_NAME_MAX 127
#define __improbable(x) (x)
#define __SIZEOF_DOUBLE__ 8
#define NCURSES_RESERVED_EVENT 040L
#define __FLT_MIN_10_EXP__ (-37)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_4(x) 
#define RUSAGE_INFO_CURRENT RUSAGE_INFO_V5
#define __DARWIN_FD_COPY(f,t) bcopy(f, t, sizeof(*(f)))
#define __FLT64_MIN__ 2.22507385850720138309023271733240406e-308F64
#define __INT_LEAST32_WIDTH__ 32
#define TIOCGWINSZ _IOR('t', 104, struct winsize)
#define __AVAILABILITY_INTERNAL__ 
#define __INTMAX_TYPE__ long int
#define TAILQ_LAST(head,headname) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH (*(((struct headname *)((head)->tqh_last))->tqh_last)) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define CIRCLEQ_FOREACH(var,head,field) for((var) = (head)->cqh_first; (var) != (void *)(head); (var) = (var)->field.cqe_next)
#define __unavailable 
#define __DRIVERKIT_20_0 200000
#define UTIL_CBCP 16
#define mvinwstr(y,x,c) mvwinwstr(stdscr,y,x,c)
#define KEY_UP 0403
#define _V6_ILP32_OFFBIG __ILP32_OFFBIG
#define _QUAD_HIGHWORD 1
#define tocursor() move(cur + 2 - curscroll, 0)
#define SIGIOT SIGABRT
#define _PC_MAX_INPUT 3
#define mvins_wstr(y,x,t) mvwins_wstr(stdscr,y,x,t)
#define EWOULDBLOCK EAGAIN
#define ENOMEM 12
#define NL_SETMAX 255
#define MSG_FORCE_RM 9
#define ins_wstr(t) wins_wstr(stdscr,t)
#define ALLPERMS (S_ISUID|S_ISGID|S_ISTXT|S_IRWXU|S_IRWXG|S_IRWXO)
#define S_IXGRP 0000010
#define MSG_OPEN_WITH 18
#define EBADEXEC 85
#define __FLT32X_HAS_QUIET_NAN__ 1
#define F_ALLOCATECONTIG 0x00000002
#define va_end(v) __builtin_va_end(v)
#define POLL_IN 1
#define __ATOMIC_CONSUME 1
#define ACS_URCORNER NCURSES_ACS('k')
#define crmode() cbreak()
#define EV_UDATA_SPECIFIC 0x0100
#define WACS_LTEE WACS_SSSB
#define EV_SET(kevp,a,b,c,d,e,f) do { struct kevent *__kevp__ = (kevp); __kevp__->ident = (a); __kevp__->filter = (b); __kevp__->flags = (c); __kevp__->fflags = (d); __kevp__->data = (e); __kevp__->udata = (f); } while(0)
#define __GNUC_MINOR__ 2
#define ___POSIX_C_DEPRECATED_STARTING_198808L 
#define __INT_FAST16_WIDTH__ 16
#define __UINTMAX_MAX__ 0xffffffffffffffffUL
#define A_NORMAL (1U - 1U)
#define USER_ADDR_NULL ((user_addr_t) 0)
#define LITTLE_ENDIAN __DARWIN_LITTLE_ENDIAN
#define _STRUCT_MCONTEXT_AVX32 struct __darwin_mcontext_avx32
#define __FLT32X_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F32x
#define __API_DEPRECATED_BEGIN_REP_GET_MACRO 
#define O_POPUP 0x80000000
#define __unreachable_ok_pop _Pragma("GCC diagnostic pop")
#define A_HORIZONTAL NCURSES_BITS(1U,17)
#define INTMAX_C(v) (v ## L)
#define ILL_PRVOPC 3
#define _XOPEN_ENH_I18N (1)
#define MSGWAIT '$'
#define UTIL_UNZIP 3
#define ENOPOLICY 103
#define ESPIPE 29
#define innstr(s,n) winnstr(stdscr,s,n)
#define ECONNREFUSED 61
#define REG_ITOA 0400
#define _RATTR_OK (1<<15)
#define INT_FAST64_MIN INT64_MIN
#define REG_ESUBREG 6
#define _POSIX2_C_DEV 200112L
#define KEY_MOUSE 0631
#define EAGAIN 35
#define SIOCSIFADDR _IOW('i', 12, struct ifreq)
#define TIOCSWINSZ _IOW('t', 103, struct winsize)
#define NAMEBUF_INCR 0x800
#define __DBL_MAX_10_EXP__ 308
#define __NULLABILITY_COMPLETENESS_POP 
#define __const const
#define UINT16_MAX 65535
#define __LDBL_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951L
#define ACS_HLINE NCURSES_ACS('q')
#define LIST_NEXT(elm,field) ((elm)->field.le_next)
#define UIOCCMD(n) _IO('u', n)
#define KEY_BREAK 0401
#define NCURSES_CAST(type,value) (type)(value)
#define S_ISUID 0004000
#define _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS 35
#define __USE_XOPEN_EXTENDED 1
#define __DARWIN_OS_INLINE static inline
#define TIOCSSIZE TIOCSWINSZ
#define EALREADY 37
#define _FILESEC_REMOVE_ACL ((void *)1)
#define _POSIX_TRACE_LOG (-1)
#define ACS_GEQUAL NCURSES_ACS('z')
#define F_FLUSH_DATA 40
#define __DARWIN_MAXNAMLEN 255
#define GCC_PRINTFLIKE(fmt,var) 
#define __INT16_C(c) c
#define _CTERMID_H_ 
#define F_PATHPKG_CHECK 52
#define _ACCESS_EXTENDED_MASK (_READ_OK | _WRITE_OK | _EXECUTE_OK | _DELETE_OK | _APPEND_OK | _RMFILE_OK | _REXT_OK | _WEXT_OK | _RATTR_OK | _WATTR_OK | _RPERM_OK | _WPERM_OK | _CHOWN_OK)
#define _STRUCT_MCONTEXT_AVX64 struct __darwin_mcontext_avx64
#define _WPERM_OK (1<<20)
#define _SYS_STATVFS_H_ 
#define timeradd(tvp,uvp,vvp) do { (vvp)->tv_sec = (tvp)->tv_sec + (uvp)->tv_sec; (vvp)->tv_usec = (tvp)->tv_usec + (uvp)->tv_usec; if ((vvp)->tv_usec >= 1000000) { (vvp)->tv_sec++; (vvp)->tv_usec -= 1000000; } } while (0)
#define _SC_PHYS_PAGES 200
#define _U_SHORT 
#define __STDC__ 1
#define NNN_SEL 9
#define TTYDEF_SPEED (B9600)
#define ACS_S1 NCURSES_ACS('o')
#define DST_CAN 6
#define ACS_SBSS ACS_RTEE
#define _POSIX_THREAD_SAFE_FUNCTIONS 200112L
#define ACS_S7 NCURSES_ACS('r')
#define _STRUCT_MCONTEXT_AVX64_FULL struct __darwin_mcontext_avx64_full
#define KEY_LEFT 0404
#define mvaddchstr(y,x,str) mvwaddchstr(stdscr,y,x,str)
#define EEXIST 17
#define RUBOUT 0x7f
#define __PTRDIFF_TYPE__ long int
#define EV_ADD 0x0001
#define LIST_REMOVE(elm,field) do { LIST_CHECK_NEXT(elm, field); LIST_CHECK_PREV(elm, field); if (LIST_NEXT((elm), field) != NULL) LIST_NEXT((elm), field)->field.le_prev = (elm)->field.le_prev; *(elm)->field.le_prev = LIST_NEXT((elm), field); TRASHIT((elm)->field.le_next); TRASHIT((elm)->field.le_prev); } while (0)
#define clear() wclear(stdscr)
#define DT_LNK 10
#define KEY_COMMAND 0545
#define __IPHONE_13_0 130000
#define __IPHONE_13_1 130100
#define __IPHONE_13_2 130200
#define __IPHONE_13_3 130300
#define __IPHONE_13_4 130400
#define __IPHONE_13_6 130600
#define __IPHONE_13_7 130700
#define DST_USA 1
#define stdin __stdinp
#define REG_NEWLINE 0010
#define __I386_MCONTEXT_H_ 
#define sv_onstack sv_flags
#define IOPOL_VFS_CONTENT_PROTECTION_IGNORE 1
#define EPROGMISMATCH 75
#define NOTE_TRACKERR 0x00000002
#define _SC_HOST_NAME_MAX 72
#define RU_PROC_RUNS_RESLIDE 0x00000001
#define ACCESSX_MAX_TABLESIZE (16 * 1024)
#define __ATOMIC_SEQ_CST 5
#define HASH_BITS (0xFFFFFF)
#define __PTHREAD_COND_SIZE__ 40
#define _STRUCT_YMM_REG struct __darwin_ymm_reg
#define IOCPARM_MASK 0x1fff
#define DST_WET 3
#define __WATCHOS_AVAILABLE(_vers) 
#define NNNLVL 6
#define TRACE_IEVENT 0x0080
#define ENOENT 2
#define NOTE_BACKGROUND 0x00000040
#define bkgd(ch) wbkgd(stdscr,ch)
#define X_OK (1<<0)
#define REG_ICASE 0002
#define _PTHREAD_KEY_T 
#define _ISPAD 0x10
#define MSG_FEW_COLUMNS 29
#define KEY_EXIT 0551
#define REG_NOTEOL 00002
#define __FLT32X_MIN_10_EXP__ (-307)
#define FD_CLOEXEC 1
#define TAILQ_ENTRY(type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct { struct type *tqe_next; struct type **tqe_prev; TRACEBUF } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define SF_SETTABLE 0x3fff0000
#define F_CLI (F_NORMAL | F_MULTI)
#define __UINTPTR_TYPE__ long unsigned int
#define FTW_DNR 2
#define NOTE_VM_PRESSURE_SUDDEN_TERMINATE 0x20000000
#define TIOCM_CTS 0040
#define _SSIZE_T 
#define __TVOS_10_0_1 100001
#define PTHREAD_KEYS_MAX 512
#define TIOCSETAW _IOW('t', 21, struct termios)
#define __unreachable_ok_push _Pragma("GCC diagnostic push") _Pragma("GCC diagnostic ignored \"-Wunreachable-code\"")
#define __LDBL_MIN_10_EXP__ (-4931)
#define mvaddnwstr(y,x,wstr,n) mvwaddnwstr(stdscr,y,x,wstr,n)
#define add_wchnstr(str,n) wadd_wchnstr(stdscr,str,n)
#define _SC_SPAWN 79
#define setscrreg(t,b) wsetscrreg(stdscr,t,b)
#define _PTHREAD_ERRORCHECK_MUTEX_SIG_init 0x32AAABA1
#define _PC_REC_INCR_XFER_SIZE 20
#define __API_DEPRECATED_WITH_REPLACEMENT_BEGIN(...) 
#define TIOCM_CD TIOCM_CAR
#define MIN(x,y) ((x) < (y) ? (x) : (y))
#define _READLINE_H_ 
#define KEY_HELP 0553
#define mvwin_wchstr(win,y,x,c) (wmove(win,y,x) == ERR ? ERR : win_wchstr(win,c))
#define ILL_NOOP 0
#define __DARWIN_CLK_TCK 100
#define SIG_SETMASK 3
#define _VA_LIST_T 
#define __SIZEOF_LONG_LONG__ 8
#define IOPOL_THROTTLE 3
#define _POSIX_V7_LPBIG_OFFBIG __LPBIG_OFFBIG
#define HASH_OCTETS (HASH_BITS >> 6)
#define F_GETLK 7
#define PTHREAD_DESTRUCTOR_ITERATIONS 4
#define mvwchgat(win,y,x,n,a,c,o) (wmove(win,y,x) == ERR ? ERR : wchgat(win,n,a,c,o))
#define _POSIX_LOGIN_NAME_MAX 9
#define _STRUCT_X86_AVX_STATE32 struct __darwin_i386_avx_state
#define RLIMIT_STACK 3
#define __DARWIN_STRUCT_STAT64 { dev_t st_dev; mode_t st_mode; nlink_t st_nlink; __darwin_ino64_t st_ino; uid_t st_uid; gid_t st_gid; dev_t st_rdev; __DARWIN_STRUCT_STAT64_TIMES off_t st_size; blkcnt_t st_blocks; blksize_t st_blksize; __uint32_t st_flags; __uint32_t st_gen; __int32_t st_lspare; __int64_t st_qspare[2]; }
#define __enum_closed 
#define PRIO_MAX 20
#define NCURSES_ENABLE_STDBOOL_H 1
#define SIOCADDMULTI _IOW('i', 49, struct ifreq)
#define __FLT128_DECIMAL_DIG__ 36
#define _POSIX_THREAD_KEYS_MAX 128
#define __GCC_ATOMIC_LLONG_LOCK_FREE 2
#define clrtoeol() wclrtoeol(stdscr)
#define _PTHREAD_ONCE_T 
#define SIGWINCH 28
#define __TVOS_14_1 140100
#define __TVOS_14_3 140300
#define __TVOS_14_5 140500
#define __NCURSES_H 
#define EV_CLEAR 0x0020
#define NOTE_CHILD 0x00000004
#define __enum_open 
#define BUTTON1_RELEASED NCURSES_MOUSE_MASK(1, NCURSES_BUTTON_RELEASED)
#define PTRDIFF_MAX INTMAX_MAX
#define mvwinnstr(win,y,x,s,n) (wmove(win,y,x) == ERR ? ERR : winnstr(win,s,n))
#define __FLT32_HAS_QUIET_NAN__ 1
#define __FLT_DECIMAL_DIG__ 9
#define __UINT_FAST16_MAX__ 0xffff
#define _WSTATUS(x) (_W_INT(x) & 0177)
#define S_IROTH 0000004
#define FTS_MAXLEVEL 0x7fffffff
#define TOK_BM 0
#define __POSIX_C_DEPRECATED(ver) ___POSIX_C_DEPRECATED_STARTING_ ##ver
#define _MODE_T 
#define DTF_NODUP 0x0002
#define mvaddnstr(y,x,str,n) mvwaddnstr(stdscr,y,x,str,n)
#define ___int_ptrdiff_t_h 
#define __LDBL_NORM_MAX__ 1.18973149535723176502126385303097021e+4932L
#define _SC_BC_DIM_MAX 10
#define PATH_MAX 1024
#define S_IFSOCK 0140000
#define FD_ZERO(p) __DARWIN_FD_ZERO(p)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_0(x) 
#define C_DIR (C_CHR + 1)
#define CDISCARD CTRL('o')
#define ACS_VLINE NCURSES_ACS('x')
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define SIOCGIFBRDADDR _IOWR('i', 35, struct ifreq)
#define _OS__OSBYTEORDER_H 
#define KEY_HOME 0406
#define FD_CLR(n,p) __DARWIN_FD_CLR(n, p)
#define mvget_wch(y,x,c) mvwget_wch(stdscr,y,x,c)
#define RLIMIT_THREAD_CPULIMITS 0x3
#define BC_BASE_MAX 99
#define NNN_ARCHIVE 10
#define A_COLOR NCURSES_BITS(((1U) << 8) - 1U,0)
#define REG_ESPACE 12
#define F_SETFD 2
#define MB_LEN_MAX 6
#define FTS_PHYSICAL 0x010
#define _POSIX_THREAD_ATTR_STACKADDR 200112L
#define _MACH_MACHINE__STRUCTS_H_ 
#define SIG_IGN (void (*)(int))1
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_1(x) x
#define IOPOL_MATERIALIZE_DATALESS_FILES_ON 2
#define _USECONDS_T 
#define INT_LEAST16_MAX INT16_MAX
#define SIOCIFCREATE _IOWR('i', 120, struct ifreq)
#define __SSE3__ 1
#define __UINT_FAST8_TYPE__ unsigned char
#define EOPNOTSUPP 102
#define UF_APPEND 0x00000004
#define _POSIX_SAVED_IDS 200112L
#define vw_printw vwprintw
#define _U_INT16_T 
#define IOPOL_VFS_TRIGGER_RESOLVE_OFF 1
#define gettmode() 
#define __P(protos) protos
#define F_CHKCLEAN 41
#define F_PUNCHHOLE 99
#define TIOCGPGRP _IOR('t', 119, int)
#define _SECURE__STRING_H_ 
#define _RMFILE_OK (1<<14)
#define IOPOL_TYPE_VFS_ATIME_UPDATES 2
#define _STRUCT_ZMM_REG struct __darwin_zmm_reg
#define FP_PREC_53B 2
#define __IPHONE_8_2 80200
#define __IPHONE_9_0 90000
#define __IPHONE_9_1 90100
#define __IPHONE_9_2 90200
#define __IPHONE_9_3 90300
#define d_fileno d_ino
#define __ATOMIC_ACQ_REL 4
#define SIOCAUTOADDR _IOWR('i', 38, struct ifreq)
#define S_IFIFO 0010000
#define __ATOMIC_RELEASE 3
#define _NLINK_T 
#define SIOCGIFXMEDIA _IOWR('i', 72, struct ifmediareq)
#define MSG_ENTER 22
#define BUTTON_RELEASE(e,x) ((e) & NCURSES_MOUSE_MASK(x, 001))
#define FPE_FLTUND 3
#define TAILQ_HEAD_INITIALIZER(head) { NULL, &(head).tqh_first }
#define attroff(at) wattroff(stdscr,at)
#define CPF_IGNORE_MODE 0x0002
