# 1 "project/radare2/libr/fs/p/fs_xfs.c"


#define FSP(x) xfs_ ##x
#define FSS(x) x ##_xfs
#define FSNAME "xfs"
#define FSDESC "XFS filesystem"
#define FSPRFX xfs
#define FSIPTR grub_xfs_fs

#include "fs_grub_base.c"
