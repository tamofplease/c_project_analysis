# 0 "project/ish/fs/dyndev.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/ish/fs/dyndev.h"
# 10 "project/ish/fs/dyndev.h"
extern struct dev_ops dyn_dev_char;
# 29 "project/ish/fs/dyndev.h"
extern int dyn_dev_register(struct dev_ops *ops, int type, int major, int minor);
