# 1 "project/radare2/shlr/capstone/arch/SystemZ/SystemZMapping.c"



#ifdef CAPSTONE_HAS_SYSZ

#include <stdio.h>
#include <string.h>

#include "../../utils.h"

#include "SystemZMapping.h"

#define GET_INSTRINFO_ENUM 
#include "SystemZGenInstrInfo.inc"

#ifndef CAPSTONE_DIET
static const name_map reg_name_maps[] = {
 { SYSZ_REG_INVALID, NULL },

 { SYSZ_REG_0, "0" },
 { SYSZ_REG_1, "1" },
 { SYSZ_REG_2, "2" },
 { SYSZ_REG_3, "3" },
 { SYSZ_REG_4, "4" },
 { SYSZ_REG_5, "5" },
 { SYSZ_REG_6, "6" },
 { SYSZ_REG_7, "7" },
 { SYSZ_REG_8, "8" },
 { SYSZ_REG_9, "9" },
 { SYSZ_REG_10, "10" },
 { SYSZ_REG_11, "11" },
 { SYSZ_REG_12, "12" },
 { SYSZ_REG_13, "13" },
 { SYSZ_REG_14, "14" },
 { SYSZ_REG_15, "15" },
 { SYSZ_REG_CC, "cc"},
 { SYSZ_REG_F0, "f0" },
 { SYSZ_REG_F1, "f1" },
 { SYSZ_REG_F2, "f2" },
 { SYSZ_REG_F3, "f3" },
 { SYSZ_REG_F4, "f4" },
 { SYSZ_REG_F5, "f5" },
 { SYSZ_REG_F6, "f6" },
 { SYSZ_REG_F7, "f7" },
 { SYSZ_REG_F8, "f8" },
 { SYSZ_REG_F9, "f9" },
 { SYSZ_REG_F10, "f10" },
 { SYSZ_REG_F11, "f11" },
 { SYSZ_REG_F12, "f12" },
 { SYSZ_REG_F13, "f13" },
 { SYSZ_REG_F14, "f14" },
 { SYSZ_REG_F15, "f15" },
 { SYSZ_REG_R0L, "r0l" },
 { SYSZ_REG_A0, "a0" },
 { SYSZ_REG_A1, "a1" },
 { SYSZ_REG_A2, "a2" },
 { SYSZ_REG_A3, "a3" },
 { SYSZ_REG_A4, "a4" },
 { SYSZ_REG_A5, "a5" },
 { SYSZ_REG_A6, "a6" },
 { SYSZ_REG_A7, "a7" },
 { SYSZ_REG_A8, "a8" },
 { SYSZ_REG_A9, "a9" },
 { SYSZ_REG_A10, "a10" },
 { SYSZ_REG_A11, "a11" },
 { SYSZ_REG_A12, "a12" },
 { SYSZ_REG_A13, "a13" },
 { SYSZ_REG_A14, "a14" },
 { SYSZ_REG_A15, "a15" },
 { SYSZ_REG_C0, "c0" },
 { SYSZ_REG_C1, "c1" },
 { SYSZ_REG_C2, "c2" },
 { SYSZ_REG_C3, "c3" },
 { SYSZ_REG_C4, "c4" },
 { SYSZ_REG_C5, "c5" },
 { SYSZ_REG_C6, "c6" },
 { SYSZ_REG_C7, "c7" },
 { SYSZ_REG_C8, "c8" },
 { SYSZ_REG_C9, "c9" },
 { SYSZ_REG_C10, "c10" },
 { SYSZ_REG_C11, "c11" },
 { SYSZ_REG_C12, "c12" },
 { SYSZ_REG_C13, "c13" },
 { SYSZ_REG_C14, "c14" },
 { SYSZ_REG_C15, "c15" },
 { SYSZ_REG_V0, "v0" },
 { SYSZ_REG_V1, "v1" },
 { SYSZ_REG_V2, "v2" },
 { SYSZ_REG_V3, "v3" },
 { SYSZ_REG_V4, "v4" },
 { SYSZ_REG_V5, "v5" },
 { SYSZ_REG_V6, "v6" },
 { SYSZ_REG_V7, "v7" },
 { SYSZ_REG_V8, "v8" },
 { SYSZ_REG_V9, "v9" },
 { SYSZ_REG_V10, "v10" },
 { SYSZ_REG_V11, "v11" },
 { SYSZ_REG_V12, "v12" },
 { SYSZ_REG_V13, "v13" },
 { SYSZ_REG_V14, "v14" },
 { SYSZ_REG_V15, "v15" },
 { SYSZ_REG_V16, "v16" },
 { SYSZ_REG_V17, "v17" },
 { SYSZ_REG_V18, "v18" },
 { SYSZ_REG_V19, "v19" },
 { SYSZ_REG_V20, "v20" },
 { SYSZ_REG_V21, "v21" },
 { SYSZ_REG_V22, "v22" },
 { SYSZ_REG_V23, "v23" },
 { SYSZ_REG_V24, "v24" },
 { SYSZ_REG_V25, "v25" },
 { SYSZ_REG_V26, "v26" },
 { SYSZ_REG_V27, "v27" },
 { SYSZ_REG_V28, "v28" },
 { SYSZ_REG_V29, "v29" },
 { SYSZ_REG_V30, "v30" },
 { SYSZ_REG_V31, "v31" },
 { SYSZ_REG_F16, "f16" },
 { SYSZ_REG_F17, "f17" },
 { SYSZ_REG_F18, "f18" },
 { SYSZ_REG_F19, "f19" },
 { SYSZ_REG_F20, "f20" },
 { SYSZ_REG_F21, "f21" },
 { SYSZ_REG_F22, "f22" },
 { SYSZ_REG_F23, "f23" },
 { SYSZ_REG_F24, "f24" },
 { SYSZ_REG_F25, "f25" },
 { SYSZ_REG_F26, "f26" },
 { SYSZ_REG_F27, "f27" },
 { SYSZ_REG_F28, "f28" },
 { SYSZ_REG_F29, "f29" },
 { SYSZ_REG_F30, "f30" },
 { SYSZ_REG_F31, "f31" },
 { SYSZ_REG_F0Q, "f0q" },
 { SYSZ_REG_F4Q, "f4q" },
};
#endif

const char *SystemZ_reg_name(csh handle, unsigned int reg)
{
#ifndef CAPSTONE_DIET
 if (reg >= ARR_SIZE(reg_name_maps))
  return NULL;

 return reg_name_maps[reg].name;
#else
 return NULL;
#endif
}

static const insn_map insns[] = {

 {
  0, 0,
#ifndef CAPSTONE_DIET
  { 0 }, { 0 }, { 0 }, 0, 0
#endif
 },

#include "SystemZMappingInsn.inc"
};


void SystemZ_get_insn_id(cs_struct *h, cs_insn *insn, unsigned int id)
{
 unsigned short i;

 i = insn_find(insns, ARR_SIZE(insns), id, &h->insn_cache);
 if (i != 0) {
  insn->id = insns[i].mapid;

  if (h->detail) {
#ifndef CAPSTONE_DIET
   memcpy(insn->detail->regs_read, insns[i].regs_use, sizeof(insns[i].regs_use));
   insn->detail->regs_read_count = (uint8_t)count_positive(insns[i].regs_use);

   memcpy(insn->detail->regs_write, insns[i].regs_mod, sizeof(insns[i].regs_mod));
   insn->detail->regs_write_count = (uint8_t)count_positive(insns[i].regs_mod);

   memcpy(insn->detail->groups, insns[i].groups, sizeof(insns[i].groups));
   insn->detail->groups_count = (uint8_t)count_positive8(insns[i].groups);

   if (insns[i].branch || insns[i].indirect_branch) {

    insn->detail->groups[insn->detail->groups_count] = SYSZ_GRP_JUMP;
    insn->detail->groups_count++;
   }
#endif
  }
 }
}

#ifndef CAPSTONE_DIET
static const name_map insn_name_maps[] = {
 { SYSZ_INS_INVALID, NULL },

#include "SystemZGenInsnNameMaps.inc"
};


static const name_map alias_insn_names[] = {
 { 0, NULL }
};
#endif

const char *SystemZ_insn_name(csh handle, unsigned int id)
{
#ifndef CAPSTONE_DIET
 unsigned int i;

 if (id >= SYSZ_INS_ENDING)
  return NULL;


 for (i = 0; i < ARR_SIZE(alias_insn_names); i++) {
  if (alias_insn_names[i].id == id)
   return alias_insn_names[i].name;
 }

 return insn_name_maps[id].name;
#else
 return NULL;
#endif
}

#ifndef CAPSTONE_DIET
static const name_map group_name_maps[] = {

 { SYSZ_GRP_INVALID, NULL },
 { SYSZ_GRP_JUMP, "jump" },


 { SYSZ_GRP_DFPPACKEDCONVERSION, "dfppackedconversion" },
 { SYSZ_GRP_DFPZONEDCONVERSION, "dfpzonedconversion" },
 { SYSZ_GRP_DISTINCTOPS, "distinctops" },
 { SYSZ_GRP_ENHANCEDDAT2, "enhanceddat2" },
 { SYSZ_GRP_EXECUTIONHINT, "executionhint" },
 { SYSZ_GRP_FPEXTENSION, "fpextension" },
 { SYSZ_GRP_GUARDEDSTORAGE, "guardedstorage" },
 { SYSZ_GRP_HIGHWORD, "highword" },
 { SYSZ_GRP_INSERTREFERENCEBITSMULTIPLE, "insertreferencebitsmultiple" },
 { SYSZ_GRP_INTERLOCKEDACCESS1, "interlockedaccess1" },
 { SYSZ_GRP_LOADANDTRAP, "loadandtrap" },
 { SYSZ_GRP_LOADANDZERORIGHTMOSTBYTE, "loadandzerorightmostbyte" },
 { SYSZ_GRP_LOADSTOREONCOND, "loadstoreoncond" },
 { SYSZ_GRP_LOADSTOREONCOND2, "loadstoreoncond2" },
 { SYSZ_GRP_MESSAGESECURITYASSIST3, "messagesecurityassist3" },
 { SYSZ_GRP_MESSAGESECURITYASSIST4, "messagesecurityassist4" },
 { SYSZ_GRP_MESSAGESECURITYASSIST5, "messagesecurityassist5" },
 { SYSZ_GRP_MESSAGESECURITYASSIST7, "messagesecurityassist7" },
 { SYSZ_GRP_MESSAGESECURITYASSIST8, "messagesecurityassist8" },
 { SYSZ_GRP_MISCELLANEOUSEXTENSIONS, "miscellaneousextensions" },
 { SYSZ_GRP_MISCELLANEOUSEXTENSIONS2, "miscellaneousextensions2" },
 { SYSZ_GRP_POPULATIONCOUNT, "populationcount" },
 { SYSZ_GRP_PROCESSORASSIST, "processorassist" },
 { SYSZ_GRP_RESETREFERENCEBITSMULTIPLE, "resetreferencebitsmultiple" },
 { SYSZ_GRP_TRANSACTIONALEXECUTION, "transactionalexecution" },
 { SYSZ_GRP_VECTOR, "vector" },
 { SYSZ_GRP_VECTORENHANCEMENTS1, "vectorenhancements1" },
 { SYSZ_GRP_VECTORPACKEDDECIMAL, "vectorpackeddecimal" },
};
#endif

const char *SystemZ_group_name(csh handle, unsigned int id)
{
#ifndef CAPSTONE_DIET
 return id2name(group_name_maps, ARR_SIZE(group_name_maps), id);
#else
 return NULL;
#endif
}


sysz_reg SystemZ_map_register(unsigned int r)
{
 static const unsigned int map[] = { 0,
                       SYSZ_REG_CC,
                       SYSZ_REG_A0,
                       SYSZ_REG_A1,
                       SYSZ_REG_A2,
                       SYSZ_REG_A3,
                       SYSZ_REG_A4,
                       SYSZ_REG_A5,
                       SYSZ_REG_A6,
                       SYSZ_REG_A7,
                        SYSZ_REG_A8,
                        SYSZ_REG_A9,
                         SYSZ_REG_A10,
                         SYSZ_REG_A11,
                         SYSZ_REG_A12,
                         SYSZ_REG_A13,
                         SYSZ_REG_A14,
                         SYSZ_REG_A15,
                        SYSZ_REG_C0,
                        SYSZ_REG_C1,
                        SYSZ_REG_C2,
                        SYSZ_REG_C3,
                        SYSZ_REG_C4,
                        SYSZ_REG_C5,
                        SYSZ_REG_C6,
                        SYSZ_REG_C7,
                        SYSZ_REG_C8,
                        SYSZ_REG_C9,
                         SYSZ_REG_C10,
                         SYSZ_REG_C11,
                         SYSZ_REG_C12,
                         SYSZ_REG_C13,
                         SYSZ_REG_C14,
                         SYSZ_REG_C15,
                        SYSZ_REG_V0,
                        SYSZ_REG_V1,
                        SYSZ_REG_V2,
                        SYSZ_REG_V3,
                        SYSZ_REG_V4,
                        SYSZ_REG_V5,
                        SYSZ_REG_V6,
                        SYSZ_REG_V7,
                        SYSZ_REG_V8,
                        SYSZ_REG_V9,
                         SYSZ_REG_V10,
                         SYSZ_REG_V11,
                         SYSZ_REG_V12,
                         SYSZ_REG_V13,
                         SYSZ_REG_V14,
                         SYSZ_REG_V15,
                         SYSZ_REG_V16,
                         SYSZ_REG_V17,
                         SYSZ_REG_V18,
                         SYSZ_REG_V19,
                         SYSZ_REG_V20,
                         SYSZ_REG_V21,
                         SYSZ_REG_V22,
                         SYSZ_REG_V23,
                         SYSZ_REG_V24,
                         SYSZ_REG_V25,
                         SYSZ_REG_V26,
                         SYSZ_REG_V27,
                         SYSZ_REG_V28,
                         SYSZ_REG_V29,
                         SYSZ_REG_V30,
                         SYSZ_REG_V31,
                         SYSZ_REG_F0,
                         SYSZ_REG_F1,
                         SYSZ_REG_F2,
                         SYSZ_REG_F3,
                         SYSZ_REG_F4,
                         SYSZ_REG_F5,
                         SYSZ_REG_F6,
                         SYSZ_REG_F7,
                         SYSZ_REG_F8,
                         SYSZ_REG_F9,
                          SYSZ_REG_F10,
                          SYSZ_REG_F11,
                          SYSZ_REG_F12,
                          SYSZ_REG_F13,
                          SYSZ_REG_F14,
                          SYSZ_REG_F15,
                          SYSZ_REG_F16,
                          SYSZ_REG_F17,
                          SYSZ_REG_F18,
                          SYSZ_REG_F19,
                          SYSZ_REG_F20,
                          SYSZ_REG_F21,
                          SYSZ_REG_F22,
                          SYSZ_REG_F23,
                          SYSZ_REG_F24,
                          SYSZ_REG_F25,
                          SYSZ_REG_F26,
                          SYSZ_REG_F27,
                          SYSZ_REG_F28,
                          SYSZ_REG_F29,
                          SYSZ_REG_F30,
                          SYSZ_REG_F31,
                         SYSZ_REG_F0,
                         SYSZ_REG_F1,
                          SYSZ_REG_F4,
                          SYSZ_REG_F5,
                          SYSZ_REG_F8,
                          SYSZ_REG_F9,
                           SYSZ_REG_F12,
                           SYSZ_REG_F13,
                          SYSZ_REG_F0,
                          SYSZ_REG_F1,
                          SYSZ_REG_F2,
                          SYSZ_REG_F3,
                          SYSZ_REG_F4,
                          SYSZ_REG_F5,
                          SYSZ_REG_F6,
                          SYSZ_REG_F7,
                          SYSZ_REG_F8,
                          SYSZ_REG_F9,
                           SYSZ_REG_F10,
                           SYSZ_REG_F11,
                           SYSZ_REG_F12,
                           SYSZ_REG_F13,
                           SYSZ_REG_F14,
                           SYSZ_REG_F15,
                           SYSZ_REG_F16,
                           SYSZ_REG_F17,
                           SYSZ_REG_F18,
                           SYSZ_REG_F19,
                           SYSZ_REG_F20,
                           SYSZ_REG_F21,
                           SYSZ_REG_F22,
                           SYSZ_REG_F23,
                           SYSZ_REG_F24,
                           SYSZ_REG_F25,
                           SYSZ_REG_F26,
                           SYSZ_REG_F27,
                           SYSZ_REG_F28,
                           SYSZ_REG_F29,
                           SYSZ_REG_F30,
                           SYSZ_REG_F31,
                          SYSZ_REG_0,
                          SYSZ_REG_1,
                          SYSZ_REG_2,
                          SYSZ_REG_3,
                          SYSZ_REG_4,
                          SYSZ_REG_5,
                          SYSZ_REG_6,
                          SYSZ_REG_7,
                          SYSZ_REG_8,
                          SYSZ_REG_9,
                           SYSZ_REG_10,
                           SYSZ_REG_11,
                           SYSZ_REG_12,
                           SYSZ_REG_13,
                           SYSZ_REG_14,
                           SYSZ_REG_15,
                          SYSZ_REG_0,
                          SYSZ_REG_1,
                          SYSZ_REG_2,
                          SYSZ_REG_3,
                          SYSZ_REG_4,
                          SYSZ_REG_5,
                          SYSZ_REG_6,
                          SYSZ_REG_7,
                          SYSZ_REG_8,
                          SYSZ_REG_9,
                           SYSZ_REG_10,
                           SYSZ_REG_11,
                           SYSZ_REG_12,
                           SYSZ_REG_13,
                           SYSZ_REG_14,
                           SYSZ_REG_15,
                          SYSZ_REG_0,
                          SYSZ_REG_1,
                          SYSZ_REG_2,
                          SYSZ_REG_3,
                          SYSZ_REG_4,
                          SYSZ_REG_5,
                          SYSZ_REG_6,
                          SYSZ_REG_7,
                          SYSZ_REG_8,
                          SYSZ_REG_9,
                           SYSZ_REG_10,
                           SYSZ_REG_11,
                           SYSZ_REG_12,
                           SYSZ_REG_13,
                           SYSZ_REG_14,
                           SYSZ_REG_15,
                          SYSZ_REG_0,
                          SYSZ_REG_2,
                          SYSZ_REG_4,
                          SYSZ_REG_6,
                          SYSZ_REG_8,
                           SYSZ_REG_10,
                           SYSZ_REG_12,
                           SYSZ_REG_14,
 };

 if (r < ARR_SIZE(map))
  return map[r];


 return 0;
}

#endif
