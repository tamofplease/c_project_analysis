# 1 "project/ish/fs/lock.c"
#include <limits.h>
#include "kernel/calls.h"
#include "kernel/fs.h"
#include "fs/inode.h"

static bool file_locks_overlap(struct file_lock *a, struct file_lock *b) {
    return a->end >= b->start && b->end >= a->start;
}

static bool file_locks_conflict(struct file_lock *a, struct file_lock *b) {
    if (a->owner == b->owner)
        return false;
    if (!file_locks_overlap(a, b))
        return false;

    if (a->type == F_WRLCK_ || b->type == F_WRLCK_)
        return true;
    return false;
}

static bool file_locks_adjacent(struct file_lock *a, struct file_lock *b) {
    return a->end == b->start - 1 || b->end == a->start - 1;
}

static struct file_lock *file_lock_test(struct inode_data *inode, struct file_lock *request) {
    struct file_lock *lock;
    list_for_each_entry(&inode->posix_locks, lock, locks) {
        if (file_locks_conflict(lock, request))
            return lock;
    }
    return NULL;
}

static struct file_lock *file_lock_copy(struct file_lock *request) {
    struct file_lock *lock = malloc(sizeof(struct file_lock));
    lock->start = request->start;
    lock->end = request->end;
    lock->type = request->type;
    lock->owner = request->owner;
    lock->pid = request->pid;
    list_init(&lock->locks);
    return lock;
}

static void file_lock_delete(struct file_lock *lock) {
    list_remove(&lock->locks);
    free(lock);
}

static int file_lock_acquire(struct inode_data *inode, struct file_lock *request) {
    struct file_lock *lock;

    if (request->type != F_UNLCK_) {
        list_for_each_entry(&inode->posix_locks, lock, locks) {
            if (file_locks_conflict(lock, request))
                return _EAGAIN;

        }
    }
# 69 "project/ish/fs/lock.c"
    bool found_our_locks = false;
    struct file_lock *tmp;
    list_for_each_entry_safe(&inode->posix_locks, lock, tmp, locks) {

        if (!found_our_locks) {
            if (lock->owner != request->owner)
                continue;
            found_our_locks = true;
        } else {
            if (lock->owner != request->owner)
                break;
        }
        assert(lock->owner == request->owner);

        if (request->type == lock->type) {
            if (!file_locks_overlap(lock, request) && !file_locks_adjacent(request, lock))
                continue;


            if (lock->start < request->start)
                request->start = lock->start;
            if (lock->end > request->end)
                request->end = lock->end;
            file_lock_delete(lock);
        } else {
            if (!file_locks_overlap(lock, request))
                continue;
# 105 "project/ish/fs/lock.c"
            notify(&inode->posix_unlock);

            if (request->start > lock->start && request->end < lock->end) {

                struct file_lock *lock2 = file_lock_copy(lock);

                lock->end = request->start - 1;
                lock2->start = request->end + 1;
                list_add_after(&lock->locks, &lock2->locks);
            } else if (request->start <= lock->start && request->end >= lock->end) {

                file_lock_delete(lock);
            } else if (lock->start < request->start) {

                assert(lock->end >= request->start);

                lock->end = request->start - 1;
            } else if (lock->end > request->end) {

                assert(lock->start <= request->end);

                lock->start = request->end + 1;
            }
        }
    }

    if (request->type != F_UNLCK_) {
        struct file_lock *new_lock = file_lock_copy(request);
        list_add_before(&lock->locks, &new_lock->locks);
    }
    return 0;
}

#define OFF_T_MAX ~(1l << (sizeof(off_t) * 8 - 1))

static int file_lock_from_flock(struct fd *fd, struct flock_ *flock, struct file_lock *lock) {
    off_t_ offset;
    switch (flock->whence) {
        case LSEEK_SET:
            offset = 0;
            break;
        case LSEEK_CUR:
            lock(&fd->lock);
            offset = fd->ops->lseek(fd, 0, LSEEK_CUR);
            unlock(&fd->lock);
            if (offset < 0)
                return offset;
            break;
        case LSEEK_END: {
            struct statbuf stat;
            int err = fd->mount->fs->fstat(fd, &stat);
            if (err < 0)
                return err;
            offset = stat.size;
            break;
        }
        default:
            return _EINVAL;
    }

    lock->start = flock->start + offset;
    if (flock->len > 0) {
        lock->end = lock->start + flock->len - 1;
    } else if (flock->len < 0) {
        lock->end = lock->start - 1;
        lock->start = lock->end + flock->len + 1;
    } else {
        lock->end = OFF_T_MAX;
    }
    lock->type = flock->type;
    lock->owner = current->files;
    lock->pid = current->pid;
    return 0;
}

static int flock_from_file_lock(struct file_lock *lock, struct flock_ *flock) {
    flock->type = lock->type;
    flock->whence = LSEEK_SET;
    flock->start = lock->start;
    if (lock->end != OFF_T_MAX)
        flock->len = lock->end - lock->start + 1;
    else
        flock->len = 0;
    flock->pid = lock->pid;
    return 0;
}

int fcntl_getlk(struct fd *fd, struct flock_ *flock) {
    if (flock->type != F_RDLCK_ && flock->type != F_WRLCK_)
        return _EINVAL;
    struct inode_data *inode = fd->inode;
    lock(&inode->lock);

    struct file_lock request;
    int err = file_lock_from_flock(fd, flock, &request);
    if (err < 0)
        goto out;
    struct file_lock *lock = file_lock_test(inode, &request);
    err = 0;
    if (lock != NULL)
        err = flock_from_file_lock(lock, flock);
    else
        flock->type = F_UNLCK_;
out:
    unlock(&inode->lock);
    return err;
}

int fcntl_setlk(struct fd *fd, struct flock_ *flock, bool blocking) {
    if (flock->type != F_RDLCK_ && flock->type != F_WRLCK_ && flock->type != F_UNLCK_)
        return _EINVAL;
    int fd_mode = fd_getflags(fd) & O_ACCMODE_;
    if (flock->type == F_RDLCK_ && fd_mode == O_WRONLY_)
        return _EBADF;
    if (flock->type == F_WRLCK_ && fd_mode == O_RDONLY_)
        return _EBADF;

    struct inode_data *inode = fd->inode;
    lock(&inode->lock);

    struct file_lock request;
    int err = file_lock_from_flock(fd, flock, &request);
    if (err < 0)
        goto out;
    while ((err = file_lock_acquire(inode, &request)) == _EAGAIN) {
        if (!blocking)
            break;
        err = wait_for(&inode->posix_unlock, &inode->lock, NULL);
        if (err < 0)
            break;
    }
out:
    unlock(&inode->lock);
    return err;
}

void file_lock_remove_owned_by(struct fd *fd, void *owner) {
    struct inode_data *inode = fd->inode;
    lock(&inode->lock);
    struct file_lock *lock, *tmp;
    list_for_each_entry_safe(&inode->posix_locks, lock, tmp, locks) {
        if (lock->owner == owner)
            file_lock_delete(lock);
    }
    unlock(&inode->lock);
}
