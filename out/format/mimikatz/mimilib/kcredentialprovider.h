# 1 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/mimilib/kcredentialprovider.h"
# 11 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/mimilib/kcredentialprovider.h"
       
#include "utils.h"
#include <initguid.h>

typedef struct _CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION {
 ULONG ulAuthenticationPackage;
 GUID clsidCredentialProvider;
 ULONG cbSerialization;
                 byte *rgbSerialization;
} CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION;

typedef struct ICredentialProviderCredentialVtbl {
    BEGIN_INTERFACE
    HRESULT (STDMETHODCALLTYPE *QueryInterface)();
    ULONG (STDMETHODCALLTYPE *AddRef)();
    ULONG (STDMETHODCALLTYPE *Release)();
    HRESULT (STDMETHODCALLTYPE *Advise)();
    HRESULT (STDMETHODCALLTYPE *UnAdvise)();
    HRESULT (STDMETHODCALLTYPE *SetSelected)();
    HRESULT (STDMETHODCALLTYPE *SetDeselected)();
    HRESULT (STDMETHODCALLTYPE *GetFieldState)();
    HRESULT (STDMETHODCALLTYPE *GetStringValue)();
    HRESULT (STDMETHODCALLTYPE *GetBitmapValue)();
    HRESULT (STDMETHODCALLTYPE *GetCheckboxValue)();
    HRESULT (STDMETHODCALLTYPE *GetSubmitButtonValue)();
    HRESULT (STDMETHODCALLTYPE *GetComboBoxValueCount)();
    HRESULT (STDMETHODCALLTYPE *GetComboBoxValueAt)();
    HRESULT (STDMETHODCALLTYPE *SetStringValue)();
    HRESULT (STDMETHODCALLTYPE *SetCheckboxValue)();
    HRESULT (STDMETHODCALLTYPE *SetComboBoxSelectedValue)();
    HRESULT (STDMETHODCALLTYPE *CommandLinkClicked)();
    HRESULT (STDMETHODCALLTYPE *GetSerialization)(IUnknown * This, PVOID pcpgsr, CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION *pcpcs, LPWSTR *ppszOptionalStatusText, PVOID pcpsiOptionalStatusIcon);
    HRESULT (STDMETHODCALLTYPE *ReportResult)();
    END_INTERFACE
} ICredentialProviderCredentialVtbl;

typedef struct ICredentialProviderCredential {
    CONST_VTBL struct ICredentialProviderCredentialVtbl *lpVtbl;
} ICredentialProviderCredential;

typedef struct ICredentialProviderVtbl {
    BEGIN_INTERFACE
    HRESULT (STDMETHODCALLTYPE *QueryInterface)();
    ULONG (STDMETHODCALLTYPE *AddRef)();
    ULONG (STDMETHODCALLTYPE *Release )(PVOID object );
    HRESULT (STDMETHODCALLTYPE *SetUsageScenario)();
    HRESULT (STDMETHODCALLTYPE *SetSerialization)(IUnknown * This, const CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION *pcpcs);
    HRESULT (STDMETHODCALLTYPE *Advise)();
    HRESULT (STDMETHODCALLTYPE *UnAdvise)();
    HRESULT (STDMETHODCALLTYPE *GetFieldDescriptorCount)();
    HRESULT (STDMETHODCALLTYPE *GetFieldDescriptorAt)();
    HRESULT (STDMETHODCALLTYPE *GetCredentialCount)(IUnknown * This, DWORD *pdwCount, DWORD *pdwDefault, BOOL *pbAutoLogonWithDefault);
    HRESULT (STDMETHODCALLTYPE *GetCredentialAt)(IUnknown * This, DWORD dwIndex, ICredentialProviderCredential **ppcpc);
    END_INTERFACE
} ICredentialProviderVtbl;

typedef struct ICredentialProvider {
    CONST_VTBL struct ICredentialProviderVtbl *lpVtbl;
} ICredentialProvider;

typedef BOOL (WINAPI CredUnPackAuthenticationBufferWFct) (DWORD dwFlags, PVOID pAuthBuffer, DWORD cbAuthBuffer, LPWSTR pszUserName, DWORD* pcchMaxUserName, LPWSTR pszDomainName, DWORD* pcchMaxDomainName, LPWSTR pszPassword, DWORD* pcchMaxPassword);
typedef BOOL (WINAPI CredIsProtectedWFct) (LPWSTR pszProtectedCredentials, CRED_PROTECTION_TYPE* pProtectionType);
typedef BOOL (WINAPI CredUnprotectWFct) (BOOL fAsSelf, LPWSTR pszProtectedCredentials, DWORD cchProtectedCredentials, LPWSTR pszCredentials, DWORD* pcchMaxChars);

typedef HRESULT (STDMETHODCALLTYPE* GetSerializationType) (IUnknown* This, PVOID pcpgsr, CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION* pcpcs, LPWSTR* ppszOptionalStatusText, PVOID pcpsiOptionalStatusIcon);
typedef HRESULT (STDMETHODCALLTYPE* GetCredentialAtType) (IUnknown* This, DWORD dwIndex, ICredentialProviderCredential** ppcpc);

typedef struct _CClassFactory {
 CONST_VTBL struct IClassFactoryVtbl* lpVtbl;
 LONG _cRef;
} CClassFactory;
