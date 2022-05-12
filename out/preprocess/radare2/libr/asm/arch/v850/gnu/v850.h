# 0 "project/radare2/libr/asm/arch/v850/gnu/v850.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/libr/asm/arch/v850/gnu/v850.h"
# 31 "project/radare2/libr/asm/arch/v850/gnu/v850.h"
struct v850_opcode
{

  const char *name;



  unsigned long opcode;





  unsigned long mask;




  unsigned char operands[8];


  unsigned int memop;





  unsigned int processors;
};
# 102 "project/radare2/libr/asm/arch/v850/gnu/v850.h"
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
# 242 "project/radare2/libr/asm/arch/v850/gnu/v850.h"
extern int v850_msg_is_out_of_range (const char *);
