# 1 "project/mimikatz/mimikatz/modules/kuhl_m_token.h"





       
#include "kuhl_m.h"
#include "../modules/kull_m_token.h"
#include "../modules/kull_m_net.h"
#include "kuhl_m_process.h"

const KUHL_M kuhl_m_token;
# 23 "project/mimikatz/mimikatz/modules/kuhl_m_token.h"
typedef struct _KUHL_M_TOKEN_ELEVATE_DATA {
 PSID pSid;
 PCWSTR pUsername;
 DWORD tokenId;
 BOOL elevateIt;
 BOOL runIt;
 PCWSTR pCommandLine;
 BOOL isSidDirectUser;




} KUHL_M_TOKEN_ELEVATE_DATA, *PKUHL_M_TOKEN_ELEVATE_DATA;

void kuhl_m_token_displayAccount_sids(UCHAR l, DWORD count, PSID_AND_ATTRIBUTES sids);
void kuhl_m_token_displayAccount(HANDLE hToken, BOOL full);

NTSTATUS kuhl_m_token_whoami(int argc, wchar_t * argv[]);
NTSTATUS kuhl_m_token_list(int argc, wchar_t * argv[]);
NTSTATUS kuhl_m_token_elevate(int argc, wchar_t * argv[]);
NTSTATUS kuhl_m_token_run(int argc, wchar_t * argv[]);
NTSTATUS kuhl_m_token_revert(int argc, wchar_t * argv[]);

NTSTATUS kuhl_m_token_list_or_elevate(int argc, wchar_t * argv[], BOOL elevate, BOOL runIt);
BOOL CALLBACK kuhl_m_token_list_or_elevate_callback(HANDLE hToken, DWORD ptid, PVOID pvArg);
