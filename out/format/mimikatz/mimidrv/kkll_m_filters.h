# 1 "project/mimikatz/mimidrv/kkll_m_filters.h"





       
#include "globals.h"
#include "kkll_m_modules.h"

typedef enum _KIWI_MF_INDEX {
 CallbackOffset = 0,
 CallbackPreOffset = 1,
 CallbackPostOffset = 2,
 CallbackVolumeNameOffset = 3,

 MF_MAX = 4,
} KIWI_MF_INDEX, *PKIWI_MF_INDEX;

NTSTATUS kkll_m_filters_list(PKIWI_BUFFER outBuffer);
NTSTATUS kkll_m_minifilters_list(PKIWI_BUFFER outBuffer);
