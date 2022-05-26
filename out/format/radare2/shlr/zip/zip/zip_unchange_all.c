# 1 "project/radare2/shlr/zip/zip/zip_unchange_all.c"
# 36 "project/radare2/shlr/zip/zip/zip_unchange_all.c"
#include <stdlib.h>

#include "zipint.h"



ZIP_EXTERN int
zip_unchange_all(struct zip *za)
{
    int ret;
    zip_uint64_t i;

    ret = 0;
    for (i=0; i<za->nentry; i++)
 ret |= _zip_unchange(za, i, 1);

    ret |= zip_unchange_archive(za);

    return ret;
}
