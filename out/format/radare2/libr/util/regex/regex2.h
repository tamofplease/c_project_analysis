# 1 "project/radare2/libr/util/regex/regex2.h"
# 41 "project/radare2/libr/util/regex/regex2.h"
#define MAGIC1 ((('r'^0200)<<8) | 'e')
# 62 "project/radare2/libr/util/regex/regex2.h"
typedef unsigned long sop;
typedef long sopno;
#define OPRMASK 0xf8000000LU
#define OPDMASK 0x07ffffffLU
#define OPSHIFT ((unsigned)27)
#define OP(n) ((n)&OPRMASK)
#define OPND(n) ((n)&OPDMASK)
#define SOP(op,opnd) ((op)|(opnd))


#define OEND (1LU<<OPSHIFT)
#define OCHAR (2LU<<OPSHIFT)
#define OBOL (3LU<<OPSHIFT)
#define OEOL (4LU<<OPSHIFT)
#define OANY (5LU<<OPSHIFT)
#define OANYOF (6LU<<OPSHIFT)
#define OBACK_ (7LU<<OPSHIFT)
#define O_BACK (8LU<<OPSHIFT)
#define OPLUS_ (9LU<<OPSHIFT)
#define O_PLUS (10LU<<OPSHIFT)
#define OQUEST_ (11LU<<OPSHIFT)
#define O_QUEST (12LU<<OPSHIFT)
#define OLPAREN (13LU<<OPSHIFT)
#define ORPAREN (14LU<<OPSHIFT)
#define OCH_ (15LU<<OPSHIFT)
#define OOR1 (16LU<<OPSHIFT)
#define OOR2 (17LU<<OPSHIFT)
#define O_CH (18LU<<OPSHIFT)
#define OBOW (19LU<<OPSHIFT)
#define OEOW (20LU<<OPSHIFT)
# 105 "project/radare2/libr/util/regex/regex2.h"
typedef struct {
 ut8 *ptr;
 ut8 mask;
 ut8 hash;
 size_t smultis;
 char *multis;
} cset;

#define CHadd(cs,c) ((cs)->ptr[(ut8)(c)] |= (cs)->mask, (cs)->hash += (c))
#define CHsub(cs,c) ((cs)->ptr[(ut8)(c)] &= ~(cs)->mask, (cs)->hash -= (c))
#define CHIN(cs,c) ((cs)->ptr[(ut8)(c)] & (cs)->mask)
#define MCadd(p,cs,cp) mcadd(p, cs, cp)
#define MCsub(p,cs,cp) mcsub(p, cs, cp)
#define MCin(p,cs,cp) mcin(p, cs, cp)


typedef unsigned char cat_t;




struct re_guts {
 int magic;
#define MAGIC2 ((('R'^0200)<<8)|'E')
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
#define USEBOL 01
#define USEEOL 02
#define BAD 04
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


#undef OUT
#define OUT (CHAR_MAX+1)
#define ISWORD(c) (isalnum((ut8)(c)) || (c) == '_')
