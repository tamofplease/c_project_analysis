# 1 "project/brotli/c/enc/cluster.c"
# 9 "project/brotli/c/enc/cluster.c"
#include "./cluster.h"

#include "../common/platform.h"
#include <brotli/types.h>
#include "./bit_cost.h"
#include "./fast_log.h"
#include "./histogram.h"
#include "./memory.h"

#if defined(__cplusplus) || defined(c_plusplus)
extern "C" {
#endif

static BROTLI_INLINE BROTLI_BOOL HistogramPairIsLess(
    const HistogramPair* p1, const HistogramPair* p2) {
  if (p1->cost_diff != p2->cost_diff) {
    return TO_BROTLI_BOOL(p1->cost_diff > p2->cost_diff);
  }
  return TO_BROTLI_BOOL((p1->idx2 - p1->idx1) > (p2->idx2 - p2->idx1));
}


static BROTLI_INLINE double ClusterCostDiff(size_t size_a, size_t size_b) {
  size_t size_c = size_a + size_b;
  return (double)size_a * FastLog2(size_a) +
    (double)size_b * FastLog2(size_b) -
    (double)size_c * FastLog2(size_c);
}

#define CODE(X) X

#define FN(X) X ## Literal
#include "./cluster_inc.h"
#undef FN

#define FN(X) X ## Command
#include "./cluster_inc.h"
#undef FN

#define FN(X) X ## Distance
#include "./cluster_inc.h"
#undef FN

#undef CODE

#if defined(__cplusplus) || defined(c_plusplus)
}
#endif
