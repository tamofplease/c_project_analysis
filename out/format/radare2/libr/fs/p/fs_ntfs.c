# 1 "project/radare2/libr/fs/p/fs_ntfs.c"


#define FSP(x) ntfs_ ##x
#define FSS(x) x ##_ntfs
#define FSNAME "ntfs"
#define FSDESC "NTFS filesystem"
#define FSPRFX ntfs
#define FSIPTR grub_ntfs_fs

#include "fs_grub_base.c"
