# 1 "project/radare2/shlr/zip/zip/zip_source_close.c"
# 36 "project/radare2/shlr/zip/zip/zip_source_close.c"
#include "zipint.h"



void
zip_source_close(struct zip_source *src)
{
    if (!src->is_open)
 return;

    if (src->src == NULL)
 (void)src->cb.f(src->ud, NULL, 0, ZIP_SOURCE_CLOSE);
    else {
 (void)src->cb.l(src->src, src->ud, NULL, 0, ZIP_SOURCE_CLOSE);
 zip_source_close(src->src);
    }

    src->is_open = 0;
}
