# 1 "project/radare2/shlr/capstone/cs.c"


#if defined (WIN32) || defined (WIN64) || defined (_WIN32) || defined (_WIN64)
#pragma warning(disable:4996)
#pragma warning(disable:28719)
#endif
#if defined(CAPSTONE_HAS_OSXKERNEL)
#include <Availability.h>
#include <libkern/libkern.h>
#else
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#endif

#include <string.h>
#include <capstone/capstone.h>

#include "utils.h"
#include "MCRegisterInfo.h"

#if defined(_KERNEL_MODE)
#include "windows\winkernel_mm.h"
#endif


#if defined(_KERNEL_MODE) && !defined(CAPSTONE_DIET)
#if defined(CAPSTONE_HAS_ARM) || defined(CAPSTONE_HAS_ARM64) || defined(CAPSTONE_HAS_M68K)
#define CAPSTONE_STR_INTERNAL(x) #x
#define CAPSTONE_STR(x) CAPSTONE_STR_INTERNAL(x)
#define CAPSTONE_MSVC_WRANING_PREFIX __FILE__ "("CAPSTONE_STR(__LINE__)") : warning message : "

        
# 33 "project/radare2/shlr/capstone/cs.c"
#pragma message(CAPSTONE_MSVC_WRANING_PREFIX "Windows driver does not support full features for selected architecture(s). Define CAPSTONE_DIET to compile Capstone with only supported features. See issue #681 for details.")

#undef CAPSTONE_MSVC_WRANING_PREFIX
#undef CAPSTONE_STR
#undef CAPSTONE_STR_INTERNAL
#endif
#endif

#if !defined(CAPSTONE_HAS_OSXKERNEL) && !defined(CAPSTONE_DIET) && !defined(_KERNEL_MODE)
#define INSN_CACHE_SIZE 32
#else

#define INSN_CACHE_SIZE 8
#endif


#ifndef CAPSTONE_DIET
#define SKIPDATA_MNEM ".byte"
#else
#define SKIPDATA_MNEM NULL
#endif

#include "arch/AArch64/AArch64Module.h"
#include "arch/ARM/ARMModule.h"
#include "arch/EVM/EVMModule.h"
#include "arch/WASM/WASMModule.h"
#include "arch/M680X/M680XModule.h"
#include "arch/M68K/M68KModule.h"
#include "arch/Mips/MipsModule.h"
#include "arch/PowerPC/PPCModule.h"
#include "arch/Sparc/SparcModule.h"
#include "arch/SystemZ/SystemZModule.h"
#include "arch/TMS320C64x/TMS320C64xModule.h"
#include "arch/X86/X86Module.h"
#include "arch/XCore/XCoreModule.h"
#include "arch/RISCV/RISCVModule.h"
#include "arch/MOS65XX/MOS65XXModule.h"
#include "arch/BPF/BPFModule.h"

static const struct {

 cs_err (*arch_init)(cs_struct *);

 cs_err (*arch_option)(cs_struct *, cs_opt_type, size_t value);


 cs_mode arch_disallowed_mode_mask;
} arch_configs[MAX_ARCH] = {
#ifdef CAPSTONE_HAS_ARM
 {
  ARM_global_init,
  ARM_option,
  ~(CS_MODE_LITTLE_ENDIAN | CS_MODE_ARM | CS_MODE_V8 | CS_MODE_MCLASS
    | CS_MODE_THUMB | CS_MODE_BIG_ENDIAN)
 },
#else
 { NULL, NULL, 0 },
#endif
#ifdef CAPSTONE_HAS_ARM64
 {
  AArch64_global_init,
  AArch64_option,
  ~(CS_MODE_LITTLE_ENDIAN | CS_MODE_ARM | CS_MODE_BIG_ENDIAN),
 },
#else
 { NULL, NULL, 0 },
#endif
#ifdef CAPSTONE_HAS_MIPS
 {
  Mips_global_init,
  Mips_option,
  ~(CS_MODE_LITTLE_ENDIAN | CS_MODE_32 | CS_MODE_64 | CS_MODE_MICRO
    | CS_MODE_MIPS32R6 | CS_MODE_BIG_ENDIAN | CS_MODE_MIPS2 | CS_MODE_MIPS3),
 },
#else
 { NULL, NULL, 0 },
#endif
#ifdef CAPSTONE_HAS_X86
 {
  X86_global_init,
  X86_option,
  ~(CS_MODE_LITTLE_ENDIAN | CS_MODE_32 | CS_MODE_64 | CS_MODE_16),
 },
#else
 { NULL, NULL, 0 },
#endif
#ifdef CAPSTONE_HAS_POWERPC
 {
  PPC_global_init,
  PPC_option,
  ~(CS_MODE_LITTLE_ENDIAN | CS_MODE_32 | CS_MODE_64 | CS_MODE_BIG_ENDIAN
    | CS_MODE_QPX),
 },
#else
 { NULL, NULL, 0 },
#endif
#ifdef CAPSTONE_HAS_SPARC
 {
  Sparc_global_init,
  Sparc_option,
  ~(CS_MODE_BIG_ENDIAN | CS_MODE_V9),
 },
#else
 { NULL, NULL, 0 },
#endif
#ifdef CAPSTONE_HAS_SYSZ
 {
  SystemZ_global_init,
  SystemZ_option,
  ~(CS_MODE_BIG_ENDIAN),
 },
#else
 { NULL, NULL, 0 },
#endif
#ifdef CAPSTONE_HAS_XCORE
 {
  XCore_global_init,
  XCore_option,
  ~(CS_MODE_BIG_ENDIAN),
 },
#else
 { NULL, NULL, 0 },
#endif
#ifdef CAPSTONE_HAS_M68K
 {
  M68K_global_init,
  M68K_option,
  ~(CS_MODE_BIG_ENDIAN | CS_MODE_M68K_000 | CS_MODE_M68K_010 | CS_MODE_M68K_020
    | CS_MODE_M68K_030 | CS_MODE_M68K_040 | CS_MODE_M68K_060),
 },
#else
 { NULL, NULL, 0 },
#endif
#ifdef CAPSTONE_HAS_TMS320C64X
 {
  TMS320C64x_global_init,
  TMS320C64x_option,
  ~(CS_MODE_BIG_ENDIAN),
 },
#else
 { NULL, NULL, 0 },
#endif
#ifdef CAPSTONE_HAS_M680X
 {
  M680X_global_init,
  M680X_option,
  ~(CS_MODE_M680X_6301 | CS_MODE_M680X_6309 | CS_MODE_M680X_6800
    | CS_MODE_M680X_6801 | CS_MODE_M680X_6805 | CS_MODE_M680X_6808
    | CS_MODE_M680X_6809 | CS_MODE_M680X_6811 | CS_MODE_M680X_CPU12
    | CS_MODE_M680X_HCS08),
 },
#else
 { NULL, NULL, 0 },
#endif
#ifdef CAPSTONE_HAS_EVM
 {
  EVM_global_init,
  EVM_option,
  0,
 },
#else
 { NULL, NULL, 0 },
#endif
#ifdef CAPSTONE_HAS_MOS65XX
 {
  MOS65XX_global_init,
  MOS65XX_option,
  ~(CS_MODE_LITTLE_ENDIAN | CS_MODE_MOS65XX_6502 | CS_MODE_MOS65XX_65C02
    | CS_MODE_MOS65XX_W65C02 | CS_MODE_MOS65XX_65816_LONG_MX),
 },
#else
 { NULL, NULL, 0 },
#endif
#ifdef CAPSTONE_HAS_WASM
 {
  WASM_global_init,
  WASM_option,
  0,
 },
#else
 { NULL, NULL, 0 },
#endif
#ifdef CAPSTONE_HAS_BPF
 {
  BPF_global_init,
  BPF_option,
  ~(CS_MODE_LITTLE_ENDIAN | CS_MODE_BPF_CLASSIC | CS_MODE_BPF_EXTENDED
    | CS_MODE_BIG_ENDIAN),
 },
#else
 { NULL, NULL, 0 },
#endif
#ifdef CAPSTONE_HAS_RISCV
 {
  RISCV_global_init,
  RISCV_option,
  ~(CS_MODE_RISCV32 | CS_MODE_RISCV64 | CS_MODE_RISCVC),
 },
#else
 { NULL, NULL, 0 },
#endif
};


static const uint32_t all_arch = 0
#ifdef CAPSTONE_HAS_ARM
 | (1 << CS_ARCH_ARM)
#endif
#ifdef CAPSTONE_HAS_ARM64
 | (1 << CS_ARCH_ARM64)
#endif
#ifdef CAPSTONE_HAS_MIPS
 | (1 << CS_ARCH_MIPS)
#endif
#ifdef CAPSTONE_HAS_X86
 | (1 << CS_ARCH_X86)
#endif
#ifdef CAPSTONE_HAS_POWERPC
 | (1 << CS_ARCH_PPC)
#endif
#ifdef CAPSTONE_HAS_SPARC
 | (1 << CS_ARCH_SPARC)
#endif
#ifdef CAPSTONE_HAS_SYSZ
 | (1 << CS_ARCH_SYSZ)
#endif
#ifdef CAPSTONE_HAS_XCORE
 | (1 << CS_ARCH_XCORE)
#endif
#ifdef CAPSTONE_HAS_M68K
 | (1 << CS_ARCH_M68K)
#endif
#ifdef CAPSTONE_HAS_TMS320C64X
 | (1 << CS_ARCH_TMS320C64X)
#endif
#ifdef CAPSTONE_HAS_M680X
 | (1 << CS_ARCH_M680X)
#endif
#ifdef CAPSTONE_HAS_EVM
 | (1 << CS_ARCH_EVM)
#endif
#ifdef CAPSTONE_HAS_MOS65XX
 | (1 << CS_ARCH_MOS65XX)
#endif
#ifdef CAPSTONE_HAS_WASM
 | (1 << CS_ARCH_WASM)
#endif
#ifdef CAPSTONE_HAS_BPF
 | (1 << CS_ARCH_BPF)
#endif
#ifdef CAPSTONE_HAS_RISCV
 | (1 << CS_ARCH_RISCV)
#endif
;


#if defined(CAPSTONE_USE_SYS_DYN_MEM)
#if !defined(CAPSTONE_HAS_OSXKERNEL) && !defined(_KERNEL_MODE)

cs_malloc_t cs_mem_malloc = malloc;
cs_calloc_t cs_mem_calloc = calloc;
cs_realloc_t cs_mem_realloc = realloc;
cs_free_t cs_mem_free = free;
#if defined(_WIN32_WCE)
cs_vsnprintf_t cs_vsnprintf = _vsnprintf;
#else
cs_vsnprintf_t cs_vsnprintf = vsnprintf;
#endif

#elif defined(_KERNEL_MODE)

cs_malloc_t cs_mem_malloc = cs_winkernel_malloc;
cs_calloc_t cs_mem_calloc = cs_winkernel_calloc;
cs_realloc_t cs_mem_realloc = cs_winkernel_realloc;
cs_free_t cs_mem_free = cs_winkernel_free;
cs_vsnprintf_t cs_vsnprintf = cs_winkernel_vsnprintf;
#else

extern void* kern_os_malloc(size_t size);
extern void kern_os_free(void* addr);
extern void* kern_os_realloc(void* addr, size_t nsize);

static void* cs_kern_os_calloc(size_t num, size_t size)
{
 return kern_os_malloc(num * size);
}

cs_malloc_t cs_mem_malloc = kern_os_malloc;
cs_calloc_t cs_mem_calloc = cs_kern_os_calloc;
cs_realloc_t cs_mem_realloc = kern_os_realloc;
cs_free_t cs_mem_free = kern_os_free;
cs_vsnprintf_t cs_vsnprintf = vsnprintf;
#endif
#else

cs_malloc_t cs_mem_malloc = NULL;
cs_calloc_t cs_mem_calloc = NULL;
cs_realloc_t cs_mem_realloc = NULL;
cs_free_t cs_mem_free = NULL;
cs_vsnprintf_t cs_vsnprintf = NULL;

#endif

CAPSTONE_EXPORT
unsigned int CAPSTONE_API cs_version(int *major, int *minor)
{
 if (major != NULL && minor != NULL) {
  *major = CS_API_MAJOR;
  *minor = CS_API_MINOR;
 }

 return (CS_API_MAJOR << 8) + CS_API_MINOR;
}

CAPSTONE_EXPORT
bool CAPSTONE_API cs_support(int query)
{
 if (query == CS_ARCH_ALL)
  return all_arch == ((1 << CS_ARCH_ARM) | (1 << CS_ARCH_ARM64) |
        (1 << CS_ARCH_MIPS) | (1 << CS_ARCH_X86) |
        (1 << CS_ARCH_PPC) | (1 << CS_ARCH_SPARC) |
        (1 << CS_ARCH_SYSZ) | (1 << CS_ARCH_XCORE) |
        (1 << CS_ARCH_M68K) | (1 << CS_ARCH_TMS320C64X) |
        (1 << CS_ARCH_M680X) | (1 << CS_ARCH_EVM) |
        (1 << CS_ARCH_RISCV) | (1 << CS_ARCH_MOS65XX) |
        (1 << CS_ARCH_WASM) | (1 << CS_ARCH_BPF));

 if ((unsigned int)query < CS_ARCH_MAX)
  return all_arch & (1 << query);

 if (query == CS_SUPPORT_DIET) {
#ifdef CAPSTONE_DIET
  return true;
#else
  return false;
#endif
 }

 if (query == CS_SUPPORT_X86_REDUCE) {
#if defined(CAPSTONE_HAS_X86) && defined(CAPSTONE_X86_REDUCE)
  return true;
#else
  return false;
#endif
 }


 return false;
}

CAPSTONE_EXPORT
cs_err CAPSTONE_API cs_errno(csh handle)
{
 struct cs_struct *ud;
 if (!handle)
  return CS_ERR_CSH;

 ud = (struct cs_struct *)(uintptr_t)handle;

 return ud->errnum;
}

CAPSTONE_EXPORT
const char * CAPSTONE_API cs_strerror(cs_err code)
{
 switch(code) {
  default:
   return "Unknown error code";
  case CS_ERR_OK:
   return "OK (CS_ERR_OK)";
  case CS_ERR_MEM:
   return "Out of memory (CS_ERR_MEM)";
  case CS_ERR_ARCH:
   return "Invalid/unsupported architecture(CS_ERR_ARCH)";
  case CS_ERR_HANDLE:
   return "Invalid handle (CS_ERR_HANDLE)";
  case CS_ERR_CSH:
   return "Invalid csh (CS_ERR_CSH)";
  case CS_ERR_MODE:
   return "Invalid mode (CS_ERR_MODE)";
  case CS_ERR_OPTION:
   return "Invalid option (CS_ERR_OPTION)";
  case CS_ERR_DETAIL:
   return "Details are unavailable (CS_ERR_DETAIL)";
  case CS_ERR_MEMSETUP:
   return "Dynamic memory management uninitialized (CS_ERR_MEMSETUP)";
  case CS_ERR_VERSION:
   return "Different API version between core & binding (CS_ERR_VERSION)";
  case CS_ERR_DIET:
   return "Information irrelevant in diet engine (CS_ERR_DIET)";
  case CS_ERR_SKIPDATA:
   return "Information irrelevant for 'data' instruction in SKIPDATA mode (CS_ERR_SKIPDATA)";
  case CS_ERR_X86_ATT:
   return "AT&T syntax is unavailable (CS_ERR_X86_ATT)";
  case CS_ERR_X86_INTEL:
   return "INTEL syntax is unavailable (CS_ERR_X86_INTEL)";
  case CS_ERR_X86_MASM:
   return "MASM syntax is unavailable (CS_ERR_X86_MASM)";
 }
}

CAPSTONE_EXPORT
cs_err CAPSTONE_API cs_open(cs_arch arch, cs_mode mode, csh *handle)
{
 cs_err err;
 struct cs_struct *ud;
 if (!cs_mem_malloc || !cs_mem_calloc || !cs_mem_realloc || !cs_mem_free || !cs_vsnprintf)


  return CS_ERR_MEMSETUP;

 if (arch < CS_ARCH_MAX && arch_configs[arch].arch_init) {

  if (mode & arch_configs[arch].arch_disallowed_mode_mask) {
   *handle = 0;
   return CS_ERR_MODE;
  }

  ud = cs_mem_calloc(1, sizeof(*ud));
  if (!ud) {

   return CS_ERR_MEM;
  }

  ud->errnum = CS_ERR_OK;
  ud->arch = arch;
  ud->mode = mode;

  ud->detail = CS_OPT_OFF;


  ud->skipdata_setup.mnemonic = SKIPDATA_MNEM;

  err = arch_configs[ud->arch].arch_init(ud);
  if (err) {
   cs_mem_free(ud);
   *handle = 0;
   return err;
  }

  *handle = (uintptr_t)ud;

  return CS_ERR_OK;
 } else {
  *handle = 0;
  return CS_ERR_ARCH;
 }
}

CAPSTONE_EXPORT
cs_err CAPSTONE_API cs_close(csh *handle)
{
 struct cs_struct *ud;
 struct insn_mnem *next, *tmp;

 if (*handle == 0)

  return CS_ERR_CSH;

 ud = (struct cs_struct *)(*handle);

 if (ud->printer_info)
  cs_mem_free(ud->printer_info);


 tmp = ud->mnem_list;
 while(tmp) {
  next = tmp->next;
  cs_mem_free(tmp);
  tmp = next;
 }

 cs_mem_free(ud->insn_cache);

 memset(ud, 0, sizeof(*ud));
 cs_mem_free(ud);



 *handle = 0;

 return CS_ERR_OK;
}




static int str_replace(char *result, char *target, const char *str1, char *str2)
{

 if (strlen(target) - strlen(str1) + strlen(str2) < CS_MNEMONIC_SIZE - 1) {

  strcpy(result, str2);

  strcat(result, target + strlen(str1));

  return 0;
 } else
  return -1;
}


static void fill_insn(struct cs_struct *handle, cs_insn *insn, char *buffer, MCInst *mci,
  PostPrinter_t postprinter, const uint8_t *code)
{
#ifndef CAPSTONE_DIET
 char *sp, *mnem;
#endif
 uint16_t copy_size = MIN(sizeof(insn->bytes), insn->size);



 memcpy(insn->bytes, code + insn->size - copy_size, copy_size);
 insn->op_str[0] = '\0';
 insn->size = copy_size;


 if (MCInst_getOpcodePub(mci))
  insn->id = MCInst_getOpcodePub(mci);


 if (postprinter)
  postprinter((csh)handle, insn, buffer, mci);

#ifndef CAPSTONE_DIET
 mnem = insn->mnemonic;
 for (sp = buffer; *sp; sp++) {
  if (*sp == ' '|| *sp == '\t')
   break;
  if (*sp == '|')
   *sp = ' ';

  *mnem = *sp;
  mnem++;
 }

 *mnem = '\0';


 if (handle->mnem_list) {
  struct insn_mnem *tmp = handle->mnem_list;
  while(tmp) {
   if (tmp->insn.id == insn->id) {
    char str[CS_MNEMONIC_SIZE];

    if (!str_replace(str, insn->mnemonic, cs_insn_name((csh)handle, insn->id), tmp->insn.mnemonic)) {

     (void)strncpy(insn->mnemonic, str, sizeof(insn->mnemonic) - 1);
     insn->mnemonic[sizeof(insn->mnemonic) - 1] = '\0';
    }

    break;
   }
   tmp = tmp->next;
  }
 }


 if (*sp) {

  sp++;
  for (; ((*sp == ' ') || (*sp == '\t')); sp++);
  strncpy(insn->op_str, sp, sizeof(insn->op_str) - 1);
  insn->op_str[sizeof(insn->op_str) - 1] = '\0';
 } else
  insn->op_str[0] = '\0';

#endif
}



static uint8_t skipdata_size(cs_struct *handle)
{
 switch(handle->arch) {
  default:

   return (uint8_t)-1;
  case CS_ARCH_ARM:

   if (handle->mode & CS_MODE_THUMB)
    return 2;

   return 4;
  case CS_ARCH_ARM64:
  case CS_ARCH_MIPS:
  case CS_ARCH_PPC:
  case CS_ARCH_SPARC:

   return 4;
  case CS_ARCH_SYSZ:


   return 2;
  case CS_ARCH_X86:

   return 1;
  case CS_ARCH_XCORE:


   return 2;
  case CS_ARCH_M68K:

   return 2;
  case CS_ARCH_TMS320C64X:

   return 4;
  case CS_ARCH_M680X:

   return 1;
  case CS_ARCH_EVM:

   return 1;
  case CS_ARCH_WASM:

   return 1;
  case CS_ARCH_MOS65XX:

   return 1;
  case CS_ARCH_BPF:

   return 8;
  case CS_ARCH_RISCV:

   if (handle->mode & CS_MODE_RISCVC)
    return 2;
   return 4;
 }
}

CAPSTONE_EXPORT
cs_err CAPSTONE_API cs_option(csh ud, cs_opt_type type, size_t value)
{
 struct cs_struct *handle;
 cs_opt_mnem *opt;



 if (type == CS_OPT_MEM) {
  cs_opt_mem *mem = (cs_opt_mem *)value;

  cs_mem_malloc = mem->malloc;
  cs_mem_calloc = mem->calloc;
  cs_mem_realloc = mem->realloc;
  cs_mem_free = mem->free;
  cs_vsnprintf = mem->vsnprintf;

  return CS_ERR_OK;
 }

 handle = (struct cs_struct *)(uintptr_t)ud;
 if (!handle)
  return CS_ERR_CSH;

 switch(type) {
  default:
   break;

  case CS_OPT_UNSIGNED:
   handle->imm_unsigned = (cs_opt_value)value;
   return CS_ERR_OK;

  case CS_OPT_DETAIL:
   handle->detail = (cs_opt_value)value;
   return CS_ERR_OK;

  case CS_OPT_SKIPDATA:
   handle->skipdata = (value == CS_OPT_ON);
   if (handle->skipdata) {
    if (handle->skipdata_size == 0) {

     handle->skipdata_size = skipdata_size(handle);
    }
   }
   return CS_ERR_OK;

  case CS_OPT_SKIPDATA_SETUP:
   if (value) {
    handle->skipdata_setup = *((cs_opt_skipdata *)value);
    if (handle->skipdata_setup.mnemonic == NULL) {
     handle->skipdata_setup.mnemonic = SKIPDATA_MNEM;
    }
   }
   return CS_ERR_OK;

  case CS_OPT_MNEMONIC:
   opt = (cs_opt_mnem *)value;
   if (opt->id) {
    if (opt->mnemonic) {
     struct insn_mnem *tmp;



     tmp = handle->mnem_list;
     while(tmp) {
      if (tmp->insn.id == opt->id) {

       (void)strncpy(tmp->insn.mnemonic, opt->mnemonic, sizeof(tmp->insn.mnemonic) - 1);
       tmp->insn.mnemonic[sizeof(tmp->insn.mnemonic) - 1] = '\0';
       break;
      }
      tmp = tmp->next;
     }


     if (!tmp) {
      tmp = cs_mem_malloc(sizeof(*tmp));
      tmp->insn.id = opt->id;
      (void)strncpy(tmp->insn.mnemonic, opt->mnemonic, sizeof(tmp->insn.mnemonic) - 1);
      tmp->insn.mnemonic[sizeof(tmp->insn.mnemonic) - 1] = '\0';

      tmp->next = handle->mnem_list;
      handle->mnem_list = tmp;
     }
     return CS_ERR_OK;
    } else {
     struct insn_mnem *prev, *tmp;



     tmp = handle->mnem_list;
     prev = tmp;
     while(tmp) {
      if (tmp->insn.id == opt->id) {

       if (tmp == prev) {

        handle->mnem_list = tmp->next;
       } else {
        prev->next = tmp->next;
       }
       cs_mem_free(tmp);
       break;
      }
      prev = tmp;
      tmp = tmp->next;
     }
    }
   }
   return CS_ERR_OK;

  case CS_OPT_MODE:

   if (value & arch_configs[handle->arch].arch_disallowed_mode_mask) {
    return CS_ERR_OPTION;
   }
   break;
 }

 return arch_configs[handle->arch].arch_option(handle, type, value);
}


#ifndef CAPSTONE_DIET
static void skipdata_opstr(char *opstr, const uint8_t *buffer, size_t size)
{
 char *p = opstr;
 int len;
 size_t i;
 size_t available = sizeof(((cs_insn*)NULL)->op_str);

 if (!size) {
  opstr[0] = '\0';
  return;
 }

 len = cs_snprintf(p, available, "0x%02x", buffer[0]);
 p+= len;
 available -= len;

 for(i = 1; i < size; i++) {
  len = cs_snprintf(p, available, ", 0x%02x", buffer[i]);
  if (len < 0) {
   break;
  }
  if ((size_t)len > available - 1) {
   break;
  }
  p+= len;
  available -= len;
 }
}
#endif



CAPSTONE_EXPORT
size_t CAPSTONE_API cs_disasm(csh ud, const uint8_t *buffer, size_t size, uint64_t offset, size_t count, cs_insn **insn)
{
 struct cs_struct *handle;
 MCInst mci;
 uint16_t insn_size;
 size_t c = 0, i;
 unsigned int f = 0;
 cs_insn *insn_cache;
 void *total = NULL;
 size_t total_size = 0;
 bool r;
 void *tmp;
 size_t skipdata_bytes;
 uint64_t offset_org;
 size_t size_org;
 const uint8_t *buffer_org;
 unsigned int cache_size = INSN_CACHE_SIZE;
 size_t next_offset;

 handle = (struct cs_struct *)(uintptr_t)ud;
 if (!handle) {


  return 0;
 }

 handle->errnum = CS_ERR_OK;


 if (handle->arch == CS_ARCH_ARM)
  handle->ITBlock.size = 0;

#ifdef CAPSTONE_USE_SYS_DYN_MEM
 if (count > 0 && count <= INSN_CACHE_SIZE)
  cache_size = (unsigned int) count;
#endif


 buffer_org = buffer;
 offset_org = offset;
 size_org = size;

 total_size = sizeof(cs_insn) * cache_size;
 total = cs_mem_malloc(total_size);
 if (total == NULL) {

  handle->errnum = CS_ERR_MEM;
  return 0;
 }

 insn_cache = total;

 while (size > 0) {
  MCInst_Init(&mci);
  mci.csh = handle;


  mci.address = offset;

  if (handle->detail) {

   insn_cache->detail = cs_mem_malloc(sizeof(cs_detail));
  } else {
   insn_cache->detail = NULL;
  }


  mci.flat_insn = insn_cache;
  mci.flat_insn->address = offset;
#ifdef CAPSTONE_DIET

  mci.flat_insn->mnemonic[0] = '\0';
  mci.flat_insn->op_str[0] = '\0';
#endif

  r = handle->disasm(ud, buffer, size, &mci, &insn_size, offset, handle->getinsn_info);
  if (r) {
   SStream ss;
   SStream_Init(&ss);

   mci.flat_insn->size = insn_size;



   handle->insn_id(handle, insn_cache, mci.Opcode);

   handle->printer(&mci, &ss, handle->printer_info);
   fill_insn(handle, insn_cache, ss.buffer, &mci, handle->post_printer, buffer);


   if (handle->arch == CS_ARCH_X86)
    insn_cache->id += mci.popcode_adjust;

   next_offset = insn_size;
  } else {



   if (handle->detail) {
    cs_mem_free(insn_cache->detail);
   }



   if (!handle->skipdata || handle->skipdata_size > size)
    break;

   if (handle->skipdata_setup.callback) {
    skipdata_bytes = handle->skipdata_setup.callback(buffer_org, size_org,
      (size_t)(offset - offset_org), handle->skipdata_setup.user_data);
    if (skipdata_bytes > size)

     break;

    if (!skipdata_bytes)

     break;
   } else
    skipdata_bytes = handle->skipdata_size;


   insn_cache->id = 0;
   insn_cache->address = offset;
   insn_cache->size = (uint16_t)skipdata_bytes;
   memcpy(insn_cache->bytes, buffer, skipdata_bytes);
#ifdef CAPSTONE_DIET
   insn_cache->mnemonic[0] = '\0';
   insn_cache->op_str[0] = '\0';
#else
   strncpy(insn_cache->mnemonic, handle->skipdata_setup.mnemonic,
     sizeof(insn_cache->mnemonic) - 1);
   skipdata_opstr(insn_cache->op_str, buffer, skipdata_bytes);
#endif
   insn_cache->detail = NULL;

   next_offset = skipdata_bytes;
  }


  f++;


  c++;
  if (count > 0 && c == count)

   break;

  if (f == cache_size) {

   cache_size = cache_size * 8 / 5;
   total_size += (sizeof(cs_insn) * cache_size);
   tmp = cs_mem_realloc(total, total_size);
   if (tmp == NULL) {
    if (handle->detail) {
     insn_cache = (cs_insn *)total;
     for (i = 0; i < c; i++, insn_cache++)
      cs_mem_free(insn_cache->detail);
    }

    cs_mem_free(total);
    *insn = NULL;
    handle->errnum = CS_ERR_MEM;
    return 0;
   }

   total = tmp;

   insn_cache = (cs_insn *)((char *)total + sizeof(cs_insn) * c);


   f = 0;
  } else
   insn_cache++;

  buffer += next_offset;
  size -= next_offset;
  offset += next_offset;
 }

 if (!c) {

  cs_mem_free(total);
  total = NULL;
 } else if (f != cache_size) {

  tmp = cs_mem_realloc(total, total_size - (cache_size - f) * sizeof(*insn_cache));
  if (tmp == NULL) {

   if (handle->detail) {
    insn_cache = (cs_insn *)total;
    for (i = 0; i < c; i++, insn_cache++)
     cs_mem_free(insn_cache->detail);
   }

   cs_mem_free(total);
   *insn = NULL;

   handle->errnum = CS_ERR_MEM;
   return 0;
  }

  total = tmp;
 }

 *insn = total;

 return c;
}

CAPSTONE_EXPORT
void CAPSTONE_API cs_free(cs_insn *insn, size_t count)
{
 size_t i;


 for (i = 0; i < count; i++)
  cs_mem_free(insn[i].detail);


 cs_mem_free(insn);
}

CAPSTONE_EXPORT
cs_insn * CAPSTONE_API cs_malloc(csh ud)
{
 cs_insn *insn;
 struct cs_struct *handle = (struct cs_struct *)(uintptr_t)ud;

 insn = cs_mem_malloc(sizeof(cs_insn));
 if (!insn) {

  handle->errnum = CS_ERR_MEM;
  return NULL;
 } else {
  if (handle->detail) {

   insn->detail = cs_mem_malloc(sizeof(cs_detail));
   if (insn->detail == NULL) {
    cs_mem_free(insn);
    handle->errnum = CS_ERR_MEM;
    return NULL;
   }
  } else
   insn->detail = NULL;
 }

 return insn;
}


CAPSTONE_EXPORT
bool CAPSTONE_API cs_disasm_iter(csh ud, const uint8_t **code, size_t *size,
  uint64_t *address, cs_insn *insn)
{
 struct cs_struct *handle;
 uint16_t insn_size;
 MCInst mci;
 bool r;

 handle = (struct cs_struct *)(uintptr_t)ud;
 if (!handle) {
  return false;
 }

 handle->errnum = CS_ERR_OK;

 MCInst_Init(&mci);
 mci.csh = handle;


 mci.address = *address;


 mci.flat_insn = insn;
 mci.flat_insn->address = *address;
#ifdef CAPSTONE_DIET

 mci.flat_insn->mnemonic[0] = '\0';
 mci.flat_insn->op_str[0] = '\0';
#endif

 r = handle->disasm(ud, *code, *size, &mci, &insn_size, *address, handle->getinsn_info);
 if (r) {
  SStream ss;
  SStream_Init(&ss);

  mci.flat_insn->size = insn_size;


  handle->insn_id(handle, insn, mci.Opcode);

  handle->printer(&mci, &ss, handle->printer_info);

  fill_insn(handle, insn, ss.buffer, &mci, handle->post_printer, *code);


  if (handle->arch == CS_ARCH_X86)
   insn->id += mci.popcode_adjust;

  *code += insn_size;
  *size -= insn_size;
  *address += insn_size;
 } else {
  size_t skipdata_bytes;



  if (!handle->skipdata || handle->skipdata_size > *size)
   return false;

  if (handle->skipdata_setup.callback) {
   skipdata_bytes = handle->skipdata_setup.callback(*code, *size,
     0, handle->skipdata_setup.user_data);
   if (skipdata_bytes > *size)

    return false;

   if (!skipdata_bytes)

    return false;
  } else
   skipdata_bytes = handle->skipdata_size;


  insn->id = 0;
  insn->address = *address;
  insn->size = (uint16_t)skipdata_bytes;
#ifdef CAPSTONE_DIET
  insn->mnemonic[0] = '\0';
  insn->op_str[0] = '\0';
#else
  memcpy(insn->bytes, *code, skipdata_bytes);
  strncpy(insn->mnemonic, handle->skipdata_setup.mnemonic,
    sizeof(insn->mnemonic) - 1);
  skipdata_opstr(insn->op_str, *code, skipdata_bytes);
#endif

  *code += skipdata_bytes;
  *size -= skipdata_bytes;
  *address += skipdata_bytes;
 }

 return true;
}


CAPSTONE_EXPORT
const char * CAPSTONE_API cs_reg_name(csh ud, unsigned int reg)
{
 struct cs_struct *handle = (struct cs_struct *)(uintptr_t)ud;

 if (!handle || handle->reg_name == NULL) {
  return NULL;
 }

 return handle->reg_name(ud, reg);
}

CAPSTONE_EXPORT
const char * CAPSTONE_API cs_insn_name(csh ud, unsigned int insn)
{
 struct cs_struct *handle = (struct cs_struct *)(uintptr_t)ud;

 if (!handle || handle->insn_name == NULL) {
  return NULL;
 }

 return handle->insn_name(ud, insn);
}

CAPSTONE_EXPORT
const char * CAPSTONE_API cs_group_name(csh ud, unsigned int group)
{
 struct cs_struct *handle = (struct cs_struct *)(uintptr_t)ud;

 if (!handle || handle->group_name == NULL) {
  return NULL;
 }

 return handle->group_name(ud, group);
}

CAPSTONE_EXPORT
bool CAPSTONE_API cs_insn_group(csh ud, const cs_insn *insn, unsigned int group_id)
{
 struct cs_struct *handle;
 if (!ud)
  return false;

 handle = (struct cs_struct *)(uintptr_t)ud;

 if (!handle->detail) {
  handle->errnum = CS_ERR_DETAIL;
  return false;
 }

 if (!insn->id) {
  handle->errnum = CS_ERR_SKIPDATA;
  return false;
 }

 if (!insn->detail) {
  handle->errnum = CS_ERR_DETAIL;
  return false;
 }

 return arr_exist8(insn->detail->groups, insn->detail->groups_count, group_id);
}

CAPSTONE_EXPORT
bool CAPSTONE_API cs_reg_read(csh ud, const cs_insn *insn, unsigned int reg_id)
{
 struct cs_struct *handle;
 if (!ud)
  return false;

 handle = (struct cs_struct *)(uintptr_t)ud;

 if (!handle->detail) {
  handle->errnum = CS_ERR_DETAIL;
  return false;
 }

 if (!insn->id) {
  handle->errnum = CS_ERR_SKIPDATA;
  return false;
 }

 if (!insn->detail) {
  handle->errnum = CS_ERR_DETAIL;
  return false;
 }

 return arr_exist(insn->detail->regs_read, insn->detail->regs_read_count, reg_id);
}

CAPSTONE_EXPORT
bool CAPSTONE_API cs_reg_write(csh ud, const cs_insn *insn, unsigned int reg_id)
{
 struct cs_struct *handle;
 if (!ud)
  return false;

 handle = (struct cs_struct *)(uintptr_t)ud;

 if (!handle->detail) {
  handle->errnum = CS_ERR_DETAIL;
  return false;
 }

 if (!insn->id) {
  handle->errnum = CS_ERR_SKIPDATA;
  return false;
 }

 if (!insn->detail) {
  handle->errnum = CS_ERR_DETAIL;
  return false;
 }

 return arr_exist(insn->detail->regs_write, insn->detail->regs_write_count, reg_id);
}

CAPSTONE_EXPORT
int CAPSTONE_API cs_op_count(csh ud, const cs_insn *insn, unsigned int op_type)
{
 struct cs_struct *handle;
 unsigned int count = 0, i;
 if (!ud)
  return -1;

 handle = (struct cs_struct *)(uintptr_t)ud;

 if (!handle->detail) {
  handle->errnum = CS_ERR_DETAIL;
  return -1;
 }

 if (!insn->id) {
  handle->errnum = CS_ERR_SKIPDATA;
  return -1;
 }

 if (!insn->detail) {
  handle->errnum = CS_ERR_DETAIL;
  return -1;
 }

 handle->errnum = CS_ERR_OK;

 switch (handle->arch) {
  default:
   handle->errnum = CS_ERR_HANDLE;
   return -1;
  case CS_ARCH_ARM:
   for (i = 0; i < insn->detail->arm.op_count; i++)
    if (insn->detail->arm.operands[i].type == (arm_op_type)op_type)
     count++;
   break;
  case CS_ARCH_ARM64:
   for (i = 0; i < insn->detail->arm64.op_count; i++)
    if (insn->detail->arm64.operands[i].type == (arm64_op_type)op_type)
     count++;
   break;
  case CS_ARCH_X86:
   for (i = 0; i < insn->detail->x86.op_count; i++)
    if (insn->detail->x86.operands[i].type == (x86_op_type)op_type)
     count++;
   break;
  case CS_ARCH_MIPS:
   for (i = 0; i < insn->detail->mips.op_count; i++)
    if (insn->detail->mips.operands[i].type == (mips_op_type)op_type)
     count++;
   break;
  case CS_ARCH_PPC:
   for (i = 0; i < insn->detail->ppc.op_count; i++)
    if (insn->detail->ppc.operands[i].type == (ppc_op_type)op_type)
     count++;
   break;
  case CS_ARCH_SPARC:
   for (i = 0; i < insn->detail->sparc.op_count; i++)
    if (insn->detail->sparc.operands[i].type == (sparc_op_type)op_type)
     count++;
   break;
  case CS_ARCH_SYSZ:
   for (i = 0; i < insn->detail->sysz.op_count; i++)
    if (insn->detail->sysz.operands[i].type == (sysz_op_type)op_type)
     count++;
   break;
  case CS_ARCH_XCORE:
   for (i = 0; i < insn->detail->xcore.op_count; i++)
    if (insn->detail->xcore.operands[i].type == (xcore_op_type)op_type)
     count++;
   break;
  case CS_ARCH_M68K:
   for (i = 0; i < insn->detail->m68k.op_count; i++)
    if (insn->detail->m68k.operands[i].type == (m68k_op_type)op_type)
     count++;
   break;
  case CS_ARCH_TMS320C64X:
   for (i = 0; i < insn->detail->tms320c64x.op_count; i++)
    if (insn->detail->tms320c64x.operands[i].type == (tms320c64x_op_type)op_type)
     count++;
   break;
  case CS_ARCH_M680X:
   for (i = 0; i < insn->detail->m680x.op_count; i++)
    if (insn->detail->m680x.operands[i].type == (m680x_op_type)op_type)
     count++;
   break;
  case CS_ARCH_EVM:
   break;
  case CS_ARCH_MOS65XX:
   for (i = 0; i < insn->detail->mos65xx.op_count; i++)
    if (insn->detail->mos65xx.operands[i].type == (mos65xx_op_type)op_type)
     count++;
   break;
  case CS_ARCH_WASM:
   for (i = 0; i < insn->detail->wasm.op_count; i++)
    if (insn->detail->wasm.operands[i].type == (wasm_op_type)op_type)
     count++;
   break;
  case CS_ARCH_BPF:
   for (i = 0; i < insn->detail->bpf.op_count; i++)
    if (insn->detail->bpf.operands[i].type == (bpf_op_type)op_type)
     count++;
   break;
  case CS_ARCH_RISCV:
   for (i = 0; i < insn->detail->riscv.op_count; i++)
    if (insn->detail->riscv.operands[i].type == (riscv_op_type)op_type)
     count++;
   break;
 }

 return count;
}

CAPSTONE_EXPORT
int CAPSTONE_API cs_op_index(csh ud, const cs_insn *insn, unsigned int op_type,
  unsigned int post)
{
 struct cs_struct *handle;
 unsigned int count = 0, i;
 if (!ud)
  return -1;

 handle = (struct cs_struct *)(uintptr_t)ud;

 if (!handle->detail) {
  handle->errnum = CS_ERR_DETAIL;
  return -1;
 }

 if (!insn->id) {
  handle->errnum = CS_ERR_SKIPDATA;
  return -1;
 }

 if (!insn->detail) {
  handle->errnum = CS_ERR_DETAIL;
  return -1;
 }

 handle->errnum = CS_ERR_OK;

 switch (handle->arch) {
  default:
   handle->errnum = CS_ERR_HANDLE;
   return -1;
  case CS_ARCH_ARM:
   for (i = 0; i < insn->detail->arm.op_count; i++) {
    if (insn->detail->arm.operands[i].type == (arm_op_type)op_type)
     count++;
    if (count == post)
     return i;
   }
   break;
  case CS_ARCH_ARM64:
   for (i = 0; i < insn->detail->arm64.op_count; i++) {
    if (insn->detail->arm64.operands[i].type == (arm64_op_type)op_type)
     count++;
    if (count == post)
     return i;
   }
   break;
  case CS_ARCH_X86:
   for (i = 0; i < insn->detail->x86.op_count; i++) {
    if (insn->detail->x86.operands[i].type == (x86_op_type)op_type)
     count++;
    if (count == post)
     return i;
   }
   break;
  case CS_ARCH_MIPS:
   for (i = 0; i < insn->detail->mips.op_count; i++) {
    if (insn->detail->mips.operands[i].type == (mips_op_type)op_type)
     count++;
    if (count == post)
     return i;
   }
   break;
  case CS_ARCH_PPC:
   for (i = 0; i < insn->detail->ppc.op_count; i++) {
    if (insn->detail->ppc.operands[i].type == (ppc_op_type)op_type)
     count++;
    if (count == post)
     return i;
   }
   break;
  case CS_ARCH_SPARC:
   for (i = 0; i < insn->detail->sparc.op_count; i++) {
    if (insn->detail->sparc.operands[i].type == (sparc_op_type)op_type)
     count++;
    if (count == post)
     return i;
   }
   break;
  case CS_ARCH_SYSZ:
   for (i = 0; i < insn->detail->sysz.op_count; i++) {
    if (insn->detail->sysz.operands[i].type == (sysz_op_type)op_type)
     count++;
    if (count == post)
     return i;
   }
   break;
  case CS_ARCH_XCORE:
   for (i = 0; i < insn->detail->xcore.op_count; i++) {
    if (insn->detail->xcore.operands[i].type == (xcore_op_type)op_type)
     count++;
    if (count == post)
     return i;
   }
   break;
  case CS_ARCH_M68K:
   for (i = 0; i < insn->detail->m68k.op_count; i++) {
    if (insn->detail->m68k.operands[i].type == (m68k_op_type)op_type)
     count++;
    if (count == post)
     return i;
   }
   break;
  case CS_ARCH_TMS320C64X:
   for (i = 0; i < insn->detail->tms320c64x.op_count; i++) {
    if (insn->detail->tms320c64x.operands[i].type == (tms320c64x_op_type)op_type)
     count++;
    if (count == post)
     return i;
   }
   break;
  case CS_ARCH_M680X:
   for (i = 0; i < insn->detail->m680x.op_count; i++) {
    if (insn->detail->m680x.operands[i].type == (m680x_op_type)op_type)
     count++;
    if (count == post)
     return i;
   }
   break;
  case CS_ARCH_EVM:
#if 0
   for (i = 0; i < insn->detail->evm.op_count; i++) {
    if (insn->detail->evm.operands[i].type == (evm_op_type)op_type)
     count++;
    if (count == post)
     return i;
   }
#endif
   break;
  case CS_ARCH_MOS65XX:
   for (i = 0; i < insn->detail->mos65xx.op_count; i++) {
    if (insn->detail->mos65xx.operands[i].type == (mos65xx_op_type)op_type)
     count++;
    if (count == post)
     return i;
   }
   break;
  case CS_ARCH_WASM:
   for (i = 0; i < insn->detail->wasm.op_count; i++) {
    if (insn->detail->wasm.operands[i].type == (wasm_op_type)op_type)
     count++;
    if (count == post)
     return i;
   }
   break;
  case CS_ARCH_BPF:
   for (i = 0; i < insn->detail->bpf.op_count; i++) {
    if (insn->detail->bpf.operands[i].type == (bpf_op_type)op_type)
     count++;
    if (count == post)
     return i;
   }
   break;
  case CS_ARCH_RISCV:
   for (i = 0; i < insn->detail->riscv.op_count; i++) {
    if (insn->detail->riscv.operands[i].type == (riscv_op_type)op_type)
     count++;
    if (count == post)
     return i;
   }
   break;
 }

 return -1;
}

CAPSTONE_EXPORT
cs_err CAPSTONE_API cs_regs_access(csh ud, const cs_insn *insn,
  cs_regs regs_read, uint8_t *regs_read_count,
  cs_regs regs_write, uint8_t *regs_write_count)
{
 struct cs_struct *handle;

 if (!ud)
  return -1;

 handle = (struct cs_struct *)(uintptr_t)ud;

#ifdef CAPSTONE_DIET

 handle->errnum = CS_ERR_DIET;
 return CS_ERR_DIET;
#else
 if (!handle->detail) {
  handle->errnum = CS_ERR_DETAIL;
  return CS_ERR_DETAIL;
 }

 if (!insn->id) {
  handle->errnum = CS_ERR_SKIPDATA;
  return CS_ERR_SKIPDATA;
 }

 if (!insn->detail) {
  handle->errnum = CS_ERR_DETAIL;
  return CS_ERR_DETAIL;
 }

 if (handle->reg_access) {
  handle->reg_access(insn, regs_read, regs_read_count, regs_write, regs_write_count);
 } else {

  handle->errnum = CS_ERR_ARCH;
  return CS_ERR_ARCH;
 }

 return CS_ERR_OK;
#endif
}
