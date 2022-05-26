# 1 "project/radare2/shlr/capstone/arch/AArch64/AArch64BaseInfo.c"
# 17 "project/radare2/shlr/capstone/arch/AArch64/AArch64BaseInfo.c"
#ifdef CAPSTONE_HAS_ARM64

#if defined (WIN32) || defined (WIN64) || defined (_WIN32) || defined (_WIN64)
#pragma warning(disable:4996)
#pragma warning(disable:28719)
#endif

#include "../../utils.h"

#include <stdio.h>
#include <stdlib.h>

#include "AArch64BaseInfo.h"

#include "AArch64GenSystemOperands.inc"



static void utostr(uint64_t X, bool isNeg, char *result)
{
 char Buffer[22];
 char *BufPtr = Buffer + 21;

 Buffer[21] = '\0';
 if (X == 0) *--BufPtr = '0';

 while (X) {
  *--BufPtr = X % 10 + '0';
  X /= 10;
 }

 if (isNeg) *--BufPtr = '-';


 strncpy(result, BufPtr, sizeof(Buffer));
}


void AArch64SysReg_genericRegisterString(uint32_t Bits, char *result)
{

 char Op0Str[32], Op1Str[32], CRnStr[32], CRmStr[32], Op2Str[32];
 int dummy;
 uint32_t Op0 = (Bits >> 14) & 0x3;
 uint32_t Op1 = (Bits >> 11) & 0x7;
 uint32_t CRn = (Bits >> 7) & 0xf;
 uint32_t CRm = (Bits >> 3) & 0xf;
 uint32_t Op2 = Bits & 0x7;

 utostr(Op0, false, Op0Str);
 utostr(Op1, false, Op1Str);
 utostr(Op2, false, Op2Str);
 utostr(CRn, false, CRnStr);
 utostr(CRm, false, CRmStr);

 dummy = cs_snprintf(result, 128, "s%s_%s_c%s_c%s_%s",
   Op0Str, Op1Str, CRnStr, CRmStr, Op2Str);
 (void)dummy;
}

#endif
