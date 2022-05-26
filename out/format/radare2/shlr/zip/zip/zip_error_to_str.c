# 1 "project/radare2/shlr/zip/zip/zip_error_to_str.c"
# 36 "project/radare2/shlr/zip/zip/zip_error_to_str.c"
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "zipint.h"



ZIP_EXTERN int
zip_error_to_str(char *buf, zip_uint64_t len, int ze, int se)
{
    const char *zs, *ss;

    if (ze < 0 || ze >= _zip_nerr_str)
 return snprintf(buf, len, "Unknown error %d", ze);

    zs = _zip_err_str[ze];

    switch (_zip_err_type[ze]) {
    case ZIP_ET_SYS:
 ss = strerror(se);
 break;

    case ZIP_ET_ZLIB:
 ss = zError(se);
 break;

    default:
 ss = NULL;
    }

    return snprintf(buf, len, "%s%s%s",
      zs, (ss ? ": " : ""), (ss ? ss : ""));
}
