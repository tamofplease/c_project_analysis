# 1 "project/radare2/shlr/zip/zip/zip_fdopen.c"
# 36 "project/radare2/shlr/zip/zip/zip_fdopen.c"
#include "zipint.h"
#ifdef __WINDOWS__
#include <io.h>
#include <fcntl.h>
#else
#include <unistd.h>
#endif



ZIP_EXTERN struct zip *
zip_fdopen(int fd_orig, int _flags, int *zep)
{
    int fd;
    FILE *fp;
    unsigned int flags;

    if (_flags < 0) {
        if (zep)
            *zep = ZIP_ER_INVAL;
        return NULL;
    }
    flags = (unsigned int)_flags;

    if (flags & ZIP_TRUNCATE) {
 *zep = ZIP_ER_INVAL;
 return NULL;
    }




    if ((fd=dup(fd_orig)) < 0) {
 *zep = ZIP_ER_OPEN;
 return NULL;
    }

    if ((fp=fdopen(fd, "rb")) == NULL) {
 close(fd);
 *zep = ZIP_ER_OPEN;
 return NULL;
    }

    close(fd_orig);
    return _zip_open(NULL, fp, flags, zep);
}
