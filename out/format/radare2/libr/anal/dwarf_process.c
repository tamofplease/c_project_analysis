# 1 "project/radare2/libr/anal/dwarf_process.c"


#include "base_types.h"
#include <sdb.h>
#include <r_anal.h>
#include <r_bin_dwarf.h>
#include <string.h>

typedef struct dwarf_parse_context_t {
 const RAnal *anal;
 const RBinDwarfDie *all_dies;
 const ut64 count;
 Sdb *sdb;
 HtUP *die_map;
 HtUP *locations;
 const char *lang;
} Context;

typedef struct dwarf_function_t {
 ut64 addr;
 const char *name;
 const char *signature;
 bool is_external;
 bool is_method;
 bool is_virtual;
 bool is_trampoline;
 ut8 access;
 ut64 vtable_addr;
 ut64 call_conv;
} Function;

typedef enum dwarf_location_kind {
 LOCATION_UNKNOWN = 0,
 LOCATION_GLOBAL = 1,
 LOCATION_BP = 2,
 LOCATION_SP = 3,
 LOCATION_REGISTER = 4,
} VariableLocationKind;

typedef struct dwarf_var_location_t {
 VariableLocationKind kind;
 ut64 address;
 ut64 reg_num;
 st64 offset;
 const char *reg_name;
} VariableLocation;

typedef struct dwarf_variable_t {
 VariableLocation *location;
 char *name;
 char *type;
} Variable;

static void variable_free(Variable *var) {
 free (var->name);
 free (var->location);
 free (var->type);
 free (var);
}


static inline st32 find_attr_idx(const RBinDwarfDie *die, st32 attr_name) {
 st32 i;
 r_return_val_if_fail (die, -1);
 for (i = 0; i < die->count; i++) {
  if (die->attr_values[i].attr_name == attr_name) {
   return i;
  }
 }
 return -1;
}


static RBinDwarfAttrValue *find_attr(const RBinDwarfDie *die, st32 attr_name) {
 st32 i;
 r_return_val_if_fail (die, NULL);
 for (i = 0; i < die->count; i++) {
  if (die->attr_values[i].attr_name == attr_name) {
   return &die->attr_values[i];
  }
 }
 return NULL;
}
# 93 "project/radare2/libr/anal/dwarf_process.c"
static bool strbuf_rev_prepend_char(RStrBuf *sb, const char *s, int c) {
 r_return_val_if_fail (sb && s, false);
 size_t l = strlen (s);

 if (l == 0) {
  return true;
 }
 size_t newlen = l + sb->len;
 char *ns = malloc (newlen + 1);
 bool ret = false;
 char *sb_str = sb->ptr ? sb->ptr : sb->buf;
 char *pivot = strrchr (sb_str, c);
 if (!pivot) {
  free (ns);
  return false;
 }
 size_t idx = pivot - sb_str;
 if (ns) {
  memcpy (ns, sb_str, idx);
  memcpy (ns + idx, s, l);
  memcpy (ns + idx + l, sb_str + idx, sb->len - idx);
  ns[newlen] = 0;
  ret = r_strbuf_set (sb, ns) != NULL;
  free (ns);
 }
 return ret;
}
# 128 "project/radare2/libr/anal/dwarf_process.c"
static bool strbuf_rev_append_char(RStrBuf *sb, const char *s, const char *needle) {
 r_return_val_if_fail (sb && s, false);
 size_t l = strlen (s);

 if (l == 0) {
  return true;
 }
 bool ret = false;
 char *sb_str = sb->ptr ? sb->ptr : sb->buf;
 char *pivot = strstr (sb_str, needle);
 if (!pivot) {
  return false;
 }
 pivot += strlen (needle);
 size_t idx = pivot - sb_str;
 size_t newlen = l + sb->len;
 char *ns = malloc (newlen + 1);
 if (ns) {
  memcpy (ns, sb_str, idx);
  memcpy (ns + idx, s, l);
  memcpy (ns + idx + l, sb_str + idx, sb->len - idx);
  ns[newlen] = 0;
  ret = r_strbuf_set (sb, ns) != NULL;
  free (ns);
 }
 return ret;
}

static inline char *create_type_name_from_offset(ut64 offset) {
 return r_str_newf ("type_0x%" PFMT64x, offset);
}







static char *get_die_name(const RBinDwarfDie *die) {
 st32 name_attr_idx = find_attr_idx (die, DW_AT_name);
 if (name_attr_idx < 0 || name_attr_idx >= die->count) {
  return NULL;
 }
 RBinDwarfAttrValue *av = &die->attr_values[name_attr_idx];
 if (av->kind == DW_AT_KIND_STRING && name_attr_idx != -1 && av->string.content) {
  return strdup (av->string.content);
 }
 return create_type_name_from_offset (die->offset);
}







static ut64 get_die_size(const RBinDwarfDie *die) {
 ut64 size = 0;
 st32 byte_size_idx = find_attr_idx (die, DW_AT_byte_size);

 if (byte_size_idx != -1) {
  size = die->attr_values[byte_size_idx].uconstant * CHAR_BIT;
 } else {
  st32 bit_size_idx = find_attr_idx (die, DW_AT_bit_size);

  if (bit_size_idx != -1) {
   size = die->attr_values[bit_size_idx].uconstant;
  }
 }
 return size;
}
# 208 "project/radare2/libr/anal/dwarf_process.c"
static void parse_array_type(Context *ctx, int idx, RStrBuf *strbuf) {
 if (idx < 0 || idx >= ctx->count) {

  return;
 }
 const RBinDwarfDie *die = &ctx->all_dies[idx++];

 if (die->has_children) {
  int child_depth = 1;
  size_t j;
  for (j = idx; child_depth > 0 && j < ctx->count; j++) {
   const RBinDwarfDie *child_die = &ctx->all_dies[j];


   if (child_depth == 1 && child_die->tag == DW_TAG_subrange_type) {
    size_t i;
    for (i = 0; i < child_die->count; i++) {
     const RBinDwarfAttrValue *value = &child_die->attr_values[i];
     switch (value->attr_name) {
     case DW_AT_upper_bound:
     case DW_AT_count:
      r_strbuf_appendf (strbuf, "[%" PFMT64d "]", value->uconstant + 1);
      break;

     default:
      break;
     }
    }
   }
   if (child_die->has_children) {
    child_depth++;
   }

   if (child_die->abbrev_code == 0) {
    child_depth--;
   }
  }
 }
}
# 261 "project/radare2/libr/anal/dwarf_process.c"
static st32 parse_type(Context *ctx, const ut64 offset, RStrBuf *strbuf, ut64 *size, HtUP **visited) {
 r_return_val_if_fail (strbuf, -1);
 RBinDwarfDie *die = ht_up_find (ctx->die_map, offset, NULL);
 if (!die) {
  return -1;
 }
 bool root = false;

 if (!visited) {
  root = true;
  SetU *su = set_u_new ();
  visited = malloc (sizeof (void*));
  *visited = su;
 }
 if (visited && set_u_contains (*visited, offset)) {
  eprintf ("Warning: anal.dwarf.parse_type: infinite recursion detected.\n");
  return -1;
 }
 set_u_add (*visited, offset);

 st32 type_idx;
 st32 tag;
 char *name = NULL;

 if (size && *size == 0) {
  *size = get_die_size (die);
 }
 switch (die->tag) {

 case DW_TAG_pointer_type:
  type_idx = find_attr_idx (die, DW_AT_type);
  if (type_idx == -1) {
   r_strbuf_append (strbuf, "void");
   r_strbuf_append (strbuf, " *");
  } else {
   tag = parse_type (ctx, die->attr_values[type_idx].reference, strbuf, size, visited);
   if (tag == DW_TAG_subroutine_type) {
    strbuf_rev_prepend_char (strbuf, "(*)", '(');
   } else if (tag == DW_TAG_pointer_type) {
    if (!strbuf_rev_append_char (strbuf, "*", "(*")) {
     strbuf_rev_prepend_char (strbuf, "*", '*');
    }
   } else {
    r_strbuf_append (strbuf, " *");
   }
  }
  break;


 case DW_TAG_typedef:
 case DW_TAG_base_type:
 case DW_TAG_structure_type:
 case DW_TAG_enumeration_type:
 case DW_TAG_union_type:
 case DW_TAG_class_type:
  name = get_die_name (die);
  if (name) {
   r_strbuf_append (strbuf, name);
   free (name);
  }
  break;
 case DW_TAG_subroutine_type:
  type_idx = find_attr_idx (die, DW_AT_type);
  if (type_idx == -1) {
   r_strbuf_append (strbuf, "void");
  } else {
   parse_type (ctx, die->attr_values[type_idx].reference, strbuf, size, visited);
  }
  r_strbuf_append (strbuf, " (");
  if (die->has_children) {
  }
  r_strbuf_append (strbuf, ")");
  break;
 case DW_TAG_array_type:
  type_idx = find_attr_idx (die, DW_AT_type);
  if (type_idx != -1) {
   parse_type (ctx, die->attr_values[type_idx].reference, strbuf, size, visited);
  }
  parse_array_type (ctx, die - ctx->all_dies, strbuf);
  break;
 case DW_TAG_const_type:
  type_idx = find_attr_idx (die, DW_AT_type);
  if (type_idx != -1) {
   parse_type (ctx, die->attr_values[type_idx].reference, strbuf, size, visited);
  }
  r_strbuf_append (strbuf, " const");
  break;
 case DW_TAG_volatile_type:
  type_idx = find_attr_idx (die, DW_AT_type);
  if (type_idx != -1) {
   parse_type (ctx, die->attr_values[type_idx].reference, strbuf, size, visited);
  }
  r_strbuf_append (strbuf, " volatile");
  break;
 case DW_TAG_restrict_type:
  type_idx = find_attr_idx (die, DW_AT_type);
  if (type_idx != -1) {
   parse_type (ctx, die->attr_values[type_idx].reference, strbuf, size, visited);
  }
  r_strbuf_append (strbuf, " restrict");
  break;
 case DW_TAG_rvalue_reference_type:
  type_idx = find_attr_idx (die, DW_AT_type);
  if (type_idx != -1) {
   parse_type (ctx, die->attr_values[type_idx].reference, strbuf, size, visited);
  }
  r_strbuf_append (strbuf, " &&");
  break;
 case DW_TAG_reference_type:
  type_idx = find_attr_idx (die, DW_AT_type);
  if (type_idx != -1) {
   parse_type (ctx, die->attr_values[type_idx].reference, strbuf, size, visited);
  }
  r_strbuf_append (strbuf, " &");
  break;
 default:
  break;
 }
 if (root) {
  set_u_free (*visited);
 }
 return (st32)die->tag;
}
# 394 "project/radare2/libr/anal/dwarf_process.c"
static RAnalStructMember *parse_struct_member(Context *ctx, ut64 idx, RAnalStructMember *result) {
 r_return_val_if_fail (result, NULL);
 const RBinDwarfDie *die = &ctx->all_dies[idx];

 char *name = NULL;
 char *type = NULL;
 ut64 offset = 0;
 ut64 size = 0;
 RStrBuf strbuf;
 r_strbuf_init (&strbuf);
 size_t i;
 for (i = 0; i < die->count; i++) {
  RBinDwarfAttrValue *value = &die->attr_values[i];
  switch (die->attr_values[i].attr_name) {
  case DW_AT_name:
   free (name);
   name = get_die_name (die);
   if (!name) {
    goto cleanup;
   }
   break;
  case DW_AT_type:
   parse_type (ctx, value->reference, &strbuf, &size, NULL);
   free (type);
   type = r_strbuf_drain_nofree (&strbuf);
   if (!type || !*type) {
    goto cleanup;
   }
   break;
  case DW_AT_data_member_location:







   offset = value->uconstant;
   break;
  case DW_AT_accessibility:
  case DW_AT_mutable:
  case DW_AT_data_bit_offset:




   break;


  case DW_AT_byte_size:
   size = value->uconstant * CHAR_BIT;
   break;
  case DW_AT_bit_size:
   size = value->uconstant;
   break;
  case DW_AT_containing_type:
  default:
   break;
  }
 }

 result->name = name;
 result->type = type;
 result->offset = offset;
 result->size = size;
 return result;
cleanup:
 free (name);
 free (type);
 return NULL;
}
# 475 "project/radare2/libr/anal/dwarf_process.c"
static RAnalEnumCase *parse_enumerator(Context *ctx, ut64 idx, RAnalEnumCase *result) {
 const RBinDwarfDie *die = &ctx->all_dies[idx];

 char *name = NULL;
 int val = 0;
 size_t i;


 for (i = 0; i < die->count; i++) {
  RBinDwarfAttrValue *value = &die->attr_values[i];
  switch (die->attr_values[i].attr_name) {
  case DW_AT_name:
   name = get_die_name (die);
   if (!name) {
    goto cleanup;
   }
   break;
  case DW_AT_const_value:

   val = value->uconstant;
   break;
  default:
   break;
  }
 }

 result->name = name;
 result->val = (int)val;
 return result;
cleanup:
 free (name);
 return NULL;
}
# 517 "project/radare2/libr/anal/dwarf_process.c"
static void parse_structure_type(Context *ctx, ut64 idx) {
 const RBinDwarfDie *die = &ctx->all_dies[idx];

 RAnalBaseTypeKind kind;
 if (die->tag == DW_TAG_union_type) {
  kind = R_ANAL_BASE_TYPE_KIND_UNION;
 } else {
  kind = R_ANAL_BASE_TYPE_KIND_STRUCT;
 }

 RAnalBaseType *base_type = r_anal_base_type_new (kind);
 if (!base_type) {
  return;
 }

 base_type->name = get_die_name (die);
 if (!base_type->name) {
  goto cleanup;
 }


 st32 spec_attr_idx = find_attr_idx (die, DW_AT_specification);
 if (spec_attr_idx != -1) {
  RBinDwarfDie *decl_die = ht_up_find (ctx->die_map, die->attr_values[spec_attr_idx].reference, NULL);
  if (!decl_die) {
   goto cleanup;
  }
  st32 name_attr_idx = find_attr_idx (decl_die, DW_AT_name);
  if (name_attr_idx != -1) {
   free (base_type->name);
   base_type->name = get_die_name (decl_die);
  }
 }

 base_type->size = get_die_size (die);

 RAnalStructMember member = { 0 };

 if (die->has_children) {
  int child_depth = 1;
  size_t j;
  idx++;
  for (j = idx; child_depth > 0 && j < ctx->count; j++) {
   const RBinDwarfDie *child_die = &ctx->all_dies[j];


   if (child_depth == 1 && child_die->tag == DW_TAG_member) {
    RAnalStructMember *result = parse_struct_member (ctx, j, &member);
    if (!result) {
     goto cleanup;
    } else {
     void *element = r_vector_push (&base_type->struct_data.members, &member);
     if (!element) {
      goto cleanup;
     }
    }
   }
   if (child_die->has_children) {
    child_depth++;
   }
   if (child_die->abbrev_code == 0) {
    child_depth--;
   }
  }
 }
 r_anal_save_base_type (ctx->anal, base_type);
cleanup:
 r_anal_base_type_free (base_type);
}
# 594 "project/radare2/libr/anal/dwarf_process.c"
static void parse_enum_type(Context *ctx, ut64 idx) {
 const RBinDwarfDie *die = &ctx->all_dies[idx];

 RAnalBaseType *base_type = r_anal_base_type_new (R_ANAL_BASE_TYPE_KIND_ENUM);
 if (!base_type) {
  return;
 }

 base_type->name = get_die_name (die);
 if (!base_type->name) {
  goto cleanup;
 }
 base_type->size = get_die_size (die);

 st32 type_attr_idx = find_attr_idx (die, DW_AT_type);
 if (type_attr_idx != -1) {
  RStrBuf strbuf;
  r_strbuf_init (&strbuf);
  parse_type (ctx, die->attr_values[type_attr_idx].reference, &strbuf, &base_type->size, NULL);
  base_type->type = r_strbuf_drain_nofree (&strbuf);
 }

 RAnalEnumCase cas;
 if (die->has_children) {
  int child_depth = 1;
  size_t j;
  idx++;
  for (j = idx; child_depth > 0 && j < ctx->count; j++) {
   const RBinDwarfDie *child_die = &ctx->all_dies[j];

   if (child_depth == 1 && child_die->tag == DW_TAG_enumerator) {
    RAnalEnumCase *result = parse_enumerator (ctx, j, &cas);
    if (!result) {
     goto cleanup;
    }
    void *element = r_vector_push (&base_type->enum_data.cases, &cas);
    if (!element) {
     enum_type_case_free (result, NULL);
     goto cleanup;
    }
   }
   if (child_die->has_children) {
    child_depth++;
   }

   if (child_die->abbrev_code == 0) {
    child_depth--;
   }
  }
 }
 r_anal_save_base_type (ctx->anal, base_type);
cleanup:
 r_anal_base_type_free (base_type);
}
# 658 "project/radare2/libr/anal/dwarf_process.c"
static void parse_typedef(Context *ctx, ut64 idx) {
 const RBinDwarfDie *die = &ctx->all_dies[idx];

 char *name = NULL;
 char *type = NULL;
 ut64 size = 0;
 RStrBuf strbuf;
 r_strbuf_init (&strbuf);
 size_t i;

 for (i = 0; i < die->count; i++) {
  RBinDwarfAttrValue *value = &die->attr_values[i];
  switch (die->attr_values[i].attr_name) {
  case DW_AT_name:
   free (name);
   name = get_die_name (die);
   if (!name) {
    goto cleanup;
   }
   break;
  case DW_AT_type:
   parse_type (ctx, value->reference, &strbuf, &size, NULL);
   free (type);
   type = r_strbuf_drain_nofree (&strbuf);
   if (!type) {
    goto cleanup;
   }
   break;
  default:
   break;
  }
 }
 if (!name) {
  goto cleanup;
 }
 RAnalBaseType *base_type = r_anal_base_type_new (R_ANAL_BASE_TYPE_KIND_TYPEDEF);
 if (!base_type) {
  goto cleanup;
 }
 base_type->name = name;
 base_type->type = type;
 r_anal_save_base_type (ctx->anal, base_type);
 r_anal_base_type_free (base_type);
 r_strbuf_fini (&strbuf);
 return;
cleanup:
 free (name);
 free (type);
 r_strbuf_fini (&strbuf);
}

static void parse_atomic_type(Context *ctx, ut64 idx) {
 const RBinDwarfDie *die = &ctx->all_dies[idx];

 char *name = NULL;
 ut64 size = 0;
 size_t i;

 for (i = 0; i < die->count; i++) {
  RBinDwarfAttrValue *value = &die->attr_values[i];
  switch (die->attr_values[i].attr_name) {
  case DW_AT_name:
   R_FREE (name);
   if (value->kind == DW_AT_KIND_STRING) {
    if (!value->string.content) {
     name = create_type_name_from_offset (die->offset);
    } else {
     name = strdup (value->string.content);
    }
   }
   if (!name) {
    return;
   }
   break;
  case DW_AT_byte_size:
   size = value->uconstant * CHAR_BIT;
   break;
  case DW_AT_bit_size:
   size = value->uconstant;
   break;
  case DW_AT_encoding:
  default:
   break;
  }
 }
 if (!name) {
  return;
 }
 RAnalBaseType *base_type = r_anal_base_type_new (R_ANAL_BASE_TYPE_KIND_ATOMIC);
 if (!base_type) {
  free (name);
  return;
 }
 base_type->name = name;
 base_type->size = size;
 r_anal_save_base_type (ctx->anal, base_type);
 r_anal_base_type_free (base_type);
}

static const char *get_specification_die_name(const RBinDwarfDie *die) {
 st32 linkage_name_attr_idx = find_attr_idx (die, DW_AT_linkage_name);
 if (linkage_name_attr_idx != -1 && die->attr_values[linkage_name_attr_idx].string.content) {
  return die->attr_values[linkage_name_attr_idx].string.content;
 }
 st32 name_attr_idx = find_attr_idx (die, DW_AT_name);
 if (name_attr_idx != -1 && die->attr_values[name_attr_idx].string.content) {
  return die->attr_values[name_attr_idx].string.content;
 }
 return NULL;
}

static void get_spec_die_type(Context *ctx, RBinDwarfDie *die, RStrBuf *ret_type) {
 st32 attr_idx = find_attr_idx (die, DW_AT_type);
 if (attr_idx != -1) {
  ut64 size = 0;
  parse_type (ctx, die->attr_values[attr_idx].reference, ret_type, &size, NULL);
 }
}



static bool prefer_linkage_name(const char *lang) {
 if (lang == NULL) {
  return false;
 } else if (!strcmp (lang, "rust")) {
  return false;
 } else if (!strcmp (lang, "ada")) {
  return false;
 }
 return true;
}

static void parse_abstract_origin(Context *ctx, ut64 offset, RStrBuf *type, const char **name) {
 RBinDwarfDie *die = ht_up_find (ctx->die_map, offset, NULL);
 if (die) {
  size_t i;
  ut64 size = 0;
  bool has_linkage_name = false;
  bool get_linkage_name = prefer_linkage_name (ctx->lang);
  for (i = 0; i < die->count; i++) {
   const RBinDwarfAttrValue *val = &die->attr_values[i];
   switch (val->attr_name) {
   case DW_AT_name:
    if (!get_linkage_name || !has_linkage_name) {
     *name = val->string.content;
    }
    break;
   case DW_AT_linkage_name:
   case DW_AT_MIPS_linkage_name:
    *name = val->string.content;
    has_linkage_name = true;
    break;
   case DW_AT_type:
    parse_type (ctx, val->reference, type, &size, NULL);
    break;
   default:
    break;
   }
  }
 }
}


static const char *map_dwarf_reg_to_x86_64_reg(ut64 reg_num, VariableLocationKind *kind) {
 *kind = LOCATION_REGISTER;
 switch (reg_num) {
 case 0: return "rax";
 case 1: return "rdx";
 case 2: return "rcx";
 case 3: return "rbx";
 case 4: return "rsi";
 case 5: return "rdi";
 case 6:
  *kind = LOCATION_BP;
  return "rbp";
 case 7:
  *kind = LOCATION_SP;
  return "rsp";
 case 8: return "r8";
 case 9: return "r9";
 case 10: return "r10";
 case 11: return "r11";
 case 12: return "r12";
 case 13: return "r13";
 case 14: return "r14";
 case 15: return "r15";
 case 17: return "xmm0";
 case 18: return "xmm1";
 case 19: return "xmm2";
 case 20: return "xmm3";
 case 21: return "xmm4";
 case 22: return "xmm5";
 case 23: return "xmm6";
 case 24: return "xmm7";
 default:
  *kind = LOCATION_UNKNOWN;
  return "unsupported_reg";
 }
}


static const char *map_dwarf_reg_to_x86_reg(ut64 reg_num, VariableLocationKind *kind) {
 *kind = LOCATION_REGISTER;
 switch (reg_num) {
 case 0: return "eax";
 case 1: return "edx";
 case 2: return "ecx";
 case 3: return "ebx";
 case 4:
  *kind = LOCATION_SP;
  return "esp";
 case 5:
  *kind = LOCATION_BP;
  return "ebp";
 case 6: return "esi";
 case 7: return "edi";
 case 21: return "xmm0";
 case 22: return "xmm1";
 case 23: return "xmm2";
 case 24: return "xmm3";
 case 25: return "xmm4";
 case 26: return "xmm5";
 case 27: return "xmm6";
 case 28: return "xmm7";
 default:
  r_warn_if_reached ();
  *kind = LOCATION_UNKNOWN;
  return "unsupported_reg";
 }
}


static const char *map_dwarf_reg_to_ppc64_reg(ut64 reg_num, VariableLocationKind *kind) {
 *kind = LOCATION_REGISTER;
 switch (reg_num) {
 case 0: return "r0";
 case 1:
  *kind = LOCATION_SP;
  return "r1";
 case 2: return "r2";
 case 3: return "r3";
 case 4: return "r4";
 case 5: return "r5";
 case 6: return "r6";
 case 7: return "r7";
 case 8: return "r8";
 case 9: return "r9";
 case 10: return "r10";
 case 11: return "r11";
 case 12: return "r12";
 case 13: return "r13";
 case 14: return "r14";
 case 15: return "r15";
 case 16: return "r16";
 case 17: return "r17";
 case 18: return "r18";
 case 19: return "r19";
 case 20: return "r20";
 case 21: return "r21";
 case 22: return "r22";
 case 23: return "r23";
 case 24: return "r24";
 case 25: return "r25";
 case 26: return "r26";
 case 27: return "r27";
 case 28: return "r28";
 case 29: return "r29";
 case 30: return "r30";
 case 31: return "r31";
 default:
  r_warn_if_reached ();
  *kind = LOCATION_UNKNOWN;
  return "unsupported_reg";
 }
}



static const char *get_dwarf_reg_name(char *arch, int reg_num, VariableLocationKind *kind, int bits) {
 if (!strcmp (arch, "x86")) {
  if (bits == 64) {
   return map_dwarf_reg_to_x86_64_reg (reg_num, kind);
  } else {
   return map_dwarf_reg_to_x86_reg (reg_num, kind);
  }
 } else if (!strcmp (arch, "ppc")) {
  if (bits == 64) {
   return map_dwarf_reg_to_ppc64_reg (reg_num, kind);
  }
 }
 *kind = LOCATION_UNKNOWN;
 return "unsupported_reg";
}

static RBinDwarfLocRange *find_largest_loc_range(RList *loc_list) {
 RBinDwarfLocRange *largest = NULL;
 ut64 max_range_size = 0;
 RListIter *iter;
 RBinDwarfLocRange *range;
 r_list_foreach (loc_list, iter, range) {
  ut64 diff = range->end - range->start;
  if (diff > max_range_size) {
   max_range_size = diff ;
   largest = range;
  }
 }
 return largest;
}


static VariableLocation *parse_dwarf_location(Context *ctx, const RBinDwarfAttrValue *loc, const RBinDwarfAttrValue *frame_base) {
# 977 "project/radare2/libr/anal/dwarf_process.c"
 if (loc->kind != DW_AT_KIND_BLOCK && loc->kind != DW_AT_KIND_LOCLISTPTR && loc->kind != DW_AT_KIND_REFERENCE && loc->kind != DW_AT_KIND_CONSTANT) {
  return NULL;
 }
 RBinDwarfBlock block;
 if (loc->kind == DW_AT_KIND_LOCLISTPTR || loc->kind == DW_AT_KIND_REFERENCE || loc->kind == DW_AT_KIND_CONSTANT) {
  ut64 offset = loc->reference;
  RBinDwarfLocList *range_list = ht_up_find (ctx->locations, offset, NULL);
  if (!range_list) {
   return NULL;
  }

  RBinDwarfLocRange *range = find_largest_loc_range (range_list->list);
  if (!range) {
   return NULL;
  }

  block = *range->expression;

 } else {
  block = loc->block;
 }
 VariableLocationKind kind = LOCATION_UNKNOWN;
 st64 offset = 0;
 ut64 address = 0;
 ut64 reg_num = -1;
 const char *reg_name = NULL;
 size_t i;
 for (i = 0; i < block.length; i++) {
  switch (block.data[i]) {
  case DW_OP_fbreg: {


   if (i == block.length - 1) {
    return NULL;
   }
   i++;
   const ut8 *dump = block.data + i;
   if (loc->block.length > block.length) {

    return NULL;
   }
   offset = r_sleb128 (&dump, block.data + loc->block.length);
   if (frame_base) {


    VariableLocation *location = parse_dwarf_location (ctx, frame_base, NULL);
    if (location) {
     location->offset += offset;
     return location;
    }
   } else {

   }
   return NULL;
  }
  case DW_OP_reg0:
  case DW_OP_reg1:
  case DW_OP_reg2:
  case DW_OP_reg3:
  case DW_OP_reg4:
  case DW_OP_reg5:
  case DW_OP_reg6:
  case DW_OP_reg7:
  case DW_OP_reg8:
  case DW_OP_reg9:
  case DW_OP_reg10:
  case DW_OP_reg11:
  case DW_OP_reg12:
  case DW_OP_reg13:
  case DW_OP_reg14:
  case DW_OP_reg15:
  case DW_OP_reg16:
  case DW_OP_reg17:
  case DW_OP_reg18:
  case DW_OP_reg19:
  case DW_OP_reg20:
  case DW_OP_reg21:
  case DW_OP_reg22:
  case DW_OP_reg23:
  case DW_OP_reg24:
  case DW_OP_reg25:
  case DW_OP_reg26:
  case DW_OP_reg27:
  case DW_OP_reg28:
  case DW_OP_reg29:
  case DW_OP_reg30:
  case DW_OP_reg31: {


   reg_num = block.data[i] - DW_OP_reg0;
   reg_name = get_dwarf_reg_name (ctx->anal->cpu, reg_num, &kind, ctx->anal->bits);
   break;
  }
  case DW_OP_breg0:
  case DW_OP_breg1:
  case DW_OP_breg2:
  case DW_OP_breg3:
  case DW_OP_breg4:
  case DW_OP_breg5:
  case DW_OP_breg6:
  case DW_OP_breg7:
  case DW_OP_breg8:
  case DW_OP_breg9:
  case DW_OP_breg10:
  case DW_OP_breg11:
  case DW_OP_breg12:
  case DW_OP_breg13:
  case DW_OP_breg14:
  case DW_OP_breg15:
  case DW_OP_breg16:
  case DW_OP_breg17:
  case DW_OP_breg18:
  case DW_OP_breg19:
  case DW_OP_breg20:
  case DW_OP_breg21:
  case DW_OP_breg22:
  case DW_OP_breg23:
  case DW_OP_breg24:
  case DW_OP_breg25:
  case DW_OP_breg26:
  case DW_OP_breg27:
  case DW_OP_breg28:
  case DW_OP_breg29:
  case DW_OP_breg30:
  case DW_OP_breg31: {
   if (i == block.length - 1) {
    return NULL;
   }


   reg_num = block.data[i] - DW_OP_breg0;
   const ut8 *buffer = &block.data[++i];
   offset = r_sleb128 (&buffer, &block.data[block.length]);

   i += buffer - &block.data[0];
   reg_name = get_dwarf_reg_name (ctx->anal->cpu, reg_num, &kind, ctx->anal->bits);
   break;
  }
  case DW_OP_bregx: {
   if (i == block.length - 1) {
    return NULL;
   }


   const ut8 *buffer = &block.data[++i];
   const ut8 *buf_end = &block.data[block.length];
   buffer = r_uleb128 (buffer, buf_end - buffer, &reg_num, NULL);
   if (buffer == buf_end) {
    return NULL;
   }
   offset = r_sleb128 (&buffer, buf_end);
   reg_name = get_dwarf_reg_name (ctx->anal->cpu, reg_num, &kind, ctx->anal->bits);
   break;
  }
  case DW_OP_addr: {


   const int addr_size = ctx->anal->bits / 8;
   const ut8 *dump = &block.data[++i];

   if (block.length - i < addr_size) {
    return NULL;
   }
   switch (addr_size) {
   case 1:
    address = r_read_ble8 (dump);
    break;
   case 2:
    address = r_read_ble16 (dump, ctx->anal->big_endian);
    break;
   case 4:
    address = r_read_ble32 (dump, ctx->anal->big_endian);
    break;
   case 8:
    address = r_read_ble64 (dump, ctx->anal->big_endian);
    break;
   default:
    r_warn_if_reached ();
    return NULL;
   }
   kind = LOCATION_GLOBAL;
   break;
  }
  case DW_OP_call_frame_cfa: {

   kind = LOCATION_BP;
   offset += 16;
   break;
  }
  default:
   break;
  }
 }
 if (kind == LOCATION_UNKNOWN) {
  return NULL;
 }
 VariableLocation *location = R_NEW0 (VariableLocation);
 if (location) {
  location->reg_name = reg_name;
  location->reg_num = reg_num;
  location->kind = kind;
  location->offset = offset;
  location->address = address;
 }
 return location;
}

static st32 parse_function_args_and_vars(Context *ctx, ut64 idx, RStrBuf *args, RList *variables) {
 const RBinDwarfDie *die = &ctx->all_dies[idx++];

 if (die->has_children) {
  int child_depth = 1;

  bool get_linkage_name = prefer_linkage_name (ctx->lang);
  bool has_linkage_name = false;
  int argNumber = 1;
  const char *name = NULL;
  size_t j;
  for (j = idx; child_depth > 0 && j < ctx->count; j++) {
   const RBinDwarfDie *child_die = &ctx->all_dies[j];
   RStrBuf type;
   r_strbuf_init (&type);
   if (child_die->tag == DW_TAG_formal_parameter || child_die->tag == DW_TAG_variable) {
    Variable *var = R_NEW0 (Variable);
    size_t i;
    name = NULL;
    for (i = 0; i < child_die->count; i++) {
     const RBinDwarfAttrValue *val = &child_die->attr_values[i];
     switch (val->attr_name) {
     case DW_AT_name:
      if (!get_linkage_name || !has_linkage_name) {
       name = val->string.content;
      }
      break;
     case DW_AT_linkage_name:
     case DW_AT_MIPS_linkage_name:
      name = val->string.content;
      has_linkage_name = true;
      break;
     case DW_AT_type:
      parse_type (ctx, val->reference, &type, NULL, NULL);
      break;

     case DW_AT_abstract_origin:
      parse_abstract_origin (ctx, val->reference, &type, &name);
      break;
     case DW_AT_location:
      var->location = parse_dwarf_location (ctx, val, find_attr (die, DW_AT_frame_base));
      break;
     default:
      break;
     }
    }
    if (child_die->tag == DW_TAG_formal_parameter && child_depth == 1) {

     if (type.len) {
      if (name) {
       var->name = strdup (name);
      } else {
       var->name = r_str_newf ("arg%d", argNumber);
      }
      r_strbuf_appendf (args, "%s %s,", r_strbuf_get (&type), var->name);
      var->type = strdup (r_strbuf_get (&type));
      r_list_append (variables, var);
     } else {
      variable_free (var);
     }
     argNumber++;
    } else {
     if (name && type.len) {
      var->name = strdup (name);
      var->type = strdup (r_strbuf_get (&type));
      r_list_append (variables, var);
     } else {
      variable_free (var);
     }
     r_strbuf_fini (&type);
    }
   } else if (child_depth == 1 && child_die->tag == DW_TAG_unspecified_parameters) {
    r_strbuf_appendf (args, "va_args ...,");
   }
   if (child_die->has_children) {
    child_depth++;
   }
   if (child_die->abbrev_code == 0) {
    child_depth--;
   }
   r_strbuf_fini (&type);
  }
  if (args->len > 0) {
   r_strbuf_slice (args, 0, args->len - 1);
  }
 }
 return 0;
}

static void sdb_save_dwarf_function(Function *dwarf_fcn, RList *variables, Sdb *sdb) {
 char *sname = r_str_sanitize_sdb_key (dwarf_fcn->name);
 sdb_set (sdb, sname, "fcn", 0);

 char *addr_key = r_str_newf ("fcn.%s.addr", sname);
 char *addr_val = r_str_newf ("0x%" PFMT64x "", dwarf_fcn->addr);
 sdb_set (sdb, addr_key, addr_val, 0);
 free (addr_key);
 free (addr_val);


 char *name_key = r_str_newf ("fcn.%s.name", sname);
 char *name_val = r_str_newf ("%s", dwarf_fcn->name);
 sdb_set (sdb, name_key, name_val, 0);
 free (name_key);
 free (name_val);

 char *signature_key = r_str_newf ("fcn.%s.sig", sname);
 sdb_set (sdb, signature_key, dwarf_fcn->signature, 0);
 free (signature_key);

 RStrBuf vars;
 r_strbuf_init (&vars);
 RListIter *iter;
 Variable *var;
 r_list_foreach (variables, iter, var) {
  if (!var->location) {

   continue;
  }
  char *key = NULL;
  char *val = NULL;
  switch (var->location->kind) {
  case LOCATION_BP: {


   r_strbuf_appendf (&vars, "%s,", var->name);
   key = r_str_newf ("fcn.%s.var.%s", sname, var->name);
   val = r_str_newf ("%s,%" PFMT64d ",%s", "b", var->location->offset, var->type);
   sdb_set (sdb, key, val, 0);
   break;
  }
  case LOCATION_SP: {


   r_strbuf_appendf (&vars, "%s,", var->name);
   key = r_str_newf ("fcn.%s.var.%s", sname, var->name);
   val = r_str_newf ("%s,%" PFMT64d ",%s", "s", var->location->offset, var->type);
   sdb_set (sdb, key, val, 0);
   break;
  }
  case LOCATION_GLOBAL: {


   r_strbuf_appendf (&vars, "%s,", var->name);
   key = r_str_newf ("fcn.%s.var.%s", sname, var->name);
   val = r_str_newf ("%s,%" PFMT64u ",%s", "g", var->location->address, var->type);
   sdb_set (sdb, key, val, 0);
   break;
  }
  case LOCATION_REGISTER: {


   r_strbuf_appendf (&vars, "%s,", var->name);
   key = r_str_newf ("fcn.%s.var.%s", sname, var->name);
   val = r_str_newf ("%s,%s,%s", "r", var->location->reg_name, var->type);
   sdb_set (sdb, key, val, 0);
   break;
  }

  default:

   break;
  }
  free (key);
  free (val);
 }
 if (vars.len > 0) {
  r_strbuf_slice (&vars, 0, vars.len - 1);
 }
 char *vars_key = r_str_newf ("fcn.%s.vars", sname);
 char *vars_val = r_str_newf ("%s", r_strbuf_get (&vars));
 sdb_set (sdb, vars_key, vars_val, 0);
 free (vars_key);
 free (vars_val);
 r_strbuf_fini (&vars);
 free (sname);
}
# 1369 "project/radare2/libr/anal/dwarf_process.c"
static void parse_function(Context *ctx, ut64 idx) {
 const RBinDwarfDie *die = &ctx->all_dies[idx];

 Function fcn = { 0 };
 bool has_linkage_name = false;
 bool get_linkage_name = prefer_linkage_name (ctx->lang);
 RStrBuf ret_type;
 r_strbuf_init (&ret_type);
 if (find_attr_idx (die, DW_AT_declaration) != -1) {
  return;
 }
 size_t i;

 for (i = 0; i < die->count; i++) {
  RBinDwarfAttrValue *val = &die->attr_values[i];
  switch (die->attr_values[i].attr_name) {
  case DW_AT_name:
   if (!get_linkage_name || !has_linkage_name) {
    fcn.name = val->string.content;
   }
   break;
  case DW_AT_linkage_name:
  case DW_AT_MIPS_linkage_name:
   fcn.name = val->string.content;
   has_linkage_name = true;
   break;
  case DW_AT_low_pc:
  case DW_AT_entry_pc:
   fcn.addr = val->address;
   break;
  case DW_AT_specification:
  {
   RBinDwarfDie *spec_die = ht_up_find (ctx->die_map, val->reference, NULL);
   if (spec_die) {
    fcn.name = get_specification_die_name (spec_die);
    get_spec_die_type (ctx, spec_die, &ret_type);
   }
   break;
  }
  case DW_AT_type:
   parse_type (ctx, val->reference, &ret_type, NULL, NULL);
   break;
  case DW_AT_virtuality:
   fcn.is_method = true;
   fcn.is_virtual = true;
   break;
  case DW_AT_object_pointer:
   fcn.is_method = true;
   break;
  case DW_AT_vtable_elem_location:
   fcn.is_method = true;
   fcn.vtable_addr = 0;
   break;
  case DW_AT_accessibility:
   fcn.is_method = true;
   fcn.access = (ut8)val->uconstant;
   break;
  case DW_AT_external:
   fcn.is_external = true;
   break;
  case DW_AT_trampoline:
   fcn.is_trampoline = true;
   break;
  case DW_AT_ranges:
  case DW_AT_high_pc:
  default:
   break;
  }
 }

 if (!fcn.name || !fcn.addr) {
  goto cleanup;
 }
 RStrBuf args;
 r_strbuf_init (&args);

 RList *variables = r_list_new ();
 parse_function_args_and_vars (ctx, idx, &args, variables);

 if (ret_type.len == 0) {
  r_strbuf_append (&ret_type, "void");
 }
 r_warn_if_fail (ctx->lang);
 char *new_name = ctx->anal->binb.demangle
  ? ctx->anal->binb.demangle (NULL, ctx->lang, fcn.name, fcn.addr, false): NULL;
 fcn.name = new_name ? new_name : strdup (fcn.name);
 fcn.signature = r_str_newf ("%s %s(%s);", r_strbuf_get (&ret_type), fcn.name, r_strbuf_get (&args));
 sdb_save_dwarf_function (&fcn, variables, ctx->sdb);

 free ((char *)fcn.signature);
 free ((char *)fcn.name);

 RListIter *iter;
 Variable *var;
 r_list_foreach (variables, iter, var) {
  variable_free (var);
 }
 r_list_free (variables);
 r_strbuf_fini (&args);
cleanup:
 r_strbuf_fini (&ret_type);
}







static const char *parse_comp_unit_lang(const RBinDwarfDie *die) {
 r_return_val_if_fail (die, NULL);

 int idx = find_attr_idx (die, DW_AT_language);
 const char *lang = "cxx";
 if (idx == -1) {

  return lang;
 }
 const RBinDwarfAttrValue *val = &die->attr_values[idx];
 r_warn_if_fail (val->kind == DW_AT_KIND_CONSTANT);

 switch (val->uconstant)
 {
 case DW_LANG_Java:
  return "java";
 case DW_LANG_ObjC:

 case DW_LANG_ObjC_plus_plus:
  return "objc";
 case DW_LANG_D:
  return "dlang";
 case DW_LANG_Rust:
  return "rust";
 case DW_LANG_C_plus_plus:
 case DW_LANG_C_plus_plus_14:

 case DW_LANG_Ada83:
 case DW_LANG_Cobol74:
 case DW_LANG_Cobol85:
 case DW_LANG_Fortran77:
 case DW_LANG_Fortran90:
 case DW_LANG_Pascal83:
 case DW_LANG_Modula2:
 case DW_LANG_Ada95:
 case DW_LANG_Fortran95:
 case DW_LANG_PLI:
 case DW_LANG_Python:
 case DW_LANG_Swift:
 case DW_LANG_Julia:
 case DW_LANG_Dylan:
 case DW_LANG_Fortran03:
 case DW_LANG_Fortran08:
 case DW_LANG_UPC:
 case DW_LANG_C:
 case DW_LANG_C89:
 case DW_LANG_C99:
 case DW_LANG_C11:
 default:
  return lang;
 }
 return lang;
}







static void parse_type_entry(Context *ctx, ut64 idx) {
 r_return_if_fail (ctx);

 const RBinDwarfDie *die = &ctx->all_dies[idx];
 switch (die->tag) {
 case DW_TAG_structure_type:
 case DW_TAG_union_type:
 case DW_TAG_class_type:
  parse_structure_type (ctx, idx);
  break;
 case DW_TAG_enumeration_type:
  parse_enum_type (ctx, idx);
  break;
 case DW_TAG_typedef:
  parse_typedef (ctx, idx);
  break;
 case DW_TAG_base_type:
  parse_atomic_type (ctx, idx);
  break;
 case DW_TAG_subprogram:
  parse_function (ctx, idx);
  break;
 case DW_TAG_compile_unit:

  ctx->lang = parse_comp_unit_lang (die);
 default:
  break;
 }
}
# 1575 "project/radare2/libr/anal/dwarf_process.c"
R_API void r_anal_dwarf_process_info(const RAnal *anal, RAnalDwarfContext *ctx) {
 r_return_if_fail (ctx && anal);
 Sdb *dwarf_sdb = sdb_ns (anal->sdb, "dwarf", 1);
 size_t i, j;
 const RBinDwarfDebugInfo *info = ctx->info;
 for (i = 0; i < info->count; i++) {
  RBinDwarfCompUnit *unit = &info->comp_units[i];
  Context dw_context = {
   .anal = anal,
   .all_dies = unit->dies,
   .count = unit->count,
   .die_map = info->lookup_table,
   .sdb = dwarf_sdb,
   .locations = ctx->loc,
   .lang = NULL
  };
  for (j = 0; j < unit->count; j++) {
   parse_type_entry (&dw_context, j);
  }
 }
}

bool filter_sdb_function_names(void *user, const char *k, const char *v) {
 (void) user;
 (void) k;
 return !strcmp (v, "fcn");
}
# 1610 "project/radare2/libr/anal/dwarf_process.c"
R_API void r_anal_dwarf_integrate_functions(RAnal *anal, RFlag *flags, Sdb *dwarf_sdb) {
 r_return_if_fail (anal && dwarf_sdb);


 SdbList *sdb_list = sdb_foreach_list_filter (dwarf_sdb, filter_sdb_function_names, false);
 SdbListIter *it;
 SdbKv *kv;

 ls_foreach (sdb_list, it, kv) {
  char *func_sname = kv->base.key;

  char *addr_key = r_str_newf ("fcn.%s.addr", func_sname);
  ut64 faddr = sdb_num_get (dwarf_sdb, addr_key, 0);
  free (addr_key);


  RAnalFunction *fcn = r_anal_get_function_at (anal, faddr);
  if (fcn) {

   char *real_name_key = r_str_newf ("fcn.%s.name", func_sname);
   char *real_name = sdb_get (dwarf_sdb, real_name_key, 0);
   free (real_name_key);

   char *dwf_name = r_str_newf ("dbg.%s", real_name);
   free (real_name);

   r_anal_function_rename (fcn, dwf_name);
   free (dwf_name);

   char *tmp = r_str_newf ("fcn.%s.sig", func_sname);
   char *fcnstr = sdb_get (dwarf_sdb, tmp, 0);
   free (tmp);

   r_meta_set_string (anal, R_META_TYPE_COMMENT, faddr, fcnstr);
   free (fcnstr);
  }
  char *var_names_key = r_str_newf ("fcn.%s.vars", func_sname);
  char *vars = sdb_get (dwarf_sdb, var_names_key, NULL);
  char *var_name;
  sdb_aforeach (var_name, vars) {
   char *var_key = r_str_newf ("fcn.%s.var.%s", func_sname, var_name);
   char *var_data = sdb_get (dwarf_sdb, var_key, NULL);
   if (!var_data) {
    goto loop_end;
   }
   char *extra = NULL;
   char *kind = sdb_anext (var_data, &extra);
   char *type = NULL;
   extra = sdb_anext (extra, &type);
   st64 offset = 0;
   if (*kind != 'r') {
    offset = strtol (extra, NULL, 10);
   }
   if (*kind == 'g') {
    char *global_name = r_str_newf ("global_%s", var_name);
    r_flag_unset_off (flags, offset);
    r_flag_set_next (flags, global_name, offset, 4);
    free (global_name);
   } else if (*kind == 's' && fcn) {
    r_anal_function_set_var (fcn, offset - fcn->maxstack, *kind, type, 4, false, var_name);
   } else if (*kind == 'r' && fcn) {
    RRegItem *i = r_reg_get (anal->reg, extra, -1);
    if (!i) {
     goto loop_end;
    }
    r_anal_function_set_var (fcn, i->index, *kind, type, 4, false, var_name);
   } else if (fcn) {
    r_anal_function_set_var (fcn, offset - fcn->bp_off, *kind, type, 4, false, var_name);
   }
   free (var_key);
   free (var_data);
  loop_end:
   sdb_aforeach_next (var_name);
  }
  free (var_names_key);
  free (vars);
 }
 ls_free (sdb_list);
}
