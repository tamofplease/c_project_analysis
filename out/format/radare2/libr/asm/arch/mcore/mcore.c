# 1 "project/radare2/libr/asm/arch/mcore/mcore.c"
#include "mcore.h"

#include <r_anal.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


#define MCORE_INSTR_ALIGN (2)


static const char* mcore_ctrl_registers[] = {
 "psr",
 "vbr",
 "epsr",
 "fpsr",
 "epc",
 "fpc",
 "ss0",
 "ss1",
 "ss2",
 "ss3",
 "ss4",
 "gcr",
 "gsr",
 "cpidr",
 "dcsr",
 "cwr",
 "cr16",
 "cfr",
 "ccr",
 "capr",
 "pacr",
 "prsr",
 "cr22",
 "cr23",
 "cr24",
 "cr25",
 "cr26",
 "cr27",
 "cr28",
 "cr29",
 "cr30",
 "cr31",
 "unknown"
};
# 71 "project/radare2/libr/asm/arch/mcore/mcore.c"
#define INVALID_FIELD (0)

typedef struct mcore_mask {
 ut16 mask;
 ut16 shift;
 ut16 type;
} mcore_mask_t;

typedef struct mcore_ops {
 const char* name;
 ut16 cpu;
 ut16 mask;
 ut64 type;
 ut16 n_args;
 mcore_mask_t args[ARGS_SIZE];
} mcore_ops_t;

ut16 load_shift[4] = { 2, 0, 1, 0 };

#define MCORE_INSTRS 265
mcore_ops_t mcore_instructions[MCORE_INSTRS] = {
 { "bkpt" , MCORE_CPU_DFLT, 0x0, R_ANAL_OP_TYPE_ILL , 0, {{0},{0},{0},{0},{0}} },
 { "sync" , MCORE_CPU_DFLT, 0x1, R_ANAL_OP_TYPE_SYNC , 0, {{0},{0},{0},{0},{0}} },
 { "rte" , MCORE_CPU_DFLT, 0x2, R_ANAL_OP_TYPE_RET , 0, {{0},{0},{0},{0},{0}} },
 { "rfi" , MCORE_CPU_DFLT, 0x3, R_ANAL_OP_TYPE_RET , 0, {{0},{0},{0},{0},{0}} },
 { "stop" , MCORE_CPU_DFLT, 0x4, R_ANAL_OP_TYPE_NULL , 0, {{0},{0},{0},{0},{0}} },
 { "wait" , MCORE_CPU_DFLT, 0x5, R_ANAL_OP_TYPE_NULL , 0, {{0},{0},{0},{0},{0}} },
 { "doze" , MCORE_CPU_DFLT, 0x6, R_ANAL_OP_TYPE_NULL , 0, {{0},{0},{0},{0},{0}} },
 { "idly4" , MCORE_CPU_DFLT, 0x7, R_ANAL_OP_TYPE_NULL , 0, {{0},{0},{0},{0},{0}} },

 { "trap" , MCORE_CPU_DFLT, 0xb, R_ANAL_OP_TYPE_NULL , 1, {{ 0x3, 0, TYPE_IMM },{0},{0},{0},{0}} },

 { "mvtc" , MCORE_CPU_510E, 0xc, R_ANAL_OP_TYPE_NULL , 0, {{0},{0},{0},{0},{0}} },

 { "cprc" , MCORE_CPU_DFLT, 0xd, R_ANAL_OP_TYPE_NULL , 0, {{0},{0},{0},{0},{0}} },


 { "cpseti" , MCORE_CPU_DFLT, 0x1f, R_ANAL_OP_TYPE_NULL , 1, {{ 0xf, 0, TYPE_IMM },{0},{0},{0},{0}} },

 { "mvc" , MCORE_CPU_DFLT, 0x2f, R_ANAL_OP_TYPE_NULL , 1, {{ 0xf, 0, TYPE_REG },{0},{0},{0},{0}} },

 { "mvcv" , MCORE_CPU_DFLT, 0x3f, R_ANAL_OP_TYPE_NULL , 1, {{ 0xf, 0, TYPE_REG },{0},{0},{0},{0}} },

 { "ldq" , MCORE_CPU_DFLT, 0x4f, R_ANAL_OP_TYPE_NULL , 1, {{ 0xf, 0, TYPE_REG },{0},{0},{0},{0}} },

 { "stq" , MCORE_CPU_DFLT, 0x5f, R_ANAL_OP_TYPE_NULL , 1, {{ 0xf, 0, TYPE_REG },{0},{0},{0},{0}} },

 { "ldm" , MCORE_CPU_DFLT, 0x6f, R_ANAL_OP_TYPE_NULL , 1, {{ 0xf, 0, TYPE_REG },{0},{0},{0},{0}} },

 { "stm" , MCORE_CPU_DFLT, 0x7f, R_ANAL_OP_TYPE_NULL , 1, {{ 0xf, 0, TYPE_REG },{0},{0},{0},{0}} },

 { "dect" , MCORE_CPU_DFLT, 0x8f, R_ANAL_OP_TYPE_NULL , 1, {{ 0xf, 0, TYPE_REG },{0},{0},{0},{0}} },

 { "decf" , MCORE_CPU_DFLT, 0x9f, R_ANAL_OP_TYPE_NULL , 1, {{ 0xf, 0, TYPE_REG },{0},{0},{0},{0}} },

 { "inct" , MCORE_CPU_DFLT, 0xaf, R_ANAL_OP_TYPE_NULL , 1, {{ 0xf, 0, TYPE_REG },{0},{0},{0},{0}} },

 { "incf" , MCORE_CPU_DFLT, 0xbf, R_ANAL_OP_TYPE_NULL , 1, {{ 0xf, 0, TYPE_REG },{0},{0},{0},{0}} },

 { "jmp" , MCORE_CPU_DFLT, 0xcf, R_ANAL_OP_TYPE_CALL , 1, {{ 0xf, 0, TYPE_REG },{0},{0},{0},{0}} },

 { "jsr" , MCORE_CPU_DFLT, 0xdf, R_ANAL_OP_TYPE_RET , 1, {{ 0xf, 0, TYPE_REG },{0},{0},{0},{0}} },

 { "ff1" , MCORE_CPU_DFLT, 0xef, R_ANAL_OP_TYPE_NULL , 1, {{ 0xf, 0, TYPE_REG },{0},{0},{0},{0}} },

 { "brev" , MCORE_CPU_DFLT, 0xff, R_ANAL_OP_TYPE_NULL , 1, {{ 0xf, 0, TYPE_REG },{0},{0},{0},{0}} },

 { "xtrb3" , MCORE_CPU_DFLT, 0x10f, R_ANAL_OP_TYPE_NULL , 1, {{ 0xf, 0, TYPE_REG },{0},{0},{0},{0}} },

 { "xtrb2" , MCORE_CPU_DFLT, 0x11f, R_ANAL_OP_TYPE_NULL , 1, {{ 0xf, 0, TYPE_REG },{0},{0},{0},{0}} },

 { "xtrb1" , MCORE_CPU_DFLT, 0x12f, R_ANAL_OP_TYPE_NULL , 1, {{ 0xf, 0, TYPE_REG },{0},{0},{0},{0}} },

 { "xtrb0" , MCORE_CPU_DFLT, 0x13f, R_ANAL_OP_TYPE_NULL , 1, {{ 0xf, 0, TYPE_REG },{0},{0},{0},{0}} },

 { "zextb" , MCORE_CPU_DFLT, 0x14f, R_ANAL_OP_TYPE_NULL , 2, {{ 0xf, 0, TYPE_REG },{ 0xf, 0, TYPE_REG },{0},{0},{0}} },

 { "sextb" , MCORE_CPU_DFLT, 0x15f, R_ANAL_OP_TYPE_NULL , 2, {{ 0xf, 0, TYPE_REG },{ 0xf, 0, TYPE_REG },{0},{0},{0}} },

 { "zexth" , MCORE_CPU_DFLT, 0x16f, R_ANAL_OP_TYPE_NULL , 2, {{ 0xf, 0, TYPE_REG },{ 0xf, 0, TYPE_REG },{0},{0},{0}} },

 { "sexth" , MCORE_CPU_DFLT, 0x17f, R_ANAL_OP_TYPE_NULL , 2, {{ 0xf, 0, TYPE_REG },{ 0xf, 0, TYPE_REG },{0},{0},{0}} },

 { "declt" , MCORE_CPU_DFLT, 0x18f, R_ANAL_OP_TYPE_NULL , 1, {{ 0xf, 0, TYPE_REG },{0},{0},{0},{0}} },

 { "declt" , MCORE_CPU_DFLT, 0x19f, R_ANAL_OP_TYPE_NULL , 1, {{ 0xf, 0, TYPE_REG },{0},{0},{0},{0}} },

 { "decgt" , MCORE_CPU_DFLT, 0x1af, R_ANAL_OP_TYPE_NULL , 1, {{ 0xf, 0, TYPE_REG },{0},{0},{0},{0}} },

 { "decne" , MCORE_CPU_DFLT, 0x1bf, R_ANAL_OP_TYPE_NULL , 1, {{ 0xf, 0, TYPE_REG },{0},{0},{0},{0}} },

 { "clrt" , MCORE_CPU_DFLT, 0x1cf, R_ANAL_OP_TYPE_NULL , 1, {{ 0xf, 0, TYPE_REG },{0},{0},{0},{0}} },

 { "clrf" , MCORE_CPU_DFLT, 0x1df, R_ANAL_OP_TYPE_NULL , 1, {{ 0xf, 0, TYPE_REG },{0},{0},{0},{0}} },

 { "abs" , MCORE_CPU_DFLT, 0x1ef, R_ANAL_OP_TYPE_NULL , 1, {{ 0xf, 0, TYPE_REG },{0},{0},{0},{0}} },

 { "not" , MCORE_CPU_DFLT, 0x1ff, R_ANAL_OP_TYPE_NULL , 1, {{ 0xf, 0, TYPE_REG },{0},{0},{0},{0}} },

 { "movt" , MCORE_CPU_DFLT, 0x2ff, R_ANAL_OP_TYPE_NULL , 2, {{ 0xf, 0, TYPE_REG },{ 0xf0, 4, TYPE_REG },{0},{0},{0}} },

 { "mult" , MCORE_CPU_DFLT, 0x3ff, R_ANAL_OP_TYPE_NULL , 2, {{ 0xf, 0, TYPE_REG },{ 0xf0, 4, TYPE_REG },{0},{0},{0}} },

 { "subu" , MCORE_CPU_DFLT, 0x5ff, R_ANAL_OP_TYPE_NULL , 2, {{ 0xf, 0, TYPE_REG },{ 0xf0, 4, TYPE_REG },{0},{0},{0}} },

 { "addc" , MCORE_CPU_DFLT, 0x6ff, R_ANAL_OP_TYPE_NULL , 2, {{ 0xf, 0, TYPE_REG },{ 0xf0, 4, TYPE_REG },{0},{0},{0}} },

 { "subc" , MCORE_CPU_DFLT, 0x7ff, R_ANAL_OP_TYPE_NULL , 2, {{ 0xf, 0, TYPE_REG },{ 0xf0, 4, TYPE_REG },{0},{0},{0}} },

 { "cprgr" , MCORE_CPU_DFLT, 0x9ff, R_ANAL_OP_TYPE_NULL , 2, {{ 0xf, 0, TYPE_REG },{ 0x1f0, 4, TYPE_REG },{0},{0},{0}} },

 { "movf" , MCORE_CPU_DFLT, 0xaff, R_ANAL_OP_TYPE_NULL , 2, {{ 0xf, 0, TYPE_REG },{ 0xf0, 4, TYPE_REG },{0},{0},{0}} },

 { "lsr" , MCORE_CPU_DFLT, 0xbff, R_ANAL_OP_TYPE_NULL , 2, {{ 0xf, 0, TYPE_REG },{ 0xf0, 4, TYPE_REG },{0},{0},{0}} },

 { "cmphs" , MCORE_CPU_DFLT, 0xbff, R_ANAL_OP_TYPE_NULL , 2, {{ 0xf, 0, TYPE_REG },{ 0xf0, 4, TYPE_REG },{0},{0},{0}} },

 { "cmplt" , MCORE_CPU_DFLT, 0xdff, R_ANAL_OP_TYPE_NULL , 2, {{ 0xf, 0, TYPE_REG },{ 0xf0, 4, TYPE_REG },{0},{0},{0}} },

 { "tst" , MCORE_CPU_DFLT, 0xeff, R_ANAL_OP_TYPE_NULL , 2, {{ 0xf, 0, TYPE_REG },{ 0xf0, 4, TYPE_REG },{0},{0},{0}} },

 { "cmpne" , MCORE_CPU_DFLT, 0xfff, R_ANAL_OP_TYPE_NULL , 2, {{ 0xf, 0, TYPE_REG },{ 0xf0, 4, TYPE_REG },{0},{0},{0}} },

 { "mfcr" , MCORE_CPU_DFLT, 0x11ff, R_ANAL_OP_TYPE_NULL , 2, {{ 0xf, 0, TYPE_REG },{ 0x1f0, 4, TYPE_CTRL},{0},{0},{0}} },

 { "psrclr" , MCORE_CPU_DFLT, 0x11f7, R_ANAL_OP_TYPE_NULL , 1, {{ 0x7, 0, TYPE_REG },{0},{0},{0},{0}} },

 { "psrset" , MCORE_CPU_DFLT, 0x11ff, R_ANAL_OP_TYPE_NULL , 1, {{ 0x7, 0, TYPE_REG },{0},{0},{0},{0}} },

 { "mov" , MCORE_CPU_DFLT, 0x12ff, R_ANAL_OP_TYPE_NULL , 2, {{ 0xf, 0, TYPE_REG },{ 0xf0, 4, TYPE_REG },{0},{0},{0}} },

 { "bgenr" , MCORE_CPU_DFLT, 0x13ff, R_ANAL_OP_TYPE_NULL , 2, {{ 0xf, 0, TYPE_REG },{ 0xf0, 4, TYPE_REG },{0},{0},{0}} },

 { "rsub" , MCORE_CPU_DFLT, 0x14ff, R_ANAL_OP_TYPE_NULL , 2, {{ 0xf, 0, TYPE_REG },{ 0xf0, 4, TYPE_REG },{0},{0},{0}} },

 { "lxw" , MCORE_CPU_DFLT, 0x15ff, R_ANAL_OP_TYPE_NULL , 2, {{ 0xf, 0, TYPE_REG },{ 0xf0, 4, TYPE_REG },{0},{0},{0}} },

 { "and" , MCORE_CPU_DFLT, 0x16ff, R_ANAL_OP_TYPE_NULL , 2, {{ 0xf, 0, TYPE_REG },{ 0xf0, 4, TYPE_REG },{0},{0},{0}} },

 { "xor" , MCORE_CPU_DFLT, 0x17ff, R_ANAL_OP_TYPE_NULL , 2, {{ 0xf, 0, TYPE_REG },{ 0xf0, 4, TYPE_REG },{0},{0},{0}} },

 { "mtcr" , MCORE_CPU_DFLT, 0x11ff, R_ANAL_OP_TYPE_NULL , 2, {{ 0xf, 0, TYPE_REG },{ 0x1f0, 4, TYPE_CTRL},{0},{0},{0}} },

 { "asr" , MCORE_CPU_DFLT, 0x1aff, R_ANAL_OP_TYPE_NULL , 2, {{ 0xf, 0, TYPE_REG },{ 0xf0, 4, TYPE_REG },{0},{0},{0}} },

 { "lsl" , MCORE_CPU_DFLT, 0x1bff, R_ANAL_OP_TYPE_NULL , 2, {{ 0xf, 0, TYPE_REG },{ 0xf0, 4, TYPE_REG },{0},{0},{0}} },

 { "addu" , MCORE_CPU_DFLT, 0x1cff, R_ANAL_OP_TYPE_NULL , 2, {{ 0xf, 0, TYPE_REG },{ 0xf0, 4, TYPE_REG },{0},{0},{0}} },

 { "lxh" , MCORE_CPU_DFLT, 0x1dff, R_ANAL_OP_TYPE_NULL , 2, {{ 0xf, 0, TYPE_REG },{ 0xf0, 4, TYPE_REG },{0},{0},{0}} },

 { "or" , MCORE_CPU_DFLT, 0x1eff, R_ANAL_OP_TYPE_NULL , 2, {{ 0xf, 0, TYPE_REG },{ 0xf0, 4, TYPE_REG },{0},{0},{0}} },

 { "andn" , MCORE_CPU_DFLT, 0x1fff, R_ANAL_OP_TYPE_NULL , 2, {{ 0xf, 0, TYPE_REG },{ 0xf0, 4, TYPE_REG },{0},{0},{0}} },

 { "addi" , MCORE_CPU_DFLT, 0x21ff, R_ANAL_OP_TYPE_NULL , 3, {{ 0xf, 0, TYPE_REG },{ 0xf, 0, TYPE_REG },{ 0x1f0, 4, TYPE_IMM },{0},{0}} },

 { "cmplti" , MCORE_CPU_DFLT, 0x23ff, R_ANAL_OP_TYPE_NULL , 2, {{ 0xf, 0, TYPE_REG },{ 0x1f0, 4, TYPE_IMM },{0},{0},{0}} },

 { "subi" , MCORE_CPU_DFLT, 0x25ff, R_ANAL_OP_TYPE_NULL , 2, {{ 0xf, 0, TYPE_REG },{ 0x1f0, 4, TYPE_IMM },{0},{0},{0}} },

 { "cpwgr" , MCORE_CPU_DFLT, 0x27ff, R_ANAL_OP_TYPE_NULL , 2, {{ 0xf, 0, TYPE_REG },{ 0x1f0, 4, TYPE_CTRL},{0},{0},{0}} },

 { "rsubi" , MCORE_CPU_DFLT, 0x29ff, R_ANAL_OP_TYPE_NULL , 2, {{ 0xf, 0, TYPE_REG },{ 0x1f0, 4, TYPE_IMM },{0},{0},{0}} },

 { "cmpnei" , MCORE_CPU_DFLT, 0x2bff, R_ANAL_OP_TYPE_NULL , 2, {{ 0xf, 0, TYPE_REG },{ 0x1f0, 4, TYPE_IMM },{0},{0},{0}} },

 { "bmaski" , MCORE_CPU_DFLT, 0x2c0f, R_ANAL_OP_TYPE_NULL , 1, {{ 0xf, 0, TYPE_REG },{0},{0},{0},{0}} },

 { "divu" , MCORE_CPU_DFLT, 0x2c1f, R_ANAL_OP_TYPE_NULL , 1, {{ 0xf, 0, TYPE_REG },{0},{0},{0},{0}} },

 { "mflos" , MCORE_CPU_610E, 0x2c2f, R_ANAL_OP_TYPE_NULL , 1, {{ 0xf, 0, TYPE_REG },{0},{0},{0},{0}} },

 { "mfhis" , MCORE_CPU_610E, 0x2c2f, R_ANAL_OP_TYPE_NULL , 1, {{ 0xf, 0, TYPE_REG },{0},{0},{0},{0}} },

 { "mtlo" , MCORE_CPU_620 , 0x2c4f, R_ANAL_OP_TYPE_NULL , 1, {{ 0xf, 0, TYPE_REG },{0},{0},{0},{0}} },

 { "mthi" , MCORE_CPU_620 , 0x2c5f, R_ANAL_OP_TYPE_NULL , 1, {{ 0xf, 0, TYPE_REG },{0},{0},{0},{0}} },

 { "mtlo" , MCORE_CPU_620 , 0x2c6f, R_ANAL_OP_TYPE_NULL , 1, {{ 0xf, 0, TYPE_REG },{0},{0},{0},{0}} },

 { "mthi" , MCORE_CPU_620 , 0x2c7f, R_ANAL_OP_TYPE_NULL , 1, {{ 0xf, 0, TYPE_REG },{0},{0},{0},{0}} },

 { "bmaski" , MCORE_CPU_DFLT, 0x2cff, R_ANAL_OP_TYPE_NULL , 2, {{ 0xf, 0, TYPE_REG },{ 0x70, 4, TYPE_IMM },{0},{0},{0}} },

 { "bmaski" , MCORE_CPU_DFLT, 0x2dff, R_ANAL_OP_TYPE_NULL , 2, {{ 0xf, 0, TYPE_REG },{ 0xf0, 4, TYPE_IMM },{0},{0},{0}} },

 { "andi" , MCORE_CPU_DFLT, 0x2fff, R_ANAL_OP_TYPE_NULL , 2, {{ 0xf, 0, TYPE_REG },{ 0x1f0, 4, TYPE_IMM },{0},{0},{0}} },

 { "bclri" , MCORE_CPU_DFLT, 0x31ff, R_ANAL_OP_TYPE_NULL , 2, {{ 0xf, 0, TYPE_REG },{ 0x1f0, 4, TYPE_IMM },{0},{0},{0}} },

 { "cpwir" , MCORE_CPU_DFLT, 0x320f, R_ANAL_OP_TYPE_NULL , 1, {{ 0xf, 0, TYPE_REG },{0},{0},{0},{0}} },

 { "divs" , MCORE_CPU_DFLT, 0x321f, R_ANAL_OP_TYPE_NULL , 1, {{ 0xf, 0, TYPE_REG },{0},{0},{0},{0}} },

 { "cprsr" , MCORE_CPU_DFLT, 0x322f, R_ANAL_OP_TYPE_NULL , 1, {{ 0xf, 0, TYPE_REG },{0},{0},{0},{0}} },

 { "cpwsr" , MCORE_CPU_DFLT, 0x323f, R_ANAL_OP_TYPE_NULL , 1, {{ 0xf, 0, TYPE_REG },{0},{0},{0},{0}} },




 { "bgeni" , MCORE_CPU_DFLT, 0x327f, R_ANAL_OP_TYPE_NULL , 1, {{ 0xf, 0, TYPE_REG },{0},{0},{0},{0}} },

 { "bgeni" , MCORE_CPU_DFLT, 0x32ff, R_ANAL_OP_TYPE_NULL , 2, {{ 0xf, 0, TYPE_REG },{ 0x70, 4, TYPE_IMM },{0},{0},{0}} },

 { "bgeni" , MCORE_CPU_DFLT, 0x33ff, R_ANAL_OP_TYPE_NULL , 2, {{ 0xf, 0, TYPE_REG },{ 0xf0, 4, TYPE_IMM },{0},{0},{0}} },

 { "bgeni" , MCORE_CPU_DFLT, 0x35ff, R_ANAL_OP_TYPE_NULL , 2, {{ 0xf, 0, TYPE_REG },{ 0x1f0, 4, TYPE_IMM },{0},{0},{0}} },

 { "btsti" , MCORE_CPU_DFLT, 0x37ff, R_ANAL_OP_TYPE_NULL , 2, {{ 0xf, 0, TYPE_REG },{ 0x1f0, 4, TYPE_IMM },{0},{0},{0}} },

 { "xsr" , MCORE_CPU_DFLT, 0x380f, R_ANAL_OP_TYPE_NULL , 1, {{ 0xf, 0, TYPE_REG },{0},{0},{0},{0}} },

 { "rotli" , MCORE_CPU_DFLT, 0x39ff, R_ANAL_OP_TYPE_NULL , 2, {{ 0xf, 0, TYPE_REG },{ 0x1f0, 4, TYPE_IMM },{0},{0},{0}} },

 { "asrc" , MCORE_CPU_DFLT, 0x3a0f, R_ANAL_OP_TYPE_NULL , 1, {{ 0xf, 0, TYPE_REG },{0},{0},{0},{0}} },

 { "asri" , MCORE_CPU_DFLT, 0x3bff, R_ANAL_OP_TYPE_NULL , 2, {{ 0xf, 0, TYPE_REG },{ 0x1f0, 4, TYPE_IMM },{0},{0},{0}} },

 { "lslc" , MCORE_CPU_DFLT, 0x3c0f, R_ANAL_OP_TYPE_NULL , 1, {{ 0xf, 0, TYPE_REG },{0},{0},{0},{0}} },

 { "lsli" , MCORE_CPU_DFLT, 0x3dff, R_ANAL_OP_TYPE_NULL , 2, {{ 0xf, 0, TYPE_REG },{ 0x1f0, 4, TYPE_IMM },{0},{0},{0}} },
# 320 "project/radare2/libr/asm/arch/mcore/mcore.c"
 { "movi" , MCORE_CPU_DFLT, 0x67ff, R_ANAL_OP_TYPE_NULL , 2, {{ 0xf, 0, TYPE_REG },{ 0x7f0, 4, TYPE_IMM },{0},{0},{0}} },
# 329 "project/radare2/libr/asm/arch/mcore/mcore.c"
 { "cpwcr" , MCORE_CPU_DFLT, 0x6fff, R_ANAL_OP_TYPE_NULL , 2, {{ 0x7, 0, TYPE_REG },{ 0xf8, 4, TYPE_IMM },{0},{0},{0}} },

 { "jmpi" , MCORE_CPU_DFLT, 0x70ff, R_ANAL_OP_TYPE_JMP , 2, {{ 0xff, 0, TYPE_JMP },{0},{0},{0},{0}} },

 { "lrw" , MCORE_CPU_DFLT, 0x7fff, R_ANAL_OP_TYPE_LOAD , 2, {{ 0xff, 0, TYPE_MEM },{ 0xf00, 8, TYPE_REG },{0},{0},{0}} },

 { "jsri" , MCORE_CPU_DFLT, 0x7fff, R_ANAL_OP_TYPE_CALL , 1, {{ 0xff, 0, TYPE_JMPI},{0},{0},{0},{0}} },

 { "ld.w" , MCORE_CPU_DFLT, 0x8fff, R_ANAL_OP_TYPE_LOAD , 4, {{ 0xf, 0, TYPE_NONE},{ 0xf0, 4, TYPE_NONE},{ 0xf00, 8, TYPE_NONE},{ 0x6000, 13, TYPE_NONE},{0}} },

 { "st.w" , MCORE_CPU_DFLT, 0x9fff, R_ANAL_OP_TYPE_STORE, 4, {{ 0xf, 0, TYPE_NONE},{ 0xf0, 4, TYPE_NONE},{ 0xf00, 8, TYPE_NONE},{ 0x6000, 13, TYPE_NONE},{0}} },

 { "ld.b" , MCORE_CPU_DFLT, 0xafff, R_ANAL_OP_TYPE_LOAD , 4, {{ 0xf, 0, TYPE_NONE},{ 0xf0, 4, TYPE_NONE},{ 0xf00, 8, TYPE_NONE},{ 0x6000, 13, TYPE_NONE},{0}} },

 { "st.b" , MCORE_CPU_DFLT, 0xbfff, R_ANAL_OP_TYPE_STORE, 4, {{ 0xf, 0, TYPE_NONE},{ 0xf0, 4, TYPE_NONE},{ 0xf00, 8, TYPE_NONE},{ 0x6000, 13, TYPE_NONE},{0}} },

 { "ld.h" , MCORE_CPU_DFLT, 0xcfff, R_ANAL_OP_TYPE_LOAD , 4, {{ 0xf, 0, TYPE_NONE},{ 0xf0, 4, TYPE_NONE},{ 0xf00, 8, TYPE_NONE},{ 0x6000, 13, TYPE_NONE},{0}} },

 { "st.h" , MCORE_CPU_DFLT, 0xdfff, R_ANAL_OP_TYPE_STORE, 4, {{ 0xf, 0, TYPE_NONE},{ 0xf0, 4, TYPE_NONE},{ 0xf00, 8, TYPE_NONE},{ 0x6000, 13, TYPE_NONE},{0}} },

 { "bt" , MCORE_CPU_DFLT, 0xe7ff, R_ANAL_OP_TYPE_CJMP , 1, {{ 0x7ff, 0, TYPE_JMP},{0},{0},{0},{0}} },

 { "bf" , MCORE_CPU_DFLT, 0xefff, R_ANAL_OP_TYPE_CJMP , 1, {{ 0x7ff, 0, TYPE_JMP},{0},{0},{0},{0}} },

 { "br" , MCORE_CPU_DFLT, 0xf7ff, R_ANAL_OP_TYPE_CJMP , 1, {{ 0x7ff, 0, TYPE_JMP},{0},{0},{0},{0}} },

 { "bsr" , MCORE_CPU_DFLT, 0xffff, R_ANAL_OP_TYPE_CALL , 1, {{ 0x7ff, 0, TYPE_JMP},{0},{0},{0},{0}} },
};

static mcore_t *find_instruction(const ut8* buffer) {
 ut32 i = 0;
 mcore_ops_t *op_ptr = NULL;
 mcore_t *op = NULL;
 if (!buffer || !(op = malloc (sizeof (mcore_t)))) {
  return NULL;
 }
 memset (op, 0, sizeof (mcore_t));
 ut32 count = sizeof (mcore_instructions) / sizeof (mcore_ops_t);
 ut16 data = buffer[1] << 8;
 data |= buffer[0];
 op->bytes = data;
 op->size = MCORE_INSTR_ALIGN;
 if (data == 0) {
  op_ptr = &mcore_instructions[0];
 } else {
  for (i = 1; i < count; i++) {
   op_ptr = &mcore_instructions[i];
   ut16 masked = data & op_ptr->mask;

   if (masked == data) {
    break;
   }
  }
  if (i >= count) {
   op->name = "illegal";
   return op;
  }
 }

 if (!strncmp (op_ptr->name, "lrw", 3) && (data & 0xf00) == 0xf00) {

  if (i > 0 && (i + 1) < MCORE_INSTRS) {
   op_ptr = &mcore_instructions[i + 1];
  }
 }
 op->type = op_ptr->type;
 op->name = op_ptr->name;
 op->n_args = op_ptr->n_args;
 for (i = 0; i < op_ptr->n_args; i++) {
  op->args[i].value = (data & op_ptr->args[i].mask) >> op_ptr->args[i].shift;
  op->args[i].type = op_ptr->args[i].type;
 }
 return op;
}

int mcore_init(mcore_handle* handle, const ut8* buffer, const ut32 size) {
 if (!handle || !buffer || size < 2) {
  return 1;
 }
 handle->pos = buffer;
 handle->end = buffer + size;
 return 0;
}

mcore_t* mcore_next(mcore_handle* handle) {
 mcore_t *op = NULL;
 if (!handle || handle->pos + MCORE_INSTR_ALIGN > handle->end) {
  return NULL;
 }

 if (!op && handle->pos + 2 <= handle->end) {
  op = find_instruction (handle->pos);
 }
 handle->pos += MCORE_INSTR_ALIGN;

 return op;
}

void mcore_free(mcore_t* instr) {
 free (instr);
}

void print_loop(char* str, int size, ut64 addr, mcore_t* instr) {
 ut32 i;
 int bufsize = size;
 int add = snprintf (str, bufsize, "%s", instr->name);
 for (i = 0; add > 0 && i < instr->n_args && add < bufsize; i++) {
  if (instr->args[i].type == TYPE_REG) {
   add += snprintf (str + add, bufsize - add, " r%u,", instr->args[i].value);
  } else if (instr->args[i].type == TYPE_IMM) {
   add += snprintf (str + add, bufsize - add, " 0x%x,", instr->args[i].value);
  } else if (instr->args[i].type == TYPE_MEM) {
   add += snprintf (str + add, bufsize - add, " 0x%x(r%d),",
    instr->args[i + 1].value, instr->args[i].value);
   i++;
  } else if (instr->args[i].type == TYPE_JMPI) {
   ut64 jump = addr + ((instr->args[i].value << 2) & 0xfffffffc);
   add += snprintf (str + add, bufsize - add, " [0x%" PFMT64x"],", jump);
  } else if (instr->args[i].type == TYPE_JMP) {
   ut64 jump = addr + instr->args[i].value + 1;
   add += snprintf (str + add, bufsize - add, " 0x%" PFMT64x ",", jump);
  } else if (instr->args[i].type == TYPE_CTRL) {
   ut32 pos = instr->args[i].value;
   if (pos >= 32) {
    pos = 32;
   }
   add += snprintf (str + add, bufsize - add, " %s,", mcore_ctrl_registers[pos]);
  }
 }
 if (instr->n_args) {

  *(str + add - 1) = 0;
 }
}

void mcore_snprint(char* str, int size, ut64 addr, mcore_t* instr) {
 ut32 imm;
 if (!instr || !str) {
  return;
 }
 switch (instr->type) {
 case R_ANAL_OP_TYPE_LOAD:
 case R_ANAL_OP_TYPE_STORE:
  imm = instr->args[1].value << load_shift[instr->args[3].value];
  snprintf (str, size, "%s r%u, (r%u, 0x%x)",
   instr->name, instr->args[2].value, instr->args[0].value, imm);
  break;
 default:
  print_loop (str, size, addr, instr);
  break;
 }
}
