# 1 "project/brotli/c/enc/quality.h"
# 10 "project/brotli/c/enc/quality.h"
#ifndef BROTLI_ENC_QUALITY_H_
#define BROTLI_ENC_QUALITY_H_ 

#include "../common/platform.h"
#include <brotli/encode.h>
#include "./params.h"

#define FAST_ONE_PASS_COMPRESSION_QUALITY 0
#define FAST_TWO_PASS_COMPRESSION_QUALITY 1
#define ZOPFLIFICATION_QUALITY 10
#define HQ_ZOPFLIFICATION_QUALITY 11

#define MAX_QUALITY_FOR_STATIC_ENTROPY_CODES 2
#define MIN_QUALITY_FOR_BLOCK_SPLIT 4
#define MIN_QUALITY_FOR_NONZERO_DISTANCE_PARAMS 4
#define MIN_QUALITY_FOR_OPTIMIZE_HISTOGRAMS 4
#define MIN_QUALITY_FOR_EXTENSIVE_REFERENCE_SEARCH 5
#define MIN_QUALITY_FOR_CONTEXT_MODELING 5
#define MIN_QUALITY_FOR_HQ_CONTEXT_MODELING 7
#define MIN_QUALITY_FOR_HQ_BLOCK_SPLITTING 10



#define MAX_NUM_DELAYED_SYMBOLS 0x2FFF


static BROTLI_INLINE size_t MaxHashTableSize(int quality) {
  return quality == FAST_ONE_PASS_COMPRESSION_QUALITY ? 1 << 15 : 1 << 17;
}


#define MAX_ZOPFLI_LEN_QUALITY_10 150
#define MAX_ZOPFLI_LEN_QUALITY_11 325


#define BROTLI_LONG_COPY_QUICK_STEP 16384

static BROTLI_INLINE size_t MaxZopfliLen(const BrotliEncoderParams* params) {
  return params->quality <= 10 ?
      MAX_ZOPFLI_LEN_QUALITY_10 :
      MAX_ZOPFLI_LEN_QUALITY_11;
}


static BROTLI_INLINE size_t MaxZopfliCandidates(
  const BrotliEncoderParams* params) {
  return params->quality <= 10 ? 1 : 5;
}

static BROTLI_INLINE void SanitizeParams(BrotliEncoderParams* params) {
  params->quality = BROTLI_MIN(int, BROTLI_MAX_QUALITY,
      BROTLI_MAX(int, BROTLI_MIN_QUALITY, params->quality));
  if (params->quality <= MAX_QUALITY_FOR_STATIC_ENTROPY_CODES) {
    params->large_window = BROTLI_FALSE;
  }
  if (params->lgwin < BROTLI_MIN_WINDOW_BITS) {
    params->lgwin = BROTLI_MIN_WINDOW_BITS;
  } else {
    int max_lgwin = params->large_window ? BROTLI_LARGE_MAX_WINDOW_BITS :
                                           BROTLI_MAX_WINDOW_BITS;
    if (params->lgwin > max_lgwin) params->lgwin = max_lgwin;
  }
}


static BROTLI_INLINE int ComputeLgBlock(const BrotliEncoderParams* params) {
  int lgblock = params->lgblock;
  if (params->quality == FAST_ONE_PASS_COMPRESSION_QUALITY ||
      params->quality == FAST_TWO_PASS_COMPRESSION_QUALITY) {
    lgblock = params->lgwin;
  } else if (params->quality < MIN_QUALITY_FOR_BLOCK_SPLIT) {
    lgblock = 14;
  } else if (lgblock == 0) {
    lgblock = 16;
    if (params->quality >= 9 && params->lgwin > lgblock) {
      lgblock = BROTLI_MIN(int, 18, params->lgwin);
    }
  } else {
    lgblock = BROTLI_MIN(int, BROTLI_MAX_INPUT_BLOCK_BITS,
        BROTLI_MAX(int, BROTLI_MIN_INPUT_BLOCK_BITS, lgblock));
  }
  return lgblock;
}






static BROTLI_INLINE int ComputeRbBits(const BrotliEncoderParams* params) {
  return 1 + BROTLI_MAX(int, params->lgwin, params->lgblock);
}

static BROTLI_INLINE size_t MaxMetablockSize(
    const BrotliEncoderParams* params) {
  int bits =
      BROTLI_MIN(int, ComputeRbBits(params), BROTLI_MAX_INPUT_BLOCK_BITS);
  return (size_t)1 << bits;
}







static BROTLI_INLINE size_t LiteralSpreeLengthForSparseSearch(
    const BrotliEncoderParams* params) {
  return params->quality < 9 ? 64 : 512;
}

static BROTLI_INLINE void ChooseHasher(const BrotliEncoderParams* params,
                                       BrotliHasherParams* hparams) {
  if (params->quality > 9) {
    hparams->type = 10;
  } else if (params->quality == 4 && params->size_hint >= (1 << 20)) {
    hparams->type = 54;
  } else if (params->quality < 5) {
    hparams->type = params->quality;
  } else if (params->lgwin <= 16) {
    hparams->type = params->quality < 7 ? 40 : params->quality < 9 ? 41 : 42;
  } else if (params->size_hint >= (1 << 20) && params->lgwin >= 19) {
    hparams->type = 6;
    hparams->block_bits = params->quality - 1;
    hparams->bucket_bits = 15;
    hparams->hash_len = 5;
    hparams->num_last_distances_to_check =
        params->quality < 7 ? 4 : params->quality < 9 ? 10 : 16;
  } else {
    hparams->type = 5;
    hparams->block_bits = params->quality - 1;
    hparams->bucket_bits = params->quality < 7 ? 14 : 15;
    hparams->num_last_distances_to_check =
        params->quality < 7 ? 4 : params->quality < 9 ? 10 : 16;
  }

  if (params->lgwin > 24) {






    if (hparams->type == 3) {
      hparams->type = 35;
    }
    if (hparams->type == 54) {
      hparams->type = 55;
    }
    if (hparams->type == 6) {
      hparams->type = 65;
    }
  }
}

#endif
