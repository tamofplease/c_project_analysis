# 1 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/wincred.h"
# 22 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/wincred.h"
#ifndef _WINCRED_H_
#define _WINCRED_H_ 

#if !defined(_ADVAPI32_)
#define WINADVAPI DECLSPEC_IMPORT
#else
#define WINADVAPI 
#endif

#if !defined(CREDUIAPI)
#if !defined(_CREDUI_)
#define CREDUIAPI EXTERN_C DECLSPEC_IMPORT
#else
#define CREDUIAPI EXTERN_C
#endif
#endif

#ifdef __cplusplus
extern "C" {
#endif






#ifndef __SECHANDLE_DEFINED__
typedef struct _SecHandle
{
    ULONG_PTR dwLower ;
    ULONG_PTR dwUpper ;
} SecHandle, * PSecHandle ;

#define __SECHANDLE_DEFINED__ 
#endif

typedef PSecHandle PCtxtHandle;







#ifndef _WINBASE_
#ifndef _FILETIME_
#define _FILETIME_ 
typedef struct _FILETIME
    {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
    } FILETIME;

typedef struct _FILETIME *PFILETIME;

typedef struct _FILETIME *LPFILETIME;

#endif
#endif




#ifndef _NTDEF_
typedef LONG NTSTATUS, *PNTSTATUS;
#endif
# 120 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/wincred.h"
#define STATUS_LOGON_FAILURE ((NTSTATUS)0xC000006DL)
#define STATUS_WRONG_PASSWORD ((NTSTATUS)0xC000006AL)
#define STATUS_PASSWORD_EXPIRED ((NTSTATUS)0xC0000071L)
#define STATUS_PASSWORD_MUST_CHANGE ((NTSTATUS)0xC0000224L)
#define STATUS_ACCESS_DENIED ((NTSTATUS)0xC0000022L)
#define STATUS_DOWNGRADE_DETECTED ((NTSTATUS)0xC0000388L)
#define STATUS_AUTHENTICATION_FIREWALL_FAILED ((NTSTATUS)0xC0000413L)
#define STATUS_ACCOUNT_DISABLED ((NTSTATUS)0xC0000072L)
#define STATUS_ACCOUNT_RESTRICTION ((NTSTATUS)0xC000006EL)
#define STATUS_ACCOUNT_LOCKED_OUT ((NTSTATUS)0xC0000234L)
#define STATUS_ACCOUNT_EXPIRED ((NTSTATUS)0xC0000193L)
#define STATUS_LOGON_TYPE_NOT_GRANTED ((NTSTATUS)0xC000015BL)


#define NERR_BASE 2100
#define NERR_PasswordExpired (NERR_BASE+142)

#define CREDUIP_IS_USER_PASSWORD_ERROR(_Status) ( \
        (_Status) == ERROR_LOGON_FAILURE || \
        (_Status) == __HRESULT_FROM_WIN32( ERROR_LOGON_FAILURE ) || \
        (_Status) == STATUS_LOGON_FAILURE || \
        (_Status) == HRESULT_FROM_NT( STATUS_LOGON_FAILURE ) || \
        (_Status) == ERROR_ACCESS_DENIED || \
        (_Status) == __HRESULT_FROM_WIN32( ERROR_ACCESS_DENIED ) || \
        (_Status) == STATUS_ACCESS_DENIED || \
        (_Status) == HRESULT_FROM_NT( STATUS_ACCESS_DENIED ) || \
        (_Status) == ERROR_INVALID_PASSWORD || \
        (_Status) == __HRESULT_FROM_WIN32( ERROR_INVALID_PASSWORD ) || \
        (_Status) == STATUS_WRONG_PASSWORD || \
        (_Status) == HRESULT_FROM_NT( STATUS_WRONG_PASSWORD ) || \
        (_Status) == SEC_E_NO_CREDENTIALS || \
        (_Status) == SEC_E_LOGON_DENIED || \
        (_Status) == SEC_E_NO_CONTEXT || \
        (_Status) == STATUS_NO_SECURITY_CONTEXT )

#define CREDUIP_IS_DOWNGRADE_ERROR(_Status) ( \
        (_Status) == ERROR_DOWNGRADE_DETECTED || \
        (_Status) == __HRESULT_FROM_WIN32( ERROR_DOWNGRADE_DETECTED ) || \
        (_Status) == STATUS_DOWNGRADE_DETECTED || \
        (_Status) == HRESULT_FROM_NT( STATUS_DOWNGRADE_DETECTED ) \
)

#define CREDUIP_IS_EXPIRED_ERROR(_Status) ( \
        (_Status) == ERROR_PASSWORD_EXPIRED || \
        (_Status) == __HRESULT_FROM_WIN32( ERROR_PASSWORD_EXPIRED ) || \
        (_Status) == STATUS_PASSWORD_EXPIRED || \
        (_Status) == HRESULT_FROM_NT( STATUS_PASSWORD_EXPIRED ) || \
        (_Status) == ERROR_PASSWORD_MUST_CHANGE || \
        (_Status) == __HRESULT_FROM_WIN32( ERROR_PASSWORD_MUST_CHANGE ) || \
        (_Status) == STATUS_PASSWORD_MUST_CHANGE || \
        (_Status) == HRESULT_FROM_NT( STATUS_PASSWORD_MUST_CHANGE ) || \
        (_Status) == NERR_PasswordExpired || \
        (_Status) == __HRESULT_FROM_WIN32( NERR_PasswordExpired ) \
)

#define CREDUI_IS_AUTHENTICATION_ERROR(_Status) ( \
        CREDUIP_IS_USER_PASSWORD_ERROR( _Status ) || \
        CREDUIP_IS_DOWNGRADE_ERROR( _Status ) || \
        CREDUIP_IS_EXPIRED_ERROR( _Status ) \
)

#define CREDUI_NO_PROMPT_AUTHENTICATION_ERROR(_Status) ( \
        (_Status) == ERROR_AUTHENTICATION_FIREWALL_FAILED || \
        (_Status) == __HRESULT_FROM_WIN32( ERROR_AUTHENTICATION_FIREWALL_FAILED ) || \
        (_Status) == STATUS_AUTHENTICATION_FIREWALL_FAILED || \
        (_Status) == HRESULT_FROM_NT( STATUS_AUTHENTICATION_FIREWALL_FAILED ) || \
        (_Status) == ERROR_ACCOUNT_DISABLED || \
        (_Status) == __HRESULT_FROM_WIN32( ERROR_ACCOUNT_DISABLED ) || \
        (_Status) == STATUS_ACCOUNT_DISABLED || \
        (_Status) == HRESULT_FROM_NT( STATUS_ACCOUNT_DISABLED ) || \
        (_Status) == ERROR_ACCOUNT_RESTRICTION || \
        (_Status) == __HRESULT_FROM_WIN32( ERROR_ACCOUNT_RESTRICTION ) || \
        (_Status) == STATUS_ACCOUNT_RESTRICTION || \
        (_Status) == HRESULT_FROM_NT( STATUS_ACCOUNT_RESTRICTION ) || \
        (_Status) == ERROR_ACCOUNT_LOCKED_OUT || \
        (_Status) == __HRESULT_FROM_WIN32( ERROR_ACCOUNT_LOCKED_OUT ) || \
        (_Status) == STATUS_ACCOUNT_LOCKED_OUT || \
        (_Status) == HRESULT_FROM_NT( STATUS_ACCOUNT_LOCKED_OUT ) || \
        (_Status) == ERROR_ACCOUNT_EXPIRED || \
        (_Status) == __HRESULT_FROM_WIN32( ERROR_ACCOUNT_EXPIRED ) || \
        (_Status) == STATUS_ACCOUNT_EXPIRED || \
        (_Status) == HRESULT_FROM_NT( STATUS_ACCOUNT_EXPIRED ) || \
        (_Status) == ERROR_LOGON_TYPE_NOT_GRANTED || \
        (_Status) == __HRESULT_FROM_WIN32( ERROR_LOGON_TYPE_NOT_GRANTED ) || \
        (_Status) == STATUS_LOGON_TYPE_NOT_GRANTED || \
        (_Status) == HRESULT_FROM_NT( STATUS_LOGON_TYPE_NOT_GRANTED ) \
)
# 217 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/wincred.h"
#define CRED_MAX_STRING_LENGTH 256


#define CRED_MAX_USERNAME_LENGTH (256+1+256)


#define CRED_MAX_GENERIC_TARGET_NAME_LENGTH 32767



#define CRED_MAX_DOMAIN_TARGET_NAME_LENGTH (256+1+80)


#define CRED_MAX_TARGETNAME_NAMESPACE_LENGTH (256)


#define CRED_MAX_TARGETNAME_ATTRIBUTE_LENGTH (256)


#define CRED_MAX_VALUE_SIZE (256)


#define CRED_MAX_ATTRIBUTES 64

typedef struct _CREDENTIAL_ATTRIBUTEA {
    LPSTR Keyword;
    DWORD Flags;
    DWORD ValueSize;
    LPBYTE Value;
} CREDENTIAL_ATTRIBUTEA, *PCREDENTIAL_ATTRIBUTEA;

typedef struct _CREDENTIAL_ATTRIBUTEW {
#ifdef MIDL_PASS
    [string] wchar_t * Keyword;
#else
    LPWSTR Keyword;
#endif
    DWORD Flags;
#ifdef MIDL_PASS
    [range(0,CRED_MAX_VALUE_SIZE)]
#endif
    DWORD ValueSize;
#ifdef MIDL_PASS
    [size_is(ValueSize)]
#endif
    LPBYTE Value;
} CREDENTIAL_ATTRIBUTEW, *PCREDENTIAL_ATTRIBUTEW;

#ifdef UNICODE
typedef CREDENTIAL_ATTRIBUTEW CREDENTIAL_ATTRIBUTE;
typedef PCREDENTIAL_ATTRIBUTEW PCREDENTIAL_ATTRIBUTE;
#else
typedef CREDENTIAL_ATTRIBUTEA CREDENTIAL_ATTRIBUTE;
typedef PCREDENTIAL_ATTRIBUTEA PCREDENTIAL_ATTRIBUTE;
#endif




#define CRED_SESSION_WILDCARD_NAME_W L"*Session"
#define CRED_SESSION_WILDCARD_NAME_A "*Session"
#define CRED_UNIVERSAL_WILDCARD_W L'*'
#define CRED_UNIVERSAL_WILDCARD_A '*'
#define CRED_SESSION_WILDCARD_NAME_LENGTH (sizeof(CRED_SESSION_WILDCARD_NAME_A)-1)
#define CRED_TARGETNAME_DOMAIN_NAMESPACE_W L"Domain"
#define CRED_TARGETNAME_DOMAIN_NAMESPACE_A "Domain"
#define CRED_TARGETNAME_DOMAIN_NAMESPACE_LENGTH (sizeof(CRED_TARGETNAME_DOMAIN_NAMESPACE_A)-1)
#define CRED_UNIVERSAL_WILDCARD_W L'*'
#define CRED_UNIVERSAL_WILDCARD_A '*'
#define CRED_TARGETNAME_LEGACYGENERIC_NAMESPACE_W L"LegacyGeneric"
#define CRED_TARGETNAME_LEGACYGENERIC_NAMESPACE_A "LegacyGeneric"
#define CRED_TARGETNAME_LEGACYGENERIC_NAMESPACE_LENGTH (sizeof(CRED_TARGETNAME_LEGACYGENERIC_NAMESPACE_A)-1)
#define CRED_TARGETNAME_NAMESPACE_SEPERATOR_W L':'
#define CRED_TARGETNAME_NAMESPACE_SEPERATOR_A ':'
#define CRED_TARGETNAME_ATTRIBUTE_SEPERATOR_W L'='
#define CRED_TARGETNAME_ATTRIBUTE_SEPERATOR_A '='
#define CRED_TARGETNAME_DOMAIN_EXTENDED_USERNAME_SEPARATOR_W L'|'
#define CRED_TARGETNAME_DOMAIN_EXTENDED_USERNAME_SEPARATOR_A '|'
#define CRED_TARGETNAME_ATTRIBUTE_TARGET_W L"target"
#define CRED_TARGETNAME_ATTRIBUTE_TARGET_A "target"
#define CRED_TARGETNAME_ATTRIBUTE_TARGET_LENGTH (sizeof(CRED_TARGETNAME_ATTRIBUTE_TARGET_A)-1)
#define CRED_TARGETNAME_ATTRIBUTE_NAME_W L"name"
#define CRED_TARGETNAME_ATTRIBUTE_NAME_A "name"
#define CRED_TARGETNAME_ATTRIBUTE_NAME_LENGTH (sizeof(CRED_TARGETNAME_ATTRIBUTE_NAME_A)-1)
#define CRED_TARGETNAME_ATTRIBUTE_BATCH_W L"batch"
#define CRED_TARGETNAME_ATTRIBUTE_BATCH_A "batch"
#define CRED_TARGETNAME_ATTRIBUTE_BATCH_LENGTH (sizeof(CRED_TARGETNAME_ATTRIBUTE_BATCH_A)-1)
#define CRED_TARGETNAME_ATTRIBUTE_INTERACTIVE_W L"interactive"
#define CRED_TARGETNAME_ATTRIBUTE_INTERACTIVE_A "interactive"
#define CRED_TARGETNAME_ATTRIBUTE_INTERACTIVE_LENGTH (sizeof(CRED_TARGETNAME_ATTRIBUTE_INTERACTIVE_A)-1)
#define CRED_TARGETNAME_ATTRIBUTE_SERVICE_W L"service"
#define CRED_TARGETNAME_ATTRIBUTE_SERVICE_A "service"
#define CRED_TARGETNAME_ATTRIBUTE_SERVICE_LENGTH (sizeof(CRED_TARGETNAME_ATTRIBUTE_SERVICE_A)-1)
#define CRED_TARGETNAME_ATTRIBUTE_NETWORK_W L"network"
#define CRED_TARGETNAME_ATTRIBUTE_NETWORK_A "network"
#define CRED_TARGETNAME_ATTRIBUTE_NETWORK_LENGTH (sizeof(CRED_TARGETNAME_ATTRIBUTE_NETWORK_A)-1)
#define CRED_TARGETNAME_ATTRIBUTE_NETWORKCLEARTEXT_W L"networkcleartext"
#define CRED_TARGETNAME_ATTRIBUTE_NETWORKCLEARTEXT_A "networkcleartext"
#define CRED_TARGETNAME_ATTRIBUTE_NETWORKCLEARTEXT_LENGTH (sizeof(CRED_TARGETNAME_ATTRIBUTE_NETWORKCLEARTEXT_A)-1)
#define CRED_TARGETNAME_ATTRIBUTE_REMOTEINTERACTIVE_W L"remoteinteractive"
#define CRED_TARGETNAME_ATTRIBUTE_REMOTEINTERACTIVE_A "remoteinteractive"
#define CRED_TARGETNAME_ATTRIBUTE_REMOTEINTERACTIVE_LENGTH (sizeof(CRED_TARGETNAME_ATTRIBUTE_REMOTEINTERACTIVE_A)-1)
#define CRED_TARGETNAME_ATTRIBUTE_CACHEDINTERACTIVE_W L"cachedinteractive"
#define CRED_TARGETNAME_ATTRIBUTE_CACHEDINTERACTIVE_A "cachedinteractive"
#define CRED_TARGETNAME_ATTRIBUTE_CACHEDINTERACTIVE_LENGTH (sizeof(CRED_TARGETNAME_ATTRIBUTE_CACHEDINTERACTIVE_A)-1)

#ifdef UNICODE
#define CRED_SESSION_WILDCARD_NAME CRED_SESSION_WILDCARD_NAME_W
#define CRED_TARGETNAME_DOMAIN_NAMESPACE CRED_TARGETNAME_DOMAIN_NAMESPACE_W
#define CRED_UNIVERSAL_WILDCARD = CRED_UNIVERSAL_WILDCARD_W
#define CRED_TARGETNAME_NAMESPACE_SEPERATOR = CRED_TARGETNAME_NAMESPACE_SEPERATOR_W
#define CRED_TARGETNAME_ATTRIBUTE_SEPERATOR = CRED_TARGETNAME_ATTRIBUTE_SEPERATOR_W
#define CRED_TARGETNAME_ATTRIBUTE_NAME CRED_TARGETNAME_ATTRIBUTE_NAME_W
#define CRED_TARGETNAME_ATTRIBUTE_TARGET CRED_TARGETNAME_ATTRIBUTE_TARGET_W
#define CRED_TARGETNAME_ATTRIBUTE_BATCH CRED_TARGETNAME_ATTRIBUTE_BATCH_W
#define CRED_TARGETNAME_ATTRIBUTE_INTERACTIVE CRED_TARGETNAME_ATTRIBUTE_INTERACTIVE_W
#define CRED_TARGETNAME_ATTRIBUTE_SERVICE CRED_TARGETNAME_ATTRIBUTE_SERVICE_W
#define CRED_TARGETNAME_ATTRIBUTE_NETWORK CRED_TARGETNAME_ATTRIBUTE_NETWORK_W
#define CRED_TARGETNAME_ATTRIBUTE_NETWORKCLEARTEXT CRED_TARGETNAME_ATTRIBUTE_NETWORKCLEARTEXT_W
#define CRED_TARGETNAME_ATTRIBUTE_REMOTEINTERACTIVE CRED_TARGETNAME_ATTRIBUTE_REMOTEINTERACTIVE_W
#define CRED_TARGETNAME_ATTRIBUTE_CACHEDINTERACTIVE CRED_TARGETNAME_ATTRIBUTE_CACHEDINTERACTIVE_W

#else
#define CRED_SESSION_WILDCARD_NAME CRED_SESSION_WILDCARD_NAME_A
#define CRED_TARGETNAME_DOMAIN_NAMESPACE CRED_TARGETNAME_DOMAIN_NAMESPACE_A
#define CRED_UNIVERSAL_WILDCARD = CRED_UNIVERSAL_WILDCARD_A
#define CRED_TARGETNAME_NAMESPACE_SEPERATOR = CRED_TARGETNAME_NAMESPACE_SEPERATOR_A
#define CRED_TARGETNAME_ATTRIBUTE_SEPERATOR = CRED_TARGETNAME_ATTRIBUTE_SEPERATOR_A
#define CRED_TARGETNAME_ATTRIBUTE_NAME CRED_TARGETNAME_ATTRIBUTE_NAME_A
#define CRED_TARGETNAME_ATTRIBUTE_TARGET CRED_TARGETNAME_ATTRIBUTE_TARGET_A
#define CRED_TARGETNAME_ATTRIBUTE_BATCH CRED_TARGETNAME_ATTRIBUTE_BATCH_A
#define CRED_TARGETNAME_ATTRIBUTE_INTERACTIVE CRED_TARGETNAME_ATTRIBUTE_INTERACTIVE_A
#define CRED_TARGETNAME_ATTRIBUTE_SERVICE CRED_TARGETNAME_ATTRIBUTE_SERVICE_A
#define CRED_TARGETNAME_ATTRIBUTE_NETWORK CRED_TARGETNAME_ATTRIBUTE_NETWORK_A
#define CRED_TARGETNAME_ATTRIBUTE_NETWORKCLEARTEXT CRED_TARGETNAME_ATTRIBUTE_NETWORKCLEARTEXT_A
#define CRED_TARGETNAME_ATTRIBUTE_REMOTEINTERACTIVE CRED_TARGETNAME_ATTRIBUTE_REMOTEINTERACTIVE_A
#define CRED_TARGETNAME_ATTRIBUTE_CACHEDINTERACTIVE CRED_TARGETNAME_ATTRIBUTE_CACHEDINTERACTIVE_A
#endif





#define CRED_LOGON_TYPES_MASK 0xF000

#define CredAppendLogonTypeToFlags(Flags,LogonType) (Flags) |= ((LogonType) << 12)
#define CredGetLogonTypeFromFlags(Flags) ((SECURITY_LOGON_TYPE)(((Flags) & CRED_LOGON_TYPES_MASK) >> 12))
#define CredRemoveLogonTypeFromFlags(Flags) (Flags) &= ~CRED_LOGON_TYPES_MASK




#define CRED_FLAGS_PASSWORD_FOR_CERT 0x0001
#define CRED_FLAGS_PROMPT_NOW 0x0002
#define CRED_FLAGS_USERNAME_TARGET 0x0004
#define CRED_FLAGS_OWF_CRED_BLOB 0x0008
#define CRED_FLAGS_REQUIRE_CONFIRMATION 0x0010







#define CRED_FLAGS_WILDCARD_MATCH 0x0020
#define CRED_FLAGS_VALID_FLAGS 0xF03F






#define CRED_FLAGS_VALID_INPUT_FLAGS 0xF01F




#define CRED_TYPE_GENERIC 1
#define CRED_TYPE_DOMAIN_PASSWORD 2
#define CRED_TYPE_DOMAIN_CERTIFICATE 3
#define CRED_TYPE_DOMAIN_VISIBLE_PASSWORD 4
#define CRED_TYPE_GENERIC_CERTIFICATE 5
#define CRED_TYPE_DOMAIN_EXTENDED 6
#define CRED_TYPE_MAXIMUM 7
#define CRED_TYPE_MAXIMUM_EX (CRED_TYPE_MAXIMUM+1000)





#define CRED_MAX_CREDENTIAL_BLOB_SIZE (5*512)




#define CRED_PERSIST_NONE 0
#define CRED_PERSIST_SESSION 1
#define CRED_PERSIST_LOCAL_MACHINE 2
#define CRED_PERSIST_ENTERPRISE 3






typedef struct _CREDENTIALA {
    DWORD Flags;
    DWORD Type;
    LPSTR TargetName;
    LPSTR Comment;
    FILETIME LastWritten;
    DWORD CredentialBlobSize;
    __field_bcount(CredentialBlobSize) LPBYTE CredentialBlob;
    DWORD Persist;
    DWORD AttributeCount;
    PCREDENTIAL_ATTRIBUTEA Attributes;
    LPSTR TargetAlias;
    LPSTR UserName;
} CREDENTIALA, *PCREDENTIALA;

typedef struct _CREDENTIALW {
    DWORD Flags;
    DWORD Type;
#ifdef MIDL_PASS
    [string,max_is(CRED_MAX_GENERIC_TARGET_NAME_LENGTH-1)] wchar_t *TargetName;
#else
    LPWSTR TargetName;
#endif
#ifdef MIDL_PASS
    [string,max_is(CRED_MAX_STRING_LENGTH-1)] wchar_t *Comment;
#else
    LPWSTR Comment;
#endif
    FILETIME LastWritten;
#ifdef MIDL_PASS
    [range(0,CRED_MAX_CREDENTIAL_BLOB_SIZE)]
#endif
    DWORD CredentialBlobSize;
#ifdef MIDL_PASS
    [size_is(CredentialBlobSize)]
#endif
    LPBYTE CredentialBlob;
    DWORD Persist;
#ifdef MIDL_PASS
    [range(0,CRED_MAX_ATTRIBUTES)]
#endif
    DWORD AttributeCount;
#ifdef MIDL_PASS
    [size_is(AttributeCount)]
#endif
    PCREDENTIAL_ATTRIBUTEW Attributes;
#ifdef MIDL_PASS
    [string,max_is(CRED_MAX_STRING_LENGTH-1)] wchar_t *TargetAlias;
#else
    LPWSTR TargetAlias;
#endif
#ifdef MIDL_PASS
    [string,max_is(CRED_MAX_USERNAME_LENGTH-1)] wchar_t *UserName;
#else
    LPWSTR UserName;
#endif
} CREDENTIALW, *PCREDENTIALW;

#ifdef UNICODE
typedef CREDENTIALW CREDENTIAL;
typedef PCREDENTIALW PCREDENTIAL;
#else
typedef CREDENTIALA CREDENTIAL;
typedef PCREDENTIALA PCREDENTIAL;
#endif





#define CRED_TI_SERVER_FORMAT_UNKNOWN 0x0001
#define CRED_TI_DOMAIN_FORMAT_UNKNOWN 0x0002
#define CRED_TI_ONLY_PASSWORD_REQUIRED 0x0004
#define CRED_TI_USERNAME_TARGET 0x0008
#define CRED_TI_CREATE_EXPLICIT_CRED 0x0010
#define CRED_TI_WORKGROUP_MEMBER 0x0020
#define CRED_TI_VALID_FLAGS 0xF07F






typedef struct _CREDENTIAL_TARGET_INFORMATIONA {
    LPSTR TargetName;
    LPSTR NetbiosServerName;
    LPSTR DnsServerName;
    LPSTR NetbiosDomainName;
    LPSTR DnsDomainName;
    LPSTR DnsTreeName;
    LPSTR PackageName;
    ULONG Flags;
    DWORD CredTypeCount;
    LPDWORD CredTypes;
} CREDENTIAL_TARGET_INFORMATIONA, *PCREDENTIAL_TARGET_INFORMATIONA;

typedef struct _CREDENTIAL_TARGET_INFORMATIONW {
#ifdef MIDL_PASS
    [string,max_is(CRED_MAX_DOMAIN_TARGET_NAME_LENGTH-1)] wchar_t *TargetName;
    [string,max_is(CRED_MAX_DOMAIN_TARGET_NAME_LENGTH-1)] wchar_t *NetbiosServerName;
    [string,max_is(CRED_MAX_DOMAIN_TARGET_NAME_LENGTH-1)] wchar_t *DnsServerName;
    [string,max_is(CRED_MAX_DOMAIN_TARGET_NAME_LENGTH-1)] wchar_t *NetbiosDomainName;
    [string,max_is(CRED_MAX_DOMAIN_TARGET_NAME_LENGTH-1)] wchar_t *DnsDomainName;
    [string,max_is(CRED_MAX_DOMAIN_TARGET_NAME_LENGTH-1)] wchar_t *DnsTreeName;
    [string,max_is(CRED_MAX_STRING_LENGTH-1)] wchar_t *PackageName;
#else
    LPWSTR TargetName;
    LPWSTR NetbiosServerName;
    LPWSTR DnsServerName;
    LPWSTR NetbiosDomainName;
    LPWSTR DnsDomainName;
    LPWSTR DnsTreeName;
    LPWSTR PackageName;
#endif
    ULONG Flags;
#ifdef MIDL_PASS
    [range(0,CRED_TYPE_MAXIMUM_EX)]
#endif
    DWORD CredTypeCount;
#ifdef MIDL_PASS
    [size_is(CredTypeCount)]
#endif
    LPDWORD CredTypes;
} CREDENTIAL_TARGET_INFORMATIONW, *PCREDENTIAL_TARGET_INFORMATIONW;

#ifdef UNICODE
typedef CREDENTIAL_TARGET_INFORMATIONW CREDENTIAL_TARGET_INFORMATION;
typedef PCREDENTIAL_TARGET_INFORMATIONW PCREDENTIAL_TARGET_INFORMATION;
#else
typedef CREDENTIAL_TARGET_INFORMATIONA CREDENTIAL_TARGET_INFORMATION;
typedef PCREDENTIAL_TARGET_INFORMATIONA PCREDENTIAL_TARGET_INFORMATION;
#endif
# 562 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/wincred.h"
#define CERT_HASH_LENGTH 20

typedef struct _CERT_CREDENTIAL_INFO {
    ULONG cbSize;
    UCHAR rgbHashOfCert[CERT_HASH_LENGTH];
} CERT_CREDENTIAL_INFO, *PCERT_CREDENTIAL_INFO;
# 576 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/wincred.h"
typedef struct _USERNAME_TARGET_CREDENTIAL_INFO {
    LPWSTR UserName;
} USERNAME_TARGET_CREDENTIAL_INFO, *PUSERNAME_TARGET_CREDENTIAL_INFO;





typedef struct _BINARY_BLOB_CREDENTIAL_INFO {
    ULONG cbBlob;
    LPBYTE pbBlob;
} BINARY_BLOB_CREDENTIAL_INFO, *PBINARY_BLOB_CREDENTIAL_INFO;





typedef enum _CRED_MARSHAL_TYPE {
    CertCredential = 1,
    UsernameTargetCredential,
    BinaryBlobCredential,
    UsernameForPackedCredentials,
} CRED_MARSHAL_TYPE, *PCRED_MARSHAL_TYPE;





typedef enum _CRED_PROTECTION_TYPE {
    CredUnprotected,
    CredUserProtection,
    CredTrustedProtection
} CRED_PROTECTION_TYPE, *PCRED_PROTECTION_TYPE;




#define CRED_PACK_PROTECTED_CREDENTIALS 0x1
#define CRED_PACK_WOW_BUFFER 0x2
#define CRED_PACK_GENERIC_CREDENTIALS 0x4





#define _CREDUI_INFO_DEFINED 

typedef struct _CREDUI_INFOA
{
    DWORD cbSize;
    HWND hwndParent;
    PCSTR pszMessageText;
    PCSTR pszCaptionText;
    HBITMAP hbmBanner;
} CREDUI_INFOA, *PCREDUI_INFOA;

typedef struct _CREDUI_INFOW
{
    DWORD cbSize;
    HWND hwndParent;
    PCWSTR pszMessageText;
    PCWSTR pszCaptionText;
    HBITMAP hbmBanner;
} CREDUI_INFOW, *PCREDUI_INFOW;

#ifdef UNICODE
typedef CREDUI_INFOW CREDUI_INFO;
typedef PCREDUI_INFOW PCREDUI_INFO;
#else
typedef CREDUI_INFOA CREDUI_INFO;
typedef PCREDUI_INFOA PCREDUI_INFO;
#endif







#define CREDUI_MAX_MESSAGE_LENGTH 32767
#define CREDUI_MAX_CAPTION_LENGTH 128
#define CREDUI_MAX_GENERIC_TARGET_LENGTH CRED_MAX_GENERIC_TARGET_NAME_LENGTH
#define CREDUI_MAX_DOMAIN_TARGET_LENGTH CRED_MAX_DOMAIN_TARGET_NAME_LENGTH






#define CREDUI_MAX_USERNAME_LENGTH CRED_MAX_USERNAME_LENGTH
#define CREDUI_MAX_PASSWORD_LENGTH (512 / 2)






#define CREDUI_MAX_PACKED_CREDENTIALS_LENGTH ((MAXUSHORT / 2) - 2)



#define CREDUI_MAX_CREDENTIALS_BLOB_SIZE (MAXUSHORT)





#define CREDUI_FLAGS_INCORRECT_PASSWORD 0x00001
#define CREDUI_FLAGS_DO_NOT_PERSIST 0x00002
#define CREDUI_FLAGS_REQUEST_ADMINISTRATOR 0x00004
#define CREDUI_FLAGS_EXCLUDE_CERTIFICATES 0x00008
#define CREDUI_FLAGS_REQUIRE_CERTIFICATE 0x00010
#define CREDUI_FLAGS_SHOW_SAVE_CHECK_BOX 0x00040
#define CREDUI_FLAGS_ALWAYS_SHOW_UI 0x00080
#define CREDUI_FLAGS_REQUIRE_SMARTCARD 0x00100
#define CREDUI_FLAGS_PASSWORD_ONLY_OK 0x00200
#define CREDUI_FLAGS_VALIDATE_USERNAME 0x00400
#define CREDUI_FLAGS_COMPLETE_USERNAME 0x00800
#define CREDUI_FLAGS_PERSIST 0x01000
#define CREDUI_FLAGS_SERVER_CREDENTIAL 0x04000
#define CREDUI_FLAGS_EXPECT_CONFIRMATION 0x20000
#define CREDUI_FLAGS_GENERIC_CREDENTIALS 0x40000
#define CREDUI_FLAGS_USERNAME_TARGET_CREDENTIALS 0x80000
#define CREDUI_FLAGS_KEEP_USERNAME 0x100000





#define CREDUI_FLAGS_PROMPT_VALID ( \
        CREDUI_FLAGS_INCORRECT_PASSWORD | \
        CREDUI_FLAGS_DO_NOT_PERSIST | \
        CREDUI_FLAGS_REQUEST_ADMINISTRATOR | \
        CREDUI_FLAGS_EXCLUDE_CERTIFICATES | \
        CREDUI_FLAGS_REQUIRE_CERTIFICATE | \
        CREDUI_FLAGS_SHOW_SAVE_CHECK_BOX | \
        CREDUI_FLAGS_ALWAYS_SHOW_UI | \
        CREDUI_FLAGS_REQUIRE_SMARTCARD | \
        CREDUI_FLAGS_PASSWORD_ONLY_OK | \
        CREDUI_FLAGS_VALIDATE_USERNAME | \
        CREDUI_FLAGS_COMPLETE_USERNAME | \
        CREDUI_FLAGS_PERSIST | \
        CREDUI_FLAGS_SERVER_CREDENTIAL | \
        CREDUI_FLAGS_EXPECT_CONFIRMATION | \
        CREDUI_FLAGS_GENERIC_CREDENTIALS | \
        CREDUI_FLAGS_USERNAME_TARGET_CREDENTIALS | \
        CREDUI_FLAGS_KEEP_USERNAME )






#define CREDUIWIN_GENERIC 0x00000001
#define CREDUIWIN_CHECKBOX 0x00000002
#define CREDUIWIN_AUTHPACKAGE_ONLY 0x00000010
#define CREDUIWIN_IN_CRED_ONLY 0x00000020
#define CREDUIWIN_ENUMERATE_ADMINS 0x00000100
#define CREDUIWIN_ENUMERATE_CURRENT_USER 0x00000200
#define CREDUIWIN_SECURE_PROMPT 0x00001000
#define CREDUIWIN_PACK_32_WOW 0x10000000

#define CREDUIWIN_VALID_FLAGS ( \
        CREDUIWIN_GENERIC | \
        CREDUIWIN_CHECKBOX | \
        CREDUIWIN_AUTHPACKAGE_ONLY | \
        CREDUIWIN_IN_CRED_ONLY | \
        CREDUIWIN_ENUMERATE_ADMINS | \
        CREDUIWIN_ENUMERATE_CURRENT_USER | \
        CREDUIWIN_SECURE_PROMPT | \
        CREDUIWIN_PACK_32_WOW )
# 757 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/wincred.h"
#define CRED_PRESERVE_CREDENTIAL_BLOB 0x1

WINADVAPI
BOOL
WINAPI
CredWriteW (
    __in PCREDENTIALW Credential,
    __in DWORD Flags
    );

WINADVAPI
BOOL
WINAPI
CredWriteA (
    __in PCREDENTIALA Credential,
    __in DWORD Flags
    );

#ifdef UNICODE
#define CredWrite CredWriteW
#else
#define CredWrite CredWriteA
#endif


WINADVAPI
BOOL
WINAPI
CredReadW (
    __in LPCWSTR TargetName,
    __in DWORD Type,
    __reserved DWORD Flags,
    __out PCREDENTIALW *Credential
    );

WINADVAPI
BOOL
WINAPI
CredReadA (
    __in LPCSTR TargetName,
    __in DWORD Type,
    __reserved DWORD Flags,
    __out PCREDENTIALA *Credential
    );

#ifdef UNICODE
#define CredRead CredReadW
#else
#define CredRead CredReadA
#endif






#define CRED_ENUMERATE_ALL_CREDENTIALS 0x1

WINADVAPI
BOOL
WINAPI
CredEnumerateW (
    __in_opt LPCWSTR Filter,
    __reserved DWORD Flags,
    __out DWORD *Count,
    __deref_out_ecount(*Count) PCREDENTIALW **Credential
    );

WINADVAPI
BOOL
WINAPI
CredEnumerateA (
    __in_opt LPCSTR Filter,
    __reserved DWORD Flags,
    __out DWORD *Count,
    __deref_out_ecount(*Count) PCREDENTIALA **Credential
    );

#ifdef UNICODE
#define CredEnumerate CredEnumerateW
#else
#define CredEnumerate CredEnumerateA
#endif


WINADVAPI
BOOL
WINAPI
CredWriteDomainCredentialsW (
    __in PCREDENTIAL_TARGET_INFORMATIONW TargetInfo,
    __in PCREDENTIALW Credential,
    __in DWORD Flags
    );

WINADVAPI
BOOL
WINAPI
CredWriteDomainCredentialsA (
    __in PCREDENTIAL_TARGET_INFORMATIONA TargetInfo,
    __in PCREDENTIALA Credential,
    __in DWORD Flags
    );

#ifdef UNICODE
#define CredWriteDomainCredentials CredWriteDomainCredentialsW
#else
#define CredWriteDomainCredentials CredWriteDomainCredentialsA
#endif







#define CRED_CACHE_TARGET_INFORMATION 0x1


WINADVAPI
BOOL
WINAPI
CredReadDomainCredentialsW (
    __in PCREDENTIAL_TARGET_INFORMATIONW TargetInfo,
    __in DWORD Flags,
    __out DWORD *Count,
    __deref_out_ecount(*Count) PCREDENTIALW **Credential
    );

WINADVAPI
BOOL
WINAPI
CredReadDomainCredentialsA (
    __in PCREDENTIAL_TARGET_INFORMATIONA TargetInfo,
    __in DWORD Flags,
    __out DWORD *Count,
    __deref_out_ecount(*Count) PCREDENTIALA **Credential
    );

#ifdef UNICODE
#define CredReadDomainCredentials CredReadDomainCredentialsW
#else
#define CredReadDomainCredentials CredReadDomainCredentialsA
#endif


WINADVAPI
BOOL
WINAPI
CredDeleteW (
    __in LPCWSTR TargetName,
    __in DWORD Type,
    __reserved DWORD Flags
    );

WINADVAPI
BOOL
WINAPI
CredDeleteA (
    __in LPCSTR TargetName,
    __in DWORD Type,
    __reserved DWORD Flags
    );

#ifdef UNICODE
#define CredDelete CredDeleteW
#else
#define CredDelete CredDeleteA
#endif


WINADVAPI
BOOL
WINAPI
CredRenameW (
    __in LPCWSTR OldTargetName,
    __in LPCWSTR NewTargetName,
    __in DWORD Type,
    __reserved DWORD Flags
    );

WINADVAPI
BOOL
WINAPI
CredRenameA (
    __in LPCSTR OldTargetName,
    __in LPCSTR NewTargetName,
    __in DWORD Type,
    __reserved DWORD Flags
    );

#ifdef UNICODE
#define CredRename CredRenameW
#else
#define CredRename CredRenameA
#endif





#define CRED_ALLOW_NAME_RESOLUTION 0x1


WINADVAPI
BOOL
WINAPI
CredGetTargetInfoW (
    __in LPCWSTR TargetName,
    __in DWORD Flags,
    __out PCREDENTIAL_TARGET_INFORMATIONW *TargetInfo
    );

WINADVAPI
BOOL
WINAPI
CredGetTargetInfoA (
    __in LPCSTR TargetName,
    __in DWORD Flags,
    __out PCREDENTIAL_TARGET_INFORMATIONA *TargetInfo
    );

#ifdef UNICODE
#define CredGetTargetInfo CredGetTargetInfoW
#else
#define CredGetTargetInfo CredGetTargetInfoA
#endif

WINADVAPI
BOOL
WINAPI
CredMarshalCredentialW(
    __in CRED_MARSHAL_TYPE CredType,
    __in PVOID Credential,
    __out LPWSTR *MarshaledCredential
    );

WINADVAPI
BOOL
WINAPI
CredMarshalCredentialA(
    __in CRED_MARSHAL_TYPE CredType,
    __in PVOID Credential,
    __out LPSTR *MarshaledCredential
    );

#ifdef UNICODE
#define CredMarshalCredential CredMarshalCredentialW
#else
#define CredMarshalCredential CredMarshalCredentialA
#endif

WINADVAPI
BOOL
WINAPI
CredUnmarshalCredentialW(
    __in LPCWSTR MarshaledCredential,
    __out PCRED_MARSHAL_TYPE CredType,
    __out PVOID *Credential
    );

WINADVAPI
BOOL
WINAPI
CredUnmarshalCredentialA(
    __in LPCSTR MarshaledCredential,
    __out PCRED_MARSHAL_TYPE CredType,
    __out PVOID *Credential
    );

#ifdef UNICODE
#define CredUnmarshalCredential CredUnmarshalCredentialW
#else
#define CredUnmarshalCredential CredUnmarshalCredentialA
#endif

WINADVAPI
BOOL
WINAPI
CredIsMarshaledCredentialW(
    __in LPCWSTR MarshaledCredential
    );

WINADVAPI
BOOL
WINAPI
CredIsMarshaledCredentialA(
    __in LPCSTR MarshaledCredential
    );

#ifdef UNICODE
#define CredIsMarshaledCredential CredIsMarshaledCredentialW
#else
#define CredIsMarshaledCredential CredIsMarshaledCredentialA
#endif

CREDUIAPI
BOOL
WINAPI
CredUnPackAuthenticationBufferW(
    __in DWORD dwFlags,
    __in_bcount(cbAuthBuffer) PVOID pAuthBuffer,
    __in DWORD cbAuthBuffer,
    __out_ecount_opt(*pcchMaxUserName) LPWSTR pszUserName,
    __inout DWORD* pcchMaxUserName,
    __out_ecount_opt(*pcchMaxDomainName) LPWSTR pszDomainName,
    __inout_opt DWORD* pcchMaxDomainName,
    __out_ecount_opt(*pcchMaxPassword) LPWSTR pszPassword,
    __inout DWORD* pcchMaxPassword
    );

CREDUIAPI
BOOL
WINAPI
CredUnPackAuthenticationBufferA(
    __in DWORD dwFlags,
    __in_bcount(cbAuthBuffer) PVOID pAuthBuffer,
    __in DWORD cbAuthBuffer,
    __out_ecount_opt(*pcchMaxUserName) LPSTR pszUserName,
    __inout DWORD* pcchlMaxUserName,
    __out_ecount_opt(*pcchMaxDomainName) LPSTR pszDomainName,
    __inout_opt DWORD* pcchMaxDomainName,
    __out_ecount_opt(*pcchMaxPassword) LPSTR pszPassword,
    __inout DWORD* pcchMaxPassword
    );

#ifdef UNICODE
#define CredUnPackAuthenticationBuffer CredUnPackAuthenticationBufferW
#else
#define CredUnPackAuthenticationBuffer CredUnPackAuthenticationBufferA
#endif

CREDUIAPI
BOOL
WINAPI
CredPackAuthenticationBufferW(
    __in DWORD dwFlags,
    __in LPWSTR pszUserName,
    __in LPWSTR pszPassword,
    __out_bcount_opt(*pcbPackedCredentials) PBYTE pPackedCredentials,
    __inout DWORD* pcbPackedCredentials
    );

CREDUIAPI
BOOL
WINAPI
CredPackAuthenticationBufferA(
    __in DWORD dwFlags,
    __in LPSTR pszUserName,
    __in LPSTR pszPassword,
    __out_bcount_opt(*pcbPackedCredentials) PBYTE pPackedCredentials,
    __inout DWORD* pcbPackedCredentials
    );

#ifdef UNICODE
#define CredPackAuthenticationBuffer CredPackAuthenticationBufferW
#else
#define CredPackAuthenticationBuffer CredPackAuthenticationBufferA
#endif

WINADVAPI
BOOL
WINAPI
CredProtectW(
    __in BOOL fAsSelf,
    __in_ecount(cchCredentials) LPWSTR pszCredentials,
    __in DWORD cchCredentials,
    __out_ecount(*pcchMaxChars) LPWSTR pszProtectedCredentials,
    __inout DWORD* pcchMaxChars,
    __out_opt CRED_PROTECTION_TYPE* ProtectionType
    );

WINADVAPI
BOOL
WINAPI
CredProtectA(
    __in BOOL fAsSelf,
    __in_ecount(cchCredentials) LPSTR pszCredentials,
    __in DWORD cchCredentials,
    __out_ecount(*pcchMaxChars) LPSTR pszProtectedCredentials,
    __inout DWORD* pcchMaxChars,
    __out_opt CRED_PROTECTION_TYPE* ProtectionType
    );

#ifdef UNICODE
#define CredProtect CredProtectW
#else
#define CredProtect CredProtectA
#endif

WINADVAPI
BOOL
WINAPI
CredUnprotectW(
    __in BOOL fAsSelf,
    __in_ecount(cchProtectedCredentials) LPWSTR pszProtectedCredentials,
    __in DWORD cchProtectedCredentials,
    __out_ecount_opt(*pcchMaxChars) LPWSTR pszCredentials,
    __inout DWORD* pcchMaxChars
    );

WINADVAPI
BOOL
WINAPI
CredUnprotectA(
    __in BOOL fAsSelf,
    __in_ecount(cchProtectedCredentials) LPSTR pszProtectedCredentials,
    __in DWORD cchProtectedCredentials,
    __out_ecount_opt(*pcchMaxChars) LPSTR pszCredentials,
    __inout DWORD* pcchMaxChars
    );

#ifdef UNICODE
#define CredUnprotect CredUnprotectW
#else
#define CredUnprotect CredUnprotectA
#endif

WINADVAPI
BOOL
WINAPI
CredIsProtectedW(
    __in LPWSTR pszProtectedCredentials,
    __out CRED_PROTECTION_TYPE* pProtectionType
    );

WINADVAPI
BOOL
WINAPI
CredIsProtectedA(
    __in LPSTR pszProtectedCredentials,
    __out CRED_PROTECTION_TYPE* pProtectionType
    );

#ifdef UNICODE
#define CredIsProtected CredIsProtectedW
#else
#define CredIsProtected CredIsProtectedA
#endif



WINADVAPI
BOOL
WINAPI
CredFindBestCredentialW (
    IN LPCWSTR TargetName,
    IN DWORD Type,
    IN DWORD Flags,
    OUT PCREDENTIALW *Credential
    );

WINADVAPI
BOOL
WINAPI
CredFindBestCredentialA (
    IN LPCSTR TargetName,
    IN DWORD Type,
    IN DWORD Flags,
    OUT PCREDENTIALA *Credential
    );

#ifdef UNICODE
#define CredFindBestCredential CredFindBestCredentialW
#else
#define CredFindBestCredential CredFindBestCredentialA
#endif




WINADVAPI
BOOL
WINAPI
CredGetSessionTypes (
    __in DWORD MaximumPersistCount,
    __out LPDWORD MaximumPersist
    );


WINADVAPI
VOID
WINAPI
CredFree (
    __in PVOID Buffer
    );


CREDUIAPI
DWORD
WINAPI
CredUIPromptForCredentialsW(
    __in_opt PCREDUI_INFOW pUiInfo,
    __in_opt PCWSTR pszTargetName,
    __reserved PCtxtHandle pContext,
    __in DWORD dwAuthError,
    __inout_ecount(ulUserNameBufferSize) PWSTR pszUserName,
    __in ULONG ulUserNameBufferSize,
    __inout_ecount(ulPasswordBufferSize) PWSTR pszPassword,
    __in ULONG ulPasswordBufferSize,
    __inout_opt BOOL *save,
    __in DWORD dwFlags
    );

CREDUIAPI
DWORD
WINAPI
CredUIPromptForCredentialsA(
    __in_opt PCREDUI_INFOA pUiInfo,
    __in_opt PCSTR pszTargetName,
    __reserved PCtxtHandle pContext,
    __in DWORD dwAuthError,
    __inout_ecount(ulUserNameBufferSize) PSTR pszUserName,
    __in ULONG ulUserNameBufferSize,
    __inout_ecount(ulPasswordBufferSize) PSTR pszPassword,
    __in ULONG ulPasswordBufferSize,
    __inout_opt BOOL *save,
    __in DWORD dwFlags
    );

#ifdef UNICODE
#define CredUIPromptForCredentials CredUIPromptForCredentialsW
#else
#define CredUIPromptForCredentials CredUIPromptForCredentialsA
#endif

CREDUIAPI
DWORD
WINAPI
CredUIPromptForWindowsCredentialsW(
    __in_opt PCREDUI_INFOW pUiInfo,
    __in DWORD dwAuthError,
    __inout ULONG *pulAuthPackage,
    __in_bcount_opt(ulInAuthBufferSize) LPCVOID pvInAuthBuffer,
    __in ULONG ulInAuthBufferSize,
    __deref_out_bcount_full(*pulOutAuthBufferSize) LPVOID * ppvOutAuthBuffer,
    __out ULONG * pulOutAuthBufferSize,
    __inout_opt BOOL *pfSave,
    __in DWORD dwFlags
    );

CREDUIAPI
DWORD
WINAPI
CredUIPromptForWindowsCredentialsA(
    __in_opt PCREDUI_INFOA pUiInfo,
    __in DWORD dwAuthError,
    __inout ULONG *pulAuthPackage,
    __in_bcount_opt(ulInAuthBufferSize) LPCVOID pvInAuthBuffer,
    __in ULONG ulInAuthBufferSize,
    __deref_out_bcount_full(*pulOutAuthBufferSize) LPVOID * ppvOutAuthBuffer,
    __out ULONG * pulOutAuthBufferSize,
    __inout_opt BOOL *pfSave,
    __in DWORD dwFlags
    );

#ifdef UNICODE
#define CredUIPromptForWindowsCredentials CredUIPromptForWindowsCredentialsW
#else
#define CredUIPromptForWindowsCredentials CredUIPromptForWindowsCredentialsA
#endif


CREDUIAPI
DWORD
WINAPI
CredUIParseUserNameW(
    __in CONST WCHAR *UserName,
    __out_ecount(userBufferSize) WCHAR *user,
    __in ULONG userBufferSize,
    __out_ecount(domainBufferSize) WCHAR *domain,
    __in ULONG domainBufferSize
    );

CREDUIAPI
DWORD
WINAPI
CredUIParseUserNameA(
    __in CONST CHAR *userName,
    __out_ecount(userBufferSize) CHAR *user,
    __in ULONG userBufferSize,
    __out_ecount(domainBufferSize) CHAR *domain,
    __in ULONG domainBufferSize
    );

#ifdef UNICODE
#define CredUIParseUserName CredUIParseUserNameW
#else
#define CredUIParseUserName CredUIParseUserNameA
#endif



CREDUIAPI
DWORD
WINAPI
CredUICmdLinePromptForCredentialsW(
    __in_opt PCWSTR pszTargetName,
    __reserved PCtxtHandle pContext,
    __in DWORD dwAuthError,
    __inout_ecount(ulUserBufferSize) PWSTR UserName,
    __in ULONG ulUserBufferSize,
    __inout_ecount(ulPasswordBufferSize) PWSTR pszPassword,
    __in ULONG ulPasswordBufferSize,
    __inout_opt PBOOL pfSave,
    __in DWORD dwFlags
    );

CREDUIAPI
DWORD
WINAPI
CredUICmdLinePromptForCredentialsA(
    __in_opt PCSTR pszTargetName,
    __reserved PCtxtHandle pContext,
    __in DWORD dwAuthError,
    __inout_ecount(ulUserBufferSize) PSTR UserName,
    __in ULONG ulUserBufferSize,
    __inout_ecount(ulPasswordBufferSize) PSTR pszPassword,
    __in ULONG ulPasswordBufferSize,
    __inout_opt PBOOL pfSave,
    __in DWORD dwFlags
    );

#ifdef UNICODE
#define CredUICmdLinePromptForCredentials CredUICmdLinePromptForCredentialsW
#else
#define CredUICmdLinePromptForCredentials CredUICmdLinePromptForCredentialsA
#endif






CREDUIAPI
DWORD
WINAPI
CredUIConfirmCredentialsW(
    __in PCWSTR pszTargetName,
    __in BOOL bConfirm
    );

CREDUIAPI
DWORD
WINAPI
CredUIConfirmCredentialsA(
    __in PCSTR pszTargetName,
    __in BOOL bConfirm
    );

#ifdef UNICODE
#define CredUIConfirmCredentials CredUIConfirmCredentialsW
#else
#define CredUIConfirmCredentials CredUIConfirmCredentialsA
#endif


CREDUIAPI
DWORD
WINAPI
CredUIStoreSSOCredW (
    __in_opt PCWSTR pszRealm,
    __in PCWSTR pszUsername,
    __in PCWSTR pszPassword,
    __in BOOL bPersist
    );

CREDUIAPI
DWORD
WINAPI
CredUIReadSSOCredW (
    __in_opt PCWSTR pszRealm,
    __deref_out PWSTR* ppszUsername
    );

#ifdef __cplusplus
}
#endif

#endif
