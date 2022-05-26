# 1 "project/radare2/libr/fs/p/fs_jfs.c"


#define FSP(x) jfs_ ##x
#define FSS(x) x ##_jfs
#define FSNAME "jfs"
#define FSDESC "JFS filesystem"
#define FSPRFX jfs
#define FSIPTR grub_jfs_fs

#include "fs_grub_base.c"
