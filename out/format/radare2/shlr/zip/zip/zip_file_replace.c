# 1 "project/radare2/shlr/zip/zip/zip_file_replace.c"
# 36 "project/radare2/shlr/zip/zip/zip_file_replace.c"
#include "zipint.h"



ZIP_EXTERN int
zip_file_replace(struct zip *za, zip_uint64_t idx, struct zip_source *source, zip_flags_t flags)
{
    if (idx >= za->nentry || source == NULL) {
 _zip_error_set(&za->error, ZIP_ER_INVAL, 0);
 return -1;
    }

    if (_zip_file_replace(za, idx, NULL, source, flags) == -1)
 return -1;

    return 0;
}






zip_int64_t
_zip_file_replace(struct zip *za, zip_uint64_t idx, const char *name, struct zip_source *source, zip_flags_t flags)
{
    zip_uint64_t za_nentry_prev;

    if (ZIP_IS_RDONLY(za)) {
 _zip_error_set(&za->error, ZIP_ER_RDONLY, 0);
 return -1;
    }

    za_nentry_prev = za->nentry;
    if (idx == ZIP_UINT64_MAX) {
 zip_int64_t i = -1;

 if (flags & ZIP_FL_OVERWRITE)
     i = _zip_name_locate(za, name, flags, NULL);

 if (i == -1) {

     if ((i=_zip_add_entry(za)) < 0)
  return -1;
 }
 idx = (zip_uint64_t)i;
    }

    if (name && _zip_set_name(za, idx, name, flags) != 0) {
 if (za->nentry != za_nentry_prev) {
     _zip_entry_finalize(za->entry+idx);
     za->nentry = za_nentry_prev;
 }
 return -1;
    }



    _zip_unchange_data(za->entry+idx);

    if (za->entry[idx].orig != NULL && (za->entry[idx].changes == NULL || (za->entry[idx].changes->changed & ZIP_DIRENT_COMP_METHOD) == 0)) {
        if (za->entry[idx].changes == NULL) {
            if ((za->entry[idx].changes=_zip_dirent_clone(za->entry[idx].orig)) == NULL) {
                _zip_error_set(&za->error, ZIP_ER_MEMORY, 0);
                return -1;
            }
        }

        za->entry[idx].changes->comp_method = ZIP_CM_REPLACED_DEFAULT;
        za->entry[idx].changes->changed |= ZIP_DIRENT_COMP_METHOD;
    }

    za->entry[idx].source = source;

    return (zip_int64_t)idx;
}
