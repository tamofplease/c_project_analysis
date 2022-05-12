# 0 "project/radare2/shlr/capstone/suite/cstest/src/evm_detail.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/shlr/capstone/suite/cstest/src/evm_detail.c"




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
# 6 "project/radare2/shlr/capstone/suite/cstest/src/evm_detail.c" 2


# 7 "project/radare2/shlr/capstone/suite/cstest/src/evm_detail.c"
char *get_detail_evm(csh *handle, cs_mode mode, cs_insn *ins)
{
 cs_evm *evm;
 char *result;

 result = (char *)malloc(sizeof(char));
 result[0] = '\0';

 if (ins->detail == NULL)
  return result;

 evm = &(ins->detail->evm);

 if (evm->pop)
  add_str(&result, " ; Pop: %u", evm->pop);

 if (evm->push)
  add_str(&result, " ; Push: %u", evm->push);

 if (evm->fee)
  add_str(&result, " ; Gas fee: %u", evm->fee);

 return result;
}
