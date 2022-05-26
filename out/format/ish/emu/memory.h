# 1 "project/ish/emu/memory.h"
#ifndef MEMORY_H
#define MEMORY_H 

#include <stdatomic.h>
#include <unistd.h>
#include <stdbool.h>
#include "emu/mmu.h"
#include "util/list.h"
#include "util/sync.h"
#include "misc.h"
#if ENGINE_JIT
struct jit;
#endif

struct mem {
    struct pt_entry **pgdir;
    int pgdir_used;

#if ENGINE_JIT
    struct jit *jit;
#endif
    struct mmu mmu;

    wrlock_t lock;
};
#define MEM_PAGES (1 << 20)
#define MEM_PGDIR_SIZE (1 << 10)


void mem_init(struct mem *mem);

void mem_destroy(struct mem *mem);

struct pt_entry *mem_pt(struct mem *mem, page_t page);


void mem_next_page(struct mem *mem, page_t *page);

#define BYTES_ROUND_DOWN(bytes) (PAGE(bytes) << PAGE_BITS)
#define BYTES_ROUND_UP(bytes) (PAGE_ROUND_UP(bytes) << PAGE_BITS)

#define LEAK_DEBUG 0

struct data {
    void *data;
    size_t size;
    atomic_uint refcount;


    struct fd *fd;
    size_t file_offset;
    const char *name;
#if LEAK_DEBUG
    int pid;
    addr_t dest;
#endif
};
struct pt_entry {
    struct data *data;
    size_t offset;
    unsigned flags;
#if ENGINE_JIT
    struct list blocks[2];
#endif
};


#define P_READ (1 << 0)
#define P_WRITE (1 << 1)
#undef P_EXEC
#define P_EXEC (1 << 2)
#define P_RWX (P_READ | P_WRITE | P_EXEC)
#define P_GROWSDOWN (1 << 3)
#define P_COW (1 << 4)
#define P_WRITABLE(flags) (flags & P_WRITE && !(flags & P_COW))


#define P_ANONYMOUS (1 << 6)

#define P_SHARED (1 << 7)

bool pt_is_hole(struct mem *mem, page_t start, pages_t pages);
page_t pt_find_hole(struct mem *mem, pages_t size);




int pt_map(struct mem *mem, page_t start, pages_t pages, void *memory, size_t offset, unsigned flags);

int pt_map_nothing(struct mem *mem, page_t page, pages_t pages, unsigned flags);

int pt_unmap(struct mem *mem, page_t start, pages_t pages);

int pt_unmap_always(struct mem *mem, page_t start, pages_t pages);

int pt_set_flags(struct mem *mem, page_t start, pages_t pages, int flags);

int pt_copy_on_write(struct mem *src, struct mem *dst, page_t start, page_t pages);


void *mem_ptr(struct mem *mem, addr_t addr, int type);
int mem_segv_reason(struct mem *mem, addr_t addr);

extern size_t real_page_size;

#endif
