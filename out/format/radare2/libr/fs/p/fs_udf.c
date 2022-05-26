# 1 "project/radare2/libr/fs/p/fs_udf.c"


#define FSP(x) udf_ ##x
#define FSS(x) x ##_udf
#define FSNAME "udf"
#define FSDESC "UDF filesystem"
#define FSPRFX udf
#define FSIPTR grub_udf_fs

#include "fs_grub_base.c"
