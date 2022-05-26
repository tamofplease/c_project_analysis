# 1 "project/radare2/shlr/zip/zip/zip_set_archive_flag.c"
# 36 "project/radare2/shlr/zip/zip/zip_set_archive_flag.c"
#include "zipint.h"



ZIP_EXTERN int
zip_set_archive_flag(struct zip *za, unsigned int flag, int value)
{
    unsigned int new_flags;

    if (value)
 new_flags = za->ch_flags | flag;
    else
 new_flags = za->ch_flags & ~flag;

    if (new_flags == za->ch_flags)
 return 0;

    if (ZIP_IS_RDONLY(za)) {
 _zip_error_set(&za->error, ZIP_ER_RDONLY, 0);
 return -1;
    }

    if ((flag & ZIP_AFL_RDONLY) && value
 && (za->ch_flags & ZIP_AFL_RDONLY) == 0) {
 if (_zip_changed(za, NULL)) {
     _zip_error_set(&za->error, ZIP_ER_CHANGED, 0);
     return -1;
 }
    }

    za->ch_flags = new_flags;

    return 0;
}
