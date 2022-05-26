# 1 "project/radare2/shlr/capstone/arch/RISCV/RISCVInstPrinter.c"
# 14 "project/radare2/shlr/capstone/arch/RISCV/RISCVInstPrinter.c"
#ifdef CAPSTONE_HAS_RISCV

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <capstone/platform.h>

#include "RISCVInstPrinter.h"
#include "RISCVBaseInfo.h"
#include "../../MCInst.h"
#include "../../SStream.h"
#include "../../MCRegisterInfo.h"
#include "../../utils.h"
#include "RISCVMapping.h"



#define GET_REGINFO_ENUM 
#define GET_REGINFO_MC_DESC 
#include "RISCVGenRegisterInfo.inc"
#define GET_INSTRINFO_ENUM 
#include "RISCVGenInstrInfo.inc"


static void printInstruction(MCInst *MI, SStream *O, MCRegisterInfo *MRI);
static bool printAliasInstr(MCInst *MI, SStream *OS, void *info);
static void printOperand(MCInst *MI, unsigned OpNo, SStream *O);
static void printFenceArg(MCInst *MI, unsigned OpNo, SStream *O);
static void printCSRSystemRegister(MCInst*, unsigned, SStream *);
static void printFRMArg(MCInst *MI, unsigned OpNo, SStream *O);
static void printCustomAliasOperand( MCInst *, unsigned, unsigned, SStream *);



static const char *getRegisterName(unsigned RegNo, unsigned AltIdx);


#define PRINT_ALIAS_INSTR 
#include "RISCVGenAsmWriter.inc"


static void fixDetailOfEffectiveAddr(MCInst *MI)
{
 unsigned reg = 0;
 int64_t imm = 0;

 CS_ASSERT(3 == MI->flat_insn->detail->riscv.op_count);
 CS_ASSERT(RISCV_OP_REG == MI->flat_insn->detail->riscv.operands[0].type);

 if (RISCV_OP_IMM == MI->flat_insn->detail->riscv.operands[1].type) {
  CS_ASSERT(RISCV_OP_REG == MI->flat_insn->detail->riscv.operands[2].type);
  imm = MI->flat_insn->detail->riscv.operands[1].imm;
  reg = MI->flat_insn->detail->riscv.operands[2].reg;
 } else if (RISCV_OP_REG == MI->flat_insn->detail->riscv.operands[1].type) {
  CS_ASSERT(RISCV_OP_IMM == MI->flat_insn->detail->riscv.operands[2].type);
  reg = MI->flat_insn->detail->riscv.operands[1].reg;
  imm = MI->flat_insn->detail->riscv.operands[2].imm;
 }


 MI->flat_insn->detail->riscv.operands[1].type = RISCV_OP_MEM;
 MI->flat_insn->detail->riscv.op_count--;
      MI->flat_insn->detail->riscv.operands[1].mem.base = reg;
      MI->flat_insn->detail->riscv.operands[1].mem.disp = imm;

 return;
}




void RISCV_printInst(MCInst *MI, SStream *O, void *info)
{
   MCRegisterInfo *MRI = (MCRegisterInfo *) info;
# 96 "project/radare2/shlr/capstone/arch/RISCV/RISCVInstPrinter.c"
   if ( !printAliasInstr(MI, O, info))
      printInstruction(MI, O, MRI);


     if (MI->csh->detail &&
     MI->flat_insn->detail->riscv.need_effective_addr)
  fixDetailOfEffectiveAddr(MI);

 return;
}

static void printRegName(SStream *OS, unsigned RegNo)
{
   SStream_concat0(OS, getRegisterName(RegNo, RISCV_ABIRegAltName));
}





static void printOperand(MCInst *MI, unsigned OpNo, SStream *O)
{
   unsigned reg;
   int64_t Imm = 0;

   MCOperand *MO = MCInst_getOperand(MI, OpNo);

   if (MCOperand_isReg(MO)) {
      reg = MCOperand_getReg(MO);
      printRegName(O, reg);
      if (MI->csh->detail) {
         MI->flat_insn->detail->riscv.operands[MI->flat_insn->detail->riscv.op_count].type = RISCV_OP_REG;
         MI->flat_insn->detail->riscv.operands[MI->flat_insn->detail->riscv.op_count].reg = reg;
         MI->flat_insn->detail->riscv.op_count++;
      }
   } else {
  CS_ASSERT(MCOperand_isImm(MO) && "Unknown operand kind in printOperand");
      Imm = MCOperand_getImm(MO);
      if (Imm >= 0) {
         if (Imm > HEX_THRESHOLD)
           SStream_concat(O, "0x%" PRIx64, Imm);
         else
    SStream_concat(O, "%" PRIu64, Imm);
      } else {
         if (Imm < -HEX_THRESHOLD)
    SStream_concat(O, "-0x%" PRIx64, -Imm);
         else
    SStream_concat(O, "-%" PRIu64, -Imm);
      }

      if (MI->csh->detail) {
         MI->flat_insn->detail->riscv.operands[MI->flat_insn->detail->riscv.op_count].type = RISCV_OP_IMM;
         MI->flat_insn->detail->riscv.operands[MI->flat_insn->detail->riscv.op_count].imm = Imm;
         MI->flat_insn->detail->riscv.op_count++;
  }
     }



 return;
}

static const char *getCSRSystemRegisterName(unsigned CsrNo)
{
 switch (CsrNo) {




 case 0x0000: return "ustatus";
 case 0x0004: return "uie";
 case 0x0005: return "utvec";

 case 0x0040: return "uscratch";
 case 0x0041: return "uepc";
 case 0x0042: return "ucause";
 case 0x0043: return "utval";
 case 0x0044: return "uip";

 case 0x0001: return "fflags";
 case 0x0002: return "frm";
 case 0x0003: return "fcsr";

 case 0x0c00: return "cycle";
 case 0x0c01: return "time";
 case 0x0c02: return "instret";
 case 0x0c03: return "hpmcounter3";
 case 0x0c04: return "hpmcounter4";
 case 0x0c05: return "hpmcounter5";
 case 0x0c06: return "hpmcounter6";
 case 0x0c07: return "hpmcounter7";
 case 0x0c08: return "hpmcounter8";
 case 0x0c09: return "hpmcounter9";
 case 0x0c0a: return "hpmcounter10";
 case 0x0c0b: return "hpmcounter11";
 case 0x0c0c: return "hpmcounter12";
 case 0x0c0d: return "hpmcounter13";
 case 0x0c0e: return "hpmcounter14";
 case 0x0c0f: return "hpmcounter15";
 case 0x0c10: return "hpmcounter16";
 case 0x0c11: return "hpmcounter17";
 case 0x0c12: return "hpmcounter18";
 case 0x0c13: return "hpmcounter19";
 case 0x0c14: return "hpmcounter20";
 case 0x0c15: return "hpmcounter21";
 case 0x0c16: return "hpmcounter22";
 case 0x0c17: return "hpmcounter23";
 case 0x0c18: return "hpmcounter24";
 case 0x0c19: return "hpmcounter25";
 case 0x0c1a: return "hpmcounter26";
 case 0x0c1b: return "hpmcounter27";
 case 0x0c1c: return "hpmcounter28";
 case 0x0c1d: return "hpmcounter29";
 case 0x0c1e: return "hpmcounter30";
 case 0x0c1f: return "hpmcounter31";
 case 0x0c80: return "cycleh";
 case 0x0c81: return "timeh";
 case 0x0c82: return "instreth";
 case 0x0c83: return "hpmcounter3h";
 case 0x0c84: return "hpmcounter4h";
 case 0x0c85: return "hpmcounter5h";
 case 0x0c86: return "hpmcounter6h";
 case 0x0c87: return "hpmcounter7h";
 case 0x0c88: return "hpmcounter8h";
 case 0x0c89: return "hpmcounter9h";
 case 0x0c8a: return "hpmcounter10h";
 case 0x0c8b: return "hpmcounter11h";
 case 0x0c8c: return "hpmcounter12h";
 case 0x0c8d: return "hpmcounter13h";
 case 0x0c8e: return "hpmcounter14h";
 case 0x0c8f: return "hpmcounter15h";
 case 0x0c90: return "hpmcounter16h";
 case 0x0c91: return "hpmcounter17h";
 case 0x0c92: return "hpmcounter18h";
 case 0x0c93: return "hpmcounter19h";
 case 0x0c94: return "hpmcounter20h";
 case 0x0c95: return "hpmcounter21h";
 case 0x0c96: return "hpmcounter22h";
 case 0x0c97: return "hpmcounter23h";
 case 0x0c98: return "hpmcounter24h";
 case 0x0c99: return "hpmcounter25h";
 case 0x0c9a: return "hpmcounter26h";
 case 0x0c9b: return "hpmcounter27h";
 case 0x0c9c: return "hpmcounter28h";
 case 0x0c9d: return "hpmcounter29h";
 case 0x0c9e: return "hpmcounter30h";
 case 0x0c9f: return "hpmcounter31h";

 case 0x0100: return "sstatus";
 case 0x0102: return "sedeleg";
 case 0x0103: return "sideleg";
 case 0x0104: return "sie";
 case 0x0105: return "stvec";
 case 0x0106: return "scounteren";

 case 0x0140: return "sscratch";
 case 0x0141: return "sepc";
 case 0x0142: return "scause";
 case 0x0143: return "stval";
 case 0x0144: return "sip";

 case 0x0180: return "satp";

 case 0x0f11: return "mvendorid";
 case 0x0f12: return "marchid";
 case 0x0f13: return "mimpid";
 case 0x0f14: return "mhartid";

 case 0x0300: return "mstatus";
 case 0x0301: return "misa";
 case 0x0302: return "medeleg";
 case 0x0303: return "mideleg";
 case 0x0304: return "mie";
 case 0x0305: return "mtvec";
 case 0x0306: return "mcounteren";

 case 0x0340: return "mscratch";
 case 0x0341: return "mepc";
 case 0x0342: return "mcause";
 case 0x0343: return "mtval";
 case 0x0344: return "mip";

 case 0x03a0: return "pmpcfg0";
 case 0x03a1: return "pmpcfg1";
 case 0x03a2: return "pmpcfg2";
 case 0x03a3: return "pmpcfg3";
 case 0x03b0: return "pmpaddr0";
 case 0x03b1: return "pmpaddr1";
 case 0x03b2: return "pmpaddr2";
 case 0x03b3: return "pmpaddr3";
 case 0x03b4: return "pmpaddr4";
 case 0x03b5: return "pmpaddr5";
 case 0x03b6: return "pmpaddr6";
 case 0x03b7: return "pmpaddr7";
 case 0x03b8: return "pmpaddr8";
 case 0x03b9: return "pmpaddr9";
 case 0x03ba: return "pmpaddr10";
 case 0x03bb: return "pmpaddr11";
 case 0x03bc: return "pmpaddr12";
 case 0x03bd: return "pmpaddr14";
 case 0x03be: return "pmpaddr13";
 case 0x03bf: return "pmpaddr15";

 case 0x0b00: return "mcycle";
 case 0x0b02: return "minstret";
 case 0x0b03: return "mhpmcounter3";
 case 0x0b04: return "mhpmcounter4";
 case 0x0b05: return "mhpmcounter5";
 case 0x0b06: return "mhpmcounter6";
 case 0x0b07: return "mhpmcounter7";
 case 0x0b08: return "mhpmcounter8";
 case 0x0b09: return "mhpmcounter9";
 case 0x0b0a: return "mhpmcounter10";
 case 0x0b0b: return "mhpmcounter11";
 case 0x0b0c: return "mhpmcounter12";
 case 0x0b0d: return "mhpmcounter13";
 case 0x0b0e: return "mhpmcounter14";
 case 0x0b0f: return "mhpmcounter15";
 case 0x0b10: return "mhpmcounter16";
 case 0x0b11: return "mhpmcounter17";
 case 0x0b12: return "mhpmcounter18";
 case 0x0b13: return "mhpmcounter19";
 case 0x0b14: return "mhpmcounter20";
 case 0x0b15: return "mhpmcounter21";
 case 0x0b16: return "mhpmcounter22";
 case 0x0b17: return "mhpmcounter23";
 case 0x0b18: return "mhpmcounter24";
 case 0x0b19: return "mhpmcounter25";
 case 0x0b1a: return "mhpmcounter26";
 case 0x0b1b: return "mhpmcounter27";
 case 0x0b1c: return "mhpmcounter28";
 case 0x0b1d: return "mhpmcounter29";
 case 0x0b1e: return "mhpmcounter30";
 case 0x0b1f: return "mhpmcounter31";
 case 0x0b80: return "mcycleh";
 case 0x0b82: return "minstreth";
 case 0x0b83: return "mhpmcounter3h";
 case 0x0b84: return "mhpmcounter4h";
 case 0x0b85: return "mhpmcounter5h";
 case 0x0b86: return "mhpmcounter6h";
 case 0x0b87: return "mhpmcounter7h";
 case 0x0b88: return "mhpmcounter8h";
 case 0x0b89: return "mhpmcounter9h";
 case 0x0b8a: return "mhpmcounter10h";
 case 0x0b8b: return "mhpmcounter11h";
 case 0x0b8c: return "mhpmcounter12h";
 case 0x0b8d: return "mhpmcounter13h";
 case 0x0b8e: return "mhpmcounter14h";
 case 0x0b8f: return "mhpmcounter15h";
 case 0x0b90: return "mhpmcounter16h";
 case 0x0b91: return "mhpmcounter17h";
 case 0x0b92: return "mhpmcounter18h";
 case 0x0b93: return "mhpmcounter19h";
 case 0x0b94: return "mhpmcounter20h";
 case 0x0b95: return "mhpmcounter21h";
 case 0x0b96: return "mhpmcounter22h";
 case 0x0b97: return "mhpmcounter23h";
 case 0x0b98: return "mhpmcounter24h";
 case 0x0b99: return "mhpmcounter25h";
 case 0x0b9a: return "mhpmcounter26h";
 case 0x0b9b: return "mhpmcounter27h";
 case 0x0b9c: return "mhpmcounter28h";
 case 0x0b9d: return "mhpmcounter29h";
 case 0x0b9e: return "mhpmcounter30h";
 case 0x0b9f: return "mhpmcounter31h";

 case 0x0323: return "mhpmevent3";
 case 0x0324: return "mhpmevent4";
 case 0x0325: return "mhpmevent5";
 case 0x0326: return "mhpmevent6";
 case 0x0327: return "mhpmevent7";
 case 0x0328: return "mhpmevent8";
 case 0x0329: return "mhpmevent9";
 case 0x032a: return "mhpmevent10";
 case 0x032b: return "mhpmevent11";
 case 0x032c: return "mhpmevent12";
 case 0x032d: return "mhpmevent13";
 case 0x032e: return "mhpmevent14";
 case 0x032f: return "mhpmevent15";
 case 0x0330: return "mhpmevent16";
 case 0x0331: return "mhpmevent17";
 case 0x0332: return "mhpmevent18";
 case 0x0333: return "mhpmevent19";
 case 0x0334: return "mhpmevent20";
 case 0x0335: return "mhpmevent21";
 case 0x0336: return "mhpmevent22";
 case 0x0337: return "mhpmevent23";
 case 0x0338: return "mhpmevent24";
 case 0x0339: return "mhpmevent25";
 case 0x033a: return "mhpmevent26";
 case 0x033b: return "mhpmevent27";
 case 0x033c: return "mhpmevent28";
 case 0x033d: return "mhpmevent29";
 case 0x033e: return "mhpmevent30";
 case 0x033f: return "mhpmevent31";

 case 0x07a0: return "tselect";
 case 0x07a1: return "tdata1";
 case 0x07a2: return "tdata2";
 case 0x07a3: return "tdata3";

 case 0x07b0: return "dcsr";
 case 0x07b1: return "dpc";
 case 0x07b2: return "dscratch";
 }
 return NULL;
}

static void printCSRSystemRegister(MCInst *MI, unsigned OpNo,

                                   SStream *O)
{
 unsigned Imm = MCOperand_getImm(MCInst_getOperand(MI, OpNo));
 const char *Name = getCSRSystemRegisterName(Imm);

 if (Name) {
  SStream_concat0(O, Name);
 } else {
  SStream_concat(O, "%u", Imm);
 }
}

static void printFenceArg(MCInst *MI, unsigned OpNo, SStream *O)
{
   unsigned FenceArg = MCOperand_getImm(MCInst_getOperand(MI, OpNo));


   if ((FenceArg & RISCVFenceField_I) != 0)
      SStream_concat0(O, "i");
   if ((FenceArg & RISCVFenceField_O) != 0)
      SStream_concat0(O, "o");
  if ((FenceArg & RISCVFenceField_R) != 0)
      SStream_concat0(O, "r");
   if ((FenceArg & RISCVFenceField_W) != 0)
      SStream_concat0(O, "w");
   if (FenceArg == 0)
      SStream_concat0(O, "unknown");
}

static void printFRMArg(MCInst *MI, unsigned OpNo, SStream *O)
{
   enum RoundingMode FRMArg =
       (enum RoundingMode)MCOperand_getImm(MCInst_getOperand(MI, OpNo));
#if 0
  auto FRMArg =
      static_cast<RISCVFPRndMode::RoundingMode>(MI->getOperand(OpNo).getImm());
  O << RISCVFPRndMode::roundingModeToString(FRMArg);
#endif
   SStream_concat0(O, roundingModeToString(FRMArg));
}

#endif
