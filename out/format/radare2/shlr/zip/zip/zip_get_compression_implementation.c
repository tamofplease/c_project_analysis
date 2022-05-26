# 1 "project/radare2/shlr/zip/zip/zip_get_compression_implementation.c"
# 36 "project/radare2/shlr/zip/zip/zip_get_compression_implementation.c"
#include "zipint.h"



zip_compression_implementation
_zip_get_compression_implementation(zip_int32_t cm)
{
    if (cm == ZIP_CM_DEFLATE || ZIP_CM_IS_DEFAULT(cm))
 return zip_source_deflate;
    return NULL;
}
