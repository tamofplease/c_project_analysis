# 1 "project/goaccess/src/khash.h"
# 117 "project/goaccess/src/khash.h"
#ifndef __AC_KHASH_H
#define __AC_KHASH_H 







#define AC_VERSION_KHASH_H "0.2.8"

#include <stdlib.h>
#include <string.h>
#include <limits.h>



#if UINT_MAX == 0xffffffffu
typedef unsigned int khint32_t;
#elif ULONG_MAX == 0xffffffffu
typedef unsigned long khint32_t;
#endif

#if ULONG_MAX == ULLONG_MAX
typedef unsigned long khint64_t;
#else
typedef unsigned long long khint64_t;
#endif

#ifndef kh_inline
#ifdef _MSC_VER
#define kh_inline __inline
#else
#define kh_inline inline
#endif
#endif

#ifndef klib_unused
#if (defined __clang__ && __clang_major__ >= 3) || (defined __GNUC__ && __GNUC__ >= 3)
#define klib_unused __attribute__ ((__unused__))
#else
#define klib_unused 
#endif
#endif

typedef khint32_t khint_t;
typedef khint_t khiter_t;

#define __ac_isempty(flag,i) ((flag[i>>4]>>((i&0xfU)<<1))&2)
#define __ac_isdel(flag,i) ((flag[i>>4]>>((i&0xfU)<<1))&1)
#define __ac_iseither(flag,i) ((flag[i>>4]>>((i&0xfU)<<1))&3)
#define __ac_set_isdel_false(flag,i) (flag[i>>4]&=~(1ul<<((i&0xfU)<<1)))
#define __ac_set_isempty_false(flag,i) (flag[i>>4]&=~(2ul<<((i&0xfU)<<1)))
#define __ac_set_isboth_false(flag,i) (flag[i>>4]&=~(3ul<<((i&0xfU)<<1)))
#define __ac_set_isdel_true(flag,i) (flag[i>>4]|=1ul<<((i&0xfU)<<1))

#define __ac_fsize(m) ((m) < 16? 1 : (m)>>4)

#ifndef kroundup32
#define kroundup32(x) (--(x), (x)|=(x)>>1, (x)|=(x)>>2, (x)|=(x)>>4, (x)|=(x)>>8, (x)|=(x)>>16, ++(x))
#endif

#ifndef kcalloc
#define kcalloc(N,Z) calloc(N,Z)
#endif
#ifndef kmalloc
#define kmalloc(Z) malloc(Z)
#endif
#ifndef krealloc
#define krealloc(P,Z) realloc(P,Z)
#endif
#ifndef kfree
#define kfree(P) free(P)
#endif

static const double __ac_HASH_UPPER = 0.77;

#define __KHASH_TYPE(name,khkey_t,khval_t) \
  typedef struct kh_##name##_s { \
    khint_t n_buckets, size, n_occupied, upper_bound; \
    khint32_t *flags; \
    khkey_t *keys; \
    khval_t *vals; \
  } kh_##name##_t;

#define __KHASH_PROTOTYPES(name,khkey_t,khval_t) \
  extern kh_##name##_t *kh_init_##name(void); \
  extern void kh_destroy_##name(kh_##name##_t *h); \
  extern void kh_clear_##name(kh_##name##_t *h); \
  extern khint_t kh_get_##name(const kh_##name##_t *h, khkey_t key); \
  extern int kh_resize_##name(kh_##name##_t *h, khint_t new_n_buckets); \
  extern khint_t kh_put_##name(kh_##name##_t *h, khkey_t key, int *ret); \
  extern void kh_del_##name(kh_##name##_t *h, khint_t x); \

#define __KHASH_IMPL(name,SCOPE,khkey_t,khval_t,kh_is_map,__hash_func,__hash_equal) \
  SCOPE kh_##name##_t *kh_init_##name(void) { \
    return (kh_##name##_t*) kcalloc(1, sizeof(kh_##name##_t)); \
  } \
  SCOPE void kh_destroy_##name(kh_##name##_t *h) \
  { \
    if (h) { \
      kfree ((void *) h->keys); \
      kfree (h->flags); \
      kfree ((void *) h->vals); \
      kfree (h); \
    } \
  } \
  SCOPE void kh_clear_##name(kh_##name##_t *h) \
  { \
    if (h && h->flags) { \
      memset (h->flags, 0xaa, __ac_fsize (h->n_buckets) * sizeof (khint32_t)); \
      h->size = h->n_occupied = 0; \
    } \
  } \
  SCOPE khint_t kh_get_##name(const kh_##name##_t *h, khkey_t key) \
  { \
    if (h->n_buckets) { \
      khint_t k, i, last, mask, step = 0; \
      mask = h->n_buckets - 1; \
      k = __hash_func (key); \
      i = k & mask; \
      last = i; \
      while (!__ac_isempty (h->flags, i) && \
             (__ac_isdel (h->flags, i) || !__hash_equal (h->keys[i], key))) { \
        i = (i + (++step)) & mask; \
        if (i == last) \
          return h->n_buckets; \
      } \
      return __ac_iseither (h->flags, i) ? h->n_buckets : i; \
    } else \
      return 0; \
  } \
  SCOPE int kh_resize_##name(kh_##name##_t *h, khint_t new_n_buckets) \
  { \
                                                                                                                \
                                                                                                                \
    khint32_t *new_flags = 0; \
    khint_t j = 1; \
    { \
      kroundup32 (new_n_buckets); \
      if (new_n_buckets < 4) \
        new_n_buckets = 4; \
      if (h->size >= (khint_t) (new_n_buckets * __ac_HASH_UPPER + 0.5)) \
        j = 0; \
      else { \
        new_flags = (khint32_t *) kmalloc (__ac_fsize (new_n_buckets) * sizeof (khint32_t)); \
        if (!new_flags) \
          return -1; \
        memset (new_flags, 0xaa, __ac_fsize (new_n_buckets) * sizeof (khint32_t)); \
        if (h->n_buckets < new_n_buckets) { \
          khkey_t *new_keys = (khkey_t *) krealloc ((void *) h->keys, new_n_buckets * sizeof (khkey_t)); \
          if (!new_keys) { \
            kfree (new_flags); \
            return -1; \
          } \
          h->keys = new_keys; \
          if (kh_is_map) { \
            khval_t *new_vals = (khval_t *) krealloc ((void *) h->vals, new_n_buckets * sizeof (khval_t)); \
            if (!new_vals) { \
              kfree (new_flags); \
              return -1; \
            } \
            h->vals = new_vals; \
          } \
        } \
      } \
    } \
    if (j) { \
      for (j = 0; j != h->n_buckets; ++j) { \
        if (__ac_iseither (h->flags, j) == 0) { \
          khkey_t key = h->keys[j]; \
          khval_t val; \
          khint_t new_mask; \
          new_mask = new_n_buckets - 1; \
          if (kh_is_map) \
            val = h->vals[j]; \
          __ac_set_isdel_true (h->flags, j); \
          while (1) { \
            khint_t k, i, step = 0; \
            k = __hash_func (key); \
            i = k & new_mask; \
            while (!__ac_isempty (new_flags, i)) \
              i = (i + (++step)) & new_mask; \
            __ac_set_isempty_false (new_flags, i); \
            if (i < h->n_buckets && __ac_iseither (h->flags, i) == 0) { \
              { \
                khkey_t tmp = h->keys[i]; \
                h->keys[i] = key; \
                key = tmp; \
              } \
              if (kh_is_map) { \
                khval_t tmp = h->vals[i]; \
                h->vals[i] = val; \
                val = tmp; \
              } \
              __ac_set_isdel_true (h->flags, i); \
            } else { \
              h->keys[i] = key; \
              if (kh_is_map) \
                h->vals[i] = val; \
              break; \
            } \
          } \
        } \
      } \
      if (h->n_buckets > new_n_buckets) { \
        h->keys = (khkey_t *) krealloc ((void *) h->keys, new_n_buckets * sizeof (khkey_t)); \
        if (kh_is_map) \
          h->vals = (khval_t *) krealloc ((void *) h->vals, new_n_buckets * sizeof (khval_t)); \
      } \
      kfree (h->flags); \
      h->flags = new_flags; \
      h->n_buckets = new_n_buckets; \
      h->n_occupied = h->size; \
      h->upper_bound = (khint_t) (h->n_buckets * __ac_HASH_UPPER + 0.5); \
    } \
    return 0; \
  } \
  SCOPE khint_t kh_put_##name(kh_##name##_t *h, khkey_t key, int *ret) \
  { \
    khint_t x; \
    if (h->n_occupied >= h->upper_bound) { \
      if (h->n_buckets > (h->size << 1)) { \
        if (kh_resize_##name (h, h->n_buckets - 1) < 0) { \
          *ret = -1; \
          return h->n_buckets; \
        } \
      } else if (kh_resize_##name (h, h->n_buckets + 1) < 0) { \
        *ret = -1; \
        return h->n_buckets; \
      } \
    } \
    { \
      khint_t k, i, site, last, mask = h->n_buckets - 1, step = 0; \
      x = site = h->n_buckets; \
      k = __hash_func (key); \
      i = k & mask; \
      if (__ac_isempty (h->flags, i)) \
        x = i; \
      else { \
        last = i; \
        while (!__ac_isempty (h->flags, i) && (__ac_isdel (h->flags, i) || !__hash_equal (h->keys[i], key))) { \
          if (__ac_isdel (h->flags, i)) \
            site = i; \
          i = (i + (++step)) & mask; \
          if (i == last) { \
            x = site; \
            break; \
          } \
        } \
        if (x == h->n_buckets) { \
          if (__ac_isempty (h->flags, i) && site != h->n_buckets) \
            x = site; \
          else \
            x = i; \
        } \
      } \
    } \
    if (__ac_isempty (h->flags, x)) { \
      h->keys[x] = key; \
      __ac_set_isboth_false (h->flags, x); \
      ++h->size; \
      ++h->n_occupied; \
      *ret = 1; \
    } else if (__ac_isdel (h->flags, x)) { \
      h->keys[x] = key; \
      __ac_set_isboth_false (h->flags, x); \
      ++h->size; \
      *ret = 2; \
    } else \
      *ret = 0; \
    return x; \
  } \
  SCOPE void kh_del_##name(kh_##name##_t *h, khint_t x) \
  { \
    if (x != h->n_buckets && !__ac_iseither (h->flags, x)) { \
      __ac_set_isdel_true (h->flags, x); \
      --h->size; \
    } \
  } \

#define KHASH_DECLARE(name,khkey_t,khval_t) \
  __KHASH_TYPE(name, khkey_t, khval_t) \
  __KHASH_PROTOTYPES(name, khkey_t, khval_t)

#define KHASH_INIT2(name,SCOPE,khkey_t,khval_t,kh_is_map,__hash_func,__hash_equal) \
  __KHASH_TYPE(name, khkey_t, khval_t) \
  __KHASH_IMPL(name, SCOPE, khkey_t, khval_t, kh_is_map, __hash_func, __hash_equal)

#define KHASH_INIT(name,khkey_t,khval_t,kh_is_map,__hash_func,__hash_equal) \
  KHASH_INIT2(name, static kh_inline klib_unused, khkey_t, khval_t, kh_is_map, __hash_func, __hash_equal) \
# 416 "project/goaccess/src/khash.h"
#define kh_int_hash_func(key) (khint32_t)(key)



#define kh_int_hash_equal(a,b) ((a) == (b))





#define kh_int64_hash_func(key) (khint32_t)((key)>>33^(key)^(key)<<11)



#define kh_int64_hash_equal(a,b) ((a) == (b))





#if defined(__clang__) && defined(__clang_major__) && (__clang_major__ >= 4)
__attribute__((no_sanitize ("unsigned-integer-overflow")))
#if (__clang_major__ >= 12)
  __attribute__((no_sanitize ("unsigned-shift-base")))
#endif
#endif
  static kh_inline khint_t __ac_X31_hash_string (const char *s) {
  khint_t h = (khint_t) * s;
  if (h)
    for (++s; *s; ++s)
      h = (h << 5) - h + (khint_t) * s;
  return h;
  }






#define kh_str_hash_func(key) __ac_X31_hash_string(key)



#define kh_str_hash_equal(a,b) (strcmp(a, b) == 0)

static kh_inline khint_t
__ac_Wang_hash (khint_t key) {
  key += ~(key << 15);
  key ^= (key >> 10);
  key += (key << 3);
  key ^= (key >> 6);
  key += ~(key << 11);
  key ^= (key >> 16);
  return key;
}

#define kh_int_hash_func2(k) __ac_Wang_hash((khint_t)key)
# 482 "project/goaccess/src/khash.h"
#define khash_t(name) kh_ ##name ##_t






#define kh_init(name) kh_init_ ##name()






#define kh_destroy(name,h) kh_destroy_ ##name(h)






#define kh_clear(name,h) kh_clear_ ##name(h)







#define kh_resize(name,h,s) kh_resize_ ##name(h, s)
# 524 "project/goaccess/src/khash.h"
#define kh_put(name,h,k,r) kh_put_ ##name(h, k, r)
# 533 "project/goaccess/src/khash.h"
#define kh_get(name,h,k) kh_get_ ##name(h, k)







#define kh_del(name,h,k) kh_del_ ##name(h, k)







#define kh_exist(h,x) (!__ac_iseither((h)->flags, (x)))







#define kh_key(h,x) ((h)->keys[x])
# 566 "project/goaccess/src/khash.h"
#define kh_val(h,x) ((h)->vals[x])




#define kh_value(h,x) ((h)->vals[x])






#define kh_begin(h) (khint_t)(0)






#define kh_end(h) ((h)->n_buckets)






#define kh_size(h) ((h)->size)






#define kh_n_buckets(h) ((h)->n_buckets)
# 608 "project/goaccess/src/khash.h"
#define kh_foreach(h,kvar,vvar,code) { khint_t __i; \
  for (__i = kh_begin(h); __i != kh_end(h); ++__i) { \
    if (!kh_exist(h,__i)) continue; \
    (kvar) = kh_key(h,__i); \
    (vvar) = kh_val(h,__i); \
    code; \
  } }







#define kh_foreach_value(h,vvar,code) { khint_t __i; \
  for (__i = kh_begin (h); __i != kh_end (h); ++__i) { \
    if (!kh_exist (h, __i)) \
      continue; \
    (vvar) = kh_val (h, __i); \
    code; \
  } }







#define KHASH_SET_INIT_INT(name) \
  KHASH_INIT(name, khint32_t, char, 0, kh_int_hash_func, kh_int_hash_equal)






#define KHASH_MAP_INIT_INT(name,khval_t) \
  KHASH_INIT(name, khint32_t, khval_t, 1, kh_int_hash_func, kh_int_hash_equal)





#define KHASH_SET_INIT_INT64(name) \
  KHASH_INIT(name, khint64_t, char, 0, kh_int64_hash_func, kh_int64_hash_equal)






#define KHASH_MAP_INIT_INT64(name,khval_t) \
  KHASH_INIT(name, khint64_t, khval_t, 1, kh_int64_hash_func, kh_int64_hash_equal)

typedef const char *kh_cstr_t;




#define KHASH_SET_INIT_STR(name) \
  KHASH_INIT(name, kh_cstr_t, char, 0, kh_str_hash_func, kh_str_hash_equal)






#define KHASH_MAP_INIT_STR(name,khval_t) \
  KHASH_INIT(name, kh_cstr_t, khval_t, 1, kh_str_hash_func, kh_str_hash_equal)

#endif
