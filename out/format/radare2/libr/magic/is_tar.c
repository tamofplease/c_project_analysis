# 1 "project/radare2/libr/magic/is_tar.c"
# 40 "project/radare2/libr/magic/is_tar.c"
#include <r_userconf.h>

#if !USE_LIB_MAGIC

#include "file.h"
#include <string.h>
#include <ctype.h>
#include <sys/types.h>
#include "tar.h"

static const char tartype[][32] = {
 "tar archive",
 "POSIX tar archive",
 "POSIX tar archive (GNU)",
};






#define isodigit(c) ( ((c) >= '0') && ((c) <= '7') )
static int from_oct(int digs, const char *where) {
 int value = 0;
 while (isspace ((ut8)*where)) {
  where++;
  if (--digs <= 0) {
   return -1;
  }
 }
 while (digs > 0 && isodigit(*where)) {
  value = (value << 3) | (*where++ - '0');
  --digs;
 }
 if (digs > 0 && *where && !isspace ((ut8)*where)) {
  return -1;
 }
 return value;
}
# 87 "project/radare2/libr/magic/is_tar.c"
static int is_tar(const ut8 *buf, size_t nbytes) {
 const union record *header = (const union record *)(const void *)buf;
 int i, sum, recsum;
 const char *p;

 if (nbytes < sizeof (union record)) {
  return 0;
 }

 recsum = from_oct (8, header->header.chksum);

 sum = 0;
 p = header->charptr;
 for (i = sizeof(union record); --i >= 0;) {




  sum += 0xFF & *p++;
 }


 for (i = sizeof header->header.chksum; --i >= 0;) {
  sum -= 0xFF & header->header.chksum[i];
 }
 sum += ' ' * sizeof header->header.chksum;
 if (sum != recsum) {
  return 0;
 }
 if (strcmp (header->header.magic, GNUTMAGIC) == 0) {
  return 3;
 }
 if (strcmp (header->header.magic, TMAGIC) == 0) {
  return 2;
 }
 return 1;
}

int file_is_tar(RMagic *ms, const ut8 *buf, size_t nbytes) {




 int tar = is_tar(buf, nbytes);
 int mime = ms->flags & R_MAGIC_MIME;

 if (tar < 1 || tar > 3) {
  return 0;
 }
 if (mime == R_MAGIC_MIME_ENCODING) {
  return 0;
 }
 if (file_printf (ms, mime ? "application/x-tar" : tartype[tar - 1]) == -1) {
  return -1;
 }
 return 1;
}
#endif
