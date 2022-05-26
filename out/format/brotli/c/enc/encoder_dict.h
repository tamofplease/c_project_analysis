# 1 "project/brotli/c/enc/encoder_dict.h"






#ifndef BROTLI_ENC_ENCODER_DICT_H_
#define BROTLI_ENC_ENCODER_DICT_H_ 

#include "../common/dictionary.h"
#include "../common/platform.h"
#include <brotli/types.h>
#include "./static_dict_lut.h"

#if defined(__cplusplus) || defined(c_plusplus)
extern "C" {
#endif


typedef struct BrotliEncoderDictionary {
  const BrotliDictionary* words;
  uint32_t num_transforms;


  uint32_t cutoffTransformsCount;
  uint64_t cutoffTransforms;


  const uint16_t* hash_table_words;
  const uint8_t* hash_table_lengths;


  const uint16_t* buckets;
  const DictWord* dict_words;
} BrotliEncoderDictionary;

BROTLI_INTERNAL void BrotliInitEncoderDictionary(BrotliEncoderDictionary* dict);

#if defined(__cplusplus) || defined(c_plusplus)
}
#endif

#endif
