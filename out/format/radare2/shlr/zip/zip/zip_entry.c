# 1 "project/radare2/shlr/zip/zip/zip_entry.c"
# 36 "project/radare2/shlr/zip/zip/zip_entry.c"
#include "zipint.h"

void
_zip_entry_finalize(struct zip_entry *e)
{
    _zip_unchange_data(e);
    _zip_dirent_free(e->orig);
    _zip_dirent_free(e->changes);
}



void
_zip_entry_init(struct zip_entry *e)
{
    e->orig = NULL;
    e->changes = NULL;
    e->source = NULL;
    e->deleted = 0;
}
