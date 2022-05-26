# 1 "project/mimikatz/modules/kull_m_cabinet.h"





       
#include "globals.h"
#include <strsafe.h>
#include <fci.h>

LPCSTR FCIErrorToString(FCIERROR err);

typedef struct _KIWI_CABINET{
 HFCI hfci;
 CCAB ccab;
 ERF erf;
} KIWI_CABINET, *PKIWI_CABINET;

PKIWI_CABINET kull_m_cabinet_create(LPSTR cabinetName);
BOOL kull_m_cabinet_add(PKIWI_CABINET cab, LPSTR sourceFile, OPTIONAL LPSTR destFile);
BOOL kull_m_cabinet_close(PKIWI_CABINET cab);
