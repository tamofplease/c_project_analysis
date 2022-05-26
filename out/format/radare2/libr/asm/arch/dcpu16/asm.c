# 1 "project/radare2/libr/asm/arch/dcpu16/asm.c"
# 31 "project/radare2/libr/asm/arch/dcpu16/asm.c"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "dcpu16.h"

#define NOTEND 1

static ut8 get_register_id(char reg) {
 const char *regs = "ABCXYZIJ";
 const char *p = strchr (regs, reg);
 return p? (int)(size_t)(p-regs): 0;
}

static void clean_line(char* oline, const char* line) {
 int cn = 0, n = 0;

 while (line[cn] != 0 && line[cn] != '\n' && line[cn] != ';') {
  if (line[cn] >= '!' && line[cn] <= '~') {
   char current_char = line[cn];


   if (current_char >= 'a' && current_char <= 'z')
    current_char = toupper ((unsigned char)current_char);


   oline[n] = current_char;
   n++;
  }
  cn++;
 }
 oline[n] = 0;
}




static ut8 decode_parameter(char* param, int* extra_word_needed, ut16* extra_word_value) {

 int square_brackets = 0;
 int first_sqbracket = 0, last_sqbracket = 0;
 if (param[0] == '[') {
  first_sqbracket = 1;
  param++;
 }
 if (param[strlen(param) - 1] == ']') {
  last_sqbracket = 1;
  param[strlen(param) - 1] = 0;
 }


 if (first_sqbracket == 1) {
  square_brackets = 1;
  if (last_sqbracket != 1) {
   fprintf (stderr, "Missing last square bracket\n");
   return 0;
  }
 } else {
  if (last_sqbracket == 1) {
   fprintf (stderr, "Missing first square bracket\n");
   return 0;
  }
 }


 if (param[0] == '0' && param[1] == 'X') {

  ut16 value = 0;
  param = param + 2;
  int digit_count = strlen(param);
  int digit_num = 0;
  int reg = -1;
  for (digit_num = 0; digit_num < digit_count; digit_num++) {

   int digit_val = -1;
   char current_digit = param[digit_num];
   if (current_digit >= '0' && current_digit <= '9')
    digit_val = current_digit - '0';
   if (current_digit >= 'A' && current_digit <= 'F')
    digit_val = current_digit - 'A' + 10;

   if (current_digit == '+' && square_brackets == 1) {
    reg = get_register_id(param[digit_num + 1]);
    digit_num++;
   } else {

    if (digit_val == -1) {
     fprintf (stderr, "invalid literal\n");
     return 0;
    }


    value = (value << 4) + digit_val;
   }
  }

  if (value <= 0x1f && square_brackets == 0)
   return value + 0x20;

  *extra_word_needed = 1;
  *extra_word_value = value;

  if (square_brackets == 1) {
   if (reg != -1)
    return 0x10 + reg;
   return 0x1e;
  }
  return 0x1f;
 }


 if (param[0] >= '0' && param[0] <= '9') {

  ut16 value = 0;
  int digit_count = strlen(param);
  int digit_num = 0;
  int reg = -1;
  for (digit_num = 0; digit_num < digit_count; digit_num++) {

   int digit_val = -1;
   char current_digit = param[digit_num];
   if (current_digit >= '0' && current_digit <= '9')
    digit_val = current_digit - '0';

   if (current_digit == '+' && square_brackets == 1) {
    reg = get_register_id(param[digit_num + 1]);
    digit_num++;
   } else {

    if (digit_val == -1) {
     fprintf (stderr, "invalid literal\n");
     return 0;
    }


    value = (value * 10) + digit_val;
   }
  }
  if (value <= 0x1f && square_brackets == 0)
   return value + 0x20;

  *extra_word_needed = 1;
  *extra_word_value = value;

  if (square_brackets == 1) {
   if (reg != -1)
    return 0x10 + reg;
   return 0x1e;
  }
  return 0x1f;
 }


 if (param[1] == 0) {
  ut8 reg = get_register_id (param[0]);
  if (square_brackets == 1)
   reg += 0x08;
  return reg;
 }


 if (!strncmp ("POP", param, 3)) return 0x18;
 if (!strncmp ("PEEK", param, 4)) return 0x19;
 if (!strncmp ("PUSH", param, 4)) return 0x1a;
 if (!strncmp ("SP", param, 2)) return 0x1b;
 if (!strncmp ("PC", param, 2)) return 0x1c;
 if (!strncmp ("O", param, 1)) return 0x1d;


 *extra_word_needed = 1;


 *extra_word_value = 0;
 return 0x1f;
}

int dcpu16_assemble (ut8* out, const char* unoline) {
 ut16 wordA = 0, wordB = 0;
 int basic_opcode = 0;
 int non_basic_opcode = 0;
 char line[256] = {0}, *param;
 int off = 0;

 clean_line (line, unoline);

 if (!(*line)) return 0;
 if (strlen (line)<4) return 0;
 param = line + 3;



 if (!strncmp ("SET", line, 3)) basic_opcode = 0x1;
 else if (!strncmp ("ADD", line, 3)) basic_opcode = 0x2;
 else if (!strncmp ("SUB", line, 3)) basic_opcode = 0x3;
 else if (!strncmp ("MUL", line, 3)) basic_opcode = 0x4;
 else if (!strncmp ("DIV", line, 3)) basic_opcode = 0x5;
 else if (!strncmp ("MOD", line, 3)) basic_opcode = 0x6;
 else if (!strncmp ("SHL", line, 3)) basic_opcode = 0x7;
 else if (!strncmp ("SHR", line, 3)) basic_opcode = 0x8;
 else if (!strncmp ("AND", line, 3)) basic_opcode = 0x9;
 else if (!strncmp ("BOR", line, 3)) basic_opcode = 0xA;
 else if (!strncmp ("XOR", line, 3)) basic_opcode = 0xB;
 else if (!strncmp ("IFE", line, 3)) basic_opcode = 0xC;
 else if (!strncmp ("IFN", line, 3)) basic_opcode = 0xD;
 else if (!strncmp ("IFG", line, 3)) basic_opcode = 0xE;
 else if (!strncmp ("IFB", line, 3)) basic_opcode = 0xF;


 if (basic_opcode == 0) {
  if (!strncmp ("JSR", line, 3)) {
   non_basic_opcode = 0x1;
  } else {
   fprintf (stderr, "Unknown instruction\n");
   return -1;
  }
 }


 if (basic_opcode != 0) {
  ut8 paramA = 0, paramB = 0;


  int cn = 0;
  while (cn < 256
                        && param[cn] != ','
   && param[cn] != '\n'
   && param[cn] != 0)
   cn++;

  if (param[cn] == ',') {
   ut16 first_word;
   int extraA = 0;
   int extraB = 0;
   char *pa, *pb;

   param[cn] = 0;
   pa = param;
   pb = param + cn + 1;





   paramA = decode_parameter (pa, &extraA, &wordA);



   paramB = decode_parameter(pb, &extraB, &wordB);



   first_word = ((paramB & 0x3F) << 10) | ((paramA & 0x3F) << 4) | (basic_opcode & 0xF);


#if NOTEND
   memcpy (out, &first_word, 2);
   if (extraA == 1) {
    memcpy (out+2, &wordA, 2);
    off = 4;
   } else off = 2;
   if (extraB == 1) {
    memcpy (out+off, &wordB, 2);
    off += 2;
   }
#else
   out[0] = (first_word>>8) & 0xff;
   out[1] = first_word & 0xff;
   if (extraA == 1) {
    out[2] = (wordA>>8) & 0xff;
    out[3] = wordA & 0xff;
    off = 4;
   } else off = 2;
   if (extraB == 1) {
    out[off] = (wordB>>8) & 0xff;
    out[off+1] = wordB & 0xff;
    off += 2;
   }
#endif
  } else {
   fprintf (stderr, "Missing comma\n");
   return -1;
  }
 }


 if (non_basic_opcode == 0x1) {
  int extraX = 0;
  ut16 first_word, wordX = 0;
  ut8 p = decode_parameter (param, &extraX, &wordX);

  first_word = ((p & 0x3F) << 10) \
   | ((non_basic_opcode & 0x3F) << 4) \
   | (basic_opcode & 0xF);
#if NOTEND
  memcpy (out, &first_word, 2);
  if (extraX == 1) {
   memcpy (out+2, &wordX, 2);
   off = 4;
  } else off = 2;
#else
  out[0] = (first_word>>8) & 0xff;
  out[1] = first_word & 0xff;
  if (extraX == 1) {
   out[2] = (wordX>>8) & 0xff;
   out[3] = wordX & 0xff;
   off = 4;
  } else off = 2;
#endif
 }
 return off;
}
