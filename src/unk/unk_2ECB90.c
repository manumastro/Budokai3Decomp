#include "common.h"

extern void func_001F5CB0(void *);

void func_002ECB90(void) {
}

void func_002ECBA0(void *a0) {
    a0 = *(void **)((char *)a0 + 0x10);
    if (*(void **)((char *)a0 + 0x10) != NULL) {
        func_001F5CB0(a0);
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2ECB90", func_002ECBD0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2ECB90", func_002ECCE0);
extern void *A2d_AllocObj(s32, f32);
extern void memset(void *, s32, s32);

void func_002ECE20(u8 *o, u8 *row, u8 *e) {
    u8 *s5;
    u8 *p;
    s16 x;
    s32 i;
    u8 *s1;
    s16 y;
    s32 v;
    u8 *s0;

    s5 = o;
    i = 0;
    s1 = e;
    s0 = row;
    do {
        v = *(s16 *)(s1 + 0x18);
        if (v > 0x40 || v < 0) {
            *(void **)(s0 + 0x18) = 0;
        } else {
            x = (v % 18) * 24;
            y = (v / 18) * 24;
            *(void **)(s0 + 0x18) = p = A2d_AllocObj(0, 0.0f);
            memset(p, 0, 0x60);
            *(s32 *)(p + 0x4) = 1;
            *(s32 *)(p + 0x10) = *(s32 *)(s5 + 0x240);
            *(s32 *)(p + 0x14) = 0x4000;
            *(s16 *)(p + 0x18) = 0x12;
            *(s16 *)(p + 0x1A) = 0;
            *(s32 *)(p + 0x20) = 0;
            *(s32 *)(p + 0x24) = 0;
            *(s32 *)(p + 0x28) = 0;
            *(f32 *)(p + 0x2C) = 1.0f;
            *(f32 *)(p + 0x34) = -11.0f;
            *(f32 *)(p + 0x3C) = 11.0f;
            *(f32 *)(p + 0x30) = -11.0f;
            *(f32 *)(p + 0x38) = 11.0f;
            *(f32 *)(p + 0x44) = 1.0f + (f32)y;
            *(f32 *)(p + 0x40) = 1.0f + (f32)x;
            *(f32 *)(p + 0x48) = 22.0f + (f32)x;
            *(f32 *)(p + 0x4C) = 22.0f + (f32)y;
            *(f32 *)(p + 0x50) = 1.0f;
            *(f32 *)(p + 0x54) = 1.0f;
            *(f32 *)(p + 0x58) = 1.0f;
            *(f32 *)(p + 0x5C) = 1.0f;
        }
        i++;
        s1 += 2;
        s0 += 4;
    } while (i < 8);
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2ECB90", func_002ECFD0);
