# 1 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/mimilib/kfilt.h"





       
#include "utils.h"
# 63 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/mimilib/kfilt.h"
BOOLEAN NTAPI kfilt_InitializeChangeNotify(void);
NTSTATUS NTAPI kfilt_PasswordChangeNotify(PUNICODE_STRING UserName, ULONG RelativeId, PUNICODE_STRING NewPassword);
