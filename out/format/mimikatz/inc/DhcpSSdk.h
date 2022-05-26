# 1 "project/mimikatz/inc/DhcpSSdk.h"
# 15 "project/mimikatz/inc/DhcpSSdk.h"
#ifndef _CALLOUT_H_
#define _CALLOUT_H_ 

#ifdef __cplusplus
extern "C" {
#endif

#if _MSC_VER > 1000
       
#endif





typedef DWORD DHCP_IP_ADDRESS;
typedef struct _DHCP_SERVER_OPTIONS {
    BYTE *MessageType;
    DHCP_IP_ADDRESS UNALIGNED *SubnetMask;
    DHCP_IP_ADDRESS UNALIGNED *RequestedAddress;
    DWORD UNALIGNED *RequestLeaseTime;
    BYTE *OverlayFields;
    DHCP_IP_ADDRESS UNALIGNED *RouterAddress;
    DHCP_IP_ADDRESS UNALIGNED *Server;
    BYTE *ParameterRequestList;
    DWORD ParameterRequestListLength;
    CHAR *MachineName;
    DWORD MachineNameLength;
    BYTE ClientHardwareAddressType;
    BYTE ClientHardwareAddressLength;
    BYTE *ClientHardwareAddress;
    CHAR *ClassIdentifier;
    DWORD ClassIdentifierLength;
    BYTE *VendorClass;
    DWORD VendorClassLength;
    DWORD DNSFlags;
    DWORD DNSNameLength;
    LPBYTE DNSName;
    BOOLEAN DSDomainNameRequested;
    CHAR *DSDomainName;
    DWORD DSDomainNameLen;
    DWORD UNALIGNED *ScopeId;
} DHCP_SERVER_OPTIONS, *LPDHCP_SERVER_OPTIONS;






#define DHCP_CALLOUT_LIST_KEY L"System\\CurrentControlSet\\Services\\DHCPServer\\Parameters"
#define DHCP_CALLOUT_LIST_VALUE L"CalloutDlls"
#define DHCP_CALLOUT_LIST_TYPE REG_MULTI_SZ
#define DHCP_CALLOUT_ENTRY_POINT "DhcpServerCalloutEntry"





#define DHCP_CONTROL_START 0x00000001
#define DHCP_CONTROL_STOP 0x00000002
#define DHCP_CONTROL_PAUSE 0x00000003
#define DHCP_CONTROL_CONTINUE 0x00000004





#define DHCP_DROP_DUPLICATE 0x00000001
#define DHCP_DROP_NOMEM 0x00000002
#define DHCP_DROP_INTERNAL_ERROR 0x00000003
#define DHCP_DROP_TIMEOUT 0x00000004
#define DHCP_DROP_UNAUTH 0x00000005
#define DHCP_DROP_PAUSED 0x00000006
#define DHCP_DROP_NO_SUBNETS 0x00000007
#define DHCP_DROP_INVALID 0x00000008
#define DHCP_DROP_WRONG_SERVER 0x00000009
#define DHCP_DROP_NOADDRESS 0x0000000A
#define DHCP_DROP_PROCESSED 0x0000000B
#define DHCP_DROP_GEN_FAILURE 0x00000100
#define DHCP_SEND_PACKET 0x10000000
#define DHCP_PROB_CONFLICT 0x20000001
#define DHCP_PROB_DECLINE 0x20000002
#define DHCP_PROB_RELEASE 0x20000003
#define DHCP_PROB_NACKED 0x20000004
#define DHCP_GIVE_ADDRESS_NEW 0x30000001
#define DHCP_GIVE_ADDRESS_OLD 0x30000002
#define DHCP_CLIENT_BOOTP 0x30000003
#define DHCP_CLIENT_DHCP 0x30000004



typedef
DWORD
(APIENTRY *LPDHCP_CONTROL)(
    IN DWORD dwControlCode,
    IN LPVOID lpReserved
)
# 128 "project/mimikatz/inc/DhcpSSdk.h"
;

typedef
DWORD
(APIENTRY *LPDHCP_NEWPKT)(
    IN OUT LPBYTE *Packet,
    IN OUT DWORD *PacketSize,
    IN DWORD IpAddress,
    IN LPVOID Reserved,
    IN OUT LPVOID *PktContext,
    OUT LPBOOL ProcessIt
)
# 183 "project/mimikatz/inc/DhcpSSdk.h"
;

typedef
DWORD
(APIENTRY *LPDHCP_DROP_SEND)(
    IN OUT LPBYTE *Packet,
    IN OUT DWORD *PacketSize,
    IN DWORD ControlCode,
    IN DWORD IpAddress,
    IN LPVOID Reserved,
    IN LPVOID PktContext
)
# 246 "project/mimikatz/inc/DhcpSSdk.h"
;

typedef
DWORD
(APIENTRY *LPDHCP_PROB)(
    IN LPBYTE Packet,
    IN DWORD PacketSize,
    IN DWORD ControlCode,
    IN DWORD IpAddress,
    IN DWORD AltAddress,
    IN LPVOID Reserved,
    IN LPVOID PktContext
)
# 299 "project/mimikatz/inc/DhcpSSdk.h"
;

typedef
DWORD
(APIENTRY *LPDHCP_GIVE_ADDRESS)(
    IN LPBYTE Packet,
    IN DWORD PacketSize,
    IN DWORD ControlCode,
    IN DWORD IpAddress,
    IN DWORD AltAddress,
    IN DWORD AddrType,
    IN DWORD LeaseTime,
    IN LPVOID Reserved,
    IN LPVOID PktContext
)
# 352 "project/mimikatz/inc/DhcpSSdk.h"
;

typedef
DWORD
(APIENTRY *LPDHCP_HANDLE_OPTIONS)(
    IN LPBYTE Packet,
    IN DWORD PacketSize,
    IN LPVOID Reserved,
    IN LPVOID PktContext,
    IN OUT LPDHCP_SERVER_OPTIONS ServerOptions
)
# 392 "project/mimikatz/inc/DhcpSSdk.h"
;

typedef
DWORD
(APIENTRY *LPDHCP_DELETE_CLIENT)(
    IN DWORD IpAddress,
    IN LPBYTE HwAddress,
    IN ULONG HwAddressLength,
    IN DWORD Reserved,
    IN DWORD ClientType
)
# 424 "project/mimikatz/inc/DhcpSSdk.h"
;

typedef
struct _DHCP_CALLOUT_TABLE {
    LPDHCP_CONTROL DhcpControlHook;
    LPDHCP_NEWPKT DhcpNewPktHook;
    LPDHCP_DROP_SEND DhcpPktDropHook;
    LPDHCP_DROP_SEND DhcpPktSendHook;
    LPDHCP_PROB DhcpAddressDelHook;
    LPDHCP_GIVE_ADDRESS DhcpAddressOfferHook;
    LPDHCP_HANDLE_OPTIONS DhcpHandleOptionsHook;
    LPDHCP_DELETE_CLIENT DhcpDeleteClientHook;
    LPVOID DhcpExtensionHook;
    LPVOID DhcpReservedHook;
} DHCP_CALLOUT_TABLE, *LPDHCP_CALLOUT_TABLE;

typedef
DWORD
(APIENTRY *LPDHCP_ENTRY_POINT_FUNC) (
    IN LPWSTR ChainDlls,
    IN DWORD CalloutVersion,
    IN OUT LPDHCP_CALLOUT_TABLE CalloutTbl
)
# 484 "project/mimikatz/inc/DhcpSSdk.h"
;

#ifdef __cplusplus
}
#endif

#endif _CALLOUT_H_
