# 1 "project/goaccess/src/base64.c"
# 31 "project/goaccess/src/base64.c"
#include <stdlib.h>
#include <string.h>

#include "base64.h"
#include "xmalloc.h"




char *
base64_encode (const void *buf, size_t size) {
  static const char base64[] =
    "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

  char *str = (char *) xmalloc ((size + 3) * 4 / 3 + 1);

  char *p = str;
  const unsigned char *q = (const unsigned char *) buf;
  size_t i = 0;

  while (i < size) {
    int c = q[i++];
    c *= 256;
    if (i < size)
      c += q[i];
    i++;

    c *= 256;
    if (i < size)
      c += q[i];
    i++;

    *p++ = base64[(c & 0x00fc0000) >> 18];
    *p++ = base64[(c & 0x0003f000) >> 12];

    if (i > size + 1)
      *p++ = '=';
    else
      *p++ = base64[(c & 0x00000fc0) >> 6];

    if (i > size)
      *p++ = '=';
    else
      *p++ = base64[c & 0x0000003f];
  }

  *p = 0;

  return str;
}
