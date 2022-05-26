# 1 "project/ish/fs/mem.c"
#include <string.h>
#include "kernel/errno.h"
#include "kernel/random.h"
#include "fs/poll.h"
#include "fs/mem.h"
#include "fs/dev.h"
#include "fs/devices.h"

extern struct dev_ops
    null_dev,
    zero_dev,
    full_dev,
    random_dev;


struct dev_ops *mem_devs[256] = {


    [DEV_NULL_MINOR] = &null_dev,

    [DEV_ZERO_MINOR] = &zero_dev,
    [DEV_FULL_MINOR] = &full_dev,
    [DEV_RANDOM_MINOR] = &random_dev,
    [DEV_URANDOM_MINOR] = &random_dev,



};


static int mem_open(int major, int minor, struct fd *fd) {
    struct dev_ops *dev = mem_devs[minor];
    if (dev == NULL) {
        return _ENXIO;
    }
    fd->ops = &dev->fd;
    if (!dev->open)
        return 0;
    return dev->open(major, minor, fd);
}

struct dev_ops mem_dev = {
    .open = mem_open,
};

static int ready_poll(struct fd *UNUSED(fd)) {
    return POLL_READ | POLL_WRITE;
}


static int null_open(int UNUSED(major), int UNUSED(minor), struct fd *UNUSED(fd)) {
    return 0;
}
static ssize_t null_read(struct fd *UNUSED(fd), void *UNUSED(buf), size_t UNUSED(bufsize)) {
    return 0;
}
static ssize_t null_write(struct fd *UNUSED(fd), const void *UNUSED(buf), size_t bufsize) {
    return bufsize;
}
static off_t_ null_lseek(struct fd *UNUSED(fd), off_t_ UNUSED(off), int UNUSED(whence)) {
    return 0;
}
struct dev_ops null_dev = {
    .open = null_open,
    .fd.read = null_read,
    .fd.write = null_write,
    .fd.lseek = null_lseek,
    .fd.poll = ready_poll,
};

static ssize_t zero_read(struct fd *UNUSED(fd), void *buf, size_t bufsize) {
    memset(buf, 0, bufsize);
    return bufsize;
}
static ssize_t zero_write(struct fd *UNUSED(fd), const void *UNUSED(buf), size_t bufsize) {
    return bufsize;
}
struct dev_ops zero_dev = {
    .open = null_open,
    .fd.read = zero_read,
    .fd.write = zero_write,
    .fd.lseek = null_lseek,
    .fd.poll = ready_poll,
};

static ssize_t full_write(struct fd *UNUSED(fd), const void *UNUSED(buf), size_t UNUSED(bufsize)) {
    return _ENOSPC;
}
struct dev_ops full_dev = {
    .open = null_open,
    .fd.read = zero_read,
    .fd.write = full_write,
    .fd.lseek = null_lseek,
    .fd.poll = ready_poll,
};

static ssize_t random_read(struct fd *UNUSED(fd), void *buf, size_t bufsize) {
    get_random(buf, bufsize);
    return bufsize;
}
struct dev_ops random_dev = {
    .open = null_open,
    .fd.read = random_read,
    .fd.write = null_write,
    .fd.lseek = null_lseek,
    .fd.poll = ready_poll,
};
