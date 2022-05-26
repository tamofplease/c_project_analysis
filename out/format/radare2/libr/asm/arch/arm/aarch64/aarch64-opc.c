# 1 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.c"
# 21 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.c"
#include "sysdep.h"
#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <stdarg.h>
#include <inttypes.h>

#include "opintl.h"
#include "libiberty.h"

#include "aarch64-opc.h"

#ifdef DEBUG_AARCH64
int debug_dump = FALSE;
#endif



const char *const aarch64_sve_pattern_array[32] = {

  "pow2",
  "vl1",
  "vl2",
  "vl3",
  "vl4",
  "vl5",
  "vl6",
  "vl7",

  "vl8",
  "vl16",
  "vl32",
  "vl64",
  "vl128",
  "vl256",
  0,
  0,

  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,

  0,
  0,
  0,
  0,
  0,
  "mul4",
  "mul3",
  "all"
};



const char *const aarch64_sve_prfop_array[16] = {

  "pldl1keep",
  "pldl1strm",
  "pldl2keep",
  "pldl2strm",
  "pldl3keep",
  "pldl3strm",
  0,
  0,

  "pstl1keep",
  "pstl1strm",
  "pstl2keep",
  "pstl2strm",
  "pstl3keep",
  "pstl3strm",
  0,
  0
};




static inline bfd_boolean
vector_qualifier_p (enum aarch64_opnd_qualifier qualifier)
{
  return ((qualifier >= AARCH64_OPND_QLF_V_8B
   && qualifier <= AARCH64_OPND_QLF_V_1Q) ? TRUE
   : FALSE);
}

static inline bfd_boolean
fp_qualifier_p (enum aarch64_opnd_qualifier qualifier)
{
  return ((qualifier >= AARCH64_OPND_QLF_S_B
   && qualifier <= AARCH64_OPND_QLF_S_Q) ? TRUE
   : FALSE);
}

enum data_pattern
{
  DP_UNKNOWN,
  DP_VECTOR_3SAME,
  DP_VECTOR_LONG,
  DP_VECTOR_WIDE,
  DP_VECTOR_ACROSS_LANES,
};

static const char significant_operand_index [] =
{
  0,
  0,
  1,
  2,
  1,
};






static enum data_pattern
get_data_pattern (const aarch64_opnd_qualifier_seq_t qualifiers)
{
  if (vector_qualifier_p (qualifiers[0]) == TRUE)
    {


      if (qualifiers[0] == qualifiers[1]
   && vector_qualifier_p (qualifiers[2]) == TRUE
   && (aarch64_get_qualifier_esize (qualifiers[0])
       == aarch64_get_qualifier_esize (qualifiers[1]))
   && (aarch64_get_qualifier_esize (qualifiers[0])
       == aarch64_get_qualifier_esize (qualifiers[2])))
 return DP_VECTOR_3SAME;



      if (vector_qualifier_p (qualifiers[1]) == TRUE
   && aarch64_get_qualifier_esize (qualifiers[0]) != 0
   && (aarch64_get_qualifier_esize (qualifiers[0])
       == aarch64_get_qualifier_esize (qualifiers[1]) << 1))
 return DP_VECTOR_LONG;

      if (qualifiers[0] == qualifiers[1]
   && vector_qualifier_p (qualifiers[2]) == TRUE
   && aarch64_get_qualifier_esize (qualifiers[0]) != 0
   && (aarch64_get_qualifier_esize (qualifiers[0])
       == aarch64_get_qualifier_esize (qualifiers[2]) << 1)
   && (aarch64_get_qualifier_esize (qualifiers[0])
       == aarch64_get_qualifier_esize (qualifiers[1])))
 return DP_VECTOR_WIDE;
    }
  else if (fp_qualifier_p (qualifiers[0]) == TRUE)
    {

      if (vector_qualifier_p (qualifiers[1]) == TRUE
   && qualifiers[2] == AARCH64_OPND_QLF_NIL)
 return DP_VECTOR_ACROSS_LANES;
    }

  return DP_UNKNOWN;
}
# 195 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.c"
int
aarch64_select_operand_for_sizeq_field_coding (const aarch64_opcode *opcode)
{
  return
    significant_operand_index [get_data_pattern (opcode->qualifiers_list[0])];
}

const aarch64_field fields[] =
{
    { 0, 0 },
    { 0, 4 },
    { 0, 4 },
    { 5, 5 },
    { 16, 3 },
    { 5, 19 },
    { 5, 19 },
    { 29, 2 },
    { 22, 2 },
    { 10, 2 },
    { 29, 1 },
    { 30, 1 },
    { 0, 5 },
    { 0, 5 },
    { 5, 5 },
    { 10, 5 },
    { 10, 5 },
    { 5, 3 },
    { 8, 4 },
    { 12, 4 },
    { 16, 3 },
    { 19, 2 },
    { 10, 3 },
    { 12, 4 },
    { 12, 4 },
    { 12, 4 },
    { 13, 3 },
    { 13, 2 },
    { 16, 5 },
    { 16, 5 },
    { 13, 3 },
    { 12, 1 },
    { 21, 2 },
    { 22, 2 },
    { 23, 1 },
    { 22, 2 },
    { 22, 2 },
    { 30, 2 },
    { 10, 6 },
    { 15, 6 },
    { 11, 4 },
    { 0, 4 },
    { 16, 5 },
    { 15, 7 },
    { 13, 8 },
    { 12, 9 },
    { 10, 12 },
    { 5, 14 },
    { 5, 16 },
    { 0, 26 },
    { 10, 6 },
    { 16, 6 },
    { 16, 3 },
    { 19, 4 },
    { 22, 1 },
    { 22, 1 },
    { 11, 1 },
    { 24, 1 },
    { 31, 1 },
    { 30, 1 },
    { 11, 1 },
    { 21, 1 },
    { 20, 1 },
    { 31, 1 },
    { 19, 5 },
    { 10, 6 },
    { 4, 1 },
    { 14, 1 },
    { 16, 1 },
    { 17, 1 },
    { 0, 4 },
    { 10, 3 },
    { 5, 4 },
    { 10, 4 },
    { 16, 4 },
    { 16, 4 },
    { 5, 4 },
    { 0, 4 },
    { 5, 5 },
    { 16, 5 },
    { 0, 5 },
    { 5, 5 },
    { 5, 5 },
    { 5, 5 },
    { 16, 5 },
    { 0, 5 },
    { 5, 5 },
    { 16, 5 },
    { 5, 5 },
    { 0, 5 },
    { 5, 1 },
    { 22, 1 },
    { 16, 3 },
    { 16, 4 },
    { 5, 5 },
    { 16, 5 },
    { 16, 6 },
    { 14, 7 },
    { 5, 8 },
    { 5, 9 },
    { 11, 6 },
    { 5, 6 },
    { 10, 2 },
    { 5, 5 },
    { 0, 4 },
    { 16, 1 },
    { 10, 2 },
    { 22, 1 },
    { 16, 4 },
    { 22, 2 },
    { 8, 2 },
    { 19, 2 },
    { 14, 1 },
    { 22, 1 },
    { 11, 2 },
    { 13, 2 },
    { 12, 1 },
    { 12, 2 },
};

enum aarch64_operand_class
aarch64_get_operand_class (enum aarch64_opnd type)
{
  return aarch64_operands[type].op_class;
}

const char *
aarch64_get_operand_name (enum aarch64_opnd type)
{
  return aarch64_operands[type].name;
}



const char *
aarch64_get_operand_desc (enum aarch64_opnd type)
{
  return aarch64_operands[type].desc;
}


const aarch64_cond aarch64_conds[16] =
{
  {{"eq", "none"}, 0x0},
  {{"ne", "any"}, 0x1},
  {{"cs", "hs", "nlast"}, 0x2},
  {{"cc", "lo", "ul", "last"}, 0x3},
  {{"mi", "first"}, 0x4},
  {{"pl", "nfrst"}, 0x5},
  {{"vs"}, 0x6},
  {{"vc"}, 0x7},
  {{"hi", "pmore"}, 0x8},
  {{"ls", "plast"}, 0x9},
  {{"ge", "tcont"}, 0xa},
  {{"lt", "tstop"}, 0xb},
  {{"gt"}, 0xc},
  {{"le"}, 0xd},
  {{"al"}, 0xe},
  {{"nv"}, 0xf},
};

const aarch64_cond *
get_cond_from_value (aarch64_insn value)
{
  assert (value < 16);
  return &aarch64_conds[(unsigned int) value];
}

const aarch64_cond *
get_inverted_cond (const aarch64_cond *cond)
{
  return &aarch64_conds[cond->value ^ 0x1];
}






const struct aarch64_name_value_pair aarch64_operand_modifiers [] =
{
    {"none", 0x0},
    {"msl", 0x0},
    {"ror", 0x3},
    {"asr", 0x2},
    {"lsr", 0x1},
    {"lsl", 0x0},
    {"uxtb", 0x0},
    {"uxth", 0x1},
    {"uxtw", 0x2},
    {"uxtx", 0x3},
    {"sxtb", 0x4},
    {"sxth", 0x5},
    {"sxtw", 0x6},
    {"sxtx", 0x7},
    {"mul", 0x0},
    {"mul vl", 0x0},
    {NULL, 0},
};

enum aarch64_modifier_kind
aarch64_get_operand_modifier (const struct aarch64_name_value_pair *desc)
{
  return desc - aarch64_operand_modifiers;
}

aarch64_insn
aarch64_get_operand_modifier_value (enum aarch64_modifier_kind kind)
{
  return aarch64_operand_modifiers[kind].value;
}

enum aarch64_modifier_kind
aarch64_get_operand_modifier_from_value (aarch64_insn value,
      bfd_boolean extend_p)
{
  if (extend_p == TRUE)
    return AARCH64_MOD_UXTB + value;
  else
    return AARCH64_MOD_LSL - value;
}

bfd_boolean
aarch64_extend_operator_p (enum aarch64_modifier_kind kind)
{
  return (kind > AARCH64_MOD_LSL && kind <= AARCH64_MOD_SXTX)
    ? TRUE : FALSE;
}

static inline bfd_boolean
aarch64_shift_operator_p (enum aarch64_modifier_kind kind)
{
  return (kind >= AARCH64_MOD_ROR && kind <= AARCH64_MOD_LSL)
    ? TRUE : FALSE;
}

const struct aarch64_name_value_pair aarch64_barrier_options[16] =
{
    { "#0x00", 0x0 },
    { "oshld", 0x1 },
    { "oshst", 0x2 },
    { "osh", 0x3 },
    { "#0x04", 0x4 },
    { "nshld", 0x5 },
    { "nshst", 0x6 },
    { "nsh", 0x7 },
    { "#0x08", 0x8 },
    { "ishld", 0x9 },
    { "ishst", 0xa },
    { "ish", 0xb },
    { "#0x0c", 0xc },
    { "ld", 0xd },
    { "st", 0xe },
    { "sy", 0xf },
};
# 467 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.c"
const struct aarch64_name_value_pair aarch64_hint_options[] =
{
  { "csync", 0x11 },
  { NULL, 0x0 },
};




#define B(op,l,t) (((op) << 3) | (((l) - 1) << 1) | (t))
const struct aarch64_name_value_pair aarch64_prfops[32] =
{
  { "pldl1keep", B(0, 1, 0) },
  { "pldl1strm", B(0, 1, 1) },
  { "pldl2keep", B(0, 2, 0) },
  { "pldl2strm", B(0, 2, 1) },
  { "pldl3keep", B(0, 3, 0) },
  { "pldl3strm", B(0, 3, 1) },
  { NULL, 0x06 },
  { NULL, 0x07 },
  { "plil1keep", B(1, 1, 0) },
  { "plil1strm", B(1, 1, 1) },
  { "plil2keep", B(1, 2, 0) },
  { "plil2strm", B(1, 2, 1) },
  { "plil3keep", B(1, 3, 0) },
  { "plil3strm", B(1, 3, 1) },
  { NULL, 0x0e },
  { NULL, 0x0f },
  { "pstl1keep", B(2, 1, 0) },
  { "pstl1strm", B(2, 1, 1) },
  { "pstl2keep", B(2, 2, 0) },
  { "pstl2strm", B(2, 2, 1) },
  { "pstl3keep", B(2, 3, 0) },
  { "pstl3strm", B(2, 3, 1) },
  { NULL, 0x16 },
  { NULL, 0x17 },
  { NULL, 0x18 },
  { NULL, 0x19 },
  { NULL, 0x1a },
  { NULL, 0x1b },
  { NULL, 0x1c },
  { NULL, 0x1d },
  { NULL, 0x1e },
  { NULL, 0x1f },
};
#undef B



static inline int
value_in_range_p (int64_t value, int low, int high)
{
  return (value >= low && value <= high) ? 1 : 0;
}


static inline int
value_aligned_p (int64_t value, int align)
{
  return (value % align) == 0;
}


static inline int
value_fit_signed_field_p (int64_t value, unsigned width)
{
  assert (width < 32);
  if (width < sizeof (value) * 8)
    {
      int64_t lim = (int64_t)1 << (width - 1);
      if (value >= -lim && value < lim)
 return 1;
    }
  return 0;
}


static inline int
value_fit_unsigned_field_p (int64_t value, unsigned width)
{
  assert (width < 32);
  if (width < sizeof (value) * 8)
    {
      int64_t lim = (int64_t)1 << width;
      if (value >= 0 && value < lim)
 return 1;
    }
  return 0;
}


int
aarch64_stack_pointer_p (const aarch64_opnd_info *operand)
{
  return ((aarch64_get_operand_class (operand->type)
    == AARCH64_OPND_CLASS_INT_REG)
   && operand_maybe_stack_pointer (aarch64_operands + operand->type)
   && operand->reg.regno == 31);
}


int
aarch64_zero_register_p (const aarch64_opnd_info *operand)
{
  return ((aarch64_get_operand_class (operand->type)
    == AARCH64_OPND_CLASS_INT_REG)
   && !operand_maybe_stack_pointer (aarch64_operands + operand->type)
   && operand->reg.regno == 31);
}





static inline int
operand_also_qualified_p (const struct aarch64_opnd_info *operand,
     aarch64_opnd_qualifier_t target)
{
  switch (operand->qualifier)
    {
    case AARCH64_OPND_QLF_W:
      if (target == AARCH64_OPND_QLF_WSP && aarch64_stack_pointer_p (operand))
 return 1;
      break;
    case AARCH64_OPND_QLF_X:
      if (target == AARCH64_OPND_QLF_SP && aarch64_stack_pointer_p (operand))
 return 1;
      break;
    case AARCH64_OPND_QLF_WSP:
      if (target == AARCH64_OPND_QLF_W
   && operand_maybe_stack_pointer (aarch64_operands + operand->type))
 return 1;
      break;
    case AARCH64_OPND_QLF_SP:
      if (target == AARCH64_OPND_QLF_X
   && operand_maybe_stack_pointer (aarch64_operands + operand->type))
 return 1;
      break;
    default:
      break;
    }

  return 0;
}






aarch64_opnd_qualifier_t
aarch64_get_expected_qualifier (const aarch64_opnd_qualifier_seq_t *qseq_list,
    int idx,
    const aarch64_opnd_qualifier_t known_qlf,
    int known_idx)
{
  int i, saved_i;
# 640 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.c"
  if (known_qlf == AARCH64_OPND_NIL)
    {
      assert (qseq_list[0][known_idx] == AARCH64_OPND_NIL);
      return qseq_list[0][idx];
    }

  for (i = 0, saved_i = -1; i < AARCH64_MAX_QLF_SEQ_NUM; i++)
    {
      if (qseq_list[i][known_idx] == known_qlf)
 {
   if (saved_i != -1)


     return AARCH64_OPND_NIL;
   saved_i = i;
 }
    }

  return qseq_list[saved_i][idx];
}

enum operand_qualifier_kind
{
  OQK_NIL,
  OQK_OPD_VARIANT,
  OQK_VALUE_IN_RANGE,
  OQK_MISC,
};


struct operand_qualifier_data
{

  int data0;
  int data1;
  int data2;

  const char *desc;

  enum operand_qualifier_kind kind;
};


struct operand_qualifier_data aarch64_opnd_qualifiers[] =
{
  {0, 0, 0, "NIL", OQK_NIL},





  {4, 1, 0x0, "w", OQK_OPD_VARIANT},
  {8, 1, 0x1, "x", OQK_OPD_VARIANT},
  {4, 1, 0x0, "wsp", OQK_OPD_VARIANT},
  {8, 1, 0x1, "sp", OQK_OPD_VARIANT},

  {1, 1, 0x0, "b", OQK_OPD_VARIANT},
  {2, 1, 0x1, "h", OQK_OPD_VARIANT},
  {4, 1, 0x2, "s", OQK_OPD_VARIANT},
  {8, 1, 0x3, "d", OQK_OPD_VARIANT},
  {16, 1, 0x4, "q", OQK_OPD_VARIANT},
  {1, 4, 0x0, "4b", OQK_OPD_VARIANT},

  {1, 4, 0x0, "4b", OQK_OPD_VARIANT},
  {1, 8, 0x0, "8b", OQK_OPD_VARIANT},
  {1, 16, 0x1, "16b", OQK_OPD_VARIANT},
  {2, 2, 0x0, "2h", OQK_OPD_VARIANT},
  {2, 4, 0x2, "4h", OQK_OPD_VARIANT},
  {2, 8, 0x3, "8h", OQK_OPD_VARIANT},
  {4, 2, 0x4, "2s", OQK_OPD_VARIANT},
  {4, 4, 0x5, "4s", OQK_OPD_VARIANT},
  {8, 1, 0x6, "1d", OQK_OPD_VARIANT},
  {8, 2, 0x7, "2d", OQK_OPD_VARIANT},
  {16, 1, 0x8, "1q", OQK_OPD_VARIANT},

  {0, 0, 0, "z", OQK_OPD_VARIANT},
  {0, 0, 0, "m", OQK_OPD_VARIANT},





  {0, 15, 0, "CR", OQK_VALUE_IN_RANGE},
  {0, 7, 0, "imm_0_7" , OQK_VALUE_IN_RANGE},
  {0, 15, 0, "imm_0_15", OQK_VALUE_IN_RANGE},
  {0, 31, 0, "imm_0_31", OQK_VALUE_IN_RANGE},
  {0, 63, 0, "imm_0_63", OQK_VALUE_IN_RANGE},
  {1, 32, 0, "imm_1_32", OQK_VALUE_IN_RANGE},
  {1, 64, 0, "imm_1_64", OQK_VALUE_IN_RANGE},





  {0, 0, 0, "lsl", 0},
  {0, 0, 0, "msl", 0},

  {0, 0, 0, "retrieving", 0},
};

static inline bfd_boolean
operand_variant_qualifier_p (aarch64_opnd_qualifier_t qualifier)
{
  return (aarch64_opnd_qualifiers[qualifier].kind == OQK_OPD_VARIANT)
    ? TRUE : FALSE;
}

static inline bfd_boolean
qualifier_value_in_range_constraint_p (aarch64_opnd_qualifier_t qualifier)
{
  return (aarch64_opnd_qualifiers[qualifier].kind == OQK_VALUE_IN_RANGE)
    ? TRUE : FALSE;
}

const char*
aarch64_get_qualifier_name (aarch64_opnd_qualifier_t qualifier)
{
  return aarch64_opnd_qualifiers[qualifier].desc;
}



unsigned char
aarch64_get_qualifier_esize (aarch64_opnd_qualifier_t qualifier)
{
  assert (operand_variant_qualifier_p (qualifier) == TRUE);
  return aarch64_opnd_qualifiers[qualifier].data0;
}

unsigned char
aarch64_get_qualifier_nelem (aarch64_opnd_qualifier_t qualifier)
{
  assert (operand_variant_qualifier_p (qualifier) == TRUE);
  return aarch64_opnd_qualifiers[qualifier].data1;
}

aarch64_insn
aarch64_get_qualifier_standard_value (aarch64_opnd_qualifier_t qualifier)
{
  assert (operand_variant_qualifier_p (qualifier) == TRUE);
  return aarch64_opnd_qualifiers[qualifier].data2;
}

static int
get_lower_bound (aarch64_opnd_qualifier_t qualifier)
{
  assert (qualifier_value_in_range_constraint_p (qualifier) == TRUE);
  return aarch64_opnd_qualifiers[qualifier].data0;
}

static int
get_upper_bound (aarch64_opnd_qualifier_t qualifier)
{
  assert (qualifier_value_in_range_constraint_p (qualifier) == TRUE);
  return aarch64_opnd_qualifiers[qualifier].data1;
}

#ifdef DEBUG_AARCH64
void
aarch64_verbose (const char *str, ...)
{
  va_list ap;
  va_start (ap, str);
  printf ("#### ");
  vprintf (str, ap);
  printf ("\n");
  va_end (ap);
}

static inline void
dump_qualifier_sequence (const aarch64_opnd_qualifier_t *qualifier)
{
  int i;
  printf ("####  ");
  for (i = 0; i < AARCH64_MAX_OPND_NUM; i++, ++qualifier)
    printf ("%s,", aarch64_get_qualifier_name (*qualifier));
  printf ("\n");
}

static void
dump_match_qualifiers (const struct aarch64_opnd_info *opnd,
         const aarch64_opnd_qualifier_t *qualifier)
{
  int i;
  aarch64_opnd_qualifier_t curr[AARCH64_MAX_OPND_NUM];

  aarch64_verbose ("dump_match_qualifiers:");
  for (i = 0; i < AARCH64_MAX_OPND_NUM; i++)
    curr[i] = opnd[i].qualifier;
  dump_qualifier_sequence (curr);
  aarch64_verbose ("against");
  dump_qualifier_sequence (qualifier);
}
#endif




int
aarch64_num_of_operands (const aarch64_opcode *opcode)
{
  int i = 0;
  const enum aarch64_opnd *opnds = opcode->operands;
  while (opnds[i++] != AARCH64_OPND_NIL)
    ;
  --i;
  assert (i >= 0 && i <= AARCH64_MAX_OPND_NUM);
  return i;
}
# 872 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.c"
int
aarch64_find_best_match (const aarch64_inst *inst,
    const aarch64_opnd_qualifier_seq_t *qualifiers_list,
    int stop_at, aarch64_opnd_qualifier_t *ret)
{
  int found = 0;
  int i, num_opnds;
  const aarch64_opnd_qualifier_t *qualifiers;

  num_opnds = aarch64_num_of_operands (inst->opcode);
  if (num_opnds == 0)
    {
      DEBUG_TRACE ("SUCCEED: no operand");
      return 1;
    }

  if (stop_at < 0 || stop_at >= num_opnds)
    stop_at = num_opnds - 1;


  for (i = 0; i < AARCH64_MAX_QLF_SEQ_NUM; ++i, ++qualifiers_list)
    {
      int j;
      qualifiers = *qualifiers_list;


      found = 1;

      DEBUG_TRACE ("%d", i);
#ifdef DEBUG_AARCH64
      if (debug_dump)
 dump_match_qualifiers (inst->operands, qualifiers);
#endif



      if (empty_qualifier_sequence_p (qualifiers) == TRUE)
 {
   DEBUG_TRACE_IF (i == 0, "SUCCEED: empty qualifier list");
   if (i)
     found = 0;
   break;
 }

      for (j = 0; j < num_opnds && j <= stop_at; ++j, ++qualifiers)
 {
   if (inst->operands[j].qualifier == AARCH64_OPND_QLF_NIL)
     {






       continue;
     }
   else if (*qualifiers != inst->operands[j].qualifier)
     {



       if (operand_also_qualified_p (inst->operands + j, *qualifiers))
  continue;
       else
  {
    found = 0;
    break;
  }
     }
   else
     continue;
 }


      if (found == 1)
 break;
    }

  if (found == 1)
    {

      int j;
      qualifiers = *qualifiers_list;

      DEBUG_TRACE ("complete qualifiers using list %d", i);
#ifdef DEBUG_AARCH64
      if (debug_dump)
 dump_qualifier_sequence (qualifiers);
#endif

      for (j = 0; j <= stop_at; ++j, ++qualifiers)
 ret[j] = *qualifiers;
      for (; j < AARCH64_MAX_OPND_NUM; ++j)
 ret[j] = AARCH64_OPND_QLF_NIL;

      DEBUG_TRACE ("SUCCESS");
      return 1;
    }

  DEBUG_TRACE ("FAIL");
  return 0;
}
# 983 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.c"
static int
match_operands_qualifier (aarch64_inst *inst, bfd_boolean update_p)
{
  int i, nops;
  aarch64_opnd_qualifier_seq_t qualifiers = {0};

  if (!aarch64_find_best_match (inst, inst->opcode->qualifiers_list, -1,
          qualifiers))
    {
      DEBUG_TRACE ("matching FAIL");
      return 0;
    }

  if (inst->opcode->flags & F_STRICT)
    {

      nops = aarch64_num_of_operands (inst->opcode);
      for (i = 0; i < nops; ++i)
 if (inst->operands[i].qualifier != qualifiers[i])
   return FALSE;
    }


  if (update_p == TRUE)
    for (i = 0; i < AARCH64_MAX_OPND_NUM; ++i)
      {
 if (inst->opcode->operands[i] == AARCH64_OPND_NIL)
   break;
 DEBUG_TRACE_IF (inst->operands[i].qualifier != qualifiers[i],
   "update %s with %s for operand %d",
   aarch64_get_qualifier_name (inst->operands[i].qualifier),
   aarch64_get_qualifier_name (qualifiers[i]), i);
 inst->operands[i].qualifier = qualifiers[i];
      }

  DEBUG_TRACE ("matching SUCCESS");
  return 1;
}
# 1029 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.c"
bfd_boolean
aarch64_wide_constant_p (int64_t value, int is32, unsigned int *shift_amount)
{
  int amount;

  DEBUG_TRACE ("enter with 0x%" PRIx64 "(%" PRIi64 ")", value, value);

  if (is32)
    {



      uint64_t ext = value;
      if (ext >> 32 != 0 && ext >> 32 != (uint64_t) 0xffffffff)

 return FALSE;
      value &= (int64_t) 0xffffffff;
    }


  amount = -1;
  if ((value & ((int64_t) 0xffff << 0)) == value)
    amount = 0;
  else if ((value & ((int64_t) 0xffff << 16)) == value)
    amount = 16;
  else if (!is32 && (value & ((int64_t) 0xffff << 32)) == value)
    amount = 32;
  else if (!is32 && (value & ((int64_t) 0xffff << 48)) == value)
    amount = 48;

  if (amount == -1)
    {
      DEBUG_TRACE ("exit FALSE with 0x%" PRIx64 "(%" PRIi64 ")", value, value);
      return FALSE;
    }

  if (shift_amount != NULL)
    *shift_amount = amount;

  DEBUG_TRACE ("exit TRUE with amount %d", amount);

  return TRUE;
}
# 1092 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.c"
#define TOTAL_IMM_NB 5334

typedef struct
{
  uint64_t imm;
  aarch64_insn encoding;
} simd_imm_encoding;

static simd_imm_encoding simd_immediates[TOTAL_IMM_NB];

static int
simd_imm_encoding_cmp(const void *i1, const void *i2)
{
  const simd_imm_encoding *imm1 = (const simd_imm_encoding *)i1;
  const simd_imm_encoding *imm2 = (const simd_imm_encoding *)i2;

  if (imm1->imm < imm2->imm)
    return -1;
  if (imm1->imm > imm2->imm)
    return +1;
  return 0;
}
# 1123 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.c"
static inline int
encode_immediate_bitfield (int is64, uint32_t s, uint32_t r)
{
  return (is64 << 12) | (r << 6) | s;
}

static void
build_immediate_table (void)
{
  uint32_t log_e, e, s, r, s_mask;
  uint64_t mask, imm;
  int nb_imms;
  int is64;

  nb_imms = 0;
  for (log_e = 1; log_e <= 6; log_e++)
    {

      e = 1u << log_e;
      if (log_e == 6)
 {
   is64 = 1;
   mask = 0xffffffffffffffffull;
   s_mask = 0;
 }
      else
 {
   is64 = 0;
   mask = (1ull << e) - 1;






   s_mask = ((1u << (5 - log_e)) - 1) << (log_e + 1);
 }
      for (s = 0; s < e - 1; s++)
 for (r = 0; r < e; r++)
   {

     imm = (1ull << (s + 1)) - 1;

     if (r != 0)
       imm = (imm >> r) | ((imm << (e - r)) & mask);

     switch (log_e)
       {
       case 1: imm = (imm << 2) | imm;

       case 2: imm = (imm << 4) | imm;

       case 3: imm = (imm << 8) | imm;

       case 4: imm = (imm << 16) | imm;

       case 5: imm = (imm << 32) | imm;

       case 6: break;
       default: abort ();
       }
     simd_immediates[nb_imms].imm = imm;
     simd_immediates[nb_imms].encoding =
       encode_immediate_bitfield(is64, s | s_mask, r);
     nb_imms++;
   }
    }
  assert (nb_imms == TOTAL_IMM_NB);
  qsort(simd_immediates, nb_imms,
 sizeof(simd_immediates[0]), simd_imm_encoding_cmp);
}
# 1203 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.c"
bfd_boolean
aarch64_logical_immediate_p (uint64_t value, int esize, aarch64_insn *encoding)
{
  simd_imm_encoding imm_enc;
  const simd_imm_encoding *imm_encoding;
  static bfd_boolean initialized = FALSE;
  uint64_t upper;
  int i;

  DEBUG_TRACE ("enter with 0x%" PRIx64 "(%" PRIi64 "), esize: %d", value,
        value, esize);

  if (!initialized)
    {
      build_immediate_table ();
      initialized = TRUE;
    }



  upper = (uint64_t) -1 << (esize * 4) << (esize * 4);
  if ((value & ~upper) != value && (value | upper) != value)
    return FALSE;


  value &= ~upper;
  for (i = esize * 8; i < 64; i *= 2)
    value |= (value << i);

  imm_enc.imm = value;
  imm_encoding = (const simd_imm_encoding *)
    bsearch(&imm_enc, simd_immediates, TOTAL_IMM_NB,
            sizeof(simd_immediates[0]), simd_imm_encoding_cmp);
  if (imm_encoding == NULL)
    {
      DEBUG_TRACE ("exit with FALSE");
      return FALSE;
    }
  if (encoding != NULL)
    *encoding = imm_encoding->encoding;
  DEBUG_TRACE ("exit with TRUE");
  return TRUE;
}





int
aarch64_shrink_expanded_imm8 (uint64_t imm)
{
  int i, ret;
  uint32_t byte;

  ret = 0;
  for (i = 0; i < 8; i++)
    {
      byte = (imm >> (8 * i)) & 0xff;
      if (byte == 0xff)
 ret |= 1 << i;
      else if (byte != 0x00)
 return -1;
    }
  return ret;
}



static inline void
set_error (aarch64_operand_error *mismatch_detail,
    enum aarch64_operand_error_kind kind, int idx,
    const char* error)
{
  if (mismatch_detail == NULL)
    return;
  mismatch_detail->kind = kind;
  mismatch_detail->index = idx;
  mismatch_detail->error = error;
}

static inline void
set_syntax_error (aarch64_operand_error *mismatch_detail, int idx,
    const char* error)
{
  if (mismatch_detail == NULL)
    return;
  set_error (mismatch_detail, AARCH64_OPDE_SYNTAX_ERROR, idx, error);
}

static inline void
set_out_of_range_error (aarch64_operand_error *mismatch_detail,
   int idx, int lower_bound, int upper_bound,
   const char* error)
{
  if (mismatch_detail == NULL)
    return;
  set_error (mismatch_detail, AARCH64_OPDE_OUT_OF_RANGE, idx, error);
  mismatch_detail->data[0] = lower_bound;
  mismatch_detail->data[1] = upper_bound;
}

static inline void
set_imm_out_of_range_error (aarch64_operand_error *mismatch_detail,
       int idx, int lower_bound, int upper_bound)
{
  if (mismatch_detail == NULL)
    return;
  set_out_of_range_error (mismatch_detail, idx, lower_bound, upper_bound,
     _("immediate value"));
}

static inline void
set_offset_out_of_range_error (aarch64_operand_error *mismatch_detail,
          int idx, int lower_bound, int upper_bound)
{
  if (mismatch_detail == NULL)
    return;
  set_out_of_range_error (mismatch_detail, idx, lower_bound, upper_bound,
     _("immediate offset"));
}

static inline void
set_regno_out_of_range_error (aarch64_operand_error *mismatch_detail,
         int idx, int lower_bound, int upper_bound)
{
  if (mismatch_detail == NULL)
    return;
  set_out_of_range_error (mismatch_detail, idx, lower_bound, upper_bound,
     _("register number"));
}

static inline void
set_elem_idx_out_of_range_error (aarch64_operand_error *mismatch_detail,
     int idx, int lower_bound, int upper_bound)
{
  if (mismatch_detail == NULL)
    return;
  set_out_of_range_error (mismatch_detail, idx, lower_bound, upper_bound,
     _("register element index"));
}

static inline void
set_sft_amount_out_of_range_error (aarch64_operand_error *mismatch_detail,
       int idx, int lower_bound, int upper_bound)
{
  if (mismatch_detail == NULL)
    return;
  set_out_of_range_error (mismatch_detail, idx, lower_bound, upper_bound,
     _("shift amount"));
}



static inline void
set_multiplier_out_of_range_error (aarch64_operand_error *mismatch_detail,
       int idx, int lower_bound, int upper_bound)
{
  if (mismatch_detail == NULL)
    return;
  set_out_of_range_error (mismatch_detail, idx, lower_bound, upper_bound,
     _("multiplier"));
}

static inline void
set_unaligned_error (aarch64_operand_error *mismatch_detail, int idx,
       int alignment)
{
  if (mismatch_detail == NULL)
    return;
  set_error (mismatch_detail, AARCH64_OPDE_UNALIGNED, idx, NULL);
  mismatch_detail->data[0] = alignment;
}

static inline void
set_reg_list_error (aarch64_operand_error *mismatch_detail, int idx,
      int expected_num)
{
  if (mismatch_detail == NULL)
    return;
  set_error (mismatch_detail, AARCH64_OPDE_REG_LIST, idx, NULL);
  mismatch_detail->data[0] = expected_num;
}

static inline void
set_other_error (aarch64_operand_error *mismatch_detail, int idx,
   const char* error)
{
  if (mismatch_detail == NULL)
    return;
  set_error (mismatch_detail, AARCH64_OPDE_OTHER_ERROR, idx, error);
}
# 1411 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.c"
static int
operand_general_constraint_met_p (const aarch64_opnd_info *opnds, int idx,
      enum aarch64_opnd type,
      const aarch64_opcode *opcode,
      aarch64_operand_error *mismatch_detail)
{
  unsigned num, modifiers, shift;
  unsigned char size;
  int64_t imm, min_value, max_value;
  uint64_t uvalue, mask;
  const aarch64_opnd_info *opnd = opnds + idx;
  aarch64_opnd_qualifier_t qualifier = opnd->qualifier;

  assert (opcode->operands[idx] == opnd->type && opnd->type == type);

  switch (aarch64_operands[type].op_class)
    {
    case AARCH64_OPND_CLASS_INT_REG:

      if (type == AARCH64_OPND_PAIRREG)
 {
   assert (idx == 1 || idx == 3);
   if (opnds[idx - 1].reg.regno % 2 != 0)
     {
       set_syntax_error (mismatch_detail, idx - 1,
    _("reg pair must start from even reg"));
       return 0;
     }
   if (opnds[idx].reg.regno != opnds[idx - 1].reg.regno + 1)
     {
       set_syntax_error (mismatch_detail, idx,
    _("reg pair must be contiguous"));
       return 0;
     }
   break;
 }


      if (type == AARCH64_OPND_Rt_SYS)
 {
   assert (idx == 1 && (aarch64_get_operand_class (opnds[0].type)
          == AARCH64_OPND_CLASS_SYSTEM));
   if (opnds[1].present
       && !aarch64_sys_ins_reg_has_xt (opnds[0].sysins_op))
     {
       set_other_error (mismatch_detail, idx, _("extraneous register"));
       return 0;
     }
   if (!opnds[1].present
       && aarch64_sys_ins_reg_has_xt (opnds[0].sysins_op))
     {
       set_other_error (mismatch_detail, idx, _("missing register"));
       return 0;
     }
 }
      switch (qualifier)
 {
 case AARCH64_OPND_QLF_WSP:
 case AARCH64_OPND_QLF_SP:
   if (!aarch64_stack_pointer_p (opnd))
     {
       set_other_error (mismatch_detail, idx,
          _("stack pointer register expected"));
       return 0;
     }
   break;
 default:
   break;
 }
      break;

    case AARCH64_OPND_CLASS_SVE_REG:
      switch (type)
 {
 case AARCH64_OPND_SVE_Zm3_INDEX:
 case AARCH64_OPND_SVE_Zm3_22_INDEX:
 case AARCH64_OPND_SVE_Zm4_INDEX:
   size = get_operand_fields_width (get_operand_from_code (type));
   shift = get_operand_specific_data (&aarch64_operands[type]);
   mask = (1 << shift) - 1;
   if (opnd->reg.regno > mask)
     {
       assert (mask == 7 || mask == 15);
       set_other_error (mismatch_detail, idx,
          mask == 15
          ? _("z0-z15 expected")
          : _("z0-z7 expected"));
       return 0;
     }
   mask = (1 << (size - shift)) - 1;
   if (!value_in_range_p (opnd->reglane.index, 0, mask))
     {
       set_elem_idx_out_of_range_error (mismatch_detail, idx, 0, mask);
       return 0;
     }
   break;

 case AARCH64_OPND_SVE_Zn_INDEX:
   size = aarch64_get_qualifier_esize (opnd->qualifier);
   if (!value_in_range_p (opnd->reglane.index, 0, 64 / size - 1))
     {
       set_elem_idx_out_of_range_error (mismatch_detail, idx,
            0, 64 / size - 1);
       return 0;
     }
   break;

 case AARCH64_OPND_SVE_ZnxN:
 case AARCH64_OPND_SVE_ZtxN:
   if (opnd->reglist.num_regs != get_opcode_dependent_value (opcode))
     {
       set_other_error (mismatch_detail, idx,
          _("invalid register list"));
       return 0;
     }
   break;

 default:
   break;
 }
      break;

    case AARCH64_OPND_CLASS_PRED_REG:
      if (opnd->reg.regno >= 8
   && get_operand_fields_width (get_operand_from_code (type)) == 3)
 {
   set_other_error (mismatch_detail, idx, _("p0-p7 expected"));
   return 0;
 }
      break;

    case AARCH64_OPND_CLASS_COND:
      if (type == AARCH64_OPND_COND1
   && (opnds[idx].cond->value & 0xe) == 0xe)
 {

   set_syntax_error (mismatch_detail, idx, NULL);
 }
      break;

    case AARCH64_OPND_CLASS_ADDRESS:

      switch (opcode->iclass)
 {
 case ldst_pos:
 case ldst_unscaled:
 case ldstnapair_offs:
 case ldstpair_off:
 case ldst_unpriv:
   if (opnd->addr.writeback == 1)
     {
       set_syntax_error (mismatch_detail, idx,
    _("unexpected address writeback"));
       return 0;
     }
   break;
 case ldst_imm10:
   if (opnd->addr.writeback == 1 && opnd->addr.preind != 1)
     {
       set_syntax_error (mismatch_detail, idx,
    _("unexpected address writeback"));
       return 0;
     }
   break;
 case ldst_imm9:
 case ldstpair_indexed:
 case asisdlsep:
 case asisdlsop:
   if (opnd->addr.writeback == 0)
     {
       set_syntax_error (mismatch_detail, idx,
    _("address writeback expected"));
       return 0;
     }
   break;
 default:
   assert (opnd->addr.writeback == 0);
   break;
 }
      switch (type)
 {
 case AARCH64_OPND_ADDR_SIMM7:




   size = aarch64_get_qualifier_esize (opnd->qualifier);
   if (!value_in_range_p (opnd->addr.offset.imm, -64 * size, 63 * size))
     {
       set_offset_out_of_range_error (mismatch_detail, idx,
          -64 * size, 63 * size);
       return 0;
     }
   if (!value_aligned_p (opnd->addr.offset.imm, size))
     {
       set_unaligned_error (mismatch_detail, idx, size);
       return 0;
     }
   break;
 case AARCH64_OPND_ADDR_OFFSET:
 case AARCH64_OPND_ADDR_SIMM9:

   if (!value_in_range_p (opnd->addr.offset.imm, -256, 255))
     {
       set_offset_out_of_range_error (mismatch_detail, idx, -256, 255);
       return 0;
     }
   break;

 case AARCH64_OPND_ADDR_SIMM9_2:


   size = aarch64_get_qualifier_esize (qualifier);
   if ((value_in_range_p (opnd->addr.offset.imm, 0, 255)
        && !value_aligned_p (opnd->addr.offset.imm, size))
       || value_in_range_p (opnd->addr.offset.imm, -256, -1))
     return 1;
   set_other_error (mismatch_detail, idx,
      _("negative or unaligned offset expected"));
   return 0;

 case AARCH64_OPND_ADDR_SIMM10:

   if (!value_in_range_p (opnd->addr.offset.imm, -4096, 4088))
     {
       set_offset_out_of_range_error (mismatch_detail, idx, -4096, 4088);
       return 0;
     }
   if (!value_aligned_p (opnd->addr.offset.imm, 8))
     {
       set_unaligned_error (mismatch_detail, idx, 8);
       return 0;
     }
   break;

 case AARCH64_OPND_SIMD_ADDR_POST:

   assert (idx == 1);
   if (opnd->addr.offset.is_reg)
     {
       if (value_in_range_p (opnd->addr.offset.regno, 0, 30))
  return 1;
       else
  {
    set_other_error (mismatch_detail, idx,
       _("invalid register offset"));
    return 0;
  }
     }
   else
     {
       const aarch64_opnd_info *prev = &opnds[idx-1];
       unsigned num_bytes;


       int is_ld1r = get_opcode_dependent_value (opcode) == 1;
       if (opcode->operands[0] == AARCH64_OPND_LVt_AL)

  num_bytes = (is_ld1r ? 1 : prev->reglist.num_regs)
    * aarch64_get_qualifier_esize (prev->qualifier);
       else
  num_bytes = prev->reglist.num_regs
    * aarch64_get_qualifier_esize (prev->qualifier)
    * aarch64_get_qualifier_nelem (prev->qualifier);
       if ((int) num_bytes != opnd->addr.offset.imm)
  {
    set_other_error (mismatch_detail, idx,
       _("invalid post-increment amount"));
    return 0;
  }
     }
   break;

 case AARCH64_OPND_ADDR_REGOFF:



   size = aarch64_get_qualifier_esize (opnd->qualifier);

   if (opnd->shifter.amount != 0
       && opnd->shifter.amount != (int)get_logsz (size))
     {
       set_other_error (mismatch_detail, idx,
          _("invalid shift amount"));
       return 0;
     }


   switch (opnd->shifter.kind)
     {
     case AARCH64_MOD_UXTW:
     case AARCH64_MOD_LSL:
     case AARCH64_MOD_SXTW:
     case AARCH64_MOD_SXTX: break;
     default:
       set_other_error (mismatch_detail, idx,
          _("invalid extend/shift operator"));
       return 0;
     }
   break;

 case AARCH64_OPND_ADDR_UIMM12:
   imm = opnd->addr.offset.imm;



   size = aarch64_get_qualifier_esize (qualifier);
   if (!value_in_range_p (imm, 0, 4095 * size))
     {
       set_offset_out_of_range_error (mismatch_detail, idx,
          0, 4095 * size);
       return 0;
     }
   if (!value_aligned_p (imm, size))
     {
       set_unaligned_error (mismatch_detail, idx, size);
       return 0;
     }
   break;

 case AARCH64_OPND_ADDR_PCREL14:
 case AARCH64_OPND_ADDR_PCREL19:
 case AARCH64_OPND_ADDR_PCREL21:
 case AARCH64_OPND_ADDR_PCREL26:
   imm = opnd->imm.value;
   if (operand_need_shift_by_two (get_operand_from_code (type)))
     {


       if (!value_aligned_p (imm, 4))
  {
    set_unaligned_error (mismatch_detail, idx, 4);
    return 0;
  }


       imm >>= 2;
     }
   size = get_operand_fields_width (get_operand_from_code (type));
   if (!value_fit_signed_field_p (imm, size))
     {
       set_other_error (mismatch_detail, idx,
          _("immediate out of range"));
       return 0;
     }
   break;

 case AARCH64_OPND_SVE_ADDR_RI_S4xVL:
 case AARCH64_OPND_SVE_ADDR_RI_S4x2xVL:
 case AARCH64_OPND_SVE_ADDR_RI_S4x3xVL:
 case AARCH64_OPND_SVE_ADDR_RI_S4x4xVL:
   min_value = -8;
   max_value = 7;
 sve_imm_offset_vl:
   assert (!opnd->addr.offset.is_reg);
   assert (opnd->addr.preind);
   num = 1 + get_operand_specific_data (&aarch64_operands[type]);
   min_value *= num;
   max_value *= num;
   if ((opnd->addr.offset.imm != 0 && !opnd->shifter.operator_present)
       || (opnd->shifter.operator_present
    && opnd->shifter.kind != AARCH64_MOD_MUL_VL))
     {
       set_other_error (mismatch_detail, idx,
          _("invalid addressing mode"));
       return 0;
     }
   if (!value_in_range_p (opnd->addr.offset.imm, min_value, max_value))
     {
       set_offset_out_of_range_error (mismatch_detail, idx,
          min_value, max_value);
       return 0;
     }
   if (!value_aligned_p (opnd->addr.offset.imm, num))
     {
       set_unaligned_error (mismatch_detail, idx, num);
       return 0;
     }
   break;

 case AARCH64_OPND_SVE_ADDR_RI_S6xVL:
   min_value = -32;
   max_value = 31;
   goto sve_imm_offset_vl;

 case AARCH64_OPND_SVE_ADDR_RI_S9xVL:
   min_value = -256;
   max_value = 255;
   goto sve_imm_offset_vl;

 case AARCH64_OPND_SVE_ADDR_RI_U6:
 case AARCH64_OPND_SVE_ADDR_RI_U6x2:
 case AARCH64_OPND_SVE_ADDR_RI_U6x4:
 case AARCH64_OPND_SVE_ADDR_RI_U6x8:
   min_value = 0;
   max_value = 63;
 sve_imm_offset:
   assert (!opnd->addr.offset.is_reg);
   assert (opnd->addr.preind);
   num = 1 << get_operand_specific_data (&aarch64_operands[type]);
   min_value *= num;
   max_value *= num;
   if (opnd->shifter.operator_present
       || opnd->shifter.amount_present)
     {
       set_other_error (mismatch_detail, idx,
          _("invalid addressing mode"));
       return 0;
     }
   if (!value_in_range_p (opnd->addr.offset.imm, min_value, max_value))
     {
       set_offset_out_of_range_error (mismatch_detail, idx,
          min_value, max_value);
       return 0;
     }
   if (!value_aligned_p (opnd->addr.offset.imm, num))
     {
       set_unaligned_error (mismatch_detail, idx, num);
       return 0;
     }
   break;

 case AARCH64_OPND_SVE_ADDR_RI_S4x16:
   min_value = -8;
   max_value = 7;
   goto sve_imm_offset;

 case AARCH64_OPND_SVE_ADDR_R:
 case AARCH64_OPND_SVE_ADDR_RR:
 case AARCH64_OPND_SVE_ADDR_RR_LSL1:
 case AARCH64_OPND_SVE_ADDR_RR_LSL2:
 case AARCH64_OPND_SVE_ADDR_RR_LSL3:
 case AARCH64_OPND_SVE_ADDR_RX:
 case AARCH64_OPND_SVE_ADDR_RX_LSL1:
 case AARCH64_OPND_SVE_ADDR_RX_LSL2:
 case AARCH64_OPND_SVE_ADDR_RX_LSL3:
 case AARCH64_OPND_SVE_ADDR_RZ:
 case AARCH64_OPND_SVE_ADDR_RZ_LSL1:
 case AARCH64_OPND_SVE_ADDR_RZ_LSL2:
 case AARCH64_OPND_SVE_ADDR_RZ_LSL3:
   modifiers = 1 << AARCH64_MOD_LSL;
 sve_rr_operand:
   assert (opnd->addr.offset.is_reg);
   assert (opnd->addr.preind);
   if ((aarch64_operands[type].flags & OPD_F_NO_ZR) != 0
       && opnd->addr.offset.regno == 31)
     {
       set_other_error (mismatch_detail, idx,
          _("index register xzr is not allowed"));
       return 0;
     }
   if (((1 << opnd->shifter.kind) & modifiers) == 0
       || (opnd->shifter.amount
    != get_operand_specific_data (&aarch64_operands[type])))
     {
       set_other_error (mismatch_detail, idx,
          _("invalid addressing mode"));
       return 0;
     }
   break;

 case AARCH64_OPND_SVE_ADDR_RZ_XTW_14:
 case AARCH64_OPND_SVE_ADDR_RZ_XTW_22:
 case AARCH64_OPND_SVE_ADDR_RZ_XTW1_14:
 case AARCH64_OPND_SVE_ADDR_RZ_XTW1_22:
 case AARCH64_OPND_SVE_ADDR_RZ_XTW2_14:
 case AARCH64_OPND_SVE_ADDR_RZ_XTW2_22:
 case AARCH64_OPND_SVE_ADDR_RZ_XTW3_14:
 case AARCH64_OPND_SVE_ADDR_RZ_XTW3_22:
   modifiers = (1 << AARCH64_MOD_SXTW) | (1 << AARCH64_MOD_UXTW);
   goto sve_rr_operand;

 case AARCH64_OPND_SVE_ADDR_ZI_U5:
 case AARCH64_OPND_SVE_ADDR_ZI_U5x2:
 case AARCH64_OPND_SVE_ADDR_ZI_U5x4:
 case AARCH64_OPND_SVE_ADDR_ZI_U5x8:
   min_value = 0;
   max_value = 31;
   goto sve_imm_offset;

 case AARCH64_OPND_SVE_ADDR_ZZ_LSL:
   modifiers = 1 << AARCH64_MOD_LSL;
 sve_zz_operand:
   assert (opnd->addr.offset.is_reg);
   assert (opnd->addr.preind);
   if (((1 << opnd->shifter.kind) & modifiers) == 0
       || opnd->shifter.amount < 0
       || opnd->shifter.amount > 3)
     {
       set_other_error (mismatch_detail, idx,
          _("invalid addressing mode"));
       return 0;
     }
   break;

 case AARCH64_OPND_SVE_ADDR_ZZ_SXTW:
   modifiers = (1 << AARCH64_MOD_SXTW);
   goto sve_zz_operand;

 case AARCH64_OPND_SVE_ADDR_ZZ_UXTW:
   modifiers = 1 << AARCH64_MOD_UXTW;
   goto sve_zz_operand;

 default:
   break;
 }
      break;

    case AARCH64_OPND_CLASS_SIMD_REGLIST:
      if (type == AARCH64_OPND_LEt)
 {

   num = 16 / aarch64_get_qualifier_esize (qualifier) - 1;
   if (!value_in_range_p (opnd->reglist.index, 0, num))
     {
       set_elem_idx_out_of_range_error (mismatch_detail, idx, 0, num);
       return 0;
     }
 }


      num = get_opcode_dependent_value (opcode);
      switch (type)
 {
 case AARCH64_OPND_LVt:
   assert (num >= 1 && num <= 4);


   if (num != 1 && opnd->reglist.num_regs != num)
     {
       set_reg_list_error (mismatch_detail, idx, num);
       return 0;
     }
   break;
 case AARCH64_OPND_LVt_AL:
 case AARCH64_OPND_LEt:
   assert (num >= 1 && num <= 4);


   if (opnd->reglist.num_regs != num)
     {
       set_reg_list_error (mismatch_detail, idx, num);
       return 0;
     }
   break;
 default:
   break;
 }
      break;

    case AARCH64_OPND_CLASS_IMMEDIATE:

      imm = opnd->imm.value;

      if (qualifier_value_in_range_constraint_p (qualifier)
   && !value_in_range_p (imm, get_lower_bound (qualifier),
    get_upper_bound (qualifier)))
 {
   set_imm_out_of_range_error (mismatch_detail, idx,
          get_lower_bound (qualifier),
          get_upper_bound (qualifier));
   return 0;
 }

      switch (type)
 {
 case AARCH64_OPND_AIMM:
   if (opnd->shifter.kind != AARCH64_MOD_LSL)
     {
       set_other_error (mismatch_detail, idx,
          _("invalid shift operator"));
       return 0;
     }
   if (opnd->shifter.amount != 0 && opnd->shifter.amount != 12)
     {
       set_other_error (mismatch_detail, idx,
          _("shift amount must be 0 or 12"));
       return 0;
     }
   if (!value_fit_unsigned_field_p (opnd->imm.value, 12))
     {
       set_other_error (mismatch_detail, idx,
          _("immediate out of range"));
       return 0;
     }
   break;

 case AARCH64_OPND_HALF:
   assert (idx == 1 && opnds[0].type == AARCH64_OPND_Rd);
   if (opnd->shifter.kind != AARCH64_MOD_LSL)
     {
       set_other_error (mismatch_detail, idx,
          _("invalid shift operator"));
       return 0;
     }
   size = aarch64_get_qualifier_esize (opnds[0].qualifier);
   if (!value_aligned_p (opnd->shifter.amount, 16))
     {
       set_other_error (mismatch_detail, idx,
          _("shift amount must be a multiple of 16"));
       return 0;
     }
   if (!value_in_range_p (opnd->shifter.amount, 0, size * 8 - 16))
     {
       set_sft_amount_out_of_range_error (mismatch_detail, idx,
       0, size * 8 - 16);
       return 0;
     }
   if (opnd->imm.value < 0)
     {
       set_other_error (mismatch_detail, idx,
          _("negative immediate value not allowed"));
       return 0;
     }
   if (!value_fit_unsigned_field_p (opnd->imm.value, 16))
     {
       set_other_error (mismatch_detail, idx,
          _("immediate out of range"));
       return 0;
     }
   break;

 case AARCH64_OPND_IMM_MOV:
     {
       int esize = aarch64_get_qualifier_esize (opnds[0].qualifier);
       imm = opnd->imm.value;
       assert (idx == 1);
       switch (opcode->op)
  {
  case OP_MOV_IMM_WIDEN:
    imm = ~imm;

  case OP_MOV_IMM_WIDE:
    if (!aarch64_wide_constant_p (imm, esize == 4, NULL))
      {
        set_other_error (mismatch_detail, idx,
           _("immediate out of range"));
        return 0;
      }
    break;
  case OP_MOV_IMM_LOG:
    if (!aarch64_logical_immediate_p (imm, esize, NULL))
      {
        set_other_error (mismatch_detail, idx,
           _("immediate out of range"));
        return 0;
      }
    break;
  default:
    assert (0);
    return 0;
  }
     }
   break;

 case AARCH64_OPND_NZCV:
 case AARCH64_OPND_CCMP_IMM:
 case AARCH64_OPND_EXCEPTION:
 case AARCH64_OPND_UIMM4:
 case AARCH64_OPND_UIMM7:
 case AARCH64_OPND_UIMM3_OP1:
 case AARCH64_OPND_UIMM3_OP2:
 case AARCH64_OPND_SVE_UIMM3:
 case AARCH64_OPND_SVE_UIMM7:
 case AARCH64_OPND_SVE_UIMM8:
 case AARCH64_OPND_SVE_UIMM8_53:
   size = get_operand_fields_width (get_operand_from_code (type));
   assert (size < 32);
   if (!value_fit_unsigned_field_p (opnd->imm.value, size))
     {
       set_imm_out_of_range_error (mismatch_detail, idx, 0,
       (1 << size) - 1);
       return 0;
     }
   break;

 case AARCH64_OPND_SIMM5:
 case AARCH64_OPND_SVE_SIMM5:
 case AARCH64_OPND_SVE_SIMM5B:
 case AARCH64_OPND_SVE_SIMM6:
 case AARCH64_OPND_SVE_SIMM8:
   size = get_operand_fields_width (get_operand_from_code (type));
   assert (size < 32);
   if (!value_fit_signed_field_p (opnd->imm.value, size))
     {
       set_imm_out_of_range_error (mismatch_detail, idx,
       -(1 << (size - 1)),
       (1 << (size - 1)) - 1);
       return 0;
     }
   break;

 case AARCH64_OPND_WIDTH:
   assert (idx > 1 && opnds[idx-1].type == AARCH64_OPND_IMM
    && opnds[0].type == AARCH64_OPND_Rd);
   size = get_upper_bound (qualifier);
   if (opnd->imm.value + opnds[idx-1].imm.value > size)

     {
       set_imm_out_of_range_error (mismatch_detail, idx, 1,
       size - opnds[idx-1].imm.value);
       return 0;
     }
   break;

 case AARCH64_OPND_LIMM:
 case AARCH64_OPND_SVE_LIMM:
   {
     int esize = aarch64_get_qualifier_esize (opnds[0].qualifier);
     uint64_t uimm = opnd->imm.value;
     if (opcode->op == OP_BIC)
       uimm = ~uimm;
     if (!aarch64_logical_immediate_p (uimm, esize, NULL))
       {
  set_other_error (mismatch_detail, idx,
     _("immediate out of range"));
  return 0;
       }
   }
   break;

 case AARCH64_OPND_IMM0:
 case AARCH64_OPND_FPIMM0:
   if (opnd->imm.value != 0)
     {
       set_other_error (mismatch_detail, idx,
          _("immediate zero expected"));
       return 0;
     }
   break;

 case AARCH64_OPND_IMM_ROT1:
 case AARCH64_OPND_IMM_ROT2:
 case AARCH64_OPND_SVE_IMM_ROT2:
   if (opnd->imm.value != 0
       && opnd->imm.value != 90
       && opnd->imm.value != 180
       && opnd->imm.value != 270)
     {
       set_other_error (mismatch_detail, idx,
          _("rotate expected to be 0, 90, 180 or 270"));
       return 0;
     }
   break;

 case AARCH64_OPND_IMM_ROT3:
 case AARCH64_OPND_SVE_IMM_ROT1:
   if (opnd->imm.value != 90 && opnd->imm.value != 270)
     {
       set_other_error (mismatch_detail, idx,
          _("rotate expected to be 90 or 270"));
       return 0;
     }
   break;

 case AARCH64_OPND_SHLL_IMM:
   assert (idx == 2);
   size = 8 * aarch64_get_qualifier_esize (opnds[idx - 1].qualifier);
   if (opnd->imm.value != size)
     {
       set_other_error (mismatch_detail, idx,
          _("invalid shift amount"));
       return 0;
     }
   break;

 case AARCH64_OPND_IMM_VLSL:
   size = aarch64_get_qualifier_esize (qualifier);
   if (!value_in_range_p (opnd->imm.value, 0, size * 8 - 1))
     {
       set_imm_out_of_range_error (mismatch_detail, idx, 0,
       size * 8 - 1);
       return 0;
     }
   break;

 case AARCH64_OPND_IMM_VLSR:
   size = aarch64_get_qualifier_esize (qualifier);
   if (!value_in_range_p (opnd->imm.value, 1, size * 8))
     {
       set_imm_out_of_range_error (mismatch_detail, idx, 1, size * 8);
       return 0;
     }
   break;

 case AARCH64_OPND_SIMD_IMM:
 case AARCH64_OPND_SIMD_IMM_SFT:

   switch (qualifier)
     {
     case AARCH64_OPND_QLF_LSL:
       if (opnd->shifter.kind != AARCH64_MOD_LSL)
  {
    set_other_error (mismatch_detail, idx,
       _("invalid shift operator"));
    return 0;
  }
       break;
     case AARCH64_OPND_QLF_MSL:
       if (opnd->shifter.kind != AARCH64_MOD_MSL)
  {
    set_other_error (mismatch_detail, idx,
       _("invalid shift operator"));
    return 0;
  }
       break;
     case AARCH64_OPND_QLF_NIL:
       if (opnd->shifter.kind != AARCH64_MOD_NONE)
  {
    set_other_error (mismatch_detail, idx,
       _("shift is not permitted"));
    return 0;
  }
       break;
     default:
       assert (0);
       return 0;
     }

   assert (idx == 1);
   if (aarch64_get_qualifier_esize (opnds[0].qualifier) != 8)
     {

       if (!value_in_range_p (opnd->imm.value, -128, 255))
  {
    set_imm_out_of_range_error (mismatch_detail, idx, -128, 255);
    return 0;
  }
     }
   else if (aarch64_shrink_expanded_imm8 (opnd->imm.value) < 0)
     {



       set_other_error (mismatch_detail, idx,
          _("invalid value for immediate"));
       return 0;
     }

   switch (opnd->shifter.kind)
     {
     case AARCH64_MOD_LSL:
       size = aarch64_get_qualifier_esize (opnds[0].qualifier);
       if (!value_in_range_p (opnd->shifter.amount, 0, (size - 1) * 8))
  {
    set_sft_amount_out_of_range_error (mismatch_detail, idx, 0,
           (size - 1) * 8);
    return 0;
  }
       if (!value_aligned_p (opnd->shifter.amount, 8))
  {
    set_unaligned_error (mismatch_detail, idx, 8);
    return 0;
  }
       break;
     case AARCH64_MOD_MSL:

       if (opnd->shifter.amount != 8 && opnd->shifter.amount != 16)
  {
    set_other_error (mismatch_detail, idx,
       _("shift amount must be 0 or 16"));
    return 0;
  }
       break;
     default:
       if (opnd->shifter.kind != AARCH64_MOD_NONE)
  {
    set_other_error (mismatch_detail, idx,
       _("invalid shift operator"));
    return 0;
  }
       break;
     }
   break;

 case AARCH64_OPND_FPIMM:
 case AARCH64_OPND_SIMD_FPIMM:
 case AARCH64_OPND_SVE_FPIMM8:
   if (opnd->imm.is_fp == 0)
     {
       set_other_error (mismatch_detail, idx,
          _("floating-point immediate expected"));
       return 0;
     }




   if (!value_in_range_p (opnd->imm.value, 0, 255))
     {
       set_other_error (mismatch_detail, idx,
          _("immediate out of range"));
       return 0;
     }
   if (opnd->shifter.kind != AARCH64_MOD_NONE)
     {
       set_other_error (mismatch_detail, idx,
          _("invalid shift operator"));
       return 0;
     }
   break;

 case AARCH64_OPND_SVE_AIMM:
   min_value = 0;
 sve_aimm:
   assert (opnd->shifter.kind == AARCH64_MOD_LSL);
   size = aarch64_get_qualifier_esize (opnds[0].qualifier);
   mask = ~((uint64_t) -1 << (size * 4) << (size * 4));
   uvalue = opnd->imm.value;
   shift = opnd->shifter.amount;
   if (size == 1)
     {
       if (shift != 0)
  {
    set_other_error (mismatch_detail, idx,
       _("no shift amount allowed for"
         " 8-bit constants"));
    return 0;
  }
     }
   else
     {
       if (shift != 0 && shift != 8)
  {
    set_other_error (mismatch_detail, idx,
       _("shift amount must be 0 or 8"));
    return 0;
  }
       if (shift == 0 && (uvalue & 0xff) == 0)
  {
    shift = 8;
    uvalue = (int64_t) uvalue / 256;
  }
     }
   mask >>= shift;
   if ((uvalue & mask) != uvalue && (uvalue | ~mask) != uvalue)
     {
       set_other_error (mismatch_detail, idx,
          _("immediate too big for element size"));
       return 0;
     }
   uvalue = (uvalue - min_value) & mask;
   if (uvalue > 0xff)
     {
       set_other_error (mismatch_detail, idx,
          _("invalid arithmetic immediate"));
       return 0;
     }
   break;

 case AARCH64_OPND_SVE_ASIMM:
   min_value = -128;
   goto sve_aimm;

 case AARCH64_OPND_SVE_I1_HALF_ONE:
   assert (opnd->imm.is_fp);
   if (opnd->imm.value != 0x3f000000 && opnd->imm.value != 0x3f800000)
     {
       set_other_error (mismatch_detail, idx,
          _("floating-point value must be 0.5 or 1.0"));
       return 0;
     }
   break;

 case AARCH64_OPND_SVE_I1_HALF_TWO:
   assert (opnd->imm.is_fp);
   if (opnd->imm.value != 0x3f000000 && opnd->imm.value != 0x40000000)
     {
       set_other_error (mismatch_detail, idx,
          _("floating-point value must be 0.5 or 2.0"));
       return 0;
     }
   break;

 case AARCH64_OPND_SVE_I1_ZERO_ONE:
   assert (opnd->imm.is_fp);
   if (opnd->imm.value != 0 && opnd->imm.value != 0x3f800000)
     {
       set_other_error (mismatch_detail, idx,
          _("floating-point value must be 0.0 or 1.0"));
       return 0;
     }
   break;

 case AARCH64_OPND_SVE_INV_LIMM:
   {
     int esize = aarch64_get_qualifier_esize (opnds[0].qualifier);
     uint64_t uimm = ~opnd->imm.value;
     if (!aarch64_logical_immediate_p (uimm, esize, NULL))
       {
  set_other_error (mismatch_detail, idx,
     _("immediate out of range"));
  return 0;
       }
   }
   break;

 case AARCH64_OPND_SVE_LIMM_MOV:
   {
     int esize = aarch64_get_qualifier_esize (opnds[0].qualifier);
     uint64_t uimm = opnd->imm.value;
     if (!aarch64_logical_immediate_p (uimm, esize, NULL))
       {
  set_other_error (mismatch_detail, idx,
     _("immediate out of range"));
  return 0;
       }
     if (!aarch64_sve_dupm_mov_immediate_p (uimm, esize))
       {
  set_other_error (mismatch_detail, idx,
     _("invalid replicated MOV immediate"));
  return 0;
       }
   }
   break;

 case AARCH64_OPND_SVE_PATTERN_SCALED:
   assert (opnd->shifter.kind == AARCH64_MOD_MUL);
   if (!value_in_range_p (opnd->shifter.amount, 1, 16))
     {
       set_multiplier_out_of_range_error (mismatch_detail, idx, 1, 16);
       return 0;
     }
   break;

 case AARCH64_OPND_SVE_SHLIMM_PRED:
 case AARCH64_OPND_SVE_SHLIMM_UNPRED:
   size = aarch64_get_qualifier_esize (opnds[idx - 1].qualifier);
   if (!value_in_range_p (opnd->imm.value, 0, 8 * size - 1))
     {
       set_imm_out_of_range_error (mismatch_detail, idx,
       0, 8 * size - 1);
       return 0;
     }
   break;

 case AARCH64_OPND_SVE_SHRIMM_PRED:
 case AARCH64_OPND_SVE_SHRIMM_UNPRED:
   size = aarch64_get_qualifier_esize (opnds[idx - 1].qualifier);
   if (!value_in_range_p (opnd->imm.value, 1, 8 * size))
     {
       set_imm_out_of_range_error (mismatch_detail, idx, 1, 8 * size);
       return 0;
     }
   break;

 default:
   break;
 }
      break;

    case AARCH64_OPND_CLASS_SYSTEM:
      switch (type)
 {
 case AARCH64_OPND_PSTATEFIELD:
   assert (idx == 0 && opnds[1].type == AARCH64_OPND_UIMM4);



   if ((opnd->pstatefield == 0x03
        || opnd->pstatefield == 0x04
        || opnd->pstatefield == 0x1a)
       && opnds[1].imm.value > 1)
     {
       set_imm_out_of_range_error (mismatch_detail, idx, 0, 1);
       return 0;
     }





   if (opnd->pstatefield == 0x05 && opnds[1].imm.value > 1)
     {
       set_imm_out_of_range_error (mismatch_detail, idx, 0, 1);
       return 0;
     }
   break;
 default:
   break;
 }
      break;

    case AARCH64_OPND_CLASS_SIMD_ELEMENT:

      if (opcode->op == OP_FCMLA_ELEM)


 num = aarch64_get_qualifier_nelem (opnds[0].qualifier)
       * aarch64_get_qualifier_esize (opnds[0].qualifier) / 2;
      else
 num = 16;
      num = num / aarch64_get_qualifier_esize (qualifier) - 1;


      if (!value_in_range_p (opnd->reglane.index, 0, num))
 {
   set_elem_idx_out_of_range_error (mismatch_detail, idx, 0, num);
   return 0;
 }
# 2519 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.c"
      if (type == AARCH64_OPND_Em16 && qualifier == AARCH64_OPND_QLF_S_H
   && !value_in_range_p (opnd->reglane.regno, 0, 15))
 {
   set_regno_out_of_range_error (mismatch_detail, idx, 0, 15);
   return 0;
 }
      break;

    case AARCH64_OPND_CLASS_MODIFIED_REG:
      assert (idx == 1 || idx == 2);
      switch (type)
 {
 case AARCH64_OPND_Rm_EXT:
   if (!aarch64_extend_operator_p (opnd->shifter.kind)
       && opnd->shifter.kind != AARCH64_MOD_LSL)
     {
       set_other_error (mismatch_detail, idx,
          _("extend operator expected"));
       return 0;
     }




   if (!aarch64_stack_pointer_p (opnds + 0)
       && (idx != 2 || !aarch64_stack_pointer_p (opnds + 1)))
     {
       if (!opnd->shifter.operator_present)
  {
    set_other_error (mismatch_detail, idx,
       _("missing extend operator"));
    return 0;
  }
       else if (opnd->shifter.kind == AARCH64_MOD_LSL)
  {
    set_other_error (mismatch_detail, idx,
       _("'LSL' operator not allowed"));
    return 0;
  }
     }
   assert (opnd->shifter.operator_present
    || opnd->shifter.kind == AARCH64_MOD_LSL);
   if (!value_in_range_p (opnd->shifter.amount, 0, 4))
     {
       set_sft_amount_out_of_range_error (mismatch_detail, idx, 0, 4);
       return 0;
     }





   if (qualifier == AARCH64_OPND_QLF_X
       && opnd->shifter.kind != AARCH64_MOD_LSL
       && opnd->shifter.kind != AARCH64_MOD_UXTX
       && opnd->shifter.kind != AARCH64_MOD_SXTX)
     {
       set_other_error (mismatch_detail, idx, _("W register expected"));
       return 0;
     }
   break;

 case AARCH64_OPND_Rm_SFT:


   if (!aarch64_shift_operator_p (opnd->shifter.kind))
     {
       set_other_error (mismatch_detail, idx,
          _("shift operator expected"));
       return 0;
     }
   if (opnd->shifter.kind == AARCH64_MOD_ROR
       && opcode->iclass != log_shift)
     {
       set_other_error (mismatch_detail, idx,
          _("'ROR' operator not allowed"));
       return 0;
     }
   num = qualifier == AARCH64_OPND_QLF_W ? 31 : 63;
   if (!value_in_range_p (opnd->shifter.amount, 0, num))
     {
       set_sft_amount_out_of_range_error (mismatch_detail, idx, 0, num);
       return 0;
     }
   break;

 default:
   break;
 }
      break;

    default:
      break;
    }

  return 1;
}
# 2628 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.c"
int
aarch64_match_operands_constraint (aarch64_inst *inst,
       aarch64_operand_error *mismatch_detail)
{
  int i;

  DEBUG_TRACE ("enter");






  i = inst->opcode->tied_operand;
  if (i > 0 && (inst->operands[0].reg.regno != inst->operands[i].reg.regno))
    {
      if (mismatch_detail)
 {
   mismatch_detail->kind = AARCH64_OPDE_UNTIED_OPERAND;
   mismatch_detail->index = i;
   mismatch_detail->error = NULL;
 }
      return 0;
    }
# 2663 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.c"
  if (match_operands_qualifier (inst, TRUE ) == 0)
    {
      DEBUG_TRACE ("FAIL on operand qualifier matching");
      if (mismatch_detail)
 {



   mismatch_detail->kind = AARCH64_OPDE_INVALID_VARIANT;
   mismatch_detail->index = -1;
   mismatch_detail->error = NULL;
 }
      return 0;
    }


  for (i = 0; i < AARCH64_MAX_OPND_NUM; ++i)
    {
      enum aarch64_opnd type = inst->opcode->operands[i];
      if (type == AARCH64_OPND_NIL)
 break;
      if (inst->operands[i].skip)
 {
   DEBUG_TRACE ("skip the incomplete operand %d", i);
   continue;
 }
      if (operand_general_constraint_met_p (inst->operands, i, type,
         inst->opcode, mismatch_detail) == 0)
 {
   DEBUG_TRACE ("FAIL on operand %d", i);
   return 0;
 }
    }

  DEBUG_TRACE ("PASS");

  return 1;
}
# 2711 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.c"
const aarch64_opcode*
aarch64_replace_opcode (aarch64_inst *inst, const aarch64_opcode *opcode)
{
  int i;
  const aarch64_opcode *old = inst->opcode;

  inst->opcode = opcode;


  for (i = 0; i < AARCH64_MAX_OPND_NUM; ++i)
    {
      inst->operands[i].type = opcode->operands[i];
      if (opcode->operands[i] == AARCH64_OPND_NIL)
 break;
    }

  DEBUG_TRACE ("replace %s with %s", old->name, opcode->name);

  return old;
}

int
aarch64_operand_index (const enum aarch64_opnd *operands, enum aarch64_opnd operand)
{
  int i;
  for (i = 0; i < AARCH64_MAX_OPND_NUM; ++i)
    if (operands[i] == operand)
      return i;
    else if (operands[i] == AARCH64_OPND_NIL)
      break;
  return -1;
}


#define BANK(R,FOR31) \
  { R (0), R (1), R (2), R (3), R (4), R (5), R (6), R (7), \
    R (8), R (9), R (10), R (11), R (12), R (13), R (14), R (15), \
    R (16), R (17), R (18), R (19), R (20), R (21), R (22), R (23), \
    R (24), R (25), R (26), R (27), R (28), R (29), R (30), FOR31 }




static const char *int_reg[2][2][32] = {
#define R32(X) "w" #X
#define R64(X) "x" #X
  { BANK (R32, "wsp"), BANK (R64, "sp") },
  { BANK (R32, "wzr"), BANK (R64, "xzr") }
#undef R64
#undef R32
};




static const char *sve_reg[2][32] = {
#define ZS(X) "z" #X ".s"
#define ZD(X) "z" #X ".d"
  BANK (ZS, ZS (31)), BANK (ZD, ZD (31))
#undef ZD
#undef ZS
};
#undef BANK




static inline const char *
get_int_reg_name (int regno, aarch64_opnd_qualifier_t qualifier, int sp_reg_p)
{
  const int has_zr = sp_reg_p ? 0 : 1;
  const int is_64 = aarch64_get_qualifier_esize (qualifier) == 4 ? 0 : 1;
  return int_reg[has_zr][is_64][regno];
}



static inline const char *
get_64bit_int_reg_name (int regno, int sp_reg_p)
{
  const int has_zr = sp_reg_p ? 0 : 1;
  return int_reg[has_zr][1][regno];
}




static inline const char *
get_offset_int_reg_name (const aarch64_opnd_info *opnd)
{
  switch (opnd->shifter.kind)
    {
    case AARCH64_MOD_UXTW:
    case AARCH64_MOD_SXTW:
      return get_int_reg_name (opnd->addr.offset.regno, AARCH64_OPND_QLF_W, 0);

    case AARCH64_MOD_LSL:
    case AARCH64_MOD_SXTX:
      return get_int_reg_name (opnd->addr.offset.regno, AARCH64_OPND_QLF_X, 0);

    default:
      abort ();
    }
}




static inline const char *
get_addr_sve_reg_name (int regno, aarch64_opnd_qualifier_t qualifier)
{
  assert (qualifier == AARCH64_OPND_QLF_S_S
   || qualifier == AARCH64_OPND_QLF_S_D);
  return sve_reg[qualifier == AARCH64_OPND_QLF_S_D][regno];
}



typedef union
{
  uint64_t i;
  double d;
} double_conv_t;

typedef union
{
  uint32_t i;
  float f;
} single_conv_t;

typedef union
{
  uint32_t i;
  float f;
} half_conv_t;
# 2855 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.c"
static uint64_t
expand_fp_imm (int size, uint32_t imm8)
{
  uint64_t imm = 0;
  uint32_t imm8_7, imm8_6_0, imm8_6, imm8_6_repl4;

  imm8_7 = (imm8 >> 7) & 0x01;
  imm8_6_0 = imm8 & 0x7f;
  imm8_6 = imm8_6_0 >> 6;
  imm8_6_repl4 = (imm8_6 << 3) | (imm8_6 << 2)
    | (imm8_6 << 1) | imm8_6;
  if (size == 8)
    {
      imm = (imm8_7 << (63-32))
 | ((imm8_6 ^ 1) << (62-32))
 | (imm8_6_repl4 << (58-32)) | (imm8_6 << (57-32))
 | (imm8_6 << (56-32)) | (imm8_6 << (55-32))
 | (imm8_6_0 << (48-32));
      imm <<= 32;
    }
  else if (size == 4 || size == 2)
    {
      imm = (imm8_7 << 31)
 | ((imm8_6 ^ 1) << 30)
 | (imm8_6_repl4 << 26)
 | (imm8_6_0 << 19);
    }
  else
    {

      assert (0);
    }

  return imm;
}




static void
print_register_list (char *buf, size_t size, const aarch64_opnd_info *opnd,
       const char *prefix)
{
  const int num_regs = opnd->reglist.num_regs;
  const int first_reg = opnd->reglist.first_regno;
  const int last_reg = (first_reg + num_regs - 1) & 0x1f;
  const char *qlf_name = aarch64_get_qualifier_name (opnd->qualifier);
  char tb[8];

  assert (opnd->type != AARCH64_OPND_LEt || opnd->reglist.has_index);
  assert (num_regs >= 1 && num_regs <= 4);


  if (opnd->reglist.has_index)

    snprintf (tb, 8, "[%" PRIi64 "]", (opnd->reglist.index % 100));
  else
    tb[0] = '\0';




  if (num_regs > 2 && last_reg > first_reg)
    snprintf (buf, size, "{%s%d.%s-%s%d.%s}%s", prefix, first_reg, qlf_name,
       prefix, last_reg, qlf_name, tb);
  else
    {
      const int reg0 = first_reg;
      const int reg1 = (first_reg + 1) & 0x1f;
      const int reg2 = (first_reg + 2) & 0x1f;
      const int reg3 = (first_reg + 3) & 0x1f;

      switch (num_regs)
 {
 case 1:
   snprintf (buf, size, "{%s%d.%s}%s", prefix, reg0, qlf_name, tb);
   break;
 case 2:
   snprintf (buf, size, "{%s%d.%s, %s%d.%s}%s", prefix, reg0, qlf_name,
      prefix, reg1, qlf_name, tb);
   break;
 case 3:
   snprintf (buf, size, "{%s%d.%s, %s%d.%s, %s%d.%s}%s",
      prefix, reg0, qlf_name, prefix, reg1, qlf_name,
      prefix, reg2, qlf_name, tb);
   break;
 case 4:
   snprintf (buf, size, "{%s%d.%s, %s%d.%s, %s%d.%s, %s%d.%s}%s",
      prefix, reg0, qlf_name, prefix, reg1, qlf_name,
      prefix, reg2, qlf_name, prefix, reg3, qlf_name, tb);
   break;
 }
    }
}




static void
print_immediate_offset_address (char *buf, size_t size,
    const aarch64_opnd_info *opnd,
    const char *base)
{
  if (opnd->addr.writeback)
    {
      if (opnd->addr.preind)
 snprintf (buf, size, "[%s, #%d]!", base, opnd->addr.offset.imm);
      else
 snprintf (buf, size, "[%s], #%d", base, opnd->addr.offset.imm);
    }
  else
    {
      if (opnd->shifter.operator_present)
 {
   assert (opnd->shifter.kind == AARCH64_MOD_MUL_VL);
   snprintf (buf, size, "[%s, #%d, mul vl]",
      base, opnd->addr.offset.imm);
 }
      else if (opnd->addr.offset.imm)
 snprintf (buf, size, "[%s, #%d]", base, opnd->addr.offset.imm);
      else
 snprintf (buf, size, "[%s]", base);
    }
}




static void
print_register_offset_address (char *buf, size_t size,
          const aarch64_opnd_info *opnd,
          const char *base, const char *offset)
{
  char tb[16];
  bfd_boolean print_extend_p = TRUE;
  bfd_boolean print_amount_p = TRUE;
  const char *shift_name = aarch64_operand_modifiers[opnd->shifter.kind].name;

  if (!opnd->shifter.amount && (opnd->qualifier != AARCH64_OPND_QLF_S_B
    || !opnd->shifter.amount_present))
    {


      print_amount_p = FALSE;


      if (opnd->shifter.kind == AARCH64_MOD_LSL)
 print_extend_p = FALSE;
    }


  if (print_extend_p)
    {
      if (print_amount_p)
 snprintf (tb, sizeof (tb), ", %s #%" PRIi64, shift_name,

    (opnd->shifter.amount % 100));
      else
 snprintf (tb, sizeof (tb), ", %s", shift_name);
    }
  else
    tb[0] = '\0';

  snprintf (buf, size, "[%s, %s%s]", base, offset, tb);
}
# 3032 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.c"
void
aarch64_print_operand (char *buf, size_t size, bfd_vma pc,
         const aarch64_opcode *opcode,
         const aarch64_opnd_info *opnds, int idx, int *pcrel_p,
         bfd_vma *address, char** notes ATTRIBUTE_UNUSED)
{
  unsigned int i, num_conds;
  const char *name = NULL;
  const aarch64_opnd_info *opnd = opnds + idx;
  enum aarch64_modifier_kind kind;
  uint64_t addr, enum_value;

  buf[0] = '\0';
  if (pcrel_p)
    *pcrel_p = 0;

  switch (opnd->type)
    {
    case AARCH64_OPND_Rd:
    case AARCH64_OPND_Rn:
    case AARCH64_OPND_Rm:
    case AARCH64_OPND_Rt:
    case AARCH64_OPND_Rt2:
    case AARCH64_OPND_Rs:
    case AARCH64_OPND_Ra:
    case AARCH64_OPND_Rt_SYS:
    case AARCH64_OPND_PAIRREG:
    case AARCH64_OPND_SVE_Rm:



      if (opnd->type == AARCH64_OPND_Rt_SYS)
 {
   if (!opnd->present)
     break;
 }

      else if (optional_operand_p (opcode, idx)
        && (opnd->reg.regno
     == get_optional_operand_default_value (opcode)))
 break;
      assert (opnd->qualifier == AARCH64_OPND_QLF_W
       || opnd->qualifier == AARCH64_OPND_QLF_X);
      snprintf (buf, size, "%s",
  get_int_reg_name (opnd->reg.regno, opnd->qualifier, 0));
      break;

    case AARCH64_OPND_Rd_SP:
    case AARCH64_OPND_Rn_SP:
    case AARCH64_OPND_SVE_Rn_SP:
    case AARCH64_OPND_Rm_SP:
      assert (opnd->qualifier == AARCH64_OPND_QLF_W
       || opnd->qualifier == AARCH64_OPND_QLF_WSP
       || opnd->qualifier == AARCH64_OPND_QLF_X
       || opnd->qualifier == AARCH64_OPND_QLF_SP);
      snprintf (buf, size, "%s",
  get_int_reg_name (opnd->reg.regno, opnd->qualifier, 1));
      break;

    case AARCH64_OPND_Rm_EXT:
      kind = opnd->shifter.kind;
      assert (idx == 1 || idx == 2);
      if ((aarch64_stack_pointer_p (opnds)
    || (idx == 2 && aarch64_stack_pointer_p (opnds + 1)))
   && ((opnd->qualifier == AARCH64_OPND_QLF_W
        && opnds[0].qualifier == AARCH64_OPND_QLF_W
        && kind == AARCH64_MOD_UXTW)
       || (opnd->qualifier == AARCH64_OPND_QLF_X
    && kind == AARCH64_MOD_UXTX)))
 {

   kind = AARCH64_MOD_LSL;
   if (opnd->shifter.amount == 0)
     {

       snprintf (buf, size, "%s",
   get_int_reg_name (opnd->reg.regno, opnd->qualifier, 0));
       break;
     }
 }
      if (opnd->shifter.amount)
 snprintf (buf, size, "%s, %s #%" PRIi64,
    get_int_reg_name (opnd->reg.regno, opnd->qualifier, 0),
    aarch64_operand_modifiers[kind].name,
    opnd->shifter.amount);
      else
 snprintf (buf, size, "%s, %s",
    get_int_reg_name (opnd->reg.regno, opnd->qualifier, 0),
    aarch64_operand_modifiers[kind].name);
      break;

    case AARCH64_OPND_Rm_SFT:
      assert (opnd->qualifier == AARCH64_OPND_QLF_W
       || opnd->qualifier == AARCH64_OPND_QLF_X);
      if (opnd->shifter.amount == 0 && opnd->shifter.kind == AARCH64_MOD_LSL)
 snprintf (buf, size, "%s",
    get_int_reg_name (opnd->reg.regno, opnd->qualifier, 0));
      else
 snprintf (buf, size, "%s, %s #%" PRIi64,
    get_int_reg_name (opnd->reg.regno, opnd->qualifier, 0),
    aarch64_operand_modifiers[opnd->shifter.kind].name,
    opnd->shifter.amount);
      break;

    case AARCH64_OPND_Fd:
    case AARCH64_OPND_Fn:
    case AARCH64_OPND_Fm:
    case AARCH64_OPND_Fa:
    case AARCH64_OPND_Ft:
    case AARCH64_OPND_Ft2:
    case AARCH64_OPND_Sd:
    case AARCH64_OPND_Sn:
    case AARCH64_OPND_Sm:
    case AARCH64_OPND_SVE_VZn:
    case AARCH64_OPND_SVE_Vd:
    case AARCH64_OPND_SVE_Vm:
    case AARCH64_OPND_SVE_Vn:
      snprintf (buf, size, "%s%d", aarch64_get_qualifier_name (opnd->qualifier),
  opnd->reg.regno);
      break;

    case AARCH64_OPND_Va:
    case AARCH64_OPND_Vd:
    case AARCH64_OPND_Vn:
    case AARCH64_OPND_Vm:
      snprintf (buf, size, "v%d.%s", opnd->reg.regno,
  aarch64_get_qualifier_name (opnd->qualifier));
      break;

    case AARCH64_OPND_Ed:
    case AARCH64_OPND_En:
    case AARCH64_OPND_Em:
    case AARCH64_OPND_Em16:
    case AARCH64_OPND_SM3_IMM2:
      snprintf (buf, size, "v%d.%s[%" PRIi64 "]", opnd->reglane.regno,
  aarch64_get_qualifier_name (opnd->qualifier),
  opnd->reglane.index);
      break;

    case AARCH64_OPND_VdD1:
    case AARCH64_OPND_VnD1:
      snprintf (buf, size, "v%d.d[1]", opnd->reg.regno);
      break;

    case AARCH64_OPND_LVn:
    case AARCH64_OPND_LVt:
    case AARCH64_OPND_LVt_AL:
    case AARCH64_OPND_LEt:
      print_register_list (buf, size, opnd, "v");
      break;

    case AARCH64_OPND_SVE_Pd:
    case AARCH64_OPND_SVE_Pg3:
    case AARCH64_OPND_SVE_Pg4_5:
    case AARCH64_OPND_SVE_Pg4_10:
    case AARCH64_OPND_SVE_Pg4_16:
    case AARCH64_OPND_SVE_Pm:
    case AARCH64_OPND_SVE_Pn:
    case AARCH64_OPND_SVE_Pt:
      if (opnd->qualifier == AARCH64_OPND_QLF_NIL)
 snprintf (buf, size, "p%d", opnd->reg.regno);
      else if (opnd->qualifier == AARCH64_OPND_QLF_P_Z
        || opnd->qualifier == AARCH64_OPND_QLF_P_M)
 snprintf (buf, size, "p%d/%s", opnd->reg.regno,
    aarch64_get_qualifier_name (opnd->qualifier));
      else
 snprintf (buf, size, "p%d.%s", opnd->reg.regno,
    aarch64_get_qualifier_name (opnd->qualifier));
      break;

    case AARCH64_OPND_SVE_Za_5:
    case AARCH64_OPND_SVE_Za_16:
    case AARCH64_OPND_SVE_Zd:
    case AARCH64_OPND_SVE_Zm_5:
    case AARCH64_OPND_SVE_Zm_16:
    case AARCH64_OPND_SVE_Zn:
    case AARCH64_OPND_SVE_Zt:
      if (opnd->qualifier == AARCH64_OPND_QLF_NIL)
 snprintf (buf, size, "z%d", opnd->reg.regno);
      else
 snprintf (buf, size, "z%d.%s", opnd->reg.regno,
    aarch64_get_qualifier_name (opnd->qualifier));
      break;

    case AARCH64_OPND_SVE_ZnxN:
    case AARCH64_OPND_SVE_ZtxN:
      print_register_list (buf, size, opnd, "z");
      break;

    case AARCH64_OPND_SVE_Zm3_INDEX:
    case AARCH64_OPND_SVE_Zm3_22_INDEX:
    case AARCH64_OPND_SVE_Zm4_INDEX:
    case AARCH64_OPND_SVE_Zn_INDEX:
      snprintf (buf, size, "z%d.%s[%" PRIi64 "]", opnd->reglane.regno,
  aarch64_get_qualifier_name (opnd->qualifier),
  opnd->reglane.index);
      break;

    case AARCH64_OPND_CRn:
    case AARCH64_OPND_CRm:
      snprintf (buf, size, "C%" PRIi64, opnd->imm.value);
      break;

    case AARCH64_OPND_IDX:
    case AARCH64_OPND_MASK:
    case AARCH64_OPND_IMM:
    case AARCH64_OPND_IMM_2:
    case AARCH64_OPND_WIDTH:
    case AARCH64_OPND_UIMM3_OP1:
    case AARCH64_OPND_UIMM3_OP2:
    case AARCH64_OPND_BIT_NUM:
    case AARCH64_OPND_IMM_VLSL:
    case AARCH64_OPND_IMM_VLSR:
    case AARCH64_OPND_SHLL_IMM:
    case AARCH64_OPND_IMM0:
    case AARCH64_OPND_IMMR:
    case AARCH64_OPND_IMMS:
    case AARCH64_OPND_FBITS:
    case AARCH64_OPND_SIMM5:
    case AARCH64_OPND_SVE_SHLIMM_PRED:
    case AARCH64_OPND_SVE_SHLIMM_UNPRED:
    case AARCH64_OPND_SVE_SHRIMM_PRED:
    case AARCH64_OPND_SVE_SHRIMM_UNPRED:
    case AARCH64_OPND_SVE_SIMM5:
    case AARCH64_OPND_SVE_SIMM5B:
    case AARCH64_OPND_SVE_SIMM6:
    case AARCH64_OPND_SVE_SIMM8:
    case AARCH64_OPND_SVE_UIMM3:
    case AARCH64_OPND_SVE_UIMM7:
    case AARCH64_OPND_SVE_UIMM8:
    case AARCH64_OPND_SVE_UIMM8_53:
    case AARCH64_OPND_IMM_ROT1:
    case AARCH64_OPND_IMM_ROT2:
    case AARCH64_OPND_IMM_ROT3:
    case AARCH64_OPND_SVE_IMM_ROT1:
    case AARCH64_OPND_SVE_IMM_ROT2:
      snprintf (buf, size, "#%" PRIi64, opnd->imm.value);
      break;

    case AARCH64_OPND_SVE_I1_HALF_ONE:
    case AARCH64_OPND_SVE_I1_HALF_TWO:
    case AARCH64_OPND_SVE_I1_ZERO_ONE:
      {
 single_conv_t c;
 c.i = opnd->imm.value;
 snprintf (buf, size, "#%.1f", c.f);
 break;
      }

    case AARCH64_OPND_SVE_PATTERN:
      if (optional_operand_p (opcode, idx)
   && opnd->imm.value == get_optional_operand_default_value (opcode))
 break;
      enum_value = opnd->imm.value;
      assert (enum_value < ARRAY_SIZE (aarch64_sve_pattern_array));
      if (aarch64_sve_pattern_array[enum_value])
 snprintf (buf, size, "%s", aarch64_sve_pattern_array[enum_value]);
      else
 snprintf (buf, size, "#%" PRIi64, opnd->imm.value);
      break;

    case AARCH64_OPND_SVE_PATTERN_SCALED:
      if (optional_operand_p (opcode, idx)
   && !opnd->shifter.operator_present
   && opnd->imm.value == get_optional_operand_default_value (opcode))
 break;
      enum_value = opnd->imm.value;
      assert (enum_value < ARRAY_SIZE (aarch64_sve_pattern_array));
      if (aarch64_sve_pattern_array[opnd->imm.value])
 snprintf (buf, size, "%s", aarch64_sve_pattern_array[opnd->imm.value]);
      else
 snprintf (buf, size, "#%" PRIi64, opnd->imm.value);
      if (opnd->shifter.operator_present)
 {
   size_t len = strlen (buf);
   snprintf (buf + len, size - len, ", %s #%" PRIi64,
      aarch64_operand_modifiers[opnd->shifter.kind].name,
      opnd->shifter.amount);
 }
      break;

    case AARCH64_OPND_SVE_PRFOP:
      enum_value = opnd->imm.value;
      assert (enum_value < ARRAY_SIZE (aarch64_sve_prfop_array));
      if (aarch64_sve_prfop_array[enum_value])
 snprintf (buf, size, "%s", aarch64_sve_prfop_array[enum_value]);
      else
 snprintf (buf, size, "#%" PRIi64, opnd->imm.value);
      break;

    case AARCH64_OPND_IMM_MOV:
      switch (aarch64_get_qualifier_esize (opnds[0].qualifier))
 {
 case 4:
     {
       int imm32 = opnd->imm.value;
       snprintf (buf, size, "0x%x", imm32);
     }
   break;
 case 8:
   snprintf (buf, size, "0x%" PRIx64, opnd->imm.value);
   break;
 default: assert (0);
 }
      break;

    case AARCH64_OPND_FPIMM0:
      snprintf (buf, size, "0.0");
      break;

    case AARCH64_OPND_LIMM:
    case AARCH64_OPND_AIMM:
    case AARCH64_OPND_HALF:
    case AARCH64_OPND_SVE_INV_LIMM:
    case AARCH64_OPND_SVE_LIMM:
    case AARCH64_OPND_SVE_LIMM_MOV:
      if (opnd->shifter.amount)
 snprintf (buf, size, "0x%" PRIx64 ", lsl #%" PRIi64, opnd->imm.value,
    opnd->shifter.amount);
      else
 snprintf (buf, size, "0x%" PRIx64, opnd->imm.value);
      break;

    case AARCH64_OPND_SIMD_IMM:
    case AARCH64_OPND_SIMD_IMM_SFT:
      if ((! opnd->shifter.amount && opnd->shifter.kind == AARCH64_MOD_LSL)
   || opnd->shifter.kind == AARCH64_MOD_NONE)
 snprintf (buf, size, "0x%" PRIx64, opnd->imm.value);
      else
 snprintf (buf, size, "0x%" PRIx64 ", %s #%" PRIi64, opnd->imm.value,
    aarch64_operand_modifiers[opnd->shifter.kind].name,
    opnd->shifter.amount);
      break;

    case AARCH64_OPND_SVE_AIMM:
    case AARCH64_OPND_SVE_ASIMM:
      if (opnd->shifter.amount)
 snprintf (buf, size, "#%" PRIi64 ", lsl #%" PRIi64, opnd->imm.value,
    opnd->shifter.amount);
      else
 snprintf (buf, size, "#%" PRIi64, opnd->imm.value);
      break;

    case AARCH64_OPND_FPIMM:
    case AARCH64_OPND_SIMD_FPIMM:
    case AARCH64_OPND_SVE_FPIMM8:
      switch (aarch64_get_qualifier_esize (opnds[0].qualifier))
 {
 case 2:
     {
       half_conv_t c;
       c.i = expand_fp_imm (2, opnd->imm.value);
       snprintf (buf, size, "#%.18e", c.f);
     }
   break;
 case 4:
     {
       single_conv_t c;
       c.i = expand_fp_imm (4, opnd->imm.value);
       snprintf (buf, size, "#%.18e", c.f);
     }
   break;
 case 8:
     {
       double_conv_t c;
       c.i = expand_fp_imm (8, opnd->imm.value);
       snprintf (buf, size, "#%.18e", c.d);
     }
   break;
 default: assert (0);
 }
      break;

    case AARCH64_OPND_CCMP_IMM:
    case AARCH64_OPND_NZCV:
    case AARCH64_OPND_EXCEPTION:
    case AARCH64_OPND_UIMM4:
    case AARCH64_OPND_UIMM7:
      if (optional_operand_p (opcode, idx) == TRUE
   && (opnd->imm.value ==
       (int64_t) get_optional_operand_default_value (opcode)))

 break;
      snprintf (buf, size, "0x%x", (unsigned int)opnd->imm.value);
      break;

    case AARCH64_OPND_COND:
    case AARCH64_OPND_COND1:
      snprintf (buf, size, "%s", opnd->cond->names[0]);
      num_conds = ARRAY_SIZE (opnd->cond->names);
      for (i = 1; i < num_conds && opnd->cond->names[i]; ++i)
 {
   size_t len = strlen (buf);
   if (i == 1)
     snprintf (buf + len, size - len, "  // %s = %s",
        opnd->cond->names[0], opnd->cond->names[i]);
   else
     snprintf (buf + len, size - len, ", %s",
        opnd->cond->names[i]);
 }
      break;

    case AARCH64_OPND_ADDR_ADRP:
      addr = ((pc + AARCH64_PCREL_OFFSET) & ~(uint64_t)0xfff)
 + opnd->imm.value;
      if (pcrel_p)
 *pcrel_p = 1;
      if (address)
 *address = addr;




      snprintf (buf, size, "0x%" PRIx64, addr);
      break;

    case AARCH64_OPND_ADDR_PCREL14:
    case AARCH64_OPND_ADDR_PCREL19:
    case AARCH64_OPND_ADDR_PCREL21:
    case AARCH64_OPND_ADDR_PCREL26:
      addr = pc + AARCH64_PCREL_OFFSET + opnd->imm.value;
      if (pcrel_p)
 *pcrel_p = 1;
      if (address)
 *address = addr;




      snprintf (buf, size, "0x%" PRIx64, addr);
      break;

    case AARCH64_OPND_ADDR_SIMPLE:
    case AARCH64_OPND_SIMD_ADDR_SIMPLE:
    case AARCH64_OPND_SIMD_ADDR_POST:
      name = get_64bit_int_reg_name (opnd->addr.base_regno, 1);
      if (opnd->type == AARCH64_OPND_SIMD_ADDR_POST)
 {
   if (opnd->addr.offset.is_reg)
     snprintf (buf, size, "[%s], x%d", name, opnd->addr.offset.regno);
   else
     snprintf (buf, size, "[%s], #%d", name, opnd->addr.offset.imm);
 }
      else
 snprintf (buf, size, "[%s]", name);
      break;

    case AARCH64_OPND_ADDR_REGOFF:
    case AARCH64_OPND_SVE_ADDR_R:
    case AARCH64_OPND_SVE_ADDR_RR:
    case AARCH64_OPND_SVE_ADDR_RR_LSL1:
    case AARCH64_OPND_SVE_ADDR_RR_LSL2:
    case AARCH64_OPND_SVE_ADDR_RR_LSL3:
    case AARCH64_OPND_SVE_ADDR_RX:
    case AARCH64_OPND_SVE_ADDR_RX_LSL1:
    case AARCH64_OPND_SVE_ADDR_RX_LSL2:
    case AARCH64_OPND_SVE_ADDR_RX_LSL3:
      print_register_offset_address
 (buf, size, opnd, get_64bit_int_reg_name (opnd->addr.base_regno, 1),
  get_offset_int_reg_name (opnd));
      break;

    case AARCH64_OPND_SVE_ADDR_RZ:
    case AARCH64_OPND_SVE_ADDR_RZ_LSL1:
    case AARCH64_OPND_SVE_ADDR_RZ_LSL2:
    case AARCH64_OPND_SVE_ADDR_RZ_LSL3:
    case AARCH64_OPND_SVE_ADDR_RZ_XTW_14:
    case AARCH64_OPND_SVE_ADDR_RZ_XTW_22:
    case AARCH64_OPND_SVE_ADDR_RZ_XTW1_14:
    case AARCH64_OPND_SVE_ADDR_RZ_XTW1_22:
    case AARCH64_OPND_SVE_ADDR_RZ_XTW2_14:
    case AARCH64_OPND_SVE_ADDR_RZ_XTW2_22:
    case AARCH64_OPND_SVE_ADDR_RZ_XTW3_14:
    case AARCH64_OPND_SVE_ADDR_RZ_XTW3_22:
      print_register_offset_address
 (buf, size, opnd, get_64bit_int_reg_name (opnd->addr.base_regno, 1),
  get_addr_sve_reg_name (opnd->addr.offset.regno, opnd->qualifier));
      break;

    case AARCH64_OPND_ADDR_SIMM7:
    case AARCH64_OPND_ADDR_SIMM9:
    case AARCH64_OPND_ADDR_SIMM9_2:
    case AARCH64_OPND_ADDR_SIMM10:
    case AARCH64_OPND_ADDR_OFFSET:
    case AARCH64_OPND_SVE_ADDR_RI_S4x16:
    case AARCH64_OPND_SVE_ADDR_RI_S4xVL:
    case AARCH64_OPND_SVE_ADDR_RI_S4x2xVL:
    case AARCH64_OPND_SVE_ADDR_RI_S4x3xVL:
    case AARCH64_OPND_SVE_ADDR_RI_S4x4xVL:
    case AARCH64_OPND_SVE_ADDR_RI_S6xVL:
    case AARCH64_OPND_SVE_ADDR_RI_S9xVL:
    case AARCH64_OPND_SVE_ADDR_RI_U6:
    case AARCH64_OPND_SVE_ADDR_RI_U6x2:
    case AARCH64_OPND_SVE_ADDR_RI_U6x4:
    case AARCH64_OPND_SVE_ADDR_RI_U6x8:
      print_immediate_offset_address
 (buf, size, opnd, get_64bit_int_reg_name (opnd->addr.base_regno, 1));
      break;

    case AARCH64_OPND_SVE_ADDR_ZI_U5:
    case AARCH64_OPND_SVE_ADDR_ZI_U5x2:
    case AARCH64_OPND_SVE_ADDR_ZI_U5x4:
    case AARCH64_OPND_SVE_ADDR_ZI_U5x8:
      print_immediate_offset_address
 (buf, size, opnd,
  get_addr_sve_reg_name (opnd->addr.base_regno, opnd->qualifier));
      break;

    case AARCH64_OPND_SVE_ADDR_ZZ_LSL:
    case AARCH64_OPND_SVE_ADDR_ZZ_SXTW:
    case AARCH64_OPND_SVE_ADDR_ZZ_UXTW:
      print_register_offset_address
 (buf, size, opnd,
  get_addr_sve_reg_name (opnd->addr.base_regno, opnd->qualifier),
  get_addr_sve_reg_name (opnd->addr.offset.regno, opnd->qualifier));
      break;

    case AARCH64_OPND_ADDR_UIMM12:
      name = get_64bit_int_reg_name (opnd->addr.base_regno, 1);
      if (opnd->addr.offset.imm)
 snprintf (buf, size, "[%s, #%d]", name, opnd->addr.offset.imm);
      else
 snprintf (buf, size, "[%s]", name);
      break;

    case AARCH64_OPND_SYSREG:
      for (i = 0; aarch64_sys_regs[i].name; ++i)
 {
   bfd_boolean exact_match
     = (aarch64_sys_regs[i].flags & opnd->sysreg.flags)
        == opnd->sysreg.flags;



   if (aarch64_sys_regs[i].value == opnd->sysreg.value
       && ! aarch64_sys_reg_deprecated_p (&aarch64_sys_regs[i])
       && (name == NULL || exact_match))
     {
       name = aarch64_sys_regs[i].name;
       if (exact_match)
  {
    if (notes)
      *notes = NULL;
    break;
  }





       if (aarch64_sys_regs[i].flags & F_REG_WRITE)
  *notes = _("reading from a write-only register.");
       else if (aarch64_sys_regs[i].flags & F_REG_READ)
  *notes = _("writing to a read-only register.");
     }
 }

      if (name)
 snprintf (buf, size, "%s", name);
      else
 {

   unsigned int value = opnd->sysreg.value;
   snprintf (buf, size, "s%u_%u_c%u_c%u_%u", (value >> 14) & 0x3,
      (value >> 11) & 0x7, (value >> 7) & 0xf, (value >> 3) & 0xf,
      value & 0x7);
 }
      break;

    case AARCH64_OPND_PSTATEFIELD:
      for (i = 0; aarch64_pstatefields[i].name; ++i)
 if (aarch64_pstatefields[i].value == opnd->pstatefield)
   break;
      assert (aarch64_pstatefields[i].name);
      snprintf (buf, size, "%s", aarch64_pstatefields[i].name);
      break;

    case AARCH64_OPND_SYSREG_AT:
    case AARCH64_OPND_SYSREG_DC:
    case AARCH64_OPND_SYSREG_IC:
    case AARCH64_OPND_SYSREG_TLBI:
      snprintf (buf, size, "%s", opnd->sysins_op->name);
      break;

    case AARCH64_OPND_BARRIER:
      snprintf (buf, size, "%s", opnd->barrier->name);
      break;

    case AARCH64_OPND_BARRIER_ISB:

      if (! optional_operand_p (opcode, idx)
   || (opnd->barrier->value
       != get_optional_operand_default_value (opcode)))
 snprintf (buf, size, "0x%x", opnd->barrier->value);
      break;

    case AARCH64_OPND_PRFOP:
      if (opnd->prfop->name != NULL)
 snprintf (buf, size, "%s", opnd->prfop->name);
      else
 snprintf (buf, size, "0x%02x", opnd->prfop->value);
      break;

    case AARCH64_OPND_BARRIER_PSB:
      snprintf (buf, size, "%s", opnd->hint_option->name);
      break;

    default:
      assert (0);
    }
}

#define CPENC(op0,op1,crn,crm,op2) \
  ((((op0) << 19) | ((op1) << 16) | ((crn) << 12) | ((crm) << 8) | ((op2) << 5)) >> 5)

#define CPEN_(op1,crm,op2) CPENC(3,(op1),4,(crm),(op2))

#define CPENS(op1,crn,crm,op2) CPENC(1,(op1),(crn),(crm),(op2))

#define C0 0
#define C1 1
#define C2 2
#define C3 3
#define C4 4
#define C5 5
#define C6 6
#define C7 7
#define C8 8
#define C9 9
#define C10 10
#define C11 11
#define C12 12
#define C13 13
#define C14 14
#define C15 15



const aarch64_sys_reg aarch64_sys_regs [] =
{
  { "spsr_el1", CPEN_(0,C0,0), 0 },
  { "spsr_el12", CPEN_ (5, C0, 0), F_ARCHEXT },
  { "elr_el1", CPEN_(0,C0,1), 0 },
  { "elr_el12", CPEN_ (5, C0, 1), F_ARCHEXT },
  { "sp_el0", CPEN_(0,C1,0), 0 },
  { "spsel", CPEN_(0,C2,0), 0 },
  { "daif", CPEN_(3,C2,1), 0 },
  { "currentel", CPEN_(0,C2,2), F_REG_READ },
  { "pan", CPEN_(0,C2,3), F_ARCHEXT },
  { "uao", CPEN_ (0, C2, 4), F_ARCHEXT },
  { "nzcv", CPEN_(3,C2,0), 0 },
  { "fpcr", CPEN_(3,C4,0), 0 },
  { "fpsr", CPEN_(3,C4,1), 0 },
  { "dspsr_el0", CPEN_(3,C5,0), 0 },
  { "dlr_el0", CPEN_(3,C5,1), 0 },
  { "spsr_el2", CPEN_(4,C0,0), 0 },
  { "elr_el2", CPEN_(4,C0,1), 0 },
  { "sp_el1", CPEN_(4,C1,0), 0 },
  { "spsr_irq", CPEN_(4,C3,0), 0 },
  { "spsr_abt", CPEN_(4,C3,1), 0 },
  { "spsr_und", CPEN_(4,C3,2), 0 },
  { "spsr_fiq", CPEN_(4,C3,3), 0 },
  { "spsr_el3", CPEN_(6,C0,0), 0 },
  { "elr_el3", CPEN_(6,C0,1), 0 },
  { "sp_el2", CPEN_(6,C1,0), 0 },
  { "spsr_svc", CPEN_(0,C0,0), F_DEPRECATED },
  { "spsr_hyp", CPEN_(4,C0,0), F_DEPRECATED },
  { "midr_el1", CPENC(3,0,C0,C0,0), F_REG_READ },
  { "ctr_el0", CPENC(3,3,C0,C0,1), F_REG_READ },
  { "mpidr_el1", CPENC(3,0,C0,C0,5), F_REG_READ },
  { "revidr_el1", CPENC(3,0,C0,C0,6), F_REG_READ },
  { "aidr_el1", CPENC(3,1,C0,C0,7), F_REG_READ },
  { "dczid_el0", CPENC(3,3,C0,C0,7), F_REG_READ },
  { "id_dfr0_el1", CPENC(3,0,C0,C1,2), F_REG_READ },
  { "id_pfr0_el1", CPENC(3,0,C0,C1,0), F_REG_READ },
  { "id_pfr1_el1", CPENC(3,0,C0,C1,1), F_REG_READ },
  { "id_afr0_el1", CPENC(3,0,C0,C1,3), F_REG_READ },
  { "id_mmfr0_el1", CPENC(3,0,C0,C1,4), F_REG_READ },
  { "id_mmfr1_el1", CPENC(3,0,C0,C1,5), F_REG_READ },
  { "id_mmfr2_el1", CPENC(3,0,C0,C1,6), F_REG_READ },
  { "id_mmfr3_el1", CPENC(3,0,C0,C1,7), F_REG_READ },
  { "id_mmfr4_el1", CPENC(3,0,C0,C2,6), F_REG_READ },
  { "id_isar0_el1", CPENC(3,0,C0,C2,0), F_REG_READ },
  { "id_isar1_el1", CPENC(3,0,C0,C2,1), F_REG_READ },
  { "id_isar2_el1", CPENC(3,0,C0,C2,2), F_REG_READ },
  { "id_isar3_el1", CPENC(3,0,C0,C2,3), F_REG_READ },
  { "id_isar4_el1", CPENC(3,0,C0,C2,4), F_REG_READ },
  { "id_isar5_el1", CPENC(3,0,C0,C2,5), F_REG_READ },
  { "mvfr0_el1", CPENC(3,0,C0,C3,0), F_REG_READ },
  { "mvfr1_el1", CPENC(3,0,C0,C3,1), F_REG_READ },
  { "mvfr2_el1", CPENC(3,0,C0,C3,2), F_REG_READ },
  { "ccsidr_el1", CPENC(3,1,C0,C0,0), F_REG_READ },
  { "id_aa64pfr0_el1", CPENC(3,0,C0,C4,0), F_REG_READ },
  { "id_aa64pfr1_el1", CPENC(3,0,C0,C4,1), F_REG_READ },
  { "id_aa64dfr0_el1", CPENC(3,0,C0,C5,0), F_REG_READ },
  { "id_aa64dfr1_el1", CPENC(3,0,C0,C5,1), F_REG_READ },
  { "id_aa64isar0_el1", CPENC(3,0,C0,C6,0), F_REG_READ },
  { "id_aa64isar1_el1", CPENC(3,0,C0,C6,1), F_REG_READ },
  { "id_aa64mmfr0_el1", CPENC(3,0,C0,C7,0), F_REG_READ },
  { "id_aa64mmfr1_el1", CPENC(3,0,C0,C7,1), F_REG_READ },
  { "id_aa64mmfr2_el1", CPENC (3, 0, C0, C7, 2), F_ARCHEXT | F_REG_READ },
  { "id_aa64afr0_el1", CPENC(3,0,C0,C5,4), F_REG_READ },
  { "id_aa64afr1_el1", CPENC(3,0,C0,C5,5), F_REG_READ },
  { "id_aa64zfr0_el1", CPENC (3, 0, C0, C4, 4), F_ARCHEXT | F_REG_READ },
  { "clidr_el1", CPENC(3,1,C0,C0,1), F_REG_READ },
  { "csselr_el1", CPENC(3,2,C0,C0,0), 0 },
  { "vpidr_el2", CPENC(3,4,C0,C0,0), 0 },
  { "vmpidr_el2", CPENC(3,4,C0,C0,5), 0 },
  { "sctlr_el1", CPENC(3,0,C1,C0,0), 0 },
  { "sctlr_el2", CPENC(3,4,C1,C0,0), 0 },
  { "sctlr_el3", CPENC(3,6,C1,C0,0), 0 },
  { "sctlr_el12", CPENC (3, 5, C1, C0, 0), F_ARCHEXT },
  { "actlr_el1", CPENC(3,0,C1,C0,1), 0 },
  { "actlr_el2", CPENC(3,4,C1,C0,1), 0 },
  { "actlr_el3", CPENC(3,6,C1,C0,1), 0 },
  { "cpacr_el1", CPENC(3,0,C1,C0,2), 0 },
  { "cpacr_el12", CPENC (3, 5, C1, C0, 2), F_ARCHEXT },
  { "cptr_el2", CPENC(3,4,C1,C1,2), 0 },
  { "cptr_el3", CPENC(3,6,C1,C1,2), 0 },
  { "scr_el3", CPENC(3,6,C1,C1,0), 0 },
  { "hcr_el2", CPENC(3,4,C1,C1,0), 0 },
  { "mdcr_el2", CPENC(3,4,C1,C1,1), 0 },
  { "mdcr_el3", CPENC(3,6,C1,C3,1), 0 },
  { "hstr_el2", CPENC(3,4,C1,C1,3), 0 },
  { "hacr_el2", CPENC(3,4,C1,C1,7), 0 },
  { "zcr_el1", CPENC (3, 0, C1, C2, 0), F_ARCHEXT },
  { "zcr_el12", CPENC (3, 5, C1, C2, 0), F_ARCHEXT },
  { "zcr_el2", CPENC (3, 4, C1, C2, 0), F_ARCHEXT },
  { "zcr_el3", CPENC (3, 6, C1, C2, 0), F_ARCHEXT },
  { "zidr_el1", CPENC (3, 0, C0, C0, 7), F_ARCHEXT },
  { "ttbr0_el1", CPENC(3,0,C2,C0,0), 0 },
  { "ttbr1_el1", CPENC(3,0,C2,C0,1), 0 },
  { "ttbr0_el2", CPENC(3,4,C2,C0,0), 0 },
  { "ttbr1_el2", CPENC (3, 4, C2, C0, 1), F_ARCHEXT },
  { "ttbr0_el3", CPENC(3,6,C2,C0,0), 0 },
  { "ttbr0_el12", CPENC (3, 5, C2, C0, 0), F_ARCHEXT },
  { "ttbr1_el12", CPENC (3, 5, C2, C0, 1), F_ARCHEXT },
  { "vttbr_el2", CPENC(3,4,C2,C1,0), 0 },
  { "tcr_el1", CPENC(3,0,C2,C0,2), 0 },
  { "tcr_el2", CPENC(3,4,C2,C0,2), 0 },
  { "tcr_el3", CPENC(3,6,C2,C0,2), 0 },
  { "tcr_el12", CPENC (3, 5, C2, C0, 2), F_ARCHEXT },
  { "vtcr_el2", CPENC(3,4,C2,C1,2), 0 },
  { "apiakeylo_el1", CPENC (3, 0, C2, C1, 0), F_ARCHEXT },
  { "apiakeyhi_el1", CPENC (3, 0, C2, C1, 1), F_ARCHEXT },
  { "apibkeylo_el1", CPENC (3, 0, C2, C1, 2), F_ARCHEXT },
  { "apibkeyhi_el1", CPENC (3, 0, C2, C1, 3), F_ARCHEXT },
  { "apdakeylo_el1", CPENC (3, 0, C2, C2, 0), F_ARCHEXT },
  { "apdakeyhi_el1", CPENC (3, 0, C2, C2, 1), F_ARCHEXT },
  { "apdbkeylo_el1", CPENC (3, 0, C2, C2, 2), F_ARCHEXT },
  { "apdbkeyhi_el1", CPENC (3, 0, C2, C2, 3), F_ARCHEXT },
  { "apgakeylo_el1", CPENC (3, 0, C2, C3, 0), F_ARCHEXT },
  { "apgakeyhi_el1", CPENC (3, 0, C2, C3, 1), F_ARCHEXT },
  { "afsr0_el1", CPENC(3,0,C5,C1,0), 0 },
  { "afsr1_el1", CPENC(3,0,C5,C1,1), 0 },
  { "afsr0_el2", CPENC(3,4,C5,C1,0), 0 },
  { "afsr1_el2", CPENC(3,4,C5,C1,1), 0 },
  { "afsr0_el3", CPENC(3,6,C5,C1,0), 0 },
  { "afsr0_el12", CPENC (3, 5, C5, C1, 0), F_ARCHEXT },
  { "afsr1_el3", CPENC(3,6,C5,C1,1), 0 },
  { "afsr1_el12", CPENC (3, 5, C5, C1, 1), F_ARCHEXT },
  { "esr_el1", CPENC(3,0,C5,C2,0), 0 },
  { "esr_el2", CPENC(3,4,C5,C2,0), 0 },
  { "esr_el3", CPENC(3,6,C5,C2,0), 0 },
  { "esr_el12", CPENC (3, 5, C5, C2, 0), F_ARCHEXT },
  { "vsesr_el2", CPENC (3, 4, C5, C2, 3), F_ARCHEXT },
  { "fpexc32_el2", CPENC(3,4,C5,C3,0), 0 },
  { "erridr_el1", CPENC (3, 0, C5, C3, 0), F_ARCHEXT | F_REG_READ },
  { "errselr_el1", CPENC (3, 0, C5, C3, 1), F_ARCHEXT },
  { "erxfr_el1", CPENC (3, 0, C5, C4, 0), F_ARCHEXT | F_REG_READ },
  { "erxctlr_el1", CPENC (3, 0, C5, C4, 1), F_ARCHEXT },
  { "erxstatus_el1", CPENC (3, 0, C5, C4, 2), F_ARCHEXT },
  { "erxaddr_el1", CPENC (3, 0, C5, C4, 3), F_ARCHEXT },
  { "erxmisc0_el1", CPENC (3, 0, C5, C5, 0), F_ARCHEXT },
  { "erxmisc1_el1", CPENC (3, 0, C5, C5, 1), F_ARCHEXT },
  { "far_el1", CPENC(3,0,C6,C0,0), 0 },
  { "far_el2", CPENC(3,4,C6,C0,0), 0 },
  { "far_el3", CPENC(3,6,C6,C0,0), 0 },
  { "far_el12", CPENC (3, 5, C6, C0, 0), F_ARCHEXT },
  { "hpfar_el2", CPENC(3,4,C6,C0,4), 0 },
  { "par_el1", CPENC(3,0,C7,C4,0), 0 },
  { "mair_el1", CPENC(3,0,C10,C2,0), 0 },
  { "mair_el2", CPENC(3,4,C10,C2,0), 0 },
  { "mair_el3", CPENC(3,6,C10,C2,0), 0 },
  { "mair_el12", CPENC (3, 5, C10, C2, 0), F_ARCHEXT },
  { "amair_el1", CPENC(3,0,C10,C3,0), 0 },
  { "amair_el2", CPENC(3,4,C10,C3,0), 0 },
  { "amair_el3", CPENC(3,6,C10,C3,0), 0 },
  { "amair_el12", CPENC (3, 5, C10, C3, 0), F_ARCHEXT },
  { "vbar_el1", CPENC(3,0,C12,C0,0), 0 },
  { "vbar_el2", CPENC(3,4,C12,C0,0), 0 },
  { "vbar_el3", CPENC(3,6,C12,C0,0), 0 },
  { "vbar_el12", CPENC (3, 5, C12, C0, 0), F_ARCHEXT },
  { "rvbar_el1", CPENC(3,0,C12,C0,1), F_REG_READ },
  { "rvbar_el2", CPENC(3,4,C12,C0,1), F_REG_READ },
  { "rvbar_el3", CPENC(3,6,C12,C0,1), F_REG_READ },
  { "rmr_el1", CPENC(3,0,C12,C0,2), 0 },
  { "rmr_el2", CPENC(3,4,C12,C0,2), 0 },
  { "rmr_el3", CPENC(3,6,C12,C0,2), 0 },
  { "isr_el1", CPENC(3,0,C12,C1,0), F_REG_READ },
  { "disr_el1", CPENC (3, 0, C12, C1, 1), F_ARCHEXT },
  { "vdisr_el2", CPENC (3, 4, C12, C1, 1), F_ARCHEXT },
  { "contextidr_el1", CPENC(3,0,C13,C0,1), 0 },
  { "contextidr_el2", CPENC (3, 4, C13, C0, 1), F_ARCHEXT },
  { "contextidr_el12", CPENC (3, 5, C13, C0, 1), F_ARCHEXT },
  { "tpidr_el0", CPENC(3,3,C13,C0,2), 0 },
  { "tpidrro_el0", CPENC(3,3,C13,C0,3), 0 },
  { "tpidr_el1", CPENC(3,0,C13,C0,4), 0 },
  { "tpidr_el2", CPENC(3,4,C13,C0,2), 0 },
  { "tpidr_el3", CPENC(3,6,C13,C0,2), 0 },
  { "teecr32_el1", CPENC(2,2,C0, C0,0), 0 },
  { "cntfrq_el0", CPENC(3,3,C14,C0,0), 0 },
  { "cntpct_el0", CPENC(3,3,C14,C0,1), F_REG_READ },
  { "cntvct_el0", CPENC(3,3,C14,C0,2), F_REG_READ },
  { "cntvoff_el2", CPENC(3,4,C14,C0,3), 0 },
  { "cntkctl_el1", CPENC(3,0,C14,C1,0), 0 },
  { "cntkctl_el12", CPENC (3, 5, C14, C1, 0), F_ARCHEXT },
  { "cnthctl_el2", CPENC(3,4,C14,C1,0), 0 },
  { "cntp_tval_el0", CPENC(3,3,C14,C2,0), 0 },
  { "cntp_tval_el02", CPENC (3, 5, C14, C2, 0), F_ARCHEXT },
  { "cntp_ctl_el0", CPENC(3,3,C14,C2,1), 0 },
  { "cntp_ctl_el02", CPENC (3, 5, C14, C2, 1), F_ARCHEXT },
  { "cntp_cval_el0", CPENC(3,3,C14,C2,2), 0 },
  { "cntp_cval_el02", CPENC (3, 5, C14, C2, 2), F_ARCHEXT },
  { "cntv_tval_el0", CPENC(3,3,C14,C3,0), 0 },
  { "cntv_tval_el02", CPENC (3, 5, C14, C3, 0), F_ARCHEXT },
  { "cntv_ctl_el0", CPENC(3,3,C14,C3,1), 0 },
  { "cntv_ctl_el02", CPENC (3, 5, C14, C3, 1), F_ARCHEXT },
  { "cntv_cval_el0", CPENC(3,3,C14,C3,2), 0 },
  { "cntv_cval_el02", CPENC (3, 5, C14, C3, 2), F_ARCHEXT },
  { "cnthp_tval_el2", CPENC(3,4,C14,C2,0), 0 },
  { "cnthp_ctl_el2", CPENC(3,4,C14,C2,1), 0 },
  { "cnthp_cval_el2", CPENC(3,4,C14,C2,2), 0 },
  { "cntps_tval_el1", CPENC(3,7,C14,C2,0), 0 },
  { "cntps_ctl_el1", CPENC(3,7,C14,C2,1), 0 },
  { "cntps_cval_el1", CPENC(3,7,C14,C2,2), 0 },
  { "cnthv_tval_el2", CPENC (3, 4, C14, C3, 0), F_ARCHEXT },
  { "cnthv_ctl_el2", CPENC (3, 4, C14, C3, 1), F_ARCHEXT },
  { "cnthv_cval_el2", CPENC (3, 4, C14, C3, 2), F_ARCHEXT },
  { "dacr32_el2", CPENC(3,4,C3,C0,0), 0 },
  { "ifsr32_el2", CPENC(3,4,C5,C0,1), 0 },
  { "teehbr32_el1", CPENC(2,2,C1,C0,0), 0 },
  { "sder32_el3", CPENC(3,6,C1,C1,1), 0 },
  { "mdscr_el1", CPENC(2,0,C0, C2, 2), 0 },
  { "mdccsr_el0", CPENC(2,3,C0, C1, 0), F_REG_READ },
  { "mdccint_el1", CPENC(2,0,C0, C2, 0), 0 },
  { "dbgdtr_el0", CPENC(2,3,C0, C4, 0), 0 },
  { "dbgdtrrx_el0", CPENC(2,3,C0, C5, 0), F_REG_READ },
  { "dbgdtrtx_el0", CPENC(2,3,C0, C5, 0), F_REG_WRITE },
  { "osdtrrx_el1", CPENC(2,0,C0, C0, 2), 0 },
  { "osdtrtx_el1", CPENC(2,0,C0, C3, 2), 0 },
  { "oseccr_el1", CPENC(2,0,C0, C6, 2), 0 },
  { "dbgvcr32_el2", CPENC(2,4,C0, C7, 0), 0 },
  { "dbgbvr0_el1", CPENC(2,0,C0, C0, 4), 0 },
  { "dbgbvr1_el1", CPENC(2,0,C0, C1, 4), 0 },
  { "dbgbvr2_el1", CPENC(2,0,C0, C2, 4), 0 },
  { "dbgbvr3_el1", CPENC(2,0,C0, C3, 4), 0 },
  { "dbgbvr4_el1", CPENC(2,0,C0, C4, 4), 0 },
  { "dbgbvr5_el1", CPENC(2,0,C0, C5, 4), 0 },
  { "dbgbvr6_el1", CPENC(2,0,C0, C6, 4), 0 },
  { "dbgbvr7_el1", CPENC(2,0,C0, C7, 4), 0 },
  { "dbgbvr8_el1", CPENC(2,0,C0, C8, 4), 0 },
  { "dbgbvr9_el1", CPENC(2,0,C0, C9, 4), 0 },
  { "dbgbvr10_el1", CPENC(2,0,C0, C10,4), 0 },
  { "dbgbvr11_el1", CPENC(2,0,C0, C11,4), 0 },
  { "dbgbvr12_el1", CPENC(2,0,C0, C12,4), 0 },
  { "dbgbvr13_el1", CPENC(2,0,C0, C13,4), 0 },
  { "dbgbvr14_el1", CPENC(2,0,C0, C14,4), 0 },
  { "dbgbvr15_el1", CPENC(2,0,C0, C15,4), 0 },
  { "dbgbcr0_el1", CPENC(2,0,C0, C0, 5), 0 },
  { "dbgbcr1_el1", CPENC(2,0,C0, C1, 5), 0 },
  { "dbgbcr2_el1", CPENC(2,0,C0, C2, 5), 0 },
  { "dbgbcr3_el1", CPENC(2,0,C0, C3, 5), 0 },
  { "dbgbcr4_el1", CPENC(2,0,C0, C4, 5), 0 },
  { "dbgbcr5_el1", CPENC(2,0,C0, C5, 5), 0 },
  { "dbgbcr6_el1", CPENC(2,0,C0, C6, 5), 0 },
  { "dbgbcr7_el1", CPENC(2,0,C0, C7, 5), 0 },
  { "dbgbcr8_el1", CPENC(2,0,C0, C8, 5), 0 },
  { "dbgbcr9_el1", CPENC(2,0,C0, C9, 5), 0 },
  { "dbgbcr10_el1", CPENC(2,0,C0, C10,5), 0 },
  { "dbgbcr11_el1", CPENC(2,0,C0, C11,5), 0 },
  { "dbgbcr12_el1", CPENC(2,0,C0, C12,5), 0 },
  { "dbgbcr13_el1", CPENC(2,0,C0, C13,5), 0 },
  { "dbgbcr14_el1", CPENC(2,0,C0, C14,5), 0 },
  { "dbgbcr15_el1", CPENC(2,0,C0, C15,5), 0 },
  { "dbgwvr0_el1", CPENC(2,0,C0, C0, 6), 0 },
  { "dbgwvr1_el1", CPENC(2,0,C0, C1, 6), 0 },
  { "dbgwvr2_el1", CPENC(2,0,C0, C2, 6), 0 },
  { "dbgwvr3_el1", CPENC(2,0,C0, C3, 6), 0 },
  { "dbgwvr4_el1", CPENC(2,0,C0, C4, 6), 0 },
  { "dbgwvr5_el1", CPENC(2,0,C0, C5, 6), 0 },
  { "dbgwvr6_el1", CPENC(2,0,C0, C6, 6), 0 },
  { "dbgwvr7_el1", CPENC(2,0,C0, C7, 6), 0 },
  { "dbgwvr8_el1", CPENC(2,0,C0, C8, 6), 0 },
  { "dbgwvr9_el1", CPENC(2,0,C0, C9, 6), 0 },
  { "dbgwvr10_el1", CPENC(2,0,C0, C10,6), 0 },
  { "dbgwvr11_el1", CPENC(2,0,C0, C11,6), 0 },
  { "dbgwvr12_el1", CPENC(2,0,C0, C12,6), 0 },
  { "dbgwvr13_el1", CPENC(2,0,C0, C13,6), 0 },
  { "dbgwvr14_el1", CPENC(2,0,C0, C14,6), 0 },
  { "dbgwvr15_el1", CPENC(2,0,C0, C15,6), 0 },
  { "dbgwcr0_el1", CPENC(2,0,C0, C0, 7), 0 },
  { "dbgwcr1_el1", CPENC(2,0,C0, C1, 7), 0 },
  { "dbgwcr2_el1", CPENC(2,0,C0, C2, 7), 0 },
  { "dbgwcr3_el1", CPENC(2,0,C0, C3, 7), 0 },
  { "dbgwcr4_el1", CPENC(2,0,C0, C4, 7), 0 },
  { "dbgwcr5_el1", CPENC(2,0,C0, C5, 7), 0 },
  { "dbgwcr6_el1", CPENC(2,0,C0, C6, 7), 0 },
  { "dbgwcr7_el1", CPENC(2,0,C0, C7, 7), 0 },
  { "dbgwcr8_el1", CPENC(2,0,C0, C8, 7), 0 },
  { "dbgwcr9_el1", CPENC(2,0,C0, C9, 7), 0 },
  { "dbgwcr10_el1", CPENC(2,0,C0, C10,7), 0 },
  { "dbgwcr11_el1", CPENC(2,0,C0, C11,7), 0 },
  { "dbgwcr12_el1", CPENC(2,0,C0, C12,7), 0 },
  { "dbgwcr13_el1", CPENC(2,0,C0, C13,7), 0 },
  { "dbgwcr14_el1", CPENC(2,0,C0, C14,7), 0 },
  { "dbgwcr15_el1", CPENC(2,0,C0, C15,7), 0 },
  { "mdrar_el1", CPENC(2,0,C1, C0, 0), F_REG_READ },
  { "oslar_el1", CPENC(2,0,C1, C0, 4), F_REG_WRITE },
  { "oslsr_el1", CPENC(2,0,C1, C1, 4), F_REG_READ },
  { "osdlr_el1", CPENC(2,0,C1, C3, 4), 0 },
  { "dbgprcr_el1", CPENC(2,0,C1, C4, 4), 0 },
  { "dbgclaimset_el1", CPENC(2,0,C7, C8, 6), 0 },
  { "dbgclaimclr_el1", CPENC(2,0,C7, C9, 6), 0 },
  { "dbgauthstatus_el1", CPENC(2,0,C7, C14,6), F_REG_READ },
  { "pmblimitr_el1", CPENC (3, 0, C9, C10, 0), F_ARCHEXT },
  { "pmbptr_el1", CPENC (3, 0, C9, C10, 1), F_ARCHEXT },
  { "pmbsr_el1", CPENC (3, 0, C9, C10, 3), F_ARCHEXT },
  { "pmbidr_el1", CPENC (3, 0, C9, C10, 7), F_ARCHEXT | F_REG_READ },
  { "pmscr_el1", CPENC (3, 0, C9, C9, 0), F_ARCHEXT },
  { "pmsicr_el1", CPENC (3, 0, C9, C9, 2), F_ARCHEXT },
  { "pmsirr_el1", CPENC (3, 0, C9, C9, 3), F_ARCHEXT },
  { "pmsfcr_el1", CPENC (3, 0, C9, C9, 4), F_ARCHEXT },
  { "pmsevfr_el1", CPENC (3, 0, C9, C9, 5), F_ARCHEXT },
  { "pmslatfr_el1", CPENC (3, 0, C9, C9, 6), F_ARCHEXT },
  { "pmsidr_el1", CPENC (3, 0, C9, C9, 7), F_ARCHEXT },
  { "pmscr_el2", CPENC (3, 4, C9, C9, 0), F_ARCHEXT },
  { "pmscr_el12", CPENC (3, 5, C9, C9, 0), F_ARCHEXT },
  { "pmcr_el0", CPENC(3,3,C9,C12, 0), 0 },
  { "pmcntenset_el0", CPENC(3,3,C9,C12, 1), 0 },
  { "pmcntenclr_el0", CPENC(3,3,C9,C12, 2), 0 },
  { "pmovsclr_el0", CPENC(3,3,C9,C12, 3), 0 },
  { "pmswinc_el0", CPENC(3,3,C9,C12, 4), F_REG_WRITE },
  { "pmselr_el0", CPENC(3,3,C9,C12, 5), 0 },
  { "pmceid0_el0", CPENC(3,3,C9,C12, 6), F_REG_READ },
  { "pmceid1_el0", CPENC(3,3,C9,C12, 7), F_REG_READ },
  { "pmccntr_el0", CPENC(3,3,C9,C13, 0), 0 },
  { "pmxevtyper_el0", CPENC(3,3,C9,C13, 1), 0 },
  { "pmxevcntr_el0", CPENC(3,3,C9,C13, 2), 0 },
  { "pmuserenr_el0", CPENC(3,3,C9,C14, 0), 0 },
  { "pmintenset_el1", CPENC(3,0,C9,C14, 1), 0 },
  { "pmintenclr_el1", CPENC(3,0,C9,C14, 2), 0 },
  { "pmovsset_el0", CPENC(3,3,C9,C14, 3), 0 },
  { "pmevcntr0_el0", CPENC(3,3,C14,C8, 0), 0 },
  { "pmevcntr1_el0", CPENC(3,3,C14,C8, 1), 0 },
  { "pmevcntr2_el0", CPENC(3,3,C14,C8, 2), 0 },
  { "pmevcntr3_el0", CPENC(3,3,C14,C8, 3), 0 },
  { "pmevcntr4_el0", CPENC(3,3,C14,C8, 4), 0 },
  { "pmevcntr5_el0", CPENC(3,3,C14,C8, 5), 0 },
  { "pmevcntr6_el0", CPENC(3,3,C14,C8, 6), 0 },
  { "pmevcntr7_el0", CPENC(3,3,C14,C8, 7), 0 },
  { "pmevcntr8_el0", CPENC(3,3,C14,C9, 0), 0 },
  { "pmevcntr9_el0", CPENC(3,3,C14,C9, 1), 0 },
  { "pmevcntr10_el0", CPENC(3,3,C14,C9, 2), 0 },
  { "pmevcntr11_el0", CPENC(3,3,C14,C9, 3), 0 },
  { "pmevcntr12_el0", CPENC(3,3,C14,C9, 4), 0 },
  { "pmevcntr13_el0", CPENC(3,3,C14,C9, 5), 0 },
  { "pmevcntr14_el0", CPENC(3,3,C14,C9, 6), 0 },
  { "pmevcntr15_el0", CPENC(3,3,C14,C9, 7), 0 },
  { "pmevcntr16_el0", CPENC(3,3,C14,C10,0), 0 },
  { "pmevcntr17_el0", CPENC(3,3,C14,C10,1), 0 },
  { "pmevcntr18_el0", CPENC(3,3,C14,C10,2), 0 },
  { "pmevcntr19_el0", CPENC(3,3,C14,C10,3), 0 },
  { "pmevcntr20_el0", CPENC(3,3,C14,C10,4), 0 },
  { "pmevcntr21_el0", CPENC(3,3,C14,C10,5), 0 },
  { "pmevcntr22_el0", CPENC(3,3,C14,C10,6), 0 },
  { "pmevcntr23_el0", CPENC(3,3,C14,C10,7), 0 },
  { "pmevcntr24_el0", CPENC(3,3,C14,C11,0), 0 },
  { "pmevcntr25_el0", CPENC(3,3,C14,C11,1), 0 },
  { "pmevcntr26_el0", CPENC(3,3,C14,C11,2), 0 },
  { "pmevcntr27_el0", CPENC(3,3,C14,C11,3), 0 },
  { "pmevcntr28_el0", CPENC(3,3,C14,C11,4), 0 },
  { "pmevcntr29_el0", CPENC(3,3,C14,C11,5), 0 },
  { "pmevcntr30_el0", CPENC(3,3,C14,C11,6), 0 },
  { "pmevtyper0_el0", CPENC(3,3,C14,C12,0), 0 },
  { "pmevtyper1_el0", CPENC(3,3,C14,C12,1), 0 },
  { "pmevtyper2_el0", CPENC(3,3,C14,C12,2), 0 },
  { "pmevtyper3_el0", CPENC(3,3,C14,C12,3), 0 },
  { "pmevtyper4_el0", CPENC(3,3,C14,C12,4), 0 },
  { "pmevtyper5_el0", CPENC(3,3,C14,C12,5), 0 },
  { "pmevtyper6_el0", CPENC(3,3,C14,C12,6), 0 },
  { "pmevtyper7_el0", CPENC(3,3,C14,C12,7), 0 },
  { "pmevtyper8_el0", CPENC(3,3,C14,C13,0), 0 },
  { "pmevtyper9_el0", CPENC(3,3,C14,C13,1), 0 },
  { "pmevtyper10_el0", CPENC(3,3,C14,C13,2), 0 },
  { "pmevtyper11_el0", CPENC(3,3,C14,C13,3), 0 },
  { "pmevtyper12_el0", CPENC(3,3,C14,C13,4), 0 },
  { "pmevtyper13_el0", CPENC(3,3,C14,C13,5), 0 },
  { "pmevtyper14_el0", CPENC(3,3,C14,C13,6), 0 },
  { "pmevtyper15_el0", CPENC(3,3,C14,C13,7), 0 },
  { "pmevtyper16_el0", CPENC(3,3,C14,C14,0), 0 },
  { "pmevtyper17_el0", CPENC(3,3,C14,C14,1), 0 },
  { "pmevtyper18_el0", CPENC(3,3,C14,C14,2), 0 },
  { "pmevtyper19_el0", CPENC(3,3,C14,C14,3), 0 },
  { "pmevtyper20_el0", CPENC(3,3,C14,C14,4), 0 },
  { "pmevtyper21_el0", CPENC(3,3,C14,C14,5), 0 },
  { "pmevtyper22_el0", CPENC(3,3,C14,C14,6), 0 },
  { "pmevtyper23_el0", CPENC(3,3,C14,C14,7), 0 },
  { "pmevtyper24_el0", CPENC(3,3,C14,C15,0), 0 },
  { "pmevtyper25_el0", CPENC(3,3,C14,C15,1), 0 },
  { "pmevtyper26_el0", CPENC(3,3,C14,C15,2), 0 },
  { "pmevtyper27_el0", CPENC(3,3,C14,C15,3), 0 },
  { "pmevtyper28_el0", CPENC(3,3,C14,C15,4), 0 },
  { "pmevtyper29_el0", CPENC(3,3,C14,C15,5), 0 },
  { "pmevtyper30_el0", CPENC(3,3,C14,C15,6), 0 },
  { "pmccfiltr_el0", CPENC(3,3,C14,C15,7), 0 },

  { "dit", CPEN_ (3, C2, 5), F_ARCHEXT },
  { "vstcr_el2", CPENC(3, 4, C2, C6, 2), F_ARCHEXT },
  { "vsttbr_el2", CPENC(3, 4, C2, C6, 0), F_ARCHEXT },
  { "cnthvs_tval_el2", CPENC(3, 4, C14, C4, 0), F_ARCHEXT },
  { "cnthvs_cval_el2", CPENC(3, 4, C14, C4, 2), F_ARCHEXT },
  { "cnthvs_ctl_el2", CPENC(3, 4, C14, C4, 1), F_ARCHEXT },
  { "cnthps_tval_el2", CPENC(3, 4, C14, C5, 0), F_ARCHEXT },
  { "cnthps_cval_el2", CPENC(3, 4, C14, C5, 2), F_ARCHEXT },
  { "cnthps_ctl_el2", CPENC(3, 4, C14, C5, 1), F_ARCHEXT },
  { "sder32_el2", CPENC(3, 4, C1, C3, 1), F_ARCHEXT },
  { "vncr_el2", CPENC(3, 4, C2, C2, 0), F_ARCHEXT },
  { 0, CPENC(0,0,0,0,0), 0 },
};

bfd_boolean
aarch64_sys_reg_deprecated_p (const aarch64_sys_reg *reg)
{
  return (reg->flags & F_DEPRECATED) != 0;
}

bfd_boolean
aarch64_sys_reg_supported_p (const aarch64_feature_set features,
        const aarch64_sys_reg *reg)
{
  if (!(reg->flags & F_ARCHEXT))
    return TRUE;


  if (reg->value == CPEN_(0,C2,3)
      && !AARCH64_CPU_HAS_FEATURE (features, AARCH64_FEATURE_PAN))
    return FALSE;


  if ((reg->value == CPENC (3, 4, C2, C0, 1)
       || reg->value == CPENC (3, 4, C13, C0, 1)
       || reg->value == CPENC (3, 4, C14, C3, 0)
       || reg->value == CPENC (3, 4, C14, C3, 1)
       || reg->value == CPENC (3, 4, C14, C3, 2))
      && !AARCH64_CPU_HAS_FEATURE (features, AARCH64_FEATURE_V8_1))
      return FALSE;


  if ((reg->value == CPEN_ (5, C0, 0)
       || reg->value == CPEN_ (5, C0, 1)
       || reg->value == CPENC (3, 5, C1, C0, 0)
       || reg->value == CPENC (3, 5, C1, C0, 2)
       || reg->value == CPENC (3, 5, C2, C0, 0)
       || reg->value == CPENC (3, 5, C2, C0, 1)
       || reg->value == CPENC (3, 5, C2, C0, 2)
       || reg->value == CPENC (3, 5, C5, C1, 0)
       || reg->value == CPENC (3, 5, C5, C1, 1)
       || reg->value == CPENC (3, 5, C5, C2, 0)
       || reg->value == CPENC (3, 5, C6, C0, 0)
       || reg->value == CPENC (3, 5, C10, C2, 0)
       || reg->value == CPENC (3, 5, C10, C3, 0)
       || reg->value == CPENC (3, 5, C12, C0, 0)
       || reg->value == CPENC (3, 5, C13, C0, 1)
       || reg->value == CPENC (3, 5, C14, C1, 0))
      && !AARCH64_CPU_HAS_FEATURE (features, AARCH64_FEATURE_V8_1))
    return FALSE;


  if ((reg->value == CPENC (3, 5, C14, C2, 0)
       || reg->value == CPENC (3, 5, C14, C2, 1)
       || reg->value == CPENC (3, 5, C14, C2, 2)
       || reg->value == CPENC (3, 5, C14, C3, 0)
       || reg->value == CPENC (3, 5, C14, C3, 1)
       || reg->value == CPENC (3, 5, C14, C3, 2))
      && !AARCH64_CPU_HAS_FEATURE (features, AARCH64_FEATURE_V8_1))
    return FALSE;




  if (reg->value == CPENC (3, 0, C0, C7, 2)
      && !AARCH64_CPU_HAS_FEATURE (features, AARCH64_FEATURE_V8_2))
    return FALSE;


  if (reg->value == CPEN_ (0, C2, 4)
      && !AARCH64_CPU_HAS_FEATURE (features, AARCH64_FEATURE_V8_2))
    return FALSE;





  if ((reg->value == CPENC (3, 0, C5, C3, 0)
       || reg->value == CPENC (3, 0, C5, C3, 1)
       || reg->value == CPENC (3, 0, C5, C3, 2)
       || reg->value == CPENC (3, 0, C5, C3, 3)
       || reg->value == CPENC (3, 0, C5, C4, 0)
       || reg->value == CPENC (3, 0, C5, C4, 1)
       || reg->value == CPENC (3, 0, C5, C4, 2)
       || reg->value == CPENC (3, 0, C5, C4, 3)
       || reg->value == CPENC (3, 0, C5, C5, 0)
       || reg->value == CPENC (3, 0, C5, C5, 1))
      && !AARCH64_CPU_HAS_FEATURE (features, AARCH64_FEATURE_RAS))
    return FALSE;


  if ((reg->value == CPENC (3, 4, C5, C2, 3)
       || reg->value == CPENC (3, 0, C12, C1, 1)
       || reg->value == CPENC (3, 4, C12, C1, 1))
      && !AARCH64_CPU_HAS_FEATURE (features, AARCH64_FEATURE_RAS))
    return FALSE;


  if ((reg->value == CPENC (3, 0, C9, C10, 0)
       || reg->value == CPENC (3, 0, C9, C10, 1)
       || reg->value == CPENC (3, 0, C9, C10, 3)
       || reg->value == CPENC (3, 0, C9, C10, 7)
       || reg->value == CPENC (3, 0, C9, C9, 0)
       || reg->value == CPENC (3, 0, C9, C9, 2)
       || reg->value == CPENC (3, 0, C9, C9, 3)
       || reg->value == CPENC (3, 0, C9, C9, 4)
       || reg->value == CPENC (3, 0, C9, C9, 5)
       || reg->value == CPENC (3, 0, C9, C9, 6)
       || reg->value == CPENC (3, 0, C9, C9, 7)
       || reg->value == CPENC (3, 4, C9, C9, 0)
       || reg->value == CPENC (3, 5, C9, C9, 0))
      && !AARCH64_CPU_HAS_FEATURE (features, AARCH64_FEATURE_PROFILE))
    return FALSE;


  if ((reg->value == CPENC (3, 0, C2, C1, 0)
       || reg->value == CPENC (3, 0, C2, C1, 1)
       || reg->value == CPENC (3, 0, C2, C1, 2)
       || reg->value == CPENC (3, 0, C2, C1, 3)
       || reg->value == CPENC (3, 0, C2, C2, 0)
       || reg->value == CPENC (3, 0, C2, C2, 1)
       || reg->value == CPENC (3, 0, C2, C2, 2)
       || reg->value == CPENC (3, 0, C2, C2, 3)
       || reg->value == CPENC (3, 0, C2, C3, 0)
       || reg->value == CPENC (3, 0, C2, C3, 1))
      && !AARCH64_CPU_HAS_FEATURE (features, AARCH64_FEATURE_V8_3))
    return FALSE;


  if ((reg->value == CPENC (3, 0, C0, C4, 4)
       || reg->value == CPENC (3, 0, C1, C2, 0)
       || reg->value == CPENC (3, 4, C1, C2, 0)
       || reg->value == CPENC (3, 6, C1, C2, 0)
       || reg->value == CPENC (3, 5, C1, C2, 0)
       || reg->value == CPENC (3, 0, C0, C0, 7))
      && !AARCH64_CPU_HAS_FEATURE (features, AARCH64_FEATURE_SVE))
    return FALSE;




  if (reg->value == CPEN_ (3, C2, 5)
      && !AARCH64_CPU_HAS_FEATURE (features, AARCH64_FEATURE_V8_4))
    return FALSE;


  if ((reg->value == CPENC(3, 4, C2, C6, 2)
       || reg->value == CPENC(3, 4, C2, C6, 0)
       || reg->value == CPENC(3, 4, C14, C4, 0)
       || reg->value == CPENC(3, 4, C14, C4, 2)
       || reg->value == CPENC(3, 4, C14, C4, 1)
       || reg->value == CPENC(3, 4, C14, C5, 0)
       || reg->value == CPENC(3, 4, C14, C5, 2)
       || reg->value == CPENC(3, 4, C14, C5, 1)
       || reg->value == CPENC(3, 4, C1, C3, 1)
       || reg->value == CPENC(3, 4, C2, C2, 0))
      && !AARCH64_CPU_HAS_FEATURE (features, AARCH64_FEATURE_V8_4))
    return FALSE;


  if ((reg->value == CPENS (0, C8, C1, 0)
       || reg->value == CPENS (0, C8, C1, 1)
       || reg->value == CPENS (0, C8, C1, 2)
       || reg->value == CPENS (0, C8, C1, 3)
       || reg->value == CPENS (0, C8, C1, 5)
       || reg->value == CPENS (0, C8, C1, 7)
       || reg->value == CPENS (4, C8, C4, 0)
       || reg->value == CPENS (4, C8, C4, 4)
       || reg->value == CPENS (4, C8, C1, 1)
       || reg->value == CPENS (4, C8, C1, 5)
       || reg->value == CPENS (4, C8, C1, 6)
       || reg->value == CPENS (6, C8, C1, 1)
       || reg->value == CPENS (6, C8, C1, 5)
       || reg->value == CPENS (4, C8, C1, 0)
       || reg->value == CPENS (4, C8, C1, 4)
       || reg->value == CPENS (6, C8, C1, 0)
       || reg->value == CPENS (0, C8, C6, 1)
       || reg->value == CPENS (0, C8, C6, 3)
       || reg->value == CPENS (0, C8, C6, 5)
       || reg->value == CPENS (0, C8, C6, 7)
       || reg->value == CPENS (0, C8, C2, 1)
       || reg->value == CPENS (0, C8, C2, 3)
       || reg->value == CPENS (0, C8, C2, 5)
       || reg->value == CPENS (0, C8, C2, 7)
       || reg->value == CPENS (0, C8, C5, 1)
       || reg->value == CPENS (0, C8, C5, 3)
       || reg->value == CPENS (0, C8, C5, 5)
       || reg->value == CPENS (0, C8, C5, 7)
       || reg->value == CPENS (4, C8, C0, 2)
       || reg->value == CPENS (4, C8, C0, 6)
       || reg->value == CPENS (4, C8, C4, 2)
       || reg->value == CPENS (4, C8, C4, 6)
       || reg->value == CPENS (4, C8, C4, 3)
       || reg->value == CPENS (4, C8, C4, 7)
       || reg->value == CPENS (4, C8, C6, 1)
       || reg->value == CPENS (4, C8, C6, 5)
       || reg->value == CPENS (4, C8, C2, 1)
       || reg->value == CPENS (4, C8, C2, 5)
       || reg->value == CPENS (4, C8, C5, 1)
       || reg->value == CPENS (4, C8, C5, 5)
       || reg->value == CPENS (6, C8, C6, 1)
       || reg->value == CPENS (6, C8, C6, 5)
       || reg->value == CPENS (6, C8, C2, 1)
       || reg->value == CPENS (6, C8, C2, 5)
       || reg->value == CPENS (6, C8, C5, 1)
       || reg->value == CPENS (6, C8, C5, 5))
      && !AARCH64_CPU_HAS_FEATURE (features, AARCH64_FEATURE_V8_4))
    return FALSE;

  return TRUE;
}
# 4278 "project/radare2/libr/asm/arch/arm/aarch64/aarch64-opc.c"
const aarch64_sys_reg aarch64_pstatefields [] =
{
  { "spsel", 0x05, 0 },
  { "daifset", 0x1e, 0 },
  { "daifclr", 0x1f, 0 },
  { "pan", 0x04, F_ARCHEXT },
  { "uao", 0x03, F_ARCHEXT },
  { "dit", 0x1a, F_ARCHEXT },
  { 0, CPENC(0,0,0,0,0), 0 },
};

bfd_boolean
aarch64_pstatefield_supported_p (const aarch64_feature_set features,
     const aarch64_sys_reg *reg)
{
  if (!(reg->flags & F_ARCHEXT))
    return TRUE;


  if (reg->value == 0x04
      && !AARCH64_CPU_HAS_FEATURE (features, AARCH64_FEATURE_PAN))
    return FALSE;


  if (reg->value == 0x03
      && !AARCH64_CPU_HAS_FEATURE (features, AARCH64_FEATURE_V8_2))
    return FALSE;


  if (reg->value == 0x1a
      && !AARCH64_CPU_HAS_FEATURE (features, AARCH64_FEATURE_V8_4))
    return FALSE;

  return TRUE;
}

const aarch64_sys_ins_reg aarch64_sys_regs_ic[] =
{
    { "ialluis", CPENS(0,C7,C1,0), 0 },
    { "iallu", CPENS(0,C7,C5,0), 0 },
    { "ivau", CPENS (3, C7, C5, 1), F_HASXT },
    { 0, CPENS(0,0,0,0), 0 }
};

const aarch64_sys_ins_reg aarch64_sys_regs_dc[] =
{
    { "zva", CPENS (3, C7, C4, 1), F_HASXT },
    { "ivac", CPENS (0, C7, C6, 1), F_HASXT },
    { "isw", CPENS (0, C7, C6, 2), F_HASXT },
    { "cvac", CPENS (3, C7, C10, 1), F_HASXT },
    { "csw", CPENS (0, C7, C10, 2), F_HASXT },
    { "cvau", CPENS (3, C7, C11, 1), F_HASXT },
    { "cvap", CPENS (3, C7, C12, 1), F_HASXT | F_ARCHEXT },
    { "civac", CPENS (3, C7, C14, 1), F_HASXT },
    { "cisw", CPENS (0, C7, C14, 2), F_HASXT },
    { 0, CPENS(0,0,0,0), 0 }
};

const aarch64_sys_ins_reg aarch64_sys_regs_at[] =
{
    { "s1e1r", CPENS (0, C7, C8, 0), F_HASXT },
    { "s1e1w", CPENS (0, C7, C8, 1), F_HASXT },
    { "s1e0r", CPENS (0, C7, C8, 2), F_HASXT },
    { "s1e0w", CPENS (0, C7, C8, 3), F_HASXT },
    { "s12e1r", CPENS (4, C7, C8, 4), F_HASXT },
    { "s12e1w", CPENS (4, C7, C8, 5), F_HASXT },
    { "s12e0r", CPENS (4, C7, C8, 6), F_HASXT },
    { "s12e0w", CPENS (4, C7, C8, 7), F_HASXT },
    { "s1e2r", CPENS (4, C7, C8, 0), F_HASXT },
    { "s1e2w", CPENS (4, C7, C8, 1), F_HASXT },
    { "s1e3r", CPENS (6, C7, C8, 0), F_HASXT },
    { "s1e3w", CPENS (6, C7, C8, 1), F_HASXT },
    { "s1e1rp", CPENS (0, C7, C9, 0), F_HASXT | F_ARCHEXT },
    { "s1e1wp", CPENS (0, C7, C9, 1), F_HASXT | F_ARCHEXT },
    { 0, CPENS(0,0,0,0), 0 }
};

const aarch64_sys_ins_reg aarch64_sys_regs_tlbi[] =
{
    { "vmalle1", CPENS(0,C8,C7,0), 0 },
    { "vae1", CPENS (0, C8, C7, 1), F_HASXT },
    { "aside1", CPENS (0, C8, C7, 2), F_HASXT },
    { "vaae1", CPENS (0, C8, C7, 3), F_HASXT },
    { "vmalle1is", CPENS(0,C8,C3,0), 0 },
    { "vae1is", CPENS (0, C8, C3, 1), F_HASXT },
    { "aside1is", CPENS (0, C8, C3, 2), F_HASXT },
    { "vaae1is", CPENS (0, C8, C3, 3), F_HASXT },
    { "ipas2e1is", CPENS (4, C8, C0, 1), F_HASXT },
    { "ipas2le1is",CPENS (4, C8, C0, 5), F_HASXT },
    { "ipas2e1", CPENS (4, C8, C4, 1), F_HASXT },
    { "ipas2le1", CPENS (4, C8, C4, 5), F_HASXT },
    { "vae2", CPENS (4, C8, C7, 1), F_HASXT },
    { "vae2is", CPENS (4, C8, C3, 1), F_HASXT },
    { "vmalls12e1",CPENS(4,C8,C7,6), 0 },
    { "vmalls12e1is",CPENS(4,C8,C3,6), 0 },
    { "vae3", CPENS (6, C8, C7, 1), F_HASXT },
    { "vae3is", CPENS (6, C8, C3, 1), F_HASXT },
    { "alle2", CPENS(4,C8,C7,0), 0 },
    { "alle2is", CPENS(4,C8,C3,0), 0 },
    { "alle1", CPENS(4,C8,C7,4), 0 },
    { "alle1is", CPENS(4,C8,C3,4), 0 },
    { "alle3", CPENS(6,C8,C7,0), 0 },
    { "alle3is", CPENS(6,C8,C3,0), 0 },
    { "vale1is", CPENS (0, C8, C3, 5), F_HASXT },
    { "vale2is", CPENS (4, C8, C3, 5), F_HASXT },
    { "vale3is", CPENS (6, C8, C3, 5), F_HASXT },
    { "vaale1is", CPENS (0, C8, C3, 7), F_HASXT },
    { "vale1", CPENS (0, C8, C7, 5), F_HASXT },
    { "vale2", CPENS (4, C8, C7, 5), F_HASXT },
    { "vale3", CPENS (6, C8, C7, 5), F_HASXT },
    { "vaale1", CPENS (0, C8, C7, 7), F_HASXT },

    { "vmalle1os", CPENS (0, C8, C1, 0), F_ARCHEXT },
    { "vae1os", CPENS (0, C8, C1, 1), F_HASXT | F_ARCHEXT },
    { "aside1os", CPENS (0, C8, C1, 2), F_HASXT | F_ARCHEXT },
    { "vaae1os", CPENS (0, C8, C1, 3), F_HASXT | F_ARCHEXT },
    { "vale1os", CPENS (0, C8, C1, 5), F_HASXT | F_ARCHEXT },
    { "vaale1os", CPENS (0, C8, C1, 7), F_HASXT | F_ARCHEXT },
    { "ipas2e1os", CPENS (4, C8, C4, 0), F_HASXT | F_ARCHEXT },
    { "ipas2le1os", CPENS (4, C8, C4, 4), F_HASXT | F_ARCHEXT },
    { "vae2os", CPENS (4, C8, C1, 1), F_HASXT | F_ARCHEXT },
    { "vale2os", CPENS (4, C8, C1, 5), F_HASXT | F_ARCHEXT },
    { "vmalls12e1os", CPENS (4, C8, C1, 6), F_ARCHEXT },
    { "vae3os", CPENS (6, C8, C1, 1), F_HASXT | F_ARCHEXT },
    { "vale3os", CPENS (6, C8, C1, 5), F_HASXT | F_ARCHEXT },
    { "alle2os", CPENS (4, C8, C1, 0), F_ARCHEXT },
    { "alle1os", CPENS (4, C8, C1, 4), F_ARCHEXT },
    { "alle3os", CPENS (6, C8, C1, 0), F_ARCHEXT },

    { "rvae1", CPENS (0, C8, C6, 1), F_HASXT | F_ARCHEXT },
    { "rvaae1", CPENS (0, C8, C6, 3), F_HASXT | F_ARCHEXT },
    { "rvale1", CPENS (0, C8, C6, 5), F_HASXT | F_ARCHEXT },
    { "rvaale1", CPENS (0, C8, C6, 7), F_HASXT | F_ARCHEXT },
    { "rvae1is", CPENS (0, C8, C2, 1), F_HASXT | F_ARCHEXT },
    { "rvaae1is", CPENS (0, C8, C2, 3), F_HASXT | F_ARCHEXT },
    { "rvale1is", CPENS (0, C8, C2, 5), F_HASXT | F_ARCHEXT },
    { "rvaale1is", CPENS (0, C8, C2, 7), F_HASXT | F_ARCHEXT },
    { "rvae1os", CPENS (0, C8, C5, 1), F_HASXT | F_ARCHEXT },
    { "rvaae1os", CPENS (0, C8, C5, 3), F_HASXT | F_ARCHEXT },
    { "rvale1os", CPENS (0, C8, C5, 5), F_HASXT | F_ARCHEXT },
    { "rvaale1os", CPENS (0, C8, C5, 7), F_HASXT | F_ARCHEXT },
    { "ripas2e1is", CPENS (4, C8, C0, 2), F_HASXT | F_ARCHEXT },
    { "ripas2le1is",CPENS (4, C8, C0, 6), F_HASXT | F_ARCHEXT },
    { "ripas2e1", CPENS (4, C8, C4, 2), F_HASXT | F_ARCHEXT },
    { "ripas2le1", CPENS (4, C8, C4, 6), F_HASXT | F_ARCHEXT },
    { "ripas2e1os", CPENS (4, C8, C4, 3), F_HASXT | F_ARCHEXT },
    { "ripas2le1os",CPENS (4, C8, C4, 7), F_HASXT | F_ARCHEXT },
    { "rvae2", CPENS (4, C8, C6, 1), F_HASXT | F_ARCHEXT },
    { "rvale2", CPENS (4, C8, C6, 5), F_HASXT | F_ARCHEXT },
    { "rvae2is", CPENS (4, C8, C2, 1), F_HASXT | F_ARCHEXT },
    { "rvale2is", CPENS (4, C8, C2, 5), F_HASXT | F_ARCHEXT },
    { "rvae2os", CPENS (4, C8, C5, 1), F_HASXT | F_ARCHEXT },
    { "rvale2os", CPENS (4, C8, C5, 5), F_HASXT | F_ARCHEXT },
    { "rvae3", CPENS (6, C8, C6, 1), F_HASXT | F_ARCHEXT },
    { "rvale3", CPENS (6, C8, C6, 5), F_HASXT | F_ARCHEXT },
    { "rvae3is", CPENS (6, C8, C2, 1), F_HASXT | F_ARCHEXT },
    { "rvale3is", CPENS (6, C8, C2, 5), F_HASXT | F_ARCHEXT },
    { "rvae3os", CPENS (6, C8, C5, 1), F_HASXT | F_ARCHEXT },
    { "rvale3os", CPENS (6, C8, C5, 5), F_HASXT | F_ARCHEXT },

    { 0, CPENS(0,0,0,0), 0 }
};

bfd_boolean
aarch64_sys_ins_reg_has_xt (const aarch64_sys_ins_reg *sys_ins_reg)
{
  return (sys_ins_reg->flags & F_HASXT) != 0;
}

extern bfd_boolean
aarch64_sys_ins_reg_supported_p (const aarch64_feature_set features,
     const aarch64_sys_ins_reg *reg)
{
  if (!(reg->flags & F_ARCHEXT))
    return TRUE;


  if (reg->value == CPENS (3, C7, C12, 1)
      && !AARCH64_CPU_HAS_FEATURE (features, AARCH64_FEATURE_V8_2))
    return FALSE;


  if ((reg->value == CPENS (0, C7, C9, 0)
       || reg->value == CPENS (0, C7, C9, 1))
      && !AARCH64_CPU_HAS_FEATURE (features, AARCH64_FEATURE_V8_2))
    return FALSE;

  return TRUE;
}

#undef C0
#undef C1
#undef C2
#undef C3
#undef C4
#undef C5
#undef C6
#undef C7
#undef C8
#undef C9
#undef C10
#undef C11
#undef C12
#undef C13
#undef C14
#undef C15

#define BIT(INSN,BT) (((INSN) >> (BT)) & 1)
#define BITS(INSN,HI,LO) (((INSN) >> (LO)) & ((1 << (((HI) - (LO)) + 1)) - 1))

static bfd_boolean
verify_ldpsw (const struct aarch64_opcode * opcode ATTRIBUTE_UNUSED,
       const aarch64_insn insn)
{
  int t = BITS (insn, 4, 0);
  int n = BITS (insn, 9, 5);
  int t2 = BITS (insn, 14, 10);

  if (BIT (insn, 23))
    {

      if ((t == n || t2 == n) && n != 31)
 return FALSE;
    }

  if (BIT (insn, 22))
    {

      if (t == t2)
 return FALSE;
    }

  return TRUE;
}





bfd_boolean
aarch64_sve_dupm_mov_immediate_p (uint64_t uvalue, int esize)
{
  int64_t svalue = uvalue;
  uint64_t upper = (uint64_t) -1 << (esize * 4) << (esize * 4);

  if ((uvalue & ~upper) != uvalue && (uvalue | upper) != uvalue)
    return FALSE;
  if (esize <= 4 || (uint32_t) uvalue == (uint32_t) (uvalue >> 32))
    {
      svalue = (int32_t) uvalue;
      if (esize <= 2 || (uint16_t) uvalue == (uint16_t) (uvalue >> 16))
 {
   svalue = (int16_t) uvalue;
   if (esize == 1 || (uint8_t) uvalue == (uint8_t) (uvalue >> 8))
     return FALSE;
 }
    }
  if ((svalue & 0xff) == 0)
    svalue /= 256;
  return svalue < -128 || svalue >= 128;
}



#define VERIFIER(x) verify_ ##x
#include "aarch64-tbl.h"
