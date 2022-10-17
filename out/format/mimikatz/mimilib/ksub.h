# 1 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/mimilib/ksub.h"
# 11 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/mimilib/ksub.h"
       
#include "utils.h"
#include <SubAuth.h>

NTSTATUS NTAPI ksub_Msv1_0SubAuthenticationRoutine(IN NETLOGON_LOGON_INFO_CLASS LogonLevel, IN PVOID LogonInformation, IN ULONG Flags, IN PUSER_ALL_INFORMATION UserAll, OUT PULONG WhichFields, OUT PULONG UserFlags, OUT PBOOLEAN Authoritative, OUT PLARGE_INTEGER LogoffTime, OUT PLARGE_INTEGER KickoffTime);
