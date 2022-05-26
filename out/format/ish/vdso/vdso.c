# 1 "project/ish/vdso/vdso.c"
#if !__i386__ || !__ELF__
#error "VDSO must be built for i386 elf"
#endif

typedef long time_t;
typedef int clockid_t;

time_t __vdso_time(time_t *t) {
    time_t result;
    __asm__("int $0x80" : "=a" (result) :
            "0" (13 ), "b" (t));
    return result;
}

int __vdso_gettimeofday(void *timeval, void *timezone) {
    int result;
    __asm__("int $0x80" : "=a" (result) :
            "0" (78 ), "b" (timeval), "c" (timezone));
    return result;
}

int __vdso_clock_gettime(clockid_t clock, void *timespec) {
    int result;
    __asm__("int $0x80" : "=a" (result) :
            "0" (265 ), "b" (clock), "c" (timespec));
    return result;
}
