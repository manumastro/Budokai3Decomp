/* Taken from https://github.com/Voicedrew11/kfiv-decomp (src/sce/libkernl/memclr.c, MIT); compiled with ee-gcc 2.9-991111-01 -O2 -G0.
 * Data and strings are the executable's own: see the extern declarations. */
/* ext-include: kfiv: */
#include "common.h"



/* libkernl.a member memclr.o (KFIV: not in ICO) */
void memclr(void *p, int n)
{
    unsigned char *c = p;
    int i;
    for (i = n - 1; i != -1; i--) {
        *c++ = 0;
    }
}
INCLUDE_PAD(4);
