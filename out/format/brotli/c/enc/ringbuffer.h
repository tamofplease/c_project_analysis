# 1 "project/brotli/c/enc/ringbuffer.h"
# 9 "project/brotli/c/enc/ringbuffer.h"
#ifndef BROTLI_ENC_RINGBUFFER_H_
#define BROTLI_ENC_RINGBUFFER_H_ 

#include <string.h>

#include "../common/platform.h"
#include <brotli/types.h>
#include "./memory.h"
#include "./quality.h"

#if defined(__cplusplus) || defined(c_plusplus)
extern "C" {
#endif
# 32 "project/brotli/c/enc/ringbuffer.h"
typedef struct RingBuffer {

  const uint32_t size_;
  const uint32_t mask_;
  const uint32_t tail_size_;
  const uint32_t total_size_;

  uint32_t cur_size_;

  uint32_t pos_;


  uint8_t* data_;

  uint8_t* buffer_;
} RingBuffer;

static BROTLI_INLINE void RingBufferInit(RingBuffer* rb) {
  rb->cur_size_ = 0;
  rb->pos_ = 0;
  rb->data_ = 0;
  rb->buffer_ = 0;
}

static BROTLI_INLINE void RingBufferSetup(
    const BrotliEncoderParams* params, RingBuffer* rb) {
  int window_bits = ComputeRbBits(params);
  int tail_bits = params->lgblock;
  *(uint32_t*)&rb->size_ = 1u << window_bits;
  *(uint32_t*)&rb->mask_ = (1u << window_bits) - 1;
  *(uint32_t*)&rb->tail_size_ = 1u << tail_bits;
  *(uint32_t*)&rb->total_size_ = rb->size_ + rb->tail_size_;
}

static BROTLI_INLINE void RingBufferFree(MemoryManager* m, RingBuffer* rb) {
  BROTLI_FREE(m, rb->data_);
}



static BROTLI_INLINE void RingBufferInitBuffer(
    MemoryManager* m, const uint32_t buflen, RingBuffer* rb) {
  static const size_t kSlackForEightByteHashingEverywhere = 7;
  uint8_t* new_data = BROTLI_ALLOC(
      m, uint8_t, 2 + buflen + kSlackForEightByteHashingEverywhere);
  size_t i;
  if (BROTLI_IS_OOM(m) || BROTLI_IS_NULL(new_data)) return;
  if (rb->data_) {
    memcpy(new_data, rb->data_,
        2 + rb->cur_size_ + kSlackForEightByteHashingEverywhere);
    BROTLI_FREE(m, rb->data_);
  }
  rb->data_ = new_data;
  rb->cur_size_ = buflen;
  rb->buffer_ = rb->data_ + 2;
  rb->buffer_[-2] = rb->buffer_[-1] = 0;
  for (i = 0; i < kSlackForEightByteHashingEverywhere; ++i) {
    rb->buffer_[rb->cur_size_ + i] = 0;
  }
}

static BROTLI_INLINE void RingBufferWriteTail(
    const uint8_t* bytes, size_t n, RingBuffer* rb) {
  const size_t masked_pos = rb->pos_ & rb->mask_;
  if (BROTLI_PREDICT_FALSE(masked_pos < rb->tail_size_)) {

    const size_t p = rb->size_ + masked_pos;
    memcpy(&rb->buffer_[p], bytes,
        BROTLI_MIN(size_t, n, rb->tail_size_ - masked_pos));
  }
}


static BROTLI_INLINE void RingBufferWrite(
    MemoryManager* m, const uint8_t* bytes, size_t n, RingBuffer* rb) {
  if (rb->pos_ == 0 && n < rb->tail_size_) {






    rb->pos_ = (uint32_t)n;
    RingBufferInitBuffer(m, rb->pos_, rb);
    if (BROTLI_IS_OOM(m)) return;
    memcpy(rb->buffer_, bytes, n);
    return;
  }
  if (rb->cur_size_ < rb->total_size_) {

    RingBufferInitBuffer(m, rb->total_size_, rb);
    if (BROTLI_IS_OOM(m)) return;


    rb->buffer_[rb->size_ - 2] = 0;
    rb->buffer_[rb->size_ - 1] = 0;


    rb->buffer_[rb->size_] = 241;
  }
  {
    const size_t masked_pos = rb->pos_ & rb->mask_;


    RingBufferWriteTail(bytes, n, rb);
    if (BROTLI_PREDICT_TRUE(masked_pos + n <= rb->size_)) {

      memcpy(&rb->buffer_[masked_pos], bytes, n);
    } else {


      memcpy(&rb->buffer_[masked_pos], bytes,
             BROTLI_MIN(size_t, n, rb->total_size_ - masked_pos));

      memcpy(&rb->buffer_[0], bytes + (rb->size_ - masked_pos),
             n - (rb->size_ - masked_pos));
    }
  }
  {
    BROTLI_BOOL not_first_lap = (rb->pos_ & (1u << 31)) != 0;
    uint32_t rb_pos_mask = (1u << 31) - 1;
    rb->buffer_[-2] = rb->buffer_[rb->size_ - 2];
    rb->buffer_[-1] = rb->buffer_[rb->size_ - 1];
    rb->pos_ = (rb->pos_ & rb_pos_mask) + (uint32_t)(n & rb_pos_mask);
    if (not_first_lap) {

      rb->pos_ |= 1u << 31;
    }
  }
}

#if defined(__cplusplus) || defined(c_plusplus)
}
#endif

#endif
