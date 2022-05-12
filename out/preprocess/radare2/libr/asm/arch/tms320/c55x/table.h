# 0 "project/radare2/libr/asm/arch/tms320/c55x/table.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/libr/asm/arch/tms320/c55x/table.h"
static insn_head_t c55x_list[] = {
{
 .byte = 0x00,
 .size = 0x03,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,CCCCCCC), INSN_FLAG(16,k8), LIST_END },
  .syntax = INSN_SYNTAX(rptcc k8, cond),
 },
},
{
 .byte = 0x02,
 .size = 0x03,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,CCCCCCC), LIST_END },
  .syntax = INSN_SYNTAX(retcc cond),
 },
},
{
 .byte = 0x04,
 .size = 0x03,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,CCCCCCC), INSN_FLAG(16,L8), LIST_END },
  .syntax = INSN_SYNTAX(bcc L8, cond),
 },
},
{
 .byte = 0x06,
 .size = 0x03,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,L16), LIST_END },
  .syntax = INSN_SYNTAX(b L16),
 },
},
{
 .byte = 0x08,
 .size = 0x03,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,L16), LIST_END },
  .syntax = INSN_SYNTAX(call L16),
 },
},
{
 .byte = 0x0c,
 .size = 0x03,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,k16), LIST_END },
  .syntax = INSN_SYNTAX(rpt k16),
 },
},
{
 .byte = 0x0e,
 .size = 0x03,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,l16), LIST_END },
  .syntax = INSN_SYNTAX(rptb pmad),
 },
},
{
 .byte = 0x10,
 .size = 0x03,
 .insn = {
  .i_list = (insn_item_t []) {
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,4,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(12,SS), INSN_FLAG(14,DD), INSN_FLAG(16,SHIFTW), LIST_END },
    .syntax = INSN_SYNTAX(and ACx << #SHIFTW[, ACy]),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,4,1), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(12,SS), INSN_FLAG(14,DD), INSN_FLAG(16,SHIFTW), LIST_END },
    .syntax = INSN_SYNTAX(or ACx << #SHIFTW[, ACy]),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,4,2), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(12,SS), INSN_FLAG(14,DD), INSN_FLAG(16,SHIFTW), LIST_END },
    .syntax = INSN_SYNTAX(xor ACx << #SHIFTW[, ACy]),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,4,3), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(12,SS), INSN_FLAG(14,DD), INSN_FLAG(16,SHIFTW), LIST_END },
    .syntax = INSN_SYNTAX(add ACx << #SHIFTW, ACy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,4,4), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(12,SS), INSN_FLAG(14,DD), INSN_FLAG(16,SHIFTW), LIST_END },
    .syntax = INSN_SYNTAX(sub ACx << #SHIFTW, ACy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,4,5), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(12,SS), INSN_FLAG(14,DD), INSN_FLAG(16,SHIFTW), LIST_END },
    .syntax = INSN_SYNTAX(sfts ACx, #SHIFTW[, ACy]),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,4,6), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(12,SS), INSN_FLAG(14,DD), INSN_FLAG(16,SHIFTW), LIST_END },
    .syntax = INSN_SYNTAX(sftsc ACx, #SHIFTW[, ACy]),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,4,7), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(12,SS), INSN_FLAG(14,DD), INSN_FLAG(16,SHIFTW), LIST_END },
    .syntax = INSN_SYNTAX(sftl ACx, #SHIFTW[, ACy]),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,4,8), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(12,SS), INSN_FLAG(20,dd), LIST_END },
    .syntax = INSN_SYNTAX(exp ACx, Tx),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,4,9), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(12,SS), INSN_FLAG(14,DD), INSN_FLAG(20,dd), LIST_END },
    .syntax = INSN_SYNTAX(mant ACx, ACy :: nexp ACx, Tx),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,4,10), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(12,SS), INSN_FLAG(16,t), INSN_FLAG(20,dd), INSN_FLAG(22,SS), LIST_END },
    .syntax = INSN_SYNTAX(bcnt ACx, ACy, TCx, Tx),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,4,12), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(12,SS), INSN_FLAG(14,DD), INSN_FLAG(20,DD), INSN_FLAG(22,SS), LIST_END },
    .syntax = INSN_SYNTAX(maxdiff ACx, ACy, ACz, ACw),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,4,13), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(12,SS), INSN_FLAG(14,DD), INSN_FLAG(16,r), INSN_FLAG(20,DD), INSN_FLAG(22,SS), LIST_END },
    .syntax = INSN_SYNTAX(dmaxdiff ACx, ACy, ACz, ACw, TRNx),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,4,14), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(12,SS), INSN_FLAG(14,DD), INSN_FLAG(20,DD), INSN_FLAG(22,SS), LIST_END },
    .syntax = INSN_SYNTAX(mindiff ACx, ACy, ACz, ACw),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,4,15), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(12,SS), INSN_FLAG(14,DD), INSN_FLAG(16,r), INSN_FLAG(20,DD), INSN_FLAG(22,SS), LIST_END },
    .syntax = INSN_SYNTAX(dmindiff ACx, ACy, ACz, ACw, TRNx),
   },
   LIST_END,
  },
  .m_list = NULL,
  .f_list = NULL,
  .syntax = NULL,
 },
},
{
 .byte = 0x12,
 .size = 0x03,
 .insn = {
  .i_list = (insn_item_t []) {
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,2,1), INSN_MASK(19,1,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(10,cc), INSN_FLAG(12,FSSS), INSN_FLAG(16,tt), INSN_FLAG(18,u), INSN_FLAG(20,FDDD), LIST_END },
    .syntax = INSN_SYNTAX(cmpand[u] src RELOP dst, TCy, TCx),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,2,1), INSN_MASK(19,1,1), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(10,cc), INSN_FLAG(12,FSSS), INSN_FLAG(16,tt), INSN_FLAG(18,u), INSN_FLAG(20,FDDD), LIST_END },
    .syntax = INSN_SYNTAX(cmpand[u] src RELOP dst, !TCy, TCx),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,2,2), INSN_MASK(19,1,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(10,cc), INSN_FLAG(12,FSSS), INSN_FLAG(16,tt), INSN_FLAG(18,u), INSN_FLAG(20,FDDD), LIST_END },
    .syntax = INSN_SYNTAX(cmpor[u] src RELOP dst, TCy, TCx),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,2,2), INSN_MASK(19,1,1), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(10,cc), INSN_FLAG(12,FSSS), INSN_FLAG(16,tt), INSN_FLAG(18,u), INSN_FLAG(20,FDDD), LIST_END },
    .syntax = INSN_SYNTAX(cmpor[u] src RELOP dst, !TCy, TCx),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,2,3), INSN_MASK(19,1,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(12,FSSS), INSN_FLAG(16,vv), INSN_FLAG(20,FDDD), LIST_END },
    .syntax = INSN_SYNTAX(rol BitOut, src, BitIn, dst),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,2,3), INSN_MASK(19,1,1), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(12,FSSS), INSN_FLAG(16,vv), INSN_FLAG(20,FDDD), LIST_END },
    .syntax = INSN_SYNTAX(ror BitIn, src, BitOut, dst),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,2,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(10,cc), INSN_FLAG(12,FSSS), INSN_FLAG(16,t), INSN_FLAG(18,u), INSN_FLAG(20,FDDD), LIST_END },
    .syntax = INSN_SYNTAX(cmp[u] src RELOP dst, TCx),
   },
   LIST_END,
  },
  .m_list = NULL,
  .f_list = NULL,
  .syntax = NULL,
 },
},
{
 .byte = 0x14,
 .size = 0x03,
 .insn = {
  .i_list = (insn_item_t []) {
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,4,1), INSN_MASK(16,4,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(12,XACS), INSN_FLAG(20,XACD), LIST_END },
    .syntax = INSN_SYNTAX(aadd XACsrc, XACdst),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,4,1), INSN_MASK(16,4,1), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(12,XACS), INSN_FLAG(20,XACD), LIST_END },
    .syntax = INSN_SYNTAX(amov XACsrc, XACdst),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,4,1), INSN_MASK(16,4,2), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(12,XACS), INSN_FLAG(20,XACD), LIST_END },
    .syntax = INSN_SYNTAX(asub XACsrc, XACdst),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,4,1), INSN_MASK(16,4,8), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(12,XACS), INSN_FLAG(20,XACD), LIST_END },
    .syntax = INSN_SYNTAX(aadd XACsrc, XACdst),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,4,1), INSN_MASK(16,4,9), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(12,XACS), INSN_FLAG(20,XACD), LIST_END },
    .syntax = INSN_SYNTAX(amov XACsrc, XACdst),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,4,1), INSN_MASK(16,4,10), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(12,XACS), INSN_FLAG(20,XACD), LIST_END },
    .syntax = INSN_SYNTAX(asub XACsrc, XACdst),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,4,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(12,FSSS), INSN_FLAG(20,FDDD), LIST_END },
    .syntax = INSN_SYNTAX(aadd TAx, TAy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,4,1), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(12,FSSS), INSN_FLAG(20,FDDD), LIST_END },
    .syntax = INSN_SYNTAX(amov TAx, TAy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,4,2), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(12,FSSS), INSN_FLAG(20,FDDD), LIST_END },
    .syntax = INSN_SYNTAX(asub TAx, TAy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,4,4), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,P8), INSN_FLAG(20,FDDD), LIST_END },
    .syntax = INSN_SYNTAX(aadd P8, TAx),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,4,5), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,P8), INSN_FLAG(20,FDDD), LIST_END },
    .syntax = INSN_SYNTAX(amov P8, TAx),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,4,6), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,P8), INSN_FLAG(20,FDDD), LIST_END },
    .syntax = INSN_SYNTAX(asub P8, TAx),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,4,8), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(12,FSSS), INSN_FLAG(20,FDDD), LIST_END },
    .syntax = INSN_SYNTAX(aadd TAx, TAy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,4,9), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(12,FSSS), INSN_FLAG(20,FDDD), LIST_END },
    .syntax = INSN_SYNTAX(amov TAx, TAy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,4,10), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(12,FSSS), INSN_FLAG(20,FDDD), LIST_END },
    .syntax = INSN_SYNTAX(asub TAx, TAy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,4,12), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,P8), INSN_FLAG(20,FDDD), LIST_END },
    .syntax = INSN_SYNTAX(aadd P8, TAx),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,4,13), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,P8), INSN_FLAG(20,FDDD), LIST_END },
    .syntax = INSN_SYNTAX(amov P8, TAx),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,4,14), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,P8), INSN_FLAG(20,FDDD), LIST_END },
    .syntax = INSN_SYNTAX(asub P8, TAx),
   },
   LIST_END,
  },
  .m_list = NULL,
  .f_list = NULL,
  .syntax = NULL,
 },
},
{
 .byte = 0x16,
 .size = 0x03,
 .insn = {
  .i_list = (insn_item_t []) {
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,4,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,k3), INSN_FLAG(20,k4), LIST_END },
    .syntax = INSN_SYNTAX(mov k7, dph),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,4,3), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,k5), INSN_FLAG(20,k4), LIST_END },
    .syntax = INSN_SYNTAX(mov k9, pdp),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,4,4), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,k8), INSN_FLAG(20,k4), LIST_END },
    .syntax = INSN_SYNTAX(mov k12, bk03),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,4,5), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,k8), INSN_FLAG(20,k4), LIST_END },
    .syntax = INSN_SYNTAX(mov k12, bk47),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,4,6), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,k8), INSN_FLAG(20,k4), LIST_END },
    .syntax = INSN_SYNTAX(mov k12, bkc),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,4,8), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,k8), INSN_FLAG(20,k4), LIST_END },
    .syntax = INSN_SYNTAX(mov k12, csr),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,4,9), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,k8), INSN_FLAG(20,k4), LIST_END },
    .syntax = INSN_SYNTAX(mov k12, brc0),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,4,10), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,k8), INSN_FLAG(20,k4), LIST_END },
    .syntax = INSN_SYNTAX(mov k12, brc1),
   },
   LIST_END,
  },
  .m_list = NULL,
  .f_list = NULL,
  .syntax = NULL,
 },
},
{
 .byte = 0x18,
 .size = 0x03,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,k8), INSN_FLAG(16,FSSS), INSN_FLAG(20,FDDD), LIST_END },
  .syntax = INSN_SYNTAX(and k8, src, dst),
 },
},
{
 .byte = 0x1a,
 .size = 0x03,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,k8), INSN_FLAG(16,FSSS), INSN_FLAG(20,FDDD), LIST_END },
  .syntax = INSN_SYNTAX(or k8, src, dst),
 },
},
{
 .byte = 0x1c,
 .size = 0x03,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,k8), INSN_FLAG(16,FSSS), INSN_FLAG(20,FDDD), LIST_END },
  .syntax = INSN_SYNTAX(xor k8, src, dst),
 },
},
{
 .byte = 0x1e,
 .size = 0x03,
 .insn = {
  .i_list = (insn_item_t []) {
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(17,1,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,K8), INSN_FLAG(16,R), INSN_FLAG(20,DD), INSN_FLAG(22,SS), LIST_END },
    .syntax = INSN_SYNTAX(mpyk[r] K8, [ACx,] ACy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(17,1,1), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,K8), INSN_FLAG(16,R), INSN_FLAG(18,ss), INSN_FLAG(20,DD), INSN_FLAG(22,SS), LIST_END },
    .syntax = INSN_SYNTAX(mack[r] Tx, K8, [ACx,] ACy),
   },
   LIST_END,
  },
  .m_list = NULL,
  .f_list = NULL,
  .syntax = NULL,
 },
},
{
 .byte = 0x20,
 .size = 0x01,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(0,E), LIST_END },
  .syntax = INSN_SYNTAX(nop),
 },
},
{
 .byte = 0x22,
 .size = 0x02,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,FDDD), INSN_FLAG(12,FSSS), LIST_END },
  .syntax = INSN_SYNTAX(mov src, dst),
 },
},
{
 .byte = 0x24,
 .size = 0x02,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,FDDD), INSN_FLAG(12,FSSS), LIST_END },
  .syntax = INSN_SYNTAX(add [src,] dst),
 },
},
{
 .byte = 0x26,
 .size = 0x02,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,FDDD), INSN_FLAG(12,FSSS), LIST_END },
  .syntax = INSN_SYNTAX(sub [src,] dst),
 },
},
{
 .byte = 0x28,
 .size = 0x02,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,FDDD), INSN_FLAG(12,FSSS), LIST_END },
  .syntax = INSN_SYNTAX(and src, dst),
 },
},
{
 .byte = 0x2a,
 .size = 0x02,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,FDDD), INSN_FLAG(12,FSSS), LIST_END },
  .syntax = INSN_SYNTAX(or src, dst),
 },
},
{
 .byte = 0x2c,
 .size = 0x02,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,FDDD), INSN_FLAG(12,FSSS), LIST_END },
  .syntax = INSN_SYNTAX(xor src, dst),
 },
},
{
 .byte = 0x2e,
 .size = 0x02,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,FDDD), INSN_FLAG(12,FSSS), LIST_END },
  .syntax = INSN_SYNTAX(max [src,] dst),
 },
},
{
 .byte = 0x30,
 .size = 0x02,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,FDDD), INSN_FLAG(12,FSSS), LIST_END },
  .syntax = INSN_SYNTAX(min [src,] dst),
 },
},
{
 .byte = 0x32,
 .size = 0x02,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,FDDD), INSN_FLAG(12,FSSS), LIST_END },
  .syntax = INSN_SYNTAX(abs [src,] dst),
 },
},
{
 .byte = 0x34,
 .size = 0x02,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,FDDD), INSN_FLAG(12,FSSS), LIST_END },
  .syntax = INSN_SYNTAX(neg [src,] dst),
 },
},
{
 .byte = 0x36,
 .size = 0x02,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,FDDD), INSN_FLAG(12,FSSS), LIST_END },
  .syntax = INSN_SYNTAX(not [src,] dst),
 },
},
{
 .byte = 0x38,
 .size = 0x02,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,FDDD), INSN_FLAG(12,FSSS), LIST_END },
  .syntax = INSN_SYNTAX(psh src1, src2),
 },
},
{
 .byte = 0x3a,
 .size = 0x02,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,FDDD), INSN_FLAG(12,FSSS), LIST_END },
  .syntax = INSN_SYNTAX(pop dst1, dst2),
 },
},
{
 .byte = 0x3c,
 .size = 0x02,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,FDDD), INSN_FLAG(12,k4), LIST_END },
  .syntax = INSN_SYNTAX(mov K4, dst),
 },
},
{
 .byte = 0x3e,
 .size = 0x02,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,FDDD), INSN_FLAG(12,k4), LIST_END },
  .syntax = INSN_SYNTAX(mov -K4, dst),
 },
},
{
 .byte = 0x40,
 .size = 0x02,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,FDDD), INSN_FLAG(12,k4), LIST_END },
  .syntax = INSN_SYNTAX(add K4, dst),
 },
},
{
 .byte = 0x42,
 .size = 0x02,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,FDDD), INSN_FLAG(12,k4), LIST_END },
  .syntax = INSN_SYNTAX(sub K4, dst),
 },
},
{
 .byte = 0x44,
 .size = 0x02,
 .insn = {
  .i_list = (insn_item_t []) {
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(12,4,8), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,FDDD), LIST_END },
    .syntax = INSN_SYNTAX(mov sp, TAx),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(12,4,9), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,FDDD), LIST_END },
    .syntax = INSN_SYNTAX(mov ssp, TAx),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(12,4,10), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,FDDD), LIST_END },
    .syntax = INSN_SYNTAX(mov cdp, TAx),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(12,4,12), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,FDDD), LIST_END },
    .syntax = INSN_SYNTAX(mov brc0, TAx),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(12,4,13), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,FDDD), LIST_END },
    .syntax = INSN_SYNTAX(mov brc1, TAx),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(12,4,14), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,FDDD), LIST_END },
    .syntax = INSN_SYNTAX(mov rptc, TAx),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(12,1,0), INSN_MASK(14,2,1), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,FDDD), LIST_END },
    .syntax = INSN_SYNTAX(sfts dst, #-1),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(12,1,1), INSN_MASK(14,2,1), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,FDDD), LIST_END },
    .syntax = INSN_SYNTAX(sfts dst, #1),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(14,2,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,FDDD), INSN_FLAG(12,SS), LIST_END },
    .syntax = INSN_SYNTAX(mov hi(ACx), TAx),
   },
   LIST_END,
  },
  .m_list = NULL,
  .f_list = NULL,
  .syntax = NULL,
 },
},
{
 .byte = 0x46,
 .size = 0x02,
 .insn = {
  .i_list = (insn_item_t []) {
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,4,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(12,k4), LIST_END },
    .syntax = INSN_SYNTAX(bclr K4, st0_55),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,4,1), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(12,k4), LIST_END },
    .syntax = INSN_SYNTAX(bset K4, st0_55),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,4,2), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(12,k4), LIST_END },
    .syntax = INSN_SYNTAX(bclr K4, st1_55),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,4,3), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(12,k4), LIST_END },
    .syntax = INSN_SYNTAX(bset K4, st1_55),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,4,4), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(12,k4), LIST_END },
    .syntax = INSN_SYNTAX(bclr K4, st2_55),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,4,5), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(12,k4), LIST_END },
    .syntax = INSN_SYNTAX(bset K4, st2_55),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,4,6), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(12,k4), LIST_END },
    .syntax = INSN_SYNTAX(bclr K4, st3_55),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,4,7), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(12,k4), LIST_END },
    .syntax = INSN_SYNTAX(bset K4, st3_55),
   },
   LIST_END,
  },
  .m_list = NULL,
  .f_list = NULL,
  .syntax = NULL,
 },
},
{
 .byte = 0x48,
 .size = 0x02,
 .insn = {
  .i_list = (insn_item_t []) {
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,3,5), LIST_END },
    .f_list = NULL,
    .syntax = INSN_SYNTAX(reti),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,3,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), LIST_END },
    .syntax = INSN_SYNTAX(rpt csr),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,3,1), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(12,FSSS), LIST_END },
    .syntax = INSN_SYNTAX(rptadd csr, TAx),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,3,2), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(12,k4), LIST_END },
    .syntax = INSN_SYNTAX(rptadd csr, K4),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,3,3), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(12,k4), LIST_END },
    .syntax = INSN_SYNTAX(rptsub csr, K4),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,3,4), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), LIST_END },
    .syntax = INSN_SYNTAX(ret),
   },
   LIST_END,
  },
  .m_list = NULL,
  .f_list = NULL,
  .syntax = NULL,
 },
},
{
 .byte = 0x4a,
 .size = 0x02,
 .insn = {
  .i_list = (insn_item_t []) {
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(15,1,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,L7), LIST_END },
    .syntax = INSN_SYNTAX(b L7),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(15,1,1), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,l7), LIST_END },
    .syntax = INSN_SYNTAX(rptblocal pmad),
   },
   LIST_END,
  },
  .m_list = NULL,
  .f_list = NULL,
  .syntax = NULL,
 },
},
{
 .byte = 0x4c,
 .size = 0x02,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,k8), LIST_END },
  .syntax = INSN_SYNTAX(rpt k8),
 },
},
{
 .byte = 0x4e,
 .size = 0x02,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,K8), LIST_END },
  .syntax = INSN_SYNTAX(aadd K8, sp),
 },
},
{
 .byte = 0x50,
 .size = 0x02,
 .insn = {
  .i_list = (insn_item_t []) {
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,4,4), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(12,XDDD), LIST_END },
    .syntax = INSN_SYNTAX(popboth xdst),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,4,5), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(12,XSSS), LIST_END },
    .syntax = INSN_SYNTAX(pshboth xsrc),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,3,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(12,FDDD), LIST_END },
    .syntax = INSN_SYNTAX(sftl dst, #1),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,3,1), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(12,FDDD), LIST_END },
    .syntax = INSN_SYNTAX(sftl dst, #-1),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,3,2), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(12,FDDD), LIST_END },
    .syntax = INSN_SYNTAX(pop dst),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,3,3), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(12,DD), LIST_END },
    .syntax = INSN_SYNTAX(pop dbl(ACx)),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,3,6), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(12,FSSS), LIST_END },
    .syntax = INSN_SYNTAX(psh src),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,3,7), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(12,SS), LIST_END },
    .syntax = INSN_SYNTAX(psh dbl(ACx)),
   },
   LIST_END,
  },
  .m_list = NULL,
  .f_list = NULL,
  .syntax = NULL,
 },
},
{
 .byte = 0x52,
 .size = 0x02,
 .insn = {
  .i_list = (insn_item_t []) {
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,4,8), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(12,FSSS), LIST_END },
    .syntax = INSN_SYNTAX(mov TAx, sp),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,4,9), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(12,FSSS), LIST_END },
    .syntax = INSN_SYNTAX(mov TAx, ssp),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,4,10), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(12,FSSS), LIST_END },
    .syntax = INSN_SYNTAX(mov TAx, cdp),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,4,12), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(12,FSSS), LIST_END },
    .syntax = INSN_SYNTAX(mov TAx, csr),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,4,13), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(12,FSSS), LIST_END },
    .syntax = INSN_SYNTAX(mov TAx, brc1),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,4,14), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(12,FSSS), LIST_END },
    .syntax = INSN_SYNTAX(mov TAx, brc0),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(10,2,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,DD), INSN_FLAG(12,FSSS), LIST_END },
    .syntax = INSN_SYNTAX(mov TAx, hi(ACx)),
   },
   LIST_END,
  },
  .m_list = NULL,
  .f_list = NULL,
  .syntax = NULL,
 },
},
{
 .byte = 0x54,
 .size = 0x02,
 .insn = {
  .i_list = (insn_item_t []) {
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(9,3,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,R), INSN_FLAG(12,SS), INSN_FLAG(14,DD), LIST_END },
    .syntax = INSN_SYNTAX(add[r]v [ACx,] ACy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(9,3,1), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,R), INSN_FLAG(12,SS), INSN_FLAG(14,DD), LIST_END },
    .syntax = INSN_SYNTAX(sqa[r] [ACx,] ACy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(9,3,2), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,R), INSN_FLAG(12,SS), INSN_FLAG(14,DD), LIST_END },
    .syntax = INSN_SYNTAX(sqs[r] [ACx,] ACy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(9,3,3), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,R), INSN_FLAG(12,SS), INSN_FLAG(14,DD), LIST_END },
    .syntax = INSN_SYNTAX(mpy[r] [ACx,] ACy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(9,3,4), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,R), INSN_FLAG(12,SS), INSN_FLAG(14,DD), LIST_END },
    .syntax = INSN_SYNTAX(sqr[r] [ACx,] ACy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(9,3,5), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,R), INSN_FLAG(12,SS), INSN_FLAG(14,DD), LIST_END },
    .syntax = INSN_SYNTAX(round [ACx,] ACy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(9,3,6), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,R), INSN_FLAG(12,SS), INSN_FLAG(14,DD), LIST_END },
    .syntax = INSN_SYNTAX(sat[r] [ACx,] ACy),
   },
   LIST_END,
  },
  .m_list = NULL,
  .f_list = NULL,
  .syntax = NULL,
 },
},
{
 .byte = 0x56,
 .size = 0x02,
 .insn = {
  .i_list = (insn_item_t []) {
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(9,1,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,R), INSN_FLAG(10,ss), INSN_FLAG(12,SS), INSN_FLAG(14,DD), LIST_END },
    .syntax = INSN_SYNTAX(mac[r] ACx, Tx, ACy[, ACy]),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(9,1,1), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,R), INSN_FLAG(10,ss), INSN_FLAG(12,SS), INSN_FLAG(14,DD), LIST_END },
    .syntax = INSN_SYNTAX(mas[r] Tx, [ACx,] ACy),
   },
   LIST_END,
  },
  .m_list = NULL,
  .f_list = NULL,
  .syntax = NULL,
 },
},
{
 .byte = 0x58,
 .size = 0x02,
 .insn = {
  .i_list = (insn_item_t []) {
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(9,1,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,R), INSN_FLAG(10,ss), INSN_FLAG(12,SS), INSN_FLAG(14,DD), LIST_END },
    .syntax = INSN_SYNTAX(mpy[r] Tx, [ACx,] ACy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(9,1,1), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,R), INSN_FLAG(10,ss), INSN_FLAG(12,SS), INSN_FLAG(14,DD), LIST_END },
    .syntax = INSN_SYNTAX(mac[r] ACy, Tx, ACx, ACy),
   },
   LIST_END,
  },
  .m_list = NULL,
  .f_list = NULL,
  .syntax = NULL,
 },
},
{
 .byte = 0x5a,
 .size = 0x02,
 .insn = {
  .i_list = (insn_item_t []) {
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,2,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(10,ss), INSN_FLAG(12,SS), INSN_FLAG(14,DD), LIST_END },
    .syntax = INSN_SYNTAX(add ACx << Tx, ACy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,2,1), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(10,ss), INSN_FLAG(12,SS), INSN_FLAG(14,DD), LIST_END },
    .syntax = INSN_SYNTAX(sub ACx << Tx, ACy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(9,1,1), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,t), INSN_FLAG(14,DD), LIST_END },
    .syntax = INSN_SYNTAX(sftcc ACx, TCx),
   },
   LIST_END,
  },
  .m_list = NULL,
  .f_list = NULL,
  .syntax = NULL,
 },
},
{
 .byte = 0x5c,
 .size = 0x02,
 .insn = {
  .i_list = (insn_item_t []) {
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,2,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(10,ss), INSN_FLAG(12,SS), INSN_FLAG(14,DD), LIST_END },
    .syntax = INSN_SYNTAX(sftl ACx, Tx[, ACy]),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,2,1), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(10,ss), INSN_FLAG(12,SS), INSN_FLAG(14,DD), LIST_END },
    .syntax = INSN_SYNTAX(sfts ACx, Tx[, ACy]),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(8,2,2), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(10,ss), INSN_FLAG(12,SS), INSN_FLAG(14,DD), LIST_END },
    .syntax = INSN_SYNTAX(sftsc ACx, Tx[, ACy]),
   },
   LIST_END,
  },
  .m_list = NULL,
  .f_list = NULL,
  .syntax = NULL,
 },
},
{
 .byte = 0x5e,
 .size = 0x02,
 .insn = {

  .i_list = NULL,
  .m_list = (insn_mask_t []) { INSN_MASK(14,2,0), LIST_END },
  .f_list = (insn_flag_t []) { INSN_FLAG(0,E), INSN_FLAG(8,k6), LIST_END },
  .syntax = INSN_SYNTAX(SWAP ( )),
 },
},
{
 .byte = 0x60,
 .size = 0x02,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(0,l3), INSN_FLAG(8,CCCCCCC), INSN_FLAG(15,l1), LIST_END },
  .syntax = INSN_SYNTAX(bcc l4, cond),
 },
},
{
 .byte = 0x68,
 .size = 0x05,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(8,CCCCCCC), INSN_FLAG(16,P24), LIST_END },
  .syntax = INSN_SYNTAX(bcc P24, cond),
 },
},
{
 .byte = 0x69,
 .size = 0x05,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(8,CCCCCCC), INSN_FLAG(16,P24), LIST_END },
  .syntax = INSN_SYNTAX(callcc P24, cond),
 },
},
{
 .byte = 0x6a,
 .size = 0x04,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(8,P24), LIST_END },
  .syntax = INSN_SYNTAX(b P24),
 },
},
{
 .byte = 0x6c,
 .size = 0x04,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(8,P24), LIST_END },
  .syntax = INSN_SYNTAX(call P24),
 },
},
{
 .byte = 0x6d,
 .size = 0x04,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(8,CCCCCCC), INSN_FLAG(16,L16), LIST_END },
  .syntax = INSN_SYNTAX(bcc L16, cond),
 },
},
{
 .byte = 0x6e,
 .size = 0x04,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(8,CCCCCCC), INSN_FLAG(16,L16), LIST_END },
  .syntax = INSN_SYNTAX(callcc L16, cond),
 },
},
{
 .byte = 0x6f,
 .size = 0x04,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(8,u), INSN_FLAG(10,cc), INSN_FLAG(12,FSSS), INSN_FLAG(16,K8), INSN_FLAG(24,L8), LIST_END },
  .syntax = INSN_SYNTAX(bcc[u] L8, src RELOP K8),
 },
},
{
 .byte = 0x70,
 .size = 0x04,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(8,K16), INSN_FLAG(24,SHFT), INSN_FLAG(28,DD), INSN_FLAG(30,SS), LIST_END },
  .syntax = INSN_SYNTAX(add K16 << #SHFT, [ACx,] ACy),
 },
},
{
 .byte = 0x71,
 .size = 0x04,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(8,K16), INSN_FLAG(24,SHFT), INSN_FLAG(28,DD), INSN_FLAG(30,SS), LIST_END },
  .syntax = INSN_SYNTAX(sub K16 << #SHFT, [ACx,] ACy),
 },
},
{
 .byte = 0x72,
 .size = 0x04,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(8,k16), INSN_FLAG(24,SHFT), INSN_FLAG(28,DD), INSN_FLAG(30,SS), LIST_END },
  .syntax = INSN_SYNTAX(and k16 << #SHFT, [ACx,] ACy),
 },
},
{
 .byte = 0x73,
 .size = 0x04,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(8,k16), INSN_FLAG(24,SHFT), INSN_FLAG(28,DD), INSN_FLAG(30,SS), LIST_END },
  .syntax = INSN_SYNTAX(or k16 << #SHFT, [ACx,] ACy),
 },
},
{
 .byte = 0x74,
 .size = 0x04,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(8,k16), INSN_FLAG(24,SHFT), INSN_FLAG(28,DD), INSN_FLAG(30,SS), LIST_END },
  .syntax = INSN_SYNTAX(xor k16 << #SHFT, [ACx,] ACy),
 },
},
{
 .byte = 0x75,
 .size = 0x04,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(8,K16), INSN_FLAG(24,SHFT), INSN_FLAG(28,DD), LIST_END },
  .syntax = INSN_SYNTAX(mov K16 << #SHFT, ACx),
 },
},
{
 .byte = 0x76,
 .size = 0x04,
 .insn = {
  .i_list = (insn_item_t []) {
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(26,2,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,k16), INSN_FLAG(24,SS), INSN_FLAG(28,FDDD), LIST_END },
    .syntax = INSN_SYNTAX(bfxtr k16, ACx, dst),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(26,2,1), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,k16), INSN_FLAG(24,SS), INSN_FLAG(28,FDDD), LIST_END },
    .syntax = INSN_SYNTAX(bfxpa k16, ACx, dst),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(26,2,2), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,K16), INSN_FLAG(28,FDDD), LIST_END },
    .syntax = INSN_SYNTAX(mov K16, dst),
   },
   LIST_END,
  },
  .m_list = NULL,
  .f_list = NULL,
  .syntax = NULL,
 },
},
{
 .byte = 0x77,
 .size = 0x04,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(8,D16), INSN_FLAG(28,FDDD), LIST_END },
  .syntax = INSN_SYNTAX(amov D16, TAx),
 },
},
{
 .byte = 0x78,
 .size = 0x04,
 .insn = {
  .i_list = (insn_item_t []) {
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(25,4,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,k16), LIST_END },
    .syntax = INSN_SYNTAX(mov k16, dp),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(25,4,1), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,k16), LIST_END },
    .syntax = INSN_SYNTAX(mov k16, ssp),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(25,4,2), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,k16), LIST_END },
    .syntax = INSN_SYNTAX(mov k16, cdp),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(25,4,3), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,k16), LIST_END },
    .syntax = INSN_SYNTAX(mov k16, bsa01),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(25,4,4), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,k16), LIST_END },
    .syntax = INSN_SYNTAX(mov k16, bsa23),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(25,4,5), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,k16), LIST_END },
    .syntax = INSN_SYNTAX(mov k16, bsa45),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(25,4,6), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,k16), LIST_END },
    .syntax = INSN_SYNTAX(mov k16, bsa67),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(25,4,7), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,k16), LIST_END },
    .syntax = INSN_SYNTAX(mov k16, bsac),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(25,4,8), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,k16), LIST_END },
    .syntax = INSN_SYNTAX(mov k16, sp),
   },
   LIST_END,
  },
  .m_list = NULL,
  .f_list = NULL,
  .syntax = NULL,
 },
},
{
 .byte = 0x79,
 .size = 0x04,
 .insn = {
  .i_list = (insn_item_t []) {
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(25,1,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,K16), INSN_FLAG(24,R), INSN_FLAG(28,DD), INSN_FLAG(30,SS), LIST_END },
    .syntax = INSN_SYNTAX(mpyk[r] K16, [ACx,] ACy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(25,1,1), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,K16), INSN_FLAG(24,R), INSN_FLAG(26,ss), INSN_FLAG(28,DD), INSN_FLAG(30,SS), LIST_END },
    .syntax = INSN_SYNTAX(mack[r] Tx, K16, [ACx,] ACy),
   },
   LIST_END,
  },
  .m_list = NULL,
  .f_list = NULL,
  .syntax = NULL,
 },
},
{
 .byte = 0x7a,
 .size = 0x04,
 .insn = {
  .i_list = (insn_item_t []) {
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(25,3,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,K16), INSN_FLAG(28,DD), INSN_FLAG(30,SS), LIST_END },
    .syntax = INSN_SYNTAX(add K16 << #16, [ACx,] ACy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(25,3,1), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,K16), INSN_FLAG(28,DD), INSN_FLAG(30,SS), LIST_END },
    .syntax = INSN_SYNTAX(sub K16 << #16, [ACx,] ACy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(25,3,2), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,k16), INSN_FLAG(28,DD), INSN_FLAG(30,SS), LIST_END },
    .syntax = INSN_SYNTAX(and k16 << #16, [ACx,] ACy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(25,3,3), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,k16), INSN_FLAG(28,DD), INSN_FLAG(30,SS), LIST_END },
    .syntax = INSN_SYNTAX(or k16 << #16, [ACx,] ACy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(25,3,4), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,k16), INSN_FLAG(28,DD), INSN_FLAG(30,SS), LIST_END },
    .syntax = INSN_SYNTAX(xor k16 << #16, [ACx,] ACy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(25,3,5), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,K16), INSN_FLAG(28,DD), LIST_END },
    .syntax = INSN_SYNTAX(mov K16 << #16, ACx),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(25,3,6), LIST_END },
    .f_list = NULL,
    .syntax = INSN_SYNTAX(idle),
   },
   LIST_END,
  },
  .m_list = NULL,
  .f_list = NULL,
  .syntax = NULL,
 },
},
{
 .byte = 0x7b,
 .size = 0x04,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(8,K16), INSN_FLAG(24,FSSS), INSN_FLAG(28,FDDD), LIST_END },
  .syntax = INSN_SYNTAX(add K16, [src,] dst),
 },
},
{
 .byte = 0x7c,
 .size = 0x04,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(8,K16), INSN_FLAG(24,FSSS), INSN_FLAG(28,FDDD), LIST_END },
  .syntax = INSN_SYNTAX(sub K16, [src,] dst),
 },
},
{
 .byte = 0x7d,
 .size = 0x04,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(8,k16), INSN_FLAG(24,FSSS), INSN_FLAG(28,FDDD), LIST_END },
  .syntax = INSN_SYNTAX(and k16, src, dst),
 },
},
{
 .byte = 0x7e,
 .size = 0x04,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(8,k16), INSN_FLAG(24,FSSS), INSN_FLAG(28,FDDD), LIST_END },
  .syntax = INSN_SYNTAX(or k16, src, dst),
 },
},
{
 .byte = 0x7f,
 .size = 0x04,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(8,k16), INSN_FLAG(24,FSSS), INSN_FLAG(28,FDDD), LIST_END },
  .syntax = INSN_SYNTAX(xor k16, src, dst),
 },
},
{
 .byte = 0x80,
 .size = 0x03,
 .insn = {
  .i_list = (insn_item_t []) {
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,2,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,YY), INSN_FLAG(10,MMM), INSN_FLAG(13,XXX), INSN_FLAG(20,MMM), INSN_FLAG(23,Y), LIST_END },
    .syntax = INSN_SYNTAX(mov dbl(Xmem), dbl(Ymem)),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,2,1), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,YY), INSN_FLAG(10,MMM), INSN_FLAG(13,XXX), INSN_FLAG(20,MMM), INSN_FLAG(23,Y), LIST_END },
    .syntax = INSN_SYNTAX(mov Xmem, Ymem),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,2,2), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,YY), INSN_FLAG(10,MMM), INSN_FLAG(13,XXX), INSN_FLAG(16,SS), INSN_FLAG(20,MMM), INSN_FLAG(23,Y), LIST_END },
    .syntax = INSN_SYNTAX(mov ACx, Xmem, Ymem),
   },
   LIST_END,
  },
  .m_list = NULL,
  .f_list = NULL,
  .syntax = NULL,
 },
},
{
 .byte = 0x81,
 .size = 0x03,
 .insn = {
  .i_list = (insn_item_t []) {
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,2,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,YY), INSN_FLAG(10,MMM), INSN_FLAG(13,XXX), INSN_FLAG(16,DD), INSN_FLAG(20,MMM), INSN_FLAG(23,Y), LIST_END },
    .syntax = INSN_SYNTAX(add Xmem, Ymem, ACx),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,2,1), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,YY), INSN_FLAG(10,MMM), INSN_FLAG(13,XXX), INSN_FLAG(16,DD), INSN_FLAG(20,MMM), INSN_FLAG(23,Y), LIST_END },
    .syntax = INSN_SYNTAX(sub Xmem, Ymem, ACx),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,2,2), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,YY), INSN_FLAG(10,MMM), INSN_FLAG(13,XXX), INSN_FLAG(16,DD), INSN_FLAG(20,MMM), INSN_FLAG(23,Y), LIST_END },
    .syntax = INSN_SYNTAX(mov Xmem, Ymem, ACx),
   },
   LIST_END,
  },
  .m_list = NULL,
  .f_list = NULL,
  .syntax = NULL,
 },
},
{
 .byte = 0x82,
 .size = 0x04,
 .insn = {
  .i_list = (insn_item_t []) {
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,2,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,YY), INSN_FLAG(10,MMM), INSN_FLAG(13,XXX), INSN_FLAG(16,mm), INSN_FLAG(20,MMM), INSN_FLAG(23,Y), INSN_FLAG(24,R), INSN_FLAG(25,g), INSN_FLAG(26,DD), INSN_FLAG(28,DD), INSN_FLAG(30,uu), LIST_END },
    .syntax = INSN_SYNTAX(mpy[r][40] [uns(]Xmem[)], [uns(]Cmem[)], ACx :: mpy[r][40] [uns(]Ymem[)], [uns(]Cmem[)], ACy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,2,1), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,YY), INSN_FLAG(10,MMM), INSN_FLAG(13,XXX), INSN_FLAG(16,mm), INSN_FLAG(20,MMM), INSN_FLAG(23,Y), INSN_FLAG(24,R), INSN_FLAG(25,g), INSN_FLAG(26,DD), INSN_FLAG(28,DD), INSN_FLAG(30,uu), LIST_END },
    .syntax = INSN_SYNTAX(mac[r][40] [uns(]Xmem[)], [uns(]Cmem[)], ACx :: mpy[r][40] [uns(]Ymem[)], [uns(]Cmem[)], ACy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,2,2), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,YY), INSN_FLAG(10,MMM), INSN_FLAG(13,XXX), INSN_FLAG(16,mm), INSN_FLAG(20,MMM), INSN_FLAG(23,Y), INSN_FLAG(24,R), INSN_FLAG(25,g), INSN_FLAG(26,DD), INSN_FLAG(28,DD), INSN_FLAG(30,uu), LIST_END },
    .syntax = INSN_SYNTAX(mas[r][40] [uns(]Xmem[)], [uns(]Cmem[)], ACx :: mpy[r][40] [uns(]Ymem[)], [uns(]Cmem[)], ACy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,2,3), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,YY), INSN_FLAG(10,MMM), INSN_FLAG(13,XXX), INSN_FLAG(16,mm), INSN_FLAG(20,MMM), INSN_FLAG(23,Y), INSN_FLAG(24,R), INSN_FLAG(25,g), INSN_FLAG(26,DD), INSN_FLAG(30,uu), LIST_END },
    .syntax = INSN_SYNTAX(amar Xmem :: mpy[r][40] [uns(]Ymem[)], [uns(]Cmem[)], ACx),
   },
   LIST_END,
  },
  .m_list = NULL,
  .f_list = NULL,
  .syntax = NULL,
 },
},
{
 .byte = 0x83,
 .size = 0x04,
 .insn = {
  .i_list = (insn_item_t []) {
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,2,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,YY), INSN_FLAG(10,MMM), INSN_FLAG(13,XXX), INSN_FLAG(16,mm), INSN_FLAG(20,MMM), INSN_FLAG(23,Y), INSN_FLAG(24,R), INSN_FLAG(25,g), INSN_FLAG(26,DD), INSN_FLAG(28,DD), INSN_FLAG(30,uu), LIST_END },
    .syntax = INSN_SYNTAX(mac[r][40] [uns(]Xmem[)], [uns(]Cmem[)], ACx :: mac[r][40] [uns(]Ymem[)], [uns(]Cmem[)], ACy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,2,1), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,YY), INSN_FLAG(10,MMM), INSN_FLAG(13,XXX), INSN_FLAG(16,mm), INSN_FLAG(20,MMM), INSN_FLAG(23,Y), INSN_FLAG(24,R), INSN_FLAG(25,g), INSN_FLAG(26,DD), INSN_FLAG(28,DD), INSN_FLAG(30,uu), LIST_END },
    .syntax = INSN_SYNTAX(mas[r][40] [uns(]Xmem[)], [uns(]Cmem[)], ACx :: mac[r][40] [uns(]Ymem[)], [uns(]Cmem[)], ACy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,2,2), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,YY), INSN_FLAG(10,MMM), INSN_FLAG(13,XXX), INSN_FLAG(16,mm), INSN_FLAG(20,MMM), INSN_FLAG(23,Y), INSN_FLAG(24,R), INSN_FLAG(25,g), INSN_FLAG(26,DD), INSN_FLAG(28,DD), INSN_FLAG(30,uu), LIST_END },
    .syntax = INSN_SYNTAX(mac[r][40] [uns(]Xmem[)], [uns(]Cmem[)], ACx >> #16 :: mac[r][40] [uns(]Ymem[)], [uns(]Cmem[)], ACy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,2,3), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,YY), INSN_FLAG(10,MMM), INSN_FLAG(13,XXX), INSN_FLAG(16,mm), INSN_FLAG(20,MMM), INSN_FLAG(23,Y), INSN_FLAG(24,R), INSN_FLAG(25,g), INSN_FLAG(26,DD), INSN_FLAG(30,uu), LIST_END },
    .syntax = INSN_SYNTAX(amar Xmem :: mac[r][40] [uns(]Ymem[)], [uns(]Cmem[)], ACx),
   },
   LIST_END,
  },
  .m_list = NULL,
  .f_list = NULL,
  .syntax = NULL,
 },
},
{
 .byte = 0x84,
 .size = 0x04,
 .insn = {
  .i_list = (insn_item_t []) {
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,2,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,YY), INSN_FLAG(10,MMM), INSN_FLAG(13,XXX), INSN_FLAG(16,mm), INSN_FLAG(20,MMM), INSN_FLAG(23,Y), INSN_FLAG(24,R), INSN_FLAG(25,g), INSN_FLAG(26,DD), INSN_FLAG(28,DD), INSN_FLAG(30,uu), LIST_END },
    .syntax = INSN_SYNTAX(mas[r][40] [uns(]Xmem[)], [uns(]Cmem[)], ACx :: mac[r][40] [uns(]Ymem[)], [uns(]Cmem[)], ACy >> #16),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,2,1), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,YY), INSN_FLAG(10,MMM), INSN_FLAG(13,XXX), INSN_FLAG(16,mm), INSN_FLAG(20,MMM), INSN_FLAG(23,Y), INSN_FLAG(24,R), INSN_FLAG(25,g), INSN_FLAG(26,DD), INSN_FLAG(30,uu), LIST_END },
    .syntax = INSN_SYNTAX(amar Xmem :: mac[r][40] [uns(]Ymem[)], [uns(]Cmem[)], ACx >> #16),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,2,2), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,YY), INSN_FLAG(10,MMM), INSN_FLAG(13,XXX), INSN_FLAG(16,mm), INSN_FLAG(20,MMM), INSN_FLAG(23,Y), INSN_FLAG(24,R), INSN_FLAG(25,g), INSN_FLAG(26,DD), INSN_FLAG(28,DD), INSN_FLAG(30,uu), LIST_END },
    .syntax = INSN_SYNTAX(mpy[r][40] [uns(]Xmem[)], [uns(]Cmem[)], ACx :: mac[r][40] [uns(]Ymem[)], [uns(]Cmem[)], ACy >> #16),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,2,3), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,YY), INSN_FLAG(10,MMM), INSN_FLAG(13,XXX), INSN_FLAG(16,mm), INSN_FLAG(20,MMM), INSN_FLAG(23,Y), INSN_FLAG(24,R), INSN_FLAG(25,g), INSN_FLAG(26,DD), INSN_FLAG(28,DD), INSN_FLAG(30,uu), LIST_END },
    .syntax = INSN_SYNTAX(mac[r][40] [uns(]Xmem[)], [uns(]Cmem[)], ACx >> #16 :: mac[r][40] [uns(]Ymem[)], [uns(]Cmem[)], ACy >> #16),
   },
   LIST_END,
  },
  .m_list = NULL,
  .f_list = NULL,
  .syntax = NULL,
 },
},
{
 .byte = 0x85,
 .size = 0x04,
 .insn = {
  .i_list = (insn_item_t []) {
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,2,3), INSN_MASK(28,1,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,YY), INSN_FLAG(10,MMM), INSN_FLAG(13,XXX), INSN_FLAG(16,mm), INSN_FLAG(20,MMM), INSN_FLAG(23,Y), INSN_FLAG(24,R), INSN_FLAG(25,U), INSN_FLAG(26,DD), INSN_FLAG(30,DD), LIST_END },
    .syntax = INSN_SYNTAX(firsadd Xmem, Ymem, Cmem, ACx, ACy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,2,3), INSN_MASK(28,1,1), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,YY), INSN_FLAG(10,MMM), INSN_FLAG(13,XXX), INSN_FLAG(16,mm), INSN_FLAG(20,MMM), INSN_FLAG(23,Y), INSN_FLAG(24,R), INSN_FLAG(25,U), INSN_FLAG(26,DD), INSN_FLAG(30,DD), LIST_END },
    .syntax = INSN_SYNTAX(firssub Xmem, Ymem, Cmem, ACx, ACy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,2,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,YY), INSN_FLAG(10,MMM), INSN_FLAG(13,XXX), INSN_FLAG(16,mm), INSN_FLAG(20,MMM), INSN_FLAG(23,Y), INSN_FLAG(24,R), INSN_FLAG(25,g), INSN_FLAG(26,DD), INSN_FLAG(30,uu), LIST_END },
    .syntax = INSN_SYNTAX(amar Xmem :: mas[r][40] [uns(]Ymem[)], [uns(]Cmem[)], ACx),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,2,1), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,YY), INSN_FLAG(10,MMM), INSN_FLAG(13,XXX), INSN_FLAG(16,mm), INSN_FLAG(20,MMM), INSN_FLAG(23,Y), INSN_FLAG(24,R), INSN_FLAG(25,g), INSN_FLAG(26,DD), INSN_FLAG(28,DD), INSN_FLAG(30,uu), LIST_END },
    .syntax = INSN_SYNTAX(mas[r][40] [uns(]Xmem[)], [uns(]Cmem[)], ACx :: mas[r][40] [uns(]Ymem[)], [uns(]Cmem[)], ACy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,2,2), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,YY), INSN_FLAG(10,MMM), INSN_FLAG(13,XXX), INSN_FLAG(16,mm), INSN_FLAG(20,MMM), INSN_FLAG(23,Y), LIST_END },
    .syntax = INSN_SYNTAX(amar Xmem, Ymem, Cmem),
   },
   LIST_END,
  },
  .m_list = NULL,
  .f_list = NULL,
  .syntax = NULL,
 },
},
{
 .byte = 0x86,
 .size = 0x04,
 .insn = {
  .i_list = (insn_item_t []) {
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(28,4,14), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,YY), INSN_FLAG(10,MMM), INSN_FLAG(13,XXX), INSN_FLAG(16,DD), INSN_FLAG(18,DD), INSN_FLAG(20,MMM), INSN_FLAG(23,Y), INSN_FLAG(24,R), LIST_END },
    .syntax = INSN_SYNTAX(sqdst Xmem, Ymem, ACx, ACy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(28,4,15), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,YY), INSN_FLAG(10,MMM), INSN_FLAG(13,XXX), INSN_FLAG(16,DD), INSN_FLAG(18,DD), INSN_FLAG(20,MMM), INSN_FLAG(23,Y), INSN_FLAG(24,R), LIST_END },
    .syntax = INSN_SYNTAX(abdst Xmem, Ymem, ACx, ACy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(29,3,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,YY), INSN_FLAG(10,MMM), INSN_FLAG(13,XXX), INSN_FLAG(16,DD), INSN_FLAG(20,MMM), INSN_FLAG(23,Y), INSN_FLAG(24,R), INSN_FLAG(25,U), INSN_FLAG(26,uu), INSN_FLAG(28,g), LIST_END },
    .syntax = INSN_SYNTAX(mpym[r][40] [T3 = ][uns(]Xmem[)], [uns(]Ymem[)], ACx),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(29,3,1), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,YY), INSN_FLAG(10,MMM), INSN_FLAG(13,XXX), INSN_FLAG(16,DD), INSN_FLAG(18,SS), INSN_FLAG(20,MMM), INSN_FLAG(23,Y), INSN_FLAG(24,R), INSN_FLAG(25,U), INSN_FLAG(26,uu), INSN_FLAG(28,g), LIST_END },
    .syntax = INSN_SYNTAX(macm[r][40] [T3 = ][uns(]Xmem[)], [uns(]Ymem[)], [ACx,] ACy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(29,3,2), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,YY), INSN_FLAG(10,MMM), INSN_FLAG(13,XXX), INSN_FLAG(16,DD), INSN_FLAG(18,SS), INSN_FLAG(20,MMM), INSN_FLAG(23,Y), INSN_FLAG(24,R), INSN_FLAG(25,U), INSN_FLAG(26,uu), INSN_FLAG(28,g), LIST_END },
    .syntax = INSN_SYNTAX(macm[r][40] [T3 = ][uns(]Xmem[)], [uns(]Ymem[)], ACx >> #16[, ACy]),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(29,3,3), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,YY), INSN_FLAG(10,MMM), INSN_FLAG(13,XXX), INSN_FLAG(16,DD), INSN_FLAG(18,SS), INSN_FLAG(20,MMM), INSN_FLAG(23,Y), INSN_FLAG(24,R), INSN_FLAG(25,U), INSN_FLAG(26,uu), INSN_FLAG(28,g), LIST_END },
    .syntax = INSN_SYNTAX(masm[r][40] [T3 = ][uns(]Xmem[)], [uns(]Ymem[)], [ACx,] ACy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(29,3,4), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,YY), INSN_FLAG(10,MMM), INSN_FLAG(13,XXX), INSN_FLAG(16,DD), INSN_FLAG(18,DD), INSN_FLAG(20,MMM), INSN_FLAG(23,Y), INSN_FLAG(24,R), INSN_FLAG(25,U), INSN_FLAG(26,ss), LIST_END },
    .syntax = INSN_SYNTAX(masm[r] [T3 = ]Xmem, Tx, ACx :: mov Ymem << #16, ACy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(29,3,5), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,YY), INSN_FLAG(10,MMM), INSN_FLAG(13,XXX), INSN_FLAG(16,DD), INSN_FLAG(18,DD), INSN_FLAG(20,MMM), INSN_FLAG(23,Y), INSN_FLAG(24,R), INSN_FLAG(25,U), INSN_FLAG(26,ss), LIST_END },
    .syntax = INSN_SYNTAX(macm[r] [T3 = ]Xmem, Tx, ACx :: mov Ymem << #16, ACy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(29,3,6), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,YY), INSN_FLAG(10,MMM), INSN_FLAG(13,XXX), INSN_FLAG(16,DD), INSN_FLAG(18,DD), INSN_FLAG(20,MMM), INSN_FLAG(23,Y), INSN_FLAG(24,R), LIST_END },
    .syntax = INSN_SYNTAX(lms Xmem, Ymem, ACx, ACy),
   },
   LIST_END,
  },
  .m_list = NULL,
  .f_list = NULL,
  .syntax = NULL,
 },
},
{
 .byte = 0x87,
 .size = 0x04,
 .insn = {
  .i_list = (insn_item_t []) {
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(24,8,97), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,YY), INSN_FLAG(10,MMM), INSN_FLAG(13,XXX), INSN_FLAG(16,DD), INSN_FLAG(18,SS), INSN_FLAG(20,MMM), INSN_FLAG(23,Y), LIST_END },
    .syntax = INSN_SYNTAX(lmsf Xmem, Ymem, ACx, ACy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(29,3,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,YY), INSN_FLAG(10,MMM), INSN_FLAG(13,XXX), INSN_FLAG(16,DD), INSN_FLAG(18,SS), INSN_FLAG(20,MMM), INSN_FLAG(23,Y), INSN_FLAG(24,R), INSN_FLAG(25,U), INSN_FLAG(26,ss), LIST_END },
    .syntax = INSN_SYNTAX(mpym[r] [T3 = ]Xmem, Tx, ACy :: mov hi(ACx << t2), Ymem),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(29,3,1), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,YY), INSN_FLAG(10,MMM), INSN_FLAG(13,XXX), INSN_FLAG(16,DD), INSN_FLAG(18,SS), INSN_FLAG(20,MMM), INSN_FLAG(23,Y), INSN_FLAG(24,R), INSN_FLAG(25,U), INSN_FLAG(26,ss), LIST_END },
    .syntax = INSN_SYNTAX(macm[r] [T3 = ]Xmem, Tx, ACy :: mov hi(ACx << t2), Ymem),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(29,3,2), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,YY), INSN_FLAG(10,MMM), INSN_FLAG(13,XXX), INSN_FLAG(16,DD), INSN_FLAG(18,SS), INSN_FLAG(20,MMM), INSN_FLAG(23,Y), INSN_FLAG(24,R), INSN_FLAG(25,U), INSN_FLAG(26,ss), LIST_END },
    .syntax = INSN_SYNTAX(masm[r] [T3 = ]Xmem, Tx, ACy :: mov hi(ACx << t2), Ymem),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(29,3,4), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,YY), INSN_FLAG(10,MMM), INSN_FLAG(13,XXX), INSN_FLAG(16,DD), INSN_FLAG(18,SS), INSN_FLAG(20,MMM), INSN_FLAG(23,Y), LIST_END },
    .syntax = INSN_SYNTAX(add Xmem << #16, ACx, ACy :: mov hi(ACy << t2), Ymem),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(29,3,5), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,YY), INSN_FLAG(10,MMM), INSN_FLAG(13,XXX), INSN_FLAG(16,DD), INSN_FLAG(18,SS), INSN_FLAG(20,MMM), INSN_FLAG(23,Y), LIST_END },
    .syntax = INSN_SYNTAX(sub Xmem << #16, ACx, ACy :: mov hi(ACy << t2), Ymem),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(29,3,6), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,YY), INSN_FLAG(10,MMM), INSN_FLAG(13,XXX), INSN_FLAG(16,DD), INSN_FLAG(18,SS), INSN_FLAG(20,MMM), INSN_FLAG(23,Y), LIST_END },
    .syntax = INSN_SYNTAX(mov Xmem << #16, ACy :: mov hi(ACx << t2), Ymem),
   },
   LIST_END,
  },
  .m_list = NULL,
  .f_list = NULL,
  .syntax = NULL,
 },
},
{
 .byte = 0x90,
 .size = 0x02,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(8,XDDD), INSN_FLAG(12,XSSS), LIST_END },
  .syntax = INSN_SYNTAX(mov xsrc, xdst),
 },
},
{
 .byte = 0x91,
 .size = 0x02,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(8,SS), LIST_END },
  .syntax = INSN_SYNTAX(b ACx),
 },
},
{
 .byte = 0x92,
 .size = 0x02,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(8,SS), LIST_END },
  .syntax = INSN_SYNTAX(call ACx),
 },
},
{
 .byte = 0x94,
 .size = 0x02,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = NULL,
  .syntax = INSN_SYNTAX(reset),
 },
},
{
 .byte = 0x95,
 .size = 0x02,
 .insn = {
  .i_list = (insn_item_t []) {
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(15,1,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,k5), LIST_END },
    .syntax = INSN_SYNTAX(intr k5),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(15,1,1), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,k5), LIST_END },
    .syntax = INSN_SYNTAX(trap k5),
   },
   LIST_END,
  },
  .m_list = NULL,
  .f_list = NULL,
  .syntax = NULL,
 },
},
{
 .byte = 0x96,
 .size = 0x02,
 .insn = {
  .i_list = (insn_item_t []) {
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(15,1,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,CCCCCCC), LIST_END },
    .syntax = INSN_SYNTAX(xcc [label, ]cond),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(15,1,1), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,CCCCCCC), LIST_END },
    .syntax = INSN_SYNTAX(xccpart [label, ]cond),
   },
   LIST_END,
  },
  .m_list = NULL,
  .f_list = NULL,
  .syntax = NULL,
 },
},
{
 .byte = 0x9e,
 .size = 0x02,
 .insn = {
  .i_list = (insn_item_t []) {
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(15,1,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,CCCCCCC), LIST_END },
    .syntax = INSN_SYNTAX(xcc [label, ]cond),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(15,1,1), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,CCCCCCC), LIST_END },
    .syntax = INSN_SYNTAX(xccpart [label, ]cond),
   },
   LIST_END,
  },
  .m_list = NULL,
  .f_list = NULL,
  .syntax = NULL,
 },
},
{
 .byte = 0x9f,
 .size = 0x02,
 .insn = {
  .i_list = (insn_item_t []) {
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(15,1,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,CCCCCCC), LIST_END },
    .syntax = INSN_SYNTAX(xcc [label, ]cond),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(15,1,1), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,CCCCCCC), LIST_END },
    .syntax = INSN_SYNTAX(xccpart [label, ]cond),
   },
   LIST_END,
  },
  .m_list = NULL,
  .f_list = NULL,
  .syntax = NULL,
 },
},
{
 .byte = 0xa0,
 .size = 0x02,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(0,FDDD), INSN_FLAG(8,AAAAAAAI), LIST_END },
  .syntax = INSN_SYNTAX(mov Smem, dst),
 },
},
{
 .byte = 0xb0,
 .size = 0x02,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(0,DD), INSN_FLAG(8,AAAAAAAI), LIST_END },
  .syntax = INSN_SYNTAX(mov Smem << #16, ACx),
 },
},
{
 .byte = 0xb4,
 .size = 0x02,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), LIST_END },
  .syntax = INSN_SYNTAX(amar Smem),
 },
},
{
 .byte = 0xb5,
 .size = 0x02,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), LIST_END },
  .syntax = INSN_SYNTAX(psh Smem),
 },
},
{
 .byte = 0xb6,
 .size = 0x02,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), LIST_END },
  .syntax = INSN_SYNTAX(delay Smem),
 },
},
{
 .byte = 0xb7,
 .size = 0x02,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), LIST_END },
  .syntax = INSN_SYNTAX(psh dbl(Lmem)),
 },
},
{
 .byte = 0xb8,
 .size = 0x02,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), LIST_END },
  .syntax = INSN_SYNTAX(pop dbl(Lmem)),
 },
},
{
 .byte = 0xbb,
 .size = 0x02,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), LIST_END },
  .syntax = INSN_SYNTAX(pop Smem),
 },
},
{
 .byte = 0xbc,
 .size = 0x02,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(0,SS), INSN_FLAG(8,AAAAAAAI), LIST_END },
  .syntax = INSN_SYNTAX(mov hi(ACx), Smem),
 },
},
{
 .byte = 0xc0,
 .size = 0x02,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(0,FSSS), INSN_FLAG(8,AAAAAAAI), LIST_END },
  .syntax = INSN_SYNTAX(mov src, Smem),
 },
},
{
 .byte = 0xd0,
 .size = 0x03,
 .insn = {
  .i_list = (insn_item_t []) {
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,2,1), INSN_MASK(23,1,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,mm), INSN_FLAG(20,DD), INSN_FLAG(22,R), LIST_END },
    .syntax = INSN_SYNTAX(mpy[r] Smem, uns(Cmem), ACx),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,2,2), INSN_MASK(23,1,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,mm), INSN_FLAG(20,DD), INSN_FLAG(22,R), LIST_END },
    .syntax = INSN_SYNTAX(mac[r] Smem, uns(Cmem), ACx),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,2,3), INSN_MASK(23,1,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,mm), INSN_FLAG(20,DD), INSN_FLAG(22,R), LIST_END },
    .syntax = INSN_SYNTAX(mas[r] Smem, uns(Cmem), ACx),
   },
   {

    .i_list = NULL,
    .m_list = NULL,
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,mm), INSN_FLAG(20,DD), INSN_FLAG(22,R), INSN_FLAG(23,U), LIST_END },
    .syntax = INSN_SYNTAX(macm[r]z [T3 = ]Smem, Cmem, ACx),
   },
   LIST_END,
  },
  .m_list = NULL,
  .f_list = NULL,
  .syntax = NULL,
 },
},
{
 .byte = 0xd1,
 .size = 0x03,
 .insn = {
  .i_list = (insn_item_t []) {
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,2,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,mm), INSN_FLAG(20,DD), INSN_FLAG(22,R), INSN_FLAG(23,U), LIST_END },
    .syntax = INSN_SYNTAX(mpym[r] [T3 = ]Smem, Cmem, ACx),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,2,1), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,mm), INSN_FLAG(20,DD), INSN_FLAG(22,R), INSN_FLAG(23,U), LIST_END },
    .syntax = INSN_SYNTAX(macm[r] [T3 = ]Smem, Cmem, ACx),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,2,2), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,mm), INSN_FLAG(20,DD), INSN_FLAG(22,R), INSN_FLAG(23,U), LIST_END },
    .syntax = INSN_SYNTAX(masm[r] [T3 = ]Smem, Cmem, ACx),
   },
   LIST_END,
  },
  .m_list = NULL,
  .f_list = NULL,
  .syntax = NULL,
 },
},
{
 .byte = 0xd2,
 .size = 0x03,
 .insn = {
  .i_list = (insn_item_t []) {
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,2,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,SS), INSN_FLAG(20,DD), INSN_FLAG(22,R), INSN_FLAG(23,U), LIST_END },
    .syntax = INSN_SYNTAX(macm[r] [T3 = ]Smem, [ACx,] ACy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,2,1), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,SS), INSN_FLAG(20,DD), INSN_FLAG(22,R), INSN_FLAG(23,U), LIST_END },
    .syntax = INSN_SYNTAX(masm[r] [T3 = ]Smem, [ACx,] ACy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,2,2), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,SS), INSN_FLAG(20,DD), INSN_FLAG(22,R), INSN_FLAG(23,U), LIST_END },
    .syntax = INSN_SYNTAX(sqam[r] [T3 = ]Smem, [ACx,] ACy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,2,3), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,SS), INSN_FLAG(20,DD), INSN_FLAG(22,R), INSN_FLAG(23,U), LIST_END },
    .syntax = INSN_SYNTAX(sqsm[r] [T3 = ]Smem, [ACx,] ACy),
   },
   LIST_END,
  },
  .m_list = NULL,
  .f_list = NULL,
  .syntax = NULL,
 },
},
{
 .byte = 0xd3,
 .size = 0x03,
 .insn = {
  .i_list = (insn_item_t []) {
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,2,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,SS), INSN_FLAG(20,DD), INSN_FLAG(22,R), INSN_FLAG(23,U), LIST_END },
    .syntax = INSN_SYNTAX(mpym[r] [T3 = ]Smem, [ACx,] ACy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,2,2), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(20,DD), INSN_FLAG(22,R), INSN_FLAG(23,U), LIST_END },
    .syntax = INSN_SYNTAX(sqrm[r] [T3 = ]Smem, ACx),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,1,1), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,ss), INSN_FLAG(19,u), INSN_FLAG(20,DD), INSN_FLAG(22,R), INSN_FLAG(23,U), LIST_END },
    .syntax = INSN_SYNTAX(mpym[r][u] [T3 = ]Smem, Tx, ACx),
   },
   LIST_END,
  },
  .m_list = NULL,
  .f_list = NULL,
  .syntax = NULL,
 },
},
{
 .byte = 0xd4,
 .size = 0x03,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,SS), INSN_FLAG(18,ss), INSN_FLAG(20,DD), INSN_FLAG(22,R), INSN_FLAG(23,U), LIST_END },
  .syntax = INSN_SYNTAX(macm[r] [T3 = ]Smem, Tx, [ACx,] ACy),
 },
},
{
 .byte = 0xd5,
 .size = 0x03,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,SS), INSN_FLAG(18,ss), INSN_FLAG(20,DD), INSN_FLAG(22,R), INSN_FLAG(23,U), LIST_END },
  .syntax = INSN_SYNTAX(masm[r] [T3 = ]Smem, Tx, [ACx,] ACy),
 },
},
{
 .byte = 0xd6,
 .size = 0x03,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,FSSS), INSN_FLAG(20,FDDD), LIST_END },
  .syntax = INSN_SYNTAX(add Smem, [src,] dst),
 },
},
{
 .byte = 0xd7,
 .size = 0x03,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,FSSS), INSN_FLAG(20,FDDD), LIST_END },
  .syntax = INSN_SYNTAX(sub Smem, [src,] dst),
 },
},
{
 .byte = 0xd8,
 .size = 0x03,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,FSSS), INSN_FLAG(20,FDDD), LIST_END },
  .syntax = INSN_SYNTAX(sub src, Smem, dst),
 },
},
{
 .byte = 0xd9,
 .size = 0x03,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,FSSS), INSN_FLAG(20,FDDD), LIST_END },
  .syntax = INSN_SYNTAX(and Smem, src, dst),
 },
},
{
 .byte = 0xda,
 .size = 0x03,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,FSSS), INSN_FLAG(20,FDDD), LIST_END },
  .syntax = INSN_SYNTAX(or Smem, src, dst),
 },
},
{
 .byte = 0xdb,
 .size = 0x03,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,FSSS), INSN_FLAG(20,FDDD), LIST_END },
  .syntax = INSN_SYNTAX(xor Smem, src, dst),
 },
},
{
 .byte = 0xdc,
 .size = 0x03,
 .insn = {
  .i_list = (insn_item_t []) {
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,2,2), INSN_MASK(20,4,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), LIST_END },
    .syntax = INSN_SYNTAX(mov Smem, dp),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,2,2), INSN_MASK(20,4,1), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), LIST_END },
    .syntax = INSN_SYNTAX(mov Smem, cdp),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,2,2), INSN_MASK(20,4,2), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), LIST_END },
    .syntax = INSN_SYNTAX(mov Smem, bsa01),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,2,2), INSN_MASK(20,4,3), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), LIST_END },
    .syntax = INSN_SYNTAX(mov Smem, bsa23),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,2,2), INSN_MASK(20,4,4), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), LIST_END },
    .syntax = INSN_SYNTAX(mov Smem, bsa45),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,2,2), INSN_MASK(20,4,5), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), LIST_END },
    .syntax = INSN_SYNTAX(mov Smem, bsa67),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,2,2), INSN_MASK(20,4,6), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), LIST_END },
    .syntax = INSN_SYNTAX(mov Smem, bsac),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,2,2), INSN_MASK(20,4,7), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), LIST_END },
    .syntax = INSN_SYNTAX(mov Smem, sp),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,2,2), INSN_MASK(20,4,8), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), LIST_END },
    .syntax = INSN_SYNTAX(mov Smem, ssp),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,2,2), INSN_MASK(20,4,9), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), LIST_END },
    .syntax = INSN_SYNTAX(mov Smem, bk03),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,2,2), INSN_MASK(20,4,10), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), LIST_END },
    .syntax = INSN_SYNTAX(mov Smem, bk47),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,2,2), INSN_MASK(20,4,11), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), LIST_END },
    .syntax = INSN_SYNTAX(mov Smem, bkc),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,2,2), INSN_MASK(20,4,12), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), LIST_END },
    .syntax = INSN_SYNTAX(mov Smem, dph),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,2,2), INSN_MASK(20,4,15), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), LIST_END },
    .syntax = INSN_SYNTAX(mov Smem, pdp),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,2,3), INSN_MASK(20,3,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), LIST_END },
    .syntax = INSN_SYNTAX(mov Smem, csr),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,2,3), INSN_MASK(20,3,1), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), LIST_END },
    .syntax = INSN_SYNTAX(mov Smem, brc0),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,2,3), INSN_MASK(20,3,2), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), LIST_END },
    .syntax = INSN_SYNTAX(mov Smem, brc1),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,2,3), INSN_MASK(20,3,3), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), LIST_END },
    .syntax = INSN_SYNTAX(mov Smem, trn0),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,2,3), INSN_MASK(20,3,4), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), LIST_END },
    .syntax = INSN_SYNTAX(mov Smem, trn1),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,2,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(20,k4), LIST_END },
    .syntax = INSN_SYNTAX(btst K4, Smem, TC1),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,2,1), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(20,k4), LIST_END },
    .syntax = INSN_SYNTAX(btst K4, Smem, TC2),
   },
   LIST_END,
  },
  .m_list = NULL,
  .f_list = NULL,
  .syntax = NULL,
 },
},
{
 .byte = 0xdd,
 .size = 0x03,
 .insn = {
  .i_list = (insn_item_t []) {
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,2,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(18,ss), INSN_FLAG(20,DD), INSN_FLAG(22,SS), LIST_END },
    .syntax = INSN_SYNTAX(add Smem << Tx, [ACx,] ACy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,2,1), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(18,ss), INSN_FLAG(20,DD), INSN_FLAG(22,SS), LIST_END },
    .syntax = INSN_SYNTAX(sub Smem << Tx, [ACx,] ACy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,2,2), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(18,ss), INSN_FLAG(20,DD), INSN_FLAG(22,SS), LIST_END },
    .syntax = INSN_SYNTAX(addsub2cc Smem, ACx, Tx, TC1, TC2, ACy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,2,3), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(18,ss), INSN_FLAG(20,DD), INSN_FLAG(22,R), LIST_END },
    .syntax = INSN_SYNTAX(mov [rnd(]Smem << Tx[)], ACx),
   },
   LIST_END,
  },
  .m_list = NULL,
  .f_list = NULL,
  .syntax = NULL,
 },
},
{
 .byte = 0xde,
 .size = 0x03,
 .insn = {
  .i_list = (insn_item_t []) {
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,4,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(20,DD), INSN_FLAG(22,SS), LIST_END },
    .syntax = INSN_SYNTAX(addsubcc Smem, ACx, TC1, ACy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,4,1), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(20,DD), INSN_FLAG(22,SS), LIST_END },
    .syntax = INSN_SYNTAX(addsubcc Smem, ACx, TC2, ACy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,4,2), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(20,DD), INSN_FLAG(22,SS), LIST_END },
    .syntax = INSN_SYNTAX(addsubcc Smem, ACx, TC1, TC2, ACy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,4,3), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(20,DD), INSN_FLAG(22,SS), LIST_END },
    .syntax = INSN_SYNTAX(subc Smem, [ACx,] ACy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,4,4), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(20,DD), INSN_FLAG(22,SS), LIST_END },
    .syntax = INSN_SYNTAX(add Smem << #16, [ACx,] ACy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,4,5), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(20,DD), INSN_FLAG(22,SS), LIST_END },
    .syntax = INSN_SYNTAX(sub Smem << #16, [ACx,] ACy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,4,6), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(20,DD), INSN_FLAG(22,SS), LIST_END },
    .syntax = INSN_SYNTAX(sub ACx, Smem << #16, ACy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,4,8), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(20,DD), INSN_FLAG(22,ss), LIST_END },
    .syntax = INSN_SYNTAX(addsub Tx, Smem, ACx),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,4,9), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(20,DD), INSN_FLAG(22,ss), LIST_END },
    .syntax = INSN_SYNTAX(subadd Tx, Smem, ACx),
   },
   LIST_END,
  },
  .m_list = NULL,
  .f_list = NULL,
  .syntax = NULL,
 },
},
{
 .byte = 0xdf,
 .size = 0x03,
 .insn = {
  .i_list = (insn_item_t []) {
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(17,3,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,u), INSN_FLAG(20,FDDD), LIST_END },
    .syntax = INSN_SYNTAX(mov [uns(]high_byte(Smem)[)], dst),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(17,3,1), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,u), INSN_FLAG(20,FDDD), LIST_END },
    .syntax = INSN_SYNTAX(mov [uns(]low_byte(Smem)[)], dst),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(17,3,2), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,u), INSN_FLAG(20,DD), LIST_END },
    .syntax = INSN_SYNTAX(mov [uns(]Smem[)], ACx),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(17,3,4), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,u), INSN_FLAG(20,DD), INSN_FLAG(22,SS), LIST_END },
    .syntax = INSN_SYNTAX(add [uns(]Smem[)], CARRY, [ACx,] ACy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(17,3,5), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,u), INSN_FLAG(20,DD), INSN_FLAG(22,SS), LIST_END },
    .syntax = INSN_SYNTAX(sub [uns(]Smem[)], BORROW, [ACx,] ACy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(17,3,6), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,u), INSN_FLAG(20,DD), INSN_FLAG(22,SS), LIST_END },
    .syntax = INSN_SYNTAX(add [uns(]Smem[)], [ACx,] ACy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(17,3,7), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,u), INSN_FLAG(20,DD), INSN_FLAG(22,SS), LIST_END },
    .syntax = INSN_SYNTAX(sub [uns(]Smem[)], [ACx,] ACy),
   },
   LIST_END,
  },
  .m_list = NULL,
  .f_list = NULL,
  .syntax = NULL,
 },
},
{
 .byte = 0xe0,
 .size = 0x03,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,t), INSN_FLAG(20,FSSS), LIST_END },
  .syntax = INSN_SYNTAX(btst src, Smem, TCx),
 },
},
{
 .byte = 0xe1,
 .size = 0x03,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,SHIFTW), INSN_FLAG(22,DD), LIST_END },
  .syntax = INSN_SYNTAX(mov low_byte(Smem) << #SHIFTW, ACx),
 },
},
{
 .byte = 0xe2,
 .size = 0x03,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,SHIFTW), INSN_FLAG(22,DD), LIST_END },
  .syntax = INSN_SYNTAX(mov high_byte(Smem) << #SHIFTW, ACx),
 },
},
{
 .byte = 0xe3,
 .size = 0x03,
 .insn = {
  .i_list = (insn_item_t []) {
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,4,12), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(20,FSSS), LIST_END },
    .syntax = INSN_SYNTAX(bset src, Smem),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,4,13), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(20,FSSS), LIST_END },
    .syntax = INSN_SYNTAX(bclr src, Smem),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(17,3,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(20,k4), LIST_END },
    .syntax = INSN_SYNTAX(btstset K4, Smem, TC1),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(17,3,1), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(20,k4), LIST_END },
    .syntax = INSN_SYNTAX(btstset K4, Smem, TC2),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(17,3,2), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(20,k4), LIST_END },
    .syntax = INSN_SYNTAX(btstclr K4, Smem, TC1),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(17,3,3), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(20,k4), LIST_END },
    .syntax = INSN_SYNTAX(btstclr K4, Smem, TC2),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(17,3,4), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(20,k4), LIST_END },
    .syntax = INSN_SYNTAX(btstnot K4, Smem, TC1),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(17,3,5), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(20,k4), LIST_END },
    .syntax = INSN_SYNTAX(btstnot K4, Smem, TC2),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(17,3,7), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(20,FSSS), LIST_END },
    .syntax = INSN_SYNTAX(bnot src, Smem),
   },
   LIST_END,
  },
  .m_list = NULL,
  .f_list = NULL,
  .syntax = NULL,
 },
},
{
 .byte = 0xe4,
 .size = 0x03,
 .insn = {
  .i_list = (insn_item_t []) {
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,1,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(20,FSSS), LIST_END },
    .syntax = INSN_SYNTAX(psh src,Smem),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,1,1), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(20,FDDD), LIST_END },
    .syntax = INSN_SYNTAX(pop dst, Smem),
   },
   LIST_END,
  },
  .m_list = NULL,
  .f_list = NULL,
  .syntax = NULL,
 },
},
{
 .byte = 0xe5,
 .size = 0x03,
 .insn = {
  .i_list = (insn_item_t []) {
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,6,2), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), LIST_END },
    .syntax = INSN_SYNTAX(mov dp, Smem),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,6,6), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), LIST_END },
    .syntax = INSN_SYNTAX(mov cdp, Smem),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,6,10), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), LIST_END },
    .syntax = INSN_SYNTAX(mov bsa01, Smem),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,6,14), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), LIST_END },
    .syntax = INSN_SYNTAX(mov bsa23, Smem),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,6,18), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), LIST_END },
    .syntax = INSN_SYNTAX(mov bsa45, Smem),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,6,22), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), LIST_END },
    .syntax = INSN_SYNTAX(mov bsa67, Smem),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,6,26), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), LIST_END },
    .syntax = INSN_SYNTAX(mov bsac, Smem),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,6,30), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), LIST_END },
    .syntax = INSN_SYNTAX(mov sp, Smem),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,6,34), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), LIST_END },
    .syntax = INSN_SYNTAX(mov ssp, Smem),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,6,38), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), LIST_END },
    .syntax = INSN_SYNTAX(mov bk03, Smem),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,6,42), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), LIST_END },
    .syntax = INSN_SYNTAX(mov bk47, Smem),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,6,46), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), LIST_END },
    .syntax = INSN_SYNTAX(mov bkc, Smem),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,6,50), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), LIST_END },
    .syntax = INSN_SYNTAX(mov dph, Smem),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,6,62), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), LIST_END },
    .syntax = INSN_SYNTAX(mov pdp, Smem),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,5,3), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), LIST_END },
    .syntax = INSN_SYNTAX(mov csr, Smem),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,5,7), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), LIST_END },
    .syntax = INSN_SYNTAX(mov brc0, Smem),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,5,11), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), LIST_END },
    .syntax = INSN_SYNTAX(mov brc1, Smem),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,5,15), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), LIST_END },
    .syntax = INSN_SYNTAX(mov trn0, Smem),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,5,19), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), LIST_END },
    .syntax = INSN_SYNTAX(mov trn1, Smem),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,1,0), INSN_MASK(18,2,1), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(20,FSSS), LIST_END },
    .syntax = INSN_SYNTAX(mov src, high_byte(Smem)),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,1,1), INSN_MASK(18,2,1), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(20,FSSS), LIST_END },
    .syntax = INSN_SYNTAX(mov src, low_byte(Smem)),
   },
   LIST_END,
  },
  .m_list = NULL,
  .f_list = NULL,
  .syntax = NULL,
 },
},
{
 .byte = 0xe6,
 .size = 0x03,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,K8), LIST_END },
  .syntax = INSN_SYNTAX(mov K8, Smem),
 },
},
{
 .byte = 0xe7,
 .size = 0x03,
 .insn = {
  .i_list = (insn_item_t []) {
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,2,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(20,ss), INSN_FLAG(22,SS), LIST_END },
    .syntax = INSN_SYNTAX(mov ACx << Tx, Smem),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,2,2), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,R), INSN_FLAG(20,ss), INSN_FLAG(22,SS), LIST_END },
    .syntax = INSN_SYNTAX(mov [rnd(]hi(ACx << Tx)[)], Smem),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,2,3), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,R), INSN_FLAG(17,u), INSN_FLAG(20,ss), INSN_FLAG(22,SS), LIST_END },
    .syntax = INSN_SYNTAX(mov [uns(] [rnd(]hi[(saturate](ACx << Tx)[)))], Smem),
   },
   LIST_END,
  },
  .m_list = NULL,
  .f_list = NULL,
  .syntax = NULL,
 },
},
{
 .byte = 0xe8,
 .size = 0x03,
 .insn = {
  .i_list = (insn_item_t []) {
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,1,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,R), INSN_FLAG(22,SS), LIST_END },
    .syntax = INSN_SYNTAX(mov [rnd(]hi(ACx)[)], Smem),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,1,1), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,R), INSN_FLAG(17,u), INSN_FLAG(22,SS), LIST_END },
    .syntax = INSN_SYNTAX(mov [uns(] [rnd(]hi[(saturate](ACx)[)))], Smem),
   },
   LIST_END,
  },
  .m_list = NULL,
  .f_list = NULL,
  .syntax = NULL,
 },
},
{
 .byte = 0xe9,
 .size = 0x03,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,SHIFTW), INSN_FLAG(22,SS), LIST_END },
  .syntax = INSN_SYNTAX(mov ACx << #SHIFTW, Smem),
 },
},
{
 .byte = 0xea,
 .size = 0x03,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,SHIFTW), INSN_FLAG(22,SS), LIST_END },
  .syntax = INSN_SYNTAX(mov hi(ACx << #SHIFTW), Smem),
 },
},
{
 .byte = 0xeb,
 .size = 0x03,
 .insn = {
  .i_list = (insn_item_t []) {
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,4,12), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(20,FSSS), LIST_END },
    .syntax = INSN_SYNTAX(mov pair(TAx), dbl(Lmem)),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,4,13), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(20,SS), LIST_END },
    .syntax = INSN_SYNTAX(mov ACx >> #1, dual(Lmem)),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,1,0), INSN_MASK(18,2,2), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(20,SS), LIST_END },
    .syntax = INSN_SYNTAX(mov ACx, dbl(Lmem)),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,1,1), INSN_MASK(18,2,2), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(17,u), INSN_FLAG(20,SS), LIST_END },
    .syntax = INSN_SYNTAX(mov [uns(]saturate(ACx)[)], dbl(Lmem)),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,2,1), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), LIST_END },
    .syntax = INSN_SYNTAX(mov reta, dbl(Lmem)),
   },
   LIST_END,
  },
  .m_list = NULL,
  .f_list = NULL,
  .syntax = NULL,
 },
},
{
 .byte = 0xec,
 .size = 0x03,
 .insn = {
  .i_list = (insn_item_t []) {
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,4,14), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(20,XDDD), LIST_END },
    .syntax = INSN_SYNTAX(amar Smem, XAdst),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(17,3,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(20,FSSS), LIST_END },
    .syntax = INSN_SYNTAX(bset Baddr, src),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(17,3,1), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(20,FSSS), LIST_END },
    .syntax = INSN_SYNTAX(bclr Baddr, src),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(17,3,2), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(20,FSSS), LIST_END },
    .syntax = INSN_SYNTAX(btstp Baddr, src),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(17,3,3), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(20,FSSS), LIST_END },
    .syntax = INSN_SYNTAX(bnot Baddr, src),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(17,3,4), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,t), INSN_FLAG(20,FSSS), LIST_END },
    .syntax = INSN_SYNTAX(btst Baddr, src, TCx),
   },
   LIST_END,
  },
  .m_list = NULL,
  .f_list = NULL,
  .syntax = NULL,
 },
},
{
 .byte = 0xed,
 .size = 0x03,
 .insn = {
  .i_list = (insn_item_t []) {
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,4,10), INSN_MASK(22,2,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(20,DD), LIST_END },
    .syntax = INSN_SYNTAX(mov dbl(Lmem), pair(hi(ACx))),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,4,12), INSN_MASK(22,2,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(20,DD), LIST_END },
    .syntax = INSN_SYNTAX(mov dbl(Lmem), pair(LO(ACx))),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,4,14), INSN_MASK(22,2,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(20,SS), LIST_END },
    .syntax = INSN_SYNTAX(mov pair(hi(ACx)), dbl(Lmem)),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,4,15), INSN_MASK(22,2,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(20,SS), LIST_END },
    .syntax = INSN_SYNTAX(mov pair(lo(ACx)), dbl(Lmem)),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,4,15), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(20,XDDD), LIST_END },
    .syntax = INSN_SYNTAX(mov dbl(Lmem), XAdst),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(16,4,5), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(20,XSSS), LIST_END },
    .syntax = INSN_SYNTAX(mov XAsrc, dbl(Lmem)),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(17,3,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(20,DD), INSN_FLAG(22,SS), LIST_END },
    .syntax = INSN_SYNTAX(add dbl(Lmem), [ACx,] ACy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(17,3,1), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(20,DD), INSN_FLAG(22,SS), LIST_END },
    .syntax = INSN_SYNTAX(sub dbl(Lmem), [ACx,] ACy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(17,3,2), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(20,DD), INSN_FLAG(22,SS), LIST_END },
    .syntax = INSN_SYNTAX(sub ACx, dbl(Lmem), ACy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(17,3,3), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), LIST_END },
    .syntax = INSN_SYNTAX(mov dbl(Lmem), reta),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(17,3,4), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,g), INSN_FLAG(20,DD), LIST_END },
    .syntax = INSN_SYNTAX(mov[40] dbl(Lmem), ACx),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(17,3,7), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(20,FDDD), LIST_END },
    .syntax = INSN_SYNTAX(mov dbl(Lmem), pair(TAx)),
   },
   LIST_END,
  },
  .m_list = NULL,
  .f_list = NULL,
  .syntax = NULL,
 },
},
{
 .byte = 0xee,
 .size = 0x03,
 .insn = {
  .i_list = (insn_item_t []) {
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(17,3,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(20,DD), INSN_FLAG(22,SS), LIST_END },
    .syntax = INSN_SYNTAX(add dual(Lmem), [ACx,] ACy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(17,3,1), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(20,DD), INSN_FLAG(22,SS), LIST_END },
    .syntax = INSN_SYNTAX(sub dual(Lmem), [ACx,] ACy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(17,3,2), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(20,DD), INSN_FLAG(22,SS), LIST_END },
    .syntax = INSN_SYNTAX(sub ACx, dual(Lmem), ACy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(17,3,3), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(20,DD), INSN_FLAG(22,ss), LIST_END },
    .syntax = INSN_SYNTAX(sub dual(Lmem), Tx, ACx),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(17,3,4), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(20,DD), INSN_FLAG(22,ss), LIST_END },
    .syntax = INSN_SYNTAX(add dual(Lmem), Tx, ACx),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(17,3,5), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(20,DD), INSN_FLAG(22,ss), LIST_END },
    .syntax = INSN_SYNTAX(sub Tx, dual(Lmem), ACx),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(17,3,6), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(20,DD), INSN_FLAG(22,ss), LIST_END },
    .syntax = INSN_SYNTAX(addsub Tx, dual(Lmem), ACx),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(17,3,7), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(20,DD), INSN_FLAG(22,ss), LIST_END },
    .syntax = INSN_SYNTAX(subadd Tx, dual(Lmem), ACx),
   },
   LIST_END,
  },
  .m_list = NULL,
  .f_list = NULL,
  .syntax = NULL,
 },
},
{
 .byte = 0xef,
 .size = 0x03,
 .insn = {
  .i_list = (insn_item_t []) {
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,2,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,mm), LIST_END },
    .syntax = INSN_SYNTAX(mov Cmem, Smem),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,2,1), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,mm), LIST_END },
    .syntax = INSN_SYNTAX(mov Smem, Cmem),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,2,2), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,mm), LIST_END },
    .syntax = INSN_SYNTAX(mov Cmem,dbl(Lmem)),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,2,3), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,mm), LIST_END },
    .syntax = INSN_SYNTAX(mov dbl(Lmem), Cmem),
   },
   LIST_END,
  },
  .m_list = NULL,
  .f_list = NULL,
  .syntax = NULL,
 },
},
{
 .byte = 0xf0,
 .size = 0x04,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,K16), LIST_END },
  .syntax = INSN_SYNTAX(cmp Smem == K16, TC1),
 },
},
{
 .byte = 0xf1,
 .size = 0x04,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,K16), LIST_END },
  .syntax = INSN_SYNTAX(cmp Smem == K16, TC2),
 },
},
{
 .byte = 0xf2,
 .size = 0x04,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,k16), LIST_END },
  .syntax = INSN_SYNTAX(band Smem, k16, TC1),
 },
},
{
 .byte = 0xf3,
 .size = 0x04,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,k16), LIST_END },
  .syntax = INSN_SYNTAX(band Smem, k16, TC2),
 },
},
{
 .byte = 0xf4,
 .size = 0x04,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,k16), LIST_END },
  .syntax = INSN_SYNTAX(and k16, Smem),
 },
},
{
 .byte = 0xf5,
 .size = 0x04,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,k16), LIST_END },
  .syntax = INSN_SYNTAX(or k16, Smem),
 },
},
{
 .byte = 0xf6,
 .size = 0x04,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,k16), LIST_END },
  .syntax = INSN_SYNTAX(xor k16, Smem),
 },
},
{
 .byte = 0xf7,
 .size = 0x04,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,K16), LIST_END },
  .syntax = INSN_SYNTAX(add K16, Smem),
 },
},
{
 .byte = 0xf8,
 .size = 0x04,
 .insn = {
  .i_list = (insn_item_t []) {
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(26,1,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,K8), INSN_FLAG(24,R), INSN_FLAG(25,U), INSN_FLAG(28,DD), LIST_END },
    .syntax = INSN_SYNTAX(mpymk[r] [T3 = ]Smem, K8, ACx),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(26,1,1), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,K8), INSN_FLAG(24,R), INSN_FLAG(25,U), INSN_FLAG(28,DD), INSN_FLAG(30,SS), LIST_END },
    .syntax = INSN_SYNTAX(macmk[r] [T3 = ]Smem, K8, [ACx,] ACy),
   },
   LIST_END,
  },
  .m_list = NULL,
  .f_list = NULL,
  .syntax = NULL,
 },
},
{
 .byte = 0xf9,
 .size = 0x04,
 .insn = {
  .i_list = (insn_item_t []) {
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(26,2,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,SHIFTW), INSN_FLAG(23,u), INSN_FLAG(28,DD), INSN_FLAG(30,SS), LIST_END },
    .syntax = INSN_SYNTAX(add [uns(]Smem[)] << #SHIFTW, [ACx,] ACy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(26,2,1), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,SHIFTW), INSN_FLAG(23,u), INSN_FLAG(28,DD), INSN_FLAG(30,SS), LIST_END },
    .syntax = INSN_SYNTAX(sub [uns(]Smem[)] << #SHIFTW, [ACx,] ACy),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(26,2,2), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,SHIFTW), INSN_FLAG(23,u), INSN_FLAG(28,DD), LIST_END },
    .syntax = INSN_SYNTAX(mov [uns(]Smem[)] << #SHIFTW, ACx),
   },
   LIST_END,
  },
  .m_list = NULL,
  .f_list = NULL,
  .syntax = NULL,
 },
},
{
 .byte = 0xfa,
 .size = 0x04,
 .insn = {
  .i_list = (insn_item_t []) {
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(26,1,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,SHIFTW), INSN_FLAG(24,R), INSN_FLAG(30,SS), LIST_END },
    .syntax = INSN_SYNTAX(mov [rnd(]hi(ACx << #SHIFTW)[)], Smem),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(26,1,1), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,SHIFTW), INSN_FLAG(23,u), INSN_FLAG(24,R), INSN_FLAG(30,SS), LIST_END },
    .syntax = INSN_SYNTAX(mov [uns(] [rnd(]hi[(saturate](ACx << #SHIFTW)[)))], Smem),
   },
   LIST_END,
  },
  .m_list = NULL,
  .f_list = NULL,
  .syntax = NULL,
 },
},
{
 .byte = 0xfb,
 .size = 0x04,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,K16), LIST_END },
  .syntax = INSN_SYNTAX(mov K16, Smem),
 },
},
{
 .byte = 0xfc,
 .size = 0x04,
 .insn = {

  .i_list = NULL,
  .m_list = NULL,
  .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,L16), LIST_END },
  .syntax = INSN_SYNTAX(bcc L16, ARn_mod ! = #0),
 },
},
{
 .byte = 0xfd,
 .size = 0x04,
 .insn = {
  .i_list = (insn_item_t []) {
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,6,0), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,mm), INSN_FLAG(24,R), INSN_FLAG(25,g), INSN_FLAG(26,uu), INSN_FLAG(28,DD), INSN_FLAG(30,DD), LIST_END },
    .syntax = INSN_SYNTAX(mpy[r][40] [uns(]Smem[)], [uns(]hi(Cmem)[)], ACy :: mpy[r][40] [uns(]Smem[)], [uns(]lo(Cmem)[)], ACx),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,6,1), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,mm), INSN_FLAG(24,R), INSN_FLAG(25,g), INSN_FLAG(26,uu), INSN_FLAG(28,DD), INSN_FLAG(30,DD), LIST_END },
    .syntax = INSN_SYNTAX(mpy[r][40] [uns(]Smem[)], [uns(]hi(Cmem)[)], ACy :: mac[r][40] [uns(]Smem[)], [uns(]lo(Cmem)[)], ACx),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,6,2), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,mm), INSN_FLAG(24,R), INSN_FLAG(25,g), INSN_FLAG(26,uu), INSN_FLAG(28,DD), INSN_FLAG(30,DD), LIST_END },
    .syntax = INSN_SYNTAX(mac[r][40] [uns(]Smem[)], [uns(]hi(Cmem)[)], ACy :: mpy[r][40] [uns(]Smem[)], [uns(]lo(Cmem)[)], ACx),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,6,3), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,mm), INSN_FLAG(24,R), INSN_FLAG(25,g), INSN_FLAG(26,uu), INSN_FLAG(28,DD), INSN_FLAG(30,DD), LIST_END },
    .syntax = INSN_SYNTAX(mpy[r][40] [uns(]Smem[)], [uns(]hi(Cmem)[)], ACy :: mas[r][40] [uns(]Smem[)], [uns(]lo(Cmem)[)], ACx),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,6,4), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,mm), INSN_FLAG(24,R), INSN_FLAG(25,g), INSN_FLAG(26,uu), INSN_FLAG(28,DD), INSN_FLAG(30,DD), LIST_END },
    .syntax = INSN_SYNTAX(mas[r][40] [uns(]Smem[)], [uns(]hi(Cmem)[)], ACy :: mpy[r][40] [uns(]Smem[)], [uns(]lo(Cmem)[)], ACx),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,6,5), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,mm), INSN_FLAG(24,R), INSN_FLAG(25,g), INSN_FLAG(26,uu), INSN_FLAG(28,DD), INSN_FLAG(30,DD), LIST_END },
    .syntax = INSN_SYNTAX(mac[r][40] [uns(]Smem[)], [uns(]hi(Cmem)[)], ACy :: mac[r][40] [uns(]Smem[)], [uns(]lo(Cmem)[)], ACx),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,6,6), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,mm), INSN_FLAG(24,R), INSN_FLAG(25,g), INSN_FLAG(26,uu), INSN_FLAG(28,DD), INSN_FLAG(30,DD), LIST_END },
    .syntax = INSN_SYNTAX(mac[r][40] [uns(]Smem[)], [uns(]hi(Cmem)[)], ACy :: mas[r][40] [uns(]Smem[)], [uns(]lo(Cmem)[)], ACx),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,6,7), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,mm), INSN_FLAG(24,R), INSN_FLAG(25,g), INSN_FLAG(26,uu), INSN_FLAG(28,DD), INSN_FLAG(30,DD), LIST_END },
    .syntax = INSN_SYNTAX(mas[r][40] [uns(]Smem[)], [uns(]hi(Cmem)[)], ACy :: mac[r][40] [uns(]Smem[)], [uns(]lo(Cmem)[)], ACx),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,6,8), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,mm), INSN_FLAG(24,R), INSN_FLAG(25,g), INSN_FLAG(26,uu), INSN_FLAG(28,DD), INSN_FLAG(30,DD), LIST_END },
    .syntax = INSN_SYNTAX(mac[r][40] [uns(]Smem[)], [uns(]hi(Cmem)[)], ACy :: mac[r][40] [uns(]Smem[)], [uns(]lo(Cmem)[)], ACx>>#16),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,6,9), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,mm), INSN_FLAG(24,R), INSN_FLAG(25,g), INSN_FLAG(26,uu), INSN_FLAG(28,DD), INSN_FLAG(30,DD), LIST_END },
    .syntax = INSN_SYNTAX(mac[r][40] [uns(]Smem[)], [uns(]hi(Cmem)[)], ACy>>#16 :: mas[r][40] [uns(]Smem[)], [uns(]lo(Cmem)[)], ACx),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,6,10), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,mm), INSN_FLAG(24,R), INSN_FLAG(25,g), INSN_FLAG(26,uu), INSN_FLAG(28,DD), INSN_FLAG(30,DD), LIST_END },
    .syntax = INSN_SYNTAX(mac[r][40] [uns(]Smem[)], [uns(]hi(Cmem)[)], ACy>>#16 :: mpy[r][40] [uns(]Smem[)], [uns(]lo(Cmem)[)], ACx),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,6,11), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,mm), INSN_FLAG(24,R), INSN_FLAG(25,g), INSN_FLAG(26,uu), INSN_FLAG(28,DD), INSN_FLAG(30,DD), LIST_END },
    .syntax = INSN_SYNTAX(mac[r][40] [uns(]Smem[)], [uns(]hi(Cmem)[)], ACy>>#16 :: mac[r][40] [uns(]Smem[)], [uns(]lo(Cmem)[)], ACx>>#16),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,6,12), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,mm), INSN_FLAG(24,R), INSN_FLAG(25,g), INSN_FLAG(26,uu), INSN_FLAG(28,DD), INSN_FLAG(30,DD), LIST_END },
    .syntax = INSN_SYNTAX(mas[r][40] [uns(]Smem[)], [uns(]hi(Cmem)[)], ACy :: mas[r][40] [uns(]Smem[)], [uns(]lo(Cmem)[)], ACx),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,6,16), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,mm), INSN_FLAG(24,R), INSN_FLAG(25,g), INSN_FLAG(26,uu), INSN_FLAG(28,DD), INSN_FLAG(30,DD), LIST_END },
    .syntax = INSN_SYNTAX(mpy[r][40] [uns(]hi(Lmem)[)], [uns(]hi(Cmem)[)], ACy :: mpy[r][40] [uns(]lo(Lmem)[)], [uns(]lo(Cmem)[)], ACx),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,6,17), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,mm), INSN_FLAG(24,R), INSN_FLAG(25,g), INSN_FLAG(26,uu), INSN_FLAG(28,DD), INSN_FLAG(30,DD), LIST_END },
    .syntax = INSN_SYNTAX(mpy[r][40] [uns(]hi(Lmem)[)], [uns(]hi(Cmem)[)], ACy :: mac[r][40] [uns(]lo(Lmem)[)], [uns(]lo(Cmem)[)], ACx),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,6,18), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,mm), INSN_FLAG(24,R), INSN_FLAG(25,g), INSN_FLAG(26,uu), INSN_FLAG(28,DD), INSN_FLAG(30,DD), LIST_END },
    .syntax = INSN_SYNTAX(mac[r][40] [uns(]hi(Lmem)[)], [uns(]hi(Cmem)[)], ACy :: mpy[r][40] [uns(]lo(Lmem)[)], [uns(]lo(Cmem)[)], ACx),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,6,19), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,mm), INSN_FLAG(24,R), INSN_FLAG(25,g), INSN_FLAG(26,uu), INSN_FLAG(28,DD), INSN_FLAG(30,DD), LIST_END },
    .syntax = INSN_SYNTAX(mpy[r][40] [uns(]hi(Lmem)[)], [uns(]hi(Cmem)[)], ACy :: mas[r][40] [uns(]lo(Lmem)[)], [uns(]lo(Cmem)[)], ACx),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,6,20), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,mm), INSN_FLAG(24,R), INSN_FLAG(25,g), INSN_FLAG(26,uu), INSN_FLAG(28,DD), INSN_FLAG(30,DD), LIST_END },
    .syntax = INSN_SYNTAX(mas[r][40] [uns(]hi(Lmem)[)], [uns(]hi(Cmem)[)], ACy :: mpy[r][40] [uns(]lo(Lmem)[)], [uns(]lo(Cmem)[)], ACx),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,6,21), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,mm), INSN_FLAG(24,R), INSN_FLAG(25,g), INSN_FLAG(26,uu), INSN_FLAG(28,DD), INSN_FLAG(30,DD), LIST_END },
    .syntax = INSN_SYNTAX(mac[r][40] [uns(]hi(Lmem)[)], [uns(]hi(Cmem)[)], ACy :: mac[r][40] [uns(]lo(Lmem)[)], [uns(]lo(Cmem)[)], ACx),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,6,22), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,mm), INSN_FLAG(24,R), INSN_FLAG(25,g), INSN_FLAG(26,uu), INSN_FLAG(28,DD), INSN_FLAG(30,DD), LIST_END },
    .syntax = INSN_SYNTAX(mac[r][40] [uns(]hi(Lmem)[)], [uns(]hi(Cmem)[)], ACy :: mas[r][40] [uns(]lo(Lmem)[)], [uns(]lo(Cmem)[)], ACx),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,6,23), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,mm), INSN_FLAG(24,R), INSN_FLAG(25,g), INSN_FLAG(26,uu), INSN_FLAG(28,DD), INSN_FLAG(30,DD), LIST_END },
    .syntax = INSN_SYNTAX(mas[r][40] [uns(]hi(Lmem)[)], [uns(]hi(Cmem)[)], ACy :: mac[r][40] [uns(]lo(Lmem)[)], [uns(]lo(Cmem)[)], ACx),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,6,24), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,mm), INSN_FLAG(24,R), INSN_FLAG(25,g), INSN_FLAG(26,uu), INSN_FLAG(28,DD), INSN_FLAG(30,DD), LIST_END },
    .syntax = INSN_SYNTAX(mac[r][40] [uns(]hi(Lmem)[)], [uns(]hi(Cmem)[)], ACy :: mac[r][40] [uns(]lo(Lmem)[)], [uns(]lo(Cmem)[)], ACx>>#16),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,6,25), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,mm), INSN_FLAG(24,R), INSN_FLAG(25,g), INSN_FLAG(26,uu), INSN_FLAG(28,DD), INSN_FLAG(30,DD), LIST_END },
    .syntax = INSN_SYNTAX(mac[r][40] [uns(]hi(Lmem)[)], [uns(]hi(Cmem)[)], ACy>>#16 :: mas[r][40] [uns(]lo(Lmem)[)], [uns(]lo(Cmem)[)], ACx),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,6,26), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,mm), INSN_FLAG(24,R), INSN_FLAG(25,g), INSN_FLAG(26,uu), INSN_FLAG(28,DD), INSN_FLAG(30,DD), LIST_END },
    .syntax = INSN_SYNTAX(mac[r][40] [uns(]hi(Lmem)[)], [uns(]hi(Cmem)[)], ACy>>#16 :: mpy[r][40] [uns(]lo(Lmem)[)], [uns(]lo(Cmem)[)], ACx),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,6,27), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,mm), INSN_FLAG(24,R), INSN_FLAG(25,g), INSN_FLAG(26,uu), INSN_FLAG(28,DD), INSN_FLAG(30,DD), LIST_END },
    .syntax = INSN_SYNTAX(mac[r][40] [uns(]hi(Lmem)[)], [uns(]hi(Cmem)[)], ACy>>#16 :: mac[r][40] [uns(]lo(Lmem)[)], [uns(]lo(Cmem)[)], ACx>>#16),
   },
   {

    .i_list = NULL,
    .m_list = (insn_mask_t []) { INSN_MASK(18,6,28), LIST_END },
    .f_list = (insn_flag_t []) { INSN_FLAG(8,AAAAAAAI), INSN_FLAG(16,mm), INSN_FLAG(24,R), INSN_FLAG(25,g), INSN_FLAG(26,uu), INSN_FLAG(28,DD), INSN_FLAG(30,DD), LIST_END },
    .syntax = INSN_SYNTAX(mas[r][40] [uns(]hi(Lmem)[)], [uns(]hi(Cmem)[)], ACy :: mas[r][40] [uns(]lo(Lmem)[)], [uns(]lo(Cmem)[)], ACx),
   },
   LIST_END,
  },
  .m_list = NULL,
  .f_list = NULL,
  .syntax = NULL,
 },
},
};
