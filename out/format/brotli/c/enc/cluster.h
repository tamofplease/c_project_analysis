# 1 "project/brotli/c/enc/cluster.h"
# 9 "project/brotli/c/enc/cluster.h"
#ifndef BROTLI_ENC_CLUSTER_H_
#define BROTLI_ENC_CLUSTER_H_ 

#include "../common/platform.h"
#include <brotli/types.h>
#include "./histogram.h"
#include "./memory.h"

#if defined(__cplusplus) || defined(c_plusplus)
extern "C" {
#endif

typedef struct HistogramPair {
  uint32_t idx1;
  uint32_t idx2;
  double cost_combo;
  double cost_diff;
} HistogramPair;

#define CODE(X) ;

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

#endif
