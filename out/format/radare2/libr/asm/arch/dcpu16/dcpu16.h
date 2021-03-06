# 1 "project/radare2/libr/asm/arch/dcpu16/dcpu16.h"
#ifndef _INCLUDE_DCPU16_H_
#define _INCLUDE_DCPU16_H_ 

#ifndef ut8
#define ut8 unsigned char
#define ut16 unsigned short
#endif

int dcpu16_disasm(char *out, size_t size_out, const ut16 *inp, int len, int *cost);
int dcpu16_assemble(ut8* out, const char* unoline);

#endif
