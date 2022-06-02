# 1 "project/radare2/shlr/capstone/arch/AArch64/AArch64Disassembler.c"
# 19 "project/radare2/shlr/capstone/arch/AArch64/AArch64Disassembler.c"
#ifdef CAPSTONE_HAS_ARM64

#include <stdio.h>
#include <stdlib.h>

#include "../../cs_priv.h"
#include "../../utils.h"

#include "AArch64Disassembler.h"

#include "../../MCDisassembler.h"
#include "../../MCFixedLenDisassembler.h"
#include "../../MCInst.h"
#include "../../MCInstrDesc.h"
#include "../../MCRegisterInfo.h"

#include "AArch64AddressingModes.h"
#include "AArch64BaseInfo.h"



static DecodeStatus DecodeFPR128RegisterClass(MCInst *Inst,
  unsigned RegNo, uint64_t Address, const void *Decoder);
static DecodeStatus DecodeFPR64RegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeFPR32RegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeFPR16RegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeFPR8RegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeGPR64RegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeGPR64spRegisterClass(MCInst *Inst,
  unsigned RegNo, uint64_t Address, const void *Decoder);
static DecodeStatus DecodeGPR32RegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeGPR32spRegisterClass(MCInst *Inst,
  unsigned RegNo, uint64_t Address, const void *Decoder);
static DecodeStatus DecodeQQRegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeQQQRegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeQQQQRegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeDDRegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeDDDRegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeDDDDRegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeZPRRegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeZPR_4bRegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeZPR_3bRegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeZPR2RegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeZPR3RegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeZPR4RegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodePPRRegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodePPR_3bRegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeFixedPointScaleImm32(MCInst *Inst, unsigned Imm,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeFixedPointScaleImm64(MCInst *Inst, unsigned Imm,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodePCRelLabel19(MCInst *Inst, unsigned Imm,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeMemExtend(MCInst *Inst, unsigned Imm,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeMRSSystemRegister(MCInst *Inst, unsigned Imm,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeMSRSystemRegister(MCInst *Inst, unsigned Imm,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeMoveImmInstruction(MCInst *Inst, uint32_t insn,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeUnsignedLdStInstruction(MCInst *Inst,
  uint32_t insn, uint64_t Address, const void *Decoder);
static DecodeStatus DecodeSignedLdStInstruction(MCInst *Inst,
  uint32_t insn, uint64_t Address, const void *Decoder);
static DecodeStatus DecodeExclusiveLdStInstruction(MCInst *Inst,
  uint32_t insn, uint64_t Address, const void *Decoder);
static DecodeStatus DecodePairLdStInstruction(MCInst *Inst, uint32_t insn,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeAddSubERegInstruction(MCInst *Inst,
  uint32_t insn, uint64_t Address, const void *Decoder);
static DecodeStatus DecodeLogicalImmInstruction(MCInst *Inst,
  uint32_t insn, uint64_t Address, const void *Decoder);
static DecodeStatus DecodeModImmInstruction(MCInst *Inst, uint32_t insn,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeModImmTiedInstruction(MCInst *Inst,
  uint32_t insn, uint64_t Address, const void *Decoder);
static DecodeStatus DecodeAdrInstruction(MCInst *Inst, uint32_t insn,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeBaseAddSubImm(MCInst *Inst, uint32_t insn,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeUnconditionalBranch(MCInst *Inst, uint32_t insn,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeSystemPStateInstruction(MCInst *Inst,
  uint32_t insn, uint64_t Address, const void *Decoder);
static DecodeStatus DecodeTestAndBranch(MCInst *Inst, uint32_t insn,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeFMOVLaneInstruction(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeVecShiftR64Imm(MCInst *Inst, unsigned Imm,
  uint64_t Addr, const void *Decoder);
static DecodeStatus DecodeVecShiftR64ImmNarrow(MCInst *Inst, unsigned Imm,
  uint64_t Addr, const void *Decoder);
static DecodeStatus DecodeVecShiftR32Imm(MCInst *Inst, unsigned Imm,
  uint64_t Addr, const void *Decoder);
static DecodeStatus DecodeVecShiftR32ImmNarrow(MCInst *Inst, unsigned Imm,
  uint64_t Addr, const void *Decoder);
static DecodeStatus DecodeVecShiftR16Imm(MCInst *Inst, unsigned Imm,
  uint64_t Addr, const void *Decoder);
static DecodeStatus DecodeVecShiftR16ImmNarrow(MCInst *Inst, unsigned Imm,
  uint64_t Addr, const void *Decoder);
static DecodeStatus DecodeVecShiftR8Imm(MCInst *Inst, unsigned Imm,
  uint64_t Addr, const void *Decoder);
static DecodeStatus DecodeVecShiftL64Imm(MCInst *Inst, unsigned Imm,
  uint64_t Addr, const void *Decoder);
static DecodeStatus DecodeVecShiftL32Imm(MCInst *Inst, unsigned Imm,
  uint64_t Addr, const void *Decoder);
static DecodeStatus DecodeVecShiftL16Imm(MCInst *Inst, unsigned Imm,
  uint64_t Addr, const void *Decoder);
static DecodeStatus DecodeVecShiftL8Imm(MCInst *Inst, unsigned Imm,
  uint64_t Addr, const void *Decoder);
static DecodeStatus DecodeWSeqPairsClassRegisterClass(MCInst *Inst,
  unsigned RegNo, uint64_t Addr, const void *Decoder);
static DecodeStatus DecodeXSeqPairsClassRegisterClass(MCInst *Inst,
  unsigned RegNo, uint64_t Addr, const void *Decoder);
static DecodeStatus DecodeSVELogicalImmInstruction(MCInst *Inst, uint32_t insn,
  uint64_t Address, const void *Decoder);
static DecodeStatus DecodeSImm(MCInst *Inst, uint64_t Imm, uint64_t Address,
  const void *Decoder, int Bits);
static DecodeStatus DecodeImm8OptLsl(MCInst *Inst, unsigned Imm, uint64_t Addr,
  const void *Decoder, int ElementWidth);
static DecodeStatus DecodeSVEIncDecImm(MCInst *Inst, unsigned Imm,
  uint64_t Addr, const void *Decoder);
static DecodeStatus DecodeThreeAddrSRegInstruction(MCInst *Inst,
  uint32_t insn, uint64_t Addr, const void *Decoder);
static DecodeStatus DecodeGPR64commonRegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Addr, const void *Decoder);
static DecodeStatus DecodeFPR128_loRegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Addr, const void *Decoder);


static bool Check(DecodeStatus *Out, DecodeStatus In)
{
 switch (In) {
  default:
   return true;

  case MCDisassembler_Success:

   return true;

  case MCDisassembler_SoftFail:
   *Out = In;
   return true;

  case MCDisassembler_Fail:
   *Out = In;
   return false;
 }

}


uint64_t AArch64_getFeatureBits(int feature)
{

 return (uint64_t)-1;
}

#define GET_SUBTARGETINFO_ENUM 
#include "AArch64GenSubtargetInfo.inc"

#include "AArch64GenDisassemblerTables.inc"

#define GET_INSTRINFO_ENUM 
#include "AArch64GenInstrInfo.inc"

#define GET_REGINFO_ENUM 
#define GET_REGINFO_MC_DESC 
#include "AArch64GenRegisterInfo.inc"

#define Success MCDisassembler_Success
#define Fail MCDisassembler_Fail
#define SoftFail MCDisassembler_SoftFail

static DecodeStatus _getInstruction(cs_struct *ud, MCInst *MI,
  const uint8_t *code, size_t code_len,
  uint16_t *Size,
  uint64_t Address, MCRegisterInfo *MRI)
{
 uint32_t insn;
 DecodeStatus result;
 size_t i;

 if (code_len < 4) {

  *Size = 0;
  return MCDisassembler_Fail;
 }

 if (MI->flat_insn->detail) {
  memset(MI->flat_insn->detail, 0, offsetof(cs_detail, arm64)+sizeof(cs_arm64));
  for (i = 0; i < ARR_SIZE(MI->flat_insn->detail->arm64.operands); i++)
   MI->flat_insn->detail->arm64.operands[i].vector_index = -1;
 }

 if (MODE_IS_BIG_ENDIAN(ud->mode))
  insn = (code[3] << 0) | (code[2] << 8) |
   (code[1] << 16) | ((uint32_t) code[0] << 24);
 else
  insn = ((uint32_t) code[3] << 24) | (code[2] << 16) |
   (code[1] << 8) | (code[0] << 0);


 result = decodeInstruction_4(DecoderTable32, MI, insn, Address);
 if (result != MCDisassembler_Fail) {
  *Size = 4;

  return result;
 }


 MCInst_clear(MI);
 *Size = 0;

 return MCDisassembler_Fail;
}

bool AArch64_getInstruction(csh ud, const uint8_t *code, size_t code_len,
  MCInst *instr, uint16_t *size, uint64_t address, void *info)
{
 DecodeStatus status = _getInstruction((cs_struct *)ud, instr,
   code, code_len,
   size,
   address, (MCRegisterInfo *)info);

 return status == MCDisassembler_Success;
}

static const unsigned FPR128DecoderTable[] = {
 AArch64_Q0, AArch64_Q1, AArch64_Q2, AArch64_Q3, AArch64_Q4,
 AArch64_Q5, AArch64_Q6, AArch64_Q7, AArch64_Q8, AArch64_Q9,
 AArch64_Q10, AArch64_Q11, AArch64_Q12, AArch64_Q13, AArch64_Q14,
 AArch64_Q15, AArch64_Q16, AArch64_Q17, AArch64_Q18, AArch64_Q19,
 AArch64_Q20, AArch64_Q21, AArch64_Q22, AArch64_Q23, AArch64_Q24,
 AArch64_Q25, AArch64_Q26, AArch64_Q27, AArch64_Q28, AArch64_Q29,
 AArch64_Q30, AArch64_Q31
};

static DecodeStatus DecodeFPR128RegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Addr, const void *Decoder)
{
 unsigned Register;

 if (RegNo > 31)
  return Fail;

 Register = FPR128DecoderTable[RegNo];
 MCOperand_CreateReg0(Inst, Register);

 return Success;
}

static DecodeStatus DecodeFPR128_loRegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Addr, const void *Decoder)
{
 if (RegNo > 15)
  return Fail;

 return DecodeFPR128RegisterClass(Inst, RegNo, Addr, Decoder);
}

static const unsigned FPR64DecoderTable[] = {
 AArch64_D0, AArch64_D1, AArch64_D2, AArch64_D3, AArch64_D4,
 AArch64_D5, AArch64_D6, AArch64_D7, AArch64_D8, AArch64_D9,
 AArch64_D10, AArch64_D11, AArch64_D12, AArch64_D13, AArch64_D14,
 AArch64_D15, AArch64_D16, AArch64_D17, AArch64_D18, AArch64_D19,
 AArch64_D20, AArch64_D21, AArch64_D22, AArch64_D23, AArch64_D24,
 AArch64_D25, AArch64_D26, AArch64_D27, AArch64_D28, AArch64_D29,
 AArch64_D30, AArch64_D31
};

static DecodeStatus DecodeFPR64RegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Addr, const void *Decoder)
{
 unsigned Register;

 if (RegNo > 31)
  return Fail;

 Register = FPR64DecoderTable[RegNo];
 MCOperand_CreateReg0(Inst, Register);

 return Success;
}

static const unsigned FPR32DecoderTable[] = {
 AArch64_S0, AArch64_S1, AArch64_S2, AArch64_S3, AArch64_S4,
 AArch64_S5, AArch64_S6, AArch64_S7, AArch64_S8, AArch64_S9,
 AArch64_S10, AArch64_S11, AArch64_S12, AArch64_S13, AArch64_S14,
 AArch64_S15, AArch64_S16, AArch64_S17, AArch64_S18, AArch64_S19,
 AArch64_S20, AArch64_S21, AArch64_S22, AArch64_S23, AArch64_S24,
 AArch64_S25, AArch64_S26, AArch64_S27, AArch64_S28, AArch64_S29,
 AArch64_S30, AArch64_S31
};

static DecodeStatus DecodeFPR32RegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Addr, const void *Decoder)
{
 unsigned Register;

 if (RegNo > 31)
  return Fail;

 Register = FPR32DecoderTable[RegNo];
 MCOperand_CreateReg0(Inst, Register);

 return Success;
}

static const unsigned FPR16DecoderTable[] = {
 AArch64_H0, AArch64_H1, AArch64_H2, AArch64_H3, AArch64_H4,
 AArch64_H5, AArch64_H6, AArch64_H7, AArch64_H8, AArch64_H9,
 AArch64_H10, AArch64_H11, AArch64_H12, AArch64_H13, AArch64_H14,
 AArch64_H15, AArch64_H16, AArch64_H17, AArch64_H18, AArch64_H19,
 AArch64_H20, AArch64_H21, AArch64_H22, AArch64_H23, AArch64_H24,
 AArch64_H25, AArch64_H26, AArch64_H27, AArch64_H28, AArch64_H29,
 AArch64_H30, AArch64_H31
};

static DecodeStatus DecodeFPR16RegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Addr, const void *Decoder)
{
 unsigned Register;

 if (RegNo > 31)
  return Fail;

 Register = FPR16DecoderTable[RegNo];
 MCOperand_CreateReg0(Inst, Register);

 return Success;
}

static const unsigned FPR8DecoderTable[] = {
 AArch64_B0, AArch64_B1, AArch64_B2, AArch64_B3, AArch64_B4,
 AArch64_B5, AArch64_B6, AArch64_B7, AArch64_B8, AArch64_B9,
 AArch64_B10, AArch64_B11, AArch64_B12, AArch64_B13, AArch64_B14,
 AArch64_B15, AArch64_B16, AArch64_B17, AArch64_B18, AArch64_B19,
 AArch64_B20, AArch64_B21, AArch64_B22, AArch64_B23, AArch64_B24,
 AArch64_B25, AArch64_B26, AArch64_B27, AArch64_B28, AArch64_B29,
 AArch64_B30, AArch64_B31
};

static DecodeStatus DecodeFPR8RegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Addr, const void *Decoder)
{
 unsigned Register;

 if (RegNo > 31)
  return Fail;

 Register = FPR8DecoderTable[RegNo];
 MCOperand_CreateReg0(Inst, Register);

 return Success;
}

static const unsigned GPR64DecoderTable[] = {
 AArch64_X0, AArch64_X1, AArch64_X2, AArch64_X3, AArch64_X4,
 AArch64_X5, AArch64_X6, AArch64_X7, AArch64_X8, AArch64_X9,
 AArch64_X10, AArch64_X11, AArch64_X12, AArch64_X13, AArch64_X14,
 AArch64_X15, AArch64_X16, AArch64_X17, AArch64_X18, AArch64_X19,
 AArch64_X20, AArch64_X21, AArch64_X22, AArch64_X23, AArch64_X24,
 AArch64_X25, AArch64_X26, AArch64_X27, AArch64_X28, AArch64_FP,
 AArch64_LR, AArch64_XZR
};

static DecodeStatus DecodeGPR64commonRegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Addr, const void *Decoder)
{
 unsigned Register;

 if (RegNo > 30)
  return Fail;

 Register = GPR64DecoderTable[RegNo];
 MCOperand_CreateReg0(Inst, Register);

 return Success;
}

static DecodeStatus DecodeGPR64RegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Addr, const void *Decoder)
{
 unsigned Register;

 if (RegNo > 31)
  return Fail;

 Register = GPR64DecoderTable[RegNo];
 MCOperand_CreateReg0(Inst, Register);

 return Success;
}

static DecodeStatus DecodeGPR64spRegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Addr, const void *Decoder)
{
 unsigned Register;

 if (RegNo > 31)
  return Fail;

 Register = GPR64DecoderTable[RegNo];
 if (Register == AArch64_XZR)
  Register = AArch64_SP;

 MCOperand_CreateReg0(Inst, Register);

 return Success;
}

static const unsigned GPR32DecoderTable[] = {
 AArch64_W0, AArch64_W1, AArch64_W2, AArch64_W3, AArch64_W4,
 AArch64_W5, AArch64_W6, AArch64_W7, AArch64_W8, AArch64_W9,
 AArch64_W10, AArch64_W11, AArch64_W12, AArch64_W13, AArch64_W14,
 AArch64_W15, AArch64_W16, AArch64_W17, AArch64_W18, AArch64_W19,
 AArch64_W20, AArch64_W21, AArch64_W22, AArch64_W23, AArch64_W24,
 AArch64_W25, AArch64_W26, AArch64_W27, AArch64_W28, AArch64_W29,
 AArch64_W30, AArch64_WZR
};

static DecodeStatus DecodeGPR32RegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Addr, const void *Decoder)
{
 unsigned Register;

 if (RegNo > 31)
  return Fail;

 Register = GPR32DecoderTable[RegNo];
 MCOperand_CreateReg0(Inst, Register);

 return Success;
}

static DecodeStatus DecodeGPR32spRegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Addr, const void *Decoder)
{
 unsigned Register;

 if (RegNo > 31)
  return Fail;

 Register = GPR32DecoderTable[RegNo];
 if (Register == AArch64_WZR)
  Register = AArch64_WSP;

 MCOperand_CreateReg0(Inst, Register);

 return Success;
}

static const unsigned ZPRDecoderTable[] = {
    AArch64_Z0, AArch64_Z1, AArch64_Z2, AArch64_Z3,
    AArch64_Z4, AArch64_Z5, AArch64_Z6, AArch64_Z7,
    AArch64_Z8, AArch64_Z9, AArch64_Z10, AArch64_Z11,
    AArch64_Z12, AArch64_Z13, AArch64_Z14, AArch64_Z15,
    AArch64_Z16, AArch64_Z17, AArch64_Z18, AArch64_Z19,
    AArch64_Z20, AArch64_Z21, AArch64_Z22, AArch64_Z23,
    AArch64_Z24, AArch64_Z25, AArch64_Z26, AArch64_Z27,
    AArch64_Z28, AArch64_Z29, AArch64_Z30, AArch64_Z31
};

static DecodeStatus DecodeZPRRegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Address, const void *Decoder)
{
 unsigned Register;

 if (RegNo > 31)
  return Fail;

 Register = ZPRDecoderTable[RegNo];
 MCOperand_CreateReg0(Inst, Register);

 return Success;
}

static DecodeStatus DecodeZPR_4bRegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Address, const void *Decoder)
{
 if (RegNo > 15)
  return Fail;

 return DecodeZPRRegisterClass(Inst, RegNo, Address, Decoder);
}

static DecodeStatus DecodeZPR_3bRegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Address, const void *Decoder)
{
 if (RegNo > 7)
  return Fail;

 return DecodeZPRRegisterClass(Inst, RegNo, Address, Decoder);
}

static const unsigned ZZDecoderTable[] = {
 AArch64_Z0_Z1, AArch64_Z1_Z2, AArch64_Z2_Z3, AArch64_Z3_Z4,
 AArch64_Z4_Z5, AArch64_Z5_Z6, AArch64_Z6_Z7, AArch64_Z7_Z8,
 AArch64_Z8_Z9, AArch64_Z9_Z10, AArch64_Z10_Z11, AArch64_Z11_Z12,
 AArch64_Z12_Z13, AArch64_Z13_Z14, AArch64_Z14_Z15, AArch64_Z15_Z16,
 AArch64_Z16_Z17, AArch64_Z17_Z18, AArch64_Z18_Z19, AArch64_Z19_Z20,
 AArch64_Z20_Z21, AArch64_Z21_Z22, AArch64_Z22_Z23, AArch64_Z23_Z24,
 AArch64_Z24_Z25, AArch64_Z25_Z26, AArch64_Z26_Z27, AArch64_Z27_Z28,
 AArch64_Z28_Z29, AArch64_Z29_Z30, AArch64_Z30_Z31, AArch64_Z31_Z0
};

static DecodeStatus DecodeZPR2RegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Address, const void *Decoder)
{
 unsigned Register;

 if (RegNo > 31)
  return Fail;

 Register = ZZDecoderTable[RegNo];
 MCOperand_CreateReg0(Inst, Register);

 return Success;
}

static const unsigned ZZZDecoderTable[] = {
 AArch64_Z0_Z1_Z2, AArch64_Z1_Z2_Z3, AArch64_Z2_Z3_Z4,
 AArch64_Z3_Z4_Z5, AArch64_Z4_Z5_Z6, AArch64_Z5_Z6_Z7,
 AArch64_Z6_Z7_Z8, AArch64_Z7_Z8_Z9, AArch64_Z8_Z9_Z10,
 AArch64_Z9_Z10_Z11, AArch64_Z10_Z11_Z12, AArch64_Z11_Z12_Z13,
 AArch64_Z12_Z13_Z14, AArch64_Z13_Z14_Z15, AArch64_Z14_Z15_Z16,
 AArch64_Z15_Z16_Z17, AArch64_Z16_Z17_Z18, AArch64_Z17_Z18_Z19,
 AArch64_Z18_Z19_Z20, AArch64_Z19_Z20_Z21, AArch64_Z20_Z21_Z22,
 AArch64_Z21_Z22_Z23, AArch64_Z22_Z23_Z24, AArch64_Z23_Z24_Z25,
 AArch64_Z24_Z25_Z26, AArch64_Z25_Z26_Z27, AArch64_Z26_Z27_Z28,
 AArch64_Z27_Z28_Z29, AArch64_Z28_Z29_Z30, AArch64_Z29_Z30_Z31,
 AArch64_Z30_Z31_Z0, AArch64_Z31_Z0_Z1
};

static DecodeStatus DecodeZPR3RegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Address, const void *Decoder)
{
 unsigned Register;

 if (RegNo > 31)
  return Fail;

 Register = ZZZDecoderTable[RegNo];
 MCOperand_CreateReg0(Inst, Register);

 return Success;
}

static const unsigned ZZZZDecoderTable[] = {
 AArch64_Z0_Z1_Z2_Z3, AArch64_Z1_Z2_Z3_Z4, AArch64_Z2_Z3_Z4_Z5,
 AArch64_Z3_Z4_Z5_Z6, AArch64_Z4_Z5_Z6_Z7, AArch64_Z5_Z6_Z7_Z8,
 AArch64_Z6_Z7_Z8_Z9, AArch64_Z7_Z8_Z9_Z10, AArch64_Z8_Z9_Z10_Z11,
 AArch64_Z9_Z10_Z11_Z12, AArch64_Z10_Z11_Z12_Z13, AArch64_Z11_Z12_Z13_Z14,
 AArch64_Z12_Z13_Z14_Z15, AArch64_Z13_Z14_Z15_Z16, AArch64_Z14_Z15_Z16_Z17,
 AArch64_Z15_Z16_Z17_Z18, AArch64_Z16_Z17_Z18_Z19, AArch64_Z17_Z18_Z19_Z20,
 AArch64_Z18_Z19_Z20_Z21, AArch64_Z19_Z20_Z21_Z22, AArch64_Z20_Z21_Z22_Z23,
 AArch64_Z21_Z22_Z23_Z24, AArch64_Z22_Z23_Z24_Z25, AArch64_Z23_Z24_Z25_Z26,
 AArch64_Z24_Z25_Z26_Z27, AArch64_Z25_Z26_Z27_Z28, AArch64_Z26_Z27_Z28_Z29,
 AArch64_Z27_Z28_Z29_Z30, AArch64_Z28_Z29_Z30_Z31, AArch64_Z29_Z30_Z31_Z0,
 AArch64_Z30_Z31_Z0_Z1, AArch64_Z31_Z0_Z1_Z2
};

static DecodeStatus DecodeZPR4RegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Address, const void *Decoder)
{
 unsigned Register;

 if (RegNo > 31)
  return Fail;

 Register = ZZZZDecoderTable[RegNo];
 MCOperand_CreateReg0(Inst, Register);

 return Success;
}

static const unsigned PPRDecoderTable[] = {
 AArch64_P0, AArch64_P1, AArch64_P2, AArch64_P3,
 AArch64_P4, AArch64_P5, AArch64_P6, AArch64_P7,
 AArch64_P8, AArch64_P9, AArch64_P10, AArch64_P11,
 AArch64_P12, AArch64_P13, AArch64_P14, AArch64_P15
};

static DecodeStatus DecodePPRRegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Addr, const void *Decoder)
{
 unsigned Register;

 if (RegNo > 15)
  return Fail;

 Register = PPRDecoderTable[RegNo];
 MCOperand_CreateReg0(Inst, Register);

 return Success;
}

static DecodeStatus DecodePPR_3bRegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Addr, const void *Decoder)
{
 if (RegNo > 7)
  return Fail;


 return DecodePPRRegisterClass(Inst, RegNo, Addr, Decoder);
}

static const unsigned VectorDecoderTable[] = {
 AArch64_Q0, AArch64_Q1, AArch64_Q2, AArch64_Q3, AArch64_Q4,
 AArch64_Q5, AArch64_Q6, AArch64_Q7, AArch64_Q8, AArch64_Q9,
 AArch64_Q10, AArch64_Q11, AArch64_Q12, AArch64_Q13, AArch64_Q14,
 AArch64_Q15, AArch64_Q16, AArch64_Q17, AArch64_Q18, AArch64_Q19,
 AArch64_Q20, AArch64_Q21, AArch64_Q22, AArch64_Q23, AArch64_Q24,
 AArch64_Q25, AArch64_Q26, AArch64_Q27, AArch64_Q28, AArch64_Q29,
 AArch64_Q30, AArch64_Q31
};

static DecodeStatus DecodeVectorRegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Addr, const void *Decoder)
{
 unsigned Register;

 if (RegNo > 31)
  return Fail;

 Register = VectorDecoderTable[RegNo];
 MCOperand_CreateReg0(Inst, Register);

 return Success;
}

static const unsigned QQDecoderTable[] = {
 AArch64_Q0_Q1, AArch64_Q1_Q2, AArch64_Q2_Q3, AArch64_Q3_Q4,
 AArch64_Q4_Q5, AArch64_Q5_Q6, AArch64_Q6_Q7, AArch64_Q7_Q8,
 AArch64_Q8_Q9, AArch64_Q9_Q10, AArch64_Q10_Q11, AArch64_Q11_Q12,
 AArch64_Q12_Q13, AArch64_Q13_Q14, AArch64_Q14_Q15, AArch64_Q15_Q16,
 AArch64_Q16_Q17, AArch64_Q17_Q18, AArch64_Q18_Q19, AArch64_Q19_Q20,
 AArch64_Q20_Q21, AArch64_Q21_Q22, AArch64_Q22_Q23, AArch64_Q23_Q24,
 AArch64_Q24_Q25, AArch64_Q25_Q26, AArch64_Q26_Q27, AArch64_Q27_Q28,
 AArch64_Q28_Q29, AArch64_Q29_Q30, AArch64_Q30_Q31, AArch64_Q31_Q0
};

static DecodeStatus DecodeQQRegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Addr, const void *Decoder)
{
 unsigned Register;

 if (RegNo > 31)
  return Fail;

 Register = QQDecoderTable[RegNo];
 MCOperand_CreateReg0(Inst, Register);

 return Success;
}

static const unsigned QQQDecoderTable[] = {
 AArch64_Q0_Q1_Q2, AArch64_Q1_Q2_Q3, AArch64_Q2_Q3_Q4,
 AArch64_Q3_Q4_Q5, AArch64_Q4_Q5_Q6, AArch64_Q5_Q6_Q7,
 AArch64_Q6_Q7_Q8, AArch64_Q7_Q8_Q9, AArch64_Q8_Q9_Q10,
 AArch64_Q9_Q10_Q11, AArch64_Q10_Q11_Q12, AArch64_Q11_Q12_Q13,
 AArch64_Q12_Q13_Q14, AArch64_Q13_Q14_Q15, AArch64_Q14_Q15_Q16,
 AArch64_Q15_Q16_Q17, AArch64_Q16_Q17_Q18, AArch64_Q17_Q18_Q19,
 AArch64_Q18_Q19_Q20, AArch64_Q19_Q20_Q21, AArch64_Q20_Q21_Q22,
 AArch64_Q21_Q22_Q23, AArch64_Q22_Q23_Q24, AArch64_Q23_Q24_Q25,
 AArch64_Q24_Q25_Q26, AArch64_Q25_Q26_Q27, AArch64_Q26_Q27_Q28,
 AArch64_Q27_Q28_Q29, AArch64_Q28_Q29_Q30, AArch64_Q29_Q30_Q31,
 AArch64_Q30_Q31_Q0, AArch64_Q31_Q0_Q1
};

static DecodeStatus DecodeQQQRegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Addr, const void *Decoder)
{
 unsigned Register;

 if (RegNo > 31)
  return Fail;

 Register = QQQDecoderTable[RegNo];
 MCOperand_CreateReg0(Inst, Register);

 return Success;
}

static const unsigned QQQQDecoderTable[] = {
 AArch64_Q0_Q1_Q2_Q3, AArch64_Q1_Q2_Q3_Q4, AArch64_Q2_Q3_Q4_Q5,
 AArch64_Q3_Q4_Q5_Q6, AArch64_Q4_Q5_Q6_Q7, AArch64_Q5_Q6_Q7_Q8,
 AArch64_Q6_Q7_Q8_Q9, AArch64_Q7_Q8_Q9_Q10, AArch64_Q8_Q9_Q10_Q11,
 AArch64_Q9_Q10_Q11_Q12, AArch64_Q10_Q11_Q12_Q13, AArch64_Q11_Q12_Q13_Q14,
 AArch64_Q12_Q13_Q14_Q15, AArch64_Q13_Q14_Q15_Q16, AArch64_Q14_Q15_Q16_Q17,
 AArch64_Q15_Q16_Q17_Q18, AArch64_Q16_Q17_Q18_Q19, AArch64_Q17_Q18_Q19_Q20,
 AArch64_Q18_Q19_Q20_Q21, AArch64_Q19_Q20_Q21_Q22, AArch64_Q20_Q21_Q22_Q23,
 AArch64_Q21_Q22_Q23_Q24, AArch64_Q22_Q23_Q24_Q25, AArch64_Q23_Q24_Q25_Q26,
 AArch64_Q24_Q25_Q26_Q27, AArch64_Q25_Q26_Q27_Q28, AArch64_Q26_Q27_Q28_Q29,
 AArch64_Q27_Q28_Q29_Q30, AArch64_Q28_Q29_Q30_Q31, AArch64_Q29_Q30_Q31_Q0,
 AArch64_Q30_Q31_Q0_Q1, AArch64_Q31_Q0_Q1_Q2
};

static DecodeStatus DecodeQQQQRegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Addr, const void *Decoder)
{
 unsigned Register;

 if (RegNo > 31)
  return Fail;

 Register = QQQQDecoderTable[RegNo];
 MCOperand_CreateReg0(Inst, Register);

 return Success;
}

static const unsigned DDDecoderTable[] = {
 AArch64_D0_D1, AArch64_D1_D2, AArch64_D2_D3, AArch64_D3_D4,
 AArch64_D4_D5, AArch64_D5_D6, AArch64_D6_D7, AArch64_D7_D8,
 AArch64_D8_D9, AArch64_D9_D10, AArch64_D10_D11, AArch64_D11_D12,
 AArch64_D12_D13, AArch64_D13_D14, AArch64_D14_D15, AArch64_D15_D16,
 AArch64_D16_D17, AArch64_D17_D18, AArch64_D18_D19, AArch64_D19_D20,
 AArch64_D20_D21, AArch64_D21_D22, AArch64_D22_D23, AArch64_D23_D24,
 AArch64_D24_D25, AArch64_D25_D26, AArch64_D26_D27, AArch64_D27_D28,
 AArch64_D28_D29, AArch64_D29_D30, AArch64_D30_D31, AArch64_D31_D0
};

static DecodeStatus DecodeDDRegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Addr, const void *Decoder)
{
 unsigned Register;

 if (RegNo > 31)
  return Fail;

 Register = DDDecoderTable[RegNo];
 MCOperand_CreateReg0(Inst, Register);

 return Success;
}

static const unsigned DDDDecoderTable[] = {
 AArch64_D0_D1_D2, AArch64_D1_D2_D3, AArch64_D2_D3_D4,
 AArch64_D3_D4_D5, AArch64_D4_D5_D6, AArch64_D5_D6_D7,
 AArch64_D6_D7_D8, AArch64_D7_D8_D9, AArch64_D8_D9_D10,
 AArch64_D9_D10_D11, AArch64_D10_D11_D12, AArch64_D11_D12_D13,
 AArch64_D12_D13_D14, AArch64_D13_D14_D15, AArch64_D14_D15_D16,
 AArch64_D15_D16_D17, AArch64_D16_D17_D18, AArch64_D17_D18_D19,
 AArch64_D18_D19_D20, AArch64_D19_D20_D21, AArch64_D20_D21_D22,
 AArch64_D21_D22_D23, AArch64_D22_D23_D24, AArch64_D23_D24_D25,
 AArch64_D24_D25_D26, AArch64_D25_D26_D27, AArch64_D26_D27_D28,
 AArch64_D27_D28_D29, AArch64_D28_D29_D30, AArch64_D29_D30_D31,
 AArch64_D30_D31_D0, AArch64_D31_D0_D1
};

static DecodeStatus DecodeDDDRegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Addr, const void *Decoder)
{
 unsigned Register;

 if (RegNo > 31)
  return Fail;

 Register = DDDDecoderTable[RegNo];
 MCOperand_CreateReg0(Inst, Register);

 return Success;
}

static const unsigned DDDDDecoderTable[] = {
 AArch64_D0_D1_D2_D3, AArch64_D1_D2_D3_D4, AArch64_D2_D3_D4_D5,
 AArch64_D3_D4_D5_D6, AArch64_D4_D5_D6_D7, AArch64_D5_D6_D7_D8,
 AArch64_D6_D7_D8_D9, AArch64_D7_D8_D9_D10, AArch64_D8_D9_D10_D11,
 AArch64_D9_D10_D11_D12, AArch64_D10_D11_D12_D13, AArch64_D11_D12_D13_D14,
 AArch64_D12_D13_D14_D15, AArch64_D13_D14_D15_D16, AArch64_D14_D15_D16_D17,
 AArch64_D15_D16_D17_D18, AArch64_D16_D17_D18_D19, AArch64_D17_D18_D19_D20,
 AArch64_D18_D19_D20_D21, AArch64_D19_D20_D21_D22, AArch64_D20_D21_D22_D23,
 AArch64_D21_D22_D23_D24, AArch64_D22_D23_D24_D25, AArch64_D23_D24_D25_D26,
 AArch64_D24_D25_D26_D27, AArch64_D25_D26_D27_D28, AArch64_D26_D27_D28_D29,
 AArch64_D27_D28_D29_D30, AArch64_D28_D29_D30_D31, AArch64_D29_D30_D31_D0,
 AArch64_D30_D31_D0_D1, AArch64_D31_D0_D1_D2
};

static DecodeStatus DecodeDDDDRegisterClass(MCInst *Inst, unsigned RegNo,
  uint64_t Addr, const void *Decoder)
{
 unsigned Register;

 if (RegNo > 31)
  return Fail;

 Register = DDDDDecoderTable[RegNo];
 MCOperand_CreateReg0(Inst, Register);

 return Success;
}

static DecodeStatus DecodeFixedPointScaleImm32(MCInst *Inst, unsigned Imm,
  uint64_t Addr, const void *Decoder)
{

 Imm |= 0x20;
 MCOperand_CreateImm0(Inst, 64 - Imm);

 return Success;
}

static DecodeStatus DecodeFixedPointScaleImm64(MCInst *Inst, unsigned Imm,
  uint64_t Addr, const void *Decoder)
{
 MCOperand_CreateImm0(Inst, 64 - Imm);

 return Success;
}

static DecodeStatus DecodePCRelLabel19(MCInst *Inst, unsigned Imm,
  uint64_t Addr, const void *Decoder)
{
 int64_t ImmVal = Imm;


 if (ImmVal & (1 << (19 - 1)))
  ImmVal |= ~((1LL << 19) - 1);

 MCOperand_CreateImm0(Inst, ImmVal);

 return Success;
}

static DecodeStatus DecodeMemExtend(MCInst *Inst, unsigned Imm,
  uint64_t Address, const void *Decoder)
{
 MCOperand_CreateImm0(Inst, (Imm >> 1) & 1);
 MCOperand_CreateImm0(Inst, Imm & 1);

 return Success;
}

static DecodeStatus DecodeMRSSystemRegister(MCInst *Inst, unsigned Imm,
  uint64_t Address, const void *Decoder)
{
 MCOperand_CreateImm0(Inst, Imm);



 return Success;
}

static DecodeStatus DecodeMSRSystemRegister(MCInst *Inst, unsigned Imm,
  uint64_t Address, const void *Decoder)
{
 MCOperand_CreateImm0(Inst, Imm);

 return Success;
}

static DecodeStatus DecodeFMOVLaneInstruction(MCInst *Inst, unsigned Insn,
  uint64_t Address, const void *Decoder)
{


 unsigned Rd = fieldFromInstruction_4(Insn, 0, 5);
 unsigned Rn = fieldFromInstruction_4(Insn, 5, 5);
 unsigned IsToVec = fieldFromInstruction_4(Insn, 16, 1);

 if (IsToVec) {
  DecodeFPR128RegisterClass(Inst, Rd, Address, Decoder);
  DecodeGPR64RegisterClass(Inst, Rn, Address, Decoder);
 } else {
  DecodeGPR64RegisterClass(Inst, Rd, Address, Decoder);
  DecodeFPR128RegisterClass(Inst, Rn, Address, Decoder);
 }


 MCOperand_CreateImm0(Inst, 1);

 return Success;
}

static DecodeStatus DecodeVecShiftRImm(MCInst *Inst, unsigned Imm,
  unsigned Add)
{
 MCOperand_CreateImm0(Inst, Add - Imm);

 return Success;
}

static DecodeStatus DecodeVecShiftLImm(MCInst *Inst, unsigned Imm,
  unsigned Add)
{
 MCOperand_CreateImm0(Inst, (Imm + Add) & (Add - 1));

 return Success;
}

static DecodeStatus DecodeVecShiftR64Imm(MCInst *Inst, unsigned Imm,
  uint64_t Addr, const void *Decoder)
{
 return DecodeVecShiftRImm(Inst, Imm, 64);
}

static DecodeStatus DecodeVecShiftR64ImmNarrow(MCInst *Inst, unsigned Imm,
  uint64_t Addr, const void *Decoder)
{
 return DecodeVecShiftRImm(Inst, Imm | 0x20, 64);
}

static DecodeStatus DecodeVecShiftR32Imm(MCInst *Inst, unsigned Imm,
  uint64_t Addr, const void *Decoder)
{
 return DecodeVecShiftRImm(Inst, Imm, 32);
}

static DecodeStatus DecodeVecShiftR32ImmNarrow(MCInst *Inst, unsigned Imm,
  uint64_t Addr, const void *Decoder)
{
 return DecodeVecShiftRImm(Inst, Imm | 0x10, 32);
}

static DecodeStatus DecodeVecShiftR16Imm(MCInst *Inst, unsigned Imm,
  uint64_t Addr, const void *Decoder)
{
 return DecodeVecShiftRImm(Inst, Imm, 16);
}

static DecodeStatus DecodeVecShiftR16ImmNarrow(MCInst *Inst, unsigned Imm,
  uint64_t Addr, const void *Decoder)
{
 return DecodeVecShiftRImm(Inst, Imm | 0x8, 16);
}

static DecodeStatus DecodeVecShiftR8Imm(MCInst *Inst, unsigned Imm,
  uint64_t Addr, const void *Decoder)
{
 return DecodeVecShiftRImm(Inst, Imm, 8);
}

static DecodeStatus DecodeVecShiftL64Imm(MCInst *Inst, unsigned Imm,
  uint64_t Addr, const void *Decoder)
{
 return DecodeVecShiftLImm(Inst, Imm, 64);
}

static DecodeStatus DecodeVecShiftL32Imm(MCInst *Inst, unsigned Imm,
  uint64_t Addr, const void *Decoder)
{
 return DecodeVecShiftLImm(Inst, Imm, 32);
}

static DecodeStatus DecodeVecShiftL16Imm(MCInst *Inst, unsigned Imm,
  uint64_t Addr, const void *Decoder)
{
 return DecodeVecShiftLImm(Inst, Imm, 16);
}

static DecodeStatus DecodeVecShiftL8Imm(MCInst *Inst, unsigned Imm,
  uint64_t Addr, const void *Decoder)
{
 return DecodeVecShiftLImm(Inst, Imm, 8);
}

static DecodeStatus DecodeThreeAddrSRegInstruction(MCInst *Inst,
  uint32_t insn, uint64_t Addr, const void *Decoder)
{
 unsigned Rd = fieldFromInstruction_4(insn, 0, 5);
 unsigned Rn = fieldFromInstruction_4(insn, 5, 5);
 unsigned Rm = fieldFromInstruction_4(insn, 16, 5);
 unsigned shiftHi = fieldFromInstruction_4(insn, 22, 2);
 unsigned shiftLo = fieldFromInstruction_4(insn, 10, 6);
 unsigned shift = (shiftHi << 6) | shiftLo;

 switch (MCInst_getOpcode(Inst)) {
  default:
   return Fail;

  case AArch64_ADDWrs:
  case AArch64_ADDSWrs:
  case AArch64_SUBWrs:
  case AArch64_SUBSWrs:

   if (shiftHi == 0x3)
    return Fail;


  case AArch64_ANDWrs:
  case AArch64_ANDSWrs:
  case AArch64_BICWrs:
  case AArch64_BICSWrs:
  case AArch64_ORRWrs:
  case AArch64_ORNWrs:
  case AArch64_EORWrs:
  case AArch64_EONWrs: {

   if (shiftLo >> 5 == 1)
    return Fail;

   DecodeGPR32RegisterClass(Inst, Rd, Addr, Decoder);
   DecodeGPR32RegisterClass(Inst, Rn, Addr, Decoder);
   DecodeGPR32RegisterClass(Inst, Rm, Addr, Decoder);
   break;
  }

  case AArch64_ADDXrs:
  case AArch64_ADDSXrs:
  case AArch64_SUBXrs:
  case AArch64_SUBSXrs:

    if (shiftHi == 0x3)
     return Fail;


  case AArch64_ANDXrs:
  case AArch64_ANDSXrs:
  case AArch64_BICXrs:
  case AArch64_BICSXrs:
  case AArch64_ORRXrs:
  case AArch64_ORNXrs:
  case AArch64_EORXrs:
  case AArch64_EONXrs:
   DecodeGPR64RegisterClass(Inst, Rd, Addr, Decoder);
   DecodeGPR64RegisterClass(Inst, Rn, Addr, Decoder);
   DecodeGPR64RegisterClass(Inst, Rm, Addr, Decoder);
   break;
 }

 MCOperand_CreateImm0(Inst, shift);

 return Success;
}

static DecodeStatus DecodeMoveImmInstruction(MCInst *Inst, uint32_t insn,
  uint64_t Addr, const void *Decoder)
{
 unsigned Rd = fieldFromInstruction_4(insn, 0, 5);
 unsigned imm = fieldFromInstruction_4(insn, 5, 16);
 unsigned shift = fieldFromInstruction_4(insn, 21, 2);

 shift <<= 4;

 switch (MCInst_getOpcode(Inst)) {
  default:
   return Fail;

  case AArch64_MOVZWi:
  case AArch64_MOVNWi:
  case AArch64_MOVKWi:
   if (shift & (1U << 5))
    return Fail;
   DecodeGPR32RegisterClass(Inst, Rd, Addr, Decoder);
   break;

  case AArch64_MOVZXi:
  case AArch64_MOVNXi:
  case AArch64_MOVKXi:
   DecodeGPR64RegisterClass(Inst, Rd, Addr, Decoder);
   break;
 }

 if (MCInst_getOpcode(Inst) == AArch64_MOVKWi ||
   MCInst_getOpcode(Inst) == AArch64_MOVKXi)
  MCInst_addOperand2(Inst, MCInst_getOperand(Inst, 0));

 MCOperand_CreateImm0(Inst, imm);
 MCOperand_CreateImm0(Inst, shift);

 return Success;
}

static DecodeStatus DecodeUnsignedLdStInstruction(MCInst *Inst,
  uint32_t insn, uint64_t Addr, const void *Decoder)
{
 unsigned Rt = fieldFromInstruction_4(insn, 0, 5);
 unsigned Rn = fieldFromInstruction_4(insn, 5, 5);
 unsigned offset = fieldFromInstruction_4(insn, 10, 12);

 switch (MCInst_getOpcode(Inst)) {
  default:
   return Fail;

  case AArch64_PRFMui:

   MCOperand_CreateImm0(Inst, Rt);
   break;

  case AArch64_STRBBui:
  case AArch64_LDRBBui:
  case AArch64_LDRSBWui:
  case AArch64_STRHHui:
  case AArch64_LDRHHui:
  case AArch64_LDRSHWui:
  case AArch64_STRWui:
  case AArch64_LDRWui:
   DecodeGPR32RegisterClass(Inst, Rt, Addr, Decoder);
   break;

  case AArch64_LDRSBXui:
  case AArch64_LDRSHXui:
  case AArch64_LDRSWui:
  case AArch64_STRXui:
  case AArch64_LDRXui:
   DecodeGPR64RegisterClass(Inst, Rt, Addr, Decoder);
   break;

  case AArch64_LDRQui:
  case AArch64_STRQui:
   DecodeFPR128RegisterClass(Inst, Rt, Addr, Decoder);
   break;

  case AArch64_LDRDui:
  case AArch64_STRDui:
   DecodeFPR64RegisterClass(Inst, Rt, Addr, Decoder);
   break;

  case AArch64_LDRSui:
  case AArch64_STRSui:
   DecodeFPR32RegisterClass(Inst, Rt, Addr, Decoder);
   break;

  case AArch64_LDRHui:
  case AArch64_STRHui:
   DecodeFPR16RegisterClass(Inst, Rt, Addr, Decoder);
   break;

  case AArch64_LDRBui:
  case AArch64_STRBui:
   DecodeFPR8RegisterClass(Inst, Rt, Addr, Decoder);
   break;
 }

 DecodeGPR64spRegisterClass(Inst, Rn, Addr, Decoder);


 MCOperand_CreateImm0(Inst, offset);

 return Success;
}

static DecodeStatus DecodeSignedLdStInstruction(MCInst *Inst,
  uint32_t insn, uint64_t Addr, const void *Decoder)
{
 bool IsLoad, IsIndexed, IsFP;
 unsigned Rt = fieldFromInstruction_4(insn, 0, 5);
 unsigned Rn = fieldFromInstruction_4(insn, 5, 5);
 int64_t offset = fieldFromInstruction_4(insn, 12, 9);



 if (offset & (1 << (9 - 1)))
  offset |= ~((1LL << 9) - 1);


 switch (MCInst_getOpcode(Inst)) {
  default:
   break;

  case AArch64_LDRSBWpre:
  case AArch64_LDRSHWpre:
  case AArch64_STRBBpre:
  case AArch64_LDRBBpre:
  case AArch64_STRHHpre:
  case AArch64_LDRHHpre:
  case AArch64_STRWpre:
  case AArch64_LDRWpre:
  case AArch64_LDRSBWpost:
  case AArch64_LDRSHWpost:
  case AArch64_STRBBpost:
  case AArch64_LDRBBpost:
  case AArch64_STRHHpost:
  case AArch64_LDRHHpost:
  case AArch64_STRWpost:
  case AArch64_LDRWpost:
  case AArch64_LDRSBXpre:
  case AArch64_LDRSHXpre:
  case AArch64_STRXpre:
  case AArch64_LDRSWpre:
  case AArch64_LDRXpre:
  case AArch64_LDRSBXpost:
  case AArch64_LDRSHXpost:
  case AArch64_STRXpost:
  case AArch64_LDRSWpost:
  case AArch64_LDRXpost:
  case AArch64_LDRQpre:
  case AArch64_STRQpre:
  case AArch64_LDRQpost:
  case AArch64_STRQpost:
  case AArch64_LDRDpre:
  case AArch64_STRDpre:
  case AArch64_LDRDpost:
  case AArch64_STRDpost:
  case AArch64_LDRSpre:
  case AArch64_STRSpre:
  case AArch64_LDRSpost:
  case AArch64_STRSpost:
  case AArch64_LDRHpre:
  case AArch64_STRHpre:
  case AArch64_LDRHpost:
  case AArch64_STRHpost:
  case AArch64_LDRBpre:
  case AArch64_STRBpre:
  case AArch64_LDRBpost:
  case AArch64_STRBpost:
   DecodeGPR64spRegisterClass(Inst, Rn, Addr, Decoder);
   break;
 }

 switch (MCInst_getOpcode(Inst)) {
  default:
   return Fail;

  case AArch64_PRFUMi:

   MCOperand_CreateImm0(Inst, Rt);
   break;

  case AArch64_STURBBi:
  case AArch64_LDURBBi:
  case AArch64_LDURSBWi:
  case AArch64_STURHHi:
  case AArch64_LDURHHi:
  case AArch64_LDURSHWi:
  case AArch64_STURWi:
  case AArch64_LDURWi:
  case AArch64_LDTRSBWi:
  case AArch64_LDTRSHWi:
  case AArch64_STTRWi:
  case AArch64_LDTRWi:
  case AArch64_STTRHi:
  case AArch64_LDTRHi:
  case AArch64_LDTRBi:
  case AArch64_STTRBi:
  case AArch64_LDRSBWpre:
  case AArch64_LDRSHWpre:
  case AArch64_STRBBpre:
  case AArch64_LDRBBpre:
  case AArch64_STRHHpre:
  case AArch64_LDRHHpre:
  case AArch64_STRWpre:
  case AArch64_LDRWpre:
  case AArch64_LDRSBWpost:
  case AArch64_LDRSHWpost:
  case AArch64_STRBBpost:
  case AArch64_LDRBBpost:
  case AArch64_STRHHpost:
  case AArch64_LDRHHpost:
  case AArch64_STRWpost:
  case AArch64_LDRWpost:
  case AArch64_STLURBi:
  case AArch64_STLURHi:
  case AArch64_STLURWi:
  case AArch64_LDAPURBi:
  case AArch64_LDAPURSBWi:
  case AArch64_LDAPURHi:
  case AArch64_LDAPURSHWi:
  case AArch64_LDAPURi:
   DecodeGPR32RegisterClass(Inst, Rt, Addr, Decoder);
   break;

  case AArch64_LDURSBXi:
  case AArch64_LDURSHXi:
  case AArch64_LDURSWi:
  case AArch64_STURXi:
  case AArch64_LDURXi:
  case AArch64_LDTRSBXi:
  case AArch64_LDTRSHXi:
  case AArch64_LDTRSWi:
  case AArch64_STTRXi:
  case AArch64_LDTRXi:
  case AArch64_LDRSBXpre:
  case AArch64_LDRSHXpre:
  case AArch64_STRXpre:
  case AArch64_LDRSWpre:
  case AArch64_LDRXpre:
  case AArch64_LDRSBXpost:
  case AArch64_LDRSHXpost:
  case AArch64_STRXpost:
  case AArch64_LDRSWpost:
  case AArch64_LDRXpost:
  case AArch64_LDAPURSWi:
  case AArch64_LDAPURSHXi:
  case AArch64_LDAPURSBXi:
  case AArch64_STLURXi:
  case AArch64_LDAPURXi:
   DecodeGPR64RegisterClass(Inst, Rt, Addr, Decoder);
   break;

  case AArch64_LDURQi:
  case AArch64_STURQi:
  case AArch64_LDRQpre:
  case AArch64_STRQpre:
  case AArch64_LDRQpost:
  case AArch64_STRQpost:
   DecodeFPR128RegisterClass(Inst, Rt, Addr, Decoder);
   break;

  case AArch64_LDURDi:
  case AArch64_STURDi:
  case AArch64_LDRDpre:
  case AArch64_STRDpre:
  case AArch64_LDRDpost:
  case AArch64_STRDpost:
   DecodeFPR64RegisterClass(Inst, Rt, Addr, Decoder);
   break;

  case AArch64_LDURSi:
  case AArch64_STURSi:
  case AArch64_LDRSpre:
  case AArch64_STRSpre:
  case AArch64_LDRSpost:
  case AArch64_STRSpost:
   DecodeFPR32RegisterClass(Inst, Rt, Addr, Decoder);
   break;

  case AArch64_LDURHi:
  case AArch64_STURHi:
  case AArch64_LDRHpre:
  case AArch64_STRHpre:
  case AArch64_LDRHpost:
  case AArch64_STRHpost:
   DecodeFPR16RegisterClass(Inst, Rt, Addr, Decoder);
   break;

  case AArch64_LDURBi:
  case AArch64_STURBi:
  case AArch64_LDRBpre:
  case AArch64_STRBpre:
  case AArch64_LDRBpost:
  case AArch64_STRBpost:
   DecodeFPR8RegisterClass(Inst, Rt, Addr, Decoder);
   break;
 }

 DecodeGPR64spRegisterClass(Inst, Rn, Addr, Decoder);
 MCOperand_CreateImm0(Inst, offset);

 IsLoad = fieldFromInstruction_4(insn, 22, 1) != 0;
 IsIndexed = fieldFromInstruction_4(insn, 10, 2) != 0;
 IsFP = fieldFromInstruction_4(insn, 26, 1) != 0;


 if (IsLoad && IsIndexed && !IsFP && Rn != 31 && Rt == Rn)
  return SoftFail;

 return Success;
}

static DecodeStatus DecodeExclusiveLdStInstruction(MCInst *Inst,
  uint32_t insn, uint64_t Addr, const void *Decoder)
{
 unsigned Rt = fieldFromInstruction_4(insn, 0, 5);
 unsigned Rn = fieldFromInstruction_4(insn, 5, 5);
 unsigned Rt2 = fieldFromInstruction_4(insn, 10, 5);
 unsigned Rs = fieldFromInstruction_4(insn, 16, 5);
 unsigned Opcode = MCInst_getOpcode(Inst);

 switch (Opcode) {
  default:
   return Fail;

  case AArch64_STLXRW:
  case AArch64_STLXRB:
  case AArch64_STLXRH:
  case AArch64_STXRW:
  case AArch64_STXRB:
  case AArch64_STXRH:
   DecodeGPR32RegisterClass(Inst, Rs, Addr, Decoder);

  case AArch64_LDARW:
  case AArch64_LDARB:
  case AArch64_LDARH:
  case AArch64_LDAXRW:
  case AArch64_LDAXRB:
  case AArch64_LDAXRH:
  case AArch64_LDXRW:
  case AArch64_LDXRB:
  case AArch64_LDXRH:
  case AArch64_STLRW:
  case AArch64_STLRB:
  case AArch64_STLRH:
  case AArch64_STLLRW:
  case AArch64_STLLRB:
  case AArch64_STLLRH:
  case AArch64_LDLARW:
  case AArch64_LDLARB:
  case AArch64_LDLARH:
   DecodeGPR32RegisterClass(Inst, Rt, Addr, Decoder);
   break;

  case AArch64_STLXRX:
  case AArch64_STXRX:
   DecodeGPR32RegisterClass(Inst, Rs, Addr, Decoder);

  case AArch64_LDARX:
  case AArch64_LDAXRX:
  case AArch64_LDXRX:
  case AArch64_STLRX:
  case AArch64_LDLARX:
  case AArch64_STLLRX:
   DecodeGPR64RegisterClass(Inst, Rt, Addr, Decoder);
   break;

  case AArch64_STLXPW:
  case AArch64_STXPW:
   DecodeGPR32RegisterClass(Inst, Rs, Addr, Decoder);

  case AArch64_LDAXPW:
  case AArch64_LDXPW:
   DecodeGPR32RegisterClass(Inst, Rt, Addr, Decoder);
   DecodeGPR32RegisterClass(Inst, Rt2, Addr, Decoder);
   break;

  case AArch64_STLXPX:
  case AArch64_STXPX:
   DecodeGPR32RegisterClass(Inst, Rs, Addr, Decoder);

  case AArch64_LDAXPX:
  case AArch64_LDXPX:
   DecodeGPR64RegisterClass(Inst, Rt, Addr, Decoder);
   DecodeGPR64RegisterClass(Inst, Rt2, Addr, Decoder);
   break;
 }

 DecodeGPR64spRegisterClass(Inst, Rn, Addr, Decoder);


 if ((Opcode == AArch64_LDAXPW || Opcode == AArch64_LDXPW ||
  Opcode == AArch64_LDAXPX || Opcode == AArch64_LDXPX) &&
  Rt == Rt2)
  return SoftFail;

 return Success;
}

static DecodeStatus DecodePairLdStInstruction(MCInst *Inst, uint32_t insn,
  uint64_t Addr, const void *Decoder)
{
 unsigned Rt = fieldFromInstruction_4(insn, 0, 5);
 unsigned Rn = fieldFromInstruction_4(insn, 5, 5);
 unsigned Rt2 = fieldFromInstruction_4(insn, 10, 5);
 int32_t offset = fieldFromInstruction_4(insn, 15, 7);
 bool IsLoad = fieldFromInstruction_4(insn, 22, 1) != 0;
 unsigned Opcode = MCInst_getOpcode(Inst);
 bool NeedsDisjointWritebackTransfer = false;



 if (offset & (1 << (7 - 1)))
  offset |= ~((1LL << 7) - 1);


 switch (Opcode) {
  default:
   break;

  case AArch64_LDPXpost:
  case AArch64_STPXpost:
  case AArch64_LDPSWpost:
  case AArch64_LDPXpre:
  case AArch64_STPXpre:
  case AArch64_LDPSWpre:
  case AArch64_LDPWpost:
  case AArch64_STPWpost:
  case AArch64_LDPWpre:
  case AArch64_STPWpre:
  case AArch64_LDPQpost:
  case AArch64_STPQpost:
  case AArch64_LDPQpre:
  case AArch64_STPQpre:
  case AArch64_LDPDpost:
  case AArch64_STPDpost:
  case AArch64_LDPDpre:
  case AArch64_STPDpre:
  case AArch64_LDPSpost:
  case AArch64_STPSpost:
  case AArch64_LDPSpre:
  case AArch64_STPSpre:
   DecodeGPR64spRegisterClass(Inst, Rn, Addr, Decoder);
   break;
 }

 switch (Opcode) {
  default:
   return Fail;

  case AArch64_LDPXpost:
  case AArch64_STPXpost:
  case AArch64_LDPSWpost:
  case AArch64_LDPXpre:
  case AArch64_STPXpre:
  case AArch64_LDPSWpre:
   NeedsDisjointWritebackTransfer = true;

  case AArch64_LDNPXi:
  case AArch64_STNPXi:
  case AArch64_LDPXi:
  case AArch64_STPXi:
  case AArch64_LDPSWi:
   DecodeGPR64RegisterClass(Inst, Rt, Addr, Decoder);
   DecodeGPR64RegisterClass(Inst, Rt2, Addr, Decoder);
   break;

  case AArch64_LDPWpost:
  case AArch64_STPWpost:
  case AArch64_LDPWpre:
  case AArch64_STPWpre:
   NeedsDisjointWritebackTransfer = true;

  case AArch64_LDNPWi:
  case AArch64_STNPWi:
  case AArch64_LDPWi:
  case AArch64_STPWi:
   DecodeGPR32RegisterClass(Inst, Rt, Addr, Decoder);
   DecodeGPR32RegisterClass(Inst, Rt2, Addr, Decoder);
   break;

  case AArch64_LDNPQi:
  case AArch64_STNPQi:
  case AArch64_LDPQpost:
  case AArch64_STPQpost:
  case AArch64_LDPQi:
  case AArch64_STPQi:
  case AArch64_LDPQpre:
  case AArch64_STPQpre:
   DecodeFPR128RegisterClass(Inst, Rt, Addr, Decoder);
   DecodeFPR128RegisterClass(Inst, Rt2, Addr, Decoder);
   break;

  case AArch64_LDNPDi:
  case AArch64_STNPDi:
  case AArch64_LDPDpost:
  case AArch64_STPDpost:
  case AArch64_LDPDi:
  case AArch64_STPDi:
  case AArch64_LDPDpre:
  case AArch64_STPDpre:
   DecodeFPR64RegisterClass(Inst, Rt, Addr, Decoder);
   DecodeFPR64RegisterClass(Inst, Rt2, Addr, Decoder);
   break;

  case AArch64_LDNPSi:
  case AArch64_STNPSi:
  case AArch64_LDPSpost:
  case AArch64_STPSpost:
  case AArch64_LDPSi:
  case AArch64_STPSi:
  case AArch64_LDPSpre:
  case AArch64_STPSpre:
   DecodeFPR32RegisterClass(Inst, Rt, Addr, Decoder);
   DecodeFPR32RegisterClass(Inst, Rt2, Addr, Decoder);
   break;
 }

 DecodeGPR64spRegisterClass(Inst, Rn, Addr, Decoder);
 MCOperand_CreateImm0(Inst, offset);


 if (IsLoad && Rt == Rt2)
  return SoftFail;



 if (NeedsDisjointWritebackTransfer && Rn != 31 && (Rt == Rn || Rt2 == Rn))
  return SoftFail;

 return Success;
}

static DecodeStatus DecodeAddSubERegInstruction(MCInst *Inst,
  uint32_t insn, uint64_t Addr, const void *Decoder)
{
 unsigned Rd, Rn, Rm;
 unsigned extend = fieldFromInstruction_4(insn, 10, 6);
 unsigned shift = extend & 0x7;

 if (shift > 4)
  return Fail;

 Rd = fieldFromInstruction_4(insn, 0, 5);
 Rn = fieldFromInstruction_4(insn, 5, 5);
 Rm = fieldFromInstruction_4(insn, 16, 5);

 switch (MCInst_getOpcode(Inst)) {
  default:
   return Fail;

  case AArch64_ADDWrx:
  case AArch64_SUBWrx:
   DecodeGPR32spRegisterClass(Inst, Rd, Addr, Decoder);
   DecodeGPR32spRegisterClass(Inst, Rn, Addr, Decoder);
   DecodeGPR32RegisterClass(Inst, Rm, Addr, Decoder);
   break;

  case AArch64_ADDSWrx:
  case AArch64_SUBSWrx:
   DecodeGPR32RegisterClass(Inst, Rd, Addr, Decoder);
   DecodeGPR32spRegisterClass(Inst, Rn, Addr, Decoder);
   DecodeGPR32RegisterClass(Inst, Rm, Addr, Decoder);
   break;

  case AArch64_ADDXrx:
  case AArch64_SUBXrx:
   DecodeGPR64spRegisterClass(Inst, Rd, Addr, Decoder);
   DecodeGPR64spRegisterClass(Inst, Rn, Addr, Decoder);
   DecodeGPR32RegisterClass(Inst, Rm, Addr, Decoder);
   break;

  case AArch64_ADDSXrx:
  case AArch64_SUBSXrx:
   DecodeGPR64RegisterClass(Inst, Rd, Addr, Decoder);
   DecodeGPR64spRegisterClass(Inst, Rn, Addr, Decoder);
   DecodeGPR32RegisterClass(Inst, Rm, Addr, Decoder);
   break;

  case AArch64_ADDXrx64:
  case AArch64_SUBXrx64:
   DecodeGPR64spRegisterClass(Inst, Rd, Addr, Decoder);
   DecodeGPR64spRegisterClass(Inst, Rn, Addr, Decoder);
   DecodeGPR64RegisterClass(Inst, Rm, Addr, Decoder);
   break;

  case AArch64_SUBSXrx64:
  case AArch64_ADDSXrx64:
   DecodeGPR64RegisterClass(Inst, Rd, Addr, Decoder);
   DecodeGPR64spRegisterClass(Inst, Rn, Addr, Decoder);
   DecodeGPR64RegisterClass(Inst, Rm, Addr, Decoder);
   break;
 }

 MCOperand_CreateImm0(Inst, extend);

 return Success;
}

static DecodeStatus DecodeLogicalImmInstruction(MCInst *Inst,
  uint32_t insn, uint64_t Addr, const void *Decoder)
{
 unsigned Rd = fieldFromInstruction_4(insn, 0, 5);
 unsigned Rn = fieldFromInstruction_4(insn, 5, 5);
 unsigned Datasize = fieldFromInstruction_4(insn, 31, 1);
 unsigned imm;

 if (Datasize) {
  if (MCInst_getOpcode(Inst) == AArch64_ANDSXri)
   DecodeGPR64RegisterClass(Inst, Rd, Addr, Decoder);
  else
   DecodeGPR64spRegisterClass(Inst, Rd, Addr, Decoder);

  DecodeGPR64RegisterClass(Inst, Rn, Addr, Decoder);

  imm = fieldFromInstruction_4(insn, 10, 13);
  if (!AArch64_AM_isValidDecodeLogicalImmediate(imm, 64))
   return Fail;
 } else {
  if (MCInst_getOpcode(Inst) == AArch64_ANDSWri)
   DecodeGPR32RegisterClass(Inst, Rd, Addr, Decoder);
  else
   DecodeGPR32spRegisterClass(Inst, Rd, Addr, Decoder);

  DecodeGPR32RegisterClass(Inst, Rn, Addr, Decoder);

  imm = fieldFromInstruction_4(insn, 10, 12);
  if (!AArch64_AM_isValidDecodeLogicalImmediate(imm, 32))
   return Fail;
 }

 MCOperand_CreateImm0(Inst, imm);

 return Success;
}

static DecodeStatus DecodeModImmInstruction(MCInst *Inst, uint32_t insn,
  uint64_t Addr, const void *Decoder)
{
 unsigned Rd = fieldFromInstruction_4(insn, 0, 5);
 unsigned cmode = fieldFromInstruction_4(insn, 12, 4);
 unsigned imm = fieldFromInstruction_4(insn, 16, 3) << 5;
 imm |= fieldFromInstruction_4(insn, 5, 5);

 if (MCInst_getOpcode(Inst) == AArch64_MOVID)
  DecodeFPR64RegisterClass(Inst, Rd, Addr, Decoder);
 else
  DecodeVectorRegisterClass(Inst, Rd, Addr, Decoder);

 MCOperand_CreateImm0(Inst, imm);

 switch (MCInst_getOpcode(Inst)) {
  default:
   break;

  case AArch64_MOVIv4i16:
  case AArch64_MOVIv8i16:
  case AArch64_MVNIv4i16:
  case AArch64_MVNIv8i16:
  case AArch64_MOVIv2i32:
  case AArch64_MOVIv4i32:
  case AArch64_MVNIv2i32:
  case AArch64_MVNIv4i32:
   MCOperand_CreateImm0(Inst, (cmode & 6) << 2);
   break;

  case AArch64_MOVIv2s_msl:
  case AArch64_MOVIv4s_msl:
  case AArch64_MVNIv2s_msl:
  case AArch64_MVNIv4s_msl:
   MCOperand_CreateImm0(Inst, cmode & 1 ? 0x110 : 0x108);
   break;
 }

 return Success;
}

static DecodeStatus DecodeModImmTiedInstruction(MCInst *Inst,
  uint32_t insn, uint64_t Addr, const void *Decoder)
{
 unsigned Rd = fieldFromInstruction_4(insn, 0, 5);
 unsigned cmode = fieldFromInstruction_4(insn, 12, 4);
 unsigned imm = fieldFromInstruction_4(insn, 16, 3) << 5;
 imm |= fieldFromInstruction_4(insn, 5, 5);


 DecodeVectorRegisterClass(Inst, Rd, Addr, Decoder);
 DecodeVectorRegisterClass(Inst, Rd, Addr, Decoder);

 MCOperand_CreateImm0(Inst, imm);
 MCOperand_CreateImm0(Inst, (cmode & 6) << 2);

 return Success;
}

static DecodeStatus DecodeAdrInstruction(MCInst *Inst, uint32_t insn,
  uint64_t Addr, const void *Decoder)
{
 unsigned Rd = fieldFromInstruction_4(insn, 0, 5);
 int64_t imm = fieldFromInstruction_4(insn, 5, 19) << 2;
 imm |= fieldFromInstruction_4(insn, 29, 2);


 if (imm & (1 << (21 - 1)))
  imm |= ~((1LL << 21) - 1);

 DecodeGPR64RegisterClass(Inst, Rd, Addr, Decoder);

 MCOperand_CreateImm0(Inst, imm);

 return Success;
}

static DecodeStatus DecodeBaseAddSubImm(MCInst *Inst, uint32_t insn,
  uint64_t Addr, const void *Decoder)
{
 unsigned Rd = fieldFromInstruction_4(insn, 0, 5);
 unsigned Rn = fieldFromInstruction_4(insn, 5, 5);
 unsigned Imm = fieldFromInstruction_4(insn, 10, 14);
 unsigned S = fieldFromInstruction_4(insn, 29, 1);
 unsigned Datasize = fieldFromInstruction_4(insn, 31, 1);

 unsigned ShifterVal = (Imm >> 12) & 3;
 unsigned ImmVal = Imm & 0xFFF;

 if (ShifterVal != 0 && ShifterVal != 1)
  return Fail;

 if (Datasize) {
  if (Rd == 31 && !S)
   DecodeGPR64spRegisterClass(Inst, Rd, Addr, Decoder);
  else
   DecodeGPR64RegisterClass(Inst, Rd, Addr, Decoder);

  DecodeGPR64spRegisterClass(Inst, Rn, Addr, Decoder);
 } else {
  if (Rd == 31 && !S)
   DecodeGPR32spRegisterClass(Inst, Rd, Addr, Decoder);
  else
   DecodeGPR32RegisterClass(Inst, Rd, Addr, Decoder);

  DecodeGPR32spRegisterClass(Inst, Rn, Addr, Decoder);
 }


 MCOperand_CreateImm0(Inst, ImmVal);
 MCOperand_CreateImm0(Inst, 12 * ShifterVal);

 return Success;
}

static DecodeStatus DecodeUnconditionalBranch(MCInst *Inst, uint32_t insn,
  uint64_t Addr, const void *Decoder)
{
 int64_t imm = fieldFromInstruction_4(insn, 0, 26);


 if (imm & (1 << (26 - 1)))
  imm |= ~((1LL << 26) - 1);


 MCOperand_CreateImm0(Inst, imm);

 return Success;
}

static DecodeStatus DecodeSystemPStateInstruction(MCInst *Inst,
  uint32_t insn, uint64_t Addr, const void *Decoder)
{
 uint32_t op1 = fieldFromInstruction_4(insn, 16, 3);
 uint32_t op2 = fieldFromInstruction_4(insn, 5, 3);
 uint32_t crm = fieldFromInstruction_4(insn, 8, 4);
 uint32_t pstate_field = (op1 << 3) | op2;

 if ((pstate_field == AArch64PState_PAN ||
  pstate_field == AArch64PState_UAO) && crm > 1)
  return Fail;

 MCOperand_CreateImm0(Inst, pstate_field);
 MCOperand_CreateImm0(Inst, crm);

 if (lookupPStateByEncoding(pstate_field))
  return Success;

 return Fail;
}

static DecodeStatus DecodeTestAndBranch(MCInst *Inst, uint32_t insn,
  uint64_t Addr, const void *Decoder)
{
 uint32_t Rt = fieldFromInstruction_4(insn, 0, 5);
 uint32_t bit = fieldFromInstruction_4(insn, 31, 1) << 5;
 uint64_t dst = fieldFromInstruction_4(insn, 5, 14);

 bit |= fieldFromInstruction_4(insn, 19, 5);


 if (dst & (1 << (14 - 1)))
  dst |= ~((1LL << 14) - 1);

 if (fieldFromInstruction_4(insn, 31, 1) == 0)
  DecodeGPR32RegisterClass(Inst, Rt, Addr, Decoder);
 else
  DecodeGPR64RegisterClass(Inst, Rt, Addr, Decoder);

 MCOperand_CreateImm0(Inst, bit);


 MCOperand_CreateImm0(Inst, dst);

 return Success;
}

static DecodeStatus DecodeGPRSeqPairsClassRegisterClass(MCInst *Inst,
  unsigned RegClassID, unsigned RegNo, uint64_t Addr, const void *Decoder)
{
 unsigned Register;


 if (RegNo & 0x1)
  return Fail;

 Register = AArch64MCRegisterClasses[RegClassID].RegsBegin[RegNo];
 MCOperand_CreateReg0(Inst, Register);

 return Success;
}

static DecodeStatus DecodeWSeqPairsClassRegisterClass(MCInst *Inst,
  unsigned RegNo, uint64_t Addr, const void *Decoder)
{
 return DecodeGPRSeqPairsClassRegisterClass(Inst,
   AArch64_WSeqPairsClassRegClassID, RegNo, Addr, Decoder);
}

static DecodeStatus DecodeXSeqPairsClassRegisterClass(MCInst *Inst,
  unsigned RegNo, uint64_t Addr, const void *Decoder)
{
 return DecodeGPRSeqPairsClassRegisterClass(Inst,
   AArch64_XSeqPairsClassRegClassID, RegNo, Addr, Decoder);
}

static DecodeStatus DecodeSVELogicalImmInstruction(MCInst *Inst, uint32_t insn,
  uint64_t Addr, const void *Decoder)
{
 unsigned Zdn = fieldFromInstruction_4(insn, 0, 5);
 unsigned imm = fieldFromInstruction_4(insn, 5, 13);

 if (!AArch64_AM_isValidDecodeLogicalImmediate(imm, 64))
  return Fail;


 DecodeZPRRegisterClass(Inst, Zdn, Addr, Decoder);
 if (MCInst_getOpcode(Inst) != AArch64_DUPM_ZI)
  DecodeZPRRegisterClass(Inst, Zdn, Addr, Decoder);

 MCOperand_CreateImm0(Inst, imm);

 return Success;
}

static DecodeStatus DecodeSImm(MCInst *Inst, uint64_t Imm, uint64_t Address,
  const void *Decoder, int Bits)
{
 if (Imm & ~((1LL << Bits) - 1))
  return Fail;


 if (Imm & (1 << (Bits - 1)))
  Imm |= ~((1LL << Bits) - 1);

 MCOperand_CreateImm0(Inst, Imm);

 return Success;
}


static DecodeStatus DecodeImm8OptLsl(MCInst *Inst, unsigned Imm, uint64_t Addr,
  const void *Decoder, int ElementWidth)
{
 unsigned Val = (uint8_t)Imm;
 unsigned Shift = (Imm & 0x100) ? 8 : 0;

 if (ElementWidth == 8 && Shift)
  return Fail;

 MCOperand_CreateImm0(Inst, Val);
 MCOperand_CreateImm0(Inst, Shift);

 return Success;
}


static DecodeStatus DecodeSVEIncDecImm(MCInst *Inst, unsigned Imm,
  uint64_t Addr, const void *Decoder)
{
 MCOperand_CreateImm0(Inst, Imm + 1);

 return Success;
}

void AArch64_init(MCRegisterInfo *MRI)
{
# 1983 "project/radare2/shlr/capstone/arch/AArch64/AArch64Disassembler.c"
 MCRegisterInfo_InitMCRegisterInfo(MRI, AArch64RegDesc, 661,
   0, 0,
   AArch64MCRegisterClasses, 100,
   0, 0, AArch64RegDiffLists,
   0,
   AArch64SubRegIdxLists, 100,
   0);
}

#endif