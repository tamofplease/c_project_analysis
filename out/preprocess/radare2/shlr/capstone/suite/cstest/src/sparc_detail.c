# 0 "project/radare2/shlr/capstone/suite/cstest/src/sparc_detail.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/shlr/capstone/suite/cstest/src/sparc_detail.c"




# 1 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.1.sdk/usr/include/net-snmp/library/factory.h" 1 3 4
# 9 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.1.sdk/usr/include/net-snmp/library/factory.h" 3 4
    
# 9 "/Library/Developer/CommandLineTools/SDKs/MacOSX11.1.sdk/usr/include/net-snmp/library/factory.h" 3 4
   typedef void * (netsnmp_factory_produce_f)(void);
    typedef int (netsnmp_factory_produce_noalloc_f)(void *);

    typedef struct netsnmp_factory_s {



        const char *product;




        netsnmp_factory_produce_f *produce;




        netsnmp_factory_produce_noalloc_f *produce_noalloc;

    } netsnmp_factory;




    void netsnmp_factory_init(void);




    int netsnmp_factory_register(netsnmp_factory *f);




    netsnmp_factory* netsnmp_factory_get(const char* product);




    void * netsnmp_factory_produce(const char* product);




    int netsnmp_factory_produce_noalloc(const char *product, void *memory);




    enum {
        FACTORY_NOERROR = 0,
        FACTORY_EXISTS,
        FACTORY_NOTFOUND,
        FACTORY_NOMEMORY,
        FACTORY_GENERR,
        FACTORY_MAXIMUM_ERROR
    };
# 6 "project/radare2/shlr/capstone/suite/cstest/src/sparc_detail.c" 2


# 7 "project/radare2/shlr/capstone/suite/cstest/src/sparc_detail.c"
char *get_detail_sparc(csh *handle, cs_mode mode, cs_insn *ins)
{
 cs_sparc *sparc;
 int i;
 char *result;

 result = (char *)malloc(sizeof(char));
 result[0] = '\0';

 if (ins->detail == NULL)
  return result;

 sparc = &(ins->detail->sparc);
 if (sparc->op_count)
  add_str(&result, " ; op_count: %u", sparc->op_count);

 for (i = 0; i < sparc->op_count; i++) {
  cs_sparc_op *op = &(sparc->operands[i]);
  switch((int)op->type) {
   default:
    break;
   case SPARC_OP_REG:
    add_str(&result, " ; operands[%u].type: REG = %s", i, cs_reg_name(*handle, op->reg));
    break;
   case SPARC_OP_IMM:
    add_str(&result, " ; operands[%u].type: IMM = 0x%" PRIx64 "", i, op->imm);
    break;
   case SPARC_OP_MEM:
    add_str(&result, " ; operands[%u].type: MEM", i);
    if (op->mem.base != X86_REG_INVALID)
     add_str(&result, " ; operands[%u].mem.base: REG = %s", i, cs_reg_name(*handle, op->mem.base));
    if (op->mem.index != X86_REG_INVALID)
     add_str(&result, " ; operands[%u].mem.index: REG = %s", i, cs_reg_name(*handle, op->mem.index));
    if (op->mem.disp != 0)
     add_str(&result, " ; operands[%u].mem.disp: 0x%x", i, op->mem.disp);

    break;
  }
 }

 if (sparc->cc != 0)
  add_str(&result, " ; Code condition: %u", sparc->cc);

 if (sparc->hint != 0)
  add_str(&result, " ; Hint code: %u", sparc->hint);

 return result;
}
