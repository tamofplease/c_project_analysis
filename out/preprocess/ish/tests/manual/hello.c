# 0 "project/ish/tests/manual/hello.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/ish/tests/manual/hello.c"

char hello[] = "Hello, world!\n";

void _start() {
    long result;
    __asm__ volatile("int $0x80"
            : "=a" (result)
            : "a" (4), "b" (1), "c" (hello), "d" (sizeof(hello) - 1));
    __asm__ volatile("int $0x80"
            : "=a" (result)
            : "a" (1), "b" (0));
}
