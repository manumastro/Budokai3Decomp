#include "common.h"
#include "story/opening.h"

extern char D_0046F418[];
extern void memset(void *, s32, s32);

void Opening_Init(void) {
    if (gOpening != NULL) {
        func_0013AC90(gOpening);
    }
    gOpening = func_0013AAB0(0x14, 0, D_0046F418, 0x3C);
    memset(gOpening, 0, 0x14);
    gOpening->f8 = 0;
    gOpening->fC = -1;
    gOpening->f10 = 0;
}
