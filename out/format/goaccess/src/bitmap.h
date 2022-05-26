# 1 "project/goaccess/src/bitmap.h"
# 31 "project/goaccess/src/bitmap.h"
#ifndef BITMAP_H_INCLUDED
#define BITMAP_H_INCLUDED 

#include <limits.h>

typedef uint32_t word_t;
enum { BITS_PER_WORD = sizeof (word_t) * CHAR_BIT };
#define WORD_OFFSET(b) ((b) / BITS_PER_WORD)
#define BIT_OFFSET(b) ((b) % BITS_PER_WORD)

typedef struct bitmap_ {
  uint32_t *bmp;
  uint32_t len;
} bitmap;

static inline uint32_t
bitmap_word (uint32_t i) {
  return (((i) + (BITS_PER_WORD) - 1) / (BITS_PER_WORD));
}

#define BITMAP_FOREACH(bm,pos,code) { size_t __k; \
  int __r; uint32_t __bitset, __t; \
  uint32_t __len = bitmap_word(bm->len); \
  for (__k = 0; __k < __len; ++__k) { \
    __bitset = bm->bmp[__k]; \
    while (__bitset != 0) { \
      __t = __bitset & -__bitset; \
      __r = __builtin_ctzl (__bitset); \
      pos = (__k * 32) + __r + 1; \
      code; \
      __bitset ^= __t; \
    } \
  } }

bitmap *bitmap_copy (const bitmap * bm);
bitmap *bitmap_create (uint32_t bit);
int bitmap_get_bit (word_t * words, uint32_t n);
int bitmap_key_exists (bitmap * bm, uint32_t bit);
int bitmap_realloc (bitmap * bm, uint32_t bit);
int bitmap_set_bit (word_t * words, uint32_t n);
uint32_t bitmap_count_set (const bitmap * bm);
uint32_t bitmap_ffs (bitmap * bm);
uint32_t bitmap_sizeof (uint32_t nbits);
void free_bitmap (bitmap * bm);

#endif
