# 1 "project/radare2/shlr/capstone/cs_priv.h"



#ifndef CS_PRIV_H
#define CS_PRIV_H 

#ifdef CAPSTONE_DEBUG
#include <assert.h>
#endif
#include <capstone/capstone.h>

#include "MCInst.h"
#include "SStream.h"

typedef void (*Printer_t)(MCInst *MI, SStream *OS, void *info);



typedef void (*PostPrinter_t)(csh handle, cs_insn *, char *mnem, MCInst *mci);

typedef bool (*Disasm_t)(csh handle, const uint8_t *code, size_t code_len, MCInst *instr, uint16_t *size, uint64_t address, void *info);

typedef const char *(*GetName_t)(csh handle, unsigned int id);

typedef void (*GetID_t)(cs_struct *h, cs_insn *insn, unsigned int id);


typedef const char *(*GetRegisterName_t)(unsigned RegNo);


typedef void (*GetRegisterAccess_t)(const cs_insn *insn,
  cs_regs regs_read, uint8_t *regs_read_count,
  cs_regs regs_write, uint8_t *regs_write_count);


typedef struct ARM_ITStatus {
 unsigned char ITStates[8];
 unsigned int size;
} ARM_ITStatus;


struct customized_mnem {

 unsigned int id;

 char mnemonic[CS_MNEMONIC_SIZE];
};

struct insn_mnem {
 struct customized_mnem insn;
 struct insn_mnem *next;
};

struct cs_struct {
 cs_arch arch;
 cs_mode mode;
 Printer_t printer;
 void *printer_info;
 Disasm_t disasm;
 void *getinsn_info;
 GetName_t reg_name;
 GetName_t insn_name;
 GetName_t group_name;
 GetID_t insn_id;
 PostPrinter_t post_printer;
 cs_err errnum;
 ARM_ITStatus ITBlock;
 cs_opt_value detail, imm_unsigned;
 int syntax;
 bool doing_mem;
 unsigned short *insn_cache;
 GetRegisterName_t get_regname;
 bool skipdata;
 uint8_t skipdata_size;
 cs_opt_skipdata skipdata_setup;
 const uint8_t *regsize_map;
 GetRegisterAccess_t reg_access;
 struct insn_mnem *mnem_list;
};

#define MAX_ARCH CS_ARCH_MAX


#define MODE_IS_BIG_ENDIAN(mode) (((mode) & CS_MODE_BIG_ENDIAN) != 0)

extern cs_malloc_t cs_mem_malloc;
extern cs_calloc_t cs_mem_calloc;
extern cs_realloc_t cs_mem_realloc;
extern cs_free_t cs_mem_free;
extern cs_vsnprintf_t cs_vsnprintf;



#ifdef CAPSTONE_DEBUG
#define CS_ASSERT(expr) assert(expr)
#else
#define CS_ASSERT(expr) 
#endif

#endif
