# 1 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/mimilib/kdns.c"





#include "kdns.h"

DWORD WINAPI kdns_DnsPluginInitialize(PLUGIN_ALLOCATOR_FUNCTION pDnsAllocateFunction, PLUGIN_FREE_FUNCTION pDnsFreeFunction)
{
 return ERROR_SUCCESS;
}

DWORD WINAPI kdns_DnsPluginCleanup()
{
 return ERROR_SUCCESS;
}

DWORD WINAPI kdns_DnsPluginQuery(PSTR pszQueryName, WORD wQueryType, PSTR pszRecordOwnerName, PDB_RECORD *ppDnsRecordListHead)
{
 FILE * kdns_logfile;
#pragma warning(push)
#pragma warning(disable:4996)
 if(kdns_logfile = _wfopen(L"kiwidns.log", L"a"))
#pragma warning(pop)
 {
  klog(kdns_logfile, L"%S (%hu)\n", pszQueryName, wQueryType);
  fclose(kdns_logfile);
 }
 return ERROR_SUCCESS;
}
