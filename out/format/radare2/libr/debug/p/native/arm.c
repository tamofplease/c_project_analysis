# 1 "project/radare2/libr/debug/p/native/arm.c"
# 86 "project/radare2/libr/debug/p/native/arm.c"
BX LR = {
 int tbit = reg[14] & 1;
 reg[15] = reg[14] & ~1;
 if (tbit) reg[16] |= 1<<5;
}
