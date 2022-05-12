# 0 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
# 24 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/elf/reloc-macros.h" 1 3 4
# 25 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 2
# 112 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"

# 112 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
enum 
# 112 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
elf_arm_reloc_type 
# 112 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
{

  
# 114 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_NONE 
# 114 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 114 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 0
# 114 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 115 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_PC24 
# 115 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 115 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 1
# 115 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 116 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_ABS32 
# 116 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 116 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 2
# 116 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 117 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_REL32 
# 117 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 117 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 3
# 117 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 118 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_LDR_PC_G0 
# 118 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 118 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 4
# 118 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 119 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_ABS16 
# 119 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 119 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 5
# 119 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 120 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_ABS12 
# 120 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 120 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 6
# 120 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 121 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_THM_ABS5 
# 121 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 121 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 7
# 121 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 122 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_ABS8 
# 122 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 122 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 8
# 122 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 123 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_SBREL32 
# 123 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 123 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 9
# 123 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 124 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_THM_CALL 
# 124 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 124 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 10
# 124 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 125 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_THM_PC8 
# 125 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 125 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 11
# 125 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 126 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_BREL_ADJ 
# 126 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 126 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 12
# 126 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 127 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_TLS_DESC 
# 127 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 127 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 13
# 127 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 128 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_THM_SWI8 
# 128 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 128 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 14
# 128 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 129 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_XPC25 
# 129 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 129 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 15
# 129 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 130 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_THM_XPC22 
# 130 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 130 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 16
# 130 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 131 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_TLS_DTPMOD32 
# 131 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 131 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 17
# 131 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 132 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_TLS_DTPOFF32 
# 132 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 132 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 18
# 132 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 133 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_TLS_TPOFF32 
# 133 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 133 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 19
# 133 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 134 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_COPY 
# 134 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 134 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 20
# 134 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 135 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_GLOB_DAT 
# 135 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 135 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 21
# 135 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 136 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_JUMP_SLOT 
# 136 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 136 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 22
# 136 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 137 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_RELATIVE 
# 137 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 137 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 23
# 137 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 138 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_GOTOFF32 
# 138 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 138 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 24
# 138 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 139 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_BASE_PREL 
# 139 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 139 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 25
# 139 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 140 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_GOT_BREL 
# 140 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 140 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 26
# 140 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 141 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_PLT32 
# 141 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 141 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 27
# 141 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 142 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_CALL 
# 142 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 142 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 28
# 142 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 143 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_JUMP24 
# 143 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 143 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 29
# 143 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 144 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_THM_JUMP24 
# 144 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 144 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 30
# 144 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 145 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_BASE_ABS 
# 145 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 145 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 31
# 145 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 146 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_ALU_PCREL7_0 
# 146 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 146 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 32
# 146 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 147 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_ALU_PCREL15_8 
# 147 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 147 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 33
# 147 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 148 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_ALU_PCREL23_15 
# 148 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 148 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 34
# 148 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 149 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_LDR_SBREL_11_0 
# 149 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 149 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 35
# 149 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 150 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_ALU_SBREL_19_12 
# 150 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 150 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 36
# 150 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 151 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_ALU_SBREL_27_20 
# 151 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 151 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 37
# 151 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 152 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_TARGET1 
# 152 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 152 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 38
# 152 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 153 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_SBREL31 
# 153 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 153 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 39
# 153 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 154 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_V4BX 
# 154 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 154 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 40
# 154 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 155 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_TARGET2 
# 155 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 155 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 41
# 155 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 156 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_PREL31 
# 156 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 156 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 42
# 156 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 157 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_MOVW_ABS_NC 
# 157 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 157 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 43
# 157 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 158 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_MOVT_ABS 
# 158 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 158 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 44
# 158 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 159 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_MOVW_PREL_NC 
# 159 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 159 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 45
# 159 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 160 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_MOVT_PREL 
# 160 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 160 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 46
# 160 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 161 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_THM_MOVW_ABS_NC 
# 161 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 161 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 47
# 161 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 162 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_THM_MOVT_ABS 
# 162 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 162 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 48
# 162 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 163 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_THM_MOVW_PREL_NC 
# 163 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 163 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 49
# 163 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 164 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_THM_MOVT_PREL 
# 164 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 164 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 50
# 164 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 165 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_THM_JUMP19 
# 165 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 165 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 51
# 165 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 166 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_THM_JUMP6 
# 166 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 166 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 52
# 166 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 167 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_THM_ALU_PREL_11_0 
# 167 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 167 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 53
# 167 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 168 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_THM_PC12 
# 168 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 168 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 54
# 168 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 169 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_ABS32_NOI 
# 169 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 169 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 55
# 169 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 170 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_REL32_NOI 
# 170 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 170 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 56
# 170 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 171 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_ALU_PC_G0_NC 
# 171 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 171 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 57
# 171 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 172 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_ALU_PC_G0 
# 172 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 172 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 58
# 172 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 173 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_ALU_PC_G1_NC 
# 173 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 173 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 59
# 173 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 174 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_ALU_PC_G1 
# 174 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 174 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 60
# 174 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 175 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_ALU_PC_G2 
# 175 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 175 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 61
# 175 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 176 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_LDR_PC_G1 
# 176 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 176 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 62
# 176 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 177 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_LDR_PC_G2 
# 177 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 177 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 63
# 177 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 178 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_LDRS_PC_G0 
# 178 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 178 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 64
# 178 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 179 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_LDRS_PC_G1 
# 179 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 179 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 65
# 179 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 180 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_LDRS_PC_G2 
# 180 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 180 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 66
# 180 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 181 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_LDC_PC_G0 
# 181 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 181 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 67
# 181 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 182 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_LDC_PC_G1 
# 182 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 182 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 68
# 182 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 183 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_LDC_PC_G2 
# 183 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 183 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 69
# 183 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 184 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_ALU_SB_G0_NC 
# 184 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 184 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 70
# 184 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 185 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_ALU_SB_G0 
# 185 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 185 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 71
# 185 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 186 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_ALU_SB_G1_NC 
# 186 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 186 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 72
# 186 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 187 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_ALU_SB_G1 
# 187 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 187 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 73
# 187 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 188 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_ALU_SB_G2 
# 188 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 188 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 74
# 188 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 189 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_LDR_SB_G0 
# 189 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 189 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 75
# 189 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 190 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_LDR_SB_G1 
# 190 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 190 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 76
# 190 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 191 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_LDR_SB_G2 
# 191 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 191 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 77
# 191 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 192 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_LDRS_SB_G0 
# 192 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 192 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 78
# 192 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 193 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_LDRS_SB_G1 
# 193 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 193 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 79
# 193 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 194 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_LDRS_SB_G2 
# 194 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 194 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 80
# 194 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 195 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_LDC_SB_G0 
# 195 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 195 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 81
# 195 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 196 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_LDC_SB_G1 
# 196 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 196 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 82
# 196 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 197 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_LDC_SB_G2 
# 197 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 197 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 83
# 197 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 198 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_MOVW_BREL_NC 
# 198 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 198 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 84
# 198 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 199 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_MOVT_BREL 
# 199 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 199 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 85
# 199 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 200 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_MOVW_BREL 
# 200 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 200 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 86
# 200 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 201 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_THM_MOVW_BREL_NC 
# 201 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 201 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 87
# 201 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 202 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_THM_MOVT_BREL 
# 202 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 202 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 88
# 202 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 203 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_THM_MOVW_BREL 
# 203 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 203 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 89
# 203 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 204 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_TLS_GOTDESC 
# 204 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 204 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 90
# 204 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 205 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_TLS_CALL 
# 205 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 205 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 91
# 205 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 206 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_TLS_DESCSEQ 
# 206 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 206 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 92
# 206 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 207 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_THM_TLS_CALL 
# 207 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 207 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 93
# 207 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 208 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_PLT32_ABS 
# 208 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 208 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 94
# 208 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 209 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_GOT_ABS 
# 209 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 209 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 95
# 209 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 210 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_GOT_PREL 
# 210 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 210 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 96
# 210 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 211 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_GOT_BREL12 
# 211 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 211 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 97
# 211 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 212 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_GOTOFF12 
# 212 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 212 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 98
# 212 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 213 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_GOTRELAX 
# 213 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 213 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 99
# 213 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 214 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_GNU_VTENTRY 
# 214 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 214 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 100
# 214 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 215 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_GNU_VTINHERIT 
# 215 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 215 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 101
# 215 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 216 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_THM_JUMP11 
# 216 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 216 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 102
# 216 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 217 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_THM_JUMP8 
# 217 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 217 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 103
# 217 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 218 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_TLS_GD32 
# 218 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 218 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 104
# 218 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 219 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_TLS_LDM32 
# 219 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 219 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 105
# 219 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 220 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_TLS_LDO32 
# 220 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 220 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 106
# 220 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 221 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_TLS_IE32 
# 221 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 221 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 107
# 221 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 222 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_TLS_LE32 
# 222 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 222 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 108
# 222 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 223 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_TLS_LDO12 
# 223 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 223 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 109
# 223 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 224 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_TLS_LE12 
# 224 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 224 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 110
# 224 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 225 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_TLS_IE12GP 
# 225 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 225 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 111
# 225 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,

  
# 227 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_ME_TOO 
# 227 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 227 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 128
# 227 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 228 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_THM_TLS_DESCSEQ 
# 228 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 228 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 129
# 228 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,

  
# 230 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_IRELATIVE 
# 230 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 230 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 160
# 230 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,


  
# 233 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_RXPC25 
# 233 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 233 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 249
# 233 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 234 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_RSBREL32 
# 234 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 234 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 250
# 234 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 235 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_THM_RPC22 
# 235 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 235 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 251
# 235 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 236 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_RREL32 
# 236 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 236 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 252
# 236 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 237 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_RABS32 
# 237 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 237 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 253
# 237 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 238 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_RPC24 
# 238 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 238 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 254
# 238 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 239 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_RBASE 
# 239 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 239 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 255
# 239 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,


  
# 242 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_GOTOFF 
# 242 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 242 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_GOTOFF32
# 242 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 243 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_THM_PC22 
# 243 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 243 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_THM_CALL
# 243 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 244 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_THM_PC11 
# 244 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 244 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_THM_JUMP11
# 244 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 245 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_THM_PC9 
# 245 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 245 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_THM_JUMP8
# 245 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,



  
# 249 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_GOTPC 
# 249 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 249 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_BASE_PREL
# 249 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 250 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_GOT32 
# 250 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 250 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_GOT_BREL
# 250 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 251 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_ROSEGREL32 
# 251 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 251 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_SBREL31
# 251 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,
  
# 252 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_AMP_VCALL9 
# 252 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 = 
# 252 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
 R_ARM_BREL_ADJ
# 252 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
 ,


# 254 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
R_ARM_max = 256 
# 254 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h" 3 4
};
# 329 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"

# 329 "project/radare2/libr/asm/arch/arm/gnu/elfarm.h"
enum arm_st_branch_type {
  ST_BRANCH_TO_ARM,
  ST_BRANCH_TO_THUMB,
  ST_BRANCH_LONG,
  ST_BRANCH_UNKNOWN
};
