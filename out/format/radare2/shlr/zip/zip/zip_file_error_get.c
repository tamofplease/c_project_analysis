# 1 "project/radare2/shlr/zip/zip/zip_file_error_get.c"
# 36 "project/radare2/shlr/zip/zip/zip_file_error_get.c"
#include "zipint.h"



ZIP_EXTERN void
zip_file_error_get(struct zip_file *zf, int *zep, int *sep)
{
    _zip_error_get(&zf->error, zep, sep);
}
