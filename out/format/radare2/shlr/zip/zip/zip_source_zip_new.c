# 1 "project/radare2/shlr/zip/zip/zip_source_zip_new.c"
# 36 "project/radare2/shlr/zip/zip/zip_source_zip_new.c"
#include <stdlib.h>

#include "zipint.h"



struct zip_source *
_zip_source_zip_new(struct zip *za, struct zip *srcza, zip_uint64_t srcidx, zip_flags_t flags,
      zip_uint64_t start, zip_uint64_t len, const char *password)
{
    zip_compression_implementation comp_impl;
    zip_encryption_implementation enc_impl;
    struct zip_source *src, *s2;
    zip_uint64_t offset;
    struct zip_stat st;

    if (za == NULL)
 return NULL;

    if (srcza == NULL || srcidx >= srcza->nentry) {
 _zip_error_set(&za->error, ZIP_ER_INVAL, 0);
 return NULL;
    }

    if ((flags & ZIP_FL_UNCHANGED) == 0
 && (ZIP_ENTRY_DATA_CHANGED(srcza->entry+srcidx) || srcza->entry[srcidx].deleted)) {
 _zip_error_set(&za->error, ZIP_ER_CHANGED, 0);
 return NULL;
    }

    if (zip_stat_index(srcza, srcidx, flags|ZIP_FL_UNCHANGED, &st) < 0) {
 _zip_error_set(&za->error, ZIP_ER_INTERNAL, 0);
 return NULL;
    }

    if (flags & ZIP_FL_ENCRYPTED)
 flags |= ZIP_FL_COMPRESSED;

    if ((start > 0 || len > 0) && (flags & ZIP_FL_COMPRESSED)) {
 _zip_error_set(&za->error, ZIP_ER_INVAL, 0);
 return NULL;
    }


    if ((start > 0 || len > 0) && (start+len < start || start+len > st.size)) {
 _zip_error_set(&za->error, ZIP_ER_INVAL, 0);
 return NULL;
    }

    enc_impl = NULL;
    if (((flags & ZIP_FL_ENCRYPTED) == 0) && (st.encryption_method != ZIP_EM_NONE)) {
 if (password == NULL) {
     _zip_error_set(&za->error, ZIP_ER_NOPASSWD, 0);
     return NULL;
 }
 if ((enc_impl=_zip_get_encryption_implementation(st.encryption_method)) == NULL) {
     _zip_error_set(&za->error, ZIP_ER_ENCRNOTSUPP, 0);
     return NULL;
 }
    }

    comp_impl = NULL;
    if ((flags & ZIP_FL_COMPRESSED) == 0) {
 if (st.comp_method != ZIP_CM_STORE) {
     if ((comp_impl=_zip_get_compression_implementation(st.comp_method)) == NULL) {
  _zip_error_set(&za->error, ZIP_ER_COMPNOTSUPP, 0);
  return NULL;
     }
 }
    }

    if ((offset=_zip_file_get_offset(srcza, srcidx, &za->error)) == 0)
 return NULL;

    if (st.comp_size == 0) {
 if ((src=zip_source_buffer(za, NULL, 0, 0)) == NULL)
     return NULL;
    }
    else {
 if (start+len > 0 && enc_impl == NULL && comp_impl == NULL) {
     struct zip_stat st2;

     st2.size = len ? len : st.size-start;
     st2.comp_size = st2.size;
     st2.comp_method = ZIP_CM_STORE;
     st2.mtime = st.mtime;
     st2.valid = ZIP_STAT_SIZE|ZIP_STAT_COMP_SIZE|ZIP_STAT_COMP_METHOD|ZIP_STAT_MTIME;


     if ((src=_zip_source_file_or_p(za, NULL, srcza->zp, offset+start, (zip_int64_t)st2.size, 0, &st2)) == NULL)
  return NULL;
 }
 else {

     if ((src=_zip_source_file_or_p(za, NULL, srcza->zp, offset, (zip_int64_t)st.comp_size, 0, &st)) == NULL)
  return NULL;
 }

 if (enc_impl) {
     if ((s2=enc_impl(za, src, st.encryption_method, 0, password)) == NULL) {
  zip_source_free(src);

  return NULL;
     }
     src = s2;
 }
 if (comp_impl) {
     if ((s2=comp_impl(za, src, st.comp_method, 0)) == NULL) {
  zip_source_free(src);

  return NULL;
     }
     src = s2;
 }
 if (((flags & ZIP_FL_COMPRESSED) == 0 || st.comp_method == ZIP_CM_STORE)
     && (len == 0 || len == st.comp_size)) {

     if ((s2=zip_source_crc(za, src, 1)) == NULL) {
  zip_source_free(src);

  return NULL;
     }
     src = s2;
 }

 if (start+len > 0 && (comp_impl || enc_impl)) {
     if ((s2=zip_source_window(za, src, start, len ? len : st.size-start)) == NULL) {
  zip_source_free(src);

  return NULL;
     }
     src = s2;
 }
    }

    return src;
}
