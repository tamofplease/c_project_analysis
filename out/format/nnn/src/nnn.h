# 1 "project/nnn/src/nnn.h"
# 31 "project/nnn/src/nnn.h"
       

#include <curses.h>

#define CONTROL(c) ((c) & 0x1f)

#ifndef ESC
#define ESC (27)
#endif

#ifndef DEL
#define DEL (127)
#endif


enum action {
 SEL_BACK = 1,
 SEL_OPEN,
 SEL_NAV_IN,
 SEL_NEXT,
 SEL_PREV,
 SEL_PGDN,
 SEL_PGUP,
 SEL_CTRL_D,
 SEL_CTRL_U,
 SEL_HOME,
 SEL_END,
 SEL_FIRST,
 SEL_CDHOME,
 SEL_CDBEGIN,
 SEL_CDLAST,
 SEL_CDROOT,
 SEL_BMOPEN,
 SEL_REMOTE,
 SEL_CYCLE,
 SEL_CYCLER,
 SEL_CTX1,
 SEL_CTX2,
 SEL_CTX3,
 SEL_CTX4,
#ifdef CTX8
 SEL_CTX5,
 SEL_CTX6,
 SEL_CTX7,
 SEL_CTX8,
#endif
 SEL_MARK,
 SEL_BMARK,
 SEL_FLTR,
 SEL_MFLTR,
 SEL_HIDDEN,
 SEL_DETAIL,
 SEL_STATS,
 SEL_CHMODX,
 SEL_ARCHIVE,
 SEL_SORT,
 SEL_REDRAW,
 SEL_SEL,
 SEL_SELMUL,
 SEL_SELALL,
 SEL_SELINV,
 SEL_SELEDIT,
 SEL_CP,
 SEL_MV,
 SEL_CPMVAS,
 SEL_RM,
 SEL_OPENWITH,
 SEL_NEW,
 SEL_RENAME,
 SEL_RENAMEMUL,
 SEL_UMOUNT,
 SEL_HELP,
 SEL_AUTONEXT,
 SEL_EDIT,
 SEL_PLUGIN,
 SEL_SHELL,
 SEL_LAUNCH,
 SEL_PROMPT,
 SEL_LOCK,
 SEL_SESSIONS,
 SEL_EXPORT,
 SEL_TIMETYPE,
 SEL_QUITCTX,
 SEL_QUITCD,
 SEL_QUIT,
 SEL_QUITERR,
#ifndef NOMOUSE
 SEL_CLICK,
#endif
};


struct key {
 int sym;
 enum action act;
};

static struct key bindings[] = {

 { KEY_LEFT, SEL_BACK },
 { 'h', SEL_BACK },

 { KEY_ENTER, SEL_OPEN },
 { '\r', SEL_OPEN },

 { KEY_RIGHT, SEL_NAV_IN },
 { 'l', SEL_NAV_IN },

 { 'j', SEL_NEXT },
 { KEY_DOWN, SEL_NEXT },

 { 'k', SEL_PREV },
 { KEY_UP, SEL_PREV },

 { KEY_NPAGE, SEL_PGDN },

 { KEY_PPAGE, SEL_PGUP },

 { CONTROL('D'), SEL_CTRL_D },

 { CONTROL('U'), SEL_CTRL_U },

 { KEY_HOME, SEL_HOME },
 { 'g', SEL_HOME },
 { CONTROL('A'), SEL_HOME },

 { KEY_END, SEL_END },
 { 'G', SEL_END },
 { CONTROL('E'), SEL_END },

 { '\'', SEL_FIRST },

 { '~', SEL_CDHOME },

 { '@', SEL_CDBEGIN },

 { '-', SEL_CDLAST },

 { '`', SEL_CDROOT },

 { 'b', SEL_BMOPEN },
 { CONTROL('_'), SEL_BMOPEN },

 { 'c', SEL_REMOTE },

 { '\t', SEL_CYCLE },

 { KEY_BTAB, SEL_CYCLER },

 { '1', SEL_CTX1 },
 { '2', SEL_CTX2 },
 { '3', SEL_CTX3 },
 { '4', SEL_CTX4 },
#ifdef CTX8
 { '5', SEL_CTX5 },
 { '6', SEL_CTX6 },
 { '7', SEL_CTX7 },
 { '8', SEL_CTX8 },
#endif

 { ',', SEL_MARK },

 { 'B', SEL_BMARK },

 { '/', SEL_FLTR },

 { CONTROL('N'), SEL_MFLTR },

 { '.', SEL_HIDDEN },

 { 'd', SEL_DETAIL },

 { 'f', SEL_STATS },
 { CONTROL('F'), SEL_STATS },

 { '*', SEL_CHMODX },

 { 'z', SEL_ARCHIVE },

 { 't', SEL_SORT },
 { CONTROL('T'), SEL_SORT },

 { CONTROL('L'), SEL_REDRAW },

 { CONTROL('J'), SEL_SEL },
 { ' ', SEL_SEL },

 { 'm', SEL_SELMUL },

 { 'a', SEL_SELALL },

 { 'A', SEL_SELINV },

 { 'E', SEL_SELEDIT },

 { 'p', SEL_CP },
 { CONTROL('P'), SEL_CP },

 { 'v', SEL_MV },
 { CONTROL('V'), SEL_MV },

 { 'w', SEL_CPMVAS },
 { CONTROL('W'), SEL_CPMVAS },

 { 'x', SEL_RM },
 { CONTROL('X'), SEL_RM },

 { 'o', SEL_OPENWITH },
 { CONTROL('O'), SEL_OPENWITH },

 { 'n', SEL_NEW },

 { CONTROL('R'), SEL_RENAME },

 { 'r', SEL_RENAMEMUL },

 { 'u', SEL_UMOUNT },

 { '?', SEL_HELP },

 { '+', SEL_AUTONEXT },

 { 'e', SEL_EDIT },

 { ';', SEL_PLUGIN },

 { '!', SEL_SHELL },
 { CONTROL(']'), SEL_SHELL },

 { '=', SEL_LAUNCH },

 { ']', SEL_PROMPT },

 { '0', SEL_LOCK },

 { 's', SEL_SESSIONS },

 { '>', SEL_EXPORT },

 { 'T', SEL_TIMETYPE },

 { 'q', SEL_QUITCTX },

 { CONTROL('G'), SEL_QUITCD },

 { CONTROL('Q'), SEL_QUIT },

 { 'Q', SEL_QUITERR },
#ifndef NOMOUSE
 { KEY_MOUSE, SEL_CLICK },
#endif
};
