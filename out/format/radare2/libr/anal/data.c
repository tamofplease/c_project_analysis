# 1 "project/radare2/libr/anal/data.c"


#include <r_anal.h>

#define MINLEN 1
static int is_string(const ut8 *buf, int size, int *len) {
 int i;
 if (size < 1) {
  return 0;
 }
 if (size > 3 && buf[0] && !buf[1] && buf[2] && !buf[3]) {
  *len = 1;
  return 2;
 }
 for (i = 0; i < size; i++) {
  if (!buf[i] && i > MINLEN) {
   *len = i;
   return 1;
  }
  if (buf[i] == 10 || buf[i] == 13 || buf[i] == 9) {
   continue;
  }
  if (buf[i] < 32 || buf[i] > 127) {

   return 0;
  }
  if (!IS_PRINTABLE (buf[i])) {
   *len = i;
   return 0;
  }
 }
 *len = i;
 return 1;
}

static int is_number(const ut8 *buf, int size) {
 ut64 n = r_mem_get_num (buf, size);
 return (n < UT32_MAX)? (int)n: 0;
}

static int is_null(const ut8 *buf, int size) {
 const char zero[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
 return (!memcmp (buf, &zero, size))? 1: 0;
}

static int is_invalid(const ut8 *buf, int size) {
 if (size < 1) {
  return 1;
 }
 if (size > 8) {
  size = 8;
 }
 return (!memcmp (buf, "\xff\xff\xff\xff\xff\xff\xff\xff", size))? 1: 0;
}

#define USE_IS_VALID_OFFSET 1
static ut64 is_pointer(RAnal *anal, const ut8 *buf, int size) {
 ut64 n;
 ut8 buf2[32];
 RIOBind *iob = &anal->iob;
 if (size > sizeof (buf2)) {
  size = sizeof (buf2);
 }
 n = r_mem_get_num (buf, size);
 if (!n) {
  return 1;
 }
#if USE_IS_VALID_OFFSET
 int r = iob->is_valid_offset (iob->io, n, 0);
 return r? n: 0LL;
#else




 if (n < 0x1000) return 0;
 if (n > 0xffffffffffffLL) return 0;

 if (iob->read_at (iob->io, n, buf2, size) != size) return 0;
 return is_invalid (buf2, size)? 0: n;
#endif
}

static bool is_bin(const ut8 *buf, int size) {

 if ((size >= 4 && !memcmp (buf, "\xcf\xfa\xed\xfe", 4))) {
  return true;
 }
 if ((size >= 4 && !memcmp (buf, "\x7f\x45\x4c\x46", 4))) {
  return true;
 }
 if ((size >= 2 && !memcmp (buf, "MZ", 2))) {
  return true;
 }
 return false;
}



R_API char *r_anal_data_to_string(RAnalData *d, RConsPrintablePalette *pal) {
 int i, len, mallocsz = 1024;
 ut32 n32;

 if (!d) {
  return NULL;
 }

 RStrBuf *sb = r_strbuf_new (NULL);
 if (!sb || !r_strbuf_reserve (sb, mallocsz)) {
  eprintf ("Cannot allocate %d byte(s)\n", mallocsz);
  return NULL;
 }
 if (pal) {
  const char *k = pal->offset;
  r_strbuf_appendf (sb, "%s0x%08" PFMT64x Color_RESET"  ", k, d->addr);
 } else {
  r_strbuf_appendf (sb, "0x%08" PFMT64x "  ", d->addr);
 }
 n32 = (ut32)d->ptr;
 len = R_MIN (d->len, 8);
 for (i = 0; i < len; i++) {
  r_strbuf_appendf (sb, "%02x", d->buf[i]);
 }
 if (i > 0 && d->len > len) {
  r_strbuf_append (sb, "..");
 }
 r_strbuf_append (sb, "  ");
 switch (d->type) {
 case R_ANAL_DATA_TYPE_STRING:
  if (pal) {
   r_strbuf_appendf (sb, "%sstring \"%s\""Color_RESET, pal->comment, d->str);
  } else {
   r_strbuf_appendf (sb, "string \"%s\"", d->str);
  }
  break;
 case R_ANAL_DATA_TYPE_WIDE_STRING:
  r_strbuf_append (sb, "wide string");
  break;
 case R_ANAL_DATA_TYPE_NUMBER:
  if (pal) {
   const char *k = pal->num;
   if (n32 == d->ptr) {
    r_strbuf_appendf (sb, "%snumber %d (0x%x)"Color_RESET, k, n32, n32);
   } else {
    r_strbuf_appendf (sb, "%snumber %" PFMT64d " (0x%" PFMT64x ")"Color_RESET,
      k, d->ptr, d->ptr);
   }
  } else {
   if (n32 == d->ptr) {
    r_strbuf_appendf (sb, "number %d 0x%x", n32, n32);
   } else {
    r_strbuf_appendf (sb, "number %" PFMT64d " 0x%" PFMT64x,
      d->ptr, d->ptr);
   }
  }
  break;
 case R_ANAL_DATA_TYPE_POINTER:
  r_strbuf_append (sb, "pointer ");
  if (pal) {
   const char *k = pal->offset;
   r_strbuf_appendf (sb, " %s0x%08" PFMT64x, k, d->ptr);
  } else {
   r_strbuf_appendf (sb, " 0x%08" PFMT64x, d->ptr);
  }
  break;
 case R_ANAL_DATA_TYPE_INVALID:
  if (pal) {
   r_strbuf_appendf (sb, "%sinvalid"Color_RESET, pal->invalid);
  } else {
   r_strbuf_append (sb, "invalid");
  }
  break;
 case R_ANAL_DATA_TYPE_HEADER:
  r_strbuf_append (sb, "header");
  break;
 case R_ANAL_DATA_TYPE_SEQUENCE:
  r_strbuf_append (sb, "sequence");
  break;
 case R_ANAL_DATA_TYPE_PATTERN:
  r_strbuf_append (sb, "pattern");
  break;
 case R_ANAL_DATA_TYPE_UNKNOWN:
  if (pal) {
   r_strbuf_appendf (sb, "%sunknown"Color_RESET, pal->invalid);
  } else {
   r_strbuf_append (sb, "unknown");
  }
  break;
 default:
  if (pal) {
   r_strbuf_appendf (sb, "%s(null)"Color_RESET, pal->b0x00);
  } else {
   r_strbuf_append (sb, "(null)");
  }
  break;
 }
 return r_strbuf_drain (sb);
}

R_API RAnalData *r_anal_data_new_string(ut64 addr, const char *p, int len, int type) {
 RAnalData *ad = R_NEW0 (RAnalData);
 if (!ad) {
  return NULL;
 }
 ad->str = NULL;
 ad->addr = addr;
 ad->type = type;
 if (len == 0) {
  len = strlen (p);
 }

 if (type == R_ANAL_DATA_TYPE_WIDE_STRING) {

 } else {
  ad->str = malloc (len + 1);
  if (!ad->str) {
   r_anal_data_free (ad);
   return NULL;
  }
  memcpy (ad->str, p, len);
  ad->str[len] = 0;
  ad->buf = malloc (len + 1);
  if (!ad->buf) {
   r_anal_data_free (ad);
   eprintf ("Cannot allocate %d byte(s)\n", len + 1);
   return NULL;
  }
  memcpy (ad->buf, ad->str, len + 1);
  ad->len = len + 1;
 }
 ad->ptr = 0L;
 return ad;
}

R_API RAnalData *r_anal_data_new(ut64 addr, int type, ut64 n, const ut8 *buf, int len) {
 RAnalData *ad = R_NEW0 (RAnalData);
 int l = R_MIN (len, 8);
 if (!ad) {
  return NULL;
 }
 ad->buf = (ut8 *)&(ad->sbuf);
 memset (ad->buf, 0, 8);
 if (l < 1) {
  r_anal_data_free (ad);
  return NULL;
 }
 if (buf) {
  memcpy (ad->buf, buf, l);
 }
 ad->addr = addr;
 ad->type = type;
 ad->str = NULL;
 switch (type) {
 case R_ANAL_DATA_TYPE_PATTERN:
 case R_ANAL_DATA_TYPE_SEQUENCE:
  ad->len = len;
  break;
 default:
  ad->len = l;
 }
 ad->ptr = n;
 return ad;
}

R_API void r_anal_data_free(RAnalData *d) {
 if (d) {
  if (d->buf != (ut8 *)&(d->sbuf)) {
   free (d->buf);
  }
  free (d->str);
  free (d);
 }
}

R_API RAnalData *r_anal_data(RAnal *anal, ut64 addr, const ut8 *buf, int size, int wordsize) {
 ut64 dst = 0;
 int n, nsize = 0;
 int bits = anal->bits;
 int word = wordsize? wordsize: R_MIN (8, bits / 8);

 if (size < 4) {
  return NULL;
 }
 if (size >= word && is_invalid (buf, word)) {
  return r_anal_data_new (addr, R_ANAL_DATA_TYPE_INVALID, -1, buf, word);
 }
 {
  int i, len = R_MIN (size, 64);
  int is_pattern = 0;
  int is_sequence = 0;
  char ch = buf[0];
  char ch2 = ch + 1;
  for (i = 1; i < len; i++) {
   if (ch2 == buf[i]) {
    ch2++;
    is_sequence++;
   } else {
    is_sequence = 0;
   }
   if (ch == buf[i]) {
    is_pattern++;
   }
  }
  if (is_sequence > len - 2) {
   return r_anal_data_new (addr, R_ANAL_DATA_TYPE_SEQUENCE, -1,
      buf, is_sequence);
  }
  if (is_pattern > len - 2) {
   return r_anal_data_new (addr, R_ANAL_DATA_TYPE_PATTERN, -1,
      buf, is_pattern);
  }
 }
 if (size >= word && is_null (buf, word)) {
  return r_anal_data_new (addr, R_ANAL_DATA_TYPE_NULL, -1, buf, word);
 }
 if (is_bin (buf, size)) {
  return r_anal_data_new (addr, R_ANAL_DATA_TYPE_HEADER, -1, buf, word);
 }
 if (size >= word) {
  dst = is_pointer (anal, buf, word);
  if (dst) {
   return r_anal_data_new (addr, R_ANAL_DATA_TYPE_POINTER, dst, buf, word);
  }
 }
 switch (is_string (buf, size, &nsize)) {
 case 1: return r_anal_data_new_string (addr, (const char *)buf, nsize, R_ANAL_DATA_TYPE_STRING);
 case 2: return r_anal_data_new_string (addr, (const char *)buf, nsize, R_ANAL_DATA_TYPE_WIDE_STRING);
 }
 if (size >= word) {
  n = is_number (buf, word);
  if (n) {
   return r_anal_data_new (addr, R_ANAL_DATA_TYPE_NUMBER, n, buf, word);
  }
 }
 return r_anal_data_new (addr, R_ANAL_DATA_TYPE_UNKNOWN, dst, buf, R_MIN (word, size));
}

R_API const char *r_anal_data_kind(RAnal *a, ut64 addr, const ut8 *buf, int len) {
 int inv = 0;
 int unk = 0;
 int str = 0;
 int num = 0;
 int i, j;
 RAnalData *data;
 int word = a->bits / 8;
 for (i = j = 0; i < len; j++) {
  if (str && !buf[i]) {
   str++;
  }
  data = r_anal_data (a, addr + i, buf + i, len - i, 0);
  if (!data) {
   i += word;
   continue;
  }
  switch (data->type) {
  case R_ANAL_DATA_TYPE_INVALID:
   inv++;
   i += word;
   break;
  case R_ANAL_DATA_TYPE_NUMBER:
   if (data->ptr > 1000) {
    num++;
   }
   i += word;
   break;
  case R_ANAL_DATA_TYPE_UNKNOWN:
   unk++;
   i += word;
   break;
  case R_ANAL_DATA_TYPE_STRING:
   if (data->len > 0) {
    i += data->len;
   } else {
    i += word;
   }
   str++;
   break;
  default:
   i += word;
  }
  r_anal_data_free (data);
 }
 if (j < 1) {
  return "unknown";
 }
 if ((inv * 100 / j) > 60) {
  return "invalid";
 }
 if ((unk * 100 / j) > 60) {
  return "code";
 }
 if ((num * 100 / j) > 60) {
  return "code";
 }
 if ((str * 100 / j) > 40) {
  return "text";
 }
 return "data";
}

R_API const char *r_anal_datatype_to_string(RAnalDataType t) {
 switch (t) {
 case R_ANAL_DATATYPE_NULL:
  return NULL;
 case R_ANAL_DATATYPE_ARRAY:
  return "array";
 case R_ANAL_DATATYPE_OBJECT:
  return "object";
 case R_ANAL_DATATYPE_STRING:
  return "string";
 case R_ANAL_DATATYPE_CLASS:
  return "class";
 case R_ANAL_DATATYPE_BOOLEAN:
  return "boolean";
 case R_ANAL_DATATYPE_INT16:
  return "int16";
 case R_ANAL_DATATYPE_INT32:
  return "int32";
 case R_ANAL_DATATYPE_INT64:
  return "int64";
 case R_ANAL_DATATYPE_FLOAT:
  return "float";
 }
 return NULL;
}
