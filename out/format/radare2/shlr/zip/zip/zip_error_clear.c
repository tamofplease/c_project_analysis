# 1 "project/radare2/shlr/zip/zip/zip_error_clear.c"
# 36 "project/radare2/shlr/zip/zip/zip_error_clear.c"
#include "zipint.h"



ZIP_EXTERN void
zip_error_clear(struct zip *za)
{
    if (za == NULL)
 return;

    _zip_error_clear(&za->error);
}
