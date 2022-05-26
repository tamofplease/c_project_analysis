# 1 "project/radare2/shlr/zip/zip/zip_source_layered.c"
# 36 "project/radare2/shlr/zip/zip/zip_source_layered.c"
#include <stdlib.h>

#include "zipint.h"



struct zip_source *
zip_source_layered(struct zip *za, struct zip_source *src,
     zip_source_layered_callback cb, void *ud)
{
    struct zip_source *zs;

    if (za == NULL)
 return NULL;

    if ((zs=_zip_source_new(za)) == NULL)
 return NULL;

    zs->src = src;
    zs->cb.l = cb;
    zs->ud = ud;

    return zs;
}
