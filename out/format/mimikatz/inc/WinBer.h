# 1 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/WinBer.h"
# 26 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/WinBer.h"
#ifndef _WINBER_DEFINED_
#define _WINBER_DEFINED_ 

#if _MSC_VER > 1000
       
#endif

#ifdef __cplusplus
extern "C" {
#endif

#if !defined(_WINBER_)
#define WINBERAPI DECLSPEC_IMPORT
#else

#define WINBERAPI 
#endif

#ifndef BERAPI
#define BERAPI __cdecl
#endif

#define LBER_ERROR 0xffffffffL
#define LBER_DEFAULT 0xffffffffL

typedef unsigned int ber_tag_t;
typedef int ber_int_t;
typedef unsigned int ber_uint_t;
typedef unsigned int ber_len_t;
typedef int ber_slen_t;






WINBERAPI BerElement * BERAPI ber_init( BERVAL *pBerVal );
# 71 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/WinBer.h"
WINBERAPI VOID BERAPI ber_free( BerElement *pBerElement, INT fbuf );







WINBERAPI VOID BERAPI ber_bvfree( BERVAL *pBerVal );






WINBERAPI VOID BERAPI ber_bvecfree( PBERVAL *pBerVal );





WINBERAPI BERVAL * BERAPI ber_bvdup( BERVAL *pBerVal );
# 103 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/WinBer.h"
WINBERAPI BerElement * BERAPI ber_alloc_t( INT options );
# 119 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/WinBer.h"
WINBERAPI ULONG BERAPI ber_skip_tag( BerElement *pBerElement, ULONG *pLen );
# 130 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/WinBer.h"
WINBERAPI ULONG BERAPI ber_peek_tag( BerElement *pBerElement, ULONG *pLen);
# 141 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/WinBer.h"
WINBERAPI ULONG BERAPI ber_first_element( BerElement *pBerElement, ULONG *pLen, __out CHAR **ppOpaque );
# 151 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/WinBer.h"
WINBERAPI ULONG BERAPI ber_next_element( BerElement *pBerElement, ULONG *pLen, __in CHAR *opaque );
# 160 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/WinBer.h"
WINBERAPI INT BERAPI ber_flatten( BerElement *pBerElement, PBERVAL *pBerVal );
# 243 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/WinBer.h"
WINBERAPI INT BERAPI ber_printf( BerElement *pBerElement, __in PCHAR fmt, ... );
# 335 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/WinBer.h"
WINBERAPI ULONG BERAPI ber_scanf( BerElement *pBerElement, __in PCHAR fmt, ... );


#ifdef __cplusplus
}
#endif


#endif
