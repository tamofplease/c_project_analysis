# 1 "project/mimikatz/mimikatz/modules/sekurlsa/packages/kuhl_m_sekurlsa_tspkg.h"





       
#include "../kuhl_m_sekurlsa.h"

KUHL_M_SEKURLSA_PACKAGE kuhl_m_sekurlsa_tspkg_package;

NTSTATUS kuhl_m_sekurlsa_tspkg(int argc, wchar_t * argv[]);
void CALLBACK kuhl_m_sekurlsa_enum_logon_callback_tspkg(IN PKIWI_BASIC_SECURITY_LOGON_SESSION_DATA pData);

typedef struct _KIWI_TS_PRIMARY_CREDENTIAL {
 PVOID unk0;
 KIWI_GENERIC_PRIMARY_CREDENTIAL credentials;
} KIWI_TS_PRIMARY_CREDENTIAL, *PKIWI_TS_PRIMARY_CREDENTIAL;

typedef struct _KIWI_TS_CREDENTIAL {
#if defined(_M_X64) || defined(_M_ARM64)
 BYTE unk0[108];
#elif defined(_M_IX86)
 BYTE unk0[64];
#endif
 LUID LocallyUniqueIdentifier;
 PVOID unk1;
 PVOID unk2;
 PKIWI_TS_PRIMARY_CREDENTIAL pTsPrimary;
} KIWI_TS_CREDENTIAL, *PKIWI_TS_CREDENTIAL;

typedef struct _KIWI_TS_CREDENTIAL_1607 {
#if defined(_M_X64) || defined(_M_ARM64)
 BYTE unk0[112];
#elif defined(_M_IX86)
 BYTE unk0[68];
#endif
 LUID LocallyUniqueIdentifier;
 PVOID unk1;
 PVOID unk2;
 PKIWI_TS_PRIMARY_CREDENTIAL pTsPrimary;
} KIWI_TS_CREDENTIAL_1607, *PKIWI_TS_CREDENTIAL_1607;

typedef struct _KIWI_TS_CREDENTIAL_HELPER {
 LONG offsetToLuid;
 LONG offsetToTsPrimary;
} KIWI_TS_CREDENTIAL_HELPER, *PKIWI_TS_CREDENTIAL_HELPER;
