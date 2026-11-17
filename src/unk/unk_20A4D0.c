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

extern s32 D_005687C0[];
extern s32 D_005687C4[];
extern s32 D_005687C8[];
extern s32 D_005687CC[];
extern u8 D_00568C90[];
void func_0020BBD0(u8 *, s32);
void func_00244190(u8 *);
void func_002475E0(u8 *);
s32 func_00218690(void);
extern u8 *D_0046FDCC;
extern u8 *D_0046FDD0;
extern s32 D_00470670;
extern u8 D_0046A3C8[];
extern void (*D_004699A0[])(s32);
extern void (*D_00469CC0[])(s32);
extern void func_00209530(s32);
extern void func_00208D70(s32);
void func_002184F0(void);
void func_00243ED0(void);
void func_00247280(void);
void func_00218510(void);
void func_00243F20(void);
void func_002472F0(void);
void func_00218880(void);
void memset(void *, s32, s32);
s32 amCdFs_ReadFileId(s32, s32, s32);
extern void (*jtbl_00469CC4[])(void *);
extern void amAdx_Pause(s32, s32);
void func_0020D780(void *);
void func_002194C0(u8 *);
extern u8 *D_00470570;
void amAdx_SetVolume(s32, f32);
s32 func_00216030(void);
void func_00216150(s32);
void func_002CA290(s32);
void func_00215230(s16, s16);
void func_00208E50(s32, s32);
extern u8 D_00469CF8[];
extern u8 D_00469D00[];
extern u8 D_00568B90[];
extern u8 D_00568C10[];
void func_00208F70(void *);
void func_00216D20(void);
void func_0020CB90(void *);
u8 *func_00215320(s32, s32);
void func_00211D80(void);
void func_002186D0(void);
extern u8 D_0046A3B8[];
void amTask_Kill(s32);
typedef struct Blk44 {
    u8 b[0x2C];
} Blk44;
typedef struct Blk40 {
    f32 f[11];
} Blk40;
void func_00218440(s32, Blk40 *);
extern void (*D_00469CB0[])(void *);
void func_0020BDB0(u8 *);
void func_0020BA60(void);
void func_0020B600(void);
extern void (*D_00469CC8[])(void *);
void amAdx_Stop(s32);
void amHeap_Free(void *);
extern s32 D_00568B94[];
extern u8 D_00568C14[];

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
extern u8 D_0046A380[];
void func_00209F40(s32);
extern u8 D_00469CD8[];
void func_00216880(void);
extern void (*D_00469CCC[])(void *);
extern s8 D_004703F4;
void amMotSet_Apply(void *, s32, f32);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020A4D0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020A5F0);
extern u8 D_005687D0[];

u8 *func_0020A720(s32 i) {
    return D_005687D0 + i * 0xF0;
}
void func_0020A740(s32 i) {
    if (D_005687C0[i] != 0) {
        func_00208D70(D_005687C0[i]);
    }
}
s32 func_0020A780(s32 i) {
    u8 *s1;
    s32 *s0;
    s0 = &D_005687C0[i];
    s1 = (u8 *)*s0;
    if (s1 != 0) {
        func_00208F70(s1);
        if (*(s32 *)(s1 + 0x38) < 0) {
            *s0 = 0;
            return 1;
        }
    }
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020A7F0);
typedef struct Copy16A {
    s32 a, b, c, d;
} __attribute__((aligned(16))) Copy16A;
extern u8 D_005684C0[];
extern u8 D_005685C0[];
s32 func_002096D0(s32, s32, s32);
void func_0020A7F0(s32);
#if 0
void func_0020AA20(s32 idx, u8 *src) {
    u8 *s0;
    u8 *s1;
    s32 type;

    func_0020A7F0(idx);
    s0 = D_005684C0 + idx * 0x40;
    memset(s0, 0, 0x40);
    s1 = D_005685C0 + idx * 0x80;
    memset(s1, 0, 0x80);
    *(s32 *)(s0 + 0x4) = 0x10005;
    *(s32 *)(s1 + 0x4) = 0x20005;
    *(u8 **)(s0 + 0x24) = s1;
    *(f32 *)(s0 + 0x30) = *(f32 *)(src + 0x10);
    *(f32 *)(s0 + 0x34) = *(f32 *)(src + 0x8);
    *(f32 *)(s0 + 0x38) = *(f32 *)(src + 0xC);
    *(s32 *)(s1 + 0x8) = (*(s32 *)(src + 0x4) << 16) + *(s32 *)src;
    *(Copy16A *)(s1 + 0x30) = *(Copy16A *)(src + 0x20);
    *(Copy16A *)(s1 + 0x40) = *(Copy16A *)(src + 0x20);
    *(f32 *)(s1 + 0x50) = *(f32 *)(src + 0x14);
    *(f32 *)(s1 + 0x54) = *(f32 *)(src + 0x18);
    *(s32 *)(s1 + 0x7C) = *(s32 *)(src + 0x1C);
    type = *(s32 *)src;
    if (type == 1) {
        *(f32 *)(s1 + 0x68) = *(f32 *)(src + 0x30);
        *(f32 *)(s1 + 0x6C) = *(f32 *)(src + 0x34);
        *(f32 *)(s1 + 0x70) = *(f32 *)(src + 0x38);
        *(f32 *)(s1 + 0x74) = *(f32 *)(src + 0x3C);
        *(f32 *)(s1 + 0x78) = *(f32 *)(src + 0x40);
    } else if (type == 0) {
        *(f32 *)(s1 + 0x58) = *(f32 *)(src + 0x30);
        *(f32 *)(s1 + 0x5C) = *(f32 *)(src + 0x34);
        *(f32 *)(s1 + 0x60) = *(f32 *)(src + 0x38);
        *(f32 *)(s1 + 0x64) = *(f32 *)(src + 0x3C);
    }
    D_005687C0[idx] = func_002096D0((s32)s0, 0x10002, 0);
}
#endif
// differs: 65 of 118 differ: the pointer of the 0x40 table lands in s1 here (the original keeps it in s0), the function is 0x17C against 0x190 long
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020AA20);
void func_0020ABB0(void) {
    D_005687CC[0] = 0;
    D_005687C8[0] = 0;
    D_005687C4[0] = 0;
    D_005687C0[0] = 0;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020ABE0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020AD30);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020AE80);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020B020);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020B1C0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020B360);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020B600);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020BA60);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020BBD0);
#if 0
void func_0020BDB0(u8 *p) {
    f32 k;
    f32 f1;

    if ((D_00470570 != 0) ? *(s32 *)(D_00470570 + 0x88EC) : 0) {
        return;
    }
    if (D_00470570 == 0) {
        k = (D_004703F4 == 3) ? 1.2f : 1.0f;
    } else {
        k = *(f32 *)(D_00470570 + 0x88F0);
    }
    *(f32 *)(p + 0x2120) = *(f32 *)(p + 0x2120) + *(f32 *)(p + 0x2118) * k;
    *(f32 *)(p + 0x2124) = *(f32 *)(p + 0x2124) + *(f32 *)(p + 0x211C) * k;
    if (*(f32 *)(p + 0x2120) < 0.0f) {
        *(f32 *)(p + 0x2120) = *(f32 *)(p + 0x2120) + 1.0f;
    }
    if (*(f32 *)(p + 0x2124) < 0.0f) {
        *(f32 *)(p + 0x2124) = *(f32 *)(p + 0x2124) + 1.0f;
    }
    if (*(f32 *)(p + 0x2120) > 1.0f) {
        *(f32 *)(p + 0x2120) = *(f32 *)(p + 0x2120) - 1.0f;
    }
    if (*(f32 *)(p + 0x2124) > 1.0f) {
        *(f32 *)(p + 0x2124) = *(f32 *)(p + 0x2124) - 1.0f;
    }
    *(f32 *)(p + 0x2130) = *(f32 *)(p + 0x2130) + *(f32 *)(p + 0x2134) * k;
    f1 = *(f32 *)(p + 0x2128) + *(f32 *)(p + 0x212C) * k;
    *(f32 *)(p + 0x2128) = f1;
    if (f1 < 0.0f) {
        *(f32 *)(p + 0x2128) = 0.0f;
    }
    if (*(f32 *)(p + 0x2128) > 1.0f) {
        *(f32 *)(p + 0x2128) = 1.0f;
    }
}
#endif
// differs: the block for 0x2124 loads the second operand 0x2124 first, the original loads 0x2124 before 0x211C (the first block matches); the 0x2128 clamp layout ends at a shared jr
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020BDB0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020BF30);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020C600);
void func_0020CB90(void *pv) {
    u8 *p = pv;
    *(u8 **)(*(u8 **)(p + 0x4)) = *(u8 **)p;
    *(u8 **)(*(u8 **)p + 0x4) = *(u8 **)(p + 0x4);
    switch (*(s16 *)(p + 0x1E)) {
    case 0x1:
        *(s32 *)(D_0046FDCC + 0x84) -= 1;
        break;
    case 0x2:
        *(s32 *)(D_0046FDCC + 0x7C) -= 1;
        break;
    case 0x40:
        *(s32 *)(D_0046FDCC + 0x80) -= 1;
        break;
    case 0x4:
        *(s32 *)(D_0046FDCC + 0x88) -= 1;
        break;
    case 0x10:
        *(s32 *)(D_0046FDCC + 0x8C) -= 1;
        break;
    case 0x80:
        *(s32 *)(D_0046FDCC + 0x90) -= 1;
        break;
    case 0x100:
        *(s32 *)(D_0046FDCC + 0x94) -= 1;
        break;
    case 0x400:
        *(s32 *)(D_0046FDCC + 0x98) -= 1;
        break;
    case 0x800:
        *(s32 *)(D_0046FDCC + 0x9C) -= 1;
        break;
    }
    func_00209F40((s32)p);
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020CCF0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020CF60);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020D120);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020D290);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020D400);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020D500);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020D5C0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020D780);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020D7C0);
#if 0
void func_0020D9B0(void) {
    u8 *q = D_0046FDCC;
    s32 n = *(s32 *)(q + 0x78);
    *(s32 *)(q + 0x78) = n + 1;
    {
        s32 *c = (s32 *)(D_0046FDCC + 0x78);
        if (*c >= 8) {
            *c = 0;
        }
    }
}
// differs: the first read of the counter is in v1 here, the original loads it into v0 and adds into v1 (both forms tried)
#endif
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
void func_0020DDD0(s32 i, u8 *src) {
    u8 *g = D_0046FDCC;
    u8 *p = D_00568C90 + i * 0x2140;
    *(f32 *)(g + 0x60) = *(f32 *)(src + 0x2118);
    *(f32 *)(g + 0x64) = *(f32 *)(src + 0x211C);
    *(f32 *)(p + 0x2130) = *(f32 *)(src + 0x2130);
    *(f32 *)(p + 0x30) = *(f32 *)(src + 0x30);
    *(f32 *)(p + 0x34) = *(f32 *)(src + 0x34);
    *(f32 *)(p + 0x38) = *(f32 *)(src + 0x38);
}
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
void func_0020EBF0(s32 i) {
    if (*(s8 *)(D_00470570 + 0x8975) != 1) {
        u8 *p = D_00568C90 + i * 0x2140;
        if (*(s32 *)(p + 0x94) != 0 && *(s32 *)(p + 0x9C) != 0) {
            func_0020BDB0(p);
            func_0020B600();
        }
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020EC70);
void func_0020EDA0(s32 i) {
    if (*(s8 *)(D_00470570 + 0x8975) != 1) {
        u8 *p = D_00568C90 + i * 0x2140;
        if (*(s32 *)(p + 0x94) != 0) {
            func_0020BDB0(p);
            func_0020BA60();
        }
    }
}
#if 0
s32 func_0020EE10(s32 i, s32 flag) {
    u8 *p = D_00568C90 + i * 0x2140;
    f32 top = *(f32 *)(p + 0x210C) - 1.0f;
    s32 v;
    f32 f2;
    s32 s0;
    if (D_00470570 != 0) {
        v = *(s32 *)(D_00470570 + 0x88EC);
    } else {
        v = 0;
    }
    if (v != 0) {
        return 0;
    }
    if ((*(s32 *)(p + 0x20EC) & 0x10) != 0) {
        *(f32 *)(p + 0x2104) = *(f32 *)(p + 0x2104) + *(f32 *)(p + 0x2110);
    } else {
        if (D_00470570 != 0) {
            f2 = *(f32 *)(D_00470570 + 0x88F0);
        } else if (D_004703F4 == 3) {
            f2 = 1.2f;
        } else {
            f2 = 1.0f;
        }
        *(f32 *)(p + 0x2104) = *(f32 *)(p + 0x2104) + *(f32 *)(p + 0x2110) * f2;
    }
    if (*(f32 *)(p + 0x2104) < 0.0f) {
        *(f32 *)(p + 0x2104) = 0.0f;
    }
    if (*(f32 *)(p + 0x2104) > top) {
        if (flag != 0) {
            *(f32 *)(p + 0x2104) = *(f32 *)(p + 0x2104) - top;
        } else {
            *(f32 *)(p + 0x2104) = top;
        }
        s0 = 1;
    } else {
        s0 = 0;
    }
    amMotSet_Apply((void *)(p + 0xA0), *(s32 *)(p + 0x2114), *(f32 *)(p + 0x2104));
    return s0;
}
// differs: 59 of 92 differ: the whole function is out of step from its first instructions (the table base, the store of the float constant and the order of the flag test); the float chain after them was written but not compared
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020EE10);
void func_0020EF80(s32 i, s32 flag) {
    func_0020BBD0(D_00568C90 + i * 0x2140, flag);
}
void func_0020EFB0(s32 i) {
    u8 *p = D_00568C90 + i * 0x2140;
    if ((D_00470570 != 0 ? *(s32 *)(D_00470570 + 0x88EC) : 0) == 0) {
        if (*(s32 *)(p + 0x20E8) != 0) {
            func_00208F70(*(void **)(p + 0x20E8));
            if (*(s32 *)(*(u8 **)(p + 0x20E8) + 0x38) < 0) {
                *(s32 *)(p + 0x20E8) = 0;
            }
        }
    }
}
void func_0020F040(s32 i, s32 flag) {
    u8 *p = D_00568C90 + i * 0x2140;
    if (flag) {
        *(s32 *)(p + 0x20EC) |= 0x80;
    } else {
        *(s32 *)(p + 0x20EC) &= ~0x80;
    }
}
void func_0020F090(s32 i, s32 flag, s32 v) {
    u8 *p = D_00568C90 + i * 0x2140;
    if (flag) {
        *(s32 *)(p + 0x20EC) |= 0x40;
    } else {
        *(s32 *)(p + 0x20EC) &= ~0x40;
    }
    *(s32 *)(p + 0x213C) = v;
}
void func_0020F0E0(s32 i, s32 flag) {
    u8 *p = D_00568C90 + i * 0x2140;
    if (flag) {
        *(s32 *)(p + 0x20EC) |= 0x20;
    } else {
        *(s32 *)(p + 0x20EC) &= ~0x20;
    }
}
void func_0020F130(s32 i, s32 flag) {
    u8 *p = D_00568C90 + i * 0x2140;
    if (flag) {
        *(s32 *)(p + 0x20EC) &= ~0x10;
    } else {
        *(s32 *)(p + 0x20EC) |= 0x10;
    }
}
void func_0020F180(s32 i, s32 flag) {
    u8 *p = D_00568C90 + i * 0x2140;
    if (flag) {
        *(s32 *)(p + 0x20EC) |= 0x8;
    } else {
        *(s32 *)(p + 0x20EC) &= ~0x8;
    }
}
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
#if 0
void func_0020F290(s32 i, s32 x) {
    s32 t = x | 0x10000;
    u8 *p = D_00568C90 + i * 0x2140;
    *(s32 *)(p + 0x2114) = t;
    *(f32 *)(p + 0x210C) = (f32)*(s32 *)(*(u8 **)(*(u8 **)(p + ((*(s32 *)(p + 0x2114) >> 16) - 1) * 4 + 0xA4) + 0x14)
        + ((*(s32 *)(p + 0x2114) & 0xFFFF) << 4) + 8);
}
// differs: 15 of 25 differ: the constant 0x10000 is or-ed in before the element address in the original (lui before addu), here after; the table lookup order matches (func_0020F4D0)
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020F290);
#if 0
void func_0020F300(s32 i, s32 x) {
    s32 t = x | 0x10000;
    u8 *p = D_00568C90 + i * 0x2140;
    *(s32 *)(p + 0x2100) = t;
    *(f32 *)(p + 0x20F8) = (f32)*(s32 *)(*(u8 **)(*(u8 **)(*(u8 **)(p + 0x9C) + ((*(s32 *)(p + 0x2100) >> 16) - 1) * 4 + 0x46C) + 0x14)
        + ((*(s32 *)(p + 0x2100) & 0xFFFF) << 4) + 8);
}
// differs: 12 of 26 differ: the same order as func_0020F290 (the constant 0x10000 is or-ed in before the element address in the original); the 0x9C table chain matches
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020F300);
void func_0020F370(s32 i, f32 a, f32 b, f32 c, f32 d) {
    u8 *p = D_00568C90 + i * 0x2140;
    *(f32 *)(p + 0x2138) = a;
    *(f32 *)(p + 0x10) = b;
    *(f32 *)(p + 0x14) = c;
    *(f32 *)(p + 0x18) = d;
    *(s32 *)(p + 0x1C) = 0x3F800000;
}
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
#if 0
void func_0020F690(void) {
    u8 *q = D_0046FDCC;
    s32 n = *(s32 *)(q + 0x74);
    *(s32 *)(q + 0x74) = n + 1;
    {
        s32 *c = (s32 *)(D_0046FDCC + 0x74);
        if (*c >= 0x10) {
            *c = 0;
        }
    }
}
// differs: the same as func_0020D9B0: the first read of the counter is in v1 here, the original loads it into v0
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020F690);
u8 *func_0020F6D0(s32 i) {
    return D_00568C90 + i * 0x2140;
}
void func_0020A7F0(s32);
void func_0020F700(s32 idx) {
    s32 i;
    u8 *p;
    u8 *s;
    Blk40 loc;

    p = D_00568C90;
    for (i = 0; i < 0x10; i++, p += 0x2140) {
        if (idx == -1 || idx == i) {
            if (*(s32 *)(p + 0x9C) != 0) {
                amHeap_Free(*(void **)(p + 0x9C));
                *(s32 *)(p + 0x9C) = 0;
            }
            if (*(s32 *)(p + 0x20E8) != 0) {
                func_00209530(*(s32 *)(p + 0x20E8));
                *(s32 *)(p + 0x20E8) = 0;
            }
        }
    }
    if (idx == -1) {
        s = *(u8 **)D_00568B90;
        while (s != D_00568C10) {
            if (*(s16 *)(s + 0x1E) & ~0x800) {
                *(s32 *)(s + 0x8) = -1;
                if (*(s32 *)(s + 0xC) > 0) {
                    ((void (*)(u8 *))(*(s32 *)(s + 0xC)))(s);
                }
            }
            s = *(u8 **)s;
        }
        s = *(u8 **)D_00568B90;
        while (s != D_00568C10) {
            if (*(s32 *)(s + 0x8) == -1) {
                func_0020CB90(s);
            }
            s = *(u8 **)s;
        }
        memset(&loc, 0, 0x2C);
        func_00218440(0x10, &loc);
        func_0020A7F0(-1);
    }
}
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
extern s32 D_00470238;
void func_00145CC0(s32, s32);
void func_00208D60(s32);
void func_0013B0B0(u8 *);
void func_0013B960(u8 *);
void func_00209D20(s32);
void func_0013B110(s32);
void func_00209C50(void);
#if 0
void func_00211AF0(u8 *s1) {
    u8 *s0;
    u8 *s2;
    s32 v;

    s16 x = *(s16 *)(s1 + 0x66);
    s0 = s1 + 0x20;
    v = *(s32 *)(s1 + 0x10);
    s2 = D_00568C90 + x * 0x2140;
    if (v != 0) {
        D_00470238 = 0;
        if (*(s32 *)(s0 + 0x20) != 0) {
            func_00145CC0(*(s32 *)(s0 + 0x20), *(s32 *)(s0 + 0x28));
        }
        if (*(s32 *)(s0 + 0x24) != 0) {
            func_00208D60(*(s32 *)(s0 + 0x24));
        }
        func_0013B0B0(D_00470570 + 0x60);
        func_0013B960(s2 + 0x40);
        func_00209D20(0);
        __asm__ volatile ("lqc2 $vf28, 0x0(%0) ; lqc2 $vf29, 0x10(%0) ; lqc2 $vf30, 0x20(%0) ; lqc2 $vf31, 0x30(%0)" : : "r"(s2 + 0x40) : "memory");
        func_00208D70(*(s32 *)(s1 + 0x10));
        func_0013B110(1);
    }
    func_00209C50();
}
#endif
// differs: 17 of 54 differ: the registers of the index (lh), the flag (lw) and the address chain are assigned in another order than the original (lh first into a2, the address built after the flag test in a0/a1)
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
void func_00212570(u8 *s) {
    u8 *q = s + 0x20;
    u8 *p = D_00568C90 + *(s16 *)(s + 0x66) * 0x2140;
    if (*(s32 *)(s + 0x10) != 0) {
        func_00209530(*(s32 *)(s + 0x10));
        *(s32 *)(s + 0x10) = 0;
    }
    if (*(s32 *)(p + 0x9C) != 0) {
        amHeap_Free(*(void **)(p + 0x9C));
        *(s32 *)(p + 0x9C) = 0;
    }
    func_0020F870(*(s16 *)(q + 0x46));
}
void func_00212600(u8 *p) {
    u8 *q = p + 0x20;
    if (*(s32 *)(p + 0x10) != 0) {
        func_00209530(*(s32 *)(p + 0x10));
        *(s32 *)(p + 0x10) = 0;
    }
    func_0020F870(*(s16 *)(q + 0x46));
}
void func_00212650(u8 *p) {
    if (*(s32 *)(p + 0x10) != 0) {
        func_00209530(*(s32 *)(p + 0x10));
        *(s32 *)(p + 0x10) = 0;
    }
}
void func_00212690(u8 *s) {
    u8 *v = func_00215320(*(s16 *)(*(u8 **)(s + 0x6C) + 0x1350), *(s16 *)(s + 0x50));
    if (v != 0) {
        u8 *q = v + 0x20;
        *(void **)(v + 0x8) = (void *)func_00211D80;
        *(s32 *)(v + 0xC) = 0;
        *(f32 *)(v + 0x18) = *(f32 *)(s + 0x84);
        memset(q, 0, 0x50);
        *(s16 *)(q + 0x48) = *(s16 *)(s + 0x5A);
        *(s16 *)(q + 0x4A) = *(s16 *)(s + 0x5C);
        *(s32 *)(q + 0x34) = *(s32 *)(s + 0x70);
        *(s16 *)(q + 0x44) = *(s32 *)(s + 0x68);
        *(s32 *)(q + 0x40) = *(s32 *)(s + 0x64);
    }
}
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
void func_00214F80(s32 i, s32 a) {
    if (i >= 0 && i < 0xB) {
        D_004699A0[i](a);
    }
}
void func_00214FD0(void) {
    u8 *n = *(u8 **)D_00568B90;
    if (n != D_00568C10) {
        do {
            if (*(s32 *)(n + 0x8) == -1) {
                func_0020CB90(n);
            }
            n = *(u8 **)n;
        } while (n != D_00568C10);
    }
}
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
void func_002152E0(u8 *p) {
    *(s32 *)(p + 0x8) = -1;
    if (*(s32 *)(p + 0xC) > 0) {
        ((void (*)(u8 *))*(s32 *)(p + 0xC))(p);
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00215320);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00215500);
void func_00215900(void) {
    memset(D_0046FDCC, 0, 0xA0);
    memset(D_00568B90, 0, 0x80);
    memset(D_00568C10, 0, 0x80);
    D_00568B94[0] = 0;
    *(u8 **)D_00568B90 = D_00568C10;
    *(u8 **)D_00568C14 = D_00568B90;
    *(u8 **)D_00568C10 = 0;
    func_0020F870(-1);
    func_0020DA10(-1);
}
extern u8 D_00568C10[];
extern u8 D_00568B90[];
void func_0020CB90(void *);
void func_0020A7F0(s32);

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
void func_00215AA0(void) {
    func_002184F0();
    func_00243ED0();
    func_00247280();
    memset(D_0046FDCC, 0, 0xA0);
}
void func_00215AE0(void) {
    func_00218510();
    func_00243F20();
    func_002472F0();
    memset(D_0046FDCC, 0, 0xA0);
}
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
void func_00215E70(u8 *p) {
    func_00218690();
    func_00244190(p);
    func_002475E0(p);
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00215EB0);
s32 func_00216030(void) {
    s32 r = 0;
    if (*(s32 *)(D_0046FDD0 + 0x1A0) != 0 || *(s32 *)(D_0046FDD0 + 0x1A4) != 0 ||
        *(s32 *)(D_0046FDCC + 0x8C) != 0 || *(s32 *)(D_0046FDD0 + 0x1A8) != 0) {
        r = 1;
    }
    return r;
}
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
#if 0
void func_00216150(s32 idx) {
    s32 i;
    s32 off;
    if (idx == -1) {
        for (i = 0, off = 0; i < 2; i++, off += 4) {
            if (*(s32 *)(D_0046FDD0 + off + 0x188) != 0) {
                amTask_Kill(*(s32 *)(D_0046FDD0 + off + 0x188));
                *(s32 *)(D_0046FDD0 + off + 0x188) = 0;
            }
            if (*(s32 *)(D_0046FDD0 + off + 0x1A0) != 0) {
                func_00209530(*(s32 *)(D_0046FDD0 + off + 0x1A0));
                *(s32 *)(D_0046FDD0 + off + 0x1A0) = 0;
            }
            *(s32 *)(D_0046FDD0 + off + 0x190) = 0;
        }
    } else {
        off = idx * 4;
        if (*(s32 *)(off + D_0046FDD0 + 0x188) != 0) {
            amTask_Kill(*(s32 *)(off + D_0046FDD0 + 0x188));
            *(s32 *)(off + D_0046FDD0 + 0x188) = 0;
        }
        if (*(s32 *)(off + D_0046FDD0 + 0x1A0) != 0) {
            func_00209530(*(s32 *)(off + D_0046FDD0 + 0x1A0));
            *(s32 *)(off + D_0046FDD0 + 0x1A0) = 0;
        }
        *(s32 *)(off + D_0046FDD0 + 0x190) = 0;
    }
}
// differs: 5 of 69 differ, all in the single-entry branch (idx != -1): the original adds the table base to the offset as addu v1, s0, v1 (offset first), and this build keeps the base first whatever the order of the operands in the source
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00216150);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00216270);
u8 *func_00215320(s32, s32);
s32 func_00209540(s32, s32, s32);
extern u8 *D_0046FDD0;
void memset(void *, s32, s32);
void func_00215EB0(void);
void func_00212650(u8 *p);

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
void func_00216EF0(void) {
    if ((D_00470570 != 0 ? *(s32 *)(D_00470570 + 0x88EC) : 0) == 0 && func_00216030 != 0) {
        func_00208E50(0x4000002, 1);
    }
}
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
#if 0
void func_00217390(u8 *s) {
    s32 st = *(s32 *)(s + 0xC);
    if (st == 2) {
        if (*(s32 *)(D_0046FDD0 + 0x1A8) != 0) {
            amTask_Kill(*(s32 *)(D_0046FDD0 + 0x1A8));
            *(s32 *)(D_0046FDD0 + 0x1A8) = 0;
        }
        func_00215230(-1, 0x400);
    } else if (st == 1) {
            V4Q v;
            u8 *t;
            func_0020D780(&v);
            *(void **)(s + 0x4) = &v;
            *(s16 *)(s + 0x20) = 0xF;
            *(s16 *)(s + 0x22) = 0;
            *(s16 *)(s + 0x24) = 0;
            jtbl_00469CC4[0](s);
            t = amTask_Create((void *)func_00216880, 0, 0x5A00, 0x400, 0x40002, D_00469CD8);
            if (t != 0) {
                memset(t + 0x30, 0, 0x10);
                *(s32 *)(D_0046FDD0 + 0x1A8) = (s32)t;
                *(s32 *)(D_0046FDD0 + 0x1AC) = 0x42C80000;
            }
            *(s16 *)(s + 0x22) = 0;
            *(s16 *)(s + 0x20) = 0x10;
            *(s16 *)(s + 0x24) = 0;
            D_00469CCC[0](s);
        
    } else {
    }
}
// differs: the st == 2 arm (out of line in the original, after the st == 1 arm) and the else layout: 16 bytes short; the branches with an explicit else and with the arms swapped were tried
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00217390);
void func_002174C0(u8 *s) {
    V4Q v;
    func_0020D780(&v);
    *(s16 *)(s + 0x20) = 0x15;
    *(s16 *)(s + 0x22) = 0;
    *(s16 *)(s + 0x24) = 0;
    jtbl_00469CC4[0](s);
    *(s16 *)(s + 0x20) = 5;
    *(s32 *)(s + 0x28) = 0x3F800000;
    D_00469CC8[0](s);
    *(void **)(s + 0x4) = &v;
    *(s16 *)(s + 0x20) = 0x16;
    jtbl_00469CC4[0](s);
}
void func_00217550(u8 *s) {
    V4Q v;
    func_0020D780(&v);
    *(void **)(s + 0x4) = &v;
    *(s16 *)(s + 0x20) = 0x16;
    *(s16 *)(s + 0x22) = 0;
    *(s16 *)(s + 0x24) = 0;
    jtbl_00469CC4[0](s);
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_002175A0);
void func_00217870(u8 *s) {
    V4Q v;
    func_0020D780(&v);
    *(void **)(s + 0x4) = &v;
    *(s16 *)(s + 0x20) = 0xB;
    *(s16 *)(s + 0x22) = 0;
    *(s16 *)(s + 0x24) = 0;
    jtbl_00469CC4[0](s);
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_002178C0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_002179E0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00217B00);
void func_00217B70(u8 *s) {
    V4Q v;
    func_0020D780(&v);
    *(void **)(s + 0x4) = &v;
    *(s16 *)(s + 0x20) = 0x6;
    *(s16 *)(s + 0x22) = 0;
    *(s16 *)(s + 0x24) = 0;
    jtbl_00469CC4[0](s);
}
void func_00217BC0(u8 *s) {
    V4Q v;
    func_0020D780(&v);
    *(s16 *)(s + 0x20) = 4;
    *(s16 *)(s + 0x22) = 0;
    *(s16 *)(s + 0x24) = 0;
    jtbl_00469CC4[0](s);
    *(s16 *)(s + 0x20) = 5;
    *(s32 *)(s + 0x28) = 0x3F800000;
    D_00469CC8[0](s);
    *(void **)(s + 0x4) = &v;
    *(s16 *)(s + 0x20) = 3;
    jtbl_00469CC4[0](s);
}
void func_00217C50(u8 *s) {
    V4Q v;
    func_0020D780(&v);
    *(void **)(s + 0x4) = &v;
    *(s16 *)(s + 0x20) = 1;
    *(s16 *)(s + 0x22) = 0;
    *(s16 *)(s + 0x24) = 0;
    jtbl_00469CC4[0](s);
    *(s16 *)(s + 0x20) = 2;
    D_00469CC0[0]((s32)s);
}
void func_00217CC0(u8 *s) {
    V4Q v;
    func_0020D780(&v);
    *(void **)(s + 0x4) = &v;
    *(s16 *)(s + 0x20) = 0x1;
    *(s16 *)(s + 0x22) = 0;
    *(s16 *)(s + 0x24) = 0;
    jtbl_00469CC4[0](s);
}
void func_00217D10(u8 *p) {
    if (*(s32 *)(p + 0xC) != 0) {
        func_00216150(*(s32 *)(p + 0x10));
    } else {
        func_00216150(-1);
        func_002CA290(-1);
        func_00215230(-1, 0x10);
    }
}
s32 func_00217D70(void) {
    Blk44 a;
    Blk44 b;
    memset(&a, 0, 0x2C);
    b = a;
    D_00469CB0[0](&b);
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00217DD0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00217F70);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_002181A0);
void func_002183F0(s32 i, s32 a) {
    if (i >= 0 && i < 0x4) {
        D_00469CC0[i](a);
    }
}
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
void func_00218610(void) {
    amTask_Create((void *)func_00216EF0, 0, 0x5A00, 0x400, 0x40002, D_00469CF8);
    amTask_Create((void *)func_00216D20, 0, 0x3780, 0x400, 0x40002, D_00469D00);
}
void func_00216270(s32);

void func_00218680(s32 a) {
    func_00216270(a);
}
s32 func_00218690(void) {
    *(s32 *)(D_0046FDD0 + 0x180) = amCdFs_ReadFileId(0x1E7, 0, 1);
    return *(s32 *)(D_0046FDD0 + 0x180);
}
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
#if 0
s32 func_00218A60(s32 a0, s32 a1) {
    u8 *s1;
    u8 *q;
    s32 n;
    if (a0 > 2) {
        a0 = 2;
    } else {
        if (a0 < 0) {
            a0 = 0;
        }
    }
    if (a1 > 4) {
        a1 = 4;
    } else {
        if (a1 < 0) {
            a1 = 0;
        }
    }
    s1 = D_0046A380 + a0 * 10 + a1 * 2;
    n = 0;
    q = s1;
    while (n < 4 && *(s8 *)q < 0) {
        q++;
        n++;
    }
    if (n > 0) {
        if (n == 1) {
            return *(s8 *)s1;
        }
        return *(s8 *)(s1 + (u32)func_0012EAE0(0x20) % (u32)n);
    }
    return -1;
}
// differs: 49 of 65 differ: the clamps are right up to the x < 0 arm, but the original leaves a b before that arm's move (a0 = 0 sits in its delay slot), which this layout does not give (the same as func_00218990); the rest (the table index, the loop, the divu) is not compared yet
#endif
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
#if 0
void func_00218C40(u8 *s, f32 a, f32 b) {
    u8 *o = *(u8 **)(s + 0x1C);
    if (o != 0) {
        *(u8 **)(o + 0x30) = s;
    } else {
        u8 *n = amTask_Create((void *)func_002186D0, 0, 0x4080, 0x20, 0x800002, D_0046A3B8);
        *(u8 **)(n + 0x30) = s;
        o = n;
    }
    *(f32 *)(o + 0x34) = *(f32 *)s;
    *(f32 *)(o + 0x38) = a;
    *(s32 *)(o + 0x3C) = 0;
    *(f32 *)(o + 0x40) = b;
    *(u8 **)(s + 0x1C) = o;
}
// differs: 4 of 36 differ, all in the create branch: the argument registers of amTask_Create are set in another order (t1 is loaded before t0 in the original, the store to 0x30 uses the returned v0 before the move into v1)
#endif
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
void func_00219340(u8 *s, f32 v) {
    *(f32 *)s = v;
    if (*(s32 *)(s + 0x8) >= 0 && *(s32 *)(s + 0x8) < 5) {
        amAdx_SetVolume(*(s32 *)(s + 0x8), *(f32 *)s * *(f32 *)(s + 0x4));
    }
}
void func_00219390(u8 *s) {
    if (*(s32 *)(s + 0x8) >= 0 && *(s32 *)(s + 0x8) < 5) {
        amAdx_Stop(*(s32 *)(s + 0x8));
    }
    if (*(s32 *)(s + 0x8) != 0 && *(s32 *)(s + 0x8) != 1) {
        *(s32 *)(s + 0x8) = -1;
    }
    *(s32 *)(s + 0xC) = 0;
    *(s32 *)(s + 0x10) = 0;
    *(s16 *)(s + 0x14) = -1;
    *(s16 *)(s + 0x16) = -1;
    *(s32 *)(s + 0x18) = 0xBF800000;
}
void func_00219410(u8 *s) {
    func_002194C0(s);
    if (*(s32 *)(s + 0xC) == 2 || *(s32 *)(s + 0xC) == 1) {
        amAdx_Pause(*(s32 *)(s + 0x8), 0);
        *(s32 *)(s + 0xC) = 3;
    }
}
void func_00219470(u8 *s) {
    if (*(s32 *)(s + 0xC) == 2 || *(s32 *)(s + 0xC) == 1) {
        amAdx_Pause(*(s32 *)(s + 0x8), 0);
        *(s32 *)(s + 0xC) = 3;
    }
}
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
void func_00219A40(void) {
    D_00470670 = (s32)amTask_Create(func_00218880, 0, 0x9F00, 0x20, 0x800001, D_0046A3C8);
}
