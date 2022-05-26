# 1 "project/radare2/shlr/zip/zip/zip_source_buffer.c"
# 36 "project/radare2/shlr/zip/zip/zip_source_buffer.c"
#include <stdlib.h>
#include <string.h>

#include "zipint.h"

struct read_data {
    const char *buf, *data, *end;
    time_t mtime;
    int freep;
};

static zip_int64_t read_data(void *, void *, zip_uint64_t, enum zip_source_cmd);



ZIP_EXTERN struct zip_source *
zip_source_buffer(struct zip *za, const void *data, zip_uint64_t len, int freep)
{
    struct read_data *f;
    struct zip_source *zs;

    if (za == NULL)
 return NULL;

    if (data == NULL && len > 0) {
 _zip_error_set(&za->error, ZIP_ER_INVAL, 0);
 return NULL;
    }

    if ((f=(struct read_data *)malloc(sizeof(*f))) == NULL) {
 _zip_error_set(&za->error, ZIP_ER_MEMORY, 0);
 return NULL;
    }

    f->data = (const char *)data;
    f->end = ((const char *)data)+len;
    f->freep = freep;
    f->mtime = time(NULL);

    if ((zs=zip_source_function(za, read_data, f)) == NULL) {
 free(f);
 return NULL;
    }

    return zs;
}



static zip_int64_t
read_data(void *state, void *data, zip_uint64_t len, enum zip_source_cmd cmd)
{
    struct read_data *z;
    char *buf;
    zip_uint64_t n;

    z = (struct read_data *)state;
    buf = (char *)data;

    switch (cmd) {
    case ZIP_SOURCE_OPEN:
 z->buf = z->data;
 return 0;

    case ZIP_SOURCE_READ:
 n = (zip_uint64_t)(z->end - z->buf);
 if (n > len)
     n = len;

 if (n) {
     memcpy(buf, z->buf, n);
     z->buf += n;
 }

 return (zip_int64_t)n;

    case ZIP_SOURCE_CLOSE:
 return 0;

    case ZIP_SOURCE_STAT:
        {
     struct zip_stat *st;

     if (len < sizeof(*st))
  return -1;

     st = (struct zip_stat *)data;

     zip_stat_init(st);
     st->mtime = z->mtime;
     st->size = (zip_uint64_t)(z->end - z->data);
     st->comp_size = st->size;
     st->comp_method = ZIP_CM_STORE;
     st->encryption_method = ZIP_EM_NONE;
     st->valid = ZIP_STAT_MTIME|ZIP_STAT_SIZE|ZIP_STAT_COMP_SIZE
  |ZIP_STAT_COMP_METHOD|ZIP_STAT_ENCRYPTION_METHOD;

     return sizeof(*st);
 }

    case ZIP_SOURCE_ERROR:
 {
     int *e;

     if (len < sizeof(int)*2)
  return -1;

     e = (int *)data;
     e[0] = e[1] = 0;
 }
 return sizeof(int)*2;

    case ZIP_SOURCE_FREE:
 if (z->freep) {
     free((void *)z->data);
     z->data = NULL;
 }
 free(z);
 return 0;

    default:
 ;
    }

    return -1;
}
