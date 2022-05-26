# 1 "project/brotli/c/enc/find_match_length.h"
# 9 "project/brotli/c/enc/find_match_length.h"
#ifndef BROTLI_ENC_FIND_MATCH_LENGTH_H_
#define BROTLI_ENC_FIND_MATCH_LENGTH_H_ 

#include "../common/platform.h"
#include <brotli/types.h>

#if defined(__cplusplus) || defined(c_plusplus)
extern "C" {
#endif


#if defined(BROTLI_TZCNT64) && BROTLI_64_BITS && BROTLI_LITTLE_ENDIAN
static BROTLI_INLINE size_t FindMatchLengthWithLimit(const uint8_t* s1,
                                                     const uint8_t* s2,
                                                     size_t limit) {
  size_t matched = 0;
  size_t limit2 = (limit >> 3) + 1;
  while (BROTLI_PREDICT_TRUE(--limit2)) {
    if (BROTLI_PREDICT_FALSE(BROTLI_UNALIGNED_LOAD64LE(s2) ==
                      BROTLI_UNALIGNED_LOAD64LE(s1 + matched))) {
      s2 += 8;
      matched += 8;
    } else {
      uint64_t x = BROTLI_UNALIGNED_LOAD64LE(s2) ^
          BROTLI_UNALIGNED_LOAD64LE(s1 + matched);
      size_t matching_bits = (size_t)BROTLI_TZCNT64(x);
      matched += matching_bits >> 3;
      return matched;
    }
  }
  limit = (limit & 7) + 1;
  while (--limit) {
    if (BROTLI_PREDICT_TRUE(s1[matched] == *s2)) {
      ++s2;
      ++matched;
    } else {
      return matched;
    }
  }
  return matched;
}
#else
static BROTLI_INLINE size_t FindMatchLengthWithLimit(const uint8_t* s1,
                                                     const uint8_t* s2,
                                                     size_t limit) {
  size_t matched = 0;
  const uint8_t* s2_limit = s2 + limit;
  const uint8_t* s2_ptr = s2;




  while (s2_ptr <= s2_limit - 4 &&
         BrotliUnalignedRead32(s2_ptr) ==
         BrotliUnalignedRead32(s1 + matched)) {
    s2_ptr += 4;
    matched += 4;
  }
  while ((s2_ptr < s2_limit) && (s1[matched] == *s2_ptr)) {
    ++s2_ptr;
    ++matched;
  }
  return matched;
}
#endif

#if defined(__cplusplus) || defined(c_plusplus)
}
#endif

#endif
