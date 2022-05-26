# 1 "project/radare2/shlr/zip/zip/zip_source_pop.c"
# 36 "project/radare2/shlr/zip/zip/zip_source_pop.c"
#include <stdlib.h>

#include "zipint.h"



struct zip_source *
zip_source_pop(struct zip_source *src)
{
    struct zip_source *lower;

    if (src == NULL)
 return NULL;

    lower = src->src;

    if (lower == NULL)
 zip_source_free(src);
    else {
 if (src->is_open)
     (void)src->cb.l(src, src->ud, NULL, 0, ZIP_SOURCE_CLOSE);
 (void)src->cb.l(src, src->ud, NULL, 0, ZIP_SOURCE_FREE);

 free(src);
    }

    return lower;
}
