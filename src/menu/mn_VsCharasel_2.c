#include "common.h"
#include "menu/mn_VsCharasel.h"

extern char D_0046B730[];
extern void *func_0025C670(s32, s32, s32);
extern void func_003105B0(void);
extern void func_0027E7E0(void);

void VsCharasel_Load(void) {
    VsCharaselGlobal *g;

    gVsCharasel = g = func_0013AAB0(0x1C, 0, D_0046B730, 0x70);
    g->task = NULL;
    g->file[0] = func_0025C670(0x1083E, 0, 0);
    g->file[1] = func_0025C670(0x1083F, 0, 0);
    g->f8 = 0;
    g->fC = 0;
    g->f10 = 0;
    g->task = NULL;
    g->f18 = 0;
    func_003105B0();
    func_0027E7E0();
    func_0027E7E0();
}
