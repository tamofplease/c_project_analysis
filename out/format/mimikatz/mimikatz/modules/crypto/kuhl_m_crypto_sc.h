# 1 "project/mimikatz/mimikatz/modules/crypto/kuhl_m_crypto_sc.h"





       
#include "../kuhl_m_crypto.h"
#include <cardmod.h>


NTSTATUS kuhl_m_crypto_l_sc(int argc, wchar_t * argv[]);

void kuhl_m_crypto_l_mdr(LPCWSTR szMdr, SCARDCONTEXT ctxScard, SCARDHANDLE hScard, LPCWSTR szModel, LPCBYTE pbAtr, DWORD cbAtr);
DWORD kuhl_m_crypto_l_sc_provtypefromname(LPCWSTR szProvider);
PWSTR kuhl_m_crypto_l_sc_containerFromReader(LPCWSTR reader);
