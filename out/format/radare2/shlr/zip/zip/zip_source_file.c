# 1 "project/radare2/shlr/zip/zip/zip_source_file.c"
# 36 "project/radare2/shlr/zip/zip/zip_source_file.c"
#include <errno.h>
#include <stdio.h>

#include "zipint.h"



ZIP_EXTERN struct zip_source *
zip_source_file(struct zip *za, const char *fname, zip_uint64_t start,
  zip_int64_t len)
{
    if (za == NULL)
 return NULL;

    if (fname == NULL || len < -1) {
 _zip_error_set(&za->error, ZIP_ER_INVAL, 0);
 return NULL;
    }

    return _zip_source_file_or_p(za, fname, NULL, start, len, 1, NULL);
}
