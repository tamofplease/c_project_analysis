# 1 "project/radare2/shlr/capstone/suite/fuzz/fuzz_diff.c"

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <assert.h>

#include <capstone/capstone.h>


struct platform {
    cs_arch arch;
    cs_mode mode;
    char *comment;
};

FILE * outfile = NULL;

struct platform platforms[] = {
    {

        CS_ARCH_X86,
        CS_MODE_32,
        "X86 32 (Intel syntax)"
    },
    {

        CS_ARCH_X86,
        CS_MODE_64,
        "X86 64 (Intel syntax)"
    },
    {

        CS_ARCH_ARM,
        CS_MODE_ARM,
        "ARM"
    },
    {

        CS_ARCH_ARM,
        CS_MODE_THUMB,
        "THUMB"
    },
    {

        CS_ARCH_ARM,
        (cs_mode)(CS_MODE_ARM + CS_MODE_V8),
        "Arm-V8"
    },
    {

        CS_ARCH_ARM,
        (cs_mode)(CS_MODE_THUMB+CS_MODE_V8),
        "THUMB+V8"
    },
    {

        CS_ARCH_ARM,
        (cs_mode)(CS_MODE_THUMB + CS_MODE_MCLASS),
        "Thumb-MClass"
    },
    {

        CS_ARCH_ARM64,
        (cs_mode)0,
        "ARM-64"
    },
    {

        CS_ARCH_MIPS,
        (cs_mode)(CS_MODE_MIPS32 + CS_MODE_BIG_ENDIAN),
        "MIPS-32 (Big-endian)"
    },
    {

        CS_ARCH_MIPS,
        (cs_mode)(CS_MODE_MIPS32 + CS_MODE_MICRO),
        "MIPS-32 (micro)"
    },
    {

        CS_ARCH_MIPS,
        CS_MODE_MIPS64,
        "MIPS-64-EL (Little-endian)"
    },
    {

        CS_ARCH_MIPS,
        CS_MODE_MIPS32,
        "MIPS-32-EL (Little-endian)"
    },
    {

        CS_ARCH_MIPS,
        (cs_mode)(CS_MODE_MIPS64 + CS_MODE_BIG_ENDIAN),
        "MIPS-64 (Big-endian)"
    },
    {

        CS_ARCH_MIPS,
        (cs_mode)(CS_MODE_MIPS32 + CS_MODE_MICRO + CS_MODE_BIG_ENDIAN),
        "MIPS-32 | Micro (Big-endian)"
    },
    {

        CS_ARCH_PPC,
        CS_MODE_BIG_ENDIAN,
        "PPC-64"
    },
    {

        CS_ARCH_SPARC,
        CS_MODE_BIG_ENDIAN,
        "Sparc"
    },
    {

        CS_ARCH_SPARC,
        (cs_mode)(CS_MODE_BIG_ENDIAN + CS_MODE_V9),
        "SparcV9"
    },
    {

        CS_ARCH_SYSZ,
        (cs_mode)0,
        "SystemZ"
    },
    {

        CS_ARCH_XCORE,
        (cs_mode)0,
        "XCore"
    },
    {

        CS_ARCH_MIPS,
        (cs_mode)(CS_MODE_MIPS32R6 + CS_MODE_BIG_ENDIAN),
        "MIPS-32R6 (Big-endian)"
    },
    {

        CS_ARCH_MIPS,
        (cs_mode)(CS_MODE_MIPS32R6 + CS_MODE_MICRO + CS_MODE_BIG_ENDIAN),
        "MIPS-32R6 (Micro+Big-endian)"
    },
    {

        CS_ARCH_MIPS,
        CS_MODE_MIPS32R6,
        "MIPS-32R6 (Little-endian)"
    },
    {

        CS_ARCH_MIPS,
        (cs_mode)(CS_MODE_MIPS32R6 + CS_MODE_MICRO),
        "MIPS-32R6 (Micro+Little-endian)"
    },
    {

        CS_ARCH_M68K,
        (cs_mode)0,
        "M68K"
    },
    {

        CS_ARCH_M680X,
        (cs_mode)CS_MODE_M680X_6809,
        "M680X_M6809"
    },
    {

        CS_ARCH_EVM,
        (cs_mode)0,
        "EVM"
    },
};

void LLVMFuzzerInit();
int LLVMFuzzerReturnOneInput(const uint8_t *Data, size_t Size, char * AssemblyText);

int LLVMFuzzerTestOneInput(const uint8_t *Data, size_t Size) {
    csh handle;
    cs_insn *insn;
    cs_err err;
    const uint8_t **Datap = &Data;
    size_t * Sizep = &Size;
    uint64_t address = 0x1000;
    char LLVMAssemblyText[80];
    char CapstoneAssemblyText[80];

    if (Size < 1) {

        return 0;
    } else if (Size > 0x1000) {

        Size = 0x1000;
    }
    if (outfile == NULL) {

        outfile = fopen("/dev/null", "w");
        if (outfile == NULL) {
            return 0;
        }
        LLVMFuzzerInit();
    }

    if (Data[0] >= sizeof(platforms)/sizeof(platforms[0])) {
        return 0;
    }

    if (LLVMFuzzerReturnOneInput(Data, Size, LLVMAssemblyText) == 1) {
        return 0;
    }

    err = cs_open(platforms[Data[0]].arch, platforms[Data[0]].mode, &handle);
    if (err) {
        return 0;
    }

    insn = cs_malloc(handle);
    Data++;
    Size--;
    assert(insn);
        if (cs_disasm_iter(handle, Datap, Sizep, &address, insn)) {
            snprintf(CapstoneAssemblyText, 80, "\t%s\t%s", insn->mnemonic, insn->op_str);
            if (strcmp(CapstoneAssemblyText, LLVMAssemblyText) != 0) {
                printf("capstone %s != llvm %s", CapstoneAssemblyText, LLVMAssemblyText);
                abort();
            }
        } else {
            printf("capstone failed with llvm %s", LLVMAssemblyText);
            abort();
        }
    cs_free(insn, 1);
    cs_close(&handle);

    return 0;
}
