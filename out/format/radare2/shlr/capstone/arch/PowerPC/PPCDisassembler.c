# 1 "project/radare2/shlr/capstone/arch/PowerPC/PPCDisassembler.c"
# 13 "project/radare2/shlr/capstone/arch/PowerPC/PPCDisassembler.c"
#ifdef CAPSTONE_HAS_POWERPC

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../../cs_priv.h"
#include "../../utils.h"

#include "PPCDisassembler.h"

#include "../../MCInst.h"
#include "../../MCInstrDesc.h"
#include "../../MCFixedLenDisassembler.h"
#include "../../MCRegisterInfo.h"
#include "../../MCDisassembler.h"
#include "../../MathExtras.h"

#define GET_REGINFO_ENUM 
#include "PPCGenRegisterInfo.inc"





static const unsigned CRRegs[] = {
 PPC_CR0, PPC_CR1, PPC_CR2, PPC_CR3,
 PPC_CR4, PPC_CR5, PPC_CR6, PPC_CR7
};

static const unsigned CRBITRegs[] = {
 PPC_CR0LT, PPC_CR0GT, PPC_CR0EQ, PPC_CR0UN,
 PPC_CR1LT, PPC_CR1GT, PPC_CR1EQ, PPC_CR1UN,
 PPC_CR2LT, PPC_CR2GT, PPC_CR2EQ, PPC_CR2UN,
 PPC_CR3LT, PPC_CR3GT, PPC_CR3EQ, PPC_CR3UN,
 PPC_CR4LT, PPC_CR4GT, PPC_CR4EQ, PPC_CR4UN,
 PPC_CR5LT, PPC_CR5GT, PPC_CR5EQ, PPC_CR5UN,
 PPC_CR6LT, PPC_CR6GT, PPC_CR6EQ, PPC_CR6UN,
 PPC_CR7LT, PPC_CR7GT, PPC_CR7EQ, PPC_CR7UN
};

static const unsigned FRegs[] = {
 PPC_F0, PPC_F1, PPC_F2, PPC_F3,
 PPC_F4, PPC_F5, PPC_F6, PPC_F7,
 PPC_F8, PPC_F9, PPC_F10, PPC_F11,
 PPC_F12, PPC_F13, PPC_F14, PPC_F15,
 PPC_F16, PPC_F17, PPC_F18, PPC_F19,
 PPC_F20, PPC_F21, PPC_F22, PPC_F23,
 PPC_F24, PPC_F25, PPC_F26, PPC_F27,
 PPC_F28, PPC_F29, PPC_F30, PPC_F31
};

static const unsigned VFRegs[] = {
 PPC_VF0, PPC_VF1, PPC_VF2, PPC_VF3,
 PPC_VF4, PPC_VF5, PPC_VF6, PPC_VF7,
 PPC_VF8, PPC_VF9, PPC_VF10, PPC_VF11,
 PPC_VF12, PPC_VF13, PPC_VF14, PPC_VF15,
 PPC_VF16, PPC_VF17, PPC_VF18, PPC_VF19,
 PPC_VF20, PPC_VF21, PPC_VF22, PPC_VF23,
 PPC_VF24, PPC_VF25, PPC_VF26, PPC_VF27,
 PPC_VF28, PPC_VF29, PPC_VF30, PPC_VF31
};

static const unsigned VRegs[] = {
 PPC_V0, PPC_V1, PPC_V2, PPC_V3,
 PPC_V4, PPC_V5, PPC_V6, PPC_V7,
 PPC_V8, PPC_V9, PPC_V10, PPC_V11,
 PPC_V12, PPC_V13, PPC_V14, PPC_V15,
 PPC_V16, PPC_V17, PPC_V18, PPC_V19,
 PPC_V20, PPC_V21, PPC_V22, PPC_V23,
 PPC_V24, PPC_V25, PPC_V26, PPC_V27,
 PPC_V28, PPC_V29, PPC_V30, PPC_V31
};

static const unsigned VSRegs[] = {
 PPC_VSL0, PPC_VSL1, PPC_VSL2, PPC_VSL3,
 PPC_VSL4, PPC_VSL5, PPC_VSL6, PPC_VSL7,
 PPC_VSL8, PPC_VSL9, PPC_VSL10, PPC_VSL11,
 PPC_VSL12, PPC_VSL13, PPC_VSL14, PPC_VSL15,
 PPC_VSL16, PPC_VSL17, PPC_VSL18, PPC_VSL19,
 PPC_VSL20, PPC_VSL21, PPC_VSL22, PPC_VSL23,
 PPC_VSL24, PPC_VSL25, PPC_VSL26, PPC_VSL27,
 PPC_VSL28, PPC_VSL29, PPC_VSL30, PPC_VSL31,

 PPC_V0, PPC_V1, PPC_V2, PPC_V3,
 PPC_V4, PPC_V5, PPC_V6, PPC_V7,
 PPC_V8, PPC_V9, PPC_V10, PPC_V11,
 PPC_V12, PPC_V13, PPC_V14, PPC_V15,
 PPC_V16, PPC_V17, PPC_V18, PPC_V19,
 PPC_V20, PPC_V21, PPC_V22, PPC_V23,
 PPC_V24, PPC_V25, PPC_V26, PPC_V27,
 PPC_V28, PPC_V29, PPC_V30, PPC_V31
};

static const unsigned VSFRegs[] = {
 PPC_F0, PPC_F1, PPC_F2, PPC_F3,
 PPC_F4, PPC_F5, PPC_F6, PPC_F7,
 PPC_F8, PPC_F9, PPC_F10, PPC_F11,
 PPC_F12, PPC_F13, PPC_F14, PPC_F15,
 PPC_F16, PPC_F17, PPC_F18, PPC_F19,
 PPC_F20, PPC_F21, PPC_F22, PPC_F23,
 PPC_F24, PPC_F25, PPC_F26, PPC_F27,
 PPC_F28, PPC_F29, PPC_F30, PPC_F31,

 PPC_VF0, PPC_VF1, PPC_VF2, PPC_VF3,
 PPC_VF4, PPC_VF5, PPC_VF6, PPC_VF7,
 PPC_VF8, PPC_VF9, PPC_VF10, PPC_VF11,
 PPC_VF12, PPC_VF13, PPC_VF14, PPC_VF15,
 PPC_VF16, PPC_VF17, PPC_VF18, PPC_VF19,
 PPC_VF20, PPC_VF21, PPC_VF22, PPC_VF23,
 PPC_VF24, PPC_VF25, PPC_VF26, PPC_VF27,
 PPC_VF28, PPC_VF29, PPC_VF30, PPC_VF31
};

static const unsigned VSSRegs[] = {
 PPC_F0, PPC_F1, PPC_F2, PPC_F3,
 PPC_F4, PPC_F5, PPC_F6, PPC_F7,
 PPC_F8, PPC_F9, PPC_F10, PPC_F11,
 PPC_F12, PPC_F13, PPC_F14, PPC_F15,
 PPC_F16, PPC_F17, PPC_F18, PPC_F19,
 PPC_F20, PPC_F21, PPC_F22, PPC_F23,
 PPC_F24, PPC_F25, PPC_F26, PPC_F27,
 PPC_F28, PPC_F29, PPC_F30, PPC_F31,

 PPC_VF0, PPC_VF1, PPC_VF2, PPC_VF3,
 PPC_VF4, PPC_VF5, PPC_VF6, PPC_VF7,
 PPC_VF8, PPC_VF9, PPC_VF10, PPC_VF11,
 PPC_VF12, PPC_VF13, PPC_VF14, PPC_VF15,
 PPC_VF16, PPC_VF17, PPC_VF18, PPC_VF19,
 PPC_VF20, PPC_VF21, PPC_VF22, PPC_VF23,
 PPC_VF24, PPC_VF25, PPC_VF26, PPC_VF27,
 PPC_VF28, PPC_VF29, PPC_VF30, PPC_VF31
};

static const unsigned GPRegs[] = {
 PPC_R0, PPC_R1, PPC_R2, PPC_R3,
 PPC_R4, PPC_R5, PPC_R6, PPC_R7,
 PPC_R8, PPC_R9, PPC_R10, PPC_R11,
 PPC_R12, PPC_R13, PPC_R14, PPC_R15,
 PPC_R16, PPC_R17, PPC_R18, PPC_R19,
 PPC_R20, PPC_R21, PPC_R22, PPC_R23,
 PPC_R24, PPC_R25, PPC_R26, PPC_R27,
 PPC_R28, PPC_R29, PPC_R30, PPC_R31
};

static const unsigned GP0Regs[] = {
 PPC_ZERO, PPC_R1, PPC_R2, PPC_R3,
 PPC_R4, PPC_R5, PPC_R6, PPC_R7,
 PPC_R8, PPC_R9, PPC_R10, PPC_R11,
 PPC_R12, PPC_R13, PPC_R14, PPC_R15,
 PPC_R16, PPC_R17, PPC_R18, PPC_R19,
 PPC_R20, PPC_R21, PPC_R22, PPC_R23,
 PPC_R24, PPC_R25, PPC_R26, PPC_R27,
 PPC_R28, PPC_R29, PPC_R30, PPC_R31
};

static const unsigned G8Regs[] = {
 PPC_X0, PPC_X1, PPC_X2, PPC_X3,
 PPC_X4, PPC_X5, PPC_X6, PPC_X7,
 PPC_X8, PPC_X9, PPC_X10, PPC_X11,
 PPC_X12, PPC_X13, PPC_X14, PPC_X15,
 PPC_X16, PPC_X17, PPC_X18, PPC_X19,
 PPC_X20, PPC_X21, PPC_X22, PPC_X23,
 PPC_X24, PPC_X25, PPC_X26, PPC_X27,
 PPC_X28, PPC_X29, PPC_X30, PPC_X31
};

static const unsigned G80Regs[] = {
 PPC_ZERO8, PPC_X1, PPC_X2, PPC_X3,
 PPC_X4, PPC_X5, PPC_X6, PPC_X7,
 PPC_X8, PPC_X9, PPC_X10, PPC_X11,
 PPC_X12, PPC_X13, PPC_X14, PPC_X15,
 PPC_X16, PPC_X17, PPC_X18, PPC_X19,
 PPC_X20, PPC_X21, PPC_X22, PPC_X23,
 PPC_X24, PPC_X25, PPC_X26, PPC_X27,
 PPC_X28, PPC_X29, PPC_X30, PPC_X31
};

static const unsigned QFRegs[] = {
 PPC_QF0, PPC_QF1, PPC_QF2, PPC_QF3,
 PPC_QF4, PPC_QF5, PPC_QF6, PPC_QF7,
 PPC_QF8, PPC_QF9, PPC_QF10, PPC_QF11,
 PPC_QF12, PPC_QF13, PPC_QF14, PPC_QF15,
 PPC_QF16, PPC_QF17, PPC_QF18, PPC_QF19,
 PPC_QF20, PPC_QF21, PPC_QF22, PPC_QF23,
 PPC_QF24, PPC_QF25, PPC_QF26, PPC_QF27,
 PPC_QF28, PPC_QF29, PPC_QF30, PPC_QF31
};

static const unsigned SPERegs[] = {
 PPC_S0, PPC_S1, PPC_S2, PPC_S3,
 PPC_S4, PPC_S5, PPC_S6, PPC_S7,
 PPC_S8, PPC_S9, PPC_S10, PPC_S11,
 PPC_S12, PPC_S13, PPC_S14, PPC_S15,
 PPC_S16, PPC_S17, PPC_S18, PPC_S19,
 PPC_S20, PPC_S21, PPC_S22, PPC_S23,
 PPC_S24, PPC_S25, PPC_S26, PPC_S27,
 PPC_S28, PPC_S29, PPC_S30, PPC_S31
};

#if 0
static uint64_t getFeatureBits(int feature)
{

 return (uint64_t)-1;
}
#endif

static DecodeStatus decodeRegisterClass(MCInst *Inst, uint64_t RegNo,
  const unsigned *Regs, size_t RegsLen)
{
 if (RegNo >= RegsLen / sizeof(unsigned)) {
  return MCDisassembler_Fail;
 }
 MCOperand_CreateReg0(Inst, Regs[RegNo]);
 return MCDisassembler_Success;
}

static DecodeStatus DecodeCRRCRegisterClass(MCInst *Inst, uint64_t RegNo,
  uint64_t Address, const void *Decoder)
{
 return decodeRegisterClass(Inst, RegNo, CRRegs, sizeof(CRRegs));
}

static DecodeStatus DecodeCRRC0RegisterClass(MCInst *Inst, uint64_t RegNo,
  uint64_t Address, const void *Decoder)
{
 return decodeRegisterClass(Inst, RegNo, CRRegs, sizeof(CRRegs));
}

static DecodeStatus DecodeCRBITRCRegisterClass(MCInst *Inst, uint64_t RegNo,
  uint64_t Address, const void *Decoder)
{
 return decodeRegisterClass(Inst, RegNo, CRBITRegs, sizeof(CRBITRegs));
}

static DecodeStatus DecodeF4RCRegisterClass(MCInst *Inst, uint64_t RegNo,
  uint64_t Address, const void *Decoder)
{
 return decodeRegisterClass(Inst, RegNo, FRegs, sizeof(FRegs));
}

static DecodeStatus DecodeF8RCRegisterClass(MCInst *Inst, uint64_t RegNo,
  uint64_t Address, const void *Decoder)
{
 return decodeRegisterClass(Inst, RegNo, FRegs, sizeof(FRegs));
}

static DecodeStatus DecodeVFRCRegisterClass(MCInst *Inst, uint64_t RegNo,
  uint64_t Address, const void *Decoder)
{
 return decodeRegisterClass(Inst, RegNo, VFRegs, sizeof(VFRegs));
}

static DecodeStatus DecodeVRRCRegisterClass(MCInst *Inst, uint64_t RegNo,
  uint64_t Address, const void *Decoder)
{
 return decodeRegisterClass(Inst, RegNo, VRegs, sizeof(VRegs));
}

static DecodeStatus DecodeVSRCRegisterClass(MCInst *Inst, uint64_t RegNo,
  uint64_t Address, const void *Decoder)
{
 return decodeRegisterClass(Inst, RegNo, VSRegs, sizeof(VSRegs));
}

static DecodeStatus DecodeVSFRCRegisterClass(MCInst *Inst, uint64_t RegNo,
  uint64_t Address, const void *Decoder)
{
 return decodeRegisterClass(Inst, RegNo, VSFRegs, sizeof(VSFRegs));
}

static DecodeStatus DecodeVSSRCRegisterClass(MCInst *Inst, uint64_t RegNo,
  uint64_t Address, const void *Decoder)
{
 return decodeRegisterClass(Inst, RegNo, VSSRegs, sizeof(VSSRegs));
}

static DecodeStatus DecodeGPRCRegisterClass(MCInst *Inst, uint64_t RegNo,
  uint64_t Address, const void *Decoder)
{
 return decodeRegisterClass(Inst, RegNo, GPRegs, sizeof(GPRegs));
}

static DecodeStatus DecodeGPRC_NOR0RegisterClass(MCInst *Inst, uint64_t RegNo,
  uint64_t Address, const void *Decoder)
{
 return decodeRegisterClass(Inst, RegNo, GP0Regs, sizeof(GP0Regs));
}

static DecodeStatus DecodeG8RCRegisterClass(MCInst *Inst, uint64_t RegNo,
  uint64_t Address, const void *Decoder)
{
 return decodeRegisterClass(Inst, RegNo, G8Regs, sizeof(G8Regs));
}

static DecodeStatus DecodeG8RC_NOX0RegisterClass(MCInst *Inst, uint64_t RegNo,
  uint64_t Address, const void *Decoder)
{
 return decodeRegisterClass(Inst, RegNo, G80Regs, sizeof(G80Regs));
}

#define DecodePointerLikeRegClass0 DecodeGPRCRegisterClass
#define DecodePointerLikeRegClass1 DecodeGPRC_NOR0RegisterClass

static DecodeStatus DecodeQFRCRegisterClass(MCInst *Inst, uint64_t RegNo,
  uint64_t Address, const void *Decoder)
{
 return decodeRegisterClass(Inst, RegNo, QFRegs, sizeof(QFRegs));
}

static DecodeStatus DecodeSPE4RCRegisterClass(MCInst *Inst, uint64_t RegNo,
        uint64_t Address, const void *Decoder)
{
    return decodeRegisterClass(Inst, RegNo, GPRegs, sizeof(GPRegs));
}

static DecodeStatus DecodeSPERCRegisterClass(MCInst *Inst, uint64_t RegNo,
        uint64_t Address, const void *Decoder)
{
    return decodeRegisterClass(Inst, RegNo, SPERegs, sizeof(SPERegs));
}

#define DecodeQSRCRegisterClass DecodeQFRCRegisterClass
#define DecodeQBRCRegisterClass DecodeQFRCRegisterClass

static DecodeStatus decodeUImmOperand(MCInst *Inst, uint64_t Imm,
  int64_t Address, const void *Decoder, unsigned N)
{

 MCOperand_CreateImm0(Inst, Imm);

 return MCDisassembler_Success;
}

static DecodeStatus decodeSImmOperand(MCInst *Inst, uint64_t Imm,
  int64_t Address, const void *Decoder, unsigned N)
{

 MCOperand_CreateImm0(Inst, SignExtend64(Imm, N));

 return MCDisassembler_Success;
}


#define GET_INSTRINFO_ENUM 
#include "PPCGenInstrInfo.inc"

static DecodeStatus decodeMemRIOperands(MCInst *Inst, uint64_t Imm,
  int64_t Address, const void *Decoder)
{



 uint64_t Base = Imm >> 16;
 uint64_t Disp = Imm & 0xFFFF;


 if (Base >= 32)
  return MCDisassembler_Fail;

 switch (MCInst_getOpcode(Inst)) {
  default: break;
  case PPC_LBZU:
  case PPC_LHAU:
  case PPC_LHZU:
  case PPC_LWZU:
  case PPC_LFSU:
  case PPC_LFDU:

     MCOperand_CreateReg0(Inst, GP0Regs[Base]);
     break;
  case PPC_STBU:
  case PPC_STHU:
  case PPC_STWU:
  case PPC_STFSU:
  case PPC_STFDU:
     MCInst_insert0(Inst, 0, MCOperand_CreateReg1(Inst, GP0Regs[Base]));
     break;
 }

 MCOperand_CreateImm0(Inst, SignExtend64(Disp, 16));
 MCOperand_CreateReg0(Inst, GP0Regs[Base]);

 return MCDisassembler_Success;
}

static DecodeStatus decodeMemRIXOperands(MCInst *Inst, uint64_t Imm,
  int64_t Address, const void *Decoder)
{



 uint64_t Base = Imm >> 14;
 uint64_t Disp = Imm & 0x3FFF;


 if (Base >= 32)
  return MCDisassembler_Fail;

 if (MCInst_getOpcode(Inst) == PPC_LDU)

  MCOperand_CreateReg0(Inst, GP0Regs[Base]);
 else if (MCInst_getOpcode(Inst) == PPC_STDU)
  MCInst_insert0(Inst, 0, MCOperand_CreateReg1(Inst, GP0Regs[Base]));

 MCOperand_CreateImm0(Inst, SignExtend64(Disp << 2, 16));
 MCOperand_CreateReg0(Inst, GP0Regs[Base]);

 return MCDisassembler_Success;
}

static DecodeStatus decodeMemRIX16Operands(MCInst *Inst, uint64_t Imm,
  int64_t Address, const void *Decoder)
{



 uint64_t Base = Imm >> 12;
 uint64_t Disp = Imm & 0xFFF;


 if (Base >= 32)
  return MCDisassembler_Fail;

 MCOperand_CreateImm0(Inst, SignExtend64(Disp << 4, 16));
 MCOperand_CreateReg0(Inst, GP0Regs[Base]);

 return MCDisassembler_Success;
}

static DecodeStatus decodeSPE8Operands(MCInst *Inst, uint64_t Imm,
  int64_t Address, const void *Decoder)
{



 uint64_t Base = Imm >> 5;
 uint64_t Disp = Imm & 0x1F;


 if (Base >= 32)
  return MCDisassembler_Fail;

 MCOperand_CreateImm0(Inst, Disp << 3);
 MCOperand_CreateReg0(Inst, GP0Regs[Base]);

 return MCDisassembler_Success;
}

static DecodeStatus decodeSPE4Operands(MCInst *Inst, uint64_t Imm,
  int64_t Address, const void *Decoder)
{



 uint64_t Base = Imm >> 5;
 uint64_t Disp = Imm & 0x1F;


 if (Base >= 32)
  return MCDisassembler_Fail;

 MCOperand_CreateImm0(Inst, Disp << 2);
 MCOperand_CreateReg0(Inst, GP0Regs[Base]);

 return MCDisassembler_Success;
}

static DecodeStatus decodeSPE2Operands(MCInst *Inst, uint64_t Imm,
  int64_t Address, const void *Decoder)
{



 uint64_t Base = Imm >> 5;
 uint64_t Disp = Imm & 0x1F;


 if (Base >= 32)
  return MCDisassembler_Fail;

 MCOperand_CreateImm0(Inst, Disp << 1);
 MCOperand_CreateReg0(Inst, GP0Regs[Base]);

 return MCDisassembler_Success;
}

static DecodeStatus decodeCRBitMOperand(MCInst *Inst, uint64_t Imm,
  int64_t Address, const void *Decoder)
{


 unsigned Zeros = CountTrailingZeros_64(Imm);

 if (Zeros >= 8)
  return MCDisassembler_Fail;

 MCOperand_CreateReg0(Inst, CRRegs[7 - Zeros]);

 return MCDisassembler_Success;
}

#include "PPCGenDisassemblerTables.inc"

static DecodeStatus getInstruction(MCInst *MI,
  const uint8_t *code, size_t code_len,
  uint16_t *Size,
  uint64_t Address, MCRegisterInfo *MRI)
{
 uint32_t insn;
 DecodeStatus result;


 if (code_len < 4) {

  *Size = 0;
  return MCDisassembler_Fail;
 }


 if (MODE_IS_BIG_ENDIAN(MI->csh->mode))
  insn = ((uint32_t) code[0] << 24) | (code[1] << 16) |
   (code[2] << 8) | (code[3] << 0);
 else
  insn = ((uint32_t) code[3] << 24) | (code[2] << 16) |
   (code[1] << 8) | (code[0] << 0);

 if (MI->flat_insn->detail) {
  memset(MI->flat_insn->detail, 0, offsetof(cs_detail, ppc) + sizeof(cs_ppc));
 }

 if (MI->csh->mode & CS_MODE_QPX) {
  result = decodeInstruction_4(DecoderTableQPX32, MI, insn, Address);
  if (result != MCDisassembler_Fail) {
   *Size = 4;

   return result;
  }


  MCInst_clear(MI);
 } else if (MI->csh->mode & CS_MODE_SPE) {
  result = decodeInstruction_4(DecoderTableSPE32, MI, insn, Address);
  if (result != MCDisassembler_Fail) {
   *Size = 4;

   return result;
  }


  MCInst_clear(MI);
 }

 result = decodeInstruction_4(DecoderTable32, MI, insn, Address);
 if (result != MCDisassembler_Fail) {
  *Size = 4;

  return result;
 }


 MCInst_clear(MI);
 *Size = 0;

 return MCDisassembler_Fail;
}

bool PPC_getInstruction(csh ud, const uint8_t *code, size_t code_len,
  MCInst *instr, uint16_t *size, uint64_t address, void *info)
{
 DecodeStatus status = getInstruction(instr,
   code, code_len,
   size,
   address, (MCRegisterInfo *)info);

 return status == MCDisassembler_Success;
}

#define GET_REGINFO_MC_DESC 
#include "PPCGenRegisterInfo.inc"
void PPC_init(MCRegisterInfo *MRI)
{
# 605 "project/radare2/shlr/capstone/arch/PowerPC/PPCDisassembler.c"
 MCRegisterInfo_InitMCRegisterInfo(MRI, PPCRegDesc, 344,
   0, 0,
   PPCMCRegisterClasses, 36,
   0, 0,
   PPCRegDiffLists,
   0,
   PPCSubRegIdxLists, 7,
   0);
}

#endif
