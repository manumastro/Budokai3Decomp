#include "common.h"

extern s32 D_004708A4;
extern void func_0028F830(void);
extern void func_00133B50(void *, s32);

INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_0028E5D0);
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_0028E640);
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_0028E790);
extern s32 amGs_SetReg32(s32, s32);
extern void func_00133780(s32, s32);
extern void func_0022C700(void);

void func_0028EA80(void) {
    s32 s0 = amGs_SetReg32(0, 0x3040A);
    func_00133780(2, 1);
    func_0022C700();
    func_00133780(2, 0);
    amGs_SetReg32(0, s0);
}
extern void func_00133780(s32, s32);
extern void func_0022C700(void);

void func_0028EAE0(void) {
    func_00133780(2, 1);
    func_0022C700();
    func_00133780(2, 0);
}
void func_0028EB20(void) {
    func_00133B50(NULL, 0);
}
void func_0028EB30(void) {
}
extern void func_0028E5D0(void);

void func_0028EB40(s32 *p, s32 a1, s32 a2, s32 a3) {
    s32 *w = &p[0x30 / 4];
    s32 v;
    w[0] = a1;
    w[1] = a3;
    if (a2 == 0) {
        a2 = p[0x1C / 4];
    }
    w[2] = a2;
    v = (s32)func_0028E5D0;
    if (v == 0) {
        v = 0;
    }
    p[0x1C / 4] = v;
}
void func_0028EB80(void *p, s32 v) {
    ((s32 *)p)[0x14] = v;
}
void func_0028EB90(void *p, f32 x, f32 y) {
    *(f32 *)((char *)p + 0x4C) = y;
    *(f32 *)(*(char **)(*(char **)((char *)p + 0x3C)) + 0x10) = x;
}
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_0028EBB0);
void func_0028EBF0(void *p, s32 a1, s32 a2) {
    *(u16 *)((char *)p + 0x30) = (*(u16 *)((char *)p + 0x30) & -2) | a1;
    *(s32 *)((char *)p + 0x44) = a2;
}
void func_0028EC10(char *a0, char *a1, s32 a2, s32 a3) {
    s32 *arr = *(s32 **)(a1 + 0x1C);
    s32 *P = (s32 *)arr[a2];
    s32 *Q = (s32 *)P[2];
    *(s32 *)(a0 + 0x40) = Q[5];
    *(u16 *)(a0 + 0x30) = (*(u16 *)(a0 + 0x30) & -3) | (a3 & 2);
}
void func_0028EC50(void *p, s32 a1, s32 a2, s32 a3, s32 t0, s32 t1) {
    *(u16 *)((char *)p + 0x30) = t0;
    *(s32 *)((char *)p + 0x34) = a2;
    *(s32 *)((char *)p + 0x38) = a3;
    *(s16 *)((char *)p + 0x32) = -1;
    *(s32 *)((char *)p + 0x3C) = a1;
    *(s32 *)((char *)p + 0x40) = 0;
    *(s32 *)((char *)p + 0x44) = t1;
    *(s32 *)((char *)p + 0x4C) = 0x3F800000;
    *(s32 *)((char *)p + 0x50) = 0;
}
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_0028EC80);
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_0028EE90);
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_0028F090);
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_0028F720);
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_0028F830);
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_0028F930);
void func_00290320(void) {
    D_004708A4 = 0;
}
// func_00290330 (finds the entry of a table by its id and sets one field): the loop keeps the index and the pointer in the other registers; not matched yet.
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_00290330);
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_00290390);
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_00290410);
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_002904C0);
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_00290780);
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_002908D0);
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_00290A70);
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_00290AE0);
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_00290BB0);
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_00290C90);
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_00290D00);
void func_00291380(void) {
    func_0028F830();
}
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_00291390);
