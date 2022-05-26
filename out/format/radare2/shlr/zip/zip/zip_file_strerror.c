# 1 "project/radare2/shlr/zip/zip/zip_file_strerror.c"
# 36 "project/radare2/shlr/zip/zip/zip_file_strerror.c"
#include "zipint.h"



ZIP_EXTERN const char *
zip_file_strerror(struct zip_file *zf)
{
    return _zip_error_strerror(&zf->error);
}
