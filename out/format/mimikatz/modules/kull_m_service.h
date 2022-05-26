# 1 "project/mimikatz/modules/kull_m_service.h"





       
#include "globals.h"
#include <aclapi.h>

BOOL kull_m_service_getUniqueForName(PCWSTR serviceName, SERVICE_STATUS_PROCESS * pServiceStatusProcess);

BOOL kull_m_service_start(PCWSTR serviceName);
BOOL kull_m_service_remove(PCWSTR serviceName);
BOOL kull_m_service_stop(PCWSTR serviceName);
BOOL kull_m_service_suspend(PCWSTR serviceName);
BOOL kull_m_service_resume(PCWSTR serviceName);
BOOL kull_m_service_preshutdown(PCWSTR serviceName);
BOOL kull_m_service_shutdown(PCWSTR serviceName);

BOOL kull_m_service_genericControl(PCWSTR serviceName, DWORD dwDesiredAccess, DWORD dwControl, LPSERVICE_STATUS ptrServiceStatus);
BOOL kull_m_service_addWorldToSD(SC_HANDLE monHandle);
BOOL kull_m_service_install(PCWSTR serviceName, PCWSTR displayName, PCWSTR binPath, DWORD serviceType, DWORD startType, BOOL startIt);
BOOL kull_m_service_uninstall(PCWSTR serviceName);
