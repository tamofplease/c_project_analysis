# 1 "project/radare2/libr/asm/arch/arm/v35arm64/arch-arm64/disassembler/gofer.c"
#include <stdio.h>
#include <stdint.h>
#include <stddef.h>
#include <string.h>
#include <stdbool.h>

#include "decode.h"
#include "format.h"

void disassemble(uint64_t addr, uint8_t *data, int len, char *result, bool verbose)
{
 Instruction instr;
 memset(&instr, 0, sizeof(instr));

 aarch64_decompose(*(uint32_t *)data, &instr, addr);

 aarch64_disassemble(&instr, result, 1024);
}

uint32_t get_encoding(uint8_t *data)
{
 Instruction instr;


 memset(&instr, 0, sizeof(instr));
 aarch64_decompose(*(uint32_t *)data, &instr, 0);
 return instr.encoding;
}
