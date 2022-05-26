# 1 "project/radare2/shlr/zip/zip/zip_set_file_comment.c"
# 36 "project/radare2/shlr/zip/zip/zip_set_file_comment.c"
#include <stdlib.h>

#define _ZIP_COMPILING_DEPRECATED 
#include "zipint.h"



ZIP_EXTERN int
zip_set_file_comment(struct zip *za, zip_uint64_t idx, const char *comment, int len)
{
    if (len < 0 || len > ZIP_UINT16_MAX) {
        _zip_error_set(&za->error, ZIP_ER_INVAL, 0);
        return -1;
    }
    return zip_file_set_comment(za, idx, comment, (zip_uint16_t)len, 0);
}
