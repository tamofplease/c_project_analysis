# 1 "project/radare2/libr/util/regex/utils.h"
# 39 "project/radare2/libr/util/regex/utils.h"
#define DUPMAX 255

#define INTFINITY (DUPMAX + 1)
#define NC (CHAR_MAX - CHAR_MIN + 1)

#define STRLCPY(x,y,z) { strncpy ((x),(y),(z)); (x)[(z)? (z) - 1: 0] = 0; }


#ifdef USEBCOPY
#define memmove(d,s,c) bcopy(s, d, c)
#endif
#define ut8 unsigned char
