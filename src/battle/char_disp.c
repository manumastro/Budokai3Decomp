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
extern void *amHeap_Alloc(s32 size, s32 flag, char *file, s32 line);
extern void memset(void *, s32, s32);
extern s32 amCdFs_ReadFileId(s32, s32, s32);
extern char D_0046EA48[];
u8 *func_0029E870(s32 a0, s32 a1, s32 a2, s32 a3) {
    u8 *s0;
    s32 v;

    s0 = amHeap_Alloc(0x2C0, 0, D_0046EA48, 0xAC);
    memset(s0, 0, 0x2C0);
    s0[0x2B8] = 0;
    s0[0x2B9] = 0;
    if (a0 != 0) {
        *(s32 *)s0 = a0;
        *(s32 *)(s0 + 0x2A0) = *(s32 *)(a0 + 0x20);
    } else {
        v = amCdFs_ReadFileId(0xEFA, 0, 1);
        *(s32 *)(s0 + 0x2B0) = v;
        *(s32 *)(s0 + 0x2A0) = v;
        v = amCdFs_ReadFileId(0xEFB, 0, 1);
        *(s32 *)(s0 + 0x2B4) = v;
        *(s32 *)(s0 + 0x2A0) = v;
        a1 = 0xEF9;
    }
    if (a1 != -1) {
        v = amCdFs_ReadFileId(a1, 0, 1);
        *(s32 *)(s0 + 0x294) = v;
        *(s32 *)(s0 + 0x2A0) = v;
    }
    if (a2 != -1) {
        v = amCdFs_ReadFileId(a2, 0, 1);
        *(s32 *)(s0 + 0x298) = v;
        *(s32 *)(s0 + 0x2A0) = v;
    }
    if (a3 != -1) {
        v = amCdFs_ReadFileId(a3, 0, 1);
        *(s32 *)(s0 + 0x29C) = v;
        *(s32 *)(s0 + 0x2A0) = v;
    }
    return s0;
}
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
// GIVEN UP (round 5 chr2): best 63 of 68 (declare n1 before k, and the test 0 < n1). Still differs: the original loads k (a3) before the first slt $at, ours puts that load in the beqz delay slot; the return 0 / return 1 epilogue is laid out differently (the original falls into jr ra after daddu v0,zero,zero).
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
typedef struct DispAnim {
    /* 0x00 */ f32 f00;
    /* 0x04 */ f32 f04;
    /* 0x08 */ f32 f08;
    /* 0x0C */ f32 f0C;
    /* 0x10 */ s32 n10;
} DispAnim;

void func_0029F070(u8 *a0, f32 dt) {
    DispAnim *a2;
    s32 mode;

    *(f32 *)(a0 + 0x28) = *(f32 *)(a0 + 0x28) + 1.0f;
    a2 = (DispAnim *)(a0 + 8);
    mode = a2->n10;
    switch (mode) {
    case 0:
        if (!(a2->f0C < a2->f00)) {
            *(s32 *)(a0 + 0x24) = 1;
            a2->n10++;
        }
        a2->f0C = a2->f0C + dt;
        break;
    case 1:
        if (a2->f08 >= 0.0f && (a2->f0C - a2->f00) > a2->f08) {
            *(s32 *)(a0 + 0x24) = 0;
            a2->n10++;
        }
        a2->f0C = a2->f0C + dt;
        break;
    case 2:
        if ((a2->f0C - a2->f00) - a2->f08 > a2->f04) {
            a2->n10 = mode + 1;
        }
        a2->f0C = a2->f0C + dt;
        break;
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/char_disp", func_0029F180);
extern s32 D_00470704;
extern s32 D_0047070C;
extern s32 D_00470708;
extern s32 D_00470238;
extern void amModel_SetCurrent(s32, s32);
extern void func_00228430(s32);
extern void func_00227A30(u8 *);
extern void func_0022C060(f32, s32);
extern void func_00228410();
extern void func_0022CD00(s32);
// GIVEN UP (round 5 chr2): 4 of 70 differ, all in block 1 (the first s1->4 test). The original keeps the bltz delay slot a nop and the
// argument 0 of func_00228430 in the jal delay slot; ours moves the argument into the bltz slot. Tried: switch on the mode (cases ascending, 62 differ),
// if chain with empty bodies (this one, 4 differ), nested else (4 differ), a1c loaded before a18 (kept).
#if 0
void func_0029F350(u8 *s1, u8 *s0) {
    s32 s2;
    s32 a18;
    s32 a1c;
    s32 mode;

    mode = *(s32 *)(s1 + 0x18);
    if (mode == 2) {
    } else if (mode == 1) {
    } else if (mode == 0) {
        return;
    }
    if (*(s32 *)(s1 + 4) >= 0) {
        func_00228430(0);
        func_00227A30(s0);
        s2 = *(s32 *)(s0 + 0x20);
        a1c = *(s32 *)(s0 + 0x1C);
        a18 = *(s32 *)(s0 + 0x18);
        D_00470704 = a18;
        D_0047070C = a1c;
        D_00470708 = s2;
        amModel_SetCurrent(a18, a1c);
        D_00470238 = s2;
        func_0022C060(1.0f, *(s32 *)(s0 + 0x10));
        func_00228410();
        func_0022CD00(*(s32 *)(s0 + 0x10));
    }
    if (*(s32 *)s1 >= 0) {
        func_00228430(0);
        func_00227A30(s0);
        s2 = *(s32 *)(s0 + 0x20);
        a1c = *(s32 *)(s0 + 0x1C);
        a18 = *(s32 *)(s0 + 0x18);
        D_00470704 = a18;
        D_0047070C = a1c;
        D_00470708 = s2;
        amModel_SetCurrent(a18, a1c);
        D_00470238 = s2;
        func_0022C060(1.0f, *(s32 *)(s1 + 0x1C));
        func_00228410();
        func_0022CD00(*(s32 *)(s1 + 0x1C));
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/char_disp", func_0029F350);
INCLUDE_ASM("asm/nonmatchings/battle/char_disp", func_0029F470);
// round 5 chr2: three layouts of the state chain (if/else-if in order 0,1,2; switch in order; switch 2,1,0) all compile to 0xEC against 0x100; the original starts with li v1,2 and tests 2,1,0 with beq on the constants in v1.
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
