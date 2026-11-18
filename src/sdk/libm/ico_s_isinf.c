/* Taken from https://github.com/nathanialf/ico-pc (sce/libc/s_isinf.c, MIT); compiled with ee-gcc 2.96 -O2 -G0.
 * Data and strings are the executable's own: see the extern declarations. */
/* ext-include: ico:port/compat */
#include "common.h"

/* libc.a member s_isinf.o */
/* newlib's libm/math source, built into libc.a. */
#include <math.h>




int isinf(long long x)
{
    int lx, hx;
    do {
        lx = (int)x;
        hx = (int)(x >> 32);
    } while (0);
    hx &= 0x7fffffff;
    hx |= ((unsigned int)(lx | (-lx))) >> 31;
    hx = 0x7ff00000 - hx;
    return 1 - (int)(((unsigned int)(hx | (-hx))) >> 31);
}
