# 1 "project/radare2/libr/asm/arch/sh/gnu/sh-opc.h"
# 19 "project/radare2/libr/asm/arch/sh/gnu/sh-opc.h"
typedef enum {
 HEX_0,
 HEX_1,
 HEX_2,
 HEX_3,
 HEX_4,
 HEX_5,
 HEX_6,
 HEX_7,
 HEX_8,
 HEX_9,
 HEX_A,
 HEX_B,
 HEX_C,
 HEX_D,
 HEX_E,
 HEX_F,
 REG_N,
 REG_M,
 REG_NM,
        REG_B,
 BRANCH_12,
 BRANCH_8,
 DISP_8,
 DISP_4,
 IMM_4,
 IMM_4BY2,
 IMM_4BY4,
 PCRELIMM_8BY2,
 PCRELIMM_8BY4,
 IMM_8,
 IMM_8BY2,
 IMM_8BY4
} sh_nibble_type;

typedef enum {
 A_END,
 A_BDISP12,
 A_BDISP8,
 A_DEC_M,
 A_DEC_N,
 A_DISP_GBR,
 A_DISP_PC,
 A_DISP_REG_M,
 A_DISP_REG_N,
 A_GBR,
 A_IMM,
 A_INC_M,
 A_INC_N,
 A_IND_M,
 A_IND_N,
 A_IND_R0_REG_M,
 A_IND_R0_REG_N,
 A_MACH,
 A_MACL,
 A_PR,
 A_R0,
 A_R0_GBR,
 A_REG_M,
 A_REG_N,
 A_REG_B,
 A_SR,
 A_VBR,
 A_SSR,
 A_SPC,
 A_SGR,
 A_DBR,
 F_REG_N,
 F_REG_M,
 D_REG_N,
 D_REG_M,
 X_REG_N,
 X_REG_M,
 DX_REG_N,
 DX_REG_M,
 V_REG_N,
 V_REG_M,
 FD_REG_N,
 XMTRX_M4,
 F_FR0,
 FPUL_N,
 FPUL_M,
 FPSCR_N,
 FPSCR_M
} sh_arg_type;

typedef struct {
  char *name;
  sh_arg_type arg[4];
  sh_nibble_type nibbles[4];
} sh_opcode_info;

#ifdef DEFINE_TABLE

sh_opcode_info sh_table[] = {

                                          {"add",{A_IMM,A_REG_N},{HEX_7,REG_N,IMM_8}},

                                          {"add",{ A_REG_M,A_REG_N},{HEX_3,REG_N,REG_M,HEX_C}},

                                          {"addc",{ A_REG_M,A_REG_N},{HEX_3,REG_N,REG_M,HEX_E}},

                                          {"addv",{ A_REG_M,A_REG_N},{HEX_3,REG_N,REG_M,HEX_F}},

                                          {"and",{A_IMM,A_R0},{HEX_C,HEX_9,IMM_8}},

                                          {"and",{ A_REG_M,A_REG_N},{HEX_2,REG_N,REG_M,HEX_9}},

                                            {"and.b",{A_IMM,A_R0_GBR},{HEX_C,HEX_D,IMM_8}},

                                          {"bra",{A_BDISP12},{HEX_A,BRANCH_12}},

                                          {"bsr",{A_BDISP12},{HEX_B,BRANCH_12}},

                                          {"bt",{A_BDISP8},{HEX_8,HEX_9,BRANCH_8}},

                                          {"bf",{A_BDISP8},{HEX_8,HEX_B,BRANCH_8}},

                                          {"bt.s",{A_BDISP8},{HEX_8,HEX_D,BRANCH_8}},

                                          {"bt/s",{A_BDISP8},{HEX_8,HEX_D,BRANCH_8}},

                                          {"bf.s",{A_BDISP8},{HEX_8,HEX_F,BRANCH_8}},

                                          {"bf/s",{A_BDISP8},{HEX_8,HEX_F,BRANCH_8}},

                                          {"clrmac",{0},{HEX_0,HEX_0,HEX_2,HEX_8}},

                                          {"clrs",{0},{HEX_0,HEX_0,HEX_4,HEX_8}},

                                          {"clrt",{0},{HEX_0,HEX_0,HEX_0,HEX_8}},

                                          {"cmp/eq",{A_IMM,A_R0},{HEX_8,HEX_8,IMM_8}},

                                            {"cmp/eq",{ A_REG_M,A_REG_N},{HEX_3,REG_N,REG_M,HEX_0}},

                                            {"cmp/ge",{ A_REG_M,A_REG_N},{HEX_3,REG_N,REG_M,HEX_3}},

                                            {"cmp/gt",{ A_REG_M,A_REG_N},{HEX_3,REG_N,REG_M,HEX_7}},

                                            {"cmp/hi",{ A_REG_M,A_REG_N},{HEX_3,REG_N,REG_M,HEX_6}},

                                            {"cmp/hs",{ A_REG_M,A_REG_N},{HEX_3,REG_N,REG_M,HEX_2}},

                                          {"cmp/pl",{A_REG_N},{HEX_4,REG_N,HEX_1,HEX_5}},

                                          {"cmp/pz",{A_REG_N},{HEX_4,REG_N,HEX_1,HEX_1}},

                                             {"cmp/str",{ A_REG_M,A_REG_N},{HEX_2,REG_N,REG_M,HEX_C}},

                                           {"div0s",{ A_REG_M,A_REG_N},{HEX_2,REG_N,REG_M,HEX_7}},

                                          {"div0u",{0},{HEX_0,HEX_0,HEX_1,HEX_9}},

                                          {"div1",{ A_REG_M,A_REG_N},{HEX_3,REG_N,REG_M,HEX_4}},

                                            {"exts.b",{ A_REG_M,A_REG_N},{HEX_6,REG_N,REG_M,HEX_E}},

                                            {"exts.w",{ A_REG_M,A_REG_N},{HEX_6,REG_N,REG_M,HEX_F}},

                                            {"extu.b",{ A_REG_M,A_REG_N},{HEX_6,REG_N,REG_M,HEX_C}},

                                            {"extu.w",{ A_REG_M,A_REG_N},{HEX_6,REG_N,REG_M,HEX_D}},

                                          {"jmp",{A_IND_N},{HEX_4,REG_N,HEX_2,HEX_B}},

                                          {"jsr",{A_IND_N},{HEX_4,REG_N,HEX_0,HEX_B}},

                                          {"ldc",{A_REG_N,A_SR},{HEX_4,REG_N,HEX_0,HEX_E}},

                                          {"ldc",{A_REG_N,A_GBR},{HEX_4,REG_N,HEX_1,HEX_E}},

                                          {"ldc",{A_REG_N,A_VBR},{HEX_4,REG_N,HEX_2,HEX_E}},

                                          {"ldc",{A_REG_N,A_SSR},{HEX_4,REG_N,HEX_3,HEX_E}},

                                          {"ldc",{A_REG_N,A_SPC},{HEX_4,REG_N,HEX_4,HEX_E}},

                                          {"ldc",{A_REG_N,A_DBR},{HEX_4,REG_N,HEX_7,HEX_E}},

                                          {"ldc",{A_REG_N,A_REG_B},{HEX_4,REG_N,REG_B,HEX_E}},

                                          {"ldc.l",{A_INC_N,A_SR},{HEX_4,REG_N,HEX_0,HEX_7}},

                                          {"ldc.l",{A_INC_N,A_GBR},{HEX_4,REG_N,HEX_1,HEX_7}},

                                          {"ldc.l",{A_INC_N,A_VBR},{HEX_4,REG_N,HEX_2,HEX_7}},

                                          {"ldc.l",{A_INC_N,A_SSR},{HEX_4,REG_N,HEX_3,HEX_7}},

                                          {"ldc.l",{A_INC_N,A_SPC},{HEX_4,REG_N,HEX_4,HEX_7}},

                                          {"ldc.l",{A_INC_N,A_DBR},{HEX_4,REG_N,HEX_7,HEX_7}},

                                            {"ldc.l",{A_INC_N,A_REG_B},{HEX_4,REG_N,REG_B,HEX_7}},

                                          {"lds",{A_REG_N,A_MACH},{HEX_4,REG_N,HEX_0,HEX_A}},

                                          {"lds",{A_REG_N,A_MACL},{HEX_4,REG_N,HEX_1,HEX_A}},

                                          {"lds",{A_REG_N,A_PR},{HEX_4,REG_N,HEX_2,HEX_A}},

                                          {"lds",{A_REG_M,FPUL_N},{HEX_4,REG_M,HEX_5,HEX_A}},

                                          {"lds",{A_REG_M,FPSCR_N},{HEX_4,REG_M,HEX_6,HEX_A}},

                                          {"lds.l",{A_INC_N,A_MACH},{HEX_4,REG_N,HEX_0,HEX_6}},

                                          {"lds.l",{A_INC_N,A_MACL},{HEX_4,REG_N,HEX_1,HEX_6}},

                                          {"lds.l",{A_INC_N,A_PR},{HEX_4,REG_N,HEX_2,HEX_6}},

                                          {"lds.l",{A_INC_M,FPUL_N},{HEX_4,REG_M,HEX_5,HEX_6}},

                                           {"lds.l",{A_INC_M,FPSCR_N},{HEX_4,REG_M,HEX_6,HEX_6}},

                                          {"ldtlb",{0},{HEX_0,HEX_0,HEX_3,HEX_8}},

                                               {"mac.w",{A_INC_M,A_INC_N},{HEX_4,REG_N,REG_M,HEX_F}},

                                          {"mov",{A_IMM,A_REG_N},{HEX_E,REG_N,IMM_8}},

                                          {"mov",{ A_REG_M,A_REG_N},{HEX_6,REG_N,REG_M,HEX_3}},

                                                 {"mov.b",{ A_REG_M,A_IND_R0_REG_N},{HEX_0,REG_N,REG_M,HEX_4}},

                                             {"mov.b",{ A_REG_M,A_DEC_N},{HEX_2,REG_N,REG_M,HEX_4}},

                                            {"mov.b",{ A_REG_M,A_IND_N},{HEX_2,REG_N,REG_M,HEX_0}},

                                                {"mov.b",{A_DISP_REG_M,A_R0},{HEX_8,HEX_4,REG_M,IMM_4}},

                                            {"mov.b",{A_DISP_GBR,A_R0},{HEX_C,HEX_4,IMM_8}},

                                                 {"mov.b",{A_IND_R0_REG_M,A_REG_N},{HEX_0,REG_N,REG_M,HEX_C}},

                                             {"mov.b",{A_INC_M,A_REG_N},{HEX_6,REG_N,REG_M,HEX_4}},

                                            {"mov.b",{A_IND_M,A_REG_N},{HEX_6,REG_N,REG_M,HEX_0}},

                                                {"mov.b",{A_R0,A_DISP_REG_M},{HEX_8,HEX_0,REG_M,IMM_4}},

                                            {"mov.b",{A_R0,A_DISP_GBR},{HEX_C,HEX_0,IMM_8}},

                                                     {"mov.l",{ A_REG_M,A_DISP_REG_N},{HEX_1,REG_N,REG_M,IMM_4BY4}},

                                                 {"mov.l",{ A_REG_M,A_IND_R0_REG_N},{HEX_0,REG_N,REG_M,HEX_6}},

                                             {"mov.l",{ A_REG_M,A_DEC_N},{HEX_2,REG_N,REG_M,HEX_6}},

                                            {"mov.l",{ A_REG_M,A_IND_N},{HEX_2,REG_N,REG_M,HEX_2}},

                                                     {"mov.l",{A_DISP_REG_M,A_REG_N},{HEX_5,REG_N,REG_M,IMM_4BY4}},

                                            {"mov.l",{A_DISP_GBR,A_R0},{HEX_C,HEX_6,IMM_8BY4}},

                                                {"mov.l",{A_DISP_PC,A_REG_N},{HEX_D,REG_N,PCRELIMM_8BY4}},

                                                 {"mov.l",{A_IND_R0_REG_M,A_REG_N},{HEX_0,REG_N,REG_M,HEX_E}},

                                             {"mov.l",{A_INC_M,A_REG_N},{HEX_6,REG_N,REG_M,HEX_6}},

                                            {"mov.l",{A_IND_M,A_REG_N},{HEX_6,REG_N,REG_M,HEX_2}},

                                            {"mov.l",{A_R0,A_DISP_GBR},{HEX_C,HEX_2,IMM_8BY4}},

                                                 {"mov.w",{ A_REG_M,A_IND_R0_REG_N},{HEX_0,REG_N,REG_M,HEX_5}},

                                             {"mov.w",{ A_REG_M,A_DEC_N},{HEX_2,REG_N,REG_M,HEX_5}},

                                            {"mov.w",{ A_REG_M,A_IND_N},{HEX_2,REG_N,REG_M,HEX_1}},

                                                {"mov.w",{A_DISP_REG_M,A_R0},{HEX_8,HEX_5,REG_M,IMM_4BY2}},

                                            {"mov.w",{A_DISP_GBR,A_R0},{HEX_C,HEX_5,IMM_8BY2}},

                                                {"mov.w",{A_DISP_PC,A_REG_N},{HEX_9,REG_N,PCRELIMM_8BY2}},

                                                 {"mov.w",{A_IND_R0_REG_M,A_REG_N},{HEX_0,REG_N,REG_M,HEX_D}},

                                             {"mov.w",{A_INC_M,A_REG_N},{HEX_6,REG_N,REG_M,HEX_5}},

                                            {"mov.w",{A_IND_M,A_REG_N},{HEX_6,REG_N,REG_M,HEX_1}},

                                                {"mov.w",{A_R0,A_DISP_REG_M},{HEX_8,HEX_1,REG_M,IMM_4BY2}},

                                            {"mov.w",{A_R0,A_DISP_GBR},{HEX_C,HEX_1,IMM_8BY2}},

                                          {"mova",{A_DISP_PC,A_R0},{HEX_C,HEX_7,PCRELIMM_8BY4}},
                                          {"movca.l",{A_R0,A_IND_N},{HEX_0,REG_N,HEX_C,HEX_3}},


                                          {"movt",{A_REG_N},{HEX_0,REG_N,HEX_2,HEX_9}},

                                          {"muls.w",{ A_REG_M,A_REG_N},{HEX_2,REG_N,REG_M,HEX_F}},

                                           {"mul.l",{ A_REG_M,A_REG_N},{HEX_0,REG_N,REG_M,HEX_7}},

                                          {"mulu.w",{ A_REG_M,A_REG_N},{HEX_2,REG_N,REG_M,HEX_E}},

                                          {"neg",{ A_REG_M,A_REG_N},{HEX_6,REG_N,REG_M,HEX_B}},

                                          {"negc",{ A_REG_M,A_REG_N},{HEX_6,REG_N,REG_M,HEX_A}},

                                          {"nop",{0},{HEX_0,HEX_0,HEX_0,HEX_9}},

                                          {"not",{ A_REG_M,A_REG_N},{HEX_6,REG_N,REG_M,HEX_7}},
                                          {"ocbi",{A_IND_N},{HEX_0,REG_N,HEX_9,HEX_3}},

                                          {"ocbp",{A_IND_N},{HEX_0,REG_N,HEX_A,HEX_3}},

                                          {"ocbwb",{A_IND_N},{HEX_0,REG_N,HEX_B,HEX_3}},


                                          {"or",{A_IMM,A_R0},{HEX_C,HEX_B,IMM_8}},

                                          {"or",{ A_REG_M,A_REG_N},{HEX_2,REG_N,REG_M,HEX_B}},

                                           {"or.b",{A_IMM,A_R0_GBR},{HEX_C,HEX_F,IMM_8}},

                                          {"pref",{A_IND_N},{HEX_0,REG_N,HEX_8,HEX_3}},

                                          {"rotcl",{A_REG_N},{HEX_4,REG_N,HEX_2,HEX_4}},

                                          {"rotcr",{A_REG_N},{HEX_4,REG_N,HEX_2,HEX_5}},

                                          {"rotl",{A_REG_N},{HEX_4,REG_N,HEX_0,HEX_4}},

                                          {"rotr",{A_REG_N},{HEX_4,REG_N,HEX_0,HEX_5}},

                                          {"rte",{0},{HEX_0,HEX_0,HEX_2,HEX_B}},

                                          {"rts",{0},{HEX_0,HEX_0,HEX_0,HEX_B}},

                                          {"sets",{0},{HEX_0,HEX_0,HEX_5,HEX_8}},
                                          {"sett",{0},{HEX_0,HEX_0,HEX_1,HEX_8}},

                                          {"shad",{ A_REG_M,A_REG_N},{HEX_4,REG_N,REG_M,HEX_C}},

                                          {"shld",{ A_REG_M,A_REG_N},{HEX_4,REG_N,REG_M,HEX_D}},

                                          {"shal",{A_REG_N},{HEX_4,REG_N,HEX_2,HEX_0}},

                                          {"shar",{A_REG_N},{HEX_4,REG_N,HEX_2,HEX_1}},

                                          {"shll",{A_REG_N},{HEX_4,REG_N,HEX_0,HEX_0}},

                                          {"shll16",{A_REG_N},{HEX_4,REG_N,HEX_2,HEX_8}},

                                          {"shll2",{A_REG_N},{HEX_4,REG_N,HEX_0,HEX_8}},

                                          {"shll8",{A_REG_N},{HEX_4,REG_N,HEX_1,HEX_8}},

                                          {"shlr",{A_REG_N},{HEX_4,REG_N,HEX_0,HEX_1}},

                                          {"shlr16",{A_REG_N},{HEX_4,REG_N,HEX_2,HEX_9}},

                                          {"shlr2",{A_REG_N},{HEX_4,REG_N,HEX_0,HEX_9}},

                                          {"shlr8",{A_REG_N},{HEX_4,REG_N,HEX_1,HEX_9}},

                                          {"sleep",{0},{HEX_0,HEX_0,HEX_1,HEX_B}},

                                          {"stc",{A_SR,A_REG_N},{HEX_0,REG_N,HEX_0,HEX_2}},

                                          {"stc",{A_GBR,A_REG_N},{HEX_0,REG_N,HEX_1,HEX_2}},

                                          {"stc",{A_VBR,A_REG_N},{HEX_0,REG_N,HEX_2,HEX_2}},

                                          {"stc",{A_SSR,A_REG_N},{HEX_0,REG_N,HEX_3,HEX_2}},

                                          {"stc",{A_SPC,A_REG_N},{HEX_0,REG_N,HEX_4,HEX_2}},

                                          {"stc",{A_SGR,A_REG_N},{HEX_0,REG_N,HEX_6,HEX_2}},

                                          {"stc",{A_DBR,A_REG_N},{HEX_0,REG_N,HEX_7,HEX_2}},

                                          {"stc",{A_REG_B,A_REG_N},{HEX_0,REG_N,REG_B,HEX_2}},

                                          {"stc.l",{A_SR,A_DEC_N},{HEX_4,REG_N,HEX_0,HEX_3}},

                                          {"stc.l",{A_GBR,A_DEC_N},{HEX_4,REG_N,HEX_1,HEX_3}},

                                          {"stc.l",{A_VBR,A_DEC_N},{HEX_4,REG_N,HEX_2,HEX_3}},

                                          {"stc.l",{A_SSR,A_DEC_N},{HEX_4,REG_N,HEX_3,HEX_3}},

                                          {"stc.l",{A_SPC,A_DEC_N},{HEX_4,REG_N,HEX_4,HEX_3}},

                                          {"stc.l",{A_SGR,A_DEC_N},{HEX_4,REG_N,HEX_6,HEX_3}},

                                          {"stc.l",{A_DBR,A_DEC_N},{HEX_4,REG_N,HEX_7,HEX_3}},

                                              {"stc.l",{A_REG_B,A_DEC_N},{HEX_4,REG_N,REG_B,HEX_3}},

                                          {"sts",{A_MACH,A_REG_N},{HEX_0,REG_N,HEX_0,HEX_A}},

                                          {"sts",{A_MACL,A_REG_N},{HEX_0,REG_N,HEX_1,HEX_A}},

                                          {"sts",{A_PR,A_REG_N},{HEX_0,REG_N,HEX_2,HEX_A}},

                                          {"sts",{FPUL_M,A_REG_N},{HEX_0,REG_N,HEX_5,HEX_A}},

                                          {"sts",{FPSCR_M,A_REG_N},{HEX_0,REG_N,HEX_6,HEX_A}},

                                          {"sts.l",{A_MACH,A_DEC_N},{HEX_4,REG_N,HEX_0,HEX_2}},

                                          {"sts.l",{A_MACL,A_DEC_N},{HEX_4,REG_N,HEX_1,HEX_2}},

                                          {"sts.l",{A_PR,A_DEC_N},{HEX_4,REG_N,HEX_2,HEX_2}},

                                          {"sts.l",{FPUL_M,A_DEC_N},{HEX_4,REG_N,HEX_5,HEX_2}},

                                           {"sts.l",{FPSCR_M,A_DEC_N},{HEX_4,REG_N,HEX_6,HEX_2}},

                                          {"sub",{ A_REG_M,A_REG_N},{HEX_3,REG_N,REG_M,HEX_8}},

                                          {"subc",{ A_REG_M,A_REG_N},{HEX_3,REG_N,REG_M,HEX_A}},

                                          {"subv",{ A_REG_M,A_REG_N},{HEX_3,REG_N,REG_M,HEX_B}},

                                            {"swap.b",{ A_REG_M,A_REG_N},{HEX_6,REG_N,REG_M,HEX_8}},

                                            {"swap.w",{ A_REG_M,A_REG_N},{HEX_6,REG_N,REG_M,HEX_9}},

                                          {"tas.b",{A_IND_N},{HEX_4,REG_N,HEX_1,HEX_B}},

                                          {"trapa",{A_IMM},{HEX_C,HEX_3,IMM_8}},

                                          {"tst",{A_IMM,A_R0},{HEX_C,HEX_8,IMM_8}},

                                          {"tst",{ A_REG_M,A_REG_N},{HEX_2,REG_N,REG_M,HEX_8}},

                                            {"tst.b",{A_IMM,A_R0_GBR},{HEX_C,HEX_C,IMM_8}},

                                          {"xor",{A_IMM,A_R0},{HEX_C,HEX_A,IMM_8}},

                                          {"xor",{ A_REG_M,A_REG_N},{HEX_2,REG_N,REG_M,HEX_A}},

                                            {"xor.b",{A_IMM,A_R0_GBR},{HEX_C,HEX_E,IMM_8}},

                                           {"xtrct",{ A_REG_M,A_REG_N},{HEX_2,REG_N,REG_M,HEX_D}},

                                           {"mul.l",{ A_REG_M,A_REG_N},{HEX_0,REG_N,REG_M,HEX_7}},

                                          {"dt",{A_REG_N},{HEX_4,REG_N,HEX_1,HEX_0}},

                                             {"dmuls.l",{ A_REG_M,A_REG_N},{HEX_3,REG_N,REG_M,HEX_D}},

                                             {"dmulu.l",{ A_REG_M,A_REG_N},{HEX_3,REG_N,REG_M,HEX_5}},

                                               {"mac.l",{A_INC_M,A_INC_N},{HEX_0,REG_N,REG_M,HEX_F}},

                                         {"braf",{A_REG_N},{HEX_0,REG_N,HEX_2,HEX_3}},

                                         {"bsrf",{A_REG_N},{HEX_0,REG_N,HEX_0,HEX_3}},

                                         {"fabs",{FD_REG_N},{HEX_F,REG_N,HEX_5,HEX_D}},

                                              {"fadd",{F_REG_M,F_REG_N},{HEX_F,REG_N,REG_M,HEX_0}},
                                              {"fadd",{D_REG_M,D_REG_N},{HEX_F,REG_N,REG_M,HEX_0}},

                                                 {"fcmp/eq",{F_REG_M,F_REG_N},{HEX_F,REG_N,REG_M,HEX_4}},
                                                 {"fcmp/eq",{D_REG_M,D_REG_N},{HEX_F,REG_N,REG_M,HEX_4}},

                                                 {"fcmp/gt",{F_REG_M,F_REG_N},{HEX_F,REG_N,REG_M,HEX_5}},
                                                 {"fcmp/gt",{D_REG_M,D_REG_N},{HEX_F,REG_N,REG_M,HEX_5}},

                                           {"fcnvds",{D_REG_N,FPUL_M},{HEX_F,REG_N,HEX_B,HEX_D}},

                                           {"fcnvsd",{FPUL_M,D_REG_N},{HEX_F,REG_N,HEX_A,HEX_D}},

                                              {"fdiv",{F_REG_M,F_REG_N},{HEX_F,REG_N,REG_M,HEX_3}},
                                              {"fdiv",{D_REG_M,D_REG_N},{HEX_F,REG_N,REG_M,HEX_3}},

                                              {"fipr",{V_REG_M,V_REG_N},{HEX_F,REG_NM,HEX_E,HEX_D}},

                                         {"fldi0",{F_REG_N},{HEX_F,REG_N,HEX_8,HEX_D}},

                                         {"fldi1",{F_REG_N},{HEX_F,REG_N,HEX_9,HEX_D}},

                                         {"flds",{F_REG_N,FPUL_M},{HEX_F,REG_N,HEX_1,HEX_D}},

                                           {"float",{FPUL_M,FD_REG_N},{HEX_F,REG_N,HEX_2,HEX_D}},

                                                  {"fmac",{F_FR0,F_REG_M,F_REG_N},{HEX_F,REG_N,REG_M,HEX_E}},

                                              {"fmov",{F_REG_M,F_REG_N},{HEX_F,REG_N,REG_M,HEX_C}},
                                                {"fmov",{DX_REG_M,DX_REG_N},{HEX_F,REG_N,REG_M,HEX_C}},

                                             {"fmov",{A_IND_M,F_REG_N},{HEX_F,REG_N,REG_M,HEX_8}},
                                              {"fmov",{A_IND_M,DX_REG_N},{HEX_F,REG_N,REG_M,HEX_8}},

                                             {"fmov",{F_REG_M,A_IND_N},{HEX_F,REG_N,REG_M,HEX_A}},
                                              {"fmov",{DX_REG_M,A_IND_N},{HEX_F,REG_N,REG_M,HEX_A}},

                                              {"fmov",{A_INC_M,F_REG_N},{HEX_F,REG_N,REG_M,HEX_9}},
                                               {"fmov",{A_INC_M,DX_REG_N},{HEX_F,REG_N,REG_M,HEX_9}},

                                              {"fmov",{F_REG_M,A_DEC_N},{HEX_F,REG_N,REG_M,HEX_B}},
                                               {"fmov",{DX_REG_M,A_DEC_N},{HEX_F,REG_N,REG_M,HEX_B}},

                                                  {"fmov",{A_IND_R0_REG_M,F_REG_N},{HEX_F,REG_N,REG_M,HEX_6}},
                                                   {"fmov",{A_IND_R0_REG_M,DX_REG_N},{HEX_F,REG_N,REG_M,HEX_6}},

                                                  {"fmov",{F_REG_M,A_IND_R0_REG_N},{HEX_F,REG_N,REG_M,HEX_7}},
                                                   {"fmov",{DX_REG_M,A_IND_R0_REG_N},{HEX_F,REG_N,REG_M,HEX_7}},

                                                {"fmov.d",{A_IND_M,DX_REG_N},{HEX_F,REG_N,REG_M,HEX_8}},

                                                {"fmov.d",{DX_REG_M,A_IND_N},{HEX_F,REG_N,REG_M,HEX_A}},

                                                 {"fmov.d",{A_INC_M,DX_REG_N},{HEX_F,REG_N,REG_M,HEX_9}},

                                                 {"fmov.d",{DX_REG_M,A_DEC_N},{HEX_F,REG_N,REG_M,HEX_B}},

                                                     {"fmov.d",{A_IND_R0_REG_M,DX_REG_N},{HEX_F,REG_N,REG_M,HEX_6}},

                                                     {"fmov.d",{DX_REG_M,A_IND_R0_REG_N},{HEX_F,REG_N,REG_M,HEX_7}},

                                               {"fmov.s",{A_IND_M,F_REG_N},{HEX_F,REG_N,REG_M,HEX_8}},

                                               {"fmov.s",{F_REG_M,A_IND_N},{HEX_F,REG_N,REG_M,HEX_A}},

                                                {"fmov.s",{A_INC_M,F_REG_N},{HEX_F,REG_N,REG_M,HEX_9}},

                                                {"fmov.s",{F_REG_M,A_DEC_N},{HEX_F,REG_N,REG_M,HEX_B}},

                                                    {"fmov.s",{A_IND_R0_REG_M,F_REG_N},{HEX_F,REG_N,REG_M,HEX_6}},

                                                    {"fmov.s",{F_REG_M,A_IND_R0_REG_N},{HEX_F,REG_N,REG_M,HEX_7}},

                                              {"fmul",{F_REG_M,F_REG_N},{HEX_F,REG_N,REG_M,HEX_2}},
                                              {"fmul",{D_REG_M,D_REG_N},{HEX_F,REG_N,REG_M,HEX_2}},

                                          {"fneg",{FD_REG_N},{HEX_F,REG_N,HEX_4,HEX_D}},

                                          {"frchg",{0},{HEX_F,HEX_B,HEX_F,HEX_D}},

                                          {"fschg",{0},{HEX_F,HEX_3,HEX_F,HEX_D}},

                                          {"fsqrt",{FD_REG_N},{HEX_F,REG_N,HEX_6,HEX_D}},

                                         {"fsts",{FPUL_M,F_REG_N},{HEX_F,REG_N,HEX_0,HEX_D}},

                                              {"fsub",{F_REG_M,F_REG_N},{HEX_F,REG_N,REG_M,HEX_1}},
                                              {"fsub",{D_REG_M,D_REG_N},{HEX_F,REG_N,REG_M,HEX_1}},

                                          {"ftrc",{FD_REG_N,FPUL_M},{HEX_F,REG_N,HEX_3,HEX_D}},

                                             {"ftrv",{XMTRX_M4,V_REG_N},{HEX_F,REG_NM,HEX_F,HEX_D}},

{ 0 }
};

#endif
