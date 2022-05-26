# 1 "project/mimikatz/mimilib/sekurlsadbg/kuhl_m_sekurlsa_utils.h"





       
#include "../utils.h"

#include <wdbgexts.h>

typedef STRING ANSI_STRING;

typedef struct _RTL_BALANCED_LINKS {
 struct _RTL_BALANCED_LINKS *Parent;
 struct _RTL_BALANCED_LINKS *LeftChild;
 struct _RTL_BALANCED_LINKS *RightChild;
 CHAR Balance;
 UCHAR Reserved[3];
} RTL_BALANCED_LINKS;
typedef RTL_BALANCED_LINKS *PRTL_BALANCED_LINKS;

typedef struct _RTL_AVL_TABLE {
 RTL_BALANCED_LINKS BalancedRoot;
 PVOID OrderedPointer;
 ULONG WhichOrderedElement;
 ULONG NumberGenericTableElements;
 ULONG DepthOfTree;
 PRTL_BALANCED_LINKS RestartKey;
 ULONG DeleteCount;
 PVOID CompareRoutine;
 PVOID AllocateRoutine;
 PVOID FreeRoutine;
 PVOID TableContext;
} RTL_AVL_TABLE, *PRTL_AVL_TABLE;

typedef struct _KIWI_GENERIC_PRIMARY_CREDENTIAL
{
 LSA_UNICODE_STRING UserName;
 LSA_UNICODE_STRING Domaine;
 LSA_UNICODE_STRING Password;
} KIWI_GENERIC_PRIMARY_CREDENTIAL, *PKIWI_GENERIC_PRIMARY_CREDENTIAL;

typedef struct _KIWI_MSV1_0_PRIMARY_CREDENTIALS {
 struct _KIWI_MSV1_0_PRIMARY_CREDENTIALS *next;
 ANSI_STRING Primary;
 LSA_UNICODE_STRING Credentials;
} KIWI_MSV1_0_PRIMARY_CREDENTIALS, *PKIWI_MSV1_0_PRIMARY_CREDENTIALS;

typedef struct _KIWI_MSV1_0_CREDENTIALS {
 struct _KIWI_MSV1_0_CREDENTIALS *next;
 DWORD AuthenticationPackageId;
 PKIWI_MSV1_0_PRIMARY_CREDENTIALS PrimaryCredentials;
} KIWI_MSV1_0_CREDENTIALS, *PKIWI_MSV1_0_CREDENTIALS;

typedef struct _KIWI_MSV1_0_LIST_60 {
 struct _KIWI_MSV1_0_LIST_6 *Flink;
 struct _KIWI_MSV1_0_LIST_6 *Blink;
 PVOID unk0;
 ULONG unk1;
 PVOID unk2;
 ULONG unk3;
 ULONG unk4;
 ULONG unk5;
 HANDLE hSemaphore6;
 PVOID unk7;
 HANDLE hSemaphore8;
 PVOID unk9;
 PVOID unk10;
 ULONG unk11;
 ULONG unk12;
 PVOID unk13;
 LUID LocallyUniqueIdentifier;
 LUID SecondaryLocallyUniqueIdentifier;
 LSA_UNICODE_STRING UserName;
 LSA_UNICODE_STRING Domaine;
 PVOID unk14;
 PVOID unk15;
 PSID pSid;
 ULONG LogonType;
    ULONG Session;
    LARGE_INTEGER LogonTime;
 LSA_UNICODE_STRING LogonServer;
 PKIWI_MSV1_0_CREDENTIALS Credentials;
 ULONG unk19;
 PVOID unk20;
 PVOID unk21;
 PVOID unk22;
 ULONG unk23;
 PVOID CredentialManager;
} KIWI_MSV1_0_LIST_60, *PKIWI_MSV1_0_LIST_60;

typedef struct _KIWI_MSV1_0_LIST_61 {
 struct _KIWI_MSV1_0_LIST_6 *Flink;
 struct _KIWI_MSV1_0_LIST_6 *Blink;
 PVOID unk0;
 ULONG unk1;
 PVOID unk2;
 ULONG unk3;
 ULONG unk4;
 ULONG unk5;
 HANDLE hSemaphore6;
 PVOID unk7;
 HANDLE hSemaphore8;
 PVOID unk9;
 PVOID unk10;
 ULONG unk11;
 ULONG unk12;
 PVOID unk13;
 LUID LocallyUniqueIdentifier;
 LUID SecondaryLocallyUniqueIdentifier;
 LSA_UNICODE_STRING UserName;
 LSA_UNICODE_STRING Domaine;
 PVOID unk14;
 PVOID unk15;
 PSID pSid;
 ULONG LogonType;
    ULONG Session;
    LARGE_INTEGER LogonTime;
 LSA_UNICODE_STRING LogonServer;
 PKIWI_MSV1_0_CREDENTIALS Credentials;
 PVOID unk19;
 PVOID unk20;
 PVOID unk21;
 ULONG unk22;
 PVOID CredentialManager;
} KIWI_MSV1_0_LIST_61, *PKIWI_MSV1_0_LIST_61;

typedef struct _KIWI_MSV1_0_LIST_61_ANTI_MIMIKATZ {
 struct _KIWI_MSV1_0_LIST_61_ANTI_MIMIKATZ *Flink;
 struct _KIWI_MSV1_0_LIST_61_ANTI_MIMIKATZ *Blink;
 PVOID unk0;
 ULONG unk1;
 PVOID unk2;
 ULONG unk3;
 ULONG unk4;
 ULONG unk5;
 HANDLE hSemaphore6;
 PVOID unk7;
 HANDLE hSemaphore8;
 PVOID unk9;
 PVOID unk10;
 ULONG unk11;
 ULONG unk12;
 PVOID unk13;
 LUID LocallyUniqueIdentifier;
 LUID SecondaryLocallyUniqueIdentifier;
 BYTE waza[12];
 LSA_UNICODE_STRING UserName;
 LSA_UNICODE_STRING Domaine;
 PVOID unk14;
 PVOID unk15;
 PSID pSid;
 ULONG LogonType;
    ULONG Session;
    LARGE_INTEGER LogonTime;
 LSA_UNICODE_STRING LogonServer;
 PKIWI_MSV1_0_CREDENTIALS Credentials;
 PVOID unk19;
 PVOID unk20;
 PVOID unk21;
 ULONG unk22;
 PVOID CredentialManager;
} KIWI_MSV1_0_LIST_61_ANTI_MIMIKATZ, *PKIWI_MSV1_0_LIST_61_ANTI_MIMIKATZ;

typedef struct _KIWI_MSV1_0_LIST_62 {
 struct _KIWI_MSV1_0_LIST_62 *Flink;
 struct _KIWI_MSV1_0_LIST_62 *Blink;
 PVOID unk0;
 ULONG unk1;
 PVOID unk2;
 ULONG unk3;
 ULONG unk4;
 ULONG unk5;
 HANDLE hSemaphore6;
 PVOID unk7;
 HANDLE hSemaphore8;
 PVOID unk9;
 PVOID unk10;
 ULONG unk11;
 ULONG unk12;
 PVOID unk13;
 LUID LocallyUniqueIdentifier;
 LUID SecondaryLocallyUniqueIdentifier;
 LSA_UNICODE_STRING UserName;
 LSA_UNICODE_STRING Domaine;
 PVOID unk14;
 PVOID unk15;
 LSA_UNICODE_STRING Type;
 PSID pSid;
 ULONG LogonType;
 PVOID unk18;
    ULONG Session;
    LARGE_INTEGER LogonTime;
 LSA_UNICODE_STRING LogonServer;
 PKIWI_MSV1_0_CREDENTIALS Credentials;
 PVOID unk19;
 PVOID unk20;
 PVOID unk21;
 ULONG unk22;
 ULONG unk23;
 ULONG unk24;
 ULONG unk25;
 ULONG unk26;
 PVOID unk27;
 PVOID unk28;
 PVOID unk29;
 PVOID CredentialManager;
} KIWI_MSV1_0_LIST_62, *PKIWI_MSV1_0_LIST_62;

typedef struct _KIWI_MSV1_0_LIST_63 {
 struct _KIWI_MSV1_0_LIST_63 *Flink;
 struct _KIWI_MSV1_0_LIST_63 *Blink;
 PVOID unk0;
 ULONG unk1;
 PVOID unk2;
 ULONG unk3;
 ULONG unk4;
 ULONG unk5;
 HANDLE hSemaphore6;
 PVOID unk7;
 HANDLE hSemaphore8;
 PVOID unk9;
 PVOID unk10;
 ULONG unk11;
 ULONG unk12;
 PVOID unk13;
 LUID LocallyUniqueIdentifier;
 LUID SecondaryLocallyUniqueIdentifier;
 BYTE waza[12];
 LSA_UNICODE_STRING UserName;
 LSA_UNICODE_STRING Domaine;
 PVOID unk14;
 PVOID unk15;
 LSA_UNICODE_STRING Type;
 PSID pSid;
 ULONG LogonType;
 PVOID unk18;
 ULONG Session;
 LARGE_INTEGER LogonTime;
 LSA_UNICODE_STRING LogonServer;
 PKIWI_MSV1_0_CREDENTIALS Credentials;
 PVOID unk19;
 PVOID unk20;
 PVOID unk21;
 ULONG unk22;
 ULONG unk23;
 ULONG unk24;
 ULONG unk25;
 ULONG unk26;
 PVOID unk27;
 PVOID unk28;
 PVOID unk29;
 PVOID CredentialManager;
} KIWI_MSV1_0_LIST_63, *PKIWI_MSV1_0_LIST_63;

typedef struct _KIWI_BASIC_SECURITY_LOGON_SESSION_DATA {
 PLUID LogonId;
 PLSA_UNICODE_STRING UserName;
 PLSA_UNICODE_STRING LogonDomain;
 ULONG LogonType;
 ULONG Session;
 PVOID pCredentials;
 PSID pSid;
 PVOID pCredentialManager;
 FILETIME LogonTime;
 PLSA_UNICODE_STRING LogonServer;
} KIWI_BASIC_SECURITY_LOGON_SESSION_DATA, *PKIWI_BASIC_SECURITY_LOGON_SESSION_DATA;

extern BOOLEAN WINAPI RtlEqualString(IN const STRING *String1, IN const STRING *String2, IN BOOLEAN CaseInSensitive);
extern VOID WINAPI RtlFreeUnicodeString(IN PUNICODE_STRING UnicodeString);
extern NTSTATUS WINAPI RtlStringFromGUID(IN LPCGUID Guid, PUNICODE_STRING UnicodeString);

#define LM_NTLM_HASH_LENGTH 16
#define SHA_DIGEST_LENGTH 20
#define AES_256_KEY_LENGTH 32

ULONG_PTR kuhl_m_sekurlsa_utils_pFromLinkedListByLuid(ULONG_PTR pSecurityStruct, ULONG LUIDoffset, PLUID luidToFind);
ULONG_PTR kuhl_m_sekurlsa_utils_pFromAVLByLuid(ULONG_PTR pTable, ULONG LUIDoffset, PLUID luidToFind);
ULONG_PTR kuhl_m_sekurlsa_utils_pFromAVLByLuidRec(ULONG_PTR pTable, ULONG LUIDoffset, PLUID luidToFind);
void kuhl_m_sekurlsa_utils_NlpMakeRelativeOrAbsoluteString(PVOID BaseAddress, PLSA_UNICODE_STRING String, BOOL relative);

BOOL kull_m_string_getDbgUnicodeString(IN PUNICODE_STRING string);
void kull_m_string_dprintf_hex(LPCVOID lpData, DWORD cbData, DWORD flags);
void kull_m_string_displayFileTime(IN PFILETIME pFileTime);
void kull_m_string_displayLocalFileTime(IN PFILETIME pFileTime);
void kull_m_string_displayGUID(IN LPCGUID pGuid);
void kull_m_string_displaySID(IN PSID pSid);
BOOL kull_m_string_suspectUnicodeString(IN PUNICODE_STRING pUnicodeString);
BOOL kuhl_m_sekurlsa_utils_getSid(IN PSID * pSid);
PCSTR kuhl_m_kerberos_ticket_etype(LONG eType);
