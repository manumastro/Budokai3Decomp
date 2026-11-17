#include "common.h"

INCLUDE_ASM("asm/nonmatchings/menu/mn_TourMap", func_00304970);
INCLUDE_ASM("asm/nonmatchings/menu/mn_TourMap", func_00304CF0);
extern u8 D_005CA030[];
extern u8 D_004B4B57[];
extern u8 D_004B4B58[];
extern u8 D_005D0082[];
extern void func_00125740(void *, s32, s32);
extern s32 D_0047097C;
extern void amCdFs_Close(void *, s32);
extern void *amFile_Load();

void func_00304DC0(s32 a0, s32 a1) {
    memset(D_005CA030, 0, 0x6060);
    func_00125740(D_005CA030, a0, 0x5DD0);
    D_004B4B57[0] = a1;
    D_004B4B58[0] = 0;
    if (a1 < 3) {
        D_005D0082[0] = a1 + 3;
    } else {
        D_005D0082[0] = 5;
    }
}
extern u8 D_005CA030[];
extern s32 D_00470974;

void func_00304E50(void) {
    D_00470974 = 0;
    memset(D_005CA030, 0, 0x6060);
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_TourMap", func_00304E70);
extern void *amTask_Create();
extern void func_00304CF0();
extern char D_0046F9A0[];

void func_00304F50(void) {
    *(void **)((u8 *)D_00470974 + 0x3C) = amTask_Create(func_00304CF0, 0, 0x3000, 0x200, 0x2000, D_0046F9A0);
    memset(*(u8 **)((u8 *)D_00470974 + 0x3C) + 0x30, 0, 0xC);
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_TourMap", func_00304FB0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_TourMap", func_00305130);
INCLUDE_ASM("asm/nonmatchings/menu/mn_TourMap", func_003053D0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_TourMap", func_00305590);
INCLUDE_ASM("asm/nonmatchings/menu/mn_TourMap", func_00305680);
s32 func_00305830(s32 a0) {
    switch (a0) {
    case 0:
        return 0;
    case 2:
        return 1;
    case 3:
        return 2;
    case 4:
        return 3;
    case 7:
        return 4;
    case 0xA:
        return 5;
    case 0xB:
        return 6;
    case 0xC:
        return 7;
    case 0xD:
        return 8;
    case 0x11:
        return 9;
    case 0x22:
        return 10;
    }
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_TourMap", func_00305910);
extern u8 D_004E05DC[];
extern void func_00144A40(s32, f32, s32);
extern void amAdx_SetVolume(s32, f32);
extern void amAdx_Stop(s32);

extern void func_002A9080(void *);

void func_00305A30(u8 *a0) {
    u8 *s0;
    s0 = (u8 *)&D_004E05DC[0];
    func_00144A40(-1, *(f32 *)(s0 + 0x38), 0);
    amAdx_SetVolume(0, *(f32 *)(s0 + 0x34));
    amAdx_SetVolume(1, *(f32 *)(s0 + 0x3C));
    amAdx_SetVolume(2, *(f32 *)(s0 + 0x3C));
    amAdx_SetVolume(3, *(f32 *)(s0 + 0x3C));
    amAdx_Stop(0);
    amAdx_Stop(1);
    amAdx_Stop(2);
    amAdx_Stop(3);
    func_002A9080(*(void **)a0);
}
extern u8 D_004E05DC[];
extern void func_00144A40(s32, f32, s32);
extern void amAdx_SetVolume(s32, f32);
extern void amAdx_Stop(s32);

void func_00305AD0(void) {
    u8 *s0;
    s0 = (u8 *)&D_004E05DC[0];
    func_00144A40(-1, *(f32 *)(s0 + 0x38), 0);
    amAdx_SetVolume(0, *(f32 *)(s0 + 0x34));
    amAdx_SetVolume(1, *(f32 *)(s0 + 0x3C));
    amAdx_SetVolume(2, *(f32 *)(s0 + 0x3C));
    amAdx_SetVolume(3, *(f32 *)(s0 + 0x3C));
    amAdx_Stop(0);
    amAdx_Stop(1);
    amAdx_Stop(2);
    amAdx_Stop(3);
}
extern void *D_00470980;
extern void amHeap_Free(void *);
void func_00305B60(u8 *a0) {
    u8 *s0;
    s0 = (u8 *)&D_004E05DC[0];
    func_00144A40(-1, *(f32 *)(s0 + 0x38), 0);
    amAdx_SetVolume(0, *(f32 *)(s0 + 0x34));
    amAdx_SetVolume(1, *(f32 *)(s0 + 0x3C));
    amAdx_SetVolume(2, *(f32 *)(s0 + 0x3C));
    amAdx_SetVolume(3, *(f32 *)(s0 + 0x3C));
    amAdx_Stop(0);
    amAdx_Stop(1);
    amAdx_Stop(2);
    amAdx_Stop(3);
    if (D_00470980 != 0) {
        amHeap_Free(D_00470980);
        D_00470980 = 0;
    }
    func_002A9080(*(void **)a0);
}
extern u8 D_004E05DC[];
extern void func_00144A40(s32, f32, s32);
extern void amAdx_SetVolume(s32, f32);
extern void amAdx_Stop(s32);

void func_00305C20(void) {
    u8 *s0;
    s0 = (u8 *)&D_004E05DC[0];
    func_00144A40(-1, *(f32 *)(s0 + 0x38), 0);
    amAdx_SetVolume(0, *(f32 *)(s0 + 0x34));
    amAdx_SetVolume(1, *(f32 *)(s0 + 0x3C));
    amAdx_SetVolume(2, *(f32 *)(s0 + 0x3C));
    amAdx_SetVolume(3, *(f32 *)(s0 + 0x3C));
    amAdx_Stop(0);
    amAdx_Stop(1);
    amAdx_Stop(2);
    amAdx_Stop(3);
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_TourMap", func_00305CB0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_TourMap", func_00305E90);
#if 0
// differs: the second loop's counter and pointer take the registers of the first loop (s0/s1 swapped), the same variable cannot be reused in C
void func_00306060(void) {
    s32 i;
    u8 *s2;
    u8 *s0;
    u8 *s1;
    u8 *p;

    s2 = (u8 *)D_0047097C;
    i = 0;
    s0 = s2;
    do {
        p = *(u8 **)(s0 + 0x24);
        *(s32 *)(s0 + 0x24) = *(s32 *)(p + 0x40);
        *(s32 *)(p + 0x40) = 0;
        amCdFs_Close(p, 0);
        i++;
        s0 += 4;
    } while (i < 0x2C);
    *(s32 *)(s2 + 0xD4) = *(s32 *)(*(u8 **)(s2 + 0x24) + 0x50);
    *(s32 *)(s2 + 0xD8) = *(s32 *)(*(u8 **)(s2 + 0x28) + 0x50);
    *(s32 *)(s2 + 0xF4) = *(s32 *)(*(u8 **)(s2 + 0x44) + 0x50);
    i = 0;
    s1 = s2;
    do {
        *(s32 *)(s1 + 0x150) = *(s32 *)(*(u8 **)(s1 + 0xA8) + 0x50);
        amFile_Load(*(void **)(s1 + 0x150), 0);
        i++;
        s1 += 4;
    } while (i < 2);
    *(s32 *)(s2 + 0x158) = *(s32 *)(*(u8 **)(s2 + 0xB0) + 0x50);
    amFile_Load(*(void **)(s2 + 0x158), 0);
    *(s32 *)(s2 + 0x15C) = *(s32 *)(*(u8 **)(s2 + 0xB4) + 0x50);
    *(s32 *)(s2 + 0x160) = *(s32 *)(*(u8 **)(s2 + 0xB8) + 0x50);
}
#endif
INCLUDE_ASM("asm/nonmatchings/menu/mn_TourMap", func_00306060);
INCLUDE_ASM("asm/nonmatchings/menu/mn_TourMap", func_00306140);
