# 1 "project/radare2/shlr/zip/zip/zip_source_function.c"
# 36 "project/radare2/shlr/zip/zip/zip_source_function.c"
#include <stdlib.h>

#include "zipint.h"



ZIP_EXTERN struct zip_source *
zip_source_function(struct zip *za, zip_source_callback zcb, void *ud)
{
    struct zip_source *zs;

    if (za == NULL)
 return NULL;

    if ((zs=_zip_source_new(za)) == NULL)
 return NULL;

    zs->cb.f = zcb;
    zs->ud = ud;

    return zs;
}



struct zip_source *
_zip_source_new(struct zip *za)
{
    struct zip_source *src;

    if ((src=(struct zip_source *)malloc(sizeof(*src))) == NULL) {
 _zip_error_set(&za->error, ZIP_ER_MEMORY, 0);
 return NULL;
    }

    src->src = NULL;
    src->cb.f = NULL;
    src->ud = NULL;
    src->error_source = ZIP_LES_NONE;
    src->is_open = 0;

    return src;
}
