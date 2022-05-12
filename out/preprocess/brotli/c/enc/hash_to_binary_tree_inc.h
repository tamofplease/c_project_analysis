# 0 "project/brotli/c/enc/hash_to_binary_tree_inc.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/brotli/c/enc/hash_to_binary_tree_inc.h"
# 22 "project/brotli/c/enc/hash_to_binary_tree_inc.h"
static BROTLI_INLINE size_t FN(HashTypeLength)(void) { return 4; }
static BROTLI_INLINE size_t FN(StoreLookahead)(void) {
  return MAX_TREE_COMP_LENGTH;
}

static uint32_t FN(HashBytes)(const uint8_t* BROTLI_RESTRICT data) {
  uint32_t h = BROTLI_UNALIGNED_LOAD32LE(data) * kHashMul32;


  return h >> (32 - BUCKET_BITS);
}

typedef struct HASHER() {

  size_t window_mask_;




  uint32_t* buckets_;




  uint32_t invalid_pos_;







  uint32_t* forest_;
} HASHER();

static void FN(Initialize)(
    HasherCommon* common, HASHER()* BROTLI_RESTRICT self,
    const BrotliEncoderParams* params) {
  self->buckets_ = (uint32_t*)common->extra;
  self->forest_ = &self->buckets_[(1 << BUCKET_BITS)];

  self->window_mask_ = (1u << params->lgwin) - 1u;
  self->invalid_pos_ = (uint32_t)(0 - self->window_mask_);
}

static void FN(Prepare)
    (HASHER()* BROTLI_RESTRICT self, BROTLI_BOOL one_shot,
    size_t input_size, const uint8_t* BROTLI_RESTRICT data) {
  uint32_t invalid_pos = self->invalid_pos_;
  uint32_t i;
  uint32_t* BROTLI_RESTRICT buckets = self->buckets_;
  BROTLI_UNUSED(data);
  BROTLI_UNUSED(one_shot);
  BROTLI_UNUSED(input_size);
  for (i = 0; i < (1 << BUCKET_BITS); i++) {
    buckets[i] = invalid_pos;
  }
}

static BROTLI_INLINE size_t FN(HashMemAllocInBytes)(
    const BrotliEncoderParams* params, BROTLI_BOOL one_shot,
    size_t input_size) {
  size_t num_nodes = (size_t)1 << params->lgwin;
  if (one_shot && input_size < num_nodes) {
    num_nodes = input_size;
  }
  return sizeof(uint32_t) * (1 << BUCKET_BITS) + 2 * sizeof(uint32_t) * num_nodes;
}

static BROTLI_INLINE size_t FN(LeftChildIndex)(
    HASHER()* BROTLI_RESTRICT self,
    const size_t pos) {
  return 2 * (pos & self->window_mask_);
}

static BROTLI_INLINE size_t FN(RightChildIndex)(
    HASHER()* BROTLI_RESTRICT self,
    const size_t pos) {
  return 2 * (pos & self->window_mask_) + 1;
}
# 113 "project/brotli/c/enc/hash_to_binary_tree_inc.h"
static BROTLI_INLINE BackwardMatch* FN(StoreAndFindMatches)(
    HASHER()* BROTLI_RESTRICT self, const uint8_t* BROTLI_RESTRICT data,
    const size_t cur_ix, const size_t ring_buffer_mask, const size_t max_length,
    const size_t max_backward, size_t* const BROTLI_RESTRICT best_len,
    BackwardMatch* BROTLI_RESTRICT matches) {
  const size_t cur_ix_masked = cur_ix & ring_buffer_mask;
  const size_t max_comp_len =
      BROTLI_MIN(size_t, max_length, MAX_TREE_COMP_LENGTH);
  const BROTLI_BOOL should_reroot_tree =
      TO_BROTLI_BOOL(max_length >= MAX_TREE_COMP_LENGTH);
  const uint32_t key = FN(HashBytes)(&data[cur_ix_masked]);
  uint32_t* BROTLI_RESTRICT buckets = self->buckets_;
  uint32_t* BROTLI_RESTRICT forest = self->forest_;
  size_t prev_ix = buckets[key];


  size_t node_left = FN(LeftChildIndex)(self, cur_ix);


  size_t node_right = FN(RightChildIndex)(self, cur_ix);


  size_t best_len_left = 0;


  size_t best_len_right = 0;
  size_t depth_remaining;
  if (should_reroot_tree) {
    buckets[key] = (uint32_t)cur_ix;
  }
  for (depth_remaining = MAX_TREE_SEARCH_DEPTH; ; --depth_remaining) {
    const size_t backward = cur_ix - prev_ix;
    const size_t prev_ix_masked = prev_ix & ring_buffer_mask;
    if (backward == 0 || backward > max_backward || depth_remaining == 0) {
      if (should_reroot_tree) {
        forest[node_left] = self->invalid_pos_;
        forest[node_right] = self->invalid_pos_;
      }
      break;
    }
    {
      const size_t cur_len = BROTLI_MIN(size_t, best_len_left, best_len_right);
      size_t len;
      BROTLI_DCHECK(cur_len <= MAX_TREE_COMP_LENGTH);
      len = cur_len +
          FindMatchLengthWithLimit(&data[cur_ix_masked + cur_len],
                                   &data[prev_ix_masked + cur_len],
                                   max_length - cur_len);
      BROTLI_DCHECK(
          0 == memcmp(&data[cur_ix_masked], &data[prev_ix_masked], len));
      if (matches && len > *best_len) {
        *best_len = len;
        InitBackwardMatch(matches++, backward, len);
      }
      if (len >= max_comp_len) {
        if (should_reroot_tree) {
          forest[node_left] = forest[FN(LeftChildIndex)(self, prev_ix)];
          forest[node_right] = forest[FN(RightChildIndex)(self, prev_ix)];
        }
        break;
      }
      if (data[cur_ix_masked + len] > data[prev_ix_masked + len]) {
        best_len_left = len;
        if (should_reroot_tree) {
          forest[node_left] = (uint32_t)prev_ix;
        }
        node_left = FN(RightChildIndex)(self, prev_ix);
        prev_ix = forest[node_left];
      } else {
        best_len_right = len;
        if (should_reroot_tree) {
          forest[node_right] = (uint32_t)prev_ix;
        }
        node_right = FN(LeftChildIndex)(self, prev_ix);
        prev_ix = forest[node_right];
      }
    }
  }
  return matches;
}
# 201 "project/brotli/c/enc/hash_to_binary_tree_inc.h"
static BROTLI_INLINE size_t FN(FindAllMatches)(
    HASHER()* BROTLI_RESTRICT self,
    const BrotliEncoderDictionary* dictionary,
    const uint8_t* BROTLI_RESTRICT data,
    const size_t ring_buffer_mask, const size_t cur_ix,
    const size_t max_length, const size_t max_backward,
    const size_t dictionary_distance, const BrotliEncoderParams* params,
    BackwardMatch* matches) {
  BackwardMatch* const orig_matches = matches;
  const size_t cur_ix_masked = cur_ix & ring_buffer_mask;
  size_t best_len = 1;
  const size_t short_match_max_backward =
      params->quality != HQ_ZOPFLIFICATION_QUALITY ? 16 : 64;
  size_t stop = cur_ix - short_match_max_backward;
  uint32_t dict_matches[BROTLI_MAX_STATIC_DICTIONARY_MATCH_LEN + 1];
  size_t i;
  if (cur_ix < short_match_max_backward) { stop = 0; }
  for (i = cur_ix - 1; i > stop && best_len <= 2; --i) {
    size_t prev_ix = i;
    const size_t backward = cur_ix - prev_ix;
    if (BROTLI_PREDICT_FALSE(backward > max_backward)) {
      break;
    }
    prev_ix &= ring_buffer_mask;
    if (data[cur_ix_masked] != data[prev_ix] ||
        data[cur_ix_masked + 1] != data[prev_ix + 1]) {
      continue;
    }
    {
      const size_t len =
          FindMatchLengthWithLimit(&data[prev_ix], &data[cur_ix_masked],
                                   max_length);
      if (len > best_len) {
        best_len = len;
        InitBackwardMatch(matches++, backward, len);
      }
    }
  }
  if (best_len < max_length) {
    matches = FN(StoreAndFindMatches)(self, data, cur_ix,
        ring_buffer_mask, max_length, max_backward, &best_len, matches);
  }
  for (i = 0; i <= BROTLI_MAX_STATIC_DICTIONARY_MATCH_LEN; ++i) {
    dict_matches[i] = kInvalidMatch;
  }
  {
    size_t minlen = BROTLI_MAX(size_t, 4, best_len + 1);
    if (BrotliFindAllStaticDictionaryMatches(dictionary,
        &data[cur_ix_masked], minlen, max_length, &dict_matches[0])) {
      size_t maxlen = BROTLI_MIN(
          size_t, BROTLI_MAX_STATIC_DICTIONARY_MATCH_LEN, max_length);
      size_t l;
      for (l = minlen; l <= maxlen; ++l) {
        uint32_t dict_id = dict_matches[l];
        if (dict_id < kInvalidMatch) {
          size_t distance = dictionary_distance + (dict_id >> 5) + 1;
          if (distance <= params->dist.max_distance) {
            InitDictionaryBackwardMatch(matches++, distance, l, dict_id & 31);
          }
        }
      }
    }
  }
  return (size_t)(matches - orig_matches);
}




static BROTLI_INLINE void FN(Store)(HASHER()* BROTLI_RESTRICT self,
    const uint8_t* BROTLI_RESTRICT data,
    const size_t mask, const size_t ix) {

  const size_t max_backward = self->window_mask_ - BROTLI_WINDOW_GAP + 1;
  FN(StoreAndFindMatches)(self, data, ix, mask, MAX_TREE_COMP_LENGTH,
      max_backward, NULL, NULL);
}

static BROTLI_INLINE void FN(StoreRange)(HASHER()* BROTLI_RESTRICT self,
    const uint8_t* BROTLI_RESTRICT data, const size_t mask,
    const size_t ix_start, const size_t ix_end) {
  size_t i = ix_start;
  size_t j = ix_start;
  if (ix_start + 63 <= ix_end) {
    i = ix_end - 63;
  }
  if (ix_start + 512 <= i) {
    for (; j < i; j += 8) {
      FN(Store)(self, data, mask, j);
    }
  }
  for (; i < ix_end; ++i) {
    FN(Store)(self, data, mask, i);
  }
}

static BROTLI_INLINE void FN(StitchToPreviousBlock)(
    HASHER()* BROTLI_RESTRICT self,
    size_t num_bytes, size_t position, const uint8_t* ringbuffer,
    size_t ringbuffer_mask) {
  if (num_bytes >= FN(HashTypeLength)() - 1 &&
      position >= MAX_TREE_COMP_LENGTH) {



    const size_t i_start = position - MAX_TREE_COMP_LENGTH + 1;
    const size_t i_end = BROTLI_MIN(size_t, position, i_start + num_bytes);
    size_t i;
    for (i = i_start; i < i_end; ++i) {




      const size_t max_backward =
          self->window_mask_ - BROTLI_MAX(size_t,
                                          BROTLI_WINDOW_GAP - 1,
                                          position - i);



      FN(StoreAndFindMatches)(self, ringbuffer, i, ringbuffer_mask,
          MAX_TREE_COMP_LENGTH, max_backward, NULL, NULL);
    }
  }
}
