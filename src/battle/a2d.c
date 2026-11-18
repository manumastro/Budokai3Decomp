#include "common.h"

extern void func_00125740(void *, void *, s32);

extern s32 *D_0058BB64[];
extern s32 D_0058BB70[];
extern void func_0022C060(s32);
extern s32 func_0022BC30(s32 *, s32 *, f32);

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

extern u8 *gBtlSys;
extern s32 *BtlSys_GetSlot(s32);
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
extern void Dmg_Start(s32, s32);

s32 func_00225380(void) {
    u8 *sys = gBtlSys;

    if (*(s32 *)(sys + 0xE30) & 1) {
        return -1;
    }
    return *(s16 *)(sys + 0xE44);
}

void func_002253B0(u8 *arg0) {
    u8 *temp_s0;
    u8 *temp_v0;

    temp_s0 = (u8 *)BtlSys_GetSlot(*(s32 *)((u8 *)arg0 + 0));
    temp_v0 = (u8 *)func_0021C660(*(s32 *)((u8 *)arg0 + 0));
    if (*(s32 *)((u8 *)arg0 + 4) != 0) {
        *(s32 *)((u8 *)temp_s0 + 0x20) = (s32) *(s32 *)((u8 *)temp_v0 + 0x10);
        *(s32 *)((u8 *)temp_s0 + 0x34) = 0;
        *(s32 *)((u8 *)temp_s0 + 0) = (s32) (*(s32 *)((u8 *)temp_s0 + 0) | 0x100000);
        return;
    }
    *(s32 *)((u8 *)temp_s0 + 0) = (s32) (*(s32 *)((u8 *)temp_s0 + 0) & 0xFFEFFFFF);
}
void func_00225440(void) {
    func_0023A4B0();
}
void func_00225450(s32 *p) {
    s32 *v = BtlSys_GetSlot(p[0]);

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
    u8 *sys = gBtlSys;
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
extern void *gBattle;
extern s32 func_0023F7A0(s32, s32);
void func_00225AC0(s32 *a0) {
    u8 *sys = gBtlSys;
    s32 *slot = BtlSys_GetSlot(a0[0]);
    s32 i = 0;
    s32 mode;
    s32 *v;

    if (0 < *(s32 *)((u8 *)gBattle + 0x88D8)) {
        do {
            v = BtlSys_GetSlot(i);
            *v = *v & 0x31C900;
            *v |= 0xA;
            i += 1;
        } while (i < *(s32 *)((u8 *)gBattle + 0x88D8));
    }
    if (*(s16 *)(sys + 0xDF0) == 2 && a0[1] == 3) {
        mode = 2;
    } else {
        mode = a0[1];
    }
    switch (mode) {
    case 0:
        *slot |= 0x4000;
        break;
    case 2:
        *slot |= 0x8000;
        break;
    case 3:
        *slot |= 0x10000;
        break;
    default:
        *slot &= 0x31C900;
        *slot |= 0xA;
        return;
    }
    func_0023F7A0(a0[0], mode);
}
void func_00225C30(s32 *p) {
    u8 *o = (u8 *)BtlSys_GetSlot(p[0]);

    *(s16 *)(o + 0x5C) = 0;
}
void func_00225C50(s32 *p) {
    u8 *o = (u8 *)BtlSys_GetSlot(p[0]);

    *(s16 *)(o + 0x5C) += 1;
    if (*(s16 *)(o + 0x5E) < *(s16 *)(o + 0x5C)) {
        *(s16 *)(o + 0x5E) = *(s16 *)(o + 0x5C);
    }
}
void func_00225CA0(s32 *p) {
    s32 *o = BtlSys_GetSlot(p[0]);

    o[0] &= ~0x2000;
    func_00259D90(func_0021C360(p[0]), 2);
}
void func_00225CF0(s32 *p) {
    s32 *o = BtlSys_GetSlot(p[0]);

    o[0] |= 0x2000;
    o[0xB] = 0;
    func_00259EB0(func_0021C360(p[0]), 1.0f);
}
void func_00225D40(s32 *p) {
    s32 *a = BtlSys_GetSlot(p[0]);
    s32 *b = BtlSys_GetSlot(p[1]);
    u8 *o = (u8 *)a;

    if (b[0] & 8) {
        b[0] = b[0] & ~8;
        b[2] = 0;
        b[3] = 0;
    }
    Dmg_Start(p[1], p[2]);
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
    s32 *v = BtlSys_GetSlot(p[0]);

    v[0] |= 0x10;
    v[4] = *(s16 *)(s0 + 2);
    *(s16 *)((u8 *)s1 + 2) = p[1];
}
void func_00225E80(s32 *p)
{
  u8 *new_var2;
  s32 *a = BtlSys_GetSlot(p[0]);
  u8 *new_var;
  s32 *b = BtlSys_GetSlot(p[1]);
  a[0] &= ~3;
  a[0] |= 2;
  new_var2 = (u8 *) a;
  new_var2 = new_var2 + 0x50;
  a[5] = p[2];
  new_var = new_var2;
  if ((*((s16 *) new_var2)) < p[2])
  {
    *((s16 *) new_var) = p[2];
  }
  if (b[0] & 0xC)
  {
    b[0] &= ~0xC;
    b[0] |= 8;
  }
}

// GIVEN UP: the value compared and stored is loaded again after the call (tried a local for it)
// // differs: 24 of 30 (round 4 chr): the original saves s1 for the object pointer (frame 0x30); ours keeps only s0 (frame 0x20), so the object pointer is not kept across the second call.
#if 0
void func_00225F30(s32 *a) {
    s32 *p;
    s32 *v;
    s32 *s0;
    p = a;
    v = BtlSys_GetSlot(p[0]);
    v[0] |= 1;
    v[5] = p[1];
    s0 = func_0023A890(p[0], p[1]);
    if (*(s16 *)((char *)s0 + 0x50) < p[1]) {
        *(s16 *)((char *)s0 + 0x50) = p[1];
    }
}
#endif
void func_00225F30(s32 *arg0) {
    s32 temp_a0;
    u8 *temp_v0;

    temp_v0 = (u8 *)BtlSys_GetSlot(arg0[0]);
    *(s32 *)temp_v0 = *(s32 *)temp_v0 | 1;
    *(s32 *)(temp_v0 + 0x14) = arg0[1];
    func_0023A890(arg0[0], arg0[1]);
    temp_a0 = arg0[1];
    if (*(s16 *)(temp_v0 + 0x50) < temp_a0) {
        *(s16 *)(temp_v0 + 0x50) = (s16) temp_a0;
    }
}

void func_00225FA0(void) {
}
void func_00225FB0(void) {
}
void func_00225FC0(void) {
    u8 *sys = gBtlSys;

    *(s32 *)(sys + 0xE30) ^= 2;
}
void func_00225FE0(void) {
    u8 *sys = gBtlSys;

    *(s32 *)(sys + 0xE30) |= 2;
}
void func_00226000(void) {
    func_00224F90();
}
void func_00226010(s32 *p) {
    func_00225020(p[0], p[1], p[2]);
}
void A2d_CallHandler(s32 idx, s32 arg) {
    void (*fn)(s32) = D_0046A600[idx];

    if (fn != 0) {
        fn(arg);
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_00226070);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_00226540);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_002269B0);
typedef struct SortEnt {
    s32 key;
    f32 val;
} SortEnt;
void func_00227010(s32 *a0, s32 *a1) {
    SortEnt *a = (SortEnt *)a0;
    s32 n = ((u8 *)a1 - (u8 *)a0) >> 3;
    s32 cnt;
    s32 k0;
    s32 max;
    s32 k;
    s32 p0;
    SortEnt *best;
    SortEnt *q;

    if (n != 0) {
        do {
            cnt = n;
            k0 = (s32)a->val;
            p0 = a->key;
            best = a;
            q = a + 1;
            n -= 1;
            max = k0;
            do {
                k = (s32)q->val;
                cnt -= 1;
                if (max < k) {
                    max = k;
                    best = q;
                }
                q += 1;
            } while (cnt != 0);
            a->val = (f32)max;
            a->key = best->key;
            best->val = (f32)k0;
            a += 1;
            best->key = p0;
        } while (n != 0);
    }
}
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
void Title_StepCounters(void) {
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
typedef struct F4 { f32 v[4]; } F4;
typedef struct QuadA { s32 v[8]; } __attribute__((aligned(16))) QuadA;
void func_00228430(u8 *a0) {
    u8 *a2;

    if (a0 == 0) {
        a0 = D_004706CC;
    }
    a2 = D_004706CC;
    D_004706CC = a2 + 0x50;
    *(F4 *)(a2 + 0x50) = *(F4 *)(a0 + 0x0);
    *(QuadA *)(a2 + 0x60) = *(QuadA *)(a0 + 0x10);
    *(F4 *)(a2 + 0x80) = *(F4 *)(a0 + 0x30);
    *(F4 *)(a2 + 0x90) = *(F4 *)(a0 + 0x40);
    D_004706D4 = D_004706D4 + 1;
}
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
s32 func_0022BF80(s32 *a) {
    s32 f = a[3];

    if (f & 1) {
        return func_0022BC30((s32 *)a[0], a, *(f32 *)&a[4]);
    }
    if (f & 2) {
        return func_0022BC30((s32 *)((s32 *)a[0])[4], a, *(f32 *)&a[4]);
    }
    return -1;
}
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
void A2d_FlushList(void) {
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
void func_0022CC80(s32 a0) {
    u8 *p;
    s32 i = 0;
    s32 n = D_004706BC;
    if (0 < n) {
        p = D_004706C0;
        do {
            if (*(s32 *)p == a0) {
                func_00125740((u8 *)D_004706C0 + i * 8, (u8 *)D_004706C0 + (i + 1) * 8, (n - i) * 8);
                D_004706BC -= 1;
                break;
            }
            i += 1;
            p += 8;
        } while (i < n);
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022CD00);
typedef struct A2dEnt {
    s32 *p;
    f32 v;
} A2dEnt;

/* differs: 2 of 18: the order of the index scale and the mul.s, and which of the two globals the second block reads
   first (the addressing itself is right, the two `addu` orders — base first, then index first — are reproduced).
   Tried: one expression per store, a struct view, an index local, the constant in a local. */
void func_0022CF70(s32 *p)
{
  f32 k = 100.0f;
  A2dEnt *new_var;
  ((A2dEnt *) D_004706C0)[D_004706BC].p = p;
  new_var = (A2dEnt *) D_004706C0;
  (new_var + D_004706BC)->v = k * (*((f32 *) (((u8 *) p) + 0x28)));
  D_004706C0 = D_004706C0;
  D_004706BC += 1;
}

void func_0022CFC0(s32 a0, s32 a1, s32 mode, s32 flag) {
    s32 *n = D_0058BB64[0];

    switch (mode) {
    case 0:
        while (n != D_0058BB70) {
            if (n[1] & a0) {
                if (n[2] & a1) {
                    func_0022D0B0(n, flag);
                }
            }
            n = (s32 *)n[5];
        }
        break;
    case 1:
        while (n != D_0058BB70) {
            if (n[1] & a0) {
                if ((n[2] & a1) == n[2]) {
                    func_0022D0B0(n, flag);
                }
            }
            n = (s32 *)n[5];
        }
        break;
    }
}
void func_0022D0B0(s32 *p, s32 flag) {
    p[3] |= 0x100;
    if (flag != 0) {
        func_0022C9A0(p[6]);
    }
}
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022D0E0);
// GIVEN UP: the list push and the removal loop are right; 32 of 45 instructions differ on the registers and the order of the loads
extern s32 *D_004706AC;
extern s32 D_004706B4;
extern s32 D_004706B8;
void func_0022D4B0(s32 a0, s32 a1) {
    u8 *p;
    s32 i;
    s32 n;
    s32 nx;

    D_004706AC[D_004706B4] = a0;
    nx = D_004706B4 + 1;
    D_004706B4 = nx;
    if (nx == D_004706B8) {
        D_004706B4 = 0;
    }
    if (a1 != 0) {
        n = D_004706BC;
        i = 0;
        if (0 < n) {
            p = D_004706C0;
            do {
                if (*(s32 *)p == a0) {
                    func_00125740((u8 *)D_004706C0 + i * 8, (u8 *)D_004706C0 + (i + 1) * 8, (n - i) * 8);
                    D_004706BC -= 1;
                    break;
                }
                i += 1;
                p += 8;
            } while (i < n);
        }
    }
}
extern s32 D_004706F8;
extern s32 func_0022D860(s32, f32);
s32 *func_0022D570(s32 a0, s32 a1, s32 a2, u32 a3) {
    s32 *s0;
    s32 *p;
    s32 n;

    n = D_004706F8;
    s0 = (s32 *)D_004706F4[n];
    D_004706F8 = n + 1;
    if (n + 1 == D_00470700) {
        D_004706F8 = 0;
    }
    memset(s0, 0, 0x20);
    s0[6] = func_0022D860(a0, 0.0f);
    s0[0] = a3;
    s0[1] = a1;
    s0[2] = a2;
    p = D_0058BB64[0];
    while ((u32)p[0] <= a3) {
        p = (s32 *)p[5];
    }
    s0[4] = p[4];
    *(s32 *)(p[4] + 0x14) = (s32)s0;
    p[4] = (s32)s0;
    s0[5] = (s32)p;
    return s0;
}
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022D670);
INCLUDE_ASM("asm/nonmatchings/battle/a2d", func_0022D860);
extern s32 *D_004706AC;
extern s32 D_004706B0;
extern s32 D_004706B8;
extern void func_0022B900(s32 *, s32 *, f32);
s32 *A2d_AllocObj(s32 *a0, f32 a1) {
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
void A2d_SetMode(s32 a) {
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
