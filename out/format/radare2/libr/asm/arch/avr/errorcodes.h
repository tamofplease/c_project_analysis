# 1 "project/radare2/libr/asm/arch/avr/errorcodes.h"
# 26 "project/radare2/libr/asm/arch/avr/errorcodes.h"
#ifndef ERRORCODES_DISASM_H
#define ERRORCODES_DISASM_H 
# 36 "project/radare2/libr/asm/arch/avr/errorcodes.h"
enum AVR_Disassembler_Error_Codes {
 ERROR_INVALID_ARGUMENTS = -1,
 ERROR_UNKNOWN_OPERAND = -3,
 ERROR_FILE_READING_ERROR = -4,
 ERROR_FILE_WRITING_ERROR = -5,
 ERROR_MEMORY_ALLOCATION_ERROR = -6,
 ERROR_IRRECOVERABLE = -7,
};

#endif
