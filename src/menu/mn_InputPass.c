#include "common.h"
#include "menu/menu.h"
extern s32 amCdFs_ReadFileId(s32, s32, s32);
extern void Help_Load();
extern void *amHeap_Alloc(s32, s32, char *, s32);
extern char D_0046F748[];
extern char D_0046F738[];
extern void func_002F2350();
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
void *func_002F26E0(void) {
    u8 *s0;
    u8 *s1;
    s32 a0;
    u16 k;
    void *v;
    void *w;

    s0 = (u8 *)gInputName;
    v = amTask_Create(func_002F2350, 0, 0x4000, 8, 2, D_0046F738);
    *(void **)(s0 + 0x18) = v;
    s0 = (u8 *)v;
    w = amHeap_Alloc(0x174, 0, D_0046F748, 0xB1);
    s1 = (u8 *)w;
    *(void **)(s0 + 0x30) = w;
    memset(s1, 0, 0x174);
    *(f32 *)(s1 + 0x11C) = 240.0f;
    *(f32 *)(s1 + 0x120) = 80.0f;
    a0 = 0;
    k = 0xFFFF;
    do {
        *(u16 *)(s1 + 0x128) = k;
        *(u16 *)(s1 + 0x12A) = k;
        a0 += 6;
        *(u16 *)(s1 + 0x12C) = k;
        *(u16 *)(s1 + 0x12E) = k;
        *(u16 *)(s1 + 0x130) = k;
        *(u16 *)(s1 + 0x132) = k;
        s1 += 0xC;
    } while (a0 < 0x24);
    return s0;
}
void func_002F27B0(void) {
    u8 *s0;
    void *v;

    if (gInputName != 0) {
        *(s16 *)((u8 *)gInputName + 0x1C) = *(s16 *)((u8 *)gInputName + 0x1C) + 1;
    } else {
        v = amHeap_Alloc(0x20, 0, D_0046F748, 0x83);
        gInputName = v;
        s0 = (u8 *)v;
        *(s32 *)s0 = amCdFs_ReadFileId(0x10824, 0, 0);
        *(s32 *)(s0 + 0x4) = amCdFs_ReadFileId(0x10825, 0, 0);
        *(s32 *)(s0 + 0x8) = amCdFs_ReadFileId(0x107FD, 0, 0);
        *(s32 *)(s0 + 0xC) = 0;
        *(s32 *)(s0 + 0x10) = 0;
        *(s32 *)(s0 + 0x14) = 0;
        *(s32 *)(s0 + 0x18) = 0;
        *(s16 *)(s0 + 0x1C) = 1;
        Help_Load();
    }
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F2870);
void func_002F2A10(u32 *task) {
    u8 *s3;
    s32 s2;
    u8 *s1;
    u32 *s0;
    void *v;
    s2 = 0;
    s3 = (u8 *)gInputName;
    s0 = task;
    do {
        v = func_0022DA90(0, 0.0f);
        s0[1] = (u32)v;
        s1 = (u8 *)v;
        memset(s1, 0, 0x60);
        *(s32 *)(s1 + 0x4) = 3;
        s2++;
        *(s32 *)(s1 + 0x10) = *(s32 *)(s3 + 0x10);
        *(s32 *)(s1 + 0x14) = 0x5000;
        *(s16 *)(s1 + 0x18) = 5;
        *(s16 *)(s1 + 0x1A) = 0;
        *(s32 *)(s1 + 0x20) = 0;
        *(s32 *)(s1 + 0x24) = 0;
        *(s32 *)(s1 + 0x28) = 0;
        *(f32 *)(s1 + 0x2C) = 1.0f;
        *(s32 *)(s1 + 0x34) = 0;
        *(s32 *)(s1 + 0x3C) = 0;
        *(s32 *)(s1 + 0x30) = 0;
        *(s32 *)(s1 + 0x38) = 0;
        *(s32 *)(s1 + 0x44) = 0;
        *(s32 *)(s1 + 0x40) = 0;
        *(s32 *)(s1 + 0x48) = 0;
        *(s32 *)(s1 + 0x4C) = 0;
        *(f32 *)(s1 + 0x50) = 1.0f;
        *(f32 *)(s1 + 0x54) = 1.0f;
        *(f32 *)(s1 + 0x58) = 1.0f;
        *(f32 *)(s1 + 0x5C) = 1.0f;
        s0++;
    } while (s2 < 8);
}
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
