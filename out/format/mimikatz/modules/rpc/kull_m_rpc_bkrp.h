# 1 "project/mimikatz/modules/rpc/kull_m_rpc_bkrp.h"





       
#include "globals.h"
#include "kull_m_rpc_ms-bkrp.h"
#include "../kull_m_net.h"

BOOL kull_m_rpc_bkrp_createBinding(LPCWSTR NetworkAddr, RPC_BINDING_HANDLE *hBinding);

BOOL kull_m_rpc_bkrp_generic(LPCWSTR NetworkAddr, const GUID * pGuid, PVOID DataIn, DWORD dwDataIn, PVOID *pDataOut, DWORD *pdwDataOut);

BOOL kull_m_rpc_bkrp_Restore(LPCWSTR NetworkAddr, PVOID DataIn, DWORD dwDataIn, PVOID *pDataOut, DWORD *pdwDataOut);
BOOL kull_m_rpc_bkrp_Backup(LPCWSTR NetworkAddr, PVOID DataIn, DWORD dwDataIn, PVOID *pDataOut, DWORD *pdwDataOut);
BOOL kull_m_rpc_bkrp_BackupKey(LPCWSTR NetworkAddr, PVOID *pDataOut, DWORD *pdwDataOut);
