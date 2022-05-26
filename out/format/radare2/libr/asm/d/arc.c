# 1 "project/radare2/libr/asm/d/arc.c"


#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct kv { const char *name; const char *value; };
static struct kv kvs[] = {
  {"tst","test"},
  {"bcc","branch if condition true"},
  {"negsw","negate and saturate of word"},
  {"mulu64","32 x 32 unsigned multiply"},
  {"sub_s","subtract"},
  {"bxor","bit xor"},
  {"and_s","logical and"},
  {"asrs","arithmetic shift right and saturate"},
  {"st","store to memory"},
  {"add3_s","add with left shift by 3 bits"},
  {"jl_s","jump and link"},
  {"sr","store to auxiliary memory"},
  {"not_s","logical bit inversion"},
  {"abs_s","absolute value"},
  {"unimp_s","unimplemented instruction"},
  {"subsdw","subtract and saturate dual word"},
  {"pop_s","restore register value from stack"},
  {"push_s","store register value on stack"},
  {"adc","add with carry"},
  {"bmsk","bit mask"},
  {"xor_s","logical exclusive-or"},
  {"add","add"},
  {"rtie","return from interrupt/exception"},
  {"divaw","division assist"},
  {"rlc","rotate left through carry"},
  {"jcc_s","jump"},
  {"max","return maximum"},
  {"lpcc","loop (zero-overhead loops)"},
  {"lsr","logical shift left"},
  {"mpy","32 x 32 signed multiply (low)"},
  {"min","return minimum"},
  {"or","logical or"},
  {"swi","software interrupt"},
  {"adds","add and saturate"},
  {"asr","arithmetic shift right"},
  {"swap","swap 16 x 16"},
  {"not","logical bit inversion"},
  {"asls","arithmetic shift left and saturate"},
  {"nop_s","no operation"},
  {"trap_s","raise exception"},
  {"brcc_s","branch on compare"},
  {"sub1","subtract with left shift by 1 bit"},
  {"neg_s","negate"},
  {"sleep","put processor in sleep mode"},
  {"bl_s","branch and link"},
  {"sub3","subtract with left shift by 3 bits"},
  {"sub2","subtract with left shift by 2 bits"},
  {"or_s","logical or"},
  {"mul64","32 x 32 signed multiply"},
  {"bclr_s","clear specified bit (to 0)"},
  {"btst_s","test value of specified bit"},
  {"asl","arithmetic shift left"},
  {"bic","bit-wise inverted and"},
  {"xor","logical exclusive-or"},
  {"add2_s","add with left shift by 2 bits"},
  {"normw","normalize to 16 bits"},
  {"mov_s","move (copy) to register"},
  {"ld","load from memory"},
  {"norm","normalize to 32 bits"},
  {"mpyh","32 x 32 signed multiply (high)"},
  {"jcc","jump"},
  {"abssw","absolute and saturate of word"},
  {"bset","set specified bit (to 1)"},
  {"mul64_s","32 x 32 multiply"},
  {"btst","test value of specified bit"},
  {"sync","synchronize"},
  {"flag","write to status register"},
  {"jlcc","jump and link"},
  {"trap0","raise exception with param. 0"},
  {"sbc","subtract with carry"},
  {"mpyu","32 x 32 unsigned multiply (low)"},
  {"asl_s","arithmetic shift left"},
  {"lr","load from auxiliary memory"},
  {"bcc_s","branch if condition true"},
  {"bset_s","set specified bit (to 1)"},
  {"bic_s","bit-wise inverted and"},
  {"negs","negate and saturate"},
  {"sex_s","signed extend"},
  {"sat16","saturate to word"},
  {"cmp_s","compare"},
  {"add1_s","add with left shift by 1 bits"},
  {"prefetch","prefetch from memory"},
  {"ext_s","unsigned extend"},
  {"neg","negate"},
  {"lsr_s","logical shift right"},
  {"mpyhu","32 x 32 unsigned multiply (high)"},
  {"tst_s","test"},
  {"and","logical and"},
  {"mov","move (copy) to register"},
  {"rrc","rotate right through carry"},
  {"sex","signed extend"},
  {"rcmp","reverse compare"},
  {"sub","subtract"},
  {"asr_s","arithmetic shift right"},
  {"bmsk_s","bit mask"},
  {"add1","add with left shift by 1 bit"},
  {"add2","add with left shift by 2 bits"},
  {"rnd16","round to word"},
  {"add3","add with left shift by 3 bits"},
  {"brcc","branch on compare"},
  {"abs","absolute value"},
  {"st_s","store to memory"},
  {"brk","break (halt) processor"},
  {"add_s","add"},
  {"ext","unsigned extend"},
  {"addsdw","add and saturate dual word"},
  {"ex","atomic exchange"},
  {"ror","rotate right"},
  {"rsub","reverse subtraction"},
  {"brk_s","break (halt) processor"},
  {"subs","subtract and saturate"},
  {"cmp","compare"},
  {"blcc","branch and link"},
  {"bbit0","branch if bit cleared to 0"},
  {"abss","absolute and saturate"},
  {"ld_s","load from memory"},
  {"bbit1","branch if bit set to 1"},
  {"bclr","clear specified bit (to 0)"},
  {NULL, NULL}
};


typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_arc_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_arc_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return NULL;
}
#define sdb_hash_c_arc(x,y) gperf_arc_hash(x)
const unsigned int gperf_arc_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_arc = {
  .name = "arc",
  .get = &gperf_arc_get,
  .hash = &gperf_arc_hash,
  .foreach = &gperf_arc_foreach
};

#if MAIN
int main () {
 const char *s = ((char*(*)(char*))gperf_arc.get)("foo");
 printf ("%s\n", s);
}
#endif
