/* Taken from https://github.com/nathanialf/ico-pc (sce/libmpeg/init.c, MIT); compiled with ee-gcc 2.9-991111-01 -O2 -G0.
 * Data and strings are the executable's own: see the extern declarations. */
/* ext-include: ico:port/compat,sce/libc,sce/libipu,sce/libmpeg */
#include "common.h"

/* libmpeg.a(init.o): the decoder state resets, the error reporting, the
 * bitstream DMA and the sequence-level header parsers. */
#include <libmpeg.h>

#include <libmpeg_internal.h>

#include <eeregs.h>

#include <eekernel.h>

#include <stdio.h>

#include <libipu.h>

#define printf scePrintf

void _initSeqAgain(void);

void _lastFrame(int frame);

/* _mbcont as _clearOnce's stores type it: record 1's buffers as pointers, the index as a float */
extern struct mbcontInit { /* field names derived */ /* derived name */
    int refBuf0;                                     /* 0x000 */
    int ipuBuf0;                                     /* 0x004 */
    int rest0[78];                                   /* 0x008 */
    void *refBuf1;                                   /* 0x140 */
    void *ipuBuf1;                                   /* 0x144 */
    int rest1[78];                                   /* 0x148 */
    float cur;                                       /* 0x280 */
} _mbcont;

void _clearOnce(void);

/* Same hardware-register rule as sceMpegInit: volatile everywhere except the
   second write of the enable register at 0x1000F590. */
void _clearEach(void);

void _Error1(char *fmt, int val);

void _Error(char *msg);

void _sendDataToIPU(int data, int size);

int _RefImageInit(int *img, int width, int height);

void _sequenceHeader(void);

void _initSeq(sceMpeg *mp);

/* The uncached-accelerated alias of a frame buffer address, an inline helper
 * computed afresh at each of its three uses; the helper's name is ours. */
static inline int _uncachedAddr(int addr)
{
    return (addr & 0x0FFFFFFF) | 0x20000000;
}

void _initRefImages(int *frame0, int *frame1, int *frame2, int *top0, int *top1, int *top2,
                    int *bot0, int *bot1, int *bot2, int y, int cb, int cr);

void _setDefaultQM(int cmd, unsigned char *qm);

void _sequenceExtension(void);

void _sequenceDisplayExtension(void);

void _sequenceScalableExtension(void);

void _unknown_extension(void);

void _pictureSpatialScalableExtension(void);

void _pictureTemporalScalableExtension(void);

extern char D_0045D380[];



void _ErrMessage(char *msg)
{
    printf(D_0045D380, msg);
}
