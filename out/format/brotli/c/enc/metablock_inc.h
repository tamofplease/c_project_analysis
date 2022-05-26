# 1 "project/brotli/c/enc/metablock_inc.h"
# 10 "project/brotli/c/enc/metablock_inc.h"
#define HistogramType FN(Histogram)



typedef struct FN(BlockSplitter) {

  size_t alphabet_size_;

  size_t min_block_size_;




  double split_threshold_;

  size_t num_blocks_;
  BlockSplit* split_;
  HistogramType* histograms_;
  size_t* histograms_size_;



  size_t target_block_size_;

  size_t block_size_;

  size_t curr_histogram_ix_;

  size_t last_histogram_ix_[2];

  double last_entropy_[2];

  size_t merge_last_count_;
} FN(BlockSplitter);

static void FN(InitBlockSplitter)(
    MemoryManager* m, FN(BlockSplitter)* self, size_t alphabet_size,
    size_t min_block_size, double split_threshold, size_t num_symbols,
    BlockSplit* split, HistogramType** histograms, size_t* histograms_size) {
  size_t max_num_blocks = num_symbols / min_block_size + 1;


  size_t max_num_types =
      BROTLI_MIN(size_t, max_num_blocks, BROTLI_MAX_NUMBER_OF_BLOCK_TYPES + 1);
  self->alphabet_size_ = alphabet_size;
  self->min_block_size_ = min_block_size;
  self->split_threshold_ = split_threshold;
  self->num_blocks_ = 0;
  self->split_ = split;
  self->histograms_size_ = histograms_size;
  self->target_block_size_ = min_block_size;
  self->block_size_ = 0;
  self->curr_histogram_ix_ = 0;
  self->merge_last_count_ = 0;
  BROTLI_ENSURE_CAPACITY(m, uint8_t,
      split->types, split->types_alloc_size, max_num_blocks);
  BROTLI_ENSURE_CAPACITY(m, uint32_t,
      split->lengths, split->lengths_alloc_size, max_num_blocks);
  if (BROTLI_IS_OOM(m)) return;
  self->split_->num_blocks = max_num_blocks;
  BROTLI_DCHECK(*histograms == 0);
  *histograms_size = max_num_types;
  *histograms = BROTLI_ALLOC(m, HistogramType, *histograms_size);
  self->histograms_ = *histograms;
  if (BROTLI_IS_OOM(m) || BROTLI_IS_NULL(*histograms)) return;

  FN(HistogramClear)(&self->histograms_[0]);
  self->last_histogram_ix_[0] = self->last_histogram_ix_[1] = 0;
}





static void FN(BlockSplitterFinishBlock)(
    FN(BlockSplitter)* self, BROTLI_BOOL is_final) {
  BlockSplit* split = self->split_;
  double* last_entropy = self->last_entropy_;
  HistogramType* histograms = self->histograms_;
  self->block_size_ =
      BROTLI_MAX(size_t, self->block_size_, self->min_block_size_);
  if (self->num_blocks_ == 0) {

    split->lengths[0] = (uint32_t)self->block_size_;
    split->types[0] = 0;
    last_entropy[0] =
        BitsEntropy(histograms[0].data_, self->alphabet_size_);
    last_entropy[1] = last_entropy[0];
    ++self->num_blocks_;
    ++split->num_types;
    ++self->curr_histogram_ix_;
    if (self->curr_histogram_ix_ < *self->histograms_size_)
      FN(HistogramClear)(&histograms[self->curr_histogram_ix_]);
    self->block_size_ = 0;
  } else if (self->block_size_ > 0) {
    double entropy = BitsEntropy(histograms[self->curr_histogram_ix_].data_,
                                 self->alphabet_size_);
    HistogramType combined_histo[2];
    double combined_entropy[2];
    double diff[2];
    size_t j;
    for (j = 0; j < 2; ++j) {
      size_t last_histogram_ix = self->last_histogram_ix_[j];
      combined_histo[j] = histograms[self->curr_histogram_ix_];
      FN(HistogramAddHistogram)(&combined_histo[j],
          &histograms[last_histogram_ix]);
      combined_entropy[j] = BitsEntropy(
          &combined_histo[j].data_[0], self->alphabet_size_);
      diff[j] = combined_entropy[j] - entropy - last_entropy[j];
    }

    if (split->num_types < BROTLI_MAX_NUMBER_OF_BLOCK_TYPES &&
        diff[0] > self->split_threshold_ &&
        diff[1] > self->split_threshold_) {

      split->lengths[self->num_blocks_] = (uint32_t)self->block_size_;
      split->types[self->num_blocks_] = (uint8_t)split->num_types;
      self->last_histogram_ix_[1] = self->last_histogram_ix_[0];
      self->last_histogram_ix_[0] = (uint8_t)split->num_types;
      last_entropy[1] = last_entropy[0];
      last_entropy[0] = entropy;
      ++self->num_blocks_;
      ++split->num_types;
      ++self->curr_histogram_ix_;
      if (self->curr_histogram_ix_ < *self->histograms_size_)
        FN(HistogramClear)(&histograms[self->curr_histogram_ix_]);
      self->block_size_ = 0;
      self->merge_last_count_ = 0;
      self->target_block_size_ = self->min_block_size_;
    } else if (diff[1] < diff[0] - 20.0) {

      split->lengths[self->num_blocks_] = (uint32_t)self->block_size_;
      split->types[self->num_blocks_] = split->types[self->num_blocks_ - 2];
      BROTLI_SWAP(size_t, self->last_histogram_ix_, 0, 1);
      histograms[self->last_histogram_ix_[0]] = combined_histo[1];
      last_entropy[1] = last_entropy[0];
      last_entropy[0] = combined_entropy[1];
      ++self->num_blocks_;
      self->block_size_ = 0;
      FN(HistogramClear)(&histograms[self->curr_histogram_ix_]);
      self->merge_last_count_ = 0;
      self->target_block_size_ = self->min_block_size_;
    } else {

      split->lengths[self->num_blocks_ - 1] += (uint32_t)self->block_size_;
      histograms[self->last_histogram_ix_[0]] = combined_histo[0];
      last_entropy[0] = combined_entropy[0];
      if (split->num_types == 1) {
        last_entropy[1] = last_entropy[0];
      }
      self->block_size_ = 0;
      FN(HistogramClear)(&histograms[self->curr_histogram_ix_]);
      if (++self->merge_last_count_ > 1) {
        self->target_block_size_ += self->min_block_size_;
      }
    }
  }
  if (is_final) {
    *self->histograms_size_ = split->num_types;
    split->num_blocks = self->num_blocks_;
  }
}



static void FN(BlockSplitterAddSymbol)(FN(BlockSplitter)* self, size_t symbol) {
  FN(HistogramAdd)(&self->histograms_[self->curr_histogram_ix_], symbol);
  ++self->block_size_;
  if (self->block_size_ == self->target_block_size_) {
    FN(BlockSplitterFinishBlock)(self, BROTLI_FALSE);
  }
}

#undef HistogramType
