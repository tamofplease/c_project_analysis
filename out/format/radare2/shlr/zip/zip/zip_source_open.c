# 1 "project/radare2/shlr/zip/zip/zip_source_open.c"
# 36 "project/radare2/shlr/zip/zip/zip_source_open.c"
#include "zipint.h"



int
zip_source_open(struct zip_source *src)
{
    zip_int64_t ret;

    if (src->is_open) {
 src->error_source = ZIP_LES_INVAL;
 return -1;
    }

    if (src->src == NULL) {
 if (src->cb.f(src->ud, NULL, 0, ZIP_SOURCE_OPEN) < 0)
     return -1;
    }
    else {
 if (zip_source_open(src->src) < 0) {
     src->error_source = ZIP_LES_LOWER;
     return -1;
 }

 ret = src->cb.l(src->src, src->ud, NULL, 0, ZIP_SOURCE_OPEN);

 if (ret < 0) {
     zip_source_close(src->src);

     if (ret == ZIP_SOURCE_ERR_LOWER)
  src->error_source = ZIP_LES_LOWER;
     else
  src->error_source = ZIP_LES_UPPER;
     return -1;
 }
    }

    src->is_open = 1;

    return 0;
}
