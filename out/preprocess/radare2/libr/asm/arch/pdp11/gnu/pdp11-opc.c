# 0 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
# 21 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
# 1 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/opcode/pdp11.h" 1 3 4
# 71 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/opcode/pdp11.h" 3 4

# 71 "/Users/washi38/University/Labo/c_project_analysis/project/radare2/libr/asm/arch/include/opcode/pdp11.h" 3 4
struct pdp11_opcode
{
  const char *name;
  int opcode;
  int mask;
  int type;
  int extension;
};

extern const struct pdp11_opcode pdp11_opcodes[];
extern const struct pdp11_opcode pdp11_aliases[];
extern const int pdp11_num_opcodes, pdp11_num_aliases;
# 22 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 2


# 23 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
const struct pdp11_opcode pdp11_opcodes[] =
{

  { "halt", 0x0000, 0xffff, 
# 26 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           0
# 26 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 26 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                1 
# 26 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                            },
  { "wait", 0x0001, 0xffff, 
# 27 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           0
# 27 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 27 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                1 
# 27 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                            },
  { "rti", 0x0002, 0xffff, 
# 28 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          0
# 28 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                             , 
# 28 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                               1 
# 28 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                           },
  { "bpt", 0x0003, 0xffff, 
# 29 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          0
# 29 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                             , 
# 29 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                               1 
# 29 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                           },
  { "iot", 0x0004, 0xffff, 
# 30 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          0
# 30 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                             , 
# 30 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                               1 
# 30 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                           },
  { "reset", 0x0005, 0xffff, 
# 31 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                            0
# 31 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                               , 
# 31 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                 1 
# 31 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                             },
  { "rtt", 0x0006, 0xffff, 
# 32 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          0
# 32 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                             , 
# 32 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                               7 
# 32 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "mfpt", 0x0007, 0xffff, 
# 33 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           0
# 33 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 33 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                8 
# 33 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                           },
  { "jmp", 0x0040, 0xffc0, 
# 34 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          2
# 34 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                         , 
# 34 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                           1 
# 34 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                       },
  { "rts", 0x0080, 0xfff8, 
# 35 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          1
# 35 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                          , 
# 35 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                            1 
# 35 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                        },
  { "", 0x0088, 0xfff8, 
# 36 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                        12
# 36 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                            , 
# 36 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                              0 
# 36 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                         },
  { "", 0x0090, 0xfff8, 
# 37 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                        12
# 37 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                            , 
# 37 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                              0 
# 37 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                         },
  { "spl", 0x0098, 0xfff8, 
# 38 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          11
# 38 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                           , 
# 38 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                             11 
# 38 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                       },
  { "nop", 0x00a0, 0xffff, 
# 39 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          0
# 39 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                             , 
# 39 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                               1 
# 39 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                           },
  { "clc", 0x00a1, 0xffff, 
# 40 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          0
# 40 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                             , 
# 40 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                               1 
# 40 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                           },
  { "clv", 0x00a2, 0xffff, 
# 41 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          0
# 41 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                             , 
# 41 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                               1 
# 41 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                           },
  { "cl_3", 0x00a3, 0xffff, 
# 42 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           0
# 42 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 42 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                1 
# 42 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                            },
  { "clz", 0x00a4, 0xffff, 
# 43 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          0
# 43 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                             , 
# 43 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                               1 
# 43 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                           },
  { "cl_5", 0x00a5, 0xffff, 
# 44 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           0
# 44 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 44 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                1 
# 44 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                            },
  { "cl_6", 0x00a6, 0xffff, 
# 45 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           0
# 45 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 45 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                1 
# 45 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                            },
  { "cl_7", 0x00a7, 0xffff, 
# 46 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           0
# 46 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 46 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                1 
# 46 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                            },
  { "cln", 0x00a8, 0xffff, 
# 47 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          0
# 47 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                             , 
# 47 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                               1 
# 47 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                           },
  { "cl_9", 0x00a9, 0xffff, 
# 48 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           0
# 48 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 48 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                1 
# 48 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                            },
  { "cl_a", 0x00aa, 0xffff, 
# 49 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           0
# 49 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 49 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                1 
# 49 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                            },
  { "cl_b", 0x00ab, 0xffff, 
# 50 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           0
# 50 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 50 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                1 
# 50 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                            },
  { "cl_c", 0x00ac, 0xffff, 
# 51 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           0
# 51 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 51 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                1 
# 51 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                            },
  { "cl_d", 0x00ad, 0xffff, 
# 52 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           0
# 52 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 52 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                1 
# 52 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                            },
  { "cl_e", 0x00ae, 0xffff, 
# 53 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           0
# 53 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 53 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                1 
# 53 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                            },
  { "ccc", 0x00af, 0xffff, 
# 54 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          0
# 54 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                             , 
# 54 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                               1 
# 54 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                           },
  { "se_0", 0x00b0, 0xffff, 
# 55 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           0
# 55 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 55 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                1 
# 55 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                            },
  { "sec", 0x00b1, 0xffff, 
# 56 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          0
# 56 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                             , 
# 56 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                               1 
# 56 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                           },
  { "sev", 0x00b2, 0xffff, 
# 57 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          0
# 57 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                             , 
# 57 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                               1 
# 57 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                           },
  { "se_3", 0x00b3, 0xffff, 
# 58 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           0
# 58 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 58 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                1 
# 58 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                            },
  { "sez", 0x00b4, 0xffff, 
# 59 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          0
# 59 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                             , 
# 59 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                               1 
# 59 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                           },
  { "se_5", 0x00b5, 0xffff, 
# 60 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           0
# 60 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 60 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                1 
# 60 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                            },
  { "se_6", 0x00b6, 0xffff, 
# 61 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           0
# 61 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 61 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                1 
# 61 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                            },
  { "se_7", 0x00b7, 0xffff, 
# 62 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           0
# 62 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 62 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                1 
# 62 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                            },
  { "sen", 0x00b8, 0xffff, 
# 63 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          0
# 63 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                             , 
# 63 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                               1 
# 63 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                           },
  { "se_9", 0x00b9, 0xffff, 
# 64 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           0
# 64 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 64 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                1 
# 64 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                            },
  { "se_a", 0x00ba, 0xffff, 
# 65 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           0
# 65 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 65 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                1 
# 65 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                            },
  { "se_b", 0x00bb, 0xffff, 
# 66 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           0
# 66 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 66 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                1 
# 66 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                            },
  { "se_c", 0x00bc, 0xffff, 
# 67 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           0
# 67 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 67 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                1 
# 67 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                            },
  { "se_d", 0x00bd, 0xffff, 
# 68 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           0
# 68 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 68 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                1 
# 68 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                            },
  { "se_e", 0x00be, 0xffff, 
# 69 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           0
# 69 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 69 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                1 
# 69 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                            },
  { "scc", 0x00bf, 0xffff, 
# 70 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          0
# 70 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                             , 
# 70 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                               1 
# 70 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                           },
  { "swab", 0x00c0, 0xffc0, 
# 71 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           2
# 71 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                          , 
# 71 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                            1 
# 71 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                        },
  { "br", 0x0100, 0xff00, 
# 72 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                         7
# 72 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                           , 
# 72 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                             1 
# 72 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                         },
  { "bne", 0x0200, 0xff00, 
# 73 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          7
# 73 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                            , 
# 73 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                              1 
# 73 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "beq", 0x0300, 0xff00, 
# 74 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          7
# 74 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                            , 
# 74 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                              1 
# 74 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "bge", 0x0400, 0xff00, 
# 75 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          7
# 75 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                            , 
# 75 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                              1 
# 75 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "blt", 0x0500, 0xff00, 
# 76 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          7
# 76 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                            , 
# 76 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                              1 
# 76 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "bgt", 0x0600, 0xff00, 
# 77 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          7
# 77 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                            , 
# 77 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                              1 
# 77 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "ble", 0x0700, 0xff00, 
# 78 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          7
# 78 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                            , 
# 78 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                              1 
# 78 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "jsr", 0x0800, 0xfe00, 
# 79 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          3
# 79 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                             , 
# 79 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                               1 
# 79 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                           },
  { "clr", 0x0a00, 0xffc0, 
# 80 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          2
# 80 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                         , 
# 80 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                           1 
# 80 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                       },
  { "com", 0x0a40, 0xffc0, 
# 81 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          2
# 81 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                         , 
# 81 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                           1 
# 81 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                       },
  { "inc", 0x0a80, 0xffc0, 
# 82 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          2
# 82 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                         , 
# 82 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                           1 
# 82 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                       },
  { "dec", 0x0ac0, 0xffc0, 
# 83 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          2
# 83 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                         , 
# 83 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                           1 
# 83 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                       },
  { "neg", 0x0b00, 0xffc0, 
# 84 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          2
# 84 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                         , 
# 84 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                           1 
# 84 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                       },
  { "adc", 0x0b40, 0xffc0, 
# 85 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          2
# 85 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                         , 
# 85 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                           1 
# 85 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                       },
  { "sbc", 0x0b80, 0xffc0, 
# 86 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          2
# 86 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                         , 
# 86 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                           1 
# 86 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                       },
  { "tst", 0x0bc0, 0xffc0, 
# 87 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          2
# 87 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                         , 
# 87 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                           1 
# 87 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                       },
  { "ror", 0x0c00, 0xffc0, 
# 88 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          2
# 88 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                         , 
# 88 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                           1 
# 88 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                       },
  { "rol", 0x0c40, 0xffc0, 
# 89 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          2
# 89 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                         , 
# 89 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                           1 
# 89 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                       },
  { "asr", 0x0c80, 0xffc0, 
# 90 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          2
# 90 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                         , 
# 90 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                           1 
# 90 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                       },
  { "asl", 0x0cc0, 0xffc0, 
# 91 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          2
# 91 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                         , 
# 91 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                           1 
# 91 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                       },
  { "mark", 0x0d00, 0xffc0, 
# 92 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           10
# 92 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                            , 
# 92 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                              7 
# 92 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                         },
  { "mfpi", 0x0d40, 0xffc0, 
# 93 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           2
# 93 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                          , 
# 93 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                            1 
# 93 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                        },
  { "mtpi", 0x0d80, 0xffc0, 
# 94 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           2
# 94 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                          , 
# 94 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                            1 
# 94 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                        },
  { "sxt", 0x0dc0, 0xffc0, 
# 95 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          2
# 95 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                         , 
# 95 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                           7 
# 95 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                      },
  { "csm", 0x0e00, 0xffc0, 
# 96 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          2
# 96 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                         , 
# 96 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                           2 
# 96 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                     },
  { "tstset", 0x0e40, 0xffc0, 
# 97 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                             2
# 97 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                            , 
# 97 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                              9 
# 97 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "wrtlck", 0x0e80, 0xffc0, 
# 98 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                             2
# 98 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                            , 
# 98 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                              9 
# 98 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },

  { "mov", 0x1000, 0xf000, 
# 100 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          6
# 100 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                            , 
# 100 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                              1 
# 100 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "cmp", 0x2000, 0xf000, 
# 101 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          6
# 101 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                            , 
# 101 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                              1 
# 101 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "bit", 0x3000, 0xf000, 
# 102 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          6
# 102 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                            , 
# 102 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                              1 
# 102 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "bic", 0x4000, 0xf000, 
# 103 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          6
# 103 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                            , 
# 103 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                              1 
# 103 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "bis", 0x5000, 0xf000, 
# 104 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          6
# 104 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                            , 
# 104 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                              1 
# 104 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "add", 0x6000, 0xf000, 
# 105 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          6
# 105 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                            , 
# 105 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                              1 
# 105 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "mul", 0x7000, 0xfe00, 
# 106 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          4
# 106 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                 ,
# 106 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                  4 
# 106 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                            },
  { "div", 0x7200, 0xfe00, 
# 107 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          4
# 107 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                 ,
# 107 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                  4 
# 107 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                            },
  { "ash", 0x7400, 0xfe00, 
# 108 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          4
# 108 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                 ,
# 108 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                  4 
# 108 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                            },
  { "ashc", 0x7600, 0xfe00, 
# 109 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           4
# 109 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                  ,
# 109 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                   4 
# 109 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                             },
  { "xor", 0x7800, 0xfe00, 
# 110 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          3
# 110 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                             , 
# 110 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                               7 
# 110 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "fadd", 0x7a00, 0xfff8, 
# 111 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           1
# 111 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                           , 
# 111 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                             5 
# 111 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                       },
  { "fsub", 0x7a08, 0xfff8, 
# 112 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           1
# 112 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                           , 
# 112 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                             5 
# 112 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                       },
  { "fmul", 0x7a10, 0xfff8, 
# 113 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           1
# 113 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                           , 
# 113 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                             5 
# 113 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                       },
  { "fdiv", 0x7a18, 0xfff8, 
# 114 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           1
# 114 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                           , 
# 114 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                             5 
# 114 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                       },




  { "l2dr", 0x7c10, 0xfff8, 
# 119 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           1
# 119 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                           , 
# 119 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                             3 
# 119 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                       },
  { "movc", 0x7c18, 0xffff, 
# 120 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           0
# 120 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 120 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                3 
# 120 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "movrc", 0x7c19, 0xffff, 
# 121 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                            0
# 121 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                               , 
# 121 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                 3 
# 121 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                           },
  { "movtc", 0x7c1a, 0xffff, 
# 122 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                            0
# 122 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                               , 
# 122 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                 3 
# 122 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                           },
  { "locc", 0x7c20, 0xffff, 
# 123 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           0
# 123 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 123 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                3 
# 123 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "skpc", 0x7c21, 0xffff, 
# 124 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           0
# 124 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 124 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                3 
# 124 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "scanc", 0x7c22, 0xffff, 
# 125 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                            0
# 125 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                               , 
# 125 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                 3 
# 125 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                           },
  { "spanc", 0x7c23, 0xffff, 
# 126 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                            0
# 126 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                               , 
# 126 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                 3 
# 126 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                           },
  { "cmpc", 0x7c24, 0xffff, 
# 127 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           0
# 127 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 127 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                3 
# 127 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "matc", 0x7c25, 0xffff, 
# 128 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           0
# 128 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 128 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                3 
# 128 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "addn", 0x7c28, 0xffff, 
# 129 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           0
# 129 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 129 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                3 
# 129 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "subn", 0x7c29, 0xffff, 
# 130 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           0
# 130 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 130 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                3 
# 130 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "cmpn", 0x7c2a, 0xffff, 
# 131 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           0
# 131 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 131 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                3 
# 131 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "cvtnl", 0x7c2b, 0xffff, 
# 132 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                            0
# 132 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                               , 
# 132 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                 3 
# 132 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                           },
  { "cvtpn", 0x7c2c, 0xffff, 
# 133 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                            0
# 133 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                               , 
# 133 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                 3 
# 133 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                           },
  { "cvtnp", 0x7c2d, 0xffff, 
# 134 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                            0
# 134 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                               , 
# 134 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                 3 
# 134 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                           },
  { "ashn", 0x7c2e, 0xffff, 
# 135 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           0
# 135 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 135 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                3 
# 135 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "cvtln", 0x7c2f, 0xffff, 
# 136 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                            0
# 136 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                               , 
# 136 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                 3 
# 136 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                           },
  { "l3dr", 0x7c30, 0xfff8, 
# 137 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           1
# 137 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                           , 
# 137 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                             3 
# 137 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                       },
  { "addp", 0x7c38, 0xffff, 
# 138 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           0
# 138 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 138 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                3 
# 138 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "subp", 0x7c39, 0xffff, 
# 139 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           0
# 139 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 139 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                3 
# 139 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "cmpp", 0x7c3a, 0xffff, 
# 140 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           0
# 140 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 140 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                3 
# 140 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "cvtpl", 0x7c3b, 0xffff, 
# 141 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                            0
# 141 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                               , 
# 141 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                 3 
# 141 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                           },
  { "mulp", 0x7c3c, 0xffff, 
# 142 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           0
# 142 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 142 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                3 
# 142 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "divp", 0x7c3d, 0xffff, 
# 143 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           0
# 143 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 143 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                3 
# 143 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "ashp", 0x7c3e, 0xffff, 
# 144 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           0
# 144 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 144 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                3 
# 144 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "cvtlp", 0x7c3f, 0xffff, 
# 145 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                            0
# 145 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                               , 
# 145 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                 3 
# 145 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                           },
  { "movci", 0x7c58, 0xffff, 
# 146 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                            0
# 146 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                               , 
# 146 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                 3 
# 146 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                           },
  { "movrci", 0x7c59, 0xffff, 
# 147 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                             0
# 147 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                , 
# 147 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                  3 
# 147 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                            },
  { "movtci", 0x7c5a, 0xffff, 
# 148 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                             0
# 148 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                , 
# 148 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                  3 
# 148 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                            },
  { "locci", 0x7c60, 0xffff, 
# 149 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                            0
# 149 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                               , 
# 149 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                 3 
# 149 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                           },
  { "skpci", 0x7c61, 0xffff, 
# 150 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                            0
# 150 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                               , 
# 150 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                 3 
# 150 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                           },
  { "scanci", 0x7c62, 0xffff, 
# 151 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                             0
# 151 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                , 
# 151 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                  3 
# 151 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                            },
  { "spanci", 0x7c63, 0xffff, 
# 152 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                             0
# 152 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                , 
# 152 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                  3 
# 152 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                            },
  { "cmpci", 0x7c64, 0xffff, 
# 153 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                            0
# 153 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                               , 
# 153 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                 3 
# 153 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                           },
  { "matci", 0x7c65, 0xffff, 
# 154 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                            0
# 154 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                               , 
# 154 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                 3 
# 154 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                           },
  { "addni", 0x7c68, 0xffff, 
# 155 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                            0
# 155 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                               , 
# 155 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                 3 
# 155 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                           },
  { "subni", 0x7c69, 0xffff, 
# 156 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                            0
# 156 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                               , 
# 156 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                 3 
# 156 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                           },
  { "cmpni", 0x7c6a, 0xffff, 
# 157 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                            0
# 157 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                               , 
# 157 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                 3 
# 157 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                           },
  { "cvtnli", 0x7c6b, 0xffff, 
# 158 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                             0
# 158 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                , 
# 158 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                  3 
# 158 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                            },
  { "cvtpni", 0x7c6c, 0xffff, 
# 159 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                             0
# 159 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                , 
# 159 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                  3 
# 159 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                            },
  { "cvtnpi", 0x7c6d, 0xffff, 
# 160 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                             0
# 160 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                , 
# 160 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                  3 
# 160 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                            },
  { "ashni", 0x7c6e, 0xffff, 
# 161 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                            0
# 161 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                               , 
# 161 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                 3 
# 161 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                           },
  { "cvtlni", 0x7c6f, 0xffff, 
# 162 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                             0
# 162 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                , 
# 162 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                  3 
# 162 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                            },
  { "addpi", 0x7c78, 0xffff, 
# 163 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                            0
# 163 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                               , 
# 163 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                 3 
# 163 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                           },
  { "subpi", 0x7c79, 0xffff, 
# 164 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                            0
# 164 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                               , 
# 164 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                 3 
# 164 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                           },
  { "cmppi", 0x7c7a, 0xffff, 
# 165 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                            0
# 165 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                               , 
# 165 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                 3 
# 165 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                           },
  { "cvtpli", 0x7c7b, 0xffff, 
# 166 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                             0
# 166 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                , 
# 166 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                  3 
# 166 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                            },
  { "mulpi", 0x7c7c, 0xffff, 
# 167 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                            0
# 167 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                               , 
# 167 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                 3 
# 167 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                           },
  { "divpi", 0x7c7d, 0xffff, 
# 168 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                            0
# 168 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                               , 
# 168 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                 3 
# 168 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                           },
  { "ashpi", 0x7c7e, 0xffff, 
# 169 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                            0
# 169 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                               , 
# 169 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                 3 
# 169 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                           },
  { "cvtlpi", 0x7c7f, 0xffff, 
# 170 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                             0
# 170 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                , 
# 170 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                  3 
# 170 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                            },
  { "med", 0x7d80, 0xffff, 
# 171 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          0
# 171 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                             , 
# 171 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                               12 
# 171 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                           },
  { "xfc", 0x7dc0, 0xffc0, 
# 172 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          10
# 172 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                           , 
# 172 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                             12 
# 172 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                         },
  { "sob", 0x7e00, 0xfe00, 
# 173 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          8
# 173 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                , 
# 173 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                  7 
# 173 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                             },
  { "bpl", 0x8000, 0xff00, 
# 174 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          7
# 174 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                            , 
# 174 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                              1 
# 174 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "bmi", 0x8100, 0xff00, 
# 175 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          7
# 175 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                            , 
# 175 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                              1 
# 175 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "bhi", 0x8200, 0xff00, 
# 176 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          7
# 176 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                            , 
# 176 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                              1 
# 176 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "blos", 0x8300, 0xff00, 
# 177 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           7
# 177 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                             , 
# 177 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                               1 
# 177 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                           },
  { "bvc", 0x8400, 0xff00, 
# 178 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          7
# 178 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                            , 
# 178 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                              1 
# 178 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "bvs", 0x8500, 0xff00, 
# 179 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          7
# 179 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                            , 
# 179 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                              1 
# 179 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "bcc", 0x8600, 0xff00, 
# 180 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          7
# 180 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                            , 
# 180 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                              1 
# 180 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "bcs", 0x8700, 0xff00, 
# 181 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          7
# 181 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                            , 
# 181 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                              1 
# 181 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "emt", 0x8800, 0xff00, 
# 182 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          9
# 182 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                           , 
# 182 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                             1 
# 182 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                         },
  { "sys", 0x8900, 0xff00, 
# 183 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          9
# 183 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                           , 
# 183 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                             1 
# 183 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                         },
  { "clrb", 0x8a00, 0xffc0, 
# 184 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           2
# 184 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                          , 
# 184 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                            1 
# 184 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                        },
  { "comb", 0x8a40, 0xffc0, 
# 185 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           2
# 185 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                          , 
# 185 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                            1 
# 185 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                        },
  { "incb", 0x8a80, 0xffc0, 
# 186 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           2
# 186 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                          , 
# 186 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                            1 
# 186 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                        },
  { "decb", 0x8ac0, 0xffc0, 
# 187 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           2
# 187 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                          , 
# 187 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                            1 
# 187 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                        },
  { "negb", 0x8b00, 0xffc0, 
# 188 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           2
# 188 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                          , 
# 188 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                            1 
# 188 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                        },
  { "adcb", 0x8b40, 0xffc0, 
# 189 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           2
# 189 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                          , 
# 189 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                            1 
# 189 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                        },
  { "sbcb", 0x8b80, 0xffc0, 
# 190 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           2
# 190 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                          , 
# 190 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                            1 
# 190 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                        },
  { "tstb", 0x8bc0, 0xffc0, 
# 191 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           2
# 191 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                          , 
# 191 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                            1 
# 191 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                        },
  { "rorb", 0x8c00, 0xffc0, 
# 192 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           2
# 192 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                          , 
# 192 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                            1 
# 192 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                        },
  { "rolb", 0x8c40, 0xffc0, 
# 193 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           2
# 193 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                          , 
# 193 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                            1 
# 193 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                        },
  { "asrb", 0x8c80, 0xffc0, 
# 194 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           2
# 194 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                          , 
# 194 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                            1 
# 194 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                        },
  { "aslb", 0x8cc0, 0xffc0, 
# 195 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           2
# 195 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                          , 
# 195 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                            1 
# 195 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                        },
  { "mtps", 0x8d00, 0xffc0, 
# 196 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           2
# 196 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                          , 
# 196 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                            10 
# 196 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                       },
  { "mfpd", 0x8d40, 0xffc0, 
# 197 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           2
# 197 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                          , 
# 197 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                            1 
# 197 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                        },
  { "mtpd", 0x8d80, 0xffc0, 
# 198 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           2
# 198 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                          , 
# 198 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                            1 
# 198 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                        },
  { "mfps", 0x8dc0, 0xffc0, 
# 199 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           2
# 199 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                          , 
# 199 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                            10 
# 199 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                       },
  { "movb", 0x9000, 0xf000, 
# 200 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           6
# 200 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                             , 
# 200 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                               1 
# 200 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                           },
  { "cmpb", 0xa000, 0xf000, 
# 201 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           6
# 201 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                             , 
# 201 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                               1 
# 201 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                           },
  { "bitb", 0xb000, 0xf000, 
# 202 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           6
# 202 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                             , 
# 202 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                               1 
# 202 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                           },
  { "bicb", 0xc000, 0xf000, 
# 203 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           6
# 203 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                             , 
# 203 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                               1 
# 203 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                           },
  { "bisb", 0xd000, 0xf000, 
# 204 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           6
# 204 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                             , 
# 204 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                               1 
# 204 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                           },
  { "sub", 0xe000, 0xf000, 
# 205 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          6
# 205 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                            , 
# 205 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                              1 
# 205 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "cfcc", 0xf000, 0xffff, 
# 206 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           0
# 206 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 206 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                6 
# 206 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "setf", 0xf001, 0xffff, 
# 207 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           0
# 207 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 207 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                6 
# 207 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "seti", 0xf002, 0xffff, 
# 208 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           0
# 208 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 208 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                6 
# 208 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "ldub", 0xf003, 0xffff, 
# 209 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           0
# 209 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 209 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                12 
# 209 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                            },

  { "setd", 0xf009, 0xffff, 
# 211 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           0
# 211 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 211 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                6 
# 211 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "setl", 0xf00a, 0xffff, 
# 212 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           0
# 212 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 212 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                6 
# 212 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },

  { "ldfps", 0xf040, 0xffc0, 
# 214 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                            2
# 214 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                           , 
# 214 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                             6 
# 214 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                       },
  { "stfps", 0xf080, 0xffc0, 
# 215 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                            2
# 215 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                           , 
# 215 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                             6 
# 215 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                       },
  { "stst", 0xf0c0, 0xffc0, 
# 216 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           2
# 216 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                          , 
# 216 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                            6 
# 216 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                      },
  { "clrf", 0xf100, 0xffc0, 
# 217 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           14
# 217 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                           , 
# 217 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                             6 
# 217 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                       },
  { "tstf", 0xf140, 0xffc0, 
# 218 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           14
# 218 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                           , 
# 218 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                             6 
# 218 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                       },
  { "absf", 0xf180, 0xffc0, 
# 219 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           14
# 219 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                           , 
# 219 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                             6 
# 219 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                       },
  { "negf", 0xf1c0, 0xffc0, 
# 220 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           14
# 220 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                           , 
# 220 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                             6 
# 220 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                       },
  { "mulf", 0xf200, 0xff00, 
# 221 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           13
# 221 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 221 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                6 
# 221 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "modf", 0xf300, 0xff00, 
# 222 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           13
# 222 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 222 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                6 
# 222 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "addf", 0xf400, 0xff00, 
# 223 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           13
# 223 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 223 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                6 
# 223 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "ldf", 0xf500, 0xff00, 
# 224 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          13
# 224 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                             , 
# 224 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                               6 
# 224 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                         },
  { "subf", 0xf600, 0xff00, 
# 225 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           13
# 225 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 225 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                6 
# 225 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "cmpf", 0xf700, 0xff00, 
# 226 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           13
# 226 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 226 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                6 
# 226 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "stf", 0xf800, 0xff00, 
# 227 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          5
# 227 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                             , 
# 227 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                               6 
# 227 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                         },
  { "divf", 0xf900, 0xff00, 
# 228 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           13
# 228 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 228 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                6 
# 228 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "stexp", 0xfa00, 0xff00, 
# 229 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                            15
# 229 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 229 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                6 
# 229 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "stcfi", 0xfb00, 0xff00, 
# 230 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                            15
# 230 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 230 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                6 
# 230 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "stcff", 0xfc00, 0xff00, 
# 231 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                            5
# 231 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                               , 
# 231 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                 6 
# 231 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                           },
  { "ldexp", 0xfd00, 0xff00, 
# 232 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                            16
# 232 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 232 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                6 
# 232 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "ldcif", 0xfe00, 0xff00, 
# 233 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                            16
# 233 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 233 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                6 
# 233 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "ldcff", 0xff00, 0xff00, 
# 234 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                            13
# 234 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                               , 
# 234 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                 6 
# 234 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                           },



  { "", 0x0000, 0x0000, 
# 238 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                        12
# 238 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                            , 
# 238 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                              0 
# 238 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                         },
};

const struct pdp11_opcode pdp11_aliases[] =
{

  { "l2d", 0x7c10, 0xfff8, 
# 244 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          1
# 244 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                          , 
# 244 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                            3 
# 244 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                      },
  { "l3d", 0x7c30, 0xfff8, 
# 245 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          1
# 245 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                          , 
# 245 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                            3 
# 245 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                      },
  { "bhis", 0x8600, 0xff00, 
# 246 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           7
# 246 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                             , 
# 246 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                               1 
# 246 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                           },
  { "blo", 0x8700, 0xff00, 
# 247 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          7
# 247 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                            , 
# 247 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                              1 
# 247 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "trap", 0x8900, 0xff00, 
# 248 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           9
# 248 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                            , 
# 248 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                              1 
# 248 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },

  { "clrd", 0xf100, 0xffc0, 
# 250 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           14
# 250 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                           , 
# 250 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                             6 
# 250 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                       },
  { "tstd", 0xf140, 0xffc0, 
# 251 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           14
# 251 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                           , 
# 251 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                             6 
# 251 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                       },
  { "absd", 0xf180, 0xffc0, 
# 252 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           14
# 252 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                           , 
# 252 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                             6 
# 252 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                       },
  { "negd", 0xf1c0, 0xffc0, 
# 253 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           14
# 253 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                           , 
# 253 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                             6 
# 253 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                       },
  { "muld", 0xf200, 0xff00, 
# 254 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           13
# 254 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 254 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                6 
# 254 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "modd", 0xf300, 0xff00, 
# 255 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           13
# 255 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 255 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                6 
# 255 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "addd", 0xf400, 0xff00, 
# 256 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           13
# 256 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 256 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                6 
# 256 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "ldd", 0xf500, 0xff00, 
# 257 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          13
# 257 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                             , 
# 257 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                               6 
# 257 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                         },
  { "subd", 0xf600, 0xff00, 
# 258 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           13
# 258 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 258 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                6 
# 258 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "cmpd", 0xf700, 0xff00, 
# 259 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           13
# 259 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 259 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                6 
# 259 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "std", 0xf800, 0xff00, 
# 260 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                          5
# 260 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                             , 
# 260 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                               6 
# 260 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                         },
  { "divd", 0xf900, 0xff00, 
# 261 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                           13
# 261 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 261 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                6 
# 261 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "stcfl", 0xfb00, 0xff00, 
# 262 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                            15
# 262 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 262 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                6 
# 262 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "stcdi", 0xfb00, 0xff00, 
# 263 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                            15
# 263 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 263 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                6 
# 263 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "stcdl", 0xfb00, 0xff00, 
# 264 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                            15
# 264 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 264 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                6 
# 264 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "stcfd", 0xfc00, 0xff00, 
# 265 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                            5
# 265 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                               , 
# 265 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                 6 
# 265 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                           },
  { "stcdf", 0xfc00, 0xff00, 
# 266 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                            5
# 266 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                               , 
# 266 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                 6 
# 266 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                           },
  { "ldcid", 0xfe00, 0xff00, 
# 267 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                            16
# 267 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 267 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                6 
# 267 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "ldclf", 0xfe00, 0xff00, 
# 268 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                            16
# 268 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 268 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                6 
# 268 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "ldcld", 0xfe00, 0xff00, 
# 269 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                            16
# 269 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                              , 
# 269 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                6 
# 269 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                          },
  { "ldcfd", 0xff00, 0xff00, 
# 270 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                            13
# 270 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                               , 
# 270 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                 6 
# 270 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                           },
  { "ldcdf", 0xff00, 0xff00, 
# 271 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                            13
# 271 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                               , 
# 271 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c" 3 4
                                                 6 
# 271 "project/radare2/libr/asm/arch/pdp11/gnu/pdp11-opc.c"
                                                           },
};

const int pdp11_num_opcodes = sizeof pdp11_opcodes / sizeof pdp11_opcodes[0];
const int pdp11_num_aliases = sizeof pdp11_aliases / sizeof pdp11_aliases[0];
