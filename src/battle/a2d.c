#include "common.h"

extern void func_00125740(void *, void *, s32);

extern s32 *D_0058BB64[];
extern s32 D_0058BB70[];
extern void func_0022C060(s32);
extern void func_0022BC30(s32, f32);

extern s32 D_004706D8;
extern s32 *D_004706D0;
extern s32 D_004706D4;
extern u8 *D_004706CC;
extern s32 D_004706BC;
extern u8 *D_004706C0;
extern f32 D_00470718;
extern f32 D_0047071C;
extern s32 D_00470714;
extern f32 D_00470710;
extern s8 D_004703F4;
extern void func_0022C560(s32);
typedef struct QuadW { s32 v[4]; } QuadW;
extern void func_0022C9A0(s32);
extern void func_002269B0(s32 *);
extern void func_00226540(s32 *);
extern void func_002285E0(s32, f32);
extern void func_00228FA0(s32, f32);
extern void func_00229480(s32, f32);
extern void func_0022A0A0(s32, f32);
extern void func_0022A880(s32, f32);
extern void func_002271D0(s32 *);
extern void func_0022D0B0(s32 *, s32);

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

// GIVEN UP: the original keeps p in s1 and the result in s0 across its calls; no source form tried matched the registers.
// GIVEN UP: the code is right; the original keeps the result of the second call in a saved register (a 16-byte-larger frame) and the parameter in s1
#if 0
void func_002253B0(s32 *a0) {
    s32 *s;

    func_0021C620(a0[0]);
    s = func_0021C660(a0[0]);
    if (a0[1] != 0) {
        s[8] = s[4];
        s[13] = 0;
        s[0] |= 0x100000;
    } else {
        s[0] &= 0xFFEFFFFF;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_002253B0);
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
// GIVEN UP: the value compared and stored is loaded again after the call (tried a local for it)
#if 0
void func_00225F30(s32 *p) {
    s32 *a = func_0021C620(p[0]);

    a[0] |= 1;
    a[5] = p[1];
    func_0023A890(p[0], p[1]);
    if (*(s16 *)((u8 *)a + 0x50) < p[1]) {
        *(s16 *)((u8 *)a + 0x50) = p[1];
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_00225F30);
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
extern s32 *D_004706F4;
extern s32 D_004706FC;
extern s32 D_00470700;
extern void func_0022D0E0(s32, s32);
void func_002271D0(s32 *a0) {
    s32 n;

    func_0022D0E0(a0[6], 1);
    *(s32 *)(a0[4] + 0x14) = a0[5];
    *(s32 *)(a0[5] + 0x10) = a0[4];
    D_004706F4[D_004706FC] = (s32)a0;
    n = D_004706FC + 1;
    D_004706FC = n;
    if (n == D_00470700) {
        D_004706FC = 0;
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_00227240);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_002273B0);
void func_00227810(void) {
    D_004706D8 -= 1;
    D_004706D0 -= 1;
}
void func_00227830(s32 a0, s32 a1) {
    s32 *st = D_004706D0;

    D_004706D0 = st + 1;
    st[1] &= ~a0;
    st[1] |= a0;
    st[1] &= ~a1;
    D_004706D8 += 1;
}
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_00227880);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_00227A30);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_00227B20);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_00228240);
void func_00228410(void) {
    D_004706D4 -= 1;
    D_004706CC -= 0x50;
}
// differs: 48 of 50 at best: the bump block and the branch on the first argument are laid out differently (the copy source is reloaded from the bump global); the copy itself matches.
#if 0
void func_00228430(u8 *a0, s32 a1, u8 *a2) {
    if (a0 == 0) {
        a0 = D_004706CC;
        a2 = D_004706CC;
        D_004706CC = a2 + 0x50;
    }
    *(f32 *)(a2 + 0x50) = *(f32 *)(a0 + 0x0);
    *(f32 *)(a2 + 0x54) = *(f32 *)(a0 + 0x4);
    *(f32 *)(a2 + 0x58) = *(f32 *)(a0 + 0x8);
    *(f32 *)(a2 + 0x5C) = *(f32 *)(a0 + 0xC);
    *(QuadW *)(a2 + 0x60) = *(QuadW *)(a0 + 0x10);
    *(QuadW *)(a2 + 0x70) = *(QuadW *)(a0 + 0x20);
    *(f32 *)(a2 + 0x80) = *(f32 *)(a0 + 0x30);
    *(f32 *)(a2 + 0x84) = *(f32 *)(a0 + 0x34);
    *(f32 *)(a2 + 0x88) = *(f32 *)(a0 + 0x38);
    *(f32 *)(a2 + 0x8C) = *(f32 *)(a0 + 0x3C);
    *(f32 *)(a2 + 0x90) = *(f32 *)(a0 + 0x40);
    *(f32 *)(a2 + 0x94) = *(f32 *)(a0 + 0x44);
    *(f32 *)(a2 + 0x98) = *(f32 *)(a0 + 0x48);
    *(f32 *)(a2 + 0x9C) = *(f32 *)(a0 + 0x4C);
    D_004706D4 = D_004706D4 + 1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_00228430);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_002284D0);
void func_002285A0(s32 *p, f32 t) {
    s32 *n = p;
    s32 *c = (s32 *)p[6];

    while (c != 0) {
        f32 f = (f32)n[7];

        if (!(f <= t)) {
            break;
        }
        n = c;
        c = (s32 *)n[6];
        t -= f;
    }
    func_002285E0(n[3], t);
}
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_002285E0);
void func_00228AC0(s32 *p, f32 t) {
    s32 *n = p;
    s32 *c = (s32 *)p[6];

    while (c != 0) {
        f32 f = (f32)n[7];

        if (!(f <= t)) {
            break;
        }
        n = c;
        c = (s32 *)n[6];
        t -= f;
    }
    func_00228FA0(n[2], t);
}
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_00228B00);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_00228FA0);
void func_00229440(s32 *p, f32 t) {
    s32 *n = p;
    s32 *c = (s32 *)p[6];

    while (c != 0) {
        f32 f = (f32)n[7];

        if (!(f <= t)) {
            break;
        }
        n = c;
        c = (s32 *)n[6];
        t -= f;
    }
    func_00229480(n[2], t);
}
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_00229480);
void func_00229800(s32 *p, f32 t) {
    s32 *n = p;
    s32 *c = (s32 *)p[6];

    while (c != 0) {
        f32 f = (f32)n[7];

        if (!(f <= t)) {
            break;
        }
        n = c;
        c = (s32 *)n[6];
        t -= f;
    }
    func_0022A0A0(n[1], t);
}
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_00229840);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022A0A0);
void func_0022A840(s32 *p, f32 t) {
    s32 *n = p;
    s32 *c = (s32 *)p[6];

    while (c != 0) {
        f32 f = (f32)n[7];

        if (!(f <= t)) {
            break;
        }
        n = c;
        c = (s32 *)n[6];
        t -= f;
    }
    func_0022A880(n[1], t);
}
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022A880);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022ACF0);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022B900);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022BC30);
// GIVEN UP: a dead store of -1 in the second branch and a frame the C did not reproduce
#if 0
void func_0022BF80(s32 *p) {
    if (p[3] & 1) {
        func_0022BC30(p[0], *(f32 *)((u8 *)p + 0x10));
    } else if (p[3] & 2) {
        func_0022BC30(((s32 *)p[0])[4], *(f32 *)((u8 *)p + 0x10));
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022BF80);
void func_0022BFF0(s32 *p) {
    s32 *a;

    func_0022C060(p[6]);
    a = (s32 *)p[6];
    if (a[2] == 0xFF) {
        p[3] |= 0x100;
    } else if (p[3] & a[2]) {
        p[3] |= 0x100;
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022C060);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022C1D0);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022C430);
void func_0022C550(s32 *p) {
    func_0022C560(p[6]);
}
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022C560);
void func_0022C6B0(s32 *p) {
    if (p[1] & 1) {
        if (*(s16 *)((u8 *)p + 0x18) >= 0) {
            func_002269B0(p);
        } else {
            func_00226540(p);
        }
    }
}
extern void func_00227010(s32 *, s32 *);
extern void amDraw_SetPacketMode(s32);
void func_0022C700(void) {
    s32 i;
    s32 off;

    if (D_004706BC > 1) {
        func_00227010((s32 *)D_004706C0, (s32 *)(D_004706C0 + (D_004706BC - 1) * 8));
    }
    amDraw_SetPacketMode(1);
    if (0 < D_004706BC) {
        i = 0;
        off = 0;
        do {
            s32 *e = *(s32 **)(D_004706C0 + off);
            if (e[1] & 1) {
                if (*(s16 *)((u8 *)e + 0x18) >= 0) {
                    func_002269B0(e);
                } else {
                    func_00226540(e);
                }
            }
            i += 1;
            off += 8;
        } while (i < D_004706BC);
    }
    amDraw_SetPacketMode(0);
    D_004706BC = 0;
}
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022C7D0);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022C9A0);
// GIVEN UP: the loop's count test and register use differ (tried two loop forms)
#if 0
void func_0022CC80(s32 key) {
    s32 count = D_004706BC;
    s32 i = 0;
    s32 *arr = (s32 *)D_004706C0;

    if (count > 0) {
        do {
            if (arr[0] == key) {
                func_00125740((u8 *)D_004706C0 + i * 8, (u8 *)D_004706C0 + (i + 1) * 8, (count - i) * 8);
                D_004706BC -= 1;
                return;
            }
            i += 1;
            arr += 2;
        } while (i < count);
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022CC80);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022CD00);
// GIVEN UP: global loads and the float multiply are scheduled differently (tried three orders of the index and the multiply)
#if 0
void func_0022CF70(s32 *p) {
    *(s32 *)(D_004706C0 + D_004706BC * 8) = (s32)p;
    *(f32 *)(D_004706C0 + D_004706BC * 8 + 4) = 100.0f * *(f32 *)((u8 *)p + 0x28);
    D_004706BC += 1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022CF70);
// GIVEN UP: the two mode loops are laid out in another order (tried both orders)
#if 0
void func_0022CFC0(s32 a0, s32 a1, s32 mode, s32 flag) {
    s32 *n = (s32 *)D_0058BB64[0];

    if (mode == 0) {
        while (n != D_0058BB70) {
            if (n[1] & a0) {
                if (n[2] & a1) {
                    func_0022D0B0(n, flag);
                }
            }
            n = (s32 *)n[5];
        }
    } else if (mode == 1) {
        while (n != D_0058BB70) {
            if (n[1] & a0) {
                if ((n[2] & a1) == n[2]) {
                    func_0022D0B0(n, flag);
                }
            }
            n = (s32 *)n[5];
        }
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022CFC0);
void func_0022D0B0(s32 *p, s32 flag) {
    p[3] |= 0x100;
    if (flag != 0) {
        func_0022C9A0(p[6]);
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022D0E0);
// GIVEN UP: the list push and the removal loop are right; 32 of 45 instructions differ on the registers and the order of the loads
#if 0
void func_0022D4B0(s32 a0, s32 a1) {
    s32 i;
    s32 n;
    s32 *tbl = (s32 *)D_004706C0;

    D_004706AC[D_004706B4] = a0;
    D_004706B4 = D_004706B4 + 1;
    if (D_004706B4 == D_004706B8) {
        D_004706B4 = 0;
    }
    if (a1 != 0) {
        n = D_004706BC;
        if (n > 0) {
            for (i = 0; i < n; i++) {
                if (tbl[i * 2] == a0) {
                    func_00125740(&tbl[i * 2], &tbl[(i + 1) * 2], (n - i) * 8);
                    D_004706BC = D_004706BC - 1;
                    break;
                }
            }
        }
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022D4B0);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022D570);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022D670);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022D860);
extern s32 *D_004706AC;
extern s32 D_004706B0;
extern s32 D_004706B8;
extern void func_0022B900(s32 *, s32 *, f32);
s32 *func_0022DA90(s32 *a0, f32 a1) {
    s32 *s1;

    s1 = ((s32 **)D_004706AC)[D_004706B0];
    D_004706B0 = D_004706B0 + 1;
    if (D_004706B0 == D_004706B8) {
        D_004706B0 = 0;
    }
    memset(s1, 0, 0x60);
    if (a0 != 0) {
        func_0022B900(a0, s1, a1);
    }
    return s1;
}
void func_0022DB20(f32 a, f32 b) {
    D_00470718 = a;
    D_0047071C = b;
}
void func_0022DB30(s32 a) {
    D_00470714 = a;
}
void func_0022DB40(f32 x) {
    if (x) {
        D_00470710 = x;
        return;
    }
    if (D_004703F4 == 3) {
        D_00470710 = 1.2f;
    } else {
        D_00470710 = 1.0f;
    }
}
void func_0022DB90(void) {
    s32 *n = D_0058BB64[0];

    while (n != D_0058BB70) {
        if (n[3] & 0x100) {
            func_002271D0(n);
        }
        n = (s32 *)n[5];
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022DC00);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022DF10);
