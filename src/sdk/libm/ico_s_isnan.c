/* Taken from https://github.com/nathanialf/ico-pc (sce/libc/s_isnan.c, MIT); compiled with ee-gcc 2.96 -O2 -G0.
 * Data and strings are the executable's own: see the extern declarations. */
/* ext-include: ico:port/compat */
#include "common.h"

/* libc.a member s_isnan.o */
/* newlib's libm/math source, built into libc.a. */
#include <math.h>




int isnan(long long x)
{
    int lx, hx;
    do {
        lx = (int)x;
        hx = (int)(x >> 32);
    } while (0);
    hx &= 0x7fffffff;
    hx |= ((unsigned int)(lx | (-lx))) >> 31;
    hx = 0x7ff00000 - hx;
    do {
        return ((unsigned int)hx) >> 31;
    } while (0);
}
INCLUDE_PAD(4);
