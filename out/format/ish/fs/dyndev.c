# 1 "project/ish/fs/dyndev.c"
#include "kernel/errno.h"
#include "fs/dev.h"
#include "fs/dyndev.h"
#include "fs/devices.h"

#define MAX_MINOR 255



struct dyn_dev_info {

    lock_t devs_lock;

    struct dev_ops *devs[MAX_MINOR+1];
};

struct dyn_dev_info dyn_info_char = {
    .devs_lock = LOCK_INITIALIZER,
    .devs = {},
};

int dyn_dev_register(struct dev_ops *ops, int type, int major, int minor) {

    if (minor < 0 || minor > MAX_MINOR) {
        return _EINVAL;
    }
    if (major != DYN_DEV_MAJOR) {
        return _EINVAL;
    }
    if (ops == NULL) {
        return _EINVAL;
    }
    if (type != DEV_CHAR) {
        return _EINVAL;
    }

    lock(&dyn_info_char.devs_lock);


    if (dyn_info_char.devs[minor] != NULL) {
        unlock(&dyn_info_char.devs_lock);
        return _EEXIST;
    }

    dyn_info_char.devs[minor] = ops;
    unlock(&dyn_info_char.devs_lock);

    return 0;
}

static int dyn_open(int type, int major, int minor, struct fd *fd) {
    assert(type == DEV_CHAR);
    assert(major == DYN_DEV_MAJOR);

    struct dev_ops *ops = dyn_info_char.devs[minor];
    if (ops == NULL) {
        return _ENXIO;
    }
    fd->ops = &ops->fd;


    if (!ops->open)
        return 0;
    return ops->open(major, minor, fd);
}

static int dyn_open_char(int major, int minor, struct fd *fd) {
    return dyn_open(DEV_CHAR, major, minor, fd);
}
struct dev_ops dyn_dev_char = {
    .open = dyn_open_char,
};
