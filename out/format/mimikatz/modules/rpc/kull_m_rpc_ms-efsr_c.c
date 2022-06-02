# 1 "project/mimikatz/modules/rpc/kull_m_rpc_ms-efsr_c.c"
#include "kull_m_rpc_ms-efsr.h"

const UUID EFSR_ObjectUUID = {0xdf1941c5, 0xfe89, 0x4e79, {0xbf, 0x10, 0x46, 0x36, 0x57, 0xac, 0xf4, 0x4d}};

#if defined(_M_X64) || defined(_M_ARM64)
typedef struct _ms2Defsr_MIDL_TYPE_FORMAT_STRING {
 SHORT Pad;
 UCHAR Format[23];
} ms2Defsr_MIDL_TYPE_FORMAT_STRING;

typedef struct _ms2Defsr_MIDL_PROC_FORMAT_STRING {
 SHORT Pad;
 UCHAR Format[93];
} ms2Defsr_MIDL_PROC_FORMAT_STRING;

extern const ms2Defsr_MIDL_TYPE_FORMAT_STRING ms2Defsr__MIDL_TypeFormatString;
extern const ms2Defsr_MIDL_PROC_FORMAT_STRING ms2Defsr__MIDL_ProcFormatString;
static const RPC_CLIENT_INTERFACE efsrpc___RpcClientInterface = {sizeof(RPC_CLIENT_INTERFACE), {{0xc681d488, 0xd850, 0x11d0, {0x8c, 0x52, 0x00, 0xc0, 0x4f, 0xd9, 0x0f, 0x7e}}, {1, 0}}, {{0x8a885d04, 0x1ceb, 0x11c9, {0x9f, 0xe8, 0x08, 0x00, 0x2b, 0x10, 0x48, 0x60}}, {2, 0}}, 0, 0, 0, 0, 0, 0x00000001};
RPC_IF_HANDLE efsrpc_v1_0_c_ifspec = (RPC_IF_HANDLE)& efsrpc___RpcClientInterface;
static RPC_BINDING_HANDLE efsrpc__MIDL_AutoBindHandle;
static const MIDL_STUB_DESC efsrpc_StubDesc = {(void *) &efsrpc___RpcClientInterface, MIDL_user_allocate, MIDL_user_free, &efsrpc__MIDL_AutoBindHandle, 0, 0, 0, 0, ms2Defsr__MIDL_TypeFormatString.Format, 1, 0x60000, 0, 0x8000253, 0, 0, 0, 0x1, 0, 0, 0};

long EfsRpcOpenFileRaw(handle_t binding_h, PEXIMPORT_CONTEXT_HANDLE *hContext, wchar_t *FileName, long Flags)
{
 return (long) NdrClientCall2((PMIDL_STUB_DESC) &efsrpc_StubDesc, (PFORMAT_STRING) &ms2Defsr__MIDL_ProcFormatString.Format[0], binding_h, hContext, FileName, Flags).Simple;
}
void EfsRpcCloseRaw(PEXIMPORT_CONTEXT_HANDLE *hContext)
{
 NdrClientCall2((PMIDL_STUB_DESC) &efsrpc_StubDesc, (PFORMAT_STRING) &ms2Defsr__MIDL_ProcFormatString.Format[54], hContext);
}

static const ms2Defsr_MIDL_PROC_FORMAT_STRING ms2Defsr__MIDL_ProcFormatString = {0, {
 0x00, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x28, 0x00, 0x32, 0x00, 0x00, 0x00, 0x08, 0x00, 0x40, 0x00, 0x46, 0x04, 0x0a, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x01,
 0x08, 0x00, 0x06, 0x00, 0x0b, 0x01, 0x10, 0x00, 0x0c, 0x00, 0x48, 0x00, 0x18, 0x00, 0x08, 0x00, 0x70, 0x00, 0x20, 0x00, 0x08, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x08, 0x00,
 0x30, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x38, 0x00, 0x40, 0x01, 0x0a, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x01, 0x00, 0x00, 0x12, 0x00, 0x00,
}};
static const ms2Defsr_MIDL_TYPE_FORMAT_STRING ms2Defsr__MIDL_TypeFormatString = {0, {
 0x00, 0x00, 0x11, 0x04, 0x02, 0x00, 0x30, 0xa0, 0x00, 0x00, 0x11, 0x08, 0x25, 0x5c, 0x11, 0x04, 0x02, 0x00, 0x30, 0xe1, 0x00, 0x00, 0x00,
}};
#elif defined(_M_IX86)
typedef struct _ms2Defsr_MIDL_TYPE_FORMAT_STRING {
 SHORT Pad;
 UCHAR Format[23];
} ms2Defsr_MIDL_TYPE_FORMAT_STRING;

typedef struct _ms2Defsr_MIDL_PROC_FORMAT_STRING {
 SHORT Pad;
 UCHAR Format[89];
} ms2Defsr_MIDL_PROC_FORMAT_STRING;

extern const ms2Defsr_MIDL_TYPE_FORMAT_STRING ms2Defsr__MIDL_TypeFormatString;
extern const ms2Defsr_MIDL_PROC_FORMAT_STRING ms2Defsr__MIDL_ProcFormatString;
static const RPC_CLIENT_INTERFACE efsrpc___RpcClientInterface = {sizeof(RPC_CLIENT_INTERFACE), {{0xc681d488, 0xd850, 0x11d0, {0x8c, 0x52, 0x00, 0xc0, 0x4f, 0xd9, 0x0f, 0x7e}}, {1, 0}}, {{0x8a885d04, 0x1ceb, 0x11c9, {0x9f, 0xe8, 0x08, 0x00, 0x2b, 0x10, 0x48, 0x60}}, {2, 0}}, 0, 0, 0, 0, 0, 0x00000001};
RPC_IF_HANDLE efsrpc_v1_0_c_ifspec = (RPC_IF_HANDLE)& efsrpc___RpcClientInterface;
static RPC_BINDING_HANDLE efsrpc__MIDL_AutoBindHandle;
static const MIDL_STUB_DESC efsrpc_StubDesc = {(void *)& efsrpc___RpcClientInterface, MIDL_user_allocate, MIDL_user_free, &efsrpc__MIDL_AutoBindHandle, 0, 0, 0, 0, ms2Defsr__MIDL_TypeFormatString.Format, 1, 0x60000, 0, 0x8000253, 0, 0, 0, 0x1, 0, 0, 0};
#pragma optimize("", off)
long EfsRpcOpenFileRaw(handle_t binding_h, PEXIMPORT_CONTEXT_HANDLE *hContext, wchar_t *FileName, long Flags)
{
    return (long) NdrClientCall2((PMIDL_STUB_DESC) &efsrpc_StubDesc, (PFORMAT_STRING) &ms2Defsr__MIDL_ProcFormatString.Format[0], (unsigned char *) &binding_h).Simple;
}
void EfsRpcCloseRaw(PEXIMPORT_CONTEXT_HANDLE *hContext)
{
 NdrClientCall2((PMIDL_STUB_DESC) &efsrpc_StubDesc, (PFORMAT_STRING) &ms2Defsr__MIDL_ProcFormatString.Format[52], (unsigned char *) &hContext);
}
#pragma optimize("", on)
static const ms2Defsr_MIDL_PROC_FORMAT_STRING ms2Defsr__MIDL_ProcFormatString = {0, {
 0x00, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x00, 0x32, 0x00, 0x00, 0x00, 0x08, 0x00, 0x40, 0x00, 0x46, 0x04, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x01, 0x04, 0x00,
 0x06, 0x00, 0x0b, 0x01, 0x08, 0x00, 0x0c, 0x00, 0x48, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x70, 0x00, 0x10, 0x00, 0x08, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x04, 0x00, 0x30, 0xe0,
 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x38, 0x00, 0x40, 0x01, 0x08, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x01, 0x00, 0x00, 0x12, 0x00, 0x00,
}};
static const ms2Defsr_MIDL_TYPE_FORMAT_STRING ms2Defsr__MIDL_TypeFormatString = {0, {
 0x00, 0x00, 0x11, 0x04, 0x02, 0x00, 0x30, 0xa0, 0x00, 0x00, 0x11, 0x08, 0x25, 0x5c, 0x11, 0x04, 0x02, 0x00, 0x30, 0xe1, 0x00, 0x00, 0x00,
}};
#endif