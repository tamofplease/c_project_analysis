# 1 "project/radare2/libr/asm/arch/arm/v35arm64/arch-arm64/disassembler/decode0.c"

#include <stddef.h>
#include <stdbool.h>

#include "decode.h"
#include "decode1.h"
#include "pcode.h"

int decode_spec(context *ctx, Instruction *dec)
{
 uint32_t op0, op1, op2, op3, op4;

 dec->insword = ctx->insword;

 op0 = (INSWORD>>25)&15;
 if(!op0) {

  op0 = INSWORD>>29;
  op1 = (INSWORD>>16)&0x1ff;
  if(!op0 && !op1)
   return decode_iclass_perm_undef(ctx, dec);
  if(op1)
   UNALLOCATED(ENC_UNKNOWN);
  if(op0)
   UNALLOCATED(ENC_UNKNOWN);
  RESERVED(ENC_UNKNOWN);
 }
 if(op0==1)
  UNALLOCATED(ENC_UNKNOWN);
 if(op0==2) {

  op0 = INSWORD>>29;
  op1 = (INSWORD>>23)&3;
  op2 = (INSWORD>>17)&0x1f;
  op3 = (INSWORD>>10)&0x3f;
  if(!op0 && !(op1&2) && !(op2&0x10) && (op3&0x10)==0x10) {

   op0 = (INSWORD>>15)&1;
   if(!op0)
    return decode_iclass_sve_int_mlas_vvv_pred(ctx, dec);
   if(op0)
    return decode_iclass_sve_int_mladdsub_vvv_pred(ctx, dec);
   UNMATCHED;
  }
  if(!op0 && !(op1&2) && !(op2&0x10) && !(op3&0x38)) {

   op0 = (INSWORD>>18)&7;
   if(!(op0&6))
    return decode_iclass_sve_int_bin_pred_arit_0(ctx, dec);
   if((op0&6)==2)
    return decode_iclass_sve_int_bin_pred_arit_1(ctx, dec);
   if(op0==4)
    return decode_iclass_sve_int_bin_pred_arit_2(ctx, dec);
   if(op0==5)
    return decode_iclass_sve_int_bin_pred_div(ctx, dec);
   if((op0&6)==6)
    return decode_iclass_sve_int_bin_pred_log(ctx, dec);
   UNMATCHED;
  }
  if(!op0 && !(op1&2) && !(op2&0x10) && (op3&0x38)==8) {

   op0 = (INSWORD>>18)&7;
   if(!op0)
    return decode_iclass_sve_int_reduce_0(ctx, dec);
   if(op0==2)
    return decode_iclass_sve_int_reduce_1(ctx, dec);
   if((op0&5)==1)
    UNALLOCATED(ENC_UNKNOWN);
   if((op0&6)==4)
    return decode_iclass_sve_int_movprfx_pred(ctx, dec);
   if(op0==6)
    return decode_iclass_sve_int_reduce_2(ctx, dec);
   if(op0==7)
    UNALLOCATED(ENC_UNKNOWN);
   UNMATCHED;
  }
  if(!op0 && !(op1&2) && !(op2&0x10) && (op3&0x38)==0x20) {

   op0 = (INSWORD>>19)&3;
   if(!(op0&2))
    return decode_iclass_sve_int_bin_pred_shift_0(ctx, dec);
   if(op0==2)
    return decode_iclass_sve_int_bin_pred_shift_1(ctx, dec);
   if(op0==3)
    return decode_iclass_sve_int_bin_pred_shift_2(ctx, dec);
   UNMATCHED;
  }
  if(!op0 && !(op1&2) && !(op2&0x10) && (op3&0x38)==0x28) {

   op0 = (INSWORD>>19)&3;
   if(!(op0&2))
    UNALLOCATED(ENC_UNKNOWN);
   if(op0==2)
    return decode_iclass_sve_int_un_pred_arit_0(ctx, dec);
   if(op0==3)
    return decode_iclass_sve_int_un_pred_arit_1(ctx, dec);
   UNMATCHED;
  }
  if(!op0 && !(op1&2) && (op2&0x10)==0x10 && !(op3&0x38))
   return decode_iclass_sve_int_bin_cons_arit_0(ctx, dec);
  if(!op0 && !(op1&2) && (op2&0x10)==0x10 && (op3&0x38)==8) {

   op0 = (INSWORD>>10)&7;
   if(!(op0&4))
    UNALLOCATED(ENC_UNKNOWN);
   if(op0==4)
    return decode_iclass_sve_int_bin_cons_log(ctx, dec);
   if(op0==5)
    return decode_iclass_sve_int_rotate_imm(ctx, dec);
   if((op0&6)==6)
    return decode_iclass_sve_int_tern_log(ctx, dec);
   UNMATCHED;
  }
  if(!op0 && !(op1&2) && (op2&0x10)==0x10 && (op3&0x3c)==0x10) {

   op0 = (INSWORD>>10)&3;
   if(!op0)
    return decode_iclass_sve_int_index_ii(ctx, dec);
   if(op0==1)
    return decode_iclass_sve_int_index_ri(ctx, dec);
   if(op0==2)
    return decode_iclass_sve_int_index_ir(ctx, dec);
   if(op0==3)
    return decode_iclass_sve_int_index_rr(ctx, dec);
   UNMATCHED;
  }
  if(!op0 && !(op1&2) && (op2&0x10)==0x10 && (op3&0x3c)==0x14) {

   op0 = (INSWORD>>23)&1;
   op1 = (INSWORD>>11)&1;
   if(!op0 && !op1)
    return decode_iclass_sve_int_arith_vl(ctx, dec);
   if(op0 && !op1)
    return decode_iclass_sve_int_read_vl_a(ctx, dec);
   if(op1)
    UNALLOCATED(ENC_UNKNOWN);
   UNMATCHED;
  }
  if(!op0 && !(op1&2) && (op2&0x10)==0x10 && (op3&0x38)==0x18) {

   op0 = (INSWORD>>11)&3;
   if(!(op0&2))
    return decode_iclass_sve_int_mul_b(ctx, dec);
   if(op0==2)
    return decode_iclass_sve_int_sqdmulh(ctx, dec);
   if(op0==3)
    UNALLOCATED(ENC_UNKNOWN);
   UNMATCHED;
  }
  if(!op0 && !(op1&2) && (op2&0x10)==0x10 && (op3&0x38)==0x20) {

   op0 = (INSWORD>>12)&1;
   if(!op0)
    return decode_iclass_sve_int_bin_cons_shift_a(ctx, dec);
   if(op0)
    return decode_iclass_sve_int_bin_cons_shift_b(ctx, dec);
   UNMATCHED;
  }
  if(!op0 && !(op1&2) && (op2&0x10)==0x10 && (op3&0x3c)==0x28)
   return decode_iclass_sve_int_bin_cons_misc_0_a(ctx, dec);
  if(!op0 && !(op1&2) && (op2&0x10)==0x10 && (op3&0x3c)==0x2c) {

   op0 = (INSWORD>>10)&3;
   if(!(op0&2))
    return decode_iclass_sve_int_bin_cons_misc_0_b(ctx, dec);
   if(op0==2)
    return decode_iclass_sve_int_bin_cons_misc_0_c(ctx, dec);
   if(op0==3)
    return decode_iclass_sve_int_bin_cons_misc_0_d(ctx, dec);
   UNMATCHED;
  }
  if(!op0 && !(op1&2) && (op2&0x10)==0x10 && (op3&0x30)==0x30) {

   op0 = (INSWORD>>20)&1;
   op1 = (INSWORD>>11)&7;
   if(!op0 && !(op1&6))
    return decode_iclass_sve_int_countvlv0(ctx, dec);
   if(!op0 && op1==4)
    return decode_iclass_sve_int_count(ctx, dec);
   if(!op0 && op1==5)
    UNALLOCATED(ENC_UNKNOWN);
   if(op0 && !op1)
    return decode_iclass_sve_int_countvlv1(ctx, dec);
   if(op0 && op1==4)
    return decode_iclass_sve_int_pred_pattern_a(ctx, dec);
   if(op0 && (op1&3)==1)
    UNALLOCATED(ENC_UNKNOWN);
   if((op1&6)==2)
    UNALLOCATED(ENC_UNKNOWN);
   if((op1&6)==6)
    return decode_iclass_sve_int_pred_pattern_b(ctx, dec);
   UNMATCHED;
  }
  if(!op0 && (op1&2)==2 && !(op2&0x18)) {

   op0 = (INSWORD>>22)&3;
   op1 = (INSWORD>>18)&3;
   if(op0==3 && !op1)
    return decode_iclass_sve_int_dup_mask_imm(ctx, dec);
   if(op0!=3 && !op1)
    return decode_iclass_sve_int_log_imm(ctx, dec);
   if(op1)
    UNALLOCATED(ENC_UNKNOWN);
   UNMATCHED;
  }
  if(!op0 && (op1&2)==2 && (op2&0x18)==8) {

   op0 = (INSWORD>>13)&7;
   if(!(op0&4))
    return decode_iclass_sve_int_dup_imm_pred(ctx, dec);
   if((op0&6)==4)
    UNALLOCATED(ENC_UNKNOWN);
   if(op0==6)
    return decode_iclass_sve_int_dup_fpimm_pred(ctx, dec);
   if(op0==7)
    UNALLOCATED(ENC_UNKNOWN);
   UNMATCHED;
  }
  if(!op0 && (op1&2)==2 && (op2&0x10)==0x10 && op3==8)
   return decode_iclass_sve_int_perm_dup_i(ctx, dec);
  if(!op0 && (op1&2)==2 && (op2&0x10)==0x10 && op3==9)
   UNALLOCATED(ENC_UNKNOWN);
  if(!op0 && (op1&2)==2 && (op2&0x10)==0x10 && (op3&0x3e)==10)
   return decode_iclass_sve_int_perm_tbl_3src(ctx, dec);
  if(!op0 && (op1&2)==2 && (op2&0x10)==0x10 && (op3&0x3d)==13)
   UNALLOCATED(ENC_UNKNOWN);
  if(!op0 && (op1&2)==2 && (op2&0x10)==0x10 && op3==12)
   return decode_iclass_sve_int_perm_tbl(ctx, dec);
  if(!op0 && (op1&2)==2 && (op2&0x10)==0x10 && op3==14) {

   op0 = (INSWORD>>19)&3;
   op1 = (INSWORD>>16)&7;
   if(!op0 && !op1)
    return decode_iclass_sve_int_perm_dup_r(ctx, dec);
   if(!op0 && op1==4)
    return decode_iclass_sve_int_perm_insrs(ctx, dec);
   if(!op0 && (op1&3)==2)
    UNALLOCATED(ENC_UNKNOWN);
   if(!op0 && op1&1)
    UNALLOCATED(ENC_UNKNOWN);
   if(op0==1)
    UNALLOCATED(ENC_UNKNOWN);
   if(op0==2 && !(op1&4))
    return decode_iclass_sve_int_perm_unpk(ctx, dec);
   if(op0==2 && op1==4)
    return decode_iclass_sve_int_perm_insrv(ctx, dec);
   if(op0==2 && op1==6)
    UNALLOCATED(ENC_UNKNOWN);
   if(op0==2 && (op1&5)==5)
    UNALLOCATED(ENC_UNKNOWN);
   if(op0==3 && !op1)
    return decode_iclass_sve_int_perm_reverse_z(ctx, dec);
   if(op0==3 && op1)
    UNALLOCATED(ENC_UNKNOWN);
   UNMATCHED;
  }
  if(!op0 && (op1&2)==2 && (op2&0x10)==0x10 && (op3&0x38)==0x10) {

   op0 = (INSWORD>>22)&3;
   op1 = (INSWORD>>16)&0x1f;
   op2 = (INSWORD>>9)&15;
   op3 = (INSWORD>>4)&1;
   if(!op0 && (op1&0x1e)==0x10 && !op2 && !op3)
    return decode_iclass_sve_int_perm_punpk(ctx, dec);
   if(op0==1 && (op1&0x1e)==0x10 && !op2 && !op3)
    UNALLOCATED(ENC_UNKNOWN);
   if(op0==2 && (op1&0x1e)==0x10 && !op2 && !op3)
    UNALLOCATED(ENC_UNKNOWN);
   if(op0==3 && (op1&0x1e)==0x10 && !op2 && !op3)
    UNALLOCATED(ENC_UNKNOWN);
   if(!(op1&0x10) && !(op2&1) && !op3)
    return decode_iclass_sve_int_perm_bin_perm_pp(ctx, dec);
   if(!(op1&0x10) && op2&1 && !op3)
    UNALLOCATED(ENC_UNKNOWN);
   if(op1==0x14 && !op2 && !op3)
    return decode_iclass_sve_int_perm_reverse_p(ctx, dec);
   if(op1==0x15 && !op2 && !op3)
    UNALLOCATED(ENC_UNKNOWN);
   if((op1&0x1a)==0x10 && op2==8 && !op3)
    UNALLOCATED(ENC_UNKNOWN);
   if((op1&0x1a)==0x10 && (op2&7)==4 && !op3)
    UNALLOCATED(ENC_UNKNOWN);
   if((op1&0x1a)==0x10 && (op2&3)==2 && !op3)
    UNALLOCATED(ENC_UNKNOWN);
   if((op1&0x1a)==0x10 && op2&1 && !op3)
    UNALLOCATED(ENC_UNKNOWN);
   if((op1&0x1a)==0x12 && !op3)
    UNALLOCATED(ENC_UNKNOWN);
   if((op1&0x18)==0x18 && !op3)
    UNALLOCATED(ENC_UNKNOWN);
   if(op3)
    UNALLOCATED(ENC_UNKNOWN);
   UNMATCHED;
  }
  if(!op0 && (op1&2)==2 && (op2&0x10)==0x10 && (op3&0x38)==0x18)
   return decode_iclass_sve_int_perm_bin_perm_zz(ctx, dec);
  if(!op0 && (op1&2)==2 && (op2&0x10)==0x10 && (op3&0x30)==0x20) {

   op0 = (INSWORD>>20)&1;
   op1 = (INSWORD>>17)&7;
   op2 = (INSWORD>>16)&1;
   op3 = (INSWORD>>13)&1;
   if(!op0 && !op1 && !op2 && !op3)
    return decode_iclass_sve_int_perm_cpy_v(ctx, dec);
   if(!op0 && !op1 && op2 && !op3)
    return decode_iclass_sve_int_perm_compact(ctx, dec);
   if(!op0 && !op1 && op3)
    return decode_iclass_sve_int_perm_last_r(ctx, dec);
   if(!op0 && op1==1 && !op3)
    return decode_iclass_sve_int_perm_last_v(ctx, dec);
   if(!op0 && (op1&6)==2 && !op3)
    return decode_iclass_sve_int_perm_rev(ctx, dec);
   if(!op0 && (op1&6)==2 && op3)
    UNALLOCATED(ENC_UNKNOWN);
   if(!op0 && op1==4 && !op2 && op3)
    return decode_iclass_sve_int_perm_cpy_r(ctx, dec);
   if(!op0 && op1==4 && op2 && op3)
    UNALLOCATED(ENC_UNKNOWN);
   if(!op0 && op1==4 && !op3)
    return decode_iclass_sve_int_perm_clast_zz(ctx, dec);
   if(!op0 && op1==5 && !op3)
    return decode_iclass_sve_int_perm_clast_vz(ctx, dec);
   if(!op0 && op1==6 && !op2 && !op3)
    return decode_iclass_sve_int_perm_splice(ctx, dec);
   if(!op0 && op1==6 && op2 && !op3)
    return decode_iclass_sve_intx_perm_splice(ctx, dec);
   if(!op0 && op1==6 && op3)
    UNALLOCATED(ENC_UNKNOWN);
   if(!op0 && op1==7 && !op2 && !op3)
    UNALLOCATED(ENC_UNKNOWN);
   if(!op0 && op1==7 && !op2 && op3)
    UNALLOCATED(ENC_UNKNOWN);
   if(!op0 && op1==7 && op2)
    UNALLOCATED(ENC_UNKNOWN);
   if(!op0 && (op1&3)==1 && op3)
    UNALLOCATED(ENC_UNKNOWN);
   if(op0 && !op1 && !op3)
    UNALLOCATED(ENC_UNKNOWN);
   if(op0 && !op1 && op3)
    return decode_iclass_sve_int_perm_clast_rz(ctx, dec);
   if(op0 && op1)
    UNALLOCATED(ENC_UNKNOWN);
   UNMATCHED;
  }
  if(!op0 && (op1&2)==2 && (op2&0x10)==0x10 && (op3&0x30)==0x30)
   return decode_iclass_sve_int_sel_vvv(ctx, dec);
  if(!op0 && op1==2 && (op2&0x10)==0x10 && !(op3&0x38)) {

   op0 = (INSWORD>>22)&1;
   if(!op0)
    return decode_iclass_sve_int_perm_extract_i(ctx, dec);
   if(op0)
    return decode_iclass_sve_intx_perm_extract_i(ctx, dec);
   UNMATCHED;
  }
  if(!op0 && op1==3 && (op2&0x10)==0x10 && !(op3&0x38))
   return decode_iclass_sve_int_perm_bin_long_perm_zz(ctx, dec);
  if(op0==1 && !(op1&2) && !(op2&0x10)) {

   op0 = (INSWORD>>14)&1;
   if(!op0)
    return decode_iclass_sve_int_cmp_0(ctx, dec);
   if(op0)
    return decode_iclass_sve_int_cmp_1(ctx, dec);
   UNMATCHED;
  }
  if(op0==1 && !(op1&2) && (op2&0x10)==0x10)
   return decode_iclass_sve_int_ucmp_vi(ctx, dec);
  if(op0==1 && (op1&2)==2 && !(op2&0x10) && !(op3&0x10))
   return decode_iclass_sve_int_scmp_vi(ctx, dec);
  if(op0==1 && (op1&2)==2 && !(op2&0x18) && (op3&0x30)==0x10)
   return decode_iclass_sve_int_pred_log(ctx, dec);
  if(op0==1 && (op1&2)==2 && !(op2&0x18) && (op3&0x30)==0x30) {

   op0 = (INSWORD>>9)&1;
   if(!op0)
    return decode_iclass_sve_int_brkp(ctx, dec);
   if(op0)
    UNALLOCATED(ENC_UNKNOWN);
   UNMATCHED;
  }
  if(op0==1 && (op1&2)==2 && (op2&0x18)==8 && (op3&0x30)==0x10) {

   op0 = (INSWORD>>23)&1;
   op1 = (INSWORD>>16)&15;
   op2 = (INSWORD>>9)&1;
   op3 = (INSWORD>>4)&1;
   if(!op0 && op1==8 && !op2 && !op3)
    return decode_iclass_sve_int_brkn(ctx, dec);
   if(!op0 && op1==8 && !op2 && op3)
    UNALLOCATED(ENC_UNKNOWN);
   if(!op0 && !(op1&7) && op2)
    UNALLOCATED(ENC_UNKNOWN);
   if(!op0 && (op1&4)==4)
    UNALLOCATED(ENC_UNKNOWN);
   if(!op0 && (op1&2)==2)
    UNALLOCATED(ENC_UNKNOWN);
   if(!op0 && op1&1)
    UNALLOCATED(ENC_UNKNOWN);
   if(op0 && !op1 && op2)
    UNALLOCATED(ENC_UNKNOWN);
   if(op0 && op1)
    UNALLOCATED(ENC_UNKNOWN);
   if(!op1 && !op2)
    return decode_iclass_sve_int_break(ctx, dec);
   UNMATCHED;
  }
  if(op0==1 && (op1&2)==2 && (op2&0x18)==8 && (op3&0x30)==0x30) {

   op0 = (INSWORD>>16)&15;
   op1 = (INSWORD>>11)&7;
   op2 = (INSWORD>>9)&3;
   op3 = (INSWORD>>5)&15;
   op4 = (INSWORD>>4)&1;
   if(!op0 && !(op2&1) && !op4)
    return decode_iclass_sve_int_ptest(ctx, dec);
   if(op0==4 && !(op2&1) && !op4)
    UNALLOCATED(ENC_UNKNOWN);
   if((op0&11)==2 && !(op2&1) && !op4)
    UNALLOCATED(ENC_UNKNOWN);
   if((op0&9)==1 && !(op2&1) && !op4)
    UNALLOCATED(ENC_UNKNOWN);
   if(!(op0&8) && op2&1 && !op4)
    UNALLOCATED(ENC_UNKNOWN);
   if(op0==8 && !op1 && !op2 && !op4)
    return decode_iclass_sve_int_pfirst(ctx, dec);
   if(op0==8 && !op1 && op2 && !op4)
    UNALLOCATED(ENC_UNKNOWN);
   if(op0==8 && op1==4 && op2==2 && !op3 && !op4)
    return decode_iclass_sve_int_pfalse(ctx, dec);
   if(op0==8 && op1==4 && op2==2 && op3 && !op4)
    UNALLOCATED(ENC_UNKNOWN);
   if(op0==8 && op1==6 && !op2 && !op4)
    return decode_iclass_sve_int_rdffr(ctx, dec);
   if(op0==9 && !op1 && !(op2&2) && !op4)
    UNALLOCATED(ENC_UNKNOWN);
   if(op0==9 && !op1 && op2==2 && !op4)
    return decode_iclass_sve_int_pnext(ctx, dec);
   if(op0==9 && !op1 && op2==3 && !op4)
    UNALLOCATED(ENC_UNKNOWN);
   if(op0==9 && op1==4 && op2==2 && !op4)
    UNALLOCATED(ENC_UNKNOWN);
   if(op0==9 && op1==6 && !op2 && !op3 && !op4)
    return decode_iclass_sve_int_rdffr_2(ctx, dec);
   if(op0==9 && op1==6 && !op2 && op3 && !op4)
    UNALLOCATED(ENC_UNKNOWN);
   if((op0&14)==8 && op1==2 && !op4)
    UNALLOCATED(ENC_UNKNOWN);
   if((op0&14)==8 && op1==4 && !(op2&2) && !op4)
    return decode_iclass_sve_int_ptrue(ctx, dec);
   if((op0&14)==8 && op1==4 && op2==3 && !op4)
    UNALLOCATED(ENC_UNKNOWN);
   if((op0&14)==8 && op1==6 && op2 && !op4)
    UNALLOCATED(ENC_UNKNOWN);
   if((op0&14)==8 && op1&1 && !op4)
    UNALLOCATED(ENC_UNKNOWN);
   if((op0&14)==12 && !op4)
    UNALLOCATED(ENC_UNKNOWN);
   if((op0&10)==10 && !op4)
    UNALLOCATED(ENC_UNKNOWN);
   if(op4)
    UNALLOCATED(ENC_UNKNOWN);
   UNMATCHED;
  }
  if(op0==1 && (op1&2)==2 && (op2&0x10)==0x10 && !(op3&0x30)) {

   op0 = (INSWORD>>12)&3;
   op1 = (INSWORD>>10)&3;
   op2 = INSWORD&15;
   if(!(op0&2))
    return decode_iclass_sve_int_while_rr(ctx, dec);
   if(op0==2 && !op1 && !op2)
    return decode_iclass_sve_int_cterm(ctx, dec);
   if(op0==2 && !op1 && op2)
    UNALLOCATED(ENC_UNKNOWN);
   if(op0==3 && !op1)
    return decode_iclass_sve_int_whilenc(ctx, dec);
   if((op0&2)==2 && op1)
    UNALLOCATED(ENC_UNKNOWN);
   UNMATCHED;
  }
  if(op0==1 && (op1&2)==2 && (op2&0x10)==0x10 && (op3&0x30)==0x10)
   UNALLOCATED(ENC_UNKNOWN);
  if(op0==1 && (op1&2)==2 && (op2&0x10)==0x10 && (op3&0x30)==0x30) {

   op0 = (INSWORD>>19)&3;
   op1 = (INSWORD>>16)&1;
   if(!op0)
    return decode_iclass_sve_int_arith_imm0(ctx, dec);
   if(op0==1)
    return decode_iclass_sve_int_arith_imm1(ctx, dec);
   if(op0==2)
    return decode_iclass_sve_int_arith_imm2(ctx, dec);
   if(op0==3 && !op1)
    return decode_iclass_sve_int_dup_imm(ctx, dec);
   if(op0==3 && op1)
    return decode_iclass_sve_int_dup_fpimm(ctx, dec);
   UNMATCHED;
  }
  if(op0==1 && (op1&2)==2 && (op2&0x1c)==0x10 && (op3&0x30)==0x20) {

   op0 = (INSWORD>>9)&1;
   if(!op0)
    return decode_iclass_sve_int_pcount_pred(ctx, dec);
   if(op0)
    UNALLOCATED(ENC_UNKNOWN);
   UNMATCHED;
  }
  if(op0==1 && (op1&2)==2 && (op2&0x1c)==0x14 && (op3&0x3c)==0x20) {

   op0 = (INSWORD>>18)&1;
   op1 = (INSWORD>>11)&1;
   if(!op0 && !op1)
    return decode_iclass_sve_int_count_v_sat(ctx, dec);
   if(!op0 && op1)
    return decode_iclass_sve_int_count_r_sat(ctx, dec);
   if(op0 && !op1)
    return decode_iclass_sve_int_count_v(ctx, dec);
   if(op0 && op1)
    return decode_iclass_sve_int_count_r(ctx, dec);
   UNMATCHED;
  }
  if(op0==1 && (op1&2)==2 && (op2&0x1c)==0x14 && (op3&0x3c)==0x24) {

   op0 = (INSWORD>>18)&1;
   op1 = (INSWORD>>16)&3;
   op2 = (INSWORD>>9)&7;
   op3 = (INSWORD>>5)&15;
   op4 = INSWORD&0x1f;
   if(!op0 && !op1 && !op2 && !op4)
    return decode_iclass_sve_int_wrffr(ctx, dec);
   if(op0 && !op1 && !op2 && !op3 && !op4)
    return decode_iclass_sve_int_setffr(ctx, dec);
   if(op0 && !op1 && !op2 && (op3&8)==8 && !op4)
    UNALLOCATED(ENC_UNKNOWN);
   if(op0 && !op1 && !op2 && (op3&4)==4 && !op4)
    UNALLOCATED(ENC_UNKNOWN);
   if(op0 && !op1 && !op2 && (op3&2)==2 && !op4)
    UNALLOCATED(ENC_UNKNOWN);
   if(op0 && !op1 && !op2 && op3&1 && !op4)
    UNALLOCATED(ENC_UNKNOWN);
   if(!op1 && !op2 && op4)
    UNALLOCATED(ENC_UNKNOWN);
   if(!op1 && op2)
    UNALLOCATED(ENC_UNKNOWN);
   if(op1)
    UNALLOCATED(ENC_UNKNOWN);
   UNMATCHED;
  }
  if(op0==1 && (op1&2)==2 && (op2&0x1c)==0x14 && (op3&0x38)==0x28)
   UNALLOCATED(ENC_UNKNOWN);
  if(op0==1 && (op1&2)==2 && (op2&0x18)==0x18 && (op3&0x30)==0x20)
   UNALLOCATED(ENC_UNKNOWN);
  if(op0==2 && !(op1&2) && !(op2&0x10) && !(op3&0x20)) {

   op0 = (INSWORD>>10)&0x1f;
   if(!(op0&0x1e))
    return decode_iclass_sve_intx_dot(ctx, dec);
   if((op0&0x1e)==2)
    return decode_iclass_sve_intx_qdmlalbt(ctx, dec);
   if((op0&0x1c)==4)
    return decode_iclass_sve_intx_cdot(ctx, dec);
   if((op0&0x18)==8)
    return decode_iclass_sve_intx_cmla(ctx, dec);
   if((op0&0x18)==0x10)
    return decode_iclass_sve_intx_mlal_long(ctx, dec);
   if((op0&0x1c)==0x18)
    return decode_iclass_sve_intx_qdmlal_long(ctx, dec);
   if((op0&0x1e)==0x1c)
    return decode_iclass_sve_intx_qrdmlah(ctx, dec);
   if(op0==0x1e)
    return decode_iclass_sve_intx_mixed_dot(ctx, dec);
   if(op0==0x1f)
    UNALLOCATED(ENC_UNKNOWN);
   UNMATCHED;
  }
  if(op0==2 && !(op1&2) && !(op2&0x10) && (op3&0x30)==0x20) {

   op0 = (INSWORD>>17)&15;
   op1 = (INSWORD>>13)&1;
   if(op0==2 && op1)
    return decode_iclass_sve_intx_accumulate_long_pairs(ctx, dec);
   if(op0==3 && op1)
    UNALLOCATED(ENC_UNKNOWN);
   if((op0&14)==6 && op1)
    UNALLOCATED(ENC_UNKNOWN);
   if(!(op0&10) && op1)
    return decode_iclass_sve_intx_pred_arith_unary(ctx, dec);
   if(!(op0&8) && !op1)
    return decode_iclass_sve_intx_bin_pred_shift_sat_round(ctx, dec);
   if((op0&12)==8 && !op1)
    return decode_iclass_sve_intx_pred_arith_binary(ctx, dec);
   if((op0&12)==8 && op1)
    return decode_iclass_sve_intx_arith_binary_pairs(ctx, dec);
   if((op0&12)==12 && !op1)
    return decode_iclass_sve_intx_pred_arith_binary_sat(ctx, dec);
   if((op0&12)==12 && op1)
    UNALLOCATED(ENC_UNKNOWN);
   UNMATCHED;
  }
  if(op0==2 && !(op1&2) && !(op2&0x10) && (op3&0x30)==0x30)
   UNALLOCATED(ENC_UNKNOWN);
  if(op0==2 && !(op1&2) && (op2&0x10)==0x10) {

   op0 = (INSWORD>>10)&0x3f;
   if(!(op0&0x3e))
    return decode_iclass_sve_intx_dot_by_indexed_elem(ctx, dec);
   if((op0&0x3e)==2)
    return decode_iclass_sve_intx_mla_by_indexed_elem(ctx, dec);
   if((op0&0x3e)==4)
    return decode_iclass_sve_intx_qrdmlah_by_indexed_elem(ctx, dec);
   if((op0&0x3e)==6)
    return decode_iclass_sve_intx_mixed_dot_by_indexed_elem(ctx, dec);
   if((op0&0x38)==8)
    return decode_iclass_sve_intx_qdmla_long_by_indexed_elem(ctx, dec);
   if((op0&0x3c)==0x10)
    return decode_iclass_sve_intx_cdot_by_indexed_elem(ctx, dec);
   if((op0&0x3c)==0x14)
    UNALLOCATED(ENC_UNKNOWN);
   if((op0&0x3c)==0x18)
    return decode_iclass_sve_intx_cmla_by_indexed_elem(ctx, dec);
   if((op0&0x3c)==0x1c)
    return decode_iclass_sve_intx_qrdcmla_by_indexed_elem(ctx, dec);
   if((op0&0x30)==0x20)
    return decode_iclass_sve_intx_mla_long_by_indexed_elem(ctx, dec);
   if((op0&0x38)==0x30)
    return decode_iclass_sve_intx_mul_long_by_indexed_elem(ctx, dec);
   if((op0&0x3c)==0x38)
    return decode_iclass_sve_intx_qdmul_long_by_indexed_elem(ctx, dec);
   if((op0&0x3e)==0x3c)
    return decode_iclass_sve_intx_qdmulh_by_indexed_elem(ctx, dec);
   if(op0==0x3e)
    return decode_iclass_sve_intx_mul_by_indexed_elem(ctx, dec);
   if(op0==0x3f)
    UNALLOCATED(ENC_UNKNOWN);
   UNMATCHED;
  }
  if(op0==2 && (op1&2)==2 && !(op2&0x10) && !(op3&0x20)) {

   op0 = (INSWORD>>13)&3;
   if(!(op0&2))
    return decode_iclass_sve_intx_cons_arith_long(ctx, dec);
   if(op0==2)
    return decode_iclass_sve_intx_cons_arith_wide(ctx, dec);
   if(op0==3)
    return decode_iclass_sve_intx_cons_mul_long(ctx, dec);
   UNMATCHED;
  }
  if(op0==2 && (op1&2)==2 && !(op2&0x10) && (op3&0x30)==0x20) {

   op0 = (INSWORD>>23)&1;
   op1 = (INSWORD>>10)&15;
   if(!op0 && (op1&12)==8)
    return decode_iclass_sve_intx_shift_long(ctx, dec);
   if(op0 && (op1&12)==8)
    UNALLOCATED(ENC_UNKNOWN);
   if(!(op1&12))
    return decode_iclass_sve_intx_clong(ctx, dec);
   if((op1&14)==4)
    return decode_iclass_sve_intx_eorx(ctx, dec);
   if(op1==6)
    return decode_iclass_sve_intx_mmla(ctx, dec);
   if(op1==7)
    UNALLOCATED(ENC_UNKNOWN);
   if((op1&12)==12)
    return decode_iclass_sve_intx_perm_bit(ctx, dec);
   UNMATCHED;
  }
  if(op0==2 && (op1&2)==2 && !(op2&0x10) && (op3&0x30)==0x30) {

   op0 = (INSWORD>>17)&15;
   op1 = (INSWORD>>11)&7;
   if(!op0 && op1==3)
    return decode_iclass_sve_intx_cadd(ctx, dec);
   if(op0 && op1==3)
    UNALLOCATED(ENC_UNKNOWN);
   if(!(op1&6))
    return decode_iclass_sve_intx_aba_long(ctx, dec);
   if(op1==2)
    return decode_iclass_sve_intx_adc_long(ctx, dec);
   if((op1&6)==4)
    return decode_iclass_sve_intx_sra(ctx, dec);
   if(op1==6)
    return decode_iclass_sve_intx_shift_insert(ctx, dec);
   if(op1==7)
    return decode_iclass_sve_intx_aba(ctx, dec);
   UNMATCHED;
  }
  if(op0==2 && (op1&2)==2 && (op2&0x10)==0x10 && !(op3&0x20)) {

   op0 = (INSWORD>>23)&1;
   op1 = (INSWORD>>16)&7;
   op2 = (INSWORD>>13)&3;
   if(!op0 && !op1 && op2==2)
    return decode_iclass_sve_intx_extract_narrow(ctx, dec);
   if(!op0 && op1 && op2==2)
    UNALLOCATED(ENC_UNKNOWN);
   if(!op0 && !(op2&2))
    return decode_iclass_sve_intx_shift_narrow(ctx, dec);
   if(op0 && !(op2&2))
    UNALLOCATED(ENC_UNKNOWN);
   if(op0 && op2==2)
    UNALLOCATED(ENC_UNKNOWN);
   if(op2==3)
    return decode_iclass_sve_intx_arith_narrow(ctx, dec);
   UNMATCHED;
  }
  if(op0==2 && (op1&2)==2 && (op2&0x10)==0x10 && (op3&0x38)==0x20)
   return decode_iclass_sve_intx_match(ctx, dec);
  if(op0==2 && (op1&2)==2 && (op2&0x10)==0x10 && (op3&0x38)==0x28) {

   op0 = (INSWORD>>10)&7;
   if(!op0)
    return decode_iclass_sve_intx_histseg(ctx, dec);
   if(op0)
    UNALLOCATED(ENC_UNKNOWN);
   UNMATCHED;
  }
  if(op0==2 && (op1&2)==2 && (op2&0x10)==0x10 && (op3&0x38)==0x30)
   return decode_iclass_sve_intx_histcnt(ctx, dec);
  if(op0==2 && (op1&2)==2 && (op2&0x10)==0x10 && (op3&0x38)==0x38) {

   op0 = (INSWORD>>18)&7;
   op1 = (INSWORD>>16)&3;
   op2 = (INSWORD>>11)&3;
   op3 = (INSWORD>>5)&0x1f;
   if(!op0 && !op1 && !op2 && !op3)
    return decode_iclass_sve_crypto_unary(ctx, dec);
   if(!op0 && !op1 && !op2 && op3)
    UNALLOCATED(ENC_UNKNOWN);
   if(!op0 && !op1 && op2&1)
    UNALLOCATED(ENC_UNKNOWN);
   if(!op0 && op1==1 && !(op2&2))
    UNALLOCATED(ENC_UNKNOWN);
   if(!op0 && op1==1 && op2==3)
    UNALLOCATED(ENC_UNKNOWN);
   if(!op0 && (op1&2)==2 && !op2)
    return decode_iclass_sve_crypto_binary_dest(ctx, dec);
   if(!op0 && (op1&2)==2 && op2&1)
    UNALLOCATED(ENC_UNKNOWN);
   if(op0 && !(op2&2))
    UNALLOCATED(ENC_UNKNOWN);
   if(op0 && op2==3)
    UNALLOCATED(ENC_UNKNOWN);
   if(op2==2)
    return decode_iclass_sve_crypto_binary_const(ctx, dec);
   UNMATCHED;
  }
  if(op0==3 && !(op1&2) && !(op2&0x10) && !(op3&0x20))
   return decode_iclass_sve_fp_fcmla(ctx, dec);
  if(op0==3 && !(op1&2) && (op2&0x1a)==2 && (op3&0x20)==0x20)
   UNALLOCATED(ENC_UNKNOWN);
  if(op0==3 && !(op1&2) && !op2 && (op3&0x38)==0x20)
   return decode_iclass_sve_fp_fcadd(ctx, dec);
  if(op0==3 && !(op1&2) && !op2 && (op3&0x38)==0x28)
   UNALLOCATED(ENC_UNKNOWN);
  if(op0==3 && !(op1&2) && !op2 && (op3&0x30)==0x30)
   UNALLOCATED(ENC_UNKNOWN);
  if(op0==3 && !(op1&2) && op2==1 && (op3&0x20)==0x20)
   UNALLOCATED(ENC_UNKNOWN);
  if(op0==3 && !(op1&2) && (op2&0x1e)==4 && (op3&0x38)==0x20)
   UNALLOCATED(ENC_UNKNOWN);
  if(op0==3 && !(op1&2) && (op2&0x1e)==4 && (op3&0x38)==0x28)
   return decode_iclass_sve_fp_fcvt2(ctx, dec);
  if(op0==3 && !(op1&2) && (op2&0x1e)==4 && (op3&0x30)==0x30)
   UNALLOCATED(ENC_UNKNOWN);
  if(op0==3 && !(op1&2) && (op2&0x1c)==8 && (op3&0x38)==0x20)
   return decode_iclass_sve_fp_pairwise(ctx, dec);
  if(op0==3 && !(op1&2) && (op2&0x1c)==8 && (op3&0x38)==0x28)
   UNALLOCATED(ENC_UNKNOWN);
  if(op0==3 && !(op1&2) && (op2&0x1c)==8 && (op3&0x30)==0x30)
   UNALLOCATED(ENC_UNKNOWN);
  if(op0==3 && !(op1&2) && (op2&0x1c)==12 && (op3&0x20)==0x20)
   UNALLOCATED(ENC_UNKNOWN);
  if(op0==3 && !(op1&2) && (op2&0x10)==0x10 && (op3&0x16)==2)
   UNALLOCATED(ENC_UNKNOWN);
  if(op0==3 && !(op1&2) && (op2&0x10)==0x10 && !(op3&0x3e))
   return decode_iclass_sve_fp_fma_by_indexed_elem(ctx, dec);
  if(op0==3 && !(op1&2) && (op2&0x10)==0x10 && (op3&0x3c)==4)
   return decode_iclass_sve_fp_fcmla_by_indexed_elem(ctx, dec);
  if(op0==3 && !(op1&2) && (op2&0x10)==0x10 && op3==8)
   return decode_iclass_sve_fp_fmul_by_indexed_elem(ctx, dec);
  if(op0==3 && !(op1&2) && (op2&0x10)==0x10 && op3==9)
   UNALLOCATED(ENC_UNKNOWN);
  if(op0==3 && !(op1&2) && (op2&0x10)==0x10 && (op3&0x3c)==12)
   UNALLOCATED(ENC_UNKNOWN);
  if(op0==3 && !(op1&2) && (op2&0x10)==0x10 && (op3&0x34)==0x10) {

   op0 = (INSWORD>>23)&1;
   op1 = (INSWORD>>13)&1;
   op2 = (INSWORD>>10)&3;
   if(!op0 && !op1 && !op2)
    return decode_iclass_sve_fp_fdot_by_indexed_elem(ctx, dec);
   if(!op0 && !op1 && op2)
    UNALLOCATED(ENC_UNKNOWN);
   if(!op0 && op1)
    UNALLOCATED(ENC_UNKNOWN);
   if(op0)
    return decode_iclass_sve_fp_fma_long_by_indexed_elem(ctx, dec);
   UNMATCHED;
  }
  if(op0==3 && !(op1&2) && (op2&0x10)==0x10 && (op3&0x34)==0x14)
   UNALLOCATED(ENC_UNKNOWN);
  if(op0==3 && !(op1&2) && (op2&0x10)==0x10 && (op3&0x36)==0x20) {

   op0 = (INSWORD>>23)&1;
   op1 = (INSWORD>>13)&1;
   op2 = (INSWORD>>10)&1;
   if(!op0 && !op1 && !op2)
    return decode_iclass_sve_fp_fdot(ctx, dec);
   if(!op0 && !op1 && op2)
    UNALLOCATED(ENC_UNKNOWN);
   if(!op0 && op1)
    UNALLOCATED(ENC_UNKNOWN);
   if(op0)
    return decode_iclass_sve_fp_fma_long(ctx, dec);
   UNMATCHED;
  }
  if(op0==3 && !(op1&2) && (op2&0x10)==0x10 && (op3&0x34)==0x24)
   UNALLOCATED(ENC_UNKNOWN);
  if(op0==3 && !(op1&2) && (op2&0x10)==0x10 && (op3&0x38)==0x30)
   UNALLOCATED(ENC_UNKNOWN);
  if(op0==3 && !(op1&2) && (op2&0x10)==0x10 && op3==0x38)
   UNALLOCATED(ENC_UNKNOWN);
  if(op0==3 && !(op1&2) && (op2&0x10)==0x10 && op3==0x39)
   return decode_iclass_sve_fp_fmmla(ctx, dec);
  if(op0==3 && !(op1&2) && (op2&0x10)==0x10 && (op3&0x3e)==0x3a)
   UNALLOCATED(ENC_UNKNOWN);
  if(op0==3 && !(op1&2) && (op2&0x10)==0x10 && (op3&0x3c)==0x3c)
   UNALLOCATED(ENC_UNKNOWN);
  if(op0==3 && (op1&2)==2 && !(op2&0x10) && (op3&0x10)==0x10)
   return decode_iclass_sve_fp_3op_p_pd(ctx, dec);
  if(op0==3 && (op1&2)==2 && !(op2&0x10) && !(op3&0x38))
   return decode_iclass_sve_fp_3op_u_zd(ctx, dec);
  if(op0==3 && (op1&2)==2 && !(op2&0x10) && (op3&0x38)==0x20) {

   op0 = (INSWORD>>19)&3;
   op1 = (INSWORD>>10)&7;
   op2 = (INSWORD>>6)&15;
   if(!(op0&2))
    return decode_iclass_sve_fp_2op_p_zds(ctx, dec);
   if(op0==2 && !op1)
    return decode_iclass_sve_fp_ftmad(ctx, dec);
   if(op0==2 && op1)
    UNALLOCATED(ENC_UNKNOWN);
   if(op0==3 && !op2)
    return decode_iclass_sve_fp_2op_i_p_zds(ctx, dec);
   if(op0==3 && op2)
    UNALLOCATED(ENC_UNKNOWN);
   UNMATCHED;
  }
  if(op0==3 && (op1&2)==2 && !(op2&0x10) && (op3&0x38)==0x28) {

   op0 = (INSWORD>>18)&7;
   if(!(op0&6))
    return decode_iclass_sve_fp_2op_p_zd_a(ctx, dec);
   if(op0==2)
    return decode_iclass_sve_fp_2op_p_zd_b_0(ctx, dec);
   if(op0==3)
    return decode_iclass_sve_fp_2op_p_zd_b_1(ctx, dec);
   if((op0&6)==4)
    return decode_iclass_sve_fp_2op_p_zd_c(ctx, dec);
   if((op0&6)==6)
    return decode_iclass_sve_fp_2op_p_zd_d(ctx, dec);
   UNMATCHED;
  }
  if(op0==3 && (op1&2)==2 && !(op2&0x1c) && (op3&0x38)==8)
   return decode_iclass_sve_fp_fast_red(ctx, dec);
  if(op0==3 && (op1&2)==2 && (op2&0x1c)==4 && (op3&0x3c)==8)
   UNALLOCATED(ENC_UNKNOWN);
  if(op0==3 && (op1&2)==2 && (op2&0x1c)==4 && (op3&0x3c)==12) {

   op0 = (INSWORD>>10)&3;
   if(!op0)
    return decode_iclass_sve_fp_2op_u_zd(ctx, dec);
   if(op0)
    UNALLOCATED(ENC_UNKNOWN);
   UNMATCHED;
  }
  if(op0==3 && (op1&2)==2 && (op2&0x1c)==8 && (op3&0x38)==8) {

   op0 = (INSWORD>>18)&1;
   if(!op0)
    return decode_iclass_sve_fp_2op_p_pd(ctx, dec);
   if(op0)
    UNALLOCATED(ENC_UNKNOWN);
   UNMATCHED;
  }
  if(op0==3 && (op1&2)==2 && (op2&0x1c)==12 && (op3&0x38)==8) {

   op0 = (INSWORD>>18)&1;
   if(!op0)
    return decode_iclass_sve_fp_2op_p_vd(ctx, dec);
   if(op0)
    UNALLOCATED(ENC_UNKNOWN);
   UNMATCHED;
  }
  if(op0==3 && (op1&2)==2 && (op2&0x10)==0x10) {

   op0 = (INSWORD>>15)&1;
   if(!op0)
    return decode_iclass_sve_fp_3op_p_zds_a(ctx, dec);
   if(op0)
    return decode_iclass_sve_fp_3op_p_zds_b(ctx, dec);
   UNMATCHED;
  }
  if(op0==4) {

   op0 = (INSWORD>>23)&3;
   op1 = (INSWORD>>21)&3;
   op2 = (INSWORD>>13)&7;
   op3 = (INSWORD>>4)&1;
   if(!op0 && op1&1 && !(op2&4) && !op3)
    return decode_iclass_sve_mem_32b_prfm_sv(ctx, dec);
   if(!op0 && op1&1 && !(op2&4) && op3)
    UNALLOCATED(ENC_UNKNOWN);
   if(op0==1 && op1&1 && !(op2&4))
    return decode_iclass_sve_mem_32b_gld_sv_a(ctx, dec);
   if(op0==2 && op1&1 && !(op2&4))
    return decode_iclass_sve_mem_32b_gld_sv_b(ctx, dec);
   if(op0==3 && !(op1&2) && !op2 && !op3)
    return decode_iclass_sve_mem_32b_pfill(ctx, dec);
   if(op0==3 && !(op1&2) && !op2 && op3)
    UNALLOCATED(ENC_UNKNOWN);
   if(op0==3 && !(op1&2) && op2==2)
    return decode_iclass_sve_mem_32b_fill(ctx, dec);
   if(op0==3 && !(op1&2) && (op2&5)==1)
    UNALLOCATED(ENC_UNKNOWN);
   if(op0==3 && (op1&2)==2 && !(op2&4) && !op3)
    return decode_iclass_sve_mem_prfm_si(ctx, dec);
   if(op0==3 && (op1&2)==2 && !(op2&4) && op3)
    UNALLOCATED(ENC_UNKNOWN);
   if(op0!=3 && !(op1&1) && !(op2&4))
    return decode_iclass_sve_mem_32b_gld_vs(ctx, dec);
   if(!op1 && (op2&6)==4)
    return decode_iclass_sve_mem_32b_gldnt_vs(ctx, dec);
   if(!op1 && op2==6 && !op3)
    return decode_iclass_sve_mem_prfm_ss(ctx, dec);
   if(!op1 && op2==7 && !op3)
    return decode_iclass_sve_mem_32b_prfm_vi(ctx, dec);
   if(!op1 && (op2&6)==6 && op3)
    UNALLOCATED(ENC_UNKNOWN);
   if(op1==1 && (op2&4)==4)
    return decode_iclass_sve_mem_32b_gld_vi(ctx, dec);
   if((op1&2)==2 && (op2&4)==4)
    return decode_iclass_sve_mem_ld_dup(ctx, dec);
   UNMATCHED;
  }
  if(op0==5) {

   op0 = (INSWORD>>21)&3;
   op1 = (INSWORD>>20)&1;
   op2 = (INSWORD>>13)&7;
   if(!op0 && !op1 && op2==7)
    return decode_iclass_sve_mem_cldnt_si(ctx, dec);
   if(!op0 && op2==6)
    return decode_iclass_sve_mem_cldnt_ss(ctx, dec);
   if(op0 && !op1 && op2==7)
    return decode_iclass_sve_mem_eld_si(ctx, dec);
   if(op0 && op2==6)
    return decode_iclass_sve_mem_eld_ss(ctx, dec);
   if(!op1 && op2==1)
    return decode_iclass_sve_mem_ldqr_si(ctx, dec);
   if(!op1 && op2==5)
    return decode_iclass_sve_mem_cld_si(ctx, dec);
   if(op1 && op2==1)
    UNALLOCATED(ENC_UNKNOWN);
   if(op1 && op2==5)
    return decode_iclass_sve_mem_cldnf_si(ctx, dec);
   if(op1 && op2==7)
    UNALLOCATED(ENC_UNKNOWN);
   if(!op2)
    return decode_iclass_sve_mem_ldqr_ss(ctx, dec);
   if(op2==2)
    return decode_iclass_sve_mem_cld_ss(ctx, dec);
   if(op2==3)
    return decode_iclass_sve_mem_cldff_ss(ctx, dec);
   if(op2==4)
    UNALLOCATED(ENC_UNKNOWN);
   UNMATCHED;
  }
  if(op0==6) {

   op0 = (INSWORD>>23)&3;
   op1 = (INSWORD>>21)&3;
   op2 = (INSWORD>>13)&7;
   op3 = (INSWORD>>4)&1;
   if(!op0 && op1==1 && !(op2&4) && op3)
    UNALLOCATED(ENC_UNKNOWN);
   if(!op0 && op1==3 && (op2&4)==4 && !op3)
    return decode_iclass_sve_mem_64b_prfm_sv2(ctx, dec);
   if(!op0 && op1==3 && op3)
    UNALLOCATED(ENC_UNKNOWN);
   if(!op0 && op1&1 && !(op2&4) && !op3)
    return decode_iclass_sve_mem_64b_prfm_sv(ctx, dec);
   if(op0 && op1==3 && (op2&4)==4)
    return decode_iclass_sve_mem_64b_gld_sv2(ctx, dec);
   if(op0 && op1&1 && !(op2&4))
    return decode_iclass_sve_mem_64b_gld_sv(ctx, dec);
   if(!op1 && op2==5)
    UNALLOCATED(ENC_UNKNOWN);
   if(!op1 && op2==7 && !op3)
    return decode_iclass_sve_mem_64b_prfm_vi(ctx, dec);
   if(!op1 && op2==7 && op3)
    UNALLOCATED(ENC_UNKNOWN);
   if(!op1 && (op2&5)==4)
    return decode_iclass_sve_mem_64b_gldnt_vs(ctx, dec);
   if(op1==1 && (op2&4)==4)
    return decode_iclass_sve_mem_64b_gld_vi(ctx, dec);
   if(op1==2 && (op2&4)==4)
    return decode_iclass_sve_mem_64b_gld_vs2(ctx, dec);
   if(!(op1&1) && !(op2&4))
    return decode_iclass_sve_mem_64b_gld_vs(ctx, dec);
   UNMATCHED;
  }
  if(op0==7 && !(op3&0x28)) {

   op0 = (INSWORD>>22)&7;
   op1 = (INSWORD>>14)&1;
   op2 = (INSWORD>>4)&1;
   if(!(op0&4) && !op1)
    UNALLOCATED(ENC_UNKNOWN);
   if((op0&6)==4 && !op1)
    UNALLOCATED(ENC_UNKNOWN);
   if(op0==6 && !op1 && !op2)
    return decode_iclass_sve_mem_pspill(ctx, dec);
   if(op0==6 && !op1 && op2)
    UNALLOCATED(ENC_UNKNOWN);
   if(op0==6 && op1)
    return decode_iclass_sve_mem_spill(ctx, dec);
   if(op0==7 && !op1)
    UNALLOCATED(ENC_UNKNOWN);
   if(op0!=6 && op1)
    return decode_iclass_sve_mem_cst_ss(ctx, dec);
   UNMATCHED;
  }
  if(op0==7 && (op3&0x28)==8) {

   op0 = (INSWORD>>21)&3;
   op1 = (INSWORD>>14)&1;
   if(!op0 && !op1)
    return decode_iclass_sve_mem_sstnt_64b_vs(ctx, dec);
   if(!op0 && op1)
    return decode_iclass_sve_mem_cstnt_ss(ctx, dec);
   if(op0==2 && !op1)
    return decode_iclass_sve_mem_sstnt_32b_vs(ctx, dec);
   if(op0 && op1)
    return decode_iclass_sve_mem_est_ss(ctx, dec);
   if(op0&1 && !op1)
    UNALLOCATED(ENC_UNKNOWN);
   UNMATCHED;
  }
  if(op0==7 && (op3&0x28)==0x20) {

   op0 = (INSWORD>>21)&3;
   if(!op0)
    return decode_iclass_sve_mem_sst_vs_a(ctx, dec);
   if(op0==1)
    return decode_iclass_sve_mem_sst_sv_a(ctx, dec);
   if(op0==2)
    return decode_iclass_sve_mem_sst_vs_b(ctx, dec);
   if(op0==3)
    return decode_iclass_sve_mem_sst_sv_b(ctx, dec);
   UNMATCHED;
  }
  if(op0==7 && (op3&0x38)==0x28) {

   op0 = (INSWORD>>21)&3;
   if(!op0)
    return decode_iclass_sve_mem_sst_vs2(ctx, dec);
   if(op0==1)
    return decode_iclass_sve_mem_sst_sv2(ctx, dec);
   if(op0==2)
    return decode_iclass_sve_mem_sst_vi_a(ctx, dec);
   if(op0==3)
    return decode_iclass_sve_mem_sst_vi_b(ctx, dec);
   UNMATCHED;
  }
  if(op0==7 && (op3&0x38)==0x38) {

   op0 = (INSWORD>>21)&3;
   op1 = (INSWORD>>20)&1;
   if(!op0 && op1)
    return decode_iclass_sve_mem_cstnt_si(ctx, dec);
   if(op0 && op1)
    return decode_iclass_sve_mem_est_si(ctx, dec);
   if(!op1)
    return decode_iclass_sve_mem_cst_si(ctx, dec);
   UNMATCHED;
  }
  UNMATCHED;
 }
 if(op0==3)
  UNALLOCATED(ENC_UNKNOWN);
 if((op0&14)==8) {

  op0 = (INSWORD>>23)&7;
  if(!(op0&6))
   return decode_iclass_pcreladdr(ctx, dec);
  if(op0==2)
   return decode_iclass_addsub_imm(ctx, dec);
  if(op0==3)
   return decode_iclass_addsub_immtags(ctx, dec);
  if(op0==4)
   return decode_iclass_log_imm(ctx, dec);
  if(op0==5)
   return decode_iclass_movewide(ctx, dec);
  if(op0==6)
   return decode_iclass_bitfield(ctx, dec);
  if(op0==7)
   return decode_iclass_extract(ctx, dec);
  UNMATCHED;
 }
 if((op0&14)==10) {

  op0 = INSWORD>>29;
  op1 = (INSWORD>>12)&0x3fff;
  op2 = INSWORD&0x1f;
  if(op0==2 && !(op1&0x2000))
   return decode_iclass_condbranch(ctx, dec);
  if(op0==6 && !(op1&0x3000))
   return decode_iclass_exception(ctx, dec);
  if(op0==6 && op1==0x1031)
   return decode_iclass_systeminstrswithreg(ctx, dec);
  if(op0==6 && op1==0x1032 && op2==0x1f)
   return decode_iclass_hints(ctx, dec);
  if(op0==6 && op1==0x1033)
   return decode_iclass_barriers(ctx, dec);
  if(op0==6 && (op1&0x3f8f)==0x1004)
   return decode_iclass_pstate(ctx, dec);
  if(op0==6 && (op1&0x3f80)==0x1200)
   return decode_iclass_systemresult(ctx, dec);
  if(op0==6 && (op1&0x3d80)==0x1080)
   return decode_iclass_systeminstrs(ctx, dec);
  if(op0==6 && (op1&0x3d00)==0x1100)
   return decode_iclass_systemmove(ctx, dec);
  if(op0==6 && (op1&0x2000)==0x2000)
   return decode_iclass_branch_reg(ctx, dec);
  if(!(op0&3))
   return decode_iclass_branch_imm(ctx, dec);
  if((op0&3)==1 && !(op1&0x2000))
   return decode_iclass_compbranch(ctx, dec);
  if((op0&3)==1 && (op1&0x2000)==0x2000)
   return decode_iclass_testbranch(ctx, dec);
  UNMATCHED;
 }
 if((op0&5)==4) {

  op0 = INSWORD>>28;
  op1 = (INSWORD>>26)&1;
  op2 = (INSWORD>>23)&3;
  op3 = (INSWORD>>16)&0x3f;
  op4 = (INSWORD>>10)&3;
  if(!(op0&11) && !op1 && !op2 && (op3&0x20)==0x20)
   return decode_iclass_comswappr(ctx, dec);
  if(!(op0&11) && op1 && !op2 && !op3)
   return decode_iclass_asisdlse(ctx, dec);
  if(!(op0&11) && op1 && op2==1 && !(op3&0x20))
   return decode_iclass_asisdlsep(ctx, dec);
  if(!(op0&11) && op1 && !(op2&2) && (op3&0x20)==0x20)
   UNALLOCATED(ENC_UNKNOWN);
  if(!(op0&11) && op1 && op2==2 && !(op3&0x1f))
   return decode_iclass_asisdlso(ctx, dec);
  if(!(op0&11) && op1 && op2==3)
   return decode_iclass_asisdlsop(ctx, dec);
  if(!(op0&11) && op1 && !(op2&1) && (op3&0x10)==0x10)
   UNALLOCATED(ENC_UNKNOWN);
  if(!(op0&11) && op1 && !(op2&1) && (op3&8)==8)
   UNALLOCATED(ENC_UNKNOWN);
  if(!(op0&11) && op1 && !(op2&1) && (op3&4)==4)
   UNALLOCATED(ENC_UNKNOWN);
  if(!(op0&11) && op1 && !(op2&1) && (op3&2)==2)
   UNALLOCATED(ENC_UNKNOWN);
  if(!(op0&11) && op1 && !(op2&1) && op3&1)
   UNALLOCATED(ENC_UNKNOWN);
  if(op0==13 && !op1 && (op2&2)==2 && (op3&0x20)==0x20)
   return decode_iclass_ldsttags(ctx, dec);
  if((op0&11)==8 && !op1 && !op2 && (op3&0x20)==0x20)
   return decode_iclass_ldstexclp(ctx, dec);
  if((op0&11)==8 && op1)
   UNALLOCATED(ENC_UNKNOWN);
  if(!(op0&3) && !op1 && !op2 && !(op3&0x20))
   return decode_iclass_ldstexclr(ctx, dec);
  if(!(op0&3) && !op1 && op2==1 && !(op3&0x20))
   return decode_iclass_ldstord(ctx, dec);
  if(!(op0&3) && !op1 && op2==1 && (op3&0x20)==0x20)
   return decode_iclass_comswap(ctx, dec);
  if((op0&3)==1 && !op1 && (op2&2)==2 && !(op3&0x20) && !op4)
   return decode_iclass_ldapstl_unscaled(ctx, dec);
  if((op0&3)==1 && !(op2&2))
   return decode_iclass_loadlit(ctx, dec);
  if((op0&3)==2 && !op2)
   return decode_iclass_ldstnapair_offs(ctx, dec);
  if((op0&3)==2 && op2==1)
   return decode_iclass_ldstpair_post(ctx, dec);
  if((op0&3)==2 && op2==2)
   return decode_iclass_ldstpair_off(ctx, dec);
  if((op0&3)==2 && op2==3)
   return decode_iclass_ldstpair_pre(ctx, dec);
  if((op0&3)==3 && !(op2&2) && !(op3&0x20) && !op4)
   return decode_iclass_ldst_unscaled(ctx, dec);
  if((op0&3)==3 && !(op2&2) && !(op3&0x20) && op4==1)
   return decode_iclass_ldst_immpost(ctx, dec);
  if((op0&3)==3 && !(op2&2) && !(op3&0x20) && op4==2)
   return decode_iclass_ldst_unpriv(ctx, dec);
  if((op0&3)==3 && !(op2&2) && !(op3&0x20) && op4==3)
   return decode_iclass_ldst_immpre(ctx, dec);
  if((op0&3)==3 && !(op2&2) && (op3&0x20)==0x20 && !op4)
   return decode_iclass_memop(ctx, dec);
  if((op0&3)==3 && !(op2&2) && (op3&0x20)==0x20 && op4==2)
   return decode_iclass_ldst_regoff(ctx, dec);
  if((op0&3)==3 && !(op2&2) && (op3&0x20)==0x20 && op4&1)
   return decode_iclass_ldst_pac(ctx, dec);
  if((op0&3)==3 && (op2&2)==2)
   return decode_iclass_ldst_pos(ctx, dec);
  UNMATCHED;
 }
 if((op0&7)==5) {

  op0 = (INSWORD>>30)&1;
  op1 = (INSWORD>>28)&1;
  op2 = (INSWORD>>21)&15;
  op3 = (INSWORD>>10)&0x3f;
  if(!op0 && op1 && op2==6)
   return decode_iclass_dp_2src(ctx, dec);
  if(op0 && op1 && op2==6)
   return decode_iclass_dp_1src(ctx, dec);
  if(!op1 && !(op2&8))
   return decode_iclass_log_shift(ctx, dec);
  if(!op1 && (op2&9)==8)
   return decode_iclass_addsub_shift(ctx, dec);
  if(!op1 && (op2&9)==9)
   return decode_iclass_addsub_ext(ctx, dec);
  if(op1 && !op2 && !op3)
   return decode_iclass_addsub_carry(ctx, dec);
  if(op1 && !op2 && (op3&0x1f)==1)
   return decode_iclass_rmif(ctx, dec);
  if(op1 && !op2 && (op3&15)==2)
   return decode_iclass_setf(ctx, dec);
  if(op1 && op2==2 && !(op3&2))
   return decode_iclass_condcmp_reg(ctx, dec);
  if(op1 && op2==2 && (op3&2)==2)
   return decode_iclass_condcmp_imm(ctx, dec);
  if(op1 && op2==4)
   return decode_iclass_condsel(ctx, dec);
  if(op1 && (op2&8)==8)
   return decode_iclass_dp_3src(ctx, dec);
  UNMATCHED;
 }
 if((op0&7)==7) {

  op0 = INSWORD>>28;
  op1 = (INSWORD>>23)&3;
  op2 = (INSWORD>>19)&15;
  op3 = (INSWORD>>10)&0x1ff;
  if(!op0 && !(op1&2) && (op2&7)==5 && (op3&0x183)==2)
   UNALLOCATED(ENC_UNKNOWN);
  if(op0==2 && !(op1&2) && (op2&7)==5 && (op3&0x183)==2)
   UNALLOCATED(ENC_UNKNOWN);
  if(op0==4 && !(op1&2) && (op2&7)==5 && (op3&0x183)==2)
   return decode_iclass_cryptoaes(ctx, dec);
  if(op0==5 && !(op1&2) && !(op2&4) && !(op3&0x23))
   return decode_iclass_cryptosha3(ctx, dec);
  if(op0==5 && !(op1&2) && !(op2&4) && (op3&0x23)==2)
   UNALLOCATED(ENC_UNKNOWN);
  if(op0==5 && !(op1&2) && (op2&7)==5 && (op3&0x183)==2)
   return decode_iclass_cryptosha2(ctx, dec);
  if(op0==6 && !(op1&2) && (op2&7)==5 && (op3&0x183)==2)
   UNALLOCATED(ENC_UNKNOWN);
  if(op0==7 && !(op1&2) && !(op2&4) && !(op3&0x21))
   UNALLOCATED(ENC_UNKNOWN);
  if(op0==7 && !(op1&2) && (op2&7)==5 && (op3&0x183)==2)
   UNALLOCATED(ENC_UNKNOWN);
  if((op0&13)==5 && !op1 && !(op2&12) && (op3&0x21)==1)
   return decode_iclass_asisdone(ctx, dec);
  if((op0&13)==5 && op1==1 && !(op2&12) && (op3&0x21)==1)
   UNALLOCATED(ENC_UNKNOWN);
  if((op0&13)==5 && !(op1&2) && op2==7 && (op3&0x183)==2)
   UNALLOCATED(ENC_UNKNOWN);
  if((op0&13)==5 && !(op1&2) && (op2&12)==8 && (op3&0x31)==1)
   return decode_iclass_asisdsamefp16(ctx, dec);
  if((op0&13)==5 && !(op1&2) && (op2&12)==8 && (op3&0x31)==0x11)
   UNALLOCATED(ENC_UNKNOWN);
  if((op0&13)==5 && !(op1&2) && op2==15 && (op3&0x183)==2)
   return decode_iclass_asisdmiscfp16(ctx, dec);
  if((op0&13)==5 && !(op1&2) && !(op2&4) && (op3&0x21)==0x20)
   UNALLOCATED(ENC_UNKNOWN);
  if((op0&13)==5 && !(op1&2) && !(op2&4) && (op3&0x21)==0x21)
   return decode_iclass_asisdsame2(ctx, dec);
  if((op0&13)==5 && !(op1&2) && (op2&7)==4 && (op3&0x183)==2)
   return decode_iclass_asisdmisc(ctx, dec);
  if((op0&13)==5 && !(op1&2) && (op2&7)==6 && (op3&0x183)==2)
   return decode_iclass_asisdpair(ctx, dec);
  if((op0&13)==5 && !(op1&2) && (op2&4)==4 && (op3&0x103)==0x102)
   UNALLOCATED(ENC_UNKNOWN);
  if((op0&13)==5 && !(op1&2) && (op2&4)==4 && (op3&0x83)==0x82)
   UNALLOCATED(ENC_UNKNOWN);
  if((op0&13)==5 && !(op1&2) && (op2&4)==4 && !(op3&3))
   return decode_iclass_asisddiff(ctx, dec);
  if((op0&13)==5 && !(op1&2) && (op2&4)==4 && op3&1)
   return decode_iclass_asisdsame(ctx, dec);
  if((op0&13)==5 && op1==2 && op3&1)
   return decode_iclass_asisdshf(ctx, dec);
  if((op0&13)==5 && op1==3 && op3&1)
   UNALLOCATED(ENC_UNKNOWN);
  if((op0&13)==5 && (op1&2)==2 && !(op3&1))
   return decode_iclass_asisdelem(ctx, dec);
  if(!(op0&11) && !(op1&2) && !(op2&4) && !(op3&0x23))
   return decode_iclass_asimdtbl(ctx, dec);
  if(!(op0&11) && !(op1&2) && !(op2&4) && (op3&0x23)==2)
   return decode_iclass_asimdperm(ctx, dec);
  if((op0&11)==2 && !(op1&2) && !(op2&4) && !(op3&0x21))
   return decode_iclass_asimdext(ctx, dec);
  if(!(op0&9) && !op1 && !(op2&12) && (op3&0x21)==1)
   return decode_iclass_asimdins(ctx, dec);
  if(!(op0&9) && op1==1 && !(op2&12) && (op3&0x21)==1)
   UNALLOCATED(ENC_UNKNOWN);
  if(!(op0&9) && !(op1&2) && op2==7 && (op3&0x183)==2)
   UNALLOCATED(ENC_UNKNOWN);
  if(!(op0&9) && !(op1&2) && (op2&12)==8 && (op3&0x31)==1)
   return decode_iclass_asimdsamefp16(ctx, dec);
  if(!(op0&9) && !(op1&2) && (op2&12)==8 && (op3&0x31)==0x11)
   UNALLOCATED(ENC_UNKNOWN);
  if(!(op0&9) && !(op1&2) && op2==15 && (op3&0x183)==2)
   return decode_iclass_asimdmiscfp16(ctx, dec);
  if(!(op0&9) && !(op1&2) && !(op2&4) && (op3&0x21)==0x20)
   UNALLOCATED(ENC_UNKNOWN);
  if(!(op0&9) && !(op1&2) && !(op2&4) && (op3&0x21)==0x21)
   return decode_iclass_asimdsame2(ctx, dec);
  if(!(op0&9) && !(op1&2) && (op2&7)==4 && (op3&0x183)==2)
   return decode_iclass_asimdmisc(ctx, dec);
  if(!(op0&9) && !(op1&2) && (op2&7)==6 && (op3&0x183)==2)
   return decode_iclass_asimdall(ctx, dec);
  if(!(op0&9) && !(op1&2) && (op2&4)==4 && (op3&0x103)==0x102)
   UNALLOCATED(ENC_UNKNOWN);
  if(!(op0&9) && !(op1&2) && (op2&4)==4 && (op3&0x83)==0x82)
   UNALLOCATED(ENC_UNKNOWN);
  if(!(op0&9) && !(op1&2) && (op2&4)==4 && !(op3&3))
   return decode_iclass_asimddiff(ctx, dec);
  if(!(op0&9) && !(op1&2) && (op2&4)==4 && op3&1)
   return decode_iclass_asimdsame(ctx, dec);
  if(!(op0&9) && op1==2 && !op2 && op3&1)
   return decode_iclass_asimdimm(ctx, dec);
  if(!(op0&9) && op1==2 && op2 && op3&1)
   return decode_iclass_asimdshf(ctx, dec);
  if(!(op0&9) && op1==3 && op3&1)
   UNALLOCATED(ENC_UNKNOWN);
  if(!(op0&9) && (op1&2)==2 && !(op3&1))
   return decode_iclass_asimdelem(ctx, dec);
  if(op0==12 && !op1 && (op2&12)==8 && (op3&0x30)==0x20)
   return decode_iclass_crypto3_imm2(ctx, dec);
  if(op0==12 && !op1 && (op2&12)==12 && (op3&0x2c)==0x20)
   return decode_iclass_cryptosha512_3(ctx, dec);
  if(op0==12 && !op1 && !(op3&0x20))
   return decode_iclass_crypto4(ctx, dec);
  if(op0==12 && op1==1 && !(op2&12))
   return decode_iclass_crypto3_imm6(ctx, dec);
  if(op0==12 && op1==1 && op2==8 && (op3&0x1fc)==0x20)
   return decode_iclass_cryptosha512_2(ctx, dec);
  if((op0&9)==8 && (op1&2)==2)
   UNALLOCATED(ENC_UNKNOWN);
  if((op0&5)==1 && !(op1&2) && !(op2&4))
   return decode_iclass_float2fix(ctx, dec);
  if((op0&5)==1 && !(op1&2) && (op2&4)==4 && !(op3&0x3f))
   return decode_iclass_float2int(ctx, dec);
  if((op0&5)==1 && !(op1&2) && (op2&4)==4 && (op3&0x1f)==0x10)
   return decode_iclass_floatdp1(ctx, dec);
  if((op0&5)==1 && !(op1&2) && (op2&4)==4 && (op3&15)==8)
   return decode_iclass_floatcmp(ctx, dec);
  if((op0&5)==1 && !(op1&2) && (op2&4)==4 && (op3&7)==4)
   return decode_iclass_floatimm(ctx, dec);
  if((op0&5)==1 && !(op1&2) && (op2&4)==4 && (op3&3)==1)
   return decode_iclass_floatccmp(ctx, dec);
  if((op0&5)==1 && !(op1&2) && (op2&4)==4 && (op3&3)==2)
   return decode_iclass_floatdp2(ctx, dec);
  if((op0&5)==1 && !(op1&2) && (op2&4)==4 && (op3&3)==3)
   return decode_iclass_floatsel(ctx, dec);
  if((op0&5)==1 && (op1&2)==2)
   return decode_iclass_floatdp3(ctx, dec);
  UNMATCHED;
 }
 UNMATCHED;
}
