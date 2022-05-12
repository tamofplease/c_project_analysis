# 0 "project/radare2/libr/asm/arch/arc/gnu/arc.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/libr/asm/arch/arc/gnu/arc.h"
# 62 "project/radare2/libr/asm/arch/arc/gnu/arc.h"
typedef unsigned int arc_insn;

struct arc_opcode {
  const char *syntax;
  unsigned long mask, value;
  int flags;
# 173 "project/radare2/libr/asm/arch/arc/gnu/arc.h"
  struct arc_opcode *next_asm;
  struct arc_opcode *next_dis;
# 186 "project/radare2/libr/asm/arch/arc/gnu/arc.h"
  unsigned long mask2,value2;
};

struct arc_operand_value {
  char *name;
  short value;
  unsigned char type;
  unsigned char flags;







};

struct arc_ext_operand_value {
  struct arc_ext_operand_value *next;
  struct arc_operand_value operand;
};



extern struct arc_ext_operand_value *arc_ext_operands;

struct arc_operand {

  unsigned char fmt;


  unsigned char bits;



  unsigned char shift;


  int flags;
# 364 "project/radare2/libr/asm/arch/arc/gnu/arc.h"
  arc_insn (*insert) (arc_insn insn, long *extend, const struct arc_operand *operand,
        int mods, const struct arc_operand_value *reg,
        long value, const char **errmsg);
# 392 "project/radare2/libr/asm/arch/arc/gnu/arc.h"
  long (*extract) (arc_insn *insn,
     const struct arc_operand *operand, int mods,
     const struct arc_operand_value **opval, int *invalid);
};
# 432 "project/radare2/libr/asm/arch/arc/gnu/arc.h"
extern const struct arc_operand *arc_operands;
extern int arc_operand_count;

extern const struct arc_operand_value *arc_suffixes;
extern int arc_suffixes_count;

extern const struct arc_operand_value *arc_reg_names;
extern int arc_reg_names_count;

extern unsigned char *arc_operand_map;



extern int arc_cond_p;

extern int arc_mach_a4;
extern unsigned long arc_ld_ext_mask;
extern int arc_user_mode_only;


int arc_get_opcode_mach (int, int);

void arc_opcode_init_tables (int);
void arc_opcode_init_insert (void);
void arc_opcode_init_extract (void);
const struct arc_opcode *arc_opcode_lookup_asm (const char *);
const struct arc_opcode *arc_opcode_lookup_dis (unsigned int);
int arc_opcode_limm_p (long *);
const struct arc_operand_value *arc_opcode_lookup_suffix (const struct arc_operand *type, int value);
int arc_opcode_supported (const struct arc_opcode *);
int arc_opval_supported (const struct arc_operand_value *);
int arc_insn_not_jl (arc_insn);

extern char *arc_aux_reg_name (int);
extern struct arc_operand_value *get_ext_suffix (char *,char);

extern int ac_branch_or_jump_insn (arc_insn, int);
extern int ac_lpcc_insn (arc_insn);
extern int ac_constant_operand (const struct arc_operand *);
extern int ac_register_operand (const struct arc_operand *);
extern int ac_symbol_operand (const struct arc_operand *);
extern int ARC700_register_simd_operand (char);
extern int arc_operand_type (int);
extern int ac_add_reg_sdasym_insn (arc_insn);
extern int ac_get_load_sdasym_insn_type (arc_insn, int);
extern int ac_get_store_sdasym_insn_type (arc_insn, int);
extern int arc_limm_fixup_adjust (arc_insn);
extern int arc_test_wb (void);
