# 0 "project/mimikatz/inc/WinDNS.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/mimikatz/inc/WinDNS.h"
# 38 "project/mimikatz/inc/WinDNS.h"
typedef unsigned __int64 QWORD, *PQWORD;





typedef __success(return == 0) LONG DNS_STATUS;
typedef DNS_STATUS *PDNS_STATUS;





typedef DWORD IP4_ADDRESS, *PIP4_ADDRESS;
# 65 "project/mimikatz/inc/WinDNS.h"
typedef struct _IP4_ARRAY
{
    DWORD AddrCount;



    IP4_ADDRESS AddrArray[1];

}
IP4_ARRAY, *PIP4_ARRAY;
# 99 "project/mimikatz/inc/WinDNS.h"
typedef union
{



    DWORD IP6Dword[4];
    WORD IP6Word[8];
    BYTE IP6Byte[16];



}
IP6_ADDRESS, *PIP6_ADDRESS;
# 256 "project/mimikatz/inc/WinDNS.h"
#pragma pack(push, 1)





typedef struct _DNS_HEADER
{
    WORD Xid;

    BYTE RecursionDesired : 1;
    BYTE Truncation : 1;
    BYTE Authoritative : 1;
    BYTE Opcode : 4;
    BYTE IsResponse : 1;

    BYTE ResponseCode : 4;
    BYTE CheckingDisabled : 1;
    BYTE AuthenticatedData : 1;
    BYTE Reserved : 1;
    BYTE RecursionAvailable : 1;

    WORD QuestionCount;
    WORD AnswerCount;
    WORD NameServerCount;
    WORD AdditionalCount;
}
DNS_HEADER, *PDNS_HEADER;

typedef struct _DNS_HEADER_EXT
{
    WORD Reserved : 15;
    WORD DnssecOk : 1;
    BYTE chRcode;
    BYTE chVersion;
}
DNS_HEADER_EXT, *PDNS_HEADER_EXT;
# 346 "project/mimikatz/inc/WinDNS.h"
typedef struct _DNS_WIRE_QUESTION
{


    WORD QuestionType;
    WORD QuestionClass;
}
DNS_WIRE_QUESTION, *PDNS_WIRE_QUESTION;






typedef struct _DNS_WIRE_RECORD
{


    WORD RecordType;
    WORD RecordClass;
    DWORD TimeToLive;
    WORD DataLength;


}
DNS_WIRE_RECORD, *PDNS_WIRE_RECORD;

#pragma pack(pop)
# 808 "project/mimikatz/inc/WinDNS.h"
typedef enum
{

    DnsConfigPrimaryDomainName_W,
    DnsConfigPrimaryDomainName_A,
    DnsConfigPrimaryDomainName_UTF8,


    DnsConfigAdapterDomainName_W,
    DnsConfigAdapterDomainName_A,
    DnsConfigAdapterDomainName_UTF8,


    DnsConfigDnsServerList,


    DnsConfigSearchList,
    DnsConfigAdapterInfo,


    DnsConfigPrimaryHostNameRegistrationEnabled,
    DnsConfigAdapterHostNameRegistrationEnabled,
    DnsConfigAddressRegistrationMaxCount,


    DnsConfigHostName_W,
    DnsConfigHostName_A,
    DnsConfigHostName_UTF8,
    DnsConfigFullHostName_W,
    DnsConfigFullHostName_A,
    DnsConfigFullHostName_UTF8


}
DNS_CONFIG_TYPE;
# 854 "project/mimikatz/inc/WinDNS.h"
DNS_STATUS
WINAPI
DnsQueryConfig(
    __in DNS_CONFIG_TYPE Config,
    __in DWORD Flag,
    __in_opt PCWSTR pwsAdapterName,
    __in_opt PVOID pReserved,
    __out_bcount_part(*pBufLen, *pBufLen) PVOID pBuffer,
    __inout PDWORD pBufLen
    );
# 875 "project/mimikatz/inc/WinDNS.h"
typedef struct
{
    IP4_ADDRESS IpAddress;
}
DNS_A_DATA, *PDNS_A_DATA;

typedef struct
{
    PWSTR pNameHost;
}
DNS_PTR_DATAW, *PDNS_PTR_DATAW;

typedef struct
{
    PSTR pNameHost;
}
DNS_PTR_DATAA, *PDNS_PTR_DATAA;

typedef struct
{
    PWSTR pNamePrimaryServer;
    PWSTR pNameAdministrator;
    DWORD dwSerialNo;
    DWORD dwRefresh;
    DWORD dwRetry;
    DWORD dwExpire;
    DWORD dwDefaultTtl;
}
DNS_SOA_DATAW, *PDNS_SOA_DATAW;

typedef struct
{
    PSTR pNamePrimaryServer;
    PSTR pNameAdministrator;
    DWORD dwSerialNo;
    DWORD dwRefresh;
    DWORD dwRetry;
    DWORD dwExpire;
    DWORD dwDefaultTtl;
}
DNS_SOA_DATAA, *PDNS_SOA_DATAA;

typedef struct
{
    PWSTR pNameMailbox;
    PWSTR pNameErrorsMailbox;
}
DNS_MINFO_DATAW, *PDNS_MINFO_DATAW;

typedef struct
{
    PSTR pNameMailbox;
    PSTR pNameErrorsMailbox;
}
DNS_MINFO_DATAA, *PDNS_MINFO_DATAA;

typedef struct
{
    PWSTR pNameExchange;
    WORD wPreference;
    WORD Pad;
}
DNS_MX_DATAW, *PDNS_MX_DATAW;

typedef struct
{
    PSTR pNameExchange;
    WORD wPreference;
    WORD Pad;
}
DNS_MX_DATAA, *PDNS_MX_DATAA;

typedef struct
{
    DWORD dwStringCount;



    PWSTR pStringArray[1];

}
DNS_TXT_DATAW, *PDNS_TXT_DATAW;

typedef struct
{
    DWORD dwStringCount;



    PSTR pStringArray[1];

}
DNS_TXT_DATAA, *PDNS_TXT_DATAA;

typedef struct
{
    DWORD dwByteCount;



    BYTE Data[1];

}
DNS_NULL_DATA, *PDNS_NULL_DATA;

typedef struct
{
    IP4_ADDRESS IpAddress;
    UCHAR chProtocol;
    BYTE BitMask[1];
}
DNS_WKS_DATA, *PDNS_WKS_DATA;

typedef struct
{
    IP6_ADDRESS Ip6Address;
}
DNS_AAAA_DATA, *PDNS_AAAA_DATA;

typedef struct
{
    WORD wTypeCovered;
    BYTE chAlgorithm;
    BYTE chLabelCount;
    DWORD dwOriginalTtl;
    DWORD dwExpiration;
    DWORD dwTimeSigned;
    WORD wKeyTag;
    WORD wSignatureLength;
    PWSTR pNameSigner;
    BYTE Signature[1];
}
DNS_SIG_DATAW, *PDNS_SIG_DATAW, DNS_RRSIG_DATAW, *PDNS_RRSIG_DATAW;

typedef struct
{
    WORD wTypeCovered;
    BYTE chAlgorithm;
    BYTE chLabelCount;
    DWORD dwOriginalTtl;
    DWORD dwExpiration;
    DWORD dwTimeSigned;
    WORD wKeyTag;
    WORD wSignatureLength;
    PSTR pNameSigner;
    BYTE Signature[1];
}
DNS_SIG_DATAA, *PDNS_SIG_DATAA, DNS_RRSIG_DATAA, *PDNS_RRSIG_DATAA;

typedef struct
{
    WORD wFlags;
    BYTE chProtocol;
    BYTE chAlgorithm;
    WORD wKeyLength;
    WORD wPad;
    BYTE Key[1];
}
DNS_KEY_DATA, *PDNS_KEY_DATA, DNS_DNSKEY_DATA, *PDNS_DNSKEY_DATA;

typedef struct
{
    DWORD dwByteCount;



    BYTE DHCID[1];

}
DNS_DHCID_DATA, *PDNS_DHCID_DATA;

typedef struct
{
    PWSTR pNextDomainName;
    WORD wTypeBitMapsLength;
    WORD wPad;
    BYTE TypeBitMaps[1];
}
DNS_NSEC_DATAW, *PDNS_NSEC_DATAW;

typedef struct
{
    PSTR pNextDomainName;
    WORD wTypeBitMapsLength;
    WORD wPad;
    BYTE TypeBitMaps[1];
}
DNS_NSEC_DATAA, *PDNS_NSEC_DATAA;

typedef struct
{
    WORD wKeyTag;
    BYTE chAlgorithm;
    BYTE chDigestType;
    WORD wDigestLength;
    WORD wPad;
    BYTE Digest[1];
}
DNS_DS_DATA, *PDNS_DS_DATA;

typedef struct
{
    WORD wDataLength;
    WORD wPad;
    BYTE Data[1];
}
DNS_OPT_DATA, *PDNS_OPT_DATA;

typedef struct
{
    WORD wVersion;
    WORD wSize;
    WORD wHorPrec;
    WORD wVerPrec;
    DWORD dwLatitude;
    DWORD dwLongitude;
    DWORD dwAltitude;
}
DNS_LOC_DATA, *PDNS_LOC_DATA;

typedef struct
{
    PWSTR pNameNext;
    WORD wNumTypes;
    WORD wTypes[1];
}
DNS_NXT_DATAW, *PDNS_NXT_DATAW;

typedef struct
{
    PSTR pNameNext;
    WORD wNumTypes;
    WORD wTypes[1];
}
DNS_NXT_DATAA, *PDNS_NXT_DATAA;

typedef struct
{
    PWSTR pNameTarget;
    WORD wPriority;
    WORD wWeight;
    WORD wPort;
    WORD Pad;
}
DNS_SRV_DATAW, *PDNS_SRV_DATAW;

typedef struct
{
    PSTR pNameTarget;
    WORD wPriority;
    WORD wWeight;
    WORD wPort;
    WORD Pad;
}
DNS_SRV_DATAA, *PDNS_SRV_DATAA;

typedef struct
{
    WORD wOrder;
    WORD wPreference;
    PWSTR pFlags;
    PWSTR pService;
    PWSTR pRegularExpression;
    PWSTR pReplacement;
}
DNS_NAPTR_DATAW, *PDNS_NAPTR_DATAW;

typedef struct
{
    WORD wOrder;
    WORD wPreference;
    PSTR pFlags;
    PSTR pService;
    PSTR pRegularExpression;
    PSTR pReplacement;
}
DNS_NAPTR_DATAA, *PDNS_NAPTR_DATAA;



typedef struct
{
    BYTE AddressType;
    BYTE Address[ (20) ];






}
DNS_ATMA_DATA, *PDNS_ATMA_DATA;


typedef struct
{
    PWSTR pNameAlgorithm;
    PBYTE pAlgorithmPacket;
    PBYTE pKey;
    PBYTE pOtherData;
    DWORD dwCreateTime;
    DWORD dwExpireTime;
    WORD wMode;
    WORD wError;
    WORD wKeyLength;
    WORD wOtherLength;
    UCHAR cAlgNameLength;
    BOOL bPacketPointers;
}
DNS_TKEY_DATAW, *PDNS_TKEY_DATAW;

typedef struct
{
    PSTR pNameAlgorithm;
    PBYTE pAlgorithmPacket;
    PBYTE pKey;
    PBYTE pOtherData;
    DWORD dwCreateTime;
    DWORD dwExpireTime;
    WORD wMode;
    WORD wError;
    WORD wKeyLength;
    WORD wOtherLength;
    UCHAR cAlgNameLength;
    BOOL bPacketPointers;
}
DNS_TKEY_DATAA, *PDNS_TKEY_DATAA;

typedef struct
{
    PWSTR pNameAlgorithm;
    PBYTE pAlgorithmPacket;
    PBYTE pSignature;
    PBYTE pOtherData;
    LONGLONG i64CreateTime;
    WORD wFudgeTime;
    WORD wOriginalXid;
    WORD wError;
    WORD wSigLength;
    WORD wOtherLength;
    UCHAR cAlgNameLength;
    BOOL bPacketPointers;
}
DNS_TSIG_DATAW, *PDNS_TSIG_DATAW;

typedef struct
{
    PSTR pNameAlgorithm;
    PBYTE pAlgorithmPacket;
    PBYTE pSignature;
    PBYTE pOtherData;
    LONGLONG i64CreateTime;
    WORD wFudgeTime;
    WORD wOriginalXid;
    WORD wError;
    WORD wSigLength;
    WORD wOtherLength;
    UCHAR cAlgNameLength;
    BOOL bPacketPointers;
}
DNS_TSIG_DATAA, *PDNS_TSIG_DATAA;





typedef struct
{
    DWORD dwMappingFlag;
    DWORD dwLookupTimeout;
    DWORD dwCacheTimeout;
    DWORD cWinsServerCount;
    IP4_ADDRESS WinsServers[1];
}
DNS_WINS_DATA, *PDNS_WINS_DATA;

typedef struct
{
    DWORD dwMappingFlag;
    DWORD dwLookupTimeout;
    DWORD dwCacheTimeout;
    PWSTR pNameResultDomain;
}
DNS_WINSR_DATAW, *PDNS_WINSR_DATAW;

typedef struct
{
    DWORD dwMappingFlag;
    DWORD dwLookupTimeout;
    DWORD dwCacheTimeout;
    PSTR pNameResultDomain;
}
DNS_WINSR_DATAA, *PDNS_WINSR_DATAA;
# 1289 "project/mimikatz/inc/WinDNS.h"
typedef DNS_PTR_DATAA DNS_PTR_DATA, *PDNS_PTR_DATA;
typedef DNS_SOA_DATAA DNS_SOA_DATA, *PDNS_SOA_DATA;
typedef DNS_MINFO_DATAA DNS_MINFO_DATA, *PDNS_MINFO_DATA;
typedef DNS_MX_DATAA DNS_MX_DATA, *PDNS_MX_DATA;
typedef DNS_TXT_DATAA DNS_TXT_DATA, *PDNS_TXT_DATA;
typedef DNS_SIG_DATAA DNS_SIG_DATA, *PDNS_SIG_DATA;
typedef DNS_NXT_DATAA DNS_NXT_DATA, *PDNS_NXT_DATA;
typedef DNS_SRV_DATAA DNS_SRV_DATA, *PDNS_SRV_DATA;
typedef DNS_NAPTR_DATAA DNS_NAPTR_DATA, *PDNS_NAPTR_DATA;
typedef DNS_RRSIG_DATAA DNS_RRSIG_DATA, *PDNS_RRSIG_DATA;
typedef DNS_NSEC_DATAA DNS_NSEC_DATA, *PDNS_NSEC_DATA;
typedef DNS_TKEY_DATAA DNS_TKEY_DATA, *PDNS_TKEY_DATA;
typedef DNS_TSIG_DATAA DNS_TSIG_DATA, *PDNS_TSIG_DATA;
typedef DNS_WINSR_DATAA DNS_WINSR_DATA, *PDNS_WINSR_DATA;
# 1343 "project/mimikatz/inc/WinDNS.h"
typedef struct _DnsRecordFlags
{
    DWORD Section : 2;
    DWORD Delete : 1;
    DWORD CharSet : 2;
    DWORD Unused : 3;

    DWORD Reserved : 24;
}
DNS_RECORD_FLAGS;
# 1362 "project/mimikatz/inc/WinDNS.h"
typedef enum _DnsSection
{
    DnsSectionQuestion,
    DnsSectionAnswer,
    DnsSectionAuthority,
    DnsSectionAddtional,
}
DNS_SECTION;
# 1421 "project/mimikatz/inc/WinDNS.h"
typedef struct _DnsRecordW
{
    struct _DnsRecordW * pNext;
    PWSTR pName;
    WORD wType;
    WORD wDataLength;

    union
    {
        DWORD DW;
        DNS_RECORD_FLAGS S;

    } Flags;

    DWORD dwTtl;
    DWORD dwReserved;



    union
    {
        DNS_A_DATA A;
        DNS_SOA_DATAW SOA, Soa;
        DNS_PTR_DATAW PTR, Ptr,
                            NS, Ns,
                            CNAME, Cname,
                            DNAME, Dname,
                            MB, Mb,
                            MD, Md,
                            MF, Mf,
                            MG, Mg,
                            MR, Mr;
        DNS_MINFO_DATAW MINFO, Minfo,
                            RP, Rp;
        DNS_MX_DATAW MX, Mx,
                            AFSDB, Afsdb,
                            RT, Rt;
        DNS_TXT_DATAW HINFO, Hinfo,
                            ISDN, Isdn,
                            TXT, Txt,
                            X25;
        DNS_NULL_DATA Null;
        DNS_WKS_DATA WKS, Wks;
        DNS_AAAA_DATA AAAA;
        DNS_KEY_DATA KEY, Key;
        DNS_SIG_DATAW SIG, Sig;
        DNS_ATMA_DATA ATMA, Atma;
        DNS_NXT_DATAW NXT, Nxt;
        DNS_SRV_DATAW SRV, Srv;
        DNS_NAPTR_DATAW NAPTR, Naptr;
        DNS_OPT_DATA OPT, Opt;
        DNS_DS_DATA DS, Ds;
        DNS_RRSIG_DATAW RRSIG, Rrsig;
        DNS_NSEC_DATAW NSEC, Nsec;
        DNS_DNSKEY_DATA DNSKEY, Dnskey;
        DNS_TKEY_DATAW TKEY, Tkey;
        DNS_TSIG_DATAW TSIG, Tsig;
        DNS_WINS_DATA WINS, Wins;
        DNS_WINSR_DATAW WINSR, WinsR, NBSTAT, Nbstat;
        DNS_DHCID_DATA DHCID;

    } Data;
}
DNS_RECORDW, *PDNS_RECORDW;

typedef struct _DnsRecordOptW
{
    struct _DnsRecordW * pNext;
    PWSTR pName;
    WORD wType;
    WORD wDataLength;

    union
    {
        DWORD DW;
        DNS_RECORD_FLAGS S;

    } Flags;

    DNS_HEADER_EXT ExtHeader;
    WORD wPayloadSize;
    WORD wReserved;


    union
    {
        DNS_OPT_DATA OPT, Opt;

    } Data;
}
DNS_RECORD_OPTW, *PDNS_RECORD_OPTW;


typedef struct _DnsRecordA
{
    struct _DnsRecordA * pNext;
    PSTR pName;
    WORD wType;
    WORD wDataLength;

    union
    {
        DWORD DW;
        DNS_RECORD_FLAGS S;

    } Flags;

    DWORD dwTtl;
    DWORD dwReserved;



    union
    {
        DNS_A_DATA A;
        DNS_SOA_DATAA SOA, Soa;
        DNS_PTR_DATAA PTR, Ptr,
                            NS, Ns,
                            CNAME, Cname,
                            DNAME, Dname,
                            MB, Mb,
                            MD, Md,
                            MF, Mf,
                            MG, Mg,
                            MR, Mr;
        DNS_MINFO_DATAA MINFO, Minfo,
                            RP, Rp;
        DNS_MX_DATAA MX, Mx,
                            AFSDB, Afsdb,
                            RT, Rt;
        DNS_TXT_DATAA HINFO, Hinfo,
                            ISDN, Isdn,
                            TXT, Txt,
                            X25;
        DNS_NULL_DATA Null;
        DNS_WKS_DATA WKS, Wks;
        DNS_AAAA_DATA AAAA;
        DNS_KEY_DATA KEY, Key;
        DNS_SIG_DATAA SIG, Sig;
        DNS_ATMA_DATA ATMA, Atma;
        DNS_NXT_DATAA NXT, Nxt;
        DNS_SRV_DATAA SRV, Srv;
        DNS_NAPTR_DATAA NAPTR, Naptr;
        DNS_OPT_DATA OPT, Opt;
        DNS_DS_DATA DS, Ds;
        DNS_RRSIG_DATAA RRSIG, Rrsig;
        DNS_NSEC_DATAA NSEC, Nsec;
        DNS_DNSKEY_DATA DNSKEY, Dnskey;
        DNS_TKEY_DATAA TKEY, Tkey;
        DNS_TSIG_DATAA TSIG, Tsig;
        DNS_WINS_DATA WINS, Wins;
        DNS_WINSR_DATAA WINSR, WinsR, NBSTAT, Nbstat;
        DNS_DHCID_DATA DHCID;

    } Data;
}
DNS_RECORDA, *PDNS_RECORDA;


typedef struct _DnsRecordOptA
{
    struct _DnsRecordA * pNext;
    PSTR pName;
    WORD wType;
    WORD wDataLength;

    union
    {
        DWORD DW;
        DNS_RECORD_FLAGS S;

    } Flags;

    DNS_HEADER_EXT ExtHeader;
    WORD wPayloadSize;
    WORD wReserved;



    union
    {
        DNS_OPT_DATA OPT, Opt;

    } Data;
}
DNS_RECORD_OPTA, *PDNS_RECORD_OPTA;






typedef DNS_RECORDA DNS_RECORD, *PDNS_RECORD;
typedef DNS_RECORD_OPTA DNS_RECORD_OPT, *PDNS_RECORD_OPT;
# 1635 "project/mimikatz/inc/WinDNS.h"
typedef struct _DnsRRSet
{
    PDNS_RECORD pFirstRR;
    PDNS_RECORD pLastRR;
}
DNS_RRSET, *PDNS_RRSET;
# 1686 "project/mimikatz/inc/WinDNS.h"
typedef
VOID
(WINAPI *DNS_PROXY_COMPLETION_ROUTINE) (
    __in_opt void *completionContext,
    __in DNS_STATUS status);


typedef enum DNS_PROXY_INFORMATION_TYPE {
                DNS_PROXY_INFORMATION_DIRECT,
                DNS_PROXY_INFORMATION_DEFAULT_SETTINGS,
                DNS_PROXY_INFORMATION_PROXY_NAME,
                DNS_PROXY_INFORMATION_DOES_NOT_EXIST
} DNS_PROXY_INFORMATION_TYPE;

typedef struct DNS_PROXY_INFORMATION {
                __in ULONG version;
                __out DNS_PROXY_INFORMATION_TYPE proxyInformationType;
                __out_opt PWSTR proxyName;
} DNS_PROXY_INFORMATION;
# 1719 "project/mimikatz/inc/WinDNS.h"
typedef enum _DNS_CHARSET
{
    DnsCharSetUnknown,
    DnsCharSetUnicode,
    DnsCharSetUtf8,
    DnsCharSetAnsi,
}
DNS_CHARSET;


PDNS_RECORD
WINAPI
DnsRecordCopyEx(
    __in PDNS_RECORD pRecord,
    __in DNS_CHARSET CharSetIn,
    __in DNS_CHARSET CharSetOut
    );

PDNS_RECORD
WINAPI
DnsRecordSetCopyEx(
    __in PDNS_RECORD pRecordSet,
    __in DNS_CHARSET CharSetIn,
    __in DNS_CHARSET CharSetOut
    );
# 1768 "project/mimikatz/inc/WinDNS.h"
BOOL
WINAPI
DnsRecordCompare(
    __in PDNS_RECORD pRecord1,
    __in PDNS_RECORD pRecord2
    );

BOOL
WINAPI
DnsRecordSetCompare(
    __inout PDNS_RECORD pRR1,
    __inout PDNS_RECORD pRR2,
    __deref_opt_out_opt PDNS_RECORD * ppDiff1,
    __deref_opt_out_opt PDNS_RECORD * ppDiff2
    );





PDNS_RECORD
DnsRecordSetDetach(
    __inout PDNS_RECORD pRecordList
    );
# 1802 "project/mimikatz/inc/WinDNS.h"
typedef enum
{
    DnsFreeFlat = 0,
    DnsFreeRecordList,
    DnsFreeParsedMessageFields
}
DNS_FREE_TYPE;

VOID
WINAPI
DnsFree(
    __inout PVOID pData,
    __in DNS_FREE_TYPE FreeType
    );
# 1829 "project/mimikatz/inc/WinDNS.h"
VOID
WINAPI
DnsRecordListFree(
    __inout_opt PDNS_RECORD pRecordList,
    __in DNS_FREE_TYPE FreeType
    );
# 1879 "project/mimikatz/inc/WinDNS.h"
DNS_STATUS
WINAPI
DnsQuery_A(
    __in PCSTR pszName,
    __in WORD wType,
    __in DWORD Options,
    __inout_opt PVOID pExtra,
    __deref_out_opt PDNS_RECORD * ppQueryResults,
    __deref_opt_out_opt PVOID * pReserved
    );

DNS_STATUS
WINAPI
DnsQuery_UTF8(
    __in PCSTR pszName,
    __in WORD wType,
    __in DWORD Options,
    __inout_opt PVOID pExtra,
    __deref_out_opt PDNS_RECORD * ppQueryResults,
    __deref_opt_out_opt PVOID * pReserved
    );

DNS_STATUS
WINAPI
DnsQuery_W(
    __in PCWSTR pszName,
    __in WORD wType,
    __in DWORD Options,
    __inout_opt PVOID pExtra,
    __deref_out_opt PDNS_RECORD * ppQueryResults,
    __deref_opt_out_opt PVOID * pReserved
    );
# 1956 "project/mimikatz/inc/WinDNS.h"
DNS_STATUS
WINAPI
DnsAcquireContextHandle_W(
    __in DWORD CredentialFlags,
    __in_opt PVOID Credentials,
    __deref_out PHANDLE pContext
    );

DNS_STATUS
WINAPI
DnsAcquireContextHandle_A(
    __in DWORD CredentialFlags,
    __in_opt PVOID Credentials,
    __deref_out PHANDLE pContext
    );







VOID
WINAPI
DnsReleaseContextHandle(
    __in HANDLE hContext
    );





DNS_STATUS
WINAPI
DnsModifyRecordsInSet_W(
    __in_opt PDNS_RECORD pAddRecords,
    __in_opt PDNS_RECORD pDeleteRecords,
    __in DWORD Options,
    __in_opt HANDLE hCredentials,
    __inout_opt PVOID pExtraList,
    __inout_opt PVOID pReserved
    );

DNS_STATUS
WINAPI
DnsModifyRecordsInSet_A(
    __in_opt PDNS_RECORD pAddRecords,
    __in_opt PDNS_RECORD pDeleteRecords,
    __in DWORD Options,
    __in_opt HANDLE hCredentials,
    __inout_opt PVOID pExtraList,
    __inout_opt PVOID pReserved
    );

DNS_STATUS
WINAPI
DnsModifyRecordsInSet_UTF8(
    __in_opt PDNS_RECORD pAddRecords,
    __in_opt PDNS_RECORD pDeleteRecords,
    __in DWORD Options,
    __in_opt HANDLE hCredentials,
    __inout_opt PVOID pExtraList,
    __inout_opt PVOID pReserved
    );
# 2028 "project/mimikatz/inc/WinDNS.h"
DNS_STATUS
WINAPI
DnsReplaceRecordSetW(
    __in PDNS_RECORD pReplaceSet,
    __in DWORD Options,
    __in_opt HANDLE hContext,
    __inout_opt PVOID pExtraInfo,
    __inout_opt PVOID pReserved
    );

DNS_STATUS
WINAPI
DnsReplaceRecordSetA(
    __in PDNS_RECORD pReplaceSet,
    __in DWORD Options,
    __in_opt HANDLE hContext,
    __inout_opt PVOID pExtraInfo,
    __inout_opt PVOID pReserved
    );

DNS_STATUS
WINAPI
DnsReplaceRecordSetUTF8(
    __in PDNS_RECORD pReplaceSet,
    __in DWORD Options,
    __in_opt HANDLE hContext,
    __inout_opt PVOID pExtraInfo,
    __inout_opt PVOID pReserved
    );
# 2070 "project/mimikatz/inc/WinDNS.h"
typedef enum _DNS_NAME_FORMAT
{
    DnsNameDomain,
    DnsNameDomainLabel,
    DnsNameHostnameFull,
    DnsNameHostnameLabel,
    DnsNameWildcard,
    DnsNameSrvRecord,
    DnsNameValidateTld
}
DNS_NAME_FORMAT;


DNS_STATUS
DnsValidateName_W(
    __in PCWSTR pszName,
    __in DNS_NAME_FORMAT Format
    );

DNS_STATUS
DnsValidateName_A(
    __in PCSTR pszName,
    __in DNS_NAME_FORMAT Format
    );

DNS_STATUS
DnsValidateName_UTF8(
    __in PCSTR pszName,
    __in DNS_NAME_FORMAT Format
    );
# 2138 "project/mimikatz/inc/WinDNS.h"
BOOL
WINAPI
DnsNameCompare_A(
    __in PCSTR pName1,
    __in PCSTR pName2
    );

BOOL
WINAPI
DnsNameCompare_W(
    __in PCWSTR pName1,
    __in PCWSTR pName2
    );
# 2164 "project/mimikatz/inc/WinDNS.h"
typedef struct _DNS_MESSAGE_BUFFER
{
    DNS_HEADER MessageHead;
    CHAR MessageBody[1];
}
DNS_MESSAGE_BUFFER, *PDNS_MESSAGE_BUFFER;

BOOL
WINAPI
DnsWriteQuestionToBuffer_W(
    __inout PDNS_MESSAGE_BUFFER pDnsBuffer,
    __inout PDWORD pdwBufferSize,
    __in PCWSTR pszName,
    __in WORD wType,
    __in WORD Xid,
    __in BOOL fRecursionDesired
    );

BOOL
WINAPI
DnsWriteQuestionToBuffer_UTF8(
    __inout PDNS_MESSAGE_BUFFER pDnsBuffer,
    __inout PDWORD pdwBufferSize,
    __in PCSTR pszName,
    __in WORD wType,
    __in WORD Xid,
    __in BOOL fRecursionDesired
    );

DNS_STATUS
WINAPI
DnsExtractRecordsFromMessage_W(
    __in PDNS_MESSAGE_BUFFER pDnsBuffer,
    __in WORD wMessageLength,
    __deref_out PDNS_RECORD * ppRecord
    );

DNS_STATUS
WINAPI
DnsExtractRecordsFromMessage_UTF8(
    __in PDNS_MESSAGE_BUFFER pDnsBuffer,
    __in WORD wMessageLength,
    __deref_out PDNS_RECORD * ppRecord
    );




DWORD
WINAPI
DnsGetProxyInformation(
                __in PCWSTR hostName,
                __inout DNS_PROXY_INFORMATION *proxyInformation,
                __inout_opt DNS_PROXY_INFORMATION *defaultProxyInformation,
                __in_opt DNS_PROXY_COMPLETION_ROUTINE completionRoutine,
                __in_opt void *completionContext);


VOID DnsFreeProxyName(__inout PWSTR proxyName);
