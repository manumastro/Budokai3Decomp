/* Taken from https://github.com/nathanialf/ico-pc (sce/libc/stdio/fread.c, MIT); compiled with ee-gcc 2.96 -O2 -G0.
 * Data and strings are the executable's own: see the extern declarations. */
/* ext-include: ico:sce/libc */
#include "common.h"

/* libc.a member fread.o */
#include <string.h>

#include <reent.h>

#include <libc_internal.h>

#include <stdio.h>




int fread(char *dst, int size, int count, Fil *s)
{
    unsigned int total = count * size;
    int len;
    unsigned int avail;
    unsigned int total_orig;
    char *p;

    if (total == 0) {
        return 0;
    }
    len = s->r;
    if (len < 0) {
        s->r = 0;
        len = 0;
    }
    avail = len;
    total_orig = total;
    p = dst;
    if (avail < total) {
        do {
            memcpy(p, s->p, avail);
            total -= avail;
            p += avail;
            s->p += avail;
            if (__srefill(s) != 0) {
                return (total_orig - total) / size;
            }
            avail = s->r;
        } while (avail < total);
    }
    memcpy(p, s->p, total);
    s->r -= total;
    s->p += total;
    return count;
}
INCLUDE_PAD(4);
