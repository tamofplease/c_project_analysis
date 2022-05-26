# 1 "project/radare2/shlr/zip/zip/zip_fread.c"
# 36 "project/radare2/shlr/zip/zip/zip_fread.c"
#include "zipint.h"



ZIP_EXTERN zip_int64_t
zip_fread(struct zip_file *zf, void *outbuf, zip_uint64_t toread)
{
    zip_int64_t n;

    if (!zf)
 return -1;

    if (zf->error.zip_err != 0)
 return -1;

    if (toread > ZIP_INT64_MAX) {
 _zip_error_set(&zf->error, ZIP_ER_INVAL, 0);
 return -1;
    }

    if ((zf->eof) || (toread == 0))
 return 0;

    if ((n=zip_source_read(zf->src, outbuf, toread)) < 0) {
 _zip_error_set_from_source(&zf->error, zf->src);
 return -1;
    }

    return n;
}
