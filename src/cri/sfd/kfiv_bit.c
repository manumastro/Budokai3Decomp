/* Taken from https://github.com/Voicedrew11/kfiv-decomp (src/sce/libmpeg/bit.c, MIT); compiled with ee-gcc 2.96 -O2 -G0.
 * Data and strings are the executable's own: see the extern declarations. */
/* ext-include: kfiv:src/sce/libipu,src/sce/libkernl,src/sce/libmpeg */
#include "common.h"

/* libmpeg.a(bit.o): the seven _sysbit functions of the demultiplexer's bit
 * reader.  The two DMA channel control helpers after them (setD3_CHCR,
 * setD4_CHCR) belong to libipu.o, which begins after bit.o's 4 bytes of link
 * fill; they are kept in this file. */
#include <eekernel.h>

#include <libmpeg.h>

#include <libmpeg_internal.h>

#include <eeregs.h>

#include <libipu_internal.h>

/* the bitstream reader state: the 64 bit accumulator this file shifts bits out
 * of, the ring of bytes the IPU feeds it from, and the bit position */
typedef struct {         /* field names derived */
    long long buf;       /* 0x00 */
    unsigned char *base; /* 0x08 */
    unsigned char *p;    /* 0x0C */
    unsigned int cnt;    /* 0x10 */
    long long pos;       /* 0x18 */
    unsigned char *wrap; /* 0x20 */
    unsigned char *end;  /* 0x24 */
    int size;            /* 0x28 */
} SysBit;

                /* derived name */

/* Its record type is this member's own */
void _sysbitFlush(SysBit *bs, int n);

#define DIntr DI
#define EIntr EI

void _sysbitInit(int *bs, int base, int wrap, int size);

int _sysbitNext(void *bs, int n);

void _sysbitFlush(SysBit *bs, int n);

int _sysbitGet(int *self, int n);

int _sysbitMarker(int *self);

void _sysbitJump(int *bs, int bytes);

int _sysbitPtr(int *bs, int bits);




void setD3_CHCR(int chcr)
{
    DIntr();
    *D_ENABLEW = *D_ENABLER | 0x10000;
    *D3_CHCR = chcr;
    *D_ENABLEW = *D_ENABLER & 0xFFFEFFFF;
    EIntr();
}


void setD4_CHCR(int chcr)
{
    DIntr();
    *D_ENABLEW = *D_ENABLER | 0x10000;
    *D4_CHCR = chcr;
    *D_ENABLEW = *D_ENABLER & 0xFFFEFFFF;
    EIntr();
}
INCLUDE_PAD(4);
