# 1 "project/radare2/shlr/zip/zip/zip_strerror.c"
# 36 "project/radare2/shlr/zip/zip/zip_strerror.c"
#include "zipint.h"



ZIP_EXTERN const char *
zip_strerror(struct zip *za)
{
    return _zip_error_strerror(&za->error);
}
