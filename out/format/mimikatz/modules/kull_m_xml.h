# 1 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/modules/kull_m_xml.h"





       
#include "globals.h"
#include <msxml2.h>
#include "kull_m_string.h"

IXMLDOMDocument * kull_m_xml_CreateAndInitDOM();
void kull_m_xml_ReleaseDom(IXMLDOMDocument *pDoc);

BOOL kull_m_xml_LoadXMLFile(IXMLDOMDocument *pXMLDom, PCWSTR filename);
BOOL kull_m_xml_SaveXMLFile(IXMLDOMDocument *pXMLDom, PCWSTR filename);

wchar_t * kull_m_xml_getAttribute(IXMLDOMNode *pNode, PCWSTR name);
wchar_t * kull_m_xml_getTextValue(IXMLDOMNode *pNode, PCWSTR name);
