# 1 "project/mimikatz/modules/kull_m_kernel.h"





       
#include "globals.h"
#include <winioctl.h>
#include "../mimidrv/ioctl.h"

BOOL kull_m_kernel_ioctl_handle(HANDLE hDriver, DWORD ioctlCode, PVOID bufferIn, DWORD szBufferIn, PVOID * pBufferOut, PDWORD pSzBufferOut, BOOL autobuffer);
BOOL kull_m_kernel_ioctl(PCWSTR driver, DWORD ioctlCode, PVOID bufferIn, DWORD szBufferIn, PVOID * pBufferOut, PDWORD pSzBufferOut, BOOL autobuffer);
BOOL kull_m_kernel_mimidrv_ioctl(DWORD ioctlCode, PVOID bufferIn, DWORD szBufferIn, PVOID * pBufferOut, PDWORD pSzBufferOut, BOOL autobuffer);
BOOL kull_m_kernel_mimidrv_simple_output(DWORD ioctlCode, PVOID bufferIn, DWORD szBufferIn);
