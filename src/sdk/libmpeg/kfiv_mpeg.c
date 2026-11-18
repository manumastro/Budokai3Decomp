/* Taken from https://github.com/Voicedrew11/kfiv-decomp (src/sce/libmpeg/mpeg.c, MIT); compiled with ee-gcc 2.9-991111-01 -O2 -G0.
 * Data and strings are the executable's own: see the extern declarations. */
/* ext-include: kfiv:src/sce/libipu,src/sce/libkernl,src/sce/libmpeg */
#include "common.h"

/* libmpeg.a(mpeg.o): the sceMpeg entry points, the callback dispatch, the
 * arena allocator and the picture loop. */
#include <libmpeg.h>

#include <libmpeg_internal.h>

#include <eeregs.h>

#include <eekernel.h>

#include <libipu.h>

 /* derived name */

/* The DMAC and IPU registers are hardware the DMAC itself updates, so every
   access is volatile, except the second write of the enable register at
   0x1000F590, whose address is already live from the first write. */
void sceMpegInit(void);

int sceMpegCreate(sceMpeg *mp, void *buf, int size);

void sceMpegAddBs(int a0, int data, int size);

int sceMpegGetPicture(sceMpeg *mp, unsigned int buf, int size);

int sceMpegGetPictureRAW8(sceMpeg *mp, unsigned int buf, int size, int a3);

int sceMpegGetPictureRAW8xy(sceMpeg *mp, unsigned int buf, int mbw, int mbh);

void sceMpegSetDecodeMode(sceMpeg *mp, int ni, int np, int nb);

void sceMpegGetDecodeMode(sceMpeg *mp, int *ni, int *np, int *nb);

void sceMpegReset(sceMpeg *mp);

int sceMpegClearRefBuff(sceMpeg *mp);

sceMpegCallback sceMpegAddCallback(sceMpeg *mp, int type, sceMpegCallback func, void *data);

int _dispatchMpegCallback(sceMpeg *mp, int *cbdata);

void _dispatchMpegCbNodata(sceMpeg *mp);

void sceMpegSetDefaultPtsGap(sceMpeg *mp, long long gap);

void sceMpegResetDefaultPtsGap(sceMpeg *mp);

void sceMpegSetImageBuff(int buff);

int sceMpegDispWidth(sceMpeg *mp);

int sceMpegDispHeight(sceMpeg *mp);

int *sceMpegDispCenterOffX(sceMpeg *mp);

/* returns the horizontal offsets too, as the ROM's code does */
int *sceMpegDispCenterOffY(sceMpeg *mp);

int sceSetBrokenLink(sceMpeg *mp, int pending);

void sceSetPtm(sceMpeg *mp, long long ptm);

int _alalcAlloc(MpegHeap *heap, int size, unsigned int align);

int _getpic(sceMpeg *mp);

int _decodeOrSkipFrame(sceMpeg *mp, int count, int limit);

int _decodeOrSkip(sceMpeg *mp, int count, int limit);

int _decodeOrSkipField(sceMpeg *mp, int count, int limit);

int _sceMpegFlush(sceMpeg *mp);




int sceMpegDelete(sceMpeg *m)
{
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg/kfiv_mpeg", func_00107BA8);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg/kfiv_mpeg", func_00107BE8);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg/kfiv_mpeg", func_00107C30);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg/kfiv_mpeg", func_00107C78);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg/kfiv_mpeg", func_00107C88);


int sceMpegIsEnd(sceMpeg *mp)
{
    return mp->sys->isEnd;
}


int sceMpegIsRefBuffEmpty(sceMpeg *mp)
{
    MpegSys *p = mp->sys;
    return p->refCount == 0;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg/kfiv_mpeg", func_00107D28);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg/kfiv_mpeg", func_00107D40);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg/kfiv_mpeg", func_00107D60);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg/kfiv_mpeg", func_00107D98);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg/kfiv_mpeg", func_00107DD0);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg/kfiv_mpeg", func_00107DE0);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg/kfiv_mpeg", func_00107E58);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg/kfiv_mpeg", func_00107ED0);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg/kfiv_mpeg", func_00107F18);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg/kfiv_mpeg", func_00107F70);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg/kfiv_mpeg", func_00107FC0);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg/kfiv_mpeg", func_00107FD8);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg/kfiv_mpeg", func_00107FF0);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg/kfiv_mpeg", func_00108000);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg/kfiv_mpeg", func_00108010);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg/kfiv_mpeg", func_00108020);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg/kfiv_mpeg", func_00108030);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg/kfiv_mpeg", func_00108040);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg/kfiv_mpeg", func_00108050);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg/kfiv_mpeg", func_00108068);


void _alalcInit(MpegHeap *heap, int base, int size)
{
    heap->base = base;
    heap->size = size;
    heap->cur = base;
    heap->dynamic = base;
}


void _alalcSetDynamic(MpegHeap *heap)
{
    heap->dynamic = heap->cur;
}


void _alalcFree(MpegHeap *heap)
{
    heap->cur = heap->dynamic;
}
INCLUDE_PAD(4);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg/kfiv_mpeg", func_00108170);


int _alalcRest(MpegHeap *heap)
{
    return heap->base + heap->size - heap->cur;
}
