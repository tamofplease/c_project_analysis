# 0 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
# 24 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/opcode/cris.h" 1 3 4
# 39 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/opcode/cris.h" 3 4

# 39 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/opcode/cris.h" 3 4
enum cris_insn_version_usage
{

  cris_ver_version_all=0,


  cris_ver_warning,


  cris_ver_v0_3,


  cris_ver_v3p,


  cris_ver_v8,


  cris_ver_v8p,


  cris_ver_sim_v0_10,


  cris_ver_v0_10,


  cris_ver_v3_10,


  cris_ver_v8_10,


  cris_ver_v10,


  cris_ver_v10p,




  cris_ver_v32p
};



struct cris_spec_reg
{
  const char *const name;
  unsigned int number;


  unsigned int reg_size;



  enum cris_insn_version_usage applicable_version;



  const char *const warning;
};
extern const struct cris_spec_reg cris_spec_regs[];



struct cris_support_reg
{
  const char *const name;
  unsigned int number;
};
extern const struct cris_support_reg cris_support_regs[];

struct cris_cond15
{

  const char *const name;


  enum cris_insn_version_usage applicable_version;
};
extern const struct cris_cond15 cris_conds15[];
# 171 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/opcode/cris.h" 3 4
extern const char *const cris_cc_strings[];
# 231 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/opcode/cris.h" 3 4
enum cris_imm_oprnd_size_type
{

  SIZE_NONE,


  SIZE_FIX_32,


  SIZE_SPEC_REG,


  SIZE_FIELD_SIGNED,


  SIZE_FIELD_UNSIGNED,


  SIZE_FIELD
};



enum cris_op_type
{
  cris_not_implemented_op = 0,
  cris_abs_op,
  cris_addi_op,
  cris_asr_op,
  cris_asrq_op,
  cris_ax_ei_setf_op,
  cris_bdap_prefix,
  cris_biap_prefix,
  cris_break_op,
  cris_btst_nop_op,
  cris_clearf_di_op,
  cris_dip_prefix,
  cris_dstep_logshift_mstep_neg_not_op,
  cris_eight_bit_offset_branch_op,
  cris_move_mem_to_reg_movem_op,
  cris_move_reg_to_mem_movem_op,
  cris_move_to_preg_op,
  cris_muls_op,
  cris_mulu_op,
  cris_none_reg_mode_add_sub_cmp_and_or_move_op,
  cris_none_reg_mode_clear_test_op,
  cris_none_reg_mode_jump_op,
  cris_none_reg_mode_move_from_preg_op,
  cris_quick_mode_add_sub_op,
  cris_quick_mode_and_cmp_move_or_op,
  cris_quick_mode_bdap_prefix,
  cris_reg_mode_add_sub_cmp_and_or_move_op,
  cris_reg_mode_clear_op,
  cris_reg_mode_jump_op,
  cris_reg_mode_move_from_preg_op,
  cris_reg_mode_test_op,
  cris_scc_op,
  cris_sixteen_bit_offset_branch_op,
  cris_three_operand_add_sub_cmp_and_or_op,
  cris_three_operand_bound_op,
  cris_two_operand_bound_op,
  cris_xor_op
};

struct cris_opcode
{

  const char *name;


  unsigned int match;


  unsigned int lose;


  const char *args;


  char delayed;


  enum cris_imm_oprnd_size_type imm_oprnd_size;


  enum cris_insn_version_usage applicable_version;


  enum cris_op_type op;
};
extern const struct cris_opcode cris_opcodes[];
# 25 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 2







# 31 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
const struct cris_spec_reg
cris_spec_regs[] =
{
  {"bz", 0, 1, cris_ver_v32p, (0)},
  {"p0", 0, 1, 0, (0)},
  {"vr", 1, 1, 0, (0)},
  {"p1", 1, 1, 0, (0)},
  {"pid", 2, 1, cris_ver_v32p, (0)},
  {"p2", 2, 1, cris_ver_v32p, (0)},
  {"p2", 2, 1, cris_ver_warning, (0)},
  {"srs", 3, 1, cris_ver_v32p, (0)},
  {"p3", 3, 1, cris_ver_v32p, (0)},
  {"p3", 3, 1, cris_ver_warning, (0)},
  {"wz", 4, 2, cris_ver_v32p, (0)},
  {"p4", 4, 2, 0, (0)},
  {"ccr", 5, 2, cris_ver_v0_10, (0)},
  {"exs", 5, 4, cris_ver_v32p, (0)},
  {"p5", 5, 2, cris_ver_v0_10, (0)},
  {"p5", 5, 4, cris_ver_v32p, (0)},
  {"dcr0",6, 2, cris_ver_v0_3, (0)},
  {"eda", 6, 4, cris_ver_v32p, (0)},
  {"p6", 6, 2, cris_ver_v0_3, (0)},
  {"p6", 6, 4, cris_ver_v32p, (0)},
  {"dcr1/mof", 7, 4, cris_ver_v10p,
   "Register `dcr1/mof' with ambiguous size specified.  Guessing 4 bytes"},
  {"dcr1/mof", 7, 2, cris_ver_v0_3,
   "Register `dcr1/mof' with ambiguous size specified.  Guessing 2 bytes"},
  {"mof", 7, 4, cris_ver_v10p, (0)},
  {"dcr1",7, 2, cris_ver_v0_3, (0)},
  {"p7", 7, 4, cris_ver_v10p, (0)},
  {"p7", 7, 2, cris_ver_v0_3, (0)},
  {"dz", 8, 4, cris_ver_v32p, (0)},
  {"p8", 8, 4, 0, (0)},
  {"ibr", 9, 4, cris_ver_v0_10, (0)},
  {"ebp", 9, 4, cris_ver_v32p, (0)},
  {"p9", 9, 4, 0, (0)},
  {"irp", 10, 4, cris_ver_v0_10, (0)},
  {"erp", 10, 4, cris_ver_v32p, (0)},
  {"p10", 10, 4, 0, (0)},
  {"srp", 11, 4, 0, (0)},
  {"p11", 11, 4, 0, (0)},

  {"bar/dtp0", 12, 4, cris_ver_warning,
   "Ambiguous register `bar/dtp0' specified"},
  {"nrp", 12, 4, cris_ver_v32p, (0)},
  {"bar", 12, 4, cris_ver_v8_10, (0)},
  {"dtp0",12, 4, cris_ver_v0_3, (0)},
  {"p12", 12, 4, 0, (0)},

  {"dccr/dtp1",13, 4, cris_ver_warning,
   "Ambiguous register `dccr/dtp1' specified"},
  {"ccs", 13, 4, cris_ver_v32p, (0)},
  {"dccr",13, 4, cris_ver_v8_10, (0)},
  {"dtp1",13, 4, cris_ver_v0_3, (0)},
  {"p13", 13, 4, 0, (0)},
  {"brp", 14, 4, cris_ver_v3_10, (0)},
  {"usp", 14, 4, cris_ver_v32p, (0)},
  {"p14", 14, 4, cris_ver_v3p, (0)},
  {"usp", 15, 4, cris_ver_v10, (0)},
  {"spc", 15, 4, cris_ver_v32p, (0)},
  {"p15", 15, 4, cris_ver_v10p, (0)},
  {(0), 0, 0, cris_ver_version_all, (0)}
};




const struct cris_support_reg cris_support_regs[] =
{
  {"s0", 0},
  {"s1", 1},
  {"s2", 2},
  {"s3", 3},
  {"s4", 4},
  {"s5", 5},
  {"s6", 6},
  {"s7", 7},
  {"s8", 8},
  {"s9", 9},
  {"s10", 10},
  {"s11", 11},
  {"s12", 12},
  {"s13", 13},
  {"s14", 14},
  {"s15", 15},
  {(0), 0}
};
# 194 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
const struct cris_opcode
cris_opcodes[] =
{
  {"abs", 0x06B0, 0x0940, "r,R", 0, SIZE_NONE, 0,
   cris_abs_op},

  {"add", 0x0600, 0x09c0, "m r,R", 0, SIZE_NONE, 0,
   cris_reg_mode_add_sub_cmp_and_or_move_op},

  {"add", 0x0A00, 0x01c0, "m s,R", 0, SIZE_FIELD, 0,
   cris_none_reg_mode_add_sub_cmp_and_or_move_op},

  {"add", 0x0A00, 0x01c0, "m S,D", 0, SIZE_NONE,
   cris_ver_v0_10,
   cris_none_reg_mode_add_sub_cmp_and_or_move_op},

  {"add", 0x0a00, 0x05c0, "m S,R,r", 0, SIZE_NONE,
   cris_ver_v0_10,
   cris_three_operand_add_sub_cmp_and_or_op},

  {"add", 0x0A00, 0x01c0, "m s,R", 0, SIZE_FIELD,
   cris_ver_v32p,
   cris_none_reg_mode_add_sub_cmp_and_or_move_op},

  {"addc", 0x0570, 0x0A80, "r,R", 0, SIZE_FIX_32,
   cris_ver_v32p,
   cris_not_implemented_op},

  {"addc", 0x09A0, 0x0250, "s,R", 0, SIZE_FIX_32,
   cris_ver_v32p,
   cris_not_implemented_op},

  {"addi", 0x0540, 0x0A80, "x,r,A", 0, SIZE_NONE,
   cris_ver_v32p,
   cris_addi_op},

  {"addi", 0x0500, 0x0Ac0, "x,r", 0, SIZE_NONE, 0,
   cris_addi_op},



  {"addoq", 0x0100, 0x0E00, "Q,A", 0, SIZE_NONE,
   cris_ver_v32p,
   cris_not_implemented_op},

  {"addo", 0x0940, 0x0280, "m s,R,A", 0, SIZE_FIELD_SIGNED,
   cris_ver_v32p,
   cris_not_implemented_op},




  {"addo", 0x0100, 0x0E00, "O,A", 0, SIZE_NONE,
   cris_ver_v32p,
   cris_not_implemented_op},

  {"addq", 0x0200, 0x0Dc0, "I,R", 0, SIZE_NONE, 0,
   cris_quick_mode_add_sub_op},

  {"adds", 0x0420, 0x0Bc0, "z r,R", 0, SIZE_NONE, 0,
   cris_reg_mode_add_sub_cmp_and_or_move_op},


  {"adds", 0x0820, 0x03c0, "z s,R", 0, SIZE_FIELD, 0,
   cris_none_reg_mode_add_sub_cmp_and_or_move_op},

  {"adds", 0x0820, 0x03c0, "z S,D", 0, SIZE_NONE,
   cris_ver_v0_10,
   cris_none_reg_mode_add_sub_cmp_and_or_move_op},

  {"adds", 0x0820, 0x07c0, "z S,R,r", 0, SIZE_NONE,
   cris_ver_v0_10,
   cris_three_operand_add_sub_cmp_and_or_op},

  {"addu", 0x0400, 0x0be0, "z r,R", 0, SIZE_NONE, 0,
   cris_reg_mode_add_sub_cmp_and_or_move_op},


  {"addu", 0x0800, 0x03e0, "z s,R", 0, SIZE_FIELD, 0,
   cris_none_reg_mode_add_sub_cmp_and_or_move_op},

  {"addu", 0x0800, 0x03e0, "z S,D", 0, SIZE_NONE,
   cris_ver_v0_10,
   cris_none_reg_mode_add_sub_cmp_and_or_move_op},

  {"addu", 0x0800, 0x07e0, "z S,R,r", 0, SIZE_NONE,
   cris_ver_v0_10,
   cris_three_operand_add_sub_cmp_and_or_op},

  {"and", 0x0700, 0x08C0, "m r,R", 0, SIZE_NONE, 0,
   cris_reg_mode_add_sub_cmp_and_or_move_op},

  {"and", 0x0B00, 0x00C0, "m s,R", 0, SIZE_FIELD, 0,
   cris_none_reg_mode_add_sub_cmp_and_or_move_op},

  {"and", 0x0B00, 0x00C0, "m S,D", 0, SIZE_NONE,
   cris_ver_v0_10,
   cris_none_reg_mode_add_sub_cmp_and_or_move_op},

  {"and", 0x0B00, 0x04C0, "m S,R,r", 0, SIZE_NONE,
   cris_ver_v0_10,
   cris_three_operand_add_sub_cmp_and_or_op},

  {"andq", 0x0300, 0x0CC0, "i,R", 0, SIZE_NONE, 0,
   cris_quick_mode_and_cmp_move_or_op},

  {"asr", 0x0780, 0x0840, "m r,R", 0, SIZE_NONE, 0,
   cris_asr_op},

  {"asrq", 0x03a0, 0x0c40, "c,R", 0, SIZE_NONE, 0,
   cris_asrq_op},

  {"ax", 0x15B0, 0xEA4F, "", 0, SIZE_NONE, 0,
   cris_ax_ei_setf_op},


  {"b", 0x0dff, 0x0200, "b", 1, SIZE_NONE, 0,
   cris_sixteen_bit_offset_branch_op},

  {"ba",
   
# 314 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
  (((0) + 0xE * 0x10) * 0x100 + (0))
# 314 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                 ,
   0x0F00+(0xF-
# 315 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
              0xE
# 315 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                  )*0x1000, "o", 1, SIZE_NONE, 0,
   cris_eight_bit_offset_branch_op},



  {"ba", 
# 320 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
            (0x0EBF)
# 320 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                           ,
   0xffff & (~
# 321 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
             (0x0EBF)
# 321 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                            ), "n", 0, SIZE_FIX_32,
   cris_ver_v32p,
   cris_none_reg_mode_jump_op},

  {"bas", 0x0EBF, 0x0140, "n,P", 0, SIZE_FIX_32,
   cris_ver_v32p,
   cris_none_reg_mode_jump_op},

  {"basc", 0x0EFF, 0x0100, "n,P", 0, SIZE_FIX_32,
   cris_ver_v32p,
   cris_none_reg_mode_jump_op},

  {"bcc",
   
# 334 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
  ((0) * 0x0100 + (0))
# 334 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                     +
# 334 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
                      0x0
# 334 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                           *0x1000,
   0x0f00+(0xF-
# 335 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
              0x0
# 335 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                   )*0x1000, "o", 1, SIZE_NONE, 0,
   cris_eight_bit_offset_branch_op},

  {"bcs",
   
# 339 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
  ((0) * 0x0100 + (0))
# 339 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                     +
# 339 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
                      0x1
# 339 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                           *0x1000,
   0x0f00+(0xF-
# 340 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
              0x1
# 340 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                   )*0x1000, "o", 1, SIZE_NONE, 0,
   cris_eight_bit_offset_branch_op},

  {"bdap",
   
# 344 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
  ((0x09) * 0x0100 + (0x40))
# 344 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                   , 
# 344 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
                     ((0x02) * 0x100 + (0x80))
# 344 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                                      , "pm s,R", 0, SIZE_FIELD_SIGNED,
   cris_ver_v0_10,
   cris_bdap_prefix},

  {"bdap",
   
# 349 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
  (0x0100)
# 349 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                   , 
# 349 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
                     (0x0e00)
# 349 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                                      , "pO", 0, SIZE_NONE,
   cris_ver_v0_10,
   cris_quick_mode_bdap_prefix},

  {"beq",
   
# 354 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
  ((0) * 0x0100 + (0))
# 354 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                     +
# 354 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
                      0x3
# 354 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                           *0x1000,
   0x0f00+(0xF-
# 355 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
              0x3
# 355 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                   )*0x1000, "o", 1, SIZE_NONE, 0,
   cris_eight_bit_offset_branch_op},




  {"bwf",
   
# 362 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
  ((0) * 0x0100 + (0))
# 362 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                     +
# 362 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
                      0xF
# 362 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                            *0x1000,
   0x0f00+(0xF-
# 363 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
              0xF
# 363 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                    )*0x1000, "o", 1, SIZE_NONE,
   cris_ver_v10,
   cris_eight_bit_offset_branch_op},

  {"bext",
   
# 368 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
  ((0) * 0x0100 + (0))
# 368 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                     +
# 368 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
                      0xF
# 368 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                            *0x1000,
   0x0f00+(0xF-
# 369 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
              0xF
# 369 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                    )*0x1000, "o", 1, SIZE_NONE,
   cris_ver_v0_3,
   cris_eight_bit_offset_branch_op},

  {"bge",
   
# 374 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
  ((0) * 0x0100 + (0))
# 374 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                     +
# 374 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
                      0xA
# 374 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                           *0x1000,
   0x0f00+(0xF-
# 375 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
              0xA
# 375 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                   )*0x1000, "o", 1, SIZE_NONE, 0,
   cris_eight_bit_offset_branch_op},

  {"bgt",
   
# 379 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
  ((0) * 0x0100 + (0))
# 379 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                     +
# 379 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
                      0xC
# 379 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                           *0x1000,
   0x0f00+(0xF-
# 380 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
              0xC
# 380 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                   )*0x1000, "o", 1, SIZE_NONE, 0,
   cris_eight_bit_offset_branch_op},

  {"bhi",
   
# 384 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
  ((0) * 0x0100 + (0))
# 384 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                     +
# 384 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
                      0x9
# 384 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                           *0x1000,
   0x0f00+(0xF-
# 385 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
              0x9
# 385 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                   )*0x1000, "o", 1, SIZE_NONE, 0,
   cris_eight_bit_offset_branch_op},

  {"bhs",
   
# 389 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
  ((0) * 0x0100 + (0))
# 389 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                     +
# 389 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
                      0x0
# 389 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                           *0x1000,
   0x0f00+(0xF-
# 390 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
              0x0
# 390 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                   )*0x1000, "o", 1, SIZE_NONE, 0,
   cris_eight_bit_offset_branch_op},

  {"biap", 
# 393 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
          (0x0540)
# 393 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                     , 
# 393 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
                       (0x0a80)
# 393 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                                  , "pm r,R", 0, SIZE_NONE,
   cris_ver_v0_10,
   cris_biap_prefix},

  {"ble",
   
# 398 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
  ((0) * 0x0100 + (0))
# 398 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                     +
# 398 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
                      0xD
# 398 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                           *0x1000,
   0x0f00+(0xF-
# 399 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
              0xD
# 399 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                   )*0x1000, "o", 1, SIZE_NONE, 0,
   cris_eight_bit_offset_branch_op},

  {"blo",
   
# 403 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
  ((0) * 0x0100 + (0))
# 403 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                     +
# 403 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
                      0x1
# 403 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                           *0x1000,
   0x0f00+(0xF-
# 404 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
              0x1
# 404 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                   )*0x1000, "o", 1, SIZE_NONE, 0,
   cris_eight_bit_offset_branch_op},

  {"bls",
   
# 408 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
  ((0) * 0x0100 + (0))
# 408 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                     +
# 408 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
                      0x8
# 408 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                           *0x1000,
   0x0f00+(0xF-
# 409 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
              0x8
# 409 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                   )*0x1000, "o", 1, SIZE_NONE, 0,
   cris_eight_bit_offset_branch_op},

  {"blt",
   
# 413 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
  ((0) * 0x0100 + (0))
# 413 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                     +
# 413 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
                      0xB
# 413 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                           *0x1000,
   0x0f00+(0xF-
# 414 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
              0xB
# 414 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                   )*0x1000, "o", 1, SIZE_NONE, 0,
   cris_eight_bit_offset_branch_op},

  {"bmi",
   
# 418 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
  ((0) * 0x0100 + (0))
# 418 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                     +
# 418 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
                      0x7
# 418 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                           *0x1000,
   0x0f00+(0xF-
# 419 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
              0x7
# 419 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                   )*0x1000, "o", 1, SIZE_NONE, 0,
   cris_eight_bit_offset_branch_op},

  {"bmod", 0x0ab0, 0x0140, "s,R", 0, SIZE_FIX_32,
   cris_ver_sim_v0_10,
   cris_not_implemented_op},

  {"bmod", 0x0ab0, 0x0140, "S,D", 0, SIZE_NONE,
   cris_ver_sim_v0_10,
   cris_not_implemented_op},

  {"bmod", 0x0ab0, 0x0540, "S,R,r", 0, SIZE_NONE,
   cris_ver_sim_v0_10,
   cris_not_implemented_op},

  {"bne",
   
# 435 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
  ((0) * 0x0100 + (0))
# 435 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                     +
# 435 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
                      0x2
# 435 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                           *0x1000,
   0x0f00+(0xF-
# 436 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
              0x2
# 436 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                   )*0x1000, "o", 1, SIZE_NONE, 0,
   cris_eight_bit_offset_branch_op},

  {"bound", 0x05c0, 0x0A00, "m r,R", 0, SIZE_NONE, 0,
   cris_two_operand_bound_op},

  {"bound", 0x09c0, 0x0200, "m s,R", 0, SIZE_FIELD,
   cris_ver_v0_10,
   cris_two_operand_bound_op},

  {"bound", 0x0dcf, 0x0200, "m Y,R", 0, SIZE_FIELD, 0,
   cris_two_operand_bound_op},
  {"bound", 0x09c0, 0x0200, "m S,D", 0, SIZE_NONE,
   cris_ver_v0_10,
   cris_two_operand_bound_op},
  {"bound", 0x09c0, 0x0600, "m S,R,r", 0, SIZE_NONE,
   cris_ver_v0_10,
   cris_three_operand_bound_op},

  {"bpl",
   
# 456 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
  ((0) * 0x0100 + (0))
# 456 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                     +
# 456 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
                      0x6
# 456 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                           *0x1000,
   0x0f00+(0xF-
# 457 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
              0x6
# 457 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                   )*0x1000, "o", 1, SIZE_NONE, 0,
   cris_eight_bit_offset_branch_op},

  {"break", 0xe930, 0x16c0, "C", 0, SIZE_NONE,
   cris_ver_v3p,
   cris_break_op},

  {"bsb",
   
# 465 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
  ((0) * 0x0100 + (0))
# 465 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                     +
# 465 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
                      0xF
# 465 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                            *0x1000,
   0x0f00+(0xF-
# 466 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
              0xF
# 466 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                    )*0x1000, "o", 1, SIZE_NONE,
   cris_ver_v32p,
   cris_eight_bit_offset_branch_op},

  {"bsr", 0xBEBF, 0x4140, "n", 0, SIZE_FIX_32,
   cris_ver_v32p,
   cris_none_reg_mode_jump_op},

  {"bsrc", 0xBEFF, 0x4100, "n", 0, SIZE_FIX_32,
   cris_ver_v32p,
   cris_none_reg_mode_jump_op},

  {"bstore", 0x0af0, 0x0100, "s,R", 0, SIZE_FIX_32,
   cris_ver_warning,
   cris_not_implemented_op},

  {"bstore", 0x0af0, 0x0100, "S,D", 0, SIZE_NONE,
   cris_ver_warning,
   cris_not_implemented_op},

  {"bstore", 0x0af0, 0x0500, "S,R,r", 0, SIZE_NONE,
   cris_ver_warning,
   cris_not_implemented_op},

  {"btst", 0x04F0, 0x0B00, "r,R", 0, SIZE_NONE, 0,
   cris_btst_nop_op},
  {"btstq", 0x0380, 0x0C60, "c,R", 0, SIZE_NONE, 0,
   cris_btst_nop_op},

  {"bvc",
   
# 496 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
  ((0) * 0x0100 + (0))
# 496 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                     +
# 496 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
                      0x4
# 496 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                           *0x1000,
   0x0f00+(0xF-
# 497 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
              0x4
# 497 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                   )*0x1000, "o", 1, SIZE_NONE, 0,
   cris_eight_bit_offset_branch_op},

  {"bvs",
   
# 501 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
  ((0) * 0x0100 + (0))
# 501 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                     +
# 501 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
                      0x5
# 501 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                           *0x1000,
   0x0f00+(0xF-
# 502 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
              0x5
# 502 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                   )*0x1000, "o", 1, SIZE_NONE, 0,
   cris_eight_bit_offset_branch_op},

  {"clear", 0x0670, 0x3980, "M r", 0, SIZE_NONE, 0,
   cris_reg_mode_clear_op},

  {"clear", 0x0A70, 0x3180, "M y", 0, SIZE_NONE, 0,
   cris_none_reg_mode_clear_test_op},

  {"clear", 0x0A70, 0x3180, "M S", 0, SIZE_NONE,
   cris_ver_v0_10,
   cris_none_reg_mode_clear_test_op},

  {"clearf", 0x05F0, 0x0A00, "f", 0, SIZE_NONE, 0,
   cris_clearf_di_op},

  {"cmp", 0x06C0, 0x0900, "m r,R", 0, SIZE_NONE, 0,
   cris_reg_mode_add_sub_cmp_and_or_move_op},

  {"cmp", 0x0Ac0, 0x0100, "m s,R", 0, SIZE_FIELD, 0,
   cris_none_reg_mode_add_sub_cmp_and_or_move_op},

  {"cmp", 0x0Ac0, 0x0100, "m S,D", 0, SIZE_NONE,
   cris_ver_v0_10,
   cris_none_reg_mode_add_sub_cmp_and_or_move_op},

  {"cmpq", 0x02C0, 0x0D00, "i,R", 0, SIZE_NONE, 0,
   cris_quick_mode_and_cmp_move_or_op},


  {"cmps", 0x08e0, 0x0300, "z s,R", 0, SIZE_FIELD, 0,
   cris_none_reg_mode_add_sub_cmp_and_or_move_op},

  {"cmps", 0x08e0, 0x0300, "z S,D", 0, SIZE_NONE,
   cris_ver_v0_10,
   cris_none_reg_mode_add_sub_cmp_and_or_move_op},


  {"cmpu", 0x08c0, 0x0320, "z s,R" , 0, SIZE_FIELD, 0,
   cris_none_reg_mode_add_sub_cmp_and_or_move_op},

  {"cmpu", 0x08c0, 0x0320, "z S,D", 0, SIZE_NONE,
   cris_ver_v0_10,
   cris_none_reg_mode_add_sub_cmp_and_or_move_op},

  {"di", 0x25F0, 0xDA0F, "", 0, SIZE_NONE, 0,
   cris_clearf_di_op},

  {"dip", 
# 550 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
             (0x0970)
# 550 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                       , 
# 550 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
                         (0xf280)
# 550 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                                   , "ps", 0, SIZE_FIX_32,
   cris_ver_v0_10,
   cris_dip_prefix},

  {"div", 0x0980, 0x0640, "m R,r", 0, SIZE_FIELD, 0,
   cris_not_implemented_op},

  {"dstep", 0x06f0, 0x0900, "r,R", 0, SIZE_NONE, 0,
   cris_dstep_logshift_mstep_neg_not_op},

  {"ei", 0x25B0, 0xDA4F, "", 0, SIZE_NONE, 0,
   cris_ax_ei_setf_op},

  {"fidxd", 0x0ab0, 0xf540, "[r]", 0, SIZE_NONE,
   cris_ver_v32p,
   cris_not_implemented_op},

  {"fidxi", 0x0d30, 0xF2C0, "[r]", 0, SIZE_NONE,
   cris_ver_v32p,
   cris_not_implemented_op},

  {"ftagd", 0x1AB0, 0xE540, "[r]", 0, SIZE_NONE,
   cris_ver_v32p,
   cris_not_implemented_op},

  {"ftagi", 0x1D30, 0xE2C0, "[r]", 0, SIZE_NONE,
   cris_ver_v32p,
   cris_not_implemented_op},

  {"halt", 0xF930, 0x06CF, "", 0, SIZE_NONE,
   cris_ver_v32p,
   cris_not_implemented_op},

  {"jas", 0x09B0, 0x0640, "r,P", 0, SIZE_NONE,
   cris_ver_v32p,
   cris_reg_mode_jump_op},

  {"jas", 0x0DBF, 0x0240, "N,P", 0, SIZE_FIX_32,
   cris_ver_v32p,
   cris_reg_mode_jump_op},

  {"jasc", 0x0B30, 0x04C0, "r,P", 0, SIZE_NONE,
   cris_ver_v32p,
   cris_reg_mode_jump_op},

  {"jasc", 0x0F3F, 0x00C0, "N,P", 0, SIZE_FIX_32,
   cris_ver_v32p,
   cris_reg_mode_jump_op},

  {"jbrc", 0x69b0, 0x9640, "r", 0, SIZE_NONE,
   cris_ver_v8_10,
   cris_reg_mode_jump_op},

  {"jbrc", 0x6930, 0x92c0, "s", 0, SIZE_FIX_32,
   cris_ver_v8_10,
   cris_none_reg_mode_jump_op},

  {"jbrc", 0x6930, 0x92c0, "S", 0, SIZE_NONE,
   cris_ver_v8_10,
   cris_none_reg_mode_jump_op},

  {"jir", 0xA9b0, 0x5640, "r", 0, SIZE_NONE,
   cris_ver_v8_10,
   cris_reg_mode_jump_op},

  {"jir", 0xA930, 0x52c0, "s", 0, SIZE_FIX_32,
   cris_ver_v8_10,
   cris_none_reg_mode_jump_op},

  {"jir", 0xA930, 0x52c0, "S", 0, SIZE_NONE,
   cris_ver_v8_10,
   cris_none_reg_mode_jump_op},

  {"jirc", 0x29b0, 0xd640, "r", 0, SIZE_NONE,
   cris_ver_v8_10,
   cris_reg_mode_jump_op},

  {"jirc", 0x2930, 0xd2c0, "s", 0, SIZE_FIX_32,
   cris_ver_v8_10,
   cris_none_reg_mode_jump_op},

  {"jirc", 0x2930, 0xd2c0, "S", 0, SIZE_NONE,
   cris_ver_v8_10,
   cris_none_reg_mode_jump_op},

  {"jsr", 0xB9b0, 0x4640, "r", 0, SIZE_NONE, 0,
   cris_reg_mode_jump_op},

  {"jsr", 0xB930, 0x42c0, "s", 0, SIZE_FIX_32,
   cris_ver_v0_10,
   cris_none_reg_mode_jump_op},

  {"jsr", 0xBDBF, 0x4240, "N", 0, SIZE_FIX_32,
   cris_ver_v32p,
   cris_none_reg_mode_jump_op},

  {"jsr", 0xB930, 0x42c0, "S", 0, SIZE_NONE,
   cris_ver_v0_10,
   cris_none_reg_mode_jump_op},

  {"jsrc", 0x39b0, 0xc640, "r", 0, SIZE_NONE,
   cris_ver_v8_10,
   cris_reg_mode_jump_op},

  {"jsrc", 0x3930, 0xc2c0, "s", 0, SIZE_FIX_32,
   cris_ver_v8_10,
   cris_none_reg_mode_jump_op},

  {"jsrc", 0x3930, 0xc2c0, "S", 0, SIZE_NONE,
   cris_ver_v8_10,
   cris_none_reg_mode_jump_op},

  {"jsrc", 0xBB30, 0x44C0, "r", 0, SIZE_NONE,
   cris_ver_v32p,
   cris_reg_mode_jump_op},

  {"jsrc", 0xBF3F, 0x40C0, "N", 0, SIZE_FIX_32,
   cris_ver_v32p,
   cris_reg_mode_jump_op},

  {"jump", 0x09b0, 0xF640, "r", 0, SIZE_NONE, 0,
   cris_reg_mode_jump_op},

  {"jump",
   
# 674 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
  (0x0930)
# 674 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                   , 
# 674 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
                     (0xf2c0)
# 674 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                                      , "s", 0, SIZE_FIX_32,
   cris_ver_v0_10,
   cris_none_reg_mode_jump_op},

  {"jump",
   
# 679 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
  (0x0930)
# 679 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                   , 
# 679 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
                     (0xf2c0)
# 679 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                                      , "S", 0, SIZE_NONE,
   cris_ver_v0_10,
   cris_none_reg_mode_jump_op},

  {"jump", 0x09F0, 0x060F, "P", 0, SIZE_NONE,
   cris_ver_v32p,
   cris_none_reg_mode_jump_op},

  {"jump",
   
# 688 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
  (0x0DBF)
# 688 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                         ,
   (0xffff & ~
# 689 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
             (0x0DBF)
# 689 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                                    ), "N", 0, SIZE_FIX_32,
   cris_ver_v32p,
   cris_none_reg_mode_jump_op},

  {"jmpu", 0x8930, 0x72c0, "s", 0, SIZE_FIX_32,
   cris_ver_v10,
   cris_none_reg_mode_jump_op},

  {"jmpu", 0x8930, 0x72c0, "S", 0, SIZE_NONE,
   cris_ver_v10,
   cris_none_reg_mode_jump_op},

  {"lapc", 0x0970, 0x0680, "U,R", 0, SIZE_NONE,
   cris_ver_v32p,
   cris_not_implemented_op},

  {"lapc", 0x0D7F, 0x0280, "dn,R", 0, SIZE_FIX_32,
   cris_ver_v32p,
   cris_not_implemented_op},

  {"lapcq", 0x0970, 0x0680, "u,R", 0, SIZE_NONE,
   cris_ver_v32p,
   cris_addi_op},

  {"lsl", 0x04C0, 0x0B00, "m r,R", 0, SIZE_NONE, 0,
   cris_dstep_logshift_mstep_neg_not_op},

  {"lslq", 0x03c0, 0x0C20, "c,R", 0, SIZE_NONE, 0,
   cris_dstep_logshift_mstep_neg_not_op},

  {"lsr", 0x07C0, 0x0800, "m r,R", 0, SIZE_NONE, 0,
   cris_dstep_logshift_mstep_neg_not_op},

  {"lsrq", 0x03e0, 0x0C00, "c,R", 0, SIZE_NONE, 0,
   cris_dstep_logshift_mstep_neg_not_op},

  {"lz", 0x0730, 0x08C0, "r,R", 0, SIZE_NONE,
   cris_ver_v3p,
   cris_not_implemented_op},

  {"mcp", 0x07f0, 0x0800, "P,r", 0, SIZE_NONE,
   cris_ver_v32p,
   cris_not_implemented_op},

  {"move", 0x0640, 0x0980, "m r,R", 0, SIZE_NONE, 0,
   cris_reg_mode_add_sub_cmp_and_or_move_op},

  {"move", 0x0A40, 0x0180, "m s,R", 0, SIZE_FIELD, 0,
   cris_none_reg_mode_add_sub_cmp_and_or_move_op},

  {"move", 0x0A40, 0x0180, "m S,D", 0, SIZE_NONE,
   cris_ver_v0_10,
   cris_none_reg_mode_add_sub_cmp_and_or_move_op},

  {"move", 0x0630, 0x09c0, "r,P", 0, SIZE_NONE, 0,
   cris_move_to_preg_op},

  {"move", 0x0670, 0x0980, "P,r", 0, SIZE_NONE, 0,
   cris_reg_mode_move_from_preg_op},

  {"move", 0x0BC0, 0x0000, "m R,y", 0, SIZE_FIELD, 0,
   cris_none_reg_mode_add_sub_cmp_and_or_move_op},

  {"move", 0x0BC0, 0x0000, "m D,S", 0, SIZE_NONE,
   cris_ver_v0_10,
   cris_none_reg_mode_add_sub_cmp_and_or_move_op},

  {"move",
   
# 757 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
  0x0a30
# 757 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                       , 
# 757 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
                         0x01c0
# 757 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                                             ,
   "s,P", 0, SIZE_SPEC_REG, 0,
   cris_move_to_preg_op},

  {"move", 0x0A30, 0x01c0, "S,P", 0, SIZE_NONE,
   cris_ver_v0_10,
   cris_move_to_preg_op},

  {"move", 0x0A70, 0x0180, "P,y", 0, SIZE_SPEC_REG, 0,
   cris_none_reg_mode_move_from_preg_op},

  {"move", 0x0A70, 0x0180, "P,S", 0, SIZE_NONE,
   cris_ver_v0_10,
   cris_none_reg_mode_move_from_preg_op},

  {"move", 0x0B70, 0x0480, "r,T", 0, SIZE_NONE,
   cris_ver_v32p,
   cris_not_implemented_op},

  {"move", 0x0F70, 0x0080, "T,r", 0, SIZE_NONE,
   cris_ver_v32p,
   cris_not_implemented_op},

  {"movem", 0x0BF0, 0x0000, "R,y", 0, SIZE_FIX_32, 0,
   cris_move_reg_to_mem_movem_op},

  {"movem", 0x0BF0, 0x0000, "D,S", 0, SIZE_NONE,
   cris_ver_v0_10,
   cris_move_reg_to_mem_movem_op},

  {"movem", 0x0BB0, 0x0040, "s,R", 0, SIZE_FIX_32, 0,
   cris_move_mem_to_reg_movem_op},

  {"movem", 0x0BB0, 0x0040, "S,D", 0, SIZE_NONE,
   cris_ver_v0_10,
   cris_move_mem_to_reg_movem_op},

  {"moveq", 0x0240, 0x0D80, "i,R", 0, SIZE_NONE, 0,
   cris_quick_mode_and_cmp_move_or_op},

  {"movs", 0x0460, 0x0B80, "z r,R", 0, SIZE_NONE, 0,
   cris_reg_mode_add_sub_cmp_and_or_move_op},


  {"movs", 0x0860, 0x0380, "z s,R", 0, SIZE_FIELD, 0,
   cris_none_reg_mode_add_sub_cmp_and_or_move_op},

  {"movs", 0x0860, 0x0380, "z S,D", 0, SIZE_NONE,
   cris_ver_v0_10,
   cris_none_reg_mode_add_sub_cmp_and_or_move_op},

  {"movu", 0x0440, 0x0Ba0, "z r,R", 0, SIZE_NONE, 0,
   cris_reg_mode_add_sub_cmp_and_or_move_op},


  {"movu", 0x0840, 0x03a0, "z s,R", 0, SIZE_FIELD, 0,
   cris_none_reg_mode_add_sub_cmp_and_or_move_op},

  {"movu", 0x0840, 0x03a0, "z S,D", 0, SIZE_NONE,
   cris_ver_v0_10,
   cris_none_reg_mode_add_sub_cmp_and_or_move_op},

  {"mstep", 0x07f0, 0x0800, "r,R", 0, SIZE_NONE,
   cris_ver_v0_10,
   cris_dstep_logshift_mstep_neg_not_op},

  {"muls", 0x0d00, 0x02c0, "m r,R", 0, SIZE_NONE,
   cris_ver_v10p,
   cris_muls_op},

  {"mulu", 0x0900, 0x06c0, "m r,R", 0, SIZE_NONE,
   cris_ver_v10p,
   cris_mulu_op},

  {"neg", 0x0580, 0x0A40, "m r,R", 0, SIZE_NONE, 0,
   cris_dstep_logshift_mstep_neg_not_op},

  {"nop", 
# 834 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
             (0x050F)
# 834 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                       , 
# 834 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
                         (0xFFFF ^ (0x050F))
# 834 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                                   , "", 0, SIZE_NONE,
   cris_ver_v0_10,
   cris_btst_nop_op},

  {"nop", 
# 838 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
             (0x05B0)
# 838 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                           , 
# 838 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
                             (0xFFFF ^ (0x05B0))
# 838 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                                           , "", 0, SIZE_NONE,
   cris_ver_v32p,
   cris_btst_nop_op},

  {"not", 0x8770, 0x7880, "r", 0, SIZE_NONE, 0,
   cris_dstep_logshift_mstep_neg_not_op},

  {"or", 0x0740, 0x0880, "m r,R", 0, SIZE_NONE, 0,
   cris_reg_mode_add_sub_cmp_and_or_move_op},

  {"or", 0x0B40, 0x0080, "m s,R", 0, SIZE_FIELD, 0,
   cris_none_reg_mode_add_sub_cmp_and_or_move_op},

  {"or", 0x0B40, 0x0080, "m S,D", 0, SIZE_NONE,
   cris_ver_v0_10,
   cris_none_reg_mode_add_sub_cmp_and_or_move_op},

  {"or", 0x0B40, 0x0480, "m S,R,r", 0, SIZE_NONE,
   cris_ver_v0_10,
   cris_three_operand_add_sub_cmp_and_or_op},

  {"orq", 0x0340, 0x0C80, "i,R", 0, SIZE_NONE, 0,
   cris_quick_mode_and_cmp_move_or_op},

  {"pop", 0x0E6E, 0x0191, "!R", 0, SIZE_NONE,
   cris_ver_v0_10,
   cris_none_reg_mode_add_sub_cmp_and_or_move_op},

  {"pop", 0x0e3e, 0x01c1, "!P", 0, SIZE_NONE,
   cris_ver_v0_10,
   cris_none_reg_mode_move_from_preg_op},

  {"push", 0x0FEE, 0x0011, "BR", 0, SIZE_NONE,
   cris_ver_v0_10,
   cris_none_reg_mode_add_sub_cmp_and_or_move_op},

  {"push", 0x0E7E, 0x0181, "BP", 0, SIZE_NONE,
   cris_ver_v0_10,
   cris_move_to_preg_op},

  {"rbf", 0x3b30, 0xc0c0, "y", 0, SIZE_NONE,
   cris_ver_v10,
   cris_not_implemented_op},

  {"rbf", 0x3b30, 0xc0c0, "S", 0, SIZE_NONE,
   cris_ver_v10,
   cris_not_implemented_op},

  {"rfe", 0x2930, 0xD6CF, "", 0, SIZE_NONE,
   cris_ver_v32p,
   cris_not_implemented_op},

  {"rfg", 0x4930, 0xB6CF, "", 0, SIZE_NONE,
   cris_ver_v32p,
   cris_not_implemented_op},

  {"rfn", 0x5930, 0xA6CF, "", 0, SIZE_NONE,
   cris_ver_v32p,
   cris_not_implemented_op},

  {"ret", 0xB67F, 0x4980, "", 1, SIZE_NONE,
   cris_ver_v0_10,
   cris_reg_mode_move_from_preg_op},

  {"ret", 0xB9F0, 0x460F, "", 1, SIZE_NONE,
   cris_ver_v32p,
   cris_reg_mode_move_from_preg_op},

  {"retb", 0xe67f, 0x1980, "", 1, SIZE_NONE,
   cris_ver_v0_10,
   cris_reg_mode_move_from_preg_op},

  {"rete", 0xA9F0, 0x560F, "", 1, SIZE_NONE,
   cris_ver_v32p,
   cris_reg_mode_move_from_preg_op},

  {"reti", 0xA67F, 0x5980, "", 1, SIZE_NONE,
   cris_ver_v0_10,
   cris_reg_mode_move_from_preg_op},

  {"retn", 0xC9F0, 0x360F, "", 1, SIZE_NONE,
   cris_ver_v32p,
   cris_reg_mode_move_from_preg_op},

  {"sbfs", 0x3b70, 0xc080, "y", 0, SIZE_NONE,
   cris_ver_v10,
   cris_not_implemented_op},

  {"sbfs", 0x3b70, 0xc080, "S", 0, SIZE_NONE,
   cris_ver_v10,
   cris_not_implemented_op},

  {"sa",
   0x0530+
# 931 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
         0xE
# 931 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
             *0x1000,
   0x0AC0+(0xf-
# 932 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
              0xE
# 932 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                  )*0x1000, "r", 0, SIZE_NONE, 0,
   cris_scc_op},

  {"ssb",
   0x0530+
# 936 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
         0xF
# 936 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
               *0x1000,
   0x0AC0+(0xf-
# 937 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
              0xF
# 937 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                    )*0x1000, "r", 0, SIZE_NONE,
   cris_ver_v32p,
   cris_scc_op},

  {"scc",
   0x0530+
# 942 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
         0x0
# 942 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
              *0x1000,
   0x0AC0+(0xf-
# 943 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
              0x0
# 943 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                   )*0x1000, "r", 0, SIZE_NONE, 0,
   cris_scc_op},

  {"scs",
   0x0530+
# 947 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
         0x1
# 947 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
              *0x1000,
   0x0AC0+(0xf-
# 948 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
              0x1
# 948 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                   )*0x1000, "r", 0, SIZE_NONE, 0,
   cris_scc_op},

  {"seq",
   0x0530+
# 952 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
         0x3
# 952 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
              *0x1000,
   0x0AC0+(0xf-
# 953 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
              0x3
# 953 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                   )*0x1000, "r", 0, SIZE_NONE, 0,
   cris_scc_op},

  {"setf", 0x05b0, 0x0A40, "f", 0, SIZE_NONE, 0,
   cris_ax_ei_setf_op},

  {"sfe", 0x3930, 0xC6CF, "", 0, SIZE_NONE,
   cris_ver_v32p,
   cris_not_implemented_op},



  {"swf",
   0x0530+
# 966 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
         0xF
# 966 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
               *0x1000,
   0x0AC0+(0xf-
# 967 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
              0xF
# 967 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                    )*0x1000, "r", 0, SIZE_NONE,
   cris_ver_v10,
   cris_scc_op},

  {"sext",
   0x0530+
# 972 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
         0xF
# 972 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
               *0x1000,
   0x0AC0+(0xf-
# 973 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
              0xF
# 973 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                    )*0x1000, "r", 0, SIZE_NONE,
   cris_ver_v0_3,
   cris_scc_op},

  {"sge",
   0x0530+
# 978 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
         0xA
# 978 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
              *0x1000,
   0x0AC0+(0xf-
# 979 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
              0xA
# 979 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                   )*0x1000, "r", 0, SIZE_NONE, 0,
   cris_scc_op},

  {"sgt",
   0x0530+
# 983 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
         0xC
# 983 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
              *0x1000,
   0x0AC0+(0xf-
# 984 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
              0xC
# 984 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                   )*0x1000, "r", 0, SIZE_NONE, 0,
   cris_scc_op},

  {"shi",
   0x0530+
# 988 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
         0x9
# 988 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
              *0x1000,
   0x0AC0+(0xf-
# 989 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
              0x9
# 989 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                   )*0x1000, "r", 0, SIZE_NONE, 0,
   cris_scc_op},

  {"shs",
   0x0530+
# 993 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
         0x0
# 993 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
              *0x1000,
   0x0AC0+(0xf-
# 994 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
              0x0
# 994 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                   )*0x1000, "r", 0, SIZE_NONE, 0,
   cris_scc_op},

  {"sle",
   0x0530+
# 998 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
         0xD
# 998 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
              *0x1000,
   0x0AC0+(0xf-
# 999 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
              0xD
# 999 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                   )*0x1000, "r", 0, SIZE_NONE, 0,
   cris_scc_op},

  {"slo",
   0x0530+
# 1003 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
         0x1
# 1003 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
              *0x1000,
   0x0AC0+(0xf-
# 1004 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
              0x1
# 1004 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                   )*0x1000, "r", 0, SIZE_NONE, 0,
   cris_scc_op},

  {"sls",
   0x0530+
# 1008 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
         0x8
# 1008 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
              *0x1000,
   0x0AC0+(0xf-
# 1009 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
              0x8
# 1009 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                   )*0x1000, "r", 0, SIZE_NONE, 0,
   cris_scc_op},

  {"slt",
   0x0530+
# 1013 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
         0xB
# 1013 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
              *0x1000,
   0x0AC0+(0xf-
# 1014 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
              0xB
# 1014 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                   )*0x1000, "r", 0, SIZE_NONE, 0,
   cris_scc_op},

  {"smi",
   0x0530+
# 1018 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
         0x7
# 1018 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
              *0x1000,
   0x0AC0+(0xf-
# 1019 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
              0x7
# 1019 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                   )*0x1000, "r", 0, SIZE_NONE, 0,
   cris_scc_op},

  {"sne",
   0x0530+
# 1023 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
         0x2
# 1023 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
              *0x1000,
   0x0AC0+(0xf-
# 1024 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
              0x2
# 1024 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                   )*0x1000, "r", 0, SIZE_NONE, 0,
   cris_scc_op},

  {"spl",
   0x0530+
# 1028 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
         0x6
# 1028 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
              *0x1000,
   0x0AC0+(0xf-
# 1029 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
              0x6
# 1029 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                   )*0x1000, "r", 0, SIZE_NONE, 0,
   cris_scc_op},

  {"sub", 0x0680, 0x0940, "m r,R", 0, SIZE_NONE, 0,
   cris_reg_mode_add_sub_cmp_and_or_move_op},

  {"sub", 0x0a80, 0x0140, "m s,R", 0, SIZE_FIELD, 0,
   cris_none_reg_mode_add_sub_cmp_and_or_move_op},

  {"sub", 0x0a80, 0x0140, "m S,D", 0, SIZE_NONE,
   cris_ver_v0_10,
   cris_none_reg_mode_add_sub_cmp_and_or_move_op},

  {"sub", 0x0a80, 0x0540, "m S,R,r", 0, SIZE_NONE,
   cris_ver_v0_10,
   cris_three_operand_add_sub_cmp_and_or_op},

  {"subq", 0x0280, 0x0d40, "I,R", 0, SIZE_NONE, 0,
   cris_quick_mode_add_sub_op},

  {"subs", 0x04a0, 0x0b40, "z r,R", 0, SIZE_NONE, 0,
   cris_reg_mode_add_sub_cmp_and_or_move_op},


  {"subs", 0x08a0, 0x0340, "z s,R", 0, SIZE_FIELD, 0,
   cris_none_reg_mode_add_sub_cmp_and_or_move_op},

  {"subs", 0x08a0, 0x0340, "z S,D", 0, SIZE_NONE,
   cris_ver_v0_10,
   cris_none_reg_mode_add_sub_cmp_and_or_move_op},

  {"subs", 0x08a0, 0x0740, "z S,R,r", 0, SIZE_NONE,
   cris_ver_v0_10,
   cris_three_operand_add_sub_cmp_and_or_op},

  {"subu", 0x0480, 0x0b60, "z r,R", 0, SIZE_NONE, 0,
   cris_reg_mode_add_sub_cmp_and_or_move_op},


  {"subu", 0x0880, 0x0360, "z s,R", 0, SIZE_FIELD, 0,
   cris_none_reg_mode_add_sub_cmp_and_or_move_op},

  {"subu", 0x0880, 0x0360, "z S,D", 0, SIZE_NONE,
   cris_ver_v0_10,
   cris_none_reg_mode_add_sub_cmp_and_or_move_op},

  {"subu", 0x0880, 0x0760, "z S,R,r", 0, SIZE_NONE,
   cris_ver_v0_10,
   cris_three_operand_add_sub_cmp_and_or_op},

  {"svc",
   0x0530+
# 1080 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
         0x4
# 1080 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
              *0x1000,
   0x0AC0+(0xf-
# 1081 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
              0x4
# 1081 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                   )*0x1000, "r", 0, SIZE_NONE, 0,
   cris_scc_op},

  {"svs",
   0x0530+
# 1085 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
         0x5
# 1085 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
              *0x1000,
   0x0AC0+(0xf-
# 1086 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c" 3 4
              0x5
# 1086 "project/radare2/libr/asm/arch/cris/gnu/cris-opc.c"
                   )*0x1000, "r", 0, SIZE_NONE, 0,
   cris_scc_op},




  {"swapn", 0x8770, 0x7880, "r", 0, SIZE_NONE,
   cris_ver_v8p,
   cris_not_implemented_op},

  {"swapw", 0x4770, 0xb880, "r", 0, SIZE_NONE,
   cris_ver_v8p,
   cris_not_implemented_op},

  {"swapnw", 0xc770, 0x3880, "r", 0, SIZE_NONE,
   cris_ver_v8p,
   cris_not_implemented_op},

  {"swapb", 0x2770, 0xd880, "r", 0, SIZE_NONE,
   cris_ver_v8p,
   cris_not_implemented_op},

  {"swapnb", 0xA770, 0x5880, "r", 0, SIZE_NONE,
   cris_ver_v8p,
   cris_not_implemented_op},

  {"swapwb", 0x6770, 0x9880, "r", 0, SIZE_NONE,
   cris_ver_v8p,
   cris_not_implemented_op},

  {"swapnwb", 0xE770, 0x1880, "r", 0, SIZE_NONE,
   cris_ver_v8p,
   cris_not_implemented_op},

  {"swapr", 0x1770, 0xe880, "r", 0, SIZE_NONE,
   cris_ver_v8p,
   cris_not_implemented_op},

  {"swapnr", 0x9770, 0x6880, "r", 0, SIZE_NONE,
   cris_ver_v8p,
   cris_not_implemented_op},

  {"swapwr", 0x5770, 0xa880, "r", 0, SIZE_NONE,
   cris_ver_v8p,
   cris_not_implemented_op},

  {"swapnwr", 0xd770, 0x2880, "r", 0, SIZE_NONE,
   cris_ver_v8p,
   cris_not_implemented_op},

  {"swapbr", 0x3770, 0xc880, "r", 0, SIZE_NONE,
   cris_ver_v8p,
   cris_not_implemented_op},

  {"swapnbr", 0xb770, 0x4880, "r", 0, SIZE_NONE,
   cris_ver_v8p,
   cris_not_implemented_op},

  {"swapwbr", 0x7770, 0x8880, "r", 0, SIZE_NONE,
   cris_ver_v8p,
   cris_not_implemented_op},

  {"swapnwbr", 0xf770, 0x0880, "r", 0, SIZE_NONE,
   cris_ver_v8p,
   cris_not_implemented_op},

  {"test", 0x0640, 0x0980, "m D", 0, SIZE_NONE,
   cris_ver_v0_10,
   cris_reg_mode_test_op},

  {"test", 0x0b80, 0xf040, "m y", 0, SIZE_FIELD, 0,
   cris_none_reg_mode_clear_test_op},

  {"test", 0x0b80, 0xf040, "m S", 0, SIZE_NONE,
   cris_ver_v0_10,
   cris_none_reg_mode_clear_test_op},

  {"xor", 0x07B0, 0x0840, "r,R", 0, SIZE_NONE, 0,
   cris_xor_op},

  {(0), 0, 0, (0), 0, 0, 0, cris_not_implemented_op}
};


const char * const
cris_cc_strings[] =
{
  "hs",
  "lo",
  "ne",
  "eq",
  "vc",
  "vs",
  "pl",
  "mi",
  "ls",
  "hi",
  "ge",
  "lt",
  "gt",
  "le",
  "a",


  "wf"
};


const struct cris_cond15 cris_cond15s[] =
{

  {"ext", cris_ver_v0_3},
  {"wf", cris_ver_v10},
  {"sb", cris_ver_v32p},
  {(0), 0}
};
