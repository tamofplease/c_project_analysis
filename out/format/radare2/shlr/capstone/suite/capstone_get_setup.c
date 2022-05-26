# 1 "project/radare2/shlr/capstone/suite/capstone_get_setup.c"
# 14 "project/radare2/shlr/capstone/suite/capstone_get_setup.c"
#include <stdio.h>
#include <capstone/capstone.h>

int main()
{
 if (cs_support(CS_ARCH_X86)) {
  printf("x86=1 ");
 }
 if (cs_support(CS_ARCH_ARM)) {
  printf("arm=1 ");
 }
 if (cs_support(CS_ARCH_ARM64)) {
  printf("arm64=1 ");
 }
 if (cs_support(CS_ARCH_MIPS)) {
  printf("mips=1 ");
 }
 if (cs_support(CS_ARCH_PPC)) {
  printf("ppc=1 ");
 }
 if (cs_support(CS_ARCH_SPARC)) {
  printf("sparc=1 ");
 }
 if (cs_support(CS_ARCH_SYSZ)) {
  printf("sysz=1 ");
 }
 if (cs_support(CS_ARCH_XCORE)) {
  printf("xcore=1 ");
 }
 if (cs_support(CS_ARCH_M68K)) {
  printf("m68k=1 ");
 }
 if (cs_support(CS_ARCH_TMS320C64X)) {
  printf("tms320c64x=1 ");
 }
 if (cs_support(CS_ARCH_M680X)) {
  printf("m680x=1 ");
 }
 if (cs_support(CS_ARCH_EVM)) {
  printf("evm=1 ");
 }
 if (cs_support(CS_ARCH_WASM)) {
  printf("wasm=1 ");
 }
 if (cs_support(CS_ARCH_MOS65XX)) {
  printf("mos65xx=1 ");
 }
 if (cs_support(CS_ARCH_BPF)) {
  printf("bpf=1 ");
 }
 if (cs_support(CS_ARCH_RISCV)) {
  printf("riscv=1 ");
 }
 if (cs_support(CS_SUPPORT_DIET)) {
  printf("diet=1 ");
 }
 if (cs_support(CS_SUPPORT_X86_REDUCE)) {
  printf("x86_reduce=1 ");
 }
 printf("\n");

 return 0;
}
