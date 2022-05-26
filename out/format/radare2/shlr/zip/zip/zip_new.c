# 1 "project/radare2/shlr/zip/zip/zip_new.c"
# 36 "project/radare2/shlr/zip/zip/zip_new.c"
#include <stdlib.h>

#include "zipint.h"







struct zip *
_zip_new(struct zip_error *error)
{
    struct zip *za;

    za = (struct zip *)malloc(sizeof(struct zip));
    if (!za) {
 _zip_error_set(error, ZIP_ER_MEMORY, 0);
 return NULL;
    }

    za->zn = NULL;
    za->zp = NULL;
    za->open_flags = 0;
    _zip_error_init(&za->error);
    za->flags = za->ch_flags = 0;
    za->default_password = NULL;
    za->comment_orig = za->comment_changes = NULL;
    za->comment_changed = 0;
    za->nentry = za->nentry_alloc = 0;
    za->entry = NULL;
    za->nfile = za->nfile_alloc = 0;
    za->file = NULL;
    za->tempdir = NULL;

    return za;
}
