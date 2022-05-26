# 1 "project/mimikatz/inc/DbgHelp.h"
# 20 "project/mimikatz/inc/DbgHelp.h"
#ifndef _DBGHELP_
#define _DBGHELP_ 

#if _MSC_VER > 1020
       
#endif







#ifdef _WIN64
#ifndef _IMAGEHLP64
#define _IMAGEHLP64 
#endif
#endif

#include <pshpack8.h>





#ifndef __in
 #define __in
#endif
#ifndef __out
 #define __out
#endif
#ifndef __inout
 #define __inout
#endif
#ifndef __in_opt
 #define __in_opt
#endif
#ifndef __out_opt
 #define __out_opt
#endif
#ifndef __inout_opt
 #define __inout_opt
#endif
#ifndef __in_ecount
 #define __in_ecount(x)
#endif
#ifndef __out_ecount
 #define __out_ecount(x)
#endif
#ifndef __inout_ecount
 #define __inout_ecount(x)
#endif
#ifndef __in_bcount
 #define __in_bcount(x)
#endif
#ifndef __out_bcount
 #define __out_bcount(x)
#endif
#ifndef __inout_bcount
 #define __inout_bcount(x)
#endif
#ifndef __out_xcount
 #define __out_xcount(x)
#endif
#ifndef __deref_opt_out
 #define __deref_opt_out
#endif
#ifndef __deref_out
 #define __deref_out
#endif
#ifndef __out_ecount_opt
 #define __out_ecount_opt(x)
#endif
#ifndef __in_bcount_opt
 #define __in_bcount_opt(x)
#endif
#ifndef __out_bcount_opt
 #define __out_bcount_opt(x)
#endif
#ifndef __deref_out_opt
 #define __deref_out_opt
#endif


#ifdef __cplusplus
extern "C" {
#endif

#ifdef _IMAGEHLP_SOURCE_
 #define IMAGEAPI __stdcall
 #define DBHLP_DEPRECIATED
#else
 #define IMAGEAPI DECLSPEC_IMPORT __stdcall
 #if (_MSC_VER >= 1300) && !defined(MIDL_PASS)
  #define DBHLP_DEPRECIATED __declspec(deprecated)
 #else
  #define DBHLP_DEPRECIATED
 #endif
#endif

#define DBHLPAPI IMAGEAPI

#define IMAGE_SEPARATION (64*1024)
# 133 "project/mimikatz/inc/DbgHelp.h"
typedef struct _LOADED_IMAGE {
    PSTR ModuleName;
    HANDLE hFile;
    PUCHAR MappedAddress;
#ifdef _IMAGEHLP64
    PIMAGE_NT_HEADERS64 FileHeader;
#else
    PIMAGE_NT_HEADERS32 FileHeader;
#endif
    PIMAGE_SECTION_HEADER LastRvaSection;
    ULONG NumberOfSections;
    PIMAGE_SECTION_HEADER Sections;
    ULONG Characteristics;
    BOOLEAN fSystemImage;
    BOOLEAN fDOSImage;
    BOOLEAN fReadOnly;
    UCHAR Version;
    LIST_ENTRY Links;
    ULONG SizeOfImage;
} LOADED_IMAGE, *PLOADED_IMAGE;

#define MAX_SYM_NAME 2000






#define ERROR_IMAGE_NOT_STRIPPED 0x8800
#define ERROR_NO_DBG_POINTER 0x8801
#define ERROR_NO_PDB_POINTER 0x8802

typedef BOOL
(CALLBACK *PFIND_DEBUG_FILE_CALLBACK)(
    __in HANDLE FileHandle,
    __in PCSTR FileName,
    __in PVOID CallerData
    );

HANDLE
IMAGEAPI
SymFindDebugInfoFile(
    __in HANDLE hProcess,
    __in PCSTR FileName,
    __out_ecount(MAX_PATH + 1) PSTR DebugFilePath,
    __in_opt PFIND_DEBUG_FILE_CALLBACK Callback,
    __in_opt PVOID CallerData
    );

typedef BOOL
(CALLBACK *PFIND_DEBUG_FILE_CALLBACKW)(
    __in HANDLE FileHandle,
    __in PCWSTR FileName,
    __in PVOID CallerData
    );

HANDLE
IMAGEAPI
SymFindDebugInfoFileW(
    __in HANDLE hProcess,
    __in PCWSTR FileName,
    __out_ecount(MAX_PATH + 1) PWSTR DebugFilePath,
    __in_opt PFIND_DEBUG_FILE_CALLBACKW Callback,
    __in_opt PVOID CallerData
    );

HANDLE
IMAGEAPI
FindDebugInfoFile (
    __in PCSTR FileName,
    __in PCSTR SymbolPath,
    __out_ecount(MAX_PATH + 1) PSTR DebugFilePath
    );

HANDLE
IMAGEAPI
FindDebugInfoFileEx (
    __in PCSTR FileName,
    __in PCSTR SymbolPath,
    __out_ecount(MAX_PATH + 1) PSTR DebugFilePath,
    __in_opt PFIND_DEBUG_FILE_CALLBACK Callback,
    __in_opt PVOID CallerData
    );

HANDLE
IMAGEAPI
FindDebugInfoFileExW (
    __in PCWSTR FileName,
    __in PCWSTR SymbolPath,
    __out_ecount(MAX_PATH + 1) PWSTR DebugFilePath,
    __in_opt PFIND_DEBUG_FILE_CALLBACKW Callback,
    __in_opt PVOID CallerData
    );

typedef BOOL
(CALLBACK *PFINDFILEINPATHCALLBACK)(
    __in PCSTR filename,
    __in PVOID context
    );

BOOL
IMAGEAPI
SymFindFileInPath(
    __in HANDLE hprocess,
    __in_opt PCSTR SearchPath,
    __in PCSTR FileName,
    __in_opt PVOID id,
    __in DWORD two,
    __in DWORD three,
    __in DWORD flags,
    __out_ecount(MAX_PATH + 1) PSTR FoundFile,
    __in_opt PFINDFILEINPATHCALLBACK callback,
    __in_opt PVOID context
    );

typedef BOOL
(CALLBACK *PFINDFILEINPATHCALLBACKW)(
    __in PCWSTR filename,
    __in PVOID context
    );

BOOL
IMAGEAPI
SymFindFileInPathW(
    __in HANDLE hprocess,
    __in_opt PCWSTR SearchPath,
    __in PCWSTR FileName,
    __in_opt PVOID id,
    __in DWORD two,
    __in DWORD three,
    __in DWORD flags,
    __out_ecount(MAX_PATH + 1) PWSTR FoundFile,
    __in_opt PFINDFILEINPATHCALLBACKW callback,
    __in_opt PVOID context
    );

typedef BOOL
(CALLBACK *PFIND_EXE_FILE_CALLBACK)(
    __in HANDLE FileHandle,
    __in PCSTR FileName,
    __in_opt PVOID CallerData
    );

HANDLE
IMAGEAPI
SymFindExecutableImage(
    __in HANDLE hProcess,
    __in PCSTR FileName,
    __out_ecount(MAX_PATH + 1) PSTR ImageFilePath,
    __in PFIND_EXE_FILE_CALLBACK Callback,
    __in PVOID CallerData
    );

typedef BOOL
(CALLBACK *PFIND_EXE_FILE_CALLBACKW)(
    __in HANDLE FileHandle,
    __in PCWSTR FileName,
    __in_opt PVOID CallerData
    );

HANDLE
IMAGEAPI
SymFindExecutableImageW(
    __in HANDLE hProcess,
    __in PCWSTR FileName,
    __out_ecount(MAX_PATH + 1) PWSTR ImageFilePath,
    __in PFIND_EXE_FILE_CALLBACKW Callback,
    __in PVOID CallerData
    );

HANDLE
IMAGEAPI
FindExecutableImage(
    __in PCSTR FileName,
    __in PCSTR SymbolPath,
    __out_ecount(MAX_PATH + 1) PSTR ImageFilePath
    );

HANDLE
IMAGEAPI
FindExecutableImageEx(
    __in PCSTR FileName,
    __in PCSTR SymbolPath,
    __out_ecount(MAX_PATH + 1) PSTR ImageFilePath,
    __in_opt PFIND_EXE_FILE_CALLBACK Callback,
    __in_opt PVOID CallerData
    );

HANDLE
IMAGEAPI
FindExecutableImageExW(
    __in PCWSTR FileName,
    __in PCWSTR SymbolPath,
    __out_ecount(MAX_PATH + 1) PWSTR ImageFilePath,
    __in_opt PFIND_EXE_FILE_CALLBACKW Callback,
    __in PVOID CallerData
    );

PIMAGE_NT_HEADERS
IMAGEAPI
ImageNtHeader (
    __in PVOID Base
    );

PVOID
IMAGEAPI
ImageDirectoryEntryToDataEx (
    __in PVOID Base,
    __in BOOLEAN MappedAsImage,
    __in USHORT DirectoryEntry,
    __out PULONG Size,
    __out_opt PIMAGE_SECTION_HEADER *FoundHeader
    );

PVOID
IMAGEAPI
ImageDirectoryEntryToData (
    __in PVOID Base,
    __in BOOLEAN MappedAsImage,
    __in USHORT DirectoryEntry,
    __out PULONG Size
    );

PIMAGE_SECTION_HEADER
IMAGEAPI
ImageRvaToSection(
    __in PIMAGE_NT_HEADERS NtHeaders,
    __in PVOID Base,
    __in ULONG Rva
    );

PVOID
IMAGEAPI
ImageRvaToVa(
    __in PIMAGE_NT_HEADERS NtHeaders,
    __in PVOID Base,
    __in ULONG Rva,
    __in_opt OUT PIMAGE_SECTION_HEADER *LastRvaSection
    );

#ifndef _WIN64


typedef struct _IMAGE_DEBUG_INFORMATION {
    LIST_ENTRY List;
    DWORD ReservedSize;
    PVOID ReservedMappedBase;
    USHORT ReservedMachine;
    USHORT ReservedCharacteristics;
    DWORD ReservedCheckSum;
    DWORD ImageBase;
    DWORD SizeOfImage;

    DWORD ReservedNumberOfSections;
    PIMAGE_SECTION_HEADER ReservedSections;

    DWORD ReservedExportedNamesSize;
    PSTR ReservedExportedNames;

    DWORD ReservedNumberOfFunctionTableEntries;
    PIMAGE_FUNCTION_ENTRY ReservedFunctionTableEntries;
    DWORD ReservedLowestFunctionStartingAddress;
    DWORD ReservedHighestFunctionEndingAddress;

    DWORD ReservedNumberOfFpoTableEntries;
    PFPO_DATA ReservedFpoTableEntries;

    DWORD SizeOfCoffSymbols;
    PIMAGE_COFF_SYMBOLS_HEADER CoffSymbols;

    DWORD ReservedSizeOfCodeViewSymbols;
    PVOID ReservedCodeViewSymbols;

    PSTR ImageFilePath;
    PSTR ImageFileName;
    PSTR ReservedDebugFilePath;

    DWORD ReservedTimeDateStamp;

    BOOL ReservedRomImage;
    PIMAGE_DEBUG_DIRECTORY ReservedDebugDirectory;
    DWORD ReservedNumberOfDebugDirectories;

    DWORD ReservedOriginalFunctionTableBaseAddress;

    DWORD Reserved[ 2 ];

} IMAGE_DEBUG_INFORMATION, *PIMAGE_DEBUG_INFORMATION;


PIMAGE_DEBUG_INFORMATION
IMAGEAPI
MapDebugInformation(
    __in_opt HANDLE FileHandle,
    __in PCSTR FileName,
    __in_opt PCSTR SymbolPath,
    __in ULONG ImageBase
    );

BOOL
IMAGEAPI
UnmapDebugInformation(
    __out_xcount(unknown) PIMAGE_DEBUG_INFORMATION DebugInfo
    );

#endif

BOOL
IMAGEAPI
SearchTreeForFile(
    __in PCSTR RootPath,
    __in PCSTR InputPathName,
    __out_ecount(MAX_PATH + 1) PSTR OutputPathBuffer
    );

BOOL
IMAGEAPI
SearchTreeForFileW(
    __in PCWSTR RootPath,
    __in PCWSTR InputPathName,
    __out_ecount(MAX_PATH + 1) PWSTR OutputPathBuffer
    );

typedef BOOL
(CALLBACK *PENUMDIRTREE_CALLBACK)(
    __in PCSTR FilePath,
    __in_opt PVOID CallerData
    );

BOOL
IMAGEAPI
EnumDirTree(
    __in_opt HANDLE hProcess,
    __in PCSTR RootPath,
    __in PCSTR InputPathName,
    __out_ecount_opt(MAX_PATH + 1) PSTR OutputPathBuffer,
    __in_opt PENUMDIRTREE_CALLBACK cb,
    __in_opt PVOID data
    );

typedef BOOL
(CALLBACK *PENUMDIRTREE_CALLBACKW)(
    __in PCWSTR FilePath,
    __in_opt PVOID CallerData
    );

BOOL
IMAGEAPI
EnumDirTreeW(
    __in_opt HANDLE hProcess,
    __in PCWSTR RootPath,
    __in PCWSTR InputPathName,
    __out_ecount_opt(MAX_PATH + 1) PWSTR OutputPathBuffer,
    __in_opt PENUMDIRTREE_CALLBACKW cb,
    __in_opt PVOID data
    );

BOOL
IMAGEAPI
MakeSureDirectoryPathExists(
    __in PCSTR DirPath
    );





#define UNDNAME_COMPLETE (0x0000)
#define UNDNAME_NO_LEADING_UNDERSCORES (0x0001)
#define UNDNAME_NO_MS_KEYWORDS (0x0002)
#define UNDNAME_NO_FUNCTION_RETURNS (0x0004)
#define UNDNAME_NO_ALLOCATION_MODEL (0x0008)
#define UNDNAME_NO_ALLOCATION_LANGUAGE (0x0010)
#define UNDNAME_NO_MS_THISTYPE (0x0020)
#define UNDNAME_NO_CV_THISTYPE (0x0040)
#define UNDNAME_NO_THISTYPE (0x0060)
#define UNDNAME_NO_ACCESS_SPECIFIERS (0x0080)
#define UNDNAME_NO_THROW_SIGNATURES (0x0100)
#define UNDNAME_NO_MEMBER_TYPE (0x0200)
#define UNDNAME_NO_RETURN_UDT_MODEL (0x0400)
#define UNDNAME_32_BIT_DECODE (0x0800)
#define UNDNAME_NAME_ONLY (0x1000)

#define UNDNAME_NO_ARGUMENTS (0x2000)
#define UNDNAME_NO_SPECIAL_SYMS (0x4000)

DWORD
IMAGEAPI
WINAPI
UnDecorateSymbolName(
    __in PCSTR name,
    __out_ecount(maxStringLength) PSTR outputString,
    __in DWORD maxStringLength,
    __in DWORD flags
    );

DWORD
IMAGEAPI
WINAPI
UnDecorateSymbolNameW(
    __in PCWSTR name,
    __out_ecount(maxStringLength) PWSTR outputString,
    __in DWORD maxStringLength,
    __in DWORD flags
    );







#define DBHHEADER_DEBUGDIRS 0x1
#define DBHHEADER_CVMISC 0x2
#define DBHHEADER_PDBGUID 0x3
typedef struct _MODLOAD_DATA {
    DWORD ssize;
    DWORD ssig;
    PVOID data;
    DWORD size;
    DWORD flags;
} MODLOAD_DATA, *PMODLOAD_DATA;

typedef struct _MODLOAD_CVMISC {
    DWORD oCV;
    size_t cCV;
    DWORD oMisc;
    size_t cMisc;
    DWORD dtImage;
    DWORD cImage;
} MODLOAD_CVMISC, *PMODLOAD_CVMISC;

typedef struct _MODLOAD_PDBGUID_PDBAGE {
    GUID PdbGuid;
    DWORD PdbAge;
} MODLOAD_PDBGUID_PDBAGE, *PMODLOAD_PDBGUID_PDBAGE;





typedef enum {
    AddrMode1616,
    AddrMode1632,
    AddrModeReal,
    AddrModeFlat
} ADDRESS_MODE;

typedef struct _tagADDRESS64 {
    DWORD64 Offset;
    WORD Segment;
    ADDRESS_MODE Mode;
} ADDRESS64, *LPADDRESS64;

#if !defined(_IMAGEHLP_SOURCE_) && defined(_IMAGEHLP64)
#define ADDRESS ADDRESS64
#define LPADDRESS LPADDRESS64
#else
typedef struct _tagADDRESS {
    DWORD Offset;
    WORD Segment;
    ADDRESS_MODE Mode;
} ADDRESS, *LPADDRESS;

__inline
void
Address32To64(
    __in LPADDRESS a32,
    __out LPADDRESS64 a64
    )
{
    a64->Offset = (ULONG64)(LONG64)(LONG)a32->Offset;
    a64->Segment = a32->Segment;
    a64->Mode = a32->Mode;
}

__inline
void
Address64To32(
    __in LPADDRESS64 a64,
    __out LPADDRESS a32
    )
{
    a32->Offset = (ULONG)a64->Offset;
    a32->Segment = a64->Segment;
    a32->Mode = a64->Mode;
}
#endif
# 633 "project/mimikatz/inc/DbgHelp.h"
typedef struct _KDHELP64 {





    DWORD64 Thread;





    DWORD ThCallbackStack;





    DWORD ThCallbackBStore;





    DWORD NextCallback;


    DWORD FramePointer;





    DWORD64 KiCallUserMode;




    DWORD64 KeUserCallbackDispatcher;




    DWORD64 SystemRangeStart;





    DWORD64 KiUserExceptionDispatcher;




    DWORD64 StackBase;
    DWORD64 StackLimit;

    DWORD64 Reserved[5];

} KDHELP64, *PKDHELP64;

#if !defined(_IMAGEHLP_SOURCE_) && defined(_IMAGEHLP64)
#define KDHELP KDHELP64
#define PKDHELP PKDHELP64
#else
typedef struct _KDHELP {





    DWORD Thread;





    DWORD ThCallbackStack;





    DWORD NextCallback;


    DWORD FramePointer;




    DWORD KiCallUserMode;




    DWORD KeUserCallbackDispatcher;




    DWORD SystemRangeStart;





    DWORD ThCallbackBStore;





    DWORD KiUserExceptionDispatcher;




    DWORD StackBase;
    DWORD StackLimit;

    DWORD Reserved[5];

} KDHELP, *PKDHELP;

__inline
void
KdHelp32To64(
    __in PKDHELP p32,
    __out PKDHELP64 p64
    )
{
    p64->Thread = p32->Thread;
    p64->ThCallbackStack = p32->ThCallbackStack;
    p64->NextCallback = p32->NextCallback;
    p64->FramePointer = p32->FramePointer;
    p64->KiCallUserMode = p32->KiCallUserMode;
    p64->KeUserCallbackDispatcher = p32->KeUserCallbackDispatcher;
    p64->SystemRangeStart = p32->SystemRangeStart;
    p64->KiUserExceptionDispatcher = p32->KiUserExceptionDispatcher;
    p64->StackBase = p32->StackBase;
    p64->StackLimit = p32->StackLimit;
}
#endif

typedef struct _tagSTACKFRAME64 {
    ADDRESS64 AddrPC;
    ADDRESS64 AddrReturn;
    ADDRESS64 AddrFrame;
    ADDRESS64 AddrStack;
    ADDRESS64 AddrBStore;
    PVOID FuncTableEntry;
    DWORD64 Params[4];
    BOOL Far;
    BOOL Virtual;
    DWORD64 Reserved[3];
    KDHELP64 KdHelp;
} STACKFRAME64, *LPSTACKFRAME64;

#if !defined(_IMAGEHLP_SOURCE_) && defined(_IMAGEHLP64)
#define STACKFRAME STACKFRAME64
#define LPSTACKFRAME LPSTACKFRAME64
#else
typedef struct _tagSTACKFRAME {
    ADDRESS AddrPC;
    ADDRESS AddrReturn;
    ADDRESS AddrFrame;
    ADDRESS AddrStack;
    PVOID FuncTableEntry;
    DWORD Params[4];
    BOOL Far;
    BOOL Virtual;
    DWORD Reserved[3];
    KDHELP KdHelp;
    ADDRESS AddrBStore;
} STACKFRAME, *LPSTACKFRAME;
#endif


typedef
BOOL
(__stdcall *PREAD_PROCESS_MEMORY_ROUTINE64)(
    __in HANDLE hProcess,
    __in DWORD64 qwBaseAddress,
    __out_bcount(nSize) PVOID lpBuffer,
    __in DWORD nSize,
    __out LPDWORD lpNumberOfBytesRead
    );

typedef
PVOID
(__stdcall *PFUNCTION_TABLE_ACCESS_ROUTINE64)(
    __in HANDLE ahProcess,
    __in DWORD64 AddrBase
    );

typedef
DWORD64
(__stdcall *PGET_MODULE_BASE_ROUTINE64)(
    __in HANDLE hProcess,
    __in DWORD64 Address
    );

typedef
DWORD64
(__stdcall *PTRANSLATE_ADDRESS_ROUTINE64)(
    __in HANDLE hProcess,
    __in HANDLE hThread,
    __in LPADDRESS64 lpaddr
    );

BOOL
IMAGEAPI
StackWalk64(
    __in DWORD MachineType,
    __in HANDLE hProcess,
    __in HANDLE hThread,
    __inout LPSTACKFRAME64 StackFrame,
    __inout PVOID ContextRecord,
    __in_opt PREAD_PROCESS_MEMORY_ROUTINE64 ReadMemoryRoutine,
    __in_opt PFUNCTION_TABLE_ACCESS_ROUTINE64 FunctionTableAccessRoutine,
    __in_opt PGET_MODULE_BASE_ROUTINE64 GetModuleBaseRoutine,
    __in_opt PTRANSLATE_ADDRESS_ROUTINE64 TranslateAddress
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(_IMAGEHLP64)

#define PREAD_PROCESS_MEMORY_ROUTINE PREAD_PROCESS_MEMORY_ROUTINE64
#define PFUNCTION_TABLE_ACCESS_ROUTINE PFUNCTION_TABLE_ACCESS_ROUTINE64
#define PGET_MODULE_BASE_ROUTINE PGET_MODULE_BASE_ROUTINE64
#define PTRANSLATE_ADDRESS_ROUTINE PTRANSLATE_ADDRESS_ROUTINE64

#define StackWalk StackWalk64

#else

typedef
BOOL
(__stdcall *PREAD_PROCESS_MEMORY_ROUTINE)(
    __in HANDLE hProcess,
    __in DWORD lpBaseAddress,
    __out_bcount(nSize) PVOID lpBuffer,
    __in DWORD nSize,
    __out PDWORD lpNumberOfBytesRead
    );

typedef
PVOID
(__stdcall *PFUNCTION_TABLE_ACCESS_ROUTINE)(
    __in HANDLE hProcess,
    __in DWORD AddrBase
    );

typedef
DWORD
(__stdcall *PGET_MODULE_BASE_ROUTINE)(
    __in HANDLE hProcess,
    __in DWORD Address
    );

typedef
DWORD
(__stdcall *PTRANSLATE_ADDRESS_ROUTINE)(
    __in HANDLE hProcess,
    __in HANDLE hThread,
    __out LPADDRESS lpaddr
    );

BOOL
IMAGEAPI
StackWalk(
    DWORD MachineType,
    __in HANDLE hProcess,
    __in HANDLE hThread,
    __inout LPSTACKFRAME StackFrame,
    __inout PVOID ContextRecord,
    __in_opt PREAD_PROCESS_MEMORY_ROUTINE ReadMemoryRoutine,
    __in_opt PFUNCTION_TABLE_ACCESS_ROUTINE FunctionTableAccessRoutine,
    __in_opt PGET_MODULE_BASE_ROUTINE GetModuleBaseRoutine,
    __in_opt PTRANSLATE_ADDRESS_ROUTINE TranslateAddress
    );

#endif


#define API_VERSION_NUMBER 11

typedef struct API_VERSION {
    USHORT MajorVersion;
    USHORT MinorVersion;
    USHORT Revision;
    USHORT Reserved;
} API_VERSION, *LPAPI_VERSION;

LPAPI_VERSION
IMAGEAPI
ImagehlpApiVersion(
    VOID
    );

LPAPI_VERSION
IMAGEAPI
ImagehlpApiVersionEx(
    __in LPAPI_VERSION AppVersion
    );

DWORD
IMAGEAPI
GetTimestampForLoadedLibrary(
    __in HMODULE Module
    );




typedef BOOL
(CALLBACK *PSYM_ENUMMODULES_CALLBACK64)(
    __in PCSTR ModuleName,
    __in DWORD64 BaseOfDll,
    __in_opt PVOID UserContext
    );

typedef BOOL
(CALLBACK *PSYM_ENUMMODULES_CALLBACKW64)(
    __in PCWSTR ModuleName,
    __in DWORD64 BaseOfDll,
    __in_opt PVOID UserContext
    );

typedef BOOL
(CALLBACK *PENUMLOADED_MODULES_CALLBACK64)(
    __in PCSTR ModuleName,
    __in DWORD64 ModuleBase,
    __in ULONG ModuleSize,
    __in_opt PVOID UserContext
    );

typedef BOOL
(CALLBACK *PENUMLOADED_MODULES_CALLBACKW64)(
    __in PCWSTR ModuleName,
    __in DWORD64 ModuleBase,
    __in ULONG ModuleSize,
    __in_opt PVOID UserContext
    );

typedef BOOL
(CALLBACK *PSYM_ENUMSYMBOLS_CALLBACK64)(
    __in PCSTR SymbolName,
    __in DWORD64 SymbolAddress,
    __in ULONG SymbolSize,
    __in_opt PVOID UserContext
    );

typedef BOOL
(CALLBACK *PSYM_ENUMSYMBOLS_CALLBACK64W)(
    __in PCWSTR SymbolName,
    __in DWORD64 SymbolAddress,
    __in ULONG SymbolSize,
    __in_opt PVOID UserContext
    );

typedef BOOL
(CALLBACK *PSYMBOL_REGISTERED_CALLBACK64)(
    __in HANDLE hProcess,
    __in ULONG ActionCode,
    __in_opt ULONG64 CallbackData,
    __in_opt ULONG64 UserContext
    );

typedef
PVOID
(CALLBACK *PSYMBOL_FUNCENTRY_CALLBACK)(
    __in HANDLE hProcess,
    __in DWORD AddrBase,
    __in_opt PVOID UserContext
    );

typedef
PVOID
(CALLBACK *PSYMBOL_FUNCENTRY_CALLBACK64)(
    __in HANDLE hProcess,
    __in ULONG64 AddrBase,
    __in ULONG64 UserContext
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(_IMAGEHLP64)

#define PSYM_ENUMMODULES_CALLBACK PSYM_ENUMMODULES_CALLBACK64
#define PSYM_ENUMSYMBOLS_CALLBACK PSYM_ENUMSYMBOLS_CALLBACK64
#define PSYM_ENUMSYMBOLS_CALLBACKW PSYM_ENUMSYMBOLS_CALLBACK64W
#define PENUMLOADED_MODULES_CALLBACK PENUMLOADED_MODULES_CALLBACK64
#define PSYMBOL_REGISTERED_CALLBACK PSYMBOL_REGISTERED_CALLBACK64
#define PSYMBOL_FUNCENTRY_CALLBACK PSYMBOL_FUNCENTRY_CALLBACK64

#else

typedef BOOL
(CALLBACK *PSYM_ENUMMODULES_CALLBACK)(
    __in PCSTR ModuleName,
    __in ULONG BaseOfDll,
    __in_opt PVOID UserContext
    );

typedef BOOL
(CALLBACK *PSYM_ENUMSYMBOLS_CALLBACK)(
    __in PCSTR SymbolName,
    __in ULONG SymbolAddress,
    __in ULONG SymbolSize,
    __in_opt PVOID UserContext
    );

typedef BOOL
(CALLBACK *PSYM_ENUMSYMBOLS_CALLBACKW)(
    __in PCWSTR SymbolName,
    __in ULONG SymbolAddress,
    __in ULONG SymbolSize,
    __in_opt PVOID UserContext
    );

typedef BOOL
(CALLBACK *PENUMLOADED_MODULES_CALLBACK)(
    __in PCSTR ModuleName,
    __in ULONG ModuleBase,
    __in ULONG ModuleSize,
    __in_opt PVOID UserContext
    );

typedef BOOL
(CALLBACK *PSYMBOL_REGISTERED_CALLBACK)(
    __in HANDLE hProcess,
    __in ULONG ActionCode,
    __in_opt PVOID CallbackData,
    __in_opt PVOID UserContext
    );

#endif
# 1079 "project/mimikatz/inc/DbgHelp.h"
#ifdef _NO_CVCONST_H



enum SymTagEnum
{
    SymTagNull,
    SymTagExe,
    SymTagCompiland,
    SymTagCompilandDetails,
    SymTagCompilandEnv,
    SymTagFunction,
    SymTagBlock,
    SymTagData,
    SymTagAnnotation,
    SymTagLabel,
    SymTagPublicSymbol,
    SymTagUDT,
    SymTagEnum,
    SymTagFunctionType,
    SymTagPointerType,
    SymTagArrayType,
    SymTagBaseType,
    SymTagTypedef,
    SymTagBaseClass,
    SymTagFriend,
    SymTagFunctionArgType,
    SymTagFuncDebugStart,
    SymTagFuncDebugEnd,
    SymTagUsingNamespace,
    SymTagVTableShape,
    SymTagVTable,
    SymTagCustom,
    SymTagThunk,
    SymTagCustomType,
    SymTagManagedType,
    SymTagDimension,
    SymTagMax
};

#endif





#define SYMFLAG_VALUEPRESENT 0x00000001
#define SYMFLAG_REGISTER 0x00000008
#define SYMFLAG_REGREL 0x00000010
#define SYMFLAG_FRAMEREL 0x00000020
#define SYMFLAG_PARAMETER 0x00000040
#define SYMFLAG_LOCAL 0x00000080
#define SYMFLAG_CONSTANT 0x00000100
#define SYMFLAG_EXPORT 0x00000200
#define SYMFLAG_FORWARDER 0x00000400
#define SYMFLAG_FUNCTION 0x00000800
#define SYMFLAG_VIRTUAL 0x00001000
#define SYMFLAG_THUNK 0x00002000
#define SYMFLAG_TLSREL 0x00004000
#define SYMFLAG_SLOT 0x00008000
#define SYMFLAG_ILREL 0x00010000
#define SYMFLAG_METADATA 0x00020000
#define SYMFLAG_CLR_TOKEN 0x00040000




#define SYMFLAG_RESET 0x80000000




typedef enum {
    SymNone = 0,
    SymCoff,
    SymCv,
    SymPdb,
    SymExport,
    SymDeferred,
    SymSym,
    SymDia,
    SymVirtual,
    NumSymTypes
} SYM_TYPE;





typedef struct _IMAGEHLP_SYMBOL64 {
    DWORD SizeOfStruct;
    DWORD64 Address;
    DWORD Size;
    DWORD Flags;
    DWORD MaxNameLength;
    CHAR Name[1];
} IMAGEHLP_SYMBOL64, *PIMAGEHLP_SYMBOL64;

typedef struct _IMAGEHLP_SYMBOL64_PACKAGE {
    IMAGEHLP_SYMBOL64 sym;
    CHAR name[MAX_SYM_NAME + 1];
} IMAGEHLP_SYMBOL64_PACKAGE, *PIMAGEHLP_SYMBOL64_PACKAGE;

typedef struct _IMAGEHLP_SYMBOLW64 {
    DWORD SizeOfStruct;
    DWORD64 Address;
    DWORD Size;
    DWORD Flags;
    DWORD MaxNameLength;
    WCHAR Name[1];
} IMAGEHLP_SYMBOLW64, *PIMAGEHLP_SYMBOLW64;

typedef struct _IMAGEHLP_SYMBOLW64_PACKAGE {
    IMAGEHLP_SYMBOLW64 sym;
    WCHAR name[MAX_SYM_NAME + 1];
} IMAGEHLP_SYMBOLW64_PACKAGE, *PIMAGEHLP_SYMBOLW64_PACKAGE;

#if !defined(_IMAGEHLP_SOURCE_) && defined(_IMAGEHLP64)

 #define IMAGEHLP_SYMBOL IMAGEHLP_SYMBOL64
 #define PIMAGEHLP_SYMBOL PIMAGEHLP_SYMBOL64
 #define IMAGEHLP_SYMBOL_PACKAGE IMAGEHLP_SYMBOL64_PACKAGE
 #define PIMAGEHLP_SYMBOL_PACKAGE PIMAGEHLP_SYMBOL64_PACKAGE
 #define IMAGEHLP_SYMBOLW IMAGEHLP_SYMBOLW64
 #define PIMAGEHLP_SYMBOLW PIMAGEHLP_SYMBOLW64
 #define IMAGEHLP_SYMBOLW_PACKAGE IMAGEHLP_SYMBOLW64_PACKAGE
 #define PIMAGEHLP_SYMBOLW_PACKAGE PIMAGEHLP_SYMBOLW64_PACKAGE

#else

 typedef struct _IMAGEHLP_SYMBOL {
     DWORD SizeOfStruct;
     DWORD Address;
     DWORD Size;
     DWORD Flags;
     DWORD MaxNameLength;
     CHAR Name[1];
 } IMAGEHLP_SYMBOL, *PIMAGEHLP_SYMBOL;

 typedef struct _IMAGEHLP_SYMBOL_PACKAGE {
     IMAGEHLP_SYMBOL sym;
     CHAR name[MAX_SYM_NAME + 1];
 } IMAGEHLP_SYMBOL_PACKAGE, *PIMAGEHLP_SYMBOL_PACKAGE;

 typedef struct _IMAGEHLP_SYMBOLW {
     DWORD SizeOfStruct;
     DWORD Address;
     DWORD Size;
     DWORD Flags;
     DWORD MaxNameLength;
     WCHAR Name[1];
 } IMAGEHLP_SYMBOLW, *PIMAGEHLP_SYMBOLW;

 typedef struct _IMAGEHLP_SYMBOLW_PACKAGE {
     IMAGEHLP_SYMBOLW sym;
     WCHAR name[MAX_SYM_NAME + 1];
 } IMAGEHLP_SYMBOLW_PACKAGE, *PIMAGEHLP_SYMBOLW_PACKAGE;

#endif





typedef struct _IMAGEHLP_MODULE64 {
    DWORD SizeOfStruct;
    DWORD64 BaseOfImage;
    DWORD ImageSize;
    DWORD TimeDateStamp;
    DWORD CheckSum;
    DWORD NumSyms;
    SYM_TYPE SymType;
    CHAR ModuleName[32];
    CHAR ImageName[256];
    CHAR LoadedImageName[256];

    CHAR LoadedPdbName[256];
    DWORD CVSig;
    CHAR CVData[MAX_PATH * 3];
    DWORD PdbSig;
    GUID PdbSig70;
    DWORD PdbAge;
    BOOL PdbUnmatched;
    BOOL DbgUnmatched;
    BOOL LineNumbers;
    BOOL GlobalSymbols;
    BOOL TypeInfo;

    BOOL SourceIndexed;
    BOOL Publics;
} IMAGEHLP_MODULE64, *PIMAGEHLP_MODULE64;

typedef struct _IMAGEHLP_MODULEW64 {
    DWORD SizeOfStruct;
    DWORD64 BaseOfImage;
    DWORD ImageSize;
    DWORD TimeDateStamp;
    DWORD CheckSum;
    DWORD NumSyms;
    SYM_TYPE SymType;
    WCHAR ModuleName[32];
    WCHAR ImageName[256];

    WCHAR LoadedImageName[256];
    WCHAR LoadedPdbName[256];
    DWORD CVSig;
    WCHAR CVData[MAX_PATH * 3];
    DWORD PdbSig;
    GUID PdbSig70;
    DWORD PdbAge;
    BOOL PdbUnmatched;
    BOOL DbgUnmatched;
    BOOL LineNumbers;
    BOOL GlobalSymbols;
    BOOL TypeInfo;

    BOOL SourceIndexed;
    BOOL Publics;
} IMAGEHLP_MODULEW64, *PIMAGEHLP_MODULEW64;

#if !defined(_IMAGEHLP_SOURCE_) && defined(_IMAGEHLP64)
#define IMAGEHLP_MODULE IMAGEHLP_MODULE64
#define PIMAGEHLP_MODULE PIMAGEHLP_MODULE64
#define IMAGEHLP_MODULEW IMAGEHLP_MODULEW64
#define PIMAGEHLP_MODULEW PIMAGEHLP_MODULEW64
#else
typedef struct _IMAGEHLP_MODULE {
    DWORD SizeOfStruct;
    DWORD BaseOfImage;
    DWORD ImageSize;
    DWORD TimeDateStamp;
    DWORD CheckSum;
    DWORD NumSyms;
    SYM_TYPE SymType;
    CHAR ModuleName[32];
    CHAR ImageName[256];
    CHAR LoadedImageName[256];
} IMAGEHLP_MODULE, *PIMAGEHLP_MODULE;

typedef struct _IMAGEHLP_MODULEW {
    DWORD SizeOfStruct;
    DWORD BaseOfImage;
    DWORD ImageSize;
    DWORD TimeDateStamp;
    DWORD CheckSum;
    DWORD NumSyms;
    SYM_TYPE SymType;
    WCHAR ModuleName[32];
    WCHAR ImageName[256];
    WCHAR LoadedImageName[256];
} IMAGEHLP_MODULEW, *PIMAGEHLP_MODULEW;
#endif





typedef struct _IMAGEHLP_LINE64 {
    DWORD SizeOfStruct;
    PVOID Key;
    DWORD LineNumber;
    PCHAR FileName;
    DWORD64 Address;
} IMAGEHLP_LINE64, *PIMAGEHLP_LINE64;

typedef struct _IMAGEHLP_LINEW64 {
    DWORD SizeOfStruct;
    PVOID Key;
    DWORD LineNumber;
    PWSTR FileName;
    DWORD64 Address;
} IMAGEHLP_LINEW64, *PIMAGEHLP_LINEW64;

#if !defined(_IMAGEHLP_SOURCE_) && defined(_IMAGEHLP64)
#define IMAGEHLP_LINE IMAGEHLP_LINE64
#define PIMAGEHLP_LINE PIMAGEHLP_LINE64
#else
typedef struct _IMAGEHLP_LINE {
    DWORD SizeOfStruct;
    PVOID Key;
    DWORD LineNumber;
    PCHAR FileName;
    DWORD Address;
} IMAGEHLP_LINE, *PIMAGEHLP_LINE;

typedef struct _IMAGEHLP_LINEW {
    DWORD SizeOfStruct;
    PVOID Key;
    DWORD LineNumber;
    PCHAR FileName;
    DWORD64 Address;
} IMAGEHLP_LINEW, *PIMAGEHLP_LINEW;
#endif





typedef struct _SOURCEFILE {
    DWORD64 ModBase;
    PCHAR FileName;
} SOURCEFILE, *PSOURCEFILE;

typedef struct _SOURCEFILEW {
    DWORD64 ModBase;
    PWSTR FileName;
} SOURCEFILEW, *PSOURCEFILEW;





#define CBA_DEFERRED_SYMBOL_LOAD_START 0x00000001
#define CBA_DEFERRED_SYMBOL_LOAD_COMPLETE 0x00000002
#define CBA_DEFERRED_SYMBOL_LOAD_FAILURE 0x00000003
#define CBA_SYMBOLS_UNLOADED 0x00000004
#define CBA_DUPLICATE_SYMBOL 0x00000005
#define CBA_READ_MEMORY 0x00000006
#define CBA_DEFERRED_SYMBOL_LOAD_CANCEL 0x00000007
#define CBA_SET_OPTIONS 0x00000008
#define CBA_EVENT 0x00000010
#define CBA_DEFERRED_SYMBOL_LOAD_PARTIAL 0x00000020
#define CBA_DEBUG_INFO 0x10000000
#define CBA_SRCSRV_INFO 0x20000000
#define CBA_SRCSRV_EVENT 0x40000000

typedef struct _IMAGEHLP_CBA_READ_MEMORY {
    DWORD64 addr;
    PVOID buf;
    DWORD bytes;
    DWORD *bytesread;
} IMAGEHLP_CBA_READ_MEMORY, *PIMAGEHLP_CBA_READ_MEMORY;

enum {
    sevInfo = 0,
    sevProblem,
    sevAttn,
    sevFatal,
    sevMax
};

#define EVENT_SRCSPEW_START 100
#define EVENT_SRCSPEW 100
#define EVENT_SRCSPEW_END 199

typedef struct _IMAGEHLP_CBA_EVENT {
    DWORD severity;
    DWORD code;
    PCHAR desc;
    PVOID object;
} IMAGEHLP_CBA_EVENT, *PIMAGEHLP_CBA_EVENT;

typedef struct _IMAGEHLP_CBA_EVENTW {
    DWORD severity;
    DWORD code;
    PCWSTR desc;
    PVOID object;
} IMAGEHLP_CBA_EVENTW, *PIMAGEHLP_CBA_EVENTW;

typedef struct _IMAGEHLP_DEFERRED_SYMBOL_LOAD64 {
    DWORD SizeOfStruct;
    DWORD64 BaseOfImage;
    DWORD CheckSum;
    DWORD TimeDateStamp;
    CHAR FileName[MAX_PATH];
    BOOLEAN Reparse;
    HANDLE hFile;
    DWORD Flags;
} IMAGEHLP_DEFERRED_SYMBOL_LOAD64, *PIMAGEHLP_DEFERRED_SYMBOL_LOAD64;

typedef struct _IMAGEHLP_DEFERRED_SYMBOL_LOADW64 {
    DWORD SizeOfStruct;
    DWORD64 BaseOfImage;
    DWORD CheckSum;
    DWORD TimeDateStamp;
    WCHAR FileName[MAX_PATH + 1];
    BOOLEAN Reparse;
    HANDLE hFile;
    DWORD Flags;
} IMAGEHLP_DEFERRED_SYMBOL_LOADW64, *PIMAGEHLP_DEFERRED_SYMBOL_LOADW64;

#define DSLFLAG_MISMATCHED_PDB 0x1
#define DSLFLAG_MISMATCHED_DBG 0x2

#if !defined(_IMAGEHLP_SOURCE_) && defined(_IMAGEHLP64)
#define IMAGEHLP_DEFERRED_SYMBOL_LOAD IMAGEHLP_DEFERRED_SYMBOL_LOAD64
#define PIMAGEHLP_DEFERRED_SYMBOL_LOAD PIMAGEHLP_DEFERRED_SYMBOL_LOAD64
#else
typedef struct _IMAGEHLP_DEFERRED_SYMBOL_LOAD {
    DWORD SizeOfStruct;
    DWORD BaseOfImage;
    DWORD CheckSum;
    DWORD TimeDateStamp;
    CHAR FileName[MAX_PATH];
    BOOLEAN Reparse;
    HANDLE hFile;
} IMAGEHLP_DEFERRED_SYMBOL_LOAD, *PIMAGEHLP_DEFERRED_SYMBOL_LOAD;
#endif

typedef struct _IMAGEHLP_DUPLICATE_SYMBOL64 {
    DWORD SizeOfStruct;
    DWORD NumberOfDups;
    PIMAGEHLP_SYMBOL64 Symbol;
    DWORD SelectedSymbol;
} IMAGEHLP_DUPLICATE_SYMBOL64, *PIMAGEHLP_DUPLICATE_SYMBOL64;

#if !defined(_IMAGEHLP_SOURCE_) && defined(_IMAGEHLP64)
#define IMAGEHLP_DUPLICATE_SYMBOL IMAGEHLP_DUPLICATE_SYMBOL64
#define PIMAGEHLP_DUPLICATE_SYMBOL PIMAGEHLP_DUPLICATE_SYMBOL64
#else
typedef struct _IMAGEHLP_DUPLICATE_SYMBOL {
    DWORD SizeOfStruct;
    DWORD NumberOfDups;
    PIMAGEHLP_SYMBOL Symbol;
    DWORD SelectedSymbol;
} IMAGEHLP_DUPLICATE_SYMBOL, *PIMAGEHLP_DUPLICATE_SYMBOL;
#endif



BOOL
IMAGEAPI
SymSetParentWindow(
    __in HWND hwnd
    );

PCHAR
IMAGEAPI
SymSetHomeDirectory(
    __in_opt HANDLE hProcess,
    __in_opt PCSTR dir
    );

PWSTR
IMAGEAPI
SymSetHomeDirectoryW(
    __in_opt HANDLE hProcess,
    __in_opt PCWSTR dir
    );

PCHAR
IMAGEAPI
SymGetHomeDirectory(
    __in DWORD type,
    __out_ecount(size) PSTR dir,
    __in size_t size
    );

PWSTR
IMAGEAPI
SymGetHomeDirectoryW(
    __in DWORD type,
    __out_ecount(size) PWSTR dir,
    __in size_t size
    );

typedef enum {
    hdBase = 0,
    hdSym,
    hdSrc,
    hdMax
} DBG_HD_ENUM;

typedef struct _OMAP {
    ULONG rva;
    ULONG rvaTo;
} OMAP, *POMAP;

BOOL
IMAGEAPI
SymGetOmaps(
    __in HANDLE hProcess,
    __in DWORD64 BaseOfDll,
    __out POMAP *OmapTo,
    __out PDWORD64 cOmapTo,
    __out POMAP *OmapFrom,
    __out PDWORD64 cOmapFrom
    );





#define SYMOPT_CASE_INSENSITIVE 0x00000001
#define SYMOPT_UNDNAME 0x00000002
#define SYMOPT_DEFERRED_LOADS 0x00000004
#define SYMOPT_NO_CPP 0x00000008
#define SYMOPT_LOAD_LINES 0x00000010
#define SYMOPT_OMAP_FIND_NEAREST 0x00000020
#define SYMOPT_LOAD_ANYTHING 0x00000040
#define SYMOPT_IGNORE_CVREC 0x00000080
#define SYMOPT_NO_UNQUALIFIED_LOADS 0x00000100
#define SYMOPT_FAIL_CRITICAL_ERRORS 0x00000200
#define SYMOPT_EXACT_SYMBOLS 0x00000400
#define SYMOPT_ALLOW_ABSOLUTE_SYMBOLS 0x00000800
#define SYMOPT_IGNORE_NT_SYMPATH 0x00001000
#define SYMOPT_INCLUDE_32BIT_MODULES 0x00002000
#define SYMOPT_PUBLICS_ONLY 0x00004000
#define SYMOPT_NO_PUBLICS 0x00008000
#define SYMOPT_AUTO_PUBLICS 0x00010000
#define SYMOPT_NO_IMAGE_SEARCH 0x00020000
#define SYMOPT_SECURE 0x00040000
#define SYMOPT_NO_PROMPTS 0x00080000
#define SYMOPT_OVERWRITE 0x00100000
#define SYMOPT_IGNORE_IMAGEDIR 0x00200000
#define SYMOPT_FLAT_DIRECTORY 0x00400000
#define SYMOPT_FAVOR_COMPRESSED 0x00800000
#define SYMOPT_ALLOW_ZERO_ADDRESS 0x01000000
#define SYMOPT_DISABLE_SYMSRV_AUTODETECT 0x02000000

#define SYMOPT_DEBUG 0x80000000

DWORD
IMAGEAPI
SymSetOptions(
    __in DWORD SymOptions
    );

DWORD
IMAGEAPI
SymGetOptions(
    VOID
    );

BOOL
IMAGEAPI
SymCleanup(
    __in HANDLE hProcess
    );

BOOL
IMAGEAPI
SymMatchString(
    __in PCSTR string,
    __in PCSTR expression,
    __in BOOL fCase
    );

BOOL
IMAGEAPI
SymMatchStringA(
    __in PCSTR string,
    __in PCSTR expression,
    __in BOOL fCase
    );

BOOL
IMAGEAPI
SymMatchStringW(
    __in PCWSTR string,
    __in PCWSTR expression,
    __in BOOL fCase
    );

typedef BOOL
(CALLBACK *PSYM_ENUMSOURCEFILES_CALLBACK)(
    __in PSOURCEFILE pSourceFile,
    __in_opt PVOID UserContext
    );


#define PSYM_ENUMSOURCFILES_CALLBACK PSYM_ENUMSOURCEFILES_CALLBACK

BOOL
IMAGEAPI
SymEnumSourceFiles(
    __in HANDLE hProcess,
    __in ULONG64 ModBase,
    __in_opt PCSTR Mask,
    __in PSYM_ENUMSOURCEFILES_CALLBACK cbSrcFiles,
    __in_opt PVOID UserContext
    );

typedef BOOL
(CALLBACK *PSYM_ENUMSOURCEFILES_CALLBACKW)(
    __in PSOURCEFILEW pSourceFile,
    __in_opt PVOID UserContext
    );

BOOL
IMAGEAPI
SymEnumSourceFilesW(
    __in HANDLE hProcess,
    __in ULONG64 ModBase,
    __in_opt PCWSTR Mask,
    __in PSYM_ENUMSOURCEFILES_CALLBACKW cbSrcFiles,
    __in_opt PVOID UserContext
    );

BOOL
IMAGEAPI
SymEnumerateModules64(
    __in HANDLE hProcess,
    __in PSYM_ENUMMODULES_CALLBACK64 EnumModulesCallback,
    __in_opt PVOID UserContext
    );

BOOL
IMAGEAPI
SymEnumerateModulesW64(
    __in HANDLE hProcess,
    __in PSYM_ENUMMODULES_CALLBACKW64 EnumModulesCallback,
    __in_opt PVOID UserContext
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(_IMAGEHLP64)
#define SymEnumerateModules SymEnumerateModules64
#else
BOOL
IMAGEAPI
SymEnumerateModules(
    __in HANDLE hProcess,
    __in PSYM_ENUMMODULES_CALLBACK EnumModulesCallback,
    __in_opt PVOID UserContext
    );
#endif

BOOL
IMAGEAPI
EnumerateLoadedModulesEx(
    __in HANDLE hProcess,
    __in PENUMLOADED_MODULES_CALLBACK64 EnumLoadedModulesCallback,
    __in_opt PVOID UserContext
    );

BOOL
IMAGEAPI
EnumerateLoadedModulesExW(
    __in HANDLE hProcess,
    __in PENUMLOADED_MODULES_CALLBACKW64 EnumLoadedModulesCallback,
    __in_opt PVOID UserContext
    );

BOOL
IMAGEAPI
EnumerateLoadedModules64(
    __in HANDLE hProcess,
    __in PENUMLOADED_MODULES_CALLBACK64 EnumLoadedModulesCallback,
    __in_opt PVOID UserContext
    );

BOOL
IMAGEAPI
EnumerateLoadedModulesW64(
    __in HANDLE hProcess,
    __in PENUMLOADED_MODULES_CALLBACKW64 EnumLoadedModulesCallback,
    __in_opt PVOID UserContext
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(_IMAGEHLP64)
#define EnumerateLoadedModules EnumerateLoadedModules64
#else
BOOL
IMAGEAPI
EnumerateLoadedModules(
    __in HANDLE hProcess,
    __in PENUMLOADED_MODULES_CALLBACK EnumLoadedModulesCallback,
    __in_opt PVOID UserContext
    );
#endif

PVOID
IMAGEAPI
SymFunctionTableAccess64(
    __in HANDLE hProcess,
    __in DWORD64 AddrBase
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(_IMAGEHLP64)
#define SymFunctionTableAccess SymFunctionTableAccess64
#else
PVOID
IMAGEAPI
SymFunctionTableAccess(
    __in HANDLE hProcess,
    __in DWORD AddrBase
    );
#endif

BOOL
IMAGEAPI
SymGetUnwindInfo(
    __in HANDLE hProcess,
    __in DWORD64 Address,
    __out_bcount_opt(*Size) PVOID Buffer,
    __inout PULONG Size
    );

BOOL
IMAGEAPI
SymGetModuleInfo64(
    __in HANDLE hProcess,
    __in DWORD64 qwAddr,
    __out PIMAGEHLP_MODULE64 ModuleInfo
    );

BOOL
IMAGEAPI
SymGetModuleInfoW64(
    __in HANDLE hProcess,
    __in DWORD64 qwAddr,
    __out PIMAGEHLP_MODULEW64 ModuleInfo
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(_IMAGEHLP64)
#define SymGetModuleInfo SymGetModuleInfo64
#define SymGetModuleInfoW SymGetModuleInfoW64
#else
BOOL
IMAGEAPI
SymGetModuleInfo(
    __in HANDLE hProcess,
    __in DWORD dwAddr,
    __out PIMAGEHLP_MODULE ModuleInfo
    );

BOOL
IMAGEAPI
SymGetModuleInfoW(
    __in HANDLE hProcess,
    __in DWORD dwAddr,
    __out PIMAGEHLP_MODULEW ModuleInfo
    );
#endif

DWORD64
IMAGEAPI
SymGetModuleBase64(
    __in HANDLE hProcess,
    __in DWORD64 qwAddr
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(_IMAGEHLP64)
#define SymGetModuleBase SymGetModuleBase64
#else
DWORD
IMAGEAPI
SymGetModuleBase(
    __in HANDLE hProcess,
    __in DWORD dwAddr
    );
#endif

typedef struct _SRCCODEINFO {
    DWORD SizeOfStruct;
    PVOID Key;
    DWORD64 ModBase;
    CHAR Obj[MAX_PATH + 1];
    CHAR FileName[MAX_PATH + 1];
    DWORD LineNumber;
    DWORD64 Address;
} SRCCODEINFO, *PSRCCODEINFO;

typedef struct _SRCCODEINFOW {
    DWORD SizeOfStruct;
    PVOID Key;
    DWORD64 ModBase;
    WCHAR Obj[MAX_PATH + 1];
    WCHAR FileName[MAX_PATH + 1];
    DWORD LineNumber;
    DWORD64 Address;
} SRCCODEINFOW, *PSRCCODEINFOW;

typedef BOOL
(CALLBACK *PSYM_ENUMLINES_CALLBACK)(
    __in PSRCCODEINFO LineInfo,
    __in_opt PVOID UserContext
    );

BOOL
IMAGEAPI
SymEnumLines(
    __in HANDLE hProcess,
    __in ULONG64 Base,
    __in_opt PCSTR Obj,
    __in_opt PCSTR File,
    __in PSYM_ENUMLINES_CALLBACK EnumLinesCallback,
    __in_opt PVOID UserContext
    );

typedef BOOL
(CALLBACK *PSYM_ENUMLINES_CALLBACKW)(
    __in PSRCCODEINFOW LineInfo,
    __in_opt PVOID UserContext
    );

BOOL
IMAGEAPI
SymEnumLinesW(
    __in HANDLE hProcess,
    __in ULONG64 Base,
    __in_opt PCWSTR Obj,
    __in_opt PCWSTR File,
    __in PSYM_ENUMLINES_CALLBACKW EnumLinesCallback,
    __in_opt PVOID UserContext
    );

BOOL
IMAGEAPI
SymGetLineFromAddr64(
    __in HANDLE hProcess,
    __in DWORD64 qwAddr,
    __out PDWORD pdwDisplacement,
    __out PIMAGEHLP_LINE64 Line64
    );

BOOL
IMAGEAPI
SymGetLineFromAddrW64(
    __in HANDLE hProcess,
    __in DWORD64 dwAddr,
    __out PDWORD pdwDisplacement,
    __out PIMAGEHLP_LINEW64 Line
    );

BOOL
IMAGEAPI
SymEnumSourceLines(
    __in HANDLE hProcess,
    __in ULONG64 Base,
    __in_opt PCSTR Obj,
    __in_opt PCSTR File,
    __in_opt DWORD Line,
    __in DWORD Flags,
    __in PSYM_ENUMLINES_CALLBACK EnumLinesCallback,
    __in_opt PVOID UserContext
    );

BOOL
IMAGEAPI
SymEnumSourceLinesW(
    __in HANDLE hProcess,
    __in ULONG64 Base,
    __in_opt PCWSTR Obj,
    __in_opt PCWSTR File,
    __in_opt DWORD Line,
    __in DWORD Flags,
    __in PSYM_ENUMLINES_CALLBACKW EnumLinesCallback,
    __in_opt PVOID UserContext
    );



#define ESLFLAG_FULLPATH 0x1
#define ESLFLAG_NEAREST 0x2
#define ESLFLAG_PREV 0x4
#define ESLFLAG_NEXT 0x8

#if !defined(_IMAGEHLP_SOURCE_) && defined(_IMAGEHLP64)
#define SymGetLineFromAddr SymGetLineFromAddr64
#define SymGetLineFromAddrW SymGetLineFromAddrW64
#else
BOOL
IMAGEAPI
SymGetLineFromAddr(
    __in HANDLE hProcess,
    __in DWORD dwAddr,
    __out PDWORD pdwDisplacement,
    __out PIMAGEHLP_LINE Line
    );

BOOL
IMAGEAPI
SymGetLineFromAddrW(
    __in HANDLE hProcess,
    __in DWORD dwAddr,
    __out PDWORD pdwDisplacement,
    __out PIMAGEHLP_LINEW Line
    );
#endif

BOOL
IMAGEAPI
SymGetLineFromName64(
    __in HANDLE hProcess,
    __in_opt PCSTR ModuleName,
    __in_opt PCSTR FileName,
    __in DWORD dwLineNumber,
    __out PLONG plDisplacement,
    __inout PIMAGEHLP_LINE64 Line
    );

BOOL
IMAGEAPI
SymGetLineFromNameW64(
    __in HANDLE hProcess,
    __in_opt PCWSTR ModuleName,
    __in_opt PCWSTR FileName,
    __in DWORD dwLineNumber,
    __out PLONG plDisplacement,
    __inout PIMAGEHLP_LINEW64 Line
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(_IMAGEHLP64)
#define SymGetLineFromName SymGetLineFromName64
#else
BOOL
IMAGEAPI
SymGetLineFromName(
    __in HANDLE hProcess,
    __in_opt PCSTR ModuleName,
    __in_opt PCSTR FileName,
    __in DWORD dwLineNumber,
    __out PLONG plDisplacement,
    __inout PIMAGEHLP_LINE Line
    );
#endif

BOOL
IMAGEAPI
SymGetLineNext64(
    __in HANDLE hProcess,
    __inout PIMAGEHLP_LINE64 Line
    );

BOOL
IMAGEAPI
SymGetLineNextW64(
    __in HANDLE hProcess,
    __inout PIMAGEHLP_LINEW64 Line
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(_IMAGEHLP64)
#define SymGetLineNext SymGetLineNext64
#else
BOOL
IMAGEAPI
SymGetLineNext(
    __in HANDLE hProcess,
    __inout PIMAGEHLP_LINE Line
    );

BOOL
IMAGEAPI
SymGetLineNextW(
    __in HANDLE hProcess,
    __inout PIMAGEHLP_LINEW Line
    );
#endif

BOOL
IMAGEAPI
SymGetLinePrev64(
    __in HANDLE hProcess,
    __inout PIMAGEHLP_LINE64 Line
    );

BOOL
IMAGEAPI
SymGetLinePrevW64(
    __in HANDLE hProcess,
    __inout PIMAGEHLP_LINEW64 Line
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(_IMAGEHLP64)
#define SymGetLinePrev SymGetLinePrev64
#else
BOOL
IMAGEAPI
SymGetLinePrev(
    __in HANDLE hProcess,
    __inout PIMAGEHLP_LINE Line
    );

BOOL
IMAGEAPI
SymGetLinePrevW(
    __in HANDLE hProcess,
    __inout PIMAGEHLP_LINEW Line
    );
#endif

ULONG
IMAGEAPI
SymGetFileLineOffsets64(
    __in HANDLE hProcess,
    __in_opt PCSTR ModuleName,
    __in PCSTR FileName,
    __out_ecount(BufferLines) PDWORD64 Buffer,
    __in ULONG BufferLines
    );

BOOL
IMAGEAPI
SymMatchFileName(
    __in PCSTR FileName,
    __in PCSTR Match,
    __deref_opt_out PSTR *FileNameStop,
    __deref_opt_out PSTR *MatchStop
    );

BOOL
IMAGEAPI
SymMatchFileNameW(
    __in PCWSTR FileName,
    __in PCWSTR Match,
    __deref_opt_out PWSTR *FileNameStop,
    __deref_opt_out PWSTR *MatchStop
    );

BOOL
IMAGEAPI
SymGetSourceFile(
    __in HANDLE hProcess,
    __in ULONG64 Base,
    __in_opt PCSTR Params,
    __in PCSTR FileSpec,
    __out_ecount(Size) PSTR FilePath,
    __in DWORD Size
    );

BOOL
IMAGEAPI
SymGetSourceFileW(
    __in HANDLE hProcess,
    __in ULONG64 Base,
    __in_opt PCWSTR Params,
    __in PCWSTR FileSpec,
    __out_ecount(Size) PWSTR FilePath,
    __in DWORD Size
    );

BOOL
IMAGEAPI
SymGetSourceFileToken(
    __in HANDLE hProcess,
    __in ULONG64 Base,
    __in PCSTR FileSpec,
    __deref_out PVOID *Token,
    __out DWORD *Size
    );

BOOL
IMAGEAPI
SymGetSourceFileTokenW(
    __in HANDLE hProcess,
    __in ULONG64 Base,
    __in PCWSTR FileSpec,
    __deref_out PVOID *Token,
    __out DWORD *Size
    );

BOOL
IMAGEAPI
SymGetSourceFileFromToken(
    __in HANDLE hProcess,
    __in PVOID Token,
    __in_opt PCSTR Params,
    __out_ecount(Size) PSTR FilePath,
    __in DWORD Size
    );

BOOL
IMAGEAPI
SymGetSourceFileFromTokenW(
    __in HANDLE hProcess,
    __in PVOID Token,
    __in_opt PCWSTR Params,
    __out_ecount(Size) PWSTR FilePath,
    __in DWORD Size
    );

BOOL
IMAGEAPI
SymGetSourceVarFromToken(
    __in HANDLE hProcess,
    __in PVOID Token,
    __in_opt PCSTR Params,
    __in PCSTR VarName,
    __out_ecount(Size) PSTR Value,
    __in DWORD Size
    );

BOOL
IMAGEAPI
SymGetSourceVarFromTokenW(
    __in HANDLE hProcess,
    __in PVOID Token,
    __in_opt PCWSTR Params,
    __in PCWSTR VarName,
    __out_ecount(Size) PWSTR Value,
    __in DWORD Size
    );

typedef BOOL (CALLBACK *PENUMSOURCEFILETOKENSCALLBACK)(__in PVOID token, __in size_t size);

BOOL
IMAGEAPI
SymEnumSourceFileTokens(
    __in HANDLE hProcess,
    __in ULONG64 Base,
    __in PENUMSOURCEFILETOKENSCALLBACK Callback
    );

BOOL
IMAGEAPI
SymInitialize(
    __in HANDLE hProcess,
    __in_opt PCSTR UserSearchPath,
    __in BOOL fInvadeProcess
    );

BOOL
IMAGEAPI
SymInitializeW(
    __in HANDLE hProcess,
    __in_opt PCWSTR UserSearchPath,
    __in BOOL fInvadeProcess
    );

BOOL
IMAGEAPI
SymGetSearchPath(
    __in HANDLE hProcess,
    __out_ecount(SearchPathLength) PSTR SearchPath,
    __in DWORD SearchPathLength
    );

BOOL
IMAGEAPI
SymGetSearchPathW(
    __in HANDLE hProcess,
    __out_ecount(SearchPathLength) PWSTR SearchPath,
    __in DWORD SearchPathLength
    );

BOOL
IMAGEAPI
SymSetSearchPath(
    __in HANDLE hProcess,
    __in_opt PCSTR SearchPath
    );

BOOL
IMAGEAPI
SymSetSearchPathW(
    __in HANDLE hProcess,
    __in_opt PCWSTR SearchPath
    );

#define SLMFLAG_VIRTUAL 0x1
#define SLMFLAG_ALT_INDEX 0x2
#define SLMFLAG_NO_SYMBOLS 0x4

DWORD64
IMAGEAPI
SymLoadModuleEx(
    __in HANDLE hProcess,
    __in_opt HANDLE hFile,
    __in_opt PCSTR ImageName,
    __in_opt PCSTR ModuleName,
    __in DWORD64 BaseOfDll,
    __in DWORD DllSize,
    __in_opt PMODLOAD_DATA Data,
    __in_opt DWORD Flags
    );

DWORD64
IMAGEAPI
SymLoadModuleExW(
    __in HANDLE hProcess,
    __in_opt HANDLE hFile,
    __in_opt PCWSTR ImageName,
    __in_opt PCWSTR ModuleName,
    __in DWORD64 BaseOfDll,
    __in DWORD DllSize,
    __in_opt PMODLOAD_DATA Data,
    __in_opt DWORD Flags
    );

BOOL
IMAGEAPI
SymUnloadModule64(
    __in HANDLE hProcess,
    __in DWORD64 BaseOfDll
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(_IMAGEHLP64)
#define SymUnloadModule SymUnloadModule64
#else
BOOL
IMAGEAPI
SymUnloadModule(
    __in HANDLE hProcess,
    __in DWORD BaseOfDll
    );
#endif

BOOL
IMAGEAPI
SymUnDName64(
    __in PIMAGEHLP_SYMBOL64 sym,
    __out_ecount(UnDecNameLength) PSTR UnDecName,
    __in DWORD UnDecNameLength
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(_IMAGEHLP64)
#define SymUnDName SymUnDName64
#else
BOOL
IMAGEAPI
SymUnDName(
    __in PIMAGEHLP_SYMBOL sym,
    __out_ecount(UnDecNameLength) PSTR UnDecName,
    __in DWORD UnDecNameLength
    );
#endif

BOOL
IMAGEAPI
SymRegisterCallback64(
    __in HANDLE hProcess,
    __in PSYMBOL_REGISTERED_CALLBACK64 CallbackFunction,
    __in ULONG64 UserContext
    );

BOOL
IMAGEAPI
SymRegisterCallbackW64(
    __in HANDLE hProcess,
    __in PSYMBOL_REGISTERED_CALLBACK64 CallbackFunction,
    __in ULONG64 UserContext
    );

BOOL
IMAGEAPI
SymRegisterFunctionEntryCallback64(
    __in HANDLE hProcess,
    __in PSYMBOL_FUNCENTRY_CALLBACK64 CallbackFunction,
    __in ULONG64 UserContext
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(_IMAGEHLP64)
#define SymRegisterCallback SymRegisterCallback64
#define SymRegisterFunctionEntryCallback SymRegisterFunctionEntryCallback64
#else
BOOL
IMAGEAPI
SymRegisterCallback(
    __in HANDLE hProcess,
    __in PSYMBOL_REGISTERED_CALLBACK CallbackFunction,
    __in_opt PVOID UserContext
    );

BOOL
IMAGEAPI
SymRegisterFunctionEntryCallback(
    __in HANDLE hProcess,
    __in PSYMBOL_FUNCENTRY_CALLBACK CallbackFunction,
    __in_opt PVOID UserContext
    );
#endif


typedef struct _IMAGEHLP_SYMBOL_SRC {
    DWORD sizeofstruct;
    DWORD type;
    char file[MAX_PATH];
} IMAGEHLP_SYMBOL_SRC, *PIMAGEHLP_SYMBOL_SRC;

typedef struct _MODULE_TYPE_INFO {
    USHORT dataLength;
    USHORT leaf;
    BYTE data[1];
} MODULE_TYPE_INFO, *PMODULE_TYPE_INFO;

typedef struct _SYMBOL_INFO {
    ULONG SizeOfStruct;
    ULONG TypeIndex;
    ULONG64 Reserved[2];
    ULONG Index;
    ULONG Size;
    ULONG64 ModBase;
    ULONG Flags;
    ULONG64 Value;
    ULONG64 Address;
    ULONG Register;
    ULONG Scope;
    ULONG Tag;
    ULONG NameLen;
    ULONG MaxNameLen;
    CHAR Name[1];
} SYMBOL_INFO, *PSYMBOL_INFO;

typedef struct _SYMBOL_INFO_PACKAGE {
    SYMBOL_INFO si;
    CHAR name[MAX_SYM_NAME + 1];
} SYMBOL_INFO_PACKAGE, *PSYMBOL_INFO_PACKAGE;

typedef struct _SYMBOL_INFOW {
    ULONG SizeOfStruct;
    ULONG TypeIndex;
    ULONG64 Reserved[2];
    ULONG Index;
    ULONG Size;
    ULONG64 ModBase;
    ULONG Flags;
    ULONG64 Value;
    ULONG64 Address;
    ULONG Register;
    ULONG Scope;
    ULONG Tag;
    ULONG NameLen;
    ULONG MaxNameLen;
    WCHAR Name[1];
} SYMBOL_INFOW, *PSYMBOL_INFOW;

typedef struct _SYMBOL_INFO_PACKAGEW {
    SYMBOL_INFOW si;
    WCHAR name[MAX_SYM_NAME + 1];
} SYMBOL_INFO_PACKAGEW, *PSYMBOL_INFO_PACKAGEW;

typedef struct _IMAGEHLP_STACK_FRAME
{
    ULONG64 InstructionOffset;
    ULONG64 ReturnOffset;
    ULONG64 FrameOffset;
    ULONG64 StackOffset;
    ULONG64 BackingStoreOffset;
    ULONG64 FuncTableEntry;
    ULONG64 Params[4];
    ULONG64 Reserved[5];
    BOOL Virtual;
    ULONG Reserved2;
} IMAGEHLP_STACK_FRAME, *PIMAGEHLP_STACK_FRAME;

typedef VOID IMAGEHLP_CONTEXT, *PIMAGEHLP_CONTEXT;


BOOL
IMAGEAPI
SymSetContext(
    __in HANDLE hProcess,
    __in PIMAGEHLP_STACK_FRAME StackFrame,
    __in_opt PIMAGEHLP_CONTEXT Context
    );

BOOL
IMAGEAPI
SymSetScopeFromAddr(
    __in HANDLE hProcess,
    __in ULONG64 Address
    );

BOOL
IMAGEAPI
SymSetScopeFromIndex(
    __in HANDLE hProcess,
    __in ULONG64 BaseOfDll,
    __in DWORD Index
    );

typedef BOOL
(CALLBACK *PSYM_ENUMPROCESSES_CALLBACK)(
    __in HANDLE hProcess,
    __in PVOID UserContext
    );

BOOL
IMAGEAPI
SymEnumProcesses(
    __in PSYM_ENUMPROCESSES_CALLBACK EnumProcessesCallback,
    __in PVOID UserContext
    );

BOOL
IMAGEAPI
SymFromAddr(
    __in HANDLE hProcess,
    __in DWORD64 Address,
    __out_opt PDWORD64 Displacement,
    __inout PSYMBOL_INFO Symbol
    );

BOOL
IMAGEAPI
SymFromAddrW(
    __in HANDLE hProcess,
    __in DWORD64 Address,
    __out_opt PDWORD64 Displacement,
    __inout PSYMBOL_INFOW Symbol
    );

BOOL
IMAGEAPI
SymFromToken(
    __in HANDLE hProcess,
    __in DWORD64 Base,
    __in DWORD Token,
    __inout PSYMBOL_INFO Symbol
    );

BOOL
IMAGEAPI
SymFromTokenW(
    __in HANDLE hProcess,
    __in DWORD64 Base,
    __in DWORD Token,
    __inout PSYMBOL_INFOW Symbol
    );

BOOL
IMAGEAPI
SymNext(
    __in HANDLE hProcess,
    __inout PSYMBOL_INFO si
    );

BOOL
IMAGEAPI
SymNextW(
    __in HANDLE hProcess,
    __inout PSYMBOL_INFOW siw
    );

BOOL
IMAGEAPI
SymPrev(
    __in HANDLE hProcess,
    __inout PSYMBOL_INFO si
    );

BOOL
IMAGEAPI
SymPrevW(
    __in HANDLE hProcess,
    __inout PSYMBOL_INFOW siw
    );







BOOL
IMAGEAPI
SymFromName(
    __in HANDLE hProcess,
    __in PCSTR Name,
    __inout PSYMBOL_INFO Symbol
    );

BOOL
IMAGEAPI
SymFromNameW(
    __in HANDLE hProcess,
    __in PCWSTR Name,
    __inout PSYMBOL_INFOW Symbol
    );

typedef BOOL
(CALLBACK *PSYM_ENUMERATESYMBOLS_CALLBACK)(
    __in PSYMBOL_INFO pSymInfo,
    __in ULONG SymbolSize,
    __in_opt PVOID UserContext
    );

BOOL
IMAGEAPI
SymEnumSymbols(
    __in HANDLE hProcess,
    __in ULONG64 BaseOfDll,
    __in_opt PCSTR Mask,
    __in PSYM_ENUMERATESYMBOLS_CALLBACK EnumSymbolsCallback,
    __in_opt PVOID UserContext
    );

typedef BOOL
(CALLBACK *PSYM_ENUMERATESYMBOLS_CALLBACKW)(
    __in PSYMBOL_INFOW pSymInfo,
    __in ULONG SymbolSize,
    __in_opt PVOID UserContext
    );

BOOL
IMAGEAPI
SymEnumSymbolsW(
    __in HANDLE hProcess,
    __in ULONG64 BaseOfDll,
    __in_opt PCWSTR Mask,
    __in PSYM_ENUMERATESYMBOLS_CALLBACKW EnumSymbolsCallback,
    __in_opt PVOID UserContext
    );

BOOL
IMAGEAPI
SymEnumSymbolsForAddr(
    __in HANDLE hProcess,
    __in DWORD64 Address,
    __in PSYM_ENUMERATESYMBOLS_CALLBACK EnumSymbolsCallback,
    __in_opt PVOID UserContext
    );

BOOL
IMAGEAPI
SymEnumSymbolsForAddrW(
    __in HANDLE hProcess,
    __in DWORD64 Address,
    __in PSYM_ENUMERATESYMBOLS_CALLBACKW EnumSymbolsCallback,
    __in_opt PVOID UserContext
    );

#define SYMSEARCH_MASKOBJS 0x01
#define SYMSEARCH_RECURSE 0X02
#define SYMSEARCH_GLOBALSONLY 0X04
#define SYMSEARCH_ALLITEMS 0X08

BOOL
IMAGEAPI
SymSearch(
    __in HANDLE hProcess,
    __in ULONG64 BaseOfDll,
    __in_opt DWORD Index,
    __in_opt DWORD SymTag,
    __in_opt PCSTR Mask,
    __in_opt DWORD64 Address,
    __in PSYM_ENUMERATESYMBOLS_CALLBACK EnumSymbolsCallback,
    __in_opt PVOID UserContext,
    __in DWORD Options
    );

BOOL
IMAGEAPI
SymSearchW(
    __in HANDLE hProcess,
    __in ULONG64 BaseOfDll,
    __in_opt DWORD Index,
    __in_opt DWORD SymTag,
    __in_opt PCWSTR Mask,
    __in_opt DWORD64 Address,
    __in PSYM_ENUMERATESYMBOLS_CALLBACKW EnumSymbolsCallback,
    __in_opt PVOID UserContext,
    __in DWORD Options
    );

BOOL
IMAGEAPI
SymGetScope(
    __in HANDLE hProcess,
    __in ULONG64 BaseOfDll,
    __in DWORD Index,
    __inout PSYMBOL_INFO Symbol
    );

BOOL
IMAGEAPI
SymGetScopeW(
    __in HANDLE hProcess,
    __in ULONG64 BaseOfDll,
    __in DWORD Index,
    __inout PSYMBOL_INFOW Symbol
    );

BOOL
IMAGEAPI
SymFromIndex(
    __in HANDLE hProcess,
    __in ULONG64 BaseOfDll,
    __in DWORD Index,
    __inout PSYMBOL_INFO Symbol
    );

BOOL
IMAGEAPI
SymFromIndexW(
    __in HANDLE hProcess,
    __in ULONG64 BaseOfDll,
    __in DWORD Index,
    __inout PSYMBOL_INFOW Symbol
    );

typedef enum _IMAGEHLP_SYMBOL_TYPE_INFO {
    TI_GET_SYMTAG,
    TI_GET_SYMNAME,
    TI_GET_LENGTH,
    TI_GET_TYPE,
    TI_GET_TYPEID,
    TI_GET_BASETYPE,
    TI_GET_ARRAYINDEXTYPEID,
    TI_FINDCHILDREN,
    TI_GET_DATAKIND,
    TI_GET_ADDRESSOFFSET,
    TI_GET_OFFSET,
    TI_GET_VALUE,
    TI_GET_COUNT,
    TI_GET_CHILDRENCOUNT,
    TI_GET_BITPOSITION,
    TI_GET_VIRTUALBASECLASS,
    TI_GET_VIRTUALTABLESHAPEID,
    TI_GET_VIRTUALBASEPOINTEROFFSET,
    TI_GET_CLASSPARENTID,
    TI_GET_NESTED,
    TI_GET_SYMINDEX,
    TI_GET_LEXICALPARENT,
    TI_GET_ADDRESS,
    TI_GET_THISADJUST,
    TI_GET_UDTKIND,
    TI_IS_EQUIV_TO,
    TI_GET_CALLING_CONVENTION,
    TI_IS_CLOSE_EQUIV_TO,
    TI_GTIEX_REQS_VALID,
    TI_GET_VIRTUALBASEOFFSET,
    TI_GET_VIRTUALBASEDISPINDEX,
    TI_GET_IS_REFERENCE,
    TI_GET_INDIRECTVIRTUALBASECLASS,
    IMAGEHLP_SYMBOL_TYPE_INFO_MAX,
} IMAGEHLP_SYMBOL_TYPE_INFO;

typedef struct _TI_FINDCHILDREN_PARAMS {
    ULONG Count;
    ULONG Start;
    ULONG ChildId[1];
} TI_FINDCHILDREN_PARAMS;

BOOL
IMAGEAPI
SymGetTypeInfo(
    __in HANDLE hProcess,
    __in DWORD64 ModBase,
    __in ULONG TypeId,
    __in IMAGEHLP_SYMBOL_TYPE_INFO GetType,
    __out PVOID pInfo
    );

#define IMAGEHLP_GET_TYPE_INFO_UNCACHED 0x00000001
#define IMAGEHLP_GET_TYPE_INFO_CHILDREN 0x00000002

typedef struct _IMAGEHLP_GET_TYPE_INFO_PARAMS {
    IN ULONG SizeOfStruct;
    IN ULONG Flags;
    IN ULONG NumIds;
    IN PULONG TypeIds;
    IN ULONG64 TagFilter;
    IN ULONG NumReqs;
    IN IMAGEHLP_SYMBOL_TYPE_INFO* ReqKinds;
    IN PULONG_PTR ReqOffsets;
    IN PULONG ReqSizes;
    IN ULONG_PTR ReqStride;
    IN ULONG_PTR BufferSize;
    OUT PVOID Buffer;
    OUT ULONG EntriesMatched;
    OUT ULONG EntriesFilled;
    OUT ULONG64 TagsFound;
    OUT ULONG64 AllReqsValid;
    IN ULONG NumReqsValid;
    OUT PULONG64 ReqsValid OPTIONAL;
} IMAGEHLP_GET_TYPE_INFO_PARAMS, *PIMAGEHLP_GET_TYPE_INFO_PARAMS;

BOOL
IMAGEAPI
SymGetTypeInfoEx(
    __in HANDLE hProcess,
    __in DWORD64 ModBase,
    __inout PIMAGEHLP_GET_TYPE_INFO_PARAMS Params
    );

BOOL
IMAGEAPI
SymEnumTypes(
    __in HANDLE hProcess,
    __in ULONG64 BaseOfDll,
    __in PSYM_ENUMERATESYMBOLS_CALLBACK EnumSymbolsCallback,
    __in_opt PVOID UserContext
    );

BOOL
IMAGEAPI
SymEnumTypesW(
    __in HANDLE hProcess,
    __in ULONG64 BaseOfDll,
    __in PSYM_ENUMERATESYMBOLS_CALLBACKW EnumSymbolsCallback,
    __in_opt PVOID UserContext
    );

BOOL
IMAGEAPI
SymEnumTypesByName(
    __in HANDLE hProcess,
    __in ULONG64 BaseOfDll,
    __in_opt PCSTR mask,
    __in PSYM_ENUMERATESYMBOLS_CALLBACK EnumSymbolsCallback,
    __in_opt PVOID UserContext
    );

BOOL
IMAGEAPI
SymEnumTypesByNameW(
    __in HANDLE hProcess,
    __in ULONG64 BaseOfDll,
    __in_opt PCWSTR mask,
    __in PSYM_ENUMERATESYMBOLS_CALLBACKW EnumSymbolsCallback,
    __in_opt PVOID UserContext
    );

BOOL
IMAGEAPI
SymGetTypeFromName(
    __in HANDLE hProcess,
    __in ULONG64 BaseOfDll,
    __in PCSTR Name,
    __inout PSYMBOL_INFO Symbol
    );

BOOL
IMAGEAPI
SymGetTypeFromNameW(
    __in HANDLE hProcess,
    __in ULONG64 BaseOfDll,
    __in PCWSTR Name,
    __inout PSYMBOL_INFOW Symbol
    );

BOOL
IMAGEAPI
SymAddSymbol(
    __in HANDLE hProcess,
    __in ULONG64 BaseOfDll,
    __in PCSTR Name,
    __in DWORD64 Address,
    __in DWORD Size,
    __in DWORD Flags
    );

BOOL
IMAGEAPI
SymAddSymbolW(
    __in HANDLE hProcess,
    __in ULONG64 BaseOfDll,
    __in PCWSTR Name,
    __in DWORD64 Address,
    __in DWORD Size,
    __in DWORD Flags
    );

BOOL
IMAGEAPI
SymDeleteSymbol(
    __in HANDLE hProcess,
    __in ULONG64 BaseOfDll,
    __in_opt PCSTR Name,
    __in DWORD64 Address,
    __in DWORD Flags
    );

BOOL
IMAGEAPI
SymDeleteSymbolW(
    __in HANDLE hProcess,
    __in ULONG64 BaseOfDll,
    __in_opt PCWSTR Name,
    __in DWORD64 Address,
    __in DWORD Flags
    );

BOOL
IMAGEAPI
SymRefreshModuleList(
    __in HANDLE hProcess
    );

BOOL
IMAGEAPI
SymAddSourceStream(
    __in HANDLE hProcess,
    __in ULONG64 Base,
    __in_opt PCSTR StreamFile,
    __in_bcount_opt(Size) PBYTE Buffer,
    __in size_t Size
    );

typedef BOOL (WINAPI *SYMADDSOURCESTREAM)(HANDLE, ULONG64, PCSTR, PBYTE, size_t);

BOOL
IMAGEAPI
SymAddSourceStreamA(
    __in HANDLE hProcess,
    __in ULONG64 Base,
    __in_opt PCSTR StreamFile,
    __in_bcount_opt(Size) PBYTE Buffer,
    __in size_t Size
    );

typedef BOOL (WINAPI *SYMADDSOURCESTREAMA)(HANDLE, ULONG64, PCSTR, PBYTE, size_t);

BOOL
IMAGEAPI
SymAddSourceStreamW(
    __in HANDLE hProcess,
    __in ULONG64 Base,
    __in_opt PCWSTR FileSpec,
    __in_bcount_opt(Size) PBYTE Buffer,
    __in size_t Size
    );

BOOL
IMAGEAPI
SymSrvIsStoreW(
    __in_opt HANDLE hProcess,
    __in PCWSTR path
    );

BOOL
IMAGEAPI
SymSrvIsStore(
    __in_opt HANDLE hProcess,
    __in PCSTR path
    );

PCSTR
IMAGEAPI
SymSrvDeltaName(
    __in HANDLE hProcess,
    __in_opt PCSTR SymPath,
    __in PCSTR Type,
    __in PCSTR File1,
    __in PCSTR File2
    );

PCWSTR
IMAGEAPI
SymSrvDeltaNameW(
    __in HANDLE hProcess,
    __in_opt PCWSTR SymPath,
    __in PCWSTR Type,
    __in PCWSTR File1,
    __in PCWSTR File2
    );

PCSTR
IMAGEAPI
SymSrvGetSupplement(
    __in HANDLE hProcess,
    __in_opt PCSTR SymPath,
    __in PCSTR Node,
    __in PCSTR File
    );

PCWSTR
IMAGEAPI
SymSrvGetSupplementW(
    __in HANDLE hProcess,
    __in_opt PCWSTR SymPath,
    __in PCWSTR Node,
    __in PCWSTR File
    );

BOOL
IMAGEAPI
SymSrvGetFileIndexes(
    __in PCSTR File,
    __out GUID *Id,
    __out PDWORD Val1,
    __out_opt PDWORD Val2,
    __in DWORD Flags
    );

BOOL
IMAGEAPI
SymSrvGetFileIndexesW(
    __in PCWSTR File,
    __out GUID *Id,
    __out PDWORD Val1,
    __out_opt PDWORD Val2,
    __in DWORD Flags
    );

BOOL
IMAGEAPI
SymSrvGetFileIndexStringW(
    __in HANDLE hProcess,
    __in_opt PCWSTR SrvPath,
    __in PCWSTR File,
    __out_ecount(Size) PWSTR Index,
    __in size_t Size,
    __in DWORD Flags
    );

BOOL
IMAGEAPI
SymSrvGetFileIndexString(
    __in HANDLE hProcess,
    __in_opt PCSTR SrvPath,
    __in PCSTR File,
    __out_ecount(Size) PSTR Index,
    __in size_t Size,
    __in DWORD Flags
    );

typedef struct {
    DWORD sizeofstruct;
    char file[MAX_PATH +1];
    BOOL stripped;
    DWORD timestamp;
    DWORD size;
    char dbgfile[MAX_PATH +1];
    char pdbfile[MAX_PATH + 1];
    GUID guid;
    DWORD sig;
    DWORD age;
} SYMSRV_INDEX_INFO, *PSYMSRV_INDEX_INFO;

typedef struct {
    DWORD sizeofstruct;
    WCHAR file[MAX_PATH +1];
    BOOL stripped;
    DWORD timestamp;
    DWORD size;
    WCHAR dbgfile[MAX_PATH +1];
    WCHAR pdbfile[MAX_PATH + 1];
    GUID guid;
    DWORD sig;
    DWORD age;
} SYMSRV_INDEX_INFOW, *PSYMSRV_INDEX_INFOW;

BOOL
IMAGEAPI
SymSrvGetFileIndexInfo(
    __in PCSTR File,
    __out PSYMSRV_INDEX_INFO Info,
    __in DWORD Flags
    );

BOOL
IMAGEAPI
SymSrvGetFileIndexInfoW(
    __in PCWSTR File,
    __out PSYMSRV_INDEX_INFOW Info,
    __in DWORD Flags
    );

PCSTR
IMAGEAPI
SymSrvStoreSupplement(
    __in HANDLE hProcess,
    __in_opt PCSTR SrvPath,
    __in PCSTR Node,
    __in PCSTR File,
    __in DWORD Flags
    );

PCWSTR
IMAGEAPI
SymSrvStoreSupplementW(
    __in HANDLE hProcess,
    __in_opt PCWSTR SymPath,
    __in PCWSTR Node,
    __in PCWSTR File,
    __in DWORD Flags
    );

PCSTR
IMAGEAPI
SymSrvStoreFile(
    __in HANDLE hProcess,
    __in_opt PCSTR SrvPath,
    __in PCSTR File,
    __in DWORD Flags
    );

PCWSTR
IMAGEAPI
SymSrvStoreFileW(
    __in HANDLE hProcess,
    __in_opt PCWSTR SrvPath,
    __in PCWSTR File,
    __in DWORD Flags
    );



typedef enum {
    sfImage = 0,
    sfDbg,
    sfPdb,
    sfMpd,
    sfMax
} DBG_SF_ENUM;

BOOL
IMAGEAPI
SymGetSymbolFile(
    __in_opt HANDLE hProcess,
    __in_opt PCSTR SymPath,
    __in PCSTR ImageFile,
    __in DWORD Type,
    __out_ecount(cSymbolFile) PSTR SymbolFile,
    __in size_t cSymbolFile,
    __out_ecount(cDbgFile) PSTR DbgFile,
    __in size_t cDbgFile
    );

BOOL
IMAGEAPI
SymGetSymbolFileW(
    __in_opt HANDLE hProcess,
    __in_opt PCWSTR SymPath,
    __in PCWSTR ImageFile,
    __in DWORD Type,
    __out_ecount(cSymbolFile) PWSTR SymbolFile,
    __in size_t cSymbolFile,
    __out_ecount(cDbgFile) PWSTR DbgFile,
    __in size_t cDbgFile
    );





typedef BOOL (WINAPI *PDBGHELP_CREATE_USER_DUMP_CALLBACK)(
    __in DWORD DataType,
    __in PVOID* Data,
    __out LPDWORD DataLength,
    __in_opt PVOID UserData
    );

BOOL
WINAPI
DbgHelpCreateUserDump(
    __in_opt LPCSTR FileName,
    __in PDBGHELP_CREATE_USER_DUMP_CALLBACK Callback,
    __in_opt PVOID UserData
    );

BOOL
WINAPI
DbgHelpCreateUserDumpW(
    __in_opt LPCWSTR FileName,
    __in PDBGHELP_CREATE_USER_DUMP_CALLBACK Callback,
    __in_opt PVOID UserData
    );






BOOL
IMAGEAPI
SymGetSymFromAddr64(
    __in HANDLE hProcess,
    __in DWORD64 qwAddr,
    __out_opt PDWORD64 pdwDisplacement,
    __inout PIMAGEHLP_SYMBOL64 Symbol
    );


#if !defined(_IMAGEHLP_SOURCE_) && defined(_IMAGEHLP64)
#define SymGetSymFromAddr SymGetSymFromAddr64
#else
BOOL
IMAGEAPI
SymGetSymFromAddr(
    __in HANDLE hProcess,
    __in DWORD dwAddr,
    __out_opt PDWORD pdwDisplacement,
    __inout PIMAGEHLP_SYMBOL Symbol
    );
#endif







BOOL
IMAGEAPI
SymGetSymFromName64(
    __in HANDLE hProcess,
    __in PCSTR Name,
    __inout PIMAGEHLP_SYMBOL64 Symbol
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(_IMAGEHLP64)
#define SymGetSymFromName SymGetSymFromName64
#else
BOOL
IMAGEAPI
SymGetSymFromName(
    __in HANDLE hProcess,
    __in PCSTR Name,
    __inout PIMAGEHLP_SYMBOL Symbol
    );
#endif




typedef BOOL (WINAPI *PSYMBOLSERVERPROC)(PCSTR, PCSTR, PVOID, DWORD, DWORD, PSTR);
typedef BOOL (WINAPI *PSYMBOLSERVERPROCA)(PCSTR, PCSTR, PVOID, DWORD, DWORD, PSTR);
typedef BOOL (WINAPI *PSYMBOLSERVERPROCW)(PCWSTR, PCWSTR, PVOID, DWORD, DWORD, PWSTR);
typedef BOOL (WINAPI *PSYMBOLSERVERBYINDEXPROC)(PCSTR, PCSTR, PCSTR, PSTR);
typedef BOOL (WINAPI *PSYMBOLSERVERBYINDEXPROCA)(PCSTR, PCSTR, PCSTR, PSTR);
typedef BOOL (WINAPI *PSYMBOLSERVERBYINDEXPROCW)(PCWSTR, PCWSTR, PCWSTR, PWSTR);
typedef BOOL (WINAPI *PSYMBOLSERVEROPENPROC)(VOID);
typedef BOOL (WINAPI *PSYMBOLSERVERCLOSEPROC)(VOID);
typedef BOOL (WINAPI *PSYMBOLSERVERSETOPTIONSPROC)(UINT_PTR, ULONG64);
typedef BOOL (WINAPI *PSYMBOLSERVERSETOPTIONSWPROC)(UINT_PTR, ULONG64);
typedef BOOL (CALLBACK WINAPI *PSYMBOLSERVERCALLBACKPROC)(UINT_PTR action, ULONG64 data, ULONG64 context);
typedef UINT_PTR (WINAPI *PSYMBOLSERVERGETOPTIONSPROC)();
typedef BOOL (WINAPI *PSYMBOLSERVERPINGPROC)(PCSTR);
typedef BOOL (WINAPI *PSYMBOLSERVERPINGPROCA)(PCSTR);
typedef BOOL (WINAPI *PSYMBOLSERVERPINGPROCW)(PCWSTR);
typedef BOOL (WINAPI *PSYMBOLSERVERGETVERSION)(LPAPI_VERSION);
typedef BOOL (WINAPI *PSYMBOLSERVERDELTANAME)(PCSTR, PVOID, DWORD, DWORD, PVOID, DWORD, DWORD, PSTR, size_t);
typedef BOOL (WINAPI *PSYMBOLSERVERDELTANAMEW)(PCWSTR, PVOID, DWORD, DWORD, PVOID, DWORD, DWORD, PWSTR, size_t);
typedef BOOL (WINAPI *PSYMBOLSERVERGETSUPPLEMENT)(PCSTR, PCSTR, PCSTR, PSTR, size_t);
typedef BOOL (WINAPI *PSYMBOLSERVERGETSUPPLEMENTW)(PCWSTR, PCWSTR, PCWSTR, PWSTR, size_t);
typedef BOOL (WINAPI *PSYMBOLSERVERSTORESUPPLEMENT)(PCSTR, PCSTR, PCSTR, PSTR, size_t, DWORD);
typedef BOOL (WINAPI *PSYMBOLSERVERSTORESUPPLEMENTW)(PCWSTR, PCWSTR, PCWSTR, PWSTR, size_t, DWORD);
typedef BOOL (WINAPI *PSYMBOLSERVERGETINDEXSTRING)(PVOID, DWORD, DWORD, PSTR, size_t);
typedef BOOL (WINAPI *PSYMBOLSERVERGETINDEXSTRINGW)(PVOID, DWORD, DWORD, PWSTR, size_t);
typedef BOOL (WINAPI *PSYMBOLSERVERSTOREFILE)(PCSTR, PCSTR, PVOID, DWORD, DWORD, PSTR, size_t, DWORD);
typedef BOOL (WINAPI *PSYMBOLSERVERSTOREFILEW)(PCWSTR, PCWSTR, PVOID, DWORD, DWORD, PWSTR, size_t, DWORD);
typedef BOOL (WINAPI *PSYMBOLSERVERISSTORE)(PCSTR);
typedef BOOL (WINAPI *PSYMBOLSERVERISSTOREW)(PCWSTR);
typedef DWORD (WINAPI *PSYMBOLSERVERVERSION)();
typedef BOOL (CALLBACK WINAPI *PSYMBOLSERVERMESSAGEPROC)(UINT_PTR action, ULONG64 data, ULONG64 context);

#define SYMSRV_VERSION 2

#define SSRVOPT_CALLBACK 0x00000001
#define SSRVOPT_DWORD 0x00000002
#define SSRVOPT_DWORDPTR 0x00000004
#define SSRVOPT_GUIDPTR 0x00000008
#define SSRVOPT_OLDGUIDPTR 0x00000010
#define SSRVOPT_UNATTENDED 0x00000020
#define SSRVOPT_NOCOPY 0x00000040
#define SSRVOPT_GETPATH 0x00000040
#define SSRVOPT_PARENTWIN 0x00000080
#define SSRVOPT_PARAMTYPE 0x00000100
#define SSRVOPT_SECURE 0x00000200
#define SSRVOPT_TRACE 0x00000400
#define SSRVOPT_SETCONTEXT 0x00000800
#define SSRVOPT_PROXY 0x00001000
#define SSRVOPT_DOWNSTREAM_STORE 0x00002000
#define SSRVOPT_OVERWRITE 0x00004000
#define SSRVOPT_RESETTOU 0x00008000
#define SSRVOPT_CALLBACKW 0x00010000
#define SSRVOPT_FLAT_DEFAULT_STORE 0x00020000
#define SSRVOPT_PROXYW 0x00040000
#define SSRVOPT_MESSAGE 0x00080000
#define SSRVOPT_SERVICE 0x00100000
#define SSRVOPT_FAVOR_COMPRESSED 0x00200000
#define SSRVOPT_STRING 0x00400000
#define SSRVOPT_WINHTTP 0x00800000
#define SSRVOPT_WININET 0x01000000

#define SSRVOPT_MAX 0x0100000

#define SSRVOPT_RESET ((ULONG_PTR)-1)


#define NUM_SSRVOPTS 30

#define SSRVACTION_TRACE 1
#define SSRVACTION_QUERYCANCEL 2
#define SSRVACTION_EVENT 3
#define SSRVACTION_EVENTW 4
#define SSRVACTION_SIZE 5

#define SYMSTOREOPT_COMPRESS 0x01
#define SYMSTOREOPT_OVERWRITE 0x02
#define SYMSTOREOPT_RETURNINDEX 0x04
#define SYMSTOREOPT_POINTER 0x08
#define SYMSTOREOPT_ALT_INDEX 0x10
#define SYMSTOREOPT_UNICODE 0x20
#define SYMSTOREOPT_PASS_IF_EXISTS 0x40

#ifdef DBGHELP_TRANSLATE_TCHAR
 #define SymInitialize SymInitializeW
 #define SymAddSymbol SymAddSymbolW
 #define SymDeleteSymbol SymDeleteSymbolW
 #define SearchTreeForFile SearchTreeForFileW
 #define UnDecorateSymbolName UnDecorateSymbolNameW
 #define SymGetLineFromName64 SymGetLineFromNameW64
 #define SymGetLineFromAddr64 SymGetLineFromAddrW64
 #define SymGetLineNext64 SymGetLineNextW64
 #define SymGetLinePrev64 SymGetLinePrevW64
 #define SymFromName SymFromNameW
 #define SymFindExecutableImage SymFindExecutableImageW
 #define FindExecutableImageEx FindExecutableImageExW
 #define SymSearch SymSearchW
 #define SymEnumLines SymEnumLinesW
 #define SymEnumSourceLines SymEnumSourceLinesW
 #define SymGetTypeFromName SymGetTypeFromNameW
 #define SymEnumSymbolsForAddr SymEnumSymbolsForAddrW
 #define SymFromAddr SymFromAddrW
 #define SymMatchString SymMatchStringW
 #define SymEnumSourceFiles SymEnumSourceFilesW
 #define SymEnumSymbols SymEnumSymbolsW
 #define SymLoadModuleEx SymLoadModuleExW
 #define SymSetSearchPath SymSetSearchPathW
 #define SymGetSearchPath SymGetSearchPathW
 #define EnumDirTree EnumDirTreeW
 #define SymFromToken SymFromTokenW
 #define SymFromIndex SymFromIndexW
 #define SymGetScope SymGetScopeW
 #define SymNext SymNextW
 #define SymPrev SymPrevW
 #define SymEnumTypes SymEnumTypesW
 #define SymEnumTypesByName SymEnumTypesByNameW
 #define SymRegisterCallback64 SymRegisterCallbackW64
 #define SymFindDebugInfoFile SymFindDebugInfoFileW
 #define FindDebugInfoFileEx FindDebugInfoFileExW
 #define SymFindFileInPath SymFindFileInPathW
 #define SymEnumerateModules64 SymEnumerateModulesW64
 #define SymSetHomeDirectory SymSetHomeDirectoryW
 #define SymGetHomeDirectory SymGetHomeDirectoryW
 #define SymGetSourceFile SymGetSourceFileW
 #define SymGetSourceFileToken SymGetSourceFileTokenW
 #define SymGetSourceFileFromToken SymGetSourceFileFromTokenW
 #define SymGetSourceVarFromToken SymGetSourceVarFromTokenW
 #define SymGetSourceFileToken SymGetSourceFileTokenW
 #define SymGetFileLineOffsets64 SymGetFileLineOffsetsW64
 #define SymFindFileInPath SymFindFileInPathW
 #define SymMatchFileName SymMatchFileNameW
 #define SymGetSourceFileFromToken SymGetSourceFileFromTokenW
 #define SymGetSourceVarFromToken SymGetSourceVarFromTokenW
 #define SymGetModuleInfo64 SymGetModuleInfoW64
 #define SymSrvIsStore SymSrvIsStoreW
 #define SymSrvDeltaName SymSrvDeltaNameW
 #define SymSrvGetSupplement SymSrvGetSupplementW
 #define SymSrvStoreSupplement SymSrvStoreSupplementW
 #define SymSrvGetFileIndexes SymSrvGetFileIndexes
 #define SymSrvGetFileIndexString SymSrvGetFileIndexStringW
 #define SymSrvStoreFile SymSrvStoreFileW
 #define SymGetSymbolFile SymGetSymbolFileW
 #define EnumerateLoadedModules64 EnumerateLoadedModulesW64
 #define EnumerateLoadedModulesEx EnumerateLoadedModulesExW
 #define SymSrvGetFileIndexInfo SymSrvGetFileIndexInfoW

 #define IMAGEHLP_LINE64 IMAGEHLP_LINEW64
 #define PIMAGEHLP_LINE64 PIMAGEHLP_LINEW64
 #define SYMBOL_INFO SYMBOL_INFOW
 #define PSYMBOL_INFO PSYMBOL_INFOW
 #define SYMBOL_INFO_PACKAGE SYMBOL_INFO_PACKAGEW
 #define PSYMBOL_INFO_PACKAGE PSYMBOL_INFO_PACKAGEW
 #define FIND_EXE_FILE_CALLBACK FIND_EXE_FILE_CALLBACKW
 #define PFIND_EXE_FILE_CALLBACK PFIND_EXE_FILE_CALLBACKW
 #define SYM_ENUMERATESYMBOLS_CALLBACK SYM_ENUMERATESYMBOLS_CALLBACKW
 #define PSYM_ENUMERATESYMBOLS_CALLBACK PSYM_ENUMERATESYMBOLS_CALLBACKW
 #define SRCCODEINFO SRCCODEINFOW
 #define PSRCCODEINFO PSRCCODEINFOW
 #define SOURCEFILE SOURCEFILEW
 #define PSOURCEFILE PSOURCEFILEW
 #define SYM_ENUMSOURECFILES_CALLBACK SYM_ENUMSOURCEFILES_CALLBACKW
 #define PSYM_ENUMSOURCEFILES_CALLBACK PSYM_ENUMSOURECFILES_CALLBACKW
 #define IMAGEHLP_CBA_EVENT IMAGEHLP_CBA_EVENTW
 #define PIMAGEHLP_CBA_EVENT PIMAGEHLP_CBA_EVENTW
 #define PENUMDIRTREE_CALLBACK PENUMDIRTREE_CALLBACKW
 #define IMAGEHLP_DEFERRED_SYMBOL_LOAD64 IMAGEHLP_DEFERRED_SYMBOL_LOADW64
 #define PIMAGEHLP_DEFERRED_SYMBOL_LOAD64 PIMAGEHLP_DEFERRED_SYMBOL_LOADW64
 #define PFIND_DEBUG_FILE_CALLBACK PFIND_DEBUG_FILE_CALLBACKW
 #define PFINDFILEINPATHCALLBACK PFINDFILEINPATHCALLBACKW
 #define IMAGEHLP_MODULE64 IMAGEHLP_MODULEW64
 #define PIMAGEHLP_MODULE64 PIMAGEHLP_MODULEW64
 #define SYMSRV_INDEX_INFO SYMSRV_INDEX_INFOW
 #define PSYMSRV_INDEX_INFO PSYMSRV_INDEX_INFOW

 #define PSYMBOLSERVERPROC PSYMBOLSERVERPROCW
 #define PSYMBOLSERVERPINGPROC PSYMBOLSERVERPINGPROCW
#endif
# 3351 "project/mimikatz/inc/DbgHelp.h"
DBHLP_DEPRECIATED
BOOL
IMAGEAPI
FindFileInPath(
    __in HANDLE hprocess,
    __in PCSTR SearchPath,
    __in PCSTR FileName,
    __in PVOID id,
    __in DWORD two,
    __in DWORD three,
    __in DWORD flags,
    __out_ecount(MAX_PATH + 1) PSTR FilePath
    );




DBHLP_DEPRECIATED
BOOL
IMAGEAPI
FindFileInSearchPath(
    __in HANDLE hprocess,
    __in PCSTR SearchPath,
    __in PCSTR FileName,
    __in DWORD one,
    __in DWORD two,
    __in DWORD three,
    __out_ecount(MAX_PATH + 1) PSTR FilePath
    );

DBHLP_DEPRECIATED
BOOL
IMAGEAPI
SymEnumSym(
    __in HANDLE hProcess,
    __in ULONG64 BaseOfDll,
    __in PSYM_ENUMERATESYMBOLS_CALLBACK EnumSymbolsCallback,
    __in_opt PVOID UserContext
    );

DBHLP_DEPRECIATED
BOOL
IMAGEAPI
SymEnumerateSymbols64(
    __in HANDLE hProcess,
    __in ULONG64 BaseOfDll,
    __in PSYM_ENUMSYMBOLS_CALLBACK64 EnumSymbolsCallback,
    __in_opt PVOID UserContext
    );

DBHLP_DEPRECIATED
BOOL
IMAGEAPI
SymEnumerateSymbolsW64(
    __in HANDLE hProcess,
    __in ULONG64 BaseOfDll,
    __in PSYM_ENUMSYMBOLS_CALLBACK64W EnumSymbolsCallback,
    __in_opt PVOID UserContext
    );


#if !defined(_IMAGEHLP_SOURCE_) && defined(_IMAGEHLP64)
#define SymEnumerateSymbols SymEnumerateSymbols64
#define SymEnumerateSymbolsW SymEnumerateSymbolsW64
#else
DBHLP_DEPRECIATED
BOOL
IMAGEAPI
SymEnumerateSymbols(
    __in HANDLE hProcess,
    __in ULONG BaseOfDll,
    __in PSYM_ENUMSYMBOLS_CALLBACK EnumSymbolsCallback,
    __in_opt PVOID UserContext
    );

DBHLP_DEPRECIATED
BOOL
IMAGEAPI
SymEnumerateSymbolsW(
    __in HANDLE hProcess,
    __in ULONG BaseOfDll,
    __in PSYM_ENUMSYMBOLS_CALLBACKW EnumSymbolsCallback,
    __in_opt PVOID UserContext
    );
#endif



DWORD64
IMAGEAPI
SymLoadModule64(
    __in HANDLE hProcess,
    __in_opt HANDLE hFile,
    __in_opt PCSTR ImageName,
    __in_opt PCSTR ModuleName,
    __in DWORD64 BaseOfDll,
    __in DWORD SizeOfDll
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(_IMAGEHLP64)
#define SymLoadModule SymLoadModule64
#else
DWORD
IMAGEAPI
SymLoadModule(
    __in HANDLE hProcess,
    __in_opt HANDLE hFile,
    __in_opt PCSTR ImageName,
    __in_opt PCSTR ModuleName,
    __in DWORD BaseOfDll,
    __in DWORD SizeOfDll
    );
#endif

BOOL
IMAGEAPI
SymGetSymNext64(
    __in HANDLE hProcess,
    __inout PIMAGEHLP_SYMBOL64 Symbol
    );

BOOL
IMAGEAPI
SymGetSymNextW64(
    __in HANDLE hProcess,
    __inout PIMAGEHLP_SYMBOLW64 Symbol
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(_IMAGEHLP64)
#define SymGetSymNext SymGetSymNext64
#define SymGetSymNextW SymGetSymNextW64
#else
BOOL
IMAGEAPI
SymGetSymNext(
    __in HANDLE hProcess,
    __inout PIMAGEHLP_SYMBOL Symbol
    );

BOOL
IMAGEAPI
SymGetSymNextW(
    __in HANDLE hProcess,
    __inout PIMAGEHLP_SYMBOLW Symbol
    );
#endif

BOOL
IMAGEAPI
SymGetSymPrev64(
    __in HANDLE hProcess,
    __inout PIMAGEHLP_SYMBOL64 Symbol
    );

BOOL
IMAGEAPI
SymGetSymPrevW64(
    __in HANDLE hProcess,
    __inout PIMAGEHLP_SYMBOLW64 Symbol
    );

#if !defined(_IMAGEHLP_SOURCE_) && defined(_IMAGEHLP64)
#define SymGetSymPrev SymGetSymPrev64
#define SymGetSymPrevW SymGetSymPrevW64
#else
BOOL
IMAGEAPI
SymGetSymPrev(
    __in HANDLE hProcess,
    __inout PIMAGEHLP_SYMBOL Symbol
    );

BOOL
IMAGEAPI
SymGetSymPrevW(
    __in HANDLE hProcess,
    __inout PIMAGEHLP_SYMBOLW Symbol
    );
#endif





#define SYMF_OMAP_GENERATED 0x00000001
#define SYMF_OMAP_MODIFIED 0x00000002
#define SYMF_REGISTER 0x00000008
#define SYMF_REGREL 0x00000010
#define SYMF_FRAMEREL 0x00000020
#define SYMF_PARAMETER 0x00000040
#define SYMF_LOCAL 0x00000080
#define SYMF_CONSTANT 0x00000100
#define SYMF_EXPORT 0x00000200
#define SYMF_FORWARDER 0x00000400
#define SYMF_FUNCTION 0x00000800
#define SYMF_VIRTUAL 0x00001000
#define SYMF_THUNK 0x00002000
#define SYMF_TLSREL 0x00004000




#define IMAGEHLP_SYMBOL_INFO_VALUEPRESENT 1
#define IMAGEHLP_SYMBOL_INFO_REGISTER SYMF_REGISTER
#define IMAGEHLP_SYMBOL_INFO_REGRELATIVE SYMF_REGREL
#define IMAGEHLP_SYMBOL_INFO_FRAMERELATIVE SYMF_FRAMEREL
#define IMAGEHLP_SYMBOL_INFO_PARAMETER SYMF_PARAMETER
#define IMAGEHLP_SYMBOL_INFO_LOCAL SYMF_LOCAL
#define IMAGEHLP_SYMBOL_INFO_CONSTANT SYMF_CONSTANT
#define IMAGEHLP_SYMBOL_FUNCTION SYMF_FUNCTION
#define IMAGEHLP_SYMBOL_VIRTUAL SYMF_VIRTUAL
#define IMAGEHLP_SYMBOL_THUNK SYMF_THUNK
#define IMAGEHLP_SYMBOL_INFO_TLSRELATIVE SYMF_TLSREL

#include <poppack.h>


#include <pshpack4.h>

#if defined(_MSC_VER)
#if _MSC_VER >= 800
#if _MSC_VER >= 1200
#pragma warning(push)
#endif
#pragma warning(disable:4200)
#pragma warning(disable:4201)
#endif
#endif

#define MINIDUMP_SIGNATURE ('PMDM')
#define MINIDUMP_VERSION (42899)
typedef DWORD RVA;
typedef ULONG64 RVA64;

typedef struct _MINIDUMP_LOCATION_DESCRIPTOR {
    ULONG32 DataSize;
    RVA Rva;
} MINIDUMP_LOCATION_DESCRIPTOR;

typedef struct _MINIDUMP_LOCATION_DESCRIPTOR64 {
    ULONG64 DataSize;
    RVA64 Rva;
} MINIDUMP_LOCATION_DESCRIPTOR64;


typedef struct _MINIDUMP_MEMORY_DESCRIPTOR {
    ULONG64 StartOfMemoryRange;
    MINIDUMP_LOCATION_DESCRIPTOR Memory;
} MINIDUMP_MEMORY_DESCRIPTOR, *PMINIDUMP_MEMORY_DESCRIPTOR;






typedef struct _MINIDUMP_MEMORY_DESCRIPTOR64 {
    ULONG64 StartOfMemoryRange;
    ULONG64 DataSize;
} MINIDUMP_MEMORY_DESCRIPTOR64, *PMINIDUMP_MEMORY_DESCRIPTOR64;


typedef struct _MINIDUMP_HEADER {
    ULONG32 Signature;
    ULONG32 Version;
    ULONG32 NumberOfStreams;
    RVA StreamDirectoryRva;
    ULONG32 CheckSum;
    union {
        ULONG32 Reserved;
        ULONG32 TimeDateStamp;
    };
    ULONG64 Flags;
} MINIDUMP_HEADER, *PMINIDUMP_HEADER;






typedef struct _MINIDUMP_DIRECTORY {
    ULONG32 StreamType;
    MINIDUMP_LOCATION_DESCRIPTOR Location;
} MINIDUMP_DIRECTORY, *PMINIDUMP_DIRECTORY;


typedef struct _MINIDUMP_STRING {
    ULONG32 Length;
    WCHAR Buffer [0];
} MINIDUMP_STRING, *PMINIDUMP_STRING;
# 3651 "project/mimikatz/inc/DbgHelp.h"
typedef enum _MINIDUMP_STREAM_TYPE {

    UnusedStream = 0,
    ReservedStream0 = 1,
    ReservedStream1 = 2,
    ThreadListStream = 3,
    ModuleListStream = 4,
    MemoryListStream = 5,
    ExceptionStream = 6,
    SystemInfoStream = 7,
    ThreadExListStream = 8,
    Memory64ListStream = 9,
    CommentStreamA = 10,
    CommentStreamW = 11,
    HandleDataStream = 12,
    FunctionTableStream = 13,
    UnloadedModuleListStream = 14,
    MiscInfoStream = 15,
    MemoryInfoListStream = 16,
    ThreadInfoListStream = 17,
    HandleOperationListStream = 18,
    TokenStream = 19,

    ceStreamNull = 0x8000,
    ceStreamSystemInfo = 0x8001,
    ceStreamException = 0x8002,
    ceStreamModuleList = 0x8003,
    ceStreamProcessList = 0x8004,
    ceStreamThreadList = 0x8005,
    ceStreamThreadContextList = 0x8006,
    ceStreamThreadCallStackList = 0x8007,
    ceStreamMemoryVirtualList = 0x8008,
    ceStreamMemoryPhysicalList = 0x8009,
    ceStreamBucketParameters = 0x800A,
    ceStreamProcessModuleMap = 0x800B,
    ceStreamDiagnosisList = 0x800C,

    LastReservedStream = 0xffff

} MINIDUMP_STREAM_TYPE;
# 3709 "project/mimikatz/inc/DbgHelp.h"
typedef union _CPU_INFORMATION {





    struct {






        ULONG32 VendorId [ 3 ];





        ULONG32 VersionInformation;





        ULONG32 FeatureInformation;







        ULONG32 AMDExtendedCpuFeatures;

    } X86CpuInfo;





    struct {

        ULONG64 ProcessorFeatures [ 2 ];

    } OtherCpuInfo;

} CPU_INFORMATION, *PCPU_INFORMATION;

typedef struct _MINIDUMP_SYSTEM_INFO {






    USHORT ProcessorArchitecture;
    USHORT ProcessorLevel;
    USHORT ProcessorRevision;

    union {
        USHORT Reserved0;
        struct {
            UCHAR NumberOfProcessors;
            UCHAR ProductType;
        };
    };







    ULONG32 MajorVersion;
    ULONG32 MinorVersion;
    ULONG32 BuildNumber;
    ULONG32 PlatformId;





    RVA CSDVersionRva;

    union {
        ULONG32 Reserved1;
        struct {
            USHORT SuiteMask;
            USHORT Reserved2;
        };
    };

    CPU_INFORMATION Cpu;

} MINIDUMP_SYSTEM_INFO, *PMINIDUMP_SYSTEM_INFO;
# 3819 "project/mimikatz/inc/DbgHelp.h"
C_ASSERT (sizeof ( ((PPROCESS_INFORMATION)0)->dwThreadId ) == 4);

typedef struct _MINIDUMP_THREAD {
    ULONG32 ThreadId;
    ULONG32 SuspendCount;
    ULONG32 PriorityClass;
    ULONG32 Priority;
    ULONG64 Teb;
    MINIDUMP_MEMORY_DESCRIPTOR Stack;
    MINIDUMP_LOCATION_DESCRIPTOR ThreadContext;
} MINIDUMP_THREAD, *PMINIDUMP_THREAD;





typedef struct _MINIDUMP_THREAD_LIST {
    ULONG32 NumberOfThreads;
    MINIDUMP_THREAD Threads [0];
} MINIDUMP_THREAD_LIST, *PMINIDUMP_THREAD_LIST;


typedef struct _MINIDUMP_THREAD_EX {
    ULONG32 ThreadId;
    ULONG32 SuspendCount;
    ULONG32 PriorityClass;
    ULONG32 Priority;
    ULONG64 Teb;
    MINIDUMP_MEMORY_DESCRIPTOR Stack;
    MINIDUMP_LOCATION_DESCRIPTOR ThreadContext;
    MINIDUMP_MEMORY_DESCRIPTOR BackingStore;
} MINIDUMP_THREAD_EX, *PMINIDUMP_THREAD_EX;





typedef struct _MINIDUMP_THREAD_EX_LIST {
    ULONG32 NumberOfThreads;
    MINIDUMP_THREAD_EX Threads [0];
} MINIDUMP_THREAD_EX_LIST, *PMINIDUMP_THREAD_EX_LIST;






typedef struct _MINIDUMP_EXCEPTION {
    ULONG32 ExceptionCode;
    ULONG32 ExceptionFlags;
    ULONG64 ExceptionRecord;
    ULONG64 ExceptionAddress;
    ULONG32 NumberParameters;
    ULONG32 __unusedAlignment;
    ULONG64 ExceptionInformation [ EXCEPTION_MAXIMUM_PARAMETERS ];
} MINIDUMP_EXCEPTION, *PMINIDUMP_EXCEPTION;
# 3884 "project/mimikatz/inc/DbgHelp.h"
typedef struct MINIDUMP_EXCEPTION_STREAM {
    ULONG32 ThreadId;
    ULONG32 __alignment;
    MINIDUMP_EXCEPTION ExceptionRecord;
    MINIDUMP_LOCATION_DESCRIPTOR ThreadContext;
} MINIDUMP_EXCEPTION_STREAM, *PMINIDUMP_EXCEPTION_STREAM;
# 3899 "project/mimikatz/inc/DbgHelp.h"
typedef struct _MINIDUMP_MODULE {
    ULONG64 BaseOfImage;
    ULONG32 SizeOfImage;
    ULONG32 CheckSum;
    ULONG32 TimeDateStamp;
    RVA ModuleNameRva;
    VS_FIXEDFILEINFO VersionInfo;
    MINIDUMP_LOCATION_DESCRIPTOR CvRecord;
    MINIDUMP_LOCATION_DESCRIPTOR MiscRecord;
    ULONG64 Reserved0;
    ULONG64 Reserved1;
} MINIDUMP_MODULE, *PMINIDUMP_MODULE;






typedef struct _MINIDUMP_MODULE_LIST {
    ULONG32 NumberOfModules;
    MINIDUMP_MODULE Modules [ 0 ];
} MINIDUMP_MODULE_LIST, *PMINIDUMP_MODULE_LIST;






typedef struct _MINIDUMP_MEMORY_LIST {
    ULONG32 NumberOfMemoryRanges;
    MINIDUMP_MEMORY_DESCRIPTOR MemoryRanges [0];
} MINIDUMP_MEMORY_LIST, *PMINIDUMP_MEMORY_LIST;

typedef struct _MINIDUMP_MEMORY64_LIST {
    ULONG64 NumberOfMemoryRanges;
    RVA64 BaseRva;
    MINIDUMP_MEMORY_DESCRIPTOR64 MemoryRanges [0];
} MINIDUMP_MEMORY64_LIST, *PMINIDUMP_MEMORY64_LIST;






typedef struct _MINIDUMP_EXCEPTION_INFORMATION {
    DWORD ThreadId;
    PEXCEPTION_POINTERS ExceptionPointers;
    BOOL ClientPointers;
} MINIDUMP_EXCEPTION_INFORMATION, *PMINIDUMP_EXCEPTION_INFORMATION;

typedef struct _MINIDUMP_EXCEPTION_INFORMATION64 {
    DWORD ThreadId;
    ULONG64 ExceptionRecord;
    ULONG64 ContextRecord;
    BOOL ClientPointers;
} MINIDUMP_EXCEPTION_INFORMATION64, *PMINIDUMP_EXCEPTION_INFORMATION64;
# 3966 "project/mimikatz/inc/DbgHelp.h"
typedef enum _MINIDUMP_HANDLE_OBJECT_INFORMATION_TYPE {
    MiniHandleObjectInformationNone,
    MiniThreadInformation1,
    MiniMutantInformation1,
    MiniMutantInformation2,
    MiniProcessInformation1,
    MiniProcessInformation2,
    MiniHandleObjectInformationTypeMax
} MINIDUMP_HANDLE_OBJECT_INFORMATION_TYPE;

typedef struct _MINIDUMP_HANDLE_OBJECT_INFORMATION {
    RVA NextInfoRva;
    ULONG32 InfoType;
    ULONG32 SizeOfInfo;

} MINIDUMP_HANDLE_OBJECT_INFORMATION;

typedef struct _MINIDUMP_HANDLE_DESCRIPTOR {
    ULONG64 Handle;
    RVA TypeNameRva;
    RVA ObjectNameRva;
    ULONG32 Attributes;
    ULONG32 GrantedAccess;
    ULONG32 HandleCount;
    ULONG32 PointerCount;
} MINIDUMP_HANDLE_DESCRIPTOR, *PMINIDUMP_HANDLE_DESCRIPTOR;

typedef struct _MINIDUMP_HANDLE_DESCRIPTOR_2 {
    ULONG64 Handle;
    RVA TypeNameRva;
    RVA ObjectNameRva;
    ULONG32 Attributes;
    ULONG32 GrantedAccess;
    ULONG32 HandleCount;
    ULONG32 PointerCount;
    RVA ObjectInfoRva;
    ULONG32 Reserved0;
} MINIDUMP_HANDLE_DESCRIPTOR_2, *PMINIDUMP_HANDLE_DESCRIPTOR_2;


typedef MINIDUMP_HANDLE_DESCRIPTOR_2 MINIDUMP_HANDLE_DESCRIPTOR_N;
typedef MINIDUMP_HANDLE_DESCRIPTOR_N *PMINIDUMP_HANDLE_DESCRIPTOR_N;

typedef struct _MINIDUMP_HANDLE_DATA_STREAM {
    ULONG32 SizeOfHeader;
    ULONG32 SizeOfDescriptor;
    ULONG32 NumberOfDescriptors;
    ULONG32 Reserved;
} MINIDUMP_HANDLE_DATA_STREAM, *PMINIDUMP_HANDLE_DATA_STREAM;







typedef struct _MINIDUMP_HANDLE_OPERATION_LIST {
    ULONG32 SizeOfHeader;
    ULONG32 SizeOfEntry;
    ULONG32 NumberOfEntries;
    ULONG32 Reserved;
} MINIDUMP_HANDLE_OPERATION_LIST, *PMINIDUMP_HANDLE_OPERATION_LIST;






typedef struct _MINIDUMP_FUNCTION_TABLE_DESCRIPTOR {
    ULONG64 MinimumAddress;
    ULONG64 MaximumAddress;
    ULONG64 BaseAddress;
    ULONG32 EntryCount;
    ULONG32 SizeOfAlignPad;
} MINIDUMP_FUNCTION_TABLE_DESCRIPTOR, *PMINIDUMP_FUNCTION_TABLE_DESCRIPTOR;

typedef struct _MINIDUMP_FUNCTION_TABLE_STREAM {
    ULONG32 SizeOfHeader;
    ULONG32 SizeOfDescriptor;
    ULONG32 SizeOfNativeDescriptor;
    ULONG32 SizeOfFunctionEntry;
    ULONG32 NumberOfDescriptors;
    ULONG32 SizeOfAlignPad;
} MINIDUMP_FUNCTION_TABLE_STREAM, *PMINIDUMP_FUNCTION_TABLE_STREAM;
# 4059 "project/mimikatz/inc/DbgHelp.h"
typedef struct _MINIDUMP_UNLOADED_MODULE {
    ULONG64 BaseOfImage;
    ULONG32 SizeOfImage;
    ULONG32 CheckSum;
    ULONG32 TimeDateStamp;
    RVA ModuleNameRva;
} MINIDUMP_UNLOADED_MODULE, *PMINIDUMP_UNLOADED_MODULE;






typedef struct _MINIDUMP_UNLOADED_MODULE_LIST {
    ULONG32 SizeOfHeader;
    ULONG32 SizeOfEntry;
    ULONG32 NumberOfEntries;
} MINIDUMP_UNLOADED_MODULE_LIST, *PMINIDUMP_UNLOADED_MODULE_LIST;
# 4086 "project/mimikatz/inc/DbgHelp.h"
#define MINIDUMP_MISC1_PROCESS_ID 0x00000001
#define MINIDUMP_MISC1_PROCESS_TIMES 0x00000002
#define MINIDUMP_MISC1_PROCESSOR_POWER_INFO 0x00000004
#define MINIDUMP_MISC3_PROCESS_INTEGRITY 0x00000010
#define MINIDUMP_MISC3_PROCESS_EXECUTE_FLAGS 0x00000020
#define MINIDUMP_MISC3_TIMEZONE 0x00000040
#define MINIDUMP_MISC3_PROTECTED_PROCESS 0x00000080

typedef struct _MINIDUMP_MISC_INFO {
    ULONG32 SizeOfInfo;
    ULONG32 Flags1;
    ULONG32 ProcessId;
    ULONG32 ProcessCreateTime;
    ULONG32 ProcessUserTime;
    ULONG32 ProcessKernelTime;
} MINIDUMP_MISC_INFO, *PMINIDUMP_MISC_INFO;

typedef struct _MINIDUMP_MISC_INFO_2 {
    ULONG32 SizeOfInfo;
    ULONG32 Flags1;
    ULONG32 ProcessId;
    ULONG32 ProcessCreateTime;
    ULONG32 ProcessUserTime;
    ULONG32 ProcessKernelTime;
    ULONG32 ProcessorMaxMhz;
    ULONG32 ProcessorCurrentMhz;
    ULONG32 ProcessorMhzLimit;
    ULONG32 ProcessorMaxIdleState;
    ULONG32 ProcessorCurrentIdleState;
} MINIDUMP_MISC_INFO_2, *PMINIDUMP_MISC_INFO_2;

typedef struct _MINIDUMP_MISC_INFO_3 {
    ULONG32 SizeOfInfo;
    ULONG32 Flags1;
    ULONG32 ProcessId;
    ULONG32 ProcessCreateTime;
    ULONG32 ProcessUserTime;
    ULONG32 ProcessKernelTime;
    ULONG32 ProcessorMaxMhz;
    ULONG32 ProcessorCurrentMhz;
    ULONG32 ProcessorMhzLimit;
    ULONG32 ProcessorMaxIdleState;
    ULONG32 ProcessorCurrentIdleState;
    ULONG32 ProcessIntegrityLevel;
    ULONG32 ProcessExecuteFlags;
    ULONG32 ProtectedProcess;
    ULONG32 TimeZoneId;
    TIME_ZONE_INFORMATION TimeZone;
} MINIDUMP_MISC_INFO_3, *PMINIDUMP_MISC_INFO_3;


typedef MINIDUMP_MISC_INFO_3 MINIDUMP_MISC_INFO_N;
typedef MINIDUMP_MISC_INFO_N* PMINIDUMP_MISC_INFO_N;
# 4148 "project/mimikatz/inc/DbgHelp.h"
typedef struct _MINIDUMP_MEMORY_INFO {
    ULONG64 BaseAddress;
    ULONG64 AllocationBase;
    ULONG32 AllocationProtect;
    ULONG32 __alignment1;
    ULONG64 RegionSize;
    ULONG32 State;
    ULONG32 Protect;
    ULONG32 Type;
    ULONG32 __alignment2;
} MINIDUMP_MEMORY_INFO, *PMINIDUMP_MEMORY_INFO;

typedef struct _MINIDUMP_MEMORY_INFO_LIST {
    ULONG SizeOfHeader;
    ULONG SizeOfEntry;
    ULONG64 NumberOfEntries;
} MINIDUMP_MEMORY_INFO_LIST, *PMINIDUMP_MEMORY_INFO_LIST;
# 4175 "project/mimikatz/inc/DbgHelp.h"
#define MINIDUMP_THREAD_INFO_ERROR_THREAD 0x00000001
#define MINIDUMP_THREAD_INFO_WRITING_THREAD 0x00000002
#define MINIDUMP_THREAD_INFO_EXITED_THREAD 0x00000004
#define MINIDUMP_THREAD_INFO_INVALID_INFO 0x00000008
#define MINIDUMP_THREAD_INFO_INVALID_CONTEXT 0x00000010
#define MINIDUMP_THREAD_INFO_INVALID_TEB 0x00000020

typedef struct _MINIDUMP_THREAD_INFO {
    ULONG32 ThreadId;
    ULONG32 DumpFlags;
    ULONG32 DumpError;
    ULONG32 ExitStatus;
    ULONG64 CreateTime;
    ULONG64 ExitTime;
    ULONG64 KernelTime;
    ULONG64 UserTime;
    ULONG64 StartAddress;
    ULONG64 Affinity;
} MINIDUMP_THREAD_INFO, *PMINIDUMP_THREAD_INFO;

typedef struct _MINIDUMP_THREAD_INFO_LIST {
    ULONG SizeOfHeader;
    ULONG SizeOfEntry;
    ULONG NumberOfEntries;
} MINIDUMP_THREAD_INFO_LIST, *PMINIDUMP_THREAD_INFO_LIST;




typedef struct _MINIDUMP_TOKEN_INFO_HEADER {
    ULONG TokenSize;
    ULONG TokenId;
    ULONG64 TokenHandle;
} MINIDUMP_TOKEN_INFO_HEADER, *PMINIDUMP_TOKEN_INFO_HEADER;

typedef struct _MINIDUMP_TOKEN_INFO_LIST {
    ULONG TokenListSize;
    ULONG TokenListEntries;
    ULONG ListHeaderSize;
    ULONG ElementHeaderSize;
} MINIDUMP_TOKEN_INFO_LIST, *PMINIDUMP_TOKEN_INFO_LIST;





typedef struct _MINIDUMP_USER_RECORD {
    ULONG32 Type;
    MINIDUMP_LOCATION_DESCRIPTOR Memory;
} MINIDUMP_USER_RECORD, *PMINIDUMP_USER_RECORD;


typedef struct _MINIDUMP_USER_STREAM {
    ULONG32 Type;
    ULONG BufferSize;
    PVOID Buffer;

} MINIDUMP_USER_STREAM, *PMINIDUMP_USER_STREAM;


typedef struct _MINIDUMP_USER_STREAM_INFORMATION {
    ULONG UserStreamCount;
    PMINIDUMP_USER_STREAM UserStreamArray;
} MINIDUMP_USER_STREAM_INFORMATION, *PMINIDUMP_USER_STREAM_INFORMATION;





typedef enum _MINIDUMP_CALLBACK_TYPE {
    ModuleCallback,
    ThreadCallback,
    ThreadExCallback,
    IncludeThreadCallback,
    IncludeModuleCallback,
    MemoryCallback,
    CancelCallback,
    WriteKernelMinidumpCallback,
    KernelMinidumpStatusCallback,
    RemoveMemoryCallback,
    IncludeVmRegionCallback,
    IoStartCallback,
    IoWriteAllCallback,
    IoFinishCallback,
    ReadMemoryFailureCallback,
    SecondaryFlagsCallback,
} MINIDUMP_CALLBACK_TYPE;


typedef struct _MINIDUMP_THREAD_CALLBACK {
    ULONG ThreadId;
    HANDLE ThreadHandle;
    CONTEXT Context;
    ULONG SizeOfContext;
    ULONG64 StackBase;
    ULONG64 StackEnd;
} MINIDUMP_THREAD_CALLBACK, *PMINIDUMP_THREAD_CALLBACK;


typedef struct _MINIDUMP_THREAD_EX_CALLBACK {
    ULONG ThreadId;
    HANDLE ThreadHandle;
    CONTEXT Context;
    ULONG SizeOfContext;
    ULONG64 StackBase;
    ULONG64 StackEnd;
    ULONG64 BackingStoreBase;
    ULONG64 BackingStoreEnd;
} MINIDUMP_THREAD_EX_CALLBACK, *PMINIDUMP_THREAD_EX_CALLBACK;


typedef struct _MINIDUMP_INCLUDE_THREAD_CALLBACK {
    ULONG ThreadId;
} MINIDUMP_INCLUDE_THREAD_CALLBACK, *PMINIDUMP_INCLUDE_THREAD_CALLBACK;


typedef enum _THREAD_WRITE_FLAGS {
    ThreadWriteThread = 0x0001,
    ThreadWriteStack = 0x0002,
    ThreadWriteContext = 0x0004,
    ThreadWriteBackingStore = 0x0008,
    ThreadWriteInstructionWindow = 0x0010,
    ThreadWriteThreadData = 0x0020,
    ThreadWriteThreadInfo = 0x0040,
} THREAD_WRITE_FLAGS;

typedef struct _MINIDUMP_MODULE_CALLBACK {
    PWCHAR FullPath;
    ULONG64 BaseOfImage;
    ULONG SizeOfImage;
    ULONG CheckSum;
    ULONG TimeDateStamp;
    VS_FIXEDFILEINFO VersionInfo;
    PVOID CvRecord;
    ULONG SizeOfCvRecord;
    PVOID MiscRecord;
    ULONG SizeOfMiscRecord;
} MINIDUMP_MODULE_CALLBACK, *PMINIDUMP_MODULE_CALLBACK;


typedef struct _MINIDUMP_INCLUDE_MODULE_CALLBACK {
    ULONG64 BaseOfImage;
} MINIDUMP_INCLUDE_MODULE_CALLBACK, *PMINIDUMP_INCLUDE_MODULE_CALLBACK;


typedef enum _MODULE_WRITE_FLAGS {
    ModuleWriteModule = 0x0001,
    ModuleWriteDataSeg = 0x0002,
    ModuleWriteMiscRecord = 0x0004,
    ModuleWriteCvRecord = 0x0008,
    ModuleReferencedByMemory = 0x0010,
    ModuleWriteTlsData = 0x0020,
    ModuleWriteCodeSegs = 0x0040,
} MODULE_WRITE_FLAGS;


typedef struct _MINIDUMP_IO_CALLBACK {
    HANDLE Handle;
    ULONG64 Offset;
    PVOID Buffer;
    ULONG BufferBytes;
} MINIDUMP_IO_CALLBACK, *PMINIDUMP_IO_CALLBACK;


typedef struct _MINIDUMP_READ_MEMORY_FAILURE_CALLBACK
{
    ULONG64 Offset;
    ULONG Bytes;
    HRESULT FailureStatus;
} MINIDUMP_READ_MEMORY_FAILURE_CALLBACK,
  *PMINIDUMP_READ_MEMORY_FAILURE_CALLBACK;


typedef struct _MINIDUMP_CALLBACK_INPUT {
    ULONG ProcessId;
    HANDLE ProcessHandle;
    ULONG CallbackType;
    union {
        HRESULT Status;
        MINIDUMP_THREAD_CALLBACK Thread;
        MINIDUMP_THREAD_EX_CALLBACK ThreadEx;
        MINIDUMP_MODULE_CALLBACK Module;
        MINIDUMP_INCLUDE_THREAD_CALLBACK IncludeThread;
        MINIDUMP_INCLUDE_MODULE_CALLBACK IncludeModule;
        MINIDUMP_IO_CALLBACK Io;
        MINIDUMP_READ_MEMORY_FAILURE_CALLBACK ReadMemoryFailure;
        ULONG SecondaryFlags;
    };
} MINIDUMP_CALLBACK_INPUT, *PMINIDUMP_CALLBACK_INPUT;

typedef struct _MINIDUMP_CALLBACK_OUTPUT {
    union {
        ULONG ModuleWriteFlags;
        ULONG ThreadWriteFlags;
        ULONG SecondaryFlags;
        struct {
            ULONG64 MemoryBase;
            ULONG MemorySize;
        };
        struct {
            BOOL CheckCancel;
            BOOL Cancel;
        };
        HANDLE Handle;
        struct {
            MINIDUMP_MEMORY_INFO VmRegion;
            BOOL Continue;
        };
        HRESULT Status;
    };
} MINIDUMP_CALLBACK_OUTPUT, *PMINIDUMP_CALLBACK_OUTPUT;
# 4463 "project/mimikatz/inc/DbgHelp.h"
typedef enum _MINIDUMP_TYPE {
    MiniDumpNormal = 0x00000000,
    MiniDumpWithDataSegs = 0x00000001,
    MiniDumpWithFullMemory = 0x00000002,
    MiniDumpWithHandleData = 0x00000004,
    MiniDumpFilterMemory = 0x00000008,
    MiniDumpScanMemory = 0x00000010,
    MiniDumpWithUnloadedModules = 0x00000020,
    MiniDumpWithIndirectlyReferencedMemory = 0x00000040,
    MiniDumpFilterModulePaths = 0x00000080,
    MiniDumpWithProcessThreadData = 0x00000100,
    MiniDumpWithPrivateReadWriteMemory = 0x00000200,
    MiniDumpWithoutOptionalData = 0x00000400,
    MiniDumpWithFullMemoryInfo = 0x00000800,
    MiniDumpWithThreadInfo = 0x00001000,
    MiniDumpWithCodeSegs = 0x00002000,
    MiniDumpWithoutAuxiliaryState = 0x00004000,
    MiniDumpWithFullAuxiliaryState = 0x00008000,
    MiniDumpWithPrivateWriteCopyMemory = 0x00010000,
    MiniDumpIgnoreInaccessibleMemory = 0x00020000,
    MiniDumpWithTokenInformation = 0x00040000,
    MiniDumpValidTypeFlags = 0x0007ffff,
} MINIDUMP_TYPE;
# 4498 "project/mimikatz/inc/DbgHelp.h"
typedef enum _MINIDUMP_SECONDARY_FLAGS {
    MiniSecondaryWithoutPowerInfo = 0x00000001,

    MiniSecondaryValidFlags = 0x00000001,
} MINIDUMP_SECONDARY_FLAGS;
# 4511 "project/mimikatz/inc/DbgHelp.h"
typedef
BOOL
(WINAPI * MINIDUMP_CALLBACK_ROUTINE) (
    __inout PVOID CallbackParam,
    __in PMINIDUMP_CALLBACK_INPUT CallbackInput,
    __inout PMINIDUMP_CALLBACK_OUTPUT CallbackOutput
    );

typedef struct _MINIDUMP_CALLBACK_INFORMATION {
    MINIDUMP_CALLBACK_ROUTINE CallbackRoutine;
    PVOID CallbackParam;
} MINIDUMP_CALLBACK_INFORMATION, *PMINIDUMP_CALLBACK_INFORMATION;
# 4551 "project/mimikatz/inc/DbgHelp.h"
#define RVA_TO_ADDR(Mapping,Rva) ((PVOID)(((ULONG_PTR) (Mapping)) + (Rva)))

BOOL
WINAPI
MiniDumpWriteDump(
    __in HANDLE hProcess,
    __in DWORD ProcessId,
    __in HANDLE hFile,
    __in MINIDUMP_TYPE DumpType,
    __in_opt PMINIDUMP_EXCEPTION_INFORMATION ExceptionParam,
    __in_opt PMINIDUMP_USER_STREAM_INFORMATION UserStreamParam,
    __in_opt PMINIDUMP_CALLBACK_INFORMATION CallbackParam
    );

BOOL
WINAPI
MiniDumpReadDumpStream(
    __in PVOID BaseOfDump,
    __in ULONG StreamNumber,
    __deref_out_opt PMINIDUMP_DIRECTORY * Dir,
    __deref_out_opt PVOID * StreamPointer,
    __out_opt ULONG * StreamSize
    );

#if defined(_MSC_VER)
#if _MSC_VER >= 800
#if _MSC_VER >= 1200
#pragma warning(pop)
#else
#pragma warning(default:4200)
#pragma warning(default:4201)
#endif
#endif
#endif

#include <poppack.h>

#ifdef __cplusplus
}
#endif


#endif
