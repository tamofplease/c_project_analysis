# 0 "project/mimikatz/inc/wincred.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/mimikatz/inc/wincred.h"
# 49 "project/mimikatz/inc/wincred.h"
typedef struct _SecHandle
{
    ULONG_PTR dwLower ;
    ULONG_PTR dwUpper ;
} SecHandle, * PSecHandle ;




typedef PSecHandle PCtxtHandle;
# 69 "project/mimikatz/inc/wincred.h"
typedef struct _FILETIME
    {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
    } FILETIME;

typedef struct _FILETIME *PFILETIME;

typedef struct _FILETIME *LPFILETIME;
# 86 "project/mimikatz/inc/wincred.h"
typedef LONG NTSTATUS, *PNTSTATUS;
# 241 "project/mimikatz/inc/wincred.h"
typedef struct _CREDENTIAL_ATTRIBUTEA {
    LPSTR Keyword;
    DWORD Flags;
    DWORD ValueSize;
    LPBYTE Value;
} CREDENTIAL_ATTRIBUTEA, *PCREDENTIAL_ATTRIBUTEA;

typedef struct _CREDENTIAL_ATTRIBUTEW {



    LPWSTR Keyword;

    DWORD Flags;



    DWORD ValueSize;



    LPBYTE Value;
} CREDENTIAL_ATTRIBUTEW, *PCREDENTIAL_ATTRIBUTEW;





typedef CREDENTIAL_ATTRIBUTEA CREDENTIAL_ATTRIBUTE;
typedef PCREDENTIAL_ATTRIBUTEA PCREDENTIAL_ATTRIBUTE;
# 422 "project/mimikatz/inc/wincred.h"
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



    LPWSTR TargetName;




    LPWSTR Comment;

    FILETIME LastWritten;



    DWORD CredentialBlobSize;



    LPBYTE CredentialBlob;
    DWORD Persist;



    DWORD AttributeCount;



    PCREDENTIAL_ATTRIBUTEW Attributes;



    LPWSTR TargetAlias;




    LPWSTR UserName;

} CREDENTIALW, *PCREDENTIALW;





typedef CREDENTIALA CREDENTIAL;
typedef PCREDENTIALA PCREDENTIAL;
# 505 "project/mimikatz/inc/wincred.h"
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
# 528 "project/mimikatz/inc/wincred.h"
    LPWSTR TargetName;
    LPWSTR NetbiosServerName;
    LPWSTR DnsServerName;
    LPWSTR NetbiosDomainName;
    LPWSTR DnsDomainName;
    LPWSTR DnsTreeName;
    LPWSTR PackageName;

    ULONG Flags;



    DWORD CredTypeCount;



    LPDWORD CredTypes;
} CREDENTIAL_TARGET_INFORMATIONW, *PCREDENTIAL_TARGET_INFORMATIONW;





typedef CREDENTIAL_TARGET_INFORMATIONA CREDENTIAL_TARGET_INFORMATION;
typedef PCREDENTIAL_TARGET_INFORMATIONA PCREDENTIAL_TARGET_INFORMATION;
# 564 "project/mimikatz/inc/wincred.h"
typedef struct _CERT_CREDENTIAL_INFO {
    ULONG cbSize;
    UCHAR rgbHashOfCert[20];
} CERT_CREDENTIAL_INFO, *PCERT_CREDENTIAL_INFO;
# 576 "project/mimikatz/inc/wincred.h"
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
# 623 "project/mimikatz/inc/wincred.h"
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





typedef CREDUI_INFOA CREDUI_INFO;
typedef PCREDUI_INFOA PCREDUI_INFO;
# 759 "project/mimikatz/inc/wincred.h"
DECLSPEC_IMPORT
BOOL
WINAPI
CredWriteW (
    __in PCREDENTIALW Credential,
    __in DWORD Flags
    );

DECLSPEC_IMPORT
BOOL
WINAPI
CredWriteA (
    __in PCREDENTIALA Credential,
    __in DWORD Flags
    );
# 782 "project/mimikatz/inc/wincred.h"
DECLSPEC_IMPORT
BOOL
WINAPI
CredReadW (
    __in LPCWSTR TargetName,
    __in DWORD Type,
    __reserved DWORD Flags,
    __out PCREDENTIALW *Credential
    );

DECLSPEC_IMPORT
BOOL
WINAPI
CredReadA (
    __in LPCSTR TargetName,
    __in DWORD Type,
    __reserved DWORD Flags,
    __out PCREDENTIALA *Credential
    );
# 815 "project/mimikatz/inc/wincred.h"
DECLSPEC_IMPORT
BOOL
WINAPI
CredEnumerateW (
    __in_opt LPCWSTR Filter,
    __reserved DWORD Flags,
    __out DWORD *Count,
    __deref_out_ecount(*Count) PCREDENTIALW **Credential
    );

DECLSPEC_IMPORT
BOOL
WINAPI
CredEnumerateA (
    __in_opt LPCSTR Filter,
    __reserved DWORD Flags,
    __out DWORD *Count,
    __deref_out_ecount(*Count) PCREDENTIALA **Credential
    );
# 842 "project/mimikatz/inc/wincred.h"
DECLSPEC_IMPORT
BOOL
WINAPI
CredWriteDomainCredentialsW (
    __in PCREDENTIAL_TARGET_INFORMATIONW TargetInfo,
    __in PCREDENTIALW Credential,
    __in DWORD Flags
    );

DECLSPEC_IMPORT
BOOL
WINAPI
CredWriteDomainCredentialsA (
    __in PCREDENTIAL_TARGET_INFORMATIONA TargetInfo,
    __in PCREDENTIALA Credential,
    __in DWORD Flags
    );
# 875 "project/mimikatz/inc/wincred.h"
DECLSPEC_IMPORT
BOOL
WINAPI
CredReadDomainCredentialsW (
    __in PCREDENTIAL_TARGET_INFORMATIONW TargetInfo,
    __in DWORD Flags,
    __out DWORD *Count,
    __deref_out_ecount(*Count) PCREDENTIALW **Credential
    );

DECLSPEC_IMPORT
BOOL
WINAPI
CredReadDomainCredentialsA (
    __in PCREDENTIAL_TARGET_INFORMATIONA TargetInfo,
    __in DWORD Flags,
    __out DWORD *Count,
    __deref_out_ecount(*Count) PCREDENTIALA **Credential
    );
# 902 "project/mimikatz/inc/wincred.h"
DECLSPEC_IMPORT
BOOL
WINAPI
CredDeleteW (
    __in LPCWSTR TargetName,
    __in DWORD Type,
    __reserved DWORD Flags
    );

DECLSPEC_IMPORT
BOOL
WINAPI
CredDeleteA (
    __in LPCSTR TargetName,
    __in DWORD Type,
    __reserved DWORD Flags
    );
# 927 "project/mimikatz/inc/wincred.h"
DECLSPEC_IMPORT
BOOL
WINAPI
CredRenameW (
    __in LPCWSTR OldTargetName,
    __in LPCWSTR NewTargetName,
    __in DWORD Type,
    __reserved DWORD Flags
    );

DECLSPEC_IMPORT
BOOL
WINAPI
CredRenameA (
    __in LPCSTR OldTargetName,
    __in LPCSTR NewTargetName,
    __in DWORD Type,
    __reserved DWORD Flags
    );
# 960 "project/mimikatz/inc/wincred.h"
DECLSPEC_IMPORT
BOOL
WINAPI
CredGetTargetInfoW (
    __in LPCWSTR TargetName,
    __in DWORD Flags,
    __out PCREDENTIAL_TARGET_INFORMATIONW *TargetInfo
    );

DECLSPEC_IMPORT
BOOL
WINAPI
CredGetTargetInfoA (
    __in LPCSTR TargetName,
    __in DWORD Flags,
    __out PCREDENTIAL_TARGET_INFORMATIONA *TargetInfo
    );







DECLSPEC_IMPORT
BOOL
WINAPI
CredMarshalCredentialW(
    __in CRED_MARSHAL_TYPE CredType,
    __in PVOID Credential,
    __out LPWSTR *MarshaledCredential
    );

DECLSPEC_IMPORT
BOOL
WINAPI
CredMarshalCredentialA(
    __in CRED_MARSHAL_TYPE CredType,
    __in PVOID Credential,
    __out LPSTR *MarshaledCredential
    );







DECLSPEC_IMPORT
BOOL
WINAPI
CredUnmarshalCredentialW(
    __in LPCWSTR MarshaledCredential,
    __out PCRED_MARSHAL_TYPE CredType,
    __out PVOID *Credential
    );

DECLSPEC_IMPORT
BOOL
WINAPI
CredUnmarshalCredentialA(
    __in LPCSTR MarshaledCredential,
    __out PCRED_MARSHAL_TYPE CredType,
    __out PVOID *Credential
    );







DECLSPEC_IMPORT
BOOL
WINAPI
CredIsMarshaledCredentialW(
    __in LPCWSTR MarshaledCredential
    );

DECLSPEC_IMPORT
BOOL
WINAPI
CredIsMarshaledCredentialA(
    __in LPCSTR MarshaledCredential
    );







EXTERN_C DECLSPEC_IMPORT
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

EXTERN_C DECLSPEC_IMPORT
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







EXTERN_C DECLSPEC_IMPORT
BOOL
WINAPI
CredPackAuthenticationBufferW(
    __in DWORD dwFlags,
    __in LPWSTR pszUserName,
    __in LPWSTR pszPassword,
    __out_bcount_opt(*pcbPackedCredentials) PBYTE pPackedCredentials,
    __inout DWORD* pcbPackedCredentials
    );

EXTERN_C DECLSPEC_IMPORT
BOOL
WINAPI
CredPackAuthenticationBufferA(
    __in DWORD dwFlags,
    __in LPSTR pszUserName,
    __in LPSTR pszPassword,
    __out_bcount_opt(*pcbPackedCredentials) PBYTE pPackedCredentials,
    __inout DWORD* pcbPackedCredentials
    );







DECLSPEC_IMPORT
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

DECLSPEC_IMPORT
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







DECLSPEC_IMPORT
BOOL
WINAPI
CredUnprotectW(
    __in BOOL fAsSelf,
    __in_ecount(cchProtectedCredentials) LPWSTR pszProtectedCredentials,
    __in DWORD cchProtectedCredentials,
    __out_ecount_opt(*pcchMaxChars) LPWSTR pszCredentials,
    __inout DWORD* pcchMaxChars
    );

DECLSPEC_IMPORT
BOOL
WINAPI
CredUnprotectA(
    __in BOOL fAsSelf,
    __in_ecount(cchProtectedCredentials) LPSTR pszProtectedCredentials,
    __in DWORD cchProtectedCredentials,
    __out_ecount_opt(*pcchMaxChars) LPSTR pszCredentials,
    __inout DWORD* pcchMaxChars
    );







DECLSPEC_IMPORT
BOOL
WINAPI
CredIsProtectedW(
    __in LPWSTR pszProtectedCredentials,
    __out CRED_PROTECTION_TYPE* pProtectionType
    );

DECLSPEC_IMPORT
BOOL
WINAPI
CredIsProtectedA(
    __in LPSTR pszProtectedCredentials,
    __out CRED_PROTECTION_TYPE* pProtectionType
    );
# 1198 "project/mimikatz/inc/wincred.h"
DECLSPEC_IMPORT
BOOL
WINAPI
CredFindBestCredentialW (
    IN LPCWSTR TargetName,
    IN DWORD Type,
    IN DWORD Flags,
    OUT PCREDENTIALW *Credential
    );

DECLSPEC_IMPORT
BOOL
WINAPI
CredFindBestCredentialA (
    IN LPCSTR TargetName,
    IN DWORD Type,
    IN DWORD Flags,
    OUT PCREDENTIALA *Credential
    );
# 1227 "project/mimikatz/inc/wincred.h"
DECLSPEC_IMPORT
BOOL
WINAPI
CredGetSessionTypes (
    __in DWORD MaximumPersistCount,
    __out LPDWORD MaximumPersist
    );


DECLSPEC_IMPORT
VOID
WINAPI
CredFree (
    __in PVOID Buffer
    );


EXTERN_C DECLSPEC_IMPORT
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

EXTERN_C DECLSPEC_IMPORT
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







EXTERN_C DECLSPEC_IMPORT
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

EXTERN_C DECLSPEC_IMPORT
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
# 1319 "project/mimikatz/inc/wincred.h"
EXTERN_C DECLSPEC_IMPORT
DWORD
WINAPI
CredUIParseUserNameW(
    __in CONST WCHAR *UserName,
    __out_ecount(userBufferSize) WCHAR *user,
    __in ULONG userBufferSize,
    __out_ecount(domainBufferSize) WCHAR *domain,
    __in ULONG domainBufferSize
    );

EXTERN_C DECLSPEC_IMPORT
DWORD
WINAPI
CredUIParseUserNameA(
    __in CONST CHAR *userName,
    __out_ecount(userBufferSize) CHAR *user,
    __in ULONG userBufferSize,
    __out_ecount(domainBufferSize) CHAR *domain,
    __in ULONG domainBufferSize
    );
# 1349 "project/mimikatz/inc/wincred.h"
EXTERN_C DECLSPEC_IMPORT
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

EXTERN_C DECLSPEC_IMPORT
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
# 1390 "project/mimikatz/inc/wincred.h"
EXTERN_C DECLSPEC_IMPORT
DWORD
WINAPI
CredUIConfirmCredentialsW(
    __in PCWSTR pszTargetName,
    __in BOOL bConfirm
    );

EXTERN_C DECLSPEC_IMPORT
DWORD
WINAPI
CredUIConfirmCredentialsA(
    __in PCSTR pszTargetName,
    __in BOOL bConfirm
    );
# 1413 "project/mimikatz/inc/wincred.h"
EXTERN_C DECLSPEC_IMPORT
DWORD
WINAPI
CredUIStoreSSOCredW (
    __in_opt PCWSTR pszRealm,
    __in PCWSTR pszUsername,
    __in PCWSTR pszPassword,
    __in BOOL bPersist
    );

EXTERN_C DECLSPEC_IMPORT
DWORD
WINAPI
CredUIReadSSOCredW (
    __in_opt PCWSTR pszRealm,
    __deref_out PWSTR* ppszUsername
    );
