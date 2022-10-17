# 0 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/WinBer.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/WinBer.h"
# 51 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/WinBer.h"
typedef unsigned int ber_tag_t;
typedef int ber_int_t;
typedef unsigned int ber_uint_t;
typedef unsigned int ber_len_t;
typedef int ber_slen_t;






DECLSPEC_IMPORT BerElement * __cdecl ber_init( BERVAL *pBerVal );
# 71 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/WinBer.h"
DECLSPEC_IMPORT VOID __cdecl ber_free( BerElement *pBerElement, INT fbuf );







DECLSPEC_IMPORT VOID __cdecl ber_bvfree( BERVAL *pBerVal );






DECLSPEC_IMPORT VOID __cdecl ber_bvecfree( PBERVAL *pBerVal );





DECLSPEC_IMPORT BERVAL * __cdecl ber_bvdup( BERVAL *pBerVal );
# 103 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/WinBer.h"
DECLSPEC_IMPORT BerElement * __cdecl ber_alloc_t( INT options );
# 119 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/WinBer.h"
DECLSPEC_IMPORT ULONG __cdecl ber_skip_tag( BerElement *pBerElement, ULONG *pLen );
# 130 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/WinBer.h"
DECLSPEC_IMPORT ULONG __cdecl ber_peek_tag( BerElement *pBerElement, ULONG *pLen);
# 141 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/WinBer.h"
DECLSPEC_IMPORT ULONG __cdecl ber_first_element( BerElement *pBerElement, ULONG *pLen, __out CHAR **ppOpaque );
# 151 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/WinBer.h"
DECLSPEC_IMPORT ULONG __cdecl ber_next_element( BerElement *pBerElement, ULONG *pLen, __in CHAR *opaque );
# 160 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/WinBer.h"
DECLSPEC_IMPORT INT __cdecl ber_flatten( BerElement *pBerElement, PBERVAL *pBerVal );
# 243 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/WinBer.h"
DECLSPEC_IMPORT INT __cdecl ber_printf( BerElement *pBerElement, __in PCHAR fmt, ... );
# 335 "/Users/tamofplease/Workspace/research/docker-exp/workspace/mimikatz/inc/WinBer.h"
DECLSPEC_IMPORT ULONG __cdecl ber_scanf( BerElement *pBerElement, __in PCHAR fmt, ... );
