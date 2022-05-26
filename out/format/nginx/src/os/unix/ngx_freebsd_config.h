# 1 "project/nginx/src/os/unix/ngx_freebsd_config.h"







#ifndef _NGX_FREEBSD_CONFIG_H_INCLUDED_
#define _NGX_FREEBSD_CONFIG_H_INCLUDED_ 


#include <sys/types.h>
#include <sys/time.h>
#include <unistd.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <errno.h>
#include <string.h>
#include <signal.h>
#include <pwd.h>
#include <grp.h>
#include <dirent.h>
#include <glob.h>
#include <time.h>
#include <sys/param.h>
#include <sys/mount.h>

#include <sys/filio.h>
#include <sys/uio.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <sys/wait.h>
#include <sys/mman.h>
#include <sys/resource.h>
#include <sched.h>

#include <sys/socket.h>
#include <netinet/in.h>
#include <netinet/tcp.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <sys/un.h>

#include <libutil.h>
#include <osreldate.h>
#include <sys/sysctl.h>

#include <dlfcn.h>


#if __FreeBSD_version < 400017





#undef CMSG_SPACE
#define CMSG_SPACE(l) (ALIGN(sizeof(struct cmsghdr)) + ALIGN(l))

#undef CMSG_LEN
#define CMSG_LEN(l) (ALIGN(sizeof(struct cmsghdr)) + (l))

#undef CMSG_DATA
#define CMSG_DATA(cmsg) ((u_char *)(cmsg) + ALIGN(sizeof(struct cmsghdr)))

#endif


#include <ngx_auto_config.h>


#if (NGX_HAVE_POSIX_SEM)
#include <semaphore.h>
#endif


#if (NGX_HAVE_POLL)
#include <poll.h>
#endif


#if (NGX_HAVE_KQUEUE)
#include <sys/event.h>
#endif


#if (NGX_HAVE_FILE_AIO)

#include <aio.h>
typedef struct aiocb ngx_aiocb_t;

#if (__FreeBSD_version < 700005 && !defined __DragonFly__)
#define sival_ptr sigval_ptr
#endif

#endif


#define NGX_LISTEN_BACKLOG -1


#ifdef __DragonFly__
#define NGX_KEEPALIVE_FACTOR 1000
#endif


#ifndef IOV_MAX
#define IOV_MAX 1024
#endif


#ifndef NGX_HAVE_INHERITED_NONBLOCK
#define NGX_HAVE_INHERITED_NONBLOCK 1
#endif


#define NGX_HAVE_OS_SPECIFIC_INIT 1
#define NGX_HAVE_DEBUG_MALLOC 1


extern char **environ;
extern char *malloc_options;


#endif
