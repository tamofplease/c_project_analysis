# 1 "project/radare2/shlr/grub/kern/mm.c"
# 20 "project/radare2/shlr/grub/kern/mm.c"
#include <grub/mm.h>

#include <string.h>
#include <stdlib.h>

GRUB_EXPORT(grub_malloc);
GRUB_EXPORT(grub_zalloc);
GRUB_EXPORT(grub_free);
GRUB_EXPORT(grub_realloc);


void * grub_malloc (grub_size_t size) {
  return malloc(size);
}

void *grub_zalloc (grub_size_t size) {
    void *ret;
    ret = malloc(size);
    memset (ret, 0, size);

    return ret;
}

void grub_free (void *ptr) {
    free(ptr);
}

void * grub_realloc (void *ptr, grub_size_t size) {
    return realloc(ptr, size);
}
