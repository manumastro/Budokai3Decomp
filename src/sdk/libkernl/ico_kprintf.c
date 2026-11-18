/* Taken from https://github.com/nathanialf/ico-pc (sce/libkernl/kprintf.c, MIT); compiled with ee-gcc 2.9-991111-01 -O2 -G0.
 * Data and strings are the executable's own: see the extern declarations. */
/* ext-include: ico:port/compat,sce/libkernl */
#include "common.h"

/* libkernl.a(kprintf.o) */
#include <eekernel.h>

#include <libkernl_internal.h>

typedef void (*PutcharFn)(int c);

/* deci2Putchar's line buffer and its fill count; kputs sends a full line. */
#define deci2_count D_003EC620
#define deci2_line D_00471840
extern int deci2_count;

 /* derived name */

extern char deci2_line[128];

void printfloat(double v);

void _printf(char *fmt, char *ap);

void kprintf(char *fmt, ...);

void scePrintf(char *fmt, ...);




int kputchar(int c)
{
    unsigned int base;

    do {
        base = 0x10000000;
    } while (*(volatile unsigned int *)(base | 0xF130) & 0x8000);

    *(unsigned char *)(base | 0xF180) = c;
    return c;
}
 /* derived name */

void deci2Putchar(int c)
{
    int n;

    if (deci2_count >= 0x7E) {
        deci2_count = 0;
        deci2_line[0x7F] = 0;
        kputs(deci2_line);
    }
    n = deci2_count;
    if (c == 0xA) {
        deci2_count = 0;
        deci2_line[n] = c;
        deci2_line[n + 1] = 0;
        kputs(deci2_line);
    } else {
        deci2_count = n + 1;
        deci2_line[n] = c;
    }
}


void serialPutchar(int c)
{
    if (c == 0xA) {
        kputchar(0xD);
        kputchar(0xA);
    } else {
        kputchar(c);
    }
}
 /* derived name */

int ftoi(unsigned long long a)
{
    unsigned long long m = a;
    long long e;

    e = (long long)((m << 1) >> 53);
    e -= 1075;
    if (e < -53) {
        return 0;
    }
    if (e >= 13) {
        return 9999;
    }
    m = (m << 12) >> 12;
    m |= (unsigned long long)1 << 52;
    if (e < 0) {
        int s;

        e = -e;
        s = e - 2;
        m >>= s;
        if ((m & 3) == 3) {
            m = (m >> 2) + 1;
        } else {
            m >>= 2;
        }
    } else {
        m <<= e;
    }
    return (int)m;
}
