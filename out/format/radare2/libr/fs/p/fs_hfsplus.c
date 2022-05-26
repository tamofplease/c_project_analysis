# 1 "project/radare2/libr/fs/p/fs_hfsplus.c"


#define FSP(x) hfsplus_ ##x
#define FSS(x) x ##_hfsplus
#define FSNAME "hfsplus"
#define FSDESC "HFSPLUS filesystem"
#define FSPRFX hfsplus
#define FSIPTR grub_hfsplus_fs

#include "fs_grub_base.c"
