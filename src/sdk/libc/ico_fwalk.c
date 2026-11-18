/* Taken from https://github.com/nathanialf/ico-pc (sce/libc/stdio/fwalk.c, MIT); compiled with ee-gcc 2.96 -O2 -G0.
 * Data and strings are the executable's own: see the extern declarations. */
/* ext-include: ico:sce/libc */
#include "common.h"

/* libc.a member fwalk.o */
#include <reent.h>

#include <libc_internal.h>




int _fwalk(Reent *ptr, int (*function)())
{
    Fil *fp;
    int n, ret = 0;
    Glue *g;

    for (g = &ptr->glue; g != 0; g = g->next)
        for (fp = g->iobs, n = g->niobs; --n >= 0; fp++)
            if (fp->flags != 0)
                ret |= function(fp);

    return ret;
}
INCLUDE_PAD(4);
