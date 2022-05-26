# 1 "project/ish/kernel/init.h"
#ifndef KERNEL_INIT_H
#define KERNEL_INIT_H 

#include "fs/tty.h"


int mount_root(const struct fs_ops *fs, const char *source);
void set_console_device(int major, int minor);
int become_first_process(void);
int become_new_init_child(void);
int create_stdio(const char *file, int major, int minor);
int create_piped_stdio(void);

#endif
