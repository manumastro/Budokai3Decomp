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
s32 func_00107180_x00107BA8() __asm__("func_00107180");
s32 func_00107BA8_x00107BA8(u8 *arg0, s32 arg1, s32 arg2) __asm__("func_00107BA8");
s32 func_00107BA8_x00107BA8(u8 *arg0, s32 arg1, s32 arg2)
{
  s32 new_var;
  s32 temp_v1;
  temp_v1 = arg2 + 0x13;
  new_var = (temp_v1 > (-1)) ? (temp_v1) : (arg2 + 0x22);
  func_00107180_x00107BA8(*((s32 *) (((u8 *) arg0) + 0x40)), arg1, (((s32) new_var) >> 4) * 0x10);
  return 1;
}
s32 func_00107348_x00107BE8() __asm__("func_00107348");
void func_00107BE8_x00107BE8(u8 *arg0, int arg1, s32 arg2) __asm__("func_00107BE8");
void func_00107BE8_x00107BE8(u8 *arg0, int arg1, s32 arg2)
{
  s32 temp_a1;
  s32 new_var;
  u8 *temp_a3;
  temp_a3 = *((u8 **) (((u8 *) arg0) + 0x40));
  temp_a1 = arg1 & 0x0FFFFFFF;
  temp_a1 = temp_a1 | 0x20000000;
 do { *((s32 *) (((u8 *) temp_a3) + 0xC4)) = 1; *((s32 *) (((u8 *) temp_a3) + 0xEC)) = temp_a1; } while (0);
  new_var = arg2;
  *((s32 *) (((u8 *) temp_a3) + 0xF8)) = new_var;
  do
  {
    *((s32 *) (((u8 *) temp_a3) + 0xF0)) = 0;
    do
    {
      *((s32 *) (((u8 *) temp_a3) + 0xF4)) = 0;
    }
    while (0);
    func_00107348_x00107BE8(arg0, temp_a1, arg2, temp_a3);
  }
  while (0);
}
s32 func_00107348_x00107C30() __asm__("func_00107348");
void func_00107C30_x00107C30(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) __asm__("func_00107C30");
void func_00107C30_x00107C30(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7)
{
  s32 temp_a1;
  s32 *new_var;
  u8 *temp_a3;
  temp_a3 = *((u8 **) (((u8 *) arg0) + 0x40));
  temp_a1 = (arg1 & 0x0FFFFFFF) | 0x20000000;
  *((s32 *) (((u8 *) temp_a3) + 0xF8)) = arg2;
  *((s32 *) (((u8 *) temp_a3) + 0xEC)) = temp_a1;
  *((s32 *) (((u8 *) temp_a3) + 0xF0)) = 0;
 do { *((s32 *) (((u8 *) temp_a3) + 0xC4)) = 0; *((s32 *) (((u8 *) temp_a3) + 0xF4)) = 0; } while (0);
  new_var = &arg6;
  func_00107348_x00107C30(arg0, temp_a1, arg2, temp_a3, arg4, arg5, *new_var, arg7);
}
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
typedef void *(*CbFnB450_x00107D60)(void *, int *, void *);
typedef struct { CbFnB450_x00107D60 func; void *arg; void *gp; } CbB450_x00107D60;
typedef struct { int f0; int f4; int f8; CbB450_x00107D60 cb[1]; } CbTblB450_x00107D60;
typedef struct { char pad[0x40]; CbTblB450_x00107D60 *tbl; } ObjB450_x00107D60;
static __inline__ void *GetGP_B450_x00107D60(void)
{
    void *gp;
     
    __asm__ volatile("move %0, $gp" : "=r"(gp));
    return gp;
}
CbFnB450_x00107D60 func_00107D60_x00107D60(ObjB450_x00107D60 *o, int type, CbFnB450_x00107D60 func, void *arg) __asm__("func_00107D60");
/* sceMpegAddCallback: from https://github.com/zm2283145/syphon-filter-omega-strain-decomp (src/lib/libmpeg/func_0010B450.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
CbFnB450_x00107D60 func_00107D60_x00107D60(ObjB450_x00107D60 *o, int type, CbFnB450_x00107D60 func, void *arg)
{
    CbTblB450_x00107D60 *t = o->tbl;
    CbFnB450_x00107D60 old = t->cb[type].func;
    t->cb[type].func = func;
    t->cb[type].arg = arg;
    t->cb[type].gp = GetGP_B450_x00107D60();
    return old;
}
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
typedef struct { int type; } sceMpegCbData_x00107DE0;
typedef int (*sceMpegCallback_x00107DE0)(void *mp, sceMpegCbData_x00107DE0 *cbd, void *data);
typedef struct { sceMpegCallback_x00107DE0 func; void *data; void *gp; } CB_x00107DE0;
typedef struct { int x0, x4, x8; CB_x00107DE0 cb[8]; } CBT_x00107DE0;
typedef struct { char p0[0x40]; CBT_x00107DE0 *cb; } sceMpeg_x00107DE0;
static inline void *SetGp_x00107DE0(void *gp)
{
    void *old;
    __asm__ volatile("move %0, $28\n\tmove $28, %1" : "=&r"(old) : "r"(gp) : "memory");
    return old;
}
int func_00107DE0_x00107DE0(sceMpeg_x00107DE0 *mp, sceMpegCbData_x00107DE0 *cbd) __asm__("func_00107DE0");
/* _sceMpegDispatchMpegCallback: from https://github.com/Komasia/sly2-decomp (src/lib/_sceMpegDispatchMpegCallback.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00107DE0_x00107DE0(sceMpeg_x00107DE0 *mp, sceMpegCbData_x00107DE0 *cbd)
{
    int ret = 0; CBT_x00107DE0 *t; sceMpegCallback_x00107DE0 f;
    if (mp && (t = mp->cb) && (f = t->cb[cbd->type].func)) {
        void *old = SetGp_x00107DE0(t->cb[cbd->type].gp);
        ret = f(mp, cbd, t->cb[cbd->type].data);
        SetGp_x00107DE0(old);
    }
    return ret;
}
typedef struct { int type; int pad[7]; } sceMpegCbData_x00107E58;
typedef int (*sceMpegCallback_x00107E58)(void *mp, sceMpegCbData_x00107E58 *cbd, void *data);
typedef struct { sceMpegCallback_x00107E58 func; void *data; void *gp; } CB_x00107E58;
typedef struct { char p0[0x40]; CB_x00107E58 *cb; } sceMpeg_x00107E58;
static inline void *SetGp_x00107E58(void *gp)
{
    void *old;
    __asm__ volatile("move %0, $28\n\tmove $28, %1" : "=&r"(old) : "r"(gp) : "memory");
    return old;
}
int func_00107E58_x00107E58(sceMpeg_x00107E58 *mp) __asm__("func_00107E58");
/* _sceMpegDispatchMpegCbNodata: from https://github.com/Komasia/sly2-decomp (src/lib/_sceMpegDispatchMpegCbNodata.c, no licence stated by the repository); ee-gcc 2.9-991111-01 -O2 -G0 */
int func_00107E58_x00107E58(sceMpeg_x00107E58 *mp)
{
    sceMpegCbData_x00107E58 cbd;
    CB_x00107E58 *t;
    sceMpegCallback_x00107E58 f;
    cbd.type = 1;
    if (mp && (t = mp->cb) && (f = (t + cbd.type)[1].func)) {
        void *old = SetGp_x00107E58(((void **)(t + cbd.type))[5]);
        f(mp, &cbd, (t + cbd.type)[1].data);
        SetGp_x00107E58(old);
    }
    return 1;
}
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
s32 func_00107FC0_x00107FC0(u8 *arg0, s64 arg1) __asm__("func_00107FC0");
s32 func_00107FC0_x00107FC0(u8 *arg0, s64 arg1)
{
  u8 **new_var;
  u8 *temp_v1;
  new_var = (u8 **) (((u8 *) arg0) + 0x40);
  temp_v1 = *new_var;
  *((s32 *) (((u8 *) temp_v1) + 0x8C)) = 1;
  *((s64 *) (((u8 *) temp_v1) + 0x90)) = arg1;
  return 1;
}
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
s32 func_00108050_x00108050(u8 *arg0, s64 arg1) __asm__("func_00108050");
s32 func_00108050_x00108050(u8 *arg0, s64 arg1)
{
  u8 *temp_a2;
  int new_var;
  temp_a2 = *((u8 **) (((u8 *) arg0) + 0x40));
  *((s64 *) (((u8 *) temp_a2) + 0x100)) = arg1;
  *((s32 *) (((u8 *) temp_a2) + 0x108)) = 1;
  return new_var = 1;
}
s32 func_00103238_x00108068(s32 *) __asm__("func_00103238");
s32 func_00109738_x00108068(s32 *, s32 *) __asm__("func_00109738");
extern s32 D_0045D298_x00108068 __asm__("D_0045D298");
extern s32 D_0045D2B8_x00108068 __asm__("D_0045D2B8");
s32 func_00108068_x00108068(s32 *arg0) __asm__("func_00108068");
s32 func_00108068_x00108068(s32 *arg0) {
    s32 temp_v0;
    u8 *var_s1;

    if ((*(s32 *)((u8 *)arg0 + 0x184) == 3) && (*(s32 *)((u8 *)arg0 + 0x130) != 0)) {
        func_00109738_x00108068(arg0, &D_0045D298_x00108068);
        *(s32 *)((u8 *)arg0 + 0x130) = 0;
    }
    switch (*(s32 *)((u8 *)arg0 + 0x184)) {        /* irregular */
    case 3:
        var_s1 = *(u8 **)((u8 *)arg0 + 0x1D0);
        break;
    case 1:
        var_s1 = *(u8 **)((u8 *)arg0 + 0x1E0);
        break;
    case 2:
        var_s1 = *(u8 **)((u8 *)arg0 + 0x1F0);
        break;
    default:
        var_s1 = *(u8 **)((u8 *)arg0 + 0x1D0);
        func_00109738_x00108068(arg0, &D_0045D2B8_x00108068);
        break;
    }
    temp_v0 = func_00103238_x00108068(arg0);
    if (temp_v0 != 0) {
        *(s32 *)((u8 *)var_s1 + 0x28) = 1;
    }
    return temp_v0;
}


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
