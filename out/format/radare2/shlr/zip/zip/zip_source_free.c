# 1 "project/radare2/shlr/zip/zip/zip_source_free.c"
# 36 "project/radare2/shlr/zip/zip/zip_source_free.c"
#include <stdlib.h>

#include "zipint.h"



ZIP_EXTERN void
zip_source_free(struct zip_source *src)
{
    if (src == NULL)
 return;

    if (src->is_open)
 zip_source_close(src);

    if (src->src == NULL)
 (void)src->cb.f(src->ud, NULL, 0, ZIP_SOURCE_FREE);
    else {
 (void)src->cb.l(src->src, src->ud, NULL, 0, ZIP_SOURCE_FREE);
 zip_source_free(src->src);
    }

    free(src);
}
