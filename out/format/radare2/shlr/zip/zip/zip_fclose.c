# 1 "project/radare2/shlr/zip/zip/zip_fclose.c"
# 36 "project/radare2/shlr/zip/zip/zip_fclose.c"
#include <stdlib.h>
#include "zipint.h"



ZIP_EXTERN int zip_fclose(struct zip_file *zf) {
 int ret;
 unsigned int i;

 if (!zf)
  return ZIP_ER_INTERNAL;
 if (zf->src)
  zip_source_free(zf->src);

 for (i=0; i<zf->za->nfile; i++) {
  if (zf->za->file[i] == zf) {
   zf->za->file[i] = zf->za->file[zf->za->nfile-1];
   zf->za->nfile--;
   break;
  }
 }

 ret = 0;
 if (zf->error.zip_err)
  ret = zf->error.zip_err;

 free (zf);
 return ret;
}
