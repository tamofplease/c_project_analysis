# 1 "project/radare2/shlr/zip/zip/zip_get_file_comment.c"
# 36 "project/radare2/shlr/zip/zip/zip_get_file_comment.c"
#define _ZIP_COMPILING_DEPRECATED 
#include "zipint.h"



ZIP_EXTERN const char *
zip_get_file_comment(struct zip *za, zip_uint64_t idx, int *lenp, int flags)
{
    zip_uint32_t len;
    const char *s;

    if ((s=zip_file_get_comment(za, idx, &len, (zip_flags_t)flags)) != NULL) {
 if (lenp)
     *lenp = (int)len;
    }

    return s;
}
