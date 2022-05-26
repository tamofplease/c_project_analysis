# 1 "project/radare2/shlr/zip/zip/zip_stat_index.c"
# 36 "project/radare2/shlr/zip/zip/zip_stat_index.c"
#include "zipint.h"



ZIP_EXTERN int
zip_stat_index(struct zip *za, zip_uint64_t index, zip_flags_t flags,
        struct zip_stat *st)
{
    const char *name;
    struct zip_dirent *de;

    if ((de=_zip_get_dirent(za, index, flags, NULL)) == NULL)
 return -1;

    if ((name=zip_get_name(za, index, flags)) == NULL)
 return -1;


    if ((flags & ZIP_FL_UNCHANGED) == 0
 && ZIP_ENTRY_DATA_CHANGED(za->entry+index)) {
 if (zip_source_stat(za->entry[index].source, st) < 0) {
     _zip_error_set(&za->error, ZIP_ER_CHANGED, 0);
     return -1;
 }
    }
    else {
 zip_stat_init(st);

 st->crc = de->crc;
 st->size = de->uncomp_size;
 st->mtime = de->last_mod;
 st->comp_size = de->comp_size;
 st->comp_method = (zip_uint16_t)de->comp_method;
 if (de->bitflags & ZIP_GPBF_ENCRYPTED) {
     if (de->bitflags & ZIP_GPBF_STRONG_ENCRYPTION) {

  st->encryption_method = ZIP_EM_UNKNOWN;
     }
     else
  st->encryption_method = ZIP_EM_TRAD_PKWARE;
 }
 else
     st->encryption_method = ZIP_EM_NONE;
 st->valid = ZIP_STAT_CRC|ZIP_STAT_SIZE|ZIP_STAT_MTIME
     |ZIP_STAT_COMP_SIZE|ZIP_STAT_COMP_METHOD|ZIP_STAT_ENCRYPTION_METHOD;
    }

    st->index = index;
    st->name = name;
    st->valid |= ZIP_STAT_INDEX|ZIP_STAT_NAME;

    return 0;
}
