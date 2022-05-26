# 1 "project/radare2/libr/magic/file.h"
# 34 "project/radare2/libr/magic/file.h"
#ifndef __file_h__
#define __file_h__ 

#include "mconfig.h"
#include <r_magic.h>

#include <stdio.h>
#include <errno.h>
#include <fcntl.h>
#include <inttypes.h>
#include <r_regex.h>
#include <sys/types.h>

#include <sys/stat.h>
#include <stdarg.h>
#ifdef _MSC_VER
typedef unsigned int ssize_t;
#endif


typedef unsigned long unichar;

struct stat;
const char *file_fmttime(unsigned int, int, char *);
int file_buffer(struct r_magic_set *, int, const char *, const void *, size_t);
int file_fsmagic(struct r_magic_set *, const char *, struct stat *);
int file_pipe2file(struct r_magic_set *, int, const void *, size_t);
int file_printf(struct r_magic_set *, const char *, ...);
int file_reset(struct r_magic_set *);
int file_tryelf(struct r_magic_set *, int, const unsigned char *, size_t);
int file_zmagic(struct r_magic_set *, int, const char *, const ut8*, size_t);
int file_ascmagic(struct r_magic_set *, const unsigned char *, size_t);
int file_is_tar(struct r_magic_set *, const unsigned char *, size_t);
int file_softmagic(struct r_magic_set *, const unsigned char *, size_t, int);
struct mlist *file_apprentice(struct r_magic_set *, const char *, size_t, int);
ut64 file_signextend(RMagic *, struct r_magic *, ut64);
void file_delmagic(struct r_magic *, int type, size_t entries);
void file_badread(struct r_magic_set *);
void file_badseek(struct r_magic_set *);
void file_oomem(struct r_magic_set *, size_t);
void file_error(struct r_magic_set *, int, const char *, ...);
void file_magerror(struct r_magic_set *, const char *, ...);
void file_magwarn(struct r_magic_set *, const char *, ...);
void file_mdump(struct r_magic *);
void file_showstr(FILE *, const char *, size_t);
size_t file_mbswidth(const char *);
const char *file_getbuffer(struct r_magic_set *);
ssize_t sread(int, void *, size_t, int);
int file_check_mem(struct r_magic_set *, unsigned int);
int file_looks_utf8(const unsigned char *, size_t, unichar *, size_t *);

#ifndef HAVE_VASPRINTF
int vasprintf(char **ptr, const char *format_string, va_list vargs);
#endif
#ifndef HAVE_ASPRINTF
int asprintf(char **ptr, const char *format_string, ...);
#endif

#ifndef O_BINARY
#define O_BINARY 0
#endif

#endif
