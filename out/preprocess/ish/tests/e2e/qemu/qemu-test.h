# 0 "project/ish/tests/e2e/qemu/qemu-test.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/ish/tests/e2e/qemu/qemu-test.h"
# 66 "project/ish/tests/e2e/qemu/qemu-test.h"
void glue(glue(exec_, OP), q)(long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" stringify(OP) "q" " %" "" "2, %" "" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "q" (s1), "0" (res), "1" (flags)); printf("%-10s A=" FMTLX " B=" FMTLX " R=" FMTLX " CCIN=%04lx CC=%04lx\n", stringify(OP) "q", s0, s1, res, iflags, flags & CC_MASK);;
}


void glue(glue(exec_, OP), l)(long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" stringify(OP) "l" " %" "k" "2, %" "k" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "q" (s1), "0" (res), "1" (flags)); printf("%-10s A=" FMTLX " B=" FMTLX " R=" FMTLX " CCIN=%04lx CC=%04lx\n", stringify(OP) "l", s0, s1, res, iflags, flags & CC_MASK);;
}

void glue(glue(exec_, OP), w)(long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" stringify(OP) "w" " %" "w" "2, %" "w" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "q" (s1), "0" (res), "1" (flags)); printf("%-10s A=" FMTLX " B=" FMTLX " R=" FMTLX " CCIN=%04lx CC=%04lx\n", stringify(OP) "w", s0, s1, res, iflags, flags & CC_MASK);;
}

void glue(glue(exec_, OP), b)(long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" stringify(OP) "b" " %" "b" "2, %" "b" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "q" (s1), "0" (res), "1" (flags)); printf("%-10s A=" FMTLX " B=" FMTLX " R=" FMTLX " CCIN=%04lx CC=%04lx\n", stringify(OP) "b", s0, s1, res, iflags, flags & CC_MASK);;
}


void glue(exec_, OP)(long s0, long s1)
{
    s0 = i2l(s0);
    s1 = i2l(s1);

    glue(glue(exec_, OP), q)(s0, s1, 0);

    glue(glue(exec_, OP), l)(s0, s1, 0);
    glue(glue(exec_, OP), w)(s0, s1, 0);
    glue(glue(exec_, OP), b)(s0, s1, 0);
# 118 "project/ish/tests/e2e/qemu/qemu-test.h"
}

void glue(test_, OP)(void)
{
    glue(exec_, OP)(0x12345678, 0x812FADA);
    glue(exec_, OP)(0x12341, 0x12341);
    glue(exec_, OP)(0x12341, -0x12341);
    glue(exec_, OP)(0xffffffff, 0);
    glue(exec_, OP)(0xffffffff, -1);
    glue(exec_, OP)(0xffffffff, 1);
    glue(exec_, OP)(0xffffffff, 2);
    glue(exec_, OP)(0x7fffffff, 0);
    glue(exec_, OP)(0x7fffffff, 1);
    glue(exec_, OP)(0x7fffffff, -1);
    glue(exec_, OP)(0x80000000, -1);
    glue(exec_, OP)(0x80000000, 1);
    glue(exec_, OP)(0x80000000, -2);
    glue(exec_, OP)(0x12347fff, 0);
    glue(exec_, OP)(0x12347fff, 1);
    glue(exec_, OP)(0x12347fff, -1);
    glue(exec_, OP)(0x12348000, -1);
    glue(exec_, OP)(0x12348000, 1);
    glue(exec_, OP)(0x12348000, -2);
    glue(exec_, OP)(0x12347f7f, 0);
    glue(exec_, OP)(0x12347f7f, 1);
    glue(exec_, OP)(0x12347f7f, -1);
    glue(exec_, OP)(0x12348080, -1);
    glue(exec_, OP)(0x12348080, 1);
    glue(exec_, OP)(0x12348080, -2);
}

void *glue(_test_, OP) __init_call = glue(test_, OP);
