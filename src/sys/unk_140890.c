#include "common.h"

/* DMA request queues: two queues (per path), each a ring of requests started on a free DMA channel; the
 * channel's interrupt handler starts the next request. Interrupts are masked around the queue updates. */
typedef struct DmaQueue {
    s16 mask;    /* the DMA channels this queue's handler is installed on, one bit per channel */
    s16 unk2;
    s16 count;   /* requests waiting */
    s16 head;
    s16 tail;
    s16 total;
} DmaQueue;

typedef struct DmaReq {
    s32 chan;
    s32 chcr;
    s32 madr;
    s32 qwc;
    s32 tadr;
    s32 sadr;
} DmaReq;

extern DmaQueue gDmaQueue[2];
extern s32 gDmaQueueBusy[2];
extern DmaReq *gDmaQueueReqs[2];
extern s32 gDmaQueueSize;
extern s8 gDmaChanQueue[16];
extern s8 gDmaChanNextQueue[16];
extern s8 D_0047E060[16];
extern s8 D_0047E070[16];
extern volatile u32 *gDmaChanRegs[];
extern volatile u32 *D_003F0900[];
extern char D_0045F550[];
extern void *func_00124940(s32, s32);
extern void DI(void);
extern void EI(void);
extern s32 AddDmacHandler2(s32, s32 (*)(s32, s32, void *), s32, s32);
extern s32 AddDmacHandler(s32, s32 (*)(s32), s32);
extern s32 func_0010AE78(s32);
extern void scePrintf(char *, s32, s32, s32);
extern s32 amDma_EndHandler(s32);
void amDma_SetQueueMask(s32 ch, s32 mask);
void amDma_InstallHandlers(void);
void amDma_WaitQueue(s32 ch);
s32 amDma_Request(s32 ch, s32 id, s32 tte, s32 mode, s32 madr, s32 qwc, s32 tadr, s32 sadr);
s32 amDma_StartNext(s32 ch, s32 id);
s32 amDma_QueueHandler(s32 id, s32 ch, void *arg);

void amDma_Init(s32 n, s32 install) {
    s32 i;
    for (i = 0; i < 2; i++) {
        gDmaQueue[i].mask = 0;
        gDmaQueueBusy[i] = -1;
    }
    for (i = 0; i < 16; i++) {
        gDmaChanQueue[i] = -1;
        gDmaChanNextQueue[i] = -1;
        D_0047E060[i] = -1;
        D_0047E070[i] = -1;
    }
    gDmaQueueSize = n;
    for (i = 0; i < 2; i++) {
        gDmaQueueReqs[i] = func_00124940(0x40, n * sizeof(DmaReq));
    }
    if (install) {
        amDma_SetQueueMask(0, 6);
        amDma_SetQueueMask(1, 0x300);
        amDma_InstallHandlers();
    }
}

void amDma_SetQueueMask(s32 ch, s32 mask) {
    DmaQueue *q = &gDmaQueue[ch];
    q->mask = mask;
    q->unk2 = 0;
    q->count = 0;
    q->head = 0;
    q->tail = 0;
    q->total = 0;
}

void amDma_InstallHandlers(void) {
    s32 bit;
    s32 found;
    DmaQueue *q;
    s32 ch;
    s32 j;

    DI();
    for (bit = 1, ch = 0; ch < 16; ch++, bit <<= 1) {
        q = gDmaQueue;
        found = 0;
        for (j = 0; j < 2; j++, q++) {
            if (q->mask & bit) {
                AddDmacHandler2(ch, amDma_QueueHandler, -1, j);
                found = 1;
            }
        }
        if (found) {
            AddDmacHandler(ch, amDma_EndHandler, -1);
            func_0010AE78(ch);
        }
    }
    EI();
}

void amDma_ResetQueue(s32 ch) {
    DmaQueue *q = &gDmaQueue[ch];
    DI();
    if (q->count) {
        scePrintf(D_0045F550, ch, q->count, q->total);
    }
    q->unk2 = 0;
    q->count = 0;
    q->head = 0;
    q->tail = 0;
    q->total = 0;
    EI();
}

void amDma_WaitQueue(s32 ch) {
    volatile DmaQueue *q = &gDmaQueue[ch];
    volatile s32 *busy = &gDmaQueueBusy[ch];
    do {
        while (q->count != 0) {}
    } while (*busy >= 0);
}

void amDma_SendToSpr(s32 sadr, s32 qwc, s32 tadr, s32 wait) {
    amDma_Request(1, 9, 1, 0, 0, qwc, tadr, sadr);
    if (wait) amDma_WaitQueue(1);
}

void amDma_SendFromSpr(s32 qwc, s32 sadr, s32 tadr, s32 wait) {
    amDma_Request(1, 8, 0, 0, 0, qwc, tadr, sadr);
    if (wait) amDma_WaitQueue(1);
}

s32 amDma_Request(s32 ch, s32 id, s32 tte, s32 mode, s32 madr, s32 qwc, s32 tadr, s32 sadr) {
    DmaQueue *q = &gDmaQueue[ch];
    DmaReq *e;
    DI();
    if (q->count >= gDmaQueueSize) {
        EI();
        return -1;
    }
    e = &gDmaQueueReqs[ch][q->tail];
    e->chan = id;
    e->chcr = (tte & 1) | ((mode & 3) << 2) | 0x140;
    e->madr = madr;
    e->qwc = qwc;
    e->tadr = tadr;
    e->sadr = sadr;
    q->tail = (q->tail + 1) & (gDmaQueueSize - 1);
    q->count++;
    q->total++;
    if (q->count == 1 && gDmaChanQueue[id] == -1) {
        if (amDma_StartNext(ch, id) != -1) {
            gDmaChanQueue[id] = ch;
        }
    }
    EI();
    return 0;
}

#if 0
/* Differs in 14 of 92: the original sign-extends the loaded head before adding 1 (source form not found). */
        if (amDma_StartNext(ch, id) != -1) {
            gDmaChanQueue[id] = ch;
        }
    }
    EI();
    return 0;
}
#endif
INCLUDE_ASM("asm/nonmatchings/sys/unk_140890", amDma_StartNext);

s32 amDma_QueueHandler(s32 id, s32 ch, void *arg) {
    DmaQueue *q;
    *(volatile u32 *)0x1000E010;
    *D_003F0900[id];
    if (gDmaQueueBusy[ch] >= 0) {
        if (gDmaChanQueue[id] == ch) {
            gDmaQueueBusy[ch] = -1;
            gDmaChanQueue[id] = -1;
            if (amDma_StartNext(ch, id) != -1) {
                gDmaChanNextQueue[id] = ch;
            } else {
                q = &gDmaQueue[ch];
                if (q->count > 0) {
                    id = gDmaQueueReqs[ch][q->head].chan;
                    if (gDmaChanQueue[id] == -1) {
                        if (amDma_StartNext(ch, id) != -1) {
                            gDmaChanQueue[id] = ch;
                        }
                    }
                }
            }
        }
    } else {
        if (amDma_StartNext(ch, id) != -1) {
            gDmaChanNextQueue[id] = ch;
        }
    }
    asm("sync");
    asm("ei");
    return 0;
}
