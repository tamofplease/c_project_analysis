# 1 "project/radare2/shlr/zip/zip/zip_file_get_comment.c"
# 36 "project/radare2/shlr/zip/zip/zip_file_get_comment.c"
#include "zipint.h"




ZIP_EXTERN const char *
zip_file_get_comment(struct zip *za, zip_uint64_t idx, zip_uint32_t *lenp, zip_flags_t flags)
{
    struct zip_dirent *de;
    zip_uint32_t len;
    const zip_uint8_t *str;

    if ((de=_zip_get_dirent(za, idx, flags, NULL)) == NULL)
 return NULL;

    if ((str=_zip_string_get(de->comment, &len, flags, &za->error)) == NULL)
 return NULL;

    if (lenp)
 *lenp = len;

    return (const char *)str;
}
