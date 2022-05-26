# 1 "project/radare2/shlr/zip/zip/zip_source_error.c"
# 36 "project/radare2/shlr/zip/zip/zip_source_error.c"
#include "zipint.h"



void
zip_source_error(struct zip_source *src, int *ze, int *se)
{
    int e[2];

    if (src->src == NULL) {
        if (src->cb.f(src->ud, e, sizeof(e), ZIP_SOURCE_ERROR) < 0) {
            e[0] = ZIP_ER_INTERNAL;
            e[1] = 0;
        }
    }
    else {
 switch (src->error_source) {
 case ZIP_LES_NONE:
     e[0] = e[1] = 0;
     break;

 case ZIP_LES_INVAL:
     e[0] = ZIP_ER_INVAL;
     e[1] = 0;
     break;

 case ZIP_LES_LOWER:
     zip_source_error(src->src, ze, se);
     return;

 case ZIP_LES_UPPER:
     if (src->cb.l(src->src, src->ud, e, sizeof(e), ZIP_SOURCE_ERROR) < 0) {
  e[0] = ZIP_ER_INTERNAL;
  e[1] = 0;
     }
     break;

 default:
     e[0] = ZIP_ER_INTERNAL;
     e[1] = 0;
     break;
 }
    }

    if (ze)
 *ze = e[0];
    if (se)
 *se = e[1];
}
