# 1 "project/radare2/libr/asm/arch/arm/v35arm64/arch-arm64/disassembler/pcode.c"
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#include "decode.h"
#include "pcode.h"

int BitCount(uint32_t x)
{
 int result = 0;
 while(x) {
  if(x&1) result += 1;
  x>>=1;
 }
 return result;
}

bool BFXPreferred(uint32_t sf, uint32_t uns, uint32_t imms, uint32_t immr)
{

 if(imms < immr)
  return false;


 if(imms == ((sf<<5)|0x1F))
  return false;


 if(immr == 0) {

  if(sf==0 && (imms==7 || imms==15))
   return false;


  if((sf==1 && uns==0) && (imms==7 || imms==15 || imms==31))
   return false;
 }


 return true;
}

uint64_t rotate_right(uint64_t x, unsigned width, unsigned amount)
{
 amount = amount % width;
 x = (x >> amount) | (x << (width-amount));
 x = (width < 64) ? x & (((uint64_t)1<<width)-1) : x;
 return x;
}

DecodeBitMasks_ReturnType DecodeBitMasks(uint8_t immN, uint8_t imms, uint8_t immr)
{
 int ones_nbits = 0;
 if(immN==1) ones_nbits = 6;
 else if((imms & 0x3E)==0x3C) ones_nbits=1;
 else if((imms & 0x3C)==0x38) ones_nbits=2;
 else if((imms & 0x38)==0x30) ones_nbits=3;
 else if((imms & 0x30)==0x20) ones_nbits=4;
 else if((imms & 0x20)==0) ones_nbits=5;



 int ones_n = (imms & ((1<<ones_nbits)-1))+1;
 uint64_t result = ((uint64_t)1 << ones_n)-1;


 int elem_width = 1<<ones_nbits;
 result = rotate_right(result, elem_width, immr);


 while(elem_width < 64) {
  result = (result << elem_width) | result;
  elem_width *= 2;
 }

 DecodeBitMasks_ReturnType dbmrt;

 dbmrt.wmask = result;
 dbmrt.tmask = result;
 return dbmrt;
}



bool MoveWidePreferred(uint32_t sf, uint32_t immN, uint32_t immS, uint32_t immR)
{
 DecodeBitMasks_ReturnType dbmrt = DecodeBitMasks(sf, immS, immR);
 uint64_t imm = dbmrt.wmask;


 if(sf == 0) imm &= 0xffffffff;
 if (((imm & 0xffffffffffff0000) == 0) ||
  ((imm & 0xffffffff0000ffff) == 0) ||
  ((imm & 0xffff0000ffffffff) == 0) ||
  ((imm & 0x0000ffffffffffff) == 0))
  return true;


 imm = ~imm;
 if (sf == 0) imm &= 0xffffffff;
 if (((imm & 0xffffffffffff0000) == 0) ||
  ((imm & 0xffffffff0000ffff) == 0) ||
  ((imm & 0xffff0000ffffffff) == 0) ||
  ((imm & 0x0000ffffffffffff) == 0))
  return true;

 return false;
}

int HighestSetBit(uint64_t x)
{
 for(int i=63; i>=0 && x; --i) {
  if(x & 0x8000000000000000)
   return i;
  x <<= 1;
 }

 return -1;
}

int LowestSetBit(uint64_t x)
{
 for(int i=0; i<64; ++i) {
  if(x & 1)
   return i;
  x >>= 1;
 }

 return -1;
}

bool SVEMoveMaskPreferred(uint32_t imm13)
{

 return true;
}

enum ShiftType DecodeRegExtend(uint8_t op)
{
 switch(op & 7) {
  case 0b000: return ShiftType_UXTB;
  case 0b001: return ShiftType_UXTH;
  case 0b010: return ShiftType_UXTW;
  case 0b011: return ShiftType_UXTX;
  case 0b100: return ShiftType_SXTB;
  case 0b101: return ShiftType_SXTH;
  case 0b110: return ShiftType_SXTW;
  case 0b111: return ShiftType_SXTX;
  default: return ShiftType_NONE;
 }
}

enum ShiftType DecodeShift(uint8_t op)
{
 switch(op & 3) {
  case 0b00: return ShiftType_LSL;
  case 0b01: return ShiftType_LSR;
  case 0b10: return ShiftType_ASR;
  case 0b11: return ShiftType_ROR;
  default: return ShiftType_NONE;
 }
}

enum SystemOp SysOp(uint32_t op1, uint32_t CRn, uint32_t CRm, uint32_t op2)
{
 uint32_t tmp = (op1<<11)|(CRn<<7)|(CRm<<3)|op2;

 switch(tmp) {
  case 0b00001111000000: return Sys_AT;
  case 0b10001111000000: return Sys_AT;
  case 0b11001111000000: return Sys_AT;
  case 0b00001111000001: return Sys_AT;
  case 0b00001111001001: return Sys_AT;
  case 0b10001111000001: return Sys_AT;
  case 0b11001111000001: return Sys_AT;
  case 0b00001111000010: return Sys_AT;
  case 0b00001111000011: return Sys_AT;
  case 0b10001111000100: return Sys_AT;
  case 0b10001111000101: return Sys_AT;
  case 0b10001111000110: return Sys_AT;
  case 0b10001111000111: return Sys_AT;
  case 0b01101110100001: return Sys_DC;
  case 0b00001110110001: return Sys_DC;
  case 0b00001110110010: return Sys_DC;
  case 0b01101111010001: return Sys_DC;
  case 0b00001111010010: return Sys_DC;
  case 0b01101111011001: return Sys_DC;
  case 0b01101111110001: return Sys_DC;
  case 0b00001111110010: return Sys_DC;
  case 0b01101111101001: return Sys_DC;
  case 0b00001110001000: return Sys_IC;
  case 0b00001110101000: return Sys_IC;
  case 0b01101110101001: return Sys_IC;
  case 0b10010000000001: return Sys_TLBI;
  case 0b10010000000101: return Sys_TLBI;
  case 0b00010000011000: return Sys_TLBI;
  case 0b10010000011000: return Sys_TLBI;
  case 0b11010000011000: return Sys_TLBI;
  case 0b00010000011001: return Sys_TLBI;
  case 0b10010000011001: return Sys_TLBI;
  case 0b11010000011001: return Sys_TLBI;
  case 0b00010000011010: return Sys_TLBI;
  case 0b00010000011011: return Sys_TLBI;
  case 0b10010000011100: return Sys_TLBI;
  case 0b00010000011101: return Sys_TLBI;
  case 0b10010000011101: return Sys_TLBI;
  case 0b11010000011101: return Sys_TLBI;
  case 0b10010000011110: return Sys_TLBI;
  case 0b00010000011111: return Sys_TLBI;
  case 0b10010000100001: return Sys_TLBI;
  case 0b10010000100101: return Sys_TLBI;
  case 0b00010000111000: return Sys_TLBI;
  case 0b10010000111000: return Sys_TLBI;
  case 0b11010000111000: return Sys_TLBI;
  case 0b00010000111001: return Sys_TLBI;
  case 0b10010000111001: return Sys_TLBI;
  case 0b11010000111001: return Sys_TLBI;
  case 0b00010000111010: return Sys_TLBI;
  case 0b00010000111011: return Sys_TLBI;
  case 0b10010000111100: return Sys_TLBI;
  case 0b00010000111101: return Sys_TLBI;
  case 0b10010000111101: return Sys_TLBI;
  case 0b11010000111101: return Sys_TLBI;
  case 0b10010000111110: return Sys_TLBI;
  case 0b00010000111111: return Sys_TLBI;
  default: return Sys_ERROR;
 }
}

uint32_t UInt(uint32_t foo)
{
 return foo;
}

uint32_t BitSlice(uint64_t foo, int hi, int lo)
{
 int width = hi-lo+1;
 uint64_t mask = (1<<width)-1;
 return (foo >> lo) & mask;
}

bool IsZero(uint64_t foo)
{
 return foo==0;
}

bool IsOnes(uint64_t foo, int width)
{
 return foo == (1<<width)-1;
}




uint64_t Replicate(uint64_t val, uint8_t times, uint64_t width)
{

 switch(times)
 {
  case 64:
   val |= val << width;
   width <<= 1;
  case 32:
   val |= val << width;
   width <<= 1;
  case 16:
   val |= val << width;
   width <<= 1;
  case 8:
   val |= val << width;
   width <<= 1;
  case 4:
   val |= val << width;
   width <<= 1;
  case 2:
   val |= val << width;
  case 1:
   return val;
  case 0:
   return 0;
  default:
   break;
 }

 uint64_t orig = val;
 for(size_t i = 0; i < times; ++i)
 {
  val <<= width;
  val |= orig;
 }
 return val;
}




uint64_t AdvSIMDExpandImm(uint8_t op, uint8_t cmode, uint64_t imm8)
{
 uint64_t imm64 = 0;
 switch((cmode >> 1) & 0b111)
 {
  case 0b000:
   imm64 = Replicate(imm8, 2, 32);
   break;
  case 0b001:
   imm64 = Replicate(imm8 << 8, 2, 32);
   break;
  case 0b010:
   imm64 = Replicate(imm8 << 16, 2, 32);
   break;
  case 0b011:
   imm64 = Replicate(imm8 << 24, 2, 32);
   break;
  case 0b100:
   imm64 = Replicate(imm8, 4, 16);
   break;
  case 0b101:
   imm64 = Replicate(imm8 << 8, 4, 16);
   break;
  case 0b110:
   imm64 = Replicate(imm8 << (8 << (cmode & 0b1)), 2, 32);
   break;
  case 0b111:
   switch(((cmode & 0b1) << 1) | op)
   {
    case 0b00:
     imm64 = Replicate(imm8, 8, 8);
     break;
    case 0b01:
#if 0
     imm8a = Replicate((imm8 >> 7) & 0b1, 8, 1);
     imm8b = Replicate((imm8 >> 6) & 0b1, 8, 1);
     imm8c = Replicate((imm8 >> 5) & 0b1, 8, 1);
     imm8d = Replicate((imm8 >> 4) & 0b1, 8, 1);
     imm8e = Replicate((imm8 >> 3) & 0b1, 8, 1);
     imm8f = Replicate((imm8 >> 2) & 0b1, 8, 1);
     imm8g = Replicate((imm8 >> 1) & 0b1, 8, 1);
     imm8h = Replicate((imm8 ) & 0b1, 8, 1);
     imm64 = (imm8a << 0x38) | (imm8b << 0x30) | (imm8c << 0x28) | (imm8d << 0x20) | (imm8e << 0x18) | (imm8f << 0x10) | (imm8g << 0x08) | imm8h;
#else
     imm64 = imm8 | (imm8 << (0x08-1)) | (imm8 << (0x10-2)) | (imm8 << (0x18-3)) | (imm8 << (0x20-4)) | (imm8 << (0x28-5)) | (imm8 << (0x30-6)) | (imm8 << (0x38-7));
     imm64 &= 0x0101010101010101;
     imm64 = Replicate(imm64, 8, 1);
#endif
     break;
    case 0b10:
     imm64 = Replicate((((imm8 & 0xc0) ^ 0x80) << 24) | (Replicate((imm8 >> 6) & 0b1, 5, 1) << 25) | ((imm8 & 0x3f) << 19), 2, 32);
     break;
    case 0b11:
     imm64 = (((imm8 & 0xc0) ^ 0x80) << 56) | (Replicate((imm8 >> 6) & 0b1, 8, 1) << 54) | ((imm8 & 0x3f) << 48);
     break;
   }
   break;
 }
 return imm64;
}

bool BTypeCompatible_BTI(uint8_t hintcode, uint8_t pstate_btype)
{
 switch(hintcode & 3) {
  case 0b00: return false;
  case 0b01: return pstate_btype != 0b11;
  case 0b10: return pstate_btype != 0b10;
  case 0b11: return true;
 }

 return false;
}

bool BTypeCompatible_PACIXSP()
{

 return true;
}

enum FPRounding FPDecodeRounding(uint8_t RMode)
{
 switch(RMode & 3) {
  case 0b00: return FPRounding_TIEEVEN;
  case 0b01: return FPRounding_POSINF;
  case 0b10: return FPRounding_NEGINF;
  case 0b11: return FPRounding_ZERO;
 }

 return FPRounding_ERROR;
}

enum FPRounding FPRoundingMode(uint64_t fpcr)
{
 return FPDecodeRounding(FPCR_GET_RMode(fpcr));
}

bool HaltingAllowed(void)
{

 return true;
}


void SystemAccessTrap(uint32_t a, uint32_t b)
{

 while(0);
}

void CheckSystemAccess(uint8_t a, uint8_t b, uint8_t c, uint8_t d, uint8_t e, uint8_t f, uint8_t g)
{

 while(0);
}



uint64_t VFPExpandImm(unsigned char byte, unsigned N)
{


 uint64_t Result;
 unsigned bit6 = SLICE(byte, 6, 6);
 if (N == 32) {
  Result = SLICE(byte, 7, 7) << 31 | SLICE(byte, 5, 0) << 19;
 if (bit6)
  Result |= 0x1f << 25;
 else
  Result |= 0x1 << 30;
 }
 else {
  Result = (uint64_t)SLICE(byte, 7, 7) << 63 |
  (uint64_t)SLICE(byte, 5, 0) << 48;
  if (bit6)
   Result |= 0xffULL << 54;
  else
   Result |= 0x1ULL << 62;
 }


 return Result;
}

bool EL2Enabled(void)
{

 return true;
}

bool ELUsingAArch32(uint8_t x)
{

 return true;
}

uint64_t FPOne(bool sign, int N)
{

 int E, F, exp;

 switch(N) {
  case 16: E=5;
  case 32: E=8;
  default: E=11;
 }

 F = N - (E+1);
 exp = BITMASK(E-1) << 1;
 return (sign<<(E-1 + F)) | (exp<<F);
}

uint64_t FPTwo(bool sign, int N)
{

 int E, exp;

 switch(N) {
  case 16: E=5;
  case 32: E=8;
  default: E=11;
 }

#if UNUSED
 int F = N - (E+1);
#endif
 exp = 1<<(E-1);
 return (sign<<E)|exp;
}

uint64_t FPPointFive(bool sign, int N)
{

 int E, F, exp;

 switch(N) {
  case 16: E=5;
  case 32: E=8;
  default: E=11;
 }

 F = N - (E+1);
 exp = BITMASK(E-2) << 1;
 return (sign<<(E-2 + F)) | (exp<<F);
}

uint64_t SignExtend(uint64_t x, int width)
{
 uint64_t result = -1;

 if(x & ((uint64_t)1 << (width-1))) {
  result ^= (((uint64_t)1<<width)-1);
  result |= x;
 }
 else {
  result = x;
 }

 return result;
}

enum Constraint ConstrainUnpredictable(enum Unpredictable u)
{
 switch(u) {
  case Unpredictable_VMSR: return Constraint_UNDEF;
  case Unpredictable_WBOVERLAPLD: return Constraint_WBSUPPRESS;
  case Unpredictable_WBOVERLAPST: return Constraint_NONE;
  case Unpredictable_LDPOVERLAP: return Constraint_UNDEF;
  case Unpredictable_BASEOVERLAP: return Constraint_NONE;
  case Unpredictable_DATAOVERLAP: return Constraint_NONE;
  case Unpredictable_DEVPAGE2: return Constraint_FAULT;
  case Unpredictable_DEVICETAGSTORE: return Constraint_NONE;
  case Unpredictable_INSTRDEVICE: return Constraint_NONE;
  case Unpredictable_RESCPACR: return Constraint_TRUE;
  case Unpredictable_RESMAIR: return Constraint_UNKNOWN;
  case Unpredictable_RESTEXCB: return Constraint_UNKNOWN;
  case Unpredictable_RESDACR: return Constraint_UNKNOWN;
  case Unpredictable_RESPRRR: return Constraint_UNKNOWN;
  case Unpredictable_RESVTCRS: return Constraint_UNKNOWN;
  case Unpredictable_RESTnSZ: return Constraint_FORCE;
  case Unpredictable_OORTnSZ: return Constraint_FORCE;
  case Unpredictable_LARGEIPA: return Constraint_FORCE;
  case Unpredictable_ESRCONDPASS: return Constraint_FALSE;
  case Unpredictable_ILZEROIT: return Constraint_FALSE;
  case Unpredictable_ILZEROT: return Constraint_FALSE;
  case Unpredictable_BPVECTORCATCHPRI: return Constraint_TRUE;
  case Unpredictable_VCMATCHHALF: return Constraint_FALSE;
  case Unpredictable_VCMATCHDAPA: return Constraint_FALSE;
  case Unpredictable_WPMASKANDBAS: return Constraint_FALSE;
  case Unpredictable_WPBASCONTIGUOUS: return Constraint_FALSE;
  case Unpredictable_RESWPMASK: return Constraint_DISABLED;
  case Unpredictable_WPMASKEDBITS: return Constraint_FALSE;
  case Unpredictable_RESBPWPCTRL: return Constraint_DISABLED;
  case Unpredictable_BPNOTIMPL: return Constraint_DISABLED;
  case Unpredictable_RESBPTYPE: return Constraint_DISABLED;
  case Unpredictable_BPNOTCTXCMP: return Constraint_DISABLED;
  case Unpredictable_BPMATCHHALF: return Constraint_FALSE;
  case Unpredictable_BPMISMATCHHALF: return Constraint_FALSE;
  case Unpredictable_RESTARTALIGNPC: return Constraint_FALSE;
  case Unpredictable_RESTARTZEROUPPERPC: return Constraint_TRUE;
  case Unpredictable_ZEROUPPER: return Constraint_TRUE;
  case Unpredictable_ERETZEROUPPERPC: return Constraint_TRUE;
  case Unpredictable_A32FORCEALIGNPC: return Constraint_FALSE;
  case Unpredictable_SMD: return Constraint_UNDEF;
  case Unpredictable_NONFAULT: return Constraint_FALSE;
  case Unpredictable_SVEZEROUPPER: return Constraint_TRUE;
  case Unpredictable_SVELDNFDATA: return Constraint_TRUE;
  case Unpredictable_SVELDNFZERO: return Constraint_TRUE;
  case Unpredictable_CHECKSPNONEACTIVE: return Constraint_TRUE;
  case Unpredictable_AFUPDATE: return Constraint_TRUE;
  case Unpredictable_IESBinDebug: return Constraint_TRUE;
  case Unpredictable_BADPMSFCR: return Constraint_TRUE;
  case Unpredictable_ZEROBTYPE: return Constraint_TRUE;
  case Unpredictable_CLEARERRITEZERO: return Constraint_FALSE;
  case Unpredictable_ALUEXCEPTIONRETURN: return Constraint_UNDEF;
  case Unpredictable_DBGxVR_RESS: return Constraint_FALSE;
  case Unpredictable_WFxTDEBUG: return Constraint_FALSE;
  case Unpredictable_LS64UNSUPPORTED: return Constraint_LIMITED_ATOMICITY;
  default:
   return Constraint_ERROR;
 }
}
