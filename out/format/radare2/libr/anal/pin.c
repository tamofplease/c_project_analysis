# 1 "project/radare2/libr/anal/pin.c"


#include <r_anal.h>

typedef void (*RAnalEsilPin)(RAnal *a);

#if 0


static void pin_strlen(RAnal *a) {



 eprintf ("esilpin: strlen\n");
}

static void pin_write(RAnal *a) {





 eprintf ("esilpin: write\n");
}
#endif



#define DB a->sdb_pins

R_API void r_anal_pin_init(RAnal *a) {
 sdb_free (DB);
 DB = sdb_new0();


}

R_API void r_anal_pin_fini(RAnal *a) {
 if (sdb_free (DB)) {
  DB = NULL;
 }
}

R_API void r_anal_pin(RAnal *a, ut64 addr, const char *name) {
 char buf[64];
 const char *key = sdb_itoa (addr, buf, 16);
 sdb_set (DB, key, name, 0);
}

R_API void r_anal_pin_unset(RAnal *a, ut64 addr) {
 char buf[64];
 const char *key = sdb_itoa (addr, buf, 16);
 sdb_unset (DB, key, 0);
}

R_API const char *r_anal_pin_call(RAnal *a, ut64 addr) {
 char buf[64];
 const char *key = sdb_itoa (addr, buf, 16);
 if (key) {
  const char *name = sdb_const_get (DB, key, NULL);

  if (name && a->pincmd) {

   a->coreb.cmdf (a->coreb.core, "%s %s", a->pincmd, name);
   r_cons_flush ();
  }
  return name;
#if 0
  const char *name;
  if (name) {
   RAnalEsilPin fcnptr = (RAnalEsilPin)
    sdb_ptr_get (DB, name, NULL);
   if (fcnptr) {
    fcnptr (a);
    return true;
   }
  }
#endif
 }
 return NULL;
}

static bool cb_list(void *user, const char *k, const char *v) {
 RAnal *a = (RAnal*)user;
 if (*k == '0') {

  a->cb_printf ("aep %s @ %s\n", v, k);

 } else {

  a->cb_printf ("PIN %s\n", k);
 }
 return true;
}

R_API void r_anal_pin_list(RAnal *a) {
 sdb_foreach (DB, cb_list, a);
}