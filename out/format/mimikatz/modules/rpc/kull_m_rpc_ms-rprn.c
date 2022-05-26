# 1 "project/mimikatz/modules/rpc/kull_m_rpc_ms-rprn.c"
#include "kull_m_rpc_ms-rprn.h"

typedef struct _ms2Drprn_MIDL_TYPE_FORMAT_STRING {
 SHORT Pad;
#if defined(_M_X64) || defined(_M_ARM64)
 UCHAR Format[649];
#elif defined(_M_IX86)
 UCHAR Format[985];
#endif
} ms2Drprn_MIDL_TYPE_FORMAT_STRING;

typedef struct _ms2Drprn_MIDL_PROC_FORMAT_STRING {
 SHORT Pad;
#if defined(_M_X64) || defined(_M_ARM64)
 UCHAR Format[515];
#elif defined(_M_IX86)
 UCHAR Format[499];
#endif
} ms2Drprn_MIDL_PROC_FORMAT_STRING;

extern const ms2Drprn_MIDL_TYPE_FORMAT_STRING ms2Drprn__MIDL_TypeFormatString;
extern const ms2Drprn_MIDL_PROC_FORMAT_STRING ms2Drprn__MIDL_ProcFormatString;
static const RPC_PROTSEQ_ENDPOINT __RpcProtseqEndpoint[] = {{(unsigned char *) "ncacn_np", (unsigned char *) "\\pipe\\spoolss"}};
static const RPC_CLIENT_INTERFACE winspool___RpcClientInterface = {sizeof(RPC_CLIENT_INTERFACE), {{0x12345678, 0x1234, 0xabcd, {0xef, 0x00, 0x01, 0x23, 0x45, 0x67, 0x89, 0xab}}, {1, 0}}, {{0x8a885d04, 0x1ceb, 0x11c9, {0x9f, 0xe8, 0x08, 0x00, 0x2b, 0x10, 0x48, 0x60}}, {2, 0}}, 0, 1, (RPC_PROTSEQ_ENDPOINT *)__RpcProtseqEndpoint, 0, 0, 0x00000000};
RPC_IF_HANDLE winspool_v1_0_c_ifspec = (RPC_IF_HANDLE) &winspool___RpcClientInterface;
static RPC_BINDING_HANDLE winspool__MIDL_AutoBindHandle;
static const GENERIC_BINDING_ROUTINE_PAIR BindingRoutines[] = {{(GENERIC_BINDING_ROUTINE) STRING_HANDLE_bind, (GENERIC_UNBIND_ROUTINE) STRING_HANDLE_unbind}};
static const MIDL_STUB_DESC winspool_StubDesc = {(void *) &winspool___RpcClientInterface, MIDL_user_allocate, MIDL_user_free, &winspool__MIDL_AutoBindHandle, 0, BindingRoutines, 0, 0, ms2Drprn__MIDL_TypeFormatString.Format, 1, 0x60000, 0, 0x801026e, 0, 0, 0, 0x1, 0, 0, 0};

#if defined(_M_X64) || defined(_M_ARM64)
DWORD RpcOpenPrinter(STRING_HANDLE pPrinterName, PRINTER_HANDLE *pHandle, wchar_t *pDatatype, DEVMODE_CONTAINER *pDevModeContainer, DWORD AccessRequired)
{
 return (DWORD) NdrClientCall2((PMIDL_STUB_DESC) &winspool_StubDesc, (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[0], pPrinterName, pHandle, pDatatype, pDevModeContainer, AccessRequired).Simple;
}
DWORD RpcEnumPrinterDrivers(STRING_HANDLE pName, wchar_t *pEnvironment, DWORD Level, BYTE *pDrivers, DWORD cbBuf, DWORD *pcbNeeded, DWORD *pcReturned)
{
 return (DWORD) NdrClientCall2((PMIDL_STUB_DESC) &winspool_StubDesc, (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[68], pName, pEnvironment, Level, pDrivers, cbBuf, pcbNeeded, pcReturned).Simple;
}
DWORD RpcGetPrinterDriverDirectory(STRING_HANDLE pName, wchar_t *pEnvironment, DWORD Level, BYTE *pDriverDirectory, DWORD cbBuf, DWORD *pcbNeeded)
{
 return (DWORD) NdrClientCall2((PMIDL_STUB_DESC) &winspool_StubDesc, (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[148], pName, pEnvironment, Level, pDriverDirectory, cbBuf, pcbNeeded).Simple;
}
DWORD RpcClosePrinter(PRINTER_HANDLE *phPrinter)
{
 return (DWORD) NdrClientCall2((PMIDL_STUB_DESC) &winspool_StubDesc, (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[222], phPrinter).Simple;
}
DWORD RpcFindClosePrinterChangeNotification(PRINTER_HANDLE hPrinter)
{
 return (DWORD) NdrClientCall2((PMIDL_STUB_DESC) &winspool_StubDesc, (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[266], hPrinter).Simple;
}
DWORD RpcRemoteFindFirstPrinterChangeNotification(PRINTER_HANDLE hPrinter, DWORD fdwFlags, DWORD fdwOptions, wchar_t *pszLocalMachine, DWORD dwPrinterLocal, DWORD cbBuffer, BYTE *pBuffer)
{
 return (DWORD) NdrClientCall2((PMIDL_STUB_DESC) &winspool_StubDesc, (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[310], hPrinter, fdwFlags, fdwOptions, pszLocalMachine, dwPrinterLocal, cbBuffer, pBuffer).Simple;
}
DWORD RpcDeletePrinterDriverEx(STRING_HANDLE pName, wchar_t *pEnvironment, wchar_t *pDriverName, DWORD dwDeleteFlag, DWORD dwVersionNum)
{
 return (DWORD) NdrClientCall2((PMIDL_STUB_DESC) &winspool_StubDesc, (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[390], pName, pEnvironment, pDriverName, dwDeleteFlag, dwVersionNum).Simple;
}
DWORD RpcAddPrinterDriverEx(STRING_HANDLE pName, DRIVER_CONTAINER *pDriverContainer, DWORD dwFileCopyFlags)
{
 return (DWORD) NdrClientCall2((PMIDL_STUB_DESC) &winspool_StubDesc, (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[458], pName, pDriverContainer, dwFileCopyFlags).Simple;
}

static const ms2Drprn_MIDL_PROC_FORMAT_STRING ms2Drprn__MIDL_ProcFormatString = {0, {
 0x00, 0x48, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x30, 0x00, 0x31, 0x08, 0x00, 0x00, 0x00, 0x5c, 0x08, 0x00, 0x40, 0x00, 0x46, 0x06, 0x0a, 0x05, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x0b, 0x00, 0x00, 0x00, 0x02, 0x00, 0x10, 0x01, 0x08, 0x00, 0x0a, 0x00, 0x0b, 0x00, 0x10, 0x00, 0x02, 0x00, 0x0b, 0x01, 0x18, 0x00, 0x1e, 0x00, 0x48, 0x00, 0x20, 0x00, 0x08, 0x00, 0x70, 0x00,
 0x28, 0x00, 0x08, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x40, 0x00, 0x31, 0x08, 0x00, 0x00, 0x00, 0x5c, 0x10, 0x00, 0x40, 0x00, 0x47, 0x08, 0x0a, 0x07, 0x01, 0x00, 0x01, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x02, 0x00, 0x0b, 0x00, 0x08, 0x00, 0x02, 0x00, 0x48, 0x00, 0x10, 0x00, 0x08, 0x00, 0x1b, 0x00, 0x18, 0x00, 0x2e, 0x00, 0x48, 0x00, 0x20, 0x00,
 0x08, 0x00, 0x50, 0x21, 0x28, 0x00, 0x08, 0x00, 0x50, 0x21, 0x30, 0x00, 0x08, 0x00, 0x70, 0x00, 0x38, 0x00, 0x08, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x38, 0x00, 0x31, 0x08,
 0x00, 0x00, 0x00, 0x5c, 0x10, 0x00, 0x24, 0x00, 0x47, 0x07, 0x0a, 0x07, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x02, 0x00, 0x0b, 0x00, 0x08, 0x00, 0x02, 0x00,
 0x48, 0x00, 0x10, 0x00, 0x08, 0x00, 0x1b, 0x00, 0x18, 0x00, 0x2e, 0x00, 0x48, 0x00, 0x20, 0x00, 0x08, 0x00, 0x50, 0x21, 0x28, 0x00, 0x08, 0x00, 0x70, 0x00, 0x30, 0x00, 0x08, 0x00, 0x00, 0x48,
 0x00, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x10, 0x00, 0x30, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x40, 0x00, 0x44, 0x02, 0x0a, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x01,
 0x00, 0x00, 0x46, 0x00, 0x70, 0x00, 0x08, 0x00, 0x08, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x10, 0x00, 0x30, 0x40, 0x00, 0x00, 0x00, 0x00, 0x24, 0x00, 0x08, 0x00, 0x44, 0x02,
 0x0a, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x4a, 0x00, 0x70, 0x00, 0x08, 0x00, 0x08, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x40, 0x00,
 0x30, 0x40, 0x00, 0x00, 0x00, 0x00, 0x44, 0x00, 0x08, 0x00, 0x47, 0x08, 0x0a, 0x07, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x4a, 0x00, 0x48, 0x00, 0x08, 0x00,
 0x08, 0x00, 0x48, 0x00, 0x10, 0x00, 0x08, 0x00, 0x0b, 0x00, 0x18, 0x00, 0x02, 0x00, 0x48, 0x00, 0x20, 0x00, 0x08, 0x00, 0x88, 0x00, 0x28, 0x00, 0x4e, 0x00, 0x1b, 0x00, 0x30, 0x00, 0x58, 0x00,
 0x70, 0x00, 0x38, 0x00, 0x08, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x00, 0x54, 0x00, 0x30, 0x00, 0x31, 0x08, 0x00, 0x00, 0x00, 0x5c, 0x10, 0x00, 0x08, 0x00, 0x46, 0x06, 0x0a, 0x01, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x02, 0x00, 0x0b, 0x01, 0x08, 0x00, 0x6a, 0x00, 0x0b, 0x01, 0x10, 0x00, 0x6a, 0x00, 0x48, 0x00, 0x18, 0x00, 0x08, 0x00, 0x48, 0x00,
 0x20, 0x00, 0x08, 0x00, 0x70, 0x00, 0x28, 0x00, 0x08, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x00, 0x59, 0x00, 0x20, 0x00, 0x31, 0x08, 0x00, 0x00, 0x00, 0x5c, 0x08, 0x00, 0x08, 0x00, 0x46, 0x04,
 0x0a, 0x05, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x02, 0x00, 0x0b, 0x01, 0x08, 0x00, 0x78, 0x02, 0x48, 0x00, 0x10, 0x00, 0x08, 0x00, 0x70, 0x00, 0x18, 0x00,
 0x08, 0x00, 0x00,
}};
static const ms2Drprn_MIDL_TYPE_FORMAT_STRING ms2Drprn__MIDL_TypeFormatString = {0, {
 0x00, 0x00, 0x12, 0x08, 0x25, 0x5c, 0x11, 0x04, 0x02, 0x00, 0x30, 0xa0, 0x00, 0x00, 0x11, 0x00, 0x0e, 0x00, 0x1b, 0x00, 0x01, 0x00, 0x19, 0x00, 0x00, 0x00, 0x01, 0x00, 0x02, 0x5b, 0x1a, 0x03,
 0x10, 0x00, 0x00, 0x00, 0x06, 0x00, 0x08, 0x40, 0x36, 0x5b, 0x12, 0x00, 0xe6, 0xff, 0x12, 0x00, 0x02, 0x00, 0x1b, 0x00, 0x01, 0x00, 0x29, 0x00, 0x20, 0x00, 0x00, 0x00, 0x02, 0x5b, 0x11, 0x0c,
 0x08, 0x5c, 0x11, 0x04, 0x02, 0x00, 0x30, 0xe1, 0x00, 0x00, 0x30, 0x41, 0x00, 0x00, 0xb7, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x12, 0x00, 0x02, 0x00, 0x1b, 0x00, 0x01, 0x00,
 0x29, 0x00, 0x28, 0x00, 0x01, 0x00, 0x02, 0x5b, 0x11, 0x08, 0x25, 0x5c, 0x11, 0x00, 0x0a, 0x02, 0x2b, 0x09, 0x09, 0x00, 0xf8, 0xff, 0x01, 0x00, 0x02, 0x00, 0x08, 0x00, 0x06, 0x30, 0x01, 0x00,
 0x00, 0x00, 0x22, 0x00, 0x02, 0x00, 0x00, 0x00, 0x2e, 0x00, 0x03, 0x00, 0x00, 0x00, 0x50, 0x00, 0x04, 0x00, 0x00, 0x00, 0x94, 0x00, 0x06, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x08, 0x00, 0x00, 0x00,
 0x40, 0x01, 0xff, 0xff, 0x12, 0x00, 0x02, 0x00, 0x1a, 0x03, 0x08, 0x00, 0x00, 0x00, 0x04, 0x00, 0x36, 0x5b, 0x12, 0x08, 0x25, 0x5c, 0x12, 0x00, 0x02, 0x00, 0x1a, 0x03, 0x30, 0x00, 0x00, 0x00,
 0x0a, 0x00, 0x08, 0x40, 0x36, 0x36, 0x36, 0x36, 0x36, 0x5b, 0x12, 0x08, 0x25, 0x5c, 0x12, 0x08, 0x25, 0x5c, 0x12, 0x08, 0x25, 0x5c, 0x12, 0x08, 0x25, 0x5c, 0x12, 0x08, 0x25, 0x5c, 0x12, 0x00,
 0x0e, 0x00, 0x1b, 0x01, 0x02, 0x00, 0x19, 0x00, 0x48, 0x00, 0x01, 0x00, 0x05, 0x5b, 0x1a, 0x03, 0x58, 0x00, 0x00, 0x00, 0x10, 0x00, 0x08, 0x40, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36,
 0x08, 0x40, 0x36, 0x5b, 0x12, 0x08, 0x25, 0x5c, 0x12, 0x08, 0x25, 0x5c, 0x12, 0x08, 0x25, 0x5c, 0x12, 0x08, 0x25, 0x5c, 0x12, 0x08, 0x25, 0x5c, 0x12, 0x08, 0x25, 0x5c, 0x12, 0x08, 0x25, 0x5c,
 0x12, 0x08, 0x25, 0x5c, 0x12, 0x00, 0xbc, 0xff, 0x12, 0x00, 0x0e, 0x00, 0x1b, 0x01, 0x02, 0x00, 0x19, 0x00, 0x58, 0x00, 0x01, 0x00, 0x05, 0x5b, 0x1a, 0x03, 0x68, 0x00, 0x00, 0x00, 0x14, 0x00,
 0x08, 0x40, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x08, 0x40, 0x36, 0x08, 0x40, 0x36, 0x5c, 0x5b, 0x12, 0x08, 0x25, 0x5c, 0x12, 0x08, 0x25, 0x5c, 0x12, 0x08, 0x25, 0x5c, 0x12, 0x08,
 0x25, 0x5c, 0x12, 0x08, 0x25, 0x5c, 0x12, 0x08, 0x25, 0x5c, 0x12, 0x08, 0x25, 0x5c, 0x12, 0x08, 0x25, 0x5c, 0x12, 0x00, 0x6e, 0xff, 0x12, 0x00, 0xb4, 0xff, 0x12, 0x00, 0x0a, 0x00, 0x15, 0x03,
 0x08, 0x00, 0x08, 0x08, 0x5c, 0x5b, 0x1a, 0x07, 0x98, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x08, 0x40, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x08, 0x40, 0x36, 0x08, 0x40, 0x36, 0x4c, 0x00,
 0xde, 0xff, 0x0b, 0x36, 0x36, 0x36, 0x36, 0x5b, 0x12, 0x08, 0x25, 0x5c, 0x12, 0x08, 0x25, 0x5c, 0x12, 0x08, 0x25, 0x5c, 0x12, 0x08, 0x25, 0x5c, 0x12, 0x08, 0x25, 0x5c, 0x12, 0x08, 0x25, 0x5c,
 0x12, 0x08, 0x25, 0x5c, 0x12, 0x08, 0x25, 0x5c, 0x12, 0x00, 0x18, 0xff, 0x12, 0x00, 0x5e, 0xff, 0x12, 0x08, 0x25, 0x5c, 0x12, 0x08, 0x25, 0x5c, 0x12, 0x08, 0x25, 0x5c, 0x12, 0x08, 0x25, 0x5c,
 0x12, 0x00, 0x1a, 0x00, 0x1b, 0x01, 0x02, 0x00, 0x19, 0x00, 0xa8, 0x00, 0x01, 0x00, 0x05, 0x5b, 0x1b, 0x01, 0x02, 0x00, 0x19, 0x00, 0xc4, 0x00, 0x01, 0x00, 0x05, 0x5b, 0x1a, 0x07, 0xe0, 0x00,
 0x00, 0x00, 0x2a, 0x00, 0x08, 0x40, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x08, 0x40, 0x36, 0x08, 0x40, 0x36, 0x4c, 0x00, 0x68, 0xff, 0x0b, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x08,
 0x40, 0x36, 0x36, 0x08, 0x08, 0x36, 0x4c, 0x00, 0x56, 0xff, 0x0b, 0x5b, 0x12, 0x08, 0x25, 0x5c, 0x12, 0x08, 0x25, 0x5c, 0x12, 0x08, 0x25, 0x5c, 0x12, 0x08, 0x25, 0x5c, 0x12, 0x08, 0x25, 0x5c,
 0x12, 0x08, 0x25, 0x5c, 0x12, 0x08, 0x25, 0x5c, 0x12, 0x08, 0x25, 0x5c, 0x12, 0x00, 0x94, 0xfe, 0x12, 0x00, 0xda, 0xfe, 0x12, 0x08, 0x25, 0x5c, 0x12, 0x08, 0x25, 0x5c, 0x12, 0x08, 0x25, 0x5c,
 0x12, 0x08, 0x25, 0x5c, 0x12, 0x08, 0x25, 0x5c, 0x12, 0x08, 0x25, 0x5c, 0x12, 0x00, 0x76, 0xff, 0x12, 0x08, 0x25, 0x5c, 0x12, 0x00, 0x7a, 0xff, 0x1a, 0x03, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x08, 0x40, 0x4c, 0x00, 0xec, 0xfd, 0x5c, 0x5b, 0x00,
}};
#elif defined(_M_IX86)
#pragma optimize("", off)
DWORD RpcOpenPrinter(STRING_HANDLE pPrinterName, PRINTER_HANDLE *pHandle, wchar_t *pDatatype, DEVMODE_CONTAINER *pDevModeContainer, DWORD AccessRequired)
{
 return (DWORD) NdrClientCall2((PMIDL_STUB_DESC) &winspool_StubDesc, (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[0], (unsigned char *) &pPrinterName).Simple;
}
DWORD RpcEnumPrinterDrivers(STRING_HANDLE pName, wchar_t *pEnvironment, DWORD Level, BYTE *pDrivers, DWORD cbBuf, DWORD *pcbNeeded, DWORD *pcReturned)
{
    return (DWORD) NdrClientCall2((PMIDL_STUB_DESC) &winspool_StubDesc, (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[66], (unsigned char *) &pName).Simple;
}
DWORD RpcGetPrinterDriverDirectory(STRING_HANDLE pName, wchar_t *pEnvironment, DWORD Level, BYTE *pDriverDirectory, DWORD cbBuf, DWORD *pcbNeeded)
{
 return (DWORD) NdrClientCall2((PMIDL_STUB_DESC) &winspool_StubDesc, (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[144], (unsigned char *) &pName).Simple;
}
DWORD RpcClosePrinter(PRINTER_HANDLE *phPrinter)
{
 return (DWORD) NdrClientCall2((PMIDL_STUB_DESC) &winspool_StubDesc, (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[216], (unsigned char *) &phPrinter).Simple;
}
DWORD RpcFindClosePrinterChangeNotification(PRINTER_HANDLE hPrinter)
{
 return (DWORD) NdrClientCall2((PMIDL_STUB_DESC) &winspool_StubDesc, (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[258], (unsigned char *) &hPrinter).Simple;
}
DWORD RpcRemoteFindFirstPrinterChangeNotification(PRINTER_HANDLE hPrinter, DWORD fdwFlags, DWORD fdwOptions, wchar_t *pszLocalMachine, DWORD dwPrinterLocal, DWORD cbBuffer, BYTE *pBuffer)
{
 return (DWORD) NdrClientCall2((PMIDL_STUB_DESC) &winspool_StubDesc, (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[300], (unsigned char *) &hPrinter).Simple;
}
DWORD RpcDeletePrinterDriverEx(STRING_HANDLE pName, wchar_t *pEnvironment, wchar_t *pDriverName, DWORD dwDeleteFlag, DWORD dwVersionNum)
{
 return (DWORD) NdrClientCall2((PMIDL_STUB_DESC) &winspool_StubDesc, (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[376], (unsigned char *) &pName).Simple;
}
DWORD RpcAddPrinterDriverEx(STRING_HANDLE pName, DRIVER_CONTAINER *pDriverContainer, DWORD dwFileCopyFlags)
{
 return (DWORD) NdrClientCall2((PMIDL_STUB_DESC) &winspool_StubDesc, (PFORMAT_STRING) &ms2Drprn__MIDL_ProcFormatString.Format[444], (unsigned char *) &pName).Simple;
}
#pragma optimize("", on)
static const ms2Drprn_MIDL_PROC_FORMAT_STRING ms2Drprn__MIDL_ProcFormatString = {0, {
 0x00, 0x48, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x18, 0x00, 0x31, 0x04, 0x00, 0x00, 0x00, 0x5c, 0x08, 0x00, 0x40, 0x00, 0x46, 0x06, 0x08, 0x05, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0b, 0x00,
 0x00, 0x00, 0x02, 0x00, 0x10, 0x01, 0x04, 0x00, 0x0a, 0x00, 0x0b, 0x00, 0x08, 0x00, 0x02, 0x00, 0x0b, 0x01, 0x0c, 0x00, 0x1e, 0x00, 0x48, 0x00, 0x10, 0x00, 0x08, 0x00, 0x70, 0x00, 0x14, 0x00,
 0x08, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x20, 0x00, 0x31, 0x04, 0x00, 0x00, 0x00, 0x5c, 0x10, 0x00, 0x40, 0x00, 0x47, 0x08, 0x08, 0x07, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00,
 0x0b, 0x00, 0x00, 0x00, 0x02, 0x00, 0x0b, 0x00, 0x04, 0x00, 0x02, 0x00, 0x48, 0x00, 0x08, 0x00, 0x08, 0x00, 0x1b, 0x00, 0x0c, 0x00, 0x32, 0x00, 0x48, 0x00, 0x10, 0x00, 0x08, 0x00, 0x50, 0x21,
 0x14, 0x00, 0x08, 0x00, 0x50, 0x21, 0x18, 0x00, 0x08, 0x00, 0x70, 0x00, 0x1c, 0x00, 0x08, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x1c, 0x00, 0x31, 0x04, 0x00, 0x00, 0x00, 0x5c,
 0x10, 0x00, 0x24, 0x00, 0x47, 0x07, 0x08, 0x07, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x02, 0x00, 0x0b, 0x00, 0x04, 0x00, 0x02, 0x00, 0x48, 0x00, 0x08, 0x00, 0x08, 0x00,
 0x1b, 0x00, 0x0c, 0x00, 0x32, 0x00, 0x48, 0x00, 0x10, 0x00, 0x08, 0x00, 0x50, 0x21, 0x14, 0x00, 0x08, 0x00, 0x70, 0x00, 0x18, 0x00, 0x08, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x00, 0x1d, 0x00,
 0x08, 0x00, 0x30, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x40, 0x00, 0x44, 0x02, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x01, 0x00, 0x00, 0x4a, 0x00, 0x70, 0x00, 0x04, 0x00,
 0x08, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x08, 0x00, 0x30, 0x40, 0x00, 0x00, 0x00, 0x00, 0x24, 0x00, 0x08, 0x00, 0x44, 0x02, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x08, 0x00, 0x00, 0x00, 0x4e, 0x00, 0x70, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x20, 0x00, 0x30, 0x40, 0x00, 0x00, 0x00, 0x00, 0x44, 0x00, 0x08, 0x00,
 0x47, 0x08, 0x08, 0x07, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x4e, 0x00, 0x48, 0x00, 0x04, 0x00, 0x08, 0x00, 0x48, 0x00, 0x08, 0x00, 0x08, 0x00, 0x0b, 0x00, 0x0c, 0x00,
 0x02, 0x00, 0x48, 0x00, 0x10, 0x00, 0x08, 0x00, 0x88, 0x00, 0x14, 0x00, 0x52, 0x00, 0x1b, 0x00, 0x18, 0x00, 0x5c, 0x00, 0x70, 0x00, 0x1c, 0x00, 0x08, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x00,
 0x54, 0x00, 0x18, 0x00, 0x31, 0x04, 0x00, 0x00, 0x00, 0x5c, 0x10, 0x00, 0x08, 0x00, 0x46, 0x06, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x02, 0x00, 0x0b, 0x01,
 0x04, 0x00, 0x6e, 0x00, 0x0b, 0x01, 0x08, 0x00, 0x6e, 0x00, 0x48, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x48, 0x00, 0x10, 0x00, 0x08, 0x00, 0x70, 0x00, 0x14, 0x00, 0x08, 0x00, 0x00, 0x48, 0x00, 0x00,
 0x00, 0x00, 0x59, 0x00, 0x10, 0x00, 0x31, 0x04, 0x00, 0x00, 0x00, 0x5c, 0x08, 0x00, 0x08, 0x00, 0x46, 0x04, 0x08, 0x05, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x02, 0x00,
 0x0b, 0x01, 0x04, 0x00, 0xca, 0x03, 0x48, 0x00, 0x08, 0x00, 0x08, 0x00, 0x70, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x00,
}};
static const ms2Drprn_MIDL_TYPE_FORMAT_STRING ms2Drprn__MIDL_TypeFormatString = {0, {
 0x00, 0x00, 0x12, 0x08, 0x25, 0x5c, 0x11, 0x04, 0x02, 0x00, 0x30, 0xa0, 0x00, 0x00, 0x11, 0x00, 0x0e, 0x00, 0x1b, 0x00, 0x01, 0x00, 0x19, 0x00, 0x00, 0x00, 0x01, 0x00, 0x02, 0x5b, 0x16, 0x03,
 0x08, 0x00, 0x4b, 0x5c, 0x46, 0x5c, 0x04, 0x00, 0x04, 0x00, 0x12, 0x00, 0xe6, 0xff, 0x5b, 0x08, 0x08, 0x5b, 0x12, 0x00, 0x02, 0x00, 0x1b, 0x00, 0x01, 0x00, 0x29, 0x00, 0x10, 0x00, 0x00, 0x00,
 0x02, 0x5b, 0x11, 0x0c, 0x08, 0x5c, 0x11, 0x04, 0x02, 0x00, 0x30, 0xe1, 0x00, 0x00, 0x30, 0x41, 0x00, 0x00, 0xb7, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x12, 0x00, 0x02, 0x00,
 0x1b, 0x00, 0x01, 0x00, 0x29, 0x00, 0x14, 0x00, 0x01, 0x00, 0x02, 0x5b, 0x11, 0x08, 0x25, 0x5c, 0x11, 0x00, 0x58, 0x03, 0x2b, 0x09, 0x09, 0x00, 0xfc, 0xff, 0x01, 0x00, 0x02, 0x00, 0x04, 0x00,
 0x06, 0x30, 0x01, 0x00, 0x00, 0x00, 0x22, 0x00, 0x02, 0x00, 0x00, 0x00, 0x34, 0x00, 0x03, 0x00, 0x00, 0x00, 0x72, 0x00, 0x04, 0x00, 0x00, 0x00, 0xea, 0x00, 0x06, 0x00, 0x00, 0x00, 0x6e, 0x01,
 0x08, 0x00, 0x00, 0x00, 0x20, 0x02, 0xff, 0xff, 0x12, 0x00, 0x02, 0x00, 0x16, 0x03, 0x04, 0x00, 0x4b, 0x5c, 0x46, 0x5c, 0x00, 0x00, 0x00, 0x00, 0x12, 0x08, 0x25, 0x5c, 0x5b, 0x08, 0x5c, 0x5b,
 0x12, 0x00, 0x02, 0x00, 0x16, 0x03, 0x18, 0x00, 0x4b, 0x5c, 0x46, 0x5c, 0x04, 0x00, 0x04, 0x00, 0x12, 0x08, 0x25, 0x5c, 0x46, 0x5c, 0x08, 0x00, 0x08, 0x00, 0x12, 0x08, 0x25, 0x5c, 0x46, 0x5c,
 0x0c, 0x00, 0x0c, 0x00, 0x12, 0x08, 0x25, 0x5c, 0x46, 0x5c, 0x10, 0x00, 0x10, 0x00, 0x12, 0x08, 0x25, 0x5c, 0x46, 0x5c, 0x14, 0x00, 0x14, 0x00, 0x12, 0x08, 0x25, 0x5c, 0x5b, 0x08, 0x08, 0x08,
 0x08, 0x08, 0x08, 0x5b, 0x12, 0x00, 0x0e, 0x00, 0x1b, 0x01, 0x02, 0x00, 0x19, 0x00, 0x24, 0x00, 0x01, 0x00, 0x05, 0x5b, 0x16, 0x03, 0x2c, 0x00, 0x4b, 0x5c, 0x46, 0x5c, 0x04, 0x00, 0x04, 0x00,
 0x12, 0x08, 0x25, 0x5c, 0x46, 0x5c, 0x08, 0x00, 0x08, 0x00, 0x12, 0x08, 0x25, 0x5c, 0x46, 0x5c, 0x0c, 0x00, 0x0c, 0x00, 0x12, 0x08, 0x25, 0x5c, 0x46, 0x5c, 0x10, 0x00, 0x10, 0x00, 0x12, 0x08,
 0x25, 0x5c, 0x46, 0x5c, 0x14, 0x00, 0x14, 0x00, 0x12, 0x08, 0x25, 0x5c, 0x46, 0x5c, 0x18, 0x00, 0x18, 0x00, 0x12, 0x08, 0x25, 0x5c, 0x46, 0x5c, 0x1c, 0x00, 0x1c, 0x00, 0x12, 0x08, 0x25, 0x5c,
 0x46, 0x5c, 0x20, 0x00, 0x20, 0x00, 0x12, 0x08, 0x25, 0x5c, 0x46, 0x5c, 0x28, 0x00, 0x28, 0x00, 0x12, 0x00, 0x96, 0xff, 0x5b, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08,
 0x5c, 0x5b, 0x12, 0x00, 0x0e, 0x00, 0x1b, 0x01, 0x02, 0x00, 0x19, 0x00, 0x2c, 0x00, 0x01, 0x00, 0x05, 0x5b, 0x16, 0x03, 0x34, 0x00, 0x4b, 0x5c, 0x46, 0x5c, 0x04, 0x00, 0x04, 0x00, 0x12, 0x08,
 0x25, 0x5c, 0x46, 0x5c, 0x08, 0x00, 0x08, 0x00, 0x12, 0x08, 0x25, 0x5c, 0x46, 0x5c, 0x0c, 0x00, 0x0c, 0x00, 0x12, 0x08, 0x25, 0x5c, 0x46, 0x5c, 0x10, 0x00, 0x10, 0x00, 0x12, 0x08, 0x25, 0x5c,
 0x46, 0x5c, 0x14, 0x00, 0x14, 0x00, 0x12, 0x08, 0x25, 0x5c, 0x46, 0x5c, 0x18, 0x00, 0x18, 0x00, 0x12, 0x08, 0x25, 0x5c, 0x46, 0x5c, 0x1c, 0x00, 0x1c, 0x00, 0x12, 0x08, 0x25, 0x5c, 0x46, 0x5c,
 0x20, 0x00, 0x20, 0x00, 0x12, 0x08, 0x25, 0x5c, 0x46, 0x5c, 0x28, 0x00, 0x28, 0x00, 0x12, 0x00, 0x18, 0xff, 0x46, 0x5c, 0x30, 0x00, 0x30, 0x00, 0x12, 0x00, 0x8c, 0xff, 0x5b, 0x08, 0x08, 0x08,
 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x5c, 0x5b, 0x12, 0x00, 0x0a, 0x00, 0x15, 0x03, 0x08, 0x00, 0x08, 0x08, 0x5c, 0x5b, 0x16, 0x07, 0x58, 0x00, 0x4b, 0x5c, 0x46, 0x5c,
 0x04, 0x00, 0x04, 0x00, 0x12, 0x08, 0x25, 0x5c, 0x46, 0x5c, 0x08, 0x00, 0x08, 0x00, 0x12, 0x08, 0x25, 0x5c, 0x46, 0x5c, 0x0c, 0x00, 0x0c, 0x00, 0x12, 0x08, 0x25, 0x5c, 0x46, 0x5c, 0x10, 0x00,
 0x10, 0x00, 0x12, 0x08, 0x25, 0x5c, 0x46, 0x5c, 0x14, 0x00, 0x14, 0x00, 0x12, 0x08, 0x25, 0x5c, 0x46, 0x5c, 0x18, 0x00, 0x18, 0x00, 0x12, 0x08, 0x25, 0x5c, 0x46, 0x5c, 0x1c, 0x00, 0x1c, 0x00,
 0x12, 0x08, 0x25, 0x5c, 0x46, 0x5c, 0x20, 0x00, 0x20, 0x00, 0x12, 0x08, 0x25, 0x5c, 0x46, 0x5c, 0x28, 0x00, 0x28, 0x00, 0x12, 0x00, 0x92, 0xfe, 0x46, 0x5c, 0x30, 0x00, 0x30, 0x00, 0x12, 0x00,
 0x06, 0xff, 0x46, 0x5c, 0x48, 0x00, 0x48, 0x00, 0x12, 0x08, 0x25, 0x5c, 0x46, 0x5c, 0x4c, 0x00, 0x4c, 0x00, 0x12, 0x08, 0x25, 0x5c, 0x46, 0x5c, 0x50, 0x00, 0x50, 0x00, 0x12, 0x08, 0x25, 0x5c,
 0x46, 0x5c, 0x54, 0x00, 0x54, 0x00, 0x12, 0x08, 0x25, 0x5c, 0x5b, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x4c, 0x00, 0x56, 0xff, 0x40, 0x0b, 0x08, 0x08,
 0x08, 0x08, 0x5c, 0x5b, 0x12, 0x00, 0x1a, 0x00, 0x1b, 0x01, 0x02, 0x00, 0x19, 0x00, 0x60, 0x00, 0x01, 0x00, 0x05, 0x5b, 0x1b, 0x01, 0x02, 0x00, 0x19, 0x00, 0x70, 0x00, 0x01, 0x00, 0x05, 0x5b,
 0x16, 0x07, 0x88, 0x00, 0x4b, 0x5c, 0x46, 0x5c, 0x04, 0x00, 0x04, 0x00, 0x12, 0x08, 0x25, 0x5c, 0x46, 0x5c, 0x08, 0x00, 0x08, 0x00, 0x12, 0x08, 0x25, 0x5c, 0x46, 0x5c, 0x0c, 0x00, 0x0c, 0x00,
 0x12, 0x08, 0x25, 0x5c, 0x46, 0x5c, 0x10, 0x00, 0x10, 0x00, 0x12, 0x08, 0x25, 0x5c, 0x46, 0x5c, 0x14, 0x00, 0x14, 0x00, 0x12, 0x08, 0x25, 0x5c, 0x46, 0x5c, 0x18, 0x00, 0x18, 0x00, 0x12, 0x08,
 0x25, 0x5c, 0x46, 0x5c, 0x1c, 0x00, 0x1c, 0x00, 0x12, 0x08, 0x25, 0x5c, 0x46, 0x5c, 0x20, 0x00, 0x20, 0x00, 0x12, 0x08, 0x25, 0x5c, 0x46, 0x5c, 0x28, 0x00, 0x28, 0x00, 0x12, 0x00, 0xca, 0xfd,
 0x46, 0x5c, 0x30, 0x00, 0x30, 0x00, 0x12, 0x00, 0x3e, 0xfe, 0x46, 0x5c, 0x48, 0x00, 0x48, 0x00, 0x12, 0x08, 0x25, 0x5c, 0x46, 0x5c, 0x4c, 0x00, 0x4c, 0x00, 0x12, 0x08, 0x25, 0x5c, 0x46, 0x5c,
 0x50, 0x00, 0x50, 0x00, 0x12, 0x08, 0x25, 0x5c, 0x46, 0x5c, 0x54, 0x00, 0x54, 0x00, 0x12, 0x08, 0x25, 0x5c, 0x46, 0x5c, 0x58, 0x00, 0x58, 0x00, 0x12, 0x08, 0x25, 0x5c, 0x46, 0x5c, 0x5c, 0x00,
 0x5c, 0x00, 0x12, 0x08, 0x25, 0x5c, 0x46, 0x5c, 0x64, 0x00, 0x64, 0x00, 0x12, 0x00, 0x3a, 0xff, 0x46, 0x5c, 0x68, 0x00, 0x68, 0x00, 0x12, 0x08, 0x25, 0x5c, 0x46, 0x5c, 0x74, 0x00, 0x74, 0x00,
 0x12, 0x00, 0x32, 0xff, 0x5b, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x4c, 0x00, 0x5c, 0xfe, 0x40, 0x0b, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08,
 0x08, 0x08, 0x08, 0x08, 0x4c, 0x00, 0x4a, 0xfe, 0x0b, 0x5b, 0x1a, 0x03, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x4c, 0x00, 0x9f, 0xfc, 0x5b, 0x00,
}};
#endif
