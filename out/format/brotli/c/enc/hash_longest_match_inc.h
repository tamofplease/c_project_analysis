# 1 "project/brotli/c/enc/hash_longest_match_inc.h"
# 17 "project/brotli/c/enc/hash_longest_match_inc.h"
#define HashLongestMatch HASHER()

static BROTLI_INLINE size_t FN(HashTypeLength)(void) { return 4; }
static BROTLI_INLINE size_t FN(StoreLookahead)(void) { return 4; }


static uint32_t FN(HashBytes)(
    const uint8_t* BROTLI_RESTRICT data, const int shift) {
  uint32_t h = BROTLI_UNALIGNED_LOAD32LE(data) * kHashMul32;


  return (uint32_t)(h >> shift);
}

typedef struct HashLongestMatch {

  size_t bucket_size_;


  size_t block_size_;

  int hash_shift_;

  uint32_t block_mask_;

  int block_bits_;
  int num_last_distances_to_check_;


  HasherCommon* common_;




  uint16_t* num_;


  uint32_t* buckets_;
} HashLongestMatch;

static BROTLI_INLINE uint16_t* FN(Num)(void* extra) {
  return (uint16_t*)extra;
}

static void FN(Initialize)(
    HasherCommon* common, HashLongestMatch* BROTLI_RESTRICT self,
    const BrotliEncoderParams* params) {
  self->common_ = common;

  BROTLI_UNUSED(params);
  self->hash_shift_ = 32 - common->params.bucket_bits;
  self->bucket_size_ = (size_t)1 << common->params.bucket_bits;
  self->block_size_ = (size_t)1 << common->params.block_bits;
  self->block_mask_ = (uint32_t)(self->block_size_ - 1);
  self->num_ = (uint16_t*)common->extra;
  self->buckets_ = (uint32_t*)(&self->num_[self->bucket_size_]);
  self->block_bits_ = common->params.block_bits;
  self->num_last_distances_to_check_ =
      common->params.num_last_distances_to_check;
}

static void FN(Prepare)(
    HashLongestMatch* BROTLI_RESTRICT self, BROTLI_BOOL one_shot,
    size_t input_size, const uint8_t* BROTLI_RESTRICT data) {
  uint16_t* BROTLI_RESTRICT num = self->num_;

  size_t partial_prepare_threshold = self->bucket_size_ >> 6;
  if (one_shot && input_size <= partial_prepare_threshold) {
    size_t i;
    for (i = 0; i < input_size; ++i) {
      const uint32_t key = FN(HashBytes)(&data[i], self->hash_shift_);
      num[key] = 0;
    }
  } else {
    memset(num, 0, self->bucket_size_ * sizeof(num[0]));
  }
}

static BROTLI_INLINE size_t FN(HashMemAllocInBytes)(
    const BrotliEncoderParams* params, BROTLI_BOOL one_shot,
    size_t input_size) {
  size_t bucket_size = (size_t)1 << params->hasher.bucket_bits;
  size_t block_size = (size_t)1 << params->hasher.block_bits;
  BROTLI_UNUSED(one_shot);
  BROTLI_UNUSED(input_size);
  return sizeof(uint16_t) * bucket_size +
         sizeof(uint32_t) * bucket_size * block_size;
}



static BROTLI_INLINE void FN(Store)(
    HashLongestMatch* BROTLI_RESTRICT self, const uint8_t* BROTLI_RESTRICT data,
    const size_t mask, const size_t ix) {
  const uint32_t key = FN(HashBytes)(&data[ix & mask], self->hash_shift_);
  const size_t minor_ix = self->num_[key] & self->block_mask_;
  const size_t offset = minor_ix + (key << self->block_bits_);
  self->buckets_[offset] = (uint32_t)ix;
  ++self->num_[key];
}

static BROTLI_INLINE void FN(StoreRange)(HashLongestMatch* BROTLI_RESTRICT self,
    const uint8_t* BROTLI_RESTRICT data, const size_t mask,
    const size_t ix_start, const size_t ix_end) {
  size_t i;
  for (i = ix_start; i < ix_end; ++i) {
    FN(Store)(self, data, mask, i);
  }
}

static BROTLI_INLINE void FN(StitchToPreviousBlock)(
    HashLongestMatch* BROTLI_RESTRICT self,
    size_t num_bytes, size_t position, const uint8_t* ringbuffer,
    size_t ringbuffer_mask) {
  if (num_bytes >= FN(HashTypeLength)() - 1 && position >= 3) {



    FN(Store)(self, ringbuffer, ringbuffer_mask, position - 3);
    FN(Store)(self, ringbuffer, ringbuffer_mask, position - 2);
    FN(Store)(self, ringbuffer, ringbuffer_mask, position - 1);
  }
}

static BROTLI_INLINE void FN(PrepareDistanceCache)(
    HashLongestMatch* BROTLI_RESTRICT self,
    int* BROTLI_RESTRICT distance_cache) {
  PrepareDistanceCache(distance_cache, self->num_last_distances_to_check_);
}
# 158 "project/brotli/c/enc/hash_longest_match_inc.h"
static BROTLI_INLINE void FN(FindLongestMatch)(
    HashLongestMatch* BROTLI_RESTRICT self,
    const BrotliEncoderDictionary* dictionary,
    const uint8_t* BROTLI_RESTRICT data, const size_t ring_buffer_mask,
    const int* BROTLI_RESTRICT distance_cache, const size_t cur_ix,
    const size_t max_length, const size_t max_backward,
    const size_t dictionary_distance, const size_t max_distance,
    HasherSearchResult* BROTLI_RESTRICT out) {
  uint16_t* BROTLI_RESTRICT num = self->num_;
  uint32_t* BROTLI_RESTRICT buckets = self->buckets_;
  const size_t cur_ix_masked = cur_ix & ring_buffer_mask;

  score_t min_score = out->score;
  score_t best_score = out->score;
  size_t best_len = out->len;
  size_t i;
  out->len = 0;
  out->len_code_delta = 0;

  for (i = 0; i < (size_t)self->num_last_distances_to_check_; ++i) {
    const size_t backward = (size_t)distance_cache[i];
    size_t prev_ix = (size_t)(cur_ix - backward);
    if (prev_ix >= cur_ix) {
      continue;
    }
    if (BROTLI_PREDICT_FALSE(backward > max_backward)) {
      continue;
    }
    prev_ix &= ring_buffer_mask;

    if (cur_ix_masked + best_len > ring_buffer_mask ||
        prev_ix + best_len > ring_buffer_mask ||
        data[cur_ix_masked + best_len] != data[prev_ix + best_len]) {
      continue;
    }
    {
      const size_t len = FindMatchLengthWithLimit(&data[prev_ix],
                                                  &data[cur_ix_masked],
                                                  max_length);
      if (len >= 3 || (len == 2 && i < 2)) {



        score_t score = BackwardReferenceScoreUsingLastDistance(len);
        if (best_score < score) {
          if (i != 0) score -= BackwardReferencePenaltyUsingLastDistance(i);
          if (best_score < score) {
            best_score = score;
            best_len = len;
            out->len = best_len;
            out->distance = backward;
            out->score = best_score;
          }
        }
      }
    }
  }
  {
    const uint32_t key =
        FN(HashBytes)(&data[cur_ix_masked], self->hash_shift_);
    uint32_t* BROTLI_RESTRICT bucket = &buckets[key << self->block_bits_];
    const size_t down =
        (num[key] > self->block_size_) ? (num[key] - self->block_size_) : 0u;
    for (i = num[key]; i > down;) {
      size_t prev_ix = bucket[--i & self->block_mask_];
      const size_t backward = cur_ix - prev_ix;
      if (BROTLI_PREDICT_FALSE(backward > max_backward)) {
        break;
      }
      prev_ix &= ring_buffer_mask;
      if (cur_ix_masked + best_len > ring_buffer_mask ||
          prev_ix + best_len > ring_buffer_mask ||
          data[cur_ix_masked + best_len] != data[prev_ix + best_len]) {
        continue;
      }
      {
        const size_t len = FindMatchLengthWithLimit(&data[prev_ix],
                                                    &data[cur_ix_masked],
                                                    max_length);
        if (len >= 4) {



          score_t score = BackwardReferenceScore(len, backward);
          if (best_score < score) {
            best_score = score;
            best_len = len;
            out->len = best_len;
            out->distance = backward;
            out->score = best_score;
          }
        }
      }
    }
    bucket[num[key] & self->block_mask_] = (uint32_t)cur_ix;
    ++num[key];
  }
  if (min_score == out->score) {
    SearchInStaticDictionary(dictionary,
        self->common_, &data[cur_ix_masked], max_length, dictionary_distance,
        max_distance, out, BROTLI_FALSE);
  }
}

#undef HashLongestMatch
