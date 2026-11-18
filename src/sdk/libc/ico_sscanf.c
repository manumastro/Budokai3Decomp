/* Taken from https://github.com/nathanialf/ico-pc (sce/libc/stdio/sscanf.c, MIT); compiled with ee-gcc 2.96 -O2 -G0.
 * Data and strings are the executable's own: see the extern declarations. */
/* ext-include: ico:sce/libc */
#include "common.h"

/* libc.a member sscanf.o */
#include <string.h>

#include <reent.h>

#include <libc_internal.h>

#include <stdio.h>

int eofread(void *cookie, char *buf, int len);




int sscanf(const char *str, const char *fmt, ...)
{
    Fil f;
    char *va;
    f.flags = 4;
    f.bf.base = f.p = (unsigned char *)str;
    f.bf.size = f.r = strlen(str);
    f.read = eofread;
    f.ub.base = 0;
    f.lb.base = 0;
    f.data = _impure_ptr;
    va = (char *)__builtin_next_arg(fmt) - 48;
    return __svfscanf(&f, fmt, va);
}
