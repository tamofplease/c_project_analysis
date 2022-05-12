# 0 "project/radare2/shlr/capstone/arch/X86/X86BaseInfo.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/shlr/capstone/arch/X86/X86BaseInfo.h"
# 27 "project/radare2/shlr/capstone/arch/X86/X86BaseInfo.h"
enum {
 X86_AddrBaseReg = 0,
 X86_AddrScaleAmt = 1,
 X86_AddrIndexReg = 2,
 X86_AddrDisp = 3,


 X86_AddrSegmentReg = 4,


 X86_AddrNumOperands = 5
};

enum IPREFIXES {
 X86_IP_NO_PREFIX = 0,
 X86_IP_HAS_OP_SIZE = 1,
 X86_IP_HAS_AD_SIZE = 2,
 X86_IP_HAS_REPEAT_NE = 4,
 X86_IP_HAS_REPEAT = 8,
 X86_IP_HAS_LOCK = 16,
 X86_IP_HAS_NOTRACK = 64
};
