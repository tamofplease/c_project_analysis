# 1 "project/radare2/libr/asm/arch/avr/avr_disasm.c"
# 25 "project/radare2/libr/asm/arch/avr/avr_disasm.c"
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <r_types.h>

#include "avr_disasm.h"
#include "errorcodes.h"


#include "avr_instructionset.h"
#include "avr_instructionset.c"


static int disassembleOperands(disassembledInstruction *dInstruction);

static uint16_t extractDataFromMask(uint16_t data, uint16_t mask);




static int lookupInstruction(uint16_t opcode, int offset);



int disassembleInstruction(avrDisassembleContext *context, disassembledInstruction *dInstruction, const assembledInstruction aInstruction) {
 int insidx, i;

 if (!dInstruction || !context)
  return ERROR_INVALID_ARGUMENTS;



 insidx = lookupInstruction(aInstruction.opcode, 0);
 if (insidx == AVR_TOTAL_INSTRUCTIONS) {

  return 0;
 }




 if (context->status == AVR_LONG_INSTRUCTION_FOUND) {
  context->status = AVR_LONG_INSTRUCTION_PRINT;
  context->longAddress |= aInstruction.opcode;




        if(!strcmp(context->longInstruction.instruction->mnemonic, "call")||
           !strcmp(context->longInstruction.instruction->mnemonic, "jmp")) {
   context->longAddress *= 2;
        }
  *dInstruction = context->longInstruction;
  return 0;


 } else if (context->status == AVR_LONG_INSTRUCTION_PRINT) {
  context->status = 0;
 }



 dInstruction->address = aInstruction.address;
 dInstruction->instruction = &instructionSet[insidx];
 dInstruction->alternateInstruction = NULL;



 for (i = 0; i < instructionSet[insidx].numOperands; i++) {
  dInstruction->operands[i] = extractDataFromMask(aInstruction.opcode, dInstruction->instruction->operandMasks[i]);



  if (dInstruction->instruction->operandTypes[i] == OPERAND_LONG_ABSOLUTE_ADDRESS) {
   context->status = AVR_LONG_INSTRUCTION_FOUND;
   context->longAddress = dInstruction->operands[i] << 16;
   context->longInstruction = *dInstruction;
  }
 }


 if (disassembleOperands(dInstruction) < 0)
  return ERROR_INVALID_ARGUMENTS;

 if (context->status == AVR_LONG_INSTRUCTION_FOUND) {



  context->longInstruction = *dInstruction;
 }

 return 0;
}


static uint16_t extractDataFromMask(uint16_t data, uint16_t mask) {
 int i, j;
 uint16_t result = 0;



 for (i = 0, j = 0; i < 16; i++) {

  if (mask & (1<<i)) {



   if (((mask & (1<<i)) & data) != 0)
    result |= (1<<j);

   j++;
  }
 }

 return result;
}





static int lookupInstruction(uint16_t opcode, int offset) {
 uint16_t opcodeSearch, operandTemp;
 int insidx, ghostRegisterConfirmed, i, j;

 for (insidx = offset; insidx < AVR_TOTAL_INSTRUCTIONS; insidx++) {
  opcodeSearch = opcode;


  ghostRegisterConfirmed = 1;





  for (i = 0; i < AVR_MAX_NUM_OPERANDS; i++) {
   if (instructionSet[insidx].operandTypes[i] == OPERAND_REGISTER_GHOST) {

    operandTemp = extractDataFromMask(opcode, instructionSet[insidx].operandMasks[0]);

    for (j = 1; j < AVR_MAX_NUM_OPERANDS; j++) {
     if (extractDataFromMask(opcode, instructionSet[insidx].operandMasks[i]) !=
       operandTemp)
      ghostRegisterConfirmed = 0;
    }
   }
   opcodeSearch &= ~(instructionSet[insidx].operandMasks[i]);
  }



  if (ghostRegisterConfirmed == 0)
   continue;

  if (opcodeSearch == instructionSet[insidx].opcodeMask)
   break;
 }




 return insidx;
}


static int disassembleOperands(disassembledInstruction *dInstruction) {
 int i;


 if (!dInstruction)
  return ERROR_INVALID_ARGUMENTS;
 if (!dInstruction->instruction)
  return ERROR_INVALID_ARGUMENTS;


 for (i = 0; i < dInstruction->instruction->numOperands; i++) {
  switch (dInstruction->instruction->operandTypes[i]) {
  case OPERAND_BRANCH_ADDRESS:
# 217 "project/radare2/libr/asm/arch/avr/avr_disasm.c"
   dInstruction->operands[i] <<= 1;
   if (dInstruction->operands[i] & 0x80) {




    dInstruction->operands[i] = (~dInstruction->operands[i]+1)&0x7F;
    dInstruction->operands[i] = -dInstruction->operands[i]+2;
   } else {
    dInstruction->operands[i] += 2;
   }
   break;
  case OPERAND_RELATIVE_ADDRESS:
# 244 "project/radare2/libr/asm/arch/avr/avr_disasm.c"
   dInstruction->operands[i] <<= 1;
   if (dInstruction->operands[i] & 0x1000) {




    short val = ((~dInstruction->operands[i]) ) & 0xFFF;

    dInstruction->operands[i] = -val + 1;

   } else {
    dInstruction->operands[i] += 2;
   }
   break;
  case OPERAND_REGISTER_STARTR16:
   dInstruction->operands[i] = 16 + dInstruction->operands[i] ;
   break;
  case OPERAND_REGISTER_EVEN_PAIR:
   dInstruction->operands[i] = dInstruction->operands[i] * 2;
   break;
  case OPERAND_REGISTER_EVEN_PAIR_STARTR24:
   dInstruction->operands[i] = 24 + (dInstruction->operands[i] * 2);
   break;
  case OPERAND_COMPLEMENTED_DATA:
   dInstruction->operands[i] = ~dInstruction->operands[i] & 0xFF;
   break;
  default:
   break;
  }
 }
 return 0;
}
