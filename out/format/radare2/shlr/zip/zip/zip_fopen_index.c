# 1 "project/radare2/shlr/zip/zip/zip_fopen_index.c"
# 36 "project/radare2/shlr/zip/zip/zip_fopen_index.c"
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

#include "zipint.h"



ZIP_EXTERN struct zip_file *
zip_fopen_index(struct zip *za, zip_uint64_t index, zip_flags_t flags)
{
    return zip_fopen_index_encrypted(za, index, flags, za->default_password);
}
