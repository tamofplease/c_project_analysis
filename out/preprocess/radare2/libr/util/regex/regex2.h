# 0 "project/radare2/libr/util/regex/regex2.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/libr/util/regex/regex2.h"
# 62 "project/radare2/libr/util/regex/regex2.h"
typedef unsigned long sop;
typedef long sopno;
# 105 "project/radare2/libr/util/regex/regex2.h"
typedef struct {
 ut8 *ptr;
 ut8 mask;
 ut8 hash;
 size_t smultis;
 char *multis;
} cset;
# 121 "project/radare2/libr/util/regex/regex2.h"
typedef unsigned char cat_t;




struct re_guts {
 int magic;

 sop *strip;
 int csetsize;
 int ncsets;
 cset *sets;
 ut8 *setbits;
 int cflags;
 sopno nstates;
 sopno firststate;
 sopno laststate;
 int iflags;



 int nbol;
 int neol;
 int ncategories;
 cat_t *categories;
 char *must;
 int mlen;
 size_t nsub;
 int backrefs;
 sopno nplus;

 cat_t catspace[1];
};
