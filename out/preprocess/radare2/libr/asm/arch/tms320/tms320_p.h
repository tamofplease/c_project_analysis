# 0 "project/radare2/libr/asm/arch/tms320/tms320_p.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/libr/asm/arch/tms320/tms320_p.h"
# 16 "project/radare2/libr/asm/arch/tms320/tms320_p.h"
static inline ut16 le16(ut16 v)
{
 ut16 value = v;




 return value;
}

static inline ut32 le24(ut32 v)
{
 ut32 value = v;




 return value;
}

static inline ut32 le32(ut32 v)
{
 ut32 value = v;




 return value;
}

static inline ut16 be16(ut16 v)
{
 ut16 value = v;

 ut8 * pv = (void *)&v;
 value = (pv[0] << 8) | pv[1];

 return value;
}

static inline ut32 be24(ut32 v)
{
 ut32 value = v;

 ut8 * pv = (void *)&v;
 value = (pv[0] << 16) | (pv[1] << 8) | pv[2];

 return value;
}

static inline ut32 be32(ut32 v)
{
 ut32 value = v;

 ut8 * pv = (void *)&v;
 value = (pv[0] << 24) | (pv[1] << 16) | (pv[2] << 8) | pv[3];

 return value;
}
