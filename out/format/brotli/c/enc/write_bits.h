# 1 "project/brotli/c/enc/write_bits.h"
# 9 "project/brotli/c/enc/write_bits.h"
#ifndef BROTLI_ENC_WRITE_BITS_H_
#define BROTLI_ENC_WRITE_BITS_H_ 

#include "../common/platform.h"
#include <brotli/types.h>

#if defined(__cplusplus) || defined(c_plusplus)
extern "C" {
#endif
# 34 "project/brotli/c/enc/write_bits.h"
static BROTLI_INLINE void BrotliWriteBits(size_t n_bits,
                                          uint64_t bits,
                                          size_t* BROTLI_RESTRICT pos,
                                          uint8_t* BROTLI_RESTRICT array) {
  BROTLI_LOG(("WriteBits  %2d  0x%08x%08x  %10d\n", (int)n_bits,
      (uint32_t)(bits >> 32), (uint32_t)(bits & 0xFFFFFFFF),
      (int)*pos));
  BROTLI_DCHECK((bits >> n_bits) == 0);
  BROTLI_DCHECK(n_bits <= 56);
#if defined(BROTLI_LITTLE_ENDIAN)





  {
    uint8_t* p = &array[*pos >> 3];
    uint64_t v = (uint64_t)(*p);
    v |= bits << (*pos & 7);
    BROTLI_UNALIGNED_STORE64LE(p, v);
    *pos += n_bits;
  }
#else

  {
    uint8_t* array_pos = &array[*pos >> 3];
    const size_t bits_reserved_in_first_byte = (*pos & 7);
    size_t bits_left_to_write;
    bits <<= bits_reserved_in_first_byte;
    *array_pos++ |= (uint8_t)bits;
    for (bits_left_to_write = n_bits + bits_reserved_in_first_byte;
         bits_left_to_write >= 9;
         bits_left_to_write -= 8) {
      bits >>= 8;
      *array_pos++ = (uint8_t)bits;
    }
    *array_pos = 0;
    *pos += n_bits;
  }
#endif
}

static BROTLI_INLINE void BrotliWriteBitsPrepareStorage(
    size_t pos, uint8_t* array) {
  BROTLI_LOG(("WriteBitsPrepareStorage            %10d\n", (int)pos));
  BROTLI_DCHECK((pos & 7) == 0);
  array[pos >> 3] = 0;
}

#if defined(__cplusplus) || defined(c_plusplus)
}
#endif

#endif
