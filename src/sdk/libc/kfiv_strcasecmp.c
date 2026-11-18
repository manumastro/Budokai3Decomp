/* Taken from https://github.com/Voicedrew11/kfiv-decomp (src/sce/libc/string/strcasecmp.c, MIT); compiled with ee-gcc 2.96 -O2 -G0.
 * Data and strings are the executable's own: see the extern declarations. */
/* ext-include: kfiv:src/sce/libc */
#include "common.h"

/* libc.a member strcasecmp.o (newlib libc/string/strcasecmp.c). KFIV: not
   linked by ICO. */
#include <ctype.h>




int strcasecmp(const char *s1, const char *s2)
{
    while (*s1 != '\0' && tolower(*s1) == tolower(*s2)) {
        s1++;
        s2++;
    }

    return tolower(*(unsigned char *)s1) - tolower(*(unsigned char *)s2);
}
