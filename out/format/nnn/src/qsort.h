# 1 "project/nnn/src/qsort.h"
# 37 "project/nnn/src/qsort.h"
#ifndef QSORT_H
#define QSORT_H 


#define Q_SORT3(q_a1,q_a2,q_a3,Q_LESS,Q_SWAP) \
do { \
    if (Q_LESS(q_a2, q_a1)) { \
 if (Q_LESS(q_a3, q_a2)) \
     Q_SWAP(q_a1, q_a3); \
 else { \
     Q_SWAP(q_a1, q_a2); \
     if (Q_LESS(q_a3, q_a2)) \
  Q_SWAP(q_a2, q_a3); \
 } \
    } \
    else if (Q_LESS(q_a3, q_a2)) { \
 Q_SWAP(q_a2, q_a3); \
 if (Q_LESS(q_a2, q_a1)) \
     Q_SWAP(q_a1, q_a2); \
    } \
} while (0)




#define Q_PARTITION(q_l,q_r,q_i,q_j,Q_UINT,Q_LESS,Q_SWAP) \
do { \
                                                                  \
    Q_UINT q_m = (q_l) + (((q_r) - (q_l)) >> 1); \





                                                          \
    Q_SORT3((q_l) + 1, q_m, q_r, Q_LESS, Q_SWAP); \
                                                \
    Q_SWAP(q_l, q_m); \


                                     \
    (q_i) = (q_l) + 1; (q_j) = q_r; \
    while (1) { \
 do (q_i)++; while (Q_LESS(q_i, q_l)); \
 do (q_j)--; while (Q_LESS(q_l, q_j)); \
 if ((q_i) >= (q_j)) break; \
 Q_SWAP(q_i, q_j); \
    } \
                                            \
    (q_i) = (q_j) + 1; \
                                                \
    Q_SWAP(q_l, q_j); \
                                                        \
    (q_j)--; \
} while (0)
# 100 "project/nnn/src/qsort.h"
#define Q_INSERTION_SORT(q_l,q_r,Q_UINT,Q_LESS,Q_SWAP) \
do { \
    Q_UINT q_i, q_j; \
                                                      \
    for (q_i = (q_l) + 1; q_i <= (q_r); q_i++) \
                                                                   \
    for (q_j = q_i; q_j > (q_l) && (Q_LESS(q_j, q_j - 1)); q_j--) \
 Q_SWAP(q_j, q_j - 1); \
} while (0)






#define Q_THRESH 16


#define Q_LOOP(Q_UINT,Q_N,Q_LESS,Q_SWAP) \
do { \
    Q_UINT q_l = 0; \
    Q_UINT q_r = (Q_N) - 1; \
    Q_UINT q_sp = 0; \
    struct { Q_UINT q_l, q_r; } \



                                                              \
 q_st[sizeof(Q_UINT) > 4 && sizeof(Q_N) > 4 ? 48 : 32]; \
    while (1) { \
 if (q_r - q_l + 1 >= Q_THRESH) { \
     Q_UINT q_i, q_j; \
     Q_PARTITION(q_l, q_r, q_i, q_j, Q_UINT, Q_LESS, Q_SWAP); \

                                                             \
     if (q_j - q_l >= q_r - q_i) \
  Q_SUBFILES(q_l, q_j, q_i, q_r); \
     else \
  Q_SUBFILES(q_i, q_r, q_l, q_j); \
 } \
 else { \
     Q_INSERTION_SORT(q_l, q_r, Q_UINT, Q_LESS, Q_SWAP); \
                                                             \
     if (q_sp == 0) break; \
     q_sp--; \
     q_l = q_st[q_sp].q_l; \
     q_r = q_st[q_sp].q_r; \
 } \
    } \
} while (0)



#define Q_SUBFILES(q_l1,q_r1,q_l2,q_r2) \
do { \



                                         \
    if ((q_l2) == (q_r2)) { \
 q_l = q_l1; \
 q_r = q_r1; \
    } \
    else { \

                                                 \
 q_st[q_sp].q_l = q_l1; \
 q_st[q_sp].q_r = q_r1; \
 q_sp++; \
                                                          \
 q_l = q_l2; \
 q_r = q_r2; \
    } \
} while (0)


#define QSORT(Q_N,Q_LESS,Q_SWAP) \
do { \
    if ((Q_N) > 1) \

                                                                \
 Q_LOOP(unsigned long, Q_N, Q_LESS, Q_SWAP); \
} while (0)

#endif
