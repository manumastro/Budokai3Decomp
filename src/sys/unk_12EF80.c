#include "common.h"

/* A quadword, the unit of the DMA transfers. */
typedef struct Q {
    u32 w[4];
} Q;

/* The DMA tag that ends a packet chain (tag word, address, padding). */
typedef struct DmaTag {
    u32 tag;
    void *addr;
    u64 pad;
} DmaTag;

extern void amDma_SendToSpr(s32, Q *, s32, s32);
extern void amDma_SendFromSpr(Q *, s32, s32, s32);
/* the packet area (uncached accelerated): start, end, and the two ends allocated from */
extern u8 *D_00470220;
extern u8 *D_00470224;
extern u8 *gPacketPtr;
extern u8 *D_0047022C;
extern s32 D_00470230, D_00470238, D_00470240, D_00470244, D_00470248, D_0047024C, D_00470270, D_00470288, D_0047028C;
extern void *D_0047CAA0[10];
extern DmaTag D_0047C8C0;
extern u32 D_00459200[];
extern void amNode_Clear24(void);
extern void func_00145B40(s32);
extern void amPkt_Reset(void);
extern void func_00133780(s32, s32);

INCLUDE_ASM("asm/nonmatchings/sys/unk_12EF80", func_0012EF80);
INCLUDE_ASM("asm/nonmatchings/sys/unk_12EF80", func_0012EFF0);
Q *func_0012F040(Q *dst, Q *src, s32 n) {
    s32 c;

    while (n != 0) {
        c = (n > 0x400) ? 0x400 : n;
        amDma_SendToSpr(0, src, c, 1);
        amDma_SendFromSpr(dst, 0, c, 1);
        n -= c;
        c <<= 4;
        src = (Q *)((u32)src + c);
        dst = (Q *)((u32)dst + c);
    }
    return dst;
}

void amPkt_Init(u32 base, s32 size) {
    s32 i;

    D_00470220 = (u8 *)(base | 0x30000000);
    gPacketPtr = D_00470220;
    D_00470224 = D_00470220 + size;
    D_0047022C = D_00470224;
    for (i = 0; i < 10; i++) {
        D_0047CAA0[i] = 0;
    }
    D_0047CAA0[3] = amNode_Clear24;
    amPkt_Reset();
}

void amPkt_Reset(void) {
    gPacketPtr = D_00470220;
    D_0047022C = D_00470224;
    D_00470230 = 0;
    D_00470240 = -1;
    D_00470244 = -1;
    D_00470270 = -1;
    D_00470288 = 0;
    D_0047028C = 0;
    D_00470238 = 0;
    D_00470248 = -1;
    D_0047024C = -1;
    D_0047C8C0.tag = 0x3000001E;
    D_0047C8C0.addr = D_00459200;
    D_0047C8C0.pad = 0;
    func_00145B40(2);
}

u8 *amPkt_Alloc(s32 n) {
    u8 *p = gPacketPtr;
    gPacketPtr += (n + 15) & ~15;
    return p;
}

u8 *amPkt_AllocTop(s32 n) {
    n = (n + 15) >> 4;
    D_0047022C -= n << 4;
    return D_0047022C;
}

void func_0012F290(void) {
    amPkt_Reset();
    func_00133780(2, 0);
}

INCLUDE_ASM("asm/nonmatchings/sys/unk_12EF80", func_0012F2C0);
