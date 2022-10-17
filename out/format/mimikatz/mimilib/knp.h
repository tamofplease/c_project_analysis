# 1 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/mimilib/knp.h"





       
#include "utils.h"
#include <npapi.h>

DWORD WINAPI knp_NPLogonNotify(PLUID lpLogonId, LPCWSTR lpAuthentInfoType, LPVOID lpAuthentInfo, LPCWSTR lpPreviousAuthentInfoType, LPVOID lpPreviousAuthentInfo, LPWSTR lpStationName, LPVOID StationHandle, LPWSTR *lpLogonScript);
DWORD WINAPI knp_NPGetCaps(DWORD nIndex);
