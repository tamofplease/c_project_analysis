# 1 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/mimikatz/modules/crypto/kuhl_m_crypto_pki.h"





       
#include "../kuhl_m.h"
#include "../../../modules/kull_m_string.h"
#include "../../../modules/kull_m_crypto.h"


typedef struct _KIWI_KEY_INFO {
 CRYPT_KEY_PROV_INFO keyInfos;
 LPSTR pin;
 DWORD dwKeyFlags;
 WORD wKeySize;
 HCRYPTPROV hProv;
} KIWI_KEY_INFO, *PKIWI_KEY_INFO;

typedef struct _KIWI_CERT_INFO {
 LPFILETIME notbefore;
 LPFILETIME notafter;
 LPCWSTR cn;
 LPCWSTR ou;
 LPCWSTR o;
 LPCWSTR c;
 LPCWSTR sn;
 WORD ku;
 LPSTR algorithm;
 BOOL isAC;
 PCERT_EXTENSION eku;
 PCERT_EXTENSION san;
 PCERT_EXTENSION cdp;
} KIWI_CERT_INFO, *PKIWI_CERT_INFO;

typedef struct _KIWI_CRL_INFO {
 LPFILETIME thisupdate;
 LPFILETIME nextupdate;
 LPSTR algorithm;
 int crlnumber;

} KIWI_CRL_INFO, *PKIWI_CRL_INFO;

typedef struct _KIWI_SIGNER {
 HCRYPTPROV_OR_NCRYPT_KEY_HANDLE hProv;
 DWORD dwKeySpec;
 FILETIME NotBefore;
 FILETIME NotAfter;
 CERT_NAME_BLOB Subject;
} KIWI_SIGNER, *PKIWI_SIGNER;

PWSTR kuhl_m_crypto_pki_getCertificateName(PCERT_NAME_BLOB blob);

NTSTATUS kuhl_m_crypto_c_sc_auth(int argc, wchar_t * argv[]);
BOOL kuhl_m_crypto_c_sc_auth_quickEncode(__in LPCSTR lpszStructType, __in const void *pvStructInfo, PDATA_BLOB data);
