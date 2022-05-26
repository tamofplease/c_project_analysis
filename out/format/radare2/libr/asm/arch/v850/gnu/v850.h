# 1 "project/radare2/libr/asm/arch/v850/gnu/v850.h"
# 22 "project/radare2/libr/asm/arch/v850/gnu/v850.h"
#ifndef V850_H
#define V850_H 

#ifdef __cplusplus
extern "C" {
#endif



struct v850_opcode
{

  const char *name;



  unsigned long opcode;





  unsigned long mask;




  unsigned char operands[8];


  unsigned int memop;





  unsigned int processors;
};


#define arch_V850 0
#define arch_V850E (arch_V850 + 1)
#define arch_V850E1 (arch_V850E + 1)
#define arch_V850E2 (arch_V850E1 + 1)
#define arch_V850E2V3 (arch_V850E2 + 1)
#define arch_V850E3V5 (arch_V850E2V3 + 1)
#define arch_separator (arch_V850E3V5 + 1)

#define opt_EXTENSION (arch_separator)
#define opt_ALIAS (opt_EXTENSION + 1)


#define PROCESSOR_V850 (1 << (arch_V850))
#define PROCESSOR_V850E (1 << (arch_V850E))
#define PROCESSOR_V850E1 (1 << (arch_V850E1))
#define PROCESSOR_V850E2 (1 << (arch_V850E2))
#define PROCESSOR_V850E2V3 (1 << (arch_V850E2V3))
#define PROCESSOR_V850E3V5 (1 << (arch_V850E3V5))


#define PROCESSOR_V850E3V5_UP (PROCESSOR_V850E3V5)
#define PROCESSOR_V850E2V3_UP (PROCESSOR_V850E2V3 | PROCESSOR_V850E3V5_UP)
#define PROCESSOR_V850E2_UP (PROCESSOR_V850E2 | PROCESSOR_V850E2V3_UP)
#define PROCESSOR_V850E_UP (PROCESSOR_V850E | PROCESSOR_V850E1 | PROCESSOR_V850E2_UP)
#define PROCESSOR_ALL (PROCESSOR_V850 | PROCESSOR_V850E_UP)

#define PROCESSOR_MASK (PROCESSOR_ALL)
#define PROCESSOR_NOT_V850 (PROCESSOR_ALL & (~ PROCESSOR_V850))

#define PROCESSOR_UNKNOWN ~(PROCESSOR_MASK)


#define PROCESSOR_OPTION_EXTENSION (1 << (opt_EXTENSION))
#define PROCESSOR_OPTION_ALIAS (1 << (opt_ALIAS))

#define SET_PROCESSOR_MASK(mask,set) ((mask) = ((mask) & ~PROCESSOR_MASK) | (set))




extern const struct v850_opcode v850_opcodes[];
extern const int v850_num_opcodes;




struct v850_operand
{



  int bits;



  int shift;
# 135 "project/radare2/libr/asm/arch/v850/gnu/v850.h"
  unsigned long (* insert)
    (unsigned long instruction, long op, const char ** errmsg);
# 154 "project/radare2/libr/asm/arch/v850/gnu/v850.h"
  unsigned long (* extract) (unsigned long instruction, int * invalid);


  int flags;

  int default_reloc;
};




extern const struct v850_operand v850_operands[];




#define V850_OPERAND_REG 0x01


#define V850_OPERAND_EP 0x02


#define V850_OPERAND_SRG 0x04


#define V850E_OPERAND_REG_LIST 0x08


#define V850_OPERAND_CC 0x10

#define V850_OPERAND_FLOAT_CC 0x20


#define V850_OPERAND_VREG 0x40


#define V850E_IMMEDIATE16 0x80


#define V850E_IMMEDIATE16HI 0x100


#define V850E_IMMEDIATE23 0x200


#define V850E_IMMEDIATE32 0x400




#define V850_OPERAND_RELAX 0x800


#define V850_OPERAND_SIGNED 0x1000


#define V850_OPERAND_DISP 0x2000


#define V850_PCREL 0x4000


#define V850_REG_EVEN 0x8000


#define V850_NOT_R0 0x20000


#define V850_NOT_IMM0 0x40000


#define V850_NOT_SA 0x80000


#define V850_OPERAND_BANG 0x100000


#define V850_OPERAND_PERCENT 0x200000


#define V850_OPERAND_CACHEOP 0x400000


#define V850_OPERAND_PREFOP 0x800000


#define V850_INVERSE_PCREL 0x1000000

extern int v850_msg_is_out_of_range (const char *);

#ifdef __cplusplus
}
#endif

#endif
