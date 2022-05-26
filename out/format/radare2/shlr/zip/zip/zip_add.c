# 1 "project/radare2/shlr/zip/zip/zip_add.c"
# 36 "project/radare2/shlr/zip/zip/zip_add.c"
#define _ZIP_COMPILING_DEPRECATED 
#include "zipint.h"
# 48 "project/radare2/shlr/zip/zip/zip_add.c"
ZIP_EXTERN zip_int64_t
zip_add(struct zip *za, const char *name, struct zip_source *source)
{
    return zip_file_add(za, name, source, 0);
}
