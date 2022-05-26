# 1 "project/brotli/c/dec/huffman.h"
# 9 "project/brotli/c/dec/huffman.h"
#ifndef BROTLI_DEC_HUFFMAN_H_
#define BROTLI_DEC_HUFFMAN_H_ 

#include "../common/platform.h"
#include <brotli/types.h>

#if defined(__cplusplus) || defined(c_plusplus)
extern "C" {
#endif

#define BROTLI_HUFFMAN_MAX_CODE_LENGTH 15


#define BROTLI_HUFFMAN_MAX_SIZE_26 396

#define BROTLI_HUFFMAN_MAX_SIZE_258 632

#define BROTLI_HUFFMAN_MAX_SIZE_272 646

#define BROTLI_HUFFMAN_MAX_CODE_LENGTH_CODE_LENGTH 5

#if ((defined(BROTLI_TARGET_ARMV7) || defined(BROTLI_TARGET_ARMV8_32)) && \
  BROTLI_GNUC_HAS_ATTRIBUTE(aligned, 2, 7, 0))
#define BROTLI_HUFFMAN_CODE_FAST_LOAD 
#endif

#if !defined(BROTLI_HUFFMAN_CODE_FAST_LOAD)


typedef struct {
  uint8_t bits;
  uint16_t value;
} HuffmanCode;

static BROTLI_INLINE HuffmanCode ConstructHuffmanCode(const uint8_t bits,
    const uint16_t value) {
  HuffmanCode h;
  h.bits = bits;
  h.value = value;
  return h;
}
# 66 "project/brotli/c/dec/huffman.h"
#define BROTLI_HC_MARK_TABLE_FOR_FAST_LOAD(H) 
#define BROTLI_HC_ADJUST_TABLE_INDEX(H,V) H += (V)


#define BROTLI_HC_FAST_LOAD_BITS(H) (H->bits)
#define BROTLI_HC_FAST_LOAD_VALUE(H) (H->value)

#else

typedef BROTLI_ALIGNED(4) uint32_t HuffmanCode;

static BROTLI_INLINE HuffmanCode ConstructHuffmanCode(const uint8_t bits,
    const uint16_t value) {
  return (HuffmanCode) ((value & 0xFFFF) << 16) | (bits & 0xFF);
}

#define BROTLI_HC_MARK_TABLE_FOR_FAST_LOAD(H) uint32_t __fastload_ ##H = (*H)
#define BROTLI_HC_ADJUST_TABLE_INDEX(H,V) H += (V); __fastload_ ##H = (*H)


#define BROTLI_HC_FAST_LOAD_BITS(H) ((__fastload_ ##H) & 0xFF)
#define BROTLI_HC_FAST_LOAD_VALUE(H) ((__fastload_ ##H) >> 16)
#endif


BROTLI_INTERNAL void BrotliBuildCodeLengthsHuffmanTable(HuffmanCode* root_table,
    const uint8_t* const code_lengths, uint16_t* count);



BROTLI_INTERNAL uint32_t BrotliBuildHuffmanTable(HuffmanCode* root_table,
    int root_bits, const uint16_t* const symbol_lists, uint16_t* count);





BROTLI_INTERNAL uint32_t BrotliBuildSimpleHuffmanTable(HuffmanCode* table,
    int root_bits, uint16_t* symbols, uint32_t num_symbols);




typedef struct {
  HuffmanCode** htrees;
  HuffmanCode* codes;
  uint16_t alphabet_size_max;
  uint16_t alphabet_size_limit;
  uint16_t num_htrees;
} HuffmanTreeGroup;

#if defined(__cplusplus) || defined(c_plusplus)
}
#endif

#endif
