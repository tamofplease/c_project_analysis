# 0 "project/mimikatz/inc/DhcpSSdk.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/mimikatz/inc/DhcpSSdk.h"
# 30 "project/mimikatz/inc/DhcpSSdk.h"
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
# 106 "project/mimikatz/inc/DhcpSSdk.h"
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
