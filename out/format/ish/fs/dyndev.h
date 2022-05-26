# 1 "project/ish/fs/dyndev.h"
#ifndef FS_DYN_DEV_H
#define FS_DYN_DEV_H 







extern struct dev_ops dyn_dev_char;
# 29 "project/ish/fs/dyndev.h"
extern int dyn_dev_register(struct dev_ops *ops, int type, int major, int minor);

#endif
