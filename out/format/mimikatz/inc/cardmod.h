# 1 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/cardmod.h"
# 19 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/cardmod.h"
#ifndef __CARDMOD__H__
#define __CARDMOD__H__ 

#include <windows.h>
#include <wincrypt.h>
#pragma warning(push)
#pragma warning(disable:4201)


#include <winscard.h>
#pragma warning(pop)
#include <specstrings.h>
#include <bcrypt.h>
# 40 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/cardmod.h"
#define SCARD_PROVIDER_CARD_MODULE 0x80000001

typedef struct _CARD_DATA CARD_DATA, *PCARD_DATA;

typedef ULONG_PTR CARD_KEY_HANDLE, *PCARD_KEY_HANDLE;






#define CARD_DATA_VALUE_UNKNOWN ((DWORD) -1)
# 63 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/cardmod.h"
#define szBASE_CSP_DIR "mscp"

#define szINTERMEDIATE_CERTS_DIR "mscerts"
# 77 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/cardmod.h"
#define szCACHE_FILE "cardcf"

#define szCARD_IDENTIFIER_FILE "cardid"


#define szCONTAINER_MAP_FILE "cmapfile"
#define szROOT_STORE_FILE "msroots"
# 93 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/cardmod.h"
#define szUSER_SIGNATURE_CERT_PREFIX "ksc"
#define szUSER_KEYEXCHANGE_CERT_PREFIX "kxc"
#define szUSER_SIGNATURE_PRIVATE_KEY_PREFIX "kss"
#define szUSER_SIGNATURE_PUBLIC_KEY_PREFIX "ksp"
#define szUSER_KEYEXCHANGE_PRIVATE_KEY_PREFIX "kxs"
#define szUSER_KEYEXCHANGE_PUBLIC_KEY_PREFIX "kxp"




#define wszCARD_USER_EVERYONE L"anonymous"
#define wszCARD_USER_USER L"user"
#define wszCARD_USER_ADMIN L"admin"



#define AT_ECDSA_P256 3
#define AT_ECDSA_P384 4
#define AT_ECDSA_P521 5
#define AT_ECDHE_P256 6
#define AT_ECDHE_P384 7
#define AT_ECDHE_P521 8
# 123 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/cardmod.h"
#define CARD_CACHE_FILE_CURRENT_VERSION 1

typedef struct _CARD_CACHE_FILE_FORMAT
{
    BYTE bVersion;
    BYTE bPinsFreshness;

    WORD wContainersFreshness;
    WORD wFilesFreshness;
} CARD_CACHE_FILE_FORMAT, *PCARD_CACHE_FILE_FORMAT;
# 141 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/cardmod.h"
#define MAX_CONTAINER_NAME_LEN 39




#define CONTAINER_MAP_VALID_CONTAINER 1



#define CONTAINER_MAP_DEFAULT_CONTAINER 2

typedef struct _CONTAINER_MAP_RECORD
{
    WCHAR wszGuid [MAX_CONTAINER_NAME_LEN + 1];
    BYTE bFlags;
    BYTE bReserved;
    WORD wSigKeySizeBits;
    WORD wKeyExchangeKeySizeBits;
} CONTAINER_MAP_RECORD, *PCONTAINER_MAP_RECORD;




DWORD
WINAPI
I_CardConvertFileNameToAnsi(
    __in PCARD_DATA pCardData,
    __in LPWSTR wszUnicodeName,
    __out LPSTR *ppszAnsiName);


typedef enum
{
    InvalidDirAc = 0,


    UserCreateDeleteDirAc,


    AdminCreateDeleteDirAc

} CARD_DIRECTORY_ACCESS_CONDITION;


typedef enum
{


    InvalidAc = 0,





    EveryoneReadUserWriteAc,





    UserWriteExecuteAc,





    EveryoneReadAdminWriteAc,



    UnknownAc,






    UserReadWriteAc,





    AdminReadWriteAc
} CARD_FILE_ACCESS_CONDITION;







typedef DWORD (WINAPI *PFN_CARD_ACQUIRE_CONTEXT)(
    __inout PCARD_DATA pCardData,
    __in DWORD dwFlags);

DWORD
WINAPI
CardAcquireContext(
    __inout PCARD_DATA pCardData,
    __in DWORD dwFlags);






typedef DWORD (WINAPI *PFN_CARD_DELETE_CONTEXT)(
    __inout PCARD_DATA pCardData);

DWORD
WINAPI
CardDeleteContext(
    __inout PCARD_DATA pCardData);







#define CARD_CAPABILITIES_CURRENT_VERSION 1

typedef struct _CARD_CAPABILITIES
{
    DWORD dwVersion;
    BOOL fCertificateCompression;
    BOOL fKeyGen;
} CARD_CAPABILITIES, *PCARD_CAPABILITIES;

typedef DWORD (WINAPI *PFN_CARD_QUERY_CAPABILITIES)(
    __in PCARD_DATA pCardData,
    __inout PCARD_CAPABILITIES pCardCapabilities);

DWORD
WINAPI
CardQueryCapabilities(
    __in PCARD_DATA pCardData,
    __inout PCARD_CAPABILITIES pCardCapabilities);
# 291 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/cardmod.h"
typedef DWORD PIN_ID, *PPIN_ID;
typedef DWORD PIN_SET, *PPIN_SET;

#define MAX_PINS 8

#define ROLE_EVERYONE 0
#define ROLE_USER 1
#define ROLE_ADMIN 2

#define PIN_SET_NONE 0x00
#define PIN_SET_ALL_ROLES 0xFF
#define CREATE_PIN_SET(PinId) (1 << PinId)
#define SET_PIN(PinSet,PinId) PinSet |= CREATE_PIN_SET(PinId)
#define IS_PIN_SET(PinSet,PinId) (0 != (PinSet & CREATE_PIN_SET(PinId)))
#define CLEAR_PIN(PinSet,PinId) PinSet &= ~CREATE_PIN_SET(PinId)

#define PIN_CHANGE_FLAG_UNBLOCK 0x01
#define PIN_CHANGE_FLAG_CHANGEPIN 0x02

#define CP_CACHE_MODE_GLOBAL_CACHE 1
#define CP_CACHE_MODE_SESSION_ONLY 2
#define CP_CACHE_MODE_NO_CACHE 3

#define CARD_AUTHENTICATE_GENERATE_SESSION_PIN 0x10000000
#define CARD_AUTHENTICATE_SESSION_PIN 0x20000000

#define CARD_PIN_STRENGTH_PLAINTEXT 0x1
#define CARD_PIN_STRENGTH_SESSION_PIN 0x2

#define CARD_PIN_SILENT_CONTEXT 0x00000040

typedef enum
{
    AlphaNumericPinType = 0,
    ExternalPinType,
    ChallengeResponsePinType,
    EmptyPinType
} SECRET_TYPE;

typedef enum
{
    AuthenticationPin,
    DigitalSignaturePin,
    EncryptionPin,
    NonRepudiationPin,
    AdministratorPin,
    PrimaryCardPin,
    UnblockOnlyPin,
} SECRET_PURPOSE;

typedef enum
{
    PinCacheNormal = 0,
    PinCacheTimed,
    PinCacheNone,
    PinCacheAlwaysPrompt
} PIN_CACHE_POLICY_TYPE;

#define PIN_CACHE_POLICY_CURRENT_VERSION 6

typedef struct _PIN_CACHE_POLICY
{
    DWORD dwVersion;
    PIN_CACHE_POLICY_TYPE PinCachePolicyType;
    DWORD dwPinCachePolicyInfo;
} PIN_CACHE_POLICY, *PPIN_CACHE_POLICY;

#define PIN_INFO_CURRENT_VERSION 6

#define PIN_INFO_REQUIRE_SECURE_ENTRY 1

typedef struct _PIN_INFO
{
    DWORD dwVersion;
    SECRET_TYPE PinType;
    SECRET_PURPOSE PinPurpose;
    PIN_SET dwChangePermission;
    PIN_SET dwUnblockPermission;
    PIN_CACHE_POLICY PinCachePolicy;
    DWORD dwFlags;
} PIN_INFO, *PPIN_INFO;

typedef DWORD (WINAPI *PFN_CARD_GET_CHALLENGE_EX)(
    __in PCARD_DATA pCardData,
    __in PIN_ID PinId,
    __out_bcount(*pcbChallengeData) PBYTE *ppbChallengeData,
    __out PDWORD pcbChallengeData,
    __in DWORD dwFlags);

DWORD
WINAPI
CardGetChallengeEx(
    __in PCARD_DATA pCardData,
    __in PIN_ID PinId,
    __deref_out_bcount(*pcbChallengeData) PBYTE *ppbChallengeData,
    __out PDWORD pcbChallengeData,
    __in DWORD dwFlags);

typedef DWORD (WINAPI *PFN_CARD_AUTHENTICATE_EX)(
    __in PCARD_DATA pCardData,
    __in PIN_ID PinId,
    __in DWORD dwFlags,
    __in_bcount(cbPinData) PBYTE pbPinData,
    __in DWORD cbPinData,
    __deref_opt_out_bcount(*pcbSessionPin) PBYTE *ppbSessionPin,
    __out_opt PDWORD pcbSessionPin,
    __out_opt PDWORD pcAttemptsRemaining);

DWORD
WINAPI
CardAuthenticateEx(
    __in PCARD_DATA pCardData,
    __in PIN_ID PinId,
    __in DWORD dwFlags,
    __in_bcount(cbPinData) PBYTE pbPinData,
    __in DWORD cbPinData,
    __deref_opt_out_bcount(*pcbSessionPin) PBYTE *ppbSessionPin,
    __out_opt PDWORD pcbSessionPin,
    __out_opt PDWORD pcAttemptsRemaining);

typedef DWORD (WINAPI *PFN_CARD_CHANGE_AUTHENTICATOR_EX)(
    __in PCARD_DATA pCardData,
    __in DWORD dwFlags,
    __in PIN_ID dwAuthenticatingPinId,
    __in_bcount(cbAuthenticatingPinData) PBYTE pbAuthenticatingPinData,
    __in DWORD cbAuthenticatingPinData,
    __in PIN_ID dwTargetPinId,
    __in_bcount(cbTargetData) PBYTE pbTargetData,
    __in DWORD cbTargetData,
    __in DWORD cRetryCount,
    __out_opt PDWORD pcAttemptsRemaining);

DWORD
WINAPI
CardChangeAuthenticatorEx(
    __in PCARD_DATA pCardData,
    __in DWORD dwFlags,
    __in PIN_ID dwAuthenticatingPinId,
    __in_bcount(cbAuthenticatingPinData) PBYTE pbAuthenticatingPinData,
    __in DWORD cbAuthenticatingPinData,
    __in PIN_ID dwTargetPinId,
    __in_bcount(cbTargetData) PBYTE pbTargetData,
    __in DWORD cbTargetData,
    __in DWORD cRetryCount,
    __out_opt PDWORD pcAttemptsRemaining);

typedef DWORD (WINAPI *PFN_CARD_DEAUTHENTICATE_EX)(
    __in PCARD_DATA pCardData,
    __in PIN_SET PinId,
    __in DWORD dwFlags);

DWORD
WINAPI
CardDeauthenticateEx(
    __in PCARD_DATA pCardData,
    __in PIN_SET PinId,
    __in DWORD dwFlags);






typedef DWORD (WINAPI *PFN_CARD_DELETE_CONTAINER)(
    __in PCARD_DATA pCardData,
    __in BYTE bContainerIndex,
    __in DWORD dwReserved);

DWORD
WINAPI
CardDeleteContainer(
    __in PCARD_DATA pCardData,
    __in BYTE bContainerIndex,
    __in DWORD dwReserved);





#define CARD_CREATE_CONTAINER_KEY_GEN 1
#define CARD_CREATE_CONTAINER_KEY_IMPORT 2

typedef DWORD (WINAPI *PFN_CARD_CREATE_CONTAINER)(
    __in PCARD_DATA pCardData,
    __in BYTE bContainerIndex,
    __in DWORD dwFlags,
    __in DWORD dwKeySpec,
    __in DWORD dwKeySize,
    __in PBYTE pbKeyData);

DWORD
WINAPI
CardCreateContainer(
    __in PCARD_DATA pCardData,
    __in BYTE bContainerIndex,
    __in DWORD dwFlags,
    __in DWORD dwKeySpec,
    __in DWORD dwKeySize,
    __in PBYTE pbKeyData);





typedef DWORD (WINAPI *PFN_CARD_CREATE_CONTAINER_EX)(
    __in PCARD_DATA pCardData,
    __in BYTE bContainerIndex,
    __in DWORD dwFlags,
    __in DWORD dwKeySpec,
    __in DWORD dwKeySize,
    __in PBYTE pbKeyData,
    __in PIN_ID PinId);

DWORD
WINAPI
CardCreateContainerEx(
    __in PCARD_DATA pCardData,
    __in BYTE bContainerIndex,
    __in DWORD dwFlags,
    __in DWORD dwKeySpec,
    __in DWORD dwKeySize,
    __in PBYTE pbKeyData,
    __in PIN_ID PinId);
# 539 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/cardmod.h"
#define CONTAINER_INFO_CURRENT_VERSION 1

typedef struct _CONTAINER_INFO
{
    DWORD dwVersion;
    DWORD dwReserved;

    DWORD cbSigPublicKey;
    PBYTE pbSigPublicKey;

    DWORD cbKeyExPublicKey;
    PBYTE pbKeyExPublicKey;
} CONTAINER_INFO, *PCONTAINER_INFO;

typedef DWORD (WINAPI *PFN_CARD_GET_CONTAINER_INFO)(
    __in PCARD_DATA pCardData,
    __in BYTE bContainerIndex,
    __in DWORD dwFlags,
    __inout PCONTAINER_INFO pContainerInfo);

DWORD
WINAPI
CardGetContainerInfo(
    __in PCARD_DATA pCardData,
    __in BYTE bContainerIndex,
    __in DWORD dwFlags,
    __inout PCONTAINER_INFO pContainerInfo);




typedef DWORD (WINAPI *PFN_CARD_AUTHENTICATE_PIN)(
    __in PCARD_DATA pCardData,
    __in LPWSTR pwszUserId,
    __in_bcount(cbPin) PBYTE pbPin,
    __in DWORD cbPin,
    __out_opt PDWORD pcAttemptsRemaining);


DWORD
WINAPI
CardAuthenticatePin(
    __in PCARD_DATA pCardData,
    __in LPWSTR pwszUserId,
    __in_bcount(cbPin) PBYTE pbPin,
    __in DWORD cbPin,
    __out_opt PDWORD pcAttemptsRemaining);




typedef DWORD (WINAPI *PFN_CARD_GET_CHALLENGE)(
    __in PCARD_DATA pCardData,
    __deref_out_bcount(*pcbChallengeData) PBYTE *ppbChallengeData,
    __out PDWORD pcbChallengeData);

DWORD
WINAPI
CardGetChallenge(
    __in PCARD_DATA pCardData,
    __deref_out_bcount(*pcbChallengeData) PBYTE *ppbChallengeData,
    __out PDWORD pcbChallengeData);




typedef DWORD (WINAPI *PFN_CARD_AUTHENTICATE_CHALLENGE)(
    __in PCARD_DATA pCardData,
    __in_bcount(cbResponseData) PBYTE pbResponseData,
    __in DWORD cbResponseData,
    __out_opt PDWORD pcAttemptsRemaining);

DWORD
WINAPI
CardAuthenticateChallenge(
    __in PCARD_DATA pCardData,
    __in_bcount(cbResponseData) PBYTE pbResponseData,
    __in DWORD cbResponseData,
    __out_opt PDWORD pcAttemptsRemaining);




#define CARD_AUTHENTICATE_PIN_CHALLENGE_RESPONSE 1
#define CARD_AUTHENTICATE_PIN_PIN 2

typedef DWORD (WINAPI *PFN_CARD_UNBLOCK_PIN)(
    __in PCARD_DATA pCardData,
    __in LPWSTR pwszUserId,
    __in_bcount(cbAuthenticationData) PBYTE pbAuthenticationData,
    __in DWORD cbAuthenticationData,
    __in_bcount(cbNewPinData) PBYTE pbNewPinData,
    __in DWORD cbNewPinData,
    __in DWORD cRetryCount,
    __in DWORD dwFlags);

DWORD
WINAPI
CardUnblockPin(
    __in PCARD_DATA pCardData,
    __in LPWSTR pwszUserId,
    __in_bcount(cbAuthenticationData) PBYTE pbAuthenticationData,
    __in DWORD cbAuthenticationData,
    __in_bcount(cbNewPinData) PBYTE pbNewPinData,
    __in DWORD cbNewPinData,
    __in DWORD cRetryCount,
    __in DWORD dwFlags);




typedef DWORD (WINAPI *PFN_CARD_CHANGE_AUTHENTICATOR)(
    __in PCARD_DATA pCardData,
    __in LPWSTR pwszUserId,
    __in_bcount(cbCurrentAuthenticator) PBYTE pbCurrentAuthenticator,
    __in DWORD cbCurrentAuthenticator,
    __in_bcount(cbNewAuthenticator) PBYTE pbNewAuthenticator,
    __in DWORD cbNewAuthenticator,
    __in DWORD cRetryCount,
    __in DWORD dwFlags,
    __out_opt PDWORD pcAttemptsRemaining);

DWORD
WINAPI
CardChangeAuthenticator(
    __in PCARD_DATA pCardData,
    __in LPWSTR pwszUserId,
    __in_bcount(cbCurrentAuthenticator) PBYTE pbCurrentAuthenticator,
    __in DWORD cbCurrentAuthenticator,
    __in_bcount(cbNewAuthenticator) PBYTE pbNewAuthenticator,
    __in DWORD cbNewAuthenticator,
    __in DWORD cRetryCount,
    __in DWORD dwFlags,
    __out_opt PDWORD pcAttemptsRemaining);
# 692 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/cardmod.h"
typedef DWORD (WINAPI *PFN_CARD_DEAUTHENTICATE)(
    __in PCARD_DATA pCardData,
    __in LPWSTR pwszUserId,
    __in DWORD dwFlags);

DWORD
WINAPI
CardDeauthenticate(
    __in PCARD_DATA pCardData,
    __in LPWSTR pwszUserId,
    __in DWORD dwFlags);
# 715 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/cardmod.h"
typedef DWORD (WINAPI *PFN_CARD_CREATE_DIRECTORY)(
    __in PCARD_DATA pCardData,
    __in LPSTR pszDirectoryName,
    __in CARD_DIRECTORY_ACCESS_CONDITION AccessCondition);

DWORD
WINAPI
CardCreateDirectory(
    __in PCARD_DATA pCardData,
    __in LPSTR pszDirectoryName,
    __in CARD_DIRECTORY_ACCESS_CONDITION AccessCondition);
# 736 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/cardmod.h"
typedef DWORD (WINAPI *PFN_CARD_DELETE_DIRECTORY)(
    __in PCARD_DATA pCardData,
    __in LPSTR pszDirectoryName);

DWORD
WINAPI
CardDeleteDirectory(
    __in PCARD_DATA pCardData,
    __in LPSTR pszDirectoryName);






typedef DWORD (WINAPI *PFN_CARD_CREATE_FILE)(
    __in PCARD_DATA pCardData,
    __in_opt LPSTR pszDirectoryName,
    __in LPSTR pszFileName,
    __in DWORD cbInitialCreationSize,
    __in CARD_FILE_ACCESS_CONDITION AccessCondition);

DWORD
WINAPI
CardCreateFile(
    __in PCARD_DATA pCardData,
    __in_opt LPSTR pszDirectoryName,
    __in LPSTR pszFileName,
    __in DWORD cbInitialCreationSize,
    __in CARD_FILE_ACCESS_CONDITION AccessCondition);
# 776 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/cardmod.h"
typedef DWORD (WINAPI *PFN_CARD_READ_FILE)(
    __in PCARD_DATA pCardData,
    __in_opt LPSTR pszDirectoryName,
    __in LPSTR pszFileName,
    __in DWORD dwFlags,
    __deref_out_bcount_opt(*pcbData) PBYTE *ppbData,
    __out PDWORD pcbData);

DWORD
WINAPI
CardReadFile(
    __in PCARD_DATA pCardData,
    __in_opt LPSTR pszDirectoryName,
    __in LPSTR pszFileName,
    __in DWORD dwFlags,
    __deref_out_bcount_opt(*pcbData) PBYTE *ppbData,
    __out PDWORD pcbData);




typedef DWORD (WINAPI *PFN_CARD_WRITE_FILE)(
    __in PCARD_DATA pCardData,
    __in_opt LPSTR pszDirectoryName,
    __in LPSTR pszFileName,
    __in DWORD dwFlags,
    __in_bcount(cbData) PBYTE pbData,
    __in DWORD cbData);

DWORD
WINAPI
CardWriteFile(
    __in PCARD_DATA pCardData,
    __in_opt LPSTR pszDirectoryName,
    __in LPSTR pszFileName,
    __in DWORD dwFlags,
    __in_bcount(cbData) PBYTE pbData,
    __in DWORD cbData);




typedef DWORD (WINAPI *PFN_CARD_DELETE_FILE)(
    __in PCARD_DATA pCardData,
    __in_opt LPSTR pszDirectoryName,
    __in LPSTR pszFileName,
    __in DWORD dwFlags);

DWORD
WINAPI
CardDeleteFile(
    __in PCARD_DATA pCardData,
    __in_opt LPSTR pszDirectoryName,
    __in LPSTR pszFileName,
    __in DWORD dwFlags);
# 851 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/cardmod.h"
typedef DWORD (WINAPI *PFN_CARD_ENUM_FILES)(
    __in PCARD_DATA pCardData,
    __in_opt LPSTR pszDirectoryName,
    __deref_out_ecount(*pdwcbFileName) LPSTR *pmszFileNames,
    __out LPDWORD pdwcbFileName,
    __in DWORD dwFlags);

DWORD
WINAPI
CardEnumFiles(
    __in PCARD_DATA pCardData,
    __in_opt LPSTR pszDirectoryName,
    __deref_out_ecount(*pdwcbFileName) LPSTR *pmszFileNames,
    __out LPDWORD pdwcbFileName,
    __in DWORD dwFlags);




#define CARD_FILE_INFO_CURRENT_VERSION 1

typedef struct _CARD_FILE_INFO
{
    DWORD dwVersion;
    DWORD cbFileSize;
    CARD_FILE_ACCESS_CONDITION AccessCondition;
} CARD_FILE_INFO, *PCARD_FILE_INFO;

typedef DWORD (WINAPI *PFN_CARD_GET_FILE_INFO)(
    __in PCARD_DATA pCardData,
    __in_opt LPSTR pszDirectoryName,
    __in LPSTR pszFileName,
    __inout PCARD_FILE_INFO pCardFileInfo);

DWORD
WINAPI
CardGetFileInfo(
    __in PCARD_DATA pCardData,
    __in_opt LPSTR pszDirectoryName,
    __in LPSTR pszFileName,
    __inout PCARD_FILE_INFO pCardFileInfo);




#define CARD_FREE_SPACE_INFO_CURRENT_VERSION 1

typedef struct _CARD_FREE_SPACE_INFO
{
    DWORD dwVersion;
    DWORD dwBytesAvailable;
    DWORD dwKeyContainersAvailable;
    DWORD dwMaxKeyContainers;

} CARD_FREE_SPACE_INFO, *PCARD_FREE_SPACE_INFO;

typedef DWORD (WINAPI *PFN_CARD_QUERY_FREE_SPACE)(
    __in PCARD_DATA pCardData,
    __in DWORD dwFlags,
    __inout PCARD_FREE_SPACE_INFO pCardFreeSpaceInfo);

DWORD
WINAPI
CardQueryFreeSpace(
    __in PCARD_DATA pCardData,
    __in DWORD dwFlags,
    __inout PCARD_FREE_SPACE_INFO pCardFreeSpaceInfo);




#define CARD_KEY_SIZES_CURRENT_VERSION 1

typedef struct _CARD_KEY_SIZES
{
    DWORD dwVersion;
    DWORD dwMinimumBitlen;
    DWORD dwDefaultBitlen;
    DWORD dwMaximumBitlen;
    DWORD dwIncrementalBitlen;

} CARD_KEY_SIZES, *PCARD_KEY_SIZES;

typedef DWORD (WINAPI *PFN_CARD_QUERY_KEY_SIZES)(
    __in PCARD_DATA pCardData,
    __in DWORD dwKeySpec,
    __in DWORD dwFlags,
    __inout PCARD_KEY_SIZES pKeySizes);

DWORD
WINAPI
CardQueryKeySizes(
    __in PCARD_DATA pCardData,
    __in DWORD dwKeySpec,
    __in DWORD dwFlags,
    __inout PCARD_KEY_SIZES pKeySizes);



#define CARD_RSA_KEY_DECRYPT_INFO_VERSION_ONE 1

#define CARD_RSA_KEY_DECRYPT_INFO_VERSION_TWO 2
# 961 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/cardmod.h"
#define CARD_RSA_KEY_DECRYPT_INFO_CURRENT_VERSION CARD_RSA_KEY_DECRYPT_INFO_VERSION_TWO

typedef struct _CARD_RSA_DECRYPT_INFO
{
    DWORD dwVersion;
    BYTE bContainerIndex;


    DWORD dwKeySpec;




    PBYTE pbData;
    DWORD cbData;







    LPVOID pPaddingInfo;
    DWORD dwPaddingType;
} CARD_RSA_DECRYPT_INFO, *PCARD_RSA_DECRYPT_INFO;

typedef DWORD (WINAPI *PFN_CARD_RSA_DECRYPT)(
    __in PCARD_DATA pCardData,
    __inout PCARD_RSA_DECRYPT_INFO pInfo);

DWORD
WINAPI
CardRSADecrypt(
    __in PCARD_DATA pCardData,
    __inout PCARD_RSA_DECRYPT_INFO pInfo);

#define CARD_PADDING_INFO_PRESENT 0x40000000
#define CARD_BUFFER_SIZE_ONLY 0x20000000
#define CARD_PADDING_NONE 0x00000001
#define CARD_PADDING_PKCS1 0x00000002
#define CARD_PADDING_PSS 0x00000004
#define CARD_PADDING_OAEP 0x00000008



#define CARD_SIGNING_INFO_BASIC_VERSION 1






#define CARD_SIGNING_INFO_CURRENT_VERSION 2
typedef struct _CARD_SIGNING_INFO
{
    DWORD dwVersion;

    BYTE bContainerIndex;


    DWORD dwKeySpec;




    DWORD dwSigningFlags;



    ALG_ID aiHashAlg;




    PBYTE pbData;
    DWORD cbData;

    PBYTE pbSignedData;
    DWORD cbSignedData;







    LPVOID pPaddingInfo;
    DWORD dwPaddingType;
} CARD_SIGNING_INFO, *PCARD_SIGNING_INFO;

typedef DWORD (WINAPI *PFN_CARD_SIGN_DATA)(
    __in PCARD_DATA pCardData,
    __inout PCARD_SIGNING_INFO pInfo);

DWORD
WINAPI
CardSignData(
    __in PCARD_DATA pCardData,
    __inout PCARD_SIGNING_INFO pInfo);
# 1068 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/cardmod.h"
#define CARD_DH_AGREEMENT_INFO_VERSION 2

typedef struct _CARD_DH_AGREEMENT_INFO
{
    DWORD dwVersion;
    BYTE bContainerIndex;
    DWORD dwFlags;
    DWORD dwPublicKey;
    PBYTE pbPublicKey;
    PBYTE pbReserved;
    DWORD cbReserved;

    OUT BYTE bSecretAgreementIndex;
} CARD_DH_AGREEMENT_INFO, *PCARD_DH_AGREEMENT_INFO;
# 1090 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/cardmod.h"
typedef DWORD (WINAPI *PFN_CARD_CONSTRUCT_DH_AGREEMENT)(
    __in PCARD_DATA pCardData,
    __inout PCARD_DH_AGREEMENT_INFO pAgreementInfo);

DWORD
WINAPI
CardConstructDHAgreement(
    __in PCARD_DATA pCardData,
    __inout PCARD_DH_AGREEMENT_INFO pAgreementInfo);




#define CARD_DERIVE_KEY_VERSION 1
#define CARD_DERIVE_KEY_VERSION_TWO 2
#define CARD_DERIVE_KEY_CURRENT_VERSION CARD_DERIVE_KEY_VERSION_TWO



#define CARD_RETURN_KEY_HANDLE 0x1000000

typedef struct _CARD_DERIVE_KEY
{
    DWORD dwVersion;




    DWORD dwFlags;
    LPWSTR pwszKDF;
    BYTE bSecretAgreementIndex;

    PVOID pParameterList;

    PBYTE pbDerivedKey;
    DWORD cbDerivedKey;




    LPWSTR pwszAlgId;
    DWORD dwKeyLen;
    CARD_KEY_HANDLE hKey;
} CARD_DERIVE_KEY, *PCARD_DERIVE_KEY;
# 1142 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/cardmod.h"
typedef DWORD (WINAPI *PFN_CARD_DERIVE_KEY)(
    __in PCARD_DATA pCardData,
    __inout PCARD_DERIVE_KEY pAgreementInfo);

DWORD
WINAPI
CardDeriveKey(
    __in PCARD_DATA pCardData,
    __inout PCARD_DERIVE_KEY pAgreementInfo);







typedef DWORD (WINAPI *PFN_CARD_DESTROY_DH_AGREEMENT)(
    __in PCARD_DATA pCardData,
    __in BYTE bSecretAgreementIndex,
    __in DWORD dwFlags);

DWORD
WINAPI
CardDestroyDHAgreement(
    __in PCARD_DATA pCardData,
    __in BYTE bSecretAgreementIndex,
    __in DWORD dwFlags);
# 1180 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/cardmod.h"
typedef DWORD (WINAPI *PFN_CSP_GET_DH_AGREEMENT)(
    __in PCARD_DATA pCardData,
    __in PVOID hSecretAgreement,
    __out BYTE* pbSecretAgreementIndex,
    __in DWORD dwFlags);

DWORD
WINAPI
CspGetDHAgreement(
    __in PCARD_DATA pCardData,
    __in PVOID hSecretAgreement,
    __out BYTE* pbSecretAgreementIndex,
    __in DWORD dwFlags);
# 1204 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/cardmod.h"
typedef LPVOID (WINAPI *PFN_CSP_ALLOC)(
    __in SIZE_T Size);




typedef LPVOID (WINAPI *PFN_CSP_REALLOC)(
    __in LPVOID Address,
    __in SIZE_T Size);







typedef void (WINAPI *PFN_CSP_FREE)(
    __in LPVOID Address);






typedef DWORD (WINAPI *PFN_CSP_CACHE_ADD_FILE)(
    __in PVOID pvCacheContext,
    __in LPWSTR wszTag,
    __in DWORD dwFlags,
    __in_bcount(cbData) PBYTE pbData,
    __in DWORD cbData);







typedef DWORD (WINAPI *PFN_CSP_CACHE_LOOKUP_FILE)(
    __in PVOID pvCacheContext,
    __in LPWSTR wszTag,
    __in DWORD dwFlags,
    __deref_out_bcount(*pcbData) PBYTE *ppbData,
    __out PDWORD pcbData);






typedef DWORD (WINAPI *PFN_CSP_CACHE_DELETE_FILE)(
    __in PVOID pvCacheContext,
    __in LPWSTR wszTag,
    __in DWORD dwFlags);







typedef DWORD (WINAPI *PFN_CSP_PAD_DATA)(
    __in PCARD_SIGNING_INFO pSigningInfo,
    __in DWORD cbMaxWidth,
    __out DWORD* pcbPaddedBuffer,
    __deref_out_bcount(*pcbPaddedBuffer) PBYTE* ppbPaddedBuffer);







typedef DWORD (WINAPI *PFN_CSP_UNPAD_DATA)(
    __in PCARD_RSA_DECRYPT_INFO pRSADecryptInfo,
    __out DWORD* pcbUnpaddedData,
    __deref_out_bcount(*pcbUnpaddedData) PBYTE* ppbUnpaddedData);





#define CCP_CONTAINER_INFO L"Container Info"
#define CCP_PIN_IDENTIFIER L"PIN Identifier"
#define CCP_ASSOCIATED_ECDH_KEY L"Associated ECDH Key"

typedef DWORD (WINAPI *PFN_CARD_GET_CONTAINER_PROPERTY)(
    __in PCARD_DATA pCardData,
    __in BYTE bContainerIndex,
    __in LPCWSTR wszProperty,
    __out_bcount_part_opt(cbData, *pdwDataLen) PBYTE pbData,
    __in DWORD cbData,
    __out PDWORD pdwDataLen,
    __in DWORD dwFlags);

DWORD
WINAPI
CardGetContainerProperty(
    __in PCARD_DATA pCardData,
    __in BYTE bContainerIndex,
    __in LPCWSTR wszProperty,
    __out_bcount_part_opt(cbData, *pdwDataLen) PBYTE pbData,
    __in DWORD cbData,
    __out PDWORD pdwDataLen,
    __in DWORD dwFlags);

typedef DWORD (WINAPI *PFN_CARD_SET_CONTAINER_PROPERTY)(
    __in PCARD_DATA pCardData,
    __in BYTE bContainerIndex,
    __in LPCWSTR wszProperty,
    __in_bcount(cbDataLen) PBYTE pbData,
    __in DWORD cbDataLen,
    __in DWORD dwFlags);

DWORD
WINAPI
CardSetContainerProperty(
    __in PCARD_DATA pCardData,
    __in BYTE bContainerIndex,
    __in LPCWSTR wszProperty,
    __in_bcount(cbDataLen) PBYTE pbData,
    __in DWORD cbDataLen,
    __in DWORD dwFlags);





#define CP_CARD_FREE_SPACE L"Free Space"
#define CP_CARD_CAPABILITIES L"Capabilities"
#define CP_CARD_KEYSIZES L"Key Sizes"

#define CP_CARD_READ_ONLY L"Read Only Mode"
#define CP_CARD_CACHE_MODE L"Cache Mode"
#define CP_SUPPORTS_WIN_X509_ENROLLMENT L"Supports Windows x.509 Enrollment"

#define CP_CARD_GUID L"Card Identifier"
#define CP_CARD_SERIAL_NO L"Card Serial Number"

#define CP_CARD_PIN_INFO L"PIN Information"
#define CP_CARD_LIST_PINS L"PIN List"
#define CP_CARD_AUTHENTICATED_STATE L"Authenticated State"

#define CP_CARD_PIN_STRENGTH_VERIFY L"PIN Strength Verify"
#define CP_CARD_PIN_STRENGTH_CHANGE L"PIN Strength Change"
#define CP_CARD_PIN_STRENGTH_UNBLOCK L"PIN Strength Unblock"

#define CP_PARENT_WINDOW L"Parent Window"
#define CP_PIN_CONTEXT_STRING L"PIN Context String"


typedef DWORD (WINAPI *PFN_CARD_GET_PROPERTY)(
    __in PCARD_DATA pCardData,
    __in LPCWSTR wszProperty,
    __out_bcount_part_opt(cbData, *pdwDataLen) PBYTE pbData,
    __in DWORD cbData,
    __out PDWORD pdwDataLen,
    __in DWORD dwFlags);

DWORD
WINAPI
CardGetProperty(
    __in PCARD_DATA pCardData,
    __in LPCWSTR wszProperty,
    __out_bcount_part_opt(cbData, *pdwDataLen) PBYTE pbData,
    __in DWORD cbData,
    __out PDWORD pdwDataLen,
    __in DWORD dwFlags);

typedef DWORD (WINAPI *PFN_CARD_SET_PROPERTY)(
    __in PCARD_DATA pCardData,
    __in LPCWSTR wszProperty,
    __in_bcount(cbDataLen) PBYTE pbData,
    __in DWORD cbDataLen,
    __in DWORD dwFlags);

DWORD
WINAPI
CardSetProperty(
    __in PCARD_DATA pCardData,
    __in LPCWSTR wszProperty,
    __in_bcount(cbDataLen) PBYTE pbData,
    __in DWORD cbDataLen,
    __in DWORD dwFlags);





#define CARD_SECURE_KEY_INJECTION_NO_CARD_MODE 0x1

#define CARD_KEY_IMPORT_PLAIN_TEXT 0x1
#define CARD_KEY_IMPORT_RSA_KEYEST 0x2
#define CARD_KEY_IMPORT_ECC_KEYEST 0x4
#define CARD_KEY_IMPORT_SHARED_SYMMETRIC 0x8

#define CARD_CIPHER_OPERATION 0x1
#define CARD_ASYMMETRIC_OPERATION 0x2

#define CARD_3DES_112_ALGORITHM BCRYPT_3DES_112_ALGORITHM
#define CARD_3DES_ALGORITHM BCRYPT_3DES_ALGORITHM
#define CARD_AES_ALGORITHM BCRYPT_AES_ALGORITHM

#define CARD_BLOCK_PADDING BCRYPT_BLOCK_PADDING

#define CARD_CHAIN_MODE_CBC BCRYPT_CHAIN_MODE_CBC





#pragma warning(push)
#pragma warning(disable:4200)

typedef struct _CARD_ENCRYPTED_DATA {
    PBYTE pbEncryptedData;
    DWORD cbEncryptedData;
} CARD_ENCRYPTED_DATA, *PCARD_ENCRYPTED_DATA;

#define CARD_IMPORT_KEYPAIR_VERSION_SEVEN 7
#define CARD_IMPORT_KEYPAIR_CURRENT_VERSION CARD_IMPORT_KEYPAIR_VERSION_SEVEN

typedef struct _CARD_IMPORT_KEYPAIR
{
    DWORD dwVersion;
    BYTE bContainerIndex;
    PIN_ID PinId;
    DWORD dwKeySpec;
    DWORD dwKeySize;
    DWORD cbInput;
    BYTE pbInput[0];
} CARD_IMPORT_KEYPAIR, *PCARD_IMPORT_KEYPAIR;

#define CARD_CHANGE_AUTHENTICATOR_VERSION_SEVEN 7
#define CARD_CHANGE_AUTHENTICATOR_CURRENT_VERSION CARD_CHANGE_AUTHENTICATOR_VERSION_SEVEN

typedef struct _CARD_CHANGE_AUTHENTICATOR
{
    DWORD dwVersion;
    DWORD dwFlags;
    PIN_ID dwAuthenticatingPinId;
    DWORD cbAuthenticatingPinData;
    PIN_ID dwTargetPinId;
    DWORD cbTargetData;
    DWORD cRetryCount;
    BYTE pbData[0];


} CARD_CHANGE_AUTHENTICATOR, *PCARD_CHANGE_AUTHENTICATOR;

#define CARD_CHANGE_AUTHENTICATOR_RESPONSE_VERSION_SEVEN 7
#define CARD_CHANGE_AUTHENTICATOR_RESPONSE_CURRENT_VERSION CARD_CHANGE_AUTHENTICATOR_RESPONSE_VERSION_SEVEN

typedef struct _CARD_CHANGE_AUTHENTICATOR_RESPONSE
{
    DWORD dwVersion;
    DWORD cAttemptsRemaining;
} CARD_CHANGE_AUTHENTICATOR_RESPONSE, *PCARD_CHANGE_AUTHENTICATOR_RESPONSE;

#define CARD_AUTHENTICATE_VERSION_SEVEN 7
#define CARD_AUTHENTICATE_CURRENT_VERSION CARD_AUTHENTICATE_VERSION_SEVEN

typedef struct _CARD_AUTHENTICATE
{
    DWORD dwVersion;
    DWORD dwFlags;
    PIN_ID PinId;
    DWORD cbPinData;
    BYTE pbPinData[0];
} CARD_AUTHENTICATE, *PCARD_AUTHENTICATE;

#define CARD_AUTHENTICATE_RESPONSE_VERSION_SEVEN 7
#define CARD_AUTHENTICATE_RESPONSE_CURRENT_VERSION CARD_AUTHENTICATE_RESPONSE_VERSION_SEVEN

typedef struct _CARD_AUTHENTICATE_RESPONSE
{
    DWORD dwVersion;
    DWORD cbSessionPin;
    DWORD cAttemptsRemaining;
    BYTE pbSessionPin[0];
} CARD_AUTHENTICATE_RESPONSE, *PCARD_AUTHENTICATE_RESPONSE;

#pragma warning(pop)





#define CP_KEY_IMPORT_SUPPORT L"Key Import Support"
#define CP_ENUM_ALGORITHMS L"Algorithms"
#define CP_PADDING_SCHEMES L"Padding Schemes"
#define CP_CHAINING_MODES L"Chaining Modes"

#define CSF_IMPORT_KEYPAIR L"Import Key Pair"
#define CSF_CHANGE_AUTHENTICATOR L"Change Authenticator"
#define CSF_AUTHENTICATE L"Authenticate"

#define CKP_CHAINING_MODE L"ChainingMode"
#define CKP_INITIALIZATION_VECTOR L"IV"
#define CKP_BLOCK_LENGTH L"BlockLength"





typedef DWORD (WINAPI *PFN_MD_IMPORT_SESSION_KEY)(
    __in PCARD_DATA pCardData,
    __in LPCWSTR pwszBlobType,
    __in LPCWSTR pwszAlgId,
    __out PCARD_KEY_HANDLE phKey,
    __in_bcount(cbInput) PBYTE pbInput,
    __in DWORD cbInput);

DWORD
WINAPI
MDImportSessionKey(
    __in PCARD_DATA pCardData,
    __in LPCWSTR pwszBlobType,
    __in LPCWSTR pwszAlgId,
    __out PCARD_KEY_HANDLE phKey,
    __in_bcount(cbInput) PBYTE pbInput,
    __in DWORD cbInput);

typedef DWORD (WINAPI *PFN_MD_ENCRYPT_DATA)(
    __in PCARD_DATA pCardData,
    __in CARD_KEY_HANDLE hKey,
    __in LPCWSTR pwszSecureFunction,
    __in_bcount(cbInput) PBYTE pbInput,
    __in DWORD cbInput,
    __in DWORD dwFlags,
    __deref_out_ecount(*pcEncryptedData) PCARD_ENCRYPTED_DATA *ppEncryptedData,
    __out PDWORD pcEncryptedData);

DWORD
WINAPI
MDEncryptData(
    __in PCARD_DATA pCardData,
    __in CARD_KEY_HANDLE hKey,
    __in LPCWSTR pwszSecureFunction,
    __in_bcount(cbInput) PBYTE pbInput,
    __in DWORD cbInput,
    __in DWORD dwFlags,
    __deref_out_ecount(*pcEncryptedData) PCARD_ENCRYPTED_DATA *ppEncryptedData,
    __out PDWORD pcEncryptedData);

typedef DWORD (WINAPI *PFN_CARD_GET_SHARED_KEY_HANDLE)(
    __in PCARD_DATA pCardData,
    __in_bcount(cbInput) PBYTE pbInput,
    __in DWORD cbInput,
    __deref_opt_out_bcount(*pcbOutput) PBYTE *ppbOutput,
    __out_opt PDWORD pcbOutput,
    __out PCARD_KEY_HANDLE phKey);

DWORD
WINAPI
CardGetSharedKeyHandle(
    __in PCARD_DATA pCardData,
    __in_bcount(cbInput) PBYTE pbInput,
    __in DWORD cbInput,
    __deref_opt_out_bcount(*pcbOutput) PBYTE *ppbOutput,
    __out_opt PDWORD pcbOutput,
    __out PCARD_KEY_HANDLE phKey);

typedef DWORD (WINAPI *PFN_CARD_DESTROY_KEY)(
    __in PCARD_DATA pCardData,
    __in CARD_KEY_HANDLE hKey);

DWORD
WINAPI
CardDestroyKey(
    __in PCARD_DATA pCardData,
    __in CARD_KEY_HANDLE hKey);

typedef DWORD (WINAPI *PFN_CARD_GET_ALGORITHM_PROPERTY)(
    __in PCARD_DATA pCardData,
    __in LPCWSTR pwszAlgId,
    __in LPCWSTR pwszProperty,
    __out_bcount_part_opt(cbData, *pdwDataLen) PBYTE pbData,
    __in DWORD cbData,
    __out PDWORD pdwDataLen,
    __in DWORD dwFlags);

DWORD
WINAPI
CardGetAlgorithmProperty(
    __in PCARD_DATA pCardData,
    __in LPCWSTR pwszAlgId,
    __in LPCWSTR pwszProperty,
    __out_bcount_part_opt(cbData, *pdwDataLen) PBYTE pbData,
    __in DWORD cbData,
    __out PDWORD pdwDataLen,
    __in DWORD dwFlags);

typedef DWORD (WINAPI *PFN_CARD_GET_KEY_PROPERTY)(
    __in PCARD_DATA pCardData,
    __in CARD_KEY_HANDLE hKey,
    __in LPCWSTR pwszProperty,
    __out_bcount_part_opt(cbData, *pdwDataLen) PBYTE pbData,
    __in DWORD cbData,
    __out PDWORD pdwDataLen,
    __in DWORD dwFlags);

DWORD
WINAPI
CardGetKeyProperty(
    __in PCARD_DATA pCardData,
    __in CARD_KEY_HANDLE hKey,
    __in LPCWSTR pwszProperty,
    __out_bcount_part_opt(cbData, *pdwDataLen) PBYTE pbData,
    __in DWORD cbData,
    __out PDWORD pdwDataLen,
    __in DWORD dwFlags);

typedef DWORD (WINAPI *PFN_CARD_SET_KEY_PROPERTY)(
    __in PCARD_DATA pCardData,
    __in CARD_KEY_HANDLE hKey,
    __in LPCWSTR pwszProperty,
    __in_bcount(cbInput) PBYTE pbInput,
    __in DWORD cbInput,
    __in DWORD dwFlags);

DWORD
WINAPI
CardSetKeyProperty(
    __in PCARD_DATA pCardData,
    __in CARD_KEY_HANDLE hKey,
    __in LPCWSTR pwszProperty,
    __in_bcount(cbInput) PBYTE pbInput,
    __in DWORD cbInput,
    __in DWORD dwFlags);

typedef DWORD (WINAPI *PFN_CARD_IMPORT_SESSION_KEY)(
    __in PCARD_DATA pCardData,
    __in BYTE bContainerIndex,
    __in LPVOID pPaddingInfo,
    __in LPCWSTR pwszBlobType,
    __in LPCWSTR pwszAlgId,
    __out PCARD_KEY_HANDLE phKey,
    __in_bcount(cbInput) PBYTE pbInput,
    __in DWORD cbInput,
    __in DWORD dwFlags);

DWORD
WINAPI
CardImportSessionKey(
    __in PCARD_DATA pCardData,
    __in BYTE bContainerIndex,
    __in LPVOID pPaddingInfo,
    __in LPCWSTR pwszBlobType,
    __in LPCWSTR pwszAlgId,
    __out PCARD_KEY_HANDLE phKey,
    __in_bcount(cbInput) PBYTE pbInput,
    __in DWORD cbInput,
    __in DWORD dwFlags);

typedef DWORD (WINAPI *PFN_CARD_PROCESS_ENCRYPTED_DATA)(
    __in PCARD_DATA pCardData,
    __in CARD_KEY_HANDLE hKey,
    __in LPCWSTR pwszSecureFunction,
    __in_ecount(cEncryptedData) PCARD_ENCRYPTED_DATA pEncryptedData,
    __in DWORD cEncryptedData,
    __out_bcount_part_opt(cbOutput, *pdwOutputLen) PBYTE pbOutput,
    __in DWORD cbOutput,
    __out_opt PDWORD pdwOutputLen,
    __in DWORD dwFlags);

DWORD
WINAPI
CardProcessEncryptedData(
    __in PCARD_DATA pCardData,
    __in CARD_KEY_HANDLE hKey,
    __in LPCWSTR pwszSecureFunction,
    __in_ecount(cEncryptedData) PCARD_ENCRYPTED_DATA pEncryptedData,
    __in DWORD cEncryptedData,
    __out_bcount_part_opt(cbOutput, *pdwOutputLen) PBYTE pbOutput,
    __in DWORD cbOutput,
    __out_opt PDWORD pdwOutputLen,
    __in DWORD dwFlags);





#define CARD_DATA_VERSION_SEVEN 7




#define CARD_DATA_VERSION_SIX 6




#define CARD_DATA_VERSION_FIVE 5




#define CARD_DATA_VERSION_FOUR 4





#define CARD_DATA_CURRENT_VERSION CARD_DATA_VERSION_SEVEN

typedef struct _CARD_DATA
{



    DWORD dwVersion;

    PBYTE pbAtr;
    DWORD cbAtr;
    LPWSTR pwszCardName;

    PFN_CSP_ALLOC pfnCspAlloc;
    PFN_CSP_REALLOC pfnCspReAlloc;
    PFN_CSP_FREE pfnCspFree;

    PFN_CSP_CACHE_ADD_FILE pfnCspCacheAddFile;
    PFN_CSP_CACHE_LOOKUP_FILE pfnCspCacheLookupFile;
    PFN_CSP_CACHE_DELETE_FILE pfnCspCacheDeleteFile;
    PVOID pvCacheContext;

    PFN_CSP_PAD_DATA pfnCspPadData;

    SCARDCONTEXT hSCardCtx;
    SCARDHANDLE hScard;



    PVOID pvVendorSpecific;



    PFN_CARD_DELETE_CONTEXT pfnCardDeleteContext;
    PFN_CARD_QUERY_CAPABILITIES pfnCardQueryCapabilities;
    PFN_CARD_DELETE_CONTAINER pfnCardDeleteContainer;
    PFN_CARD_CREATE_CONTAINER pfnCardCreateContainer;
    PFN_CARD_GET_CONTAINER_INFO pfnCardGetContainerInfo;
    PFN_CARD_AUTHENTICATE_PIN pfnCardAuthenticatePin;
    PFN_CARD_GET_CHALLENGE pfnCardGetChallenge;
    PFN_CARD_AUTHENTICATE_CHALLENGE pfnCardAuthenticateChallenge;
    PFN_CARD_UNBLOCK_PIN pfnCardUnblockPin;
    PFN_CARD_CHANGE_AUTHENTICATOR pfnCardChangeAuthenticator;
    PFN_CARD_DEAUTHENTICATE pfnCardDeauthenticate;
    PFN_CARD_CREATE_DIRECTORY pfnCardCreateDirectory;
    PFN_CARD_DELETE_DIRECTORY pfnCardDeleteDirectory;
    LPVOID pvUnused3;
    LPVOID pvUnused4;
    PFN_CARD_CREATE_FILE pfnCardCreateFile;
    PFN_CARD_READ_FILE pfnCardReadFile;
    PFN_CARD_WRITE_FILE pfnCardWriteFile;
    PFN_CARD_DELETE_FILE pfnCardDeleteFile;
    PFN_CARD_ENUM_FILES pfnCardEnumFiles;
    PFN_CARD_GET_FILE_INFO pfnCardGetFileInfo;
    PFN_CARD_QUERY_FREE_SPACE pfnCardQueryFreeSpace;
    PFN_CARD_QUERY_KEY_SIZES pfnCardQueryKeySizes;

    PFN_CARD_SIGN_DATA pfnCardSignData;
    PFN_CARD_RSA_DECRYPT pfnCardRSADecrypt;
    PFN_CARD_CONSTRUCT_DH_AGREEMENT pfnCardConstructDHAgreement;


    PFN_CARD_DERIVE_KEY pfnCardDeriveKey;
    PFN_CARD_DESTROY_DH_AGREEMENT pfnCardDestroyDHAgreement;
    PFN_CSP_GET_DH_AGREEMENT pfnCspGetDHAgreement;


    PFN_CARD_GET_CHALLENGE_EX pfnCardGetChallengeEx;
    PFN_CARD_AUTHENTICATE_EX pfnCardAuthenticateEx;
    PFN_CARD_CHANGE_AUTHENTICATOR_EX pfnCardChangeAuthenticatorEx;
    PFN_CARD_DEAUTHENTICATE_EX pfnCardDeauthenticateEx;
    PFN_CARD_GET_CONTAINER_PROPERTY pfnCardGetContainerProperty;
    PFN_CARD_SET_CONTAINER_PROPERTY pfnCardSetContainerProperty;
    PFN_CARD_GET_PROPERTY pfnCardGetProperty;
    PFN_CARD_SET_PROPERTY pfnCardSetProperty;


    PFN_CSP_UNPAD_DATA pfnCspUnpadData;
    PFN_MD_IMPORT_SESSION_KEY pfnMDImportSessionKey;
    PFN_MD_ENCRYPT_DATA pfnMDEncryptData;
    PFN_CARD_IMPORT_SESSION_KEY pfnCardImportSessionKey;
    PFN_CARD_GET_SHARED_KEY_HANDLE pfnCardGetSharedKeyHandle;
    PFN_CARD_GET_ALGORITHM_PROPERTY pfnCardGetAlgorithmProperty;
    PFN_CARD_GET_KEY_PROPERTY pfnCardGetKeyProperty;
    PFN_CARD_SET_KEY_PROPERTY pfnCardSetKeyProperty;
    PFN_CARD_DESTROY_KEY pfnCardDestroyKey;
    PFN_CARD_PROCESS_ENCRYPTED_DATA pfnCardProcessEncryptedData;
    PFN_CARD_CREATE_CONTAINER_EX pfnCardCreateContainerEx;

} CARD_DATA, *PCARD_DATA;

#endif
