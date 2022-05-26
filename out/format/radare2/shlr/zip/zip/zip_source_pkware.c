# 1 "project/radare2/shlr/zip/zip/zip_source_pkware.c"
# 36 "project/radare2/shlr/zip/zip/zip_source_pkware.c"
#include <stdlib.h>
#include <string.h>

#include "zipint.h"

struct trad_pkware {
    int e[2];

    zip_uint32_t key[3];
};

#define HEADERLEN 12
#define KEY0 305419896
#define KEY1 591751049
#define KEY2 878082192



static void decrypt(struct trad_pkware *, zip_uint8_t *,
      const zip_uint8_t *, zip_uint64_t, int);
static int decrypt_header(struct zip_source *, struct trad_pkware *);
static zip_int64_t pkware_decrypt(struct zip_source *, void *, void *,
      zip_uint64_t, enum zip_source_cmd);
static void pkware_free(struct trad_pkware *);



struct zip_source *
zip_source_pkware(struct zip *za, struct zip_source *src,
    zip_uint16_t em, int flags, const char *password)
{
    struct trad_pkware *ctx;
    struct zip_source *s2;

    if (password == NULL || src == NULL || em != ZIP_EM_TRAD_PKWARE) {
 _zip_error_set(&za->error, ZIP_ER_INVAL, 0);
 return NULL;
    }
    if (flags & ZIP_CODEC_ENCODE) {
 _zip_error_set(&za->error, ZIP_ER_ENCRNOTSUPP, 0);
 return NULL;
    }

    if ((ctx=(struct trad_pkware *)malloc(sizeof(*ctx))) == NULL) {
 _zip_error_set(&za->error, ZIP_ER_MEMORY, 0);
 return NULL;
    }

    ctx->e[0] = ctx->e[1] = 0;

    ctx->key[0] = KEY0;
    ctx->key[1] = KEY1;
    ctx->key[2] = KEY2;
    decrypt(ctx, NULL, (const zip_uint8_t *)password, strlen(password), 1);

    if ((s2=zip_source_layered(za, src, pkware_decrypt, ctx)) == NULL) {
 pkware_free(ctx);
 return NULL;
    }

    return s2;
}



static void
decrypt(struct trad_pkware *ctx, zip_uint8_t *out, const zip_uint8_t *in,
 zip_uint64_t len, int update_only)
{
    zip_uint16_t tmp;
    zip_uint64_t i;
    Bytef b;

    for (i=0; i<len; i++) {
 b = in[i];

 if (!update_only) {

     tmp = (zip_uint16_t)(ctx->key[2] | 2);
     tmp = (tmp * (tmp ^ 1)) >> 8;
     b ^= tmp;
 }


 if (out)
     out[i] = b;


 ctx->key[0] = (zip_uint32_t)crc32(ctx->key[0] ^ 0xffffffffUL, &b, 1) ^ 0xffffffffUL;
 ctx->key[1] = (ctx->key[1] + (ctx->key[0] & 0xff)) * 134775813 + 1;
 b = ctx->key[1] >> 24;
 ctx->key[2] = (zip_uint32_t)crc32(ctx->key[2] ^ 0xffffffffUL, &b, 1) ^ 0xffffffffUL;
    }
}



static int
decrypt_header(struct zip_source *src, struct trad_pkware *ctx)
{
    zip_uint8_t header[HEADERLEN];
    struct zip_stat st;
    zip_int64_t n;
    unsigned short dostime, dosdate;

    if ((n=zip_source_read(src, header, HEADERLEN)) < 0) {
 zip_source_error(src, ctx->e, ctx->e+1);
 return -1;
    }

    if (n != HEADERLEN) {
 ctx->e[0] = ZIP_ER_EOF;
 ctx->e[1] = 0;
 return -1;
    }

    decrypt(ctx, header, header, HEADERLEN, 0);

    if (zip_source_stat(src, &st) < 0) {

 return 0;
    }

    _zip_u2d_time(st.mtime, &dostime, &dosdate);

    if (header[HEADERLEN-1] != st.crc>>24
 && header[HEADERLEN-1] != dostime>>8) {
 ctx->e[0] = ZIP_ER_WRONGPASSWD;
 ctx->e[1] = 0;
 return -1;
    }

    return 0;
}



static zip_int64_t
pkware_decrypt(struct zip_source *src, void *ud, void *data,
        zip_uint64_t len, enum zip_source_cmd cmd)
{
    struct trad_pkware *ctx;
    zip_int64_t n;

    ctx = (struct trad_pkware *)ud;

    switch (cmd) {
    case ZIP_SOURCE_OPEN:
 if (decrypt_header(src, ctx) < 0)
     return -1;
 return 0;

    case ZIP_SOURCE_READ:
 if ((n=zip_source_read(src, data, len)) < 0)
     return ZIP_SOURCE_ERR_LOWER;

 decrypt((struct trad_pkware *)ud, (zip_uint8_t *)data, (zip_uint8_t *)data, (zip_uint64_t)n,
  0);
 return n;

    case ZIP_SOURCE_CLOSE:
 return 0;

    case ZIP_SOURCE_STAT:
 {
     struct zip_stat *st;

     st = (struct zip_stat *)data;

     st->encryption_method = ZIP_EM_NONE;
     st->valid |= ZIP_STAT_ENCRYPTION_METHOD;

     if (st->valid & ZIP_STAT_COMP_SIZE)
  st->comp_size -= HEADERLEN;
 }
 return 0;

    case ZIP_SOURCE_ERROR:
 memcpy(data, ctx->e, sizeof(int)*2);
 return sizeof(int)*2;

    case ZIP_SOURCE_FREE:
 pkware_free(ctx);
 return 0;

    default:
 ctx->e[0] = ZIP_ER_INVAL;
 ctx->e[1] = 0;
 return -1;
    }
}



static void
pkware_free(struct trad_pkware *ctx)
{
    free(ctx);
}
