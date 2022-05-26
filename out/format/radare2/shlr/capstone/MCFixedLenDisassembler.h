# 1 "project/radare2/shlr/capstone/MCFixedLenDisassembler.h"
# 15 "project/radare2/shlr/capstone/MCFixedLenDisassembler.h"
#ifndef CS_LLVM_MC_MCFIXEDLENDISASSEMBLER_H
#define CS_LLVM_MC_MCFIXEDLENDISASSEMBLER_H 


enum DecoderOps {
 MCD_OPC_ExtractField = 1,
 MCD_OPC_FilterValue,
 MCD_OPC_CheckField,

 MCD_OPC_CheckPredicate,
 MCD_OPC_Decode,
        MCD_OPC_TryDecode,

 MCD_OPC_SoftFail,
 MCD_OPC_Fail
};

#endif
