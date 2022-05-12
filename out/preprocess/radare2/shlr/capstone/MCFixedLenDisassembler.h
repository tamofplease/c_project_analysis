# 0 "project/radare2/shlr/capstone/MCFixedLenDisassembler.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/shlr/capstone/MCFixedLenDisassembler.h"
# 19 "project/radare2/shlr/capstone/MCFixedLenDisassembler.h"
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
