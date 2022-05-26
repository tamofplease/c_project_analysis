# 1 "project/radare2/shlr/sdb/src/ht_inc.h"


#ifndef HT_TYPE
#error HT_TYPE should be defined before including this header
#endif

#undef HtName_
#undef Ht_
#undef HT_
#undef KEY_TYPE
#undef VALUE_TYPE
#undef KEY_TO_HASH
#undef HT_NULL_VALUE

#if HT_TYPE == 1
#define HtName_(name) name ##PP
#define Ht_(name) ht_pp_ ##name
#define HT_(name) HtPP ##name
#define KEY_TYPE void *
#define VALUE_TYPE void *
#define KEY_TO_HASH(x) ((ut32)(uintptr_t)(x))
#define HT_NULL_VALUE NULL
#elif HT_TYPE == 2
#define HtName_(name) name ##UP
#define Ht_(name) ht_up_ ##name
#define HT_(name) HtUP ##name
#define KEY_TYPE ut64
#define VALUE_TYPE void *
#define KEY_TO_HASH(x) ((ut32)(x))
#define HT_NULL_VALUE 0
#elif HT_TYPE == 3
#define HtName_(name) name ##UU
#define Ht_(name) ht_uu_ ##name
#define HT_(name) HtUU ##name
#define KEY_TYPE ut64
#define VALUE_TYPE ut64
#define KEY_TO_HASH(x) ((ut32)(x))
#define HT_NULL_VALUE 0
#else
#define HtName_(name) name ##PU
#define Ht_(name) ht_pu_ ##name
#define HT_(name) HtPU ##name
#define KEY_TYPE void *
#define VALUE_TYPE ut64
#define KEY_TO_HASH(x) ((ut32)(uintptr_t)(x))
#define HT_NULL_VALUE 0
#endif

#include "ls.h"
#include "types.h"


typedef struct Ht_(kv) {
 KEY_TYPE key;
 VALUE_TYPE value;
 ut32 key_len;
 ut32 value_len;
} HT_(Kv);

typedef void (*HT_(KvFreeFunc))(HT_(Kv) *);
typedef KEY_TYPE (*HT_(DupKey))(const KEY_TYPE);
typedef VALUE_TYPE (*HT_(DupValue))(const VALUE_TYPE);
typedef ut32 (*HT_(CalcSizeK))(const KEY_TYPE);
typedef ut32 (*HT_(CalcSizeV))(const VALUE_TYPE);
typedef ut32 (*HT_(HashFunction))(const KEY_TYPE);
typedef int (*HT_(ListComparator))(const KEY_TYPE, const KEY_TYPE);
typedef bool (*HT_(ForeachCallback))(void *user, const KEY_TYPE, const VALUE_TYPE);

typedef struct Ht_(bucket_t) {
 HT_(Kv) *arr;
 ut32 count;
} HT_(Bucket);


typedef struct Ht_(options_t) {
 HT_(ListComparator) cmp;
 HT_(HashFunction) hashfn;
 HT_(DupKey) dupkey;
 HT_(DupValue) dupvalue;
 HT_(CalcSizeK) calcsizeK;
 HT_(CalcSizeV) calcsizeV;
 HT_(KvFreeFunc) freefn;
 size_t elem_size;
} HT_(Options);


typedef struct Ht_(t) {
 ut32 size;
 ut32 count;
 HT_(Bucket)* table;
 ut32 prime_idx;
 HT_(Options) opt;
} HtName_(Ht);


SDB_API HtName_(Ht)* Ht_(new_opt)(HT_(Options) *opt);

SDB_API void Ht_(free)(HtName_(Ht)* ht);

SDB_API bool Ht_(insert)(HtName_(Ht)* ht, const KEY_TYPE key, VALUE_TYPE value);

SDB_API bool Ht_(update)(HtName_(Ht)* ht, const KEY_TYPE key, VALUE_TYPE value);

SDB_API bool Ht_(update_key)(HtName_(Ht)* ht, const KEY_TYPE old_key, const KEY_TYPE new_key);

SDB_API bool Ht_(delete)(HtName_(Ht)* ht, const KEY_TYPE key);

SDB_API VALUE_TYPE Ht_(find)(HtName_(Ht)* ht, const KEY_TYPE key, bool* found);




SDB_API void Ht_(foreach)(HtName_(Ht) *ht, HT_(ForeachCallback) cb, void *user);

SDB_API HT_(Kv)* Ht_(find_kv)(HtName_(Ht)* ht, const KEY_TYPE key, bool* found);
SDB_API bool Ht_(insert_kv)(HtName_(Ht) *ht, HT_(Kv) *kv, bool update);

#undef HT_TYPE
