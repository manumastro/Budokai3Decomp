#include "common.h"

extern u8 *func_0021C430(s32);
extern s32 *func_0023A890(s32, s32);
extern void func_00224F90(void);
extern void func_00225020(s32, s32, s32);
extern void (*D_0046A600[])(s32);

extern u8 *D_0046FDFC;
extern s32 *func_0021C620(s32);
extern s32 *func_0021C660(s32);
extern s32 func_0021C360();
extern void func_0021C5B0(s32);
extern void func_0021C5D0(s32);
extern void func_0021C5E0(s32, s32);
extern void func_00259D90(s32, s32);
extern void func_00259EB0(s32, f32);
extern void func_0023A4B0(void);
extern void func_0023A5F0(s32);
extern void func_0023A560(s32, s32 *);
extern void func_002CD5F0(s32, s32);
extern void func_0023AA50(s32, s32);

s32 func_00225380(void) {
    u8 *sys = D_0046FDFC;

    if (*(s32 *)(sys + 0xE30) & 1) {
        return -1;
    }
    return *(s16 *)(sys + 0xE44);
}

void func_00225440(void) {
    func_0023A4B0();
}
void func_00225450(s32 *p) {
    s32 *v = func_0021C620(p[0]);

    if (p[1] == 0) {
        v[0] &= ~0x20000;
    } else {
        v[0] |= 0x20000;
    }
}
void func_002254B0(s32 *p) {
    func_002CD5F0(p[0], p[1]);
}
void func_002254C0(s32 *p) {
    if (func_0021C360(p[0]) & 1) {
        func_0023A5F0(0x1D);
        func_0023A560(0x1D, p);
    } else {
        func_0023A5F0(0x1B);
        func_0023A560(0x1B, p);
    }
}
void func_00225530(s32 *p) {
    if (func_0021C360(p[0]) & 1) {
        func_0023A5F0(0x1C);
        func_0023A560(0x1C, p);
    } else {
        func_0023A5F0(0x1A);
        func_0023A560(0x1A, p);
    }
}
void func_002255A0(s32 *p) {
    if (p[0] == -1) {
        func_00259D90(0, 1);
        func_00259D90(1, 1);
    } else {
        func_00259D90(func_0021C360(p[0]), 1);
    }
}
void func_00225600(s32 *p) {
    if (p[0] == -1) {
        if (p[1] == 0) {
            func_00259D90(0, 2);
            func_00259D90(1, 2);
        } else {
            func_00259EB0(0, 1.0f);
            func_00259EB0(1, 1.0f);
        }
    } else {
        s32 v = func_0021C360(p[0]);

        if (p[1] == 0) {
            func_00259D90(v, 2);
        } else {
            func_00259EB0(v, 1.0f);
        }
    }
}
void func_002256C0(s32 *p) {
    if (p[0] == 0) {
        func_0021C5D0(0x80000000);
    } else {
        func_0021C5B0(0x80000000);
    }
}
void func_00225700(s32 *p) {
    if (p[0] == 0) {
        func_0021C5B0(0x10);
    } else {
        func_0021C5D0(0x10);
    }
}
void func_00225740(s32 *p) {
    if (p[0] == 0) {
        func_0021C5B0(0x4);
    } else {
        func_0021C5D0(0x4);
    }
}
void func_00225780(s32 *p) {
    if (p[0] == 0) {
        func_0021C5B0(0x8);
    } else {
        func_0021C5D0(0x8);
    }
}
void func_002257C0(s32 *p) {
    if (p[0] == 0) {
        func_0021C5B0(0x2);
    } else {
        func_0021C5D0(0x2);
    }
}
void func_00225800(s32 *p) {
    if (p[0] == 0) {
        func_0021C5B0(0x1);
    } else {
        func_0021C5D0(0x1);
    }
}
void func_00225840(s32 *p) {
    if (p[0] == 0) {
        func_0021C5E0(0, 0);
    } else {
        func_0021C5E0(0, 0x8000003F);
    }
}
void func_00225890(void) {
    func_0023A5F0(0x13);
}
void func_002258A0(void) {
    func_0023A5F0(0x12);
}
void func_002258B0(void) {
    func_0023A5F0(0x11);
}
void func_002258C0(void) {
    func_0023A5F0(0x10);
}
void func_002258D0(void) {
    func_0023A5F0(0xf);
}
void func_002258E0(void) {
    func_0023A5F0(0xe);
}
void func_002258F0(void) {
    func_0023A5F0(0xd);
}
void func_00225900(void) {
    func_0023A5F0(0xc);
}
void func_00225910(void) {
    func_0023A5F0(0xb);
}
void func_00225920(void) {
    func_0023A5F0(0xa);
}
void func_00225930(void) {
    func_0023A5F0(0x9);
}
void func_00225940(void) {
    func_0023A5F0(0x8);
}
void func_00225950(void) {
    func_0023A5F0(0x7);
}
void func_00225960(void) {
    func_0023A5F0(0x6);
}
void func_00225970(void) {
    func_0023A5F0(0x5);
}
void func_00225980(void) {
    func_0023A5F0(0x4);
}
void func_00225990(void) {
    func_0023A5F0(0x3);
}
void func_002259A0(void) {
    func_0023A5F0(0x2);
}
void func_002259B0(void) {
    func_0023A5F0(0x1);
}
void func_002259C0(void) {
    func_0023A5F0(0x0);
}
void func_002259D0(s32 *p) {
    u8 *sys = D_0046FDFC;
    s32 a = func_0021C360(p[0]);
    s32 b = func_0021C360(p[1]);

    *(s32 *)(sys + 0xE30) |= 4;
    *(s32 *)(sys + 0xE34) = a;
    *(s32 *)(sys + 0xE38) = b;
}
void func_00225A30(s32 *p) {
    func_0023A5F0((s32)func_0021C360(p[0]) + 0x18);
}
void func_00225A60(s32 *p) {
    func_0023A5F0((s32)func_0021C360(p[0]) + 0x16);
}
void func_00225A90(s32 *p) {
    func_0023A5F0((s32)func_0021C360(p[0]) + 0x14);
}
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_00225AC0);
void func_00225C30(s32 *p) {
    u8 *o = (u8 *)func_0021C620(p[0]);

    *(s16 *)(o + 0x5C) = 0;
}
void func_00225C50(s32 *p) {
    u8 *o = (u8 *)func_0021C620(p[0]);

    *(s16 *)(o + 0x5C) += 1;
    if (*(s16 *)(o + 0x5E) < *(s16 *)(o + 0x5C)) {
        *(s16 *)(o + 0x5E) = *(s16 *)(o + 0x5C);
    }
}
void func_00225CA0(s32 *p) {
    s32 *o = func_0021C620(p[0]);

    o[0] &= ~0x2000;
    func_00259D90(func_0021C360(p[0]), 2);
}
void func_00225CF0(s32 *p) {
    s32 *o = func_0021C620(p[0]);

    o[0] |= 0x2000;
    o[0xB] = 0;
    func_00259EB0(func_0021C360(p[0]), 1.0f);
}
void func_00225D40(s32 *p) {
    s32 *a = func_0021C620(p[0]);
    s32 *b = func_0021C620(p[1]);
    u8 *o = (u8 *)a;

    if (b[0] & 8) {
        b[0] = b[0] & ~8;
        b[2] = 0;
        b[3] = 0;
    }
    func_0023AA50(p[1], p[2]);
    b[0] |= 0x1004;
    b[2] += p[2];
    b[3] += p[2];
    *(s16 *)(o + 0x52) = p[2];
    *(s16 *)(o + 0x54) = b[3];
    if (*(s16 *)(o + 0x56) < *(s16 *)(o + 0x54)) {
        *(s16 *)(o + 0x56) = *(s16 *)(o + 0x54);
    }
}
void func_00225E10(s32 *p) {
    s32 *s1 = func_0021C660(p[0]);
    u8 *s0 = func_0021C430(p[0]);
    s32 *v = func_0021C620(p[0]);

    v[0] |= 0x10;
    v[4] = *(s16 *)(s0 + 2);
    *(s16 *)((u8 *)s1 + 2) = p[1];
}
// GIVEN UP: field store at 0x50 uses a separate address (addiu) where the original stores at 0x50(s0)
#if 0
void func_00225E80(s32 *p) {
    s32 *a = func_0021C620(p[0]);
    s32 *b = func_0021C620(p[1]);

    a[0] &= ~3;
    a[0] |= 2;
    a[5] = p[2];
    if (*(s16 *)((u8 *)a + 0x50) < p[2]) {
        *(s16 *)((u8 *)a + 0x50) = p[2];
    }
    if (b[0] & 0xC) {
        b[0] &= ~0xC;
        b[0] |= 8;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_00225E80);
void func_00225F30(s32 *p) {
    s32 *a = func_0021C620(p[0]);

    a[0] |= 1;
    a[5] = p[1];
    func_0023A890(p[0], p[1]);
    if (*(s16 *)((u8 *)a + 0x50) < p[1]) {
        *(s16 *)((u8 *)a + 0x50) = p[1];
    }
}
void func_00225FA0(void) {
}
void func_00225FB0(void) {
}
void func_00225FC0(void) {
    u8 *sys = D_0046FDFC;

    *(s32 *)(sys + 0xE30) ^= 2;
}
void func_00225FE0(void) {
    u8 *sys = D_0046FDFC;

    *(s32 *)(sys + 0xE30) |= 2;
}
void func_00226000(void) {
    func_00224F90();
}
void func_00226010(s32 *p) {
    func_00225020(p[0], p[1], p[2]);
}
void func_00226030(s32 idx, s32 arg) {
    void (*fn)(s32) = D_0046A600[idx];

    if (fn != 0) {
        fn(arg);
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_00226070);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_00226540);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_002269B0);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_00227010);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_002270B0);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_002271D0);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_00227240);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_002273B0);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_00227810);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_00227830);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_00227880);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_00227A30);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_00227B20);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_00228240);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_00228410);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_00228430);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_002284D0);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_002285A0);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_002285E0);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_00228AC0);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_00228B00);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_00228FA0);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_00229440);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_00229480);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_00229800);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_00229840);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022A0A0);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022A840);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022A880);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022ACF0);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022B900);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022BC30);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022BF80);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022BFF0);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022C060);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022C1D0);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022C430);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022C550);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022C560);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022C6B0);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022C700);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022C7D0);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022C9A0);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022CC80);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022CD00);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022CF70);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022CFC0);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022D0B0);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022D0E0);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022D4B0);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022D570);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022D670);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022D860);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022DA90);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022DB20);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022DB30);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022DB40);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022DB90);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022DC00);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022DF10);
