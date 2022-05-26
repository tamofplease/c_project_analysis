# 1 "project/ish/kernel/mm.h"
#ifndef KERNEL_MM_H
#define KERNEL_MM_H 

#include "emu/memory.h"
#include "misc.h"


struct mm {
    atomic_uint refcount;
    struct mem mem;

    addr_t vdso;
    addr_t start_brk;
    addr_t brk;


    addr_t argv_start;
    addr_t argv_end;
    addr_t env_start;
    addr_t env_end;
    addr_t auxv_start;
    addr_t auxv_end;
    addr_t stack_start;
    struct fd *exefile;
};


struct mm *mm_new(void);

struct mm *mm_copy(struct mm *mm);

void mm_retain(struct mm *mem);

void mm_release(struct mm *mem);

#endif
