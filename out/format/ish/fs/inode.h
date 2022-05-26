# 1 "project/ish/fs/inode.h"
#ifndef FS_INODE_H
#define FS_INODE_H 
#include <sys/types.h>
#include "misc.h"
#include "util/list.h"
#include "util/sync.h"
struct mount;
struct fd;

struct inode_data {
    unsigned refcount;
    ino_t number;
    struct mount *mount;
    struct list chain;

    struct list posix_locks;
    cond_t posix_unlock;

    uint32_t socket_id;

    lock_t lock;
};

struct inode_data *inode_get(struct mount *mount, ino_t inode);
void inode_retain(struct inode_data *inode);
void inode_release(struct inode_data *inode);
# 35 "project/ish/fs/inode.h"
extern lock_t inodes_lock;
struct inode_data *inode_get_unlocked(struct mount *mount, ino_t inode);


void inode_check_orphaned(struct mount *mount, ino_t ino);



#define F_RDLCK_ 0
#define F_WRLCK_ 1
#define F_UNLCK_ 2

struct file_lock {
    off_t_ start;
    off_t_ end;
    int type;
    pid_t_ pid;
    void *owner;
    struct list locks;
};

struct flock_ {
    word_t type;
    word_t whence;
    off_t_ start;
    off_t_ len;
    pid_t_ pid;
} __attribute__((packed));
struct flock32_ {
    word_t type;
    word_t whence;
    dword_t start;
    dword_t len;
    pid_t_ pid;
} __attribute__((packed));

int fcntl_getlk(struct fd *fd, struct flock_ *flock);

int fcntl_setlk(struct fd *fd, struct flock_ *flock, bool block);


void file_lock_remove_owned_by(struct fd *fd, void *owner);

#endif
