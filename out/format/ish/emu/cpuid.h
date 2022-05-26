# 1 "project/ish/emu/cpuid.h"
#ifndef CPUID_H
#define CPUID_H 

#include "misc.h"

static inline void do_cpuid(dword_t *eax, dword_t *ebx, dword_t *ecx, dword_t *edx) {
    dword_t leaf = *eax;
    switch (leaf) {
        case 0:
            *eax = 0x01;
            *ebx = 0x756e6547;
            *edx = 0x49656e69;
            *ecx = 0x6c65746e;
            break;
        default:
        case 1:
            *eax = 0x0;
            *ebx = 0x0;
            *ecx = 0;
            *edx = (1 << 0)
                | (1 << 15)
                | (1 << 23)
                | (1 << 26)
                ;
            break;
    }
}

#endif
