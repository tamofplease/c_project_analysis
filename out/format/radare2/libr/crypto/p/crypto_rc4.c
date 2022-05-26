# 1 "project/radare2/libr/crypto/p/crypto_rc4.c"


#include <r_lib.h>
#include <r_crypto.h>


struct rc4_state {
 ut8 perm[256];
 ut8 index1;
 ut8 index2;
 int key_size;
};

static __inline void swap_bytes(ut8 *a, ut8 *b) {
 if (a != b) {
  ut8 temp = *a;
  *a = *b;
  *b = temp;
 }
}






static bool rc4_init(struct rc4_state *const state, const ut8 *key, int keylen) {
 ut8 j;
 int i;

 if (!state || !key || keylen < 1) {
  return false;
 }
 state->key_size = keylen;

 for (i = 0; i < 256; i++) {
  state->perm[i] = (ut8)i;
 }
 state->index1 = 0;
 state->index2 = 0;


 for (j = i = 0; i < 256; i++) {
  j += state->perm[i] + key[i % keylen];
  swap_bytes (&state->perm[i], &state->perm[j]);
 }
 return true;
}







static void rc4_crypt(struct rc4_state *const state, const ut8 *inbuf, ut8 *outbuf, int buflen) {
 int i;
 ut8 j;

 for (i = 0; i < buflen; i++) {

  state->index1++;
  state->index2 += state->perm[state->index1];

  swap_bytes (&state->perm[state->index1],
      &state->perm[state->index2]);

  j = state->perm[state->index1] + state->perm[state->index2];
  outbuf[i] = inbuf[i] ^ state->perm[j];
 }
}



static struct rc4_state st;

static bool rc4_set_key(RCrypto *cry, const ut8 *key, int keylen, int mode, int direction) {
 return rc4_init (&st, key, keylen);
}

static int rc4_get_key_size(RCrypto *cry) {
 return st.key_size;
}

static bool rc4_use(const char *algo) {
 return !strcmp (algo, "rc4");
}

static bool update(RCrypto *cry, const ut8 *buf, int len) {
 ut8 *obuf = calloc (1, len);
 if (!obuf) {
  return false;
 }
 rc4_crypt (&st, buf, obuf, len);
 r_crypto_append (cry, obuf, len);
 free (obuf);
 return false;
}

static bool final(RCrypto *cry, const ut8 *buf, int len) {
 return update (cry, buf, len);
}

RCryptoPlugin r_crypto_plugin_rc4 = {
 .name = "rc4",
 .set_key = rc4_set_key,
 .get_key_size = rc4_get_key_size,
 .use = rc4_use,
 .update = update,
 .final = final
};

#ifndef R2_PLUGIN_INCORE
R_API RLibStruct radare_plugin = {
 .type = R_LIB_TYPE_CRYPTO,
 .data = &r_crypto_plugin_rc4,
 .version = R2_VERSION
};
#endif

#if 0
int main() {
 ut8 out[32];
 struct rc4_state st;


 rc4_init (&st, (const ut8*)"key", 3);
 rc4_crypt(&st, (const ut8*)"hello world", out, sizeof (out));


 rc4_init (&st, (const ut8*)"key", 3);
 rc4_crypt(&st, out, out, sizeof (out));

 eprintf ("%s\n", (const char *)out);
}
#endif
