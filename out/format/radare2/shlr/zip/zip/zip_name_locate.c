# 1 "project/radare2/shlr/zip/zip/zip_name_locate.c"
# 36 "project/radare2/shlr/zip/zip/zip_name_locate.c"
#include <string.h>
#ifdef HAVE_STRINGS_H
#include <strings.h>
#endif
#include <ctype.h>

#include "zipint.h"



ZIP_EXTERN zip_int64_t
zip_name_locate(struct zip *za, const char *fname, zip_flags_t flags)
{
    return _zip_name_locate(za, fname, flags, &za->error);
}



zip_int64_t
_zip_name_locate(struct zip *za, const char *fname, zip_flags_t flags, struct zip_error *error)
{
    int (*cmp)(const char *, const char *);
    const char *fn, *p;
    zip_uint64_t i;

    if (za == NULL)
 return -1;

    if (fname == NULL) {
 _zip_error_set(error, ZIP_ER_INVAL, 0);
 return -1;
    }

    cmp = (flags & ZIP_FL_NOCASE) ? __strcasecmp : strcmp;

    for (i=0; i<za->nentry; i++) {
 fn = _zip_get_name(za, i, flags, error);


 if (fn == NULL)
     continue;

 if (flags & ZIP_FL_NODIR) {
     p = strrchr(fn, '/');
     if (p)
  fn = p+1;
 }

 if (cmp(fname, fn) == 0) {
     _zip_error_clear(error);
     return (zip_int64_t)i;
 }
    }

    _zip_error_set(error, ZIP_ER_NOENT, 0);
    return -1;
}
