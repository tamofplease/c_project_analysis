# 1 "project/radare2/libr/asm/arch/z80/z80asm.h"
# 22 "project/radare2/libr/asm/arch/z80/z80asm.h"
#ifndef Z80ASM_H
#define Z80ASM_H 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <ctype.h>
#include <stdarg.h>


#ifndef BUFLEN
#define BUFLEN 300
#endif

#ifndef MAX_INCLUDE
#define MAX_INCLUDE 200
#endif



enum mnemonic
{
  Z80_CALL, Z80_CPDR, Z80_CPIR, Z80_DJNZ, Z80_HALT, Z80_INDR,
  Z80_INIR, Z80_LDDR, Z80_LDIR, Z80_OTDR, Z80_OTIR, Z80_OUTD,
  Z80_OUTI, Z80_PUSH, Z80_RETI, Z80_RETN, Z80_RLCA, Z80_RRCA,
  Z80_DEFB, Z80_DEFW, Z80_DEFS, Z80_DEFM, Z80_ADC, Z80_ADD,
  Z80_AND, Z80_BIT, Z80_CCF, Z80_CPD, Z80_CPI, Z80_CPL, Z80_DAA,
  Z80_DEC, Z80_EQU, Z80_EXX, Z80_INC, Z80_IND, Z80_INI, Z80_LDD,
  Z80_LDI, Z80_NEG, Z80_NOP, Z80_OUT, Z80_POP, Z80_RES, Z80_RET,
  Z80_RLA, Z80_RLC, Z80_RLD, Z80_RRA, Z80_RRC, Z80_RRD, Z80_RST,
  Z80_SBC, Z80_SCF, Z80_SET, Z80_SLA, Z80_SLL, Z80_SLI, Z80_SRA,
  Z80_SRL, Z80_SUB, Z80_XOR, Z80_ORG, Z80_CP, Z80_DI, Z80_EI,
  Z80_EX, Z80_IM, Z80_IN, Z80_JP, Z80_JR, Z80_LD, Z80_OR, Z80_RL,
  Z80_RR, Z80_DB, Z80_DW, Z80_DS, Z80_DM, Z80_INCLUDE, Z80_INCBIN,
  Z80_IF, Z80_ELSE, Z80_ENDIF, Z80_END, Z80_MACRO, Z80_ENDM, Z80_SEEK
};


enum reftype
{
  TYPE_BSR,
  TYPE_DS,
  TYPE_RST,
  TYPE_ABSW,
  TYPE_ABSB,
  TYPE_RELB,
  TYPE_LABEL
};


enum filetype
{
  FILETYPE_ASM
};


struct label
{
  struct label *next, *prev;
  int value;
  int valid;
  int busy;
  struct reference *ref;
  char name[1];
};


struct infile
{
  const char *name;
  enum filetype type;
};


struct name
{
  struct name *next, *prev;
  char name[1];
};


struct includedir
{
  struct includedir *next;
  char name[1];
};


struct macro_arg
{
  struct macro_arg *next;
  unsigned pos;
  unsigned which;
};

struct macro_line
{
  struct macro_line *next;
  char *line;
  struct macro_arg *args;
};

struct macro
{
  struct macro *next;
  char *name;
  unsigned numargs;
  char **args;
  struct macro_line *lines;
};


struct stack
{
  const char *name;
  struct includedir *dir;
  FILE *file;
  int line;
  int shouldclose;
  struct label *labels;

  struct macro *macro;
  struct macro_line *macro_line;
  char **macro_args;
};


struct reference
{
  struct reference *next, *prev;
  enum reftype type;
  long oseekpos;
  long lseekpos;
  char delimiter;
  int addr, line;
  int baseaddr;
  int comma;
  int count;
  int infile;
  int done;
  int computed_value;
  int level;
  struct includedir *dir;
  char *file;
  char input[1];
};


static void printerr (int error, const char *fmt, ...);


static const char *delspc (const char *ptr);

static int rd_expr (const char **p, char delimiter, int *valid, int level,
      int print_errors);
static int rd_label (const char **p, int *exists, struct label **previous, int level,
       int print_errors);
static int rd_character (const char **p, int *valid, int print_errors);

static int compute_ref (struct reference *ref, int allow_invalid);

#endif
