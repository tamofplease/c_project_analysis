# 0 "project/radare2/libr/asm/arch/arm/v35arm64/arch-arm64/disassembler/sysregs.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/libr/asm/arch/arm/v35arm64/arch-arm64/disassembler/sysregs.c"


# 1 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 1 3 4
# 143 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4

# 143 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 209 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 321 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
typedef int wchar_t;
# 415 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
# 426 "/usr/local/Cellar/gcc/11.2.0_3/lib/gcc/11/gcc/x86_64-apple-darwin20/11/include/stddef.h" 3 4
} max_align_t;
# 4 "project/radare2/libr/asm/arch/arm/v35arm64/arch-arm64/disassembler/sysregs.c" 2

# 1 "project/radare2/libr/asm/arch/arm/v35arm64/arch-arm64/disassembler/sysregs.h" 1
       


# 3 "project/radare2/libr/asm/arch/arm/v35arm64/arch-arm64/disassembler/sysregs.h"
enum SystemReg {
 SYSREG_NONE=32769,
 REG_OSDTRRX_EL1=32770,
 REG_DBGBVR0_EL1=32772,
 REG_DBGBCR0_EL1=32773,
 REG_DBGWVR0_EL1=32774,
 REG_DBGWCR0_EL1=32775,
 REG_DBGBVR1_EL1=32780,
 REG_DBGBCR1_EL1=32781,
 REG_DBGWVR1_EL1=32782,
 REG_DBGWCR1_EL1=32783,
 REG_MDCCINT_EL1=32784,
 REG_MDSCR_EL1=32786,
 REG_DBGBVR2_EL1=32788,
 REG_DBGBCR2_EL1=32789,
 REG_DBGWVR2_EL1=32790,
 REG_DBGWCR2_EL1=32791,
 REG_OSDTRTX_EL1=32794,
 REG_DBGBVR3_EL1=32796,
 REG_DBGBCR3_EL1=32797,
 REG_DBGWVR3_EL1=32798,
 REG_DBGWCR3_EL1=32799,
 REG_DBGBVR4_EL1=32804,
 REG_DBGBCR4_EL1=32805,
 REG_DBGWVR4_EL1=32806,
 REG_DBGWCR4_EL1=32807,
 REG_DBGBVR5_EL1=32812,
 REG_DBGBCR5_EL1=32813,
 REG_DBGWVR5_EL1=32814,
 REG_DBGWCR5_EL1=32815,
 REG_OSECCR_EL1=32818,
 REG_DBGBVR6_EL1=32820,
 REG_DBGBCR6_EL1=32821,
 REG_DBGWVR6_EL1=32822,
 REG_DBGWCR6_EL1=32823,
 REG_DBGBVR7_EL1=32828,
 REG_DBGBCR7_EL1=32829,
 REG_DBGWVR7_EL1=32830,
 REG_DBGWCR7_EL1=32831,
 REG_DBGBVR8_EL1=32836,
 REG_DBGBCR8_EL1=32837,
 REG_DBGWVR8_EL1=32838,
 REG_DBGWCR8_EL1=32839,
 REG_DBGBVR9_EL1=32844,
 REG_DBGBCR9_EL1=32845,
 REG_DBGWVR9_EL1=32846,
 REG_DBGWCR9_EL1=32847,
 REG_DBGBVR10_EL1=32852,
 REG_DBGBCR10_EL1=32853,
 REG_DBGWVR10_EL1=32854,
 REG_DBGWCR10_EL1=32855,
 REG_DBGBVR11_EL1=32860,
 REG_DBGBCR11_EL1=32861,
 REG_DBGWVR11_EL1=32862,
 REG_DBGWCR11_EL1=32863,
 REG_DBGBVR12_EL1=32868,
 REG_DBGBCR12_EL1=32869,
 REG_DBGWVR12_EL1=32870,
 REG_DBGWCR12_EL1=32871,
 REG_DBGBVR13_EL1=32876,
 REG_DBGBCR13_EL1=32877,
 REG_DBGWVR13_EL1=32878,
 REG_DBGWCR13_EL1=32879,
 REG_DBGBVR14_EL1=32884,
 REG_DBGBCR14_EL1=32885,
 REG_DBGWVR14_EL1=32886,
 REG_DBGWCR14_EL1=32887,
 REG_DBGBVR15_EL1=32892,
 REG_DBGBCR15_EL1=32893,
 REG_DBGWVR15_EL1=32894,
 REG_DBGWCR15_EL1=32895,
 REG_OSLAR_EL1=32900,
 REG_OSDLR_EL1=32924,
 REG_DBGPRCR_EL1=32932,
 REG_DBGCLAIMSET_EL1=33734,
 REG_DBGCLAIMCLR_EL1=33742,
 REG_TRCTRACEIDR=34817,
 REG_TRCVICTLR=34818,
 REG_TRCSEQEVR0=34820,
 REG_TRCCNTRLDVR0=34821,
 REG_TRCIMSPEC0=34823,
 REG_TRCPRGCTLR=34824,
 REG_TRCQCTLR=34825,
 REG_TRCVIIECTLR=34826,
 REG_TRCSEQEVR1=34828,
 REG_TRCCNTRLDVR1=34829,
 REG_TRCIMSPEC1=34831,
 REG_TRCPROCSELR=34832,
 REG_TRCVISSCTLR=34834,
 REG_TRCSEQEVR2=34836,
 REG_TRCCNTRLDVR2=34837,
 REG_TRCIMSPEC2=34839,
 REG_TRCVIPCSSCTLR=34842,
 REG_TRCCNTRLDVR3=34845,
 REG_TRCIMSPEC3=34847,
 REG_TRCCONFIGR=34848,
 REG_TRCCNTCTLR0=34853,
 REG_TRCIMSPEC4=34855,
 REG_TRCCNTCTLR1=34861,
 REG_TRCIMSPEC5=34863,
 REG_TRCAUXCTLR=34864,
 REG_TRCSEQRSTEVR=34868,
 REG_TRCCNTCTLR2=34869,
 REG_TRCIMSPEC6=34871,
 REG_TRCSEQSTR=34876,
 REG_TRCCNTCTLR3=34877,
 REG_TRCIMSPEC7=34879,
 REG_TRCEVENTCTL0R=34880,
 REG_TRCVDCTLR=34882,
 REG_TRCEXTINSELR=34884,
 REG_TRCCNTVR0=34885,
 REG_TRCEVENTCTL1R=34888,
 REG_TRCVDSACCTLR=34890,
 REG_TRCEXTINSELR1=34892,
 REG_TRCCNTVR1=34893,
 REG_TRCRSR=34896,
 REG_TRCVDARCCTLR=34898,
 REG_TRCEXTINSELR2=34900,
 REG_TRCCNTVR2=34901,
 REG_TRCSTALLCTLR=34904,
 REG_TRCEXTINSELR3=34908,
 REG_TRCCNTVR3=34909,
 REG_TRCTSCTLR=34912,
 REG_TRCSYNCPR=34920,
 REG_TRCCCCTLR=34928,
 REG_TRCBBCTLR=34936,
 REG_TRCRSCTLR16=34945,
 REG_TRCSSCCR0=34946,
 REG_TRCSSPCICR0=34947,
 REG_TRCOSLAR=34948,
 REG_TRCRSCTLR17=34953,
 REG_TRCSSCCR1=34954,
 REG_TRCSSPCICR1=34955,
 REG_TRCRSCTLR2=34960,
 REG_TRCRSCTLR18=34961,
 REG_TRCSSCCR2=34962,
 REG_TRCSSPCICR2=34963,
 REG_TRCRSCTLR3=34968,
 REG_TRCRSCTLR19=34969,
 REG_TRCSSCCR3=34970,
 REG_TRCSSPCICR3=34971,
 REG_TRCRSCTLR4=34976,
 REG_TRCRSCTLR20=34977,
 REG_TRCSSCCR4=34978,
 REG_TRCSSPCICR4=34979,
 REG_TRCPDCR=34980,
 REG_TRCRSCTLR5=34984,
 REG_TRCRSCTLR21=34985,
 REG_TRCSSCCR5=34986,
 REG_TRCSSPCICR5=34987,
 REG_TRCRSCTLR6=34992,
 REG_TRCRSCTLR22=34993,
 REG_TRCSSCCR6=34994,
 REG_TRCSSPCICR6=34995,
 REG_TRCRSCTLR7=35000,
 REG_TRCRSCTLR23=35001,
 REG_TRCSSCCR7=35002,
 REG_TRCSSPCICR7=35003,
 REG_TRCRSCTLR8=35008,
 REG_TRCRSCTLR24=35009,
 REG_TRCSSCSR0=35010,
 REG_TRCRSCTLR9=35016,
 REG_TRCRSCTLR25=35017,
 REG_TRCSSCSR1=35018,
 REG_TRCRSCTLR10=35024,
 REG_TRCRSCTLR26=35025,
 REG_TRCSSCSR2=35026,
 REG_TRCRSCTLR11=35032,
 REG_TRCRSCTLR27=35033,
 REG_TRCSSCSR3=35034,
 REG_TRCRSCTLR12=35040,
 REG_TRCRSCTLR28=35041,
 REG_TRCSSCSR4=35042,
 REG_TRCRSCTLR13=35048,
 REG_TRCRSCTLR29=35049,
 REG_TRCSSCSR5=35050,
 REG_TRCRSCTLR14=35056,
 REG_TRCRSCTLR30=35057,
 REG_TRCSSCSR6=35058,
 REG_TRCRSCTLR15=35064,
 REG_TRCRSCTLR31=35065,
 REG_TRCSSCSR7=35066,
 REG_TRCACVR0=35072,
 REG_TRCACVR8=35073,
 REG_TRCACATR0=35074,
 REG_TRCACATR8=35075,
 REG_TRCDVCVR0=35076,
 REG_TRCDVCVR4=35077,
 REG_TRCDVCMR0=35078,
 REG_TRCDVCMR4=35079,
 REG_TRCACVR1=35088,
 REG_TRCACVR9=35089,
 REG_TRCACATR1=35090,
 REG_TRCACATR9=35091,
 REG_TRCACVR2=35104,
 REG_TRCACVR10=35105,
 REG_TRCACATR2=35106,
 REG_TRCACATR10=35107,
 REG_TRCDVCVR1=35108,
 REG_TRCDVCVR5=35109,
 REG_TRCDVCMR1=35110,
 REG_TRCDVCMR5=35111,
 REG_TRCACVR3=35120,
 REG_TRCACVR11=35121,
 REG_TRCACATR3=35122,
 REG_TRCACATR11=35123,
 REG_TRCACVR4=35136,
 REG_TRCACVR12=35137,
 REG_TRCACATR4=35138,
 REG_TRCACATR12=35139,
 REG_TRCDVCVR2=35140,
 REG_TRCDVCVR6=35141,
 REG_TRCDVCMR2=35142,
 REG_TRCDVCMR6=35143,
 REG_TRCACVR5=35152,
 REG_TRCACVR13=35153,
 REG_TRCACATR5=35154,
 REG_TRCACATR13=35155,
 REG_TRCACVR6=35168,
 REG_TRCACVR14=35169,
 REG_TRCACATR6=35170,
 REG_TRCACATR14=35171,
 REG_TRCDVCVR3=35172,
 REG_TRCDVCVR7=35173,
 REG_TRCDVCMR3=35174,
 REG_TRCDVCMR7=35175,
 REG_TRCACVR7=35184,
 REG_TRCACVR15=35185,
 REG_TRCACATR7=35186,
 REG_TRCACATR15=35187,
 REG_TRCCIDCVR0=35200,
 REG_TRCVMIDCVR0=35201,
 REG_TRCCIDCCTLR0=35202,
 REG_TRCCIDCCTLR1=35210,
 REG_TRCCIDCVR1=35216,
 REG_TRCVMIDCVR1=35217,
 REG_TRCVMIDCCTLR0=35218,
 REG_TRCVMIDCCTLR1=35226,
 REG_TRCCIDCVR2=35232,
 REG_TRCVMIDCVR2=35233,
 REG_TRCCIDCVR3=35248,
 REG_TRCVMIDCVR3=35249,
 REG_TRCCIDCVR4=35264,
 REG_TRCVMIDCVR4=35265,
 REG_TRCCIDCVR5=35280,
 REG_TRCVMIDCVR5=35281,
 REG_TRCCIDCVR6=35296,
 REG_TRCVMIDCVR6=35297,
 REG_TRCCIDCVR7=35312,
 REG_TRCVMIDCVR7=35313,
 REG_TRCITCTRL=35716,
 REG_TRCCLAIMSET=35782,
 REG_TRCCLAIMCLR=35790,
 REG_TRCLAR=35814,
 REG_TEECR32_EL1=36864,
 REG_TEEHBR32_EL1=36992,
 REG_DBGDTR_EL0=38944,
 REG_DBGDTRTX_EL0=38952,
 REG_DBGVCR32_EL2=41016,
 REG_SCTLR_EL1=49280,
 REG_ACTLR_EL1=49281,
 REG_CPACR_EL1=49282,
 REG_RGSR_EL1=49285,
 REG_GCR_EL1=49286,
 REG_TRFCR_EL1=49297,
 REG_TTBR0_EL1=49408,
 REG_TTBR1_EL1=49409,
 REG_TCR_EL1=49410,
 REG_APIAKEYLO_EL1=49416,
 REG_APIAKEYHI_EL1=49417,
 REG_APIBKEYLO_EL1=49418,
 REG_APIBKEYHI_EL1=49419,
 REG_APDAKEYLO_EL1=49424,
 REG_APDAKEYHI_EL1=49425,
 REG_APDBKEYLO_EL1=49426,
 REG_APDBKEYHI_EL1=49427,
 REG_APGAKEYLO_EL1=49432,
 REG_APGAKEYHI_EL1=49433,
 REG_SPSR_EL1=49664,
 REG_ELR_EL1=49665,
 REG_SP_EL0=49672,
 REG_SPSEL=49680,
 REG_CURRENTEL=49682,
 REG_PAN=49683,
 REG_UAO=49684,
 REG_ICC_PMR_EL1=49712,
 REG_AFSR0_EL1=49800,
 REG_AFSR1_EL1=49801,
 REG_ESR_EL1=49808,
 REG_ERRSELR_EL1=49817,
 REG_ERXCTLR_EL1=49825,
 REG_ERXSTATUS_EL1=49826,
 REG_ERXADDR_EL1=49827,
 REG_ERXPFGCTL_EL1=49829,
 REG_ERXPFGCDN_EL1=49830,
 REG_ERXMISC0_EL1=49832,
 REG_ERXMISC1_EL1=49833,
 REG_ERXMISC2_EL1=49834,
 REG_ERXMISC3_EL1=49835,
 REG_ERXTS_EL1=49839,
 REG_TFSR_EL1=49840,
 REG_TFSRE0_EL1=49841,
 REG_FAR_EL1=49920,
 REG_PAR_EL1=50080,
 REG_PMSCR_EL1=50376,
 REG_PMSICR_EL1=50378,
 REG_PMSIRR_EL1=50379,
 REG_PMSFCR_EL1=50380,
 REG_PMSEVFR_EL1=50381,
 REG_PMSLATFR_EL1=50382,
 REG_PMSIDR_EL1=50383,
 REG_PMBLIMITR_EL1=50384,
 REG_PMBPTR_EL1=50385,
 REG_PMBSR_EL1=50387,
 REG_PMBIDR_EL1=50391,
 REG_TRBLIMITR_EL1=50392,
 REG_TRBPTR_EL1=50393,
 REG_TRBBASER_EL1=50394,
 REG_TRBSR_EL1=50395,
 REG_TRBMAR_EL1=50396,
 REG_TRBTRG_EL1=50398,
 REG_PMINTENSET_EL1=50417,
 REG_PMINTENCLR_EL1=50418,
 REG_PMMIR_EL1=50422,
 REG_MAIR_EL1=50448,
 REG_AMAIR_EL1=50456,
 REG_LORSA_EL1=50464,
 REG_LOREA_EL1=50465,
 REG_LORN_EL1=50466,
 REG_LORC_EL1=50467,
 REG_MPAM1_EL1=50472,
 REG_MPAM0_EL1=50473,
 REG_VBAR_EL1=50688,
 REG_RMR_EL1=50690,
 REG_DISR_EL1=50697,
 REG_ICC_EOIR0_EL1=50753,
 REG_ICC_BPR0_EL1=50755,
 REG_ICC_AP0R0_EL1=50756,
 REG_ICC_AP0R1_EL1=50757,
 REG_ICC_AP0R2_EL1=50758,
 REG_ICC_AP0R3_EL1=50759,
 REG_ICC_AP1R0_EL1=50760,
 REG_ICC_AP1R1_EL1=50761,
 REG_ICC_AP1R2_EL1=50762,
 REG_ICC_AP1R3_EL1=50763,
 REG_ICC_DIR_EL1=50777,
 REG_ICC_SGI1R_EL1=50781,
 REG_ICC_ASGI1R_EL1=50782,
 REG_ICC_SGI0R_EL1=50783,
 REG_ICC_EOIR1_EL1=50785,
 REG_ICC_BPR1_EL1=50787,
 REG_ICC_CTLR_EL1=50788,
 REG_ICC_SRE_EL1=50789,
 REG_ICC_IGRPEN0_EL1=50790,
 REG_ICC_IGRPEN1_EL1=50791,
 REG_ICC_SEIEN_EL1=50792,
 REG_CONTEXTIDR_EL1=50817,
 REG_TPIDR_EL1=50820,
 REG_SCXTNUM_EL1=50823,
 REG_CNTKCTL_EL1=50952,
 REG_CSSELR_EL1=53248,
 REG_NZCV=55824,
 REG_DAIFSET=55825,
 REG_DIT=55829,
 REG_SSBS=55830,
 REG_TCO=55831,
 REG_FPCR=55840,
 REG_FPSR=55841,
 REG_DSPSR_EL0=55848,
 REG_DLR_EL0=55849,
 REG_PMCR_EL0=56544,
 REG_PMCNTENSET_EL0=56545,
 REG_PMCNTENCLR_EL0=56546,
 REG_PMOVSCLR_EL0=56547,
 REG_PMSWINC_EL0=56548,
 REG_PMSELR_EL0=56549,
 REG_PMCCNTR_EL0=56552,
 REG_PMXEVTYPER_EL0=56553,
 REG_PMXEVCNTR_EL0=56554,
 REG_DAIFCLR=56557,
 REG_PMUSERENR_EL0=56560,
 REG_PMOVSSET_EL0=56563,
 REG_TPIDR_EL0=56962,
 REG_TPIDRRO_EL0=56963,
 REG_SCXTNUM_EL0=56967,
 REG_AMCR_EL0=56976,
 REG_AMUSERENR_EL0=56979,
 REG_AMCNTENCLR0_EL0=56980,
 REG_AMCNTENSET0_EL0=56981,
 REG_AMCNTENCLR1_EL0=56984,
 REG_AMCNTENSET1_EL0=56985,
 REG_AMEVCNTR00_EL0=56992,
 REG_AMEVCNTR01_EL0=56993,
 REG_AMEVCNTR02_EL0=56994,
 REG_AMEVCNTR03_EL0=56995,
 REG_AMEVCNTR10_EL0=57056,
 REG_AMEVCNTR11_EL0=57057,
 REG_AMEVCNTR12_EL0=57058,
 REG_AMEVCNTR13_EL0=57059,
 REG_AMEVCNTR14_EL0=57060,
 REG_AMEVCNTR15_EL0=57061,
 REG_AMEVCNTR16_EL0=57062,
 REG_AMEVCNTR17_EL0=57063,
 REG_AMEVCNTR18_EL0=57064,
 REG_AMEVCNTR19_EL0=57065,
 REG_AMEVCNTR110_EL0=57066,
 REG_AMEVCNTR111_EL0=57067,
 REG_AMEVCNTR112_EL0=57068,
 REG_AMEVCNTR113_EL0=57069,
 REG_AMEVCNTR114_EL0=57070,
 REG_AMEVCNTR115_EL0=57071,
 REG_AMEVTYPER10_EL0=57072,
 REG_AMEVTYPER11_EL0=57073,
 REG_AMEVTYPER12_EL0=57074,
 REG_AMEVTYPER13_EL0=57075,
 REG_AMEVTYPER14_EL0=57076,
 REG_AMEVTYPER15_EL0=57077,
 REG_AMEVTYPER16_EL0=57078,
 REG_AMEVTYPER17_EL0=57079,
 REG_AMEVTYPER18_EL0=57080,
 REG_AMEVTYPER19_EL0=57081,
 REG_AMEVTYPER110_EL0=57082,
 REG_AMEVTYPER111_EL0=57083,
 REG_AMEVTYPER112_EL0=57084,
 REG_AMEVTYPER113_EL0=57085,
 REG_AMEVTYPER114_EL0=57086,
 REG_AMEVTYPER115_EL0=57087,
 REG_CNTFRQ_EL0=57088,
 REG_CNTP_TVAL_EL0=57104,
 REG_CNTP_CTL_EL0=57105,
 REG_CNTP_CVAL_EL0=57106,
 REG_CNTV_TVAL_EL0=57112,
 REG_CNTV_CTL_EL0=57113,
 REG_CNTV_CVAL_EL0=57114,
 REG_PMEVCNTR0_EL0=57152,
 REG_PMEVCNTR1_EL0=57153,
 REG_PMEVCNTR2_EL0=57154,
 REG_PMEVCNTR3_EL0=57155,
 REG_PMEVCNTR4_EL0=57156,
 REG_PMEVCNTR5_EL0=57157,
 REG_PMEVCNTR6_EL0=57158,
 REG_PMEVCNTR7_EL0=57159,
 REG_PMEVCNTR8_EL0=57160,
 REG_PMEVCNTR9_EL0=57161,
 REG_PMEVCNTR10_EL0=57162,
 REG_PMEVCNTR11_EL0=57163,
 REG_PMEVCNTR12_EL0=57164,
 REG_PMEVCNTR13_EL0=57165,
 REG_PMEVCNTR14_EL0=57166,
 REG_PMEVCNTR15_EL0=57167,
 REG_PMEVCNTR16_EL0=57168,
 REG_PMEVCNTR17_EL0=57169,
 REG_PMEVCNTR18_EL0=57170,
 REG_PMEVCNTR19_EL0=57171,
 REG_PMEVCNTR20_EL0=57172,
 REG_PMEVCNTR21_EL0=57173,
 REG_PMEVCNTR22_EL0=57174,
 REG_PMEVCNTR23_EL0=57175,
 REG_PMEVCNTR24_EL0=57176,
 REG_PMEVCNTR25_EL0=57177,
 REG_PMEVCNTR26_EL0=57178,
 REG_PMEVCNTR27_EL0=57179,
 REG_PMEVCNTR28_EL0=57180,
 REG_PMEVCNTR29_EL0=57181,
 REG_PMEVCNTR30_EL0=57182,
 REG_PMEVTYPER0_EL0=57184,
 REG_PMEVTYPER1_EL0=57185,
 REG_PMEVTYPER2_EL0=57186,
 REG_PMEVTYPER3_EL0=57187,
 REG_PMEVTYPER4_EL0=57188,
 REG_PMEVTYPER5_EL0=57189,
 REG_PMEVTYPER6_EL0=57190,
 REG_PMEVTYPER7_EL0=57191,
 REG_PMEVTYPER8_EL0=57192,
 REG_PMEVTYPER9_EL0=57193,
 REG_PMEVTYPER10_EL0=57194,
 REG_PMEVTYPER11_EL0=57195,
 REG_PMEVTYPER12_EL0=57196,
 REG_PMEVTYPER13_EL0=57197,
 REG_PMEVTYPER14_EL0=57198,
 REG_PMEVTYPER15_EL0=57199,
 REG_PMEVTYPER16_EL0=57200,
 REG_PMEVTYPER17_EL0=57201,
 REG_PMEVTYPER18_EL0=57202,
 REG_PMEVTYPER19_EL0=57203,
 REG_PMEVTYPER20_EL0=57204,
 REG_PMEVTYPER21_EL0=57205,
 REG_PMEVTYPER22_EL0=57206,
 REG_PMEVTYPER23_EL0=57207,
 REG_PMEVTYPER24_EL0=57208,
 REG_PMEVTYPER25_EL0=57209,
 REG_PMEVTYPER26_EL0=57210,
 REG_PMEVTYPER27_EL0=57211,
 REG_PMEVTYPER28_EL0=57212,
 REG_PMEVTYPER29_EL0=57213,
 REG_PMEVTYPER30_EL0=57214,
 REG_PMCCFILTR_EL0=57215,
 REG_VPIDR_EL2=57344,
 REG_VMPIDR_EL2=57349,
 REG_SCTLR_EL2=57472,
 REG_ACTLR_EL2=57473,
 REG_HCR_EL2=57480,
 REG_MDCR_EL2=57481,
 REG_CPTR_EL2=57482,
 REG_HSTR_EL2=57483,
 REG_HACR_EL2=57487,
 REG_TRFCR_EL2=57489,
 REG_SDER32_EL2=57497,
 REG_TTBR0_EL2=57600,
 REG_TTBR1_EL2=57601,
 REG_TCR_EL2=57602,
 REG_VTTBR_EL2=57608,
 REG_VTCR_EL2=57610,
 REG_VNCR_EL2=57616,
 REG_VSTTBR_EL2=57648,
 REG_VSTCR_EL2=57650,
 REG_DACR32_EL2=57728,
 REG_SPSR_EL2=57856,
 REG_ELR_EL2=57857,
 REG_SP_EL1=57864,
 REG_SPSR_IRQ=57880,
 REG_SPSR_ABT=57881,
 REG_SPSR_UND=57882,
 REG_SPSR_FIQ=57883,
 REG_IFSR32_EL2=57985,
 REG_AFSR0_EL2=57992,
 REG_AFSR1_EL2=57993,
 REG_ESR_EL2=58000,
 REG_VSESR_EL2=58003,
 REG_FPEXC32_EL2=58008,
 REG_TFSR_EL2=58032,
 REG_FAR_EL2=58112,
 REG_HPFAR_EL2=58116,
 REG_PMSCR_EL2=58568,
 REG_MAIR_EL2=58640,
 REG_AMAIR_EL2=58648,
 REG_MPAMHCR_EL2=58656,
 REG_MPAMVPMV_EL2=58657,
 REG_MPAM2_EL2=58664,
 REG_MPAMVPM0_EL2=58672,
 REG_MPAMVPM1_EL2=58673,
 REG_MPAMVPM2_EL2=58674,
 REG_MPAMVPM3_EL2=58675,
 REG_MPAMVPM4_EL2=58676,
 REG_MPAMVPM5_EL2=58677,
 REG_MPAMVPM6_EL2=58678,
 REG_MPAMVPM7_EL2=58679,
 REG_VBAR_EL2=58880,
 REG_RMR_EL2=58882,
 REG_VDISR_EL2=58889,
 REG_ICH_AP0R0_EL2=58944,
 REG_ICH_AP0R1_EL2=58945,
 REG_ICH_AP0R2_EL2=58946,
 REG_ICH_AP0R3_EL2=58947,
 REG_ICH_AP1R0_EL2=58952,
 REG_ICH_AP1R1_EL2=58953,
 REG_ICH_AP1R2_EL2=58954,
 REG_ICH_AP1R3_EL2=58955,
 REG_ICH_VSEIR_EL2=58956,
 REG_ICC_SRE_EL2=58957,
 REG_ICH_HCR_EL2=58968,
 REG_ICH_MISR_EL2=58970,
 REG_ICH_VMCR_EL2=58975,
 REG_ICH_LR0_EL2=58976,
 REG_ICH_LR1_EL2=58977,
 REG_ICH_LR2_EL2=58978,
 REG_ICH_LR3_EL2=58979,
 REG_ICH_LR4_EL2=58980,
 REG_ICH_LR5_EL2=58981,
 REG_ICH_LR6_EL2=58982,
 REG_ICH_LR7_EL2=58983,
 REG_ICH_LR8_EL2=58984,
 REG_ICH_LR9_EL2=58985,
 REG_ICH_LR10_EL2=58986,
 REG_ICH_LR11_EL2=58987,
 REG_ICH_LR12_EL2=58988,
 REG_ICH_LR13_EL2=58989,
 REG_ICH_LR14_EL2=58990,
 REG_ICH_LR15_EL2=58991,
 REG_CONTEXTIDR_EL2=59009,
 REG_TPIDR_EL2=59010,
 REG_SCXTNUM_EL2=59015,
 REG_CNTVOFF_EL2=59139,
 REG_CNTHCTL_EL2=59144,
 REG_CNTHP_TVAL_EL2=59152,
 REG_CNTHP_CTL_EL2=59153,
 REG_CNTHP_CVAL_EL2=59154,
 REG_CNTHV_TVAL_EL2=59160,
 REG_CNTHV_CTL_EL2=59161,
 REG_CNTHV_CVAL_EL2=59162,
 REG_CNTHVS_TVAL_EL2=59168,
 REG_CNTHVS_CTL_EL2=59169,
 REG_CNTHVS_CVAL_EL2=59170,
 REG_CNTHPS_TVAL_EL2=59176,
 REG_CNTHPS_CTL_EL2=59177,
 REG_CNTHPS_CVAL_EL2=59178,
 REG_SCTLR_EL12=59520,
 REG_CPACR_EL12=59522,
 REG_TRFCR_EL12=59537,
 REG_TTBR0_EL12=59648,
 REG_TTBR1_EL12=59649,
 REG_TCR_EL12=59650,
 REG_SPSR_EL12=59904,
 REG_ELR_EL12=59905,
 REG_AFSR0_EL12=60040,
 REG_AFSR1_EL12=60041,
 REG_ESR_EL12=60048,
 REG_TFSR_EL12=60080,
 REG_FAR_EL12=60160,
 REG_PMSCR_EL12=60616,
 REG_MAIR_EL12=60688,
 REG_AMAIR_EL12=60696,
 REG_MPAM1_EL12=60712,
 REG_VBAR_EL12=60928,
 REG_CONTEXTIDR_EL12=61057,
 REG_SCXTNUM_EL12=61063,
 REG_CNTKCTL_EL12=61192,
 REG_CNTP_TVAL_EL02=61200,
 REG_CNTP_CTL_EL02=61201,
 REG_CNTP_CVAL_EL02=61202,
 REG_CNTV_TVAL_EL02=61208,
 REG_CNTV_CTL_EL02=61209,
 REG_CNTV_CVAL_EL02=61210,
 REG_SCTLR_EL3=61568,
 REG_ACTLR_EL3=61569,
 REG_SCR_EL3=61576,
 REG_SDER32_EL3=61577,
 REG_CPTR_EL3=61578,
 REG_MDCR_EL3=61593,
 REG_TTBR0_EL3=61696,
 REG_TCR_EL3=61698,
 REG_SPSR_EL3=61952,
 REG_ELR_EL3=61953,
 REG_SP_EL2=61960,
 REG_AFSR0_EL3=62088,
 REG_AFSR1_EL3=62089,
 REG_ESR_EL3=62096,
 REG_TFSR_EL3=62128,
 REG_FAR_EL3=62208,
 REG_MAIR_EL3=62736,
 REG_AMAIR_EL3=62744,
 REG_MPAM3_EL3=62760,
 REG_VBAR_EL3=62976,
 REG_RMR_EL3=62978,
 REG_ICC_CTLR_EL3=63076,
 REG_ICC_SRE_EL3=63077,
 REG_ICC_IGRPEN1_EL3=63079,
 REG_TPIDR_EL3=63106,
 REG_SCXTNUM_EL3=63111,
 REG_CNTPS_TVAL_EL1=65296,
 REG_CNTPS_CTL_EL1=65297,
 REG_CNTPS_CVAL_EL1=65298,

 REG_PSTATE_SPSEL=65299,

 SYSREG_UNKNOWN=65300,
 SYSREG_END=65301,
};




const char *get_system_register_name(enum SystemReg);
const char *get_system_register_name_decomposed(int op0, int op1, int CRn, int CRm, int op2);
# 6 "project/radare2/libr/asm/arch/arm/v35arm64/arch-arm64/disassembler/sysregs.c" 2

const char *get_system_register_name(enum SystemReg sr)
{
 switch(sr) {
  case 32770: return "osdtrrx_el1";
  case 32772: return "dbgbvr0_el1";
  case 32773: return "dbgbcr0_el1";
  case 32774: return "dbgwvr0_el1";
  case 32775: return "dbgwcr0_el1";
  case 32780: return "dbgbvr1_el1";
  case 32781: return "dbgbcr1_el1";
  case 32782: return "dbgwvr1_el1";
  case 32783: return "dbgwcr1_el1";
  case 32784: return "mdccint_el1";
  case 32786: return "mdscr_el1";
  case 32788: return "dbgbvr2_el1";
  case 32789: return "dbgbcr2_el1";
  case 32790: return "dbgwvr2_el1";
  case 32791: return "dbgwcr2_el1";
  case 32794: return "osdtrtx_el1";
  case 32796: return "dbgbvr3_el1";
  case 32797: return "dbgbcr3_el1";
  case 32798: return "dbgwvr3_el1";
  case 32799: return "dbgwcr3_el1";
  case 32804: return "dbgbvr4_el1";
  case 32805: return "dbgbcr4_el1";
  case 32806: return "dbgwvr4_el1";
  case 32807: return "dbgwcr4_el1";
  case 32812: return "dbgbvr5_el1";
  case 32813: return "dbgbcr5_el1";
  case 32814: return "dbgwvr5_el1";
  case 32815: return "dbgwcr5_el1";
  case 32818: return "oseccr_el1";
  case 32820: return "dbgbvr6_el1";
  case 32821: return "dbgbcr6_el1";
  case 32822: return "dbgwvr6_el1";
  case 32823: return "dbgwcr6_el1";
  case 32828: return "dbgbvr7_el1";
  case 32829: return "dbgbcr7_el1";
  case 32830: return "dbgwvr7_el1";
  case 32831: return "dbgwcr7_el1";
  case 32836: return "dbgbvr8_el1";
  case 32837: return "dbgbcr8_el1";
  case 32838: return "dbgwvr8_el1";
  case 32839: return "dbgwcr8_el1";
  case 32844: return "dbgbvr9_el1";
  case 32845: return "dbgbcr9_el1";
  case 32846: return "dbgwvr9_el1";
  case 32847: return "dbgwcr9_el1";
  case 32852: return "dbgbvr10_el1";
  case 32853: return "dbgbcr10_el1";
  case 32854: return "dbgwvr10_el1";
  case 32855: return "dbgwcr10_el1";
  case 32860: return "dbgbvr11_el1";
  case 32861: return "dbgbcr11_el1";
  case 32862: return "dbgwvr11_el1";
  case 32863: return "dbgwcr11_el1";
  case 32868: return "dbgbvr12_el1";
  case 32869: return "dbgbcr12_el1";
  case 32870: return "dbgwvr12_el1";
  case 32871: return "dbgwcr12_el1";
  case 32876: return "dbgbvr13_el1";
  case 32877: return "dbgbcr13_el1";
  case 32878: return "dbgwvr13_el1";
  case 32879: return "dbgwcr13_el1";
  case 32884: return "dbgbvr14_el1";
  case 32885: return "dbgbcr14_el1";
  case 32886: return "dbgwvr14_el1";
  case 32887: return "dbgwcr14_el1";
  case 32892: return "dbgbvr15_el1";
  case 32893: return "dbgbcr15_el1";
  case 32894: return "dbgwvr15_el1";
  case 32895: return "dbgwcr15_el1";
  case 32900: return "oslar_el1";
  case 32924: return "osdlr_el1";
  case 32932: return "dbgprcr_el1";
  case 33734: return "dbgclaimset_el1";
  case 33742: return "dbgclaimclr_el1";
  case 34817: return "trctraceidr";
  case 34818: return "trcvictlr";
  case 34820: return "trcseqevr0";
  case 34821: return "trccntrldvr0";
  case 34823: return "trcimspec0";
  case 34824: return "trcprgctlr";
  case 34825: return "trcqctlr";
  case 34826: return "trcviiectlr";
  case 34828: return "trcseqevr1";
  case 34829: return "trccntrldvr1";
  case 34831: return "trcimspec1";
  case 34832: return "trcprocselr";
  case 34834: return "trcvissctlr";
  case 34836: return "trcseqevr2";
  case 34837: return "trccntrldvr2";
  case 34839: return "trcimspec2";
  case 34842: return "trcvipcssctlr";
  case 34845: return "trccntrldvr3";
  case 34847: return "trcimspec3";
  case 34848: return "trcconfigr";
  case 34853: return "trccntctlr0";
  case 34855: return "trcimspec4";
  case 34861: return "trccntctlr1";
  case 34863: return "trcimspec5";
  case 34864: return "trcauxctlr";
  case 34868: return "trcseqrstevr";
  case 34869: return "trccntctlr2";
  case 34871: return "trcimspec6";
  case 34876: return "trcseqstr";
  case 34877: return "trccntctlr3";
  case 34879: return "trcimspec7";
  case 34880: return "trceventctl0r";
  case 34882: return "trcvdctlr";
  case 34884: return "trcextinselr";
  case 34885: return "trccntvr0";
  case 34888: return "trceventctl1r";
  case 34890: return "trcvdsacctlr";
  case 34892: return "trcextinselr1";
  case 34893: return "trccntvr1";
  case 34896: return "trcrsr";
  case 34898: return "trcvdarcctlr";
  case 34900: return "trcextinselr2";
  case 34901: return "trccntvr2";
  case 34904: return "trcstallctlr";
  case 34908: return "trcextinselr3";
  case 34909: return "trccntvr3";
  case 34912: return "trctsctlr";
  case 34920: return "trcsyncpr";
  case 34928: return "trcccctlr";
  case 34936: return "trcbbctlr";
  case 34945: return "trcrsctlr16";
  case 34946: return "trcssccr0";
  case 34947: return "trcsspcicr0";
  case 34948: return "trcoslar";
  case 34953: return "trcrsctlr17";
  case 34954: return "trcssccr1";
  case 34955: return "trcsspcicr1";
  case 34960: return "trcrsctlr2";
  case 34961: return "trcrsctlr18";
  case 34962: return "trcssccr2";
  case 34963: return "trcsspcicr2";
  case 34968: return "trcrsctlr3";
  case 34969: return "trcrsctlr19";
  case 34970: return "trcssccr3";
  case 34971: return "trcsspcicr3";
  case 34976: return "trcrsctlr4";
  case 34977: return "trcrsctlr20";
  case 34978: return "trcssccr4";
  case 34979: return "trcsspcicr4";
  case 34980: return "trcpdcr";
  case 34984: return "trcrsctlr5";
  case 34985: return "trcrsctlr21";
  case 34986: return "trcssccr5";
  case 34987: return "trcsspcicr5";
  case 34992: return "trcrsctlr6";
  case 34993: return "trcrsctlr22";
  case 34994: return "trcssccr6";
  case 34995: return "trcsspcicr6";
  case 35000: return "trcrsctlr7";
  case 35001: return "trcrsctlr23";
  case 35002: return "trcssccr7";
  case 35003: return "trcsspcicr7";
  case 35008: return "trcrsctlr8";
  case 35009: return "trcrsctlr24";
  case 35010: return "trcsscsr0";
  case 35016: return "trcrsctlr9";
  case 35017: return "trcrsctlr25";
  case 35018: return "trcsscsr1";
  case 35024: return "trcrsctlr10";
  case 35025: return "trcrsctlr26";
  case 35026: return "trcsscsr2";
  case 35032: return "trcrsctlr11";
  case 35033: return "trcrsctlr27";
  case 35034: return "trcsscsr3";
  case 35040: return "trcrsctlr12";
  case 35041: return "trcrsctlr28";
  case 35042: return "trcsscsr4";
  case 35048: return "trcrsctlr13";
  case 35049: return "trcrsctlr29";
  case 35050: return "trcsscsr5";
  case 35056: return "trcrsctlr14";
  case 35057: return "trcrsctlr30";
  case 35058: return "trcsscsr6";
  case 35064: return "trcrsctlr15";
  case 35065: return "trcrsctlr31";
  case 35066: return "trcsscsr7";
  case 35072: return "trcacvr0";
  case 35073: return "trcacvr8";
  case 35074: return "trcacatr0";
  case 35075: return "trcacatr8";
  case 35076: return "trcdvcvr0";
  case 35077: return "trcdvcvr4";
  case 35078: return "trcdvcmr0";
  case 35079: return "trcdvcmr4";
  case 35088: return "trcacvr1";
  case 35089: return "trcacvr9";
  case 35090: return "trcacatr1";
  case 35091: return "trcacatr9";
  case 35104: return "trcacvr2";
  case 35105: return "trcacvr10";
  case 35106: return "trcacatr2";
  case 35107: return "trcacatr10";
  case 35108: return "trcdvcvr1";
  case 35109: return "trcdvcvr5";
  case 35110: return "trcdvcmr1";
  case 35111: return "trcdvcmr5";
  case 35120: return "trcacvr3";
  case 35121: return "trcacvr11";
  case 35122: return "trcacatr3";
  case 35123: return "trcacatr11";
  case 35136: return "trcacvr4";
  case 35137: return "trcacvr12";
  case 35138: return "trcacatr4";
  case 35139: return "trcacatr12";
  case 35140: return "trcdvcvr2";
  case 35141: return "trcdvcvr6";
  case 35142: return "trcdvcmr2";
  case 35143: return "trcdvcmr6";
  case 35152: return "trcacvr5";
  case 35153: return "trcacvr13";
  case 35154: return "trcacatr5";
  case 35155: return "trcacatr13";
  case 35168: return "trcacvr6";
  case 35169: return "trcacvr14";
  case 35170: return "trcacatr6";
  case 35171: return "trcacatr14";
  case 35172: return "trcdvcvr3";
  case 35173: return "trcdvcvr7";
  case 35174: return "trcdvcmr3";
  case 35175: return "trcdvcmr7";
  case 35184: return "trcacvr7";
  case 35185: return "trcacvr15";
  case 35186: return "trcacatr7";
  case 35187: return "trcacatr15";
  case 35200: return "trccidcvr0";
  case 35201: return "trcvmidcvr0";
  case 35202: return "trccidcctlr0";
  case 35210: return "trccidcctlr1";
  case 35216: return "trccidcvr1";
  case 35217: return "trcvmidcvr1";
  case 35218: return "trcvmidcctlr0";
  case 35226: return "trcvmidcctlr1";
  case 35232: return "trccidcvr2";
  case 35233: return "trcvmidcvr2";
  case 35248: return "trccidcvr3";
  case 35249: return "trcvmidcvr3";
  case 35264: return "trccidcvr4";
  case 35265: return "trcvmidcvr4";
  case 35280: return "trccidcvr5";
  case 35281: return "trcvmidcvr5";
  case 35296: return "trccidcvr6";
  case 35297: return "trcvmidcvr6";
  case 35312: return "trccidcvr7";
  case 35313: return "trcvmidcvr7";
  case 35716: return "trcitctrl";
  case 35782: return "trcclaimset";
  case 35790: return "trcclaimclr";
  case 35814: return "trclar";
  case 36864: return "teecr32_el1";
  case 36992: return "teehbr32_el1";
  case 38944: return "dbgdtr_el0";
  case 38952: return "dbgdtrtx_el0";
  case 41016: return "dbgvcr32_el2";
  case 49280: return "sctlr_el1";
  case 49281: return "actlr_el1";
  case 49282: return "cpacr_el1";
  case 49285: return "rgsr_el1";
  case 49286: return "gcr_el1";
  case 49297: return "trfcr_el1";
  case 49408: return "ttbr0_el1";
  case 49409: return "ttbr1_el1";
  case 49410: return "tcr_el1";
  case 49416: return "apiakeylo_el1";
  case 49417: return "apiakeyhi_el1";
  case 49418: return "apibkeylo_el1";
  case 49419: return "apibkeyhi_el1";
  case 49424: return "apdakeylo_el1";
  case 49425: return "apdakeyhi_el1";
  case 49426: return "apdbkeylo_el1";
  case 49427: return "apdbkeyhi_el1";
  case 49432: return "apgakeylo_el1";
  case 49433: return "apgakeyhi_el1";
  case 49664: return "spsr_el1";
  case 49665: return "elr_el1";
  case 49672: return "sp_el0";
  case 49680: return "spsel";
  case 49682: return "currentel";
  case 49683: return "pan";
  case 49684: return "uao";
  case 49712: return "icc_pmr_el1";
  case 49800: return "afsr0_el1";
  case 49801: return "afsr1_el1";
  case 49808: return "esr_el1";
  case 49817: return "errselr_el1";
  case 49825: return "erxctlr_el1";
  case 49826: return "erxstatus_el1";
  case 49827: return "erxaddr_el1";
  case 49829: return "erxpfgctl_el1";
  case 49830: return "erxpfgcdn_el1";
  case 49832: return "erxmisc0_el1";
  case 49833: return "erxmisc1_el1";
  case 49834: return "erxmisc2_el1";
  case 49835: return "erxmisc3_el1";
  case 49839: return "erxts_el1";
  case 49840: return "tfsr_el1";
  case 49841: return "tfsre0_el1";
  case 49920: return "far_el1";
  case 50080: return "par_el1";
  case 50376: return "pmscr_el1";
  case 50378: return "pmsicr_el1";
  case 50379: return "pmsirr_el1";
  case 50380: return "pmsfcr_el1";
  case 50381: return "pmsevfr_el1";
  case 50382: return "pmslatfr_el1";
  case 50383: return "pmsidr_el1";
  case 50384: return "pmblimitr_el1";
  case 50385: return "pmbptr_el1";
  case 50387: return "pmbsr_el1";
  case 50391: return "pmbidr_el1";
  case 50392: return "trblimitr_el1";
  case 50393: return "trbptr_el1";
  case 50394: return "trbbaser_el1";
  case 50395: return "trbsr_el1";
  case 50396: return "trbmar_el1";
  case 50398: return "trbtrg_el1";
  case 50417: return "pmintenset_el1";
  case 50418: return "pmintenclr_el1";
  case 50422: return "pmmir_el1";
  case 50448: return "mair_el1";
  case 50456: return "amair_el1";
  case 50464: return "lorsa_el1";
  case 50465: return "lorea_el1";
  case 50466: return "lorn_el1";
  case 50467: return "lorc_el1";
  case 50472: return "mpam1_el1";
  case 50473: return "mpam0_el1";
  case 50688: return "vbar_el1";
  case 50690: return "rmr_el1";
  case 50697: return "disr_el1";
  case 50753: return "icc_eoir0_el1";
  case 50755: return "icc_bpr0_el1";
  case 50756: return "icc_ap0r0_el1";
  case 50757: return "icc_ap0r1_el1";
  case 50758: return "icc_ap0r2_el1";
  case 50759: return "icc_ap0r3_el1";
  case 50760: return "icc_ap1r0_el1";
  case 50761: return "icc_ap1r1_el1";
  case 50762: return "icc_ap1r2_el1";
  case 50763: return "icc_ap1r3_el1";
  case 50777: return "icc_dir_el1";
  case 50781: return "icc_sgi1r_el1";
  case 50782: return "icc_asgi1r_el1";
  case 50783: return "icc_sgi0r_el1";
  case 50785: return "icc_eoir1_el1";
  case 50787: return "icc_bpr1_el1";
  case 50788: return "icc_ctlr_el1";
  case 50789: return "icc_sre_el1";
  case 50790: return "icc_igrpen0_el1";
  case 50791: return "icc_igrpen1_el1";
  case 50792: return "icc_seien_el1";
  case 50817: return "contextidr_el1";
  case 50820: return "tpidr_el1";
  case 50823: return "scxtnum_el1";
  case 50952: return "cntkctl_el1";
  case 53248: return "csselr_el1";
  case 55824: return "nzcv";
  case 55825: return "daifset";
  case 55829: return "dit";
  case 55830: return "ssbs";
  case 55831: return "tco";
  case 55840: return "fpcr";
  case 55841: return "fpsr";
  case 55848: return "dspsr_el0";
  case 55849: return "dlr_el0";
  case 56544: return "pmcr_el0";
  case 56545: return "pmcntenset_el0";
  case 56546: return "pmcntenclr_el0";
  case 56547: return "pmovsclr_el0";
  case 56548: return "pmswinc_el0";
  case 56549: return "pmselr_el0";
  case 56552: return "pmccntr_el0";
  case 56553: return "pmxevtyper_el0";
  case 56554: return "pmxevcntr_el0";
  case 56557: return "daifclr";
  case 56560: return "pmuserenr_el0";
  case 56563: return "pmovsset_el0";
  case 56962: return "tpidr_el0";
  case 56963: return "tpidrro_el0";
  case 56967: return "scxtnum_el0";
  case 56976: return "amcr_el0";
  case 56979: return "amuserenr_el0";
  case 56980: return "amcntenclr0_el0";
  case 56981: return "amcntenset0_el0";
  case 56984: return "amcntenclr1_el0";
  case 56985: return "amcntenset1_el0";
  case 56992: return "amevcntr00_el0";
  case 56993: return "amevcntr01_el0";
  case 56994: return "amevcntr02_el0";
  case 56995: return "amevcntr03_el0";
  case 57056: return "amevcntr10_el0";
  case 57057: return "amevcntr11_el0";
  case 57058: return "amevcntr12_el0";
  case 57059: return "amevcntr13_el0";
  case 57060: return "amevcntr14_el0";
  case 57061: return "amevcntr15_el0";
  case 57062: return "amevcntr16_el0";
  case 57063: return "amevcntr17_el0";
  case 57064: return "amevcntr18_el0";
  case 57065: return "amevcntr19_el0";
  case 57066: return "amevcntr110_el0";
  case 57067: return "amevcntr111_el0";
  case 57068: return "amevcntr112_el0";
  case 57069: return "amevcntr113_el0";
  case 57070: return "amevcntr114_el0";
  case 57071: return "amevcntr115_el0";
  case 57072: return "amevtyper10_el0";
  case 57073: return "amevtyper11_el0";
  case 57074: return "amevtyper12_el0";
  case 57075: return "amevtyper13_el0";
  case 57076: return "amevtyper14_el0";
  case 57077: return "amevtyper15_el0";
  case 57078: return "amevtyper16_el0";
  case 57079: return "amevtyper17_el0";
  case 57080: return "amevtyper18_el0";
  case 57081: return "amevtyper19_el0";
  case 57082: return "amevtyper110_el0";
  case 57083: return "amevtyper111_el0";
  case 57084: return "amevtyper112_el0";
  case 57085: return "amevtyper113_el0";
  case 57086: return "amevtyper114_el0";
  case 57087: return "amevtyper115_el0";
  case 57088: return "cntfrq_el0";
  case 57104: return "cntp_tval_el0";
  case 57105: return "cntp_ctl_el0";
  case 57106: return "cntp_cval_el0";
  case 57112: return "cntv_tval_el0";
  case 57113: return "cntv_ctl_el0";
  case 57114: return "cntv_cval_el0";
  case 57152: return "pmevcntr0_el0";
  case 57153: return "pmevcntr1_el0";
  case 57154: return "pmevcntr2_el0";
  case 57155: return "pmevcntr3_el0";
  case 57156: return "pmevcntr4_el0";
  case 57157: return "pmevcntr5_el0";
  case 57158: return "pmevcntr6_el0";
  case 57159: return "pmevcntr7_el0";
  case 57160: return "pmevcntr8_el0";
  case 57161: return "pmevcntr9_el0";
  case 57162: return "pmevcntr10_el0";
  case 57163: return "pmevcntr11_el0";
  case 57164: return "pmevcntr12_el0";
  case 57165: return "pmevcntr13_el0";
  case 57166: return "pmevcntr14_el0";
  case 57167: return "pmevcntr15_el0";
  case 57168: return "pmevcntr16_el0";
  case 57169: return "pmevcntr17_el0";
  case 57170: return "pmevcntr18_el0";
  case 57171: return "pmevcntr19_el0";
  case 57172: return "pmevcntr20_el0";
  case 57173: return "pmevcntr21_el0";
  case 57174: return "pmevcntr22_el0";
  case 57175: return "pmevcntr23_el0";
  case 57176: return "pmevcntr24_el0";
  case 57177: return "pmevcntr25_el0";
  case 57178: return "pmevcntr26_el0";
  case 57179: return "pmevcntr27_el0";
  case 57180: return "pmevcntr28_el0";
  case 57181: return "pmevcntr29_el0";
  case 57182: return "pmevcntr30_el0";
  case 57184: return "pmevtyper0_el0";
  case 57185: return "pmevtyper1_el0";
  case 57186: return "pmevtyper2_el0";
  case 57187: return "pmevtyper3_el0";
  case 57188: return "pmevtyper4_el0";
  case 57189: return "pmevtyper5_el0";
  case 57190: return "pmevtyper6_el0";
  case 57191: return "pmevtyper7_el0";
  case 57192: return "pmevtyper8_el0";
  case 57193: return "pmevtyper9_el0";
  case 57194: return "pmevtyper10_el0";
  case 57195: return "pmevtyper11_el0";
  case 57196: return "pmevtyper12_el0";
  case 57197: return "pmevtyper13_el0";
  case 57198: return "pmevtyper14_el0";
  case 57199: return "pmevtyper15_el0";
  case 57200: return "pmevtyper16_el0";
  case 57201: return "pmevtyper17_el0";
  case 57202: return "pmevtyper18_el0";
  case 57203: return "pmevtyper19_el0";
  case 57204: return "pmevtyper20_el0";
  case 57205: return "pmevtyper21_el0";
  case 57206: return "pmevtyper22_el0";
  case 57207: return "pmevtyper23_el0";
  case 57208: return "pmevtyper24_el0";
  case 57209: return "pmevtyper25_el0";
  case 57210: return "pmevtyper26_el0";
  case 57211: return "pmevtyper27_el0";
  case 57212: return "pmevtyper28_el0";
  case 57213: return "pmevtyper29_el0";
  case 57214: return "pmevtyper30_el0";
  case 57215: return "pmccfiltr_el0";
  case 57344: return "vpidr_el2";
  case 57349: return "vmpidr_el2";
  case 57472: return "sctlr_el2";
  case 57473: return "actlr_el2";
  case 57480: return "hcr_el2";
  case 57481: return "mdcr_el2";
  case 57482: return "cptr_el2";
  case 57483: return "hstr_el2";
  case 57487: return "hacr_el2";
  case 57489: return "trfcr_el2";
  case 57497: return "sder32_el2";
  case 57600: return "ttbr0_el2";
  case 57601: return "ttbr1_el2";
  case 57602: return "tcr_el2";
  case 57608: return "vttbr_el2";
  case 57610: return "vtcr_el2";
  case 57616: return "vncr_el2";
  case 57648: return "vsttbr_el2";
  case 57650: return "vstcr_el2";
  case 57728: return "dacr32_el2";
  case 57856: return "spsr_el2";
  case 57857: return "elr_el2";
  case 57864: return "sp_el1";
  case 57880: return "spsr_irq";
  case 57881: return "spsr_abt";
  case 57882: return "spsr_und";
  case 57883: return "spsr_fiq";
  case 57985: return "ifsr32_el2";
  case 57992: return "afsr0_el2";
  case 57993: return "afsr1_el2";
  case 58000: return "esr_el2";
  case 58003: return "vsesr_el2";
  case 58008: return "fpexc32_el2";
  case 58032: return "tfsr_el2";
  case 58112: return "far_el2";
  case 58116: return "hpfar_el2";
  case 58568: return "pmscr_el2";
  case 58640: return "mair_el2";
  case 58648: return "amair_el2";
  case 58656: return "mpamhcr_el2";
  case 58657: return "mpamvpmv_el2";
  case 58664: return "mpam2_el2";
  case 58672: return "mpamvpm0_el2";
  case 58673: return "mpamvpm1_el2";
  case 58674: return "mpamvpm2_el2";
  case 58675: return "mpamvpm3_el2";
  case 58676: return "mpamvpm4_el2";
  case 58677: return "mpamvpm5_el2";
  case 58678: return "mpamvpm6_el2";
  case 58679: return "mpamvpm7_el2";
  case 58880: return "vbar_el2";
  case 58882: return "rmr_el2";
  case 58889: return "vdisr_el2";
  case 58944: return "ich_ap0r0_el2";
  case 58945: return "ich_ap0r1_el2";
  case 58946: return "ich_ap0r2_el2";
  case 58947: return "ich_ap0r3_el2";
  case 58952: return "ich_ap1r0_el2";
  case 58953: return "ich_ap1r1_el2";
  case 58954: return "ich_ap1r2_el2";
  case 58955: return "ich_ap1r3_el2";
  case 58956: return "ich_vseir_el2";
  case 58957: return "icc_sre_el2";
  case 58968: return "ich_hcr_el2";
  case 58970: return "ich_misr_el2";
  case 58975: return "ich_vmcr_el2";
  case 58976: return "ich_lr0_el2";
  case 58977: return "ich_lr1_el2";
  case 58978: return "ich_lr2_el2";
  case 58979: return "ich_lr3_el2";
  case 58980: return "ich_lr4_el2";
  case 58981: return "ich_lr5_el2";
  case 58982: return "ich_lr6_el2";
  case 58983: return "ich_lr7_el2";
  case 58984: return "ich_lr8_el2";
  case 58985: return "ich_lr9_el2";
  case 58986: return "ich_lr10_el2";
  case 58987: return "ich_lr11_el2";
  case 58988: return "ich_lr12_el2";
  case 58989: return "ich_lr13_el2";
  case 58990: return "ich_lr14_el2";
  case 58991: return "ich_lr15_el2";
  case 59009: return "contextidr_el2";
  case 59010: return "tpidr_el2";
  case 59015: return "scxtnum_el2";
  case 59139: return "cntvoff_el2";
  case 59144: return "cnthctl_el2";
  case 59152: return "cnthp_tval_el2";
  case 59153: return "cnthp_ctl_el2";
  case 59154: return "cnthp_cval_el2";
  case 59160: return "cnthv_tval_el2";
  case 59161: return "cnthv_ctl_el2";
  case 59162: return "cnthv_cval_el2";
  case 59168: return "cnthvs_tval_el2";
  case 59169: return "cnthvs_ctl_el2";
  case 59170: return "cnthvs_cval_el2";
  case 59176: return "cnthps_tval_el2";
  case 59177: return "cnthps_ctl_el2";
  case 59178: return "cnthps_cval_el2";
  case 59520: return "sctlr_el12";
  case 59522: return "cpacr_el12";
  case 59537: return "trfcr_el12";
  case 59648: return "ttbr0_el12";
  case 59649: return "ttbr1_el12";
  case 59650: return "tcr_el12";
  case 59904: return "spsr_el12";
  case 59905: return "elr_el12";
  case 60040: return "afsr0_el12";
  case 60041: return "afsr1_el12";
  case 60048: return "esr_el12";
  case 60080: return "tfsr_el12";
  case 60160: return "far_el12";
  case 60616: return "pmscr_el12";
  case 60688: return "mair_el12";
  case 60696: return "amair_el12";
  case 60712: return "mpam1_el12";
  case 60928: return "vbar_el12";
  case 61057: return "contextidr_el12";
  case 61063: return "scxtnum_el12";
  case 61192: return "cntkctl_el12";
  case 61200: return "cntp_tval_el02";
  case 61201: return "cntp_ctl_el02";
  case 61202: return "cntp_cval_el02";
  case 61208: return "cntv_tval_el02";
  case 61209: return "cntv_ctl_el02";
  case 61210: return "cntv_cval_el02";
  case 61568: return "sctlr_el3";
  case 61569: return "actlr_el3";
  case 61576: return "scr_el3";
  case 61577: return "sder32_el3";
  case 61578: return "cptr_el3";
  case 61593: return "mdcr_el3";
  case 61696: return "ttbr0_el3";
  case 61698: return "tcr_el3";
  case 61952: return "spsr_el3";
  case 61953: return "elr_el3";
  case 61960: return "sp_el2";
  case 62088: return "afsr0_el3";
  case 62089: return "afsr1_el3";
  case 62096: return "esr_el3";
  case 62128: return "tfsr_el3";
  case 62208: return "far_el3";
  case 62736: return "mair_el3";
  case 62744: return "amair_el3";
  case 62760: return "mpam3_el3";
  case 62976: return "vbar_el3";
  case 62978: return "rmr_el3";
  case 63076: return "icc_ctlr_el3";
  case 63077: return "icc_sre_el3";
  case 63079: return "icc_igrpen1_el3";
  case 63106: return "tpidr_el3";
  case 63111: return "scxtnum_el3";
  case 65296: return "cntps_tval_el1";
  case 65297: return "cntps_ctl_el1";
  case 65298: return "cntps_cval_el1";
  case 65299: return "spsel";
  case 65300: return "unknown_catchall";
  default: return "";
 }
}

const char *get_system_register_name_decomposed(int op0, int op1, int CRn, int CRm, int op2)
{
 enum SystemReg sr = (enum SystemReg)((op0<<14)|(op1<<11)|(CRn<<7)|(CRm<<3)|op2);
 return get_system_register_name(sr);
}
