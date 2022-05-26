# 1 "project/radare2/shlr/zip/zip/zip_get_num_files.c"
# 36 "project/radare2/shlr/zip/zip/zip_get_num_files.c"
#define _ZIP_COMPILING_DEPRECATED 
#include "zipint.h"



ZIP_EXTERN int
zip_get_num_files(struct zip *za)
{
    if (za == NULL)
 return -1;


    return (int)za->nentry;
}
