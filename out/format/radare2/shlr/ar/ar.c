# 1 "project/radare2/shlr/ar/ar.c"

#include <stdio.h>
#include <r_util.h>
#include "ar.h"

#define AR_MAGIC_HEADER "!<arch>\n"
#define AR_FILE_HEADER_END "`\n"

typedef struct Filetable {
 char *data;
 ut64 size;
 ut64 offset;
} filetable;

static RArFp *arfp_new(RBuffer *b, ut32 *refcount) {
 r_return_val_if_fail (b, NULL);
 RArFp *f = R_NEW (RArFp);
 if (f) {
  if (refcount) {
   (*refcount)++;
  }
  f->name = NULL;
  f->refcount = refcount;
  f->buf = b;
  f->start = 0;
  f->end = 0;
 }
 return f;
}

bool ar_check_magic(RBuffer *b) {
 char buf[sizeof (AR_MAGIC_HEADER) - 1];
 if (r_buf_read (b, (ut8 *)buf, sizeof (buf)) != sizeof (buf)) {
  return false;
 }
 if (strncmp (buf, AR_MAGIC_HEADER, 8)) {
  eprintf ("Wrong file type.\n");
  return false;
 }
 return true;
}

static inline void arf_clean_name(RArFp *arf) {
 free (arf->name);
 arf->name = NULL;
}

static char *name_from_table(ut64 off, filetable *tbl) {
 if (off > tbl->size) {
  eprintf ("Malformed ar: name lookup out of bounds for header at offset 0x%" PFMT64x "\n", off);
  return NULL;
 }



 char *buf = tbl->data;
 ut64 i;
 for (i = off; i < tbl->size; i++) {
  char c = buf[i];
  if (c == '\n' || c == '\0') {
   break;
  }
 }
 if (i == off) {
  return NULL;
 }
 return r_str_newlen (buf + off, i - off - 1);
}

#define VERIFY_AR_NUM_FIELD(x,s) \
 x[sizeof (x) - 1] = '\0'; \
 r_str_trim_tail (x); \
 if (x[0] != '\0' && (x[0] == '-' || !r_str_isnumber (x))) { \
  eprintf ("Malformed AR: bad %s in header at offset 0x%" PFMT64x "\n", s, h_off); \
  return -1; \
 }


static int ar_parse_header(RArFp *arf, filetable *tbl, ut64 arsize) {
 r_return_val_if_fail (arf && arf->buf && tbl, -1);
 RBuffer *b = arf->buf;

 ut64 h_off = r_buf_tell (b);
 if (h_off % 2 == 1) {

  ut8 tmp[1];
  if (r_buf_read (b, tmp, 1) != 1 || tmp[0] != '\n') {
   return -1;
  }
  h_off++;
 }

 struct header {
  char name[16];
  char timestamp[12];
  char oid[6];
  char gid[6];
  char mode[8];
  char size[10];
  char end[2];
 } h;

 int r = r_buf_read (b, (ut8 *)&h, sizeof (h));
 if (r != sizeof (h)) {
  if (r == 0) {
   return 1;
  }
  if (r < 0) {
   eprintf ("AR read io error\n");
  } else {
   eprintf ("Malformed AR: Invalid length while parsing header at 0x%" PFMT64x "\n", h_off);
  }
  return -1;
 }

 if (strncmp (h.end, AR_FILE_HEADER_END, sizeof (h.end))) {
  eprintf ("Invalid header at offset 0x%" PFMT64x ": bad end field\n", h_off);
  return -1;
 }


 VERIFY_AR_NUM_FIELD (h.timestamp, "timestamp")
 VERIFY_AR_NUM_FIELD (h.oid, "oid")
 VERIFY_AR_NUM_FIELD (h.gid, "gid")
 VERIFY_AR_NUM_FIELD (h.mode, "mode")
 VERIFY_AR_NUM_FIELD (h.size, "size")

 if (h.size[0] == '\0') {
  eprintf ("Malformed AR: bad size in header at offset 0x%" PFMT64x "\n", h_off);
  return -1;
 }
 ut64 size = atol (h.size);

 h.timestamp[0] = '\0';
 r_str_trim_tail (h.name);




 if (!strcmp (h.name, "/")) {

  if (r_buf_seek (b, size, R_BUF_CUR) <= 0 || r_buf_tell (b) > arsize) {
   eprintf ("Malformed ar: too short\n");
   return -1;
  }

  return ar_parse_header (arf, tbl, arsize);
 } else if (!strcmp (h.name, "//")) {

  if (tbl->data || tbl->size != 0) {
   eprintf ("invalid ar file: two filename lookup tables (at 0x%" PFMT64x ", and 0x%" PFMT64x ")\n", tbl->offset, h_off);
   return -1;
  }
  tbl->data = (char *)malloc (size + 1);
  if (!tbl->data || r_buf_read (b, (ut8 *)tbl->data, size) != size) {
   return -1;
  }
  tbl->data[size] = '\0';
  tbl->size = size;
  tbl->offset = h_off;


  return ar_parse_header (arf, tbl, arsize);
 }




 RList *list = r_str_split_duplist (h.name, "/", false);
 if (r_list_length (list) != 2) {
  r_list_free (list);
  eprintf ("invalid ar file: invalid file name in header at: 0x%" PFMT64x "\n", h_off);
  return -1;
 }

 char *tmp = r_list_pop_head (list);
 if (tmp[0] == '\0') {
  free (tmp);
  tmp = r_list_pop (list);
  if (r_str_isnumber (tmp)) {
   arf->name = name_from_table (atol (tmp), tbl);
  } else {
   eprintf ("invalid ar file: invalid file name in header at: 0x%" PFMT64x "\n", h_off);
  }
  free (tmp);
 } else {
  arf->name = tmp;
  tmp = r_list_pop (list);
  if (tmp[0]) {
   arf_clean_name (arf);
   eprintf ("invalid ar file: invalid file name in header at: 0x%" PFMT64x "\n", h_off);
  }
  free (tmp);
 }
 r_list_free (list);

 if (!arf->name) {
  return -1;
 }
 arf->start = r_buf_tell (b);
 arf->end = arf->start + size;


 if (r_buf_seek (b, size, R_BUF_CUR) <= 0 || r_buf_tell (b) > arsize) {
  eprintf ("Malformed ar: missing the end of %s (header offset: 0x%" PFMT64x ")\n", arf->name, h_off);
  arf_clean_name (arf);
  return -1;
 }

 return 0;
}
#undef VERIFY_AR_NUM_FIELD

typedef struct single_file_data {
 const char *name;
 RArFp **ret;
} single_file_data;

static int __ar_open_file_cb(RArFp *arf, void *user) {
 single_file_data *data = user;
 if (!data->name) {
  printf ("%s\n", arf->name);
 } else if (!strcmp (data->name, arf->name)) {
  *data->ret = arf;
  return 1;
 }
 ar_close (arf);
 return 0;
}
# 240 "project/radare2/shlr/ar/ar.c"
R_API RArFp *ar_open_file(const char *arname, const char *filename) {
 RArFp *ret = NULL;
 single_file_data data;
 data.name = filename;
 data.ret = &ret;
 if (ar_open_all_cb (arname, (RArOpenManyCB)__ar_open_file_cb, (void *)&data) < 0) {
  ar_close (ret);
  return NULL;
 }
 return ret;
}

static int __ar_open_list_cb(RArFp *arf, void *user) {
 RList *l = user;
 if (!r_list_append (l, arf)) {
  ar_close (arf);
  return -1;
 }
 return 0;
}
# 269 "project/radare2/shlr/ar/ar.c"
R_API RList *ar_open_all(const char *arname) {
 RList *list = r_list_newf ((RListFree)ar_close);
 if (!list) {
  return NULL;
 }
 if (ar_open_all_cb (arname, (RArOpenManyCB)__ar_open_list_cb, (void *)list) > 0) {
  return list;
 }
 r_list_free (list);
 return NULL;
}
# 293 "project/radare2/shlr/ar/ar.c"
R_API int ar_open_all_cb(const char *arname, RArOpenManyCB cb, void *user) {
 r_return_val_if_fail (arname, -1);
 RBuffer *b = r_buf_new_file (arname, O_RDWR, 0);
 if (!b) {
  r_sys_perror (__FUNCTION__);
  return -1;
 }

 r_buf_seek (b, 0, R_BUF_END);
 ut64 arsize = r_buf_tell (b);
 r_buf_seek (b, 0, R_BUF_SET);

 if (!ar_check_magic (b)) {
  r_buf_free (b);
  return -1;
 }

 filetable tbl = { NULL, 0, 0 };

 ut32 *refc = R_NEW (ut32);
 if (!refc) {
  r_buf_free (b);
  free (refc);
  return -1;
 }




 *refc = 1;

 int r = 0;
 while (!r) {
  RArFp *arf = arfp_new (b, refc);
  if (!arf) {
   r = -1;
   break;
  }
  r = ar_parse_header (arf, &tbl, arsize);
  if (!r) {
   r = cb (arf, user);
  } else {
   ar_close (arf);
  }
 }

 free (tbl.data);

 if (*refc == 1) {

  free (refc);
  r_buf_free (b);
 } else {

  (*refc)--;
 }

 return r;
}

R_API int ar_close(RArFp *f) {
 if (f) {
  free (f->name);
  (*f->refcount)--;


  if (*f->refcount == 0) {
   free (f->refcount);
   r_buf_free (f->buf);
  }
  free (f);
 }
 return 0;
}

R_API int ar_read_at(RArFp *f, ut64 off, void *buf, int count) {
 off += f->start;
 if (off > f->end) {
  return -1;
 }
 if (count + off > f->end) {
  count = f->end - off;
 }
 return r_buf_read_at (f->buf, off, buf, count);
}

R_API int ar_write_at(RArFp *f, ut64 off, void *buf, int count) {
 off += f->start;
 if (off > f->end) {
  return -1;
 }
 if (count + off > f->end) {
  count = f->end - off;
 }
 return r_buf_write_at (f->buf, off + f->start, buf, count);
}
