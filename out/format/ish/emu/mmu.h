# 1 "project/ish/emu/mmu.h"
#ifndef EMU_CPU_MEM_H
#define EMU_CPU_MEM_H 

#include "misc.h"


typedef dword_t page_t;
#define BAD_PAGE 0x10000

#ifndef __KERNEL__
#define PAGE_BITS 12
#undef PAGE_SIZE
#define PAGE_SIZE (1 << PAGE_BITS)
#define PAGE(addr) ((addr) >> PAGE_BITS)
#define PGOFFSET(addr) ((addr) & (PAGE_SIZE - 1))
typedef dword_t pages_t;

#define PAGE_ROUND_UP(bytes) (PAGE((bytes) + PAGE_SIZE - 1))
#endif

struct mmu {
    struct mmu_ops *ops;
    struct jit *jit;
    uint64_t changes;
};

#define MEM_READ 0
#define MEM_WRITE 1
#define MEM_WRITE_PTRACE 2

struct mmu_ops {

    void *(*translate)(struct mmu *mmu, addr_t addr, int type);
};

static inline void *mmu_translate(struct mmu *mmu, addr_t addr, int type) {
    return mmu->ops->translate(mmu, addr, type);
}

#endif
