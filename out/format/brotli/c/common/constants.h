# 1 "project/brotli/c/common/constants.h"
# 12 "project/brotli/c/common/constants.h"
#ifndef BROTLI_COMMON_CONSTANTS_H_
#define BROTLI_COMMON_CONSTANTS_H_ 

#include "./platform.h"
#include <brotli/port.h>
#include <brotli/types.h>


#define BROTLI_CONTEXT_MAP_MAX_RLE 16


#define BROTLI_MAX_NUMBER_OF_BLOCK_TYPES 256


#define BROTLI_NUM_LITERAL_SYMBOLS 256
#define BROTLI_NUM_COMMAND_SYMBOLS 704
#define BROTLI_NUM_BLOCK_LEN_SYMBOLS 26
#define BROTLI_MAX_CONTEXT_MAP_SYMBOLS (BROTLI_MAX_NUMBER_OF_BLOCK_TYPES + \
                                        BROTLI_CONTEXT_MAP_MAX_RLE)
#define BROTLI_MAX_BLOCK_TYPE_SYMBOLS (BROTLI_MAX_NUMBER_OF_BLOCK_TYPES + 2)


#define BROTLI_REPEAT_PREVIOUS_CODE_LENGTH 16
#define BROTLI_REPEAT_ZERO_CODE_LENGTH 17
#define BROTLI_CODE_LENGTH_CODES (BROTLI_REPEAT_ZERO_CODE_LENGTH + 1)

#define BROTLI_INITIAL_REPEATED_CODE_LENGTH 8
# 50 "project/brotli/c/common/constants.h"
#define BROTLI_LARGE_MAX_DISTANCE_BITS 62U
#define BROTLI_LARGE_MIN_WBITS 10





#define BROTLI_LARGE_MAX_WBITS 30


#define BROTLI_NUM_DISTANCE_SHORT_CODES 16





#define BROTLI_MAX_NPOSTFIX 3
#define BROTLI_MAX_NDIRECT 120
#define BROTLI_MAX_DISTANCE_BITS 24U
#define BROTLI_DISTANCE_ALPHABET_SIZE(NPOSTFIX,NDIRECT,MAXNBITS) ( \
    BROTLI_NUM_DISTANCE_SHORT_CODES + (NDIRECT) + \
    ((MAXNBITS) << ((NPOSTFIX) + 1)))

#define BROTLI_NUM_DISTANCE_SYMBOLS \
    BROTLI_DISTANCE_ALPHABET_SIZE( \
        BROTLI_MAX_NDIRECT, BROTLI_MAX_NPOSTFIX, BROTLI_LARGE_MAX_DISTANCE_BITS)




#define BROTLI_MAX_DISTANCE 0x3FFFFFC





#define BROTLI_MAX_ALLOWED_DISTANCE 0x7FFFFFFC



#define BROTLI_NUM_INS_COPY_CODES 24



#define BROTLI_LITERAL_CONTEXT_BITS 6


#define BROTLI_DISTANCE_CONTEXT_BITS 2




#define BROTLI_WINDOW_GAP 16
#define BROTLI_MAX_BACKWARD_LIMIT(W) (((size_t)1 << (W)) - BROTLI_WINDOW_GAP)

typedef struct BrotliDistanceCodeLimit {
  uint32_t max_alphabet_size;
  uint32_t max_distance;
} BrotliDistanceCodeLimit;
# 127 "project/brotli/c/common/constants.h"
BROTLI_UNUSED_FUNCTION BrotliDistanceCodeLimit BrotliCalculateDistanceCodeLimit(
    uint32_t max_distance, uint32_t npostfix, uint32_t ndirect) {
  BrotliDistanceCodeLimit result;


  BROTLI_UNUSED(&BrotliCalculateDistanceCodeLimit);
  if (max_distance <= ndirect) {

    result.max_alphabet_size = max_distance + BROTLI_NUM_DISTANCE_SHORT_CODES;
    result.max_distance = max_distance;
    return result;
  } else {

    uint32_t forbidden_distance = max_distance + 1;

    uint32_t offset = forbidden_distance - ndirect - 1;
    uint32_t ndistbits = 0;
    uint32_t tmp;
    uint32_t half;
    uint32_t group;

    uint32_t postfix = (1u << npostfix) - 1;
    uint32_t extra;
    uint32_t start;

    offset = (offset >> npostfix) + 4;

    tmp = offset / 2;

    while (tmp != 0) {ndistbits++; tmp = tmp >> 1;}

    ndistbits--;

    half = (offset >> ndistbits) & 1;

    group = ((ndistbits - 1) << 1) | half;

    if (group == 0) {

      result.max_alphabet_size = ndirect + BROTLI_NUM_DISTANCE_SHORT_CODES;
      result.max_distance = ndirect;
      return result;
    }

    group--;

    ndistbits = (group >> 1) + 1;

    extra = (1u << ndistbits) - 1;

    start = (1u << (ndistbits + 1)) - 4;

    start += (group & 1) << ndistbits;

    result.max_alphabet_size = ((group << npostfix) | postfix) + ndirect +
        BROTLI_NUM_DISTANCE_SHORT_CODES + 1;

    result.max_distance = ((start + extra) << npostfix) + postfix + ndirect + 1;
    return result;
  }
}



typedef struct {
  uint16_t offset;
  uint8_t nbits;
} BrotliPrefixCodeRange;


BROTLI_COMMON_API extern const BrotliPrefixCodeRange
    _kBrotliPrefixCodeRanges[BROTLI_NUM_BLOCK_LEN_SYMBOLS];

#endif
