# 1 "project/radare2/shlr/zip/zip/zip_get_archive_comment.c"
# 36 "project/radare2/shlr/zip/zip/zip_get_archive_comment.c"
#include <string.h>

#include "zipint.h"



ZIP_EXTERN const char *
zip_get_archive_comment(struct zip *za, int *lenp, zip_flags_t flags)
{
    struct zip_string *comment;
    zip_uint32_t len;
    const zip_uint8_t *str;

    if ((flags & ZIP_FL_UNCHANGED) || (za->comment_changes == NULL))
 comment = za->comment_orig;
    else
 comment = za->comment_changes;

    if ((str=_zip_string_get(comment, &len, flags, &za->error)) == NULL)
 return NULL;

    if (lenp)
 *lenp = (int)len;

    return (const char *)str;
}
