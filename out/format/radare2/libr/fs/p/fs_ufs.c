# 1 "project/radare2/libr/fs/p/fs_ufs.c"


#define FSP(x) ufs_ ##x
#define FSS(x) x ##_ufs
#define FSNAME "ufs"
#define FSDESC "UFS filesystem"
#define FSPRFX ufs
#define FSIPTR grub_ufs_fs

#include "fs_grub_base.c"
