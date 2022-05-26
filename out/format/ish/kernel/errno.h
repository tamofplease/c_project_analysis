# 1 "project/ish/kernel/errno.h"
#ifndef SYS_ERRNO_H
#define SYS_ERRNO_H 

#include <errno.h>



#define _EPERM -1
#define _ENOENT -2
#define _ESRCH -3
#define _EINTR -4
#define _EIO -5
#define _ENXIO -6
#define _E2BIG -7
#define _ENOEXEC -8
#define _EBADF -9
#define _ECHILD -10
#define _EAGAIN -11
#define _ENOMEM -12
#define _EACCES -13
#define _EFAULT -14
#define _ENOTBLK -15
#define _EBUSY -16
#define _EEXIST -17
#define _EXDEV -18
#define _ENODEV -19
#define _ENOTDIR -20
#define _EISDIR -21
#define _EINVAL -22
#define _ENFILE -23
#define _EMFILE -24
#define _ENOTTY -25
#define _ETXTBSY -26
#define _EFBIG -27
#define _ENOSPC -28
#define _ESPIPE -29
#define _EROFS -30
#define _EMLINK -31
#define _EPIPE -32
#define _EDOM -33
#define _ERANGE -34
#define _EDEADLK -35
#define _ENAMETOOLONG -36
#define _ENOLCK -37
#define _ENOSYS -38
#define _ENOTEMPTY -39
#define _ELOOP -40

#define _EBFONT -59
#define _ENOSTR -60
#define _ENODATA -61
#define _ETIME -62
#define _ENOSR -63
#define _ENONET -64
#define _ENOPKG -65
#define _EREMOTE -66
#define _ENOLINK -67
#define _EADV -68
#define _ESRMNT -69
#define _ECOMM -70
#define _EPROTO -71
#define _EMULTIHOP -72
#define _EDOTDOT -73
#define _EBADMSG -74
#define _EOVERFLOW -75
#define _ENOTUNIQ -76
#define _EBADFD -77
#define _EREMCHG -78
#define _ELIBACC -79
#define _ELIBBAD -80
#define _ELIBSCN -81
#define _ELIBMAX -82
#define _ELIBEXEC -83
#define _EILSEQ -84
#define _ERESTART -85
#define _ESTRPIPE -86
#define _EUSERS -87
#define _ENOTSOCK -88
#define _EDESTADDRREQ -89
#define _EMSGSIZE -90
#define _EPROTOTYPE -91
#define _ENOPROTOOPT -92
#define _EPROTONOSUPPORT -93
#define _ESOCKTNOSUPPORT -94
#define _EOPNOTSUPP -95
#define _ENOTSUP _EOPNOTSUPP
#define _EPFNOSUPPORT -96
#define _EAFNOSUPPORT -97
#define _EADDRINUSE -98
#define _EADDRNOTAVAIL -99
#define _ENETDOWN -100
#define _ENETUNREACH -101
#define _ENETRESET -102
#define _ECONNABORTED -103
#define _ECONNRESET -104
#define _ENOBUFS -105
#define _EISCONN -106
#define _ENOTCONN -107
#define _ESHUTDOWN -108
#define _ETOOMANYREFS -109
#define _ETIMEDOUT -110
#define _ECONNREFUSED -111
#define _EHOSTDOWN -112
#define _EHOSTUNREACH -113
#define _EALREADY -114
#define _EINPROGRESS -115
#define _ESTALE -116
#define _EUCLEAN -117
#define _ENOTNAM -118
#define _ENAVAIL -119
#define _EISNAM -120
#define _EREMOTEIO -121
#define _EDQUOT -122
#define _ECANCELED -125


int err_map(int err);
int errno_map(void);

#endif
