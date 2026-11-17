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

extern DmaQueue D_0047E080[2];
extern s32 D_004704B0[2];
extern DmaReq *D_00470310[2];
extern s32 D_0047030C;
extern s8 D_0047E040[16];
extern s8 D_0047E050[16];
extern s8 D_0047E060[16];
extern s8 D_0047E070[16];
extern volatile u32 *D_003F08D0[];
extern volatile u32 *D_003F0900[];
extern char D_0045F550[];
extern void *func_00124940(s32, s32);
extern void DI(void);
extern void EI(void);
extern s32 AddDmacHandler2(s32, s32 (*)(s32, s32, void *), s32, s32);
extern s32 AddDmacHandler(s32, s32 (*)(s32), s32);
extern s32 func_0010AE78(s32);
extern void scePrintf(char *, s32, s32, s32);
extern s32 func_00141230(s32);
void func_00140A10(s32 ch, s32 mask);
void func_00140A50(void);
void func_00140BF0(s32 ch);
s32 func_00140D30(s32 ch, s32 id, s32 tte, s32 mode, s32 madr, s32 qwc, s32 tadr, s32 sadr);
s32 func_00140EF0(s32 ch, s32 id);
s32 func_00141070(s32 id, s32 ch, void *arg);

void func_00140890(s32 n, s32 install) {
    s32 i;
    for (i = 0; i < 2; i++) {
        D_0047E080[i].mask = 0;
        D_004704B0[i] = -1;
    }
    for (i = 0; i < 16; i++) {
        D_0047E040[i] = -1;
        D_0047E050[i] = -1;
        D_0047E060[i] = -1;
        D_0047E070[i] = -1;
    }
    D_0047030C = n;
    for (i = 0; i < 2; i++) {
        D_00470310[i] = func_00124940(0x40, n * sizeof(DmaReq));
    }
    if (install) {
        func_00140A10(0, 6);
        func_00140A10(1, 0x300);
        func_00140A50();
    }
}

void func_00140A10(s32 ch, s32 mask) {
    DmaQueue *q = &D_0047E080[ch];
    q->mask = mask;
    q->unk2 = 0;
    q->count = 0;
    q->head = 0;
    q->tail = 0;
    q->total = 0;
}

void func_00140A50(void) {
    s32 bit;
    s32 found;
    DmaQueue *q;
    s32 ch;
    s32 j;

    DI();
    for (bit = 1, ch = 0; ch < 16; ch++, bit <<= 1) {
        q = D_0047E080;
        found = 0;
        for (j = 0; j < 2; j++, q++) {
            if (q->mask & bit) {
                AddDmacHandler2(ch, func_00141070, -1, j);
                found = 1;
            }
        }
        if (found) {
            AddDmacHandler(ch, func_00141230, -1);
            func_0010AE78(ch);
        }
    }
    EI();
}

void func_00140B50(s32 ch) {
    DmaQueue *q = &D_0047E080[ch];
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

void func_00140BF0(s32 ch) {
    volatile DmaQueue *q = &D_0047E080[ch];
    volatile s32 *busy = &D_004704B0[ch];
    do {
        while (q->count != 0) {}
    } while (*busy >= 0);
}

void func_00140C50(s32 sadr, s32 qwc, s32 tadr, s32 wait) {
    func_00140D30(1, 9, 1, 0, 0, qwc, tadr, sadr);
    if (wait) func_00140BF0(1);
}

void func_00140CC0(s32 qwc, s32 sadr, s32 tadr, s32 wait) {
    func_00140D30(1, 8, 0, 0, 0, qwc, tadr, sadr);
    if (wait) func_00140BF0(1);
}

s32 func_00140D30(s32 ch, s32 id, s32 tte, s32 mode, s32 madr, s32 qwc, s32 tadr, s32 sadr) {
    DmaQueue *q = &D_0047E080[ch];
    DmaReq *e;
    DI();
    if (q->count >= D_0047030C) {
        EI();
        return -1;
    }
    e = &D_00470310[ch][q->tail];
    e->chan = id;
    e->chcr = (tte & 1) | ((mode & 3) << 2) | 0x140;
    e->madr = madr;
    e->qwc = qwc;
    e->tadr = tadr;
    e->sadr = sadr;
    q->tail = (q->tail + 1) & (D_0047030C - 1);
    q->count++;
    q->total++;
    if (q->count == 1 && D_0047E040[id] == -1) {
        if (func_00140EF0(ch, id) != -1) {
            D_0047E040[id] = ch;
        }
    }
    EI();
    return 0;
}

#if 0
/* Differs in 14 of 92: the original sign-extends the loaded head before adding 1 (source form not found). */
        if (func_00140EF0(ch, id) != -1) {
            D_0047E040[id] = ch;
        }
    }
    EI();
    return 0;
}
#endif
INCLUDE_ASM("asm/nonmatchings/sys/unk_140890", func_00140EF0);

s32 func_00141070(s32 id, s32 ch, void *arg) {
    DmaQueue *q;
    *(volatile u32 *)0x1000E010;
    *D_003F0900[id];
    if (D_004704B0[ch] >= 0) {
        if (D_0047E040[id] == ch) {
            D_004704B0[ch] = -1;
            D_0047E040[id] = -1;
            if (func_00140EF0(ch, id) != -1) {
                D_0047E050[id] = ch;
            } else {
                q = &D_0047E080[ch];
                if (q->count > 0) {
                    id = D_00470310[ch][q->head].chan;
                    if (D_0047E040[id] == -1) {
                        if (func_00140EF0(ch, id) != -1) {
                            D_0047E040[id] = ch;
                        }
                    }
                }
            }
        }
    } else {
        if (func_00140EF0(ch, id) != -1) {
            D_0047E050[id] = ch;
        }
    }
    asm("sync");
    asm("ei");
    return 0;
}
