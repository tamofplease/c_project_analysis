# 1 "project/radare2/libr/anal/type_pdb.c"
#include <r_bin.h>
#include <r_core.h>
#include <r_anal.h>
#include "../bin/pdb/types.h"
#include "base_types.h"

static bool is_parsable_type(const ELeafType type) {
 return (type == eLF_STRUCTURE ||
  type == eLF_UNION ||
  type == eLF_ENUM ||
  type == eLF_CLASS);
}







static char *create_type_name_from_offset(ut64 offset) {
 int offset_length = snprintf (NULL, 0, "type_0x%" PFMT64x, offset);
 char *str = malloc (offset_length + 1);
 snprintf (str, offset_length + 1, "type_0x%" PFMT64x, offset);
 return str;
}
# 34 "project/radare2/libr/anal/type_pdb.c"
static RAnalStructMember *parse_member(STypeInfo *type_info, RList *types) {
 r_return_val_if_fail (type_info && types, NULL);
 if (type_info->leaf_type != eLF_MEMBER) {
  return NULL;
 }
 r_return_val_if_fail (type_info->get_name &&
   type_info->get_print_type && type_info->get_val, NULL);
 char *name = NULL;
 char *type = NULL;
 int offset = 0;

 type_info->get_val (type_info, &offset);
 type_info->get_name (type_info, &name);
 type_info->get_print_type (type_info, &type);
 RAnalStructMember *member = R_NEW0 (RAnalStructMember);
 if (!member) {
  goto cleanup;
 }
 char *sname = r_str_sanitize_sdb_key (name);
 member->name = sname;
 member->type = strdup (type);
 member->offset = offset;
 return member;
cleanup:
 return NULL;
}
# 68 "project/radare2/libr/anal/type_pdb.c"
static RAnalEnumCase *parse_enumerate(STypeInfo *type_info, RList *types) {
 r_return_val_if_fail (type_info && types && type_info->leaf_type == eLF_ENUMERATE, NULL);
 r_return_val_if_fail (type_info->get_val && type_info->get_name, NULL);

 char *name = NULL;
 int value = 0;

 type_info->get_val (type_info, &value);
 type_info->get_name (type_info, &name);
 RAnalEnumCase *cas = R_NEW0 (RAnalEnumCase);
 if (!cas) {
  goto cleanup;
 }
 char *sname = r_str_sanitize_sdb_key (name);
 cas->name = sname;
 cas->val = value;
 return cas;
cleanup:
 return NULL;
}
# 96 "project/radare2/libr/anal/type_pdb.c"
static void parse_enum(const RAnal *anal, SType *type, RList *types) {
 r_return_if_fail (anal && type && types);
 STypeInfo *type_info = &type->type_data;

 r_return_if_fail (type_info->get_members &&
  type_info->get_name &&
  type_info->get_utype);

 RAnalBaseType *base_type = r_anal_base_type_new (R_ANAL_BASE_TYPE_KIND_ENUM);
 if (!base_type) {
  return;
 }

 char *name = NULL;
 type_info->get_name (type_info, &name);
 bool to_free_name = false;
 if (!name) {
  name = create_type_name_from_offset (type->tpi_idx);
  to_free_name = true;
 }
 type_info->get_utype (type_info, (void **)&type);
 int size = 0;
 char *type_name = NULL;
 if (type && type->type_data.type_info) {
  SLF_SIMPLE_TYPE *base_type = type->type_data.type_info;
  type_name = base_type->type;
  size = base_type->size;
 }
 RList *members;
 type_info->get_members (type_info, &members);

 RListIter *it = r_list_iterator (members);
 while (r_list_iter_next (it)) {
  STypeInfo *member_info = r_list_iter_get (it);
  RAnalEnumCase *enum_case = parse_enumerate (member_info, types);
  if (!enum_case) {
   continue;
  }
  void *element = r_vector_push (&base_type->struct_data.members, enum_case);
  if (!element) {
   goto cleanup;
  }
 }
 char *sname = r_str_sanitize_sdb_key (name);
 base_type->name = sname;
 base_type->size = size;
 base_type->type = strdup (type_name);

 r_anal_save_base_type (anal, base_type);
cleanup:
 if (to_free_name) {
  R_FREE (name);
 }
 r_anal_base_type_free (base_type);
 return;
}
# 160 "project/radare2/libr/anal/type_pdb.c"
static void parse_structure(const RAnal *anal, SType *type, RList *types) {
 r_return_if_fail (anal && type && types);
 STypeInfo *type_info = &type->type_data;

 r_return_if_fail (type_info->get_members &&
  type_info->is_fwdref &&
  type_info->get_name &&
  type_info->get_val);

 RAnalBaseType *base_type = r_anal_base_type_new (R_ANAL_BASE_TYPE_KIND_STRUCT);
 if (!base_type) {
  return;
 }

 char *name = NULL;
 type_info->get_name (type_info, &name);
 bool to_free_name = false;
 if (!name) {
  name = create_type_name_from_offset (type->tpi_idx);
  to_free_name = true;
 }
 int size;
 type_info->get_val (type_info, &size);

 RList *members;
 type_info->get_members (type_info, &members);

 RListIter *it = r_list_iterator (members);
 while (r_list_iter_next (it)) {
  STypeInfo *member_info = r_list_iter_get (it);
  RAnalStructMember *struct_member = parse_member (member_info, types);
  if (!struct_member) {
   continue;
  }
  void *element = r_vector_push (&base_type->struct_data.members, struct_member);
  if (!element) {
   goto cleanup;
  }
 }
 if (type_info->leaf_type == eLF_STRUCTURE || type_info->leaf_type == eLF_CLASS) {
  base_type->kind = R_ANAL_BASE_TYPE_KIND_STRUCT;
 } else {
  base_type->kind = R_ANAL_BASE_TYPE_KIND_UNION;
 }
 char *sname = r_str_sanitize_sdb_key (name);
 base_type->name = sname;
 base_type->size = size;
 r_anal_save_base_type (anal, base_type);
cleanup:
 if (to_free_name) {
  R_FREE (name);
 }
 r_anal_base_type_free (base_type);
 return;
}
# 223 "project/radare2/libr/anal/type_pdb.c"
static void parse_type (const RAnal *anal, SType *type, RList *types) {
 r_return_if_fail (anal && type && types);

 int is_forward_decl;
 if (type->type_data.is_fwdref) {
  type->type_data.is_fwdref (&type->type_data, &is_forward_decl);
  if (is_forward_decl) {
   return;
  }
 }
 switch (type->type_data.leaf_type) {
 case eLF_CLASS:
 case eLF_STRUCTURE:
 case eLF_UNION:
  parse_structure (anal, type, types);
  break;
 case eLF_ENUM:
  parse_enum (anal, type, types);
  break;
 default:


  eprintf ("Unknown type record");
  break;
 }
}







R_API void r_parse_pdb_types(const RAnal *anal, const RPdb *pdb) {
 r_return_if_fail (anal && pdb);
 RList *plist = pdb->pdb_streams;

 STpiStream *tpi_stream = r_list_get_n (plist, ePDB_STREAM_TPI);
 if (!tpi_stream) {
  return;
 }

 RListIter *iter = r_list_iterator (tpi_stream->types);
 while (r_list_iter_next (iter)) {
  SType *type = r_list_iter_get (iter);
  if (type && is_parsable_type (type->type_data.leaf_type)) {
   parse_type (anal, type, tpi_stream->types);
  }
 }
}
