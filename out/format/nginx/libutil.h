# 1 "project/nginx/libutil.h"
# 39 "project/nginx/libutil.h"
#ifndef _LIBUTIL_H_
#define _LIBUTIL_H_ 

#include <unistd.h>
#include <stdbool.h>

#ifdef _SYS_PARAM_H_

struct pidfh {
 int pf_fd;
 char pf_path[MAXPATHLEN + 1];
 dev_t pf_dev;
 ino_t pf_ino;
};
#endif

struct in_addr;
struct sockaddr;

__BEGIN_DECLS
int humanize_number(char *_buf, size_t _len, int64_t _number,
     const char *_suffix, int _scale, int _flags);

int realhostname(char *host, size_t hsize, const struct in_addr *ip);
int realhostname_sa(char *host, size_t hsize, struct sockaddr *addr,
        int addrlen);

#ifdef _SYS_PARAM_H_
struct pidfh *pidfile_open(const char *path, mode_t mode, pid_t *pidptr);
int pidfile_write(struct pidfh *pfh);
int pidfile_close(struct pidfh *pfh);
int pidfile_remove(struct pidfh *pfh);
#endif

int reexec_to_match_kernel(void);
int reexec_to_match_lp64ness(bool isLP64);

__END_DECLS


#define HOSTNAME_FOUND (0)
#define HOSTNAME_INCORRECTNAME (1)
#define HOSTNAME_INVALIDADDR (2)
#define HOSTNAME_INVALIDNAME (3)


#define HN_DECIMAL 0x01
#define HN_NOSPACE 0x02
#define HN_B 0x04
#define HN_DIVISOR_1000 0x08
#define HN_IEC_PREFIXES 0x10


#define HN_GETSCALE 0x10
#define HN_AUTOSCALE 0x20

#endif
