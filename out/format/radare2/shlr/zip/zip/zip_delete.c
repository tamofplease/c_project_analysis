# 1 "project/radare2/shlr/zip/zip/zip_delete.c"
# 36 "project/radare2/shlr/zip/zip/zip_delete.c"
#include "zipint.h"



ZIP_EXTERN int
zip_delete(struct zip *za, zip_uint64_t idx)
{
    if (idx >= za->nentry) {
 _zip_error_set(&za->error, ZIP_ER_INVAL, 0);
 return -1;
    }

    if (ZIP_IS_RDONLY(za)) {
 _zip_error_set(&za->error, ZIP_ER_RDONLY, 0);
 return -1;
    }



    if (_zip_unchange(za, idx, 1) != 0)
 return -1;

    za->entry[idx].deleted = 1;

    return 0;
}
