# 1 "project/radare2/shlr/zip/zip/zip_get_name.c"
# 36 "project/radare2/shlr/zip/zip/zip_get_name.c"
#include <string.h>

#include "zipint.h"



ZIP_EXTERN const char *
zip_get_name(struct zip *za, zip_uint64_t idx, zip_flags_t flags)
{
    return _zip_get_name(za, idx, flags, &za->error);
}



const char *
_zip_get_name(struct zip *za, zip_uint64_t idx, zip_flags_t flags, struct zip_error *error)
{
    struct zip_dirent *de;
    const zip_uint8_t *str;

    if ((de=_zip_get_dirent(za, idx, flags, error)) == NULL)
 return NULL;

    if ((str=_zip_string_get(de->filename, NULL, flags, error)) == NULL)
 return NULL;

    return (const char *)str;
}
