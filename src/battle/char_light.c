#include "common.h"

extern void func_00231E70(s32 *);
extern void func_002316D0(s32 *);
extern void func_001D9760(s32, s32);
extern void func_00226030(s32, s32 *);
extern void amModel_SetupPart(s32, s32, s32, f32);

extern u8 D_0058BBB0[];
extern u8 D_00447454[];
extern void (*D_0046A780[])(s32 *);
extern void amNode_Free(void *);
extern void amHeap_Free(void *);
extern void func_002361F0(void);

INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_002359F0);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_00235A90);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_00235B60);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_00235BE0);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_00235D90);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_00236020);
// GIVEN UP: the original keeps a frame for the two calls (a tail call here)
#if 0
void func_00236090(s32 *p) {
    s8 v = *(s8 *)(D_0058BBB0 + *(s32 *)((u8 *)p + 0x1350) * 0xC0 + 0x42);

    if (v < 0) {
        func_00231E70(p);
    } else {
        func_002316D0(p);
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_00236090);
void func_002360F0(void) {
    memset(D_0058BBB0, 0, 0x300);
}
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_00236110);
void func_002361D0(void) {
    func_002361F0();
}
void func_002361E0(void) {
}
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_002361F0);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_00236500);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_00236640);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_002366E0);
// GIVEN UP: the local buffer lands 8 bytes higher in the frame
#if 0
void func_00236750(s32 *p) {
    s32 buf[2];

    if (p != 0) {
        func_001D9760(p[0], p[1]);
        buf[0] = *(s32 *)((u8 *)((s32 *)p[0]) + 0x1350);
        buf[1] = *(s32 *)((u8 *)((s32 *)p[1]) + 0x1350);
        func_00226030(0x12, buf);
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_00236750);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_002367B0);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_00236830);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_002369E0);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_00236AF0);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_00236C70);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_00236D60);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_00237000);
// GIVEN UP: the loads for the model's index are scheduled in another order (tried two local orders)
#if 0
void func_00237110(s32 *p, s32 *q) {
    u8 *pb = (u8 *)p;
    u8 *qb = (u8 *)q;
    s32 *a2;
    s32 idx;

    p[1] = 5;
    p[8] = q[4];
    p[9] = *(s16 *)(qb + 0x14);
    *(f32 *)(pb + 0x28) = *(f32 *)(qb + 0x18);
    *(f32 *)(pb + 0x34) = *(f32 *)(qb + 0x1C);
    p[12] = 0;
    a2 = (s32 *)p[8];
    idx = p[9];
    p[11] = *(s32 *)((u8 *)((s32 *)a2)[5] + (idx << 4) + 8);
    if ((*(s16 *)(qb + 0x16) & 2) != 0) {
        if ((p[12] & 2) == 0) {
            amModel_SetupPart(p[0], p[8], p[9], *(f32 *)(pb + 0x28));
        }
    }
    p[12] = *(s16 *)(qb + 0x16);
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_00237110);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_002371C0);
void func_002373E0(s32 *p, s32 *q) {
    p[1] = 4;
    p[6] = q[4];
}
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_00237400);
void func_002374B0(s32 *p, s32 *q) {
    p[1] = 3;
    p[6] = q[4];
}
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_002374D0);
void func_00237580(s32 *p, s32 *q) {
    p[1] = 2;
    p[6] = q[4];
}
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_002375A0);
void func_00237610(s32 *p, s32 *q) {
    p[1] = 1;
    p[4] = q[4];
    p[5] = q[5];
}
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_00237630);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_00237670);
s32 func_002376B0(s32 *p) {
    return (p != 0) ? *(s16 *)(D_00447454 + p[3] * 0x60 + p[4] * 8) : 0;
}
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_002376F0);
// GIVEN UP: the join labels and the flag stores are laid out differently (tried nested forms)
#if 0
void func_00237760(s32 *p, s32 a1) {
    u16 flags;

    if (p == 0) {
        return;
    }
    p[2] = 0;
    if (a1 < 0) {
        return;
    }
    if (a1 >= 6) {
        return;
    }
    p[2] = 0x100 << a1;
    flags = *(u16 *)&p[2];
    if (flags & 0x30) {
        *(u16 *)((u8 *)p[0] + 0x32) &= 0xFFCF;
    }
    *(u16 *)((u8 *)p[0] + 0x32) |= flags;
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_00237760);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_002377C0);
// GIVEN UP: the frame and the join label differ (tried a combined condition)
#if 0
void func_00237840(s32 *p) {
    if (p != 0) {
        if (p[1] != -1) {
            D_0046A780[p[1]](p);
        }
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_00237840);
void func_002378A0(s32 *p) {
    if (p != 0) {
        s32 v = p[0];

        if (v != 0) {
            amNode_Free((void *)v);
            p[0] = 0;
        }
        amHeap_Free(p);
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_002378F0);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_00237AE0);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_00237BB0);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_00237E00);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_00237EC0);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_002380F0);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_00238200);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_00238340);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_002383D0);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_00238610);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_00238790);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_00238C50);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_00239110);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_00239200);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_002392F0);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_002393E0);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_00239480);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_00239720);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_00239920);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_00239CC0);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_00239DA0);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_00239E80);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_00239F60);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_0023A000);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_0023A150);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_0023A240);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_0023A3B0);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_0023A4B0);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_0023A560);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_0023A5F0);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_0023A7A0);
INCLUDE_ASM("asm/nonmatchings/battle/char_light", func_0023A840);
