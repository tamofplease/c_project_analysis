# 1 "project/brotli/c/enc/params.h"
# 9 "project/brotli/c/enc/params.h"
#ifndef BROTLI_ENC_PARAMS_H_
#define BROTLI_ENC_PARAMS_H_ 

#include <brotli/encode.h>
#include "./encoder_dict.h"

typedef struct BrotliHasherParams {
  int type;
  int bucket_bits;
  int block_bits;
  int hash_len;
  int num_last_distances_to_check;
} BrotliHasherParams;

typedef struct BrotliDistanceParams {
  uint32_t distance_postfix_bits;
  uint32_t num_direct_distance_codes;
  uint32_t alphabet_size_max;
  uint32_t alphabet_size_limit;
  size_t max_distance;
} BrotliDistanceParams;


typedef struct BrotliEncoderParams {
  BrotliEncoderMode mode;
  int quality;
  int lgwin;
  int lgblock;
  size_t stream_offset;
  size_t size_hint;
  BROTLI_BOOL disable_literal_context_modeling;
  BROTLI_BOOL large_window;
  BrotliHasherParams hasher;
  BrotliDistanceParams dist;
  BrotliEncoderDictionary dictionary;
} BrotliEncoderParams;

#endif
