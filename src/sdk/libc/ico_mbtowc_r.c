/* Taken from https://github.com/nathanialf/ico-pc (sce/libc/stdlib/mbtowc_r.c, MIT); compiled with ee-gcc 2.96 -O2 -G0.
 * Data and strings are the executable's own: see the extern declarations. */
/* ext-include: ico */
#include "common.h"

/* libc.a member mbtowc_r.o */
#include <stdlib.h>

#include <string.h>

#include <reent.h>




int _mbtowc_r(struct Reent *r, int *pwc, const char *s, int n, int *state)
{
    int dummy;
    int *p = &dummy;
    unsigned char *t = (unsigned char *)s;
    if (pwc != 0)
        p = pwc;
    if (t == 0)
        goto zero;
    if (n != 0)
        goto store;
    return -1;
zero:
    return 0;
store:
    *p = *t;
    return *t != 0;
}
INCLUDE_PAD(4);
