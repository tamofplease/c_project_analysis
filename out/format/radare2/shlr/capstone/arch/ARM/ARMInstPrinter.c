# 1 "project/radare2/shlr/capstone/arch/ARM/ARMInstPrinter.c"
# 17 "project/radare2/shlr/capstone/arch/ARM/ARMInstPrinter.c"
#ifdef CAPSTONE_HAS_ARM

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <capstone/platform.h>

#include "ARMInstPrinter.h"
#include "ARMAddressingModes.h"
#include "ARMBaseInfo.h"
#include "ARMDisassembler.h"
#include "../../MCInst.h"
#include "../../SStream.h"
#include "../../MCRegisterInfo.h"
#include "../../utils.h"
#include "ARMMapping.h"

#define GET_SUBTARGETINFO_ENUM 
#include "ARMGenSubtargetInfo.inc"

#include "ARMGenSystemRegister.inc"

static void printRegName(cs_struct *h, SStream *OS, unsigned RegNo);


static void printInstruction(MCInst *MI, SStream *O);
static void printOperand(MCInst *MI, unsigned OpNo, SStream *O);
static void printSORegRegOperand(MCInst *MI, unsigned OpNum, SStream *O);
static void printSORegImmOperand(MCInst *MI, unsigned OpNum, SStream *O);

static void printAddrModeTBB(MCInst *MI, unsigned OpNum, SStream *O);
static void printAddrModeTBH(MCInst *MI, unsigned OpNum, SStream *O);
static void printAddrMode2Operand(MCInst *MI, unsigned OpNum, SStream *O);
static void printAM2PreOrOffsetIndexOp(MCInst *MI, unsigned OpNum, SStream *O);
static void printAddrMode2OffsetOperand(MCInst *MI, unsigned OpNum, SStream *O);
static void printAddrMode3Operand(MCInst *MI, unsigned OpNum, SStream *O, bool AlwaysPrintImm0);
static void printAddrMode3OffsetOperand(MCInst *MI, unsigned OpNum, SStream *O);
static void printAM3PreOrOffsetIndexOp(MCInst *MI, unsigned Op, SStream *O, bool AlwaysPrintImm0);
static void printPostIdxImm8Operand(MCInst *MI, unsigned OpNum, SStream *O);
static void printPostIdxRegOperand(MCInst *MI, unsigned OpNum, SStream *O);
static void printPostIdxImm8s4Operand(MCInst *MI, unsigned OpNum, SStream *O);
static void printAddrMode5Operand(MCInst *MI, unsigned OpNum, SStream *O, bool AlwaysPrintImm0);
static void printAddrMode6Operand(MCInst *MI, unsigned OpNum, SStream *O);
static void printAddrMode7Operand(MCInst *MI, unsigned OpNum, SStream *O);
static void printAddrMode6OffsetOperand(MCInst *MI, unsigned OpNum, SStream *O);

static void printBitfieldInvMaskImmOperand(MCInst *MI, unsigned OpNum, SStream *O);
static void printMemBOption(MCInst *MI, unsigned OpNum, SStream *O);
static void printShiftImmOperand(MCInst *MI, unsigned OpNum, SStream *O);
static void printPKHLSLShiftImm(MCInst *MI, unsigned OpNum, SStream *O);
static void printPKHASRShiftImm(MCInst *MI, unsigned OpNum, SStream *O);
static void printAdrLabelOperand(MCInst *MI, unsigned OpNum, SStream *O, unsigned);
static void printThumbS4ImmOperand(MCInst *MI, unsigned OpNum, SStream *O);
static void printThumbSRImm(MCInst *MI, unsigned OpNum, SStream *O);
static void printThumbITMask(MCInst *MI, unsigned OpNum, SStream *O);
static void printThumbAddrModeRROperand(MCInst *MI, unsigned OpNum, SStream *O);
static void printThumbAddrModeImm5SOperand(MCInst *MI, unsigned OpNum, SStream *O, unsigned Scale);
static void printThumbAddrModeImm5S1Operand(MCInst *MI, unsigned OpNum, SStream *O);
static void printThumbAddrModeImm5S2Operand(MCInst *MI, unsigned OpNum, SStream *O);
static void printThumbAddrModeImm5S4Operand(MCInst *MI, unsigned OpNum, SStream *O);
static void printThumbAddrModeSPOperand(MCInst *MI, unsigned OpNum, SStream *O);
static void printT2SOOperand(MCInst *MI, unsigned OpNum, SStream *O);
static void printAddrModeImm12Operand(MCInst *MI, unsigned OpNum, SStream *O, bool AlwaysPrintImm0);
static void printT2AddrModeImm8Operand(MCInst *MI, unsigned OpNum, SStream *O, bool);
static void printT2AddrModeImm8s4Operand(MCInst *MI, unsigned OpNum, SStream *O, bool);
static void printT2AddrModeImm0_1020s4Operand(MCInst *MI, unsigned OpNum, SStream *O);
static void printT2AddrModeImm8OffsetOperand(MCInst *MI, unsigned OpNum, SStream *O);
static void printT2AddrModeImm8s4OffsetOperand(MCInst *MI, unsigned OpNum, SStream *O);
static void printT2AddrModeSoRegOperand(MCInst *MI, unsigned OpNum, SStream *O);
static void printSetendOperand(MCInst *MI, unsigned OpNum, SStream *O);
static void printCPSIMod(MCInst *MI, unsigned OpNum, SStream *O);
static void printCPSIFlag(MCInst *MI, unsigned OpNum, SStream *O);
static void printMSRMaskOperand(MCInst *MI, unsigned OpNum, SStream *O);
static void printPredicateOperand(MCInst *MI, unsigned OpNum, SStream *O);
static void printMandatoryPredicateOperand(MCInst *MI, unsigned OpNum, SStream *O);
static void printSBitModifierOperand(MCInst *MI, unsigned OpNum, SStream *O);
static void printRegisterList(MCInst *MI, unsigned OpNum, SStream *O);
static void printNoHashImmediate(MCInst *MI, unsigned OpNum, SStream *O);
static void printPImmediate(MCInst *MI, unsigned OpNum, SStream *O);
static void printCImmediate(MCInst *MI, unsigned OpNum, SStream *O);
static void printCoprocOptionImm(MCInst *MI, unsigned OpNum, SStream *O);
static void printFPImmOperand(MCInst *MI, unsigned OpNum, SStream *O);
static void printNEONModImmOperand(MCInst *MI, unsigned OpNum, SStream *O);
static void printImmPlusOneOperand(MCInst *MI, unsigned OpNum, SStream *O);
static void printRotImmOperand(MCInst *MI, unsigned OpNum, SStream *O);
static void printGPRPairOperand(MCInst *MI, unsigned OpNum, SStream *O);
static void printThumbLdrLabelOperand(MCInst *MI, unsigned OpNum, SStream *O);
static void printFBits16(MCInst *MI, unsigned OpNum, SStream *O);
static void printFBits32(MCInst *MI, unsigned OpNum, SStream *O);
static void printVectorIndex(MCInst *MI, unsigned OpNum, SStream *O);
static void printVectorListOne(MCInst *MI, unsigned OpNum, SStream *O);
static void printVectorListTwo(MCInst *MI, unsigned OpNum, SStream *O);
static void printVectorListTwoSpaced(MCInst *MI, unsigned OpNum, SStream *O);
static void printVectorListThree(MCInst *MI, unsigned OpNum, SStream *O);
static void printVectorListFour(MCInst *MI, unsigned OpNum, SStream *O);
static void printVectorListOneAllLanes(MCInst *MI, unsigned OpNum, SStream *O);
static void printVectorListTwoAllLanes(MCInst *MI, unsigned OpNum, SStream *O);
static void printVectorListThreeAllLanes(MCInst *MI, unsigned OpNum, SStream *O);
static void printVectorListFourAllLanes(MCInst *MI, unsigned OpNum, SStream *O);
static void printVectorListTwoSpacedAllLanes(MCInst *MI, unsigned OpNum, SStream *O);
static void printVectorListThreeSpacedAllLanes(MCInst *MI, unsigned OpNum, SStream *O);
static void printVectorListFourSpacedAllLanes(MCInst *MI, unsigned OpNum, SStream *O);
static void printVectorListThreeSpaced(MCInst *MI, unsigned OpNum, SStream *O);
static void printVectorListFourSpaced(MCInst *MI, unsigned OpNum, SStream *O);
static void printBankedRegOperand(MCInst *MI, unsigned OpNum, SStream *O);
static void printModImmOperand(MCInst *MI, unsigned OpNum, SStream *O);

static void printInstSyncBOption(MCInst *MI, unsigned OpNum, SStream *O);
static void printTraceSyncBOption(MCInst *MI, unsigned OpNum, SStream *O);
static void printComplexRotationOp(MCInst *MI, unsigned OpNo, SStream *O, int64_t Angle, int64_t Remainder);
static void printAddrMode5FP16Operand(MCInst *MI, unsigned OpNum, SStream *O, bool AlwaysPrintImm0);


#ifndef CAPSTONE_DIET

static uint8_t get_op_access(cs_struct *h, unsigned int id, unsigned int index)
{
 const uint8_t *arr = ARM_get_op_access(h, id);

 if (!arr || arr[index] == CS_AC_IGNORE)
  return 0;

 return arr[index];
}
#endif

static void set_mem_access(MCInst *MI, bool status)
{
 if (MI->csh->detail != CS_OPT_ON)
  return;

 MI->csh->doing_mem = status;
 if (status) {
#ifndef CAPSTONE_DIET
  uint8_t access;
#endif

  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_MEM;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].mem.base = ARM_REG_INVALID;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].mem.index = ARM_REG_INVALID;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].mem.scale = 1;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].mem.disp = 0;

#ifndef CAPSTONE_DIET
  access = get_op_access(MI->csh, MCInst_getOpcode(MI), MI->ac_idx);
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].access = access;
  MI->ac_idx++;
#endif
 } else {

  MI->flat_insn->detail->arm.op_count++;
 }
}

static void op_addImm(MCInst *MI, int v)
{
 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_IMM;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].imm = v;
  MI->flat_insn->detail->arm.op_count++;
 }
}

#define GET_INSTRINFO_ENUM 
#include "ARMGenInstrInfo.inc"

static void printCustomAliasOperand(MCInst *MI,
  unsigned OpIdx, unsigned PrintMethodIdx, SStream *OS);

#define PRINT_ALIAS_INSTR 
#include "ARMGenAsmWriter.inc"
#include "ARMGenRegisterName.inc"
#include "ARMGenRegisterName_digit.inc"

void ARM_getRegName(cs_struct *handle, int value)
{
 if (value == CS_OPT_SYNTAX_NOREGNAME) {
  handle->get_regname = getRegisterName_digit;
  handle->reg_name = ARM_reg_name2;;
 } else {
  handle->get_regname = getRegisterName;
  handle->reg_name = ARM_reg_name;;
 }
}




static unsigned translateShiftImm(unsigned imm)
{


 if (imm == 0)
  return 32;
 return imm;
}


static void printRegImmShift(MCInst *MI, SStream *O, ARM_AM_ShiftOpc ShOpc, unsigned ShImm)
{
 if (ShOpc == ARM_AM_no_shift || (ShOpc == ARM_AM_lsl && !ShImm))
  return;

 SStream_concat0(O, ", ");


 SStream_concat0(O, ARM_AM_getShiftOpcStr(ShOpc));

 if (MI->csh->detail) {
  if (MI->csh->doing_mem)
   MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].shift.type = (arm_shifter)ShOpc;
  else
   MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count - 1].shift.type = (arm_shifter)ShOpc;
 }

 if (ShOpc != ARM_AM_rrx) {
  SStream_concat0(O, " ");
  SStream_concat(O, "#%u", translateShiftImm(ShImm));
  if (MI->csh->detail) {
   if (MI->csh->doing_mem)
    MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].shift.value = translateShiftImm(ShImm);
   else
    MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count - 1].shift.value = translateShiftImm(ShImm);
  }
 }
}

static void printRegName(cs_struct *h, SStream *OS, unsigned RegNo)
{
#ifndef CAPSTONE_DIET
 SStream_concat0(OS, h->get_regname(RegNo));
#endif
}


static const name_map insn_update_flgs[] = {
 { ARM_INS_CMN, "cmn" },
 { ARM_INS_CMP, "cmp" },
 { ARM_INS_TEQ, "teq" },
 { ARM_INS_TST, "tst" },

 { ARM_INS_ADC, "adcs" },
 { ARM_INS_ADD, "adds" },
 { ARM_INS_AND, "ands" },
 { ARM_INS_ASR, "asrs" },
 { ARM_INS_BIC, "bics" },
 { ARM_INS_EOR, "eors" },
 { ARM_INS_LSL, "lsls" },
 { ARM_INS_LSR, "lsrs" },
 { ARM_INS_MLA, "mlas" },
 { ARM_INS_MOV, "movs" },
 { ARM_INS_MUL, "muls" },
 { ARM_INS_MVN, "mvns" },
 { ARM_INS_ORN, "orns" },
 { ARM_INS_ORR, "orrs" },
 { ARM_INS_ROR, "rors" },
 { ARM_INS_RRX, "rrxs" },
 { ARM_INS_RSB, "rsbs" },
 { ARM_INS_RSC, "rscs" },
 { ARM_INS_SBC, "sbcs" },
 { ARM_INS_SMLAL, "smlals" },
 { ARM_INS_SMULL, "smulls" },
 { ARM_INS_SUB, "subs" },
 { ARM_INS_UMLAL, "umlals" },
 { ARM_INS_UMULL, "umulls" },

 { ARM_INS_UADD8, "uadd8" },
};

void ARM_post_printer(csh ud, cs_insn *insn, char *insn_asm, MCInst *mci)
{
 if (((cs_struct *)ud)->detail != CS_OPT_ON)
  return;


 if (mci->writeback || (strrchr(insn_asm, '!')) != NULL) {
  insn->detail->arm.writeback = true;
 } else if (mci->csh->mode & CS_MODE_THUMB) {


  switch(mci->Opcode) {
   default:
    break;
   case ARM_t2LDC2L_PRE:
   case ARM_t2LDC2_PRE:
   case ARM_t2LDCL_PRE:
   case ARM_t2LDC_PRE:

   case ARM_t2LDRB_PRE:
   case ARM_t2LDRD_PRE:
   case ARM_t2LDRH_PRE:
   case ARM_t2LDRSB_PRE:
   case ARM_t2LDRSH_PRE:
   case ARM_t2LDR_PRE:

   case ARM_t2STC2L_PRE:
   case ARM_t2STC2_PRE:
   case ARM_t2STCL_PRE:
   case ARM_t2STC_PRE:

   case ARM_t2STRB_PRE:
   case ARM_t2STRD_PRE:
   case ARM_t2STRH_PRE:
   case ARM_t2STR_PRE:

   case ARM_t2LDC2L_POST:
   case ARM_t2LDC2_POST:
   case ARM_t2LDCL_POST:
   case ARM_t2LDC_POST:

   case ARM_t2LDRB_POST:
   case ARM_t2LDRD_POST:
   case ARM_t2LDRH_POST:
   case ARM_t2LDRSB_POST:
   case ARM_t2LDRSH_POST:
   case ARM_t2LDR_POST:

   case ARM_t2STC2L_POST:
   case ARM_t2STC2_POST:
   case ARM_t2STCL_POST:
   case ARM_t2STC_POST:

   case ARM_t2STRB_POST:
   case ARM_t2STRD_POST:
   case ARM_t2STRH_POST:
   case ARM_t2STR_POST:
    insn->detail->arm.writeback = true;
    break;
  }
 } else {


  switch(mci->Opcode) {
   default:
    break;
   case ARM_LDC2L_PRE:
   case ARM_LDC2_PRE:
   case ARM_LDCL_PRE:
   case ARM_LDC_PRE:

   case ARM_LDRD_PRE:
   case ARM_LDRH_PRE:
   case ARM_LDRSB_PRE:
   case ARM_LDRSH_PRE:

   case ARM_STC2L_PRE:
   case ARM_STC2_PRE:
   case ARM_STCL_PRE:
   case ARM_STC_PRE:

   case ARM_STRD_PRE:
   case ARM_STRH_PRE:

   case ARM_LDC2L_POST:
   case ARM_LDC2_POST:
   case ARM_LDCL_POST:
   case ARM_LDC_POST:

   case ARM_LDRBT_POST:
   case ARM_LDRD_POST:
   case ARM_LDRH_POST:
   case ARM_LDRSB_POST:
   case ARM_LDRSH_POST:

   case ARM_STC2L_POST:
   case ARM_STC2_POST:
   case ARM_STCL_POST:
   case ARM_STC_POST:

   case ARM_STRBT_POST:
   case ARM_STRD_POST:
   case ARM_STRH_POST:

   case ARM_LDRB_POST_IMM:
   case ARM_LDR_POST_IMM:
   case ARM_LDR_POST_REG:
   case ARM_STRB_POST_IMM:

   case ARM_STR_POST_IMM:
   case ARM_STR_POST_REG:

    insn->detail->arm.writeback = true;
    break;
  }
 }


 if (insn->detail->arm.update_flags == false) {

  unsigned int i, j;

  for (i = 0; i < ARR_SIZE(insn_update_flgs); i++) {
   if (insn->id == insn_update_flgs[i].id &&
     !strncmp(insn_asm, insn_update_flgs[i].name,
      strlen(insn_update_flgs[i].name))) {
    insn->detail->arm.update_flags = true;

    for (j = 0; j < ARR_SIZE(insn->detail->regs_write); j++) {
     if (insn->detail->regs_write[j] == 0) {
      insn->detail->regs_write[j] = ARM_REG_CPSR;
      break;
     }
    }
    break;
   }
  }
 }


 if (insn->detail->arm.cc == ARM_CC_INVALID) {
  insn->detail->arm.cc = ARM_CC_AL;
 }



 switch(mci->Opcode) {
  default:
   break;
  case ARM_MOVPCLR:
   insn->detail->arm.operands[0].type = ARM_OP_REG;
   insn->detail->arm.operands[0].reg = ARM_REG_PC;
   insn->detail->arm.operands[0].access = CS_AC_WRITE;
   insn->detail->arm.operands[1].type = ARM_OP_REG;
   insn->detail->arm.operands[1].reg = ARM_REG_LR;
   insn->detail->arm.operands[1].access = CS_AC_READ;
   insn->detail->arm.op_count = 2;
   break;
 }
}

void ARM_printInst(MCInst *MI, SStream *O, void *Info)
{
 MCRegisterInfo *MRI = (MCRegisterInfo *)Info;
 unsigned Opcode = MCInst_getOpcode(MI), tmp, i;


 switch (Opcode) {

  case ARM_MOVsr: {

   unsigned int opc;
   MCOperand *Dst = MCInst_getOperand(MI, 0);
   MCOperand *MO1 = MCInst_getOperand(MI, 1);
   MCOperand *MO2 = MCInst_getOperand(MI, 2);
   MCOperand *MO3 = MCInst_getOperand(MI, 3);

   opc = ARM_AM_getSORegShOp((unsigned int)MCOperand_getImm(MO3));
   SStream_concat0(O, ARM_AM_getShiftOpcStr(opc));

   switch (opc) {
    default: break;
    case ARM_AM_asr:
      MCInst_setOpcodePub(MI, ARM_INS_ASR);
      break;
    case ARM_AM_lsl:
      MCInst_setOpcodePub(MI, ARM_INS_LSL);
      break;
    case ARM_AM_lsr:
      MCInst_setOpcodePub(MI, ARM_INS_LSR);
      break;
    case ARM_AM_ror:
      MCInst_setOpcodePub(MI, ARM_INS_ROR);
      break;
    case ARM_AM_rrx:
      MCInst_setOpcodePub(MI, ARM_INS_RRX);
      break;
   }

   printSBitModifierOperand(MI, 6, O);
   printPredicateOperand(MI, 4, O);

   SStream_concat0(O, "\t");
   printRegName(MI->csh, O, MCOperand_getReg(Dst));

   if (MI->csh->detail) {
    MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_REG;
    MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].reg = MCOperand_getReg(Dst);
    MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].access = CS_AC_WRITE;
    MI->flat_insn->detail->arm.op_count++;
   }

   SStream_concat0(O, ", ");
   printRegName(MI->csh, O, MCOperand_getReg(MO1));

   if (MI->csh->detail) {
    MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_REG;
    MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].reg = MCOperand_getReg(MO1);
    MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].access = CS_AC_READ;
    MI->flat_insn->detail->arm.op_count++;
   }

   SStream_concat0(O, ", ");
   printRegName(MI->csh, O, MCOperand_getReg(MO2));

   if (MI->csh->detail) {
    MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_REG;
    MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].reg = MCOperand_getReg(MO2);
    MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].access = CS_AC_READ;
    MI->flat_insn->detail->arm.op_count++;
   }

   return;
  }

  case ARM_MOVsi: {

   unsigned int opc;
   MCOperand *Dst = MCInst_getOperand(MI, 0);
   MCOperand *MO1 = MCInst_getOperand(MI, 1);
   MCOperand *MO2 = MCInst_getOperand(MI, 2);

   opc = ARM_AM_getSORegShOp((unsigned int)MCOperand_getImm(MO2));
   SStream_concat0(O, ARM_AM_getShiftOpcStr(opc));

   switch(opc) {
    default:
     break;
    case ARM_AM_asr:
     MCInst_setOpcodePub(MI, ARM_INS_ASR);
     break;
    case ARM_AM_lsl:
     MCInst_setOpcodePub(MI, ARM_INS_LSL);
     break;
    case ARM_AM_lsr:
     MCInst_setOpcodePub(MI, ARM_INS_LSR);
     break;
    case ARM_AM_ror:
     MCInst_setOpcodePub(MI, ARM_INS_ROR);
     break;
    case ARM_AM_rrx:
     MCInst_setOpcodePub(MI, ARM_INS_RRX);
     break;
   }

   printSBitModifierOperand(MI, 5, O);
   printPredicateOperand(MI, 3, O);

   SStream_concat0(O, "\t");
   printRegName(MI->csh, O, MCOperand_getReg(Dst));

   if (MI->csh->detail) {
    MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_REG;
    MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].reg = MCOperand_getReg(Dst);
    MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].access = CS_AC_WRITE;
    MI->flat_insn->detail->arm.op_count++;
   }

   SStream_concat0(O, ", ");
   printRegName(MI->csh, O, MCOperand_getReg(MO1));
   if (MI->csh->detail) {
    MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_REG;
    MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].reg = MCOperand_getReg(MO1);
    MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].access = CS_AC_READ;
    MI->flat_insn->detail->arm.op_count++;
   }

   if (opc == ARM_AM_rrx) {

    return;
   }

   SStream_concat0(O, ", ");
   tmp = translateShiftImm(getSORegOffset((unsigned int)MCOperand_getImm(MO2)));
   printUInt32Bang(O, tmp);
   if (MI->csh->detail) {
    MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count - 1].shift.type =
     (arm_shifter)opc;
    MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count - 1].shift.value = tmp;
   }

   return;
  }


  case ARM_STMDB_UPD:
  case ARM_t2STMDB_UPD:
   if (MCOperand_getReg(MCInst_getOperand(MI, 0)) == ARM_SP &&
      MCInst_getNumOperands(MI) > 5) {

    SStream_concat0(O, "push");
    MCInst_setOpcodePub(MI, ARM_INS_PUSH);
    printPredicateOperand(MI, 2, O);

    if (Opcode == ARM_t2STMDB_UPD)
     SStream_concat0(O, ".w");

    SStream_concat0(O, "\t");

    if (MI->csh->detail) {
     MI->flat_insn->detail->regs_read[MI->flat_insn->detail->regs_read_count] = ARM_REG_SP;
     MI->flat_insn->detail->regs_read_count++;
     MI->flat_insn->detail->regs_write[MI->flat_insn->detail->regs_write_count] = ARM_REG_SP;
     MI->flat_insn->detail->regs_write_count++;
    }

    printRegisterList(MI, 4, O);
    return;
   } else
    break;

  case ARM_STR_PRE_IMM:
   if (MCOperand_getReg(MCInst_getOperand(MI, 2)) == ARM_SP &&
     MCOperand_getImm(MCInst_getOperand(MI, 3)) == -4) {
    SStream_concat0(O, "push");
    MCInst_setOpcodePub(MI, ARM_INS_PUSH);

    printPredicateOperand(MI, 4, O);

    SStream_concat0(O, "\t{");

    printRegName(MI->csh, O, MCOperand_getReg(MCInst_getOperand(MI, 1)));

    if (MI->csh->detail) {
#ifndef CAPSTONE_DIET
     uint8_t access;
#endif
     MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_REG;
     MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].reg = MCOperand_getReg(MCInst_getOperand(MI, 1));
#ifndef CAPSTONE_DIET
     access = get_op_access(MI->csh, MCInst_getOpcode(MI), MI->ac_idx);
     MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].access = access;
     MI->ac_idx++;
#endif
     MI->flat_insn->detail->arm.op_count++;
    }

    SStream_concat0(O, "}");

    return;
   } else
    break;


  case ARM_LDMIA_UPD:
  case ARM_t2LDMIA_UPD:
   if (MCOperand_getReg(MCInst_getOperand(MI, 0)) == ARM_SP &&
     MCInst_getNumOperands(MI) > 5) {

    SStream_concat0(O, "pop");
    MCInst_setOpcodePub(MI, ARM_INS_POP);

    printPredicateOperand(MI, 2, O);
    if (Opcode == ARM_t2LDMIA_UPD)
     SStream_concat0(O, ".w");

    SStream_concat0(O, "\t");


    MI->ac_idx = 1;
    if (MI->csh->detail) {
     MI->flat_insn->detail->regs_read[MI->flat_insn->detail->regs_read_count] = ARM_REG_SP;
     MI->flat_insn->detail->regs_read_count++;
     MI->flat_insn->detail->regs_write[MI->flat_insn->detail->regs_write_count] = ARM_REG_SP;
     MI->flat_insn->detail->regs_write_count++;
    }

    printRegisterList(MI, 4, O);

    return;
   }
   break;

  case ARM_LDR_POST_IMM:
   if (MCOperand_getReg(MCInst_getOperand(MI, 2)) == ARM_SP) {
    MCOperand *MO2 = MCInst_getOperand(MI, 4);

    if (getAM2Offset((unsigned int)MCOperand_getImm(MO2)) == 4) {
     SStream_concat0(O, "pop");
     MCInst_setOpcodePub(MI, ARM_INS_POP);
     printPredicateOperand(MI, 5, O);
     SStream_concat0(O, "\t{");

     printRegName(MI->csh, O, MCOperand_getReg(MCInst_getOperand(MI, 0)));

     if (MI->csh->detail) {
      MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_REG;
      MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].reg = MCOperand_getReg(MCInst_getOperand(MI, 0));
      MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].access = CS_AC_WRITE;
      MI->flat_insn->detail->arm.op_count++;

                        MI->flat_insn->detail->regs_read[MI->flat_insn->detail->regs_read_count] = ARM_REG_SP;
                        MI->flat_insn->detail->regs_read_count++;
                        MI->flat_insn->detail->regs_write[MI->flat_insn->detail->regs_write_count] = ARM_REG_SP;
                        MI->flat_insn->detail->regs_write_count++;
     }
     SStream_concat0(O, "}");
     return;
    }
   }
   break;


  case ARM_VSTMSDB_UPD:
  case ARM_VSTMDDB_UPD:
   if (MCOperand_getReg(MCInst_getOperand(MI, 0)) == ARM_SP) {
    SStream_concat0(O, "vpush");
    MCInst_setOpcodePub(MI, ARM_INS_VPUSH);
    printPredicateOperand(MI, 2, O);
    SStream_concat0(O, "\t");
    printRegisterList(MI, 4, O);
    return;
   }
   break;


  case ARM_VLDMSIA_UPD:
  case ARM_VLDMDIA_UPD:
   if (MCOperand_getReg(MCInst_getOperand(MI, 0)) == ARM_SP) {
    SStream_concat0(O, "vpop");
    MCInst_setOpcodePub(MI, ARM_INS_VPOP);
    printPredicateOperand(MI, 2, O);
    SStream_concat0(O, "\t");
    printRegisterList(MI, 4, O);
    return;
   }
   break;

  case ARM_tLDMIA: {
    bool Writeback = true;
    unsigned BaseReg = MCOperand_getReg(MCInst_getOperand(MI, 0));
    unsigned i;

    for (i = 3; i < MCInst_getNumOperands(MI); ++i) {
     if (MCOperand_getReg(MCInst_getOperand(MI, i)) == BaseReg)
      Writeback = false;
    }

    SStream_concat0(O, "ldm");
    MCInst_setOpcodePub(MI, ARM_INS_LDM);

    printPredicateOperand(MI, 1, O);
    SStream_concat0(O, "\t");
    printRegName(MI->csh, O, BaseReg);
    if (MI->csh->detail) {
     MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_REG;
     MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].reg = BaseReg;
     MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].access = CS_AC_READ | CS_AC_WRITE;
     MI->flat_insn->detail->arm.op_count++;
    }

    if (Writeback) {
     MI->writeback = true;
     SStream_concat0(O, "!");
    }

    SStream_concat0(O, ", ");
    printRegisterList(MI, 3, O);
    return;
   }







  case ARM_LDREXD:
  case ARM_STREXD:
  case ARM_LDAEXD:
  case ARM_STLEXD: {
   const MCRegisterClass *MRC = MCRegisterInfo_getRegClass(MRI, ARM_GPRRegClassID);
   bool isStore = Opcode == ARM_STREXD || Opcode == ARM_STLEXD;
   unsigned Reg = MCOperand_getReg(MCInst_getOperand(MI, isStore ? 1 : 0));

   if (MCRegisterClass_contains(MRC, Reg)) {
       MCInst NewMI;

       MCInst_Init(&NewMI);
       MCInst_setOpcode(&NewMI, Opcode);

       if (isStore)
     MCInst_addOperand2(&NewMI, MCInst_getOperand(MI, 0));

       MCOperand_CreateReg0(&NewMI, MCRegisterInfo_getMatchingSuperReg(MRI, Reg, ARM_gsub_0,
       MCRegisterInfo_getRegClass(MRI, ARM_GPRPairRegClassID)));


       for(i = isStore ? 3 : 2; i < MCInst_getNumOperands(MI); ++i)
     MCInst_addOperand2(&NewMI, MCInst_getOperand(MI, i));

       printInstruction(&NewMI, O);
       return;
   }
   break;
  }

  case ARM_TSB:
  case ARM_t2TSB:
   SStream_concat0(O, "tsb\tcsync");
   MCInst_setOpcodePub(MI, ARM_INS_TSB);

   return;
 }

 MI->MRI = MRI;

 if (!printAliasInstr(MI, O)) {
  printInstruction(MI, O);
 }
}

static void printOperand(MCInst *MI, unsigned OpNo, SStream *O)
{
 int32_t imm;
 MCOperand *Op = MCInst_getOperand(MI, OpNo);

 if (MCOperand_isReg(Op)) {
  unsigned Reg = MCOperand_getReg(Op);

  printRegName(MI->csh, O, Reg);

  if (MI->csh->detail) {
   if (MI->csh->doing_mem) {
    if (MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].mem.base == ARM_REG_INVALID)
     MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].mem.base = Reg;
    else
     MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].mem.index = Reg;
   } else {
#ifndef CAPSTONE_DIET
    uint8_t access;
#endif

    MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_REG;
    MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].reg = Reg;
#ifndef CAPSTONE_DIET
    access = get_op_access(MI->csh, MCInst_getOpcode(MI), MI->ac_idx);
    MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].access = access;
    MI->ac_idx++;
#endif
    MI->flat_insn->detail->arm.op_count++;
   }
  }
 } else if (MCOperand_isImm(Op)) {
  unsigned int opc = MCInst_getOpcode(MI);

  imm = (int32_t)MCOperand_getImm(Op);






  if (ARM_rel_branch(MI->csh, opc)) {
   uint32_t address;


   if (MI->csh->mode & CS_MODE_THUMB) {
    address = (uint32_t)MI->address + 4;
    if (ARM_blx_to_arm_mode(MI->csh, opc)) {

#define _ALIGN_DOWN(v,align_width) ((v/align_width)*align_width)
     address = _ALIGN_DOWN(address, 4);
#undef _ALIGN_DOWN
    }
   } else {
    address = (uint32_t)MI->address + 8;
   }

   imm += address;
   printUInt32Bang(O, imm);
  } else {
   switch(MI->flat_insn->id) {
    default:
     if (MI->csh->imm_unsigned)
      printUInt32Bang(O, imm);
     else
      printInt32Bang(O, imm);
     break;
    case ARM_INS_AND:
    case ARM_INS_ORR:
    case ARM_INS_EOR:
    case ARM_INS_BIC:
    case ARM_INS_MVN:

     printUInt32Bang(O, imm);
     break;
   }
  }

  if (MI->csh->detail) {
   if (MI->csh->doing_mem)
    MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].mem.disp = imm;
   else {
    MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_IMM;
    MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].imm = imm;
    MI->flat_insn->detail->arm.op_count++;
   }
  }
 }
}

static void printThumbLdrLabelOperand(MCInst *MI, unsigned OpNum, SStream *O)
{
 MCOperand *MO1 = MCInst_getOperand(MI, OpNum);
 int32_t OffImm;
 bool isSub;
 SStream_concat0(O, "[pc, ");

 OffImm = (int32_t)MCOperand_getImm(MO1);
 isSub = OffImm < 0;


 if (OffImm == INT32_MIN)
  OffImm = 0;

 if (isSub) {
  SStream_concat(O, "#-0x%x", -OffImm);
 } else {
  printUInt32Bang(O, OffImm);
 }

 SStream_concat0(O, "]");

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_MEM;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].mem.base = ARM_REG_PC;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].mem.index = ARM_REG_INVALID;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].mem.scale = 1;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].mem.disp = OffImm;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].access = CS_AC_READ;
  MI->flat_insn->detail->arm.op_count++;
 }
}






static void printSORegRegOperand(MCInst *MI, unsigned OpNum, SStream *O)
{
 MCOperand *MO1 = MCInst_getOperand(MI, OpNum);
 MCOperand *MO2 = MCInst_getOperand(MI, OpNum + 1);
 MCOperand *MO3 = MCInst_getOperand(MI, OpNum + 2);
 ARM_AM_ShiftOpc ShOpc;

 printRegName(MI->csh, O, MCOperand_getReg(MO1));

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_REG;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].reg = MCOperand_getReg(MO1);
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].access = CS_AC_READ;

  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].shift.type = (MCOperand_getImm(MO3) & 7) + ARM_SFT_ASR_REG - 1;
  MI->flat_insn->detail->arm.op_count++;
 }


 ShOpc = ARM_AM_getSORegShOp((unsigned int)MCOperand_getImm(MO3));
 SStream_concat0(O, ", ");
 SStream_concat0(O, ARM_AM_getShiftOpcStr(ShOpc));
 if (ShOpc == ARM_AM_rrx)
  return;

 SStream_concat0(O, " ");

 printRegName(MI->csh, O, MCOperand_getReg(MO2));

 if (MI->csh->detail)
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count - 1].shift.value = MCOperand_getReg(MO2);
}

static void printSORegImmOperand(MCInst *MI, unsigned OpNum, SStream *O)
{
 MCOperand *MO1 = MCInst_getOperand(MI, OpNum);
 MCOperand *MO2 = MCInst_getOperand(MI, OpNum + 1);

 printRegName(MI->csh, O, MCOperand_getReg(MO1));

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_REG;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].reg = MCOperand_getReg(MO1);
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].access = CS_AC_READ;
  MI->flat_insn->detail->arm.op_count++;
 }


 printRegImmShift(MI, O, ARM_AM_getSORegShOp((unsigned int)MCOperand_getImm(MO2)),
   getSORegOffset((unsigned int)MCOperand_getImm(MO2)));
}





static void printAM2PreOrOffsetIndexOp(MCInst *MI, unsigned Op, SStream *O)
{
 MCOperand *MO1 = MCInst_getOperand(MI, Op);
 MCOperand *MO2 = MCInst_getOperand(MI, Op + 1);
 MCOperand *MO3 = MCInst_getOperand(MI, Op + 2);
 unsigned int imm3 = (unsigned int)MCOperand_getImm(MO3);
 ARM_AM_AddrOpc subtracted = getAM2Op((unsigned int)MCOperand_getImm(MO3));

 SStream_concat0(O, "[");
 set_mem_access(MI, true);

 printRegName(MI->csh, O, MCOperand_getReg(MO1));
 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].mem.base = MCOperand_getReg(MO1);
 }

 if (!MCOperand_getReg(MO2)) {
  unsigned tmp = getAM2Offset(imm3);
  if (tmp) {
   subtracted = getAM2Op(imm3);

   SStream_concat0(O, ", ");
   if (tmp > HEX_THRESHOLD)
    SStream_concat(O, "#%s0x%x", ARM_AM_getAddrOpcStr(subtracted), tmp);
   else
    SStream_concat(O, "#%s%u", ARM_AM_getAddrOpcStr(subtracted), tmp);
   if (MI->csh->detail) {
    MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].shift.type = (arm_shifter)getAM2Op(imm3);
    MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].shift.value = tmp;
    MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].subtracted = subtracted == ARM_AM_sub;
   }
  }

  SStream_concat0(O, "]");
  set_mem_access(MI, false);

  return;
 }

 SStream_concat0(O, ", ");
 SStream_concat0(O, ARM_AM_getAddrOpcStr(subtracted));
 printRegName(MI->csh, O, MCOperand_getReg(MO2));
 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].mem.index = MCOperand_getReg(MO2);
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].subtracted = subtracted == ARM_AM_sub;
 }

 printRegImmShift(MI, O, getAM2ShiftOpc(imm3), getAM2Offset(imm3));
 SStream_concat0(O, "]");
 set_mem_access(MI, false);
}

static void printAddrModeTBB(MCInst *MI, unsigned Op, SStream *O)
{
 MCOperand *MO1 = MCInst_getOperand(MI, Op);
 MCOperand *MO2 = MCInst_getOperand(MI, Op + 1);

 SStream_concat0(O, "[");
 set_mem_access(MI, true);

 printRegName(MI->csh, O, MCOperand_getReg(MO1));

 if (MI->csh->detail)
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].mem.base = MCOperand_getReg(MO1);

 SStream_concat0(O, ", ");
 printRegName(MI->csh, O, MCOperand_getReg(MO2));

 if (MI->csh->detail)
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].mem.index = MCOperand_getReg(MO2);

 SStream_concat0(O, "]");
 set_mem_access(MI, false);
}

static void printAddrModeTBH(MCInst *MI, unsigned Op, SStream *O)
{
 MCOperand *MO1 = MCInst_getOperand(MI, Op);
 MCOperand *MO2 = MCInst_getOperand(MI, Op + 1);

 SStream_concat0(O, "[");
 set_mem_access(MI, true);

 printRegName(MI->csh, O, MCOperand_getReg(MO1));

 if (MI->csh->detail)
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].mem.base = MCOperand_getReg(MO1);

 SStream_concat0(O, ", ");
 printRegName(MI->csh, O, MCOperand_getReg(MO2));

 if (MI->csh->detail)
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].mem.index = MCOperand_getReg(MO2);

 SStream_concat0(O, ", lsl #1]");

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].shift.type = ARM_SFT_LSL;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].shift.value = 1;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].mem.lshift = 1;
 }

 set_mem_access(MI, false);
}

static void printAddrMode2Operand(MCInst *MI, unsigned Op, SStream *O)
{
 MCOperand *MO1 = MCInst_getOperand(MI, Op);

 if (!MCOperand_isReg(MO1)) {
  printOperand(MI, Op, O);
  return;
 }







 printAM2PreOrOffsetIndexOp(MI, Op, O);
}

static void printAddrMode2OffsetOperand(MCInst *MI, unsigned OpNum, SStream *O)
{
 MCOperand *MO1 = MCInst_getOperand(MI, OpNum);
 MCOperand *MO2 = MCInst_getOperand(MI, OpNum + 1);
 ARM_AM_AddrOpc subtracted = getAM2Op((unsigned int)MCOperand_getImm(MO2));

 if (!MCOperand_getReg(MO1)) {
  unsigned ImmOffs = getAM2Offset((unsigned int)MCOperand_getImm(MO2));
  if (ImmOffs > HEX_THRESHOLD)
   SStream_concat(O, "#%s0x%x",
     ARM_AM_getAddrOpcStr(subtracted), ImmOffs);
  else
   SStream_concat(O, "#%s%u",
     ARM_AM_getAddrOpcStr(subtracted), ImmOffs);

  if (MI->csh->detail) {
   MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_IMM;
   MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].imm = ImmOffs;
   MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].subtracted = subtracted == ARM_AM_sub;
   MI->flat_insn->detail->arm.op_count++;
  }
  return;
 }

 SStream_concat0(O, ARM_AM_getAddrOpcStr(subtracted));
 printRegName(MI->csh, O, MCOperand_getReg(MO1));

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_REG;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].reg = MCOperand_getReg(MO1);
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].access = CS_AC_READ;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].subtracted = subtracted == ARM_AM_sub;
  MI->flat_insn->detail->arm.op_count++;
 }

 printRegImmShift(MI, O, getAM2ShiftOpc((unsigned int)MCOperand_getImm(MO2)),
   getAM2Offset((unsigned int)MCOperand_getImm(MO2)));
}





static void printAM3PreOrOffsetIndexOp(MCInst *MI, unsigned Op, SStream *O,
  bool AlwaysPrintImm0)
{
 MCOperand *MO1 = MCInst_getOperand(MI, Op);
 MCOperand *MO2 = MCInst_getOperand(MI, Op+1);
 MCOperand *MO3 = MCInst_getOperand(MI, Op+2);
 ARM_AM_AddrOpc sign = getAM3Op((unsigned int)MCOperand_getImm(MO3));
 unsigned ImmOffs;

 SStream_concat0(O, "[");
 set_mem_access(MI, true);

 printRegName(MI->csh, O, MCOperand_getReg(MO1));

 if (MI->csh->detail)
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].mem.base = MCOperand_getReg(MO1);

 if (MCOperand_getReg(MO2)) {
  SStream_concat0(O, ", ");
  SStream_concat0(O, ARM_AM_getAddrOpcStr(sign));

  printRegName(MI->csh, O, MCOperand_getReg(MO2));

  if (MI->csh->detail) {
   MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].mem.index = MCOperand_getReg(MO2);
   if (sign == ARM_AM_sub) {
    MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].mem.scale = -1;
    MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].subtracted = true;
   }
  }

  SStream_concat0(O, "]");
  set_mem_access(MI, false);

  return;
 }


 ImmOffs = getAM3Offset((unsigned int)MCOperand_getImm(MO3));

 if (AlwaysPrintImm0 || ImmOffs || (sign == ARM_AM_sub)) {
  if (ImmOffs > HEX_THRESHOLD)
   SStream_concat(O, ", #%s0x%x", ARM_AM_getAddrOpcStr(sign), ImmOffs);
  else
   SStream_concat(O, ", #%s%u", ARM_AM_getAddrOpcStr(sign), ImmOffs);
 }

 if (MI->csh->detail) {
  if (sign == ARM_AM_sub) {
   MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].mem.disp = -(int)ImmOffs;
   MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].subtracted = true;
  } else
   MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].mem.disp = (int)ImmOffs;
 }

 SStream_concat0(O, "]");
 set_mem_access(MI, false);
}

static void printAddrMode3Operand(MCInst *MI, unsigned Op, SStream *O,
  bool AlwaysPrintImm0)
{
 MCOperand *MO1 = MCInst_getOperand(MI, Op);

 if (!MCOperand_isReg(MO1)) {
  printOperand(MI, Op, O);
  return;
 }

 printAM3PreOrOffsetIndexOp(MI, Op, O, AlwaysPrintImm0);
}

static void printAddrMode3OffsetOperand(MCInst *MI, unsigned OpNum, SStream *O)
{
 MCOperand *MO1 = MCInst_getOperand(MI, OpNum);
 MCOperand *MO2 = MCInst_getOperand(MI, OpNum + 1);
 ARM_AM_AddrOpc subtracted = getAM3Op((unsigned int)MCOperand_getImm(MO2));
 unsigned ImmOffs;

 if (MCOperand_getReg(MO1)) {
  SStream_concat0(O, ARM_AM_getAddrOpcStr(subtracted));
  printRegName(MI->csh, O, MCOperand_getReg(MO1));

  if (MI->csh->detail) {
   MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_REG;
   MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].reg = MCOperand_getReg(MO1);
   MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].access = CS_AC_READ;
   MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].subtracted = subtracted == ARM_AM_sub;
   MI->flat_insn->detail->arm.op_count++;
  }

  return;
 }

 ImmOffs = getAM3Offset((unsigned int)MCOperand_getImm(MO2));
 if (ImmOffs > HEX_THRESHOLD)
  SStream_concat(O, "#%s0x%x", ARM_AM_getAddrOpcStr(subtracted), ImmOffs);
 else
  SStream_concat(O, "#%s%u", ARM_AM_getAddrOpcStr(subtracted), ImmOffs);

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_IMM;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].imm = ImmOffs;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].subtracted = subtracted == ARM_AM_sub;
  MI->flat_insn->detail->arm.op_count++;
 }
}

static void printPostIdxImm8Operand(MCInst *MI, unsigned OpNum, SStream *O)
{
 MCOperand *MO = MCInst_getOperand(MI, OpNum);
 unsigned Imm = (unsigned int)MCOperand_getImm(MO);

 if ((Imm & 0xff) > HEX_THRESHOLD)
  SStream_concat(O, "#%s0x%x", ((Imm & 256) ? "" : "-"), (Imm & 0xff));
 else
  SStream_concat(O, "#%s%u", ((Imm & 256) ? "" : "-"), (Imm & 0xff));

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_IMM;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].imm = Imm & 0xff;
  MI->flat_insn->detail->arm.op_count++;
 }
}

static void printPostIdxRegOperand(MCInst *MI, unsigned OpNum, SStream *O)
{
 MCOperand *MO1 = MCInst_getOperand(MI, OpNum);
 MCOperand *MO2 = MCInst_getOperand(MI, OpNum + 1);

 SStream_concat0(O, (MCOperand_getImm(MO2) ? "" : "-"));
 printRegName(MI->csh, O, MCOperand_getReg(MO1));

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_REG;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].reg = MCOperand_getReg(MO1);
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].access = CS_AC_READ;
  MI->flat_insn->detail->arm.op_count++;
 }
}

static void printPostIdxImm8s4Operand(MCInst *MI, unsigned OpNum, SStream *O)
{
 MCOperand *MO = MCInst_getOperand(MI, OpNum);
 int Imm = (int)MCOperand_getImm(MO);

 if (((Imm & 0xff) << 2) > HEX_THRESHOLD) {
  SStream_concat(O, "#%s0x%x", ((Imm & 256) ? "" : "-"), ((Imm & 0xff) << 2));
 } else {
  SStream_concat(O, "#%s%u", ((Imm & 256) ? "" : "-"), ((Imm & 0xff) << 2));
 }

 if (MI->csh->detail) {
  int v = (Imm & 256) ? ((Imm & 0xff) << 2) : -((Imm & 0xff) << 2);
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_IMM;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].imm = v;
  MI->flat_insn->detail->arm.op_count++;
 }
}

static void printAddrMode5Operand(MCInst *MI, unsigned OpNum, SStream *O,
  bool AlwaysPrintImm0)
{
 unsigned ImmOffs;
 MCOperand *MO1 = MCInst_getOperand(MI, OpNum);
 MCOperand *MO2 = MCInst_getOperand(MI, OpNum + 1);
 ARM_AM_AddrOpc Op = ARM_AM_getAM5Op((unsigned int)MCOperand_getImm(MO2));

 if (!MCOperand_isReg(MO1)) {
  printOperand(MI, OpNum, O);
  return;
 }

 SStream_concat0(O, "[");
 printRegName(MI->csh, O, MCOperand_getReg(MO1));

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_MEM;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].mem.base = MCOperand_getReg(MO1);
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].mem.index = ARM_REG_INVALID;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].mem.scale = 1;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].mem.disp = 0;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].access = CS_AC_READ;
 }

 ImmOffs = ARM_AM_getAM5Offset((unsigned int)MCOperand_getImm(MO2));
 if (AlwaysPrintImm0 || ImmOffs || Op == ARM_AM_sub) {
  if (ImmOffs * 4 > HEX_THRESHOLD)
   SStream_concat(O, ", #%s0x%x",
     ARM_AM_getAddrOpcStr(Op),
     ImmOffs * 4);
  else
   SStream_concat(O, ", #%s%u",
     ARM_AM_getAddrOpcStr(Op),
     ImmOffs * 4);

  if (MI->csh->detail) {
   if (Op)
    MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].mem.disp = ImmOffs * 4;
   else
    MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].mem.disp = -(int)ImmOffs * 4;
  }
 }

 SStream_concat0(O, "]");

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.op_count++;
 }
}

static void printAddrMode5FP16Operand(MCInst *MI, unsigned OpNum, SStream *O,
  bool AlwaysPrintImm0)
{
  MCOperand *MO1 = MCInst_getOperand(MI, OpNum);
  MCOperand *MO2 = MCInst_getOperand(MI, OpNum + 1);
  unsigned ImmOffs = getAM5FP16Offset((unsigned)MCOperand_getImm(MO2));
  unsigned Op = getAM5FP16Op((unsigned)MCOperand_getImm(MO2));

  if (!MCOperand_isReg(MO1)) {
   printOperand(MI, OpNum, O);
   return;
  }

  SStream_concat0(O, "[");
  printRegName(MI->csh, O, MCOperand_getReg(MO1));

  if (MI->csh->detail) {
   MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_MEM;
   MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].mem.base = MCOperand_getReg(MO1);
   MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].mem.index = ARM_REG_INVALID;
   MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].mem.scale = 1;
   MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].mem.disp = 0;
   MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].access = CS_AC_READ;
  }

  if (AlwaysPrintImm0 || ImmOffs || Op == ARM_AM_sub) {
 if (ImmOffs * 2 > HEX_THRESHOLD)
  SStream_concat(O, ", #%s0x%x", ARM_AM_getAddrOpcStr(Op), ImmOffs * 2);
 else
  SStream_concat(O, ", #%s%u", ARM_AM_getAddrOpcStr(Op), ImmOffs * 2);

 if (MI->csh->detail) {
  if (Op)
   MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].mem.disp = ImmOffs * 2;
  else
   MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].mem.disp = -(int)ImmOffs * 2;
 }
  }

  SStream_concat0(O, "]");

  if (MI->csh->detail) {
   MI->flat_insn->detail->arm.op_count++;
  }
}

static void printAddrMode6Operand(MCInst *MI, unsigned OpNum, SStream *O)
{
 MCOperand *MO1 = MCInst_getOperand(MI, OpNum);
 MCOperand *MO2 = MCInst_getOperand(MI, OpNum + 1);
 unsigned tmp;

 SStream_concat0(O, "[");
 set_mem_access(MI, true);

 printRegName(MI->csh, O, MCOperand_getReg(MO1));

 if (MI->csh->detail)
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].mem.base = MCOperand_getReg(MO1);

 tmp = (unsigned int)MCOperand_getImm(MO2);
 if (tmp) {
  if (tmp << 3 > HEX_THRESHOLD)
   SStream_concat(O, ":0x%x", (tmp << 3));
  else
   SStream_concat(O, ":%u", (tmp << 3));

  if (MI->csh->detail)
   MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].mem.disp = tmp << 3;
 }

 SStream_concat0(O, "]");
 set_mem_access(MI, false);
}

static void printAddrMode7Operand(MCInst *MI, unsigned OpNum, SStream *O)
{
 MCOperand *MO1 = MCInst_getOperand(MI, OpNum);

 SStream_concat0(O, "[");
 set_mem_access(MI, true);

 printRegName(MI->csh, O, MCOperand_getReg(MO1));

 if (MI->csh->detail)
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].mem.base = MCOperand_getReg(MO1);

 SStream_concat0(O, "]");
 set_mem_access(MI, false);
}

static void printAddrMode6OffsetOperand(MCInst *MI, unsigned OpNum, SStream *O)
{
 MCOperand *MO = MCInst_getOperand(MI, OpNum);

 if (MCOperand_getReg(MO) == 0) {
  MI->writeback = true;
  SStream_concat0(O, "!");
 } else {
  SStream_concat0(O, ", ");
  printRegName(MI->csh, O, MCOperand_getReg(MO));

  if (MI->csh->detail) {
   MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_REG;
   MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].reg = MCOperand_getReg(MO);
   MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].access = CS_AC_READ;
   MI->flat_insn->detail->arm.op_count++;
  }
 }
}

static void printBitfieldInvMaskImmOperand(MCInst *MI, unsigned OpNum, SStream *O)
{
 MCOperand *MO = MCInst_getOperand(MI, OpNum);
 uint32_t v = ~(uint32_t)MCOperand_getImm(MO);
 int32_t lsb = CountTrailingZeros_32(v);
 int32_t width = (32 - CountLeadingZeros_32 (v)) - lsb;


 printUInt32Bang(O, lsb);

 if (width > HEX_THRESHOLD)
  SStream_concat(O, ", #0x%x", width);
 else
  SStream_concat(O, ", #%u", width);

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_IMM;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].imm = lsb;
  MI->flat_insn->detail->arm.op_count++;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_IMM;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].imm = width;
  MI->flat_insn->detail->arm.op_count++;
 }
}

static void printMemBOption(MCInst *MI, unsigned OpNum, SStream *O)
{
 unsigned val = (unsigned int)MCOperand_getImm(MCInst_getOperand(MI, OpNum));
 SStream_concat0(O, ARM_MB_MemBOptToString(val,
    ARM_getFeatureBits(MI->csh->mode, ARM_HasV8Ops)));

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.mem_barrier = (arm_mem_barrier)(val + 1);
 }
}

static void printInstSyncBOption(MCInst *MI, unsigned OpNum, SStream *O)
{
 unsigned val = (unsigned int)MCOperand_getImm(MCInst_getOperand(MI, OpNum));
 SStream_concat0(O, ARM_ISB_InstSyncBOptToString(val));
}

static void printTraceSyncBOption(MCInst *MI, unsigned OpNum, SStream *O)
{
 unsigned val = (unsigned int)MCOperand_getImm(MCInst_getOperand(MI, OpNum));
 SStream_concat0(O, ARM_TSB_TraceSyncBOptToString(val));

}

static void printShiftImmOperand(MCInst *MI, unsigned OpNum, SStream *O)
{
 unsigned ShiftOp = (unsigned int)MCOperand_getImm(MCInst_getOperand(MI, OpNum));
 bool isASR = (ShiftOp & (1 << 5)) != 0;
 unsigned Amt = ShiftOp & 0x1f;

 if (isASR) {
  unsigned tmp = Amt == 0 ? 32 : Amt;
  if (tmp > HEX_THRESHOLD)
   SStream_concat(O, ", asr #0x%x", tmp);
  else
   SStream_concat(O, ", asr #%u", tmp);

  if (MI->csh->detail) {
   MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count - 1].shift.type = ARM_SFT_ASR;
   MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count - 1].shift.value = tmp;
  }
 } else if (Amt) {
  if (Amt > HEX_THRESHOLD)
   SStream_concat(O, ", lsl #0x%x", Amt);
  else
   SStream_concat(O, ", lsl #%u", Amt);

  if (MI->csh->detail) {
   MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count - 1].shift.type = ARM_SFT_LSL;
   MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count - 1].shift.value = Amt;
  }
 }
}

static void printPKHLSLShiftImm(MCInst *MI, unsigned OpNum, SStream *O)
{
 unsigned Imm = (unsigned int)MCOperand_getImm(MCInst_getOperand(MI, OpNum));

 if (Imm == 0)
  return;


 if (Imm > HEX_THRESHOLD)
  SStream_concat(O, ", lsl #0x%x", Imm);
 else
  SStream_concat(O, ", lsl #%u", Imm);

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count - 1].shift.type = ARM_SFT_LSL;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count - 1].shift.value = Imm;
 }
}

static void printPKHASRShiftImm(MCInst *MI, unsigned OpNum, SStream *O)
{
 unsigned Imm = (unsigned int)MCOperand_getImm(MCInst_getOperand(MI, OpNum));


 if (Imm == 0)
  Imm = 32;


 if (Imm > HEX_THRESHOLD)
  SStream_concat(O, ", asr #0x%x", Imm);
 else
  SStream_concat(O, ", asr #%u", Imm);

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count - 1].shift.type = ARM_SFT_ASR;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count - 1].shift.value = Imm;
 }
}


static void printRegisterList(MCInst *MI, unsigned OpNum, SStream *O)
{
 unsigned i, e;
#ifndef CAPSTONE_DIET
 uint8_t access = 0;
#endif

 SStream_concat0(O, "{");

#ifndef CAPSTONE_DIET
 if (MI->csh->detail) {
  access = get_op_access(MI->csh, MCInst_getOpcode(MI), MI->ac_idx);
 }
#endif

 for (i = OpNum, e = MCInst_getNumOperands(MI); i != e; ++i) {
  if (i != OpNum)
   SStream_concat0(O, ", ");

  printRegName(MI->csh, O, MCOperand_getReg(MCInst_getOperand(MI, i)));

  if (MI->csh->detail) {
   MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_REG;
   MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].reg = MCOperand_getReg(MCInst_getOperand(MI, i));
#ifndef CAPSTONE_DIET
   MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].access = access;
#endif
   MI->flat_insn->detail->arm.op_count++;
  }
 }

 SStream_concat0(O, "}");

#ifndef CAPSTONE_DIET
 if (MI->csh->detail) {
  MI->ac_idx++;
 }
#endif
}

static void printGPRPairOperand(MCInst *MI, unsigned OpNum, SStream *O)
{
 unsigned Reg = MCOperand_getReg(MCInst_getOperand(MI, OpNum));

 printRegName(MI->csh, O, MCRegisterInfo_getSubReg(MI->MRI, Reg, ARM_gsub_0));

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_REG;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].reg = MCRegisterInfo_getSubReg(MI->MRI, Reg, ARM_gsub_0);
  MI->flat_insn->detail->arm.op_count++;
 }

 SStream_concat0(O, ", ");

 printRegName(MI->csh, O, MCRegisterInfo_getSubReg(MI->MRI, Reg, ARM_gsub_1));

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_REG;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].reg = MCRegisterInfo_getSubReg(MI->MRI, Reg, ARM_gsub_1);
  MI->flat_insn->detail->arm.op_count++;
 }
}


static void printSetendOperand(MCInst *MI, unsigned OpNum, SStream *O)
{
 MCOperand *Op = MCInst_getOperand(MI, OpNum);

 if (MCOperand_getImm(Op)) {
  SStream_concat0(O, "be");

  if (MI->csh->detail) {
   MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_SETEND;
   MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].setend = ARM_SETEND_BE;
   MI->flat_insn->detail->arm.op_count++;
  }
 } else {
  SStream_concat0(O, "le");

  if (MI->csh->detail) {
   MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_SETEND;
   MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].setend = ARM_SETEND_LE;
   MI->flat_insn->detail->arm.op_count++;
  }
 }
}

static void printCPSIMod(MCInst *MI, unsigned OpNum, SStream *O)
{
 MCOperand *Op = MCInst_getOperand(MI, OpNum);
 unsigned int mode = (unsigned int)MCOperand_getImm(Op);

 SStream_concat0(O, ARM_PROC_IModToString(mode));

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.cps_mode = mode;
 }
}

static void printCPSIFlag(MCInst *MI, unsigned OpNum, SStream *O)
{
 MCOperand *Op = MCInst_getOperand(MI, OpNum);
 unsigned IFlags = (unsigned int)MCOperand_getImm(Op);
 int i;

 for (i = 2; i >= 0; --i)
  if (IFlags & (1 << i)) {
   SStream_concat0(O, ARM_PROC_IFlagsToString(1 << i));
  }

 if (IFlags == 0) {
  SStream_concat0(O, "none");
  IFlags = ARM_CPSFLAG_NONE;
 }

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.cps_flag = IFlags;
 }
}

static void printMSRMaskOperand(MCInst *MI, unsigned OpNum, SStream *O)
{
 MCOperand *Op = MCInst_getOperand(MI, OpNum);
 unsigned SpecRegRBit = (unsigned)MCOperand_getImm(Op) >> 4;
 unsigned Mask = (unsigned)MCOperand_getImm(Op) & 0xf;
 unsigned reg;

 if (ARM_getFeatureBits(MI->csh->mode, ARM_FeatureMClass)) {
  const MClassSysReg *TheReg;
  unsigned SYSm = (unsigned)MCOperand_getImm(Op) & 0xFFF;
  unsigned Opcode = MCInst_getOpcode(MI);

  if (Opcode == ARM_t2MSR_M && ARM_getFeatureBits(MI->csh->mode, ARM_FeatureDSP)) {
   TheReg = lookupMClassSysRegBy12bitSYSmValue(SYSm);
   if (TheReg && MClassSysReg_isInRequiredFeatures(TheReg, ARM_FeatureDSP)) {
    SStream_concat0(O, TheReg->Name);
    ARM_addSysReg(MI, TheReg->sysreg);
    return;
   }
  }


  SYSm &= 0xff;
  if (Opcode == ARM_t2MSR_M && ARM_getFeatureBits(MI->csh->mode, ARM_HasV7Ops)) {


   TheReg = lookupMClassSysRegAPSRNonDeprecated(SYSm);
   if (TheReg) {
    SStream_concat0(O, TheReg->Name);
    ARM_addSysReg(MI, TheReg->sysreg);
    return;
   }
  }

  TheReg = lookupMClassSysRegBy8bitSYSmValue(SYSm);
  if (TheReg) {
   SStream_concat0(O, TheReg->Name);
   ARM_addSysReg(MI, TheReg->sysreg);
   return;
  }

  if (SYSm > HEX_THRESHOLD)
   SStream_concat(O, "%x", SYSm);
  else
   SStream_concat(O, "%u", SYSm);

  if (MI->csh->detail)
   MCOperand_CreateImm0(MI, SYSm);

  return;
 }



 if (!SpecRegRBit && (Mask == 8 || Mask == 4 || Mask == 12)) {
  SStream_concat0(O, "apsr_");
  switch (Mask) {
   default:
   case 4: SStream_concat0(O, "g"); ARM_addSysReg(MI, ARM_SYSREG_APSR_G); return;
   case 8: SStream_concat0(O, "nzcvq"); ARM_addSysReg(MI, ARM_SYSREG_APSR_NZCVQ); return;
   case 12: SStream_concat0(O, "nzcvqg"); ARM_addSysReg(MI, ARM_SYSREG_APSR_NZCVQG); return;
  }
 }

 if (SpecRegRBit) {
  SStream_concat0(O, "spsr");
 } else {
  SStream_concat0(O, "cpsr");
 }

 reg = 0;
 if (Mask) {
  SStream_concat0(O, "_");

  if (Mask & 8) {
   SStream_concat0(O, "f");
   reg += ARM_SYSREG_SPSR_F;
  }

  if (Mask & 4) {
   SStream_concat0(O, "s");
   reg += ARM_SYSREG_SPSR_S;
  }

  if (Mask & 2) {
   SStream_concat0(O, "x");
   reg += ARM_SYSREG_SPSR_X;
  }

  if (Mask & 1) {
   SStream_concat0(O, "c");
   reg += ARM_SYSREG_SPSR_C;
  }

  ARM_addSysReg(MI, reg);
 }
}

static void printBankedRegOperand(MCInst *MI, unsigned OpNum, SStream *O)
{
 uint32_t Banked = (uint32_t)MCOperand_getImm(MCInst_getOperand(MI, OpNum));
 const BankedReg *TheReg = lookupBankedRegByEncoding(Banked);

 SStream_concat0(O, TheReg->Name);
 ARM_addSysReg(MI, TheReg->sysreg);
}

static void printPredicateOperand(MCInst *MI, unsigned OpNum, SStream *O)
{
 ARMCC_CondCodes CC = (ARMCC_CondCodes)MCOperand_getImm(MCInst_getOperand(MI, OpNum));

 if ((unsigned)CC == 15) {
  SStream_concat0(O, "<und>");

  if (MI->csh->detail)
   MI->flat_insn->detail->arm.cc = ARM_CC_INVALID;
 } else {
  if (CC != ARMCC_AL) {
   SStream_concat0(O, ARMCC_ARMCondCodeToString(CC));
  }

  if (MI->csh->detail)
   MI->flat_insn->detail->arm.cc = CC + 1;
 }
}

static void printMandatoryPredicateOperand(MCInst *MI, unsigned OpNum, SStream *O)
{
 ARMCC_CondCodes CC = (ARMCC_CondCodes)MCOperand_getImm(MCInst_getOperand(MI, OpNum));
 SStream_concat0(O, ARMCC_ARMCondCodeToString(CC));

 if (MI->csh->detail)
  MI->flat_insn->detail->arm.cc = CC + 1;
}

static void printSBitModifierOperand(MCInst *MI, unsigned OpNum, SStream *O)
{
 if (MCOperand_getReg(MCInst_getOperand(MI, OpNum))) {


  SStream_concat0(O, "s");

  if (MI->csh->detail)
   MI->flat_insn->detail->arm.update_flags = true;
 }
}

static void printNoHashImmediate(MCInst *MI, unsigned OpNum, SStream *O)
{
 unsigned tmp = (unsigned int)MCOperand_getImm(MCInst_getOperand(MI, OpNum));

 printUInt32(O, tmp);

 if (MI->csh->detail) {
  if (MI->csh->doing_mem) {
   MI->flat_insn->detail->arm.op_count--;
   MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].neon_lane = (int8_t)tmp;
   MI->ac_idx--;
  } else {
   MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_IMM;
   MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].imm = tmp;
   MI->flat_insn->detail->arm.op_count++;
  }
 }
}

static void printPImmediate(MCInst *MI, unsigned OpNum, SStream *O)
{
 unsigned imm = (unsigned int)MCOperand_getImm(MCInst_getOperand(MI, OpNum));

 SStream_concat(O, "p%u", imm);

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_PIMM;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].imm = imm;
  MI->flat_insn->detail->arm.op_count++;
 }
}

static void printCImmediate(MCInst *MI, unsigned OpNum, SStream *O)
{
 unsigned imm = (unsigned int)MCOperand_getImm(MCInst_getOperand(MI, OpNum));

 SStream_concat(O, "c%u", imm);

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_CIMM;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].imm = imm;
  MI->flat_insn->detail->arm.op_count++;
 }
}

static void printCoprocOptionImm(MCInst *MI, unsigned OpNum, SStream *O)
{
 unsigned tmp = (unsigned int)MCOperand_getImm(MCInst_getOperand(MI, OpNum));
 if (tmp > HEX_THRESHOLD)
  SStream_concat(O, "{0x%x}", tmp);
 else
  SStream_concat(O, "{%u}", tmp);

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_IMM;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].imm = tmp;
  MI->flat_insn->detail->arm.op_count++;
 }
}

static void printAdrLabelOperand(MCInst *MI, unsigned OpNum, SStream *O, unsigned scale)
{
 MCOperand *MO = MCInst_getOperand(MI, OpNum);

 int32_t OffImm = (int32_t)MCOperand_getImm(MO) << scale;

 if (OffImm == INT32_MIN) {
  SStream_concat0(O, "#-0");

  if (MI->csh->detail) {
   MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_IMM;
   MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].imm = 0;
   MI->flat_insn->detail->arm.op_count++;
  }
 } else {
  if (OffImm < 0)
   SStream_concat(O, "#-0x%x", -OffImm);
  else {
   if (OffImm > HEX_THRESHOLD)
    SStream_concat(O, "#0x%x", OffImm);
   else
    SStream_concat(O, "#%u", OffImm);
  }

  if (MI->csh->detail) {
   MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_IMM;
   MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].imm = OffImm;
   MI->flat_insn->detail->arm.op_count++;
  }
 }
}

static void printThumbS4ImmOperand(MCInst *MI, unsigned OpNum, SStream *O)
{
 unsigned tmp = (unsigned int)MCOperand_getImm(MCInst_getOperand(MI, OpNum)) * 4;

 printUInt32Bang(O, tmp);

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_IMM;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].imm = tmp;
  MI->flat_insn->detail->arm.op_count++;
 }
}

static void printThumbSRImm(MCInst *MI, unsigned OpNum, SStream *O)
{
 unsigned Imm = (unsigned int)MCOperand_getImm(MCInst_getOperand(MI, OpNum));
 unsigned tmp = Imm == 0 ? 32 : Imm;

 printUInt32Bang(O, tmp);

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_IMM;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].imm = tmp;
  MI->flat_insn->detail->arm.op_count++;
 }
}

static void printThumbITMask(MCInst *MI, unsigned OpNum, SStream *O)
{

 unsigned Mask = (unsigned int)MCOperand_getImm(MCInst_getOperand(MI, OpNum));
 unsigned Firstcond = (unsigned int)MCOperand_getImm(MCInst_getOperand(MI, OpNum - 1));
 unsigned CondBit0 = Firstcond & 1;
 unsigned NumTZ = CountTrailingZeros_32(Mask);

 unsigned Pos, e;

 for (Pos = 3, e = NumTZ; Pos > e; --Pos) {
  bool T = ((Mask >> Pos) & 1) == CondBit0;
  if (T)
   SStream_concat0(O, "t");
  else
   SStream_concat0(O, "e");

 }
}

static void printThumbAddrModeRROperand(MCInst *MI, unsigned Op, SStream *O)
{
 MCOperand *MO1 = MCInst_getOperand(MI, Op);
 MCOperand *MO2 = MCInst_getOperand(MI, Op + 1);
 unsigned RegNum;

 if (!MCOperand_isReg(MO1)) {
  printOperand(MI, Op, O);
  return;
 }

 SStream_concat0(O, "[");
 set_mem_access(MI, true);

 printRegName(MI->csh, O, MCOperand_getReg(MO1));

 if (MI->csh->detail)
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].mem.base = MCOperand_getReg(MO1);

 RegNum = MCOperand_getReg(MO2);
 if (RegNum) {
  SStream_concat0(O, ", ");
  printRegName(MI->csh, O, RegNum);

  if (MI->csh->detail)
   MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].mem.index = RegNum;
 }

 SStream_concat0(O, "]");
 set_mem_access(MI, false);
}

static void printThumbAddrModeImm5SOperand(MCInst *MI, unsigned Op, SStream *O,
  unsigned Scale)
{
 MCOperand *MO1 = MCInst_getOperand(MI, Op);
 MCOperand *MO2 = MCInst_getOperand(MI, Op + 1);
 unsigned ImmOffs, tmp;

 if (!MCOperand_isReg(MO1)) {
  printOperand(MI, Op, O);
  return;
 }

 SStream_concat0(O, "[");
 set_mem_access(MI, true);

 printRegName(MI->csh, O, MCOperand_getReg(MO1));

 if (MI->csh->detail)
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].mem.base = MCOperand_getReg(MO1);

 ImmOffs = (unsigned int)MCOperand_getImm(MO2);
 if (ImmOffs) {
  tmp = ImmOffs * Scale;
  SStream_concat0(O, ", ");
  printUInt32Bang(O, tmp);

  if (MI->csh->detail)
   MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].mem.disp = tmp;
 }

 SStream_concat0(O, "]");
 set_mem_access(MI, false);
}

static void printThumbAddrModeImm5S1Operand(MCInst *MI, unsigned Op, SStream *O)
{
 printThumbAddrModeImm5SOperand(MI, Op, O, 1);
}

static void printThumbAddrModeImm5S2Operand(MCInst *MI, unsigned Op, SStream *O)
{
 printThumbAddrModeImm5SOperand(MI, Op, O, 2);
}

static void printThumbAddrModeImm5S4Operand(MCInst *MI, unsigned Op, SStream *O)
{
 printThumbAddrModeImm5SOperand(MI, Op, O, 4);
}

static void printThumbAddrModeSPOperand(MCInst *MI, unsigned Op, SStream *O)
{
 printThumbAddrModeImm5SOperand(MI, Op, O, 4);
}





static void printT2SOOperand(MCInst *MI, unsigned OpNum, SStream *O)
{
 MCOperand *MO1 = MCInst_getOperand(MI, OpNum);
 MCOperand *MO2 = MCInst_getOperand(MI, OpNum + 1);
 unsigned Reg = MCOperand_getReg(MO1);

 printRegName(MI->csh, O, Reg);

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_REG;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].reg = Reg;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].access = CS_AC_READ;
  MI->flat_insn->detail->arm.op_count++;
 }



 printRegImmShift(MI, O, ARM_AM_getSORegShOp((unsigned int)MCOperand_getImm(MO2)),
   getSORegOffset((unsigned int)MCOperand_getImm(MO2)));
}

static void printAddrModeImm12Operand(MCInst *MI, unsigned OpNum,
  SStream *O, bool AlwaysPrintImm0)
{
 MCOperand *MO1 = MCInst_getOperand(MI, OpNum);
 MCOperand *MO2 = MCInst_getOperand(MI, OpNum+1);
 int32_t OffImm;
 bool isSub;

 if (!MCOperand_isReg(MO1)) {
  printOperand(MI, OpNum, O);
  return;
 }

 SStream_concat0(O, "[");
 set_mem_access(MI, true);

 printRegName(MI->csh, O, MCOperand_getReg(MO1));

 if (MI->csh->detail)
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].mem.base = MCOperand_getReg(MO1);

 OffImm = (int32_t)MCOperand_getImm(MO2);
 isSub = OffImm < 0;


 if (OffImm == INT32_MIN)
  OffImm = 0;

 if (isSub) {
  if (OffImm < -HEX_THRESHOLD)
   SStream_concat(O, ", #-0x%x", -OffImm);
  else
   SStream_concat(O, ", #-%u", -OffImm);
 } else if (AlwaysPrintImm0 || OffImm > 0) {
  if (OffImm >= 0) {
   if (OffImm > HEX_THRESHOLD)
    SStream_concat(O, ", #0x%x", OffImm);
   else
    SStream_concat(O, ", #%u", OffImm);
  } else {
   if (OffImm < -HEX_THRESHOLD)
    SStream_concat(O, ", #-0x%x", -OffImm);
   else
    SStream_concat(O, ", #-%u", -OffImm);
  }
 }

 if (MI->csh->detail)
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].mem.disp = OffImm;

 SStream_concat0(O, "]");
 set_mem_access(MI, false);
}

static void printT2AddrModeImm8Operand(MCInst *MI, unsigned OpNum, SStream *O,
  bool AlwaysPrintImm0)
{
 MCOperand *MO1 = MCInst_getOperand(MI, OpNum);
 MCOperand *MO2 = MCInst_getOperand(MI, OpNum+1);
 int32_t OffImm;
 bool isSub;

 SStream_concat0(O, "[");
 set_mem_access(MI, true);

 printRegName(MI->csh, O, MCOperand_getReg(MO1));

 if (MI->csh->detail)
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].mem.base = MCOperand_getReg(MO1);

 OffImm = (int32_t)MCOperand_getImm(MO2);
 isSub = OffImm < 0;


 if (OffImm == INT32_MIN)
  OffImm = 0;

 if (isSub)
  SStream_concat(O, ", #-0x%x", -OffImm);
 else if (AlwaysPrintImm0 || OffImm > 0) {
  if (OffImm > HEX_THRESHOLD)
   SStream_concat(O, ", #0x%x", OffImm);
  else
   SStream_concat(O, ", #%u", OffImm);
 }

 if (MI->csh->detail)
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].mem.disp = OffImm;

 SStream_concat0(O, "]");
 set_mem_access(MI, false);
}

static void printT2AddrModeImm8s4Operand(MCInst *MI,
  unsigned OpNum, SStream *O, bool AlwaysPrintImm0)
{
 MCOperand *MO1 = MCInst_getOperand(MI, OpNum);
 MCOperand *MO2 = MCInst_getOperand(MI, OpNum + 1);
 int32_t OffImm;
 bool isSub;

 if (!MCOperand_isReg(MO1)) {
  printOperand(MI, OpNum, O);
  return;
 }

 SStream_concat0(O, "[");
 set_mem_access(MI, true);

 printRegName(MI->csh, O, MCOperand_getReg(MO1));

 if (MI->csh->detail)
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].mem.base = MCOperand_getReg(MO1);

 OffImm = (int32_t)MCOperand_getImm(MO2);
 isSub = OffImm < 0;




 if (OffImm == INT32_MIN)
  OffImm = 0;

 if (isSub) {
  SStream_concat(O, ", #-0x%x", -OffImm);
 } else if (AlwaysPrintImm0 || OffImm > 0) {
  if (OffImm > HEX_THRESHOLD)
   SStream_concat(O, ", #0x%x", OffImm);
  else
   SStream_concat(O, ", #%u", OffImm);
 }

 if (MI->csh->detail)
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].mem.disp = OffImm;

 SStream_concat0(O, "]");
 set_mem_access(MI, false);
}

static void printT2AddrModeImm0_1020s4Operand(MCInst *MI, unsigned OpNum, SStream *O)
{
 MCOperand *MO1 = MCInst_getOperand(MI, OpNum);
 MCOperand *MO2 = MCInst_getOperand(MI, OpNum + 1);
 unsigned tmp;

 SStream_concat0(O, "[");
 set_mem_access(MI, true);

 printRegName(MI->csh, O, MCOperand_getReg(MO1));

 if (MI->csh->detail)
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].mem.base = MCOperand_getReg(MO1);

 if (MCOperand_getImm(MO2)) {
  SStream_concat0(O, ", ");
  tmp = (unsigned int)MCOperand_getImm(MO2) * 4;
  printUInt32Bang(O, tmp);

  if (MI->csh->detail)
   MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].mem.disp = tmp;
 }

 SStream_concat0(O, "]");
 set_mem_access(MI, false);
}

static void printT2AddrModeImm8OffsetOperand(MCInst *MI,
  unsigned OpNum, SStream *O)
{
 MCOperand *MO1 = MCInst_getOperand(MI, OpNum);
 int32_t OffImm = (int32_t)MCOperand_getImm(MO1);

 SStream_concat0(O, ", ");
 if (OffImm == INT32_MIN) {
  SStream_concat0(O, "#-0");

  if (MI->csh->detail) {
   MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_IMM;
   MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].imm = 0;
   MI->flat_insn->detail->arm.op_count++;
  }
 } else {
  printInt32Bang(O, OffImm);

  if (MI->csh->detail) {
   MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_IMM;
   MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].imm = OffImm;
   MI->flat_insn->detail->arm.op_count++;
  }
 }
}

static void printT2AddrModeImm8s4OffsetOperand(MCInst *MI,
  unsigned OpNum, SStream *O)
{
 MCOperand *MO1 = MCInst_getOperand(MI, OpNum);
 int32_t OffImm = (int32_t)MCOperand_getImm(MO1);



 SStream_concat0(O, ", ");

 if (OffImm == INT32_MIN) {
  SStream_concat0(O, "#-0");

  if (MI->csh->detail) {
   MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_IMM;
   MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].imm = 0;
   MI->flat_insn->detail->arm.op_count++;
  }
 } else {
  printInt32Bang(O, OffImm);

  if (MI->csh->detail) {
   MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_IMM;
   MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].imm = OffImm;
   MI->flat_insn->detail->arm.op_count++;
  }
 }
}

static void printT2AddrModeSoRegOperand(MCInst *MI,
  unsigned OpNum, SStream *O)
{
 MCOperand *MO1 = MCInst_getOperand(MI, OpNum);
 MCOperand *MO2 = MCInst_getOperand(MI, OpNum+1);
 MCOperand *MO3 = MCInst_getOperand(MI, OpNum+2);
 unsigned ShAmt;

 SStream_concat0(O, "[");
 set_mem_access(MI, true);

 printRegName(MI->csh, O, MCOperand_getReg(MO1));

 if (MI->csh->detail)
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].mem.base = MCOperand_getReg(MO1);


 SStream_concat0(O, ", ");
 printRegName(MI->csh, O, MCOperand_getReg(MO2));

 if (MI->csh->detail)
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].mem.index = MCOperand_getReg(MO2);

 ShAmt = (unsigned int)MCOperand_getImm(MO3);
 if (ShAmt) {

  SStream_concat0(O, ", lsl ");
  SStream_concat(O, "#%u", ShAmt);

  if (MI->csh->detail) {
   MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].shift.type = ARM_SFT_LSL;
   MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].shift.value = ShAmt;
  }
 }

 SStream_concat0(O, "]");
 set_mem_access(MI, false);
}

static void printFPImmOperand(MCInst *MI, unsigned OpNum, SStream *O)
{
 MCOperand *MO = MCInst_getOperand(MI, OpNum);

#if defined(_KERNEL_MODE)

 SStream_concat(O, "#<float_point_unsupported>");
#else
 SStream_concat(O, "#%e", getFPImmFloat((unsigned int)MCOperand_getImm(MO)));
#endif

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_FP;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].fp = getFPImmFloat((unsigned int)MCOperand_getImm(MO));
  MI->flat_insn->detail->arm.op_count++;
 }
}

static void printNEONModImmOperand(MCInst *MI, unsigned OpNum, SStream *O)
{
 unsigned EncodedImm = (unsigned int)MCOperand_getImm(MCInst_getOperand(MI, OpNum));
 unsigned EltBits;
 uint64_t Val = ARM_AM_decodeNEONModImm(EncodedImm, &EltBits);

 if (Val > HEX_THRESHOLD)
  SStream_concat(O, "#0x%"PRIx64, Val);
 else
  SStream_concat(O, "#%"PRIu64, Val);

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_IMM;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].imm = (unsigned int)Val;
  MI->flat_insn->detail->arm.op_count++;
 }
}

static void printImmPlusOneOperand(MCInst *MI, unsigned OpNum, SStream *O)
{
 unsigned Imm = (unsigned int)MCOperand_getImm(MCInst_getOperand(MI, OpNum));

 printUInt32Bang(O, Imm + 1);

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_IMM;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].imm = Imm + 1;
  MI->flat_insn->detail->arm.op_count++;
 }
}

static void printRotImmOperand(MCInst *MI, unsigned OpNum, SStream *O)
{
 unsigned Imm = (unsigned int)MCOperand_getImm(MCInst_getOperand(MI, OpNum));

 if (Imm == 0)
  return;

 SStream_concat0(O, ", ror #");

 switch (Imm) {
  default:
  case 1: SStream_concat0(O, "8"); break;
  case 2: SStream_concat0(O, "16"); break;
  case 3: SStream_concat0(O, "24"); break;
 }

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count - 1].shift.type = ARM_SFT_ROR;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count - 1].shift.value = Imm * 8;
 }
}

static void printModImmOperand(MCInst *MI, unsigned OpNum, SStream *O)
{
 MCOperand *Op = MCInst_getOperand(MI, OpNum);
 unsigned Bits = MCOperand_getImm(Op) & 0xFF;
 unsigned Rot = (MCOperand_getImm(Op) & 0xF00) >> 7;
 int32_t Rotated;
 bool PrintUnsigned = false;

 switch (MCInst_getOpcode(MI)) {
  case ARM_MOVi:

   PrintUnsigned = (MCOperand_getReg(MCInst_getOperand(MI, OpNum - 1)) == ARM_PC);
   break;
  case ARM_MSRi:

   PrintUnsigned = true;
   break;
 }

 Rotated = rotr32(Bits, Rot);
 if (getSOImmVal(Rotated) == MCOperand_getImm(Op)) {

  if (PrintUnsigned) {
   if (Rotated > HEX_THRESHOLD || Rotated < -HEX_THRESHOLD)
    SStream_concat(O, "#0x%x", Rotated);
   else
    SStream_concat(O, "#%u", Rotated);
  } else if (Rotated >= 0) {
   if (Rotated > HEX_THRESHOLD)
    SStream_concat(O, "#0x%x", Rotated);
   else
    SStream_concat(O, "#%u", Rotated);
  } else {
   SStream_concat(O, "#0x%x", Rotated);
  }

  if (MI->csh->detail) {
   MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_IMM;
   MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].imm = Rotated;
   MI->flat_insn->detail->arm.op_count++;
  }

  return;
 }


 SStream_concat(O, "#%u, #%u", Bits, Rot);

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_IMM;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].imm = Bits;
  MI->flat_insn->detail->arm.op_count++;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_IMM;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].imm = Rot;
  MI->flat_insn->detail->arm.op_count++;
 }
}

static void printFBits16(MCInst *MI, unsigned OpNum, SStream *O)
{
 unsigned tmp;

 tmp = 16 - (unsigned int)MCOperand_getImm(MCInst_getOperand(MI, OpNum));

 printUInt32Bang(O, tmp);

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_IMM;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].imm = tmp;
  MI->flat_insn->detail->arm.op_count++;
 }
}

static void printFBits32(MCInst *MI, unsigned OpNum, SStream *O)
{
 unsigned tmp;

 tmp = 32 - (unsigned int)MCOperand_getImm(MCInst_getOperand(MI, OpNum));

 printUInt32Bang(O, tmp);

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_IMM;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].imm = tmp;
  MI->flat_insn->detail->arm.op_count++;
 }
}

static void printVectorIndex(MCInst *MI, unsigned OpNum, SStream *O)
{
 unsigned tmp = (unsigned int)MCOperand_getImm(MCInst_getOperand(MI, OpNum));

 if (tmp > HEX_THRESHOLD)
  SStream_concat(O, "[0x%x]", tmp);
 else
  SStream_concat(O, "[%u]", tmp);

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count - 1].vector_index = tmp;
 }
}

static void printVectorListOne(MCInst *MI, unsigned OpNum, SStream *O)
{
 SStream_concat0(O, "{");

 printRegName(MI->csh, O, MCOperand_getReg(MCInst_getOperand(MI, OpNum)));

 if (MI->csh->detail) {
#ifndef CAPSTONE_DIET
  uint8_t access;

  access = get_op_access(MI->csh, MCInst_getOpcode(MI), MI->ac_idx);
#endif

  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_REG;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].reg = MCOperand_getReg(MCInst_getOperand(MI, OpNum));
#ifndef CAPSTONE_DIET
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].access = access;
#endif
  MI->flat_insn->detail->arm.op_count++;

#ifndef CAPSTONE_DIET
 MI->ac_idx++;
#endif
 }

 SStream_concat0(O, "}");
}

static void printVectorListTwo(MCInst *MI, unsigned OpNum, SStream *O)
{
#ifndef CAPSTONE_DIET
 uint8_t access;
#endif
 unsigned Reg = MCOperand_getReg(MCInst_getOperand(MI, OpNum));
 unsigned Reg0 = MCRegisterInfo_getSubReg(MI->MRI, Reg, ARM_dsub_0);
 unsigned Reg1 = MCRegisterInfo_getSubReg(MI->MRI, Reg, ARM_dsub_1);

#ifndef CAPSTONE_DIET
 access = get_op_access(MI->csh, MCInst_getOpcode(MI), MI->ac_idx);
#endif

 SStream_concat0(O, "{");

 printRegName(MI->csh, O, Reg0);

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_REG;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].reg = Reg0;
#ifndef CAPSTONE_DIET
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].access = access;
#endif
  MI->flat_insn->detail->arm.op_count++;
 }

 SStream_concat0(O, ", ");

 printRegName(MI->csh, O, Reg1);

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_REG;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].reg = Reg1;
#ifndef CAPSTONE_DIET
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].access = access;
#endif
  MI->flat_insn->detail->arm.op_count++;
 }

 SStream_concat0(O, "}");

#ifndef CAPSTONE_DIET
 MI->ac_idx++;
#endif
}

static void printVectorListTwoSpaced(MCInst *MI, unsigned OpNum, SStream *O)
{
#ifndef CAPSTONE_DIET
 uint8_t access;
#endif
 unsigned Reg = MCOperand_getReg(MCInst_getOperand(MI, OpNum));
 unsigned Reg0 = MCRegisterInfo_getSubReg(MI->MRI, Reg, ARM_dsub_0);
 unsigned Reg1 = MCRegisterInfo_getSubReg(MI->MRI, Reg, ARM_dsub_2);

#ifndef CAPSTONE_DIET
 access = get_op_access(MI->csh, MCInst_getOpcode(MI), MI->ac_idx);
#endif

 SStream_concat0(O, "{");

 printRegName(MI->csh, O, Reg0);

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_REG;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].reg = Reg0;
#ifndef CAPSTONE_DIET
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].access = access;
#endif
  MI->flat_insn->detail->arm.op_count++;
 }

 SStream_concat0(O, ", ");

 printRegName(MI->csh, O, Reg1);

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_REG;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].reg = Reg1;
#ifndef CAPSTONE_DIET
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].access = access;
#endif
  MI->flat_insn->detail->arm.op_count++;
 }

 SStream_concat0(O, "}");

#ifndef CAPSTONE_DIET
 MI->ac_idx++;
#endif
}

static void printVectorListThree(MCInst *MI, unsigned OpNum, SStream *O)
{
#ifndef CAPSTONE_DIET
 uint8_t access;

 access = get_op_access(MI->csh, MCInst_getOpcode(MI), MI->ac_idx);
#endif




 SStream_concat0(O, "{");

 printRegName(MI->csh, O, MCOperand_getReg(MCInst_getOperand(MI, OpNum)));

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_REG;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].reg = MCOperand_getReg(MCInst_getOperand(MI, OpNum));
#ifndef CAPSTONE_DIET
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].access = access;
#endif
  MI->flat_insn->detail->arm.op_count++;
 }

 SStream_concat0(O, ", ");

 printRegName(MI->csh, O, MCOperand_getReg(MCInst_getOperand(MI, OpNum)) + 1);

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_REG;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].reg = MCOperand_getReg(MCInst_getOperand(MI, OpNum)) + 1;
#ifndef CAPSTONE_DIET
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].access = access;
#endif
  MI->flat_insn->detail->arm.op_count++;
 }

 SStream_concat0(O, ", ");

 printRegName(MI->csh, O, MCOperand_getReg(MCInst_getOperand(MI, OpNum)) + 2);

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_REG;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].reg = MCOperand_getReg(MCInst_getOperand(MI, OpNum)) + 2;
#ifndef CAPSTONE_DIET
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].access = access;
#endif
  MI->flat_insn->detail->arm.op_count++;
 }

 SStream_concat0(O, "}");

#ifndef CAPSTONE_DIET
 MI->ac_idx++;
#endif
}

static void printVectorListFour(MCInst *MI, unsigned OpNum, SStream *O)
{
#ifndef CAPSTONE_DIET
 uint8_t access;

 access = get_op_access(MI->csh, MCInst_getOpcode(MI), MI->ac_idx);
#endif




 SStream_concat0(O, "{");

 printRegName(MI->csh, O, MCOperand_getReg(MCInst_getOperand(MI, OpNum)));

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_REG;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].reg = MCOperand_getReg(MCInst_getOperand(MI, OpNum));
#ifndef CAPSTONE_DIET
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].access = access;
#endif
  MI->flat_insn->detail->arm.op_count++;
 }

 SStream_concat0(O, ", ");

 printRegName(MI->csh, O, MCOperand_getReg(MCInst_getOperand(MI, OpNum)) + 1);

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_REG;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].reg = MCOperand_getReg(MCInst_getOperand(MI, OpNum)) + 1;
#ifndef CAPSTONE_DIET
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].access = access;
#endif
  MI->flat_insn->detail->arm.op_count++;
 }

 SStream_concat0(O, ", ");

 printRegName(MI->csh, O, MCOperand_getReg(MCInst_getOperand(MI, OpNum)) + 2);

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_REG;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].reg = MCOperand_getReg(MCInst_getOperand(MI, OpNum)) + 2;
#ifndef CAPSTONE_DIET
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].access = access;
#endif
  MI->flat_insn->detail->arm.op_count++;
 }

 SStream_concat0(O, ", ");

 printRegName(MI->csh, O, MCOperand_getReg(MCInst_getOperand(MI, OpNum)) + 3);

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_REG;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].reg = MCOperand_getReg(MCInst_getOperand(MI, OpNum)) + 3;
#ifndef CAPSTONE_DIET
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].access = access;
#endif
  MI->flat_insn->detail->arm.op_count++;
 }

 SStream_concat0(O, "}");

#ifndef CAPSTONE_DIET
 MI->ac_idx++;
#endif
}

static void printVectorListOneAllLanes(MCInst *MI, unsigned OpNum, SStream *O)
{
#ifndef CAPSTONE_DIET
 uint8_t access;

 access = get_op_access(MI->csh, MCInst_getOpcode(MI), MI->ac_idx);
#endif

 SStream_concat0(O, "{");

 printRegName(MI->csh, O, MCOperand_getReg(MCInst_getOperand(MI, OpNum)));

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_REG;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].reg = MCOperand_getReg(MCInst_getOperand(MI, OpNum));
#ifndef CAPSTONE_DIET
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].access = access;
#endif
  MI->flat_insn->detail->arm.op_count++;
 }

 SStream_concat0(O, "[]}");

#ifndef CAPSTONE_DIET
 MI->ac_idx++;
#endif
}

static void printVectorListTwoAllLanes(MCInst *MI, unsigned OpNum, SStream *O)
{
#ifndef CAPSTONE_DIET
 uint8_t access;
#endif
 unsigned Reg = MCOperand_getReg(MCInst_getOperand(MI, OpNum));
 unsigned Reg0 = MCRegisterInfo_getSubReg(MI->MRI, Reg, ARM_dsub_0);
 unsigned Reg1 = MCRegisterInfo_getSubReg(MI->MRI, Reg, ARM_dsub_1);

#ifndef CAPSTONE_DIET
 access = get_op_access(MI->csh, MCInst_getOpcode(MI), MI->ac_idx);
#endif

 SStream_concat0(O, "{");

 printRegName(MI->csh, O, Reg0);

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_REG;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].reg = Reg0;
#ifndef CAPSTONE_DIET
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].access = access;
#endif
  MI->flat_insn->detail->arm.op_count++;
 }

 SStream_concat0(O, "[], ");

 printRegName(MI->csh, O, Reg1);

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_REG;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].reg = Reg1;
#ifndef CAPSTONE_DIET
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].access = access;
#endif
  MI->flat_insn->detail->arm.op_count++;
 }

 SStream_concat0(O, "[]}");

#ifndef CAPSTONE_DIET
 MI->ac_idx++;
#endif
}

static void printVectorListThreeAllLanes(MCInst *MI, unsigned OpNum, SStream *O)
{
#ifndef CAPSTONE_DIET
 uint8_t access;

 access = get_op_access(MI->csh, MCInst_getOpcode(MI), MI->ac_idx);
#endif




 SStream_concat0(O, "{");

 printRegName(MI->csh, O, MCOperand_getReg(MCInst_getOperand(MI, OpNum)));

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_REG;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].reg = MCOperand_getReg(MCInst_getOperand(MI, OpNum));
#ifndef CAPSTONE_DIET
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].access = access;
#endif
  MI->flat_insn->detail->arm.op_count++;
 }

 SStream_concat0(O, "[], ");

 printRegName(MI->csh, O, MCOperand_getReg(MCInst_getOperand(MI, OpNum)) + 1);

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_REG;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].reg = MCOperand_getReg(MCInst_getOperand(MI, OpNum)) + 1;
#ifndef CAPSTONE_DIET
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].access = access;
#endif
  MI->flat_insn->detail->arm.op_count++;
 }

 SStream_concat0(O, "[], ");

 printRegName(MI->csh, O, MCOperand_getReg(MCInst_getOperand(MI, OpNum)) + 2);

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_REG;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].reg = MCOperand_getReg(MCInst_getOperand(MI, OpNum)) + 2;
#ifndef CAPSTONE_DIET
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].access = access;
#endif
  MI->flat_insn->detail->arm.op_count++;
 }

 SStream_concat0(O, "[]}");

#ifndef CAPSTONE_DIET
 MI->ac_idx++;
#endif
}

static void printVectorListFourAllLanes(MCInst *MI, unsigned OpNum, SStream *O)
{
#ifndef CAPSTONE_DIET
 uint8_t access;

 access = get_op_access(MI->csh, MCInst_getOpcode(MI), MI->ac_idx);
#endif




 SStream_concat0(O, "{");

 printRegName(MI->csh, O, MCOperand_getReg(MCInst_getOperand(MI, OpNum)));

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_REG;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].reg = MCOperand_getReg(MCInst_getOperand(MI, OpNum));
#ifndef CAPSTONE_DIET
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].access = access;
#endif
  MI->flat_insn->detail->arm.op_count++;
 }

 SStream_concat0(O, "[], ");

 printRegName(MI->csh, O, MCOperand_getReg(MCInst_getOperand(MI, OpNum)) + 1);

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_REG;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].reg = MCOperand_getReg(MCInst_getOperand(MI, OpNum)) + 1;
#ifndef CAPSTONE_DIET
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].access = access;
#endif
  MI->flat_insn->detail->arm.op_count++;
 }

 SStream_concat0(O, "[], ");

 printRegName(MI->csh, O, MCOperand_getReg(MCInst_getOperand(MI, OpNum)) + 2);

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_REG;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].reg = MCOperand_getReg(MCInst_getOperand(MI, OpNum)) + 2;
#ifndef CAPSTONE_DIET
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].access = access;
#endif
  MI->flat_insn->detail->arm.op_count++;
 }

 SStream_concat0(O, "[], ");

 printRegName(MI->csh, O, MCOperand_getReg(MCInst_getOperand(MI, OpNum)) + 3);

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_REG;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].reg = MCOperand_getReg(MCInst_getOperand(MI, OpNum)) + 3;
#ifndef CAPSTONE_DIET
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].access = access;
#endif
  MI->flat_insn->detail->arm.op_count++;
 }

 SStream_concat0(O, "[]}");

#ifndef CAPSTONE_DIET
 MI->ac_idx++;
#endif
}

static void printVectorListTwoSpacedAllLanes(MCInst *MI, unsigned OpNum, SStream *O)
{
#ifndef CAPSTONE_DIET
 uint8_t access;
#endif
 unsigned Reg = MCOperand_getReg(MCInst_getOperand(MI, OpNum));
 unsigned Reg0 = MCRegisterInfo_getSubReg(MI->MRI, Reg, ARM_dsub_0);
 unsigned Reg1 = MCRegisterInfo_getSubReg(MI->MRI, Reg, ARM_dsub_2);

#ifndef CAPSTONE_DIET
 access = get_op_access(MI->csh, MCInst_getOpcode(MI), MI->ac_idx);
#endif

 SStream_concat0(O, "{");

 printRegName(MI->csh, O, Reg0);

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_REG;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].reg = Reg0;
#ifndef CAPSTONE_DIET
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].access = access;
#endif
  MI->flat_insn->detail->arm.op_count++;
 }

 SStream_concat0(O, "[], ");

 printRegName(MI->csh, O, Reg1);

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_REG;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].reg = Reg1;
#ifndef CAPSTONE_DIET
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].access = access;
#endif
  MI->flat_insn->detail->arm.op_count++;
 }

 SStream_concat0(O, "[]}");

#ifndef CAPSTONE_DIET
 MI->ac_idx++;
#endif
}

static void printVectorListThreeSpacedAllLanes(MCInst *MI,
  unsigned OpNum, SStream *O)
{
#ifndef CAPSTONE_DIET
 uint8_t access;

 access = get_op_access(MI->csh, MCInst_getOpcode(MI), MI->ac_idx);
#endif




 SStream_concat0(O, "{");

 printRegName(MI->csh, O, MCOperand_getReg(MCInst_getOperand(MI, OpNum)));

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_REG;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].reg = MCOperand_getReg(MCInst_getOperand(MI, OpNum));
#ifndef CAPSTONE_DIET
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].access = access;
#endif
  MI->flat_insn->detail->arm.op_count++;
 }

 SStream_concat0(O, "[], ");

 printRegName(MI->csh, O, MCOperand_getReg(MCInst_getOperand(MI, OpNum)) + 2);

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_REG;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].reg = MCOperand_getReg(MCInst_getOperand(MI, OpNum)) + 2;
#ifndef CAPSTONE_DIET
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].access = access;
#endif
  MI->flat_insn->detail->arm.op_count++;
 }

 SStream_concat0(O, "[], ");

 printRegName(MI->csh, O, MCOperand_getReg(MCInst_getOperand(MI, OpNum)) + 4);

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_REG;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].reg = MCOperand_getReg(MCInst_getOperand(MI, OpNum)) + 4;
#ifndef CAPSTONE_DIET
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].access = access;
#endif
  MI->flat_insn->detail->arm.op_count++;
 }

 SStream_concat0(O, "[]}");

#ifndef CAPSTONE_DIET
 MI->ac_idx++;
#endif
}

static void printVectorListFourSpacedAllLanes(MCInst *MI,
  unsigned OpNum, SStream *O)
{
#ifndef CAPSTONE_DIET
 uint8_t access;

 access = get_op_access(MI->csh, MCInst_getOpcode(MI), MI->ac_idx);
#endif




 SStream_concat0(O, "{");

 printRegName(MI->csh, O, MCOperand_getReg(MCInst_getOperand(MI, OpNum)));

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_REG;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].reg = MCOperand_getReg(MCInst_getOperand(MI, OpNum));
#ifndef CAPSTONE_DIET
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].access = access;
#endif
  MI->flat_insn->detail->arm.op_count++;
 }

 SStream_concat0(O, "[], ");

 printRegName(MI->csh, O, MCOperand_getReg(MCInst_getOperand(MI, OpNum)) + 2);

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_REG;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].reg = MCOperand_getReg(MCInst_getOperand(MI, OpNum)) + 2;
#ifndef CAPSTONE_DIET
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].access = access;
#endif
  MI->flat_insn->detail->arm.op_count++;
 }

 SStream_concat0(O, "[], ");

 printRegName(MI->csh, O, MCOperand_getReg(MCInst_getOperand(MI, OpNum)) + 4);

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_REG;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].reg = MCOperand_getReg(MCInst_getOperand(MI, OpNum)) + 4;
#ifndef CAPSTONE_DIET
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].access = access;
#endif
  MI->flat_insn->detail->arm.op_count++;
 }

 SStream_concat0(O, "[], ");

 printRegName(MI->csh, O, MCOperand_getReg(MCInst_getOperand(MI, OpNum)) + 6);

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_REG;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].reg = MCOperand_getReg(MCInst_getOperand(MI, OpNum)) + 6;
#ifndef CAPSTONE_DIET
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].access = access;
#endif
  MI->flat_insn->detail->arm.op_count++;
 }

 SStream_concat0(O, "[]}");

#ifndef CAPSTONE_DIET
 MI->ac_idx++;
#endif
}

static void printVectorListThreeSpaced(MCInst *MI, unsigned OpNum, SStream *O)
{
#ifndef CAPSTONE_DIET
 uint8_t access;

 access = get_op_access(MI->csh, MCInst_getOpcode(MI), MI->ac_idx);
#endif




 SStream_concat0(O, "{");

 printRegName(MI->csh, O, MCOperand_getReg(MCInst_getOperand(MI, OpNum)));

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_REG;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].reg = MCOperand_getReg(MCInst_getOperand(MI, OpNum));
#ifndef CAPSTONE_DIET
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].access = access;
#endif
  MI->flat_insn->detail->arm.op_count++;
 }

 SStream_concat0(O, ", ");

 printRegName(MI->csh, O, MCOperand_getReg(MCInst_getOperand(MI, OpNum)) + 2);

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_REG;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].reg = MCOperand_getReg(MCInst_getOperand(MI, OpNum)) + 2;
#ifndef CAPSTONE_DIET
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].access = access;
#endif
  MI->flat_insn->detail->arm.op_count++;
 }

 SStream_concat0(O, ", ");

 printRegName(MI->csh, O, MCOperand_getReg(MCInst_getOperand(MI, OpNum)) + 4);

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_REG;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].reg = MCOperand_getReg(MCInst_getOperand(MI, OpNum)) + 4;
#ifndef CAPSTONE_DIET
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].access = access;
#endif
  MI->flat_insn->detail->arm.op_count++;
 }

 SStream_concat0(O, "}");

#ifndef CAPSTONE_DIET
 MI->ac_idx++;
#endif
}

static void printVectorListFourSpaced(MCInst *MI, unsigned OpNum, SStream *O)
{
#ifndef CAPSTONE_DIET
 uint8_t access;

 access = get_op_access(MI->csh, MCInst_getOpcode(MI), MI->ac_idx);
#endif




 SStream_concat0(O, "{");

 printRegName(MI->csh, O, MCOperand_getReg(MCInst_getOperand(MI, OpNum)));

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_REG;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].reg = MCOperand_getReg(MCInst_getOperand(MI, OpNum));
#ifndef CAPSTONE_DIET
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].access = access;
#endif
  MI->flat_insn->detail->arm.op_count++;
 }

 SStream_concat0(O, ", ");

 printRegName(MI->csh, O, MCOperand_getReg(MCInst_getOperand(MI, OpNum)) + 2);

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_REG;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].reg = MCOperand_getReg(MCInst_getOperand(MI, OpNum)) + 2;
#ifndef CAPSTONE_DIET
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].access = access;
#endif
  MI->flat_insn->detail->arm.op_count++;
 }

 SStream_concat0(O, ", ");

 printRegName(MI->csh, O, MCOperand_getReg(MCInst_getOperand(MI, OpNum)) + 4);

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_REG;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].reg = MCOperand_getReg(MCInst_getOperand(MI, OpNum)) + 4;
#ifndef CAPSTONE_DIET
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].access = access;
#endif
  MI->flat_insn->detail->arm.op_count++;
 }

 SStream_concat0(O, ", ");

 printRegName(MI->csh, O, MCOperand_getReg(MCInst_getOperand(MI, OpNum)) + 6);

 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_REG;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].reg = MCOperand_getReg(MCInst_getOperand(MI, OpNum)) + 6;
#ifndef CAPSTONE_DIET
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].access = access;
#endif
  MI->flat_insn->detail->arm.op_count++;
 }

 SStream_concat0(O, "}");

#ifndef CAPSTONE_DIET
 MI->ac_idx++;
#endif
}

static void printComplexRotationOp(MCInst *MI, unsigned OpNo, SStream *O, int64_t Angle, int64_t Remainder)
{
 unsigned Val = (unsigned)MCOperand_getImm(MCInst_getOperand(MI, OpNo));
 unsigned tmp = (unsigned)((Val * Angle) + Remainder);

 printUInt32Bang(O, tmp);
 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_IMM;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].imm = tmp;
  MI->flat_insn->detail->arm.op_count++;
 }
}

void ARM_addVectorDataType(MCInst *MI, arm_vectordata_type vd)
{
 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.vector_data = vd;
 }
}

void ARM_addVectorDataSize(MCInst *MI, int size)
{
 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.vector_size = size;
 }
}

void ARM_addReg(MCInst *MI, int reg)
{
 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_REG;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].reg = reg;
  MI->flat_insn->detail->arm.op_count++;
 }
}

void ARM_addUserMode(MCInst *MI)
{
 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.usermode = true;
 }
}

void ARM_addSysReg(MCInst *MI, arm_sysreg reg)
{
 if (MI->csh->detail) {
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].type = ARM_OP_SYSREG;
  MI->flat_insn->detail->arm.operands[MI->flat_insn->detail->arm.op_count].reg = reg;
  MI->flat_insn->detail->arm.op_count++;
 }
}

#endif
