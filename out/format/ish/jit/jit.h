# 1 "project/ish/jit/jit.h"
#ifndef JIT_H
#define JIT_H 
#include "misc.h"
#include "emu/mmu.h"
#include "util/list.h"
#include "util/sync.h"

#if ENGINE_JIT

#define JIT_INITIAL_HASH_SIZE (1 << 10)
#define JIT_CACHE_SIZE (1 << 10)
#define JIT_PAGE_HASH_SIZE (1 << 10)

struct jit {

    struct mmu *mmu;
    size_t mem_used;
    size_t num_blocks;

    struct list *hash;
    size_t hash_size;



    struct list jetsam;


    struct {
        struct list blocks[2];
    } *page_hash;

    lock_t lock;
    wrlock_t jetsam_lock;
};



#define JIT_BLOCK_INITIAL_CAPACITY 16

struct jit_block {
    addr_t addr;
    addr_t end_addr;
    size_t used;


    unsigned long *jump_ip[2];

    unsigned long old_jump_ip[2];

    struct list jumps_from[2];


    struct list chain;

    struct list page[2];

    struct list jumps_from_links[2];

    struct list jetsam;
    bool is_jetsam;

    unsigned long code[];
};


struct jit *jit_new(struct mmu *mmu);
void jit_free(struct jit *jit);




void jit_invalidate_range(struct jit *jit, page_t start, page_t end);
void jit_invalidate_page(struct jit *jit, page_t page);
void jit_invalidate_all(struct jit *jit);

#endif

#endif
