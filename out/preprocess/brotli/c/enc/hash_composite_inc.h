# 0 "project/brotli/c/enc/hash_composite_inc.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/brotli/c/enc/hash_composite_inc.h"
# 18 "project/brotli/c/enc/hash_composite_inc.h"
static BROTLI_INLINE size_t FN(HashTypeLength)(void) {
  size_t a = EXPAND_CAT(HashTypeLength, HASHER_A)();
  size_t b = EXPAND_CAT(HashTypeLength, HASHER_B)();
  return a > b ? a : b;
}

static BROTLI_INLINE size_t FN(StoreLookahead)(void) {
  size_t a = EXPAND_CAT(StoreLookahead, HASHER_A)();
  size_t b = EXPAND_CAT(StoreLookahead, HASHER_B)();
  return a > b ? a : b;
}

typedef struct HASHER() {
  HASHER_A ha;
  HASHER_B hb;
  HasherCommon hb_common;


  void* extra;
  HasherCommon* common;

  BROTLI_BOOL fresh;
  const BrotliEncoderParams* params;
} HASHER();

static void FN(Initialize)(HasherCommon* common,
    HASHER()* BROTLI_RESTRICT self, const BrotliEncoderParams* params) {
  self->common = common;
  self->extra = common->extra;

  self->hb_common = *self->common;
  self->fresh = BROTLI_TRUE;
  self->params = params;




}

static void FN(Prepare)(
    HASHER()* BROTLI_RESTRICT self, BROTLI_BOOL one_shot,
    size_t input_size, const uint8_t* BROTLI_RESTRICT data) {
  if (self->fresh) {
    self->fresh = BROTLI_FALSE;
    self->hb_common.extra = (uint8_t*)self->extra +
        EXPAND_CAT(HashMemAllocInBytes, HASHER_A)(self->params, one_shot, input_size);

    EXPAND_CAT(Initialize, HASHER_A)(self->common, &self->ha, self->params);
    EXPAND_CAT(Initialize, HASHER_B)(&self->hb_common, &self->hb, self->params);
  }
  EXPAND_CAT(Prepare, HASHER_A)(&self->ha, one_shot, input_size, data);
  EXPAND_CAT(Prepare, HASHER_B)(&self->hb, one_shot, input_size, data);
}

static BROTLI_INLINE size_t FN(HashMemAllocInBytes)(
    const BrotliEncoderParams* params, BROTLI_BOOL one_shot,
    size_t input_size) {
  return EXPAND_CAT(HashMemAllocInBytes, HASHER_A)(params, one_shot, input_size) +
      EXPAND_CAT(HashMemAllocInBytes, HASHER_B)(params, one_shot, input_size);
}

static BROTLI_INLINE void FN(Store)(HASHER()* BROTLI_RESTRICT self,
    const uint8_t* BROTLI_RESTRICT data, const size_t mask, const size_t ix) {
  EXPAND_CAT(Store, HASHER_A)(&self->ha, data, mask, ix);
  EXPAND_CAT(Store, HASHER_B)(&self->hb, data, mask, ix);
}

static BROTLI_INLINE void FN(StoreRange)(
    HASHER()* BROTLI_RESTRICT self, const uint8_t* BROTLI_RESTRICT data,
    const size_t mask, const size_t ix_start,
    const size_t ix_end) {
  EXPAND_CAT(StoreRange, HASHER_A)(&self->ha, data, mask, ix_start, ix_end);
  EXPAND_CAT(StoreRange, HASHER_B)(&self->hb, data, mask, ix_start, ix_end);
}

static BROTLI_INLINE void FN(StitchToPreviousBlock)(
    HASHER()* BROTLI_RESTRICT self,
    size_t num_bytes, size_t position, const uint8_t* ringbuffer,
    size_t ring_buffer_mask) {
  EXPAND_CAT(StitchToPreviousBlock, HASHER_A)(&self->ha, num_bytes, position,
      ringbuffer, ring_buffer_mask);
  EXPAND_CAT(StitchToPreviousBlock, HASHER_B)(&self->hb, num_bytes, position,
      ringbuffer, ring_buffer_mask);
}

static BROTLI_INLINE void FN(PrepareDistanceCache)(
    HASHER()* BROTLI_RESTRICT self, int* BROTLI_RESTRICT distance_cache) {
  EXPAND_CAT(PrepareDistanceCache, HASHER_A)(&self->ha, distance_cache);
  EXPAND_CAT(PrepareDistanceCache, HASHER_B)(&self->hb, distance_cache);
}

static BROTLI_INLINE void FN(FindLongestMatch)(
    HASHER()* BROTLI_RESTRICT self,
    const BrotliEncoderDictionary* dictionary,
    const uint8_t* BROTLI_RESTRICT data, const size_t ring_buffer_mask,
    const int* BROTLI_RESTRICT distance_cache, const size_t cur_ix,
    const size_t max_length, const size_t max_backward,
    const size_t dictionary_distance, const size_t max_distance,
    HasherSearchResult* BROTLI_RESTRICT out) {
  EXPAND_CAT(FindLongestMatch, HASHER_A)(&self->ha, dictionary, data, ring_buffer_mask,
      distance_cache, cur_ix, max_length, max_backward, dictionary_distance,
      max_distance, out);
  EXPAND_CAT(FindLongestMatch, HASHER_B)(&self->hb, dictionary, data, ring_buffer_mask,
      distance_cache, cur_ix, max_length, max_backward, dictionary_distance,
      max_distance, out);
}
