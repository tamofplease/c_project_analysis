# 1 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/mimilib/kssp.h"





       
#include "utils.h"
#include <sspi.h>
#include <ntsecpkg.h>

NTSTATUS NTAPI kssp_SpLsaModeInitialize(ULONG LsaVersion, PULONG PackageVersion, PSECPKG_FUNCTION_TABLE *ppTables, PULONG pcTables);
NTSTATUS NTAPI kssp_SpInitialize(ULONG_PTR PackageId, PSECPKG_PARAMETERS Parameters, PLSA_SECPKG_FUNCTION_TABLE FunctionTable);
NTSTATUS NTAPI kssp_SpGetInfo(PSecPkgInfoW PackageInfo);
NTSTATUS NTAPI kssp_SpShutDown(void);
NTSTATUS NTAPI kssp_SpAcceptCredentials(SECURITY_LOGON_TYPE LogonType, PUNICODE_STRING AccountName, PSECPKG_PRIMARY_CRED PrimaryCredentials, PSECPKG_SUPPLEMENTAL_CRED SupplementalCredentials);
