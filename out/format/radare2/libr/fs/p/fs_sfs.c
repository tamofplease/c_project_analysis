# 1 "project/radare2/libr/fs/p/fs_sfs.c"


#define FSP(x) sfs_ ##x
#define FSS(x) x ##_sfs
#define FSNAME "sfs"
#define FSDESC "Amiga Smart FileSystem"
#define FSPRFX sfs
#define FSIPTR grub_sfs_fs

#include "fs_grub_base.c"
