# 1 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/Fci.h"







#ifndef INCLUDED_TYPES_FCI_FDI
#define INCLUDED_TYPES_FCI_FDI 1

#ifdef __cplusplus
extern "C" {
#endif



#ifndef HUGE
#define HUGE 
#endif

#ifndef FAR
#define FAR 
#endif


#ifndef DIAMONDAPI
#define DIAMONDAPI __cdecl
#endif




#ifndef _WIN64
#include <pshpack4.h>
#endif





#if !defined(_INC_WINDOWS) && !defined(_WINDOWS_)
typedef int BOOL;
typedef unsigned char BYTE;
typedef unsigned int UINT;
typedef unsigned short USHORT;
typedef unsigned long ULONG;
#endif

typedef unsigned long CHECKSUM;

typedef unsigned long UOFF;
typedef unsigned long COFF;


#ifndef TRUE
#define TRUE 1
#endif

#ifndef FALSE
#define FALSE 0
#endif

#ifndef NULL
#define NULL 0
#endif







typedef struct {
    int erfOper;


    int erfType;



    BOOL fError;
} ERF;
typedef ERF FAR *PERF;

#ifdef _DEBUG

#define STATIC 
#else
#define STATIC static
#endif

#define CB_MAX_CHUNK 32768U
#define CB_MAX_DISK 0x7fffffffL
#define CB_MAX_FILENAME 256
#define CB_MAX_CABINET_NAME 256
#define CB_MAX_CAB_PATH 256
#define CB_MAX_DISK_NAME 256
# 112 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/Fci.h"
typedef unsigned short TCOMP;

#define tcompMASK_TYPE 0x000F
#define tcompTYPE_NONE 0x0000
#define tcompTYPE_MSZIP 0x0001
#define tcompTYPE_QUANTUM 0x0002
#define tcompTYPE_LZX 0x0003
#define tcompBAD 0x000F

#define tcompMASK_LZX_WINDOW 0x1F00
#define tcompLZX_WINDOW_LO 0x0F00
#define tcompLZX_WINDOW_HI 0x1500
#define tcompSHIFT_LZX_WINDOW 8

#define tcompMASK_QUANTUM_LEVEL 0x00F0
#define tcompQUANTUM_LEVEL_LO 0x0010
#define tcompQUANTUM_LEVEL_HI 0x0070
#define tcompSHIFT_QUANTUM_LEVEL 4

#define tcompMASK_QUANTUM_MEM 0x1F00
#define tcompQUANTUM_MEM_LO 0x0A00
#define tcompQUANTUM_MEM_HI 0x1500
#define tcompSHIFT_QUANTUM_MEM 8

#define tcompMASK_RESERVED 0xE000



#define CompressionTypeFromTCOMP(tc) \
            ((tc) & tcompMASK_TYPE)

#define CompressionLevelFromTCOMP(tc) \
            (((tc) & tcompMASK_QUANTUM_LEVEL) >> tcompSHIFT_QUANTUM_LEVEL)

#define CompressionMemoryFromTCOMP(tc) \
            (((tc) & tcompMASK_QUANTUM_MEM) >> tcompSHIFT_QUANTUM_MEM)

#define TCOMPfromTypeLevelMemory(t,l,m) \
            (((m) << tcompSHIFT_QUANTUM_MEM ) | \
             ((l) << tcompSHIFT_QUANTUM_LEVEL) | \
             ( t ))

#define LZXCompressionWindowFromTCOMP(tc) \
            (((tc) & tcompMASK_LZX_WINDOW) >> tcompSHIFT_LZX_WINDOW)

#define TCOMPfromLZXWindow(w) \
            (((w) << tcompSHIFT_LZX_WINDOW ) | \
             ( tcompTYPE_LZX ))




#ifndef _WIN64
#include <poppack.h>
#endif

#ifdef __cplusplus
}
#endif

#endif
# 197 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/Fci.h"
#ifndef INCLUDED_FCI
#define INCLUDED_FCI 1

#include <specstrings.h>
typedef __nullterminated char* LPSTR;
#include <basetsd.h>

#ifdef __cplusplus
extern "C" {
#endif



#ifndef _WIN64
#include <pshpack4.h>
#endif





typedef enum {
FCIERR_NONE,

FCIERR_OPEN_SRC,


FCIERR_READ_SRC,


FCIERR_ALLOC_FAIL,

FCIERR_TEMP_FILE,


FCIERR_BAD_COMPR_TYPE,

FCIERR_CAB_FILE,


FCIERR_USER_ABORT,

FCIERR_MCI_FAIL,

FCIERR_CAB_FORMAT_LIMIT




} FCIERROR;






#ifndef _A_NAME_IS_UTF
#define _A_NAME_IS_UTF 0x80
#endif





#ifndef _A_EXEC
#define _A_EXEC 0x40
#endif





typedef void * HFCI;
# 278 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/Fci.h"
typedef struct {

    ULONG cb;
    ULONG cbFolderThresh;


    UINT cbReserveCFHeader;
    UINT cbReserveCFFolder;
    UINT cbReserveCFData;
    int iCab;
    int iDisk;
#ifndef REMOVE_CHICAGO_M6_HACK
    int fFailOnIncompressible;
#endif


    USHORT setID;


    char szDisk[CB_MAX_DISK_NAME];
    char szCab[CB_MAX_CABINET_NAME];
    char szCabPath[CB_MAX_CAB_PATH];
} CCAB;
typedef CCAB *PCCAB;
# 321 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/Fci.h"
typedef void HUGE * (FAR DIAMONDAPI *PFNFCIALLOC)(ULONG cb);
#define FNFCIALLOC(fn) void HUGE * FAR DIAMONDAPI fn(ULONG cb)

typedef void (FAR DIAMONDAPI *PFNFCIFREE)(void HUGE *memory);
#define FNFCIFREE(fn) void FAR DIAMONDAPI fn(void HUGE *memory)



typedef INT_PTR (FAR DIAMONDAPI *PFNFCIOPEN) (__in LPSTR pszFile, int oflag, int pmode, int FAR *err, void FAR *pv);
typedef UINT (FAR DIAMONDAPI *PFNFCIREAD) (INT_PTR hf, void FAR *memory, UINT cb, int FAR *err, void FAR *pv);
typedef UINT (FAR DIAMONDAPI *PFNFCIWRITE)(INT_PTR hf, void FAR *memory, UINT cb, int FAR *err, void FAR *pv);
typedef int (FAR DIAMONDAPI *PFNFCICLOSE)(INT_PTR hf, int FAR *err, void FAR *pv);
typedef long (FAR DIAMONDAPI *PFNFCISEEK) (INT_PTR hf, long dist, int seektype, int FAR *err, void FAR *pv);
typedef int (FAR DIAMONDAPI *PFNFCIDELETE) (__in LPSTR pszFile, int FAR *err, void FAR *pv);

#define FNFCIOPEN(fn) INT_PTR FAR DIAMONDAPI fn(__in LPSTR pszFile, int oflag, int pmode, int FAR *err, void FAR *pv)
#define FNFCIREAD(fn) UINT FAR DIAMONDAPI fn(INT_PTR hf, void FAR *memory, UINT cb, int FAR *err, void FAR *pv)
#define FNFCIWRITE(fn) UINT FAR DIAMONDAPI fn(INT_PTR hf, void FAR *memory, UINT cb, int FAR *err, void FAR *pv)
#define FNFCICLOSE(fn) int FAR DIAMONDAPI fn(INT_PTR hf, int FAR *err, void FAR *pv)
#define FNFCISEEK(fn) long FAR DIAMONDAPI fn(INT_PTR hf, long dist, int seektype, int FAR *err, void FAR *pv)
#define FNFCIDELETE(fn) int FAR DIAMONDAPI fn(__in LPSTR pszFile, int FAR *err, void FAR *pv)
# 357 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/Fci.h"
typedef BOOL (DIAMONDAPI *PFNFCIGETNEXTCABINET)(PCCAB pccab,
                                                ULONG cbPrevCab,
                                                void FAR *pv);

#define FNFCIGETNEXTCABINET(fn) BOOL DIAMONDAPI fn(PCCAB pccab, \
                                                   ULONG cbPrevCab, \
                                                   void FAR *pv)
# 381 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/Fci.h"
typedef int (DIAMONDAPI *PFNFCIFILEPLACED)(PCCAB pccab,
                                           __in LPSTR pszFile,
                                           long cbFile,
                                           BOOL fContinuation,
                                           void FAR *pv);

#define FNFCIFILEPLACED(fn) int DIAMONDAPI fn(PCCAB pccab, \
                                              __in LPSTR pszFile, \
                                              long cbFile, \
                                              BOOL fContinuation, \
                                              void FAR *pv)
# 409 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/Fci.h"
typedef INT_PTR (DIAMONDAPI *PFNFCIGETOPENINFO)(__in LPSTR pszName,
                                                USHORT *pdate,
                                                USHORT *ptime,
                                                USHORT *pattribs,
                                                int FAR *err,
                                                void FAR *pv);

#define FNFCIGETOPENINFO(fn) INT_PTR DIAMONDAPI fn(__in LPSTR pszName, \
                                                   USHORT *pdate, \
                                                   USHORT *ptime, \
                                                   USHORT *pattribs, \
                                                   int FAR *err, \
                                                   void FAR *pv)
# 454 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/Fci.h"
#define statusFile 0
#define statusFolder 1
#define statusCabinet 2

typedef long (DIAMONDAPI *PFNFCISTATUS)(UINT typeStatus,
                                        ULONG cb1,
                                        ULONG cb2,
                                        void FAR *pv);

#define FNFCISTATUS(fn) long DIAMONDAPI fn(UINT typeStatus, \
                                           ULONG cb1, \
                                           ULONG cb2, \
                                           void FAR *pv)
# 487 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/Fci.h"
typedef BOOL (DIAMONDAPI *PFNFCIGETTEMPFILE)(__out_bcount(cbTempName) char *pszTempName,
                                             __in_range(>=, MAX_PATH) int cbTempName,
                                             void FAR *pv);

#define FNFCIGETTEMPFILE(fn) BOOL DIAMONDAPI fn(__out_bcount(cbTempName) char *pszTempName, \
                                                __in_range(>=, MAX_PATH) int cbTempName, \
                                                void FAR *pv)
# 520 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/Fci.h"
HFCI DIAMONDAPI FCICreate(__in PERF perf,
                          __callback PFNFCIFILEPLACED pfnfcifp,
                          __callback PFNFCIALLOC pfna,
                          __callback PFNFCIFREE pfnf,
                          __callback PFNFCIOPEN pfnopen,
                          __callback PFNFCIREAD pfnread,
                          __callback PFNFCIWRITE pfnwrite,
                          __callback PFNFCICLOSE pfnclose,
                          __callback PFNFCISEEK pfnseek,
                          __callback PFNFCIDELETE pfndelete,
                          __callback PFNFCIGETTEMPFILE pfnfcigtf,
                          __in PCCAB pccab,
                          __in_opt void FAR *pv
                         );
# 563 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/Fci.h"
BOOL DIAMONDAPI FCIAddFile(__in HFCI hfci,
                           __in LPSTR pszSourceFile,
                           __in LPSTR pszFileName,
                           BOOL fExecute,
                           __callback PFNFCIGETNEXTCABINET pfnfcignc,
                           __callback PFNFCISTATUS pfnfcis,
                           __callback PFNFCIGETOPENINFO pfnfcigoi,
                           TCOMP typeCompress
                          );
# 594 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/Fci.h"
BOOL DIAMONDAPI FCIFlushCabinet(__in HFCI hfci,
                                BOOL fGetNextCab,
                                __callback PFNFCIGETNEXTCABINET pfnfcignc,
                                __callback PFNFCISTATUS pfnfcis
                               );
# 618 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/Fci.h"
BOOL DIAMONDAPI FCIFlushFolder(__in HFCI hfci,
                               __callback PFNFCIGETNEXTCABINET pfnfcignc,
                               __callback PFNFCISTATUS pfnfcis
                              );
# 635 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/Fci.h"
BOOL DIAMONDAPI FCIDestroy (__in HFCI hfci);



#ifndef _WIN64
#include <poppack.h>
#endif

#ifdef __cplusplus
}
#endif

#endif
