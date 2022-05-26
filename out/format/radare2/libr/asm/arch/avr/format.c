# 1 "project/radare2/libr/asm/arch/avr/format.c"
# 26 "project/radare2/libr/asm/arch/avr/format.c"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "format.h"
#include "r_util.h"
#include "avr_disasm.h"







static int formatDisassembledOperand(RAsm *a, avrDisassembleContext *context, char *strOperand, int strOperandSize, int operandNum, const disassembledInstruction dInstruction, formattingOptions fOptions);
static int analFormatDisassembledOperand(RAnal *a, avrDisassembleContext *context, char *strOperand, int strOperandSize, int operandNum, const disassembledInstruction dInstruction, formattingOptions fOptions);



int printDisassembledInstruction(RAsm *a, avrDisassembleContext *context, char *out, int out_len, const disassembledInstruction dInstruction, formattingOptions fOptions) {

 int retVal, i;
 char strOperand[256];
 *out = '\0';



 if (context->status == AVR_LONG_INSTRUCTION_FOUND) {
  return 0;
 }

 RStrBuf *sb = r_strbuf_new (dInstruction.instruction->mnemonic);
 if (dInstruction.instruction->numOperands > 0) {
  r_strbuf_append (sb, " ");
 }

 for (i = 0; i < dInstruction.instruction->numOperands; i++) {


  if (i > 0 && i != dInstruction.instruction->numOperands) {
   r_strbuf_append (sb, ", ");
  }

  retVal = formatDisassembledOperand (a, context, strOperand, sizeof (strOperand), i, dInstruction, fOptions);
  if (retVal < 0) {
   r_strbuf_free (sb);
   return retVal;
  }

  r_strbuf_append (sb, strOperand);
 }
 const char *src = r_strbuf_get (sb);
 r_str_ncpy (out, src, out_len);
 r_strbuf_free (sb);
 return 1;
}


int analPrintDisassembledInstruction(RAnal *a, avrDisassembleContext *context, char *out, int out_len, const disassembledInstruction dInstruction, formattingOptions fOptions) {

 int retVal, i;
 char strOperand[256];



 if (context->status == AVR_LONG_INSTRUCTION_FOUND) {
  return 0;
 }

 RStrBuf *sb = r_strbuf_new (dInstruction.instruction->mnemonic);
 if (dInstruction.instruction->numOperands > 0) {
  r_strbuf_append (sb, " ");
 }
 for (i = 0; i < dInstruction.instruction->numOperands; i++) {


  if (i > 0 && i != dInstruction.instruction->numOperands) {
   r_strbuf_append (sb, ", ");
  }

  retVal = analFormatDisassembledOperand (a, context, strOperand, sizeof (strOperand), i, dInstruction, fOptions);
  if (retVal < 0) {
   r_strbuf_free (sb);
   return retVal;
  }

  r_strbuf_append (sb, strOperand);
 }
 char *src = r_strbuf_get (sb);
 r_str_ncpy (out, src, out_len);
 r_strbuf_free (sb);
 return 1;
}


static int formatDisassembledOperand(RAsm *a, avrDisassembleContext *context, char *strOperand, int strOperandSize, int operandNum, const disassembledInstruction dInstruction, formattingOptions fOptions) {
 char binary[9];
 int retVal;

 if (operandNum >= AVR_MAX_NUM_OPERANDS)
  return 0;

 switch (dInstruction.instruction->operandTypes[operandNum]) {
 case OPERAND_NONE:
 case OPERAND_REGISTER_GHOST:
  strOperand = NULL;
  retVal = 0;
  break;
 case OPERAND_REGISTER:
 case OPERAND_REGISTER_STARTR16:
 case OPERAND_REGISTER_EVEN_PAIR_STARTR24:
 case OPERAND_REGISTER_EVEN_PAIR:
  retVal = sprintf (strOperand, "%s%d", OPERAND_PREFIX_REGISTER,
   dInstruction.operands[operandNum]);
  break;
 case OPERAND_DATA:
 case OPERAND_COMPLEMENTED_DATA:
  if (fOptions.options & FORMAT_OPTION_DATA_BIN) {
   int i;
   for (i = 7; i >= 0; i--) {
    if (dInstruction.operands[operandNum] & (1<<i))
     binary[7-i] = '1';
    else
     binary[7-i] = '0';
   }
   binary[8] = '\0';
   retVal = sprintf(strOperand, "%s%s",
    OPERAND_PREFIX_DATA_BIN, binary);
  } else if (fOptions.options & FORMAT_OPTION_DATA_DEC) {
   retVal = sprintf(strOperand, "%s%d",
    OPERAND_PREFIX_DATA_DEC,
    dInstruction.operands[operandNum]);
  } else {
   retVal = sprintf(strOperand, "%s%02x",
    OPERAND_PREFIX_DATA_HEX,
    dInstruction.operands[operandNum]);
  }
  break;
 case OPERAND_BIT:
  retVal = sprintf(strOperand, "%s%d", OPERAND_PREFIX_BIT,
   dInstruction.operands[operandNum]);
  break;
 case OPERAND_BRANCH_ADDRESS:
 case OPERAND_RELATIVE_ADDRESS:
#if 0


  if ((fOptions.options & FORMAT_OPTION_ADDRESS_LABEL) && fOptions.addressLabelPrefix != NULL) {
   retVal = sprintf(strOperand, "%s%0*X",
    fOptions.addressLabelPrefix,
    fOptions.addressFieldWidth,
    dInstruction.address+dInstruction.operands[operandNum]+2);
  } else {
#endif
#if 0

   if (dInstruction.operands[operandNum] > 0) {



    retVal = sprintf(strOperand, "0x%x", dInstruction.address + dInstruction.operands[operandNum]);
   } else {



   }
#endif
   retVal = sprintf(strOperand, "0x%x",
    dInstruction.address + dInstruction.operands[operandNum]);

  break;
 case OPERAND_LONG_ABSOLUTE_ADDRESS:
  retVal = sprintf(strOperand, "%s%0*x",
   OPERAND_PREFIX_ABSOLUTE_ADDRESS,
   fOptions.addressFieldWidth, context->longAddress);
  break;
 case OPERAND_IO_REGISTER:
 {
  const char *current_register = NULL;
  bool is_register_found = false;

  switch (dInstruction.operands[operandNum]) {
  case 0x3d:
   current_register = "spl";
   is_register_found = true;
   break;
  case 0x3e:
   current_register = "sph";
   is_register_found = true;
   break;
  case 0x3f:
   current_register = "sreg";
   is_register_found = true;
   break;
  }

  if (!strcmp (r_str_get (a->cpu), "ATmega328p")) {
   switch (dInstruction.operands[operandNum]) {
   case 0x03:
    current_register = "pinb";
    is_register_found = true;
    break;
   case 0x04:
    current_register = "ddrb";
    is_register_found = true;
    break;
   case 0x05:
    current_register = "portb";
    is_register_found = true;
    break;
   case 0x06:
    current_register = "pinc";
    is_register_found = true;
    break;
   case 0x07:
    current_register = "ddrc";
    is_register_found = true;
    break;
   case 0x08:
    current_register = "portc";
    is_register_found = true;
    break;
   case 0x09:
    current_register = "pind";
    is_register_found = true;
    break;
   case 0x0a:
    current_register = "ddrd";
    is_register_found = true;
    break;
   case 0x0b:
    current_register = "portd";
    is_register_found = true;
    break;
   case 0x15:
    current_register = "tifr0";
    is_register_found = true;
    break;
   case 0x016:
    current_register = "tifr1";
    is_register_found = true;
    break;
   case 0x17:
    current_register = "tifr2";
    is_register_found = true;
    break;
   case 0x1b:
    current_register = "pcifr";
    is_register_found = true;
    break;
   case 0x1c:
    current_register = "eifr";
    is_register_found = true;
    break;
   case 0x1d:
    current_register = "eimsk";
    is_register_found = true;
    break;
   case 0x1e:
    current_register = "gpior0";
    is_register_found = true;
    break;
   case 0x1f:
    current_register = "eecr";
    is_register_found = true;
    break;
   case 0x20:
    current_register = "eedr";
    is_register_found = true;
    break;
   case 0x21:
    current_register = "eear";
    is_register_found = true;
    break;
   case 0x22:
    current_register = "eearh";
    is_register_found = true;
    break;
   case 0x23:
    current_register = "gtccr";
    is_register_found = true;
    break;
   case 0x24:
    current_register = "tccr0a";
    is_register_found = true;
    break;
   case 0x25:
    current_register = "tccr0b";
    is_register_found = true;
    break;
   case 0x26:
    current_register = "tcnt0";
    is_register_found = true;
    break;
   case 0x27:
    current_register = "otcr0a";
    is_register_found = true;
    break;
   case 0x28:
    current_register = "otcr0b";
    is_register_found = true;
    break;
   case 0x2a:
    current_register = "gpior1";
    is_register_found = true;
    break;
   case 0x2b:
    current_register = "gpior2";
    is_register_found = true;
    break;
   case 0x2c:
    current_register = "spcr";
    is_register_found = true;
    break;
   case 0x2d:
    current_register = "spsr";
    is_register_found = true;
    break;
   case 0x2e:
    current_register = "spdr";
    is_register_found = true;
    break;
   case 030:
    current_register = "acsr";
    is_register_found = true;
    break;
   case 0x33:
    current_register = "smcr";
    is_register_found = true;
    break;
   case 0x34:
    current_register = "mcusr";
    is_register_found = true;
    break;
   case 0x35:
    current_register = "mcucr";
    is_register_found = true;
    break;
   case 0x37:
    current_register = "spmcsr";
    is_register_found = true;
    break;
# 387 "project/radare2/libr/asm/arch/avr/format.c"
   default:
    if (is_register_found == false) {
     retVal = snprintf (strOperand, strOperandSize, "0x%x", dInstruction.operands[operandNum]);
    }
    break;
   }
  }
  if (!strcmp (r_str_get (a->cpu), "AT90S1200")) {
   switch (dInstruction.operands[operandNum]) {
   case 0x08:
    current_register = "acsr";
    is_register_found = true;
    break;
   case 0x10:
    current_register = "pind";
    is_register_found = true;
    break;
   case 0x11:
    current_register = "ddrd";
    is_register_found = true;
    break;
   case 0x12:
    current_register = "portd";
    is_register_found = true;
    break;
   default:
    break;
   }
  }
  if (is_register_found) {
   retVal = r_str_ncpy (strOperand, current_register, strOperandSize);
  } else {
   retVal = snprintf (strOperand, 5, "0x%x", dInstruction.operands[operandNum]);
  }
  break;
 }
 case OPERAND_WORD_DATA:
  retVal = sprintf (strOperand, "%s%0*x",
   OPERAND_PREFIX_WORD_DATA,
   fOptions.addressFieldWidth,
   dInstruction.operands[operandNum]);
  break;
 case OPERAND_DES_ROUND:
  retVal = sprintf (strOperand, "%s%02x",
   OPERAND_PREFIX_WORD_DATA,
   dInstruction.operands[operandNum]);
  break;
 case OPERAND_YPQ:
  retVal = sprintf(strOperand, "y+%d",
   dInstruction.operands[operandNum]);
  break;
 case OPERAND_ZPQ:
  retVal = sprintf(strOperand, "z+%d",
   dInstruction.operands[operandNum]);
  break;
 case OPERAND_X: retVal = sprintf(strOperand, "x"); break;
 case OPERAND_XP: retVal = sprintf(strOperand, "x+"); break;
 case OPERAND_MX: retVal = sprintf(strOperand, "-x"); break;
 case OPERAND_Y: retVal = sprintf(strOperand, "y"); break;
 case OPERAND_YP: retVal = sprintf(strOperand, "y+"); break;
 case OPERAND_MY: retVal = sprintf(strOperand, "-y"); break;
 case OPERAND_Z: retVal = sprintf(strOperand, "z"); break;
 case OPERAND_ZP: retVal = sprintf(strOperand, "z+"); break;
 case OPERAND_MZ: retVal = sprintf(strOperand, "-z"); break;

 default: return ERROR_UNKNOWN_OPERAND;
 }
 return retVal <0? ERROR_MEMORY_ALLOCATION_ERROR: 0;
}







static int analFormatDisassembledOperand(RAnal *a, avrDisassembleContext *context, char *strOperand, int strOperandSize, int operandNum, const disassembledInstruction dInstruction, formattingOptions fOptions) {
 char binary[9];
 int retVal;

 if (operandNum >= AVR_MAX_NUM_OPERANDS)
  return 0;

 switch (dInstruction.instruction->operandTypes[operandNum]) {
 case OPERAND_NONE:
 case OPERAND_REGISTER_GHOST:
  strOperand = NULL;
  retVal = 0;
  break;
 case OPERAND_REGISTER:
 case OPERAND_REGISTER_STARTR16:
 case OPERAND_REGISTER_EVEN_PAIR_STARTR24:
 case OPERAND_REGISTER_EVEN_PAIR:
  retVal = snprintf (strOperand, strOperandSize, "%s%d", OPERAND_PREFIX_REGISTER,
   dInstruction.operands[operandNum]);
  break;
 case OPERAND_DATA:
 case OPERAND_COMPLEMENTED_DATA:
  if (fOptions.options & FORMAT_OPTION_DATA_BIN) {
   int i;
   for (i = 7; i >= 0; i--) {
    if (dInstruction.operands[operandNum] & (1<<i))
     binary[7-i] = '1';
    else
     binary[7-i] = '0';
   }
   binary[8] = '\0';
   retVal = snprintf (strOperand, strOperandSize, "%s%s",
    OPERAND_PREFIX_DATA_BIN, binary);
  } else if (fOptions.options & FORMAT_OPTION_DATA_DEC) {
   retVal = snprintf (strOperand, strOperandSize, "%s%d",
    OPERAND_PREFIX_DATA_DEC,
    dInstruction.operands[operandNum]);
  } else {
   retVal = snprintf (strOperand, strOperandSize, "%s%02x",
    OPERAND_PREFIX_DATA_HEX,
    dInstruction.operands[operandNum]);
  }
  break;
 case OPERAND_BIT:
  retVal = snprintf (strOperand, strOperandSize, "%s%d", OPERAND_PREFIX_BIT,
   dInstruction.operands[operandNum]);
  break;
 case OPERAND_BRANCH_ADDRESS:
 case OPERAND_RELATIVE_ADDRESS:
#if 0


  if ((fOptions.options & FORMAT_OPTION_ADDRESS_LABEL) && fOptions.addressLabelPrefix != NULL) {
   retVal = sprintf(strOperand, "%s%0*X",
    fOptions.addressLabelPrefix,
    fOptions.addressFieldWidth,
    dInstruction.address+dInstruction.operands[operandNum]+2);
  } else {
#endif
#if 0

   if (dInstruction.operands[operandNum] > 0) {



    retVal = sprintf(strOperand, "0x%x", dInstruction.address + dInstruction.operands[operandNum]);
   } else {



   }
#endif
   retVal = snprintf (strOperand, strOperandSize, "0x%x",
    dInstruction.address + dInstruction.operands[operandNum]);

  break;
 case OPERAND_LONG_ABSOLUTE_ADDRESS:
  retVal = snprintf (strOperand, strOperandSize, "%s%0*x",
   OPERAND_PREFIX_ABSOLUTE_ADDRESS,
   fOptions.addressFieldWidth, context->longAddress);
  break;
 case OPERAND_IO_REGISTER:
 {
  const char *current_register = NULL;
  bool is_register_found = false;

  switch (dInstruction.operands[operandNum]) {
  case 0x3d:
   current_register = "spl";
   is_register_found = true;
   break;
  case 0x3e:
   current_register = "sph";
   is_register_found = true;
   break;
  case 0x3f:
   current_register = "sreg";
   is_register_found = true;
   break;
  }

  if (!strcmp (r_str_get (a->cpu), "ATmega328p")) {
   switch (dInstruction.operands[operandNum]) {
   case 0x03:
    current_register = "pinb";
    is_register_found = true;
    break;
   case 0x04:
    current_register = "ddrb";
    is_register_found = true;
    break;
   case 0x05:
    current_register = "portb";
    is_register_found = true;
    break;
   case 0x06:
    current_register = "pinc";
    is_register_found = true;
    break;
   case 0x07:
    current_register = "ddrc";
    is_register_found = true;
    break;
   case 0x08:
    current_register = "portc";
    is_register_found = true;
    break;
   case 0x09:
    current_register = "pind";
    is_register_found = true;
    break;
   case 0x0a:
    current_register = "ddrd";
    is_register_found = true;
    break;
   case 0x0b:
    current_register = "portd";
    is_register_found = true;
    break;
   case 0x15:
    current_register = "tifr0";
    is_register_found = true;
    break;
   case 0x016:
    current_register = "tifr1";
    is_register_found = true;
    break;
   case 0x17:
    current_register = "tifr2";
    is_register_found = true;
    break;
   case 0x1b:
    current_register = "pcifr";
    is_register_found = true;
    break;
   case 0x1c:
    current_register = "eifr";
    is_register_found = true;
    break;
   case 0x1d:
    current_register = "eimsk";
    is_register_found = true;
    break;
   case 0x1e:
    current_register = "gpior0";
    is_register_found = true;
    break;
   case 0x1f:
    current_register = "eecr";
    is_register_found = true;
    break;
   case 0x20:
    current_register = "eedr";
    is_register_found = true;
    break;
   case 0x21:
    current_register = "eear";
    is_register_found = true;
    break;
   case 0x22:
    current_register = "eearh";
    is_register_found = true;
    break;
   case 0x23:
    current_register = "gtccr";
    is_register_found = true;
    break;
   case 0x24:
    current_register = "tccr0a";
    is_register_found = true;
    break;
   case 0x25:
    current_register = "tccr0b";
    is_register_found = true;
    break;
   case 0x26:
    current_register = "tcnt0";
    is_register_found = true;
    break;
   case 0x27:
    current_register = "otcr0a";
    is_register_found = true;
    break;
   case 0x28:
    current_register = "otcr0b";
    is_register_found = true;
    break;
   case 0x2a:
    current_register = "gpior1";
    is_register_found = true;
    break;
   case 0x2b:
    current_register = "gpior2";
    is_register_found = true;
    break;
   case 0x2c:
    current_register = "spcr";
    is_register_found = true;
    break;
   case 0x2d:
    current_register = "spsr";
    is_register_found = true;
    break;
   case 0x2e:
    current_register = "spdr";
    is_register_found = true;
    break;
   case 030:
    current_register = "acsr";
    is_register_found = true;
    break;
   case 0x33:
    current_register = "smcr";
    is_register_found = true;
    break;
   case 0x34:
    current_register = "mcusr";
    is_register_found = true;
    break;
   case 0x35:
    current_register = "mcucr";
    is_register_found = true;
    break;
   case 0x37:
    current_register = "spmcsr";
    is_register_found = true;
    break;
# 730 "project/radare2/libr/asm/arch/avr/format.c"
   default:
    break;
   }
  }


  if (is_register_found) {
   r_str_ncpy (strOperand, current_register, strOperandSize);
   retVal = strlen (strOperand);
  } else {
   retVal = snprintf (strOperand, strOperandSize, "0x%x", dInstruction.operands[operandNum]);
  }
  break;
 }
 case OPERAND_WORD_DATA:
  retVal = sprintf (strOperand, "%s%0*x",
   OPERAND_PREFIX_WORD_DATA,
   fOptions.addressFieldWidth,
   dInstruction.operands[operandNum]);
  break;
 case OPERAND_DES_ROUND:
  retVal = sprintf (strOperand, "%s%02x",
   OPERAND_PREFIX_WORD_DATA,
   dInstruction.operands[operandNum]);
  break;
 case OPERAND_YPQ:
  retVal = snprintf (strOperand, strOperandSize, "y+%d",
   dInstruction.operands[operandNum]);
  break;
 case OPERAND_ZPQ:
  retVal = snprintf (strOperand, strOperandSize, "z+%d",
   dInstruction.operands[operandNum]);
  break;
 case OPERAND_X: retVal = snprintf (strOperand, strOperandSize, "x"); break;
 case OPERAND_XP: retVal = snprintf (strOperand, strOperandSize, "x+"); break;
 case OPERAND_MX: retVal = snprintf (strOperand, strOperandSize, "-x"); break;
 case OPERAND_Y: retVal = snprintf (strOperand, strOperandSize, "y"); break;
 case OPERAND_YP: retVal = snprintf (strOperand, strOperandSize, "y+"); break;
 case OPERAND_MY: retVal = snprintf (strOperand, strOperandSize, "-y"); break;
 case OPERAND_Z: retVal = snprintf (strOperand, strOperandSize, "z"); break;
 case OPERAND_ZP: retVal = snprintf (strOperand, strOperandSize, "z+"); break;
 case OPERAND_MZ: retVal = snprintf (strOperand, strOperandSize, "-z"); break;

 default: return ERROR_UNKNOWN_OPERAND;
 }
 return retVal < 0? ERROR_MEMORY_ALLOCATION_ERROR: 0;
}

int parse_registerpair(const char *operand) {
  int res = -1;
  char *op = strdup (operand);
  char *first = strtok (op, ":");

  if (!first || strlen (first) < 2) {
   free (op);
   return -1;
  }

  char *second = strtok (NULL, ":");






  if (second && strlen (second) < 2) {



   if (first[0] == 'r' && second[0] == 'r') {
    int fnum = atoi (first + 1);
    int snum = atoi (second + 1);
    if (fnum > snum && snum >= 0 && snum <= 30) {
     res = snum / 2;
    }
   } else if (first[0] >= 'x' && first[0] <= 'z'
     && second[0] >= 'x' && second[0] <= 'z'
     && first[1] == 'h' && second[1] == 'l') {

    res = (2 - ('z' - first[0])) + 12;
   }
  } else {

   if (first[0] == 'r') {
    int snum = atoi(first+1);
    if (snum >= 0 && snum <= 30) {
     res = snum / 2;
    }
   } else if (first[0] >= 'x' && first[0] <= 'z') {
    res = (2 - ('z' - first[0])) + 12;
   }
  }
  free (op);
  return res;
}
