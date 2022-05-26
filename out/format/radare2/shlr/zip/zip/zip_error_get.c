# 1 "project/radare2/shlr/zip/zip/zip_error_get.c"
# 36 "project/radare2/shlr/zip/zip/zip_error_get.c"
#include "zipint.h"



ZIP_EXTERN void
zip_error_get(struct zip *za, int *zep, int *sep)
{
    _zip_error_get(&za->error, zep, sep);
}
