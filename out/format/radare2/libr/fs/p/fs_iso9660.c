# 1 "project/radare2/libr/fs/p/fs_iso9660.c"


#define FSP(x) iso9660_ ##x
#define FSS(x) x ##_iso9660
#define FSNAME "iso9660"
#define FSDESC "ISO9660 filesystem"
#define FSPRFX iso9660
#define FSIPTR grub_iso9660_fs

#include "fs_grub_base.c"
