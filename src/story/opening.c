#include "common.h"
#include "menu/menu.h"

typedef struct OpeningWork {
    s32 f0;
    s32 f4;
    s32 f8;
    s32 fC;
    s32 f10;
} OpeningWork;

extern OpeningWork *gOpening;
extern char D_0046F418[];
extern void func_001258F8(void *, s32, s32);

void Opening_Init(void) {
    if (gOpening != NULL) {
        func_0013AC90(gOpening);
    }
    gOpening = func_0013AAB0(0x14, 0, D_0046F418, 0x3C);
    func_001258F8(gOpening, 0, 0x14);
    gOpening->f8 = 0;
    gOpening->fC = -1;
    gOpening->f10 = 0;
}
