# 1 "project/brotli/c/enc/entropy_encode.h"
# 9 "project/brotli/c/enc/entropy_encode.h"
#ifndef BROTLI_ENC_ENTROPY_ENCODE_H_
#define BROTLI_ENC_ENTROPY_ENCODE_H_ 

#include "../common/platform.h"
#include <brotli/types.h>

#if defined(__cplusplus) || defined(c_plusplus)
extern "C" {
#endif


typedef struct HuffmanTree {
  uint32_t total_count_;
  int16_t index_left_;
  int16_t index_right_or_value_;
} HuffmanTree;

static BROTLI_INLINE void InitHuffmanTree(HuffmanTree* self, uint32_t count,
    int16_t left, int16_t right) {
  self->total_count_ = count;
  self->index_left_ = left;
  self->index_right_or_value_ = right;
}


BROTLI_INTERNAL BROTLI_BOOL BrotliSetDepth(
    int p, HuffmanTree* pool, uint8_t* depth, int max_depth);
# 49 "project/brotli/c/enc/entropy_encode.h"
BROTLI_INTERNAL void BrotliCreateHuffmanTree(const uint32_t* data,
                                             const size_t length,
                                             const int tree_limit,
                                             HuffmanTree* tree,
                                             uint8_t* depth);
# 62 "project/brotli/c/enc/entropy_encode.h"
BROTLI_INTERNAL void BrotliOptimizeHuffmanCountsForRle(
    size_t length, uint32_t* counts, uint8_t* good_for_rle);




BROTLI_INTERNAL void BrotliWriteHuffmanTree(const uint8_t* depth,
                                            size_t num,
                                            size_t* tree_size,
                                            uint8_t* tree,
                                            uint8_t* extra_bits_data);


BROTLI_INTERNAL void BrotliConvertBitDepthsToSymbols(const uint8_t* depth,
                                                     size_t len,
                                                     uint16_t* bits);

BROTLI_INTERNAL extern const size_t kBrotliShellGaps[6];

typedef BROTLI_BOOL (*HuffmanTreeComparator)(
    const HuffmanTree*, const HuffmanTree*);
static BROTLI_INLINE void SortHuffmanTreeItems(HuffmanTree* items,
    const size_t n, HuffmanTreeComparator comparator) {
  if (n < 13) {

    size_t i;
    for (i = 1; i < n; ++i) {
      HuffmanTree tmp = items[i];
      size_t k = i;
      size_t j = i - 1;
      while (comparator(&tmp, &items[j])) {
        items[k] = items[j];
        k = j;
        if (!j--) break;
      }
      items[k] = tmp;
    }
    return;
  } else {

    int g = n < 57 ? 2 : 0;
    for (; g < 6; ++g) {
      size_t gap = kBrotliShellGaps[g];
      size_t i;
      for (i = gap; i < n; ++i) {
        size_t j = i;
        HuffmanTree tmp = items[i];
        for (; j >= gap && comparator(&tmp, &items[j - gap]); j -= gap) {
          items[j] = items[j - gap];
        }
        items[j] = tmp;
      }
    }
  }
}

#if defined(__cplusplus) || defined(c_plusplus)
}
#endif

#endif
