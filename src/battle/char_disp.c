#include "common.h"

INCLUDE_ASM("asm/nonmatchings/battle/char_disp", func_0029DB00);
INCLUDE_ASM("asm/nonmatchings/battle/char_disp", func_0029DD30);
INCLUDE_ASM("asm/nonmatchings/battle/char_disp", func_0029E120);
INCLUDE_ASM("asm/nonmatchings/battle/char_disp", func_0029E450);
INCLUDE_ASM("asm/nonmatchings/battle/char_disp", func_0029E610);
extern s32 func_001CAA30(s32 *);
s32 func_0029E7F0(u8 *a0) {
    if (a0 == 0) {
        return 1;
    }
    if (*(s32 *)(a0 + 0x2A0) == 0) {
        return 1;
    }
    if (func_001CAA30(*(s32 **)a0) != 0 && *(s16 *)(*(s32 *)(a0 + 0x2A0) + 4) == 3) {
        return 1;
    }
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/battle/char_disp", func_0029E870);
extern s32 func_001CAAB0(s32, s32, s32, s32, s32);
extern u8 *func_0029E870(s32, s32, s32, s32);
void func_0029E9B0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6) {
    u8 *r = 0;

    if (a0 != -1) {
        r = (u8 *)func_001CAAB0(a0, a1, a2, a3, 1);
    }
    r = func_0029E870((s32)r, a4, a5, a6);
    if (r != 0) {
        r[0x2B8] = 1;
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/char_disp", func_0029EA20);
INCLUDE_ASM("asm/nonmatchings/battle/char_disp", func_0029EC40);
INCLUDE_ASM("asm/nonmatchings/battle/char_disp", func_0029EDC0);
// GIVEN UP: the loops over the three arrays are right in outline; the register use and the order of the loads differ (65 of 68 instructions in the first try)
#if 0
s32 func_0029EF70(void) {
    u8 *s = D_004708CC;
    s32 k = *(s32 *)(s + 0x30);
    s32 j;
    u8 *e;

    if (*(s32 *)(s + 4) > 0) {
        e = *(u8 **)(*(s32 *)(s + 0x44) + k * 4);
        for (j = 0; j < *(s32 *)(s + 4); j++) {
            if (*(s32 *)(e + 0x14) < 3) {
                return 1;
            }
            e += 0xE0;
        }
    }
    if (*(s32 *)(s + 8) >= 2) {
        e = *(u8 **)(*(s32 *)(s + 0x48) + k * 4) + 0x20;
        for (j = 1; j < *(s32 *)(s + 8); j++) {
            if (*(s32 *)(e + 0x14) < 3) {
                return 1;
            }
            e += 0x20;
        }
    }
    if (*(s32 *)(s + 0xC) > 0) {
        e = *(u8 **)(*(s32 *)(s + 0x4C) + k * 4);
        for (j = 0; j < *(s32 *)(s + 0xC); j++) {
            if (*(s32 *)(e + 0x18) < 3) {
                return 1;
            }
            e += 0x2C;
        }
    }
    return 0;
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/char_disp", func_0029EF70);
INCLUDE_ASM("asm/nonmatchings/battle/char_disp", func_0029F070);
INCLUDE_ASM("asm/nonmatchings/battle/char_disp", func_0029F180);
INCLUDE_ASM("asm/nonmatchings/battle/char_disp", func_0029F350);
INCLUDE_ASM("asm/nonmatchings/battle/char_disp", func_0029F470);
// differs: Compiled 0xD4 bytes against 0x100: the original tests state 2 first, then 1, then 0, and places the state 2 block at the end; ours lays out the state 0 and state 1 blocks differently. Recursion in state 0 matches.
#if 0
void func_0029F730(u8 *a0, f32 dt) {
    s32 st = *(s32 *)(a0 + 0x10);
    f32 c;
    if (st != 2) {
        if (st == 1) {
            c = *(f32 *)(a0 + 0xC) + dt;
            *(f32 *)(a0 + 0xC) = c;
            if (*(f32 *)(a0 + 0x8) < 0.0f) {
                return;
            }
            if (c - *(f32 *)a0 < *(f32 *)(a0 + 0x8)) {
                return;
            }
            *(s32 *)(a0 + 0x10) = st + 1;
        } else if (st == 0) {
            c = *(f32 *)(a0 + 0xC) + dt;
            *(f32 *)(a0 + 0xC) = c;
            if (c < *(f32 *)a0) {
                return;
            }
            *(s32 *)(a0 + 0x10) = st + 1;
            func_0029F730(a0, dt);
        }
    } else {
        c = *(f32 *)(a0 + 0xC) + dt;
        *(f32 *)(a0 + 0xC) = c;
        if (c - *(f32 *)a0 - *(f32 *)(a0 + 0x8) < *(f32 *)(a0 + 0x4)) {
            return;
        }
        *(s32 *)(a0 + 0x10) = st + 1;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/char_disp", func_0029F730);

INCLUDE_ASM("asm/nonmatchings/battle/char_disp", func_0029F830);
INCLUDE_ASM("asm/nonmatchings/battle/char_disp", func_0029FA90);
