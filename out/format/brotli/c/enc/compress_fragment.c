# 1 "project/brotli/c/enc/compress_fragment.c"
# 15 "project/brotli/c/enc/compress_fragment.c"
#include "./compress_fragment.h"

#include <string.h>

#include "../common/constants.h"
#include "../common/platform.h"
#include <brotli/types.h>
#include "./brotli_bit_stream.h"
#include "./entropy_encode.h"
#include "./fast_log.h"
#include "./find_match_length.h"
#include "./memory.h"
#include "./write_bits.h"

#if defined(__cplusplus) || defined(c_plusplus)
extern "C" {
#endif

#define MAX_DISTANCE (long)BROTLI_MAX_BACKWARD_LIMIT(18)







static const uint32_t kHashMul32 = 0x1E35A7BD;

static BROTLI_INLINE uint32_t Hash(const uint8_t* p, size_t shift) {
  const uint64_t h = (BROTLI_UNALIGNED_LOAD64LE(p) << 24) * kHashMul32;
  return (uint32_t)(h >> shift);
}

static BROTLI_INLINE uint32_t HashBytesAtOffset(
    uint64_t v, int offset, size_t shift) {
  BROTLI_DCHECK(offset >= 0);
  BROTLI_DCHECK(offset <= 3);
  {
    const uint64_t h = ((v >> (8 * offset)) << 24) * kHashMul32;
    return (uint32_t)(h >> shift);
  }
}

static BROTLI_INLINE BROTLI_BOOL IsMatch(const uint8_t* p1, const uint8_t* p2) {
  return TO_BROTLI_BOOL(
      BrotliUnalignedRead32(p1) == BrotliUnalignedRead32(p2) &&
      p1[4] == p2[4]);
}
# 72 "project/brotli/c/enc/compress_fragment.c"
static size_t BuildAndStoreLiteralPrefixCode(MemoryManager* m,
                                             const uint8_t* input,
                                             const size_t input_size,
                                             uint8_t depths[256],
                                             uint16_t bits[256],
                                             size_t* storage_ix,
                                             uint8_t* storage) {
  uint32_t histogram[256] = { 0 };
  size_t histogram_total;
  size_t i;
  if (input_size < (1 << 15)) {
    for (i = 0; i < input_size; ++i) {
      ++histogram[input[i]];
    }
    histogram_total = input_size;
    for (i = 0; i < 256; ++i) {


      const uint32_t adjust = 2 * BROTLI_MIN(uint32_t, histogram[i], 11u);
      histogram[i] += adjust;
      histogram_total += adjust;
    }
  } else {
    static const size_t kSampleRate = 29;
    for (i = 0; i < input_size; i += kSampleRate) {
      ++histogram[input[i]];
    }
    histogram_total = (input_size + kSampleRate - 1) / kSampleRate;
    for (i = 0; i < 256; ++i) {





      const uint32_t adjust = 1 + 2 * BROTLI_MIN(uint32_t, histogram[i], 11u);
      histogram[i] += adjust;
      histogram_total += adjust;
    }
  }
  BrotliBuildAndStoreHuffmanTreeFast(m, histogram, histogram_total,
                                                      8,
                                     depths, bits, storage_ix, storage);
  if (BROTLI_IS_OOM(m)) return 0;
  {
    size_t literal_ratio = 0;
    for (i = 0; i < 256; ++i) {
      if (histogram[i]) literal_ratio += histogram[i] * depths[i];
    }

    return (literal_ratio * 125) / histogram_total;
  }
}



static void BuildAndStoreCommandPrefixCode(const uint32_t histogram[128],
    uint8_t depth[128], uint16_t bits[128], size_t* storage_ix,
    uint8_t* storage) {

  HuffmanTree tree[129];
  uint8_t cmd_depth[BROTLI_NUM_COMMAND_SYMBOLS] = { 0 };
  uint16_t cmd_bits[64];

  BrotliCreateHuffmanTree(histogram, 64, 15, tree, depth);
  BrotliCreateHuffmanTree(&histogram[64], 64, 14, tree, &depth[64]);





  memcpy(cmd_depth, depth, 24);
  memcpy(cmd_depth + 24, depth + 40, 8);
  memcpy(cmd_depth + 32, depth + 24, 8);
  memcpy(cmd_depth + 40, depth + 48, 8);
  memcpy(cmd_depth + 48, depth + 32, 8);
  memcpy(cmd_depth + 56, depth + 56, 8);
  BrotliConvertBitDepthsToSymbols(cmd_depth, 64, cmd_bits);
  memcpy(bits, cmd_bits, 48);
  memcpy(bits + 24, cmd_bits + 32, 16);
  memcpy(bits + 32, cmd_bits + 48, 16);
  memcpy(bits + 40, cmd_bits + 24, 16);
  memcpy(bits + 48, cmd_bits + 40, 16);
  memcpy(bits + 56, cmd_bits + 56, 16);
  BrotliConvertBitDepthsToSymbols(&depth[64], 64, &bits[64]);
  {

    size_t i;
    memset(cmd_depth, 0, 64);
    memcpy(cmd_depth, depth, 8);
    memcpy(cmd_depth + 64, depth + 8, 8);
    memcpy(cmd_depth + 128, depth + 16, 8);
    memcpy(cmd_depth + 192, depth + 24, 8);
    memcpy(cmd_depth + 384, depth + 32, 8);
    for (i = 0; i < 8; ++i) {
      cmd_depth[128 + 8 * i] = depth[40 + i];
      cmd_depth[256 + 8 * i] = depth[48 + i];
      cmd_depth[448 + 8 * i] = depth[56 + i];
    }
    BrotliStoreHuffmanTree(
        cmd_depth, BROTLI_NUM_COMMAND_SYMBOLS, tree, storage_ix, storage);
  }
  BrotliStoreHuffmanTree(&depth[64], 64, tree, storage_ix, storage);
}


static BROTLI_INLINE void EmitInsertLen(size_t insertlen,
                                        const uint8_t depth[128],
                                        const uint16_t bits[128],
                                        uint32_t histo[128],
                                        size_t* storage_ix,
                                        uint8_t* storage) {
  if (insertlen < 6) {
    const size_t code = insertlen + 40;
    BrotliWriteBits(depth[code], bits[code], storage_ix, storage);
    ++histo[code];
  } else if (insertlen < 130) {
    const size_t tail = insertlen - 2;
    const uint32_t nbits = Log2FloorNonZero(tail) - 1u;
    const size_t prefix = tail >> nbits;
    const size_t inscode = (nbits << 1) + prefix + 42;
    BrotliWriteBits(depth[inscode], bits[inscode], storage_ix, storage);
    BrotliWriteBits(nbits, tail - (prefix << nbits), storage_ix, storage);
    ++histo[inscode];
  } else if (insertlen < 2114) {
    const size_t tail = insertlen - 66;
    const uint32_t nbits = Log2FloorNonZero(tail);
    const size_t code = nbits + 50;
    BrotliWriteBits(depth[code], bits[code], storage_ix, storage);
    BrotliWriteBits(nbits, tail - ((size_t)1 << nbits), storage_ix, storage);
    ++histo[code];
  } else {
    BrotliWriteBits(depth[61], bits[61], storage_ix, storage);
    BrotliWriteBits(12, insertlen - 2114, storage_ix, storage);
    ++histo[61];
  }
}

static BROTLI_INLINE void EmitLongInsertLen(size_t insertlen,
                                            const uint8_t depth[128],
                                            const uint16_t bits[128],
                                            uint32_t histo[128],
                                            size_t* storage_ix,
                                            uint8_t* storage) {
  if (insertlen < 22594) {
    BrotliWriteBits(depth[62], bits[62], storage_ix, storage);
    BrotliWriteBits(14, insertlen - 6210, storage_ix, storage);
    ++histo[62];
  } else {
    BrotliWriteBits(depth[63], bits[63], storage_ix, storage);
    BrotliWriteBits(24, insertlen - 22594, storage_ix, storage);
    ++histo[63];
  }
}

static BROTLI_INLINE void EmitCopyLen(size_t copylen,
                                      const uint8_t depth[128],
                                      const uint16_t bits[128],
                                      uint32_t histo[128],
                                      size_t* storage_ix,
                                      uint8_t* storage) {
  if (copylen < 10) {
    BrotliWriteBits(
        depth[copylen + 14], bits[copylen + 14], storage_ix, storage);
    ++histo[copylen + 14];
  } else if (copylen < 134) {
    const size_t tail = copylen - 6;
    const uint32_t nbits = Log2FloorNonZero(tail) - 1u;
    const size_t prefix = tail >> nbits;
    const size_t code = (nbits << 1) + prefix + 20;
    BrotliWriteBits(depth[code], bits[code], storage_ix, storage);
    BrotliWriteBits(nbits, tail - (prefix << nbits), storage_ix, storage);
    ++histo[code];
  } else if (copylen < 2118) {
    const size_t tail = copylen - 70;
    const uint32_t nbits = Log2FloorNonZero(tail);
    const size_t code = nbits + 28;
    BrotliWriteBits(depth[code], bits[code], storage_ix, storage);
    BrotliWriteBits(nbits, tail - ((size_t)1 << nbits), storage_ix, storage);
    ++histo[code];
  } else {
    BrotliWriteBits(depth[39], bits[39], storage_ix, storage);
    BrotliWriteBits(24, copylen - 2118, storage_ix, storage);
    ++histo[39];
  }
}

static BROTLI_INLINE void EmitCopyLenLastDistance(size_t copylen,
                                                  const uint8_t depth[128],
                                                  const uint16_t bits[128],
                                                  uint32_t histo[128],
                                                  size_t* storage_ix,
                                                  uint8_t* storage) {
  if (copylen < 12) {
    BrotliWriteBits(depth[copylen - 4], bits[copylen - 4], storage_ix, storage);
    ++histo[copylen - 4];
  } else if (copylen < 72) {
    const size_t tail = copylen - 8;
    const uint32_t nbits = Log2FloorNonZero(tail) - 1;
    const size_t prefix = tail >> nbits;
    const size_t code = (nbits << 1) + prefix + 4;
    BrotliWriteBits(depth[code], bits[code], storage_ix, storage);
    BrotliWriteBits(nbits, tail - (prefix << nbits), storage_ix, storage);
    ++histo[code];
  } else if (copylen < 136) {
    const size_t tail = copylen - 8;
    const size_t code = (tail >> 5) + 30;
    BrotliWriteBits(depth[code], bits[code], storage_ix, storage);
    BrotliWriteBits(5, tail & 31, storage_ix, storage);
    BrotliWriteBits(depth[64], bits[64], storage_ix, storage);
    ++histo[code];
    ++histo[64];
  } else if (copylen < 2120) {
    const size_t tail = copylen - 72;
    const uint32_t nbits = Log2FloorNonZero(tail);
    const size_t code = nbits + 28;
    BrotliWriteBits(depth[code], bits[code], storage_ix, storage);
    BrotliWriteBits(nbits, tail - ((size_t)1 << nbits), storage_ix, storage);
    BrotliWriteBits(depth[64], bits[64], storage_ix, storage);
    ++histo[code];
    ++histo[64];
  } else {
    BrotliWriteBits(depth[39], bits[39], storage_ix, storage);
    BrotliWriteBits(24, copylen - 2120, storage_ix, storage);
    BrotliWriteBits(depth[64], bits[64], storage_ix, storage);
    ++histo[39];
    ++histo[64];
  }
}

static BROTLI_INLINE void EmitDistance(size_t distance,
                                       const uint8_t depth[128],
                                       const uint16_t bits[128],
                                       uint32_t histo[128],
                                       size_t* storage_ix, uint8_t* storage) {
  const size_t d = distance + 3;
  const uint32_t nbits = Log2FloorNonZero(d) - 1u;
  const size_t prefix = (d >> nbits) & 1;
  const size_t offset = (2 + prefix) << nbits;
  const size_t distcode = 2 * (nbits - 1) + prefix + 80;
  BrotliWriteBits(depth[distcode], bits[distcode], storage_ix, storage);
  BrotliWriteBits(nbits, d - offset, storage_ix, storage);
  ++histo[distcode];
}

static BROTLI_INLINE void EmitLiterals(const uint8_t* input, const size_t len,
                                       const uint8_t depth[256],
                                       const uint16_t bits[256],
                                       size_t* storage_ix, uint8_t* storage) {
  size_t j;
  for (j = 0; j < len; j++) {
    const uint8_t lit = input[j];
    BrotliWriteBits(depth[lit], bits[lit], storage_ix, storage);
  }
}


static void BrotliStoreMetaBlockHeader(
    size_t len, BROTLI_BOOL is_uncompressed, size_t* storage_ix,
    uint8_t* storage) {
  size_t nibbles = 6;

  BrotliWriteBits(1, 0, storage_ix, storage);
  if (len <= (1U << 16)) {
    nibbles = 4;
  } else if (len <= (1U << 20)) {
    nibbles = 5;
  }
  BrotliWriteBits(2, nibbles - 4, storage_ix, storage);
  BrotliWriteBits(nibbles * 4, len - 1, storage_ix, storage);

  BrotliWriteBits(1, (uint64_t)is_uncompressed, storage_ix, storage);
}

static void UpdateBits(size_t n_bits, uint32_t bits, size_t pos,
    uint8_t* array) {
  while (n_bits > 0) {
    size_t byte_pos = pos >> 3;
    size_t n_unchanged_bits = pos & 7;
    size_t n_changed_bits = BROTLI_MIN(size_t, n_bits, 8 - n_unchanged_bits);
    size_t total_bits = n_unchanged_bits + n_changed_bits;
    uint32_t mask =
        (~((1u << total_bits) - 1u)) | ((1u << n_unchanged_bits) - 1u);
    uint32_t unchanged_bits = array[byte_pos] & mask;
    uint32_t changed_bits = bits & ((1u << n_changed_bits) - 1u);
    array[byte_pos] =
        (uint8_t)((changed_bits << n_unchanged_bits) | unchanged_bits);
    n_bits -= n_changed_bits;
    bits >>= n_changed_bits;
    pos += n_changed_bits;
  }
}

static void RewindBitPosition(const size_t new_storage_ix,
                              size_t* storage_ix, uint8_t* storage) {
  const size_t bitpos = new_storage_ix & 7;
  const size_t mask = (1u << bitpos) - 1;
  storage[new_storage_ix >> 3] &= (uint8_t)mask;
  *storage_ix = new_storage_ix;
}

static BROTLI_BOOL ShouldMergeBlock(
    const uint8_t* data, size_t len, const uint8_t* depths) {
  size_t histo[256] = { 0 };
  static const size_t kSampleRate = 43;
  size_t i;
  for (i = 0; i < len; i += kSampleRate) {
    ++histo[data[i]];
  }
  {
    const size_t total = (len + kSampleRate - 1) / kSampleRate;
    double r = (FastLog2(total) + 0.5) * (double)total + 200;
    for (i = 0; i < 256; ++i) {
      r -= (double)histo[i] * (depths[i] + FastLog2(histo[i]));
    }
    return TO_BROTLI_BOOL(r >= 0.0);
  }
}


#define MIN_RATIO 980

static BROTLI_INLINE BROTLI_BOOL ShouldUseUncompressedMode(
    const uint8_t* metablock_start, const uint8_t* next_emit,
    const size_t insertlen, const size_t literal_ratio) {
  const size_t compressed = (size_t)(next_emit - metablock_start);
  if (compressed * 50 > insertlen) {
    return BROTLI_FALSE;
  } else {
    return TO_BROTLI_BOOL(literal_ratio > MIN_RATIO);
  }
}

static void EmitUncompressedMetaBlock(const uint8_t* begin, const uint8_t* end,
                                      const size_t storage_ix_start,
                                      size_t* storage_ix, uint8_t* storage) {
  const size_t len = (size_t)(end - begin);
  RewindBitPosition(storage_ix_start, storage_ix, storage);
  BrotliStoreMetaBlockHeader(len, 1, storage_ix, storage);
  *storage_ix = (*storage_ix + 7u) & ~7u;
  memcpy(&storage[*storage_ix >> 3], begin, len);
  *storage_ix += len << 3;
  storage[*storage_ix >> 3] = 0;
}

static uint32_t kCmdHistoSeed[128] = {
  0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 0, 0, 0, 0,
};

static BROTLI_INLINE void BrotliCompressFragmentFastImpl(
    MemoryManager* m, const uint8_t* input, size_t input_size,
    BROTLI_BOOL is_last, int* table, size_t table_bits, uint8_t cmd_depth[128],
    uint16_t cmd_bits[128], size_t* cmd_code_numbits, uint8_t* cmd_code,
    size_t* storage_ix, uint8_t* storage) {
  uint32_t cmd_histo[128];
  const uint8_t* ip_end;




  const uint8_t* next_emit = input;


  const uint8_t* base_ip = input;

  static const size_t kFirstBlockSize = 3 << 15;
  static const size_t kMergeBlockSize = 1 << 16;

  const size_t kInputMarginBytes = BROTLI_WINDOW_GAP;
  const size_t kMinMatchLen = 5;

  const uint8_t* metablock_start = input;
  size_t block_size = BROTLI_MIN(size_t, input_size, kFirstBlockSize);
  size_t total_block_size = block_size;


  size_t mlen_storage_ix = *storage_ix + 3;

  uint8_t lit_depth[256];
  uint16_t lit_bits[256];

  size_t literal_ratio;

  const uint8_t* ip;
  int last_distance;

  const size_t shift = 64u - table_bits;

  BrotliStoreMetaBlockHeader(block_size, 0, storage_ix, storage);

  BrotliWriteBits(13, 0, storage_ix, storage);

  literal_ratio = BuildAndStoreLiteralPrefixCode(
      m, input, block_size, lit_depth, lit_bits, storage_ix, storage);
  if (BROTLI_IS_OOM(m)) return;

  {

    size_t i;
    for (i = 0; i + 7 < *cmd_code_numbits; i += 8) {
      BrotliWriteBits(8, cmd_code[i >> 3], storage_ix, storage);
    }
  }
  BrotliWriteBits(*cmd_code_numbits & 7, cmd_code[*cmd_code_numbits >> 3],
                  storage_ix, storage);

 emit_commands:




  memcpy(cmd_histo, kCmdHistoSeed, sizeof(kCmdHistoSeed));


  ip = input;
  last_distance = -1;
  ip_end = input + block_size;

  if (BROTLI_PREDICT_TRUE(block_size >= kInputMarginBytes)) {




    const size_t len_limit = BROTLI_MIN(size_t, block_size - kMinMatchLen,
                                        input_size - kInputMarginBytes);
    const uint8_t* ip_limit = input + len_limit;

    uint32_t next_hash;
    for (next_hash = Hash(++ip, shift); ; ) {
# 520 "project/brotli/c/enc/compress_fragment.c"
      uint32_t skip = 32;

      const uint8_t* next_ip = ip;
      const uint8_t* candidate;
      BROTLI_DCHECK(next_emit < ip);
trawl:
      do {
        uint32_t hash = next_hash;
        uint32_t bytes_between_hash_lookups = skip++ >> 5;
        BROTLI_DCHECK(hash == Hash(next_ip, shift));
        ip = next_ip;
        next_ip = ip + bytes_between_hash_lookups;
        if (BROTLI_PREDICT_FALSE(next_ip > ip_limit)) {
          goto emit_remainder;
        }
        next_hash = Hash(next_ip, shift);
        candidate = ip - last_distance;
        if (IsMatch(ip, candidate)) {
          if (BROTLI_PREDICT_TRUE(candidate < ip)) {
            table[hash] = (int)(ip - base_ip);
            break;
          }
        }
        candidate = base_ip + table[hash];
        BROTLI_DCHECK(candidate >= base_ip);
        BROTLI_DCHECK(candidate < ip);

        table[hash] = (int)(ip - base_ip);
      } while (BROTLI_PREDICT_TRUE(!IsMatch(ip, candidate)));



      if (ip - candidate > MAX_DISTANCE) goto trawl;






      {


        const uint8_t* base = ip;
        size_t matched = 5 + FindMatchLengthWithLimit(
            candidate + 5, ip + 5, (size_t)(ip_end - ip) - 5);
        int distance = (int)(base - candidate);
        size_t insert = (size_t)(base - next_emit);
        ip += matched;
        BROTLI_DCHECK(0 == memcmp(base, candidate, matched));
        if (BROTLI_PREDICT_TRUE(insert < 6210)) {
          EmitInsertLen(insert, cmd_depth, cmd_bits, cmd_histo,
                        storage_ix, storage);
        } else if (ShouldUseUncompressedMode(metablock_start, next_emit, insert,
                                             literal_ratio)) {
          EmitUncompressedMetaBlock(metablock_start, base, mlen_storage_ix - 3,
                                    storage_ix, storage);
          input_size -= (size_t)(base - input);
          input = base;
          next_emit = input;
          goto next_block;
        } else {
          EmitLongInsertLen(insert, cmd_depth, cmd_bits, cmd_histo,
                            storage_ix, storage);
        }
        EmitLiterals(next_emit, insert, lit_depth, lit_bits,
                     storage_ix, storage);
        if (distance == last_distance) {
          BrotliWriteBits(cmd_depth[64], cmd_bits[64], storage_ix, storage);
          ++cmd_histo[64];
        } else {
          EmitDistance((size_t)distance, cmd_depth, cmd_bits,
                       cmd_histo, storage_ix, storage);
          last_distance = distance;
        }
        EmitCopyLenLastDistance(matched, cmd_depth, cmd_bits, cmd_histo,
                                storage_ix, storage);

        next_emit = ip;
        if (BROTLI_PREDICT_FALSE(ip >= ip_limit)) {
          goto emit_remainder;
        }



        {
          uint64_t input_bytes = BROTLI_UNALIGNED_LOAD64LE(ip - 3);
          uint32_t prev_hash = HashBytesAtOffset(input_bytes, 0, shift);
          uint32_t cur_hash = HashBytesAtOffset(input_bytes, 3, shift);
          table[prev_hash] = (int)(ip - base_ip - 3);
          prev_hash = HashBytesAtOffset(input_bytes, 1, shift);
          table[prev_hash] = (int)(ip - base_ip - 2);
          prev_hash = HashBytesAtOffset(input_bytes, 2, shift);
          table[prev_hash] = (int)(ip - base_ip - 1);

          candidate = base_ip + table[cur_hash];
          table[cur_hash] = (int)(ip - base_ip);
        }
      }

      while (IsMatch(ip, candidate)) {


        const uint8_t* base = ip;
        size_t matched = 5 + FindMatchLengthWithLimit(
            candidate + 5, ip + 5, (size_t)(ip_end - ip) - 5);
        if (ip - candidate > MAX_DISTANCE) break;
        ip += matched;
        last_distance = (int)(base - candidate);
        BROTLI_DCHECK(0 == memcmp(base, candidate, matched));
        EmitCopyLen(matched, cmd_depth, cmd_bits, cmd_histo,
                    storage_ix, storage);
        EmitDistance((size_t)last_distance, cmd_depth, cmd_bits,
                     cmd_histo, storage_ix, storage);

        next_emit = ip;
        if (BROTLI_PREDICT_FALSE(ip >= ip_limit)) {
          goto emit_remainder;
        }



        {
          uint64_t input_bytes = BROTLI_UNALIGNED_LOAD64LE(ip - 3);
          uint32_t prev_hash = HashBytesAtOffset(input_bytes, 0, shift);
          uint32_t cur_hash = HashBytesAtOffset(input_bytes, 3, shift);
          table[prev_hash] = (int)(ip - base_ip - 3);
          prev_hash = HashBytesAtOffset(input_bytes, 1, shift);
          table[prev_hash] = (int)(ip - base_ip - 2);
          prev_hash = HashBytesAtOffset(input_bytes, 2, shift);
          table[prev_hash] = (int)(ip - base_ip - 1);

          candidate = base_ip + table[cur_hash];
          table[cur_hash] = (int)(ip - base_ip);
        }
      }

      next_hash = Hash(++ip, shift);
    }
  }

 emit_remainder:
  BROTLI_DCHECK(next_emit <= ip_end);
  input += block_size;
  input_size -= block_size;
  block_size = BROTLI_MIN(size_t, input_size, kMergeBlockSize);



  if (input_size > 0 &&
      total_block_size + block_size <= (1 << 20) &&
      ShouldMergeBlock(input, block_size, lit_depth)) {
    BROTLI_DCHECK(total_block_size > (1 << 16));



    total_block_size += block_size;
    UpdateBits(20, (uint32_t)(total_block_size - 1), mlen_storage_ix, storage);
    goto emit_commands;
  }


  if (next_emit < ip_end) {
    const size_t insert = (size_t)(ip_end - next_emit);
    if (BROTLI_PREDICT_TRUE(insert < 6210)) {
      EmitInsertLen(insert, cmd_depth, cmd_bits, cmd_histo,
                    storage_ix, storage);
      EmitLiterals(next_emit, insert, lit_depth, lit_bits, storage_ix, storage);
    } else if (ShouldUseUncompressedMode(metablock_start, next_emit, insert,
                                         literal_ratio)) {
      EmitUncompressedMetaBlock(metablock_start, ip_end, mlen_storage_ix - 3,
                                storage_ix, storage);
    } else {
      EmitLongInsertLen(insert, cmd_depth, cmd_bits, cmd_histo,
                        storage_ix, storage);
      EmitLiterals(next_emit, insert, lit_depth, lit_bits,
                   storage_ix, storage);
    }
  }
  next_emit = ip_end;

next_block:


  if (input_size > 0) {
    metablock_start = input;
    block_size = BROTLI_MIN(size_t, input_size, kFirstBlockSize);
    total_block_size = block_size;


    mlen_storage_ix = *storage_ix + 3;
    BrotliStoreMetaBlockHeader(block_size, 0, storage_ix, storage);

    BrotliWriteBits(13, 0, storage_ix, storage);
    literal_ratio = BuildAndStoreLiteralPrefixCode(
        m, input, block_size, lit_depth, lit_bits, storage_ix, storage);
    if (BROTLI_IS_OOM(m)) return;
    BuildAndStoreCommandPrefixCode(cmd_histo, cmd_depth, cmd_bits,
                                   storage_ix, storage);
    goto emit_commands;
  }

  if (!is_last) {


    cmd_code[0] = 0;
    *cmd_code_numbits = 0;
    BuildAndStoreCommandPrefixCode(cmd_histo, cmd_depth, cmd_bits,
                                   cmd_code_numbits, cmd_code);
  }
}

#define FOR_TABLE_BITS_(X) X(9) X(11) X(13) X(15)

#define BAKE_METHOD_PARAM_(B) \
static BROTLI_NOINLINE void BrotliCompressFragmentFastImpl ## B( \
    MemoryManager* m, const uint8_t* input, size_t input_size, \
    BROTLI_BOOL is_last, int* table, uint8_t cmd_depth[128], \
    uint16_t cmd_bits[128], size_t* cmd_code_numbits, uint8_t* cmd_code, \
    size_t* storage_ix, uint8_t* storage) { \
  BrotliCompressFragmentFastImpl(m, input, input_size, is_last, table, B, \
      cmd_depth, cmd_bits, cmd_code_numbits, cmd_code, storage_ix, storage); \
}
FOR_TABLE_BITS_(BAKE_METHOD_PARAM_)
#undef BAKE_METHOD_PARAM_

void BrotliCompressFragmentFast(
    MemoryManager* m, const uint8_t* input, size_t input_size,
    BROTLI_BOOL is_last, int* table, size_t table_size, uint8_t cmd_depth[128],
    uint16_t cmd_bits[128], size_t* cmd_code_numbits, uint8_t* cmd_code,
    size_t* storage_ix, uint8_t* storage) {
  const size_t initial_storage_ix = *storage_ix;
  const size_t table_bits = Log2FloorNonZero(table_size);

  if (input_size == 0) {
    BROTLI_DCHECK(is_last);
    BrotliWriteBits(1, 1, storage_ix, storage);
    BrotliWriteBits(1, 1, storage_ix, storage);
    *storage_ix = (*storage_ix + 7u) & ~7u;
    return;
  }

  switch (table_bits) {
#define CASE_(B) \
    case B: \
      BrotliCompressFragmentFastImpl ## B( \
          m, input, input_size, is_last, table, cmd_depth, cmd_bits, \
          cmd_code_numbits, cmd_code, storage_ix, storage); \
      break;
    FOR_TABLE_BITS_(CASE_)
#undef CASE_
    default: BROTLI_DCHECK(0); break;
  }


  if (*storage_ix - initial_storage_ix > 31 + (input_size << 3)) {
    EmitUncompressedMetaBlock(input, input + input_size, initial_storage_ix,
                              storage_ix, storage);
  }

  if (is_last) {
    BrotliWriteBits(1, 1, storage_ix, storage);
    BrotliWriteBits(1, 1, storage_ix, storage);
    *storage_ix = (*storage_ix + 7u) & ~7u;
  }
}

#undef FOR_TABLE_BITS_

#if defined(__cplusplus) || defined(c_plusplus)
}
#endif
