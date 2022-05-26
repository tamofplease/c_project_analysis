# 1 "project/radare2/shlr/capstone/contrib/cs_driver/cs_driver/cs_driver.c"
# 21 "project/radare2/shlr/capstone/contrib/cs_driver/cs_driver/cs_driver.c"
#include <ntddk.h>
#include <capstone/capstone.h>


#pragma warning(disable : 4054)


DRIVER_INITIALIZE DriverEntry;
static NTSTATUS cs_driver_hello();



EXTERN_C NTSTATUS DriverEntry(PDRIVER_OBJECT DriverObject,
                              PUNICODE_STRING RegistryPath) {
  printf("Entering DriverEntry()\n");

  cs_driver_hello();

  printf("Leaving DriverEntry()\n");
  return STATUS_CANCELLED;
}


static NTSTATUS cs_driver_hello() {
  csh handle;
  cs_insn *insn;
  size_t count;
  KFLOATING_SAVE float_save;
  NTSTATUS status = STATUS_UNSUCCESSFUL;




  NT_ASSERT(KeGetCurrentIrql() <= DISPATCH_LEVEL);






  status = KeSaveFloatingPointState(&float_save);
  if (!NT_SUCCESS(status)) {
    return status;
  }


  if (cs_open(CS_ARCH_X86, (sizeof(void *) == 4) ? CS_MODE_32 : CS_MODE_64,
              &handle) != CS_ERR_OK) {
    goto exit;
  }

  count = cs_disasm(handle, (uint8_t *)&cs_driver_hello, 0x80,
                    (uint64_t)&cs_driver_hello, 0, &insn);
  if (count > 0) {
    printf("cs_driver!cs_driver_hello:\n");
    for (size_t j = 0; j < count; j++) {
      printf("0x%p\t%s\t\t%s\n", (void *)(uintptr_t)insn[j].address,
             insn[j].mnemonic, insn[j].op_str);
    }
    cs_free(insn, count);
  }
  cs_close(&handle);

exit:;

  KeRestoreFloatingPointState(&float_save);
  return status;
}


_Use_decl_annotations_ int __cdecl printf(const char *_Format, ...) {
  NTSTATUS status;
  va_list args;

  va_start(args, _Format);
  status = vDbgPrintEx(DPFLTR_DEFAULT_ID, DPFLTR_ERROR_LEVEL, _Format, args);
  va_end(args);
  return NT_SUCCESS(status);
}
