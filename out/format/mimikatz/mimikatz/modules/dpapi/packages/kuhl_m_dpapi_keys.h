# 1 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/mimikatz/modules/dpapi/packages/kuhl_m_dpapi_keys.h"





       
#include "../kuhl_m_dpapi.h"
#include "../../kuhl_m_crypto.h"
#include "../modules/kull_m_key.h"

NTSTATUS kuhl_m_dpapi_keys_cng(int argc, wchar_t * argv[]);
NTSTATUS kuhl_m_dpapi_keys_capi(int argc, wchar_t * argv[]);
NTSTATUS kuhl_m_dpapi_keys_tpm(int argc, wchar_t * argv[]);

void kuhl_m_dpapi_keys_tpm_descr(LPCVOID data, DWORD dwData);

typedef struct _KUHL_M_DPAPI_KEYS_TPM_TLV {
 DWORD Tag;
 DWORD Length;
 BYTE Data[ANYSIZE_ARRAY];
} KUHL_M_DPAPI_KEYS_TPM_TLV, *PKUHL_M_DPAPI_KEYS_TPM_TLV;
