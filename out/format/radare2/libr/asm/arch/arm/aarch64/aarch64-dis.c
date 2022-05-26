# 1 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
# 21 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
#include "sysdep.h"
#include "disas-asm.h"
#include "libiberty.h"
#include "opintl.h"
#include "aarch64-dis.h"
#include "elf-bfd.h"

#define ERR_OK 0
#define ERR_UND -1
#define ERR_UNP -3
#define ERR_NYI -5

#define INSNLEN 4


enum map_type
{
  MAP_INSN,
  MAP_DATA
};

static enum map_type last_type;
static int last_mapping_sym = -1;
static bfd_vma last_mapping_addr = 0;


static int no_aliases = 0;
 static int no_notes = 1;


static void
set_default_aarch64_dis_options (struct disassemble_info *info ATTRIBUTE_UNUSED)
{
}

static void
parse_aarch64_dis_option (const char *option, unsigned int len ATTRIBUTE_UNUSED)
{

  if (CONST_STRNEQ (option, "no-aliases"))
    {
      no_aliases = 1;
      return;
    }

  if (CONST_STRNEQ (option, "aliases"))
    {
      no_aliases = 0;
      return;
    }

  if (CONST_STRNEQ (option, "no-notes"))
    {
      no_notes = 1;
      return;
    }

  if (CONST_STRNEQ (option, "notes"))
    {
      no_notes = 0;
      return;
    }

#ifdef DEBUG_AARCH64
  if (CONST_STRNEQ (option, "debug_dump"))
    {
      debug_dump = 1;
      return;
    }
#endif


  fprintf (stderr, _("unrecognised disassembler option: %s"), option);
}

static void
parse_aarch64_dis_options (const char *options)
{
  const char *option_end;

  if (options == NULL)
    return;

  while (*options != '\0')
    {

      if (*options == ',')
 {
   options++;
   continue;
 }


      option_end = options + 1;
      while (*option_end != ',' && *option_end != '\0')
 option_end++;

      parse_aarch64_dis_option (options, option_end - options);



      options = option_end;
    }
}
# 138 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
aarch64_insn
extract_fields (aarch64_insn code, aarch64_insn mask, ...)
{
  uint32_t num;
  const aarch64_field *field;
  enum aarch64_field_kind kind;
  va_list va;

  va_start (va, mask);
  num = va_arg (va, uint32_t);
  assert (num <= 5);
  aarch64_insn value = 0x0;
  while (num--)
    {
      kind = va_arg (va, enum aarch64_field_kind);
      field = &fields[kind];
      value <<= field->width;
      value |= extract_field (kind, code, mask);
    }
  va_end (va);
  return value;
}




static aarch64_insn
extract_all_fields (const aarch64_operand *self, aarch64_insn code)
{
  aarch64_insn value;
  unsigned int i;
  enum aarch64_field_kind kind;

  value = 0;
  for (i = 0; i < ARRAY_SIZE (self->fields) && self->fields[i] != FLD_NIL; i++)
    {
      kind = self->fields[i];
      value <<= fields[kind].width;
      value |= extract_field (kind, code, 0);
    }
  return value;
}


static inline int32_t
sign_extend (aarch64_insn value, unsigned i)
{
  uint32_t ret = value;

  assert (i < 32);
  if ((value >> i) & 0x1)
    {
      uint32_t val = (uint32_t)(-1) << i;
      ret = ret | val;
    }
  return (int32_t) ret;
}





static inline enum aarch64_opnd_qualifier
get_greg_qualifier_from_value (aarch64_insn value)
{
  enum aarch64_opnd_qualifier qualifier = AARCH64_OPND_QLF_W + value;
  assert (value <= 0x1
   && aarch64_get_qualifier_standard_value (qualifier) == value);
  return qualifier;
}




static inline enum aarch64_opnd_qualifier
get_vreg_qualifier_from_value (aarch64_insn value)
{
  enum aarch64_opnd_qualifier qualifier = AARCH64_OPND_QLF_V_8B + value;



  if (qualifier >= AARCH64_OPND_QLF_V_2H)
    qualifier += 1;

  assert (value <= 0x8
   && aarch64_get_qualifier_standard_value (qualifier) == value);
  return qualifier;
}


static inline enum aarch64_opnd_qualifier
get_sreg_qualifier_from_value (aarch64_insn value)
{
  enum aarch64_opnd_qualifier qualifier = AARCH64_OPND_QLF_S_B + value;

  assert (value <= 0x4
   && aarch64_get_qualifier_standard_value (qualifier) == value);
  return qualifier;
}






static aarch64_opnd_qualifier_t
get_expected_qualifier (const aarch64_inst *inst, int i)
{
  aarch64_opnd_qualifier_seq_t qualifiers;

  assert (inst->operands[i].qualifier == AARCH64_OPND_QLF_NIL);
  if (aarch64_find_best_match (inst, inst->opcode->qualifiers_list,
          i, qualifiers))
    return qualifiers[i];
  else
    return AARCH64_OPND_QLF_NIL;
}



bfd_boolean
aarch64_ext_regno (const aarch64_operand *self, aarch64_opnd_info *info,
     const aarch64_insn code,
     const aarch64_inst *inst ATTRIBUTE_UNUSED,
     aarch64_operand_error *errors ATTRIBUTE_UNUSED)
{
  info->reg.regno = extract_field (self->fields[0], code, 0);
  return TRUE;
}

bfd_boolean
aarch64_ext_regno_pair (const aarch64_operand *self ATTRIBUTE_UNUSED, aarch64_opnd_info *info,
     const aarch64_insn code ATTRIBUTE_UNUSED,
     const aarch64_inst *inst ATTRIBUTE_UNUSED,
     aarch64_operand_error *errors ATTRIBUTE_UNUSED)
{
  assert (info->idx == 1
   || info->idx ==3);
  info->reg.regno = inst->operands[info->idx - 1].reg.regno + 1;
  return TRUE;
}


bfd_boolean
aarch64_ext_regrt_sysins (const aarch64_operand *self, aarch64_opnd_info *info,
     const aarch64_insn code,
     const aarch64_inst *inst ATTRIBUTE_UNUSED,
     aarch64_operand_error *errors ATTRIBUTE_UNUSED)
{
  info->reg.regno = extract_field (self->fields[0], code, 0);
  assert (info->idx == 1
   && (aarch64_get_operand_class (inst->operands[0].type)
       == AARCH64_OPND_CLASS_SYSTEM));



  info->present = aarch64_sys_ins_reg_has_xt (inst->operands[0].sysins_op);

  return TRUE;
}


bfd_boolean
aarch64_ext_reglane (const aarch64_operand *self, aarch64_opnd_info *info,
       const aarch64_insn code,
       const aarch64_inst *inst ATTRIBUTE_UNUSED,
       aarch64_operand_error *errors ATTRIBUTE_UNUSED)
{

  info->reglane.regno = extract_field (self->fields[0], code,
           inst->opcode->mask);


  if (inst->opcode->iclass == asisdone
    || inst->opcode->iclass == asimdins)
    {
      if (info->type == AARCH64_OPND_En
   && inst->opcode->operands[0] == AARCH64_OPND_Ed)
 {
   unsigned shift;

   assert (info->idx == 1);
   aarch64_insn value = extract_field (FLD_imm4, code, 0);

   info->qualifier = get_expected_qualifier (inst, info->idx);
   shift = get_logsz (aarch64_get_qualifier_esize (info->qualifier));
   info->reglane.index = value >> shift;
 }
      else
 {







   int pos = -1;
   aarch64_insn value = extract_field (FLD_imm5, code, 0);
   while (++pos <= 3 && (value & 0x1) == 0)
     value >>= 1;
   if (pos > 3)
     return FALSE;
   info->qualifier = get_sreg_qualifier_from_value (pos);
   info->reglane.index = (unsigned) (value >> 1);
 }
    }
  else if (inst->opcode->iclass == dotproduct)
    {

      info->qualifier = get_expected_qualifier (inst, info->idx);
      switch (info->qualifier)
 {
 case AARCH64_OPND_QLF_S_4B:

   info->reglane.index = extract_fields (code, 0, 2, FLD_H, FLD_L);
   info->reglane.regno &= 0x1f;
   break;
 default:
   return FALSE;
 }
    }
  else if (inst->opcode->iclass == cryptosm3)
    {

      info->reglane.index = extract_field (FLD_SM3_imm2, code, 0);
    }
  else
    {




      info->qualifier = get_expected_qualifier (inst, info->idx);
      switch (info->qualifier)
 {
 case AARCH64_OPND_QLF_S_H:
   if (info->type == AARCH64_OPND_Em16)
     {

       info->reglane.index = extract_fields (code, 0, 3, FLD_H, FLD_L,
          FLD_M);
       info->reglane.regno &= 0xf;
     }
   else
     {

       info->reglane.index = extract_fields (code, 0, 2, FLD_H, FLD_L);
     }
   break;
 case AARCH64_OPND_QLF_S_S:

   info->reglane.index = extract_fields (code, 0, 2, FLD_H, FLD_L);
   break;
 case AARCH64_OPND_QLF_S_D:

   info->reglane.index = extract_field (FLD_H, code, 0);
   break;
 default:
   return FALSE;
 }

      if (inst->opcode->op == OP_FCMLA_ELEM
   && info->qualifier != AARCH64_OPND_QLF_S_H)
 {

   if (info->reglane.index & 1)
     return FALSE;
   info->reglane.index /= 2;
 }
    }

  return TRUE;
}

bfd_boolean
aarch64_ext_reglist (const aarch64_operand *self, aarch64_opnd_info *info,
       const aarch64_insn code,
       const aarch64_inst *inst ATTRIBUTE_UNUSED,
       aarch64_operand_error *errors ATTRIBUTE_UNUSED)
{

  info->reglist.first_regno = extract_field (self->fields[0], code, 0);

  info->reglist.num_regs = extract_field (FLD_len, code, 0) + 1;
  return TRUE;
}


bfd_boolean
aarch64_ext_ldst_reglist (const aarch64_operand *self ATTRIBUTE_UNUSED,
     aarch64_opnd_info *info, const aarch64_insn code,
     const aarch64_inst *inst,
     aarch64_operand_error *errors ATTRIBUTE_UNUSED)
{
  aarch64_insn value;

  unsigned expected_num = get_opcode_dependent_value (inst->opcode);

  struct
    {
      unsigned is_reserved;
      unsigned num_regs;
      unsigned num_elements;
    } data [] =
  { {0, 4, 4},
      {1, 4, 4},
      {0, 4, 1},
      {0, 4, 2},
      {0, 3, 3},
      {1, 3, 3},
      {0, 3, 1},
      {0, 1, 1},
      {0, 2, 2},
      {1, 2, 2},
      {0, 2, 1},
  };


  info->reglist.first_regno = extract_field (FLD_Rt, code, 0);

  value = extract_field (FLD_opcode, code, 0);

  if (value >= ARRAY_SIZE (data))
    return FALSE;
  if (expected_num != data[value].num_elements || data[value].is_reserved)
    return FALSE;
  info->reglist.num_regs = data[value].num_regs;

  return TRUE;
}



bfd_boolean
aarch64_ext_ldst_reglist_r (const aarch64_operand *self ATTRIBUTE_UNUSED,
       aarch64_opnd_info *info, const aarch64_insn code,
       const aarch64_inst *inst,
       aarch64_operand_error *errors ATTRIBUTE_UNUSED)
{
  aarch64_insn value;


  info->reglist.first_regno = extract_field (FLD_Rt, code, 0);

  value = extract_field (FLD_S, code, 0);



  info->reglist.num_regs = get_opcode_dependent_value (inst->opcode);
  assert (info->reglist.num_regs >= 1 && info->reglist.num_regs <= 4);


  if (info->reglist.num_regs == 1 && value == (aarch64_insn) 1)
    info->reglist.num_regs = 2;

  return TRUE;
}



bfd_boolean
aarch64_ext_ldst_elemlist (const aarch64_operand *self ATTRIBUTE_UNUSED,
      aarch64_opnd_info *info, const aarch64_insn code,
      const aarch64_inst *inst ATTRIBUTE_UNUSED,
      aarch64_operand_error *errors ATTRIBUTE_UNUSED)
{
  aarch64_field field = {0, 0};
  aarch64_insn QSsize;
  aarch64_insn opcodeh2;


  info->reglist.first_regno = extract_field (FLD_Rt, code, 0);


  gen_sub_field (FLD_asisdlso_opcode, 1, 2, &field);
  opcodeh2 = extract_field_2 (&field, code, 0);
  QSsize = extract_fields (code, 0, 3, FLD_Q, FLD_S, FLD_vldst_size);
  switch (opcodeh2)
    {
    case 0x0:
      info->qualifier = AARCH64_OPND_QLF_S_B;

      info->reglist.index = QSsize;
      break;
    case 0x1:
      if (QSsize & 0x1)

 return FALSE;
      info->qualifier = AARCH64_OPND_QLF_S_H;

      info->reglist.index = QSsize >> 1;
      break;
    case 0x2:
      if ((QSsize >> 1) & 0x1)

 return FALSE;
      if ((QSsize & 0x1) == 0)
 {
   info->qualifier = AARCH64_OPND_QLF_S_S;

   info->reglist.index = QSsize >> 2;
 }
      else
 {
   if (extract_field (FLD_S, code, 0))

     return FALSE;
   info->qualifier = AARCH64_OPND_QLF_S_D;

   info->reglist.index = QSsize >> 3;
 }
      break;
    default:
      return FALSE;
    }

  info->reglist.has_index = 1;
  info->reglist.num_regs = 0;


  info->reglist.num_regs = get_opcode_dependent_value (inst->opcode);
  assert (info->reglist.num_regs >= 1 && info->reglist.num_regs <= 4);

  return TRUE;
}





bfd_boolean
aarch64_ext_advsimd_imm_shift (const aarch64_operand *self ATTRIBUTE_UNUSED,
          aarch64_opnd_info *info, const aarch64_insn code,
          const aarch64_inst *inst,
          aarch64_operand_error *errors ATTRIBUTE_UNUSED)
{
  int pos;
  aarch64_insn Q, imm, immh;
  enum aarch64_insn_class iclass = inst->opcode->iclass;

  immh = extract_field (FLD_immh, code, 0);
  if (immh == 0)
    return FALSE;
  imm = extract_fields (code, 0, 2, FLD_immh, FLD_immb);
  pos = 4;

  while (--pos >= 0 && (immh & 0x8) == 0)
    immh <<= 1;

  assert ((iclass == asimdshf || iclass == asisdshf)
   && (info->type == AARCH64_OPND_IMM_VLSR
       || info->type == AARCH64_OPND_IMM_VLSL));

  if (iclass == asimdshf)
    {
      Q = extract_field (FLD_Q, code, 0);
# 605 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
      info->qualifier =
 get_vreg_qualifier_from_value ((pos << 1) | (int) Q);
    }
  else
    info->qualifier = get_sreg_qualifier_from_value (pos);

  if (info->type == AARCH64_OPND_IMM_VLSR)






    info->imm.value = (16 << pos) - imm;
  else







    info->imm.value = imm - (8 << pos);

  return TRUE;
}


bfd_boolean
aarch64_ext_shll_imm (const aarch64_operand *self ATTRIBUTE_UNUSED,
        aarch64_opnd_info *info, const aarch64_insn code,
        const aarch64_inst *inst ATTRIBUTE_UNUSED,
        aarch64_operand_error *errors ATTRIBUTE_UNUSED)
{
  int64_t imm;
  aarch64_insn val;
  val = extract_field (FLD_size, code, 0);
  switch (val)
    {
    case 0: imm = 8; break;
    case 1: imm = 16; break;
    case 2: imm = 32; break;
    default: return FALSE;
    }
  info->imm.value = imm;
  return TRUE;
}



bfd_boolean
aarch64_ext_imm (const aarch64_operand *self, aarch64_opnd_info *info,
   const aarch64_insn code,
   const aarch64_inst *inst ATTRIBUTE_UNUSED,
   aarch64_operand_error *errors ATTRIBUTE_UNUSED)
{
  int64_t imm;

  imm = extract_all_fields (self, code);

  if (operand_need_sign_extension (self))
    imm = sign_extend (imm, get_operand_fields_width (self) - 1);

  if (operand_need_shift_by_two (self))
    imm <<= 2;

  if (info->type == AARCH64_OPND_ADDR_ADRP)
    imm <<= 12;

  info->imm.value = imm;
  return TRUE;
}


bfd_boolean
aarch64_ext_imm_half (const aarch64_operand *self, aarch64_opnd_info *info,
        const aarch64_insn code,
        const aarch64_inst *inst ATTRIBUTE_UNUSED,
        aarch64_operand_error *errors)
{
  aarch64_ext_imm (self, info, code, inst, errors);
  info->shifter.kind = AARCH64_MOD_LSL;
  info->shifter.amount = extract_field (FLD_hw, code, 0) << 4;
  return TRUE;
}



bfd_boolean
aarch64_ext_advsimd_imm_modified (const aarch64_operand *self ATTRIBUTE_UNUSED,
      aarch64_opnd_info *info,
      const aarch64_insn code,
      const aarch64_inst *inst ATTRIBUTE_UNUSED,
      aarch64_operand_error *errors ATTRIBUTE_UNUSED)
{
  uint64_t imm;
  enum aarch64_opnd_qualifier opnd0_qualifier = inst->operands[0].qualifier;
  aarch64_field field = {0, 0};

  assert (info->idx == 1);

  if (info->type == AARCH64_OPND_SIMD_FPIMM)
    info->imm.is_fp = 1;


  imm = extract_fields (code, 0, 2, FLD_abc, FLD_defgh);
  if (!info->imm.is_fp && aarch64_get_qualifier_esize (opnd0_qualifier) == 8)
    {





      int i;
      unsigned abcdefgh = imm;
      for (imm = 0ull, i = 0; i < 8; i++)
 if (((abcdefgh >> i) & 0x1) != 0)
   imm |= 0xffull << (8 * i);
    }
  info->imm.value = imm;


  info->qualifier = get_expected_qualifier (inst, info->idx);
  switch (info->qualifier)
    {
    case AARCH64_OPND_QLF_NIL:

      info->shifter.kind = AARCH64_MOD_NONE;
      return 1;
    case AARCH64_OPND_QLF_LSL:

      info->shifter.kind = AARCH64_MOD_LSL;
      switch (aarch64_get_qualifier_esize (opnd0_qualifier))
 {
 case 4: gen_sub_field (FLD_cmode, 1, 2, &field); break;
 case 2: gen_sub_field (FLD_cmode, 1, 1, &field); break;
 case 1: gen_sub_field (FLD_cmode, 1, 0, &field); break;
 default: assert (0); return FALSE;
 }

      info->shifter.amount = extract_field_2 (&field, code, 0) << 3;
      break;
    case AARCH64_OPND_QLF_MSL:

      info->shifter.kind = AARCH64_MOD_MSL;
      gen_sub_field (FLD_cmode, 0, 1, &field);
      info->shifter.amount = extract_field_2 (&field, code, 0) ? 16 : 8;
      break;
    default:
      assert (0);
      return FALSE;
    }

  return TRUE;
}


bfd_boolean
aarch64_ext_fpimm (const aarch64_operand *self, aarch64_opnd_info *info,
     const aarch64_insn code,
     const aarch64_inst *inst ATTRIBUTE_UNUSED,
     aarch64_operand_error *errors ATTRIBUTE_UNUSED)
{
  info->imm.value = extract_all_fields (self, code);
  info->imm.is_fp = 1;
  return TRUE;
}


bfd_boolean
aarch64_ext_imm_rotate1 (const aarch64_operand *self, aarch64_opnd_info *info,
    const aarch64_insn code,
    const aarch64_inst *inst ATTRIBUTE_UNUSED,
    aarch64_operand_error *errors ATTRIBUTE_UNUSED)
{
  uint64_t rot = extract_field (self->fields[0], code, 0);
  assert (rot < 2U);
  info->imm.value = rot * 180 + 90;
  return TRUE;
}


bfd_boolean
aarch64_ext_imm_rotate2 (const aarch64_operand *self, aarch64_opnd_info *info,
    const aarch64_insn code,
    const aarch64_inst *inst ATTRIBUTE_UNUSED,
    aarch64_operand_error *errors ATTRIBUTE_UNUSED)
{
  uint64_t rot = extract_field (self->fields[0], code, 0);
  assert (rot < 4U);
  info->imm.value = rot * 90;
  return TRUE;
}


bfd_boolean
aarch64_ext_fbits (const aarch64_operand *self ATTRIBUTE_UNUSED,
     aarch64_opnd_info *info, const aarch64_insn code,
     const aarch64_inst *inst ATTRIBUTE_UNUSED,
     aarch64_operand_error *errors ATTRIBUTE_UNUSED)
{
  info->imm.value = 64- extract_field (FLD_scale, code, 0);
  return TRUE;
}



bfd_boolean
aarch64_ext_aimm (const aarch64_operand *self ATTRIBUTE_UNUSED,
    aarch64_opnd_info *info, const aarch64_insn code,
    const aarch64_inst *inst ATTRIBUTE_UNUSED,
    aarch64_operand_error *errors ATTRIBUTE_UNUSED)
{
  aarch64_insn value;

  info->shifter.kind = AARCH64_MOD_LSL;

  value = extract_field (FLD_shift, code, 0);
  if (value >= 2)
    return FALSE;
  info->shifter.amount = value ? 12 : 0;

  info->imm.value = extract_field (FLD_imm12, code, 0);

  return TRUE;
}




static bfd_boolean
decode_limm (uint32_t esize, aarch64_insn value, int64_t *result)
{
  uint64_t imm, mask;
  uint32_t N, R, S;
  unsigned simd_size;


  S = value & 0x3f;
  R = (value >> 6) & 0x3f;
  N = (value >> 12) & 0x1;



  if (N != 0)
    {
      simd_size = 64;
      mask = 0xffffffffffffffffull;
    }
  else
    {
#ifdef _MSC_VER
      if (S >= 0x00 && S <= 0x1f) { simd_size = 32; }
      else if (S >= 0x20 && S <= 0x2f) { simd_size = 16; S &= 0xf; }
      else if (S >= 0x30 && S <= 0x37) { simd_size = 8; S &= 0x7; }
      else if (S >= 0x38 && S <= 0x3b) { simd_size = 4; S &= 0x3; }
      else if (S >= 0x3c && S <= 0x3d) { simd_size = 2; S &= 0x1; }
      else { return 0; }
#else
      switch (S)
 {
 case 0x00 ... 0x1f: simd_size = 32; break;
 case 0x20 ... 0x2f: simd_size = 16; S &= 0xf; break;
 case 0x30 ... 0x37: simd_size = 8; S &= 0x7; break;
 case 0x38 ... 0x3b: simd_size = 4; S &= 0x3; break;
 case 0x3c ... 0x3d: simd_size = 2; S &= 0x1; break;
 default: return FALSE;
 }
#endif
      mask = (1ull << simd_size) - 1;

      R &= simd_size - 1;
    }

  if (simd_size > esize * 8)
    return FALSE;


  if (S == simd_size - 1)
    return FALSE;


  imm = (1ull << (S + 1)) - 1;

  if (R != 0)
    imm = ((imm << (simd_size - R)) & mask) | (imm >> R);

  switch (simd_size)
    {
    case 2: imm = (imm << 2) | imm;

    case 4: imm = (imm << 4) | imm;

    case 8: imm = (imm << 8) | imm;

    case 16: imm = (imm << 16) | imm;

    case 32: imm = (imm << 32) | imm;

    case 64: break;
    default: assert (0); return 0;
    }

  *result = imm & ~((uint64_t) -1 << (esize * 4) << (esize * 4));

  return TRUE;
}


bfd_boolean
aarch64_ext_limm (const aarch64_operand *self,
    aarch64_opnd_info *info, const aarch64_insn code,
    const aarch64_inst *inst,
    aarch64_operand_error *errors ATTRIBUTE_UNUSED)
{
  uint32_t esize;
  aarch64_insn value;

  value = extract_fields (code, 0, 3, self->fields[0], self->fields[1],
     self->fields[2]);
  esize = aarch64_get_qualifier_esize (inst->operands[0].qualifier);
  return decode_limm (esize, value, &info->imm.value);
}


bfd_boolean
aarch64_ext_inv_limm (const aarch64_operand *self,
        aarch64_opnd_info *info, const aarch64_insn code,
        const aarch64_inst *inst,
        aarch64_operand_error *errors)
{
  if (!aarch64_ext_limm (self, info, code, inst, errors))
    return FALSE;
  info->imm.value = ~info->imm.value;
  return TRUE;
}



bfd_boolean
aarch64_ext_ft (const aarch64_operand *self ATTRIBUTE_UNUSED,
  aarch64_opnd_info *info,
  const aarch64_insn code, const aarch64_inst *inst,
  aarch64_operand_error *errors ATTRIBUTE_UNUSED)
{
  aarch64_insn value;


  info->reg.regno = extract_field (FLD_Rt, code, 0);


  value = extract_field (FLD_ldst_size, code, 0);
  if (inst->opcode->iclass == ldstpair_indexed
      || inst->opcode->iclass == ldstnapair_offs
      || inst->opcode->iclass == ldstpair_off
      || inst->opcode->iclass == loadlit)
    {
      enum aarch64_opnd_qualifier qualifier;
      switch (value)
 {
 case 0: qualifier = AARCH64_OPND_QLF_S_S; break;
 case 1: qualifier = AARCH64_OPND_QLF_S_D; break;
 case 2: qualifier = AARCH64_OPND_QLF_S_Q; break;
 default: return FALSE;
 }
      info->qualifier = qualifier;
    }
  else
    {

      value = extract_fields (code, 0, 2, FLD_opc1, FLD_ldst_size);
      if (value > 0x4)
 return FALSE;
      info->qualifier = get_sreg_qualifier_from_value (value);
    }

  return TRUE;
}


bfd_boolean
aarch64_ext_addr_simple (const aarch64_operand *self ATTRIBUTE_UNUSED,
    aarch64_opnd_info *info,
    aarch64_insn code,
    const aarch64_inst *inst ATTRIBUTE_UNUSED,
    aarch64_operand_error *errors ATTRIBUTE_UNUSED)
{

  info->addr.base_regno = extract_field (FLD_Rn, code, 0);
  return TRUE;
}



bfd_boolean
aarch64_ext_addr_offset (const aarch64_operand *self ATTRIBUTE_UNUSED,
    aarch64_opnd_info *info,
    aarch64_insn code, const aarch64_inst *inst,
    aarch64_operand_error *errors ATTRIBUTE_UNUSED)
{
  info->qualifier = get_expected_qualifier (inst, info->idx);


  info->addr.base_regno = extract_field (self->fields[0], code, 0);


  aarch64_insn imm = extract_fields (code, 0, 1, self->fields[1]);
  info->addr.offset.imm = sign_extend (imm, 8);
  if (extract_field (self->fields[2], code, 0) == 1) {
    info->addr.writeback = 1;
    info->addr.preind = 1;
  }
  return TRUE;
}



bfd_boolean
aarch64_ext_addr_regoff (const aarch64_operand *self ATTRIBUTE_UNUSED,
    aarch64_opnd_info *info,
    aarch64_insn code, const aarch64_inst *inst,
    aarch64_operand_error *errors ATTRIBUTE_UNUSED)
{
  aarch64_insn S, value;


  info->addr.base_regno = extract_field (FLD_Rn, code, 0);

  info->addr.offset.regno = extract_field (FLD_Rm, code, 0);

  value = extract_field (FLD_option, code, 0);
  info->shifter.kind =
    aarch64_get_operand_modifier_from_value (value, TRUE );


  if (info->shifter.kind == AARCH64_MOD_UXTX)
    info->shifter.kind = AARCH64_MOD_LSL;

  S = extract_field (FLD_S, code, 0);
  if (S == 0)
    {
      info->shifter.amount = 0;
      info->shifter.amount_present = 0;
    }
  else
    {
      int size;


      info->qualifier = get_expected_qualifier (inst, info->idx);


      size = aarch64_get_qualifier_esize (info->qualifier);
      info->shifter.amount = get_logsz (size);
      info->shifter.amount_present = 1;
    }

  return TRUE;
}


bfd_boolean
aarch64_ext_addr_simm (const aarch64_operand *self, aarch64_opnd_info *info,
         aarch64_insn code, const aarch64_inst *inst,
         aarch64_operand_error *errors ATTRIBUTE_UNUSED)
{
  aarch64_insn imm;
  info->qualifier = get_expected_qualifier (inst, info->idx);


  info->addr.base_regno = extract_field (FLD_Rn, code, 0);

  imm = extract_field (self->fields[0], code, 0);
  info->addr.offset.imm = sign_extend (imm, fields[self->fields[0]].width - 1);
  if (self->fields[0] == FLD_imm7)

    info->addr.offset.imm *= aarch64_get_qualifier_esize (info->qualifier);

  if (inst->opcode->iclass == ldst_unscaled
      || inst->opcode->iclass == ldstnapair_offs
      || inst->opcode->iclass == ldstpair_off
      || inst->opcode->iclass == ldst_unpriv)
    info->addr.writeback = 0;
  else
    {

      info->addr.writeback = 1;
      if (extract_field (self->fields[1], code, 0) == 1)
 info->addr.preind = 1;
      else
 info->addr.postind = 1;
    }

  return TRUE;
}


bfd_boolean
aarch64_ext_addr_uimm12 (const aarch64_operand *self, aarch64_opnd_info *info,
    aarch64_insn code,
    const aarch64_inst *inst ATTRIBUTE_UNUSED,
    aarch64_operand_error *errors ATTRIBUTE_UNUSED)
{
  int shift;
  info->qualifier = get_expected_qualifier (inst, info->idx);
  shift = get_logsz (aarch64_get_qualifier_esize (info->qualifier));

  info->addr.base_regno = extract_field (self->fields[0], code, 0);

  info->addr.offset.imm = extract_field (self->fields[1], code, 0) << shift;
  return TRUE;
}


bfd_boolean
aarch64_ext_addr_simm10 (const aarch64_operand *self, aarch64_opnd_info *info,
    aarch64_insn code,
    const aarch64_inst *inst ATTRIBUTE_UNUSED,
    aarch64_operand_error *errors ATTRIBUTE_UNUSED)
{
  aarch64_insn imm;

  info->qualifier = get_expected_qualifier (inst, info->idx);

  info->addr.base_regno = extract_field (self->fields[0], code, 0);

  imm = extract_fields (code, 0, 2, self->fields[1], self->fields[2]);
  info->addr.offset.imm = sign_extend (imm, 9) << 3;
  if (extract_field (self->fields[3], code, 0) == 1) {
    info->addr.writeback = 1;
    info->addr.preind = 1;
  }
  return TRUE;
}



bfd_boolean
aarch64_ext_simd_addr_post (const aarch64_operand *self ATTRIBUTE_UNUSED,
       aarch64_opnd_info *info,
       aarch64_insn code, const aarch64_inst *inst,
       aarch64_operand_error *errors ATTRIBUTE_UNUSED)
{


  int is_ld1r = get_opcode_dependent_value (inst->opcode) == 1;


  info->addr.base_regno = extract_field (FLD_Rn, code, 0);

  info->addr.offset.regno = extract_field (FLD_Rm, code, 0);
  if (info->addr.offset.regno == 31)
    {
      if (inst->opcode->operands[0] == AARCH64_OPND_LVt_AL)

 info->addr.offset.imm = (is_ld1r ? 1
     : inst->operands[0].reglist.num_regs)
   * aarch64_get_qualifier_esize (inst->operands[0].qualifier);
      else
 info->addr.offset.imm = inst->operands[0].reglist.num_regs
   * aarch64_get_qualifier_esize (inst->operands[0].qualifier)
   * aarch64_get_qualifier_nelem (inst->operands[0].qualifier);
    }
  else
    info->addr.offset.is_reg = 1;
  info->addr.writeback = 1;

  return TRUE;
}


bfd_boolean
aarch64_ext_cond (const aarch64_operand *self ATTRIBUTE_UNUSED,
    aarch64_opnd_info *info,
    aarch64_insn code, const aarch64_inst *inst ATTRIBUTE_UNUSED,
    aarch64_operand_error *errors ATTRIBUTE_UNUSED)
{
  aarch64_insn value;

  value = extract_field (FLD_cond, code, 0);
  info->cond = get_cond_from_value (value);
  return TRUE;
}


bfd_boolean
aarch64_ext_sysreg (const aarch64_operand *self ATTRIBUTE_UNUSED,
      aarch64_opnd_info *info,
      aarch64_insn code,
      const aarch64_inst *inst ATTRIBUTE_UNUSED,
      aarch64_operand_error *errors ATTRIBUTE_UNUSED)
{

  info->sysreg.value = extract_fields (code, 0, 5, FLD_op0, FLD_op1, FLD_CRn,
           FLD_CRm, FLD_op2);
  info->sysreg.flags = 0;



  if (inst->opcode->iclass == ic_system)
    {


      if ((inst->opcode->flags & (F_SYS_READ | F_SYS_WRITE)) == F_SYS_READ)
 info->sysreg.flags = F_REG_READ;
      else if ((inst->opcode->flags & (F_SYS_READ | F_SYS_WRITE))
        == F_SYS_WRITE)
 info->sysreg.flags = F_REG_WRITE;
    }

  return TRUE;
}


bfd_boolean
aarch64_ext_pstatefield (const aarch64_operand *self ATTRIBUTE_UNUSED,
    aarch64_opnd_info *info, aarch64_insn code,
    const aarch64_inst *inst ATTRIBUTE_UNUSED,
    aarch64_operand_error *errors ATTRIBUTE_UNUSED)
{
  int i;

  info->pstatefield = extract_fields (code, 0, 2, FLD_op1, FLD_op2);
  for (i = 0; aarch64_pstatefields[i].name; i++)
    if (aarch64_pstatefields[i].value == (aarch64_insn)info->pstatefield)
      return TRUE;

  return FALSE;
}


bfd_boolean
aarch64_ext_sysins_op (const aarch64_operand *self ATTRIBUTE_UNUSED,
         aarch64_opnd_info *info,
         aarch64_insn code,
         const aarch64_inst *inst ATTRIBUTE_UNUSED,
         aarch64_operand_error *errors ATTRIBUTE_UNUSED)
{
  int i;
  aarch64_insn value;
  const aarch64_sys_ins_reg *sysins_ops;

  value = extract_fields (code, 0, 5,
     FLD_op0, FLD_op1, FLD_CRn,
     FLD_CRm, FLD_op2);

  switch (info->type)
    {
    case AARCH64_OPND_SYSREG_AT: sysins_ops = aarch64_sys_regs_at; break;
    case AARCH64_OPND_SYSREG_DC: sysins_ops = aarch64_sys_regs_dc; break;
    case AARCH64_OPND_SYSREG_IC: sysins_ops = aarch64_sys_regs_ic; break;
    case AARCH64_OPND_SYSREG_TLBI: sysins_ops = aarch64_sys_regs_tlbi; break;
    default: assert (0); return FALSE;
    }

  for (i = 0; sysins_ops[i].name; i++)
    if (sysins_ops[i].value == value)
      {
 info->sysins_op = sysins_ops + i;
 DEBUG_TRACE ("%s found value: %x, has_xt: %d, i: %d.",
       info->sysins_op->name,
       (unsigned)info->sysins_op->value,
       aarch64_sys_ins_reg_has_xt (info->sysins_op), i);
 return TRUE;
      }

  return FALSE;
}



bfd_boolean
aarch64_ext_barrier (const aarch64_operand *self ATTRIBUTE_UNUSED,
       aarch64_opnd_info *info,
       aarch64_insn code,
       const aarch64_inst *inst ATTRIBUTE_UNUSED,
       aarch64_operand_error *errors ATTRIBUTE_UNUSED)
{

  info->barrier = aarch64_barrier_options + extract_field (FLD_CRm, code, 0);
  return TRUE;
}




bfd_boolean
aarch64_ext_prfop (const aarch64_operand *self ATTRIBUTE_UNUSED,
     aarch64_opnd_info *info,
     aarch64_insn code, const aarch64_inst *inst ATTRIBUTE_UNUSED,
     aarch64_operand_error *errors ATTRIBUTE_UNUSED)
{

  info->prfop = aarch64_prfops + extract_field (FLD_Rt, code, 0);
  return TRUE;
}




bfd_boolean
aarch64_ext_hint (const aarch64_operand *self ATTRIBUTE_UNUSED,
    aarch64_opnd_info *info,
    aarch64_insn code,
    const aarch64_inst *inst ATTRIBUTE_UNUSED,
    aarch64_operand_error *errors ATTRIBUTE_UNUSED)
{

  unsigned hint_number;
  int i;

  hint_number = extract_fields (code, 0, 2, FLD_CRm, FLD_op2);

  for (i = 0; aarch64_hint_options[i].name != NULL; i++)
    {
      if (hint_number == aarch64_hint_options[i].value)
 {
   info->hint_option = &(aarch64_hint_options[i]);
   return TRUE;
 }
    }

  return FALSE;
}



bfd_boolean
aarch64_ext_reg_extended (const aarch64_operand *self ATTRIBUTE_UNUSED,
     aarch64_opnd_info *info,
     aarch64_insn code,
     const aarch64_inst *inst ATTRIBUTE_UNUSED,
     aarch64_operand_error *errors ATTRIBUTE_UNUSED)
{
  aarch64_insn value;


  info->reg.regno = extract_field (FLD_Rm, code, 0);

  value = extract_field (FLD_option, code, 0);
  info->shifter.kind =
    aarch64_get_operand_modifier_from_value (value, TRUE );

  info->shifter.amount = extract_field (FLD_imm3, code, 0);


  info->shifter.operator_present = 1;


  assert (inst->operands[0].qualifier != AARCH64_OPND_QLF_NIL);
  info->qualifier = AARCH64_OPND_QLF_W;
  if (inst->operands[0].qualifier == AARCH64_OPND_QLF_X
      && (info->shifter.kind == AARCH64_MOD_UXTX
   || info->shifter.kind == AARCH64_MOD_SXTX))
    info->qualifier = AARCH64_OPND_QLF_X;

  return TRUE;
}



bfd_boolean
aarch64_ext_reg_shifted (const aarch64_operand *self ATTRIBUTE_UNUSED,
    aarch64_opnd_info *info,
    aarch64_insn code,
    const aarch64_inst *inst ATTRIBUTE_UNUSED,
    aarch64_operand_error *errors ATTRIBUTE_UNUSED)
{
  aarch64_insn value;


  info->reg.regno = extract_field (FLD_Rm, code, 0);

  value = extract_field (FLD_shift, code, 0);
  info->shifter.kind =
    aarch64_get_operand_modifier_from_value (value, FALSE );
  if (info->shifter.kind == AARCH64_MOD_ROR
      && inst->opcode->iclass != log_shift)


    return FALSE;

  info->shifter.amount = extract_field (FLD_imm6, code, 0);


  info->shifter.operator_present = 1;

  return TRUE;
}





static bfd_boolean
aarch64_ext_sve_addr_reg_mul_vl (const aarch64_operand *self,
     aarch64_opnd_info *info, aarch64_insn code,
     int64_t offset)
{
  info->addr.base_regno = extract_field (self->fields[0], code, 0);
  info->addr.offset.imm = offset * (1 + get_operand_specific_data (self));
  info->addr.offset.is_reg = FALSE;
  info->addr.writeback = FALSE;
  info->addr.preind = TRUE;
  if (offset != 0)
    info->shifter.kind = AARCH64_MOD_MUL_VL;
  info->shifter.amount = 1;
  info->shifter.operator_present = (info->addr.offset.imm != 0);
  info->shifter.amount_present = FALSE;
  return TRUE;
}





bfd_boolean
aarch64_ext_sve_addr_ri_s4xvl (const aarch64_operand *self,
          aarch64_opnd_info *info, aarch64_insn code,
          const aarch64_inst *inst ATTRIBUTE_UNUSED,
          aarch64_operand_error *errors ATTRIBUTE_UNUSED)
{
  int offset;

  offset = extract_field (FLD_SVE_imm4, code, 0);
  offset = ((offset + 8) & 15) - 8;
  return aarch64_ext_sve_addr_reg_mul_vl (self, info, code, offset);
}





bfd_boolean
aarch64_ext_sve_addr_ri_s6xvl (const aarch64_operand *self,
          aarch64_opnd_info *info, aarch64_insn code,
          const aarch64_inst *inst ATTRIBUTE_UNUSED,
          aarch64_operand_error *errors ATTRIBUTE_UNUSED)
{
  int offset;

  offset = extract_field (FLD_SVE_imm6, code, 0);
  offset = (((offset + 32) & 63) - 32);
  return aarch64_ext_sve_addr_reg_mul_vl (self, info, code, offset);
}






bfd_boolean
aarch64_ext_sve_addr_ri_s9xvl (const aarch64_operand *self,
          aarch64_opnd_info *info,
          aarch64_insn code,
          const aarch64_inst *inst ATTRIBUTE_UNUSED,
          aarch64_operand_error *errors ATTRIBUTE_UNUSED)
{
  int offset;

  offset = extract_fields (code, 0, 2, FLD_SVE_imm6, FLD_imm3);
  offset = (((offset + 256) & 511) - 256);
  return aarch64_ext_sve_addr_reg_mul_vl (self, info, code, offset);
}




static bfd_boolean
aarch64_ext_sve_addr_reg_imm (const aarch64_operand *self,
         aarch64_opnd_info *info, aarch64_insn code,
         int64_t offset)
{
  info->addr.base_regno = extract_field (self->fields[0], code, 0);
  info->addr.offset.imm = offset * (1 << get_operand_specific_data (self));
  info->addr.offset.is_reg = FALSE;
  info->addr.writeback = FALSE;
  info->addr.preind = TRUE;
  info->shifter.operator_present = FALSE;
  info->shifter.amount_present = FALSE;
  return TRUE;
}




bfd_boolean
aarch64_ext_sve_addr_ri_s4 (const aarch64_operand *self,
       aarch64_opnd_info *info, aarch64_insn code,
       const aarch64_inst *inst ATTRIBUTE_UNUSED,
       aarch64_operand_error *errors ATTRIBUTE_UNUSED)
{
  int offset = sign_extend (extract_field (FLD_SVE_imm4, code, 0), 3);
  return aarch64_ext_sve_addr_reg_imm (self, info, code, offset);
}




bfd_boolean
aarch64_ext_sve_addr_ri_u6 (const aarch64_operand *self,
       aarch64_opnd_info *info, aarch64_insn code,
       const aarch64_inst *inst ATTRIBUTE_UNUSED,
       aarch64_operand_error *errors ATTRIBUTE_UNUSED)
{
  int offset = extract_field (FLD_SVE_imm6, code, 0);
  return aarch64_ext_sve_addr_reg_imm (self, info, code, offset);
}




bfd_boolean
aarch64_ext_sve_addr_rr_lsl (const aarch64_operand *self,
        aarch64_opnd_info *info, aarch64_insn code,
        const aarch64_inst *inst ATTRIBUTE_UNUSED,
        aarch64_operand_error *errors ATTRIBUTE_UNUSED)
{
  int index_regno;

  index_regno = extract_field (self->fields[1], code, 0);
  if (index_regno == 31 && (self->flags & OPD_F_NO_ZR) != 0)
    return FALSE;

  info->addr.base_regno = extract_field (self->fields[0], code, 0);
  info->addr.offset.regno = index_regno;
  info->addr.offset.is_reg = TRUE;
  info->addr.writeback = FALSE;
  info->addr.preind = TRUE;
  info->shifter.kind = AARCH64_MOD_LSL;
  info->shifter.amount = get_operand_specific_data (self);
  info->shifter.operator_present = (info->shifter.amount != 0);
  info->shifter.amount_present = (info->shifter.amount != 0);
  return TRUE;
}





bfd_boolean
aarch64_ext_sve_addr_rz_xtw (const aarch64_operand *self,
        aarch64_opnd_info *info, aarch64_insn code,
        const aarch64_inst *inst ATTRIBUTE_UNUSED,
        aarch64_operand_error *errors ATTRIBUTE_UNUSED)
{
  info->addr.base_regno = extract_field (self->fields[0], code, 0);
  info->addr.offset.regno = extract_field (self->fields[1], code, 0);
  info->addr.offset.is_reg = TRUE;
  info->addr.writeback = FALSE;
  info->addr.preind = TRUE;
  if (extract_field (self->fields[2], code, 0))
    info->shifter.kind = AARCH64_MOD_SXTW;
  else
    info->shifter.kind = AARCH64_MOD_UXTW;
  info->shifter.amount = get_operand_specific_data (self);
  info->shifter.operator_present = TRUE;
  info->shifter.amount_present = (info->shifter.amount != 0);
  return TRUE;
}




bfd_boolean
aarch64_ext_sve_addr_zi_u5 (const aarch64_operand *self,
       aarch64_opnd_info *info, aarch64_insn code,
       const aarch64_inst *inst ATTRIBUTE_UNUSED,
       aarch64_operand_error *errors ATTRIBUTE_UNUSED)
{
  int offset = extract_field (FLD_imm5, code, 0);
  return aarch64_ext_sve_addr_reg_imm (self, info, code, offset);
}





static bfd_boolean
aarch64_ext_sve_addr_zz (const aarch64_operand *self, aarch64_opnd_info *info,
    aarch64_insn code, enum aarch64_modifier_kind kind)
{
  info->addr.base_regno = extract_field (self->fields[0], code, 0);
  info->addr.offset.regno = extract_field (self->fields[1], code, 0);
  info->addr.offset.is_reg = TRUE;
  info->addr.writeback = FALSE;
  info->addr.preind = TRUE;
  info->shifter.kind = kind;
  info->shifter.amount = extract_field (FLD_SVE_msz, code, 0);
  info->shifter.operator_present = (kind != AARCH64_MOD_LSL
        || info->shifter.amount != 0);
  info->shifter.amount_present = (info->shifter.amount != 0);
  return TRUE;
}




bfd_boolean
aarch64_ext_sve_addr_zz_lsl (const aarch64_operand *self,
        aarch64_opnd_info *info, aarch64_insn code,
        const aarch64_inst *inst ATTRIBUTE_UNUSED,
        aarch64_operand_error *errors ATTRIBUTE_UNUSED)
{
  return aarch64_ext_sve_addr_zz (self, info, code, AARCH64_MOD_LSL);
}




bfd_boolean
aarch64_ext_sve_addr_zz_sxtw (const aarch64_operand *self,
         aarch64_opnd_info *info, aarch64_insn code,
         const aarch64_inst *inst ATTRIBUTE_UNUSED,
         aarch64_operand_error *errors ATTRIBUTE_UNUSED)
{
  return aarch64_ext_sve_addr_zz (self, info, code, AARCH64_MOD_SXTW);
}




bfd_boolean
aarch64_ext_sve_addr_zz_uxtw (const aarch64_operand *self,
         aarch64_opnd_info *info, aarch64_insn code,
         const aarch64_inst *inst ATTRIBUTE_UNUSED,
         aarch64_operand_error *errors ATTRIBUTE_UNUSED)
{
  return aarch64_ext_sve_addr_zz (self, info, code, AARCH64_MOD_UXTW);
}



static bfd_boolean
decode_sve_aimm (aarch64_opnd_info *info, int64_t value)
{
  info->shifter.kind = AARCH64_MOD_LSL;
  info->shifter.amount = 0;
  if (info->imm.value & 0x100)
    {
      if (value == 0)

 info->shifter.amount = 8;
      else
 value *= 256;
    }
  info->shifter.operator_present = (info->shifter.amount != 0);
  info->shifter.amount_present = (info->shifter.amount != 0);
  info->imm.value = value;
  return TRUE;
}


bfd_boolean
aarch64_ext_sve_aimm (const aarch64_operand *self,
        aarch64_opnd_info *info, const aarch64_insn code,
        const aarch64_inst *inst,
        aarch64_operand_error *errors)
{
  return (aarch64_ext_imm (self, info, code, inst, errors)
   && decode_sve_aimm (info, (uint8_t) info->imm.value));
}


bfd_boolean
aarch64_ext_sve_asimm (const aarch64_operand *self,
         aarch64_opnd_info *info, const aarch64_insn code,
         const aarch64_inst *inst,
         aarch64_operand_error *errors)
{
  return (aarch64_ext_imm (self, info, code, inst, errors)
   && decode_sve_aimm (info, (int8_t) info->imm.value));
}



bfd_boolean
aarch64_ext_sve_float_half_one (const aarch64_operand *self,
    aarch64_opnd_info *info, aarch64_insn code,
    const aarch64_inst *inst ATTRIBUTE_UNUSED,
    aarch64_operand_error *errors ATTRIBUTE_UNUSED)
{
  if (extract_field (self->fields[0], code, 0))
    info->imm.value = 0x3f800000;
  else
    info->imm.value = 0x3f000000;
  info->imm.is_fp = TRUE;
  return TRUE;
}



bfd_boolean
aarch64_ext_sve_float_half_two (const aarch64_operand *self,
    aarch64_opnd_info *info, aarch64_insn code,
    const aarch64_inst *inst ATTRIBUTE_UNUSED,
    aarch64_operand_error *errors ATTRIBUTE_UNUSED)
{
  if (extract_field (self->fields[0], code, 0))
    info->imm.value = 0x40000000;
  else
    info->imm.value = 0x3f000000;
  info->imm.is_fp = TRUE;
  return TRUE;
}



bfd_boolean
aarch64_ext_sve_float_zero_one (const aarch64_operand *self,
    aarch64_opnd_info *info, aarch64_insn code,
    const aarch64_inst *inst ATTRIBUTE_UNUSED,
    aarch64_operand_error *errors ATTRIBUTE_UNUSED)
{
  if (extract_field (self->fields[0], code, 0))
    info->imm.value = 0x3f800000;
  else
    info->imm.value = 0x0;
  info->imm.is_fp = TRUE;
  return TRUE;
}





bfd_boolean
aarch64_ext_sve_index (const aarch64_operand *self,
         aarch64_opnd_info *info, aarch64_insn code,
         const aarch64_inst *inst ATTRIBUTE_UNUSED,
         aarch64_operand_error *errors ATTRIBUTE_UNUSED)
{
  int val;

  info->reglane.regno = extract_field (self->fields[0], code, 0);
  val = extract_fields (code, 0, 2, FLD_SVE_tszh, FLD_imm5);
  if ((val & 31) == 0)
    return 0;
  while ((val & 1) == 0)
    val /= 2;
  info->reglane.index = val / 2;
  return TRUE;
}


bfd_boolean
aarch64_ext_sve_limm_mov (const aarch64_operand *self,
     aarch64_opnd_info *info, const aarch64_insn code,
     const aarch64_inst *inst,
     aarch64_operand_error *errors)
{
  int esize = aarch64_get_qualifier_esize (inst->operands[0].qualifier);
  return (aarch64_ext_limm (self, info, code, inst, errors)
   && aarch64_sve_dupm_mov_immediate_p (info->imm.value, esize));
}




bfd_boolean
aarch64_ext_sve_quad_index (const aarch64_operand *self,
       aarch64_opnd_info *info, aarch64_insn code,
       const aarch64_inst *inst ATTRIBUTE_UNUSED,
       aarch64_operand_error *errors ATTRIBUTE_UNUSED)
{
  unsigned int reg_bits = get_operand_specific_data (self);
  unsigned int val = extract_all_fields (self, code);
  info->reglane.regno = val & ((1 << reg_bits) - 1);
  info->reglane.index = val >> reg_bits;
  return TRUE;
}




bfd_boolean
aarch64_ext_sve_reglist (const aarch64_operand *self,
    aarch64_opnd_info *info, aarch64_insn code,
    const aarch64_inst *inst ATTRIBUTE_UNUSED,
    aarch64_operand_error *errors ATTRIBUTE_UNUSED)
{
  info->reglist.first_regno = extract_field (self->fields[0], code, 0);
  info->reglist.num_regs = get_opcode_dependent_value (inst->opcode);
  return TRUE;
}




bfd_boolean
aarch64_ext_sve_scale (const aarch64_operand *self,
         aarch64_opnd_info *info, aarch64_insn code,
         const aarch64_inst *inst, aarch64_operand_error *errors)
{
  int val;

  if (!aarch64_ext_imm (self, info, code, inst, errors))
    return FALSE;
  val = extract_field (FLD_SVE_imm4, code, 0);
  info->shifter.kind = AARCH64_MOD_MUL;
  info->shifter.amount = val + 1;
  info->shifter.operator_present = (val != 0);
  info->shifter.amount_present = (val != 0);
  return TRUE;
}



static uint64_t
get_top_bit (uint64_t value)
{
  while ((value & -value) != value)
    value -= value & -value;
  return value;
}


bfd_boolean
aarch64_ext_sve_shlimm (const aarch64_operand *self,
   aarch64_opnd_info *info, const aarch64_insn code,
   const aarch64_inst *inst, aarch64_operand_error *errors)
{
  if (!aarch64_ext_imm (self, info, code, inst, errors)
      || info->imm.value == 0)
    return FALSE;

  info->imm.value -= get_top_bit (info->imm.value);
  return TRUE;
}


bfd_boolean
aarch64_ext_sve_shrimm (const aarch64_operand *self,
   aarch64_opnd_info *info, const aarch64_insn code,
   const aarch64_inst *inst, aarch64_operand_error *errors)
{
  if (!aarch64_ext_imm (self, info, code, inst, errors)
      || info->imm.value == 0)
    return FALSE;

  info->imm.value = get_top_bit (info->imm.value) * 2 - info->imm.value;
  return TRUE;
}
# 1869 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
static enum aarch64_opnd_qualifier
get_qualifier_from_partial_encoding (aarch64_insn value,
         const enum aarch64_opnd_qualifier* \
         candidates,
         aarch64_insn mask)
{
  int i;
  DEBUG_TRACE ("enter with value: %d, mask: %d", (int)value, (int)mask);
  for (i = 0; i < AARCH64_MAX_QLF_SEQ_NUM; i++)
    {
      aarch64_insn standard_value;
      if (candidates[i] == AARCH64_OPND_QLF_NIL)
 break;
      standard_value = aarch64_get_qualifier_standard_value (candidates[i]);
      if ((standard_value & mask) == (value & mask))
 return candidates[i];
    }
  return AARCH64_OPND_QLF_NIL;
}





static void
get_operand_possible_qualifiers (int idx,
     const aarch64_opnd_qualifier_seq_t *list,
     enum aarch64_opnd_qualifier *qualifiers)
{
  int i;
  for (i = 0; i < AARCH64_MAX_QLF_SEQ_NUM; i++)
    if ((qualifiers[i] = list[i][idx]) == AARCH64_OPND_QLF_NIL)
      break;
}






static int
decode_sizeq (aarch64_inst *inst)
{
  int idx;
  enum aarch64_opnd_qualifier qualifier;
  aarch64_insn code;
  aarch64_insn value, mask;
  enum aarch64_field_kind fld_sz;
  enum aarch64_opnd_qualifier candidates[AARCH64_MAX_QLF_SEQ_NUM];

  if (inst->opcode->iclass == asisdlse
     || inst->opcode->iclass == asisdlsep
     || inst->opcode->iclass == asisdlso
     || inst->opcode->iclass == asisdlsop)
    fld_sz = FLD_vldst_size;
  else
    fld_sz = FLD_size;

  code = inst->value;
  value = extract_fields (code, inst->opcode->mask, 2, fld_sz, FLD_Q);



  mask = extract_fields (~inst->opcode->mask, 0, 2, fld_sz, FLD_Q);




  idx = aarch64_select_operand_for_sizeq_field_coding (inst->opcode);
  DEBUG_TRACE ("key idx: %d", idx);



  if (mask == 0x7)
    {
      inst->operands[idx].qualifier = get_vreg_qualifier_from_value (value);
      return 1;
    }

  get_operand_possible_qualifiers (idx, inst->opcode->qualifiers_list,
       candidates);
#ifdef DEBUG_AARCH64
  if (debug_dump)
    {
      int i;
      for (i = 0; candidates[i] != AARCH64_OPND_QLF_NIL
    && i < AARCH64_MAX_QLF_SEQ_NUM; i++)
 DEBUG_TRACE ("qualifier %d: %s", i,
       aarch64_get_qualifier_name(candidates[i]));
      DEBUG_TRACE ("%d, %d", (int)value, (int)mask);
    }
#endif

  qualifier = get_qualifier_from_partial_encoding (value, candidates, mask);

  if (qualifier == AARCH64_OPND_QLF_NIL)
    return 0;

  inst->operands[idx].qualifier = qualifier;
  return 1;
}




static int
decode_asimd_fcvt (aarch64_inst *inst)
{
  aarch64_field field = {0, 0};
  aarch64_insn value;
  enum aarch64_opnd_qualifier qualifier;

  gen_sub_field (FLD_size, 0, 1, &field);
  value = extract_field_2 (&field, inst->value, 0);
  qualifier = value == 0 ? AARCH64_OPND_QLF_V_4S
    : AARCH64_OPND_QLF_V_2D;
  switch (inst->opcode->op)
    {
    case OP_FCVTN:
    case OP_FCVTN2:

      inst->operands[1].qualifier = qualifier;
      break;
    case OP_FCVTL:
    case OP_FCVTL2:

      inst->operands[0].qualifier = qualifier;
      break;
    default:
      assert (0);
      return 0;
    }

  return 1;
}




static int
decode_asisd_fcvtxn (aarch64_inst *inst)
{
  aarch64_field field = {0, 0};
  gen_sub_field (FLD_size, 0, 1, &field);
  if (!extract_field_2 (&field, inst->value, 0))
    return 0;
  inst->operands[0].qualifier = AARCH64_OPND_QLF_S_S;
  return 1;
}


static int
decode_fcvt (aarch64_inst *inst)
{
  enum aarch64_opnd_qualifier qualifier;
  aarch64_insn value;
  const aarch64_field field = {15, 2};


  value = extract_field_2 (&field, inst->value, 0);
  switch (value)
    {
    case 0: qualifier = AARCH64_OPND_QLF_S_S; break;
    case 1: qualifier = AARCH64_OPND_QLF_S_D; break;
    case 3: qualifier = AARCH64_OPND_QLF_S_H; break;
    default: return 0;
    }
  inst->operands[0].qualifier = qualifier;

  return 1;
}




static int
do_misc_decoding (aarch64_inst *inst)
{
  unsigned int value;
  switch (inst->opcode->op)
    {
    case OP_FCVT:
      return decode_fcvt (inst);

    case OP_FCVTN:
    case OP_FCVTN2:
    case OP_FCVTL:
    case OP_FCVTL2:
      return decode_asimd_fcvt (inst);

    case OP_FCVTXN_S:
      return decode_asisd_fcvtxn (inst);

    case OP_MOV_P_P:
    case OP_MOVS_P_P:
      value = extract_field (FLD_SVE_Pn, inst->value, 0);
      return (value == extract_field (FLD_SVE_Pm, inst->value, 0)
       && value == extract_field (FLD_SVE_Pg4_10, inst->value, 0));

    case OP_MOV_Z_P_Z:
      return (extract_field (FLD_SVE_Zd, inst->value, 0)
       == extract_field (FLD_SVE_Zm_16, inst->value, 0));

    case OP_MOV_Z_V:

      value = extract_fields (inst->value, 0, 2, FLD_SVE_tszh, FLD_imm5);
      return value > 0 && value <= 16 && value == (value & -value);

    case OP_MOV_Z_Z:
      return (extract_field (FLD_SVE_Zn, inst->value, 0)
       == extract_field (FLD_SVE_Zm_16, inst->value, 0));

    case OP_MOV_Z_Zi:

      value = extract_fields (inst->value, 0, 2, FLD_SVE_tszh, FLD_imm5);
      return value > 0 && value != (value & -value);

    case OP_MOVM_P_P_P:
      return (extract_field (FLD_SVE_Pd, inst->value, 0)
       == extract_field (FLD_SVE_Pm, inst->value, 0));

    case OP_MOVZS_P_P_P:
    case OP_MOVZ_P_P_P:
      return (extract_field (FLD_SVE_Pn, inst->value, 0)
       == extract_field (FLD_SVE_Pm, inst->value, 0));

    case OP_NOTS_P_P_P_Z:
    case OP_NOT_P_P_P_Z:
      return (extract_field (FLD_SVE_Pm, inst->value, 0)
       == extract_field (FLD_SVE_Pg4_10, inst->value, 0));

    default:
      return 0;
    }
}







static int
do_special_decoding (aarch64_inst *inst)
{
  int idx;
  aarch64_insn value;

  if (inst->opcode->flags & F_COND)
    {
      value = extract_field (FLD_cond2, inst->value, 0);
      inst->cond = get_cond_from_value (value);
    }

  if (inst->opcode->flags & F_SF)
    {
      idx = select_operand_for_sf_field_coding (inst->opcode);
      value = extract_field (FLD_sf, inst->value, 0);
      inst->operands[idx].qualifier = get_greg_qualifier_from_value (value);
      if ((inst->opcode->flags & F_N)
   && extract_field (FLD_N, inst->value, 0) != value)
 return 0;
    }

  if (inst->opcode->flags & F_LSE_SZ)
    {
      idx = select_operand_for_sf_field_coding (inst->opcode);
      value = extract_field (FLD_lse_sz, inst->value, 0);
      inst->operands[idx].qualifier = get_greg_qualifier_from_value (value);
    }

  if (inst->opcode->flags & F_SIZEQ)
    return decode_sizeq (inst);

  if (inst->opcode->flags & F_FPTYPE)
    {
      idx = select_operand_for_fptype_field_coding (inst->opcode);
      value = extract_field (FLD_type, inst->value, 0);
      switch (value)
 {
 case 0: inst->operands[idx].qualifier = AARCH64_OPND_QLF_S_S; break;
 case 1: inst->operands[idx].qualifier = AARCH64_OPND_QLF_S_D; break;
 case 3: inst->operands[idx].qualifier = AARCH64_OPND_QLF_S_H; break;
 default: return 0;
 }
    }

  if (inst->opcode->flags & F_SSIZE)
    {


      aarch64_insn mask;
      enum aarch64_opnd_qualifier candidates[AARCH64_MAX_QLF_SEQ_NUM];
      idx = select_operand_for_scalar_size_field_coding (inst->opcode);
      value = extract_field (FLD_size, inst->value, inst->opcode->mask);
      mask = extract_field (FLD_size, ~inst->opcode->mask, 0);


      if (mask == 0x3)
 inst->operands[idx].qualifier = get_sreg_qualifier_from_value (value);
      else
 {
   get_operand_possible_qualifiers (idx, inst->opcode->qualifiers_list,
        candidates);
   inst->operands[idx].qualifier
     = get_qualifier_from_partial_encoding (value, candidates, mask);
 }
    }

  if (inst->opcode->flags & F_T)
    {

      int num = 0;
      unsigned val, Q;
      assert (aarch64_get_operand_class (inst->opcode->operands[0])
       == AARCH64_OPND_CLASS_SIMD_REG);
# 2195 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
      val = extract_field (FLD_imm5, inst->value, 0);
      while ((val & 0x1) == 0 && ++num <= 3)
 val >>= 1;
      if (num > 3)
 return 0;
      Q = (unsigned) extract_field (FLD_Q, inst->value, inst->opcode->mask);
      inst->operands[0].qualifier =
 get_vreg_qualifier_from_value ((num << 1) | Q);
    }

  if (inst->opcode->flags & F_GPRSIZE_IN_Q)
    {


      idx = aarch64_operand_index (inst->opcode->operands, AARCH64_OPND_Rt);
      if (idx == -1)
 {


   assert (aarch64_get_operand_class (inst->opcode->operands[0])
    == AARCH64_OPND_CLASS_INT_REG);
   idx = 0;
 }
      assert (idx == 0 || idx == 1);
      value = extract_field (FLD_Q, inst->value, 0);
      inst->operands[idx].qualifier = get_greg_qualifier_from_value (value);
    }

  if (inst->opcode->flags & F_LDS_SIZE)
    {
      aarch64_field field = {0, 0};
      assert (aarch64_get_operand_class (inst->opcode->operands[0])
       == AARCH64_OPND_CLASS_INT_REG);
      gen_sub_field (FLD_opc, 0, 1, &field);
      value = extract_field_2 (&field, inst->value, 0);
      inst->operands[0].qualifier
 = value ? AARCH64_OPND_QLF_W : AARCH64_OPND_QLF_X;
    }


  if (inst->opcode->flags & F_MISC)
    return do_misc_decoding (inst);

  return 1;
}






static int
convert_extr_to_ror (aarch64_inst *inst)
{
  if (inst->operands[1].reg.regno == inst->operands[2].reg.regno)
    {
      copy_operand_info (inst, 2, 3);
      inst->operands[3].type = AARCH64_OPND_NIL;
      return 1;
    }
  return 0;
}




static int
convert_shll_to_xtl (aarch64_inst *inst)
{
  if (inst->operands[2].imm.value == 0)
    {
      inst->operands[2].type = AARCH64_OPND_NIL;
      return 1;
    }
  return 0;
}





static int
convert_bfm_to_sr (aarch64_inst *inst)
{
  int64_t imms, val;

  imms = inst->operands[3].imm.value;
  val = inst->operands[2].qualifier == AARCH64_OPND_QLF_imm_0_31 ? 31 : 63;
  if (imms == val)
    {
      inst->operands[3].type = AARCH64_OPND_NIL;
      return 1;
    }

  return 0;
}


static int
convert_orr_to_mov (aarch64_inst *inst)
{



  if (inst->operands[1].reg.regno == inst->operands[2].reg.regno)
    {
      inst->operands[2].type = AARCH64_OPND_NIL;
      return 1;
    }
  return 0;
}






static int
convert_bfm_to_bfx (aarch64_inst *inst)
{
  int64_t immr, imms;

  immr = inst->operands[2].imm.value;
  imms = inst->operands[3].imm.value;
  if (imms >= immr)
    {
      int64_t lsb = immr;
      inst->operands[2].imm.value = lsb;
      inst->operands[3].imm.value = imms + 1 - lsb;


      reset_operand_qualifier (inst, 2);
      reset_operand_qualifier (inst, 3);
      return 1;
    }

  return 0;
}






static int
convert_bfm_to_bfi (aarch64_inst *inst)
{
  int64_t immr, imms, val;

  immr = inst->operands[2].imm.value;
  imms = inst->operands[3].imm.value;
  val = inst->operands[2].qualifier == AARCH64_OPND_QLF_imm_0_31 ? 32 : 64;
  if (imms < immr)
    {
      inst->operands[2].imm.value = (val - immr) & (val - 1);
      inst->operands[3].imm.value = imms + 1;


      reset_operand_qualifier (inst, 2);
      reset_operand_qualifier (inst, 3);
      return 1;
    }

  return 0;
}






static int
convert_bfm_to_bfc (aarch64_inst *inst)
{
  int64_t immr, imms, val;


  assert (inst->operands[1].reg.regno == 0x1f);

  immr = inst->operands[2].imm.value;
  imms = inst->operands[3].imm.value;
  val = inst->operands[2].qualifier == AARCH64_OPND_QLF_imm_0_31 ? 32 : 64;
  if (imms < immr)
    {

      copy_operand_info (inst, 1, 2);
      copy_operand_info (inst, 2, 3);
      inst->operands[3].type = AARCH64_OPND_NIL;


      inst->operands[1].imm.value = (val - immr) & (val - 1);
      inst->operands[2].imm.value = imms + 1;



      reset_operand_qualifier (inst, 1);
      reset_operand_qualifier (inst, 2);
      reset_operand_qualifier (inst, 3);

      return 1;
    }

  return 0;
}






static int
convert_ubfm_to_lsl (aarch64_inst *inst)
{
  int64_t immr = inst->operands[2].imm.value;
  int64_t imms = inst->operands[3].imm.value;
  int64_t val
    = inst->operands[2].qualifier == AARCH64_OPND_QLF_imm_0_31 ? 31 : 63;

  if ((immr == 0 && imms == val) || immr == imms + 1)
    {
      inst->operands[3].type = AARCH64_OPND_NIL;
      inst->operands[2].imm.value = val - imms;
      return 1;
    }

  return 0;
}






static int
convert_from_csel (aarch64_inst *inst)
{
  if (inst->operands[1].reg.regno == inst->operands[2].reg.regno
      && (inst->operands[3].cond->value & 0xe) != 0xe)
    {
      copy_operand_info (inst, 2, 3);
      inst->operands[2].cond = get_inverted_cond (inst->operands[3].cond);
      inst->operands[3].type = AARCH64_OPND_NIL;
      return 1;
    }
  return 0;
}






static int
convert_csinc_to_cset (aarch64_inst *inst)
{
  if (inst->operands[1].reg.regno == 0x1f
      && inst->operands[2].reg.regno == 0x1f
      && (inst->operands[3].cond->value & 0xe) != 0xe)
    {
      copy_operand_info (inst, 1, 3);
      inst->operands[1].cond = get_inverted_cond (inst->operands[3].cond);
      inst->operands[3].type = AARCH64_OPND_NIL;
      inst->operands[2].type = AARCH64_OPND_NIL;
      return 1;
    }
  return 0;
}
# 2473 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
static int
convert_movewide_to_mov (aarch64_inst *inst)
{
  uint64_t value = inst->operands[1].imm.value;

  if (value == 0 && inst->operands[1].shifter.amount != 0)
    return 0;
  inst->operands[1].type = AARCH64_OPND_IMM_MOV;
  inst->operands[1].shifter.kind = AARCH64_MOD_NONE;
  value <<= inst->operands[1].shifter.amount;


  if (inst->opcode->op == OP_MOVN)
    {
      int is32 = inst->operands[0].qualifier == AARCH64_OPND_QLF_W;
      value = ~value;

      if (aarch64_wide_constant_p (value, is32, NULL))
 return 0;
    }
  inst->operands[1].imm.value = value;
  inst->operands[1].shifter.amount = 0;
  return 1;
}
# 2508 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
static int
convert_movebitmask_to_mov (aarch64_inst *inst)
{
  int is32;
  uint64_t value;


  assert (inst->operands[1].reg.regno == 0x1f);
  copy_operand_info (inst, 1, 2);
  is32 = inst->operands[0].qualifier == AARCH64_OPND_QLF_W;
  inst->operands[1].type = AARCH64_OPND_IMM_MOV;
  value = inst->operands[1].imm.value;


  if (inst->operands[0].reg.regno != 0x1f
      && (aarch64_wide_constant_p (value, is32, NULL)
   || aarch64_wide_constant_p (~value, is32, NULL)))
    return 0;

  inst->operands[2].type = AARCH64_OPND_NIL;
  return 1;
}




static int
convert_to_alias (aarch64_inst *inst, const aarch64_opcode *alias)
{
  switch (alias->op)
    {
    case OP_ASR_IMM:
    case OP_LSR_IMM:
      return convert_bfm_to_sr (inst);
    case OP_LSL_IMM:
      return convert_ubfm_to_lsl (inst);
    case OP_CINC:
    case OP_CINV:
    case OP_CNEG:
      return convert_from_csel (inst);
    case OP_CSET:
    case OP_CSETM:
      return convert_csinc_to_cset (inst);
    case OP_UBFX:
    case OP_BFXIL:
    case OP_SBFX:
      return convert_bfm_to_bfx (inst);
    case OP_SBFIZ:
    case OP_BFI:
    case OP_UBFIZ:
      return convert_bfm_to_bfi (inst);
    case OP_BFC:
      return convert_bfm_to_bfc (inst);
    case OP_MOV_V:
      return convert_orr_to_mov (inst);
    case OP_MOV_IMM_WIDE:
    case OP_MOV_IMM_WIDEN:
      return convert_movewide_to_mov (inst);
    case OP_MOV_IMM_LOG:
      return convert_movebitmask_to_mov (inst);
    case OP_ROR_IMM:
      return convert_extr_to_ror (inst);
    case OP_SXTL:
    case OP_SXTL2:
    case OP_UXTL:
    case OP_UXTL2:
      return convert_shll_to_xtl (inst);
    default:
      return 0;
    }
}

static bfd_boolean
aarch64_opcode_decode (const aarch64_opcode *, const aarch64_insn,
         aarch64_inst *, int, aarch64_operand_error *errors);
# 2637 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
static void
determine_disassembling_preference (struct aarch64_inst *inst,
        aarch64_operand_error *errors)
{
  const aarch64_opcode *opcode;
  const aarch64_opcode *alias;

  opcode = inst->opcode;


  if (!opcode_has_alias (opcode))
    return;

  alias = aarch64_find_alias_opcode (opcode);
  assert (alias);

#ifdef DEBUG_AARCH64
  if (debug_dump)
    {
      const aarch64_opcode *tmp = alias;
      printf ("####   LIST    orderd: ");
      while (tmp)
 {
   printf ("%s, ", tmp->name);
   tmp = aarch64_find_next_alias_opcode (tmp);
 }
      printf ("\n");
    }
#endif

  for (; alias; alias = aarch64_find_next_alias_opcode (alias))
    {
      DEBUG_TRACE ("try %s", alias->name);
      assert (alias_opcode_p (alias) || opcode_has_alias (opcode));




      if (pseudo_opcode_p (alias))
 {
   DEBUG_TRACE ("skip pseudo %s", alias->name);
   continue;
 }

      if ((inst->value & alias->mask) != alias->opcode)
 {
   DEBUG_TRACE ("skip %s as base opcode not match", alias->name);
   continue;
 }


      if (aarch64_num_of_operands (alias) == 0 && alias->opcode == inst->value)
 {
   DEBUG_TRACE ("succeed with 0-operand opcode %s", alias->name);
   aarch64_replace_opcode (inst, alias);
   return;
 }
      if (alias->flags & F_CONV)
 {
   aarch64_inst copy;
   memcpy (&copy, inst, sizeof (aarch64_inst));


   if (convert_to_alias (&copy, alias) == 1)
     {
       aarch64_replace_opcode (&copy, alias);
       assert (aarch64_match_operands_constraint (&copy, NULL));
       DEBUG_TRACE ("succeed with %s via conversion", alias->name);
       memcpy (inst, &copy, sizeof (aarch64_inst));
       return;
     }
 }
      else
 {

   aarch64_inst temp;
   memset (&temp, '\0', sizeof (aarch64_inst));
   if (aarch64_opcode_decode (alias, inst->value, &temp, 1, errors) == 1)
     {
       DEBUG_TRACE ("succeed with %s via direct decoding", alias->name);
       memcpy (inst, &temp, sizeof (aarch64_inst));
       return;
     }
 }
    }
}







static bfd_boolean
aarch64_decode_variant_using_iclass (aarch64_inst *inst)
{
  int i, variant;

  variant = 0;
  switch (inst->opcode->iclass)
    {
    case sve_cpy:
      variant = extract_fields (inst->value, 0, 2, FLD_size, FLD_SVE_M_14);
      break;

    case sve_index:
      i = extract_fields (inst->value, 0, 2, FLD_SVE_tszh, FLD_imm5);
      if ((i & 31) == 0)
 return FALSE;
      while ((i & 1) == 0)
 {
   i >>= 1;
   variant += 1;
 }
      break;

    case sve_limm:

      if ((inst->value & 0x20600) == 0x600)
 variant = 0;
      else if ((inst->value & 0x20400) == 0x400)
 variant = 1;
      else if ((inst->value & 0x20000) == 0)
 variant = 2;
      else
 variant = 3;
      break;

    case sve_misc:

      break;

    case sve_movprfx:
      variant = extract_fields (inst->value, 0, 2, FLD_size, FLD_SVE_M_16);
      break;

    case sve_pred_zm:
      variant = extract_field (FLD_SVE_M_4, inst->value, 0);
      break;

    case sve_shift_pred:
      i = extract_fields (inst->value, 0, 2, FLD_SVE_tszh, FLD_SVE_tszl_8);
    sve_shift:
      if (i == 0)
 return FALSE;
      while (i != 1)
 {
   i >>= 1;
   variant += 1;
 }
      break;

    case sve_shift_unpred:
      i = extract_fields (inst->value, 0, 2, FLD_SVE_tszh, FLD_SVE_tszl_19);
      goto sve_shift;

    case sve_size_bhs:
      variant = extract_field (FLD_size, inst->value, 0);
      if (variant >= 3)
 return FALSE;
      break;

    case sve_size_bhsd:
      variant = extract_field (FLD_size, inst->value, 0);
      break;

    case sve_size_hsd:
      i = extract_field (FLD_size, inst->value, 0);
      if (i < 1)
 return FALSE;
      variant = i - 1;
      break;

    case sve_size_sd:
      variant = extract_field (FLD_SVE_sz, inst->value, 0);
      break;

    default:

      return TRUE;
    }

  for (i = 0; i < AARCH64_MAX_OPND_NUM; i++)
    inst->operands[i].qualifier = inst->opcode->qualifiers_list[variant][i];
  return TRUE;
}
# 2831 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-dis.c"
static bfd_boolean
aarch64_opcode_decode (const aarch64_opcode *opcode, const aarch64_insn code,
         aarch64_inst *inst, int noaliases_p,
         aarch64_operand_error *errors)
{
  int i;

  DEBUG_TRACE ("enter with %s", opcode->name);

  assert (opcode && inst);


  memset (inst, '\0', sizeof (aarch64_inst));


  if ((code & opcode->mask) != (opcode->opcode & opcode->mask))
    {
      DEBUG_TRACE ("base opcode match FAIL");
      goto decode_fail;
    }

  inst->opcode = opcode;
  inst->value = code;


  for (i = 0; i < AARCH64_MAX_OPND_NUM; i++)
    {
      if (opcode->operands[i] == AARCH64_OPND_NIL)
 break;
      inst->operands[i].type = opcode->operands[i];
      inst->operands[i].idx = i;
    }


  if (opcode_has_special_coder (opcode) && do_special_decoding (inst) == 0)
    {
      DEBUG_TRACE ("opcode flag-based decoder FAIL");
      goto decode_fail;
    }



  if (!aarch64_decode_variant_using_iclass (inst))
    {
      DEBUG_TRACE ("iclass-based decoder FAIL");
      goto decode_fail;
    }


  for (i = 0; i < AARCH64_MAX_OPND_NUM; i++)
    {
      const aarch64_operand *opnd;
      enum aarch64_opnd type;

      type = opcode->operands[i];
      if (type == AARCH64_OPND_NIL)
 break;
      opnd = &aarch64_operands[type];
      if (operand_has_extractor (opnd)
   && (! aarch64_extract_operand (opnd, &inst->operands[i], code, inst,
      errors)))
 {
   DEBUG_TRACE ("operand decoder FAIL at operand %d", i);
   goto decode_fail;
 }
    }


  if (opcode->verifier && ! opcode->verifier (opcode, code))
    {
      DEBUG_TRACE ("operand verifier FAIL");
      goto decode_fail;
    }


  if (aarch64_match_operands_constraint (inst, NULL) == 1)
    {





      if (!noaliases_p)
 determine_disassembling_preference (inst, errors);
      DEBUG_TRACE ("SUCCESS");
      return TRUE;
    }
  else
    {
      DEBUG_TRACE ("constraint matching FAIL");
    }

decode_fail:
  return FALSE;
}





static void
user_friendly_fixup (aarch64_inst *inst)
{
  switch (inst->opcode->iclass)
    {
    case testbranch:






      if (inst->operands[1].imm.value < 32)
 inst->operands[0].qualifier = AARCH64_OPND_QLF_W;
      break;
    default: break;
    }
}





int
aarch64_decode_insn (aarch64_insn insn, aarch64_inst *inst,
       bfd_boolean noaliases_p,
       aarch64_operand_error *errors)
{
  const aarch64_opcode *opcode = aarch64_opcode_lookup (insn);

#ifdef DEBUG_AARCH64
  if (debug_dump)
    {
      const aarch64_opcode *tmp = opcode;
      printf ("\n");
      DEBUG_TRACE ("opcode lookup:");
      while (tmp != NULL)
 {
   aarch64_verbose ("  %s", tmp->name);
   tmp = aarch64_find_next_opcode (tmp);
 }
    }
#endif






  while (opcode != NULL)
    {


      if (aarch64_opcode_decode (opcode, insn, inst, noaliases_p, errors) == 1)
 return ERR_OK;
      opcode = aarch64_find_next_opcode (opcode);
    }

  return ERR_UND;
}



static void
print_operands (bfd_vma pc, const aarch64_opcode *opcode,
  const aarch64_opnd_info *opnds, struct disassemble_info *info)
{
  int i, pcrel_p, num_printed;
  char *notes = NULL;
  for (i = 0, num_printed = 0; i < AARCH64_MAX_OPND_NUM; i++)
    {
      char str[128];





      if (opcode->operands[i] == AARCH64_OPND_NIL
   || opnds[i].type == AARCH64_OPND_NIL)
 break;


      aarch64_print_operand (str, sizeof (str), pc, opcode, opnds, i, &pcrel_p,
        &info->target, &notes);


      if (str[0] != '\0')
 (*info->fprintf_func) (info->stream, "%s",
          num_printed++ == 0 ? " " : ", ");


      if (pcrel_p)
 (*info->print_address_func) (info->target, info);
      else
 (*info->fprintf_func) (info->stream, "%s", str);
    }

    if (notes && !no_notes)
      (*info->fprintf_func) (info->stream, " ; note: %s", notes);
}



static void
remove_dot_suffix (char *name, const aarch64_inst *inst)
{
  char *ptr;
  size_t len;

  ptr = strchr (inst->opcode->name, '.');
  assert (ptr && inst->cond);
  len = ptr - inst->opcode->name;
  assert (len < 8);
  strncpy (name, inst->opcode->name, len);
  name[len] = '\0';
}



static void
print_mnemonic_name (const aarch64_inst *inst, struct disassemble_info *info)
{
  if (inst->opcode->flags & F_COND)
    {



      char name[8];

      remove_dot_suffix (name, inst);
      (*info->fprintf_func) (info->stream, "%s.%s", name, inst->cond->names[0]);
    }
  else
    (*info->fprintf_func) (info->stream, "%s", inst->opcode->name);
}




static void
print_comment (const aarch64_inst *inst, struct disassemble_info *info)
{
return;
  if (inst->opcode->flags & F_COND)
    {
      char name[8];
      unsigned int i, num_conds;

      remove_dot_suffix (name, inst);
      num_conds = ARRAY_SIZE (inst->cond->names);
      for (i = 1; i < num_conds && inst->cond->names[i]; i++)
 (*info->fprintf_func) (info->stream, "%s %s.%s",
          i == 1 ? "  //" : ",",
          name, inst->cond->names[i]);
    }
}



static void
print_aarch64_insn (bfd_vma pc, const aarch64_inst *inst,
      struct disassemble_info *info)
{
  print_mnemonic_name (inst, info);
  print_operands (pc, inst->opcode, inst->operands, info);
  print_comment (inst, info);
}



static void
print_insn_aarch64_word (bfd_vma pc,
    uint32_t word,
    struct disassemble_info *info,
    aarch64_operand_error *errors)
{
  static const char *err_msg[6] =
    {
      [ERR_OK] = "_",
      [-ERR_UND] = "undefined",
      [-ERR_UNP] = "unpredictable",
      [-ERR_NYI] = "not-yet-implemented"
    };

  int ret;
  aarch64_inst inst;

  info->insn_info_valid = 1;
  info->branch_delay_insns = 0;
  info->data_size = 0;
  info->target = 0;
  info->target2 = 0;

  if (info->flags & INSN_HAS_RELOC)





    pc = 0;

  ret = aarch64_decode_insn (word, &inst, no_aliases, errors);

  if (((word >> 21) & 0x3ff) == 1)
    {

      assert (ret != ERR_OK);
      ret = ERR_NYI;
    }

  switch (ret)
    {
    case ERR_UND:
    case ERR_UNP:
    case ERR_NYI:

      info->insn_type = dis_noninsn;

      (*info->fprintf_func) (info->stream,"%s", err_msg[-ret]);
      break;
    case ERR_OK:
      user_friendly_fixup (&inst);
      print_aarch64_insn (pc, &inst, info);
      break;
    default:
      abort ();
    }
}




bfd_boolean
aarch64_symbol_is_valid (asymbol * sym,
    struct disassemble_info * info ATTRIBUTE_UNUSED)
{
  const char * name;

  if (sym == NULL)
    return FALSE;

  name = bfd_asymbol_name (sym);

  return name
    && (name[0] != '$'
 || (name[1] != 'x' && name[1] != 'd')
 || (name[2] != '\0' && name[2] != '.'));
}



static void
print_insn_data (bfd_vma pc ATTRIBUTE_UNUSED,
   uint32_t word,
   struct disassemble_info *info,
   aarch64_operand_error *errors ATTRIBUTE_UNUSED)
{
  switch (info->bytes_per_chunk)
    {
    case 1:
      info->fprintf_func (info->stream, ".byte 0x%02x", word);
      break;
    case 2:
      info->fprintf_func (info->stream, ".short 0x%04x", word);
      break;
    case 4:
      info->fprintf_func (info->stream, ".word 0x%08x", word);
      break;
    default:
      abort ();
    }
}




static int
get_sym_code_type (struct disassemble_info *info, int n,
     enum map_type *map_type)
{
  elf_symbol_type *es;
  unsigned int type;
  const char *name;


  if (info->section != NULL && info->section != info->symtab[n]->section)
    return FALSE;

  es = *(elf_symbol_type **)(info->symtab + n);
  type = ELF_ST_TYPE (es->internal_elf_sym.st_info);


  if (type == STT_FUNC)
    {
      *map_type = MAP_INSN;
      return TRUE;
    }


  name = bfd_asymbol_name(info->symtab[n]);
  if (name[0] == '$'
      && (name[1] == 'x' || name[1] == 'd')
      && (name[2] == '\0' || name[2] == '.'))
    {
      *map_type = (name[1] == 'x' ? MAP_INSN : MAP_DATA);
      return TRUE;
    }

  return FALSE;
}



int
print_insn_aarch64 (bfd_vma pc,
      struct disassemble_info *info)
{
  bfd_byte buffer[INSNLEN];
  int status;
  void (*printer) (bfd_vma, uint32_t, struct disassemble_info *,
       aarch64_operand_error *);
  bfd_boolean found = FALSE;
  unsigned int size = 4;
  unsigned long data;
  aarch64_operand_error errors;

  if (info->disassembler_options)
    {
      set_default_aarch64_dis_options (info);

      parse_aarch64_dis_options (info->disassembler_options);


      info->disassembler_options = NULL;
    }


  info->endian_code = BFD_ENDIAN_LITTLE;



  if (info->symtab_size != 0
      && bfd_asymbol_flavour (*info->symtab) == bfd_target_elf_flavour)
    {
      enum map_type type = MAP_INSN;
      int last_sym = -1;
      bfd_vma addr;
      int n;

      if (pc <= last_mapping_addr)
 last_mapping_sym = -1;



      n = info->symtab_pos + 1;
      if (n < last_mapping_sym)
 n = last_mapping_sym;


      for (; n < info->symtab_size; n++)
 {
   addr = bfd_asymbol_value (info->symtab[n]);
   if (addr > pc)
     break;
   if (get_sym_code_type (info, n, &type))
     {
       last_sym = n;
       found = TRUE;
     }
 }

      if (!found)
 {
   n = info->symtab_pos;
   if (n < last_mapping_sym)
     n = last_mapping_sym;



   for (; n >= 0; n--)
     {
       if (get_sym_code_type (info, n, &type))
  {
    last_sym = n;
    break;
  }
     }
 }

      last_mapping_sym = last_sym;
      last_type = type;





      if (last_type == MAP_DATA)
 {
   size = 4 - (pc & 3);
   for (n = last_sym + 1; n < info->symtab_size; n++)
     {
       addr = bfd_asymbol_value (info->symtab[n]);
       if (addr > pc)
  {
    if (addr - pc < size)
      size = addr - pc;
    break;
  }
     }



   if (size == 3)
     size = (pc & 1) ? 1 : 2;
 }
    }

  if (last_type == MAP_DATA)
    {

      info->bytes_per_chunk = size;
      info->display_endian = info->endian;
      printer = print_insn_data;
    }
  else
    {
      info->bytes_per_chunk = size = INSNLEN;
      info->display_endian = info->endian_code;
      printer = print_insn_aarch64_word;
    }

  status = (*info->read_memory_func) (pc, buffer, size, info);
  if (status != 0)
    {
      (*info->memory_error_func) (status, pc, info);
      return -1;
    }

  data = bfd_get_bits (buffer, size * 8,
         info->display_endian == BFD_ENDIAN_BIG);

  (*printer) (pc, data, info, &errors);

  return size;
}

void
print_aarch64_disassembler_options (FILE *stream)
{
  fprintf (stream, _("\n\
The following AARCH64 specific disassembler options are supported for use\n\
with the -M switch (multiple options should be separated by commas):\n"));

  fprintf (stream, _("\n\
  no-aliases Don't print instruction aliases.\n"));

  fprintf (stream, _("\n\
  aliases Do print instruction aliases.\n"));

  fprintf (stream, _("\n\
  no-notes Don't print instruction notes.\n"));

  fprintf (stream, _("\n\
  notes Do print instruction notes.\n"));

#ifdef DEBUG_AARCH64
  fprintf (stream, _("\n\
  debug_dump Temp switch for debug trace.\n"));
#endif

  fprintf (stream, _("\n"));
}
