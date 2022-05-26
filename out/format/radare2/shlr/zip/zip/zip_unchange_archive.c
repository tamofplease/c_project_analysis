# 1 "project/radare2/shlr/zip/zip/zip_unchange_archive.c"
# 36 "project/radare2/shlr/zip/zip/zip_unchange_archive.c"
#include <stdlib.h>

#include "zipint.h"



ZIP_EXTERN int
zip_unchange_archive(struct zip *za)
{
    if (za->comment_changed) {
 _zip_string_free(za->comment_changes);
 za->comment_changes = NULL;
 za->comment_changed = 0;
    }

    za->ch_flags = za->flags;

    return 0;
}
