# 0 "project/ish/tests/e2e/qemu/qemu-test-shift.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/ish/tests/e2e/qemu/qemu-test-shift.h"
# 31 "project/ish/tests/e2e/qemu/qemu-test-shift.h"
void glue(glue(exec_, OP), q)(long s2, long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" stringify(OP) "q" " %%cl, %" "" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "c" (s1), "0" (res), "1" (flags));;

    if (s1 != 1)
      flags &= ~CC_O;
    printf("%-10s A=" FMTLX " B=" FMTLX " R=" FMTLX " CCIN=%04lx CC=%04lx\n",
           stringify(OP) "q", s0, s1, res, iflags, flags & CC_MASK);
}


void glue(glue(exec_, OP), l)(long s2, long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" stringify(OP) "l" " %%cl, %" "k" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "c" (s1), "0" (res), "1" (flags));;

    if (s1 != 1)
      flags &= ~CC_O;
    printf("%-10s A=" FMTLX " B=" FMTLX " R=" FMTLX " CCIN=%04lx CC=%04lx\n",
           stringify(OP) "l", s0, s1, res, iflags, flags & CC_MASK);
}

void glue(glue(exec_, OP), w)(long s2, long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" stringify(OP) "w" " %%cl, %" "w" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "c" (s1), "0" (res), "1" (flags));;

    if (s1 != 1)
      flags &= ~CC_O;
    printf("%-10s A=" FMTLX " B=" FMTLX " R=" FMTLX " CCIN=%04lx CC=%04lx\n",
           stringify(OP) "w", s0, s1, res, iflags, flags & CC_MASK);
}
# 127 "project/ish/tests/e2e/qemu/qemu-test-shift.h"
void glue(glue(exec_, OP), b)(long s0, long s1, long iflags)
{
    long res, flags;
    res = s0;
    flags = iflags;
    asm ("push %4\n\t" "popf\n\t" stringify(OP) "b" " %%cl, %" "b" "0\n\t" "pushf\n\t" "pop %1\n\t" : "=q" (res), "=g" (flags) : "c" (s1), "0" (res), "1" (flags));;

    if (s1 != 1)
      flags &= ~CC_O;
    printf("%-10s A=" FMTLX " B=" FMTLX " R=" FMTLX " CCIN=%04lx CC=%04lx\n",
           stringify(OP) "b", s0, s1, res, iflags, flags & CC_MASK);
}


void glue(exec_, OP)(long s2, long s0, long s1)
{
    s2 = i2l(s2);
    s0 = i2l(s0);

    glue(glue(exec_, OP), q)(s2, s0, s1, 0);

    glue(glue(exec_, OP), l)(s2, s0, s1, 0);



    glue(glue(exec_, OP), w)(s2, s0, s1, 0);


    glue(glue(exec_, OP), b)(s0, s1, 0);
# 165 "project/ish/tests/e2e/qemu/qemu-test-shift.h"
}

void glue(test_, OP)(void)
{
    int i, n;

    n = 64;



    for(i = 0; i < n; i++)
        glue(exec_, OP)(0x21ad3d34, 0x12345678, i);
    for(i = 0; i < n; i++)
        glue(exec_, OP)(0x813f3421, 0x82345679, i);
}

void *glue(_test_, OP) __init_call = glue(test_, OP);
