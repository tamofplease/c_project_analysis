# 1 "project/radare2/shlr/zip/zip/zip_get_num_entries.c"
# 36 "project/radare2/shlr/zip/zip/zip_get_num_entries.c"
#include "zipint.h"



ZIP_EXTERN zip_int64_t
zip_get_num_entries(struct zip *za, zip_flags_t flags)
{
    zip_uint64_t n;

    if (za == NULL)
 return -1;

    if (flags & ZIP_FL_UNCHANGED) {
 n = za->nentry;
 while (n>0 && za->entry[n-1].orig == NULL)
     --n;
 return (zip_int64_t)n;
    }
    return (zip_int64_t)za->nentry;
}
