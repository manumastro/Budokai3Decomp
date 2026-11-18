/* Taken from https://github.com/nathanialf/ico-pc (sce/libc/string/strstr.c, MIT); compiled with ee-gcc 2.96 -O2 -G0.
 * Data and strings are the executable's own: see the extern declarations. */
/* ext-include: ico:sce/libc */
#include "common.h"

/* libc.a member strstr.o */
#include <reent.h>

#include <string.h>




char *strstr(const char *searchee, const char *lookfor)
{
    if (*searchee == 0) {
        if (*lookfor) {
            return (char *)0;
        }
        return (char *)searchee;
    }

    while (*searchee) {
        unsigned int i;
        i = 0;

        while (1) {
            if (lookfor[i] == 0) {
                return (char *)searchee;
            }
            if (lookfor[i] != searchee[i]) {
                break;
            }
            i++;
        }
        searchee++;
    }

    return (char *)0;
}
INCLUDE_PAD(4);
