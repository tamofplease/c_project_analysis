# 1 "project/radare2/shlr/zip/zip/zip_file_add.c"
# 36 "project/radare2/shlr/zip/zip/zip_file_add.c"
#include "zipint.h"
# 46 "project/radare2/shlr/zip/zip/zip_file_add.c"
ZIP_EXTERN zip_int64_t
zip_file_add(struct zip *za, const char *name, struct zip_source *source, zip_flags_t flags)
{
    if (name == NULL || source == NULL) {
 _zip_error_set(&za->error, ZIP_ER_INVAL, 0);
 return -1;
    }

    return _zip_file_replace(za, ZIP_UINT64_MAX, name, source, flags);
}
