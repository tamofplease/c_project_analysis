# 0 "project/mimikatz/inc/DsGetDC.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/mimikatz/inc/DsGetDC.h"
# 103 "project/mimikatz/inc/DsGetDC.h"
typedef struct _DOMAIN_CONTROLLER_INFOA {
    LPSTR DomainControllerName;
    LPSTR DomainControllerAddress;
    ULONG DomainControllerAddressType;
    GUID DomainGuid;
    LPSTR DomainName;
    LPSTR DnsForestName;
    ULONG Flags;
    LPSTR DcSiteName;
    LPSTR ClientSiteName;
} DOMAIN_CONTROLLER_INFOA, *PDOMAIN_CONTROLLER_INFOA;

typedef struct _DOMAIN_CONTROLLER_INFOW {



    LPWSTR DomainControllerName;




    LPWSTR DomainControllerAddress;

    ULONG DomainControllerAddressType;
    GUID DomainGuid;



    LPWSTR DomainName;




    LPWSTR DnsForestName;

    ULONG Flags;



    LPWSTR DcSiteName;




    LPWSTR ClientSiteName;

} DOMAIN_CONTROLLER_INFOW, *PDOMAIN_CONTROLLER_INFOW;
# 194 "project/mimikatz/inc/DsGetDC.h"
DECLSPEC_IMPORT
DWORD
WINAPI
DsGetDcNameA(
    IN __in_opt LPCSTR ComputerName OPTIONAL,
    IN __in_opt LPCSTR DomainName OPTIONAL,
    IN GUID *DomainGuid OPTIONAL,
    IN __in_opt LPCSTR SiteName OPTIONAL,
    IN ULONG Flags,
    OUT PDOMAIN_CONTROLLER_INFOA *DomainControllerInfo
);

DECLSPEC_IMPORT
DWORD
WINAPI
DsGetDcNameW(
    IN __in_opt LPCWSTR ComputerName OPTIONAL,
    IN __in_opt LPCWSTR DomainName OPTIONAL,
    IN GUID *DomainGuid OPTIONAL,
    IN __in_opt LPCWSTR SiteName OPTIONAL,
    IN ULONG Flags,
    OUT PDOMAIN_CONTROLLER_INFOW *DomainControllerInfo
);







DECLSPEC_IMPORT
DWORD
WINAPI
DsGetSiteNameA(
    IN __in_opt LPCSTR ComputerName OPTIONAL,
    OUT __deref_out LPSTR *SiteName
);

DECLSPEC_IMPORT
DWORD
WINAPI
DsGetSiteNameW(
    IN __in_opt LPCWSTR ComputerName OPTIONAL,
    OUT __deref_out LPWSTR *SiteName
);
# 247 "project/mimikatz/inc/DsGetDC.h"
DECLSPEC_IMPORT
DWORD
WINAPI
DsValidateSubnetNameW(
    __in IN LPCWSTR SubnetName
);

DECLSPEC_IMPORT
DWORD
WINAPI
DsValidateSubnetNameA(
    __in IN LPCSTR SubnetName
);
# 331 "project/mimikatz/inc/DsGetDC.h"
typedef struct _DS_DOMAIN_TRUSTSW {
# 340 "project/mimikatz/inc/DsGetDC.h"
    LPWSTR NetbiosDomainName;
    LPWSTR DnsDomainName;






    ULONG Flags;
# 368 "project/mimikatz/inc/DsGetDC.h"
    ULONG ParentIndex;







    ULONG TrustType;
    ULONG TrustAttributes;
# 388 "project/mimikatz/inc/DsGetDC.h"
    PSID DomainSid;






    GUID DomainGuid;

} DS_DOMAIN_TRUSTSW, *PDS_DOMAIN_TRUSTSW;




typedef struct _DS_DOMAIN_TRUSTSA {
    LPSTR NetbiosDomainName;
    LPSTR DnsDomainName;
    ULONG Flags;
    ULONG ParentIndex;
    ULONG TrustType;
    ULONG TrustAttributes;
    PSID DomainSid;
    GUID DomainGuid;
} DS_DOMAIN_TRUSTSA, *PDS_DOMAIN_TRUSTSA;
# 421 "project/mimikatz/inc/DsGetDC.h"
DECLSPEC_IMPORT
DWORD
WINAPI
DsEnumerateDomainTrustsW (
    __in_opt LPWSTR ServerName OPTIONAL,
    __in ULONG Flags,
    __deref_out_ecount(*DomainCount) PDS_DOMAIN_TRUSTSW *Domains,
    __out PULONG DomainCount
    );

DECLSPEC_IMPORT
DWORD
WINAPI
DsEnumerateDomainTrustsA (
    __in_opt LPSTR ServerName OPTIONAL,
    __in ULONG Flags,
    __deref_out_ecount(*DomainCount) PDS_DOMAIN_TRUSTSA *Domains,
    __out PULONG DomainCount
    );
# 481 "project/mimikatz/inc/DsGetDC.h"
DECLSPEC_IMPORT
DWORD
WINAPI
DsGetDcSiteCoverageW(
    IN __in_opt LPCWSTR ServerName OPTIONAL,
    OUT PULONG EntryCount,
    OUT __deref_out_ecount(*EntryCount) LPWSTR **SiteNames
    );

DECLSPEC_IMPORT
DWORD
WINAPI
DsGetDcSiteCoverageA(
    IN __in_opt LPCSTR ServerName OPTIONAL,
    OUT PULONG EntryCount,
    OUT __deref_out_ecount(*EntryCount) LPSTR **SiteNames
    );







DECLSPEC_IMPORT
DWORD
WINAPI
DsDeregisterDnsHostRecordsW (
    __in_opt LPWSTR ServerName OPTIONAL,
    __in_opt LPWSTR DnsDomainName OPTIONAL,
    __in_opt GUID *DomainGuid OPTIONAL,
    __in_opt GUID *DsaGuid OPTIONAL,
    __in LPWSTR DnsHostName
    );

DECLSPEC_IMPORT
DWORD
WINAPI
DsDeregisterDnsHostRecordsA (
    __in_opt LPSTR ServerName OPTIONAL,
    __in_opt LPSTR DnsDomainName OPTIONAL,
    __in_opt GUID *DomainGuid OPTIONAL,
    __in_opt GUID *DsaGuid OPTIONAL,
    __in LPSTR DnsHostName
    );
