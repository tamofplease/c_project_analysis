# 1 "project/radare2/libr/fs/p/fs_fat.c"


#define FSP(x) fat_ ##x
#define FSS(x) x ##_fat
#define FSNAME "fat"
#define FSDESC "FAT filesystem"
#define FSPRFX fat
#define FSIPTR grub_fat_fs

#include "fs_grub_base.c"
