# 1 "project/brotli/c/enc/hash_forgetful_chain_inc.h"
# 18 "project/brotli/c/enc/hash_forgetful_chain_inc.h"
#define HashForgetfulChain HASHER()

#define BANK_SIZE (1 << BANK_BITS)


#define BUCKET_SIZE (1 << BUCKET_BITS)

#define CAPPED_CHAINS 0

static BROTLI_INLINE size_t FN(HashTypeLength)(void) { return 4; }
static BROTLI_INLINE size_t FN(StoreLookahead)(void) { return 4; }


static BROTLI_INLINE size_t FN(HashBytes)(const uint8_t* BROTLI_RESTRICT data) {
  const uint32_t h = BROTLI_UNALIGNED_LOAD32LE(data) * kHashMul32;


  return h >> (32 - BUCKET_BITS);
}

typedef struct FN(Slot) {
  uint16_t delta;
  uint16_t next;
} FN(Slot);

typedef struct FN(Bank) {
  FN(Slot) slots[BANK_SIZE];
} FN(Bank);

typedef struct HashForgetfulChain {
  uint16_t free_slot_idx[NUM_BANKS];
  size_t max_hops;


  void* extra;
  HasherCommon* common;
# 65 "project/brotli/c/enc/hash_forgetful_chain_inc.h"
} HashForgetfulChain;

static uint32_t* FN(Addr)(void* extra) {
  return (uint32_t*)extra;
}

static uint16_t* FN(Head)(void* extra) {
  return (uint16_t*)(&FN(Addr)(extra)[BUCKET_SIZE]);
}

static uint8_t* FN(TinyHash)(void* extra) {
  return (uint8_t*)(&FN(Head)(extra)[BUCKET_SIZE]);
}

static FN(Bank)* FN(Banks)(void* extra) {
  return (FN(Bank)*)(&FN(TinyHash)(extra)[65536]);
}

static void FN(Initialize)(
    HasherCommon* common, HashForgetfulChain* BROTLI_RESTRICT self,
    const BrotliEncoderParams* params) {
  self->common = common;
  self->extra = common->extra;

  self->max_hops = (params->quality > 6 ? 7u : 8u) << (params->quality - 4);
}

static void FN(Prepare)(
    HashForgetfulChain* BROTLI_RESTRICT self, BROTLI_BOOL one_shot,
    size_t input_size, const uint8_t* BROTLI_RESTRICT data) {
  uint32_t* BROTLI_RESTRICT addr = FN(Addr)(self->extra);
  uint16_t* BROTLI_RESTRICT head = FN(Head)(self->extra);
  uint8_t* BROTLI_RESTRICT tiny_hash = FN(TinyHash)(self->extra);

  size_t partial_prepare_threshold = BUCKET_SIZE >> 6;
  if (one_shot && input_size <= partial_prepare_threshold) {
    size_t i;
    for (i = 0; i < input_size; ++i) {
      size_t bucket = FN(HashBytes)(&data[i]);

      addr[bucket] = 0xCCCCCCCC;
      head[bucket] = 0xCCCC;
    }
  } else {



    memset(addr, 0xCC, sizeof(uint32_t) * BUCKET_SIZE);
    memset(head, 0, sizeof(uint16_t) * BUCKET_SIZE);
  }
  memset(tiny_hash, 0, sizeof(uint8_t) * 65536);
  memset(self->free_slot_idx, 0, sizeof(self->free_slot_idx));
}

static BROTLI_INLINE size_t FN(HashMemAllocInBytes)(
    const BrotliEncoderParams* params, BROTLI_BOOL one_shot,
    size_t input_size) {
  BROTLI_UNUSED(params);
  BROTLI_UNUSED(one_shot);
  BROTLI_UNUSED(input_size);
  return sizeof(uint32_t) * BUCKET_SIZE + sizeof(uint16_t) * BUCKET_SIZE +
         sizeof(uint8_t) * 65536 + sizeof(FN(Bank)) * NUM_BANKS;
}



static BROTLI_INLINE void FN(Store)(HashForgetfulChain* BROTLI_RESTRICT self,
    const uint8_t* BROTLI_RESTRICT data, const size_t mask, const size_t ix) {
  uint32_t* BROTLI_RESTRICT addr = FN(Addr)(self->extra);
  uint16_t* BROTLI_RESTRICT head = FN(Head)(self->extra);
  uint8_t* BROTLI_RESTRICT tiny_hash = FN(TinyHash)(self->extra);
  FN(Bank)* BROTLI_RESTRICT banks = FN(Banks)(self->extra);
  const size_t key = FN(HashBytes)(&data[ix & mask]);
  const size_t bank = key & (NUM_BANKS - 1);
  const size_t idx = self->free_slot_idx[bank]++ & (BANK_SIZE - 1);
  size_t delta = ix - addr[key];
  tiny_hash[(uint16_t)ix] = (uint8_t)key;
  if (delta > 0xFFFF) delta = CAPPED_CHAINS ? 0 : 0xFFFF;
  banks[bank].slots[idx].delta = (uint16_t)delta;
  banks[bank].slots[idx].next = head[key];
  addr[key] = (uint32_t)ix;
  head[key] = (uint16_t)idx;
}

static BROTLI_INLINE void FN(StoreRange)(
    HashForgetfulChain* BROTLI_RESTRICT self,
    const uint8_t* BROTLI_RESTRICT data, const size_t mask,
    const size_t ix_start, const size_t ix_end) {
  size_t i;
  for (i = ix_start; i < ix_end; ++i) {
    FN(Store)(self, data, mask, i);
  }
}

static BROTLI_INLINE void FN(StitchToPreviousBlock)(
    HashForgetfulChain* BROTLI_RESTRICT self,
    size_t num_bytes, size_t position, const uint8_t* ringbuffer,
    size_t ring_buffer_mask) {
  if (num_bytes >= FN(HashTypeLength)() - 1 && position >= 3) {



    FN(Store)(self, ringbuffer, ring_buffer_mask, position - 3);
    FN(Store)(self, ringbuffer, ring_buffer_mask, position - 2);
    FN(Store)(self, ringbuffer, ring_buffer_mask, position - 1);
  }
}

static BROTLI_INLINE void FN(PrepareDistanceCache)(
    HashForgetfulChain* BROTLI_RESTRICT self,
    int* BROTLI_RESTRICT distance_cache) {
  BROTLI_UNUSED(self);
  PrepareDistanceCache(distance_cache, NUM_LAST_DISTANCES_TO_CHECK);
}
# 191 "project/brotli/c/enc/hash_forgetful_chain_inc.h"
static BROTLI_INLINE void FN(FindLongestMatch)(
    HashForgetfulChain* BROTLI_RESTRICT self,
    const BrotliEncoderDictionary* dictionary,
    const uint8_t* BROTLI_RESTRICT data, const size_t ring_buffer_mask,
    const int* BROTLI_RESTRICT distance_cache,
    const size_t cur_ix, const size_t max_length, const size_t max_backward,
    const size_t dictionary_distance, const size_t max_distance,
    HasherSearchResult* BROTLI_RESTRICT out) {
  uint32_t* BROTLI_RESTRICT addr = FN(Addr)(self->extra);
  uint16_t* BROTLI_RESTRICT head = FN(Head)(self->extra);
  uint8_t* BROTLI_RESTRICT tiny_hashes = FN(TinyHash)(self->extra);
  FN(Bank)* BROTLI_RESTRICT banks = FN(Banks)(self->extra);
  const size_t cur_ix_masked = cur_ix & ring_buffer_mask;

  score_t min_score = out->score;
  score_t best_score = out->score;
  size_t best_len = out->len;
  size_t i;
  const size_t key = FN(HashBytes)(&data[cur_ix_masked]);
  const uint8_t tiny_hash = (uint8_t)(key);
  out->len = 0;
  out->len_code_delta = 0;

  for (i = 0; i < NUM_LAST_DISTANCES_TO_CHECK; ++i) {
    const size_t backward = (size_t)distance_cache[i];
    size_t prev_ix = (cur_ix - backward);

    if (i > 0 && tiny_hashes[(uint16_t)prev_ix] != tiny_hash) continue;
    if (prev_ix >= cur_ix || backward > max_backward) {
      continue;
    }
    prev_ix &= ring_buffer_mask;
    {
      const size_t len = FindMatchLengthWithLimit(&data[prev_ix],
                                                  &data[cur_ix_masked],
                                                  max_length);
      if (len >= 2) {
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
    const size_t bank = key & (NUM_BANKS - 1);
    size_t backward = 0;
    size_t hops = self->max_hops;
    size_t delta = cur_ix - addr[key];
    size_t slot = head[key];
    while (hops--) {
      size_t prev_ix;
      size_t last = slot;
      backward += delta;
      if (backward > max_backward || (CAPPED_CHAINS && !delta)) break;
      prev_ix = (cur_ix - backward) & ring_buffer_mask;
      slot = banks[bank].slots[last].next;
      delta = banks[bank].slots[last].delta;
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
    FN(Store)(self, data, ring_buffer_mask, cur_ix);
  }
  if (out->score == min_score) {
    SearchInStaticDictionary(dictionary,
        self->common, &data[cur_ix_masked], max_length, dictionary_distance,
        max_distance, out, BROTLI_FALSE);
  }
}

#undef BANK_SIZE
#undef BUCKET_SIZE
#undef CAPPED_CHAINS

#undef HashForgetfulChain
