# 0 "project/radare2/libr/asm/arch/amd29k/amd29k_internal.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/libr/asm/arch/amd29k/amd29k_internal.h"



typedef void (*amd29k_decode)(amd29k_instr_t* instruction, const unsigned char* buffer);
typedef void (*amd29k_encode)(amd29k_instr_t* instruction, char* assembly);

typedef struct amd29k_instruction_s {
 const char* cpu;
 const char* mnemonic;
 ut64 op_type ;
 ut8 mask ;
 amd29k_decode decode ;
 amd29k_encode encode ;
} amd29k_instruction_t;

enum amd29k_types {
 AMD29K_TYPE_UNK = 0,
 AMD29K_TYPE_REG,
 AMD29K_TYPE_IMM,
 AMD29K_TYPE_JMP,
};