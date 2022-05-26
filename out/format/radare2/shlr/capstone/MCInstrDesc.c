# 1 "project/radare2/shlr/capstone/MCInstrDesc.c"



#include "MCInstrDesc.h"



bool MCOperandInfo_isPredicate(const MCOperandInfo *m)
{
 return m->Flags & (1 << MCOI_Predicate);
}



bool MCOperandInfo_isOptionalDef(const MCOperandInfo *m)
{
 return m->Flags & (1 << MCOI_OptionalDef);
}
