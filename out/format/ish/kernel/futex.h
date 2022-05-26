# 1 "project/ish/kernel/futex.h"
#ifndef KERNEL_FUTEX_H
#define KERNEL_FUTEX_H 

int futex_wake(addr_t uaddr, dword_t val);

#endif
