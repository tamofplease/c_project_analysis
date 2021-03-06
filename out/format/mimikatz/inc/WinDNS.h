# 1 "project/mimikatz/inc/WinDNS.h"
# 24 "project/mimikatz/inc/WinDNS.h"
#ifndef _WINDNS_INCLUDED_
#define _WINDNS_INCLUDED_ 


#ifdef __cplusplus
extern "C"
{
#endif






typedef unsigned __int64 QWORD, *PQWORD;





typedef __success(return == 0) LONG DNS_STATUS;
typedef DNS_STATUS *PDNS_STATUS;





typedef DWORD IP4_ADDRESS, *PIP4_ADDRESS;

#define SIZEOF_IP4_ADDRESS (4)
#define IP4_ADDRESS_STRING_LENGTH (16)



#define IP4_ADDRESS_STRING_BUFFER_LENGTH (16)






typedef struct _IP4_ARRAY
{
    DWORD AddrCount;
#ifdef MIDL_PASS
    [size_is( AddrCount )] IP4_ADDRESS AddrArray[];
#else
    IP4_ADDRESS AddrArray[1];
#endif
}
IP4_ARRAY, *PIP4_ARRAY;






#ifdef MIDL_PASS

#ifdef _WIN64
#pragma pack(push, 8)
#else
#pragma pack(push, 4)
#endif

typedef struct
{
    QWORD IP6Qword[2];
}
IP6_ADDRESS, *PIP6_ADDRESS;

#pragma pack(pop)

#else

typedef union
{
#ifdef _WIN64
    QWORD IP6Qword[2];
#endif
    DWORD IP6Dword[4];
    WORD IP6Word[8];
    BYTE IP6Byte[16];
#ifdef IN6_ADDR
    IN6_ADDR In6;
#endif
}
IP6_ADDRESS, *PIP6_ADDRESS;

#endif
# 130 "project/mimikatz/inc/WinDNS.h"
#undef IP6_ADDRESS_STRING_LENGTH
#define IP6_ADDRESS_STRING_LENGTH (65)
#define IP6_ADDRESS_STRING_BUFFER_LENGTH (65)





#define DNS_ADDRESS_STRING_LENGTH (IP6_ADDRESS_STRING_LENGTH)






#define INLINE_WORD_FLIP(out,in) \
        { \
            WORD _in = (in); \
            (out) = (_in << 8) | (_in >> 8); \
        }
#define INLINE_HTONS(out,in) INLINE_WORD_FLIP(out, in)
#define INLINE_NTOHS(out,in) INLINE_WORD_FLIP(out, in)

#define INLINE_DWORD_FLIP(out,in) \
        { \
            DWORD _in = (in); \
            (out) = ((_in << 8) & 0x00ff0000) | \
                    (_in << 24) | \
                    ((_in >> 8) & 0x0000ff00) | \
                    (_in >> 24); \
        }
#define INLINE_NTOHL(out,in) INLINE_DWORD_FLIP(out, in)
#define INLINE_HTONL(out,in) INLINE_DWORD_FLIP(out, in)






#define INLINE_WRITE_FLIPPED_WORD(pout,in) \
            INLINE_WORD_FLIP( *((UNALIGNED WORD *)(pout)), in )

#define INLINE_WRITE_FLIPPED_DWORD(pout,in) \
            INLINE_DWORD_FLIP( *((UNALIGNED DWORD *)(pout)), in )
# 186 "project/mimikatz/inc/WinDNS.h"
#define DNS_PORT_HOST_ORDER (0x0035)
#define DNS_PORT_NET_ORDER (0x3500)





#define DNS_RFC_MAX_UDP_PACKET_LENGTH (512)






#define DNS_MAX_NAME_LENGTH (255)
#define DNS_MAX_LABEL_LENGTH (63)

#define DNS_MAX_NAME_BUFFER_LENGTH (256)
#define DNS_MAX_LABEL_BUFFER_LENGTH (64)





#define DNS_IP4_REVERSE_DOMAIN_STRING_A ("in-addr.arpa.")
#define DNS_IP4_REVERSE_DOMAIN_STRING_W (L"in-addr.arpa.")

#define DNS_MAX_IP4_REVERSE_NAME_LENGTH (IP4_ADDRESS_STRING_LENGTH+15)


#define DNS_IP6_REVERSE_DOMAIN_STRING_A ("ip6.arpa.")
#define DNS_IP6_REVERSE_DOMAIN_STRING_W (L"ip6.arpa.")

#define DNS_MAX_IP6_REVERSE_NAME_LENGTH (75)




#define DNS_MAX_REVERSE_NAME_LENGTH DNS_MAX_IP6_REVERSE_NAME_LENGTH

#ifdef UNICODE
#define DNS_IP4_REVERSE_DOMAIN_STRING DNS_IP4_REVERSE_DOMAIN_STRING_W
#define DNS_IP6_REVERSE_DOMAIN_STRING DNS_IP6_REVERSE_DOMAIN_STRING_W
#else
#define DNS_IP4_REVERSE_DOMAIN_STRING DNS_IP4_REVERSE_DOMAIN_STRING_A
#define DNS_IP6_REVERSE_DOMAIN_STRING DNS_IP6_REVERSE_DOMAIN_STRING_A
#endif





#define DNS_MAX_IP4_REVERSE_NAME_BUFFER_LENGTH DNS_MAX_IP4_REVERSE_NAME_LENGTH
#define DNS_MAX_IP6_REVERSE_NAME_BUFFER_LENGTH DNS_MAX_IP6_REVERSE_NAME_LENGTH
#define DNS_MAX_REVERSE_NAME_BUFFER_LENGTH DNS_MAX_REVERSE_NAME_LENGTH






#define DNS_MAX_TEXT_STRING_LENGTH (255)
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





#define DNS_HEADER_FLAGS(pHead) ( *((PWORD)(pHead)+1) )
# 308 "project/mimikatz/inc/WinDNS.h"
#define DNS_BYTE_FLIP_HEADER_COUNTS(pHeader) \
        { \
            PDNS_HEADER _head = (pHeader); \
            INLINE_HTONS(_head->Xid, _head->Xid ); \
            INLINE_HTONS(_head->QuestionCount, _head->QuestionCount ); \
            INLINE_HTONS(_head->AnswerCount, _head->AnswerCount ); \
            INLINE_HTONS(_head->NameServerCount,_head->NameServerCount ); \
            INLINE_HTONS(_head->AdditionalCount,_head->AdditionalCount ); \
        }





#define DNS_OFFSET_TO_QUESTION_NAME sizeof(DNS_HEADER)





#define DNS_COMPRESSED_QUESTION_NAME (0xC00C)






#define DNS_QUESTION_NAME_FROM_HEADER(_pHeader_) \
            ( (PCHAR)( (PDNS_HEADER)(_pHeader_) + 1 ) )

#define DNS_ANSWER_FROM_QUESTION(_pQuestion_) \
            ( (PCHAR)( (PDNS_QUESTION)(_pQuestion_) + 1 ) )






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






#define DNS_OPCODE_QUERY 0
#define DNS_OPCODE_IQUERY 1
#define DNS_OPCODE_SERVER_STATUS 2
#define DNS_OPCODE_UNKNOWN 3
#define DNS_OPCODE_NOTIFY 4
#define DNS_OPCODE_UPDATE 5







#define DNS_RCODE_NOERROR 0
#define DNS_RCODE_FORMERR 1
#define DNS_RCODE_SERVFAIL 2
#define DNS_RCODE_NXDOMAIN 3
#define DNS_RCODE_NOTIMPL 4
#define DNS_RCODE_REFUSED 5
#define DNS_RCODE_YXDOMAIN 6
#define DNS_RCODE_YXRRSET 7
#define DNS_RCODE_NXRRSET 8
#define DNS_RCODE_NOTAUTH 9
#define DNS_RCODE_NOTZONE 10
#define DNS_RCODE_MAX 15





#define DNS_RCODE_BADVERS 16
#define DNS_RCODE_BADSIG 16
#define DNS_RCODE_BADKEY 17
#define DNS_RCODE_BADTIME 18





#define DNS_RCODE_NO_ERROR DNS_RCODE_NOERROR
#define DNS_RCODE_FORMAT_ERROR DNS_RCODE_FORMERR
#define DNS_RCODE_SERVER_FAILURE DNS_RCODE_SERVFAIL
#define DNS_RCODE_NAME_ERROR DNS_RCODE_NXDOMAIN
#define DNS_RCODE_NOT_IMPLEMENTED DNS_RCODE_NOTIMPL
# 437 "project/mimikatz/inc/WinDNS.h"
#define DNS_CLASS_INTERNET 0x0001
#define DNS_CLASS_CSNET 0x0002
#define DNS_CLASS_CHAOS 0x0003
#define DNS_CLASS_HESIOD 0x0004
#define DNS_CLASS_NONE 0x00fe
#define DNS_CLASS_ALL 0x00ff
#define DNS_CLASS_ANY 0x00ff

#define DNS_RCLASS_INTERNET 0x0100
#define DNS_RCLASS_CSNET 0x0200
#define DNS_RCLASS_CHAOS 0x0300
#define DNS_RCLASS_HESIOD 0x0400
#define DNS_RCLASS_NONE 0xfe00
#define DNS_RCLASS_ALL 0xff00
#define DNS_RCLASS_ANY 0xff00
# 465 "project/mimikatz/inc/WinDNS.h"
#define DNS_TYPE_ZERO 0x0000


#define DNS_TYPE_A 0x0001
#define DNS_TYPE_NS 0x0002
#define DNS_TYPE_MD 0x0003
#define DNS_TYPE_MF 0x0004
#define DNS_TYPE_CNAME 0x0005
#define DNS_TYPE_SOA 0x0006
#define DNS_TYPE_MB 0x0007
#define DNS_TYPE_MG 0x0008
#define DNS_TYPE_MR 0x0009
#define DNS_TYPE_NULL 0x000a
#define DNS_TYPE_WKS 0x000b
#define DNS_TYPE_PTR 0x000c
#define DNS_TYPE_HINFO 0x000d
#define DNS_TYPE_MINFO 0x000e
#define DNS_TYPE_MX 0x000f
#define DNS_TYPE_TEXT 0x0010


#define DNS_TYPE_RP 0x0011
#define DNS_TYPE_AFSDB 0x0012
#define DNS_TYPE_X25 0x0013
#define DNS_TYPE_ISDN 0x0014
#define DNS_TYPE_RT 0x0015


#define DNS_TYPE_NSAP 0x0016
#define DNS_TYPE_NSAPPTR 0x0017


#define DNS_TYPE_SIG 0x0018
#define DNS_TYPE_KEY 0x0019


#define DNS_TYPE_PX 0x001a


#define DNS_TYPE_GPOS 0x001b


#define DNS_TYPE_AAAA 0x001c


#define DNS_TYPE_LOC 0x001d


#define DNS_TYPE_NXT 0x001e


#define DNS_TYPE_EID 0x001f


#define DNS_TYPE_NIMLOC 0x0020


#define DNS_TYPE_SRV 0x0021


#define DNS_TYPE_ATMA 0x0022


#define DNS_TYPE_NAPTR 0x0023


#define DNS_TYPE_KX 0x0024


#define DNS_TYPE_CERT 0x0025


#define DNS_TYPE_A6 0x0026


#define DNS_TYPE_DNAME 0x0027


#define DNS_TYPE_SINK 0x0028


#define DNS_TYPE_OPT 0x0029


#define DNS_TYPE_DS 0x002b


#define DNS_TYPE_RRSIG 0x002e


#define DNS_TYPE_NSEC 0x002f


#define DNS_TYPE_DNSKEY 0x0030


#define DNS_TYPE_DHCID 0x0031





#define DNS_TYPE_UINFO 0x0064
#define DNS_TYPE_UID 0x0065
#define DNS_TYPE_GID 0x0066
#define DNS_TYPE_UNSPEC 0x0067
# 581 "project/mimikatz/inc/WinDNS.h"
#define DNS_TYPE_ADDRS 0x00f8
#define DNS_TYPE_TKEY 0x00f9
#define DNS_TYPE_TSIG 0x00fa
#define DNS_TYPE_IXFR 0x00fb
#define DNS_TYPE_AXFR 0x00fc
#define DNS_TYPE_MAILB 0x00fd
#define DNS_TYPE_MAILA 0x00fe
#define DNS_TYPE_ALL 0x00ff
#define DNS_TYPE_ANY 0x00ff





#define DNS_TYPE_WINS 0xff01
#define DNS_TYPE_WINSR 0xff02
#define DNS_TYPE_NBSTAT (DNS_TYPE_WINSR)






#define DNS_RTYPE_A 0x0100
#define DNS_RTYPE_NS 0x0200
#define DNS_RTYPE_MD 0x0300
#define DNS_RTYPE_MF 0x0400
#define DNS_RTYPE_CNAME 0x0500
#define DNS_RTYPE_SOA 0x0600
#define DNS_RTYPE_MB 0x0700
#define DNS_RTYPE_MG 0x0800
#define DNS_RTYPE_MR 0x0900
#define DNS_RTYPE_NULL 0x0a00
#define DNS_RTYPE_WKS 0x0b00
#define DNS_RTYPE_PTR 0x0c00
#define DNS_RTYPE_HINFO 0x0d00
#define DNS_RTYPE_MINFO 0x0e00
#define DNS_RTYPE_MX 0x0f00
#define DNS_RTYPE_TEXT 0x1000
#define DNS_RTYPE_RP 0x1100
#define DNS_RTYPE_AFSDB 0x1200
#define DNS_RTYPE_X25 0x1300
#define DNS_RTYPE_ISDN 0x1400
#define DNS_RTYPE_RT 0x1500
#define DNS_RTYPE_NSAP 0x1600
#define DNS_RTYPE_NSAPPTR 0x1700
#define DNS_RTYPE_SIG 0x1800
#define DNS_RTYPE_KEY 0x1900
#define DNS_RTYPE_PX 0x1a00
#define DNS_RTYPE_GPOS 0x1b00
#define DNS_RTYPE_AAAA 0x1c00
#define DNS_RTYPE_LOC 0x1d00
#define DNS_RTYPE_NXT 0x1e00
#define DNS_RTYPE_EID 0x1f00
#define DNS_RTYPE_NIMLOC 0x2000
#define DNS_RTYPE_SRV 0x2100
#define DNS_RTYPE_ATMA 0x2200
#define DNS_RTYPE_NAPTR 0x2300
#define DNS_RTYPE_KX 0x2400
#define DNS_RTYPE_CERT 0x2500
#define DNS_RTYPE_A6 0x2600
#define DNS_RTYPE_DNAME 0x2700
#define DNS_RTYPE_SINK 0x2800
#define DNS_RTYPE_OPT 0x2900

#define DNS_RTYPE_DS 0x2b00
#define DNS_RTYPE_RRSIG 0x2e00
#define DNS_RTYPE_NSEC 0x2f00
#define DNS_RTYPE_DNSKEY 0x3000
#define DNS_RTYPE_DHCID 0x3100





#define DNS_RTYPE_UINFO 0x6400
#define DNS_RTYPE_UID 0x6500
#define DNS_RTYPE_GID 0x6600
#define DNS_RTYPE_UNSPEC 0x6700





#define DNS_RTYPE_TKEY 0xf900
#define DNS_RTYPE_TSIG 0xfa00
#define DNS_RTYPE_IXFR 0xfb00
#define DNS_RTYPE_AXFR 0xfc00
#define DNS_RTYPE_MAILB 0xfd00
#define DNS_RTYPE_MAILA 0xfe00
#define DNS_RTYPE_ALL 0xff00
#define DNS_RTYPE_ANY 0xff00





#define DNS_RTYPE_WINS 0x01ff
#define DNS_RTYPE_WINSR 0x02ff
# 695 "project/mimikatz/inc/WinDNS.h"
#ifndef ATMA_E164
#define DNS_ATMA_FORMAT_E164 1
#define DNS_ATMA_FORMAT_AESA 2
#define DNS_ATMA_MAX_ADDR_LENGTH (20)
#else
#define DNS_ATMA_FORMAT_E164 ATM_E164
#define DNS_ATMA_FORMAT_AESA ATM_AESA
#define DNS_ATMA_MAX_ADDR_LENGTH ATM_ADDR_SIZE
#endif

#define DNS_ATMA_AESA_ADDR_LENGTH (20)
#define DNS_ATMA_MAX_RECORD_LENGTH (DNS_ATMA_MAX_ADDR_LENGTH+1)
# 715 "project/mimikatz/inc/WinDNS.h"
#define DNSSEC_ALGORITHM_RSAMD5 1
#define DNSSEC_ALGORITHM_RSASHA1 5
#define DNSSEC_ALGORITHM_NULL 253
#define DNSSEC_ALGORITHM_PRIVATE 254



#define DNSSEC_PROTOCOL_NONE 0
#define DNSSEC_PROTOCOL_TLS 1
#define DNSSEC_PROTOCOL_EMAIL 2
#define DNSSEC_PROTOCOL_DNSSEC 3
#define DNSSEC_PROTOCOL_IPSEC 4



#define DNSSEC_KEY_FLAG_NOAUTH 0x0001
#define DNSSEC_KEY_FLAG_NOCONF 0x0002
#define DNSSEC_KEY_FLAG_FLAG2 0x0004
#define DNSSEC_KEY_FLAG_EXTEND 0x0008
#define DNSSEC_KEY_FLAG_ 
#define DNSSEC_KEY_FLAG_FLAG4 0x0010
#define DNSSEC_KEY_FLAG_FLAG5 0x0020



#define DNSSEC_KEY_FLAG_USER 0x0000
#define DNSSEC_KEY_FLAG_ZONE 0x0040
#define DNSSEC_KEY_FLAG_HOST 0x0080
#define DNSSEC_KEY_FLAG_NTPE3 0x00c0



#define DNSSEC_KEY_FLAG_FLAG8 0x0100
#define DNSSEC_KEY_FLAG_FLAG9 0x0200
#define DNSSEC_KEY_FLAG_FLAG10 0x0400
#define DNSSEC_KEY_FLAG_FLAG11 0x0800



#define DNSSEC_KEY_FLAG_SIG0 0x0000
#define DNSSEC_KEY_FLAG_SIG1 0x1000
#define DNSSEC_KEY_FLAG_SIG2 0x2000
#define DNSSEC_KEY_FLAG_SIG3 0x3000
#define DNSSEC_KEY_FLAG_SIG4 0x4000
#define DNSSEC_KEY_FLAG_SIG5 0x5000
#define DNSSEC_KEY_FLAG_SIG6 0x6000
#define DNSSEC_KEY_FLAG_SIG7 0x7000
#define DNSSEC_KEY_FLAG_SIG8 0x8000
#define DNSSEC_KEY_FLAG_SIG9 0x9000
#define DNSSEC_KEY_FLAG_SIG10 0xa000
#define DNSSEC_KEY_FLAG_SIG11 0xb000
#define DNSSEC_KEY_FLAG_SIG12 0xc000
#define DNSSEC_KEY_FLAG_SIG13 0xd000
#define DNSSEC_KEY_FLAG_SIG14 0xe000
#define DNSSEC_KEY_FLAG_SIG15 0xf000






#define DNS_TKEY_MODE_SERVER_ASSIGN 1
#define DNS_TKEY_MODE_DIFFIE_HELLMAN 2
#define DNS_TKEY_MODE_GSS 3
#define DNS_TKEY_MODE_RESOLVER_ASSIGN 4





#define DNS_WINS_FLAG_SCOPE (0x80000000)
#define DNS_WINS_FLAG_LOCAL (0x00010000)






#define IS_WORD_ALIGNED(p) ( !((UINT_PTR)(p) & (UINT_PTR)1) )
#define IS_DWORD_ALIGNED(p) ( !((UINT_PTR)(p) & (UINT_PTR)3) )
#define IS_QWORD_ALIGNED(p) ( !((UINT_PTR)(p) & (UINT_PTR)7) )
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
# 852 "project/mimikatz/inc/WinDNS.h"
#define DNS_CONFIG_FLAG_ALLOC (0x00000001)

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
#ifdef MIDL_PASS
    [size_is(dwStringCount)] PWSTR pStringArray[];
#else
    PWSTR pStringArray[1];
#endif
}
DNS_TXT_DATAW, *PDNS_TXT_DATAW;

typedef struct
{
    DWORD dwStringCount;
#ifdef MIDL_PASS
    [size_is(dwStringCount)] PSTR pStringArray[];
#else
    PSTR pStringArray[1];
#endif
}
DNS_TXT_DATAA, *PDNS_TXT_DATAA;

typedef struct
{
    DWORD dwByteCount;
#ifdef MIDL_PASS
    [size_is(dwByteCount)] BYTE Data[];
#else
    BYTE Data[1];
#endif
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
#ifdef MIDL_PASS
    [size_is(dwByteCount)] BYTE DHCID[];
#else
    BYTE DHCID[1];
#endif
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
    BYTE Address[ DNS_ATMA_MAX_ADDR_LENGTH ];






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





#ifdef UNICODE
typedef DNS_PTR_DATAW DNS_PTR_DATA, *PDNS_PTR_DATA;
typedef DNS_SOA_DATAW DNS_SOA_DATA, *PDNS_SOA_DATA;
typedef DNS_MINFO_DATAW DNS_MINFO_DATA, *PDNS_MINFO_DATA;
typedef DNS_MX_DATAW DNS_MX_DATA, *PDNS_MX_DATA;
typedef DNS_TXT_DATAW DNS_TXT_DATA, *PDNS_TXT_DATA;
typedef DNS_SIG_DATAW DNS_SIG_DATA, *PDNS_SIG_DATA;
typedef DNS_NXT_DATAW DNS_NXT_DATA, *PDNS_NXT_DATA;
typedef DNS_SRV_DATAW DNS_SRV_DATA, *PDNS_SRV_DATA;
typedef DNS_NAPTR_DATAW DNS_NAPTR_DATA, *PDNS_NAPTR_DATA;
typedef DNS_RRSIG_DATAW DNS_RRSIG_DATA, *PDNS_RRSIG_DATA;
typedef DNS_NSEC_DATAW DNS_NSEC_DATA, *PDNS_NSEC_DATA;
typedef DNS_TKEY_DATAW DNS_TKEY_DATA, *PDNS_TKEY_DATA;
typedef DNS_TSIG_DATAW DNS_TSIG_DATA, *PDNS_TSIG_DATA;
typedef DNS_WINSR_DATAW DNS_WINSR_DATA, *PDNS_WINSR_DATA;
#else
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
#endif





#define DNS_TEXT_RECORD_LENGTH(StringCount) \
            (FIELD_OFFSET(DNS_TXT_DATA, pStringArray) + ((StringCount) * sizeof(PCHAR)))

#define DNS_NULL_RECORD_LENGTH(ByteCount) \
            (FIELD_OFFSET(DNS_NULL_DATA, Data) + (ByteCount))

#define DNS_WKS_RECORD_LENGTH(ByteCount) \
            (FIELD_OFFSET(DNS_WKS_DATA, BitMask) + (ByteCount))

#define DNS_WINS_RECORD_LENGTH(IpCount) \
            (FIELD_OFFSET(DNS_WINS_DATA, WinsServers) + ((IpCount) * sizeof(IP4_ADDRESS)))

#define DNS_KEY_RECORD_LENGTH(ByteCount) \
            (FIELD_OFFSET(DNS_KEY_DATA, Key) + (ByteCount))

#define DNS_SIG_RECORD_LENGTH(ByteCount) \
            (FIELD_OFFSET(DNS_SIG_DATA, Signature) + (ByteCount))

#define DNS_NSEC_RECORD_LENGTH(ByteCount) \
            (FIELD_OFFSET(DNS_NSEC_DATA, TypeBitMaps) + (ByteCount))

#define DNS_DS_RECORD_LENGTH(ByteCount) \
            (FIELD_OFFSET(DNS_DS_DATA, Digest) + (ByteCount))

#define DNS_OPT_RECORD_LENGTH(ByteCount) \
            (FIELD_OFFSET(DNS_OPT_DATA, Data) + (ByteCount))

#define DNS_DHCID_RECORD_LENGTH(ByteCount) \
            (FIELD_OFFSET(DNS_DHCID_DATA, DHCID) + (ByteCount))





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



#define DnsSectionZone DnsSectionQuestion
#define DnsSectionPrereq DnsSectionAnswer
#define DnsSectionUpdate DnsSectionAuthority
# 1385 "project/mimikatz/inc/WinDNS.h"
#define DNSREC_SECTION (0x00000003)

#define DNSREC_QUESTION (0x00000000)
#define DNSREC_ANSWER (0x00000001)
#define DNSREC_AUTHORITY (0x00000002)
#define DNSREC_ADDITIONAL (0x00000003)



#define DNSREC_ZONE (0x00000000)
#define DNSREC_PREREQ (0x00000001)
#define DNSREC_UPDATE (0x00000002)



#define DNSREC_DELETE (0x00000004)
#define DNSREC_NOEXIST (0x00000004)
# 1413 "project/mimikatz/inc/WinDNS.h"
#ifdef MIDL_PASS

#define PDNS_RECORD PVOID
#define PDNS_RECORDA PVOID
#define PDNS_RECORDW PVOID

#else

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


#ifdef UNICODE
typedef DNS_RECORDW DNS_RECORD, *PDNS_RECORD;
typedef DNS_RECORD_OPTW DNS_RECORD_OPT, *PDNS_RECORD_OPT;
#else
typedef DNS_RECORDA DNS_RECORD, *PDNS_RECORD;
typedef DNS_RECORD_OPTA DNS_RECORD_OPT, *PDNS_RECORD_OPT;
#endif





#define DNS_RECORD_FIXED_SIZE FIELD_OFFSET( DNS_RECORD, Data )
#define SIZEOF_DNS_RECORD_HEADER DNS_RECORD_FIXED_SIZE

#endif
# 1635 "project/mimikatz/inc/WinDNS.h"
typedef struct _DnsRRSet
{
    PDNS_RECORD pFirstRR;
    PDNS_RECORD pLastRR;
}
DNS_RRSET, *PDNS_RRSET;
# 1663 "project/mimikatz/inc/WinDNS.h"
#define DNS_RRSET_INIT(rrset) \
        { \
            PDNS_RRSET _prrset = &(rrset); \
            _prrset->pFirstRR = NULL; \
            _prrset->pLastRR = (PDNS_RECORD) &_prrset->pFirstRR; \
        }

#define DNS_RRSET_ADD(rrset,pnewRR) \
        { \
            PDNS_RRSET _prrset = &(rrset); \
            PDNS_RECORD _prrnew = (pnewRR); \
            _prrset->pLastRR->pNext = _prrnew; \
            _prrset->pLastRR = _prrnew; \
        }

#define DNS_RRSET_TERMINATE(rrset) \
        { \
            PDNS_RRSET _prrset = &(rrset); \
            _prrset->pLastRR->pNext = NULL; \
        }



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

#ifdef UNICODE
#define DnsRecordCopy(pRR) \
        DnsRecordCopyEx( (pRR), DnsCharSetUnicode, DnsCharSetUnicode )
#define DnsRecordSetCopy(pRR) \
        DnsRecordSetCopyEx( (pRR), DnsCharSetUnicode, DnsCharSetUnicode )
#else
#define DnsRecordCopy(pRR) \
        DnsRecordCopyEx( (pRR), DnsCharSetAnsi, DnsCharSetAnsi )
#define DnsRecordSetCopy(pRR) \
        DnsRecordSetCopyEx( (pRR), DnsCharSetAnsi, DnsCharSetAnsi )
#endif
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
# 1824 "project/mimikatz/inc/WinDNS.h"
#define DnsFreeRecordListDeep DnsFreeRecordList

#if(_WIN32_WINNT >= 0x0501)
#define DnsRecordListFree(p,t) DnsFree(p,DnsFreeRecordList)
#else
VOID
WINAPI
DnsRecordListFree(
    __inout_opt PDNS_RECORD pRecordList,
    __in DNS_FREE_TYPE FreeType
    );
#endif
# 1847 "project/mimikatz/inc/WinDNS.h"
#define DNS_QUERY_STANDARD 0x00000000
#define DNS_QUERY_ACCEPT_TRUNCATED_RESPONSE 0x00000001
#define DNS_QUERY_USE_TCP_ONLY 0x00000002
#define DNS_QUERY_NO_RECURSION 0x00000004
#define DNS_QUERY_BYPASS_CACHE 0x00000008

#define DNS_QUERY_NO_WIRE_QUERY 0x00000010
#define DNS_QUERY_NO_LOCAL_NAME 0x00000020
#define DNS_QUERY_NO_HOSTS_FILE 0x00000040
#define DNS_QUERY_NO_NETBT 0x00000080

#define DNS_QUERY_WIRE_ONLY 0x00000100
#define DNS_QUERY_RETURN_MESSAGE 0x00000200

#define DNS_QUERY_MULTICAST_ONLY 0x00000400
#define DNS_QUERY_NO_MULTICAST 0x00000800

#define DNS_QUERY_TREAT_AS_FQDN 0x00001000
#define DNS_QUERY_APPEND_MULTILABEL 0x00800000

#define DNS_QUERY_DONT_RESET_TTL_VALUES 0x00100000
#define DNS_QUERY_RESERVED 0xf0000000






#define DNS_QUERY_CACHE_ONLY DNS_QUERY_NO_WIRE_QUERY



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

#ifdef UNICODE
#define DnsQuery DnsQuery_W
#else
#define DnsQuery DnsQuery_A
#endif
# 1934 "project/mimikatz/inc/WinDNS.h"
#define DNS_UPDATE_SECURITY_USE_DEFAULT 0x00000000
#define DNS_UPDATE_SECURITY_OFF 0x00000010
#define DNS_UPDATE_SECURITY_ON 0x00000020
#define DNS_UPDATE_SECURITY_ONLY 0x00000100
#define DNS_UPDATE_CACHE_SECURITY_CONTEXT 0x00000200
#define DNS_UPDATE_TEST_USE_LOCAL_SYS_ACCT 0x00000400
#define DNS_UPDATE_FORCE_SECURITY_NEGO 0x00000800
#define DNS_UPDATE_TRY_ALL_MASTER_SERVERS 0x00001000
#define DNS_UPDATE_SKIP_NO_UPDATE_ADAPTERS 0x00002000
#define DNS_UPDATE_REMOTE_SERVER 0x00004000
#define DNS_UPDATE_RESERVED 0xffff0000
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

#ifdef UNICODE
#define DnsAcquireContextHandle DnsAcquireContextHandle_W
#else
#define DnsAcquireContextHandle DnsAcquireContextHandle_A
#endif

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

#ifdef UNICODE
#define DnsModifyRecordsInSet DnsModifyRecordsInSet_W
#else
#define DnsModifyRecordsInSet DnsModifyRecordsInSet_A
#endif


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

#ifdef UNICODE
#define DnsReplaceRecordSet DnsReplaceRecordSetW
#else
#define DnsReplaceRecordSet DnsReplaceRecordSetA
#endif







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

#ifdef UNICODE
#define DnsValidateName(p,f) DnsValidateName_W( (p), (f) )
#else
#define DnsValidateName(p,f) DnsValidateName_A( (p), (f) )
#endif






#define DNS_VALSVR_ERROR_INVALID_ADDR 0x01
#define DNS_VALSVR_ERROR_INVALID_NAME 0x02
#define DNS_VALSVR_ERROR_UNREACHABLE 0x03
#define DNS_VALSVR_ERROR_NO_RESPONSE 0x04
#define DNS_VALSVR_ERROR_NO_AUTH 0x05
#define DNS_VALSVR_ERROR_REFUSED 0x06

#define DNS_VALSVR_ERROR_NO_TCP 0x10
#define DNS_VALSVR_ERROR_UNKNOWN 0xFF


#ifdef _WS2DEF_

DNS_STATUS
DnsValidateServerStatus(
    __in PSOCKADDR server,
    __in PCWSTR queryName,
    __out PDWORD serverStatus
    );

#endif





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

#ifdef UNICODE
#define DnsNameCompare(n1,n2) DnsNameCompare_W( (n1),(n2) )
#else
#define DnsNameCompare(n1,n2) DnsNameCompare_A( (n1),(n2) )
#endif







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


#ifdef __cplusplus
}
#endif

#endif
