# 1 "project/radare2/shlr/zip/zip/zip_replace.c"
# 36 "project/radare2/shlr/zip/zip/zip_replace.c"
#define _ZIP_COMPILING_DEPRECATED 
#include "zipint.h"



ZIP_EXTERN int
zip_replace(struct zip *za, zip_uint64_t idx, struct zip_source *source)
{
    return zip_file_replace(za, idx, source, 0);
}
