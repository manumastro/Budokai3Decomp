#include "common.h"

INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_pvsc", func_003077E0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_pvsc", func_00307AF0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_pvsc", func_00307C00);
extern void func_0022C700(void);
extern void func_00133B50(s32, s32);
extern void func_00139620(s32, f32, void *, s32, s32, s32);

void func_00307CF0(u8 *a0) {
    u8 *s0;
    s0 = a0;
    func_0022C700();
    func_00133B50(0, 0);
    func_00139620(0x900, 0.0f, s0 + 0x30, -1, 0x44, 0);
}
void func_00307D40(void) {
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_pvsc", func_00307D50);
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_pvsc", func_00307E40);
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_pvsc", func_00307F10);
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_pvsc", func_00308070);
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_pvsc", func_00308130);
extern void func_003077E0();

void func_003081E0(u8 *a0) {
    func_003077E0(*(void **)(a0 + 0x30));
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_pvsc", func_003081F0);
extern f32 gFrameDelta;
extern void func_003081F0();

void func_003083E0(u8 *a0) {
    u8 *s0;
    s0 = *(u8 **)(a0 + 0x30);
    func_003077E0(s0);
    *(f32 *)(s0 + 0x40) = *(f32 *)(s0 + 0x40) - gFrameDelta;
    if (*(f32 *)(s0 + 0x40) <= 0.0f) {
        *(void **)(a0 + 0x1C) = ((void *)func_003081F0 == 0) ? 0 : (void *)func_003081F0;
    }
}
extern f32 gFrameDelta;
extern void func_00229800();
extern void func_00307AF0();

#if 0
// differs: the frame is 0x50 in mine and 0x40 in the original, and the float compare uses f12 for zero; the call structure matches
void func_00308450(u8 *a0) {
    u8 *s0;
    u8 *s1;
    f32 tmp[2];
    s0 = a0;
    s1 = *(u8 **)(a0 + 0x30);
    func_003077E0(s1);
    *(f32 *)(s1 + 0x40) = *(f32 *)(s1 + 0x40) - gFrameDelta;
    if (*(f32 *)(s1 + 0x40) <= 0.0f) {
        func_00229800(*(void **)(*(u8 **)(*(u8 **)s1 + 0x1C) + 0x24), tmp, -1);
        *(f32 *)(s1 + 0x34) = tmp[0];
        *(f32 *)(s1 + 0x38) = tmp[1];
        *(s32 *)(s1 + 0x3C) = 0x42700000;
        func_00307AF0(s1);
        *(void **)(s0 + 0x1C) = ((void *)func_003081F0 == 0) ? 0 : (void *)func_003081F0;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_pvsc", func_00308450);
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_pvsc", func_00308500);
extern u8 *D_00470988;

void ArenaCharaselPvsc_Clear(void) {
    D_00470988 = 0;
    func_0027E040();
    ArenaList_ClearGlobal();
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_pvsc", func_00308860);
extern char D_0046FA50[];
extern char D_0046FA70[];
extern void *amTask_Create();
extern void *amHeap_Alloc(s32, s32, char *, s32);
extern void func_001F07D0();
extern void func_00308500();

#if 0
// differs: the task pointer is kept in a variable (move s0,v0) where the original adds 0x30 to the returned pointer directly (addiu s0,v0,48); lui/addiu of the callback address differ too
void func_00308980(void) {
    u8 *t;
    u8 *m;
    u8 *s0;
    s0 = D_00470988;
    *(void **)(s0 + 12) = t = amTask_Create(func_00308500, 0, 0x2000, 8, 2, D_0046FA50);
    *(s32 *)(t + 0x34) = 0xA;
    s0 = t + 0x30;
    *(void **)s0 = m = amHeap_Alloc(140, 0, D_0046FA70, 153);
    memset(m, 0, 140);
    func_001F07D0();
}
#endif
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaCharasel_pvsc", func_00308980);
extern u8 *D_00470988;
extern char D_0046FA70[];
extern s32 amCdFs_ReadFileId(s32, s32, s32);
extern void *amHeap_Alloc(s32, s32, char *, s32);
extern void func_0027E7E0(void);

void ArenaCharaselPvsc_Load(void) {
    u8 *s0;
    s0 = D_00470988 = amHeap_Alloc(0x14, 0, D_0046FA70, 0x71);
    *(s32 *)(s0 + 0xC) = 0;
    *(s32 *)(s0 + 0x0) = amCdFs_ReadFileId(0x10819, 0, 0);
    *(s32 *)(s0 + 0x4) = amCdFs_ReadFileId(0x1081A, 0, 0);
    func_0027E7E0();
}
