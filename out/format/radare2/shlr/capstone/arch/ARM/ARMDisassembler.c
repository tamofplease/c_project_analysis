# 1 "project/radare2/shlr/capstone/arch/ARM/ARMDisassembler.c"
# 13 "project/radare2/shlr/capstone/arch/ARM/ARMDisassembler.c"
#ifdef CAPSTONE_HAS_ARM

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <capstone/platform.h>

#include "ARMAddressingModes.h"
#include "ARMBaseInfo.h"
#include "../../MCFixedLenDisassembler.h"
#include "../../MCInst.h"
#include "../../MCInstrDesc.h"
#include "../../MCRegisterInfo.h"
#include "../../LEB128.h"
#include "../../MCDisassembler.h"
#include "../../cs_priv.h"
#include "../../utils.h"

#include "ARMDisassembler.h"
#include "ARMMapping.h"

#define GET_SUBTARGETINFO_ENUM 
#include "ARMGenSubtargetInfo.inc"

#define GET_INSTRINFO_MC_DESC 
#include "ARMGenInstrInfo.inc"

#define GET_INSTRINFO_ENUM 
#include "ARMGenInstrInfo.inc"

static bool ITStatus_push_back(ARM_ITStatus *it, char v)
{
 if (it->size >= sizeof(it->ITStates)) {

  it->size = 0;
 }
 it->ITStates[it->size] = v;
 it->size++;

 return true;
}


static bool ITStatus_instrInITBlock(ARM_ITStatus *it)
{

 return (it->size > 0);
}


static bool ITStatus_instrLastInITBlock(ARM_ITStatus *it)
{
 return (it->size == 1);
}




static unsigned ITStatus_getITCC(ARM_ITStatus *it)
{
 unsigned CC = ARMCC_AL;

 if (ITStatus_instrInITBlock(it))

  CC = it->ITStates[it->size-1];

 return CC;
}


static void ITStatus_advanceITState(ARM_ITStatus *it)
{

 it->size--;
}




static void ITStatus_setITState(ARM_ITStatus *it, char Firstcond, char Mask)
{

 unsigned CondBit0 = Firstcond & 1;
 unsigned NumTZ = CountTrailingZeros_32(Mask);
 unsigned char CCBits = (unsigned char)Firstcond & 0xf;
 unsigned Pos;



 for (Pos = NumTZ + 1; Pos <= 3; ++Pos) {
  bool T = ((Mask >> Pos) & 1) == (int)CondBit0;

  if (T)
   ITStatus_push_back(it, CCBits);
  else
   ITStatus_push_back(it, CCBits ^ 1);
 }

 ITStatus_push_back(it, CCBits);
}



static bool Check(DecodeStatus *Out, DecodeStatus In)
{
 switch (In) {
  case MCDisassembler_Success:

   return true;
  case MCDisassembler_SoftFail:
   *Out = In;
   return true;
  case MCDisassembler_Fail:
   *Out = In;
   return false;
  default:
   return false;
 }
}



static DecodeStatus DecodeGPRRegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeGPRnopcRegisterClass(MCInst *Inst,
  unsigned RegNo, uint64_t Address, const void *Decoder);
static DecodeStatus DecodeGPRwithAPSRRegisterClass(MCInst *Inst,
  unsigned RegNo, uint64_t Address, const void *Decoder);
static DecodeStatus DecodetGPRRegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodetcGPRRegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecoderGPRRegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeGPRPairRegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeSPRRegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeDPRRegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeDPR_8RegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeDPR_VFP2RegisterClass(MCInst *Inst,
  unsigned RegNo, uint64_t Address, const void *Decoder);
static DecodeStatus DecodeQPRRegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeDPairRegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeDPairSpacedRegisterClass(MCInst *Inst,
  unsigned RegNo, uint64_t Address, const void *Decoder);
static DecodeStatus DecodePredicateOperand(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeCCOutOperand(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeRegListOperand(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeSPRRegListOperand(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeDPRRegListOperand(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeBitfieldMaskOperand(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeCopMemInstruction(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeAddrMode2IdxInstruction(MCInst *Inst,
  unsigned Insn, uint64_t Address, const void *Decoder);
static DecodeStatus DecodeSORegMemOperand(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeAddrMode3Instruction(MCInst *Inst,unsigned Insn,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeSORegImmOperand(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeSORegRegOperand(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeMemMultipleWritebackInstruction(MCInst * Inst,
  unsigned Insn, uint64_t Adddress, const void *Decoder);
static DecodeStatus DecodeT2MOVTWInstruction(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeArmMOVTWInstruction(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeSMLAInstruction(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeCPSInstruction(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeT2CPSInstruction(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeAddrModeImm12Operand(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeAddrMode5Operand(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeAddrMode7Operand(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeT2BInstruction(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeBranchImmInstruction(MCInst *Inst,unsigned Insn,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeAddrMode6Operand(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeVLDST1Instruction(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeVLDST2Instruction(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeVLDST3Instruction(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeVLDST4Instruction(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeVLDInstruction(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeVSTInstruction(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeVLD1DupInstruction(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeVLD2DupInstruction(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeVLD3DupInstruction(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeVLD4DupInstruction(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeNEONModImmInstruction(MCInst *Inst,unsigned Val,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeVSHLMaxInstruction(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeShiftRight8Imm(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeShiftRight16Imm(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeShiftRight32Imm(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeShiftRight64Imm(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeTBLInstruction(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodePostIdxReg(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeCoprocessor(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeMemBarrierOption(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeInstSyncBarrierOption(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeMSRMask(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeBankedReg(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeDoubleRegLoad(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeDoubleRegStore(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeLDRPreImm(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeLDRPreReg(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeSTRPreImm(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeSTRPreReg(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeVLD1LN(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeVLD2LN(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeVLD3LN(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeVLD4LN(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeVST1LN(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeVST2LN(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeVST3LN(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeVST4LN(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeVMOVSRR(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeVMOVRRS(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeSwap(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeVCVTD(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeVCVTQ(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeThumbAddSpecialReg(MCInst *Inst, uint16_t Insn,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeThumbBROperand(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeT2BROperand(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeThumbCmpBROperand(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeThumbAddrModeRR(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeThumbAddrModeIS(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeThumbAddrModePC(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeThumbAddrModeSP(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeT2AddrModeSOReg(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeT2LoadShift(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeT2LoadImm8(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void* Decoder);
static DecodeStatus DecodeT2LoadImm12(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void* Decoder);
static DecodeStatus DecodeT2LoadT(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void* Decoder);
static DecodeStatus DecodeT2LoadLabel(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void* Decoder);
static DecodeStatus DecodeT2Imm8S4(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeT2AddrModeImm8s4(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeT2AddrModeImm0_1020s4(MCInst *Inst,unsigned Val,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeT2Imm8(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeT2AddrModeImm8(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeThumbAddSPImm(MCInst *Inst, uint16_t Val,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeThumbAddSPReg(MCInst *Inst, uint16_t Insn,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeThumbCPS(MCInst *Inst, uint16_t Insn,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeQADDInstruction(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeThumbBLXOffset(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeT2AddrModeImm12(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeThumbTableBranch(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeThumb2BCCInstruction(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeT2SOImm(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeThumbBCCTargetOperand(MCInst *Inst,unsigned Val,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeThumbBLTargetOperand(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeIT(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeT2LDRDPreInstruction(MCInst *Inst,unsigned Insn,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeT2STRDPreInstruction(MCInst *Inst,unsigned Insn,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeT2Adr(MCInst *Inst, uint32_t Val,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeT2LdStPre(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeT2ShifterImmOperand(MCInst *Inst, uint32_t Val,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeLDR(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecoderForMRRC2AndMCRR2(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeHINTInstruction(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeTSTInstruction(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeSETPANInstruction(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeAddrMode5FP16Operand(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeForVMRSandVMSR(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeNEONComplexLane64Instruction(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeHPRRegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Address, const void *Decoder);


bool ARM_getFeatureBits(unsigned int mode, unsigned int feature)
{
 if ((mode & CS_MODE_V8) == 0) {

  if (feature == ARM_HasV8Ops || feature == ARM_HasV8_1aOps ||
   feature == ARM_HasV8_4aOps || feature == ARM_HasV8_3aOps)

   return false;
 } else {
  if (feature == ARM_FeatureVFPOnlySP)
   return false;
 }

 if ((mode & CS_MODE_MCLASS) == 0) {
  if (feature == ARM_FeatureMClass)
   return false;
 }

 if ((mode & CS_MODE_THUMB) == 0) {

  if (feature == ARM_FeatureThumb2 || feature == ARM_ModeThumb)
   return false;

  if (feature == ARM_FeatureD16)
   return false;
 } else {

  if (feature == ARM_FeatureD16)
   return false;
 }

 if (feature == ARM_FeatureMClass && (mode & CS_MODE_MCLASS) == 0)
  return false;


 return true;
}

#include "ARMGenDisassemblerTables.inc"

static DecodeStatus DecodePredicateOperand(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder)
{
 if (Val == 0xF) return MCDisassembler_Fail;


 if (MCInst_getOpcode(Inst) == ARM_tBcc && Val == 0xE)
  return MCDisassembler_Fail;

 MCOperand_CreateImm0(Inst, Val);

 if (Val == ARMCC_AL) {
  MCOperand_CreateReg0(Inst, 0);
 } else
  MCOperand_CreateReg0(Inst, ARM_CPSR);

 return MCDisassembler_Success;
}

#define GET_REGINFO_MC_DESC 
#include "ARMGenRegisterInfo.inc"
void ARM_init(MCRegisterInfo *MRI)
{
# 459 "project/radare2/shlr/capstone/arch/ARM/ARMDisassembler.c"
 MCRegisterInfo_InitMCRegisterInfo(MRI, ARMRegDesc, 289,
   0, 0,
   ARMMCRegisterClasses, 103,
   0, 0, ARMRegDiffLists, 0,
   ARMSubRegIdxLists, 57,
   0);
}


static DecodeStatus checkDecodedInstruction(MCInst *MI,
  uint32_t Insn,
  DecodeStatus Result)
{
 switch (MCInst_getOpcode(MI)) {
  case ARM_HVC: {


     uint32_t Cond = (Insn >> 28) & 0xF;

     if (Cond == 0xF)
      return MCDisassembler_Fail;

     if (Cond != 0xE)
      return MCDisassembler_SoftFail;

     return Result;
    }
  default:
      return Result;
 }
}

static DecodeStatus _ARM_getInstruction(cs_struct *ud, MCInst *MI, const uint8_t *code, size_t code_len,
  uint16_t *Size, uint64_t Address)
{
 uint32_t insn;
 DecodeStatus result;

 *Size = 0;

 if (code_len < 4)

  return MCDisassembler_Fail;

 if (MI->flat_insn->detail) {
  unsigned int i;

  memset(MI->flat_insn->detail, 0, offsetof(cs_detail, arm) + sizeof(cs_arm));

  for (i = 0; i < ARR_SIZE(MI->flat_insn->detail->arm.operands); i++) {
   MI->flat_insn->detail->arm.operands[i].vector_index = -1;
   MI->flat_insn->detail->arm.operands[i].neon_lane = -1;
  }
 }

 if (MODE_IS_BIG_ENDIAN(ud->mode))
  insn = (code[3] << 0) | (code[2] << 8) |
   (code[1] << 16) | ((uint32_t) code[0] << 24);
 else
  insn = ((uint32_t) code[3] << 24) | (code[2] << 16) |
   (code[1] << 8) | (code[0] << 0);


 result = decodeInstruction_4(DecoderTableARM32, MI, insn, Address);
 if (result != MCDisassembler_Fail) {
  result = checkDecodedInstruction(MI, insn, result);
  if (result != MCDisassembler_Fail)
   *Size = 4;

  return result;
 }



 MCInst_clear(MI);
 result = decodeInstruction_4(DecoderTableVFP32, MI, insn, Address);
 if (result != MCDisassembler_Fail) {
  *Size = 4;
  return result;
 }

 MCInst_clear(MI);
 result = decodeInstruction_4(DecoderTableVFPV832, MI, insn, Address);
 if (result != MCDisassembler_Fail) {
  *Size = 4;
  return result;
 }

 MCInst_clear(MI);
 result = decodeInstruction_4(DecoderTableNEONData32, MI, insn, Address);
 if (result != MCDisassembler_Fail) {
  *Size = 4;


  if (!DecodePredicateOperand(MI, 0xE, Address, NULL))
   return MCDisassembler_Fail;
  return result;
 }

 MCInst_clear(MI);
 result = decodeInstruction_4(DecoderTableNEONLoadStore32, MI, insn, Address);
 if (result != MCDisassembler_Fail) {
  *Size = 4;


  if (!DecodePredicateOperand(MI, 0xE, Address, NULL))
   return MCDisassembler_Fail;
  return result;
 }

 MCInst_clear(MI);
 result = decodeInstruction_4(DecoderTableNEONDup32, MI, insn, Address);
 if (result != MCDisassembler_Fail) {
  *Size = 4;


  if (!DecodePredicateOperand(MI, 0xE, Address, NULL))
   return MCDisassembler_Fail;
  return result;
 }

 MCInst_clear(MI);
 result = decodeInstruction_4(DecoderTablev8NEON32, MI, insn, Address);
 if (result != MCDisassembler_Fail) {
  *Size = 4;
  return result;
 }

 MCInst_clear(MI);
 result = decodeInstruction_4(DecoderTablev8Crypto32, MI, insn, Address);
 if (result != MCDisassembler_Fail) {
  *Size = 4;
  return result;
 }

 result = decodeInstruction_4(DecoderTableCoProc32, MI, insn, Address);
 if (result != MCDisassembler_Fail) {
  result = checkDecodedInstruction(MI, insn, result);
  if (result != MCDisassembler_Fail)
   *Size = 4;

  return result;
 }

 MCInst_clear(MI);
 *Size = 0;
 return MCDisassembler_Fail;
}





static void AddThumb1SBit(MCInst *MI, bool InITBlock)
{
 const MCOperandInfo *OpInfo = ARMInsts[MCInst_getOpcode(MI)].OpInfo;
 unsigned short NumOps = ARMInsts[MCInst_getOpcode(MI)].NumOperands;
 unsigned i;

 for (i = 0; i < NumOps; ++i) {
  if (i == MCInst_getNumOperands(MI)) break;

  if (MCOperandInfo_isOptionalDef(&OpInfo[i]) && OpInfo[i].RegClass == ARM_CCRRegClassID) {
   if (i > 0 && MCOperandInfo_isPredicate(&OpInfo[i - 1])) continue;
   MCInst_insert0(MI, i, MCOperand_CreateReg1(MI, InITBlock ? 0 : ARM_CPSR));
   return;
  }
 }


 MCInst_insert0(MI, i, MCOperand_CreateReg1(MI, InITBlock ? 0 : ARM_CPSR));
}





static DecodeStatus AddThumbPredicate(cs_struct *ud, MCInst *MI)
{
 DecodeStatus S = MCDisassembler_Success;
 const MCOperandInfo *OpInfo;
 unsigned short NumOps;
 unsigned int i;
 unsigned CC;



 switch (MCInst_getOpcode(MI)) {
  case ARM_tBcc:
  case ARM_t2Bcc:
  case ARM_tCBZ:
  case ARM_tCBNZ:
  case ARM_tCPS:
  case ARM_t2CPS3p:
  case ARM_t2CPS2p:
  case ARM_t2CPS1p:
  case ARM_tMOVSr:
  case ARM_tSETEND:


   if (ITStatus_instrInITBlock(&(ud->ITBlock)))
    S = MCDisassembler_SoftFail;
   else
    return MCDisassembler_Success;
   break;

  case ARM_t2HINT:
   if (MCOperand_getImm(MCInst_getOperand(MI, 0)) == 0x10)
    S = MCDisassembler_SoftFail;
   break;

  case ARM_tB:
  case ARM_t2B:
  case ARM_t2TBB:
  case ARM_t2TBH:



   if (ITStatus_instrInITBlock(&(ud->ITBlock)) && !ITStatus_instrLastInITBlock(&(ud->ITBlock)))
    S = MCDisassembler_SoftFail;
   break;
  default:
   break;
 }



 CC = ITStatus_getITCC(&(ud->ITBlock));
 if (CC == 0xF)
  CC = ARMCC_AL;

 if (ITStatus_instrInITBlock(&(ud->ITBlock)))
  ITStatus_advanceITState(&(ud->ITBlock));

 OpInfo = ARMInsts[MCInst_getOpcode(MI)].OpInfo;
 NumOps = ARMInsts[MCInst_getOpcode(MI)].NumOperands;

 for (i = 0; i < NumOps; ++i) {
  if (i == MCInst_getNumOperands(MI)) break;

  if (MCOperandInfo_isPredicate(&OpInfo[i])) {
   MCInst_insert0(MI, i, MCOperand_CreateImm1(MI, CC));

   if (CC == ARMCC_AL)
    MCInst_insert0(MI, i+1, MCOperand_CreateReg1(MI, 0));
   else
    MCInst_insert0(MI, i+1, MCOperand_CreateReg1(MI, ARM_CPSR));

   return S;
  }
 }

 MCInst_insert0(MI, i, MCOperand_CreateImm1(MI, CC));

 if (CC == ARMCC_AL)
  MCInst_insert0(MI, i + 1, MCOperand_CreateReg1(MI, 0));
 else
  MCInst_insert0(MI, i + 1, MCOperand_CreateReg1(MI, ARM_CPSR));

 return S;
}






static void UpdateThumbVFPPredicate(cs_struct *ud, MCInst *MI)
{
 unsigned CC;
 unsigned short NumOps;
 const MCOperandInfo *OpInfo;
 unsigned i;

 CC = ITStatus_getITCC(&(ud->ITBlock));
 if (ITStatus_instrInITBlock(&(ud->ITBlock)))
  ITStatus_advanceITState(&(ud->ITBlock));

 OpInfo = ARMInsts[MCInst_getOpcode(MI)].OpInfo;
 NumOps = ARMInsts[MCInst_getOpcode(MI)].NumOperands;

 for (i = 0; i < NumOps; ++i) {
  if (MCOperandInfo_isPredicate(&OpInfo[i])) {
   MCOperand_setImm(MCInst_getOperand(MI, i), CC);

   if (CC == ARMCC_AL)
    MCOperand_setReg(MCInst_getOperand(MI, i + 1), 0);
   else
    MCOperand_setReg(MCInst_getOperand(MI, i + 1), ARM_CPSR);

   return;
  }
 }
}

static DecodeStatus _Thumb_getInstruction(cs_struct *ud, MCInst *MI, const uint8_t *code, size_t code_len,
  uint16_t *Size, uint64_t Address)
{
 uint16_t insn16;
 DecodeStatus result;
 bool InITBlock;
 unsigned Firstcond, Mask;
 uint32_t NEONLdStInsn, insn32, NEONDataInsn, NEONCryptoInsn, NEONv8Insn;
 size_t i;


 if (code_len < 2)

  return MCDisassembler_Fail;

 if (MI->flat_insn->detail) {
  memset(MI->flat_insn->detail, 0, offsetof(cs_detail, arm)+sizeof(cs_arm));
  for (i = 0; i < ARR_SIZE(MI->flat_insn->detail->arm.operands); i++) {
   MI->flat_insn->detail->arm.operands[i].vector_index = -1;
   MI->flat_insn->detail->arm.operands[i].neon_lane = -1;
  }
 }

 if (MODE_IS_BIG_ENDIAN(ud->mode))
  insn16 = (code[0] << 8) | code[1];
 else
  insn16 = (code[1] << 8) | code[0];

 result = decodeInstruction_2(DecoderTableThumb16, MI, insn16, Address);
 if (result != MCDisassembler_Fail) {
  *Size = 2;
  Check(&result, AddThumbPredicate(ud, MI));
  return result;
 }

 MCInst_clear(MI);
 result = decodeInstruction_2(DecoderTableThumbSBit16, MI, insn16, Address);
 if (result) {
  *Size = 2;
  InITBlock = ITStatus_instrInITBlock(&(ud->ITBlock));
  Check(&result, AddThumbPredicate(ud, MI));
  AddThumb1SBit(MI, InITBlock);
  return result;
 }

 MCInst_clear(MI);
 result = decodeInstruction_2(DecoderTableThumb216, MI, insn16, Address);
 if (result != MCDisassembler_Fail) {
  *Size = 2;



  if (MCInst_getOpcode(MI) == ARM_t2IT && ITStatus_instrInITBlock(&(ud->ITBlock)))
   return MCDisassembler_SoftFail;

  Check(&result, AddThumbPredicate(ud, MI));




  if (MCInst_getOpcode(MI) == ARM_t2IT) {
   Firstcond = (unsigned int)MCOperand_getImm(MCInst_getOperand(MI, 0));
   Mask = (unsigned int)MCOperand_getImm(MCInst_getOperand(MI, 1));
   ITStatus_setITState(&(ud->ITBlock), (char)Firstcond, (char)Mask);




  }

  return result;
 }


 if (code_len < 4)

  return MCDisassembler_Fail;

 if (MODE_IS_BIG_ENDIAN(ud->mode))
  insn32 = (code[3] << 0) | (code[2] << 8) |
   (code[1] << 16) | ((uint32_t) code[0] << 24);
 else
  insn32 = (code[3] << 8) | (code[2] << 0) |
   ((uint32_t) code[1] << 24) | (code[0] << 16);

 MCInst_clear(MI);
 result = decodeInstruction_4(DecoderTableThumb32, MI, insn32, Address);
 if (result != MCDisassembler_Fail) {
  *Size = 4;
  InITBlock = ITStatus_instrInITBlock(&(ud->ITBlock));
  Check(&result, AddThumbPredicate(ud, MI));
  AddThumb1SBit(MI, InITBlock);

  return result;
 }

 MCInst_clear(MI);
 result = decodeInstruction_4(DecoderTableThumb232, MI, insn32, Address);
 if (result != MCDisassembler_Fail) {
  *Size = 4;
  Check(&result, AddThumbPredicate(ud, MI));
  return result;
 }

 if (fieldFromInstruction_4(insn32, 28, 4) == 0xE) {
  MCInst_clear(MI);
  result = decodeInstruction_4(DecoderTableVFP32, MI, insn32, Address);
  if (result != MCDisassembler_Fail) {
   *Size = 4;
   UpdateThumbVFPPredicate(ud, MI);
   return result;
  }
 }

 MCInst_clear(MI);
 result = decodeInstruction_4(DecoderTableVFPV832, MI, insn32, Address);
 if (result != MCDisassembler_Fail) {
  *Size = 4;
  return result;
 }

 if (fieldFromInstruction_4(insn32, 28, 4) == 0xE) {
  MCInst_clear(MI);
  result = decodeInstruction_4(DecoderTableNEONDup32, MI, insn32, Address);
  if (result != MCDisassembler_Fail) {
   *Size = 4;
   Check(&result, AddThumbPredicate(ud, MI));
   return result;
  }
 }

 if (fieldFromInstruction_4(insn32, 24, 8) == 0xF9) {
  MCInst_clear(MI);
  NEONLdStInsn = insn32;
  NEONLdStInsn &= 0xF0FFFFFF;
  NEONLdStInsn |= 0x04000000;
  result = decodeInstruction_4(DecoderTableNEONLoadStore32, MI, NEONLdStInsn, Address);
  if (result != MCDisassembler_Fail) {
   *Size = 4;
   Check(&result, AddThumbPredicate(ud, MI));
   return result;
  }
 }

 if (fieldFromInstruction_4(insn32, 24, 4) == 0xF) {
  MCInst_clear(MI);
  NEONDataInsn = insn32;
  NEONDataInsn &= 0xF0FFFFFF;
  NEONDataInsn |= (NEONDataInsn & 0x10000000) >> 4;
  NEONDataInsn |= 0x12000000;
  result = decodeInstruction_4(DecoderTableNEONData32, MI, NEONDataInsn, Address);
  if (result != MCDisassembler_Fail) {
   *Size = 4;
   Check(&result, AddThumbPredicate(ud, MI));
   return result;
  }
 }

 MCInst_clear(MI);
 NEONCryptoInsn = insn32;
 NEONCryptoInsn &= 0xF0FFFFFF;
 NEONCryptoInsn |= (NEONCryptoInsn & 0x10000000) >> 4;
 NEONCryptoInsn |= 0x12000000;
 result = decodeInstruction_4(DecoderTablev8Crypto32, MI, NEONCryptoInsn, Address);
 if (result != MCDisassembler_Fail) {
  *Size = 4;
  return result;
 }

 MCInst_clear(MI);
 NEONv8Insn = insn32;
 NEONv8Insn &= 0xF3FFFFFF;
 result = decodeInstruction_4(DecoderTablev8NEON32, MI, NEONv8Insn, Address);
 if (result != MCDisassembler_Fail) {
  *Size = 4;
  return result;
 }

 MCInst_clear(MI);
 result = decodeInstruction_4(DecoderTableThumb2CoProc32, MI, insn32, Address);
 if (result != MCDisassembler_Fail) {
  *Size = 4;
  Check(&result, AddThumbPredicate(ud, MI));
  return result;
 }

 MCInst_clear(MI);
 *Size = 0;

 return MCDisassembler_Fail;
}

bool Thumb_getInstruction(csh ud, const uint8_t *code, size_t code_len, MCInst *instr,
  uint16_t *size, uint64_t address, void *info)
{
 DecodeStatus status = _Thumb_getInstruction((cs_struct *)ud, instr, code, code_len, size, address);


 if (instr->Opcode == ARM_t__brkdiv0)
  return false;


 return status != MCDisassembler_Fail;
}

bool ARM_getInstruction(csh ud, const uint8_t *code, size_t code_len, MCInst *instr,
  uint16_t *size, uint64_t address, void *info)
{
 DecodeStatus status = _ARM_getInstruction((cs_struct *)ud, instr, code, code_len, size, address);


 return status != MCDisassembler_Fail;
}

static const uint16_t GPRDecoderTable[] = {
 ARM_R0, ARM_R1, ARM_R2, ARM_R3,
 ARM_R4, ARM_R5, ARM_R6, ARM_R7,
 ARM_R8, ARM_R9, ARM_R10, ARM_R11,
 ARM_R12, ARM_SP, ARM_LR, ARM_PC
};

static DecodeStatus DecodeGPRRegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Address, const void *Decoder)
{
 unsigned Register;

 if (RegNo > 15)
  return MCDisassembler_Fail;

 Register = GPRDecoderTable[RegNo];
 MCOperand_CreateReg0(Inst, Register);

 return MCDisassembler_Success;
}

static DecodeStatus DecodeGPRnopcRegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;

 if (RegNo == 15)
  S = MCDisassembler_SoftFail;

 Check(&S, DecodeGPRRegisterClass(Inst, RegNo, Address, Decoder));

 return S;
}

static DecodeStatus DecodeGPRwithAPSRRegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;

 if (RegNo == 15) {
  MCOperand_CreateReg0(Inst, ARM_APSR_NZCV);

  return MCDisassembler_Success;
 }

 Check(&S, DecodeGPRRegisterClass(Inst, RegNo, Address, Decoder));
 return S;
}

static DecodeStatus DecodetGPRRegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Address, const void *Decoder)
{
 if (RegNo > 7)
  return MCDisassembler_Fail;

 return DecodeGPRRegisterClass(Inst, RegNo, Address, Decoder);
}

static const uint16_t GPRPairDecoderTable[] = {
 ARM_R0_R1, ARM_R2_R3, ARM_R4_R5, ARM_R6_R7,
 ARM_R8_R9, ARM_R10_R11, ARM_R12_SP
};

static DecodeStatus DecodeGPRPairRegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Address, const void *Decoder)
{
 unsigned RegisterPair;
 DecodeStatus S = MCDisassembler_Success;

 if (RegNo > 13)
  return MCDisassembler_Fail;

 if ((RegNo & 1) || RegNo == 0xe)
  S = MCDisassembler_SoftFail;

 RegisterPair = GPRPairDecoderTable[RegNo / 2];
 MCOperand_CreateReg0(Inst, RegisterPair);

 return S;
}

static DecodeStatus DecodetcGPRRegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Address, const void *Decoder)
{
 unsigned Register = 0;

 switch (RegNo) {
  case 0:
   Register = ARM_R0;
   break;
  case 1:
   Register = ARM_R1;
   break;
  case 2:
   Register = ARM_R2;
   break;
  case 3:
   Register = ARM_R3;
   break;
  case 9:
   Register = ARM_R9;
   break;
  case 12:
   Register = ARM_R12;
   break;
  default:
   return MCDisassembler_Fail;
 }

 MCOperand_CreateReg0(Inst, Register);

 return MCDisassembler_Success;
}

static DecodeStatus DecoderGPRRegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;

 if ((RegNo == 13 && !ARM_getFeatureBits(Inst->csh->mode, ARM_HasV8Ops)) || RegNo == 15)
  S = MCDisassembler_SoftFail;

 Check(&S, DecodeGPRRegisterClass(Inst, RegNo, Address, Decoder));

 return S;
}

static const uint16_t SPRDecoderTable[] = {
 ARM_S0, ARM_S1, ARM_S2, ARM_S3,
 ARM_S4, ARM_S5, ARM_S6, ARM_S7,
 ARM_S8, ARM_S9, ARM_S10, ARM_S11,
 ARM_S12, ARM_S13, ARM_S14, ARM_S15,
 ARM_S16, ARM_S17, ARM_S18, ARM_S19,
 ARM_S20, ARM_S21, ARM_S22, ARM_S23,
 ARM_S24, ARM_S25, ARM_S26, ARM_S27,
 ARM_S28, ARM_S29, ARM_S30, ARM_S31
};

static DecodeStatus DecodeSPRRegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Address, const void *Decoder)
{
 unsigned Register;

 if (RegNo > 31)
  return MCDisassembler_Fail;

 Register = SPRDecoderTable[RegNo];
 MCOperand_CreateReg0(Inst, Register);

 return MCDisassembler_Success;
}

static DecodeStatus DecodeHPRRegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Address, const void *Decoder)
{
 return DecodeSPRRegisterClass(Inst, RegNo, Address, Decoder);
}

static const uint16_t DPRDecoderTable[] = {
 ARM_D0, ARM_D1, ARM_D2, ARM_D3,
 ARM_D4, ARM_D5, ARM_D6, ARM_D7,
 ARM_D8, ARM_D9, ARM_D10, ARM_D11,
 ARM_D12, ARM_D13, ARM_D14, ARM_D15,
 ARM_D16, ARM_D17, ARM_D18, ARM_D19,
 ARM_D20, ARM_D21, ARM_D22, ARM_D23,
 ARM_D24, ARM_D25, ARM_D26, ARM_D27,
 ARM_D28, ARM_D29, ARM_D30, ARM_D31
};

static DecodeStatus DecodeDPRRegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Address, const void *Decoder)
{
 unsigned Register;

 if (RegNo > 31 || (ARM_getFeatureBits(Inst->csh->mode, ARM_FeatureD16) && RegNo > 15))
  return MCDisassembler_Fail;

 Register = DPRDecoderTable[RegNo];
 MCOperand_CreateReg0(Inst, Register);

 return MCDisassembler_Success;
}

static DecodeStatus DecodeDPR_8RegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Address, const void *Decoder)
{
 if (RegNo > 7)
  return MCDisassembler_Fail;

 return DecodeDPRRegisterClass(Inst, RegNo, Address, Decoder);
}

static DecodeStatus DecodeDPR_VFP2RegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Address, const void *Decoder)
{
 if (RegNo > 15)
  return MCDisassembler_Fail;

 return DecodeDPRRegisterClass(Inst, RegNo, Address, Decoder);
}

static const uint16_t QPRDecoderTable[] = {
 ARM_Q0, ARM_Q1, ARM_Q2, ARM_Q3,
 ARM_Q4, ARM_Q5, ARM_Q6, ARM_Q7,
 ARM_Q8, ARM_Q9, ARM_Q10, ARM_Q11,
 ARM_Q12, ARM_Q13, ARM_Q14, ARM_Q15
};

static DecodeStatus DecodeQPRRegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Address, const void *Decoder)
{
 unsigned Register;

 if (RegNo > 31 || (RegNo & 1) != 0)
  return MCDisassembler_Fail;

 RegNo >>= 1;

 Register = QPRDecoderTable[RegNo];
 MCOperand_CreateReg0(Inst, Register);

 return MCDisassembler_Success;
}

static const uint16_t DPairDecoderTable[] = {
 ARM_Q0, ARM_D1_D2, ARM_Q1, ARM_D3_D4, ARM_Q2, ARM_D5_D6,
 ARM_Q3, ARM_D7_D8, ARM_Q4, ARM_D9_D10, ARM_Q5, ARM_D11_D12,
 ARM_Q6, ARM_D13_D14, ARM_Q7, ARM_D15_D16, ARM_Q8, ARM_D17_D18,
 ARM_Q9, ARM_D19_D20, ARM_Q10, ARM_D21_D22, ARM_Q11, ARM_D23_D24,
 ARM_Q12, ARM_D25_D26, ARM_Q13, ARM_D27_D28, ARM_Q14, ARM_D29_D30,
 ARM_Q15
};

static DecodeStatus DecodeDPairRegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Address, const void *Decoder)
{
 unsigned Register;

 if (RegNo > 30)
  return MCDisassembler_Fail;

 Register = DPairDecoderTable[RegNo];
 MCOperand_CreateReg0(Inst, Register);

 return MCDisassembler_Success;
}

static const uint16_t DPairSpacedDecoderTable[] = {
 ARM_D0_D2, ARM_D1_D3, ARM_D2_D4, ARM_D3_D5,
 ARM_D4_D6, ARM_D5_D7, ARM_D6_D8, ARM_D7_D9,
 ARM_D8_D10, ARM_D9_D11, ARM_D10_D12, ARM_D11_D13,
 ARM_D12_D14, ARM_D13_D15, ARM_D14_D16, ARM_D15_D17,
 ARM_D16_D18, ARM_D17_D19, ARM_D18_D20, ARM_D19_D21,
 ARM_D20_D22, ARM_D21_D23, ARM_D22_D24, ARM_D23_D25,
 ARM_D24_D26, ARM_D25_D27, ARM_D26_D28, ARM_D27_D29,
 ARM_D28_D30, ARM_D29_D31
};

static DecodeStatus DecodeDPairSpacedRegisterClass(MCInst *Inst,
  unsigned RegNo, uint64_t Address, const void *Decoder)
{
 unsigned Register;

 if (RegNo > 29)
  return MCDisassembler_Fail;

 Register = DPairSpacedDecoderTable[RegNo];
 MCOperand_CreateReg0(Inst, Register);

 return MCDisassembler_Success;
}

static DecodeStatus DecodeCCOutOperand(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder)
{
 if (Val)
  MCOperand_CreateReg0(Inst, ARM_CPSR);
 else
  MCOperand_CreateReg0(Inst, 0);

 return MCDisassembler_Success;
}

static DecodeStatus DecodeSORegImmOperand(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;
 ARM_AM_ShiftOpc Shift;
 unsigned Op;
 unsigned Rm = fieldFromInstruction_4(Val, 0, 4);
 unsigned type = fieldFromInstruction_4(Val, 5, 2);
 unsigned imm = fieldFromInstruction_4(Val, 7, 5);


 if (!Check(&S, DecoderGPRRegisterClass(Inst, Rm, Address, Decoder)))
  return MCDisassembler_Fail;

 Shift = ARM_AM_lsl;
 switch (type) {
  case 0:
   Shift = ARM_AM_lsl;
   break;
  case 1:
   Shift = ARM_AM_lsr;
   break;
  case 2:
   Shift = ARM_AM_asr;
   break;
  case 3:
   Shift = ARM_AM_ror;
   break;
 }

 if (Shift == ARM_AM_ror && imm == 0)
  Shift = ARM_AM_rrx;

 Op = Shift | (imm << 3);
 MCOperand_CreateImm0(Inst, Op);

 return S;
}

static DecodeStatus DecodeSORegRegOperand(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;
 ARM_AM_ShiftOpc Shift;

 unsigned Rm = fieldFromInstruction_4(Val, 0, 4);
 unsigned type = fieldFromInstruction_4(Val, 5, 2);
 unsigned Rs = fieldFromInstruction_4(Val, 8, 4);


 if (!Check(&S, DecodeGPRnopcRegisterClass(Inst, Rm, Address, Decoder)))
  return MCDisassembler_Fail;
 if (!Check(&S, DecodeGPRnopcRegisterClass(Inst, Rs, Address, Decoder)))
  return MCDisassembler_Fail;

 Shift = ARM_AM_lsl;
 switch (type) {
  case 0:
   Shift = ARM_AM_lsl;
   break;
  case 1:
   Shift = ARM_AM_lsr;
   break;
  case 2:
   Shift = ARM_AM_asr;
   break;
  case 3:
   Shift = ARM_AM_ror;
   break;
 }

 MCOperand_CreateImm0(Inst, Shift);

 return S;
}

static DecodeStatus DecodeRegListOperand(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder)
{
 unsigned i;
 DecodeStatus S = MCDisassembler_Success;
 unsigned opcode;
 bool NeedDisjointWriteback = false;
 unsigned WritebackReg = 0;

 opcode = MCInst_getOpcode(Inst);
 switch (opcode) {
  default:
   break;

  case ARM_LDMIA_UPD:
  case ARM_LDMDB_UPD:
  case ARM_LDMIB_UPD:
  case ARM_LDMDA_UPD:
  case ARM_t2LDMIA_UPD:
  case ARM_t2LDMDB_UPD:
  case ARM_t2STMIA_UPD:
  case ARM_t2STMDB_UPD:
   NeedDisjointWriteback = true;
   WritebackReg = MCOperand_getReg(MCInst_getOperand(Inst, 0));
   break;
 }


 if (Val == 0) return MCDisassembler_Fail;

 for (i = 0; i < 16; ++i) {
  if (Val & (1 << i)) {
   if (!Check(&S, DecodeGPRRegisterClass(Inst, i, Address, Decoder)))
    return MCDisassembler_Fail;


   if (NeedDisjointWriteback && WritebackReg == MCOperand_getReg(&(Inst->Operands[Inst->size - 1])))
    Check(&S, MCDisassembler_SoftFail);
  }
 }

 return S;
}

static DecodeStatus DecodeSPRRegListOperand(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;
 unsigned i;
 unsigned Vd = fieldFromInstruction_4(Val, 8, 5);
 unsigned regs = fieldFromInstruction_4(Val, 0, 8);


 if (regs == 0 || (Vd + regs) > 32) {
  regs = Vd + regs > 32 ? 32 - Vd : regs;
  regs = (1u > regs? 1u : regs);
  S = MCDisassembler_SoftFail;
 }

 if (!Check(&S, DecodeSPRRegisterClass(Inst, Vd, Address, Decoder)))
  return MCDisassembler_Fail;

 for (i = 0; i < (regs - 1); ++i) {
  if (!Check(&S, DecodeSPRRegisterClass(Inst, ++Vd, Address, Decoder)))
   return MCDisassembler_Fail;
 }

 return S;
}

static DecodeStatus DecodeDPRRegListOperand(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;
 unsigned i;
 unsigned Vd = fieldFromInstruction_4(Val, 8, 5);
 unsigned regs = fieldFromInstruction_4(Val, 1, 7);


 if (regs == 0 || regs > 16 || (Vd + regs) > 32) {
  regs = Vd + regs > 32 ? 32 - Vd : regs;
  regs = (1u > regs? 1u : regs);
  regs = (16u > regs? regs : 16u);
  S = MCDisassembler_SoftFail;
 }

 if (!Check(&S, DecodeDPRRegisterClass(Inst, Vd, Address, Decoder)))
  return MCDisassembler_Fail;

 for (i = 0; i < (regs - 1); ++i) {
  if (!Check(&S, DecodeDPRRegisterClass(Inst, ++Vd, Address, Decoder)))
   return MCDisassembler_Fail;
 }

 return S;
}

static DecodeStatus DecodeBitfieldMaskOperand(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder)
{





 unsigned msb = fieldFromInstruction_4(Val, 5, 5);
 unsigned lsb = fieldFromInstruction_4(Val, 0, 5);
 uint32_t lsb_mask, msb_mask;

 DecodeStatus S = MCDisassembler_Success;
 if (lsb > msb) {
  Check(&S, MCDisassembler_SoftFail);



  lsb = msb;
 }

 msb_mask = 0xFFFFFFFF;
 if (msb != 31) msb_mask = (1U << (msb + 1)) - 1;
 lsb_mask = (1U << lsb) - 1;

 MCOperand_CreateImm0(Inst, ~(msb_mask ^ lsb_mask));
 return S;
}

static DecodeStatus DecodeCopMemInstruction(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;

 unsigned pred = fieldFromInstruction_4(Insn, 28, 4);
 unsigned CRd = fieldFromInstruction_4(Insn, 12, 4);
 unsigned coproc = fieldFromInstruction_4(Insn, 8, 4);
 unsigned imm = fieldFromInstruction_4(Insn, 0, 8);
 unsigned Rn = fieldFromInstruction_4(Insn, 16, 4);
 unsigned U = fieldFromInstruction_4(Insn, 23, 1);

 switch (MCInst_getOpcode(Inst)) {
  case ARM_LDC_OFFSET:
  case ARM_LDC_PRE:
  case ARM_LDC_POST:
  case ARM_LDC_OPTION:
  case ARM_LDCL_OFFSET:
  case ARM_LDCL_PRE:
  case ARM_LDCL_POST:
  case ARM_LDCL_OPTION:
  case ARM_STC_OFFSET:
  case ARM_STC_PRE:
  case ARM_STC_POST:
  case ARM_STC_OPTION:
  case ARM_STCL_OFFSET:
  case ARM_STCL_PRE:
  case ARM_STCL_POST:
  case ARM_STCL_OPTION:
  case ARM_t2LDC_OFFSET:
  case ARM_t2LDC_PRE:
  case ARM_t2LDC_POST:
  case ARM_t2LDC_OPTION:
  case ARM_t2LDCL_OFFSET:
  case ARM_t2LDCL_PRE:
  case ARM_t2LDCL_POST:
  case ARM_t2LDCL_OPTION:
  case ARM_t2STC_OFFSET:
  case ARM_t2STC_PRE:
  case ARM_t2STC_POST:
  case ARM_t2STC_OPTION:
  case ARM_t2STCL_OFFSET:
  case ARM_t2STCL_PRE:
  case ARM_t2STCL_POST:
  case ARM_t2STCL_OPTION:
   if (coproc == 0xA || coproc == 0xB)
    return MCDisassembler_Fail;
   break;
  default:
   break;
 }

 if (ARM_getFeatureBits(Inst->csh->mode, ARM_HasV8Ops) && (coproc != 14))
  return MCDisassembler_Fail;

 MCOperand_CreateImm0(Inst, coproc);
 MCOperand_CreateImm0(Inst, CRd);
 if (!Check(&S, DecodeGPRRegisterClass(Inst, Rn, Address, Decoder)))
  return MCDisassembler_Fail;

 switch (MCInst_getOpcode(Inst)) {
  case ARM_t2LDC2_OFFSET:
  case ARM_t2LDC2L_OFFSET:
  case ARM_t2LDC2_PRE:
  case ARM_t2LDC2L_PRE:
  case ARM_t2STC2_OFFSET:
  case ARM_t2STC2L_OFFSET:
  case ARM_t2STC2_PRE:
  case ARM_t2STC2L_PRE:
  case ARM_LDC2_OFFSET:
  case ARM_LDC2L_OFFSET:
  case ARM_LDC2_PRE:
  case ARM_LDC2L_PRE:
  case ARM_STC2_OFFSET:
  case ARM_STC2L_OFFSET:
  case ARM_STC2_PRE:
  case ARM_STC2L_PRE:
  case ARM_t2LDC_OFFSET:
  case ARM_t2LDCL_OFFSET:
  case ARM_t2LDC_PRE:
  case ARM_t2LDCL_PRE:
  case ARM_t2STC_OFFSET:
  case ARM_t2STCL_OFFSET:
  case ARM_t2STC_PRE:
  case ARM_t2STCL_PRE:
  case ARM_LDC_OFFSET:
  case ARM_LDCL_OFFSET:
  case ARM_LDC_PRE:
  case ARM_LDCL_PRE:
  case ARM_STC_OFFSET:
  case ARM_STCL_OFFSET:
  case ARM_STC_PRE:
  case ARM_STCL_PRE:
   imm = ARM_AM_getAM5Opc(U ? ARM_AM_add : ARM_AM_sub, (unsigned char)imm);
   MCOperand_CreateImm0(Inst, imm);
   break;
  case ARM_t2LDC2_POST:
  case ARM_t2LDC2L_POST:
  case ARM_t2STC2_POST:
  case ARM_t2STC2L_POST:
  case ARM_LDC2_POST:
  case ARM_LDC2L_POST:
  case ARM_STC2_POST:
  case ARM_STC2L_POST:
  case ARM_t2LDC_POST:
  case ARM_t2LDCL_POST:
  case ARM_t2STC_POST:
  case ARM_t2STCL_POST:
  case ARM_LDC_POST:
  case ARM_LDCL_POST:
  case ARM_STC_POST:
  case ARM_STCL_POST:
   imm |= U << 8;

  default:


   MCOperand_CreateImm0(Inst, imm);
   break;
 }

 switch (MCInst_getOpcode(Inst)) {
  case ARM_LDC_OFFSET:
  case ARM_LDC_PRE:
  case ARM_LDC_POST:
  case ARM_LDC_OPTION:
  case ARM_LDCL_OFFSET:
  case ARM_LDCL_PRE:
  case ARM_LDCL_POST:
  case ARM_LDCL_OPTION:
  case ARM_STC_OFFSET:
  case ARM_STC_PRE:
  case ARM_STC_POST:
  case ARM_STC_OPTION:
  case ARM_STCL_OFFSET:
  case ARM_STCL_PRE:
  case ARM_STCL_POST:
  case ARM_STCL_OPTION:
   if (!Check(&S, DecodePredicateOperand(Inst, pred, Address, Decoder)))
    return MCDisassembler_Fail;
   break;
  default:
   break;
 }

 return S;
}

static DecodeStatus DecodeAddrMode2IdxInstruction(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;
 ARM_AM_AddrOpc Op;
 ARM_AM_ShiftOpc Opc;
 bool writeback;
 unsigned Rn = fieldFromInstruction_4(Insn, 16, 4);
 unsigned Rt = fieldFromInstruction_4(Insn, 12, 4);
 unsigned Rm = fieldFromInstruction_4(Insn, 0, 4);
 unsigned imm = fieldFromInstruction_4(Insn, 0, 12);
 unsigned pred = fieldFromInstruction_4(Insn, 28, 4);
 unsigned reg = fieldFromInstruction_4(Insn, 25, 1);
 unsigned P = fieldFromInstruction_4(Insn, 24, 1);
 unsigned W = fieldFromInstruction_4(Insn, 21, 1);
 unsigned idx_mode = 0, amt, tmp;


 switch (MCInst_getOpcode(Inst)) {
  case ARM_STR_POST_IMM:
  case ARM_STR_POST_REG:
  case ARM_STRB_POST_IMM:
  case ARM_STRB_POST_REG:
  case ARM_STRT_POST_REG:
  case ARM_STRT_POST_IMM:
  case ARM_STRBT_POST_REG:
  case ARM_STRBT_POST_IMM:
   if (!Check(&S, DecodeGPRRegisterClass(Inst, Rn, Address, Decoder)))
    return MCDisassembler_Fail;
   break;
  default:
   break;
 }

 if (!Check(&S, DecodeGPRRegisterClass(Inst, Rt, Address, Decoder)))
  return MCDisassembler_Fail;


 switch (MCInst_getOpcode(Inst)) {
  case ARM_LDR_POST_IMM:
  case ARM_LDR_POST_REG:
  case ARM_LDRB_POST_IMM:
  case ARM_LDRB_POST_REG:
  case ARM_LDRBT_POST_REG:
  case ARM_LDRBT_POST_IMM:
  case ARM_LDRT_POST_REG:
  case ARM_LDRT_POST_IMM:
   if (!Check(&S, DecodeGPRRegisterClass(Inst, Rn, Address, Decoder)))
    return MCDisassembler_Fail;
   break;
  default:
   break;
 }

 if (!Check(&S, DecodeGPRRegisterClass(Inst, Rn, Address, Decoder)))
  return MCDisassembler_Fail;

 Op = ARM_AM_add;
 if (!fieldFromInstruction_4(Insn, 23, 1))
  Op = ARM_AM_sub;

 writeback = (P == 0) || (W == 1);
 if (P && writeback)
  idx_mode = ARMII_IndexModePre;
 else if (!P && writeback)
  idx_mode = ARMII_IndexModePost;

 if (writeback && (Rn == 15 || Rn == Rt))
  S = MCDisassembler_SoftFail;

 if (reg) {
  if (!Check(&S, DecodeGPRnopcRegisterClass(Inst, Rm, Address, Decoder)))
   return MCDisassembler_Fail;

  Opc = ARM_AM_lsl;
  switch(fieldFromInstruction_4(Insn, 5, 2)) {
   case 0:
    Opc = ARM_AM_lsl;
    break;
   case 1:
    Opc = ARM_AM_lsr;
    break;
   case 2:
    Opc = ARM_AM_asr;
    break;
   case 3:
    Opc = ARM_AM_ror;
    break;
   default:
    return MCDisassembler_Fail;
  }

  amt = fieldFromInstruction_4(Insn, 7, 5);
  if (Opc == ARM_AM_ror && amt == 0)
   Opc = ARM_AM_rrx;

  imm = ARM_AM_getAM2Opc(Op, amt, Opc, idx_mode);

  MCOperand_CreateImm0(Inst, imm);
 } else {
  MCOperand_CreateReg0(Inst, 0);
  tmp = ARM_AM_getAM2Opc(Op, imm, ARM_AM_lsl, idx_mode);
  MCOperand_CreateImm0(Inst, tmp);
 }

 if (!Check(&S, DecodePredicateOperand(Inst, pred, Address, Decoder)))
  return MCDisassembler_Fail;

 return S;
}

static DecodeStatus DecodeSORegMemOperand(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;
 ARM_AM_ShiftOpc ShOp;
 unsigned shift;
 unsigned Rn = fieldFromInstruction_4(Val, 13, 4);
 unsigned Rm = fieldFromInstruction_4(Val, 0, 4);
 unsigned type = fieldFromInstruction_4(Val, 5, 2);
 unsigned imm = fieldFromInstruction_4(Val, 7, 5);
 unsigned U = fieldFromInstruction_4(Val, 12, 1);

 ShOp = ARM_AM_lsl;
 switch (type) {
  case 0:
   ShOp = ARM_AM_lsl;
   break;
  case 1:
   ShOp = ARM_AM_lsr;
   break;
  case 2:
   ShOp = ARM_AM_asr;
   break;
  case 3:
   ShOp = ARM_AM_ror;
   break;
 }

 if (ShOp == ARM_AM_ror && imm == 0)
  ShOp = ARM_AM_rrx;

 if (!Check(&S, DecodeGPRRegisterClass(Inst, Rn, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodeGPRRegisterClass(Inst, Rm, Address, Decoder)))
  return MCDisassembler_Fail;

 if (U)
  shift = ARM_AM_getAM2Opc(ARM_AM_add, imm, ShOp, 0);
 else
  shift = ARM_AM_getAM2Opc(ARM_AM_sub, imm, ShOp, 0);

 MCOperand_CreateImm0(Inst, shift);

 return S;
}

static DecodeStatus DecodeAddrMode3Instruction(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;

 unsigned Rt = fieldFromInstruction_4(Insn, 12, 4);
 unsigned Rn = fieldFromInstruction_4(Insn, 16, 4);
 unsigned Rm = fieldFromInstruction_4(Insn, 0, 4);
 unsigned type = fieldFromInstruction_4(Insn, 22, 1);
 unsigned imm = fieldFromInstruction_4(Insn, 8, 4);
 unsigned U = ((~fieldFromInstruction_4(Insn, 23, 1)) & 1) << 8;
 unsigned pred = fieldFromInstruction_4(Insn, 28, 4);
 unsigned W = fieldFromInstruction_4(Insn, 21, 1);
 unsigned P = fieldFromInstruction_4(Insn, 24, 1);
 unsigned Rt2 = Rt + 1;

 bool writeback = (W == 1) | (P == 0);


 switch (MCInst_getOpcode(Inst)) {
  case ARM_STRD:
  case ARM_STRD_PRE:
  case ARM_STRD_POST:
  case ARM_LDRD:
  case ARM_LDRD_PRE:
  case ARM_LDRD_POST:
   if (Rt & 0x1)
    S = MCDisassembler_SoftFail;
   break;
  default:
   break;
 }

 switch (MCInst_getOpcode(Inst)) {
  case ARM_STRD:
  case ARM_STRD_PRE:
  case ARM_STRD_POST:
   if (P == 0 && W == 1)
    S = MCDisassembler_SoftFail;

   if (writeback && (Rn == 15 || Rn == Rt || Rn == Rt2))
    S = MCDisassembler_SoftFail;

   if (type && Rm == 15)
    S = MCDisassembler_SoftFail;

   if (Rt2 == 15)
    S = MCDisassembler_SoftFail;

   if (!type && fieldFromInstruction_4(Insn, 8, 4))
    S = MCDisassembler_SoftFail;

   break;

  case ARM_STRH:
  case ARM_STRH_PRE:
  case ARM_STRH_POST:
   if (Rt == 15)
    S = MCDisassembler_SoftFail;

   if (writeback && (Rn == 15 || Rn == Rt))
    S = MCDisassembler_SoftFail;

   if (!type && Rm == 15)
    S = MCDisassembler_SoftFail;

   break;

  case ARM_LDRD:
  case ARM_LDRD_PRE:
  case ARM_LDRD_POST:
   if (type && Rn == 15) {
    if (Rt2 == 15)
     S = MCDisassembler_SoftFail;
    break;
   }

   if (P == 0 && W == 1)
    S = MCDisassembler_SoftFail;

   if (!type && (Rt2 == 15 || Rm == 15 || Rm == Rt || Rm == Rt2))
    S = MCDisassembler_SoftFail;

   if (!type && writeback && Rn == 15)
    S = MCDisassembler_SoftFail;

   if (writeback && (Rn == Rt || Rn == Rt2))
    S = MCDisassembler_SoftFail;

   break;

  case ARM_LDRH:
  case ARM_LDRH_PRE:
  case ARM_LDRH_POST:
   if (type && Rn == 15) {
    if (Rt == 15)
     S = MCDisassembler_SoftFail;
    break;
   }

   if (Rt == 15)
    S = MCDisassembler_SoftFail;

   if (!type && Rm == 15)
    S = MCDisassembler_SoftFail;

   if (!type && writeback && (Rn == 15 || Rn == Rt))
    S = MCDisassembler_SoftFail;
   break;

  case ARM_LDRSH:
  case ARM_LDRSH_PRE:
  case ARM_LDRSH_POST:
  case ARM_LDRSB:
  case ARM_LDRSB_PRE:
  case ARM_LDRSB_POST:
   if (type && Rn == 15){
    if (Rt == 15)
     S = MCDisassembler_SoftFail;
    break;
   }

   if (type && (Rt == 15 || (writeback && Rn == Rt)))
    S = MCDisassembler_SoftFail;

   if (!type && (Rt == 15 || Rm == 15))
    S = MCDisassembler_SoftFail;

   if (!type && writeback && (Rn == 15 || Rn == Rt))
    S = MCDisassembler_SoftFail;

   break;

  default:
   break;
 }

 if (writeback) {
  Inst->writeback = true;

  if (P)
   U |= ARMII_IndexModePre << 9;
  else
   U |= ARMII_IndexModePost << 9;


  switch (MCInst_getOpcode(Inst)) {
   case ARM_STRD:
   case ARM_STRD_PRE:
   case ARM_STRD_POST:
   case ARM_STRH:
   case ARM_STRH_PRE:
   case ARM_STRH_POST:
    if (!Check(&S, DecodeGPRRegisterClass(Inst, Rn, Address, Decoder)))
     return MCDisassembler_Fail;
    break;
   default:
    break;
  }
 }

 if (!Check(&S, DecodeGPRRegisterClass(Inst, Rt, Address, Decoder)))
  return MCDisassembler_Fail;

 switch (MCInst_getOpcode(Inst)) {
  case ARM_STRD:
  case ARM_STRD_PRE:
  case ARM_STRD_POST:
  case ARM_LDRD:
  case ARM_LDRD_PRE:
  case ARM_LDRD_POST:
   if (!Check(&S, DecodeGPRRegisterClass(Inst, Rt + 1, Address, Decoder)))
    return MCDisassembler_Fail;
   break;
  default:
   break;
 }

 if (writeback) {

  switch (MCInst_getOpcode(Inst)) {
   case ARM_LDRD:
   case ARM_LDRD_PRE:
   case ARM_LDRD_POST:
   case ARM_LDRH:
   case ARM_LDRH_PRE:
   case ARM_LDRH_POST:
   case ARM_LDRSH:
   case ARM_LDRSH_PRE:
   case ARM_LDRSH_POST:
   case ARM_LDRSB:
   case ARM_LDRSB_PRE:
   case ARM_LDRSB_POST:
   case ARM_LDRHTr:
   case ARM_LDRSBTr:
    if (!Check(&S, DecodeGPRRegisterClass(Inst, Rn, Address, Decoder)))
     return MCDisassembler_Fail;
    break;
   default:
    break;
  }
 }

 if (!Check(&S, DecodeGPRRegisterClass(Inst, Rn, Address, Decoder)))
  return MCDisassembler_Fail;

 if (type) {
  MCOperand_CreateReg0(Inst, 0);
  MCOperand_CreateImm0(Inst, U | (imm << 4) | Rm);
 } else {
  if (!Check(&S, DecodeGPRRegisterClass(Inst, Rm, Address, Decoder)))
   return MCDisassembler_Fail;

  MCOperand_CreateImm0(Inst, U);
 }

 if (!Check(&S, DecodePredicateOperand(Inst, pred, Address, Decoder)))
  return MCDisassembler_Fail;

 return S;
}

static DecodeStatus DecodeRFEInstruction(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;

 unsigned Rn = fieldFromInstruction_4(Insn, 16, 4);
 unsigned mode = fieldFromInstruction_4(Insn, 23, 2);

 switch (mode) {
  case 0:
   mode = ARM_AM_da;
   break;
  case 1:
   mode = ARM_AM_ia;
   break;
  case 2:
   mode = ARM_AM_db;
   break;
  case 3:
   mode = ARM_AM_ib;
   break;
 }

 MCOperand_CreateImm0(Inst, mode);

 if (!Check(&S, DecodeGPRRegisterClass(Inst, Rn, Address, Decoder)))
  return MCDisassembler_Fail;

 return S;
}

static DecodeStatus DecodeQADDInstruction(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;

 unsigned Rd = fieldFromInstruction_4(Insn, 12, 4);
 unsigned Rm = fieldFromInstruction_4(Insn, 0, 4);
 unsigned Rn = fieldFromInstruction_4(Insn, 16, 4);
 unsigned pred = fieldFromInstruction_4(Insn, 28, 4);

 if (pred == 0xF)
  return DecodeCPSInstruction(Inst, Insn, Address, Decoder);

 if (!Check(&S, DecodeGPRnopcRegisterClass(Inst, Rd, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodeGPRnopcRegisterClass(Inst, Rm, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodeGPRnopcRegisterClass(Inst, Rn, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodePredicateOperand(Inst, pred, Address, Decoder)))
  return MCDisassembler_Fail;

 return S;
}

static DecodeStatus DecodeMemMultipleWritebackInstruction(MCInst *Inst,
  unsigned Insn, uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;

 unsigned Rn = fieldFromInstruction_4(Insn, 16, 4);
 unsigned pred = fieldFromInstruction_4(Insn, 28, 4);
 unsigned reglist = fieldFromInstruction_4(Insn, 0, 16);

 if (pred == 0xF) {

  switch (MCInst_getOpcode(Inst)) {
   case ARM_LDMDA:
    MCInst_setOpcode(Inst, ARM_RFEDA);
    break;
   case ARM_LDMDA_UPD:
    MCInst_setOpcode(Inst, ARM_RFEDA_UPD);
    break;
   case ARM_LDMDB:
    MCInst_setOpcode(Inst, ARM_RFEDB);
    break;
   case ARM_LDMDB_UPD:
    MCInst_setOpcode(Inst, ARM_RFEDB_UPD);
    break;
   case ARM_LDMIA:
    MCInst_setOpcode(Inst, ARM_RFEIA);
    break;
   case ARM_LDMIA_UPD:
    MCInst_setOpcode(Inst, ARM_RFEIA_UPD);
    break;
   case ARM_LDMIB:
    MCInst_setOpcode(Inst, ARM_RFEIB);
    break;
   case ARM_LDMIB_UPD:
    MCInst_setOpcode(Inst, ARM_RFEIB_UPD);
    break;
   case ARM_STMDA:
    MCInst_setOpcode(Inst, ARM_SRSDA);
    break;
   case ARM_STMDA_UPD:
    MCInst_setOpcode(Inst, ARM_SRSDA_UPD);
    break;
   case ARM_STMDB:
    MCInst_setOpcode(Inst, ARM_SRSDB);
    break;
   case ARM_STMDB_UPD:
    MCInst_setOpcode(Inst, ARM_SRSDB_UPD);
    break;
   case ARM_STMIA:
    MCInst_setOpcode(Inst, ARM_SRSIA);
    break;
   case ARM_STMIA_UPD:
    MCInst_setOpcode(Inst, ARM_SRSIA_UPD);
    break;
   case ARM_STMIB:
    MCInst_setOpcode(Inst, ARM_SRSIB);
    break;
   case ARM_STMIB_UPD:
    MCInst_setOpcode(Inst, ARM_SRSIB_UPD);
    break;
   default:
    return MCDisassembler_Fail;
  }


  if (fieldFromInstruction_4(Insn, 20, 1) == 0) {

   if (!(fieldFromInstruction_4(Insn, 22, 1) == 1 &&
      fieldFromInstruction_4(Insn, 20, 1) == 0))
    return MCDisassembler_Fail;

   MCOperand_CreateImm0(Inst, fieldFromInstruction_4(Insn, 0, 4));
   return S;
  }

  return DecodeRFEInstruction(Inst, Insn, Address, Decoder);
 }

 if (!Check(&S, DecodeGPRRegisterClass(Inst, Rn, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodeGPRRegisterClass(Inst, Rn, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodePredicateOperand(Inst, pred, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodeRegListOperand(Inst, reglist, Address, Decoder)))
  return MCDisassembler_Fail;

 return S;
}


static DecodeStatus DecodeHINTInstruction(MCInst *Inst, unsigned Insn,
                                 uint64_t Address, const void *Decoder)
{
 unsigned pred = fieldFromInstruction_4(Insn, 28, 4);
 unsigned imm8 = fieldFromInstruction_4(Insn, 0, 8);
 DecodeStatus result = MCDisassembler_Success;

 MCOperand_CreateImm0(Inst, imm8);

 if (!Check(&result, DecodePredicateOperand(Inst, pred, Address, Decoder)))
  return MCDisassembler_Fail;



 if (imm8 == 0x10 && pred != 0xe && ARM_getFeatureBits(Inst->csh->mode, ARM_FeatureRAS))
  result = MCDisassembler_SoftFail;

 return result;
}

static DecodeStatus DecodeCPSInstruction(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder)
{
 unsigned imod = fieldFromInstruction_4(Insn, 18, 2);
 unsigned M = fieldFromInstruction_4(Insn, 17, 1);
 unsigned iflags = fieldFromInstruction_4(Insn, 6, 3);
 unsigned mode = fieldFromInstruction_4(Insn, 0, 5);

 DecodeStatus S = MCDisassembler_Success;



 if (fieldFromInstruction_4(Insn, 5, 1) != 0 ||
   fieldFromInstruction_4(Insn, 16, 1) != 0 ||
   fieldFromInstruction_4(Insn, 20, 8) != 0x10)
  return MCDisassembler_Fail;






 if (imod == 1) return MCDisassembler_Fail;

 if (imod && M) {
  MCInst_setOpcode(Inst, ARM_CPS3p);
  MCOperand_CreateImm0(Inst, imod);
  MCOperand_CreateImm0(Inst, iflags);
  MCOperand_CreateImm0(Inst, mode);
 } else if (imod && !M) {
  MCInst_setOpcode(Inst, ARM_CPS2p);
  MCOperand_CreateImm0(Inst, imod);
  MCOperand_CreateImm0(Inst, iflags);
  if (mode) S = MCDisassembler_SoftFail;
 } else if (!imod && M) {
  MCInst_setOpcode(Inst, ARM_CPS1p);
  MCOperand_CreateImm0(Inst, mode);
  if (iflags) S = MCDisassembler_SoftFail;
 } else {

  MCInst_setOpcode(Inst, ARM_CPS1p);
  MCOperand_CreateImm0(Inst, mode);
  S = MCDisassembler_SoftFail;
 }

 return S;
}

static DecodeStatus DecodeT2CPSInstruction(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder)
{
 unsigned imod = fieldFromInstruction_4(Insn, 9, 2);
 unsigned M = fieldFromInstruction_4(Insn, 8, 1);
 unsigned iflags = fieldFromInstruction_4(Insn, 5, 3);
 unsigned mode = fieldFromInstruction_4(Insn, 0, 5);

 DecodeStatus S = MCDisassembler_Success;






 if (imod == 1) return MCDisassembler_Fail;

 if (imod && M) {
  MCInst_setOpcode(Inst, ARM_t2CPS3p);
  MCOperand_CreateImm0(Inst, imod);
  MCOperand_CreateImm0(Inst, iflags);
  MCOperand_CreateImm0(Inst, mode);
 } else if (imod && !M) {
  MCInst_setOpcode(Inst, ARM_t2CPS2p);
  MCOperand_CreateImm0(Inst, imod);
  MCOperand_CreateImm0(Inst, iflags);
  if (mode) S = MCDisassembler_SoftFail;
 } else if (!imod && M) {
  MCInst_setOpcode(Inst, ARM_t2CPS1p);
  MCOperand_CreateImm0(Inst, mode);
  if (iflags) S = MCDisassembler_SoftFail;
 } else {

  int imm = fieldFromInstruction_4(Insn, 0, 8);

  if (imm > 4) return MCDisassembler_Fail;

  MCInst_setOpcode(Inst, ARM_t2HINT);
  MCOperand_CreateImm0(Inst, imm);
 }

 return S;
}

static DecodeStatus DecodeT2MOVTWInstruction(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;

 unsigned Rd = fieldFromInstruction_4(Insn, 8, 4);
 unsigned imm = 0;

 imm |= (fieldFromInstruction_4(Insn, 0, 8) << 0);
 imm |= (fieldFromInstruction_4(Insn, 12, 3) << 8);
 imm |= (fieldFromInstruction_4(Insn, 16, 4) << 12);
 imm |= (fieldFromInstruction_4(Insn, 26, 1) << 11);

 if (MCInst_getOpcode(Inst) == ARM_t2MOVTi16)
  if (!Check(&S, DecoderGPRRegisterClass(Inst, Rd, Address, Decoder)))
   return MCDisassembler_Fail;

 if (!Check(&S, DecoderGPRRegisterClass(Inst, Rd, Address, Decoder)))
  return MCDisassembler_Fail;

 MCOperand_CreateImm0(Inst, imm);

 return S;
}

static DecodeStatus DecodeArmMOVTWInstruction(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;

 unsigned Rd = fieldFromInstruction_4(Insn, 12, 4);
 unsigned pred = fieldFromInstruction_4(Insn, 28, 4);
 unsigned imm = 0;

 imm |= (fieldFromInstruction_4(Insn, 0, 12) << 0);
 imm |= (fieldFromInstruction_4(Insn, 16, 4) << 12);

 if (MCInst_getOpcode(Inst) == ARM_MOVTi16)
  if (!Check(&S, DecodeGPRnopcRegisterClass(Inst, Rd, Address, Decoder)))
   return MCDisassembler_Fail;

 if (!Check(&S, DecodeGPRnopcRegisterClass(Inst, Rd, Address, Decoder)))
  return MCDisassembler_Fail;

 MCOperand_CreateImm0(Inst, imm);

 if (!Check(&S, DecodePredicateOperand(Inst, pred, Address, Decoder)))
  return MCDisassembler_Fail;

 return S;
}

static DecodeStatus DecodeSMLAInstruction(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;

 unsigned Rd = fieldFromInstruction_4(Insn, 16, 4);
 unsigned Rn = fieldFromInstruction_4(Insn, 0, 4);
 unsigned Rm = fieldFromInstruction_4(Insn, 8, 4);
 unsigned Ra = fieldFromInstruction_4(Insn, 12, 4);
 unsigned pred = fieldFromInstruction_4(Insn, 28, 4);

 if (pred == 0xF)
  return DecodeCPSInstruction(Inst, Insn, Address, Decoder);

 if (!Check(&S, DecodeGPRnopcRegisterClass(Inst, Rd, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodeGPRnopcRegisterClass(Inst, Rn, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodeGPRnopcRegisterClass(Inst, Rm, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodeGPRnopcRegisterClass(Inst, Ra, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodePredicateOperand(Inst, pred, Address, Decoder)))
  return MCDisassembler_Fail;

 return S;
}

static DecodeStatus DecodeTSTInstruction(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;
 unsigned Pred = fieldFromInstruction_4(Insn, 28, 4);
 unsigned Rn = fieldFromInstruction_4(Insn, 16, 4);
 unsigned Rm = fieldFromInstruction_4(Insn, 0, 4);

 if (Pred == 0xF)
  return DecodeSETPANInstruction(Inst, Insn, Address, Decoder);

 if (!Check(&S, DecodeGPRRegisterClass(Inst, Rn, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodeGPRRegisterClass(Inst, Rm, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodePredicateOperand(Inst, Pred, Address, Decoder)))
  return MCDisassembler_Fail;

 return S;
}

static DecodeStatus DecodeSETPANInstruction(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;
 unsigned Imm = fieldFromInstruction_4(Insn, 9, 1);

 if (!ARM_getFeatureBits(Inst->csh->mode, ARM_HasV8_1aOps) || !ARM_getFeatureBits(Inst->csh->mode, ARM_HasV8Ops))
  return MCDisassembler_Fail;



 if (fieldFromInstruction_4(Insn, 20, 12) != 0xf11 ||
   fieldFromInstruction_4(Insn, 4, 4) != 0)
  return MCDisassembler_Fail;

 if (fieldFromInstruction_4(Insn, 10, 10) != 0 ||
   fieldFromInstruction_4(Insn, 0, 4) != 0)
  S = MCDisassembler_SoftFail;

 MCInst_setOpcode(Inst, ARM_SETPAN);
 MCOperand_CreateImm0(Inst, Imm);

 return S;
}

static DecodeStatus DecodeAddrModeImm12Operand(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;
 unsigned add = fieldFromInstruction_4(Val, 12, 1);
 unsigned imm = fieldFromInstruction_4(Val, 0, 12);
 unsigned Rn = fieldFromInstruction_4(Val, 13, 4);

 if (!Check(&S, DecodeGPRRegisterClass(Inst, Rn, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!add) imm *= (unsigned int)-1;
 if (imm == 0 && !add) imm = (unsigned int)INT32_MIN;

 MCOperand_CreateImm0(Inst, imm);



 return S;
}

static DecodeStatus DecodeAddrMode5Operand(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;
 unsigned Rn = fieldFromInstruction_4(Val, 9, 4);

 unsigned U = fieldFromInstruction_4(Val, 8, 1);
 unsigned imm = fieldFromInstruction_4(Val, 0, 8);

 if (!Check(&S, DecodeGPRRegisterClass(Inst, Rn, Address, Decoder)))
  return MCDisassembler_Fail;

 if (U)
  MCOperand_CreateImm0(Inst, ARM_AM_getAM5Opc(ARM_AM_add, (unsigned char)imm));
 else
  MCOperand_CreateImm0(Inst, ARM_AM_getAM5Opc(ARM_AM_sub, (unsigned char)imm));

 return S;
}

static DecodeStatus DecodeAddrMode5FP16Operand(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;
 unsigned Rn = fieldFromInstruction_4(Val, 9, 4);

 unsigned U = fieldFromInstruction_4(Val, 8, 1);
 unsigned imm = fieldFromInstruction_4(Val, 0, 8);

 if (!Check(&S, DecodeGPRRegisterClass(Inst, Rn, Address, Decoder)))
  return MCDisassembler_Fail;

 if (U)
  MCOperand_CreateImm0(Inst, getAM5FP16Opc(ARM_AM_add, imm));
 else
  MCOperand_CreateImm0(Inst, getAM5FP16Opc(ARM_AM_sub, imm));

 return S;
}

static DecodeStatus DecodeAddrMode7Operand(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder)
{
 return DecodeGPRRegisterClass(Inst, Val, Address, Decoder);
}

static DecodeStatus DecodeT2BInstruction(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus Status = MCDisassembler_Success;







 unsigned S = fieldFromInstruction_4(Insn, 26, 1);
 unsigned J1 = fieldFromInstruction_4(Insn, 13, 1);
 unsigned J2 = fieldFromInstruction_4(Insn, 11, 1);
 unsigned I1 = !(J1 ^ S);
 unsigned I2 = !(J2 ^ S);
 unsigned imm10 = fieldFromInstruction_4(Insn, 16, 10);
 unsigned imm11 = fieldFromInstruction_4(Insn, 0, 11);
 unsigned tmp = (S << 23) | (I1 << 22) | (I2 << 21) | (imm10 << 11) | imm11;
 int imm32 = SignExtend32(tmp << 1, 25);

 MCOperand_CreateImm0(Inst, imm32);

 return Status;
}

static DecodeStatus DecodeBranchImmInstruction(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;

 unsigned pred = fieldFromInstruction_4(Insn, 28, 4);
 unsigned imm = fieldFromInstruction_4(Insn, 0, 24) << 2;

 if (pred == 0xF) {
  MCInst_setOpcode(Inst, ARM_BLXi);
  imm |= fieldFromInstruction_4(Insn, 24, 1) << 1;
  MCOperand_CreateImm0(Inst, SignExtend32(imm, 26));
  return S;
 }

 MCOperand_CreateImm0(Inst, SignExtend32(imm, 26));

 if (!Check(&S, DecodePredicateOperand(Inst, pred, Address, Decoder)))
  return MCDisassembler_Fail;

 return S;
}


static DecodeStatus DecodeAddrMode6Operand(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;

 unsigned Rm = fieldFromInstruction_4(Val, 0, 4);
 unsigned align = fieldFromInstruction_4(Val, 4, 2);

 if (!Check(&S, DecodeGPRRegisterClass(Inst, Rm, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!align)
  MCOperand_CreateImm0(Inst, 0);
 else
  MCOperand_CreateImm0(Inst, 4 << align);

 return S;
}

static DecodeStatus DecodeVLDInstruction(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;
 unsigned wb, Rn, Rm;
 unsigned Rd = fieldFromInstruction_4(Insn, 12, 4);
 Rd |= fieldFromInstruction_4(Insn, 22, 1) << 4;
 wb = fieldFromInstruction_4(Insn, 16, 4);
 Rn = fieldFromInstruction_4(Insn, 16, 4);
 Rn |= fieldFromInstruction_4(Insn, 4, 2) << 4;
 Rm = fieldFromInstruction_4(Insn, 0, 4);


 switch (MCInst_getOpcode(Inst)) {
  case ARM_VLD1q16: case ARM_VLD1q32: case ARM_VLD1q64: case ARM_VLD1q8:
  case ARM_VLD1q16wb_fixed: case ARM_VLD1q16wb_register:
  case ARM_VLD1q32wb_fixed: case ARM_VLD1q32wb_register:
  case ARM_VLD1q64wb_fixed: case ARM_VLD1q64wb_register:
  case ARM_VLD1q8wb_fixed: case ARM_VLD1q8wb_register:
  case ARM_VLD2d16: case ARM_VLD2d32: case ARM_VLD2d8:
  case ARM_VLD2d16wb_fixed: case ARM_VLD2d16wb_register:
  case ARM_VLD2d32wb_fixed: case ARM_VLD2d32wb_register:
  case ARM_VLD2d8wb_fixed: case ARM_VLD2d8wb_register:
   if (!Check(&S, DecodeDPairRegisterClass(Inst, Rd, Address, Decoder)))
    return MCDisassembler_Fail;
   break;

  case ARM_VLD2b16:
  case ARM_VLD2b32:
  case ARM_VLD2b8:
  case ARM_VLD2b16wb_fixed:
  case ARM_VLD2b16wb_register:
  case ARM_VLD2b32wb_fixed:
  case ARM_VLD2b32wb_register:
  case ARM_VLD2b8wb_fixed:
  case ARM_VLD2b8wb_register:
   if (!Check(&S, DecodeDPairSpacedRegisterClass(Inst, Rd, Address, Decoder)))
    return MCDisassembler_Fail;
   break;

  default:
   if (!Check(&S, DecodeDPRRegisterClass(Inst, Rd, Address, Decoder)))
    return MCDisassembler_Fail;
 }


 switch (MCInst_getOpcode(Inst)) {
  case ARM_VLD3d8:
  case ARM_VLD3d16:
  case ARM_VLD3d32:
  case ARM_VLD3d8_UPD:
  case ARM_VLD3d16_UPD:
  case ARM_VLD3d32_UPD:
  case ARM_VLD4d8:
  case ARM_VLD4d16:
  case ARM_VLD4d32:
  case ARM_VLD4d8_UPD:
  case ARM_VLD4d16_UPD:
  case ARM_VLD4d32_UPD:
   if (!Check(&S, DecodeDPRRegisterClass(Inst, (Rd + 1) % 32, Address, Decoder)))
    return MCDisassembler_Fail;
   break;

  case ARM_VLD3q8:
  case ARM_VLD3q16:
  case ARM_VLD3q32:
  case ARM_VLD3q8_UPD:
  case ARM_VLD3q16_UPD:
  case ARM_VLD3q32_UPD:
  case ARM_VLD4q8:
  case ARM_VLD4q16:
  case ARM_VLD4q32:
  case ARM_VLD4q8_UPD:
  case ARM_VLD4q16_UPD:
  case ARM_VLD4q32_UPD:
   if (!Check(&S, DecodeDPRRegisterClass(Inst, (Rd + 2) % 32, Address, Decoder)))
    return MCDisassembler_Fail;

  default:
   break;
 }


 switch(MCInst_getOpcode(Inst)) {
  case ARM_VLD3d8:
  case ARM_VLD3d16:
  case ARM_VLD3d32:
  case ARM_VLD3d8_UPD:
  case ARM_VLD3d16_UPD:
  case ARM_VLD3d32_UPD:
  case ARM_VLD4d8:
  case ARM_VLD4d16:
  case ARM_VLD4d32:
  case ARM_VLD4d8_UPD:
  case ARM_VLD4d16_UPD:
  case ARM_VLD4d32_UPD:
   if (!Check(&S, DecodeDPRRegisterClass(Inst, (Rd + 2) % 32, Address, Decoder)))
    return MCDisassembler_Fail;
   break;
  case ARM_VLD3q8:
  case ARM_VLD3q16:
  case ARM_VLD3q32:
  case ARM_VLD3q8_UPD:
  case ARM_VLD3q16_UPD:
  case ARM_VLD3q32_UPD:
  case ARM_VLD4q8:
  case ARM_VLD4q16:
  case ARM_VLD4q32:
  case ARM_VLD4q8_UPD:
  case ARM_VLD4q16_UPD:
  case ARM_VLD4q32_UPD:
   if (!Check(&S, DecodeDPRRegisterClass(Inst, (Rd + 4) % 32, Address, Decoder)))
    return MCDisassembler_Fail;
   break;
  default:
   break;
 }


 switch (MCInst_getOpcode(Inst)) {
  case ARM_VLD4d8:
  case ARM_VLD4d16:
  case ARM_VLD4d32:
  case ARM_VLD4d8_UPD:
  case ARM_VLD4d16_UPD:
  case ARM_VLD4d32_UPD:
   if (!Check(&S, DecodeDPRRegisterClass(Inst, (Rd + 3) % 32, Address, Decoder)))
    return MCDisassembler_Fail;
   break;
  case ARM_VLD4q8:
  case ARM_VLD4q16:
  case ARM_VLD4q32:
  case ARM_VLD4q8_UPD:
  case ARM_VLD4q16_UPD:
  case ARM_VLD4q32_UPD:
   if (!Check(&S, DecodeDPRRegisterClass(Inst, (Rd + 6) % 32, Address, Decoder)))
    return MCDisassembler_Fail;
   break;
  default:
   break;
 }


 switch (MCInst_getOpcode(Inst)) {
  case ARM_VLD1d8wb_fixed:
  case ARM_VLD1d16wb_fixed:
  case ARM_VLD1d32wb_fixed:
  case ARM_VLD1d64wb_fixed:
  case ARM_VLD1d8wb_register:
  case ARM_VLD1d16wb_register:
  case ARM_VLD1d32wb_register:
  case ARM_VLD1d64wb_register:
  case ARM_VLD1q8wb_fixed:
  case ARM_VLD1q16wb_fixed:
  case ARM_VLD1q32wb_fixed:
  case ARM_VLD1q64wb_fixed:
  case ARM_VLD1q8wb_register:
  case ARM_VLD1q16wb_register:
  case ARM_VLD1q32wb_register:
  case ARM_VLD1q64wb_register:
  case ARM_VLD1d8Twb_fixed:
  case ARM_VLD1d8Twb_register:
  case ARM_VLD1d16Twb_fixed:
  case ARM_VLD1d16Twb_register:
  case ARM_VLD1d32Twb_fixed:
  case ARM_VLD1d32Twb_register:
  case ARM_VLD1d64Twb_fixed:
  case ARM_VLD1d64Twb_register:
  case ARM_VLD1d8Qwb_fixed:
  case ARM_VLD1d8Qwb_register:
  case ARM_VLD1d16Qwb_fixed:
  case ARM_VLD1d16Qwb_register:
  case ARM_VLD1d32Qwb_fixed:
  case ARM_VLD1d32Qwb_register:
  case ARM_VLD1d64Qwb_fixed:
  case ARM_VLD1d64Qwb_register:
  case ARM_VLD2d8wb_fixed:
  case ARM_VLD2d16wb_fixed:
  case ARM_VLD2d32wb_fixed:
  case ARM_VLD2q8wb_fixed:
  case ARM_VLD2q16wb_fixed:
  case ARM_VLD2q32wb_fixed:
  case ARM_VLD2d8wb_register:
  case ARM_VLD2d16wb_register:
  case ARM_VLD2d32wb_register:
  case ARM_VLD2q8wb_register:
  case ARM_VLD2q16wb_register:
  case ARM_VLD2q32wb_register:
  case ARM_VLD2b8wb_fixed:
  case ARM_VLD2b16wb_fixed:
  case ARM_VLD2b32wb_fixed:
  case ARM_VLD2b8wb_register:
  case ARM_VLD2b16wb_register:
  case ARM_VLD2b32wb_register:
   MCOperand_CreateImm0(Inst, 0);
   break;

  case ARM_VLD3d8_UPD:
  case ARM_VLD3d16_UPD:
  case ARM_VLD3d32_UPD:
  case ARM_VLD3q8_UPD:
  case ARM_VLD3q16_UPD:
  case ARM_VLD3q32_UPD:
  case ARM_VLD4d8_UPD:
  case ARM_VLD4d16_UPD:
  case ARM_VLD4d32_UPD:
  case ARM_VLD4q8_UPD:
  case ARM_VLD4q16_UPD:
  case ARM_VLD4q32_UPD:
   if (!Check(&S, DecodeGPRRegisterClass(Inst, wb, Address, Decoder)))
    return MCDisassembler_Fail;
   break;

  default:
   break;
 }


 if (!Check(&S, DecodeAddrMode6Operand(Inst, Rn, Address, Decoder)))
  return MCDisassembler_Fail;


 switch (MCInst_getOpcode(Inst)) {
  default:






   if (Rm == 0xd) {
    MCOperand_CreateReg0(Inst, 0);
    break;
   }


  case ARM_VLD1d8wb_fixed:
  case ARM_VLD1d16wb_fixed:
  case ARM_VLD1d32wb_fixed:
  case ARM_VLD1d64wb_fixed:
  case ARM_VLD1d8Twb_fixed:
  case ARM_VLD1d16Twb_fixed:
  case ARM_VLD1d32Twb_fixed:
  case ARM_VLD1d64Twb_fixed:
  case ARM_VLD1d8Qwb_fixed:
  case ARM_VLD1d16Qwb_fixed:
  case ARM_VLD1d32Qwb_fixed:
  case ARM_VLD1d64Qwb_fixed:
  case ARM_VLD1d8wb_register:
  case ARM_VLD1d16wb_register:
  case ARM_VLD1d32wb_register:
  case ARM_VLD1d64wb_register:
  case ARM_VLD1q8wb_fixed:
  case ARM_VLD1q16wb_fixed:
  case ARM_VLD1q32wb_fixed:
  case ARM_VLD1q64wb_fixed:
  case ARM_VLD1q8wb_register:
  case ARM_VLD1q16wb_register:
  case ARM_VLD1q32wb_register:
  case ARM_VLD1q64wb_register:



   if (Rm != 0xD && Rm != 0xF &&
     !Check(&S, DecodeGPRRegisterClass(Inst, Rm, Address, Decoder)))
    return MCDisassembler_Fail;
   break;

  case ARM_VLD2d8wb_fixed:
  case ARM_VLD2d16wb_fixed:
  case ARM_VLD2d32wb_fixed:
  case ARM_VLD2b8wb_fixed:
  case ARM_VLD2b16wb_fixed:
  case ARM_VLD2b32wb_fixed:
  case ARM_VLD2q8wb_fixed:
  case ARM_VLD2q16wb_fixed:
  case ARM_VLD2q32wb_fixed:
   break;
 }

 return S;
}

static DecodeStatus DecodeVLDST1Instruction(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder)
{
 unsigned load;
 unsigned type = fieldFromInstruction_4(Insn, 8, 4);
 unsigned align = fieldFromInstruction_4(Insn, 4, 2);
 if (type == 6 && (align & 2)) return MCDisassembler_Fail;
 if (type == 7 && (align & 2)) return MCDisassembler_Fail;
 if (type == 10 && align == 3) return MCDisassembler_Fail;

 load = fieldFromInstruction_4(Insn, 21, 1);

 return load ? DecodeVLDInstruction(Inst, Insn, Address, Decoder)
  : DecodeVSTInstruction(Inst, Insn, Address, Decoder);
}

static DecodeStatus DecodeVLDST2Instruction(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder)
{
 unsigned type, align, load;
 unsigned size = fieldFromInstruction_4(Insn, 6, 2);
 if (size == 3) return MCDisassembler_Fail;

 type = fieldFromInstruction_4(Insn, 8, 4);
 align = fieldFromInstruction_4(Insn, 4, 2);
 if (type == 8 && align == 3) return MCDisassembler_Fail;
 if (type == 9 && align == 3) return MCDisassembler_Fail;

 load = fieldFromInstruction_4(Insn, 21, 1);

 return load ? DecodeVLDInstruction(Inst, Insn, Address, Decoder)
  : DecodeVSTInstruction(Inst, Insn, Address, Decoder);
}

static DecodeStatus DecodeVLDST3Instruction(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder)
{
 unsigned align, load;
 unsigned size = fieldFromInstruction_4(Insn, 6, 2);
 if (size == 3) return MCDisassembler_Fail;

 align = fieldFromInstruction_4(Insn, 4, 2);
 if (align & 2) return MCDisassembler_Fail;

 load = fieldFromInstruction_4(Insn, 21, 1);

 return load ? DecodeVLDInstruction(Inst, Insn, Address, Decoder)
  : DecodeVSTInstruction(Inst, Insn, Address, Decoder);
}

static DecodeStatus DecodeVLDST4Instruction(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder)
{
 unsigned load;
 unsigned size = fieldFromInstruction_4(Insn, 6, 2);
 if (size == 3) return MCDisassembler_Fail;

 load = fieldFromInstruction_4(Insn, 21, 1);

 return load ? DecodeVLDInstruction(Inst, Insn, Address, Decoder)
  : DecodeVSTInstruction(Inst, Insn, Address, Decoder);
}

static DecodeStatus DecodeVSTInstruction(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;
 unsigned wb, Rn, Rm;
 unsigned Rd = fieldFromInstruction_4(Insn, 12, 4);
 Rd |= fieldFromInstruction_4(Insn, 22, 1) << 4;
 wb = fieldFromInstruction_4(Insn, 16, 4);
 Rn = fieldFromInstruction_4(Insn, 16, 4);
 Rn |= fieldFromInstruction_4(Insn, 4, 2) << 4;
 Rm = fieldFromInstruction_4(Insn, 0, 4);


 switch (MCInst_getOpcode(Inst)) {
  case ARM_VST1d8wb_fixed:
  case ARM_VST1d16wb_fixed:
  case ARM_VST1d32wb_fixed:
  case ARM_VST1d64wb_fixed:
  case ARM_VST1d8wb_register:
  case ARM_VST1d16wb_register:
  case ARM_VST1d32wb_register:
  case ARM_VST1d64wb_register:
  case ARM_VST1q8wb_fixed:
  case ARM_VST1q16wb_fixed:
  case ARM_VST1q32wb_fixed:
  case ARM_VST1q64wb_fixed:
  case ARM_VST1q8wb_register:
  case ARM_VST1q16wb_register:
  case ARM_VST1q32wb_register:
  case ARM_VST1q64wb_register:
  case ARM_VST1d8Twb_fixed:
  case ARM_VST1d16Twb_fixed:
  case ARM_VST1d32Twb_fixed:
  case ARM_VST1d64Twb_fixed:
  case ARM_VST1d8Twb_register:
  case ARM_VST1d16Twb_register:
  case ARM_VST1d32Twb_register:
  case ARM_VST1d64Twb_register:
  case ARM_VST1d8Qwb_fixed:
  case ARM_VST1d16Qwb_fixed:
  case ARM_VST1d32Qwb_fixed:
  case ARM_VST1d64Qwb_fixed:
  case ARM_VST1d8Qwb_register:
  case ARM_VST1d16Qwb_register:
  case ARM_VST1d32Qwb_register:
  case ARM_VST1d64Qwb_register:
  case ARM_VST2d8wb_fixed:
  case ARM_VST2d16wb_fixed:
  case ARM_VST2d32wb_fixed:
  case ARM_VST2d8wb_register:
  case ARM_VST2d16wb_register:
  case ARM_VST2d32wb_register:
  case ARM_VST2q8wb_fixed:
  case ARM_VST2q16wb_fixed:
  case ARM_VST2q32wb_fixed:
  case ARM_VST2q8wb_register:
  case ARM_VST2q16wb_register:
  case ARM_VST2q32wb_register:
  case ARM_VST2b8wb_fixed:
  case ARM_VST2b16wb_fixed:
  case ARM_VST2b32wb_fixed:
  case ARM_VST2b8wb_register:
  case ARM_VST2b16wb_register:
  case ARM_VST2b32wb_register:
   if (Rm == 0xF)
    return MCDisassembler_Fail;
   MCOperand_CreateImm0(Inst, 0);
   break;
  case ARM_VST3d8_UPD:
  case ARM_VST3d16_UPD:
  case ARM_VST3d32_UPD:
  case ARM_VST3q8_UPD:
  case ARM_VST3q16_UPD:
  case ARM_VST3q32_UPD:
  case ARM_VST4d8_UPD:
  case ARM_VST4d16_UPD:
  case ARM_VST4d32_UPD:
  case ARM_VST4q8_UPD:
  case ARM_VST4q16_UPD:
  case ARM_VST4q32_UPD:
   if (!Check(&S, DecodeGPRRegisterClass(Inst, wb, Address, Decoder)))
    return MCDisassembler_Fail;
   break;
  default:
   break;
 }


 if (!Check(&S, DecodeAddrMode6Operand(Inst, Rn, Address, Decoder)))
  return MCDisassembler_Fail;


 switch (MCInst_getOpcode(Inst)) {
  default:
   if (Rm == 0xD)
    MCOperand_CreateReg0(Inst, 0);
   else if (Rm != 0xF) {
    if (!Check(&S, DecodeGPRRegisterClass(Inst, Rm, Address, Decoder)))
     return MCDisassembler_Fail;
   }
   break;

  case ARM_VST1d8wb_fixed:
  case ARM_VST1d16wb_fixed:
  case ARM_VST1d32wb_fixed:
  case ARM_VST1d64wb_fixed:
  case ARM_VST1q8wb_fixed:
  case ARM_VST1q16wb_fixed:
  case ARM_VST1q32wb_fixed:
  case ARM_VST1q64wb_fixed:
  case ARM_VST1d8Twb_fixed:
  case ARM_VST1d16Twb_fixed:
  case ARM_VST1d32Twb_fixed:
  case ARM_VST1d64Twb_fixed:
  case ARM_VST1d8Qwb_fixed:
  case ARM_VST1d16Qwb_fixed:
  case ARM_VST1d32Qwb_fixed:
  case ARM_VST1d64Qwb_fixed:
  case ARM_VST2d8wb_fixed:
  case ARM_VST2d16wb_fixed:
  case ARM_VST2d32wb_fixed:
  case ARM_VST2q8wb_fixed:
  case ARM_VST2q16wb_fixed:
  case ARM_VST2q32wb_fixed:
  case ARM_VST2b8wb_fixed:
  case ARM_VST2b16wb_fixed:
  case ARM_VST2b32wb_fixed:
   break;
 }



 switch (MCInst_getOpcode(Inst)) {
  case ARM_VST1q16:
  case ARM_VST1q32:
  case ARM_VST1q64:
  case ARM_VST1q8:
  case ARM_VST1q16wb_fixed:
  case ARM_VST1q16wb_register:
  case ARM_VST1q32wb_fixed:
  case ARM_VST1q32wb_register:
  case ARM_VST1q64wb_fixed:
  case ARM_VST1q64wb_register:
  case ARM_VST1q8wb_fixed:
  case ARM_VST1q8wb_register:
  case ARM_VST2d16:
  case ARM_VST2d32:
  case ARM_VST2d8:
  case ARM_VST2d16wb_fixed:
  case ARM_VST2d16wb_register:
  case ARM_VST2d32wb_fixed:
  case ARM_VST2d32wb_register:
  case ARM_VST2d8wb_fixed:
  case ARM_VST2d8wb_register:
   if (!Check(&S, DecodeDPairRegisterClass(Inst, Rd, Address, Decoder)))
    return MCDisassembler_Fail;
   break;

  case ARM_VST2b16:
  case ARM_VST2b32:
  case ARM_VST2b8:
  case ARM_VST2b16wb_fixed:
  case ARM_VST2b16wb_register:
  case ARM_VST2b32wb_fixed:
  case ARM_VST2b32wb_register:
  case ARM_VST2b8wb_fixed:
  case ARM_VST2b8wb_register:
   if (!Check(&S, DecodeDPairSpacedRegisterClass(Inst, Rd, Address, Decoder)))
    return MCDisassembler_Fail;
   break;

  default:
   if (!Check(&S, DecodeDPRRegisterClass(Inst, Rd, Address, Decoder)))
    return MCDisassembler_Fail;
 }


 switch (MCInst_getOpcode(Inst)) {
  case ARM_VST3d8:
  case ARM_VST3d16:
  case ARM_VST3d32:
  case ARM_VST3d8_UPD:
  case ARM_VST3d16_UPD:
  case ARM_VST3d32_UPD:
  case ARM_VST4d8:
  case ARM_VST4d16:
  case ARM_VST4d32:
  case ARM_VST4d8_UPD:
  case ARM_VST4d16_UPD:
  case ARM_VST4d32_UPD:
   if (!Check(&S, DecodeDPRRegisterClass(Inst, (Rd + 1) % 32, Address, Decoder)))
    return MCDisassembler_Fail;
   break;

  case ARM_VST3q8:
  case ARM_VST3q16:
  case ARM_VST3q32:
  case ARM_VST3q8_UPD:
  case ARM_VST3q16_UPD:
  case ARM_VST3q32_UPD:
  case ARM_VST4q8:
  case ARM_VST4q16:
  case ARM_VST4q32:
  case ARM_VST4q8_UPD:
  case ARM_VST4q16_UPD:
  case ARM_VST4q32_UPD:
   if (!Check(&S, DecodeDPRRegisterClass(Inst, (Rd + 2) % 32, Address, Decoder)))
    return MCDisassembler_Fail;
   break;
  default:
   break;
 }


 switch (MCInst_getOpcode(Inst)) {
  case ARM_VST3d8:
  case ARM_VST3d16:
  case ARM_VST3d32:
  case ARM_VST3d8_UPD:
  case ARM_VST3d16_UPD:
  case ARM_VST3d32_UPD:
  case ARM_VST4d8:
  case ARM_VST4d16:
  case ARM_VST4d32:
  case ARM_VST4d8_UPD:
  case ARM_VST4d16_UPD:
  case ARM_VST4d32_UPD:
   if (!Check(&S, DecodeDPRRegisterClass(Inst, (Rd + 2) % 32, Address, Decoder)))
    return MCDisassembler_Fail;
   break;

  case ARM_VST3q8:
  case ARM_VST3q16:
  case ARM_VST3q32:
  case ARM_VST3q8_UPD:
  case ARM_VST3q16_UPD:
  case ARM_VST3q32_UPD:
  case ARM_VST4q8:
  case ARM_VST4q16:
  case ARM_VST4q32:
  case ARM_VST4q8_UPD:
  case ARM_VST4q16_UPD:
  case ARM_VST4q32_UPD:
   if (!Check(&S, DecodeDPRRegisterClass(Inst, (Rd + 4) % 32, Address, Decoder)))
    return MCDisassembler_Fail;
   break;
  default:
   break;
 }


 switch (MCInst_getOpcode(Inst)) {
  case ARM_VST4d8:
  case ARM_VST4d16:
  case ARM_VST4d32:
  case ARM_VST4d8_UPD:
  case ARM_VST4d16_UPD:
  case ARM_VST4d32_UPD:
   if (!Check(&S, DecodeDPRRegisterClass(Inst, (Rd + 3) % 32, Address, Decoder)))
    return MCDisassembler_Fail;
   break;

  case ARM_VST4q8:
  case ARM_VST4q16:
  case ARM_VST4q32:
  case ARM_VST4q8_UPD:
  case ARM_VST4q16_UPD:
  case ARM_VST4q32_UPD:
   if (!Check(&S, DecodeDPRRegisterClass(Inst, (Rd + 6) % 32, Address, Decoder)))
    return MCDisassembler_Fail;
   break;
  default:
   break;
 }

 return S;
}

static DecodeStatus DecodeVLD1DupInstruction(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;
 unsigned Rn, Rm, align, size;
 unsigned Rd = fieldFromInstruction_4(Insn, 12, 4);
 Rd |= fieldFromInstruction_4(Insn, 22, 1) << 4;
 Rn = fieldFromInstruction_4(Insn, 16, 4);
 Rm = fieldFromInstruction_4(Insn, 0, 4);
 align = fieldFromInstruction_4(Insn, 4, 1);
 size = fieldFromInstruction_4(Insn, 6, 2);

 if (size == 0 && align == 1)
  return MCDisassembler_Fail;

 align *= (1 << size);

 switch (MCInst_getOpcode(Inst)) {
  case ARM_VLD1DUPq16: case ARM_VLD1DUPq32: case ARM_VLD1DUPq8:
  case ARM_VLD1DUPq16wb_fixed: case ARM_VLD1DUPq16wb_register:
  case ARM_VLD1DUPq32wb_fixed: case ARM_VLD1DUPq32wb_register:
  case ARM_VLD1DUPq8wb_fixed: case ARM_VLD1DUPq8wb_register:
   if (!Check(&S, DecodeDPairRegisterClass(Inst, Rd, Address, Decoder)))
    return MCDisassembler_Fail;
   break;

  default:
   if (!Check(&S, DecodeDPRRegisterClass(Inst, Rd, Address, Decoder)))
    return MCDisassembler_Fail;
   break;
 }

 if (Rm != 0xF) {
  if (!Check(&S, DecodeGPRRegisterClass(Inst, Rn, Address, Decoder)))
   return MCDisassembler_Fail;
 }

 if (!Check(&S, DecodeGPRRegisterClass(Inst, Rn, Address, Decoder)))
  return MCDisassembler_Fail;

 MCOperand_CreateImm0(Inst, align);




 if (Rm != 0xD && Rm != 0xF &&
   !Check(&S, DecodeGPRRegisterClass(Inst, Rm, Address, Decoder)))
  return MCDisassembler_Fail;

 return S;
}

static DecodeStatus DecodeVLD2DupInstruction(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;
 unsigned Rn, Rm, align, size;
 unsigned Rd = fieldFromInstruction_4(Insn, 12, 4);
 Rd |= fieldFromInstruction_4(Insn, 22, 1) << 4;
 Rn = fieldFromInstruction_4(Insn, 16, 4);
 Rm = fieldFromInstruction_4(Insn, 0, 4);
 align = fieldFromInstruction_4(Insn, 4, 1);
 size = 1 << fieldFromInstruction_4(Insn, 6, 2);
 align *= 2 * size;

 switch (MCInst_getOpcode(Inst)) {
  case ARM_VLD2DUPd16: case ARM_VLD2DUPd32: case ARM_VLD2DUPd8:
  case ARM_VLD2DUPd16wb_fixed: case ARM_VLD2DUPd16wb_register:
  case ARM_VLD2DUPd32wb_fixed: case ARM_VLD2DUPd32wb_register:
  case ARM_VLD2DUPd8wb_fixed: case ARM_VLD2DUPd8wb_register:
   if (!Check(&S, DecodeDPairRegisterClass(Inst, Rd, Address, Decoder)))
    return MCDisassembler_Fail;
   break;

  case ARM_VLD2DUPd16x2: case ARM_VLD2DUPd32x2: case ARM_VLD2DUPd8x2:
  case ARM_VLD2DUPd16x2wb_fixed: case ARM_VLD2DUPd16x2wb_register:
  case ARM_VLD2DUPd32x2wb_fixed: case ARM_VLD2DUPd32x2wb_register:
  case ARM_VLD2DUPd8x2wb_fixed: case ARM_VLD2DUPd8x2wb_register:
   if (!Check(&S, DecodeDPairSpacedRegisterClass(Inst, Rd, Address, Decoder)))
    return MCDisassembler_Fail;
   break;

  default:
   if (!Check(&S, DecodeDPRRegisterClass(Inst, Rd, Address, Decoder)))
    return MCDisassembler_Fail;
   break;
 }

 if (Rm != 0xF)
  MCOperand_CreateImm0(Inst, 0);

 if (!Check(&S, DecodeGPRRegisterClass(Inst, Rn, Address, Decoder)))
  return MCDisassembler_Fail;

 MCOperand_CreateImm0(Inst, align);

 if (Rm != 0xD && Rm != 0xF) {
  if (!Check(&S, DecodeGPRRegisterClass(Inst, Rm, Address, Decoder)))
   return MCDisassembler_Fail;
 }

 return S;
}

static DecodeStatus DecodeVLD3DupInstruction(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;
 unsigned Rn, Rm, inc;
 unsigned Rd = fieldFromInstruction_4(Insn, 12, 4);
 Rd |= fieldFromInstruction_4(Insn, 22, 1) << 4;
 Rn = fieldFromInstruction_4(Insn, 16, 4);
 Rm = fieldFromInstruction_4(Insn, 0, 4);
 inc = fieldFromInstruction_4(Insn, 5, 1) + 1;

 if (!Check(&S, DecodeDPRRegisterClass(Inst, Rd, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodeDPRRegisterClass(Inst, (Rd + inc) % 32, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodeDPRRegisterClass(Inst, (Rd + 2*inc) % 32, Address, Decoder)))
  return MCDisassembler_Fail;

 if (Rm != 0xF) {
  if (!Check(&S, DecodeGPRRegisterClass(Inst, Rn, Address, Decoder)))
   return MCDisassembler_Fail;
 }

 if (!Check(&S, DecodeGPRRegisterClass(Inst, Rn, Address, Decoder)))
  return MCDisassembler_Fail;

 MCOperand_CreateImm0(Inst, 0);

 if (Rm == 0xD)
  MCOperand_CreateReg0(Inst, 0);
 else if (Rm != 0xF) {
  if (!Check(&S, DecodeGPRRegisterClass(Inst, Rm, Address, Decoder)))
   return MCDisassembler_Fail;
 }

 return S;
}

static DecodeStatus DecodeVLD4DupInstruction(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;
 unsigned Rn, Rm, size, inc, align;
 unsigned Rd = fieldFromInstruction_4(Insn, 12, 4);
 Rd |= fieldFromInstruction_4(Insn, 22, 1) << 4;
 Rn = fieldFromInstruction_4(Insn, 16, 4);
 Rm = fieldFromInstruction_4(Insn, 0, 4);
 size = fieldFromInstruction_4(Insn, 6, 2);
 inc = fieldFromInstruction_4(Insn, 5, 1) + 1;
 align = fieldFromInstruction_4(Insn, 4, 1);

 if (size == 0x3) {
  if (align == 0)
   return MCDisassembler_Fail;
  align = 16;
 } else {
  if (size == 2) {
   align *= 8;
  } else {
   size = 1 << size;
   align *= 4 * size;
  }
 }

 if (!Check(&S, DecodeDPRRegisterClass(Inst, Rd, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodeDPRRegisterClass(Inst, (Rd + inc) % 32, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodeDPRRegisterClass(Inst, (Rd + 2*inc) % 32, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodeDPRRegisterClass(Inst, (Rd + 3*inc) % 32, Address, Decoder)))
  return MCDisassembler_Fail;

 if (Rm != 0xF) {
  if (!Check(&S, DecodeGPRRegisterClass(Inst, Rn, Address, Decoder)))
   return MCDisassembler_Fail;
 }

 if (!Check(&S, DecodeGPRRegisterClass(Inst, Rn, Address, Decoder)))
  return MCDisassembler_Fail;

 MCOperand_CreateImm0(Inst, align);

 if (Rm == 0xD)
  MCOperand_CreateReg0(Inst, 0);
 else if (Rm != 0xF) {
  if (!Check(&S, DecodeGPRRegisterClass(Inst, Rm, Address, Decoder)))
   return MCDisassembler_Fail;
 }

 return S;
}

static DecodeStatus DecodeNEONModImmInstruction(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;
 unsigned imm, Q;
 unsigned Rd = fieldFromInstruction_4(Insn, 12, 4);
 Rd |= fieldFromInstruction_4(Insn, 22, 1) << 4;
 imm = fieldFromInstruction_4(Insn, 0, 4);
 imm |= fieldFromInstruction_4(Insn, 16, 3) << 4;
 imm |= fieldFromInstruction_4(Insn, 24, 1) << 7;
 imm |= fieldFromInstruction_4(Insn, 8, 4) << 8;
 imm |= fieldFromInstruction_4(Insn, 5, 1) << 12;
 Q = fieldFromInstruction_4(Insn, 6, 1);

 if (Q) {
  if (!Check(&S, DecodeQPRRegisterClass(Inst, Rd, Address, Decoder)))
   return MCDisassembler_Fail;
 } else {
  if (!Check(&S, DecodeDPRRegisterClass(Inst, Rd, Address, Decoder)))
   return MCDisassembler_Fail;
 }

 MCOperand_CreateImm0(Inst, imm);

 switch (MCInst_getOpcode(Inst)) {
  case ARM_VORRiv4i16:
  case ARM_VORRiv2i32:
  case ARM_VBICiv4i16:
  case ARM_VBICiv2i32:
   if (!Check(&S, DecodeDPRRegisterClass(Inst, Rd, Address, Decoder)))
    return MCDisassembler_Fail;
   break;
  case ARM_VORRiv8i16:
  case ARM_VORRiv4i32:
  case ARM_VBICiv8i16:
  case ARM_VBICiv4i32:
   if (!Check(&S, DecodeQPRRegisterClass(Inst, Rd, Address, Decoder)))
    return MCDisassembler_Fail;
   break;
  default:
   break;
 }

 return S;
}

static DecodeStatus DecodeVSHLMaxInstruction(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;
 unsigned Rm, size;
 unsigned Rd = fieldFromInstruction_4(Insn, 12, 4);
 Rd |= fieldFromInstruction_4(Insn, 22, 1) << 4;
 Rm = fieldFromInstruction_4(Insn, 0, 4);
 Rm |= fieldFromInstruction_4(Insn, 5, 1) << 4;
 size = fieldFromInstruction_4(Insn, 18, 2);

 if (!Check(&S, DecodeQPRRegisterClass(Inst, Rd, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodeDPRRegisterClass(Inst, Rm, Address, Decoder)))
  return MCDisassembler_Fail;

 MCOperand_CreateImm0(Inst, 8 << size);

 return S;
}

static DecodeStatus DecodeShiftRight8Imm(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder)
{
 MCOperand_CreateImm0(Inst, 8 - Val);

 return MCDisassembler_Success;
}

static DecodeStatus DecodeShiftRight16Imm(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder)
{
 MCOperand_CreateImm0(Inst, 16 - Val);

 return MCDisassembler_Success;
}

static DecodeStatus DecodeShiftRight32Imm(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder)
{
 MCOperand_CreateImm0(Inst, 32 - Val);

 return MCDisassembler_Success;
}

static DecodeStatus DecodeShiftRight64Imm(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder)
{
 MCOperand_CreateImm0(Inst, 64 - Val);

 return MCDisassembler_Success;
}

static DecodeStatus DecodeTBLInstruction(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;
 unsigned Rn, Rm, op;
 unsigned Rd = fieldFromInstruction_4(Insn, 12, 4);
 Rd |= fieldFromInstruction_4(Insn, 22, 1) << 4;
 Rn = fieldFromInstruction_4(Insn, 16, 4);
 Rn |= fieldFromInstruction_4(Insn, 7, 1) << 4;
 Rm = fieldFromInstruction_4(Insn, 0, 4);
 Rm |= fieldFromInstruction_4(Insn, 5, 1) << 4;
 op = fieldFromInstruction_4(Insn, 6, 1);

 if (!Check(&S, DecodeDPRRegisterClass(Inst, Rd, Address, Decoder)))
  return MCDisassembler_Fail;

 if (op) {
  if (!Check(&S, DecodeDPRRegisterClass(Inst, Rd, Address, Decoder)))
   return MCDisassembler_Fail;
 }

 switch (MCInst_getOpcode(Inst)) {
  case ARM_VTBL2:
  case ARM_VTBX2:
   if (!Check(&S, DecodeDPairRegisterClass(Inst, Rn, Address, Decoder)))
    return MCDisassembler_Fail;
   break;
  default:
   if (!Check(&S, DecodeDPRRegisterClass(Inst, Rn, Address, Decoder)))
    return MCDisassembler_Fail;
 }

 if (!Check(&S, DecodeDPRRegisterClass(Inst, Rm, Address, Decoder)))
  return MCDisassembler_Fail;

 return S;
}

static DecodeStatus DecodeThumbAddSpecialReg(MCInst *Inst, uint16_t Insn,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;
 unsigned dst = fieldFromInstruction_2(Insn, 8, 3);
 unsigned imm = fieldFromInstruction_2(Insn, 0, 8);

 if (!Check(&S, DecodetGPRRegisterClass(Inst, dst, Address, Decoder)))
  return MCDisassembler_Fail;

 switch(MCInst_getOpcode(Inst)) {
  default:
   return MCDisassembler_Fail;
  case ARM_tADR:
   break;
  case ARM_tADDrSPi:
   MCOperand_CreateReg0(Inst, ARM_SP);
   break;
 }

 MCOperand_CreateImm0(Inst, imm);

 return S;
}

static DecodeStatus DecodeThumbBROperand(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder)
{
 MCOperand_CreateImm0(Inst, SignExtend32(Val << 1, 12));

 return MCDisassembler_Success;
}

static DecodeStatus DecodeT2BROperand(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder)
{
 MCOperand_CreateImm0(Inst, SignExtend32(Val, 21));

 return MCDisassembler_Success;
}

static DecodeStatus DecodeThumbCmpBROperand(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder)
{
 MCOperand_CreateImm0(Inst, Val << 1);

 return MCDisassembler_Success;
}

static DecodeStatus DecodeThumbAddrModeRR(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;
 unsigned Rn = fieldFromInstruction_4(Val, 0, 3);
 unsigned Rm = fieldFromInstruction_4(Val, 3, 3);

 if (!Check(&S, DecodetGPRRegisterClass(Inst, Rn, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodetGPRRegisterClass(Inst, Rm, Address, Decoder)))
  return MCDisassembler_Fail;

 return S;
}

static DecodeStatus DecodeThumbAddrModeIS(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;
 unsigned Rn = fieldFromInstruction_4(Val, 0, 3);
 unsigned imm = fieldFromInstruction_4(Val, 3, 5);

 if (!Check(&S, DecodetGPRRegisterClass(Inst, Rn, Address, Decoder)))
  return MCDisassembler_Fail;

 MCOperand_CreateImm0(Inst, imm);

 return S;
}

static DecodeStatus DecodeThumbAddrModePC(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder)
{
 unsigned imm = Val << 2;

 MCOperand_CreateImm0(Inst, imm);


 return MCDisassembler_Success;
}

static DecodeStatus DecodeThumbAddrModeSP(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder)
{
 MCOperand_CreateReg0(Inst, ARM_SP);
 MCOperand_CreateImm0(Inst, Val);

 return MCDisassembler_Success;
}

static DecodeStatus DecodeT2AddrModeSOReg(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;
 unsigned Rn = fieldFromInstruction_4(Val, 6, 4);
 unsigned Rm = fieldFromInstruction_4(Val, 2, 4);
 unsigned imm = fieldFromInstruction_4(Val, 0, 2);


 switch (MCInst_getOpcode(Inst)) {
  case ARM_t2STRHs:
  case ARM_t2STRBs:
  case ARM_t2STRs:
   if (Rn == 15)
    return MCDisassembler_Fail;
  default:
   break;
 }

 if (!Check(&S, DecodeGPRRegisterClass(Inst, Rn, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecoderGPRRegisterClass(Inst, Rm, Address, Decoder)))
  return MCDisassembler_Fail;

 MCOperand_CreateImm0(Inst, imm);

 return S;
}

static DecodeStatus DecodeT2LoadShift(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;
 unsigned addrmode;
 unsigned Rt = fieldFromInstruction_4(Insn, 12, 4);
 unsigned Rn = fieldFromInstruction_4(Insn, 16, 4);
 bool hasMP = ARM_getFeatureBits(Inst->csh->mode, ARM_FeatureMP);
 bool hasV7Ops = ARM_getFeatureBits(Inst->csh->mode, ARM_HasV7Ops);

 if (Rn == 15) {
  switch (MCInst_getOpcode(Inst)) {
   case ARM_t2LDRBs:
    MCInst_setOpcode(Inst, ARM_t2LDRBpci);
    break;
   case ARM_t2LDRHs:
    MCInst_setOpcode(Inst, ARM_t2LDRHpci);
    break;
   case ARM_t2LDRSHs:
    MCInst_setOpcode(Inst, ARM_t2LDRSHpci);
    break;
   case ARM_t2LDRSBs:
    MCInst_setOpcode(Inst, ARM_t2LDRSBpci);
    break;
   case ARM_t2LDRs:
    MCInst_setOpcode(Inst, ARM_t2LDRpci);
    break;
   case ARM_t2PLDs:
    MCInst_setOpcode(Inst, ARM_t2PLDpci);
    break;
   case ARM_t2PLIs:
    MCInst_setOpcode(Inst, ARM_t2PLIpci);
    break;
   default:
    return MCDisassembler_Fail;
  }

  return DecodeT2LoadLabel(Inst, Insn, Address, Decoder);
 }

 if (Rt == 15) {
  switch (MCInst_getOpcode(Inst)) {
   case ARM_t2LDRSHs:
    return MCDisassembler_Fail;
   case ARM_t2LDRHs:
    MCInst_setOpcode(Inst, ARM_t2PLDWs);
    break;
   case ARM_t2LDRSBs:
    MCInst_setOpcode(Inst, ARM_t2PLIs);
   default:
    break;
  }
 }

 switch (MCInst_getOpcode(Inst)) {
  case ARM_t2PLDs:
   break;
  case ARM_t2PLIs:
   if (!hasV7Ops)
    return MCDisassembler_Fail;
   break;
  case ARM_t2PLDWs:
   if (!hasV7Ops || !hasMP)
    return MCDisassembler_Fail;
   break;
  default:
   if (!Check(&S, DecodeGPRRegisterClass(Inst, Rt, Address, Decoder)))
    return MCDisassembler_Fail;
 }

 addrmode = fieldFromInstruction_4(Insn, 4, 2);
 addrmode |= fieldFromInstruction_4(Insn, 0, 4) << 2;
 addrmode |= fieldFromInstruction_4(Insn, 16, 4) << 6;

 if (!Check(&S, DecodeT2AddrModeSOReg(Inst, addrmode, Address, Decoder)))
  return MCDisassembler_Fail;

 return S;
}

static DecodeStatus DecodeT2LoadImm8(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void* Decoder)
{
 DecodeStatus S = MCDisassembler_Success;
 unsigned Rn = fieldFromInstruction_4(Insn, 16, 4);
 unsigned Rt = fieldFromInstruction_4(Insn, 12, 4);
 unsigned U = fieldFromInstruction_4(Insn, 9, 1);
 unsigned imm = fieldFromInstruction_4(Insn, 0, 8);
 unsigned add = fieldFromInstruction_4(Insn, 9, 1);
 bool hasMP = ARM_getFeatureBits(Inst->csh->mode, ARM_FeatureMP);
 bool hasV7Ops = ARM_getFeatureBits(Inst->csh->mode, ARM_HasV7Ops);

 imm |= (U << 8);
 imm |= (Rn << 9);

 if (Rn == 15) {
  switch (MCInst_getOpcode(Inst)) {
   case ARM_t2LDRi8:
    MCInst_setOpcode(Inst, ARM_t2LDRpci);
    break;
   case ARM_t2LDRBi8:
    MCInst_setOpcode(Inst, ARM_t2LDRBpci);
    break;
   case ARM_t2LDRSBi8:
    MCInst_setOpcode(Inst, ARM_t2LDRSBpci);
    break;
   case ARM_t2LDRHi8:
    MCInst_setOpcode(Inst, ARM_t2LDRHpci);
    break;
   case ARM_t2LDRSHi8:
    MCInst_setOpcode(Inst, ARM_t2LDRSHpci);
    break;
   case ARM_t2PLDi8:
    MCInst_setOpcode(Inst, ARM_t2PLDpci);
    break;
   case ARM_t2PLIi8:
    MCInst_setOpcode(Inst, ARM_t2PLIpci);
    break;
   default:
    return MCDisassembler_Fail;
  }

  return DecodeT2LoadLabel(Inst, Insn, Address, Decoder);
 }

 if (Rt == 15) {
  switch (MCInst_getOpcode(Inst)) {
   case ARM_t2LDRSHi8:
    return MCDisassembler_Fail;
   case ARM_t2LDRHi8:
    if (!add)
     MCInst_setOpcode(Inst, ARM_t2PLDWi8);
    break;
   case ARM_t2LDRSBi8:
    MCInst_setOpcode(Inst, ARM_t2PLIi8);
    break;
   default:
    break;
  }
 }

 switch (MCInst_getOpcode(Inst)) {
  case ARM_t2PLDi8:
   break;
  case ARM_t2PLIi8:
   if (!hasV7Ops)
    return MCDisassembler_Fail;
   break;
  case ARM_t2PLDWi8:
   if (!hasV7Ops || !hasMP)
    return MCDisassembler_Fail;
   break;
  default:
   if (!Check(&S, DecodeGPRRegisterClass(Inst, Rt, Address, Decoder)))
    return MCDisassembler_Fail;
 }

 if (!Check(&S, DecodeT2AddrModeImm8(Inst, imm, Address, Decoder)))
  return MCDisassembler_Fail;

 return S;
}

static DecodeStatus DecodeT2LoadImm12(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void* Decoder)
{
 DecodeStatus S = MCDisassembler_Success;
 unsigned Rn = fieldFromInstruction_4(Insn, 16, 4);
 unsigned Rt = fieldFromInstruction_4(Insn, 12, 4);
 unsigned imm = fieldFromInstruction_4(Insn, 0, 12);
 bool hasMP = ARM_getFeatureBits(Inst->csh->mode, ARM_FeatureMP);
 bool hasV7Ops = ARM_getFeatureBits(Inst->csh->mode, ARM_HasV7Ops);

 imm |= (Rn << 13);

 if (Rn == 15) {
  switch (MCInst_getOpcode(Inst)) {
   case ARM_t2LDRi12:
    MCInst_setOpcode(Inst, ARM_t2LDRpci);
    break;
   case ARM_t2LDRHi12:
    MCInst_setOpcode(Inst, ARM_t2LDRHpci);
    break;
   case ARM_t2LDRSHi12:
    MCInst_setOpcode(Inst, ARM_t2LDRSHpci);
    break;
   case ARM_t2LDRBi12:
    MCInst_setOpcode(Inst, ARM_t2LDRBpci);
    break;
   case ARM_t2LDRSBi12:
    MCInst_setOpcode(Inst, ARM_t2LDRSBpci);
    break;
   case ARM_t2PLDi12:
    MCInst_setOpcode(Inst, ARM_t2PLDpci);
    break;
   case ARM_t2PLIi12:
    MCInst_setOpcode(Inst, ARM_t2PLIpci);
    break;
   default:
    return MCDisassembler_Fail;
  }
  return DecodeT2LoadLabel(Inst, Insn, Address, Decoder);
 }

 if (Rt == 15) {
  switch (MCInst_getOpcode(Inst)) {
   case ARM_t2LDRSHi12:
    return MCDisassembler_Fail;
   case ARM_t2LDRHi12:
    MCInst_setOpcode(Inst, ARM_t2PLDWi12);
    break;
   case ARM_t2LDRSBi12:
    MCInst_setOpcode(Inst, ARM_t2PLIi12);
    break;
   default:
    break;
  }
 }

 switch (MCInst_getOpcode(Inst)) {
  case ARM_t2PLDi12:
   break;
  case ARM_t2PLIi12:
   if (!hasV7Ops)
    return MCDisassembler_Fail;
   break;
  case ARM_t2PLDWi12:
   if (!hasV7Ops || !hasMP)
    return MCDisassembler_Fail;
   break;
  default:
   if (!Check(&S, DecodeGPRRegisterClass(Inst, Rt, Address, Decoder)))
    return MCDisassembler_Fail;
 }

 if (!Check(&S, DecodeT2AddrModeImm12(Inst, imm, Address, Decoder)))
  return MCDisassembler_Fail;

 return S;
}

static DecodeStatus DecodeT2LoadT(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void* Decoder)
{
 DecodeStatus S = MCDisassembler_Success;

 unsigned Rn = fieldFromInstruction_4(Insn, 16, 4);
 unsigned Rt = fieldFromInstruction_4(Insn, 12, 4);
 unsigned imm = fieldFromInstruction_4(Insn, 0, 8);
 imm |= (Rn << 9);

 if (Rn == 15) {
  switch (MCInst_getOpcode(Inst)) {
   case ARM_t2LDRT:
    MCInst_setOpcode(Inst, ARM_t2LDRpci);
    break;
   case ARM_t2LDRBT:
    MCInst_setOpcode(Inst, ARM_t2LDRBpci);
    break;
   case ARM_t2LDRHT:
    MCInst_setOpcode(Inst, ARM_t2LDRHpci);
    break;
   case ARM_t2LDRSBT:
    MCInst_setOpcode(Inst, ARM_t2LDRSBpci);
    break;
   case ARM_t2LDRSHT:
    MCInst_setOpcode(Inst, ARM_t2LDRSHpci);
    break;
   default:
    return MCDisassembler_Fail;
  }

  return DecodeT2LoadLabel(Inst, Insn, Address, Decoder);
 }

 if (!Check(&S, DecoderGPRRegisterClass(Inst, Rt, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodeT2AddrModeImm8(Inst, imm, Address, Decoder)))
  return MCDisassembler_Fail;

 return S;
}

static DecodeStatus DecodeT2LoadLabel(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void* Decoder)
{
 DecodeStatus S = MCDisassembler_Success;
 unsigned Rt = fieldFromInstruction_4(Insn, 12, 4);
 unsigned U = fieldFromInstruction_4(Insn, 23, 1);
 int imm = fieldFromInstruction_4(Insn, 0, 12);
 bool hasV7Ops = ARM_getFeatureBits(Inst->csh->mode, ARM_HasV7Ops);

 if (Rt == 15) {
  switch (MCInst_getOpcode(Inst)) {
   case ARM_t2LDRBpci:
   case ARM_t2LDRHpci:
    MCInst_setOpcode(Inst, ARM_t2PLDpci);
    break;
   case ARM_t2LDRSBpci:
    MCInst_setOpcode(Inst, ARM_t2PLIpci);
    break;
   case ARM_t2LDRSHpci:
    return MCDisassembler_Fail;
   default:
    break;
  }
 }

 switch(MCInst_getOpcode(Inst)) {
  case ARM_t2PLDpci:
   break;
  case ARM_t2PLIpci:
   if (!hasV7Ops)
    return MCDisassembler_Fail;
   break;
  default:
   if (!Check(&S, DecodeGPRRegisterClass(Inst, Rt, Address, Decoder)))
    return MCDisassembler_Fail;
 }

 if (!U) {

  if (imm == 0)
   imm = INT32_MIN;
  else
   imm = -imm;
 }

 MCOperand_CreateImm0(Inst, imm);

 return S;
}

static DecodeStatus DecodeT2Imm8S4(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder)
{
 if (Val == 0)
  MCOperand_CreateImm0(Inst, INT32_MIN);
 else {
  int imm = Val & 0xFF;

  if (!(Val & 0x100)) imm *= -1;

  MCOperand_CreateImm0(Inst, imm * 4);
 }

 return MCDisassembler_Success;
}

static DecodeStatus DecodeT2AddrModeImm8s4(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;
 unsigned Rn = fieldFromInstruction_4(Val, 9, 4);
 unsigned imm = fieldFromInstruction_4(Val, 0, 9);

 if (!Check(&S, DecodeGPRRegisterClass(Inst, Rn, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodeT2Imm8S4(Inst, imm, Address, Decoder)))
  return MCDisassembler_Fail;

 return S;
}

static DecodeStatus DecodeT2AddrModeImm0_1020s4(MCInst *Inst,unsigned Val,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;
 unsigned Rn = fieldFromInstruction_4(Val, 8, 4);
 unsigned imm = fieldFromInstruction_4(Val, 0, 8);

 if (!Check(&S, DecodeGPRnopcRegisterClass(Inst, Rn, Address, Decoder)))
  return MCDisassembler_Fail;

 MCOperand_CreateImm0(Inst, imm);

 return S;
}

static DecodeStatus DecodeT2Imm8(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder)
{
 int imm = Val & 0xFF;

 if (Val == 0)
  imm = INT32_MIN;
 else if (!(Val & 0x100))
  imm *= -1;

 MCOperand_CreateImm0(Inst, imm);

 return MCDisassembler_Success;
}

static DecodeStatus DecodeT2AddrModeImm8(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;

 unsigned Rn = fieldFromInstruction_4(Val, 9, 4);
 unsigned imm = fieldFromInstruction_4(Val, 0, 9);


 switch (MCInst_getOpcode(Inst)) {
  case ARM_t2STRT:
  case ARM_t2STRBT:
  case ARM_t2STRHT:
  case ARM_t2STRi8:
  case ARM_t2STRHi8:
  case ARM_t2STRBi8:
   if (Rn == 15)
    return MCDisassembler_Fail;
   break;
  default:
   break;
 }


 switch (MCInst_getOpcode(Inst)) {
  case ARM_t2LDRT:
  case ARM_t2LDRBT:
  case ARM_t2LDRHT:
  case ARM_t2LDRSBT:
  case ARM_t2LDRSHT:
  case ARM_t2STRT:
  case ARM_t2STRBT:
  case ARM_t2STRHT:
   imm |= 0x100;
   break;
  default:
   break;
 }

 if (!Check(&S, DecodeGPRRegisterClass(Inst, Rn, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodeT2Imm8(Inst, imm, Address, Decoder)))
  return MCDisassembler_Fail;

 return S;
}

static DecodeStatus DecodeT2LdStPre(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;
 unsigned load;
 unsigned Rt = fieldFromInstruction_4(Insn, 12, 4);
 unsigned Rn = fieldFromInstruction_4(Insn, 16, 4);
 unsigned addr = fieldFromInstruction_4(Insn, 0, 8);
 addr |= fieldFromInstruction_4(Insn, 9, 1) << 8;
 addr |= Rn << 9;
 load = fieldFromInstruction_4(Insn, 20, 1);

 if (Rn == 15) {
  switch (MCInst_getOpcode(Inst)) {
   case ARM_t2LDR_PRE:
   case ARM_t2LDR_POST:
    MCInst_setOpcode(Inst, ARM_t2LDRpci);
    break;
   case ARM_t2LDRB_PRE:
   case ARM_t2LDRB_POST:
    MCInst_setOpcode(Inst, ARM_t2LDRBpci);
    break;
   case ARM_t2LDRH_PRE:
   case ARM_t2LDRH_POST:
    MCInst_setOpcode(Inst, ARM_t2LDRHpci);
    break;
   case ARM_t2LDRSB_PRE:
   case ARM_t2LDRSB_POST:
    if (Rt == 15)
     MCInst_setOpcode(Inst, ARM_t2PLIpci);
    else
     MCInst_setOpcode(Inst, ARM_t2LDRSBpci);
    break;
   case ARM_t2LDRSH_PRE:
   case ARM_t2LDRSH_POST:
    MCInst_setOpcode(Inst, ARM_t2LDRSHpci);
    break;
   default:
    return MCDisassembler_Fail;
  }

  return DecodeT2LoadLabel(Inst, Insn, Address, Decoder);
 }

 if (!load) {
  if (!Check(&S, DecodeGPRRegisterClass(Inst, Rn, Address, Decoder)))
   return MCDisassembler_Fail;
 }

 if (!Check(&S, DecodeGPRRegisterClass(Inst, Rt, Address, Decoder)))
  return MCDisassembler_Fail;

 if (load) {
  if (!Check(&S, DecodeGPRRegisterClass(Inst, Rn, Address, Decoder)))
   return MCDisassembler_Fail;
 }

 if (!Check(&S, DecodeT2AddrModeImm8(Inst, addr, Address, Decoder)))
  return MCDisassembler_Fail;

 return S;
}

static DecodeStatus DecodeT2AddrModeImm12(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;
 unsigned Rn = fieldFromInstruction_4(Val, 13, 4);
 unsigned imm = fieldFromInstruction_4(Val, 0, 12);


 switch (MCInst_getOpcode(Inst)) {
  case ARM_t2STRi12:
  case ARM_t2STRBi12:
  case ARM_t2STRHi12:
   if (Rn == 15)
    return MCDisassembler_Fail;
  default:
   break;
 }

 if (!Check(&S, DecodeGPRRegisterClass(Inst, Rn, Address, Decoder)))
  return MCDisassembler_Fail;

 MCOperand_CreateImm0(Inst, imm);

 return S;
}

static DecodeStatus DecodeThumbAddSPImm(MCInst *Inst, uint16_t Insn,
  uint64_t Address, const void *Decoder)
{
 unsigned imm = fieldFromInstruction_2(Insn, 0, 7);

 MCOperand_CreateReg0(Inst, ARM_SP);
 MCOperand_CreateReg0(Inst, ARM_SP);
 MCOperand_CreateImm0(Inst, imm);

 return MCDisassembler_Success;
}

static DecodeStatus DecodeThumbAddSPReg(MCInst *Inst, uint16_t Insn,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;

 if (MCInst_getOpcode(Inst) == ARM_tADDrSP) {
  unsigned Rdm = fieldFromInstruction_2(Insn, 0, 3);
  Rdm |= fieldFromInstruction_2(Insn, 7, 1) << 3;

  if (!Check(&S, DecodeGPRRegisterClass(Inst, Rdm, Address, Decoder)))
   return MCDisassembler_Fail;

  MCOperand_CreateReg0(Inst, ARM_SP);

  if (!Check(&S, DecodeGPRRegisterClass(Inst, Rdm, Address, Decoder)))
   return MCDisassembler_Fail;
 } else if (MCInst_getOpcode(Inst) == ARM_tADDspr) {
  unsigned Rm = fieldFromInstruction_2(Insn, 3, 4);

  MCOperand_CreateReg0(Inst, ARM_SP);
  MCOperand_CreateReg0(Inst, ARM_SP);

  if (!Check(&S, DecodeGPRRegisterClass(Inst, Rm, Address, Decoder)))
   return MCDisassembler_Fail;
 }

 return S;
}

static DecodeStatus DecodeThumbCPS(MCInst *Inst, uint16_t Insn,
  uint64_t Address, const void *Decoder)
{
 unsigned imod = fieldFromInstruction_2(Insn, 4, 1) | 0x2;
 unsigned flags = fieldFromInstruction_2(Insn, 0, 3);

 MCOperand_CreateImm0(Inst, imod);
 MCOperand_CreateImm0(Inst, flags);

 return MCDisassembler_Success;
}

static DecodeStatus DecodePostIdxReg(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;
 unsigned Rm = fieldFromInstruction_4(Insn, 0, 4);
 unsigned add = fieldFromInstruction_4(Insn, 4, 1);

 if (!Check(&S, DecodeGPRnopcRegisterClass(Inst, Rm, Address, Decoder)))
  return MCDisassembler_Fail;

 MCOperand_CreateImm0(Inst, add);

 return S;
}

static DecodeStatus DecodeThumbBLXOffset(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder)
{







 unsigned S = (Val >> 23) & 1;
 unsigned J1 = (Val >> 22) & 1;
 unsigned J2 = (Val >> 21) & 1;
 unsigned I1 = !(J1 ^ S);
 unsigned I2 = !(J2 ^ S);
 unsigned tmp = (Val & ~0x600000) | (I1 << 22) | (I2 << 21);
 int imm32 = SignExtend32(tmp << 1, 25);

 MCOperand_CreateImm0(Inst, imm32);

 return MCDisassembler_Success;
}

static DecodeStatus DecodeCoprocessor(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder)
{
 if (Val == 0xA || Val == 0xB)
  return MCDisassembler_Fail;

 if (ARM_getFeatureBits(Inst->csh->mode, ARM_HasV8Ops) && !(Val == 14 || Val == 15))
  return MCDisassembler_Fail;

 MCOperand_CreateImm0(Inst, Val);

 return MCDisassembler_Success;
}

static DecodeStatus DecodeThumbTableBranch(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;
 unsigned Rn = fieldFromInstruction_4(Insn, 16, 4);
 unsigned Rm = fieldFromInstruction_4(Insn, 0, 4);

 if (Rn == ARM_SP) S = MCDisassembler_SoftFail;

 if (!Check(&S, DecodeGPRRegisterClass(Inst, Rn, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecoderGPRRegisterClass(Inst, Rm, Address, Decoder)))
  return MCDisassembler_Fail;

 return S;
}

static DecodeStatus DecodeThumb2BCCInstruction(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;
 unsigned brtarget;
 unsigned pred = fieldFromInstruction_4(Insn, 22, 4);

 if (pred == 0xE || pred == 0xF) {
  unsigned imm;
  unsigned opc = fieldFromInstruction_4(Insn, 4, 28);
  switch (opc) {
   default:
    return MCDisassembler_Fail;
   case 0xf3bf8f4:
    MCInst_setOpcode(Inst, ARM_t2DSB);
    break;
   case 0xf3bf8f5:
    MCInst_setOpcode(Inst, ARM_t2DMB);
    break;
   case 0xf3bf8f6:
    MCInst_setOpcode(Inst, ARM_t2ISB);
    break;
  }

  imm = fieldFromInstruction_4(Insn, 0, 4);
  return DecodeMemBarrierOption(Inst, imm, Address, Decoder);
 }

 brtarget = fieldFromInstruction_4(Insn, 0, 11) << 1;
 brtarget |= fieldFromInstruction_4(Insn, 11, 1) << 19;
 brtarget |= fieldFromInstruction_4(Insn, 13, 1) << 18;
 brtarget |= fieldFromInstruction_4(Insn, 16, 6) << 12;
 brtarget |= fieldFromInstruction_4(Insn, 26, 1) << 20;

 if (!Check(&S, DecodeT2BROperand(Inst, brtarget, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodePredicateOperand(Inst, pred, Address, Decoder)))
  return MCDisassembler_Fail;

 return S;
}




static DecodeStatus DecodeT2SOImm(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder)
{
 unsigned ctrl = fieldFromInstruction_4(Val, 10, 2);

 if (ctrl == 0) {
  unsigned byte = fieldFromInstruction_4(Val, 8, 2);
  unsigned imm = fieldFromInstruction_4(Val, 0, 8);

  switch (byte) {
   case 0:
    MCOperand_CreateImm0(Inst, imm);
    break;
   case 1:
    MCOperand_CreateImm0(Inst, (imm << 16) | imm);
    break;
   case 2:
    MCOperand_CreateImm0(Inst, (imm << 24) | (imm << 8));
    break;
   case 3:
    MCOperand_CreateImm0(Inst, (imm << 24) | (imm << 16) | (imm << 8) | imm);
    break;
  }
 } else {
  unsigned unrot = fieldFromInstruction_4(Val, 0, 7) | 0x80;
  unsigned rot = fieldFromInstruction_4(Val, 7, 5);
  unsigned imm = (unrot >> rot) | (unrot << ((32 - rot) & 31));

  MCOperand_CreateImm0(Inst, imm);
 }

 return MCDisassembler_Success;
}

static DecodeStatus DecodeThumbBCCTargetOperand(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder)
{
 MCOperand_CreateImm0(Inst, SignExtend32(Val << 1, 9));

 return MCDisassembler_Success;
}

static DecodeStatus DecodeThumbBLTargetOperand(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder)
{







 unsigned S = (Val >> 23) & 1;
 unsigned J1 = (Val >> 22) & 1;
 unsigned J2 = (Val >> 21) & 1;
 unsigned I1 = !(J1 ^ S);
 unsigned I2 = !(J2 ^ S);
 unsigned tmp = (Val & ~0x600000) | (I1 << 22) | (I2 << 21);
 int imm32 = SignExtend32(tmp << 1, 25);

 MCOperand_CreateImm0(Inst, imm32);

 return MCDisassembler_Success;
}

static DecodeStatus DecodeMemBarrierOption(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder)
{
 if (Val & ~0xf)
  return MCDisassembler_Fail;

 MCOperand_CreateImm0(Inst, Val);

 return MCDisassembler_Success;
}

static DecodeStatus DecodeInstSyncBarrierOption(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder)
{
 if (Val & ~0xf)
  return MCDisassembler_Fail;

 MCOperand_CreateImm0(Inst, Val);

 return MCDisassembler_Success;
}

static DecodeStatus DecodeMSRMask(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;

 if (ARM_getFeatureBits(Inst->csh->mode, ARM_FeatureMClass)) {
  unsigned ValLow = Val & 0xff;


  switch (ValLow) {
   case 0:
   case 1:
   case 2:
   case 3:
   case 5:
   case 6:
   case 7:
   case 8:
   case 9:
   case 16:
   case 20:
    break;
   case 17:
   case 18:
   case 19:
    if (!ARM_getFeatureBits(Inst->csh->mode, ARM_HasV7Ops))

     return MCDisassembler_Fail;
    break;
   case 0x8a:
   case 0x8b:
   case 0x91:
   case 0x93:
    if (!ARM_getFeatureBits(Inst->csh->mode, ARM_HasV8MMainlineOps))
     return MCDisassembler_Fail;

   case 10:
   case 11:
   case 0x88:
   case 0x89:
   case 0x90:
   case 0x94:
   case 0x98:
    if (!ARM_getFeatureBits(Inst->csh->mode, ARM_Feature8MSecExt))
     return MCDisassembler_Fail;
    break;
   default:
    return MCDisassembler_SoftFail;
  }

  if (MCInst_getOpcode(Inst) == ARM_t2MSR_M) {
   unsigned Mask = fieldFromInstruction_4(Val, 10, 2);
   if (!ARM_getFeatureBits(Inst->csh->mode, ARM_HasV7Ops)) {


    if (Mask != 2)
     S = MCDisassembler_SoftFail;
   } else {






    if (Mask == 0 || (Mask != 2 && ValLow > 3) ||
      (!ARM_getFeatureBits(Inst->csh->mode, ARM_FeatureDSP) && (Mask & 1)))
     S = MCDisassembler_SoftFail;
   }
  }
 } else {

  if (Val == 0)
   return MCDisassembler_Fail;
 }

 MCOperand_CreateImm0(Inst, Val);
 return S;
}

static DecodeStatus DecodeBankedReg(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder)
{
 unsigned R = fieldFromInstruction_4(Val, 5, 1);
 unsigned SysM = fieldFromInstruction_4(Val, 0, 5);




 if (!lookupBankedRegByEncoding((R << 5) | SysM))
  return MCDisassembler_Fail;

 MCOperand_CreateImm0(Inst, Val);

 return MCDisassembler_Success;
}

static DecodeStatus DecodeDoubleRegLoad(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;
 unsigned Rt = fieldFromInstruction_4(Insn, 12, 4);
 unsigned Rn = fieldFromInstruction_4(Insn, 16, 4);
 unsigned pred = fieldFromInstruction_4(Insn, 28, 4);

 if (Rn == 0xF)
  S = MCDisassembler_SoftFail;

 if (!Check(&S, DecodeGPRPairRegisterClass(Inst, Rt, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodeGPRRegisterClass(Inst, Rn, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodePredicateOperand(Inst, pred, Address, Decoder)))
  return MCDisassembler_Fail;

 return S;
}

static DecodeStatus DecodeDoubleRegStore(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;
 unsigned Rd = fieldFromInstruction_4(Insn, 12, 4);
 unsigned Rt = fieldFromInstruction_4(Insn, 0, 4);
 unsigned Rn = fieldFromInstruction_4(Insn, 16, 4);
 unsigned pred = fieldFromInstruction_4(Insn, 28, 4);

 if (!Check(&S, DecodeGPRnopcRegisterClass(Inst, Rd, Address, Decoder)))
  return MCDisassembler_Fail;

 if (Rn == 0xF || Rd == Rn || Rd == Rt || Rd == Rt + 1)
  S = MCDisassembler_SoftFail;

 if (!Check(&S, DecodeGPRPairRegisterClass(Inst, Rt, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodeGPRRegisterClass(Inst, Rn, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodePredicateOperand(Inst, pred, Address, Decoder)))
  return MCDisassembler_Fail;

 return S;
}

static DecodeStatus DecodeLDRPreImm(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;
 unsigned pred;
 unsigned Rn = fieldFromInstruction_4(Insn, 16, 4);
 unsigned Rt = fieldFromInstruction_4(Insn, 12, 4);
 unsigned imm = fieldFromInstruction_4(Insn, 0, 12);
 imm |= fieldFromInstruction_4(Insn, 16, 4) << 13;
 imm |= fieldFromInstruction_4(Insn, 23, 1) << 12;
 pred = fieldFromInstruction_4(Insn, 28, 4);

 if (Rn == 0xF || Rn == Rt) S = MCDisassembler_SoftFail;

 if (!Check(&S, DecodeGPRRegisterClass(Inst, Rt, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodeGPRRegisterClass(Inst, Rn, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodeAddrModeImm12Operand(Inst, imm, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodePredicateOperand(Inst, pred, Address, Decoder)))
  return MCDisassembler_Fail;

 return S;
}

static DecodeStatus DecodeLDRPreReg(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;
 unsigned pred, Rm;
 unsigned Rn = fieldFromInstruction_4(Insn, 16, 4);
 unsigned Rt = fieldFromInstruction_4(Insn, 12, 4);
 unsigned imm = fieldFromInstruction_4(Insn, 0, 12);
 imm |= fieldFromInstruction_4(Insn, 16, 4) << 13;
 imm |= fieldFromInstruction_4(Insn, 23, 1) << 12;
 pred = fieldFromInstruction_4(Insn, 28, 4);
 Rm = fieldFromInstruction_4(Insn, 0, 4);

 if (Rn == 0xF || Rn == Rt) S = MCDisassembler_SoftFail;
 if (Rm == 0xF) S = MCDisassembler_SoftFail;

 if (!Check(&S, DecodeGPRRegisterClass(Inst, Rt, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodeGPRRegisterClass(Inst, Rn, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodeSORegMemOperand(Inst, imm, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodePredicateOperand(Inst, pred, Address, Decoder)))
  return MCDisassembler_Fail;

 return S;
}

static DecodeStatus DecodeSTRPreImm(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;
 unsigned pred;
 unsigned Rn = fieldFromInstruction_4(Insn, 16, 4);
 unsigned Rt = fieldFromInstruction_4(Insn, 12, 4);
 unsigned imm = fieldFromInstruction_4(Insn, 0, 12);
 imm |= fieldFromInstruction_4(Insn, 16, 4) << 13;
 imm |= fieldFromInstruction_4(Insn, 23, 1) << 12;
 pred = fieldFromInstruction_4(Insn, 28, 4);

 if (Rn == 0xF || Rn == Rt) S = MCDisassembler_SoftFail;

 if (!Check(&S, DecodeGPRRegisterClass(Inst, Rn, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodeGPRRegisterClass(Inst, Rt, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodeAddrModeImm12Operand(Inst, imm, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodePredicateOperand(Inst, pred, Address, Decoder)))
  return MCDisassembler_Fail;

 return S;
}

static DecodeStatus DecodeSTRPreReg(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;
 unsigned pred;
 unsigned Rn = fieldFromInstruction_4(Insn, 16, 4);
 unsigned Rt = fieldFromInstruction_4(Insn, 12, 4);
 unsigned imm = fieldFromInstruction_4(Insn, 0, 12);
 imm |= fieldFromInstruction_4(Insn, 16, 4) << 13;
 imm |= fieldFromInstruction_4(Insn, 23, 1) << 12;
 pred = fieldFromInstruction_4(Insn, 28, 4);

 if (Rn == 0xF || Rn == Rt) S = MCDisassembler_SoftFail;

 if (!Check(&S, DecodeGPRRegisterClass(Inst, Rn, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodeGPRRegisterClass(Inst, Rt, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodeSORegMemOperand(Inst, imm, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodePredicateOperand(Inst, pred, Address, Decoder)))
  return MCDisassembler_Fail;

 return S;
}

static DecodeStatus DecodeVLD1LN(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;
 unsigned size, align = 0, index = 0;
 unsigned Rn = fieldFromInstruction_4(Insn, 16, 4);
 unsigned Rm = fieldFromInstruction_4(Insn, 0, 4);
 unsigned Rd = fieldFromInstruction_4(Insn, 12, 4);
 Rd |= fieldFromInstruction_4(Insn, 22, 1) << 4;
 size = fieldFromInstruction_4(Insn, 10, 2);

 switch (size) {
  default:
   return MCDisassembler_Fail;
  case 0:
   if (fieldFromInstruction_4(Insn, 4, 1))
    return MCDisassembler_Fail;
   index = fieldFromInstruction_4(Insn, 5, 3);
   break;
  case 1:
   if (fieldFromInstruction_4(Insn, 5, 1))
    return MCDisassembler_Fail;
   index = fieldFromInstruction_4(Insn, 6, 2);
   if (fieldFromInstruction_4(Insn, 4, 1))
    align = 2;
   break;
  case 2:
   if (fieldFromInstruction_4(Insn, 6, 1))
    return MCDisassembler_Fail;

   index = fieldFromInstruction_4(Insn, 7, 1);

   switch (fieldFromInstruction_4(Insn, 4, 2)) {
    case 0 :
     align = 0; break;
    case 3:
     align = 4; break;
    default:
     return MCDisassembler_Fail;
   }
   break;
 }

 if (!Check(&S, DecodeDPRRegisterClass(Inst, Rd, Address, Decoder)))
  return MCDisassembler_Fail;

 if (Rm != 0xF) {
  if (!Check(&S, DecodeGPRRegisterClass(Inst, Rn, Address, Decoder)))
   return MCDisassembler_Fail;
 }

 if (!Check(&S, DecodeGPRRegisterClass(Inst, Rn, Address, Decoder)))
  return MCDisassembler_Fail;

 MCOperand_CreateImm0(Inst, align);

 if (Rm != 0xF) {
  if (Rm != 0xD) {
   if (!Check(&S, DecodeGPRRegisterClass(Inst, Rm, Address, Decoder)))
    return MCDisassembler_Fail;
  } else
   MCOperand_CreateReg0(Inst, 0);
 }

 if (!Check(&S, DecodeDPRRegisterClass(Inst, Rd, Address, Decoder)))
  return MCDisassembler_Fail;

 MCOperand_CreateImm0(Inst, index);

 return S;
}

static DecodeStatus DecodeVST1LN(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;
 unsigned size, align = 0, index = 0;
 unsigned Rn = fieldFromInstruction_4(Insn, 16, 4);
 unsigned Rm = fieldFromInstruction_4(Insn, 0, 4);
 unsigned Rd = fieldFromInstruction_4(Insn, 12, 4);
 Rd |= fieldFromInstruction_4(Insn, 22, 1) << 4;
 size = fieldFromInstruction_4(Insn, 10, 2);

 switch (size) {
  default:
   return MCDisassembler_Fail;
  case 0:
   if (fieldFromInstruction_4(Insn, 4, 1))
    return MCDisassembler_Fail;

   index = fieldFromInstruction_4(Insn, 5, 3);
   break;
  case 1:
   if (fieldFromInstruction_4(Insn, 5, 1))
    return MCDisassembler_Fail;

   index = fieldFromInstruction_4(Insn, 6, 2);
   if (fieldFromInstruction_4(Insn, 4, 1))
    align = 2;
   break;
  case 2:
   if (fieldFromInstruction_4(Insn, 6, 1))
    return MCDisassembler_Fail;

   index = fieldFromInstruction_4(Insn, 7, 1);

   switch (fieldFromInstruction_4(Insn, 4, 2)) {
    case 0:
     align = 0; break;
    case 3:
     align = 4; break;
    default:
     return MCDisassembler_Fail;
   }
   break;
 }

 if (Rm != 0xF) {
  if (!Check(&S, DecodeGPRRegisterClass(Inst, Rn, Address, Decoder)))
   return MCDisassembler_Fail;
 }

 if (!Check(&S, DecodeGPRRegisterClass(Inst, Rn, Address, Decoder)))
  return MCDisassembler_Fail;

 MCOperand_CreateImm0(Inst, align);

 if (Rm != 0xF) {
  if (Rm != 0xD) {
   if (!Check(&S, DecodeGPRRegisterClass(Inst, Rm, Address, Decoder)))
    return MCDisassembler_Fail;
  } else
   MCOperand_CreateReg0(Inst, 0);
 }

 if (!Check(&S, DecodeDPRRegisterClass(Inst, Rd, Address, Decoder)))
  return MCDisassembler_Fail;

 MCOperand_CreateImm0(Inst, index);

 return S;
}

static DecodeStatus DecodeVLD2LN(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;
 unsigned size, align = 0, index = 0, inc = 1;
 unsigned Rn = fieldFromInstruction_4(Insn, 16, 4);
 unsigned Rm = fieldFromInstruction_4(Insn, 0, 4);
 unsigned Rd = fieldFromInstruction_4(Insn, 12, 4);
 Rd |= fieldFromInstruction_4(Insn, 22, 1) << 4;
 size = fieldFromInstruction_4(Insn, 10, 2);

 switch (size) {
  default:
   return MCDisassembler_Fail;
  case 0:
   index = fieldFromInstruction_4(Insn, 5, 3);
   if (fieldFromInstruction_4(Insn, 4, 1))
    align = 2;
   break;
  case 1:
   index = fieldFromInstruction_4(Insn, 6, 2);
   if (fieldFromInstruction_4(Insn, 4, 1))
    align = 4;
   if (fieldFromInstruction_4(Insn, 5, 1))
    inc = 2;
   break;
  case 2:
   if (fieldFromInstruction_4(Insn, 5, 1))
    return MCDisassembler_Fail;

   index = fieldFromInstruction_4(Insn, 7, 1);
   if (fieldFromInstruction_4(Insn, 4, 1) != 0)
    align = 8;
   if (fieldFromInstruction_4(Insn, 6, 1))
    inc = 2;
   break;
 }

 if (!Check(&S, DecodeDPRRegisterClass(Inst, Rd, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodeDPRRegisterClass(Inst, Rd + inc, Address, Decoder)))
  return MCDisassembler_Fail;

 if (Rm != 0xF) {
  if (!Check(&S, DecodeGPRRegisterClass(Inst, Rn, Address, Decoder)))
   return MCDisassembler_Fail;
 }

 if (!Check(&S, DecodeGPRRegisterClass(Inst, Rn, Address, Decoder)))
  return MCDisassembler_Fail;

 MCOperand_CreateImm0(Inst, align);

 if (Rm != 0xF) {
  if (Rm != 0xD) {
   if (!Check(&S, DecodeGPRRegisterClass(Inst, Rm, Address, Decoder)))
    return MCDisassembler_Fail;
  } else
   MCOperand_CreateReg0(Inst, 0);
 }

 if (!Check(&S, DecodeDPRRegisterClass(Inst, Rd, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodeDPRRegisterClass(Inst, Rd + inc, Address, Decoder)))
  return MCDisassembler_Fail;

 MCOperand_CreateImm0(Inst, index);

 return S;
}

static DecodeStatus DecodeVST2LN(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;
 unsigned size, align = 0, index = 0, inc = 1;
 unsigned Rn = fieldFromInstruction_4(Insn, 16, 4);
 unsigned Rm = fieldFromInstruction_4(Insn, 0, 4);
 unsigned Rd = fieldFromInstruction_4(Insn, 12, 4);
 Rd |= fieldFromInstruction_4(Insn, 22, 1) << 4;
 size = fieldFromInstruction_4(Insn, 10, 2);

 switch (size) {
  default:
   return MCDisassembler_Fail;
  case 0:
   index = fieldFromInstruction_4(Insn, 5, 3);
   if (fieldFromInstruction_4(Insn, 4, 1))
    align = 2;
   break;
  case 1:
   index = fieldFromInstruction_4(Insn, 6, 2);
   if (fieldFromInstruction_4(Insn, 4, 1))
    align = 4;
   if (fieldFromInstruction_4(Insn, 5, 1))
    inc = 2;
   break;
  case 2:
   if (fieldFromInstruction_4(Insn, 5, 1))
    return MCDisassembler_Fail;

   index = fieldFromInstruction_4(Insn, 7, 1);
   if (fieldFromInstruction_4(Insn, 4, 1) != 0)
    align = 8;
   if (fieldFromInstruction_4(Insn, 6, 1))
    inc = 2;
   break;
 }

 if (Rm != 0xF) {
  if (!Check(&S, DecodeGPRRegisterClass(Inst, Rn, Address, Decoder)))
   return MCDisassembler_Fail;
 }

 if (!Check(&S, DecodeGPRRegisterClass(Inst, Rn, Address, Decoder)))
  return MCDisassembler_Fail;

 MCOperand_CreateImm0(Inst, align);

 if (Rm != 0xF) {
  if (Rm != 0xD) {
   if (!Check(&S, DecodeGPRRegisterClass(Inst, Rm, Address, Decoder)))
    return MCDisassembler_Fail;
  } else
   MCOperand_CreateReg0(Inst, 0);
 }

 if (!Check(&S, DecodeDPRRegisterClass(Inst, Rd, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodeDPRRegisterClass(Inst, Rd + inc, Address, Decoder)))
  return MCDisassembler_Fail;

 MCOperand_CreateImm0(Inst, index);

 return S;
}

static DecodeStatus DecodeVLD3LN(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;
 unsigned size, align = 0, index = 0, inc = 1;
 unsigned Rn = fieldFromInstruction_4(Insn, 16, 4);
 unsigned Rm = fieldFromInstruction_4(Insn, 0, 4);
 unsigned Rd = fieldFromInstruction_4(Insn, 12, 4);
 Rd |= fieldFromInstruction_4(Insn, 22, 1) << 4;
 size = fieldFromInstruction_4(Insn, 10, 2);

 switch (size) {
  default:
   return MCDisassembler_Fail;
  case 0:
   if (fieldFromInstruction_4(Insn, 4, 1))
    return MCDisassembler_Fail;
   index = fieldFromInstruction_4(Insn, 5, 3);
   break;
  case 1:
   if (fieldFromInstruction_4(Insn, 4, 1))
    return MCDisassembler_Fail;
   index = fieldFromInstruction_4(Insn, 6, 2);
   if (fieldFromInstruction_4(Insn, 5, 1))
    inc = 2;
   break;
  case 2:
   if (fieldFromInstruction_4(Insn, 4, 2))
    return MCDisassembler_Fail;
   index = fieldFromInstruction_4(Insn, 7, 1);
   if (fieldFromInstruction_4(Insn, 6, 1))
    inc = 2;
   break;
 }

 if (!Check(&S, DecodeDPRRegisterClass(Inst, Rd, Address, Decoder)))
  return MCDisassembler_Fail;
 if (!Check(&S, DecodeDPRRegisterClass(Inst, Rd + inc, Address, Decoder)))
  return MCDisassembler_Fail;
 if (!Check(&S, DecodeDPRRegisterClass(Inst, Rd + 2*inc, Address, Decoder)))
  return MCDisassembler_Fail;

 if (Rm != 0xF) {
  if (!Check(&S, DecodeGPRRegisterClass(Inst, Rn, Address, Decoder)))
   return MCDisassembler_Fail;
 }

 if (!Check(&S, DecodeGPRRegisterClass(Inst, Rn, Address, Decoder)))
  return MCDisassembler_Fail;

 MCOperand_CreateImm0(Inst, align);

 if (Rm != 0xF) {
  if (Rm != 0xD) {
   if (!Check(&S, DecodeGPRRegisterClass(Inst, Rm, Address, Decoder)))
    return MCDisassembler_Fail;
  } else
   MCOperand_CreateReg0(Inst, 0);
 }

 if (!Check(&S, DecodeDPRRegisterClass(Inst, Rd, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodeDPRRegisterClass(Inst, Rd + inc, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodeDPRRegisterClass(Inst, Rd + 2*inc, Address, Decoder)))
  return MCDisassembler_Fail;

 MCOperand_CreateImm0(Inst, index);

 return S;
}

static DecodeStatus DecodeVST3LN(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;
 unsigned size, align = 0, index = 0, inc = 1;
 unsigned Rn = fieldFromInstruction_4(Insn, 16, 4);
 unsigned Rm = fieldFromInstruction_4(Insn, 0, 4);
 unsigned Rd = fieldFromInstruction_4(Insn, 12, 4);
 Rd |= fieldFromInstruction_4(Insn, 22, 1) << 4;
 size = fieldFromInstruction_4(Insn, 10, 2);

 switch (size) {
  default:
   return MCDisassembler_Fail;
  case 0:
   if (fieldFromInstruction_4(Insn, 4, 1))
    return MCDisassembler_Fail;
   index = fieldFromInstruction_4(Insn, 5, 3);
   break;
  case 1:
   if (fieldFromInstruction_4(Insn, 4, 1))
    return MCDisassembler_Fail;
   index = fieldFromInstruction_4(Insn, 6, 2);
   if (fieldFromInstruction_4(Insn, 5, 1))
    inc = 2;
   break;
  case 2:
   if (fieldFromInstruction_4(Insn, 4, 2))
    return MCDisassembler_Fail;
   index = fieldFromInstruction_4(Insn, 7, 1);
   if (fieldFromInstruction_4(Insn, 6, 1))
    inc = 2;
   break;
 }

 if (Rm != 0xF) {
  if (!Check(&S, DecodeGPRRegisterClass(Inst, Rn, Address, Decoder)))
   return MCDisassembler_Fail;
 }

 if (!Check(&S, DecodeGPRRegisterClass(Inst, Rn, Address, Decoder)))
  return MCDisassembler_Fail;

 MCOperand_CreateImm0(Inst, align);

 if (Rm != 0xF) {
  if (Rm != 0xD) {
   if (!Check(&S, DecodeGPRRegisterClass(Inst, Rm, Address, Decoder)))
    return MCDisassembler_Fail;
  } else
   MCOperand_CreateReg0(Inst, 0);
 }

 if (!Check(&S, DecodeDPRRegisterClass(Inst, Rd, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodeDPRRegisterClass(Inst, Rd + inc, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodeDPRRegisterClass(Inst, Rd + 2*inc, Address, Decoder)))
  return MCDisassembler_Fail;

 MCOperand_CreateImm0(Inst, index);

 return S;
}

static DecodeStatus DecodeVLD4LN(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;
 unsigned size, align = 0, index = 0, inc = 1;
 unsigned Rn = fieldFromInstruction_4(Insn, 16, 4);
 unsigned Rm = fieldFromInstruction_4(Insn, 0, 4);
 unsigned Rd = fieldFromInstruction_4(Insn, 12, 4);
 Rd |= fieldFromInstruction_4(Insn, 22, 1) << 4;
 size = fieldFromInstruction_4(Insn, 10, 2);

 switch (size) {
  default:
   return MCDisassembler_Fail;
  case 0:
   if (fieldFromInstruction_4(Insn, 4, 1))
    align = 4;
   index = fieldFromInstruction_4(Insn, 5, 3);
   break;
  case 1:
   if (fieldFromInstruction_4(Insn, 4, 1))
    align = 8;
   index = fieldFromInstruction_4(Insn, 6, 2);
   if (fieldFromInstruction_4(Insn, 5, 1))
    inc = 2;
   break;
  case 2:
   switch (fieldFromInstruction_4(Insn, 4, 2)) {
    case 0:
     align = 0; break;
    case 3:
     return MCDisassembler_Fail;
    default:
     align = 4 << fieldFromInstruction_4(Insn, 4, 2); break;
   }

   index = fieldFromInstruction_4(Insn, 7, 1);
   if (fieldFromInstruction_4(Insn, 6, 1))
    inc = 2;
   break;
 }

 if (!Check(&S, DecodeDPRRegisterClass(Inst, Rd, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodeDPRRegisterClass(Inst, Rd + inc, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodeDPRRegisterClass(Inst, Rd + 2*inc, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodeDPRRegisterClass(Inst, Rd + 3*inc, Address, Decoder)))
  return MCDisassembler_Fail;

 if (Rm != 0xF) {
  if (!Check(&S, DecodeGPRRegisterClass(Inst, Rn, Address, Decoder)))
   return MCDisassembler_Fail;
 }

 if (!Check(&S, DecodeGPRRegisterClass(Inst, Rn, Address, Decoder)))
  return MCDisassembler_Fail;

 MCOperand_CreateImm0(Inst, align);

 if (Rm != 0xF) {
  if (Rm != 0xD) {
   if (!Check(&S, DecodeGPRRegisterClass(Inst, Rm, Address, Decoder)))
    return MCDisassembler_Fail;
  } else
   MCOperand_CreateReg0(Inst, 0);
 }

 if (!Check(&S, DecodeDPRRegisterClass(Inst, Rd, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodeDPRRegisterClass(Inst, Rd + inc, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodeDPRRegisterClass(Inst, Rd + 2*inc, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodeDPRRegisterClass(Inst, Rd + 3*inc, Address, Decoder)))
  return MCDisassembler_Fail;

 MCOperand_CreateImm0(Inst, index);

 return S;
}

static DecodeStatus DecodeVST4LN(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;
 unsigned size, align = 0, index = 0, inc = 1;
 unsigned Rn = fieldFromInstruction_4(Insn, 16, 4);
 unsigned Rm = fieldFromInstruction_4(Insn, 0, 4);
 unsigned Rd = fieldFromInstruction_4(Insn, 12, 4);
 Rd |= fieldFromInstruction_4(Insn, 22, 1) << 4;
 size = fieldFromInstruction_4(Insn, 10, 2);

 switch (size) {
  default:
   return MCDisassembler_Fail;
  case 0:
   if (fieldFromInstruction_4(Insn, 4, 1))
    align = 4;
   index = fieldFromInstruction_4(Insn, 5, 3);
   break;
  case 1:
   if (fieldFromInstruction_4(Insn, 4, 1))
    align = 8;
   index = fieldFromInstruction_4(Insn, 6, 2);
   if (fieldFromInstruction_4(Insn, 5, 1))
    inc = 2;
   break;
  case 2:
   switch (fieldFromInstruction_4(Insn, 4, 2)) {
    case 0:
     align = 0; break;
    case 3:
     return MCDisassembler_Fail;
    default:
     align = 4 << fieldFromInstruction_4(Insn, 4, 2); break;
   }

   index = fieldFromInstruction_4(Insn, 7, 1);
   if (fieldFromInstruction_4(Insn, 6, 1))
    inc = 2;
   break;
 }

 if (Rm != 0xF) {
  if (!Check(&S, DecodeGPRRegisterClass(Inst, Rn, Address, Decoder)))
   return MCDisassembler_Fail;
 }

 if (!Check(&S, DecodeGPRRegisterClass(Inst, Rn, Address, Decoder)))
  return MCDisassembler_Fail;

 MCOperand_CreateImm0(Inst, align);

 if (Rm != 0xF) {
  if (Rm != 0xD) {
   if (!Check(&S, DecodeGPRRegisterClass(Inst, Rm, Address, Decoder)))
    return MCDisassembler_Fail;
  } else
   MCOperand_CreateReg0(Inst, 0);
 }

 if (!Check(&S, DecodeDPRRegisterClass(Inst, Rd, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodeDPRRegisterClass(Inst, Rd + inc, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodeDPRRegisterClass(Inst, Rd + 2*inc, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodeDPRRegisterClass(Inst, Rd + 3*inc, Address, Decoder)))
  return MCDisassembler_Fail;

 MCOperand_CreateImm0(Inst, index);

 return S;
}

static DecodeStatus DecodeVMOVSRR(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;
 unsigned Rt = fieldFromInstruction_4(Insn, 12, 4);
 unsigned Rt2 = fieldFromInstruction_4(Insn, 16, 4);
 unsigned Rm = fieldFromInstruction_4(Insn, 5, 1);
 unsigned pred = fieldFromInstruction_4(Insn, 28, 4);
 Rm |= fieldFromInstruction_4(Insn, 0, 4) << 1;

 if (Rt == 0xF || Rt2 == 0xF || Rm == 0x1F)
  S = MCDisassembler_SoftFail;

 if (!Check(&S, DecodeSPRRegisterClass(Inst, Rm , Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodeSPRRegisterClass(Inst, Rm + 1, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodeGPRRegisterClass(Inst, Rt , Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodeGPRRegisterClass(Inst, Rt2 , Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodePredicateOperand(Inst, pred, Address, Decoder)))
  return MCDisassembler_Fail;

 return S;
}

static DecodeStatus DecodeVMOVRRS(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;
 unsigned Rt = fieldFromInstruction_4(Insn, 12, 4);
 unsigned Rt2 = fieldFromInstruction_4(Insn, 16, 4);
 unsigned Rm = fieldFromInstruction_4(Insn, 5, 1);
 unsigned pred = fieldFromInstruction_4(Insn, 28, 4);
 Rm |= fieldFromInstruction_4(Insn, 0, 4) << 1;

 if (Rt == 0xF || Rt2 == 0xF || Rm == 0x1F)
  S = MCDisassembler_SoftFail;

 if (!Check(&S, DecodeGPRRegisterClass(Inst, Rt , Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodeGPRRegisterClass(Inst, Rt2 , Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodeSPRRegisterClass(Inst, Rm , Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodeSPRRegisterClass(Inst, Rm + 1, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodePredicateOperand(Inst, pred, Address, Decoder)))
  return MCDisassembler_Fail;

 return S;
}

static DecodeStatus DecodeIT(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;
 unsigned pred = fieldFromInstruction_4(Insn, 4, 4);
 unsigned mask = fieldFromInstruction_4(Insn, 0, 4);

 if (pred == 0xF) {
  pred = 0xE;
  S = MCDisassembler_SoftFail;
 }

 if (mask == 0x0)
  return MCDisassembler_Fail;

 MCOperand_CreateImm0(Inst, pred);
 MCOperand_CreateImm0(Inst, mask);

 return S;
}

static DecodeStatus DecodeT2LDRDPreInstruction(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;
 unsigned Rt = fieldFromInstruction_4(Insn, 12, 4);
 unsigned Rt2 = fieldFromInstruction_4(Insn, 8, 4);
 unsigned Rn = fieldFromInstruction_4(Insn, 16, 4);
 unsigned addr = fieldFromInstruction_4(Insn, 0, 8);
 unsigned W = fieldFromInstruction_4(Insn, 21, 1);
 unsigned U = fieldFromInstruction_4(Insn, 23, 1);
 unsigned P = fieldFromInstruction_4(Insn, 24, 1);
 bool writeback = (W == 1) | (P == 0);

 addr |= (U << 8) | (Rn << 9);

 if (writeback && (Rn == Rt || Rn == Rt2))
  Check(&S, MCDisassembler_SoftFail);

 if (Rt == Rt2)
  Check(&S, MCDisassembler_SoftFail);


 if (!Check(&S, DecoderGPRRegisterClass(Inst, Rt, Address, Decoder)))
  return MCDisassembler_Fail;


 if (!Check(&S, DecoderGPRRegisterClass(Inst, Rt2, Address, Decoder)))
  return MCDisassembler_Fail;


 if (!Check(&S, DecoderGPRRegisterClass(Inst, Rn, Address, Decoder)))
  return MCDisassembler_Fail;


 if (!Check(&S, DecodeT2AddrModeImm8s4(Inst, addr, Address, Decoder)))
  return MCDisassembler_Fail;

 return S;
}

static DecodeStatus DecodeT2STRDPreInstruction(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;
 unsigned Rt = fieldFromInstruction_4(Insn, 12, 4);
 unsigned Rt2 = fieldFromInstruction_4(Insn, 8, 4);
 unsigned Rn = fieldFromInstruction_4(Insn, 16, 4);
 unsigned addr = fieldFromInstruction_4(Insn, 0, 8);
 unsigned W = fieldFromInstruction_4(Insn, 21, 1);
 unsigned U = fieldFromInstruction_4(Insn, 23, 1);
 unsigned P = fieldFromInstruction_4(Insn, 24, 1);
 bool writeback = (W == 1) | (P == 0);

 addr |= (U << 8) | (Rn << 9);

 if (writeback && (Rn == Rt || Rn == Rt2))
  Check(&S, MCDisassembler_SoftFail);


 if (!Check(&S, DecoderGPRRegisterClass(Inst, Rn, Address, Decoder)))
  return MCDisassembler_Fail;


 if (!Check(&S, DecoderGPRRegisterClass(Inst, Rt, Address, Decoder)))
  return MCDisassembler_Fail;


 if (!Check(&S, DecoderGPRRegisterClass(Inst, Rt2, Address, Decoder)))
  return MCDisassembler_Fail;


 if (!Check(&S, DecodeT2AddrModeImm8s4(Inst, addr, Address, Decoder)))
  return MCDisassembler_Fail;

 return S;
}

static DecodeStatus DecodeT2Adr(MCInst *Inst, uint32_t Insn,
  uint64_t Address, const void *Decoder)
{
 unsigned Val;
 unsigned sign1 = fieldFromInstruction_4(Insn, 21, 1);
 unsigned sign2 = fieldFromInstruction_4(Insn, 23, 1);

 if (sign1 != sign2) return MCDisassembler_Fail;

 Val = fieldFromInstruction_4(Insn, 0, 8);
 Val |= fieldFromInstruction_4(Insn, 12, 3) << 8;
 Val |= fieldFromInstruction_4(Insn, 26, 1) << 11;
 Val |= sign1 << 12;

 MCOperand_CreateImm0(Inst, SignExtend32(Val, 13));

 return MCDisassembler_Success;
}

static DecodeStatus DecodeT2ShifterImmOperand(MCInst *Inst, uint32_t Val,
  uint64_t Address, const void *Decoder)
{

 if (Val == 0x20)
  return MCDisassembler_Fail;

 MCOperand_CreateImm0(Inst, Val);

 return MCDisassembler_Success;
}

static DecodeStatus DecodeSwap(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S;
 unsigned Rt = fieldFromInstruction_4(Insn, 12, 4);
 unsigned Rt2 = fieldFromInstruction_4(Insn, 0, 4);
 unsigned Rn = fieldFromInstruction_4(Insn, 16, 4);
 unsigned pred = fieldFromInstruction_4(Insn, 28, 4);

 if (pred == 0xF)
  return DecodeCPSInstruction(Inst, Insn, Address, Decoder);

 S = MCDisassembler_Success;

 if (Rt == Rn || Rn == Rt2)
  S = MCDisassembler_SoftFail;

 if (!Check(&S, DecodeGPRnopcRegisterClass(Inst, Rt, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodeGPRnopcRegisterClass(Inst, Rt2, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodeGPRnopcRegisterClass(Inst, Rn, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodePredicateOperand(Inst, pred, Address, Decoder)))
  return MCDisassembler_Fail;

 return S;
}

static DecodeStatus DecodeVCVTD(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;
 bool hasFullFP16 = ARM_getFeatureBits(Inst->csh->mode, ARM_FeatureFullFP16);
 unsigned Vm, imm, cmode, op;
 unsigned Vd = (fieldFromInstruction_4(Insn, 12, 4) << 0);

 Vd |= (fieldFromInstruction_4(Insn, 22, 1) << 4);
 Vm = (fieldFromInstruction_4(Insn, 0, 4) << 0);
 Vm |= (fieldFromInstruction_4(Insn, 5, 1) << 4);
 imm = fieldFromInstruction_4(Insn, 16, 6);
 cmode = fieldFromInstruction_4(Insn, 8, 4);
 op = fieldFromInstruction_4(Insn, 5, 1);


 if (!(imm & 0x38)) {
  if (cmode == 0xF) {
   if (op == 1) return MCDisassembler_Fail;
   MCInst_setOpcode(Inst, ARM_VMOVv2f32);
  }

  if (hasFullFP16) {
   if (cmode == 0xE) {
    if (op == 1) {
     MCInst_setOpcode(Inst, ARM_VMOVv1i64);
    } else {
     MCInst_setOpcode(Inst, ARM_VMOVv8i8);
    }
   }

   if (cmode == 0xD) {
    if (op == 1) {
     MCInst_setOpcode(Inst, ARM_VMVNv2i32);
    } else {
     MCInst_setOpcode(Inst, ARM_VMOVv2i32);
    }
   }

   if (cmode == 0xC) {
    if (op == 1) {
     MCInst_setOpcode(Inst, ARM_VMVNv2i32);
    } else {
     MCInst_setOpcode(Inst, ARM_VMOVv2i32);
    }
   }
  }

  return DecodeNEONModImmInstruction(Inst, Insn, Address, Decoder);
 }

 if (!(imm & 0x20)) return MCDisassembler_Fail;

 if (!Check(&S, DecodeDPRRegisterClass(Inst, Vd, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodeDPRRegisterClass(Inst, Vm, Address, Decoder)))
  return MCDisassembler_Fail;

 MCOperand_CreateImm0(Inst, 64 - imm);

 return S;
}

static DecodeStatus DecodeVCVTQ(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;
 bool hasFullFP16 = ARM_getFeatureBits(Inst->csh->mode, ARM_FeatureFullFP16);
 unsigned Vm, imm, cmode, op;
 unsigned Vd = (fieldFromInstruction_4(Insn, 12, 4) << 0);

 Vd |= (fieldFromInstruction_4(Insn, 22, 1) << 4);
 Vm = (fieldFromInstruction_4(Insn, 0, 4) << 0);
 Vm |= (fieldFromInstruction_4(Insn, 5, 1) << 4);
 imm = fieldFromInstruction_4(Insn, 16, 6);
 cmode = fieldFromInstruction_4(Insn, 8, 4);
 op = fieldFromInstruction_4(Insn, 5, 1);


 if (!(imm & 0x38) && cmode == 0xF) {
  if (op == 1) return MCDisassembler_Fail;
  MCInst_setOpcode(Inst, ARM_VMOVv4f32);
  return DecodeNEONModImmInstruction(Inst, Insn, Address, Decoder);
 }


 if (!(imm & 0x38)) {
  if (cmode == 0xF) {
   if (op == 1) return MCDisassembler_Fail;
   MCInst_setOpcode(Inst, ARM_VMOVv4f32);
  }

  if (hasFullFP16) {
   if (cmode == 0xE) {
    if (op == 1) {
     MCInst_setOpcode(Inst, ARM_VMOVv2i64);
    } else {
     MCInst_setOpcode(Inst, ARM_VMOVv16i8);
    }
   }

   if (cmode == 0xD) {
    if (op == 1) {
     MCInst_setOpcode(Inst, ARM_VMVNv4i32);
    } else {
     MCInst_setOpcode(Inst, ARM_VMOVv4i32);
    }
   }

   if (cmode == 0xC) {
    if (op == 1) {
     MCInst_setOpcode(Inst, ARM_VMVNv4i32);
    } else {
     MCInst_setOpcode(Inst, ARM_VMOVv4i32);
    }
   }
  }

  return DecodeNEONModImmInstruction(Inst, Insn, Address, Decoder);
 }

 if (!(imm & 0x20)) return MCDisassembler_Fail;

 if (!Check(&S, DecodeQPRRegisterClass(Inst, Vd, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodeQPRRegisterClass(Inst, Vm, Address, Decoder)))
  return MCDisassembler_Fail;

 MCOperand_CreateImm0(Inst, 64 - imm);

 return S;
}

static DecodeStatus DecodeNEONComplexLane64Instruction(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;
 unsigned Vd = (fieldFromInstruction_4(Insn, 12, 4) << 0);
 unsigned Vn = (fieldFromInstruction_4(Insn, 16, 4) << 0);
 unsigned Vm = (fieldFromInstruction_4(Insn, 0, 4) << 0);
 unsigned q = (fieldFromInstruction_4(Insn, 6, 1) << 0);
 unsigned rotate = (fieldFromInstruction_4(Insn, 20, 2) << 0);

 Vd |= (fieldFromInstruction_4(Insn, 22, 1) << 4);
 Vn |= (fieldFromInstruction_4(Insn, 7, 1) << 4);
 Vm |= (fieldFromInstruction_4(Insn, 5, 1) << 4);

 if (q) {
  if (!Check(&S, DecodeQPRRegisterClass(Inst, Vd, Address, Decoder)))
   return MCDisassembler_Fail;

  if (!Check(&S, DecodeQPRRegisterClass(Inst, Vd, Address, Decoder)))
   return MCDisassembler_Fail;

  if (!Check(&S, DecodeQPRRegisterClass(Inst, Vn, Address, Decoder)))
   return MCDisassembler_Fail;
 } else {
  if (!Check(&S, DecodeDPRRegisterClass(Inst, Vd, Address, Decoder)))
   return MCDisassembler_Fail;

  if (!Check(&S, DecodeDPRRegisterClass(Inst, Vd, Address, Decoder)))
   return MCDisassembler_Fail;

  if (!Check(&S, DecodeDPRRegisterClass(Inst, Vn, Address, Decoder)))
   return MCDisassembler_Fail;
 }

 if (!Check(&S, DecodeDPRRegisterClass(Inst, Vm, Address, Decoder)))
  return MCDisassembler_Fail;



 MCOperand_CreateImm0(Inst, 0);
 MCOperand_CreateImm0(Inst, rotate);

 return S;
}

static DecodeStatus DecodeLDR(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus S = MCDisassembler_Success;
 unsigned Cond;
 unsigned Rn = fieldFromInstruction_4(Val, 16, 4);
 unsigned Rt = fieldFromInstruction_4(Val, 12, 4);
 unsigned Rm = fieldFromInstruction_4(Val, 0, 4);

 Rm |= (fieldFromInstruction_4(Val, 23, 1) << 4);
 Cond = fieldFromInstruction_4(Val, 28, 4);

 if (fieldFromInstruction_4(Val, 8, 4) != 0 || Rn == Rt)
  S = MCDisassembler_SoftFail;

 if (!Check(&S, DecodeGPRnopcRegisterClass(Inst, Rt, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodeGPRnopcRegisterClass(Inst, Rn, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodeAddrMode7Operand(Inst, Rn, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodePostIdxReg(Inst, Rm, Address, Decoder)))
  return MCDisassembler_Fail;

 if (!Check(&S, DecodePredicateOperand(Inst, Cond, Address, Decoder)))
  return MCDisassembler_Fail;

 return S;
}

static DecodeStatus DecoderForMRRC2AndMCRR2(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus result = MCDisassembler_Success;
 unsigned CRm = fieldFromInstruction_4(Val, 0, 4);
 unsigned opc1 = fieldFromInstruction_4(Val, 4, 4);
 unsigned cop = fieldFromInstruction_4(Val, 8, 4);
 unsigned Rt = fieldFromInstruction_4(Val, 12, 4);
 unsigned Rt2 = fieldFromInstruction_4(Val, 16, 4);

 if ((cop & ~0x1) == 0xa)
  return MCDisassembler_Fail;

 if (Rt == Rt2)
  result = MCDisassembler_SoftFail;
# 5713 "project/radare2/shlr/capstone/arch/ARM/ARMDisassembler.c"
 if (MCInst_getOpcode(Inst) == ARM_MRRC2) {
  if (!Check(&result, DecodeGPRnopcRegisterClass(Inst, Rt, Address, Decoder)))
   return MCDisassembler_Fail;

  if (!Check(&result, DecodeGPRnopcRegisterClass(Inst, Rt2, Address, Decoder)))
   return MCDisassembler_Fail;
 }

 MCOperand_CreateImm0(Inst, cop);
 MCOperand_CreateImm0(Inst, opc1);

 if (MCInst_getOpcode(Inst) == ARM_MCRR2) {
  if (!Check(&result, DecodeGPRnopcRegisterClass(Inst, Rt, Address, Decoder)))
   return MCDisassembler_Fail;

  if (!Check(&result, DecodeGPRnopcRegisterClass(Inst, Rt2, Address, Decoder)))
   return MCDisassembler_Fail;
 }

 MCOperand_CreateImm0(Inst, CRm);

 return result;
}

static DecodeStatus DecodeForVMRSandVMSR(MCInst *Inst, unsigned Val,
  uint64_t Address, const void *Decoder)
{
 DecodeStatus result = MCDisassembler_Success;
 bool HasV8Ops = ARM_getFeatureBits(Inst->csh->mode, ARM_HasV8Ops);
 unsigned Rt = fieldFromInstruction_4(Val, 12, 4);

 if ((Inst->csh->mode & CS_MODE_THUMB) && !HasV8Ops) {
  if (Rt == 13 || Rt == 15)
   result = MCDisassembler_SoftFail;

  Check(&result, DecodeGPRRegisterClass(Inst, Rt, Address, Decoder));
 } else
  Check(&result, DecodeGPRnopcRegisterClass(Inst, Rt, Address, Decoder));

 if (Inst->csh->mode & CS_MODE_THUMB) {
  MCOperand_CreateImm0(Inst, ARMCC_AL);
  MCOperand_CreateReg0(Inst, 0);
 } else {
  unsigned pred = fieldFromInstruction_4(Val, 28, 4);
  if (!Check(&result, DecodePredicateOperand(Inst, pred, Address, Decoder)))
   return MCDisassembler_Fail;
 }

 return result;
}

#endif
