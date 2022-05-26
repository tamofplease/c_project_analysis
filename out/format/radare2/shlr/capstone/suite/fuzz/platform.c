# 1 "project/radare2/shlr/capstone/suite/fuzz/platform.c"
#include "platform.h"

struct platform platforms[] = {
    {

        CS_ARCH_X86,
        CS_MODE_32,
        "X86 32 (Intel syntax)",
        "x32"
    },
    {

        CS_ARCH_X86,
        CS_MODE_64,
        "X86 64 (Intel syntax)",
        "x64"
    },
    {

        CS_ARCH_ARM,
        CS_MODE_ARM,
        "ARM",
        "arm"
    },
    {

        CS_ARCH_ARM,
        CS_MODE_THUMB,
        "THUMB",
        "thumb"
    },
    {

        CS_ARCH_ARM,
        (cs_mode)(CS_MODE_ARM + CS_MODE_V8),
        "Arm-V8",
        "armv8"
    },
    {

        CS_ARCH_ARM,
        (cs_mode)(CS_MODE_THUMB+CS_MODE_V8),
        "THUMB+V8",
        "thumbv8"
    },
    {

        CS_ARCH_ARM,
        (cs_mode)(CS_MODE_THUMB + CS_MODE_MCLASS),
        "Thumb-MClass",
        "cortexm"
    },
    {

        CS_ARCH_ARM64,
        (cs_mode)0,
        "ARM-64",
        "arm64"
    },
    {

        CS_ARCH_MIPS,
        (cs_mode)(CS_MODE_MIPS32 + CS_MODE_BIG_ENDIAN),
        "MIPS-32 (Big-endian)",
        "mipsbe"
    },
    {

        CS_ARCH_MIPS,
        (cs_mode)(CS_MODE_MIPS32 + CS_MODE_MICRO),
        "MIPS-32 (micro)",
        "mipsmicro"
    },
    {

        CS_ARCH_MIPS,
        CS_MODE_MIPS64,
        "MIPS-64-EL (Little-endian)",
        "mips64"
    },
    {

        CS_ARCH_MIPS,
        CS_MODE_MIPS32,
        "MIPS-32-EL (Little-endian)",
        "mips"
    },
    {

        CS_ARCH_MIPS,
        (cs_mode)(CS_MODE_MIPS64 + CS_MODE_BIG_ENDIAN),
        "MIPS-64 (Big-endian)",
        "mips64be"
    },
    {

        CS_ARCH_MIPS,
        (cs_mode)(CS_MODE_MIPS32 + CS_MODE_MICRO + CS_MODE_BIG_ENDIAN),
        "MIPS-32 | Micro (Big-endian)",
        "mipsbemicro"
    },
    {

        CS_ARCH_PPC,
        CS_MODE_64 | CS_MODE_BIG_ENDIAN,
        "PPC-64",
        "ppc64be"
    },
    {

        CS_ARCH_SPARC,
        CS_MODE_BIG_ENDIAN,
        "Sparc",
        "sparc"
    },
    {

        CS_ARCH_SPARC,
        (cs_mode)(CS_MODE_BIG_ENDIAN + CS_MODE_V9),
        "SparcV9",
        "sparcv9"
    },
    {

        CS_ARCH_SYSZ,
        (cs_mode)0,
        "SystemZ",
        "systemz"
    },
    {

        CS_ARCH_XCORE,
        (cs_mode)0,
        "XCore",
        "xcore"
    },
    {

        CS_ARCH_MIPS,
        (cs_mode)(CS_MODE_MIPS32R6 + CS_MODE_BIG_ENDIAN),
        "MIPS-32R6 (Big-endian)",
        "mipsbe32r6"
    },
    {

        CS_ARCH_MIPS,
        (cs_mode)(CS_MODE_MIPS32R6 + CS_MODE_MICRO + CS_MODE_BIG_ENDIAN),
        "MIPS-32R6 (Micro+Big-endian)",
        "mipsbe32r6micro"
    },
    {

        CS_ARCH_MIPS,
        CS_MODE_MIPS32R6,
        "MIPS-32R6 (Little-endian)",
        "mips32r6"
    },
    {

        CS_ARCH_MIPS,
        (cs_mode)(CS_MODE_MIPS32R6 + CS_MODE_MICRO),
        "MIPS-32R6 (Micro+Little-endian)",
        "mips32r6micro"
    },
    {

        CS_ARCH_M68K,
        (cs_mode)0,
        "M68K",
        "m68k"
    },
    {

        CS_ARCH_M680X,
        (cs_mode)CS_MODE_M680X_6809,
        "M680X_M6809",
        "m6809"
    },
    {

        CS_ARCH_EVM,
        (cs_mode)0,
        "EVM",
        "evm"
    },
    {

        CS_ARCH_MOS65XX,
        (cs_mode)0,
        "MOS65XX",
        "mos65xx"
    },
    {

        CS_ARCH_TMS320C64X,
        CS_MODE_BIG_ENDIAN,
        "tms320c64x",
        "tms320c64x"
    },
    {

        CS_ARCH_WASM,
        (cs_mode)0,
        "WASM",
        "wasm"
    },
    {

        CS_ARCH_BPF,
        CS_MODE_LITTLE_ENDIAN | CS_MODE_BPF_CLASSIC,
        "cBPF",
        "bpf"
    },
    {

        CS_ARCH_BPF,
        CS_MODE_LITTLE_ENDIAN | CS_MODE_BPF_EXTENDED,
        "eBPF",
        "ebpf"
    },
    {

        CS_ARCH_BPF,
        CS_MODE_BIG_ENDIAN | CS_MODE_BPF_CLASSIC,
        "cBPF",
        "bpfbe"
    },
    {

        CS_ARCH_BPF,
        CS_MODE_BIG_ENDIAN | CS_MODE_BPF_EXTENDED,
        "eBPF",
        "ebpfbe"
    },
    {

        CS_ARCH_X86,
        CS_MODE_16,
        "X86 16 (Intel syntax)",
        "x16"
    },
    {

        CS_ARCH_M68K,
        CS_MODE_M68K_040,
        "M68K mode 40",
        "m68k40"
    },
    {

        CS_ARCH_M680X,
        (cs_mode)CS_MODE_M680X_6800,
        "M680X_M6800",
        "m6800"
    },
    {

        CS_ARCH_M680X,
        (cs_mode)CS_MODE_M680X_6801,
        "M680X_M6801",
        "m6801"
    },
    {

        CS_ARCH_M680X,
        (cs_mode)CS_MODE_M680X_6805,
        "M680X_M6805",
        "m6805"
    },
    {

        CS_ARCH_M680X,
        (cs_mode)CS_MODE_M680X_6808,
        "M680X_M6808",
        "m6808"
    },
    {

        CS_ARCH_M680X,
        (cs_mode)CS_MODE_M680X_6811,
        "M680X_M6811",
        "m6811"
    },
    {

        CS_ARCH_M680X,
        (cs_mode)CS_MODE_M680X_CPU12,
        "M680X_cpu12",
        "cpu12"
    },
    {

        CS_ARCH_M680X,
        (cs_mode)CS_MODE_M680X_6301,
        "M680X_M6808",
        "hd6301"
    },
    {

        CS_ARCH_M680X,
        (cs_mode)CS_MODE_M680X_6309,
        "M680X_M6808",
        "hd6309"
    },
    {

        CS_ARCH_M680X,
        (cs_mode)CS_MODE_M680X_HCS08,
        "M680X_M6808",
        "hcs08"
    },
    {

        CS_ARCH_RISCV,
        CS_MODE_RISCV32,
        "RISCV",
        "riscv32"
    },
    {

        CS_ARCH_RISCV,
        CS_MODE_RISCV64,
        "RISCV",
        "riscv64"
    },
    {

        CS_ARCH_PPC,
        CS_MODE_64 | CS_MODE_BIG_ENDIAN | CS_MODE_QPX,
        "ppc+qpx",
        "ppc64beqpx"
    },



    {
        0,
        0,
        NULL,
        NULL,
    },
};


unsigned int platform_len(void)
{
    unsigned int c;

    for(c = 0; platforms[c].cstoolname; c++);

    return c;
}


unsigned int get_platform_entry(uint8_t n)
{
    return n % platform_len();
}


const char *get_platform_cstoolname(uint8_t n)
{
    return platforms[get_platform_entry(n)].cstoolname;
}
