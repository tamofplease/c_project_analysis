# 1 "project/radare2/shlr/zip/zip/zip_source_read.c"
# 36 "project/radare2/shlr/zip/zip/zip_source_read.c"
#include "zipint.h"



zip_int64_t
zip_source_read(struct zip_source *src, void *data, zip_uint64_t len)
{
    zip_int64_t ret;

    if (!src->is_open || len > ZIP_INT64_MAX || (len > 0 && data == NULL)) {
 src->error_source = ZIP_LES_INVAL;
 return -1;
    }

    if (src->src == NULL)
 return src->cb.f(src->ud, data, len, ZIP_SOURCE_READ);

    ret = src->cb.l(src->src, src->ud, data, len, ZIP_SOURCE_READ);

    if (ret < 0) {
 if (ret == ZIP_SOURCE_ERR_LOWER)
     src->error_source = ZIP_LES_LOWER;
 else
     src->error_source = ZIP_LES_UPPER;
 return -1;
    }

    return ret;
}
