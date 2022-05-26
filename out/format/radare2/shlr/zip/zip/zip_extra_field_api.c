# 1 "project/radare2/shlr/zip/zip/zip_extra_field_api.c"
# 36 "project/radare2/shlr/zip/zip/zip_extra_field_api.c"
#include "zipint.h"



ZIP_EXTERN int
zip_file_extra_field_delete(struct zip *za, zip_uint64_t idx, zip_uint16_t ef_idx, zip_flags_t flags)
{
    struct zip_dirent *de;

    if ((flags & ZIP_EF_BOTH) == 0) {
 _zip_error_set(&za->error, ZIP_ER_INVAL, 0);
 return -1;
    }

    if (_zip_get_dirent(za, idx, 0, NULL) == NULL)
 return -1;

    if (ZIP_IS_RDONLY(za)) {
 _zip_error_set(&za->error, ZIP_ER_RDONLY, 0);
 return -1;
    }

    if (_zip_file_extra_field_prepare_for_change(za, idx) < 0)
        return -1;

    de = za->entry[idx].changes;

    de->extra_fields = _zip_ef_delete_by_id(de->extra_fields, ZIP_EXTRA_FIELD_ALL, ef_idx, flags);
    return 0;
}



ZIP_EXTERN int
zip_file_extra_field_delete_by_id(struct zip *za, zip_uint64_t idx, zip_uint16_t ef_id, zip_uint16_t ef_idx, zip_flags_t flags)
{
    struct zip_dirent *de;

    if ((flags & ZIP_EF_BOTH) == 0) {
 _zip_error_set(&za->error, ZIP_ER_INVAL, 0);
 return -1;
    }

    if (_zip_get_dirent(za, idx, 0, NULL) == NULL)
 return -1;

    if (ZIP_IS_RDONLY(za)) {
 _zip_error_set(&za->error, ZIP_ER_RDONLY, 0);
 return -1;
    }

    if (_zip_file_extra_field_prepare_for_change(za, idx) < 0)
        return -1;

    de = za->entry[idx].changes;

    de->extra_fields = _zip_ef_delete_by_id(de->extra_fields, ef_id, ef_idx, flags);
    return 0;
}



ZIP_EXTERN const zip_uint8_t *
zip_file_extra_field_get(struct zip *za, zip_uint64_t idx, zip_uint16_t ef_idx, zip_uint16_t *idp, zip_uint16_t *lenp, zip_flags_t flags)
{
    static const zip_uint8_t empty[1] = { '\0' };

    struct zip_dirent *de;
    struct zip_extra_field *ef;
    int i;

    if ((flags & ZIP_EF_BOTH) == 0) {
 _zip_error_set(&za->error, ZIP_ER_INVAL, 0);
 return NULL;
    }

    if ((de=_zip_get_dirent(za, idx, flags, &za->error)) == NULL)
 return NULL;

    if (flags & ZIP_FL_LOCAL)
 if (_zip_read_local_ef(za, idx) < 0)
     return NULL;

    i = 0;
    for (ef=de->extra_fields; ef; ef=ef->next) {
 if (ef->flags & flags & ZIP_EF_BOTH) {
     if (i < ef_idx) {
  i++;
  continue;
     }

     if (idp)
  *idp = ef->id;
     if (lenp)
  *lenp = ef->size;
     if (ef->size > 0)
  return ef->data;
     else
  return empty;
 }
    }

    _zip_error_set(&za->error, ZIP_ER_NOENT, 0);
    return NULL;

}



ZIP_EXTERN const zip_uint8_t *
zip_file_extra_field_get_by_id(struct zip *za, zip_uint64_t idx, zip_uint16_t ef_id, zip_uint16_t ef_idx, zip_uint16_t *lenp, zip_flags_t flags)
{
    struct zip_dirent *de;

    if ((flags & ZIP_EF_BOTH) == 0) {
 _zip_error_set(&za->error, ZIP_ER_INVAL, 0);
 return NULL;
    }

    if ((de=_zip_get_dirent(za, idx, flags, &za->error)) == NULL)
 return NULL;

    if (flags & ZIP_FL_LOCAL)
 if (_zip_read_local_ef(za, idx) < 0)
     return NULL;

    return _zip_ef_get_by_id(de->extra_fields, lenp, ef_id, ef_idx, flags, &za->error);
}



ZIP_EXTERN zip_int16_t
zip_file_extra_fields_count(struct zip *za, zip_uint64_t idx, zip_flags_t flags)
{
    struct zip_dirent *de;
    struct zip_extra_field *ef;
    zip_uint16_t n;

    if ((flags & ZIP_EF_BOTH) == 0) {
 _zip_error_set(&za->error, ZIP_ER_INVAL, 0);
 return -1;
    }

    if ((de=_zip_get_dirent(za, idx, flags, &za->error)) == NULL)
 return -1;

    if (flags & ZIP_FL_LOCAL)
 if (_zip_read_local_ef(za, idx) < 0)
     return -1;

    n = 0;
    for (ef=de->extra_fields; ef; ef=ef->next)
 if (ef->flags & flags & ZIP_EF_BOTH)
     n++;

    return (zip_int16_t)n;
}



ZIP_EXTERN zip_int16_t
zip_file_extra_fields_count_by_id(struct zip *za, zip_uint64_t idx, zip_uint16_t ef_id, zip_flags_t flags)
{
    struct zip_dirent *de;
    struct zip_extra_field *ef;
    zip_uint16_t n;

    if ((flags & ZIP_EF_BOTH) == 0) {
 _zip_error_set(&za->error, ZIP_ER_INVAL, 0);
 return -1;
    }

    if ((de=_zip_get_dirent(za, idx, flags, &za->error)) == NULL)
 return -1;

    if (flags & ZIP_FL_LOCAL)
 if (_zip_read_local_ef(za, idx) < 0)
     return -1;

    n = 0;
    for (ef=de->extra_fields; ef; ef=ef->next)
 if (ef->id == ef_id && (ef->flags & flags & ZIP_EF_BOTH))
     n++;

    return (zip_int16_t)n;
}



ZIP_EXTERN int
zip_file_extra_field_set(struct zip *za, zip_uint64_t idx, zip_uint16_t ef_id, zip_uint16_t ef_idx, const zip_uint8_t *data, zip_uint16_t len, zip_flags_t flags)
{
    struct zip_dirent *de;
    zip_uint16_t ls, cs;
    struct zip_extra_field *ef, *ef_prev, *ef_new;
    int i, found, new_len;

    if ((flags & ZIP_EF_BOTH) == 0) {
 _zip_error_set(&za->error, ZIP_ER_INVAL, 0);
 return -1;
    }

    if (_zip_get_dirent(za, idx, 0, NULL) == NULL)
 return -1;

    if (ZIP_IS_RDONLY(za)) {
 _zip_error_set(&za->error, ZIP_ER_RDONLY, 0);
 return -1;
    }

    if (ZIP_EF_IS_INTERNAL(ef_id)) {
 _zip_error_set(&za->error, ZIP_ER_INVAL, 0);
 return -1;
    }

    if (_zip_file_extra_field_prepare_for_change(za, idx) < 0)
        return -1;

    de = za->entry[idx].changes;

    ef = de->extra_fields;
    ef_prev = NULL;
    i = 0;
    found = 0;

    for (; ef; ef=ef->next) {
 if (ef->id == ef_id && (ef->flags & flags & ZIP_EF_BOTH)) {
     if (i == ef_idx) {
  found = 1;
  break;
     }
     i++;
 }
 ef_prev = ef;
    }

    if (i < ef_idx && ef_idx != ZIP_EXTRA_FIELD_NEW) {
 _zip_error_set(&za->error, ZIP_ER_INVAL, 0);
 return -1;
    }

    if (flags & ZIP_EF_LOCAL)
 ls = _zip_ef_size(de->extra_fields, ZIP_EF_LOCAL);
    else
 ls = 0;
    if (flags & ZIP_EF_CENTRAL)
 cs = _zip_ef_size(de->extra_fields, ZIP_EF_CENTRAL);
    else
 cs = 0;

    new_len = ls > cs ? ls : cs;
    if (found)
 new_len -= ef->size + 4;
    new_len += len + 4;

    if (new_len > ZIP_UINT16_MAX) {
 _zip_error_set(&za->error, ZIP_ER_INVAL, 0);
 return -1;
    }

    if ((ef_new=_zip_ef_new(ef_id, len, data, flags)) == NULL) {
 _zip_error_set(&za->error, ZIP_ER_MEMORY, 0);
 return -1;
    }

    if (found) {
 if ((ef->flags & ZIP_EF_BOTH) == (flags & ZIP_EF_BOTH)) {
     ef_new->next = ef->next;
     ef->next = NULL;
     _zip_ef_free(ef);
     if (ef_prev)
  ef_prev->next = ef_new;
     else
  de->extra_fields = ef_new;
 }
 else {
     ef->flags &= ~(flags & ZIP_EF_BOTH);
     ef_new->next = ef->next;
     ef->next = ef_new;
 }
    }
    else if (ef_prev) {
 ef_new->next = ef_prev->next;
 ef_prev->next = ef_new;
    }
    else
 de->extra_fields = ef_new;

    return 0;
}



int
_zip_file_extra_field_prepare_for_change(struct zip *za, zip_uint64_t idx)
{
    struct zip_entry *e;

    if (idx >= za->nentry) {
        _zip_error_set(&za->error, ZIP_ER_INVAL, 0);
        return -1;
    }

    e = za->entry+idx;

    if (e->changes && (e->changes->changed & ZIP_DIRENT_EXTRA_FIELD))
        return 0;

    if (e->orig) {
 if (_zip_read_local_ef(za, idx) < 0)
     return -1;
    }

    if (e->changes == NULL) {
        if ((e->changes=_zip_dirent_clone(e->orig)) == NULL) {
            _zip_error_set(&za->error, ZIP_ER_MEMORY, 0);
            return -1;
        }
    }

    if (e->orig && e->orig->extra_fields) {
 if ((e->changes->extra_fields=_zip_ef_clone(e->orig->extra_fields, &za->error)) == NULL)
     return -1;
    }
    e->changes->changed |= ZIP_DIRENT_EXTRA_FIELD;

    return 0;
}
