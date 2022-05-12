#define KEY_SREDO 0620
#define TRACE_DISABLE 0x0000
#define ACS_SBSB ACS_VLINE
#define GCC_NORETURN 
#define A_INVIS NCURSES_BITS(1U,15)
#define ___POSIX_C_DEPRECATED_STARTING_199009L 
#define COLOR_YELLOW 3
#define _Nullable 
#define __strftimelike(fmtarg) __attribute__((__format__ (__strftime__, fmtarg, 0)))
#define __DBL_MIN_EXP__ (-1021)
#define insch(c) winsch(stdscr,c)
#define KEY_SFIND 0605
#define chgat(n,a,c,o) wchgat(stdscr,n,a,c,o)
#define ACS_STERLING NCURSES_ACS('}')
#define _SYS__TYPES_H_ 
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_4(x) x
#define MAC_OS_X_VERSION_10_13_1 101301
#define MAC_OS_X_VERSION_10_13_2 101302
#define MAC_OS_X_VERSION_10_13_4 101304
#define NCURSES_EXPORT(type) NCURSES_IMPEXP type NCURSES_API
#define __unused __attribute__((__unused__))
#define __UINT_LEAST16_MAX__ 0xffff
#define _STDBOOL_H 
#define mvwdelch(win,y,x) (wmove(win,y,x) == ERR ? ERR : wdelch(win))
#define __ATOMIC_ACQUIRE 2
#define __FLT128_MAX_10_EXP__ 4932
#define deleteln() winsdelln(stdscr,-1)
#define __FLT_MIN__ 1.17549435082228750796873653722224568e-38F
#define __GCC_IEC_559_COMPLEX 2
#define __UINT_LEAST8_TYPE__ unsigned char
#define KEY_SLEFT 0611
#define __SIZEOF_FLOAT80__ 16
#define ACS_S3 NCURSES_ACS('p')
#define NCURSES_EXPORT_VAR(type) NCURSES_IMPEXP type
#define __IPHONE_14_2 140200
#define __MAC_10_13_1 101301
#define __MAC_10_13_2 101302
#define __MAC_10_13_4 101304
#define ACS_S9 NCURSES_ACS('s')
#define KEY_OPEN 0560
#define __DRIVERKIT_19_0 190000
#define __INTMAX_C(c) c ## L
#define KEY_SCOMMAND 0574
#define __enum_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_open
#define __deprecated_msg(_msg) __attribute__((__deprecated__(_msg)))
#define __DARWIN_INODE64(sym) __asm("_" __STRING(sym) __DARWIN_SUF_64_BIT_INO_T)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_0(x) 
#define __CHAR_BIT__ 8
#define __WATCHOS_DEPRECATED(_start,_dep,_msg) 
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_0(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_3(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_6(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_7(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_8(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_9(x) x
#define __WATCHOS_1_0 10000
#define __DARWIN_C_LEVEL __DARWIN_C_FULL
#define _U_INT64_T 
#define __UINT8_MAX__ 0xff
#define __SCHAR_WIDTH__ 8
#define __WINT_MAX__ 0x7fffffff
#define move(y,x) wmove(stdscr,y,x)
#define NCURSES_BUTTON_PRESSED 002L
#define __PTHREAD_ATTR_SIZE__ 56
#define __FLT32_MIN_EXP__ (-125)
#define winsstr(w,s) winsnstr(w, s, -1)
#define BUTTON_TRIPLE_CLICK(e,x) ((e) & NCURSES_MOUSE_MASK(x, 020))
#define _CDEFS_H_ 
#define vsnprintf(str,len,format,ap) __builtin___vsnprintf_chk (str, len, 0, __darwin_obsz(str), format, ap)
#define __OSX_AVAILABLE_BUT_DEPRECATED_MSG(_osxIntro,_osxDep,_iosIntro,_iosDep,_msg) 
#define va_start(v,l) __builtin_va_start(v,l)
#define ACS_LEQUAL NCURSES_ACS('y')
#define KEY_SELECT 0601
#define A_RIGHT NCURSES_BITS(1U,20)
#define mvwgetch(win,y,x) (wmove(win,y,x) == ERR ? ERR : wgetch(win))
#define BUTTON1_RELEASED NCURSES_MOUSE_MASK(1, NCURSES_BUTTON_RELEASED)
#define __ORDER_LITTLE_ENDIAN__ 1234
#define __SIZE_MAX__ 0xffffffffffffffffUL
#define saveterm() def_prog_mode()
#define __WCHAR_MAX__ 0x7fffffff
#define _WRAPPED 0x40
#define touchwin(win) wtouchln((win), 0, getmaxy(win), 1)
#define KEY_CLEAR 0515
#define mvinchnstr(y,x,s,n) mvwinchnstr(stdscr,y,x,s,n)
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define __DBL_DENORM_MIN__ ((double)4.94065645841246544176568792868221372e-324L)
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8 1
#define WA_PROTECT A_PROTECT
#define __OS_EXTENSION_UNAVAILABLE(_msg) __OSX_EXTENSION_UNAVAILABLE(_msg) __IOS_EXTENSION_UNAVAILABLE(_msg)
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define __IPHONE_11_4 110400
#define __GCC_IEC_559 2
#define winchstr(w,s) winchnstr(w, s, -1)
#define wstandout(win) (wattrset(win,A_STANDOUT))
#define __FLT32X_DECIMAL_DIG__ 17
#define _IOFBF 0
#define __IOS_PROHIBITED 
#define __FLT_EVAL_METHOD__ 0
#define putc_unlocked(x,fp) __sputc(x, fp)
#define __sfeof(p) (((p)->_flags & __SEOF) != 0)
#define __WATCHOS_4_0 40000
#define __FLT64_DECIMAL_DIG__ 17
#define TRACE_DATABASE 0x0800
#define __disable_tail_calls 
#define instr(s) winstr(stdscr,s)
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define __IPHONE_2_0 20000
#define __IPHONE_2_1 20100
#define __IPHONE_2_2 20200
#define __DARWIN_SUF_1050 "$1050"
#define MAC_OS_X_VERSION_10_14_4 101404
#define BUTTON2_DOUBLE_CLICKED NCURSES_MOUSE_MASK(2, NCURSES_DOUBLE_CLICKED)
#define bool _Bool
#define __UINT_FAST64_MAX__ 0xffffffffffffffffULL
#define __SIG_ATOMIC_TYPE__ int
#define CAST_USER_ADDR_T(a_ptr) ((user_addr_t)((uintptr_t)(a_ptr)))
#define NCURSES_MOUSE_MASK(b,m) ((m) << (((b) - 1) * 6))
#define __DBL_MIN_10_EXP__ (-307)
#define __FINITE_MATH_ONLY__ 0
#define KEY_RESUME 0570
#define __cold __attribute__((__cold__))
#define A_ATTRIBUTES NCURSES_BITS(~(1U - 1U),0)
#define __FLT32X_MAX_EXP__ 1024
#define __FLT32_HAS_DENORM__ 1
#define __DECONST(type,var) __CAST_AWAY_QUALIFIER(var, const, type)
#define __UINT_FAST8_MAX__ 0xff
#define __WATCHOS_PROHIBITED 
#define KEY_MOVE 0556
#define __FLT32_MAX_10_EXP__ 38
#define nocrmode() nocbreak()
#define fixterm() reset_prog_mode()
#define __INT8_C(c) c
#define mvinnstr(y,x,s,n) mvwinnstr(stdscr,y,x,s,n)
#define __INT_LEAST8_WIDTH__ 8
#define mvwinchstr(win,y,x,s) (wmove(win,y,x) == ERR ? ERR : winchstr(win,s))
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffULL
#define KEY_UNDO 0630
#define ferror_unlocked(p) __sferror(p)
#define __restrict restrict
#define __SHRT_MAX__ 0x7fff
#define __LDBL_MAX__ 1.18973149535723176502126385303097021e+4932L
#define wdeleteln(win) winsdelln(win,-1)
#define getsyx(y,x) do { if (newscr) { if (is_leaveok(newscr)) (y) = (x) = -1; else getyx(newscr,(y), (x)); } } while(0)
#define __exported_pop _Pragma("GCC visibility pop")
#define __SCCSID(s) __IDSTRING(sccsid,s)
#define __DARWIN_C_ANSI 010000L
#define __FLT64X_MAX_10_EXP__ 4932
#define __DARWIN_EXTSN(sym) __asm("_" __STRING(sym) __DARWIN_SUF_EXTSN)
#define scroll(win) wscrl(win,1)
#define __IPHONE_10_0 100000
#define __IPHONE_10_1 100100
#define __IPHONE_10_2 100200
#define __IPHONE_10_3 100300
#define __LDBL_IS_IEC_60559__ 2
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_1(x) 
#define __FLT64X_HAS_QUIET_NAN__ 1
#define __WATCHOS_5_1 50100
#define __WATCHOS_5_3 50300
#define insnstr(s,n) winsnstr(stdscr,s,n)
#define __SNPT 0x0800
#define KEY_HOME 0406
#define ___POSIX_C_DEPRECATED_STARTING_200809L 
#define waddchstr(win,str) waddchnstr(win,str,-1)
#define __UINT_LEAST8_MAX__ 0xff
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define __alloc_size(...) __attribute__((alloc_size(__VA_ARGS__)))
#define RENAME_EXCL 0x00000004
#define __FLT128_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F128
#define _ISPAD 0x10
#define __APPLE_CC__ 1
#define __UINTMAX_TYPE__ long unsigned int
#define __result_use_check __attribute__((__warn_unused_result__))
#define sprintf(str,...) __builtin___sprintf_chk (str, 0, __darwin_obsz(str), __VA_ARGS__)
#define __API_DEPRECATED_BEGIN(...) 
#define __FLT_EVAL_METHOD_TS_18661_3__ 0
#define NULL __DARWIN_NULL
#define __UINT32_MAX__ 0xffffffffU
#define __bool_true_false_are_defined 1
#define __PTHREAD_MUTEX_SIZE__ 56
#define winsertln(win) winsdelln(win,1)
#define __DARWIN_UNIX03 1
#define TRACE_CHARPUT 0x0010
#define __printflike(fmtarg,firstvararg) __attribute__((__format__ (__printf__, fmtarg, firstvararg)))
#define TRACE_IEVENT 0x0080
#define __TVOS_11_0 110000
#define __TVOS_11_1 110100
#define __TVOS_11_2 110200
#define __FLT128_MIN_EXP__ (-16381)
#define NCURSES_MOUSE_VERSION 1
#define BUTTON2_CLICKED NCURSES_MOUSE_MASK(2, NCURSES_BUTTON_CLICKED)
#define __WINT_MIN__ (-__WINT_MAX__ - 1)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_2(x) 
#define ACS_URCORNER NCURSES_ACS('k')
#define __pure2 __attribute__((__const__))
#define KEY_CREATE 0547
#define __FLT128_MIN_10_EXP__ (-4931)
#define WA_ALTCHARSET A_ALTCHARSET
#define __OSX_DEPRECATED(_start,_dep,_msg) 
#define __FLT32X_IS_IEC_60559__ 2
#define mvvline(y,x,c,n) mvwvline(stdscr,y,x,c,n)
#define KEY_DOWN 0402
#define __INT_LEAST16_WIDTH__ 16
#define timeout(delay) wtimeout(stdscr,delay)
#define __AVAILABILITY_INTERNAL_WEAK_IMPORT __attribute__((weak_import))
#define COLOR_BLACK 0
#define __SCHAR_MAX__ 0x7f
#define __FLT128_MANT_DIG__ 113
#define __IPHONE_6_0 60000
#define __IPHONE_6_1 60100
#define __WCHAR_MIN__ (-__WCHAR_MAX__ - 1)
#define KEY_SSUSPEND 0625
#define TRACE_MAXIMUM ((1 << TRACE_SHIFT) - 1)
#define TRACE_ICALLS 0x0200
#define ACS_TTEE NCURSES_ACS('w')
#define WA_NORMAL A_NORMAL
#define __INT64_C(c) c ## LL
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_15(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_16(x) x
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define KEY_SMOVE 0613
#define __MAC_11_1 110100
#define _FORTIFY_SOURCE 2
#define mvwinch(win,y,x) (wmove(win,y,x) == ERR ? NCURSES_CAST(chtype, ERR) : winch(win))
#define MAC_OS_X_VERSION_10_10_2 101002
#define MAC_OS_X_VERSION_10_10_3 101003
#define KEY_SRSUME 0623
#define ACS_RARROW NCURSES_ACS('+')
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_4(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_2(x) 
#define KEY_REFERENCE 0564
#define __API_UNAVAILABLE_BEGIN_GET_MACRO(...) 
#define ACS_BTEE NCURSES_ACS('v')
#define _INT32_T 
#define CURSES 1
#define WA_STANDOUT A_STANDOUT
#define __sclearerr(p) ((void)((p)->_flags &= ~(__SERR|__SEOF)))
#define mvhline(y,x,c,n) mvwhline(stdscr,y,x,c,n)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_2(x) x
#define getchar_unlocked() getc_unlocked(stdin)
#define KEY_SCANCEL 0573
#define __DARWIN_ONLY_UNIX_CONFORMANCE 1
#define __FLT32X_MANT_DIG__ 53
#define __USER_LABEL_PREFIX__ _
#define ACS_PLUS NCURSES_ACS('n')
#define __MAC_10_10_2 101002
#define __MAC_10_10_3 101003
#define __SWR 0x0008
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11(x) x
#define __END_DECLS 
#define mvinsstr(y,x,s) mvwinsstr(stdscr,y,x,s)
#define __FLT64X_EPSILON__ 1.08420217248550443400745280086994171e-19F64x
#define __CONCAT(x,y) x ## y
#define refresh() wrefresh(stdscr)
#define wattroff(win,at) wattr_off(win, NCURSES_CAST(attr_t, at), NULL)
#define __STDC_HOSTED__ 1
#define getch() wgetch(stdscr)
#define _STDIO_H_ 
#define MAC_OS_X_VERSION_10_12_1 101201
#define KEY_RIGHT 0405
#define TRACE_TPUTS 0x0002
#define MAC_OS_X_VERSION_10_12_4 101204
#define TMP_MAX 308915776
#define A_LEFT NCURSES_BITS(1U,18)
#define __options_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_open __enum_options
#define __IPHONE_14_0 140000
#define __IPHONE_14_1 140100
#define __IPHONE_14_3 140300
#define ACS_ULCORNER NCURSES_ACS('l')
#define __IPHONE_14_5 140500
#define __DBL_DIG__ 15
#define BUTTON4_RESERVED_EVENT NCURSES_MOUSE_MASK(4, NCURSES_RESERVED_EVENT)
#define insertln() winsdelln(stdscr,1)
#define KEY_SIC 0610
#define __FLT32_DIG__ 6
#define WA_BOLD A_BOLD
#define __SWIFT_UNAVAILABLE_MSG(_msg) 
#define __FLT_EPSILON__ 1.19209289550781250000000000000000000e-7F
#define vsprintf(str,format,ap) __builtin___vsprintf_chk (str, 0, __darwin_obsz(str), format, ap)
#define __scanflike(fmtarg,firstvararg) __attribute__((__format__ (__scanf__, fmtarg, firstvararg)))
#define __SHRT_WIDTH__ 16
#define __TVOS_9_0 90000
#define __TVOS_9_1 90100
#define __TVOS_9_2 90200
#define _Nonnull 
#define KEY_RESTART 0567
#define KEY_EIC 0514
#define __FLT32_IS_IEC_60559__ 2
#define __PTHREAD_RWLOCK_SIZE__ 192
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13(x) x
#define BUTTON4_DOUBLE_CLICKED NCURSES_MOUSE_MASK(4, NCURSES_DOUBLE_CLICKED)
#define __LDBL_MIN__ 3.36210314311209350626267781732175260e-4932L
#define __STDC_UTF_16__ 1
#define __DBL_IS_IEC_60559__ 2
#define __API_DEPRECATED_MSG_GET_MACRO(...) 
#define __API_AVAILABLE_GET_MACRO(...) 
#define mvinsnstr(y,x,s,n) mvwinsnstr(stdscr,y,x,s,n)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_1(x) 
#define __strong 
#define __FLT64X_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951F64x
#define slk_attr_off(a,v) ((v) ? ERR : slk_attroff(a))
#define __MAC_10_1 1010
#define KEY_SCREATE 0576
#define __MAC_10_3 1030
#define KEY_END 0550
#define _VA_LIST_DEFINED 
#define _SUBWIN 0x01
#define __FLT32X_HAS_INFINITY__ 1
#define __enum_closed_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_closed
#define __INT32_MAX__ 0x7fffffff
#define TRACE_UPDATE 0x0004
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_1(x) 
#define __NCURSES_H 
#define KEY_MARK 0554
#define __AVAILABILITY_VERSIONS__ 
#define KEY_EOL 0517
#define __INT_WIDTH__ 32
#define __SIZEOF_LONG__ 8
#define __DARWIN_1050INODE64(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_64_BIT_INO_T)
#define waddstr(win,str) waddnstr(win,str,-1)
#define __AVAILABILITY_INTERNAL_REGULAR 
#define __DARWIN_WEOF ((__darwin_wint_t)-1)
#define __APPLE__ 1
#define __UINT16_C(c) c
#define echochar(c) wechochar(stdscr,c)
#define NCURSES_VERSION_PATCH 20081102
#define __WATCHOS_7_2 70200
#define inch() winch(stdscr)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10_2(x) x
#define _INTPTR_T 
#define __DECIMAL_DIG__ 21
#define __FLT64_EPSILON__ 2.22044604925031308084726333618164062e-16F64
#define ACS_UARROW NCURSES_ACS('-')
#define mvinchstr(y,x,s) mvwinchstr(stdscr,y,x,s)
#define ALL_MOUSE_EVENTS (REPORT_MOUSE_POSITION - 1)
#define __FLT128_IS_IEC_60559__ 2
#define ACS_DEGREE NCURSES_ACS('f')
#define ACS_BOARD NCURSES_ACS('h')
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_1(x) 
#define NCURSES_BUTTON_RELEASED 001L
#define __FLT64X_MIN_10_EXP__ (-4931)
#define __LDBL_HAS_QUIET_NAN__ 1
#define BUTTON3_CLICKED NCURSES_MOUSE_MASK(3, NCURSES_BUTTON_CLICKED)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_4(x) x
#define __SPI_DEPRECATED_WITH_REPLACEMENT(...) 
#define MAC_OS_X_VERSION_10_14_1 101401
#define MAC_OS_X_VERSION_10_14_6 101406
#define WA_HORIZONTAL A_HORIZONTAL
#define __FLT64_MANT_DIG__ 53
#define __API_UNAVAILABLE_GET_MACRO(...) 
#define KEY_A1 0534
#define __SPI_AVAILABLE(...) 
#define WA_LOW A_LOW
#define erase() werase(stdscr)
#define __FLT64X_MANT_DIG__ 64
#define L_tmpnam 1024
#define __DYNAMIC__ 1
#define A_PROTECT NCURSES_BITS(1U,16)
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
#define __DARWIN_ALIAS_I(sym) __asm("_" __STRING(sym) __DARWIN_SUF_64_BIT_INO_T __DARWIN_SUF_UNIX03)
#define __MMX__ 1
#define wstandend(win) (wattrset(win,A_NORMAL))
#define COLOR_CYAN 6
#define L_ctermid 1024
#define COLOR_MAGENTA 5
#define __FLT_HAS_DENORM__ 1
#define __SIZEOF_LONG_DOUBLE__ 16
#define __compiler_barrier() __asm__ __volatile__("" ::: "memory")
#define __MAC_10_14_4 101404
#define __MAC_10_14_6 101406
#define fileno_unlocked(p) __sfileno(p)
#define color_set(c,o) wcolor_set(stdscr,c,o)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_1(x) 
#define BUTTON2_PRESSED NCURSES_MOUSE_MASK(2, NCURSES_BUTTON_PRESSED)
#define NCURSES_UNCTRL_H_incl 1
#define SEEK_CUR 1
#define BUTTON_ALT NCURSES_MOUSE_MASK(5, 0004L)
#define __BIGGEST_ALIGNMENT__ 16
#define mvwvline(win,y,x,c,n) (wmove(win,y,x) == ERR ? ERR : wvline(win,c,n))
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_0(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_3(x) x
#define __darwin_obsz(object) __builtin_object_size (object, _USE_FORTIFY_LEVEL > 1 ? 1 : 0)
#define ACS_LARROW NCURSES_ACS(',')
#define __DARWIN_ONLY_VERS_1050 0
#define vw_scanw vwscanw
#define __WATCHOS_2_0 20000
#define __WATCHOS_2_1 20100
#define __WATCHOS_2_2 20200
#define mvwinsnstr(win,y,x,s,n) (wmove(win,y,x) == ERR ? ERR : winsnstr(win,s,n))
#define __DARWIN_1050ALIAS(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_UNIX03)
#define __FLT64_MAX_10_EXP__ 308
#define __sferror(p) (((p)->_flags & __SERR) != 0)
#define NCURSES_DLL_H_incl 1
#define __COPYRIGHT(s) __IDSTRING(copyright,s)
#define __pure 
#define mvgetnstr(y,x,str,n) mvwgetnstr(stdscr,y,x,str,n)
#define ACS_RTEE NCURSES_ACS('u')
#define ACS_LTEE NCURSES_ACS('t')
#define addstr(str) waddnstr(stdscr,str,-1)
#define __DBL_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define KEY_CODE_YES 0400
#define __INT_FAST32_MAX__ 0x7fffffff
#define __DBL_HAS_INFINITY__ 1
#define resetterm() reset_shell_mode()
#define __MAC_10_15_1 101501
#define BUTTON4_PRESSED NCURSES_MOUSE_MASK(4, NCURSES_BUTTON_PRESSED)
#define _ENDLINE 0x02
#define snprintf(str,len,...) __builtin___snprintf_chk (str, len, 0, __darwin_obsz(str), __VA_ARGS__)
#define getnstr(s,n) wgetnstr(stdscr, s, n)
#define __SIZEOF_FLOAT__ 4
#define _DARWIN_FEATURE_ONLY_UNIX_CONFORMANCE 1
#define __HAVE_SPECULATION_SAFE_VALUE 1
#define __XNU_PRIVATE_EXTERN __attribute__((visibility("hidden")))
#define __null_unspecified 
#define _INT16_T 
#define __IPHONE_3_2 30200
#define ___POSIX_C_DEPRECATED_STARTING_199309L 
#define putchar_unlocked(x) putc_unlocked(x, stdout)
#define __INTPTR_WIDTH__ 64
#define __FLT64X_HAS_INFINITY__ 1
#define __UINT_LEAST32_MAX__ 0xffffffffU
#define KEY_SRESET 0530
#define BUTTON1_RESERVED_EVENT NCURSES_MOUSE_MASK(1, NCURSES_RESERVED_EVENT)
#define addnstr(str,n) waddnstr(stdscr,str,n)
#define __FLT32X_HAS_DENORM__ 1
#define __INT_FAST16_TYPE__ short int
#define vid_attr(a,pair,opts) vidattr(a)
#define NCURSES_SIZE_T short
#define getbegyx(win,y,x) (y = getbegy(win), x = getbegx(win))
#define __MMX_WITH_SSE__ 1
#define delch() wdelch(stdscr)
#define _FULLWIN 0x04
#define __WATCHOS_UNAVAILABLE 
#define KEY_CATAB 0526
#define __DARWIN_SUF_NON_CANCELABLE 
#define BUTTON_CLICK(e,x) ((e) & NCURSES_MOUSE_MASK(x, 004))
#define __IPHONE_3_0 30000
#define __IPHONE_3_1 30100
#define __LDBL_HAS_DENORM__ 1
#define __FLT128_HAS_INFINITY__ 1
#define KEY_SHOME 0607
#define true 1
#define getparyx(win,y,x) (y = getpary(win), x = getparx(win))
#define __weak 
#define __abortlike __dead2 __cold __not_tail_called
#define __DBL_MAX_EXP__ 1024
#define setsyx(y,x) do { if (newscr) { if ((y) == -1 && (x) == -1) leaveok(newscr, TRUE); else { leaveok(newscr, FALSE); wmove(newscr, (y), (x)); } } } while(0)
#define __WCHAR_WIDTH__ 32
#define __FLT32_MAX__ 3.40282346638528859811704183484516925e+38F32
#define WA_REVERSE A_REVERSE
#define __kpi_unavailable 
#define __SSE2_MATH__ 1
#define __ATOMIC_HLE_RELEASE 131072
#define _VA_LIST_ 
#define __PTRDIFF_MAX__ 0x7fffffffffffffffL
#define __TVOS_PROHIBITED 
#define mvwaddchnstr(win,y,x,str,n) (wmove(win,y,x) == ERR ? ERR : waddchnstr(win,str,n))
#define __amd64 1
#define __strfmonlike(fmtarg,firstvararg) __attribute__((__format__ (__strfmon__, fmtarg, firstvararg)))
#define __PTHREAD_ONCE_SIZE__ 8
#define NCURSES_RESERVED_EVENT 040L
#define __AVAILABILITY__ 
#define __tune_core2__ 1
#define setterm(term) setupterm(term, 1, (int *)0)
#define TRACE_BITS 0x0100
#define __ATOMIC_HLE_ACQUIRE 65536
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#define KEY_MOUSE 0631
#define __SIZEOF_SIZE_T__ 8
#define __DARWIN_ALIAS_STARTING(_mac,_iphone,x) __DARWIN_ALIAS_STARTING_MAC_ ##_mac(x)
#define __kpi_deprecated_arm64_macos_unavailable 
#define __offsetof(type,field) __builtin_offsetof(type, field)
#define KEY_MAX 0777
#define __MAC_10_14_1 101401
#define KEY_BEG 0542
#define __SPI_DEPRECATED(...) 
#define __dead 
#define COLOR_PAIR(n) NCURSES_BITS(n, 0)
#define attr_get(ap,cp,o) wattr_get(stdscr,ap,cp,o)
#define __WATCHOS_5_0 50000
#define __FLT64X_MIN_EXP__ (-16381)
#define __SIZEOF_WINT_T__ 4
#define __WATCHOS_5_2 50200
#define NCURSES_BOOL bool
#define _SECURE__COMMON_H_ 
#define __IPHONE_11_0 110000
#define __IPHONE_11_1 110100
#define __IPHONE_11_2 110200
#define __IPHONE_11_3 110300
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_0(x) 
#define __LONG_LONG_WIDTH__ 64
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_4(x) 
#define __FLT32_MAX_EXP__ 128
#define __WATCHOS_6_0 60000
#define __WATCHOS_6_1 60100
#define __WATCHOS_6_2 60200
#define __API_DEPRECATED_END 
#define __SOPT 0x0400
#define _DARWIN_FEATURE_64_BIT_INODE 1
#define KEY_SF 0520
#define stdout __stdoutp
#define __GXX_ABI_VERSION 1016
#define __IDSTRING(name,string) static const char name[] __used = string
#define KEY_SAVE 0571
#define __header_always_inline __header_inline __attribute__ ((__always_inline__))
#define BUTTON1_CLICKED NCURSES_MOUSE_MASK(1, NCURSES_BUTTON_CLICKED)
#define KEY_F(n) (KEY_F0+(n))
#define NCURSES_CONST 
#define __FLT_MIN_EXP__ (-125)
#define __DARWIN_NULL ((void *)0)
#define __DEVOLATILE(type,var) __CAST_AWAY_QUALIFIER(var, volatile, type)
#define _BSD_I386__TYPES_H_ 
#define __printf0like(fmtarg,firstvararg) __attribute__((__format__ (__printf0__, fmtarg, firstvararg)))
#define KEY_RESET 0531
#define KEY_MIN 0401
#define __INT16_MAX__ 0x7fff
#define A_ALTCHARSET NCURSES_BITS(1U,14)
#define KEY_SPRINT 0617
#define __x86_64 1
#define CONTROL(c) ((c) & 0x1f)
#define __SALC 0x4000
#define KEY_F0 0410
#define __PTHREAD_CONDATTR_SIZE__ 8
#define mvwhline(win,y,x,c,n) (wmove(win,y,x) == ERR ? ERR : whline(win,c,n))
#define vline(ch,n) wvline(stdscr, ch, n)
#define ACS_VLINE NCURSES_ACS('x')
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_4(x) x
#define __TVOS_12_0 120000
#define __TVOS_12_1 120100
#define __TVOS_12_2 120200
#define __TVOS_12_3 120300
#define __TVOS_12_4 120400
#define __INT_FAST64_TYPE__ long long int
#define KEY_B2 0536
#define mvaddch(y,x,ch) mvwaddch(stdscr,y,x,ch)
#define _NEWINDEX -1
#define __FLT64_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F64
#define __DBL_MIN__ ((double)2.22507385850720138309023271733240406e-308L)
#define _VA_LIST 
#define __SMBF 0x0080
#define __OSX_AVAILABLE(_vers) 
#define __FLT128_EPSILON__ 1.92592994438723585305597794258492732e-34F128
#define __FLT64X_NORM_MAX__ 1.18973149535723176502126385303097021e+4932F64x
#define __SIZEOF_POINTER__ 8
#define __SIZE_TYPE__ long unsigned int
#define __sgetc(p) (--(p)->_r < 0 ? __srget(p) : (int)(*(p)->_p++))
#define __not_tail_called 
#define __IPHONE_7_0 70000
#define __IPHONE_7_1 70100
#define KEY_REDO 0563
#define __LP64__ 1
#define __deprecated_enum_msg(_msg) 
#define __DBL_HAS_QUIET_NAN__ 1
#define __IOS_DEPRECATED(_start,_dep,_msg) 
#define TRACE_SHIFT 13
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_3(x) 
#define mvaddnstr(y,x,str,n) mvwaddnstr(stdscr,y,x,str,n)
#define __FLT32X_EPSILON__ 2.22044604925031308084726333618164062e-16F32x
#define A_BOLD NCURSES_BITS(1U,13)
#define __OS_AVAILABILITY_MSG(_target,_availability,_msg) 
#define A_COLOR NCURSES_BITS(((1U) << 8) - 1U,0)
#define __nonnull 
#define COLOR_BLUE 4
#define fwopen(cookie,fn) funopen(cookie, 0, fn, 0, 0)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10_3(x) x
#define __FLT64_MIN_EXP__ (-1021)
#define MAC_OS_X_VERSION_10_11_2 101102
#define MAC_OS_X_VERSION_10_11_3 101103
#define MAC_OS_X_VERSION_10_11_4 101104
#define __MAC_OS_X_VERSION_MIN_REQUIRED __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_4(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_5(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_6(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_7(x) 
#define ACS_BSBS ACS_HLINE
#define KEY_BTAB 0541
#define __API_DEPRECATED_BEGIN_MSG_GET_MACRO(...) 
#define insdelln(n) winsdelln(stdscr,n)
#define __WATCHOS_4_1 40100
#define __FLT64_MIN_10_EXP__ (-307)
#define COLOR_WHITE 7
#define __WATCHOS_4_3 40300
#define __has_extension(x) 0
#define __MAC_OS_X_VERSION_MAX_ALLOWED __MAC_11_3
#define __FLT64X_DECIMAL_DIG__ 21
#define __REGISTER_PREFIX__ 
#define __UINT16_MAX__ 0xffff
#define __API_AVAILABLE_END 
#define __DBL_HAS_DENORM__ 1
#define WA_UNDERLINE A_UNDERLINE
#define __MAC_10_11_2 101102
#define __MAC_10_11_3 101103
#define __MAC_10_11_4 101104
#define NCURSES_WRAPPED_VAR(type,name) extern type NCURSES_PUBLIC_VAR(name)(void)
#define wgetstr(w,s) wgetnstr(w, s, -1)
#define __LDBL_HAS_INFINITY__ 1
#define __OS_AVAILABILITY(_target,_availability) 
#define KEY_SEOL 0603
#define NCURSES_API 
#define __FLT32_MIN__ 1.17549435082228750796873653722224568e-38F32
#define __UINT8_TYPE__ unsigned char
#define BUTTON3_TRIPLE_CLICKED NCURSES_MOUSE_MASK(3, NCURSES_TRIPLE_CLICKED)
#define NCURSES_IMPEXP 
#define __FLT_DIG__ 6
#define __NO_INLINE__ 1
#define KEY_SSAVE 0624
#define DEL (127)
#define __DARWIN_NON_CANCELABLE 0
#define __DEC_EVAL_METHOD__ 2
#define __AVAILABILITY_INTERNAL_DEPRECATED_MSG(_msg) __attribute__((deprecated))
#define KEY_SRIGHT 0622
#define __enum_options 
#define untouchwin(win) wtouchln((win), 0, getmaxy(win), 0)
#define __FLT_MANT_DIG__ 24
#define __LDBL_DECIMAL_DIG__ 21
#define WA_VERTICAL A_VERTICAL
#define __VERSION__ "11.2.0"
#define WA_DIM A_DIM
#define __MAC_10_10 101000
#define __MAC_10_11 101100
#define __MAC_10_12 101200
#define __MAC_10_13 101300
#define __MAC_10_14 101400
#define __MAC_10_15 101500
#define __MAC_10_16 101600
#define __DARWIN_SUF_UNIX03 
#define __UINT64_C(c) c ## ULL
#define mvaddstr(y,x,str) mvwaddstr(stdscr,y,x,str)
#define __used __attribute__((__used__))
#define NCURSES_ATTR_SHIFT 8
#define mvinch(y,x) mvwinch(stdscr,y,x)
#define BUTTON_PRESS(e,x) ((e) & NCURSES_MOUSE_MASK(x, 002))
#define KEY_COPY 0546
#define __INT_LEAST32_MAX__ 0x7fffffff
#define __STRING(x) #x
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define __DARWIN_1050ALIAS_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_NON_CANCELABLE __DARWIN_SUF_UNIX03)
#define clrtobot() wclrtobot(stdscr)
#define __DARWIN_1050ALIAS_I(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_64_BIT_INO_T __DARWIN_SUF_UNIX03)
#define __SSTR 0x0200
#define _UINTPTR_T 
#define __FLT128_MAX_EXP__ 16384
#define _DARWIN_FEATURE_UNIX_CONFORMANCE 3
#define mvwaddnstr(win,y,x,str,n) (wmove(win,y,x) == ERR ? ERR : waddnstr(win,str,n))
#define ACS_CKBOARD NCURSES_ACS('a')
#define A_UNDERLINE NCURSES_BITS(1U,9)
#define RENAME_SECLUDE 0x00000001
#define __SLBF 0x0001
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_2(x) 
#define mvinsch(y,x,c) mvwinsch(stdscr,y,x,c)
#define __FLT32_MANT_DIG__ 24
#define __API_DEPRECATED(...) 
#define _FSTDIO 
#define clearerr_unlocked(p) __sclearerr(p)
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#define ACS_DARROW NCURSES_ACS('.')
#define __IPHONE_13_5 130500
#define KEY_RESIZE 0632
#define __SRD 0x0004
#define crmode() cbreak()
#define A_HORIZONTAL NCURSES_BITS(1U,17)
#define __SRW 0x0010
#define getstr(str) wgetstr(stdscr,str)
#define __FBSDID(s) 
#define __PTHREAD_MUTEXATTR_SIZE__ 8
#define KEY_HELP 0553
#define BUTTON2_TRIPLE_CLICKED NCURSES_MOUSE_MASK(2, NCURSES_TRIPLE_CLICKED)
#define __IOS_UNAVAILABLE 
#define A_VERTICAL NCURSES_BITS(1U,22)
#define mvwgetnstr(win,y,x,str,n) (wmove(win,y,x) == ERR ? ERR : wgetnstr(win,str,n))
#define _U_INT8_T 
#define TRACE_VIRTPUT 0x0040
#define __FLT128_HAS_DENORM__ 1
#define __FLT32_DECIMAL_DIG__ 9
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_5(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_6(x) x
#define mvchgat(y,x,n,a,c,o) mvwchgat(stdscr,y,x,n,a,c,o)
#define MAC_OS_X_VERSION_10_15_1 101501
#define __FLT128_DIG__ 33
#define __OSX_UNAVAILABLE 
#define __INT32_C(c) c
#define __ORDER_PDP_ENDIAN__ 3412
#define mvwaddchstr(win,y,x,str) (wmove(win,y,x) == ERR ? ERR : waddchnstr(win,str,-1))
#define __va_copy(d,s) __builtin_va_copy(d,s)
#define getyx(win,y,x) (y = getcury(win), x = getcurx(win))
#define _Null_unspecified 
#define ACS_BSSB ACS_ULCORNER
#define __MAC_11_0 110000
#define __INT_FAST32_TYPE__ int
#define __MAC_11_3 110300
#define getc_unlocked(fp) __sgetc(fp)
#define WA_RIGHT A_RIGHT
#define __DARWIN_NO_LONG_LONG 0
#define TRACE_TIMES 0x0001
#define KEY_REFRESH 0565
#define attron(at) wattron(stdscr,at)
#define __PTHREAD_RWLOCKATTR_SIZE__ 16
#define _SCROLLWIN 0x08
#define _ANSI_STDARG_H_ 
#define __UINT_LEAST16_TYPE__ short unsigned int
#define __SAPP 0x0100
#define KEY_REPLACE 0566
#define __MAC_10_15_4 101504
#define _INT64_T 
#define KEY_PPAGE 0523
#define _STDARG_H 
#define __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ 110500
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_1(x) 
#define __UINT64_MAX__ 0xffffffffffffffffULL
#define __FLT_IS_IEC_60559__ 2
#define __GNUC_WIDE_EXECUTION_CHARSET_NAME "UTF-32LE"
#define __WATCHOS_3_0 30000
#define __WATCHOS_3_1 30100
#define __WATCHOS_3_2 30200
#define __FLT64X_DIG__ 18
#define KEY_SCOPY 0575
#define __INT8_TYPE__ signed char
#define A_DIM NCURSES_BITS(1U,12)
#define BUTTON_CTRL NCURSES_MOUSE_MASK(5, 0001L)
#define __DARWIN_NOCANCEL(sym) __asm("_" __STRING(sym) __DARWIN_SUF_NON_CANCELABLE)
#define __GCC_ASM_FLAG_OUTPUTS__ 1
#define attr_off(a,o) wattr_off(stdscr,a,o)
#define KEY_FIND 0552
#define __CAST_AWAY_QUALIFIER(variable,qualifier,type) (type) (long)(variable)
#define __UINT32_TYPE__ unsigned int
#define TRUE 1
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_1(x) 
#define BUTTON3_RESERVED_EVENT NCURSES_MOUSE_MASK(3, NCURSES_RESERVED_EVENT)
#define __API_AVAILABLE_BEGIN_GET_MACRO(...) 
#define __SOFF 0x1000
#define standout() wstandout(stdscr)
#define mvinstr(y,x,s) mvwinstr(stdscr,y,x,s)
#define KEY_SEND 0602
#define _HASMOVED 0x20
#define __FLT_RADIX__ 2
#define ACS_SSSB ACS_LTEE
#define __INT_LEAST16_TYPE__ short int
#define ACS_SSSS ACS_PLUS
#define __LDBL_EPSILON__ 1.08420217248550443400745280086994171e-19L
#define __UINTMAX_C(c) c ## UL
#define mvwgetstr(win,y,x,str) (wmove(win,y,x) == ERR ? ERR : wgetstr(win,str))
#define NCURSES_EXT_FUNCS 20081102
#define __SSE_MATH__ 1
#define ACS_SSBS ACS_BTEE
#define _U_INT32_T 
#define WA_INVIS A_INVIS
#define __k8 1
#define BUFSIZ 1024
#define __FLT32X_MIN__ 2.22507385850720138309023271733240406e-308F32x
#define ACS_PLMINUS NCURSES_ACS('g')
#define slk_attr_on(a,v) ((v) ? ERR : slk_attron(a))
#define __SIG_ATOMIC_MAX__ 0x7fffffff
#define __API_TO_BE_DEPRECATED 100000
#define KEY_SHELP 0606
#define BUTTON_RESERVED_EVENT(e,x) ((e) & NCURSES_MOUSE_MASK(x, 040))
#define ACS_NEQUAL NCURSES_ACS('|')
#define KEY_SBEG 0572
#define __WATCHOS_3_1_1 30101
#define BUTTON_DOUBLE_CLICK(e,x) ((e) & NCURSES_MOUSE_MASK(x, 010))
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define WA_BLINK A_BLINK
#define __SIZEOF_PTRDIFF_T__ 8
#define _OFF_T 
#define __IPHONE_4_0 40000
#define __IPHONE_4_1 40100
#define __IPHONE_4_2 40200
#define __IPHONE_4_3 40300
#define SEEK_SET 0
#define GCC_UNUSED 
#define __TVOS_AVAILABLE(_vers) 
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_4(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_5(x) x
#define __DARWIN_64_BIT_INO_T 1
#define NCURSES_STATIC 
#define attrset(at) wattrset(stdscr,at)
#define KEY_SMESSAGE 0612
#define __TVOS_14_0 140000
#define __TVOS_14_2 140200
#define TRACE_ORDINARY 0x001F
#define BUTTON4_RELEASED NCURSES_MOUSE_MASK(4, NCURSES_BUTTON_RELEASED)
#define mouse_trafo(y,x,to_screen) wmouse_trafo(stdscr,y,x,to_screen)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_3(x) 
#define __LDBL_DIG__ 18
#define __nullable 
#define __FLT64_IS_IEC_60559__ 2
#define __x86_64__ 1
#define __FLT32X_MIN_EXP__ (-1021)
#define MAC_OS_VERSION_11_0 110000
#define KEY_OPTIONS 0561
#define _USE_FORTIFY_LEVEL 2
#define KEY_EVENT 0633
#define BUTTON4_CLICKED NCURSES_MOUSE_MASK(4, NCURSES_BUTTON_CLICKED)
#define __INT_FAST16_MAX__ 0x7fff
#define _BSD_MACHINE__TYPES_H_ 
#define __deprecated __attribute__((__deprecated__))
#define NCURSES_TRIPLE_CLICKED 020L
#define attr_on(a,o) wattr_on(stdscr,a,o)
#define __FLT64_DIG__ 15
#define __UINT_FAST32_MAX__ 0xffffffffU
#define MAC_OS_X_VERSION_10_11 101100
#define MAC_OS_X_VERSION_10_12 101200
#define MAC_OS_X_VERSION_10_13 101300
#define MAC_OS_X_VERSION_10_14 101400
#define MAC_OS_X_VERSION_10_16 101600
#define __UINT_LEAST64_TYPE__ long long unsigned int
#define __API_DEPRECATED_WITH_REPLACEMENT_END 
#define __FLT_HAS_QUIET_NAN__ 1
#define bkgdset(ch) wbkgdset(stdscr,ch)
#define __FLT_MAX_10_EXP__ 38
#define __SEOF 0x0020
#define __LONG_MAX__ 0x7fffffffffffffffL
#define __IOS_EXTENSION_UNAVAILABLE(_msg) 
#define __FLT64X_HAS_DENORM__ 1
#define __dead2 __attribute__((__noreturn__))
#define va_copy(d,s) __builtin_va_copy(d,s)
#define KEY_SDC 0577
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
#define hline(ch,n) whline(stdscr, ch, n)
#define __ENABLE_LEGACY_MAC_AVAILABILITY 1
#define mvwaddch(win,y,x,ch) (wmove(win,y,x) == ERR ? ERR : waddch(win,ch))
#define addchstr(str) waddchstr(stdscr,str)
#define __kpi_deprecated(_msg) 
#define __UINT_FAST16_TYPE__ short unsigned int
#define mvwinchnstr(win,y,x,s,n) (wmove(win,y,x) == ERR ? ERR : winchnstr(win,s,n))
#define __INT_FAST32_WIDTH__ 32
#define __IPHONE_12_0 120000
#define __IPHONE_12_1 120100
#define __IPHONE_12_2 120200
#define __IPHONE_12_3 120300
#define __IPHONE_12_4 120400
#define PAIR_NUMBER(a) (NCURSES_CAST(int,(((a) & A_COLOR) >> NCURSES_ATTR_SHIFT)))
#define __SERR 0x0040
#define __CHAR16_TYPE__ short unsigned int
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_3(x) 
#define __PRAGMA_REDEFINE_EXTNAME 1
#define __SIZE_WIDTH__ 64
#define __WATCHOS_7_0 70000
#define __WATCHOS_7_1 70100
#define __WATCHOS_7_3 70300
#define __WATCHOS_7_4 70400
#define __SEG_FS 1
#define __INT_LEAST16_MAX__ 0x7fff
#define __OSX_AVAILABLE_BUT_DEPRECATED(_osxIntro,_osxDep,_iosIntro,_iosDep) 
#define NCURSES_TPARM_VARARGS 1
#define __INT64_MAX__ 0x7fffffffffffffffLL
#define attr_set(a,c,o) wattr_set(stdscr,a,c,o)
#define ACS_BSSS ACS_TTEE
#define __SEG_GS 1
#define __FLT32_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F32
#define A_CHARTEXT (NCURSES_BITS(1U,0) - 1U)
#define __SIG_ATOMIC_WIDTH__ 32
#define __DARWIN_ALIAS(sym) __asm("_" __STRING(sym) __DARWIN_SUF_UNIX03)
#define __INT_LEAST64_TYPE__ long long int
#define KEY_SUNDO 0626
#define __INT16_TYPE__ short int
#define __INT_LEAST8_TYPE__ signed char
#define __darwin_obsz0(object) __builtin_object_size (object, 0)
#define __STDC_VERSION__ 201710L
#define __SIZEOF_INT__ 4
#define __PTHREAD_SIZE__ 8176
#define _MACHTYPES_H_ 
#define NCURSES_INLINE inline
#define __INT_FAST8_MAX__ 0x7f
#define __FLT128_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define __INTPTR_MAX__ 0x7fffffffffffffffL
#define KEY_STAB 0524
#define _SYS_STDIO_H_ 
#define __TVOS_13_0 130000
#define __TVOS_13_2 130200
#define __TVOS_13_3 130300
#define __TVOS_13_4 130400
#define __swift_compiler_version_at_least(...) 1
#define __FLT64_HAS_QUIET_NAN__ 1
#define __SWIFT_UNAVAILABLE 
#define _SECURE__STDIO_H_ 
#define _IOLBF 1
#define __TVOS_UNAVAILABLE 
#define __LITTLE_ENDIAN__ 1
#define ACS_PI NCURSES_ACS('{')
#define BUTTON1_PRESSED NCURSES_MOUSE_MASK(1, NCURSES_BUTTON_PRESSED)
#define __DARWIN_WCHAR_MAX __WCHAR_MAX__
#define TRACE_CCALLS 0x0400
#define __FLT32_MIN_10_EXP__ (-37)
#define ___POSIX_C_DEPRECATED_STARTING_199209L 
#define __FLT32X_DIG__ 15
#define insstr(s) winsstr(stdscr,s)
#define KEY_NPAGE 0522
#define __IPHONE_8_0 80000
#define __IPHONE_8_1 80100
#define __PTRDIFF_WIDTH__ 64
#define __IPHONE_8_3 80300
#define __IPHONE_8_4 80400
#define __BEGIN_DECLS 
#define mvgetstr(y,x,str) mvwgetstr(stdscr,y,x,str)
#define __LDBL_MANT_DIG__ 64
#define __exported_push _Pragma("GCC visibility push(default)")
#define __CONSTANT_CFSTRINGS__ 1
#define __DARWIN_ONLY_64_BIT_INO_T 0
#define __SIGN 0x8000
#define __FLT64_HAS_INFINITY__ 1
#define __FLT64X_MAX__ 1.18973149535723176502126385303097021e+4932F64x
#define false 0
#define __GNUC_VA_LIST 
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#define NCURSES_PUBLIC_VAR(name) _nc_ ##name
#define __code_model_small__ 1
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_3(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_4(x) x
#define __OSX_EXTENSION_UNAVAILABLE(_msg) 
#define KEY_NEXT 0557
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define MAC_OS_X_VERSION_10_12_2 101202
#define COLOR_RED 1
#define KEY_PREVIOUS 0562
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_3(x) 
#define mvgetch(y,x) mvwgetch(stdscr,y,x)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_5(x) 
#define FILENAME_MAX 1024
#define KEY_SEXIT 0604
#define __DARWIN_WCHAR_MIN (-0x7fffffff - 1)
#define __k8__ 1
#define __INTPTR_TYPE__ long int
#define __UINT16_TYPE__ short unsigned int
#define __WCHAR_TYPE__ int
#define _SYS__PTHREAD_TYPES_H_ 
#define wattron(win,at) wattr_on(win, NCURSES_CAST(attr_t, at), NULL)
#define NCURSES_ACS(c) (acs_map[NCURSES_CAST(unsigned char,c)])
#define FALSE 0
#define ACS_BBSS ACS_URCORNER
#define __API_UNAVAILABLE_END 
#define __STDIO_H_ 
#define NCURSES_VERSION_MINOR 7
#define __pic__ 2
#define __UINTPTR_MAX__ 0xffffffffffffffffUL
#define ACS_BULLET NCURSES_ACS('~')
#define __INT_FAST64_WIDTH__ 64
#define __volatile volatile
#define NCURSES_COLOR_T short
#define __STDC_WANT_LIB_EXT1__ 1
#define __API_DEPRECATED_WITH_REPLACEMENT(...) 
#define __MAC_10_12_1 101201
#define __MAC_10_12_2 101202
#define __MAC_10_12_4 101204
#define NCURSES_ENABLE_STDBOOL_H 1
#define __INT_FAST64_MAX__ 0x7fffffffffffffffLL
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define KEY_DC 0512
#define __FLT_NORM_MAX__ 3.40282346638528859811704183484516925e+38F
#define __FLT32_HAS_INFINITY__ 1
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_2(x) 
#define __TVOS_DEPRECATED(_start,_dep,_msg) 
#define __FLT64X_MAX_EXP__ 16384
#define __UINT_FAST64_TYPE__ long long unsigned int
#define mvdelch(y,x) mvwdelch(stdscr,y,x)
#define WA_LEFT A_LEFT
#define BUTTON_SHIFT NCURSES_MOUSE_MASK(5, 0002L)
#define BUTTON4_TRIPLE_CLICKED NCURSES_MOUSE_MASK(4, NCURSES_TRIPLE_CLICKED)
#define __INT_MAX__ 0x7fffffff
#define NCURSES_OPAQUE 1
#define mvwinsstr(win,y,x,s) (wmove(win,y,x) == ERR ? ERR : winsstr(win,s))
#define TRACE_CALLS 0x0020
#define mvwchgat(win,y,x,n,a,c,o) (wmove(win,y,x) == ERR ? ERR : wchgat(win,n,a,c,o))
#define __API_DEPRECATED_REP_GET_MACRO(...) 
#define getmaxyx(win,y,x) (y = getmaxy(win), x = getmaxx(win))
#define ___POSIX_C_DEPRECATED_STARTING_199506L 
#define NCURSES_BITS(mask,shift) ((mask) << ((shift) + NCURSES_ATTR_SHIFT))
#define BUTTON3_RELEASED NCURSES_MOUSE_MASK(3, NCURSES_BUTTON_RELEASED)
#define __INT64_TYPE__ long long int
#define KEY_SDL 0600
#define __FLT_MAX_EXP__ 128
#define __swift_unavailable(_msg) 
#define __ORDER_BIG_ENDIAN__ 4321
#define __header_inline extern __inline __attribute__((__gnu_inline__))
#define _IONBF 2
#define __DBL_MANT_DIG__ 53
#define inchnstr(s,n) winchnstr(stdscr,s,n)
#define KEY_SREPLACE 0621
#define GCC_PRINTFLIKE(fmt,var) 
#define __SIZEOF_FLOAT128__ 16
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffLL
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define __WINT_TYPE__ int
#define __UINT_LEAST32_TYPE__ unsigned int
#define __SIZEOF_SHORT__ 2
#define __FLT32_NORM_MAX__ 3.40282346638528859811704183484516925e+38F32
#define NCURSES_VERSION_MAJOR 5
#define __SSE__ 1
#define __LDBL_MIN_EXP__ (-16381)
#define __FLT64_MAX__ 1.79769313486231570814527423731704357e+308F64
#define __DARWIN_C_FULL 900000L
#define __MACH__ 1
#define __amd64__ 1
#define __WINT_WIDTH__ 32
#define EOF (-1)
#define __INT_LEAST8_MAX__ 0x7f
#define __INT_LEAST64_WIDTH__ 64
#define __LDBL_MAX_EXP__ 16384
#define __FLT32X_MAX_10_EXP__ 308
#define __DARWIN_SUF_EXTSN "$DARWIN_EXTSN"
#define A_LOW NCURSES_BITS(1U,19)
#define winstr(w,s) winnstr(w, s, -1)
#define BUTTON3_PRESSED NCURSES_MOUSE_MASK(3, NCURSES_BUTTON_PRESSED)
#define KEY_SNEXT 0614
#define ACS_LANTERN NCURSES_ACS('i')
#define ACS_LRCORNER NCURSES_ACS('j')
#define __SIZEOF_INT128__ 16
#define __FLT64X_IS_IEC_60559__ 2
#define __LDBL_MAX_10_EXP__ 4932
#define __ATOMIC_RELAXED 0
#define __signed signed
#define __DBL_EPSILON__ ((double)2.22044604925031308084726333618164062e-16L)
#define TRACE_MOVE 0x0008
#define ERR (-1)
#define __FLT128_MIN__ 3.36210314311209350626267781732175260e-4932F128
#define _LP64 1
#define ESC (27)
#define __UINT8_C(c) c
#define KEY_CTAB 0525
#define __API_AVAILABLE(...) 
#define __FLT64_MAX_EXP__ 1024
#define _INT8_T 
#define __INT_LEAST32_TYPE__ int
#define __API_UNAVAILABLE(...) 
#define fropen(cookie,fn) funopen(cookie, fn, 0, 0, 0)
#define SEEK_END 2
#define __SIZEOF_WCHAR_T__ 4
#define __UINT64_TYPE__ long long unsigned int
#define __has_feature(x) 0
#define __GNUC_PATCHLEVEL__ 0
#define __DARWIN_1050(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_15_1(x) x
#define MAC_OS_X_VERSION_10_10 101000
#define KEY_MESSAGE 0555
#define __FLT128_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define mvwinsch(win,y,x,c) (wmove(win,y,x) == ERR ? ERR : winsch(win,c))
#define MAC_OS_X_VERSION_10_15 101500
#define mvwinstr(win,y,x,s) (wmove(win,y,x) == ERR ? ERR : winstr(win,s))
#define KEY_A3 0535
#define NCURSES_VERSION "5.7"
#define __FLT64_NORM_MAX__ 1.79769313486231570814527423731704357e+308F64
#define __FLT128_HAS_QUIET_NAN__ 1
#define WA_ATTRIBUTES A_ATTRIBUTES
#define __INTMAX_MAX__ 0x7fffffffffffffffL
#define NCURSES_DOUBLE_CLICKED 010L
#define __INT_FAST8_TYPE__ signed char
#define feof_unlocked(p) __sfeof(p)
#define __TVOS_11_4 110400
#define KEY_C1 0537
#define KEY_C3 0540
#define __FLT64X_MIN__ 3.36210314311209350626267781732175260e-4932F64x
#define __DEQUALIFY(type,var) __CAST_AWAY_QUALIFIER(var, const volatile, type)
#define va_arg(v,l) __builtin_va_arg(v,l)
#define A_REVERSE NCURSES_BITS(1U,10)
#define _BSD_MACHINE_TYPES_H_ 
#define KEY_DL 0510
#define __GNUC_STDC_INLINE__ 1
#define P_tmpdir "/var/tmp/"
#define __FLT64_HAS_DENORM__ 1
#define __FLT32_EPSILON__ 1.19209289550781250000000000000000000e-7F32
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_1(x) 
#define __SMOD 0x2000
#define RENAME_SWAP 0x00000002
#define mvwaddstr(win,y,x,str) (wmove(win,y,x) == ERR ? ERR : waddnstr(win,str,-1))
#define __TYPES_H_ 
#define TRACE_ATTRS 0x1000
#define __DBL_DECIMAL_DIG__ 17
#define __STDC_UTF_32__ 1
#define __INT_FAST8_WIDTH__ 8
#define OK (0)
#define __FXSR__ 1
#define __WATCHOS_4_2 40200
#define _SIZE_T 
#define __options_closed_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_closed __enum_options
#define __FLT32X_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define __DARWIN_VERS_1050 1
#define __DBL_NORM_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define KEY_ENTER 0527
#define KEY_CANCEL 0543
#define FOPEN_MAX 20
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define A_BLINK NCURSES_BITS(1U,11)
#define KEY_PRINT 0532
#define ACS_LLCORNER NCURSES_ACS('m')
#define stderr __stderrp
#define touchline(win,s,c) wtouchln((win), s, c, 1)
#define KEY_IC 0513
#define KEY_IL 0511
#define __INTMAX_WIDTH__ 64
#define ACS_SBBS ACS_LRCORNER
#define __UINT32_C(c) c ## U
#define ___POSIX_C_DEPRECATED_STARTING_200112L 
#define scrl(n) wscrl(stdscr,n)
#define ACS_SSBB ACS_LLCORNER
#define box(win,v,h) wborder(win, v, v, h, h, 0, 0, 0, 0)
#define BUTTON1_TRIPLE_CLICKED NCURSES_MOUSE_MASK(1, NCURSES_TRIPLE_CLICKED)
#define KEY_LL 0533
#define border(ls,rs,ts,bs,tl,tr,bl,br) wborder(stdscr, ls, rs, ts, bs, tl, tr, bl, br)
#define __TVOS_10_0 100000
#define __TVOS_10_1 100100
#define __TVOS_10_2 100200
#define CURSES_H 1
#define __FLT_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F
#define __IOS_AVAILABLE(_vers) 
#define _VA_LIST_T_H 
#define __API_UNAVAILABLE_BEGIN(...) 
#define __INT8_MAX__ 0x7f
#define __LONG_WIDTH__ 64
#define __PIC__ 2
#define __UINT_FAST32_TYPE__ unsigned int
#define __sfileno(p) ((p)->_file)
#define __TVOS_11_3 110300
#define addchnstr(str,n) waddchnstr(stdscr,str,n)
#define __RCSID(s) __IDSTRING(rcsid,s)
#define __FLT32X_NORM_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define __CHAR32_TYPE__ unsigned int
#define BUTTON1_DOUBLE_CLICKED NCURSES_MOUSE_MASK(1, NCURSES_DOUBLE_CLICKED)
#define NCURSES_BUTTON_CLICKED 004L
#define __FLT_MAX__ 3.40282346638528859811704183484516925e+38F
#define KEY_SOPTIONS 0615
#define __IPHONE_5_0 50000
#define __IPHONE_5_1 50100
#define __exported __attribute__((__visibility__("default")))
#define __PROJECT_VERSION(s) __IDSTRING(project_version,s)
#define REPORT_MOUSE_POSITION NCURSES_MOUSE_MASK(5, 0010L)
#define __va_list__ 
#define NCURSES_CH_T cchar_t
#define __AVAILABILITY_INTERNAL_UNAVAILABLE __attribute__((unavailable))
#define __AVAILABILITY_INTERNAL_DEPRECATED __attribute__((deprecated))
#define KEY_SUSPEND 0627
#define KEY_BACKSPACE 0407
#define __DARWIN_SUF_64_BIT_INO_T "$INODE64"
#define __SSE2__ 1
#define addch(ch) waddch(stdscr,ch)
#define __API_AVAILABLE_BEGIN(...) 
#define __OSX_AVAILABLE_STARTING(_osx,_ios) 
#define __INT32_TYPE__ int
#define KEY_SR 0521
#define __SIZEOF_DOUBLE__ 8
#define __FLT_MIN_10_EXP__ (-37)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_4(x) 
#define __FLT64_MIN__ 2.22507385850720138309023271733240406e-308F64
#define BUTTON2_RELEASED NCURSES_MOUSE_MASK(2, NCURSES_BUTTON_RELEASED)
#define __INT_LEAST32_WIDTH__ 32
#define __AVAILABILITY_INTERNAL__ 
#define __INTMAX_TYPE__ long int
#define __unavailable 
#define __DRIVERKIT_20_0 200000
#define inchstr(s) winchstr(stdscr,s)
#define KEY_UP 0403
#define FIXINC_WRAP_STDIO_H_STDIO_STDARG_H 1
#define NCURSES_ATTR_T int
#define __FLT32X_HAS_QUIET_NAN__ 1
#define GCC_SCANFLIKE(fmt,var) 
#define va_end(v) __builtin_va_end(v)
#define __ATOMIC_CONSUME 1
#define __GNUC_MINOR__ 2
#define ___POSIX_C_DEPRECATED_STARTING_198808L 
#define __INT_FAST16_WIDTH__ 16
#define __UINTMAX_MAX__ 0xffffffffffffffffUL
#define A_NORMAL (1U - 1U)
#define USER_ADDR_NULL ((user_addr_t) 0)
#define KEY_EOS 0516
#define __FLT32X_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F32x
#define __API_DEPRECATED_BEGIN_REP_GET_MACRO 
#define __unreachable_ok_pop _Pragma("GCC diagnostic pop")
#define innstr(s,n) winnstr(stdscr,s,n)
#define __DBL_MAX_10_EXP__ 308
#define __const const
#define __LDBL_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951L
#define ACS_HLINE NCURSES_ACS('q')
#define KEY_BREAK 0401
#define NCURSES_CAST(type,value) (type)(value)
#define A_TOP NCURSES_BITS(1U,21)
#define ACS_GEQUAL NCURSES_ACS('z')
#define __INT16_C(c) c
#define _CTERMID_H_ 
#define BUTTON3_DOUBLE_CLICKED NCURSES_MOUSE_MASK(3, NCURSES_DOUBLE_CLICKED)
#define mvaddchnstr(y,x,str,n) mvwaddchnstr(stdscr,y,x,str,n)
#define ACS_DIAMOND NCURSES_ACS('`')
#define __STDC__ 1
#define ACS_S1 NCURSES_ACS('o')
#define A_STANDOUT NCURSES_BITS(1U,8)
#define ACS_SBSS ACS_RTEE
#define ACS_S7 NCURSES_ACS('r')
#define KEY_LEFT 0404
#define mvaddchstr(y,x,str) mvwaddchstr(stdscr,y,x,str)
#define standend() wstandend(stdscr)
#define __PTRDIFF_TYPE__ long int
#define clear() wclear(stdscr)
#define KEY_COMMAND 0545
#define __IPHONE_13_0 130000
#define __IPHONE_13_1 130100
#define __IPHONE_13_2 130200
#define __IPHONE_13_3 130300
#define __IPHONE_13_4 130400
#define __IPHONE_13_6 130600
#define __IPHONE_13_7 130700
#define stdin __stdinp
#define WA_TOP A_TOP
#define setscrreg(t,b) wsetscrreg(stdscr,t,b)
#define __ATOMIC_SEQ_CST 5
#define __PTHREAD_COND_SIZE__ 40
#define __WATCHOS_AVAILABLE(_vers) 
#define bkgd(ch) wbkgd(stdscr,ch)
#define KEY_EXIT 0551
#define __FLT32X_MIN_10_EXP__ (-307)
#define __UINTPTR_TYPE__ long unsigned int
#define COLOR_GREEN 2
#define _SSIZE_T 
#define __SNBF 0x0002
#define __TVOS_10_0_1 100001
#define __unreachable_ok_push _Pragma("GCC diagnostic push") _Pragma("GCC diagnostic ignored \"-Wunreachable-code\"")
#define __LDBL_MIN_10_EXP__ (-4931)
#define BUTTON2_RESERVED_EVENT NCURSES_MOUSE_MASK(2, NCURSES_RESERVED_EVENT)
#define __API_DEPRECATED_WITH_REPLACEMENT_BEGIN(...) 
#define vw_printw vwprintw
#define _VA_LIST_T 
#define __SIZEOF_LONG_LONG__ 8
#define ACS_BLOCK NCURSES_ACS('0')
#define __enum_closed 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_3(x) 
#define __FLT128_DECIMAL_DIG__ 36
#define __GCC_ATOMIC_LLONG_LOCK_FREE 2
#define clrtoeol() wclrtoeol(stdscr)
#define __TVOS_14_1 140100
#define __TVOS_14_3 140300
#define __TVOS_14_5 140500
#define __enum_open 
#define mvwinnstr(win,y,x,s,n) (wmove(win,y,x) == ERR ? ERR : winnstr(win,s,n))
#define __FLT32_HAS_QUIET_NAN__ 1
#define __FLT_DECIMAL_DIG__ 9
#define __UINT_FAST16_MAX__ 0xffff
#define KEY_CLOSE 0544
#define __POSIX_C_DEPRECATED(ver) ___POSIX_C_DEPRECATED_STARTING_ ##ver
#define __LDBL_NORM_MAX__ 1.18973149535723176502126385303097021e+4932L
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_0(x) 
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define KEY_SPREVIOUS 0616
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_1(x) x
#define __SSE3__ 1
#define __UINT_FAST8_TYPE__ unsigned char
#define _U_INT16_T 
#define gettmode() 
#define __P(protos) protos
#define _NOCHANGE -1
#define __IPHONE_8_2 80200
#define __IPHONE_9_0 90000
#define __IPHONE_9_1 90100
#define __IPHONE_9_2 90200
#define __IPHONE_9_3 90300
#define __ATOMIC_ACQ_REL 4
#define __ATOMIC_RELEASE 3
#define BUTTON_RELEASE(e,x) ((e) & NCURSES_MOUSE_MASK(x, 001))
#define attroff(at) wattroff(stdscr,at)
