# 1 "project/ish/fs/sockrestart.h"
# 13 "project/ish/fs/sockrestart.h"
#ifndef FS_SOCKRESTART_H
#define FS_SOCKRESTART_H 
#include <stdbool.h>
#include "util/list.h"
struct fd;

void sockrestart_begin_listen(struct fd *sock);
void sockrestart_end_listen(struct fd *sock);
void sockrestart_begin_listen_wait(struct fd *sock);
void sockrestart_end_listen_wait(struct fd *sock);
bool sockrestart_should_restart_listen_wait(void);
void sockrestart_on_suspend(void);
void sockrestart_on_resume(void);

struct fd_sockrestart {
    struct list listen;
};

struct task_sockrestart {
    int count;
    bool punt;
    struct list listen;
};

#endif
