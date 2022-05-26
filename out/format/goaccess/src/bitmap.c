# 1 "project/goaccess/src/bitmap.c"
# 31 "project/goaccess/src/bitmap.c"
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdint.h>

#include "error.h"
#include "xmalloc.h"

#include "bitmap.h"





static uint32_t
hweight (uint32_t w) {
  uint32_t res;

  res = (w & 0x55555555) + ((w >> 1) & 0x55555555);
  res = (res & 0x33333333) + ((res >> 2) & 0x33333333);
  res = (res & 0x0F0F0F0F) + ((res >> 4) & 0x0F0F0F0F);
  res = (res & 0x00FF00FF) + ((res >> 8) & 0x00FF00FF);
  res = (res & 0x0000FFFF) + ((res >> 16) & 0x0000FFFF);

  return res;
}



inline uint32_t
bitmap_sizeof (uint32_t i) {
  return bitmap_word (i) * sizeof (word_t);
}

void
free_bitmap (bitmap * bm) {
  free ((uint32_t *) bm->bmp);
  free (bm);
}

int
bitmap_set_bit (word_t * words, uint32_t n) {
  words[WORD_OFFSET (n)] |= ((word_t) 1 << BIT_OFFSET (n));
  return 0;
}

int
bitmap_get_bit (word_t * words, uint32_t n) {
  word_t bit = words[WORD_OFFSET (n)] & ((word_t) 1 << BIT_OFFSET (n));
  return bit != 0;
}

uint32_t
bitmap_count_set (const bitmap * bm) {
  uint32_t i, n = 0, len = 0;

  if (!bm)
    return 0;

  len = bitmap_word (bm->len);
  for (i = 0; i < len; ++i)
    n += hweight (bm->bmp[i]);

  return n;
}

uint32_t
bitmap_ffs (bitmap * bm) {
  uint32_t i, pos = 1, len = 0;
  uint32_t __bitset;

  if (!bm)
    return 0;

  len = bitmap_word (bm->len);
  for (i = 0; i < len; ++i) {
    __bitset = bm->bmp[i];
    if ((pos = __builtin_ffs (__bitset)))
      break;
  }

  return (BITS_PER_WORD * i) + pos;
}

bitmap *
bitmap_create (uint32_t bit) {
  bitmap *bm = xcalloc (1, sizeof (bitmap));
  uint32_t bytes = bitmap_sizeof (bit);

  bm->bmp = xmalloc (bytes);
  memset (bm->bmp, 0, bytes);
  bm->len = bit;

  return bm;
}

int
bitmap_realloc (bitmap * bm, uint32_t bit) {
  uint32_t *tmp = NULL;
  uint32_t oldlen = 0, newlen = 0;

  newlen = bitmap_sizeof (bit);
  oldlen = bitmap_sizeof (bm->len);
  if (newlen <= oldlen)
    return 1;

  tmp = realloc (bm->bmp, newlen);
  if ((tmp == NULL && newlen > 0) || bit < bm->len)
    FATAL ("Unable to realloc bitmap hash value %u %u", newlen, bm->len);

  LOG_DEBUG (("bit: %d, bm->len: %d, oldlen: %d, newlen: %d\n", bit, bm->len, oldlen, newlen));
  memset (tmp + bitmap_word (bm->len), 0, (newlen - oldlen));
  bm->len = bit;
  bm->bmp = tmp;

  return 0;
}

bitmap *
bitmap_copy (const bitmap * bm) {
  bitmap *ret;

  if (!bm)
    return NULL;
  if (!(ret = bitmap_create (bm->len)))
    return NULL;

  memcpy (ret->bmp, bm->bmp, bitmap_sizeof (bm->len));

  return ret;
}

int
bitmap_key_exists (bitmap * bm, uint32_t bit) {
  if (bm->len < bit)
    bitmap_realloc (bm, bit);


  if (bitmap_get_bit (bm->bmp, bit - 1))
    return 1;
  bitmap_set_bit (bm->bmp, bit - 1);

  return 0;
}
