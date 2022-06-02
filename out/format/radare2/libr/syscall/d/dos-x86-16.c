# 1 "project/radare2/libr/syscall/d/dos-x86-16.c"


#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct kv { const char *name; const char *value; };
static struct kv kvs[] = {
  {"0x21.55","GetSetSwitch"},
  {"0x21.54","GetFreeDiskSpace"},
  {"0x21.57","CreateDirectory"},
  {"SetHandleCount","0x21,103,0,0"},
  {"0x21.56","SetCountryCode"},
  {"0x21.51","ExtendedBreakCheck"},
  {"0x21.50","GetDriveParameterBlockForSpecificDrive"},
  {"0x21.53","GetInterruptVector"},
  {"0x21.52","GetIndosFlag"},
  {"TranslateBiosBlock","0x21,83,0,0"},
  {"DirectConsoleOutput","0x21,6,0,0"},
  {"0x21.59","SetCurrentDirectory"},
  {"Lseek","0x21,66,0,0"},
  {"0x21.58","RemoveDirectory"},
  {"CanonicalizeFileName","0x21,96,0,0"},
  {"WriteStringToStdout","0x21,9,0,0"},
  {"FCB_FindNextMatchingFile","0x21,18,0,0"},
  {"FCB_GetFileSize","0x21,35,0,0"},
  {"CreateFile","0x21,60,0,0"},
  {"SetDiskTransferAddress","0x21,26,0,0"},
  {"GetSystemTime","0x21,44,0,0"},
  {"0x21.44","GetSystemTime"},
  {"0x21.45","SetSystemTime"},
  {"NetworkRedirection","0x21,95,0,0"},
  {"BufferedInput","0x21,10,0,0"},
  {"0x21.46","SetVerifyFlag"},
  {"GetCurrentDirectory","0x21,71,0,0"},
  {"0x21.47","GetDiskTransferArea"},
  {"0x21.40","FCB_WriteRandomBlock"},
  {"GetIndosFlag","0x21,52,0,0"},
  {"0x21.41","FCB_ParseFileIntoFCB"},
  {"0x21.42","GetSystemDate"},
  {"GetDriveParameterBlockForDefaultDrive","0x21,31,0,0"},
  {"GetSetFileAttributes","0x21,67,0,0"},
  {"0x21.43","SetSystemDate"},
  {"CreateNewFile","0x21,91,0,0"},
  {"FindNextMatchingFile","0x21,79,0,0"},
  {"0x21.48","GetDOSVersion"},
  {"SetInterruptVector","0x21,37,0,0"},
  {"0x21.49","TerminateAndStayResident"},
  {"FCB_ReadSequential","0x21,20,0,0"},
  {"GetSetGlobalCodePageTable","0x21,102,0,0"},
  {"CreateNewPSP","0x21,38,0,0"},
  {"UnlinkFile","0x21,65,0,0"},
  {"GetSetFileDateTime","0x21,87,0,0"},
  {"RenameFile","0x21,86,0,0"},
  {"GetCountryInformation","0x21,101,0,0"},
  {"GetReturnCode","0x21,77,0,0"},
  {"0x21.77","GetReturnCode"},
  {"0x21.76","TerminateProcessWithReturnCode"},
  {"0x21.75","ExecuteProgram"},
  {"0x21.74","ResizeMemoryBlock"},
  {"0x21.73","FreeMemory"},
  {"GetDOSVersion","0x21,48,0,0"},
  {"0x21.72","AllocateMemory"},
  {"0x21.71","GetCurrentDirectory"},
  {"0x21.70","Dup2"},
  {"GetVerifyFlag","0x21,84,0,0"},
  {"SetDeviceDriverLookaheadFlag","0x21,100,0,0"},
  {"GetSetMemoryAllocationStrategy","0x21,88,0,0"},
  {"_","0x21"},
  {"0x21.79","FindNextMatchingFile"},
  {"ExecuteProgram","0x21,75,0,0"},
  {"0x21.78","FindFirstMatchingFile"},
  {"GetSystemDate","0x21,42,0,0"},
  {"TerminateProcess","0x21,0,1,1"},
  {"FCB_WriteRandomBlock","0x21,40,0,0"},
  {"CreateDirectory","0x21,57,0,0"},
  {"FileRegionLock","0x21,92,0,0"},
  {"WriteFile","0x21,64,0,0"},
  {"SetCurrentPSP","0x21,80,0,0"},
  {"0x21.66","Lseek"},
  {"0x21.67","GetSetFileAttributes"},
  {"0x21.64","WriteFile"},
  {"0x21.65","UnlinkFile"},
  {"0x21.62","CloseFile"},
  {"NetworkFunctions","0x21,93,0,0"},
  {"0x21.63","ReadFile"},
  {"FindFirstMatchingFile","0x21,78,0,0"},
  {"0x21.60","CreateFile"},
  {"AllocateMemory","0x21,72,0,0"},
  {"0x21.61","OpenFile"},
  {"WriteCharToPrinter","0x21,5,0,0"},
  {"0x21.68","Ioctl"},
  {"0x21.69","Dup"},
  {"0x21.11","GetStdinStatus"},
  {"0x21.10","BufferedInput"},
  {"0x21.13","DiskReset"},
  {"0x21.12","ReadFromFlushedStdin"},
  {"0x21.15","FCB_OpenFile"},
  {"SetVerifyFlag","0x21,46,0,0"},
  {"0x21.14","SelectDefaultDrive"},
  {"ResizeMemoryBlock","0x21,74,0,0"},
  {"0x21.17","FCB_FindFirstMatchingFile"},
  {"0x21.16","FCB_CloseFile"},
  {"0x21.19","FCB_DeleteFile"},
  {"GetDriveParameterBlockForSpecificDrive","0x21,50,0,0"},
  {"0x21.18","FCB_FindNextMatchingFile"},
  {"CommitFile","0x21,104,0,0"},
  {"FCB_GetAllocationOfDefaultDrive","0x21,27,0,0"},
  {"SetCurrentDirectory","0x21,59,0,0"},
  {"FCB_DeleteFile","0x21,19,0,0"},
  {"0x21.99","DoubleByteCharacterSet"},
  {"0x21.98","GetCurrentPSPAddress"},
  {"TerminateProcessWithReturnCode","0x21,76,0,0"},
  {"Dup","0x21,69,0,0"},
  {"FCB_SetRandomRecordNumber","0x21,36,0,0"},
  {"0x21.91","CreateNewFile"},
  {"0x21.90","CreateTemporaryFile"},
  {"0x21.93","NetworkFunctions"},
  {"0x21.92","FileRegionLock"},
  {"0x21.95","NetworkRedirection"},
  {"Ioctl","0x21,68,0,0"},
  {"0x21.96","CanonicalizeFileName"},
  {"ReadFromFlushedStdin","0x21,12,0,0"},
  {"DoubleByteCharacterSet","0x21,99,0,0"},
  {"FCB_ParseFileIntoFCB","0x21,41,0,0"},
  {"GetCurrentPSP","0x21,81,0,0"},
  {"CloseFile","0x21,62,0,0"},
  {"DirectCharInputWithoutEcho","0x21,8,0,0"},
  {"OpenFile","0x21,61,0,0"},
  {"ReadFile","0x21,63,0,0"},
  {"Dup2","0x21,70,0,0"},
  {"FCB_ReadRandomRecord","0x21,33,0,0"},
  {"CreateTemporaryFile","0x21,90,0,0"},
  {"FCB_CreateOrTruncateFile","0x21,22,0,0"},
  {"0x21.88","GetSetMemoryAllocationStrategy"},
  {"0x21.89","GetExtendedErrorInformation"},
  {"FCB_WriteSequential","0x21,21,0,0"},
  {"ExtendedOpenCreate","0x21,108,0,0"},
  {"0x21.80","SetCurrentPSP"},
  {"0x21.81","GetCurrentPSP"},
  {"FreeMemory","0x21,73,0,0"},
  {"0x21.82","GetListOfLists"},
  {"0x21.83","TranslateBiosBlock"},
  {"0x21.84","GetVerifyFlag"},
  {"FCB_OpenFile","0x21,15,0,0"},
  {"0x21.85","CreateChildPSP"},
  {"0x21.86","RenameFile"},
  {"GetFreeDiskSpace","0x21,54,0,0"},
  {"0x21.33","FCB_ReadRandomRecord"},
  {"0x21.87","GetSetFileDateTime"},
  {"ReadFromStdinWithEcho","0x21,1,0,i"},
  {"0x21.31","GetDriveParameterBlockForDefaultDrive"},
  {"FCB_CloseFile","0x21,16,0,0"},
  {"0x21.37","SetInterruptVector"},
  {"0x21.36","FCB_SetRandomRecordNumber"},
  {"0x21.35","FCB_GetFileSize"},
  {"0x21.34","FCB_WriteRandomRecord"},
  {"ReadFromStdin","0x21,7,0,0"},
  {"0x21.39","FCB_ReadRandomBlock"},
  {"0x21.38","CreateNewPSP"},
  {"GetSetSwitch","0x21,55,0,0"},
  {"GetSetDiskSerialNumber","0x21,105,0,0"},
  {"ExtendedBreakCheck","0x21,51,0,0"},
  {"GetListOfLists","0x21,82,0,0"},
  {"FCB_FindFirstMatchingFile","0x21,17,0,0"},
  {"SetSystemDate","0x21,43,0,0"},
  {"WriteCharToStdaux","0x21,4,0,0"},
  {"FCB_RenameFile","0x21,23,0,0"},
  {"FCB_GetAllocationOfSpecificDrive","0x21,28,0,0"},
  {"0x21.101","GetCountryInformation"},
  {"0x21.100","SetDeviceDriverLookaheadFlag"},
  {"0x21.103","SetHandleCount"},
  {"0x21.102","GetSetGlobalCodePageTable"},
  {"GetCurrentPSPAddress","0x21,98,0,0"},
  {"0x21.105","GetSetDiskSerialNumber"},
  {"SetSystemTime","0x21,45,0,0"},
  {"0x21.0","TerminateProcess"},
  {"SetCountryCode","0x21,56,0,0"},
  {"0x21.104","CommitFile"},
  {"0x21.1","ReadFromStdinWithEcho"},
  {"0x21.2","WriteCharToStdout"},
  {"0x21.3","ReadCharFromStdaux"},
  {"0x21.4","WriteCharToStdaux"},
  {"0x21.108","ExtendedOpenCreate"},
  {"0x21.5","WriteCharToPrinter"},
  {"0x21.6","DirectConsoleOutput"},
  {"0x21.7","ReadFromStdin"},
  {"0x21.22","FCB_CreateOrTruncateFile"},
  {"0x21.8","DirectCharInputWithoutEcho"},
  {"0x21.23","FCB_RenameFile"},
  {"0x21.9","WriteStringToStdout"},
  {"0x21.20","FCB_ReadSequential"},
  {"TerminateAndStayResident","0x21,49,0,0"},
  {"0x21.21","FCB_WriteSequential"},
  {"0x21.26","SetDiskTransferAddress"},
  {"0x21.27","FCB_GetAllocationOfDefaultDrive"},
  {"0x21.25","GetCurrentDefaultDrive"},
  {"CreateChildPSP","0x21,85,0,0"},
  {"GetCurrentDefaultDrive","0x21,25,0,0"},
  {"0x21.28","FCB_GetAllocationOfSpecificDrive"},
  {"GetExtendedErrorInformation","0x21,89,0,0"},
  {"FCB_WriteRandomRecord","0x21,34,0,0"},
  {"DiskReset","0x21,13,0,0"},
  {"RemoveDirectory","0x21,58,0,0"},
  {"ReadCharFromStdaux","0x21,3,0,0"},
  {"SelectDefaultDrive","0x21,14,0,0"},
  {"GetStdinStatus","0x21,11,0,0"},
  {"FCB_ReadRandomBlock","0x21,39,0,0"},
  {"GetDiskTransferArea","0x21,47,0,0"},
  {"WriteCharToStdout","0x21,2,0,"},
  {"GetInterruptVector","0x21,53,0,0"},
  {NULL, NULL}
};


typedef int (*GperfForeachCallback)(void *user, const char *k, const char *v);
int gperf_dos_x86_16_foreach(GperfForeachCallback cb, void *user) {
  int i = 0; while (kvs[i].name) {
  cb (user, kvs[i].name, kvs[i].value);
  i++;}
  return 0;
}
const char *gperf_dos_x86_16_get(const char *s) {
  int i = 0; while (kvs[i].name) {
  if (!strcmp (s, kvs[i].name)) return kvs[i].value;
  i++;}
  return NULL;
}
#define sdb_hash_c_dos_x86_16(x,y) gperf_dos_x86_16_hash(x)
const unsigned int gperf_dos_x86_16_hash(const char *s) {
  int sum = strlen (s);
  while (*s) { sum += *s; s++; }
  return sum;
}
struct {const char *name;void *get;void *hash;void *foreach;} gperf_dos_x86_16 = {
  .name = "dos-x86-16",
  .get = &gperf_dos_x86_16_get,
  .hash = &gperf_dos_x86_16_hash,
  .foreach = &gperf_dos_x86_16_foreach
};

#if MAIN
int main () {
 const char *s = ((char*(*)(char*))gperf_dos_x86_16.get)("foo");
 printf ("%s\n", s);
}
#endif