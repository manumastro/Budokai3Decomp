#include "common.h"

INCLUDE_ASM("asm/nonmatchings/menu/mn_TourMap", func_00304970);
INCLUDE_ASM("asm/nonmatchings/menu/mn_TourMap", func_00304CF0);
extern u8 D_005CA030[];
extern u8 D_004B4B57[];
extern u8 D_004B4B58[];
extern u8 D_005D0082[];
extern void func_00125740(void *, s32, s32);

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
INCLUDE_ASM("asm/nonmatchings/menu/mn_TourMap", func_00305830);
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
INCLUDE_ASM("asm/nonmatchings/menu/mn_TourMap", func_00306060);
INCLUDE_ASM("asm/nonmatchings/menu/mn_TourMap", func_00306140);
