/* Taken from https://github.com/Voicedrew11/kfiv-decomp (src/sce/libc/stdlib/atoi.c, MIT); compiled with ee-gcc 2.96 -O2 -G0.
 * Data and strings are the executable's own: see the extern declarations. */
/* ext-include: kfiv:src/sce/libc */
#include "common.h"

/* libc.a member atoi.o */
#include <stdlib.h>

#include <string.h>

#include <reent.h>




int atoi(void *str)
{
    return (int)strtol(str, 0, 0xA);
}
