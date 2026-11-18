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
void func_00107C78_x00107C78(u8 *arg0) __asm__("func_00107C78");
void func_00107C78_x00107C78(u8 *arg0) {
    *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x40)) + 0x878) = 1;
}
s32 func_00107280_x00107C88(void *) __asm__("func_00107280");
s32 func_00107C88_x00107C88(u8 *arg0) __asm__("func_00107C88");
s32 func_00107C88_x00107C88(u8 *arg0)
{
  u8 *temp_s0;
  temp_s0 = *((u8 **) (((u8 *) arg0) + 0x40));
  *((s32 *) (((u8 *) temp_s0) + 0x878)) = 0;
  *((s32 *) (((u8 *) temp_s0) + 0)) = 0;
  *((s32 *) (((u8 *) temp_s0) + 4)) = 0;
  *((s32 *) (((u8 *) temp_s0) + 8)) = 0;
  *((s32 *) (((u8 *) arg0) + 8)) = 0;
  *((s32 *) (((u8 *) temp_s0) + 0xC0)) = 0;
  *((s32 *) (((u8 *) temp_s0) + 0x98)) = -1;
  func_00107280_x00107C88(temp_s0);
  *((s32 *) (((u8 *) temp_s0) + 0x858)) = (*((s32 *) (((u8 *) temp_s0) + 0x128)) = 0);
  *((s32 *) 0x10002010) = ((*((s32 *) 0x10002010)) & 0xFF7FFFFF) | 0x800000;
  return 1;
}


int sceMpegIsEnd(sceMpeg *mp)
{
    return mp->sys->isEnd;
}


int sceMpegIsRefBuffEmpty(sceMpeg *mp)
{
    MpegSys *p = mp->sys;
    return p->refCount == 0;
}
void func_00107D28_x00107D28(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) __asm__("func_00107D28");
void func_00107D28_x00107D28(u8 *arg0, s32 arg1, s32 arg2, s32 arg3)
{
  u8 **new_var;
  u8 *temp_v0;
  new_var = (u8 **) (((u8 *) arg0) + 0x40);
 do { temp_v0 = *new_var; *((s32 *) (((u8 *) temp_v0) + 0xB0)) = arg3; *((s32 *) (0xA8 + ((u8 *) temp_v0))) = arg1; } while (0);
  *((s32 *) (((u8 *) temp_v0) + 0xAC)) = arg2;
}
void func_00107D40_x00107D40(u8 *arg0, s32 *arg1, s32 *arg2, s32 *arg3) __asm__("func_00107D40");
void func_00107D40_x00107D40(u8 *arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    u8 *temp_t0;

    temp_t0 = *(u8 **)((u8 *)arg0 + 0x40);
    *arg1 = *(s32 *)((u8 *)temp_t0 + 0xA8);
    *arg2 = *(s32 *)((u8 *)temp_t0 + 0xAC);
    *arg3 = *(s32 *)((u8 *)temp_t0 + 0xB0);
}
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg/kfiv_mpeg", func_00107D60);
s32 func_00106E78_x00107D98(void *) __asm__("func_00106E78");
s32 func_00107D98_x00107D98(u8 *arg0, u32 arg1) __asm__("func_00107D98");
s32 func_00107D98_x00107D98(u8 *arg0, u32 arg1) {
    u8 *temp_a0;

    temp_a0 = *(u8 **)((u8 *)arg0 + 0x40);
    if (arg1 >= 2U) {
        return -1;
    }
    *(u32 *)((u8 *)temp_a0 + 0x87C) = arg1;
    func_00106E78_x00107D98(temp_a0);
    return 1;
}
s32 func_00107DD0_x00107DD0(u8 *arg0) __asm__("func_00107DD0");
s32 func_00107DD0_x00107DD0(u8 *arg0) {
    return *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x40)) + 0x87C);
}
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg/kfiv_mpeg", func_00107DE0);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg/kfiv_mpeg", func_00107E58);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg/kfiv_mpeg", func_00107ED0);
s32 func_00107F18_x00107F18(u8 *arg0) __asm__("func_00107F18");
s32 func_00107F18_x00107F18(u8 *arg0) {
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *temp_v0_3;
    u8 *temp_v0_4;
    u8 *temp_v0_5;
    u8 *temp_v0_6;
    u8 *temp_v1;

    temp_v1 = *(u8 **)((u8 *)arg0 + 0x40);
    temp_v0 = *(u8 **)((u8 *)temp_v1 + 0x1C8);
    if (temp_v0 != NULL) {
        *(s32 *)((u8 *)temp_v0 + 0x28) = 0;
    }
    temp_v0_2 = *(u8 **)((u8 *)temp_v1 + 0x1D8);
    if (temp_v0_2 != NULL) {
        *(s32 *)((u8 *)temp_v0_2 + 0x28) = 0;
    }
    temp_v0_3 = *(u8 **)((u8 *)temp_v1 + 0x1E8);
    if (temp_v0_3 != NULL) {
        *(s32 *)((u8 *)temp_v0_3 + 0x28) = 0;
    }
    temp_v0_4 = *(u8 **)((u8 *)temp_v1 + 0x1CC);
    if (temp_v0_4 != NULL) {
        *(s32 *)((u8 *)temp_v0_4 + 0x28) = 0;
    }
    temp_v0_5 = *(u8 **)((u8 *)temp_v1 + 0x1DC);
    if (temp_v0_5 != NULL) {
        *(s32 *)((u8 *)temp_v0_5 + 0x28) = 0;
    }
    temp_v0_6 = *(u8 **)((u8 *)temp_v1 + 0x1EC);
    if (temp_v0_6 != NULL) {
        *(s32 *)((u8 *)temp_v0_6 + 0x28) = 0;
    }
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg/kfiv_mpeg", func_00107F70);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg/kfiv_mpeg", func_00107FC0);
s32 func_00107FD8_x00107FD8(u8 *arg0) __asm__("func_00107FD8");
s32 func_00107FD8_x00107FD8(u8 *arg0)
{
  u8 *temp_v1;
  temp_v1 = *((u8 **) (((u8 *) arg0) + 0x40));
  *((s32 *) (((u8 *) temp_v1) + 0x8C)) = 0;
  *((s64 *) (((u8 *) temp_v1) + 0x90)) = 0;
  return 1;
}
s32 func_00107FF0_x00107FF0(u8 *arg0, s32 arg1) __asm__("func_00107FF0");
s32 func_00107FF0_x00107FF0(u8 *arg0, s32 arg1) {
    *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x40)) + 0xEC) = arg1;
    return 1;
}
s32 func_00108000_x00108000(u8 *arg0) __asm__("func_00108000");
s32 func_00108000_x00108000(u8 *arg0) {
    return *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x40)) + 0xE0);
}
s32 func_00108010_x00108010(u8 *arg0) __asm__("func_00108010");
s32 func_00108010_x00108010(u8 *arg0) {
    return *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x40)) + 0xE4);
}
s32 func_00108020_x00108020(u8 *arg0) __asm__("func_00108020");
s32 func_00108020_x00108020(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x40) + 0xC8;
}
s32 func_00108030_x00108030(u8 *arg0) __asm__("func_00108030");
s32 func_00108030_x00108030(u8 *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x40) + 0xC8;
}
s32 func_00108040_x00108040(u8 *arg0, s32 arg1) __asm__("func_00108040");
s32 func_00108040_x00108040(u8 *arg0, s32 arg1) {
    s32 temp_v0;
    u8 *temp_v1;

    temp_v1 = *(u8 **)((u8 *)arg0 + 0x40);
    temp_v0 = *(s32 *)((u8 *)temp_v1 + 0xFC);
    *(s32 *)((u8 *)temp_v1 + 0xFC) = arg1;
    return temp_v0;
}
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
extern void func_0012C468_x00108170(void *, void *) __asm__("func_00109738");
extern char D_00153B38_x00108170[] __asm__("D_0045D2D8");
void func_0012C468_x00108170(void *arg0, void *arg1) __asm__("func_00109738");
unsigned int func_00108170_x00108170(void *arg0, char *r, unsigned int size, unsigned int align) __asm__("func_00108170");
/* func_0012BD60: from https://github.com/OpenRAC/rac1-decomp (src/core/mpeg/demux.c, GPL-3.0); ee-gcc 2.9-991111-01 -O2 -G0 */
unsigned int func_00108170_x00108170(void *arg0, char *r, unsigned int size, unsigned int align) {
    unsigned int aligned;
    unsigned int end;

    aligned = ((*(unsigned int *)(r + 0x8) + align - 1) / align) * align;
    end = aligned + size;
    if (*(unsigned int *)(r + 0x0) + *(unsigned int *)(r + 0x4) >= end) {
        *(unsigned int *)(r + 0x8) = end;
        return aligned;
    }
    func_0012C468_x00108170(arg0, D_00153B38_x00108170);
    return 0;
}


int _alalcRest(MpegHeap *heap)
{
    return heap->base + heap->size - heap->cur;
}
