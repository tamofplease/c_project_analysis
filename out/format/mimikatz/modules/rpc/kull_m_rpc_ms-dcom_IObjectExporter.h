# 1 "project/mimikatz/modules/rpc/kull_m_rpc_ms-dcom_IObjectExporter.h"
       
#include "kull_m_rpc.h"

typedef struct tagCOMVERSION {
 USHORT MajorVersion;
 USHORT MinorVersion;
} COMVERSION;

typedef struct tagDUALSTRINGARRAY {
 USHORT wNumEntries;
 USHORT wSecurityOffset;
 USHORT aStringArray[ANYSIZE_ARRAY];
} DUALSTRINGARRAY;

error_status_t ServerAlive2(handle_t hRpc, COMVERSION *pComVersion, DUALSTRINGARRAY **ppdsaOrBindings, DWORD *pReserved);
