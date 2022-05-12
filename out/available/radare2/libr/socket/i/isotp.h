#define TAILQ_CHECK_NEXT(elm,field) 
#define ___POSIX_C_DEPRECATED_STARTING_199009L 
#define _Nullable 
#define __strftimelike(fmtarg) __attribute__((__format__ (__strftime__, fmtarg, 0)))
#define __DBL_MIN_EXP__ (-1021)
#define SAE_ASSOCID_ALL ((sae_associd_t)(-1ULL))
#define ifr_intval ifr_ifru.ifru_intval
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12_4(x) x
#define _UINT64_T 
#define _QUAD_LOWWORD 0
#define MAC_OS_X_VERSION_10_13_1 101301
#define MAC_OS_X_VERSION_10_13_2 101302
#define MAC_OS_X_VERSION_10_13_4 101304
#define PF_RESERVED_36 AF_RESERVED_36
#define SAE_ASSOCID_ANY 0
#define __unused __attribute__((__unused__))
#define FIONBIO _IOW('f', 126, int)
#define __UINT_LEAST16_MAX__ 0xffff
#define PF_VLAN ((uint32_t)0x766c616e)
#define __ATOMIC_ACQUIRE 2
#define STAILQ_INSERT_AFTER(head,tqelm,elm,field) do { if ((STAILQ_NEXT((elm), field) = STAILQ_NEXT((tqelm), field)) == NULL) (head)->stqh_last = &STAILQ_NEXT((elm), field); STAILQ_NEXT((tqelm), field) = (elm); } while (0)
#define CMSG_NXTHDR(mhdr,cmsg) ((char *)(cmsg) == (char *)0L ? CMSG_FIRSTHDR(mhdr) : ((((unsigned char *)(cmsg) + __DARWIN_ALIGN32((__uint32_t)(cmsg)->cmsg_len) + __DARWIN_ALIGN32(sizeof(struct cmsghdr))) > ((unsigned char *)(mhdr)->msg_control + (mhdr)->msg_controllen)) ? (struct cmsghdr *)0L : (struct cmsghdr *)(void *)((unsigned char *)(cmsg) + __DARWIN_ALIGN32((__uint32_t)(cmsg)->cmsg_len))))
#define __FLT128_MAX_10_EXP__ 4932
#define TIOCPTYGNAME _IOC(IOC_OUT, 't', 83, 128)
#define KEV_DL_PROTO_DETACHED 15
#define SIOCSIF6LOWPAN _IOW('i', 196, struct ifreq)
#define CAN_ISOTP_DEFAULT_FRAME_TXTIME 0
#define __FLT_MIN__ 1.17549435082228750796873653722224568e-38F
#define __GCC_IEC_559_COMPLEX 2
#define APPLE_IF_FAM_PPP 6
#define APPLE_IF_FAM_SLIP 3
#define _NET_IF_H_ 
#define FD_COPY(f,t) __DARWIN_FD_COPY(f, t)
#define __DARWIN_NFDBITS (sizeof(__int32_t) * __DARWIN_NBBY)
#define TAILQ_INSERT_BEFORE(listelm,elm,field) do { TAILQ_CHECK_PREV(listelm, field); (elm)->field.tqe_prev = (listelm)->field.tqe_prev; TAILQ_NEXT((elm), field) = (listelm); *(listelm)->field.tqe_prev = (elm); (listelm)->field.tqe_prev = &TAILQ_NEXT((elm), field); QMD_TRACE_ELEM(&(elm)->field); QMD_TRACE_ELEM(&listelm->field); } while (0)
#define __UINT_LEAST8_TYPE__ unsigned char
#define __SIZEOF_FLOAT80__ 16
#define CAN_RTR_FLAG 0x40000000U
#define _I386__ENDIAN_H_ 
#define INT_LEAST16_MIN INT16_MIN
#define KEV_DL_LINK_QUALITY_METRIC_CHANGED 20
#define SO_SNDBUF 0x1001
#define __IPHONE_14_2 140200
#define __MAC_10_13_1 101301
#define __MAC_10_13_2 101302
#define __MAC_10_13_4 101304
#define __DRIVERKIT_19_0 190000
#define KEV_INET6_REQUEST_NAT64_PREFIX 7
#define MSG_HOLD 0x800
#define __INTMAX_C(c) c ## L
#define SIOCGIFKPI _IOWR('i', 135, struct ifreq)
#define STAILQ_INIT(head) do { STAILQ_FIRST((head)) = NULL; (head)->stqh_last = &STAILQ_FIRST((head)); } while (0)
#define __enum_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_open
#define __deprecated_msg(_msg) __attribute__((__deprecated__(_msg)))
#define __DARWIN_howmany(x,y) ((((x) % (y)) == 0) ? ((x) / (y)) : (((x) / (y)) + 1))
#define __DARWIN_INODE64(sym) __asm("_" __STRING(sym) __DARWIN_SUF_64_BIT_INO_T)
#define CAN_ISOTP_DEFAULT_RECV_STMIN 0x00
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_0(x) 
#define __CHAR_BIT__ 8
#define __WATCHOS_DEPRECATED(_start,_dep,_msg) 
#define STAILQ_SWAP(head1,head2,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH do { struct type *swap_first = STAILQ_FIRST(head1); struct type **swap_last = (head1)->stqh_last; STAILQ_FIRST(head1) = STAILQ_FIRST(head2); (head1)->stqh_last = (head2)->stqh_last; STAILQ_FIRST(head2) = swap_first; (head2)->stqh_last = swap_last; if (STAILQ_EMPTY(head1)) (head1)->stqh_last = &STAILQ_FIRST(head1); if (STAILQ_EMPTY(head2)) (head2)->stqh_last = &STAILQ_FIRST(head2); } while (0) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define makedev(x,y) ((dev_t)(((x) << 24) | (y)))
#define FIOGETOWN _IOR('f', 123, int)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_0(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_3(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_6(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_7(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_8(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_9(x) x
#define IOCPARM_LEN(x) (((x) >> 16) & IOCPARM_MASK)
#define __WATCHOS_1_0 10000
#define __DARWIN_C_LEVEL __DARWIN_C_FULL
#define _U_INT64_T 
#define __UINT8_MAX__ 0xff
#define __SCHAR_WIDTH__ 8
#define _PTHREAD_RWLOCKATTR_T 
#define IFF_ALLMULTI 0x200
#define AF_PPP 34
#define SOCK_RAW 3
#define APPLE_IF_FAM_PVC 7
#define TIOCMSDTRWAIT _IOW('t', 91, int)
#define WCHAR_MAX __WCHAR_MAX__
#define INT16_C(v) (v)
#define __WINT_MAX__ 0x7fffffff
#define TIME_UTC 1
#define __FLT32_MIN_EXP__ (-125)
#define STAILQ_FIRST(head) ((head)->stqh_first)
#define NET_RT_TRASH 5
#define INT8_MAX 127
#define UINT_LEAST64_MAX UINT64_MAX
#define SO_NOSIGPIPE 0x1022
#define _CDEFS_H_ 
#define SIOCGIFPSRCADDR _IOWR('i', 63, struct ifreq)
#define __OSX_AVAILABLE_BUT_DEPRECATED_MSG(_osxIntro,_osxDep,_iosIntro,_iosDep,_msg) 
#define SIOCSIFDSTADDR _IOW('i', 14, struct ifreq)
#define SOCK_RDM 4
#define CIRCLEQ_EMPTY(head) ((head)->cqh_first == (void *)(head))
#define ITIMER_VIRTUAL 1
#define SLIST_FIRST(head) ((head)->slh_first)
#define _PTHREAD_CONDATTR_T 
#define PF_DECnet AF_DECnet
#define __TVOS_AVAILABLE(_vers) 
#define __ORDER_LITTLE_ENDIAN__ 1234
#define __SIZE_MAX__ 0xffffffffffffffffUL
#define APPLE_IF_FAM_VLAN 5
#define KEV_DL_AWDL_UNRESTRICTED 27
#define __WCHAR_MAX__ 0x7fffffff
#define AF_APPLETALK 16
#define SIOCGIFADDR _IOWR('i', 33, struct ifreq)
#define FIOASYNC _IOW('f', 125, int)
#define timersub(tvp,uvp,vvp) do { (vvp)->tv_sec = (tvp)->tv_sec - (uvp)->tv_sec; (vvp)->tv_usec = (tvp)->tv_usec - (uvp)->tv_usec; if ((vvp)->tv_usec < 0) { (vvp)->tv_sec--; (vvp)->tv_usec += 1000000; } } while (0)
#define CAN_J1939 7
#define INT16_MAX 32767
#define SIOCGIFWAKEFLAGS _IOWR('i', 136, struct ifreq)
#define SIOCGIFDEVMTU _IOWR('i', 68, struct ifreq)
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
#define STAILQ_REMOVE_AFTER(head,elm,field) do { if ((STAILQ_NEXT(elm, field) = STAILQ_NEXT(STAILQ_NEXT(elm, field), field)) == NULL) (head)->stqh_last = &STAILQ_NEXT((elm), field); } while (0)
#define TAILQ_FOREACH_SAFE(var,head,field,tvar) for ((var) = TAILQ_FIRST((head)); (var) && ((tvar) = TAILQ_NEXT((var), field), 1); (var) = (tvar))
#define __GCC_IEC_559 2
#define SIOCSIFMEDIA _IOWR('i', 55, struct ifreq)
#define __FLT32X_DECIMAL_DIG__ 17
#define __IOS_PROHIBITED 
#define IFCAP_HWCSUM (IFCAP_RXCSUM | IFCAP_TXCSUM)
#define __FLT_EVAL_METHOD__ 0
#define _PTHREAD_T 
#define AF_INET6 30
#define CAN_ISOTP_TX_PADDING 0x004
#define TIOCMBIC _IOW('t', 107, int)
#define __WATCHOS_4_0 40000
#define __FLT64_DECIMAL_DIG__ 17
#define __disable_tail_calls 
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define __IPHONE_2_0 20000
#define __IPHONE_2_1 20100
#define __IPHONE_2_2 20200
#define INT8_MIN -128
#define AF_NS 6
#define __DARWIN_SUF_1050 "$1050"
#define _OS__OSBYTEORDERI386_H 
#define _SUSECONDS_T 
#define MAC_OS_X_VERSION_10_14_4 101404
#define DST_NONE 0
#define IFF_MULTICAST 0x8000
#define CIRCLEQ_NEXT(elm,field) ((elm)->field.cqe_next)
#define IFRTYPE_FUNCTIONAL_UNKNOWN 0
#define __UINT_FAST64_MAX__ 0xffffffffffffffffULL
#define __SIG_ATOMIC_TYPE__ int
#define CAST_USER_ADDR_T(a_ptr) ((user_addr_t)((uintptr_t)(a_ptr)))
#define __DBL_MIN_10_EXP__ (-307)
#define INT16_MIN -32768
#define SLIST_NEXT(elm,field) ((elm)->field.sle_next)
#define __FINITE_MATH_ONLY__ 0
#define CIRCLEQ_FIRST(head) ((head)->cqh_first)
#define __cold __attribute__((__cold__))
#define SAE_CONNID_ALL ((sae_connid_t)(-1ULL))
#define CAN_MCNET 5
#define __FLT32X_MAX_EXP__ 1024
#define __DARWIN_NBBY 8
#define pseudo_AF_KEY 29
#define STAILQ_REMOVE(head,elm,type,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH do { if (STAILQ_FIRST((head)) == (elm)) { STAILQ_REMOVE_HEAD((head), field); } else { struct type *curelm = STAILQ_FIRST((head)); while (STAILQ_NEXT(curelm, field) != (elm)) curelm = STAILQ_NEXT(curelm, field); STAILQ_REMOVE_AFTER(head, curelm, field); } TRASHIT((elm)->field.stqe_next); } while (0) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define LIST_EMPTY(head) ((head)->lh_first == NULL)
#define __FLT32_HAS_DENORM__ 1
#define CIRCLEQ_CHECK_NEXT(head,elm,field) 
#define TIOCPKT _IOW('t', 112, int)
#define __DECONST(type,var) __CAST_AWAY_QUALIFIER(var, const, type)
#define __UINT_FAST8_MAX__ 0xff
#define MSG_NOSIGNAL 0x80000
#define __WATCHOS_PROHIBITED 
#define MSG_WAITALL 0x40
#define DST_AUST 2
#define _SYS_IOCTL_H_ 
#define TIOCM_CTS 0040
#define __FLT32_MAX_10_EXP__ 38
#define INT_FAST8_MAX INT8_MAX
#define LIST_CHECK_PREV(elm,field) 
#define SIOCSIFNETMASK _IOW('i', 22, struct ifreq)
#define __INT8_C(c) c
#define __PTHREAD_CONDATTR_SIZE__ 8
#define _U_LONG 
#define KEV_DL_WAKEFLAGS_CHANGED 17
#define __INT_LEAST8_WIDTH__ 8
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffULL
#define _ERRNO_T 
#define MSG_PEEK 0x2
#define SIOCAIFADDR _IOW('i', 26, struct ifaliasreq)
#define __restrict restrict
#define NFDBITS __DARWIN_NFDBITS
#define __SHRT_MAX__ 0x7fff
#define IFF_OACTIVE 0x400
#define APPLE_IF_FAM_FAITH 11
#define __LDBL_MAX__ 1.18973149535723176502126385303097021e+4932L
#define __exported_pop _Pragma("GCC visibility pop")
#define __SCCSID(s) __IDSTRING(sccsid,s)
#define __DARWIN_C_ANSI 010000L
#define IFF_NOARP 0x80
#define __FLT64X_MAX_10_EXP__ 4932
#define __DARWIN_ALIGN(p) ((__darwin_size_t)((__darwin_size_t)(p) + __DARWIN_ALIGNBYTES) &~ __DARWIN_ALIGNBYTES)
#define CIRCLEQ_PREV(elm,field) ((elm)->field.cqe_prev)
#define __DARWIN_EXTSN(sym) __asm("_" __STRING(sym) __DARWIN_SUF_EXTSN)
#define __IPHONE_10_0 100000
#define __IPHONE_10_1 100100
#define __IPHONE_10_2 100200
#define __IPHONE_10_3 100300
#define __LDBL_IS_IEC_60559__ 2
#define _PTHREAD_MUTEX_T 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_7_1(x) 
#define TRACEBUF 
#define TIOCIXOFF _IO('t', 128)
#define STAILQ_FOREACH_SAFE(var,head,field,tvar) for ((var) = STAILQ_FIRST((head)); (var) && ((tvar) = STAILQ_NEXT((var), field), 1); (var) = (tvar))
#define __FLT64X_HAS_QUIET_NAN__ 1
#define __WATCHOS_5_1 50100
#define __WATCHOS_5_3 50300
#define howmany(x,y) __DARWIN_howmany(x, y)
#define ___POSIX_C_DEPRECATED_STARTING_200809L 
#define __UINT_LEAST8_MAX__ 0xff
#define MSG_FLUSH 0x400
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define __alloc_size(...) __attribute__((alloc_size(__VA_ARGS__)))
#define KEV_DL_LOW_POWER_MODE_CHANGED 30
#define IFNAMSIZ 16
#define __FLT128_DENORM_MIN__ 6.47517511943802511092443895822764655e-4966F128
#define CIRCLEQ_INSERT_BEFORE(head,listelm,elm,field) do { CIRCLEQ_CHECK_PREV(head, listelm, field); (elm)->field.cqe_next = (listelm); (elm)->field.cqe_prev = (listelm)->field.cqe_prev; if ((listelm)->field.cqe_prev == (void *)(head)) (head)->cqh_first = (elm); else (listelm)->field.cqe_prev->field.cqe_next = (elm); (listelm)->field.cqe_prev = (elm); } while (0)
#define IOC_DIRMASK (__uint32_t)0xe0000000
#define NETSVC_MRKNG_LVL_L2 1
#define __APPLE_CC__ 1
#define __UINTMAX_TYPE__ long unsigned int
#define TIOCSETAF _IOW('t', 22, struct termios)
#define LIST_FIRST(head) ((head)->lh_first)
#define NET_RT_IFLIST 3
#define __result_use_check __attribute__((__warn_unused_result__))
#define INT_FAST8_MIN INT8_MIN
#define __APPLE_API_STANDARD 
#define SIOCSHIWAT _IOW('s', 0, int)
#define SLIST_INSERT_HEAD(head,elm,field) do { SLIST_NEXT((elm), field) = SLIST_FIRST((head)); SLIST_FIRST((head)) = (elm); } while (0)
#define WCHAR_MIN (-WCHAR_MAX-1)
#define __API_DEPRECATED_BEGIN(...) 
#define __FLT_EVAL_METHOD_TS_18661_3__ 0
#define TAILQ_INSERT_AFTER(head,listelm,elm,field) do { TAILQ_CHECK_NEXT(listelm, field); if ((TAILQ_NEXT((elm), field) = TAILQ_NEXT((listelm), field)) != NULL) TAILQ_NEXT((elm), field)->field.tqe_prev = &TAILQ_NEXT((elm), field); else { (head)->tqh_last = &TAILQ_NEXT((elm), field); QMD_TRACE_HEAD(head); } TAILQ_NEXT((listelm), field) = (elm); (elm)->field.tqe_prev = &TAILQ_NEXT((listelm), field); QMD_TRACE_ELEM(&(elm)->field); QMD_TRACE_ELEM(&listelm->field); } while (0)
#define KEV_INET_NEW_ADDR 1
#define _SYS_IOCCOM_H_ 
#define AF_E164 AF_ISDN
#define AF_MAX 41
#define NULL __DARWIN_NULL
#define __UINT32_MAX__ 0xffffffffU
#define CANFD_MAX_DLEN 64
#define __PTHREAD_MUTEX_SIZE__ 56
#define __DARWIN_UNIX03 1
#define AF_ECMA 8
#define __printflike(fmtarg,firstvararg) __attribute__((__format__ (__printf__, fmtarg, firstvararg)))
#define __TVOS_11_0 110000
#define __TVOS_11_1 110100
#define __TVOS_11_2 110200
#define UINT_FAST16_MAX UINT16_MAX
#define __FLT128_MIN_EXP__ (-16381)
#define SLIST_REMOVE(head,elm,type,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH do { if (SLIST_FIRST((head)) == (elm)) { SLIST_REMOVE_HEAD((head), field); } else { struct type *curelm = SLIST_FIRST((head)); while (SLIST_NEXT(curelm, field) != (elm)) curelm = SLIST_NEXT(curelm, field); SLIST_REMOVE_AFTER(curelm, field); } TRASHIT((elm)->field.sle_next); } while (0) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define __WINT_MIN__ (-__WINT_MAX__ - 1)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_2(x) 
#define __pure2 __attribute__((__const__))
#define UINT16_C(v) (v)
#define TIOCCONS _IOW('t', 98, int)
#define SOL_CAN_ISOTP (SOL_CAN_BASE + CAN_ISOTP)
#define CANFD_MTU (sizeof(struct canfd_frame))
#define __FLT128_MIN_10_EXP__ (-4931)
#define CAN_TP16 3
#define __OSX_DEPRECATED(_start,_dep,_msg) 
#define __FLT32X_IS_IEC_60559__ 2
#define KEV_DL_AWDL_RESTRICTED 26
#define htonl(x) __DARWIN_OSSwapInt32(x)
#define __INT_LEAST16_WIDTH__ 16
#define htons(x) __DARWIN_OSSwapInt16(x)
#define KEV_DL_SUBCLASS 2
#define __AVAILABILITY_INTERNAL_WEAK_IMPORT __attribute__((weak_import))
#define CAN_TP20 4
#define __SCHAR_MAX__ 0x7f
#define __FLT128_MANT_DIG__ 113
#define STAILQ_HEAD(name,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct name { struct type *stqh_first; struct type **stqh_last; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define IOC_INOUT (IOC_IN|IOC_OUT)
#define __IPHONE_6_0 60000
#define __IPHONE_6_1 60100
#define SO_REUSEADDR 0x0004
#define __WCHAR_MIN__ (-__WCHAR_MAX__ - 1)
#define CAN_ISOTP_H 
#define KEV_INET6_CHANGED_ADDR 2
#define __INT64_C(c) c ## LL
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_12(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_15(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_16(x) x
#define PF_CCITT AF_CCITT
#define SO_USELOOPBACK 0x0040
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define KEV_INET_CHANGED_ADDR 2
#define SO_LINGER 0x0080
#define SO_DEBUG 0x0001
#define IOC_OUT (__uint32_t)0x40000000
#define __MAC_11_1 110100
#define HTONL(x) (x) = htonl((__uint32_t)x)
#define HTONS(x) (x) = htons((__uint16_t)x)
#define _FORTIFY_SOURCE 2
#define TAILQ_CHECK_HEAD(head,field) 
#define TIOCSTART _IO('t', 110)
#define CAN_ISOTP_DEFAULT_PAD_CONTENT 0xCC
#define MAC_OS_X_VERSION_10_10_2 101002
#define MAC_OS_X_VERSION_10_10_3 101003
#define PF_LAT AF_LAT
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_12_4(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_2(x) 
#define __API_UNAVAILABLE_BEGIN_GET_MACRO(...) 
#define _INT32_T 
#define SIOCSIFKPI _IOW('i', 134, struct ifreq)
#define SIOCIFGCLONERS _IOWR('i', 129, struct if_clonereq)
#define TIOCM_RNG 0200
#define TRASHIT(x) 
#define _SYS_TTYCOM_H_ 
#define NET_SERVICE_TYPE_AV 6
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_2(x) x
#define __DARWIN_ONLY_UNIX_CONFORMANCE 1
#define FIOSETOWN _IOW('f', 124, int)
#define CLOCK_REALTIME _CLOCK_REALTIME
#define __FLT32X_MANT_DIG__ 53
#define NET_SERVICE_TYPE_BE 0
#define NET_SERVICE_TYPE_BK 1
#define AF_COIP 20
#define SLIST_INSERT_AFTER(slistelm,elm,field) do { SLIST_NEXT((elm), field) = SLIST_NEXT((slistelm), field); SLIST_NEXT((slistelm), field) = (elm); } while (0)
#define __USER_LABEL_PREFIX__ _
#define PPPDISC 5
#define CMSG_LEN(l) (__DARWIN_ALIGN32(sizeof(struct cmsghdr)) + (l))
#define SIOCSETVLAN SIOCSIFVLAN
#define __MAC_10_10_2 101002
#define __MAC_10_10_3 101003
#define FIODTYPE _IOR('f', 122, int)
#define _SYS_QUEUE_H_ 
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11(x) x
#define SIOCSIFMAC _IOW('i', 131, struct ifreq)
#define __END_DECLS 
#define __FLT64X_EPSILON__ 1.08420217248550443400745280086994171e-19F64x
#define SIOCGIFCAP _IOWR('i', 91, struct ifreq)
#define __CONCAT(x,y) x ## y
#define ntohll(x) __DARWIN_OSSwapInt64(x)
#define __kernel_sa_family_t unsigned short
#define __STDC_HOSTED__ 1
#define IFQ_UPDATE_INTERVAL (100ULL * 1000 * 1000)
#define IFCAP_TSO4 0x00020
#define SOCK_SEQPACKET 5
#define MAC_OS_X_VERSION_10_12_1 101201
#define ifr_media ifr_ifru.ifru_media
#define IFCAP_CSUM_ZERO_INVERT 0x04000
#define PF_NATM AF_NATM
#define KEV_DL_MASTER_ELECTED 23
#define TIOCM_RTS 0004
#define LIST_INSERT_BEFORE(listelm,elm,field) do { LIST_CHECK_PREV(listelm, field); (elm)->field.le_prev = (listelm)->field.le_prev; LIST_NEXT((elm), field) = (listelm); *(listelm)->field.le_prev = (elm); (listelm)->field.le_prev = &LIST_NEXT((elm), field); } while (0)
#define MAC_OS_X_VERSION_10_12_4 101204
#define KEV_DL_QOS_MODE_CHANGED 29
#define SIOCSIFLLADDR _IOW('i', 60, struct ifreq)
#define __options_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_open __enum_options
#define __IPHONE_14_0 140000
#define __IPHONE_14_1 140100
#define __IPHONE_14_3 140300
#define __IPHONE_14_5 140500
#define __DBL_DIG__ 15
#define _SYS__ENDIAN_H_ 
#define __FLT32_DIG__ 6
#define _TIME_H_ 
#define __SWIFT_UNAVAILABLE_MSG(_msg) 
#define __FLT_EPSILON__ 1.19209289550781250000000000000000000e-7F
#define KEV_DL_SIFMTU 3
#define INT32_MIN (-INT32_MAX-1)
#define KEV_DL_SIFMEDIA 5
#define __scanflike(fmtarg,firstvararg) __attribute__((__format__ (__scanf__, fmtarg, firstvararg)))
#define __SHRT_WIDTH__ 16
#define __TVOS_9_0 90000
#define __TVOS_9_1 90100
#define __TVOS_9_2 90200
#define _Nonnull 
#define AF_IMPLINK 3
#define SO_BROADCAST 0x0020
#define SIOCAUTONETMASK _IOW('i', 39, struct ifreq)
#define __FLT32_IS_IEC_60559__ 2
#define PF_UNIX PF_LOCAL
#define __PTHREAD_RWLOCK_SIZE__ 192
#define ifr_dstaddr ifr_ifru.ifru_dstaddr
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13(x) x
#define IF_MINMTU 72
#define __LDBL_MIN__ 3.36210314311209350626267781732175260e-4932L
#define __STDC_UTF_16__ 1
#define __DBL_IS_IEC_60559__ 2
#define __API_DEPRECATED_MSG_GET_MACRO(...) 
#define TIOCMGET _IOR('t', 106, int)
#define __API_AVAILABLE_GET_MACRO(...) 
#define __APPLE_API_EVOLVING 
#define _BLKCNT_T 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_1(x) 
#define TAILQ_PREV(elm,headname,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH (*(((struct headname *)((elm)->field.tqe_prev))->tqh_last)) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define TIOCNXCL _IO('t', 14)
#define __strong 
#define SIOCSIFFLAGS _IOW('i', 16, struct ifreq)
#define TIOCMGDTRWAIT _IOR('t', 90, int)
#define TIOCM_CD TIOCM_CAR
#define __FLT64X_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951F64x
#define __MAC_10_1 1010
#define CAN_ISOTP_RX_PADDING 0x008
#define SIOCGLOWAT _IOR('s', 3, int)
#define KEV_DL_LINK_ADDRESS_CHANGED 16
#define KEV_INET_SUBCLASS 1
#define __DARWIN_BYTE_ORDER __DARWIN_LITTLE_ENDIAN
#define __MAC_10_3 1030
#define __FLT32X_HAS_INFINITY__ 1
#define APPLE_IF_FAM_6LOWPAN 16
#define __enum_closed_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_closed
#define SO_ACCEPTCONN 0x0002
#define __INT32_MAX__ 0x7fffffff
#define CAN_EFF_FLAG 0x80000000U
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_1(x) 
#define CIRCLEQ_LAST(head) ((head)->cqh_last)
#define KEV_INET_ADDR_DELETED 3
#define SIOCARPIPLL _IOWR('i', 40, struct ifreq)
#define SIOCGIFVLAN _IOWR('i', 127, struct ifreq)
#define __AVAILABILITY_VERSIONS__ 
#define __INT_WIDTH__ 32
#define __SIZEOF_LONG__ 8
#define __DARWIN_1050INODE64(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_64_BIT_INO_T)
#define CAN_EFF_ID_BITS 29
#define STAILQ_FOREACH(var,head,field) for((var) = STAILQ_FIRST((head)); (var); (var) = STAILQ_NEXT((var), field))
#define KEV_INET_ARPRTRFAILURE 9
#define __AVAILABILITY_INTERNAL_REGULAR 
#define SIOCGIFMEDIA _IOWR('i', 56, struct ifmediareq)
#define __DARWIN_WEOF ((__darwin_wint_t)-1)
#define SO_TYPE 0x1008
#define __SPI_DEPRECATED_WITH_REPLACEMENT(...) 
#define CAN_RAW 1
#define __APPLE__ 1
#define __UINT16_C(c) c
#define SCM_RIGHTS 0x01
#define __WATCHOS_7_2 70200
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10_2(x) x
#define NET_SERVICE_TYPE_RV 5
#define _INTPTR_T 
#define SO_DONTTRUNC 0x2000
#define __DECIMAL_DIG__ 21
#define SO_UPCALLCLOSEWAIT 0x1027
#define HTONLL(x) (x) = htonll((__uint64_t)x)
#define IFRTYPE_FUNCTIONAL_LOOPBACK 1
#define __FLT64_EPSILON__ 2.22044604925031308084726333618164062e-16F64
#define __APPLE_API_STABLE 
#define TAILQ_INSERT_TAIL(head,elm,field) do { TAILQ_NEXT((elm), field) = NULL; (elm)->field.tqe_prev = (head)->tqh_last; *(head)->tqh_last = (elm); (head)->tqh_last = &TAILQ_NEXT((elm), field); QMD_TRACE_HEAD(head); QMD_TRACE_ELEM(&(elm)->field); } while (0)
#define __FLT128_IS_IEC_60559__ 2
#define FIONREAD _IOR('f', 127, int)
#define SHUT_RDWR 2
#define KEV_DL_IF_DETACHING 10
#define IFCAP_VALID (IFCAP_HWCSUM | IFCAP_TSO | IFCAP_LRO | IFCAP_VLAN_MTU | IFCAP_VLAN_HWTAGGING | IFCAP_JUMBO_MTU | IFCAP_AV | IFCAP_TXSTATUS | IFCAP_SKYWALK | IFCAP_SW_TIMESTAMP | IFCAP_HW_TIMESTAMP | IFCAP_CSUM_PARTIAL | IFCAP_CSUM_ZERO_INVERT)
#define SIG_ATOMIC_MIN INT32_MIN
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_1(x) 
#define TIOCGPGRP _IOR('t', 119, int)
#define __FLT64X_MIN_10_EXP__ (-4931)
#define NET_SERVICE_TYPE_VI 3
#define NET_SERVICE_TYPE_VO 4
#define __LDBL_HAS_QUIET_NAN__ 1
#define INT64_C(v) (v ## LL)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_1(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_2(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_13_4(x) x
#define MAC_OS_X_VERSION_10_14_1 101401
#define MAC_OS_X_VERSION_10_14_6 101406
#define __FLT64_MANT_DIG__ 53
#define __API_UNAVAILABLE_GET_MACRO(...) 
#define IFF_LINK0 0x1000
#define _FSBLKCNT_T 
#define __SPI_AVAILABLE(...) 
#define AF_RESERVED_36 36
#define QMD_TRACE_HEAD(head) 
#define __FLT64X_MANT_DIG__ 64
#define TAILQ_REMOVE(head,elm,field) do { TAILQ_CHECK_NEXT(elm, field); TAILQ_CHECK_PREV(elm, field); if ((TAILQ_NEXT((elm), field)) != NULL) TAILQ_NEXT((elm), field)->field.tqe_prev = (elm)->field.tqe_prev; else { (head)->tqh_last = (elm)->field.tqe_prev; QMD_TRACE_HEAD(head); } *(elm)->field.tqe_prev = TAILQ_NEXT((elm), field); TRASHIT((elm)->field.tqe_next); TRASHIT((elm)->field.tqe_prev); QMD_TRACE_ELEM(&(elm)->field); } while (0)
#define TIOCDSIMICROCODE _IO('t', 85)
#define __DYNAMIC__ 1
#define SONPX_SETOPTSHUT 0x000000001
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
#define __DARWIN_ALIAS_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_NON_CANCELABLE __DARWIN_SUF_UNIX03)
#define __DARWIN_ALIAS_I(sym) __asm("_" __STRING(sym) __DARWIN_SUF_64_BIT_INO_T __DARWIN_SUF_UNIX03)
#define IOCPARM_MAX (IOCPARM_MASK + 1)
#define UINT_LEAST8_MAX UINT8_MAX
#define _INO_T 
#define __MMX__ 1
#define FD_SET(n,p) __DARWIN_FD_SET(n, p)
#define __FLT_HAS_DENORM__ 1
#define __SIZEOF_LONG_DOUBLE__ 16
#define __compiler_barrier() __asm__ __volatile__("" ::: "memory")
#define __MAC_10_14_4 101404
#define __MAC_10_14_6 101406
#define KEV_DL_ISSUES 24
#define CANFD_MAX_DLC 15
#define SO_LINGER_SEC 0x1080
#define PF_MAX AF_MAX
#define SO_SNDLOWAT 0x1003
#define INT_FAST16_MIN INT16_MIN
#define KEV_DL_IF_IDLE_ROUTE_REFCNT 18
#define CIRCLEQ_CHECK_HEAD(head,field) 
#define IFF_ALTPHYS IFF_LINK2
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_1(x) 
#define TIOCSDRAINWAIT _IOW('t', 87, int)
#define __BIGGEST_ALIGNMENT__ 16
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_0(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_1(x) x
#define AF_UNSPEC 0
#define __DARWIN_ALIAS_STARTING_MAC___MAC_11_3(x) x
#define TIOCCBRK _IO('t', 122)
#define __DARWIN_ONLY_VERS_1050 0
#define __WATCHOS_2_0 20000
#define __WATCHOS_2_1 20100
#define __WATCHOS_2_2 20200
#define AF_UTUN 38
#define __DARWIN_1050ALIAS(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_UNIX03)
#define __FLT64_MAX_10_EXP__ 308
#define SLIST_HEAD_INITIALIZER(head) { NULL }
#define _SYS_SOCKIO_H_ 
#define _TIME_T 
#define PF_PIP pseudo_AF_PIP
#define _IN_ADDR_T 
#define __COPYRIGHT(s) __IDSTRING(copyright,s)
#define MSG_DONTROUTE 0x4
#define __pure 
#define TIOCPKT_IOCTL 0x40
#define AF_SIP 24
#define __DBL_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define __APPLE_API_UNSTABLE 
#define __INT_FAST32_MAX__ 0x7fffffff
#define htonll(x) __DARWIN_OSSwapInt64(x)
#define SIOCGETVLAN SIOCGIFVLAN
#define __DBL_HAS_INFINITY__ 1
#define __MAC_10_15_1 101501
#define _SYS_TYPES_H_ 
#define AF_LINK 18
#define CAN_MAX_DLC 8
#define TIOCSCTTY _IO('t', 97)
#define __SIZEOF_FLOAT__ 4
#define _DARWIN_FEATURE_ONLY_UNIX_CONFORMANCE 1
#define IFRTYPE_FUNCTIONAL_WIFI_AWDL 4
#define __HAVE_SPECULATION_SAFE_VALUE 1
#define __XNU_PRIVATE_EXTERN __attribute__((visibility("hidden")))
#define __null_unspecified 
#define _INT16_T 
#define __IPHONE_3_2 30200
#define ___POSIX_C_DEPRECATED_STARTING_199309L 
#define AF_SYSTEM 32
#define __INTPTR_WIDTH__ 64
#define __FLT64X_HAS_INFINITY__ 1
#define SO_WANTMORE 0x4000
#define __UINT_LEAST32_MAX__ 0xffffffffU
#define AF_CHAOS 5
#define SOCK_MAXADDRLEN 255
#define PF_PPP AF_PPP
#define ifr_route_refcnt ifr_ifru.ifru_route_refcnt
#define __FLT32X_HAS_DENORM__ 1
#define __INT_FAST16_TYPE__ short int
#define CAN_ISOTP_HALF_DUPLEX 0x040
#define SIOCSIFBOND _IOW('i', 70, struct ifreq)
#define _BLKSIZE_T 
#define __MMX_WITH_SSE__ 1
#define __WATCHOS_UNAVAILABLE 
#define TIOCSETD _IOW('t', 27, int)
#define __DARWIN_SUF_NON_CANCELABLE 
#define CAN_ISOTP_TX_STMIN 3
#define __IPHONE_3_0 30000
#define __IPHONE_3_1 30100
#define __LDBL_HAS_DENORM__ 1
#define APPLE_IF_FAM_CELLULAR 15
#define CAN_SFF_ID_BITS 11
#define __FLT128_HAS_INFINITY__ 1
#define _STRUCT_TIMEVAL struct timeval
#define _GCC_WRAP_STDINT_H 
#define IFF_SIMPLEX 0x800
#define TIOCGETD _IOR('t', 26, int)
#define __weak 
#define _DEV_T 
#define TIOCPKT_STOP 0x04
#define PF_PUP AF_PUP
#define __abortlike __dead2 __cold __not_tail_called
#define SO_DONTROUTE 0x0010
#define __DBL_MAX_EXP__ 1024
#define SOL_SOCKET 0xffff
#define __WCHAR_WIDTH__ 32
#define __DARWIN_BIG_ENDIAN 4321
#define __FLT32_MAX__ 3.40282346638528859811704183484516925e+38F32
#define KEV_INET6_NEW_LL_ADDR 4
#define __kpi_unavailable 
#define __SSE2_MATH__ 1
#define __ATOMIC_HLE_RELEASE 131072
#define _SS_PAD1SIZE (_SS_ALIGNSIZE - sizeof(__uint8_t) - sizeof(sa_family_t))
#define PDP_ENDIAN __DARWIN_PDP_ENDIAN
#define PF_ISDN AF_ISDN
#define NET_RT_IFLIST2 6
#define __PTRDIFF_MAX__ 0x7fffffffffffffffL
#define __TVOS_PROHIBITED 
#define _STRUCT_IOVEC 
#define __amd64 1
#define CAN_SFF_MASK 0x000007FFU
#define __strfmonlike(fmtarg,firstvararg) __attribute__((__format__ (__strfmon__, fmtarg, firstvararg)))
#define SLIST_REMOVE_HEAD(head,field) do { SLIST_FIRST((head)) = SLIST_NEXT(SLIST_FIRST((head)), field); } while (0)
#define MSG_EOF 0x100
#define TIOCM_DSR 0400
#define __PTHREAD_ONCE_SIZE__ 8
#define timerisset(tvp) ((tvp)->tv_sec || (tvp)->tv_usec)
#define SIOCDELMULTI _IOW('i', 50, struct ifreq)
#define TIOCM_DTR 0002
#define IFCAP_SW_TIMESTAMP 0x01000
#define CAN_ISOTP_OPTS 1
#define __AVAILABILITY__ 
#define SOCK_DGRAM 2
#define __tune_core2__ 1
#define KEV_INET_ARPCOLLISION 7
#define KEV_DL_SIFMETRICS 2
#define ifr_metric ifr_ifru.ifru_metric
#define __ATOMIC_HLE_ACQUIRE 65536
#define _SS_PAD2SIZE (_SS_MAXSIZE - sizeof(__uint8_t) - sizeof(sa_family_t) - _SS_PAD1SIZE - _SS_ALIGNSIZE)
#define ifr_addr ifr_ifru.ifru_addr
#define _UINT32_T 
#define IFF_POINTOPOINT 0x10
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#define SIOCSDRVSPEC _IOW('i', 123, struct ifdrv)
#define TIOCPTYUNLK _IO('t', 82)
#define __SIZEOF_SIZE_T__ 8
#define __DARWIN_ALIAS_STARTING(_mac,_iphone,x) __DARWIN_ALIAS_STARTING_MAC_ ##_mac(x)
#define __kpi_deprecated_arm64_macos_unavailable 
#define __offsetof(type,field) __builtin_offsetof(type, field)
#define __MAC_10_14_1 101401
#define LIST_INSERT_AFTER(listelm,elm,field) do { LIST_CHECK_NEXT(listelm, field); if ((LIST_NEXT((elm), field) = LIST_NEXT((listelm), field)) != NULL) LIST_NEXT((listelm), field)->field.le_prev = &LIST_NEXT((elm), field); LIST_NEXT((listelm), field) = (elm); (elm)->field.le_prev = &LIST_NEXT((listelm), field); } while (0)
#define SO_NETSVC_MARKING_LEVEL 0x1119
#define IF_DATA_TIMEVAL timeval32
#define __SPI_DEPRECATED(...) 
#define __dead 
#define __DARWIN_FD_ZERO(p) __builtin_bzero(p, sizeof(*(p)))
#define __WATCHOS_5_0 50000
#define __FLT64X_MIN_EXP__ (-16381)
#define SIZE_MAX UINTPTR_MAX
#define __SIZEOF_WINT_T__ 4
#define __WATCHOS_5_2 50200
#define ifr_flags ifr_ifru.ifru_flags
#define TIOCSPGRP _IOW('t', 118, int)
#define PF_ECMA AF_ECMA
#define SIOCGHIWAT _IOR('s', 1, int)
#define IOC_VOID (__uint32_t)0x20000000
#define __IPHONE_11_0 110000
#define __IPHONE_11_1 110100
#define __IPHONE_11_2 110200
#define __IPHONE_11_3 110300
#define PF_UNSPEC AF_UNSPEC
#define UINT64_C(v) (v ## ULL)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_0(x) 
#define __LONG_LONG_WIDTH__ 64
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_8_4(x) 
#define TIOCPKT_NOSTOP 0x10
#define __FLT32_MAX_EXP__ 128
#define WINT_MAX INT32_MAX
#define SIOCATMARK _IOR('s', 7, int)
#define SO_NKE 0x1021
#define __WATCHOS_6_0 60000
#define __WATCHOS_6_1 60100
#define __WATCHOS_6_2 60200
#define __API_DEPRECATED_END 
#define AF_PUP 4
#define _DARWIN_FEATURE_64_BIT_INODE 1
#define SAE_CONNID_ANY 0
#define CONNECT_DATA_AUTHENTICATED 0x4
#define UINTPTR_MAX 18446744073709551615UL
#define STAILQ_NEXT(elm,field) ((elm)->field.stqe_next)
#define IFQ_MAXLEN 128
#define KEV_DL_SIFFLAGS 1
#define IFRTYPE_FUNCTIONAL_WIRED 2
#define __GXX_ABI_VERSION 1016
#define __IDSTRING(name,string) static const char name[] __used = string
#define __header_always_inline __header_inline __attribute__ ((__always_inline__))
#define MSG_HAVEMORE 0x2000
#define UINT_LEAST16_MAX UINT16_MAX
#define __DARWIN_FD_SET(n,p) __darwin_fd_set((n), (p))
#define __FLT_MIN_EXP__ (-125)
#define IFSTATMAX 800
#define __DARWIN_NULL ((void *)0)
#define __DEVOLATILE(type,var) __CAST_AWAY_QUALIFIER(var, volatile, type)
#define _STRUCT_TIMEVAL32 struct timeval32
#define TAILQ_FOREACH_REVERSE_SAFE(var,head,headname,field,tvar) for ((var) = TAILQ_LAST((head), headname); (var) && ((tvar) = TAILQ_PREV((var), headname, field), 1); (var) = (tvar))
#define INT64_MAX 9223372036854775807LL
#define ITIMER_REAL 0
#define _BSD_I386__TYPES_H_ 
#define UINT32_MAX 4294967295U
#define __printf0like(fmtarg,firstvararg) __attribute__((__format__ (__printf0__, fmtarg, firstvararg)))
#define __INT16_MAX__ 0x7fff
#define _BSD_MACHINE__TYPES_H_ 
#define PF_IPX AF_IPX
#define __x86_64 1
#define IFRTYPE_FUNCTIONAL_COMPANIONLINK 7
#define TIOCMODG _IOR('t', 3, int)
#define TIOCMODS _IOW('t', 4, int)
#define NBBY __DARWIN_NBBY
#define TIOCSBRK _IO('t', 123)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_4(x) x
#define __TVOS_12_0 120000
#define __TVOS_12_1 120100
#define __TVOS_12_2 120200
#define __TVOS_12_3 120300
#define __TVOS_12_4 120400
#define LIST_CHECK_NEXT(elm,field) 
#define __INT_FAST64_TYPE__ long long int
#define KEV_DL_IFDELEGATE_CHANGED 25
#define TIOCPKT_DOSTOP 0x20
#define __FLT64_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F64
#define PF_ISO AF_ISO
#define __DBL_MIN__ ((double)2.22507385850720138309023271733240406e-308L)
#define SO_NWRITE 0x1024
#define WINT_MIN INT32_MIN
#define CANFD_BRS 0x01
#define DST_WET 3
#define __OSX_AVAILABLE(_vers) 
#define SIOCGIFFLAGS _IOWR('i', 17, struct ifreq)
#define FD_SETSIZE __DARWIN_FD_SETSIZE
#define IFF_BROADCAST 0x2
#define SIOCGIFPDSTADDR _IOWR('i', 64, struct ifreq)
#define __FLT128_EPSILON__ 1.92592994438723585305597794258492732e-34F128
#define SO_RCVLOWAT 0x1004
#define SIOCSLOWAT _IOW('s', 2, int)
#define __FLT64X_NORM_MAX__ 1.18973149535723176502126385303097021e+4932F64x
#define __SIZEOF_POINTER__ 8
#define __SIZE_TYPE__ long unsigned int
#define TIOCPTYGRANT _IO('t', 84)
#define __not_tail_called 
#define __IPHONE_7_0 70000
#define __IPHONE_7_1 70100
#define PF_COIP AF_COIP
#define __LP64__ 1
#define CAN_ISOTP_CHK_PAD_DATA 0x020
#define __deprecated_enum_msg(_msg) 
#define __DBL_HAS_QUIET_NAN__ 1
#define __IOS_DEPRECATED(_start,_dep,_msg) 
#define ifr_mtu ifr_ifru.ifru_mtu
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_3(x) 
#define __FLT32X_EPSILON__ 2.22044604925031308084726333618164062e-16F32x
#define SO_SNDTIMEO 0x1005
#define __OS_AVAILABILITY_MSG(_target,_availability,_msg) 
#define __nonnull 
#define IFF_RUNNING 0x40
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_10_3(x) x
#define __FLT64_MIN_EXP__ (-1021)
#define KEV_DL_LINK_ON 13
#define MAC_OS_X_VERSION_10_11_2 101102
#define MAC_OS_X_VERSION_10_11_3 101103
#define MAC_OS_X_VERSION_10_11_4 101104
#define SLIST_EMPTY(head) ((head)->slh_first == NULL)
#define __MAC_OS_X_VERSION_MIN_REQUIRED __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_4(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_5(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_6(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_13_7(x) 
#define __API_DEPRECATED_BEGIN_MSG_GET_MACRO(...) 
#define INT_LEAST8_MAX INT8_MAX
#define __WATCHOS_4_1 40100
#define LIST_FOREACH_SAFE(var,head,field,tvar) for ((var) = LIST_FIRST((head)); (var) && ((tvar) = LIST_NEXT((var), field), 1); (var) = (tvar))
#define _SYS_FILIO_H_ 
#define __FLT64_MIN_10_EXP__ (-307)
#define timerclear(tvp) (tvp)->tv_sec = (tvp)->tv_usec = 0
#define SIOCGIFBOND _IOWR('i', 71, struct ifreq)
#define __WATCHOS_4_3 40300
#define __has_extension(x) 0
#define __MAC_OS_X_VERSION_MAX_ALLOWED __MAC_11_3
#define _IOC(inout,group,num,len) (inout | ((len & IOCPARM_MASK) << 16) | ((group) << 8) | (num))
#define CLOCK_UPTIME_RAW _CLOCK_UPTIME_RAW
#define CAN_ISOTP_EXTEND_ADDR 0x002
#define SIOCSIFMETRIC _IOW('i', 24, struct ifreq)
#define _IOR(g,n,t) _IOC(IOC_OUT, (g), (n), sizeof(t))
#define _IOW(g,n,t) _IOC(IOC_IN, (g), (n), sizeof(t))
#define PF_SIP AF_SIP
#define SIOCSIFALTMTU _IOW('i', 69, struct ifreq)
#define __FLT64X_DECIMAL_DIG__ 21
#define PF_OSI AF_ISO
#define ifr_data ifr_ifru.ifru_data
#define __REGISTER_PREFIX__ 
#define __UINT16_MAX__ 0xffff
#define IFRTYPE_FUNCTIONAL_INTCOPROC 6
#define __API_AVAILABLE_END 
#define __DBL_HAS_DENORM__ 1
#define INT_LEAST32_MAX INT32_MAX
#define _NET_NETKEV_H_ 
#define __MAC_10_11_3 101103
#define __MAC_10_11_4 101104
#define STAILQ_REMOVE_HEAD_UNTIL(head,elm,field) do { if ((STAILQ_FIRST((head)) = STAILQ_NEXT((elm), field)) == NULL) (head)->stqh_last = &STAILQ_FIRST((head)); } while (0)
#define __LDBL_HAS_INFINITY__ 1
#define __OS_AVAILABILITY(_target,_availability) 
#define PF_INET6 AF_INET6
#define _FD_SET 
#define __FLT32_MIN__ 1.17549435082228750796873653722224568e-38F32
#define __UINT8_TYPE__ unsigned char
#define MSG_CTRUNC 0x20
#define IFCAP_LRO 0x00080
#define __FLT_DIG__ 6
#define __NO_INLINE__ 1
#define SIOCSIFASYNCMAP _IOW('i', 125, struct ifreq)
#define SO_NET_SERVICE_TYPE 0x1116
#define __DARWIN_NON_CANCELABLE 0
#define __DEC_EVAL_METHOD__ 2
#define __AVAILABILITY_INTERNAL_DEPRECATED_MSG(_msg) __attribute__((deprecated))
#define STAILQ_REMOVE_HEAD(head,field) do { if ((STAILQ_FIRST((head)) = STAILQ_NEXT(STAILQ_FIRST((head)), field)) == NULL) (head)->stqh_last = &STAILQ_FIRST((head)); } while (0)
#define SIOCSIFMTU _IOW('i', 52, struct ifreq)
#define __enum_options 
#define __FLT_MANT_DIG__ 24
#define __LDBL_DECIMAL_DIG__ 21
#define INT_LEAST8_MIN INT8_MIN
#define CIRCLEQ_ENTRY(type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct { struct type *cqe_next; struct type *cqe_prev; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define __VERSION__ "11.2.0"
#define SIOCSIFPHYADDR _IOW('i', 62, struct ifaliasreq)
#define __MAC_10_10 101000
#define __MAC_10_11 101100
#define __MAC_10_12 101200
#define __MAC_10_13 101300
#define __MAC_10_14 101400
#define __MAC_10_15 101500
#define __MAC_10_16 101600
#define __DARWIN_SUF_UNIX03 
#define __UINT64_C(c) c ## ULL
#define PF_SYSTEM AF_SYSTEM
#define _SS_MAXSIZE 128
#define __used __attribute__((__used__))
#define SO_KEEPALIVE 0x0008
#define MSG_WAITSTREAM 0x200
#define timevalcmp(l,r,cmp) timercmp(l, r, cmp)
#define _PTHREAD_RWLOCK_T 
#define _SOCKLEN_T 
#define NET_RT_STAT 4
#define CAN_ISOTP_DEFAULT_RECV_BS 0
#define INT_LEAST32_MIN INT32_MIN
#define DST_EET 5
#define INT_FAST16_MAX INT16_MAX
#define __APPLE_API_PRIVATE 
#define _IN_PORT_T 
#define CMSG_FIRSTHDR(mhdr) ((mhdr)->msg_controllen >= sizeof(struct cmsghdr) ? (struct cmsghdr *)(mhdr)->msg_control : (struct cmsghdr *)0L)
#define CAN_MAX_DLEN 8
#define _SYS__TYPES_H_ 
#define SIOCGIFMAC _IOWR('i', 130, struct ifreq)
#define __INT_LEAST32_MAX__ 0x7fffffff
#define TAILQ_EMPTY(head) ((head)->tqh_first == NULL)
#define __STRING(x) #x
#define SO_OOBINLINE 0x0100
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define __DARWIN_1050ALIAS_C(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_NON_CANCELABLE __DARWIN_SUF_UNIX03)
#define __DARWIN_1050ALIAS_I(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050 __DARWIN_SUF_64_BIT_INO_T __DARWIN_SUF_UNIX03)
#define ifc_buf ifc_ifcu.ifcu_buf
#define IFF_NOTRAILERS 0x20
#define _UINTPTR_T 
#define __FLT128_MAX_EXP__ 16384
#define APPLE_IF_FAM_GIF 10
#define _DARWIN_FEATURE_UNIX_CONFORMANCE 3
#define KEV_INET_ARPRTRALIVE 10
#define LIST_INSERT_HEAD(head,elm,field) do { LIST_CHECK_HEAD((head), field); if ((LIST_NEXT((elm), field) = LIST_FIRST((head))) != NULL) LIST_FIRST((head))->field.le_prev = &LIST_NEXT((elm), field); LIST_FIRST((head)) = (elm); (elm)->field.le_prev = &LIST_FIRST((head)); } while (0)
#define PF_RTIP pseudo_AF_RTIP
#define TIOCMSET _IOW('t', 109, int)
#define __TVOS_11_4 110400
#define timercmp(tvp,uvp,cmp) (((tvp)->tv_sec == (uvp)->tv_sec) ? ((tvp)->tv_usec cmp (uvp)->tv_usec) : ((tvp)->tv_sec cmp (uvp)->tv_sec))
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_2(x) 
#define __FLT32_MANT_DIG__ 24
#define __API_DEPRECATED(...) 
#define NET_MAXID AF_MAX
#define LIST_HEAD_INITIALIZER(head) { NULL }
#define TIOCPKT_START 0x08
#define KEV_DL_NODE_PRESENCE 21
#define KEV_INET6_NEW_RTADV_ADDR 5
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#define SIOCGIFBRDADDR _IOWR('i', 35, struct ifreq)
#define SIOCGPGRP _IOR('s', 9, int)
#define _CLOCK_T 
#define SIOCGDRVSPEC _IOWR('i', 123, struct ifdrv)
#define pseudo_AF_PIP 25
#define _INTMAX_T 
#define CAN_ERR_FLAG 0x20000000U
#define _GID_T 
#define __IPHONE_13_5 130500
#define SIG_ATOMIC_MAX INT32_MAX
#define CAN_ISOTP_DEFAULT_FLAGS 0
#define SIOCGIFMETRIC _IOWR('i', 23, struct ifreq)
#define __FBSDID(s) 
#define __PTHREAD_MUTEXATTR_SIZE__ 8
#define STAILQ_INSERT_HEAD(head,elm,field) do { if ((STAILQ_NEXT((elm), field) = STAILQ_FIRST((head))) == NULL) (head)->stqh_last = &STAILQ_NEXT((elm), field); STAILQ_FIRST((head)) = (elm); } while (0)
#define __IOS_UNAVAILABLE 
#define INT32_MAX 2147483647
#define KEV_DL_DELMULTI 8
#define STAILQ_ENTRY(type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct { struct type *stqe_next; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define CIRCLEQ_INSERT_TAIL(head,elm,field) do { (elm)->field.cqe_next = (void *)(head); (elm)->field.cqe_prev = (head)->cqh_last; if ((head)->cqh_first == (void *)(head)) (head)->cqh_first = (elm); else (head)->cqh_last->field.cqe_next = (elm); (head)->cqh_last = (elm); } while (0)
#define _U_INT8_T 
#define _U_CHAR 
#define pseudo_AF_RTIP 22
#define PF_XTP pseudo_AF_XTP
#define SO_REUSESHAREUID 0x1025
#define __FLT128_HAS_DENORM__ 1
#define __FLT32_DECIMAL_DIG__ 9
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_5(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_6(x) x
#define MAC_OS_X_VERSION_10_15_1 101501
#define LIST_INIT(head) do { LIST_FIRST((head)) = NULL; } while (0)
#define AF_DLI 13
#define __FLT128_DIG__ 33
#define __OSX_UNAVAILABLE 
#define __INT32_C(c) c
#define TAILQ_FIRST(head) ((head)->tqh_first)
#define __ORDER_PDP_ENDIAN__ 3412
#define LIST_SWAP(head1,head2,type,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH do { struct type *swap_tmp = LIST_FIRST((head1)); LIST_FIRST((head1)) = LIST_FIRST((head2)); LIST_FIRST((head2)) = swap_tmp; if ((swap_tmp = LIST_FIRST((head1))) != NULL) swap_tmp->field.le_prev = &LIST_FIRST((head1)); if ((swap_tmp = LIST_FIRST((head2))) != NULL) swap_tmp->field.le_prev = &LIST_FIRST((head2)); } while (0) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define SIOCGIFFUNCTIONALTYPE _IOWR('i', 173, struct ifreq)
#define NET_RT_DUMP2 7
#define TIOCM_CAR 0100
#define _Null_unspecified 
#define CMSG_DATA(cmsg) ((unsigned char *)(cmsg) + __DARWIN_ALIGN32(sizeof(struct cmsghdr)))
#define IF_NAMESIZE 16
#define BYTE_ORDER __DARWIN_BYTE_ORDER
#define _SYS_TIME_H_ 
#define PF_ROUTE AF_ROUTE
#define __MAC_11_0 110000
#define __INT_FAST32_TYPE__ int
#define __MAC_11_3 110300
#define ifr_wake_flags ifr_ifru.ifru_wake_flags
#define AF_ROUTE 17
#define __DARWIN_NO_LONG_LONG 0
#define UINT64_MAX 18446744073709551615ULL
#define __PTHREAD_RWLOCKATTR_SIZE__ 16
#define _UINT8_T 
#define __UINT_LEAST16_TYPE__ short unsigned int
#define CAN_ISOTP_CHK_PAD_LEN 0x010
#define _KEY_T 
#define __MAC_10_15_4 101504
#define MSG_SEND 0x1000
#define _INT64_T 
#define CIRCLEQ_CHECK_PREV(head,elm,field) 
#define TIOCDRAIN _IO('t', 94)
#define SIOCDIFPHYADDR _IOW('i', 65, struct ifreq)
#define PF_DATAKIT AF_DATAKIT
#define PF_NDRV AF_NDRV
#define _OFF_T 
#define __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ 110500
#define STAILQ_LAST(head,type,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH (STAILQ_EMPTY((head)) ? NULL : ((struct type *)(void *) ((char *)((head)->stqh_last) - __offsetof(struct type, field))))__NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_5_1(x) 
#define __UINT64_MAX__ 0xffffffffffffffffULL
#define __FLT_IS_IEC_60559__ 2
#define __GNUC_WIDE_EXECUTION_CHARSET_NAME "UTF-32LE"
#define TTYDISC 0
#define __WATCHOS_3_0 30000
#define __WATCHOS_3_1 30100
#define __WATCHOS_3_2 30200
#define AF_INET 2
#define __FLT64X_DIG__ 18
#define IFCAP_TSO6 0x00040
#define __INT8_TYPE__ signed char
#define _UINTMAX_T 
#define SIOCDIFADDR _IOW('i', 25, struct ifreq)
#define PF_CNT AF_CNT
#define SIOCSIFPHYS _IOW('i', 54, struct ifreq)
#define TAILQ_FOREACH(var,head,field) for ((var) = TAILQ_FIRST((head)); (var); (var) = TAILQ_NEXT((var), field))
#define __DARWIN_NOCANCEL(sym) __asm("_" __STRING(sym) __DARWIN_SUF_NON_CANCELABLE)
#define CLOCK_THREAD_CPUTIME_ID _CLOCK_THREAD_CPUTIME_ID
#define __GCC_ASM_FLAG_OUTPUTS__ 1
#define __CAST_AWAY_QUALIFIER(variable,qualifier,type) (type) (long)(variable)
#define __UINT32_TYPE__ unsigned int
#define SIOCGIFMTU _IOWR('i', 51, struct ifreq)
#define IFCAP_JUMBO_MTU 0x00010
#define _SYS_SOCKET_H_ 
#define IFF_LOOPBACK 0x8
#define SIOCGIFPHYS _IOWR('i', 53, struct ifreq)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_3_1(x) 
#define __API_AVAILABLE_BEGIN_GET_MACRO(...) 
#define KEV_DL_IFCAP_CHANGED 19
#define __FLT_RADIX__ 2
#define SO_REUSEPORT 0x0200
#define __INT_LEAST16_TYPE__ short int
#define __LDBL_EPSILON__ 1.08420217248550443400745280086994171e-19L
#define INTPTR_MAX 9223372036854775807L
#define __UINTMAX_C(c) c ## UL
#define IOC_IN (__uint32_t)0x80000000
#define minor(x) ((int32_t)((x) & 0xffffff))
#define _IOWR(g,n,t) _IOC(IOC_INOUT, (g), (n), sizeof(t))
#define __SSE_MATH__ 1
#define TIOCGETA _IOR('t', 19, struct termios)
#define _U_INT32_T 
#define IFCAP_TXSTATUS 0x00200
#define __k8 1
#define CLOCK_MONOTONIC_RAW_APPROX _CLOCK_MONOTONIC_RAW_APPROX
#define _FSFILCNT_T 
#define __FLT32X_MIN__ 2.22507385850720138309023271733240406e-308F32x
#define SIOCSIFVLAN _IOW('i', 126, struct ifreq)
#define CLOCK_MONOTONIC_RAW _CLOCK_MONOTONIC_RAW
#define __SIG_ATOMIC_MAX__ 0x7fffffff
#define __API_TO_BE_DEPRECATED 100000
#define KEV_DL_IF_ATTACHED 9
#define MSG_TRUNC 0x10
#define _UID_T 
#define AF_NDRV 27
#define KEV_DL_RRC_STATE_CHANGED 28
#define CAN_ISOTP_RECV_FC 2
#define APPLE_IF_FAM_MDECAP 9
#define SIOCSIFBRDADDR _IOW('i', 19, struct ifreq)
#define INT_LEAST64_MAX INT64_MAX
#define __WATCHOS_3_1_1 30101
#define TAILQ_CHECK_PREV(elm,field) 
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define TIOCSDTR _IO('t', 121)
#define SO_TIMESTAMP_MONOTONIC 0x0800
#define __SIZEOF_PTRDIFF_T__ 8
#define __IPHONE_4_0 40000
#define __IPHONE_4_1 40100
#define __IPHONE_4_2 40200
#define __IPHONE_4_3 40300
#define IFCAP_SKYWALK 0x00400
#define KEV_INET6_ADDR_DELETED 3
#define _ID_T 
#define __MISMATCH_TAGS_POP 
#define AF_OSI AF_ISO
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_4(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_5(x) x
#define SO_TIMESTAMP 0x0400
#define __DARWIN_64_BIT_INO_T 1
#define __TVOS_14_0 140000
#define __TVOS_14_2 140200
#define INTPTR_MIN (-INTPTR_MAX-1)
#define CAN_RAW_FILTER_MAX 512
#define INT8_C(v) (v)
#define SLIST_FOREACH_PREVPTR(var,varp,head,field) for ((varp) = &SLIST_FIRST((head)); ((var) = *(varp)) != NULL; (varp) = &SLIST_NEXT((var), field))
#define DST_MET 4
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_10_3(x) 
#define __LDBL_DIG__ 18
#define TIOCSTI _IOW('t', 114, char)
#define __nullable 
#define __FLT64_IS_IEC_60559__ 2
#define __x86_64__ 1
#define __FLT32X_MIN_EXP__ (-1021)
#define MAC_OS_VERSION_11_0 110000
#define UINT_FAST32_MAX UINT32_MAX
#define __INT_FAST16_MAX__ 0x7fff
#define KEV_INET6_SUBCLASS 6
#define __PTHREAD_SIZE__ 8176
#define __deprecated __attribute__((__deprecated__))
#define INT_LEAST64_MIN INT64_MIN
#define CAN_ISOTP_DEFAULT_LL_TX_DL CAN_MAX_DLEN
#define major(x) ((int32_t)(((u_int32_t)(x) >> 24) & 0xff))
#define __u8 unsigned char
#define SO_NOTIFYCONFLICT 0x1026
#define __FLT64_DIG__ 15
#define CAN_ISOTP_SF_BROADCAST 0x800
#define SOL_CAN_BASE 100
#define __UINT_FAST32_MAX__ 0xffffffffU
#define MAC_OS_X_VERSION_10_11 101100
#define MAC_OS_X_VERSION_10_12 101200
#define MAC_OS_X_VERSION_10_13 101300
#define MAC_OS_X_VERSION_10_14 101400
#define MAC_OS_X_VERSION_10_16 101600
#define __UINT_LEAST64_TYPE__ long long unsigned int
#define __SYS_APPLEAPIOPTS_H__ 
#define __API_DEPRECATED_WITH_REPLACEMENT_END 
#define __FLT_HAS_QUIET_NAN__ 1
#define UINTMAX_MAX UINTMAX_C(18446744073709551615)
#define _STDINT_H_ 
#define INT32_C(v) (v)
#define __FLT_MAX_10_EXP__ 38
#define NTOHLL(x) (x) = ntohll((__uint64_t)x)
#define CLOCK_UPTIME_RAW_APPROX _CLOCK_UPTIME_RAW_APPROX
#define PF_CHAOS AF_CHAOS
#define __LONG_MAX__ 0x7fffffffffffffffL
#define __IOS_EXTENSION_UNAVAILABLE(_msg) 
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
#define __ENABLE_LEGACY_MAC_AVAILABILITY 1
#define PF_LINK AF_LINK
#define TAILQ_SWAP(head1,head2,type,field) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH do { struct type *swap_first = (head1)->tqh_first; struct type **swap_last = (head1)->tqh_last; (head1)->tqh_first = (head2)->tqh_first; (head1)->tqh_last = (head2)->tqh_last; (head2)->tqh_first = swap_first; (head2)->tqh_last = swap_last; if ((swap_first = (head1)->tqh_first) != NULL) swap_first->field.tqe_prev = &(head1)->tqh_first; else (head1)->tqh_last = &(head1)->tqh_first; if ((swap_first = (head2)->tqh_first) != NULL) swap_first->field.tqe_prev = &(head2)->tqh_first; else (head2)->tqh_last = &(head2)->tqh_first; } while (0) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define __kpi_deprecated(_msg) 
#define __UINT_FAST16_TYPE__ short unsigned int
#define CAN_ISOTP_RX_EXT_ADDR 0x200
#define LIST_CHECK_HEAD(head,field) 
#define __INT_FAST32_WIDTH__ 32
#define SIOCGIF6LOWPAN _IOWR('i', 197, struct ifreq)
#define __IPHONE_12_0 120000
#define __IPHONE_12_1 120100
#define __IPHONE_12_2 120200
#define __IPHONE_12_3 120300
#define __IPHONE_12_4 120400
#define _SS_ALIGNSIZE (sizeof(__int64_t))
#define __CHAR16_TYPE__ short unsigned int
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_9_3(x) 
#define __PRAGMA_REDEFINE_EXTNAME 1
#define BIG_ENDIAN __DARWIN_BIG_ENDIAN
#define __SIZE_WIDTH__ 64
#define __WATCHOS_7_0 70000
#define __WATCHOS_7_1 70100
#define __WATCHOS_7_3 70300
#define __WATCHOS_7_4 70400
#define __SEG_FS 1
#define __INT_LEAST16_MAX__ 0x7fff
#define __OSX_AVAILABLE_BUT_DEPRECATED(_osxIntro,_osxDep,_iosIntro,_iosDep) 
#define __INT64_MAX__ 0x7fffffffffffffffLL
#define ifr_devmtu ifr_ifru.ifru_devmtu
#define __SEG_GS 1
#define __FLT32_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F32
#define __SIG_ATOMIC_WIDTH__ 32
#define __DARWIN_ALIAS(sym) __asm("_" __STRING(sym) __DARWIN_SUF_UNIX03)
#define __MISMATCH_TAGS_PUSH 
#define __INT_LEAST64_TYPE__ long long int
#define __APPLE_API_OBSOLETE 
#define __INT16_TYPE__ short int
#define __INT_LEAST8_TYPE__ signed char
#define MSG_OOB 0x1
#define AF_LAT 14
#define STAILQ_CONCAT(head1,head2) do { if (!STAILQ_EMPTY((head2))) { *(head1)->stqh_last = (head2)->stqh_first; (head1)->stqh_last = (head2)->stqh_last; STAILQ_INIT((head2)); } } while (0)
#define __STDC_VERSION__ 201710L
#define PF_NETBIOS AF_NETBIOS
#define __SIZEOF_INT__ 4
#define SO_PEERLABEL 0x1011
#define TAILQ_INIT(head) do { TAILQ_FIRST((head)) = NULL; (head)->tqh_last = &TAILQ_FIRST((head)); QMD_TRACE_HEAD(head); } while (0)
#define _PTHREAD_COND_T 
#define _MACHTYPES_H_ 
#define __INT_FAST8_MAX__ 0x7f
#define CONNECT_RESUME_ON_READ_WRITE 0x1
#define UINTMAX_C(v) (v ## UL)
#define __FLT128_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define __INTPTR_MAX__ 0x7fffffffffffffffL
#define IFQ_TARGET_DELAY (10ULL * 1000 * 1000)
#define LIST_HEAD(name,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct name { struct type *lh_first; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define ifr_phys ifr_ifru.ifru_phys
#define CAN_ISOTP_FORCE_TXSTMIN 0x080
#define IFCAP_AV 0x00100
#define AF_SNA 11
#define TIOCEXCL _IO('t', 13)
#define MSG_RCVMORE 0x4000
#define SO_NOADDRERR 0x1023
#define CIRCLEQ_INIT(head) do { (head)->cqh_first = (void *)(head); (head)->cqh_last = (void *)(head); } while (0)
#define __TVOS_13_0 130000
#define __TVOS_13_2 130200
#define __TVOS_13_3 130300
#define __TVOS_13_4 130400
#define ntohl(x) __DARWIN_OSSwapInt32(x)
#define TIOCPKT_FLUSHREAD 0x01
#define ntohs(x) __DARWIN_OSSwapInt16(x)
#define CLOCK_MONOTONIC _CLOCK_MONOTONIC
#define __swift_compiler_version_at_least(...) 1
#define __DARWIN_LITTLE_ENDIAN 1234
#define __FLT64_HAS_QUIET_NAN__ 1
#define __SWIFT_UNAVAILABLE 
#define PF_DLI AF_DLI
#define __TVOS_UNAVAILABLE 
#define AF_CNT 21
#define pseudo_AF_XTP 19
#define __LITTLE_ENDIAN__ 1
#define SIOCGIFDSTADDR _IOWR('i', 34, struct ifreq)
#define __DARWIN_WCHAR_MAX __WCHAR_MAX__
#define _SA_FAMILY_T 
#define _BSD_MACHINE_ENDIAN_H_ 
#define __FLT32_MIN_10_EXP__ (-37)
#define ___POSIX_C_DEPRECATED_STARTING_199209L 
#define KEV_DL_LINK_OFF 12
#define TIOCSTAT _IO('t', 101)
#define __FLT32X_DIG__ 15
#define KEV_DL_IF_DETACHED 11
#define NTOHL(x) (x) = ntohl((__uint32_t)x)
#define __u16 unsigned short
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
#define __DARWIN_ONLY_64_BIT_INO_T 0
#define __FLT64_HAS_INFINITY__ 1
#define __u32 unsigned int
#define __FLT64X_MAX__ 1.18973149535723176502126385303097021e+4932F64x
#define ifr_curcap ifr_ifru.ifru_cap[1]
#define __DARWIN_OSSwapInt16(x) ((__uint16_t)(__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt16(x) : _OSSwapInt16(x)))
#define AF_VSOCK 40
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#define __code_model_small__ 1
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_3(x) x
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_11_4(x) x
#define __OSX_EXTENSION_UNAVAILABLE(_msg) 
#define NET_SERVICE_TYPE_RD 8
#define KEV_DL_SIFGENERIC 6
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define MAC_OS_X_VERSION_10_12_2 101202
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_3(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_14_5(x) 
#define TAILQ_INSERT_HEAD(head,elm,field) do { TAILQ_CHECK_HEAD(head, field); if ((TAILQ_NEXT((elm), field) = TAILQ_FIRST((head))) != NULL) TAILQ_FIRST((head))->field.tqe_prev = &TAILQ_NEXT((elm), field); else (head)->tqh_last = &TAILQ_NEXT((elm), field); TAILQ_FIRST((head)) = (elm); (elm)->field.tqe_prev = &TAILQ_FIRST((head)); QMD_TRACE_HEAD(head); QMD_TRACE_ELEM(&(elm)->field); } while (0)
#define TIOCSIG _IO('t', 95)
#define __DARWIN_WCHAR_MIN (-0x7fffffff - 1)
#define __DARWIN_OSSwapInt32(x) (__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt32(x) : _OSSwapInt32(x))
#define AF_LOCAL AF_UNIX
#define __k8__ 1
#define __INTPTR_TYPE__ long int
#define __UINT16_TYPE__ short unsigned int
#define __WCHAR_TYPE__ int
#define __u64 unsigned long long
#define _SYS__PTHREAD_TYPES_H_ 
#define PF_BOND ((uint32_t)0x626f6e64)
#define _STRUCT_TIMEVAL64 
#define IFRTYPE_FUNCTIONAL_LAST 7
#define __API_UNAVAILABLE_END 
#define TIOCSTOP _IO('t', 111)
#define __pic__ 2
#define NET_SERVICE_TYPE_OAM 7
#define TIOCGSIZE TIOCGWINSZ
#define __UINTPTR_MAX__ 0xffffffffffffffffUL
#define __INT_FAST64_WIDTH__ 64
#define __volatile volatile
#define NET_RT_MAXID 11
#define __STDC_WANT_LIB_EXT1__ 1
#define SLIPDISC 4
#define __API_DEPRECATED_WITH_REPLACEMENT(...) 
#define __DARWIN_OSSwapInt64(x) (__builtin_constant_p(x) ? __DARWIN_OSSwapConstInt64(x) : _OSSwapInt64(x))
#define __MAC_10_12_1 101201
#define __MAC_10_12_2 101202
#define __MAC_10_12_4 101204
#define _NLINK_T 
#define KEV_INET_SIFDSTADDR 4
#define CAN_NPROTO 8
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_4_3(x) 
#define __INT_FAST64_MAX__ 0x7fffffffffffffffLL
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define AF_DATAKIT 9
#define __FLT_NORM_MAX__ 3.40282346638528859811704183484516925e+38F
#define __FLT32_HAS_INFINITY__ 1
#define KEV_INET6_NEW_USER_ADDR 1
#define INT_FAST32_MAX INT32_MAX
#define CAN_ISOTP_LL_OPTS 5
#define SO_LABEL 0x1010
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_2_2(x) 
#define __TVOS_DEPRECATED(_start,_dep,_msg) 
#define __FLT64X_MAX_EXP__ 16384
#define KEV_INET6_DEFROUTER 6
#define TAILQ_CONCAT(head1,head2,field) do { if (!TAILQ_EMPTY(head2)) { *(head1)->tqh_last = (head2)->tqh_first; (head2)->tqh_first->field.tqe_prev = (head1)->tqh_last; (head1)->tqh_last = (head2)->tqh_last; TAILQ_INIT((head2)); QMD_TRACE_HEAD(head1); QMD_TRACE_HEAD(head2); } } while (0)
#define __UINT_FAST64_TYPE__ long long unsigned int
#define _OS__OSBYTEORDER_H 
#define TIOCFLUSH _IOW('t', 16, int)
#define UINT_FAST8_MAX UINT8_MAX
#define __INT_MAX__ 0x7fffffff
#define _CADDR_T 
#define STAILQ_INSERT_TAIL(head,elm,field) do { STAILQ_NEXT((elm), field) = NULL; *(head)->stqh_last = (elm); (head)->stqh_last = &STAILQ_NEXT((elm), field); } while (0)
#define SCM_CREDS 0x03
#define SIOCGIFALTMTU _IOWR('i', 72, struct ifreq)
#define UINT8_MAX 255
#define IFCAP_CSUM_PARTIAL 0x02000
#define _UINT16_T 
#define __API_DEPRECATED_REP_GET_MACRO(...) 
#define AF_NETBIOS 33
#define IFCAP_HW_TIMESTAMP 0x00800
#define _U_INT 
#define TIOCOUTQ _IOR('t', 115, int)
#define ___POSIX_C_DEPRECATED_STARTING_199506L 
#define IFF_PROMISC 0x100
#define __INT64_TYPE__ long long int
#define IOCGROUP(x) (((x) >> 8) & 0xff)
#define __FLT_MAX_EXP__ 128
#define SIOCGIFNETMASK _IOWR('i', 37, struct ifreq)
#define CLOCK_PROCESS_CPUTIME_ID _CLOCK_PROCESS_CPUTIME_ID
#define CIRCLEQ_INSERT_AFTER(head,listelm,elm,field) do { CIRCLEQ_CHECK_NEXT(head, listelm, field); (elm)->field.cqe_next = (listelm)->field.cqe_next; (elm)->field.cqe_prev = (listelm); if ((listelm)->field.cqe_next == (void *)(head)) (head)->cqh_last = (elm); else (listelm)->field.cqe_next->field.cqe_prev = (elm); (listelm)->field.cqe_next = (elm); } while (0)
#define LIST_ENTRY(type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct { struct type *le_next; struct type **le_prev; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define ifr_broadaddr ifr_ifru.ifru_broadaddr
#define _PTHREAD_MUTEXATTR_T 
#define UINT32_C(v) (v ## U)
#define __swift_unavailable(_msg) 
#define __ORDER_BIG_ENDIAN__ 4321
#define __header_inline extern __inline __attribute__((__gnu_inline__))
#define CAN_ISOTP_DEFAULT_LL_MTU CAN_MTU
#define __DBL_MANT_DIG__ 53
#define _RSIZE_T 
#define APPLE_IF_FAM_BOND 14
#define __SIZEOF_FLOAT128__ 16
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffLL
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define UINT_FAST64_MAX UINT64_MAX
#define INT_FAST32_MIN INT32_MIN
#define __WINT_TYPE__ int
#define __UINT_LEAST32_TYPE__ unsigned int
#define __SIZEOF_SHORT__ 2
#define __FLT32_NORM_MAX__ 3.40282346638528859811704183484516925e+38F32
#define __SSE__ 1
#define IF_WAKE_ON_MAGIC_PACKET 0x01
#define __LDBL_MIN_EXP__ (-16381)
#define TABLDISC 3
#define AF_HYLINK 15
#define PF_INET AF_INET
#define FIONCLEX _IO('f', 2)
#define __FLT64_MAX__ 1.79769313486231570814527423731704357e+308F64
#define __NULLABILITY_COMPLETENESS_PUSH 
#define __DARWIN_C_FULL 900000L
#define STAILQ_EMPTY(head) ((head)->stqh_first == NULL)
#define __MACH__ 1
#define __amd64__ 1
#define SLIST_INIT(head) do { SLIST_FIRST((head)) = NULL; } while (0)
#define __WINT_WIDTH__ 32
#define CAN_INV_FILTER 0x20000000U
#define __INT_LEAST8_MAX__ 0x7f
#define SO_RCVBUF 0x1002
#define __INT_LEAST64_WIDTH__ 64
#define __LDBL_MAX_EXP__ 16384
#define __FLT32X_MAX_10_EXP__ 308
#define __DARWIN_SUF_EXTSN "$DARWIN_EXTSN"
#define IFCAP_TXCSUM 0x00002
#define FIOCLEX _IO('f', 1)
#define SO_WANTOOBFLAG 0x8000
#define IFRTYPE_FUNCTIONAL_CELLULAR 5
#define __SIZEOF_INT128__ 16
#define PTRDIFF_MIN INTMAX_MIN
#define CAN_ISOTP_DEFAULT_LL_TX_FLAGS 0
#define __FLT64X_IS_IEC_60559__ 2
#define TAILQ_HEAD(name,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct name { struct type *tqh_first; struct type **tqh_last; TRACEBUF } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define __LDBL_MAX_10_EXP__ 4932
#define __ATOMIC_RELAXED 0
#define __signed signed
#define APPLE_IF_FAM_LOOPBACK 1
#define __DBL_EPSILON__ ((double)2.22044604925031308084726333618164062e-16L)
#define _CAN_H 
#define __FLT128_MIN__ 3.36210314311209350626267781732175260e-4932F128
#define _PTHREAD_ATTR_T 
#define _SYS__SELECT_H_ 
#define _LP64 1
#define KEV_INET_SIFNETMASK 6
#define SLIST_REMOVE_AFTER(elm,field) do { SLIST_NEXT(elm, field) = SLIST_NEXT(SLIST_NEXT(elm, field), field); } while (0)
#define SIOCSPGRP _IOW('s', 8, int)
#define APPLE_IF_FAM_FIREWIRE 13
#define __UINT8_C(c) c
#define CMSG_SPACE(l) (__DARWIN_ALIGN32(sizeof(struct cmsghdr)) + __DARWIN_ALIGN32(l))
#define __API_AVAILABLE(...) 
#define __FLT64_MAX_EXP__ 1024
#define TIOCPKT_DATA 0x00
#define IFRTYPE_FUNCTIONAL_WIFI_INFRA 3
#define _INT8_T 
#define TIOCUCNTL _IOW('t', 102, int)
#define TIOCEXT _IOW('t', 96, int)
#define __INT_LEAST32_TYPE__ int
#define TIMEVAL_TO_TIMESPEC(tv,ts) { (ts)->tv_sec = (tv)->tv_sec; (ts)->tv_nsec = (tv)->tv_usec * 1000; }
#define SLIST_FOREACH(var,head,field) for ((var) = SLIST_FIRST((head)); (var); (var) = SLIST_NEXT((var), field))
#define __API_UNAVAILABLE(...) 
#define PF_SNA AF_SNA
#define SIOCGIFCONF _IOWR('i', 36, struct ifconf)
#define __SIZEOF_WCHAR_T__ 4
#define __UINT64_TYPE__ long long unsigned int
#define __has_feature(x) 0
#define __GNUC_PATCHLEVEL__ 0
#define __DARWIN_1050(sym) __asm("_" __STRING(sym) __DARWIN_SUF_1050)
#define SIOCGIFXMEDIA _IOWR('i', 72, struct ifmediareq)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_15_1(x) x
#define KEV_DL_ADDMULTI 7
#define MAC_OS_X_VERSION_10_10 101000
#define AF_IEEE80211 37
#define __FLT128_NORM_MAX__ 1.18973149535723176508575932662800702e+4932F128
#define CIRCLEQ_REMOVE(head,elm,field) do { CIRCLEQ_CHECK_NEXT(head, elm, field); CIRCLEQ_CHECK_PREV(head, elm, field); if ((elm)->field.cqe_next == (void *)(head)) (head)->cqh_last = (elm)->field.cqe_prev; else (elm)->field.cqe_next->field.cqe_prev = (elm)->field.cqe_prev; if ((elm)->field.cqe_prev == (void *)(head)) (head)->cqh_first = (elm)->field.cqe_next; else (elm)->field.cqe_prev->field.cqe_next = (elm)->field.cqe_next; } while (0)
#define __DARWIN_OSSwapConstInt16(x) ((__uint16_t)((((__uint16_t)(x) & 0xff00U) >> 8) | (((__uint16_t)(x) & 0x00ffU) << 8)))
#define IFCAP_TSO (IFCAP_TSO4 | IFCAP_TSO6)
#define SIOCGIFASYNCMAP _IOWR('i', 124, struct ifreq)
#define AF_CCITT 10
#define MAC_OS_X_VERSION_10_15 101500
#define NET_SERVICE_TYPE_SIG 2
#define __FLT64_NORM_MAX__ 1.79769313486231570814527423731704357e+308F64
#define SIOCGIFSTATUS _IOWR('i', 61, struct ifstat)
#define __FLT128_HAS_QUIET_NAN__ 1
#define ifc_req ifc_ifcu.ifcu_req
#define __INTMAX_MAX__ 0x7fffffffffffffffL
#define __DARWIN_OSSwapConstInt32(x) ((__uint32_t)((((__uint32_t)(x) & 0xff000000U) >> 24) | (((__uint32_t)(x) & 0x00ff0000U) >> 8) | (((__uint32_t)(x) & 0x0000ff00U) << 8) | (((__uint32_t)(x) & 0x000000ffU) << 24)))
#define __MAC_10_11_2 101102
#define NETSVC_MRKNG_UNKNOWN 0
#define __INT_FAST8_TYPE__ signed char
#define IF_MAXMTU 65535
#define QMD_TRACE_ELEM(elem) 
#define __DARWIN_FD_SETSIZE 1024
#define TIOCM_LE 0001
#define __FLT64X_MIN__ 3.36210314311209350626267781732175260e-4932F64x
#define KEV_INET_SIFBRDADDR 5
#define __DEQUALIFY(type,var) __CAST_AWAY_QUALIFIER(var, const volatile, type)
#define NETSVC_MRKNG_LVL_L3L2_ALL 2
#define CIRCLEQ_HEAD(name,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct name { struct type *cqh_first; struct type *cqh_last; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define SIOCIFCREATE2 _IOWR('i', 122, struct ifreq)
#define TIMESPEC_TO_TIMEVAL(tv,ts) { (tv)->tv_sec = (ts)->tv_sec; (tv)->tv_usec = (ts)->tv_nsec / 1000; }
#define _BSD_MACHINE_TYPES_H_ 
#define __GNUC_STDC_INLINE__ 1
#define CIRCLEQ_INSERT_HEAD(head,elm,field) do { CIRCLEQ_CHECK_HEAD(head, field); (elm)->field.cqe_next = (head)->cqh_first; (elm)->field.cqe_prev = (void *)(head); if ((head)->cqh_last == (void *)(head)) (head)->cqh_last = (elm); else (head)->cqh_first->field.cqe_prev = (elm); (head)->cqh_first = (elm); } while (0)
#define SIOCIFDESTROY _IOW('i', 121, struct ifreq)
#define __FLT64_HAS_DENORM__ 1
#define __DARWIN_OSSwapConstInt64(x) ((__uint64_t)((((__uint64_t)(x) & 0xff00000000000000ULL) >> 56) | (((__uint64_t)(x) & 0x00ff000000000000ULL) >> 40) | (((__uint64_t)(x) & 0x0000ff0000000000ULL) >> 24) | (((__uint64_t)(x) & 0x000000ff00000000ULL) >> 8) | (((__uint64_t)(x) & 0x00000000ff000000ULL) << 8) | (((__uint64_t)(x) & 0x0000000000ff0000ULL) << 24) | (((__uint64_t)(x) & 0x000000000000ff00ULL) << 40) | (((__uint64_t)(x) & 0x00000000000000ffULL) << 56)))
#define SLIST_HEAD(name,type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct name { struct type *slh_first; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define IFCAP_VLAN_MTU 0x00004
#define __FLT32_EPSILON__ 1.19209289550781250000000000000000000e-7F32
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_0(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_6_1(x) 
#define INTMAX_MAX INTMAX_C(9223372036854775807)
#define __DARWIN_ALIGNBYTES32 (sizeof(__uint32_t) - 1)
#define __TYPES_H_ 
#define __DBL_DECIMAL_DIG__ 17
#define __STDC_UTF_32__ 1
#define __INT_FAST8_WIDTH__ 8
#define __FXSR__ 1
#define __WATCHOS_4_2 40200
#define _SIZEOF_ADDR_IFREQ(ifr) ((ifr).ifr_addr.sa_len > sizeof (struct sockaddr) ? (sizeof (struct ifreq) - sizeof (struct sockaddr) + (ifr).ifr_addr.sa_len) : sizeof (struct ifreq))
#define CLOCKS_PER_SEC 1000000
#define _SIZE_T 
#define __options_closed_decl(_name,_type,...) typedef _type _name; enum __VA_ARGS__ __enum_closed __enum_options
#define TIOCREMOTE _IOW('t', 105, int)
#define NET_RT_FLAGS_PRIV 10
#define __FLT32X_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define IOCBASECMD(x) ((x) & ~(IOCPARM_MASK << 16))
#define SO_RCVTIMEO 0x1006
#define __DARWIN_VERS_1050 1
#define __DBL_NORM_MAX__ ((double)1.79769313486231570814527423731704357e+308L)
#define SOCK_STREAM 1
#define TIOCIXON _IO('t', 129)
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define ifr_kpi ifr_ifru.ifru_kpi
#define IFF_UP 0x1
#define APPLE_IF_FAM_IPSEC 18
#define TIOCM_RI TIOCM_RNG
#define TAILQ_NEXT(elm,field) ((elm)->field.tqe_next)
#define AF_NATM 31
#define TIOCPKT_FLUSHWRITE 0x02
#define TIOCM_SR 0020
#define _STRUCT_TIMESPEC struct timespec
#define TIOCM_ST 0010
#define __INTMAX_WIDTH__ 64
#define IFF_DEBUG 0x4
#define APPLE_IF_FAM_DISC 8
#define PF_IMPLINK AF_IMPLINK
#define NET_RT_FLAGS 2
#define __UINT32_C(c) c ## U
#define SIOCRSLVMULTI _IOWR('i', 59, struct rslvmulti_req)
#define ___POSIX_C_DEPRECATED_STARTING_200112L 
#define ITIMER_PROF 2
#define CAN_ISOTP_WAIT_TX_DONE 0x400
#define TAILQ_FOREACH_REVERSE(var,head,headname,field) for ((var) = TAILQ_LAST((head), headname); (var); (var) = TAILQ_PREV((var), headname, field))
#define __TVOS_10_0 100000
#define __TVOS_10_1 100100
#define __TVOS_10_2 100200
#define __FLT_DENORM_MIN__ 1.40129846432481707092372958328991613e-45F
#define __DARWIN_ALIGN32(p) ((__darwin_size_t)((__darwin_size_t)(p) + __DARWIN_ALIGNBYTES32) &~ __DARWIN_ALIGNBYTES32)
#define __IOS_AVAILABLE(_vers) 
#define CAN_BCM 2
#define SIOCGIFGENERIC _IOWR('i', 58, struct ifreq)
#define SIOCSIFGENERIC _IOW('i', 57, struct ifreq)
#define INTMAX_MIN (-INTMAX_MAX-1)
#define AF_UNIX 1
#define SLIST_FOREACH_SAFE(var,head,field,tvar) for ((var) = SLIST_FIRST((head)); (var) && ((tvar) = SLIST_NEXT((var), field), 1); (var) = (tvar))
#define pseudo_AF_HDRCMPLT 35
#define LIST_FOREACH(var,head,field) for ((var) = LIST_FIRST((head)); (var); (var) = LIST_NEXT((var), field))
#define CAN_ISOTP 6
#define _NET_IF_VAR_H_ 
#define __API_UNAVAILABLE_BEGIN(...) 
#define AF_DECnet 12
#define __INT8_MAX__ 0x7f
#define __LONG_WIDTH__ 64
#define __PIC__ 2
#define _I386__PARAM_H_ 
#define __UINT_FAST32_TYPE__ unsigned int
#define CAN_EFF_MASK 0x1FFFFFFFU
#define FD_ISSET(n,p) __DARWIN_FD_ISSET(n, p)
#define SO_NREAD 0x1020
#define __TVOS_11_3 110300
#define TIOCSETA _IOW('t', 20, struct termios)
#define __RCSID(s) __IDSTRING(rcsid,s)
#define __FLT32X_NORM_MAX__ 1.79769313486231570814527423731704357e+308F32x
#define __DARWIN_ALIGNBYTES (sizeof(__darwin_size_t) - 1)
#define __CHAR32_TYPE__ unsigned int
#define NETSVC_MRKNG_LVL_L3L2_BK 3
#define __FLT_MAX__ 3.40282346638528859811704183484516925e+38F
#define __IPHONE_5_0 50000
#define __IPHONE_5_1 50100
#define __exported __attribute__((__visibility__("default")))
#define __PROJECT_VERSION(s) __IDSTRING(project_version,s)
#define TIOCGDRAINWAIT _IOR('t', 86, int)
#define INT_FAST64_MAX INT64_MAX
#define _IO(g,n) _IOC(IOC_VOID, (g), (n), 0)
#define UINT_LEAST32_MAX UINT32_MAX
#define __AVAILABILITY_INTERNAL_UNAVAILABLE __attribute__((unavailable))
#define CAN_ISOTP_DEFAULT_RECV_WFTMAX 0
#define __AVAILABILITY_INTERNAL_DEPRECATED __attribute__((deprecated))
#define SLIST_ENTRY(type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct { struct type *sle_next; } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define TIOCTIMESTAMP _IOR('t', 89, struct timeval)
#define __DARWIN_SUF_64_BIT_INO_T "$INODE64"
#define __SSE2__ 1
#define SO_ERROR 0x1007
#define TIOCCDTR _IO('t', 120)
#define KEV_DL_PROTO_ATTACHED 14
#define CAN_ISOTP_RX_STMIN 4
#define __API_AVAILABLE_BEGIN(...) 
#define MSG_EOR 0x8
#define RSIZE_MAX (SIZE_MAX >> 1)
#define __OSX_AVAILABLE_STARTING(_osx,_ios) 
#define __INT32_TYPE__ int
#define __improbable(x) (x)
#define __SIZEOF_DOUBLE__ 8
#define APPLE_IF_FAM_STF 12
#define __FLT_MIN_10_EXP__ (-37)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_1(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_2(x) 
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_4(x) 
#define __DARWIN_FD_COPY(f,t) bcopy(f, t, sizeof(*(f)))
#define __FLT64_MIN__ 2.22507385850720138309023271733240406e-308F64
#define __INT_LEAST32_WIDTH__ 32
#define PF_APPLETALK AF_APPLETALK
#define TIOCGWINSZ _IOR('t', 104, struct winsize)
#define __AVAILABILITY_INTERNAL__ 
#define __INTMAX_TYPE__ long int
#define TAILQ_LAST(head,headname) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH (*(((struct headname *)((head)->tqh_last))->tqh_last)) __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define CIRCLEQ_FOREACH(var,head,field) for((var) = (head)->cqh_first; (var) != (void *)(head); (var) = (var)->field.cqe_next)
#define __unavailable 
#define __DRIVERKIT_20_0 200000
#define _QUAD_HIGHWORD 1
#define SO_NUMRCVPKT 0x1112
#define CANFD_ESI 0x02
#define __FLT32X_HAS_QUIET_NAN__ 1
#define __ATOMIC_CONSUME 1
#define PF_UTUN AF_UTUN
#define APPLE_IF_FAM_TUN 4
#define __GNUC_MINOR__ 2
#define ___POSIX_C_DEPRECATED_STARTING_198808L 
#define __INT_FAST16_WIDTH__ 16
#define __UINTMAX_MAX__ 0xffffffffffffffffUL
#define USER_ADDR_NULL ((user_addr_t) 0)
#define LITTLE_ENDIAN __DARWIN_LITTLE_ENDIAN
#define __FLT32X_DENORM_MIN__ 4.94065645841246544176568792868221372e-324F32x
#define __API_DEPRECATED_BEGIN_REP_GET_MACRO 
#define __unreachable_ok_pop _Pragma("GCC diagnostic pop")
#define INTMAX_C(v) (v ## L)
#define TIOCSCONS _IO('t', 99)
#define INT_FAST64_MIN INT64_MIN
#define SIOCSIFADDR _IOW('i', 12, struct ifreq)
#define TIOCSWINSZ _IOW('t', 103, struct winsize)
#define __DBL_MAX_10_EXP__ 308
#define __NULLABILITY_COMPLETENESS_POP 
#define __const const
#define UINT16_MAX 65535
#define __LDBL_DENORM_MIN__ 3.64519953188247460252840593361941982e-4951L
#define SO_NP_EXTENSIONS 0x1083
#define LIST_NEXT(elm,field) ((elm)->field.le_next)
#define UIOCCMD(n) _IO('u', n)
#define ifr_reqcap ifr_ifru.ifru_cap[0]
#define SIOCSIFCAP _IOW('i', 90, struct ifreq)
#define __DARWIN_OS_INLINE static inline
#define TIOCSSIZE TIOCSWINSZ
#define __INT16_C(c) c
#define _INO64_T 
#define SCM_TIMESTAMP 0x02
#define CONNECT_DATA_IDEMPOTENT 0x2
#define timeradd(tvp,uvp,vvp) do { (vvp)->tv_sec = (tvp)->tv_sec + (uvp)->tv_sec; (vvp)->tv_usec = (tvp)->tv_usec + (uvp)->tv_usec; if ((vvp)->tv_usec >= 1000000) { (vvp)->tv_sec++; (vvp)->tv_usec -= 1000000; } } while (0)
#define _U_SHORT 
#define __STDC__ 1
#define DST_CAN 6
#define __PTRDIFF_TYPE__ long int
#define LIST_REMOVE(elm,field) do { LIST_CHECK_NEXT(elm, field); LIST_CHECK_PREV(elm, field); if (LIST_NEXT((elm), field) != NULL) LIST_NEXT((elm), field)->field.le_prev = (elm)->field.le_prev; *(elm)->field.le_prev = LIST_NEXT((elm), field); TRASHIT((elm)->field.le_next); TRASHIT((elm)->field.le_prev); } while (0)
#define SOMAXCONN 128
#define __IPHONE_13_0 130000
#define __IPHONE_13_1 130100
#define __IPHONE_13_2 130200
#define __IPHONE_13_3 130300
#define __IPHONE_13_4 130400
#define __IPHONE_13_6 130600
#define __IPHONE_13_7 130700
#define DST_USA 1
#define AF_ISDN 28
#define PF_KEY pseudo_AF_KEY
#define APPLE_IF_FAM_ETHERNET 2
#define __ATOMIC_SEQ_CST 5
#define __PTHREAD_COND_SIZE__ 40
#define IOCPARM_MASK 0x1fff
#define __WATCHOS_AVAILABLE(_vers) 
#define PF_HYLINK AF_HYLINK
#define _PTHREAD_KEY_T 
#define __FLT32X_MIN_10_EXP__ (-307)
#define TAILQ_ENTRY(type) __MISMATCH_TAGS_PUSH __NULLABILITY_COMPLETENESS_PUSH struct { struct type *tqe_next; struct type **tqe_prev; TRACEBUF } __NULLABILITY_COMPLETENESS_POP __MISMATCH_TAGS_POP
#define __UINTPTR_TYPE__ long unsigned int
#define IFCAP_RXCSUM 0x00001
#define __DARWIN_FD_ISSET(n,p) __darwin_fd_isset((n), (p))
#define _SSIZE_T 
#define __TVOS_10_0_1 100001
#define TIOCSETAW _IOW('t', 21, struct termios)
#define TIOCMBIS _IOW('t', 108, int)
#define SHUT_RD 0
#define __unreachable_ok_push _Pragma("GCC diagnostic push") _Pragma("GCC diagnostic ignored \"-Wunreachable-code\"")
#define __LDBL_MIN_10_EXP__ (-4931)
#define CAN_ISOTP_DEFAULT_EXT_ADDRESS 0x00
#define IFF_LINK1 0x2000
#define IFF_LINK2 0x4000
#define MSG_DONTWAIT 0x80
#define CAN_ISOTP_LISTEN_MODE 0x001
#define CAN_MTU (sizeof(struct can_frame))
#define __API_DEPRECATED_WITH_REPLACEMENT_BEGIN(...) 
#define MSG_NEEDSA 0x10000
#define APPLE_IF_FAM_UTUN 17
#define __SIZEOF_LONG_LONG__ 8
#define AF_IPX 23
#define SCM_TIMESTAMP_MONOTONIC 0x04
#define IFCAP_VLAN_HWTAGGING 0x00008
#define __enum_closed 
#define SIOCADDMULTI _IOW('i', 49, struct ifreq)
#define __FLT128_DECIMAL_DIG__ 36
#define __GCC_ATOMIC_LLONG_LOCK_FREE 2
#define CAN_ERR_MASK 0x1FFFFFFFU
#define _PTHREAD_ONCE_T 
#define __TVOS_14_1 140100
#define __TVOS_14_3 140300
#define __TVOS_14_5 140500
#define TIOCNOTTY _IO('t', 113)
#define __enum_open 
#define PTRDIFF_MAX INTMAX_MAX
#define __FLT32_HAS_QUIET_NAN__ 1
#define __FLT_DECIMAL_DIG__ 9
#define __UINT_FAST16_MAX__ 0xffff
#define _PID_T 
#define PF_NS AF_NS
#define __POSIX_C_DEPRECATED(ver) ___POSIX_C_DEPRECATED_STARTING_ ##ver
#define SO_RANDOMPORT 0x1082
#define _MODE_T 
#define __LDBL_NORM_MAX__ 1.18973149535723176502126385303097021e+4932L
#define STAILQ_HEAD_INITIALIZER(head) { NULL, &(head).stqh_first }
#define AF_ISO 7
#define FD_ZERO(p) __DARWIN_FD_ZERO(p)
#define __DARWIN_ALIAS_STARTING_IPHONE___IPHONE_11_0(x) 
#define CAN_ISOTP_FORCE_RXSTMIN 0x100
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define KEV_DL_NODE_ABSENCE 22
#define FD_CLR(n,p) __DARWIN_FD_CLR(n, p)
#define SHUT_WR 1
#define IFNET_SLOWHZ 1
#define PF_VSOCK AF_VSOCK
#define TIOCDCDTIMESTAMP _IOR('t', 88, struct timeval)
#define __DARWIN_ALIAS_STARTING_MAC___MAC_10_14_1(x) x
#define _USECONDS_T 
#define INT_LEAST16_MAX INT16_MAX
#define SIOCIFCREATE _IOWR('i', 120, struct ifreq)
#define __SSE3__ 1
#define __UINT_FAST8_TYPE__ unsigned char
#define _U_INT16_T 
#define __P(protos) protos
#define NET_RT_DUMP 1
#define PF_LOCAL AF_LOCAL
#define __IPHONE_8_2 80200
#define __IPHONE_9_0 90000
#define __IPHONE_9_1 90100
#define __IPHONE_9_2 90200
#define __IPHONE_9_3 90300
#define __ATOMIC_ACQ_REL 4
#define SIOCAUTOADDR _IOWR('i', 38, struct ifreq)
#define __ATOMIC_RELEASE 3
#define TAILQ_HEAD_INITIALIZER(head) { NULL, &(head).tqh_first }
#define KEV_DL_SIFPHYS 4
