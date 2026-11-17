#include "common.h"

extern s8 D_0047E040[16];
extern s8 D_0047E050[16];

/* The DMA end handler of a channel: the request started by the queue handler becomes the running one. */
s32 func_00141230(s32 id) {
    D_0047E040[id] = D_0047E050[id];
    D_0047E050[id] = -1;
    asm("sync");
    asm("ei");
    return 0;
}
