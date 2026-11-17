#include "common.h"
#include "menu/mn_TourMode.h"

extern char D_0046EF40[];
extern void *func_0025C670(s32, s32, s32);
extern void func_002B6140(void);

void TourMode_Load(void) {
    TourModeGlobal *g;

    gTourMode = g = func_0013AAB0(0xC, 0, D_0046EF40, 0xB4);
    g->file[0] = func_0025C670(0x10836, 0, 0);
    g->file[1] = func_0025C670(0x10837, 0, 0);
    g->task = NULL;
    func_002B6140();
}
