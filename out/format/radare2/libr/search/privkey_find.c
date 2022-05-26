# 1 "project/radare2/libr/search/privkey_find.c"





#include <r_search.h>




#define PRIVKEY_SEARCH_MIN_LENGTH (1 + 1 + 4 + 1)
# 22 "project/radare2/libr/search/privkey_find.c"
static const ut8 *parse_next_field(const ut8 *start, ut32 *len) {
 *len = 0;
 if (!(start[1] & 0x80)) {
  *len = (ut32)start[1];
  return start + 2;
 } else {
  int i;
  const int lensize = start[1] & 0x7f;
  for (i = 0; i < lensize; i++) {
   *len = (*len << 8) | start[2 + i];
  }
  return start + 2 + lensize;
 }
}




static int check_fields(const ut8 *start) {
#define KEY_MAX_LEN 26000
 ut32 field_len = 0;

 const ut8 *ptr = parse_next_field (start, &field_len);
 if (!field_len || field_len > KEY_MAX_LEN) {
  return false;
 }


 ptr = parse_next_field (ptr, &field_len);
 if (field_len != 1) {
  return false;
 }
 ptr = ptr + field_len;
 ptr = parse_next_field (ptr, &field_len);

 if (!field_len || field_len > KEY_MAX_LEN) {
  return false;
 }

 return true;
}




R_IPI int search_privkey_update(RSearch *s, ut64 from, const ut8 *buf, int len) {
 int i, k, max, index, t;
 RListIter *iter;
 RSearchKeyword *kw;
 const size_t old_nhits = s->nhits;
 const ut8 rsa_versionmarker[] = { 0x02, 0x01, 0x00, 0x02 };
 const ut8 ecc_versionmarker[] = { 0x02, 0x01, 0x01, 0x04 };
 const ut8 safecurves_versionmarker[] = { 0x02, 0x01, 0x00, 0x30 };

 if (len < PRIVKEY_SEARCH_MIN_LENGTH) {
  return -1;
 }

 r_list_foreach (s->kws, iter, kw) {

  for (i = 2; i < len - PRIVKEY_SEARCH_MIN_LENGTH; i++) {
   if (memcmp (buf + i, rsa_versionmarker, sizeof (rsa_versionmarker)) &&
    memcmp (buf + i, ecc_versionmarker, sizeof (ecc_versionmarker)) &&
    memcmp (buf + i, safecurves_versionmarker, sizeof (safecurves_versionmarker))) {
    continue;
   }

   index = -1;

   if (i < 5) {
    max = i;
   } else {
    max = 5;
   }
   for (k = i - 2; k >= i - max; k--) {
    if (buf[k] == 0x30) {
     index = k;
     break;
    }
   }

   if (index == -1) {
    continue;
   }

   if (check_fields (buf + index)) {
    parse_next_field(buf + index, &kw->keyword_length);
    t = r_search_hit_new (s, kw, from + index);
    if (t > 1) {
      return s->nhits - old_nhits;

    }
   }
  }
 }
 return -1;
}
