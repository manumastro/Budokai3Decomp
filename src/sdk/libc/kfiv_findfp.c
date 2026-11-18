/* Taken from https://github.com/Voicedrew11/kfiv-decomp (src/sce/libc/stdio/findfp.c, MIT); compiled with ee-gcc 2.96 -O2 -G0.
 * Data and strings are the executable's own: see the extern declarations. */
/* ext-include: kfiv:src/sce/libc */
#include "common.h"

/* libc.a member findfp.o */
#include <stdlib.h>

#include <string.h>

#include <reent.h>

#include <libc_internal.h>

#include <stdio.h>

void std(Fil *fp, int flags, int file, Reent *data);

#define ENOMEM 12

#define NDYNAMIC 4

void _cleanup(void);

void __sinit(Reent *s);




void *__sfmoreglue(void *ptr, int n)
{
    int sz;
    char *p;
    char *body;
    sz = n * 0x58;
    p = (char *)_malloc_r(ptr, sz + 0xC);
    if (p == 0) {
        return 0;
    }
    body = p + 0xC;
    *(int *)(p + 0x4) = n;
    *(int *)(p + 0x0) = 0;
    *(int *)(p + 0x8) = (int)body;
    memset(body, 0, sz);
    return p;
}


Fil *__sfp(Reent *d)
{
    Fil *fp;
    int n;
    Glue *g;

    if (!d->sdidinit) {
        __sinit(d);
    }

    for (g = &d->glue;; g = g->next) {
        for (fp = g->iobs, n = g->niobs; --n >= 0; fp++) {
            if (fp->flags == 0) {
                goto found;
            }
        }
        if (g->next == 0 && (g->next = (Glue *)__sfmoreglue(d, NDYNAMIC)) == 0) {
            break;
        }
    }
    d->err = ENOMEM;
    return 0;

found:
    fp->flags = 1;
    fp->file = -1;
    fp->data = d;
    fp->p = 0;
    fp->w = 0;
    fp->r = 0;
    fp->bf.base = 0;
    fp->bf.size = 0;
    fp->lbfsize = 0;
    fp->ub.base = 0;
    fp->ub.size = 0;
    fp->lb.base = 0;
    fp->lb.size = 0;
    return fp;
}


void _cleanup_r(Reent *ptr)
{
    _fwalk(ptr, fflush);
}
INCLUDE_PAD(4);
