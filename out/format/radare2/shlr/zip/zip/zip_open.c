# 1 "project/radare2/shlr/zip/zip/zip_open.c"
# 36 "project/radare2/shlr/zip/zip/zip_open.c"
#include <sys/stat.h>
#include <errno.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "zipint.h"

static void set_error(int *, const struct zip_error *, int);
static struct zip *_zip_allocate_new(const char *, unsigned int, int *);
static zip_int64_t _zip_checkcons(FILE *, struct zip_cdir *, struct zip_error *);
static void _zip_check_torrentzip(struct zip *, const struct zip_cdir *);
static struct zip_cdir *_zip_find_central_dir(FILE *, unsigned int, int *, off_t);
static int _zip_file_exists(const char *, unsigned int, int *);
static int _zip_headercomp(const struct zip_dirent *, const struct zip_dirent *);
static unsigned char *_zip_memmem(const unsigned char *, size_t,
      const unsigned char *, size_t);
static struct zip_cdir *_zip_readcdir(FILE *, off_t, unsigned char *, const unsigned char *,
     size_t, unsigned int, struct zip_error *);
static struct zip_cdir *_zip_read_eocd(const unsigned char *, const unsigned char *, off_t,
           size_t, unsigned int, struct zip_error *);
static struct zip_cdir *_zip_read_eocd64(FILE *, const unsigned char *, const unsigned char *,
      off_t, size_t, unsigned int, struct zip_error *);



ZIP_EXTERN struct zip *
zip_open(const char *fn, int _flags, int *zep)
{
    FILE *fp;
    unsigned int flags;

    if (_flags < 0) {
        if (zep)
            *zep = ZIP_ER_INVAL;
        return NULL;
    }
    flags = (unsigned int)_flags;

    switch (_zip_file_exists(fn, flags, zep)) {
    case -1:
 return NULL;
    case 0:
 return _zip_allocate_new(fn, flags, zep);
    default:
 if (flags & ZIP_TRUNCATE) {
     FILE *f;

     if ((f = fopen(fn, "rb")) == NULL) {
  set_error(zep, NULL, ZIP_ER_OPEN);
  return NULL;
     }
     fclose(f);
     return _zip_allocate_new(fn, flags, zep);
 }
 break;
    }

    if ((fp=fopen(fn, "rb")) == NULL) {
 set_error(zep, NULL, ZIP_ER_OPEN);
 return NULL;
    }

    return _zip_open(fn, fp, flags, zep);
}


ZIP_EXTERN int
zip_archive_set_tempdir(struct zip *za, const char *tempdir)
{
    char *new_tempdir;

    if (tempdir) {
        if ((new_tempdir = strdup(tempdir)) == NULL) {
            _zip_error_set(&za->error, ZIP_ER_MEMORY, errno);
            return -1;
        }
    }
    else
        new_tempdir = NULL;

    free(za->tempdir);
    za->tempdir = new_tempdir;

    return 0;
}


struct zip *
_zip_open(const char *fn, FILE *fp, unsigned int flags, int *zep)
{
    struct zip *za;
    struct zip_cdir *cdir;
    off_t len;

    if (fseeko(fp, 0, SEEK_END) < 0) {
 *zep = ZIP_ER_SEEK;
 return NULL;
    }
    len = ftello(fp);


    if (len == 0) {
 if ((za=_zip_allocate_new(fn, flags, zep)) == NULL)
     fclose(fp);
 else
     za->zp = fp;
 return za;
    }

    cdir = _zip_find_central_dir(fp, flags, zep, len);
    if (cdir == NULL) {
 fclose(fp);
 return NULL;
    }

    if ((za=_zip_allocate_new(fn, flags, zep)) == NULL) {
 _zip_cdir_free(cdir);
 fclose(fp);
 return NULL;
    }

    za->entry = cdir->entry;
    za->nentry = cdir->nentry;
    za->nentry_alloc = cdir->nentry_alloc;
    za->comment_orig = cdir->comment;

    za->zp = fp;

    _zip_check_torrentzip(za, cdir);

    za->ch_flags = za->flags;

    free(cdir);

    return za;
}



static void
set_error(int *zep, const struct zip_error *err, int ze)
{
    int se;

    if (err) {
 _zip_error_get(err, &ze, &se);
 if (zip_error_get_sys_type(ze) == ZIP_ET_SYS)
     errno = se;
    }

    if (zep)
 *zep = ze;
}
# 200 "project/radare2/shlr/zip/zip/zip_open.c"
static struct zip_cdir *
_zip_readcdir(FILE *fp, off_t buf_offset, unsigned char *buf, const unsigned char *eocd, size_t buflen,
       unsigned int flags, struct zip_error *error)
{
    struct zip_cdir *cd;
    const unsigned char *cdp;
    const unsigned char **bufp;
    zip_int64_t tail_len, comment_len;
    zip_uint64_t i, left;

    tail_len = buf + buflen - eocd - EOCDLEN;

    if (tail_len < 0) {

 _zip_error_set(error, ZIP_ER_NOZIP, 0);
 return NULL;
    }


    if (memcmp(eocd, EOCD_MAGIC, 4) != 0) {
 _zip_error_set(error, ZIP_ER_NOZIP, 0);
 return NULL;
    }

    if (memcmp(eocd+4, "\0\0\0\0", 4) != 0) {
 _zip_error_set(error, ZIP_ER_MULTIDISK, 0);
 return NULL;
    }

    if (eocd-EOCD64LOCLEN >= buf && memcmp(eocd-EOCD64LOCLEN, EOCD64LOC_MAGIC, 4) == 0)
 cd = _zip_read_eocd64(fp, eocd-EOCD64LOCLEN, buf, buf_offset, buflen, flags, error);
    else
 cd = _zip_read_eocd(eocd, buf, buf_offset, buflen, flags, error);

    if (cd == NULL)
 return NULL;

    cdp = eocd + 20;
    comment_len = _zip_read2(&cdp);

    if ((zip_uint64_t)cd->offset+(zip_uint64_t)cd->size > (zip_uint64_t)buf_offset + (zip_uint64_t)(eocd-buf)) {

 _zip_error_set(error, ZIP_ER_INCONS, 0);
 _zip_cdir_free(cd);
 return NULL;
    }

    if (tail_len < comment_len || ((flags & ZIP_CHECKCONS) && tail_len != comment_len)) {
 _zip_error_set(error, ZIP_ER_INCONS, 0);
 _zip_cdir_free(cd);
 return NULL;
    }

    if (comment_len) {
 if ((cd->comment=_zip_string_new(eocd+EOCDLEN, (zip_uint16_t)comment_len, ZIP_FL_ENC_GUESS, error)) == NULL) {
     _zip_cdir_free(cd);
     return NULL;
 }
    }

    if (cd->offset >= buf_offset) {

 cdp = buf + (cd->offset - buf_offset);
 bufp = &cdp;
    }
    else {

 bufp = NULL;
 clearerr(fp);
 fseeko(fp, cd->offset, SEEK_SET);


 if (ferror(fp) || (ftello(fp) != cd->offset)) {

     if (ferror(fp))
  _zip_error_set(error, ZIP_ER_SEEK, errno);
     else
  _zip_error_set(error, ZIP_ER_NOZIP, 0);
     _zip_cdir_free(cd);
     return NULL;
 }
    }

    left = (zip_uint64_t)cd->size;
    i=0;
    while (i<cd->nentry && left > 0) {
 if ((cd->entry[i].orig=_zip_dirent_new()) == NULL
     || (_zip_dirent_read(cd->entry[i].orig, fp, bufp, &left, 0, error)) < 0) {
     _zip_cdir_free(cd);
     return NULL;
 }
 i++;
    }
    if (i != cd->nentry || ((flags & ZIP_CHECKCONS) && left != 0)) {
        _zip_error_set(error, ZIP_ER_INCONS, 0);
        _zip_cdir_free(cd);
        return NULL;
    }

    return cd;
}
# 310 "project/radare2/shlr/zip/zip/zip_open.c"
static zip_int64_t
_zip_checkcons(FILE *fp, struct zip_cdir *cd, struct zip_error *error)
{
    zip_uint64_t i;
    zip_uint64_t min, max, j;
    struct zip_dirent temp;

    if (cd->nentry) {
 max = cd->entry[0].orig->offset;
 min = cd->entry[0].orig->offset;
    }
    else
 min = max = 0;

    for (i=0; i<cd->nentry; i++) {
 if (cd->entry[i].orig->offset < min)
     min = cd->entry[i].orig->offset;
 if (min > (zip_uint64_t)cd->offset) {
     _zip_error_set(error, ZIP_ER_NOZIP, 0);
     return -1;
 }

 j = cd->entry[i].orig->offset + cd->entry[i].orig->comp_size
     + _zip_string_length(cd->entry[i].orig->filename) + LENTRYSIZE;
 if (j > max)
     max = j;
 if (max > (zip_uint64_t)cd->offset) {
     _zip_error_set(error, ZIP_ER_NOZIP, 0);
     return -1;
 }

 if (fseeko(fp, (off_t)cd->entry[i].orig->offset, SEEK_SET) != 0) {
     _zip_error_set(error, ZIP_ER_SEEK, errno);
     return -1;
 }

 if (_zip_dirent_read(&temp, fp, NULL, NULL, 1, error) == -1)
     return -1;

 if (_zip_headercomp(cd->entry[i].orig, &temp) != 0) {
     _zip_error_set(error, ZIP_ER_INCONS, 0);
     _zip_dirent_finalize(&temp);
     return -1;
 }

 cd->entry[i].orig->extra_fields = _zip_ef_merge(cd->entry[i].orig->extra_fields, temp.extra_fields);
 cd->entry[i].orig->local_extra_fields_read = 1;
 temp.extra_fields = NULL;

 _zip_dirent_finalize(&temp);
    }

    return (max-min) < ZIP_INT64_MAX ? (zip_int64_t)(max-min) : ZIP_INT64_MAX;
}






static void
_zip_check_torrentzip(struct zip *za, const struct zip_cdir *cdir)
{
    uLong crc_got, crc_should;
    char buf[8+1];
    char *end;

    if (za->zp == NULL || cdir == NULL)
 return;

    if (_zip_string_length(cdir->comment) != TORRENT_SIG_LEN+8
 || strncmp((const char *)cdir->comment->raw, TORRENT_SIG, TORRENT_SIG_LEN) != 0)
 return;

    memcpy(buf, cdir->comment->raw+TORRENT_SIG_LEN, 8);
    buf[8] = '\0';
    errno = 0;
    crc_should = strtoul(buf, &end, 16);
    if ((crc_should == UINT_MAX && errno != 0) || (end && *end))
 return;

    if (_zip_filerange_crc(za->zp, cdir->offset, cdir->size, &crc_got, NULL) < 0)
 return;

    if (crc_got == crc_should)
 za->flags |= ZIP_AFL_TORRENT;
}
# 405 "project/radare2/shlr/zip/zip/zip_open.c"
static int
_zip_headercomp(const struct zip_dirent *central, const struct zip_dirent *local)
{
    if ((central->version_needed != local->version_needed)
#if 0


 || (central->bitflags != local->bitflags)
#endif
 || (central->comp_method != local->comp_method)
 || (central->last_mod != local->last_mod)
 || !_zip_string_equal(central->filename, local->filename)) {
 return -1;
    }


    if ((central->crc != local->crc) || (central->comp_size != local->comp_size)
 || (central->uncomp_size != local->uncomp_size)) {


 if (((local->bitflags & ZIP_GPBF_DATA_DESCRIPTOR) == 0
      || local->crc != 0 || local->comp_size != 0 || local->uncomp_size != 0))
     return -1;
    }

    return 0;
}



static struct zip *
_zip_allocate_new(const char *fn, unsigned int flags, int *zep)
{
    struct zip *za;
    struct zip_error error;

    if ((za=_zip_new(&error)) == NULL) {
 set_error(zep, &error, 0);
 return NULL;
    }

    if (fn == NULL)
 za->zn = NULL;
    else {
 za->zn = strdup(fn);
 if (!za->zn) {
     zip_discard(za);
     set_error(zep, NULL, ZIP_ER_MEMORY);
     return NULL;
 }
    }
    za->open_flags = flags;
    return za;
}



static int
_zip_file_exists(const char *fn, unsigned int flags, int *zep)
{
    struct stat st;

    if (fn == NULL) {
 set_error(zep, NULL, ZIP_ER_INVAL);
 return -1;
    }

    if (stat(fn, &st) != 0) {
 if (flags & ZIP_CREATE)
     return 0;
 else {
     set_error(zep, NULL, ZIP_ER_OPEN);
     return -1;
 }
    }
    else if ((flags & ZIP_EXCL)) {
 set_error(zep, NULL, ZIP_ER_EXISTS);
 return -1;
    }



    return 1;
}



static struct zip_cdir *
_zip_find_central_dir(FILE *fp, unsigned int flags, int *zep, off_t len)
{
    struct zip_cdir *cdir, *cdirnew;
    unsigned char *buf, *match;
    off_t buf_offset;
    size_t buflen;
    zip_int64_t a, i;
    zip_int64_t best;
    struct zip_error zerr;

    i = fseeko(fp, -(len < CDBUFSIZE ? len : CDBUFSIZE), SEEK_END);
    if (i == -1 && errno != EFBIG) {

 set_error(zep, NULL, ZIP_ER_SEEK);
 return NULL;
    }
    buf_offset = ftello(fp);


    if ((buf=(unsigned char *)malloc(CDBUFSIZE)) == NULL) {
 set_error(zep, NULL, ZIP_ER_MEMORY);
 return NULL;
    }

    clearerr(fp);
    buflen = fread(buf, 1, CDBUFSIZE, fp);

    if (ferror(fp)) {
 set_error(zep, NULL, ZIP_ER_READ);
 free(buf);
 return NULL;
    }

    best = -1;
    cdir = NULL;
    match = buf+ (buflen < CDBUFSIZE ? 0 : EOCD64LOCLEN);
    _zip_error_set(&zerr, ZIP_ER_NOZIP, 0);

    while ((match=_zip_memmem(match, buflen-(size_t)(match-buf)-(EOCDLEN-4),
         (const unsigned char *)EOCD_MAGIC, 4))!=NULL) {


 match++;
 if ((cdirnew=_zip_readcdir(fp, buf_offset, buf, match-1, buflen, flags,
       &zerr)) == NULL)
     continue;

 if (cdir) {
     if (best <= 0)
  best = _zip_checkcons(fp, cdir, &zerr);
     a = _zip_checkcons(fp, cdirnew, &zerr);
     if (best < a) {
  _zip_cdir_free(cdir);
  cdir = cdirnew;
  best = a;
     }
     else
  _zip_cdir_free(cdirnew);
 }
 else {
     cdir = cdirnew;
     if (flags & ZIP_CHECKCONS)
  best = _zip_checkcons(fp, cdir, &zerr);
     else
  best = 0;
 }
 cdirnew = NULL;
    }

    free(buf);

    if (best < 0) {
 set_error(zep, &zerr, 0);
 _zip_cdir_free(cdir);
 return NULL;
    }

    return cdir;
}



static unsigned char *
_zip_memmem(const unsigned char *big, size_t biglen, const unsigned char *little, size_t littlelen)
{
    const unsigned char *p;

    if ((biglen < littlelen) || (littlelen == 0))
 return NULL;
    p = big-1;
    while ((p=(const unsigned char *)
         memchr(p+1, little[0], (size_t)(big-(p+1))+(size_t)(biglen-littlelen)+1)) != NULL) {
 if (memcmp(p+1, little+1, littlelen-1)==0)
     return (unsigned char *)p;
    }

    return NULL;
}



static struct zip_cdir *
_zip_read_eocd(const unsigned char *eocd, const unsigned char *buf, off_t buf_offset, size_t buflen,
        unsigned int flags, struct zip_error *error)
{
    struct zip_cdir *cd;
    const unsigned char *cdp;
    zip_uint64_t i, nentry, size, offset;

    if (eocd+EOCDLEN > buf+buflen) {
 _zip_error_set(error, ZIP_ER_INCONS, 0);
 return NULL;
    }

    cdp = eocd + 8;


    i = _zip_read2(&cdp);

    nentry = _zip_read2(&cdp);

    if (nentry != i) {
 _zip_error_set(error, ZIP_ER_NOZIP, 0);
 return NULL;
    }

    size = _zip_read4(&cdp);
    offset = _zip_read4(&cdp);

    if (size > ZIP_OFF_MAX || offset > ZIP_OFF_MAX || offset+size > ZIP_OFF_MAX) {
        _zip_error_set(error, ZIP_ER_SEEK, EFBIG);
        return NULL;
    }

    if (offset+size > (zip_uint64_t)(buf_offset + (eocd-buf))) {

 _zip_error_set(error, ZIP_ER_INCONS, 0);
 return NULL;
    }

    if ((flags & ZIP_CHECKCONS) && offset+size != (zip_uint64_t)(buf_offset + (eocd-buf))) {
 _zip_error_set(error, ZIP_ER_INCONS, 0);
 return NULL;
    }

    if ((cd=_zip_cdir_new(nentry, error)) == NULL)
 return NULL;

    cd->size = (off_t)size;
    cd->offset = (off_t)offset;

    return cd;
}



static struct zip_cdir *
_zip_read_eocd64(FILE *f, const zip_uint8_t *eocd64loc, const zip_uint8_t *buf,
   off_t buf_offset, size_t buflen, unsigned int flags, struct zip_error *error)
{
    struct zip_cdir *cd;
    zip_uint64_t offset;
    const zip_uint8_t *cdp;
    zip_uint8_t eocd[EOCD64LEN];
    zip_uint64_t eocd_offset;
    zip_uint64_t size, nentry, i;

    cdp = eocd64loc+8;
    eocd_offset = _zip_read8(&cdp);

    if (eocd_offset > ZIP_OFF_MAX || eocd_offset + EOCD64LEN > ZIP_OFF_MAX) {
        _zip_error_set(error, ZIP_ER_SEEK, EFBIG);
        return NULL;
    }

    if (eocd64loc < buf || (off_t)eocd_offset+EOCD64LEN > (buf_offset+(eocd64loc-buf))) {
 _zip_error_set(error, ZIP_ER_INCONS, 0);
 return NULL;
    }

    if ((off_t)eocd_offset >= buf_offset && (off_t)eocd_offset+EOCD64LEN <= buf_offset+(ssize_t)buflen)
 cdp = buf+((off_t)eocd_offset-buf_offset);
    else {
 if (fseeko(f, (off_t)eocd_offset, SEEK_SET) != 0) {
     _zip_error_set(error, ZIP_ER_SEEK, errno);
     return NULL;
 }

 clearerr(f);
 if (fread(eocd, 1, EOCD64LEN, f) < EOCD64LEN) {
            _zip_error_set(error, ZIP_ER_READ, errno);
            return NULL;
        }

 if (ferror(f)) {
     _zip_error_set(error, ZIP_ER_READ, errno);
     return NULL;
 }

 cdp = eocd;
    }

    if (memcmp(cdp, EOCD64_MAGIC, 4) != 0) {
 _zip_error_set(error, ZIP_ER_INCONS, 0);
 return NULL;
    }
    cdp += 4;

    size = _zip_read8(&cdp);

    if ((flags & ZIP_CHECKCONS) && size+eocd_offset+12 != (zip_uint64_t)(buf_offset+(eocd64loc-buf))) {
 _zip_error_set(error, ZIP_ER_INCONS, 0);
 return NULL;
    }

    cdp += 4;
    cdp += 8;

    nentry = _zip_read8(&cdp);
    i = _zip_read8(&cdp);

    if (nentry != i) {
 _zip_error_set(error, ZIP_ER_MULTIDISK, 0);
 return NULL;
    }

    size = _zip_read8(&cdp);
    offset = _zip_read8(&cdp);

    if (size > ZIP_OFF_MAX || offset > ZIP_OFF_MAX || offset+size > ZIP_OFF_MAX) {
        _zip_error_set(error, ZIP_ER_SEEK, EFBIG);
        return NULL;
    }
    if ((flags & ZIP_CHECKCONS) && offset+size != eocd_offset) {
 _zip_error_set(error, ZIP_ER_INCONS, 0);
 return NULL;
    }

    if ((cd=_zip_cdir_new(nentry, error)) == NULL)
 return NULL;


    cd->size = (off_t)size;
    cd->offset = (off_t)offset;

    return cd;
}
