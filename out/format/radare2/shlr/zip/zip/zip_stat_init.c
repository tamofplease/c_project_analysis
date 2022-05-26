# 1 "project/radare2/shlr/zip/zip/zip_stat_init.c"
# 36 "project/radare2/shlr/zip/zip/zip_stat_init.c"
#include "zipint.h"



ZIP_EXTERN void
zip_stat_init(struct zip_stat *st)
{
    st->valid = 0;
    st->name = NULL;
    st->index = ZIP_UINT64_MAX;
    st->crc = 0;
    st->mtime = (time_t)-1;
    st->size = 0;
    st->comp_size = 0;
    st->comp_method = ZIP_CM_STORE;
    st->encryption_method = ZIP_EM_NONE;
}
