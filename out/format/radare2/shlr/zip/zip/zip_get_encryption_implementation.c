# 1 "project/radare2/shlr/zip/zip/zip_get_encryption_implementation.c"
# 36 "project/radare2/shlr/zip/zip/zip_get_encryption_implementation.c"
#include "zipint.h"



zip_encryption_implementation
_zip_get_encryption_implementation(zip_uint16_t em)
{
    if (em == ZIP_EM_TRAD_PKWARE)
 return zip_source_pkware;
    return NULL;
}
