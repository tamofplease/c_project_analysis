# 1 "project/radare2/libr/asm/d/z80.c"


#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct kv { const char *name; const char *value; };
static struct kv kvs[] = {
  {"indr","perform an IND and repeat until B"},
  {"ind","input from port (C). Decrement HL and B."},
  {"rrca","rotate right circular accumulator."},
  {"neg","negate accumulator (2's complement)."},
  {"jr","z,e Jump relative to PC+e if zero (Z"},
  {"ini","input from port (C). HL"},
  {"jp","unconditional jump to location (HL IY or IX)."},
  {"rlca","rotate left circular accumulator."},
  {"ei","enable interrupts."},
  {"ldir","perform an LDI and repeat until BC"},
  {"sra","shift operand right arithmetic."},
  {"xor","exclusive OR operand and accumulator."},
  {"push","load IX or IY or Load register pair qq onto stack."},
  {"sla","shift operand left arithmetic."},
  {"exx","exchange the contents of BC,DE,HL with BC',DE',HL'."},
  {"srl","shift operand right logical."},
  {"otdr","perform an OUTD and repeat until B"},
  {"res","b,m Reset bit b of operand m."},
  {"cpdr","perform a CPD and repeat until BC"},
  {"cpd","comapre location (HL) and acc., decrement HL and BC,"},
  {"ccf","complement carry flag."},
  {"ret","return from subroutine. with cc Return from subroutine if condition cc is true."},
  {"dec","decrement operand m."},
  {"rst","restart to location p."},
  {"call","call subroutine at location nn if condition CC is true."},
  {"ld","Load accumulator, register or location ."},
  {"ex","exchange the location and register."},
  {"rr","rotate right through carry operand m."},
  {"cpl","complement accumulator (1's complement)."},
  {"cpir","perform a CPI and repeat until BC"},
  {"ldi","load location (DE) with location (HL), incr DE,HL; decr BC."},
  {"daa","decimal adjust accumulator."},
  {"inir","perform an INI and repeat until B"},
  {"im","set interrupt mode 0,1 or 2."},
  {"in","load the accumulator with input from device n or (C)."},
  {"cpi","compare location (HL) and acc., incr HL, decr BC."},
  {"ldd","load location (DE) with location (HL), decrement DE,HL,BC."},
  {"outi","load output port (C) with (HL), incr HL, decr B."},
  {"sub","subtract operand from accumulator."},
  {"halt","halt computer and wait for interrupt."},
  {"lddr","perform an LDD and repeat until BC"},
  {"retn","return from non-maskable interrupt."},
  {"sbc","a,s or HL,ss Subtract operands from accumulator with carry."},
  {"or","logical OR of operand and accumulator."},
  {"rl","rotate left through operand m."},
  {"rrd","rotate digit right and left between accumulator and (HL)"},
  {"reti","return from interrupt."},
  {"di","disable interrupts."},
  {"outd","load output port (C) with (HL), decrement HL and B."},
  {"rra","rotate right accumulator through carry."},
  {"rlc","(hl,ix+d or IY+d) Rotate location left circular."},
  {"scf","set carry flag (C"},
  {"rrc","rotate operand m right circular."},
  {"rla","rotate left accumulator through carry."},
  {"and","logical AND of operand s to accumulator."},
  {"bit","test bit b of location."},
  {"rld","rotate digit left and right between accumulator and (HL)."},
  {"out","(n),a Load output port (n) with accumulator."},
  {"cp","compare operand s with accumulator."},
  {"set","b,(hl or IX+d or IY+d) Set bit b of location."},
  {"djnz","decrement B and jump relative if B"},
  {"nop","no operation"},
  {"adc","add with carry register pair"},
  {"pop","load IX or IY with top of stack or Load register pair qq with top of stack."},
  {"add","add value n to accumulator."},
  {"otir","perform an OTI and repeat until B"},
  {"inc","increment location."},
  {NULL, NULL}
};


typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_z80_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_z80_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return NULL;
}
#define sdb_hash_c_z80(x,y) gperf_z80_hash(x)
const unsigned int gperf_z80_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_z80 = {
  .name = "z80",
  .get = &gperf_z80_get,
  .hash = &gperf_z80_hash,
  .foreach = &gperf_z80_foreach
};

#if MAIN
int main () {
 const char *s = ((char*(*)(char*))gperf_z80.get)("foo");
 printf ("%s\n", s);
}
#endif
