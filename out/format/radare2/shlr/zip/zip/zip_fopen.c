# 1 "project/radare2/shlr/zip/zip/zip_fopen.c"
# 36 "project/radare2/shlr/zip/zip/zip_fopen.c"
#include "zipint.h"



ZIP_EXTERN struct zip_file *
zip_fopen(struct zip *za, const char *fname, zip_flags_t flags)
{
    zip_int64_t idx;

    if ((idx=zip_name_locate(za, fname, flags)) < 0)
 return NULL;

    return zip_fopen_index_encrypted(za, (zip_uint64_t)idx, flags, za->default_password);
}
