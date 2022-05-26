# 1 "project/radare2/libr/reg/profile.c"


#include <r_reg.h>
#include <r_util.h>
#include <r_lib.h>

static const char *parse_alias(RReg *reg, char **tok, const int n) {
 if (n == 2) {
  int role = r_reg_get_name_idx (tok[0] + 1);
  return r_reg_set_name (reg, role, tok[1])
   ? NULL
   : "Invalid alias";
 }
 return "Invalid syntax";
}




static ut64 parse_size(char *s, char **end) {
 if (*s == '.') {
  return strtoul (s + 1, end, 10);
 }
 char *has_dot = strchr (s, '.');
 if (has_dot) {
  *has_dot++ = 0;
  ut64 a = strtoul (s, end, 0) << 3;
  ut64 b = strtoul (has_dot, end, 0);
  return a + b;
 }
 return strtoul (s, end, 0) << 3;
}


static const char *parse_def(RReg *reg, char **tok, const int n) {
 char *end;
 int type, type2;

 if (n != 5 && n != 6) {
  return "Invalid syntax: Wrong number of columns";
 }
 char *p = strchr (tok[0], '@');
 if (p) {
  char *tok0 = strdup (tok[0]);
  char *at = tok0 + (p - tok[0]);
  *at++ = 0;
  type = r_reg_type_by_name (tok0);
  type2 = r_reg_type_by_name (at);
  free (tok0);
 } else {
  type2 = type = r_reg_type_by_name (tok[0]);

  if (type == R_REG_TYPE_FLG) {
   type2 = R_REG_TYPE_GPR;
  }
 }
 if (type < 0 || type2 < 0) {
  return "Invalid register type";
 }
#if 1
 if (r_reg_get (reg, tok[1], R_REG_TYPE_ALL)) {
  eprintf ("Ignoring duplicated register definition '%s'\n", tok[1]);
  return NULL;

 }
#endif

 RRegItem *item = R_NEW0 (RRegItem);
 if (!item) {
  return "Unable to allocate memory";
 }

 item->type = type;
 item->name = strdup (tok[1]);

 item->size = parse_size (tok[2], &end);
 if (*end != '\0' || !item->size) {
  r_reg_item_free (item);
  return "Invalid size";
 }
 if (!strcmp (tok[3], "?")) {
  item->offset = -1;
 } else {
  item->offset = parse_size (tok[3], &end);
 }
 if (*end != '\0') {
  r_reg_item_free (item);
  return "Invalid offset";
 }
 item->packed_size = parse_size (tok[4], &end);
 if (*end != '\0') {
  r_reg_item_free (item);
  return "Invalid packed size";
 }


 reg->bits |= item->size;


 if (n == 6) {
  if (*tok[5] == '#') {

   item->comment = strdup (tok[5] + 1);
  } else {
   item->flags = strdup (tok[5]);
  }
 }

 item->arena = type2;
 if (!reg->regset[type2].regs) {
  reg->regset[type2].regs = r_list_newf ((RListFree)r_reg_item_free);
 }
 r_list_append (reg->regset[type2].regs, item);
 if (!reg->regset[type2].ht_regs) {
  reg->regset[type2].ht_regs = ht_pp_new0 ();
 }
 ht_pp_insert (reg->regset[type2].ht_regs, item->name, item);


 if (item->offset + item->size > reg->size) {
  reg->size = item->offset + item->size;
 }

 reg->regset[type2].maskregstype |= ((int)1 << type);
 return NULL;
}

#define PARSER_MAX_TOKENS 8
R_API bool r_reg_set_profile_string(RReg *reg, const char *str) {
 char *tok[PARSER_MAX_TOKENS];
 char tmp[128];
 int i, j, l;
 const char *p = str;

 r_return_val_if_fail (reg && str, false);
 if (R_STR_ISEMPTY (str)) {
  return true;
 }


 if (reg->reg_profile_str && !strcmp (reg->reg_profile_str, str)) {


  return true;
 }


 r_reg_arena_pop (reg);

 r_reg_free_internal (reg, true);
 r_reg_arena_shrink (reg);


 reg->reg_profile_str = strdup (str);


 l = 0;
 bool have_a0 = false;

 do {

  l++;

  if (*p == '#') {
   const char *q = p;
   while (*q != '\n') {
    q++;
   }
   reg->reg_profile_cmt = r_str_appendlen (
    reg->reg_profile_cmt, p, (int)(q - p) + 1);
   p = q;
   continue;
  }
  j = 0;

  while (*p) {

   while (*p == ' ' || *p == '\t') {
    p++;
   }

   if (*p == '\n') {
    break;
   }
   if (*p == '#') {

    for (i = 0; *p != '\n'; p++) {
     if (i < sizeof (tmp) - 1) {
      tmp[i++] = *p;
     }
    }
   } else {


    for (i = 0; isgraph ((const unsigned char)*p) && i < sizeof (tmp) - 1;) {
     tmp[i++] = *p++;
    }
   }
   tmp[i] = '\0';

   if (j > PARSER_MAX_TOKENS - 1) {
    break;
   }

   tok[j++] = strdup (tmp);
  }

  if (j) {

   char *first = tok[0];

   if (!strncmp (first, "=RS", 3)) {
    reg->bits_default = atoi (tok[1]);

    for (i = 0; i < j; i++) {
     free (tok[i]);
    }
   } else {
    const char *r = (*first == '=')
     ? parse_alias (reg, tok, j)
     : parse_def (reg, tok, j);
    if (!strncmp (first, "=A0", 3)) {
     have_a0 = true;
    }

    for (i = 0; i < j; i++) {
     free (tok[i]);
    }

    if (r) {
     eprintf ("%s: Parse error @ line %d (%s)\n",
       __FUNCTION__, l, r);


     r_reg_free_internal (reg, false);
     r_reg_init (reg);
     return false;
    }
   }
  }
 } while (*p++);
 if (!have_a0) {
  eprintf ("Warning: =A0 not defined\n");


 }
 reg->size = 0;
 for (i = 0; i < R_REG_TYPE_LAST; i++) {
  RRegSet *rs = &reg->regset[i];

  if (rs && rs->arena) {
   reg->size += rs->arena->size;
  }
 }





 r_reg_fit_arena (reg);

 r_reg_arena_push (reg);
 r_reg_reindex (reg);

 return true;
}


R_API bool r_reg_set_profile(RReg *reg, const char *profile) {
 r_return_val_if_fail (reg && profile, false);
 char *str = r_file_slurp (profile, NULL);
 if (!str) {
  char *base = r_sys_getenv (R_LIB_ENV);
  if (base) {
   char *file = r_str_append (base, profile);
   str = r_file_slurp (file, NULL);
   free (file);
  }
 }
 if (!str) {
  eprintf ("r_reg_set_profile: Cannot find '%s'\n", profile);
  return false;
 }
 bool ret = r_reg_set_profile_string (reg, str);
 free (str);
 return ret;
}

static char *gdb_to_r2_profile(const char *gdb) {
 r_return_val_if_fail (gdb, NULL);
 RStrBuf *sb = r_strbuf_new ("");
 if (!sb) {
  return NULL;
 }
 char *ptr1, *gptr, *gptr1;
 char name[16], groups[128], type[16];
 const int all = 1, gpr = 2, save = 4, restore = 8, float_ = 16,
    sse = 32, vector = 64, system = 128, mmx = 256;
 int number, rel, offset, size, type_bits, ret;


 const char *ptr = r_str_trim_head_ro (gdb);


 if (r_str_startswith (ptr, "Name")) {
  if (!(ptr = strchr (ptr, '\n'))) {
   return NULL;
  }
  ptr++;
 }
 for (;;) {

  while (isspace ((ut8)*ptr)) {
   ptr++;
  }
  if (!*ptr) {
   break;
  }
  if ((ptr1 = strchr (ptr, '\n'))) {
   *ptr1 = '\0';
  } else {
   eprintf ("Could not parse line: %s (missing \\n)\n", ptr);
   r_strbuf_free (sb);
   return false;
  }
  ret = sscanf (ptr, " %s %d %d %d %d %s %s", name, &number, &rel,
   &offset, &size, type, groups);

  if (ret < 6) {
   if (*ptr != '*') {
    eprintf ("Could not parse line: %s\n", ptr);
    r_strbuf_free (sb);
    return false;
   }
   ptr = ptr1 + 1;
   continue;
  }

  if (r_str_startswith (name, "''")) {
   if (!ptr1) {
    break;
   }
   ptr = ptr1 + 1;
   continue;
  }

  if (size == 0) {
   if (!ptr1) {
    break;
   }
   ptr = ptr1 + 1;
   continue;
  }

  gptr = groups;
  type_bits = 0;
  while (1) {
   if ((gptr1 = strchr (gptr, ','))) {
    *gptr1 = '\0';
   }
   if (r_str_startswith (gptr, "general")) {
    type_bits |= gpr;
   } else if (r_str_startswith (gptr, "all")) {
    type_bits |= all;
   } else if (r_str_startswith (gptr, "save")) {
    type_bits |= save;
   } else if (r_str_startswith (gptr, "restore")) {
    type_bits |= restore;
   } else if (r_str_startswith (gptr, "float")) {
    type_bits |= float_;
   } else if (r_str_startswith (gptr, "sse")) {
    type_bits |= sse;
   } else if (r_str_startswith (gptr, "mmx")) {
    type_bits |= mmx;
   } else if (r_str_startswith (gptr, "vector")) {
    type_bits |= vector;
   } else if (r_str_startswith (gptr, "system")) {
    type_bits |= system;
   }
   if (!gptr1) {
    break;
   }
   gptr = gptr1 + 1;
  }

  if (!*type) {
   if (!ptr1) {
    break;
   }
   ptr = ptr1 + 1;
   continue;
  }

  if (!(type_bits & sse) && !(type_bits & float_)) {
   type_bits |= gpr;
  }

  r_strbuf_appendf (sb, "%s\t%s\t.%d\t%d\t0\n",

   ((type_bits & mmx) || (type_bits & float_) || (type_bits & sse)) ? "fpu" : "gpr",
   name, size * 8, offset);

  if (!ptr1) {
   break;
  }
  ptr = ptr1 + 1;
  continue;
 }
 return r_strbuf_drain (sb);
}

R_API char *r_reg_parse_gdb_profile(const char *profile_file) {
 char *str = NULL;
 if (!(str = r_file_slurp (profile_file, NULL))) {
  char *base = r_sys_getenv (R_LIB_ENV);
  if (base) {
   char *file = r_str_appendf (base, R_SYS_DIR "%s", profile_file);
   if (file) {
    str = r_file_slurp (file, NULL);
    free (file);
   }
  }
 }
 if (str) {
  char *ret = gdb_to_r2_profile (str);
  free (str);
  return ret;
 }
 eprintf ("r_reg_parse_gdb_profile: Cannot find '%s'\n", profile_file);
 return NULL;
}

R_API char *r_reg_profile_to_cc(RReg *reg) {
 const char *r0 = r_reg_get_name_by_type (reg, "R0");
 const char *a0 = r_reg_get_name_by_type (reg, "A0");
 const char *a1 = r_reg_get_name_by_type (reg, "A1");
 const char *a2 = r_reg_get_name_by_type (reg, "A2");
 const char *a3 = r_reg_get_name_by_type (reg, "A3");

 if (!r0) {
  r0 = a0;
 }
 if (!r0) {


  return NULL;
 }
 if (a3 && a2 && a1) {
  return r_str_newf ("%s reg(%s, %s, %s, %s)", r0, a0, a1, a2, a3);
 }
 if (a2 && a1) {
  return r_str_newf ("%s reg(%s, %s, %s)", r0, a0, a1, a2);
 }
 if (a1) {
  return r_str_newf ("%s reg(%s, %s)", r0, a0, a1);
 }
 return r_str_newf ("%s reg(%s)", r0, a0);
}
