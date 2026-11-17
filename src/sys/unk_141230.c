#include "common.h"

extern s8 gDmaChanQueue[16];
extern s8 gDmaChanNextQueue[16];

/* The DMA end handler of a channel: the request started by the queue handler becomes the running one. */
s32 amDma_EndHandler(s32 id) {
    gDmaChanQueue[id] = gDmaChanNextQueue[id];
    gDmaChanNextQueue[id] = -1;
    asm("sync");
    asm("ei");
    return 0;
}
