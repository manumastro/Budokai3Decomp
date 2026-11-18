/* Taken from https://github.com/Voicedrew11/kfiv-decomp (src/sce/libc/stdio/printf.c, MIT); compiled with ee-gcc 2.96 -O2 -G0.
 * Data and strings are the executable's own: see the extern declarations. */
/* ext-include: kfiv:src/sce/libc */
#include "common.h"

/* libc.a member printf.o */
#include <stdlib.h>

#include <stdio.h>

#include <string.h>

#include <reent.h>

#include <libc_internal.h>




int _printf_r(Reent *ptr, const char *fmt, ...)
{
    char *ap = (char *)__builtin_next_arg(fmt) - 0x30;
    return _vfprintf_r(ptr, ptr->out, fmt, ap);
}


int printf(const char *fmt, ...)
{
    void *args = (char *)__builtin_next_arg(fmt) - 0x38;
    int s = (int)_impure_ptr;
    *(int *)(*(int *)(s + 8) + 0x54) = s;
    return vfprintf(*(int *)(s + 8), fmt, args);
}
