#include "common.h"
#include "menu/menu.h"
extern void *gInputName;
extern void *func_0022DA90(s32, f32);
extern void memset(void *, s32, s32);
extern void amHeap_Free(void *);
extern void *func_0022DA90(s32, f32);
extern void memset(void *, s32, s32);
extern void amHeap_Free(void *);

INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F06D0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F0870);
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F0960);
void func_002F0B00(u8 *task) {
    u8 *s1;
    u8 *s0;
    void *v;

    s1 = (u8 *)gInputName;
    s0 = task;
    v = func_0022DA90(0, 0.0f);
    *(void **)(s0 + 0x94) = v;
    s0 = (u8 *)v;
    memset(s0, 0, 0x60);
    *(s32 *)(s0 + 0x4) = 3;
    *(s32 *)(s0 + 0x10) = *(s32 *)(s1 + 0x10);
    *(s32 *)(s0 + 0x14) = 0x5000;
    *(s16 *)(s0 + 0x18) = 1;
    *(s16 *)(s0 + 0x1A) = 0;
    *(s32 *)(s0 + 0x8) = 1;
    *(s32 *)(s0 + 0xC) = 3;
    *(s32 *)(s0 + 0x20) = 0;
    *(s32 *)(s0 + 0x24) = 0;
    *(s32 *)(s0 + 0x28) = 0;
    *(f32 *)(s0 + 0x2C) = 1.0f;
    *(s32 *)(s0 + 0x34) = 0;
    *(s32 *)(s0 + 0x3C) = 0;
    *(s32 *)(s0 + 0x30) = 0;
    *(s32 *)(s0 + 0x38) = 0;
    *(s32 *)(s0 + 0x44) = 0;
    *(s32 *)(s0 + 0x40) = 0;
    *(s32 *)(s0 + 0x48) = 0;
    *(s32 *)(s0 + 0x4C) = 0;
    *(f32 *)(s0 + 0x50) = 1.0f;
    *(f32 *)(s0 + 0x54) = 1.0f;
    *(f32 *)(s0 + 0x58) = 1.0f;
    *(f32 *)(s0 + 0x5C) = 1.0f;
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F0BC0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F0D70);
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F0FD0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F10F0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F1300);
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F1500);
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F1650);
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F1770);
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F21B0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F2350);
extern void func_00125740(void *, void *, s32);

/* Copies 0x28 bytes of the task's work area (from 0xB4) to dst, when there is a task. */
void InputPass_CopyName(Task *t, void *dst) {
    if (t != 0) {
        func_00125740(dst, (char *)t->data.work + 0xB4, 0x28);
    }
}
/* The byte at 0x170 of the task's work area, 0 without a task. */
u8 InputPass_GetKind(Task *t) {
    u8 k;

    if (t == 0) {
        k = 0;
    } else {
        k = ((u8 *)t->data.work)[0x170];
    }
    return k;
}
extern void *gInputName;

/* Clears the input name pointer. */
void InputPass_ClearName(void) {
    gInputName = 0;
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F2500);
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F2600);
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F26E0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F27B0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F2870);
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F2A10);
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F2AF0);
void func_002F2C90(u8 *task) {
    u8 *s1;
    u8 *s0;
    void *v;

    s1 = (u8 *)gInputName;
    s0 = task;
    v = func_0022DA90(0, 0.0f);
    *(void **)(s0 + 0x24) = v;
    s0 = (u8 *)v;
    memset(s0, 0, 0x60);
    *(s32 *)(s0 + 0x4) = 3;
    *(s32 *)(s0 + 0x10) = *(s32 *)(s1 + 0x10);
    *(s32 *)(s0 + 0x14) = 0x5000;
    *(s16 *)(s0 + 0x18) = 1;
    *(s16 *)(s0 + 0x1A) = 0;
    *(s32 *)(s0 + 0x20) = 0;
    *(s32 *)(s0 + 0x24) = 0;
    *(s32 *)(s0 + 0x28) = 0;
    *(f32 *)(s0 + 0x2C) = 1.0f;
    *(s32 *)(s0 + 0x34) = 0;
    *(s32 *)(s0 + 0x3C) = 0;
    *(s32 *)(s0 + 0x30) = 0;
    *(s32 *)(s0 + 0x38) = 0;
    *(s32 *)(s0 + 0x44) = 0;
    *(s32 *)(s0 + 0x40) = 0;
    *(s32 *)(s0 + 0x48) = 0;
    *(s32 *)(s0 + 0x4C) = 0;
    *(f32 *)(s0 + 0x50) = 1.0f;
    *(f32 *)(s0 + 0x54) = 1.0f;
    *(f32 *)(s0 + 0x58) = 1.0f;
    *(f32 *)(s0 + 0x5C) = 1.0f;
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F2D50);
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F2F00);
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F3020);
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F3210);
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F3C60);
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F3E00);
/* Copies 0x10 bytes of the task's work area (from 0x50) to dst, when there is a task. */
void InputPass_CopyBuf(Task *t, void *dst) {
    if (t != 0) {
        func_00125740(dst, (char *)t->data.work + 0x50, 0x10);
    }
}
/* The byte at 0x60 of the task's work area, 0 without a task. */
u8 InputPass_GetPhase(Task *t) {
    u8 k;

    if (t == 0) {
        k = 0;
    } else {
        k = ((u8 *)t->data.work)[0x60];
    }
    return k;
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F3FA0);
