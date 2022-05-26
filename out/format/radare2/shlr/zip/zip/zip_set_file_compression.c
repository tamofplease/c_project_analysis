# 1 "project/radare2/shlr/zip/zip/zip_set_file_compression.c"
# 36 "project/radare2/shlr/zip/zip/zip_set_file_compression.c"
#include "zipint.h"



ZIP_EXTERN int
zip_set_file_compression(struct zip *za, zip_uint64_t idx,
    zip_int32_t method, zip_uint32_t flags)
{
    struct zip_entry *e;
    zip_int32_t old_method;

    if (idx >= za->nentry) {
 _zip_error_set(&za->error, ZIP_ER_INVAL, 0);
 return -1;
    }

    if (ZIP_IS_RDONLY(za)) {
 _zip_error_set(&za->error, ZIP_ER_RDONLY, 0);
 return -1;
    }

    if (method != ZIP_CM_DEFAULT && method != ZIP_CM_STORE && method != ZIP_CM_DEFLATE) {
 _zip_error_set(&za->error, ZIP_ER_COMPNOTSUPP, 0);
 return -1;
    }

    e = za->entry+idx;

    old_method = (e->orig == NULL ? ZIP_CM_DEFAULT : e->orig->comp_method);



    if (method == old_method) {
 if (e->changes) {
     e->changes->changed &= ~ZIP_DIRENT_COMP_METHOD;
     if (e->changes->changed == 0) {
  _zip_dirent_free(e->changes);
  e->changes = NULL;
     }
 }
    }
    else {
        if (e->changes == NULL) {
            if ((e->changes=_zip_dirent_clone(e->orig)) == NULL) {
                _zip_error_set(&za->error, ZIP_ER_MEMORY, 0);
                return -1;
            }
        }

        e->changes->comp_method = method;
        e->changes->changed |= ZIP_DIRENT_COMP_METHOD;
    }

    return 0;
}
