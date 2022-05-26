# 1 "project/radare2/shlr/capstone/windows/winkernel_mm.c"



#include "winkernel_mm.h"
#include <ntddk.h>
#include <Ntintsafe.h>


static const ULONG CS_WINKERNEL_POOL_TAG = 'kwsC';



typedef struct _CS_WINKERNEL_MEMBLOCK {
 size_t size;
 __declspec(align(MEMORY_ALLOCATION_ALIGNMENT))
 char data[ANYSIZE_ARRAY];
} CS_WINKERNEL_MEMBLOCK;



void CAPSTONE_API cs_winkernel_free(void *ptr)
{
 if (ptr) {
  ExFreePoolWithTag(CONTAINING_RECORD(ptr, CS_WINKERNEL_MEMBLOCK, data), CS_WINKERNEL_POOL_TAG);
 }
}


void * CAPSTONE_API cs_winkernel_malloc(size_t size)
{


 NT_ASSERT(size);


#pragma prefast(suppress : 30030)
 size_t number_of_bytes = 0;
 CS_WINKERNEL_MEMBLOCK *block = NULL;



 if (!NT_SUCCESS(RtlSizeTAdd(size, FIELD_OFFSET(CS_WINKERNEL_MEMBLOCK, data), &number_of_bytes))) {
  return NULL;
 }
 block = (CS_WINKERNEL_MEMBLOCK *)ExAllocatePoolWithTag(
   NonPagedPool, number_of_bytes, CS_WINKERNEL_POOL_TAG);
 if (!block) {
  return NULL;
 }
 block->size = size;

 return block->data;
}


void * CAPSTONE_API cs_winkernel_calloc(size_t n, size_t size)
{
 size_t total = n * size;

 void *new_ptr = cs_winkernel_malloc(total);
 if (!new_ptr) {
  return NULL;
 }

 return RtlFillMemory(new_ptr, total, 0);
}


void * CAPSTONE_API cs_winkernel_realloc(void *ptr, size_t size)
{
 void *new_ptr = NULL;
 size_t current_size = 0;
 size_t smaller_size = 0;

 if (!ptr) {
  return cs_winkernel_malloc(size);
 }

 new_ptr = cs_winkernel_malloc(size);
 if (!new_ptr) {
  return NULL;
 }

 current_size = CONTAINING_RECORD(ptr, CS_WINKERNEL_MEMBLOCK, data)->size;
 smaller_size = (current_size < size) ? current_size : size;
 RtlCopyMemory(new_ptr, ptr, smaller_size);
 cs_winkernel_free(ptr);

 return new_ptr;
}




#pragma warning(push)


#pragma warning(disable : 28719)
int CAPSTONE_API cs_winkernel_vsnprintf(char *buffer, size_t count, const char *format, va_list argptr)
{
 int result = _vsnprintf(buffer, count, format, argptr);




 if (result == -1 || (size_t)result == count) {
  buffer[count - 1] = '\0';
 }

 if (result == -1) {





  char* tmp = cs_winkernel_malloc(0x1000);
  if (!tmp) {
   return result;
  }

  result = _vsnprintf(tmp, 0x1000, format, argptr);
  NT_ASSERT(result != -1);
  cs_winkernel_free(tmp);
 }

 return result;
}
#pragma warning(pop)
