# 1 "project/brotli/c/enc/bit_cost.c"
# 9 "project/brotli/c/enc/bit_cost.c"
#include "./bit_cost.h"

#include "../common/constants.h"
#include "../common/platform.h"
#include <brotli/types.h>
#include "./fast_log.h"
#include "./histogram.h"

#if defined(__cplusplus) || defined(c_plusplus)
extern "C" {
#endif

#define FN(X) X ## Literal
#include "./bit_cost_inc.h"
#undef FN

#define FN(X) X ## Command
#include "./bit_cost_inc.h"
#undef FN

#define FN(X) X ## Distance
#include "./bit_cost_inc.h"
#undef FN

#if defined(__cplusplus) || defined(c_plusplus)
}
#endif
