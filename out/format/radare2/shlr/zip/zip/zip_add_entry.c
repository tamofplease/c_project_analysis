# 1 "project/radare2/shlr/zip/zip/zip_add_entry.c"
# 36 "project/radare2/shlr/zip/zip/zip_add_entry.c"
#include <stdlib.h>

#include "zipint.h"





zip_int64_t
_zip_add_entry(struct zip *za)
{
    zip_uint64_t idx;

    if (za->nentry+1 >= za->nentry_alloc) {
 struct zip_entry *rentries;
 zip_uint64_t nalloc = za->nentry_alloc + 16;
 rentries = (struct zip_entry *)realloc(za->entry, sizeof(struct zip_entry) * nalloc);
 if (!rentries) {
     _zip_error_set(&za->error, ZIP_ER_MEMORY, 0);
     return -1;
 }
 za->entry = rentries;
 za->nentry_alloc = nalloc;
    }

    idx = za->nentry++;

    _zip_entry_init(za->entry+idx);

    return (zip_int64_t)idx;
}
