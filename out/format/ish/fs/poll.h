# 1 "project/ish/fs/poll.h"
#ifndef FS_POLL_H
#define FS_POLL_H 
#include "kernel/fs.h"

struct real_poll {
    int fd;
};

struct poll {
    struct list poll_fds;
    struct real_poll real;
    int notify_pipe[2];
    int waiters;
# 28 "project/ish/fs/poll.h"
    struct list pollfd_freelist;

    lock_t lock;
};

struct poll_fd {

    struct fd *fd;
    struct list fds;
    int types;
    union poll_fd_info {
        void *ptr;
        int fd;
        uint64_t num;
    } info;



    int triggered_types;


    struct poll *poll;
    struct list polls;
};


#undef POLL_IN
#undef POLL_OUT
#undef POLL_MSG
#undef POLL_ERR
#undef POLL_PRI
#undef POLL_HUP

#define POLL_READ 1
#define POLL_PRI 2
#define POLL_WRITE 4
#define POLL_ERR 8
#define POLL_HUP 16
#define POLL_NVAL 32
#define POLL_ONESHOT (1 << 30)
#define POLL_EDGETRIGGERED (1ul << 31)
struct poll_event {
    struct fd *fd;
    int types;
};
struct poll *poll_create(void);
bool poll_has_fd(struct poll *poll, struct fd *fd);
int poll_add_fd(struct poll *poll, struct fd *fd, int types, union poll_fd_info info);
int poll_mod_fd(struct poll *poll, struct fd *fd, int types, union poll_fd_info info);
int poll_del_fd(struct poll *poll, struct fd *fd);



void poll_wakeup(struct fd *fd, int events);


typedef int (*poll_callback_t)(void *context, int types, union poll_fd_info info);
int poll_wait(struct poll *poll, poll_callback_t callback, void *context, struct timespec *timeout);


void poll_destroy(struct poll *poll);


void poll_cleanup_fd(struct fd *fd);

#endif
