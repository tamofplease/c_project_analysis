# 1 "project/radare2/libr/asm/arch/arm/v35arm64/arch-arm64/disassembler/decode1.c"

#include <stddef.h>
#include <stdbool.h>

#include "operations.h"
#include "encodings_dec.h"
#include "decode.h"
#include "decode2.h"
#include "pcode.h"

int decode_iclass_sve_int_bin_pred_log(context *ctx, Instruction *dec)
{
 uint32_t opc=(INSWORD>>16)&7;
 if(!opc) return orr_z_p_zz(ctx, dec);
 if(opc==1) return eor_z_p_zz(ctx, dec);
 if(opc==2) return and_z_p_zz(ctx, dec);
 if(opc==3) return bic_z_p_zz(ctx, dec);
 if((opc&4)==4) UNALLOCATED(ENC_UNALLOCATED_134);
 UNMATCHED;
}

int decode_iclass_sve_int_bin_pred_arit_0(context *ctx, Instruction *dec)
{
 uint32_t opc=(INSWORD>>16)&7;
 if(!opc) return add_z_p_zz(ctx, dec);
 if(opc==1) return sub_z_p_zz(ctx, dec);
 if(opc==2) UNALLOCATED(ENC_UNALLOCATED_120);
 if(opc==3) return subr_z_p_zz(ctx, dec);
 if((opc&4)==4) UNALLOCATED(ENC_UNALLOCATED_123);
 UNMATCHED;
}

int decode_iclass_sve_int_bin_pred_div(context *ctx, Instruction *dec)
{
 uint32_t R=(INSWORD>>17)&1, U=(INSWORD>>16)&1;
 if(!R && !U) return sdiv_z_p_zz(ctx, dec);
 if(!R && U) return udiv_z_p_zz(ctx, dec);
 if(R && !U) return sdivr_z_p_zz(ctx, dec);
 if(R && U) return udivr_z_p_zz(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_int_bin_pred_arit_1(context *ctx, Instruction *dec)
{
 uint32_t opc=(INSWORD>>17)&3, U=(INSWORD>>16)&1;
 if(!opc && !U) return smax_z_p_zz(ctx, dec);
 if(!opc && U) return umax_z_p_zz(ctx, dec);
 if(opc==1 && !U) return smin_z_p_zz(ctx, dec);
 if(opc==1 && U) return umin_z_p_zz(ctx, dec);
 if(opc==2 && !U) return sabd_z_p_zz(ctx, dec);
 if(opc==2 && U) return uabd_z_p_zz(ctx, dec);
 if(opc==3) UNALLOCATED(ENC_UNALLOCATED_126);
 UNMATCHED;
}

int decode_iclass_sve_int_bin_pred_arit_2(context *ctx, Instruction *dec)
{
 uint32_t H=(INSWORD>>17)&1, U=(INSWORD>>16)&1;
 if(!H && !U) return mul_z_p_zz(ctx, dec);
 if(!H && U) UNALLOCATED(ENC_UNALLOCATED_128);
 if(H && !U) return smulh_z_p_zz(ctx, dec);
 if(H && U) return umulh_z_p_zz(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_int_reduce_2(context *ctx, Instruction *dec)
{
 uint32_t opc=(INSWORD>>16)&3;
 if(!opc) return orv_r_p_z(ctx, dec);
 if(opc==1) return eorv_r_p_z(ctx, dec);
 if(opc==2) return andv_r_p_z(ctx, dec);
 if(opc==3) UNALLOCATED(ENC_UNALLOCATED_133);
 UNMATCHED;
}

int decode_iclass_sve_int_movprfx_pred(context *ctx, Instruction *dec)
{
 uint32_t opc=(INSWORD>>17)&3;
 if(!opc) return movprfx_z_p_z(ctx, dec);
 if(opc==1) UNALLOCATED(ENC_UNALLOCATED_129);
 if((opc&2)==2) UNALLOCATED(ENC_UNALLOCATED_131);
 UNMATCHED;
}

int decode_iclass_sve_int_reduce_0(context *ctx, Instruction *dec)
{
 uint32_t op=(INSWORD>>17)&1, U=(INSWORD>>16)&1;
 if(!op && !U) return saddv_r_p_z(ctx, dec);
 if(!op && U) return uaddv_r_p_z(ctx, dec);
 if(op) UNALLOCATED(ENC_UNALLOCATED_121);
 UNMATCHED;
}

int decode_iclass_sve_int_reduce_1(context *ctx, Instruction *dec)
{
 uint32_t op=(INSWORD>>17)&1, U=(INSWORD>>16)&1;
 if(!op && !U) return smaxv_r_p_z(ctx, dec);
 if(!op && U) return umaxv_r_p_z(ctx, dec);
 if(op && !U) return sminv_r_p_z(ctx, dec);
 if(op && U) return uminv_r_p_z(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_int_bin_pred_shift_0(context *ctx, Instruction *dec)
{
 uint32_t opc=(INSWORD>>18)&3, L=(INSWORD>>17)&1, U=(INSWORD>>16)&1;
 if(!opc && !L && !U) return asr_z_p_zi(ctx, dec);
 if(!opc && !L && U) return lsr_z_p_zi(ctx, dec);
 if(!opc && L && !U) UNALLOCATED(ENC_UNALLOCATED_122);
 if(!opc && L && U) return lsl_z_p_zi(ctx, dec);
 if(opc==1 && !L && !U) return asrd_z_p_zi(ctx, dec);
 if(opc==1 && !L && U) UNALLOCATED(ENC_UNALLOCATED_124);
 if(opc==1 && L && !U) return sqshl_z_p_zi(ctx, dec);
 if(opc==1 && L && U) return uqshl_z_p_zi(ctx, dec);
 if(opc==3 && !L && !U) return srshr_z_p_zi(ctx, dec);
 if(opc==3 && !L && U) return urshr_z_p_zi(ctx, dec);
 if(opc==3 && L && !U) UNALLOCATED(ENC_UNALLOCATED_127);
 if(opc==3 && L && U) return sqshlu_z_p_zi(ctx, dec);
 if(opc==2) UNALLOCATED(ENC_UNALLOCATED_125);
 UNMATCHED;
}

int decode_iclass_sve_int_bin_pred_shift_1(context *ctx, Instruction *dec)
{
 uint32_t R=(INSWORD>>18)&1, L=(INSWORD>>17)&1, U=(INSWORD>>16)&1;
 if(!R && !L && !U) return asr_z_p_zz(ctx, dec);
 if(!R && !L && U) return lsr_z_p_zz(ctx, dec);
 if(!R && L && U) return lsl_z_p_zz(ctx, dec);
 if(R && !L && !U) return asrr_z_p_zz(ctx, dec);
 if(R && !L && U) return lsrr_z_p_zz(ctx, dec);
 if(R && L && U) return lslr_z_p_zz(ctx, dec);
 if(L && !U) UNALLOCATED(ENC_UNALLOCATED_130);
 UNMATCHED;
}

int decode_iclass_sve_int_bin_pred_shift_2(context *ctx, Instruction *dec)
{
 uint32_t R=(INSWORD>>18)&1, L=(INSWORD>>17)&1, U=(INSWORD>>16)&1;
 if(!R && !L && !U) return asr_z_p_zw(ctx, dec);
 if(!R && !L && U) return lsr_z_p_zw(ctx, dec);
 if(!R && L && !U) UNALLOCATED(ENC_UNALLOCATED_132);
 if(!R && L && U) return lsl_z_p_zw(ctx, dec);
 if(R) UNALLOCATED(ENC_UNALLOCATED_135);
 UNMATCHED;
}

int decode_iclass_barriers(context *ctx, Instruction *dec)
{
 uint32_t CRm=(INSWORD>>8)&15, op2=(INSWORD>>5)&7, Rt=INSWORD&0x1f;
 if(!CRm && op2==3 && Rt==0x1f && HasTME()) return TCOMMIT(ctx, dec);
 if((CRm&3)==2 && op2==1 && Rt==0x1f && HasXS()) return DSB(ctx, dec);
 if((CRm&3)==3 && op2==1 && Rt==0x1f) UNALLOCATED(ENC_UNALLOCATED_14_BARRIERS);
 if(!(CRm&2) && op2==1 && Rt==0x1f) UNALLOCATED(ENC_UNALLOCATED_12_BARRIERS);
 if(op2==1 && Rt!=0x1f) UNALLOCATED(ENC_UNALLOCATED_11_BARRIERS);
 if(op2==2 && Rt==0x1f) return CLREX(ctx, dec);
 if(op2==4 && Rt==0x1f) return DSB(ctx, dec);
 if(op2==5 && Rt==0x1f) return DMB(ctx, dec);
 if(op2==6 && Rt==0x1f) return ISB(ctx, dec);
 if(op2==7 && Rt!=0x1f) UNALLOCATED(ENC_UNALLOCATED_25_BARRIERS);
 if(op2==7 && Rt==0x1f) return SB(ctx, dec);
 if(CRm==1 && op2==3) UNALLOCATED(ENC_UNALLOCATED_17_BARRIERS);
 if((CRm&14)==2 && op2==3) UNALLOCATED(ENC_UNALLOCATED_18_BARRIERS);
 if((CRm&12)==4 && op2==3) UNALLOCATED(ENC_UNALLOCATED_19_BARRIERS);
 if((CRm&8)==8 && op2==3) UNALLOCATED(ENC_UNALLOCATED_20_BARRIERS);
 if(!op2) UNALLOCATED(ENC_UNALLOCATED_10_BARRIERS);
 UNMATCHED;
}

int decode_iclass_compbranch(context *ctx, Instruction *dec)
{
 uint32_t sf=INSWORD>>31, op=(INSWORD>>24)&1;
 if(!sf && !op) return CBZ(ctx, dec);
 if(!sf && op) return CBNZ(ctx, dec);
 if(sf && !op) return CBZ(ctx, dec);
 if(sf && op) return CBNZ(ctx, dec);
 UNMATCHED;
}

int decode_iclass_condbranch(context *ctx, Instruction *dec)
{
 uint32_t o1=(INSWORD>>24)&1, o0=(INSWORD>>4)&1;
 if(!o1 && !o0) return B_cond(ctx, dec);
 if(!o1 && o0) UNALLOCATED(ENC_UNALLOCATED_11_CONDBRANCH);
 if(o1) UNALLOCATED(ENC_UNALLOCATED_12_CONDBRANCH);
 UNMATCHED;
}

int decode_iclass_exception(context *ctx, Instruction *dec)
{
 uint32_t opc=(INSWORD>>21)&7, op2=(INSWORD>>2)&7, LL=INSWORD&3;
 if(!opc && !op2 && !LL) UNALLOCATED(ENC_UNALLOCATED_10_EXCEPTION);
 if(!opc && !op2 && LL==1) return SVC(ctx, dec);
 if(!opc && !op2 && LL==2) return HVC(ctx, dec);
 if(!opc && !op2 && LL==3) return SMC(ctx, dec);
 if(opc==1 && !op2 && !LL) return BRK(ctx, dec);
 if(opc==2 && !op2 && !LL) return HLT(ctx, dec);
 if(opc==3 && !op2 && !LL && HasTME()) return TCANCEL(ctx, dec);
 if(opc==3 && !op2 && LL==1) UNALLOCATED(ENC_UNALLOCATED_21_EXCEPTION);
 if(opc==5 && !op2 && !LL) UNALLOCATED(ENC_UNALLOCATED_24_EXCEPTION);
 if(opc==5 && !op2 && LL==1) return DCPS1(ctx, dec);
 if(opc==5 && !op2 && LL==2) return DCPS2(ctx, dec);
 if(opc==5 && !op2 && LL==3) return DCPS3(ctx, dec);
 if(opc==1 && !op2 && LL&1) UNALLOCATED(ENC_UNALLOCATED_15_EXCEPTION);
 if(opc==1 && !op2 && (LL&2)==2) UNALLOCATED(ENC_UNALLOCATED_16_EXCEPTION);
 if(opc==2 && !op2 && LL&1) UNALLOCATED(ENC_UNALLOCATED_18_EXCEPTION);
 if(opc==2 && !op2 && (LL&2)==2) UNALLOCATED(ENC_UNALLOCATED_19_EXCEPTION);
 if(opc==3 && !op2 && (LL&2)==2) UNALLOCATED(ENC_UNALLOCATED_22_EXCEPTION);
 if(opc==4 && !op2) UNALLOCATED(ENC_UNALLOCATED_23_EXCEPTION);
 if(opc==6 && !op2) UNALLOCATED(ENC_UNALLOCATED_28_EXCEPTION);
 if(opc==7 && !op2) UNALLOCATED(ENC_UNALLOCATED_29_EXCEPTION);
 if(op2==1) UNALLOCATED(ENC_UNALLOCATED_30_EXCEPTION);
 if((op2&6)==2) UNALLOCATED(ENC_UNALLOCATED_31_EXCEPTION);
 if((op2&4)==4) UNALLOCATED(ENC_UNALLOCATED_32_EXCEPTION);
 UNMATCHED;
}

int decode_iclass_hints(context *ctx, Instruction *dec)
{
 uint32_t CRm=(INSWORD>>8)&15, op2=(INSWORD>>5)&7;
 if(!CRm && !op2) return NOP(ctx, dec);
 if(!CRm && op2==1) return YIELD(ctx, dec);
 if(!CRm && op2==2) return WFE(ctx, dec);
 if(!CRm && op2==3) return WFI(ctx, dec);
 if(!CRm && op2==4) return SEV(ctx, dec);
 if(!CRm && op2==5) return SEVL(ctx, dec);
 if(!CRm && op2==6 && HasDGH()) return DGH(ctx, dec);
 if(!CRm && op2==7 && HasPAuth()) return XPAC(ctx, dec);
 if(CRm==1 && !op2 && HasPAuth()) return PACIA(ctx, dec);
 if(CRm==1 && op2==2 && HasPAuth()) return PACIB(ctx, dec);
 if(CRm==1 && op2==4 && HasPAuth()) return AUTIA(ctx, dec);
 if(CRm==1 && op2==6 && HasPAuth()) return AUTIB(ctx, dec);
 if(CRm==2 && !op2 && HasRAS()) return ESB(ctx, dec);
 if(CRm==2 && op2==1 && HasSPE()) return PSB(ctx, dec);
 if(CRm==2 && op2==2 && HasTRF()) return TSB(ctx, dec);
 if(CRm==2 && op2==4) return CSDB(ctx, dec);
 if(CRm==3 && !op2 && HasPAuth()) return PACIA(ctx, dec);
 if(CRm==3 && op2==1 && HasPAuth()) return PACIA(ctx, dec);
 if(CRm==3 && op2==2 && HasPAuth()) return PACIB(ctx, dec);
 if(CRm==3 && op2==3 && HasPAuth()) return PACIB(ctx, dec);
 if(CRm==3 && op2==4 && HasPAuth()) return AUTIA(ctx, dec);
 if(CRm==3 && op2==5 && HasPAuth()) return AUTIA(ctx, dec);
 if(CRm==3 && op2==6 && HasPAuth()) return AUTIB(ctx, dec);
 if(CRm==3 && op2==7 && HasPAuth()) return AUTIB(ctx, dec);
 if(CRm==4 && !(op2&1) && HasBTI()) return BTI(ctx, dec);
 UNMATCHED;
}

int decode_iclass_pstate(context *ctx, Instruction *dec)
{
 uint32_t op1=(INSWORD>>16)&7, op2=(INSWORD>>5)&7, Rt=INSWORD&0x1f;
 if(!op1 && !op2 && Rt==0x1f && HasFlagM()) return CFINV(ctx, dec);
 if(!op1 && op2==1 && Rt==0x1f && HasFlagM2()) return XAFLAG(ctx, dec);
 if(!op1 && op2==2 && Rt==0x1f && HasFlagM2()) return AXFLAG(ctx, dec);
 if(Rt!=0x1f) UNALLOCATED(ENC_UNALLOCATED_10_PSTATE);
 if(Rt==0x1f) return MSR_imm(ctx, dec);
 UNMATCHED;
}

int decode_iclass_systeminstrs(context *ctx, Instruction *dec)
{
 uint32_t L=(INSWORD>>21)&1;
 if(!L) return SYS(ctx, dec);
 if(L) return SYSL(ctx, dec);
 UNMATCHED;
}

int decode_iclass_systeminstrswithreg(context *ctx, Instruction *dec)
{
 uint32_t CRm=(INSWORD>>8)&15, op2=(INSWORD>>5)&7;
 if(!CRm && !op2 && HasWFxT()) return WFET(ctx, dec);
 if(!CRm && op2==1 && HasWFxT()) return WFIT(ctx, dec);
 if(!CRm && (op2&6)==2) UNALLOCATED(ENC_UNALLOCATED_12_SYSTEMINSTRSWITHREG);
 if(!CRm && (op2&4)==4) UNALLOCATED(ENC_UNALLOCATED_13_SYSTEMINSTRSWITHREG);
 if(CRm) UNALLOCATED(ENC_UNALLOCATED_14_SYSTEMINSTRSWITHREG);
 UNMATCHED;
}

int decode_iclass_systemmove(context *ctx, Instruction *dec)
{
 uint32_t L=(INSWORD>>21)&1;
 if(!L) return MSR_reg(ctx, dec);
 if(L) return MRS(ctx, dec);
 UNMATCHED;
}

int decode_iclass_systemresult(context *ctx, Instruction *dec)
{
 uint32_t op1=(INSWORD>>16)&7, CRn=(INSWORD>>12)&15, CRm=(INSWORD>>8)&15, op2=(INSWORD>>5)&7;
 if(op1==3 && CRn==3 && !CRm && op2==3 && HasTME()) return TSTART(ctx, dec);
 if(op1==3 && CRn==3 && CRm==1 && op2==3 && HasTME()) return TTEST(ctx, dec);
 if(op1==3 && CRn==3 && CRm&14 && op2==3) UNALLOCATED(ENC_UNALLOCATED_13_SYSTEMRESULT);
 if(op1==3 && CRn==3 && op2!=3) UNALLOCATED(ENC_UNALLOCATED_12_SYSTEMRESULT);
 if(op1==3 && CRn!=3) UNALLOCATED(ENC_UNALLOCATED_11_SYSTEMRESULT);
 if(op1!=3) UNALLOCATED(ENC_UNALLOCATED_10_SYSTEMRESULT);
 UNMATCHED;
}

int decode_iclass_testbranch(context *ctx, Instruction *dec)
{
 uint32_t op=(INSWORD>>24)&1;
 if(!op) return TBZ(ctx, dec);
 if(op) return TBNZ(ctx, dec);
 UNMATCHED;
}

int decode_iclass_branch_imm(context *ctx, Instruction *dec)
{
 uint32_t op=INSWORD>>31;
 if(!op) return B_uncond(ctx, dec);
 if(op) return BL(ctx, dec);
 UNMATCHED;
}

int decode_iclass_branch_reg(context *ctx, Instruction *dec)
{
 uint32_t opc=(INSWORD>>21)&15, op2=(INSWORD>>16)&0x1f, op3=(INSWORD>>10)&0x3f, Rn=(INSWORD>>5)&0x1f, op4=INSWORD&0x1f;
 if(opc==2 && op2==0x1f && op3==2 && Rn!=0x1f && op4!=0x1f) UNALLOCATED(ENC_UNALLOCATED_37_BRANCH_REG);
 if(opc==2 && op2==0x1f && op3==2 && Rn==0x1f && op4==0x1f && HasPAuth()) return RETA(ctx, dec);
 if(opc==2 && op2==0x1f && op3==3 && Rn!=0x1f && op4!=0x1f) UNALLOCATED(ENC_UNALLOCATED_39_BRANCH_REG);
 if(opc==2 && op2==0x1f && op3==3 && Rn==0x1f && op4==0x1f && HasPAuth()) return RETA(ctx, dec);
 if(opc==4 && op2==0x1f && !op3 && Rn!=0x1f && op4) UNALLOCATED(ENC_UNALLOCATED_48_BRANCH_REG);
 if(opc==4 && op2==0x1f && !op3 && Rn!=0x1f && !op4) UNALLOCATED(ENC_UNALLOCATED_46_BRANCH_REG);
 if(opc==4 && op2==0x1f && !op3 && Rn==0x1f && op4) UNALLOCATED(ENC_UNALLOCATED_47_BRANCH_REG);
 if(opc==4 && op2==0x1f && !op3 && Rn==0x1f && !op4) return ERET(ctx, dec);
 if(opc==4 && op2==0x1f && op3==2 && Rn!=0x1f && op4!=0x1f) UNALLOCATED(ENC_UNALLOCATED_53_BRANCH_REG);
 if(opc==4 && op2==0x1f && op3==2 && Rn!=0x1f && op4==0x1f) UNALLOCATED(ENC_UNALLOCATED_52_BRANCH_REG);
 if(opc==4 && op2==0x1f && op3==2 && Rn==0x1f && op4!=0x1f) UNALLOCATED(ENC_UNALLOCATED_51_BRANCH_REG);
 if(opc==4 && op2==0x1f && op3==2 && Rn==0x1f && op4==0x1f && HasPAuth()) return ERETA(ctx, dec);
 if(opc==4 && op2==0x1f && op3==3 && Rn!=0x1f && op4!=0x1f) UNALLOCATED(ENC_UNALLOCATED_57_BRANCH_REG);
 if(opc==4 && op2==0x1f && op3==3 && Rn!=0x1f && op4==0x1f) UNALLOCATED(ENC_UNALLOCATED_56_BRANCH_REG);
 if(opc==4 && op2==0x1f && op3==3 && Rn==0x1f && op4!=0x1f) UNALLOCATED(ENC_UNALLOCATED_55_BRANCH_REG);
 if(opc==4 && op2==0x1f && op3==3 && Rn==0x1f && op4==0x1f && HasPAuth()) return ERETA(ctx, dec);
 if(opc==5 && op2==0x1f && !op3 && Rn!=0x1f && op4) UNALLOCATED(ENC_UNALLOCATED_65_BRANCH_REG);
 if(opc==5 && op2==0x1f && !op3 && Rn!=0x1f && !op4) UNALLOCATED(ENC_UNALLOCATED_63_BRANCH_REG);
 if(opc==5 && op2==0x1f && !op3 && Rn==0x1f && op4) UNALLOCATED(ENC_UNALLOCATED_64_BRANCH_REG);
 if(opc==5 && op2==0x1f && !op3 && Rn==0x1f && !op4) return DRPS(ctx, dec);
 if(!opc && op2==0x1f && !op3 && op4) UNALLOCATED(ENC_UNALLOCATED_12_BRANCH_REG);
 if(!opc && op2==0x1f && !op3 && !op4) return BR(ctx, dec);
 if(!opc && op2==0x1f && op3==2 && op4!=0x1f) UNALLOCATED(ENC_UNALLOCATED_15_BRANCH_REG);
 if(!opc && op2==0x1f && op3==2 && op4==0x1f && HasPAuth()) return BRA(ctx, dec);
 if(!opc && op2==0x1f && op3==3 && op4!=0x1f) UNALLOCATED(ENC_UNALLOCATED_17_BRANCH_REG);
 if(!opc && op2==0x1f && op3==3 && op4==0x1f && HasPAuth()) return BRA(ctx, dec);
 if(opc==1 && op2==0x1f && !op3 && op4) UNALLOCATED(ENC_UNALLOCATED_23_BRANCH_REG);
 if(opc==1 && op2==0x1f && !op3 && !op4) return BLR(ctx, dec);
 if(opc==1 && op2==0x1f && op3==2 && op4!=0x1f) UNALLOCATED(ENC_UNALLOCATED_26_BRANCH_REG);
 if(opc==1 && op2==0x1f && op3==2 && op4==0x1f && HasPAuth()) return BLRA(ctx, dec);
 if(opc==1 && op2==0x1f && op3==3 && op4!=0x1f) UNALLOCATED(ENC_UNALLOCATED_28_BRANCH_REG);
 if(opc==1 && op2==0x1f && op3==3 && op4==0x1f && HasPAuth()) return BLRA(ctx, dec);
 if(opc==2 && op2==0x1f && !op3 && op4) UNALLOCATED(ENC_UNALLOCATED_34_BRANCH_REG);
 if(opc==2 && op2==0x1f && !op3 && !op4) return RET(ctx, dec);
 if(!opc && op2==0x1f && op3==1) UNALLOCATED(ENC_UNALLOCATED_13_BRANCH_REG);
 if(opc==1 && op2==0x1f && op3==1) UNALLOCATED(ENC_UNALLOCATED_24_BRANCH_REG);
 if(opc==2 && op2==0x1f && op3==1) UNALLOCATED(ENC_UNALLOCATED_35_BRANCH_REG);
 if(opc==4 && op2==0x1f && op3==1) UNALLOCATED(ENC_UNALLOCATED_49_BRANCH_REG);
 if(opc==5 && op2==0x1f && op3) UNALLOCATED(ENC_UNALLOCATED_66_BRANCH_REG);
 if(opc==8 && op2==0x1f && op3==2 && HasPAuth()) return BRA(ctx, dec);
 if(opc==8 && op2==0x1f && op3==3 && HasPAuth()) return BRA(ctx, dec);
 if(opc==9 && op2==0x1f && op3==2 && HasPAuth()) return BLRA(ctx, dec);
 if(opc==9 && op2==0x1f && op3==3 && HasPAuth()) return BLRA(ctx, dec);
 if(opc==8 && op2==0x1f && !(op3&0x3e)) UNALLOCATED(ENC_UNALLOCATED_68_BRANCH_REG);
 if(opc==9 && op2==0x1f && !(op3&0x3e)) UNALLOCATED(ENC_UNALLOCATED_75_BRANCH_REG);
 if(!opc && op2==0x1f && (op3&0x3c)==4) UNALLOCATED(ENC_UNALLOCATED_18_BRANCH_REG);
 if(opc==1 && op2==0x1f && (op3&0x3c)==4) UNALLOCATED(ENC_UNALLOCATED_29_BRANCH_REG);
 if(opc==2 && op2==0x1f && (op3&0x3c)==4) UNALLOCATED(ENC_UNALLOCATED_40_BRANCH_REG);
 if(opc==4 && op2==0x1f && (op3&0x3c)==4) UNALLOCATED(ENC_UNALLOCATED_58_BRANCH_REG);
 if(opc==8 && op2==0x1f && (op3&0x3c)==4) UNALLOCATED(ENC_UNALLOCATED_71_BRANCH_REG);
 if(opc==9 && op2==0x1f && (op3&0x3c)==4) UNALLOCATED(ENC_UNALLOCATED_78_BRANCH_REG);
 if(!opc && op2==0x1f && (op3&0x38)==8) UNALLOCATED(ENC_UNALLOCATED_19_BRANCH_REG);
 if(opc==1 && op2==0x1f && (op3&0x38)==8) UNALLOCATED(ENC_UNALLOCATED_30_BRANCH_REG);
 if(opc==2 && op2==0x1f && (op3&0x38)==8) UNALLOCATED(ENC_UNALLOCATED_41_BRANCH_REG);
 if(opc==4 && op2==0x1f && (op3&0x38)==8) UNALLOCATED(ENC_UNALLOCATED_59_BRANCH_REG);
 if(opc==8 && op2==0x1f && (op3&0x38)==8) UNALLOCATED(ENC_UNALLOCATED_72_BRANCH_REG);
 if(opc==9 && op2==0x1f && (op3&0x38)==8) UNALLOCATED(ENC_UNALLOCATED_79_BRANCH_REG);
 if(!opc && op2==0x1f && (op3&0x30)==0x10) UNALLOCATED(ENC_UNALLOCATED_20_BRANCH_REG);
 if(opc==1 && op2==0x1f && (op3&0x30)==0x10) UNALLOCATED(ENC_UNALLOCATED_31_BRANCH_REG);
 if(opc==2 && op2==0x1f && (op3&0x30)==0x10) UNALLOCATED(ENC_UNALLOCATED_42_BRANCH_REG);
 if(opc==4 && op2==0x1f && (op3&0x30)==0x10) UNALLOCATED(ENC_UNALLOCATED_60_BRANCH_REG);
 if(opc==8 && op2==0x1f && (op3&0x30)==0x10) UNALLOCATED(ENC_UNALLOCATED_73_BRANCH_REG);
 if(opc==9 && op2==0x1f && (op3&0x30)==0x10) UNALLOCATED(ENC_UNALLOCATED_80_BRANCH_REG);
 if(!opc && op2==0x1f && (op3&0x20)==0x20) UNALLOCATED(ENC_UNALLOCATED_21_BRANCH_REG);
 if(opc==1 && op2==0x1f && (op3&0x20)==0x20) UNALLOCATED(ENC_UNALLOCATED_32_BRANCH_REG);
 if(opc==2 && op2==0x1f && (op3&0x20)==0x20) UNALLOCATED(ENC_UNALLOCATED_43_BRANCH_REG);
 if(opc==4 && op2==0x1f && (op3&0x20)==0x20) UNALLOCATED(ENC_UNALLOCATED_61_BRANCH_REG);
 if(opc==8 && op2==0x1f && (op3&0x20)==0x20) UNALLOCATED(ENC_UNALLOCATED_74_BRANCH_REG);
 if(opc==9 && op2==0x1f && (op3&0x20)==0x20) UNALLOCATED(ENC_UNALLOCATED_81_BRANCH_REG);
 if(opc==3 && op2==0x1f) UNALLOCATED(ENC_UNALLOCATED_44_BRANCH_REG);
 if((opc&14)==6 && op2==0x1f) UNALLOCATED(ENC_UNALLOCATED_67_BRANCH_REG);
 if((opc&14)==10 && op2==0x1f) UNALLOCATED(ENC_UNALLOCATED_82_BRANCH_REG);
 if((opc&12)==12 && op2==0x1f) UNALLOCATED(ENC_UNALLOCATED_83_BRANCH_REG);
 if(op2!=0x1f) UNALLOCATED(ENC_UNALLOCATED_10_BRANCH_REG);
 UNMATCHED;
}

int decode_iclass_sve_int_un_pred_arit_1(context *ctx, Instruction *dec)
{
 uint32_t opc=(INSWORD>>16)&7;
 if(!opc) return cls_z_p_z(ctx, dec);
 if(opc==1) return clz_z_p_z(ctx, dec);
 if(opc==2) return cnt_z_p_z(ctx, dec);
 if(opc==3) return cnot_z_p_z(ctx, dec);
 if(opc==4) return fabs_z_p_z(ctx, dec);
 if(opc==5) return fneg_z_p_z(ctx, dec);
 if(opc==6) return not_z_p_z(ctx, dec);
 if(opc==7) UNALLOCATED(ENC_UNALLOCATED_136);
 UNMATCHED;
}

int decode_iclass_sve_int_un_pred_arit_0(context *ctx, Instruction *dec)
{
 uint32_t opc=(INSWORD>>16)&7;
 if(!opc) return sxtb_z_p_z(ctx, dec);
 if(opc==1) return uxtb_z_p_z(ctx, dec);
 if(opc==2) return sxtb_z_p_z(ctx, dec);
 if(opc==3) return uxtb_z_p_z(ctx, dec);
 if(opc==4) return sxtb_z_p_z(ctx, dec);
 if(opc==5) return uxtb_z_p_z(ctx, dec);
 if(opc==6) return abs_z_p_z(ctx, dec);
 if(opc==7) return neg_z_p_z(ctx, dec);
 UNMATCHED;
}

int decode_iclass_asisdlse(context *ctx, Instruction *dec)
{
 uint32_t L=(INSWORD>>22)&1, opcode=(INSWORD>>12)&15;
 if(!L && !opcode) return ST4_advsimd_mult(ctx, dec);
 if(!L && opcode==1) UNALLOCATED(ENC_UNALLOCATED_12_ASISDLSE);
 if(!L && opcode==2) return ST1_advsimd_mult(ctx, dec);
 if(!L && opcode==3) UNALLOCATED(ENC_UNALLOCATED_14_ASISDLSE);
 if(!L && opcode==4) return ST3_advsimd_mult(ctx, dec);
 if(!L && opcode==5) UNALLOCATED(ENC_UNALLOCATED_16_ASISDLSE);
 if(!L && opcode==6) return ST1_advsimd_mult(ctx, dec);
 if(!L && opcode==7) return ST1_advsimd_mult(ctx, dec);
 if(!L && opcode==8) return ST2_advsimd_mult(ctx, dec);
 if(!L && opcode==9) UNALLOCATED(ENC_UNALLOCATED_20_ASISDLSE);
 if(!L && opcode==10) return ST1_advsimd_mult(ctx, dec);
 if(!L && opcode==11) UNALLOCATED(ENC_UNALLOCATED_22_ASISDLSE);
 if(L && !opcode) return LD4_advsimd_mult(ctx, dec);
 if(L && opcode==1) UNALLOCATED(ENC_UNALLOCATED_25_ASISDLSE);
 if(L && opcode==2) return LD1_advsimd_mult(ctx, dec);
 if(L && opcode==3) UNALLOCATED(ENC_UNALLOCATED_27_ASISDLSE);
 if(L && opcode==4) return LD3_advsimd_mult(ctx, dec);
 if(L && opcode==5) UNALLOCATED(ENC_UNALLOCATED_29_ASISDLSE);
 if(L && opcode==6) return LD1_advsimd_mult(ctx, dec);
 if(L && opcode==7) return LD1_advsimd_mult(ctx, dec);
 if(L && opcode==8) return LD2_advsimd_mult(ctx, dec);
 if(L && opcode==9) UNALLOCATED(ENC_UNALLOCATED_33_ASISDLSE);
 if(L && opcode==10) return LD1_advsimd_mult(ctx, dec);
 if(L && opcode==11) UNALLOCATED(ENC_UNALLOCATED_35_ASISDLSE);
 if(!L && (opcode&12)==12) UNALLOCATED(ENC_UNALLOCATED_23_ASISDLSE);
 if(L && (opcode&12)==12) UNALLOCATED(ENC_UNALLOCATED_36_ASISDLSE);
 UNMATCHED;
}

int decode_iclass_asisdlsep(context *ctx, Instruction *dec)
{
 uint32_t L=(INSWORD>>22)&1, Rm=(INSWORD>>16)&0x1f, opcode=(INSWORD>>12)&15;
 if(!L && Rm!=0x1f && !opcode) return ST4_advsimd_mult(ctx, dec);
 if(!L && Rm!=0x1f && opcode==2) return ST1_advsimd_mult(ctx, dec);
 if(!L && Rm!=0x1f && opcode==4) return ST3_advsimd_mult(ctx, dec);
 if(!L && Rm!=0x1f && opcode==6) return ST1_advsimd_mult(ctx, dec);
 if(!L && Rm!=0x1f && opcode==7) return ST1_advsimd_mult(ctx, dec);
 if(!L && Rm!=0x1f && opcode==8) return ST2_advsimd_mult(ctx, dec);
 if(!L && Rm!=0x1f && opcode==10) return ST1_advsimd_mult(ctx, dec);
 if(!L && Rm==0x1f && !opcode) return ST4_advsimd_mult(ctx, dec);
 if(!L && Rm==0x1f && opcode==2) return ST1_advsimd_mult(ctx, dec);
 if(!L && Rm==0x1f && opcode==4) return ST3_advsimd_mult(ctx, dec);
 if(!L && Rm==0x1f && opcode==6) return ST1_advsimd_mult(ctx, dec);
 if(!L && Rm==0x1f && opcode==7) return ST1_advsimd_mult(ctx, dec);
 if(!L && Rm==0x1f && opcode==8) return ST2_advsimd_mult(ctx, dec);
 if(!L && Rm==0x1f && opcode==10) return ST1_advsimd_mult(ctx, dec);
 if(L && Rm!=0x1f && !opcode) return LD4_advsimd_mult(ctx, dec);
 if(L && Rm!=0x1f && opcode==2) return LD1_advsimd_mult(ctx, dec);
 if(L && Rm!=0x1f && opcode==4) return LD3_advsimd_mult(ctx, dec);
 if(L && Rm!=0x1f && opcode==6) return LD1_advsimd_mult(ctx, dec);
 if(L && Rm!=0x1f && opcode==7) return LD1_advsimd_mult(ctx, dec);
 if(L && Rm!=0x1f && opcode==8) return LD2_advsimd_mult(ctx, dec);
 if(L && Rm!=0x1f && opcode==10) return LD1_advsimd_mult(ctx, dec);
 if(L && Rm==0x1f && !opcode) return LD4_advsimd_mult(ctx, dec);
 if(L && Rm==0x1f && opcode==2) return LD1_advsimd_mult(ctx, dec);
 if(L && Rm==0x1f && opcode==4) return LD3_advsimd_mult(ctx, dec);
 if(L && Rm==0x1f && opcode==6) return LD1_advsimd_mult(ctx, dec);
 if(L && Rm==0x1f && opcode==7) return LD1_advsimd_mult(ctx, dec);
 if(L && Rm==0x1f && opcode==8) return LD2_advsimd_mult(ctx, dec);
 if(L && Rm==0x1f && opcode==10) return LD1_advsimd_mult(ctx, dec);
 if(!L && opcode==1) UNALLOCATED(ENC_UNALLOCATED_13_ASISDLSEP);
 if(!L && opcode==3) UNALLOCATED(ENC_UNALLOCATED_16_ASISDLSEP);
 if(!L && opcode==5) UNALLOCATED(ENC_UNALLOCATED_19_ASISDLSEP);
 if(!L && opcode==9) UNALLOCATED(ENC_UNALLOCATED_26_ASISDLSEP);
 if(!L && opcode==11) UNALLOCATED(ENC_UNALLOCATED_29_ASISDLSEP);
 if(L && opcode==1) UNALLOCATED(ENC_UNALLOCATED_33_ASISDLSEP);
 if(L && opcode==3) UNALLOCATED(ENC_UNALLOCATED_36_ASISDLSEP);
 if(L && opcode==5) UNALLOCATED(ENC_UNALLOCATED_39_ASISDLSEP);
 if(L && opcode==9) UNALLOCATED(ENC_UNALLOCATED_46_ASISDLSEP);
 if(L && opcode==11) UNALLOCATED(ENC_UNALLOCATED_49_ASISDLSEP);
 if(!L && (opcode&12)==12) UNALLOCATED(ENC_UNALLOCATED_30_ASISDLSEP);
 if(L && (opcode&12)==12) UNALLOCATED(ENC_UNALLOCATED_50_ASISDLSEP);
 UNMATCHED;
}

int decode_iclass_asisdlso(context *ctx, Instruction *dec)
{
 uint32_t L=(INSWORD>>22)&1, R=(INSWORD>>21)&1, opcode=(INSWORD>>13)&7, S=(INSWORD>>12)&1, size=(INSWORD>>10)&3;
 if(!L && !R && opcode==4 && !S && size==1) return ST1_advsimd_sngl(ctx, dec);
 if(!L && !R && opcode==4 && S && size==1) UNALLOCATED(ENC_UNALLOCATED_18_ASISDLSO);
 if(!L && !R && opcode==5 && !S && size==1) return ST3_advsimd_sngl(ctx, dec);
 if(!L && !R && opcode==5 && !S && size==3) UNALLOCATED(ENC_UNALLOCATED_33_ASISDLSO);
 if(!L && R && opcode==4 && !S && size==1) return ST2_advsimd_sngl(ctx, dec);
 if(!L && R && opcode==4 && !S && size==3) UNALLOCATED(ENC_UNALLOCATED_25_ASISDLSO);
 if(!L && R && opcode==5 && !S && size==1) return ST4_advsimd_sngl(ctx, dec);
 if(!L && R && opcode==5 && !S && size==3) UNALLOCATED(ENC_UNALLOCATED_41_ASISDLSO);
 if(L && !R && opcode==4 && !S && size==1) return LD1_advsimd_sngl(ctx, dec);
 if(L && !R && opcode==4 && S && size==1) UNALLOCATED(ENC_UNALLOCATED_48_ASISDLSO);
 if(L && !R && opcode==5 && !S && size==1) return LD3_advsimd_sngl(ctx, dec);
 if(L && !R && opcode==5 && !S && size==3) UNALLOCATED(ENC_UNALLOCATED_68_ASISDLSO);
 if(L && R && opcode==4 && !S && size==1) return LD2_advsimd_sngl(ctx, dec);
 if(L && R && opcode==4 && !S && size==3) UNALLOCATED(ENC_UNALLOCATED_58_ASISDLSO);
 if(L && R && opcode==5 && !S && size==1) return LD4_advsimd_sngl(ctx, dec);
 if(L && R && opcode==5 && !S && size==3) UNALLOCATED(ENC_UNALLOCATED_78_ASISDLSO);
 if(!L && !R && opcode==4 && !size) return ST1_advsimd_sngl(ctx, dec);
 if(!L && !R && opcode==5 && !size) return ST3_advsimd_sngl(ctx, dec);
 if(!L && !R && opcode==5 && size==2) UNALLOCATED(ENC_UNALLOCATED_31_ASISDLSO);
 if(!L && !R && opcode==5 && S && size&1) UNALLOCATED(ENC_UNALLOCATED_34_ASISDLSO);
 if(!L && R && opcode==4 && !size) return ST2_advsimd_sngl(ctx, dec);
 if(!L && R && opcode==4 && size==2) UNALLOCATED(ENC_UNALLOCATED_23_ASISDLSO);
 if(!L && R && opcode==4 && S && size&1) UNALLOCATED(ENC_UNALLOCATED_26_ASISDLSO);
 if(!L && R && opcode==5 && !size) return ST4_advsimd_sngl(ctx, dec);
 if(!L && R && opcode==5 && size==2) UNALLOCATED(ENC_UNALLOCATED_39_ASISDLSO);
 if(!L && R && opcode==5 && S && size&1) UNALLOCATED(ENC_UNALLOCATED_42_ASISDLSO);
 if(L && !R && opcode==4 && !size) return LD1_advsimd_sngl(ctx, dec);
 if(L && !R && opcode==5 && !size) return LD3_advsimd_sngl(ctx, dec);
 if(L && !R && opcode==5 && size==2) UNALLOCATED(ENC_UNALLOCATED_66_ASISDLSO);
 if(L && !R && opcode==5 && S && size&1) UNALLOCATED(ENC_UNALLOCATED_69_ASISDLSO);
 if(L && R && opcode==4 && !size) return LD2_advsimd_sngl(ctx, dec);
 if(L && R && opcode==4 && size==2) UNALLOCATED(ENC_UNALLOCATED_56_ASISDLSO);
 if(L && R && opcode==4 && S && size&1) UNALLOCATED(ENC_UNALLOCATED_59_ASISDLSO);
 if(L && R && opcode==5 && !size) return LD4_advsimd_sngl(ctx, dec);
 if(L && R && opcode==5 && size==2) UNALLOCATED(ENC_UNALLOCATED_76_ASISDLSO);
 if(L && R && opcode==5 && S && size&1) UNALLOCATED(ENC_UNALLOCATED_79_ASISDLSO);
 if(!L && !R && opcode==2 && !(size&1)) return ST1_advsimd_sngl(ctx, dec);
 if(!L && !R && opcode==2 && size&1) UNALLOCATED(ENC_UNALLOCATED_14_ASISDLSO);
 if(!L && !R && opcode==3 && !(size&1)) return ST3_advsimd_sngl(ctx, dec);
 if(!L && !R && opcode==3 && size&1) UNALLOCATED(ENC_UNALLOCATED_29_ASISDLSO);
 if(!L && !R && opcode==4 && (size&2)==2) UNALLOCATED(ENC_UNALLOCATED_16_ASISDLSO);
 if(!L && R && opcode==2 && !(size&1)) return ST2_advsimd_sngl(ctx, dec);
 if(!L && R && opcode==2 && size&1) UNALLOCATED(ENC_UNALLOCATED_21_ASISDLSO);
 if(!L && R && opcode==3 && !(size&1)) return ST4_advsimd_sngl(ctx, dec);
 if(!L && R && opcode==3 && size&1) UNALLOCATED(ENC_UNALLOCATED_37_ASISDLSO);
 if(L && !R && opcode==2 && !(size&1)) return LD1_advsimd_sngl(ctx, dec);
 if(L && !R && opcode==2 && size&1) UNALLOCATED(ENC_UNALLOCATED_45_ASISDLSO);
 if(L && !R && opcode==3 && !(size&1)) return LD3_advsimd_sngl(ctx, dec);
 if(L && !R && opcode==3 && size&1) UNALLOCATED(ENC_UNALLOCATED_64_ASISDLSO);
 if(L && !R && opcode==4 && (size&2)==2) UNALLOCATED(ENC_UNALLOCATED_49_ASISDLSO);
 if(L && !R && opcode==6 && !S) return LD1R_advsimd(ctx, dec);
 if(L && !R && opcode==6 && S) UNALLOCATED(ENC_UNALLOCATED_51_ASISDLSO);
 if(L && !R && opcode==7 && !S) return LD3R_advsimd(ctx, dec);
 if(L && !R && opcode==7 && S) UNALLOCATED(ENC_UNALLOCATED_71_ASISDLSO);
 if(L && R && opcode==2 && !(size&1)) return LD2_advsimd_sngl(ctx, dec);
 if(L && R && opcode==2 && size&1) UNALLOCATED(ENC_UNALLOCATED_54_ASISDLSO);
 if(L && R && opcode==3 && !(size&1)) return LD4_advsimd_sngl(ctx, dec);
 if(L && R && opcode==3 && size&1) UNALLOCATED(ENC_UNALLOCATED_74_ASISDLSO);
 if(L && R && opcode==6 && !S) return LD2R_advsimd(ctx, dec);
 if(L && R && opcode==6 && S) UNALLOCATED(ENC_UNALLOCATED_61_ASISDLSO);
 if(L && R && opcode==7 && !S) return LD4R_advsimd(ctx, dec);
 if(L && R && opcode==7 && S) UNALLOCATED(ENC_UNALLOCATED_81_ASISDLSO);
 if(!L && !R && !opcode) return ST1_advsimd_sngl(ctx, dec);
 if(!L && !R && opcode==1) return ST3_advsimd_sngl(ctx, dec);
 if(!L && R && !opcode) return ST2_advsimd_sngl(ctx, dec);
 if(!L && R && opcode==1) return ST4_advsimd_sngl(ctx, dec);
 if(L && !R && !opcode) return LD1_advsimd_sngl(ctx, dec);
 if(L && !R && opcode==1) return LD3_advsimd_sngl(ctx, dec);
 if(L && R && !opcode) return LD2_advsimd_sngl(ctx, dec);
 if(L && R && opcode==1) return LD4_advsimd_sngl(ctx, dec);
 if(!L && (opcode&6)==6) UNALLOCATED(ENC_UNALLOCATED_11_ASISDLSO);
 UNMATCHED;
}

int decode_iclass_asisdlsop(context *ctx, Instruction *dec)
{
 uint32_t L=(INSWORD>>22)&1, R=(INSWORD>>21)&1, Rm=(INSWORD>>16)&0x1f, opcode=(INSWORD>>13)&7, S=(INSWORD>>12)&1, size=(INSWORD>>10)&3;
 if(!L && !R && Rm!=0x1f && opcode==4 && !S && size==1) return ST1_advsimd_sngl(ctx, dec);
 if(!L && !R && Rm!=0x1f && opcode==5 && !S && size==1) return ST3_advsimd_sngl(ctx, dec);
 if(!L && !R && Rm==0x1f && opcode==4 && !S && size==1) return ST1_advsimd_sngl(ctx, dec);
 if(!L && !R && Rm==0x1f && opcode==5 && !S && size==1) return ST3_advsimd_sngl(ctx, dec);
 if(!L && R && Rm!=0x1f && opcode==4 && !S && size==1) return ST2_advsimd_sngl(ctx, dec);
 if(!L && R && Rm!=0x1f && opcode==5 && !S && size==1) return ST4_advsimd_sngl(ctx, dec);
 if(!L && R && Rm==0x1f && opcode==4 && !S && size==1) return ST2_advsimd_sngl(ctx, dec);
 if(!L && R && Rm==0x1f && opcode==5 && !S && size==1) return ST4_advsimd_sngl(ctx, dec);
 if(L && !R && Rm!=0x1f && opcode==4 && !S && size==1) return LD1_advsimd_sngl(ctx, dec);
 if(L && !R && Rm!=0x1f && opcode==5 && !S && size==1) return LD3_advsimd_sngl(ctx, dec);
 if(L && !R && Rm==0x1f && opcode==4 && !S && size==1) return LD1_advsimd_sngl(ctx, dec);
 if(L && !R && Rm==0x1f && opcode==5 && !S && size==1) return LD3_advsimd_sngl(ctx, dec);
 if(L && R && Rm!=0x1f && opcode==4 && !S && size==1) return LD2_advsimd_sngl(ctx, dec);
 if(L && R && Rm!=0x1f && opcode==5 && !S && size==1) return LD4_advsimd_sngl(ctx, dec);
 if(L && R && Rm==0x1f && opcode==4 && !S && size==1) return LD2_advsimd_sngl(ctx, dec);
 if(L && R && Rm==0x1f && opcode==5 && !S && size==1) return LD4_advsimd_sngl(ctx, dec);
 if(!L && !R && Rm!=0x1f && opcode==4 && !size) return ST1_advsimd_sngl(ctx, dec);
 if(!L && !R && Rm!=0x1f && opcode==5 && !size) return ST3_advsimd_sngl(ctx, dec);
 if(!L && !R && Rm==0x1f && opcode==4 && !size) return ST1_advsimd_sngl(ctx, dec);
 if(!L && !R && Rm==0x1f && opcode==5 && !size) return ST3_advsimd_sngl(ctx, dec);
 if(!L && R && Rm!=0x1f && opcode==4 && !size) return ST2_advsimd_sngl(ctx, dec);
 if(!L && R && Rm!=0x1f && opcode==5 && !size) return ST4_advsimd_sngl(ctx, dec);
 if(!L && R && Rm==0x1f && opcode==4 && !size) return ST2_advsimd_sngl(ctx, dec);
 if(!L && R && Rm==0x1f && opcode==5 && !size) return ST4_advsimd_sngl(ctx, dec);
 if(L && !R && Rm!=0x1f && opcode==4 && !size) return LD1_advsimd_sngl(ctx, dec);
 if(L && !R && Rm!=0x1f && opcode==5 && !size) return LD3_advsimd_sngl(ctx, dec);
 if(L && !R && Rm==0x1f && opcode==4 && !size) return LD1_advsimd_sngl(ctx, dec);
 if(L && !R && Rm==0x1f && opcode==5 && !size) return LD3_advsimd_sngl(ctx, dec);
 if(L && R && Rm!=0x1f && opcode==4 && !size) return LD2_advsimd_sngl(ctx, dec);
 if(L && R && Rm!=0x1f && opcode==5 && !size) return LD4_advsimd_sngl(ctx, dec);
 if(L && R && Rm==0x1f && opcode==4 && !size) return LD2_advsimd_sngl(ctx, dec);
 if(L && R && Rm==0x1f && opcode==5 && !size) return LD4_advsimd_sngl(ctx, dec);
 if(!L && !R && Rm!=0x1f && opcode==2 && !(size&1)) return ST1_advsimd_sngl(ctx, dec);
 if(!L && !R && Rm!=0x1f && opcode==3 && !(size&1)) return ST3_advsimd_sngl(ctx, dec);
 if(!L && !R && Rm==0x1f && opcode==2 && !(size&1)) return ST1_advsimd_sngl(ctx, dec);
 if(!L && !R && Rm==0x1f && opcode==3 && !(size&1)) return ST3_advsimd_sngl(ctx, dec);
 if(!L && R && Rm!=0x1f && opcode==2 && !(size&1)) return ST2_advsimd_sngl(ctx, dec);
 if(!L && R && Rm!=0x1f && opcode==3 && !(size&1)) return ST4_advsimd_sngl(ctx, dec);
 if(!L && R && Rm==0x1f && opcode==2 && !(size&1)) return ST2_advsimd_sngl(ctx, dec);
 if(!L && R && Rm==0x1f && opcode==3 && !(size&1)) return ST4_advsimd_sngl(ctx, dec);
 if(L && !R && Rm!=0x1f && opcode==2 && !(size&1)) return LD1_advsimd_sngl(ctx, dec);
 if(L && !R && Rm!=0x1f && opcode==3 && !(size&1)) return LD3_advsimd_sngl(ctx, dec);
 if(L && !R && Rm!=0x1f && opcode==6 && !S) return LD1R_advsimd(ctx, dec);
 if(L && !R && Rm!=0x1f && opcode==7 && !S) return LD3R_advsimd(ctx, dec);
 if(L && !R && Rm==0x1f && opcode==2 && !(size&1)) return LD1_advsimd_sngl(ctx, dec);
 if(L && !R && Rm==0x1f && opcode==3 && !(size&1)) return LD3_advsimd_sngl(ctx, dec);
 if(L && !R && Rm==0x1f && opcode==6 && !S) return LD1R_advsimd(ctx, dec);
 if(L && !R && Rm==0x1f && opcode==7 && !S) return LD3R_advsimd(ctx, dec);
 if(L && R && Rm!=0x1f && opcode==2 && !(size&1)) return LD2_advsimd_sngl(ctx, dec);
 if(L && R && Rm!=0x1f && opcode==3 && !(size&1)) return LD4_advsimd_sngl(ctx, dec);
 if(L && R && Rm!=0x1f && opcode==6 && !S) return LD2R_advsimd(ctx, dec);
 if(L && R && Rm!=0x1f && opcode==7 && !S) return LD4R_advsimd(ctx, dec);
 if(L && R && Rm==0x1f && opcode==2 && !(size&1)) return LD2_advsimd_sngl(ctx, dec);
 if(L && R && Rm==0x1f && opcode==3 && !(size&1)) return LD4_advsimd_sngl(ctx, dec);
 if(L && R && Rm==0x1f && opcode==6 && !S) return LD2R_advsimd(ctx, dec);
 if(L && R && Rm==0x1f && opcode==7 && !S) return LD4R_advsimd(ctx, dec);
 if(!L && !R && Rm!=0x1f && !opcode) return ST1_advsimd_sngl(ctx, dec);
 if(!L && !R && Rm!=0x1f && opcode==1) return ST3_advsimd_sngl(ctx, dec);
 if(!L && !R && Rm==0x1f && !opcode) return ST1_advsimd_sngl(ctx, dec);
 if(!L && !R && Rm==0x1f && opcode==1) return ST3_advsimd_sngl(ctx, dec);
 if(!L && R && Rm!=0x1f && !opcode) return ST2_advsimd_sngl(ctx, dec);
 if(!L && R && Rm!=0x1f && opcode==1) return ST4_advsimd_sngl(ctx, dec);
 if(!L && R && Rm==0x1f && !opcode) return ST2_advsimd_sngl(ctx, dec);
 if(!L && R && Rm==0x1f && opcode==1) return ST4_advsimd_sngl(ctx, dec);
 if(L && !R && Rm!=0x1f && !opcode) return LD1_advsimd_sngl(ctx, dec);
 if(L && !R && Rm!=0x1f && opcode==1) return LD3_advsimd_sngl(ctx, dec);
 if(L && !R && Rm==0x1f && !opcode) return LD1_advsimd_sngl(ctx, dec);
 if(L && !R && Rm==0x1f && opcode==1) return LD3_advsimd_sngl(ctx, dec);
 if(L && R && Rm!=0x1f && !opcode) return LD2_advsimd_sngl(ctx, dec);
 if(L && R && Rm!=0x1f && opcode==1) return LD4_advsimd_sngl(ctx, dec);
 if(L && R && Rm==0x1f && !opcode) return LD2_advsimd_sngl(ctx, dec);
 if(L && R && Rm==0x1f && opcode==1) return LD4_advsimd_sngl(ctx, dec);
 if(!L && !R && opcode==4 && S && size==1) UNALLOCATED(ENC_UNALLOCATED_18_ASISDLSOP);
 if(!L && !R && opcode==5 && !S && size==3) UNALLOCATED(ENC_UNALLOCATED_33_ASISDLSOP);
 if(!L && R && opcode==4 && !S && size==3) UNALLOCATED(ENC_UNALLOCATED_25_ASISDLSOP);
 if(!L && R && opcode==5 && !S && size==3) UNALLOCATED(ENC_UNALLOCATED_41_ASISDLSOP);
 if(L && !R && opcode==4 && S && size==1) UNALLOCATED(ENC_UNALLOCATED_48_ASISDLSOP);
 if(L && !R && opcode==5 && !S && size==3) UNALLOCATED(ENC_UNALLOCATED_68_ASISDLSOP);
 if(L && R && opcode==4 && !S && size==3) UNALLOCATED(ENC_UNALLOCATED_58_ASISDLSOP);
 if(L && R && opcode==5 && !S && size==3) UNALLOCATED(ENC_UNALLOCATED_78_ASISDLSOP);
 if(!L && !R && opcode==5 && size==2) UNALLOCATED(ENC_UNALLOCATED_31_ASISDLSOP);
 if(!L && !R && opcode==5 && S && size&1) UNALLOCATED(ENC_UNALLOCATED_34_ASISDLSOP);
 if(!L && R && opcode==4 && size==2) UNALLOCATED(ENC_UNALLOCATED_23_ASISDLSOP);
 if(!L && R && opcode==4 && S && size&1) UNALLOCATED(ENC_UNALLOCATED_26_ASISDLSOP);
 if(!L && R && opcode==5 && size==2) UNALLOCATED(ENC_UNALLOCATED_39_ASISDLSOP);
 if(!L && R && opcode==5 && S && size&1) UNALLOCATED(ENC_UNALLOCATED_42_ASISDLSOP);
 if(L && !R && opcode==5 && size==2) UNALLOCATED(ENC_UNALLOCATED_66_ASISDLSOP);
 if(L && !R && opcode==5 && S && size&1) UNALLOCATED(ENC_UNALLOCATED_69_ASISDLSOP);
 if(L && R && opcode==4 && size==2) UNALLOCATED(ENC_UNALLOCATED_56_ASISDLSOP);
 if(L && R && opcode==4 && S && size&1) UNALLOCATED(ENC_UNALLOCATED_59_ASISDLSOP);
 if(L && R && opcode==5 && size==2) UNALLOCATED(ENC_UNALLOCATED_76_ASISDLSOP);
 if(L && R && opcode==5 && S && size&1) UNALLOCATED(ENC_UNALLOCATED_79_ASISDLSOP);
 if(!L && !R && opcode==2 && size&1) UNALLOCATED(ENC_UNALLOCATED_14_ASISDLSOP);
 if(!L && !R && opcode==3 && size&1) UNALLOCATED(ENC_UNALLOCATED_29_ASISDLSOP);
 if(!L && !R && opcode==4 && (size&2)==2) UNALLOCATED(ENC_UNALLOCATED_16_ASISDLSOP);
 if(!L && R && opcode==2 && size&1) UNALLOCATED(ENC_UNALLOCATED_21_ASISDLSOP);
 if(!L && R && opcode==3 && size&1) UNALLOCATED(ENC_UNALLOCATED_37_ASISDLSOP);
 if(L && !R && opcode==2 && size&1) UNALLOCATED(ENC_UNALLOCATED_45_ASISDLSOP);
 if(L && !R && opcode==3 && size&1) UNALLOCATED(ENC_UNALLOCATED_64_ASISDLSOP);
 if(L && !R && opcode==4 && (size&2)==2) UNALLOCATED(ENC_UNALLOCATED_49_ASISDLSOP);
 if(L && !R && opcode==6 && S) UNALLOCATED(ENC_UNALLOCATED_51_ASISDLSOP);
 if(L && !R && opcode==7 && S) UNALLOCATED(ENC_UNALLOCATED_71_ASISDLSOP);
 if(L && R && opcode==2 && size&1) UNALLOCATED(ENC_UNALLOCATED_54_ASISDLSOP);
 if(L && R && opcode==3 && size&1) UNALLOCATED(ENC_UNALLOCATED_74_ASISDLSOP);
 if(L && R && opcode==6 && S) UNALLOCATED(ENC_UNALLOCATED_61_ASISDLSOP);
 if(L && R && opcode==7 && S) UNALLOCATED(ENC_UNALLOCATED_81_ASISDLSOP);
 if(!L && (opcode&6)==6) UNALLOCATED(ENC_UNALLOCATED_11_ASISDLSOP);
 UNMATCHED;
}

int decode_iclass_memop(context *ctx, Instruction *dec)
{
 uint32_t size=INSWORD>>30, V=(INSWORD>>26)&1, A=(INSWORD>>23)&1, R=(INSWORD>>22)&1, Rs=(INSWORD>>16)&0x1f, o3=(INSWORD>>15)&1, opc=(INSWORD>>12)&7;
 if(size==3 && !V && !A && !R && Rs==0x1f && o3 && opc==1 && HasLS64()) return ST64B(ctx, dec);
 if(size==3 && !V && !A && !R && Rs==0x1f && o3 && opc==5 && HasLS64()) return LD64B(ctx, dec);
 if(!size && !V && !A && !R && !o3 && !opc && HasLSE()) return LDADDB(ctx, dec);
 if(!size && !V && !A && !R && !o3 && opc==1 && HasLSE()) return LDCLRB(ctx, dec);
 if(!size && !V && !A && !R && !o3 && opc==2 && HasLSE()) return LDEORB(ctx, dec);
 if(!size && !V && !A && !R && !o3 && opc==3 && HasLSE()) return LDSETB(ctx, dec);
 if(!size && !V && !A && !R && !o3 && opc==4 && HasLSE()) return LDSMAXB(ctx, dec);
 if(!size && !V && !A && !R && !o3 && opc==5 && HasLSE()) return LDSMINB(ctx, dec);
 if(!size && !V && !A && !R && !o3 && opc==6 && HasLSE()) return LDUMAXB(ctx, dec);
 if(!size && !V && !A && !R && !o3 && opc==7 && HasLSE()) return LDUMINB(ctx, dec);
 if(!size && !V && !A && !R && o3 && !opc && HasLSE()) return SWPB(ctx, dec);
 if(!size && !V && !A && !R && o3 && opc==1) UNALLOCATED(ENC_UNALLOCATED_154_MEMOP);
 if(!size && !V && !A && !R && o3 && opc==2) UNALLOCATED(ENC_UNALLOCATED_161_MEMOP);
 if(!size && !V && !A && !R && o3 && opc==3) UNALLOCATED(ENC_UNALLOCATED_168_MEMOP);
 if(!size && !V && !A && !R && o3 && opc==5) UNALLOCATED(ENC_UNALLOCATED_181_MEMOP);
 if(!size && !V && !A && R && !o3 && !opc && HasLSE()) return LDADDB(ctx, dec);
 if(!size && !V && !A && R && !o3 && opc==1 && HasLSE()) return LDCLRB(ctx, dec);
 if(!size && !V && !A && R && !o3 && opc==2 && HasLSE()) return LDEORB(ctx, dec);
 if(!size && !V && !A && R && !o3 && opc==3 && HasLSE()) return LDSETB(ctx, dec);
 if(!size && !V && !A && R && !o3 && opc==4 && HasLSE()) return LDSMAXB(ctx, dec);
 if(!size && !V && !A && R && !o3 && opc==5 && HasLSE()) return LDSMINB(ctx, dec);
 if(!size && !V && !A && R && !o3 && opc==6 && HasLSE()) return LDUMAXB(ctx, dec);
 if(!size && !V && !A && R && !o3 && opc==7 && HasLSE()) return LDUMINB(ctx, dec);
 if(!size && !V && !A && R && o3 && !opc && HasLSE()) return SWPB(ctx, dec);
 if(!size && !V && A && !R && !o3 && !opc && HasLSE()) return LDADDB(ctx, dec);
 if(!size && !V && A && !R && !o3 && opc==1 && HasLSE()) return LDCLRB(ctx, dec);
 if(!size && !V && A && !R && !o3 && opc==2 && HasLSE()) return LDEORB(ctx, dec);
 if(!size && !V && A && !R && !o3 && opc==3 && HasLSE()) return LDSETB(ctx, dec);
 if(!size && !V && A && !R && !o3 && opc==4 && HasLSE()) return LDSMAXB(ctx, dec);
 if(!size && !V && A && !R && !o3 && opc==5 && HasLSE()) return LDSMINB(ctx, dec);
 if(!size && !V && A && !R && !o3 && opc==6 && HasLSE()) return LDUMAXB(ctx, dec);
 if(!size && !V && A && !R && !o3 && opc==7 && HasLSE()) return LDUMINB(ctx, dec);
 if(!size && !V && A && !R && o3 && !opc && HasLSE()) return SWPB(ctx, dec);
 if(!size && !V && A && !R && o3 && opc==4 && HasLRCPC()) return LDAPRB(ctx, dec);
 if(!size && !V && A && R && !o3 && !opc && HasLSE()) return LDADDB(ctx, dec);
 if(!size && !V && A && R && !o3 && opc==1 && HasLSE()) return LDCLRB(ctx, dec);
 if(!size && !V && A && R && !o3 && opc==2 && HasLSE()) return LDEORB(ctx, dec);
 if(!size && !V && A && R && !o3 && opc==3 && HasLSE()) return LDSETB(ctx, dec);
 if(!size && !V && A && R && !o3 && opc==4 && HasLSE()) return LDSMAXB(ctx, dec);
 if(!size && !V && A && R && !o3 && opc==5 && HasLSE()) return LDSMINB(ctx, dec);
 if(!size && !V && A && R && !o3 && opc==6 && HasLSE()) return LDUMAXB(ctx, dec);
 if(!size && !V && A && R && !o3 && opc==7 && HasLSE()) return LDUMINB(ctx, dec);
 if(!size && !V && A && R && o3 && !opc && HasLSE()) return SWPB(ctx, dec);
 if(size==1 && !V && !A && !R && !o3 && !opc && HasLSE()) return LDADDH(ctx, dec);
 if(size==1 && !V && !A && !R && !o3 && opc==1 && HasLSE()) return LDCLRH(ctx, dec);
 if(size==1 && !V && !A && !R && !o3 && opc==2 && HasLSE()) return LDEORH(ctx, dec);
 if(size==1 && !V && !A && !R && !o3 && opc==3 && HasLSE()) return LDSETH(ctx, dec);
 if(size==1 && !V && !A && !R && !o3 && opc==4 && HasLSE()) return LDSMAXH(ctx, dec);
 if(size==1 && !V && !A && !R && !o3 && opc==5 && HasLSE()) return LDSMINH(ctx, dec);
 if(size==1 && !V && !A && !R && !o3 && opc==6 && HasLSE()) return LDUMAXH(ctx, dec);
 if(size==1 && !V && !A && !R && !o3 && opc==7 && HasLSE()) return LDUMINH(ctx, dec);
 if(size==1 && !V && !A && !R && o3 && !opc && HasLSE()) return SWPH(ctx, dec);
 if(size==1 && !V && !A && !R && o3 && opc==1) UNALLOCATED(ENC_UNALLOCATED_155_MEMOP);
 if(size==1 && !V && !A && !R && o3 && opc==2) UNALLOCATED(ENC_UNALLOCATED_162_MEMOP);
 if(size==1 && !V && !A && !R && o3 && opc==3) UNALLOCATED(ENC_UNALLOCATED_169_MEMOP);
 if(size==1 && !V && !A && !R && o3 && opc==5) UNALLOCATED(ENC_UNALLOCATED_182_MEMOP);
 if(size==1 && !V && !A && R && !o3 && !opc && HasLSE()) return LDADDH(ctx, dec);
 if(size==1 && !V && !A && R && !o3 && opc==1 && HasLSE()) return LDCLRH(ctx, dec);
 if(size==1 && !V && !A && R && !o3 && opc==2 && HasLSE()) return LDEORH(ctx, dec);
 if(size==1 && !V && !A && R && !o3 && opc==3 && HasLSE()) return LDSETH(ctx, dec);
 if(size==1 && !V && !A && R && !o3 && opc==4 && HasLSE()) return LDSMAXH(ctx, dec);
 if(size==1 && !V && !A && R && !o3 && opc==5 && HasLSE()) return LDSMINH(ctx, dec);
 if(size==1 && !V && !A && R && !o3 && opc==6 && HasLSE()) return LDUMAXH(ctx, dec);
 if(size==1 && !V && !A && R && !o3 && opc==7 && HasLSE()) return LDUMINH(ctx, dec);
 if(size==1 && !V && !A && R && o3 && !opc && HasLSE()) return SWPH(ctx, dec);
 if(size==1 && !V && A && !R && !o3 && !opc && HasLSE()) return LDADDH(ctx, dec);
 if(size==1 && !V && A && !R && !o3 && opc==1 && HasLSE()) return LDCLRH(ctx, dec);
 if(size==1 && !V && A && !R && !o3 && opc==2 && HasLSE()) return LDEORH(ctx, dec);
 if(size==1 && !V && A && !R && !o3 && opc==3 && HasLSE()) return LDSETH(ctx, dec);
 if(size==1 && !V && A && !R && !o3 && opc==4 && HasLSE()) return LDSMAXH(ctx, dec);
 if(size==1 && !V && A && !R && !o3 && opc==5 && HasLSE()) return LDSMINH(ctx, dec);
 if(size==1 && !V && A && !R && !o3 && opc==6 && HasLSE()) return LDUMAXH(ctx, dec);
 if(size==1 && !V && A && !R && !o3 && opc==7 && HasLSE()) return LDUMINH(ctx, dec);
 if(size==1 && !V && A && !R && o3 && !opc && HasLSE()) return SWPH(ctx, dec);
 if(size==1 && !V && A && !R && o3 && opc==4 && HasLRCPC()) return LDAPRH(ctx, dec);
 if(size==1 && !V && A && R && !o3 && !opc && HasLSE()) return LDADDH(ctx, dec);
 if(size==1 && !V && A && R && !o3 && opc==1 && HasLSE()) return LDCLRH(ctx, dec);
 if(size==1 && !V && A && R && !o3 && opc==2 && HasLSE()) return LDEORH(ctx, dec);
 if(size==1 && !V && A && R && !o3 && opc==3 && HasLSE()) return LDSETH(ctx, dec);
 if(size==1 && !V && A && R && !o3 && opc==4 && HasLSE()) return LDSMAXH(ctx, dec);
 if(size==1 && !V && A && R && !o3 && opc==5 && HasLSE()) return LDSMINH(ctx, dec);
 if(size==1 && !V && A && R && !o3 && opc==6 && HasLSE()) return LDUMAXH(ctx, dec);
 if(size==1 && !V && A && R && !o3 && opc==7 && HasLSE()) return LDUMINH(ctx, dec);
 if(size==1 && !V && A && R && o3 && !opc && HasLSE()) return SWPH(ctx, dec);
 if(size==2 && !V && !A && !R && !o3 && !opc && HasLSE()) return LDADD(ctx, dec);
 if(size==2 && !V && !A && !R && !o3 && opc==1 && HasLSE()) return LDCLR(ctx, dec);
 if(size==2 && !V && !A && !R && !o3 && opc==2 && HasLSE()) return LDEOR(ctx, dec);
 if(size==2 && !V && !A && !R && !o3 && opc==3 && HasLSE()) return LDSET(ctx, dec);
 if(size==2 && !V && !A && !R && !o3 && opc==4 && HasLSE()) return LDSMAX(ctx, dec);
 if(size==2 && !V && !A && !R && !o3 && opc==5 && HasLSE()) return LDSMIN(ctx, dec);
 if(size==2 && !V && !A && !R && !o3 && opc==6 && HasLSE()) return LDUMAX(ctx, dec);
 if(size==2 && !V && !A && !R && !o3 && opc==7 && HasLSE()) return LDUMIN(ctx, dec);
 if(size==2 && !V && !A && !R && o3 && !opc && HasLSE()) return SWP(ctx, dec);
 if(size==2 && !V && !A && !R && o3 && opc==1) UNALLOCATED(ENC_UNALLOCATED_156_MEMOP);
 if(size==2 && !V && !A && !R && o3 && opc==2) UNALLOCATED(ENC_UNALLOCATED_163_MEMOP);
 if(size==2 && !V && !A && !R && o3 && opc==3) UNALLOCATED(ENC_UNALLOCATED_170_MEMOP);
 if(size==2 && !V && !A && !R && o3 && opc==5) UNALLOCATED(ENC_UNALLOCATED_183_MEMOP);
 if(size==2 && !V && !A && R && !o3 && !opc && HasLSE()) return LDADD(ctx, dec);
 if(size==2 && !V && !A && R && !o3 && opc==1 && HasLSE()) return LDCLR(ctx, dec);
 if(size==2 && !V && !A && R && !o3 && opc==2 && HasLSE()) return LDEOR(ctx, dec);
 if(size==2 && !V && !A && R && !o3 && opc==3 && HasLSE()) return LDSET(ctx, dec);
 if(size==2 && !V && !A && R && !o3 && opc==4 && HasLSE()) return LDSMAX(ctx, dec);
 if(size==2 && !V && !A && R && !o3 && opc==5 && HasLSE()) return LDSMIN(ctx, dec);
 if(size==2 && !V && !A && R && !o3 && opc==6 && HasLSE()) return LDUMAX(ctx, dec);
 if(size==2 && !V && !A && R && !o3 && opc==7 && HasLSE()) return LDUMIN(ctx, dec);
 if(size==2 && !V && !A && R && o3 && !opc && HasLSE()) return SWP(ctx, dec);
 if(size==2 && !V && A && !R && !o3 && !opc && HasLSE()) return LDADD(ctx, dec);
 if(size==2 && !V && A && !R && !o3 && opc==1 && HasLSE()) return LDCLR(ctx, dec);
 if(size==2 && !V && A && !R && !o3 && opc==2 && HasLSE()) return LDEOR(ctx, dec);
 if(size==2 && !V && A && !R && !o3 && opc==3 && HasLSE()) return LDSET(ctx, dec);
 if(size==2 && !V && A && !R && !o3 && opc==4 && HasLSE()) return LDSMAX(ctx, dec);
 if(size==2 && !V && A && !R && !o3 && opc==5 && HasLSE()) return LDSMIN(ctx, dec);
 if(size==2 && !V && A && !R && !o3 && opc==6 && HasLSE()) return LDUMAX(ctx, dec);
 if(size==2 && !V && A && !R && !o3 && opc==7 && HasLSE()) return LDUMIN(ctx, dec);
 if(size==2 && !V && A && !R && o3 && !opc && HasLSE()) return SWP(ctx, dec);
 if(size==2 && !V && A && !R && o3 && opc==4 && HasLRCPC()) return LDAPR(ctx, dec);
 if(size==2 && !V && A && R && !o3 && !opc && HasLSE()) return LDADD(ctx, dec);
 if(size==2 && !V && A && R && !o3 && opc==1 && HasLSE()) return LDCLR(ctx, dec);
 if(size==2 && !V && A && R && !o3 && opc==2 && HasLSE()) return LDEOR(ctx, dec);
 if(size==2 && !V && A && R && !o3 && opc==3 && HasLSE()) return LDSET(ctx, dec);
 if(size==2 && !V && A && R && !o3 && opc==4 && HasLSE()) return LDSMAX(ctx, dec);
 if(size==2 && !V && A && R && !o3 && opc==5 && HasLSE()) return LDSMIN(ctx, dec);
 if(size==2 && !V && A && R && !o3 && opc==6 && HasLSE()) return LDUMAX(ctx, dec);
 if(size==2 && !V && A && R && !o3 && opc==7 && HasLSE()) return LDUMIN(ctx, dec);
 if(size==2 && !V && A && R && o3 && !opc && HasLSE()) return SWP(ctx, dec);
 if(size==3 && !V && !A && !R && !o3 && !opc && HasLSE()) return LDADD(ctx, dec);
 if(size==3 && !V && !A && !R && !o3 && opc==1 && HasLSE()) return LDCLR(ctx, dec);
 if(size==3 && !V && !A && !R && !o3 && opc==2 && HasLSE()) return LDEOR(ctx, dec);
 if(size==3 && !V && !A && !R && !o3 && opc==3 && HasLSE()) return LDSET(ctx, dec);
 if(size==3 && !V && !A && !R && !o3 && opc==4 && HasLSE()) return LDSMAX(ctx, dec);
 if(size==3 && !V && !A && !R && !o3 && opc==5 && HasLSE()) return LDSMIN(ctx, dec);
 if(size==3 && !V && !A && !R && !o3 && opc==6 && HasLSE()) return LDUMAX(ctx, dec);
 if(size==3 && !V && !A && !R && !o3 && opc==7 && HasLSE()) return LDUMIN(ctx, dec);
 if(size==3 && !V && !A && !R && o3 && !opc && HasLSE()) return SWP(ctx, dec);
 if(size==3 && !V && !A && !R && o3 && opc==2 && HasLS64_V()) return ST64BV0(ctx, dec);
 if(size==3 && !V && !A && !R && o3 && opc==3 && HasLS64_V()) return ST64BV(ctx, dec);
 if(size==3 && !V && !A && R && !o3 && !opc && HasLSE()) return LDADD(ctx, dec);
 if(size==3 && !V && !A && R && !o3 && opc==1 && HasLSE()) return LDCLR(ctx, dec);
 if(size==3 && !V && !A && R && !o3 && opc==2 && HasLSE()) return LDEOR(ctx, dec);
 if(size==3 && !V && !A && R && !o3 && opc==3 && HasLSE()) return LDSET(ctx, dec);
 if(size==3 && !V && !A && R && !o3 && opc==4 && HasLSE()) return LDSMAX(ctx, dec);
 if(size==3 && !V && !A && R && !o3 && opc==5 && HasLSE()) return LDSMIN(ctx, dec);
 if(size==3 && !V && !A && R && !o3 && opc==6 && HasLSE()) return LDUMAX(ctx, dec);
 if(size==3 && !V && !A && R && !o3 && opc==7 && HasLSE()) return LDUMIN(ctx, dec);
 if(size==3 && !V && !A && R && o3 && !opc && HasLSE()) return SWP(ctx, dec);
 if(size==3 && !V && A && !R && !o3 && !opc && HasLSE()) return LDADD(ctx, dec);
 if(size==3 && !V && A && !R && !o3 && opc==1 && HasLSE()) return LDCLR(ctx, dec);
 if(size==3 && !V && A && !R && !o3 && opc==2 && HasLSE()) return LDEOR(ctx, dec);
 if(size==3 && !V && A && !R && !o3 && opc==3 && HasLSE()) return LDSET(ctx, dec);
 if(size==3 && !V && A && !R && !o3 && opc==4 && HasLSE()) return LDSMAX(ctx, dec);
 if(size==3 && !V && A && !R && !o3 && opc==5 && HasLSE()) return LDSMIN(ctx, dec);
 if(size==3 && !V && A && !R && !o3 && opc==6 && HasLSE()) return LDUMAX(ctx, dec);
 if(size==3 && !V && A && !R && !o3 && opc==7 && HasLSE()) return LDUMIN(ctx, dec);
 if(size==3 && !V && A && !R && o3 && !opc && HasLSE()) return SWP(ctx, dec);
 if(size==3 && !V && A && !R && o3 && opc==4 && HasLRCPC()) return LDAPR(ctx, dec);
 if(size==3 && !V && A && R && !o3 && !opc && HasLSE()) return LDADD(ctx, dec);
 if(size==3 && !V && A && R && !o3 && opc==1 && HasLSE()) return LDCLR(ctx, dec);
 if(size==3 && !V && A && R && !o3 && opc==2 && HasLSE()) return LDEOR(ctx, dec);
 if(size==3 && !V && A && R && !o3 && opc==3 && HasLSE()) return LDSET(ctx, dec);
 if(size==3 && !V && A && R && !o3 && opc==4 && HasLSE()) return LDSMAX(ctx, dec);
 if(size==3 && !V && A && R && !o3 && opc==5 && HasLSE()) return LDSMIN(ctx, dec);
 if(size==3 && !V && A && R && !o3 && opc==6 && HasLSE()) return LDUMAX(ctx, dec);
 if(size==3 && !V && A && R && !o3 && opc==7 && HasLSE()) return LDUMIN(ctx, dec);
 if(size==3 && !V && A && R && o3 && !opc && HasLSE()) return SWP(ctx, dec);
 if(!V && !A && R && o3 && opc==1) UNALLOCATED(ENC_UNALLOCATED_158_MEMOP);
 if(!V && !A && R && o3 && opc==2) UNALLOCATED(ENC_UNALLOCATED_165_MEMOP);
 if(!V && !A && R && o3 && opc==3) UNALLOCATED(ENC_UNALLOCATED_172_MEMOP);
 if(!V && !A && R && o3 && opc==5) UNALLOCATED(ENC_UNALLOCATED_185_MEMOP);
 if(!V && A && !R && o3 && opc==1) UNALLOCATED(ENC_UNALLOCATED_159_MEMOP);
 if(!V && A && !R && o3 && opc==2) UNALLOCATED(ENC_UNALLOCATED_166_MEMOP);
 if(!V && A && !R && o3 && opc==3) UNALLOCATED(ENC_UNALLOCATED_173_MEMOP);
 if(!V && A && !R && o3 && opc==5) UNALLOCATED(ENC_UNALLOCATED_186_MEMOP);
 if(!V && A && R && o3 && opc==1) UNALLOCATED(ENC_UNALLOCATED_160_MEMOP);
 if(!V && A && R && o3 && opc==2) UNALLOCATED(ENC_UNALLOCATED_167_MEMOP);
 if(!V && A && R && o3 && opc==3) UNALLOCATED(ENC_UNALLOCATED_174_MEMOP);
 if(!V && A && R && o3 && opc==4) UNALLOCATED(ENC_UNALLOCATED_180_MEMOP);
 if(!V && A && R && o3 && opc==5) UNALLOCATED(ENC_UNALLOCATED_187_MEMOP);
 if(!V && !A && o3 && opc==4) UNALLOCATED(ENC_UNALLOCATED_175_MEMOP);
 if(!V && o3 && (opc&6)==6) UNALLOCATED(ENC_UNALLOCATED_188_MEMOP);
 if(V) UNALLOCATED(ENC_UNALLOCATED_189_MEMOP);
 UNMATCHED;
}

int decode_iclass_comswap(context *ctx, Instruction *dec)
{
 uint32_t size=INSWORD>>30, L=(INSWORD>>22)&1, o0=(INSWORD>>15)&1, Rt2=(INSWORD>>10)&0x1f;
 if(!size && !L && !o0 && Rt2==0x1f && HasLSE()) return CASB(ctx, dec);
 if(!size && !L && o0 && Rt2==0x1f && HasLSE()) return CASB(ctx, dec);
 if(!size && L && !o0 && Rt2==0x1f && HasLSE()) return CASB(ctx, dec);
 if(!size && L && o0 && Rt2==0x1f && HasLSE()) return CASB(ctx, dec);
 if(size==1 && !L && !o0 && Rt2==0x1f && HasLSE()) return CASH(ctx, dec);
 if(size==1 && !L && o0 && Rt2==0x1f && HasLSE()) return CASH(ctx, dec);
 if(size==1 && L && !o0 && Rt2==0x1f && HasLSE()) return CASH(ctx, dec);
 if(size==1 && L && o0 && Rt2==0x1f && HasLSE()) return CASH(ctx, dec);
 if(size==2 && !L && !o0 && Rt2==0x1f && HasLSE()) return CAS(ctx, dec);
 if(size==2 && !L && o0 && Rt2==0x1f && HasLSE()) return CAS(ctx, dec);
 if(size==2 && L && !o0 && Rt2==0x1f && HasLSE()) return CAS(ctx, dec);
 if(size==2 && L && o0 && Rt2==0x1f && HasLSE()) return CAS(ctx, dec);
 if(size==3 && !L && !o0 && Rt2==0x1f && HasLSE()) return CAS(ctx, dec);
 if(size==3 && !L && o0 && Rt2==0x1f && HasLSE()) return CAS(ctx, dec);
 if(size==3 && L && !o0 && Rt2==0x1f && HasLSE()) return CAS(ctx, dec);
 if(size==3 && L && o0 && Rt2==0x1f && HasLSE()) return CAS(ctx, dec);
 if(Rt2!=0x1f) UNALLOCATED(ENC_UNALLOCATED_10_COMSWAP);
 UNMATCHED;
}

int decode_iclass_comswappr(context *ctx, Instruction *dec)
{
 uint32_t sz=(INSWORD>>30)&1, L=(INSWORD>>22)&1, o0=(INSWORD>>15)&1, Rt2=(INSWORD>>10)&0x1f;
 if(!sz && !L && !o0 && Rt2==0x1f && HasLSE()) return CASP(ctx, dec);
 if(!sz && !L && o0 && Rt2==0x1f && HasLSE()) return CASP(ctx, dec);
 if(!sz && L && !o0 && Rt2==0x1f && HasLSE()) return CASP(ctx, dec);
 if(!sz && L && o0 && Rt2==0x1f && HasLSE()) return CASP(ctx, dec);
 if(sz && !L && !o0 && Rt2==0x1f && HasLSE()) return CASP(ctx, dec);
 if(sz && !L && o0 && Rt2==0x1f && HasLSE()) return CASP(ctx, dec);
 if(sz && L && !o0 && Rt2==0x1f && HasLSE()) return CASP(ctx, dec);
 if(sz && L && o0 && Rt2==0x1f && HasLSE()) return CASP(ctx, dec);
 if(Rt2!=0x1f) UNALLOCATED(ENC_UNALLOCATED_10_COMSWAPPR);
 UNMATCHED;
}

int decode_iclass_ldapstl_unscaled(context *ctx, Instruction *dec)
{
 uint32_t size=INSWORD>>30, opc=(INSWORD>>22)&3;
 if(!size && !opc && HasLRCPC2()) return STLURB(ctx, dec);
 if(!size && opc==1 && HasLRCPC2()) return LDAPURB(ctx, dec);
 if(!size && opc==2 && HasLRCPC2()) return LDAPURSB(ctx, dec);
 if(!size && opc==3 && HasLRCPC2()) return LDAPURSB(ctx, dec);
 if(size==1 && !opc && HasLRCPC2()) return STLURH(ctx, dec);
 if(size==1 && opc==1 && HasLRCPC2()) return LDAPURH(ctx, dec);
 if(size==1 && opc==2 && HasLRCPC2()) return LDAPURSH(ctx, dec);
 if(size==1 && opc==3 && HasLRCPC2()) return LDAPURSH(ctx, dec);
 if(size==2 && !opc && HasLRCPC2()) return STLUR_gen(ctx, dec);
 if(size==2 && opc==1 && HasLRCPC2()) return LDAPUR_gen(ctx, dec);
 if(size==2 && opc==2 && HasLRCPC2()) return LDAPURSW(ctx, dec);
 if(size==2 && opc==3) UNALLOCATED(ENC_UNALLOCATED_24_LDAPSTL_UNSCALED);
 if(size==3 && !opc && HasLRCPC2()) return STLUR_gen(ctx, dec);
 if(size==3 && opc==1 && HasLRCPC2()) return LDAPUR_gen(ctx, dec);
 if(size==3 && opc==2) UNALLOCATED(ENC_UNALLOCATED_21_LDAPSTL_UNSCALED);
 if(size==3 && opc==3) UNALLOCATED(ENC_UNALLOCATED_25_LDAPSTL_UNSCALED);
 UNMATCHED;
}

int decode_iclass_loadlit(context *ctx, Instruction *dec)
{
 uint32_t opc=INSWORD>>30, V=(INSWORD>>26)&1;
 if(!opc && !V) return LDR_lit_gen(ctx, dec);
 if(!opc && V) return LDR_lit_fpsimd(ctx, dec);
 if(opc==1 && !V) return LDR_lit_gen(ctx, dec);
 if(opc==1 && V) return LDR_lit_fpsimd(ctx, dec);
 if(opc==2 && !V) return LDRSW_lit(ctx, dec);
 if(opc==2 && V) return LDR_lit_fpsimd(ctx, dec);
 if(opc==3 && !V) return PRFM_lit(ctx, dec);
 if(opc==3 && V) UNALLOCATED(ENC_UNALLOCATED_17_LOADLIT);
 UNMATCHED;
}

int decode_iclass_ldstexclp(context *ctx, Instruction *dec)
{
 uint32_t sz=(INSWORD>>30)&1, L=(INSWORD>>22)&1, o0=(INSWORD>>15)&1;
 if(!sz && !L && !o0) return STXP(ctx, dec);
 if(!sz && !L && o0) return STLXP(ctx, dec);
 if(!sz && L && !o0) return LDXP(ctx, dec);
 if(!sz && L && o0) return LDAXP(ctx, dec);
 if(sz && !L && !o0) return STXP(ctx, dec);
 if(sz && !L && o0) return STLXP(ctx, dec);
 if(sz && L && !o0) return LDXP(ctx, dec);
 if(sz && L && o0) return LDAXP(ctx, dec);
 UNMATCHED;
}

int decode_iclass_ldstexclr(context *ctx, Instruction *dec)
{
 uint32_t size=INSWORD>>30, L=(INSWORD>>22)&1, o0=(INSWORD>>15)&1;
 if(!size && !L && !o0) return STXRB(ctx, dec);
 if(!size && !L && o0) return STLXRB(ctx, dec);
 if(!size && L && !o0) return LDXRB(ctx, dec);
 if(!size && L && o0) return LDAXRB(ctx, dec);
 if(size==1 && !L && !o0) return STXRH(ctx, dec);
 if(size==1 && !L && o0) return STLXRH(ctx, dec);
 if(size==1 && L && !o0) return LDXRH(ctx, dec);
 if(size==1 && L && o0) return LDAXRH(ctx, dec);
 if(size==2 && !L && !o0) return STXR(ctx, dec);
 if(size==2 && !L && o0) return STLXR(ctx, dec);
 if(size==2 && L && !o0) return LDXR(ctx, dec);
 if(size==2 && L && o0) return LDAXR(ctx, dec);
 if(size==3 && !L && !o0) return STXR(ctx, dec);
 if(size==3 && !L && o0) return STLXR(ctx, dec);
 if(size==3 && L && !o0) return LDXR(ctx, dec);
 if(size==3 && L && o0) return LDAXR(ctx, dec);
 UNMATCHED;
}

int decode_iclass_ldsttags(context *ctx, Instruction *dec)
{
 uint32_t opc=(INSWORD>>22)&3, imm9=(INSWORD>>12)&0x1ff, op2=(INSWORD>>10)&3;
 if(!opc && !imm9 && !op2 && HasMTE2()) return STZGM(ctx, dec);
 if(opc==2 && imm9 && !op2) UNALLOCATED(ENC_UNALLOCATED_13_LDSTTAGS);
 if(opc==2 && !imm9 && !op2 && HasMTE2()) return STGM(ctx, dec);
 if(opc==3 && imm9 && !op2) UNALLOCATED(ENC_UNALLOCATED_15_LDSTTAGS);
 if(opc==3 && !imm9 && !op2 && HasMTE2()) return LDGM(ctx, dec);
 if(!opc && op2==1 && HasMTE()) return STG(ctx, dec);
 if(!opc && op2==2 && HasMTE()) return STG(ctx, dec);
 if(!opc && op2==3 && HasMTE()) return STG(ctx, dec);
 if(opc==1 && !op2 && HasMTE()) return LDG(ctx, dec);
 if(opc==1 && op2==1 && HasMTE()) return STZG(ctx, dec);
 if(opc==1 && op2==2 && HasMTE()) return STZG(ctx, dec);
 if(opc==1 && op2==3 && HasMTE()) return STZG(ctx, dec);
 if(opc==2 && op2==1 && HasMTE()) return ST2G(ctx, dec);
 if(opc==2 && op2==2 && HasMTE()) return ST2G(ctx, dec);
 if(opc==2 && op2==3 && HasMTE()) return ST2G(ctx, dec);
 if(opc==3 && op2==1 && HasMTE()) return STZ2G(ctx, dec);
 if(opc==3 && op2==2 && HasMTE()) return STZ2G(ctx, dec);
 if(opc==3 && op2==3 && HasMTE()) return STZ2G(ctx, dec);
 UNMATCHED;
}

int decode_iclass_ldstnapair_offs(context *ctx, Instruction *dec)
{
 uint32_t opc=INSWORD>>30, V=(INSWORD>>26)&1, L=(INSWORD>>22)&1;
 if(!opc && !V && !L) return STNP_gen(ctx, dec);
 if(!opc && !V && L) return LDNP_gen(ctx, dec);
 if(!opc && V && !L) return STNP_fpsimd(ctx, dec);
 if(!opc && V && L) return LDNP_fpsimd(ctx, dec);
 if(opc==1 && V && !L) return STNP_fpsimd(ctx, dec);
 if(opc==1 && V && L) return LDNP_fpsimd(ctx, dec);
 if(opc==2 && !V && !L) return STNP_gen(ctx, dec);
 if(opc==2 && !V && L) return LDNP_gen(ctx, dec);
 if(opc==2 && V && !L) return STNP_fpsimd(ctx, dec);
 if(opc==2 && V && L) return LDNP_fpsimd(ctx, dec);
 if(opc==1 && !V) UNALLOCATED(ENC_UNALLOCATED_12_LDSTNAPAIR_OFFS);
 if(opc==3) UNALLOCATED(ENC_UNALLOCATED_21_LDSTNAPAIR_OFFS);
 UNMATCHED;
}

int decode_iclass_ldstord(context *ctx, Instruction *dec)
{
 uint32_t size=INSWORD>>30, L=(INSWORD>>22)&1, o0=(INSWORD>>15)&1;
 if(!size && !L && !o0 && HasLOR()) return STLLRB(ctx, dec);
 if(!size && !L && o0) return STLRB(ctx, dec);
 if(!size && L && !o0 && HasLOR()) return LDLARB(ctx, dec);
 if(!size && L && o0) return LDARB(ctx, dec);
 if(size==1 && !L && !o0 && HasLOR()) return STLLRH(ctx, dec);
 if(size==1 && !L && o0) return STLRH(ctx, dec);
 if(size==1 && L && !o0 && HasLOR()) return LDLARH(ctx, dec);
 if(size==1 && L && o0) return LDARH(ctx, dec);
 if(size==2 && !L && !o0 && HasLOR()) return STLLR(ctx, dec);
 if(size==2 && !L && o0) return STLR(ctx, dec);
 if(size==2 && L && !o0 && HasLOR()) return LDLAR(ctx, dec);
 if(size==2 && L && o0) return LDAR(ctx, dec);
 if(size==3 && !L && !o0 && HasLOR()) return STLLR(ctx, dec);
 if(size==3 && !L && o0) return STLR(ctx, dec);
 if(size==3 && L && !o0 && HasLOR()) return LDLAR(ctx, dec);
 if(size==3 && L && o0) return LDAR(ctx, dec);
 UNMATCHED;
}

int decode_iclass_ldst_immpost(context *ctx, Instruction *dec)
{
 uint32_t size=INSWORD>>30, V=(INSWORD>>26)&1, opc=(INSWORD>>22)&3;
 if(!size && !V && !opc) return STRB_imm(ctx, dec);
 if(!size && !V && opc==1) return LDRB_imm(ctx, dec);
 if(!size && !V && opc==2) return LDRSB_imm(ctx, dec);
 if(!size && !V && opc==3) return LDRSB_imm(ctx, dec);
 if(!size && V && !opc) return STR_imm_fpsimd(ctx, dec);
 if(!size && V && opc==1) return LDR_imm_fpsimd(ctx, dec);
 if(!size && V && opc==2) return STR_imm_fpsimd(ctx, dec);
 if(!size && V && opc==3) return LDR_imm_fpsimd(ctx, dec);
 if(size==1 && !V && !opc) return STRH_imm(ctx, dec);
 if(size==1 && !V && opc==1) return LDRH_imm(ctx, dec);
 if(size==1 && !V && opc==2) return LDRSH_imm(ctx, dec);
 if(size==1 && !V && opc==3) return LDRSH_imm(ctx, dec);
 if(size==1 && V && !opc) return STR_imm_fpsimd(ctx, dec);
 if(size==1 && V && opc==1) return LDR_imm_fpsimd(ctx, dec);
 if(size==2 && !V && !opc) return STR_imm_gen(ctx, dec);
 if(size==2 && !V && opc==1) return LDR_imm_gen(ctx, dec);
 if(size==2 && !V && opc==2) return LDRSW_imm(ctx, dec);
 if(size==2 && V && !opc) return STR_imm_fpsimd(ctx, dec);
 if(size==2 && V && opc==1) return LDR_imm_fpsimd(ctx, dec);
 if(size==3 && !V && !opc) return STR_imm_gen(ctx, dec);
 if(size==3 && !V && opc==1) return LDR_imm_gen(ctx, dec);
 if(size==3 && !V && opc==2) UNALLOCATED(ENC_UNALLOCATED_21_LDST_IMMPOST);
 if(size==3 && V && !opc) return STR_imm_fpsimd(ctx, dec);
 if(size==3 && V && opc==1) return LDR_imm_fpsimd(ctx, dec);
 if((size&2)==2 && !V && opc==3) UNALLOCATED(ENC_UNALLOCATED_24_LDST_IMMPOST);
 if(size&1 && V && (opc&2)==2) UNALLOCATED(ENC_UNALLOCATED_35_LDST_IMMPOST);
 if((size&2)==2 && V && (opc&2)==2) UNALLOCATED(ENC_UNALLOCATED_36_LDST_IMMPOST);
 UNMATCHED;
}

int decode_iclass_ldst_immpre(context *ctx, Instruction *dec)
{
 uint32_t size=INSWORD>>30, V=(INSWORD>>26)&1, opc=(INSWORD>>22)&3;
 if(!size && !V && !opc) return STRB_imm(ctx, dec);
 if(!size && !V && opc==1) return LDRB_imm(ctx, dec);
 if(!size && !V && opc==2) return LDRSB_imm(ctx, dec);
 if(!size && !V && opc==3) return LDRSB_imm(ctx, dec);
 if(!size && V && !opc) return STR_imm_fpsimd(ctx, dec);
 if(!size && V && opc==1) return LDR_imm_fpsimd(ctx, dec);
 if(!size && V && opc==2) return STR_imm_fpsimd(ctx, dec);
 if(!size && V && opc==3) return LDR_imm_fpsimd(ctx, dec);
 if(size==1 && !V && !opc) return STRH_imm(ctx, dec);
 if(size==1 && !V && opc==1) return LDRH_imm(ctx, dec);
 if(size==1 && !V && opc==2) return LDRSH_imm(ctx, dec);
 if(size==1 && !V && opc==3) return LDRSH_imm(ctx, dec);
 if(size==1 && V && !opc) return STR_imm_fpsimd(ctx, dec);
 if(size==1 && V && opc==1) return LDR_imm_fpsimd(ctx, dec);
 if(size==2 && !V && !opc) return STR_imm_gen(ctx, dec);
 if(size==2 && !V && opc==1) return LDR_imm_gen(ctx, dec);
 if(size==2 && !V && opc==2) return LDRSW_imm(ctx, dec);
 if(size==2 && V && !opc) return STR_imm_fpsimd(ctx, dec);
 if(size==2 && V && opc==1) return LDR_imm_fpsimd(ctx, dec);
 if(size==3 && !V && !opc) return STR_imm_gen(ctx, dec);
 if(size==3 && !V && opc==1) return LDR_imm_gen(ctx, dec);
 if(size==3 && !V && opc==2) UNALLOCATED(ENC_UNALLOCATED_21_LDST_IMMPRE);
 if(size==3 && V && !opc) return STR_imm_fpsimd(ctx, dec);
 if(size==3 && V && opc==1) return LDR_imm_fpsimd(ctx, dec);
 if((size&2)==2 && !V && opc==3) UNALLOCATED(ENC_UNALLOCATED_24_LDST_IMMPRE);
 if(size&1 && V && (opc&2)==2) UNALLOCATED(ENC_UNALLOCATED_35_LDST_IMMPRE);
 if((size&2)==2 && V && (opc&2)==2) UNALLOCATED(ENC_UNALLOCATED_36_LDST_IMMPRE);
 UNMATCHED;
}

int decode_iclass_ldst_pac(context *ctx, Instruction *dec)
{
 uint32_t size=INSWORD>>30, V=(INSWORD>>26)&1, M=(INSWORD>>23)&1, W=(INSWORD>>11)&1;
 if(size==3 && !V && !M && !W && HasPAuth()) return LDRA(ctx, dec);
 if(size==3 && !V && !M && W && HasPAuth()) return LDRA(ctx, dec);
 if(size==3 && !V && M && !W && HasPAuth()) return LDRA(ctx, dec);
 if(size==3 && !V && M && W && HasPAuth()) return LDRA(ctx, dec);
 if(size==3 && V) UNALLOCATED(ENC_UNALLOCATED_15_LDST_PAC);
 if(size!=3) UNALLOCATED(ENC_UNALLOCATED_14_LDST_PAC);
 UNMATCHED;
}

int decode_iclass_ldst_regoff(context *ctx, Instruction *dec)
{
 uint32_t size=INSWORD>>30, V=(INSWORD>>26)&1, opc=(INSWORD>>22)&3, option=(INSWORD>>13)&7;
 if(!size && !V && !opc && option!=3) return STRB_reg(ctx, dec);
 if(!size && !V && !opc && option==3) return STRB_reg(ctx, dec);
 if(!size && !V && opc==1 && option!=3) return LDRB_reg(ctx, dec);
 if(!size && !V && opc==1 && option==3) return LDRB_reg(ctx, dec);
 if(!size && !V && opc==2 && option!=3) return LDRSB_reg(ctx, dec);
 if(!size && !V && opc==2 && option==3) return LDRSB_reg(ctx, dec);
 if(!size && !V && opc==3 && option!=3) return LDRSB_reg(ctx, dec);
 if(!size && !V && opc==3 && option==3) return LDRSB_reg(ctx, dec);
 if(!size && V && !opc && option!=3) return STR_reg_fpsimd(ctx, dec);
 if(!size && V && !opc && option==3) return STR_reg_fpsimd(ctx, dec);
 if(!size && V && opc==1 && option!=3) return LDR_reg_fpsimd(ctx, dec);
 if(!size && V && opc==1 && option==3) return LDR_reg_fpsimd(ctx, dec);
 if(!size && V && opc==2) return STR_reg_fpsimd(ctx, dec);
 if(!size && V && opc==3) return LDR_reg_fpsimd(ctx, dec);
 if(size==1 && !V && !opc) return STRH_reg(ctx, dec);
 if(size==1 && !V && opc==1) return LDRH_reg(ctx, dec);
 if(size==1 && !V && opc==2) return LDRSH_reg(ctx, dec);
 if(size==1 && !V && opc==3) return LDRSH_reg(ctx, dec);
 if(size==1 && V && !opc) return STR_reg_fpsimd(ctx, dec);
 if(size==1 && V && opc==1) return LDR_reg_fpsimd(ctx, dec);
 if(size==2 && !V && !opc) return STR_reg_gen(ctx, dec);
 if(size==2 && !V && opc==1) return LDR_reg_gen(ctx, dec);
 if(size==2 && !V && opc==2) return LDRSW_reg(ctx, dec);
 if(size==2 && V && !opc) return STR_reg_fpsimd(ctx, dec);
 if(size==2 && V && opc==1) return LDR_reg_fpsimd(ctx, dec);
 if(size==3 && !V && !opc) return STR_reg_gen(ctx, dec);
 if(size==3 && !V && opc==1) return LDR_reg_gen(ctx, dec);
 if(size==3 && !V && opc==2) return PRFM_reg(ctx, dec);
 if(size==3 && V && !opc) return STR_reg_fpsimd(ctx, dec);
 if(size==3 && V && opc==1) return LDR_reg_fpsimd(ctx, dec);
 if((size&2)==2 && !V && opc==3) UNALLOCATED(ENC_UNALLOCATED_28_LDST_REGOFF);
 if(size&1 && V && (opc&2)==2) UNALLOCATED(ENC_UNALLOCATED_41_LDST_REGOFF);
 if((size&2)==2 && V && (opc&2)==2) UNALLOCATED(ENC_UNALLOCATED_42_LDST_REGOFF);
 UNMATCHED;
}

int decode_iclass_ldst_unpriv(context *ctx, Instruction *dec)
{
 uint32_t size=INSWORD>>30, V=(INSWORD>>26)&1, opc=(INSWORD>>22)&3;
 if(!size && !V && !opc) return STTRB(ctx, dec);
 if(!size && !V && opc==1) return LDTRB(ctx, dec);
 if(!size && !V && opc==2) return LDTRSB(ctx, dec);
 if(!size && !V && opc==3) return LDTRSB(ctx, dec);
 if(size==1 && !V && !opc) return STTRH(ctx, dec);
 if(size==1 && !V && opc==1) return LDTRH(ctx, dec);
 if(size==1 && !V && opc==2) return LDTRSH(ctx, dec);
 if(size==1 && !V && opc==3) return LDTRSH(ctx, dec);
 if(size==2 && !V && !opc) return STTR(ctx, dec);
 if(size==2 && !V && opc==1) return LDTR(ctx, dec);
 if(size==2 && !V && opc==2) return LDTRSW(ctx, dec);
 if(size==3 && !V && !opc) return STTR(ctx, dec);
 if(size==3 && !V && opc==1) return LDTR(ctx, dec);
 if(size==3 && !V && opc==2) UNALLOCATED(ENC_UNALLOCATED_21_LDST_UNPRIV);
 if((size&2)==2 && !V && opc==3) UNALLOCATED(ENC_UNALLOCATED_24_LDST_UNPRIV);
 if(V) UNALLOCATED(ENC_UNALLOCATED_25_LDST_UNPRIV);
 UNMATCHED;
}

int decode_iclass_ldst_unscaled(context *ctx, Instruction *dec)
{
 uint32_t size=INSWORD>>30, V=(INSWORD>>26)&1, opc=(INSWORD>>22)&3;
 if(!size && !V && !opc) return STURB(ctx, dec);
 if(!size && !V && opc==1) return LDURB(ctx, dec);
 if(!size && !V && opc==2) return LDURSB(ctx, dec);
 if(!size && !V && opc==3) return LDURSB(ctx, dec);
 if(!size && V && !opc) return STUR_fpsimd(ctx, dec);
 if(!size && V && opc==1) return LDUR_fpsimd(ctx, dec);
 if(!size && V && opc==2) return STUR_fpsimd(ctx, dec);
 if(!size && V && opc==3) return LDUR_fpsimd(ctx, dec);
 if(size==1 && !V && !opc) return STURH(ctx, dec);
 if(size==1 && !V && opc==1) return LDURH(ctx, dec);
 if(size==1 && !V && opc==2) return LDURSH(ctx, dec);
 if(size==1 && !V && opc==3) return LDURSH(ctx, dec);
 if(size==1 && V && !opc) return STUR_fpsimd(ctx, dec);
 if(size==1 && V && opc==1) return LDUR_fpsimd(ctx, dec);
 if(size==2 && !V && !opc) return STUR_gen(ctx, dec);
 if(size==2 && !V && opc==1) return LDUR_gen(ctx, dec);
 if(size==2 && !V && opc==2) return LDURSW(ctx, dec);
 if(size==2 && V && !opc) return STUR_fpsimd(ctx, dec);
 if(size==2 && V && opc==1) return LDUR_fpsimd(ctx, dec);
 if(size==3 && !V && !opc) return STUR_gen(ctx, dec);
 if(size==3 && !V && opc==1) return LDUR_gen(ctx, dec);
 if(size==3 && !V && opc==2) return PRFUM(ctx, dec);
 if(size==3 && V && !opc) return STUR_fpsimd(ctx, dec);
 if(size==3 && V && opc==1) return LDUR_fpsimd(ctx, dec);
 if((size&2)==2 && !V && opc==3) UNALLOCATED(ENC_UNALLOCATED_24_LDST_UNSCALED);
 if(size&1 && V && (opc&2)==2) UNALLOCATED(ENC_UNALLOCATED_35_LDST_UNSCALED);
 if((size&2)==2 && V && (opc&2)==2) UNALLOCATED(ENC_UNALLOCATED_36_LDST_UNSCALED);
 UNMATCHED;
}

int decode_iclass_ldst_pos(context *ctx, Instruction *dec)
{
 uint32_t size=INSWORD>>30, V=(INSWORD>>26)&1, opc=(INSWORD>>22)&3;
 if(!size && !V && !opc) return STRB_imm(ctx, dec);
 if(!size && !V && opc==1) return LDRB_imm(ctx, dec);
 if(!size && !V && opc==2) return LDRSB_imm(ctx, dec);
 if(!size && !V && opc==3) return LDRSB_imm(ctx, dec);
 if(!size && V && !opc) return STR_imm_fpsimd(ctx, dec);
 if(!size && V && opc==1) return LDR_imm_fpsimd(ctx, dec);
 if(!size && V && opc==2) return STR_imm_fpsimd(ctx, dec);
 if(!size && V && opc==3) return LDR_imm_fpsimd(ctx, dec);
 if(size==1 && !V && !opc) return STRH_imm(ctx, dec);
 if(size==1 && !V && opc==1) return LDRH_imm(ctx, dec);
 if(size==1 && !V && opc==2) return LDRSH_imm(ctx, dec);
 if(size==1 && !V && opc==3) return LDRSH_imm(ctx, dec);
 if(size==1 && V && !opc) return STR_imm_fpsimd(ctx, dec);
 if(size==1 && V && opc==1) return LDR_imm_fpsimd(ctx, dec);
 if(size==2 && !V && !opc) return STR_imm_gen(ctx, dec);
 if(size==2 && !V && opc==1) return LDR_imm_gen(ctx, dec);
 if(size==2 && !V && opc==2) return LDRSW_imm(ctx, dec);
 if(size==2 && V && !opc) return STR_imm_fpsimd(ctx, dec);
 if(size==2 && V && opc==1) return LDR_imm_fpsimd(ctx, dec);
 if(size==3 && !V && !opc) return STR_imm_gen(ctx, dec);
 if(size==3 && !V && opc==1) return LDR_imm_gen(ctx, dec);
 if(size==3 && !V && opc==2) return PRFM_imm(ctx, dec);
 if(size==3 && V && !opc) return STR_imm_fpsimd(ctx, dec);
 if(size==3 && V && opc==1) return LDR_imm_fpsimd(ctx, dec);
 if((size&2)==2 && !V && opc==3) UNALLOCATED(ENC_UNALLOCATED_24_LDST_POS);
 if(size&1 && V && (opc&2)==2) UNALLOCATED(ENC_UNALLOCATED_35_LDST_POS);
 if((size&2)==2 && V && (opc&2)==2) UNALLOCATED(ENC_UNALLOCATED_36_LDST_POS);
 UNMATCHED;
}

int decode_iclass_ldstpair_off(context *ctx, Instruction *dec)
{
 uint32_t opc=INSWORD>>30, V=(INSWORD>>26)&1, L=(INSWORD>>22)&1;
 if(!opc && !V && !L) return STP_gen(ctx, dec);
 if(!opc && !V && L) return LDP_gen(ctx, dec);
 if(!opc && V && !L) return STP_fpsimd(ctx, dec);
 if(!opc && V && L) return LDP_fpsimd(ctx, dec);
 if(opc==1 && !V && !L && HasMTE()) return STGP(ctx, dec);
 if(opc==1 && !V && L) return LDPSW(ctx, dec);
 if(opc==1 && V && !L) return STP_fpsimd(ctx, dec);
 if(opc==1 && V && L) return LDP_fpsimd(ctx, dec);
 if(opc==2 && !V && !L) return STP_gen(ctx, dec);
 if(opc==2 && !V && L) return LDP_gen(ctx, dec);
 if(opc==2 && V && !L) return STP_fpsimd(ctx, dec);
 if(opc==2 && V && L) return LDP_fpsimd(ctx, dec);
 if(opc==3) UNALLOCATED(ENC_UNALLOCATED_22_LDSTPAIR_OFF);
 UNMATCHED;
}

int decode_iclass_ldstpair_post(context *ctx, Instruction *dec)
{
 uint32_t opc=INSWORD>>30, V=(INSWORD>>26)&1, L=(INSWORD>>22)&1;
 if(!opc && !V && !L) return STP_gen(ctx, dec);
 if(!opc && !V && L) return LDP_gen(ctx, dec);
 if(!opc && V && !L) return STP_fpsimd(ctx, dec);
 if(!opc && V && L) return LDP_fpsimd(ctx, dec);
 if(opc==1 && !V && !L && HasMTE()) return STGP(ctx, dec);
 if(opc==1 && !V && L) return LDPSW(ctx, dec);
 if(opc==1 && V && !L) return STP_fpsimd(ctx, dec);
 if(opc==1 && V && L) return LDP_fpsimd(ctx, dec);
 if(opc==2 && !V && !L) return STP_gen(ctx, dec);
 if(opc==2 && !V && L) return LDP_gen(ctx, dec);
 if(opc==2 && V && !L) return STP_fpsimd(ctx, dec);
 if(opc==2 && V && L) return LDP_fpsimd(ctx, dec);
 if(opc==3) UNALLOCATED(ENC_UNALLOCATED_22_LDSTPAIR_POST);
 UNMATCHED;
}

int decode_iclass_ldstpair_pre(context *ctx, Instruction *dec)
{
 uint32_t opc=INSWORD>>30, V=(INSWORD>>26)&1, L=(INSWORD>>22)&1;
 if(!opc && !V && !L) return STP_gen(ctx, dec);
 if(!opc && !V && L) return LDP_gen(ctx, dec);
 if(!opc && V && !L) return STP_fpsimd(ctx, dec);
 if(!opc && V && L) return LDP_fpsimd(ctx, dec);
 if(opc==1 && !V && !L && HasMTE()) return STGP(ctx, dec);
 if(opc==1 && !V && L) return LDPSW(ctx, dec);
 if(opc==1 && V && !L) return STP_fpsimd(ctx, dec);
 if(opc==1 && V && L) return LDP_fpsimd(ctx, dec);
 if(opc==2 && !V && !L) return STP_gen(ctx, dec);
 if(opc==2 && !V && L) return LDP_gen(ctx, dec);
 if(opc==2 && V && !L) return STP_fpsimd(ctx, dec);
 if(opc==2 && V && L) return LDP_fpsimd(ctx, dec);
 if(opc==3) UNALLOCATED(ENC_UNALLOCATED_22_LDSTPAIR_PRE);
 UNMATCHED;
}

int decode_iclass_sve_int_mlas_vvv_pred(context *ctx, Instruction *dec)
{
 uint32_t op=(INSWORD>>13)&1;
 if(!op) return mla_z_p_zzz(ctx, dec);
 if(op) return mls_z_p_zzz(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_int_mladdsub_vvv_pred(context *ctx, Instruction *dec)
{
 uint32_t op=(INSWORD>>13)&1;
 if(!op) return mad_z_p_zzz(ctx, dec);
 if(op) return msb_z_p_zzz(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_int_bin_cons_arit_0(context *ctx, Instruction *dec)
{
 uint32_t opc=(INSWORD>>10)&7;
 if(!opc) return add_z_zz(ctx, dec);
 if(opc==1) return sub_z_zz(ctx, dec);
 if(opc==4) return sqadd_z_zz(ctx, dec);
 if(opc==5) return uqadd_z_zz(ctx, dec);
 if(opc==6) return sqsub_z_zz(ctx, dec);
 if(opc==7) return uqsub_z_zz(ctx, dec);
 if((opc&6)==2) UNALLOCATED(ENC_UNALLOCATED_137);
 UNMATCHED;
}

int decode_iclass_addsub_imm(context *ctx, Instruction *dec)
{
 uint32_t sf=INSWORD>>31, op=(INSWORD>>30)&1, S=(INSWORD>>29)&1;
 if(!sf && !op && !S) return ADD_addsub_imm(ctx, dec);
 if(!sf && !op && S) return ADDS_addsub_imm(ctx, dec);
 if(!sf && op && !S) return SUB_addsub_imm(ctx, dec);
 if(!sf && op && S) return SUBS_addsub_imm(ctx, dec);
 if(sf && !op && !S) return ADD_addsub_imm(ctx, dec);
 if(sf && !op && S) return ADDS_addsub_imm(ctx, dec);
 if(sf && op && !S) return SUB_addsub_imm(ctx, dec);
 if(sf && op && S) return SUBS_addsub_imm(ctx, dec);
 UNMATCHED;
}

int decode_iclass_addsub_immtags(context *ctx, Instruction *dec)
{
 uint32_t sf=INSWORD>>31, op=(INSWORD>>30)&1, S=(INSWORD>>29)&1, o2=(INSWORD>>22)&1;
 if(sf && !op && !S && !o2 && HasMTE()) return ADDG(ctx, dec);
 if(sf && op && !S && !o2 && HasMTE()) return SUBG(ctx, dec);
 if(sf && S && !o2) UNALLOCATED(ENC_UNALLOCATED_11_ADDSUB_IMMTAGS);
 if(!sf && !o2) UNALLOCATED(ENC_UNALLOCATED_10_ADDSUB_IMMTAGS);
 if(o2) UNALLOCATED(ENC_UNALLOCATED_14_ADDSUB_IMMTAGS);
 UNMATCHED;
}

int decode_iclass_bitfield(context *ctx, Instruction *dec)
{
 uint32_t sf=INSWORD>>31, opc=(INSWORD>>29)&3, N=(INSWORD>>22)&1;
 if(!sf && !opc && !N) return SBFM(ctx, dec);
 if(!sf && opc==1 && !N) return BFM(ctx, dec);
 if(!sf && opc==2 && !N) return UBFM(ctx, dec);
 if(sf && !opc && N) return SBFM(ctx, dec);
 if(sf && opc==1 && N) return BFM(ctx, dec);
 if(sf && opc==2 && N) return UBFM(ctx, dec);
 if(opc==3) UNALLOCATED(ENC_UNALLOCATED_19_BITFIELD);
 if(!sf && N) UNALLOCATED(ENC_UNALLOCATED_12_BITFIELD);
 if(sf && !N) UNALLOCATED(ENC_UNALLOCATED_11_BITFIELD);
 UNMATCHED;
}

int decode_iclass_extract(context *ctx, Instruction *dec)
{
 uint32_t sf=INSWORD>>31, op21=(INSWORD>>29)&3, N=(INSWORD>>22)&1, o0=(INSWORD>>21)&1, imms=(INSWORD>>10)&0x3f;
 if(!sf && !op21 && !N && !o0 && !(imms&0x20)) return EXTR(ctx, dec);
 if(sf && !op21 && N && !o0) return EXTR(ctx, dec);
 if(!op21 && o0) UNALLOCATED(ENC_UNALLOCATED_16_EXTRACT);
 if(!sf && (imms&0x20)==0x20) UNALLOCATED(ENC_UNALLOCATED_13_EXTRACT);
 if(!sf && N) UNALLOCATED(ENC_UNALLOCATED_12_EXTRACT);
 if(sf && !N) UNALLOCATED(ENC_UNALLOCATED_11_EXTRACT);
 if(op21&1) UNALLOCATED(ENC_UNALLOCATED_17_EXTRACT);
 if((op21&2)==2) UNALLOCATED(ENC_UNALLOCATED_18_EXTRACT);
 UNMATCHED;
}

int decode_iclass_log_imm(context *ctx, Instruction *dec)
{
 uint32_t sf=INSWORD>>31, opc=(INSWORD>>29)&3, N=(INSWORD>>22)&1;
 if(!sf && !opc && !N) return AND_log_imm(ctx, dec);
 if(!sf && opc==1 && !N) return ORR_log_imm(ctx, dec);
 if(!sf && opc==2 && !N) return EOR_log_imm(ctx, dec);
 if(!sf && opc==3 && !N) return ANDS_log_imm(ctx, dec);
 if(sf && !opc) return AND_log_imm(ctx, dec);
 if(sf && opc==1) return ORR_log_imm(ctx, dec);
 if(sf && opc==2) return EOR_log_imm(ctx, dec);
 if(sf && opc==3) return ANDS_log_imm(ctx, dec);
 if(!sf && N) UNALLOCATED(ENC_UNALLOCATED_10_LOG_IMM);
 UNMATCHED;
}

int decode_iclass_movewide(context *ctx, Instruction *dec)
{
 uint32_t sf=INSWORD>>31, opc=(INSWORD>>29)&3, hw=(INSWORD>>21)&3;
 if(!sf && !opc && !(hw&2)) return MOVN(ctx, dec);
 if(!sf && opc==2 && !(hw&2)) return MOVZ(ctx, dec);
 if(!sf && opc==3 && !(hw&2)) return MOVK(ctx, dec);
 if(sf && !opc) return MOVN(ctx, dec);
 if(sf && opc==2) return MOVZ(ctx, dec);
 if(sf && opc==3) return MOVK(ctx, dec);
 if(opc==1) UNALLOCATED(ENC_UNALLOCATED_13_MOVEWIDE);
 if(!sf && (hw&2)==2) UNALLOCATED(ENC_UNALLOCATED_10_MOVEWIDE);
 UNMATCHED;
}

int decode_iclass_pcreladdr(context *ctx, Instruction *dec)
{
 uint32_t op=INSWORD>>31;
 if(!op) return ADR(ctx, dec);
 if(op) return ADRP(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_int_bin_cons_log(context *ctx, Instruction *dec)
{
 uint32_t opc=(INSWORD>>22)&3;
 if(!opc) return and_z_zz(ctx, dec);
 if(opc==1) return orr_z_zz(ctx, dec);
 if(opc==2) return eor_z_zz(ctx, dec);
 if(opc==3) return bic_z_zz(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_int_tern_log(context *ctx, Instruction *dec)
{
 uint32_t opc=(INSWORD>>22)&3, o2=(INSWORD>>10)&1;
 if(!opc && !o2) return eor3_z_zzz(ctx, dec);
 if(!opc && o2) return bsl_z_zzz(ctx, dec);
 if(opc==1 && !o2) return bcax_z_zzz(ctx, dec);
 if(opc==1 && o2) return bsl1n_z_zzz(ctx, dec);
 if(opc==2 && o2) return bsl2n_z_zzz(ctx, dec);
 if(opc==3 && o2) return nbsl_z_zzz(ctx, dec);
 if((opc&2)==2 && !o2) UNALLOCATED(ENC_UNALLOCATED_156);
 UNMATCHED;
}

int decode_iclass_sve_int_rotate_imm(context *ctx, Instruction *dec)
{
 return xar_z_zzi(ctx, dec);
}

int decode_iclass_sve_int_index_ii(context *ctx, Instruction *dec)
{
 return index_z_ii(ctx, dec);
}

int decode_iclass_sve_int_index_ir(context *ctx, Instruction *dec)
{
 return index_z_ir(ctx, dec);
}

int decode_iclass_sve_int_index_ri(context *ctx, Instruction *dec)
{
 return index_z_ri(ctx, dec);
}

int decode_iclass_sve_int_index_rr(context *ctx, Instruction *dec)
{
 return index_z_rr(ctx, dec);
}

int decode_iclass_sve_int_arith_vl(context *ctx, Instruction *dec)
{
 uint32_t op=(INSWORD>>22)&1;
 if(!op) return addvl_r_ri(ctx, dec);
 if(op) return addpl_r_ri(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_int_read_vl_a(context *ctx, Instruction *dec)
{
 uint32_t op=(INSWORD>>22)&1, opc2=(INSWORD>>16)&0x1f;
 if(!op && opc2==0x1e) UNALLOCATED(ENC_UNALLOCATED_163);
 if(!op && opc2==0x1f) return rdvl_r_i(ctx, dec);
 if(!op && (opc2&0x1e)==0x1c) UNALLOCATED(ENC_UNALLOCATED_162);
 if(!op && (opc2&0x1c)==0x18) UNALLOCATED(ENC_UNALLOCATED_161);
 if(!op && (opc2&0x18)==0x10) UNALLOCATED(ENC_UNALLOCATED_160);
 if(!op && !(opc2&0x10)) UNALLOCATED(ENC_UNALLOCATED_157);
 if(op) UNALLOCATED(ENC_UNALLOCATED_164);
 UNMATCHED;
}

int decode_iclass_addsub_ext(context *ctx, Instruction *dec)
{
 uint32_t sf=INSWORD>>31, op=(INSWORD>>30)&1, S=(INSWORD>>29)&1, opt=(INSWORD>>22)&3, imm3=(INSWORD>>10)&7;
 if(!sf && !op && !S && !opt) return ADD_addsub_ext(ctx, dec);
 if(!sf && !op && S && !opt) return ADDS_addsub_ext(ctx, dec);
 if(!sf && op && !S && !opt) return SUB_addsub_ext(ctx, dec);
 if(!sf && op && S && !opt) return SUBS_addsub_ext(ctx, dec);
 if(sf && !op && !S && !opt) return ADD_addsub_ext(ctx, dec);
 if(sf && !op && S && !opt) return ADDS_addsub_ext(ctx, dec);
 if(sf && op && !S && !opt) return SUB_addsub_ext(ctx, dec);
 if(sf && op && S && !opt) return SUBS_addsub_ext(ctx, dec);
 if((imm3&5)==5) UNALLOCATED(ENC_UNALLOCATED_12_ADDSUB_EXT);
 if((imm3&6)==6) UNALLOCATED(ENC_UNALLOCATED_13_ADDSUB_EXT);
 if(opt&1) UNALLOCATED(ENC_UNALLOCATED_11_ADDSUB_EXT);
 if((opt&2)==2) UNALLOCATED(ENC_UNALLOCATED_10_ADDSUB_EXT);
 UNMATCHED;
}

int decode_iclass_addsub_shift(context *ctx, Instruction *dec)
{
 uint32_t sf=INSWORD>>31, op=(INSWORD>>30)&1, S=(INSWORD>>29)&1, shift=(INSWORD>>22)&3, imm6=(INSWORD>>10)&0x3f;
 if(!sf && !op && !S) return ADD_addsub_shift(ctx, dec);
 if(!sf && !op && S) return ADDS_addsub_shift(ctx, dec);
 if(!sf && op && !S) return SUB_addsub_shift(ctx, dec);
 if(!sf && op && S) return SUBS_addsub_shift(ctx, dec);
 if(sf && !op && !S) return ADD_addsub_shift(ctx, dec);
 if(sf && !op && S) return ADDS_addsub_shift(ctx, dec);
 if(sf && op && !S) return SUB_addsub_shift(ctx, dec);
 if(sf && op && S) return SUBS_addsub_shift(ctx, dec);
 if(shift==3) UNALLOCATED(ENC_UNALLOCATED_10_ADDSUB_SHIFT);
 if(!sf && (imm6&0x20)==0x20) UNALLOCATED(ENC_UNALLOCATED_11_ADDSUB_SHIFT);
 UNMATCHED;
}

int decode_iclass_addsub_carry(context *ctx, Instruction *dec)
{
 uint32_t sf=INSWORD>>31, op=(INSWORD>>30)&1, S=(INSWORD>>29)&1;
 if(!sf && !op && !S) return ADC(ctx, dec);
 if(!sf && !op && S) return ADCS(ctx, dec);
 if(!sf && op && !S) return SBC(ctx, dec);
 if(!sf && op && S) return SBCS(ctx, dec);
 if(sf && !op && !S) return ADC(ctx, dec);
 if(sf && !op && S) return ADCS(ctx, dec);
 if(sf && op && !S) return SBC(ctx, dec);
 if(sf && op && S) return SBCS(ctx, dec);
 UNMATCHED;
}

int decode_iclass_condcmp_imm(context *ctx, Instruction *dec)
{
 uint32_t sf=INSWORD>>31, op=(INSWORD>>30)&1, S=(INSWORD>>29)&1, o2=(INSWORD>>10)&1, o3=(INSWORD>>4)&1;
 if(!sf && !op && S && !o2 && !o3) return CCMN_imm(ctx, dec);
 if(!sf && op && S && !o2 && !o3) return CCMP_imm(ctx, dec);
 if(sf && !op && S && !o2 && !o3) return CCMN_imm(ctx, dec);
 if(sf && op && S && !o2 && !o3) return CCMP_imm(ctx, dec);
 if(o3) UNALLOCATED(ENC_UNALLOCATED_11_CONDCMP_IMM);
 if(o2) UNALLOCATED(ENC_UNALLOCATED_10_CONDCMP_IMM);
 if(!S) UNALLOCATED(ENC_UNALLOCATED_12_CONDCMP_IMM);
 UNMATCHED;
}

int decode_iclass_condcmp_reg(context *ctx, Instruction *dec)
{
 uint32_t sf=INSWORD>>31, op=(INSWORD>>30)&1, S=(INSWORD>>29)&1, o2=(INSWORD>>10)&1, o3=(INSWORD>>4)&1;
 if(!sf && !op && S && !o2 && !o3) return CCMN_reg(ctx, dec);
 if(!sf && op && S && !o2 && !o3) return CCMP_reg(ctx, dec);
 if(sf && !op && S && !o2 && !o3) return CCMN_reg(ctx, dec);
 if(sf && op && S && !o2 && !o3) return CCMP_reg(ctx, dec);
 if(o3) UNALLOCATED(ENC_UNALLOCATED_11_CONDCMP_REG);
 if(o2) UNALLOCATED(ENC_UNALLOCATED_10_CONDCMP_REG);
 if(!S) UNALLOCATED(ENC_UNALLOCATED_12_CONDCMP_REG);
 UNMATCHED;
}

int decode_iclass_condsel(context *ctx, Instruction *dec)
{
 uint32_t sf=INSWORD>>31, op=(INSWORD>>30)&1, S=(INSWORD>>29)&1, op2=(INSWORD>>10)&3;
 if(!sf && !op && !S && !op2) return CSEL(ctx, dec);
 if(!sf && !op && !S && op2==1) return CSINC(ctx, dec);
 if(!sf && op && !S && !op2) return CSINV(ctx, dec);
 if(!sf && op && !S && op2==1) return CSNEG(ctx, dec);
 if(sf && !op && !S && !op2) return CSEL(ctx, dec);
 if(sf && !op && !S && op2==1) return CSINC(ctx, dec);
 if(sf && op && !S && !op2) return CSINV(ctx, dec);
 if(sf && op && !S && op2==1) return CSNEG(ctx, dec);
 if((op2&2)==2) UNALLOCATED(ENC_UNALLOCATED_10_CONDSEL);
 if(S) UNALLOCATED(ENC_UNALLOCATED_11_CONDSEL);
 UNMATCHED;
}

int decode_iclass_dp_1src(context *ctx, Instruction *dec)
{
 uint32_t sf=INSWORD>>31, S=(INSWORD>>29)&1, opcode2=(INSWORD>>16)&0x1f, opcode=(INSWORD>>10)&0x3f, Rn=(INSWORD>>5)&0x1f;
 if(sf && !S && opcode2==1 && opcode==8 && Rn==0x1f && HasPAuth()) return PACIA(ctx, dec);
 if(sf && !S && opcode2==1 && opcode==9 && Rn==0x1f && HasPAuth()) return PACIB(ctx, dec);
 if(sf && !S && opcode2==1 && opcode==10 && Rn==0x1f && HasPAuth()) return PACDA(ctx, dec);
 if(sf && !S && opcode2==1 && opcode==11 && Rn==0x1f && HasPAuth()) return PACDB(ctx, dec);
 if(sf && !S && opcode2==1 && opcode==12 && Rn==0x1f && HasPAuth()) return AUTIA(ctx, dec);
 if(sf && !S && opcode2==1 && opcode==13 && Rn==0x1f && HasPAuth()) return AUTIB(ctx, dec);
 if(sf && !S && opcode2==1 && opcode==14 && Rn==0x1f && HasPAuth()) return AUTDA(ctx, dec);
 if(sf && !S && opcode2==1 && opcode==15 && Rn==0x1f && HasPAuth()) return AUTDB(ctx, dec);
 if(sf && !S && opcode2==1 && opcode==0x10 && Rn==0x1f && HasPAuth()) return XPAC(ctx, dec);
 if(sf && !S && opcode2==1 && opcode==0x11 && Rn==0x1f && HasPAuth()) return XPAC(ctx, dec);
 if(!sf && !S && !opcode2 && !opcode) return RBIT_int(ctx, dec);
 if(!sf && !S && !opcode2 && opcode==1) return REV16_int(ctx, dec);
 if(!sf && !S && !opcode2 && opcode==2) return REV(ctx, dec);
 if(!sf && !S && !opcode2 && opcode==3) UNALLOCATED(ENC_UNALLOCATED_28_DP_1SRC);
 if(!sf && !S && !opcode2 && opcode==4) return CLZ_int(ctx, dec);
 if(!sf && !S && !opcode2 && opcode==5) return CLS_int(ctx, dec);
 if(sf && !S && !opcode2 && !opcode) return RBIT_int(ctx, dec);
 if(sf && !S && !opcode2 && opcode==1) return REV16_int(ctx, dec);
 if(sf && !S && !opcode2 && opcode==2) return REV32_int(ctx, dec);
 if(sf && !S && !opcode2 && opcode==3) return REV(ctx, dec);
 if(sf && !S && !opcode2 && opcode==4) return CLZ_int(ctx, dec);
 if(sf && !S && !opcode2 && opcode==5) return CLS_int(ctx, dec);
 if(sf && !S && opcode2==1 && !opcode && HasPAuth()) return PACIA(ctx, dec);
 if(sf && !S && opcode2==1 && opcode==1 && HasPAuth()) return PACIB(ctx, dec);
 if(sf && !S && opcode2==1 && opcode==2 && HasPAuth()) return PACDA(ctx, dec);
 if(sf && !S && opcode2==1 && opcode==3 && HasPAuth()) return PACDB(ctx, dec);
 if(sf && !S && opcode2==1 && opcode==4 && HasPAuth()) return AUTIA(ctx, dec);
 if(sf && !S && opcode2==1 && opcode==5 && HasPAuth()) return AUTIB(ctx, dec);
 if(sf && !S && opcode2==1 && opcode==6 && HasPAuth()) return AUTDA(ctx, dec);
 if(sf && !S && opcode2==1 && opcode==7 && HasPAuth()) return AUTDB(ctx, dec);
 if(sf && !S && opcode2==1 && (opcode&0x3e)==0x12) UNALLOCATED(ENC_UNALLOCATED_15_DP_1SRC);
 if(!S && !opcode2 && (opcode&0x3e)==6) UNALLOCATED(ENC_UNALLOCATED_34_DP_1SRC);
 if(sf && !S && opcode2==1 && (opcode&0x3c)==0x14) UNALLOCATED(ENC_UNALLOCATED_16_DP_1SRC);
 if(sf && !S && opcode2==1 && (opcode&0x38)==0x18) UNALLOCATED(ENC_UNALLOCATED_17_DP_1SRC);
 if(!S && !opcode2 && (opcode&0x38)==8) UNALLOCATED(ENC_UNALLOCATED_11_DP_1SRC);
 if(!S && !opcode2 && (opcode&0x30)==0x10) UNALLOCATED(ENC_UNALLOCATED_12_DP_1SRC);
 if(!sf && opcode2==1) UNALLOCATED(ENC_UNALLOCATED_14_DP_1SRC);
 if((opcode&0x20)==0x20) UNALLOCATED(ENC_UNALLOCATED_13_DP_1SRC);
 if((opcode2&2)==2) UNALLOCATED(ENC_UNALLOCATED_18_DP_1SRC);
 if((opcode2&4)==4) UNALLOCATED(ENC_UNALLOCATED_19_DP_1SRC);
 if((opcode2&8)==8) UNALLOCATED(ENC_UNALLOCATED_20_DP_1SRC);
 if((opcode2&0x10)==0x10) UNALLOCATED(ENC_UNALLOCATED_21_DP_1SRC);
 if(S) UNALLOCATED(ENC_UNALLOCATED_10_DP_1SRC);
 UNMATCHED;
}

int decode_iclass_dp_2src(context *ctx, Instruction *dec)
{
 uint32_t sf=INSWORD>>31, S=(INSWORD>>29)&1, opcode=(INSWORD>>10)&0x3f;
 if(!sf && !S && opcode==2) return UDIV(ctx, dec);
 if(!sf && !S && opcode==3) return SDIV(ctx, dec);
 if(!sf && !S && opcode==8) return LSLV(ctx, dec);
 if(!sf && !S && opcode==9) return LSRV(ctx, dec);
 if(!sf && !S && opcode==10) return ASRV(ctx, dec);
 if(!sf && !S && opcode==11) return RORV(ctx, dec);
 if(!sf && !S && opcode==12) UNALLOCATED(ENC_UNALLOCATED_36_DP_2SRC);
 if(!sf && !S && opcode==0x10) return CRC32(ctx, dec);
 if(!sf && !S && opcode==0x11) return CRC32(ctx, dec);
 if(!sf && !S && opcode==0x12) return CRC32(ctx, dec);
 if(!sf && !S && opcode==0x14) return CRC32C(ctx, dec);
 if(!sf && !S && opcode==0x15) return CRC32C(ctx, dec);
 if(!sf && !S && opcode==0x16) return CRC32C(ctx, dec);
 if(sf && !S && !opcode && HasMTE()) return SUBP(ctx, dec);
 if(sf && !S && opcode==2) return UDIV(ctx, dec);
 if(sf && !S && opcode==3) return SDIV(ctx, dec);
 if(sf && !S && opcode==4 && HasMTE()) return IRG(ctx, dec);
 if(sf && !S && opcode==5 && HasMTE()) return GMI(ctx, dec);
 if(sf && !S && opcode==8) return LSLV(ctx, dec);
 if(sf && !S && opcode==9) return LSRV(ctx, dec);
 if(sf && !S && opcode==10) return ASRV(ctx, dec);
 if(sf && !S && opcode==11) return RORV(ctx, dec);
 if(sf && !S && opcode==12 && HasPAuth()) return PACGA(ctx, dec);
 if(sf && !S && opcode==0x13) return CRC32(ctx, dec);
 if(sf && !S && opcode==0x17) return CRC32C(ctx, dec);
 if(sf && S && !opcode && HasMTE()) return SUBPS(ctx, dec);
 if(!S && opcode==13) UNALLOCATED(ENC_UNALLOCATED_34_DP_2SRC);
 if(!sf && !opcode) UNALLOCATED(ENC_UNALLOCATED_11_DP_2SRC);
 if(!sf && !S && (opcode&0x3e)==4) UNALLOCATED(ENC_UNALLOCATED_21_DP_2SRC);
 if(!sf && !S && (opcode&0x3b)==0x13) UNALLOCATED(ENC_UNALLOCATED_47_DP_2SRC);
 if(opcode==1) UNALLOCATED(ENC_UNALLOCATED_14_DP_2SRC);
 if(!S && (opcode&0x3e)==6) UNALLOCATED(ENC_UNALLOCATED_24_DP_2SRC);
 if(!S && (opcode&0x3e)==14) UNALLOCATED(ENC_UNALLOCATED_35_DP_2SRC);
 if(S && (opcode&0x3e)==2) UNALLOCATED(ENC_UNALLOCATED_15_DP_2SRC);
 if(sf && !S && (opcode&0x39)==0x10) UNALLOCATED(ENC_UNALLOCATED_49_DP_2SRC);
 if(sf && !S && (opcode&0x3a)==0x10) UNALLOCATED(ENC_UNALLOCATED_48_DP_2SRC);
 if(S && (opcode&0x3c)==4) UNALLOCATED(ENC_UNALLOCATED_20_DP_2SRC);
 if(S && (opcode&0x38)==8) UNALLOCATED(ENC_UNALLOCATED_25_DP_2SRC);
 if((opcode&0x38)==0x18) UNALLOCATED(ENC_UNALLOCATED_50_DP_2SRC);
 if(S && (opcode&0x30)==0x10) UNALLOCATED(ENC_UNALLOCATED_38_DP_2SRC);
 if((opcode&0x20)==0x20) UNALLOCATED(ENC_UNALLOCATED_51_DP_2SRC);
 UNMATCHED;
}

int decode_iclass_dp_3src(context *ctx, Instruction *dec)
{
 uint32_t sf=INSWORD>>31, op54=(INSWORD>>29)&3, op31=(INSWORD>>21)&7, o0=(INSWORD>>15)&1;
 if(!sf && !op54 && !op31 && !o0) return MADD(ctx, dec);
 if(!sf && !op54 && !op31 && o0) return MSUB(ctx, dec);
 if(!sf && !op54 && op31==1 && !o0) UNALLOCATED(ENC_UNALLOCATED_14_DP_3SRC);
 if(!sf && !op54 && op31==1 && o0) UNALLOCATED(ENC_UNALLOCATED_16_DP_3SRC);
 if(!sf && !op54 && op31==2 && !o0) UNALLOCATED(ENC_UNALLOCATED_18_DP_3SRC);
 if(!sf && !op54 && op31==5 && !o0) UNALLOCATED(ENC_UNALLOCATED_23_DP_3SRC);
 if(!sf && !op54 && op31==5 && o0) UNALLOCATED(ENC_UNALLOCATED_25_DP_3SRC);
 if(!sf && !op54 && op31==6 && !o0) UNALLOCATED(ENC_UNALLOCATED_27_DP_3SRC);
 if(sf && !op54 && !op31 && !o0) return MADD(ctx, dec);
 if(sf && !op54 && !op31 && o0) return MSUB(ctx, dec);
 if(sf && !op54 && op31==1 && !o0) return SMADDL(ctx, dec);
 if(sf && !op54 && op31==1 && o0) return SMSUBL(ctx, dec);
 if(sf && !op54 && op31==2 && !o0) return SMULH(ctx, dec);
 if(sf && !op54 && op31==5 && !o0) return UMADDL(ctx, dec);
 if(sf && !op54 && op31==5 && o0) return UMSUBL(ctx, dec);
 if(sf && !op54 && op31==6 && !o0) return UMULH(ctx, dec);
 if(!op54 && op31==2 && o0) UNALLOCATED(ENC_UNALLOCATED_20_DP_3SRC);
 if(!op54 && op31==6 && o0) UNALLOCATED(ENC_UNALLOCATED_29_DP_3SRC);
 if(!op54 && op31==3) UNALLOCATED(ENC_UNALLOCATED_21_DP_3SRC);
 if(!op54 && op31==4) UNALLOCATED(ENC_UNALLOCATED_22_DP_3SRC);
 if(!op54 && op31==7) UNALLOCATED(ENC_UNALLOCATED_30_DP_3SRC);
 if(op54==1) UNALLOCATED(ENC_UNALLOCATED_31_DP_3SRC);
 if((op54&2)==2) UNALLOCATED(ENC_UNALLOCATED_32_DP_3SRC);
 UNMATCHED;
}

int decode_iclass_setf(context *ctx, Instruction *dec)
{
 uint32_t sf=INSWORD>>31, op=(INSWORD>>30)&1, S=(INSWORD>>29)&1, opcode2=(INSWORD>>15)&0x3f, sz=(INSWORD>>14)&1, o3=(INSWORD>>4)&1, mask=INSWORD&15;
 if(!sf && !op && S && !opcode2 && !sz && !o3 && mask==13 && HasFlagM()) return SETF(ctx, dec);
 if(!sf && !op && S && !opcode2 && sz && !o3 && mask==13 && HasFlagM()) return SETF(ctx, dec);
 if(!sf && !op && S && !opcode2 && !o3 && mask!=13) UNALLOCATED(ENC_UNALLOCATED_11_SETF);
 if(!sf && !op && S && !opcode2 && o3) UNALLOCATED(ENC_UNALLOCATED_14_SETF);
 if(!sf && !op && S && opcode2) UNALLOCATED(ENC_UNALLOCATED_15_SETF);
 if(!sf && !op && !S) UNALLOCATED(ENC_UNALLOCATED_10_SETF);
 if(!sf && op) UNALLOCATED(ENC_UNALLOCATED_16_SETF);
 if(sf) UNALLOCATED(ENC_UNALLOCATED_17_SETF);
 UNMATCHED;
}

int decode_iclass_log_shift(context *ctx, Instruction *dec)
{
 uint32_t sf=INSWORD>>31, opc=(INSWORD>>29)&3, N=(INSWORD>>21)&1, imm6=(INSWORD>>10)&0x3f;
 if(!sf && !opc && !N) return AND_log_shift(ctx, dec);
 if(!sf && !opc && N) return BIC_log_shift(ctx, dec);
 if(!sf && opc==1 && !N) return ORR_log_shift(ctx, dec);
 if(!sf && opc==1 && N) return ORN_log_shift(ctx, dec);
 if(!sf && opc==2 && !N) return EOR_log_shift(ctx, dec);
 if(!sf && opc==2 && N) return EON(ctx, dec);
 if(!sf && opc==3 && !N) return ANDS_log_shift(ctx, dec);
 if(!sf && opc==3 && N) return BICS(ctx, dec);
 if(sf && !opc && !N) return AND_log_shift(ctx, dec);
 if(sf && !opc && N) return BIC_log_shift(ctx, dec);
 if(sf && opc==1 && !N) return ORR_log_shift(ctx, dec);
 if(sf && opc==1 && N) return ORN_log_shift(ctx, dec);
 if(sf && opc==2 && !N) return EOR_log_shift(ctx, dec);
 if(sf && opc==2 && N) return EON(ctx, dec);
 if(sf && opc==3 && !N) return ANDS_log_shift(ctx, dec);
 if(sf && opc==3 && N) return BICS(ctx, dec);
 if(!sf && (imm6&0x20)==0x20) UNALLOCATED(ENC_UNALLOCATED_10_LOG_SHIFT);
 UNMATCHED;
}

int decode_iclass_rmif(context *ctx, Instruction *dec)
{
 uint32_t sf=INSWORD>>31, op=(INSWORD>>30)&1, S=(INSWORD>>29)&1, o2=(INSWORD>>4)&1;
 if(sf && !op && S && !o2 && HasFlagM()) return RMIF(ctx, dec);
 if(sf && !op && S && o2) UNALLOCATED(ENC_UNALLOCATED_13_RMIF);
 if(sf && !op && !S) UNALLOCATED(ENC_UNALLOCATED_11_RMIF);
 if(sf && op) UNALLOCATED(ENC_UNALLOCATED_14_RMIF);
 if(!sf) UNALLOCATED(ENC_UNALLOCATED_10_RMIF);
 UNMATCHED;
}

int decode_iclass_sve_int_mul_b(context *ctx, Instruction *dec)
{
 uint32_t size=(INSWORD>>22)&3, opc=(INSWORD>>10)&3;
 if(!size && opc==1) return pmul_z_zz(ctx, dec);
 if(size==1 && opc==1) UNALLOCATED(ENC_UNALLOCATED_154);
 if((size&2)==2 && opc==1) UNALLOCATED(ENC_UNALLOCATED_158);
 if(!opc) return mul_z_zz(ctx, dec);
 if(opc==2) return smulh_z_zz(ctx, dec);
 if(opc==3) return umulh_z_zz(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_int_sqdmulh(context *ctx, Instruction *dec)
{
 uint32_t R=(INSWORD>>10)&1;
 if(!R) return sqdmulh_z_zz(ctx, dec);
 if(R) return sqrdmulh_z_zz(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_int_bin_cons_shift_b(context *ctx, Instruction *dec)
{
 uint32_t opc=(INSWORD>>10)&3;
 if(!opc) return asr_z_zi(ctx, dec);
 if(opc==1) return lsr_z_zi(ctx, dec);
 if(opc==2) UNALLOCATED(ENC_UNALLOCATED_139);
 if(opc==3) return lsl_z_zi(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_int_bin_cons_shift_a(context *ctx, Instruction *dec)
{
 uint32_t opc=(INSWORD>>10)&3;
 if(!opc) return asr_z_zw(ctx, dec);
 if(opc==1) return lsr_z_zw(ctx, dec);
 if(opc==2) UNALLOCATED(ENC_UNALLOCATED_138);
 if(opc==3) return lsl_z_zw(ctx, dec);
 UNMATCHED;
}

int decode_iclass_asimdall(context *ctx, Instruction *dec)
{
 uint32_t U=(INSWORD>>29)&1, size=(INSWORD>>22)&3, opcode=(INSWORD>>12)&0x1f;
 if(!U && !size && opcode==12 && HasFP16()) return FMAXNMV_advsimd(ctx, dec);
 if(!U && !size && opcode==15 && HasFP16()) return FMAXV_advsimd(ctx, dec);
 if(!U && size==1 && opcode==12) UNALLOCATED(ENC_UNALLOCATED_21_ASIMDALL);
 if(!U && size==1 && opcode==15) UNALLOCATED(ENC_UNALLOCATED_29_ASIMDALL);
 if(!U && size==2 && opcode==12 && HasFP16()) return FMINNMV_advsimd(ctx, dec);
 if(!U && size==2 && opcode==15 && HasFP16()) return FMINV_advsimd(ctx, dec);
 if(!U && size==3 && opcode==12) UNALLOCATED(ENC_UNALLOCATED_24_ASIMDALL);
 if(!U && size==3 && opcode==15) UNALLOCATED(ENC_UNALLOCATED_32_ASIMDALL);
 if(U && !(size&2) && opcode==12) return FMAXNMV_advsimd(ctx, dec);
 if(U && !(size&2) && opcode==15) return FMAXV_advsimd(ctx, dec);
 if(U && (size&2)==2 && opcode==12) return FMINNMV_advsimd(ctx, dec);
 if(U && (size&2)==2 && opcode==15) return FMINV_advsimd(ctx, dec);
 if(!U && opcode==3) return SADDLV_advsimd(ctx, dec);
 if(!U && opcode==10) return SMAXV_advsimd(ctx, dec);
 if(!U && opcode==0x1a) return SMINV_advsimd(ctx, dec);
 if(!U && opcode==0x1b) return ADDV_advsimd(ctx, dec);
 if(U && opcode==3) return UADDLV_advsimd(ctx, dec);
 if(U && opcode==10) return UMAXV_advsimd(ctx, dec);
 if(U && opcode==0x1a) return UMINV_advsimd(ctx, dec);
 if(U && opcode==0x1b) UNALLOCATED(ENC_UNALLOCATED_39_ASIMDALL);
 if(opcode==2) UNALLOCATED(ENC_UNALLOCATED_12_ASIMDALL);
 if(opcode==11) UNALLOCATED(ENC_UNALLOCATED_19_ASIMDALL);
 if(opcode==13) UNALLOCATED(ENC_UNALLOCATED_26_ASIMDALL);
 if(opcode==14) UNALLOCATED(ENC_UNALLOCATED_27_ASIMDALL);
 if(!(opcode&0x1e)) UNALLOCATED(ENC_UNALLOCATED_11_ASIMDALL);
 if((opcode&0x1e)==8) UNALLOCATED(ENC_UNALLOCATED_16_ASIMDALL);
 if((opcode&0x1e)==0x18) UNALLOCATED(ENC_UNALLOCATED_35_ASIMDALL);
 if((opcode&0x1c)==4) UNALLOCATED(ENC_UNALLOCATED_15_ASIMDALL);
 if((opcode&0x1c)==0x1c) UNALLOCATED(ENC_UNALLOCATED_40_ASIMDALL);
 if((opcode&0x18)==0x10) UNALLOCATED(ENC_UNALLOCATED_34_ASIMDALL);
 UNMATCHED;
}

int decode_iclass_asimdins(context *ctx, Instruction *dec)
{
 uint32_t Q=(INSWORD>>30)&1, op=(INSWORD>>29)&1, imm5=(INSWORD>>16)&0x1f, imm4=(INSWORD>>11)&15;
 if(Q && !op && (imm5&15)==8 && imm4==7) return UMOV_advsimd(ctx, dec);
 if(!Q && !op && imm4==3) UNALLOCATED(ENC_UNALLOCATED_17_ASIMDINS);
 if(!Q && !op && imm4==5) return SMOV_advsimd(ctx, dec);
 if(!Q && !op && imm4==7) return UMOV_advsimd(ctx, dec);
 if(Q && !op && imm4==3) return INS_advsimd_gen(ctx, dec);
 if(Q && !op && imm4==5) return SMOV_advsimd(ctx, dec);
 if(!op && !imm4) return DUP_advsimd_elt(ctx, dec);
 if(!op && imm4==1) return DUP_advsimd_gen(ctx, dec);
 if(!op && imm4==2) UNALLOCATED(ENC_UNALLOCATED_15_ASIMDINS);
 if(!op && imm4==4) UNALLOCATED(ENC_UNALLOCATED_18_ASIMDINS);
 if(!op && imm4==6) UNALLOCATED(ENC_UNALLOCATED_21_ASIMDINS);
 if(!(imm5&15)) UNALLOCATED(ENC_UNALLOCATED_11_ASIMDINS);
 if(!op && (imm4&8)==8) UNALLOCATED(ENC_UNALLOCATED_24_ASIMDINS);
 if(!Q && op) UNALLOCATED(ENC_UNALLOCATED_12_ASIMDINS);
 if(Q && op) return INS_advsimd_elt(ctx, dec);
 UNMATCHED;
}

int decode_iclass_asimdext(context *ctx, Instruction *dec)
{
 uint32_t op2=(INSWORD>>22)&3;
 if(!op2) return EXT_advsimd(ctx, dec);
 if(op2&1) UNALLOCATED(ENC_UNALLOCATED_11_ASIMDEXT);
 if((op2&2)==2) UNALLOCATED(ENC_UNALLOCATED_12_ASIMDEXT);
 UNMATCHED;
}

int decode_iclass_asimdimm(context *ctx, Instruction *dec)
{
 uint32_t Q=(INSWORD>>30)&1, op=(INSWORD>>29)&1, cmode=(INSWORD>>12)&15, o2=(INSWORD>>11)&1;
 if(!Q && op && cmode==14 && !o2) return MOVI_advsimd(ctx, dec);
 if(!Q && op && cmode==15 && !o2) UNALLOCATED(ENC_UNALLOCATED_26_ASIMDIMM);
 if(Q && op && cmode==14 && !o2) return MOVI_advsimd(ctx, dec);
 if(Q && op && cmode==15 && !o2) return FMOV_advsimd(ctx, dec);
 if(!op && cmode==14 && !o2) return MOVI_advsimd(ctx, dec);
 if(!op && cmode==14 && o2) UNALLOCATED(ENC_UNALLOCATED_31_ASIMDIMM);
 if(!op && cmode==15 && !o2) return FMOV_advsimd(ctx, dec);
 if(!op && cmode==15 && o2 && HasFP16()) return FMOV_advsimd(ctx, dec);
 if(!op && (cmode&13)==8 && !o2) return MOVI_advsimd(ctx, dec);
 if(!op && (cmode&13)==9 && !o2) return ORR_advsimd_imm(ctx, dec);
 if(!op && (cmode&14)==12 && !o2) return MOVI_advsimd(ctx, dec);
 if(!op && (cmode&14)==12 && o2) UNALLOCATED(ENC_UNALLOCATED_30_ASIMDIMM);
 if(op && (cmode&13)==8 && !o2) return MVNI_advsimd(ctx, dec);
 if(op && (cmode&13)==9 && !o2) return BIC_advsimd_imm(ctx, dec);
 if(op && (cmode&14)==12 && !o2) return MVNI_advsimd(ctx, dec);
 if(!op && !(cmode&9) && !o2) return MOVI_advsimd(ctx, dec);
 if(!op && (cmode&9)==1 && !o2) return ORR_advsimd_imm(ctx, dec);
 if(!op && (cmode&12)==8 && o2) UNALLOCATED(ENC_UNALLOCATED_29_ASIMDIMM);
 if(op && !(cmode&9) && !o2) return MVNI_advsimd(ctx, dec);
 if(op && (cmode&9)==1 && !o2) return BIC_advsimd_imm(ctx, dec);
 if(!op && !(cmode&8) && o2) UNALLOCATED(ENC_UNALLOCATED_28_ASIMDIMM);
 if(op && o2) UNALLOCATED(ENC_UNALLOCATED_27_ASIMDIMM);
 UNMATCHED;
}

int decode_iclass_asimdperm(context *ctx, Instruction *dec)
{
 uint32_t opcode=(INSWORD>>12)&7;
 if(!opcode) UNALLOCATED(ENC_UNALLOCATED_11_ASIMDPERM);
 if(opcode==1) return UZP1_advsimd(ctx, dec);
 if(opcode==2) return TRN1_advsimd(ctx, dec);
 if(opcode==3) return ZIP1_advsimd(ctx, dec);
 if(opcode==4) UNALLOCATED(ENC_UNALLOCATED_15_ASIMDPERM);
 if(opcode==5) return UZP2_advsimd(ctx, dec);
 if(opcode==6) return TRN2_advsimd(ctx, dec);
 if(opcode==7) return ZIP2_advsimd(ctx, dec);
 UNMATCHED;
}

int decode_iclass_asisdone(context *ctx, Instruction *dec)
{
 uint32_t op=(INSWORD>>29)&1, imm4=(INSWORD>>11)&15;
 if(!op && !imm4) return DUP_advsimd_elt(ctx, dec);
 if(!op && imm4&1) UNALLOCATED(ENC_UNALLOCATED_15_ASISDONE);
 if(!op && (imm4&2)==2) UNALLOCATED(ENC_UNALLOCATED_14_ASISDONE);
 if(!op && (imm4&4)==4) UNALLOCATED(ENC_UNALLOCATED_13_ASISDONE);
 if(!op && (imm4&8)==8) UNALLOCATED(ENC_UNALLOCATED_12_ASISDONE);
 if(op) UNALLOCATED(ENC_UNALLOCATED_17_ASISDONE);
 UNMATCHED;
}

int decode_iclass_asisdpair(context *ctx, Instruction *dec)
{
 uint32_t U=(INSWORD>>29)&1, size=(INSWORD>>22)&3, opcode=(INSWORD>>12)&0x1f;
 if(!U && !(size&2) && opcode==12 && HasFP16()) return FMAXNMP_advsimd_pair(ctx, dec);
 if(!U && !(size&2) && opcode==13 && HasFP16()) return FADDP_advsimd_pair(ctx, dec);
 if(!U && !(size&2) && opcode==15 && HasFP16()) return FMAXP_advsimd_pair(ctx, dec);
 if(!U && (size&2)==2 && opcode==12 && HasFP16()) return FMINNMP_advsimd_pair(ctx, dec);
 if(!U && (size&2)==2 && opcode==15 && HasFP16()) return FMINP_advsimd_pair(ctx, dec);
 if(U && !(size&2) && opcode==12) return FMAXNMP_advsimd_pair(ctx, dec);
 if(U && !(size&2) && opcode==13) return FADDP_advsimd_pair(ctx, dec);
 if(U && !(size&2) && opcode==15) return FMAXP_advsimd_pair(ctx, dec);
 if(U && (size&2)==2 && opcode==12) return FMINNMP_advsimd_pair(ctx, dec);
 if(U && (size&2)==2 && opcode==15) return FMINP_advsimd_pair(ctx, dec);
 if((size&2)==2 && opcode==13) UNALLOCATED(ENC_UNALLOCATED_19_ASISDPAIR);
 if(!U && opcode==0x1b) return ADDP_advsimd_pair(ctx, dec);
 if(U && opcode==0x1b) UNALLOCATED(ENC_UNALLOCATED_29_ASISDPAIR);
 if(opcode==14) UNALLOCATED(ENC_UNALLOCATED_20_ASISDPAIR);
 if(opcode==0x1a) UNALLOCATED(ENC_UNALLOCATED_27_ASISDPAIR);
 if((opcode&0x1e)==0x18) UNALLOCATED(ENC_UNALLOCATED_26_ASISDPAIR);
 if((opcode&0x1c)==8) UNALLOCATED(ENC_UNALLOCATED_12_ASISDPAIR);
 if((opcode&0x1c)==0x1c) UNALLOCATED(ENC_UNALLOCATED_30_ASISDPAIR);
 if(!(opcode&0x18)) UNALLOCATED(ENC_UNALLOCATED_11_ASISDPAIR);
 if((opcode&0x18)==0x10) UNALLOCATED(ENC_UNALLOCATED_25_ASISDPAIR);
 UNMATCHED;
}

int decode_iclass_asisdshf(context *ctx, Instruction *dec)
{
 uint32_t U=(INSWORD>>29)&1, immh=(INSWORD>>19)&15, opcode=(INSWORD>>11)&0x1f;
 if(!U && immh && !opcode) return SSHR_advsimd(ctx, dec);
 if(!U && immh && opcode==2) return SSRA_advsimd(ctx, dec);
 if(!U && immh && opcode==4) return SRSHR_advsimd(ctx, dec);
 if(!U && immh && opcode==6) return SRSRA_advsimd(ctx, dec);
 if(!U && immh && opcode==8) UNALLOCATED(ENC_UNALLOCATED_24_ASISDSHF);
 if(!U && immh && opcode==10) return SHL_advsimd(ctx, dec);
 if(!U && immh && opcode==12) UNALLOCATED(ENC_UNALLOCATED_30_ASISDSHF);
 if(!U && immh && opcode==14) return SQSHL_advsimd_imm(ctx, dec);
 if(!U && immh && opcode==0x10) UNALLOCATED(ENC_UNALLOCATED_36_ASISDSHF);
 if(!U && immh && opcode==0x11) UNALLOCATED(ENC_UNALLOCATED_38_ASISDSHF);
 if(!U && immh && opcode==0x12) return SQSHRN_advsimd(ctx, dec);
 if(!U && immh && opcode==0x13) return SQRSHRN_advsimd(ctx, dec);
 if(!U && immh && opcode==0x1c) return SCVTF_advsimd_fix(ctx, dec);
 if(!U && immh && opcode==0x1f) return FCVTZS_advsimd_fix(ctx, dec);
 if(U && immh && !opcode) return USHR_advsimd(ctx, dec);
 if(U && immh && opcode==2) return USRA_advsimd(ctx, dec);
 if(U && immh && opcode==4) return URSHR_advsimd(ctx, dec);
 if(U && immh && opcode==6) return URSRA_advsimd(ctx, dec);
 if(U && immh && opcode==8) return SRI_advsimd(ctx, dec);
 if(U && immh && opcode==10) return SLI_advsimd(ctx, dec);
 if(U && immh && opcode==12) return SQSHLU_advsimd(ctx, dec);
 if(U && immh && opcode==14) return UQSHL_advsimd_imm(ctx, dec);
 if(U && immh && opcode==0x10) return SQSHRUN_advsimd(ctx, dec);
 if(U && immh && opcode==0x11) return SQRSHRUN_advsimd(ctx, dec);
 if(U && immh && opcode==0x12) return UQSHRN_advsimd(ctx, dec);
 if(U && immh && opcode==0x13) return UQRSHRN_advsimd(ctx, dec);
 if(U && immh && opcode==0x1c) return UCVTF_advsimd_fix(ctx, dec);
 if(U && immh && opcode==0x1f) return FCVTZU_advsimd_fix(ctx, dec);
 if(immh && opcode==1) UNALLOCATED(ENC_UNALLOCATED_14_ASISDSHF);
 if(immh && opcode==3) UNALLOCATED(ENC_UNALLOCATED_17_ASISDSHF);
 if(immh && opcode==5) UNALLOCATED(ENC_UNALLOCATED_20_ASISDSHF);
 if(immh && opcode==7) UNALLOCATED(ENC_UNALLOCATED_23_ASISDSHF);
 if(immh && opcode==9) UNALLOCATED(ENC_UNALLOCATED_26_ASISDSHF);
 if(immh && opcode==11) UNALLOCATED(ENC_UNALLOCATED_29_ASISDSHF);
 if(immh && opcode==13) UNALLOCATED(ENC_UNALLOCATED_32_ASISDSHF);
 if(immh && opcode==15) UNALLOCATED(ENC_UNALLOCATED_35_ASISDSHF);
 if(immh && opcode==0x1d) UNALLOCATED(ENC_UNALLOCATED_48_ASISDSHF);
 if(immh && opcode==0x1e) UNALLOCATED(ENC_UNALLOCATED_49_ASISDSHF);
 if(immh && (opcode&0x1c)==0x14) UNALLOCATED(ENC_UNALLOCATED_44_ASISDSHF);
 if(immh && (opcode&0x1c)==0x18) UNALLOCATED(ENC_UNALLOCATED_45_ASISDSHF);
 if(!immh) UNALLOCATED(ENC_UNALLOCATED_11_ASISDSHF);
 UNMATCHED;
}

int decode_iclass_asisddiff(context *ctx, Instruction *dec)
{
 uint32_t U=(INSWORD>>29)&1, opcode=(INSWORD>>12)&15;
 if(!U && opcode==9) return SQDMLAL_advsimd_vec(ctx, dec);
 if(!U && opcode==11) return SQDMLSL_advsimd_vec(ctx, dec);
 if(!U && opcode==13) return SQDMULL_advsimd_vec(ctx, dec);
 if(U && opcode==9) UNALLOCATED(ENC_UNALLOCATED_15_ASISDDIFF);
 if(U && opcode==11) UNALLOCATED(ENC_UNALLOCATED_18_ASISDDIFF);
 if(U && opcode==13) UNALLOCATED(ENC_UNALLOCATED_21_ASISDDIFF);
 if(opcode==8) UNALLOCATED(ENC_UNALLOCATED_13_ASISDDIFF);
 if(opcode==10) UNALLOCATED(ENC_UNALLOCATED_16_ASISDDIFF);
 if(opcode==12) UNALLOCATED(ENC_UNALLOCATED_19_ASISDDIFF);
 if((opcode&14)==14) UNALLOCATED(ENC_UNALLOCATED_22_ASISDDIFF);
 if(!(opcode&12)) UNALLOCATED(ENC_UNALLOCATED_11_ASISDDIFF);
 if((opcode&12)==4) UNALLOCATED(ENC_UNALLOCATED_12_ASISDDIFF);
 UNMATCHED;
}

int decode_iclass_asisdsame(context *ctx, Instruction *dec)
{
 uint32_t U=(INSWORD>>29)&1, size=(INSWORD>>22)&3, opcode=(INSWORD>>11)&0x1f;
 if(!U && !(size&2) && opcode==0x18) RESERVED(ENC_RESERVED_44_ASISDSAME);
 if(!U && !(size&2) && opcode==0x19) RESERVED(ENC_RESERVED_48_ASISDSAME);
 if(!U && !(size&2) && opcode==0x1a) RESERVED(ENC_RESERVED_52_ASISDSAME);
 if(!U && !(size&2) && opcode==0x1b) return FMULX_advsimd_vec(ctx, dec);
 if(!U && !(size&2) && opcode==0x1c) return FCMEQ_advsimd_reg(ctx, dec);
 if(!U && !(size&2) && opcode==0x1d) UNALLOCATED(ENC_UNALLOCATED_63_ASISDSAME);
 if(!U && !(size&2) && opcode==0x1e) RESERVED(ENC_RESERVED_67_ASISDSAME);
 if(!U && !(size&2) && opcode==0x1f) return FRECPS_advsimd(ctx, dec);
 if(!U && (size&2)==2 && opcode==0x18) RESERVED(ENC_RESERVED_46_ASISDSAME);
 if(!U && (size&2)==2 && opcode==0x19) RESERVED(ENC_RESERVED_50_ASISDSAME);
 if(!U && (size&2)==2 && opcode==0x1a) RESERVED(ENC_RESERVED_54_ASISDSAME);
 if(!U && (size&2)==2 && opcode==0x1c) UNALLOCATED(ENC_UNALLOCATED_61_ASISDSAME);
 if(!U && (size&2)==2 && opcode==0x1d) UNALLOCATED(ENC_UNALLOCATED_65_ASISDSAME);
 if(!U && (size&2)==2 && opcode==0x1e) RESERVED(ENC_RESERVED_69_ASISDSAME);
 if(!U && (size&2)==2 && opcode==0x1f) return FRSQRTS_advsimd(ctx, dec);
 if(U && !(size&2) && opcode==0x18) RESERVED(ENC_RESERVED_45_ASISDSAME);
 if(U && !(size&2) && opcode==0x19) UNALLOCATED(ENC_UNALLOCATED_49_ASISDSAME);
 if(U && !(size&2) && opcode==0x1a) RESERVED(ENC_RESERVED_53_ASISDSAME);
 if(U && !(size&2) && opcode==0x1b) RESERVED(ENC_RESERVED_57_ASISDSAME);
 if(U && !(size&2) && opcode==0x1c) return FCMGE_advsimd_reg(ctx, dec);
 if(U && !(size&2) && opcode==0x1d) return FACGE_advsimd(ctx, dec);
 if(U && !(size&2) && opcode==0x1e) RESERVED(ENC_RESERVED_68_ASISDSAME);
 if(U && !(size&2) && opcode==0x1f) RESERVED(ENC_RESERVED_72_ASISDSAME);
 if(U && (size&2)==2 && opcode==0x18) RESERVED(ENC_RESERVED_47_ASISDSAME);
 if(U && (size&2)==2 && opcode==0x19) UNALLOCATED(ENC_UNALLOCATED_51_ASISDSAME);
 if(U && (size&2)==2 && opcode==0x1a) return FABD_advsimd(ctx, dec);
 if(U && (size&2)==2 && opcode==0x1c) return FCMGT_advsimd_reg(ctx, dec);
 if(U && (size&2)==2 && opcode==0x1d) return FACGT_advsimd(ctx, dec);
 if(U && (size&2)==2 && opcode==0x1e) RESERVED(ENC_RESERVED_70_ASISDSAME);
 if(U && (size&2)==2 && opcode==0x1f) RESERVED(ENC_RESERVED_74_ASISDSAME);
 if((size&2)==2 && opcode==0x1b) UNALLOCATED(ENC_UNALLOCATED_58_ASISDSAME);
 if(!U && opcode==1) return SQADD_advsimd(ctx, dec);
 if(!U && opcode==5) return SQSUB_advsimd(ctx, dec);
 if(!U && opcode==6) return CMGT_advsimd_reg(ctx, dec);
 if(!U && opcode==7) return CMGE_advsimd_reg(ctx, dec);
 if(!U && opcode==8) return SSHL_advsimd(ctx, dec);
 if(!U && opcode==9) return SQSHL_advsimd_reg(ctx, dec);
 if(!U && opcode==10) return SRSHL_advsimd(ctx, dec);
 if(!U && opcode==11) return SQRSHL_advsimd(ctx, dec);
 if(!U && opcode==0x10) return ADD_advsimd(ctx, dec);
 if(!U && opcode==0x11) return CMTST_advsimd(ctx, dec);
 if(!U && opcode==0x14) RESERVED(ENC_RESERVED_36_ASISDSAME);
 if(!U && opcode==0x15) RESERVED(ENC_RESERVED_38_ASISDSAME);
 if(!U && opcode==0x16) return SQDMULH_advsimd_vec(ctx, dec);
 if(!U && opcode==0x17) RESERVED(ENC_RESERVED_42_ASISDSAME);
 if(U && opcode==1) return UQADD_advsimd(ctx, dec);
 if(U && opcode==5) return UQSUB_advsimd(ctx, dec);
 if(U && opcode==6) return CMHI_advsimd(ctx, dec);
 if(U && opcode==7) return CMHS_advsimd(ctx, dec);
 if(U && opcode==8) return USHL_advsimd(ctx, dec);
 if(U && opcode==9) return UQSHL_advsimd_reg(ctx, dec);
 if(U && opcode==10) return URSHL_advsimd(ctx, dec);
 if(U && opcode==11) return UQRSHL_advsimd(ctx, dec);
 if(U && opcode==0x10) return SUB_advsimd(ctx, dec);
 if(U && opcode==0x11) return CMEQ_advsimd_reg(ctx, dec);
 if(U && opcode==0x14) RESERVED(ENC_RESERVED_37_ASISDSAME);
 if(U && opcode==0x15) RESERVED(ENC_RESERVED_39_ASISDSAME);
 if(U && opcode==0x16) return SQRDMULH_advsimd_vec(ctx, dec);
 if(U && opcode==0x17) UNALLOCATED(ENC_UNALLOCATED_43_ASISDSAME);
 if(!opcode) UNALLOCATED(ENC_UNALLOCATED_11_ASISDSAME);
 if(opcode==4) UNALLOCATED(ENC_UNALLOCATED_15_ASISDSAME);
 if((opcode&0x1e)==2) UNALLOCATED(ENC_UNALLOCATED_14_ASISDSAME);
 if((opcode&0x1e)==0x12) UNALLOCATED(ENC_UNALLOCATED_35_ASISDSAME);
 if((opcode&0x1c)==12) UNALLOCATED(ENC_UNALLOCATED_30_ASISDSAME);
 UNMATCHED;
}

int decode_iclass_asisdsamefp16(context *ctx, Instruction *dec)
{
 uint32_t U=(INSWORD>>29)&1, a=(INSWORD>>23)&1, opcode=(INSWORD>>11)&7;
 if(!U && !a && opcode==3 && HasFP16()) return FMULX_advsimd_vec(ctx, dec);
 if(!U && !a && opcode==4 && HasFP16()) return FCMEQ_advsimd_reg(ctx, dec);
 if(!U && !a && opcode==5) UNALLOCATED(ENC_UNALLOCATED_19_ASISDSAMEFP16);
 if(!U && !a && opcode==7 && HasFP16()) return FRECPS_advsimd(ctx, dec);
 if(!U && a && opcode==4) UNALLOCATED(ENC_UNALLOCATED_17_ASISDSAMEFP16);
 if(!U && a && opcode==5) UNALLOCATED(ENC_UNALLOCATED_21_ASISDSAMEFP16);
 if(!U && a && opcode==7 && HasFP16()) return FRSQRTS_advsimd(ctx, dec);
 if(U && !a && opcode==3) UNALLOCATED(ENC_UNALLOCATED_13_ASISDSAMEFP16);
 if(U && !a && opcode==4 && HasFP16()) return FCMGE_advsimd_reg(ctx, dec);
 if(U && !a && opcode==5 && HasFP16()) return FACGE_advsimd(ctx, dec);
 if(U && !a && opcode==7) UNALLOCATED(ENC_UNALLOCATED_25_ASISDSAMEFP16);
 if(U && a && opcode==2 && HasFP16()) return FABD_advsimd(ctx, dec);
 if(U && a && opcode==4 && HasFP16()) return FCMGT_advsimd_reg(ctx, dec);
 if(U && a && opcode==5 && HasFP16()) return FACGT_advsimd(ctx, dec);
 if(U && a && opcode==7) UNALLOCATED(ENC_UNALLOCATED_27_ASISDSAMEFP16);
 if(a && opcode==3) UNALLOCATED(ENC_UNALLOCATED_14_ASISDSAMEFP16);
 if(opcode==6) UNALLOCATED(ENC_UNALLOCATED_23_ASISDSAMEFP16);
 UNMATCHED;
}

int decode_iclass_asisdsame2(context *ctx, Instruction *dec)
{
 uint32_t U=(INSWORD>>29)&1, opcode=(INSWORD>>11)&15;
 if(!U && !opcode) UNALLOCATED(ENC_UNALLOCATED_11_ASISDSAME2);
 if(!U && opcode==1) UNALLOCATED(ENC_UNALLOCATED_13_ASISDSAME2);
 if(U && !opcode && HasRDM()) return SQRDMLAH_advsimd_vec(ctx, dec);
 if(U && opcode==1 && HasRDM()) return SQRDMLSH_advsimd_vec(ctx, dec);
 if((opcode&14)==2) UNALLOCATED(ENC_UNALLOCATED_15_ASISDSAME2);
 if((opcode&12)==4) UNALLOCATED(ENC_UNALLOCATED_16_ASISDSAME2);
 if((opcode&8)==8) UNALLOCATED(ENC_UNALLOCATED_17_ASISDSAME2);
 UNMATCHED;
}

int decode_iclass_asisdmisc(context *ctx, Instruction *dec)
{
 uint32_t U=(INSWORD>>29)&1, size=(INSWORD>>22)&3, opcode=(INSWORD>>12)&0x1f;
 if(!U && !(size&2) && opcode==0x16) UNALLOCATED(ENC_UNALLOCATED_42_ASISDMISC);
 if(!U && !(size&2) && opcode==0x1a) return FCVTNS_advsimd(ctx, dec);
 if(!U && !(size&2) && opcode==0x1b) return FCVTMS_advsimd(ctx, dec);
 if(!U && !(size&2) && opcode==0x1c) return FCVTAS_advsimd(ctx, dec);
 if(!U && !(size&2) && opcode==0x1d) return SCVTF_advsimd_int(ctx, dec);
 if(!U && (size&2)==2 && opcode==12) return FCMGT_advsimd_zero(ctx, dec);
 if(!U && (size&2)==2 && opcode==13) return FCMEQ_advsimd_zero(ctx, dec);
 if(!U && (size&2)==2 && opcode==14) return FCMLT_advsimd(ctx, dec);
 if(!U && (size&2)==2 && opcode==0x1a) return FCVTPS_advsimd(ctx, dec);
 if(!U && (size&2)==2 && opcode==0x1b) return FCVTZS_advsimd_int(ctx, dec);
 if(!U && (size&2)==2 && opcode==0x1d) return FRECPE_advsimd(ctx, dec);
 if(!U && (size&2)==2 && opcode==0x1f) return FRECPX_advsimd(ctx, dec);
 if(U && !(size&2) && opcode==0x16) return FCVTXN_advsimd(ctx, dec);
 if(U && !(size&2) && opcode==0x1a) return FCVTNU_advsimd(ctx, dec);
 if(U && !(size&2) && opcode==0x1b) return FCVTMU_advsimd(ctx, dec);
 if(U && !(size&2) && opcode==0x1c) return FCVTAU_advsimd(ctx, dec);
 if(U && !(size&2) && opcode==0x1d) return UCVTF_advsimd_int(ctx, dec);
 if(U && (size&2)==2 && opcode==12) return FCMGE_advsimd_zero(ctx, dec);
 if(U && (size&2)==2 && opcode==13) return FCMLE_advsimd(ctx, dec);
 if(U && (size&2)==2 && opcode==14) UNALLOCATED(ENC_UNALLOCATED_33_ASISDMISC);
 if(U && (size&2)==2 && opcode==0x1a) return FCVTPU_advsimd(ctx, dec);
 if(U && (size&2)==2 && opcode==0x1b) return FCVTZU_advsimd_int(ctx, dec);
 if(U && (size&2)==2 && opcode==0x1d) return FRSQRTE_advsimd(ctx, dec);
 if(U && (size&2)==2 && opcode==0x1f) UNALLOCATED(ENC_UNALLOCATED_65_ASISDMISC);
 if(!(size&2) && opcode==0x1f) UNALLOCATED(ENC_UNALLOCATED_63_ASISDMISC);
 if((size&2)==2 && opcode==0x16) UNALLOCATED(ENC_UNALLOCATED_44_ASISDMISC);
 if((size&2)==2 && opcode==0x1c) UNALLOCATED(ENC_UNALLOCATED_57_ASISDMISC);
 if(!U && opcode==3) return SUQADD_advsimd(ctx, dec);
 if(!U && opcode==7) return SQABS_advsimd(ctx, dec);
 if(!U && opcode==8) return CMGT_advsimd_zero(ctx, dec);
 if(!U && opcode==9) return CMEQ_advsimd_zero(ctx, dec);
 if(!U && opcode==10) return CMLT_advsimd(ctx, dec);
 if(!U && opcode==11) return ABS_advsimd(ctx, dec);
 if(!U && opcode==0x12) UNALLOCATED(ENC_UNALLOCATED_36_ASISDMISC);
 if(!U && opcode==0x14) return SQXTN_advsimd(ctx, dec);
 if(U && opcode==3) return USQADD_advsimd(ctx, dec);
 if(U && opcode==7) return SQNEG_advsimd(ctx, dec);
 if(U && opcode==8) return CMGE_advsimd_zero(ctx, dec);
 if(U && opcode==9) return CMLE_advsimd(ctx, dec);
 if(U && opcode==10) UNALLOCATED(ENC_UNALLOCATED_24_ASISDMISC);
 if(U && opcode==11) return NEG_advsimd(ctx, dec);
 if(U && opcode==0x12) return SQXTUN_advsimd(ctx, dec);
 if(U && opcode==0x14) return UQXTN_advsimd(ctx, dec);
 if(opcode==2) UNALLOCATED(ENC_UNALLOCATED_12_ASISDMISC);
 if(opcode==6) UNALLOCATED(ENC_UNALLOCATED_16_ASISDMISC);
 if(opcode==15) UNALLOCATED(ENC_UNALLOCATED_34_ASISDMISC);
 if(opcode==0x13) UNALLOCATED(ENC_UNALLOCATED_38_ASISDMISC);
 if(opcode==0x15) UNALLOCATED(ENC_UNALLOCATED_41_ASISDMISC);
 if(opcode==0x17) UNALLOCATED(ENC_UNALLOCATED_45_ASISDMISC);
 if(opcode==0x1e) UNALLOCATED(ENC_UNALLOCATED_62_ASISDMISC);
 if(!(opcode&0x1e)) UNALLOCATED(ENC_UNALLOCATED_11_ASISDMISC);
 if((opcode&0x1e)==4) UNALLOCATED(ENC_UNALLOCATED_15_ASISDMISC);
 if((opcode&0x1e)==0x10) UNALLOCATED(ENC_UNALLOCATED_35_ASISDMISC);
 if((opcode&0x1e)==0x18) UNALLOCATED(ENC_UNALLOCATED_46_ASISDMISC);
 if(!(size&2) && (opcode&0x1c)==12) UNALLOCATED(ENC_UNALLOCATED_27_ASISDMISC);
 UNMATCHED;
}

int decode_iclass_asisdmiscfp16(context *ctx, Instruction *dec)
{
 uint32_t U=(INSWORD>>29)&1, a=(INSWORD>>23)&1, opcode=(INSWORD>>12)&0x1f;
 if(!U && !a && opcode==0x1a && HasFP16()) return FCVTNS_advsimd(ctx, dec);
 if(!U && !a && opcode==0x1b && HasFP16()) return FCVTMS_advsimd(ctx, dec);
 if(!U && !a && opcode==0x1c && HasFP16()) return FCVTAS_advsimd(ctx, dec);
 if(!U && !a && opcode==0x1d && HasFP16()) return SCVTF_advsimd_int(ctx, dec);
 if(!U && a && opcode==12 && HasFP16()) return FCMGT_advsimd_zero(ctx, dec);
 if(!U && a && opcode==13 && HasFP16()) return FCMEQ_advsimd_zero(ctx, dec);
 if(!U && a && opcode==14 && HasFP16()) return FCMLT_advsimd(ctx, dec);
 if(!U && a && opcode==0x1a && HasFP16()) return FCVTPS_advsimd(ctx, dec);
 if(!U && a && opcode==0x1b && HasFP16()) return FCVTZS_advsimd_int(ctx, dec);
 if(!U && a && opcode==0x1d && HasFP16()) return FRECPE_advsimd(ctx, dec);
 if(!U && a && opcode==0x1f && HasFP16()) return FRECPX_advsimd(ctx, dec);
 if(U && !a && opcode==0x1a && HasFP16()) return FCVTNU_advsimd(ctx, dec);
 if(U && !a && opcode==0x1b && HasFP16()) return FCVTMU_advsimd(ctx, dec);
 if(U && !a && opcode==0x1c && HasFP16()) return FCVTAU_advsimd(ctx, dec);
 if(U && !a && opcode==0x1d && HasFP16()) return UCVTF_advsimd_int(ctx, dec);
 if(U && a && opcode==12 && HasFP16()) return FCMGE_advsimd_zero(ctx, dec);
 if(U && a && opcode==13 && HasFP16()) return FCMLE_advsimd(ctx, dec);
 if(U && a && opcode==14) UNALLOCATED(ENC_UNALLOCATED_19_ASISDMISCFP16);
 if(U && a && opcode==0x1a && HasFP16()) return FCVTPU_advsimd(ctx, dec);
 if(U && a && opcode==0x1b && HasFP16()) return FCVTZU_advsimd_int(ctx, dec);
 if(U && a && opcode==0x1d && HasFP16()) return FRSQRTE_advsimd(ctx, dec);
 if(U && a && opcode==0x1f) UNALLOCATED(ENC_UNALLOCATED_41_ASISDMISCFP16);
 if(!a && opcode==0x1f) UNALLOCATED(ENC_UNALLOCATED_39_ASISDMISCFP16);
 if(a && opcode==15) UNALLOCATED(ENC_UNALLOCATED_20_ASISDMISCFP16);
 if(a && opcode==0x1c) UNALLOCATED(ENC_UNALLOCATED_33_ASISDMISCFP16);
 if(opcode==0x1e) UNALLOCATED(ENC_UNALLOCATED_38_ASISDMISCFP16);
 if((opcode&0x1e)==0x18) UNALLOCATED(ENC_UNALLOCATED_22_ASISDMISCFP16);
 if(!a && (opcode&0x1c)==12) UNALLOCATED(ENC_UNALLOCATED_13_ASISDMISCFP16);
 if((opcode&0x1c)==8) UNALLOCATED(ENC_UNALLOCATED_12_ASISDMISCFP16);
 if(!(opcode&0x18)) UNALLOCATED(ENC_UNALLOCATED_11_ASISDMISCFP16);
 if((opcode&0x18)==0x10) UNALLOCATED(ENC_UNALLOCATED_21_ASISDMISCFP16);
 UNMATCHED;
}

int decode_iclass_asisdelem(context *ctx, Instruction *dec)
{
 uint32_t U=(INSWORD>>29)&1, size=(INSWORD>>22)&3, opcode=(INSWORD>>12)&15;
 if(!U && !size && opcode==1 && HasFP16()) return FMLA_advsimd_elt(ctx, dec);
 if(!U && !size && opcode==5 && HasFP16()) return FMLS_advsimd_elt(ctx, dec);
 if(!U && !size && opcode==9 && HasFP16()) return FMUL_advsimd_elt(ctx, dec);
 if(U && !size && opcode==1) UNALLOCATED(ENC_UNALLOCATED_13_ASISDELEM);
 if(U && !size && opcode==5) UNALLOCATED(ENC_UNALLOCATED_22_ASISDELEM);
 if(U && !size && opcode==9 && HasFP16()) return FMULX_advsimd_elt(ctx, dec);
 if(size==1 && opcode==1) UNALLOCATED(ENC_UNALLOCATED_14_ASISDELEM);
 if(size==1 && opcode==5) UNALLOCATED(ENC_UNALLOCATED_23_ASISDELEM);
 if(size==1 && opcode==9) UNALLOCATED(ENC_UNALLOCATED_32_ASISDELEM);
 if(!U && (size&2)==2 && opcode==1) return FMLA_advsimd_elt(ctx, dec);
 if(!U && (size&2)==2 && opcode==5) return FMLS_advsimd_elt(ctx, dec);
 if(!U && (size&2)==2 && opcode==9) return FMUL_advsimd_elt(ctx, dec);
 if(U && (size&2)==2 && opcode==1) UNALLOCATED(ENC_UNALLOCATED_16_ASISDELEM);
 if(U && (size&2)==2 && opcode==5) UNALLOCATED(ENC_UNALLOCATED_25_ASISDELEM);
 if(U && (size&2)==2 && opcode==9) return FMULX_advsimd_elt(ctx, dec);
 if(!U && opcode==3) return SQDMLAL_advsimd_elt(ctx, dec);
 if(!U && opcode==7) return SQDMLSL_advsimd_elt(ctx, dec);
 if(!U && opcode==11) return SQDMULL_advsimd_elt(ctx, dec);
 if(!U && opcode==12) return SQDMULH_advsimd_elt(ctx, dec);
 if(!U && opcode==13) return SQRDMULH_advsimd_elt(ctx, dec);
 if(!U && opcode==15) UNALLOCATED(ENC_UNALLOCATED_43_ASISDELEM);
 if(U && opcode==3) UNALLOCATED(ENC_UNALLOCATED_19_ASISDELEM);
 if(U && opcode==7) UNALLOCATED(ENC_UNALLOCATED_28_ASISDELEM);
 if(U && opcode==11) UNALLOCATED(ENC_UNALLOCATED_37_ASISDELEM);
 if(U && opcode==12) UNALLOCATED(ENC_UNALLOCATED_39_ASISDELEM);
 if(U && opcode==13 && HasRDM()) return SQRDMLAH_advsimd_elt(ctx, dec);
 if(U && opcode==15 && HasRDM()) return SQRDMLSH_advsimd_elt(ctx, dec);
 if(!opcode) UNALLOCATED(ENC_UNALLOCATED_11_ASISDELEM);
 if(opcode==2) UNALLOCATED(ENC_UNALLOCATED_17_ASISDELEM);
 if(opcode==4) UNALLOCATED(ENC_UNALLOCATED_20_ASISDELEM);
 if(opcode==6) UNALLOCATED(ENC_UNALLOCATED_26_ASISDELEM);
 if(opcode==8) UNALLOCATED(ENC_UNALLOCATED_29_ASISDELEM);
 if(opcode==10) UNALLOCATED(ENC_UNALLOCATED_35_ASISDELEM);
 if(opcode==14) UNALLOCATED(ENC_UNALLOCATED_42_ASISDELEM);
 UNMATCHED;
}

int decode_iclass_asimdshf(context *ctx, Instruction *dec)
{
 uint32_t U=(INSWORD>>29)&1, opcode=(INSWORD>>11)&0x1f;
 if(!U && !opcode) return SSHR_advsimd(ctx, dec);
 if(!U && opcode==2) return SSRA_advsimd(ctx, dec);
 if(!U && opcode==4) return SRSHR_advsimd(ctx, dec);
 if(!U && opcode==6) return SRSRA_advsimd(ctx, dec);
 if(!U && opcode==8) UNALLOCATED(ENC_UNALLOCATED_23_ASIMDSHF);
 if(!U && opcode==10) return SHL_advsimd(ctx, dec);
 if(!U && opcode==12) UNALLOCATED(ENC_UNALLOCATED_29_ASIMDSHF);
 if(!U && opcode==14) return SQSHL_advsimd_imm(ctx, dec);
 if(!U && opcode==0x10) return SHRN_advsimd(ctx, dec);
 if(!U && opcode==0x11) return RSHRN_advsimd(ctx, dec);
 if(!U && opcode==0x12) return SQSHRN_advsimd(ctx, dec);
 if(!U && opcode==0x13) return SQRSHRN_advsimd(ctx, dec);
 if(!U && opcode==0x14) return SSHLL_advsimd(ctx, dec);
 if(!U && opcode==0x1c) return SCVTF_advsimd_fix(ctx, dec);
 if(!U && opcode==0x1f) return FCVTZS_advsimd_fix(ctx, dec);
 if(U && !opcode) return USHR_advsimd(ctx, dec);
 if(U && opcode==2) return USRA_advsimd(ctx, dec);
 if(U && opcode==4) return URSHR_advsimd(ctx, dec);
 if(U && opcode==6) return URSRA_advsimd(ctx, dec);
 if(U && opcode==8) return SRI_advsimd(ctx, dec);
 if(U && opcode==10) return SLI_advsimd(ctx, dec);
 if(U && opcode==12) return SQSHLU_advsimd(ctx, dec);
 if(U && opcode==14) return UQSHL_advsimd_imm(ctx, dec);
 if(U && opcode==0x10) return SQSHRUN_advsimd(ctx, dec);
 if(U && opcode==0x11) return SQRSHRUN_advsimd(ctx, dec);
 if(U && opcode==0x12) return UQSHRN_advsimd(ctx, dec);
 if(U && opcode==0x13) return UQRSHRN_advsimd(ctx, dec);
 if(U && opcode==0x14) return USHLL_advsimd(ctx, dec);
 if(U && opcode==0x1c) return UCVTF_advsimd_fix(ctx, dec);
 if(U && opcode==0x1f) return FCVTZU_advsimd_fix(ctx, dec);
 if(opcode==1) UNALLOCATED(ENC_UNALLOCATED_13_ASIMDSHF);
 if(opcode==3) UNALLOCATED(ENC_UNALLOCATED_16_ASIMDSHF);
 if(opcode==5) UNALLOCATED(ENC_UNALLOCATED_19_ASIMDSHF);
 if(opcode==7) UNALLOCATED(ENC_UNALLOCATED_22_ASIMDSHF);
 if(opcode==9) UNALLOCATED(ENC_UNALLOCATED_25_ASIMDSHF);
 if(opcode==11) UNALLOCATED(ENC_UNALLOCATED_28_ASIMDSHF);
 if(opcode==13) UNALLOCATED(ENC_UNALLOCATED_31_ASIMDSHF);
 if(opcode==15) UNALLOCATED(ENC_UNALLOCATED_34_ASIMDSHF);
 if(opcode==0x15) UNALLOCATED(ENC_UNALLOCATED_45_ASIMDSHF);
 if(opcode==0x1d) UNALLOCATED(ENC_UNALLOCATED_50_ASIMDSHF);
 if(opcode==0x1e) UNALLOCATED(ENC_UNALLOCATED_51_ASIMDSHF);
 if((opcode&0x1e)==0x16) UNALLOCATED(ENC_UNALLOCATED_46_ASIMDSHF);
 if((opcode&0x1c)==0x18) UNALLOCATED(ENC_UNALLOCATED_47_ASIMDSHF);
 UNMATCHED;
}

int decode_iclass_asimdtbl(context *ctx, Instruction *dec)
{
 uint32_t op2=(INSWORD>>22)&3, len=(INSWORD>>13)&3, op=(INSWORD>>12)&1;
 if(!op2 && !len && !op) return TBL_advsimd(ctx, dec);
 if(!op2 && !len && op) return TBX_advsimd(ctx, dec);
 if(!op2 && len==1 && !op) return TBL_advsimd(ctx, dec);
 if(!op2 && len==1 && op) return TBX_advsimd(ctx, dec);
 if(!op2 && len==2 && !op) return TBL_advsimd(ctx, dec);
 if(!op2 && len==2 && op) return TBX_advsimd(ctx, dec);
 if(!op2 && len==3 && !op) return TBL_advsimd(ctx, dec);
 if(!op2 && len==3 && op) return TBX_advsimd(ctx, dec);
 if(op2&1) UNALLOCATED(ENC_UNALLOCATED_11_ASIMDTBL);
 if((op2&2)==2) UNALLOCATED(ENC_UNALLOCATED_12_ASIMDTBL);
 UNMATCHED;
}

int decode_iclass_asimddiff(context *ctx, Instruction *dec)
{
 uint32_t U=(INSWORD>>29)&1, opcode=(INSWORD>>12)&15;
 if(!U && !opcode) return SADDL_advsimd(ctx, dec);
 if(!U && opcode==1) return SADDW_advsimd(ctx, dec);
 if(!U && opcode==2) return SSUBL_advsimd(ctx, dec);
 if(!U && opcode==3) return SSUBW_advsimd(ctx, dec);
 if(!U && opcode==4) return ADDHN_advsimd(ctx, dec);
 if(!U && opcode==5) return SABAL_advsimd(ctx, dec);
 if(!U && opcode==6) return SUBHN_advsimd(ctx, dec);
 if(!U && opcode==7) return SABDL_advsimd(ctx, dec);
 if(!U && opcode==8) return SMLAL_advsimd_vec(ctx, dec);
 if(!U && opcode==9) return SQDMLAL_advsimd_vec(ctx, dec);
 if(!U && opcode==10) return SMLSL_advsimd_vec(ctx, dec);
 if(!U && opcode==11) return SQDMLSL_advsimd_vec(ctx, dec);
 if(!U && opcode==12) return SMULL_advsimd_vec(ctx, dec);
 if(!U && opcode==13) return SQDMULL_advsimd_vec(ctx, dec);
 if(!U && opcode==14) return PMULL_advsimd(ctx, dec);
 if(U && !opcode) return UADDL_advsimd(ctx, dec);
 if(U && opcode==1) return UADDW_advsimd(ctx, dec);
 if(U && opcode==2) return USUBL_advsimd(ctx, dec);
 if(U && opcode==3) return USUBW_advsimd(ctx, dec);
 if(U && opcode==4) return RADDHN_advsimd(ctx, dec);
 if(U && opcode==5) return UABAL_advsimd(ctx, dec);
 if(U && opcode==6) return RSUBHN_advsimd(ctx, dec);
 if(U && opcode==7) return UABDL_advsimd(ctx, dec);
 if(U && opcode==8) return UMLAL_advsimd_vec(ctx, dec);
 if(U && opcode==9) UNALLOCATED(ENC_UNALLOCATED_32_ASIMDDIFF);
 if(U && opcode==10) return UMLSL_advsimd_vec(ctx, dec);
 if(U && opcode==11) UNALLOCATED(ENC_UNALLOCATED_34_ASIMDDIFF);
 if(U && opcode==12) return UMULL_advsimd_vec(ctx, dec);
 if(U && opcode==13) UNALLOCATED(ENC_UNALLOCATED_38_ASIMDDIFF);
 if(U && opcode==14) UNALLOCATED(ENC_UNALLOCATED_40_ASIMDDIFF);
 if(opcode==15) UNALLOCATED(ENC_UNALLOCATED_41_ASIMDDIFF);
 UNMATCHED;
}

int decode_iclass_asimdsame(context *ctx, Instruction *dec)
{
 uint32_t U=(INSWORD>>29)&1, size=(INSWORD>>22)&3, opcode=(INSWORD>>11)&0x1f;
 if(!U && !size && opcode==3) return AND_advsimd(ctx, dec);
 if(!U && !size && opcode==0x1d && HasFHM()) return FMLAL_advsimd_vec(ctx, dec);
 if(!U && size==1 && opcode==3) return BIC_advsimd_reg(ctx, dec);
 if(!U && size==1 && opcode==0x1d) UNALLOCATED(ENC_UNALLOCATED_88_ASIMDSAME);
 if(!U && size==2 && opcode==3) return ORR_advsimd_reg(ctx, dec);
 if(!U && size==2 && opcode==0x1d && HasFHM()) return FMLSL_advsimd_vec(ctx, dec);
 if(!U && size==3 && opcode==3) return ORN_advsimd(ctx, dec);
 if(!U && size==3 && opcode==0x1d) UNALLOCATED(ENC_UNALLOCATED_91_ASIMDSAME);
 if(U && !size && opcode==3) return EOR_advsimd(ctx, dec);
 if(U && !size && opcode==0x19 && HasFHM()) return FMLAL_advsimd_vec(ctx, dec);
 if(U && size==1 && opcode==3) return BSL_advsimd(ctx, dec);
 if(U && size==1 && opcode==0x19) UNALLOCATED(ENC_UNALLOCATED_71_ASIMDSAME);
 if(U && size==2 && opcode==3) return BIT_advsimd(ctx, dec);
 if(U && size==2 && opcode==0x19 && HasFHM()) return FMLSL_advsimd_vec(ctx, dec);
 if(U && size==3 && opcode==3) return BIF_advsimd(ctx, dec);
 if(U && size==3 && opcode==0x19) UNALLOCATED(ENC_UNALLOCATED_74_ASIMDSAME);
 if(!U && !(size&2) && opcode==0x18) return FMAXNM_advsimd(ctx, dec);
 if(!U && !(size&2) && opcode==0x19) return FMLA_advsimd_vec(ctx, dec);
 if(!U && !(size&2) && opcode==0x1a) return FADD_advsimd(ctx, dec);
 if(!U && !(size&2) && opcode==0x1b) return FMULX_advsimd_vec(ctx, dec);
 if(!U && !(size&2) && opcode==0x1c) return FCMEQ_advsimd_reg(ctx, dec);
 if(!U && !(size&2) && opcode==0x1e) return FMAX_advsimd(ctx, dec);
 if(!U && !(size&2) && opcode==0x1f) return FRECPS_advsimd(ctx, dec);
 if(!U && (size&2)==2 && opcode==0x18) return FMINNM_advsimd(ctx, dec);
 if(!U && (size&2)==2 && opcode==0x19) return FMLS_advsimd_vec(ctx, dec);
 if(!U && (size&2)==2 && opcode==0x1a) return FSUB_advsimd(ctx, dec);
 if(!U && (size&2)==2 && opcode==0x1b) UNALLOCATED(ENC_UNALLOCATED_81_ASIMDSAME);
 if(!U && (size&2)==2 && opcode==0x1c) UNALLOCATED(ENC_UNALLOCATED_85_ASIMDSAME);
 if(!U && (size&2)==2 && opcode==0x1e) return FMIN_advsimd(ctx, dec);
 if(!U && (size&2)==2 && opcode==0x1f) return FRSQRTS_advsimd(ctx, dec);
 if(U && !(size&2) && opcode==0x18) return FMAXNMP_advsimd_vec(ctx, dec);
 if(U && !(size&2) && opcode==0x1a) return FADDP_advsimd_vec(ctx, dec);
 if(U && !(size&2) && opcode==0x1b) return FMUL_advsimd_vec(ctx, dec);
 if(U && !(size&2) && opcode==0x1c) return FCMGE_advsimd_reg(ctx, dec);
 if(U && !(size&2) && opcode==0x1d) return FACGE_advsimd(ctx, dec);
 if(U && !(size&2) && opcode==0x1e) return FMAXP_advsimd_vec(ctx, dec);
 if(U && !(size&2) && opcode==0x1f) return FDIV_advsimd(ctx, dec);
 if(U && (size&2)==2 && opcode==0x18) return FMINNMP_advsimd_vec(ctx, dec);
 if(U && (size&2)==2 && opcode==0x1a) return FABD_advsimd(ctx, dec);
 if(U && (size&2)==2 && opcode==0x1b) UNALLOCATED(ENC_UNALLOCATED_82_ASIMDSAME);
 if(U && (size&2)==2 && opcode==0x1c) return FCMGT_advsimd_reg(ctx, dec);
 if(U && (size&2)==2 && opcode==0x1d) return FACGT_advsimd(ctx, dec);
 if(U && (size&2)==2 && opcode==0x1e) return FMINP_advsimd_vec(ctx, dec);
 if(U && (size&2)==2 && opcode==0x1f) UNALLOCATED(ENC_UNALLOCATED_100_ASIMDSAME);
 if(!U && !opcode) return SHADD_advsimd(ctx, dec);
 if(!U && opcode==1) return SQADD_advsimd(ctx, dec);
 if(!U && opcode==2) return SRHADD_advsimd(ctx, dec);
 if(!U && opcode==4) return SHSUB_advsimd(ctx, dec);
 if(!U && opcode==5) return SQSUB_advsimd(ctx, dec);
 if(!U && opcode==6) return CMGT_advsimd_reg(ctx, dec);
 if(!U && opcode==7) return CMGE_advsimd_reg(ctx, dec);
 if(!U && opcode==8) return SSHL_advsimd(ctx, dec);
 if(!U && opcode==9) return SQSHL_advsimd_reg(ctx, dec);
 if(!U && opcode==10) return SRSHL_advsimd(ctx, dec);
 if(!U && opcode==11) return SQRSHL_advsimd(ctx, dec);
 if(!U && opcode==12) return SMAX_advsimd(ctx, dec);
 if(!U && opcode==13) return SMIN_advsimd(ctx, dec);
 if(!U && opcode==14) return SABD_advsimd(ctx, dec);
 if(!U && opcode==15) return SABA_advsimd(ctx, dec);
 if(!U && opcode==0x10) return ADD_advsimd(ctx, dec);
 if(!U && opcode==0x11) return CMTST_advsimd(ctx, dec);
 if(!U && opcode==0x12) return MLA_advsimd_vec(ctx, dec);
 if(!U && opcode==0x13) return MUL_advsimd_vec(ctx, dec);
 if(!U && opcode==0x14) return SMAXP_advsimd(ctx, dec);
 if(!U && opcode==0x15) return SMINP_advsimd(ctx, dec);
 if(!U && opcode==0x16) return SQDMULH_advsimd_vec(ctx, dec);
 if(!U && opcode==0x17) return ADDP_advsimd_vec(ctx, dec);
 if(U && !opcode) return UHADD_advsimd(ctx, dec);
 if(U && opcode==1) return UQADD_advsimd(ctx, dec);
 if(U && opcode==2) return URHADD_advsimd(ctx, dec);
 if(U && opcode==4) return UHSUB_advsimd(ctx, dec);
 if(U && opcode==5) return UQSUB_advsimd(ctx, dec);
 if(U && opcode==6) return CMHI_advsimd(ctx, dec);
 if(U && opcode==7) return CMHS_advsimd(ctx, dec);
 if(U && opcode==8) return USHL_advsimd(ctx, dec);
 if(U && opcode==9) return UQSHL_advsimd_reg(ctx, dec);
 if(U && opcode==10) return URSHL_advsimd(ctx, dec);
 if(U && opcode==11) return UQRSHL_advsimd(ctx, dec);
 if(U && opcode==12) return UMAX_advsimd(ctx, dec);
 if(U && opcode==13) return UMIN_advsimd(ctx, dec);
 if(U && opcode==14) return UABD_advsimd(ctx, dec);
 if(U && opcode==15) return UABA_advsimd(ctx, dec);
 if(U && opcode==0x10) return SUB_advsimd(ctx, dec);
 if(U && opcode==0x11) return CMEQ_advsimd_reg(ctx, dec);
 if(U && opcode==0x12) return MLS_advsimd_vec(ctx, dec);
 if(U && opcode==0x13) return PMUL_advsimd(ctx, dec);
 if(U && opcode==0x14) return UMAXP_advsimd(ctx, dec);
 if(U && opcode==0x15) return UMINP_advsimd(ctx, dec);
 if(U && opcode==0x16) return SQRDMULH_advsimd_vec(ctx, dec);
 if(U && opcode==0x17) UNALLOCATED(ENC_UNALLOCATED_64_ASIMDSAME);
 UNMATCHED;
}

int decode_iclass_asimdsamefp16(context *ctx, Instruction *dec)
{
 uint32_t U=(INSWORD>>29)&1, a=(INSWORD>>23)&1, opcode=(INSWORD>>11)&7;
 if(!U && !a && !opcode && HasFP16()) return FMAXNM_advsimd(ctx, dec);
 if(!U && !a && opcode==1 && HasFP16()) return FMLA_advsimd_vec(ctx, dec);
 if(!U && !a && opcode==2 && HasFP16()) return FADD_advsimd(ctx, dec);
 if(!U && !a && opcode==3 && HasFP16()) return FMULX_advsimd_vec(ctx, dec);
 if(!U && !a && opcode==4 && HasFP16()) return FCMEQ_advsimd_reg(ctx, dec);
 if(!U && !a && opcode==5) UNALLOCATED(ENC_UNALLOCATED_31_ASIMDSAMEFP16);
 if(!U && !a && opcode==6 && HasFP16()) return FMAX_advsimd(ctx, dec);
 if(!U && !a && opcode==7 && HasFP16()) return FRECPS_advsimd(ctx, dec);
 if(!U && a && !opcode && HasFP16()) return FMINNM_advsimd(ctx, dec);
 if(!U && a && opcode==1 && HasFP16()) return FMLS_advsimd_vec(ctx, dec);
 if(!U && a && opcode==2 && HasFP16()) return FSUB_advsimd(ctx, dec);
 if(!U && a && opcode==3) UNALLOCATED(ENC_UNALLOCATED_25_ASIMDSAMEFP16);
 if(!U && a && opcode==4) UNALLOCATED(ENC_UNALLOCATED_29_ASIMDSAMEFP16);
 if(!U && a && opcode==5) UNALLOCATED(ENC_UNALLOCATED_33_ASIMDSAMEFP16);
 if(!U && a && opcode==6 && HasFP16()) return FMIN_advsimd(ctx, dec);
 if(!U && a && opcode==7 && HasFP16()) return FRSQRTS_advsimd(ctx, dec);
 if(U && !a && !opcode && HasFP16()) return FMAXNMP_advsimd_vec(ctx, dec);
 if(U && !a && opcode==1) UNALLOCATED(ENC_UNALLOCATED_16_ASIMDSAMEFP16);
 if(U && !a && opcode==2 && HasFP16()) return FADDP_advsimd_vec(ctx, dec);
 if(U && !a && opcode==3 && HasFP16()) return FMUL_advsimd_vec(ctx, dec);
 if(U && !a && opcode==4 && HasFP16()) return FCMGE_advsimd_reg(ctx, dec);
 if(U && !a && opcode==5 && HasFP16()) return FACGE_advsimd(ctx, dec);
 if(U && !a && opcode==6 && HasFP16()) return FMAXP_advsimd_vec(ctx, dec);
 if(U && !a && opcode==7 && HasFP16()) return FDIV_advsimd(ctx, dec);
 if(U && a && !opcode && HasFP16()) return FMINNMP_advsimd_vec(ctx, dec);
 if(U && a && opcode==1) UNALLOCATED(ENC_UNALLOCATED_18_ASIMDSAMEFP16);
 if(U && a && opcode==2 && HasFP16()) return FABD_advsimd(ctx, dec);
 if(U && a && opcode==3) UNALLOCATED(ENC_UNALLOCATED_26_ASIMDSAMEFP16);
 if(U && a && opcode==4 && HasFP16()) return FCMGT_advsimd_reg(ctx, dec);
 if(U && a && opcode==5 && HasFP16()) return FACGT_advsimd(ctx, dec);
 if(U && a && opcode==6 && HasFP16()) return FMINP_advsimd_vec(ctx, dec);
 if(U && a && opcode==7) UNALLOCATED(ENC_UNALLOCATED_42_ASIMDSAMEFP16);
 UNMATCHED;
}

int decode_iclass_asimdsame2(context *ctx, Instruction *dec)
{
 uint32_t Q=(INSWORD>>30)&1, U=(INSWORD>>29)&1, size=(INSWORD>>22)&3, opcode=(INSWORD>>11)&15;
 if(!Q && U && size==1 && opcode==13) UNALLOCATED(ENC_UNALLOCATED_32_ASIMDSAME2);
 if(Q && !U && size==2 && opcode==4 && HasI8MM()) return SMMLA_advsimd_vec(ctx, dec);
 if(Q && !U && size==2 && opcode==5 && HasI8MM()) return USMMLA_advsimd_vec(ctx, dec);
 if(Q && U && size==1 && opcode==13 && HasBF16()) return BFMMLA_advsimd(ctx, dec);
 if(Q && U && size==2 && opcode==4 && HasI8MM()) return UMMLA_advsimd_vec(ctx, dec);
 if(Q && U && size==2 && opcode==5) UNALLOCATED(ENC_UNALLOCATED_26_ASIMDSAME2);
 if(!U && size==2 && opcode==3 && HasI8MM()) return USDOT_advsimd_vec(ctx, dec);
 if(U && !size && opcode==13) UNALLOCATED(ENC_UNALLOCATED_31_ASIMDSAME2);
 if(U && !size && opcode==15) UNALLOCATED(ENC_UNALLOCATED_35_ASIMDSAME2);
 if(U && size==1 && opcode==15 && HasBF16()) return BFDOT_advsimd_vec(ctx, dec);
 if(U && size==2 && opcode==3) UNALLOCATED(ENC_UNALLOCATED_19_ASIMDSAME2);
 if(U && size==2 && opcode==15) UNALLOCATED(ENC_UNALLOCATED_38_ASIMDSAME2);
 if(U && size==3 && opcode==15 && HasBF16()) return BFMLAL_advsimd_vec(ctx, dec);
 if(size==3 && opcode==3) UNALLOCATED(ENC_UNALLOCATED_20_ASIMDSAME2);
 if(U && (size&2)==2 && opcode==13) UNALLOCATED(ENC_UNALLOCATED_34_ASIMDSAME2);
 if(!(size&2) && opcode==3) UNALLOCATED(ENC_UNALLOCATED_17_ASIMDSAME2);
 if(!U && !opcode) UNALLOCATED(ENC_UNALLOCATED_11_ASIMDSAME2);
 if(!U && opcode==1) UNALLOCATED(ENC_UNALLOCATED_13_ASIMDSAME2);
 if(!U && opcode==2 && HasDotProd()) return SDOT_advsimd_vec(ctx, dec);
 if(U && !opcode && HasRDM()) return SQRDMLAH_advsimd_vec(ctx, dec);
 if(U && opcode==1 && HasRDM()) return SQRDMLSH_advsimd_vec(ctx, dec);
 if(U && opcode==2 && HasDotProd()) return UDOT_advsimd_vec(ctx, dec);
 if(Q && (size&2)==2 && (opcode&14)==6) UNALLOCATED(ENC_UNALLOCATED_27_ASIMDSAME2);
 if(U && (opcode&13)==12 && HasFCMA()) return FCADD_advsimd_vec(ctx, dec);
 if(Q && !(size&2) && (opcode&12)==4) UNALLOCATED(ENC_UNALLOCATED_22_ASIMDSAME2);
 if(U && (opcode&12)==8 && HasFCMA()) return FCMLA_advsimd_vec(ctx, dec);
 if(!Q && (opcode&12)==4) UNALLOCATED(ENC_UNALLOCATED_21_ASIMDSAME2);
 if(!U && (opcode&8)==8) UNALLOCATED(ENC_UNALLOCATED_28_ASIMDSAME2);
 UNMATCHED;
}

int decode_iclass_asimdmisc(context *ctx, Instruction *dec)
{
 uint32_t U=(INSWORD>>29)&1, size=(INSWORD>>22)&3, opcode=(INSWORD>>12)&0x1f;
 if(!U && size==2 && opcode==0x16 && HasBF16()) return BFCVTN_advsimd(ctx, dec);
 if(U && !size && opcode==5) return NOT_advsimd(ctx, dec);
 if(U && size==1 && opcode==5) return RBIT_advsimd(ctx, dec);
 if(U && size==2 && opcode==0x16) UNALLOCATED(ENC_UNALLOCATED_57_ASIMDMISC);
 if(size==3 && opcode==0x16) UNALLOCATED(ENC_UNALLOCATED_58_ASIMDMISC);
 if(!U && !(size&2) && opcode==0x16) return FCVTN_advsimd(ctx, dec);
 if(!U && !(size&2) && opcode==0x17) return FCVTL_advsimd(ctx, dec);
 if(!U && !(size&2) && opcode==0x18) return FRINTN_advsimd(ctx, dec);
 if(!U && !(size&2) && opcode==0x19) return FRINTM_advsimd(ctx, dec);
 if(!U && !(size&2) && opcode==0x1a) return FCVTNS_advsimd(ctx, dec);
 if(!U && !(size&2) && opcode==0x1b) return FCVTMS_advsimd(ctx, dec);
 if(!U && !(size&2) && opcode==0x1c) return FCVTAS_advsimd(ctx, dec);
 if(!U && !(size&2) && opcode==0x1d) return SCVTF_advsimd_int(ctx, dec);
 if(!U && !(size&2) && opcode==0x1e && HasFRINTTS()) return FRINT32Z_advsimd(ctx, dec);
 if(!U && !(size&2) && opcode==0x1f && HasFRINTTS()) return FRINT64Z_advsimd(ctx, dec);
 if(!U && (size&2)==2 && opcode==12) return FCMGT_advsimd_zero(ctx, dec);
 if(!U && (size&2)==2 && opcode==13) return FCMEQ_advsimd_zero(ctx, dec);
 if(!U && (size&2)==2 && opcode==14) return FCMLT_advsimd(ctx, dec);
 if(!U && (size&2)==2 && opcode==15) return FABS_advsimd(ctx, dec);
 if(!U && (size&2)==2 && opcode==0x18) return FRINTP_advsimd(ctx, dec);
 if(!U && (size&2)==2 && opcode==0x19) return FRINTZ_advsimd(ctx, dec);
 if(!U && (size&2)==2 && opcode==0x1a) return FCVTPS_advsimd(ctx, dec);
 if(!U && (size&2)==2 && opcode==0x1b) return FCVTZS_advsimd_int(ctx, dec);
 if(!U && (size&2)==2 && opcode==0x1c) return URECPE_advsimd(ctx, dec);
 if(!U && (size&2)==2 && opcode==0x1d) return FRECPE_advsimd(ctx, dec);
 if(!U && (size&2)==2 && opcode==0x1f) UNALLOCATED(ENC_UNALLOCATED_91_ASIMDMISC);
 if(U && !(size&2) && opcode==0x16) return FCVTXN_advsimd(ctx, dec);
 if(U && !(size&2) && opcode==0x17) UNALLOCATED(ENC_UNALLOCATED_60_ASIMDMISC);
 if(U && !(size&2) && opcode==0x18) return FRINTA_advsimd(ctx, dec);
 if(U && !(size&2) && opcode==0x19) return FRINTX_advsimd(ctx, dec);
 if(U && !(size&2) && opcode==0x1a) return FCVTNU_advsimd(ctx, dec);
 if(U && !(size&2) && opcode==0x1b) return FCVTMU_advsimd(ctx, dec);
 if(U && !(size&2) && opcode==0x1c) return FCVTAU_advsimd(ctx, dec);
 if(U && !(size&2) && opcode==0x1d) return UCVTF_advsimd_int(ctx, dec);
 if(U && !(size&2) && opcode==0x1e && HasFRINTTS()) return FRINT32X_advsimd(ctx, dec);
 if(U && !(size&2) && opcode==0x1f && HasFRINTTS()) return FRINT64X_advsimd(ctx, dec);
 if(U && (size&2)==2 && opcode==5) UNALLOCATED(ENC_UNALLOCATED_24_ASIMDMISC);
 if(U && (size&2)==2 && opcode==12) return FCMGE_advsimd_zero(ctx, dec);
 if(U && (size&2)==2 && opcode==13) return FCMLE_advsimd(ctx, dec);
 if(U && (size&2)==2 && opcode==14) UNALLOCATED(ENC_UNALLOCATED_43_ASIMDMISC);
 if(U && (size&2)==2 && opcode==15) return FNEG_advsimd(ctx, dec);
 if(U && (size&2)==2 && opcode==0x18) UNALLOCATED(ENC_UNALLOCATED_65_ASIMDMISC);
 if(U && (size&2)==2 && opcode==0x19) return FRINTI_advsimd(ctx, dec);
 if(U && (size&2)==2 && opcode==0x1a) return FCVTPU_advsimd(ctx, dec);
 if(U && (size&2)==2 && opcode==0x1b) return FCVTZU_advsimd_int(ctx, dec);
 if(U && (size&2)==2 && opcode==0x1c) return URSQRTE_advsimd(ctx, dec);
 if(U && (size&2)==2 && opcode==0x1d) return FRSQRTE_advsimd(ctx, dec);
 if(U && (size&2)==2 && opcode==0x1f) return FSQRT_advsimd(ctx, dec);
 if((size&2)==2 && opcode==0x17) UNALLOCATED(ENC_UNALLOCATED_61_ASIMDMISC);
 if((size&2)==2 && opcode==0x1e) UNALLOCATED(ENC_UNALLOCATED_88_ASIMDMISC);
 if(!U && !opcode) return REV64_advsimd(ctx, dec);
 if(!U && opcode==1) return REV16_advsimd(ctx, dec);
 if(!U && opcode==2) return SADDLP_advsimd(ctx, dec);
 if(!U && opcode==3) return SUQADD_advsimd(ctx, dec);
 if(!U && opcode==4) return CLS_advsimd(ctx, dec);
 if(!U && opcode==5) return CNT_advsimd(ctx, dec);
 if(!U && opcode==6) return SADALP_advsimd(ctx, dec);
 if(!U && opcode==7) return SQABS_advsimd(ctx, dec);
 if(!U && opcode==8) return CMGT_advsimd_zero(ctx, dec);
 if(!U && opcode==9) return CMEQ_advsimd_zero(ctx, dec);
 if(!U && opcode==10) return CMLT_advsimd(ctx, dec);
 if(!U && opcode==11) return ABS_advsimd(ctx, dec);
 if(!U && opcode==0x12) return XTN_advsimd(ctx, dec);
 if(!U && opcode==0x13) UNALLOCATED(ENC_UNALLOCATED_49_ASIMDMISC);
 if(!U && opcode==0x14) return SQXTN_advsimd(ctx, dec);
 if(U && !opcode) return REV32_advsimd(ctx, dec);
 if(U && opcode==1) UNALLOCATED(ENC_UNALLOCATED_14_ASIMDMISC);
 if(U && opcode==2) return UADDLP_advsimd(ctx, dec);
 if(U && opcode==3) return USQADD_advsimd(ctx, dec);
 if(U && opcode==4) return CLZ_advsimd(ctx, dec);
 if(U && opcode==6) return UADALP_advsimd(ctx, dec);
 if(U && opcode==7) return SQNEG_advsimd(ctx, dec);
 if(U && opcode==8) return CMGE_advsimd_zero(ctx, dec);
 if(U && opcode==9) return CMLE_advsimd(ctx, dec);
 if(U && opcode==10) UNALLOCATED(ENC_UNALLOCATED_34_ASIMDMISC);
 if(U && opcode==11) return NEG_advsimd(ctx, dec);
 if(U && opcode==0x12) return SQXTUN_advsimd(ctx, dec);
 if(U && opcode==0x13) return SHLL_advsimd(ctx, dec);
 if(U && opcode==0x14) return UQXTN_advsimd(ctx, dec);
 if(opcode==0x15) UNALLOCATED(ENC_UNALLOCATED_53_ASIMDMISC);
 if((opcode&0x1e)==0x10) UNALLOCATED(ENC_UNALLOCATED_46_ASIMDMISC);
 if(!(size&2) && (opcode&0x1c)==12) UNALLOCATED(ENC_UNALLOCATED_37_ASIMDMISC);
 UNMATCHED;
}

int decode_iclass_asimdmiscfp16(context *ctx, Instruction *dec)
{
 uint32_t U=(INSWORD>>29)&1, a=(INSWORD>>23)&1, opcode=(INSWORD>>12)&0x1f;
 if(!U && !a && opcode==0x18 && HasFP16()) return FRINTN_advsimd(ctx, dec);
 if(!U && !a && opcode==0x19 && HasFP16()) return FRINTM_advsimd(ctx, dec);
 if(!U && !a && opcode==0x1a && HasFP16()) return FCVTNS_advsimd(ctx, dec);
 if(!U && !a && opcode==0x1b && HasFP16()) return FCVTMS_advsimd(ctx, dec);
 if(!U && !a && opcode==0x1c && HasFP16()) return FCVTAS_advsimd(ctx, dec);
 if(!U && !a && opcode==0x1d && HasFP16()) return SCVTF_advsimd_int(ctx, dec);
 if(!U && a && opcode==12 && HasFP16()) return FCMGT_advsimd_zero(ctx, dec);
 if(!U && a && opcode==13 && HasFP16()) return FCMEQ_advsimd_zero(ctx, dec);
 if(!U && a && opcode==14 && HasFP16()) return FCMLT_advsimd(ctx, dec);
 if(!U && a && opcode==15 && HasFP16()) return FABS_advsimd(ctx, dec);
 if(!U && a && opcode==0x18 && HasFP16()) return FRINTP_advsimd(ctx, dec);
 if(!U && a && opcode==0x19 && HasFP16()) return FRINTZ_advsimd(ctx, dec);
 if(!U && a && opcode==0x1a && HasFP16()) return FCVTPS_advsimd(ctx, dec);
 if(!U && a && opcode==0x1b && HasFP16()) return FCVTZS_advsimd_int(ctx, dec);
 if(!U && a && opcode==0x1d && HasFP16()) return FRECPE_advsimd(ctx, dec);
 if(!U && a && opcode==0x1f) UNALLOCATED(ENC_UNALLOCATED_48_ASIMDMISCFP16);
 if(U && !a && opcode==0x18 && HasFP16()) return FRINTA_advsimd(ctx, dec);
 if(U && !a && opcode==0x19 && HasFP16()) return FRINTX_advsimd(ctx, dec);
 if(U && !a && opcode==0x1a && HasFP16()) return FCVTNU_advsimd(ctx, dec);
 if(U && !a && opcode==0x1b && HasFP16()) return FCVTMU_advsimd(ctx, dec);
 if(U && !a && opcode==0x1c && HasFP16()) return FCVTAU_advsimd(ctx, dec);
 if(U && !a && opcode==0x1d && HasFP16()) return UCVTF_advsimd_int(ctx, dec);
 if(U && a && opcode==12 && HasFP16()) return FCMGE_advsimd_zero(ctx, dec);
 if(U && a && opcode==13 && HasFP16()) return FCMLE_advsimd(ctx, dec);
 if(U && a && opcode==14) UNALLOCATED(ENC_UNALLOCATED_19_ASIMDMISCFP16);
 if(U && a && opcode==15 && HasFP16()) return FNEG_advsimd(ctx, dec);
 if(U && a && opcode==0x18) UNALLOCATED(ENC_UNALLOCATED_26_ASIMDMISCFP16);
 if(U && a && opcode==0x19 && HasFP16()) return FRINTI_advsimd(ctx, dec);
 if(U && a && opcode==0x1a && HasFP16()) return FCVTPU_advsimd(ctx, dec);
 if(U && a && opcode==0x1b && HasFP16()) return FCVTZU_advsimd_int(ctx, dec);
 if(U && a && opcode==0x1d && HasFP16()) return FRSQRTE_advsimd(ctx, dec);
 if(U && a && opcode==0x1f && HasFP16()) return FSQRT_advsimd(ctx, dec);
 if(!a && opcode==0x1f) UNALLOCATED(ENC_UNALLOCATED_47_ASIMDMISCFP16);
 if(a && opcode==0x1c) UNALLOCATED(ENC_UNALLOCATED_41_ASIMDMISCFP16);
 if(opcode==0x1e) UNALLOCATED(ENC_UNALLOCATED_46_ASIMDMISCFP16);
 if(!a && (opcode&0x1c)==12) UNALLOCATED(ENC_UNALLOCATED_13_ASIMDMISCFP16);
 if((opcode&0x1c)==8) UNALLOCATED(ENC_UNALLOCATED_12_ASIMDMISCFP16);
 if(!(opcode&0x18)) UNALLOCATED(ENC_UNALLOCATED_11_ASIMDMISCFP16);
 if((opcode&0x18)==0x10) UNALLOCATED(ENC_UNALLOCATED_22_ASIMDMISCFP16);
 UNMATCHED;
}

int decode_iclass_asimdelem(context *ctx, Instruction *dec)
{
 uint32_t U=(INSWORD>>29)&1, size=(INSWORD>>22)&3, opcode=(INSWORD>>12)&15;
 if(!U && !size && opcode==1 && HasFP16()) return FMLA_advsimd_elt(ctx, dec);
 if(!U && !size && opcode==5 && HasFP16()) return FMLS_advsimd_elt(ctx, dec);
 if(!U && !size && opcode==9 && HasFP16()) return FMUL_advsimd_elt(ctx, dec);
 if(!U && !size && opcode==15 && HasI8MM()) return SUDOT_advsimd_elt(ctx, dec);
 if(!U && size==1 && opcode==1) UNALLOCATED(ENC_UNALLOCATED_17_ASIMDELEM);
 if(!U && size==1 && opcode==5) UNALLOCATED(ENC_UNALLOCATED_33_ASIMDELEM);
 if(!U && size==1 && opcode==15 && HasBF16()) return BFDOT_advsimd_elt(ctx, dec);
 if(!U && size==2 && !opcode && HasFHM()) return FMLAL_advsimd_elt(ctx, dec);
 if(!U && size==2 && opcode==4 && HasFHM()) return FMLSL_advsimd_elt(ctx, dec);
 if(!U && size==2 && opcode==15 && HasI8MM()) return USDOT_advsimd_elt(ctx, dec);
 if(!U && size==3 && !opcode) UNALLOCATED(ENC_UNALLOCATED_13_ASIMDELEM);
 if(!U && size==3 && opcode==4) UNALLOCATED(ENC_UNALLOCATED_29_ASIMDELEM);
 if(!U && size==3 && opcode==15 && HasBF16()) return BFMLAL_advsimd_elt(ctx, dec);
 if(U && !size && opcode==1) UNALLOCATED(ENC_UNALLOCATED_16_ASIMDELEM);
 if(U && !size && opcode==3) UNALLOCATED(ENC_UNALLOCATED_25_ASIMDELEM);
 if(U && !size && opcode==5) UNALLOCATED(ENC_UNALLOCATED_32_ASIMDELEM);
 if(U && !size && opcode==7) UNALLOCATED(ENC_UNALLOCATED_39_ASIMDELEM);
 if(U && !size && opcode==9 && HasFP16()) return FMULX_advsimd_elt(ctx, dec);
 if(U && size==2 && opcode==8 && HasFHM()) return FMLAL_advsimd_elt(ctx, dec);
 if(U && size==2 && opcode==12 && HasFHM()) return FMLSL_advsimd_elt(ctx, dec);
 if(U && size==3 && opcode==1) RESERVED(ENC_RESERVED_21_ASIMDELEM);
 if(U && size==3 && opcode==3) UNALLOCATED(ENC_UNALLOCATED_26_ASIMDELEM);
 if(U && size==3 && opcode==5) RESERVED(ENC_RESERVED_35_ASIMDELEM);
 if(U && size==3 && opcode==7) UNALLOCATED(ENC_UNALLOCATED_40_ASIMDELEM);
 if(U && size==3 && opcode==8) UNALLOCATED(ENC_UNALLOCATED_44_ASIMDELEM);
 if(U && size==3 && opcode==12) UNALLOCATED(ENC_UNALLOCATED_57_ASIMDELEM);
 if(size==1 && opcode==9) UNALLOCATED(ENC_UNALLOCATED_47_ASIMDELEM);
 if(!U && !(size&2) && !opcode) UNALLOCATED(ENC_UNALLOCATED_11_ASIMDELEM);
 if(!U && !(size&2) && opcode==4) UNALLOCATED(ENC_UNALLOCATED_27_ASIMDELEM);
 if(!U && (size&2)==2 && opcode==1) return FMLA_advsimd_elt(ctx, dec);
 if(!U && (size&2)==2 && opcode==5) return FMLS_advsimd_elt(ctx, dec);
 if(!U && (size&2)==2 && opcode==9) return FMUL_advsimd_elt(ctx, dec);
 if(U && !(size&2) && opcode==8) UNALLOCATED(ENC_UNALLOCATED_42_ASIMDELEM);
 if(U && !(size&2) && opcode==12) UNALLOCATED(ENC_UNALLOCATED_55_ASIMDELEM);
 if(U && (size&2)==2 && opcode==9) return FMULX_advsimd_elt(ctx, dec);
 if(!U && opcode==2) return SMLAL_advsimd_elt(ctx, dec);
 if(!U && opcode==3) return SQDMLAL_advsimd_elt(ctx, dec);
 if(!U && opcode==6) return SMLSL_advsimd_elt(ctx, dec);
 if(!U && opcode==7) return SQDMLSL_advsimd_elt(ctx, dec);
 if(!U && opcode==8) return MUL_advsimd_elt(ctx, dec);
 if(!U && opcode==10) return SMULL_advsimd_elt(ctx, dec);
 if(!U && opcode==11) return SQDMULL_advsimd_elt(ctx, dec);
 if(!U && opcode==12) return SQDMULH_advsimd_elt(ctx, dec);
 if(!U && opcode==13) return SQRDMULH_advsimd_elt(ctx, dec);
 if(!U && opcode==14 && HasDotProd()) return SDOT_advsimd_elt(ctx, dec);
 if(U && !opcode) return MLA_advsimd_elt(ctx, dec);
 if(U && opcode==2) return UMLAL_advsimd_elt(ctx, dec);
 if(U && opcode==4) return MLS_advsimd_elt(ctx, dec);
 if(U && opcode==6) return UMLSL_advsimd_elt(ctx, dec);
 if(U && opcode==10) return UMULL_advsimd_elt(ctx, dec);
 if(U && opcode==11) UNALLOCATED(ENC_UNALLOCATED_53_ASIMDELEM);
 if(U && opcode==13 && HasRDM()) return SQRDMLAH_advsimd_elt(ctx, dec);
 if(U && opcode==14 && HasDotProd()) return UDOT_advsimd_elt(ctx, dec);
 if(U && opcode==15 && HasRDM()) return SQRDMLSH_advsimd_elt(ctx, dec);
 if(U && size==1 && (opcode&9)==1 && HasFCMA()) return FCMLA_advsimd_elt(ctx, dec);
 if(U && size==2 && (opcode&9)==1 && HasFCMA()) return FCMLA_advsimd_elt(ctx, dec);
 UNMATCHED;
}

int decode_iclass_float2fix(context *ctx, Instruction *dec)
{
 uint32_t sf=INSWORD>>31, S=(INSWORD>>29)&1, ptype=(INSWORD>>22)&3, rmode=(INSWORD>>19)&3, opcode=(INSWORD>>16)&7, scale=(INSWORD>>10)&0x3f;
 if(!sf && !S && !ptype && !rmode && opcode==2) return SCVTF_float_fix(ctx, dec);
 if(!sf && !S && !ptype && !rmode && opcode==3) return UCVTF_float_fix(ctx, dec);
 if(!sf && !S && !ptype && rmode==3 && !opcode) return FCVTZS_float_fix(ctx, dec);
 if(!sf && !S && !ptype && rmode==3 && opcode==1) return FCVTZU_float_fix(ctx, dec);
 if(!sf && !S && ptype==1 && !rmode && opcode==2) return SCVTF_float_fix(ctx, dec);
 if(!sf && !S && ptype==1 && !rmode && opcode==3) return UCVTF_float_fix(ctx, dec);
 if(!sf && !S && ptype==1 && rmode==3 && !opcode) return FCVTZS_float_fix(ctx, dec);
 if(!sf && !S && ptype==1 && rmode==3 && opcode==1) return FCVTZU_float_fix(ctx, dec);
 if(!sf && !S && ptype==3 && !rmode && opcode==2 && HasFP16()) return SCVTF_float_fix(ctx, dec);
 if(!sf && !S && ptype==3 && !rmode && opcode==3 && HasFP16()) return UCVTF_float_fix(ctx, dec);
 if(!sf && !S && ptype==3 && rmode==3 && !opcode && HasFP16()) return FCVTZS_float_fix(ctx, dec);
 if(!sf && !S && ptype==3 && rmode==3 && opcode==1 && HasFP16()) return FCVTZU_float_fix(ctx, dec);
 if(sf && !S && !ptype && !rmode && opcode==2) return SCVTF_float_fix(ctx, dec);
 if(sf && !S && !ptype && !rmode && opcode==3) return UCVTF_float_fix(ctx, dec);
 if(sf && !S && !ptype && rmode==3 && !opcode) return FCVTZS_float_fix(ctx, dec);
 if(sf && !S && !ptype && rmode==3 && opcode==1) return FCVTZU_float_fix(ctx, dec);
 if(sf && !S && ptype==1 && !rmode && opcode==2) return SCVTF_float_fix(ctx, dec);
 if(sf && !S && ptype==1 && !rmode && opcode==3) return UCVTF_float_fix(ctx, dec);
 if(sf && !S && ptype==1 && rmode==3 && !opcode) return FCVTZS_float_fix(ctx, dec);
 if(sf && !S && ptype==1 && rmode==3 && opcode==1) return FCVTZU_float_fix(ctx, dec);
 if(sf && !S && ptype==3 && !rmode && opcode==2 && HasFP16()) return SCVTF_float_fix(ctx, dec);
 if(sf && !S && ptype==3 && !rmode && opcode==3 && HasFP16()) return UCVTF_float_fix(ctx, dec);
 if(sf && !S && ptype==3 && rmode==3 && !opcode && HasFP16()) return FCVTZS_float_fix(ctx, dec);
 if(sf && !S && ptype==3 && rmode==3 && opcode==1 && HasFP16()) return FCVTZU_float_fix(ctx, dec);
 if(!(rmode&1) && !(opcode&6)) UNALLOCATED(ENC_UNALLOCATED_13_FLOAT2FIX);
 if(rmode&1 && (opcode&6)==2) UNALLOCATED(ENC_UNALLOCATED_15_FLOAT2FIX);
 if(!(rmode&2) && !(opcode&6)) UNALLOCATED(ENC_UNALLOCATED_14_FLOAT2FIX);
 if((rmode&2)==2 && (opcode&6)==2) UNALLOCATED(ENC_UNALLOCATED_16_FLOAT2FIX);
 if(ptype==2) UNALLOCATED(ENC_UNALLOCATED_11_FLOAT2FIX);
 if(!sf && !(scale&0x20)) UNALLOCATED(ENC_UNALLOCATED_12_FLOAT2FIX);
 if((opcode&4)==4) UNALLOCATED(ENC_UNALLOCATED_17_FLOAT2FIX);
 if(S) UNALLOCATED(ENC_UNALLOCATED_10_FLOAT2FIX);
 UNMATCHED;
}

int decode_iclass_float2int(context *ctx, Instruction *dec)
{
 uint32_t sf=INSWORD>>31, S=(INSWORD>>29)&1, ptype=(INSWORD>>22)&3, rmode=(INSWORD>>19)&3, opcode=(INSWORD>>16)&7;
 if(!sf && !S && !ptype && !rmode && !opcode) return FCVTNS_float(ctx, dec);
 if(!sf && !S && !ptype && !rmode && opcode==1) return FCVTNU_float(ctx, dec);
 if(!sf && !S && !ptype && !rmode && opcode==2) return SCVTF_float_int(ctx, dec);
 if(!sf && !S && !ptype && !rmode && opcode==3) return UCVTF_float_int(ctx, dec);
 if(!sf && !S && !ptype && !rmode && opcode==4) return FCVTAS_float(ctx, dec);
 if(!sf && !S && !ptype && !rmode && opcode==5) return FCVTAU_float(ctx, dec);
 if(!sf && !S && !ptype && !rmode && opcode==6) return FMOV_float_gen(ctx, dec);
 if(!sf && !S && !ptype && !rmode && opcode==7) return FMOV_float_gen(ctx, dec);
 if(!sf && !S && !ptype && rmode==1 && !opcode) return FCVTPS_float(ctx, dec);
 if(!sf && !S && !ptype && rmode==1 && opcode==1) return FCVTPU_float(ctx, dec);
 if(!sf && !S && !ptype && rmode==2 && !opcode) return FCVTMS_float(ctx, dec);
 if(!sf && !S && !ptype && rmode==2 && opcode==1) return FCVTMU_float(ctx, dec);
 if(!sf && !S && !ptype && rmode==3 && !opcode) return FCVTZS_float_int(ctx, dec);
 if(!sf && !S && !ptype && rmode==3 && opcode==1) return FCVTZU_float_int(ctx, dec);
 if(!sf && !S && ptype==1 && !rmode && !opcode) return FCVTNS_float(ctx, dec);
 if(!sf && !S && ptype==1 && !rmode && opcode==1) return FCVTNU_float(ctx, dec);
 if(!sf && !S && ptype==1 && !rmode && opcode==2) return SCVTF_float_int(ctx, dec);
 if(!sf && !S && ptype==1 && !rmode && opcode==3) return UCVTF_float_int(ctx, dec);
 if(!sf && !S && ptype==1 && !rmode && opcode==4) return FCVTAS_float(ctx, dec);
 if(!sf && !S && ptype==1 && !rmode && opcode==5) return FCVTAU_float(ctx, dec);
 if(!sf && !S && ptype==1 && rmode==1 && !opcode) return FCVTPS_float(ctx, dec);
 if(!sf && !S && ptype==1 && rmode==1 && opcode==1) return FCVTPU_float(ctx, dec);
 if(!sf && !S && ptype==1 && rmode==2 && !opcode) return FCVTMS_float(ctx, dec);
 if(!sf && !S && ptype==1 && rmode==2 && opcode==1) return FCVTMU_float(ctx, dec);
 if(!sf && !S && ptype==1 && rmode==3 && !opcode) return FCVTZS_float_int(ctx, dec);
 if(!sf && !S && ptype==1 && rmode==3 && opcode==1) return FCVTZU_float_int(ctx, dec);
 if(!sf && !S && ptype==1 && rmode==3 && opcode==6 && HasJSCVT()) return FJCVTZS(ctx, dec);
 if(!sf && !S && ptype==1 && rmode==3 && opcode==7) UNALLOCATED(ENC_UNALLOCATED_71_FLOAT2INT);
 if(!sf && !S && ptype==3 && !rmode && !opcode && HasFP16()) return FCVTNS_float(ctx, dec);
 if(!sf && !S && ptype==3 && !rmode && opcode==1 && HasFP16()) return FCVTNU_float(ctx, dec);
 if(!sf && !S && ptype==3 && !rmode && opcode==2 && HasFP16()) return SCVTF_float_int(ctx, dec);
 if(!sf && !S && ptype==3 && !rmode && opcode==3 && HasFP16()) return UCVTF_float_int(ctx, dec);
 if(!sf && !S && ptype==3 && !rmode && opcode==4 && HasFP16()) return FCVTAS_float(ctx, dec);
 if(!sf && !S && ptype==3 && !rmode && opcode==5 && HasFP16()) return FCVTAU_float(ctx, dec);
 if(!sf && !S && ptype==3 && !rmode && opcode==6 && HasFP16()) return FMOV_float_gen(ctx, dec);
 if(!sf && !S && ptype==3 && !rmode && opcode==7 && HasFP16()) return FMOV_float_gen(ctx, dec);
 if(!sf && !S && ptype==3 && rmode==1 && !opcode && HasFP16()) return FCVTPS_float(ctx, dec);
 if(!sf && !S && ptype==3 && rmode==1 && opcode==1 && HasFP16()) return FCVTPU_float(ctx, dec);
 if(!sf && !S && ptype==3 && rmode==2 && !opcode && HasFP16()) return FCVTMS_float(ctx, dec);
 if(!sf && !S && ptype==3 && rmode==2 && opcode==1 && HasFP16()) return FCVTMU_float(ctx, dec);
 if(!sf && !S && ptype==3 && rmode==3 && !opcode && HasFP16()) return FCVTZS_float_int(ctx, dec);
 if(!sf && !S && ptype==3 && rmode==3 && opcode==1 && HasFP16()) return FCVTZU_float_int(ctx, dec);
 if(sf && !S && !ptype && !rmode && !opcode) return FCVTNS_float(ctx, dec);
 if(sf && !S && !ptype && !rmode && opcode==1) return FCVTNU_float(ctx, dec);
 if(sf && !S && !ptype && !rmode && opcode==2) return SCVTF_float_int(ctx, dec);
 if(sf && !S && !ptype && !rmode && opcode==3) return UCVTF_float_int(ctx, dec);
 if(sf && !S && !ptype && !rmode && opcode==4) return FCVTAS_float(ctx, dec);
 if(sf && !S && !ptype && !rmode && opcode==5) return FCVTAU_float(ctx, dec);
 if(sf && !S && !ptype && rmode==1 && !opcode) return FCVTPS_float(ctx, dec);
 if(sf && !S && !ptype && rmode==1 && opcode==1) return FCVTPU_float(ctx, dec);
 if(sf && !S && !ptype && rmode==2 && !opcode) return FCVTMS_float(ctx, dec);
 if(sf && !S && !ptype && rmode==2 && opcode==1) return FCVTMU_float(ctx, dec);
 if(sf && !S && !ptype && rmode==3 && !opcode) return FCVTZS_float_int(ctx, dec);
 if(sf && !S && !ptype && rmode==3 && opcode==1) return FCVTZU_float_int(ctx, dec);
 if(sf && !S && ptype==1 && !rmode && !opcode) return FCVTNS_float(ctx, dec);
 if(sf && !S && ptype==1 && !rmode && opcode==1) return FCVTNU_float(ctx, dec);
 if(sf && !S && ptype==1 && !rmode && opcode==2) return SCVTF_float_int(ctx, dec);
 if(sf && !S && ptype==1 && !rmode && opcode==3) return UCVTF_float_int(ctx, dec);
 if(sf && !S && ptype==1 && !rmode && opcode==4) return FCVTAS_float(ctx, dec);
 if(sf && !S && ptype==1 && !rmode && opcode==5) return FCVTAU_float(ctx, dec);
 if(sf && !S && ptype==1 && !rmode && opcode==6) return FMOV_float_gen(ctx, dec);
 if(sf && !S && ptype==1 && !rmode && opcode==7) return FMOV_float_gen(ctx, dec);
 if(sf && !S && ptype==1 && rmode==1 && !opcode) return FCVTPS_float(ctx, dec);
 if(sf && !S && ptype==1 && rmode==1 && opcode==1) return FCVTPU_float(ctx, dec);
 if(sf && !S && ptype==1 && rmode==2 && !opcode) return FCVTMS_float(ctx, dec);
 if(sf && !S && ptype==1 && rmode==2 && opcode==1) return FCVTMU_float(ctx, dec);
 if(sf && !S && ptype==1 && rmode==3 && !opcode) return FCVTZS_float_int(ctx, dec);
 if(sf && !S && ptype==1 && rmode==3 && opcode==1) return FCVTZU_float_int(ctx, dec);
 if(sf && !S && ptype==2 && rmode==1 && opcode==6) return FMOV_float_gen(ctx, dec);
 if(sf && !S && ptype==2 && rmode==1 && opcode==7) return FMOV_float_gen(ctx, dec);
 if(sf && !S && ptype==3 && !rmode && !opcode && HasFP16()) return FCVTNS_float(ctx, dec);
 if(sf && !S && ptype==3 && !rmode && opcode==1 && HasFP16()) return FCVTNU_float(ctx, dec);
 if(sf && !S && ptype==3 && !rmode && opcode==2 && HasFP16()) return SCVTF_float_int(ctx, dec);
 if(sf && !S && ptype==3 && !rmode && opcode==3 && HasFP16()) return UCVTF_float_int(ctx, dec);
 if(sf && !S && ptype==3 && !rmode && opcode==4 && HasFP16()) return FCVTAS_float(ctx, dec);
 if(sf && !S && ptype==3 && !rmode && opcode==5 && HasFP16()) return FCVTAU_float(ctx, dec);
 if(sf && !S && ptype==3 && !rmode && opcode==6 && HasFP16()) return FMOV_float_gen(ctx, dec);
 if(sf && !S && ptype==3 && !rmode && opcode==7 && HasFP16()) return FMOV_float_gen(ctx, dec);
 if(sf && !S && ptype==3 && rmode==1 && !opcode && HasFP16()) return FCVTPS_float(ctx, dec);
 if(sf && !S && ptype==3 && rmode==1 && opcode==1 && HasFP16()) return FCVTPU_float(ctx, dec);
 if(sf && !S && ptype==3 && rmode==2 && !opcode && HasFP16()) return FCVTMS_float(ctx, dec);
 if(sf && !S && ptype==3 && rmode==2 && opcode==1 && HasFP16()) return FCVTMU_float(ctx, dec);
 if(sf && !S && ptype==3 && rmode==3 && !opcode && HasFP16()) return FCVTZS_float_int(ctx, dec);
 if(sf && !S && ptype==3 && rmode==3 && opcode==1 && HasFP16()) return FCVTZU_float_int(ctx, dec);
 if(!sf && !S && ptype==1 && rmode==2 && (opcode&6)==6) UNALLOCATED(ENC_UNALLOCATED_69_FLOAT2INT);
 if(!sf && !S && !ptype && rmode&1 && (opcode&6)==6) UNALLOCATED(ENC_UNALLOCATED_40_FLOAT2INT);
 if(!sf && !S && !ptype && (rmode&2)==2 && (opcode&6)==6) UNALLOCATED(ENC_UNALLOCATED_41_FLOAT2INT);
 if(!sf && !S && ptype==1 && !(rmode&2) && (opcode&6)==6) UNALLOCATED(ENC_UNALLOCATED_68_FLOAT2INT);
 if(sf && !S && ptype==1 && rmode&1 && (opcode&6)==6) UNALLOCATED(ENC_UNALLOCATED_72_FLOAT2INT);
 if(sf && !S && ptype==1 && (rmode&2)==2 && (opcode&6)==6) UNALLOCATED(ENC_UNALLOCATED_73_FLOAT2INT);
 if(sf && !S && ptype==2 && !(rmode&1) && (opcode&6)==6) UNALLOCATED(ENC_UNALLOCATED_79_FLOAT2INT);
 if(sf && !S && ptype==2 && (rmode&2)==2 && (opcode&6)==6) UNALLOCATED(ENC_UNALLOCATED_80_FLOAT2INT);
 if(!sf && !S && ptype==2 && (opcode&6)==6) UNALLOCATED(ENC_UNALLOCATED_78_FLOAT2INT);
 if(sf && !S && !ptype && (opcode&6)==6) UNALLOCATED(ENC_UNALLOCATED_39_FLOAT2INT);
 if(!S && ptype==2 && (opcode&6)==4) UNALLOCATED(ENC_UNALLOCATED_77_FLOAT2INT);
 if(!S && ptype==2 && !(opcode&4)) UNALLOCATED(ENC_UNALLOCATED_76_FLOAT2INT);
 if(rmode&1 && (opcode&6)==2) UNALLOCATED(ENC_UNALLOCATED_11_FLOAT2INT);
 if(rmode&1 && (opcode&6)==4) UNALLOCATED(ENC_UNALLOCATED_13_FLOAT2INT);
 if((rmode&2)==2 && (opcode&6)==2) UNALLOCATED(ENC_UNALLOCATED_12_FLOAT2INT);
 if((rmode&2)==2 && (opcode&6)==4) UNALLOCATED(ENC_UNALLOCATED_14_FLOAT2INT);
 if(S) UNALLOCATED(ENC_UNALLOCATED_10_FLOAT2INT);
 UNMATCHED;
}

int decode_iclass_cryptoaes(context *ctx, Instruction *dec)
{
 uint32_t size=(INSWORD>>22)&3, opcode=(INSWORD>>12)&0x1f;
 if(!size && opcode==4) return AESE_advsimd(ctx, dec);
 if(!size && opcode==5) return AESD_advsimd(ctx, dec);
 if(!size && opcode==6) return AESMC_advsimd(ctx, dec);
 if(!size && opcode==7) return AESIMC_advsimd(ctx, dec);
 if(!(opcode&0x1c)) UNALLOCATED(ENC_UNALLOCATED_13_CRYPTOAES);
 if((opcode&8)==8) UNALLOCATED(ENC_UNALLOCATED_18_CRYPTOAES);
 if((opcode&0x10)==0x10) UNALLOCATED(ENC_UNALLOCATED_19_CRYPTOAES);
 if(size&1) UNALLOCATED(ENC_UNALLOCATED_12_CRYPTOAES);
 if((size&2)==2) UNALLOCATED(ENC_UNALLOCATED_11_CRYPTOAES);
 UNMATCHED;
}

int decode_iclass_crypto4(context *ctx, Instruction *dec)
{
 uint32_t Op0=(INSWORD>>21)&3;
 if(!Op0 && HasSHA3()) return EOR3_advsimd(ctx, dec);
 if(Op0==1 && HasSHA3()) return BCAX_advsimd(ctx, dec);
 if(Op0==2 && HasSM3()) return SM3SS1_advsimd(ctx, dec);
 if(Op0==3) UNALLOCATED(ENC_UNALLOCATED_14_CRYPTO4);
 UNMATCHED;
}

int decode_iclass_cryptosha3(context *ctx, Instruction *dec)
{
 uint32_t size=(INSWORD>>22)&3, opcode=(INSWORD>>12)&7;
 if(!size && !opcode) return SHA1C_advsimd(ctx, dec);
 if(!size && opcode==1) return SHA1P_advsimd(ctx, dec);
 if(!size && opcode==2) return SHA1M_advsimd(ctx, dec);
 if(!size && opcode==3) return SHA1SU0_advsimd(ctx, dec);
 if(!size && opcode==4) return SHA256H_advsimd(ctx, dec);
 if(!size && opcode==5) return SHA256H2_advsimd(ctx, dec);
 if(!size && opcode==6) return SHA256SU1_advsimd(ctx, dec);
 if(opcode==7) UNALLOCATED(ENC_UNALLOCATED_20_CRYPTOSHA3);
 if(size&1) UNALLOCATED(ENC_UNALLOCATED_11_CRYPTOSHA3);
 if((size&2)==2) UNALLOCATED(ENC_UNALLOCATED_12_CRYPTOSHA3);
 UNMATCHED;
}

int decode_iclass_cryptosha512_3(context *ctx, Instruction *dec)
{
 uint32_t O=(INSWORD>>14)&1, opcode=(INSWORD>>10)&3;
 if(!O && !opcode && HasSHA512()) return SHA512H_advsimd(ctx, dec);
 if(!O && opcode==1 && HasSHA512()) return SHA512H2_advsimd(ctx, dec);
 if(!O && opcode==2 && HasSHA512()) return SHA512SU1_advsimd(ctx, dec);
 if(!O && opcode==3 && HasSHA3()) return RAX1_advsimd(ctx, dec);
 if(O && !opcode && HasSM3()) return SM3PARTW1_advsimd(ctx, dec);
 if(O && opcode==1 && HasSM3()) return SM3PARTW2_advsimd(ctx, dec);
 if(O && opcode==2 && HasSM4()) return SM4EKEY_advsimd(ctx, dec);
 if(O && opcode==3) UNALLOCATED(ENC_UNALLOCATED_18_CRYPTOSHA512_3);
 UNMATCHED;
}

int decode_iclass_crypto3_imm2(context *ctx, Instruction *dec)
{
 uint32_t opcode=(INSWORD>>10)&3;
 if(!opcode && HasSM3()) return SM3TT1A_advsimd(ctx, dec);
 if(opcode==1 && HasSM3()) return SM3TT1B_advsimd(ctx, dec);
 if(opcode==2 && HasSM3()) return SM3TT2A_advsimd(ctx, dec);
 if(opcode==3 && HasSM3()) return SM3TT2B_advsimd(ctx, dec);
 UNMATCHED;
}

int decode_iclass_crypto3_imm6(context *ctx, Instruction *dec)
{
 return XAR_advsimd(ctx, dec);
}

int decode_iclass_cryptosha2(context *ctx, Instruction *dec)
{
 uint32_t size=(INSWORD>>22)&3, opcode=(INSWORD>>12)&0x1f;
 if(!size && !opcode) return SHA1H_advsimd(ctx, dec);
 if(!size && opcode==1) return SHA1SU1_advsimd(ctx, dec);
 if(!size && opcode==2) return SHA256SU0_advsimd(ctx, dec);
 if(!size && opcode==3) UNALLOCATED(ENC_UNALLOCATED_16_CRYPTOSHA2);
 if((opcode&4)==4) UNALLOCATED(ENC_UNALLOCATED_17_CRYPTOSHA2);
 if((opcode&8)==8) UNALLOCATED(ENC_UNALLOCATED_18_CRYPTOSHA2);
 if((opcode&0x10)==0x10) UNALLOCATED(ENC_UNALLOCATED_19_CRYPTOSHA2);
 if(size&1) UNALLOCATED(ENC_UNALLOCATED_11_CRYPTOSHA2);
 if((size&2)==2) UNALLOCATED(ENC_UNALLOCATED_12_CRYPTOSHA2);
 UNMATCHED;
}

int decode_iclass_cryptosha512_2(context *ctx, Instruction *dec)
{
 uint32_t opcode=(INSWORD>>10)&3;
 if(!opcode && HasSHA512()) return SHA512SU0_advsimd(ctx, dec);
 if(opcode==1 && HasSM4()) return SM4E_advsimd(ctx, dec);
 if((opcode&2)==2) UNALLOCATED(ENC_UNALLOCATED_11_CRYPTOSHA512_2);
 UNMATCHED;
}

int decode_iclass_floatcmp(context *ctx, Instruction *dec)
{
 uint32_t M=INSWORD>>31, S=(INSWORD>>29)&1, ptype=(INSWORD>>22)&3, op=(INSWORD>>14)&3, opcode2=INSWORD&0x1f;
 if(!M && !S && !ptype && !op && !opcode2) return FCMP_float(ctx, dec);
 if(!M && !S && !ptype && !op && opcode2==8) return FCMP_float(ctx, dec);
 if(!M && !S && !ptype && !op && opcode2==0x10) return FCMPE_float(ctx, dec);
 if(!M && !S && !ptype && !op && opcode2==0x18) return FCMPE_float(ctx, dec);
 if(!M && !S && ptype==1 && !op && !opcode2) return FCMP_float(ctx, dec);
 if(!M && !S && ptype==1 && !op && opcode2==8) return FCMP_float(ctx, dec);
 if(!M && !S && ptype==1 && !op && opcode2==0x10) return FCMPE_float(ctx, dec);
 if(!M && !S && ptype==1 && !op && opcode2==0x18) return FCMPE_float(ctx, dec);
 if(!M && !S && ptype==3 && !op && !opcode2 && HasFP16()) return FCMP_float(ctx, dec);
 if(!M && !S && ptype==3 && !op && opcode2==8 && HasFP16()) return FCMP_float(ctx, dec);
 if(!M && !S && ptype==3 && !op && opcode2==0x10 && HasFP16()) return FCMPE_float(ctx, dec);
 if(!M && !S && ptype==3 && !op && opcode2==0x18 && HasFP16()) return FCMPE_float(ctx, dec);
 if(ptype==2) UNALLOCATED(ENC_UNALLOCATED_17_FLOATCMP);
 if(opcode2&1) UNALLOCATED(ENC_UNALLOCATED_12_FLOATCMP);
 if((opcode2&2)==2) UNALLOCATED(ENC_UNALLOCATED_13_FLOATCMP);
 if((opcode2&4)==4) UNALLOCATED(ENC_UNALLOCATED_14_FLOATCMP);
 if(op&1) UNALLOCATED(ENC_UNALLOCATED_15_FLOATCMP);
 if((op&2)==2) UNALLOCATED(ENC_UNALLOCATED_16_FLOATCMP);
 if(S) UNALLOCATED(ENC_UNALLOCATED_10_FLOATCMP);
 if(M) UNALLOCATED(ENC_UNALLOCATED_11_FLOATCMP);
 UNMATCHED;
}

int decode_iclass_floatccmp(context *ctx, Instruction *dec)
{
 uint32_t M=INSWORD>>31, S=(INSWORD>>29)&1, ptype=(INSWORD>>22)&3, op=(INSWORD>>4)&1;
 if(!M && !S && !ptype && !op) return FCCMP_float(ctx, dec);
 if(!M && !S && !ptype && op) return FCCMPE_float(ctx, dec);
 if(!M && !S && ptype==1 && !op) return FCCMP_float(ctx, dec);
 if(!M && !S && ptype==1 && op) return FCCMPE_float(ctx, dec);
 if(!M && !S && ptype==3 && !op && HasFP16()) return FCCMP_float(ctx, dec);
 if(!M && !S && ptype==3 && op && HasFP16()) return FCCMPE_float(ctx, dec);
 if(ptype==2) UNALLOCATED(ENC_UNALLOCATED_12_FLOATCCMP);
 if(S) UNALLOCATED(ENC_UNALLOCATED_10_FLOATCCMP);
 if(M) UNALLOCATED(ENC_UNALLOCATED_11_FLOATCCMP);
 UNMATCHED;
}

int decode_iclass_floatsel(context *ctx, Instruction *dec)
{
 uint32_t M=INSWORD>>31, S=(INSWORD>>29)&1, ptype=(INSWORD>>22)&3;
 if(!M && !S && !ptype) return FCSEL_float(ctx, dec);
 if(!M && !S && ptype==1) return FCSEL_float(ctx, dec);
 if(!M && !S && ptype==3 && HasFP16()) return FCSEL_float(ctx, dec);
 if(ptype==2) UNALLOCATED(ENC_UNALLOCATED_12_FLOATSEL);
 if(S) UNALLOCATED(ENC_UNALLOCATED_10_FLOATSEL);
 if(M) UNALLOCATED(ENC_UNALLOCATED_11_FLOATSEL);
 UNMATCHED;
}

int decode_iclass_floatdp1(context *ctx, Instruction *dec)
{
 uint32_t M=INSWORD>>31, S=(INSWORD>>29)&1, ptype=(INSWORD>>22)&3, opcode=(INSWORD>>15)&0x3f;
 if(!M && !S && !ptype && !opcode) return FMOV_float(ctx, dec);
 if(!M && !S && !ptype && opcode==1) return FABS_float(ctx, dec);
 if(!M && !S && !ptype && opcode==2) return FNEG_float(ctx, dec);
 if(!M && !S && !ptype && opcode==3) return FSQRT_float(ctx, dec);
 if(!M && !S && !ptype && opcode==4) UNALLOCATED(ENC_UNALLOCATED_17_FLOATDP1);
 if(!M && !S && !ptype && opcode==5) return FCVT_float(ctx, dec);
 if(!M && !S && !ptype && opcode==6) UNALLOCATED(ENC_UNALLOCATED_19_FLOATDP1);
 if(!M && !S && !ptype && opcode==7) return FCVT_float(ctx, dec);
 if(!M && !S && !ptype && opcode==8) return FRINTN_float(ctx, dec);
 if(!M && !S && !ptype && opcode==9) return FRINTP_float(ctx, dec);
 if(!M && !S && !ptype && opcode==10) return FRINTM_float(ctx, dec);
 if(!M && !S && !ptype && opcode==11) return FRINTZ_float(ctx, dec);
 if(!M && !S && !ptype && opcode==12) return FRINTA_float(ctx, dec);
 if(!M && !S && !ptype && opcode==13) UNALLOCATED(ENC_UNALLOCATED_26_FLOATDP1);
 if(!M && !S && !ptype && opcode==14) return FRINTX_float(ctx, dec);
 if(!M && !S && !ptype && opcode==15) return FRINTI_float(ctx, dec);
 if(!M && !S && !ptype && opcode==0x10 && HasFRINTTS()) return FRINT32Z_float(ctx, dec);
 if(!M && !S && !ptype && opcode==0x11 && HasFRINTTS()) return FRINT32X_float(ctx, dec);
 if(!M && !S && !ptype && opcode==0x12 && HasFRINTTS()) return FRINT64Z_float(ctx, dec);
 if(!M && !S && !ptype && opcode==0x13 && HasFRINTTS()) return FRINT64X_float(ctx, dec);
 if(!M && !S && ptype==1 && !opcode) return FMOV_float(ctx, dec);
 if(!M && !S && ptype==1 && opcode==1) return FABS_float(ctx, dec);
 if(!M && !S && ptype==1 && opcode==2) return FNEG_float(ctx, dec);
 if(!M && !S && ptype==1 && opcode==3) return FSQRT_float(ctx, dec);
 if(!M && !S && ptype==1 && opcode==4) return FCVT_float(ctx, dec);
 if(!M && !S && ptype==1 && opcode==5) UNALLOCATED(ENC_UNALLOCATED_40_FLOATDP1);
 if(!M && !S && ptype==1 && opcode==6 && HasBF16()) return BFCVT_float(ctx, dec);
 if(!M && !S && ptype==1 && opcode==7) return FCVT_float(ctx, dec);
 if(!M && !S && ptype==1 && opcode==8) return FRINTN_float(ctx, dec);
 if(!M && !S && ptype==1 && opcode==9) return FRINTP_float(ctx, dec);
 if(!M && !S && ptype==1 && opcode==10) return FRINTM_float(ctx, dec);
 if(!M && !S && ptype==1 && opcode==11) return FRINTZ_float(ctx, dec);
 if(!M && !S && ptype==1 && opcode==12) return FRINTA_float(ctx, dec);
 if(!M && !S && ptype==1 && opcode==13) UNALLOCATED(ENC_UNALLOCATED_48_FLOATDP1);
 if(!M && !S && ptype==1 && opcode==14) return FRINTX_float(ctx, dec);
 if(!M && !S && ptype==1 && opcode==15) return FRINTI_float(ctx, dec);
 if(!M && !S && ptype==1 && opcode==0x10 && HasFRINTTS()) return FRINT32Z_float(ctx, dec);
 if(!M && !S && ptype==1 && opcode==0x11 && HasFRINTTS()) return FRINT32X_float(ctx, dec);
 if(!M && !S && ptype==1 && opcode==0x12 && HasFRINTTS()) return FRINT64Z_float(ctx, dec);
 if(!M && !S && ptype==1 && opcode==0x13 && HasFRINTTS()) return FRINT64X_float(ctx, dec);
 if(!M && !S && ptype==3 && !opcode && HasFP16()) return FMOV_float(ctx, dec);
 if(!M && !S && ptype==3 && opcode==1 && HasFP16()) return FABS_float(ctx, dec);
 if(!M && !S && ptype==3 && opcode==2 && HasFP16()) return FNEG_float(ctx, dec);
 if(!M && !S && ptype==3 && opcode==3 && HasFP16()) return FSQRT_float(ctx, dec);
 if(!M && !S && ptype==3 && opcode==4) return FCVT_float(ctx, dec);
 if(!M && !S && ptype==3 && opcode==5) return FCVT_float(ctx, dec);
 if(!M && !S && ptype==3 && opcode==8 && HasFP16()) return FRINTN_float(ctx, dec);
 if(!M && !S && ptype==3 && opcode==9 && HasFP16()) return FRINTP_float(ctx, dec);
 if(!M && !S && ptype==3 && opcode==10 && HasFP16()) return FRINTM_float(ctx, dec);
 if(!M && !S && ptype==3 && opcode==11 && HasFP16()) return FRINTZ_float(ctx, dec);
 if(!M && !S && ptype==3 && opcode==12 && HasFP16()) return FRINTA_float(ctx, dec);
 if(!M && !S && ptype==3 && opcode==13) UNALLOCATED(ENC_UNALLOCATED_70_FLOATDP1);
 if(!M && !S && ptype==3 && opcode==14 && HasFP16()) return FRINTX_float(ctx, dec);
 if(!M && !S && ptype==3 && opcode==15 && HasFP16()) return FRINTI_float(ctx, dec);
 if(!M && !S && ptype==3 && (opcode&0x3e)==6) UNALLOCATED(ENC_UNALLOCATED_64_FLOATDP1);
 if(!M && !S && !ptype && (opcode&0x3c)==0x14) UNALLOCATED(ENC_UNALLOCATED_33_FLOATDP1);
 if(!M && !S && ptype==1 && (opcode&0x3c)==0x14) UNALLOCATED(ENC_UNALLOCATED_55_FLOATDP1);
 if(!M && !S && !ptype && (opcode&0x38)==0x18) UNALLOCATED(ENC_UNALLOCATED_34_FLOATDP1);
 if(!M && !S && ptype==1 && (opcode&0x38)==0x18) UNALLOCATED(ENC_UNALLOCATED_56_FLOATDP1);
 if(!M && !S && ptype==3 && (opcode&0x30)==0x10) UNALLOCATED(ENC_UNALLOCATED_73_FLOATDP1);
 if(!M && !S && ptype==2 && !(opcode&0x20)) UNALLOCATED(ENC_UNALLOCATED_57_FLOATDP1);
 if((opcode&0x20)==0x20) UNALLOCATED(ENC_UNALLOCATED_12_FLOATDP1);
 if(S) UNALLOCATED(ENC_UNALLOCATED_10_FLOATDP1);
 if(M) UNALLOCATED(ENC_UNALLOCATED_11_FLOATDP1);
 UNMATCHED;
}

int decode_iclass_floatdp2(context *ctx, Instruction *dec)
{
 uint32_t M=INSWORD>>31, S=(INSWORD>>29)&1, ptype=(INSWORD>>22)&3, opcode=(INSWORD>>12)&15;
 if(!M && !S && !ptype && !opcode) return FMUL_float(ctx, dec);
 if(!M && !S && !ptype && opcode==1) return FDIV_float(ctx, dec);
 if(!M && !S && !ptype && opcode==2) return FADD_float(ctx, dec);
 if(!M && !S && !ptype && opcode==3) return FSUB_float(ctx, dec);
 if(!M && !S && !ptype && opcode==4) return FMAX_float(ctx, dec);
 if(!M && !S && !ptype && opcode==5) return FMIN_float(ctx, dec);
 if(!M && !S && !ptype && opcode==6) return FMAXNM_float(ctx, dec);
 if(!M && !S && !ptype && opcode==7) return FMINNM_float(ctx, dec);
 if(!M && !S && !ptype && opcode==8) return FNMUL_float(ctx, dec);
 if(!M && !S && ptype==1 && !opcode) return FMUL_float(ctx, dec);
 if(!M && !S && ptype==1 && opcode==1) return FDIV_float(ctx, dec);
 if(!M && !S && ptype==1 && opcode==2) return FADD_float(ctx, dec);
 if(!M && !S && ptype==1 && opcode==3) return FSUB_float(ctx, dec);
 if(!M && !S && ptype==1 && opcode==4) return FMAX_float(ctx, dec);
 if(!M && !S && ptype==1 && opcode==5) return FMIN_float(ctx, dec);
 if(!M && !S && ptype==1 && opcode==6) return FMAXNM_float(ctx, dec);
 if(!M && !S && ptype==1 && opcode==7) return FMINNM_float(ctx, dec);
 if(!M && !S && ptype==1 && opcode==8) return FNMUL_float(ctx, dec);
 if(!M && !S && ptype==3 && !opcode && HasFP16()) return FMUL_float(ctx, dec);
 if(!M && !S && ptype==3 && opcode==1 && HasFP16()) return FDIV_float(ctx, dec);
 if(!M && !S && ptype==3 && opcode==2 && HasFP16()) return FADD_float(ctx, dec);
 if(!M && !S && ptype==3 && opcode==3 && HasFP16()) return FSUB_float(ctx, dec);
 if(!M && !S && ptype==3 && opcode==4 && HasFP16()) return FMAX_float(ctx, dec);
 if(!M && !S && ptype==3 && opcode==5 && HasFP16()) return FMIN_float(ctx, dec);
 if(!M && !S && ptype==3 && opcode==6 && HasFP16()) return FMAXNM_float(ctx, dec);
 if(!M && !S && ptype==3 && opcode==7 && HasFP16()) return FMINNM_float(ctx, dec);
 if(!M && !S && ptype==3 && opcode==8 && HasFP16()) return FNMUL_float(ctx, dec);
 if((opcode&9)==9) UNALLOCATED(ENC_UNALLOCATED_13_FLOATDP2);
 if((opcode&10)==10) UNALLOCATED(ENC_UNALLOCATED_14_FLOATDP2);
 if((opcode&12)==12) UNALLOCATED(ENC_UNALLOCATED_15_FLOATDP2);
 if(ptype==2) UNALLOCATED(ENC_UNALLOCATED_10_FLOATDP2);
 if(S) UNALLOCATED(ENC_UNALLOCATED_11_FLOATDP2);
 if(M) UNALLOCATED(ENC_UNALLOCATED_12_FLOATDP2);
 UNMATCHED;
}

int decode_iclass_floatdp3(context *ctx, Instruction *dec)
{
 uint32_t M=INSWORD>>31, S=(INSWORD>>29)&1, ptype=(INSWORD>>22)&3, o1=(INSWORD>>21)&1, o0=(INSWORD>>15)&1;
 if(!M && !S && !ptype && !o1 && !o0) return FMADD_float(ctx, dec);
 if(!M && !S && !ptype && !o1 && o0) return FMSUB_float(ctx, dec);
 if(!M && !S && !ptype && o1 && !o0) return FNMADD_float(ctx, dec);
 if(!M && !S && !ptype && o1 && o0) return FNMSUB_float(ctx, dec);
 if(!M && !S && ptype==1 && !o1 && !o0) return FMADD_float(ctx, dec);
 if(!M && !S && ptype==1 && !o1 && o0) return FMSUB_float(ctx, dec);
 if(!M && !S && ptype==1 && o1 && !o0) return FNMADD_float(ctx, dec);
 if(!M && !S && ptype==1 && o1 && o0) return FNMSUB_float(ctx, dec);
 if(!M && !S && ptype==3 && !o1 && !o0 && HasFP16()) return FMADD_float(ctx, dec);
 if(!M && !S && ptype==3 && !o1 && o0 && HasFP16()) return FMSUB_float(ctx, dec);
 if(!M && !S && ptype==3 && o1 && !o0 && HasFP16()) return FNMADD_float(ctx, dec);
 if(!M && !S && ptype==3 && o1 && o0 && HasFP16()) return FNMSUB_float(ctx, dec);
 if(ptype==2) UNALLOCATED(ENC_UNALLOCATED_10_FLOATDP3);
 if(S) UNALLOCATED(ENC_UNALLOCATED_12_FLOATDP3);
 if(M) UNALLOCATED(ENC_UNALLOCATED_11_FLOATDP3);
 UNMATCHED;
}

int decode_iclass_floatimm(context *ctx, Instruction *dec)
{
 uint32_t M=INSWORD>>31, S=(INSWORD>>29)&1, ptype=(INSWORD>>22)&3, imm5=(INSWORD>>5)&0x1f;
 if(!M && !S && !ptype && !imm5) return FMOV_float_imm(ctx, dec);
 if(!M && !S && ptype==1 && !imm5) return FMOV_float_imm(ctx, dec);
 if(!M && !S && ptype==3 && !imm5 && HasFP16()) return FMOV_float_imm(ctx, dec);
 if(ptype==2) UNALLOCATED(ENC_UNALLOCATED_17_FLOATIMM);
 if(imm5&1) UNALLOCATED(ENC_UNALLOCATED_10_FLOATIMM);
 if((imm5&2)==2) UNALLOCATED(ENC_UNALLOCATED_11_FLOATIMM);
 if((imm5&4)==4) UNALLOCATED(ENC_UNALLOCATED_12_FLOATIMM);
 if((imm5&8)==8) UNALLOCATED(ENC_UNALLOCATED_13_FLOATIMM);
 if((imm5&0x10)==0x10) UNALLOCATED(ENC_UNALLOCATED_14_FLOATIMM);
 if(S) UNALLOCATED(ENC_UNALLOCATED_15_FLOATIMM);
 if(M) UNALLOCATED(ENC_UNALLOCATED_16_FLOATIMM);
 UNMATCHED;
}

int decode_iclass_sve_int_bin_cons_misc_0_a(context *ctx, Instruction *dec)
{
 uint32_t opc=(INSWORD>>22)&3;
 if(!opc) return adr_z_az(ctx, dec);
 if(opc==1) return adr_z_az(ctx, dec);
 if((opc&2)==2) return adr_z_az(ctx, dec);
 UNMATCHED;
}

int decode_iclass_perm_undef(context *ctx, Instruction *dec)
{
 return UDF_perm_undef(ctx, dec);
}

int decode_iclass_sve_int_bin_cons_misc_0_d(context *ctx, Instruction *dec)
{
 uint32_t opc=(INSWORD>>22)&3, opc2=(INSWORD>>16)&0x1f;
 if(!opc && !opc2) return movprfx_z_z(ctx, dec);
 if(!opc && opc2==1) UNALLOCATED(ENC_UNALLOCATED_144);
 if(!opc && (opc2&0x1e)==2) UNALLOCATED(ENC_UNALLOCATED_146);
 if(!opc && (opc2&0x1c)==4) UNALLOCATED(ENC_UNALLOCATED_148);
 if(!opc && (opc2&0x18)==8) UNALLOCATED(ENC_UNALLOCATED_150);
 if(!opc && (opc2&0x10)==0x10) UNALLOCATED(ENC_UNALLOCATED_152);
 if(opc==1) UNALLOCATED(ENC_UNALLOCATED_155);
 if((opc&2)==2) UNALLOCATED(ENC_UNALLOCATED_159);
 UNMATCHED;
}

int decode_iclass_sve_int_bin_cons_misc_0_c(context *ctx, Instruction *dec)
{
 uint32_t opc=(INSWORD>>16)&0x1f;
 if(!opc) return fexpa_z_z(ctx, dec);
 if(opc==1) UNALLOCATED(ENC_UNALLOCATED_143);
 if((opc&0x1e)==2) UNALLOCATED(ENC_UNALLOCATED_145);
 if((opc&0x1c)==4) UNALLOCATED(ENC_UNALLOCATED_147);
 if((opc&0x18)==8) UNALLOCATED(ENC_UNALLOCATED_149);
 if((opc&0x10)==0x10) UNALLOCATED(ENC_UNALLOCATED_151);
 UNMATCHED;
}

int decode_iclass_sve_int_bin_cons_misc_0_b(context *ctx, Instruction *dec)
{
 uint32_t op=(INSWORD>>10)&1;
 if(!op) return ftssel_z_zz(ctx, dec);
 if(op) UNALLOCATED(ENC_UNALLOCATED_140);
 UNMATCHED;
}

int decode_iclass_sve_int_count(context *ctx, Instruction *dec)
{
 uint32_t size=(INSWORD>>22)&3, op=(INSWORD>>10)&1;
 if(!size && !op) return cntb_r_s(ctx, dec);
 if(size==1 && !op) return cntb_r_s(ctx, dec);
 if(size==2 && !op) return cntb_r_s(ctx, dec);
 if(size==3 && !op) return cntb_r_s(ctx, dec);
 if(op) UNALLOCATED(ENC_UNALLOCATED_142);
 UNMATCHED;
}

int decode_iclass_sve_int_pred_pattern_a(context *ctx, Instruction *dec)
{
 uint32_t size=(INSWORD>>22)&3, D=(INSWORD>>10)&1;
 if(!size && !D) return incb_r_rs(ctx, dec);
 if(!size && D) return decb_r_rs(ctx, dec);
 if(size==1 && !D) return incb_r_rs(ctx, dec);
 if(size==1 && D) return decb_r_rs(ctx, dec);
 if(size==2 && !D) return incb_r_rs(ctx, dec);
 if(size==2 && D) return decb_r_rs(ctx, dec);
 if(size==3 && !D) return incb_r_rs(ctx, dec);
 if(size==3 && D) return decb_r_rs(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_int_countvlv1(context *ctx, Instruction *dec)
{
 uint32_t size=(INSWORD>>22)&3, D=(INSWORD>>10)&1;
 if(size==1 && !D) return incd_z_zs(ctx, dec);
 if(size==1 && D) return decd_z_zs(ctx, dec);
 if(size==2 && !D) return incd_z_zs(ctx, dec);
 if(size==2 && D) return decd_z_zs(ctx, dec);
 if(size==3 && !D) return incd_z_zs(ctx, dec);
 if(size==3 && D) return decd_z_zs(ctx, dec);
 if(!size) UNALLOCATED(ENC_UNALLOCATED_153);
 UNMATCHED;
}

int decode_iclass_sve_int_pred_pattern_b(context *ctx, Instruction *dec)
{
 uint32_t size=(INSWORD>>22)&3, sf=(INSWORD>>20)&1, D=(INSWORD>>11)&1, U=(INSWORD>>10)&1;
 if(!size && !sf && !D && !U) return sqincb_r_rs(ctx, dec);
 if(!size && !sf && !D && U) return uqincb_r_rs(ctx, dec);
 if(!size && !sf && D && !U) return sqdecb_r_rs(ctx, dec);
 if(!size && !sf && D && U) return uqdecb_r_rs(ctx, dec);
 if(!size && sf && !D && !U) return sqincb_r_rs(ctx, dec);
 if(!size && sf && !D && U) return uqincb_r_rs(ctx, dec);
 if(!size && sf && D && !U) return sqdecb_r_rs(ctx, dec);
 if(!size && sf && D && U) return uqdecb_r_rs(ctx, dec);
 if(size==1 && !sf && !D && !U) return sqinch_r_rs(ctx, dec);
 if(size==1 && !sf && !D && U) return uqinch_r_rs(ctx, dec);
 if(size==1 && !sf && D && !U) return sqdech_r_rs(ctx, dec);
 if(size==1 && !sf && D && U) return uqdech_r_rs(ctx, dec);
 if(size==1 && sf && !D && !U) return sqinch_r_rs(ctx, dec);
 if(size==1 && sf && !D && U) return uqinch_r_rs(ctx, dec);
 if(size==1 && sf && D && !U) return sqdech_r_rs(ctx, dec);
 if(size==1 && sf && D && U) return uqdech_r_rs(ctx, dec);
 if(size==2 && !sf && !D && !U) return sqincw_r_rs(ctx, dec);
 if(size==2 && !sf && !D && U) return uqincw_r_rs(ctx, dec);
 if(size==2 && !sf && D && !U) return sqdecw_r_rs(ctx, dec);
 if(size==2 && !sf && D && U) return uqdecw_r_rs(ctx, dec);
 if(size==2 && sf && !D && !U) return sqincw_r_rs(ctx, dec);
 if(size==2 && sf && !D && U) return uqincw_r_rs(ctx, dec);
 if(size==2 && sf && D && !U) return sqdecw_r_rs(ctx, dec);
 if(size==2 && sf && D && U) return uqdecw_r_rs(ctx, dec);
 if(size==3 && !sf && !D && !U) return sqincd_r_rs(ctx, dec);
 if(size==3 && !sf && !D && U) return uqincd_r_rs(ctx, dec);
 if(size==3 && !sf && D && !U) return sqdecd_r_rs(ctx, dec);
 if(size==3 && !sf && D && U) return uqdecd_r_rs(ctx, dec);
 if(size==3 && sf && !D && !U) return sqincd_r_rs(ctx, dec);
 if(size==3 && sf && !D && U) return uqincd_r_rs(ctx, dec);
 if(size==3 && sf && D && !U) return sqdecd_r_rs(ctx, dec);
 if(size==3 && sf && D && U) return uqdecd_r_rs(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_int_countvlv0(context *ctx, Instruction *dec)
{
 uint32_t size=(INSWORD>>22)&3, D=(INSWORD>>11)&1, U=(INSWORD>>10)&1;
 if(size==1 && !D && !U) return sqinch_z_zs(ctx, dec);
 if(size==1 && !D && U) return uqinch_z_zs(ctx, dec);
 if(size==1 && D && !U) return sqdech_z_zs(ctx, dec);
 if(size==1 && D && U) return uqdech_z_zs(ctx, dec);
 if(size==2 && !D && !U) return sqincw_z_zs(ctx, dec);
 if(size==2 && !D && U) return uqincw_z_zs(ctx, dec);
 if(size==2 && D && !U) return sqdecw_z_zs(ctx, dec);
 if(size==2 && D && U) return uqdecw_z_zs(ctx, dec);
 if(size==3 && !D && !U) return sqincd_z_zs(ctx, dec);
 if(size==3 && !D && U) return uqincd_z_zs(ctx, dec);
 if(size==3 && D && !U) return sqdecd_z_zs(ctx, dec);
 if(size==3 && D && U) return uqdecd_z_zs(ctx, dec);
 if(!size) UNALLOCATED(ENC_UNALLOCATED_141);
 UNMATCHED;
}

int decode_iclass_sve_int_perm_extract_i(context *ctx, Instruction *dec)
{
 return ext_z_zi(ctx, dec);
}

int decode_iclass_sve_intx_perm_extract_i(context *ctx, Instruction *dec)
{
 return ext_z_zi(ctx, dec);
}

int decode_iclass_sve_int_perm_bin_long_perm_zz(context *ctx, Instruction *dec)
{
 uint32_t op=(INSWORD>>22)&1, opc2=(INSWORD>>10)&7;
 if(!op && !opc2) return zip1_z_zz(ctx, dec);
 if(!op && opc2==1) return zip1_z_zz(ctx, dec);
 if(!op && opc2==2) return uzp1_z_zz(ctx, dec);
 if(!op && opc2==3) return uzp1_z_zz(ctx, dec);
 if(!op && opc2==6) return trn1_z_zz(ctx, dec);
 if(!op && opc2==7) return trn1_z_zz(ctx, dec);
 if(!op && (opc2&6)==4) UNALLOCATED(ENC_UNALLOCATED_167);
 if(op) UNALLOCATED(ENC_UNALLOCATED_168);
 UNMATCHED;
}

int decode_iclass_sve_int_log_imm(context *ctx, Instruction *dec)
{
 uint32_t opc=(INSWORD>>22)&3;
 if(!opc) return orr_z_zi(ctx, dec);
 if(opc==1) return eor_z_zi(ctx, dec);
 if(opc==2) return and_z_zi(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_int_dup_mask_imm(context *ctx, Instruction *dec)
{
 return dupm_z_i(ctx, dec);
}

int decode_iclass_sve_int_dup_fpimm_pred(context *ctx, Instruction *dec)
{
 return fcpy_z_p_i(ctx, dec);
}

int decode_iclass_sve_int_dup_imm_pred(context *ctx, Instruction *dec)
{
 uint32_t M=(INSWORD>>14)&1;
 if(!M) return cpy_z_o_i(ctx, dec);
 if(M) return cpy_z_p_i(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_int_perm_dup_i(context *ctx, Instruction *dec)
{
 return dup_z_zi(ctx, dec);
}

int decode_iclass_sve_int_perm_tbl_3src(context *ctx, Instruction *dec)
{
 uint32_t op=(INSWORD>>10)&1;
 if(!op) return tbl_z_zz(ctx, dec);
 if(op) return tbx_z_zz(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_int_perm_tbl(context *ctx, Instruction *dec)
{
 return tbl_z_zz(ctx, dec);
}

int decode_iclass_sve_int_perm_dup_r(context *ctx, Instruction *dec)
{
 return dup_z_r(ctx, dec);
}

int decode_iclass_sve_int_perm_insrv(context *ctx, Instruction *dec)
{
 return insr_z_v(ctx, dec);
}

int decode_iclass_sve_int_perm_insrs(context *ctx, Instruction *dec)
{
 return insr_z_r(ctx, dec);
}

int decode_iclass_sve_int_perm_reverse_z(context *ctx, Instruction *dec)
{
 return rev_z_z(ctx, dec);
}

int decode_iclass_sve_int_perm_unpk(context *ctx, Instruction *dec)
{
 uint32_t U=(INSWORD>>17)&1, H=(INSWORD>>16)&1;
 if(!U && !H) return sunpkhi_z_z(ctx, dec);
 if(!U && H) return sunpkhi_z_z(ctx, dec);
 if(U && !H) return uunpkhi_z_z(ctx, dec);
 if(U && H) return uunpkhi_z_z(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_int_perm_bin_perm_pp(context *ctx, Instruction *dec)
{
 uint32_t opc=(INSWORD>>11)&3, H=(INSWORD>>10)&1;
 if(!opc && !H) return zip1_p_pp(ctx, dec);
 if(!opc && H) return zip1_p_pp(ctx, dec);
 if(opc==1 && !H) return uzp1_p_pp(ctx, dec);
 if(opc==1 && H) return uzp1_p_pp(ctx, dec);
 if(opc==2 && !H) return trn1_p_pp(ctx, dec);
 if(opc==2 && H) return trn1_p_pp(ctx, dec);
 if(opc==3) UNALLOCATED(ENC_UNALLOCATED_165);
 UNMATCHED;
}

int decode_iclass_sve_int_perm_reverse_p(context *ctx, Instruction *dec)
{
 return rev_p_p(ctx, dec);
}

int decode_iclass_sve_int_perm_punpk(context *ctx, Instruction *dec)
{
 uint32_t H=(INSWORD>>16)&1;
 if(!H) return punpkhi_p_p(ctx, dec);
 if(H) return punpkhi_p_p(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_int_perm_bin_perm_zz(context *ctx, Instruction *dec)
{
 uint32_t opc=(INSWORD>>10)&7;
 if(!opc) return zip1_z_zz(ctx, dec);
 if(opc==1) return zip1_z_zz(ctx, dec);
 if(opc==2) return uzp1_z_zz(ctx, dec);
 if(opc==3) return uzp1_z_zz(ctx, dec);
 if(opc==4) return trn1_z_zz(ctx, dec);
 if(opc==5) return trn1_z_zz(ctx, dec);
 if((opc&6)==6) UNALLOCATED(ENC_UNALLOCATED_166);
 UNMATCHED;
}

int decode_iclass_sve_int_perm_compact(context *ctx, Instruction *dec)
{
 return compact_z_p_z(ctx, dec);
}

int decode_iclass_sve_int_perm_clast_zz(context *ctx, Instruction *dec)
{
 uint32_t B=(INSWORD>>16)&1;
 if(!B) return clasta_z_p_zz(ctx, dec);
 if(B) return clastb_z_p_zz(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_int_perm_clast_vz(context *ctx, Instruction *dec)
{
 uint32_t B=(INSWORD>>16)&1;
 if(!B) return clasta_v_p_z(ctx, dec);
 if(B) return clastb_v_p_z(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_int_perm_clast_rz(context *ctx, Instruction *dec)
{
 uint32_t B=(INSWORD>>16)&1;
 if(!B) return clasta_r_p_z(ctx, dec);
 if(B) return clastb_r_p_z(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_int_perm_cpy_v(context *ctx, Instruction *dec)
{
 return cpy_z_p_v(ctx, dec);
}

int decode_iclass_sve_int_perm_cpy_r(context *ctx, Instruction *dec)
{
 return cpy_z_p_r(ctx, dec);
}

int decode_iclass_sve_int_perm_last_v(context *ctx, Instruction *dec)
{
 uint32_t B=(INSWORD>>16)&1;
 if(!B) return lasta_v_p_z(ctx, dec);
 if(B) return lastb_v_p_z(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_int_perm_last_r(context *ctx, Instruction *dec)
{
 uint32_t B=(INSWORD>>16)&1;
 if(!B) return lasta_r_p_z(ctx, dec);
 if(B) return lastb_r_p_z(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_int_perm_rev(context *ctx, Instruction *dec)
{
 uint32_t opc=(INSWORD>>16)&3;
 if(!opc) return revb_z_z(ctx, dec);
 if(opc==1) return revb_z_z(ctx, dec);
 if(opc==2) return revb_z_z(ctx, dec);
 if(opc==3) return rbit_z_p_z(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_int_perm_splice(context *ctx, Instruction *dec)
{
 return splice_z_p_zz(ctx, dec);
}

int decode_iclass_sve_intx_perm_splice(context *ctx, Instruction *dec)
{
 return splice_z_p_zz(ctx, dec);
}

int decode_iclass_sve_int_sel_vvv(context *ctx, Instruction *dec)
{
 return sel_z_p_zz(ctx, dec);
}

int decode_iclass_sve_int_cmp_0(context *ctx, Instruction *dec)
{
 uint32_t op=(INSWORD>>15)&1, o2=(INSWORD>>13)&1, ne=(INSWORD>>4)&1;
 if(!op && !o2 && !ne) return cmpeq_p_p_zz(ctx, dec);
 if(!op && !o2 && ne) return cmpeq_p_p_zz(ctx, dec);
 if(!op && o2 && !ne) return cmpeq_p_p_zw(ctx, dec);
 if(!op && o2 && ne) return cmpeq_p_p_zw(ctx, dec);
 if(op && !o2 && !ne) return cmpeq_p_p_zz(ctx, dec);
 if(op && !o2 && ne) return cmpeq_p_p_zz(ctx, dec);
 if(op && o2 && !ne) return cmpeq_p_p_zz(ctx, dec);
 if(op && o2 && ne) return cmpeq_p_p_zz(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_int_cmp_1(context *ctx, Instruction *dec)
{
 uint32_t U=(INSWORD>>15)&1, lt=(INSWORD>>13)&1, ne=(INSWORD>>4)&1;
 if(!U && !lt && !ne) return cmpeq_p_p_zw(ctx, dec);
 if(!U && !lt && ne) return cmpeq_p_p_zw(ctx, dec);
 if(!U && lt && !ne) return cmpeq_p_p_zw(ctx, dec);
 if(!U && lt && ne) return cmpeq_p_p_zw(ctx, dec);
 if(U && !lt && !ne) return cmpeq_p_p_zw(ctx, dec);
 if(U && !lt && ne) return cmpeq_p_p_zw(ctx, dec);
 if(U && lt && !ne) return cmpeq_p_p_zw(ctx, dec);
 if(U && lt && ne) return cmpeq_p_p_zw(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_int_ucmp_vi(context *ctx, Instruction *dec)
{
 uint32_t lt=(INSWORD>>13)&1, ne=(INSWORD>>4)&1;
 if(!lt && !ne) return cmpeq_p_p_zi(ctx, dec);
 if(!lt && ne) return cmpeq_p_p_zi(ctx, dec);
 if(lt && !ne) return cmpeq_p_p_zi(ctx, dec);
 if(lt && ne) return cmpeq_p_p_zi(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_int_pred_log(context *ctx, Instruction *dec)
{
 uint32_t op=(INSWORD>>23)&1, S=(INSWORD>>22)&1, o2=(INSWORD>>9)&1, o3=(INSWORD>>4)&1;
 if(!op && !S && !o2 && !o3) return and_p_p_pp(ctx, dec);
 if(!op && !S && !o2 && o3) return bic_p_p_pp(ctx, dec);
 if(!op && !S && o2 && !o3) return eor_p_p_pp(ctx, dec);
 if(!op && !S && o2 && o3) return sel_p_p_pp(ctx, dec);
 if(!op && S && !o2 && !o3) return and_p_p_pp(ctx, dec);
 if(!op && S && !o2 && o3) return bic_p_p_pp(ctx, dec);
 if(!op && S && o2 && !o3) return eor_p_p_pp(ctx, dec);
 if(!op && S && o2 && o3) UNALLOCATED(ENC_UNALLOCATED_197);
 if(op && !S && !o2 && !o3) return orr_p_p_pp(ctx, dec);
 if(op && !S && !o2 && o3) return orn_p_p_pp(ctx, dec);
 if(op && !S && o2 && !o3) return nor_p_p_pp(ctx, dec);
 if(op && !S && o2 && o3) return nand_p_p_pp(ctx, dec);
 if(op && S && !o2 && !o3) return orr_p_p_pp(ctx, dec);
 if(op && S && !o2 && o3) return orn_p_p_pp(ctx, dec);
 if(op && S && o2 && !o3) return nor_p_p_pp(ctx, dec);
 if(op && S && o2 && o3) return nand_p_p_pp(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_int_brkp(context *ctx, Instruction *dec)
{
 uint32_t op=(INSWORD>>23)&1, S=(INSWORD>>22)&1, B=(INSWORD>>4)&1;
 if(!op && !S && !B) return brkpa_p_p_pp(ctx, dec);
 if(!op && !S && B) return brkpb_p_p_pp(ctx, dec);
 if(!op && S && !B) return brkpa_p_p_pp(ctx, dec);
 if(!op && S && B) return brkpb_p_p_pp(ctx, dec);
 if(op) UNALLOCATED(ENC_UNALLOCATED_207);
 UNMATCHED;
}

int decode_iclass_sve_int_break(context *ctx, Instruction *dec)
{
 uint32_t B=(INSWORD>>23)&1, S=(INSWORD>>22)&1, M=(INSWORD>>4)&1;
 if(!B && S && !M) return brka_p_p_p(ctx, dec);
 if(B && S && !M) return brkb_p_p_p(ctx, dec);
 if(S && M) UNALLOCATED(ENC_UNALLOCATED_198);
 if(!B && !S) return brka_p_p_p(ctx, dec);
 if(B && !S) return brkb_p_p_p(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_int_brkn(context *ctx, Instruction *dec)
{
 uint32_t S=(INSWORD>>22)&1;
 if(!S) return brkn_p_p_pp(ctx, dec);
 if(S) return brkn_p_p_pp(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_int_pfirst(context *ctx, Instruction *dec)
{
 uint32_t op=(INSWORD>>23)&1, S=(INSWORD>>22)&1;
 if(!op && !S) UNALLOCATED(ENC_UNALLOCATED_171);
 if(!op && S) return pfirst_p_p_p(ctx, dec);
 if(op) UNALLOCATED(ENC_UNALLOCATED_209);
 UNMATCHED;
}

int decode_iclass_sve_int_ptrue(context *ctx, Instruction *dec)
{
 uint32_t S=(INSWORD>>16)&1;
 if(!S) return ptrue_p_s(ctx, dec);
 if(S) return ptrue_p_s(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_int_pnext(context *ctx, Instruction *dec)
{
 return pnext_p_p_p(ctx, dec);
}

int decode_iclass_sve_int_rdffr(context *ctx, Instruction *dec)
{
 uint32_t op=(INSWORD>>23)&1, S=(INSWORD>>22)&1;
 if(!op && !S) return rdffr_p_p_f(ctx, dec);
 if(!op && S) return rdffr_p_p_f(ctx, dec);
 if(op) UNALLOCATED(ENC_UNALLOCATED_211);
 UNMATCHED;
}

int decode_iclass_sve_int_rdffr_2(context *ctx, Instruction *dec)
{
 uint32_t op=(INSWORD>>23)&1, S=(INSWORD>>22)&1;
 if(!op && !S) return rdffr_p_f(ctx, dec);
 if(!op && S) UNALLOCATED(ENC_UNALLOCATED_204);
 if(op) UNALLOCATED(ENC_UNALLOCATED_212);
 UNMATCHED;
}

int decode_iclass_sve_int_ptest(context *ctx, Instruction *dec)
{
 uint32_t op=(INSWORD>>23)&1, S=(INSWORD>>22)&1, opc2=INSWORD&15;
 if(!op && S && !opc2) return ptest_p_p(ctx, dec);
 if(!op && S && opc2==1) UNALLOCATED(ENC_UNALLOCATED_199);
 if(!op && S && (opc2&14)==2) UNALLOCATED(ENC_UNALLOCATED_200);
 if(!op && S && (opc2&12)==4) UNALLOCATED(ENC_UNALLOCATED_201);
 if(!op && S && (opc2&8)==8) UNALLOCATED(ENC_UNALLOCATED_202);
 if(!op && !S) UNALLOCATED(ENC_UNALLOCATED_170);
 if(op) UNALLOCATED(ENC_UNALLOCATED_208);
 UNMATCHED;
}

int decode_iclass_sve_int_pfalse(context *ctx, Instruction *dec)
{
 uint32_t op=(INSWORD>>23)&1, S=(INSWORD>>22)&1;
 if(!op && !S) return pfalse_p(ctx, dec);
 if(!op && S) UNALLOCATED(ENC_UNALLOCATED_203);
 if(op) UNALLOCATED(ENC_UNALLOCATED_210);
 UNMATCHED;
}

int decode_iclass_sve_int_scmp_vi(context *ctx, Instruction *dec)
{
 uint32_t op=(INSWORD>>15)&1, o2=(INSWORD>>13)&1, ne=(INSWORD>>4)&1;
 if(!op && !o2 && !ne) return cmpeq_p_p_zi(ctx, dec);
 if(!op && !o2 && ne) return cmpeq_p_p_zi(ctx, dec);
 if(!op && o2 && !ne) return cmpeq_p_p_zi(ctx, dec);
 if(!op && o2 && ne) return cmpeq_p_p_zi(ctx, dec);
 if(op && !o2 && !ne) return cmpeq_p_p_zi(ctx, dec);
 if(op && !o2 && ne) return cmpeq_p_p_zi(ctx, dec);
 if(op && o2) UNALLOCATED(ENC_UNALLOCATED_169);
 UNMATCHED;
}

int decode_iclass_sve_int_pcount_pred(context *ctx, Instruction *dec)
{
 uint32_t opc=(INSWORD>>16)&7;
 if(!opc) return cntp_r_p_p(ctx, dec);
 if(opc==1) UNALLOCATED(ENC_UNALLOCATED_173);
 if((opc&6)==2) UNALLOCATED(ENC_UNALLOCATED_174);
 if((opc&4)==4) UNALLOCATED(ENC_UNALLOCATED_176);
 UNMATCHED;
}

int decode_iclass_sve_int_count_r(context *ctx, Instruction *dec)
{
 uint32_t op=(INSWORD>>17)&1, D=(INSWORD>>16)&1, opc2=(INSWORD>>9)&3;
 if(!op && !D && !opc2) return incp_r_p_r(ctx, dec);
 if(!op && D && !opc2) return decp_r_p_r(ctx, dec);
 if(!op && opc2==1) UNALLOCATED(ENC_UNALLOCATED_183);
 if(!op && (opc2&2)==2) UNALLOCATED(ENC_UNALLOCATED_184);
 if(op) UNALLOCATED(ENC_UNALLOCATED_187);
 UNMATCHED;
}

int decode_iclass_sve_int_count_v(context *ctx, Instruction *dec)
{
 uint32_t op=(INSWORD>>17)&1, D=(INSWORD>>16)&1, opc2=(INSWORD>>9)&3;
 if(!op && !D && !opc2) return incp_z_p_z(ctx, dec);
 if(!op && D && !opc2) return decp_z_p_z(ctx, dec);
 if(!op && opc2==1) UNALLOCATED(ENC_UNALLOCATED_181);
 if(!op && (opc2&2)==2) UNALLOCATED(ENC_UNALLOCATED_182);
 if(op) UNALLOCATED(ENC_UNALLOCATED_186);
 UNMATCHED;
}

int decode_iclass_sve_int_count_r_sat(context *ctx, Instruction *dec)
{
 uint32_t D=(INSWORD>>17)&1, U=(INSWORD>>16)&1, sf=(INSWORD>>10)&1, op=(INSWORD>>9)&1;
 if(!D && !U && !sf && !op) return sqincp_r_p_r(ctx, dec);
 if(!D && !U && sf && !op) return sqincp_r_p_r(ctx, dec);
 if(!D && U && !sf && !op) return uqincp_r_p_r(ctx, dec);
 if(!D && U && sf && !op) return uqincp_r_p_r(ctx, dec);
 if(D && !U && !sf && !op) return sqdecp_r_p_r(ctx, dec);
 if(D && !U && sf && !op) return sqdecp_r_p_r(ctx, dec);
 if(D && U && !sf && !op) return uqdecp_r_p_r(ctx, dec);
 if(D && U && sf && !op) return uqdecp_r_p_r(ctx, dec);
 if(op) UNALLOCATED(ENC_UNALLOCATED_179);
 UNMATCHED;
}

int decode_iclass_sve_int_count_v_sat(context *ctx, Instruction *dec)
{
 uint32_t D=(INSWORD>>17)&1, U=(INSWORD>>16)&1, opc=(INSWORD>>9)&3;
 if(!D && !U && !opc) return sqincp_z_p_z(ctx, dec);
 if(!D && U && !opc) return uqincp_z_p_z(ctx, dec);
 if(D && !U && !opc) return sqdecp_z_p_z(ctx, dec);
 if(D && U && !opc) return uqdecp_z_p_z(ctx, dec);
 if(opc==1) UNALLOCATED(ENC_UNALLOCATED_177);
 if((opc&2)==2) UNALLOCATED(ENC_UNALLOCATED_178);
 UNMATCHED;
}

int decode_iclass_sve_int_setffr(context *ctx, Instruction *dec)
{
 uint32_t opc=(INSWORD>>22)&3;
 if(!opc) return setffr_f(ctx, dec);
 if(opc==1) UNALLOCATED(ENC_UNALLOCATED_206);
 if((opc&2)==2) UNALLOCATED(ENC_UNALLOCATED_214);
 UNMATCHED;
}

int decode_iclass_sve_int_wrffr(context *ctx, Instruction *dec)
{
 uint32_t opc=(INSWORD>>22)&3;
 if(!opc) return wrffr_f_p(ctx, dec);
 if(opc==1) UNALLOCATED(ENC_UNALLOCATED_205);
 if((opc&2)==2) UNALLOCATED(ENC_UNALLOCATED_213);
 UNMATCHED;
}

int decode_iclass_sve_int_cterm(context *ctx, Instruction *dec)
{
 uint32_t op=(INSWORD>>23)&1, ne=(INSWORD>>4)&1;
 if(op && !ne) return ctermeq_rr(ctx, dec);
 if(op && ne) return ctermeq_rr(ctx, dec);
 if(!op) UNALLOCATED(ENC_UNALLOCATED_172);
 UNMATCHED;
}

int decode_iclass_sve_int_while_rr(context *ctx, Instruction *dec)
{
 uint32_t U=(INSWORD>>11)&1, lt=(INSWORD>>10)&1, eq=(INSWORD>>4)&1;
 if(!U && !lt && !eq) return whilege_p_p_rr(ctx, dec);
 if(!U && !lt && eq) return whilegt_p_p_rr(ctx, dec);
 if(!U && lt && !eq) return whilelt_p_p_rr(ctx, dec);
 if(!U && lt && eq) return whilele_p_p_rr(ctx, dec);
 if(U && !lt && !eq) return whilehs_p_p_rr(ctx, dec);
 if(U && !lt && eq) return whilehi_p_p_rr(ctx, dec);
 if(U && lt && !eq) return whilelo_p_p_rr(ctx, dec);
 if(U && lt && eq) return whilels_p_p_rr(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_int_whilenc(context *ctx, Instruction *dec)
{
 uint32_t rw=(INSWORD>>4)&1;
 if(!rw) return whilewr_p_rr(ctx, dec);
 if(rw) return whilerw_p_rr(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_int_dup_fpimm(context *ctx, Instruction *dec)
{
 uint32_t opc=(INSWORD>>17)&3, o2=(INSWORD>>13)&1;
 if(!opc && !o2) return fdup_z_i(ctx, dec);
 if(!opc && o2) UNALLOCATED(ENC_UNALLOCATED_192);
 if(opc==1) UNALLOCATED(ENC_UNALLOCATED_194);
 if((opc&2)==2) UNALLOCATED(ENC_UNALLOCATED_196);
 UNMATCHED;
}

int decode_iclass_sve_int_dup_imm(context *ctx, Instruction *dec)
{
 uint32_t opc=(INSWORD>>17)&3;
 if(!opc) return dup_z_i(ctx, dec);
 if(opc==1) UNALLOCATED(ENC_UNALLOCATED_193);
 if((opc&2)==2) UNALLOCATED(ENC_UNALLOCATED_195);
 UNMATCHED;
}

int decode_iclass_sve_int_arith_imm0(context *ctx, Instruction *dec)
{
 uint32_t opc=(INSWORD>>16)&7;
 if(!opc) return add_z_zi(ctx, dec);
 if(opc==1) return sub_z_zi(ctx, dec);
 if(opc==2) UNALLOCATED(ENC_UNALLOCATED_175);
 if(opc==3) return subr_z_zi(ctx, dec);
 if(opc==4) return sqadd_z_zi(ctx, dec);
 if(opc==5) return uqadd_z_zi(ctx, dec);
 if(opc==6) return sqsub_z_zi(ctx, dec);
 if(opc==7) return uqsub_z_zi(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_int_arith_imm1(context *ctx, Instruction *dec)
{
 uint32_t opc=(INSWORD>>16)&7, o2=(INSWORD>>13)&1;
 if(!opc && !o2) return smax_z_zi(ctx, dec);
 if(opc==1 && !o2) return umax_z_zi(ctx, dec);
 if(opc==2 && !o2) return smin_z_zi(ctx, dec);
 if(opc==3 && !o2) return umin_z_zi(ctx, dec);
 if(!(opc&4) && o2) UNALLOCATED(ENC_UNALLOCATED_180);
 if((opc&4)==4) UNALLOCATED(ENC_UNALLOCATED_185);
 UNMATCHED;
}

int decode_iclass_sve_int_arith_imm2(context *ctx, Instruction *dec)
{
 uint32_t opc=(INSWORD>>16)&7, o2=(INSWORD>>13)&1;
 if(!opc && !o2) return mul_z_zi(ctx, dec);
 if(!opc && o2) UNALLOCATED(ENC_UNALLOCATED_188);
 if(opc==1) UNALLOCATED(ENC_UNALLOCATED_189);
 if((opc&6)==2) UNALLOCATED(ENC_UNALLOCATED_190);
 if((opc&4)==4) UNALLOCATED(ENC_UNALLOCATED_191);
 UNMATCHED;
}

int decode_iclass_sve_intx_dot(context *ctx, Instruction *dec)
{
 uint32_t U=(INSWORD>>10)&1;
 if(!U) return sdot_z_zzz(ctx, dec);
 if(U) return udot_z_zzz(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_intx_mixed_dot(context *ctx, Instruction *dec)
{
 uint32_t size=(INSWORD>>22)&3;
 if(size==2) return usdot_z_zzz(ctx, dec);
 if(size==3) UNALLOCATED(ENC_UNALLOCATED_229);
 if(!(size&2)) UNALLOCATED(ENC_UNALLOCATED_215);
 UNMATCHED;
}

int decode_iclass_sve_intx_cdot(context *ctx, Instruction *dec)
{
 return cdot_z_zzz(ctx, dec);
}

int decode_iclass_sve_intx_cmla(context *ctx, Instruction *dec)
{
 uint32_t op=(INSWORD>>12)&1;
 if(!op) return cmla_z_zzz(ctx, dec);
 if(op) return sqrdcmlah_z_zzz(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_intx_mlal_long(context *ctx, Instruction *dec)
{
 uint32_t S=(INSWORD>>12)&1, U=(INSWORD>>11)&1, T=(INSWORD>>10)&1;
 if(!S && !U && !T) return smlalb_z_zzz(ctx, dec);
 if(!S && !U && T) return smlalt_z_zzz(ctx, dec);
 if(!S && U && !T) return umlalb_z_zzz(ctx, dec);
 if(!S && U && T) return umlalt_z_zzz(ctx, dec);
 if(S && !U && !T) return smlslb_z_zzz(ctx, dec);
 if(S && !U && T) return smlslt_z_zzz(ctx, dec);
 if(S && U && !T) return umlslb_z_zzz(ctx, dec);
 if(S && U && T) return umlslt_z_zzz(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_intx_qdmlal_long(context *ctx, Instruction *dec)
{
 uint32_t S=(INSWORD>>11)&1, T=(INSWORD>>10)&1;
 if(!S && !T) return sqdmlalb_z_zzz(ctx, dec);
 if(!S && T) return sqdmlalt_z_zzz(ctx, dec);
 if(S && !T) return sqdmlslb_z_zzz(ctx, dec);
 if(S && T) return sqdmlslt_z_zzz(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_intx_qrdmlah(context *ctx, Instruction *dec)
{
 uint32_t S=(INSWORD>>10)&1;
 if(!S) return sqrdmlah_z_zzz(ctx, dec);
 if(S) return sqrdmlsh_z_zzz(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_intx_qdmlalbt(context *ctx, Instruction *dec)
{
 uint32_t S=(INSWORD>>10)&1;
 if(!S) return sqdmlalbt_z_zzz(ctx, dec);
 if(S) return sqdmlslbt_z_zzz(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_intx_pred_arith_binary(context *ctx, Instruction *dec)
{
 uint32_t R=(INSWORD>>18)&1, S=(INSWORD>>17)&1, U=(INSWORD>>16)&1;
 if(!R && !S && !U) return shadd_z_p_zz(ctx, dec);
 if(!R && !S && U) return uhadd_z_p_zz(ctx, dec);
 if(!R && S && !U) return shsub_z_p_zz(ctx, dec);
 if(!R && S && U) return uhsub_z_p_zz(ctx, dec);
 if(R && !S && !U) return srhadd_z_p_zz(ctx, dec);
 if(R && !S && U) return urhadd_z_p_zz(ctx, dec);
 if(R && S && !U) return shsubr_z_p_zz(ctx, dec);
 if(R && S && U) return uhsubr_z_p_zz(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_intx_accumulate_long_pairs(context *ctx, Instruction *dec)
{
 uint32_t U=(INSWORD>>16)&1;
 if(!U) return sadalp_z_p_z(ctx, dec);
 if(U) return uadalp_z_p_z(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_intx_arith_binary_pairs(context *ctx, Instruction *dec)
{
 uint32_t opc=(INSWORD>>17)&3, U=(INSWORD>>16)&1;
 if(!opc && !U) UNALLOCATED(ENC_UNALLOCATED_218);
 if(!opc && U) return addp_z_p_zz(ctx, dec);
 if(opc==2 && !U) return smaxp_z_p_zz(ctx, dec);
 if(opc==2 && U) return umaxp_z_p_zz(ctx, dec);
 if(opc==3 && !U) return sminp_z_p_zz(ctx, dec);
 if(opc==3 && U) return uminp_z_p_zz(ctx, dec);
 if(opc==1) UNALLOCATED(ENC_UNALLOCATED_219);
 UNMATCHED;
}

int decode_iclass_sve_intx_pred_arith_unary(context *ctx, Instruction *dec)
{
 uint32_t Q=(INSWORD>>19)&1, opc=(INSWORD>>16)&3;
 if(!Q && !opc) return urecpe_z_p_z(ctx, dec);
 if(!Q && opc==1) return ursqrte_z_p_z(ctx, dec);
 if(Q && !opc) return sqabs_z_p_z(ctx, dec);
 if(Q && opc==1) return sqneg_z_p_z(ctx, dec);
 if((opc&2)==2) UNALLOCATED(ENC_UNALLOCATED_217);
 UNMATCHED;
}

int decode_iclass_sve_intx_pred_arith_binary_sat(context *ctx, Instruction *dec)
{
 uint32_t op=(INSWORD>>18)&1, S=(INSWORD>>17)&1, U=(INSWORD>>16)&1;
 if(!op && !S && !U) return sqadd_z_p_zz(ctx, dec);
 if(!op && !S && U) return uqadd_z_p_zz(ctx, dec);
 if(!op && S && !U) return sqsub_z_p_zz(ctx, dec);
 if(!op && S && U) return uqsub_z_p_zz(ctx, dec);
 if(op && !S && !U) return suqadd_z_p_zz(ctx, dec);
 if(op && !S && U) return usqadd_z_p_zz(ctx, dec);
 if(op && S && !U) return sqsubr_z_p_zz(ctx, dec);
 if(op && S && U) return uqsubr_z_p_zz(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_intx_bin_pred_shift_sat_round(context *ctx, Instruction *dec)
{
 uint32_t Q=(INSWORD>>19)&1, R=(INSWORD>>18)&1, N=(INSWORD>>17)&1, U=(INSWORD>>16)&1;
 if(!Q && !R && N && !U) return srshl_z_p_zz(ctx, dec);
 if(!Q && !R && N && U) return urshl_z_p_zz(ctx, dec);
 if(!Q && R && N && !U) return srshlr_z_p_zz(ctx, dec);
 if(!Q && R && N && U) return urshlr_z_p_zz(ctx, dec);
 if(Q && !R && !N && !U) return sqshl_z_p_zz(ctx, dec);
 if(Q && !R && !N && U) return uqshl_z_p_zz(ctx, dec);
 if(Q && !R && N && !U) return sqrshl_z_p_zz(ctx, dec);
 if(Q && !R && N && U) return uqrshl_z_p_zz(ctx, dec);
 if(Q && R && !N && !U) return sqshlr_z_p_zz(ctx, dec);
 if(Q && R && !N && U) return uqshlr_z_p_zz(ctx, dec);
 if(Q && R && N && !U) return sqrshlr_z_p_zz(ctx, dec);
 if(Q && R && N && U) return uqrshlr_z_p_zz(ctx, dec);
 if(!Q && !N) UNALLOCATED(ENC_UNALLOCATED_216);
 UNMATCHED;
}

int decode_iclass_sve_intx_dot_by_indexed_elem(context *ctx, Instruction *dec)
{
 uint32_t size=(INSWORD>>22)&3, U=(INSWORD>>10)&1;
 if(size==2 && !U) return sdot_z_zzzi(ctx, dec);
 if(size==2 && U) return udot_z_zzzi(ctx, dec);
 if(size==3 && !U) return sdot_z_zzzi(ctx, dec);
 if(size==3 && U) return udot_z_zzzi(ctx, dec);
 if(!(size&2)) UNALLOCATED(ENC_UNALLOCATED_220);
 UNMATCHED;
}

int decode_iclass_sve_intx_mixed_dot_by_indexed_elem(context *ctx, Instruction *dec)
{
 uint32_t size=(INSWORD>>22)&3, U=(INSWORD>>10)&1;
 if(size==2 && !U) return usdot_z_zzzi(ctx, dec);
 if(size==2 && U) return sudot_z_zzzi(ctx, dec);
 if(size==3) UNALLOCATED(ENC_UNALLOCATED_230);
 if(!(size&2)) UNALLOCATED(ENC_UNALLOCATED_221);
 UNMATCHED;
}

int decode_iclass_sve_intx_cdot_by_indexed_elem(context *ctx, Instruction *dec)
{
 uint32_t size=(INSWORD>>22)&3;
 if(size==2) return cdot_z_zzzi(ctx, dec);
 if(size==3) return cdot_z_zzzi(ctx, dec);
 if(!(size&2)) UNALLOCATED(ENC_UNALLOCATED_223);
 UNMATCHED;
}

int decode_iclass_sve_intx_cmla_by_indexed_elem(context *ctx, Instruction *dec)
{
 uint32_t size=(INSWORD>>22)&3;
 if(size==2) return cmla_z_zzzi(ctx, dec);
 if(size==3) return cmla_z_zzzi(ctx, dec);
 if(!(size&2)) UNALLOCATED(ENC_UNALLOCATED_224);
 UNMATCHED;
}

int decode_iclass_sve_intx_qrdcmla_by_indexed_elem(context *ctx, Instruction *dec)
{
 uint32_t size=(INSWORD>>22)&3;
 if(size==2) return sqrdcmlah_z_zzzi(ctx, dec);
 if(size==3) return sqrdcmlah_z_zzzi(ctx, dec);
 if(!(size&2)) UNALLOCATED(ENC_UNALLOCATED_225);
 UNMATCHED;
}

int decode_iclass_sve_intx_mul_by_indexed_elem(context *ctx, Instruction *dec)
{
 uint32_t size=(INSWORD>>22)&3;
 if(size==2) return mul_z_zzi(ctx, dec);
 if(size==3) return mul_z_zzi(ctx, dec);
 if(!(size&2)) return mul_z_zzi(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_intx_mul_long_by_indexed_elem(context *ctx, Instruction *dec)
{
 uint32_t size=(INSWORD>>22)&3, U=(INSWORD>>12)&1, T=(INSWORD>>10)&1;
 if(size==2 && !U && !T) return smullb_z_zzi(ctx, dec);
 if(size==2 && !U && T) return smullt_z_zzi(ctx, dec);
 if(size==2 && U && !T) return umullb_z_zzi(ctx, dec);
 if(size==2 && U && T) return umullt_z_zzi(ctx, dec);
 if(size==3 && !U && !T) return smullb_z_zzi(ctx, dec);
 if(size==3 && !U && T) return smullt_z_zzi(ctx, dec);
 if(size==3 && U && !T) return umullb_z_zzi(ctx, dec);
 if(size==3 && U && T) return umullt_z_zzi(ctx, dec);
 if(!(size&2)) UNALLOCATED(ENC_UNALLOCATED_227);
 UNMATCHED;
}

int decode_iclass_sve_intx_mla_by_indexed_elem(context *ctx, Instruction *dec)
{
 uint32_t size=(INSWORD>>22)&3, S=(INSWORD>>10)&1;
 if(size==2 && !S) return mla_z_zzzi(ctx, dec);
 if(size==2 && S) return mls_z_zzzi(ctx, dec);
 if(size==3 && !S) return mla_z_zzzi(ctx, dec);
 if(size==3 && S) return mls_z_zzzi(ctx, dec);
 if(!(size&2) && !S) return mla_z_zzzi(ctx, dec);
 if(!(size&2) && S) return mls_z_zzzi(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_intx_mla_long_by_indexed_elem(context *ctx, Instruction *dec)
{
 uint32_t size=(INSWORD>>22)&3, S=(INSWORD>>13)&1, U=(INSWORD>>12)&1, T=(INSWORD>>10)&1;
 if(size==2 && !S && !U && !T) return smlalb_z_zzzi(ctx, dec);
 if(size==2 && !S && !U && T) return smlalt_z_zzzi(ctx, dec);
 if(size==2 && !S && U && !T) return umlalb_z_zzzi(ctx, dec);
 if(size==2 && !S && U && T) return umlalt_z_zzzi(ctx, dec);
 if(size==2 && S && !U && !T) return smlslb_z_zzzi(ctx, dec);
 if(size==2 && S && !U && T) return smlslt_z_zzzi(ctx, dec);
 if(size==2 && S && U && !T) return umlslb_z_zzzi(ctx, dec);
 if(size==2 && S && U && T) return umlslt_z_zzzi(ctx, dec);
 if(size==3 && !S && !U && !T) return smlalb_z_zzzi(ctx, dec);
 if(size==3 && !S && !U && T) return smlalt_z_zzzi(ctx, dec);
 if(size==3 && !S && U && !T) return umlalb_z_zzzi(ctx, dec);
 if(size==3 && !S && U && T) return umlalt_z_zzzi(ctx, dec);
 if(size==3 && S && !U && !T) return smlslb_z_zzzi(ctx, dec);
 if(size==3 && S && !U && T) return smlslt_z_zzzi(ctx, dec);
 if(size==3 && S && U && !T) return umlslb_z_zzzi(ctx, dec);
 if(size==3 && S && U && T) return umlslt_z_zzzi(ctx, dec);
 if(!(size&2)) UNALLOCATED(ENC_UNALLOCATED_226);
 UNMATCHED;
}

int decode_iclass_sve_intx_qdmulh_by_indexed_elem(context *ctx, Instruction *dec)
{
 uint32_t size=(INSWORD>>22)&3, R=(INSWORD>>10)&1;
 if(size==2 && !R) return sqdmulh_z_zzi(ctx, dec);
 if(size==2 && R) return sqrdmulh_z_zzi(ctx, dec);
 if(size==3 && !R) return sqdmulh_z_zzi(ctx, dec);
 if(size==3 && R) return sqrdmulh_z_zzi(ctx, dec);
 if(!(size&2) && !R) return sqdmulh_z_zzi(ctx, dec);
 if(!(size&2) && R) return sqrdmulh_z_zzi(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_intx_qdmul_long_by_indexed_elem(context *ctx, Instruction *dec)
{
 uint32_t size=(INSWORD>>22)&3, T=(INSWORD>>10)&1;
 if(size==2 && !T) return sqdmullb_z_zzi(ctx, dec);
 if(size==2 && T) return sqdmullt_z_zzi(ctx, dec);
 if(size==3 && !T) return sqdmullb_z_zzi(ctx, dec);
 if(size==3 && T) return sqdmullt_z_zzi(ctx, dec);
 if(!(size&2)) UNALLOCATED(ENC_UNALLOCATED_228);
 UNMATCHED;
}

int decode_iclass_sve_intx_qdmla_long_by_indexed_elem(context *ctx, Instruction *dec)
{
 uint32_t size=(INSWORD>>22)&3, S=(INSWORD>>12)&1, T=(INSWORD>>10)&1;
 if(size==2 && !S && !T) return sqdmlalb_z_zzzi(ctx, dec);
 if(size==2 && !S && T) return sqdmlalt_z_zzzi(ctx, dec);
 if(size==2 && S && !T) return sqdmlslb_z_zzzi(ctx, dec);
 if(size==2 && S && T) return sqdmlslt_z_zzzi(ctx, dec);
 if(size==3 && !S && !T) return sqdmlalb_z_zzzi(ctx, dec);
 if(size==3 && !S && T) return sqdmlalt_z_zzzi(ctx, dec);
 if(size==3 && S && !T) return sqdmlslb_z_zzzi(ctx, dec);
 if(size==3 && S && T) return sqdmlslt_z_zzzi(ctx, dec);
 if(!(size&2)) UNALLOCATED(ENC_UNALLOCATED_222);
 UNMATCHED;
}

int decode_iclass_sve_intx_qrdmlah_by_indexed_elem(context *ctx, Instruction *dec)
{
 uint32_t size=(INSWORD>>22)&3, S=(INSWORD>>10)&1;
 if(size==2 && !S) return sqrdmlah_z_zzzi(ctx, dec);
 if(size==2 && S) return sqrdmlsh_z_zzzi(ctx, dec);
 if(size==3 && !S) return sqrdmlah_z_zzzi(ctx, dec);
 if(size==3 && S) return sqrdmlsh_z_zzzi(ctx, dec);
 if(!(size&2) && !S) return sqrdmlah_z_zzzi(ctx, dec);
 if(!(size&2) && S) return sqrdmlsh_z_zzzi(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_intx_cons_arith_long(context *ctx, Instruction *dec)
{
 uint32_t op=(INSWORD>>13)&1, S=(INSWORD>>12)&1, U=(INSWORD>>11)&1, T=(INSWORD>>10)&1;
 if(!op && !S && !U && !T) return saddlb_z_zz(ctx, dec);
 if(!op && !S && !U && T) return saddlt_z_zz(ctx, dec);
 if(!op && !S && U && !T) return uaddlb_z_zz(ctx, dec);
 if(!op && !S && U && T) return uaddlt_z_zz(ctx, dec);
 if(!op && S && !U && !T) return ssublb_z_zz(ctx, dec);
 if(!op && S && !U && T) return ssublt_z_zz(ctx, dec);
 if(!op && S && U && !T) return usublb_z_zz(ctx, dec);
 if(!op && S && U && T) return usublt_z_zz(ctx, dec);
 if(op && S && !U && !T) return sabdlb_z_zz(ctx, dec);
 if(op && S && !U && T) return sabdlt_z_zz(ctx, dec);
 if(op && S && U && !T) return uabdlb_z_zz(ctx, dec);
 if(op && S && U && T) return uabdlt_z_zz(ctx, dec);
 if(op && !S) UNALLOCATED(ENC_UNALLOCATED_231);
 UNMATCHED;
}

int decode_iclass_sve_intx_cons_arith_wide(context *ctx, Instruction *dec)
{
 uint32_t S=(INSWORD>>12)&1, U=(INSWORD>>11)&1, T=(INSWORD>>10)&1;
 if(!S && !U && !T) return saddwb_z_zz(ctx, dec);
 if(!S && !U && T) return saddwt_z_zz(ctx, dec);
 if(!S && U && !T) return uaddwb_z_zz(ctx, dec);
 if(!S && U && T) return uaddwt_z_zz(ctx, dec);
 if(S && !U && !T) return ssubwb_z_zz(ctx, dec);
 if(S && !U && T) return ssubwt_z_zz(ctx, dec);
 if(S && U && !T) return usubwb_z_zz(ctx, dec);
 if(S && U && T) return usubwt_z_zz(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_intx_cons_mul_long(context *ctx, Instruction *dec)
{
 uint32_t op=(INSWORD>>12)&1, U=(INSWORD>>11)&1, T=(INSWORD>>10)&1;
 if(!op && !U && !T) return sqdmullb_z_zz(ctx, dec);
 if(!op && !U && T) return sqdmullt_z_zz(ctx, dec);
 if(!op && U && !T) return pmullb_z_zz(ctx, dec);
 if(!op && U && T) return pmullt_z_zz(ctx, dec);
 if(op && !U && !T) return smullb_z_zz(ctx, dec);
 if(op && !U && T) return smullt_z_zz(ctx, dec);
 if(op && U && !T) return umullb_z_zz(ctx, dec);
 if(op && U && T) return umullt_z_zz(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_intx_mmla(context *ctx, Instruction *dec)
{
 uint32_t uns=(INSWORD>>22)&3;
 if(!uns) return smmla_z_zzz(ctx, dec);
 if(uns==1) UNALLOCATED(ENC_UNALLOCATED_236);
 if(uns==2) return usmmla_z_zzz(ctx, dec);
 if(uns==3) return ummla_z_zzz(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_intx_eorx(context *ctx, Instruction *dec)
{
 uint32_t tb=(INSWORD>>10)&1;
 if(!tb) return eorbt_z_zz(ctx, dec);
 if(tb) return eortb_z_zz(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_intx_perm_bit(context *ctx, Instruction *dec)
{
 uint32_t opc=(INSWORD>>10)&3;
 if(!opc) return bext_z_zz(ctx, dec);
 if(opc==1) return bdep_z_zz(ctx, dec);
 if(opc==2) return bgrp_z_zz(ctx, dec);
 if(opc==3) UNALLOCATED(ENC_UNALLOCATED_233);
 UNMATCHED;
}

int decode_iclass_sve_intx_shift_long(context *ctx, Instruction *dec)
{
 uint32_t U=(INSWORD>>11)&1, T=(INSWORD>>10)&1;
 if(!U && !T) return sshllb_z_zi(ctx, dec);
 if(!U && T) return sshllt_z_zi(ctx, dec);
 if(U && !T) return ushllb_z_zi(ctx, dec);
 if(U && T) return ushllt_z_zi(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_intx_clong(context *ctx, Instruction *dec)
{
 uint32_t S=(INSWORD>>11)&1, tb=(INSWORD>>10)&1;
 if(!S && !tb) return saddlbt_z_zz(ctx, dec);
 if(!S && tb) UNALLOCATED(ENC_UNALLOCATED_232);
 if(S && !tb) return ssublbt_z_zz(ctx, dec);
 if(S && tb) return ssubltb_z_zz(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_intx_shift_insert(context *ctx, Instruction *dec)
{
 uint32_t op=(INSWORD>>10)&1;
 if(!op) return sri_z_zzi(ctx, dec);
 if(op) return sli_z_zzi(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_intx_sra(context *ctx, Instruction *dec)
{
 uint32_t R=(INSWORD>>11)&1, U=(INSWORD>>10)&1;
 if(!R && !U) return ssra_z_zi(ctx, dec);
 if(!R && U) return usra_z_zi(ctx, dec);
 if(R && !U) return srsra_z_zi(ctx, dec);
 if(R && U) return ursra_z_zi(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_intx_cadd(context *ctx, Instruction *dec)
{
 uint32_t op=(INSWORD>>16)&1;
 if(!op) return cadd_z_zz(ctx, dec);
 if(op) return sqcadd_z_zz(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_intx_aba(context *ctx, Instruction *dec)
{
 uint32_t U=(INSWORD>>10)&1;
 if(!U) return saba_z_zzz(ctx, dec);
 if(U) return uaba_z_zzz(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_intx_aba_long(context *ctx, Instruction *dec)
{
 uint32_t U=(INSWORD>>11)&1, T=(INSWORD>>10)&1;
 if(!U && !T) return sabalb_z_zzz(ctx, dec);
 if(!U && T) return sabalt_z_zzz(ctx, dec);
 if(U && !T) return uabalb_z_zzz(ctx, dec);
 if(U && T) return uabalt_z_zzz(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_intx_adc_long(context *ctx, Instruction *dec)
{
 uint32_t size=(INSWORD>>22)&3, T=(INSWORD>>10)&1;
 if(!(size&2) && !T) return adclb_z_zzz(ctx, dec);
 if(!(size&2) && T) return adclt_z_zzz(ctx, dec);
 if((size&2)==2 && !T) return sbclb_z_zzz(ctx, dec);
 if((size&2)==2 && T) return sbclt_z_zzz(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_intx_shift_narrow(context *ctx, Instruction *dec)
{
 uint32_t op=(INSWORD>>13)&1, U=(INSWORD>>12)&1, R=(INSWORD>>11)&1, T=(INSWORD>>10)&1;
 if(!op && !U && !R && !T) return sqshrunb_z_zi(ctx, dec);
 if(!op && !U && !R && T) return sqshrunt_z_zi(ctx, dec);
 if(!op && !U && R && !T) return sqrshrunb_z_zi(ctx, dec);
 if(!op && !U && R && T) return sqrshrunt_z_zi(ctx, dec);
 if(!op && U && !R && !T) return shrnb_z_zi(ctx, dec);
 if(!op && U && !R && T) return shrnt_z_zi(ctx, dec);
 if(!op && U && R && !T) return rshrnb_z_zi(ctx, dec);
 if(!op && U && R && T) return rshrnt_z_zi(ctx, dec);
 if(op && !U && !R && !T) return sqshrnb_z_zi(ctx, dec);
 if(op && !U && !R && T) return sqshrnt_z_zi(ctx, dec);
 if(op && !U && R && !T) return sqrshrnb_z_zi(ctx, dec);
 if(op && !U && R && T) return sqrshrnt_z_zi(ctx, dec);
 if(op && U && !R && !T) return uqshrnb_z_zi(ctx, dec);
 if(op && U && !R && T) return uqshrnt_z_zi(ctx, dec);
 if(op && U && R && !T) return uqrshrnb_z_zi(ctx, dec);
 if(op && U && R && T) return uqrshrnt_z_zi(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_intx_arith_narrow(context *ctx, Instruction *dec)
{
 uint32_t S=(INSWORD>>12)&1, R=(INSWORD>>11)&1, T=(INSWORD>>10)&1;
 if(!S && !R && !T) return addhnb_z_zz(ctx, dec);
 if(!S && !R && T) return addhnt_z_zz(ctx, dec);
 if(!S && R && !T) return raddhnb_z_zz(ctx, dec);
 if(!S && R && T) return raddhnt_z_zz(ctx, dec);
 if(S && !R && !T) return subhnb_z_zz(ctx, dec);
 if(S && !R && T) return subhnt_z_zz(ctx, dec);
 if(S && R && !T) return rsubhnb_z_zz(ctx, dec);
 if(S && R && T) return rsubhnt_z_zz(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_intx_extract_narrow(context *ctx, Instruction *dec)
{
 uint32_t opc=(INSWORD>>11)&3, T=(INSWORD>>10)&1;
 if(!opc && !T) return sqxtnb_z_zz(ctx, dec);
 if(!opc && T) return sqxtnt_z_zz(ctx, dec);
 if(opc==1 && !T) return uqxtnb_z_zz(ctx, dec);
 if(opc==1 && T) return uqxtnt_z_zz(ctx, dec);
 if(opc==2 && !T) return sqxtunb_z_zz(ctx, dec);
 if(opc==2 && T) return sqxtunt_z_zz(ctx, dec);
 if(opc==3) UNALLOCATED(ENC_UNALLOCATED_234);
 UNMATCHED;
}

int decode_iclass_sve_intx_match(context *ctx, Instruction *dec)
{
 uint32_t op=(INSWORD>>4)&1;
 if(!op) return match_p_p_zz(ctx, dec);
 if(op) return nmatch_p_p_zz(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_intx_histseg(context *ctx, Instruction *dec)
{
 return histseg_z_zz(ctx, dec);
}

int decode_iclass_sve_intx_histcnt(context *ctx, Instruction *dec)
{
 return histcnt_z_p_zz(ctx, dec);
}

int decode_iclass_sve_crypto_binary_const(context *ctx, Instruction *dec)
{
 uint32_t size=(INSWORD>>22)&3, op=(INSWORD>>10)&1;
 if(!size && !op) return sm4ekey_z_zz(ctx, dec);
 if(!size && op) return rax1_z_zz(ctx, dec);
 if(size==1) UNALLOCATED(ENC_UNALLOCATED_238);
 if((size&2)==2) UNALLOCATED(ENC_UNALLOCATED_241);
 UNMATCHED;
}

int decode_iclass_sve_crypto_binary_dest(context *ctx, Instruction *dec)
{
 uint32_t size=(INSWORD>>22)&3, op=(INSWORD>>16)&1, o2=(INSWORD>>10)&1;
 if(!size && !op && !o2) return aese_z_zz(ctx, dec);
 if(!size && !op && o2) return aesd_z_zz(ctx, dec);
 if(!size && op && !o2) return sm4e_z_zz(ctx, dec);
 if(!size && op && o2) UNALLOCATED(ENC_UNALLOCATED_235);
 if(size==1) UNALLOCATED(ENC_UNALLOCATED_239);
 if((size&2)==2) UNALLOCATED(ENC_UNALLOCATED_242);
 UNMATCHED;
}

int decode_iclass_sve_crypto_unary(context *ctx, Instruction *dec)
{
 uint32_t size=(INSWORD>>22)&3, op=(INSWORD>>10)&1;
 if(!size && !op) return aesmc_z_z(ctx, dec);
 if(!size && op) return aesimc_z_z(ctx, dec);
 if(size==1) UNALLOCATED(ENC_UNALLOCATED_237);
 if((size&2)==2) UNALLOCATED(ENC_UNALLOCATED_240);
 UNMATCHED;
}

int decode_iclass_sve_fp_fcadd(context *ctx, Instruction *dec)
{
 return fcadd_z_p_zz(ctx, dec);
}

int decode_iclass_sve_fp_fcvt2(context *ctx, Instruction *dec)
{
 uint32_t opc=(INSWORD>>22)&3, opc2=(INSWORD>>16)&3;
 if(!opc && opc2==2) return fcvtxnt_z_p_z(ctx, dec);
 if(opc==2 && !opc2) return fcvtnt_z_p_z(ctx, dec);
 if(opc==2 && opc2==1) return fcvtlt_z_p_z(ctx, dec);
 if(opc==2 && opc2==2) return bfcvtnt_z_p_z(ctx, dec);
 if(opc==3 && opc2==2) return fcvtnt_z_p_z(ctx, dec);
 if(opc==3 && opc2==3) return fcvtlt_z_p_z(ctx, dec);
 if(!(opc&1) && opc2==3) UNALLOCATED(ENC_UNALLOCATED_244);
 if(!opc && !(opc2&2)) UNALLOCATED(ENC_UNALLOCATED_243);
 if(opc==3 && !(opc2&2)) UNALLOCATED(ENC_UNALLOCATED_252);
 if(opc==1) UNALLOCATED(ENC_UNALLOCATED_251);
 UNMATCHED;
}

int decode_iclass_sve_fp_pairwise(context *ctx, Instruction *dec)
{
 uint32_t opc=(INSWORD>>16)&7;
 if(!opc) return faddp_z_p_zz(ctx, dec);
 if(opc==1) UNALLOCATED(ENC_UNALLOCATED_245);
 if(opc==4) return fmaxnmp_z_p_zz(ctx, dec);
 if(opc==5) return fminnmp_z_p_zz(ctx, dec);
 if(opc==6) return fmaxp_z_p_zz(ctx, dec);
 if(opc==7) return fminp_z_p_zz(ctx, dec);
 if((opc&6)==2) UNALLOCATED(ENC_UNALLOCATED_246);
 UNMATCHED;
}

int decode_iclass_sve_fp_fcmla(context *ctx, Instruction *dec)
{
 return fcmla_z_p_zzz(ctx, dec);
}

int decode_iclass_sve_fp_fma_by_indexed_elem(context *ctx, Instruction *dec)
{
 uint32_t size=(INSWORD>>22)&3, op=(INSWORD>>10)&1;
 if(size==2 && !op) return fmla_z_zzzi(ctx, dec);
 if(size==2 && op) return fmls_z_zzzi(ctx, dec);
 if(size==3 && !op) return fmla_z_zzzi(ctx, dec);
 if(size==3 && op) return fmls_z_zzzi(ctx, dec);
 if(!(size&2) && !op) return fmla_z_zzzi(ctx, dec);
 if(!(size&2) && op) return fmls_z_zzzi(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_fp_fcmla_by_indexed_elem(context *ctx, Instruction *dec)
{
 uint32_t size=(INSWORD>>22)&3;
 if(size==2) return fcmla_z_zzzi(ctx, dec);
 if(size==3) return fcmla_z_zzzi(ctx, dec);
 if(!(size&2)) UNALLOCATED(ENC_UNALLOCATED_247);
 UNMATCHED;
}

int decode_iclass_sve_fp_fmul_by_indexed_elem(context *ctx, Instruction *dec)
{
 uint32_t size=(INSWORD>>22)&3;
 if(size==2) return fmul_z_zzi(ctx, dec);
 if(size==3) return fmul_z_zzi(ctx, dec);
 if(!(size&2)) return fmul_z_zzi(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_fp_fdot_by_indexed_elem(context *ctx, Instruction *dec)
{
 uint32_t op=(INSWORD>>22)&1;
 if(!op) UNALLOCATED(ENC_UNALLOCATED_248);
 if(op) return bfdot_z_zzzi(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_fp_fma_long_by_indexed_elem(context *ctx, Instruction *dec)
{
 uint32_t o2=(INSWORD>>22)&1, op=(INSWORD>>13)&1, T=(INSWORD>>10)&1;
 if(!o2 && !op && !T) return fmlalb_z_zzzi(ctx, dec);
 if(!o2 && !op && T) return fmlalt_z_zzzi(ctx, dec);
 if(!o2 && op && !T) return fmlslb_z_zzzi(ctx, dec);
 if(!o2 && op && T) return fmlslt_z_zzzi(ctx, dec);
 if(o2 && !op && !T) return bfmlalb_z_zzzi(ctx, dec);
 if(o2 && !op && T) return bfmlalt_z_zzzi(ctx, dec);
 if(o2 && op) UNALLOCATED(ENC_UNALLOCATED_253);
 UNMATCHED;
}

int decode_iclass_sve_fp_fdot(context *ctx, Instruction *dec)
{
 uint32_t op=(INSWORD>>22)&1;
 if(!op) UNALLOCATED(ENC_UNALLOCATED_249);
 if(op) return bfdot_z_zzz(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_fp_fma_long(context *ctx, Instruction *dec)
{
 uint32_t o2=(INSWORD>>22)&1, op=(INSWORD>>13)&1, T=(INSWORD>>10)&1;
 if(!o2 && !op && !T) return fmlalb_z_zzz(ctx, dec);
 if(!o2 && !op && T) return fmlalt_z_zzz(ctx, dec);
 if(!o2 && op && !T) return fmlslb_z_zzz(ctx, dec);
 if(!o2 && op && T) return fmlslt_z_zzz(ctx, dec);
 if(o2 && !op && !T) return bfmlalb_z_zzz(ctx, dec);
 if(o2 && !op && T) return bfmlalt_z_zzz(ctx, dec);
 if(o2 && op) UNALLOCATED(ENC_UNALLOCATED_254);
 UNMATCHED;
}

int decode_iclass_sve_fp_fmmla(context *ctx, Instruction *dec)
{
 uint32_t opc=(INSWORD>>22)&3;
 if(!opc) UNALLOCATED(ENC_UNALLOCATED_250);
 if(opc==1) return bfmmla_z_zzz(ctx, dec);
 if(opc==2) return fmmla_z_zzz(ctx, dec);
 if(opc==3) return fmmla_z_zzz(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_fp_fast_red(context *ctx, Instruction *dec)
{
 uint32_t opc=(INSWORD>>16)&7;
 if(!opc) return faddv_v_p_z(ctx, dec);
 if(opc==1) UNALLOCATED(ENC_UNALLOCATED_257);
 if(opc==4) return fmaxnmv_v_p_z(ctx, dec);
 if(opc==5) return fminnmv_v_p_z(ctx, dec);
 if(opc==6) return fmaxv_v_p_z(ctx, dec);
 if(opc==7) return fminv_v_p_z(ctx, dec);
 if((opc&6)==2) UNALLOCATED(ENC_UNALLOCATED_258);
 UNMATCHED;
}

int decode_iclass_sve_fp_2op_u_zd(context *ctx, Instruction *dec)
{
 uint32_t opc=(INSWORD>>16)&7;
 if(opc==6) return frecpe_z_z(ctx, dec);
 if(opc==7) return frsqrte_z_z(ctx, dec);
 if((opc&6)==4) UNALLOCATED(ENC_UNALLOCATED_264);
 if(!(opc&4)) UNALLOCATED(ENC_UNALLOCATED_260);
 UNMATCHED;
}

int decode_iclass_sve_fp_2op_p_pd(context *ctx, Instruction *dec)
{
 uint32_t eq=(INSWORD>>17)&1, lt=(INSWORD>>16)&1, ne=(INSWORD>>4)&1;
 if(!eq && !lt && !ne) return fcmeq_p_p_z0(ctx, dec);
 if(!eq && !lt && ne) return fcmeq_p_p_z0(ctx, dec);
 if(!eq && lt && !ne) return fcmeq_p_p_z0(ctx, dec);
 if(!eq && lt && ne) return fcmeq_p_p_z0(ctx, dec);
 if(eq && !lt && !ne) return fcmeq_p_p_z0(ctx, dec);
 if(eq && lt && !ne) return fcmeq_p_p_z0(ctx, dec);
 if(eq && ne) UNALLOCATED(ENC_UNALLOCATED_268);
 UNMATCHED;
}

int decode_iclass_sve_fp_2op_p_vd(context *ctx, Instruction *dec)
{
 uint32_t opc=(INSWORD>>16)&3;
 if(!opc) return fadda_v_p_z(ctx, dec);
 if(opc==1) UNALLOCATED(ENC_UNALLOCATED_269);
 if((opc&2)==2) UNALLOCATED(ENC_UNALLOCATED_271);
 UNMATCHED;
}

int decode_iclass_sve_fp_3op_u_zd(context *ctx, Instruction *dec)
{
 uint32_t opc=(INSWORD>>10)&7;
 if(!opc) return fadd_z_zz(ctx, dec);
 if(opc==1) return fsub_z_zz(ctx, dec);
 if(opc==2) return fmul_z_zz(ctx, dec);
 if(opc==3) return ftsmul_z_zz(ctx, dec);
 if(opc==6) return frecps_z_zz(ctx, dec);
 if(opc==7) return frsqrts_z_zz(ctx, dec);
 if((opc&6)==4) UNALLOCATED(ENC_UNALLOCATED_255);
 UNMATCHED;
}

int decode_iclass_sve_fp_2op_p_zds(context *ctx, Instruction *dec)
{
 uint32_t opc=(INSWORD>>16)&15;
 if(!opc) return fadd_z_p_zz(ctx, dec);
 if(opc==1) return fsub_z_p_zz(ctx, dec);
 if(opc==2) return fmul_z_p_zz(ctx, dec);
 if(opc==3) return fsubr_z_p_zz(ctx, dec);
 if(opc==4) return fmaxnm_z_p_zz(ctx, dec);
 if(opc==5) return fminnm_z_p_zz(ctx, dec);
 if(opc==6) return fmax_z_p_zz(ctx, dec);
 if(opc==7) return fmin_z_p_zz(ctx, dec);
 if(opc==8) return fabd_z_p_zz(ctx, dec);
 if(opc==9) return fscale_z_p_zz(ctx, dec);
 if(opc==10) return fmulx_z_p_zz(ctx, dec);
 if(opc==11) UNALLOCATED(ENC_UNALLOCATED_262);
 if(opc==12) return fdivr_z_p_zz(ctx, dec);
 if(opc==13) return fdiv_z_p_zz(ctx, dec);
 if((opc&14)==14) UNALLOCATED(ENC_UNALLOCATED_265);
 UNMATCHED;
}

int decode_iclass_sve_fp_2op_i_p_zds(context *ctx, Instruction *dec)
{
 uint32_t opc=(INSWORD>>16)&7;
 if(!opc) return fadd_z_p_zs(ctx, dec);
 if(opc==1) return fsub_z_p_zs(ctx, dec);
 if(opc==2) return fmul_z_p_zs(ctx, dec);
 if(opc==3) return fsubr_z_p_zs(ctx, dec);
 if(opc==4) return fmaxnm_z_p_zs(ctx, dec);
 if(opc==5) return fminnm_z_p_zs(ctx, dec);
 if(opc==6) return fmax_z_p_zs(ctx, dec);
 if(opc==7) return fmin_z_p_zs(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_fp_ftmad(context *ctx, Instruction *dec)
{
 return ftmad_z_zzi(ctx, dec);
}

int decode_iclass_sve_fp_2op_p_zd_b_0(context *ctx, Instruction *dec)
{
 uint32_t opc=(INSWORD>>22)&3, opc2=(INSWORD>>16)&3;
 if(!opc && opc2==2) return fcvtx_z_p_z(ctx, dec);
 if(opc==2 && !opc2) return fcvt_z_p_z(ctx, dec);
 if(opc==2 && opc2==1) return fcvt_z_p_z(ctx, dec);
 if(opc==2 && opc2==2) return bfcvt_z_p_z(ctx, dec);
 if(opc==3 && !opc2) return fcvt_z_p_z(ctx, dec);
 if(opc==3 && opc2==1) return fcvt_z_p_z(ctx, dec);
 if(opc==3 && opc2==2) return fcvt_z_p_z(ctx, dec);
 if(opc==3 && opc2==3) return fcvt_z_p_z(ctx, dec);
 if(!(opc&1) && opc2==3) UNALLOCATED(ENC_UNALLOCATED_263);
 if(!opc && !(opc2&2)) UNALLOCATED(ENC_UNALLOCATED_261);
 if(opc==1) UNALLOCATED(ENC_UNALLOCATED_272);
 UNMATCHED;
}

int decode_iclass_sve_fp_2op_p_zd_d(context *ctx, Instruction *dec)
{
 uint32_t opc=(INSWORD>>22)&3, opc2=(INSWORD>>17)&3, U=(INSWORD>>16)&1;
 if(opc==1 && opc2==1 && !U) return fcvtzs_z_p_z(ctx, dec);
 if(opc==1 && opc2==1 && U) return fcvtzu_z_p_z(ctx, dec);
 if(opc==1 && opc2==2 && !U) return fcvtzs_z_p_z(ctx, dec);
 if(opc==1 && opc2==2 && U) return fcvtzu_z_p_z(ctx, dec);
 if(opc==1 && opc2==3 && !U) return fcvtzs_z_p_z(ctx, dec);
 if(opc==1 && opc2==3 && U) return fcvtzu_z_p_z(ctx, dec);
 if(opc==2 && opc2==2 && !U) return fcvtzs_z_p_z(ctx, dec);
 if(opc==2 && opc2==2 && U) return fcvtzu_z_p_z(ctx, dec);
 if(opc==3 && !opc2 && !U) return fcvtzs_z_p_z(ctx, dec);
 if(opc==3 && !opc2 && U) return fcvtzu_z_p_z(ctx, dec);
 if(opc==3 && opc2==2 && !U) return fcvtzs_z_p_z(ctx, dec);
 if(opc==3 && opc2==2 && U) return fcvtzu_z_p_z(ctx, dec);
 if(opc==3 && opc2==3 && !U) return fcvtzs_z_p_z(ctx, dec);
 if(opc==3 && opc2==3 && U) return fcvtzu_z_p_z(ctx, dec);
 if(opc==1 && !opc2) UNALLOCATED(ENC_UNALLOCATED_274);
 if(opc==2 && opc2==3) UNALLOCATED(ENC_UNALLOCATED_278);
 if(opc==3 && opc2==1) UNALLOCATED(ENC_UNALLOCATED_280);
 if(!opc && !U) return flogb_z_p_z(ctx, dec);
 if(!opc && U) UNALLOCATED(ENC_UNALLOCATED_270);
 if(opc==2 && !(opc2&2)) UNALLOCATED(ENC_UNALLOCATED_277);
 UNMATCHED;
}

int decode_iclass_sve_fp_2op_p_zd_a(context *ctx, Instruction *dec)
{
 uint32_t opc=(INSWORD>>16)&7;
 if(!opc) return frinta_z_p_z(ctx, dec);
 if(opc==1) return frinta_z_p_z(ctx, dec);
 if(opc==2) return frinta_z_p_z(ctx, dec);
 if(opc==3) return frinta_z_p_z(ctx, dec);
 if(opc==4) return frinta_z_p_z(ctx, dec);
 if(opc==5) UNALLOCATED(ENC_UNALLOCATED_259);
 if(opc==6) return frinta_z_p_z(ctx, dec);
 if(opc==7) return frinta_z_p_z(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_fp_2op_p_zd_b_1(context *ctx, Instruction *dec)
{
 uint32_t opc=(INSWORD>>16)&3;
 if(!opc) return frecpx_z_p_z(ctx, dec);
 if(opc==1) return fsqrt_z_p_z(ctx, dec);
 if((opc&2)==2) UNALLOCATED(ENC_UNALLOCATED_266);
 UNMATCHED;
}

int decode_iclass_sve_fp_2op_p_zd_c(context *ctx, Instruction *dec)
{
 uint32_t opc=(INSWORD>>22)&3, opc2=(INSWORD>>17)&3, U=(INSWORD>>16)&1;
 if(opc==1 && opc2==1 && !U) return scvtf_z_p_z(ctx, dec);
 if(opc==1 && opc2==1 && U) return ucvtf_z_p_z(ctx, dec);
 if(opc==1 && opc2==2 && !U) return scvtf_z_p_z(ctx, dec);
 if(opc==1 && opc2==2 && U) return ucvtf_z_p_z(ctx, dec);
 if(opc==1 && opc2==3 && !U) return scvtf_z_p_z(ctx, dec);
 if(opc==1 && opc2==3 && U) return ucvtf_z_p_z(ctx, dec);
 if(opc==2 && opc2==2 && !U) return scvtf_z_p_z(ctx, dec);
 if(opc==2 && opc2==2 && U) return ucvtf_z_p_z(ctx, dec);
 if(opc==3 && !opc2 && !U) return scvtf_z_p_z(ctx, dec);
 if(opc==3 && !opc2 && U) return ucvtf_z_p_z(ctx, dec);
 if(opc==3 && opc2==2 && !U) return scvtf_z_p_z(ctx, dec);
 if(opc==3 && opc2==2 && U) return ucvtf_z_p_z(ctx, dec);
 if(opc==3 && opc2==3 && !U) return scvtf_z_p_z(ctx, dec);
 if(opc==3 && opc2==3 && U) return ucvtf_z_p_z(ctx, dec);
 if(opc==1 && !opc2) UNALLOCATED(ENC_UNALLOCATED_273);
 if(opc==2 && opc2==3) UNALLOCATED(ENC_UNALLOCATED_276);
 if(opc==3 && opc2==1) UNALLOCATED(ENC_UNALLOCATED_279);
 if(opc==2 && !(opc2&2)) UNALLOCATED(ENC_UNALLOCATED_275);
 if(!opc) UNALLOCATED(ENC_UNALLOCATED_267);
 UNMATCHED;
}

int decode_iclass_sve_fp_3op_p_pd(context *ctx, Instruction *dec)
{
 uint32_t op=(INSWORD>>15)&1, o2=(INSWORD>>13)&1, o3=(INSWORD>>4)&1;
 if(!op && !o2 && !o3) return fcmeq_p_p_zz(ctx, dec);
 if(!op && !o2 && o3) return fcmeq_p_p_zz(ctx, dec);
 if(!op && o2 && !o3) return fcmeq_p_p_zz(ctx, dec);
 if(!op && o2 && o3) return fcmeq_p_p_zz(ctx, dec);
 if(op && !o2 && !o3) return fcmeq_p_p_zz(ctx, dec);
 if(op && !o2 && o3) return facge_p_p_zz(ctx, dec);
 if(op && o2 && !o3) UNALLOCATED(ENC_UNALLOCATED_256);
 if(op && o2 && o3) return facge_p_p_zz(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_fp_3op_p_zds_a(context *ctx, Instruction *dec)
{
 uint32_t opc=(INSWORD>>13)&3;
 if(!opc) return fmla_z_p_zzz(ctx, dec);
 if(opc==1) return fmls_z_p_zzz(ctx, dec);
 if(opc==2) return fnmla_z_p_zzz(ctx, dec);
 if(opc==3) return fnmls_z_p_zzz(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_fp_3op_p_zds_b(context *ctx, Instruction *dec)
{
 uint32_t opc=(INSWORD>>13)&3;
 if(!opc) return fmad_z_p_zzz(ctx, dec);
 if(opc==1) return fmsb_z_p_zzz(ctx, dec);
 if(opc==2) return fnmad_z_p_zzz(ctx, dec);
 if(opc==3) return fnmsb_z_p_zzz(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_mem_32b_gld_vs(context *ctx, Instruction *dec)
{
 uint32_t opc=(INSWORD>>23)&3, U=(INSWORD>>14)&1, ff=(INSWORD>>13)&1;
 if(!opc && !U && !ff) return ld1sb_z_p_bz(ctx, dec);
 if(!opc && !U && ff) return ldff1sb_z_p_bz(ctx, dec);
 if(!opc && U && !ff) return ld1b_z_p_bz(ctx, dec);
 if(!opc && U && ff) return ldff1b_z_p_bz(ctx, dec);
 if(opc==1 && !U && !ff) return ld1sh_z_p_bz(ctx, dec);
 if(opc==1 && !U && ff) return ldff1sh_z_p_bz(ctx, dec);
 if(opc==1 && U && !ff) return ld1h_z_p_bz(ctx, dec);
 if(opc==1 && U && ff) return ldff1h_z_p_bz(ctx, dec);
 if(opc==2 && U && !ff) return ld1w_z_p_bz(ctx, dec);
 if(opc==2 && U && ff) return ldff1w_z_p_bz(ctx, dec);
 if(opc==2 && !U) UNALLOCATED(ENC_UNALLOCATED_281);
 UNMATCHED;
}

int decode_iclass_sve_mem_32b_gld_vi(context *ctx, Instruction *dec)
{
 uint32_t msz=(INSWORD>>23)&3, U=(INSWORD>>14)&1, ff=(INSWORD>>13)&1;
 if(!msz && !U && !ff) return ld1sb_z_p_ai(ctx, dec);
 if(!msz && !U && ff) return ldff1sb_z_p_ai(ctx, dec);
 if(!msz && U && !ff) return ld1b_z_p_ai(ctx, dec);
 if(!msz && U && ff) return ldff1b_z_p_ai(ctx, dec);
 if(msz==1 && !U && !ff) return ld1sh_z_p_ai(ctx, dec);
 if(msz==1 && !U && ff) return ldff1sh_z_p_ai(ctx, dec);
 if(msz==1 && U && !ff) return ld1h_z_p_ai(ctx, dec);
 if(msz==1 && U && ff) return ldff1h_z_p_ai(ctx, dec);
 if(msz==2 && U && !ff) return ld1w_z_p_ai(ctx, dec);
 if(msz==2 && U && ff) return ldff1w_z_p_ai(ctx, dec);
 if(msz==2 && !U) UNALLOCATED(ENC_UNALLOCATED_284);
 if(msz==3) UNALLOCATED(ENC_UNALLOCATED_286);
 UNMATCHED;
}

int decode_iclass_sve_mem_32b_gld_sv_a(context *ctx, Instruction *dec)
{
 uint32_t U=(INSWORD>>14)&1, ff=(INSWORD>>13)&1;
 if(!U && !ff) return ld1sh_z_p_bz(ctx, dec);
 if(!U && ff) return ldff1sh_z_p_bz(ctx, dec);
 if(U && !ff) return ld1h_z_p_bz(ctx, dec);
 if(U && ff) return ldff1h_z_p_bz(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_mem_32b_gld_sv_b(context *ctx, Instruction *dec)
{
 uint32_t U=(INSWORD>>14)&1, ff=(INSWORD>>13)&1;
 if(U && !ff) return ld1w_z_p_bz(ctx, dec);
 if(U && ff) return ldff1w_z_p_bz(ctx, dec);
 if(!U) UNALLOCATED(ENC_UNALLOCATED_283);
 UNMATCHED;
}

int decode_iclass_sve_mem_32b_prfm_sv(context *ctx, Instruction *dec)
{
 uint32_t msz=(INSWORD>>13)&3;
 if(!msz) return prfb_i_p_bz(ctx, dec);
 if(msz==1) return prfh_i_p_bz(ctx, dec);
 if(msz==2) return prfw_i_p_bz(ctx, dec);
 if(msz==3) return prfd_i_p_bz(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_mem_32b_prfm_vi(context *ctx, Instruction *dec)
{
 uint32_t msz=(INSWORD>>23)&3;
 if(!msz) return prfb_i_p_ai(ctx, dec);
 if(msz==1) return prfh_i_p_ai(ctx, dec);
 if(msz==2) return prfw_i_p_ai(ctx, dec);
 if(msz==3) return prfd_i_p_ai(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_mem_prfm_si(context *ctx, Instruction *dec)
{
 uint32_t msz=(INSWORD>>13)&3;
 if(!msz) return prfb_i_p_bi(ctx, dec);
 if(msz==1) return prfh_i_p_bi(ctx, dec);
 if(msz==2) return prfw_i_p_bi(ctx, dec);
 if(msz==3) return prfd_i_p_bi(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_mem_prfm_ss(context *ctx, Instruction *dec)
{
 uint32_t msz=(INSWORD>>23)&3;
 if(!msz) return prfb_i_p_br(ctx, dec);
 if(msz==1) return prfh_i_p_br(ctx, dec);
 if(msz==2) return prfw_i_p_br(ctx, dec);
 if(msz==3) return prfd_i_p_br(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_mem_ld_dup(context *ctx, Instruction *dec)
{
 uint32_t dtypeh=(INSWORD>>23)&3, dtypel=(INSWORD>>13)&3;
 if(!dtypeh && !dtypel) return ld1rb_z_p_bi(ctx, dec);
 if(!dtypeh && dtypel==1) return ld1rb_z_p_bi(ctx, dec);
 if(!dtypeh && dtypel==2) return ld1rb_z_p_bi(ctx, dec);
 if(!dtypeh && dtypel==3) return ld1rb_z_p_bi(ctx, dec);
 if(dtypeh==1 && !dtypel) return ld1rsw_z_p_bi(ctx, dec);
 if(dtypeh==1 && dtypel==1) return ld1rh_z_p_bi(ctx, dec);
 if(dtypeh==1 && dtypel==2) return ld1rh_z_p_bi(ctx, dec);
 if(dtypeh==1 && dtypel==3) return ld1rh_z_p_bi(ctx, dec);
 if(dtypeh==2 && !dtypel) return ld1rsh_z_p_bi(ctx, dec);
 if(dtypeh==2 && dtypel==1) return ld1rsh_z_p_bi(ctx, dec);
 if(dtypeh==2 && dtypel==2) return ld1rw_z_p_bi(ctx, dec);
 if(dtypeh==2 && dtypel==3) return ld1rw_z_p_bi(ctx, dec);
 if(dtypeh==3 && !dtypel) return ld1rsb_z_p_bi(ctx, dec);
 if(dtypeh==3 && dtypel==1) return ld1rsb_z_p_bi(ctx, dec);
 if(dtypeh==3 && dtypel==2) return ld1rsb_z_p_bi(ctx, dec);
 if(dtypeh==3 && dtypel==3) return ld1rd_z_p_bi(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_mem_32b_pfill(context *ctx, Instruction *dec)
{
 return ldr_p_bi(ctx, dec);
}

int decode_iclass_sve_mem_32b_fill(context *ctx, Instruction *dec)
{
 return ldr_z_bi(ctx, dec);
}

int decode_iclass_sve_mem_32b_gldnt_vs(context *ctx, Instruction *dec)
{
 uint32_t msz=(INSWORD>>23)&3, U=(INSWORD>>13)&1;
 if(!msz && !U) return ldnt1sb_z_p_ar(ctx, dec);
 if(!msz && U) return ldnt1b_z_p_ar(ctx, dec);
 if(msz==1 && !U) return ldnt1sh_z_p_ar(ctx, dec);
 if(msz==1 && U) return ldnt1h_z_p_ar(ctx, dec);
 if(msz==2 && !U) UNALLOCATED(ENC_UNALLOCATED_282);
 if(msz==2 && U) return ldnt1w_z_p_ar(ctx, dec);
 if(msz==3) UNALLOCATED(ENC_UNALLOCATED_285);
 UNMATCHED;
}

int decode_iclass_sve_mem_cldff_ss(context *ctx, Instruction *dec)
{
 uint32_t dtype=(INSWORD>>21)&15;
 if(!dtype) return ldff1b_z_p_br(ctx, dec);
 if(dtype==1) return ldff1b_z_p_br(ctx, dec);
 if(dtype==2) return ldff1b_z_p_br(ctx, dec);
 if(dtype==3) return ldff1b_z_p_br(ctx, dec);
 if(dtype==4) return ldff1sw_z_p_br(ctx, dec);
 if(dtype==5) return ldff1h_z_p_br(ctx, dec);
 if(dtype==6) return ldff1h_z_p_br(ctx, dec);
 if(dtype==7) return ldff1h_z_p_br(ctx, dec);
 if(dtype==8) return ldff1sh_z_p_br(ctx, dec);
 if(dtype==9) return ldff1sh_z_p_br(ctx, dec);
 if(dtype==10) return ldff1w_z_p_br(ctx, dec);
 if(dtype==11) return ldff1w_z_p_br(ctx, dec);
 if(dtype==12) return ldff1sb_z_p_br(ctx, dec);
 if(dtype==13) return ldff1sb_z_p_br(ctx, dec);
 if(dtype==14) return ldff1sb_z_p_br(ctx, dec);
 if(dtype==15) return ldff1d_z_p_br(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_mem_cld_si(context *ctx, Instruction *dec)
{
 uint32_t dtype=(INSWORD>>21)&15;
 if(!dtype) return ld1b_z_p_bi(ctx, dec);
 if(dtype==1) return ld1b_z_p_bi(ctx, dec);
 if(dtype==2) return ld1b_z_p_bi(ctx, dec);
 if(dtype==3) return ld1b_z_p_bi(ctx, dec);
 if(dtype==4) return ld1sw_z_p_bi(ctx, dec);
 if(dtype==5) return ld1h_z_p_bi(ctx, dec);
 if(dtype==6) return ld1h_z_p_bi(ctx, dec);
 if(dtype==7) return ld1h_z_p_bi(ctx, dec);
 if(dtype==8) return ld1sh_z_p_bi(ctx, dec);
 if(dtype==9) return ld1sh_z_p_bi(ctx, dec);
 if(dtype==10) return ld1w_z_p_bi(ctx, dec);
 if(dtype==11) return ld1w_z_p_bi(ctx, dec);
 if(dtype==12) return ld1sb_z_p_bi(ctx, dec);
 if(dtype==13) return ld1sb_z_p_bi(ctx, dec);
 if(dtype==14) return ld1sb_z_p_bi(ctx, dec);
 if(dtype==15) return ld1d_z_p_bi(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_mem_cld_ss(context *ctx, Instruction *dec)
{
 uint32_t dtype=(INSWORD>>21)&15;
 if(!dtype) return ld1b_z_p_br(ctx, dec);
 if(dtype==1) return ld1b_z_p_br(ctx, dec);
 if(dtype==2) return ld1b_z_p_br(ctx, dec);
 if(dtype==3) return ld1b_z_p_br(ctx, dec);
 if(dtype==4) return ld1sw_z_p_br(ctx, dec);
 if(dtype==5) return ld1h_z_p_br(ctx, dec);
 if(dtype==6) return ld1h_z_p_br(ctx, dec);
 if(dtype==7) return ld1h_z_p_br(ctx, dec);
 if(dtype==8) return ld1sh_z_p_br(ctx, dec);
 if(dtype==9) return ld1sh_z_p_br(ctx, dec);
 if(dtype==10) return ld1w_z_p_br(ctx, dec);
 if(dtype==11) return ld1w_z_p_br(ctx, dec);
 if(dtype==12) return ld1sb_z_p_br(ctx, dec);
 if(dtype==13) return ld1sb_z_p_br(ctx, dec);
 if(dtype==14) return ld1sb_z_p_br(ctx, dec);
 if(dtype==15) return ld1d_z_p_br(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_mem_cldnf_si(context *ctx, Instruction *dec)
{
 uint32_t dtype=(INSWORD>>21)&15;
 if(!dtype) return ldnf1b_z_p_bi(ctx, dec);
 if(dtype==1) return ldnf1b_z_p_bi(ctx, dec);
 if(dtype==2) return ldnf1b_z_p_bi(ctx, dec);
 if(dtype==3) return ldnf1b_z_p_bi(ctx, dec);
 if(dtype==4) return ldnf1sw_z_p_bi(ctx, dec);
 if(dtype==5) return ldnf1h_z_p_bi(ctx, dec);
 if(dtype==6) return ldnf1h_z_p_bi(ctx, dec);
 if(dtype==7) return ldnf1h_z_p_bi(ctx, dec);
 if(dtype==8) return ldnf1sh_z_p_bi(ctx, dec);
 if(dtype==9) return ldnf1sh_z_p_bi(ctx, dec);
 if(dtype==10) return ldnf1w_z_p_bi(ctx, dec);
 if(dtype==11) return ldnf1w_z_p_bi(ctx, dec);
 if(dtype==12) return ldnf1sb_z_p_bi(ctx, dec);
 if(dtype==13) return ldnf1sb_z_p_bi(ctx, dec);
 if(dtype==14) return ldnf1sb_z_p_bi(ctx, dec);
 if(dtype==15) return ldnf1d_z_p_bi(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_mem_cldnt_si(context *ctx, Instruction *dec)
{
 uint32_t msz=(INSWORD>>23)&3;
 if(!msz) return ldnt1b_z_p_bi(ctx, dec);
 if(msz==1) return ldnt1h_z_p_bi(ctx, dec);
 if(msz==2) return ldnt1w_z_p_bi(ctx, dec);
 if(msz==3) return ldnt1d_z_p_bi(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_mem_cldnt_ss(context *ctx, Instruction *dec)
{
 uint32_t msz=(INSWORD>>23)&3;
 if(!msz) return ldnt1b_z_p_br(ctx, dec);
 if(msz==1) return ldnt1h_z_p_br(ctx, dec);
 if(msz==2) return ldnt1w_z_p_br(ctx, dec);
 if(msz==3) return ldnt1d_z_p_br(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_mem_ldqr_si(context *ctx, Instruction *dec)
{
 uint32_t msz=(INSWORD>>23)&3, ssz=(INSWORD>>21)&3;
 if(!msz && !ssz) return ld1rqb_z_p_bi(ctx, dec);
 if(!msz && ssz==1) return ld1rob_z_p_bi(ctx, dec);
 if(msz==1 && !ssz) return ld1rqh_z_p_bi(ctx, dec);
 if(msz==1 && ssz==1) return ld1roh_z_p_bi(ctx, dec);
 if(msz==2 && !ssz) return ld1rqw_z_p_bi(ctx, dec);
 if(msz==2 && ssz==1) return ld1row_z_p_bi(ctx, dec);
 if(msz==3 && !ssz) return ld1rqd_z_p_bi(ctx, dec);
 if(msz==3 && ssz==1) return ld1rod_z_p_bi(ctx, dec);
 if((ssz&2)==2) UNALLOCATED(ENC_UNALLOCATED_288);
 UNMATCHED;
}

int decode_iclass_sve_mem_ldqr_ss(context *ctx, Instruction *dec)
{
 uint32_t msz=(INSWORD>>23)&3, ssz=(INSWORD>>21)&3;
 if(!msz && !ssz) return ld1rqb_z_p_br(ctx, dec);
 if(!msz && ssz==1) return ld1rob_z_p_br(ctx, dec);
 if(msz==1 && !ssz) return ld1rqh_z_p_br(ctx, dec);
 if(msz==1 && ssz==1) return ld1roh_z_p_br(ctx, dec);
 if(msz==2 && !ssz) return ld1rqw_z_p_br(ctx, dec);
 if(msz==2 && ssz==1) return ld1row_z_p_br(ctx, dec);
 if(msz==3 && !ssz) return ld1rqd_z_p_br(ctx, dec);
 if(msz==3 && ssz==1) return ld1rod_z_p_br(ctx, dec);
 if((ssz&2)==2) UNALLOCATED(ENC_UNALLOCATED_287);
 UNMATCHED;
}

int decode_iclass_sve_mem_eld_si(context *ctx, Instruction *dec)
{
 uint32_t msz=(INSWORD>>23)&3, opc=(INSWORD>>21)&3;
 if(!msz && opc==1) return ld2b_z_p_bi(ctx, dec);
 if(!msz && opc==2) return ld3b_z_p_bi(ctx, dec);
 if(!msz && opc==3) return ld4b_z_p_bi(ctx, dec);
 if(msz==1 && opc==1) return ld2h_z_p_bi(ctx, dec);
 if(msz==1 && opc==2) return ld3h_z_p_bi(ctx, dec);
 if(msz==1 && opc==3) return ld4h_z_p_bi(ctx, dec);
 if(msz==2 && opc==1) return ld2w_z_p_bi(ctx, dec);
 if(msz==2 && opc==2) return ld3w_z_p_bi(ctx, dec);
 if(msz==2 && opc==3) return ld4w_z_p_bi(ctx, dec);
 if(msz==3 && opc==1) return ld2d_z_p_bi(ctx, dec);
 if(msz==3 && opc==2) return ld3d_z_p_bi(ctx, dec);
 if(msz==3 && opc==3) return ld4d_z_p_bi(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_mem_eld_ss(context *ctx, Instruction *dec)
{
 uint32_t msz=(INSWORD>>23)&3, opc=(INSWORD>>21)&3;
 if(!msz && opc==1) return ld2b_z_p_br(ctx, dec);
 if(!msz && opc==2) return ld3b_z_p_br(ctx, dec);
 if(!msz && opc==3) return ld4b_z_p_br(ctx, dec);
 if(msz==1 && opc==1) return ld2h_z_p_br(ctx, dec);
 if(msz==1 && opc==2) return ld3h_z_p_br(ctx, dec);
 if(msz==1 && opc==3) return ld4h_z_p_br(ctx, dec);
 if(msz==2 && opc==1) return ld2w_z_p_br(ctx, dec);
 if(msz==2 && opc==2) return ld3w_z_p_br(ctx, dec);
 if(msz==2 && opc==3) return ld4w_z_p_br(ctx, dec);
 if(msz==3 && opc==1) return ld2d_z_p_br(ctx, dec);
 if(msz==3 && opc==2) return ld3d_z_p_br(ctx, dec);
 if(msz==3 && opc==3) return ld4d_z_p_br(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_mem_64b_gld_sv(context *ctx, Instruction *dec)
{
 uint32_t opc=(INSWORD>>23)&3, U=(INSWORD>>14)&1, ff=(INSWORD>>13)&1;
 if(opc==1 && !U && !ff) return ld1sh_z_p_bz(ctx, dec);
 if(opc==1 && !U && ff) return ldff1sh_z_p_bz(ctx, dec);
 if(opc==1 && U && !ff) return ld1h_z_p_bz(ctx, dec);
 if(opc==1 && U && ff) return ldff1h_z_p_bz(ctx, dec);
 if(opc==2 && !U && !ff) return ld1sw_z_p_bz(ctx, dec);
 if(opc==2 && !U && ff) return ldff1sw_z_p_bz(ctx, dec);
 if(opc==2 && U && !ff) return ld1w_z_p_bz(ctx, dec);
 if(opc==2 && U && ff) return ldff1w_z_p_bz(ctx, dec);
 if(opc==3 && U && !ff) return ld1d_z_p_bz(ctx, dec);
 if(opc==3 && U && ff) return ldff1d_z_p_bz(ctx, dec);
 if(opc==3 && !U) UNALLOCATED(ENC_UNALLOCATED_291);
 UNMATCHED;
}

int decode_iclass_sve_mem_64b_gld_sv2(context *ctx, Instruction *dec)
{
 uint32_t opc=(INSWORD>>23)&3, U=(INSWORD>>14)&1, ff=(INSWORD>>13)&1;
 if(opc==1 && !U && !ff) return ld1sh_z_p_bz(ctx, dec);
 if(opc==1 && !U && ff) return ldff1sh_z_p_bz(ctx, dec);
 if(opc==1 && U && !ff) return ld1h_z_p_bz(ctx, dec);
 if(opc==1 && U && ff) return ldff1h_z_p_bz(ctx, dec);
 if(opc==2 && !U && !ff) return ld1sw_z_p_bz(ctx, dec);
 if(opc==2 && !U && ff) return ldff1sw_z_p_bz(ctx, dec);
 if(opc==2 && U && !ff) return ld1w_z_p_bz(ctx, dec);
 if(opc==2 && U && ff) return ldff1w_z_p_bz(ctx, dec);
 if(opc==3 && U && !ff) return ld1d_z_p_bz(ctx, dec);
 if(opc==3 && U && ff) return ldff1d_z_p_bz(ctx, dec);
 if(opc==3 && !U) UNALLOCATED(ENC_UNALLOCATED_294);
 UNMATCHED;
}

int decode_iclass_sve_mem_64b_gld_vs2(context *ctx, Instruction *dec)
{
 uint32_t msz=(INSWORD>>23)&3, U=(INSWORD>>14)&1, ff=(INSWORD>>13)&1;
 if(!msz && !U && !ff) return ld1sb_z_p_bz(ctx, dec);
 if(!msz && !U && ff) return ldff1sb_z_p_bz(ctx, dec);
 if(!msz && U && !ff) return ld1b_z_p_bz(ctx, dec);
 if(!msz && U && ff) return ldff1b_z_p_bz(ctx, dec);
 if(msz==1 && !U && !ff) return ld1sh_z_p_bz(ctx, dec);
 if(msz==1 && !U && ff) return ldff1sh_z_p_bz(ctx, dec);
 if(msz==1 && U && !ff) return ld1h_z_p_bz(ctx, dec);
 if(msz==1 && U && ff) return ldff1h_z_p_bz(ctx, dec);
 if(msz==2 && !U && !ff) return ld1sw_z_p_bz(ctx, dec);
 if(msz==2 && !U && ff) return ldff1sw_z_p_bz(ctx, dec);
 if(msz==2 && U && !ff) return ld1w_z_p_bz(ctx, dec);
 if(msz==2 && U && ff) return ldff1w_z_p_bz(ctx, dec);
 if(msz==3 && U && !ff) return ld1d_z_p_bz(ctx, dec);
 if(msz==3 && U && ff) return ldff1d_z_p_bz(ctx, dec);
 if(msz==3 && !U) UNALLOCATED(ENC_UNALLOCATED_293);
 UNMATCHED;
}

int decode_iclass_sve_mem_64b_gld_vs(context *ctx, Instruction *dec)
{
 uint32_t msz=(INSWORD>>23)&3, U=(INSWORD>>14)&1, ff=(INSWORD>>13)&1;
 if(!msz && !U && !ff) return ld1sb_z_p_bz(ctx, dec);
 if(!msz && !U && ff) return ldff1sb_z_p_bz(ctx, dec);
 if(!msz && U && !ff) return ld1b_z_p_bz(ctx, dec);
 if(!msz && U && ff) return ldff1b_z_p_bz(ctx, dec);
 if(msz==1 && !U && !ff) return ld1sh_z_p_bz(ctx, dec);
 if(msz==1 && !U && ff) return ldff1sh_z_p_bz(ctx, dec);
 if(msz==1 && U && !ff) return ld1h_z_p_bz(ctx, dec);
 if(msz==1 && U && ff) return ldff1h_z_p_bz(ctx, dec);
 if(msz==2 && !U && !ff) return ld1sw_z_p_bz(ctx, dec);
 if(msz==2 && !U && ff) return ldff1sw_z_p_bz(ctx, dec);
 if(msz==2 && U && !ff) return ld1w_z_p_bz(ctx, dec);
 if(msz==2 && U && ff) return ldff1w_z_p_bz(ctx, dec);
 if(msz==3 && U && !ff) return ld1d_z_p_bz(ctx, dec);
 if(msz==3 && U && ff) return ldff1d_z_p_bz(ctx, dec);
 if(msz==3 && !U) UNALLOCATED(ENC_UNALLOCATED_289);
 UNMATCHED;
}

int decode_iclass_sve_mem_64b_gld_vi(context *ctx, Instruction *dec)
{
 uint32_t msz=(INSWORD>>23)&3, U=(INSWORD>>14)&1, ff=(INSWORD>>13)&1;
 if(!msz && !U && !ff) return ld1sb_z_p_ai(ctx, dec);
 if(!msz && !U && ff) return ldff1sb_z_p_ai(ctx, dec);
 if(!msz && U && !ff) return ld1b_z_p_ai(ctx, dec);
 if(!msz && U && ff) return ldff1b_z_p_ai(ctx, dec);
 if(msz==1 && !U && !ff) return ld1sh_z_p_ai(ctx, dec);
 if(msz==1 && !U && ff) return ldff1sh_z_p_ai(ctx, dec);
 if(msz==1 && U && !ff) return ld1h_z_p_ai(ctx, dec);
 if(msz==1 && U && ff) return ldff1h_z_p_ai(ctx, dec);
 if(msz==2 && !U && !ff) return ld1sw_z_p_ai(ctx, dec);
 if(msz==2 && !U && ff) return ldff1sw_z_p_ai(ctx, dec);
 if(msz==2 && U && !ff) return ld1w_z_p_ai(ctx, dec);
 if(msz==2 && U && ff) return ldff1w_z_p_ai(ctx, dec);
 if(msz==3 && U && !ff) return ld1d_z_p_ai(ctx, dec);
 if(msz==3 && U && ff) return ldff1d_z_p_ai(ctx, dec);
 if(msz==3 && !U) UNALLOCATED(ENC_UNALLOCATED_292);
 UNMATCHED;
}

int decode_iclass_sve_mem_64b_prfm_sv2(context *ctx, Instruction *dec)
{
 uint32_t msz=(INSWORD>>13)&3;
 if(!msz) return prfb_i_p_bz(ctx, dec);
 if(msz==1) return prfh_i_p_bz(ctx, dec);
 if(msz==2) return prfw_i_p_bz(ctx, dec);
 if(msz==3) return prfd_i_p_bz(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_mem_64b_prfm_sv(context *ctx, Instruction *dec)
{
 uint32_t msz=(INSWORD>>13)&3;
 if(!msz) return prfb_i_p_bz(ctx, dec);
 if(msz==1) return prfh_i_p_bz(ctx, dec);
 if(msz==2) return prfw_i_p_bz(ctx, dec);
 if(msz==3) return prfd_i_p_bz(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_mem_64b_prfm_vi(context *ctx, Instruction *dec)
{
 uint32_t msz=(INSWORD>>23)&3;
 if(!msz) return prfb_i_p_ai(ctx, dec);
 if(msz==1) return prfh_i_p_ai(ctx, dec);
 if(msz==2) return prfw_i_p_ai(ctx, dec);
 if(msz==3) return prfd_i_p_ai(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_mem_64b_gldnt_vs(context *ctx, Instruction *dec)
{
 uint32_t msz=(INSWORD>>23)&3, U=(INSWORD>>14)&1;
 if(!msz && !U) return ldnt1sb_z_p_ar(ctx, dec);
 if(!msz && U) return ldnt1b_z_p_ar(ctx, dec);
 if(msz==1 && !U) return ldnt1sh_z_p_ar(ctx, dec);
 if(msz==1 && U) return ldnt1h_z_p_ar(ctx, dec);
 if(msz==2 && !U) return ldnt1sw_z_p_ar(ctx, dec);
 if(msz==2 && U) return ldnt1w_z_p_ar(ctx, dec);
 if(msz==3 && !U) UNALLOCATED(ENC_UNALLOCATED_290);
 if(msz==3 && U) return ldnt1d_z_p_ar(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_mem_cst_ss(context *ctx, Instruction *dec)
{
 uint32_t opc=(INSWORD>>22)&7, o2=(INSWORD>>21)&1;
 if(opc==7 && !o2) UNALLOCATED(ENC_UNALLOCATED_299);
 if(opc==7 && o2) return st1d_z_p_br(ctx, dec);
 if(!(opc&6)) return st1b_z_p_br(ctx, dec);
 if((opc&6)==2) return st1h_z_p_br(ctx, dec);
 if((opc&6)==4) return st1w_z_p_br(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_mem_pspill(context *ctx, Instruction *dec)
{
 return str_p_bi(ctx, dec);
}

int decode_iclass_sve_mem_spill(context *ctx, Instruction *dec)
{
 return str_z_bi(ctx, dec);
}

int decode_iclass_sve_mem_cstnt_ss(context *ctx, Instruction *dec)
{
 uint32_t msz=(INSWORD>>23)&3;
 if(!msz) return stnt1b_z_p_br(ctx, dec);
 if(msz==1) return stnt1h_z_p_br(ctx, dec);
 if(msz==2) return stnt1w_z_p_br(ctx, dec);
 if(msz==3) return stnt1d_z_p_br(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_mem_est_ss(context *ctx, Instruction *dec)
{
 uint32_t msz=(INSWORD>>23)&3, opc=(INSWORD>>21)&3;
 if(!msz && opc==1) return st2b_z_p_br(ctx, dec);
 if(!msz && opc==2) return st3b_z_p_br(ctx, dec);
 if(!msz && opc==3) return st4b_z_p_br(ctx, dec);
 if(msz==1 && opc==1) return st2h_z_p_br(ctx, dec);
 if(msz==1 && opc==2) return st3h_z_p_br(ctx, dec);
 if(msz==1 && opc==3) return st4h_z_p_br(ctx, dec);
 if(msz==2 && opc==1) return st2w_z_p_br(ctx, dec);
 if(msz==2 && opc==2) return st3w_z_p_br(ctx, dec);
 if(msz==2 && opc==3) return st4w_z_p_br(ctx, dec);
 if(msz==3 && opc==1) return st2d_z_p_br(ctx, dec);
 if(msz==3 && opc==2) return st3d_z_p_br(ctx, dec);
 if(msz==3 && opc==3) return st4d_z_p_br(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_mem_sstnt_32b_vs(context *ctx, Instruction *dec)
{
 uint32_t msz=(INSWORD>>23)&3;
 if(!msz) return stnt1b_z_p_ar(ctx, dec);
 if(msz==1) return stnt1h_z_p_ar(ctx, dec);
 if(msz==2) return stnt1w_z_p_ar(ctx, dec);
 if(msz==3) UNALLOCATED(ENC_UNALLOCATED_298);
 UNMATCHED;
}

int decode_iclass_sve_mem_sstnt_64b_vs(context *ctx, Instruction *dec)
{
 uint32_t msz=(INSWORD>>23)&3;
 if(!msz) return stnt1b_z_p_ar(ctx, dec);
 if(msz==1) return stnt1h_z_p_ar(ctx, dec);
 if(msz==2) return stnt1w_z_p_ar(ctx, dec);
 if(msz==3) return stnt1d_z_p_ar(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_mem_sst_vi_b(context *ctx, Instruction *dec)
{
 uint32_t msz=(INSWORD>>23)&3;
 if(!msz) return st1b_z_p_ai(ctx, dec);
 if(msz==1) return st1h_z_p_ai(ctx, dec);
 if(msz==2) return st1w_z_p_ai(ctx, dec);
 if(msz==3) UNALLOCATED(ENC_UNALLOCATED_302);
 UNMATCHED;
}

int decode_iclass_sve_mem_sst_sv2(context *ctx, Instruction *dec)
{
 uint32_t msz=(INSWORD>>23)&3;
 if(!msz) UNALLOCATED(ENC_UNALLOCATED_296);
 if(msz==1) return st1h_z_p_bz(ctx, dec);
 if(msz==2) return st1w_z_p_bz(ctx, dec);
 if(msz==3) return st1d_z_p_bz(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_mem_sst_vs2(context *ctx, Instruction *dec)
{
 uint32_t msz=(INSWORD>>23)&3;
 if(!msz) return st1b_z_p_bz(ctx, dec);
 if(msz==1) return st1h_z_p_bz(ctx, dec);
 if(msz==2) return st1w_z_p_bz(ctx, dec);
 if(msz==3) return st1d_z_p_bz(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_mem_sst_vi_a(context *ctx, Instruction *dec)
{
 uint32_t msz=(INSWORD>>23)&3;
 if(!msz) return st1b_z_p_ai(ctx, dec);
 if(msz==1) return st1h_z_p_ai(ctx, dec);
 if(msz==2) return st1w_z_p_ai(ctx, dec);
 if(msz==3) return st1d_z_p_ai(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_mem_cstnt_si(context *ctx, Instruction *dec)
{
 uint32_t msz=(INSWORD>>23)&3;
 if(!msz) return stnt1b_z_p_bi(ctx, dec);
 if(msz==1) return stnt1h_z_p_bi(ctx, dec);
 if(msz==2) return stnt1w_z_p_bi(ctx, dec);
 if(msz==3) return stnt1d_z_p_bi(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_mem_cst_si(context *ctx, Instruction *dec)
{
 uint32_t msz=(INSWORD>>23)&3;
 if(!msz) return st1b_z_p_bi(ctx, dec);
 if(msz==1) return st1h_z_p_bi(ctx, dec);
 if(msz==2) return st1w_z_p_bi(ctx, dec);
 if(msz==3) return st1d_z_p_bi(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_mem_est_si(context *ctx, Instruction *dec)
{
 uint32_t msz=(INSWORD>>23)&3, opc=(INSWORD>>21)&3;
 if(!msz && opc==1) return st2b_z_p_bi(ctx, dec);
 if(!msz && opc==2) return st3b_z_p_bi(ctx, dec);
 if(!msz && opc==3) return st4b_z_p_bi(ctx, dec);
 if(msz==1 && opc==1) return st2h_z_p_bi(ctx, dec);
 if(msz==1 && opc==2) return st3h_z_p_bi(ctx, dec);
 if(msz==1 && opc==3) return st4h_z_p_bi(ctx, dec);
 if(msz==2 && opc==1) return st2w_z_p_bi(ctx, dec);
 if(msz==2 && opc==2) return st3w_z_p_bi(ctx, dec);
 if(msz==2 && opc==3) return st4w_z_p_bi(ctx, dec);
 if(msz==3 && opc==1) return st2d_z_p_bi(ctx, dec);
 if(msz==3 && opc==2) return st3d_z_p_bi(ctx, dec);
 if(msz==3 && opc==3) return st4d_z_p_bi(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_mem_sst_sv_b(context *ctx, Instruction *dec)
{
 uint32_t msz=(INSWORD>>23)&3;
 if(!msz) UNALLOCATED(ENC_UNALLOCATED_297);
 if(msz==1) return st1h_z_p_bz(ctx, dec);
 if(msz==2) return st1w_z_p_bz(ctx, dec);
 if(msz==3) UNALLOCATED(ENC_UNALLOCATED_301);
 UNMATCHED;
}

int decode_iclass_sve_mem_sst_vs_b(context *ctx, Instruction *dec)
{
 uint32_t msz=(INSWORD>>23)&3;
 if(!msz) return st1b_z_p_bz(ctx, dec);
 if(msz==1) return st1h_z_p_bz(ctx, dec);
 if(msz==2) return st1w_z_p_bz(ctx, dec);
 if(msz==3) UNALLOCATED(ENC_UNALLOCATED_300);
 UNMATCHED;
}

int decode_iclass_sve_mem_sst_sv_a(context *ctx, Instruction *dec)
{
 uint32_t msz=(INSWORD>>23)&3;
 if(!msz) UNALLOCATED(ENC_UNALLOCATED_295);
 if(msz==1) return st1h_z_p_bz(ctx, dec);
 if(msz==2) return st1w_z_p_bz(ctx, dec);
 if(msz==3) return st1d_z_p_bz(ctx, dec);
 UNMATCHED;
}

int decode_iclass_sve_mem_sst_vs_a(context *ctx, Instruction *dec)
{
 uint32_t msz=(INSWORD>>23)&3;
 if(!msz) return st1b_z_p_bz(ctx, dec);
 if(msz==1) return st1h_z_p_bz(ctx, dec);
 if(msz==2) return st1w_z_p_bz(ctx, dec);
 if(msz==3) return st1d_z_p_bz(ctx, dec);
 UNMATCHED;
}
