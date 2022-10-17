# 0 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/mimidrv/ioctl.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/mimidrv/ioctl.h"
# 38 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/mimidrv/ioctl.h"
typedef struct _PS_PROTECTION {
 UCHAR Type : 3;
 UCHAR Audit : 1;
 UCHAR Signer: 4;
} PS_PROTECTION, *PPS_PROTECTION;

typedef struct _KIWI_PROCESS_SIGNATURE_PROTECTION {
 UCHAR SignatureLevel;
 UCHAR SectionSignatureLevel;
 PS_PROTECTION Protection;
} KIWI_PROCESS_SIGNATURE_PROTECTION, *PKIWI_PROCESS_SIGNATURE_PROTECTION;

typedef struct _MIMIDRV_PROCESS_PROTECT_INFORMATION {
 ULONG processId;
 KIWI_PROCESS_SIGNATURE_PROTECTION SignatureProtection;
} MIMIDRV_PROCESS_PROTECT_INFORMATION, *PMIMIDRV_PROCESS_PROTECT_INFORMATION;

typedef struct _MIMIDRV_PROCESS_TOKEN_FROM_TO {
 ULONG fromProcessId;
 ULONG toProcessId;
} MIMIDRV_PROCESS_TOKEN_FROM_TO, *PMIMIDRV_PROCESS_TOKEN_FROM_TO;

typedef DWORD (NTAPI * PTHREAD_START_ROUTINE)(PVOID lpThreadParameter);
typedef PTHREAD_START_ROUTINE LPTHREAD_START_ROUTINE;

typedef struct _MIMIDRV_THREAD_INFO {
 PTHREAD_START_ROUTINE pRoutine;
 PVOID pArg;
} MIMIDRV_THREAD_INFO, *PMIMIDRV_THREAD_INFO;

typedef struct _MIMIDRV_VARIABLE_NAME_AND_VALUE {
    ULONG ValueOffset;
    ULONG ValueLength;
    ULONG Attributes;
    GUID VendorGuid;
    WCHAR Name[ANYSIZE_ARRAY];

} MIMIDRV_VARIABLE_NAME_AND_VALUE, *PMIMIDRV_VARIABLE_NAME_AND_VALUE;
