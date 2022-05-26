# 1 "project/radare2/shlr/zip/zip/zip_file_error_clear.c"
# 36 "project/radare2/shlr/zip/zip/zip_file_error_clear.c"
#include "zipint.h"



ZIP_EXTERN void
zip_file_error_clear(struct zip_file *zf)
{
    if (zf == NULL)
 return;

    _zip_error_clear(&zf->error);
}
