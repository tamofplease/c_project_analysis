# 1 "project/radare2/libr/util/w32.c"


#include <r_userconf.h>
#include <r_util.h>

#if __WINDOWS__
#include <windows.h>

#if 1
static DWORD (*w32_GetThreadId)(HANDLE) = NULL;
static DWORD (*w32_GetProcessId)(HANDLE) = NULL;

static BOOL (*w32_InitializeContext)(PVOID, DWORD, PCONTEXT*, PDWORD) = NULL;

#endif

static inline HANDLE w32_loadlib(const char *name, const char *libname) {
 HANDLE lib = GetModuleHandle (TEXT (name));
 if (!lib) {
  lib = LoadLibrary (TEXT (libname));
  if (!lib) {
   eprintf ("Cannot load %s to resolve %s. Aborting\n", libname, name);
   return (HANDLE)(size_t)0;
  }
 }
 return lib;
}

R_API FARPROC r_w32_InitializeConditionVariable(PCONDITION_VARIABLE a) {

 static FARPROC (WINAPI *x)(PCONDITION_VARIABLE a) = NULL;
 if (!x) {
  HANDLE lib = w32_loadlib ("kernel32", "kernel32.dll");
  x = (FARPROC (WINAPI *)(PCONDITION_VARIABLE)) GetProcAddress (lib, W32_TCALL ("InitializeConditionVariable"));
 }
 return x? x (a): NULL;
}

R_API FARPROC r_w32_WakeConditionVariable(PCONDITION_VARIABLE a) {

 static FARPROC (WINAPI *x)(PCONDITION_VARIABLE a) = NULL;
 if (!x) {
  HANDLE lib = w32_loadlib ("kernel32", "kernel32.dll");
  x = (FARPROC (WINAPI *)(PCONDITION_VARIABLE)) GetProcAddress (lib, W32_TCALL ("WakeConditionVariable"));
 }
 return x? x (a): NULL;
}

R_API FARPROC r_w32_WakeAllConditionVariable(PCONDITION_VARIABLE a) {

 static FARPROC (WINAPI *x)(PCONDITION_VARIABLE a) = NULL;
 if (!x) {
  HANDLE lib = w32_loadlib ("kernel32", "kernel32.dll");
  x = (FARPROC (WINAPI *)(PCONDITION_VARIABLE)) GetProcAddress (lib, W32_TCALL ("WakeAllConditionVariable"));
 }
 return x? x (a): NULL;
}

R_API BOOL r_w32_SleepConditionVariableCS(PCONDITION_VARIABLE a, PCRITICAL_SECTION b, DWORD c) {
 static BOOL (WINAPI *x)(PCONDITION_VARIABLE a, PCRITICAL_SECTION b, DWORD c) = NULL;

 if (!x) {
  HANDLE lib = w32_loadlib ("kernel32", "kernel32.dll");
  x = (BOOL (WINAPI *)(PCONDITION_VARIABLE, PCRITICAL_SECTION, DWORD)) GetProcAddress (lib, W32_TCALL ("SleepConditionVariableCS"));
 }
 return x? x (a, b, c): FALSE;
}

R_API BOOL r_w32_ProcessIdToSessionId(DWORD a, DWORD *b) {
 static BOOL (WINAPI *x)(DWORD, DWORD*) = NULL;
 if (!x) {
  HANDLE lib = w32_loadlib ("kernel32", "kernel32.dll");
  x = (BOOL (WINAPI *)(DWORD, DWORD*)) GetProcAddress (lib, W32_TCALL ("ProcessIdToSessionId"));
 }
 return x? x (a, b): FALSE;
}

R_API NTSTATUS r_w32_NtQuerySystemInformation(ULONG a, PVOID b, ULONG c, PULONG d) {
 static NTSTATUS (WINAPI *x)(ULONG, PVOID, ULONG, PULONG) = NULL;
 if (!x) {
  HANDLE lib = w32_loadlib ("ntdll", "ntdll.dll");
  x = (NTSTATUS (WINAPI *)(ULONG, PVOID, ULONG, PULONG)) GetProcAddress (lib, W32_TCALL ("NtQuerySystemInformation"));
 }
 return x? x (a, b, c, d): 0;
}


R_API BOOL r_w32_DebugBreakProcess(HANDLE a) {
 static BOOL (WINAPI *x)(HANDLE) = NULL;
 if (!x) {
  HANDLE lib = w32_loadlib ("kernel32", "kernel32.dll");
  x = (BOOL (WINAPI *)(HANDLE)) GetProcAddress (lib, W32_TCALL ("DebugBreakProcess"));
 }
 return x? x (a): false;
}

R_API BOOL r_w32_SetXStateFeaturesMask(PCONTEXT a, DWORD64 b) {
 static BOOL (WINAPI *x)(PCONTEXT, DWORD64) = NULL;
 if (!x) {
  HANDLE lib = w32_loadlib ("kernel32", "kernel32.dll");
  x = (BOOL (WINAPI *)(PCONTEXT, DWORD64)) GetProcAddress (lib, W32_TCALL ("SetXStateFeaturesMask"));
 }
 return x? x (a, b): 0;
}

R_API PVOID r_w32_LocateXStateFeature(PCONTEXT a, DWORD b, PDWORD c) {
 static PVOID (WINAPI *x)(PCONTEXT, DWORD, PDWORD) = NULL;
 if (!x) {
  HANDLE lib = w32_loadlib ("kernel32", "kernel32.dll");
  x = (PVOID (WINAPI *)(PCONTEXT, DWORD, PDWORD)) GetProcAddress (lib, W32_TCALL ("LocateXStateFeature"));
 }
 return x? x (a, b, c): 0;
}

R_API BOOL r_w32_GetXStateFeaturesMask(PCONTEXT a, PDWORD64 b) {
 static BOOL (WINAPI *x)(PCONTEXT, PDWORD64) = NULL;
 if (!x) {
  HANDLE lib = w32_loadlib ("kernel32", "kernel32.dll");
  x = (BOOL (WINAPI *)(PCONTEXT, PDWORD64)) GetProcAddress (lib, W32_TCALL ("GetXStateFeaturesMask"));
 }
 return x? x (a, b): 0;
}

R_API NTSTATUS r_w32_NtDuplicateObject(HANDLE a, HANDLE b, HANDLE c, PHANDLE d, ACCESS_MASK e, ULONG f, ULONG g) {
 static NTSTATUS (WINAPI *x)(HANDLE, HANDLE, HANDLE, PHANDLE, ACCESS_MASK, ULONG, ULONG) = NULL;
 if (!x) {
  HANDLE lib = w32_loadlib ("ntdll", "ntdll.dll");
  x = (NTSTATUS (WINAPI *)(HANDLE, HANDLE, HANDLE, PHANDLE, ACCESS_MASK, ULONG, ULONG)) GetProcAddress (lib, W32_TCALL ("NtDuplicateObject"));
 }
 return x? x (a, b, c, d, e, f, g): 0;
}


R_API ut64 r_w32_GetEnabledXStateFeatures(void) {
 static ut64 (WINAPI *x)(void) = NULL;
 if (!x) {
  HANDLE lib = w32_loadlib ("kernel32", "kernel32.dll");
  x = (ut64 (WINAPI *)(void)) GetProcAddress (lib, W32_TCALL ("GetEnabledXStateFeatures"));
 }
 return x? x (): 0;
}

R_API BOOL r_w32_InitializeContext(PVOID a, DWORD b, PCONTEXT* c, PDWORD d) {
 static BOOL (WINAPI *x) (PVOID, DWORD, PCONTEXT*, PDWORD) = NULL;
 if (!x) {
  HANDLE lib = w32_loadlib ("ntdll", "ntdll.dll");
  x = (BOOL (WINAPI *) (PVOID, DWORD, PCONTEXT*, PDWORD))
   GetProcAddress (lib, W32_TCALL ("InitializeContext"));
 }
 return x? x (a, b, c, d): 0;
}

R_API NTSTATUS r_w32_NtQueryInformationThread(HANDLE a, ULONG b, PVOID c, ULONG d, PULONG e) {
 static NTSTATUS (WINAPI *x)(HANDLE, ULONG, PVOID, ULONG, PULONG) = NULL;
 if (!x) {
  HANDLE lib = w32_loadlib ("ntdll", "ntdll.dll");
  x = (NTSTATUS (WINAPI *)(HANDLE, ULONG, PVOID, ULONG, PULONG))
   GetProcAddress (lib, W32_TCALL ("NtQueryInformationThread"));
 }
 return x? x (a, b, c, d, e): 0;
}


#if 0
DWORD GetModuleFileNameExA(
  [in] HANDLE hProcess,
  [in, optional] HMODULE hModule,
  [out] LPSTR lpFilename,
  [in] DWORD nSize
);
#endif
R_API DWORD r_w32_GetModuleFileNameEx(HANDLE a, HMODULE b, LPSTR c, DWORD d) {


 static DWORD (WINAPI *x)(HANDLE, HMODULE, LPSTR, DWORD) = NULL;
 if (!x) {
  HANDLE lib = w32_loadlib ("kernel32", "kernel32.dll");
  if (lib != INVALID_HANDLE_VALUE) {
   x = (DWORD (WINAPI *)(HANDLE, HMODULE, LPSTR, DWORD))
    GetProcAddress (lib, W32_TCALL ("GetModuleFileNameEx"));
  }
  if (!x) {
   lib = w32_loadlib ("psapi", "psapi.dll");
   if (lib != INVALID_HANDLE_VALUE) {
    x = (DWORD (WINAPI *)(HANDLE, HMODULE, LPSTR, DWORD))
     GetProcAddress (lib, W32_TCALL ("GetModuleFileNameEx"));
   }
  }
 }
 return x? x (a, b, c, d): 0;
}

R_API BOOL r_w32_CancelSynchronousIo(HANDLE a) {
 static BOOL (WINAPI *x)(HANDLE) = NULL;
 if (!x) {
  HANDLE lib = w32_loadlib ("kernel32", "kernel32.dll");
  x = (BOOL (WINAPI *)(HANDLE)) GetProcAddress (lib, W32_TCALL ("CancelSynchronousIo"));
 }
 return x? x (a): 0;
}

R_API BOOL r_w32_QueryFullProcessImageName(HANDLE h, DWORD p, LPSTR s, PDWORD l) {
 static DWORD (WINAPI *x)(HANDLE, DWORD, LPTSTR, PDWORD) = NULL;
 if (!x) {
  HANDLE lib = w32_loadlib ("kernel32", "kernel32.dll");
  x = (DWORD (WINAPI *)(HANDLE, DWORD, LPTSTR, PDWORD))
   GetProcAddress (lib, W32_TCALL ("QueryFullProcessImageName"));
 }
 return x? x (h, p, s, l): 0;
}

R_API DWORD r_w32_GetMappedFileName(HANDLE h, LPVOID p, LPSTR s, DWORD l) {
 static DWORD (WINAPI *x)(HANDLE, LPVOID, LPSTR, DWORD) = NULL;
 if (!x) {
  HANDLE lib = w32_loadlib ("psapi", "psapi.dll");
  x = (DWORD (WINAPI *)(HANDLE, LPVOID, LPSTR, DWORD))
   GetProcAddress (lib, W32_TCALL ("GetMappedFileName"));
 }
 return x? x (h, p, s, l): 0;
}

R_API DWORD r_w32_NtQueryObject(HANDLE a, ULONG b, PVOID c, ULONG d, PULONG e) {
 static NTSTATUS (WINAPI *x)(HANDLE, ULONG, PVOID, ULONG, PULONG) = NULL;
 if (!x) {
  HANDLE lib = w32_loadlib ("ntdll", "ntdll.dll");
  x = (NTSTATUS (WINAPI *)(HANDLE, ULONG, PVOID, ULONG, PULONG)) GetProcAddress(lib,"NtQueryObject");
 }
 return x? x (a, b, c, d , e): 0;
}

R_API DWORD r_w32_GetProcessImageFileName(HANDLE a, LPSTR b, DWORD c) {
 static DWORD (WINAPI *x)(HANDLE,LPSTR,DWORD) = NULL;
 if (!x) {
  HANDLE lib = w32_loadlib ("psapi", "psapi.dll");
  x = (DWORD (WINAPI *)(HANDLE, LPSTR, DWORD))
   GetProcAddress (lib, W32_TCALL ("GetProcessImageFileName"));
 }
 return x ? x (a, b, c): 0;
}

#if 0

static inline HANDLE r_w32_CreateToolhelp32Snapshot(DWORD a, DWORD b) {
 static HANDLE (*x)(DWORD, DWORD) = NULL;
 if (!x) {
  HANDLE lib = w32_loadlib ("kernel32", "kernel32.dll");
  x = (DWORD (*)(HANDLE, LPVOID, LPTSTR, DWORD))
   GetProcAddress (lib, W32_TCALL ("CreateToolhelp32Snapshot"));
 }
 return x? x(h, p, s, l): INVALID_HANDLE_VALUE;
}
#endif

#if 0
static bool setup_debug_privileges(bool b) {
 HANDLE tok;
 if (!OpenProcessToken (GetCurrentProcess (), TOKEN_ADJUST_PRIVILEGES | TOKEN_QUERY, &tok)) {
  return false;
 }
 bool ret = false;
 LUID luid;
 if (LookupPrivilegeValue (NULL, SE_DEBUG_NAME, &luid)) {
  TOKEN_PRIVILEGES tp;
  tp.PrivilegeCount = 1;
  tp.Privileges[0].Luid = luid;
  tp.Privileges[0].Attributes = b ? SE_PRIVILEGE_ENABLED : 0;
  if (AdjustTokenPrivileges (tok, FALSE, &tp, 0, NULL, NULL)) {

   ret = GetLastError () == ERROR_SUCCESS;
  }
 }
 CloseHandle (tok);
 return ret;
}
#endif

static bool setup_debug_privilege_noarg(void) {




 bool ret = true;
 TOKEN_PRIVILEGES tokenPriv;
 HANDLE hToken = NULL;
 LUID luidDebug;
 if (!OpenProcessToken (GetCurrentProcess (),
   TOKEN_ADJUST_PRIVILEGES, &hToken))
  return false;

 if (!LookupPrivilegeValue (NULL, SE_DEBUG_NAME, &luidDebug)) {
  CloseHandle (hToken);
  return false;
 }

 tokenPriv.PrivilegeCount = 1;
 tokenPriv.Privileges[0].Luid = luidDebug;
 tokenPriv.Privileges[0].Attributes = SE_PRIVILEGE_ENABLED;
 if (AdjustTokenPrivileges (hToken, FALSE, &tokenPriv, 0, NULL, NULL) != FALSE) {
  if (tokenPriv.Privileges[0].Attributes == SE_PRIVILEGE_ENABLED) {

  }



 } else {
  eprintf ("Failed to change token privileges 0x%x\n", (int)GetLastError());
  ret = false;
 }
 CloseHandle (hToken);
 return ret;
}

R_API bool r_w32_init(void) {

 setup_debug_privilege_noarg ();
 HANDLE lib = w32_loadlib ("kernel32", "kernel32.dll");
# 325 "project/radare2/libr/util/w32.c"
 w32_GetThreadId = (DWORD (*)(HANDLE))
  GetProcAddress (lib, "GetThreadId");

 w32_GetProcessId = (DWORD (*)(HANDLE))
  GetProcAddress (lib, "GetProcessId");
 w32_InitializeContext = (BOOL (*) (PVOID, DWORD, PCONTEXT*, PDWORD))
  GetProcAddress(lib, "InitializeContext");



 lib = w32_loadlib ("ntdll", "ntdll.dll");




 return true;
}

#else

R_API bool r_w32_init(void) {

 return false;
}

#endif
