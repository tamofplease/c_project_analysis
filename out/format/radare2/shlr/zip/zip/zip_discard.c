# 1 "project/radare2/shlr/zip/zip/zip_discard.c"
# 36 "project/radare2/shlr/zip/zip/zip_discard.c"
#include <stdlib.h>

#include "zipint.h"







void
zip_discard(struct zip *za)
{
    zip_uint64_t i;

    if (za == NULL)
 return;

    if (za->zn)
 free(za->zn);

    if (za->zp)
 fclose(za->zp);

    free(za->default_password);
    _zip_string_free(za->comment_orig);
    _zip_string_free(za->comment_changes);

    if (za->entry) {
 for (i=0; i<za->nentry; i++)
     _zip_entry_finalize(za->entry+i);
 free(za->entry);
    }

    for (i=0; i<za->nfile; i++) {
 if (za->file[i]->error.zip_err == ZIP_ER_OK) {
     _zip_error_set(&za->file[i]->error, ZIP_ER_ZIPCLOSED, 0);
     za->file[i]->za = NULL;
 }
    }

    free(za->file);

    free(za);

    return;
}
