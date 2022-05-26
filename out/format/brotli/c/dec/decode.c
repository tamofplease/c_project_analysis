# 1 "project/brotli/c/dec/decode.c"






#include <brotli/decode.h>

#include <stdlib.h>
#include <string.h>

#include "../common/constants.h"
#include "../common/context.h"
#include "../common/dictionary.h"
#include "../common/platform.h"
#include "../common/transform.h"
#include "../common/version.h"
#include "./bit_reader.h"
#include "./huffman.h"
#include "./prefix.h"
#include "./state.h"

#if defined(BROTLI_TARGET_NEON)
#include <arm_neon.h>
#endif

#if defined(__cplusplus) || defined(c_plusplus)
extern "C" {
#endif

#define BROTLI_FAILURE(CODE) (BROTLI_DUMP(), CODE)

#define BROTLI_LOG_UINT(name) \
  BROTLI_LOG(("[%s] %s = %lu\n", __func__, #name, (unsigned long)(name)))
#define BROTLI_LOG_ARRAY_INDEX(array_name,idx) \
  BROTLI_LOG(("[%s] %s[%lu] = %lu\n", __func__, #array_name, \
         (unsigned long)(idx), (unsigned long)array_name[idx]))

#define HUFFMAN_TABLE_BITS 8U
#define HUFFMAN_TABLE_MASK 0xFF





static const uint32_t kRingBufferWriteAheadSlack = 42;

static const uint8_t kCodeLengthCodeOrder[BROTLI_CODE_LENGTH_CODES] = {
  1, 2, 3, 4, 0, 5, 17, 6, 16, 7, 8, 9, 10, 11, 12, 13, 14, 15,
};


static const uint8_t kCodeLengthPrefixLength[16] = {
  2, 2, 2, 3, 2, 2, 2, 4, 2, 2, 2, 3, 2, 2, 2, 4,
};

static const uint8_t kCodeLengthPrefixValue[16] = {
  0, 4, 3, 2, 0, 4, 3, 1, 0, 4, 3, 2, 0, 4, 3, 5,
};

BROTLI_BOOL BrotliDecoderSetParameter(
    BrotliDecoderState* state, BrotliDecoderParameter p, uint32_t value) {
  if (state->state != BROTLI_STATE_UNINITED) return BROTLI_FALSE;
  switch (p) {
    case BROTLI_DECODER_PARAM_DISABLE_RING_BUFFER_REALLOCATION:
      state->canny_ringbuffer_allocation = !!value ? 0 : 1;
      return BROTLI_TRUE;

    case BROTLI_DECODER_PARAM_LARGE_WINDOW:
      state->large_window = TO_BROTLI_BOOL(!!value);
      return BROTLI_TRUE;

    default: return BROTLI_FALSE;
  }
}

BrotliDecoderState* BrotliDecoderCreateInstance(
    brotli_alloc_func alloc_func, brotli_free_func free_func, void* opaque) {
  BrotliDecoderState* state = 0;
  if (!alloc_func && !free_func) {
    state = (BrotliDecoderState*)malloc(sizeof(BrotliDecoderState));
  } else if (alloc_func && free_func) {
    state = (BrotliDecoderState*)alloc_func(opaque, sizeof(BrotliDecoderState));
  }
  if (state == 0) {
    BROTLI_DUMP();
    return 0;
  }
  if (!BrotliDecoderStateInit(state, alloc_func, free_func, opaque)) {
    BROTLI_DUMP();
    if (!alloc_func && !free_func) {
      free(state);
    } else if (alloc_func && free_func) {
      free_func(opaque, state);
    }
    return 0;
  }
  return state;
}


void BrotliDecoderDestroyInstance(BrotliDecoderState* state) {
  if (!state) {
    return;
  } else {
    brotli_free_func free_func = state->free_func;
    void* opaque = state->memory_manager_opaque;
    BrotliDecoderStateCleanup(state);
    free_func(opaque, state);
  }
}


static BROTLI_NOINLINE BrotliDecoderResult SaveErrorCode(
    BrotliDecoderState* s, BrotliDecoderErrorCode e) {
  s->error_code = (int)e;
  switch (e) {
    case BROTLI_DECODER_SUCCESS:
      return BROTLI_DECODER_RESULT_SUCCESS;

    case BROTLI_DECODER_NEEDS_MORE_INPUT:
      return BROTLI_DECODER_RESULT_NEEDS_MORE_INPUT;

    case BROTLI_DECODER_NEEDS_MORE_OUTPUT:
      return BROTLI_DECODER_RESULT_NEEDS_MORE_OUTPUT;

    default:
      return BROTLI_DECODER_RESULT_ERROR;
  }
}



static BrotliDecoderErrorCode DecodeWindowBits(BrotliDecoderState* s,
                                               BrotliBitReader* br) {
  uint32_t n;
  BROTLI_BOOL large_window = s->large_window;
  s->large_window = BROTLI_FALSE;
  BrotliTakeBits(br, 1, &n);
  if (n == 0) {
    s->window_bits = 16;
    return BROTLI_DECODER_SUCCESS;
  }
  BrotliTakeBits(br, 3, &n);
  if (n != 0) {
    s->window_bits = 17 + n;
    return BROTLI_DECODER_SUCCESS;
  }
  BrotliTakeBits(br, 3, &n);
  if (n == 1) {
    if (large_window) {
      BrotliTakeBits(br, 1, &n);
      if (n == 1) {
        return BROTLI_FAILURE(BROTLI_DECODER_ERROR_FORMAT_WINDOW_BITS);
      }
      s->large_window = BROTLI_TRUE;
      return BROTLI_DECODER_SUCCESS;
    } else {
      return BROTLI_FAILURE(BROTLI_DECODER_ERROR_FORMAT_WINDOW_BITS);
    }
  }
  if (n != 0) {
    s->window_bits = 8 + n;
    return BROTLI_DECODER_SUCCESS;
  }
  s->window_bits = 17;
  return BROTLI_DECODER_SUCCESS;
}

static BROTLI_INLINE void memmove16(uint8_t* dst, uint8_t* src) {
#if defined(BROTLI_TARGET_NEON)
  vst1q_u8(dst, vld1q_u8(src));
#else
  uint32_t buffer[4];
  memcpy(buffer, src, 16);
  memcpy(dst, buffer, 16);
#endif
}


static BROTLI_NOINLINE BrotliDecoderErrorCode DecodeVarLenUint8(
    BrotliDecoderState* s, BrotliBitReader* br, uint32_t* value) {
  uint32_t bits;
  switch (s->substate_decode_uint8) {
    case BROTLI_STATE_DECODE_UINT8_NONE:
      if (BROTLI_PREDICT_FALSE(!BrotliSafeReadBits(br, 1, &bits))) {
        return BROTLI_DECODER_NEEDS_MORE_INPUT;
      }
      if (bits == 0) {
        *value = 0;
        return BROTLI_DECODER_SUCCESS;
      }


    case BROTLI_STATE_DECODE_UINT8_SHORT:
      if (BROTLI_PREDICT_FALSE(!BrotliSafeReadBits(br, 3, &bits))) {
        s->substate_decode_uint8 = BROTLI_STATE_DECODE_UINT8_SHORT;
        return BROTLI_DECODER_NEEDS_MORE_INPUT;
      }
      if (bits == 0) {
        *value = 1;
        s->substate_decode_uint8 = BROTLI_STATE_DECODE_UINT8_NONE;
        return BROTLI_DECODER_SUCCESS;
      }

      *value = bits;


    case BROTLI_STATE_DECODE_UINT8_LONG:
      if (BROTLI_PREDICT_FALSE(!BrotliSafeReadBits(br, *value, &bits))) {
        s->substate_decode_uint8 = BROTLI_STATE_DECODE_UINT8_LONG;
        return BROTLI_DECODER_NEEDS_MORE_INPUT;
      }
      *value = (1U << *value) + bits;
      s->substate_decode_uint8 = BROTLI_STATE_DECODE_UINT8_NONE;
      return BROTLI_DECODER_SUCCESS;

    default:
      return
          BROTLI_FAILURE(BROTLI_DECODER_ERROR_UNREACHABLE);
  }
}


static BrotliDecoderErrorCode BROTLI_NOINLINE DecodeMetaBlockLength(
    BrotliDecoderState* s, BrotliBitReader* br) {
  uint32_t bits;
  int i;
  for (;;) {
    switch (s->substate_metablock_header) {
      case BROTLI_STATE_METABLOCK_HEADER_NONE:
        if (!BrotliSafeReadBits(br, 1, &bits)) {
          return BROTLI_DECODER_NEEDS_MORE_INPUT;
        }
        s->is_last_metablock = bits ? 1 : 0;
        s->meta_block_remaining_len = 0;
        s->is_uncompressed = 0;
        s->is_metadata = 0;
        if (!s->is_last_metablock) {
          s->substate_metablock_header = BROTLI_STATE_METABLOCK_HEADER_NIBBLES;
          break;
        }
        s->substate_metablock_header = BROTLI_STATE_METABLOCK_HEADER_EMPTY;


      case BROTLI_STATE_METABLOCK_HEADER_EMPTY:
        if (!BrotliSafeReadBits(br, 1, &bits)) {
          return BROTLI_DECODER_NEEDS_MORE_INPUT;
        }
        if (bits) {
          s->substate_metablock_header = BROTLI_STATE_METABLOCK_HEADER_NONE;
          return BROTLI_DECODER_SUCCESS;
        }
        s->substate_metablock_header = BROTLI_STATE_METABLOCK_HEADER_NIBBLES;


      case BROTLI_STATE_METABLOCK_HEADER_NIBBLES:
        if (!BrotliSafeReadBits(br, 2, &bits)) {
          return BROTLI_DECODER_NEEDS_MORE_INPUT;
        }
        s->size_nibbles = (uint8_t)(bits + 4);
        s->loop_counter = 0;
        if (bits == 3) {
          s->is_metadata = 1;
          s->substate_metablock_header = BROTLI_STATE_METABLOCK_HEADER_RESERVED;
          break;
        }
        s->substate_metablock_header = BROTLI_STATE_METABLOCK_HEADER_SIZE;


      case BROTLI_STATE_METABLOCK_HEADER_SIZE:
        i = s->loop_counter;
        for (; i < (int)s->size_nibbles; ++i) {
          if (!BrotliSafeReadBits(br, 4, &bits)) {
            s->loop_counter = i;
            return BROTLI_DECODER_NEEDS_MORE_INPUT;
          }
          if (i + 1 == (int)s->size_nibbles && s->size_nibbles > 4 &&
              bits == 0) {
            return BROTLI_FAILURE(BROTLI_DECODER_ERROR_FORMAT_EXUBERANT_NIBBLE);
          }
          s->meta_block_remaining_len |= (int)(bits << (i * 4));
        }
        s->substate_metablock_header =
            BROTLI_STATE_METABLOCK_HEADER_UNCOMPRESSED;


      case BROTLI_STATE_METABLOCK_HEADER_UNCOMPRESSED:
        if (!s->is_last_metablock) {
          if (!BrotliSafeReadBits(br, 1, &bits)) {
            return BROTLI_DECODER_NEEDS_MORE_INPUT;
          }
          s->is_uncompressed = bits ? 1 : 0;
        }
        ++s->meta_block_remaining_len;
        s->substate_metablock_header = BROTLI_STATE_METABLOCK_HEADER_NONE;
        return BROTLI_DECODER_SUCCESS;

      case BROTLI_STATE_METABLOCK_HEADER_RESERVED:
        if (!BrotliSafeReadBits(br, 1, &bits)) {
          return BROTLI_DECODER_NEEDS_MORE_INPUT;
        }
        if (bits != 0) {
          return BROTLI_FAILURE(BROTLI_DECODER_ERROR_FORMAT_RESERVED);
        }
        s->substate_metablock_header = BROTLI_STATE_METABLOCK_HEADER_BYTES;


      case BROTLI_STATE_METABLOCK_HEADER_BYTES:
        if (!BrotliSafeReadBits(br, 2, &bits)) {
          return BROTLI_DECODER_NEEDS_MORE_INPUT;
        }
        if (bits == 0) {
          s->substate_metablock_header = BROTLI_STATE_METABLOCK_HEADER_NONE;
          return BROTLI_DECODER_SUCCESS;
        }
        s->size_nibbles = (uint8_t)bits;
        s->substate_metablock_header = BROTLI_STATE_METABLOCK_HEADER_METADATA;


      case BROTLI_STATE_METABLOCK_HEADER_METADATA:
        i = s->loop_counter;
        for (; i < (int)s->size_nibbles; ++i) {
          if (!BrotliSafeReadBits(br, 8, &bits)) {
            s->loop_counter = i;
            return BROTLI_DECODER_NEEDS_MORE_INPUT;
          }
          if (i + 1 == (int)s->size_nibbles && s->size_nibbles > 1 &&
              bits == 0) {
            return BROTLI_FAILURE(
                BROTLI_DECODER_ERROR_FORMAT_EXUBERANT_META_NIBBLE);
          }
          s->meta_block_remaining_len |= (int)(bits << (i * 8));
        }
        ++s->meta_block_remaining_len;
        s->substate_metablock_header = BROTLI_STATE_METABLOCK_HEADER_NONE;
        return BROTLI_DECODER_SUCCESS;

      default:
        return
            BROTLI_FAILURE(BROTLI_DECODER_ERROR_UNREACHABLE);
    }
  }
}





static BROTLI_INLINE uint32_t DecodeSymbol(uint32_t bits,
                                           const HuffmanCode* table,
                                           BrotliBitReader* br) {
  BROTLI_HC_MARK_TABLE_FOR_FAST_LOAD(table);
  BROTLI_HC_ADJUST_TABLE_INDEX(table, bits & HUFFMAN_TABLE_MASK);
  if (BROTLI_HC_FAST_LOAD_BITS(table) > HUFFMAN_TABLE_BITS) {
    uint32_t nbits = BROTLI_HC_FAST_LOAD_BITS(table) - HUFFMAN_TABLE_BITS;
    BrotliDropBits(br, HUFFMAN_TABLE_BITS);
    BROTLI_HC_ADJUST_TABLE_INDEX(table,
        BROTLI_HC_FAST_LOAD_VALUE(table) +
        ((bits >> HUFFMAN_TABLE_BITS) & BitMask(nbits)));
  }
  BrotliDropBits(br, BROTLI_HC_FAST_LOAD_BITS(table));
  return BROTLI_HC_FAST_LOAD_VALUE(table);
}



static BROTLI_INLINE uint32_t ReadSymbol(const HuffmanCode* table,
                                         BrotliBitReader* br) {
  return DecodeSymbol(BrotliGet16BitsUnmasked(br), table, br);
}



static BROTLI_NOINLINE BROTLI_BOOL SafeDecodeSymbol(
    const HuffmanCode* table, BrotliBitReader* br, uint32_t* result) {
  uint32_t val;
  uint32_t available_bits = BrotliGetAvailableBits(br);
  BROTLI_HC_MARK_TABLE_FOR_FAST_LOAD(table);
  if (available_bits == 0) {
    if (BROTLI_HC_FAST_LOAD_BITS(table) == 0) {
      *result = BROTLI_HC_FAST_LOAD_VALUE(table);
      return BROTLI_TRUE;
    }
    return BROTLI_FALSE;
  }
  val = (uint32_t)BrotliGetBitsUnmasked(br);
  BROTLI_HC_ADJUST_TABLE_INDEX(table, val & HUFFMAN_TABLE_MASK);
  if (BROTLI_HC_FAST_LOAD_BITS(table) <= HUFFMAN_TABLE_BITS) {
    if (BROTLI_HC_FAST_LOAD_BITS(table) <= available_bits) {
      BrotliDropBits(br, BROTLI_HC_FAST_LOAD_BITS(table));
      *result = BROTLI_HC_FAST_LOAD_VALUE(table);
      return BROTLI_TRUE;
    } else {
      return BROTLI_FALSE;
    }
  }
  if (available_bits <= HUFFMAN_TABLE_BITS) {
    return BROTLI_FALSE;
  }


  val = (val & BitMask(BROTLI_HC_FAST_LOAD_BITS(table))) >> HUFFMAN_TABLE_BITS;
  available_bits -= HUFFMAN_TABLE_BITS;
  BROTLI_HC_ADJUST_TABLE_INDEX(table, BROTLI_HC_FAST_LOAD_VALUE(table) + val);
  if (available_bits < BROTLI_HC_FAST_LOAD_BITS(table)) {
    return BROTLI_FALSE;
  }

  BrotliDropBits(br, HUFFMAN_TABLE_BITS + BROTLI_HC_FAST_LOAD_BITS(table));
  *result = BROTLI_HC_FAST_LOAD_VALUE(table);
  return BROTLI_TRUE;
}

static BROTLI_INLINE BROTLI_BOOL SafeReadSymbol(
    const HuffmanCode* table, BrotliBitReader* br, uint32_t* result) {
  uint32_t val;
  if (BROTLI_PREDICT_TRUE(BrotliSafeGetBits(br, 15, &val))) {
    *result = DecodeSymbol(val, table, br);
    return BROTLI_TRUE;
  }
  return SafeDecodeSymbol(table, br, result);
}


static BROTLI_INLINE void PreloadSymbol(int safe,
                                        const HuffmanCode* table,
                                        BrotliBitReader* br,
                                        uint32_t* bits,
                                        uint32_t* value) {
  if (safe) {
    return;
  }
  BROTLI_HC_MARK_TABLE_FOR_FAST_LOAD(table);
  BROTLI_HC_ADJUST_TABLE_INDEX(table, BrotliGetBits(br, HUFFMAN_TABLE_BITS));
  *bits = BROTLI_HC_FAST_LOAD_BITS(table);
  *value = BROTLI_HC_FAST_LOAD_VALUE(table);
}



static BROTLI_INLINE uint32_t ReadPreloadedSymbol(const HuffmanCode* table,
                                                  BrotliBitReader* br,
                                                  uint32_t* bits,
                                                  uint32_t* value) {
  uint32_t result = *value;
  if (BROTLI_PREDICT_FALSE(*bits > HUFFMAN_TABLE_BITS)) {
    uint32_t val = BrotliGet16BitsUnmasked(br);
    const HuffmanCode* ext = table + (val & HUFFMAN_TABLE_MASK) + *value;
    uint32_t mask = BitMask((*bits - HUFFMAN_TABLE_BITS));
    BROTLI_HC_MARK_TABLE_FOR_FAST_LOAD(ext);
    BrotliDropBits(br, HUFFMAN_TABLE_BITS);
    BROTLI_HC_ADJUST_TABLE_INDEX(ext, (val >> HUFFMAN_TABLE_BITS) & mask);
    BrotliDropBits(br, BROTLI_HC_FAST_LOAD_BITS(ext));
    result = BROTLI_HC_FAST_LOAD_VALUE(ext);
  } else {
    BrotliDropBits(br, *bits);
  }
  PreloadSymbol(0, table, br, bits, value);
  return result;
}

static BROTLI_INLINE uint32_t Log2Floor(uint32_t x) {
  uint32_t result = 0;
  while (x) {
    x >>= 1;
    ++result;
  }
  return result;
}




static BrotliDecoderErrorCode ReadSimpleHuffmanSymbols(
    uint32_t alphabet_size_max, uint32_t alphabet_size_limit,
    BrotliDecoderState* s) {

  BrotliBitReader* br = &s->br;
  BrotliMetablockHeaderArena* h = &s->arena.header;
  uint32_t max_bits = Log2Floor(alphabet_size_max - 1);
  uint32_t i = h->sub_loop_counter;
  uint32_t num_symbols = h->symbol;
  while (i <= num_symbols) {
    uint32_t v;
    if (BROTLI_PREDICT_FALSE(!BrotliSafeReadBits(br, max_bits, &v))) {
      h->sub_loop_counter = i;
      h->substate_huffman = BROTLI_STATE_HUFFMAN_SIMPLE_READ;
      return BROTLI_DECODER_NEEDS_MORE_INPUT;
    }
    if (v >= alphabet_size_limit) {
      return
          BROTLI_FAILURE(BROTLI_DECODER_ERROR_FORMAT_SIMPLE_HUFFMAN_ALPHABET);
    }
    h->symbols_lists_array[i] = (uint16_t)v;
    BROTLI_LOG_UINT(h->symbols_lists_array[i]);
    ++i;
  }

  for (i = 0; i < num_symbols; ++i) {
    uint32_t k = i + 1;
    for (; k <= num_symbols; ++k) {
      if (h->symbols_lists_array[i] == h->symbols_lists_array[k]) {
        return BROTLI_FAILURE(BROTLI_DECODER_ERROR_FORMAT_SIMPLE_HUFFMAN_SAME);
      }
    }
  }

  return BROTLI_DECODER_SUCCESS;
}







static BROTLI_INLINE void ProcessSingleCodeLength(uint32_t code_len,
    uint32_t* symbol, uint32_t* repeat, uint32_t* space,
    uint32_t* prev_code_len, uint16_t* symbol_lists,
    uint16_t* code_length_histo, int* next_symbol) {
  *repeat = 0;
  if (code_len != 0) {
    symbol_lists[next_symbol[code_len]] = (uint16_t)(*symbol);
    next_symbol[code_len] = (int)(*symbol);
    *prev_code_len = code_len;
    *space -= 32768U >> code_len;
    code_length_histo[code_len]++;
    BROTLI_LOG(("[ReadHuffmanCode] code_length[%d] = %d\n",
        (int)*symbol, (int)code_len));
  }
  (*symbol)++;
}
# 545 "project/brotli/c/dec/decode.c"
static BROTLI_INLINE void ProcessRepeatedCodeLength(uint32_t code_len,
    uint32_t repeat_delta, uint32_t alphabet_size, uint32_t* symbol,
    uint32_t* repeat, uint32_t* space, uint32_t* prev_code_len,
    uint32_t* repeat_code_len, uint16_t* symbol_lists,
    uint16_t* code_length_histo, int* next_symbol) {
  uint32_t old_repeat;
  uint32_t extra_bits = 3;
  uint32_t new_len = 0;
  if (code_len == BROTLI_REPEAT_PREVIOUS_CODE_LENGTH) {
    new_len = *prev_code_len;
    extra_bits = 2;
  }
  if (*repeat_code_len != new_len) {
    *repeat = 0;
    *repeat_code_len = new_len;
  }
  old_repeat = *repeat;
  if (*repeat > 0) {
    *repeat -= 2;
    *repeat <<= extra_bits;
  }
  *repeat += repeat_delta + 3U;
  repeat_delta = *repeat - old_repeat;
  if (*symbol + repeat_delta > alphabet_size) {
    BROTLI_DUMP();
    *symbol = alphabet_size;
    *space = 0xFFFFF;
    return;
  }
  BROTLI_LOG(("[ReadHuffmanCode] code_length[%d..%d] = %d\n",
      (int)*symbol, (int)(*symbol + repeat_delta - 1), (int)*repeat_code_len));
  if (*repeat_code_len != 0) {
    unsigned last = *symbol + repeat_delta;
    int next = next_symbol[*repeat_code_len];
    do {
      symbol_lists[next] = (uint16_t)*symbol;
      next = (int)*symbol;
    } while (++(*symbol) != last);
    next_symbol[*repeat_code_len] = next;
    *space -= repeat_delta << (15 - *repeat_code_len);
    code_length_histo[*repeat_code_len] =
        (uint16_t)(code_length_histo[*repeat_code_len] + repeat_delta);
  } else {
    *symbol += repeat_delta;
  }
}


static BrotliDecoderErrorCode ReadSymbolCodeLengths(
    uint32_t alphabet_size, BrotliDecoderState* s) {
  BrotliBitReader* br = &s->br;
  BrotliMetablockHeaderArena* h = &s->arena.header;
  uint32_t symbol = h->symbol;
  uint32_t repeat = h->repeat;
  uint32_t space = h->space;
  uint32_t prev_code_len = h->prev_code_len;
  uint32_t repeat_code_len = h->repeat_code_len;
  uint16_t* symbol_lists = h->symbol_lists;
  uint16_t* code_length_histo = h->code_length_histo;
  int* next_symbol = h->next_symbol;
  if (!BrotliWarmupBitReader(br)) {
    return BROTLI_DECODER_NEEDS_MORE_INPUT;
  }
  while (symbol < alphabet_size && space > 0) {
    const HuffmanCode* p = h->table;
    uint32_t code_len;
    BROTLI_HC_MARK_TABLE_FOR_FAST_LOAD(p);
    if (!BrotliCheckInputAmount(br, BROTLI_SHORT_FILL_BIT_WINDOW_READ)) {
      h->symbol = symbol;
      h->repeat = repeat;
      h->prev_code_len = prev_code_len;
      h->repeat_code_len = repeat_code_len;
      h->space = space;
      return BROTLI_DECODER_NEEDS_MORE_INPUT;
    }
    BrotliFillBitWindow16(br);
    BROTLI_HC_ADJUST_TABLE_INDEX(p, BrotliGetBitsUnmasked(br) &
        BitMask(BROTLI_HUFFMAN_MAX_CODE_LENGTH_CODE_LENGTH));
    BrotliDropBits(br, BROTLI_HC_FAST_LOAD_BITS(p));
    code_len = BROTLI_HC_FAST_LOAD_VALUE(p);
    if (code_len < BROTLI_REPEAT_PREVIOUS_CODE_LENGTH) {
      ProcessSingleCodeLength(code_len, &symbol, &repeat, &space,
          &prev_code_len, symbol_lists, code_length_histo, next_symbol);
    } else {
      uint32_t extra_bits =
          (code_len == BROTLI_REPEAT_PREVIOUS_CODE_LENGTH) ? 2 : 3;
      uint32_t repeat_delta =
          (uint32_t)BrotliGetBitsUnmasked(br) & BitMask(extra_bits);
      BrotliDropBits(br, extra_bits);
      ProcessRepeatedCodeLength(code_len, repeat_delta, alphabet_size,
          &symbol, &repeat, &space, &prev_code_len, &repeat_code_len,
          symbol_lists, code_length_histo, next_symbol);
    }
  }
  h->space = space;
  return BROTLI_DECODER_SUCCESS;
}

static BrotliDecoderErrorCode SafeReadSymbolCodeLengths(
    uint32_t alphabet_size, BrotliDecoderState* s) {
  BrotliBitReader* br = &s->br;
  BrotliMetablockHeaderArena* h = &s->arena.header;
  BROTLI_BOOL get_byte = BROTLI_FALSE;
  while (h->symbol < alphabet_size && h->space > 0) {
    const HuffmanCode* p = h->table;
    uint32_t code_len;
    uint32_t available_bits;
    uint32_t bits = 0;
    BROTLI_HC_MARK_TABLE_FOR_FAST_LOAD(p);
    if (get_byte && !BrotliPullByte(br)) return BROTLI_DECODER_NEEDS_MORE_INPUT;
    get_byte = BROTLI_FALSE;
    available_bits = BrotliGetAvailableBits(br);
    if (available_bits != 0) {
      bits = (uint32_t)BrotliGetBitsUnmasked(br);
    }
    BROTLI_HC_ADJUST_TABLE_INDEX(p,
        bits & BitMask(BROTLI_HUFFMAN_MAX_CODE_LENGTH_CODE_LENGTH));
    if (BROTLI_HC_FAST_LOAD_BITS(p) > available_bits) {
      get_byte = BROTLI_TRUE;
      continue;
    }
    code_len = BROTLI_HC_FAST_LOAD_VALUE(p);
    if (code_len < BROTLI_REPEAT_PREVIOUS_CODE_LENGTH) {
      BrotliDropBits(br, BROTLI_HC_FAST_LOAD_BITS(p));
      ProcessSingleCodeLength(code_len, &h->symbol, &h->repeat, &h->space,
          &h->prev_code_len, h->symbol_lists, h->code_length_histo,
          h->next_symbol);
    } else {
      uint32_t extra_bits = code_len - 14U;
      uint32_t repeat_delta = (bits >> BROTLI_HC_FAST_LOAD_BITS(p)) &
          BitMask(extra_bits);
      if (available_bits < BROTLI_HC_FAST_LOAD_BITS(p) + extra_bits) {
        get_byte = BROTLI_TRUE;
        continue;
      }
      BrotliDropBits(br, BROTLI_HC_FAST_LOAD_BITS(p) + extra_bits);
      ProcessRepeatedCodeLength(code_len, repeat_delta, alphabet_size,
          &h->symbol, &h->repeat, &h->space, &h->prev_code_len,
          &h->repeat_code_len, h->symbol_lists, h->code_length_histo,
          h->next_symbol);
    }
  }
  return BROTLI_DECODER_SUCCESS;
}



static BrotliDecoderErrorCode ReadCodeLengthCodeLengths(BrotliDecoderState* s) {
  BrotliBitReader* br = &s->br;
  BrotliMetablockHeaderArena* h = &s->arena.header;
  uint32_t num_codes = h->repeat;
  unsigned space = h->space;
  uint32_t i = h->sub_loop_counter;
  for (; i < BROTLI_CODE_LENGTH_CODES; ++i) {
    const uint8_t code_len_idx = kCodeLengthCodeOrder[i];
    uint32_t ix;
    uint32_t v;
    if (BROTLI_PREDICT_FALSE(!BrotliSafeGetBits(br, 4, &ix))) {
      uint32_t available_bits = BrotliGetAvailableBits(br);
      if (available_bits != 0) {
        ix = BrotliGetBitsUnmasked(br) & 0xF;
      } else {
        ix = 0;
      }
      if (kCodeLengthPrefixLength[ix] > available_bits) {
        h->sub_loop_counter = i;
        h->repeat = num_codes;
        h->space = space;
        h->substate_huffman = BROTLI_STATE_HUFFMAN_COMPLEX;
        return BROTLI_DECODER_NEEDS_MORE_INPUT;
      }
    }
    v = kCodeLengthPrefixValue[ix];
    BrotliDropBits(br, kCodeLengthPrefixLength[ix]);
    h->code_length_code_lengths[code_len_idx] = (uint8_t)v;
    BROTLI_LOG_ARRAY_INDEX(h->code_length_code_lengths, code_len_idx);
    if (v != 0) {
      space = space - (32U >> v);
      ++num_codes;
      ++h->code_length_histo[v];
      if (space - 1U >= 32U) {

        break;
      }
    }
  }
  if (!(num_codes == 1 || space == 0)) {
    return BROTLI_FAILURE(BROTLI_DECODER_ERROR_FORMAT_CL_SPACE);
  }
  return BROTLI_DECODER_SUCCESS;
}
# 748 "project/brotli/c/dec/decode.c"
static BrotliDecoderErrorCode ReadHuffmanCode(uint32_t alphabet_size_max,
                                              uint32_t alphabet_size_limit,
                                              HuffmanCode* table,
                                              uint32_t* opt_table_size,
                                              BrotliDecoderState* s) {
  BrotliBitReader* br = &s->br;
  BrotliMetablockHeaderArena* h = &s->arena.header;

  for (;;) {
    switch (h->substate_huffman) {
      case BROTLI_STATE_HUFFMAN_NONE:
        if (!BrotliSafeReadBits(br, 2, &h->sub_loop_counter)) {
          return BROTLI_DECODER_NEEDS_MORE_INPUT;
        }
        BROTLI_LOG_UINT(h->sub_loop_counter);



        if (h->sub_loop_counter != 1) {
          h->space = 32;
          h->repeat = 0;
          memset(&h->code_length_histo[0], 0, sizeof(h->code_length_histo[0]) *
              (BROTLI_HUFFMAN_MAX_CODE_LENGTH_CODE_LENGTH + 1));
          memset(&h->code_length_code_lengths[0], 0,
              sizeof(h->code_length_code_lengths));
          h->substate_huffman = BROTLI_STATE_HUFFMAN_COMPLEX;
          continue;
        }


      case BROTLI_STATE_HUFFMAN_SIMPLE_SIZE:

        if (!BrotliSafeReadBits(br, 2, &h->symbol)) {
          h->substate_huffman = BROTLI_STATE_HUFFMAN_SIMPLE_SIZE;
          return BROTLI_DECODER_NEEDS_MORE_INPUT;
        }
        h->sub_loop_counter = 0;


      case BROTLI_STATE_HUFFMAN_SIMPLE_READ: {
        BrotliDecoderErrorCode result =
            ReadSimpleHuffmanSymbols(alphabet_size_max, alphabet_size_limit, s);
        if (result != BROTLI_DECODER_SUCCESS) {
          return result;
        }
      }


      case BROTLI_STATE_HUFFMAN_SIMPLE_BUILD: {
        uint32_t table_size;
        if (h->symbol == 3) {
          uint32_t bits;
          if (!BrotliSafeReadBits(br, 1, &bits)) {
            h->substate_huffman = BROTLI_STATE_HUFFMAN_SIMPLE_BUILD;
            return BROTLI_DECODER_NEEDS_MORE_INPUT;
          }
          h->symbol += bits;
        }
        BROTLI_LOG_UINT(h->symbol);
        table_size = BrotliBuildSimpleHuffmanTable(
            table, HUFFMAN_TABLE_BITS, h->symbols_lists_array, h->symbol);
        if (opt_table_size) {
          *opt_table_size = table_size;
        }
        h->substate_huffman = BROTLI_STATE_HUFFMAN_NONE;
        return BROTLI_DECODER_SUCCESS;
      }


      case BROTLI_STATE_HUFFMAN_COMPLEX: {
        uint32_t i;
        BrotliDecoderErrorCode result = ReadCodeLengthCodeLengths(s);
        if (result != BROTLI_DECODER_SUCCESS) {
          return result;
        }
        BrotliBuildCodeLengthsHuffmanTable(h->table,
                                           h->code_length_code_lengths,
                                           h->code_length_histo);
        memset(&h->code_length_histo[0], 0, sizeof(h->code_length_histo));
        for (i = 0; i <= BROTLI_HUFFMAN_MAX_CODE_LENGTH; ++i) {
          h->next_symbol[i] = (int)i - (BROTLI_HUFFMAN_MAX_CODE_LENGTH + 1);
          h->symbol_lists[h->next_symbol[i]] = 0xFFFF;
        }

        h->symbol = 0;
        h->prev_code_len = BROTLI_INITIAL_REPEATED_CODE_LENGTH;
        h->repeat = 0;
        h->repeat_code_len = 0;
        h->space = 32768;
        h->substate_huffman = BROTLI_STATE_HUFFMAN_LENGTH_SYMBOLS;
      }


      case BROTLI_STATE_HUFFMAN_LENGTH_SYMBOLS: {
        uint32_t table_size;
        BrotliDecoderErrorCode result = ReadSymbolCodeLengths(
            alphabet_size_limit, s);
        if (result == BROTLI_DECODER_NEEDS_MORE_INPUT) {
          result = SafeReadSymbolCodeLengths(alphabet_size_limit, s);
        }
        if (result != BROTLI_DECODER_SUCCESS) {
          return result;
        }

        if (h->space != 0) {
          BROTLI_LOG(("[ReadHuffmanCode] space = %d\n", (int)h->space));
          return BROTLI_FAILURE(BROTLI_DECODER_ERROR_FORMAT_HUFFMAN_SPACE);
        }
        table_size = BrotliBuildHuffmanTable(
            table, HUFFMAN_TABLE_BITS, h->symbol_lists, h->code_length_histo);
        if (opt_table_size) {
          *opt_table_size = table_size;
        }
        h->substate_huffman = BROTLI_STATE_HUFFMAN_NONE;
        return BROTLI_DECODER_SUCCESS;
      }

      default:
        return
            BROTLI_FAILURE(BROTLI_DECODER_ERROR_UNREACHABLE);
    }
  }
}


static BROTLI_INLINE uint32_t ReadBlockLength(const HuffmanCode* table,
                                              BrotliBitReader* br) {
  uint32_t code;
  uint32_t nbits;
  code = ReadSymbol(table, br);
  nbits = _kBrotliPrefixCodeRanges[code].nbits;
  return _kBrotliPrefixCodeRanges[code].offset + BrotliReadBits24(br, nbits);
}



static BROTLI_INLINE BROTLI_BOOL SafeReadBlockLength(
    BrotliDecoderState* s, uint32_t* result, const HuffmanCode* table,
    BrotliBitReader* br) {
  uint32_t index;
  if (s->substate_read_block_length == BROTLI_STATE_READ_BLOCK_LENGTH_NONE) {
    if (!SafeReadSymbol(table, br, &index)) {
      return BROTLI_FALSE;
    }
  } else {
    index = s->block_length_index;
  }
  {
    uint32_t bits;
    uint32_t nbits = _kBrotliPrefixCodeRanges[index].nbits;
    uint32_t offset = _kBrotliPrefixCodeRanges[index].offset;
    if (!BrotliSafeReadBits(br, nbits, &bits)) {
      s->block_length_index = index;
      s->substate_read_block_length = BROTLI_STATE_READ_BLOCK_LENGTH_SUFFIX;
      return BROTLI_FALSE;
    }
    *result = offset + bits;
    s->substate_read_block_length = BROTLI_STATE_READ_BLOCK_LENGTH_NONE;
    return BROTLI_TRUE;
  }
}
# 924 "project/brotli/c/dec/decode.c"
static BROTLI_NOINLINE void InverseMoveToFrontTransform(
    uint8_t* v, uint32_t v_len, BrotliDecoderState* state) {

  uint32_t i = 1;
  uint32_t upper_bound = state->mtf_upper_bound;
  uint32_t* mtf = &state->mtf[1];
  uint8_t* mtf_u8 = (uint8_t*)mtf;

  const uint8_t b0123[4] = {0, 1, 2, 3};
  uint32_t pattern;
  memcpy(&pattern, &b0123, 4);


  mtf[0] = pattern;
  do {
    pattern += 0x04040404;
    mtf[i] = pattern;
    i++;
  } while (i <= upper_bound);


  upper_bound = 0;
  for (i = 0; i < v_len; ++i) {
    int index = v[i];
    uint8_t value = mtf_u8[index];
    upper_bound |= v[i];
    v[i] = value;
    mtf_u8[-1] = value;
    do {
      index--;
      mtf_u8[index + 1] = mtf_u8[index];
    } while (index >= 0);
  }

  state->mtf_upper_bound = upper_bound >> 2;
}


static BrotliDecoderErrorCode HuffmanTreeGroupDecode(
    HuffmanTreeGroup* group, BrotliDecoderState* s) {
  BrotliMetablockHeaderArena* h = &s->arena.header;
  if (h->substate_tree_group != BROTLI_STATE_TREE_GROUP_LOOP) {
    h->next = group->codes;
    h->htree_index = 0;
    h->substate_tree_group = BROTLI_STATE_TREE_GROUP_LOOP;
  }
  while (h->htree_index < group->num_htrees) {
    uint32_t table_size;
    BrotliDecoderErrorCode result = ReadHuffmanCode(group->alphabet_size_max,
        group->alphabet_size_limit, h->next, &table_size, s);
    if (result != BROTLI_DECODER_SUCCESS) return result;
    group->htrees[h->htree_index] = h->next;
    h->next += table_size;
    ++h->htree_index;
  }
  h->substate_tree_group = BROTLI_STATE_TREE_GROUP_NONE;
  return BROTLI_DECODER_SUCCESS;
}
# 991 "project/brotli/c/dec/decode.c"
static BrotliDecoderErrorCode DecodeContextMap(uint32_t context_map_size,
                                               uint32_t* num_htrees,
                                               uint8_t** context_map_arg,
                                               BrotliDecoderState* s) {
  BrotliBitReader* br = &s->br;
  BrotliDecoderErrorCode result = BROTLI_DECODER_SUCCESS;
  BrotliMetablockHeaderArena* h = &s->arena.header;

  switch ((int)h->substate_context_map) {
    case BROTLI_STATE_CONTEXT_MAP_NONE:
      result = DecodeVarLenUint8(s, br, num_htrees);
      if (result != BROTLI_DECODER_SUCCESS) {
        return result;
      }
      (*num_htrees)++;
      h->context_index = 0;
      BROTLI_LOG_UINT(context_map_size);
      BROTLI_LOG_UINT(*num_htrees);
      *context_map_arg =
          (uint8_t*)BROTLI_DECODER_ALLOC(s, (size_t)context_map_size);
      if (*context_map_arg == 0) {
        return BROTLI_FAILURE(BROTLI_DECODER_ERROR_ALLOC_CONTEXT_MAP);
      }
      if (*num_htrees <= 1) {
        memset(*context_map_arg, 0, (size_t)context_map_size);
        return BROTLI_DECODER_SUCCESS;
      }
      h->substate_context_map = BROTLI_STATE_CONTEXT_MAP_READ_PREFIX;


    case BROTLI_STATE_CONTEXT_MAP_READ_PREFIX: {
      uint32_t bits;


      if (!BrotliSafeGetBits(br, 5, &bits)) {
        return BROTLI_DECODER_NEEDS_MORE_INPUT;
      }
      if ((bits & 1) != 0) {
        h->max_run_length_prefix = (bits >> 1) + 1;
        BrotliDropBits(br, 5);
      } else {
        h->max_run_length_prefix = 0;
        BrotliDropBits(br, 1);
      }
      BROTLI_LOG_UINT(h->max_run_length_prefix);
      h->substate_context_map = BROTLI_STATE_CONTEXT_MAP_HUFFMAN;
    }


    case BROTLI_STATE_CONTEXT_MAP_HUFFMAN: {
      uint32_t alphabet_size = *num_htrees + h->max_run_length_prefix;
      result = ReadHuffmanCode(alphabet_size, alphabet_size,
                               h->context_map_table, NULL, s);
      if (result != BROTLI_DECODER_SUCCESS) return result;
      h->code = 0xFFFF;
      h->substate_context_map = BROTLI_STATE_CONTEXT_MAP_DECODE;
    }


    case BROTLI_STATE_CONTEXT_MAP_DECODE: {
      uint32_t context_index = h->context_index;
      uint32_t max_run_length_prefix = h->max_run_length_prefix;
      uint8_t* context_map = *context_map_arg;
      uint32_t code = h->code;
      BROTLI_BOOL skip_preamble = (code != 0xFFFF);
      while (context_index < context_map_size || skip_preamble) {
        if (!skip_preamble) {
          if (!SafeReadSymbol(h->context_map_table, br, &code)) {
            h->code = 0xFFFF;
            h->context_index = context_index;
            return BROTLI_DECODER_NEEDS_MORE_INPUT;
          }
          BROTLI_LOG_UINT(code);

          if (code == 0) {
            context_map[context_index++] = 0;
            continue;
          }
          if (code > max_run_length_prefix) {
            context_map[context_index++] =
                (uint8_t)(code - max_run_length_prefix);
            continue;
          }
        } else {
          skip_preamble = BROTLI_FALSE;
        }

        {
          uint32_t reps;
          if (!BrotliSafeReadBits(br, code, &reps)) {
            h->code = code;
            h->context_index = context_index;
            return BROTLI_DECODER_NEEDS_MORE_INPUT;
          }
          reps += 1U << code;
          BROTLI_LOG_UINT(reps);
          if (context_index + reps > context_map_size) {
            return
                BROTLI_FAILURE(BROTLI_DECODER_ERROR_FORMAT_CONTEXT_MAP_REPEAT);
          }
          do {
            context_map[context_index++] = 0;
          } while (--reps);
        }
      }
    }


    case BROTLI_STATE_CONTEXT_MAP_TRANSFORM: {
      uint32_t bits;
      if (!BrotliSafeReadBits(br, 1, &bits)) {
        h->substate_context_map = BROTLI_STATE_CONTEXT_MAP_TRANSFORM;
        return BROTLI_DECODER_NEEDS_MORE_INPUT;
      }
      if (bits != 0) {
        InverseMoveToFrontTransform(*context_map_arg, context_map_size, s);
      }
      h->substate_context_map = BROTLI_STATE_CONTEXT_MAP_NONE;
      return BROTLI_DECODER_SUCCESS;
    }

    default:
      return
          BROTLI_FAILURE(BROTLI_DECODER_ERROR_UNREACHABLE);
  }
}



static BROTLI_INLINE BROTLI_BOOL DecodeBlockTypeAndLength(
    int safe, BrotliDecoderState* s, int tree_type) {
  uint32_t max_block_type = s->num_block_types[tree_type];
  const HuffmanCode* type_tree = &s->block_type_trees[
      tree_type * BROTLI_HUFFMAN_MAX_SIZE_258];
  const HuffmanCode* len_tree = &s->block_len_trees[
      tree_type * BROTLI_HUFFMAN_MAX_SIZE_26];
  BrotliBitReader* br = &s->br;
  uint32_t* ringbuffer = &s->block_type_rb[tree_type * 2];
  uint32_t block_type;
  if (max_block_type <= 1) {
    return BROTLI_FALSE;
  }


  if (!safe) {
    block_type = ReadSymbol(type_tree, br);
    s->block_length[tree_type] = ReadBlockLength(len_tree, br);
  } else {
    BrotliBitReaderState memento;
    BrotliBitReaderSaveState(br, &memento);
    if (!SafeReadSymbol(type_tree, br, &block_type)) return BROTLI_FALSE;
    if (!SafeReadBlockLength(s, &s->block_length[tree_type], len_tree, br)) {
      s->substate_read_block_length = BROTLI_STATE_READ_BLOCK_LENGTH_NONE;
      BrotliBitReaderRestoreState(br, &memento);
      return BROTLI_FALSE;
    }
  }

  if (block_type == 1) {
    block_type = ringbuffer[1] + 1;
  } else if (block_type == 0) {
    block_type = ringbuffer[0];
  } else {
    block_type -= 2;
  }
  if (block_type >= max_block_type) {
    block_type -= max_block_type;
  }
  ringbuffer[0] = ringbuffer[1];
  ringbuffer[1] = block_type;
  return BROTLI_TRUE;
}

static BROTLI_INLINE void DetectTrivialLiteralBlockTypes(
    BrotliDecoderState* s) {
  size_t i;
  for (i = 0; i < 8; ++i) s->trivial_literal_contexts[i] = 0;
  for (i = 0; i < s->num_block_types[0]; i++) {
    size_t offset = i << BROTLI_LITERAL_CONTEXT_BITS;
    size_t error = 0;
    size_t sample = s->context_map[offset];
    size_t j;
    for (j = 0; j < (1u << BROTLI_LITERAL_CONTEXT_BITS);) {
      BROTLI_REPEAT(4, error |= s->context_map[offset + j++] ^ sample;)
    }
    if (error == 0) {
      s->trivial_literal_contexts[i >> 5] |= 1u << (i & 31);
    }
  }
}

static BROTLI_INLINE void PrepareLiteralDecoding(BrotliDecoderState* s) {
  uint8_t context_mode;
  size_t trivial;
  uint32_t block_type = s->block_type_rb[1];
  uint32_t context_offset = block_type << BROTLI_LITERAL_CONTEXT_BITS;
  s->context_map_slice = s->context_map + context_offset;
  trivial = s->trivial_literal_contexts[block_type >> 5];
  s->trivial_literal_context = (trivial >> (block_type & 31)) & 1;
  s->literal_htree = s->literal_hgroup.htrees[s->context_map_slice[0]];
  context_mode = s->context_modes[block_type] & 3;
  s->context_lookup = BROTLI_CONTEXT_LUT(context_mode);
}



static BROTLI_INLINE BROTLI_BOOL DecodeLiteralBlockSwitchInternal(
    int safe, BrotliDecoderState* s) {
  if (!DecodeBlockTypeAndLength(safe, s, 0)) {
    return BROTLI_FALSE;
  }
  PrepareLiteralDecoding(s);
  return BROTLI_TRUE;
}

static void BROTLI_NOINLINE DecodeLiteralBlockSwitch(BrotliDecoderState* s) {
  DecodeLiteralBlockSwitchInternal(0, s);
}

static BROTLI_BOOL BROTLI_NOINLINE SafeDecodeLiteralBlockSwitch(
    BrotliDecoderState* s) {
  return DecodeLiteralBlockSwitchInternal(1, s);
}



static BROTLI_INLINE BROTLI_BOOL DecodeCommandBlockSwitchInternal(
    int safe, BrotliDecoderState* s) {
  if (!DecodeBlockTypeAndLength(safe, s, 1)) {
    return BROTLI_FALSE;
  }
  s->htree_command = s->insert_copy_hgroup.htrees[s->block_type_rb[3]];
  return BROTLI_TRUE;
}

static void BROTLI_NOINLINE DecodeCommandBlockSwitch(BrotliDecoderState* s) {
  DecodeCommandBlockSwitchInternal(0, s);
}

static BROTLI_BOOL BROTLI_NOINLINE SafeDecodeCommandBlockSwitch(
    BrotliDecoderState* s) {
  return DecodeCommandBlockSwitchInternal(1, s);
}



static BROTLI_INLINE BROTLI_BOOL DecodeDistanceBlockSwitchInternal(
    int safe, BrotliDecoderState* s) {
  if (!DecodeBlockTypeAndLength(safe, s, 2)) {
    return BROTLI_FALSE;
  }
  s->dist_context_map_slice = s->dist_context_map +
      (s->block_type_rb[5] << BROTLI_DISTANCE_CONTEXT_BITS);
  s->dist_htree_index = s->dist_context_map_slice[s->distance_context];
  return BROTLI_TRUE;
}

static void BROTLI_NOINLINE DecodeDistanceBlockSwitch(BrotliDecoderState* s) {
  DecodeDistanceBlockSwitchInternal(0, s);
}

static BROTLI_BOOL BROTLI_NOINLINE SafeDecodeDistanceBlockSwitch(
    BrotliDecoderState* s) {
  return DecodeDistanceBlockSwitchInternal(1, s);
}

static size_t UnwrittenBytes(const BrotliDecoderState* s, BROTLI_BOOL wrap) {
  size_t pos = wrap && s->pos > s->ringbuffer_size ?
      (size_t)s->ringbuffer_size : (size_t)(s->pos);
  size_t partial_pos_rb = (s->rb_roundtrips * (size_t)s->ringbuffer_size) + pos;
  return partial_pos_rb - s->partial_pos_out;
}




static BrotliDecoderErrorCode BROTLI_NOINLINE WriteRingBuffer(
    BrotliDecoderState* s, size_t* available_out, uint8_t** next_out,
    size_t* total_out, BROTLI_BOOL force) {
  uint8_t* start =
      s->ringbuffer + (s->partial_pos_out & (size_t)s->ringbuffer_mask);
  size_t to_write = UnwrittenBytes(s, BROTLI_TRUE);
  size_t num_written = *available_out;
  if (num_written > to_write) {
    num_written = to_write;
  }
  if (s->meta_block_remaining_len < 0) {
    return BROTLI_FAILURE(BROTLI_DECODER_ERROR_FORMAT_BLOCK_LENGTH_1);
  }
  if (next_out && !*next_out) {
    *next_out = start;
  } else {
    if (next_out) {
      memcpy(*next_out, start, num_written);
      *next_out += num_written;
    }
  }
  *available_out -= num_written;
  BROTLI_LOG_UINT(to_write);
  BROTLI_LOG_UINT(num_written);
  s->partial_pos_out += num_written;
  if (total_out) {
    *total_out = s->partial_pos_out;
  }
  if (num_written < to_write) {
    if (s->ringbuffer_size == (1 << s->window_bits) || force) {
      return BROTLI_DECODER_NEEDS_MORE_OUTPUT;
    } else {
      return BROTLI_DECODER_SUCCESS;
    }
  }

  if (s->ringbuffer_size == (1 << s->window_bits) &&
      s->pos >= s->ringbuffer_size) {
    s->pos -= s->ringbuffer_size;
    s->rb_roundtrips++;
    s->should_wrap_ringbuffer = (size_t)s->pos != 0 ? 1 : 0;
  }
  return BROTLI_DECODER_SUCCESS;
}

static void BROTLI_NOINLINE WrapRingBuffer(BrotliDecoderState* s) {
  if (s->should_wrap_ringbuffer) {
    memcpy(s->ringbuffer, s->ringbuffer_end, (size_t)s->pos);
    s->should_wrap_ringbuffer = 0;
  }
}
# 1326 "project/brotli/c/dec/decode.c"
static BROTLI_BOOL BROTLI_NOINLINE BrotliEnsureRingBuffer(
    BrotliDecoderState* s) {
  uint8_t* old_ringbuffer = s->ringbuffer;
  if (s->ringbuffer_size == s->new_ringbuffer_size) {
    return BROTLI_TRUE;
  }

  s->ringbuffer = (uint8_t*)BROTLI_DECODER_ALLOC(s,
      (size_t)(s->new_ringbuffer_size) + kRingBufferWriteAheadSlack);
  if (s->ringbuffer == 0) {

    s->ringbuffer = old_ringbuffer;
    return BROTLI_FALSE;
  }
  s->ringbuffer[s->new_ringbuffer_size - 2] = 0;
  s->ringbuffer[s->new_ringbuffer_size - 1] = 0;

  if (!!old_ringbuffer) {
    memcpy(s->ringbuffer, old_ringbuffer, (size_t)s->pos);
    BROTLI_DECODER_FREE(s, old_ringbuffer);
  }

  s->ringbuffer_size = s->new_ringbuffer_size;
  s->ringbuffer_mask = s->new_ringbuffer_size - 1;
  s->ringbuffer_end = s->ringbuffer + s->ringbuffer_size;

  return BROTLI_TRUE;
}

static BrotliDecoderErrorCode BROTLI_NOINLINE CopyUncompressedBlockToOutput(
    size_t* available_out, uint8_t** next_out, size_t* total_out,
    BrotliDecoderState* s) {

  if (!BrotliEnsureRingBuffer(s)) {
    return BROTLI_FAILURE(BROTLI_DECODER_ERROR_ALLOC_RING_BUFFER_1);
  }


  for (;;) {
    switch (s->substate_uncompressed) {
      case BROTLI_STATE_UNCOMPRESSED_NONE: {
        int nbytes = (int)BrotliGetRemainingBytes(&s->br);
        if (nbytes > s->meta_block_remaining_len) {
          nbytes = s->meta_block_remaining_len;
        }
        if (s->pos + nbytes > s->ringbuffer_size) {
          nbytes = s->ringbuffer_size - s->pos;
        }

        BrotliCopyBytes(&s->ringbuffer[s->pos], &s->br, (size_t)nbytes);
        s->pos += nbytes;
        s->meta_block_remaining_len -= nbytes;
        if (s->pos < 1 << s->window_bits) {
          if (s->meta_block_remaining_len == 0) {
            return BROTLI_DECODER_SUCCESS;
          }
          return BROTLI_DECODER_NEEDS_MORE_INPUT;
        }
        s->substate_uncompressed = BROTLI_STATE_UNCOMPRESSED_WRITE;
      }


      case BROTLI_STATE_UNCOMPRESSED_WRITE: {
        BrotliDecoderErrorCode result;
        result = WriteRingBuffer(
            s, available_out, next_out, total_out, BROTLI_FALSE);
        if (result != BROTLI_DECODER_SUCCESS) {
          return result;
        }
        if (s->ringbuffer_size == 1 << s->window_bits) {
          s->max_distance = s->max_backward_distance;
        }
        s->substate_uncompressed = BROTLI_STATE_UNCOMPRESSED_NONE;
        break;
      }
    }
  }
  BROTLI_DCHECK(0);
}







static void BROTLI_NOINLINE BrotliCalculateRingBufferSize(
    BrotliDecoderState* s) {
  int window_size = 1 << s->window_bits;
  int new_ringbuffer_size = window_size;


  int min_size = s->ringbuffer_size ? s->ringbuffer_size : 1024;
  int output_size;


  if (s->ringbuffer_size == window_size) {
    return;
  }


  if (s->is_metadata) {
    return;
  }

  if (!s->ringbuffer) {
    output_size = 0;
  } else {
    output_size = s->pos;
  }
  output_size += s->meta_block_remaining_len;
  min_size = min_size < output_size ? output_size : min_size;

  if (!!s->canny_ringbuffer_allocation) {



    while ((new_ringbuffer_size >> 1) >= min_size) {
      new_ringbuffer_size >>= 1;
    }
  }

  s->new_ringbuffer_size = new_ringbuffer_size;
}


static BrotliDecoderErrorCode ReadContextModes(BrotliDecoderState* s) {
  BrotliBitReader* br = &s->br;
  int i = s->loop_counter;

  while (i < (int)s->num_block_types[0]) {
    uint32_t bits;
    if (!BrotliSafeReadBits(br, 2, &bits)) {
      s->loop_counter = i;
      return BROTLI_DECODER_NEEDS_MORE_INPUT;
    }
    s->context_modes[i] = (uint8_t)bits;
    BROTLI_LOG_ARRAY_INDEX(s->context_modes, i);
    i++;
  }
  return BROTLI_DECODER_SUCCESS;
}

static BROTLI_INLINE void TakeDistanceFromRingBuffer(BrotliDecoderState* s) {
  int offset = s->distance_code - 3;
  if (s->distance_code <= 3) {

    s->distance_context = 1 >> s->distance_code;
    s->distance_code = s->dist_rb[(s->dist_rb_idx - offset) & 3];
    s->dist_rb_idx -= s->distance_context;
  } else {
    int index_delta = 3;
    int delta;
    int base = s->distance_code - 10;
    if (s->distance_code < 10) {
      base = s->distance_code - 4;
    } else {
      index_delta = 2;
    }

    delta = ((0x605142 >> (4 * base)) & 0xF) - 3;
    s->distance_code = s->dist_rb[(s->dist_rb_idx + index_delta) & 0x3] + delta;
    if (s->distance_code <= 0) {


      s->distance_code = 0x7FFFFFFF;
    }
  }
}

static BROTLI_INLINE BROTLI_BOOL SafeReadBits(
    BrotliBitReader* const br, uint32_t n_bits, uint32_t* val) {
  if (n_bits != 0) {
    return BrotliSafeReadBits(br, n_bits, val);
  } else {
    *val = 0;
    return BROTLI_TRUE;
  }
}

static BROTLI_INLINE BROTLI_BOOL SafeReadBits32(
    BrotliBitReader* const br, uint32_t n_bits, uint32_t* val) {
  if (n_bits != 0) {
    return BrotliSafeReadBits32(br, n_bits, val);
  } else {
    *val = 0;
    return BROTLI_TRUE;
  }
}
# 1583 "project/brotli/c/dec/decode.c"
static void CalculateDistanceLut(BrotliDecoderState* s) {
  BrotliMetablockBodyArena* b = &s->arena.body;
  uint32_t npostfix = s->distance_postfix_bits;
  uint32_t ndirect = s->num_direct_distance_codes;
  uint32_t alphabet_size_limit = s->distance_hgroup.alphabet_size_limit;
  uint32_t postfix = 1u << npostfix;
  uint32_t j;
  uint32_t bits = 1;
  uint32_t half = 0;


  uint32_t i = BROTLI_NUM_DISTANCE_SHORT_CODES;


  for (j = 0; j < ndirect; ++j) {
    b->dist_extra_bits[i] = 0;
    b->dist_offset[i] = j + 1;
    ++i;
  }


  while (i < alphabet_size_limit) {
    uint32_t base = ndirect + ((((2 + half) << bits) - 4) << npostfix) + 1;

    for (j = 0; j < postfix; ++j) {
      b->dist_extra_bits[i] = (uint8_t)bits;
      b->dist_offset[i] = base + j;
      ++i;
    }
    bits = bits + half;
    half = half ^ 1;
  }
}


static BROTLI_INLINE BROTLI_BOOL ReadDistanceInternal(
    int safe, BrotliDecoderState* s, BrotliBitReader* br) {
  BrotliMetablockBodyArena* b = &s->arena.body;
  uint32_t code;
  uint32_t bits;
  BrotliBitReaderState memento;
  HuffmanCode* distance_tree = s->distance_hgroup.htrees[s->dist_htree_index];
  if (!safe) {
    code = ReadSymbol(distance_tree, br);
  } else {
    BrotliBitReaderSaveState(br, &memento);
    if (!SafeReadSymbol(distance_tree, br, &code)) {
      return BROTLI_FALSE;
    }
  }
  --s->block_length[2];


  s->distance_context = 0;
  if ((code & ~0xFu) == 0) {
    s->distance_code = (int)code;
    TakeDistanceFromRingBuffer(s);
    return BROTLI_TRUE;
  }
  if (!safe) {
    bits = BrotliReadBits32(br, b->dist_extra_bits[code]);
  } else {
    if (!SafeReadBits32(br, b->dist_extra_bits[code], &bits)) {
      ++s->block_length[2];
      BrotliBitReaderRestoreState(br, &memento);
      return BROTLI_FALSE;
    }
  }
  s->distance_code =
      (int)(b->dist_offset[code] + (bits << s->distance_postfix_bits));
  return BROTLI_TRUE;
}

static BROTLI_INLINE void ReadDistance(
    BrotliDecoderState* s, BrotliBitReader* br) {
  ReadDistanceInternal(0, s, br);
}

static BROTLI_INLINE BROTLI_BOOL SafeReadDistance(
    BrotliDecoderState* s, BrotliBitReader* br) {
  return ReadDistanceInternal(1, s, br);
}

static BROTLI_INLINE BROTLI_BOOL ReadCommandInternal(
    int safe, BrotliDecoderState* s, BrotliBitReader* br, int* insert_length) {
  uint32_t cmd_code;
  uint32_t insert_len_extra = 0;
  uint32_t copy_length;
  CmdLutElement v;
  BrotliBitReaderState memento;
  if (!safe) {
    cmd_code = ReadSymbol(s->htree_command, br);
  } else {
    BrotliBitReaderSaveState(br, &memento);
    if (!SafeReadSymbol(s->htree_command, br, &cmd_code)) {
      return BROTLI_FALSE;
    }
  }
  v = kCmdLut[cmd_code];
  s->distance_code = v.distance_code;
  s->distance_context = v.context;
  s->dist_htree_index = s->dist_context_map_slice[s->distance_context];
  *insert_length = v.insert_len_offset;
  if (!safe) {
    if (BROTLI_PREDICT_FALSE(v.insert_len_extra_bits != 0)) {
      insert_len_extra = BrotliReadBits24(br, v.insert_len_extra_bits);
    }
    copy_length = BrotliReadBits24(br, v.copy_len_extra_bits);
  } else {
    if (!SafeReadBits(br, v.insert_len_extra_bits, &insert_len_extra) ||
        !SafeReadBits(br, v.copy_len_extra_bits, &copy_length)) {
      BrotliBitReaderRestoreState(br, &memento);
      return BROTLI_FALSE;
    }
  }
  s->copy_length = (int)copy_length + v.copy_len_offset;
  --s->block_length[1];
  *insert_length += (int)insert_len_extra;
  return BROTLI_TRUE;
}

static BROTLI_INLINE void ReadCommand(
    BrotliDecoderState* s, BrotliBitReader* br, int* insert_length) {
  ReadCommandInternal(0, s, br, insert_length);
}

static BROTLI_INLINE BROTLI_BOOL SafeReadCommand(
    BrotliDecoderState* s, BrotliBitReader* br, int* insert_length) {
  return ReadCommandInternal(1, s, br, insert_length);
}

static BROTLI_INLINE BROTLI_BOOL CheckInputAmount(
    int safe, BrotliBitReader* const br, size_t num) {
  if (safe) {
    return BROTLI_TRUE;
  }
  return BrotliCheckInputAmount(br, num);
}

#define BROTLI_SAFE(METHOD) \
  { \
    if (safe) { \
      if (!Safe##METHOD) { \
        result = BROTLI_DECODER_NEEDS_MORE_INPUT; \
        goto saveStateAndReturn; \
      } \
    } else { \
      METHOD; \
    } \
  }

static BROTLI_INLINE BrotliDecoderErrorCode ProcessCommandsInternal(
    int safe, BrotliDecoderState* s) {
  int pos = s->pos;
  int i = s->loop_counter;
  BrotliDecoderErrorCode result = BROTLI_DECODER_SUCCESS;
  BrotliBitReader* br = &s->br;

  if (!CheckInputAmount(safe, br, 28)) {
    result = BROTLI_DECODER_NEEDS_MORE_INPUT;
    goto saveStateAndReturn;
  }
  if (!safe) {
    BROTLI_UNUSED(BrotliWarmupBitReader(br));
  }


  if (s->state == BROTLI_STATE_COMMAND_BEGIN) {
    goto CommandBegin;
  } else if (s->state == BROTLI_STATE_COMMAND_INNER) {
    goto CommandInner;
  } else if (s->state == BROTLI_STATE_COMMAND_POST_DECODE_LITERALS) {
    goto CommandPostDecodeLiterals;
  } else if (s->state == BROTLI_STATE_COMMAND_POST_WRAP_COPY) {
    goto CommandPostWrapCopy;
  } else {
    return BROTLI_FAILURE(BROTLI_DECODER_ERROR_UNREACHABLE);
  }

CommandBegin:
  if (safe) {
    s->state = BROTLI_STATE_COMMAND_BEGIN;
  }
  if (!CheckInputAmount(safe, br, 28)) {
    s->state = BROTLI_STATE_COMMAND_BEGIN;
    result = BROTLI_DECODER_NEEDS_MORE_INPUT;
    goto saveStateAndReturn;
  }
  if (BROTLI_PREDICT_FALSE(s->block_length[1] == 0)) {
    BROTLI_SAFE(DecodeCommandBlockSwitch(s));
    goto CommandBegin;
  }

  BROTLI_SAFE(ReadCommand(s, br, &i));
  BROTLI_LOG(("[ProcessCommandsInternal] pos = %d insert = %d copy = %d\n",
              pos, i, s->copy_length));
  if (i == 0) {
    goto CommandPostDecodeLiterals;
  }
  s->meta_block_remaining_len -= i;

CommandInner:
  if (safe) {
    s->state = BROTLI_STATE_COMMAND_INNER;
  }

  if (s->trivial_literal_context) {
    uint32_t bits;
    uint32_t value;
    PreloadSymbol(safe, s->literal_htree, br, &bits, &value);
    do {
      if (!CheckInputAmount(safe, br, 28)) {
        s->state = BROTLI_STATE_COMMAND_INNER;
        result = BROTLI_DECODER_NEEDS_MORE_INPUT;
        goto saveStateAndReturn;
      }
      if (BROTLI_PREDICT_FALSE(s->block_length[0] == 0)) {
        BROTLI_SAFE(DecodeLiteralBlockSwitch(s));
        PreloadSymbol(safe, s->literal_htree, br, &bits, &value);
        if (!s->trivial_literal_context) goto CommandInner;
      }
      if (!safe) {
        s->ringbuffer[pos] =
            (uint8_t)ReadPreloadedSymbol(s->literal_htree, br, &bits, &value);
      } else {
        uint32_t literal;
        if (!SafeReadSymbol(s->literal_htree, br, &literal)) {
          result = BROTLI_DECODER_NEEDS_MORE_INPUT;
          goto saveStateAndReturn;
        }
        s->ringbuffer[pos] = (uint8_t)literal;
      }
      --s->block_length[0];
      BROTLI_LOG_ARRAY_INDEX(s->ringbuffer, pos);
      ++pos;
      if (BROTLI_PREDICT_FALSE(pos == s->ringbuffer_size)) {
        s->state = BROTLI_STATE_COMMAND_INNER_WRITE;
        --i;
        goto saveStateAndReturn;
      }
    } while (--i != 0);
  } else {
    uint8_t p1 = s->ringbuffer[(pos - 1) & s->ringbuffer_mask];
    uint8_t p2 = s->ringbuffer[(pos - 2) & s->ringbuffer_mask];
    do {
      const HuffmanCode* hc;
      uint8_t context;
      if (!CheckInputAmount(safe, br, 28)) {
        s->state = BROTLI_STATE_COMMAND_INNER;
        result = BROTLI_DECODER_NEEDS_MORE_INPUT;
        goto saveStateAndReturn;
      }
      if (BROTLI_PREDICT_FALSE(s->block_length[0] == 0)) {
        BROTLI_SAFE(DecodeLiteralBlockSwitch(s));
        if (s->trivial_literal_context) goto CommandInner;
      }
      context = BROTLI_CONTEXT(p1, p2, s->context_lookup);
      BROTLI_LOG_UINT(context);
      hc = s->literal_hgroup.htrees[s->context_map_slice[context]];
      p2 = p1;
      if (!safe) {
        p1 = (uint8_t)ReadSymbol(hc, br);
      } else {
        uint32_t literal;
        if (!SafeReadSymbol(hc, br, &literal)) {
          result = BROTLI_DECODER_NEEDS_MORE_INPUT;
          goto saveStateAndReturn;
        }
        p1 = (uint8_t)literal;
      }
      s->ringbuffer[pos] = p1;
      --s->block_length[0];
      BROTLI_LOG_UINT(s->context_map_slice[context]);
      BROTLI_LOG_ARRAY_INDEX(s->ringbuffer, pos & s->ringbuffer_mask);
      ++pos;
      if (BROTLI_PREDICT_FALSE(pos == s->ringbuffer_size)) {
        s->state = BROTLI_STATE_COMMAND_INNER_WRITE;
        --i;
        goto saveStateAndReturn;
      }
    } while (--i != 0);
  }
  BROTLI_LOG_UINT(s->meta_block_remaining_len);
  if (BROTLI_PREDICT_FALSE(s->meta_block_remaining_len <= 0)) {
    s->state = BROTLI_STATE_METABLOCK_DONE;
    goto saveStateAndReturn;
  }

CommandPostDecodeLiterals:
  if (safe) {
    s->state = BROTLI_STATE_COMMAND_POST_DECODE_LITERALS;
  }
  if (s->distance_code >= 0) {

    s->distance_context = s->distance_code ? 0 : 1;
    --s->dist_rb_idx;
    s->distance_code = s->dist_rb[s->dist_rb_idx & 3];
  } else {

    if (BROTLI_PREDICT_FALSE(s->block_length[2] == 0)) {
      BROTLI_SAFE(DecodeDistanceBlockSwitch(s));
    }
    BROTLI_SAFE(ReadDistance(s, br));
  }
  BROTLI_LOG(("[ProcessCommandsInternal] pos = %d distance = %d\n",
              pos, s->distance_code));
  if (s->max_distance != s->max_backward_distance) {
    s->max_distance =
        (pos < s->max_backward_distance) ? pos : s->max_backward_distance;
  }
  i = s->copy_length;


  if (s->distance_code > s->max_distance) {



    if (s->distance_code > BROTLI_MAX_ALLOWED_DISTANCE) {
      BROTLI_LOG(("Invalid backward reference. pos: %d distance: %d "
          "len: %d bytes left: %d\n",
          pos, s->distance_code, i, s->meta_block_remaining_len));
      return BROTLI_FAILURE(BROTLI_DECODER_ERROR_FORMAT_DISTANCE);
    }
    if (i >= BROTLI_MIN_DICTIONARY_WORD_LENGTH &&
        i <= BROTLI_MAX_DICTIONARY_WORD_LENGTH) {
      int address = s->distance_code - s->max_distance - 1;
      const BrotliDictionary* words = s->dictionary;
      const BrotliTransforms* transforms = s->transforms;
      int offset = (int)s->dictionary->offsets_by_length[i];
      uint32_t shift = s->dictionary->size_bits_by_length[i];

      int mask = (int)BitMask(shift);
      int word_idx = address & mask;
      int transform_idx = address >> shift;

      s->dist_rb_idx += s->distance_context;
      offset += word_idx * i;
      if (BROTLI_PREDICT_FALSE(!words->data)) {
        return BROTLI_FAILURE(BROTLI_DECODER_ERROR_DICTIONARY_NOT_SET);
      }
      if (transform_idx < (int)transforms->num_transforms) {
        const uint8_t* word = &words->data[offset];
        int len = i;
        if (transform_idx == transforms->cutOffTransforms[0]) {
          memcpy(&s->ringbuffer[pos], word, (size_t)len);
          BROTLI_LOG(("[ProcessCommandsInternal] dictionary word: [%.*s]\n",
                      len, word));
        } else {
          len = BrotliTransformDictionaryWord(&s->ringbuffer[pos], word, len,
              transforms, transform_idx);
          BROTLI_LOG(("[ProcessCommandsInternal] dictionary word: [%.*s],"
                      " transform_idx = %d, transformed: [%.*s]\n",
                      i, word, transform_idx, len, &s->ringbuffer[pos]));
        }
        pos += len;
        s->meta_block_remaining_len -= len;
        if (pos >= s->ringbuffer_size) {
          s->state = BROTLI_STATE_COMMAND_POST_WRITE_1;
          goto saveStateAndReturn;
        }
      } else {
        BROTLI_LOG(("Invalid backward reference. pos: %d distance: %d "
            "len: %d bytes left: %d\n",
            pos, s->distance_code, i, s->meta_block_remaining_len));
        return BROTLI_FAILURE(BROTLI_DECODER_ERROR_FORMAT_TRANSFORM);
      }
    } else {
      BROTLI_LOG(("Invalid backward reference. pos: %d distance: %d "
          "len: %d bytes left: %d\n",
          pos, s->distance_code, i, s->meta_block_remaining_len));
      return BROTLI_FAILURE(BROTLI_DECODER_ERROR_FORMAT_DICTIONARY);
    }
  } else {
    int src_start = (pos - s->distance_code) & s->ringbuffer_mask;
    uint8_t* copy_dst = &s->ringbuffer[pos];
    uint8_t* copy_src = &s->ringbuffer[src_start];
    int dst_end = pos + i;
    int src_end = src_start + i;

    s->dist_rb[s->dist_rb_idx & 3] = s->distance_code;
    ++s->dist_rb_idx;
    s->meta_block_remaining_len -= i;



    memmove16(copy_dst, copy_src);
    if (src_end > pos && dst_end > src_start) {

      goto CommandPostWrapCopy;
    }
    if (dst_end >= s->ringbuffer_size || src_end >= s->ringbuffer_size) {

      goto CommandPostWrapCopy;
    }
    pos += i;
    if (i > 16) {
      if (i > 32) {
        memcpy(copy_dst + 16, copy_src + 16, (size_t)(i - 16));
      } else {


        memmove16(copy_dst + 16, copy_src + 16);
      }
    }
  }
  BROTLI_LOG_UINT(s->meta_block_remaining_len);
  if (s->meta_block_remaining_len <= 0) {

    s->state = BROTLI_STATE_METABLOCK_DONE;
    goto saveStateAndReturn;
  } else {
    goto CommandBegin;
  }
CommandPostWrapCopy:
  {
    int wrap_guard = s->ringbuffer_size - pos;
    while (--i >= 0) {
      s->ringbuffer[pos] =
          s->ringbuffer[(pos - s->distance_code) & s->ringbuffer_mask];
      ++pos;
      if (BROTLI_PREDICT_FALSE(--wrap_guard == 0)) {
        s->state = BROTLI_STATE_COMMAND_POST_WRITE_2;
        goto saveStateAndReturn;
      }
    }
  }
  if (s->meta_block_remaining_len <= 0) {

    s->state = BROTLI_STATE_METABLOCK_DONE;
    goto saveStateAndReturn;
  } else {
    goto CommandBegin;
  }

saveStateAndReturn:
  s->pos = pos;
  s->loop_counter = i;
  return result;
}

#undef BROTLI_SAFE

static BROTLI_NOINLINE BrotliDecoderErrorCode ProcessCommands(
    BrotliDecoderState* s) {
  return ProcessCommandsInternal(0, s);
}

static BROTLI_NOINLINE BrotliDecoderErrorCode SafeProcessCommands(
    BrotliDecoderState* s) {
  return ProcessCommandsInternal(1, s);
}

BrotliDecoderResult BrotliDecoderDecompress(
    size_t encoded_size, const uint8_t* encoded_buffer, size_t* decoded_size,
    uint8_t* decoded_buffer) {
  BrotliDecoderState s;
  BrotliDecoderResult result;
  size_t total_out = 0;
  size_t available_in = encoded_size;
  const uint8_t* next_in = encoded_buffer;
  size_t available_out = *decoded_size;
  uint8_t* next_out = decoded_buffer;
  if (!BrotliDecoderStateInit(&s, 0, 0, 0)) {
    return BROTLI_DECODER_RESULT_ERROR;
  }
  result = BrotliDecoderDecompressStream(
      &s, &available_in, &next_in, &available_out, &next_out, &total_out);
  *decoded_size = total_out;
  BrotliDecoderStateCleanup(&s);
  if (result != BROTLI_DECODER_RESULT_SUCCESS) {
    result = BROTLI_DECODER_RESULT_ERROR;
  }
  return result;
}
# 2069 "project/brotli/c/dec/decode.c"
BrotliDecoderResult BrotliDecoderDecompressStream(
    BrotliDecoderState* s, size_t* available_in, const uint8_t** next_in,
    size_t* available_out, uint8_t** next_out, size_t* total_out) {
  BrotliDecoderErrorCode result = BROTLI_DECODER_SUCCESS;
  BrotliBitReader* br = &s->br;

  if (total_out) {
    *total_out = s->partial_pos_out;
  }

  if ((int)s->error_code < 0) {
    return BROTLI_DECODER_RESULT_ERROR;
  }
  if (*available_out && (!next_out || !*next_out)) {
    return SaveErrorCode(
        s, BROTLI_FAILURE(BROTLI_DECODER_ERROR_INVALID_ARGUMENTS));
  }
  if (!*available_out) next_out = 0;
  if (s->buffer_length == 0) {
    br->avail_in = *available_in;
    br->next_in = *next_in;
  } else {



    result = BROTLI_DECODER_NEEDS_MORE_INPUT;
    br->next_in = &s->buffer.u8[0];
  }

  for (;;) {
    if (result != BROTLI_DECODER_SUCCESS) {

      if (result == BROTLI_DECODER_NEEDS_MORE_INPUT) {
        if (s->ringbuffer != 0) {
          BrotliDecoderErrorCode intermediate_result = WriteRingBuffer(s,
              available_out, next_out, total_out, BROTLI_TRUE);

          if ((int)intermediate_result < 0) {
            result = intermediate_result;
            break;
          }
        }
        if (s->buffer_length != 0) {
          if (br->avail_in == 0) {



            s->buffer_length = 0;

            result = BROTLI_DECODER_SUCCESS;
            br->avail_in = *available_in;
            br->next_in = *next_in;
            continue;
          } else if (*available_in != 0) {


            result = BROTLI_DECODER_SUCCESS;
            s->buffer.u8[s->buffer_length] = **next_in;
            s->buffer_length++;
            br->avail_in = s->buffer_length;
            (*next_in)++;
            (*available_in)--;

            continue;
          }

          break;
        } else {

          *next_in = br->next_in;
          *available_in = br->avail_in;
          while (*available_in) {
            s->buffer.u8[s->buffer_length] = **next_in;
            s->buffer_length++;
            (*next_in)++;
            (*available_in)--;
          }
          break;
        }

      }



      if (s->buffer_length != 0) {


        s->buffer_length = 0;
      } else {



        BrotliBitReaderUnload(br);
        *available_in = br->avail_in;
        *next_in = br->next_in;
      }
      break;
    }
    switch (s->state) {
      case BROTLI_STATE_UNINITED:

        if (!BrotliWarmupBitReader(br)) {
          result = BROTLI_DECODER_NEEDS_MORE_INPUT;
          break;
        }

        result = DecodeWindowBits(s, br);
        if (result != BROTLI_DECODER_SUCCESS) {
          break;
        }
        if (s->large_window) {
          s->state = BROTLI_STATE_LARGE_WINDOW_BITS;
          break;
        }
        s->state = BROTLI_STATE_INITIALIZE;
        break;

      case BROTLI_STATE_LARGE_WINDOW_BITS:
        if (!BrotliSafeReadBits(br, 6, &s->window_bits)) {
          result = BROTLI_DECODER_NEEDS_MORE_INPUT;
          break;
        }
        if (s->window_bits < BROTLI_LARGE_MIN_WBITS ||
            s->window_bits > BROTLI_LARGE_MAX_WBITS) {
          result = BROTLI_FAILURE(BROTLI_DECODER_ERROR_FORMAT_WINDOW_BITS);
          break;
        }
        s->state = BROTLI_STATE_INITIALIZE;


      case BROTLI_STATE_INITIALIZE:
        BROTLI_LOG_UINT(s->window_bits);

        s->max_backward_distance = (1 << s->window_bits) - BROTLI_WINDOW_GAP;


        s->block_type_trees = (HuffmanCode*)BROTLI_DECODER_ALLOC(s,
            sizeof(HuffmanCode) * 3 *
                (BROTLI_HUFFMAN_MAX_SIZE_258 + BROTLI_HUFFMAN_MAX_SIZE_26));
        if (s->block_type_trees == 0) {
          result = BROTLI_FAILURE(BROTLI_DECODER_ERROR_ALLOC_BLOCK_TYPE_TREES);
          break;
        }
        s->block_len_trees =
            s->block_type_trees + 3 * BROTLI_HUFFMAN_MAX_SIZE_258;

        s->state = BROTLI_STATE_METABLOCK_BEGIN;


      case BROTLI_STATE_METABLOCK_BEGIN:
        BrotliDecoderStateMetablockBegin(s);
        BROTLI_LOG_UINT(s->pos);
        s->state = BROTLI_STATE_METABLOCK_HEADER;


      case BROTLI_STATE_METABLOCK_HEADER:
        result = DecodeMetaBlockLength(s, br);
        if (result != BROTLI_DECODER_SUCCESS) {
          break;
        }
        BROTLI_LOG_UINT(s->is_last_metablock);
        BROTLI_LOG_UINT(s->meta_block_remaining_len);
        BROTLI_LOG_UINT(s->is_metadata);
        BROTLI_LOG_UINT(s->is_uncompressed);
        if (s->is_metadata || s->is_uncompressed) {
          if (!BrotliJumpToByteBoundary(br)) {
            result = BROTLI_FAILURE(BROTLI_DECODER_ERROR_FORMAT_PADDING_1);
            break;
          }
        }
        if (s->is_metadata) {
          s->state = BROTLI_STATE_METADATA;
          break;
        }
        if (s->meta_block_remaining_len == 0) {
          s->state = BROTLI_STATE_METABLOCK_DONE;
          break;
        }
        BrotliCalculateRingBufferSize(s);
        if (s->is_uncompressed) {
          s->state = BROTLI_STATE_UNCOMPRESSED;
          break;
        }
        s->state = BROTLI_STATE_BEFORE_COMPRESSED_METABLOCK_HEADER;


      case BROTLI_STATE_BEFORE_COMPRESSED_METABLOCK_HEADER: {
        BrotliMetablockHeaderArena* h = &s->arena.header;
        s->loop_counter = 0;

        h->sub_loop_counter = 0;

        h->symbol_lists =
            &h->symbols_lists_array[BROTLI_HUFFMAN_MAX_CODE_LENGTH + 1];
        h->substate_huffman = BROTLI_STATE_HUFFMAN_NONE;
        h->substate_tree_group = BROTLI_STATE_TREE_GROUP_NONE;
        h->substate_context_map = BROTLI_STATE_CONTEXT_MAP_NONE;
        s->state = BROTLI_STATE_HUFFMAN_CODE_0;
      }


      case BROTLI_STATE_HUFFMAN_CODE_0:
        if (s->loop_counter >= 3) {
          s->state = BROTLI_STATE_METABLOCK_HEADER_2;
          break;
        }

        result = DecodeVarLenUint8(s, br, &s->num_block_types[s->loop_counter]);
        if (result != BROTLI_DECODER_SUCCESS) {
          break;
        }
        s->num_block_types[s->loop_counter]++;
        BROTLI_LOG_UINT(s->num_block_types[s->loop_counter]);
        if (s->num_block_types[s->loop_counter] < 2) {
          s->loop_counter++;
          break;
        }
        s->state = BROTLI_STATE_HUFFMAN_CODE_1;


      case BROTLI_STATE_HUFFMAN_CODE_1: {
        uint32_t alphabet_size = s->num_block_types[s->loop_counter] + 2;
        int tree_offset = s->loop_counter * BROTLI_HUFFMAN_MAX_SIZE_258;
        result = ReadHuffmanCode(alphabet_size, alphabet_size,
            &s->block_type_trees[tree_offset], NULL, s);
        if (result != BROTLI_DECODER_SUCCESS) break;
        s->state = BROTLI_STATE_HUFFMAN_CODE_2;
      }


      case BROTLI_STATE_HUFFMAN_CODE_2: {
        uint32_t alphabet_size = BROTLI_NUM_BLOCK_LEN_SYMBOLS;
        int tree_offset = s->loop_counter * BROTLI_HUFFMAN_MAX_SIZE_26;
        result = ReadHuffmanCode(alphabet_size, alphabet_size,
            &s->block_len_trees[tree_offset], NULL, s);
        if (result != BROTLI_DECODER_SUCCESS) break;
        s->state = BROTLI_STATE_HUFFMAN_CODE_3;
      }


      case BROTLI_STATE_HUFFMAN_CODE_3: {
        int tree_offset = s->loop_counter * BROTLI_HUFFMAN_MAX_SIZE_26;
        if (!SafeReadBlockLength(s, &s->block_length[s->loop_counter],
            &s->block_len_trees[tree_offset], br)) {
          result = BROTLI_DECODER_NEEDS_MORE_INPUT;
          break;
        }
        BROTLI_LOG_UINT(s->block_length[s->loop_counter]);
        s->loop_counter++;
        s->state = BROTLI_STATE_HUFFMAN_CODE_0;
        break;
      }

      case BROTLI_STATE_UNCOMPRESSED: {
        result = CopyUncompressedBlockToOutput(
            available_out, next_out, total_out, s);
        if (result != BROTLI_DECODER_SUCCESS) {
          break;
        }
        s->state = BROTLI_STATE_METABLOCK_DONE;
        break;
      }

      case BROTLI_STATE_METADATA:
        for (; s->meta_block_remaining_len > 0; --s->meta_block_remaining_len) {
          uint32_t bits;

          if (!BrotliSafeReadBits(br, 8, &bits)) {
            result = BROTLI_DECODER_NEEDS_MORE_INPUT;
            break;
          }
        }
        if (result == BROTLI_DECODER_SUCCESS) {
          s->state = BROTLI_STATE_METABLOCK_DONE;
        }
        break;

      case BROTLI_STATE_METABLOCK_HEADER_2: {
        uint32_t bits;
        if (!BrotliSafeReadBits(br, 6, &bits)) {
          result = BROTLI_DECODER_NEEDS_MORE_INPUT;
          break;
        }
        s->distance_postfix_bits = bits & BitMask(2);
        bits >>= 2;
        s->num_direct_distance_codes = bits << s->distance_postfix_bits;
        BROTLI_LOG_UINT(s->num_direct_distance_codes);
        BROTLI_LOG_UINT(s->distance_postfix_bits);
        s->context_modes =
            (uint8_t*)BROTLI_DECODER_ALLOC(s, (size_t)s->num_block_types[0]);
        if (s->context_modes == 0) {
          result = BROTLI_FAILURE(BROTLI_DECODER_ERROR_ALLOC_CONTEXT_MODES);
          break;
        }
        s->loop_counter = 0;
        s->state = BROTLI_STATE_CONTEXT_MODES;
      }


      case BROTLI_STATE_CONTEXT_MODES:
        result = ReadContextModes(s);
        if (result != BROTLI_DECODER_SUCCESS) {
          break;
        }
        s->state = BROTLI_STATE_CONTEXT_MAP_1;


      case BROTLI_STATE_CONTEXT_MAP_1:
        result = DecodeContextMap(
            s->num_block_types[0] << BROTLI_LITERAL_CONTEXT_BITS,
            &s->num_literal_htrees, &s->context_map, s);
        if (result != BROTLI_DECODER_SUCCESS) {
          break;
        }
        DetectTrivialLiteralBlockTypes(s);
        s->state = BROTLI_STATE_CONTEXT_MAP_2;


      case BROTLI_STATE_CONTEXT_MAP_2: {
        uint32_t npostfix = s->distance_postfix_bits;
        uint32_t ndirect = s->num_direct_distance_codes;
        uint32_t distance_alphabet_size_max = BROTLI_DISTANCE_ALPHABET_SIZE(
            npostfix, ndirect, BROTLI_MAX_DISTANCE_BITS);
        uint32_t distance_alphabet_size_limit = distance_alphabet_size_max;
        BROTLI_BOOL allocation_success = BROTLI_TRUE;
        if (s->large_window) {
          BrotliDistanceCodeLimit limit = BrotliCalculateDistanceCodeLimit(
              BROTLI_MAX_ALLOWED_DISTANCE, npostfix, ndirect);
          distance_alphabet_size_max = BROTLI_DISTANCE_ALPHABET_SIZE(
              npostfix, ndirect, BROTLI_LARGE_MAX_DISTANCE_BITS);
          distance_alphabet_size_limit = limit.max_alphabet_size;
        }
        result = DecodeContextMap(
            s->num_block_types[2] << BROTLI_DISTANCE_CONTEXT_BITS,
            &s->num_dist_htrees, &s->dist_context_map, s);
        if (result != BROTLI_DECODER_SUCCESS) {
          break;
        }
        allocation_success &= BrotliDecoderHuffmanTreeGroupInit(
            s, &s->literal_hgroup, BROTLI_NUM_LITERAL_SYMBOLS,
            BROTLI_NUM_LITERAL_SYMBOLS, s->num_literal_htrees);
        allocation_success &= BrotliDecoderHuffmanTreeGroupInit(
            s, &s->insert_copy_hgroup, BROTLI_NUM_COMMAND_SYMBOLS,
            BROTLI_NUM_COMMAND_SYMBOLS, s->num_block_types[1]);
        allocation_success &= BrotliDecoderHuffmanTreeGroupInit(
            s, &s->distance_hgroup, distance_alphabet_size_max,
            distance_alphabet_size_limit, s->num_dist_htrees);
        if (!allocation_success) {
          return SaveErrorCode(s,
              BROTLI_FAILURE(BROTLI_DECODER_ERROR_ALLOC_TREE_GROUPS));
        }
        s->loop_counter = 0;
        s->state = BROTLI_STATE_TREE_GROUP;
      }


      case BROTLI_STATE_TREE_GROUP: {
        HuffmanTreeGroup* hgroup = NULL;
        switch (s->loop_counter) {
          case 0: hgroup = &s->literal_hgroup; break;
          case 1: hgroup = &s->insert_copy_hgroup; break;
          case 2: hgroup = &s->distance_hgroup; break;
          default: return SaveErrorCode(s, BROTLI_FAILURE(
              BROTLI_DECODER_ERROR_UNREACHABLE));
        }
        result = HuffmanTreeGroupDecode(hgroup, s);
        if (result != BROTLI_DECODER_SUCCESS) break;
        s->loop_counter++;
        if (s->loop_counter < 3) {
          break;
        }
        s->state = BROTLI_STATE_BEFORE_COMPRESSED_METABLOCK_BODY;
      }


      case BROTLI_STATE_BEFORE_COMPRESSED_METABLOCK_BODY:
        PrepareLiteralDecoding(s);
        s->dist_context_map_slice = s->dist_context_map;
        s->htree_command = s->insert_copy_hgroup.htrees[0];
        if (!BrotliEnsureRingBuffer(s)) {
          result = BROTLI_FAILURE(BROTLI_DECODER_ERROR_ALLOC_RING_BUFFER_2);
          break;
        }
        CalculateDistanceLut(s);
        s->state = BROTLI_STATE_COMMAND_BEGIN;


      case BROTLI_STATE_COMMAND_BEGIN:

      case BROTLI_STATE_COMMAND_INNER:

      case BROTLI_STATE_COMMAND_POST_DECODE_LITERALS:

      case BROTLI_STATE_COMMAND_POST_WRAP_COPY:
        result = ProcessCommands(s);
        if (result == BROTLI_DECODER_NEEDS_MORE_INPUT) {
          result = SafeProcessCommands(s);
        }
        break;

      case BROTLI_STATE_COMMAND_INNER_WRITE:

      case BROTLI_STATE_COMMAND_POST_WRITE_1:

      case BROTLI_STATE_COMMAND_POST_WRITE_2:
        result = WriteRingBuffer(
            s, available_out, next_out, total_out, BROTLI_FALSE);
        if (result != BROTLI_DECODER_SUCCESS) {
          break;
        }
        WrapRingBuffer(s);
        if (s->ringbuffer_size == 1 << s->window_bits) {
          s->max_distance = s->max_backward_distance;
        }
        if (s->state == BROTLI_STATE_COMMAND_POST_WRITE_1) {
          if (s->meta_block_remaining_len == 0) {

            s->state = BROTLI_STATE_METABLOCK_DONE;
          } else {
            s->state = BROTLI_STATE_COMMAND_BEGIN;
          }
          break;
        } else if (s->state == BROTLI_STATE_COMMAND_POST_WRITE_2) {
          s->state = BROTLI_STATE_COMMAND_POST_WRAP_COPY;
        } else {
          if (s->loop_counter == 0) {
            if (s->meta_block_remaining_len == 0) {
              s->state = BROTLI_STATE_METABLOCK_DONE;
            } else {
              s->state = BROTLI_STATE_COMMAND_POST_DECODE_LITERALS;
            }
            break;
          }
          s->state = BROTLI_STATE_COMMAND_INNER;
        }
        break;

      case BROTLI_STATE_METABLOCK_DONE:
        if (s->meta_block_remaining_len < 0) {
          result = BROTLI_FAILURE(BROTLI_DECODER_ERROR_FORMAT_BLOCK_LENGTH_2);
          break;
        }
        BrotliDecoderStateCleanupAfterMetablock(s);
        if (!s->is_last_metablock) {
          s->state = BROTLI_STATE_METABLOCK_BEGIN;
          break;
        }
        if (!BrotliJumpToByteBoundary(br)) {
          result = BROTLI_FAILURE(BROTLI_DECODER_ERROR_FORMAT_PADDING_2);
          break;
        }
        if (s->buffer_length == 0) {
          BrotliBitReaderUnload(br);
          *available_in = br->avail_in;
          *next_in = br->next_in;
        }
        s->state = BROTLI_STATE_DONE;


      case BROTLI_STATE_DONE:
        if (s->ringbuffer != 0) {
          result = WriteRingBuffer(
              s, available_out, next_out, total_out, BROTLI_TRUE);
          if (result != BROTLI_DECODER_SUCCESS) {
            break;
          }
        }
        return SaveErrorCode(s, result);
    }
  }
  return SaveErrorCode(s, result);
}

BROTLI_BOOL BrotliDecoderHasMoreOutput(const BrotliDecoderState* s) {

  if ((int)s->error_code < 0) {
    return BROTLI_FALSE;
  }
  return TO_BROTLI_BOOL(
      s->ringbuffer != 0 && UnwrittenBytes(s, BROTLI_FALSE) != 0);
}

const uint8_t* BrotliDecoderTakeOutput(BrotliDecoderState* s, size_t* size) {
  uint8_t* result = 0;
  size_t available_out = *size ? *size : 1u << 24;
  size_t requested_out = available_out;
  BrotliDecoderErrorCode status;
  if ((s->ringbuffer == 0) || ((int)s->error_code < 0)) {
    *size = 0;
    return 0;
  }
  WrapRingBuffer(s);
  status = WriteRingBuffer(s, &available_out, &result, 0, BROTLI_TRUE);

  if (status == BROTLI_DECODER_SUCCESS ||
      status == BROTLI_DECODER_NEEDS_MORE_OUTPUT) {
    *size = requested_out - available_out;
  } else {


    if ((int)status < 0) SaveErrorCode(s, status);
    *size = 0;
    result = 0;
  }
  return result;
}

BROTLI_BOOL BrotliDecoderIsUsed(const BrotliDecoderState* s) {
  return TO_BROTLI_BOOL(s->state != BROTLI_STATE_UNINITED ||
      BrotliGetAvailableBits(&s->br) != 0);
}

BROTLI_BOOL BrotliDecoderIsFinished(const BrotliDecoderState* s) {
  return TO_BROTLI_BOOL(s->state == BROTLI_STATE_DONE) &&
      !BrotliDecoderHasMoreOutput(s);
}

BrotliDecoderErrorCode BrotliDecoderGetErrorCode(const BrotliDecoderState* s) {
  return (BrotliDecoderErrorCode)s->error_code;
}

const char* BrotliDecoderErrorString(BrotliDecoderErrorCode c) {
  switch (c) {
#define BROTLI_ERROR_CODE_CASE_(PREFIX,NAME,CODE) \
    case BROTLI_DECODER ## PREFIX ## NAME: return #NAME;
#define BROTLI_NOTHING_ 
    BROTLI_DECODER_ERROR_CODES_LIST(BROTLI_ERROR_CODE_CASE_, BROTLI_NOTHING_)
#undef BROTLI_ERROR_CODE_CASE_
#undef BROTLI_NOTHING_
    default: return "INVALID";
  }
}

uint32_t BrotliDecoderVersion() {
  return BROTLI_VERSION;
}

#if defined(__cplusplus) || defined(c_plusplus)
}
#endif
