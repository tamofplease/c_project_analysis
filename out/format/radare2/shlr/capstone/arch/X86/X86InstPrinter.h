# 1 "project/radare2/shlr/capstone/arch/X86/X86InstPrinter.h"
# 17 "project/radare2/shlr/capstone/arch/X86/X86InstPrinter.h"
#ifndef CS_X86_INSTPRINTER_H
#define CS_X86_INSTPRINTER_H 

#include "../../MCInst.h"
#include "../../SStream.h"

void X86_Intel_printInst(MCInst *MI, SStream *OS, void *Info);
void X86_ATT_printInst(MCInst *MI, SStream *OS, void *Info);

#endif
