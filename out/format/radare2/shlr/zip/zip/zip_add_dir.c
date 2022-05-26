# 1 "project/radare2/shlr/zip/zip/zip_add_dir.c"
# 36 "project/radare2/shlr/zip/zip/zip_add_dir.c"
#define _ZIP_COMPILING_DEPRECATED 
#include "zipint.h"





ZIP_EXTERN zip_int64_t
zip_add_dir(struct zip *za, const char *name)
{
    return zip_dir_add(za, name, 0);
}
