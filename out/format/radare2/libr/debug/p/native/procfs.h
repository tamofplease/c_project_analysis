# 1 "project/radare2/libr/debug/p/native/procfs.h"


#ifndef PROCFS_H
#define PROCFS_H 

int procfs_pid_slurp (int pid, char *prop, char *out, size_t len);

#endif
