# 1 "project/radare2/shlr/zip/zip/zip_filerange_crc.c"
# 36 "project/radare2/shlr/zip/zip/zip_filerange_crc.c"
#include <stdio.h>
#include <errno.h>

#include "zipint.h"




int
_zip_filerange_crc(FILE *fp, off_t start, off_t len, uLong *crcp,
     struct zip_error *errp)
{
    Bytef buf[BUFSIZE];
    size_t n;

    *crcp = crc32(0L, Z_NULL, 0);

    if (fseeko(fp, start, SEEK_SET) != 0) {
 _zip_error_set(errp, ZIP_ER_SEEK, errno);
 return -1;
    }

    while (len > 0) {
 n = len > BUFSIZE ? BUFSIZE : (size_t)len;
 if ((n=fread(buf, 1, n, fp)) == 0) {
     _zip_error_set(errp, ZIP_ER_READ, errno);
     return -1;
 }

 *crcp = crc32(*crcp, buf, (uInt)n);

 len-= n;
    }

    return 0;
}
