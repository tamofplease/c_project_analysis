# 1 "project/mimikatz/mimikatz/modules/dpapi/packages/kuhl_m_dpapi_rdg.h"





       
#include "../kuhl_m_dpapi.h"
#include "../../../../modules/kull_m_xml.h"
#include "../../../../modules/kull_m_string.h"

NTSTATUS kuhl_m_dpapi_rdg(int argc, wchar_t * argv[]);

void kuhl_m_dpapi_rdg_CredentialsProfile(DWORD level, IXMLDOMNode *pNode, int argc, wchar_t * argv[]);
void kuhl_m_dpapi_rdg_Groups(DWORD level, IXMLDOMNode *pNode, int argc, wchar_t * argv[]);
void kuhl_m_dpapi_rdg_Servers(DWORD level, IXMLDOMNode *pNode, int argc, wchar_t * argv[]);
void kuhl_m_dpapi_rdg_LogonCredentials(DWORD level, IXMLDOMNode *pNode, int argc, wchar_t * argv[]);
void kuhl_m_dpapi_rdg_Credentials(DWORD level, IXMLDOMNode *pNode, int argc, wchar_t * argv[]);
