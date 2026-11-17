#include "common.h"
#include "menu/mn_VsCharasel.h"

typedef struct VsCharaselData {
    void *f0;
    s8 f4;
    s8 f5;
    void *work;
} VsCharaselData;

extern s32 D_00470030;
extern s32 D_00470034;
extern char D_0046B720[];
extern char D_0046B730[];
extern void memset(void *, s32, s32);
extern void func_002802E0(Task *);

void VsCharasel_Start(s8 a0, s8 a1) {
    VsCharaselGlobal *g = gVsCharasel;
    Task *t;
    VsCharaselData *d;
    void *w;

    g->task = t = func_00144FC0(func_002802E0, 0, 0x2000, 8, 2, D_0046B720);
    d = (VsCharaselData *)&t->data;
    d->work = w = func_0013AAB0(0x48, 0, D_0046B730, 0xA1);
    memset(w, 0, 0x48);
    if (a0 == -1) {
        a0 = D_00470030;
    }
    if (a1 == -1) {
        a1 = D_00470034;
    }
    D_00470030 = a0;
    D_00470034 = a1;
    d->f4 = a0;
    d->f5 = a1;
}
