# 1 "project/radare2/shlr/zip/zip/zip_get_archive_flag.c"
# 36 "project/radare2/shlr/zip/zip/zip_get_archive_flag.c"
#include "zipint.h"



ZIP_EXTERN int
zip_get_archive_flag(struct zip *za, unsigned int flag, zip_flags_t flags)
{
    unsigned int fl;

    fl = (flags & ZIP_FL_UNCHANGED) ? za->flags : za->ch_flags;

    return (fl & flag) ? 1 : 0;
}
