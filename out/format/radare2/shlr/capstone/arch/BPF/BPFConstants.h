# 1 "project/radare2/shlr/capstone/arch/BPF/BPFConstants.h"





#ifndef CS_BPF_CONSTANTS_H
#define CS_BPF_CONSTANTS_H 

#define BPF_CLASS(code) ((code) & 0x7)


#define BPF_CLASS_LD 0x00
#define BPF_CLASS_LDX 0x01
#define BPF_CLASS_ST 0x02
#define BPF_CLASS_STX 0x03
#define BPF_CLASS_ALU 0x04
#define BPF_CLASS_JMP 0x05
#define BPF_CLASS_RET 0x06
#define BPF_CLASS_MISC 0x07
#define BPF_CLASS_ALU64 0x07

#define BPF_OP(code) ((code) & 0xf0)


#define BPF_ALU_ADD 0x00
#define BPF_ALU_SUB 0x10
#define BPF_ALU_MUL 0x20
#define BPF_ALU_DIV 0x30
#define BPF_ALU_OR 0x40
#define BPF_ALU_AND 0x50
#define BPF_ALU_LSH 0x60
#define BPF_ALU_RSH 0x70
#define BPF_ALU_NEG 0x80
#define BPF_ALU_MOD 0x90
#define BPF_ALU_XOR 0xa0
#define BPF_ALU_MOV 0xb0
#define BPF_ALU_ARSH 0xc0
#define BPF_ALU_END 0xd0


#define BPF_JUMP_JA 0x00
#define BPF_JUMP_JEQ 0x10
#define BPF_JUMP_JGT 0x20
#define BPF_JUMP_JGE 0x30
#define BPF_JUMP_JSET 0x40
#define BPF_JUMP_JNE 0x50
#define BPF_JUMP_JSGT 0x60
#define BPF_JUMP_JSGE 0x70
#define BPF_JUMP_CALL 0x80
#define BPF_JUMP_EXIT 0x90
#define BPF_JUMP_JLT 0xa0
#define BPF_JUMP_JLE 0xb0
#define BPF_JUMP_JSLT 0xc0
#define BPF_JUMP_JSLE 0xd0

#define BPF_SRC(code) ((code) & 0x08)
#define BPF_RVAL(code) ((code) & 0x18)

#define BPF_SRC_K 0x00
#define BPF_SRC_X 0x08
#define BPF_SRC_A 0x10

#define BPF_SRC_LITTLE BPF_SRC_K
#define BPF_SRC_BIG BPF_SRC_X

#define BPF_SIZE(code) ((code) & 0x18)

#define BPF_SIZE_W 0x00
#define BPF_SIZE_H 0x08
#define BPF_SIZE_B 0x10
#define BPF_SIZE_DW 0x18

#define BPF_MODE(code) ((code) & 0xe0)

#define BPF_MODE_IMM 0x00
#define BPF_MODE_ABS 0x20
#define BPF_MODE_IND 0x40
#define BPF_MODE_MEM 0x60
#define BPF_MODE_LEN 0x80
#define BPF_MODE_MSH 0xa0
#define BPF_MODE_XADD 0xc0

#define BPF_MISCOP(code) ((code) & 0x80)

#define BPF_MISCOP_TAX 0x00
#define BPF_MISCOP_TXA 0x80

#endif
