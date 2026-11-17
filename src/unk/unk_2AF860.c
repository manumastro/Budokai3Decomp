#include "common.h"

extern void func_002AF650(void *, void *);
void func_002AF860(u8 *a, u8 *b) {
    f32 f = *(f32 *)(*(u8 **)(b + 0x2C) + 4);
    *(f32 *)(a + 0x30) = f;
    *(void **)(a + 0x10) = func_002AF650;
    func_002AF650(a, b);
}
extern u8 D_005BCD20[];
extern u8 D_005BCD20[];
#if 0
s32 func_002AF880(s32 **a, u8 *b) {
    u8 *p = *(u8 **)(b + 0x2C);
    u8 *e = D_005BCD20 + **a * 40 + *(s32 *)(p + 0xC) * 160;
    *(s32 *)(e + 0x18) = *(s32 *)(p + 8);
    *(s32 *)(e + 0x10) = *(s32 *)(p + 4);
    *(s32 *)(e + 0x14) = *(s32 *)(p + 0);
    return 1;
}
// differs: the table stores come in the order 0x18, 0x10, 0x14 with the loads of the fields between them; this build hoists all the field loads above the stores
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AF860", func_002AF880);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AF860", func_002AF8E0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AF860", func_002AF9E0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AF860", func_002AFB20);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AF860", func_002AFBC0);
extern s32 amCdFs_ReadFile(s32, s32, s32);
void func_002AFCA0(u8 *a, u8 *b) {
    *(s32 *)a = amCdFs_ReadFile(*(s32 *)(b + 0x20) + *(s32 *)*(u8 **)(b + 0x2C), 0, 1);
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AF860", func_002AFCE0);
extern void amCdFs_SetHeap(s32);
extern s32 amCdFs_ReadFile(s32, s32, s32);
extern void func_002AFCE0(void);
extern void amCdFs_SetHeap(s32);
extern s32 amCdFs_ReadFile(s32, s32, s32);
extern void func_002AFCE0(void);
extern void amCdFs_SetHeap(s32);
extern s32 amCdFs_ReadFile(s32, s32, s32);
extern void func_002AFCE0(void);
extern void amCdFs_SetHeap(s32);
extern s32 amCdFs_ReadFile(s32, s32, s32);
extern void func_002AFCE0(void);
extern void amCdFs_SetHeap(s32);
extern s32 amCdFs_ReadFile(s32, s32, s32);
extern void func_002AFCE0(void);
s32 func_002AFD80(u8 *a, u8 *b) {
    s32 s1;
    s32 s0;
    u8 *p = *(u8 **)(b + 0x2C);
    s1 = *(s32 *)(p + 8);
    s0 = *(s32 *)(p + 4);
    amCdFs_SetHeap(0);
    *(s32 *)b = s1;
    *(s32 *)(a + 0x18) = 0;
    *(s32 *)(a + 0x1C) = amCdFs_ReadFile(*(s32 *)(b + 0x20) + s0, 0, 1);
    *(void **)(a + 0x10) = func_002AFCE0;
    return 3;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AF860", func_002AFE00);
extern s32 amCdFs_ReadFile(s32, s32, s32);
extern void func_002AFE00(void);
s32 func_002AFFA0(u8 *a, u8 *b) {
    *(s32 *)b = *(s32 *)(*(u8 **)(b + 0x2C) + 4);
    *(s32 *)(a + 0x18) = 0;
    *(s32 *)(a + 0x1C) = amCdFs_ReadFile(*(s32 *)(b + 0x20) + *(s32 *)*(u8 **)(b + 0x2C), 0, 1);
    *(void **)(a + 0x10) = func_002AFE00;
    return 3;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AF860", func_002B0000);
extern s32 amCdFs_ReadFile(s32, s32, s32);
extern void func_002B0000(void);
s32 func_002B0130(u8 *a, u8 *b) {
    *(s32 *)b = *(s32 *)(*(u8 **)(b + 0x2C) + 4);
    *(s32 *)(a + 0x18) = 0;
    *(s32 *)(a + 0x1C) = amCdFs_ReadFile(*(s32 *)(b + 0x20) + *(s32 *)*(u8 **)(b + 0x2C), 0, 1);
    *(void **)(a + 0x10) = func_002B0000;
    return 3;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AF860", func_002B0190);
extern s32 amCdFs_ReadFile(s32, s32, s32);
extern void func_002B0190(void);
s32 func_002B0230(u8 *a, u8 *b) {
    *(s32 *)b = *(s32 *)(*(u8 **)(b + 0x2C) + 8);
    *(s32 *)(a + 0x18) = 0;
    *(s32 *)(a + 0x1C) = amCdFs_ReadFile(*(s32 *)(b + 0x20) + *(s32 *)*(u8 **)(b + 0x2C), 0, 1);
    *(void **)(a + 0x10) = func_002B0190;
    return 3;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AF860", func_002B0290);
extern s32 amCdFs_ReadFile(s32, s32, s32);
extern void func_002B0290(void);
s32 func_002B0330(u8 *a, u8 *b) {
    *(s32 *)b = *(s32 *)(*(u8 **)(b + 0x2C) + 4);
    *(s32 *)(a + 0x18) = 0;
    *(s32 *)(a + 0x1C) = amCdFs_ReadFile(*(s32 *)(b + 0x20) + *(s32 *)*(u8 **)(b + 0x2C), 0, 1);
    *(void **)(a + 0x10) = func_002B0290;
    return 3;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AF860", func_002B0390);
extern s32 amCdFs_ReadFile(s32, s32, s32);
extern void func_002B0390(void);
s32 func_002B0490(u8 *a, u8 *b) {
    *(s32 *)b = *(s32 *)(*(u8 **)(b + 0x2C) + 4);
    *(s32 *)(a + 0x18) = 0;
    *(s32 *)(a + 0x1C) = amCdFs_ReadFile(*(s32 *)(b + 0x20) + *(s32 *)*(u8 **)(b + 0x2C), 0, 1);
    *(void **)(a + 0x10) = func_002B0390;
    return 3;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AF860", func_002B04F0);
extern s32 amCdFs_ReadFile(s32, s32, s32);
extern void func_002B04F0(void);
s32 func_002B0590(u8 *a, u8 *b) {
    *(s32 *)b = *(s32 *)(*(u8 **)(b + 0x2C) + 4);
    *(s32 *)(a + 0x18) = 0;
    *(s32 *)(a + 0x1C) = amCdFs_ReadFile(*(s32 *)(b + 0x20) + *(s32 *)*(u8 **)(b + 0x2C), 0, 1);
    *(void **)(a + 0x10) = func_002B04F0;
    return 3;
}
extern void func_0012F2C0(void);
s32 func_002B05F0(void) {
    func_0012F2C0();
    return 0;
}
extern s32 func_002B05F0(void);
s32 func_002B0610(u8 *a) {
    *(void **)(a + 0x14) = func_002B05F0;
    return 1;
}
extern void func_0012F290(void);
s32 func_002B0630(void) {
    func_0012F290();
    return 1;
}
s32 func_002B0650(u8 *a) {
    s32 v = *(s32 *)(a + 0x24);
    s32 r;
    if (v <= 0) {
        *(s32 *)(a + 0x10) = 0;
        r = 1;
    } else {
        *(s32 *)(a + 0x24) = v - 1;
        r = 3;
    }
    return r;
}
s32 func_002B0680(void) {
    return 1;
}
s32 func_002B0690(void) {
    return 1;
}
extern f32 D_004708F8;
f32 func_002B06A0(void) {
    return D_004708F8;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AF860", func_002B06B0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AF860", func_002B0A40);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AF860", func_002B0BF0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AF860", func_002B0CA0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AF860", func_002B0E00);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AF860", func_002B1160);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AF860", func_002B1590);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AF860", func_002B16B0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AF860", func_002B1780);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AF860", func_002B1B10);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AF860", func_002B1C60);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AF860", func_002B1D70);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AF860", func_002B1E90);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2AF860", func_002B1FF0);
