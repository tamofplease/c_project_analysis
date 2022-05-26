# 1 "project/radare2/shlr/zip/zip/zip_source_stat.c"
# 36 "project/radare2/shlr/zip/zip/zip_source_stat.c"
#include "zipint.h"



int
zip_source_stat(struct zip_source *src, struct zip_stat *st)
{
    zip_int64_t ret;

    if (st == NULL) {
 src->error_source = ZIP_LES_INVAL;
 return -1;
    }

    if (src->src == NULL) {
 if (src->cb.f(src->ud, st, sizeof(*st), ZIP_SOURCE_STAT) < 0)
     return -1;
 return 0;
    }

    if (zip_source_stat(src->src, st) < 0) {
 src->error_source = ZIP_LES_LOWER;
 return -1;
    }

    ret = src->cb.l(src->src, src->ud, st, sizeof(*st), ZIP_SOURCE_STAT);

    if (ret < 0) {
 if (ret == ZIP_SOURCE_ERR_LOWER)
     src->error_source = ZIP_LES_LOWER;
 else
     src->error_source = ZIP_LES_UPPER;
 return -1;
    }

    return 0;
}
