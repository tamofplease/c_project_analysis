# 1 "project/brotli/c/enc/entropy_encode.c"
# 9 "project/brotli/c/enc/entropy_encode.c"
#include "./entropy_encode.h"

#include <string.h>

#include "../common/constants.h"
#include "../common/platform.h"
#include <brotli/types.h>

#if defined(__cplusplus) || defined(c_plusplus)
extern "C" {
#endif

const size_t kBrotliShellGaps[] = {132, 57, 23, 10, 4, 1};

BROTLI_BOOL BrotliSetDepth(
    int p0, HuffmanTree* pool, uint8_t* depth, int max_depth) {
  int stack[16];
  int level = 0;
  int p = p0;
  BROTLI_DCHECK(max_depth <= 15);
  stack[0] = -1;
  while (BROTLI_TRUE) {
    if (pool[p].index_left_ >= 0) {
      level++;
      if (level > max_depth) return BROTLI_FALSE;
      stack[level] = pool[p].index_right_or_value_;
      p = pool[p].index_left_;
      continue;
    } else {
      depth[pool[p].index_right_or_value_] = (uint8_t)level;
    }
    while (level >= 0 && stack[level] == -1) level--;
    if (level < 0) return BROTLI_TRUE;
    p = stack[level];
    stack[level] = -1;
  }
}


static BROTLI_INLINE BROTLI_BOOL SortHuffmanTree(
    const HuffmanTree* v0, const HuffmanTree* v1) {
  if (v0->total_count_ != v1->total_count_) {
    return TO_BROTLI_BOOL(v0->total_count_ < v1->total_count_);
  }
  return TO_BROTLI_BOOL(v0->index_right_or_value_ > v1->index_right_or_value_);
}
# 71 "project/brotli/c/enc/entropy_encode.c"
void BrotliCreateHuffmanTree(const uint32_t* data,
                             const size_t length,
                             const int tree_limit,
                             HuffmanTree* tree,
                             uint8_t* depth) {
  uint32_t count_limit;
  HuffmanTree sentinel;
  InitHuffmanTree(&sentinel, BROTLI_UINT32_MAX, -1, -1);




  for (count_limit = 1; ; count_limit *= 2) {
    size_t n = 0;
    size_t i;
    size_t j;
    size_t k;
    for (i = length; i != 0;) {
      --i;
      if (data[i]) {
        const uint32_t count = BROTLI_MAX(uint32_t, data[i], count_limit);
        InitHuffmanTree(&tree[n++], count, -1, (int16_t)i);
      }
    }

    if (n == 1) {
      depth[tree[0].index_right_or_value_] = 1;
      break;
    }

    SortHuffmanTreeItems(tree, n, SortHuffmanTree);
# 110 "project/brotli/c/enc/entropy_encode.c"
    tree[n] = sentinel;
    tree[n + 1] = sentinel;

    i = 0;
    j = n + 1;
    for (k = n - 1; k != 0; --k) {
      size_t left, right;
      if (tree[i].total_count_ <= tree[j].total_count_) {
        left = i;
        ++i;
      } else {
        left = j;
        ++j;
      }
      if (tree[i].total_count_ <= tree[j].total_count_) {
        right = i;
        ++i;
      } else {
        right = j;
        ++j;
      }

      {

        size_t j_end = 2 * n - k;
        tree[j_end].total_count_ =
            tree[left].total_count_ + tree[right].total_count_;
        tree[j_end].index_left_ = (int16_t)left;
        tree[j_end].index_right_or_value_ = (int16_t)right;


        tree[j_end + 1] = sentinel;
      }
    }
    if (BrotliSetDepth((int)(2 * n - 1), &tree[0], depth, tree_limit)) {


      break;
    }
  }
}

static void Reverse(uint8_t* v, size_t start, size_t end) {
  --end;
  while (start < end) {
    uint8_t tmp = v[start];
    v[start] = v[end];
    v[end] = tmp;
    ++start;
    --end;
  }
}

static void BrotliWriteHuffmanTreeRepetitions(
    const uint8_t previous_value,
    const uint8_t value,
    size_t repetitions,
    size_t* tree_size,
    uint8_t* tree,
    uint8_t* extra_bits_data) {
  BROTLI_DCHECK(repetitions > 0);
  if (previous_value != value) {
    tree[*tree_size] = value;
    extra_bits_data[*tree_size] = 0;
    ++(*tree_size);
    --repetitions;
  }
  if (repetitions == 7) {
    tree[*tree_size] = value;
    extra_bits_data[*tree_size] = 0;
    ++(*tree_size);
    --repetitions;
  }
  if (repetitions < 3) {
    size_t i;
    for (i = 0; i < repetitions; ++i) {
      tree[*tree_size] = value;
      extra_bits_data[*tree_size] = 0;
      ++(*tree_size);
    }
  } else {
    size_t start = *tree_size;
    repetitions -= 3;
    while (BROTLI_TRUE) {
      tree[*tree_size] = BROTLI_REPEAT_PREVIOUS_CODE_LENGTH;
      extra_bits_data[*tree_size] = repetitions & 0x3;
      ++(*tree_size);
      repetitions >>= 2;
      if (repetitions == 0) {
        break;
      }
      --repetitions;
    }
    Reverse(tree, start, *tree_size);
    Reverse(extra_bits_data, start, *tree_size);
  }
}

static void BrotliWriteHuffmanTreeRepetitionsZeros(
    size_t repetitions,
    size_t* tree_size,
    uint8_t* tree,
    uint8_t* extra_bits_data) {
  if (repetitions == 11) {
    tree[*tree_size] = 0;
    extra_bits_data[*tree_size] = 0;
    ++(*tree_size);
    --repetitions;
  }
  if (repetitions < 3) {
    size_t i;
    for (i = 0; i < repetitions; ++i) {
      tree[*tree_size] = 0;
      extra_bits_data[*tree_size] = 0;
      ++(*tree_size);
    }
  } else {
    size_t start = *tree_size;
    repetitions -= 3;
    while (BROTLI_TRUE) {
      tree[*tree_size] = BROTLI_REPEAT_ZERO_CODE_LENGTH;
      extra_bits_data[*tree_size] = repetitions & 0x7;
      ++(*tree_size);
      repetitions >>= 3;
      if (repetitions == 0) {
        break;
      }
      --repetitions;
    }
    Reverse(tree, start, *tree_size);
    Reverse(extra_bits_data, start, *tree_size);
  }
}

void BrotliOptimizeHuffmanCountsForRle(size_t length, uint32_t* counts,
                                       uint8_t* good_for_rle) {
  size_t nonzero_count = 0;
  size_t stride;
  size_t limit;
  size_t sum;
  const size_t streak_limit = 1240;

  size_t i;
  for (i = 0; i < length; i++) {
    if (counts[i]) {
      ++nonzero_count;
    }
  }
  if (nonzero_count < 16) {
    return;
  }
  while (length != 0 && counts[length - 1] == 0) {
    --length;
  }
  if (length == 0) {
    return;
  }

  {
    size_t nonzeros = 0;
    uint32_t smallest_nonzero = 1 << 30;
    for (i = 0; i < length; ++i) {
      if (counts[i] != 0) {
        ++nonzeros;
        if (smallest_nonzero > counts[i]) {
          smallest_nonzero = counts[i];
        }
      }
    }
    if (nonzeros < 5) {

      return;
    }
    if (smallest_nonzero < 4) {
      size_t zeros = length - nonzeros;
      if (zeros < 6) {
        for (i = 1; i < length - 1; ++i) {
          if (counts[i - 1] != 0 && counts[i] == 0 && counts[i + 1] != 0) {
            counts[i] = 1;
          }
        }
      }
    }
    if (nonzeros < 28) {
      return;
    }
  }


  memset(good_for_rle, 0, length);
  {



    uint32_t symbol = counts[0];
    size_t step = 0;
    for (i = 0; i <= length; ++i) {
      if (i == length || counts[i] != symbol) {
        if ((symbol == 0 && step >= 5) ||
            (symbol != 0 && step >= 7)) {
          size_t k;
          for (k = 0; k < step; ++k) {
            good_for_rle[i - k - 1] = 1;
          }
        }
        step = 1;
        if (i != length) {
          symbol = counts[i];
        }
      } else {
        ++step;
      }
    }
  }


  stride = 0;
  limit = 256 * (counts[0] + counts[1] + counts[2]) / 3 + 420;
  sum = 0;
  for (i = 0; i <= length; ++i) {
    if (i == length || good_for_rle[i] ||
        (i != 0 && good_for_rle[i - 1]) ||
        (256 * counts[i] - limit + streak_limit) >= 2 * streak_limit) {
      if (stride >= 4 || (stride >= 3 && sum == 0)) {
        size_t k;

        size_t count = (sum + stride / 2) / stride;
        if (count == 0) {
          count = 1;
        }
        if (sum == 0) {

          count = 0;
        }
        for (k = 0; k < stride; ++k) {


          counts[i - k - 1] = (uint32_t)count;
        }
      }
      stride = 0;
      sum = 0;
      if (i < length - 2) {


        limit = 256 * (counts[i] + counts[i + 1] + counts[i + 2]) / 3 + 420;
      } else if (i < length) {
        limit = 256 * counts[i];
      } else {
        limit = 0;
      }
    }
    ++stride;
    if (i != length) {
      sum += counts[i];
      if (stride >= 4) {
        limit = (256 * sum + stride / 2) / stride;
      }
      if (stride == 4) {
        limit += 120;
      }
    }
  }
}

static void DecideOverRleUse(const uint8_t* depth, const size_t length,
                             BROTLI_BOOL* use_rle_for_non_zero,
                             BROTLI_BOOL* use_rle_for_zero) {
  size_t total_reps_zero = 0;
  size_t total_reps_non_zero = 0;
  size_t count_reps_zero = 1;
  size_t count_reps_non_zero = 1;
  size_t i;
  for (i = 0; i < length;) {
    const uint8_t value = depth[i];
    size_t reps = 1;
    size_t k;
    for (k = i + 1; k < length && depth[k] == value; ++k) {
      ++reps;
    }
    if (reps >= 3 && value == 0) {
      total_reps_zero += reps;
      ++count_reps_zero;
    }
    if (reps >= 4 && value != 0) {
      total_reps_non_zero += reps;
      ++count_reps_non_zero;
    }
    i += reps;
  }
  *use_rle_for_non_zero =
      TO_BROTLI_BOOL(total_reps_non_zero > count_reps_non_zero * 2);
  *use_rle_for_zero = TO_BROTLI_BOOL(total_reps_zero > count_reps_zero * 2);
}

void BrotliWriteHuffmanTree(const uint8_t* depth,
                            size_t length,
                            size_t* tree_size,
                            uint8_t* tree,
                            uint8_t* extra_bits_data) {
  uint8_t previous_value = BROTLI_INITIAL_REPEATED_CODE_LENGTH;
  size_t i;
  BROTLI_BOOL use_rle_for_non_zero = BROTLI_FALSE;
  BROTLI_BOOL use_rle_for_zero = BROTLI_FALSE;


  size_t new_length = length;
  for (i = 0; i < length; ++i) {
    if (depth[length - i - 1] == 0) {
      --new_length;
    } else {
      break;
    }
  }


  if (length > 50) {


    DecideOverRleUse(depth, new_length,
                     &use_rle_for_non_zero, &use_rle_for_zero);
  }


  for (i = 0; i < new_length;) {
    const uint8_t value = depth[i];
    size_t reps = 1;
    if ((value != 0 && use_rle_for_non_zero) ||
        (value == 0 && use_rle_for_zero)) {
      size_t k;
      for (k = i + 1; k < new_length && depth[k] == value; ++k) {
        ++reps;
      }
    }
    if (value == 0) {
      BrotliWriteHuffmanTreeRepetitionsZeros(
          reps, tree_size, tree, extra_bits_data);
    } else {
      BrotliWriteHuffmanTreeRepetitions(previous_value,
                                        value, reps, tree_size,
                                        tree, extra_bits_data);
      previous_value = value;
    }
    i += reps;
  }
}

static uint16_t BrotliReverseBits(size_t num_bits, uint16_t bits) {
  static const size_t kLut[16] = {
    0x00, 0x08, 0x04, 0x0C, 0x02, 0x0A, 0x06, 0x0E,
    0x01, 0x09, 0x05, 0x0D, 0x03, 0x0B, 0x07, 0x0F
  };
  size_t retval = kLut[bits & 0x0F];
  size_t i;
  for (i = 4; i < num_bits; i += 4) {
    retval <<= 4;
    bits = (uint16_t)(bits >> 4);
    retval |= kLut[bits & 0x0F];
  }
  retval >>= ((0 - num_bits) & 0x03);
  return (uint16_t)retval;
}


#define MAX_HUFFMAN_BITS 16

void BrotliConvertBitDepthsToSymbols(const uint8_t* depth,
                                     size_t len,
                                     uint16_t* bits) {


  uint16_t bl_count[MAX_HUFFMAN_BITS] = { 0 };
  uint16_t next_code[MAX_HUFFMAN_BITS];
  size_t i;
  int code = 0;
  for (i = 0; i < len; ++i) {
    ++bl_count[depth[i]];
  }
  bl_count[0] = 0;
  next_code[0] = 0;
  for (i = 1; i < MAX_HUFFMAN_BITS; ++i) {
    code = (code + bl_count[i - 1]) << 1;
    next_code[i] = (uint16_t)code;
  }
  for (i = 0; i < len; ++i) {
    if (depth[i]) {
      bits[i] = BrotliReverseBits(depth[i], next_code[depth[i]]++);
    }
  }
}

#if defined(__cplusplus) || defined(c_plusplus)
}
#endif
