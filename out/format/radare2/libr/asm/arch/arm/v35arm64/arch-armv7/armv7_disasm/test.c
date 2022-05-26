# 1 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/test.c"
# 9 "project/radare2/libr/asm/arch/arm/v35arm64/arch-armv7/armv7_disasm/test.c"
#include <stdio.h>
#include <stdio.h>
#include <stdint.h>
#include "armv7.h"

int main(int ac, char **av)
{
 uint32_t insword = strtoul(av[1], NULL, 16);
 uint32_t address = 0;
 uint32_t endian = 0;
 uint32_t rc;

 Instruction instr;
 memset(&instr, 0, sizeof(instr));

 rc = armv7_decompose(insword, &instr, address, endian);
 if(rc) {
  printf("ERROR: armv7_decompose() returned %d\n", rc);
  return rc;
 }

 char instxt[4096];
 memset(instxt, 0, sizeof(instxt));
 rc = armv7_disassemble(&instr, instxt, sizeof(instxt));
 if(rc) {
  printf("ERROR: armv7_disassemble() returned %d\n", rc);
  return rc;
 }

 printf("%08X: %s\n", address, instxt);
}
