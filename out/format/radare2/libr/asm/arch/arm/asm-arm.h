# 1 "project/radare2/libr/asm/arch/arm/asm-arm.h"
#ifndef _INCLUDE_ARMASS_H_
#define _INCLUDE_ARMASS_H_ 

#include <r_types_base.h>

int armass_assemble(const char *str, ut64 off, int thumb);

#endif
