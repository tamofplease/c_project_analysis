# 1 "project/radare2/libr/fs/p/fs_minix.c"


#define FSP(x) minix_ ##x
#define FSS(x) x ##_minix
#define FSNAME "minix"
#define FSDESC "MINIX filesystem"
#define FSPRFX minix
#define FSIPTR grub_minix_fs

#include "fs_grub_base.c"
