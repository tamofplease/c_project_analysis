# 1 "project/radare2/shlr/zip/zip/zip_file_get_offset.c"
# 36 "project/radare2/shlr/zip/zip/zip_file_get_offset.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>

#include "zipint.h"
# 53 "project/radare2/shlr/zip/zip/zip_file_get_offset.c"
zip_uint64_t
_zip_file_get_offset(const struct zip *za, zip_uint64_t idx, struct zip_error *error)
{
    zip_uint64_t offset;
    zip_int32_t size;

    offset = za->entry[idx].orig->offset;

    if (fseeko(za->zp, (off_t)offset, SEEK_SET) != 0) {
 _zip_error_set(error, ZIP_ER_SEEK, errno);
 return 0;
    }


    if ((size=_zip_dirent_size(za->zp, ZIP_EF_LOCAL, error)) < 0)
 return 0;

    if (offset+(zip_uint32_t)size > ZIP_OFF_MAX) {
        _zip_error_set(error, ZIP_ER_SEEK, EFBIG);
        return 0;
    }

    return offset + (zip_uint32_t)size;
}
