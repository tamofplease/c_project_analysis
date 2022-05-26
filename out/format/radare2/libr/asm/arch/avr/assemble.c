# 1 "project/radare2/libr/asm/arch/avr/assemble.c"
#include "r_asm.h"
#include "format.h"
#include "assemble.h"

extern instructionInfo instructionSet[AVR_TOTAL_INSTRUCTIONS];





struct _specialregs {
 char reg[4];
 int operandType;
};
typedef struct _specialregs specialregs;

#define REGS_TABLE 9



static int getnum(const char *s) {
 if (!s || !*s) {
  return 0;
 }
 if (*s == '$') {
  s++;
 }
 return sdb_atoi (s);
}


specialregs RegsTable[REGS_TABLE] = {
 {"-x", OPERAND_XP}, {"x", OPERAND_X}, {"x+", OPERAND_XP},
 {"-y", OPERAND_YP}, {"y", OPERAND_Y}, {"y+", OPERAND_YP},
 {"-z", OPERAND_ZP}, {"z", OPERAND_Z}, {"z+", OPERAND_ZP},
};


int avr_encode(RAsm *a, RAsmOp *ao, const char *str) {
 char tokens[3][MAX_TOKEN_SIZE];
 char *token;
 uint32_t coded = 0;
 int len = 0;
 uint32_t op1 = 0, op2 = 0;
 unsigned int tokens_cnt = 0;
 int instr_idx = -1;



 token = strtok ((char *)str, TOKEN_DELIM);
 while (token != NULL && tokens_cnt < 3) {
  memset (tokens[tokens_cnt], 0, MAX_TOKEN_SIZE);
  strncpy (tokens[tokens_cnt], token, MAX_TOKEN_SIZE-1);
  token = strtok (NULL, TOKEN_DELIM);
  tokens_cnt += 1;
 }

 if (tokens_cnt > 0) {

  instr_idx = search_instruction (a, tokens, tokens_cnt - 1);

  if (instr_idx >= 0) {

   if (instructionSet[instr_idx].numOperands == 0 && tokens_cnt == 1) {
    coded = instructionSet[instr_idx].opcodeMask;
    len = 2;







   } else if (instructionSet[instr_idx].numOperands == 1 && tokens_cnt == 2) {

    if (assemble_operand (a, tokens[1], instructionSet[instr_idx].operandTypes[0], &op1) >= 0) {

     if (instructionSet[instr_idx].operandTypes[0] == OPERAND_LONG_ABSOLUTE_ADDRESS) {
      op1 = op1/2;
      coded = instructionSet[instr_idx].opcodeMask
      | packDataByMask((op1 >> 16), instructionSet[instr_idx].operandMasks[0]);

      coded |= ((uint16_t)op1) << 16;
      len = 4;
     } else {


      if (instructionSet[instr_idx].operandTypes[1] == OPERAND_REGISTER_GHOST) {
       coded = instructionSet[instr_idx].opcodeMask
       | packDataByMask(op1, instructionSet[instr_idx].operandMasks[0])
       | packDataByMask(op1, instructionSet[instr_idx].operandMasks[1]);
      } else {
       coded = instructionSet[instr_idx].opcodeMask
       | packDataByMask(op1, instructionSet[instr_idx].operandMasks[0]);
      }

      len = 2;
     }
    }

   } else if (instructionSet[instr_idx].numOperands == 2 && tokens_cnt == 3) {
    if (assemble_operand(a, tokens[1], instructionSet[instr_idx].operandTypes[0], &op1) >= 0 &&
       assemble_operand(a, tokens[2], instructionSet[instr_idx].operandTypes[1], &op2) >= 0) {

     coded = instructionSet[instr_idx].opcodeMask
      | packDataByMask(op1, instructionSet[instr_idx].operandMasks[0])
      | packDataByMask(op2, instructionSet[instr_idx].operandMasks[1]);

     len = 2;


     if (instructionSet[instr_idx].operandTypes[0] == OPERAND_LONG_ABSOLUTE_ADDRESS) {
      coded |= ((uint16_t)op1) << 16;
      len = 4;
     } else if (instructionSet[instr_idx].operandTypes[1] == OPERAND_LONG_ABSOLUTE_ADDRESS) {
      coded |= ((uint16_t)op2) << 16;
      len = 4;
     }
    }
   }
  }
 }


 if (len > 0) {
  r_strbuf_setbin (&ao->buf, (const ut8*)&coded, len);
 }
 return len;
}

static int assemble_general_io_operand(const char *operand, uint32_t *res) {
# 150 "project/radare2/libr/asm/arch/avr/assemble.c"
 int ret = -1;
 if (!strcmp (operand, "spl") || !strcmp (operand, "0x3d")) {
  *res = 0x3d;
  ret = 0;
 } else if (!strcmp (operand, "sph") || !strcmp (operand, "0x3e")) {
  *res = 0x3e;
  ret = 0;
 } else if (!strcmp (operand, "sreg") || !strcmp (operand, "0x3f")) {
  *res = 0x3f;
  ret = 0;
 }




 return ret;
}


int assemble_operand(RAsm *a, const char *operand, int type, uint32_t *res) {
 int ret = -1;
 int temp;

 switch (type) {
 case OPERAND_REGISTER_EVEN_PAIR:
  *res = parse_registerpair(operand);
  if (*res > 0) {
   ret = 0;
  }
  break;
 case OPERAND_REGISTER_EVEN_PAIR_STARTR24:
  *res = parse_registerpair(operand);

  if (*res >= 12) {
   *res -= 12;
   ret = 0;
  }
  break;
 case OPERAND_BRANCH_ADDRESS:
 case OPERAND_RELATIVE_ADDRESS:
  temp = getnum (operand);




  if (a->pc || (operand[0] != '+' && operand[0] != '-')) {


   temp -= a->pc + 2;
  }
  temp /= 2;
  if (temp >= -64 && temp <= 63) {
   ret = 0;
  }
  *res = temp;
  break;
 case OPERAND_IO_REGISTER:
  assemble_general_io_operand (operand, res);
  ret = 0;
  break;
 case OPERAND_BIT:
 case OPERAND_DES_ROUND:
 case OPERAND_LONG_ABSOLUTE_ADDRESS:
 case OPERAND_DATA:
  *res = getnum (operand);
  ret = 0;
  break;
 case OPERAND_COMPLEMENTED_DATA:
  *res = getnum (operand);
  *res = ~(*res) & 0xFF;
  ret = 0;
  break;
 case OPERAND_MX:
 case OPERAND_X:
 case OPERAND_XP:
 case OPERAND_MY:
 case OPERAND_Y:
 case OPERAND_YP:
 case OPERAND_MZ:
 case OPERAND_Z:
 case OPERAND_ZP:
  *res = 0;
  ret = 0;
  break;
 case OPERAND_YPQ:
 case OPERAND_ZPQ:
  if (strlen(operand) > 2) {


   *res = getnum (operand + 2);
   ret = 0;
  }
  break;
 case OPERAND_REGISTER:
  if (strlen(operand) > 1) {

   *res = getnum (operand + 1);
   if (*res <= 32) {
    ret = 0;
   }
  }
  break;
 case OPERAND_REGISTER_STARTR16:
  if (strlen(operand) > 1) {

   *res = getnum (operand + 1);
   if (*res >= 16 && *res <= 32) {
    *res -= 16;
    ret = 0;
   }
  }
  break;
 default:
  ret = -1;
 }

 return ret;
}


uint16_t packDataByMask(uint16_t data, uint16_t mask) {
 int i, j;
 uint16_t result = 0;



 for (i = 0, j = 0; i < 16; i++) {

  if (mask & (1 << i)) {


   if ((data & (1 << j)) != 0) {
    result |= (1 << i);
   }

   j++;
  }
 }
 return result;
}




int search_instruction(RAsm *a, char instr[3][MAX_TOKEN_SIZE], int args) {
 int i, op1 = 0, op2 = 0;

 for (i = 0; i < AVR_TOTAL_INSTRUCTIONS - 1; i++) {

  if (!strncmp (instr[0], instructionSet[i].mnemonic, MAX_TOKEN_SIZE)) {

   if (instructionSet[i].numOperands == args) {


    if (args != 2) {
     return i;
    }

    if (instructionSet[i].opcodeMask >= 0x9004 &&
     instructionSet[i].opcodeMask <= 0x9007) {
     if (instructionSet[i].operandTypes[1] == parse_specialreg (instr[2])) {
      return i;
     }

    } else if (instructionSet[i].mnemonic[0] == 'l'
     && instructionSet[i].mnemonic[1] == 'd'
     && (instructionSet[i].mnemonic[2] == 'd' || instructionSet[i].mnemonic[2] == '\0')) {
     if (instructionSet[i].operandTypes[1] == parse_specialreg (instr[2])) {
      return i;
     }

    } else if (instructionSet[i].mnemonic[0] == 'l'
     && instructionSet[i].mnemonic[1] == 'd'
     && instructionSet[i].mnemonic[2] == 's'
     && instructionSet[i].operandTypes[1] == OPERAND_LONG_ABSOLUTE_ADDRESS) {

     if (strlen(instr[2]) > 0) {
      op2 = getnum (instr[2]);
      if (op2 > 127) {
       return i;
      }
     }

    } else if (instructionSet[i].mnemonic[0] == 's'
     && instructionSet[i].mnemonic[1] == 't'
     && (instructionSet[i].mnemonic[2] == 'd' || instructionSet[i].mnemonic[2] == '\0')) {

     if (instructionSet[i].operandTypes[0] == parse_specialreg (instr[1])) {
      return i;
     }

    } else if (instructionSet[i].mnemonic[0] == 's'
     && instructionSet[i].mnemonic[1] == 't'
     && instructionSet[i].mnemonic[2] == 's'
     && instructionSet[i].operandTypes[0] == OPERAND_LONG_ABSOLUTE_ADDRESS) {

     if (strlen(instr[1]) > 0) {
      op1 = getnum (instr[1]);
      if (op1 > 127) {
       return i;
      }
     }
    } else {
     return i;
    }
   }
  }
 }
 return -1;
}

int parse_specialreg(const char *reg) {
 const int len = strlen (reg);
 int i, found = -1;

 if (len > 0) {
  for (i = 0; i < REGS_TABLE; i++) {
   if (!strncmp (RegsTable[i].reg, reg, 4)) {
    found = RegsTable[i].operandType;
    break;
   }
  }


  if (found == -1 && reg[1] == '+') {
   if (reg[0] == 'y' && len > 2) {
    found = OPERAND_YPQ;
   } else if (reg[0] == 'z' && len > 2) {
    found = OPERAND_ZPQ;
   }
  }
  if (found == -1 && reg[2] == '+') {
   if (reg[0] == 'y' && len > 2) {
    found = OPERAND_YPQ;
   } else if (reg[0] == 'z' && len > 2) {
    found = OPERAND_ZPQ;
   }
  }
 }
 return found;
}
