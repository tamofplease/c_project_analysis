# 1 "project/mimikatz/modules/kull_m_pipe.h"





       
#include "globals.h"

BOOL kull_m_pipe_server(LPCWCHAR pipeName, HANDLE *phPipe);
BOOL kull_m_pipe_server_connect(HANDLE hPipe);
BOOL kull_m_pipe_client(LPCWCHAR pipeName, PHANDLE phPipe);
BOOL kull_m_pipe_read(HANDLE hPipe, LPBYTE *buffer, DWORD *size);
BOOL kull_m_pipe_write(HANDLE hPipe, LPCVOID buffer, DWORD size);
BOOL kull_m_pipe_close(PHANDLE phPipe);
