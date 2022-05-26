# 1 "project/radare2/shlr/zip/zip/zip_set_archive_comment.c"
# 36 "project/radare2/shlr/zip/zip/zip_set_archive_comment.c"
#include <stdlib.h>

#include "zipint.h"



ZIP_EXTERN int
zip_set_archive_comment(struct zip *za, const char *comment, zip_uint16_t len)
{
    struct zip_string *cstr;

    if (ZIP_IS_RDONLY(za)) {
 _zip_error_set(&za->error, ZIP_ER_RDONLY, 0);
 return -1;
    }

    if (len > 0 && comment == NULL) {
 _zip_error_set(&za->error, ZIP_ER_INVAL, 0);
 return -1;
    }

    if (len > 0) {
 if ((cstr=_zip_string_new((const zip_uint8_t *)comment, len, ZIP_FL_ENC_GUESS, &za->error)) == NULL)
     return -1;

 if (_zip_guess_encoding(cstr, ZIP_ENCODING_UNKNOWN) == ZIP_ENCODING_CP437) {
     _zip_string_free(cstr);
     _zip_error_set(&za->error, ZIP_ER_INVAL, 0);
     return -1;
 }
    }
    else
 cstr = NULL;

    _zip_string_free(za->comment_changes);
    za->comment_changes = NULL;

    if (((za->comment_orig && _zip_string_equal(za->comment_orig, cstr))
  || (za->comment_orig == NULL && cstr == NULL))) {
 _zip_string_free(cstr);
 za->comment_changed = 0;
    }
    else {
 za->comment_changes = cstr;
 za->comment_changed = 1;
    }

    return 0;
}
