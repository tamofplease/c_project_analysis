# 1 "project/radare2/libr/asm/arch/arm/v35arm64/arch-arm64/disassembler/decode.c"
#include "decode.h"
#include "feature_flags.h"

int decode_spec(context *ctx, Instruction *dec);
int decode_scratchpad(context *ctx, Instruction *dec);

int aarch64_decompose(uint32_t instructionValue, Instruction *instr, uint64_t address)
{
 context ctx = { 0 };
 ctx.halted = 1;
 ctx.insword = instructionValue;
 ctx.address = address;
 ctx.features0 = ARCH_FEATURES_ALL;
 ctx.features1 = ARCH_FEATURES_ALL;
 ctx.EDSCR_HDE = 1;


 int rc = decode_spec(&ctx, instr);
 if(rc != DECODE_STATUS_OK)
  return rc;






 return decode_scratchpad(&ctx, instr);
}
