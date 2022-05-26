# 1 "project/radare2/shlr/zip/zip/zip_fopen_encrypted.c"
# 36 "project/radare2/shlr/zip/zip/zip_fopen_encrypted.c"
#include "zipint.h"



ZIP_EXTERN struct zip_file *
zip_fopen_encrypted(struct zip *za, const char *fname, zip_flags_t flags, const char *password)
{
    zip_int64_t idx;

    if ((idx=zip_name_locate(za, fname, flags)) < 0)
 return NULL;

    return zip_fopen_index_encrypted(za, (zip_uint64_t)idx, flags, password);
}
