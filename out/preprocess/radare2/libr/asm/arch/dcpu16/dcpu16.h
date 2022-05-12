# 0 "project/radare2/libr/asm/arch/dcpu16/dcpu16.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/libr/asm/arch/dcpu16/dcpu16.h"
# 9 "project/radare2/libr/asm/arch/dcpu16/dcpu16.h"
int dcpu16_disasm(char *out, size_t size_out, const unsigned short *inp, int len, int *cost);
int dcpu16_assemble(unsigned char* out, const char* unoline);
