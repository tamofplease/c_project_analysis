# 1 "project/radare2/shlr/zip/zip/zip_stat.c"
# 36 "project/radare2/shlr/zip/zip/zip_stat.c"
#include "zipint.h"



ZIP_EXTERN int
zip_stat(struct zip *za, const char *fname, zip_flags_t flags, struct zip_stat *st)
{
    zip_int64_t idx;

    if ((idx=zip_name_locate(za, fname, flags)) < 0)
 return -1;

    return zip_stat_index(za, (zip_uint64_t)idx, flags, st);
}
