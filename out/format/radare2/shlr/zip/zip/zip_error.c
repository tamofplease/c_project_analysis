# 1 "project/radare2/shlr/zip/zip/zip_error.c"
# 36 "project/radare2/shlr/zip/zip/zip_error.c"
#include <stdlib.h>

#include "zipint.h"



void
_zip_error_clear(struct zip_error *err)
{
    if (err == NULL)
 return;

    err->zip_err = ZIP_ER_OK;
    err->sys_err = 0;
}



void
_zip_error_copy(struct zip_error *dst, const struct zip_error *src)
{
    dst->zip_err = src->zip_err;
    dst->sys_err = src->sys_err;
}



void
_zip_error_fini(struct zip_error *err)
{
    free(err->str);
    err->str = NULL;
}



void
_zip_error_get(const struct zip_error *err, int *zep, int *sep)
{
    if (zep)
 *zep = err->zip_err;
    if (sep) {
 if (zip_error_get_sys_type(err->zip_err) != ZIP_ET_NONE)
     *sep = err->sys_err;
 else
     *sep = 0;
    }
}



void
_zip_error_init(struct zip_error *err)
{
    err->zip_err = ZIP_ER_OK;
    err->sys_err = 0;
    err->str = NULL;
}



void
_zip_error_set(struct zip_error *err, int ze, int se)
{
    if (err) {
 err->zip_err = ze;
 err->sys_err = se;
    }
}



void
_zip_error_set_from_source(struct zip_error *err, struct zip_source *src)
{
    int ze, se;

    zip_source_error(src, &ze, &se);
    _zip_error_set(err, ze, se);
}



ZIP_EXTERN void
zip_file_error_clear(struct zip_file *zf)
{
 if (zf) {
  _zip_error_clear(&zf->error);
 }
}



ZIP_EXTERN void
zip_error_clear(struct zip *za)
{
    if (za == NULL)
 return;

    _zip_error_clear(&za->error);
}
