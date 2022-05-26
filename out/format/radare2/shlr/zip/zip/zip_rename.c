# 1 "project/radare2/shlr/zip/zip/zip_rename.c"
# 36 "project/radare2/shlr/zip/zip/zip_rename.c"
#include <string.h>

#define _ZIP_COMPILING_DEPRECATED 
#include "zipint.h"



ZIP_EXTERN int
zip_rename(struct zip *za, zip_uint64_t idx, const char *name)
{
    return zip_file_rename(za, idx, name, 0);
}
