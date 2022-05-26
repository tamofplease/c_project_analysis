# 1 "project/radare2/shlr/zip/zip/zip_unchange.c"
# 36 "project/radare2/shlr/zip/zip/zip_unchange.c"
#include <stdlib.h>

#include "zipint.h"



ZIP_EXTERN int
zip_unchange(struct zip *za, zip_uint64_t idx)
{
    return _zip_unchange(za, idx, 0);
}



int
_zip_unchange(struct zip *za, zip_uint64_t idx, int allow_duplicates)
{
    zip_int64_t i;

    if (idx >= za->nentry) {
 _zip_error_set(&za->error, ZIP_ER_INVAL, 0);
 return -1;
    }

    if (!allow_duplicates && za->entry[idx].changes && (za->entry[idx].changes->changed & ZIP_DIRENT_FILENAME)) {
 i = _zip_name_locate(za, _zip_get_name(za, idx, ZIP_FL_UNCHANGED, NULL), 0, NULL);
 if (i >= 0 && (zip_uint64_t)i != idx) {
     _zip_error_set(&za->error, ZIP_ER_EXISTS, 0);
     return -1;
 }
    }

    _zip_dirent_free(za->entry[idx].changes);
    za->entry[idx].changes = NULL;

    _zip_unchange_data(za->entry+idx);

    return 0;
}
