# 1 "project/radare2/shlr/zip/zip/zip_dir_add.c"
# 36 "project/radare2/shlr/zip/zip/zip_dir_add.c"
#include <stdlib.h>
#include <string.h>

#include "zipint.h"





ZIP_EXTERN zip_int64_t
zip_dir_add(struct zip *za, const char *name, zip_flags_t flags)
{
    size_t len;
    zip_int64_t ret;
    char *s;
    struct zip_source *source;

    if (ZIP_IS_RDONLY(za)) {
 _zip_error_set(&za->error, ZIP_ER_RDONLY, 0);
 return -1;
    }

    if (name == NULL) {
 _zip_error_set(&za->error, ZIP_ER_INVAL, 0);
 return -1;
    }

    s = NULL;
    len = strlen(name);

    if (name[len-1] != '/') {
 if ((s=(char *)malloc(len+2)) == NULL) {
     _zip_error_set(&za->error, ZIP_ER_MEMORY, 0);
     return -1;
 }
 strcpy(s, name);
 s[len] = '/';
 s[len+1] = '\0';
    }

    if ((source=zip_source_buffer(za, NULL, 0, 0)) == NULL) {
 free(s);
 return -1;
    }

    ret = _zip_file_replace(za, ZIP_UINT64_MAX, s ? s : name, source, flags);

    free(s);
    if (ret < 0)
 zip_source_free(source);

    return ret;
}
