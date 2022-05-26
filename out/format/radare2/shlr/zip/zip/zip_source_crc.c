# 1 "project/radare2/shlr/zip/zip/zip_source_crc.c"
# 36 "project/radare2/shlr/zip/zip/zip_source_crc.c"
#include <stdlib.h>
#include <string.h>

#include "zipint.h"

struct crc_context {
    int eof;
    int validate;
    int e[2];
    zip_uint64_t size;
    zip_uint32_t crc;
};

static zip_int64_t crc_read(struct zip_source *, void *, void *
       , zip_uint64_t, enum zip_source_cmd);



struct zip_source *
zip_source_crc(struct zip *za, struct zip_source *src, int validate)
{
    struct crc_context *ctx;

    if (src == NULL) {
 _zip_error_set(&za->error, ZIP_ER_INVAL, 0);
 return NULL;
    }

    if ((ctx=(struct crc_context *)malloc(sizeof(*ctx))) == NULL) {
 _zip_error_set(&za->error, ZIP_ER_MEMORY, 0);
 return NULL;
    }

    ctx->eof = 0;
    ctx->validate = validate;
    ctx->e[0] = ctx->e[1] = 0;
    ctx->size = 0;
    ctx->crc = 0;

    return zip_source_layered(za, src, crc_read, ctx);
}



static zip_int64_t
crc_read(struct zip_source *src, void *_ctx, void *data,
  zip_uint64_t len, enum zip_source_cmd cmd)
{
    struct crc_context *ctx;
    zip_int64_t n;

    ctx = (struct crc_context *)_ctx;

    switch (cmd) {
    case ZIP_SOURCE_OPEN:
 ctx->eof = 0;
 ctx->crc = (zip_uint32_t)crc32(0, NULL, 0);
 ctx->size = 0;

 return 0;

    case ZIP_SOURCE_READ:
 if (ctx->eof || len == 0)
     return 0;

 if ((n=zip_source_read(src, data, len)) < 0)
     return ZIP_SOURCE_ERR_LOWER;

 if (n == 0) {
     ctx->eof = 1;
     if (ctx->validate) {
  struct zip_stat st;

  if (zip_source_stat(src, &st) < 0)
      return ZIP_SOURCE_ERR_LOWER;

  if ((st.valid & ZIP_STAT_CRC) && st.crc != ctx->crc) {
      ctx->e[0] = ZIP_ER_CRC;
      ctx->e[1] = 0;

      return -1;
  }
  if ((st.valid & ZIP_STAT_SIZE) && st.size != ctx->size) {
      ctx->e[0] = ZIP_ER_INCONS;
      ctx->e[1] = 0;

      return -1;
  }
     }
 }
 else {
     ctx->size += (zip_uint64_t)n;
     ctx->crc = (zip_uint32_t)crc32(ctx->crc, (const Bytef *)data, (uInt)n);
 }
 return n;

    case ZIP_SOURCE_CLOSE:
 return 0;

    case ZIP_SOURCE_STAT:
 {
     struct zip_stat *st;

     st = (struct zip_stat *)data;

     if (ctx->eof) {


  st->size = ctx->size;
  st->crc = ctx->crc;
  st->comp_size = ctx->size;
  st->comp_method = ZIP_CM_STORE;
  st->encryption_method = ZIP_EM_NONE;
  st->valid |= ZIP_STAT_SIZE|ZIP_STAT_CRC|ZIP_STAT_COMP_SIZE|ZIP_STAT_COMP_METHOD|ZIP_STAT_ENCRYPTION_METHOD;;
     }
 }
 return 0;

    case ZIP_SOURCE_ERROR:
 memcpy(data, ctx->e, sizeof(ctx->e));
 return 0;

    case ZIP_SOURCE_FREE:
 free(ctx);
 return 0;

    default:
 return -1;
    }

}
