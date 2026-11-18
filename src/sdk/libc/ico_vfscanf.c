/* Taken from https://github.com/nathanialf/ico-pc (sce/libc/stdio/vfscanf.c, MIT); compiled with ee-gcc 2.96 -O2 -G0.
 * Data and strings are the executable's own: see the extern declarations. */
/* ext-include: ico */
#include "common.h"

/* libc.a member vfscanf.o */
#include <reent.h>

#include <ctype.h>

#include <libc_internal.h>

#include <stdio.h>

#include <stdlib.h>

typedef char *va_list;

/* The EE ABI's argument slot is 8 bytes wide (sscanf.c's own
   `__builtin_next_arg(...) - 48` counts six of them). */
#define va_arg(ap, type) (*(type *)((ap += 8) - 8))

typedef int wchar_t;

#define LONG 0x01

#define LONGDBL 0x02

#define SHORT 0x04

#define SUPPRESS 0x08

#define POINTER 0x10

#define NOSKIP 0x20

#define SIGNOK 0x40

#define NDIGITS 0x80

#define DPTOK 0x100

#define EXPOK 0x200

#define PFXOK 0x100

#define NZDIGITS 0x200

#define CT_CHAR 0

#define CT_CCL 1

#define CT_STRING 2

#define CT_INT 3

#define CT_FLOAT 4

#define u_char char

#define u_long unsigned long

#define MAXEXP 308

#define MAXFRACT 39

#define BUF (MAXEXP + MAXFRACT + 3)

#define EOF (-1)

#define BufferEmpty (fp->r <= 0 && __srefill(fp))

int __svfscanf(Fil *fp, const char *fmt0, va_list ap);




char *__sccl(char *tab, char *fmt)
{
    int c;
    int n;
    int v;

    c = *fmt++;
    if (c == '^') {
        v = 1;
        c = *fmt++;
    } else {
        v = 0;
    }

    for (n = 0; n < 256; n++) {
        tab[n] = v;
    }
    if (c == 0) {
        return fmt - 1;
    }

    v = 1 - v;
    for (;;) {
        tab[c] = v;
    doswitch:
        n = *fmt++;
        switch (n) {
        case 0:
            return fmt - 1;

        case '-':
            n = *fmt;
            if (n == ']' || n < c) {
                c = '-';
                break;
            }
            fmt++;
            do {
                tab[++c] = v;
            } while (c < n);
            goto doswitch;

        case ']':
            return fmt;

        default:
            c = n;
            break;
        }
    }
}
