# 1 "project/radare2/libr/parse/c/tccgen.c"
# 21 "project/radare2/libr/parse/c/tccgen.c"
#include "tcc.h"

#define TCC_ERR(...) do { \
 tcc_error (__VA_ARGS__); \
 return; \
} while (0)

ST_DATA char **tcc_cb_ptr;
# 38 "project/radare2/libr/parse/c/tccgen.c"
ST_DATA int anon_sym = SYM_FIRST_ANOM, loc;
ST_DATA Sym *sym_free_first;
ST_DATA void **sym_pools;
ST_DATA int nb_sym_pools;

static size_t arraysize = 0;
static const char *global_symname = NULL;
static const char *global_type = NULL;

ST_DATA Sym *global_stack;
ST_DATA Sym *local_stack;
ST_DATA Sym *define_stack;

ST_DATA bool const_wanted = 0;
ST_DATA int global_expr;
#if 0
ST_DATA bool nocode_wanted;
ST_DATA char *funcname;
ST_DATA char *dir_name;
#endif

ST_DATA CType char_pointer_type, func_old_type;
ST_DATA CType int8_type, int16_type, int32_type, int64_type, size_type;


static inline CType *pointed_type(CType *type);
static int is_compatible_types(CType *type1, CType *type2);
static int parse_btype(CType *type, AttributeDef *ad);
static void type_decl(CType *type, AttributeDef *ad, int *v, int td);
static void parse_expr_type(CType *type);
static void decl_initializer(CType *type, unsigned long c, int first, int size_only);
static void decl_initializer_alloc(CType *type, AttributeDef *ad, int r, int has_init, int v, char *asm_label, int scope);
static int decl0(int l, int is_for_loop_init);
static void expr_eq(void);
static void unary_type(CType *type);
static int is_compatible_parameter_types(CType *type1, CType *type2);
static void expr_type(CType *type);


ST_INLN bool is_structured(CType *t) {
 return (t->t & VT_BTYPE) == VT_STRUCT || (t->t & VT_BTYPE) == VT_UNION;
}

ST_INLN bool is_struct(CType *t) {
 return (t->t & VT_BTYPE) == VT_STRUCT;
}

ST_INLN bool is_union(CType *t) {
 return (t->t & VT_BTYPE) == VT_UNION;
}

ST_INLN bool is_enum(CType *t) {
 return (t->t & VT_BTYPE) == VT_ENUM;
}

ST_INLN bool is_float(int t) {
 int bt;
 bt = t & VT_BTYPE;
 return bt == VT_LDOUBLE || bt == VT_DOUBLE || bt == VT_FLOAT || bt == VT_QFLOAT;
}

ST_INLN bool not_structured(CType *t) {
 return (t->t & VT_BTYPE) != VT_STRUCT && (t->t & VT_BTYPE) != VT_UNION;
}


#if 0



ST_FUNC int ieee_finite(double d) {
 int *p = (int *) &d;
 return ((unsigned) ((p[1] | 0x800fffff) + 1)) >> 31;
}
#endif

ST_FUNC void test_lvalue(void) {
 if (!(vtop->r & VT_LVAL)) {
  expect ("lvalue");
 }
}



static Sym *__sym_malloc(void) {
 Sym *sym_pool, *sym, *last_sym;
 int i;
 int sym_pool_size = SYM_POOL_NB * sizeof(Sym);
 sym_pool = malloc (sym_pool_size);
 memset (sym_pool, 0, sym_pool_size);
 dynarray_add (&sym_pools, &nb_sym_pools, sym_pool);

 last_sym = sym_free_first;
 sym = sym_pool;
 for (i = 0; i < SYM_POOL_NB; i++) {
  sym->next = last_sym;
  last_sym = sym;
  sym++;
 }
 sym_free_first = last_sym;
 return last_sym;
}

static inline Sym *sym_malloc(void) {
 Sym *sym;
 sym = sym_free_first;
 if (!sym) {
  sym = __sym_malloc ();
 }
 sym_free_first = sym->next;
 return sym;
}

ST_INLN void sym_free(Sym *sym) {
 sym->next = sym_free_first;
 free (sym->asm_label);
 sym_free_first = sym;
}


ST_FUNC Sym *sym_push2(Sym **ps, int v, int t, long long c) {
 Sym *s;
#if 0
 if (ps == &local_stack) {
  for (s = *ps; s && s != scope_stack_bottom; s = s->prev) {
   if (!(v & SYM_FIELD) && (v & ~SYM_STRUCT) < SYM_FIRST_ANOM && s->v == v) {
    tcc_error ("incompatible types for redefinition of '%s'",
     get_tok_str (v, NULL));
    return NULL;
   }
  }
 }
#endif


 s = sym_malloc ();
 s->asm_label = NULL;
 s->v = v;
 s->type.t = t;
 s->type.ref = NULL;
 s->c = c;
 s->next = NULL;

 s->prev = *ps;
 *ps = s;
 return s;
}



ST_FUNC Sym *sym_find2(Sym *s, int v) {
 while (s) {
  if (s->v == v) {
   return s;
  }
  s = s->prev;
 }
 return NULL;
}


ST_INLN Sym *struct_find(int v) {
 v -= TOK_IDENT;
 if ((unsigned) v >= (unsigned) (tok_ident - TOK_IDENT)) {
  return NULL;
 }
 return table_ident[v]->sym_struct;
}


ST_INLN Sym *sym_find(int v) {
 v -= TOK_IDENT;
 if ((unsigned) v >= (unsigned) (tok_ident - TOK_IDENT)) {
  return NULL;
 }
 return table_ident[v]->sym_identifier;
}



int tcc_sym_push(char *typename, int typesize, int meta) {
 CType *new_type = (CType *) malloc (sizeof(CType));
 if (!new_type) {
  return 0;
 }
 new_type->ref = sym_malloc ();
 new_type->t = meta;

 if (!sym_push (0, new_type, 0, 0)) {
  return 0;
 }

 free (new_type);
 return 1;
}

void dump_type(CType *type, int depth) {
 if (depth <= 0) {
  return;
 }
 eprintf ("------------------------\n");
 int bt = type->t & VT_BTYPE;
 eprintf ("BTYPE = %d ", bt);
 switch (bt) {
 case VT_UNION: eprintf ("[UNION]\n");
  break;
 case VT_STRUCT: eprintf ("[STRUCT]\n");
  break;
 case VT_PTR: eprintf ("[PTR]\n");
  break;
 case VT_ENUM: eprintf ("[ENUM]\n");
  break;
 case VT_INT64: eprintf ("[INT64_T]\n");
  break;
 case VT_INT32: eprintf ("[INT32_T]\n");
  break;
 case VT_INT16: eprintf ("[INT16_T]\n");
  break;
 case VT_INT8: eprintf ("[INT8_T]\n");
  break;
 default:
  eprintf ("\n");
  break;
 }
 if (type->ref) {
  eprintf ("v = %d\n", type->ref->v);
  char *varstr = NULL;
  varstr = get_tok_str (type->ref->v, NULL);
  if (varstr) {
   eprintf ("var = %s\n", varstr);
  }
  if (type->ref->asm_label) {
   eprintf ("asm_label = %s\n", type->ref->asm_label);
  }
  eprintf ("r = %d\n", type->ref->r);
  eprintf ("associated type:\n");

 }
}


ST_FUNC Sym *sym_push(int v, CType *type, int r, long long c) {
 Sym *s, **ps;
 TokenSym *ts;

 if (local_stack) {
  ps = &local_stack;
 } else {
  ps = &global_stack;
 }

 s = sym_push2 (ps, v, type->t, c);
 if (!s) {
  return NULL;
 }
 s->type.ref = type->ref;
 s->r = r;


 if (!(v & SYM_FIELD) && (v & ~SYM_STRUCT) < SYM_FIRST_ANOM) {
  int i = (v & ~SYM_STRUCT);
  if (i < TOK_IDENT) {
   return NULL;
  }


  ts = table_ident[(v & ~SYM_STRUCT) - TOK_IDENT];
  if (v & SYM_STRUCT) {
   ps = &ts->sym_struct;
  } else {
   ps = &ts->sym_identifier;
  }
  s->prev_tok = *ps;
  *ps = s;
 }
 return s;
}

#if 1

ST_FUNC Sym *global_identifier_push(int v, int t, long long c) {
 Sym *s, **ps;
 s = sym_push2 (&global_stack, v, t, c);

 if (s && v < SYM_FIRST_ANOM) {
  int i = (v & ~SYM_STRUCT);
  if (i < TOK_IDENT) {
   eprintf ("Not found\n");
   return NULL;
  }
  ps = &table_ident[i - TOK_IDENT]->sym_identifier;


  while (*ps) {
   ps = &(*ps)->prev_tok;
  }
  s->prev_tok = NULL;
  *ps = s;
 }
 return s;
}
#endif


ST_FUNC void sym_pop(Sym **ptop, Sym *b) {
 Sym *s, *ss, **ps;
 TokenSym *ts;
 int v;
 if (!b) {
  return;
 }

 s = *ptop;
 while (s != b) {
  ss = s->prev;
  v = s->v;


  if (!(v & SYM_FIELD) && (v & ~SYM_STRUCT) < SYM_FIRST_ANOM) {
   int i = (v & ~SYM_STRUCT);
   if (i < TOK_IDENT) {
    eprintf ("Not found\n");
    return;
   }
   ts = table_ident[i - TOK_IDENT];
   if (v & SYM_STRUCT) {
    ps = &ts->sym_struct;
   } else {
    ps = &ts->sym_identifier;
   }
   *ps = s->prev_tok;
  }
  sym_free (s);
  s = ss;
 }
 *ptop = b;
}

static void weaken_symbol(Sym *sym) {
 sym->type.t |= VT_WEAK;
}




static void vsetc(CType *type, int r, CValue *vc) {
 if (vtop >= vstack + (VSTACK_SIZE - 1)) {
  TCC_ERR ("memory full");
 }
 vtop++;
 vtop->type = *type;
 vtop->r = r;
 vtop->r2 = VT_CONST;
 vtop->c = *vc;
}


void vpush(CType *type) {
 CValue cval = { 0 };
 vsetc (type, VT_CONST, &cval);
}


ST_FUNC void vpushi(int v) {
 CValue cval = { 0 };
 cval.i = v;
 vsetc (&int32_type, VT_CONST, &cval);
}


static void vpushs(long long v) {
 CValue cval;
 if (PTR_SIZE == 4) {
  cval.i = (int) v;
 } else {
  cval.ull = v;
 }
 vsetc (&size_type, VT_CONST, &cval);
}


void vpush64(int ty, unsigned long long v) {
 CValue cval;
 CType ctype;
 ctype.t = ty;
 ctype.ref = NULL;
 cval.ull = v;
 vsetc (&ctype, VT_CONST, &cval);
}


ST_FUNC void vpushll(long long v) {
 CValue cval;
 cval.ll = v;
 vsetc (&int64_type, VT_CONST, &cval);
}

ST_FUNC void vset(CType *type, int r, int v) {
 CValue cval;

 cval.i = v;
 vsetc (type, r, &cval);
}

static void vseti(int r, int v) {
 CType type = { 0 };
 type.t = VT_INT32;
 type.ref = NULL;
 vset (&type, r, v);
}

ST_FUNC void vswap(void) {
 SValue tmp;



 tmp = vtop[0];
 vtop[0] = vtop[-1];
 vtop[-1] = tmp;





}

ST_FUNC void vpushv(SValue *v) {
 if (vtop >= vstack + (VSTACK_SIZE - 1)) {
  TCC_ERR ("memory full");
 }
 vtop++;
 *vtop = *v;
}

static void vdup(void) {
 vpushv (vtop);
}


static void gaddrof(void) {
 vtop->r &= ~VT_LVAL;

 if ((vtop->r & VT_VALMASK) == VT_LLOCAL) {
  vtop->r = (vtop->r & ~(VT_VALMASK | VT_LVAL_TYPE)) | VT_LOCAL | VT_LVAL;
 }
}

static int pointed_size(CType *type) {
 int align;
 return type_size (pointed_type (type), &align);
}

static inline int is_integer_btype(int bt) {
 return bt == VT_INT8 || bt == VT_INT16 || bt == VT_INT32 || bt == VT_INT64;
}


ST_FUNC int type_size(CType *type, int *a) {
 Sym *s;
 int bt;

 bt = type->t & VT_BTYPE;
 if (is_structured(type)) {

  s = type->ref;
  *a = s->r;
  return s->c;
 } else if (bt == VT_PTR) {
  if (type->t & VT_ARRAY) {
   int ts;

   s = type->ref;
   ts = type_size (&s->type, a);

   if (ts < 0 && s->c < 0) {
    ts = -ts;
   }

   return ts * s->c;
  } else {
   *a = PTR_SIZE;
   return PTR_SIZE;
  }
 } else if (bt == VT_LDOUBLE) {
  *a = LDOUBLE_ALIGN;
  return LDOUBLE_SIZE;
 } else if (bt == VT_DOUBLE || bt == VT_INT64) {
  if (!strncmp (tcc_state->arch, "x86", 3) && tcc_state->bits == 32) {
   if (!strncmp (tcc_state->os, "windows", 7)) {
    *a = 8;
   } else {
    *a = 4;
   }
  } else if (!strncmp (tcc_state->arch, "arm", 3)) {
# 540 "project/radare2/libr/parse/c/tccgen.c"
   *a = 8;
  } else {
   *a = 8;
  }
  return 8;
 } else if (bt == VT_ENUM) {


  *a = 8;
  return 8;
 } else if (bt == VT_INT32 || bt == VT_FLOAT) {
  *a = 4;
  return 4;
 } else if (bt == VT_INT16) {
  *a = 2;
  return 2;
 } else if (bt == VT_QLONG || bt == VT_QFLOAT) {
  *a = 8;
  return 16;
 } else {

  *a = 1;
  return 1;
 }
}


static inline CType *pointed_type(CType *type) {
 return &type->ref->type;
}


ST_FUNC void mk_pointer(CType *type) {
 Sym *s;
 s = sym_push (SYM_FIELD, type, 0, -1);
 if (!s) {
  return;
 }
 type->t = VT_PTR | (type->t & ~VT_TYPE);
 type->ref = s;
}


static int is_compatible_func(CType *type1, CType *type2) {
 Sym *s1, *s2;

 s1 = type1->ref;
 s2 = type2->ref;
 if (!is_compatible_types (&s1->type, &s2->type)) {
  return 0;
 }

 if (FUNC_CALL (s1->r) != FUNC_CALL (s2->r)) {
  return 0;
 }

 if (s1->c == FUNC_OLD || s2->c == FUNC_OLD) {
  return 1;
 }
 if (s1->c != s2->c) {
  return 0;
 }
 while (s1 != NULL) {
  if (s2 == NULL) {
   return 0;
  }
  if (!is_compatible_parameter_types (&s1->type, &s2->type)) {
   return 0;
  }
  s1 = s1->next;
  s2 = s2->next;
 }
 if (s2) {
  return 0;
 }
 return 1;
}






static int compare_types(CType *type1, CType *type2, int unqualified) {
 int t1 = type1->t & VT_TYPE;
 int t2 = type2->t & VT_TYPE;
 if (unqualified) {

  t1 &= ~(VT_CONSTANT | VT_VOLATILE);
  t2 &= ~(VT_CONSTANT | VT_VOLATILE);
 }

 if (t1 != t2) {
  return 0;
 }

 int bt1 = t1 & VT_BTYPE;
 if (bt1 == VT_PTR) {
  type1 = pointed_type (type1);
  type2 = pointed_type (type2);
  return is_compatible_types (type1, type2);
 } else if (bt1 == VT_STRUCT || bt1 == VT_UNION) {
  return type1->ref == type2->ref;
 } else if (bt1 == VT_FUNC) {
  return is_compatible_func (type1, type2);
 } else {
  return 1;
 }
}




static int is_compatible_types(CType *type1, CType *type2) {
 return compare_types (type1, type2, 0);
}



static int is_compatible_parameter_types(CType *type1, CType *type2) {
 return compare_types (type1, type2, 1);
}





static void type_to_str(char *buf, int buf_size, CType *type, const char *varstr) {
 int bt, v, t;
 Sym *s, *sa;
 char buf1[256];
 const char *tstr;
 t = type->t & VT_TYPE;
 bt = t & VT_BTYPE;
 buf[0] = '\0';
 if (t & VT_CONSTANT) {
  pstrcat (buf, buf_size, "const ");
 }
 if (t & VT_VOLATILE) {
  pstrcat (buf, buf_size, "volatile ");
 }
 switch (bt) {
 case VT_VOID:
  tstr = "void";
  goto add_tstr;
 case VT_BOOL:
  tstr = "bool";
  goto add_tstr;
 case VT_INT8:
  if (t & VT_UNSIGNED) {
   tstr = "uint8_t";
  } else {
   if (t & VT_CHAR) {
    tstr = "char";
   } else {
    tstr = "int8_t";
   }
  }
  goto add_tstr;
 case VT_INT16:
  if (t & VT_UNSIGNED) {
   tstr = "uint16_t";
  } else {
   tstr = "int16_t";
  }
  goto add_tstr;
 case VT_INT32:
  if (t & VT_UNSIGNED) {
   tstr = "uint32_t";
  } else {
   tstr = "int32_t";
  }
  goto add_tstr;
 case VT_LONG:
  tstr = "long";
  goto add_tstr;
 case VT_INT64:
  if (t & VT_UNSIGNED) {
   tstr = "uint64_t";
  } else {
   tstr = "int64_t";
  }
  goto add_tstr;
 case VT_FLOAT:
  tstr = "float";
  goto add_tstr;
 case VT_DOUBLE:
  tstr = "double";
  goto add_tstr;
 case VT_LDOUBLE:
  tstr = "long double";
add_tstr:
  pstrcat (buf, buf_size, tstr);
  if ((t & VT_UNSIGNED) && (bt != VT_INT8) &&
      (bt != VT_INT16) && (bt != VT_INT32) &&
      (bt != VT_INT64)) {
   pstrcat (buf, buf_size, "unsigned ");
  }
  break;
 case VT_ENUM:
 case VT_STRUCT:
 case VT_UNION:
  if (bt == VT_STRUCT) {
   tstr = "struct";
  } else if (bt == VT_UNION) {
   tstr = "union";
  } else {
   tstr = "enum";
  }
  pstrcat (buf, buf_size, tstr);
  v = type->ref->v & ~SYM_STRUCT;
  if (v < SYM_FIRST_ANOM) {
   pstrcat (buf, buf_size, " ");
   pstrcat (buf, buf_size, get_tok_str (v, NULL));
  }
  break;
 case VT_FUNC:
  s = type->ref;
  type_to_str (buf, buf_size, &s->type, varstr);
  pstrcat (buf, buf_size, "(");
  sa = s->next;
  while (sa != NULL) {
   type_to_str (buf1, sizeof(buf1), &sa->type, NULL);
   pstrcat (buf, buf_size, buf1);
   sa = sa->next;
   if (sa) {
    pstrcat (buf, buf_size, ", ");
   }
  }
  pstrcat (buf, buf_size, ")");
  goto no_var;
 case VT_PTR:
  s = type->ref;
  if (t & VT_ARRAY) {
   type_to_str (buf, buf_size, &s->type, NULL);
  } else {
   r_str_ncpy (buf1, "*", sizeof (buf1));
   if (varstr) {
    pstrcat (buf1, sizeof(buf1), varstr);
   }
   type_to_str (buf, buf_size, &s->type, buf1);
  }
  goto no_var;
 }
 if (varstr) {
  pstrcat (buf, buf_size, " ");
  pstrcat (buf, buf_size, varstr);
 }
no_var:
 ;
}
# 799 "project/radare2/libr/parse/c/tccgen.c"
static void parse_attribute(AttributeDef *ad) {
 int t;
 long long n;

 while (tok == TOK_ATTRIBUTE1 || tok == TOK_ATTRIBUTE2) {
  next ();
  skip ('(');
  skip ('(');
  while (tok != ')') {
   if (tok < TOK_IDENT) {
    expect ("attribute name");
   }
   t = tok;
   next ();
   switch (t) {
   case TOK_ALIAS1:
   case TOK_ALIAS2:
    skip ('(');
    if (tok != TOK_STR) {
     expect ("alias(\"target\")");
    }
    ad->alias_target =
         tok_alloc ((char *) tokc.cstr->data, tokc.cstr->size - 1)->tok;
    next ();
    skip (')');
    break;
   case TOK_ALIGNED1:
   case TOK_ALIGNED2:
    if (tok == '(') {
     next ();
     n = expr_const ();
     if (n <= 0 || (n & (n - 1)) != 0) {
      TCC_ERR ("alignment must be a positive power of two");
     }
     skip (')');
    } else {
     n = MAX_ALIGN;
    }
    ad->aligned = n;
    break;
   case TOK_PACKED1:
   case TOK_PACKED2:
    ad->packed = 1;
    break;
   case TOK_WEAK1:
   case TOK_WEAK2:
    ad->weak = 1;
    break;
   case TOK_UNUSED1:
   case TOK_UNUSED2:


    break;
   case TOK_NORETURN1:
   case TOK_NORETURN2:


    break;
   case TOK_CDECL1:
   case TOK_CDECL2:
   case TOK_CDECL3:
    ad->func_call = FUNC_CDECL;
    break;
   case TOK_STDCALL1:
   case TOK_STDCALL2:
   case TOK_STDCALL3:
    ad->func_call = FUNC_STDCALL;
    break;
#ifdef TCC_TARGET_I386
   case TOK_REGPARM1:
   case TOK_REGPARM2:
    skip ('(');
    n = expr_const ();
    if (n > 3) {
     n = 3;
    } else if (n < 0) {
     n = 0;
    }
    if (n > 0) {
     ad->func_call = FUNC_FASTCALL1 + n - 1;
    }
    skip (')');
    break;
   case TOK_FASTCALL1:
   case TOK_FASTCALL2:
   case TOK_FASTCALL3:
    ad->func_call = FUNC_FASTCALLW;
    break;
#endif
   case TOK_MODE:
    skip ('(');
    switch (tok) {
    case TOK_MODE_DI:
     ad->mode = VT_INT64 + 1;
     break;
    case TOK_MODE_HI:
     ad->mode = VT_INT16 + 1;
     break;
    case TOK_MODE_SI:
     ad->mode = VT_INT32 + 1;
     break;
    default:
     tcc_warning ("__mode__(%s) not supported\n", get_tok_str (tok, NULL));
     break;
    }
    next ();
    skip (')');
    break;
   case TOK_DLLEXPORT:
    ad->func_export = 1;
    break;
   case TOK_DLLIMPORT:
    ad->func_import = 1;
    break;
   default:
    if (tcc_state->warn_unsupported) {
     tcc_warning ("'%s' attribute ignored", get_tok_str (t, NULL));
    }

    if (tok == '(') {
     int parenthesis = 0;
     do {
      if (tok == '(') {
       parenthesis++;
      } else if (tok == ')') {
       parenthesis--;
      }
      next ();
     } while (parenthesis && tok != -1);
    }
    break;
   }
   if (tok != ',') {
    break;
   }
   next ();
  }
  skip (')');
  skip (')');
 }
}


static void struct_decl(CType *type, int u, bool is_typedef) {
 int a, v, size, align, maxalign, offset;
 long long c = 0;
 int bit_size, bit_pos, bsize, bt, lbit_pos, prevbt;
 char buf[STRING_MAX_SIZE + 1];
 Sym *s, *ss, *ass, **ps;
 AttributeDef ad;
 const char *name = NULL;
 bool autonamed = false;
 STACK_NEW0 (CType, type1);
 STACK_NEW0 (CType, btype);

 a = tok;
 next ();
 name = get_tok_str (tok, NULL);
 if (tok != '{') {
  v = tok;
  next ();

  if (v < TOK_IDENT) {
   expect ("struct/union/enum name");
  }
  s = struct_find (v);
  if (s) {
   if (s->type.t != a) {
    TCC_ERR ("invalid type");
   }
   goto do_decl;
  }
 } else {
  v = anon_sym++;
  snprintf (buf, sizeof(buf), "%u", v - SYM_FIRST_ANOM);
  name = buf;
  autonamed = true;
 }
 type1.t = a;

 s = sym_push (v | SYM_STRUCT, &type1, 0, -1);
 if (!s) {
  return;
 }
 s->r = 0;


do_decl:
 type->t = u;
 type->ref = s;

 if (tok == '{') {
  next ();
  if (s->c != -1) {
   TCC_ERR ("struct/union/enum already defined");
  }

  c = 0LL;

  if (a == TOK_ENUM) {
   if (!strcmp (name, "{")) {

    fprintf (stderr, "anonymous enums are ignored\n");
   }
   while (tcc_nerr () == 0) {
    v = tok;
    if (v < TOK_UIDENT) {
     expect ("identifier");
    }
    next ();
    if (tok == '=') {
     next ();
     c = expr_const ();
    }

    if (strcmp (name, "{")) {
     char *varstr = get_tok_str (v, NULL);
     tcc_appendf ("%s=enum\n", name);
     tcc_appendf ("[+]enum.%s=%s\n",name, varstr);
     tcc_appendf ("enum.%s.%s=0x%"PFMT64x "\n", name, varstr, c);
     tcc_appendf ("enum.%s.0x%"PFMT64x "=%s\n", name, c, varstr);


    }

    ss = sym_push (v, &int64_type, VT_CONST, c);
    if (!ss) {
     return;
    }
    ss->type.t |= VT_STATIC;
    if (tok != ',') {
     break;
    }
    next ();
    c++;

    if (tok == '}') {
     break;
    }
   }
   skip ('}');
  } else {
   maxalign = 1;
   ps = &s->next;
   prevbt = VT_INT32;
   bit_pos = 0;
   offset = 0;

   const char *ctype = (a == TOK_UNION)? "union": "struct";
   if (!is_typedef || !autonamed) {
    tcc_appendf ("%s=%s\n", name, ctype);
   }

   while (tok != '}') {
    if (!parse_btype (&btype, &ad)) {
     expect ("bracket");
     break;
    }
    while (tcc_nerr () == 0) {
     bit_size = -1;
     v = 0;
     memcpy (&type1, &btype, sizeof(type1));
     if (tok != ':') {
      type_decl (&type1, &ad, &v, TYPE_DIRECT | TYPE_ABSTRACT);
      if (v == 0 && not_structured(&type1)) {
       expect ("identifier");
      }
      if ((type1.t & VT_BTYPE) == VT_FUNC ||
          (type1.t & (VT_TYPEDEF | VT_STATIC | VT_EXTERN | VT_INLINE))) {
       TCC_ERR ("invalid type for '%s'",
        get_tok_str (v, NULL));
      }
     }
     if (tok == ':') {
      next ();
      bit_size = (int) expr_const ();

      if (bit_size < 0) {
       TCC_ERR ("negative width in bit-field '%s'",
        get_tok_str (v, NULL));
      }
      if (v && bit_size == 0) {
       TCC_ERR ("zero width for bit-field '%s'",
        get_tok_str (v, NULL));
      }
     }
     size = type_size (&type1, &align);
     if (ad.aligned) {
      if (align < ad.aligned) {
       align = ad.aligned;
      }
     } else if (ad.packed) {
      align = 1;
     } else if (*tcc_state->pack_stack_ptr) {
      if (align > *tcc_state->pack_stack_ptr) {
       align = *tcc_state->pack_stack_ptr;
      }
     }
     lbit_pos = 0;



     if (bit_size >= 0) {
      bt = type1.t & VT_BTYPE;
      if (bt != VT_INT8 &&
          bt != VT_INT16 &&
          bt != VT_INT32 &&
          bt != VT_INT64 &&
          bt != VT_ENUM &&
          bt != VT_BOOL) {
       TCC_ERR ("bitfields must have scalar type");
      }
      bsize = size * 8;
      if (bit_size > bsize) {
       TCC_ERR ("width of '%s' exceeds its type",
        get_tok_str (v, NULL));
      } else if (bit_size == bsize) {

       bit_pos = 0;
      } else if (bit_size == 0) {



       bit_pos = 0;
      } else {



       if ((bit_pos + bit_size) > bsize ||
           bt != prevbt || a == TOK_UNION) {
        bit_pos = 0;
       }
       lbit_pos = bit_pos;

       type1.t |= VT_BITFIELD |
           (bit_pos << VT_STRUCT_SHIFT) |
           (bit_size << (VT_STRUCT_SHIFT + 6));
       bit_pos += bit_size;
      }
      prevbt = bt;
     } else {
      bit_pos = 0;
     }
     if (v != 0 || is_structured(&type1)) {


      if (lbit_pos == 0) {
       if (a == TOK_STRUCT) {
        c = (c + align - 1) & - align;
        offset = c;
        if (size > 0) {
         c += size;
        }
       } else {
        offset = 0;
        if (size > c) {
         c = size;
        }
       }
       if (align > maxalign) {
        maxalign = align;
       }
      }
#if 1

      char b[1024];
      char *varstr = get_tok_str (v, NULL);
      type_to_str (b, sizeof(b), &type1, NULL);
      {
       int type_bt = type1.t & VT_BTYPE;

       if (is_typedef && autonamed) {
        tcc_typedef_appendf ("[+]typedef.%%s.fields=%s\n", varstr);
        tcc_typedef_appendf ("typedef.%%s.%s.meta=%d\n", varstr, type_bt);
        tcc_typedef_appendf ("typedef.%%s.%s=%s,%d,%d\n", varstr, b, offset, (int)arraysize);
       } else {
        tcc_appendf ("[+]%s.%s=%s\n",
         ctype, name, varstr);
        tcc_appendf ("%s.%s.%s.meta=%d\n",
         ctype, name, varstr, type_bt);

        tcc_appendf ("%s.%s.%s=%s,%d,%d\n",
         ctype, name, varstr, b, offset, (int)arraysize);
       }
#if 0
       eprintf ("%s.%s.%s.type=%s\n", ctype, name, varstr, b);
       eprintf ("%s.%s.%s.offset=%d\n", ctype, name, varstr, offset);
       eprintf ("%s.%s.%s.array=%d\n", ctype, name, varstr, arraysize);
#endif

       arraysize = 0;
       if (type1.t & VT_BITFIELD) {
        tcc_appendf ("%s.%s.%s.bitfield.pos=%d\n",
         ctype, name, varstr, (type1.t >> VT_STRUCT_SHIFT) & 0x3f);
        tcc_appendf ("%s.%s.%s.bitfield.size=%d\n",
         ctype, name, varstr, (type1.t >> (VT_STRUCT_SHIFT + 6)) & 0x3f);
       }

      }
#endif
     }
     if (v == 0 && is_structured (&type1)) {
      ass = type1.ref;
      while ((ass = ass->next) != NULL) {
       ss = sym_push (ass->v, &ass->type, 0, offset + ass->c);
       if (!ss) {
        return;
       }
       *ps = ss;
       ps = &ss->next;
      }
     } else if (v) {
      ss = sym_push (v | SYM_FIELD, &type1, 0, offset);
      if (!ss) {
       return;
      }
      *ps = ss;
      ps = &ss->next;
     }
     if (tok == ';' || tok == TOK_EOF) {
      break;
     }
     skip (',');
    }
    skip (';');
   }
   skip ('}');

   s->c = (c + maxalign - 1) & - maxalign;
   s->r = maxalign;
  }
 }
}




static int parse_btype(CType *type, AttributeDef *ad) {
 int t, u, type_found, typespec_found, typedef_found;
 Sym *s;
 STACK_NEW0 (CType, type1);

 memset (ad, 0, sizeof(AttributeDef));
 type_found = 0;
 typespec_found = 0;
 typedef_found = 0;

 t = 0;
 while (tcc_nerr () == 0) {
  switch (tok) {
  case TOK_EXTENSION:

   next ();
   continue;






  case TOK_UINT8:
   t |= VT_UNSIGNED;

  case TOK_INT8:
   u = VT_INT8;
   goto basic_type;
  case TOK_CHAR:
   u = VT_INT8;

   t |= VT_CHAR;
basic_type:
   next ();
basic_type1:
   if ((t & VT_BTYPE) != 0) {
    tcc_error ("too many basic types");
    return 0;
   }
   t |= u;
   typespec_found = 1;
   break;


  case TOK_VOID:
   u = VT_VOID;
   goto basic_type;


  case TOK_UINT16:
   t |= VT_UNSIGNED;

  case TOK_INT16:
  case TOK_SHORT:
   u = VT_INT16;
   goto basic_type;


  case TOK_UINT32:
   t |= VT_UNSIGNED;

  case TOK_INT32:
   u = VT_INT32;
   goto basic_type;
  case TOK_INT:
   next ();
   typespec_found = 1;
   break;


  case TOK_UINT64:
   t |= VT_UNSIGNED;

  case TOK_INT64:
   u = VT_INT64;
   goto basic_type;
  case TOK_LONG:
   next ();

   if ((t & VT_BTYPE) == VT_DOUBLE) {
    if (strncmp (tcc_state->os, "windows", 7)) {
     t = (t & ~VT_BTYPE) | VT_LDOUBLE;
    }
   } else if ((t & VT_BTYPE) == VT_LONG) {
    t = (t & ~VT_BTYPE) | VT_INT64;
   } else {
    u = VT_LONG;
    goto basic_type1;
   }
   break;
  case TOK_BOOL:
  case TOK_STDBOOL:
   u = VT_BOOL;
   goto basic_type;
  case TOK_FLOAT:
   u = VT_FLOAT;
   goto basic_type;
  case TOK_DOUBLE:
   next ();
   if ((t & VT_BTYPE) == VT_LONG) {
    if (!strncmp (tcc_state->os, "windows", 7)) {
     t = (t & ~VT_BTYPE) | VT_DOUBLE;
    } else {
     t = (t & ~VT_BTYPE) | VT_LDOUBLE;
    }
   } else {
    u = VT_DOUBLE;
    goto basic_type1;
   }
   break;
  case TOK_ENUM:
   struct_decl (&type1, VT_ENUM, (bool)(t & VT_ENUM));
basic_type2:
   u = type1.t;
   type->ref = type1.ref;
   goto basic_type1;
  case TOK_STRUCT:
   struct_decl (&type1, VT_STRUCT, (bool)(t & VT_TYPEDEF));
   goto basic_type2;
  case TOK_UNION:
   struct_decl (&type1, VT_UNION, (bool)(t & VT_UNION));
   goto basic_type2;


  case TOK_CONST1:
  case TOK_CONST2:
  case TOK_CONST3:
   t |= VT_CONSTANT;
   next ();
   break;
  case TOK_VOLATILE1:
  case TOK_VOLATILE2:
  case TOK_VOLATILE3:
   t |= VT_VOLATILE;
   next ();
   break;
  case TOK_SIGNED1:
  case TOK_SIGNED2:
  case TOK_SIGNED3:
   typespec_found = 1;
   t |= VT_SIGNED;
   next ();
   break;
  case TOK_REGISTER:
  case TOK_AUTO:
  case TOK_RESTRICT1:
  case TOK_RESTRICT2:
  case TOK_RESTRICT3:
   next ();
   break;
  case TOK_UNSIGNED:
   t |= VT_UNSIGNED;
   next ();
   typespec_found = 1;
   break;


  case TOK_EXTERN:
   t |= VT_EXTERN;
   next ();
   break;
  case TOK_STATIC:
   t |= VT_STATIC;
   next ();
   break;
  case TOK_TYPEDEF:
   t |= VT_TYPEDEF;
   next ();
   break;
  case TOK_INLINE1:
  case TOK_INLINE2:
  case TOK_INLINE3:
   t |= VT_INLINE;
   next ();
   break;


  case TOK_ATTRIBUTE1:
  case TOK_ATTRIBUTE2:
   parse_attribute (ad);
   if (ad->mode) {
    u = ad->mode - 1;
    t = (t & ~VT_BTYPE) | u;
   }
   break;

  case TOK_TYPEOF1:
  case TOK_TYPEOF2:
  case TOK_TYPEOF3:
   next ();
   parse_expr_type (&type1);

   type1.t &= ~(VT_STORAGE & ~VT_TYPEDEF);
   goto basic_type2;
  default:
   if (typespec_found || typedef_found) {
    goto the_end;
   }
   s = sym_find (tok);
   if (!s || !(s->type.t & VT_TYPEDEF)) {
    goto the_end;
   }
   typedef_found = 1;
   t |= (s->type.t & ~VT_TYPEDEF);
   type->ref = s->type.ref;
   if (s->r) {

    if (0 == ad->aligned) {
     ad->aligned = FUNC_ALIGN (s->r);
    }
    if (0 == ad->func_call) {
     ad->func_call = FUNC_CALL (s->r);
    }
    ad->packed |= FUNC_PACKED (s->r);
   }
   next ();
   typespec_found = 1;
   break;
  }
  type_found = 1;
 }
the_end:
 if ((t & (VT_SIGNED | VT_UNSIGNED)) == (VT_SIGNED | VT_UNSIGNED)) {
  tcc_error ("signed and unsigned modifier");
  return 0;
 }
 if (tcc_state->char_is_unsigned) {
  if ((t & (VT_SIGNED | VT_UNSIGNED | VT_BTYPE)) == VT_INT8) {
   t |= VT_UNSIGNED;
  }
 }
 t &= ~VT_SIGNED;


 if ((t & VT_BTYPE) == VT_LONG) {
  if (!strncmp (tcc_state->os, "windows", 7) ||
      (!strncmp (tcc_state->arch, "x86", 3) && tcc_state->bits == 32)) {
   t = (t & ~VT_BTYPE) | VT_INT32;
  } else {
   t = (t & ~VT_BTYPE) | VT_INT64;
  }
 }
 type->t = t;

 return type_found;
}



static inline void convert_parameter_type(CType *pt) {


 pt->t &= ~(VT_CONSTANT | VT_VOLATILE);

 pt->t &= ~VT_ARRAY;
 if ((pt->t & VT_BTYPE) == VT_FUNC) {
  mk_pointer (pt);
 }
}

static void post_type(CType *type, AttributeDef *ad) {
 int n, l, t1, arg_size, align;
 Sym **plast, *s, *first;
 AttributeDef ad1;
 CType pt = {0};
 char *symname = NULL;
 int narg = 0;

 if (tok == '(') {

  next ();
  l = 0;
  first = NULL;
  plast = &first;
  {
   const char *ret_type = global_type;
   free (symname);
   symname = strdup (global_symname);
   tcc_appendf ("func.%s.ret=%s\n", symname, ret_type);
   tcc_appendf ("func.%s.cc=%s\n", symname, "cdecl");
   tcc_appendf ("%s=func\n", symname);
  }
  arg_size = 0;
  if (tok != ')') {
   while (tcc_nerr () == 0) {

    if (l != FUNC_OLD) {
     if (!parse_btype (&pt, &ad1)) {
      if (l) {
       TCC_ERR ("invalid type");
      } else {
       l = FUNC_OLD;
       goto old_proto;
      }
     }
     l = FUNC_NEW;
     if ((pt.t & VT_BTYPE) == VT_VOID && tok == ')') {
      break;
     }
     type_decl (&pt, &ad1, &n, TYPE_DIRECT | TYPE_ABSTRACT);
     if ((pt.t & VT_BTYPE) == VT_VOID) {
      TCC_ERR ("parameter declared as void");
     }
     arg_size += (type_size (&pt, &align) + PTR_SIZE - 1) / PTR_SIZE;
    } else {
old_proto:
     n = tok;
     if (n < TOK_UIDENT) {
      expect ("identifier");
     }
     pt.t = VT_INT32;
     next ();
    }
    convert_parameter_type (&pt);
    s = sym_push (n | SYM_FIELD, &pt, 0, 0);
    if (!s) {
     return;
    } else {
     char kind[1024];
     type_to_str (kind, sizeof (kind), &pt, NULL);
     tcc_appendf ("func.%s.arg.%d=%s,%s\n",
      symname, narg, kind, global_symname);
     narg++;
    }
    *plast = s;
    plast = &s->next;
    if (tok == ')') {
     break;
    }
    skip (',');
    if (l == FUNC_NEW && tok == TOK_DOTS) {
     l = FUNC_ELLIPSIS;
     next ();
     break;
    }
   }
  }
  tcc_appendf ("func.%s.args=%d\n", symname, narg);

  if (l == 0) {
   l = FUNC_OLD;
  }
  skip (')');


  type->t &= ~VT_CONSTANT;



  if (tok == '[') {
   next ();
   skip (']');
   type->t |= VT_PTR;
  }

  ad->func_args = arg_size;
  s = sym_push (SYM_FIELD, type, INT_ATTR (ad), l);
  if (!s) {
   return;
  }
  s->next = first;
  type->t = VT_FUNC;
  type->ref = s;
  R_FREE (symname);
 } else if (tok == '[') {

  next ();
  if (tok == TOK_RESTRICT1) {
   next ();
  }
  n = -1;
  t1 = 0;
  if (tok != ']') {
   if (!local_stack || nocode_wanted) {
    vpushll (expr_const ());
   } else {
    gexpr ();
   }
   if ((vtop->r & (VT_VALMASK | VT_LVAL | VT_SYM)) == VT_CONST) {
    n = vtop->c.i;
    if (n < 0) {
     TCC_ERR ("invalid array size");
    }
   } else {
    if (!is_integer_btype (vtop->type.t & VT_BTYPE)) {
     TCC_ERR ("size of variable length array should be an integer");
    }
    t1 = VT_VLA;
   }
  }
  skip (']');

  post_type (type, ad);



  arraysize = n;
  if (n < 0) {
   eprintf ("array with no size []\n");
#if 0
  } else {
   printf ("PUSH SIZE %d\n", n);
#endif
  }
  s = sym_push (SYM_FIELD, type, 0, n);
  if (!s) {
   return;
  }
  type->t = (t1? VT_VLA: VT_ARRAY) | VT_PTR;
  type->ref = s;
 }
}







static void type_decl(CType *type, AttributeDef *ad, int *v, int td) {
 Sym *s;
 int qualifiers, storage;
 CType *type1 = R_NEW0 (CType);
 CType *type2 = R_NEW0 (CType);
 if (!type1 || !type2) {
  free (type1);
  free (type2);
  return;
 }

 while (tok == '*') {
  qualifiers = 0;
redo:
  next ();
  switch (tok) {
  case TOK_CONST1:
  case TOK_CONST2:
  case TOK_CONST3:
   qualifiers |= VT_CONSTANT;
   goto redo;
  case TOK_VOLATILE1:
  case TOK_VOLATILE2:
  case TOK_VOLATILE3:
   qualifiers |= VT_VOLATILE;
   goto redo;
  case TOK_RESTRICT1:
  case TOK_RESTRICT2:
  case TOK_RESTRICT3:
   goto redo;
  }
  mk_pointer (type);
  type->t |= qualifiers;
 }


 if (tok == TOK_ATTRIBUTE1 || tok == TOK_ATTRIBUTE2) {
  parse_attribute (ad);
 }



 type1->t = 0;
 if (tok == '(') {
  next ();


  if (tok == TOK_ATTRIBUTE1 || tok == TOK_ATTRIBUTE2) {
   parse_attribute (ad);
  }
  type_decl (type1, ad, v, td);
  skip (')');
 } else {

  if (tok >= TOK_IDENT && (td & TYPE_DIRECT)) {
   *v = tok;
   next ();
  } else {
   if (!(td & TYPE_ABSTRACT)) {
    expect ("identifier");
   }
   *v = 0;
  }
 }
 storage = type->t & VT_STORAGE;
 type->t &= ~VT_STORAGE;
 if (storage & VT_STATIC) {
  int saved_nocode_wanted = nocode_wanted;
  nocode_wanted = 1;

  post_type (type, ad);
  nocode_wanted = saved_nocode_wanted;
 } else {
  static char kind[1024];
  char *name = get_tok_str (*v, NULL);
  type_to_str (kind, sizeof(kind), type, NULL);

  global_symname = name;
  global_type = kind;
  post_type (type, ad);
 }
 type->t |= storage;
 if (tok == TOK_ATTRIBUTE1 || tok == TOK_ATTRIBUTE2) {
  parse_attribute (ad);
 }

 if (!type1->t) {
  free (type1);
  free (type2);
  return;
 }

 type2 = type1;
 for (;;) {
  s = type2->ref;
  type2 = &s->type;
  if (!type2->t) {
   *type2 = *type;
   break;
  }
 }
 memcpy (type, type1, sizeof(*type));
}


ST_FUNC int lvalue_type(int t) {
 int bt, r;
 r = VT_LVAL;
 bt = t & VT_BTYPE;
 if (bt == VT_INT8 || bt == VT_BOOL) {
  r |= VT_LVAL_BYTE;
 } else if (bt == VT_INT16) {
  r |= VT_LVAL_SHORT;
 } else {
  return r;
 }
 if (t & VT_UNSIGNED) {
  r |= VT_LVAL_UNSIGNED;
 }
 return r;
}


ST_FUNC void indir(void) {
 if ((vtop->type.t & VT_BTYPE) != VT_PTR) {
  if ((vtop->type.t & VT_BTYPE) == VT_FUNC) {
   return;
  }
  expect ("pointer");
 }
 vtop->type = *pointed_type (&vtop->type);

 if (!(vtop->type.t & VT_ARRAY) && !(vtop->type.t & VT_VLA)
     && (vtop->type.t & VT_BTYPE) != VT_FUNC) {
  vtop->r |= lvalue_type (vtop->type.t);

#ifdef CONFIG_TCC_BCHECK
  if (tcc_state->do_bounds_check) {
   vtop->r |= VT_MUSTBOUND;
  }
#endif
 }
}



static void parse_expr_type(CType *type) {
 int n;
 AttributeDef ad;

 skip ('(');
 if (parse_btype (type, &ad)) {
  type_decl (type, &ad, &n, TYPE_ABSTRACT);
 } else {
  expr_type (type);
 }
 skip (')');
}

static void parse_type(CType *type) {
 AttributeDef ad;
 int n;

 if (!parse_btype (type, &ad)) {
  expect ("type");
 }
 type_decl (type, &ad, &n, TYPE_ABSTRACT);
}

static void vpush_tokc(int t) {
 CType type = { 0 };
 type.t = t;
 type.ref = NULL;
 vsetc (&type, VT_CONST, &tokc);
}

ST_FUNC void unary(void) {
 int n, t, align, size, r, sizeof_caller;
 CType type = { 0 };
 Sym *s;
 AttributeDef ad;
 static int in_sizeof = 0;

 sizeof_caller = in_sizeof;
 in_sizeof = 0;


tok_next:
 switch (tok) {
 case TOK_EXTENSION:
  next ();
  goto tok_next;
 case TOK_CINT:
 case TOK_CCHAR:
 case TOK_LCHAR:
  vpushi (tokc.i);
  next ();
  break;
 case TOK_CUINT:
  vpush_tokc (VT_INT32 | VT_UNSIGNED);
  next ();
  break;
 case TOK_CLLONG:
  vpush_tokc (VT_INT64);
  next ();
  break;
 case TOK_CULLONG:
  vpush_tokc (VT_INT64 | VT_UNSIGNED);
  next ();
  break;
 case TOK_CFLOAT:
  vpush_tokc (VT_FLOAT);
  next ();
  break;
 case TOK_CDOUBLE:
  vpush_tokc (VT_DOUBLE);
  next ();
  break;
 case TOK_CLDOUBLE:
  vpush_tokc (VT_LDOUBLE);
  next ();
  break;
 case TOK___FUNCTION__:
  if (!gnu_ext) {
   goto tok_identifier;
  }

 case TOK___FUNC__:
 {

  int len;

  len = strlen (funcname) + 1;

  type.t = VT_INT8;
  mk_pointer (&type);
  type.t |= VT_ARRAY;
  if (type.ref) {
   type.ref->c = len;
  }


  next ();
 }
 break;
 case TOK_LSTR:
  if (!strncmp (tcc_state->os, "windows", 7)) {
   t = VT_INT16 | VT_UNSIGNED;
  } else {
   t = VT_INT32;
  }
  goto str_init;
 case TOK_STR:

  t = VT_INT8;
str_init:
  if (tcc_state->warn_write_strings) {
   t |= VT_CONSTANT;
  }
  type.t = t;
  mk_pointer (&type);
  type.t |= VT_ARRAY;
  memset (&ad, 0, sizeof(AttributeDef));
  decl_initializer_alloc (&type, &ad, VT_CONST, 2, 0, NULL, 0);
  break;
 case '(':
  next ();

  if (parse_btype (&type, &ad)) {
   type_decl (&type, &ad, &n, TYPE_ABSTRACT);
   skip (')');

   if (tok == '{') {

    if (global_expr) {
     r = VT_CONST;
    } else {
     r = VT_LOCAL;
    }

    if (!(type.t & VT_ARRAY)) {
     r |= lvalue_type (type.t);
    }
    memset (&ad, 0, sizeof(AttributeDef));
    decl_initializer_alloc (&type, &ad, r, 1, 0, NULL, 0);
   } else {
    if (sizeof_caller) {
     vpush (&type);
     return;
    }
    unary ();
   }
  } else if (tok == '{') {


   skip (')');
  } else {
   gexpr ();
   skip (')');
  }
  break;
 case '*':
  next ();
  unary ();
  indir ();
  break;
 case '!':
  next ();
  unary ();
  if ((vtop->r & VT_VALMASK) == VT_CMP) {
   vtop->c.i = vtop->c.i ^ 1;
  }
  break;
 case TOK_SIZEOF:
 case TOK_ALIGNOF1:
 case TOK_ALIGNOF2:
  t = tok;
  next ();
  in_sizeof++;
  unary_type (&type);
  size = type_size (&type, &align);
  if (t == TOK_SIZEOF) {
   if (!(type.t & VT_VLA)) {
    if (size < 0) {
     TCC_ERR ("sizeof applied to an incomplete type");
    }
    vpushs (size);
   }
  } else {
   vpushs (align);
  }
  vtop->type.t |= VT_UNSIGNED;
  break;

 case TOK_builtin_types_compatible_p:
 {
  STACK_NEW0 (CType, type1);
  STACK_NEW0 (CType, type2);
  next ();
  skip ('(');
  parse_type (&type1);
  skip (',');
  parse_type (&type2);
  skip (')');
  type1.t &= ~(VT_CONSTANT | VT_VOLATILE);
  type2.t &= ~(VT_CONSTANT | VT_VOLATILE);
  vpushi (is_compatible_types (&type1, &type2));
 }
 break;
 case TOK_builtin_constant_p:
 {
  int saved_nocode_wanted;
  long long res;
  next ();
  skip ('(');
  saved_nocode_wanted = nocode_wanted;
  nocode_wanted = 1;
  gexpr ();
  res = (vtop->r & (VT_VALMASK | VT_LVAL | VT_SYM)) == VT_CONST;
  nocode_wanted = saved_nocode_wanted;
  skip (')');
  vpushll (res);
 }
 break;
 case TOK_builtin_frame_address:
 {
  int level;
  CType type = { 0 };
  next ();
  skip ('(');
  if (tok != TOK_CINT || tokc.i < 0) {
   TCC_ERR ("__builtin_frame_address only takes positive integers");
  }
  level = tokc.i;
  next ();
  skip (')');
  type.t = VT_VOID;
  mk_pointer (&type);
  vset (&type, VT_LOCAL, 0);
  while (level--) {
   mk_pointer (&vtop->type);
   indir ();
  }
 }
 break;
 case TOK_builtin_va_start:
  if (!strncmp (tcc_state->arch, "x86", 3) && tcc_state->bits == 64 &&
      !strncmp (tcc_state->os, "windows", 7)) {
   next ();
   skip ('(');
   expr_eq ();
   skip (',');
   expr_eq ();
   skip (')');
   if ((vtop->r & VT_VALMASK) != VT_LOCAL) {
    TCC_ERR ("__builtin_va_start expects a local variable");
   }
   vtop->r &= ~(VT_LVAL | VT_REF);
   vtop->type = char_pointer_type;
  }
  break;
 case TOK_builtin_va_arg_types:
  if (!(!strncmp (tcc_state->arch, "x86", 3) && tcc_state->bits == 64 &&
        !strncmp (tcc_state->os, "windows", 7))) {
   CType type = { 0 };
   next ();
   skip ('(');
   parse_type (&type);
   skip (')');


  }
  break;


 case TOK___NAN__:
  vpush64 (VT_DOUBLE, 0x7ff8000000000000ULL);
  next ();
  break;
 case TOK___SNAN__:
  vpush64 (VT_DOUBLE, 0x7ff0000000000001ULL);
  next ();
  break;
 case TOK___INF__:
  vpush64 (VT_DOUBLE, 0x7ff0000000000000ULL);
  next ();
  break;

 default:
tok_identifier:
  t = tok;
  next ();
  if (t < TOK_UIDENT) {
   expect ("identifier");
  }
  s = sym_find (t);
  if (!s) {
   if (tok != '(') {
    TCC_ERR ("'%s' undeclared", get_tok_str (t, NULL));
   }
  }
  if (!s) {
   TCC_ERR ("invalid declaration '%s'", get_tok_str (t, NULL));
  } else {
   if ((s->type.t & (VT_STATIC | VT_INLINE | VT_BTYPE)) ==
       (VT_STATIC | VT_INLINE | VT_FUNC)) {




    r = VT_SYM | VT_CONST;
   } else {
    r = s->r;
   }
   vset (&s->type, r, s->c);

   if (vtop->r & VT_SYM) {
    vtop->sym = s;
    vtop->c.ul = 0;
   }
  }
  break;
 }


 while (1) {
  if (tok == '.' || tok == TOK_ARROW) {
   int qualifiers;

   if (tok == TOK_ARROW) {
    indir ();
   }
   qualifiers = vtop->type.t & (VT_CONSTANT | VT_VOLATILE);
   test_lvalue ();
   gaddrof ();
   next ();

   if (not_structured(&vtop->type)) {
    expect ("struct or union");
   }
   s = vtop->type.ref;

   tok |= SYM_FIELD;
   while ((s = s->next) != NULL) {
    if (s->v == tok) {
     break;
    }
   }
   if (!s) {
    TCC_ERR ("field not found: %s", get_tok_str (tok & ~SYM_FIELD, NULL));
   }

   vtop->type = char_pointer_type;
   vpushi (s->c);

   vtop->type = s->type;
   vtop->type.t |= qualifiers;

   if (!(vtop->type.t & VT_ARRAY)) {
    vtop->r |= lvalue_type (vtop->type.t);
#ifdef CONFIG_TCC_BCHECK

    if (tcc_state->do_bounds_check) {
     vtop->r |= VT_MUSTBOUND;
    }
#endif
   }
   next ();
  } else if (tok == '[') {
   next ();
   gexpr ();
   indir ();
   skip (']');






  } else {
   break;
  }
 }
}

ST_FUNC void expr_prod(void) {
 unary ();
 while (tok == '*' || tok == '/' || tok == '%') {
  next ();
  unary ();
 }
}

ST_FUNC void expr_sum(void) {
 expr_prod ();
 while (tok == '+' || tok == '-') {
  next ();
  expr_prod ();
 }
}

static void expr_shift(void) {
 expr_sum ();
 while (tok == TOK_SHL || tok == TOK_SAR) {
  next ();
  expr_sum ();
 }
}

static void expr_cmp(void) {
 expr_shift ();
 while ((tok >= TOK_ULE && tok <= TOK_GT) ||
        tok == TOK_ULT || tok == TOK_UGE) {
  next ();
  expr_shift ();
 }
}

static void expr_cmpeq(void) {
 expr_cmp ();
 while (tok == TOK_EQ || tok == TOK_NE) {
  next ();
  expr_cmp ();
 }
}

static void expr_and(void) {
 expr_cmpeq ();
 while (tok == '&') {
  next ();
  expr_cmpeq ();
 }
}

static void expr_xor(void) {
 expr_and ();
 while (tok == '^') {
  next ();
  expr_and ();
 }
}

static void expr_or(void) {
 expr_xor ();
 while (tok == '|') {
  next ();
  expr_xor ();
 }
}


static void expr_land_const(void) {
 expr_or ();
 while (tok == TOK_LAND) {
  next ();
  expr_or ();
 }
}


static void expr_lor_const(void) {
 expr_land_const ();
 while (tok == TOK_LOR) {
  next ();
  expr_land_const ();
 }
}


static void expr_land(void) {
 expr_or ();
 if (tok == TOK_LAND) {
  while (tcc_nerr () == 0) {
   if (tok != TOK_LAND) {
    break;
   }
   next ();
   expr_or ();
  }
 }
}

static void expr_lor(void) {
 expr_land ();
 if (tok == TOK_LOR) {
  while (tcc_nerr () == 0) {
   if (tok != TOK_LOR) {
    break;
   }
   next ();
   expr_land ();
  }
 }
}


static void expr_cond(void) {
 if (const_wanted) {
  expr_lor_const ();
  if (tok == '?') {
   vdup ();
   next ();
   if (tok != ':' || !gnu_ext) {
    gexpr ();
   }
   skip (':');
   expr_cond ();
  }
 } else {
  expr_lor ();
 }
}

static void expr_eq(void) {
 int t;

 expr_cond ();
 if (tok == '=' ||
     (tok >= TOK_A_MOD && tok <= TOK_A_DIV) ||
     tok == TOK_A_XOR || tok == TOK_A_OR ||
     tok == TOK_A_SHL || tok == TOK_A_SAR) {
  test_lvalue ();
  t = tok;
  next ();
  if (t == '=') {
   expr_eq ();
  } else {
   vdup ();
   expr_eq ();
  }
 }
}

ST_FUNC void gexpr(void) {
 while (tcc_nerr () == 0) {
  expr_eq ();
  if (tok != ',') {
   break;
  }
  next ();
 }
}


static void expr_type(CType *type) {
 bool saved_nocode_wanted = nocode_wanted;
 nocode_wanted = true;
 gexpr ();
 *type = vtop->type;
 nocode_wanted = saved_nocode_wanted;
}



static void unary_type(CType *type) {
 bool a = nocode_wanted;
 nocode_wanted = true;
 unary ();
 *type = vtop->type;
 nocode_wanted = a;
}


static void expr_const1(void) {
 int a;
 a = const_wanted;
 const_wanted = true;
 expr_cond ();
 const_wanted = a;
}


ST_FUNC long long expr_const(void) {
 long long c = 0LL;
 expr_const1 ();
 if ((vtop->r & (VT_VALMASK | VT_LVAL | VT_SYM)) != VT_CONST) {
  expect ("constant expression");
 }
 c = vtop->c.ll;
 return c;
}



static int is_label(void) {
 int last_tok;


 if (tok < TOK_UIDENT) {
  return 0;
 }

 last_tok = tok;
 next ();
 if (tok == ':') {
  next ();
  return last_tok;
 } else {
  unget_tok (last_tok);
  return 0;
 }
}





static void decl_designator(CType *type, unsigned long c,
       long long *cur_index, Sym **cur_field,
       int size_only)
{
 Sym *s, *f = NULL;
 long long index, index_last;
 int notfirst, align, l, nb_elems, elem_size;
 STACK_NEW0 (CType, type1);

 notfirst = 0;
 if (gnu_ext && (l = is_label ()) != 0) {
  goto struct_field;
 }
 while (tok == '[' || tok == '.') {
  if (tok == '[') {
   if (!(type->t & VT_ARRAY)) {
    expect ("array type");
   }
   s = type->ref;
   next ();
   index = expr_const ();
   if (index < 0 || (s->c >= 0 && index >= s->c)) {
    expect ("invalid index");
   }
   if (tok == TOK_DOTS && gnu_ext) {
    next ();
    index_last = expr_const ();
    if (index_last < 0 ||
        (s->c >= 0 && index_last >= s->c) ||
        index_last < index) {
     expect ("invalid index");
    }
   } else {
    index_last = index;
   }
   skip (']');
   if (!notfirst && cur_index) {
    *cur_index = index_last;
   }
   type = pointed_type (type);
   elem_size = type_size (type, &align);
   c += index * elem_size;

   nb_elems = index_last - index + 1;
   if (nb_elems != 1) {
    notfirst = 1;
    break;
   }
  } else {
   next ();
   l = tok;
   next ();
struct_field:
   if (not_structured(type)) {
    expect ("struct/union type");
   }
   s = type->ref;
   l |= SYM_FIELD;
   f = s->next;
   while (f) {
    if (f->v == l) {
     break;
    }
    f = f->next;
   }
   if (!f) {
    expect ("field");
   }
   if (!notfirst && cur_field) {
    *cur_field = f;
   }

   if (f) {
    type1 = f->type;
    type1.t |= (type->t & ~VT_TYPE);
    type = &type1;
    c += f->c;
   }
  }
  notfirst = 1;
 }
 if (notfirst) {
  if (tok == '=') {
   next ();
  } else {
   if (!gnu_ext) {
    expect ("=");
   }
  }
 } else {
  if (type->t & VT_ARRAY) {
   index = cur_index ? *cur_index : 0;
   type = pointed_type (type);
   c += index * type_size (type, &align);
  } else {
   f = cur_field ? *cur_field : NULL;
   if (!f) {
    TCC_ERR ("too many field init");
   }

   if (f) {
    type1 = f->type;
    type1.t |= (type->t & ~VT_TYPE);
    type = &type1;
    c += f->c;
   }
  }
 }
 decl_initializer (type, c, 0, size_only);
}

#define EXPR_VAL 0
#define EXPR_CONST 1
#define EXPR_ANY 2


static void init_putv(CType *type, unsigned long c, long long v, int expr_type) {
 int saved_global_expr;
 CType dtype;

 switch (expr_type) {
 case EXPR_VAL:
  vpushll (v);
  break;
 case EXPR_CONST:

  saved_global_expr = global_expr;
  global_expr = 1;
  expr_const1 ();
  global_expr = saved_global_expr;

  if ((vtop->r & (VT_VALMASK | VT_LVAL)) != VT_CONST) {
   TCC_ERR ("initializer element is not constant");
  }
  break;
 case EXPR_ANY:
  expr_eq ();
  break;
 }

 dtype = *type;
 dtype.t &= ~VT_CONSTANT;

 vset (&dtype, VT_LOCAL | VT_LVAL, c);
 vswap ();
}


static void init_putz(CType *t, unsigned long c, int size) {
 vseti (VT_LOCAL, c);
 vpushi (0);
 vpushs (size);
}






static void decl_initializer(CType *type, unsigned long c, int first, int size_only) {
 long long index;
 int n, no_oblock, nb, parlevel, parlevel1;
 size_t array_length, size1, i;
 int align1, expr_type;
 Sym *s, *f;
 CType *t1;

 if (type->t & VT_ARRAY) {
  s = type->ref;
  n = s->c;
  array_length = 0;
  t1 = pointed_type (type);
  size1 = type_size (t1, &align1);

  no_oblock = 1;
  if ((first && tok != TOK_LSTR && tok != TOK_STR) ||
      tok == '{') {
   if (tok != '{') {
    TCC_ERR ("character array initializer must be a literal,"
     " optionally enclosed in braces");
   }
   skip ('{');
   no_oblock = 0;
  }



  if ((tok == TOK_LSTR &&

#ifdef TCC_TARGET_PE
       (t1->t & VT_BTYPE) == VT_INT16 && (t1->t & VT_UNSIGNED)
#else
       (t1->t & VT_BTYPE) == VT_INT32
#endif
      ) || (tok == TOK_STR && (t1->t & VT_BTYPE) == VT_INT8)) {
   while (tcc_nerr() == 0 && (tok == TOK_STR || tok == TOK_LSTR)) {
    int cstr_len, ch;
    CString *cstr;

    cstr = tokc.cstr;

    if (tok == TOK_STR) {
     cstr_len = cstr->size;
    } else {
     cstr_len = cstr->size / sizeof(nwchar_t);
    }
    cstr_len--;
    nb = cstr_len;
    if (n >= 0 && nb > (n - array_length)) {
     nb = n - array_length;
    }
    if (!size_only) {
     if (cstr_len > nb) {
      tcc_warning ("initializer-string for array is too long");
     }



     for (i = 0; i < nb; i++) {
      if (tok == TOK_STR) {
       ch = ((unsigned char *) cstr->data)[i];
      } else {
       ch = ((nwchar_t *) cstr->data)[i];
      }
      init_putv (t1, c + (array_length + i) * size1,
       ch, EXPR_VAL);
     }
    }
    array_length += nb;
    next ();
   }


   if (n < 0 || array_length < n) {
    if (!size_only) {
     init_putv (t1, c + (array_length * size1), 0, EXPR_VAL);
    }
    array_length++;
   }
  } else {
   index = 0;
   while (tok != '}') {
    decl_designator (type, c, &index, NULL, size_only);
    if (n >= 0 && index >= n) {
     TCC_ERR ("index too large");
    }


    if (!size_only && array_length < index) {
     init_putz (t1, c + array_length * size1,
      (index - array_length) * size1);
    }
    index++;
    if (index > array_length) {
     array_length = index;
    }



    if (index >= n && no_oblock) {
     break;
    }
    if (tok == '}') {
     break;
    }
    skip (',');
   }
  }
  if (!no_oblock) {
   skip ('}');
  }

  if (!size_only && n >= 0 && array_length < n) {
   init_putz (t1, c + array_length * size1,
    (n - array_length) * size1);
  }

  if (n < 0) {
   s->c = array_length;
  }
 } else if (is_structured(type) && (!first || tok == '{')) {
  int par_count;
# 2694 "project/radare2/libr/parse/c/tccgen.c"
  par_count = 0;
  if (tok == '(') {
   AttributeDef ad1;
   STACK_NEW0 (CType, type1);
   next ();
   while (tok == '(') {
    par_count++;
    next ();
   }
   if (!parse_btype (&type1, &ad1)) {
    expect ("cast");
   }
   type_decl (&type1, &ad1, &n, TYPE_ABSTRACT);
#if 0
   if (!is_assignable_types (type, &type1)) {
    tcc_error ("invalid type for cast");
   }
#endif
   skip (')');
  }
  no_oblock = 1;
  if (first || tok == '{') {
   skip ('{');
   no_oblock = 0;
  }
  s = type->ref;
  f = s->next;
  array_length = 0;
  index = 0;
  n = s->c;
  while (tok != '}') {
   decl_designator (type, c, NULL, &f, size_only);
   index = f->c;
   if (!size_only && array_length < index) {
    init_putz (type, c + array_length,
     index - array_length);
   }
   index = index + type_size (&f->type, &align1);
   if (index > array_length) {
    array_length = index;
   }


   while (f->next) {


    if (f->next->c != f->c) {
     break;
    }

    if ((f->type.t & VT_BITFIELD) && (f->next->type.t & VT_BITFIELD)) {
     int bit_pos_1 = (f->type.t >> VT_STRUCT_SHIFT) & 0x3f;
     int bit_pos_2 = (f->next->type.t >> VT_STRUCT_SHIFT) & 0x3f;

     if (bit_pos_1 != bit_pos_2) {
      break;
     }
    }
    f = f->next;
   }

   f = f->next;
   if (no_oblock && f == NULL) {
    break;
   }
   if (tok == '}') {
    break;
   }
   skip (',');
  }

  if (!size_only && array_length < n) {
   init_putz (type, c + array_length,
    n - array_length);
  }
  if (!no_oblock) {
   skip ('}');
  }
  while (par_count) {
   skip (')');
   par_count--;
  }
 } else if (tok == '{') {
  next ();
  decl_initializer (type, c, first, size_only);
  skip ('}');
 } else if (size_only) {

  parlevel = parlevel1 = 0;
  while ((parlevel > 0 || parlevel1 > 0 ||
   (tok != '}' && tok != ',')) && tok != -1) {
   if (tok == '(') {
    parlevel++;
   } else if (tok == ')') {
    parlevel--;
   } else if (tok == '{') {
    parlevel1++;
   } else if (tok == '}') {
    parlevel1--;
   }
   next ();
  }
 } else {


  expr_type = EXPR_CONST;
  init_putv (type, c, 0, expr_type);
 }
}
# 2812 "project/radare2/libr/parse/c/tccgen.c"
static void decl_initializer_alloc(CType *type, AttributeDef *ad, int r, int has_init, int v, char *asm_label, int scope) {
 int size, align, addr;
 int level;
 ParseState saved_parse_state = {
  0
 };
 TokenString init_str;
 Sym *flexible_array;

 flexible_array = NULL;
 if (is_struct(type)) {
  Sym *field;
  field = type->ref;
  while (field && field->next)
   field = field->next;
  if (field && (field->type.t & VT_ARRAY) && (field->type.ref->c < 0)) {
   flexible_array = field;
  }
 }

 size = type_size (type, &align);






 tok_str_new (&init_str);
 if (size < 0 || (flexible_array && has_init)) {
  if (!has_init) {
   TCC_ERR ("unknown type size");
  }

  if (has_init == 2) {

   while (tok == TOK_STR || tok == TOK_LSTR) {
    tok_str_add_tok (&init_str);
    next ();
   }
  } else {
   level = 0;
   while (tcc_nerr() == 0 && (level > 0 || (tok != ',' && tok != ';'))) {
    if (tok < 0) {
     TCC_ERR ("unexpected end of file in initializer");
    }
    tok_str_add_tok (&init_str);
    if (tok == '{') {
     level++;
    } else if (tok == '}') {
     level--;
     if (level <= 0) {
      next ();
      break;
     }
    }
    next ();
   }
  }
  tok_str_add (&init_str, -1);
  tok_str_add (&init_str, 0);


  save_parse_state (&saved_parse_state);

  macro_ptr = init_str.str;
  next ();
  decl_initializer (type, 0, 1, 1);

  macro_ptr = init_str.str;
  next ();


  size = type_size (type, &align);
  if (size < 0) {
   TCC_ERR ("unknown type size");
  }
 }
 if (flexible_array) {
  size += flexible_array->type.ref->c * pointed_size (&flexible_array->type);
 }

 if (ad->aligned) {
  if (ad->aligned > align) {
   align = ad->aligned;
  }
 } else if (ad->packed) {
  align = 1;
 }
 if ((r & VT_VALMASK) == VT_LOCAL) {
  loc = (loc - size) & - align;
  addr = loc;
  if (v) {

   sym_push (v, type, r, addr);
  } else {

   vset (type, r, addr);
  }
 } else {
  Sym *sym;

  sym = NULL;
  if (v && scope == VT_CONST) {

   sym = sym_find (v);
   if (sym) {
    if (!is_compatible_types (&sym->type, type)) {
     TCC_ERR ("incompatible types for redefinition of '%s'",
      get_tok_str (v, NULL));
    }
    if (sym->type.t & VT_EXTERN) {

     sym->type.t &= ~VT_EXTERN;


     if ((sym->type.t & VT_ARRAY) &&
         sym->type.ref->c < 0 &&
         type->ref->c >= 0) {
      sym->type.ref->c = type->ref->c;
     }
    } else {







     if (!has_init) {
      goto no_alloc;
     }
    }
   }
  }

  if (v) {
   if (scope != VT_CONST || !sym) {
    sym = sym_push (v, type, r | VT_SYM, 0);
    sym->asm_label = asm_label;
   }
  } else {
   CValue cval = { 0 };
   vsetc (type, VT_CONST | VT_SYM, &cval);
   vtop->sym = sym;
  }

  if ((type->t & VT_WEAK) && sym) {
   weaken_symbol (sym);
  }
 }
no_alloc:
 ;
}

#if 1


static void func_decl_list(Sym *func_sym) {
 AttributeDef ad;
 int v;
 Sym *s = NULL;
 CType btype, type;


 while (tcc_nerr () == 0 && tok != '{' && tok != ';' && tok != ',' && tok != TOK_EOF &&
        tok != TOK_ASM1 && tok != TOK_ASM2 && tok != TOK_ASM3) {
  if (!parse_btype (&btype, &ad)) {
   expect ("declaration list");
  }
  if ((is_enum(&btype) || is_structured(&btype)) && tok == ';') {

  } else {
   while (tcc_nerr () == 0) {
    int found;
    type = btype;
    type_decl (&type, &ad, &v, TYPE_DIRECT);

    s = func_sym;
    found = 0;
    while ((s = s->next) != NULL) {
     if ((s->v & ~SYM_FIELD) == v) {
      found = 1;
      break;
     }
    }
    if (found == 0) {
     TCC_ERR ("declaration for parameter '%s' but no such parameter",
      get_tok_str (v, NULL));
    }

    if (type.t & VT_STORAGE) {
     TCC_ERR ("storage class specified for '%s'", get_tok_str (v, NULL));
    }
    convert_parameter_type (&type);

    if (s) {
     s->type = type;
    }

    if (tok == ',') {
     next ();
    } else {
     break;
    }
   }
  }
  skip (';');
 }
}
#endif

#if 1

static int decl0(int l, int is_for_loop_init) {
 int v, has_init, r;
 CType type = {.t = 0, .ref = NULL}, btype = {.t = 0, .ref = NULL};
 Sym *sym = NULL;
 AttributeDef ad;

 while (tcc_nerr () == 0) {
  if (!parse_btype (&btype, &ad)) {
   if (is_for_loop_init) {
    return 0;
   }


   if (tok == ';') {
    next ();
    continue;
   }
   if (l == VT_CONST &&
       (tok == TOK_ASM1 || tok == TOK_ASM2 || tok == TOK_ASM3)) {

#if 1
    eprintf ("global asm not supported\n");
    return 1;
#endif

    continue;
   }


   if (l == VT_LOCAL || tok < TOK_DEFINE) {
    break;
   }
   btype.t = VT_INT32;
  }
  if ((is_enum(&btype) || is_structured(&btype)) && tok == ';') {

   next ();
   continue;
  }

  while (tcc_nerr () == 0) {
   type = btype;
   type_decl (&type, &ad, &v, TYPE_DIRECT);
#if 0
   {
    char buf[500];
    type_to_str (buf, sizeof(buf), t, get_tok_str (v, NULL));
    printf ("type = '%s'\n", buf);
   }
#endif
   if ((type.t & VT_BTYPE) == VT_FUNC) {
    if ((type.t & VT_STATIC) && (l == VT_LOCAL)) {
     tcc_error ("function without file scope cannot be static");
     return 1;
    }


    sym = type.ref;
    if (sym->c == FUNC_OLD) {
     func_decl_list (sym);
    }
   }

   if (ad.weak) {
    type.t |= VT_WEAK;
   }
#ifdef TCC_TARGET_PE
   if (ad.func_import) {
    type.t |= VT_IMPORT;
   }
   if (ad.func_export) {
    type.t |= VT_EXPORT;
   }
#endif
   if (tok == '{') {
    if (l == VT_LOCAL) {
     tcc_error ("cannot use local functions");
     return 1;
    }
    if ((type.t & VT_BTYPE) != VT_FUNC) {
     expect ("function definition");
    }


    sym = type.ref;
    if (sym) {
     while ((sym = sym->next) != NULL)
      if (!(sym->v & ~SYM_FIELD)) {
       expect ("identifier");
      }
    } else {
     return 0;
    }


    if ((type.t & (VT_EXTERN | VT_INLINE)) == (VT_EXTERN | VT_INLINE)) {
     type.t = (type.t & ~VT_EXTERN) | VT_STATIC;
    }

    sym = sym_find (v);
    if (sym) {
     if ((sym->type.t & VT_BTYPE) != VT_FUNC) {
      goto func_error1;
     }

     r = sym->type.ref->r;

     if (FUNC_CALL (r) != FUNC_CDECL
         && FUNC_CALL (type.ref->r) == FUNC_CDECL) {
      FUNC_CALL (type.ref->r) = FUNC_CALL (r);
     }


     if (FUNC_EXPORT (r)) {
      FUNC_EXPORT (type.ref->r) = 1;
     }


     if (sym->type.t & VT_STATIC) {
      type.t = (type.t & ~VT_EXTERN) | VT_STATIC;
     }

     if (!is_compatible_types (&sym->type, &type)) {
func_error1:
      tcc_error ("incompatible types for redefinition of '%s'",
       get_tok_str (v, NULL));
      return 1;
     }

     sym->type = type;
    } else {

     sym = global_identifier_push (v, type.t, 0);
     if (!sym) {
      return 1;
     }
     sym->type.ref = type.ref;
    }
    break;
   } else {
    if (btype.t & VT_TYPEDEF) {


     if (tok != ';') {
      v = tok;
      next();
     }
     sym = sym_push (v, &type, INT_ATTR (&ad), 0);
     if (!sym) {
      return 1;
     }
     sym->type.t |= VT_TYPEDEF;

     const char *alias = NULL;
     char buf[500];
     alias = get_tok_str(v, NULL);
     type_to_str(buf, sizeof(buf), &sym->type, NULL);
     tcc_appendf ("%s=typedef\n", alias);
     tcc_appendf ("typedef.%s=%s\n", alias, buf);
     tcc_typedef_alias_fields (alias);
    } else {
     r = 0;
     if ((type.t & VT_BTYPE) == VT_FUNC) {


      type.ref->r = INT_ATTR (&ad);
     } else if (!(type.t & VT_ARRAY)) {

      r |= lvalue_type (type.t);
     }
     has_init = (tok == '=');
     if (has_init && (type.t & VT_VLA)) {
      tcc_error ("Variable length array cannot be initialized");
      return 1;
     }
    }
    if (tok != ',') {
     if (is_for_loop_init) {
      return 1;
     }
     skip (';');
     break;
    }
    next ();
   }
   ad.aligned = 0;
  }
 }
 return 0;
}
#endif
