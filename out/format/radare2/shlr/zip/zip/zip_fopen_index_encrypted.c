# 1 "project/radare2/shlr/zip/zip/zip_fopen_index_encrypted.c"
# 36 "project/radare2/shlr/zip/zip/zip_fopen_index_encrypted.c"
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

#include "zipint.h"

static struct zip_file *_zip_file_new(struct zip *za);



ZIP_EXTERN struct zip_file *
zip_fopen_index_encrypted(struct zip *za, zip_uint64_t index, zip_flags_t flags,
     const char *password)
{
    struct zip_file *zf;
    struct zip_source *src;

    if ((src=_zip_source_zip_new(za, za, index, flags, 0, 0, password)) == NULL)
 return NULL;

    if (zip_source_open(src) < 0) {
 _zip_error_set_from_source(&za->error, src);
 zip_source_free(src);
 return NULL;
    }

    if ((zf=_zip_file_new(za)) == NULL) {
 zip_source_free(src);
 return NULL;
    }

    zf->src = src;

    return zf;
}



static struct zip_file *
_zip_file_new(struct zip *za)
{
    struct zip_file *zf, **file;

    if ((zf=(struct zip_file *)malloc(sizeof(struct zip_file))) == NULL) {
 _zip_error_set(&za->error, ZIP_ER_MEMORY, 0);
 return NULL;
    }

    if (za->nfile+1 >= za->nfile_alloc) {
 unsigned int n;
 n = za->nfile_alloc + 10;
 file = (struct zip_file **)realloc(za->file,
        n*sizeof(struct zip_file *));
 if (file == NULL) {
     _zip_error_set(&za->error, ZIP_ER_MEMORY, 0);
     free(zf);
     return NULL;
 }
 za->nfile_alloc = n;
 za->file = file;
    }

    za->file[za->nfile++] = zf;

    zf->za = za;
    _zip_error_init(&zf->error);
    zf->eof = 0;
    zf->src = NULL;

    return zf;
}
