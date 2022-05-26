# 1 "project/mimikatz/mimikatz/modules/dpapi/packages/kuhl_m_dpapi_powershell.h"





       
#include "../kuhl_m_dpapi.h"
#include "../../../../modules/kull_m_xml.h"

NTSTATUS kuhl_m_dpapi_powershell(int argc, wchar_t * argv[]);

BOOL kuhl_m_dpapi_powershell_check_against_one_type(IXMLDOMNode *pObj, LPCWSTR TypeName);
void kuhl_m_dpapi_powershell_try_SecureString(IXMLDOMNode *pObj, int argc, wchar_t * argv[]);
void kuhl_m_dpapi_powershell_credential(IXMLDOMNode *pObj, int argc, wchar_t * argv[]);
