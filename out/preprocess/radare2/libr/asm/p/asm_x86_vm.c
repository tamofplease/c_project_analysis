# 0 "project/radare2/libr/asm/p/asm_x86_vm.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/libr/asm/p/asm_x86_vm.c"
# 30 "project/radare2/libr/asm/p/asm_x86_vm.c"
void decompile_vm(RAsm *a, RAsmOp *op, const ut8 *buf, int len) {
 const char *buf_asm = "invalid";
 if (len > 3 && buf[0] == 0x0F && buf[1] == 0x3F && (((buf)[2]==(0x01)) || ((buf)[2]==(0x05)) || ((buf)[2]==(0x07)) || ((buf)[2]==(0x0D)) || ((buf)[2]==(0x10)))) {
  if (a->syntax == R_ASM_SYNTAX_ATT) {
   buf_asm = sdb_fmt ("vpcext $0x%x, $0x%x", buf[3], buf[2]);
  } else {
   buf_asm = sdb_fmt ("vpcext %xh, %xh", buf[2], buf[3]);
  }
  op->size = 4;
 } else if (len > 4 && buf[0] == 0x0F && buf[1] == 0xC6 && buf[2] == 0x28 && buf[3] == 0x00 && buf[4] == 0x00) {

  buf_asm ="vmgetinfo";
  op->size = 5;
 } else if (len > 4 && buf[0] == 0x0F && buf[1] == 0xC6 && buf[2] == 0x28 && buf[3] == 0x00 && buf[4] == 0x01) {

  buf_asm ="vmsetinfo";
  op->size = 5;
 } else if (len > 4 && buf[0] == 0x0F && buf[1] == 0xC6 && buf[2] == 0x28 && buf[3] == 0x00 && buf[4] == 0x02) {

  buf_asm ="vmdxdsbl";
  op->size = 5;
 } else if (len > 4 && buf[0] == 0x0F && buf[1] == 0xC6 && buf[2] == 0x28 && buf[3] == 0x00 && buf[4] == 0x03) {

  buf_asm ="vmdxenbl";
  op->size = 5;
 } else if (len > 4 && buf[0] == 0x0F && buf[1] == 0xC6 && buf[2] == 0x28 && buf[3] == 0x01 && buf[4] == 0x00) {

  buf_asm ="vmcpuid";
  op->size = 5;
 } else if (len > 4 && buf[0] == 0x0F && buf[1] == 0xC6 && buf[2] == 0x28 && buf[3] == 0x01 && buf[4] == 0x01) {

  buf_asm ="vmhlt";
  op->size = 5;
 } else if (len > 4 && buf[0] == 0x0F && buf[1] == 0xC6 && buf[2] == 0x28 && buf[3] == 0x01 && buf[4] == 0x02) {

  buf_asm ="vmsplaf";
  op->size = 5;
 } else if (len > 4 && buf[0] == 0x0F && buf[1] == 0xC6 && buf[2] == 0x28 && buf[3] == 0x02 && buf[4] == 0x00) {

  buf_asm ="vmpushfd";
  op->size = 5;
 } else if (len > 4 && buf[0] == 0x0F && buf[1] == 0xC6 && buf[2] == 0x28 && buf[3] == 0x02 && buf[4] == 0x01) {

  buf_asm ="vmpopfd";
  op->size = 5;
 } else if (len > 4 && buf[0] == 0x0F && buf[1] == 0xC6 && buf[2] == 0x28 && buf[3] == 0x02 && buf[4] == 0x02) {

  buf_asm ="vmcli";
  op->size = 5;
 } else if (len > 4 && buf[0] == 0x0F && buf[1] == 0xC6 && buf[2] == 0x28 && buf[3] == 0x02 && buf[4] == 0x03) {

  buf_asm ="vmsti";
  op->size = 5;
 } else if (len > 4 && buf[0] == 0x0F && buf[1] == 0xC6 && buf[2] == 0x28 && buf[3] == 0x02 && buf[4] == 0x04) {

  buf_asm ="vmiretd";
  op->size = 5;
 } else if (len > 4 && buf[0] == 0x0F && buf[1] == 0xC6 && buf[2] == 0x28 && buf[3] == 0x03 && buf[4] == 0x00) {

  buf_asm ="vmsgdt";
  op->size = 5;
 } else if (len > 4 && buf[0] == 0x0F && buf[1] == 0xC6 && buf[2] == 0x28 && buf[3] == 0x03 && buf[4] == 0x01) {

  buf_asm ="vmsidt";
  op->size = 5;
 } else if (len > 4 && buf[0] == 0x0F && buf[1] == 0xC6 && buf[2] == 0x28 && buf[3] == 0x03 && buf[4] == 0x02) {

  buf_asm ="vmsldt";
  op->size = 5;
 } else if (len > 4 && buf[0] == 0x0F && buf[1] == 0xC6 && buf[2] == 0x28 && buf[3] == 0x03 && buf[4] == 0x03) {

  buf_asm ="vmstr";
  op->size = 5;
 } else if (len > 4 && buf[0] == 0x0F && buf[1] == 0xC6 && buf[2] == 0x28 && buf[3] == 0x04 && buf[4] == 0x00) {

  buf_asm ="vmsdte";
  op->size = 5;
 }
 r_asm_op_set_asm (op, buf_asm);
}
