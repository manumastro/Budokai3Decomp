#include "common.h"

extern u8 D_005687D0[];
void func_00136870(s32, s32, s32, s32, s32, s32);
void func_00137920(void *, void *, void *, void *);
void amDraw_FlushPacket(void);

typedef struct V4Q {
    f32 x;
    f32 y;
    f32 z;
    s32 w;
} V4Q;

#if 0
void func_0020A4D0(s32 idx) {
    u8 *p = D_005687D0 + idx * 0xF0;
    V4Q *q = (V4Q *)(p + 0x20);
    V4Q d;
    V4Q c;
    V4Q b;
    V4Q a;
    V4Q *pb = &b;
    V4Q *pc = &c;
    V4Q *pd = &d;

    a.x = *(f32 *)(p + 0x0);
    a.y = *(f32 *)(p + 0x4);
    a.z = *(f32 *)(p + 0x8);
    a.w = 0x3F800000;
    func_00136870(1, 0x812, 0, -1, 0x44, 0);
    b.x = *(f32 *)(p + 0x10);
    b.y = *(f32 *)(p + 0x4);
    b.z = *(f32 *)(p + 0x8);
    b.w = 0x3F800000;
    c.x = *(f32 *)(p + 0x0);
    c.y = *(f32 *)(p + 0x14);
    c.z = *(f32 *)(p + 0x8);
    c.w = 0x3F800000;
    d.x = *(f32 *)(p + 0x10);
    d.y = *(f32 *)(p + 0x14);
    d.z = *(f32 *)(p + 0x8);
    d.w = 0x3F800000;
    func_00137920(&a, q, pb, q + 1);
    func_00137920(pc, q + 2, pd, q + 3);
    amDraw_FlushPacket();
}
// differs: the frame is 0x120 against 0x104 here: the original keeps four more saved registers (the vector addresses and the table base), and its four vector locals sit at other offsets
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020A4D0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020A5F0);
extern u8 D_005687D0[];

u8 *func_0020A720(s32 i) {
    return D_005687D0 + i * 0xF0;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020A740);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020A780);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020A7F0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020AA20);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020ABB0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020ABE0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020AD30);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020AE80);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020B020);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020B1C0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020B360);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020B600);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020BA60);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020BBD0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020BDB0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020BF30);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020C600);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020CB90);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020CCF0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020CF60);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020D120);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020D290);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020D400);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020D500);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020D5C0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020D780);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020D7C0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020D9B0);
extern u8 D_0058A090[];

u8 *func_0020D9F0(s32 i) {
    return D_0058A090 + i * 0xC0;
}
extern u8 D_0058A090[];
void memset(void *, s32, s32);
void func_0013AFA0(void *);

void func_0020DA10(s32 idx) {
    s32 i;
    u8 *p;

    if (idx == -1) {
        p = D_0058A090;
        for (i = 0; i < 8; i++) {
            memset(p, 0, 0xC0);
            func_0013AFA0(p + 0x50);
            *(s32 *)(p + 0x40) = 0x3F800000;
            *(s32 *)(p + 0x44) = 0x3F800000;
            *(s32 *)(p + 0x48) = 0x3F800000;
            *(s32 *)(p + 0x4C) = 0x3F800000;
            *(s32 *)(p + 0x90) = 0x3F800000;
            p += 0xC0;
        }
    } else {
        p = D_0058A090 + idx * 0xC0;
        memset(p, 0, 0xC0);
        func_0013AFA0(p + 0x50);
        *(s32 *)(p + 0x40) = 0x3F800000;
        *(s32 *)(p + 0x44) = 0x3F800000;
        *(s32 *)(p + 0x48) = 0x3F800000;
        *(s32 *)(p + 0x4C) = 0x3F800000;
        *(s32 *)(p + 0x90) = 0x3F800000;
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020DAE0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020DDD0);
extern s32 D_0046FD5C;
void amVram_Set(s32, s32, s32);

void func_0020DE30(void) {
    amVram_Set(0, D_0046FD5C, 0x800);
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020DE40);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020E070);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020E120);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020E210);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020E290);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020E390);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020E530);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020E620);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020E730);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020E7D0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020E870);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020E8F0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020EA70);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020EB70);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020EBF0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020EC70);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020EDA0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020EE10);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020EF80);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020EFB0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020F040);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020F090);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020F0E0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020F130);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020F180);
extern u8 D_00568C90[];

void func_0020F1D0(s32 i, f32 f) {
    u8 *p = D_00568C90 + i * 0x2140;
    *(f32 *)(p + 0x2104) = f - *(f32 *)(p + 0x2110);
}
extern u8 D_00568C90[];

void func_0020F200(s32 i, f32 f) {
    u8 *p = D_00568C90 + i * 0x2140;
    *(f32 *)(p + 0x20F0) = f - *(f32 *)(p + 0x20FC);
}
extern u8 D_00568C90[];

void func_0020F230(s32 i, f32 f) {
    u8 *p = D_00568C90 + i * 0x2140;
    *(f32 *)(p + 0x2110) = f;
}
extern u8 D_00568C90[];

void func_0020F260(s32 i, f32 f) {
    u8 *p = D_00568C90 + i * 0x2140;
    *(f32 *)(p + 0x20FC) = f;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020F290);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020F300);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020F370);
extern u8 D_00568C90[];

void func_0020F3B0(s32 i, f32 f) {
    u8 *p = D_00568C90 + i * 0x2140;
    *(f32 *)(p + 0x2134) = f;
}
extern u8 D_00568C90[];

void func_0020F3E0(s32 i, f32 f) {
    u8 *p = D_00568C90 + i * 0x2140;
    *(f32 *)(p + 0x2130) = f;
}
extern u8 D_00568C90[];

void func_0020F410(s32 i, f32 f) {
    u8 *p = D_00568C90 + i * 0x2140;
    *(f32 *)(p + 0x212C) = f;
}
extern u8 D_00568C90[];

void func_0020F440(s32 i, f32 f) {
    u8 *p = D_00568C90 + i * 0x2140;
    *(f32 *)(p + 0x2128) = f;
}
extern u8 D_00568C90[];

void func_0020F470(s32 i, f32 a, f32 b, f32 c) {
    u8 *p = D_00568C90 + i * 0x2140;
    *(f32 *)(p + 0x30) = a;
    *(f32 *)(p + 0x34) = b;
    *(f32 *)(p + 0x38) = c;
}
extern u8 D_00568C90[];

void func_0020F4A0(s32 i, f32 a, f32 b) {
    u8 *p = D_00568C90 + i * 0x2140;
    *(f32 *)(p + 0x2118) = a;
    *(f32 *)(p + 0x211C) = b;
}
extern u8 D_00568C90[];
s32 func_0020B020(u8 *, s32, s32, s32);
void amMotSet_Init(void *, s32);
void amMotSet_Bind(void *, s32, s32);

#if 0
void func_0020F4D0(u8 *a) {
    s32 t = *(s16 *)(a + 0x90) * 133;
    u8 *v = *(u8 **)(a + 0x6C);
    u8 *s0;
    s32 k;
    s32 hi;
    u8 *q;
    f32 one = 1.0f;
    f32 m;

    s0 = D_00568C90 + (t << 6);
    *(s32 *)(s0 + 0x90) = func_0020B020(*(u8 **)(v + 0x1350), *(s16 *)(a + 0x9C), *(s16 *)(a + 0xA8), t);
    amMotSet_Init(s0 + 0xA0, *(s32 *)(s0 + 0x94));
    amMotSet_Bind(s0 + 0xA0, 0, *(s32 *)(s0 + 0x90));
    *(s32 *)(s0 + 0x2114) = 0x10000;
    *(s32 *)(s0 + 0x2110) = 0x3F800000;
    m = -one;
    *(f32 *)(s0 + 0x2104) = m;
    *(f32 *)(s0 + 0x2108) = m;
    k = *(s32 *)(s0 + 0x2114);
    hi = (k >> 16) - 1;
    q = *(u8 **)(*(u8 **)(s0 + 0xA4 + hi * 4) + 0x14);
    *(f32 *)(s0 + 0x210C) = (f32)*(s32 *)(q + ((k & 0xFFFF) << 4) + 8);
}
// differs: the table lookup after the store of 0x10000 and the 1.0 constants: the original keeps the index in a0 and orders the low half after it; the two orders did not match
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020F4D0);
extern u8 D_00568C90[];
s32 func_0020B020(u8 *, s32, s32, s32);
s32 amMotion_CreateFr(void *, s32, s32);
void amMotion_BindAnim(void *, s32, s32);

#if 0
void func_0020F5A0(u8 *a) {
    s32 t = *(s16 *)(a + 0x90) * 133;
    u8 *v = *(u8 **)(a + 0x6C);
    u8 *s0 = D_00568C90 + (t << 6);
    f32 one;
    f32 m;
    s32 k;
    s32 hi;
    u8 *q;

    *(s32 *)(s0 + 0x8C) = func_0020B020(*(u8 **)(v + 0x1350), *(s16 *)(a + 0x9A), *(s16 *)(a + 0xA6), t);
    *(s32 *)(s0 + 0x9C) = amMotion_CreateFr(*(void **)(s0 + 0x94), 0, 0);
    amMotion_BindAnim(*(void **)(s0 + 0x9C), 0, *(s32 *)(s0 + 0x8C));
    k = *(s16 *)(a + 0xAC) | 0x10000;
    *(s32 *)(s0 + 0x2100) = k;
    *(s32 *)(s0 + 0x20FC) = 0x3F800000;
    one = 1.0f;
    m = -one;
    *(f32 *)(s0 + 0x20F0) = m;
    *(f32 *)(s0 + 0x20F4) = m;
    k = *(s32 *)(s0 + 0x2100);
    hi = (k >> 16) - 1;
    q = *(u8 **)(*(u8 **)(*(u8 **)(s0 + 0x9C) + 0x46C + hi * 4) + 0x14);
    *(f32 *)(s0 + 0x20F8) = (f32)*(s32 *)((((u16)k) << 4) + q + 8);
}
// differs: 1 of 59 differ at the end: the low half of the index value is computed before the table index in this build, the original does the table index first (the same as func_0020F4D0)
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020F5A0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020F690);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020F6D0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020F700);
extern u8 D_00568C90[];
extern void memset(void *, s32, s32);
void func_0013AFA0(void *);
void func_0020ABB0(void);
void func_00246D20(void);

void func_0020F870(s32 idx) {
    s32 i;
    u8 *p;

    if (idx == -1) {
        p = D_00568C90;
        for (i = 0; i < 16; i++) {
            memset(p, 0, 0x2140);
            func_0013AFA0(p + 0x40);
            *(s32 *)(p + 0x30) = 0x3F800000;
            *(s32 *)(p + 0x34) = 0x3F800000;
            *(s32 *)(p + 0x38) = 0x3F800000;
            *(s32 *)(p + 0x3C) = 0x3F800000;
            *(s32 *)(p + 0x2128) = 0x3F800000;
            *(s32 *)(p + 0x2130) = 0x3F800000;
            p += 0x2140;
        }
        func_0020ABB0();
        func_00246D20();
    } else {
        p = D_00568C90 + idx * 0x2140;
        memset(p, 0, 0x2140);
        func_0013AFA0(p + 0x40);
        *(s32 *)(p + 0x30) = 0x3F800000;
        *(s32 *)(p + 0x34) = 0x3F800000;
        *(s32 *)(p + 0x38) = 0x3F800000;
        *(s32 *)(p + 0x3C) = 0x3F800000;
        *(s32 *)(p + 0x2128) = 0x3F800000;
        *(s32 *)(p + 0x2130) = 0x3F800000;
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020F970);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00210240);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00210C20);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_002114A0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_002115A0);
extern u8 *D_0046FDCC;
void func_0020D7C0(void);

void func_00211650(void) {
    if (*(s32 *)(D_0046FDCC + 0x70) == 0) {
        func_0020D7C0();
    }
}
extern u8 D_00568C90[];
void func_0020BBD0(u8 *, s32);

void func_00211680(u8 *a) {
    func_0020BBD0(D_00568C90 + *(s16 *)(a + 0x66) * 0x2140, 1);
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_002116B0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_002117F0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00211980);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00211AF0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00211BD0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00211D80);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00211F80);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00212050);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00212160);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_002122A0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00212480);
void func_0020DA10(s32);

void func_00212560(s32 *a) {
    func_0020DA10(a[8]);
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00212570);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00212600);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00212650);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00212690);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00212730);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_002129B0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00212DA0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00213180);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00213570);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00213AE0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00213F30);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00214370);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_002145E0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00214870);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00214B50);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00214DD0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00214F80);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00214FD0);
extern u8 D_00568B90[];
extern u8 D_00568C10[];

#if 0
void func_00215040(s16 id, s16 mask, s16 k) {
    u8 *p;
    u8 *q;
    void (*f)(void *);

    for (p = *(u8 **)D_00568B90; p != D_00568C10; p = *(u8 **)p) {
        if (id == -1 || *(s16 *)(p + 0x1C) == id) {
            if (*(s16 *)(p + 0x1E) & mask) {
                q = p + 0x20;
                if (*(s16 *)(p + 0x6A) == k) {
                    *(s32 *)(p + 0x8) = -1;
                    f = *(void (**)(void *))(p + 0xC);
                    if ((s32)f > 0) {
                        f(p);
                    }
                    *(s16 *)(q + 0x4A) = 0;
                }
            }
        }
    }
}
// differs: the loop pointer and the offset pointer swap registers (p in s3, q in s4 here, the original the other way round); 12 of 56 differ even with the offset computed before the key test
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00215040);
void func_00209390(s32);

void func_00215120(s16 id, s16 mask, s16 k) {
    u8 *p;
    u8 *q;
    void (*f)(void *);

    for (p = *(u8 **)D_00568B90; p != D_00568C10; p = *(u8 **)p) {
        if (id == -1 || *(s16 *)(p + 0x1C) == id) {
            if (*(s16 *)(p + 0x1E) & mask) {
                q = p + 0x20;
                if (*(s16 *)(p + 0x68) == k) {
                    if (*(s32 *)(p + 0x10) != 0) {
                        func_00209390(*(s32 *)(p + 0x10));
                    } else if (*(s32 *)(q + 0x34) > 0) {
                        *(s32 *)(p + 0x8) = -1;
                        f = *(void (**)(void *))(p + 0xC);
                        if ((s32)f > 0) {
                            f(p);
                        }
                        *(s16 *)(q + 0x4A) = 0;
                    }
                    *(s16 *)(q + 0x48) = 0;
                }
            }
        }
    }
}
extern u8 D_00568B90[];
extern u8 D_00568C10[];
void func_0013AFA0x(void);

void func_00215230(s16 id, s16 mask) {
    u8 *p;

    for (p = *(u8 **)D_00568B90; p != (u8 *)D_00568C10; p = *(u8 **)p) {
        if (id == -1 || *(s16 *)(p + 0x1C) == id) {
            if (*(s16 *)(p + 0x1E) & mask) {
                *(s32 *)(p + 0x8) = -1;
                if (*(s32 *)(p + 0xC) > 0) {
                    ((void (*)(void *))*(s32 *)(p + 0xC))(p);
                }
            }
        }
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_002152E0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00215320);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00215500);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00215900);
extern u8 D_00568C10[];
extern u8 D_00568B90[];
void func_0020CB90(void *);
void func_0020A7F0(s32);

typedef struct Blk40 {
    f32 f[11];
} Blk40;

void func_00218440(s32, Blk40 *);
void func_00215990(s16 id) {
    u8 *p;
    Blk40 loc;
    void (*f)(void *);

    for (p = *(u8 **)D_00568B90; p != D_00568C10; p = *(u8 **)p) {
        if (id == -1 || *(s16 *)(p + 0x1C) == id) {
            if ((*(s16 *)(p + 0x1E) & -0x801) != 0) {
                *(s32 *)(p + 0x8) = -1;
                f = *(void (**)(void *))(p + 0xC);
                if ((s32)f > 0) {
                    f(p);
                }
            }
        }
    }
    for (p = *(u8 **)D_00568B90; p != D_00568C10; p = *(u8 **)p) {
        if (*(s32 *)(p + 0x8) == -1) {
            func_0020CB90(p);
        }
    }
    memset(&loc, 0, sizeof(Blk40));
    func_00218440(0x10, &loc);
    func_0020A7F0(-1);
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00215AA0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00215AE0);
extern u8 D_00568B90[];
extern u8 D_00568C10[];
void func_0020CB90(void *);
void func_0020F700(s32);
void func_0020A7F0(s32);
void func_002185E0(void);
void func_00244040(void);
void func_00247410(void);

#if 0
void func_00215B20(void) {
    u8 *p;
    void (*f)(void *);

    for (p = *(u8 **)D_00568B90; p != D_00568C10; p = *(u8 **)p) {
        if ((u16)*(s16 *)(p + 0x1E) != 0) {
            *(s32 *)(p + 0x8) = -1;
            f = *(void (**)(void *))(p + 0xC);
            if ((s32)f > 0) {
                f(p);
            }
        }
    }
    for (p = *(u8 **)D_00568B90; p != D_00568C10; p = *(u8 **)p) {
        if (*(s32 *)(p + 0x8) == -1) {
            func_0020CB90(p);
        }
    }
    func_0020F700(-1);
    func_0020A7F0(-1);
    func_002185E0();
    func_00244040();
    func_00247410();
}
// differs: the 16-bit flag test is zero-extended with dsll32 / dsrl32 here, and the second loop label gets an alignment nop pair the original has (size 0xE8 against 0xF0)
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00215B20);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00215C10);
extern u8 *D_0046FDCC;
extern u8 D_00568B90[];
extern u8 D_00568C10[];
extern s32 D_00568B94[];
extern u8 D_00568C14[];
extern void memset(void *, s32, s32);
void func_0020F870(s32);
void func_0020DA10(s32);
void func_00218610(void);
void func_002440C0(void);
void func_00247500(void);

void func_00215D90(void) {
    memset(D_0046FDCC, 0, 0xA0);
    memset(D_00568B90, 0, 0x80);
    memset(D_00568C10, 0, 0x80);
    D_00568B94[0] = 0;
    *(u8 **)D_00568B90 = D_00568C10;
    *(u8 **)D_00568C14 = D_00568B90;
    *(s32 *)D_00568C10 = 0;
    func_0020F870(-1);
    func_0020DA10(-1);
    func_00218610();
    func_002440C0();
    func_00247500();
}
void func_00218680();
void func_00244150(void);
void func_002475D0(void);

void func_00215E40(void) {
    func_00218680();
    func_00244150();
    func_002475D0();
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00215E70);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00215EB0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00216030);
extern u8 *D_00470570;

#if 0
s32 func_00216080(s32 x) {
    u8 *p = D_00470570 + x * 0x2020;
    u8 *q = p + 0x830;
    s32 v = *(s32 *)(p + 0x252C);
    s32 w;
    s32 r;

    if (v == 0x22 || v == 0x24 || v == 0x23) {
        r = 0x1E;
    } else if (v == 0x28) {
        r = 0x1D;
    } else if (v == 0x29) {
        r = 0x1F;
    } else if (v == 0x25) {
        r = 0x1C;
    } else {
        w = *(s32 *)(q + 0xB9C);
        if ((u32)w - 0x46 < 2u || w == 0x5B || w == 0x5C) {
            r = 0x20;
        } else {
            r = 0x1B;
        }
    }
    return r;
}
// differs: 2 of 52 differ: the range test on w (w - 70 < 2) is kept in v0 where the original uses at, and the return value is joined through a common jr with a b
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00216080);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00216150);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00216270);
u8 *func_00215320(s32, s32);
s32 func_00209540(s32, s32, s32);
extern u8 *D_0046FDD0;
void memset(void *, s32, s32);
void func_00215EB0(void);
void func_00212650(void);

#if 0
void func_002163D0(u8 *a) {
    u8 *p;
    s32 idx;
    u8 *q;
    s32 e;

    p = func_00215320(0, 0x400);
    idx = *(s16 *)(a + 0x20);
    if (p != 0) {
        q = p + 0x20;
        *(void **)(p + 0x8) = (void *)func_00215EB0;
        *(void **)(p + 0xC) = (void *)func_00212650;
        *(s32 *)(p + 0x18) = 0x442F0000;
        memset(q, 0, 0x50);
        e = *(s32 *)(D_0046FDD0 + idx * 4);
        if (e != 0) {
            *(s32 *)(p + 0x10) = func_00209540(e, 0x4000040, 0);
        }
        if (*(s32 *)(p + 0x10) != 0) {
            idx = *(s16 *)(a + 0x22);
            *(s32 *)(q + 0x20) = *(s32 *)(D_0046FDD0 + idx * 4);
            *(s32 *)(q + 0x28) = (idx << 5) + 0x03001000;
        }
    }
}
// differs: the stores of the two function addresses and of 0x442F0000 are scheduled in another order in this build (size 0xEC against 0x100)
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_002163D0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_002164D0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00216640);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00216770);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00216880);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00216A60);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00216D20);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00216EF0);
extern u8 *D_00470570;
extern u8 *D_0046FDD0;
extern u8 D_00469CE8[];
void func_00216A60(void);
u8 *amTask_Create(void *, s32, s32, s32, s32, void *);
s16 func_00216080(s32);
void func_002CA2F0(void *);
extern void memset(void *, s32, s32);

#if 0
void func_00216F50(u8 *in) {
    u8 loc[0x30];
    u8 *t;
    s32 a;
    u8 *s1;
    u8 *s0;

    s1 = amTask_Create((void *)func_00216A60, 0, 0x5A0, 0x400, 0x40002, D_00469CE8);
    if (s1 != 0) {
        memset(loc, 0, 0x30);
        *(u8 **)(loc + 0x0) = D_00470570 + *(s32 *)(in + 0x10) * 0x2020 + 0x830;
        *(s32 *)(loc + 0x8) = *(s32 *)(in + 0x14);
        *(s16 *)(loc + 0x18) = 7;
        *(s16 *)(loc + 0x1C) = (s16)(*(s16 *)(loc + 0x1C) | -0x80);
        *(s16 *)(loc + 0x1E) = 0x400;
        *(s16 *)(loc + 0x1A) = func_00216080(*(s32 *)(in + 0x10));
        func_002CA2F0(loc);
        s0 = s1 + 0x30;
        *(s32 *)(D_0046FDD0 + *(s32 *)(in + 0x10) * 4 + 0x188) = (s32)s1;
        memset(s0, 0, 0x10);
        *(s32 *)(s0 + 0x0) = *(s32 *)(in + 0x10);
        *(s32 *)(s0 + 0x4) = *(s32 *)(in + 0x14);
        *(s32 *)(s0 + 0x8) = *(s32 *)(in + 0x1C);
    }
}
// differs: 40 of 68 differ: the local struct is laid out at other offsets (the pointer at +0x10 and the halfwords), and the table index is folded differently
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00216F50);
void func_00217060(void) {
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00217070);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00217200);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00217390);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_002174C0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00217550);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_002175A0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00217870);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_002178C0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_002179E0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00217B00);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00217B70);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00217BC0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00217C50);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00217CC0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00217D10);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00217D70);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00217DD0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00217F70);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_002181A0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_002183F0);
extern void (*D_00469C70[])(void *, void *);

void func_00218440(s32 idx, Blk40 *src) {
    Blk40 tmp;

    tmp = *src;
    if (idx >= 0 && idx < 0x11) {
        D_00469C70[idx](&tmp, src);
    }
}
extern void memset(void *, s32, s32);
extern u8 D_0058A730[];

void func_002184F0(void) {
    memset(D_0058A730, 0, 0x1B0);
}
extern u8 *D_0046FDD0;
extern u8 D_0058A730[];
extern void memset(void *, s32, s32);
void amCdFs_ReleaseCache(void *);
void amCdFs_Close(void *, s32);
void amHeap_Free(void *);

void func_00218510(void) {
    s32 i;
    s32 off;
    u8 *g = D_0046FDD0;

    if (*(s32 *)(g + 0x184) != 0) {
        amCdFs_ReleaseCache(*(void **)(g + 0x180));
        *(s32 *)(D_0046FDD0 + 0x180) = 0;
        *(s32 *)(D_0046FDD0 + 0x184) = 0;
    } else {
        if (*(void **)(g + 0x180) != 0) {
            amCdFs_Close(*(void **)(g + 0x180), 0);
            *(s32 *)(D_0046FDD0 + 0x180) = 0;
        }
    }
    for (i = 0, off = 0; i < 0x30; i++, off += 4) {
        if (*(void **)(D_0046FDD0 + off + 0xC0) != 0) {
            amHeap_Free(*(void **)(D_0046FDD0 + off + 0xC0));
        }
        *(s32 *)(D_0046FDD0 + off + 0xC0) = 0;
    }
    memset(D_0058A730, 0, 0x1B0);
}
void amTask_KillGroup(s32, s32, s32);
void func_00216150(s32);

void func_002185E0(void) {
    amTask_KillGroup(0x400, 0x40000, 0);
    func_00216150(-1);
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00218610);
void func_00216270(s32);

void func_00218680(s32 a) {
    func_00216270(a);
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00218690);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_002186D0);
extern u8 *D_00470570;
s32 amAdx_IsStopped(s32);
void amAdx_Stop(s32);

void func_00218880(void) {
    u8 *p;
    s32 i;

    p = D_00470570 + 0x5C4;
    for (i = 0; i < 5; i++, p += 0x20) {
        if (*(s32 *)(p + 0x8) >= 0 && *(s32 *)(p + 0x8) < 5 && *(s32 *)(p + 0xC) == 3
            && amAdx_IsStopped(*(s32 *)(p + 0x8))) {
            if (*(s32 *)(p + 0x8) >= 0 && *(s32 *)(p + 0x8) < 5) {
                amAdx_Stop(*(s32 *)(p + 0x8));
            }
            if (*(s32 *)(p + 0x8) != 0 && *(s32 *)(p + 0x8) != 1) {
                *(s32 *)(p + 0x8) = -1;
            }
            *(s32 *)(p + 0xC) = 0;
            *(s32 *)(p + 0x10) = 0;
            *(s16 *)(p + 0x14) = -1;
            *(s16 *)(p + 0x16) = -1;
            *(s32 *)(p + 0x18) = 0xBF800000;
        }
    }
}
s32 amAdx_IsPlaying(s32);

s32 func_00218960(s32 *a) {
    s32 v = a[2];
    if (v >= 0) {
        return amAdx_IsPlaying(v);
    }
    return 0;
}
extern s8 D_0046A3A0[];
s32 func_0012EAE0(s32);

#if 0
s32 func_00218990(s32 x) {
    s32 r;
    s32 n;
    s8 *s0;
    s8 *p;

    if (x > 11) {
        x = 11;
    } else if (x < 0) {
        x = 0;
    }
    n = 0;
    s0 = D_0046A3A0 + x * 2;
    p = s0;
    while (n < 4 && *p >= 0) {
        p++;
        n++;
    }
    if (n <= 0) {
        r = -1;
    } else if (n == 1) {
        r = *s0;
    } else {
        r = s0[(u32)func_0012EAE0(0x20) % (u32)n];
    }
    return r;
}
// differs: 4 of 51 differ: the clamp of x ends with a b the original has after its x < 0 arm, and the counter's move comes before the pointer's addu; the reorderings tried moved the branches
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00218990);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00218A60);
extern s8 D_0046A3A0[];
s32 func_0012EAE0(s32);

#if 0
s32 func_00218B60(s32 x, s32 flag) {
    s32 r;
    s32 n;
    s8 *s0;
    s8 *p;

    if (x > 16) {
        x = 16;
    } else if (x < 0) {
        x = 0;
    }
    s0 = D_0046A3A0 + (flag != 0) * 34 + x * 2;
    p = s0;
    n = 0;
    while (n < 4 && *p >= 0) {
        p++;
        n++;
    }
    if (n <= 0) {
        r = -1;
    } else if (n == 1) {
        r = *s0;
    } else {
        r = s0[(u32)func_0012EAE0(0x20) % (u32)n];
    }
    return r;
}
// differs: the clamp of x leaves a b after its x < 0 arm (as func_00218990) and the flag term is in another register; 12 of 55 differ
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00218B60);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00218C40);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00218CD0);
extern u8 *D_00470570;
extern u8 D_0046A3B8[];
void func_002186D0(void);
u8 *amTask_Create(void *, s32, s32, s32, s32, void *);

#if 0
void func_00218E50(void) {
    u8 *g = D_00470570;
    s32 idx = *(s32 *)(g + 0x684);
    u8 *slot;
    u8 *s1;
    u8 *obj;

    if (idx != -1) {
        slot = g + idx * 0x20;
        obj = *(u8 **)(slot + 0x5E0);
        s1 = slot + 0x5C4;
        if (obj != 0) *(u8 **)(obj + 0x30) = s1;
        else {
            obj = amTask_Create((void *)func_002186D0, 0, 0x4080, 0x20, 0x800002, D_0046A3B8);
            *(u8 **)(obj + 0x30) = s1;
        }
        *(f32 *)(obj + 0x34) = *(f32 *)s1;
        *(s32 *)(obj + 0x38) = 0;
        *(s32 *)(obj + 0x3C) = 0;
        *(s32 *)(obj + 0x40) = 0x42F00000;
        *(u8 **)(s1 + 0x1C) = obj;
        *(s32 *)(g + 0x684) = -1;
    }
}
// differs: the else branch (create and store) is laid out with an alignment nop before its label; the original has none, its source form is unknown
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00218E50);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00218F00);
extern u8 *D_00470570;
extern u8 D_0044F494[];
u8 *amTask_Create(void *, s32, s32, s32, s32, void *);
extern u8 D_0046A3B8[];
void func_002186D0(void);
void func_00218F00(s32);

#if 0
void func_00219270(s32 x) {
    u8 *g;
    s32 idx;
    u8 *slot;
    u8 *s1;
    u8 *obj;

    if (x < 0) {
        g = D_00470570;
        idx = *(s32 *)(g + 0x684);
        if (idx != -1) {
            slot = g + idx * 0x20;
            obj = *(u8 **)(slot + 0x5E0);
            s1 = slot + 0x5C4;
            if (obj != 0) {
                *(u8 **)(obj + 0x30) = s1;
            } else {
                obj = amTask_Create((void *)func_002186D0, 0, 0x4080, 0x20, 0x800002, D_0046A3B8);
                *(u8 **)(obj + 0x30) = s1;
            }
            *(f32 *)(obj + 0x34) = *(f32 *)s1;
            *(s32 *)(obj + 0x38) = 0;
            *(s32 *)(obj + 0x3C) = 0;
            *(s32 *)(obj + 0x40) = 0x42F00000;
            *(u8 **)(s1 + 0x1C) = obj;
            *(s32 *)(g + 0x684) = -1;
        }
    } else {
        func_00218F00(((s32 *)*(u8 **)D_0044F494)[x]);
    }
}
// differs: the same body as func_00218E50 (its alignment and branch layout differ: the original is 12 bytes longer, with a b after the inner if's store that is not emitted here)
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00219270);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00219340);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00219390);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00219410);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00219470);
extern u8 *D_00470570;
extern s32 D_0044F4E0[];
extern s32 *D_0044F2F0[];
s32 amAdx_PlayAfs(s32, s32, s32);
void amAdx_Pause(s32, s32);

#if 0
void func_002194C0(u8 *p, s32 x, s32 y, s32 z) {
    if (x >= 0 && x < 0x79) {
        if (y >= 0 && y < D_0044F4E0[x]) {
            if (D_0044F2F0[x][y] != -1) {
                *(s32 *)(p + 0x10) |= 1;
                *(s16 *)(p + 0x14) = x;
                *(s16 *)(p + 0x16) = y;
                *(s32 *)(p + 0x8) = amAdx_PlayAfs(z, D_0044F2F0[x][y] | 0x20000, 0);
                amAdx_Pause(*(s32 *)(p + 0x8), 1);
                *(s32 *)(p + 0xC) = 2;
                *(f32 *)(p + 0x18) = *(f32 *)(D_00470570 + 0x8908);
            }
        }
    }
}
// differs: the early exits: the original leaves a b to the end for each range test, this build branches to the end directly; the else forms gave more differences
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_002194C0);
extern u8 *D_00470570;
void amAdx_Pause(s32, s32);

void func_002195B0(s32 a) {
    u8 *p = D_00470570 + 0x5C4;
    s32 from = a ? 3 : 1;
    s32 to = a ? 1 : 3;
    s32 i;

    for (i = 0; i < 5; i++, p += 0x20) {
        if (from == *(s32 *)(p + 0xC) && (*(s32 *)(p + 0x10) & 4) == 0) {
            amAdx_Pause(*(s32 *)(p + 0x8), a != 0);
            *(s32 *)(p + 0xC) = to;
        }
    }
}
extern u8 *D_00470570;
void amAdx_Stop(s32);

#if 0
void func_00219650(s32 flag) {
    s32 i = 0;
    s32 two = 2;
    u8 *p;
    u8 *g;

    i = flag ? 0 : two;
    g = D_00470570;
    if (i < 5) {
        p = g + 0x5C4 + i * 0x20;
        do {
            if (*(s32 *)(p + 0x8) >= 0 && *(s32 *)(p + 0x8) < 5) {
                amAdx_Stop(*(s32 *)(p + 0x8));
            }
            if (*(s32 *)(p + 0x8) != 0 && *(s32 *)(p + 0x8) != 1) {
                *(s32 *)(p + 0x8) = -1;
            }
            *(s32 *)(p + 0xC) = 0;
            *(s32 *)(p + 0x10) = 0;
            *(s16 *)(p + 0x14) = -1;
            *(s16 *)(p + 0x16) = -1;
            i++;
            *(s32 *)(p + 0x18) = 0xBF800000;
            p += 0x20;
        } while (i < 5);
    }
    if (flag != 0) {
        if (*(s32 *)(g + 0x66C) >= 0 && *(s32 *)(g + 0x66C) < 5) {
            amAdx_Stop(*(s32 *)(g + 0x66C));
        }
        if (*(s32 *)(g + 0x66C) != 0 && *(s32 *)(g + 0x66C) != 1) {
            *(s32 *)(g + 0x66C) = -1;
        }
        *(s32 *)(g + 0x670) = 0;
        *(s32 *)(g + 0x674) = 0;
        *(s16 *)(g + 0x678) = -1;
        *(s16 *)(g + 0x67A) = -1;
        *(s32 *)(g + 0x67C) = 0xBF800000;
    }
}
// differs: 11 of 77 differ, all scheduling: the table base is loaded after the start index in the original and the -1 constants are kept in a0; the compiler schedules them differently
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00219650);
extern u8 *D_00470570;
extern f32 D_004E0610[];
extern f32 D_004E0614[];
extern f32 D_004E0618[];
void amAdx_SetVolume(s32, f32);

#if 0
void func_00219790(s32 flag) {
    s32 i = 0;
    s32 two = 2;
    f32 f22;
    f32 f21;
    f32 f20;
    u8 *p;

    i = (flag == 0) ? two : i;
    f22 = D_004E0610[0];
    f21 = D_004E0614[0];
    f20 = D_004E0618[0];
    if (i < 5) {
        p = D_00470570 + 0x5C4 + i * 0x20;
        do {
            i++;
            *(s32 *)p = 0x3F800000;
            p += 0x20;
        } while (i < 5);
    }
    if (flag != 0) {
        amAdx_SetVolume(0, f22);
        amAdx_SetVolume(1, f22);
    }
    amAdx_SetVolume(3, f20);
    amAdx_SetVolume(4, f20);
    amAdx_SetVolume(2, f21);
}
// differs: 15 of 53 differ: the flag-dependent start index (movz from a constant 2) and the order of the float loads; the compiler folds the constants
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00219790);
extern s32 D_00470670;

void func_00219870(void) {
    D_00470670 = 0;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00219880);
extern s32 D_00470670;
void amTask_Kill(s32);

void func_00219A10(void) {
    if (D_00470670 != 0) {
        amTask_Kill(D_00470670);
        D_00470670 = 0;
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00219A40);
