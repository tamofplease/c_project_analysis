# 0 "project/mimikatz/inc/NTSecPKG.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/mimikatz/inc/NTSecPKG.h"
# 36 "project/mimikatz/inc/NTSecPKG.h"
typedef PVOID *PLSA_CLIENT_REQUEST;
# 45 "project/mimikatz/inc/NTSecPKG.h"
typedef enum _LSA_TOKEN_INFORMATION_TYPE {
    LsaTokenInformationNull,
    LsaTokenInformationV1,
    LsaTokenInformationV2
} LSA_TOKEN_INFORMATION_TYPE, *PLSA_TOKEN_INFORMATION_TYPE;
# 61 "project/mimikatz/inc/NTSecPKG.h"
typedef struct _LSA_TOKEN_INFORMATION_NULL {







    LARGE_INTEGER ExpirationTime;
# 81 "project/mimikatz/inc/NTSecPKG.h"
    PTOKEN_GROUPS Groups;

} LSA_TOKEN_INFORMATION_NULL, *PLSA_TOKEN_INFORMATION_NULL;
# 94 "project/mimikatz/inc/NTSecPKG.h"
typedef struct _LSA_TOKEN_INFORMATION_V1 {







    LARGE_INTEGER ExpirationTime;






    TOKEN_USER User;
# 121 "project/mimikatz/inc/NTSecPKG.h"
    PTOKEN_GROUPS Groups;
# 134 "project/mimikatz/inc/NTSecPKG.h"
    TOKEN_PRIMARY_GROUP PrimaryGroup;
# 151 "project/mimikatz/inc/NTSecPKG.h"
    PTOKEN_PRIVILEGES Privileges;
# 164 "project/mimikatz/inc/NTSecPKG.h"
    TOKEN_OWNER Owner;
# 176 "project/mimikatz/inc/NTSecPKG.h"
    TOKEN_DEFAULT_DACL DefaultDacl;

} LSA_TOKEN_INFORMATION_V1, *PLSA_TOKEN_INFORMATION_V1;
# 188 "project/mimikatz/inc/NTSecPKG.h"
typedef LSA_TOKEN_INFORMATION_V1 LSA_TOKEN_INFORMATION_V2, *PLSA_TOKEN_INFORMATION_V2;
# 199 "project/mimikatz/inc/NTSecPKG.h"
typedef NTSTATUS
(NTAPI LSA_CREATE_LOGON_SESSION) (
    IN PLUID LogonId
    );

typedef NTSTATUS
(NTAPI LSA_DELETE_LOGON_SESSION) (
    IN PLUID LogonId
    );

typedef NTSTATUS
(NTAPI LSA_ADD_CREDENTIAL) (
    IN PLUID LogonId,
    IN ULONG AuthenticationPackage,
    IN PLSA_STRING PrimaryKeyValue,
    IN PLSA_STRING Credentials
    );

typedef NTSTATUS
(NTAPI LSA_GET_CREDENTIALS) (
    IN PLUID LogonId,
    IN ULONG AuthenticationPackage,
    IN OUT PULONG QueryContext,
    IN BOOLEAN RetrieveAllCredentials,
    IN PLSA_STRING PrimaryKeyValue,
    OUT PULONG PrimaryKeyLength,
    IN PLSA_STRING Credentials
    );

typedef NTSTATUS
(NTAPI LSA_DELETE_CREDENTIAL) (
    IN PLUID LogonId,
    IN ULONG AuthenticationPackage,
    IN PLSA_STRING PrimaryKeyValue
    );

typedef PVOID
(NTAPI LSA_ALLOCATE_LSA_HEAP) (
    IN ULONG Length
    );

typedef VOID
(NTAPI LSA_FREE_LSA_HEAP) (
    IN PVOID Base
    );

typedef PVOID
(NTAPI LSA_ALLOCATE_PRIVATE_HEAP) (
    IN SIZE_T Length
    );

typedef VOID
(NTAPI LSA_FREE_PRIVATE_HEAP) (
    IN PVOID Base
    );

typedef NTSTATUS
(NTAPI LSA_ALLOCATE_CLIENT_BUFFER) (
    IN PLSA_CLIENT_REQUEST ClientRequest,
    IN ULONG LengthRequired,
    OUT PVOID *ClientBaseAddress
    );

typedef NTSTATUS
(NTAPI LSA_FREE_CLIENT_BUFFER) (
    IN PLSA_CLIENT_REQUEST ClientRequest,
    IN PVOID ClientBaseAddress
    );

typedef NTSTATUS
(NTAPI LSA_COPY_TO_CLIENT_BUFFER) (
    IN PLSA_CLIENT_REQUEST ClientRequest,
    IN ULONG Length,
    IN PVOID ClientBaseAddress,
    IN PVOID BufferToCopy
    );

typedef NTSTATUS
(NTAPI LSA_COPY_FROM_CLIENT_BUFFER) (
    IN PLSA_CLIENT_REQUEST ClientRequest,
    IN ULONG Length,
    IN PVOID BufferToCopy,
    IN PVOID ClientBaseAddress
    );

typedef LSA_CREATE_LOGON_SESSION * PLSA_CREATE_LOGON_SESSION;
typedef LSA_DELETE_LOGON_SESSION * PLSA_DELETE_LOGON_SESSION;
typedef LSA_ADD_CREDENTIAL * PLSA_ADD_CREDENTIAL;
typedef LSA_GET_CREDENTIALS * PLSA_GET_CREDENTIALS;
typedef LSA_DELETE_CREDENTIAL * PLSA_DELETE_CREDENTIAL;
typedef LSA_ALLOCATE_LSA_HEAP * PLSA_ALLOCATE_LSA_HEAP;
typedef LSA_FREE_LSA_HEAP * PLSA_FREE_LSA_HEAP;
typedef LSA_ALLOCATE_PRIVATE_HEAP * PLSA_ALLOCATE_PRIVATE_HEAP;
typedef LSA_FREE_PRIVATE_HEAP * PLSA_FREE_PRIVATE_HEAP;
typedef LSA_ALLOCATE_CLIENT_BUFFER * PLSA_ALLOCATE_CLIENT_BUFFER;
typedef LSA_FREE_CLIENT_BUFFER * PLSA_FREE_CLIENT_BUFFER;
typedef LSA_COPY_TO_CLIENT_BUFFER * PLSA_COPY_TO_CLIENT_BUFFER;
typedef LSA_COPY_FROM_CLIENT_BUFFER * PLSA_COPY_FROM_CLIENT_BUFFER;





typedef struct _LSA_DISPATCH_TABLE {
    PLSA_CREATE_LOGON_SESSION CreateLogonSession;
    PLSA_DELETE_LOGON_SESSION DeleteLogonSession;
    PLSA_ADD_CREDENTIAL AddCredential;
    PLSA_GET_CREDENTIALS GetCredentials;
    PLSA_DELETE_CREDENTIAL DeleteCredential;
    PLSA_ALLOCATE_LSA_HEAP AllocateLsaHeap;
    PLSA_FREE_LSA_HEAP FreeLsaHeap;
    PLSA_ALLOCATE_CLIENT_BUFFER AllocateClientBuffer;
    PLSA_FREE_CLIENT_BUFFER FreeClientBuffer;
    PLSA_COPY_TO_CLIENT_BUFFER CopyToClientBuffer;
    PLSA_COPY_FROM_CLIENT_BUFFER CopyFromClientBuffer;
} LSA_DISPATCH_TABLE, *PLSA_DISPATCH_TABLE;
# 347 "project/mimikatz/inc/NTSecPKG.h"
typedef NTSTATUS
(NTAPI LSA_AP_INITIALIZE_PACKAGE) (
    IN ULONG AuthenticationPackageId,
    IN PLSA_DISPATCH_TABLE LsaDispatchTable,
    IN PLSA_STRING Database OPTIONAL,
    IN PLSA_STRING Confidentiality OPTIONAL,
    OUT PLSA_STRING *AuthenticationPackageName
    );

typedef NTSTATUS
(NTAPI LSA_AP_LOGON_USER) (
    IN PLSA_CLIENT_REQUEST ClientRequest,
    IN SECURITY_LOGON_TYPE LogonType,
    IN PVOID AuthenticationInformation,
    IN PVOID ClientAuthenticationBase,
    IN ULONG AuthenticationInformationLength,
    OUT PVOID *ProfileBuffer,
    OUT PULONG ProfileBufferLength,
    OUT PLUID LogonId,
    OUT PNTSTATUS SubStatus,
    OUT PLSA_TOKEN_INFORMATION_TYPE TokenInformationType,
    OUT PVOID *TokenInformation,
    OUT PLSA_UNICODE_STRING *AccountName,
    OUT PLSA_UNICODE_STRING *AuthenticatingAuthority
    );

typedef NTSTATUS
(NTAPI LSA_AP_LOGON_USER_EX) (
    IN PLSA_CLIENT_REQUEST ClientRequest,
    IN SECURITY_LOGON_TYPE LogonType,
    IN PVOID AuthenticationInformation,
    IN PVOID ClientAuthenticationBase,
    IN ULONG AuthenticationInformationLength,
    OUT PVOID *ProfileBuffer,
    OUT PULONG ProfileBufferLength,
    OUT PLUID LogonId,
    OUT PNTSTATUS SubStatus,
    OUT PLSA_TOKEN_INFORMATION_TYPE TokenInformationType,
    OUT PVOID *TokenInformation,
    OUT PUNICODE_STRING *AccountName,
    OUT PUNICODE_STRING *AuthenticatingAuthority,
    OUT PUNICODE_STRING *MachineName
    );

typedef NTSTATUS
(NTAPI LSA_AP_CALL_PACKAGE) (
    IN PLSA_CLIENT_REQUEST ClientRequest,
    IN PVOID ProtocolSubmitBuffer,
    IN PVOID ClientBufferBase,
    IN ULONG SubmitBufferLength,
    OUT PVOID *ProtocolReturnBuffer,
    OUT PULONG ReturnBufferLength,
    OUT PNTSTATUS ProtocolStatus
    );

typedef NTSTATUS
(NTAPI LSA_AP_CALL_PACKAGE_PASSTHROUGH) (
    IN PLSA_CLIENT_REQUEST ClientRequest,
    IN PVOID ProtocolSubmitBuffer,
    IN PVOID ClientBufferBase,
    IN ULONG SubmitBufferLength,
    OUT PVOID *ProtocolReturnBuffer,
    OUT PULONG ReturnBufferLength,
    OUT PNTSTATUS ProtocolStatus
    );

typedef VOID
(NTAPI LSA_AP_LOGON_TERMINATED) (
    IN PLUID LogonId
    );

typedef LSA_AP_CALL_PACKAGE LSA_AP_CALL_PACKAGE_UNTRUSTED;

typedef LSA_AP_INITIALIZE_PACKAGE * PLSA_AP_INITIALIZE_PACKAGE;
typedef LSA_AP_LOGON_USER * PLSA_AP_LOGON_USER;
typedef LSA_AP_LOGON_USER_EX * PLSA_AP_LOGON_USER_EX;
typedef LSA_AP_CALL_PACKAGE * PLSA_AP_CALL_PACKAGE;
typedef LSA_AP_CALL_PACKAGE_PASSTHROUGH * PLSA_AP_CALL_PACKAGE_PASSTHROUGH;
typedef LSA_AP_LOGON_TERMINATED * PLSA_AP_LOGON_TERMINATED;
typedef LSA_AP_CALL_PACKAGE_UNTRUSTED * PLSA_AP_CALL_PACKAGE_UNTRUSTED;





typedef NTSTATUS (*PSAM_CREDENTIAL_UPDATE_NOTIFY_ROUTINE) (
    __in PUNICODE_STRING ClearPassword,
    __in_bcount(OldCredentialSize) PVOID OldCredentials,
    __in ULONG OldCredentialSize,
    __in ULONG UserAccountControl,
    __in_opt PUNICODE_STRING UPN,
    __in PUNICODE_STRING UserName,
    __in PUNICODE_STRING NetbiosDomainName,
    __in PUNICODE_STRING DnsDomainName,
    __deref_out_bcount(*NewCredentialSize) PVOID * NewCredentials,
    __out ULONG * NewCredentialSize
    );



typedef BOOLEAN (*PSAM_CREDENTIAL_UPDATE_REGISTER_ROUTINE) (
    __out PUNICODE_STRING CredentialName
    );



typedef VOID (*PSAM_CREDENTIAL_UPDATE_FREE_ROUTINE) (
    __in PVOID p
    );



typedef struct {
    PSTR Original;
    PSTR Mapped;
    BOOLEAN Continuable;
} SAM_REGISTER_MAPPING_ELEMENT, *PSAM_REGISTER_MAPPING_ELEMENT;

typedef struct {
                    ULONG Count;
    __ecount(Count) PSAM_REGISTER_MAPPING_ELEMENT Elements;
} SAM_REGISTER_MAPPING_LIST, *PSAM_REGISTER_MAPPING_LIST;

typedef struct {
                    ULONG Count;
    __ecount(Count) PSAM_REGISTER_MAPPING_LIST Lists;
} SAM_REGISTER_MAPPING_TABLE, *PSAM_REGISTER_MAPPING_TABLE;

typedef NTSTATUS (*PSAM_CREDENTIAL_UPDATE_REGISTER_MAPPED_ENTRYPOINTS_ROUTINE) (
    __out SAM_REGISTER_MAPPING_TABLE *Table
    );
# 491 "project/mimikatz/inc/NTSecPKG.h"
typedef LPTHREAD_START_ROUTINE SEC_THREAD_START;
typedef LPSECURITY_ATTRIBUTES SEC_ATTRS;
# 507 "project/mimikatz/inc/NTSecPKG.h"
typedef struct _SECPKG_CLIENT_INFO {
    LUID LogonId;
    ULONG ProcessID;
    ULONG ThreadID;
    BOOLEAN HasTcbPrivilege;
    BOOLEAN Impersonating;
    BOOLEAN Restricted;





    UCHAR ClientFlags;
    SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;





    HANDLE ClientToken;

} SECPKG_CLIENT_INFO, * PSECPKG_CLIENT_INFO;




typedef struct _SECPKG_CALL_INFO {
    ULONG ProcessId;
    ULONG ThreadId;
    ULONG Attributes;
    ULONG CallCount;
    PVOID MechOid;
} SECPKG_CALL_INFO, * PSECPKG_CALL_INFO;
# 559 "project/mimikatz/inc/NTSecPKG.h"
typedef struct _SECPKG_SUPPLEMENTAL_CRED {
    UNICODE_STRING PackageName;
    ULONG CredentialSize;



    PUCHAR Credentials;
} SECPKG_SUPPLEMENTAL_CRED, *PSECPKG_SUPPLEMENTAL_CRED;

typedef struct _SECPKG_BYTE_VECTOR
{
    ULONG ByteArrayOffset;
    USHORT ByteArrayLength;
} SECPKG_BYTE_VECTOR, *PSECPKG_BYTE_VECTOR;

typedef struct _SECPKG_SHORT_VECTOR
{
    ULONG ShortArrayOffset;
    USHORT ShortArrayCount;
} SECPKG_SHORT_VECTOR, *PSECPKG_SHORT_VECTOR;





typedef struct _SECPKG_SUPPLIED_CREDENTIAL {
    USHORT cbHeaderLength;
    USHORT cbStructureLength;
    SECPKG_SHORT_VECTOR UserName;
    SECPKG_SHORT_VECTOR DomainName;
    SECPKG_BYTE_VECTOR PackedCredentials;
    ULONG CredFlags;
} SECPKG_SUPPLIED_CREDENTIAL, *PSECPKG_SUPPLIED_CREDENTIAL;
# 605 "project/mimikatz/inc/NTSecPKG.h"
typedef struct _SECPKG_CREDENTIAL {
    ULONG64 Version;
    USHORT cbHeaderLength;
    ULONG cbStructureLength;

    ULONG ClientProcess;
    ULONG ClientThread;
    LUID LogonId;
    HANDLE ClientToken;
    ULONG SessionId;
    LUID ModifiedId;
    ULONG fCredentials;
    ULONG Flags;
    SECPKG_BYTE_VECTOR PrincipalName;
    SECPKG_BYTE_VECTOR PackageList;
    SECPKG_BYTE_VECTOR MarshaledSuppliedCreds;
} SECPKG_CREDENTIAL, *PSECPKG_CREDENTIAL;

typedef ULONG_PTR LSA_SEC_HANDLE;
typedef LSA_SEC_HANDLE * PLSA_SEC_HANDLE;
typedef struct _SECPKG_SUPPLEMENTAL_CRED_ARRAY {
    ULONG CredentialCount;



    SECPKG_SUPPLEMENTAL_CRED Credentials[1];

} SECPKG_SUPPLEMENTAL_CRED_ARRAY, *PSECPKG_SUPPLEMENTAL_CRED_ARRAY;
# 648 "project/mimikatz/inc/NTSecPKG.h"
typedef NTSTATUS
(NTAPI LSA_CALLBACK_FUNCTION)(
    ULONG_PTR Argument1,
    ULONG_PTR Argument2,
    PSecBuffer InputBuffer,
    PSecBuffer OutputBuffer
    );

typedef LSA_CALLBACK_FUNCTION * PLSA_CALLBACK_FUNCTION;
# 678 "project/mimikatz/inc/NTSecPKG.h"
typedef struct _SECPKG_PRIMARY_CRED {
    LUID LogonId;
    UNICODE_STRING DownlevelName;
    UNICODE_STRING DomainName;
    UNICODE_STRING Password;
    UNICODE_STRING OldPassword;
    PSID UserSid;
    ULONG Flags;
    UNICODE_STRING DnsDomainName;
    UNICODE_STRING Upn;

    UNICODE_STRING LogonServer;
    UNICODE_STRING Spare1;
    UNICODE_STRING Spare2;
    UNICODE_STRING Spare3;
    UNICODE_STRING Spare4;
} SECPKG_PRIMARY_CRED, *PSECPKG_PRIMARY_CRED;
# 710 "project/mimikatz/inc/NTSecPKG.h"
typedef struct _SECPKG_PARAMETERS {
    ULONG Version;
    ULONG MachineState;
    ULONG SetupMode;
    PSID DomainSid;
    UNICODE_STRING DomainName;
    UNICODE_STRING DnsDomainName;
    GUID DomainGuid;
} SECPKG_PARAMETERS, *PSECPKG_PARAMETERS;






typedef enum _SECPKG_EXTENDED_INFORMATION_CLASS {
    SecpkgGssInfo = 1,
    SecpkgContextThunks,
    SecpkgMutualAuthLevel,
    SecpkgWowClientDll,
    SecpkgExtraOids,
    SecpkgMaxInfo,
    SecpkgNego2Info,
} SECPKG_EXTENDED_INFORMATION_CLASS;

typedef struct _SECPKG_GSS_INFO {
    ULONG EncodedIdLength;
    UCHAR EncodedId[4];
} SECPKG_GSS_INFO, * PSECPKG_GSS_INFO;

typedef struct _SECPKG_CONTEXT_THUNKS {
    ULONG InfoLevelCount;
    ULONG Levels[1];
} SECPKG_CONTEXT_THUNKS, *PSECPKG_CONTEXT_THUNKS;

typedef struct _SECPKG_MUTUAL_AUTH_LEVEL {
    ULONG MutualAuthLevel;
} SECPKG_MUTUAL_AUTH_LEVEL, * PSECPKG_MUTUAL_AUTH_LEVEL;

typedef struct _SECPKG_WOW_CLIENT_DLL {
    SECURITY_STRING WowClientDllPath;
} SECPKG_WOW_CLIENT_DLL, * PSECPKG_WOW_CLIENT_DLL;



typedef struct _SECPKG_SERIALIZED_OID {
    ULONG OidLength;
    ULONG OidAttributes;
    UCHAR OidValue[ 32 ];
} SECPKG_SERIALIZED_OID, * PSECPKG_SERIALIZED_OID;

typedef struct _SECPKG_EXTRA_OIDS {
    ULONG OidCount;
    SECPKG_SERIALIZED_OID Oids[ 1 ];
} SECPKG_EXTRA_OIDS, * PSECPKG_EXTRA_OIDS;


typedef struct _SECPKG_NEGO2_INFO {
    UCHAR AuthScheme[16];
    ULONG PackageFlags;
} SECPKG_NEGO2_INFO, * PSECPKG_NEGO2_INFO;

typedef struct _SECPKG_EXTENDED_INFORMATION {
    SECPKG_EXTENDED_INFORMATION_CLASS Class;
    union {
        SECPKG_GSS_INFO GssInfo;
        SECPKG_CONTEXT_THUNKS ContextThunks;
        SECPKG_MUTUAL_AUTH_LEVEL MutualAuthLevel;
        SECPKG_WOW_CLIENT_DLL WowClientDll;
        SECPKG_EXTRA_OIDS ExtraOids;
        SECPKG_NEGO2_INFO Nego2Info;
    } Info;
} SECPKG_EXTENDED_INFORMATION, * PSECPKG_EXTENDED_INFORMATION;

typedef struct _SECPKG_TARGETINFO
{
    PSID DomainSid;
    PCWSTR ComputerName;
} SECPKG_TARGETINFO, *PSECPKG_TARGETINFO;



typedef struct _SecPkgContext_SaslContext {
    PVOID SaslContext;
} SecPkgContext_SaslContext, * PSecPkgContext_SaslContext;
# 807 "project/mimikatz/inc/NTSecPKG.h"
typedef struct _SECURITY_USER_DATA {
    SECURITY_STRING UserName;
    SECURITY_STRING LogonDomainName;
    SECURITY_STRING LogonServer;
    PSID pSid;
} SECURITY_USER_DATA, *PSECURITY_USER_DATA;

typedef SECURITY_USER_DATA SecurityUserData, * PSecurityUserData;
# 829 "project/mimikatz/inc/NTSecPKG.h"
typedef NTSTATUS
(NTAPI LSA_IMPERSONATE_CLIENT) (
    VOID
    );


typedef NTSTATUS
(NTAPI LSA_UNLOAD_PACKAGE)(
    VOID
    );

typedef NTSTATUS
(NTAPI LSA_DUPLICATE_HANDLE)(
    IN HANDLE SourceHandle,
    OUT PHANDLE DestionationHandle);


typedef NTSTATUS
(NTAPI LSA_SAVE_SUPPLEMENTAL_CREDENTIALS)(
    IN PLUID LogonId,
    IN ULONG SupplementalCredSize,
    IN PVOID SupplementalCreds,
    IN BOOLEAN Synchronous
    );


typedef HANDLE
(NTAPI LSA_CREATE_THREAD)(
    IN SEC_ATTRS SecurityAttributes,
    IN ULONG StackSize,
    IN SEC_THREAD_START StartFunction,
    IN PVOID ThreadParameter,
    IN ULONG CreationFlags,
    OUT PULONG ThreadId
    );


typedef NTSTATUS
(NTAPI LSA_GET_CLIENT_INFO)(
    OUT PSECPKG_CLIENT_INFO ClientInfo
    );


typedef HANDLE
(NTAPI LSA_REGISTER_NOTIFICATION)(
    IN SEC_THREAD_START StartFunction,
    IN PVOID Parameter,
    IN ULONG NotificationType,
    IN ULONG NotificationClass,
    IN ULONG NotificationFlags,
    IN ULONG IntervalMinutes,
    IN OPTIONAL HANDLE WaitEvent
    );


typedef NTSTATUS
(NTAPI LSA_CANCEL_NOTIFICATION)(
    IN HANDLE NotifyHandle
    );

typedef NTSTATUS
(NTAPI LSA_MAP_BUFFER)(
    IN PSecBuffer InputBuffer,
    OUT PSecBuffer OutputBuffer
    );

typedef NTSTATUS
(NTAPI LSA_CREATE_TOKEN) (
    IN PLUID LogonId,
    IN PTOKEN_SOURCE TokenSource,
    IN SECURITY_LOGON_TYPE LogonType,
    IN SECURITY_IMPERSONATION_LEVEL ImpersonationLevel,
    IN LSA_TOKEN_INFORMATION_TYPE TokenInformationType,
    IN PVOID TokenInformation,
    IN PTOKEN_GROUPS TokenGroups,
    IN PUNICODE_STRING AccountName,
    IN PUNICODE_STRING AuthorityName,
    IN PUNICODE_STRING Workstation,
    IN PUNICODE_STRING ProfilePath,
    OUT PHANDLE Token,
    OUT PNTSTATUS SubStatus
    );

typedef enum _SECPKG_SESSIONINFO_TYPE {
    SecSessionPrimaryCred
} SECPKG_SESSIONINFO_TYPE;

typedef NTSTATUS
(NTAPI LSA_CREATE_TOKEN_EX) (
    IN PLUID LogonId,
    IN PTOKEN_SOURCE TokenSource,
    IN SECURITY_LOGON_TYPE LogonType,
    IN SECURITY_IMPERSONATION_LEVEL ImpersonationLevel,
    IN LSA_TOKEN_INFORMATION_TYPE TokenInformationType,
    IN PVOID TokenInformation,
    IN PTOKEN_GROUPS TokenGroups,
    IN PUNICODE_STRING Workstation,
    IN PUNICODE_STRING ProfilePath,
    IN PVOID SessionInformation,
    IN SECPKG_SESSIONINFO_TYPE SessionInformationType,
    OUT PHANDLE Token,
    OUT PNTSTATUS SubStatus
    );

typedef VOID
(NTAPI LSA_AUDIT_LOGON) (
    IN NTSTATUS Status,
    IN NTSTATUS SubStatus,
    IN PUNICODE_STRING AccountName,
    IN PUNICODE_STRING AuthenticatingAuthority,
    IN PUNICODE_STRING WorkstationName,
    IN OPTIONAL PSID UserSid,
    IN SECURITY_LOGON_TYPE LogonType,
    IN PTOKEN_SOURCE TokenSource,
    IN PLUID LogonId
    );

typedef NTSTATUS
(NTAPI LSA_CALL_PACKAGE) (
    IN PUNICODE_STRING AuthenticationPackage,
    IN PVOID ProtocolSubmitBuffer,
    IN ULONG SubmitBufferLength,
    OUT PVOID *ProtocolReturnBuffer,
    OUT PULONG ReturnBufferLength,
    OUT PNTSTATUS ProtocolStatus
    );

typedef NTSTATUS
(NTAPI LSA_CALL_PACKAGEEX) (
    IN PUNICODE_STRING AuthenticationPackage,
    IN PVOID ClientBufferBase,
    IN PVOID ProtocolSubmitBuffer,
    IN ULONG SubmitBufferLength,
    OUT PVOID *ProtocolReturnBuffer,
    OUT PULONG ReturnBufferLength,
    OUT PNTSTATUS ProtocolStatus
    );

typedef NTSTATUS
(NTAPI LSA_CALL_PACKAGE_PASSTHROUGH) (
    IN PUNICODE_STRING AuthenticationPackage,
    IN PVOID ClientBufferBase,
    IN PVOID ProtocolSubmitBuffer,
    IN ULONG SubmitBufferLength,
    OUT PVOID *ProtocolReturnBuffer,
    OUT PULONG ReturnBufferLength,
    OUT PNTSTATUS ProtocolStatus
    );

typedef BOOLEAN
(NTAPI LSA_GET_CALL_INFO) (
    OUT PSECPKG_CALL_INFO Info
    );

typedef PVOID
(NTAPI LSA_CREATE_SHARED_MEMORY)(
    ULONG MaxSize,
    ULONG InitialSize
    );

typedef PVOID
(NTAPI LSA_ALLOCATE_SHARED_MEMORY)(
    PVOID SharedMem,
    ULONG Size
    );

typedef VOID
(NTAPI LSA_FREE_SHARED_MEMORY)(
    PVOID SharedMem,
    PVOID Memory
    );

typedef BOOLEAN
(NTAPI LSA_DELETE_SHARED_MEMORY)(
    PVOID SharedMem
    );





typedef enum _SECPKG_NAME_TYPE {
    SecNameSamCompatible,
    SecNameAlternateId,
    SecNameFlat,
    SecNameDN,
    SecNameSPN
} SECPKG_NAME_TYPE;

typedef NTSTATUS
(NTAPI LSA_OPEN_SAM_USER)(
    PSECURITY_STRING Name,
    SECPKG_NAME_TYPE NameType,
    PSECURITY_STRING Prefix,
    BOOLEAN AllowGuest,
    ULONG Reserved,
    PVOID * UserHandle
    );

typedef NTSTATUS
(NTAPI LSA_GET_USER_CREDENTIALS)(
    PVOID UserHandle,
    PVOID * PrimaryCreds,
    PULONG PrimaryCredsSize,
    PVOID * SupplementalCreds,
    PULONG SupplementalCredsSize
    );

typedef NTSTATUS
(NTAPI LSA_GET_USER_AUTH_DATA)(
    PVOID UserHandle,
    PUCHAR * UserAuthData,
    PULONG UserAuthDataSize
    );

typedef NTSTATUS
(NTAPI LSA_CLOSE_SAM_USER)(
    PVOID UserHandle
    );

typedef NTSTATUS
(NTAPI LSA_GET_AUTH_DATA_FOR_USER)(
    PSECURITY_STRING Name,
    SECPKG_NAME_TYPE NameType,
    PSECURITY_STRING Prefix,
    PUCHAR * UserAuthData,
    PULONG UserAuthDataSize,
    PUNICODE_STRING UserFlatName
    );

typedef NTSTATUS
(NTAPI LSA_CONVERT_AUTH_DATA_TO_TOKEN)(
    IN PVOID UserAuthData,
    IN ULONG UserAuthDataSize,
    IN SECURITY_IMPERSONATION_LEVEL ImpersonationLevel,
    IN PTOKEN_SOURCE TokenSource,
    IN SECURITY_LOGON_TYPE LogonType,
    IN PUNICODE_STRING AuthorityName,
    OUT PHANDLE Token,
    OUT PLUID LogonId,
    OUT PUNICODE_STRING AccountName,
    OUT PNTSTATUS SubStatus
    );

typedef NTSTATUS
(NTAPI LSA_CRACK_SINGLE_NAME)(
    IN ULONG FormatOffered,
    IN BOOLEAN PerformAtGC,
    IN PUNICODE_STRING NameInput,
    IN PUNICODE_STRING Prefix OPTIONAL,
    IN ULONG RequestedFormat,
    OUT PUNICODE_STRING CrackedName,
    OUT PUNICODE_STRING DnsDomainName,
    OUT PULONG SubStatus
    );

typedef NTSTATUS
(NTAPI LSA_AUDIT_ACCOUNT_LOGON)(
    IN ULONG AuditId,
    IN BOOLEAN Success,
    IN PUNICODE_STRING Source,
    IN PUNICODE_STRING ClientName,
    IN PUNICODE_STRING MappedName,
    IN NTSTATUS Status
    );


typedef NTSTATUS
(NTAPI LSA_CLIENT_CALLBACK)(
    __in PCHAR Callback,
    __in ULONG_PTR Argument1,
    __in ULONG_PTR Argument2,
    __in PSecBuffer Input,
    __out PSecBuffer Output
    );

typedef
NTSTATUS
(NTAPI LSA_REGISTER_CALLBACK)(
    ULONG CallbackId,
    PLSA_CALLBACK_FUNCTION Callback
    );
# 1127 "project/mimikatz/inc/NTSecPKG.h"
typedef struct _SECPKG_EVENT_PACKAGE_CHANGE {
    ULONG ChangeType;
    LSA_SEC_HANDLE PackageId;
    SECURITY_STRING PackageName;
} SECPKG_EVENT_PACKAGE_CHANGE, * PSECPKG_EVENT_PACKAGE_CHANGE;





typedef struct _SECPKG_EVENT_ROLE_CHANGE {
    ULONG PreviousRole;
    ULONG NewRole;
} SECPKG_EVENT_ROLE_CHANGE, * PSECPKG_EVENT_ROLE_CHANGE;

typedef struct _SECPKG_PARAMETERS SECPKG_EVENT_DOMAIN_CHANGE;
typedef struct _SECPKG_PARAMETERS * PSECPKG_EVENT_DOMAIN_CHANGE;


typedef struct _SECPKG_EVENT_NOTIFY {
    ULONG EventClass;
    ULONG Reserved;
    ULONG EventDataSize;
    PVOID EventData;
    PVOID PackageParameter;
} SECPKG_EVENT_NOTIFY, *PSECPKG_EVENT_NOTIFY;


typedef
NTSTATUS
(NTAPI LSA_UPDATE_PRIMARY_CREDENTIALS)(
    IN PSECPKG_PRIMARY_CRED PrimaryCredentials,
    IN OPTIONAL PSECPKG_SUPPLEMENTAL_CRED_ARRAY Credentials
    );

typedef
VOID
(NTAPI LSA_PROTECT_MEMORY)(
    IN PVOID Buffer,
    IN ULONG BufferSize
    );

typedef
NTSTATUS
(NTAPI LSA_OPEN_TOKEN_BY_LOGON_ID)(
    IN PLUID LogonId,
    OUT HANDLE *RetTokenHandle
    );

typedef
NTSTATUS
(NTAPI LSA_EXPAND_AUTH_DATA_FOR_DOMAIN)(
    IN PUCHAR UserAuthData,
    IN ULONG UserAuthDataSize,
    IN PVOID Reserved,
    OUT PUCHAR * ExpandedAuthData,
    OUT PULONG ExpandedAuthDataSize
    );

typedef LSA_IMPERSONATE_CLIENT * PLSA_IMPERSONATE_CLIENT;
typedef LSA_UNLOAD_PACKAGE * PLSA_UNLOAD_PACKAGE;
typedef LSA_DUPLICATE_HANDLE * PLSA_DUPLICATE_HANDLE;
typedef LSA_SAVE_SUPPLEMENTAL_CREDENTIALS * PLSA_SAVE_SUPPLEMENTAL_CREDENTIALS;
typedef LSA_CREATE_THREAD * PLSA_CREATE_THREAD;
typedef LSA_GET_CLIENT_INFO * PLSA_GET_CLIENT_INFO;
typedef LSA_REGISTER_NOTIFICATION * PLSA_REGISTER_NOTIFICATION;
typedef LSA_CANCEL_NOTIFICATION * PLSA_CANCEL_NOTIFICATION;
typedef LSA_MAP_BUFFER * PLSA_MAP_BUFFER;
typedef LSA_CREATE_TOKEN * PLSA_CREATE_TOKEN;
typedef LSA_AUDIT_LOGON * PLSA_AUDIT_LOGON;
typedef LSA_CALL_PACKAGE * PLSA_CALL_PACKAGE;
typedef LSA_CALL_PACKAGEEX * PLSA_CALL_PACKAGEEX;
typedef LSA_GET_CALL_INFO * PLSA_GET_CALL_INFO;
typedef LSA_CREATE_SHARED_MEMORY * PLSA_CREATE_SHARED_MEMORY;
typedef LSA_ALLOCATE_SHARED_MEMORY * PLSA_ALLOCATE_SHARED_MEMORY;
typedef LSA_FREE_SHARED_MEMORY * PLSA_FREE_SHARED_MEMORY;
typedef LSA_DELETE_SHARED_MEMORY * PLSA_DELETE_SHARED_MEMORY;
typedef LSA_OPEN_SAM_USER * PLSA_OPEN_SAM_USER;
typedef LSA_GET_USER_CREDENTIALS * PLSA_GET_USER_CREDENTIALS;
typedef LSA_GET_USER_AUTH_DATA * PLSA_GET_USER_AUTH_DATA;
typedef LSA_CLOSE_SAM_USER * PLSA_CLOSE_SAM_USER;
typedef LSA_CONVERT_AUTH_DATA_TO_TOKEN * PLSA_CONVERT_AUTH_DATA_TO_TOKEN;
typedef LSA_CLIENT_CALLBACK * PLSA_CLIENT_CALLBACK;
typedef LSA_REGISTER_CALLBACK * PLSA_REGISTER_CALLBACK;
typedef LSA_UPDATE_PRIMARY_CREDENTIALS * PLSA_UPDATE_PRIMARY_CREDENTIALS;
typedef LSA_GET_AUTH_DATA_FOR_USER * PLSA_GET_AUTH_DATA_FOR_USER;
typedef LSA_CRACK_SINGLE_NAME * PLSA_CRACK_SINGLE_NAME;
typedef LSA_AUDIT_ACCOUNT_LOGON * PLSA_AUDIT_ACCOUNT_LOGON;
typedef LSA_CALL_PACKAGE_PASSTHROUGH * PLSA_CALL_PACKAGE_PASSTHROUGH;
typedef LSA_PROTECT_MEMORY * PLSA_PROTECT_MEMORY;
typedef LSA_OPEN_TOKEN_BY_LOGON_ID * PLSA_OPEN_TOKEN_BY_LOGON_ID;
typedef LSA_EXPAND_AUTH_DATA_FOR_DOMAIN * PLSA_EXPAND_AUTH_DATA_FOR_DOMAIN;
typedef LSA_CREATE_TOKEN_EX * PLSA_CREATE_TOKEN_EX;
# 1352 "project/mimikatz/inc/NTSecPKG.h"
typedef struct _SEC_WINNT_AUTH_IDENTITY32 {
    ULONG User;
    ULONG UserLength;
    ULONG Domain;
    ULONG DomainLength;
    ULONG Password;
    ULONG PasswordLength;
    ULONG Flags;
} SEC_WINNT_AUTH_IDENTITY32, * PSEC_WINNT_AUTH_IDENTITY32;

typedef struct _SEC_WINNT_AUTH_IDENTITY_EX32 {
    ULONG Version;
    ULONG Length;
    ULONG User;
    ULONG UserLength;
    ULONG Domain;
    ULONG DomainLength;
    ULONG Password;
    ULONG PasswordLength;
    ULONG Flags;
    ULONG PackageList;
    ULONG PackageListLength;
} SEC_WINNT_AUTH_IDENTITY_EX32, * PSEC_WINNT_AUTH_IDENTITY_EX32;


typedef struct _LSA_SECPKG_FUNCTION_TABLE {
    PLSA_CREATE_LOGON_SESSION CreateLogonSession;
    PLSA_DELETE_LOGON_SESSION DeleteLogonSession;
    PLSA_ADD_CREDENTIAL AddCredential;
    PLSA_GET_CREDENTIALS GetCredentials;
    PLSA_DELETE_CREDENTIAL DeleteCredential;
    PLSA_ALLOCATE_LSA_HEAP AllocateLsaHeap;
    PLSA_FREE_LSA_HEAP FreeLsaHeap;
    PLSA_ALLOCATE_CLIENT_BUFFER AllocateClientBuffer;
    PLSA_FREE_CLIENT_BUFFER FreeClientBuffer;
    PLSA_COPY_TO_CLIENT_BUFFER CopyToClientBuffer;
    PLSA_COPY_FROM_CLIENT_BUFFER CopyFromClientBuffer;
    PLSA_IMPERSONATE_CLIENT ImpersonateClient;
    PLSA_UNLOAD_PACKAGE UnloadPackage;
    PLSA_DUPLICATE_HANDLE DuplicateHandle;
    PLSA_SAVE_SUPPLEMENTAL_CREDENTIALS SaveSupplementalCredentials;
    PLSA_CREATE_THREAD CreateThread;
    PLSA_GET_CLIENT_INFO GetClientInfo;
    PLSA_REGISTER_NOTIFICATION RegisterNotification;
    PLSA_CANCEL_NOTIFICATION CancelNotification;
    PLSA_MAP_BUFFER MapBuffer;
    PLSA_CREATE_TOKEN CreateToken;
    PLSA_AUDIT_LOGON AuditLogon;
    PLSA_CALL_PACKAGE CallPackage;
    PLSA_FREE_LSA_HEAP FreeReturnBuffer;
    PLSA_GET_CALL_INFO GetCallInfo;
    PLSA_CALL_PACKAGEEX CallPackageEx;
    PLSA_CREATE_SHARED_MEMORY CreateSharedMemory;
    PLSA_ALLOCATE_SHARED_MEMORY AllocateSharedMemory;
    PLSA_FREE_SHARED_MEMORY FreeSharedMemory;
    PLSA_DELETE_SHARED_MEMORY DeleteSharedMemory;
    PLSA_OPEN_SAM_USER OpenSamUser;
    PLSA_GET_USER_CREDENTIALS GetUserCredentials;
    PLSA_GET_USER_AUTH_DATA GetUserAuthData;
    PLSA_CLOSE_SAM_USER CloseSamUser;
    PLSA_CONVERT_AUTH_DATA_TO_TOKEN ConvertAuthDataToToken;
    PLSA_CLIENT_CALLBACK ClientCallback;
    PLSA_UPDATE_PRIMARY_CREDENTIALS UpdateCredentials;
    PLSA_GET_AUTH_DATA_FOR_USER GetAuthDataForUser;
    PLSA_CRACK_SINGLE_NAME CrackSingleName;
    PLSA_AUDIT_ACCOUNT_LOGON AuditAccountLogon;
    PLSA_CALL_PACKAGE_PASSTHROUGH CallPackagePassthrough;





    PLSA_PROTECT_MEMORY DummyFunction1;
    PLSA_PROTECT_MEMORY DummyFunction2;
    PLSA_PROTECT_MEMORY DummyFunction3;

    PLSA_PROTECT_MEMORY LsaProtectMemory;
    PLSA_PROTECT_MEMORY LsaUnprotectMemory;
    PLSA_OPEN_TOKEN_BY_LOGON_ID OpenTokenByLogonId;
    PLSA_EXPAND_AUTH_DATA_FOR_DOMAIN ExpandAuthDataForDomain;
    PLSA_ALLOCATE_PRIVATE_HEAP AllocatePrivateHeap;
    PLSA_FREE_PRIVATE_HEAP FreePrivateHeap;
    PLSA_CREATE_TOKEN_EX CreateTokenEx;




    PLSA_PROTECT_MEMORY DummyFunction4;
    PLSA_PROTECT_MEMORY DummyFunction5;

} LSA_SECPKG_FUNCTION_TABLE, *PLSA_SECPKG_FUNCTION_TABLE;


typedef
PVOID
(NTAPI LSA_LOCATE_PKG_BY_ID)(
    __in ULONG PackgeId
    );

typedef LSA_LOCATE_PKG_BY_ID * PLSA_LOCATE_PKG_BY_ID;

typedef struct _SECPKG_DLL_FUNCTIONS {
    PLSA_ALLOCATE_LSA_HEAP AllocateHeap;
    PLSA_FREE_LSA_HEAP FreeHeap;
    PLSA_REGISTER_CALLBACK RegisterCallback;
    PLSA_LOCATE_PKG_BY_ID LocatePackageById;
} SECPKG_DLL_FUNCTIONS, * PSECPKG_DLL_FUNCTIONS;







typedef NTSTATUS
(NTAPI SpInitializeFn)(
    IN ULONG_PTR PackageId,
    IN PSECPKG_PARAMETERS Parameters,
    IN PLSA_SECPKG_FUNCTION_TABLE FunctionTable
    );

typedef NTSTATUS
(NTAPI SpShutdownFn)(
    VOID
    );

typedef NTSTATUS
(NTAPI SpGetInfoFn)(
    OUT PSecPkgInfo PackageInfo
    );

typedef NTSTATUS
(NTAPI SpGetExtendedInformationFn)(
    IN SECPKG_EXTENDED_INFORMATION_CLASS Class,
    OUT PSECPKG_EXTENDED_INFORMATION * ppInformation
    );

typedef NTSTATUS
(NTAPI SpSetExtendedInformationFn)(
    IN SECPKG_EXTENDED_INFORMATION_CLASS Class,
    IN PSECPKG_EXTENDED_INFORMATION Info
    );

typedef NTSTATUS
(LSA_AP_LOGON_USER_EX2) (
    __in PLSA_CLIENT_REQUEST ClientRequest,
    __in SECURITY_LOGON_TYPE LogonType,
    __in_bcount(SubmitBufferSize) PVOID ProtocolSubmitBuffer,
    __in PVOID ClientBufferBase,
    __in ULONG SubmitBufferSize,
    __deref_out_bcount(*ProfileBufferSize) PVOID *ProfileBuffer,
    __out PULONG ProfileBufferSize,
    __out PLUID LogonId,
    __out PNTSTATUS SubStatus,
    __out PLSA_TOKEN_INFORMATION_TYPE TokenInformationType,
    __deref_out PVOID *TokenInformation,
    __out PUNICODE_STRING *AccountName,
    __out PUNICODE_STRING *AuthenticatingAuthority,
    __out PUNICODE_STRING *MachineName,
    __out PSECPKG_PRIMARY_CRED PrimaryCredentials,
    __deref_out PSECPKG_SUPPLEMENTAL_CRED_ARRAY * SupplementalCredentials
    );

typedef LSA_AP_LOGON_USER_EX2 *PLSA_AP_LOGON_USER_EX2;


typedef NTSTATUS
(NTAPI SpAcceptCredentialsFn)(
    IN SECURITY_LOGON_TYPE LogonType,
    IN PUNICODE_STRING AccountName,
    IN PSECPKG_PRIMARY_CRED PrimaryCredentials,
    IN PSECPKG_SUPPLEMENTAL_CRED SupplementalCredentials
    );


typedef NTSTATUS
(NTAPI SpAcquireCredentialsHandleFn)(
    IN OPTIONAL PUNICODE_STRING PrincipalName,
    IN ULONG CredentialUseFlags,
    IN OPTIONAL PLUID LogonId,
    IN PVOID AuthorizationData,
    IN PVOID GetKeyFunciton,
    IN PVOID GetKeyArgument,
    OUT PLSA_SEC_HANDLE CredentialHandle,
    OUT PTimeStamp ExpirationTime
    );

typedef NTSTATUS
(NTAPI SpFreeCredentialsHandleFn)(
    IN LSA_SEC_HANDLE CredentialHandle
    );

typedef NTSTATUS
(NTAPI SpQueryCredentialsAttributesFn)(
    IN LSA_SEC_HANDLE CredentialHandle,
    IN ULONG CredentialAttribute,
    IN OUT PVOID Buffer
    );

typedef NTSTATUS
(NTAPI SpSetCredentialsAttributesFn)(
    IN LSA_SEC_HANDLE CredentialHandle,
    IN ULONG CredentialAttribute,
    IN PVOID Buffer,
    IN ULONG BufferSize );

typedef NTSTATUS
(NTAPI SpAddCredentialsFn)(
    IN LSA_SEC_HANDLE CredentialHandle,
    IN OPTIONAL PUNICODE_STRING PrincipalName,
    IN PUNICODE_STRING Package,
    IN ULONG CredentialUseFlags,
    IN PVOID AuthorizationData,
    IN PVOID GetKeyFunciton,
    IN PVOID GetKeyArgument,
    OUT PTimeStamp ExpirationTime
    );

typedef NTSTATUS
(NTAPI SpSaveCredentialsFn)(
    IN LSA_SEC_HANDLE CredentialHandle,
    IN PSecBuffer Credentials);

typedef NTSTATUS
(NTAPI SpGetCredentialsFn)(
    IN LSA_SEC_HANDLE CredentialHandle,
    IN OUT PSecBuffer Credentials
    );

typedef NTSTATUS
(NTAPI SpDeleteCredentialsFn)(
    IN LSA_SEC_HANDLE CredentialHandle,
    IN PSecBuffer Key
    );

typedef NTSTATUS
(NTAPI SpInitLsaModeContextFn)(
    IN OPTIONAL LSA_SEC_HANDLE CredentialHandle,
    IN OPTIONAL LSA_SEC_HANDLE ContextHandle,
    IN OPTIONAL PUNICODE_STRING TargetName,
    IN ULONG ContextRequirements,
    IN ULONG TargetDataRep,
    IN PSecBufferDesc InputBuffers,
    OUT PLSA_SEC_HANDLE NewContextHandle,
    IN OUT PSecBufferDesc OutputBuffers,
    OUT PULONG ContextAttributes,
    OUT PTimeStamp ExpirationTime,
    OUT PBOOLEAN MappedContext,
    OUT PSecBuffer ContextData
    );




typedef NTSTATUS
(NTAPI SpDeleteContextFn)(
    IN LSA_SEC_HANDLE ContextHandle
    );

typedef NTSTATUS
(NTAPI SpApplyControlTokenFn)(
    IN LSA_SEC_HANDLE ContextHandle,
    IN PSecBufferDesc ControlToken);


typedef NTSTATUS
(NTAPI SpAcceptLsaModeContextFn)(
    IN OPTIONAL LSA_SEC_HANDLE CredentialHandle,
    IN OPTIONAL LSA_SEC_HANDLE ContextHandle,
    IN PSecBufferDesc InputBuffer,
    IN ULONG ContextRequirements,
    IN ULONG TargetDataRep,
    OUT PLSA_SEC_HANDLE NewContextHandle,
    OUT PSecBufferDesc OutputBuffer,
    OUT PULONG ContextAttributes,
    OUT PTimeStamp ExpirationTime,
    OUT PBOOLEAN MappedContext,
    OUT PSecBuffer ContextData
    );




typedef NTSTATUS
(NTAPI SpGetUserInfoFn)(
    IN PLUID LogonId,
    IN ULONG Flags,
    OUT PSecurityUserData * UserData
    );

typedef NTSTATUS
(NTAPI SpQueryContextAttributesFn)(
    IN LSA_SEC_HANDLE ContextHandle,
    IN ULONG ContextAttribute,
    IN OUT PVOID Buffer);

typedef NTSTATUS
(NTAPI SpSetContextAttributesFn)(
    IN LSA_SEC_HANDLE ContextHandle,
    IN ULONG ContextAttribute,
    IN PVOID Buffer,
    IN ULONG BufferSize );

typedef NTSTATUS
(NTAPI SpChangeAccountPasswordFn)(
    __in PUNICODE_STRING pDomainName,
    __in PUNICODE_STRING pAccountName,
    __in PUNICODE_STRING pOldPassword,
    __in PUNICODE_STRING pNewPassword,
    __in BOOLEAN Impersonating,
    __inout PSecBufferDesc pOutput
    );

typedef NTSTATUS
(NTAPI SpQueryMetaDataFn)(
    __in_opt LSA_SEC_HANDLE CredentialHandle,
    __in_opt PUNICODE_STRING TargetName,
    __in ULONG ContextRequirements,
    __out PULONG MetaDataLength,
    __deref_out_bcount(*MetaDataLength) PUCHAR* MetaData,
    __inout PLSA_SEC_HANDLE ContextHandle
    );

typedef NTSTATUS
(NTAPI SpExchangeMetaDataFn)(
    __in_opt LSA_SEC_HANDLE CredentialHandle,
    __in_opt PUNICODE_STRING TargetName,
    __in ULONG ContextRequirements,
    __in ULONG MetaDataLength,
    __in_bcount(MetaDataLength) PUCHAR MetaData,
    __inout PLSA_SEC_HANDLE ContextHandle
    );

typedef NTSTATUS
(NTAPI SpGetCredUIContextFn)(
   __in LSA_SEC_HANDLE ContextHandle,
   __in GUID* CredType,
   __out PULONG FlatCredUIContextLength,
   __deref_out_bcount(*FlatCredUIContextLength) PUCHAR* FlatCredUIContext
   );

typedef NTSTATUS
(NTAPI SpUpdateCredentialsFn)(
  __in LSA_SEC_HANDLE ContextHandle,
  __in GUID* CredType,
  __in ULONG FlatCredUIContextLength,
  __in_bcount(FlatCredUIContextLength) PUCHAR FlatCredUIContext
  );

typedef NTSTATUS
(NTAPI SpValidateTargetInfoFn) (
    __in_opt PLSA_CLIENT_REQUEST ClientRequest,
    __in_bcount(SubmitBufferLength) PVOID ProtocolSubmitBuffer,
    __in PVOID ClientBufferBase,
    __in ULONG SubmitBufferLength,
    __in PSECPKG_TARGETINFO TargetInfo
    );

typedef struct _SECPKG_FUNCTION_TABLE {
    PLSA_AP_INITIALIZE_PACKAGE InitializePackage;
    PLSA_AP_LOGON_USER LogonUser;
    PLSA_AP_CALL_PACKAGE CallPackage;
    PLSA_AP_LOGON_TERMINATED LogonTerminated;
    PLSA_AP_CALL_PACKAGE_UNTRUSTED CallPackageUntrusted;
    PLSA_AP_CALL_PACKAGE_PASSTHROUGH CallPackagePassthrough;
    PLSA_AP_LOGON_USER_EX LogonUserEx;
    PLSA_AP_LOGON_USER_EX2 LogonUserEx2;
    SpInitializeFn * Initialize;
    SpShutdownFn * Shutdown;
    SpGetInfoFn * GetInfo;
    SpAcceptCredentialsFn * AcceptCredentials;
    SpAcquireCredentialsHandleFn * AcquireCredentialsHandle;
    SpQueryCredentialsAttributesFn * QueryCredentialsAttributes;
    SpFreeCredentialsHandleFn * FreeCredentialsHandle;
    SpSaveCredentialsFn * SaveCredentials;
    SpGetCredentialsFn * GetCredentials;
    SpDeleteCredentialsFn * DeleteCredentials;
    SpInitLsaModeContextFn * InitLsaModeContext;
    SpAcceptLsaModeContextFn * AcceptLsaModeContext;
    SpDeleteContextFn * DeleteContext;
    SpApplyControlTokenFn * ApplyControlToken;
    SpGetUserInfoFn * GetUserInfo;
    SpGetExtendedInformationFn * GetExtendedInformation;
    SpQueryContextAttributesFn * QueryContextAttributes;
    SpAddCredentialsFn * AddCredentials;
    SpSetExtendedInformationFn * SetExtendedInformation;
    SpSetContextAttributesFn * SetContextAttributes;
    SpSetCredentialsAttributesFn * SetCredentialsAttributes;
    SpChangeAccountPasswordFn * ChangeAccountPassword;
    SpQueryMetaDataFn* QueryMetaData;
    SpExchangeMetaDataFn* ExchangeMetaData;
    SpGetCredUIContextFn* GetCredUIContext;
    SpUpdateCredentialsFn* UpdateCredentials;
    SpValidateTargetInfoFn* ValidateTargetInfo;
} SECPKG_FUNCTION_TABLE, *PSECPKG_FUNCTION_TABLE;






typedef NTSTATUS
(NTAPI SpInstanceInitFn)(
    IN ULONG Version,
    IN PSECPKG_DLL_FUNCTIONS FunctionTable,
    OUT PVOID * UserFunctions
    );

typedef NTSTATUS
(NTAPI SpInitUserModeContextFn)(
    IN LSA_SEC_HANDLE ContextHandle,
    IN PSecBuffer PackedContext
    );

typedef NTSTATUS
(NTAPI SpMakeSignatureFn)(
    IN LSA_SEC_HANDLE ContextHandle,
    IN ULONG QualityOfProtection,
    IN PSecBufferDesc MessageBuffers,
    IN ULONG MessageSequenceNumber
    );

typedef NTSTATUS
(NTAPI SpVerifySignatureFn)(
    IN LSA_SEC_HANDLE ContextHandle,
    IN PSecBufferDesc MessageBuffers,
    IN ULONG MessageSequenceNumber,
    OUT PULONG QualityOfProtection
    );

typedef NTSTATUS
(NTAPI SpSealMessageFn)(
    IN LSA_SEC_HANDLE ContextHandle,
    IN ULONG QualityOfProtection,
    IN PSecBufferDesc MessageBuffers,
    IN ULONG MessageSequenceNumber
    );

typedef NTSTATUS
(NTAPI SpUnsealMessageFn)(
    IN LSA_SEC_HANDLE ContextHandle,
    IN PSecBufferDesc MessageBuffers,
    IN ULONG MessageSequenceNumber,
    OUT PULONG QualityOfProtection
    );


typedef NTSTATUS
(NTAPI SpGetContextTokenFn)(
    IN LSA_SEC_HANDLE ContextHandle,
    OUT PHANDLE ImpersonationToken
    );


typedef NTSTATUS
(NTAPI SpExportSecurityContextFn)(
    LSA_SEC_HANDLE phContext,
    ULONG fFlags,
    PSecBuffer pPackedContext,
    PHANDLE pToken
    );

typedef NTSTATUS
(NTAPI SpImportSecurityContextFn)(
    PSecBuffer pPackedContext,
    HANDLE Token,
    PLSA_SEC_HANDLE phContext
    );


typedef NTSTATUS
(NTAPI SpCompleteAuthTokenFn)(
    IN LSA_SEC_HANDLE ContextHandle,
    IN PSecBufferDesc InputBuffer
    );


typedef NTSTATUS
(NTAPI SpFormatCredentialsFn)(
    IN PSecBuffer Credentials,
    OUT PSecBuffer FormattedCredentials
    );

typedef NTSTATUS
(NTAPI SpMarshallSupplementalCredsFn)(
    IN ULONG CredentialSize,
    IN PUCHAR Credentials,
    OUT PULONG MarshalledCredSize,
    OUT PVOID * MarshalledCreds);

typedef struct _SECPKG_USER_FUNCTION_TABLE {
    SpInstanceInitFn * InstanceInit;
    SpInitUserModeContextFn * InitUserModeContext;
    SpMakeSignatureFn * MakeSignature;
    SpVerifySignatureFn * VerifySignature;
    SpSealMessageFn * SealMessage;
    SpUnsealMessageFn * UnsealMessage;
    SpGetContextTokenFn * GetContextToken;
    SpQueryContextAttributesFn * QueryContextAttributes;
    SpCompleteAuthTokenFn * CompleteAuthToken;
    SpDeleteContextFn * DeleteUserModeContext;
    SpFormatCredentialsFn * FormatCredentials;
    SpMarshallSupplementalCredsFn * MarshallSupplementalCreds;
    SpExportSecurityContextFn * ExportContext;
    SpImportSecurityContextFn * ImportContext;
} SECPKG_USER_FUNCTION_TABLE, *PSECPKG_USER_FUNCTION_TABLE;


typedef NTSTATUS
(SEC_ENTRY * SpLsaModeInitializeFn)(
    IN ULONG LsaVersion,
    OUT PULONG PackageVersion,
    OUT PSECPKG_FUNCTION_TABLE * ppTables,
    OUT PULONG pcTables);

typedef NTSTATUS
(SEC_ENTRY * SpUserModeInitializeFn)(
    IN ULONG LsaVersion,
    OUT PULONG PackageVersion,
    OUT PSECPKG_USER_FUNCTION_TABLE *ppTables,
    OUT PULONG pcTables
    );
# 1908 "project/mimikatz/inc/NTSecPKG.h"
typedef enum _KSEC_CONTEXT_TYPE {
    KSecPaged,
    KSecNonPaged
} KSEC_CONTEXT_TYPE;

typedef struct _KSEC_LIST_ENTRY {
    LIST_ENTRY List;
    LONG RefCount;
    ULONG Signature;
    PVOID OwningList;
    PVOID Reserved;
} KSEC_LIST_ENTRY, * PKSEC_LIST_ENTRY;
# 1930 "project/mimikatz/inc/NTSecPKG.h"
typedef PVOID
(SEC_ENTRY KSEC_CREATE_CONTEXT_LIST)(
    IN KSEC_CONTEXT_TYPE Type
    );

typedef VOID
(SEC_ENTRY KSEC_INSERT_LIST_ENTRY)(
    IN PVOID List,
    IN PKSEC_LIST_ENTRY Entry
    );

typedef NTSTATUS
(SEC_ENTRY KSEC_REFERENCE_LIST_ENTRY)(
    IN PKSEC_LIST_ENTRY Entry,
    IN ULONG Signature,
    IN BOOLEAN RemoveNoRef
    );

typedef VOID
(SEC_ENTRY KSEC_DEREFERENCE_LIST_ENTRY)(
    IN PKSEC_LIST_ENTRY Entry,
    OUT BOOLEAN * Delete OPTIONAL
    );

typedef NTSTATUS
(SEC_ENTRY KSEC_SERIALIZE_WINNT_AUTH_DATA)(
    __in PVOID pvAuthData,
    __out PULONG Size,
    __deref_out PVOID * SerializedData );

typedef NTSTATUS
(SEC_ENTRY KSEC_SERIALIZE_SCHANNEL_AUTH_DATA)(
    __in PVOID pvAuthData,
    __out PULONG Size,
    __deref_out PVOID * SerializedData );



KSEC_CREATE_CONTEXT_LIST KSecCreateContextList;
KSEC_INSERT_LIST_ENTRY KSecInsertListEntry;
KSEC_REFERENCE_LIST_ENTRY KSecReferenceListEntry;
KSEC_DEREFERENCE_LIST_ENTRY KSecDereferenceListEntry;
KSEC_SERIALIZE_WINNT_AUTH_DATA KSecSerializeWinntAuthData;
KSEC_SERIALIZE_SCHANNEL_AUTH_DATA KSecSerializeSchannelAuthData;



typedef KSEC_CREATE_CONTEXT_LIST * PKSEC_CREATE_CONTEXT_LIST;
typedef KSEC_INSERT_LIST_ENTRY * PKSEC_INSERT_LIST_ENTRY;
typedef KSEC_REFERENCE_LIST_ENTRY * PKSEC_REFERENCE_LIST_ENTRY;
typedef KSEC_DEREFERENCE_LIST_ENTRY * PKSEC_DEREFERENCE_LIST_ENTRY;
typedef KSEC_SERIALIZE_WINNT_AUTH_DATA * PKSEC_SERIALIZE_WINNT_AUTH_DATA;
typedef KSEC_SERIALIZE_SCHANNEL_AUTH_DATA * PKSEC_SERIALIZE_SCHANNEL_AUTH_DATA;

typedef PVOID
(SEC_ENTRY KSEC_LOCATE_PKG_BY_ID)(
    __in ULONG PackageId
    );

typedef KSEC_LOCATE_PKG_BY_ID * PKSEC_LOCATE_PKG_BY_ID;



KSEC_LOCATE_PKG_BY_ID KSecLocatePackageById;



typedef struct _SECPKG_KERNEL_FUNCTIONS {
    PLSA_ALLOCATE_LSA_HEAP AllocateHeap;
    PLSA_FREE_LSA_HEAP FreeHeap;
    PKSEC_CREATE_CONTEXT_LIST CreateContextList;
    PKSEC_INSERT_LIST_ENTRY InsertListEntry;
    PKSEC_REFERENCE_LIST_ENTRY ReferenceListEntry;
    PKSEC_DEREFERENCE_LIST_ENTRY DereferenceListEntry;
    PKSEC_SERIALIZE_WINNT_AUTH_DATA SerializeWinntAuthData;
    PKSEC_SERIALIZE_SCHANNEL_AUTH_DATA SerializeSchannelAuthData;
    PKSEC_LOCATE_PKG_BY_ID LocatePackageById;
} SECPKG_KERNEL_FUNCTIONS, *PSECPKG_KERNEL_FUNCTIONS;

typedef NTSTATUS
(NTAPI KspInitPackageFn)(
    PSECPKG_KERNEL_FUNCTIONS FunctionTable
    );

typedef NTSTATUS
(NTAPI KspDeleteContextFn)(
    IN LSA_SEC_HANDLE ContextId,
    OUT PLSA_SEC_HANDLE LsaContextId
    );

typedef NTSTATUS
(NTAPI KspInitContextFn)(
    IN LSA_SEC_HANDLE ContextId,
    IN PSecBuffer ContextData,
    OUT PLSA_SEC_HANDLE NewContextId
    );

typedef NTSTATUS
(NTAPI KspMakeSignatureFn)(
    IN LSA_SEC_HANDLE ContextId,
    IN ULONG fQOP,
    IN OUT PSecBufferDesc Message,
    IN ULONG MessageSeqNo
    );

typedef NTSTATUS
(NTAPI KspVerifySignatureFn)(
    IN LSA_SEC_HANDLE ContextId,
    IN OUT PSecBufferDesc Message,
    IN ULONG MessageSeqNo,
    OUT PULONG pfQOP
    );


typedef NTSTATUS
(NTAPI KspSealMessageFn)(
    IN LSA_SEC_HANDLE ContextId,
    IN ULONG fQOP,
    IN OUT PSecBufferDesc Message,
    IN ULONG MessageSeqNo
    );

typedef NTSTATUS
(NTAPI KspUnsealMessageFn)(
    IN LSA_SEC_HANDLE ContextId,
    IN OUT PSecBufferDesc Message,
    IN ULONG MessageSeqNo,
    OUT PULONG pfQOP
    );

typedef NTSTATUS
(NTAPI KspGetTokenFn)(
    IN LSA_SEC_HANDLE ContextId,
    OUT PHANDLE ImpersonationToken,
    OUT OPTIONAL PACCESS_TOKEN * RawToken
    );

typedef NTSTATUS
(NTAPI KspQueryAttributesFn)(
    IN LSA_SEC_HANDLE ContextId,
    IN ULONG Attribute,
    IN OUT PVOID Buffer
    );

typedef NTSTATUS
(NTAPI KspCompleteTokenFn)(
    IN LSA_SEC_HANDLE ContextId,
    IN PSecBufferDesc Token
    );


typedef NTSTATUS
(NTAPI KspMapHandleFn)(
    IN LSA_SEC_HANDLE ContextId,
    OUT PLSA_SEC_HANDLE LsaContextId
    );

typedef NTSTATUS
(NTAPI KspSetPagingModeFn)(
    IN BOOLEAN PagingMode
    );

typedef NTSTATUS
(NTAPI KspSerializeAuthDataFn)(
    IN PVOID pvAuthData,
    OUT PULONG Size,
    OUT PVOID * SerializedData
    );

typedef struct _SECPKG_KERNEL_FUNCTION_TABLE {
    KspInitPackageFn * Initialize;
    KspDeleteContextFn * DeleteContext;
    KspInitContextFn * InitContext;
    KspMapHandleFn * MapHandle;
    KspMakeSignatureFn * Sign;
    KspVerifySignatureFn * Verify;
    KspSealMessageFn * Seal;
    KspUnsealMessageFn * Unseal;
    KspGetTokenFn * GetToken;
    KspQueryAttributesFn * QueryAttributes;
    KspCompleteTokenFn * CompleteToken;
    SpExportSecurityContextFn * ExportContext;
    SpImportSecurityContextFn * ImportContext;
    KspSetPagingModeFn * SetPackagePagingMode;
    KspSerializeAuthDataFn * SerializeAuthData;
} SECPKG_KERNEL_FUNCTION_TABLE, *PSECPKG_KERNEL_FUNCTION_TABLE;

SECURITY_STATUS
SEC_ENTRY
KSecRegisterSecurityProvider(
    __in PSECURITY_STRING ProviderName,
    __in PSECPKG_KERNEL_FUNCTION_TABLE Table
    );

extern SECPKG_KERNEL_FUNCTIONS KspKernelFunctions;
