# 1 "project/radare2/shlr/zip/zip/zip_string.c"
# 36 "project/radare2/shlr/zip/zip/zip_string.c"
#include <stdlib.h>
#include <string.h>

#include "zipint.h"



zip_uint32_t
_zip_string_crc32(const struct zip_string *s)
{
    zip_uint32_t crc;

    crc = (zip_uint32_t)crc32(0L, Z_NULL, 0);

    if (s != NULL)
 crc = (zip_uint32_t)crc32(crc, s->raw, s->length);

    return crc;
}



int
_zip_string_equal(const struct zip_string *a, const struct zip_string *b)
{
    if (a == NULL || b == NULL)
 return a == b;

    if (a->length != b->length)
 return 0;



    return (memcmp(a->raw, b->raw, a->length) == 0);
}



void
_zip_string_free(struct zip_string *s)
{
    if (s == NULL)
 return;

    free(s->raw);
    free(s->converted);
    free(s);
}



const zip_uint8_t *
_zip_string_get(struct zip_string *string, zip_uint32_t *lenp, zip_flags_t flags, struct zip_error *error)
{
    static const zip_uint8_t empty[1] = "";

    if (string == NULL) {
 if (lenp)
     *lenp = 0;
 return empty;
    }

    if ((flags & ZIP_FL_ENC_RAW) == 0) {

 if (string->encoding == ZIP_ENCODING_UNKNOWN)
     _zip_guess_encoding(string, ZIP_ENCODING_UNKNOWN);

 if (((flags & ZIP_FL_ENC_STRICT)
      && string->encoding != ZIP_ENCODING_ASCII && string->encoding != ZIP_ENCODING_UTF8_KNOWN)
     || (string->encoding == ZIP_ENCODING_CP437)) {
     if (string->converted == NULL) {
  if ((string->converted=_zip_cp437_to_utf8(string->raw, string->length,
         &string->converted_length, error)) == NULL)
      return NULL;
     }
     if (lenp)
  *lenp = string->converted_length;
     return string->converted;
 }
    }

    if (lenp)
 *lenp = string->length;
    return string->raw;
}



zip_uint16_t
_zip_string_length(const struct zip_string *s)
{
    if (s == NULL)
 return 0;

    return s->length;
}



struct zip_string *
_zip_string_new(const zip_uint8_t *raw, zip_uint16_t length, zip_flags_t flags, struct zip_error *error)
{
    struct zip_string *s;
    enum zip_encoding_type expected_encoding;

    if (length == 0)
 return NULL;

    switch (flags & ZIP_FL_ENCODING_ALL) {
    case ZIP_FL_ENC_GUESS:
 expected_encoding = ZIP_ENCODING_UNKNOWN;
 break;
    case ZIP_FL_ENC_UTF_8:
 expected_encoding = ZIP_ENCODING_UTF8_KNOWN;
 break;
    case ZIP_FL_ENC_CP437:
 expected_encoding = ZIP_ENCODING_CP437;
 break;
    default:
 _zip_error_set(error, ZIP_ER_INVAL, 0);
 return NULL;
    }

    if ((s=(struct zip_string *)malloc(sizeof(*s))) == NULL) {
 _zip_error_set(error, ZIP_ER_MEMORY, 0);
 return NULL;
    }

    if ((s->raw=(zip_uint8_t *)malloc(length+1)) == NULL) {
 free(s);
 return NULL;
    }

    memcpy(s->raw, raw, length);
    s->raw[length] = '\0';
    s->length = length;
    s->encoding = ZIP_ENCODING_UNKNOWN;
    s->converted = NULL;
    s->converted_length = 0;

    if (expected_encoding != ZIP_ENCODING_UNKNOWN) {
 if (_zip_guess_encoding(s, expected_encoding) == ZIP_ENCODING_ERROR) {
     _zip_string_free(s);
     _zip_error_set(error, ZIP_ER_INVAL, 0);
     return NULL;
 }
    }

    return s;
}



void
_zip_string_write(const struct zip_string *s, FILE *f)
{
    if (s == NULL)
 return;

    fwrite(s->raw, s->length, 1, f);
}
