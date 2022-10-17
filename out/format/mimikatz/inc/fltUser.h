# 1 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/fltUser.h"
# 19 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/fltUser.h"
#ifndef __FLTUSER_H__
#define __FLTUSER_H__ 
# 33 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/fltUser.h"
#define FLT_MGR_BASELINE (((OSVER(NTDDI_VERSION) == NTDDI_WIN2K) && (SPVER(NTDDI_VERSION) >= SPVER(NTDDI_WIN2KSP4))) || \
                          ((OSVER(NTDDI_VERSION) == NTDDI_WINXP) && (SPVER(NTDDI_VERSION) >= SPVER(NTDDI_WINXPSP2))) || \
                          ((OSVER(NTDDI_VERSION) == NTDDI_WS03) && (SPVER(NTDDI_VERSION) >= SPVER(NTDDI_WS03SP1))) || \
                          (NTDDI_VERSION >= NTDDI_VISTA))






#define FLT_MGR_AFTER_XPSP2 (((OSVER(NTDDI_VERSION) == NTDDI_WIN2K) && (SPVER(NTDDI_VERSION) >= SPVER(NTDDI_WIN2KSP4))) || \
                             ((OSVER(NTDDI_VERSION) == NTDDI_WINXP) && (SPVER(NTDDI_VERSION) > SPVER(NTDDI_WINXPSP2))) || \
                             ((OSVER(NTDDI_VERSION) == NTDDI_WS03) && (SPVER(NTDDI_VERSION) >= SPVER(NTDDI_WS03SP1))) || \
                             (NTDDI_VERSION >= NTDDI_VISTA))





#define FLT_MGR_LONGHORN (NTDDI_VERSION >= NTDDI_VISTA)





#define FLT_MGR_WIN7 (NTDDI_VERSION >= NTDDI_WIN7)
# 68 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/fltUser.h"
#include <fltUserStructures.h>

#ifdef __cplusplus
extern "C" {
#endif





#if FLT_MGR_BASELINE





__checkReturn
HRESULT
WINAPI
FilterLoad (
    __in LPCWSTR lpFilterName
    );

__checkReturn
HRESULT
WINAPI
FilterUnload (
    __in LPCWSTR lpFilterName
    );
# 109 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/fltUser.h"
__checkReturn
HRESULT
WINAPI
FilterCreate (
    __in LPCWSTR lpFilterName,
    __deref_out HFILTER *hFilter
    );

HRESULT
WINAPI
FilterClose(
    __in HFILTER hFilter
    );





__checkReturn
HRESULT
WINAPI
FilterInstanceCreate (
    __in LPCWSTR lpFilterName,
    __in LPCWSTR lpVolumeName,
    __in_opt LPCWSTR lpInstanceName,
   __deref_out HFILTER_INSTANCE *hInstance
    );

HRESULT
WINAPI
FilterInstanceClose(
    __in HFILTER_INSTANCE hInstance
    );
# 151 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/fltUser.h"
__checkReturn
HRESULT
WINAPI
FilterAttach (
    __in LPCWSTR lpFilterName,
    __in LPCWSTR lpVolumeName,
    __in_opt LPCWSTR lpInstanceName ,
    __in_opt DWORD dwCreatedInstanceNameLength ,
    __out_bcount_opt(dwCreatedInstanceNameLength) LPWSTR lpCreatedInstanceName
    );

__checkReturn
HRESULT
WINAPI
FilterAttachAtAltitude (
    __in LPCWSTR lpFilterName,
    __in LPCWSTR lpVolumeName,
    __in LPCWSTR lpAltitude,
    __in_opt LPCWSTR lpInstanceName ,
    __in_opt DWORD dwCreatedInstanceNameLength ,
    __out_bcount_opt(dwCreatedInstanceNameLength) LPWSTR lpCreatedInstanceName
    );

__checkReturn
HRESULT
WINAPI
FilterDetach (
    __in LPCWSTR lpFilterName,
    __in LPCWSTR lpVolumeName,
    __in_opt LPCWSTR lpInstanceName
    );
# 195 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/fltUser.h"
__checkReturn
HRESULT
WINAPI
FilterFindFirst (
    __in FILTER_INFORMATION_CLASS dwInformationClass,
    __out_bcount_part(dwBufferSize,*lpBytesReturned) LPVOID lpBuffer,
    __in DWORD dwBufferSize,
    __out LPDWORD lpBytesReturned,
    __out LPHANDLE lpFilterFind
    );

__checkReturn
HRESULT
WINAPI
FilterFindNext (
    __in HANDLE hFilterFind,
    __in FILTER_INFORMATION_CLASS dwInformationClass,
    __out_bcount_part(dwBufferSize,*lpBytesReturned) LPVOID lpBuffer,
    __in DWORD dwBufferSize,
    __out LPDWORD lpBytesReturned
    );

__checkReturn
HRESULT
WINAPI
FilterFindClose(
    __in HANDLE hFilterFind
    );


__checkReturn
HRESULT
WINAPI
FilterVolumeFindFirst (
    __in FILTER_VOLUME_INFORMATION_CLASS dwInformationClass,
    __out_bcount_part(dwBufferSize,*lpBytesReturned) LPVOID lpBuffer,
    __in DWORD dwBufferSize,
    __out LPDWORD lpBytesReturned,
    __out PHANDLE lpVolumeFind
    );

__checkReturn
HRESULT
WINAPI
FilterVolumeFindNext (
    __in HANDLE hVolumeFind,
    __in FILTER_VOLUME_INFORMATION_CLASS dwInformationClass,
    __out_bcount_part(dwBufferSize,*lpBytesReturned) LPVOID lpBuffer,
    __in DWORD dwBufferSize,
    __out LPDWORD lpBytesReturned
    );

HRESULT
WINAPI
FilterVolumeFindClose(
    __in HANDLE hVolumeFind
    );





__checkReturn
HRESULT
WINAPI
FilterInstanceFindFirst (
    __in LPCWSTR lpFilterName,
    __in INSTANCE_INFORMATION_CLASS dwInformationClass,
    __out_bcount_part(dwBufferSize,*lpBytesReturned) LPVOID lpBuffer,
    __in DWORD dwBufferSize,
    __out LPDWORD lpBytesReturned,
    __out LPHANDLE lpFilterInstanceFind
    );

__checkReturn
HRESULT
WINAPI
FilterInstanceFindNext (
    __in HANDLE hFilterInstanceFind,
    __in INSTANCE_INFORMATION_CLASS dwInformationClass,
    __out_bcount_part(dwBufferSize,*lpBytesReturned) LPVOID lpBuffer,
    __in DWORD dwBufferSize,
    __out LPDWORD lpBytesReturned
    );

__checkReturn
HRESULT
WINAPI
FilterInstanceFindClose(
    __in HANDLE hFilterInstanceFind
    );






__checkReturn
HRESULT
WINAPI
FilterVolumeInstanceFindFirst (
    __in LPCWSTR lpVolumeName,
    __in INSTANCE_INFORMATION_CLASS dwInformationClass,
    __out_bcount_part(dwBufferSize,*lpBytesReturned) LPVOID lpBuffer,
    __in DWORD dwBufferSize,
    __out LPDWORD lpBytesReturned,
    __out LPHANDLE lpVolumeInstanceFind
    );

__checkReturn
HRESULT
WINAPI
FilterVolumeInstanceFindNext (
    __in HANDLE hVolumeInstanceFind,
    __in INSTANCE_INFORMATION_CLASS dwInformationClass,
    __out_bcount_part(dwBufferSize,*lpBytesReturned) LPVOID lpBuffer,
    __in DWORD dwBufferSize,
    __out LPDWORD lpBytesReturned
    );

HRESULT
WINAPI
FilterVolumeInstanceFindClose(
    __in HANDLE hVolumeInstanceFind
    );






__checkReturn
HRESULT
WINAPI
FilterGetInformation (
    __in HFILTER hFilter,
    __in FILTER_INFORMATION_CLASS dwInformationClass,
    __out_bcount_part(dwBufferSize,*lpBytesReturned) LPVOID lpBuffer,
    __in DWORD dwBufferSize,
    __out LPDWORD lpBytesReturned
    );

__checkReturn
HRESULT
WINAPI
FilterInstanceGetInformation (
    __in HFILTER_INSTANCE hInstance,
    __in INSTANCE_INFORMATION_CLASS dwInformationClass,
    __out_bcount_part(dwBufferSize,*lpBytesReturned) LPVOID lpBuffer,
    __in DWORD dwBufferSize,
    __out LPDWORD lpBytesReturned
    );
# 355 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/fltUser.h"
__checkReturn
HRESULT
WINAPI
FilterConnectCommunicationPort(
    __in LPCWSTR lpPortName,
    __in DWORD dwOptions,
    __in_bcount_opt(wSizeOfContext) LPCVOID lpContext,
    __in WORD wSizeOfContext,
    __in_opt LPSECURITY_ATTRIBUTES lpSecurityAttributes ,
    __deref_out HANDLE *hPort
    );

__checkReturn
HRESULT
WINAPI
FilterSendMessage (
    __in HANDLE hPort,
    __in_bcount_opt(dwInBufferSize) LPVOID lpInBuffer,
    __in DWORD dwInBufferSize,
    __out_bcount_part_opt(dwOutBufferSize,*lpBytesReturned) LPVOID lpOutBuffer,
    __in DWORD dwOutBufferSize,
    __out LPDWORD lpBytesReturned
    );

__checkReturn
HRESULT
WINAPI
FilterGetMessage (
    __in HANDLE hPort,
    __out_bcount(dwMessageBufferSize) PFILTER_MESSAGE_HEADER lpMessageBuffer,
    __in DWORD dwMessageBufferSize,
    __inout LPOVERLAPPED lpOverlapped
    );

__checkReturn
HRESULT
WINAPI
FilterReplyMessage (
    __in HANDLE hPort,
    __in_bcount(dwReplyBufferSize) PFILTER_REPLY_HEADER lpReplyBuffer,
    __in DWORD dwReplyBufferSize
    );







__checkReturn
HRESULT
WINAPI
FilterGetDosName (
    __in LPCWSTR lpVolumeName,
    __out_ecount(dwDosNameBufferSize) LPWSTR lpDosName,
    __in DWORD dwDosNameBufferSize
    );

#endif

#ifdef __cplusplus
}
#endif

#endif
