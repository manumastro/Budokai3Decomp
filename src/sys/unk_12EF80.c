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

asm void func_0012EF80(void) {
    srl        $a3, $a2, 2
    b          L0012EFB4
    andi      $a2, $a2, 0x3
L0012EF8C:
    lq         $t0, 0x0($a1)
    lq         $t1, 0x10($a1)
    lq         $t2, 0x20($a1)
    lq         $t3, 0x30($a1)
    sq         $t0, 0x0($a0)
    sq         $t1, 0x10($a0)
    sq         $t2, 0x20($a0)
    sq         $t3, 0x30($a0)
    addiu      $a0, $a0, 0x40
    addiu      $a1, $a1, 0x40
L0012EFB4:
    bgtzl      $a3, L0012EF8C
    addi      $a3, $a3, -0x1
    blez       $a2, L0012EFDC
    lq        $t0, 0x0($a1)
L0012EFC4:
    addi       $a2, $a2, -0x1
    sq         $t0, 0x0($a0)
    addiu      $a0, $a0, 0x10
    lq         $t0, 0x10($a1)
    bgtz       $a2, L0012EFC4
    addiu     $a1, $a1, 0x10
L0012EFDC:
    add        $v0, $zero, $a0
    jr         $ra
    nop
}
asm void func_0012EFF0(void) {
    b          L0012F020
    nop
L0012EFF8:
    addi       $a2, $a2, -0x1
    lq         $t0, -0x40($a1)
    lq         $t1, -0x30($a1)
    lq         $t2, -0x20($a1)
    lq         $t3, -0x10($a1)
    sq         $t0, 0x0($a0)
    sq         $t1, 0x10($a0)
    sq         $t2, 0x20($a0)
    sq         $t3, 0x30($a0)
    addiu      $a0, $a0, 0x40
L0012F020:
    bgtz       $a2, L0012EFF8
    addiu     $a1, $a1, 0x40
    add        $v0, $zero, $a0
    jr         $ra
    nop
}
Q *amDma_CopyViaSpr(Q *dst, Q *src, s32 n) {
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

void amDraw_ResetPackets(void) {
    amPkt_Reset();
    func_00133780(2, 0);
}

INCLUDE_ASM("asm/nonmatchings/sys/unk_12EF80", func_0012F2C0);
