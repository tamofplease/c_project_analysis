# 1 "project/radare2/shlr/zip/zip/zip_file_set_comment.c"
# 36 "project/radare2/shlr/zip/zip/zip_file_set_comment.c"
#include <stdlib.h>

#include "zipint.h"



ZIP_EXTERN int
zip_file_set_comment(struct zip *za, zip_uint64_t idx,
       const char *comment, zip_uint16_t len, zip_flags_t flags)
{
    struct zip_entry *e;
    struct zip_string *cstr;
    int changed;

    if (_zip_get_dirent(za, idx, 0, NULL) == NULL)
 return -1;

    if (ZIP_IS_RDONLY(za)) {
 _zip_error_set(&za->error, ZIP_ER_RDONLY, 0);
 return -1;
    }

    if (len > 0 && comment == NULL) {
 _zip_error_set(&za->error, ZIP_ER_INVAL, 0);
 return -1;
    }

    if (len > 0) {
 if ((cstr=_zip_string_new((const zip_uint8_t *)comment, len, flags, &za->error)) == NULL)
     return -1;
 if ((flags & ZIP_FL_ENCODING_ALL) == ZIP_FL_ENC_GUESS && _zip_guess_encoding(cstr, ZIP_ENCODING_UNKNOWN) == ZIP_ENCODING_UTF8_GUESSED)
     cstr->encoding = ZIP_ENCODING_UTF8_KNOWN;
    }
    else
 cstr = NULL;

    e = za->entry+idx;

    if (e->changes) {
 _zip_string_free(e->changes->comment);
 e->changes->comment = NULL;
 e->changes->changed &= ~ZIP_DIRENT_COMMENT;
    }

    if (e->orig && e->orig->comment)
 changed = !_zip_string_equal(e->orig->comment, cstr);
    else
 changed = (cstr != NULL);

    if (changed) {
        if (e->changes == NULL) {
            if ((e->changes=_zip_dirent_clone(e->orig)) == NULL) {
                _zip_error_set(&za->error, ZIP_ER_MEMORY, 0);
  _zip_string_free(cstr);
                return -1;
            }
        }
        e->changes->comment = cstr;
        e->changes->changed |= ZIP_DIRENT_COMMENT;
    }
    else {
 _zip_string_free(cstr);
 if (e->changes && e->changes->changed == 0) {
     _zip_dirent_free(e->changes);
     e->changes = NULL;
 }
    }

    return 0;
}
